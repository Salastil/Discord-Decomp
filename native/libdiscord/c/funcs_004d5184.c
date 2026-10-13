// ===== 004d5184  FUN_004d5184 =====

undefined8 * FUN_004d5184(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)operator_new(8);
  lVar4 = *param_1;
  *puVar1 = 0;
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_004a2934();
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,*param_1);
    *puVar1 = uVar3;
  }
  return puVar1;
}


// ===== 004d51d4  FUN_004d51d4 =====

void FUN_004d51d4(long *param_1)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = (long *)FUN_004a2934();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 004d5210  FUN_004d5210 =====

void FUN_004d5210(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined1 *__src;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 **__dest;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *local_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  long local_58;
  
  __dest = &local_80;
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  param_1 = (undefined8 *)*param_1;
  uVar4 = FUN_004a2934();
  FUN_004c1850(auStack_60,uVar4);
  FUN_004c1b20(auStack_68,0x80);
  lVar5 = FUN_004a3bd4();
  uVar4 = *param_1;
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
  uVar8 = *(undefined8 *)(lVar5 + 0x4e8);
  uVar6 = FUN_004a3de8(&local_80);
  uVar7 = FUN_004a2934();
  FUN_004c2120(uVar7,uVar4,uVar8,uVar6,param_3);
  if ((long)local_70 < 0) {
    operator_delete(local_80);
  }
  FUN_004c1b84(auStack_68);
  FUN_004c1858(auStack_60);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d538c  FUN_004d538c =====

undefined8 * FUN_004d538c(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)operator_new(8);
  lVar4 = *param_1;
  *puVar1 = 0;
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_004a2934();
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,*param_1);
    *puVar1 = uVar3;
  }
  return puVar1;
}


// ===== 004d53dc  FUN_004d53dc =====

void FUN_004d53dc(long *param_1)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = (long *)FUN_004a2934();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 004d5418  FUN_004d5418 =====

void FUN_004d5418(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar8;
  long *plVar9;
  undefined1 auStack_140 [40];
  undefined1 auStack_118 [48];
  void *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  ulong local_c8;
  long local_c0;
  void *local_b8;
  char local_a1;
  void *local_78;
  char local_61;
  long local_58;
  undefined8 *puVar7;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_004d9768(auStack_118);
  FUN_004df134(auStack_140,0);
  uVar3 = FUN_004d9798(auStack_118,param_2,auStack_140,0);
  if ((uVar3 & 1) == 0) {
    *(undefined8 *)((long)param_1 + 0x91) = 0;
    *(undefined8 *)((long)param_1 + 0x89) = 0;
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
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
    FUN_004d567c(param_1,auStack_140);
  }
  FUN_004df880(auStack_140);
  if (local_61 < '\0') {
    operator_delete(local_78);
  }
  if (local_a1 < '\0') {
    operator_delete(local_b8);
  }
  puVar8 = local_e0;
  if (local_d8 != local_e0) {
    uVar3 = local_c0 + local_c8;
    plVar9 = local_e0 + local_c8 / 0x49;
    lVar5 = local_e0[uVar3 / 0x49];
    lVar4 = *plVar9;
    lVar1 = lVar4 + (local_c8 % 0x49) * 0x38;
    puVar8 = local_d8;
    while (local_d8 = puVar8, lVar1 != lVar5 + (uVar3 % 0x49) * 0x38) {
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                   ,0x3f,"__loc != nullptr","null pointer given to destroy_at");
      }
      if (*(char *)(lVar1 + 0x2f) < '\0') {
        operator_delete(*(void **)(lVar1 + 0x18));
        lVar4 = *plVar9;
      }
      lVar1 = lVar1 + 0x38;
      puVar8 = local_d8;
      if (lVar1 - lVar4 == 0xff8) {
        plVar9 = plVar9 + 1;
        lVar4 = *plVar9;
        lVar1 = lVar4;
      }
    }
  }
  local_c0 = 0;
  uVar3 = (long)puVar8 - (long)local_e0;
  while (0x10 < uVar3) {
    operator_delete((void *)*local_e0);
    local_e0 = local_e0 + 1;
    puVar8 = local_d8;
    uVar3 = (long)local_d8 - (long)local_e0;
  }
  if (uVar3 >> 3 == 1) {
    local_c8 = 0x24;
  }
  else if (uVar3 >> 3 == 2) {
    local_c8 = 0x49;
  }
  puVar6 = local_e0;
  if (local_e0 != puVar8) {
    do {
      puVar7 = puVar6 + 1;
      operator_delete((void *)*puVar6);
      puVar6 = puVar7;
    } while (puVar7 != puVar8);
    if (local_d8 != local_e0) {
      local_d8 = (undefined8 *)
                 ((long)local_d8 + ((long)local_e0 + (7 - (long)local_d8) & 0xfffffffffffffff8U));
    }
  }
  if (local_e8 != (void *)0x0) {
    operator_delete(local_e8);
  }
  FUN_004491b8(auStack_118);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d567c  FUN_004d567c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004d567c(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  size_t __n;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 *******__src;
  ulong uVar5;
  undefined8 *******pppppppuVar6;
  undefined2 local_180;
  undefined2 local_178;
  undefined1 local_176;
  void *local_170;
  undefined8 uStack_168;
  ulong local_160;
  char local_158;
  void *local_150;
  undefined8 uStack_148;
  ulong local_140;
  char local_138;
  undefined8 *******local_130;
  ulong uStack_128;
  ulong local_120;
  undefined1 local_118;
  undefined4 local_110;
  undefined1 local_10c;
  undefined4 local_108 [2];
  undefined8 *******local_100;
  ulong uStack_f8;
  undefined8 local_f0;
  undefined2 local_e8;
  undefined1 local_e6;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  void *local_a0;
  undefined8 uStack_98;
  ulong local_90;
  void *local_88;
  undefined8 uStack_80;
  ulong local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_004e05d4();
  if (((((uVar5 & 1) == 0) || (uVar5 = FUN_004e1714(param_2,&DAT_001c7baf), (uVar5 & 1) == 0)) ||
      (uVar5 = FUN_004e1714(param_2,"address"), (uVar5 & 1) == 0)) ||
     (uVar5 = FUN_004e1714(param_2,&DAT_001c7ffa), (uVar5 & 1) == 0)) {
    if (*(long *)(lVar2 + 0x28) == local_70) {
      *(undefined8 *)((long)param_1 + 0x91) = 0;
      *(undefined8 *)((long)param_1 + 0x89) = 0;
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
      param_1[0xf] = 0;
      param_1[0xe] = 0;
      param_1[0x11] = 0;
      param_1[0x10] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    goto LAB_004d5b7c;
  }
  uVar5 = FUN_004e1714(param_2,&DAT_001c7baf);
  if ((uVar5 & 1) == 0) {
    local_110 = 0;
    local_10c = 0;
  }
  else {
    FUN_004e12e0(param_2,&DAT_001c7baf);
    FUN_004c1a48(&local_110);
  }
  pppppppuVar6 = &local_100;
  local_108[0] = local_110;
  uVar5 = FUN_004e1714(param_2,"address");
  if ((uVar5 & 1) == 0) {
    local_130 = (undefined8 *******)0x0;
    uStack_128 = 0;
    local_118 = 0;
    local_120 = 0;
LAB_004d57e4:
    uStack_f8 = uStack_128;
    local_100 = local_130;
    local_f0 = local_120;
  }
  else {
    FUN_004e12e0(param_2,"address");
    FUN_004c191c(&local_130);
    uVar5 = uStack_128;
    __src = local_130;
    if (-1 < (long)local_120) goto LAB_004d57e4;
    if (uStack_128 < 0x17) {
      local_f0 = CONCAT17((char)uStack_128,(undefined7)local_f0);
    }
    else {
      if (0x7fffffffffffffef < uStack_128) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uStack_128 | 0xf) + 1;
      pppppppuVar6 = (undefined8 *******)operator_new(uVar1);
      local_f0 = uVar1 | 0x8000000000000000;
      uStack_f8 = uVar5;
      local_100 = pppppppuVar6;
    }
    __n = uVar5 + 1;
    if ((pppppppuVar6 <= __src) && (__src < (undefined8 *******)((long)pppppppuVar6 + __n))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(pppppppuVar6,__src,__n);
  }
  uVar5 = FUN_004e1714(param_2,&DAT_001c7ffa);
  if ((uVar5 & 1) == 0) {
    local_178 = 0;
    local_176 = 0;
  }
  else {
    FUN_004e12e0(param_2,&DAT_001c7ffa);
    FUN_004c1a00(&local_178);
  }
  local_e8 = local_178;
  uVar5 = FUN_004e1714(param_2,"qosEnabled");
  if ((uVar5 & 1) == 0) {
    local_e6 = false;
    local_180 = 0;
  }
  else {
    FUN_004e12e0(param_2,"qosEnabled");
    FUN_004c18d0(&local_180);
    local_e6 = local_180._1_1_ != '\0' && (char)local_180 != '\0';
  }
  uVar5 = FUN_004e1714(param_2,"experiments");
  if ((uVar5 & 1) == 0) {
    local_e0 = 0;
    uStack_d8 = 0;
    local_c8 = 0;
    local_d0 = 0;
  }
  else {
    FUN_004e12e0(param_2,"experiments");
    FUN_004d4850(&local_e0);
  }
  uVar5 = FUN_004e1714(param_2,"streamParameters");
  if ((uVar5 & 1) == 0) {
    local_c0 = 0;
    uStack_b8 = 0;
    local_a8 = 0;
    local_b0 = 0;
  }
  else {
    FUN_004e12e0(param_2,"streamParameters");
    FUN_004cb584(&local_c0);
  }
  uVar5 = FUN_004e1714(param_2,"signingKeyId");
  if ((uVar5 & 1) == 0) {
    local_150 = (void *)0x0;
    uStack_148 = 0;
    local_138 = '\0';
    local_140 = 0;
LAB_004d5978:
    local_90 = local_90 & 0xffffffffffffff;
    local_a0 = (void *)((ulong)local_a0 & 0xffffffffffffff00);
  }
  else {
    FUN_004e12e0(param_2,"signingKeyId");
    FUN_004c191c(&local_150);
    uVar5 = local_140;
    uVar4 = uStack_148;
    pvVar3 = local_150;
    if (local_138 == '\0') goto LAB_004d5978;
    local_150 = (void *)0x0;
    uStack_148 = 0;
    local_140 = 0;
    uStack_98 = uVar4;
    local_a0 = pvVar3;
    local_90 = uVar5;
  }
  uVar5 = FUN_004e1714(param_2,"context");
  if ((uVar5 & 1) == 0) {
    local_170 = (void *)0x0;
    uStack_168 = 0;
    local_158 = '\0';
    local_160 = 0;
LAB_004d59ec:
    local_78 = local_78 & 0xffffffffffffff;
    local_88 = (void *)((ulong)local_88 & 0xffffffffffffff00);
  }
  else {
    FUN_004e12e0(param_2,"context");
    FUN_004c191c(&local_170);
    uVar5 = local_160;
    uVar4 = uStack_168;
    pvVar3 = local_170;
    if (local_158 == '\0') goto LAB_004d59ec;
    local_170 = (void *)0x0;
    uStack_168 = 0;
    local_160 = 0;
    uStack_80 = uVar4;
    local_88 = pvVar3;
    local_78 = uVar5;
  }
  uVar1 = local_f0;
  uVar5 = uStack_f8;
  pppppppuVar6 = local_100;
  local_100 = (undefined8 *******)0x0;
  uStack_f8 = 0;
  local_f0 = 0;
  *(undefined4 *)param_1 = local_108[0];
  param_1[2] = uVar5;
  param_1[1] = pppppppuVar6;
  param_1[3] = uVar1;
  *(undefined2 *)(param_1 + 4) = local_e8;
  param_1[6] = uStack_d8;
  param_1[5] = local_e0;
  *(undefined1 *)((long)param_1 + 0x22) = local_e6;
  param_1[7] = local_d0;
  param_1[10] = uStack_b8;
  param_1[9] = local_c0;
  uStack_d8 = 0;
  local_d0 = 0;
  *(undefined1 *)(param_1 + 8) = local_c8;
  param_1[0xe] = uStack_98;
  param_1[0xd] = local_a0;
  local_e0 = 0;
  param_1[0xb] = local_b0;
  local_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  *(undefined1 *)(param_1 + 0xc) = local_a8;
  local_b0 = 0;
  local_a8 = 0;
  param_1[0x12] = local_78;
  param_1[0xf] = local_90;
  local_a0 = (void *)0x0;
  uStack_98 = 0;
  local_90 = 0;
  param_1[0x11] = uStack_80;
  param_1[0x10] = local_88;
  local_88 = (void *)0x0;
  uStack_80 = 0;
  local_78 = 0;
  *(undefined1 *)(param_1 + 0x13) = 1;
  FUN_004037cc(local_108);
  if ((long)local_160 < 0) {
    operator_delete(local_170);
  }
  if ((long)local_140 < 0) {
    operator_delete(local_150);
  }
  if ((long)local_120 < 0) {
    operator_delete(local_130);
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
LAB_004d5b7c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d5b80  FUN_004d5b80 =====

/* WARNING: Removing unreachable block (ram,0x004d5d74) */

void FUN_004d5b80(undefined8 *param_1,char *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  undefined1 *__src;
  ulong uVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 ****ppppuVar8;
  undefined1 **__dest;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 *local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  undefined8 ***local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined8 ***local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  long local_68;
  
  __dest = &local_d0;
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  param_1 = (undefined8 *)*param_1;
  uVar6 = FUN_004a2934();
  FUN_004c1850(auStack_70,uVar6);
  FUN_004c1b20(auStack_78,0x80);
  lVar7 = FUN_004a3bd4();
  cVar4 = *param_2;
  if (param_2[0x1f] < '\0') {
    ppppuVar2 = *(undefined8 *****)(param_2 + 8);
    uVar3 = *(ulong *)(param_2 + 0x10);
    if (uVar3 < 0x17) {
      ppppuVar8 = &local_90;
      local_80 = CONCAT17((char)uVar3,(undefined7)local_80);
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar3 | 0xf) + 1;
      ppppuVar8 = (undefined8 ****)operator_new(uVar1);
      local_80 = uVar1 | 0x8000000000000000;
      local_90 = ppppuVar8;
      uStack_88 = uVar3;
    }
    if ((ppppuVar8 <= ppppuVar2) && (ppppuVar2 < (undefined8 ****)((long)ppppuVar8 + uVar3 + 1)))
    goto LAB_004d5e5c;
    memmove(ppppuVar8,ppppuVar2,uVar3 + 1);
    if (param_2[0x37] < '\0') goto LAB_004d5c88;
LAB_004d5c04:
    uStack_a8 = *(ulong *)(param_2 + 0x28);
    local_b0 = *(undefined8 ****)(param_2 + 0x20);
    local_a0 = *(ulong *)(param_2 + 0x30);
  }
  else {
    uStack_88 = *(ulong *)(param_2 + 0x10);
    local_90 = *(undefined8 ****)(param_2 + 8);
    local_80 = *(ulong *)(param_2 + 0x18);
    if (-1 < param_2[0x37]) goto LAB_004d5c04;
LAB_004d5c88:
    ppppuVar2 = *(undefined8 *****)(param_2 + 0x20);
    uVar3 = *(ulong *)(param_2 + 0x28);
    if (uVar3 < 0x17) {
      ppppuVar8 = &local_b0;
      local_a0 = CONCAT17((char)uVar3,(undefined7)local_a0);
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar3 | 0xf) + 1;
      ppppuVar8 = (undefined8 ****)operator_new(uVar1);
      local_a0 = uVar1 | 0x8000000000000000;
      local_b0 = ppppuVar8;
      uStack_a8 = uVar3;
    }
    if ((ppppuVar8 <= ppppuVar2) && (ppppuVar2 < (undefined8 ****)((long)ppppuVar8 + uVar3 + 1)))
    goto LAB_004d5e5c;
    memmove(ppppuVar8,ppppuVar2,uVar3 + 1);
  }
  uVar3 = 0;
  if (param_2[0x40] != 0) {
    uVar3 = (ulong)*(uint *)(param_2 + 0x3c);
  }
  uVar1 = 0;
  if (param_2[0x48] != 0) {
    uVar1 = (ulong)*(uint *)(param_2 + 0x44);
  }
  uVar6 = FUN_004d5e94(lVar7 + 0x2d0,cVar4 != '\0',&local_90,&local_b0,
                       *(undefined2 *)(param_2 + 0x38),uVar3 | (ulong)(byte)param_2[0x40] << 0x20,
                       uVar1 | (ulong)(byte)param_2[0x48] << 0x20);
  if ((long)local_a0 < 0) {
    operator_delete(local_b0);
  }
  uVar12 = *param_1;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    __src = (undefined1 *)*param_3;
    uVar3 = param_3[1];
    if (uVar3 < 0x17) {
      local_c0 = CONCAT17((char)uVar3,(undefined7)local_c0);
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar3 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar1);
      local_c0 = uVar1 | 0x8000000000000000;
      local_d0 = (undefined1 *)__dest;
      uStack_c8 = uVar3;
    }
    if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar3 + 1))) {
LAB_004d5e5c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar3 + 1);
  }
  else {
    uStack_c8 = param_3[1];
    local_d0 = (undefined1 *)*param_3;
    local_c0 = param_3[2];
  }
  uVar11 = *(undefined8 *)(lVar7 + 0x4a8);
  uVar9 = FUN_004a3de8(&local_d0);
  uVar10 = FUN_004a2934();
  FUN_004c2120(uVar10,uVar12,uVar11,uVar6,uVar9);
  if ((long)local_c0 < 0) {
    operator_delete(local_d0);
  }
  FUN_004c1b84(auStack_78);
  FUN_004c1858(auStack_70);
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d5e94  FUN_004d5e94 =====

void FUN_004d5e94(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,ulong param_6,ulong param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = FUN_004a2934();
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar4 = FUN_004a3de8(param_3);
  uVar5 = FUN_004a3de8(param_4);
  if ((param_6 & 0xff00000000) == 0) {
    uVar7 = 0;
  }
  else {
    plVar6 = (long *)FUN_004a2934();
    uVar7 = (**(code **)(*plVar6 + 0x30))(plVar6,"java/lang/Integer");
    uVar8 = (**(code **)(*plVar6 + 0x108))(plVar6,uVar7,"<init>",&DAT_001c5146);
    uVar7 = FUN_004b8418(plVar6,uVar7,uVar8,param_6 & 0xffffffff);
  }
  if ((param_7 & 0xff00000000) == 0) {
    uVar8 = 0;
  }
  else {
    plVar6 = (long *)FUN_004a2934();
    uVar8 = (**(code **)(*plVar6 + 0x30))(plVar6,"java/lang/Integer");
    uVar9 = (**(code **)(*plVar6 + 0x108))(plVar6,uVar8,"<init>",&DAT_001c5146);
    uVar8 = FUN_004b8418(plVar6,uVar8,uVar9,param_7 & 0xffffffff);
  }
  FUN_004b8418(uVar3,uVar2,uVar1,param_2 & 1,uVar4,uVar5,param_5,uVar7,uVar8);
  return;
}


// ===== 004d6018  FUN_004d6018 =====

undefined8 * FUN_004d6018(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)operator_new(8);
  lVar4 = *param_1;
  *puVar1 = 0;
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_004a2934();
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,*param_1);
    *puVar1 = uVar3;
  }
  return puVar1;
}


// ===== 004d6068  FUN_004d6068 =====

void FUN_004d6068(long *param_1)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = (long *)FUN_004a2934();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 004d60a4  FUN_004d60a4 =====

void FUN_004d60a4(void)

{
  return;
}


// ===== 004d60a8  Java_co_discord_media_1engine_SoundshareAudioSource_nativeSetSampleFormat =====

void Java_co_discord_media_1engine_SoundshareAudioSource_nativeSetSampleFormat
               (undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  FUN_004d6840(*(undefined8 *)(param_3 + 0x10),param_4,param_5,param_6);
  return;
}


// ===== 004d60bc  Java_co_discord_media_1engine_SoundshareAudioSource_nativeCacheDirectBufferAddress =====

void Java_co_discord_media_1engine_SoundshareAudioSource_nativeCacheDirectBufferAddress
               (long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x730))(param_1,param_4);
  uVar2 = (**(code **)(*param_1 + 0x738))(param_1,param_4);
  *param_3 = uVar1;
  param_3[1] = uVar2;
  return;
}


// ===== 004d6114  Java_co_discord_media_1engine_SoundshareAudioSource_nativeDataIsRecorded =====

void Java_co_discord_media_1engine_SoundshareAudioSource_nativeDataIsRecorded
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
               undefined8 param_5)

{
  FUN_004d68dc(param_3[2],*param_3,param_3[1],param_5);
  return;
}


// ===== 004d6124  Java_co_discord_media_1engine_SoundshareAudioSource_nativeCreateInstance =====

undefined8 * Java_co_discord_media_1engine_SoundshareAudioSource_nativeCreateInstance(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar3 = (undefined8 *)operator_new(0xa0);
  uVar1 = DAT_001f5b48;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_00d1f460;
  puVar3[8] = 0;
  puVar3[7] = 0;
  puVar3[10] = 0;
  puVar3[9] = 0;
  puVar3[0xc] = 0;
  puVar3[0xb] = 0;
  puVar3[0xe] = 0;
  puVar3[0xd] = 0;
  puVar3[4] = 0;
  puVar3[3] = 0;
  puVar3[0x12] = 0;
  puVar3[0x11] = 0;
  puVar3[0x13] = 0;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[0x10] = 0;
  puVar3[0xf] = 0;
  puVar3[8] = uVar1;
  *(undefined4 *)(puVar3 + 9) = 2;
  puVar3[0xb] = 0;
  puVar3[10] = 0;
  puVar3[0xd] = 0;
  puVar3[0xc] = 0;
  puVar3[0xf] = 0;
  puVar3[0xe] = 0;
  puVar3[0x11] = 0;
  puVar3[0x10] = 0;
  *(undefined8 *)((long)puVar3 + 0x91) = 0;
  *(undefined8 *)((long)puVar3 + 0x89) = 0;
  FUN_007b5d10();
  *(undefined1 *)(puVar3 + 0x13) = 1;
  puVar2[2] = puVar3 + 3;
  puVar2[3] = puVar3;
  return puVar2;
}


// ===== 004d61d0  Java_co_discord_media_1engine_SoundshareAudioSource_nativeDestroyInstance =====

void Java_co_discord_media_1engine_SoundshareAudioSource_nativeDestroyInstance
               (undefined8 param_1,undefined8 param_2,void *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_3 != (void *)0x0) {
    plVar5 = *(long **)((long)param_3 + 0x18);
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
    operator_delete(param_3);
    return;
  }
  return;
}


// ===== 004d6230  FUN_004d6230 =====

void FUN_004d6230(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1f460;
  FUN_005466c0();
  return;
}


// ===== 004d6240  FUN_004d6240 =====

void FUN_004d6240(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1f460;
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 004d6270  FUN_004d6270 =====

void FUN_004d6270(long param_1)

{
  if (*(char *)(param_1 + 0x98) != '\0') {
    FUN_007b5d24(param_1 + 0x78);
  }
  FUN_00546ab0(param_1 + 0x50);
  FUN_00546ab0(param_1 + 0x18);
  return;
}


// ===== 004d62ac  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 004d62b0  FUN_004d62b0 =====

void FUN_004d62b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d1f498;
  param_1[1] = 0;
  uVar2 = FUN_007b8cec(param_3);
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  param_1[8] = 0;
  uVar1 = DAT_001f58a0;
  *(undefined2 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 4) = uVar2;
  param_1[10] = param_2;
  param_1[0xb] = 0;
  *(undefined8 *)((long)param_1 + 0x34) = uVar1;
  return;
}


// ===== 004d630c  FUN_004d630c =====

undefined8 FUN_004d630c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x34) = param_2[2];
  *(undefined8 *)(param_1 + 0x2c) = uVar2;
  *(undefined8 *)(param_1 + 0x24) = uVar1;
  return 1;
}


// ===== 004d6328  FUN_004d6328 =====

ulong FUN_004d6328(long param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long *local_1d8;
  long *local_1d0;
  long *local_1c8 [17];
  long *local_140;
  undefined8 local_138;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_004d6524();
  if (*(char *)(param_1 + 0x49) == '\0') {
    uVar3 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x20) != 3) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x004d64b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(**(long **)(param_1 + 0x50) + 0x20))
                          (*(long **)(param_1 + 0x50),param_2,param_3 & 1,param_4);
        return uVar3;
      }
      goto LAB_004d6520;
    }
    FUN_004b8af8(local_1c8,param_2);
    local_1d8 = local_1c8[0];
    local_1c8[0] = (long *)0x0;
    FUN_004b863c(&local_1d0,&local_1d8);
    if (local_1d8 != (long *)0x0) {
      (**(code **)(*local_1d8 + 8))();
    }
    if (local_1c8[0] != (long *)0x0) {
      (**(code **)(*local_1c8[0] + 8))();
    }
    if (local_1d0 == (long *)0x0) {
      uVar3 = FUN_004249b0();
      if ((uVar3 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,
                     "../../discord_native_lib/src/media/video_coding/decoding/android/limited_android_decoder.cpp"
                     ,0x37b,"Failed to ensure AV1 OBUs are sized");
      }
      uVar3 = 0xffffffff;
    }
    else {
      FUN_007bc958(local_1c8,param_2);
      plVar2 = local_1d0;
      if (local_1d0 != (long *)0x0) {
        (**(code **)*local_1d0)(local_1d0);
        (**(code **)*plVar2)(plVar2);
      }
      if (local_140 != (long *)0x0) {
        (**(code **)(*local_140 + 8))();
      }
      local_140 = plVar2;
      local_138 = (**(code **)(*plVar2 + 0x28))(plVar2);
      (**(code **)(*plVar2 + 8))(plVar2);
      uVar3 = (**(code **)(**(long **)(param_1 + 0x50) + 0x20))
                        (*(long **)(param_1 + 0x50),local_1c8,param_3 & 1,param_4);
      uVar3 = uVar3 & 0xffffffff;
      FUN_007bca94(local_1c8);
    }
    if (local_1d0 != (long *)0x0) {
      (**(code **)(*local_1d0 + 8))();
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar3;
  }
LAB_004d6520:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d6524  FUN_004d6524 =====

void FUN_004d6524(long param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  
  if ((*(char *)(param_1 + 0x49) == '\0') &&
     (lVar4 = FUN_005183d8(), 5000000000 < (ulong)(lVar4 - *(long *)(param_1 + 0x58)))) {
    while (uVar3 = DAT_00d61070, DAT_00d61070 < 0xc) {
      uVar6 = DAT_00d61070 + 1;
      while (DAT_00d61070 == uVar3) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0xd61070,0x10);
        if (bVar2) {
          cVar1 = ExclusiveMonitorsStatus();
          DAT_00d61070 = uVar6;
        }
        if (cVar1 == '\0') {
          *(long *)(param_1 + 0x58) = lVar4;
          uVar5 = *(ulong *)(param_1 + 0x10);
          if (-1 < (char)*(byte *)(param_1 + 0x1f)) {
            uVar5 = (ulong)*(byte *)(param_1 + 0x1f);
          }
          if (uVar5 != 0) {
            (**(code **)(**(long **)(param_1 + 0x50) + 0x48))
                      (*(long **)(param_1 + 0x50),param_1 + 8);
          }
          uVar5 = (**(code **)(**(long **)(param_1 + 0x50) + 0x10))
                            (*(long **)(param_1 + 0x50),param_1 + 0x24);
          if ((uVar5 & 1) != 0) {
            if (*(long *)(param_1 + 0x40) != 0) {
              (**(code **)(**(long **)(param_1 + 0x50) + 0x28))();
            }
            *(undefined1 *)(param_1 + 0x48) = 1;
            if (*(char *)(param_1 + 0x49) != '\0') {
              return;
            }
            *(undefined1 *)(param_1 + 0x49) = 1;
            return;
          }
          (**(code **)(**(long **)(param_1 + 0x50) + 0x30))();
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(0xd61070,0x10);
            if (bVar2) {
              cVar1 = ExclusiveMonitorsStatus();
              DAT_00d61070 = DAT_00d61070 - 1;
            }
          } while (cVar1 != '\0');
          return;
        }
      }
      ClearExclusiveLocal();
    }
  }
  return;
}


// ===== 004d6638  FUN_004d6638 =====

undefined8 FUN_004d6638(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x40) = param_2;
  if (*(char *)(param_1 + 0x49) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x004d6650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x50) + 0x28))();
    return uVar1;
  }
  return 0;
}


// ===== 004d665c  FUN_004d665c =====

undefined8 FUN_004d665c(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (*(char *)(param_1 + 0x49) == '\0') {
    return 0;
  }
  cVar1 = *(char *)(param_1 + 0x48);
  while (cVar1 != '\0') {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0xd61070,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      DAT_00d61070 = DAT_00d61070 + -1;
    }
  }
  *(undefined1 *)(param_1 + 0x49) = 0;
                    /* WARNING: Could not recover jumptable at 0x004d669c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(**(long **)(param_1 + 0x50) + 0x30))(*(long **)(param_1 + 0x50));
  return uVar3;
}


// ===== 004d66a8  FUN_004d66a8 =====

char * FUN_004d66a8(long param_1)

{
  char *pcVar1;
  
  if (*(char *)(param_1 + 0x49) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x004d66bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar1 = (char *)(**(code **)(**(long **)(param_1 + 0x50) + 0x40))();
    return pcVar1;
  }
  pcVar1 = "Limited: Waiting";
  if (DAT_00d61070 < 0xc) {
    pcVar1 = "Limited: Uninitialized";
  }
  return pcVar1;
}


// ===== 004d66e4  FUN_004d66e4 =====

void FUN_004d66e4(long param_1,undefined8 param_2)

{
  FUN_00411268(param_1 + 8);
  if (*(char *)(param_1 + 0x49) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x004d6720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x50) + 0x48))(*(long **)(param_1 + 0x50),param_2);
    return;
  }
  return;
}


// ===== 004d6730  FUN_004d6730 =====

void FUN_004d6730(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[10];
  param_1[10] = 0;
  *param_1 = &PTR_FUN_00d1f498;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (*(char *)((long)param_1 + 0x49) != '\0') {
    cVar1 = *(char *)(param_1 + 9);
    while (cVar1 != '\0') {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xd61070,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        DAT_00d61070 = DAT_00d61070 + -1;
      }
    }
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 004d67b0  FUN_004d67b0 =====

void FUN_004d67b0(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[10];
  param_1[10] = 0;
  *param_1 = &PTR_FUN_00d1f498;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (*(char *)((long)param_1 + 0x49) != '\0') {
    cVar1 = *(char *)(param_1 + 9);
    while (cVar1 != '\0') {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xd61070,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        DAT_00d61070 = DAT_00d61070 + -1;
      }
    }
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
  }
  operator_delete(param_1);
  return;
}


// ===== 004d682c  FUN_004d682c =====

void FUN_004d682c(long *param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x004d683c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,param_2,0,param_3);
  return;
}


// ===== 004d6840  FUN_004d6840 =====

void FUN_004d6840(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_005467a4();
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  *(undefined4 *)(param_1 + 0x30) = param_4;
  FUN_005467c8(param_1);
  return;
}


// ===== 004d6880  FUN_004d6880 =====

void FUN_004d6880(long param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  FUN_005467a4();
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x28);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x2c);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0x30);
  }
  FUN_005467c8(param_1);
  return;
}


// ===== 004d68dc  FUN_004d68dc =====

void FUN_004d68dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 *puStack_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_60 = param_4;
  uStack_58 = param_3;
  FUN_005467a4();
  local_68 = param_2;
  FUN_005467a4(param_1 + 0x38);
  if (*(char *)(param_1 + 0x80) == '\0') {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
               "this->has_value()","optional operator-> called on a disengaged value");
  }
  local_50 = &local_68;
  puStack_48 = &uStack_58;
  local_40 = &local_60;
  FUN_007b6160(param_1 + 0x60,&local_50,FUN_004d69ac);
  FUN_005467c8(param_1 + 0x38);
  FUN_005467c8(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d69ac  FUN_004d69ac =====

void FUN_004d69ac(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x004d69cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))
            (param_2,*(undefined8 *)*param_1,*(undefined8 *)param_1[1],*(undefined8 *)param_1[2]);
  return;
}


// ===== 004d69d0  FUN_004d69d0 =====

void FUN_004d69d0(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  void *pvVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  void *pvVar10;
  
  puVar1 = (undefined8 *)(param_1 + 200);
  FUN_004312b4(puVar1);
  FUN_004312b4(puVar1);
  pvVar9 = *(void **)(param_1 + 200);
  if (pvVar9 != (void *)0x0) {
    pvVar10 = pvVar9;
    pvVar5 = *(void **)(param_1 + 0xd0);
    if (*(void **)(param_1 + 0xd0) != pvVar9) {
      do {
        pvVar10 = (void *)((long)pvVar5 + -0x20);
        pcVar6 = *(code **)(*(long *)((long)pvVar5 + -8) + 8);
        if (pcVar6 != (code *)0x0) {
          (*pcVar6)(*(undefined8 *)((long)pvVar5 + -0x20));
        }
        pvVar5 = pvVar10;
      } while (pvVar10 != pvVar9);
      pvVar10 = (void *)*puVar1;
    }
    *(void **)(param_1 + 0xd0) = pvVar9;
    operator_delete(pvVar10);
  }
  plVar8 = *(long **)(param_1 + 0xb0);
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_005466cc(plVar8);
    }
  }
  FUN_00512bf4(param_1 + 0x40);
  pvVar9 = *(void **)(param_1 + 0x28);
  if (pvVar9 != (void *)0x0) {
    *(void **)(param_1 + 0x30) = pvVar9;
    operator_delete(pvVar9);
  }
  FUN_00546ab0(param_1);
  return;
}


// ===== 004d6aac  FUN_004d6aac =====

void FUN_004d6aac(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined1 local_6c [4];
  undefined1 *local_68;
  long lStack_60;
  code *local_58;
  undefined8 *local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  FUN_004312b4(param_1 + 200);
  if (param_2 == 0) {
    plVar7 = *(long **)(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        FUN_005466cc(plVar7);
        *(undefined1 *)(param_1 + 0xc0) = 0;
        goto joined_r0x004d6c0c;
      }
    }
    *(undefined1 *)(param_1 + 0xc0) = 0;
joined_r0x004d6c0c:
    if (param_3 != (long *)0x0) {
      plVar7 = param_3 + 1;
      do {
        lVar6 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*param_3 + 0x10))(param_3);
        FUN_005466cc(param_3);
      }
    }
    if (*(long *)(lVar5 + 0x28) == local_48) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  if (param_3 != (long *)0x0) {
    plVar7 = param_3 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = *(long **)(param_1 + 0xb0);
  *(long *)(param_1 + 0xa8) = param_2;
  *(long **)(param_1 + 0xb0) = param_3;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_005466cc(plVar7);
    }
  }
  lVar6 = *(long *)(param_1 + 0xa8);
  puVar2 = (undefined1 *)(lVar6 + 0x38);
  FUN_005467a4(puVar2);
  if (*(char *)(lVar6 + 0x80) != '\0') {
    FUN_007b5a0c(lVar6 + 0x60,param_1,param_1,FUN_004d7254);
    FUN_005467c8(puVar2);
    plVar7 = *(long **)(param_1 + 0xd0);
    local_58 = FUN_004d72d0;
    local_50 = (undefined8 *)&DAT_001f7190;
    local_68 = puVar2;
    lStack_60 = param_1;
    if (plVar7 < *(long **)(param_1 + 0xd8)) {
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                   ,0x23,"__location != nullptr","null pointer given to construct_at");
      }
      plVar7[1] = param_1;
      *plVar7 = (long)puVar2;
      plVar7[2] = (long)FUN_004d72d0;
      plVar7[3] = (long)&DAT_001f7190;
      if (DAT_001f7198 != 0) {
        local_58 = FUN_0040dec4;
        local_50 = &DAT_001f1910;
      }
      *(long **)(param_1 + 0xd0) = plVar7 + 4;
    }
    else {
      FUN_004313e8(param_1 + 200,&local_68);
    }
    if ((code *)local_50[1] != (code *)0x0) {
      (*(code *)local_50[1])(local_68);
    }
    lVar6 = *(long *)(param_1 + 0xa0);
    local_6c[0] = 1;
    FUN_005467a4(lVar6 + 0x10);
    if (*(char *)(lVar6 + 0x58) != '\0') {
      local_68 = local_6c;
      FUN_007b6160(lVar6 + 0x38,&local_68,FUN_0046bccc);
      FUN_005467c8(lVar6 + 0x10);
      *(undefined1 *)(param_1 + 0xc0) = 1;
      goto joined_r0x004d6c0c;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
             "this->has_value()","optional operator-> called on a disengaged value");
}


// ===== 004d6d58  FUN_004d6d58 =====

undefined8 * FUN_004d6d58(long param_1,size_t param_2)

{
  undefined8 *__src;
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_005467a4();
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  puVar4 = *(undefined8 **)(param_1 + 0x30);
  puVar5 = puVar3;
  if (puVar3 != puVar4) {
    do {
      __src = puVar3 + 1;
      puVar2 = (undefined8 *)*puVar5;
      memmove(puVar3,__src,(long)puVar4 - (long)__src);
      *(undefined8 **)(param_1 + 0x30) = puVar4 + -1;
      puVar3 = (undefined8 *)*puVar5;
      if (puVar3[1] == param_2) goto LAB_004d6df0;
      free((void *)*puVar3);
      operator_delete(puVar3);
      puVar4 = *(undefined8 **)(param_1 + 0x30);
      puVar5 = puVar5 + 1;
      puVar3 = __src;
    } while (puVar5 != puVar4);
  }
  puVar2 = (undefined8 *)operator_new(0x10);
  pvVar1 = malloc(param_2);
  *puVar2 = pvVar1;
  puVar2[1] = param_2;
LAB_004d6df0:
  FUN_005467c8(param_1);
  return puVar2;
}


// ===== 004d6e10  FUN_004d6e10 =====

void FUN_004d6e10(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  uint local_54;
  uint uStack_50;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0xb8) != 0) {
    FUN_004d6880(*(undefined8 *)(param_1 + 0xa8),&local_4c,&uStack_50,&local_54);
    uVar4 = (ulong)((uStack_50 >> 3) * local_54);
    uVar3 = 0;
    if (uVar4 != 0) {
      uVar3 = (ulong)param_2[1] / uVar4;
    }
    lVar2 = FUN_0062587c();
    uVar3 = (**(code **)**(undefined8 **)(param_1 + 0xb8))
                      (*(undefined8 **)(param_1 + 0xb8),*param_2,uVar3,(ulong)local_54 << 1,
                       (ulong)local_54,local_4c,(ulong)(lVar2 - param_3) / 1000000 & 0xffffffff);
    if (((uVar3 & 1) == 0) && (uVar3 = FUN_004249b0(), (uVar3 & 1) == 0)) {
      FUN_00623bb0(&DAT_001f4e98,
                   "../../discord_native_lib/src/media/soundshare/soundshare_audio_device_android.cpp"
                   ,0x413,"Soundshare thread failed to write to sink");
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d6f10  FUN_004d6f10 =====

void FUN_004d6f10(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  void *__dest;
  void *__src;
  ulong __n;
  
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 == (undefined8 *)param_1[2]) {
    __src = (void *)*param_1;
    __n = (long)puVar3 - (long)__src;
    uVar1 = ((long)__n >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar2 = __n >> 2;
    if (__n >> 2 <= uVar1) {
      uVar2 = uVar1;
    }
    if (0x7ffffffffffffff7 < __n) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) goto LAB_004d6ff8;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
    __dest = operator_new(uVar2 * 8);
    puVar3 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
    *puVar3 = *param_2;
    memmove(__dest,__src,__n);
    *param_1 = __dest;
    param_1[1] = puVar3 + 1;
    param_1[2] = (void *)((long)__dest + uVar2 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    if (puVar3 == (undefined8 *)0x0) {
LAB_004d6ff8:
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


// ===== 004d7028  FUN_004d7028 =====

void FUN_004d7028(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_00d1f4f8;
  puVar1 = (undefined8 *)operator_new(0xe0);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  FUN_00512b50(puVar1 + 8,param_2);
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x14] = param_1;
  *(undefined1 *)(puVar1 + 0x18) = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x19] = 0;
  param_1[1] = puVar1;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  *(undefined8 *)((long)param_1 + 0x51) = 0;
  *(undefined8 *)((long)param_1 + 0x49) = 0;
  FUN_007b5d10(param_1 + 7);
  *(undefined1 *)(param_1 + 0xb) = 1;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((long)param_1 + 0xa1) = 0;
  *(undefined8 *)((long)param_1 + 0x99) = 0;
  FUN_007b5d10(param_1 + 0x11);
  *(undefined1 *)(param_1 + 0x15) = 1;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((long)param_1 + 0xf1) = 0;
  *(undefined8 *)((long)param_1 + 0xe9) = 0;
  FUN_007b5d10(param_1 + 0x1b);
  *(undefined1 *)(param_1 + 0x1f) = 1;
  return;
}


// ===== 004d70f0  FUN_004d70f0 =====

void FUN_004d70f0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_00d1f4f8;
  if (*(char *)(param_1 + 0x1f) != '\0') {
    FUN_007b5d24(param_1 + 0x1b);
  }
  FUN_00546ab0(param_1 + 0x16);
  if (*(char *)(param_1 + 0x15) != '\0') {
    FUN_007b5d24(param_1 + 0x11);
  }
  FUN_00546ab0(param_1 + 0xc);
  if (*(char *)(param_1 + 0xb) != '\0') {
    FUN_007b5d24(param_1 + 7);
  }
  FUN_00546ab0(param_1 + 2);
  pvVar1 = (void *)param_1[1];
  param_1[1] = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_004d69d0(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 004d7190  FUN_004d7190 =====

void FUN_004d7190(void *param_1)

{
  FUN_004d70f0();
  operator_delete(param_1);
  return;
}


// ===== 004d71b4  FUN_004d71b4 =====

void FUN_004d71b4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(*(long *)(param_1 + 8) + 0xb8) = param_2;
  return;
}


// ===== 004d71c0  FUN_004d71c0 =====

void FUN_004d71c0(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  if (param_3 == (long *)0x0) {
    FUN_004d6aac(uVar4,param_2,0);
    return;
  }
  plVar1 = param_3 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  FUN_004d6aac(uVar4,param_2,param_3);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 != 0) {
    return;
  }
  (**(code **)(*param_3 + 0x10))(param_3);
  FUN_005466cc(param_3);
  return;
}


// ===== 004d7244  FUN_004d7244 =====

void FUN_004d7244(void)

{
  return;
}


// ===== 004d7248  FUN_004d7248 =====

void FUN_004d7248(void)

{
  return;
}


// ===== 004d724c  FUN_004d724c =====

void FUN_004d724c(void)

{
  return;
}


// ===== 004d7250  FUN_004d7250 =====

void FUN_004d7250(void)

{
  return;
}


// ===== 004d7254  FUN_004d7254 =====

void FUN_004d7254(long *param_1,void *param_2,size_t param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = *param_1;
  puVar1 = (undefined8 *)FUN_004d6d58(lVar3,param_3);
  memcpy((void *)*puVar1,param_2,param_3);
  puVar2 = (undefined8 *)operator_new(0x20);
  puVar2[2] = puVar1;
  puVar2[3] = param_4;
  *puVar2 = &PTR_FUN_00d1f518;
  puVar2[1] = lVar3;
  FUN_00512cf8(lVar3 + 0x40);
  return;
}


// ===== 004d72d0  FUN_004d72d0 =====

void FUN_004d72d0(long *param_1)

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


// ===== 004d7334  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 004d7338  FUN_004d7338 =====

void FUN_004d7338(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar1 = *(long *)(param_1 + 8);
  FUN_004d6e10(lVar1,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  local_40 = *(undefined8 *)(param_1 + 0x10);
  FUN_005467a4(lVar1);
  FUN_004d6f10(lVar1 + 0x28,&local_40);
  FUN_005467c8(lVar1);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d73b8  FUN_004d73b8 =====

undefined8 FUN_004d73b8(long *param_1,long *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  size_t sVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined8 *puVar8;
  char *__s;
  
  uVar5 = 0;
  switch(*(undefined1 *)*param_2) {
  case 0:
    goto switchD_004d73f8_caseD_0;
  case 1:
    uVar2 = *(uint *)(param_1 + 3);
    if (((int)uVar2 < 0) && (*(uint *)(param_1 + 3) = uVar2 + 8, uVar2 < 0xfffffff9)) {
      puVar6 = (undefined4 *)(param_1[1] + (long)(int)uVar2);
    }
    else {
      puVar6 = (undefined4 *)*param_1;
      *param_1 = (long)(puVar6 + 2);
    }
    uVar1 = *puVar6;
    puVar4 = &DAT_001ef797;
    goto LAB_004d7610;
  case 2:
    uVar2 = *(uint *)(param_1 + 3);
    if (((int)uVar2 < 0) && (*(uint *)(param_1 + 3) = uVar2 + 8, uVar2 < 0xfffffff9)) {
      puVar8 = (undefined8 *)(param_1[1] + (long)(int)uVar2);
    }
    else {
      puVar8 = (undefined8 *)*param_1;
      *param_1 = (long)(puVar8 + 1);
    }
    uVar5 = *puVar8;
    puVar4 = &DAT_001ab5b7;
    break;
  case 3:
    uVar2 = *(uint *)(param_1 + 3);
    if (((int)uVar2 < 0) && (*(uint *)(param_1 + 3) = uVar2 + 8, uVar2 < 0xfffffff9)) {
      puVar8 = (undefined8 *)(param_1[1] + (long)(int)uVar2);
    }
    else {
      puVar8 = (undefined8 *)*param_1;
      *param_1 = (long)(puVar8 + 1);
    }
    uVar5 = *puVar8;
    puVar4 = &DAT_00197960;
    break;
  case 4:
    uVar2 = *(uint *)(param_1 + 3);
    if (((int)uVar2 < 0) && (*(uint *)(param_1 + 3) = uVar2 + 8, uVar2 < 0xfffffff9)) {
      puVar6 = (undefined4 *)(param_1[1] + (long)(int)uVar2);
    }
    else {
      puVar6 = (undefined4 *)*param_1;
      *param_1 = (long)(puVar6 + 2);
    }
    uVar1 = *puVar6;
    puVar4 = &DAT_001ab5bb;
LAB_004d7610:
    FUN_004d7770(param_3,puVar4,uVar1);
    goto LAB_004d7724;
  case 5:
    uVar2 = *(uint *)(param_1 + 3);
    if (((int)uVar2 < 0) && (*(uint *)(param_1 + 3) = uVar2 + 8, uVar2 < 0xfffffff9)) {
      puVar8 = (undefined8 *)(param_1[1] + (long)(int)uVar2);
    }
    else {
      puVar8 = (undefined8 *)*param_1;
      *param_1 = (long)(puVar8 + 1);
    }
    uVar5 = *puVar8;
    puVar4 = &DAT_00197965;
    break;
  case 6:
    uVar2 = *(uint *)(param_1 + 3);
    if (((int)uVar2 < 0) && (*(uint *)(param_1 + 3) = uVar2 + 8, uVar2 < 0xfffffff9)) {
      puVar8 = (undefined8 *)(param_1[1] + (long)(int)uVar2);
    }
    else {
      puVar8 = (undefined8 *)*param_1;
      *param_1 = (long)(puVar8 + 1);
    }
    uVar5 = *puVar8;
    puVar4 = &DAT_001c2129;
    break;
  case 7:
    uVar2 = *(uint *)((long)param_1 + 0x1c);
    if (((int)uVar2 < 0) && (*(uint *)((long)param_1 + 0x1c) = uVar2 + 0x10, uVar2 < 0xfffffff1)) {
      puVar8 = (undefined8 *)(param_1[2] + (long)(int)uVar2);
    }
    else {
      puVar8 = (undefined8 *)*param_1;
      *param_1 = (long)(puVar8 + 1);
    }
    FUN_004d7770(*puVar8,param_3,&DAT_001ca883);
    goto LAB_004d7724;
  case 8:
    uVar2 = *(uint *)((long)param_1 + 0x1c);
    if (((int)uVar2 < 0) && (*(uint *)((long)param_1 + 0x1c) = uVar2 + 0x10, uVar2 < 0xfffffff1)) {
      puVar8 = (undefined8 *)(param_1[2] + (long)(int)uVar2);
    }
    else {
      puVar8 = (undefined8 *)(*param_1 + 0xfU & 0xfffffffffffffff0);
      *param_1 = (long)(puVar8 + 2);
    }
    FUN_004d7770(*puVar8,param_3,&DAT_001d6225);
    goto LAB_004d7724;
  case 9:
    uVar2 = *(uint *)(param_1 + 3);
    if (((int)uVar2 < 0) && (*(uint *)(param_1 + 3) = uVar2 + 8, uVar2 < 0xfffffff9)) {
      puVar8 = (undefined8 *)(param_1[1] + (long)(int)uVar2);
    }
    else {
      puVar8 = (undefined8 *)*param_1;
      *param_1 = (long)(puVar8 + 1);
    }
    __s = (char *)*puVar8;
    if (__s == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string",0xad0,
                 "__s != nullptr","string::append received nullptr");
    }
    sVar3 = strlen(__s);
    goto LAB_004d76fc;
  case 10:
    uVar2 = *(uint *)(param_1 + 3);
    if (((int)uVar2 < 0) && (*(uint *)(param_1 + 3) = uVar2 + 8, uVar2 < 0xfffffff9)) {
      puVar8 = (undefined8 *)(param_1[1] + (long)(int)uVar2);
    }
    else {
      puVar8 = (undefined8 *)*param_1;
      *param_1 = (long)(puVar8 + 1);
    }
    pcVar7 = (char *)*puVar8;
    __s = *(char **)pcVar7;
    sVar3 = *(size_t *)(pcVar7 + 8);
    if (-1 < pcVar7[0x17]) {
      __s = pcVar7;
      sVar3 = (ulong)(byte)pcVar7[0x17];
    }
LAB_004d76fc:
    FUN_00547cac(param_3,__s,sVar3);
    goto LAB_004d7724;
  default:
    FUN_00547cac(param_3,"[Invalid CheckArgType]",0x16);
    return 0;
  case 0xc:
    uVar2 = *(uint *)(param_1 + 3);
    if (((int)uVar2 < 0) && (*(uint *)(param_1 + 3) = uVar2 + 8, uVar2 < 0xfffffff9)) {
      puVar8 = (undefined8 *)(param_1[1] + (long)(int)uVar2);
    }
    else {
      puVar8 = (undefined8 *)*param_1;
      *param_1 = (long)(puVar8 + 1);
    }
    uVar5 = *puVar8;
    puVar4 = &DAT_001e770a;
  }
  FUN_004d7770(param_3,puVar4,uVar5);
LAB_004d7724:
  uVar5 = 1;
  *param_2 = *param_2 + 1;
switchD_004d73f8_caseD_0:
  return uVar5;
}


// ===== 004d7770  FUN_004d7770 =====

void FUN_004d7770(long *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  long lVar7;
  long *plVar8;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  undefined1 **ppuStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined1 *local_c0;
  undefined1 **ppuStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 *local_a0;
  undefined1 **ppuStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  ulong uVar6;
  
  lVar4 = tpidr_el0;
  lVar7 = *(long *)(lVar4 + 0x28);
  uStack_88 = 0xffffff80ffffffd0;
  uStack_a8 = 0xffffff80ffffffd0;
  local_110 = param_3;
  local_108 = param_4;
  uStack_100 = param_5;
  local_f8 = param_6;
  uStack_f0 = param_7;
  local_e8 = param_8;
  local_c0 = (undefined1 *)register0x00000008;
  ppuStack_b8 = &local_e0;
  puStack_b0 = &local_110;
  local_a0 = (undefined1 *)register0x00000008;
  ppuStack_98 = &local_e0;
  puStack_90 = &local_110;
  uVar5 = vsnprintf((char *)0x0,0,param_2,&local_c0);
  uVar6 = (ulong)uVar5;
  if (0 < (int)uVar5) {
    bVar3 = *(byte *)((long)param_1 + 0x17);
    uVar2 = param_1[1];
    if (-1 < (char)bVar3) {
      uVar2 = (ulong)bVar3;
    }
    uVar1 = uVar2 + uVar6;
    if (uVar2 < uVar1) {
      FUN_0054809c(param_1,uVar6,0);
    }
    else {
      if ((char)bVar3 < '\0') {
        plVar8 = (long *)*param_1;
        param_1[1] = uVar1;
      }
      else {
        if (0x16 < uVar1) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                     "__s < __min_cap",
                     "__s should never be greater than or equal to the short string capacity");
        }
        *(char *)((long)param_1 + 0x17) = (char)uVar1;
        plVar8 = param_1;
      }
      *(undefined1 *)((long)plVar8 + uVar1) = 0;
    }
    bVar3 = *(byte *)((long)param_1 + 0x17);
    uVar6 = param_1[1];
    if (-1 < (char)bVar3) {
      uVar6 = (ulong)bVar3;
    }
    if (uVar6 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string",0xd57,
                 "__pos <= size()","string index out of bounds");
    }
    plVar8 = (long *)*param_1;
    if (-1 < (char)bVar3) {
      plVar8 = param_1;
    }
    uStack_c8 = 0xffffff80ffffffd0;
    local_e0 = (undefined1 *)register0x00000008;
    ppuStack_d8 = &local_e0;
    puStack_d0 = &local_110;
    uVar5 = vsnprintf((char *)((long)plVar8 + uVar2),(ulong)(uVar5 + 1),param_2,&local_e0);
    uVar6 = (ulong)uVar5;
  }
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


// ===== 004d7934  FUN_004d7934 =====

/* WARNING: Removing unreachable block (ram,0x004d7a44) */
/* WARNING: Removing unreachable block (ram,0x004d7a54) */

void FUN_004d7934(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 char *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  char local_68 [24];
  char *local_18;
  
  local_68[0] = '\0';
  local_68[1] = '\0';
  local_68[2] = '\0';
  local_68[3] = '\0';
  local_68[4] = '\0';
  local_68[5] = '\0';
  local_68[6] = '\0';
  local_68[7] = '\0';
  local_68[8] = '\0';
  local_68[9] = '\0';
  local_68[10] = '\0';
  local_68[0xb] = '\0';
  local_68[0xc] = '\0';
  local_68[0xd] = '\0';
  local_68[0xe] = '\0';
  local_68[0xf] = '\0';
  local_68[0x10] = '\0';
  local_68[0x11] = '\0';
  local_68[0x12] = '\0';
  local_68[0x13] = '\0';
  local_68[0x14] = '\0';
  local_68[0x15] = '\0';
  local_68[0x16] = '\0';
  local_68[0x17] = '\0';
  local_18 = param_5;
  FUN_004d7770(local_68,
               "\n\n#\n# Fatal error in: %s, line %d\n# last system error: %u\n# Check failed: %s",
               param_2,param_3,0,param_4,param_8,param_9,param_1);
  if (*param_5 == '\r') {
    local_18 = param_5 + 1;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uVar2 = FUN_004d73b8(&stack0xffffffffffffffb0,&local_18,&local_80);
    if ((uVar2 & 1) != 0) {
      uVar2 = FUN_004d73b8(&stack0xffffffffffffffb0,&local_18,&local_98);
      if ((uVar2 & 1) != 0) {
        FUN_004d7770(local_68," (%s vs. %s)\n# ",&local_80,&local_98);
      }
    }
  }
  else {
    FUN_00547cac(local_68,&DAT_0019a219,3);
  }
  do {
    uVar2 = FUN_004d73b8(&stack0xffffffffffffffb0,&local_18,local_68);
  } while ((uVar2 & 1) != 0);
  __android_log_print(6,"discord",&DAT_001d2ff8,local_68);
  fflush(*(FILE **)PTR_stdout_00d51cb0);
  puVar1 = PTR_stderr_00d51cb8;
  fputs(local_68,*(FILE **)PTR_stderr_00d51cb8);
  fflush(*(FILE **)puVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 004d7ae8  FUN_004d7ae8 =====

void FUN_004d7ae8(char *param_1)

{
  char *__file;
  long lVar1;
  int iVar2;
  uint local_98;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  __file = *(char **)param_1;
  if (-1 < param_1[0x17]) {
    __file = param_1;
  }
  iVar2 = stat(__file,(stat *)&stack0xffffffffffffff58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0 && (local_98 & 0xf000) == 0x4000);
}


// ===== 004d7b58  FUN_004d7b58 =====

void FUN_004d7b58(long *param_1,long *param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined2 local_60 [11];
  undefined1 local_49;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)((long)param_2 + 0x17);
  uVar6 = param_2[1];
  uVar1 = uVar6;
  if (-1 < (char)bVar2) {
    uVar1 = (ulong)bVar2;
  }
  if (uVar1 != 0) {
    local_49 = 1;
    if ((local_60 < &UNK_001c7bbc) && (&DAT_001c7bbb < (undefined *)((ulong)local_60 | 1)))
    goto LAB_004d7c9c;
    plVar4 = (long *)*param_2;
    if (-1 < (char)bVar2) {
      plVar4 = param_2;
    }
    local_60[0] = 0x2f;
    if (*(char *)((long)plVar4 + (uVar1 - 1)) != '/') {
      FUN_004d7ccc(param_1,param_2,&DAT_001c7bbb);
      goto LAB_004d7c74;
    }
  }
  if ((char)bVar2 < '\0') {
    param_2 = (long *)*param_2;
    if (uVar6 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)uVar6;
      plVar4 = param_1;
    }
    else {
      if (0x7fffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar6 | 0xf) + 1;
      plVar4 = (long *)operator_new(uVar1);
      *param_1 = (long)plVar4;
      param_1[1] = uVar6;
      param_1[2] = uVar1 | 0x8000000000000000;
    }
    if ((plVar4 <= param_2) && (param_2 < (long *)((long)plVar4 + uVar6 + 1))) {
LAB_004d7c9c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(plVar4,param_2,uVar6 + 1);
  }
  else {
    lVar7 = *param_2;
    lVar5 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = lVar7;
    param_1[2] = lVar5;
  }
LAB_004d7c74:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d7ccc  FUN_004d7ccc =====

void FUN_004d7ccc(char *param_1,char *param_2,char *param_3)

{
  ulong uVar1;
  ulong uVar2;
  char *__dest;
  size_t __n;
  char *__src;
  byte bVar3;
  size_t __n_00;
  char *__dest_00;
  
  bVar3 = param_2[0x17];
  __n = *(size_t *)(param_2 + 8);
  if (-1 < (char)bVar3) {
    __n = (ulong)bVar3;
  }
  __n_00 = strlen(param_3);
  uVar2 = __n + __n_00;
  if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (uVar2 < 0x17) {
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
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[0x17] = (char)uVar2;
    __dest_00 = param_1;
  }
  else {
    uVar1 = (uVar2 | 0xf) + 1;
    __dest_00 = (char *)operator_new(uVar1);
    *(char **)param_1 = __dest_00;
    *(ulong *)(param_1 + 8) = uVar2;
    *(ulong *)(param_1 + 0x10) = uVar1 | 0x8000000000000000;
  }
  __src = *(char **)param_2;
  if (-1 < (char)bVar3) {
    __src = param_2;
  }
  __dest = __dest_00 + __n;
  if ((__src < __dest_00) || (__dest <= __src)) {
    if (__n != 0) {
      memmove(__dest_00,__src,__n);
    }
    if ((param_3 < __dest) || (__dest + __n_00 <= param_3)) {
      if (__n_00 != 0) {
        memmove(__dest,param_3,__n_00);
      }
      __dest[__n_00] = '\0';
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004d7df8  FUN_004d7df8 =====

bool FUN_004d7df8(char *param_1,char *param_2)

{
  char *__old;
  char *__new;
  int iVar1;
  
  __old = *(char **)param_1;
  if (-1 < param_1[0x17]) {
    __old = param_1;
  }
  __new = *(char **)param_2;
  if (-1 < param_2[0x17]) {
    __new = param_2;
  }
  iVar1 = rename(__old,__new);
  return iVar1 == 0;
}


// ===== 004d7e34  FUN_004d7e34 =====

bool FUN_004d7e34(char *param_1)

{
  char *__name;
  int iVar1;
  
  __name = *(char **)param_1;
  if (-1 < param_1[0x17]) {
    __name = param_1;
  }
  iVar1 = unlink(__name);
  return iVar1 == 0;
}


// ===== 004d7e60  FUN_004d7e60 =====

long * FUN_004d7e60(int param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  
  FUN_004d7f44();
  if (DAT_00d61080 != 0) {
    uVar4 = (ulong)param_1;
    uVar9 = NEON_cnt(DAT_00d61080,1);
    uVar8 = NEON_uaddlv(uVar9,1);
    uVar3 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8) & 0xffffffff;
    if (uVar3 < 2) {
      uVar5 = DAT_00d61080 - 1 & uVar4;
    }
    else {
      uVar5 = uVar4;
      if (DAT_00d61080 <= uVar4) {
        uVar5 = 0;
        if (DAT_00d61080 != 0) {
          uVar5 = uVar4 / DAT_00d61080;
        }
        uVar5 = uVar4 - uVar5 * DAT_00d61080;
      }
    }
    plVar6 = *(long **)(DAT_00d61078 + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      do {
        uVar7 = plVar6[1];
        if (uVar7 == uVar4) {
          if ((int)plVar6[2] == param_1) {
            plVar1 = (long *)plVar6[3];
            if (-1 < *(char *)((long)plVar6 + 0x2f)) {
              plVar1 = plVar6 + 3;
            }
            return plVar1;
          }
        }
        else {
          if (uVar3 < 2) {
            uVar7 = uVar7 & DAT_00d61080 - 1;
          }
          else if (DAT_00d61080 <= uVar7) {
            uVar2 = 0;
            if (DAT_00d61080 != 0) {
              uVar2 = uVar7 / DAT_00d61080;
            }
            uVar7 = uVar7 - uVar2 * DAT_00d61080;
          }
          if (uVar7 != uVar5) break;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 004d7f44  FUN_004d7f44 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004d7f44(void)

{
  long lVar1;
  int iVar2;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined1 auStack_148 [8];
  void *local_140;
  char local_129;
  undefined1 auStack_128 [8];
  void *local_120;
  char local_109;
  undefined1 auStack_108 [8];
  void *local_100;
  char local_e9;
  undefined1 auStack_e8 [8];
  void *local_e0;
  char local_c9;
  undefined1 auStack_c8 [8];
  void *local_c0;
  char local_a9;
  undefined1 auStack_a8 [8];
  void *local_a0;
  char local_89;
  undefined1 auStack_88 [8];
  void *local_80;
  char local_69;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (((DAT_00d610a0 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d610a0), iVar2 != 0)) {
    local_14c = 0;
    FUN_004d8310(auStack_148,&local_14c,"xsalsa20_poly1305");
    local_150 = 1;
    FUN_004d83ec(auStack_128,&local_150,"xsalsa20_poly1305_suffix");
    local_154 = 2;
    FUN_004d84c8(auStack_108,&local_154,"xsalsa20_poly1305_lite");
    local_158 = 3;
    FUN_004d85a4(auStack_e8,&local_158,"xsalsa20_poly1305_lite_rtpsize");
    local_15c = 4;
    FUN_004d8680(auStack_c8,&local_15c,"aead_aes256_gcm");
    local_160 = 5;
    FUN_004d875c(auStack_a8,&local_160,"aead_aes256_gcm_rtpsize");
    local_164 = 6;
    FUN_004d8838(auStack_88,&local_164,"aead_xchacha20_poly1305_rtpsize");
    DAT_00d61080 = 0;
    DAT_00d61078 = 0;
    uRam0000000000d61090 = 0;
    DAT_00d61088 = 0;
    DAT_00d61098 = 0x3f800000;
    FUN_004d8984(&DAT_00d61078,auStack_148,auStack_148);
    FUN_004d8984(&DAT_00d61078,auStack_128,auStack_128);
    FUN_004d8984(&DAT_00d61078,auStack_108,auStack_108);
    FUN_004d8984(&DAT_00d61078,auStack_e8,auStack_e8);
    FUN_004d8984(&DAT_00d61078,auStack_c8,auStack_c8);
    FUN_004d8984(&DAT_00d61078,auStack_a8,auStack_a8);
    FUN_004d8984(&DAT_00d61078,auStack_88,auStack_88);
    if (local_69 < '\0') {
      operator_delete(local_80);
    }
    if (local_89 < '\0') {
      operator_delete(local_a0);
    }
    if (local_a9 < '\0') {
      operator_delete(local_c0);
    }
    if (local_c9 < '\0') {
      operator_delete(local_e0);
    }
    if (local_e9 < '\0') {
      operator_delete(local_100);
    }
    if (local_109 < '\0') {
      operator_delete(local_120);
    }
    if (local_129 < '\0') {
      operator_delete(local_140);
    }
    __cxa_atexit(FUN_004d8914,&DAT_00d61078,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d610a0);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d8204  FUN_004d8204 =====

void FUN_004d8204(undefined4 *param_1,char *param_2)

{
  undefined8 *__s1;
  size_t __n;
  byte bVar1;
  int iVar2;
  size_t sVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  long *plVar6;
  
  FUN_004d7f44();
  plVar6 = (long *)DAT_00d61088;
  do {
    if (plVar6 == (long *)0x0) {
      uVar4 = 0;
      uVar5 = 0;
LAB_004d82a4:
      *param_1 = uVar4;
      *(undefined1 *)(param_1 + 1) = uVar5;
      return;
    }
    bVar1 = *(byte *)((long)plVar6 + 0x2f);
    __s1 = (undefined8 *)plVar6[3];
    if (-1 < (char)bVar1) {
      __s1 = plVar6 + 3;
    }
    __n = plVar6[4];
    if (-1 < (char)bVar1) {
      __n = (ulong)bVar1;
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
    if ((__n == sVar3) && ((__n == 0 || (iVar2 = memcmp(__s1,param_2,__n), iVar2 == 0)))) {
      uVar4 = *(undefined4 *)(plVar6 + 2);
      uVar5 = 1;
      goto LAB_004d82a4;
    }
    plVar6 = (long *)*plVar6;
  } while( true );
}


// ===== 004d8310  FUN_004d8310 =====

void FUN_004d8310(undefined4 *param_1,undefined4 *param_2,char *param_3)

{
  ulong uVar1;
  size_t __n;
  char *__dest;
  
  __dest = (char *)(param_1 + 2);
  *param_1 = *param_2;
  __n = strlen(param_3);
  if (0x7fffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (__n < 0x17) {
    *(char *)((long)param_1 + 0x1f) = (char)__n;
  }
  else {
    uVar1 = (__n | 0xf) + 1;
    __dest = (char *)operator_new(uVar1);
    *(char **)(param_1 + 2) = __dest;
    *(size_t *)(param_1 + 4) = __n;
    *(ulong *)(param_1 + 6) = uVar1 | 0x8000000000000000;
  }
  if ((__dest <= param_3) && (param_3 < __dest + __n)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  if (__n != 0) {
    memmove(__dest,param_3,__n);
  }
  __dest[__n] = '\0';
  return;
}


// ===== 004d83ec  FUN_004d83ec =====

void FUN_004d83ec(undefined4 *param_1,undefined4 *param_2,char *param_3)

{
  ulong uVar1;
  size_t __n;
  char *__dest;
  
  __dest = (char *)(param_1 + 2);
  *param_1 = *param_2;
  __n = strlen(param_3);
  if (0x7fffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (__n < 0x17) {
    *(char *)((long)param_1 + 0x1f) = (char)__n;
  }
  else {
    uVar1 = (__n | 0xf) + 1;
    __dest = (char *)operator_new(uVar1);
    *(char **)(param_1 + 2) = __dest;
    *(size_t *)(param_1 + 4) = __n;
    *(ulong *)(param_1 + 6) = uVar1 | 0x8000000000000000;
  }
  if ((__dest <= param_3) && (param_3 < __dest + __n)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  if (__n != 0) {
    memmove(__dest,param_3,__n);
  }
  __dest[__n] = '\0';
  return;
}


// ===== 004d84c8  FUN_004d84c8 =====

void FUN_004d84c8(undefined4 *param_1,undefined4 *param_2,char *param_3)

{
  ulong uVar1;
  size_t __n;
  char *__dest;
  
  __dest = (char *)(param_1 + 2);
  *param_1 = *param_2;
  __n = strlen(param_3);
  if (0x7fffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (__n < 0x17) {
    *(char *)((long)param_1 + 0x1f) = (char)__n;
  }
  else {
    uVar1 = (__n | 0xf) + 1;
    __dest = (char *)operator_new(uVar1);
    *(char **)(param_1 + 2) = __dest;
    *(size_t *)(param_1 + 4) = __n;
    *(ulong *)(param_1 + 6) = uVar1 | 0x8000000000000000;
  }
  if ((__dest <= param_3) && (param_3 < __dest + __n)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  if (__n != 0) {
    memmove(__dest,param_3,__n);
  }
  __dest[__n] = '\0';
  return;
}


// ===== 004d85a4  FUN_004d85a4 =====

void FUN_004d85a4(undefined4 *param_1,undefined4 *param_2,char *param_3)

{
  ulong uVar1;
  size_t __n;
  char *__dest;
  
  __dest = (char *)(param_1 + 2);
  *param_1 = *param_2;
  __n = strlen(param_3);
  if (0x7fffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (__n < 0x17) {
    *(char *)((long)param_1 + 0x1f) = (char)__n;
  }
  else {
    uVar1 = (__n | 0xf) + 1;
    __dest = (char *)operator_new(uVar1);
    *(char **)(param_1 + 2) = __dest;
    *(size_t *)(param_1 + 4) = __n;
    *(ulong *)(param_1 + 6) = uVar1 | 0x8000000000000000;
  }
  if ((__dest <= param_3) && (param_3 < __dest + __n)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  if (__n != 0) {
    memmove(__dest,param_3,__n);
  }
  __dest[__n] = '\0';
  return;
}


// ===== 004d8680  FUN_004d8680 =====

void FUN_004d8680(undefined4 *param_1,undefined4 *param_2,char *param_3)

{
  ulong uVar1;
  size_t __n;
  char *__dest;
  
  __dest = (char *)(param_1 + 2);
  *param_1 = *param_2;
  __n = strlen(param_3);
  if (0x7fffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (__n < 0x17) {
    *(char *)((long)param_1 + 0x1f) = (char)__n;
  }
  else {
    uVar1 = (__n | 0xf) + 1;
    __dest = (char *)operator_new(uVar1);
    *(char **)(param_1 + 2) = __dest;
    *(size_t *)(param_1 + 4) = __n;
    *(ulong *)(param_1 + 6) = uVar1 | 0x8000000000000000;
  }
  if ((__dest <= param_3) && (param_3 < __dest + __n)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  if (__n != 0) {
    memmove(__dest,param_3,__n);
  }
  __dest[__n] = '\0';
  return;
}


// ===== 004d875c  FUN_004d875c =====

void FUN_004d875c(undefined4 *param_1,undefined4 *param_2,char *param_3)

{
  ulong uVar1;
  size_t __n;
  char *__dest;
  
  __dest = (char *)(param_1 + 2);
  *param_1 = *param_2;
  __n = strlen(param_3);
  if (0x7fffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (__n < 0x17) {
    *(char *)((long)param_1 + 0x1f) = (char)__n;
  }
  else {
    uVar1 = (__n | 0xf) + 1;
    __dest = (char *)operator_new(uVar1);
    *(char **)(param_1 + 2) = __dest;
    *(size_t *)(param_1 + 4) = __n;
    *(ulong *)(param_1 + 6) = uVar1 | 0x8000000000000000;
  }
  if ((__dest <= param_3) && (param_3 < __dest + __n)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  if (__n != 0) {
    memmove(__dest,param_3,__n);
  }
  __dest[__n] = '\0';
  return;
}


// ===== 004d8838  FUN_004d8838 =====

void FUN_004d8838(undefined4 *param_1,undefined4 *param_2,char *param_3)

{
  ulong uVar1;
  size_t __n;
  char *__dest;
  
  __dest = (char *)(param_1 + 2);
  *param_1 = *param_2;
  __n = strlen(param_3);
  if (0x7fffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (__n < 0x17) {
    *(char *)((long)param_1 + 0x1f) = (char)__n;
  }
  else {
    uVar1 = (__n | 0xf) + 1;
    __dest = (char *)operator_new(uVar1);
    *(char **)(param_1 + 2) = __dest;
    *(size_t *)(param_1 + 4) = __n;
    *(ulong *)(param_1 + 6) = uVar1 | 0x8000000000000000;
  }
  if ((__dest <= param_3) && (param_3 < __dest + __n)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  if (__n != 0) {
    memmove(__dest,param_3,__n);
  }
  __dest[__n] = '\0';
  return;
}


// ===== 004d8914  FUN_004d8914 =====

void FUN_004d8914(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = (undefined8 *)param_1[2];
  while (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar1;
    if (*(char *)((long)puVar1 + 0x2f) < '\0') {
      operator_delete((void *)puVar1[3]);
    }
    operator_delete(puVar1);
    puVar1 = (undefined8 *)pvVar2;
  }
  pvVar2 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}


// ===== 004d8984  FUN_004d8984 =====

undefined1  [16] FUN_004d8984(long *param_1,int *param_2,undefined4 *param_3)

{
  long *__src;
  char cVar1;
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
  undefined1 auVar13 [16];
  
  uVar9 = param_1[1];
  uVar10 = (ulong)*param_2;
  if (uVar9 != 0) {
    uVar12 = NEON_cnt(uVar9,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar5 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar5 < 2) {
      unaff_x25 = uVar9 - 1 & uVar10;
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
        if (plVar8 == (long *)0x0) goto LAB_004d8a48;
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
          if (uVar6 != unaff_x25) goto LAB_004d8a48;
        }
      } while ((int)plVar8[2] != *param_2);
      uVar12 = 0;
      goto LAB_004d8c90;
    }
  }
LAB_004d8a48:
  plVar8 = (long *)operator_new(0x30);
  cVar1 = *(char *)((long)param_3 + 0x1f);
  plVar4 = plVar8 + 3;
  *(undefined4 *)(plVar8 + 2) = *param_3;
  if (cVar1 < '\0') {
    __src = *(long **)(param_3 + 2);
    uVar5 = *(ulong *)(param_3 + 4);
    if (uVar5 < 0x17) {
      *(char *)((long)plVar8 + 0x2f) = (char)uVar5;
    }
    else {
      if (0x7fffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar6 = (uVar5 | 0xf) + 1;
      plVar4 = (long *)operator_new(uVar6);
      plVar8[3] = (long)plVar4;
      plVar8[4] = uVar5;
      plVar8[5] = uVar6 | 0x8000000000000000;
    }
    if ((plVar4 <= __src) && (__src < (long *)((long)plVar4 + uVar5 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(plVar4,__src,uVar5 + 1);
  }
  else {
    lVar7 = *(long *)(param_3 + 2);
    lVar3 = *(long *)(param_3 + 6);
    plVar8[4] = *(long *)(param_3 + 4);
    *plVar4 = lVar7;
    plVar8[5] = lVar3;
  }
  lVar3 = param_1[3];
  *plVar8 = 0;
  plVar8[1] = uVar10;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(lVar3 + 1))) {
    if (uVar9 < 3) {
      uVar5 = 1;
    }
    else {
      uVar5 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar5 = uVar5 | uVar9 << 1;
    uVar6 = (ulong)((float)(lVar3 + 1) / *(float *)(param_1 + 4));
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
LAB_004d8bdc:
      FUN_004d8cd8(param_1,uVar5);
    }
    else if (uVar5 < uVar9) {
      uVar6 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar9 < 3) {
LAB_004d8bc8:
        uVar6 = FUN_005204f8();
      }
      else {
        uVar12 = NEON_cnt(uVar9,1);
        uVar11 = NEON_uaddlv(uVar12,1);
        if (1 < (CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff)) goto LAB_004d8bc8;
        if (1 < uVar6) {
          uVar6 = 1L << (-LZCOUNT(uVar6 - 1) & 0x3fU);
        }
      }
      if (uVar5 <= uVar6) {
        uVar5 = uVar6;
      }
      if (uVar5 < uVar9) goto LAB_004d8bdc;
    }
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x25 = uVar9 - 1 & uVar10;
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
      goto LAB_004d8c7c;
    }
  }
  else {
    *plVar8 = *plVar4;
LAB_004d8c7c:
    *plVar4 = (long)plVar8;
  }
  uVar12 = 1;
  param_1[3] = param_1[3] + 1;
LAB_004d8c90:
  auVar13._8_8_ = uVar12;
  auVar13._0_8_ = plVar8;
  return auVar13;
}


// ===== 004d8cd8  FUN_004d8cd8 =====

void FUN_004d8cd8(long *param_1,ulong param_2)

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


// ===== 004d8e34  FUN_004d8e34 =====

void FUN_004d8e34(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = param_2[4];
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar7 = param_2[1];
  uVar6 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_1[1] = uVar7;
  *param_1 = uVar6;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  FUN_00556830();
  return;
}


// ===== 004d8e48  FUN_004d8e48 =====

void FUN_004d8e48(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  void *local_40;
  undefined8 uStack_38;
  undefined7 local_30;
  char cStack_29;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  iVar3 = thunk_FUN_00556984();
  if (iVar3 != 0) {
    uVar4 = FUN_004d7e60(5);
    FUN_004a3cf4(&local_40,uVar4);
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (puVar1 < *(undefined8 **)(param_1 + 0x10)) {
      if (puVar1 == (undefined8 *)0x0) goto LAB_004d9114;
      puVar1[2] = CONCAT17(cStack_29,local_30);
      puVar1[1] = uStack_38;
      *puVar1 = local_40;
      *(undefined8 **)(param_1 + 8) = puVar1 + 3;
    }
    else {
      FUN_0047a79c(param_1,&local_40);
      if (cStack_29 < '\0') {
        operator_delete(local_40);
      }
    }
    uVar4 = FUN_004d7e60(4);
    FUN_004a3cf4(&local_40,uVar4);
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (puVar1 < *(undefined8 **)(param_1 + 0x10)) {
      if (puVar1 == (undefined8 *)0x0) goto LAB_004d9114;
      puVar1[2] = CONCAT17(cStack_29,local_30);
      puVar1[1] = uStack_38;
      *puVar1 = local_40;
      *(undefined8 **)(param_1 + 8) = puVar1 + 3;
    }
    else {
      FUN_0047a79c(param_1,&local_40);
      if (cStack_29 < '\0') {
        operator_delete(local_40);
      }
    }
  }
  uVar4 = FUN_004d7e60(6);
  FUN_004a3cf4(&local_40,uVar4);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 < *(undefined8 **)(param_1 + 0x10)) {
    if (puVar1 == (undefined8 *)0x0) goto LAB_004d9114;
    puVar1[2] = CONCAT17(cStack_29,local_30);
    puVar1[1] = uStack_38;
    *puVar1 = local_40;
    *(undefined8 **)(param_1 + 8) = puVar1 + 3;
  }
  else {
    FUN_0047a79c(param_1,&local_40);
    if (cStack_29 < '\0') {
      operator_delete(local_40);
    }
  }
  uVar4 = FUN_004d7e60(3);
  FUN_004a3cf4(&local_40,uVar4);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 < *(undefined8 **)(param_1 + 0x10)) {
    if (puVar1 == (undefined8 *)0x0) goto LAB_004d9114;
    puVar1[2] = CONCAT17(cStack_29,local_30);
    puVar1[1] = uStack_38;
    *puVar1 = local_40;
    *(undefined8 **)(param_1 + 8) = puVar1 + 3;
  }
  else {
    FUN_0047a79c(param_1,&local_40);
    if (cStack_29 < '\0') {
      operator_delete(local_40);
    }
  }
  uVar4 = FUN_004d7e60(2);
  FUN_004a3cf4(&local_40,uVar4);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 < *(undefined8 **)(param_1 + 0x10)) {
    if (puVar1 == (undefined8 *)0x0) goto LAB_004d9114;
    puVar1[2] = CONCAT17(cStack_29,local_30);
    puVar1[1] = uStack_38;
    *puVar1 = local_40;
    *(undefined8 **)(param_1 + 8) = puVar1 + 3;
  }
  else {
    FUN_0047a79c(param_1,&local_40);
    if (cStack_29 < '\0') {
      operator_delete(local_40);
    }
  }
  uVar4 = FUN_004d7e60(1);
  FUN_004a3cf4(&local_40,uVar4);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 < *(undefined8 **)(param_1 + 0x10)) {
    if (puVar1 == (undefined8 *)0x0) goto LAB_004d9114;
    puVar1[2] = CONCAT17(cStack_29,local_30);
    puVar1[1] = uStack_38;
    *puVar1 = local_40;
    *(undefined8 **)(param_1 + 8) = puVar1 + 3;
  }
  else {
    FUN_0047a79c(param_1,&local_40);
    if (cStack_29 < '\0') {
      operator_delete(local_40);
    }
  }
  uVar4 = FUN_004d7e60(0);
  FUN_004a3cf4(&local_40,uVar4);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 < *(undefined8 **)(param_1 + 0x10)) {
    if (puVar1 == (undefined8 *)0x0) {
LAB_004d9114:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                 ,0x23,"__location != nullptr","null pointer given to construct_at");
    }
    puVar1[2] = CONCAT17(cStack_29,local_30);
    puVar1[1] = uStack_38;
    *puVar1 = local_40;
    *(undefined8 **)(param_1 + 8) = puVar1 + 3;
  }
  else {
    FUN_0047a79c(param_1,&local_40);
    if (cStack_29 < '\0') {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d9140  FUN_004d9140 =====

long FUN_004d9140(uint *param_1,long param_2)

{
  if (*param_1 < 7) {
    return *(long *)(&DAT_001f71c8 + (long)(int)*param_1 * 8) + param_2;
  }
  return param_2 + 0x28;
}


// ===== 004d916c  FUN_004d916c =====

void FUN_004d916c(uint *param_1,long param_2,ulong *param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong __n;
  ulong uVar6;
  ulong uVar7;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar5 = FUN_004d9314(param_2,*param_3,*param_1);
  if (uVar5 == 0) goto LAB_004d92ac;
  uVar2 = *param_1;
  uVar6 = *param_3;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  switch(uVar2) {
  case 0:
    if (uVar5 + 0x10 <= uVar6) {
      uVar7 = 0;
      __n = uVar5;
LAB_004d9208:
      memcpy(&local_70,(void *)(param_2 + uVar7),__n);
      goto switchD_004d91e4_default;
    }
    break;
  case 1:
    if (uVar5 + 0x28 <= uVar6) {
      uVar7 = uVar6 - 0x18;
      __n = 0x18;
      uVar6 = uVar7;
      goto LAB_004d9208;
    }
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    if (uVar5 + 0x14 <= uVar6) {
      uVar7 = uVar6 - 4;
      __n = 4;
      uVar6 = uVar7;
      goto LAB_004d9208;
    }
    break;
  default:
switchD_004d91e4_default:
    lVar1 = param_2 + uVar5;
    if (uVar2 < 4) {
      iVar4 = FUN_00555b64(lVar1,lVar1,uVar6 - uVar5,&local_70,param_1 + 1);
LAB_004d929c:
      *param_3 = uVar6 - 0x10;
    }
    else {
      if (uVar2 - 4 < 2) {
        iVar4 = FUN_0055a2b4(lVar1,0,0,lVar1,uVar6 - uVar5,param_2,uVar5,&local_70,param_1 + 1);
        goto LAB_004d929c;
      }
      if (uVar2 == 6) {
        iVar4 = FUN_00554b84(lVar1,0,0,lVar1,uVar6 - uVar5,param_2,uVar5,&local_70,param_1 + 1);
        goto LAB_004d929c;
      }
      iVar4 = 0;
    }
    uVar5 = (ulong)(iVar4 == 0);
    goto LAB_004d92ac;
  }
  uVar5 = 0;
LAB_004d92ac:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


// ===== 004d9314  FUN_004d9314 =====

char FUN_004d9314(byte *param_1,undefined8 param_2,uint param_3)

{
  char cVar1;
  ulong uVar2;
  
  if (param_3 < 7) {
    if ((1 << (ulong)(param_3 & 0x1f) & 0x17U) != 0) {
      uVar2 = FUN_005105e4(param_1,param_2);
      if ((uVar2 & 1) != 0) {
        return '\b';
      }
      uVar2 = FUN_0051061c(param_1,param_2);
      if ((uVar2 & 1) == 0) {
        return '\0';
      }
      return '\f';
    }
    uVar2 = FUN_005105e4(param_1,param_2);
  }
  else {
    uVar2 = FUN_005105e4(param_1,param_2);
  }
  if ((uVar2 & 1) != 0) {
    return '\b';
  }
  uVar2 = FUN_0051061c(param_1,param_2);
  if ((uVar2 & 1) == 0) {
    return '\0';
  }
  cVar1 = '\f';
  if ((*param_1 & 0x10) != 0) {
    cVar1 = '\x10';
  }
  return cVar1 + (*param_1 & 0xf) * '\x04';
}


// ===== 004d93d0  FUN_004d93d0 =====

void FUN_004d93d0(uint *param_1,void *param_2,ulong *param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  ulong __n;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  size_t __n_00;
  long local_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  __n = FUN_004d9314(param_2,*param_3,*param_1);
  uVar1 = *param_1;
  uVar7 = *param_3;
  if (uVar1 < 7) {
    lVar8 = *(long *)(&DAT_001f71c8 + (long)(int)uVar1 * 8);
  }
  else {
    lVar8 = 0x28;
  }
  uVar6 = 0;
  lVar2 = uVar7 - __n;
  if ((uVar7 < __n) || (uVar7 = lVar8 + uVar7, param_4 < uVar7)) goto LAB_004d9734;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (uVar1 - 2 < 5) {
    bVar4 = false;
    __n_00 = 4;
    local_80 = (ulong)param_1[9];
    param_1[9] = param_1[9] + 1;
LAB_004d9488:
    lVar8 = (long)param_2 + __n;
    local_88 = 0;
    if (uVar1 - 2 < 2) goto LAB_004d9718;
    if (uVar1 - 4 < 2) {
      iVar5 = FUN_00558c08(lVar8,&local_88,lVar8,lVar2,param_2,__n,0,&local_80,param_1 + 1);
LAB_004d9530:
      uVar7 = __n + local_88 + 4;
      if (iVar5 == 0) goto LAB_004d9540;
      goto LAB_004d9730;
    }
    if (uVar1 == 6) {
      iVar5 = FUN_0055495c(lVar8,&local_88,lVar8,lVar2,param_2,__n,0,&local_80,param_1 + 1);
      goto LAB_004d9530;
    }
  }
  else {
    if (uVar1 == 1) {
      uStack_78 = *(undefined8 *)(param_1 + 0xc);
      local_80 = *(ulong *)(param_1 + 10);
      local_70 = *(undefined8 *)(param_1 + 0xe);
      uVar1 = (byte)param_1[10] + 1;
      *(char *)(param_1 + 10) = (char)uVar1;
      if ((((((uVar1 >> 8 == 0) ||
             (uVar1 = *(byte *)((long)param_1 + 0x29) + 1,
             *(char *)((long)param_1 + 0x29) = (char)uVar1, uVar1 >> 8 == 0)) ||
            (uVar1 = *(byte *)((long)param_1 + 0x2a) + 1,
            *(char *)((long)param_1 + 0x2a) = (char)uVar1, uVar1 >> 8 == 0)) ||
           (((uVar1 = *(byte *)((long)param_1 + 0x2b) + 1,
             *(char *)((long)param_1 + 0x2b) = (char)uVar1, uVar1 >> 8 == 0 ||
             (uVar1 = (byte)param_1[0xb] + 1, *(char *)(param_1 + 0xb) = (char)uVar1,
             uVar1 >> 8 == 0)) ||
            ((uVar1 = *(byte *)((long)param_1 + 0x2d) + 1,
             *(char *)((long)param_1 + 0x2d) = (char)uVar1, uVar1 >> 8 == 0 ||
             ((uVar1 = *(byte *)((long)param_1 + 0x2e) + 1,
              *(char *)((long)param_1 + 0x2e) = (char)uVar1, uVar1 >> 8 == 0 ||
              (uVar1 = *(byte *)((long)param_1 + 0x2f) + 1,
              *(char *)((long)param_1 + 0x2f) = (char)uVar1, uVar1 >> 8 == 0)))))))) ||
          ((uVar1 = (byte)param_1[0xc] + 1, *(char *)(param_1 + 0xc) = (char)uVar1, uVar1 >> 8 == 0
           || ((((((uVar1 = *(byte *)((long)param_1 + 0x31) + 1,
                   *(char *)((long)param_1 + 0x31) = (char)uVar1, uVar1 >> 8 == 0 ||
                   (uVar1 = *(byte *)((long)param_1 + 0x32) + 1,
                   *(char *)((long)param_1 + 0x32) = (char)uVar1, uVar1 >> 8 == 0)) ||
                  (uVar1 = *(byte *)((long)param_1 + 0x33) + 1,
                  *(char *)((long)param_1 + 0x33) = (char)uVar1, uVar1 >> 8 == 0)) ||
                 ((uVar1 = (byte)param_1[0xd] + 1, *(char *)(param_1 + 0xd) = (char)uVar1,
                  uVar1 >> 8 == 0 ||
                  (uVar1 = *(byte *)((long)param_1 + 0x35) + 1,
                  *(char *)((long)param_1 + 0x35) = (char)uVar1, uVar1 >> 8 == 0)))) ||
                ((uVar1 = *(byte *)((long)param_1 + 0x36) + 1,
                 *(char *)((long)param_1 + 0x36) = (char)uVar1, uVar1 >> 8 == 0 ||
                 ((uVar1 = *(byte *)((long)param_1 + 0x37) + 1,
                  *(char *)((long)param_1 + 0x37) = (char)uVar1, uVar1 >> 8 == 0 ||
                  (uVar1 = (byte)param_1[0xe] + 1, *(char *)(param_1 + 0xe) = (char)uVar1,
                  uVar1 >> 8 == 0)))))) ||
               (uVar1 = *(byte *)((long)param_1 + 0x39) + 1,
               *(char *)((long)param_1 + 0x39) = (char)uVar1, uVar1 >> 8 == 0)))))) ||
         ((((uVar1 = *(byte *)((long)param_1 + 0x3a) + 1,
            *(char *)((long)param_1 + 0x3a) = (char)uVar1, uVar1 >> 8 == 0 ||
            (uVar1 = *(byte *)((long)param_1 + 0x3b) + 1,
            *(char *)((long)param_1 + 0x3b) = (char)uVar1, uVar1 >> 8 == 0)) ||
           (uVar1 = (byte)param_1[0xf] + 1, *(char *)(param_1 + 0xf) = (char)uVar1, uVar1 >> 8 == 0)
           ) || ((uVar1 = *(byte *)((long)param_1 + 0x3d) + 1,
                 *(char *)((long)param_1 + 0x3d) = (char)uVar1, uVar1 >> 8 == 0 ||
                 (uVar1 = *(byte *)((long)param_1 + 0x3e) + 1,
                 *(char *)((long)param_1 + 0x3e) = (char)uVar1, uVar1 >> 8 == 0)))))) {
        bVar4 = false;
        __n_00 = 0x18;
      }
      else {
        bVar4 = false;
        __n_00 = 0x18;
        *(char *)((long)param_1 + 0x3f) = *(char *)((long)param_1 + 0x3f) + '\x01';
      }
    }
    else {
      if (uVar1 != 0) {
        __n_00 = 0;
        bVar4 = true;
        goto LAB_004d9488;
      }
      if (__n != 0) {
        memcpy(&local_80,param_2,__n);
      }
      __n_00 = 0;
      bVar4 = true;
    }
LAB_004d9718:
    local_88 = 0;
    iVar5 = FUN_00555980((long)param_2 + __n,(long)param_2 + __n,lVar2,&local_80,param_1 + 1);
    if (iVar5 != 0) {
LAB_004d9730:
      uVar6 = 0;
      goto LAB_004d9734;
    }
  }
LAB_004d9540:
  if (!bVar4) {
    memcpy((void *)((long)param_2 + (uVar7 - __n_00)),&local_80,__n_00);
  }
  uVar6 = 1;
  *param_3 = uVar7;
LAB_004d9734:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


// ===== 004d9768  FUN_004d9768 =====

void FUN_004d9768(undefined8 *param_1)

{
  param_1[0x16] = 0;
  *(undefined1 *)((long)param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0x17) = 1;
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
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


// ===== 004d9798  FUN_004d9798 =====

void FUN_004d9798(long param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  FUN_004d9814(param_1 + 0x60,puVar2,(long)puVar2 + uVar1);
  uVar1 = *(ulong *)(param_1 + 0x68);
  lVar3 = *(long *)(param_1 + 0x60);
  if (-1 < (char)*(byte *)(param_1 + 0x77)) {
    uVar1 = (ulong)*(byte *)(param_1 + 0x77);
    lVar3 = param_1 + 0x60;
  }
  FUN_004d9ab0(param_1,lVar3,lVar3 + uVar1,param_3,param_4);
  return;
}


// ===== 004d9814  FUN_004d9814 =====

undefined8 * FUN_004d9814(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined1 **ppuVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 *local_60;
  ulong uStack_58;
  undefined8 uStack_50;
  long local_48;
  
  ppuVar6 = &local_60;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar12 = (long)param_3 - (long)param_2;
  bVar1 = *(byte *)((long)param_1 + 0x17);
  uVar9 = (param_1[2] & 0x7fffffffffffffff) - 1;
  if (-1 < (char)bVar1) {
    uVar9 = 0x16;
  }
  if (uVar12 < uVar9 || uVar12 - uVar9 == 0) {
    cVar4 = (char)((ulong)param_1[2] >> 0x38);
  }
  else {
    uVar10 = param_1[1];
    puVar8 = (undefined8 *)*param_1;
    if (-1 < (char)bVar1) {
      uVar10 = (ulong)bVar1;
      puVar8 = param_1;
    }
    if ((puVar8 <= param_2) && (param_2 <= (undefined8 *)((long)puVar8 + uVar10))) {
      if (0x7fffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (uVar12 < 0x17) {
        uStack_50 = CONCAT17((char)uVar12,(undefined7)uStack_50);
      }
      else {
        uVar9 = (uVar12 | 0xf) + 1;
        local_60 = (undefined1 *)operator_new(uVar9);
        uStack_50 = uVar9 | 0x8000000000000000;
        uStack_58 = uVar12;
        ppuVar6 = (undefined1 **)local_60;
      }
      puVar7 = (undefined1 *)ppuVar6;
      if (param_2 != param_3) {
        if ((0x1f < uVar12) && (0x1f < (ulong)((long)ppuVar6 - (long)param_2))) {
          uVar10 = uVar12 & 0xffffffffffffffe0;
          puVar8 = param_2 + 2;
          puVar7 = (undefined1 *)((long)ppuVar6 + uVar10);
          puVar5 = (undefined8 *)((long)ppuVar6 + 0x10);
          uVar9 = uVar10;
          do {
            puVar11 = puVar8 + -1;
            uVar13 = puVar8[-2];
            uVar15 = puVar8[1];
            uVar14 = *puVar8;
            puVar8 = puVar8 + 4;
            uVar9 = uVar9 - 0x20;
            puVar5[-1] = *puVar11;
            puVar5[-2] = uVar13;
            puVar5[1] = uVar15;
            *puVar5 = uVar14;
            puVar5 = puVar5 + 4;
          } while (uVar9 != 0);
          ppuVar6 = (undefined1 **)puVar7;
          param_2 = (undefined8 *)((long)param_2 + uVar10);
          if (uVar12 == uVar10) goto LAB_004d9a1c;
        }
        do {
          puVar8 = (undefined8 *)((long)param_2 + 1);
          *(undefined1 *)ppuVar6 = *(undefined1 *)param_2;
          puVar7 = (undefined1 *)((long)ppuVar6 + 1);
          ppuVar6 = (undefined1 **)((long)ppuVar6 + 1);
          param_2 = puVar8;
        } while (puVar8 != param_3);
      }
LAB_004d9a1c:
      *puVar7 = 0;
      uVar9 = uStack_58;
      ppuVar6 = (undefined1 **)local_60;
      if (-1 < (long)uStack_50) {
        uVar9 = uStack_50 >> 0x38;
        ppuVar6 = &local_60;
      }
      FUN_004dcf30(param_1,ppuVar6,uVar9);
      if ((long)uStack_50 < 0) {
        operator_delete(local_60);
      }
      goto LAB_004d9a54;
    }
    FUN_0054774c(param_1,uVar9,uVar12 - uVar9,uVar10,0,uVar10,0);
    cVar4 = *(char *)((long)param_1 + 0x17);
  }
  puVar8 = (undefined8 *)*param_1;
  if (-1 < cVar4) {
    puVar8 = param_1;
  }
  if (param_2 != param_3) {
    puVar5 = puVar8;
    if ((0x1f < uVar12) && (0x1f < (ulong)((long)puVar8 - (long)param_2))) {
      uVar10 = uVar12 & 0xffffffffffffffe0;
      puVar11 = param_2 + 2;
      puVar5 = (undefined8 *)((long)puVar8 + uVar10);
      param_2 = (undefined8 *)((long)param_2 + uVar10);
      puVar8 = puVar8 + 2;
      uVar9 = uVar10;
      do {
        puVar3 = puVar11 + -1;
        uVar13 = puVar11[-2];
        uVar15 = puVar11[1];
        uVar14 = *puVar11;
        puVar11 = puVar11 + 4;
        uVar9 = uVar9 - 0x20;
        puVar8[-1] = *puVar3;
        puVar8[-2] = uVar13;
        puVar8[1] = uVar15;
        *puVar8 = uVar14;
        puVar8 = puVar8 + 4;
      } while (uVar9 != 0);
      puVar8 = puVar5;
      if (uVar12 == uVar10) goto LAB_004d99b4;
    }
    do {
      puVar11 = (undefined8 *)((long)param_2 + 1);
      puVar8 = (undefined8 *)((long)puVar5 + 1);
      *(undefined1 *)puVar5 = *(undefined1 *)param_2;
      puVar5 = puVar8;
      param_2 = puVar11;
    } while (puVar11 != param_3);
  }
LAB_004d99b4:
  *(undefined1 *)puVar8 = 0;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    param_1[1] = uVar12;
  }
  else {
    if (0x16 < uVar12) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                 "__s < __min_cap",
                 "__s should never be greater than or equal to the short string capacity");
    }
    *(char *)((long)param_1 + 0x17) = (char)uVar12;
  }
LAB_004d9a54:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}


// ===== 004d9ab0  FUN_004d9ab0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004d9ab0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,byte param_5
                 )

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte bVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 ****__dest;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 ****__src;
  ulong uVar17;
  char *local_b8;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 ***local_a0;
  ulong uStack_98;
  undefined8 local_90;
  int local_80 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)(param_1 + 0x78) = param_2;
  *(undefined8 *)(param_1 + 0x80) = param_3;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x88) = param_2;
  *(byte *)(param_1 + 0xbc) = *(char *)(param_1 + 0xb8) != '\0' & param_5;
  if (*(char *)(param_1 + 0xb7) < '\0') {
    **(undefined1 **)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xa0) = 0;
    *(undefined1 *)(param_1 + 0xb7) = 0;
  }
  FUN_004d9e00(param_1 + 0x30);
  lVar14 = *(long *)(param_1 + 0x28);
  while (lVar14 != 0) {
    FUN_004dd04c(param_1);
    lVar14 = *(long *)(param_1 + 0x28);
  }
  lVar15 = *(long *)(param_1 + 8);
  lVar16 = *(long *)(param_1 + 0x10);
  lVar14 = 0;
  if (lVar16 != lVar15) {
    lVar14 = (lVar16 - lVar15) * 0x40 + -1;
  }
  if (lVar14 == *(long *)(param_1 + 0x20)) {
    FUN_004dd124(param_1);
    lVar15 = *(long *)(param_1 + 8);
    lVar16 = *(long *)(param_1 + 0x10);
    lVar14 = *(long *)(param_1 + 0x28);
  }
  else {
    lVar14 = 0;
  }
  if (lVar16 == lVar15) {
LAB_004d9da8:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  uVar13 = *(long *)(param_1 + 0x20) + lVar14;
  lVar15 = *(long *)(lVar15 + (uVar13 >> 6 & 0x3fffffffffffff8));
  if (lVar15 == 0) goto LAB_004d9da8;
  *(undefined8 *)(lVar15 + (uVar13 & 0x1ff) * 8) = param_4;
  *(long *)(param_1 + 0x28) = lVar14 + 1;
  uVar12 = FUN_004d9f5c(param_1);
  bVar11 = FUN_004db0ac(param_1,local_80);
  if ((*(char *)(param_1 + 0xb8) != '\0') && ((bVar11 & local_80[0] == 0xc) == 1)) {
    do {
      uVar13 = FUN_004db0ac(param_1,local_80);
      if ((uVar13 & 1) == 0) break;
    } while (local_80[0] == 0xc);
  }
  if (*(char *)(param_1 + 0xbc) == '\0') {
LAB_004d9cc0:
    cVar1 = *(char *)(param_1 + 0xb9);
  }
  else {
    bVar11 = *(byte *)(param_1 + 0xb7);
    uVar17 = *(ulong *)(param_1 + 0xa8);
    uVar13 = uVar17;
    if (-1 < (char)bVar11) {
      uVar13 = (ulong)bVar11;
    }
    if (uVar13 == 0) goto LAB_004d9cc0;
    if ((char)bVar11 < '\0') {
      __src = *(undefined8 *****)(param_1 + 0xa0);
      if (uVar17 < 0x17) {
        __dest = &local_a0;
        local_90 = CONCAT17((char)uVar17,(undefined7)local_90);
      }
      else {
        if (0x7fffffffffffffef < uVar17) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar13 = (uVar17 | 0xf) + 1;
        __dest = (undefined8 ****)operator_new(uVar13);
        local_90 = uVar13 | 0x8000000000000000;
        local_a0 = __dest;
        uStack_98 = uVar17;
      }
      if ((__dest <= __src) && (__src < (undefined8 ****)((long)__dest + uVar17 + 1)))
      goto LAB_004d9dd0;
      memmove(__dest,__src,uVar17 + 1);
    }
    else {
      uStack_98 = *(ulong *)(param_1 + 0xa8);
      local_a0 = *(undefined8 ****)(param_1 + 0xa0);
      local_90 = *(ulong *)(param_1 + 0xb0);
    }
    FUN_004e1ad4(param_4,&local_a0,2);
    if (-1 < (long)local_90) goto LAB_004d9cc0;
    operator_delete(local_a0);
    cVar1 = *(char *)(param_1 + 0xb9);
  }
  if (((cVar1 != '\0') && (uVar13 = FUN_004e05c4(param_4), (uVar13 & 1) == 0)) &&
     (uVar13 = FUN_004e05d4(param_4), (uVar13 & 1) == 0)) {
    local_80[0] = 0xd;
    local_78 = param_2;
    uStack_70 = param_3;
    local_b8 = (char *)operator_new(0x50);
    uVar6 = s_A_valid_JSON_document_must_be_ei_001e770d._24_8_;
    uVar5 = s_A_valid_JSON_document_must_be_ei_001e770d._16_8_;
    uVar4 = s_A_valid_JSON_document_must_be_ei_001e770d._8_8_;
    uVar3 = s_A_valid_JSON_document_must_be_ei_001e770d._0_8_;
    lStack_a8 = _UNK_001f27e8;
    local_b0 = _DAT_001f27e0;
    if ((local_b8 < " valid JSON document must be either an array or an object value.") &&
       ("A valid JSON document must be either an array or an object value." < local_b8 + 0x41)) {
LAB_004d9dd0:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    local_b8[0x40] = '.';
    uVar10 = s_A_valid_JSON_document_must_be_ei_001e770d._56_8_;
    uVar9 = s_A_valid_JSON_document_must_be_ei_001e770d._48_8_;
    uVar8 = s_A_valid_JSON_document_must_be_ei_001e770d._40_8_;
    uVar7 = s_A_valid_JSON_document_must_be_ei_001e770d._32_8_;
    local_b8[0x41] = '\0';
    *(undefined8 *)(local_b8 + 8) = uVar4;
    *(undefined8 *)local_b8 = uVar3;
    *(undefined8 *)(local_b8 + 0x18) = uVar6;
    *(undefined8 *)(local_b8 + 0x10) = uVar5;
    *(undefined8 *)(local_b8 + 0x28) = uVar8;
    *(undefined8 *)(local_b8 + 0x20) = uVar7;
    *(undefined8 *)(local_b8 + 0x38) = uVar10;
    *(undefined8 *)(local_b8 + 0x30) = uVar9;
    FUN_004da520(param_1,&local_b8,local_80,0);
    if (lStack_a8 < 0) {
      operator_delete(local_b8);
    }
    uVar12 = 0;
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12 & 1;
}


// ===== 004d9e00  FUN_004d9e00 =====

void FUN_004d9e00(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 != puVar1) {
    uVar5 = *(ulong *)(param_1 + 0x20);
    uVar3 = *(long *)(param_1 + 0x28) + uVar5;
    plVar6 = puVar1 + uVar5 / 0x49;
    lVar8 = *plVar6 + (uVar5 % 0x49) * 0x38;
    lVar7 = puVar1[uVar3 / 0x49] + (uVar3 % 0x49) * 0x38;
    if (lVar8 != lVar7) {
      do {
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x3f,"__loc != nullptr","null pointer given to destroy_at");
        }
        if (*(char *)(lVar8 + 0x2f) < '\0') {
          operator_delete(*(void **)(lVar8 + 0x18));
        }
        lVar8 = lVar8 + 0x38;
        if (lVar8 - *plVar6 == 0xff8) {
          plVar6 = plVar6 + 1;
          lVar8 = *plVar6;
        }
      } while (lVar8 != lVar7);
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
    uVar2 = 0x24;
  }
  else {
    if (uVar3 >> 3 != 2) {
      return;
    }
    uVar2 = 0x49;
  }
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  return;
}


// ===== 004d9f5c  FUN_004d9f5c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004d9f5c(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  uint uVar9;
  ulong uVar10;
  undefined1 **__dest;
  long lVar11;
  undefined8 uVar12;
  undefined1 *__src;
  ulong uVar13;
  undefined1 *local_a0;
  ulong uStack_98;
  undefined8 local_90;
  int local_88 [2];
  long local_80;
  long local_78;
  char *local_70;
  undefined8 local_68;
  long lStack_60;
  long local_48;
  
  __dest = &local_a0;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (1000 < *(ulong *)(param_1 + 0x28)) {
    FUN_004a3cf4(&local_70,"Exceeded stackLimit in readValue().");
    FUN_004df054(&local_70);
LAB_004da518:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  bVar8 = FUN_004db0ac(param_1,local_88);
  if ((*(char *)(param_1 + 0xb8) != '\0') && ((bVar8 & local_88[0] == 0xc) == 1)) {
    do {
      uVar10 = FUN_004db0ac(param_1,local_88);
      if ((uVar10 & 1) == 0) break;
    } while (local_88[0] == 0xc);
  }
  if (*(char *)(param_1 + 0xbc) != '\0') {
    bVar8 = *(byte *)(param_1 + 0xb7);
    uVar13 = *(ulong *)(param_1 + 0xa8);
    uVar10 = uVar13;
    if (-1 < (char)bVar8) {
      uVar10 = (ulong)bVar8;
    }
    if (uVar10 != 0) {
      uVar10 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
      uVar12 = *(undefined8 *)
                (*(long *)(*(long *)(param_1 + 8) + (uVar10 >> 6 & 0x3fffffffffffff8)) +
                (uVar10 & 0x1ff) * 8);
      if ((char)bVar8 < '\0') {
        __src = *(undefined1 **)(param_1 + 0xa0);
        if (uVar13 < 0x17) {
          local_90 = CONCAT17((char)uVar13,(undefined7)local_90);
        }
        else {
          if (0x7fffffffffffffef < uVar13) goto LAB_004da518;
          uVar10 = (uVar13 | 0xf) + 1;
          __dest = (undefined1 **)operator_new(uVar10);
          local_90 = uVar10 | 0x8000000000000000;
          local_a0 = (undefined1 *)__dest;
          uStack_98 = uVar13;
        }
        if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar13 + 1)))
        goto LAB_004da4d8;
        memmove(__dest,__src,uVar13 + 1);
      }
      else {
        uStack_98 = *(ulong *)(param_1 + 0xa8);
        local_a0 = *(undefined1 **)(param_1 + 0xa0);
        local_90 = *(ulong *)(param_1 + 0xb0);
      }
      FUN_004e1ad4(uVar12,&local_a0,0);
      if ((long)local_90 < 0) {
        operator_delete(local_a0);
        cVar1 = *(char *)(param_1 + 0xb7);
      }
      else {
        cVar1 = *(char *)(param_1 + 0xb7);
      }
      if (cVar1 < '\0') {
        **(undefined1 **)(param_1 + 0xa0) = 0;
        *(undefined8 *)(param_1 + 0xa8) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0xa0) = 0;
        *(undefined1 *)(param_1 + 0xb7) = 0;
      }
    }
  }
  switch(local_88[0]) {
  case 1:
    uVar9 = FUN_004da63c(param_1,local_88);
    goto LAB_004da2b8;
  case 2:
  case 4:
  case 10:
    if (*(char *)(param_1 + 0xba) == '\0') goto switchD_004da100_default;
    *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + -1;
    FUN_004df134(&local_70,0);
    uVar10 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    FUN_004dfa74(*(undefined8 *)
                  (*(long *)(*(long *)(param_1 + 8) + (uVar10 >> 6 & 0x3fffffffffffff8)) +
                  (uVar10 & 0x1ff) * 8),&local_70);
    uVar10 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    FUN_004e1d60(*(undefined8 *)
                  (*(long *)(*(long *)(param_1 + 8) + (uVar10 >> 6 & 0x3fffffffffffff8)) +
                  (uVar10 & 0x1ff) * 8),~*(ulong *)(param_1 + 0x78) + *(long *)(param_1 + 0x88));
    uVar10 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    lVar11 = *(long *)(*(long *)(param_1 + 8) + (uVar10 >> 6 & 0x3fffffffffffff8));
    local_78 = *(long *)(param_1 + 0x88);
    goto LAB_004da458;
  case 3:
    uVar9 = FUN_004dab4c(param_1,local_88);
LAB_004da2b8:
    uVar10 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    FUN_004e1d68(*(undefined8 *)
                  (*(long *)(*(long *)(param_1 + 8) + (uVar10 >> 6 & 0x3fffffffffffff8)) +
                  (uVar10 & 0x1ff) * 8),*(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x78));
    break;
  case 5:
    uVar9 = FUN_004daf88(param_1,local_88);
    break;
  case 6:
    uVar9 = FUN_004dae74(param_1,local_88);
    break;
  case 7:
    uVar9 = 1;
    FUN_004df5b4(&local_70,1);
    uVar10 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    FUN_004dfa74(*(undefined8 *)
                  (*(long *)(*(long *)(param_1 + 8) + (uVar10 >> 6 & 0x3fffffffffffff8)) +
                  (uVar10 & 0x1ff) * 8),&local_70);
    uVar10 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    FUN_004e1d60(*(undefined8 *)
                  (*(long *)(*(long *)(param_1 + 8) + (uVar10 >> 6 & 0x3fffffffffffff8)) +
                  (uVar10 & 0x1ff) * 8),local_80 - *(long *)(param_1 + 0x78));
    uVar10 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    FUN_004e1d68(*(undefined8 *)
                  (*(long *)(*(long *)(param_1 + 8) + (uVar10 >> 6 & 0x3fffffffffffff8)) +
                  (uVar10 & 0x1ff) * 8),local_78 - *(long *)(param_1 + 0x78));
    FUN_004df880(&local_70);
    break;
  case 8:
    FUN_004df5b4(&local_70,0);
    goto LAB_004da3d4;
  case 9:
    FUN_004df134(&local_70,0);
LAB_004da3d4:
    uVar10 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    FUN_004dfa74(*(undefined8 *)
                  (*(long *)(*(long *)(param_1 + 8) + (uVar10 >> 6 & 0x3fffffffffffff8)) +
                  (uVar10 & 0x1ff) * 8),&local_70);
    uVar10 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    FUN_004e1d60(*(undefined8 *)
                  (*(long *)(*(long *)(param_1 + 8) + (uVar10 >> 6 & 0x3fffffffffffff8)) +
                  (uVar10 & 0x1ff) * 8),local_80 - *(long *)(param_1 + 0x78));
    uVar10 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    lVar11 = *(long *)(*(long *)(param_1 + 8) + (uVar10 >> 6 & 0x3fffffffffffff8));
LAB_004da458:
    FUN_004e1d68(*(undefined8 *)(lVar11 + (uVar10 & 0x1ff) * 8),local_78 - *(long *)(param_1 + 0x78)
                );
    FUN_004df880(&local_70);
    uVar9 = 1;
    break;
  default:
switchD_004da100_default:
    uVar10 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    FUN_004e1d60(*(undefined8 *)
                  (*(long *)(*(long *)(param_1 + 8) + (uVar10 >> 6 & 0x3fffffffffffff8)) +
                  (uVar10 & 0x1ff) * 8),local_80 - *(long *)(param_1 + 0x78));
    uVar10 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    FUN_004e1d68(*(undefined8 *)
                  (*(long *)(*(long *)(param_1 + 8) + (uVar10 >> 6 & 0x3fffffffffffff8)) +
                  (uVar10 & 0x1ff) * 8),local_78 - *(long *)(param_1 + 0x78));
    local_70 = (char *)operator_new(0x30);
    uVar6 = s_Syntax_error__value__object_or_a_0019ced3._16_8_;
    uVar5 = s_Syntax_error__value__object_or_a_0019ced3._8_8_;
    uVar12 = s_Syntax_error__value__object_or_a_0019ced3._0_8_;
    lStack_60 = _UNK_001f2ed8;
    local_68 = _DAT_001f2ed0;
    if ((local_70 < "yntax error: value, object or array expected.") &&
       ("Syntax error: value, object or array expected." < local_70 + 0x2e)) {
LAB_004da4d8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar3 = CONCAT26(s_Syntax_error__value__object_or_a_0019ced3._30_2_,
                     s_Syntax_error__value__object_or_a_0019ced3._24_6_);
    local_70[0x2e] = '\0';
    uVar7 = s_Syntax_error__value__object_or_a_0019ced3._38_8_;
    uVar4 = CONCAT62(s_Syntax_error__value__object_or_a_0019ced3._32_6_,
                     s_Syntax_error__value__object_or_a_0019ced3._30_2_);
    *(undefined8 *)(local_70 + 8) = uVar5;
    *(undefined8 *)local_70 = uVar12;
    *(undefined8 *)(local_70 + 0x18) = uVar3;
    *(undefined8 *)(local_70 + 0x10) = uVar6;
    *(undefined8 *)(local_70 + 0x26) = uVar7;
    *(undefined8 *)(local_70 + 0x1e) = uVar4;
    FUN_004da520(param_1,&local_70,local_88,0);
    if (lStack_60 < 0) {
      operator_delete(local_70);
    }
    uVar9 = 0;
    goto LAB_004da4ac;
  }
  if (*(char *)(param_1 + 0xbc) != '\0') {
    uVar10 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x98) =
         *(undefined8 *)
          (*(long *)(*(long *)(param_1 + 8) + (uVar10 >> 6 & 0x3fffffffffffff8)) +
          (uVar10 & 0x1ff) * 8);
  }
LAB_004da4ac:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004da520  FUN_004da520 =====

undefined8 FUN_004da520(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  long lStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uStack_68 = param_3[1];
  local_70 = *param_3;
  local_60 = param_3[2];
  local_50 = 0;
  lStack_48 = 0;
  local_58 = (void *)0x0;
  FUN_00411268(&local_58);
  lVar4 = *(long *)(param_1 + 0x38);
  lVar5 = *(long *)(param_1 + 0x40);
  lVar3 = 0;
  if (lVar5 != lVar4) {
    lVar3 = (lVar5 - lVar4 >> 3) * 0x49 + -1;
  }
  local_40 = param_4;
  if (lVar3 == *(long *)(param_1 + 0x58) + *(long *)(param_1 + 0x50)) {
    FUN_004ddb10(param_1 + 0x30);
    lVar4 = *(long *)(param_1 + 0x38);
    lVar5 = *(long *)(param_1 + 0x40);
  }
  if (lVar5 == lVar4) {
    lVar3 = 0;
  }
  else {
    uVar1 = *(long *)(param_1 + 0x58) + *(long *)(param_1 + 0x50);
    lVar3 = *(long *)(lVar4 + (uVar1 / 0x49) * 8) + (uVar1 % 0x49) * 0x38;
  }
  FUN_004de4fc(lVar3,&local_70);
  *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
  if (lStack_48 < 0) {
    operator_delete(local_58);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004da63c  FUN_004da63c =====

/* WARNING: Removing unreachable block (ram,0x004da990) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004da63c(long param_1,long param_2)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined4 uVar14;
  char *local_f0;
  undefined8 local_e8;
  ulong uStack_e0;
  char *local_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  char *local_c0;
  ulong uStack_b8;
  ulong local_b0;
  int local_a0 [6];
  char *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_c0 = (char *)0x0;
  uStack_b8 = 0;
  local_b0 = 0;
  FUN_004df134(auStack_60,7);
  uVar9 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
  FUN_004dfa74(*(undefined8 *)
                (*(long *)(*(long *)(param_1 + 8) + (uVar9 >> 6 & 0x3fffffffffffff8)) +
                (uVar9 & 0x1ff) * 8),auStack_60);
  uVar9 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
  FUN_004e1d60(*(undefined8 *)
                (*(long *)(*(long *)(param_1 + 8) + (uVar9 >> 6 & 0x3fffffffffffff8)) +
                (uVar9 & 0x1ff) * 8),*(long *)(param_2 + 8) - *(long *)(param_1 + 0x78));
  do {
    bVar7 = FUN_004db0ac(param_1,local_a0);
    if ((*(char *)(param_1 + 0xb8) != '\0') && ((bVar7 & local_a0[0] == 0xc) == 1)) {
      do {
        bVar7 = FUN_004db0ac(param_1,local_a0);
        if ((bVar7 & 1) == 0) break;
      } while (local_a0[0] == 0xc);
    }
    if ((bVar7 & 1) == 0) {
LAB_004da924:
      local_88 = (char *)operator_new(0x30);
      uVar5 = s_Missing_____or_object_member_nam_001ade94._24_8_;
      uVar4 = s_Missing_____or_object_member_nam_001ade94._16_8_;
      uVar3 = s_Missing_____or_object_member_nam_001ade94._8_8_;
      uVar8 = s_Missing_____or_object_member_nam_001ade94._0_8_;
      uStack_78 = _UNK_001f48b8;
      local_80 = _DAT_001f48b0;
      if ((local_88 < "issing \'}\' or object member name") &&
         ("Missing \'}\' or object member name" < local_88 + 0x21)) {
LAB_004dab20:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      local_88[0x20] = 'e';
      local_88[0x21] = '\0';
      *(undefined8 *)(local_88 + 8) = uVar3;
      *(undefined8 *)local_88 = uVar8;
      *(undefined8 *)(local_88 + 0x18) = uVar5;
      *(undefined8 *)(local_88 + 0x10) = uVar4;
      FUN_004da520(param_1,&local_88,local_a0,0);
      FUN_004dbfdc(param_1,2);
LAB_004daab4:
      uVar14 = 0;
      goto LAB_004daab8;
    }
    if (local_a0[0] == 2) {
      uVar9 = uStack_b8;
      if (-1 < (long)local_b0) {
        uVar9 = local_b0 >> 0x38;
      }
      if (uVar9 == 0) break;
    }
    if ((long)local_b0 < 0) {
      *local_c0 = '\0';
      uStack_b8 = 0;
      if (local_a0[0] != 6) goto LAB_004da75c;
LAB_004da790:
      if (*(char *)(param_1 + 0xbb) == '\0') goto LAB_004da924;
      FUN_004df134(&local_88,0);
      uVar9 = FUN_004dc278(param_1,local_a0,&local_88);
      if ((uVar9 & 1) != 0) {
        FUN_004dfbf8(&local_d8,&local_88);
        if ((long)local_b0 < 0) {
          operator_delete(local_c0);
        }
        uStack_b8 = uStack_d0;
        local_c0 = local_d8;
        local_b0 = uStack_c8;
        FUN_004df880(&local_88);
        goto LAB_004da7ec;
      }
      FUN_004dbfdc(param_1,2);
      FUN_004df880(&local_88);
      goto LAB_004daab4;
    }
    local_c0 = (char *)((ulong)local_c0 & 0xffffffffffffff00);
    local_b0 = local_b0 & 0xffffffffffffff;
    if (local_a0[0] == 6) goto LAB_004da790;
LAB_004da75c:
    if (local_a0[0] != 5) goto LAB_004da924;
    uVar9 = FUN_004db8b8(param_1,local_a0,&local_c0);
    if ((uVar9 & 1) == 0) {
LAB_004daa10:
      FUN_004dbfdc(param_1,2);
      goto LAB_004daab4;
    }
LAB_004da7ec:
    uVar9 = FUN_004db0ac(param_1,&local_88);
    if (((uVar9 & 1) == 0) || ((int)local_88 != 0xb)) {
      local_d8 = (char *)operator_new(0x30);
      uVar5 = s_Missing_____after_object_member_n_001a8c09._24_8_;
      uVar4 = s_Missing_____after_object_member_n_001a8c09._16_8_;
      uVar3 = s_Missing_____after_object_member_n_001a8c09._8_8_;
      uVar8 = s_Missing_____after_object_member_n_001a8c09._0_8_;
      uStack_c8 = _UNK_001f2568;
      uStack_d0 = _DAT_001f2560;
      if ((local_d8 < "issing \':\' after object member name") &&
         ("Missing \':\' after object member name" < local_d8 + 0x24)) goto LAB_004dab20;
      local_d8[0x24] = '\0';
      local_d8[0x20] = 'n';
      local_d8[0x21] = 'a';
      local_d8[0x22] = 'm';
      local_d8[0x23] = 'e';
      *(undefined8 *)(local_d8 + 8) = uVar3;
      *(undefined8 *)local_d8 = uVar8;
      *(undefined8 *)(local_d8 + 0x18) = uVar5;
      *(undefined8 *)(local_d8 + 0x10) = uVar4;
      FUN_004da520(param_1,&local_d8,&local_88,0);
      FUN_004dbfdc(param_1,2);
      pcVar2 = local_d8;
      uVar9 = uStack_c8;
joined_r0x004daa90:
      if ((long)uVar9 < 0) {
        operator_delete(pcVar2);
      }
      goto LAB_004daab4;
    }
    uVar9 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    uVar8 = FUN_004e146c(*(undefined8 *)
                          (*(long *)(*(long *)(param_1 + 8) + (uVar9 >> 6 & 0x3fffffffffffff8)) +
                          (uVar9 & 0x1ff) * 8),&local_c0);
    lVar11 = *(long *)(param_1 + 8);
    lVar13 = *(long *)(param_1 + 0x10);
    lVar10 = *(long *)(param_1 + 0x28);
    lVar12 = 0;
    if (lVar13 != lVar11) {
      lVar12 = (lVar13 - lVar11) * 0x40 + -1;
    }
    if (lVar12 == lVar10 + *(long *)(param_1 + 0x20)) {
      FUN_004dd124(param_1);
      lVar11 = *(long *)(param_1 + 8);
      lVar13 = *(long *)(param_1 + 0x10);
      lVar10 = *(long *)(param_1 + 0x28);
    }
    if (lVar13 == lVar11) {
LAB_004daaf8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                 ,0x23,"__location != nullptr","null pointer given to construct_at");
    }
    uVar9 = *(long *)(param_1 + 0x20) + lVar10;
    lVar12 = *(long *)(lVar11 + (uVar9 >> 6 & 0x3fffffffffffff8));
    if (lVar12 == 0) goto LAB_004daaf8;
    *(undefined8 *)(lVar12 + (uVar9 & 0x1ff) * 8) = uVar8;
    *(long *)(param_1 + 0x28) = lVar10 + 1;
    uVar9 = FUN_004d9f5c(param_1);
    FUN_004dd04c(param_1);
    if ((uVar9 & 1) == 0) goto LAB_004daa10;
    bVar7 = FUN_004db0ac(param_1,&local_d8);
    if ((*(char *)(param_1 + 0xb8) != '\0') && ((bVar7 & (uint)local_d8 == 0xc) == 1)) {
      do {
        bVar7 = FUN_004db0ac(param_1,&local_d8);
        if ((bVar7 & 1) == 0) break;
      } while ((uint)local_d8 == 0xc);
    }
    if (((bVar7 & 1) == 0) || (((uint)local_d8 & 0xfffffff7) != 2)) {
      local_f0 = (char *)operator_new(0x30);
      uVar5 = s_Missing_____or_____in_object_dec_0019fff9._24_8_;
      uVar4 = s_Missing_____or_____in_object_dec_0019fff9._16_8_;
      uVar3 = s_Missing_____or_____in_object_dec_0019fff9._8_8_;
      uVar8 = s_Missing_____or_____in_object_dec_0019fff9._0_8_;
      uStack_e0 = _UNK_001f42e8;
      local_e8 = _DAT_001f42e0;
      if ((local_f0 < "issing \',\' or \'}\' in object declaration") &&
         ("Missing \',\' or \'}\' in object declaration" < local_f0 + 0x28)) goto LAB_004dab20;
      local_f0[0x28] = '\0';
      uVar6 = s_Missing_____or_____in_object_dec_0019fff9._32_8_;
      *(undefined8 *)(local_f0 + 8) = uVar3;
      *(undefined8 *)local_f0 = uVar8;
      *(undefined8 *)(local_f0 + 0x18) = uVar5;
      *(undefined8 *)(local_f0 + 0x10) = uVar4;
      *(undefined8 *)(local_f0 + 0x20) = uVar6;
      FUN_004da520(param_1,&local_f0,&local_d8,0);
      FUN_004dbfdc(param_1,2);
      pcVar2 = local_f0;
      uVar9 = uStack_e0;
      goto joined_r0x004daa90;
    }
  } while ((uint)local_d8 != 2);
  uVar14 = 1;
LAB_004daab8:
  FUN_004df880(auStack_60);
  if ((long)local_b0 < 0) {
    operator_delete(local_c0);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14;
}


// ===== 004dab4c  FUN_004dab4c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004dab4c(long param_1,long param_2)

{
  byte *pbVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined4 uVar14;
  int iVar15;
  char *local_90;
  undefined8 local_88;
  long lStack_80;
  int local_78 [6];
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_004df134(auStack_60,6);
  uVar9 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
  FUN_004dfa74(*(undefined8 *)
                (*(long *)(*(long *)(param_1 + 8) + (uVar9 >> 6 & 0x3fffffffffffff8)) +
                (uVar9 & 0x1ff) * 8),auStack_60);
  uVar9 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
  FUN_004e1d60(*(undefined8 *)
                (*(long *)(*(long *)(param_1 + 8) + (uVar9 >> 6 & 0x3fffffffffffff8)) +
                (uVar9 & 0x1ff) * 8),*(long *)(param_2 + 8) - *(long *)(param_1 + 0x78));
  pbVar1 = *(byte **)(param_1 + 0x88);
  while (pbVar1 != *(byte **)(param_1 + 0x80)) {
    if (0x20 < *pbVar1 || (1L << ((ulong)*pbVar1 & 0x3f) & 0x100002600U) == 0) {
      if ((pbVar1 != *(byte **)(param_1 + 0x80)) && (*pbVar1 == 0x5d)) {
        FUN_004db0ac(param_1,local_78);
        goto LAB_004dad38;
      }
      break;
    }
    pbVar1 = pbVar1 + 1;
    *(byte **)(param_1 + 0x88) = pbVar1;
  }
  iVar15 = 0;
  do {
    uVar9 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    uVar8 = FUN_004e0998(*(undefined8 *)
                          (*(long *)(*(long *)(param_1 + 8) + (uVar9 >> 6 & 0x3fffffffffffff8)) +
                          (uVar9 & 0x1ff) * 8),iVar15);
    lVar11 = *(long *)(param_1 + 8);
    lVar13 = *(long *)(param_1 + 0x10);
    lVar10 = *(long *)(param_1 + 0x28);
    lVar12 = 0;
    if (lVar13 != lVar11) {
      lVar12 = (lVar13 - lVar11) * 0x40 + -1;
    }
    if (lVar12 == lVar10 + *(long *)(param_1 + 0x20)) {
      FUN_004dd124(param_1);
      lVar11 = *(long *)(param_1 + 8);
      lVar13 = *(long *)(param_1 + 0x10);
      lVar10 = *(long *)(param_1 + 0x28);
    }
    if (lVar13 == lVar11) {
LAB_004dae20:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                 ,0x23,"__location != nullptr","null pointer given to construct_at");
    }
    uVar9 = *(long *)(param_1 + 0x20) + lVar10;
    lVar12 = *(long *)(lVar11 + (uVar9 >> 6 & 0x3fffffffffffff8));
    if (lVar12 == 0) goto LAB_004dae20;
    *(undefined8 *)(lVar12 + (uVar9 & 0x1ff) * 8) = uVar8;
    *(long *)(param_1 + 0x28) = lVar10 + 1;
    uVar9 = FUN_004d9f5c(param_1);
    FUN_004dd04c(param_1);
    if ((uVar9 & 1) == 0) {
      FUN_004dbfdc(param_1,4);
      goto LAB_004dadc8;
    }
    bVar7 = FUN_004db0ac(param_1,local_78);
    if ((*(char *)(param_1 + 0xb8) != '\0') && ((bVar7 & local_78[0] == 0xc) == 1)) {
      do {
        bVar7 = FUN_004db0ac(param_1,local_78);
        if ((bVar7 & 1) == 0) break;
      } while (local_78[0] == 0xc);
    }
    if ((bVar7 & 1) == 0) goto LAB_004dad40;
    if (local_78[0] != 10) {
      if (local_78[0] == 4) {
LAB_004dad38:
        uVar14 = 1;
      }
      else {
LAB_004dad40:
        local_90 = (char *)operator_new(0x30);
        uVar6 = s_Missing_____or_____in_array_decl_001b68b8._16_8_;
        uVar5 = s_Missing_____or_____in_array_decl_001b68b8._8_8_;
        uVar8 = s_Missing_____or_____in_array_decl_001b68b8._0_8_;
        lStack_80 = _UNK_001f3f58;
        local_88 = _DAT_001f3f50;
        if ((local_90 < "issing \',\' or \']\' in array declaration") &&
           ("Missing \',\' or \']\' in array declaration" < local_90 + 0x27)) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                     ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
        }
        uVar3 = CONCAT17(s_Missing_____or_____in_array_decl_001b68b8[0x1f],
                         s_Missing_____or_____in_array_decl_001b68b8._24_7_);
        local_90[0x27] = '\0';
        uVar4 = CONCAT71(s_Missing_____or_____in_array_decl_001b68b8._32_7_,
                         s_Missing_____or_____in_array_decl_001b68b8[0x1f]);
        *(undefined8 *)(local_90 + 8) = uVar5;
        *(undefined8 *)local_90 = uVar8;
        *(undefined8 *)(local_90 + 0x18) = uVar3;
        *(undefined8 *)(local_90 + 0x10) = uVar6;
        *(undefined8 *)(local_90 + 0x1f) = uVar4;
        FUN_004da520(param_1,&local_90,local_78,0);
        FUN_004dbfdc(param_1,4);
        if (lStack_80 < 0) {
          operator_delete(local_90);
        }
LAB_004dadc8:
        uVar14 = 0;
      }
      FUN_004df880(auStack_60);
      if (*(long *)(lVar2 + 0x28) == local_38) {
        return uVar14;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    iVar15 = iVar15 + 1;
  } while( true );
}


// ===== 004dae74  FUN_004dae74 =====

uint FUN_004dae74(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004df134(auStack_60,0);
  uVar2 = FUN_004dc278(param_1,param_2,auStack_60);
  if ((uVar2 & 1) != 0) {
    uVar3 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    FUN_004dfa74(*(undefined8 *)
                  (*(long *)(*(long *)(param_1 + 8) + (uVar3 >> 6 & 0x3fffffffffffff8)) +
                  (uVar3 & 0x1ff) * 8),auStack_60);
    uVar3 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    FUN_004e1d60(*(undefined8 *)
                  (*(long *)(*(long *)(param_1 + 8) + (uVar3 >> 6 & 0x3fffffffffffff8)) +
                  (uVar3 & 0x1ff) * 8),*(long *)(param_2 + 8) - *(long *)(param_1 + 0x78));
    uVar3 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    FUN_004e1d68(*(undefined8 *)
                  (*(long *)(*(long *)(param_1 + 8) + (uVar3 >> 6 & 0x3fffffffffffff8)) +
                  (uVar3 & 0x1ff) * 8),*(long *)(param_2 + 0x10) - *(long *)(param_1 + 0x78));
  }
  FUN_004df880(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004daf88  FUN_004daf88 =====

uint FUN_004daf88(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  void *local_78;
  undefined8 uStack_70;
  long local_68;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_78 = (void *)0x0;
  uStack_70 = 0;
  local_68 = 0;
  uVar2 = FUN_004db8b8(param_1,param_2,&local_78);
  if ((uVar2 & 1) != 0) {
    FUN_004df478(auStack_60,&local_78);
    uVar3 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    FUN_004dfa74(*(undefined8 *)
                  (*(long *)(*(long *)(param_1 + 8) + (uVar3 >> 6 & 0x3fffffffffffff8)) +
                  (uVar3 & 0x1ff) * 8),auStack_60);
    uVar3 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    FUN_004e1d60(*(undefined8 *)
                  (*(long *)(*(long *)(param_1 + 8) + (uVar3 >> 6 & 0x3fffffffffffff8)) +
                  (uVar3 & 0x1ff) * 8),*(long *)(param_2 + 8) - *(long *)(param_1 + 0x78));
    uVar3 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    FUN_004e1d68(*(undefined8 *)
                  (*(long *)(*(long *)(param_1 + 8) + (uVar3 >> 6 & 0x3fffffffffffff8)) +
                  (uVar3 & 0x1ff) * 8),*(long *)(param_2 + 0x10) - *(long *)(param_1 + 0x78));
    FUN_004df880(auStack_60);
  }
  if (local_68 < 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004db0ac  FUN_004db0ac =====

undefined8 FUN_004db0ac(long param_1,undefined4 *param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  pbVar1 = *(byte **)(param_1 + 0x80);
  pbVar7 = *(byte **)(param_1 + 0x88);
  if (pbVar7 != pbVar1) {
    pbVar8 = pbVar1 + ~(ulong)pbVar7;
LAB_004db0e0:
    if (*pbVar7 < 0x21 && (1L << ((ulong)*pbVar7 & 0x3f) & 0x100002600U) != 0)
    goto code_r0x004db0f8;
    *(byte **)(param_2 + 2) = pbVar7;
    if (pbVar7 == pbVar1) goto switchD_004db160_caseD_0;
    pbVar5 = pbVar7 + 1;
    *(byte **)(param_1 + 0x88) = pbVar5;
    switch(*pbVar7) {
    case 0:
      goto switchD_004db160_caseD_0;
    default:
      goto switchD_004db160_caseD_1;
    case 0x22:
      *param_2 = 5;
      goto joined_r0x004db248;
    case 0x2c:
      uVar4 = 10;
      break;
    case 0x2d:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      *param_2 = 6;
      goto LAB_004db16c;
    case 0x2f:
      *param_2 = 0xc;
      uVar3 = FUN_004db3b8(param_1);
      if ((uVar3 & 1) == 0) goto switchD_004db160_caseD_1;
      goto LAB_004db2a8;
    case 0x3a:
      uVar4 = 0xb;
      break;
    case 0x5b:
      uVar4 = 3;
      break;
    case 0x5d:
      uVar4 = 4;
      break;
    case 0x66:
      *param_2 = 8;
      if (((3 < (long)pbVar8) && (pbVar7[4] == 0x65)) &&
         ((pbVar7[3] == 0x73 && ((pbVar7[2] == 0x6c && (*pbVar5 == 0x61)))))) {
        pbVar7 = pbVar7 + 5;
        goto LAB_004db380;
      }
      goto switchD_004db160_caseD_1;
    case 0x6e:
      *param_2 = 9;
      if (((2 < (long)pbVar8) && (pbVar7[3] == 0x6c)) && ((pbVar7[2] == 0x6c && (*pbVar5 == 0x75))))
      goto LAB_004db37c;
      goto switchD_004db160_caseD_1;
    case 0x74:
      *param_2 = 7;
      if (((((long)pbVar8 < 3) || (pbVar7[3] != 0x65)) || (pbVar7[2] != 0x75)) || (*pbVar5 != 0x72))
      goto switchD_004db160_caseD_1;
LAB_004db37c:
      pbVar7 = pbVar7 + 4;
LAB_004db380:
      uVar2 = 1;
      *(byte **)(param_1 + 0x88) = pbVar7;
      goto LAB_004db118;
    case 0x7b:
      uVar2 = 1;
      *param_2 = 1;
      goto LAB_004db118;
    case 0x7d:
      uVar4 = 2;
    }
    uVar2 = 1;
    *param_2 = uVar4;
    goto LAB_004db118;
  }
LAB_004db10c:
  *(byte **)(param_2 + 2) = pbVar1;
switchD_004db160_caseD_0:
  uVar2 = 1;
  *param_2 = 0;
  goto LAB_004db118;
code_r0x004db0f8:
  pbVar7 = pbVar7 + 1;
  pbVar8 = pbVar8 + -1;
  *(byte **)(param_1 + 0x88) = pbVar7;
  if (pbVar7 == pbVar1) goto LAB_004db10c;
  goto LAB_004db0e0;
  while( true ) {
    pbVar5 = pbVar7 + 1;
    bVar6 = *pbVar7;
    if (9 < bVar6 - 0x30) break;
LAB_004db16c:
    pbVar7 = pbVar5;
    *(byte **)(param_1 + 0x88) = pbVar7;
    if (pbVar1 <= pbVar7) goto LAB_004db2a8;
  }
  if (bVar6 == 0x2e) {
    *(byte **)(param_1 + 0x88) = pbVar5;
    if (pbVar1 <= pbVar5) goto LAB_004db2a8;
    bVar6 = *pbVar5;
    pbVar5 = pbVar7 + 2;
    while (bVar6 - 0x30 < 10) {
      *(byte **)(param_1 + 0x88) = pbVar5;
      if (pbVar1 <= pbVar5) goto LAB_004db2a8;
      bVar6 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    }
  }
  if (((bVar6 & 0xdf) == 0x45) && (*(byte **)(param_1 + 0x88) = pbVar5, pbVar5 < pbVar1)) {
    pbVar7 = pbVar5 + 1;
    bVar6 = *pbVar5;
    if ((bVar6 == 0x2d) || (bVar6 == 0x2b)) {
      *(byte **)(param_1 + 0x88) = pbVar7;
      if (pbVar1 <= pbVar7) goto LAB_004db2a8;
      pbVar7 = pbVar5 + 2;
      bVar6 = pbVar5[1];
    }
    if (bVar6 - 0x30 < 10) {
      uVar2 = 1;
      do {
        *(byte **)(param_1 + 0x88) = pbVar7;
        if (pbVar1 <= pbVar7) goto LAB_004db2a8;
        bVar6 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar6 - 0x30 < 10);
      goto LAB_004db118;
    }
  }
  goto LAB_004db2a8;
switchD_004db160_caseD_1:
  uVar2 = 0;
  *param_2 = 0xd;
  goto LAB_004db118;
  while (pbVar5 = pbVar7, bVar6 != 0x22) {
joined_r0x004db248:
    if (pbVar5 == pbVar1) goto switchD_004db160_caseD_1;
    pbVar7 = pbVar5 + 1;
    *(byte **)(param_1 + 0x88) = pbVar7;
    bVar6 = *pbVar5;
    if (bVar6 == 0x5c) {
      if (pbVar7 == pbVar1) goto switchD_004db160_caseD_1;
      *(byte **)(param_1 + 0x88) = pbVar5 + 2;
      pbVar5 = pbVar5 + 2;
      goto joined_r0x004db248;
    }
  }
LAB_004db2a8:
  uVar2 = 1;
LAB_004db118:
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 0x88);
  return uVar2;
}


// ===== 004db3b8  FUN_004db3b8 =====

/* WARNING: Removing unreachable block (ram,0x004db434) */
/* WARNING: Removing unreachable block (ram,0x004db4c8) */

bool FUN_004db3b8(long param_1)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  pcVar5 = *(char **)(param_1 + 0x80);
  pcVar4 = *(char **)(param_1 + 0x88);
  if (pcVar4 == pcVar5) {
LAB_004db4b8:
    bVar3 = false;
  }
  else {
    pcVar7 = pcVar4 + 1;
    *(char **)(param_1 + 0x88) = pcVar7;
    cVar1 = *pcVar4;
    if (cVar1 == '*') {
      pcVar6 = pcVar4 + 2;
      pcVar2 = pcVar7;
      while ((pcVar6 < pcVar5 &&
             (((pcVar8 = pcVar5, pcVar2 == pcVar5 ||
               (*(char **)(param_1 + 0x88) = pcVar6, pcVar7 = pcVar6, pcVar8 = pcVar6,
               *pcVar2 != '*')) || (*pcVar6 != '/'))))) {
        pcVar2 = pcVar8;
        pcVar6 = pcVar8 + 1;
      }
      if (pcVar7 == pcVar5) goto LAB_004db4b8;
      pcVar5 = pcVar7 + 1;
      *(char **)(param_1 + 0x88) = pcVar5;
      bVar3 = *pcVar7 == '/';
      if (!bVar3) {
        return bVar3;
      }
    }
    else {
      if (cVar1 != '/') goto LAB_004db4b8;
      do {
        pcVar6 = pcVar7;
        if (pcVar6 == pcVar5) goto LAB_004db4c0;
        pcVar7 = pcVar6 + 1;
        *(char **)(param_1 + 0x88) = pcVar7;
        if (*pcVar6 == '\n') goto LAB_004db4cc;
      } while (*pcVar6 != '\r');
      if (pcVar7 == pcVar5) {
LAB_004db4c0:
        bVar3 = true;
      }
      else if (*pcVar7 == '\n') {
        bVar3 = true;
        *(char **)(param_1 + 0x88) = pcVar6 + 2;
        pcVar5 = pcVar6 + 2;
      }
      else {
LAB_004db4cc:
        bVar3 = true;
        pcVar5 = pcVar7;
      }
    }
    if (*(char *)(param_1 + 0xbc) != '\0') {
      pcVar7 = *(char **)(param_1 + 0x90);
      pcVar4 = pcVar4 + -1;
      if (pcVar7 != (char *)0x0) {
        for (; pcVar7 != pcVar4; pcVar7 = pcVar7 + 1) {
          if (*pcVar7 == '\n' || *pcVar7 == '\r') goto LAB_004db550;
        }
        if (cVar1 == '*') {
          for (; (pcVar4 != pcVar5 && (*pcVar4 != '\n' && *pcVar4 != '\r')); pcVar4 = pcVar4 + 1) {
          }
        }
      }
LAB_004db550:
      FUN_004db564();
      bVar3 = true;
    }
  }
  return bVar3;
}


// ===== 004db564  FUN_004db564 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004db564(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 *******pppppppuVar3;
  undefined8 *******__dest;
  undefined8 uVar4;
  undefined8 *******local_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined8 *******local_60;
  ulong uStack_58;
  undefined7 local_50;
  byte bStack_49;
  long local_48;
  
  __dest = &local_80;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_004db6ec(&local_60,param_2,param_3);
  pppppppuVar3 = local_60;
  if (param_4 == 1) {
    uVar4 = *(undefined8 *)(param_1 + 0x98);
    if ((char)bStack_49 < '\0') {
      if (uStack_58 < 0x17) {
        local_70 = CONCAT17((char)uStack_58,(undefined7)local_70);
      }
      else {
        if (0x7fffffffffffffef < uStack_58) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar1 = (uStack_58 | 0xf) + 1;
        __dest = (undefined8 *******)operator_new(uVar1);
        local_70 = uVar1 | 0x8000000000000000;
        uStack_78 = uStack_58;
        local_80 = __dest;
      }
      if ((__dest <= pppppppuVar3) &&
         (pppppppuVar3 < (undefined8 *******)((long)__dest + uStack_58 + 1))) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      memmove(__dest,pppppppuVar3,uStack_58 + 1);
    }
    else {
      local_70 = CONCAT17(bStack_49,local_50);
      uStack_78 = uStack_58;
      local_80 = local_60;
    }
    FUN_004e1ad4(uVar4,&local_80,1);
    if ((long)local_70 < 0) {
      operator_delete(local_80);
    }
  }
  else {
    if (-1 < (char)bStack_49) {
      uStack_58 = (ulong)bStack_49;
      pppppppuVar3 = &local_60;
    }
    FUN_00547cac(param_1 + 0xa0,pppppppuVar3,uStack_58);
  }
  if ((char)bStack_49 < '\0') {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004db6ec  FUN_004db6ec =====

void FUN_004db6ec(undefined8 *param_1,char *param_2,char *param_3)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_00547c2c(param_1,(long)param_3 - (long)param_2);
  if (param_3 != param_2) {
    do {
      pcVar7 = param_2 + 1;
      cVar1 = *param_2;
      if (cVar1 == '\r') {
        pcVar8 = param_3;
        if ((pcVar7 != param_3) && (pcVar8 = param_2 + 2, param_2[1] != '\n')) {
          pcVar8 = pcVar7;
        }
        bVar2 = *(byte *)((long)param_1 + 0x17);
        if ((char)bVar2 < '\0') {
          uVar4 = param_1[1];
          uVar6 = (param_1[2] & 0x7fffffffffffffff) - 1;
          if (uVar4 == uVar6) goto LAB_004db80c;
LAB_004db830:
          param_1[1] = uVar4 + 1;
          puVar5 = (undefined8 *)*param_1;
        }
        else {
          if (bVar2 == 0x16) {
            uVar6 = 0x16;
LAB_004db80c:
            uVar4 = uVar6;
            FUN_0054774c(param_1,uVar4,1,uVar4,uVar4,0,0);
            goto LAB_004db830;
          }
          if (0x15 < bVar2) {
LAB_004db890:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          uVar4 = (ulong)bVar2;
          *(byte *)((long)param_1 + 0x17) = bVar2 + 1;
          puVar5 = param_1;
        }
        pcVar3 = (char *)((long)puVar5 + uVar4);
        *pcVar3 = '\n';
        param_2 = pcVar8;
      }
      else {
        bVar2 = *(byte *)((long)param_1 + 0x17);
        if ((char)bVar2 < '\0') {
          uVar4 = param_1[1];
          uVar6 = (param_1[2] & 0x7fffffffffffffff) - 1;
          if (uVar4 == uVar6) goto LAB_004db738;
LAB_004db75c:
          puVar5 = (undefined8 *)*param_1;
          param_1[1] = uVar4 + 1;
        }
        else {
          if (bVar2 == 0x16) {
            uVar6 = 0x16;
LAB_004db738:
            uVar4 = uVar6;
            FUN_0054774c(param_1,uVar4,1,uVar4,uVar4,0,0);
            goto LAB_004db75c;
          }
          if (0x15 < bVar2) goto LAB_004db890;
          uVar4 = (ulong)bVar2;
          *(byte *)((long)param_1 + 0x17) = bVar2 + 1;
          puVar5 = param_1;
        }
        pcVar3 = (char *)((long)puVar5 + uVar4);
        *pcVar3 = cVar1;
        param_2 = pcVar7;
      }
      pcVar3[1] = '\0';
    } while (param_2 != param_3);
  }
  return;
}


// ===== 004db8b8  FUN_004db8b8 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004db8b8(undefined8 param_1,long param_2,long *param_3)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  char *******pppppppcVar5;
  char ******ppppppcVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  char *pcVar14;
  ulong uVar15;
  long lVar16;
  undefined4 local_8c;
  char *******local_88;
  ulong local_80;
  ulong uStack_78;
  char *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  FUN_00547c2c(param_3,(*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8)) + -2);
  pcVar14 = (char *)(*(long *)(param_2 + 0x10) + -1);
  pcVar8 = (char *)(*(long *)(param_2 + 8) + 1);
joined_r0x004db914:
  do {
    if (pcVar8 == pcVar14) {
LAB_004dbe88:
      uVar10 = 1;
LAB_004dbe8c:
      if (*(long *)(lVar4 + 0x28) == local_68) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar10);
    }
    pcVar1 = pcVar8 + 1;
    cVar2 = *pcVar8;
    local_70 = pcVar1;
    if (cVar2 != '\\') {
      if (cVar2 == '\"') goto LAB_004dbe88;
      bVar3 = *(byte *)((long)param_3 + 0x17);
      if ((char)bVar3 < '\0') {
        uVar11 = param_3[1];
        uVar15 = (param_3[2] & 0x7fffffffffffffffU) - 1;
        if (uVar11 == uVar15) goto LAB_004db92c;
LAB_004db950:
        plVar13 = (long *)*param_3;
        param_3[1] = uVar11 + 1;
      }
      else {
        if (bVar3 == 0x16) {
          uVar15 = 0x16;
LAB_004db92c:
          uVar11 = uVar15;
          FUN_0054774c(param_3,uVar11,1,uVar11,uVar11,0,0);
          goto LAB_004db950;
        }
        if (0x15 < bVar3) goto LAB_004dbf88;
        uVar11 = (ulong)bVar3;
        *(byte *)((long)param_3 + 0x17) = bVar3 + 1;
        plVar13 = param_3;
      }
      *(char *)((long)plVar13 + uVar11) = cVar2;
      ((char *)((long)plVar13 + uVar11))[1] = '\0';
      pcVar8 = pcVar1;
      goto joined_r0x004db914;
    }
    if (pcVar1 == pcVar14) {
      local_88 = (char *******)operator_new(0x20);
      uVar10 = s_Empty_escape_sequence_in_string_001a0022._0_8_;
      uStack_78 = _UNK_001f40d8;
      local_80 = _DAT_001f40d0;
      if ((local_88 < (char *******)0x1a0023) &&
         ("Empty escape sequence in string" < (char *)((long)local_88 + 0x1fU))) {
LAB_004dbfb0:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      ppppppcVar6 = (char ******)
                    CONCAT17(s_Empty_escape_sequence_in_string_001a0022[0xf],
                             s_Empty_escape_sequence_in_string_001a0022._8_7_);
      *(char *)((long)local_88 + 0x1f) = '\0';
      uVar9 = s_Empty_escape_sequence_in_string_001a0022._23_8_;
      uVar7 = CONCAT71(s_Empty_escape_sequence_in_string_001a0022._16_7_,
                       s_Empty_escape_sequence_in_string_001a0022[0xf]);
      local_88[1] = ppppppcVar6;
      *local_88 = (char ******)uVar10;
      *(undefined8 *)((long)local_88 + 0x17) = uVar9;
      *(undefined8 *)((long)local_88 + 0xf) = uVar7;
LAB_004dbf10:
      FUN_004da520(param_1,&local_88,param_2,pcVar14);
      if ((long)uStack_78 < 0) {
        operator_delete(local_88);
      }
LAB_004dbf28:
      uVar10 = 0;
      goto LAB_004dbe8c;
    }
    pcVar1 = pcVar8 + 2;
    local_70 = pcVar1;
    switch(pcVar8[1]) {
    case '\"':
      bVar3 = *(byte *)((long)param_3 + 0x17);
      if ((char)bVar3 < '\0') {
        uVar11 = param_3[1];
        uVar15 = (param_3[2] & 0x7fffffffffffffffU) - 1;
        if (uVar11 == uVar15) goto LAB_004dbba4;
LAB_004dbbc8:
        param_3[1] = uVar11 + 1;
        plVar13 = (long *)*param_3;
      }
      else {
        if (bVar3 == 0x16) {
          uVar15 = 0x16;
LAB_004dbba4:
          uVar11 = uVar15;
          FUN_0054774c(param_3,uVar11,1,uVar11,uVar11,0,0);
          goto LAB_004dbbc8;
        }
        if (0x15 < bVar3) goto LAB_004dbf88;
        uVar11 = (ulong)bVar3;
        *(byte *)((long)param_3 + 0x17) = bVar3 + 1;
        plVar13 = param_3;
      }
      *(undefined2 *)((long)plVar13 + uVar11) = 0x22;
      pcVar8 = pcVar1;
      break;
    default:
      local_88 = (char *******)operator_new(0x20);
      uVar10 = s_Bad_escape_sequence_in_string_001cda93._0_8_;
      uStack_78 = _UNK_001f3af8;
      local_80 = _DAT_001f3af0;
      if ((local_88 < (char *******)0x1cda94) &&
         ("Bad escape sequence in string" < (char *)((long)local_88 + 0x1dU))) goto LAB_004dbfb0;
      ppppppcVar6 = (char ******)
                    CONCAT35(s_Bad_escape_sequence_in_string_001cda93._13_3_,
                             s_Bad_escape_sequence_in_string_001cda93._8_5_);
      *(char *)((long)local_88 + 0x1d) = '\0';
      uVar9 = s_Bad_escape_sequence_in_string_001cda93._21_8_;
      uVar7 = CONCAT53(s_Bad_escape_sequence_in_string_001cda93._16_5_,
                       s_Bad_escape_sequence_in_string_001cda93._13_3_);
      local_88[1] = ppppppcVar6;
      *local_88 = (char ******)uVar10;
      *(undefined8 *)((long)local_88 + 0x15) = uVar9;
      *(undefined8 *)((long)local_88 + 0xd) = uVar7;
      pcVar14 = pcVar1;
      goto LAB_004dbf10;
    case '/':
      bVar3 = *(byte *)((long)param_3 + 0x17);
      if ((char)bVar3 < '\0') {
        uVar11 = param_3[1];
        uVar15 = (param_3[2] & 0x7fffffffffffffffU) - 1;
        if (uVar11 == uVar15) goto LAB_004dbbec;
LAB_004dbc10:
        param_3[1] = uVar11 + 1;
        plVar13 = (long *)*param_3;
      }
      else {
        if (bVar3 == 0x16) {
          uVar15 = 0x16;
LAB_004dbbec:
          uVar11 = uVar15;
          FUN_0054774c(param_3,uVar11,1,uVar11,uVar11,0,0);
          goto LAB_004dbc10;
        }
        if (0x15 < bVar3) goto LAB_004dbf88;
        uVar11 = (ulong)bVar3;
        *(byte *)((long)param_3 + 0x17) = bVar3 + 1;
        plVar13 = param_3;
      }
      *(undefined2 *)((long)plVar13 + uVar11) = 0x2f;
      pcVar8 = pcVar1;
      break;
    case '\\':
      bVar3 = *(byte *)((long)param_3 + 0x17);
      if ((char)bVar3 < '\0') {
        uVar11 = param_3[1];
        uVar15 = (param_3[2] & 0x7fffffffffffffffU) - 1;
        if (uVar11 == uVar15) goto LAB_004dbc7c;
LAB_004dbca0:
        param_3[1] = uVar11 + 1;
        plVar13 = (long *)*param_3;
      }
      else {
        if (bVar3 == 0x16) {
          uVar15 = 0x16;
LAB_004dbc7c:
          uVar11 = uVar15;
          FUN_0054774c(param_3,uVar11,1,uVar11,uVar11,0,0);
          goto LAB_004dbca0;
        }
        if (0x15 < bVar3) goto LAB_004dbf88;
        uVar11 = (ulong)bVar3;
        *(byte *)((long)param_3 + 0x17) = bVar3 + 1;
        plVar13 = param_3;
      }
      *(undefined2 *)((long)plVar13 + uVar11) = 0x5c;
      pcVar8 = pcVar1;
      break;
    case 'b':
      bVar3 = *(byte *)((long)param_3 + 0x17);
      if ((char)bVar3 < '\0') {
        uVar11 = param_3[1];
        uVar15 = (param_3[2] & 0x7fffffffffffffffU) - 1;
        if (uVar11 == uVar15) goto LAB_004dbc34;
LAB_004dbc58:
        param_3[1] = uVar11 + 1;
        plVar13 = (long *)*param_3;
      }
      else {
        if (bVar3 == 0x16) {
          uVar15 = 0x16;
LAB_004dbc34:
          uVar11 = uVar15;
          FUN_0054774c(param_3,uVar11,1,uVar11,uVar11,0,0);
          goto LAB_004dbc58;
        }
        if (0x15 < bVar3) goto LAB_004dbf88;
        uVar11 = (ulong)bVar3;
        *(byte *)((long)param_3 + 0x17) = bVar3 + 1;
        plVar13 = param_3;
      }
      *(undefined2 *)((long)plVar13 + uVar11) = 8;
      pcVar8 = pcVar1;
      break;
    case 'f':
      bVar3 = *(byte *)((long)param_3 + 0x17);
      if ((char)bVar3 < '\0') {
        uVar11 = param_3[1];
        uVar15 = (param_3[2] & 0x7fffffffffffffffU) - 1;
        if (uVar11 == uVar15) goto LAB_004dbd0c;
LAB_004dbd30:
        param_3[1] = uVar11 + 1;
        plVar13 = (long *)*param_3;
      }
      else {
        if (bVar3 == 0x16) {
          uVar15 = 0x16;
LAB_004dbd0c:
          uVar11 = uVar15;
          FUN_0054774c(param_3,uVar11,1,uVar11,uVar11,0,0);
          goto LAB_004dbd30;
        }
        if (0x15 < bVar3) goto LAB_004dbf88;
        uVar11 = (ulong)bVar3;
        *(byte *)((long)param_3 + 0x17) = bVar3 + 1;
        plVar13 = param_3;
      }
      *(undefined2 *)((long)plVar13 + uVar11) = 0xc;
      pcVar8 = pcVar1;
      break;
    case 'n':
      bVar3 = *(byte *)((long)param_3 + 0x17);
      if ((char)bVar3 < '\0') {
        uVar11 = param_3[1];
        uVar15 = (param_3[2] & 0x7fffffffffffffffU) - 1;
        if (uVar11 == uVar15) goto LAB_004dbb5c;
LAB_004dbb80:
        param_3[1] = uVar11 + 1;
        plVar13 = (long *)*param_3;
      }
      else {
        if (bVar3 == 0x16) {
          uVar15 = 0x16;
LAB_004dbb5c:
          uVar11 = uVar15;
          FUN_0054774c(param_3,uVar11,1,uVar11,uVar11,0,0);
          goto LAB_004dbb80;
        }
        if (0x15 < bVar3) goto LAB_004dbf88;
        uVar11 = (ulong)bVar3;
        *(byte *)((long)param_3 + 0x17) = bVar3 + 1;
        plVar13 = param_3;
      }
      *(undefined2 *)((long)plVar13 + uVar11) = 10;
      pcVar8 = pcVar1;
      break;
    case 'r':
      bVar3 = *(byte *)((long)param_3 + 0x17);
      if ((char)bVar3 < '\0') {
        uVar11 = param_3[1];
        uVar15 = (param_3[2] & 0x7fffffffffffffffU) - 1;
        if (uVar11 == uVar15) goto LAB_004dbcc4;
LAB_004dbce8:
        param_3[1] = uVar11 + 1;
        plVar13 = (long *)*param_3;
      }
      else {
        if (bVar3 == 0x16) {
          uVar15 = 0x16;
LAB_004dbcc4:
          uVar11 = uVar15;
          FUN_0054774c(param_3,uVar11,1,uVar11,uVar11,0,0);
          goto LAB_004dbce8;
        }
        if (0x15 < bVar3) goto LAB_004dbf88;
        uVar11 = (ulong)bVar3;
        *(byte *)((long)param_3 + 0x17) = bVar3 + 1;
        plVar13 = param_3;
      }
      *(undefined2 *)((long)plVar13 + uVar11) = 0xd;
      pcVar8 = pcVar1;
      break;
    case 't':
      bVar3 = *(byte *)((long)param_3 + 0x17);
      if ((char)bVar3 < '\0') {
        lVar12 = param_3[1];
        lVar16 = (param_3[2] & 0x7fffffffffffffffU) - 1;
        if (lVar12 == lVar16) goto LAB_004dbd54;
      }
      else {
        if (bVar3 != 0x16) {
          if (0x15 < bVar3) {
LAB_004dbf88:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          *(byte *)((long)param_3 + 0x17) = bVar3 + 1;
          *(undefined2 *)((long)param_3 + (ulong)bVar3) = 9;
          pcVar8 = pcVar1;
          break;
        }
        lVar16 = 0x16;
LAB_004dbd54:
        lVar12 = lVar16;
        FUN_0054774c(param_3,lVar12,1,lVar12,lVar12,0,0);
      }
      param_3[1] = lVar12 + 1;
      *(undefined2 *)(*param_3 + lVar12) = 9;
      pcVar8 = pcVar1;
      break;
    case 'u':
      uVar11 = FUN_004dc834(param_1,param_2,&local_70,pcVar14,&local_8c);
      if ((uVar11 & 1) == 0) goto LAB_004dbf28;
      FUN_004dca38(&local_88,local_8c);
      uVar11 = local_80;
      pppppppcVar5 = local_88;
      if (-1 < (long)uStack_78) {
        uVar11 = uStack_78 >> 0x38;
        pppppppcVar5 = (char *******)&local_88;
      }
      FUN_00547cac(param_3,pppppppcVar5,uVar11);
      pcVar8 = local_70;
      if ((long)uStack_78 < 0) {
        operator_delete(local_88);
        pcVar8 = local_70;
      }
    }
  } while( true );
}


// ===== 004dbfdc  FUN_004dbfdc =====

undefined8 FUN_004dbfdc(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int local_80 [6];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar1 = param_1 + 0x30;
  uVar7 = *(ulong *)(param_1 + 0x58);
  do {
    uVar3 = FUN_004db0ac(param_1,local_80);
    if ((uVar3 & 1) == 0) {
      uVar3 = *(ulong *)(param_1 + 0x58);
      if (uVar7 < uVar3 || uVar7 - uVar3 == 0) {
        if (uVar7 < uVar3) {
          plVar4 = (long *)(*(long *)(param_1 + 0x38) + (*(ulong *)(param_1 + 0x50) / 0x49) * 8);
          if (*(long *)(param_1 + 0x40) == *(long *)(param_1 + 0x38)) {
            lVar5 = 0;
          }
          else {
            lVar5 = *plVar4 + (*(ulong *)(param_1 + 0x50) % 0x49) * 0x38;
          }
          if (uVar7 != 0) {
            uVar3 = uVar7 + (lVar5 - *plVar4 >> 3) * 0x6db6db6db6db6db7;
            if ((long)uVar3 < 1) {
              uVar6 = (0x48 - uVar3) / 0x49;
              plVar4 = plVar4 + -uVar6;
              lVar5 = *plVar4 + (uVar6 * 0x49 - (0x48 - uVar3)) * 0x38 + 0xfc0;
            }
            else {
              plVar4 = plVar4 + uVar3 / 0x49;
              lVar5 = *plVar4 + (uVar3 % 0x49) * 0x38;
            }
          }
          FUN_004de840(lVar1,plVar4,lVar5);
        }
      }
      else {
        FUN_004de61c(lVar1,uVar7 - uVar3);
      }
    }
  } while ((local_80[0] != param_2) && (local_80[0] != 0));
  uVar3 = *(ulong *)(param_1 + 0x58);
  if (uVar3 <= uVar7 && uVar7 - uVar3 != 0) {
    FUN_004de61c(lVar1,uVar7 - uVar3);
  }
  else if (uVar3 > uVar7) {
    plVar4 = (long *)(*(long *)(param_1 + 0x38) + (*(ulong *)(param_1 + 0x50) / 0x49) * 8);
    if (*(long *)(param_1 + 0x40) == *(long *)(param_1 + 0x38)) {
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar4 + (*(ulong *)(param_1 + 0x50) % 0x49) * 0x38;
    }
    if (uVar7 != 0) {
      uVar7 = uVar7 + (lVar5 - *plVar4 >> 3) * 0x6db6db6db6db6db7;
      if ((long)uVar7 < 1) {
        uVar3 = (0x48 - uVar7) / 0x49;
        plVar4 = plVar4 + -uVar3;
        lVar5 = *plVar4 + (uVar3 * 0x49 - (0x48 - uVar7)) * 0x38 + 0xfc0;
      }
      else {
        plVar4 = plVar4 + uVar7 / 0x49;
        lVar5 = *plVar4 + (uVar7 % 0x49) * 0x38;
      }
    }
    FUN_004de840(lVar1,plVar4,lVar5);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004dc278  FUN_004dc278 =====

undefined8 FUN_004dc278(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar9;
  undefined1 auStack_50 [40];
  long local_28;
  byte *pbVar8;
  
  lVar4 = tpidr_el0;
  local_28 = *(long *)(lVar4 + 0x28);
  pbVar8 = *(byte **)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  bVar3 = *pbVar8;
  if (bVar3 == 0x2d) {
    pbVar8 = pbVar8 + 1;
  }
  uVar1 = 0x8000000000000000;
  if (bVar3 != 0x2d) {
    uVar1 = 0xffffffffffffffff;
  }
  if (pbVar8 < pbVar2) {
    uVar6 = 0;
    do {
      pbVar7 = pbVar8 + 1;
      if ((*pbVar8 - 0x3a < 0xfffffff6) ||
         ((uVar9 = (ulong)(*pbVar8 - 0x30), uVar1 / 10 <= uVar6 &&
          (((uVar1 / 10 < uVar6 || (pbVar7 != pbVar2)) || (uVar1 % 10 < uVar9)))))) {
        if (*(long *)(lVar4 + 0x28) == local_28) {
          uVar5 = FUN_004dc3d8(param_1,param_2,param_3);
          return uVar5;
        }
        goto LAB_004dc3d4;
      }
      uVar6 = uVar9 + uVar6 * 10;
      pbVar8 = pbVar7;
    } while (pbVar7 < pbVar2);
    if ((bVar3 == 0x2d) && (uVar6 == uVar1)) {
      uVar6 = 0x8000000000000000;
    }
    else {
      if (bVar3 == 0x2d) goto LAB_004dc348;
      if (uVar6 >> 0x1f != 0) {
        FUN_004df230(auStack_50,uVar6);
        goto LAB_004dc38c;
      }
    }
  }
  else {
    uVar6 = 0;
    if (bVar3 == 0x2d) {
LAB_004dc348:
      uVar6 = -uVar6;
    }
  }
  FUN_004df210(auStack_50,uVar6);
LAB_004dc38c:
  FUN_004dfa04(param_3,auStack_50);
  FUN_004df880(auStack_50);
  if (*(long *)(lVar4 + 0x28) == local_28) {
    return 1;
  }
LAB_004dc3d4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004dc3d8  FUN_004dc3d8 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_004dc3d8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  undefined1 *puVar12;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 ******ppppppuVar18;
  undefined8 ******ppppppuVar19;
  undefined8 ******ppppppuVar20;
  undefined8 *******local_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  void *local_1d0;
  undefined8 uStack_1c8;
  long local_1c0;
  double local_1b8;
  undefined8 *******local_1b0;
  ulong uStack_1a8;
  undefined8 local_1a0;
  undefined *local_180 [10];
  void *local_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined *local_108 [2];
  undefined8 uStack_f8;
  undefined4 auStack_f0 [32];
  long local_70;
  undefined1 *puVar13;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  puVar13 = *(undefined1 **)(param_2 + 8);
  puVar2 = *(undefined1 **)(param_2 + 0x10);
  local_1b8 = 0.0;
  uVar17 = (long)puVar2 - (long)puVar13;
  if (0x7fffffffffffffef < uVar17) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (uVar17 < 0x17) {
    pppppppuVar11 = &local_1b0;
    local_1a0 = CONCAT17((char)uVar17,(undefined7)local_1a0);
    puVar5 = PTR_DAT_00d51cc0;
    plVar6 = (long *)PTR_PTR_00d51cc8;
  }
  else {
    uVar15 = (uVar17 | 0xf) + 1;
    pppppppuVar11 = (undefined8 *******)operator_new(uVar15);
    local_1a0 = uVar15 | 0x8000000000000000;
    uStack_1a8 = uVar17;
    local_1b0 = pppppppuVar11;
    puVar5 = PTR_DAT_00d51cc0;
    plVar6 = (long *)PTR_PTR_00d51cc8;
  }
  if (puVar13 != puVar2) {
    pppppppuVar10 = pppppppuVar11;
    if ((0x1f < uVar17) && (0x1f < (ulong)((long)pppppppuVar11 - (long)puVar13))) {
      uVar14 = uVar17 & 0xffffffffffffffe0;
      pppppppuVar10 = pppppppuVar11 + 2;
      pppppppuVar11 = (undefined8 *******)((long)pppppppuVar11 + uVar14);
      puVar8 = (undefined8 *)(puVar13 + 0x10);
      uVar15 = uVar14;
      do {
        puVar4 = puVar8 + -1;
        ppppppuVar18 = (undefined8 ******)puVar8[-2];
        ppppppuVar20 = (undefined8 ******)puVar8[1];
        ppppppuVar19 = (undefined8 ******)*puVar8;
        puVar8 = puVar8 + 4;
        uVar15 = uVar15 - 0x20;
        pppppppuVar10[-1] = (undefined8 ******)*puVar4;
        pppppppuVar10[-2] = ppppppuVar18;
        pppppppuVar10[1] = ppppppuVar20;
        *pppppppuVar10 = ppppppuVar19;
        pppppppuVar10 = pppppppuVar10 + 4;
      } while (uVar15 != 0);
      pppppppuVar10 = pppppppuVar11;
      puVar13 = puVar13 + uVar14;
      if (uVar17 == uVar14) goto LAB_004dc4d8;
    }
    do {
      puVar12 = puVar13 + 1;
      pppppppuVar11 = (undefined8 *******)((long)pppppppuVar10 + 1);
      *(undefined1 *)pppppppuVar10 = *puVar13;
      pppppppuVar10 = pppppppuVar11;
      puVar13 = puVar12;
    } while (puVar12 != puVar2);
  }
LAB_004dc4d8:
  ppuVar1 = local_180 + 2;
  *(undefined1 *)pppppppuVar11 = 0;
  local_180[0] = (undefined *)plVar6[1];
  local_180[1] = (undefined *)0x0;
  local_108[0] = puVar5 + 0x40;
  *(long *)((long)local_180 + *(long *)(local_180[0] + -0x18)) = plVar6[2];
  lVar9 = *(long *)(local_180[0] + -0x18);
  PTR_DAT_00d51cc0 = puVar5;
  PTR_PTR_00d51cc8 = (undefined *)plVar6;
  FUN_00520e8c((long)local_180 + lVar9,ppuVar1);
  local_180[0] = puVar5 + 0x18;
  *(undefined8 *)((long)&uStack_f8 + lVar9) = 0;
  *(undefined4 *)((long)auStack_f0 + lVar9) = 0xffffffff;
  local_108[0] = puVar5 + 0x40;
  FUN_0054a4c8(ppuVar1);
  puVar5 = PTR_DAT_00d51b20;
  local_110 = 8;
  uStack_128 = 0;
  local_130 = (void *)0x0;
  uStack_118 = 0;
  lStack_120 = 0;
  local_180[2] = PTR_DAT_00d51b20 + 0x10;
  FUN_0054d714(ppuVar1,&local_1b0);
  if ((long)local_1a0 < 0) {
    operator_delete(local_1b0);
  }
  plVar7 = (long *)thunk_FUN_0054ab58(local_180,&local_1b8);
  if ((*(byte *)((long)plVar7 + *(long *)(*plVar7 + -0x18) + 0x20) & 5) != 0) {
    if (local_1b8 == 1.79769313486232e+308) {
      local_1b8 = INFINITY;
    }
    else if (local_1b8 == -1.79769313486232e+308) {
      local_1b8 = -INFINITY;
    }
    else if (ABS(local_1b8) != INFINITY) {
      puVar13 = *(undefined1 **)(param_2 + 8);
      puVar2 = *(undefined1 **)(param_2 + 0x10);
      uVar17 = (long)puVar2 - (long)puVar13;
      if (0x7fffffffffffffef < uVar17) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (uVar17 < 0x17) {
        pppppppuVar11 = &local_1e8;
        uStack_1d8 = CONCAT17((char)uVar17,(undefined7)uStack_1d8);
      }
      else {
        uVar15 = (uVar17 | 0xf) + 1;
        pppppppuVar11 = (undefined8 *******)operator_new(uVar15);
        uStack_1d8 = uVar15 | 0x8000000000000000;
        local_1e8 = pppppppuVar11;
        uStack_1e0 = uVar17;
      }
      if (puVar13 != puVar2) {
        pppppppuVar10 = pppppppuVar11;
        if ((0x1f < uVar17) && (0x1f < (ulong)((long)pppppppuVar11 - (long)puVar13))) {
          uVar14 = uVar17 & 0xffffffffffffffe0;
          pppppppuVar10 = pppppppuVar11 + 2;
          pppppppuVar11 = (undefined8 *******)((long)pppppppuVar11 + uVar14);
          puVar8 = (undefined8 *)(puVar13 + 0x10);
          uVar15 = uVar14;
          do {
            puVar4 = puVar8 + -1;
            ppppppuVar18 = (undefined8 ******)puVar8[-2];
            ppppppuVar20 = (undefined8 ******)puVar8[1];
            ppppppuVar19 = (undefined8 ******)*puVar8;
            puVar8 = puVar8 + 4;
            uVar15 = uVar15 - 0x20;
            pppppppuVar10[-1] = (undefined8 ******)*puVar4;
            pppppppuVar10[-2] = ppppppuVar18;
            pppppppuVar10[1] = ppppppuVar20;
            *pppppppuVar10 = ppppppuVar19;
            pppppppuVar10 = pppppppuVar10 + 4;
          } while (uVar15 != 0);
          pppppppuVar10 = pppppppuVar11;
          puVar13 = puVar13 + uVar14;
          if (uVar17 == uVar14) goto LAB_004dc768;
        }
        do {
          puVar12 = puVar13 + 1;
          pppppppuVar11 = (undefined8 *******)((long)pppppppuVar10 + 1);
          *(undefined1 *)pppppppuVar10 = *puVar13;
          pppppppuVar10 = pppppppuVar11;
          puVar13 = puVar12;
        } while (puVar12 != puVar2);
      }
LAB_004dc768:
      *(undefined1 *)pppppppuVar11 = 0;
      puVar8 = (undefined8 *)FUN_00547994(&local_1e8,0,&DAT_001c1d3e,1);
      uStack_1c8 = puVar8[1];
      local_1d0 = (void *)*puVar8;
      local_1c0 = puVar8[2];
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = 0;
      puVar8 = (undefined8 *)FUN_00547cac(&local_1d0,"\' is not a number.",0x12);
      uStack_1a8 = puVar8[1];
      local_1b0 = (undefined8 *******)*puVar8;
      local_1a0 = puVar8[2];
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = 0;
      FUN_004da520(param_1,&local_1b0,param_2,0);
      if ((long)local_1a0 < 0) {
        operator_delete(local_1b0);
      }
      if (local_1c0 < 0) {
        operator_delete(local_1d0);
      }
      if ((long)uStack_1d8 < 0) {
        operator_delete(local_1e8);
      }
      uVar16 = 0;
      goto LAB_004dc608;
    }
  }
  FUN_004df250(local_1b8,&local_1b0);
  FUN_004dfa04(param_3,&local_1b0);
  FUN_004df880(&local_1b0);
  uVar16 = 1;
LAB_004dc608:
  local_180[0] = (undefined *)*plVar6;
  *(long *)((long)local_180 + *(long *)(local_180[0] + -0x18)) = plVar6[3];
  local_180[2] = puVar5 + 0x10;
  if (lStack_120 < 0) {
    operator_delete(local_130);
  }
  FUN_0054a488(ppuVar1);
  FUN_0054a7a4(local_180,plVar6 + 1);
  thunk_FUN_00520cf4(local_108);
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar16;
}


// ===== 004dc834  FUN_004dc834 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dc834(undefined8 param_1,undefined8 param_2,long *param_3,long param_4,uint *param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  ulong uVar10;
  undefined8 uVar11;
  char *pcVar12;
  char *local_70;
  undefined8 local_68;
  long lStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar10 = FUN_004dcc78();
  if ((uVar10 & 1) != 0) {
    if (*param_5 >> 10 != 0x36) {
      uVar11 = 1;
      goto LAB_004dc9e0;
    }
    pcVar12 = (char *)*param_3;
    if (param_4 - (long)pcVar12 < 6) {
      local_70 = (char *)operator_new(0x50);
      uVar2 = s_additional_six_characters_expect_001ef7be._24_8_;
      uVar4 = s_additional_six_characters_expect_001ef7be._16_8_;
      uVar3 = s_additional_six_characters_expect_001ef7be._8_8_;
      uVar11 = s_additional_six_characters_expect_001ef7be._0_8_;
      lStack_60 = _UNK_001f4ae8;
      local_68 = _DAT_001f4ae0;
      if ((local_70 < "dditional six characters expected to parse unicode surrogate pair.") &&
         ("additional six characters expected to parse unicode surrogate pair." < local_70 + 0x43))
      goto LAB_004dca0c;
      local_70[0x43] = '\0';
      local_70[0x3f] = 'a';
      uVar8 = s_additional_six_characters_expect_001ef7be._56_8_;
      uVar7 = s_additional_six_characters_expect_001ef7be._48_8_;
      uVar6 = s_additional_six_characters_expect_001ef7be._40_8_;
      uVar5 = s_additional_six_characters_expect_001ef7be._32_8_;
      local_70[0x40] = 'i';
      local_70[0x41] = 'r';
      local_70[0x42] = '.';
      *(undefined8 *)(local_70 + 8) = uVar3;
      *(undefined8 *)local_70 = uVar11;
      *(undefined8 *)(local_70 + 0x18) = uVar2;
      *(undefined8 *)(local_70 + 0x10) = uVar4;
      *(undefined8 *)(local_70 + 0x28) = uVar6;
      *(undefined8 *)(local_70 + 0x20) = uVar5;
      *(undefined8 *)(local_70 + 0x38) = uVar8;
      *(undefined8 *)(local_70 + 0x30) = uVar7;
    }
    else {
      *param_3 = (long)(pcVar12 + 1);
      pcVar9 = pcVar12 + 1;
      if (*pcVar12 == '\\') {
        *param_3 = (long)(pcVar12 + 2);
        pcVar9 = pcVar12 + 2;
        if (pcVar12[1] == 'u') {
          uVar10 = FUN_004dcc78(param_1,param_2,param_3,param_4,&local_70);
          if ((uVar10 & 1) != 0) {
            uVar11 = 1;
            *param_5 = ((uint)local_70 & 0x3ff | (*param_5 & 0x3ff) << 10) + 0x10000;
            goto LAB_004dc9e0;
          }
          goto LAB_004dc9dc;
        }
      }
      pcVar12 = pcVar9;
      local_70 = (char *)operator_new(0x50);
      uVar4 = s_expecting_another__u_token_to_be_001d2ffc._48_8_;
      uVar3 = s_expecting_another__u_token_to_be_001d2ffc._40_8_;
      uVar11 = s_expecting_another__u_token_to_be_001d2ffc._32_8_;
      lStack_60 = _UNK_001f27f8;
      local_68 = _DAT_001f27f0;
      if ((local_70 <
           "xpecting another \\u token to begin the second half of a unicode surrogate pair") &&
         ("expecting another \\u token to begin the second half of a unicode surrogate pair" <
          local_70 + 0x4f)) {
LAB_004dca0c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      uVar2 = CONCAT17(s_expecting_another__u_token_to_be_001d2ffc[0x3f],
                       s_expecting_another__u_token_to_be_001d2ffc._56_7_);
      local_70[0x4f] = '\0';
      *(undefined8 *)(local_70 + 0x28) = uVar3;
      *(undefined8 *)(local_70 + 0x20) = uVar11;
      *(undefined8 *)(local_70 + 0x38) = uVar2;
      *(undefined8 *)(local_70 + 0x30) = uVar4;
      uVar5 = s_expecting_another__u_token_to_be_001d2ffc._24_8_;
      uVar2 = s_expecting_another__u_token_to_be_001d2ffc._16_8_;
      uVar4 = s_expecting_another__u_token_to_be_001d2ffc._8_8_;
      uVar3 = s_expecting_another__u_token_to_be_001d2ffc._0_8_;
      uVar11 = CONCAT71(s_expecting_another__u_token_to_be_001d2ffc._64_7_,
                        s_expecting_another__u_token_to_be_001d2ffc[0x3f]);
      *(undefined8 *)(local_70 + 0x47) = s_expecting_another__u_token_to_be_001d2ffc._71_8_;
      *(undefined8 *)(local_70 + 0x3f) = uVar11;
      *(undefined8 *)(local_70 + 8) = uVar4;
      *(undefined8 *)local_70 = uVar3;
      *(undefined8 *)(local_70 + 0x18) = uVar5;
      *(undefined8 *)(local_70 + 0x10) = uVar2;
    }
    FUN_004da520(param_1,&local_70,param_2,pcVar12);
    if (lStack_60 < 0) {
      operator_delete(local_70);
    }
  }
LAB_004dc9dc:
  uVar11 = 0;
LAB_004dc9e0:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}


// ===== 004dca38  FUN_004dca38 =====

void FUN_004dca38(byte *param_1,uint param_2)

{
  ulong uVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  byte *pbVar5;
  
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
  bVar4 = (byte)param_2;
  if (param_2 < 0x80) {
    FUN_0054809c(param_1,1,0);
    pbVar5 = *(byte **)param_1;
    if (-1 < (char)param_1[0x17]) {
      pbVar5 = param_1;
    }
    *pbVar5 = bVar4;
  }
  else {
    if (param_2 < 0x800) {
      FUN_0054809c(param_1,2,0);
      bVar2 = param_1[0x17];
      uVar1 = *(ulong *)(param_1 + 8);
      if (-1 < (char)bVar2) {
        uVar1 = (ulong)bVar2;
      }
      if (uVar1 == 0) goto LAB_004dcc50;
      pbVar5 = *(byte **)param_1;
      if (-1 < (char)bVar2) {
        pbVar5 = param_1;
      }
      pbVar5[1] = bVar4 & 0x3f | 0x80;
      pbVar5 = *(byte **)param_1;
      bVar3 = (char)param_1[0x17] < '\0';
      bVar4 = (byte)(param_2 >> 6) | 0xc0;
    }
    else if (param_2 >> 0x10 == 0) {
      FUN_0054809c(param_1,3,0);
      bVar2 = param_1[0x17];
      uVar1 = *(ulong *)(param_1 + 8);
      if (-1 < (char)bVar2) {
        uVar1 = (ulong)bVar2;
      }
      if (uVar1 < 2) {
LAB_004dcc50:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string",0xd57,
                   "__pos <= size()","string index out of bounds");
      }
      pbVar5 = *(byte **)param_1;
      if (-1 < (char)bVar2) {
        pbVar5 = param_1;
      }
      pbVar5[2] = bVar4 & 0x3f | 0x80;
      bVar4 = param_1[0x17];
      uVar1 = *(ulong *)(param_1 + 8);
      if (-1 < (char)bVar4) {
        uVar1 = (ulong)bVar4;
      }
      if (uVar1 == 0) goto LAB_004dcc50;
      pbVar5 = *(byte **)param_1;
      if (-1 < (char)bVar4) {
        pbVar5 = param_1;
      }
      pbVar5[1] = (byte)(param_2 >> 6) & 0x3f | 0x80;
      pbVar5 = *(byte **)param_1;
      bVar3 = (char)param_1[0x17] < '\0';
      bVar4 = (byte)(param_2 >> 0xc) | 0xe0;
    }
    else {
      if (0x10 < param_2 >> 0x10) {
        return;
      }
      FUN_0054809c(param_1,4,0);
      bVar2 = param_1[0x17];
      uVar1 = *(ulong *)(param_1 + 8);
      if (-1 < (char)bVar2) {
        uVar1 = (ulong)bVar2;
      }
      if (uVar1 < 3) goto LAB_004dcc50;
      pbVar5 = *(byte **)param_1;
      if (-1 < (char)bVar2) {
        pbVar5 = param_1;
      }
      pbVar5[3] = bVar4 & 0x3f | 0x80;
      bVar4 = param_1[0x17];
      uVar1 = *(ulong *)(param_1 + 8);
      if (-1 < (char)bVar4) {
        uVar1 = (ulong)bVar4;
      }
      if (uVar1 < 2) goto LAB_004dcc50;
      pbVar5 = *(byte **)param_1;
      if (-1 < (char)bVar4) {
        pbVar5 = param_1;
      }
      pbVar5[2] = (byte)(param_2 >> 6) & 0x3f | 0x80;
      bVar4 = param_1[0x17];
      uVar1 = *(ulong *)(param_1 + 8);
      if (-1 < (char)bVar4) {
        uVar1 = (ulong)bVar4;
      }
      if (uVar1 == 0) goto LAB_004dcc50;
      pbVar5 = *(byte **)param_1;
      if (-1 < (char)bVar4) {
        pbVar5 = param_1;
      }
      pbVar5[1] = (byte)(param_2 >> 0xc) & 0x3f | 0x80;
      pbVar5 = *(byte **)param_1;
      bVar3 = (char)param_1[0x17] < '\0';
      bVar4 = (byte)(param_2 >> 0x12) | 0xf0;
    }
    if (!bVar3) {
      pbVar5 = param_1;
    }
    *pbVar5 = bVar4;
  }
  return;
}


// ===== 004dcc78  FUN_004dcc78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dcc78(undefined8 param_1,undefined8 param_2,long *param_3,long param_4,int *param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  byte *pbVar18;
  byte *pbVar19;
  char *local_60;
  undefined8 local_58;
  long lStack_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  pbVar18 = (byte *)*param_3;
  if (param_4 - (long)pbVar18 < 4) {
    local_60 = (char *)operator_new(0x40);
    uVar9 = s_Bad_unicode_escape_sequence_in_s_001e45a8._24_8_;
    uVar8 = s_Bad_unicode_escape_sequence_in_s_001e45a8._16_8_;
    uVar7 = s_Bad_unicode_escape_sequence_in_s_001e45a8._8_8_;
    uVar13 = s_Bad_unicode_escape_sequence_in_s_001e45a8._0_8_;
    lStack_50 = _UNK_001f1b08;
    local_58 = _DAT_001f1b00;
    if ((local_60 < "ad unicode escape sequence in string: four digits expected.") &&
       ("Bad unicode escape sequence in string: four digits expected." < local_60 + 0x3c))
    goto LAB_004dcf04;
    local_60[0x3c] = '\0';
    uVar10 = s_Bad_unicode_escape_sequence_in_s_001e45a8._32_8_;
    uVar6 = CONCAT44(s_Bad_unicode_escape_sequence_in_s_001e45a8._44_4_,
                     s_Bad_unicode_escape_sequence_in_s_001e45a8._40_4_);
    *(undefined8 *)(local_60 + 8) = uVar7;
    *(undefined8 *)local_60 = uVar13;
    *(undefined8 *)(local_60 + 0x18) = uVar9;
    *(undefined8 *)(local_60 + 0x10) = uVar8;
    uVar7 = s_Bad_unicode_escape_sequence_in_s_001e45a8._52_8_;
    uVar13 = CONCAT44(s_Bad_unicode_escape_sequence_in_s_001e45a8._48_4_,
                      s_Bad_unicode_escape_sequence_in_s_001e45a8._44_4_);
    *(undefined8 *)(local_60 + 0x28) = uVar6;
    *(undefined8 *)(local_60 + 0x20) = uVar10;
    *(undefined8 *)(local_60 + 0x34) = uVar7;
    *(undefined8 *)(local_60 + 0x2c) = uVar13;
  }
  else {
    *param_3 = (long)(pbVar18 + 1);
    bVar1 = *pbVar18;
    if (bVar1 - 0x30 < 10) {
      iVar14 = -0x30;
LAB_004dcd58:
      *param_3 = (long)(pbVar18 + 2);
      bVar2 = pbVar18[1];
      if (bVar2 - 0x30 < 10) {
        iVar15 = -0x30;
      }
      else if (bVar2 - 0x61 < 6) {
        iVar15 = -0x57;
      }
      else {
        pbVar19 = pbVar18 + 1;
        if (5 < bVar2 - 0x41) goto LAB_004dce64;
        iVar15 = -0x37;
      }
      *param_3 = (long)(pbVar18 + 3);
      bVar3 = pbVar18[2];
      if (bVar3 - 0x30 < 10) {
        iVar16 = -0x30;
      }
      else if (bVar3 - 0x61 < 6) {
        iVar16 = -0x57;
      }
      else {
        pbVar19 = pbVar18 + 2;
        if (5 < bVar3 - 0x41) goto LAB_004dce64;
        iVar16 = -0x37;
      }
      *param_3 = (long)(pbVar18 + 4);
      bVar4 = pbVar18[3];
      if (bVar4 - 0x30 < 10) {
        iVar17 = -0x30;
      }
      else if (bVar4 - 0x61 < 6) {
        iVar17 = -0x57;
      }
      else {
        pbVar19 = pbVar18 + 3;
        if (5 < bVar4 - 0x41) goto LAB_004dce64;
        iVar17 = -0x37;
      }
      uVar13 = 1;
      *param_5 = iVar17 + (uint)bVar4 +
                 (iVar16 + (uint)bVar3 +
                 (iVar15 + (uint)bVar2 + (iVar14 + (uint)bVar1) * 0x10) * 0x10) * 0x10;
      goto LAB_004dcedc;
    }
    if (bVar1 - 0x61 < 6) {
      iVar14 = -0x57;
      goto LAB_004dcd58;
    }
    pbVar19 = pbVar18;
    if (bVar1 - 0x41 < 6) {
      iVar14 = -0x37;
      goto LAB_004dcd58;
    }
LAB_004dce64:
    local_60 = (char *)operator_new(0x50);
    uVar9 = s_Bad_unicode_escape_sequence_in_s_001b3730._24_8_;
    uVar8 = s_Bad_unicode_escape_sequence_in_s_001b3730._16_8_;
    uVar7 = s_Bad_unicode_escape_sequence_in_s_001b3730._8_8_;
    uVar13 = s_Bad_unicode_escape_sequence_in_s_001b3730._0_8_;
    lStack_50 = _UNK_001f2368;
    local_58 = _DAT_001f2360;
    if ((local_60 < "ad unicode escape sequence in string: hexadecimal digit expected.") &&
       ("Bad unicode escape sequence in string: hexadecimal digit expected." < local_60 + 0x42)) {
LAB_004dcf04:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    pbVar18 = pbVar19 + 1;
    local_60[0x42] = '\0';
    local_60[0x40] = 'd';
    uVar12 = s_Bad_unicode_escape_sequence_in_s_001b3730._56_8_;
    uVar11 = s_Bad_unicode_escape_sequence_in_s_001b3730._48_8_;
    uVar10 = s_Bad_unicode_escape_sequence_in_s_001b3730._40_8_;
    uVar6 = s_Bad_unicode_escape_sequence_in_s_001b3730._32_8_;
    local_60[0x41] = '.';
    *(undefined8 *)(local_60 + 8) = uVar7;
    *(undefined8 *)local_60 = uVar13;
    *(undefined8 *)(local_60 + 0x18) = uVar9;
    *(undefined8 *)(local_60 + 0x10) = uVar8;
    *(undefined8 *)(local_60 + 0x28) = uVar10;
    *(undefined8 *)(local_60 + 0x20) = uVar6;
    *(undefined8 *)(local_60 + 0x38) = uVar12;
    *(undefined8 *)(local_60 + 0x30) = uVar11;
  }
  FUN_004da520(param_1,&local_60,param_2,pbVar18);
  if (lStack_50 < 0) {
    operator_delete(local_60);
  }
  uVar13 = 0;
LAB_004dcedc:
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar13);
  }
  return;
}


// ===== 004dcf30  FUN_004dcf30 =====

undefined8 * FUN_004dcf30(undefined8 *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 *__dest;
  byte bVar2;
  ulong uVar3;
  
  if ((param_2 == (void *)0x0) && (param_3 != 0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/string",0x940,
               "__n == 0 || __s != nullptr","string::assign received nullptr");
  }
  bVar2 = *(byte *)((long)param_1 + 0x17);
  uVar3 = (param_1[2] & 0x7fffffffffffffff) - 1;
  if (-1 < (char)bVar2) {
    uVar3 = 0x16;
  }
  if (uVar3 < param_3) {
    uVar1 = param_1[1];
    if (-1 < (char)bVar2) {
      uVar1 = (ulong)bVar2;
    }
    FUN_00547540(param_1,uVar3,param_3 - uVar3,uVar1,0,uVar1,param_3);
  }
  else {
    __dest = (undefined8 *)*param_1;
    if (-1 < (char)bVar2) {
      __dest = param_1;
    }
    memmove(__dest,param_2,param_3);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      param_1[1] = param_3;
    }
    else {
      if (0x16 < param_3) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                   "__s < __min_cap",
                   "__s should never be greater than or equal to the short string capacity");
      }
      *(char *)((long)param_1 + 0x17) = (char)param_3;
    }
    *(undefined1 *)((long)__dest + param_3) = 0;
  }
  return param_1;
}


// ===== 004dd04c  FUN_004dd04c =====

void FUN_004dd04c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/deque",0xa18,"!empty()",
               "deque::pop_back called on an empty deque");
  }
  lVar4 = *(long *)(param_1 + 8);
  if (*(long *)(lVar4 + ((ulong)(lVar2 + -1 + *(long *)(param_1 + 0x20)) >> 6 & 0x3fffffffffffff8))
      != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x28) = lVar2 + -1;
    lVar1 = 0;
    if (lVar3 != lVar4) {
      lVar1 = (lVar3 - lVar4) * 0x40 + -1;
    }
    if (0x3ff < (lVar1 - (lVar2 + *(long *)(param_1 + 0x20))) + 1U) {
      operator_delete(*(void **)(lVar3 + -8));
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h",
             0x3f,"__loc != nullptr","null pointer given to destroy_at");
}


// ===== 004dd124  FUN_004dd124 =====

void FUN_004dd124(long *param_1)

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
  if ((ulong)param_1[4] < 0x200) {
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
      local_68 = operator_new(0x1000);
      FUN_004dd7c8(&local_60,&local_68);
      lVar4 = param_1[2];
      lVar7 = lVar4;
      if (lVar4 != param_1[1]) {
        do {
          lVar7 = lVar7 + -8;
          FUN_004dd978(&local_60,lVar7);
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
      goto LAB_004dd2a4;
    }
    if (lVar4 != param_1[2]) {
      local_60 = operator_new(0x1000);
      FUN_004dd480(param_1,&local_60);
      goto LAB_004dd2a4;
    }
    local_60 = operator_new(0x1000);
    FUN_004dd630(param_1,&local_60);
    local_60 = *(void **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0x200;
    local_60 = *(void **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_004dd2d0(param_1,&local_60);
LAB_004dd2a4:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004dd2d0  FUN_004dd2d0 =====

void FUN_004dd2d0(undefined8 *param_1,undefined8 *param_2)

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
  if (puVar11 != (undefined8 *)param_1[3]) goto LAB_004dd424;
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
    goto LAB_004dd424;
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
      if (uVar3 == uVar9) goto LAB_004dd40c;
    }
    do {
      puVar10 = puVar8 + 1;
      *puVar8 = *__src;
      puVar8 = puVar10;
      __src = __src + 1;
    } while (puVar10 != puVar11);
  }
LAB_004dd40c:
  *param_1 = pvVar5;
  param_1[1] = puVar1;
  param_1[2] = puVar11;
  param_1[3] = (void *)((long)pvVar5 + uVar7 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2);
    puVar11 = (undefined8 *)param_1[2];
  }
LAB_004dd424:
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


// ===== 004dd480  FUN_004dd480 =====

void FUN_004dd480(undefined8 *param_1,undefined8 *param_2)

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
  if (puVar11 != (undefined8 *)param_1[3]) goto LAB_004dd5d4;
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
    goto LAB_004dd5d4;
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
      if (uVar3 == uVar9) goto LAB_004dd5bc;
    }
    do {
      puVar10 = puVar8 + 1;
      *puVar8 = *__src;
      puVar8 = puVar10;
      __src = __src + 1;
    } while (puVar10 != puVar11);
  }
LAB_004dd5bc:
  *param_1 = pvVar5;
  param_1[1] = puVar1;
  param_1[2] = puVar11;
  param_1[3] = (void *)((long)pvVar5 + uVar7 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2);
    puVar11 = (undefined8 *)param_1[2];
  }
LAB_004dd5d4:
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


// ===== 004dd630  FUN_004dd630 =====

void FUN_004dd630(long *param_1,undefined8 *param_2)

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
  if (__src != (undefined8 *)*param_1) goto LAB_004dd798;
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
    goto LAB_004dd798;
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
      if (uVar2 == uVar10) goto LAB_004dd780;
    }
    do {
      puVar8 = puVar7 + 1;
      *puVar7 = *puVar9;
      puVar7 = puVar8;
      puVar9 = puVar9 + 1;
    } while (puVar8 != puVar6);
  }
LAB_004dd780:
  *param_1 = (long)pvVar3;
  param_1[1] = (long)__dest;
  param_1[2] = (long)puVar6;
  param_1[3] = (long)((long)pvVar3 + uVar5 * 8);
  if (__src != (undefined8 *)0x0) {
    operator_delete(__src);
    __dest = (undefined8 *)param_1[1];
  }
LAB_004dd798:
  __dest[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}


// ===== 004dd7c8  FUN_004dd7c8 =====

void FUN_004dd7c8(undefined8 *param_1,undefined8 *param_2)

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
  if (puVar11 != (undefined8 *)param_1[3]) goto LAB_004dd91c;
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
    goto LAB_004dd91c;
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
      if (uVar3 == uVar9) goto LAB_004dd904;
    }
    do {
      puVar10 = puVar8 + 1;
      *puVar8 = *__src;
      puVar8 = puVar10;
      __src = __src + 1;
    } while (puVar10 != puVar11);
  }
LAB_004dd904:
  *param_1 = pvVar5;
  param_1[1] = puVar1;
  param_1[2] = puVar11;
  param_1[3] = (void *)((long)pvVar5 + uVar7 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2);
    puVar11 = (undefined8 *)param_1[2];
  }
LAB_004dd91c:
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


// ===== 004dd978  FUN_004dd978 =====

void FUN_004dd978(long *param_1,undefined8 *param_2)

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
  if (__src != (undefined8 *)*param_1) goto LAB_004ddae0;
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
    goto LAB_004ddae0;
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
      if (uVar2 == uVar10) goto LAB_004ddac8;
    }
    do {
      puVar8 = puVar7 + 1;
      *puVar7 = *puVar9;
      puVar7 = puVar8;
      puVar9 = puVar9 + 1;
    } while (puVar8 != puVar6);
  }
LAB_004ddac8:
  *param_1 = (long)pvVar3;
  param_1[1] = (long)__dest;
  param_1[2] = (long)puVar6;
  param_1[3] = (long)((long)pvVar3 + uVar5 * 8);
  if (__src != (undefined8 *)0x0) {
    operator_delete(__src);
    __dest = (undefined8 *)param_1[1];
  }
LAB_004ddae0:
  __dest[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}


// ===== 004ddb10  FUN_004ddb10 =====

void FUN_004ddb10(long *param_1)

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
  if ((ulong)param_1[4] < 0x49) {
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
      local_68 = operator_new(0xff8);
      FUN_004de1b4(&local_60,&local_68);
      lVar4 = param_1[2];
      lVar7 = lVar4;
      if (lVar4 != param_1[1]) {
        do {
          lVar7 = lVar7 + -8;
          FUN_004de364(&local_60,lVar7);
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
      goto LAB_004ddc90;
    }
    if (lVar4 != param_1[2]) {
      local_60 = operator_new(0xff8);
      FUN_004dde6c(param_1,&local_60);
      goto LAB_004ddc90;
    }
    local_60 = operator_new(0xff8);
    FUN_004de01c(param_1,&local_60);
    local_60 = *(void **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0x49;
    local_60 = *(void **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_004ddcbc(param_1,&local_60);
LAB_004ddc90:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004ddcbc  FUN_004ddcbc =====

void FUN_004ddcbc(undefined8 *param_1,undefined8 *param_2)

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
  if (puVar11 != (undefined8 *)param_1[3]) goto LAB_004dde10;
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
    goto LAB_004dde10;
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
      if (uVar3 == uVar9) goto LAB_004dddf8;
    }
    do {
      puVar10 = puVar8 + 1;
      *puVar8 = *__src;
      puVar8 = puVar10;
      __src = __src + 1;
    } while (puVar10 != puVar11);
  }
LAB_004dddf8:
  *param_1 = pvVar5;
  param_1[1] = puVar1;
  param_1[2] = puVar11;
  param_1[3] = (void *)((long)pvVar5 + uVar7 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2);
    puVar11 = (undefined8 *)param_1[2];
  }
LAB_004dde10:
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


// ===== 004dde6c  FUN_004dde6c =====

void FUN_004dde6c(undefined8 *param_1,undefined8 *param_2)

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
  if (puVar11 != (undefined8 *)param_1[3]) goto LAB_004ddfc0;
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
    goto LAB_004ddfc0;
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
      if (uVar3 == uVar9) goto LAB_004ddfa8;
    }
    do {
      puVar10 = puVar8 + 1;
      *puVar8 = *__src;
      puVar8 = puVar10;
      __src = __src + 1;
    } while (puVar10 != puVar11);
  }
LAB_004ddfa8:
  *param_1 = pvVar5;
  param_1[1] = puVar1;
  param_1[2] = puVar11;
  param_1[3] = (void *)((long)pvVar5 + uVar7 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2);
    puVar11 = (undefined8 *)param_1[2];
  }
LAB_004ddfc0:
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


// ===== 004de01c  FUN_004de01c =====

void FUN_004de01c(long *param_1,undefined8 *param_2)

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
  if (__src != (undefined8 *)*param_1) goto LAB_004de184;
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
    goto LAB_004de184;
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
      if (uVar2 == uVar10) goto LAB_004de16c;
    }
    do {
      puVar8 = puVar7 + 1;
      *puVar7 = *puVar9;
      puVar7 = puVar8;
      puVar9 = puVar9 + 1;
    } while (puVar8 != puVar6);
  }
LAB_004de16c:
  *param_1 = (long)pvVar3;
  param_1[1] = (long)__dest;
  param_1[2] = (long)puVar6;
  param_1[3] = (long)((long)pvVar3 + uVar5 * 8);
  if (__src != (undefined8 *)0x0) {
    operator_delete(__src);
    __dest = (undefined8 *)param_1[1];
  }
LAB_004de184:
  __dest[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}


// ===== 004de1b4  FUN_004de1b4 =====

void FUN_004de1b4(undefined8 *param_1,undefined8 *param_2)

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
  if (puVar11 != (undefined8 *)param_1[3]) goto LAB_004de308;
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
    goto LAB_004de308;
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
      if (uVar3 == uVar9) goto LAB_004de2f0;
    }
    do {
      puVar10 = puVar8 + 1;
      *puVar8 = *__src;
      puVar8 = puVar10;
      __src = __src + 1;
    } while (puVar10 != puVar11);
  }
LAB_004de2f0:
  *param_1 = pvVar5;
  param_1[1] = puVar1;
  param_1[2] = puVar11;
  param_1[3] = (void *)((long)pvVar5 + uVar7 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2);
    puVar11 = (undefined8 *)param_1[2];
  }
LAB_004de308:
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


// ===== 004de364  FUN_004de364 =====

void FUN_004de364(long *param_1,undefined8 *param_2)

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
  if (__src != (undefined8 *)*param_1) goto LAB_004de4cc;
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
    goto LAB_004de4cc;
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
      if (uVar2 == uVar10) goto LAB_004de4b4;
    }
    do {
      puVar8 = puVar7 + 1;
      *puVar7 = *puVar9;
      puVar7 = puVar8;
      puVar9 = puVar9 + 1;
    } while (puVar8 != puVar6);
  }
LAB_004de4b4:
  *param_1 = (long)pvVar3;
  param_1[1] = (long)__dest;
  param_1[2] = (long)puVar6;
  param_1[3] = (long)((long)pvVar3 + uVar5 * 8);
  if (__src != (undefined8 *)0x0) {
    operator_delete(__src);
    __dest = (undefined8 *)param_1[1];
  }
LAB_004de4cc:
  __dest[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}


// ===== 004de4fc  FUN_004de4fc =====

undefined8 * FUN_004de4fc(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  undefined8 *__dest;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  uVar4 = param_2[1];
  uVar3 = *param_2;
  param_1[2] = param_2[2];
  __dest = param_1 + 3;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    __src = (undefined8 *)param_2[3];
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
      __dest = (undefined8 *)operator_new(uVar1);
      param_1[3] = __dest;
      param_1[4] = uVar2;
      param_1[5] = uVar1 | 0x8000000000000000;
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
    uVar4 = param_2[4];
    uVar3 = param_2[3];
    param_1[5] = param_2[5];
    param_1[4] = uVar4;
    *__dest = uVar3;
  }
  param_1[6] = param_2[6];
  return param_1;
}


// ===== 004de61c  FUN_004de61c =====

void FUN_004de61c(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  
  lVar6 = *(long *)(param_1 + 8);
  lVar8 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(param_1 + 0x28);
  lVar1 = 0;
  if (lVar8 != lVar6) {
    lVar1 = (lVar8 - lVar6 >> 3) * 0x49 + -1;
  }
  uVar11 = lVar4 + *(long *)(param_1 + 0x20);
  if (lVar1 - uVar11 < param_2) {
    FUN_004deb4c(param_1,param_2 - (lVar1 - uVar11));
    lVar4 = *(long *)(param_1 + 0x28);
    lVar6 = *(long *)(param_1 + 8);
    lVar8 = *(long *)(param_1 + 0x10);
    uVar11 = *(long *)(param_1 + 0x20) + lVar4;
  }
  plVar5 = (long *)(lVar6 + (uVar11 / 0x49) * 8);
  if (lVar8 == lVar6) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    puVar7 = (undefined8 *)(*plVar5 + (uVar11 % 0x49) * 0x38);
  }
  if (param_2 != 0) {
    param_2 = param_2 + ((long)puVar7 - *plVar5 >> 3) * 0x6db6db6db6db6db7;
    if ((long)param_2 < 1) {
      uVar11 = (0x48 - param_2) / 0x49;
      plVar9 = plVar5 + -uVar11;
      puVar10 = (undefined8 *)(*plVar9 + (uVar11 * 0x49 - (0x48 - param_2)) * 0x38 + 0xfc0);
    }
    else {
      plVar9 = plVar5 + param_2 / 0x49;
      puVar10 = (undefined8 *)(*plVar9 + (param_2 % 0x49) * 0x38);
    }
    while (puVar7 != puVar10) {
      puVar12 = puVar10;
      if (plVar5 != plVar9) {
        puVar12 = (undefined8 *)(*plVar5 + 0xff8);
      }
      puVar2 = puVar7;
      if (puVar7 != puVar12) {
        do {
          if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                       ,0x23,"__location != nullptr","null pointer given to construct_at");
          }
          puVar2[6] = 0;
          puVar2[3] = 0;
          puVar2[2] = 0;
          puVar2[5] = 0;
          puVar2[4] = 0;
          puVar3 = puVar2 + 7;
          puVar2[1] = 0;
          *puVar2 = 0;
          puVar2 = puVar3;
        } while (puVar3 != puVar12);
        lVar4 = *(long *)(param_1 + 0x28);
        puVar2 = puVar12;
      }
      lVar4 = lVar4 + ((long)puVar2 - (long)puVar7 >> 3) * 0x6db6db6db6db6db7;
      *(long *)(param_1 + 0x28) = lVar4;
      if (plVar5 == plVar9) {
        return;
      }
      plVar5 = plVar5 + 1;
      puVar7 = (undefined8 *)*plVar5;
    }
  }
  return;
}


// ===== 004de840  FUN_004de840 =====

void FUN_004de840(long param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  
  uVar3 = *(ulong *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  lVar4 = *(long *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10);
  plVar12 = (long *)(lVar4 + ((uVar3 + lVar2) / 0x49) * 8);
  if (lVar1 == lVar4) {
    lVar11 = 0;
    if (param_3 == 0) {
      return;
    }
  }
  else {
    lVar11 = *plVar12 + ((uVar3 + lVar2) % 0x49) * 0x38;
    if (lVar11 == param_3) {
      return;
    }
  }
  lVar5 = param_3 - *param_2 >> 3;
  lVar10 = ((long)plVar12 - (long)param_2 >> 3) * 0x49 +
           (lVar11 - *plVar12 >> 3) * 0x6db6db6db6db6db7 + lVar5 * -0x6db6db6db6db6db7;
  if (lVar10 < 1) {
    return;
  }
  plVar12 = (long *)(lVar4 + (uVar3 / 0x49) * 8);
  if (lVar1 == lVar4) {
    lVar8 = 0;
    if (param_3 == 0) goto joined_r0x004de9f4;
  }
  else {
    lVar8 = *plVar12 + (uVar3 % 0x49) * 0x38;
    if (param_3 == lVar8) goto joined_r0x004de9f4;
  }
  lVar6 = lVar8 - *plVar12 >> 3;
  lVar5 = ((long)param_2 - (long)plVar12 >> 3) * 0x49 + lVar5 * 0x6db6db6db6db6db7 +
          lVar6 * -0x6db6db6db6db6db7;
  param_3 = lVar8;
  if (lVar5 != 0) {
    uVar7 = lVar5 + lVar6 * 0x6db6db6db6db6db7;
    if ((long)uVar7 < 1) {
      uVar9 = (0x48 - uVar7) / 0x49;
      plVar12 = plVar12 + -uVar9;
      param_3 = *plVar12 + (uVar9 * 0x49 - (0x48 - uVar7)) * 0x38 + 0xfc0;
    }
    else {
      plVar12 = plVar12 + uVar7 / 0x49;
      param_3 = *plVar12 + (uVar7 % 0x49) * 0x38;
    }
  }
joined_r0x004de9f4:
  if (param_3 != lVar11) {
    do {
      if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                   ,0x3f,"__loc != nullptr","null pointer given to destroy_at");
      }
      if (*(char *)(param_3 + 0x2f) < '\0') {
        operator_delete(*(void **)(param_3 + 0x18));
      }
      param_3 = param_3 + 0x38;
      if (param_3 - *plVar12 == 0xff8) {
        plVar12 = plVar12 + 1;
        param_3 = *plVar12;
      }
    } while (param_3 != lVar11);
    lVar4 = *(long *)(param_1 + 8);
    lVar1 = *(long *)(param_1 + 0x10);
    uVar3 = *(ulong *)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x28);
  }
  lVar2 = lVar2 - lVar10;
  lVar11 = 0;
  if (lVar1 != lVar4) {
    lVar11 = (lVar1 - lVar4 >> 3) * 0x49 + -1;
  }
  *(long *)(param_1 + 0x28) = lVar2;
  uVar3 = lVar11 - (lVar2 + uVar3);
  while (0x91 < uVar3) {
    operator_delete(*(void **)(lVar1 + -8));
    lVar1 = *(long *)(param_1 + 0x10) + -8;
    lVar2 = lVar1 - *(long *)(param_1 + 8);
    *(long *)(param_1 + 0x10) = lVar1;
    lVar4 = 0;
    if (lVar2 != 0) {
      lVar4 = (lVar2 >> 3) * 0x49 + -1;
    }
    uVar3 = lVar4 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
  }
  return;
}


// ===== 004deb4c  FUN_004deb4c =====

void FUN_004deb4c(long *param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  void *local_98;
  undefined8 *local_90;
  undefined8 *puStack_88;
  undefined8 *local_80;
  undefined8 *local_78;
  long *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_1[2] - param_1[1] == 0) {
    param_2 = param_2 + 1;
  }
  uVar8 = param_2 / 0x49;
  if (param_2 % 0x49 != 0) {
    uVar8 = uVar8 + 1;
  }
  uVar6 = (ulong)param_1[4] / 0x49;
  uVar12 = uVar8;
  if (uVar6 <= uVar8) {
    uVar12 = uVar6;
  }
  if (uVar6 < uVar8) {
    lVar11 = param_1[2] - param_1[1] >> 3;
    uVar6 = uVar8 - uVar12;
    plVar4 = param_1 + 3;
    if ((ulong)((*plVar4 - *param_1 >> 3) - lVar11) < uVar6) {
      uVar8 = *plVar4 - *param_1 >> 2;
      if (uVar8 <= uVar6 + lVar11) {
        uVar8 = uVar6 + lVar11;
      }
      local_70 = plVar4;
      if (uVar8 == 0) {
        local_90 = (undefined8 *)0x0;
      }
      else {
        if (uVar8 >> 0x3d != 0) {
LAB_004defa4:
                    /* WARNING: Subroutine does not return */
          FUN_00401ad4();
        }
        local_90 = (undefined8 *)operator_new(uVar8 << 3);
      }
      local_78 = local_90 + uVar8;
      lVar13 = uVar12 * -0x49;
      puStack_88 = local_90 + (lVar11 - uVar12);
      local_80 = puStack_88;
      do {
        local_98 = operator_new(0xff8);
        FUN_004de1b4(&local_90,&local_98);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      puVar14 = (undefined8 *)param_1[1];
      puVar3 = local_90;
      puVar10 = puStack_88;
      puVar5 = local_80;
      for (; local_80 = puVar5, local_90 = puVar3, puStack_88 = puVar10, uVar12 != 0;
          uVar12 = uVar12 - 1) {
        if (puVar5 == local_78) {
          if (puVar10 < puVar3 || (long)puVar10 - (long)puVar3 == 0) {
            uVar8 = (long)puVar5 - (long)puVar3 >> 2;
            if ((long)puVar5 - (long)puVar3 == 0) {
              uVar8 = 1;
            }
            if (uVar8 >> 0x3d != 0) goto LAB_004defa4;
            uVar15 = uVar8 >> 2;
            local_90 = (undefined8 *)operator_new(uVar8 * 8);
            puStack_88 = local_90 + uVar15;
            uVar6 = (long)puVar5 - (long)puVar10;
            local_80 = puStack_88;
            if (uVar6 != 0) {
              local_80 = (undefined8 *)((long)puStack_88 + (uVar6 & 0xfffffffffffffff8));
              puVar5 = puStack_88;
              if ((0x37 < uVar6 - 8) && (0x1f < (long)local_90 + (uVar15 * 8 - (long)puVar10))) {
                uVar6 = (uVar6 - 8 >> 3) + 1;
                puVar5 = puVar10 + 2;
                uVar7 = uVar6 & 0x3ffffffffffffffc;
                puVar9 = local_90 + uVar15 + 2;
                puVar10 = puVar10 + uVar7;
                uVar15 = uVar7;
                do {
                  puVar2 = puVar5 + -1;
                  uVar16 = puVar5[-2];
                  uVar18 = puVar5[1];
                  uVar17 = *puVar5;
                  puVar5 = puVar5 + 4;
                  uVar15 = uVar15 - 4;
                  puVar9[-1] = *puVar2;
                  puVar9[-2] = uVar16;
                  puVar9[1] = uVar18;
                  *puVar9 = uVar17;
                  puVar9 = puVar9 + 4;
                } while (uVar15 != 0);
                puVar5 = puStack_88 + uVar7;
                if (uVar6 == uVar7) goto LAB_004dedfc;
              }
              do {
                puVar9 = puVar5 + 1;
                *puVar5 = *puVar10;
                puVar5 = puVar9;
                puVar10 = puVar10 + 1;
              } while (puVar9 != local_80);
            }
LAB_004dedfc:
            local_78 = local_90 + uVar8;
            if (puVar3 != (undefined8 *)0x0) {
              operator_delete(puVar3);
            }
          }
          else {
            lVar11 = (long)puVar10 - (long)puVar3 >> 3;
            uVar8 = lVar11 + 2;
            if (-1 < lVar11 + 1) {
              uVar8 = lVar11 + 1;
            }
            uVar8 = uVar8 >> 1;
            memmove(puVar10 + -uVar8,puVar10,(long)puVar5 - (long)puVar10);
            local_80 = puVar5 + -uVar8;
            puStack_88 = puStack_88 + -uVar8;
          }
        }
        if (local_80 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        *local_80 = *puVar14;
        puVar5 = local_80 + 1;
        puVar14 = (undefined8 *)(param_1[1] + 8);
        param_1[1] = (long)puVar14;
        puVar3 = local_90;
        puVar10 = puStack_88;
      }
      puVar3 = (undefined8 *)param_1[2];
      puVar10 = puVar14;
      if (puVar3 != puVar14) {
        do {
          puVar3 = puVar3 + -1;
          FUN_004de364(&local_90,puVar3);
        } while (puVar3 != (undefined8 *)param_1[1]);
        puVar14 = (undefined8 *)param_1[2];
        puVar10 = puVar3;
      }
      puVar5 = (undefined8 *)param_1[3];
      puVar3 = (undefined8 *)*param_1;
      param_1[1] = (long)puStack_88;
      *param_1 = (long)local_90;
      param_1[3] = (long)local_78;
      param_1[2] = (long)local_80;
      param_1[4] = param_1[4] + lVar13;
      local_80 = puVar14;
      if (puVar14 != puVar10) {
        local_80 = (undefined8 *)
                   ((long)puVar14 + ((long)puVar10 + (7 - (long)puVar14) & 0xfffffffffffffff8U));
      }
      local_90 = puVar3;
      puStack_88 = puVar10;
      local_78 = puVar5;
      if (puVar3 != (undefined8 *)0x0) {
        operator_delete(puVar3);
      }
    }
    else {
      if (uVar6 != 0) {
LAB_004dec60:
        if (param_1[3] != param_1[2]) goto code_r0x004dec6c;
        if (uVar6 != 0) {
          uVar12 = 0;
          do {
            local_90 = (undefined8 *)operator_new(0xff8);
            FUN_004de01c(param_1,&local_90);
            uVar12 = uVar12 + 1;
            lVar11 = 0x48;
            if (param_1[2] - param_1[1] != 8) {
              lVar11 = 0x49;
            }
            lVar11 = lVar11 + param_1[4];
            param_1[4] = lVar11;
          } while (uVar6 != uVar12);
          goto LAB_004def18;
        }
      }
LAB_004def14:
      lVar11 = param_1[4];
      uVar8 = uVar12;
LAB_004def18:
      param_1[4] = lVar11 + uVar8 * -0x49;
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        local_90 = *(undefined8 **)param_1[1];
        param_1[1] = (long)((undefined8 *)param_1[1] + 1);
        FUN_004ddcbc(param_1,&local_90);
      }
    }
  }
  else {
    param_1[4] = param_1[4] + uVar12 * -0x49;
    for (; uVar12 != 0; uVar12 = uVar12 - 1) {
      local_90 = *(undefined8 **)param_1[1];
      param_1[1] = (long)((undefined8 *)param_1[1] + 1);
      FUN_004ddcbc(param_1,&local_90);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
code_r0x004dec6c:
  local_90 = (undefined8 *)operator_new(0xff8);
  FUN_004dde6c(param_1,&local_90);
  uVar6 = uVar6 - 1;
  uVar8 = uVar8 - 1;
  if (uVar6 == 0) goto LAB_004def14;
  goto LAB_004dec60;
}


// ===== 004defac  FUN_004defac =====

long FUN_004defac(long *param_1)

{
  return *param_1 + 0x30;
}


// ===== 004defb8  FUN_004defb8 =====

void FUN_004defb8(long *param_1)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)*param_1;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
               "__x != nullptr","node shouldn\'t be null");
  }
  plVar1 = (long *)plVar3[1];
  if ((long *)plVar3[1] == (long *)0x0) {
    do {
      plVar4 = (long *)plVar3[2];
      bVar2 = (long *)*plVar4 != plVar3;
      plVar3 = plVar4;
    } while (bVar2);
  }
  else {
    do {
      plVar4 = plVar1;
      plVar1 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
  *param_1 = (long)plVar4;
  return;
}


// ===== 004df028  FUN_004df028 =====

bool FUN_004df028(long *param_1,long *param_2)

{
  if ((char)param_1[1] != '\0') {
    return (char)param_2[1] != '\0';
  }
  return *param_1 == *param_2;
}


// ===== 004df054  FUN_004df054 =====

void FUN_004df054(undefined8 param_1)

{
  FUN_004df074(&DAT_00d61548,param_1);
  FUN_004df090();
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 004df074  FUN_004df074 =====

void FUN_004df074(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  FUN_00428964(param_1,puVar2,uVar1);
  return;
}


// ===== 004df090  FUN_004df090 =====

long * FUN_004df090(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00520ce8(auStack_40,(long)param_1 + *(long *)(*param_1 + -0x18));
  plVar3 = (long *)FUN_0053cfd4(auStack_40,PTR_DAT_00d51b28);
  uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3,10);
  FUN_0053ceec(auStack_40);
  FUN_0054cbd4(param_1,uVar2);
  FUN_0054aa28(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004df134  FUN_004df134 =====

void FUN_004df134(undefined8 *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) & 0xfe00 | (ushort)param_2 & 0xff;
  switch(param_2) {
  case 1:
  case 2:
  case 3:
    *param_1 = 0;
    break;
  case 4:
    *param_1 = &DAT_001f7367;
    break;
  case 5:
    *(undefined1 *)param_1 = 0;
    break;
  case 6:
  case 7:
    puVar1 = (undefined8 *)operator_new(0x18);
    puVar1[2] = 0;
    *param_1 = puVar1;
    puVar1[1] = 0;
    *puVar1 = puVar1 + 1;
  }
  return;
}


// ===== 004df1c8  FUN_004df1c8 =====

void FUN_004df1c8(long *param_1,int param_2)

{
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *param_1 = (long)param_2;
  *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) & 0xfe00 | 1;
  return;
}


// ===== 004df1ec  FUN_004df1ec =====

void FUN_004df1ec(ulong *param_1,uint param_2)

{
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *param_1 = (ulong)param_2;
  *(ushort *)(param_1 + 1) = (ushort)param_1[1] & 0xfe00 | 2;
  return;
}


// ===== 004df210  FUN_004df210 =====

void FUN_004df210(undefined8 *param_1,undefined8 param_2)

{
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *param_1 = param_2;
  *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) & 0xfe00 | 1;
  return;
}


// ===== 004df230  FUN_004df230 =====

void FUN_004df230(undefined8 *param_1,undefined8 param_2)

{
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *param_1 = param_2;
  *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) & 0xfe00 | 2;
  return;
}


// ===== 004df250  FUN_004df250 =====

void FUN_004df250(undefined8 param_1,undefined8 *param_2)

{
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[2] = 0;
  *param_2 = param_1;
  *(ushort *)(param_2 + 1) = *(ushort *)(param_2 + 1) & 0xfe00 | 3;
  return;
}


// ===== 004df270  FUN_004df270 =====

void FUN_004df270(undefined8 *param_1,char *param_2)

{
  long lVar1;
  size_t sVar2;
  uint *puVar3;
  ulong __n;
  undefined1 auStack_160 [264];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) & 0xfe00 | 0x104;
  if (param_2 == (char *)0x0) {
    FUN_004df390(auStack_160);
    FUN_004df444(auStack_160,"Null Value Passed to Value Constructor");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  sVar2 = strlen(param_2);
  if ((uint)sVar2 < 0x7ffffffb) {
    __n = sVar2 & 0xffffffff;
    puVar3 = (uint *)malloc(__n + 5);
    if (puVar3 == (uint *)0x0) {
      FUN_004a3cf4(auStack_160,
                   "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                  );
      FUN_004df054(auStack_160);
    }
    else {
      *puVar3 = (uint)sVar2;
      memcpy(puVar3 + 1,param_2,__n);
      *(undefined1 *)((long)puVar3 + __n + 4) = 0;
      *param_1 = puVar3;
      if (*(long *)(lVar1 + 0x28) == local_58) {
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  FUN_004df390(auStack_160);
  FUN_004df444(auStack_160,
               "in Json::Value::duplicateAndPrefixStringValue(): length too big for prefixing");
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 004df390  FUN_004df390 =====

void FUN_004df390(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = PTR_DAT_00d51b48;
  puVar1 = PTR_DAT_00d51b48 + 0x40;
  lVar2 = *(long *)(PTR_PTR_00d51b50 + 8);
  uVar3 = *(undefined8 *)(PTR_PTR_00d51b50 + 0x10);
  param_1[0xe] = (long)puVar1;
  *param_1 = lVar2;
  *(undefined8 *)((long)param_1 + *(long *)(lVar2 + -0x18)) = uVar3;
  lVar2 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_00520e8c(lVar2,param_1 + 1);
  *(undefined8 *)(lVar2 + 0x88) = 0;
  param_1[0xe] = (long)puVar1;
  *(undefined4 *)(lVar2 + 0x90) = 0xffffffff;
  *param_1 = (long)(puVar4 + 0x18);
  FUN_0054a4c8(param_1 + 1);
  puVar1 = PTR_DAT_00d51b20;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[1] = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 0xd) = 0x10;
  return;
}


// ===== 004df444  FUN_004df444 =====

void FUN_004df444(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  FUN_00428964(param_1,param_2,sVar1);
  return;
}


// ===== 004df478  FUN_004df478 =====

void FUN_004df478(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  uint *puVar4;
  ulong __n;
  undefined8 *__src;
  undefined1 auStack_170 [264];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) & 0xfe00 | 0x104;
  bVar2 = *(byte *)((long)param_2 + 0x17);
  uVar1 = param_2[1];
  if (-1 < (char)bVar2) {
    uVar1 = (ulong)bVar2;
  }
  if (0x7ffffffa < (uint)uVar1) {
    FUN_004df390(auStack_170);
    FUN_004df444(auStack_170,
                 "in Json::Value::duplicateAndPrefixStringValue(): length too big for prefixing");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  __n = uVar1 & 0xffffffff;
  __src = (undefined8 *)*param_2;
  puVar4 = (uint *)malloc(__n + 5);
  if (puVar4 == (uint *)0x0) {
    FUN_004a3cf4(auStack_170,
                 "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                );
    FUN_004df054(auStack_170);
  }
  else {
    if (-1 < (char)bVar2) {
      __src = param_2;
    }
    *puVar4 = (uint)uVar1;
    memcpy(puVar4 + 1,__src,__n);
    *(undefined1 *)((long)puVar4 + __n + 4) = 0;
    *param_1 = puVar4;
    if (*(long *)(lVar3 + 0x28) == local_68) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004df590  FUN_004df590 =====

void FUN_004df590(undefined8 *param_1,undefined8 *param_2)

{
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) & 0xfe00 | 4;
  *param_1 = *param_2;
  return;
}


// ===== 004df5b4  FUN_004df5b4 =====

void FUN_004df5b4(undefined1 *param_1,undefined1 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_1 = param_2;
  *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) & 0xfe00 | 5;
  return;
}


// ===== 004df5d8  FUN_004df5d8 =====

void FUN_004df5d8(long param_1,long param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_004df620();
  FUN_004e0b98((undefined8 *)(param_1 + 0x10),param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}


// ===== 004df620  FUN_004df620 =====

void FUN_004df620(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  long *plVar5;
  bool bVar6;
  uint *puVar7;
  uint *puVar8;
  ulong __n;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined1 auStack_160 [264];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  bVar1 = *(byte *)(param_2 + 1);
  uVar3 = *(ushort *)(param_1 + 1) & 0xfe00 | (ushort)bVar1;
  *(ushort *)(param_1 + 1) = uVar3;
  if (bVar1 < 8) {
    uVar2 = 1 << (ulong)(bVar1 & 0x1f);
    if ((uVar2 & 0x2f) == 0) {
      if ((uVar2 & 0xc0) == 0) {
        puVar7 = (uint *)*param_2;
        if ((puVar7 != (uint *)0x0) && ((*(ushort *)(param_2 + 1) >> 8 & 1) != 0)) {
          uVar2 = *puVar7;
          __n = (ulong)uVar2;
          if (0x7ffffffa < uVar2) {
            FUN_004df390(auStack_160);
            FUN_004df444(auStack_160,
                         "in Json::Value::duplicateAndPrefixStringValue(): length too big for prefixing"
                        );
                    /* WARNING: Subroutine does not return */
            abort();
          }
          puVar8 = (uint *)malloc(__n + 5);
          if (puVar8 == (uint *)0x0) {
            FUN_004a3cf4(auStack_160,
                         "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                        );
            FUN_004df054(auStack_160);
            goto LAB_004df804;
          }
          *puVar8 = uVar2;
          memcpy(puVar8 + 1,puVar7 + 1,__n);
          *(undefined1 *)((long)puVar8 + __n + 4) = 0;
          *param_1 = puVar8;
          *(ushort *)(param_1 + 1) = uVar3 | 0x100;
          goto LAB_004df72c;
        }
      }
      else {
        puVar7 = (uint *)operator_new(0x18);
        plVar9 = (long *)*param_2;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar8 = puVar7 + 2;
        puVar8[0] = 0;
        puVar8[1] = 0;
        *(uint **)puVar7 = puVar8;
        plVar10 = (long *)*plVar9;
        while (plVar10 != plVar9 + 1) {
          FUN_004e1f8c(puVar7,puVar8,plVar10 + 4,plVar10 + 4);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
                       "__x != nullptr","node shouldn\'t be null");
          }
          plVar5 = (long *)plVar10[1];
          plVar11 = plVar10;
          if ((long *)plVar10[1] == (long *)0x0) {
            do {
              plVar10 = (long *)plVar11[2];
              bVar6 = (long *)*plVar10 != plVar11;
              plVar11 = plVar10;
            } while (bVar6);
          }
          else {
            do {
              plVar10 = plVar5;
              plVar5 = (long *)*plVar10;
            } while ((long *)*plVar10 != (long *)0x0);
          }
        }
      }
      *param_1 = puVar7;
    }
    else {
      *param_1 = *param_2;
    }
  }
LAB_004df72c:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
LAB_004df804:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004df808  FUN_004df808 =====

void FUN_004df808(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) & 0xfe00;
  uVar1 = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_2 + 1) = uVar1;
  uVar2 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar2;
  FUN_004dfa98(param_1 + 2,param_2 + 2);
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  param_2[3] = uVar2;
  uVar2 = param_1[4];
  param_1[4] = param_2[4];
  param_2[4] = uVar2;
  return;
}


// ===== 004df880  FUN_004df880 =====

void FUN_004df880(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  uVar1 = *(ushort *)(param_1 + 1) & 0xff;
  if (uVar1 - 6 < 2) {
    pvVar3 = (void *)*param_1;
    if (pvVar3 != (void *)0x0) {
      FUN_004e1e34(pvVar3,*(undefined8 *)((long)pvVar3 + 8));
      operator_delete(pvVar3);
    }
  }
  else if ((uVar1 == 4) && ((*(ushort *)(param_1 + 1) >> 8 & 1) != 0)) {
    free((void *)*param_1);
  }
  puVar4 = (undefined8 *)param_1[2];
  *param_1 = 0;
  param_1[2] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    if (*(char *)((long)puVar4 + 0x47) < '\0') {
      operator_delete((void *)puVar4[6]);
      cVar2 = *(char *)((long)puVar4 + 0x2f);
    }
    else {
      cVar2 = *(char *)((long)puVar4 + 0x2f);
    }
    if (cVar2 < '\0') {
      operator_delete((void *)puVar4[3]);
      cVar2 = *(char *)((long)puVar4 + 0x17);
    }
    else {
      cVar2 = *(char *)((long)puVar4 + 0x17);
    }
    if (cVar2 < '\0') {
      operator_delete((void *)*puVar4);
    }
    operator_delete(puVar4);
    return;
  }
  return;
}


// ===== 004df948  FUN_004df948 =====

undefined8 * FUN_004df948(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_50 = 0;
  FUN_004df620(&local_60);
  uVar3 = FUN_004e0b98(&local_50,param_2 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 1);
  uStack_40 = *(undefined8 *)(param_2 + 0x20);
  local_48 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = *param_1;
  *(undefined4 *)(param_1 + 1) = local_58;
  *param_1 = local_60;
  local_60 = uVar4;
  local_58 = uVar1;
  FUN_004dfa98(uVar3,param_1 + 2);
  uVar4 = param_1[4];
  uVar3 = param_1[3];
  param_1[4] = uStack_40;
  param_1[3] = local_48;
  local_48 = uVar3;
  uStack_40 = uVar4;
  FUN_004df880(&local_60);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004dfa04  FUN_004dfa04 =====

undefined8 * FUN_004dfa04(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)(param_1 + 1) = uVar1;
  uVar2 = *param_2;
  *param_2 = *param_1;
  *param_1 = uVar2;
  FUN_004dfa98(param_2 + 2,param_1 + 2);
  uVar2 = param_2[3];
  param_2[3] = param_1[3];
  param_1[3] = uVar2;
  uVar2 = param_2[4];
  param_2[4] = param_1[4];
  param_1[4] = uVar2;
  return param_1;
}


// ===== 004dfa74  FUN_004dfa74 =====

void FUN_004dfa74(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_2 + 1) = uVar1;
  uVar2 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar2;
  return;
}


// ===== 004dfa98  FUN_004dfa98 =====

void FUN_004dfa98(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar4 = *param_1;
  *param_1 = 0;
  uVar2 = *param_2;
  *param_2 = 0;
  puVar3 = (undefined8 *)*param_1;
  *param_1 = uVar2;
  if (puVar3 == (undefined8 *)0x0) goto LAB_004dfae8;
  if (*(char *)((long)puVar3 + 0x47) < '\0') {
    operator_delete((void *)puVar3[6]);
    if (*(char *)((long)puVar3 + 0x2f) < '\0') goto LAB_004dfb40;
LAB_004dfad8:
    cVar1 = *(char *)((long)puVar3 + 0x17);
  }
  else {
    if (-1 < *(char *)((long)puVar3 + 0x2f)) goto LAB_004dfad8;
LAB_004dfb40:
    operator_delete((void *)puVar3[3]);
    cVar1 = *(char *)((long)puVar3 + 0x17);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)*puVar3);
  }
  operator_delete(puVar3);
LAB_004dfae8:
  puVar3 = (undefined8 *)*param_2;
  *param_2 = uVar4;
  if (puVar3 != (undefined8 *)0x0) {
    if (*(char *)((long)puVar3 + 0x47) < '\0') {
      operator_delete((void *)puVar3[6]);
      cVar1 = *(char *)((long)puVar3 + 0x2f);
    }
    else {
      cVar1 = *(char *)((long)puVar3 + 0x2f);
    }
    if (cVar1 < '\0') {
      operator_delete((void *)puVar3[3]);
      cVar1 = *(char *)((long)puVar3 + 0x17);
    }
    else {
      cVar1 = *(char *)((long)puVar3 + 0x17);
    }
    if (cVar1 < '\0') {
      operator_delete((void *)*puVar3);
    }
    operator_delete(puVar3);
    return;
  }
  return;
}


// ===== 004dfb88  FUN_004dfb88 =====

undefined1 FUN_004dfb88(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}


// ===== 004dfb90  FUN_004dfb90 =====

bool FUN_004dfb90(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  bool bVar1;
  ulong uVar2;
  uint *__s;
  uint *puVar3;
  
  __s = (uint *)*param_1;
  bVar1 = (*(ushort *)(param_1 + 1) & 0xff) == 4;
  if (bVar1 && __s != (uint *)0x0) {
    if ((*(ushort *)(param_1 + 1) >> 8 & 1) == 0) {
      uVar2 = strlen((char *)__s);
      puVar3 = __s;
    }
    else {
      puVar3 = __s + 1;
      uVar2 = (ulong)*__s;
    }
    *param_2 = puVar3;
    *param_3 = (long)puVar3 + (uVar2 & 0xffffffff);
  }
  return bVar1 && __s != (uint *)0x0;
}


// ===== 004dfbf8  FUN_004dfbf8 =====

void FUN_004dfbf8(char *param_1,char *param_2)

{
  char *__src;
  size_t __n;
  long lVar1;
  ulong uVar2;
  uint *__s;
  uint *puVar3;
  undefined1 auStack_140 [264];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  switch(*(ushort *)(param_2 + 8) & 0xff) {
  case 1:
    if (*(long *)(lVar1 + 0x28) == local_38) {
      FUN_004e2aa0(param_1,*(undefined8 *)param_2);
      return;
    }
    break;
  case 2:
    if (*(long *)(lVar1 + 0x28) == local_38) {
      FUN_004e2bc4(param_1,*(undefined8 *)param_2);
      return;
    }
    break;
  case 3:
    if (*(long *)(lVar1 + 0x28) == local_38) {
      FUN_004e2c48(param_1,*(undefined8 *)param_2,0x11,0);
      return;
    }
    break;
  case 4:
    __s = *(uint **)param_2;
    if (__s != (uint *)0x0) {
      if ((*(ushort *)(param_2 + 8) >> 8 & 1) == 0) {
        uVar2 = strlen((char *)__s);
        puVar3 = __s;
      }
      else {
        puVar3 = __s + 1;
        uVar2 = (ulong)*__s;
      }
      if (*(long *)(lVar1 + 0x28) == local_38) {
        FUN_0046d824(param_1,puVar3,uVar2 & 0xffffffff);
        return;
      }
      break;
    }
  case 0:
    param_1[0x17] = '\0';
    *param_1 = '\0';
LAB_004dfd40:
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
    break;
  case 5:
    __src = "true";
    __n = 4;
    if (*param_2 == '\0') {
      __n = 5;
      __src = "false";
    }
    param_1[0x17] = (char)__n;
    if ((param_1 <= __src) && (__src < param_1 + __n)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memcpy(param_1,__src,__n);
    param_1[__n] = '\0';
    goto LAB_004dfd40;
  default:
    FUN_004df390(auStack_140);
    FUN_004df444(auStack_140,"Type is not convertible to string");
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004dfde0  FUN_004dfde0 =====

void FUN_004dfde0(double *param_1)

{
  long lVar1;
  double dVar2;
  undefined1 auStack_130 [264];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  dVar2 = (double)(ulong)*(byte *)(param_1 + 1);
  switch(dVar2) {
  case 0.0:
    break;
  case 4.94065645841247e-324:
    dVar2 = *param_1;
    if (dVar2 != (double)(long)SUB84(dVar2,0)) {
      FUN_004df390(auStack_130);
      FUN_004df444(auStack_130,"LargestInt out of Int range");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    break;
  case 9.88131291682493e-324:
    dVar2 = *param_1;
    if ((ulong)dVar2 >> 0x1f != 0) {
      FUN_004df390(auStack_130);
      FUN_004df444(auStack_130,"LargestUInt out of Int range");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    break;
  case 1.48219693752374e-323:
    dVar2 = *param_1;
    if ((dVar2 < -2147483648.0 != NAN(dVar2)) || (2147483647.0 < dVar2)) {
      FUN_004df390(auStack_130);
      FUN_004df444(auStack_130,"double out of Int range");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    dVar2 = (double)(ulong)(uint)(int)dVar2;
    break;
  default:
    FUN_004df390(auStack_130);
    FUN_004df444(auStack_130,"Value is not convertible to Int.");
                    /* WARNING: Subroutine does not return */
    abort();
  case 2.47032822920623e-323:
    dVar2 = (double)(ulong)*(byte *)param_1;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(dVar2);
}


// ===== 004dff08  FUN_004dff08 =====

void FUN_004dff08(double *param_1)

{
  long lVar1;
  double dVar2;
  undefined1 auStack_130 [264];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  dVar2 = (double)(ulong)*(byte *)(param_1 + 1);
  switch(dVar2) {
  case 0.0:
    break;
  case 4.94065645841247e-324:
    dVar2 = *param_1;
    if ((ulong)dVar2 >> 0x20 != 0) {
      FUN_004df390(auStack_130);
      FUN_004df444(auStack_130,"LargestInt out of UInt range");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    break;
  case 9.88131291682493e-324:
    dVar2 = *param_1;
    if ((ulong)dVar2 >> 0x20 != 0) {
      FUN_004df390(auStack_130);
      FUN_004df444(auStack_130,"LargestUInt out of UInt range");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    break;
  case 1.48219693752374e-323:
    dVar2 = *param_1;
    if ((dVar2 < 0.0 != NAN(dVar2)) || (4294967295.0 < dVar2)) {
      FUN_004df390(auStack_130);
      FUN_004df444(auStack_130,"double out of UInt range");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    dVar2 = (double)(ulong)(uint)(int)dVar2;
    break;
  default:
    FUN_004df390(auStack_130);
    FUN_004df444(auStack_130,"Value is not convertible to UInt.");
                    /* WARNING: Subroutine does not return */
    abort();
  case 2.47032822920623e-323:
    dVar2 = (double)(ulong)*(byte *)param_1;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(dVar2);
}


// ===== 004e0028  FUN_004e0028 =====

void FUN_004e0028(double *param_1)

{
  long lVar1;
  double dVar2;
  undefined1 auStack_130 [264];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  dVar2 = (double)(ulong)*(byte *)(param_1 + 1);
  switch(dVar2) {
  case 0.0:
    break;
  case 9.88131291682493e-324:
    if ((long)*param_1 < 0) {
      FUN_004df390(auStack_130);
      FUN_004df444(auStack_130,"LargestUInt out of Int64 range");
                    /* WARNING: Subroutine does not return */
      abort();
    }
  case 4.94065645841247e-324:
    dVar2 = *param_1;
    break;
  case 1.48219693752374e-323:
    dVar2 = *param_1;
    if ((dVar2 < -9.223372036854776e+18 != NAN(dVar2)) || (9.223372036854776e+18 < dVar2)) {
      FUN_004df390(auStack_130);
      FUN_004df444(auStack_130,"double out of Int64 range");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    dVar2 = (double)(long)dVar2;
    break;
  default:
    FUN_004df390(auStack_130);
    FUN_004df444(auStack_130,"Value is not convertible to Int64.");
                    /* WARNING: Subroutine does not return */
    abort();
  case 2.47032822920623e-323:
    dVar2 = (double)(ulong)*(byte *)param_1;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(dVar2);
}


// ===== 004e0124  FUN_004e0124 =====

void FUN_004e0124(double *param_1)

{
  long lVar1;
  double dVar2;
  undefined1 auStack_130 [264];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  dVar2 = (double)(ulong)*(byte *)(param_1 + 1);
  switch(dVar2) {
  case 0.0:
    break;
  case 4.94065645841247e-324:
    if ((long)*param_1 < 0) {
      FUN_004df390(auStack_130);
      FUN_004df444(auStack_130,"LargestInt out of UInt64 range");
                    /* WARNING: Subroutine does not return */
      abort();
    }
  case 9.88131291682493e-324:
    dVar2 = *param_1;
    break;
  case 1.48219693752374e-323:
    dVar2 = *param_1;
    if ((dVar2 < 0.0 != NAN(dVar2)) || (1.8446744073709552e+19 < dVar2)) {
      FUN_004df390(auStack_130);
      FUN_004df444(auStack_130,"double out of UInt64 range");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    dVar2 = (double)(long)dVar2;
    break;
  default:
    FUN_004df390(auStack_130);
    FUN_004df444(auStack_130,"Value is not convertible to UInt64.");
                    /* WARNING: Subroutine does not return */
    abort();
  case 2.47032822920623e-323:
    dVar2 = (double)(ulong)*(byte *)param_1;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(dVar2);
}


// ===== 004e0218  thunk_FUN_004e0028 =====

void thunk_FUN_004e0028(double *param_1)

{
  long lVar1;
  double dVar2;
  undefined1 auStack_130 [264];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  dVar2 = (double)(ulong)*(byte *)(param_1 + 1);
  switch(dVar2) {
  case 0.0:
    break;
  case 9.88131291682493e-324:
    if ((long)*param_1 < 0) {
      FUN_004df390(auStack_130);
      FUN_004df444(auStack_130,"LargestUInt out of Int64 range");
                    /* WARNING: Subroutine does not return */
      abort();
    }
  case 4.94065645841247e-324:
    dVar2 = *param_1;
    break;
  case 1.48219693752374e-323:
    dVar2 = *param_1;
    if ((dVar2 < -9.223372036854776e+18 != NAN(dVar2)) || (9.223372036854776e+18 < dVar2)) {
      FUN_004df390(auStack_130);
      FUN_004df444(auStack_130,"double out of Int64 range");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    dVar2 = (double)(long)dVar2;
    break;
  default:
    FUN_004df390(auStack_130);
    FUN_004df444(auStack_130,"Value is not convertible to Int64.");
                    /* WARNING: Subroutine does not return */
    abort();
  case 2.47032822920623e-323:
    dVar2 = (double)(ulong)*(byte *)param_1;
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(dVar2);
}


// ===== 004e021c  thunk_FUN_004e0124 =====

void thunk_FUN_004e0124(double *param_1)

{
  long lVar1;
  double dVar2;
  undefined1 auStack_130 [264];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  dVar2 = (double)(ulong)*(byte *)(param_1 + 1);
  switch(dVar2) {
  case 0.0:
    break;
  case 4.94065645841247e-324:
    if ((long)*param_1 < 0) {
      FUN_004df390(auStack_130);
      FUN_004df444(auStack_130,"LargestInt out of UInt64 range");
                    /* WARNING: Subroutine does not return */
      abort();
    }
  case 9.88131291682493e-324:
    dVar2 = *param_1;
    break;
  case 1.48219693752374e-323:
    dVar2 = *param_1;
    if ((dVar2 < 0.0 != NAN(dVar2)) || (1.8446744073709552e+19 < dVar2)) {
      FUN_004df390(auStack_130);
      FUN_004df444(auStack_130,"double out of UInt64 range");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    dVar2 = (double)(long)dVar2;
    break;
  default:
    FUN_004df390(auStack_130);
    FUN_004df444(auStack_130,"Value is not convertible to UInt64.");
                    /* WARNING: Subroutine does not return */
    abort();
  case 2.47032822920623e-323:
    dVar2 = (double)(ulong)*(byte *)param_1;
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(dVar2);
}


// ===== 004e0220  FUN_004e0220 =====

undefined1  [16] FUN_004e0220(double *param_1)

{
  long lVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_130 [264];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  dVar2 = 0.0;
  switch(*(char *)(param_1 + 1)) {
  case '\0':
    break;
  case '\x01':
    dVar2 = (double)(long)*param_1;
    break;
  case '\x02':
    if (*(long *)(lVar1 + 0x28) != local_28) goto LAB_004e02f4;
    dVar2 = (double)NEON_fmadd((double)((ulong)*param_1 >> 1),0x4000000000000000,
                               (double)((ulong)*param_1 & 1));
    goto LAB_004e02c8;
  case '\x03':
    dVar2 = *param_1;
    break;
  default:
    FUN_004df390(0,auStack_130);
    FUN_004df444(auStack_130,"Value is not convertible to double.");
                    /* WARNING: Subroutine does not return */
    abort();
  case '\x05':
    dVar2 = 0.0;
    if (*(char *)param_1 != '\0') {
      dVar2 = 1.0;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
LAB_004e02f4:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(dVar2);
  }
LAB_004e02c8:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar2;
  return auVar3;
}


// ===== 004e02f8  FUN_004e02f8 =====

void FUN_004e02f8(double *param_1)

{
  long lVar1;
  float fVar2;
  double dVar3;
  undefined1 auStack_130 [264];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  fVar2 = 0.0;
  switch(*(char *)(param_1 + 1)) {
  case '\0':
    break;
  case '\x01':
    fVar2 = (float)(long)*param_1;
    break;
  case '\x02':
    dVar3 = (double)NEON_fmadd((double)((ulong)*param_1 >> 1),0x4000000000000000,
                               (double)((ulong)*param_1 & 1));
    goto LAB_004e0380;
  case '\x03':
    dVar3 = *param_1;
LAB_004e0380:
    fVar2 = (float)dVar3;
    break;
  default:
    FUN_004df390(0,auStack_130);
    FUN_004df444(auStack_130,"Value is not convertible to float.");
                    /* WARNING: Subroutine does not return */
    abort();
  case '\x05':
    fVar2 = 0.0;
    if (*(char *)param_1 != '\0') {
      fVar2 = 1.0;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(fVar2);
  }
  return;
}


// ===== 004e03c4  FUN_004e03c4 =====

void FUN_004e03c4(double *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  double dVar4;
  undefined1 auStack_130 [264];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  bVar2 = false;
  switch(*(char *)(param_1 + 1)) {
  case '\0':
    goto switchD_004e0408_caseD_0;
  case '\x01':
  case '\x02':
    bVar2 = *param_1 == 0.0;
    break;
  case '\x03':
    dVar4 = *param_1;
    if (dVar4 == 0.0) {
      iVar3 = 0x10;
    }
    else if (NAN(dVar4)) {
      iVar3 = 2;
    }
    else if (ABS(dVar4) == INFINITY) {
      iVar3 = 1;
    }
    else {
      iVar3 = 4;
      if (ABS(dVar4) < 2.2250738585072014e-308) {
        iVar3 = 8;
      }
    }
    bVar2 = true;
    if (iVar3 != 0x10) {
      bVar2 = iVar3 == 2;
    }
    break;
  default:
    FUN_004df390(auStack_130);
    FUN_004df444(auStack_130,"Value is not convertible to bool.");
                    /* WARNING: Subroutine does not return */
    abort();
  case '\x05':
    bVar2 = *(char *)param_1 == '\0';
  }
  bVar2 = !bVar2;
switchD_004e0408_caseD_0:
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


// ===== 004e04c8  FUN_004e04c8 =====

int FUN_004e04c8(long *param_1)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  if ((char)param_1[1] == '\a') {
    return *(int *)(*param_1 + 0x10);
  }
  if (((char)param_1[1] == '\x06') && (*(long *)(*param_1 + 0x10) != 0)) {
    plVar2 = (long *)(*param_1 + 8);
    plVar4 = (long *)*plVar2;
    if (plVar4 == (long *)0x0) {
      do {
        plVar3 = (long *)plVar2[2];
        bVar1 = (long *)*plVar3 == plVar2;
        plVar2 = plVar3;
      } while (bVar1);
    }
    else {
      do {
        plVar3 = plVar4;
        plVar4 = (long *)plVar3[1];
      } while ((long *)plVar3[1] != (long *)0x0);
    }
    return (int)plVar3[5] + 1;
  }
  return 0;
}


// ===== 004e0534  FUN_004e0534 =====

bool FUN_004e0534(long *param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  bVar1 = *(byte *)(param_1 + 1);
  uVar3 = (uint)bVar1;
  if (bVar1 != 0) {
    if (bVar1 == 7) {
      uVar3 = *(uint *)(*param_1 + 0x10);
    }
    else {
      if (bVar1 != 6) {
        return false;
      }
      if (*(long *)(*param_1 + 0x10) == 0) {
        uVar3 = 0;
      }
      else {
        plVar4 = (long *)(*param_1 + 8);
        plVar6 = (long *)*plVar4;
        if (plVar6 == (long *)0x0) {
          do {
            plVar5 = (long *)plVar4[2];
            bVar2 = (long *)*plVar5 == plVar4;
            plVar4 = plVar5;
          } while (bVar2);
        }
        else {
          do {
            plVar5 = plVar6;
            plVar6 = (long *)plVar5[1];
          } while ((long *)plVar5[1] != (long *)0x0);
        }
        uVar3 = (int)plVar5[5] + 1;
      }
    }
  }
  return uVar3 == 0;
}


// ===== 004e05b4  FUN_004e05b4 =====

bool FUN_004e05b4(long param_1)

{
  return *(char *)(param_1 + 8) == '\0';
}


// ===== 004e05c4  FUN_004e05c4 =====

bool FUN_004e05c4(long param_1)

{
  return *(char *)(param_1 + 8) == '\x06';
}


// ===== 004e05d4  FUN_004e05d4 =====

bool FUN_004e05d4(long param_1)

{
  return *(char *)(param_1 + 8) == '\a';
}


// ===== 004e05e4  FUN_004e05e4 =====

long * FUN_004e05e4(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  void *local_180;
  uint local_178;
  void *local_170;
  uint local_168;
  undefined8 local_160;
  long local_158;
  long lStack_150;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if ((char)param_1[1] == '\0') {
    local_158 = 0;
    lStack_150 = 0;
    local_160 = 0;
    local_168 = CONCAT22(local_168._2_2_,6);
    puVar6 = (undefined8 *)operator_new(0x18);
    uVar2 = *(uint *)(param_1 + 1);
    puVar6[2] = 0;
    local_170 = (void *)*param_1;
    puVar6[1] = 0;
    *puVar6 = puVar6 + 1;
    *param_1 = (long)puVar6;
    *(uint *)(param_1 + 1) = local_168;
    local_168 = uVar2;
    FUN_004dfa98(&local_160,param_1 + 2);
    lVar12 = param_1[4];
    lVar7 = param_1[3];
    param_1[4] = lStack_150;
    param_1[3] = local_158;
    local_158 = lVar7;
    lStack_150 = lVar12;
    FUN_004df880(&local_170);
  }
  else if ((char)param_1[1] != '\x06') {
    FUN_004df390(&local_170);
    FUN_004df444(&local_170,"in Json::Value::operator[](ArrayIndex): requires arrayValue");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_180 = (void *)0x0;
  plVar8 = (long *)(*param_1 + 8);
  local_178 = param_2;
  if ((long *)*plVar8 != (long *)0x0) {
    uVar2 = param_2 >> 2;
    plVar9 = plVar8;
    plVar10 = (long *)*plVar8;
    do {
      while( true ) {
        if ((void *)plVar10[4] != (void *)0x0) break;
        if (param_2 <= *(uint *)(plVar10 + 5)) goto LAB_004e071c;
LAB_004e06d4:
        plVar10 = (long *)plVar10[1];
        if (plVar10 == (long *)0x0) goto LAB_004e0728;
      }
      uVar3 = *(uint *)(plVar10 + 5) >> 2;
      uVar1 = uVar2;
      if (uVar3 <= uVar2) {
        uVar1 = uVar3;
      }
      iVar5 = memcmp((void *)plVar10[4],(void *)0x0,(ulong)uVar1);
      if ((iVar5 < 0) || ((uVar3 < uVar2 && (iVar5 == 0)))) goto LAB_004e06d4;
LAB_004e071c:
      plVar11 = (long *)*plVar10;
      plVar9 = plVar10;
      plVar10 = plVar11;
    } while (plVar11 != (long *)0x0);
LAB_004e0728:
    if (plVar9 != plVar8) {
      plVar10 = plVar9 + 4;
      plVar8 = plVar9;
      if ((void *)*plVar10 == (void *)0x0) {
        if (*(uint *)(plVar9 + 5) == param_2) goto LAB_004e07f8;
      }
      else if ((uVar2 == *(uint *)(plVar9 + 5) >> 2) &&
              (iVar5 = memcmp((void *)*plVar10,(void *)0x0,(ulong)uVar2), iVar5 == 0))
      goto LAB_004e07f8;
    }
  }
  if (((DAT_00d610d0 & 1) == 0) && (iVar5 = FUN_0054fdd4(&DAT_00d610d0), iVar5 != 0)) {
    DAT_00d610c0 = 0;
    DAT_00d610c8 = 0;
    DAT_00d610b8 = 0;
    DAT_00d610b0 = DAT_00d610b0 & 0xfe00;
    __cxa_atexit(FUN_004df880,&DAT_00d610a8,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d610d0);
  }
  FUN_004e0880(&local_170,&local_180,&DAT_00d610a8);
  lVar7 = FUN_004e1f8c(*param_1,plVar8,&local_170,&local_170);
  plVar10 = (long *)(lVar7 + 0x20);
  FUN_004df880(&local_160);
  if ((local_170 != (void *)0x0) && ((local_168 & 3) == 1)) {
    free(local_170);
  }
  if ((local_180 != (void *)0x0) && ((local_178 & 3) == 1)) {
    free(local_180);
  }
LAB_004e07f8:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar10 + 2;
}


// ===== 004e0880  FUN_004e0880 =====

void FUN_004e0880(undefined8 *param_1,long *param_2,long param_3)

{
  long lVar1;
  void *__dest;
  uint uVar2;
  void *__src;
  ulong __n;
  undefined8 uVar3;
  undefined1 auStack_70 [24];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __src = (void *)*param_2;
  __dest = __src;
  if (((*(uint *)(param_2 + 1) & 3) != 0) && (__src != (void *)0x0)) {
    __n = (ulong)(*(uint *)(param_2 + 1) >> 2);
    __dest = malloc(__n + 1);
    if (__dest == (void *)0x0) {
      FUN_004a3cf4(auStack_70,
                   "in Json::Value::duplicateStringValue(): Failed to allocate string value buffer")
      ;
      FUN_004df054(auStack_70);
      goto LAB_004e0994;
    }
    memcpy(__dest,__src,__n);
    *(undefined1 *)((long)__dest + __n) = 0;
  }
  *param_1 = __dest;
  uVar2 = *(uint *)(param_2 + 1) & 3;
  if (*param_2 != 0) {
    uVar2 = (uint)(uVar2 != 0);
  }
  *(uint *)(param_1 + 1) = uVar2 | *(uint *)(param_1 + 1) & 0xfffffffc;
  *(uint *)(param_1 + 1) = *(uint *)(param_2 + 1) & 0xfffffffc | uVar2;
  param_1[4] = 0;
  FUN_004df620(param_1 + 2,param_3);
  FUN_004e0b98(param_1 + 4,param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  param_1[6] = *(undefined8 *)(param_3 + 0x20);
  param_1[5] = uVar3;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_004e0994:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004e0998  FUN_004e0998 =====

void FUN_004e0998(undefined8 param_1,int param_2)

{
  long lVar1;
  undefined1 auStack_130 [264];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 < 0) {
    FUN_004df390(auStack_130);
    FUN_004df444(auStack_130,"in Json::Value::operator[](int index): index cannot be negative");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    FUN_004e05e4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004e09f8  FUN_004e09f8 =====

undefined * FUN_004e09f8(long *param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  void *local_140;
  uint local_138;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((char)param_1[1] == '\0') {
    if ((DAT_00d610d0 & 1) == 0) {
      iVar2 = FUN_0054fdd4(&DAT_00d610d0);
      puVar4 = &DAT_00d610a8;
      if (iVar2 != 0) {
        DAT_00d610b0 = DAT_00d610b0 & 0xfe00;
        DAT_00d610c0 = 0;
        DAT_00d610c8 = 0;
        DAT_00d610b8 = 0;
        __cxa_atexit(FUN_004df880,&DAT_00d610a8,&PTR_LOOP_00d19390);
        FUN_0054ff1c(&DAT_00d610d0);
      }
    }
    else {
      puVar4 = &DAT_00d610a8;
    }
  }
  else {
    if ((char)param_1[1] != '\x06') {
      FUN_004df390(&local_140);
      FUN_004df444(&local_140,"in Json::Value::operator[](ArrayIndex)const: requires arrayValue");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_140 = (void *)0x0;
    local_138 = param_2;
    lVar3 = FUN_004e1e98(*param_1,&local_140);
    if (*param_1 + 8 == lVar3) {
      if ((DAT_00d610d0 & 1) == 0) {
        iVar2 = FUN_0054fdd4(&DAT_00d610d0);
        puVar4 = &DAT_00d610a8;
        if (iVar2 != 0) {
          DAT_00d610b0 = DAT_00d610b0 & 0xfe00;
          DAT_00d610c0 = 0;
          DAT_00d610c8 = 0;
          DAT_00d610b8 = 0;
          __cxa_atexit(FUN_004df880,&DAT_00d610a8,&PTR_LOOP_00d19390);
          FUN_0054ff1c(&DAT_00d610d0);
          puVar4 = &DAT_00d610a8;
        }
      }
      else {
        puVar4 = &DAT_00d610a8;
      }
    }
    else {
      puVar4 = (undefined *)(lVar3 + 0x30);
    }
    if ((local_140 != (void *)0x0) && ((local_138 & 3) == 1)) {
      free(local_140);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004e0b98  FUN_004e0b98 =====

undefined8 * FUN_004e0b98(undefined8 *param_1,long *param_2)

{
  char cVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = *param_2;
  if (lVar3 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = operator_new(0x48);
    FUN_004e27a0(pvVar2,lVar3);
  }
  puVar4 = (undefined8 *)*param_1;
  *param_1 = pvVar2;
  if (puVar4 != (undefined8 *)0x0) {
    if (*(char *)((long)puVar4 + 0x47) < '\0') {
      operator_delete((void *)puVar4[6]);
      cVar1 = *(char *)((long)puVar4 + 0x2f);
    }
    else {
      cVar1 = *(char *)((long)puVar4 + 0x2f);
    }
    if (cVar1 < '\0') {
      operator_delete((void *)puVar4[3]);
      cVar1 = *(char *)((long)puVar4 + 0x17);
    }
    else {
      cVar1 = *(char *)((long)puVar4 + 0x17);
    }
    if (cVar1 < '\0') {
      operator_delete((void *)*puVar4);
    }
    operator_delete(puVar4);
    return param_1;
  }
  return param_1;
}


// ===== 004e0c3c  FUN_004e0c3c =====

long * FUN_004e0c3c(long *param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  size_t sVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  char *local_188;
  uint local_180;
  void *local_178;
  uint local_170;
  undefined8 local_168;
  long local_160;
  long lStack_158;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  if ((char)param_1[1] == '\0') {
    local_160 = 0;
    lStack_158 = 0;
    local_168 = 0;
    local_170 = CONCAT22(local_170._2_2_,7);
    puVar7 = (undefined8 *)operator_new(0x18);
    uVar3 = *(uint *)(param_1 + 1);
    puVar7[2] = 0;
    local_178 = (void *)*param_1;
    puVar7[1] = 0;
    *puVar7 = puVar7 + 1;
    *param_1 = (long)puVar7;
    *(uint *)(param_1 + 1) = local_170;
    local_170 = uVar3;
    FUN_004dfa98(&local_168,param_1 + 2);
    lVar14 = param_1[4];
    lVar9 = param_1[3];
    param_1[4] = lStack_158;
    param_1[3] = local_160;
    local_160 = lVar9;
    lStack_158 = lVar14;
    FUN_004df880(&local_178);
  }
  else if ((char)param_1[1] != '\a') {
    FUN_004df390(&local_178);
    FUN_004df444(&local_178,"in Json::Value::resolveReference(): requires objectValue");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  sVar8 = strlen(param_2);
  uVar3 = (uint)sVar8 * 4;
  plVar10 = (long *)(*param_1 + 8);
  local_188 = param_2;
  local_180 = uVar3;
  if ((long *)*plVar10 != (long *)0x0) {
    uVar1 = (uint)sVar8 & 0x3fffffff;
    plVar12 = (long *)*plVar10;
    plVar13 = plVar10;
    do {
      while( true ) {
        plVar11 = plVar12;
        if ((void *)plVar11[4] != (void *)0x0) break;
        if (uVar3 <= *(uint *)(plVar11 + 5)) goto LAB_004e0d84;
LAB_004e0d3c:
        plVar12 = (long *)plVar11[1];
        if ((long *)plVar11[1] == (long *)0x0) goto LAB_004e0d90;
      }
      uVar4 = *(uint *)(plVar11 + 5) >> 2;
      uVar2 = uVar1;
      if (uVar4 <= uVar1) {
        uVar2 = uVar4;
      }
      iVar6 = memcmp((void *)plVar11[4],param_2,(ulong)uVar2);
      if ((iVar6 < 0) || (uVar4 < uVar1 && iVar6 == 0)) goto LAB_004e0d3c;
LAB_004e0d84:
      plVar12 = (long *)*plVar11;
      plVar13 = plVar11;
    } while ((long *)*plVar11 != (long *)0x0);
LAB_004e0d90:
    if (plVar13 != plVar10) {
      plVar12 = plVar13 + 4;
      plVar10 = plVar13;
      if ((void *)*plVar12 == (void *)0x0) {
        if (*(uint *)(plVar13 + 5) == uVar3) goto LAB_004e0e48;
      }
      else if ((uVar1 == *(uint *)(plVar13 + 5) >> 2) &&
              (iVar6 = memcmp((void *)*plVar12,param_2,sVar8 & 0x3fffffff), iVar6 == 0))
      goto LAB_004e0e48;
    }
  }
  if (((DAT_00d610d0 & 1) == 0) && (iVar6 = FUN_0054fdd4(&DAT_00d610d0), iVar6 != 0)) {
    DAT_00d610c0 = 0;
    DAT_00d610c8 = 0;
    DAT_00d610b8 = 0;
    DAT_00d610b0 = DAT_00d610b0 & 0xfe00;
    __cxa_atexit(FUN_004df880,&DAT_00d610a8,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d610d0);
  }
  FUN_004e0880(&local_178,&local_188,&DAT_00d610a8);
  lVar9 = FUN_004e1f8c(*param_1,plVar10,&local_178,&local_178);
  plVar12 = (long *)(lVar9 + 0x20);
  FUN_004df880(&local_168);
  param_2 = local_188;
  if ((local_178 != (void *)0x0) && ((local_170 & 3) == 1)) {
    free(local_178);
    param_2 = local_188;
  }
LAB_004e0e48:
  if ((param_2 != (char *)0x0) && ((local_180 & 3) == 1)) {
    free(param_2);
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return plVar12 + 2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004e0eec  FUN_004e0eec =====

long * FUN_004e0eec(long *param_1,void *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  void *local_188;
  uint local_180;
  void *local_178;
  uint local_170;
  undefined8 local_168;
  long local_160;
  long lStack_158;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  if ((char)param_1[1] == '\0') {
    local_160 = 0;
    lStack_158 = 0;
    local_168 = 0;
    local_170 = CONCAT22(local_170._2_2_,7);
    puVar6 = (undefined8 *)operator_new(0x18);
    uVar9 = *(uint *)(param_1 + 1);
    puVar6[2] = 0;
    local_178 = (void *)*param_1;
    puVar6[1] = 0;
    *puVar6 = puVar6 + 1;
    *param_1 = (long)puVar6;
    *(uint *)(param_1 + 1) = local_170;
    local_170 = uVar9;
    FUN_004dfa98(&local_168,param_1 + 2);
    lVar13 = param_1[4];
    lVar7 = param_1[3];
    param_1[4] = lStack_158;
    param_1[3] = local_160;
    local_160 = lVar7;
    lStack_158 = lVar13;
    FUN_004df880(&local_178);
  }
  else if ((char)param_1[1] != '\a') {
    FUN_004df390(&local_178);
    FUN_004df444(&local_178,"in Json::Value::resolveReference(key, end): requires objectValue");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar9 = (uint)(param_3 - (long)param_2);
  uVar3 = uVar9 << 2 | 2;
  plVar8 = (long *)(*param_1 + 8);
  local_188 = param_2;
  local_180 = uVar3;
  if ((long *)*plVar8 != (long *)0x0) {
    uVar9 = uVar9 & 0x3fffffff;
    plVar10 = plVar8;
    plVar11 = (long *)*plVar8;
    do {
      while( true ) {
        if ((void *)plVar11[4] != (void *)0x0) break;
        if (uVar3 <= *(uint *)(plVar11 + 5)) goto LAB_004e1034;
LAB_004e0fec:
        plVar11 = (long *)plVar11[1];
        if (plVar11 == (long *)0x0) goto LAB_004e1040;
      }
      uVar2 = *(uint *)(plVar11 + 5) >> 2;
      uVar1 = uVar9;
      if (uVar2 <= uVar9) {
        uVar1 = uVar2;
      }
      iVar5 = memcmp((void *)plVar11[4],param_2,(ulong)uVar1);
      if ((iVar5 < 0) || ((uVar2 < uVar9 && (iVar5 == 0)))) goto LAB_004e0fec;
LAB_004e1034:
      plVar12 = (long *)*plVar11;
      plVar10 = plVar11;
      plVar11 = plVar12;
    } while (plVar12 != (long *)0x0);
LAB_004e1040:
    if (plVar10 != plVar8) {
      plVar11 = plVar10 + 4;
      plVar8 = plVar10;
      if ((void *)*plVar11 == (void *)0x0) {
        if (*(uint *)(plVar10 + 5) == uVar3) goto LAB_004e10f8;
      }
      else if ((uVar9 == *(uint *)(plVar10 + 5) >> 2) &&
              (iVar5 = memcmp((void *)*plVar11,param_2,param_3 - (long)param_2 & 0x3fffffff),
              iVar5 == 0)) goto LAB_004e10f8;
    }
  }
  if (((DAT_00d610d0 & 1) == 0) && (iVar5 = FUN_0054fdd4(&DAT_00d610d0), iVar5 != 0)) {
    DAT_00d610c0 = 0;
    DAT_00d610c8 = 0;
    DAT_00d610b8 = 0;
    DAT_00d610b0 = DAT_00d610b0 & 0xfe00;
    __cxa_atexit(FUN_004df880,&DAT_00d610a8,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d610d0);
  }
  FUN_004e0880(&local_178,&local_188,&DAT_00d610a8);
  lVar7 = FUN_004e1f8c(*param_1,plVar8,&local_178,&local_178);
  plVar11 = (long *)(lVar7 + 0x20);
  FUN_004df880(&local_168);
  param_2 = local_188;
  if ((local_178 != (void *)0x0) && ((local_170 & 3) == 1)) {
    free(local_178);
    param_2 = local_188;
  }
LAB_004e10f8:
  if ((param_2 != (void *)0x0) && ((local_180 & 3) == 1)) {
    free(param_2);
  }
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar11 + 2;
}


// ===== 004e119c  FUN_004e119c =====

bool FUN_004e119c(long *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  if ((char)param_1[1] == '\a') {
    uVar2 = *(uint *)(*param_1 + 0x10);
  }
  else if (((char)param_1[1] == '\x06') && (*(long *)(*param_1 + 0x10) != 0)) {
    plVar3 = (long *)(*param_1 + 8);
    plVar5 = (long *)*plVar3;
    if (plVar5 == (long *)0x0) {
      do {
        plVar4 = (long *)plVar3[2];
        bVar1 = (long *)*plVar4 == plVar3;
        plVar3 = plVar4;
      } while (bVar1);
    }
    else {
      do {
        plVar4 = plVar5;
        plVar5 = (long *)plVar4[1];
      } while ((long *)plVar4[1] != (long *)0x0);
    }
    uVar2 = (int)plVar4[5] + 1;
  }
  else {
    uVar2 = 0;
  }
  return param_2 < uVar2;
}


// ===== 004e1210  FUN_004e1210 =====

long FUN_004e1210(long *param_1,void *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *local_140;
  uint local_138;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((char)param_1[1] == '\0') {
    lVar3 = 0;
  }
  else {
    if ((char)param_1[1] != '\a') {
      FUN_004df390(&local_140);
      FUN_004df444(&local_140,"in Json::Value::find(begin, end): requires objectValue or nullValue")
      ;
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_138 = (param_3 - (int)param_2) * 4;
    local_140 = param_2;
    lVar2 = FUN_004e1e98(*param_1,&local_140);
    lVar3 = 0;
    if (*param_1 + 8 != lVar2) {
      lVar3 = lVar2 + 0x30;
    }
    if ((local_140 != (void *)0x0) && ((local_138 & 3) == 1)) {
      free(local_140);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004e12e0  FUN_004e12e0 =====

undefined * FUN_004e12e0(undefined8 param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  undefined *puVar3;
  
  sVar2 = strlen(param_2);
  puVar3 = (undefined *)FUN_004e1210(param_1,param_2,param_2 + sVar2);
  if (puVar3 == (undefined *)0x0) {
    if ((DAT_00d610d0 & 1) == 0) {
      iVar1 = FUN_0054fdd4(&DAT_00d610d0);
      puVar3 = &DAT_00d610a8;
      if (iVar1 != 0) {
        DAT_00d610b0 = DAT_00d610b0 & 0xfe00;
        DAT_00d610c0 = 0;
        DAT_00d610c8 = 0;
        DAT_00d610b8 = 0;
        __cxa_atexit(FUN_004df880,&DAT_00d610a8,&PTR_LOOP_00d19390);
        FUN_0054ff1c(&DAT_00d610d0);
      }
    }
    else {
      puVar3 = &DAT_00d610a8;
    }
  }
  return puVar3;
}


// ===== 004e138c  FUN_004e138c =====

undefined * FUN_004e138c(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined *puVar4;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  puVar4 = (undefined *)FUN_004e1210(param_1,puVar2,(long)puVar2 + uVar1);
  if (puVar4 == (undefined *)0x0) {
    if ((DAT_00d610d0 & 1) == 0) {
      iVar3 = FUN_0054fdd4(&DAT_00d610d0);
      puVar4 = &DAT_00d610a8;
      if (iVar3 != 0) {
        DAT_00d610b0 = DAT_00d610b0 & 0xfe00;
        DAT_00d610c0 = 0;
        DAT_00d610c8 = 0;
        DAT_00d610b8 = 0;
        __cxa_atexit(FUN_004df880,&DAT_00d610a8,&PTR_LOOP_00d19390);
        FUN_0054ff1c(&DAT_00d610d0);
      }
    }
    else {
      puVar4 = &DAT_00d610a8;
    }
  }
  return puVar4;
}


// ===== 004e1438  FUN_004e1438 =====

void FUN_004e1438(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  FUN_004e0eec(param_1,param_2,param_2 + sVar1);
  return;
}


// ===== 004e146c  FUN_004e146c =====

void FUN_004e146c(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  FUN_004e0eec(param_1,puVar2,(long)puVar2 + uVar1);
  return;
}


// ===== 004e148c  FUN_004e148c =====

void FUN_004e148c(undefined8 param_1,undefined8 *param_2)

{
  FUN_004e0c3c(param_1,*param_2);
  return;
}


// ===== 004e1494  FUN_004e1494 =====

undefined8 FUN_004e1494(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = 0;
  FUN_004df620(auStack_60);
  FUN_004e0b98(&local_50,param_2 + 0x10);
  uStack_40 = *(undefined8 *)(param_2 + 0x20);
  local_48 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = FUN_004e1528(param_1,auStack_60);
  FUN_004df880(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004e1528  FUN_004e1528 =====

long FUN_004e1528(long *param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long local_150;
  undefined4 local_148;
  undefined8 local_140;
  long local_138;
  long lStack_130;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  cVar1 = (char)param_1[1];
  if (cVar1 == '\0') {
    local_138 = 0;
    lStack_130 = 0;
    local_140 = 0;
    local_148 = CONCAT22(local_148._2_2_,6);
    puVar4 = (undefined8 *)operator_new(0x18);
    lVar5 = param_1[1];
    puVar4[2] = 0;
    local_150 = *param_1;
    puVar4[1] = 0;
    *puVar4 = puVar4 + 1;
    *param_1 = (long)puVar4;
    *(undefined4 *)(param_1 + 1) = local_148;
    local_148 = (int)lVar5;
    FUN_004dfa98(&local_140,param_1 + 2);
    lVar10 = param_1[4];
    lVar5 = param_1[3];
    param_1[4] = lStack_130;
    param_1[3] = local_138;
    local_138 = lVar5;
    lStack_130 = lVar10;
    FUN_004df880(&local_150);
    cVar1 = (char)param_1[1];
  }
  else if (cVar1 != '\x06') {
    FUN_004df390(&local_150);
    FUN_004df444(&local_150,"in Json::Value::append: requires arrayValue");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar5 = *param_1;
  if (cVar1 == '\a') {
    uVar6 = (ulong)*(uint *)(lVar5 + 0x10);
  }
  else if (cVar1 == '\x06') {
    uVar6 = *(ulong *)(lVar5 + 0x10);
    if (uVar6 != 0) {
      plVar9 = *(long **)(lVar5 + 8);
      plVar8 = (long *)(lVar5 + 8);
      if (plVar9 == (long *)0x0) {
        do {
          plVar7 = (long *)plVar8[2];
          bVar3 = (long *)*plVar7 == plVar8;
          plVar8 = plVar7;
        } while (bVar3);
      }
      else {
        do {
          plVar7 = plVar9;
          plVar9 = (long *)plVar7[1];
        } while ((long *)plVar7[1] != (long *)0x0);
      }
      uVar6 = (ulong)((int)plVar7[5] + 1);
    }
  }
  else {
    uVar6 = 0;
  }
  local_150 = CONCAT44(local_150._4_4_,(int)uVar6);
  lVar5 = FUN_004e2554(lVar5,&local_150,param_2);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar5 + 0x30;
}


// ===== 004e169c  FUN_004e169c =====

void FUN_004e169c(long param_1,undefined8 param_2,char *param_3,long param_4)

{
  size_t sVar1;
  long lVar2;
  undefined8 uVar3;
  
  sVar1 = strlen(param_3);
  lVar2 = FUN_004e1210(param_2,param_3,param_3 + sVar1);
  if (lVar2 != 0) {
    param_4 = lVar2;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_004df620(param_1,param_4);
  FUN_004e0b98((undefined8 *)(param_1 + 0x10),param_4 + 0x10);
  uVar3 = *(undefined8 *)(param_4 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_4 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  return;
}


// ===== 004e1714  FUN_004e1714 =====

bool FUN_004e1714(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  long lVar2;
  
  sVar1 = strlen(param_2);
  lVar2 = FUN_004e1210(param_1,param_2,param_2 + sVar1);
  return lVar2 != 0;
}


// ===== 004e1754  FUN_004e1754 =====

void FUN_004e1754(undefined8 *param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  undefined1 **__dest;
  long lVar7;
  long *plVar8;
  undefined1 *__src;
  ulong __n;
  long *plVar9;
  undefined1 *local_170;
  ulong uStack_168;
  undefined8 local_160;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if ((char)param_2[1] == '\0') {
    if (*(long *)(lVar5 + 0x28) != local_68) goto LAB_004e19ac;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    if ((char)param_2[1] != '\a') {
      FUN_004df390(&local_170);
      FUN_004df444(&local_170,"in Json::Value::getMemberNames(), value must be objectValue");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar7 = *param_2;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    FUN_0047a51c(param_1,*(undefined8 *)(lVar7 + 0x10));
    param_2 = (long *)*param_2;
    plVar9 = (long *)*param_2;
    while (plVar9 != param_2 + 1) {
      __src = (undefined1 *)plVar9[4];
      uVar4 = *(uint *)(plVar9 + 5);
      if ((__src == (undefined1 *)0x0) && (3 < uVar4)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string",0x37e,
                   "__n == 0 || __s != nullptr","basic_string(const char*, n) detected nullptr");
      }
      __n = (ulong)(uVar4 >> 2);
      if (uVar4 < 0x5c) {
        local_160 = CONCAT17((char)(uVar4 >> 2),(undefined7)local_160);
        __dest = &local_170;
      }
      else {
        __dest = (undefined1 **)operator_new((__n | 0xf) + 1);
        local_160 = (__n | 0xf) + 0x8000000000000001;
        local_170 = (undefined1 *)__dest;
        uStack_168 = __n;
      }
      puVar1 = (undefined1 *)((long)__dest + __n);
      if ((__src >= __dest && __src <= puVar1) && (__src < __dest || puVar1 != __src)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      if (3 < uVar4) {
        memmove(__dest,__src,__n);
      }
      puVar2 = (undefined8 *)param_1[1];
      puVar3 = (undefined8 *)param_1[2];
      *puVar1 = 0;
      if (puVar2 < puVar3) {
        if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        puVar2[2] = local_160;
        puVar2[1] = uStack_168;
        *puVar2 = local_170;
        param_1[1] = puVar2 + 3;
        plVar8 = (long *)plVar9[1];
joined_r0x004e18b0:
        if (plVar8 != (long *)0x0) goto LAB_004e1894;
LAB_004e18b4:
        do {
          plVar8 = (long *)plVar9[2];
          bVar6 = (long *)*plVar8 != plVar9;
          plVar9 = plVar8;
        } while (bVar6);
      }
      else {
        FUN_0047a79c(param_1,&local_170);
        if (local_160 < 0) {
          operator_delete(local_170);
          plVar8 = (long *)plVar9[1];
          goto joined_r0x004e18b0;
        }
        plVar8 = (long *)plVar9[1];
        if ((long *)plVar9[1] == (long *)0x0) goto LAB_004e18b4;
LAB_004e1894:
        do {
          plVar9 = plVar8;
          plVar8 = (long *)*plVar9;
        } while (plVar8 != (long *)0x0);
      }
    }
    if (*(long *)(lVar5 + 0x28) != local_68) {
LAB_004e19ac:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return;
}


// ===== 004e19b0  FUN_004e19b0 =====

void FUN_004e19b0(undefined8 *param_1,long *param_2,uint param_3)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    if (2 < param_3) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/array",0xda,
                 "__n < _Size","out-of-bounds access in std::array<T, N>");
    }
    puVar3 = (undefined8 *)(*param_2 + (ulong)param_3 * 0x18);
    if (*(char *)((long)puVar3 + 0x17) < '\0') {
      __src = (undefined8 *)*puVar3;
      uVar2 = puVar3[1];
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
      if ((puVar3 <= __src) && (__src < (undefined8 *)((long)puVar3 + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      memmove(puVar3,__src,uVar2 + 1);
      return;
    }
    uVar5 = puVar3[1];
    uVar4 = *puVar3;
    param_1[2] = puVar3[2];
    param_1[1] = uVar5;
    *param_1 = uVar4;
  }
  return;
}


// ===== 004e1ad4  FUN_004e1ad4 =====

void FUN_004e1ad4(long param_1,char *param_2,uint param_3)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 auStack_170 [264];
  undefined7 local_68;
  undefined1 uStack_61;
  undefined7 uStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  puVar4 = (ulong *)(param_2 + 8);
  uVar9 = *puVar4;
  uVar7 = (ulong)(byte)param_2[0x17];
  uVar6 = (uint)param_2[0x17];
  uVar8 = uVar9;
  if (-1 < (int)uVar6) {
    uVar8 = uVar7;
  }
  if (uVar8 != 0) {
    pcVar10 = *(char **)param_2;
    pcVar11 = pcVar10;
    if (-1 < (int)uVar6) {
      pcVar11 = param_2;
    }
    if (pcVar11[uVar8 - 1] == '\n') {
      uVar9 = uVar8 - 1;
      if ((int)uVar6 < 0) {
        *puVar4 = uVar9;
      }
      else {
        if (0x17 < uVar8) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                     "__s < __min_cap",
                     "__s should never be greater than or equal to the short string capacity");
        }
        param_2[0x17] = (char)uVar9;
        pcVar10 = param_2;
      }
      pcVar10[uVar9] = '\0';
      uVar7 = (ulong)(byte)param_2[0x17];
      uVar9 = *(ulong *)(param_2 + 8);
      uVar6 = (uint)(byte)param_2[0x17];
    }
  }
  cVar1 = (char)uVar6;
  pcVar11 = *(char **)param_2;
  if (-1 < cVar1) {
    uVar9 = uVar7;
  }
  if (uVar9 != 0) {
    pcVar10 = pcVar11;
    if (-1 < cVar1) {
      pcVar10 = param_2;
    }
    if (*pcVar10 != '/') {
      FUN_004df390(auStack_170);
      FUN_004df444(auStack_170,"in Json::Value::setComment(): Comments must start with /");
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  uVar8 = *puVar4;
  uVar5 = *(undefined8 *)(param_2 + 0xf);
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
  local_68 = (undefined7)uVar8;
  uStack_61 = (undefined1)uVar5;
  uStack_60 = (undefined7)((ulong)uVar5 >> 8);
  param_2[0] = '\0';
  param_2[1] = '\0';
  param_2[2] = '\0';
  param_2[3] = '\0';
  param_2[4] = '\0';
  param_2[5] = '\0';
  param_2[6] = '\0';
  param_2[7] = '\0';
  if ((int)param_3 < 3) {
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)operator_new(0x48);
      puVar3[8] = 0;
      *(undefined8 **)(param_1 + 0x10) = puVar3;
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[7] = 0;
      puVar3[6] = 0;
    }
    if (2 < param_3) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/array",0xda,
                 "__n < _Size","out-of-bounds access in std::array<T, N>");
    }
    puVar3 = puVar3 + (ulong)param_3 * 3;
    if (*(char *)((long)puVar3 + 0x17) < '\0') {
      operator_delete((void *)*puVar3);
    }
    *(char *)((long)puVar3 + 0x17) = cVar1;
    *puVar3 = pcVar11;
    puVar3[1] = CONCAT17(uStack_61,local_68);
    *(ulong *)((long)puVar3 + 0xf) = CONCAT71(uStack_60,uStack_61);
  }
  else if ((uVar6 >> 7 & 1) != 0) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
      operator_delete(pcVar11);
      return;
    }
    goto LAB_004e1cdc;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_004e1cdc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004e1ce0  FUN_004e1ce0 =====

bool FUN_004e1ce0(long param_1,uint param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return false;
  }
  if (param_2 < 3) {
    lVar3 = *(long *)(param_1 + 0x10) + (ulong)param_2 * 0x18;
    bVar2 = *(byte *)(lVar3 + 0x17);
    uVar1 = *(ulong *)(lVar3 + 8);
    if (-1 < (char)bVar2) {
      uVar1 = (ulong)bVar2;
    }
    return uVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/array",0xda,"__n < _Size",
             "out-of-bounds access in std::array<T, N>");
}


// ===== 004e1d58  FUN_004e1d58 =====

void FUN_004e1d58(long param_1)

{
  FUN_004e19b0(param_1 + 0x10);
  return;
}


// ===== 004e1d60  FUN_004e1d60 =====

void FUN_004e1d60(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}


// ===== 004e1d68  FUN_004e1d68 =====

void FUN_004e1d68(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}


// ===== 004e1d70  FUN_004e1d70 =====

undefined1  [16] FUN_004e1d70(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  
  if ((*(ushort *)(param_1 + 1) & 0xfe) != 6 || (ulong *)*param_1 == (ulong *)0x0) {
    return ZEXT816(1) << 0x40;
  }
  auVar1._0_8_ = *(ulong *)*param_1;
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 004e1da0  FUN_004e1da0 =====

undefined1  [16] FUN_004e1da0(long *param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar3 = *param_1;
  bVar2 = (*(ushort *)(param_1 + 1) & 0xfe) != 6;
  lVar1 = 0;
  if (!bVar2 && lVar3 != 0) {
    lVar1 = lVar3 + 8;
  }
  auVar4[8] = bVar2 || lVar3 == 0;
  auVar4._0_8_ = lVar1;
  auVar4._9_7_ = 0;
  return auVar4;
}


// ===== 004e1dc4  FUN_004e1dc4 =====

void FUN_004e1dc4(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  
  if ((*(ushort *)(param_2 + 1) & 0xfe) != 6 || (undefined8 *)*param_2 == (undefined8 *)0x0) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  uVar1 = *(undefined8 *)*param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = uVar1;
  return;
}


// ===== 004e1dfc  FUN_004e1dfc =====

void FUN_004e1dfc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if ((*(ushort *)(param_2 + 1) & 0xfe) != 6 || lVar1 == 0) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = lVar1 + 8;
  return;
}


// ===== 004e1e34  FUN_004e1e34 =====

void FUN_004e1e34(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_004e1e34(param_1,*param_2);
    FUN_004e1e34(param_1,param_2[1]);
    FUN_004df880(param_2 + 6);
    if (((void *)param_2[4] != (void *)0x0) && ((*(uint *)(param_2 + 5) & 3) == 1)) {
      free((void *)param_2[4]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}


// ===== 004e1e98  FUN_004e1e98 =====

long * FUN_004e1e98(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  void *__s2;
  long *plVar8;
  long *plVar9;
  
  plVar6 = (long *)(param_1 + 8);
  if ((long *)*plVar6 != (long *)0x0) {
    uVar1 = *(uint *)(param_2 + 1);
    __s2 = (void *)*param_2;
    uVar2 = uVar1 >> 2;
    plVar7 = plVar6;
    plVar8 = (long *)*plVar6;
    do {
      while( true ) {
        if ((void *)plVar8[4] == (void *)0x0) break;
        uVar3 = *(uint *)(plVar8 + 5) >> 2;
        uVar4 = uVar2;
        if (uVar3 <= uVar2) {
          uVar4 = uVar3;
        }
        iVar5 = memcmp((void *)plVar8[4],__s2,(ulong)uVar4);
        if ((-1 < iVar5) && (uVar2 <= uVar3 || iVar5 != 0)) goto LAB_004e1f18;
LAB_004e1ed0:
        plVar8 = (long *)plVar8[1];
        if (plVar8 == (long *)0x0) goto LAB_004e1f24;
      }
      if (*(uint *)(plVar8 + 5) < uVar1) goto LAB_004e1ed0;
LAB_004e1f18:
      plVar9 = (long *)*plVar8;
      plVar7 = plVar8;
      plVar8 = plVar9;
    } while (plVar9 != (long *)0x0);
LAB_004e1f24:
    if (plVar7 != plVar6) {
      if (__s2 == (void *)0x0) {
        if (*(uint *)(plVar7 + 5) <= uVar1) {
          return plVar7;
        }
      }
      else {
        uVar4 = *(uint *)(plVar7 + 5) >> 2;
        uVar1 = uVar4;
        if (uVar2 <= uVar4) {
          uVar1 = uVar2;
        }
        iVar5 = memcmp(__s2,(void *)plVar7[4],(ulong)uVar1);
        if (-1 < iVar5) {
          if (iVar5 != 0) {
            return plVar7;
          }
          if (uVar4 <= uVar2) {
            return plVar7;
          }
        }
      }
    }
  }
  return plVar6;
}


// ===== 004e1f8c  FUN_004e1f8c =====

undefined8 * FUN_004e1f8c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  puVar2 = (undefined8 *)FUN_004e2064(param_1,param_2,&local_50,auStack_58,param_3);
  puVar5 = (undefined8 *)*puVar2;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new(0x58);
    FUN_004e2448(puVar5 + 4,param_4);
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


// ===== 004e2064  FUN_004e2064 =====

long * FUN_004e2064(undefined8 *param_1,long *param_2,long *param_3,long *param_4,
                   undefined8 *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  void *__s1;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  void *__s2;
  uint uVar11;
  long *plVar12;
  
  if (param_1 + 1 == param_2) {
LAB_004e216c:
    if ((long *)*param_1 == param_2) {
      plVar9 = (long *)*param_2;
      plVar7 = param_2;
    }
    else {
      if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xd1,
                   "__x != nullptr","node shouldn\'t be null");
      }
      plVar9 = (long *)*param_2;
      plVar8 = param_2;
      plVar12 = plVar9;
      if (plVar9 == (long *)0x0) {
        do {
          plVar7 = (long *)plVar8[2];
          bVar5 = (long *)*plVar7 == plVar8;
          plVar8 = plVar7;
        } while (bVar5);
      }
      else {
        do {
          plVar7 = plVar12;
          plVar12 = (long *)plVar7[1];
        } while ((long *)plVar7[1] != (long *)0x0);
      }
      if ((void *)plVar7[4] == (void *)0x0) {
        if (*(uint *)(param_5 + 1) <= *(uint *)(plVar7 + 5)) goto LAB_004e2228;
      }
      else {
        uVar11 = *(uint *)(plVar7 + 5) >> 2;
        uVar4 = *(uint *)(param_5 + 1) >> 2;
        uVar1 = uVar4;
        if (uVar11 <= uVar4) {
          uVar1 = uVar11;
        }
        iVar6 = memcmp((void *)plVar7[4],(void *)*param_5,(ulong)uVar1);
        if ((-1 < iVar6) && ((iVar6 != 0 || (uVar4 <= uVar11)))) goto LAB_004e2228;
      }
    }
    plVar8 = param_2;
    if (plVar9 != (long *)0x0) {
      *param_3 = (long)plVar7;
      return plVar7 + 1;
    }
  }
  else {
    __s1 = (void *)*param_5;
    uVar1 = *(uint *)(param_5 + 1);
    if (__s1 == (void *)0x0) {
      uVar11 = *(uint *)(param_2 + 5);
      if (uVar1 < uVar11) goto LAB_004e216c;
      __s2 = (void *)param_2[4];
      if (__s2 == (void *)0x0) goto LAB_004e225c;
LAB_004e2104:
      uVar11 = uVar11 >> 2;
      uVar2 = uVar1 >> 2;
      uVar4 = uVar2;
      if (uVar11 <= uVar2) {
        uVar4 = uVar11;
      }
      iVar6 = memcmp(__s2,__s1,(ulong)uVar4);
      if ((-1 < iVar6) && ((iVar6 != 0 || (uVar2 <= uVar11)))) {
LAB_004e2268:
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
    }
    else {
      uVar11 = *(uint *)(param_2 + 5);
      uVar2 = uVar1 >> 2;
      __s2 = (void *)param_2[4];
      uVar3 = uVar11 >> 2;
      uVar4 = uVar3;
      if (uVar2 <= uVar3) {
        uVar4 = uVar2;
      }
      iVar6 = memcmp(__s1,__s2,(ulong)uVar4);
      if ((iVar6 < 0) || ((iVar6 == 0 && (uVar2 < uVar3)))) goto LAB_004e216c;
      if (__s2 != (void *)0x0) goto LAB_004e2104;
LAB_004e225c:
      if (uVar1 <= uVar11) goto LAB_004e2268;
    }
    plVar8 = param_2 + 1;
    plVar12 = (long *)*plVar8;
    plVar7 = param_2;
    plVar9 = plVar12;
    if (plVar12 == (long *)0x0) {
      do {
        plVar10 = (long *)plVar7[2];
        bVar5 = (long *)*plVar10 != plVar7;
        plVar7 = plVar10;
      } while (bVar5);
    }
    else {
      do {
        plVar10 = plVar9;
        plVar9 = (long *)*plVar10;
      } while ((long *)*plVar10 != (long *)0x0);
    }
    if (plVar10 != param_1 + 1) {
      if (__s1 == (void *)0x0) {
        if (*(uint *)(plVar10 + 5) <= uVar1) goto LAB_004e2228;
      }
      else {
        uVar1 = uVar1 >> 2;
        uVar4 = *(uint *)(plVar10 + 5) >> 2;
        uVar11 = uVar4;
        if (uVar1 <= uVar4) {
          uVar11 = uVar1;
        }
        iVar6 = memcmp(__s1,(void *)plVar10[4],(ulong)uVar11);
        if ((-1 < iVar6) && ((iVar6 != 0 || (uVar4 <= uVar1)))) {
LAB_004e2228:
          plVar7 = (long *)FUN_004e2348(param_1,param_3,param_5);
          return plVar7;
        }
      }
    }
    if (plVar12 != (long *)0x0) {
      *param_3 = (long)plVar10;
      return plVar10;
    }
  }
  *param_3 = (long)param_2;
  return plVar8;
}


// ===== 004e2348  FUN_004e2348 =====

long * FUN_004e2348(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  int iVar7;
  long *plVar8;
  void *__s1;
  void *__s2;
  long *plVar9;
  
  plVar8 = (long *)(param_1 + 8);
  plVar9 = plVar8;
  if ((long *)*plVar8 != (long *)0x0) {
    uVar2 = *(uint *)(param_3 + 1);
    __s1 = (void *)*param_3;
    uVar4 = uVar2 >> 2;
    plVar6 = (long *)*plVar8;
    do {
      while (plVar9 = plVar6, uVar3 = *(uint *)(plVar9 + 5), __s1 == (void *)0x0) {
        if (uVar3 <= uVar2) {
          __s2 = (void *)plVar9[4];
          if (__s2 == (void *)0x0) goto LAB_004e2408;
LAB_004e23cc:
          uVar3 = uVar3 >> 2;
          uVar1 = uVar4;
          if (uVar3 <= uVar4) {
            uVar1 = uVar3;
          }
          iVar7 = memcmp(__s2,__s1,(ulong)uVar1);
          if ((iVar7 < 0) || ((iVar7 == 0 && (uVar3 < uVar4)))) goto LAB_004e2410;
          goto LAB_004e2424;
        }
LAB_004e2384:
        plVar6 = (long *)*plVar9;
        plVar8 = plVar9;
        if ((long *)*plVar9 == (long *)0x0) goto LAB_004e2424;
      }
      __s2 = (void *)plVar9[4];
      uVar5 = uVar3 >> 2;
      uVar1 = uVar5;
      if (uVar4 <= uVar5) {
        uVar1 = uVar4;
      }
      iVar7 = memcmp(__s1,__s2,(ulong)uVar1);
      if ((iVar7 < 0) || (iVar7 == 0 && uVar4 < uVar5)) goto LAB_004e2384;
      if (__s2 != (void *)0x0) goto LAB_004e23cc;
LAB_004e2408:
      if (uVar2 <= uVar3) break;
LAB_004e2410:
      plVar8 = plVar9 + 1;
      plVar6 = (long *)*plVar8;
    } while ((long *)*plVar8 != (long *)0x0);
  }
LAB_004e2424:
  *param_2 = plVar9;
  return plVar8;
}


// ===== 004e2448  FUN_004e2448 =====

void FUN_004e2448(undefined8 *param_1,long *param_2)

{
  long lVar1;
  void *__dest;
  uint uVar2;
  void *__src;
  ulong __n;
  long lVar3;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __src = (void *)*param_2;
  __dest = __src;
  if (((*(uint *)(param_2 + 1) & 3) != 0) && (__src != (void *)0x0)) {
    __n = (ulong)(*(uint *)(param_2 + 1) >> 2);
    __dest = malloc(__n + 1);
    if (__dest == (void *)0x0) {
      FUN_004a3cf4(auStack_60,
                   "in Json::Value::duplicateStringValue(): Failed to allocate string value buffer")
      ;
      FUN_004df054(auStack_60);
      goto LAB_004e2550;
    }
    memcpy(__dest,__src,__n);
    *(undefined1 *)((long)__dest + __n) = 0;
  }
  *param_1 = __dest;
  uVar2 = *(uint *)(param_2 + 1) & 3;
  if (*param_2 != 0) {
    uVar2 = (uint)(uVar2 != 0);
  }
  *(uint *)(param_1 + 1) = uVar2 | *(uint *)(param_1 + 1) & 0xfffffffc;
  *(uint *)(param_1 + 1) = *(uint *)(param_2 + 1) & 0xfffffffc | uVar2;
  param_1[4] = 0;
  FUN_004df620(param_1 + 2,param_2 + 2);
  FUN_004e0b98(param_1 + 4,param_2 + 4);
  lVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = lVar3;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_004e2550:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004e2554  FUN_004e2554 =====

undefined8 * FUN_004e2554(long *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x58);
  uVar1 = *param_2;
  uVar7 = *param_3;
  *(undefined2 *)(puVar4 + 7) = 0;
  *(undefined4 *)(puVar4 + 5) = uVar1;
  uVar1 = *(undefined4 *)(param_3 + 1);
  puVar4[6] = uVar7;
  uVar2 = *(undefined4 *)(puVar4 + 7);
  puVar6 = puVar4 + 4;
  *puVar6 = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  *(undefined4 *)(puVar4 + 7) = uVar1;
  puVar4[8] = 0;
  *(undefined4 *)(param_3 + 1) = uVar2;
  FUN_004dfa98(puVar4 + 8,param_3 + 2);
  uVar7 = param_3[3];
  uVar10 = puVar4[10];
  uVar9 = puVar4[9];
  puVar4[10] = param_3[4];
  puVar4[9] = uVar7;
  param_3[4] = uVar10;
  param_3[3] = uVar9;
  puVar5 = (undefined8 *)FUN_004e26a0(param_1,&local_50,puVar6);
  puVar8 = (undefined8 *)*puVar5;
  if (puVar8 == (undefined8 *)0x0) {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = local_50;
    *puVar5 = puVar4;
    puVar6 = puVar4;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      puVar6 = (undefined8 *)*puVar5;
    }
    FUN_0041dcd0(param_1[1],puVar6);
    param_1[2] = param_1[2] + 1;
  }
  else {
    FUN_004df880(puVar4 + 6);
    if (((void *)*puVar6 != (void *)0x0) && ((*(uint *)(puVar4 + 5) & 3) == 1)) {
      free((void *)*puVar6);
    }
    operator_delete(puVar4);
    puVar4 = puVar8;
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004e26a0  FUN_004e26a0 =====

long * FUN_004e26a0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  int iVar7;
  long *plVar8;
  void *__s1;
  void *__s2;
  long *plVar9;
  
  plVar8 = (long *)(param_1 + 8);
  plVar9 = plVar8;
  if ((long *)*plVar8 != (long *)0x0) {
    uVar2 = *(uint *)(param_3 + 1);
    __s1 = (void *)*param_3;
    uVar4 = uVar2 >> 2;
    plVar6 = (long *)*plVar8;
    do {
      while (plVar9 = plVar6, uVar3 = *(uint *)(plVar9 + 5), __s1 == (void *)0x0) {
        if (uVar3 <= uVar2) {
          __s2 = (void *)plVar9[4];
          if (__s2 == (void *)0x0) goto LAB_004e2760;
LAB_004e2724:
          uVar3 = uVar3 >> 2;
          uVar1 = uVar4;
          if (uVar3 <= uVar4) {
            uVar1 = uVar3;
          }
          iVar7 = memcmp(__s2,__s1,(ulong)uVar1);
          if ((iVar7 < 0) || ((iVar7 == 0 && (uVar3 < uVar4)))) goto LAB_004e2768;
          goto LAB_004e277c;
        }
LAB_004e26dc:
        plVar6 = (long *)*plVar9;
        plVar8 = plVar9;
        if ((long *)*plVar9 == (long *)0x0) goto LAB_004e277c;
      }
      __s2 = (void *)plVar9[4];
      uVar5 = uVar3 >> 2;
      uVar1 = uVar5;
      if (uVar4 <= uVar5) {
        uVar1 = uVar4;
      }
      iVar7 = memcmp(__s1,__s2,(ulong)uVar1);
      if ((iVar7 < 0) || (iVar7 == 0 && uVar4 < uVar5)) goto LAB_004e26dc;
      if (__s2 != (void *)0x0) goto LAB_004e2724;
LAB_004e2760:
      if (uVar2 <= uVar3) break;
LAB_004e2768:
      plVar8 = plVar9 + 1;
      plVar6 = (long *)*plVar8;
    } while ((long *)*plVar8 != (long *)0x0);
  }
LAB_004e277c:
  *param_2 = plVar9;
  return plVar8;
}


// ===== 004e27a0  FUN_004e27a0 =====

void FUN_004e27a0(undefined8 *param_1,undefined8 *param_2)

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
      if (0x7fffffffffffffef < uVar2) goto LAB_004e298c;
      uVar1 = (uVar2 | 0xf) + 1;
      puVar3 = (undefined8 *)operator_new(uVar1);
      *param_1 = puVar3;
      param_1[1] = uVar2;
      param_1[2] = uVar1 | 0x8000000000000000;
    }
    if ((puVar3 <= puVar4) && (puVar4 < (undefined8 *)((long)puVar3 + uVar2 + 1)))
    goto LAB_004e2964;
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
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    puVar3 = (undefined8 *)param_2[3];
    uVar2 = param_2[4];
    if (uVar2 < 0x17) {
      *(char *)((long)param_1 + 0x2f) = (char)uVar2;
    }
    else {
      if (0x7fffffffffffffef < uVar2) goto LAB_004e298c;
      uVar1 = (uVar2 | 0xf) + 1;
      puVar4 = (undefined8 *)operator_new(uVar1);
      param_1[3] = puVar4;
      param_1[4] = uVar2;
      param_1[5] = uVar1 | 0x8000000000000000;
    }
    if ((puVar4 <= puVar3) && (puVar3 < (undefined8 *)((long)puVar4 + uVar2 + 1)))
    goto LAB_004e2964;
    memmove(puVar4,puVar3,uVar2 + 1);
  }
  else {
    uVar6 = param_2[4];
    uVar5 = param_2[3];
    param_1[5] = param_2[5];
    param_1[4] = uVar6;
    *puVar4 = uVar5;
  }
  puVar4 = param_1 + 6;
  if (-1 < *(char *)((long)param_2 + 0x47)) {
    uVar6 = param_2[7];
    uVar5 = param_2[6];
    param_1[8] = param_2[8];
    param_1[7] = uVar6;
    *puVar4 = uVar5;
    return;
  }
  puVar3 = (undefined8 *)param_2[6];
  uVar2 = param_2[7];
  if (uVar2 < 0x17) {
    *(char *)((long)param_1 + 0x47) = (char)uVar2;
  }
  else {
    if (0x7fffffffffffffef < uVar2) {
LAB_004e298c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar1 = (uVar2 | 0xf) + 1;
    puVar4 = (undefined8 *)operator_new(uVar1);
    param_1[6] = puVar4;
    param_1[7] = uVar2;
    param_1[8] = uVar1 | 0x8000000000000000;
  }
  if ((puVar3 < puVar4) || ((undefined8 *)((long)puVar4 + uVar2 + 1) <= puVar3)) {
    memmove(puVar4,puVar3,uVar2 + 1);
    return;
  }
LAB_004e2964:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 004e2990  _INIT_8 =====

void _INIT_8(void)

{
  int iVar1;
  
  if (((DAT_00d610d0 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d610d0), iVar1 != 0)) {
    DAT_00d610b0 = DAT_00d610b0 & 0xfe00;
    DAT_00d610c0 = 0;
    DAT_00d610c8 = 0;
    DAT_00d610b8 = 0;
    __cxa_atexit(FUN_004df880,&DAT_00d610a8,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d610d0);
  }
  DAT_00d610d8 = &DAT_00d610a8;
  if (((DAT_00d610d0 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d610d0), iVar1 != 0)) {
    DAT_00d610b0 = DAT_00d610b0 & 0xfe00;
    DAT_00d610c0 = 0;
    DAT_00d610c8 = 0;
    DAT_00d610b8 = 0;
    __cxa_atexit(FUN_004df880,&DAT_00d610a8,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d610d0);
  }
  DAT_00d610e0 = &DAT_00d610a8;
  return;
}


// ===== 004e2aa0  FUN_004e2aa0 =====

void FUN_004e2aa0(undefined8 param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  byte *pbVar3;
  ulong uVar4;
  byte local_2e [6];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 == 0x8000000000000000) {
    pbVar3 = local_2e + 3;
    uVar4 = 0x8000000000000000;
    do {
      bVar2 = 9 < uVar4;
      pbVar3[-2] = (char)uVar4 + (char)(uVar4 / 10) * -10 | 0x30;
      pbVar3 = pbVar3 + -1;
      uVar4 = uVar4 / 10;
    } while (bVar2);
  }
  else {
    if (-1 < (long)param_2) {
      pbVar3 = local_2e + 2;
      local_2e[2] = 0;
      do {
        bVar2 = 9 < param_2;
        pbVar3 = pbVar3 + -1;
        *pbVar3 = (char)param_2 + (char)(param_2 / 10) * -10 | 0x30;
        param_2 = param_2 / 10;
      } while (bVar2);
      goto LAB_004e2b9c;
    }
    pbVar3 = local_2e + 3;
    uVar4 = -param_2;
    do {
      bVar2 = 9 < uVar4;
      pbVar3[-2] = (char)uVar4 + (char)(uVar4 / 10) * -10 | 0x30;
      pbVar3 = pbVar3 + -1;
      uVar4 = uVar4 / 10;
    } while (bVar2);
  }
  local_2e[2] = 0;
  pbVar3[-2] = 0x2d;
LAB_004e2b9c:
  FUN_004a3cf4(param_1);
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004e2bc4  FUN_004e2bc4 =====

void FUN_004e2bc4(undefined8 param_1,ulong param_2)

{
  bool bVar1;
  long lVar2;
  byte *pbVar3;
  byte local_2d [5];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  pbVar3 = local_2d + 1;
  local_2d[1] = 0;
  do {
    pbVar3 = pbVar3 + -1;
    *pbVar3 = (char)param_2 + (char)(param_2 / 10) * -10 | 0x30;
    bVar1 = 9 < param_2;
    param_2 = param_2 / 10;
  } while (bVar1);
  FUN_004a3cf4(param_1);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004e2c48  FUN_004e2c48 =====

void FUN_004e2c48(undefined4 param_1,undefined4 param_2)

{
  FUN_004e2c58(0,param_1,param_2);
  return;
}


// ===== 004e2c58  FUN_004e2c58 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e2c58(char *param_1,double param_2,uint param_3,uint param_4,int param_5)

{
  long lVar1;
  size_t sVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  char *pcVar7;
  void *pvVar8;
  ulong uVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  char *pcVar14;
  byte bVar15;
  char *pcVar16;
  double dVar17;
  ulong uVar18;
  
  dVar17 = ABS(param_2);
  if ((dVar17 >= INFINITY) && (dVar17 == INFINITY || dVar17 < INFINITY != NAN(dVar17))) {
    lVar13 = 2;
    if (param_2 < 0.0) {
      lVar13 = 1;
    }
    lVar1 = 0;
    if (!NAN(param_2)) {
      lVar1 = lVar13;
    }
    FUN_004a3cf4(param_1,(&PTR_DAT_00d1f648)[(ulong)(~param_3 & 1) * 3 + lVar1]);
    return;
  }
  pcVar7 = (char *)operator_new(0x30);
  uVar4 = _UNK_001f2568;
  uVar3 = _DAT_001f2560;
  pcVar10 = "%.*g";
  if (param_5 != 0) {
    pcVar10 = "%.*f";
  }
  *(char **)param_1 = pcVar7;
  pcVar7[8] = '\0';
  pcVar7[9] = '\0';
  pcVar7[10] = '\0';
  pcVar7[0xb] = '\0';
  pcVar7[0xc] = '\0';
  pcVar7[0xd] = '\0';
  pcVar7[0xe] = '\0';
  pcVar7[0xf] = '\0';
  pcVar7[0] = '\0';
  pcVar7[1] = '\0';
  pcVar7[2] = '\0';
  pcVar7[3] = '\0';
  pcVar7[4] = '\0';
  pcVar7[5] = '\0';
  pcVar7[6] = '\0';
  pcVar7[7] = '\0';
  pcVar7[0x18] = '\0';
  pcVar7[0x19] = '\0';
  pcVar7[0x1a] = '\0';
  pcVar7[0x1b] = '\0';
  pcVar7[0x1c] = '\0';
  pcVar7[0x1d] = '\0';
  pcVar7[0x1e] = '\0';
  pcVar7[0x1f] = '\0';
  pcVar7[0x10] = '\0';
  pcVar7[0x11] = '\0';
  pcVar7[0x12] = '\0';
  pcVar7[0x13] = '\0';
  pcVar7[0x14] = '\0';
  pcVar7[0x15] = '\0';
  pcVar7[0x16] = '\0';
  pcVar7[0x17] = '\0';
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  *(undefined8 *)(param_1 + 8) = uVar3;
  pcVar7[0x1d] = '\0';
  pcVar7[0x1e] = '\0';
  pcVar7[0x1f] = '\0';
  pcVar7[0x20] = '\0';
  pcVar7[0x21] = '\0';
  pcVar7[0x22] = '\0';
  pcVar7[0x23] = '\0';
  pcVar7[0x24] = '\0';
  uVar6 = snprintf(pcVar7,0x24,pcVar10,param_2,(ulong)param_4);
  uVar9 = (ulong)(int)uVar6;
  bVar5 = param_1[0x17] < '\0';
  uVar11 = *(ulong *)(param_1 + 8);
  if (!bVar5) {
    uVar11 = (ulong)(byte)param_1[0x17];
  }
  if (uVar9 < uVar11) {
    if (!bVar5) goto LAB_004e2df8;
LAB_004e2d5c:
    *(ulong *)(param_1 + 8) = uVar9;
    pcVar10 = *(char **)param_1;
  }
  else {
    do {
      uVar9 = uVar9 + 1;
      if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
        if (bVar5) {
          *(ulong *)(param_1 + 8) = uVar9;
          pcVar7 = *(char **)param_1;
        }
        else {
          if (0x16 < uVar9) goto LAB_004e3108;
          param_1[0x17] = (char)uVar9;
          pcVar7 = param_1;
        }
        pcVar7[uVar9] = '\0';
      }
      else {
        FUN_0054809c(param_1,uVar9 - uVar11,0);
      }
      sVar2 = *(size_t *)(param_1 + 8);
      pcVar7 = *(char **)param_1;
      if (-1 < param_1[0x17]) {
        sVar2 = (ulong)(byte)param_1[0x17];
        pcVar7 = param_1;
      }
      uVar6 = snprintf(pcVar7,sVar2,pcVar10,param_2,(ulong)param_4);
      uVar9 = (ulong)(int)uVar6;
      bVar5 = param_1[0x17] < '\0';
      uVar11 = *(ulong *)(param_1 + 8);
      if (!bVar5) {
        uVar11 = (ulong)(byte)param_1[0x17];
      }
    } while (uVar11 <= uVar9);
    if (bVar5) goto LAB_004e2d5c;
LAB_004e2df8:
    if (0x16 < uVar6) {
LAB_004e3108:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                 "__s < __min_cap",
                 "__s should never be greater than or equal to the short string capacity");
    }
    param_1[0x17] = (char)uVar6;
    pcVar10 = param_1;
  }
  pcVar10[uVar9] = '\0';
  pcVar7 = *(char **)param_1;
  uVar9 = *(ulong *)(param_1 + 8);
  bVar15 = param_1[0x17];
  uVar12 = (ulong)bVar15;
  pcVar10 = pcVar7;
  uVar11 = uVar9;
  if (-1 < (char)bVar15) {
    pcVar10 = param_1;
    uVar11 = uVar12;
  }
  pcVar14 = pcVar10;
  if (uVar11 != 0) {
    pcVar14 = pcVar10 + uVar11;
    pcVar7 = pcVar10;
    if (uVar11 < 8) {
LAB_004e3090:
      do {
        if (*pcVar7 == ',') {
          *pcVar7 = '.';
        }
        pcVar7 = pcVar7 + 1;
      } while (pcVar7 != pcVar14);
    }
    else {
      uVar12 = uVar11 & 0xfffffffffffffff8;
      pcVar7 = pcVar10 + uVar12;
      pcVar10 = pcVar10 + 3;
      uVar9 = uVar12;
      do {
        uVar18 = NEON_cmeq(*(undefined8 *)(pcVar10 + -3),0x2c2c2c2c2c2c2c2c,1);
        if ((uVar18 & 1) != 0) {
          pcVar10[-3] = '.';
        }
        if ((uVar18 & 0x100) != 0) {
          pcVar10[-2] = '.';
        }
        if ((uVar18 & 0x10000) != 0) {
          pcVar10[-1] = '.';
        }
        if ((uVar18 & 0x1000000) != 0) {
          *pcVar10 = '.';
        }
        if ((uVar18 & 0x100000000) != 0) {
          pcVar10[1] = '.';
        }
        if ((uVar18 & 0x10000000000) != 0) {
          pcVar10[2] = '.';
        }
        if ((uVar18 & 0x1000000000000) != 0) {
          pcVar10[3] = '.';
        }
        if ((uVar18 & 0x100000000000000) != 0) {
          pcVar10[4] = '.';
        }
        uVar9 = uVar9 - 8;
        pcVar10 = pcVar10 + 8;
      } while (uVar9 != 0);
      if (uVar11 != uVar12) goto LAB_004e3090;
    }
    bVar15 = param_1[0x17];
    uVar12 = (ulong)bVar15;
    pcVar7 = *(char **)param_1;
    uVar9 = *(ulong *)(param_1 + 8);
  }
  if (-1 < (char)bVar15) {
    uVar9 = uVar12;
    pcVar7 = param_1;
  }
  if (pcVar7 + uVar9 < pcVar14) goto LAB_004e30e0;
  FUN_004e7a70(param_1,(long)pcVar14 - (long)pcVar7,(long)(pcVar7 + uVar9) - (long)pcVar14);
  bVar15 = param_1[0x17];
  sVar2 = *(size_t *)(param_1 + 8);
  if (-1 < (char)bVar15) {
    sVar2 = (ulong)bVar15;
  }
  if (sVar2 == 0) {
LAB_004e3048:
    FUN_00547cac(param_1,&DAT_001db849,2);
  }
  else {
    pcVar10 = *(char **)param_1;
    if (-1 < (char)bVar15) {
      pcVar10 = param_1;
    }
    pvVar8 = memchr(pcVar10,0x2e,sVar2);
    if (((pvVar8 == (void *)0x0) || ((long)pvVar8 - (long)pcVar10 == -1)) &&
       ((pvVar8 = memchr(pcVar10,0x65,sVar2), pvVar8 == (void *)0x0 ||
        ((long)pvVar8 - (long)pcVar10 == -1)))) goto LAB_004e3048;
  }
  if (param_5 != 1) {
    return;
  }
  uVar9 = *(ulong *)(param_1 + 8);
  pcVar10 = *(char **)param_1;
  if (-1 < param_1[0x17]) {
    uVar9 = (ulong)(byte)param_1[0x17];
    pcVar10 = param_1;
  }
  pcVar7 = pcVar10 + uVar9;
  pcVar14 = pcVar10;
  if (uVar9 != 0) {
    pcVar14 = pcVar7;
    if (pcVar7[-1] != '0') goto LAB_004e30b0;
    lVar13 = 0;
    pcVar16 = pcVar10;
    do {
      pcVar14 = pcVar10;
      if (uVar9 - 1 == lVar13) goto joined_r0x004e3040;
      if ((uVar9 - 2 != lVar13) && (pcVar16[uVar9 - 2] == '.')) {
        pcVar14 = pcVar16 + uVar9 + -2;
        if (param_4 != 0) {
          pcVar14 = pcVar16 + uVar9;
        }
        goto joined_r0x004e3040;
      }
      pcVar14 = pcVar16 + (uVar9 - 2);
      pcVar16 = pcVar16 + -1;
      lVar13 = lVar13 + 1;
    } while (*pcVar14 == '0');
    pcVar14 = pcVar16 + uVar9;
  }
joined_r0x004e3040:
  if (pcVar7 < pcVar14) {
LAB_004e30e0:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/string",0xc9a,
               "__first <= __last","string::erase(first, last) called with invalid range");
  }
LAB_004e30b0:
  FUN_004e7a70(param_1,(long)pcVar14 - (long)pcVar10,(long)pcVar7 - (long)pcVar14);
  return;
}


// ===== 004e3130  FUN_004e3130 =====

void FUN_004e3130(undefined8 *param_1,byte *param_2,long param_3,ulong param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  bool bVar7;
  size_t sVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  byte *pbVar14;
  ulong uVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined2 local_98;
  undefined6 uStack_96;
  char local_81;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if (param_2 == (byte *)0x0) {
    *(undefined1 *)((long)param_1 + 0x17) = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    if (param_3 != 0) {
      lVar12 = 0;
      pbVar1 = param_2 + param_3;
      do {
        bVar2 = param_2[lVar12];
        if ((((bVar2 < 0x20) || (bVar2 == 0x22)) || (bVar2 == 0x5c)) || ((char)bVar2 < '\0')) {
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          FUN_00547c2c(param_1,param_3 * 2 + 3);
          FUN_00547cac(param_1,&DAT_001d6255,1);
          goto LAB_004e32c0;
        }
        lVar12 = lVar12 + 1;
      } while (param_3 != lVar12);
    }
    local_81 = '\x01';
    if ((&local_98 < &UNK_001d6256) && (&DAT_001d6255 < (undefined *)((ulong)&local_98 | 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    local_98 = 0x22;
    sVar8 = strlen((char *)param_2);
    puVar9 = (undefined8 *)FUN_00547cac(&local_98,param_2,sVar8);
    uStack_78 = puVar9[1];
    local_80 = (void *)*puVar9;
    local_70 = puVar9[2];
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
    puVar9 = (undefined8 *)FUN_00547cac(&local_80,&DAT_001d6255,1);
    uVar17 = puVar9[1];
    uVar10 = *puVar9;
    param_1[2] = puVar9[2];
    param_1[1] = uVar17;
    *param_1 = uVar10;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
    if (local_70 < 0) {
      operator_delete(local_80);
    }
    if (local_81 < '\0') {
      operator_delete((void *)CONCAT62(uStack_96,local_98));
    }
  }
  goto LAB_004e363c;
LAB_004e32c0:
  do {
    bVar2 = *param_2;
    pbVar14 = param_2;
    switch(bVar2) {
    case 8:
      puVar11 = &DAT_001ea2f2;
      break;
    case 9:
      puVar11 = &DAT_001c805b;
      break;
    case 10:
      puVar11 = &DAT_001e77a1;
      break;
    case 0xb:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
switchD_004e32dc_caseD_b:
      if (((param_4 & 1) == 0) && (uVar16 = (uint)bVar2, (char)bVar2 < '\0')) {
        lVar12 = (long)pbVar1 - (long)param_2;
        if (uVar16 < 0xe0) {
          if (lVar12 < 2) {
LAB_004e34e8:
            uVar13 = 0xfffd;
          }
          else {
            pbVar14 = param_2 + 1;
            uVar16 = *pbVar14 & 0x3f | (bVar2 & 0x1f) << 6;
            bVar7 = 0x7f < uVar16;
LAB_004e33e8:
            uVar4 = 0xfffd;
            if (bVar7) {
              uVar4 = uVar16;
            }
            uVar13 = (ulong)uVar4;
          }
LAB_004e34ec:
          uVar10 = FUN_00547cac(param_1,&DAT_001adeb6,2);
          uVar13 = CONCAT62(CONCAT42((int)((ulong)local_80 >> 0x20),
                                     *(undefined2 *)(&DAT_001a0159 + (uVar13 & 0xff) * 2)),
                            *(undefined2 *)(&DAT_001a0159 + (uVar13 >> 7 & 0x1fe)));
        }
        else {
          if (uVar16 < 0xf0) {
            if (2 < lVar12) {
              uVar4 = (uVar16 & 0xf) << 0xc;
              pbVar14 = param_2 + 2;
              uVar16 = (param_2[1] & 0x3f) << 6;
              if ((uVar4 | uVar16 & 0xf800) != 0xd800) {
                uVar16 = uVar4 | uVar16 | *pbVar14 & 0x3f;
                bVar7 = 0x7ff < uVar16;
                goto LAB_004e33e8;
              }
            }
            goto LAB_004e34e8;
          }
          uVar13 = 0xfffd;
          if ((lVar12 < 4) || (0xf7 < uVar16)) goto LAB_004e34ec;
          pbVar14 = param_2 + 3;
          bVar3 = *pbVar14;
          uVar15 = ((ulong)param_2[2] & 0x3f) << 6;
          uVar13 = ((ulong)bVar2 & 7) << 0x12 | ((ulong)param_2[1] & 0x3f) << 0xc | uVar15;
          if (((uint)uVar13 | (uint)((ulong)bVar3 & 0x3f)) < 0x10000) goto LAB_004e34e8;
          uVar13 = uVar13 + 0xf0000;
          uVar10 = FUN_00547cac(param_1,&DAT_001adeb6,2);
          local_70._7_1_ = '\x04';
          uVar6 = (ulong)local_80 >> 0x20;
          local_80._0_4_ =
               CONCAT22(*(undefined2 *)(&DAT_001a0159 + (uVar13 >> 9 & 0x1fe)),
                        *(undefined2 *)(&DAT_001a0309 + (uVar13 >> 0x11 & 6)));
          local_80 = (void *)(CONCAT44((int)uVar6,(undefined4)local_80) & 0xffffff00ffffffff);
          FUN_00547cac(uVar10,&local_80,4);
          if (local_70._7_1_ < '\0') {
            operator_delete(local_80);
          }
          uVar10 = FUN_00547cac(param_1,&DAT_001adeb6,2);
          uVar13 = (ulong)local_80 >> 0x20;
          local_80._0_4_ =
               CONCAT22(*(undefined2 *)(&DAT_001a0159 + (uVar15 & 0xc0 | (ulong)bVar3 & 0x3f) * 2),
                        CONCAT11((&DAT_001a0159)[(uVar15 & 0x380) >> 7 | 0x1b9],
                                 "dcdddedfe0e1e2e3e4e5e6e7e8e9eaebecedeeeff0f1f2f3f4f5f6f7f8f9fafbfcfdfeff"
                                 [(uVar15 & 0x300) >> 7]));
          uVar13 = CONCAT44((int)uVar13,(undefined4)local_80);
        }
        local_80 = (void *)(uVar13 & 0xffffff00ffffffff);
        local_70 = CONCAT17(4,(undefined7)local_70);
        FUN_00547cac(uVar10,&local_80,4);
        if (local_70 < 0) {
          operator_delete(local_80);
        }
      }
      else if (bVar2 < 0x20) {
        uVar10 = FUN_00547cac(param_1,&DAT_001adeb6,2);
        local_70 = CONCAT17(4,(undefined7)local_70);
        local_80 = (void *)CONCAT62(CONCAT42((int)((ulong)local_80 >> 0x20),
                                             *(undefined2 *)(&DAT_001a0159 + (ulong)bVar2 * 2)) &
                                    0xffffff00ffff,0x3030);
        FUN_00547cac(uVar10,&local_80,4);
        if (local_70 < 0) {
          operator_delete(local_80);
        }
      }
      else {
        bVar3 = *(byte *)((long)param_1 + 0x17);
        if ((char)bVar3 < '\0') {
          uVar13 = param_1[1];
          uVar15 = (param_1[2] & 0x7fffffffffffffff) - 1;
          if (uVar13 == uVar15) goto LAB_004e3408;
LAB_004e342c:
          param_1[1] = uVar13 + 1;
          puVar9 = (undefined8 *)*param_1;
        }
        else {
          if (bVar3 == 0x16) {
            uVar15 = 0x16;
LAB_004e3408:
            uVar13 = uVar15;
            FUN_0054774c(param_1,uVar13,1,uVar13,uVar13,0,0);
            goto LAB_004e342c;
          }
          if (0x15 < bVar3) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          uVar13 = (ulong)bVar3;
          *(byte *)((long)param_1 + 0x17) = bVar3 + 1;
          puVar9 = param_1;
        }
        *(byte *)((long)puVar9 + uVar13) = bVar2;
        ((byte *)((long)puVar9 + uVar13))[1] = 0;
      }
      goto LAB_004e32b4;
    case 0xc:
      puVar11 = &DAT_001c8058;
      break;
    case 0xd:
      puVar11 = &DAT_001b690c;
      break;
    case 0x22:
      puVar11 = &DAT_0019cf04;
      break;
    default:
      if (bVar2 != 0x5c) goto switchD_004e32dc_caseD_b;
      puVar11 = &DAT_001ea2ef;
    }
    FUN_00547cac(param_1,puVar11,2);
LAB_004e32b4:
    param_2 = pbVar14 + 1;
  } while (param_2 != pbVar1);
  FUN_00547cac(param_1,&DAT_001d6255,1);
LAB_004e363c:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004e36c0  FUN_004e36c0 =====

void FUN_004e36c0(void)

{
  return;
}


// ===== 004e36c4  FUN_004e36c4 =====

void FUN_004e36c4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4e36c8);
  (*pcVar1)();
}


// ===== 004e36c8  FUN_004e36c8 =====

void FUN_004e36c8(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x1f) = 0;
  *param_1 = &PTR_FUN_00d1f540;
  param_1[1] = 0;
  return;
}


// ===== 004e36e0  FUN_004e36e0 =====

void FUN_004e36e0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  char cVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  if (*(char *)(param_2 + 0x1f) < '\0') {
    **(undefined1 **)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  else {
    *(undefined1 *)(param_2 + 8) = 0;
    *(undefined1 *)(param_2 + 0x1f) = 0;
  }
  puVar1 = (undefined8 *)(param_2 + 8);
  FUN_004e38a0(param_2);
  if (*(char *)(param_2 + 0x22) != '\0') {
    cVar2 = *(char *)(param_2 + 0x1f);
    goto joined_r0x004e37d8;
  }
  bVar3 = *(byte *)(param_2 + 0x1f);
  if ((char)bVar3 < '\0') {
    uVar6 = *(ulong *)(param_2 + 0x10);
    uVar7 = (*(ulong *)(param_2 + 0x18) & 0x7fffffffffffffff) - 1;
    if (uVar6 == uVar7) goto LAB_004e3784;
LAB_004e37a8:
    *(ulong *)(param_2 + 0x10) = uVar6 + 1;
    puVar4 = *(undefined8 **)(param_2 + 8);
  }
  else {
    if (bVar3 == 0x16) {
      uVar7 = 0x16;
LAB_004e3784:
      uVar6 = uVar7;
      FUN_0054774c(puVar1,uVar6,1,uVar6,uVar6,0,0);
      goto LAB_004e37a8;
    }
    if (0x15 < bVar3) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                 "__s < __min_cap",
                 "__s should never be greater than or equal to the short string capacity");
    }
    uVar6 = (ulong)bVar3;
    *(byte *)(param_2 + 0x1f) = bVar3 + 1;
    puVar4 = puVar1;
  }
  *(undefined2 *)((long)puVar4 + uVar6) = 10;
  cVar2 = *(char *)(param_2 + 0x1f);
joined_r0x004e37d8:
  if (-1 < cVar2) {
    uVar8 = *puVar1;
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = *(undefined8 *)(param_2 + 0x10);
    *param_1 = uVar8;
    param_1[2] = uVar5;
    return;
  }
  puVar1 = *(undefined8 **)(param_2 + 8);
  uVar6 = *(ulong *)(param_2 + 0x10);
  if (uVar6 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar6;
    puVar4 = param_1;
  }
  else {
    if (0x7fffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar7 = (uVar6 | 0xf) + 1;
    puVar4 = (undefined8 *)operator_new(uVar7);
    *param_1 = puVar4;
    param_1[1] = uVar6;
    param_1[2] = uVar7 | 0x8000000000000000;
  }
  if ((puVar4 <= puVar1) && (puVar1 < (undefined8 *)((long)puVar4 + uVar6 + 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  memmove(puVar4,puVar1,uVar6 + 1);
  return;
}


// ===== 004e38a0  FUN_004e38a0 =====

/* WARNING: Removing unreachable block (ram,0x004e3fa0) */

void FUN_004e38a0(long param_1,undefined8 param_2)

{
  byte ******ppppppbVar1;
  undefined *puVar2;
  byte *****pppppbVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  byte ******ppppppbVar10;
  ulong uVar11;
  long lVar12;
  byte ******ppppppbVar13;
  byte *pbVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  long local_a8;
  byte *****local_a0;
  ulong local_98;
  undefined8 uStack_90;
  byte *****local_88 [2];
  byte local_72 [2];
  undefined8 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar7 = FUN_004dfb88(param_2);
  switch(uVar7) {
  case 0:
    if (*(char *)(param_1 + 0x21) == '\0') {
      if (*(long *)(lVar5 + 0x28) == local_68) {
        FUN_00547cac(param_1 + 8,&DAT_001b9a21,4);
        return;
      }
      goto LAB_004e4128;
    }
    break;
  case 1:
    uVar11 = thunk_FUN_004e0028(param_2);
    if (uVar11 == 0x8000000000000000) {
      pbVar14 = local_72 + 3;
      uVar11 = 0x8000000000000000;
      do {
        bVar6 = 9 < uVar11;
        pbVar14[-2] = (char)uVar11 + (char)(uVar11 / 10) * -10 | 0x30;
        pbVar14 = pbVar14 + -1;
        uVar11 = uVar11 / 10;
      } while (bVar6);
LAB_004e3ff8:
      local_70._0_1_ = 0;
      ppppppbVar13 = (byte ******)(pbVar14 + -2);
      *(byte *)ppppppbVar13 = 0x2d;
    }
    else {
      if ((long)uVar11 < 0) {
        pbVar14 = local_72 + 3;
        uVar11 = -uVar11;
        do {
          bVar6 = 9 < uVar11;
          pbVar14[-2] = (char)uVar11 + (char)(uVar11 / 10) * -10 | 0x30;
          pbVar14 = pbVar14 + -1;
          uVar11 = uVar11 / 10;
        } while (bVar6);
        goto LAB_004e3ff8;
      }
      ppppppbVar13 = (byte ******)(local_72 + 2);
      local_70._0_1_ = 0;
      do {
        bVar6 = 9 < uVar11;
        ppppppbVar13 = (byte ******)((long)ppppppbVar13 + -1);
        *(byte *)ppppppbVar13 = (char)uVar11 + (char)(uVar11 / 10) * -10 | 0x30;
        uVar11 = uVar11 / 10;
      } while (bVar6);
    }
    uVar11 = strlen((char *)ppppppbVar13);
    if (0x7fffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    goto LAB_004e4018;
  case 2:
    uVar11 = thunk_FUN_004e0124(param_2);
    ppppppbVar13 = (byte ******)(local_72 + 2);
    local_70._0_1_ = 0;
    do {
      ppppppbVar13 = (byte ******)((long)ppppppbVar13 + -1);
      *(byte *)ppppppbVar13 = (char)uVar11 + (char)(uVar11 / 10) * -10 | 0x30;
      bVar6 = 9 < uVar11;
      uVar11 = uVar11 / 10;
    } while (bVar6);
    uVar11 = strlen((char *)ppppppbVar13);
    if (0x7fffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
LAB_004e4018:
    if (uVar11 < 0x17) {
      ppppppbVar10 = &local_a0;
      uStack_90 = CONCAT17((char)uVar11,(undefined7)uStack_90);
    }
    else {
      uVar15 = (uVar11 | 0xf) + 1;
      ppppppbVar10 = (byte ******)operator_new(uVar15);
      uStack_90 = uVar15 | 0x8000000000000000;
      local_a0 = (byte *****)ppppppbVar10;
      local_98 = uVar11;
    }
    ppppppbVar1 = (byte ******)((long)ppppppbVar10 + uVar11);
    if ((ppppppbVar13 >= ppppppbVar10 && ppppppbVar13 <= ppppppbVar1) &&
        (ppppppbVar13 < ppppppbVar10 || ppppppbVar1 != ppppppbVar13)) {
LAB_004e40fc:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    if (uVar11 != 0) {
      memmove(ppppppbVar10,ppppppbVar13,uVar11);
    }
    *(byte *)ppppppbVar1 = 0;
    uVar11 = local_98;
    ppppppbVar13 = (byte ******)local_a0;
    if (-1 < (long)uStack_90) {
      uVar11 = uStack_90 >> 0x38;
      ppppppbVar13 = &local_a0;
    }
    FUN_00547cac(param_1 + 8,ppppppbVar13,uVar11);
    local_88[0] = local_a0;
    if ((long)uStack_90 < 0) {
LAB_004e40a0:
      operator_delete(local_88[0]);
    }
    break;
  case 3:
    FUN_004e0220(param_2);
    FUN_004e2c58(local_88,0,0x11,0);
LAB_004e3a48:
    bVar6 = (char)local_72[1] < '\0';
    ppppppbVar13 = (byte ******)local_88[0];
    if (!bVar6) {
      ppppppbVar13 = local_88;
    }
    goto LAB_004e3b00;
  case 4:
    uVar11 = FUN_004dfb90(param_2,&local_a0,&local_a8);
    if ((uVar11 & 1) != 0) {
      FUN_004e3130(local_88,local_a0,local_a8 - (long)local_a0,0);
      goto LAB_004e3a48;
    }
    break;
  case 5:
    uVar15 = FUN_004e03c4(param_2);
    uVar11 = 4;
    ppppppbVar13 = (byte ******)&DAT_001b0c62;
    if ((uVar15 & 1) == 0) {
      uVar11 = 5;
      ppppppbVar13 = (byte ******)"false";
    }
    local_72[1] = (byte)uVar11;
    if ((local_88 <= ppppppbVar13) && (ppppppbVar13 < (byte ******)((ulong)local_88 | uVar11)))
    goto LAB_004e40fc;
    memcpy(local_88,ppppppbVar13,uVar11);
    *(byte *)((long)local_88 + uVar11) = 0;
    bVar6 = (char)local_72[1] < '\0';
    ppppppbVar13 = (byte ******)local_88[0];
    if (!bVar6) {
      ppppppbVar13 = local_88;
    }
LAB_004e3b00:
    ppppppbVar10 = (byte ******)local_88[1];
    if (!bVar6) {
      ppppppbVar10 = (byte ******)(ulong)local_72[1];
    }
    FUN_00547cac(param_1 + 8,ppppppbVar13,ppppppbVar10);
    if (-1 < (char)local_72[1]) break;
    goto LAB_004e40a0;
  case 6:
    bVar4 = *(byte *)(param_1 + 0x1f);
    lVar16 = param_1 + 8;
    if ((char)bVar4 < '\0') {
      uVar11 = *(ulong *)(param_1 + 0x10);
      uVar15 = (*(ulong *)(param_1 + 0x18) & 0x7fffffffffffffff) - 1;
      if (uVar11 == uVar15) goto LAB_004e3bd4;
LAB_004e3bf8:
      *(ulong *)(param_1 + 0x10) = uVar11 + 1;
      lVar12 = *(long *)(param_1 + 8);
    }
    else {
      if (bVar4 == 0x16) {
        uVar15 = 0x16;
LAB_004e3bd4:
        uVar11 = uVar15;
        FUN_0054774c(lVar16,uVar11,1,uVar11,uVar11,0,0);
        goto LAB_004e3bf8;
      }
      if (0x15 < bVar4) goto LAB_004e40d4;
      uVar11 = (ulong)bVar4;
      *(byte *)(param_1 + 0x1f) = bVar4 + 1;
      lVar12 = lVar16;
    }
    *(undefined2 *)(lVar12 + uVar11) = 0x5b;
    iVar8 = FUN_004e04c8(param_2);
    if (iVar8 != 0) {
      uVar9 = FUN_004e09f8(param_2,0);
      FUN_004e38a0(param_1,uVar9);
      if (iVar8 != 1) {
        iVar17 = 1;
        do {
          bVar4 = *(byte *)(param_1 + 0x1f);
          if ((char)bVar4 < '\0') {
            uVar11 = *(ulong *)(param_1 + 0x10);
            uVar15 = (*(ulong *)(param_1 + 0x18) & 0x7fffffffffffffff) - 1;
            if (uVar11 == uVar15) goto LAB_004e3e9c;
LAB_004e3ec0:
            lVar12 = *(long *)(param_1 + 8);
            *(ulong *)(param_1 + 0x10) = uVar11 + 1;
          }
          else {
            if (bVar4 == 0x16) {
              uVar15 = 0x16;
LAB_004e3e9c:
              uVar11 = uVar15;
              FUN_0054774c(lVar16,uVar11,1,uVar11,uVar11,0,0);
              goto LAB_004e3ec0;
            }
            if (0x15 < bVar4) goto LAB_004e40d4;
            uVar11 = (ulong)bVar4;
            *(byte *)(param_1 + 0x1f) = bVar4 + 1;
            lVar12 = lVar16;
          }
          *(undefined2 *)(lVar12 + uVar11) = 0x2c;
          uVar9 = FUN_004e09f8(param_2,iVar17);
          FUN_004e38a0(param_1,uVar9);
          iVar17 = iVar17 + 1;
        } while (iVar8 != iVar17);
      }
    }
    bVar4 = *(byte *)(param_1 + 0x1f);
    if ((char)bVar4 < '\0') {
      uVar11 = *(ulong *)(param_1 + 0x10);
      uVar15 = (*(ulong *)(param_1 + 0x18) & 0x7fffffffffffffff) - 1;
      if (uVar11 == uVar15) goto LAB_004e3e58;
LAB_004e3e7c:
      lVar16 = *(long *)(param_1 + 8);
      *(ulong *)(param_1 + 0x10) = uVar11 + 1;
    }
    else {
      if (bVar4 == 0x16) {
        uVar15 = 0x16;
LAB_004e3e58:
        uVar11 = uVar15;
        FUN_0054774c(lVar16,uVar11,1,uVar11,uVar11,0,0);
        goto LAB_004e3e7c;
      }
      if (0x15 < bVar4) {
LAB_004e40d4:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                   "__s < __min_cap",
                   "__s should never be greater than or equal to the short string capacity");
      }
      uVar11 = (ulong)bVar4;
      *(byte *)(param_1 + 0x1f) = bVar4 + 1;
    }
    *(undefined2 *)(lVar16 + uVar11) = 0x5d;
    break;
  case 7:
    FUN_004e1754(local_88,param_2);
    bVar4 = *(byte *)(param_1 + 0x1f);
    lVar16 = param_1 + 8;
    if ((char)bVar4 < '\0') {
      uVar11 = *(ulong *)(param_1 + 0x10);
      uVar15 = (*(ulong *)(param_1 + 0x18) & 0x7fffffffffffffff) - 1;
      if (uVar11 == uVar15) goto LAB_004e3b8c;
LAB_004e3bb0:
      *(ulong *)(param_1 + 0x10) = uVar11 + 1;
      lVar12 = *(long *)(param_1 + 8);
    }
    else {
      if (bVar4 == 0x16) {
        uVar15 = 0x16;
LAB_004e3b8c:
        uVar11 = uVar15;
        FUN_0054774c(lVar16,uVar11,1,uVar11,uVar11,0,0);
        goto LAB_004e3bb0;
      }
      if (0x15 < bVar4) goto LAB_004e40d4;
      uVar11 = (ulong)bVar4;
      *(byte *)(param_1 + 0x1f) = bVar4 + 1;
      lVar12 = lVar16;
    }
    *(undefined2 *)(lVar12 + uVar11) = 0x7b;
    if (local_88[0] != local_88[1]) {
      ppppppbVar13 = (byte ******)local_88[0];
      do {
        if (ppppppbVar13 != (byte ******)local_88[0]) {
          bVar4 = *(byte *)(param_1 + 0x1f);
          if ((char)bVar4 < '\0') {
            uVar11 = *(ulong *)(param_1 + 0x10);
            uVar15 = (*(ulong *)(param_1 + 0x18) & 0x7fffffffffffffff) - 1;
            if (uVar11 == uVar15) goto LAB_004e3ccc;
LAB_004e3cf0:
            *(ulong *)(param_1 + 0x10) = uVar11 + 1;
            lVar12 = *(long *)(param_1 + 8);
          }
          else {
            if (bVar4 == 0x16) {
              uVar15 = 0x16;
LAB_004e3ccc:
              uVar11 = uVar15;
              FUN_0054774c(lVar16,uVar11,1,uVar11,uVar11,0,0);
              goto LAB_004e3cf0;
            }
            if (0x15 < bVar4) goto LAB_004e40d4;
            uVar11 = (ulong)bVar4;
            *(byte *)(param_1 + 0x1f) = bVar4 + 1;
            lVar12 = lVar16;
          }
          *(undefined2 *)(lVar12 + uVar11) = 0x2c;
        }
        pppppbVar3 = ppppppbVar13[1];
        ppppppbVar10 = (byte ******)*ppppppbVar13;
        if (-1 < (char)*(byte *)((long)ppppppbVar13 + 0x17)) {
          pppppbVar3 = (byte *****)(ulong)*(byte *)((long)ppppppbVar13 + 0x17);
          ppppppbVar10 = ppppppbVar13;
        }
        FUN_004e3130(&local_a0,ppppppbVar10,pppppbVar3,0);
        uVar11 = local_98;
        ppppppbVar10 = (byte ******)local_a0;
        if (-1 < (long)uStack_90) {
          uVar11 = uStack_90 >> 0x38;
          ppppppbVar10 = &local_a0;
        }
        FUN_00547cac(lVar16,ppppppbVar10,uVar11);
        if ((long)uStack_90 < 0) {
          operator_delete(local_a0);
        }
        bVar6 = *(char *)(param_1 + 0x20) != '\0';
        puVar2 = &DAT_001ca603;
        if (bVar6) {
          puVar2 = &DAT_001c4dc3;
        }
        uVar9 = 1;
        if (bVar6) {
          uVar9 = 2;
        }
        FUN_00547cac(lVar16,puVar2,uVar9);
        uVar9 = FUN_004e138c(param_2,ppppppbVar13);
        FUN_004e38a0(param_1,uVar9);
        ppppppbVar13 = ppppppbVar13 + 3;
      } while (ppppppbVar13 != (byte ******)local_88[1]);
    }
    bVar4 = *(byte *)(param_1 + 0x1f);
    if ((char)bVar4 < '\0') {
      uVar11 = *(ulong *)(param_1 + 0x10);
      uVar15 = (*(ulong *)(param_1 + 0x18) & 0x7fffffffffffffff) - 1;
      if (uVar11 == uVar15) goto LAB_004e3da8;
LAB_004e3dcc:
      lVar16 = *(long *)(param_1 + 8);
      *(ulong *)(param_1 + 0x10) = uVar11 + 1;
    }
    else {
      if (bVar4 == 0x16) {
        uVar15 = 0x16;
LAB_004e3da8:
        uVar11 = uVar15;
        FUN_0054774c(lVar16,uVar11,1,uVar11,uVar11,0,0);
        goto LAB_004e3dcc;
      }
      if (0x15 < bVar4) goto LAB_004e40d4;
      uVar11 = (ulong)bVar4;
      *(byte *)(param_1 + 0x1f) = bVar4 + 1;
    }
    *(undefined2 *)(lVar16 + uVar11) = 0x7d;
    if ((byte ******)local_88[0] == (byte ******)0x0) break;
    for (; local_88[1] != local_88[0]; local_88[1] = (byte *****)((byte ******)local_88[1] + -3)) {
    }
    local_88[1] = local_88[0];
    goto LAB_004e40a0;
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
LAB_004e4128:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004e412c  FUN_004e412c =====

void FUN_004e412c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  if (*(char *)(param_2 + 0x37) < '\0') {
    **(undefined1 **)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
  }
  else {
    *(undefined1 *)(param_2 + 0x20) = 0;
    *(undefined1 *)(param_2 + 0x37) = 0;
  }
  *(undefined1 *)(param_2 + 0x58) = 0;
  if (*(char *)(param_2 + 0x4f) < '\0') {
    **(undefined1 **)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  else {
    *(undefined1 *)(param_2 + 0x38) = 0;
    *(undefined1 *)(param_2 + 0x4f) = 0;
  }
  puVar1 = (undefined8 *)(param_2 + 0x20);
  FUN_004e4320(param_2,param_3);
  FUN_004e4604(param_2,param_3);
  FUN_004e4f04(param_2,param_3);
  bVar2 = *(byte *)(param_2 + 0x37);
  if ((char)bVar2 < '\0') {
    uVar4 = *(ulong *)(param_2 + 0x28);
    uVar6 = (*(ulong *)(param_2 + 0x30) & 0x7fffffffffffffff) - 1;
    if (uVar4 == uVar6) goto LAB_004e41e4;
  }
  else {
    if (bVar2 != 0x16) {
      if (0x15 < bVar2) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                   "__s < __min_cap",
                   "__s should never be greater than or equal to the short string capacity");
      }
      uVar4 = (ulong)bVar2;
      *(byte *)(param_2 + 0x37) = bVar2 + 1;
      puVar3 = puVar1;
      goto LAB_004e422c;
    }
    uVar6 = 0x16;
LAB_004e41e4:
    uVar4 = uVar6;
    FUN_0054774c(puVar1,uVar4,1,uVar4,uVar4,0,0);
  }
  *(ulong *)(param_2 + 0x28) = uVar4 + 1;
  puVar3 = *(undefined8 **)(param_2 + 0x20);
LAB_004e422c:
  *(undefined2 *)((long)puVar3 + uVar4) = 10;
  if (-1 < *(char *)(param_2 + 0x37)) {
    uVar7 = *puVar1;
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    param_1[1] = *(undefined8 *)(param_2 + 0x28);
    *param_1 = uVar7;
    param_1[2] = uVar5;
    return;
  }
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  uVar4 = *(ulong *)(param_2 + 0x28);
  if (uVar4 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar4;
    puVar3 = param_1;
  }
  else {
    if (0x7fffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar6 = (uVar4 | 0xf) + 1;
    puVar3 = (undefined8 *)operator_new(uVar6);
    *param_1 = puVar3;
    param_1[1] = uVar4;
    param_1[2] = uVar6 | 0x8000000000000000;
  }
  if ((puVar3 <= puVar1) && (puVar1 < (undefined8 *)((long)puVar3 + uVar4 + 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  memmove(puVar3,puVar1,uVar4 + 1);
  return;
}


// ===== 004e4320  FUN_004e4320 =====

void FUN_004e4320(long param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  char **ppcVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  char **ppcVar9;
  char *local_70;
  ulong local_68;
  byte local_59;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar5 = FUN_004e1ce0(param_2,0);
  if ((uVar5 & 1) == 0) goto LAB_004e45ac;
  bVar2 = *(byte *)(param_1 + 0x37);
  lVar7 = param_1 + 0x20;
  if ((char)bVar2 < '\0') {
    uVar5 = *(ulong *)(param_1 + 0x28);
    uVar8 = (*(ulong *)(param_1 + 0x30) & 0x7fffffffffffffff) - 1;
    if (uVar5 == uVar8) goto LAB_004e4394;
LAB_004e43b8:
    *(ulong *)(param_1 + 0x28) = uVar5 + 1;
    lVar6 = *(long *)(param_1 + 0x20);
  }
  else {
    if (bVar2 == 0x16) {
      uVar8 = 0x16;
LAB_004e4394:
      uVar5 = uVar8;
      FUN_0054774c(lVar7,uVar5,1,uVar5,uVar5,0,0);
      goto LAB_004e43b8;
    }
    if (0x15 < bVar2) goto LAB_004e45d8;
    uVar5 = (ulong)bVar2;
    *(byte *)(param_1 + 0x37) = bVar2 + 1;
    lVar6 = lVar7;
  }
  *(undefined2 *)(lVar6 + uVar5) = 10;
  FUN_004e5930(param_1);
  FUN_004e1d58(&local_70,param_2,0);
  uVar5 = local_68;
  if (-1 < (char)local_59) {
    uVar5 = (ulong)local_59;
  }
  if (uVar5 != 0) {
    ppcVar9 = (char **)local_70;
    if (-1 < (char)local_59) {
      ppcVar9 = &local_70;
    }
    do {
      bVar2 = *(byte *)(param_1 + 0x37);
      cVar1 = *(char *)ppcVar9;
      if ((char)bVar2 < '\0') {
        uVar5 = *(ulong *)(param_1 + 0x28);
        uVar8 = (*(ulong *)(param_1 + 0x30) & 0x7fffffffffffffff) - 1;
        if (uVar5 == uVar8) goto LAB_004e4480;
LAB_004e44a4:
        *(ulong *)(param_1 + 0x28) = uVar5 + 1;
        lVar6 = *(long *)(param_1 + 0x20);
      }
      else {
        if (bVar2 == 0x16) {
          uVar8 = 0x16;
LAB_004e4480:
          uVar5 = uVar8;
          FUN_0054774c(lVar7,uVar5,1,uVar5,uVar5,0,0);
          goto LAB_004e44a4;
        }
        if (0x15 < bVar2) goto LAB_004e45d8;
        uVar5 = (ulong)bVar2;
        *(byte *)(param_1 + 0x37) = bVar2 + 1;
        lVar6 = lVar7;
      }
      *(char *)(lVar6 + uVar5) = cVar1;
      ((char *)(lVar6 + uVar5))[1] = '\0';
      if (*(char *)ppcVar9 == '\n') {
        uVar5 = local_68;
        ppcVar4 = (char **)local_70;
        if (-1 < (char)local_59) {
          uVar5 = (ulong)local_59;
          ppcVar4 = &local_70;
        }
        if (((char *)((long)ppcVar9 + 1) != (char *)((long)ppcVar4 + uVar5)) &&
           (*(char *)((long)ppcVar9 + 1) == '/')) {
          FUN_004e5930(param_1);
        }
      }
      ppcVar9 = (char **)((long)ppcVar9 + 1);
      uVar5 = local_68;
      ppcVar4 = (char **)local_70;
      if (-1 < (char)local_59) {
        uVar5 = (ulong)local_59;
        ppcVar4 = &local_70;
      }
    } while (ppcVar9 != (char **)((long)ppcVar4 + uVar5));
  }
  bVar2 = *(byte *)(param_1 + 0x37);
  if ((char)bVar2 < '\0') {
    uVar5 = *(ulong *)(param_1 + 0x28);
    uVar8 = (*(ulong *)(param_1 + 0x30) & 0x7fffffffffffffff) - 1;
    if (uVar5 == uVar8) goto LAB_004e4550;
LAB_004e4574:
    lVar7 = *(long *)(param_1 + 0x20);
    *(ulong *)(param_1 + 0x28) = uVar5 + 1;
  }
  else {
    if (bVar2 == 0x16) {
      uVar8 = 0x16;
LAB_004e4550:
      uVar5 = uVar8;
      FUN_0054774c(lVar7,uVar5,1,uVar5,uVar5,0,0);
      goto LAB_004e4574;
    }
    if (0x15 < bVar2) {
LAB_004e45d8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                 "__s < __min_cap",
                 "__s should never be greater than or equal to the short string capacity");
    }
    uVar5 = (ulong)bVar2;
    *(byte *)(param_1 + 0x37) = bVar2 + 1;
  }
  *(undefined2 *)(lVar7 + uVar5) = 10;
  if ((char)local_59 < '\0') {
    operator_delete(local_70);
  }
LAB_004e45ac:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004e4604  FUN_004e4604 =====

/* WARNING: Removing unreachable block (ram,0x004e4e4c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_004e4604(long param_1,undefined8 param_2)

{
  long lVar1;
  byte *******pppppppbVar2;
  char *__src;
  byte ******ppppppbVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  undefined4 uVar10;
  byte *******pppppppbVar11;
  byte *******pppppppbVar12;
  undefined8 uVar13;
  byte *******__dest;
  long lVar14;
  long lVar15;
  undefined1 *puVar16;
  ulong uVar17;
  ulong uVar18;
  long local_a8;
  byte *******local_a0;
  byte *******local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulong uStack_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 auStack_6f [7];
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  uVar10 = FUN_004dfb88(param_2);
  switch(uVar10) {
  case 0:
    local_78 = CONCAT17(4,(undefined7)local_78);
    if ((&local_88 < &UNK_001b9a22) && (&DAT_001b9a21 < (undefined *)((ulong)&local_88 | 4)))
    goto LAB_004e4ed4;
    uVar17 = (ulong)local_88 >> 0x20;
    local_88 = (byte *******)CONCAT44((uint)uVar17 & 0xffffff00,0x6c6c756e);
    if (*(char *)(param_1 + 0x58) == '\0') {
      pppppppbVar12 = (byte *******)&local_88;
      uVar17 = 4;
      goto LAB_004e4c48;
    }
    break;
  case 1:
    uVar17 = thunk_FUN_004e0028(param_2);
    if (uVar17 == 0x8000000000000000) {
      puVar16 = auStack_6f;
      uVar17 = 0x8000000000000000;
      do {
        bVar9 = 9 < uVar17;
        puVar16[-2] = (char)uVar17 + (char)(uVar17 / 10) * -10 | 0x30;
        puVar16 = puVar16 + -1;
        uVar17 = uVar17 / 10;
      } while (bVar9);
LAB_004e4c9c:
      local_70 = 0;
      pppppppbVar12 = (byte *******)(puVar16 + -2);
      *(byte *)pppppppbVar12 = 0x2d;
    }
    else {
      if ((long)uVar17 < 0) {
        puVar16 = auStack_6f;
        uVar17 = -uVar17;
        do {
          bVar9 = 9 < uVar17;
          puVar16[-2] = (char)uVar17 + (char)(uVar17 / 10) * -10 | 0x30;
          puVar16 = puVar16 + -1;
          uVar17 = uVar17 / 10;
        } while (bVar9);
        goto LAB_004e4c9c;
      }
      pppppppbVar12 = (byte *******)&local_70;
      local_70 = 0;
      do {
        bVar9 = 9 < uVar17;
        pppppppbVar12 = (byte *******)((long)pppppppbVar12 + -1);
        *(byte *)pppppppbVar12 = (char)uVar17 + (char)(uVar17 / 10) * -10 | 0x30;
        uVar17 = uVar17 / 10;
      } while (bVar9);
    }
    pppppppbVar11 = (byte *******)strlen((char *)pppppppbVar12);
    if ((byte *******)0x7fffffffffffffef < pppppppbVar11) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    goto LAB_004e4cbc;
  case 2:
    uVar17 = thunk_FUN_004e0124(param_2);
    pppppppbVar12 = (byte *******)&local_70;
    local_70 = 0;
    do {
      pppppppbVar12 = (byte *******)((long)pppppppbVar12 + -1);
      *(byte *)pppppppbVar12 = (char)uVar17 + (char)(uVar17 / 10) * -10 | 0x30;
      bVar9 = 9 < uVar17;
      uVar17 = uVar17 / 10;
    } while (bVar9);
    pppppppbVar11 = (byte *******)strlen((char *)pppppppbVar12);
    if ((byte *******)0x7fffffffffffffef < pppppppbVar11) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
LAB_004e4cbc:
    if (pppppppbVar11 < (byte *******)0x17) {
      __dest = (byte *******)&local_a0;
      uStack_90 = CONCAT17((char)pppppppbVar11,(undefined7)uStack_90);
    }
    else {
      uVar17 = ((ulong)pppppppbVar11 | 0xf) + 1;
      __dest = (byte *******)operator_new(uVar17);
      uStack_90 = uVar17 | 0x8000000000000000;
      local_a0 = __dest;
      local_98 = pppppppbVar11;
    }
    pppppppbVar2 = (byte *******)((long)__dest + (long)pppppppbVar11);
    if ((pppppppbVar12 >= __dest && pppppppbVar12 <= pppppppbVar2) &&
        (pppppppbVar12 < __dest || pppppppbVar2 != pppppppbVar12)) {
LAB_004e4ed4:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    if (pppppppbVar11 != (byte *******)0x0) {
      memmove(__dest,pppppppbVar12,(size_t)pppppppbVar11);
    }
    cVar5 = *(char *)(param_1 + 0x58);
    *(byte *)pppppppbVar2 = 0;
    if (cVar5 == '\0') {
      pppppppbVar12 = local_98;
      pppppppbVar11 = local_a0;
      if (-1 < (long)uStack_90) {
        pppppppbVar12 = (byte *******)(uStack_90 >> 0x38);
        pppppppbVar11 = (byte *******)&local_a0;
      }
      FUN_00547cac(param_1 + 0x20,pppppppbVar11,pppppppbVar12);
      pppppppbVar12 = local_a0;
      uVar17 = uStack_90;
    }
    else {
      lVar1 = *(long *)(param_1 + 0x10);
      if (lVar1 == *(long *)(param_1 + 0x18)) {
        FUN_004e7b68(param_1 + 8,&local_a0);
        pppppppbVar12 = local_a0;
        uVar17 = uStack_90;
      }
      else {
        FUN_004e7cc0(lVar1,&local_a0);
        *(long *)(param_1 + 0x10) = lVar1 + 0x18;
        pppppppbVar12 = local_a0;
        uVar17 = uStack_90;
      }
    }
    goto joined_r0x004e4d70;
  case 3:
    FUN_004e0220(param_2);
    FUN_004e2c58(&local_88,0,0x11,0);
    if (*(char *)(param_1 + 0x58) != '\0') break;
LAB_004e47c4:
    pppppppbVar12 = local_88;
    uVar17 = uStack_80;
    if (-1 < (long)local_78) {
      pppppppbVar12 = (byte *******)&local_88;
      uVar17 = local_78 >> 0x38;
    }
LAB_004e4c48:
    FUN_00547cac(param_1 + 0x20,pppppppbVar12,uVar17);
    pppppppbVar12 = local_88;
    uVar17 = local_78;
    goto joined_r0x004e4d70;
  case 4:
    uVar17 = FUN_004dfb90(param_2,&local_a0,&local_a8);
    if ((uVar17 & 1) == 0) {
      local_78 = local_78 & 0xffffffffffffff;
      local_88 = (byte *******)((ulong)local_88 & 0xffffffffffffff00);
      if (*(char *)(param_1 + 0x58) == '\0') {
        pppppppbVar12 = (byte *******)&local_88;
        uVar17 = 0;
        goto LAB_004e4c48;
      }
    }
    else {
      FUN_004e3130(&local_88,local_a0,local_a8 - (long)local_a0,0);
      if (*(char *)(param_1 + 0x58) == '\0') goto LAB_004e47c4;
    }
    break;
  case 5:
    uVar18 = FUN_004e03c4(param_2);
    uVar17 = 4;
    __src = "true";
    if ((uVar18 & 1) == 0) {
      uVar17 = 5;
      __src = "false";
    }
    local_78 = CONCAT17((char)uVar17,(undefined7)local_78);
    if ((&local_88 <= __src) && (__src < (char *)((ulong)&local_88 | uVar17))) goto LAB_004e4ed4;
    memcpy(&local_88,__src,uVar17);
    cVar5 = *(char *)(param_1 + 0x58);
    *(char *)((long)&local_88 + uVar17) = '\0';
    if (cVar5 == '\0') {
      pppppppbVar12 = local_88;
      uVar17 = uStack_80;
      if (-1 < (long)local_78) {
        pppppppbVar12 = (byte *******)&local_88;
        uVar17 = local_78 >> 0x38;
      }
      goto LAB_004e4c48;
    }
    break;
  case 6:
    if (*(long *)(lVar8 + 0x28) == local_68) {
      FUN_004e5180(param_1,param_2);
      return;
    }
    goto LAB_004e4f00;
  case 7:
    FUN_004e1754(&local_a0,param_2);
    if (local_a0 != local_98) {
      local_78 = CONCAT17(1,(undefined7)local_78);
      if ((&local_88 < &UNK_001d05be) && (&DAT_001d05bd < (undefined *)((ulong)&local_88 | 1)))
      goto LAB_004e4ed4;
      local_88 = (byte *******)CONCAT62(local_88._2_6_,0x7b);
      FUN_004e5930(param_1);
      lVar1 = param_1 + 0x20;
      uVar17 = uStack_80;
      pppppppbVar12 = local_88;
      if (-1 < (long)local_78) {
        uVar17 = local_78 >> 0x38;
        pppppppbVar12 = (byte *******)&local_88;
      }
      FUN_00547cac(lVar1,pppppppbVar12,uVar17);
      if ((long)local_78 < 0) {
        operator_delete(local_88);
      }
      uVar4 = *(uint *)(param_1 + 0x54);
      uVar17 = (ulong)uVar4;
      if (uVar4 < 0x17) {
        pppppppbVar12 = (byte *******)&local_88;
        local_78 = CONCAT17((char)uVar4,(undefined7)local_78);
        if (uVar4 == 0) goto LAB_004e4a68;
      }
      else {
        pppppppbVar12 = (byte *******)operator_new((uVar17 | 0xf) + 1);
        local_78 = (uVar17 | 0xf) + 0x8000000000000001;
        local_88 = pppppppbVar12;
        uStack_80 = uVar17;
      }
      memset(pppppppbVar12,0x20,uVar17);
LAB_004e4a68:
      *(byte *)((long)pppppppbVar12 + uVar17) = 0;
      lVar15 = param_1 + 0x38;
      uVar17 = uStack_80;
      pppppppbVar12 = local_88;
      if (-1 < (long)local_78) {
        uVar17 = local_78 >> 0x38;
        pppppppbVar12 = (byte *******)&local_88;
      }
      FUN_00547cac(lVar15,pppppppbVar12,uVar17);
      pppppppbVar12 = local_a0;
      if ((long)local_78 < 0) {
        operator_delete(local_88);
        pppppppbVar12 = local_a0;
      }
      while( true ) {
        uVar13 = FUN_004e138c(param_2,pppppppbVar12);
        FUN_004e4320(param_1,uVar13);
        ppppppbVar3 = pppppppbVar12[1];
        pppppppbVar11 = (byte *******)*pppppppbVar12;
        if (-1 < (char)*(byte *)((long)pppppppbVar12 + 0x17)) {
          ppppppbVar3 = (byte ******)(ulong)*(byte *)((long)pppppppbVar12 + 0x17);
          pppppppbVar11 = pppppppbVar12;
        }
        FUN_004e3130(&local_88,pppppppbVar11,ppppppbVar3,0);
        FUN_004e5930(param_1);
        uVar17 = uStack_80;
        pppppppbVar11 = local_88;
        if (-1 < (long)local_78) {
          uVar17 = local_78 >> 0x38;
          pppppppbVar11 = (byte *******)&local_88;
        }
        FUN_00547cac(lVar1,pppppppbVar11,uVar17);
        if ((long)local_78 < 0) {
          operator_delete(local_88);
        }
        FUN_00547cac(lVar1,&DAT_001b3795,3);
        FUN_004e4604(param_1,uVar13);
        if (pppppppbVar12 + 3 == local_98) break;
        bVar6 = *(byte *)(param_1 + 0x37);
        if ((char)bVar6 < '\0') {
          uVar17 = *(ulong *)(param_1 + 0x28);
          uVar18 = (*(ulong *)(param_1 + 0x30) & 0x7fffffffffffffff) - 1;
          if (uVar17 == uVar18) goto LAB_004e4abc;
LAB_004e4ae0:
          lVar14 = *(long *)(param_1 + 0x20);
          *(ulong *)(param_1 + 0x28) = uVar17 + 1;
        }
        else {
          if (bVar6 == 0x16) {
            uVar18 = 0x16;
LAB_004e4abc:
            uVar17 = uVar18;
            FUN_0054774c(lVar1,uVar17,1,uVar17,uVar17,0,0);
            goto LAB_004e4ae0;
          }
          if (0x15 < bVar6) goto LAB_004e4eac;
          uVar17 = (ulong)bVar6;
          *(byte *)(param_1 + 0x37) = bVar6 + 1;
          lVar14 = lVar1;
        }
        *(undefined2 *)(lVar14 + uVar17) = 0x2c;
        FUN_004e4f04(param_1,uVar13);
        pppppppbVar12 = pppppppbVar12 + 3;
      }
      FUN_004e4f04(param_1,uVar13);
      bVar6 = *(byte *)(param_1 + 0x4f);
      uVar18 = (ulong)*(uint *)(param_1 + 0x54);
      uVar17 = *(ulong *)(param_1 + 0x40);
      if (-1 < (char)bVar6) {
        uVar17 = (ulong)bVar6;
      }
      uVar7 = uVar17 - uVar18;
      if (uVar17 < uVar18) {
        FUN_0054809c(lVar15,-uVar18,0);
      }
      else {
        if ((char)bVar6 < '\0') {
          lVar15 = *(long *)(param_1 + 0x38);
          *(ulong *)(param_1 + 0x40) = uVar7;
        }
        else {
          if (0x16 < uVar7) {
LAB_004e4eac:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          *(char *)(param_1 + 0x4f) = (char)uVar7;
        }
        *(undefined1 *)(lVar15 + uVar7) = 0;
      }
      local_78 = CONCAT17(1,(undefined7)local_78);
      if ((&local_88 < &UNK_001b0cbc) && (&DAT_001b0cbb < (undefined *)((ulong)&local_88 | 1)))
      goto LAB_004e4ed4;
      local_88 = (byte *******)CONCAT62(local_88._2_6_,0x7d);
      FUN_004e5930(param_1);
      pppppppbVar12 = local_88;
      uVar17 = uStack_80;
      if (-1 < (long)local_78) {
        pppppppbVar12 = (byte *******)&local_88;
        uVar17 = local_78 >> 0x38;
      }
      goto LAB_004e4e04;
    }
    local_78 = CONCAT17(2,(undefined7)local_78);
    if ((&local_88 < &UNK_001c212f) && (&UNK_001c212e < (undefined *)((ulong)&local_88 | 2)))
    goto LAB_004e4ed4;
    local_88._2_6_ = local_88._2_6_ & 0xffffffffff00;
    local_88 = (byte *******)CONCAT62(local_88._2_6_,0x7d7b);
    if (*(char *)(param_1 + 0x58) == '\0') {
      pppppppbVar12 = (byte *******)&local_88;
      uVar17 = 2;
LAB_004e4e04:
      FUN_00547cac(param_1 + 0x20,pppppppbVar12,uVar17);
    }
    else {
      lVar1 = *(long *)(param_1 + 0x10);
      if (lVar1 == *(long *)(param_1 + 0x18)) {
        FUN_004e7b68(param_1 + 8,&local_88);
      }
      else {
        FUN_004e7cc0(lVar1,&local_88);
        *(long *)(param_1 + 0x10) = lVar1 + 0x18;
      }
    }
    if ((long)local_78 < 0) {
      operator_delete(local_88);
    }
    if (local_a0 == (byte *******)0x0) goto switchD_004e4660_default;
    for (; local_98 != local_a0; local_98 = local_98 + -3) {
    }
    local_98 = local_a0;
    pppppppbVar12 = local_a0;
    goto LAB_004e4e60;
  default:
    goto switchD_004e4660_default;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == *(long *)(param_1 + 0x18)) {
    FUN_004e7b68(param_1 + 8,&local_88);
    pppppppbVar12 = local_88;
    uVar17 = local_78;
  }
  else {
    FUN_004e7cc0(lVar1,&local_88);
    *(long *)(param_1 + 0x10) = lVar1 + 0x18;
    pppppppbVar12 = local_88;
    uVar17 = local_78;
  }
joined_r0x004e4d70:
  if ((long)uVar17 < 0) {
LAB_004e4e60:
    operator_delete(pppppppbVar12);
  }
switchD_004e4660_default:
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
LAB_004e4f00:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004e4f04  FUN_004e4f04 =====

void FUN_004e4f04(long param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 ****ppppuVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  void *local_78 [2];
  char local_61;
  undefined8 ***local_60;
  ulong uStack_58;
  ulong local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_004e1ce0(param_2,1);
  if ((uVar4 & 1) != 0) {
    FUN_004e1d58(local_78,param_2,1);
    plVar5 = (long *)FUN_00547994(local_78,0,&DAT_001d5e07,1);
    uStack_58 = plVar5[1];
    local_60 = (undefined8 ***)*plVar5;
    local_50 = plVar5[2];
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = 0;
    uVar4 = uStack_58;
    ppppuVar3 = (undefined8 ****)local_60;
    if (-1 < (long)local_50) {
      uVar4 = local_50 >> 0x38;
      ppppuVar3 = &local_60;
    }
    FUN_00547cac(param_1 + 0x20,ppppuVar3,uVar4);
    if ((long)local_50 < 0) {
      operator_delete(local_60);
    }
    if (local_61 < '\0') {
      operator_delete(local_78[0]);
    }
  }
  uVar4 = FUN_004e1ce0(param_2,2);
  if ((uVar4 & 1) == 0) goto LAB_004e512c;
  bVar1 = *(byte *)(param_1 + 0x37);
  lVar8 = param_1 + 0x20;
  if ((char)bVar1 < '\0') {
    uVar4 = *(ulong *)(param_1 + 0x28);
    uVar6 = (*(ulong *)(param_1 + 0x30) & 0x7fffffffffffffff) - 1;
    if (uVar4 == uVar6) goto LAB_004e5014;
LAB_004e5038:
    *(ulong *)(param_1 + 0x28) = uVar4 + 1;
    lVar7 = *(long *)(param_1 + 0x20);
  }
  else {
    if (bVar1 == 0x16) {
      uVar6 = 0x16;
LAB_004e5014:
      uVar4 = uVar6;
      FUN_0054774c(lVar8,uVar4,1,uVar4,uVar4,0,0);
      goto LAB_004e5038;
    }
    if (0x15 < bVar1) goto LAB_004e5154;
    uVar4 = (ulong)bVar1;
    *(byte *)(param_1 + 0x37) = bVar1 + 1;
    lVar7 = lVar8;
  }
  *(undefined2 *)(lVar7 + uVar4) = 10;
  FUN_004e1d58(&local_60,param_2,2);
  uVar4 = uStack_58;
  ppppuVar3 = (undefined8 ****)local_60;
  if (-1 < (long)local_50) {
    uVar4 = local_50 >> 0x38;
    ppppuVar3 = &local_60;
  }
  FUN_00547cac(lVar8,ppppuVar3,uVar4);
  if ((long)local_50 < 0) {
    operator_delete(local_60);
    bVar1 = *(byte *)(param_1 + 0x37);
    if (-1 < (char)bVar1) goto LAB_004e50a8;
LAB_004e50cc:
    uVar6 = *(ulong *)(param_1 + 0x28);
    uVar4 = (*(ulong *)(param_1 + 0x30) & 0x7fffffffffffffff) - 1;
    if (uVar6 == uVar4) {
LAB_004e50e0:
      uVar6 = uVar4;
      FUN_0054774c(lVar8,uVar6,1,uVar6,uVar6,0,0);
    }
    lVar8 = *(long *)(param_1 + 0x20);
    *(ulong *)(param_1 + 0x28) = uVar6 + 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x37);
    if ((char)bVar1 < '\0') goto LAB_004e50cc;
LAB_004e50a8:
    if (bVar1 == 0x16) {
      uVar4 = 0x16;
      goto LAB_004e50e0;
    }
    if (0x15 < bVar1) {
LAB_004e5154:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                 "__s < __min_cap",
                 "__s should never be greater than or equal to the short string capacity");
    }
    uVar6 = (ulong)bVar1;
    *(byte *)(param_1 + 0x37) = bVar1 + 1;
  }
  *(undefined2 *)(lVar8 + uVar6) = 10;
LAB_004e512c:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004e5180  FUN_004e5180 =====

void FUN_004e5180(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  byte bVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 ****ppppuVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 ***local_80;
  ulong uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  uVar9 = FUN_004e04c8(param_2);
  if (uVar9 == 0) {
    local_70 = CONCAT17(2,(undefined7)local_70);
    if ((&local_80 < &UNK_001b9a27) && (&UNK_001b9a26 < (undefined *)((ulong)&local_80 | 2))) {
LAB_004e56e0:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    local_80._2_6_ = (uint6)((ulong)local_80 >> 0x10) & 0xffffffffff00;
    local_80 = (undefined8 ***)CONCAT62(local_80._2_6_,0x5d5b);
    if (*(char *)(param_1 + 0x58) == '\0') {
      ppppuVar11 = &local_80;
      uVar10 = 2;
LAB_004e564c:
      FUN_00547cac(param_1 + 0x20,ppppuVar11,uVar10);
    }
    else {
      lVar1 = *(long *)(param_1 + 0x10);
      if (lVar1 == *(long *)(param_1 + 0x18)) {
        FUN_004e7b68(param_1 + 8,&local_80);
      }
      else {
        FUN_004e7cc0(lVar1,&local_80);
        *(long *)(param_1 + 0x10) = lVar1 + 0x18;
      }
    }
    if ((long)local_70 < 0) {
      operator_delete(local_80);
    }
    if (*(long *)(lVar7 + 0x28) == local_68) {
      return;
    }
LAB_004e5708:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar10 = FUN_004e570c(param_1,param_2);
  if ((uVar10 & 1) == 0) {
    lVar1 = param_1 + 0x20;
    FUN_00547cac(lVar1,&DAT_001b0cbd,2);
    plVar2 = *(long **)(param_1 + 8);
    if ((long *)*(long *)(param_1 + 0x10) == plVar2) {
LAB_004e5690:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x587,
                 "__n < size()","vector[] index out of bounds");
    }
    uVar10 = plVar2[1];
    plVar8 = (long *)*plVar2;
    if (-1 < (char)*(byte *)((long)plVar2 + 0x17)) {
      uVar10 = (ulong)*(byte *)((long)plVar2 + 0x17);
      plVar8 = plVar2;
    }
    FUN_00547cac(lVar1,plVar8,uVar10);
    if (uVar9 != 1) {
      lVar15 = 0;
      uVar10 = 1;
      do {
        FUN_00547cac(lVar1,&DAT_001e1644,2);
        uVar14 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * -0x5555555555555555;
        if (uVar14 < uVar10 || uVar14 - uVar10 == 0) goto LAB_004e5690;
        lVar17 = *(long *)(param_1 + 8) + lVar15;
        uVar14 = *(ulong *)(lVar17 + 0x20);
        plVar2 = (long *)*(long *)(lVar17 + 0x18);
        if (-1 < (char)*(byte *)(lVar17 + 0x2f)) {
          uVar14 = (ulong)*(byte *)(lVar17 + 0x2f);
          plVar2 = (long *)(lVar17 + 0x18);
        }
        FUN_00547cac(lVar1,plVar2,uVar14);
        uVar10 = uVar10 + 1;
        lVar15 = lVar15 + 0x18;
      } while (uVar9 != uVar10);
    }
    if (*(long *)(lVar7 + 0x28) == local_68) {
      FUN_00547cac(lVar1,&DAT_001bc69f,2);
      return;
    }
    goto LAB_004e5708;
  }
  local_70 = CONCAT17(1,(undefined7)local_70);
  if ((&local_80 < &UNK_0019769b) && (&DAT_0019769a < (undefined *)((ulong)&local_80 | 1)))
  goto LAB_004e56e0;
  local_80 = (undefined8 ***)CONCAT62(local_80._2_6_,0x5b);
  FUN_004e5930(param_1);
  lVar1 = param_1 + 0x20;
  uVar10 = uStack_78;
  ppppuVar11 = (undefined8 ****)local_80;
  if (-1 < (long)local_70) {
    uVar10 = local_70 >> 0x38;
    ppppuVar11 = &local_80;
  }
  FUN_00547cac(lVar1,ppppuVar11,uVar10);
  if ((long)local_70 < 0) {
    operator_delete(local_80);
  }
  uVar5 = *(uint *)(param_1 + 0x54);
  uVar10 = (ulong)uVar5;
  if (uVar5 < 0x17) {
    ppppuVar11 = &local_80;
    local_70 = CONCAT17((char)uVar5,(undefined7)local_70);
    if (uVar5 == 0) goto LAB_004e53f0;
  }
  else {
    ppppuVar11 = (undefined8 ****)operator_new((uVar10 | 0xf) + 1);
    local_70 = (uVar10 | 0xf) + 0x8000000000000001;
    local_80 = ppppuVar11;
    uStack_78 = uVar10;
  }
  memset(ppppuVar11,0x20,uVar10);
LAB_004e53f0:
  *(undefined1 *)((long)ppppuVar11 + uVar10) = 0;
  lVar15 = param_1 + 0x38;
  uVar10 = uStack_78;
  ppppuVar11 = (undefined8 ****)local_80;
  if (-1 < (long)local_70) {
    uVar10 = local_70 >> 0x38;
    ppppuVar11 = &local_80;
  }
  FUN_00547cac(lVar15,ppppuVar11,uVar10);
  if ((long)local_70 < 0) {
    operator_delete(local_80);
  }
  lVar3 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar17 = 0;
  uVar10 = 0;
  while( true ) {
    uVar12 = FUN_004e09f8(param_2,uVar10 & 0xffffffff);
    FUN_004e4320(param_1,uVar12);
    if (lVar3 == lVar4) {
      FUN_004e5930(param_1);
      FUN_004e4604(param_1,uVar12);
    }
    else {
      uVar14 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * -0x5555555555555555;
      if (uVar14 < uVar10 || uVar14 - uVar10 == 0) goto LAB_004e5690;
      plVar2 = (long *)(*(long *)(param_1 + 8) + lVar17);
      FUN_004e5930(param_1);
      uVar14 = plVar2[1];
      plVar8 = (long *)*plVar2;
      if (-1 < (char)*(byte *)((long)plVar2 + 0x17)) {
        uVar14 = (ulong)*(byte *)((long)plVar2 + 0x17);
        plVar8 = plVar2;
      }
      FUN_00547cac(lVar1,plVar8,uVar14);
    }
    if (uVar9 - 1 == uVar10) break;
    bVar6 = *(byte *)(param_1 + 0x37);
    if ((char)bVar6 < '\0') {
      uVar14 = *(ulong *)(param_1 + 0x28);
      uVar16 = (*(ulong *)(param_1 + 0x30) & 0x7fffffffffffffff) - 1;
      if (uVar14 == uVar16) goto LAB_004e5444;
LAB_004e5468:
      lVar13 = *(long *)(param_1 + 0x20);
      *(ulong *)(param_1 + 0x28) = uVar14 + 1;
    }
    else {
      if (bVar6 == 0x16) {
        uVar16 = 0x16;
LAB_004e5444:
        uVar14 = uVar16;
        FUN_0054774c(lVar1,uVar14,1,uVar14,uVar14,0,0);
        goto LAB_004e5468;
      }
      if (0x15 < bVar6) goto LAB_004e56b8;
      uVar14 = (ulong)bVar6;
      *(byte *)(param_1 + 0x37) = bVar6 + 1;
      lVar13 = lVar1;
    }
    *(undefined2 *)(lVar13 + uVar14) = 0x2c;
    FUN_004e4f04(param_1,uVar12);
    lVar17 = lVar17 + 0x18;
    uVar10 = uVar10 + 1;
  }
  FUN_004e4f04(param_1,uVar12);
  bVar6 = *(byte *)(param_1 + 0x4f);
  uVar14 = (ulong)*(uint *)(param_1 + 0x54);
  uVar10 = *(ulong *)(param_1 + 0x40);
  if (-1 < (char)bVar6) {
    uVar10 = (ulong)bVar6;
  }
  uVar16 = uVar10 - uVar14;
  if (uVar10 < uVar14) {
    FUN_0054809c(lVar15,-uVar14,0);
  }
  else {
    if ((char)bVar6 < '\0') {
      lVar15 = *(long *)(param_1 + 0x38);
      *(ulong *)(param_1 + 0x40) = uVar16;
    }
    else {
      if (0x16 < uVar16) {
LAB_004e56b8:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                   "__s < __min_cap",
                   "__s should never be greater than or equal to the short string capacity");
      }
      *(char *)(param_1 + 0x4f) = (char)uVar16;
    }
    *(undefined1 *)(lVar15 + uVar16) = 0;
  }
  local_70 = CONCAT17(1,(undefined7)local_70);
  if ((&local_80 < &UNK_0019fa9f) && (&DAT_0019fa9e < (undefined *)((ulong)&local_80 | 1)))
  goto LAB_004e56e0;
  local_80 = (undefined8 ***)CONCAT62(local_80._2_6_,0x5d);
  FUN_004e5930(param_1);
  ppppuVar11 = (undefined8 ****)local_80;
  uVar10 = uStack_78;
  if (-1 < (long)local_70) {
    ppppuVar11 = &local_80;
    uVar10 = local_70 >> 0x38;
  }
  goto LAB_004e564c;
}


// ===== 004e570c  FUN_004e570c =====

/* WARNING: Removing unreachable block (ram,0x004e58c4) */

byte FUN_004e570c(long param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  long lVar11;
  
  uVar3 = FUN_004e04c8(param_2);
  lVar11 = *(long *)(param_1 + 8);
  bVar2 = *(uint *)(param_1 + 0x50) <= uVar3 * 3;
  for (lVar7 = *(long *)(param_1 + 0x10); lVar7 != lVar11; lVar7 = lVar7 + -0x18) {
  }
  *(long *)(param_1 + 0x10) = lVar11;
  if ((uVar3 != 0) && (uVar3 * 3 < *(uint *)(param_1 + 0x50))) {
    uVar10 = 1;
    do {
      uVar4 = FUN_004e09f8(param_2,uVar10 - 1);
      uVar5 = FUN_004e05c4();
      if (((uVar5 & 1) == 0) && (uVar5 = FUN_004e05d4(uVar4), (uVar5 & 1) == 0)) {
        bVar2 = 0;
      }
      else {
        bVar2 = FUN_004e0534(uVar4);
        bVar2 = bVar2 ^ 1;
      }
    } while ((uVar10 < uVar3) && (uVar10 = uVar10 + 1, (bVar2 & 1) == 0));
  }
  bVar9 = 1;
  if ((bVar2 & 1) == 0) {
    FUN_0047a51c((long *)(param_1 + 8),(ulong)uVar3);
    *(undefined1 *)(param_1 + 0x58) = 1;
    uVar10 = uVar3 * 2 + 2;
    if (uVar3 == 0) {
      bVar9 = 0;
    }
    else {
      uVar5 = 0;
      bVar9 = 0;
      lVar7 = 0x17;
      do {
        uVar4 = FUN_004e09f8(param_2,uVar5 & 0xffffffff);
        uVar6 = FUN_004e1ce0(uVar4,0);
        if ((uVar6 & 1) == 0) {
          bVar2 = 1;
          uVar6 = FUN_004e1ce0(uVar4,1);
          if ((uVar6 & 1) == 0) {
            bVar2 = FUN_004e1ce0(uVar4,2);
          }
        }
        else {
          bVar2 = 1;
        }
        uVar4 = FUN_004e09f8(param_2,uVar5 & 0xffffffff);
        FUN_004e4604(param_1,uVar4);
        uVar6 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * -0x5555555555555555;
        if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x587,
                     "__n < size()","vector[] index out of bounds");
        }
        pbVar1 = (byte *)(*(long *)(param_1 + 8) + lVar7);
        bVar9 = bVar2 | bVar9;
        uVar5 = uVar5 + 1;
        lVar7 = lVar7 + 0x18;
        bVar2 = *pbVar1;
        uVar8 = *(uint *)(pbVar1 + -0xf);
        if (-1 < (char)bVar2) {
          uVar8 = (uint)bVar2;
        }
        uVar10 = uVar10 + uVar8;
      } while (uVar3 != uVar5);
    }
    *(undefined1 *)(param_1 + 0x58) = 0;
    bVar9 = bVar9 | *(uint *)(param_1 + 0x50) <= uVar10;
  }
  return bVar9 & 1;
}


// ===== 004e5930  FUN_004e5930 =====

void FUN_004e5930(long param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  byte bVar4;
  char cVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  bVar4 = *(byte *)(param_1 + 0x37);
  uVar8 = (ulong)bVar4;
  uVar9 = *(ulong *)(param_1 + 0x28);
  plVar1 = (long *)(param_1 + 0x20);
  uVar3 = uVar9;
  if (-1 < (char)bVar4) {
    uVar3 = uVar8;
  }
  if (uVar3 == 0) goto LAB_004e5a10;
  plVar7 = (long *)*plVar1;
  plVar2 = plVar7;
  if (-1 < (char)bVar4) {
    plVar2 = plVar1;
  }
  cVar5 = *(char *)((long)plVar2 + (uVar3 - 1));
  if (cVar5 == '\n') goto LAB_004e5a10;
  if (cVar5 == ' ') {
    return;
  }
  if ((char)bVar4 < '\0') {
    uVar8 = uVar9;
    if (uVar9 == (*(ulong *)(param_1 + 0x30) & 0x7fffffffffffffff) - 1) goto LAB_004e59ac;
LAB_004e59d0:
    *(ulong *)(param_1 + 0x28) = uVar8 + 1;
  }
  else {
    if (bVar4 == 0x16) {
      uVar9 = 0x16;
LAB_004e59ac:
      FUN_0054774c(plVar1,uVar9,1,uVar9,uVar9,0,0);
      plVar7 = (long *)*plVar1;
      uVar8 = uVar9;
      goto LAB_004e59d0;
    }
    if (0x15 < bVar4) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                 "__s < __min_cap",
                 "__s should never be greater than or equal to the short string capacity");
    }
    *(byte *)(param_1 + 0x37) = bVar4 + 1;
    plVar7 = plVar1;
  }
  *(undefined2 *)((long)plVar7 + uVar8) = 10;
  if (cVar5 == ' ') {
    return;
  }
LAB_004e5a10:
  uVar3 = *(ulong *)(param_1 + 0x40);
  puVar6 = *(undefined8 **)(param_1 + 0x38);
  if (-1 < (char)*(byte *)(param_1 + 0x4f)) {
    uVar3 = (ulong)*(byte *)(param_1 + 0x4f);
    puVar6 = (undefined8 *)(param_1 + 0x38);
  }
  FUN_00547cac(plVar1,puVar6,uVar3);
  return;
}


// ===== 004e5a68  FUN_004e5a68 =====

undefined8 FUN_004e5a68(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined1 local_3c [4];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)(param_1 + 8) = param_3;
  *(byte *)(param_1 + 0xb0) = *(byte *)(param_1 + 0xb0) & 0xfc | 2;
  if (*(char *)(param_1 + 0x3f) < '\0') {
    **(undefined1 **)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x28) = 0;
    *(undefined1 *)(param_1 + 0x3f) = 0;
  }
  FUN_004e5ba0(param_1,param_2);
  bVar6 = *(byte *)(param_1 + 0xb0);
  if ((bVar6 >> 1 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + 0x50);
    if (-1 < (char)*(byte *)(param_1 + 0x5f)) {
      uVar1 = (ulong)*(byte *)(param_1 + 0x5f);
    }
    if (uVar1 != 0) {
      local_3c[0] = 10;
      uVar5 = FUN_00428964(*(undefined8 *)(param_1 + 8),local_3c,1);
      uVar1 = *(ulong *)(param_1 + 0x30);
      lVar3 = *(long *)(param_1 + 0x28);
      if (-1 < (char)*(byte *)(param_1 + 0x3f)) {
        uVar1 = (ulong)*(byte *)(param_1 + 0x3f);
        lVar3 = param_1 + 0x28;
      }
      FUN_00428964(uVar5,lVar3,uVar1);
      bVar6 = *(byte *)(param_1 + 0xb0);
    }
  }
  *(byte *)(param_1 + 0xb0) = bVar6 | 2;
  FUN_004e5d64(param_1,param_2);
  FUN_004e65b8(param_1,param_2);
  uVar1 = *(ulong *)(param_1 + 0xa0);
  puVar4 = *(undefined8 **)(param_1 + 0x98);
  if (-1 < (char)*(byte *)(param_1 + 0xaf)) {
    uVar1 = (ulong)*(byte *)(param_1 + 0xaf);
    puVar4 = (undefined8 *)(param_1 + 0x98);
  }
  FUN_00428964(*(undefined8 *)(param_1 + 8),puVar4,uVar1);
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


// ===== 004e5ba0  FUN_004e5ba0 =====

void FUN_004e5ba0(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  char local_68;
  undefined7 uStack_67;
  ulong uStack_60;
  byte local_51;
  char local_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*(int *)(param_1 + 0x60) != 0) && (uVar5 = FUN_004e1ce0(param_2,0), (uVar5 & 1) != 0)) {
    if ((*(byte *)(param_1 + 0xb0) >> 1 & 1) == 0) {
      uVar5 = *(ulong *)(param_1 + 0x50);
      if (-1 < (char)*(byte *)(param_1 + 0x5f)) {
        uVar5 = (ulong)*(byte *)(param_1 + 0x5f);
      }
      if (uVar5 != 0) {
        local_68 = '\n';
        uVar6 = FUN_00428964(*(undefined8 *)(param_1 + 8),&local_68,1);
        uVar5 = *(ulong *)(param_1 + 0x30);
        plVar2 = (long *)*(long *)(param_1 + 0x28);
        if (-1 < (char)*(byte *)(param_1 + 0x3f)) {
          uVar5 = (ulong)*(byte *)(param_1 + 0x3f);
          plVar2 = (long *)(param_1 + 0x28);
        }
        FUN_00428964(uVar6,plVar2,uVar5);
      }
    }
    FUN_004e1d58(&local_68,param_2,0);
    pcVar7 = (char *)CONCAT71(uStack_67,local_68);
    uVar8 = (uint)(char)local_51;
    uVar5 = uStack_60;
    if (-1 < (int)uVar8) {
      uVar5 = (ulong)local_51;
    }
    if (uVar5 == 0) {
      uVar8 = uVar8 >> 0x1f;
    }
    else {
      pcVar9 = pcVar7;
      if (-1 < (int)uVar8) {
        pcVar9 = &local_68;
      }
      do {
        local_4c[0] = *pcVar9;
        FUN_00428964(*(undefined8 *)(param_1 + 8),local_4c,1);
        if (*pcVar9 == '\n') {
          uVar5 = uStack_60;
          pcVar7 = (char *)CONCAT71(uStack_67,local_68);
          if (-1 < (char)local_51) {
            uVar5 = (ulong)local_51;
            pcVar7 = &local_68;
          }
          if ((pcVar9 + 1 != pcVar7 + uVar5) && (pcVar9[1] == '/')) {
            uVar5 = *(ulong *)(param_1 + 0x30);
            lVar3 = *(long *)(param_1 + 0x28);
            if (-1 < (char)*(byte *)(param_1 + 0x3f)) {
              uVar5 = (ulong)*(byte *)(param_1 + 0x3f);
              lVar3 = param_1 + 0x28;
            }
            FUN_00428964(*(undefined8 *)(param_1 + 8),lVar3,uVar5);
          }
        }
        pcVar7 = (char *)CONCAT71(uStack_67,local_68);
        pcVar9 = pcVar9 + 1;
        uVar5 = uStack_60;
        pcVar4 = pcVar7;
        if ((char)local_51 >= '\0') {
          uVar5 = (ulong)local_51;
          pcVar4 = &local_68;
        }
        uVar8 = (uint)((char)local_51 < '\0');
      } while (pcVar9 != pcVar4 + uVar5);
    }
    *(byte *)(param_1 + 0xb0) = *(byte *)(param_1 + 0xb0) & 0xfd;
    if (uVar8 != 0) {
      operator_delete(pcVar7);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004e5d64  FUN_004e5d64 =====

/* WARNING: Removing unreachable block (ram,0x004e6504) */
/* WARNING: Type propagation algorithm not settling */

void FUN_004e5d64(long param_1,undefined8 param_2)

{
  byte *******pppppppbVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  bool bVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  byte *******__dest;
  char *pcVar12;
  byte *******pppppppbVar13;
  byte *pbVar14;
  long lVar15;
  undefined8 *puVar16;
  long local_98;
  byte *******local_90;
  ulong local_88;
  undefined8 uStack_80;
  char local_78;
  undefined7 uStack_77;
  undefined8 *local_70;
  byte local_62 [2];
  undefined8 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  uVar8 = FUN_004dfb88(param_2);
  switch(uVar8) {
  case 0:
    if ((*(byte *)(param_1 + 0xb0) & 1) == 0) {
      uVar9 = *(ulong *)(param_1 + 0x88);
      lVar15 = *(long *)(param_1 + 0x80);
      if (-1 < (char)*(byte *)(param_1 + 0x97)) {
        uVar9 = (ulong)*(byte *)(param_1 + 0x97);
        lVar15 = param_1 + 0x80;
      }
      if (*(long *)(lVar4 + 0x28) == local_58) {
        FUN_00428964(*(undefined8 *)(param_1 + 8),lVar15,uVar9);
        return;
      }
      goto LAB_004e65b4;
    }
    lVar15 = *(long *)(param_1 + 0x18);
    if (lVar15 == *(long *)(param_1 + 0x20)) {
      if (*(long *)(lVar4 + 0x28) == local_58) {
        FUN_004e7b68(param_1 + 0x10);
        return;
      }
      goto LAB_004e65b4;
    }
    FUN_004e7cc0(lVar15);
    *(long *)(param_1 + 0x18) = lVar15 + 0x18;
    break;
  case 1:
    uVar9 = thunk_FUN_004e0028(param_2);
    if (uVar9 == 0x8000000000000000) {
      pbVar14 = local_62 + 3;
      uVar9 = 0x8000000000000000;
      do {
        bVar7 = 9 < uVar9;
        pbVar14[-2] = (char)uVar9 + (char)(uVar9 / 10) * -10 | 0x30;
        pbVar14 = pbVar14 + -1;
        uVar9 = uVar9 / 10;
      } while (bVar7);
LAB_004e6354:
      local_60._0_1_ = 0;
      pppppppbVar13 = (byte *******)(pbVar14 + -2);
      *(byte *)pppppppbVar13 = 0x2d;
    }
    else {
      if ((long)uVar9 < 0) {
        pbVar14 = local_62 + 3;
        uVar9 = -uVar9;
        do {
          bVar7 = 9 < uVar9;
          pbVar14[-2] = (char)uVar9 + (char)(uVar9 / 10) * -10 | 0x30;
          pbVar14 = pbVar14 + -1;
          uVar9 = uVar9 / 10;
        } while (bVar7);
        goto LAB_004e6354;
      }
      pppppppbVar13 = (byte *******)(local_62 + 2);
      local_60._0_1_ = 0;
      do {
        bVar7 = 9 < uVar9;
        pppppppbVar13 = (byte *******)((long)pppppppbVar13 + -1);
        *(byte *)pppppppbVar13 = (char)uVar9 + (char)(uVar9 / 10) * -10 | 0x30;
        uVar9 = uVar9 / 10;
      } while (bVar7);
    }
    uVar9 = strlen((char *)pppppppbVar13);
    if (0x7fffffffffffffef < uVar9) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    goto LAB_004e6374;
  case 2:
    uVar9 = thunk_FUN_004e0124(param_2);
    pppppppbVar13 = (byte *******)(local_62 + 2);
    local_60._0_1_ = 0;
    do {
      pppppppbVar13 = (byte *******)((long)pppppppbVar13 + -1);
      *(byte *)pppppppbVar13 = (char)uVar9 + (char)(uVar9 / 10) * -10 | 0x30;
      bVar7 = 9 < uVar9;
      uVar9 = uVar9 / 10;
    } while (bVar7);
    uVar9 = strlen((char *)pppppppbVar13);
    if (0x7fffffffffffffef < uVar9) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
LAB_004e6374:
    if (uVar9 < 0x17) {
      __dest = (byte *******)&local_90;
      uStack_80 = CONCAT17((char)uVar9,(undefined7)uStack_80);
    }
    else {
      uVar11 = (uVar9 | 0xf) + 1;
      __dest = (byte *******)operator_new(uVar11);
      uStack_80 = uVar11 | 0x8000000000000000;
      local_90 = __dest;
      local_88 = uVar9;
    }
    pppppppbVar1 = (byte *******)((long)__dest + uVar9);
    if ((pppppppbVar13 >= __dest && pppppppbVar13 <= pppppppbVar1) &&
        (pppppppbVar13 < __dest || pppppppbVar1 != pppppppbVar13)) {
LAB_004e6560:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    if (uVar9 != 0) {
      memmove(__dest,pppppppbVar13,uVar9);
    }
    bVar2 = *(byte *)(param_1 + 0xb0);
    *(byte *)pppppppbVar1 = 0;
    if ((bVar2 & 1) == 0) {
      uVar9 = local_88;
      pppppppbVar13 = local_90;
      if (-1 < (long)uStack_80) {
        uVar9 = uStack_80 >> 0x38;
        pppppppbVar13 = (byte *******)&local_90;
      }
      FUN_00428964(*(undefined8 *)(param_1 + 8),pppppppbVar13,uVar9);
      pppppppbVar13 = local_90;
    }
    else {
      lVar15 = *(long *)(param_1 + 0x18);
      if (lVar15 == *(long *)(param_1 + 0x20)) {
        FUN_004e7b68(param_1 + 0x10,&local_90);
        pppppppbVar13 = local_90;
      }
      else {
        FUN_004e7cc0(lVar15,&local_90);
        *(long *)(param_1 + 0x18) = lVar15 + 0x18;
        pppppppbVar13 = local_90;
      }
    }
    local_90 = pppppppbVar13;
    if ((long)uStack_80 < 0) {
LAB_004e6518:
      operator_delete(pppppppbVar13);
    }
    break;
  case 3:
    FUN_004e0220(param_2);
    FUN_004e2c58(&local_78,*(byte *)(param_1 + 0xb0) >> 2 & 1,*(undefined4 *)(param_1 + 0xb4),
                 *(undefined4 *)(param_1 + 0xb8));
    if ((*(byte *)(param_1 + 0xb0) & 1) != 0) goto LAB_004e61d0;
LAB_004e5f28:
    bVar7 = (char)local_62[1] < '\0';
    uVar10 = *(undefined8 *)(param_1 + 8);
    pcVar12 = (char *)CONCAT71(uStack_77,local_78);
    if (!bVar7) {
      pcVar12 = &local_78;
    }
    goto LAB_004e6118;
  case 4:
    uVar9 = FUN_004dfb90(param_2,&local_90,&local_98);
    if ((uVar9 & 1) == 0) {
      local_62[1] = 0;
      local_78 = '\0';
      if ((*(byte *)(param_1 + 0xb0) & 1) != 0) goto LAB_004e61d0;
      uVar10 = *(undefined8 *)(param_1 + 8);
      pcVar12 = &local_78;
      local_70 = (undefined8 *)0x0;
      goto LAB_004e611c;
    }
    FUN_004e3130(&local_78,local_90,local_98 - (long)local_90,*(byte *)(param_1 + 0xb0) >> 3 & 1);
    if ((*(byte *)(param_1 + 0xb0) & 1) == 0) goto LAB_004e5f28;
LAB_004e61d0:
    lVar15 = *(long *)(param_1 + 0x18);
    if (lVar15 == *(long *)(param_1 + 0x20)) {
      FUN_004e7b68(param_1 + 0x10,&local_78);
    }
    else {
      FUN_004e7cc0(lVar15,&local_78);
      *(long *)(param_1 + 0x18) = lVar15 + 0x18;
    }
    goto joined_r0x004e620c;
  case 5:
    uVar11 = FUN_004e03c4(param_2);
    uVar9 = 4;
    pcVar12 = "true";
    if ((uVar11 & 1) == 0) {
      uVar9 = 5;
      pcVar12 = "false";
    }
    local_62[1] = (byte)uVar9;
    if ((&local_78 <= pcVar12) && (pcVar12 < (char *)((ulong)&local_78 | uVar9))) goto LAB_004e6560;
    memcpy(&local_78,pcVar12,uVar9);
    bVar2 = *(byte *)(param_1 + 0xb0);
    (&local_78)[uVar9] = '\0';
    if ((bVar2 & 1) != 0) goto LAB_004e61d0;
    uVar10 = *(undefined8 *)(param_1 + 8);
    bVar7 = (char)local_62[1] < '\0';
    pcVar12 = (char *)CONCAT71(uStack_77,local_78);
    if (!bVar7) {
      pcVar12 = &local_78;
    }
LAB_004e6118:
    if (!bVar7) {
      local_70 = (undefined8 *)(ulong)local_62[1];
    }
LAB_004e611c:
    FUN_00428964(uVar10,pcVar12,local_70);
joined_r0x004e620c:
    if (-1 < (char)local_62[1]) break;
    pppppppbVar13 = (byte *******)CONCAT71(uStack_77,local_78);
    goto LAB_004e6518;
  case 6:
    if (*(long *)(lVar4 + 0x28) == local_58) {
      FUN_004e6760(param_1,param_2);
      return;
    }
    goto LAB_004e65b4;
  case 7:
    FUN_004e1754(&local_78,param_2);
    if ((undefined8 *)CONCAT71(uStack_77,local_78) == local_70) {
      uStack_80 = CONCAT17(2,(undefined7)uStack_80);
      if ((&local_90 < &UNK_001c212f) && (&UNK_001c212e < (undefined *)((ulong)&local_90 | 2)))
      goto LAB_004e6560;
      local_90._2_6_ = local_90._2_6_ & 0xffffffffff00;
      local_90 = (byte *******)CONCAT62(local_90._2_6_,0x7d7b);
      if ((*(byte *)(param_1 + 0xb0) & 1) == 0) {
        FUN_00428964(*(undefined8 *)(param_1 + 8),&local_90,2);
      }
      else {
        lVar15 = *(long *)(param_1 + 0x18);
        if (lVar15 == *(long *)(param_1 + 0x20)) {
          FUN_004e7b68(param_1 + 0x10,&local_90);
        }
        else {
          FUN_004e7cc0(lVar15,&local_90);
          *(long *)(param_1 + 0x18) = lVar15 + 0x18;
        }
      }
    }
    else {
      uStack_80 = CONCAT17(1,(undefined7)uStack_80);
      if ((&local_90 < &UNK_001d05be) && (&DAT_001d05bd < (undefined *)((ulong)&local_90 | 1)))
      goto LAB_004e6560;
      local_90 = (byte *******)CONCAT62(local_90._2_6_,0x7b);
      FUN_004e6cf0(param_1,&local_90);
      if ((long)uStack_80 < 0) {
        operator_delete(local_90);
      }
      lVar15 = param_1 + 0x28;
      uVar9 = *(ulong *)(param_1 + 0x50);
      puVar16 = *(undefined8 **)(param_1 + 0x48);
      if (-1 < (char)*(byte *)(param_1 + 0x5f)) {
        uVar9 = (ulong)*(byte *)(param_1 + 0x5f);
        puVar16 = (undefined8 *)(param_1 + 0x48);
      }
      FUN_00547cac(lVar15,puVar16,uVar9);
      puVar16 = (undefined8 *)CONCAT71(uStack_77,local_78);
      while( true ) {
        uVar10 = FUN_004e138c(param_2,puVar16);
        FUN_004e5ba0(param_1,uVar10);
        uVar9 = puVar16[1];
        puVar5 = (undefined8 *)*puVar16;
        if (-1 < (char)*(byte *)((long)puVar16 + 0x17)) {
          uVar9 = (ulong)*(byte *)((long)puVar16 + 0x17);
          puVar5 = puVar16;
        }
        FUN_004e3130(&local_90,puVar5,uVar9,*(byte *)(param_1 + 0xb0) >> 3 & 1);
        FUN_004e6cf0(param_1,&local_90);
        if ((long)uStack_80 < 0) {
          operator_delete(local_90);
        }
        uVar9 = *(ulong *)(param_1 + 0x70);
        lVar6 = *(long *)(param_1 + 0x68);
        if (-1 < (char)*(byte *)(param_1 + 0x7f)) {
          uVar9 = (ulong)*(byte *)(param_1 + 0x7f);
          lVar6 = param_1 + 0x68;
        }
        FUN_00428964(*(undefined8 *)(param_1 + 8),lVar6,uVar9);
        FUN_004e5d64(param_1,uVar10);
        puVar16 = puVar16 + 3;
        if (puVar16 == local_70) break;
        FUN_00428964(*(undefined8 *)(param_1 + 8),&DAT_001ea264,1);
        FUN_004e65b8(param_1,uVar10);
      }
      FUN_004e65b8(param_1,uVar10);
      bVar2 = *(byte *)(param_1 + 0x3f);
      uVar9 = *(ulong *)(param_1 + 0x30);
      if (-1 < (char)bVar2) {
        uVar9 = (ulong)bVar2;
      }
      uVar11 = *(ulong *)(param_1 + 0x50);
      if (-1 < (char)*(byte *)(param_1 + 0x5f)) {
        uVar11 = (ulong)*(byte *)(param_1 + 0x5f);
      }
      uVar3 = uVar9 - uVar11;
      if (uVar9 < uVar11) {
        FUN_0054809c(lVar15,-uVar11,0);
      }
      else {
        if ((char)bVar2 < '\0') {
          lVar15 = *(long *)(param_1 + 0x28);
          *(ulong *)(param_1 + 0x30) = uVar3;
        }
        else {
          if (0x16 < uVar3) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          *(char *)(param_1 + 0x3f) = (char)uVar3;
        }
        *(undefined1 *)(lVar15 + uVar3) = 0;
      }
      uStack_80 = CONCAT17(1,(undefined7)uStack_80);
      if ((&local_90 < &UNK_001b0cbc) && (&DAT_001b0cbb < (undefined *)((ulong)&local_90 | 1)))
      goto LAB_004e6560;
      local_90 = (byte *******)CONCAT62(local_90._2_6_,0x7d);
      FUN_004e6cf0(param_1,&local_90);
    }
    if ((long)uStack_80 < 0) {
      operator_delete(local_90);
    }
    if ((undefined8 *)CONCAT71(uStack_77,local_78) == (undefined8 *)0x0) break;
    for (; local_70 != (undefined8 *)CONCAT71(uStack_77,local_78); local_70 = local_70 + -3) {
    }
    pppppppbVar13 = (byte *******)CONCAT71(uStack_77,local_78);
    goto LAB_004e6518;
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
LAB_004e65b4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004e65b8  FUN_004e65b8 =====

void FUN_004e65b8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  void *local_68 [2];
  char local_51;
  undefined8 ***local_50;
  ulong uStack_48;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0x60) != 0) {
    uVar3 = FUN_004e1ce0(param_2,1);
    if ((uVar3 & 1) != 0) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      FUN_004e1d58(local_68,param_2,1);
      plVar4 = (long *)FUN_00547994(local_68,0,&DAT_001d5e07,1);
      uStack_48 = plVar4[1];
      local_50 = (undefined8 ***)*plVar4;
      local_40 = plVar4[2];
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = 0;
      uVar3 = uStack_48;
      ppppuVar2 = (undefined8 ****)local_50;
      if (-1 < (long)local_40) {
        uVar3 = local_40 >> 0x38;
        ppppuVar2 = &local_50;
      }
      FUN_00428964(uVar5,ppppuVar2,uVar3);
      if ((long)local_40 < 0) {
        operator_delete(local_50);
      }
      if (local_51 < '\0') {
        operator_delete(local_68[0]);
      }
    }
    uVar3 = FUN_004e1ce0(param_2,2);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(param_1 + 0x50);
      if (-1 < (char)*(byte *)(param_1 + 0x5f)) {
        uVar3 = (ulong)*(byte *)(param_1 + 0x5f);
      }
      if (uVar3 != 0) {
        local_50 = (undefined8 ***)CONCAT71(local_50._1_7_,10);
        uVar5 = FUN_00428964(*(undefined8 *)(param_1 + 8),&local_50,1);
        uVar3 = *(ulong *)(param_1 + 0x30);
        plVar4 = (long *)*(long *)(param_1 + 0x28);
        if (-1 < (char)*(byte *)(param_1 + 0x3f)) {
          uVar3 = (ulong)*(byte *)(param_1 + 0x3f);
          plVar4 = (long *)(param_1 + 0x28);
        }
        FUN_00428964(uVar5,plVar4,uVar3);
      }
      uVar5 = *(undefined8 *)(param_1 + 8);
      FUN_004e1d58(&local_50,param_2,2);
      uVar3 = uStack_48;
      ppppuVar2 = (undefined8 ****)local_50;
      if (-1 < (long)local_40) {
        uVar3 = local_40 >> 0x38;
        ppppuVar2 = &local_50;
      }
      FUN_00428964(uVar5,ppppuVar2,uVar3);
      if ((long)local_40 < 0) {
        operator_delete(local_50);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004e6760  FUN_004e6760 =====

void FUN_004e6760(long param_1,undefined8 param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  byte *pbVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  byte bVar17;
  ulong uVar18;
  long lVar19;
  undefined local_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined5 uStack_7d;
  char local_69;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  uVar12 = FUN_004e04c8(param_2);
  if (uVar12 == 0) {
    local_69 = '\x02';
    if ((&local_80 < &UNK_001b9a27) && (&UNK_001b9a26 < (undefined *)((ulong)&local_80 | 2)))
    goto LAB_004e6c9c;
    uStack_7e = 0;
    local_80 = 0x5b;
    uStack_7f = 0x5d;
    if ((*(byte *)(param_1 + 0xb0) & 1) == 0) {
      FUN_00428964(*(undefined8 *)(param_1 + 8),&local_80,2);
    }
    else {
      lVar14 = *(long *)(param_1 + 0x18);
      if (lVar14 == *(long *)(param_1 + 0x20)) {
        FUN_004e7b68(param_1 + 0x10,&local_80);
      }
      else {
        FUN_004e7cc0(lVar14,&local_80);
        *(long *)(param_1 + 0x18) = lVar14 + 0x18;
      }
    }
  }
  else {
    if ((*(int *)(param_1 + 0x60) != 2) &&
       (uVar13 = FUN_004e6dc8(param_1,param_2), (uVar13 & 1) == 0)) {
      FUN_00428964(*(undefined8 *)(param_1 + 8),&DAT_0019769a,1);
      uVar13 = *(ulong *)(param_1 + 0x50);
      if (-1 < (char)*(byte *)(param_1 + 0x5f)) {
        uVar13 = (ulong)*(byte *)(param_1 + 0x5f);
      }
      if (uVar13 != 0) {
        FUN_00428964(*(undefined8 *)(param_1 + 8),&DAT_001d5e07,1);
      }
      plVar5 = *(long **)(param_1 + 0x10);
      if ((long *)*(long *)(param_1 + 0x18) == plVar5) {
LAB_004e6c74:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x587,
                   "__n < size()","vector[] index out of bounds");
      }
      uVar13 = plVar5[1];
      plVar9 = (long *)*plVar5;
      if (-1 < (char)*(byte *)((long)plVar5 + 0x17)) {
        uVar13 = (ulong)*(byte *)((long)plVar5 + 0x17);
        plVar9 = plVar5;
      }
      FUN_00428964(*(undefined8 *)(param_1 + 8),plVar9,uVar13);
      if (1 < uVar12) {
        lVar14 = 0x2f;
        uVar13 = 1;
        do {
          uVar18 = *(ulong *)(param_1 + 0x50);
          if (-1 < (char)*(byte *)(param_1 + 0x5f)) {
            uVar18 = (ulong)*(byte *)(param_1 + 0x5f);
          }
          puVar2 = &DAT_001ea264;
          if (uVar18 != 0) {
            puVar2 = &DAT_001e1644;
          }
          uVar15 = 1;
          if (uVar18 != 0) {
            uVar15 = 2;
          }
          FUN_00428964(*(undefined8 *)(param_1 + 8),puVar2,uVar15);
          uVar18 = (*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 3) *
                   -0x5555555555555555;
          if (uVar18 < uVar13 || uVar18 - uVar13 == 0) goto LAB_004e6c74;
          pbVar1 = (byte *)(*(long *)(param_1 + 0x10) + lVar14);
          pbVar3 = *(byte **)(pbVar1 + -0x17);
          uVar18 = *(ulong *)(pbVar1 + -0xf);
          if (-1 < (char)*pbVar1) {
            pbVar3 = pbVar1 + -0x17;
            uVar18 = (ulong)*pbVar1;
          }
          FUN_00428964(*(undefined8 *)(param_1 + 8),pbVar3,uVar18);
          uVar13 = uVar13 + 1;
          lVar14 = lVar14 + 0x18;
        } while (uVar12 != uVar13);
      }
      uVar13 = *(ulong *)(param_1 + 0x50);
      if (-1 < (char)*(byte *)(param_1 + 0x5f)) {
        uVar13 = (ulong)*(byte *)(param_1 + 0x5f);
      }
      if (uVar13 != 0) {
        FUN_00428964(*(undefined8 *)(param_1 + 8),&DAT_001d5e07,1);
      }
      if (*(long *)(lVar8 + 0x28) == local_68) {
        FUN_00428964(*(undefined8 *)(param_1 + 8),&DAT_0019fa9e,1);
        return;
      }
      goto LAB_004e6cec;
    }
    local_69 = '\x01';
    if ((&local_80 <= &DAT_0019769a) && (&UNK_0019769b <= (undefined *)((ulong)&local_80 | 1))) {
LAB_004e6c9c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    local_80 = 0x5b;
    uStack_7f = 0;
    FUN_004e6cf0(param_1,&local_80);
    if (local_69 < '\0') {
      operator_delete((void *)CONCAT53(uStack_7d,CONCAT12(uStack_7e,CONCAT11(uStack_7f,local_80))));
    }
    lVar14 = param_1 + 0x28;
    uVar13 = *(ulong *)(param_1 + 0x50);
    puVar10 = *(undefined8 **)(param_1 + 0x48);
    if (-1 < (char)*(byte *)(param_1 + 0x5f)) {
      uVar13 = (ulong)*(byte *)(param_1 + 0x5f);
      puVar10 = (undefined8 *)(param_1 + 0x48);
    }
    FUN_00547cac(lVar14,puVar10,uVar13);
    lVar4 = *(long *)(param_1 + 0x10);
    lVar6 = *(long *)(param_1 + 0x18);
    lVar19 = 0;
    uVar13 = 0;
    while( true ) {
      uVar15 = FUN_004e09f8(param_2,uVar13 & 0xffffffff);
      FUN_004e5ba0(param_1,uVar15);
      if (lVar4 == lVar6) {
        bVar17 = *(byte *)(param_1 + 0xb0);
        if ((bVar17 >> 1 & 1) == 0) {
          uVar18 = *(ulong *)(param_1 + 0x50);
          if (-1 < (char)*(byte *)(param_1 + 0x5f)) {
            uVar18 = (ulong)*(byte *)(param_1 + 0x5f);
          }
          if (uVar18 != 0) {
            local_80 = 10;
            uVar16 = FUN_00428964(*(undefined8 *)(param_1 + 8),&local_80,1);
            uVar18 = *(ulong *)(param_1 + 0x30);
            lVar11 = *(long *)(param_1 + 0x28);
            if (-1 < (char)*(byte *)(param_1 + 0x3f)) {
              uVar18 = (ulong)*(byte *)(param_1 + 0x3f);
              lVar11 = lVar14;
            }
            FUN_00428964(uVar16,lVar11,uVar18);
            bVar17 = *(byte *)(param_1 + 0xb0);
          }
        }
        *(byte *)(param_1 + 0xb0) = bVar17 | 2;
        FUN_004e5d64(param_1,uVar15);
        *(byte *)(param_1 + 0xb0) = *(byte *)(param_1 + 0xb0) & 0xfd;
      }
      else {
        uVar18 = (*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 3) * -0x5555555555555555;
        if (uVar18 < uVar13 || uVar18 - uVar13 == 0) goto LAB_004e6c74;
        FUN_004e6cf0(param_1,*(long *)(param_1 + 0x10) + lVar19);
      }
      if (uVar12 - 1 == uVar13) break;
      uVar13 = uVar13 + 1;
      FUN_00428964(*(undefined8 *)(param_1 + 8),&DAT_001ea264,1);
      FUN_004e65b8(param_1,uVar15);
      lVar19 = lVar19 + 0x18;
    }
    FUN_004e65b8(param_1,uVar15);
    bVar17 = *(byte *)(param_1 + 0x3f);
    uVar13 = *(ulong *)(param_1 + 0x30);
    if (-1 < (char)bVar17) {
      uVar13 = (ulong)bVar17;
    }
    uVar18 = *(ulong *)(param_1 + 0x50);
    if (-1 < (char)*(byte *)(param_1 + 0x5f)) {
      uVar18 = (ulong)*(byte *)(param_1 + 0x5f);
    }
    uVar7 = uVar13 - uVar18;
    if (uVar13 < uVar18) {
      FUN_0054809c(lVar14,-uVar18,0);
    }
    else {
      if ((char)bVar17 < '\0') {
        lVar14 = *(long *)(param_1 + 0x28);
        *(ulong *)(param_1 + 0x30) = uVar7;
      }
      else {
        if (0x16 < uVar7) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                     "__s < __min_cap",
                     "__s should never be greater than or equal to the short string capacity");
        }
        *(char *)(param_1 + 0x3f) = (char)uVar7;
      }
      *(undefined1 *)(lVar14 + uVar7) = 0;
    }
    local_69 = '\x01';
    if ((&local_80 < &UNK_0019fa9f) && (&DAT_0019fa9e < (undefined *)((ulong)&local_80 | 1)))
    goto LAB_004e6c9c;
    local_80 = 0x5d;
    uStack_7f = 0;
    FUN_004e6cf0(param_1,&local_80);
  }
  if (local_69 < '\0') {
    operator_delete((void *)CONCAT53(uStack_7d,CONCAT12(uStack_7e,CONCAT11(uStack_7f,local_80))));
  }
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
LAB_004e6cec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004e6cf0  FUN_004e6cf0 =====

void FUN_004e6cf0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 local_3c [4];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((*(byte *)(param_1 + 0xb0) >> 1 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + 0x50);
    if (-1 < (char)*(byte *)(param_1 + 0x5f)) {
      uVar1 = (ulong)*(byte *)(param_1 + 0x5f);
    }
    if (uVar1 != 0) {
      local_3c[0] = 10;
      uVar5 = FUN_00428964(*(undefined8 *)(param_1 + 8),local_3c,1);
      uVar1 = *(ulong *)(param_1 + 0x30);
      plVar3 = (long *)*(long *)(param_1 + 0x28);
      if (-1 < (char)*(byte *)(param_1 + 0x3f)) {
        uVar1 = (ulong)*(byte *)(param_1 + 0x3f);
        plVar3 = (long *)(param_1 + 0x28);
      }
      FUN_00428964(uVar5,plVar3,uVar1);
    }
  }
  uVar1 = param_2[1];
  puVar4 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar4 = param_2;
  }
  FUN_00428964(*(undefined8 *)(param_1 + 8),puVar4,uVar1);
  *(byte *)(param_1 + 0xb0) = *(byte *)(param_1 + 0xb0) & 0xfd;
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004e6dc8  FUN_004e6dc8 =====

/* WARNING: Removing unreachable block (ram,0x004e6ea4) */

byte FUN_004e6dc8(long param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  
  uVar3 = FUN_004e04c8(param_2);
  lVar11 = *(long *)(param_1 + 0x10);
  bVar2 = *(uint *)(param_1 + 0x40) <= uVar3 * 3;
  for (lVar8 = *(long *)(param_1 + 0x18); lVar8 != lVar11; lVar8 = lVar8 + -0x18) {
  }
  *(long *)(param_1 + 0x18) = lVar11;
  if ((uVar3 != 0) && (uVar3 * 3 < *(uint *)(param_1 + 0x40))) {
    uVar10 = 1;
    do {
      uVar4 = FUN_004e09f8(param_2,uVar10 - 1);
      uVar5 = FUN_004e05c4();
      if (((uVar5 & 1) == 0) && (uVar5 = FUN_004e05d4(uVar4), (uVar5 & 1) == 0)) {
        bVar2 = 0;
      }
      else {
        bVar2 = FUN_004e0534(uVar4);
        bVar2 = bVar2 ^ 1;
      }
    } while ((uVar10 < uVar3) && (uVar10 = uVar10 + 1, (bVar2 & 1) == 0));
  }
  if ((bVar2 & 1) == 0) {
    FUN_0047a51c((long *)(param_1 + 0x10),(ulong)uVar3);
    uVar10 = uVar3 * 2 + 2;
    bVar2 = *(byte *)(param_1 + 0xb0) | 1;
    *(byte *)(param_1 + 0xb0) = bVar2;
    if (uVar3 == 0) {
      bVar7 = 0;
    }
    else {
      uVar5 = 0;
      bVar7 = 0;
      lVar8 = 0x17;
      do {
        uVar4 = FUN_004e09f8(param_2,uVar5 & 0xffffffff);
        uVar6 = FUN_004e1ce0(uVar4,0);
        if ((uVar6 & 1) == 0) {
          bVar2 = 1;
          uVar6 = FUN_004e1ce0(uVar4,1);
          if ((uVar6 & 1) == 0) {
            bVar2 = FUN_004e1ce0(uVar4,2);
          }
        }
        else {
          bVar2 = 1;
        }
        uVar4 = FUN_004e09f8(param_2,uVar5 & 0xffffffff);
        FUN_004e5d64(param_1,uVar4);
        uVar6 = (*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 3) * -0x5555555555555555;
        if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x587,
                     "__n < size()","vector[] index out of bounds");
        }
        pbVar1 = (byte *)(*(long *)(param_1 + 0x10) + lVar8);
        bVar7 = bVar2 | bVar7;
        uVar5 = uVar5 + 1;
        lVar8 = lVar8 + 0x18;
        bVar2 = *pbVar1;
        uVar9 = *(uint *)(pbVar1 + -0xf);
        if (-1 < (char)bVar2) {
          uVar9 = (uint)bVar2;
        }
        uVar10 = uVar10 + uVar9;
      } while (uVar3 != uVar5);
      bVar2 = *(byte *)(param_1 + 0xb0);
    }
    bVar7 = bVar7 | *(uint *)(param_1 + 0x40) <= uVar10;
    *(byte *)(param_1 + 0xb0) = bVar2 & 0xfe;
  }
  else {
    bVar7 = 1;
  }
  return bVar7 & 1;
}


// ===== 004e7000  FUN_004e7000 =====

void FUN_004e7000(void)

{
  return;
}


// ===== 004e7004  FUN_004e7004 =====

void FUN_004e7004(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4e7008);
  (*pcVar1)();
}


// ===== 004e7008  FUN_004e7008 =====

void FUN_004e7008(void)

{
  return;
}


// ===== 004e700c  FUN_004e700c =====

void FUN_004e700c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4e7010);
  (*pcVar1)();
}


// ===== 004e7010  FUN_004e7010 =====

void FUN_004e7010(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [40];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_004df270(auStack_50,&DAT_0019a23c);
  uVar2 = FUN_004e1438(param_1,"commentStyle");
  FUN_004dfa04(uVar2,auStack_50);
  FUN_004df880(auStack_50);
  FUN_004df270(auStack_50,&DAT_0019cf02);
  uVar2 = FUN_004e1438(param_1,"indentation");
  FUN_004dfa04(uVar2,auStack_50);
  FUN_004df880(auStack_50);
  FUN_004df5b4(auStack_50,0);
  uVar2 = FUN_004e1438(param_1,"enableYAMLCompatibility");
  FUN_004dfa04(uVar2,auStack_50);
  FUN_004df880(auStack_50);
  FUN_004df5b4(auStack_50,0);
  uVar2 = FUN_004e1438(param_1,"dropNullPlaceholders");
  FUN_004dfa04(uVar2,auStack_50);
  FUN_004df880(auStack_50);
  FUN_004df5b4(auStack_50,0);
  uVar2 = FUN_004e1438(param_1,"useSpecialFloats");
  FUN_004dfa04(uVar2,auStack_50);
  FUN_004df880(auStack_50);
  FUN_004df5b4(auStack_50,0);
  uVar2 = FUN_004e1438(param_1,"emitUTF8");
  FUN_004dfa04(uVar2,auStack_50);
  FUN_004df880(auStack_50);
  FUN_004df1c8(auStack_50,0x11);
  uVar2 = FUN_004e1438(param_1,"precision");
  FUN_004dfa04(uVar2,auStack_50);
  FUN_004df880(auStack_50);
  FUN_004df270(auStack_50,"significant");
  uVar2 = FUN_004e1438(param_1,"precisionType");
  FUN_004dfa04(uVar2,auStack_50);
  FUN_004df880(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004e71c0  FUN_004e71c0 =====

void FUN_004e71c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1f5e0;
  FUN_004df880(param_1 + 1);
  return;
}


// ===== 004e71d0  FUN_004e71d0 =====

void FUN_004e71d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1f5e0;
  FUN_004df880(param_1 + 1);
  operator_delete(param_1);
  return;
}


// ===== 004e7200  FUN_004e7200 =====

/* WARNING: Removing unreachable block (ram,0x004e761c) */
/* WARNING: Removing unreachable block (ram,0x004e74d8) */
/* WARNING: Removing unreachable block (ram,0x004e74fc) */
/* WARNING: Removing unreachable block (ram,0x004e7508) */
/* WARNING: Removing unreachable block (ram,0x004e74f0) */
/* WARNING: Removing unreachable block (ram,0x004e7524) */
/* WARNING: Removing unreachable block (ram,0x004e7530) */
/* WARNING: Removing unreachable block (ram,0x004e753c) */
/* WARNING: Removing unreachable block (ram,0x004e763c) */
/* WARNING: Removing unreachable block (ram,0x004e73c0) */
/* WARNING: Removing unreachable block (ram,0x004e73c8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 * FUN_004e7200(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  byte bVar10;
  byte bVar11;
  undefined4 uVar12;
  undefined4 local_e8;
  uint uStack_e4;
  undefined8 uStack_e0;
  undefined7 local_d8;
  undefined1 uStack_d1;
  undefined2 local_d0;
  undefined1 uStack_ce;
  undefined1 uStack_cd;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined7 local_c0;
  undefined1 uStack_b9;
  undefined1 local_b8 [23];
  char local_a1;
  undefined8 local_a0;
  char local_89;
  undefined8 local_88;
  ulong uStack_80;
  undefined7 local_78;
  byte bStack_71;
  long local_70;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  local_70 = *(long *)(lVar1 + 0x28);
  FUN_004e12e0(param_1,"indentation");
  FUN_004dfbf8(&local_88);
  FUN_004e12e0(param_1,"commentStyle");
  FUN_004dfbf8(&local_a0);
  FUN_004e12e0(param_1,"precisionType");
  FUN_004dfbf8(local_b8);
  FUN_004e12e0(param_1,"enableYAMLCompatibility");
  uVar4 = FUN_004e03c4();
  FUN_004e12e0(param_1,"dropNullPlaceholders");
  uVar5 = FUN_004e03c4();
  FUN_004e12e0(param_1,"useSpecialFloats");
  uVar6 = FUN_004e03c4();
  FUN_004e12e0(param_1,"emitUTF8");
  uVar7 = FUN_004e03c4();
  FUN_004e12e0(param_1,"precision");
  uVar2 = FUN_004dff08();
  if ((&local_a0 == (undefined8 *)0x0) && (local_89 != '\0')) goto LAB_004e7670;
  if (local_89 == '\x04') {
    iVar3 = memcmp(&local_a0,&DAT_001ecd99,4);
    if (iVar3 == 0) {
      uVar12 = 0;
LAB_004e7360:
      if ((local_b8 == (undefined1 *)0x0) && (local_a1 != '\0')) {
LAB_004e7670:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
                   "__len == 0 || __s != nullptr",
                   "string_view::string_view(_CharT *, size_t): received nullptr");
      }
      if ((local_a1 == '\a') && (iVar3 = memcmp(local_b8,"decimal",7), iVar3 == 0)) {
        uStack_b9 = 3;
        if ((&UNK_001b3796 <= &local_d0) || ((undefined *)((ulong)&local_d0 | 3) <= &DAT_001b3795))
        {
          local_d0 = 0x3a20;
          uStack_ce = 0x20;
          uStack_cd = 0;
          if ((uVar4 & 1) == 0) {
            uVar4 = uStack_80;
            if (-1 < (char)bStack_71) {
              uVar4 = (ulong)bStack_71;
            }
            if (uVar4 == 0) {
              uStack_b9 = 1;
              local_d0 = 0x3a;
            }
          }
          else {
            uStack_b9 = 2;
            local_d0 = 0x203a;
            uStack_ce = 0;
          }
          uStack_d1 = 4;
          if ((&DAT_001b9a21 < &local_e8) || ((undefined *)((ulong)&local_e8 | 4) < &UNK_001b9a22))
          {
            uStack_e4 = uStack_e4 & 0xffffff00;
            local_e8 = 0x6c6c756e;
            if ((uVar5 & 1) != 0) {
              local_e8 = 0x6c6c7500;
              uStack_d1 = 0;
            }
            if (0x10 < uVar2) {
              uVar2 = 0x11;
            }
            puVar8 = (undefined8 *)operator_new(0xc0);
            *puVar8 = &PTR_FUN_00d1f590;
            puVar8[1] = 0;
            *(undefined4 *)(puVar8 + 8) = 0x4a;
            puVar8[3] = 0;
            puVar8[2] = 0;
            puVar8[5] = 0;
            puVar8[4] = 0;
            bVar10 = 4;
            if ((uVar6 & 1) == 0) {
              bVar10 = 0;
            }
            puVar8[0xb] = CONCAT17(bStack_71,local_78);
            puVar8[7] = 0;
            puVar8[6] = 0;
            puVar8[0xf] = CONCAT17(uStack_b9,local_c0);
            bVar11 = 8;
            if ((uVar7 & 1) == 0) {
              bVar11 = 0;
            }
            puVar8[10] = uStack_80;
            puVar8[9] = local_88;
            puVar8[0x12] = CONCAT17(uStack_d1,local_d8);
            puVar8[0x13] = 0;
            *(undefined4 *)(puVar8 + 0xc) = uVar12;
            puVar8[0xe] = uStack_c8;
            puVar8[0xd] = CONCAT44(uStack_cc,CONCAT13(uStack_cd,CONCAT12(uStack_ce,local_d0)));
            *(byte *)(puVar8 + 0x16) = bVar11 | bVar10;
            puVar8[0x14] = 0;
            puVar8[0x15] = 0;
            puVar8[0x11] = uStack_e0;
            puVar8[0x10] = CONCAT44(uStack_e4,local_e8);
            *(uint *)((long)puVar8 + 0xb4) = uVar2;
            *(undefined4 *)(puVar8 + 0x17) = 1;
            if (local_89 < '\0') {
              operator_delete(local_a0);
            }
            if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            return puVar8;
          }
        }
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      pcVar9 = "precisionType must be \'significant\' or \'decimal\'";
      goto LAB_004e76ac;
    }
  }
  else if (local_89 == '\x03') {
    if ((short)local_a0 == 0x6c41 && local_a0._2_1_ == 'l') {
      uVar12 = 2;
      goto LAB_004e7360;
    }
  }
  pcVar9 = "commentStyle must be \'All\' or \'None\'";
LAB_004e76ac:
  FUN_004a3cf4(&local_d0,pcVar9);
  FUN_004df054(&local_d0);
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 004e76c4  FUN_004e76c4 =====

undefined8 FUN_004e76c4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined **local_78;
  undefined1 auStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_78 = &PTR_FUN_00d1f5e0;
  FUN_004df134(auStack_70,0);
  FUN_004e7010(auStack_70);
  plVar2 = (long *)FUN_004e7200(&local_78);
  (**(code **)(*plVar2 + 0x10))(plVar2,param_2,param_1);
  (**(code **)(*plVar2 + 8))(plVar2);
  local_78 = &PTR_FUN_00d1f5e0;
  FUN_004df880(auStack_70);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004e7784  FUN_004e7784 =====

void FUN_004e7784(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1f540;
  if (-1 < *(char *)((long)param_1 + 0x1f)) {
    return;
  }
  operator_delete((void *)param_1[1]);
  return;
}


// ===== 004e77a4  FUN_004e77a4 =====

void FUN_004e77a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1f540;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
  }
  operator_delete(param_1);
  return;
}


// ===== 004e77e0  FUN_004e77e0 =====

/* WARNING: Removing unreachable block (ram,0x004e7844) */

void FUN_004e77e0(undefined8 *param_1)

{
  char cVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  *param_1 = &PTR_FUN_00d1f568;
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
    cVar1 = *(char *)((long)param_1 + 0x37);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x37);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[4]);
    pvVar4 = (void *)param_1[1];
  }
  else {
    pvVar4 = (void *)param_1[1];
  }
  if (pvVar4 == (void *)0x0) {
    return;
  }
  pvVar3 = (void *)param_1[2];
  pvVar2 = pvVar4;
  if (pvVar3 != pvVar4) {
    do {
      pvVar3 = (void *)((long)pvVar3 + -0x18);
    } while (pvVar3 != pvVar4);
    pvVar2 = (void *)param_1[1];
  }
  param_1[2] = pvVar4;
  operator_delete(pvVar2);
  return;
}


// ===== 004e7898  FUN_004e7898 =====

/* WARNING: Removing unreachable block (ram,0x004e7920) */

void FUN_004e7898(undefined8 *param_1)

{
  char cVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  *param_1 = &PTR_FUN_00d1f568;
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
    cVar1 = *(char *)((long)param_1 + 0x37);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x37);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[4]);
    pvVar4 = (void *)param_1[1];
  }
  else {
    pvVar4 = (void *)param_1[1];
  }
  if (pvVar4 != (void *)0x0) {
    pvVar3 = (void *)param_1[2];
    pvVar2 = pvVar4;
    if (pvVar3 != pvVar4) {
      do {
        pvVar3 = (void *)((long)pvVar3 + -0x18);
      } while (pvVar3 != pvVar4);
      pvVar2 = (void *)param_1[1];
    }
    param_1[2] = pvVar4;
    operator_delete(pvVar2);
  }
  operator_delete(param_1);
  return;
}


// ===== 004e794c  FUN_004e794c =====

/* WARNING: Removing unreachable block (ram,0x004e79c8) */

void FUN_004e794c(undefined8 *param_1)

{
  char cVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  *param_1 = &PTR_FUN_00d1f590;
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    operator_delete((void *)param_1[0x13]);
    cVar1 = *(char *)((long)param_1 + 0x97);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x97);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[0x10]);
    cVar1 = *(char *)((long)param_1 + 0x7f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x7f);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[0xd]);
    cVar1 = *(char *)((long)param_1 + 0x5f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x5f);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[9]);
    cVar1 = *(char *)((long)param_1 + 0x3f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x3f);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[5]);
    pvVar4 = (void *)param_1[2];
  }
  else {
    pvVar4 = (void *)param_1[2];
  }
  if (pvVar4 != (void *)0x0) {
    pvVar3 = (void *)param_1[3];
    pvVar2 = pvVar4;
    if (pvVar3 != pvVar4) {
      do {
        pvVar3 = (void *)((long)pvVar3 + -0x18);
      } while (pvVar3 != pvVar4);
      pvVar2 = (void *)param_1[2];
    }
    param_1[3] = pvVar4;
    operator_delete(pvVar2);
    return;
  }
  return;
}


// ===== 004e7a4c  FUN_004e7a4c =====

void FUN_004e7a4c(void *param_1)

{
  FUN_004e794c();
  operator_delete(param_1);
  return;
}


// ===== 004e7a70  FUN_004e7a70 =====

long * FUN_004e7a70(long *param_1,ulong param_2,ulong param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  
  uVar4 = (uint)(char)*(byte *)((long)param_1 + 0x17);
  uVar6 = param_1[1];
  if (-1 < (int)uVar4) {
    uVar6 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  uVar3 = uVar6 - param_2;
  if (uVar6 < param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_3 != 0) {
    if (param_3 == 0xffffffffffffffff) {
      if ((int)uVar4 < 0) {
        param_1[1] = param_2;
        puVar5 = (undefined1 *)(*param_1 + param_2);
      }
      else {
        if (0x16 < param_2) {
LAB_004e7b3c:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                     "__s < __min_cap",
                     "__s should never be greater than or equal to the short string capacity");
        }
        *(char *)((long)param_1 + 0x17) = (char)param_2;
        puVar5 = (undefined1 *)((long)param_1 + param_2);
      }
    }
    else {
      plVar1 = (long *)*param_1;
      if (-1 < (int)uVar4) {
        plVar1 = param_1;
      }
      uVar2 = uVar3;
      if (param_3 <= uVar3) {
        uVar2 = param_3;
      }
      if (param_3 < uVar3) {
        memmove((void *)((long)plVar1 + param_2),(void *)((long)((long)plVar1 + param_2) + uVar2),
                uVar3 - uVar2);
        uVar4 = (uint)*(byte *)((long)param_1 + 0x17);
      }
      uVar6 = uVar6 - uVar2;
      if ((uVar4 >> 7 & 1) == 0) {
        if (0x16 < uVar6) goto LAB_004e7b3c;
        *(char *)((long)param_1 + 0x17) = (char)uVar6;
      }
      else {
        param_1[1] = uVar6;
      }
      puVar5 = (undefined1 *)((long)plVar1 + uVar6);
    }
    *puVar5 = 0;
  }
  return param_1;
}


// ===== 004e7b68  FUN_004e7b68 =====

/* WARNING: Removing unreachable block (ram,0x004e7c90) */

void FUN_004e7b68(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar3 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar3 * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar5 = param_1[2] - *param_1 >> 3;
  uVar6 = lVar5 * 0x5555555555555556;
  if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
    uVar6 = uVar1;
  }
  if (0x555555555555554 < (ulong)(lVar5 * -0x5555555555555555)) {
    uVar6 = 0xaaaaaaaaaaaaaaa;
  }
  if (uVar6 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
    pvVar2 = operator_new(uVar6 * 0x18);
  }
  pvVar9 = (void *)((long)pvVar2 + lVar3 * 8);
  pvVar2 = (void *)((long)pvVar2 + uVar6 * 0x18);
  FUN_004e7cc0(pvVar9,param_2);
  pvVar7 = (void *)*param_1;
  pvVar8 = (void *)param_1[1];
  lVar3 = (long)pvVar9 + 0x18;
  if (pvVar8 == pvVar7) {
    *param_1 = (long)pvVar9;
    param_1[1] = lVar3;
    param_1[2] = (long)pvVar2;
  }
  else {
    do {
      uVar11 = *(undefined8 *)((long)pvVar8 + -0x10);
      uVar10 = *(undefined8 *)((long)pvVar8 + -0x18);
      *(undefined8 *)((long)pvVar9 + -8) = *(undefined8 *)((long)pvVar8 + -8);
      pvVar4 = (void *)((long)pvVar8 + -0x18);
      *(undefined8 *)((long)pvVar9 + -0x10) = uVar11;
      *(undefined8 *)((long)pvVar9 + -0x18) = uVar10;
      pvVar9 = (void *)((long)pvVar9 + -0x18);
      *(undefined8 *)((long)pvVar8 + -0x10) = 0;
      *(undefined8 *)((long)pvVar8 + -8) = 0;
      *(undefined8 *)((long)pvVar8 + -0x18) = 0;
      pvVar8 = pvVar4;
    } while (pvVar4 != pvVar7);
    pvVar8 = (void *)*param_1;
    pvVar7 = (void *)param_1[1];
    *param_1 = (long)pvVar9;
    param_1[1] = lVar3;
    param_1[2] = (long)pvVar2;
    for (; pvVar7 != pvVar8; pvVar7 = (void *)((long)pvVar7 + -0x18)) {
    }
  }
  if (pvVar8 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar8);
  return;
}


// ===== 004e7cc0  FUN_004e7cc0 =====

undefined8 * FUN_004e7cc0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  undefined8 *__dest;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __src = (undefined8 *)*param_2;
    uVar2 = param_2[1];
    if (uVar2 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)uVar2;
      __dest = param_1;
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined8 *)operator_new(uVar1);
      *param_1 = __dest;
      param_1[1] = uVar2;
      param_1[2] = uVar1 | 0x8000000000000000;
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
    uVar4 = param_2[1];
    uVar3 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar4;
    *param_1 = uVar3;
  }
  return param_1;
}


// ===== 004e7dbc  FUN_004e7dbc =====

void FUN_004e7dbc(undefined8 *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [264];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00d1f688;
  FUN_00728054(param_1 + 1);
  uVar3 = FUN_0072a230();
  iVar2 = FUN_00728170(param_1 + 1,uVar3,*param_2,param_2[1] - *param_2,8,0);
  if (iVar2 != 1) {
    FUN_004f0510(auStack_158,3,
                 "../../discord_common/native/third_party/libdave/cpp/src/boringssl_cryptor.cpp",
                 0x23);
                    /* try { // try from 004e7e40 to 004e7e4f has its CatchHandler @ 004e7e8c */
    FUN_00428964(auStack_140,"Failed to initialize AEAD context",0x21);
    FUN_004f0604(auStack_158);
    FUN_00777d4c(FUN_004e813c,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004e7eb4  FUN_004e7eb4 =====

void FUN_004e7eb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1f688;
                    /* try { // try from 004e7ec8 to 004e7ecb has its CatchHandler @ 004e7ed4 */
  FUN_00728280(param_1 + 1);
  return;
}


// ===== 004e7ed8  FUN_004e7ed8 =====

void FUN_004e7ed8(void)

{
  FUN_0054f698();
                    /* WARNING: Subroutine does not return */
  FUN_00550060();
}


// ===== 004e7ee8  FUN_004e7ee8 =====

void FUN_004e7ee8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1f688;
                    /* try { // try from 004e7f04 to 004e7f07 has its CatchHandler @ 004e7f18 */
  FUN_00728280(param_1 + 1);
  operator_delete(param_1);
  return;
}


// ===== 004e7f1c  FUN_004e7f1c =====

bool FUN_004e7f1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [264];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 8) == 0) {
    FUN_004f0510(auStack_158,3,
                 "../../discord_common/native/third_party/libdave/cpp/src/boringssl_cryptor.cpp",
                 0x34);
                    /* try { // try from 004e7fe8 to 004e7ff7 has its CatchHandler @ 004e8030 */
    FUN_00428964(auStack_140,"Encrypt: AEAD context is not initialized",0x28);
    FUN_004f0604(auStack_158);
    bVar2 = false;
  }
  else {
    iVar3 = FUN_007285f8((long *)(param_1 + 8),param_2,param_11,auStack_160,8,param_6,0xc,param_4,
                         param_5,0,0,param_9,param_10);
    bVar2 = iVar3 == 1;
    if (!bVar2) {
      FUN_004f0510(auStack_158,3,
                   "../../discord_common/native/third_party/libdave/cpp/src/boringssl_cryptor.cpp",
                   0x47);
                    /* try { // try from 004e7f9c to 004e7fab has its CatchHandler @ 004e802c */
      FUN_00428964(auStack_140,"Failed to encrypt data",0x16);
      FUN_004f0604(auStack_158);
      FUN_00777d4c(FUN_004e813c,0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004e8058  FUN_004e8058 =====

void FUN_004e8058(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [264];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 8) == 0) {
    FUN_004f0510(auStack_158,3,
                 "../../discord_common/native/third_party/libdave/cpp/src/boringssl_cryptor.cpp",
                 0x55);
                    /* try { // try from 004e80d0 to 004e80df has its CatchHandler @ 004e8110 */
    FUN_00428964(auStack_140,"Decrypt: AEAD context is not initialized",0x28);
    FUN_004f0604(auStack_158);
    bVar2 = false;
  }
  else {
    iVar3 = FUN_00728d84((long *)(param_1 + 8),param_2,param_9,0xc,param_4,param_5,param_6,8,
                         param_11,param_12);
    bVar2 = iVar3 == 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


// ===== 004e813c  FUN_004e813c =====

undefined8 FUN_004e813c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 **ppuVar2;
  undefined1 *local_180;
  ulong uStack_178;
  byte local_169;
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [264];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_004f0510(auStack_168,3,
               "../../discord_common/native/third_party/libdave/cpp/src/boringssl_cryptor.cpp",0x11)
  ;
                    /* try { // try from 004e8184 to 004e8197 has its CatchHandler @ 004e8214 */
  FUN_0046d824(&local_180,param_1,param_2);
  ppuVar2 = (undefined1 **)local_180;
  if (-1 < (char)local_169) {
    uStack_178 = (ulong)local_169;
    ppuVar2 = &local_180;
  }
                    /* try { // try from 004e81b4 to 004e81b7 has its CatchHandler @ 004e81fc */
  FUN_00428964(auStack_150,ppuVar2,uStack_178);
  if ((char)local_169 < '\0') {
    operator_delete(local_180);
  }
  FUN_004f0604(auStack_168);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


// ===== 004e823c  FUN_004e823c =====

void FUN_004e823c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_004e8250("basic_string");
}


// ===== 004e8250  FUN_004e8250 =====

void FUN_004e8250(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0054f64c(0x10);
                    /* try { // try from 004e826c to 004e8273 has its CatchHandler @ 004e828c */
  FUN_004e82a0(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar1,&PTR_PTR_thunk_FUN_00552768_00d23bf8,PTR_FUN_00d51cd8);
}


// ===== 004e82a0  FUN_004e82a0 =====

void FUN_004e82a0(undefined8 *param_1)

{
  FUN_00547104();
  *param_1 = &PTR_FUN_00d23be0;
  return;
}


// ===== 004e82d0  FUN_004e82d0 =====

void FUN_004e82d0(long param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [264];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar4 = 0;
  if (param_2 << 3 != 0) {
    iVar6 = 0;
    iVar5 = 0;
    do {
      bVar2 = *(byte *)(param_1 + (uVar4 >> 3));
      if (((((uVar4 & 7) == 0) && (0xf < uVar4)) && (bVar2 == 3)) &&
         ((lVar1 = (uVar4 >> 3) + param_1, *(char *)(lVar1 + -1) == '\0' &&
          (*(char *)(lVar1 + -2) == '\0')))) {
        uVar4 = uVar4 + 8;
      }
      else if ((bVar2 >> (ulong)((uint)(uVar4 & 7) ^ 7) & 1) == 0) {
        if (0x1e < iVar6) goto LAB_004e83d0;
        iVar6 = iVar6 + 1;
        uVar4 = uVar4 + 1;
      }
      else {
        iVar5 = iVar5 + 1;
        uVar4 = uVar4 + (long)(iVar6 + 1);
        iVar6 = 0;
      }
    } while ((uVar4 < (ulong)(param_2 << 3)) && (iVar5 < 3));
    if (0x7fff7 < uVar4) {
      FUN_004f0510(auStack_158,2,
                   "../../discord_common/native/third_party/libdave/cpp/src/codec_utils.cpp",0x44);
                    /* try { // try from 004e83b8 to 004e83c7 has its CatchHandler @ 004e83f8 */
      FUN_00428964(auStack_140,
                   "BytesCoveringH264PPS result cannot fit in UnencryptedFrameHeaderSize",0x44);
      FUN_004f0604(auStack_158);
LAB_004e83d0:
      iVar5 = 0;
      goto LAB_004e83d4;
    }
  }
  iVar5 = (int)(uVar4 >> 3) + 1;
LAB_004e83d4:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar5);
}


// ===== 004e8424  FUN_004e8424 =====

undefined8 FUN_004e8424(void)

{
  FUN_004f00fc();
  return 1;
}


// ===== 004e843c  FUN_004e843c =====

undefined8 FUN_004e843c(undefined8 param_1,byte *param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 10;
  if ((*param_2 & 1) != 0) {
    lVar1 = 1;
  }
  FUN_004f03f0(param_1,param_2,lVar1);
  FUN_004f00fc(param_1,param_2 + lVar1,param_3 - lVar1);
  return 1;
}


// ===== 004e8494  FUN_004e8494 =====

undefined8 FUN_004e8494(void)

{
  FUN_004f00fc();
  return 1;
}


// ===== 004e84ac  FUN_004e84ac =====

void FUN_004e84ac(undefined8 param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong local_1a0;
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [264];
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  if (param_3 < 4) {
    FUN_004f0510(auStack_190,2,
                 "../../discord_common/native/third_party/libdave/cpp/src/codec_utils.cpp",0xc0);
                    /* try { // try from 004e8570 to 004e857f has its CatchHandler @ 004e86f8 */
    FUN_00428964(auStack_178,"H264 frame is too small to contain a NAL unit",0x2d);
    FUN_004f0604(auStack_190);
  }
  else {
    uVar8 = 0;
    do {
      bVar3 = *(byte *)(uVar8 + param_2 + 2);
      if (bVar3 < 2) {
        uVar10 = uVar8 + 1;
        if (bVar3 == 1) {
          if ((*(char *)(param_2 + uVar8 + 1) != '\0') || (*(char *)(param_2 + uVar8) != '\0'))
          goto LAB_004e84f4;
          if (uVar8 + 3 < param_3 - 1) {
            local_1a0 = 0;
            uVar8 = uVar8 + 3;
            do {
              pbVar1 = (byte *)(param_2 + uVar8);
              bVar3 = *pbVar1;
              FUN_004f03f0(param_1,&DAT_001f739b,4);
              uVar10 = uVar8;
joined_r0x004e8614:
              uVar11 = uVar10;
              if (uVar11 < param_3 - 3) {
                bVar4 = *(byte *)(uVar11 + param_2 + 2);
                if (bVar4 < 2) goto code_r0x004e8640;
                goto LAB_004e8620;
              }
              bVar6 = false;
              uVar11 = 0;
              uVar10 = param_3;
LAB_004e8680:
              if ((bVar3 & 0x1b) == 1) {
                uVar7 = FUN_004e82d0(param_2 + uVar8 + 1,param_3 - (uVar8 + 1));
                lVar9 = (uVar7 & 0xffff) + 1;
                FUN_004f03f0(param_1,pbVar1,lVar9);
                FUN_004f00fc(param_1,pbVar1 + lVar9,(uVar10 + ~uVar8) - (uVar7 & 0xffff));
              }
              else {
                FUN_004f03f0(param_1,pbVar1,uVar10 - uVar8);
              }
              uVar10 = uVar11 & 0xff | local_1a0 << 8;
              if (!bVar6) {
                uVar10 = uVar8;
              }
              bVar2 = false;
              if (uVar10 < param_3 - 1) {
                bVar2 = bVar6;
              }
              uVar8 = uVar10;
            } while (bVar2);
          }
          break;
        }
      }
      else {
LAB_004e84f4:
        uVar10 = uVar8 + 3;
      }
      uVar8 = uVar10;
    } while (uVar8 < param_3 - 3);
  }
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(3 < param_3);
  }
  return;
code_r0x004e8640:
  uVar10 = uVar11 + 1;
  if (bVar4 == 1) {
    if ((*(char *)(param_2 + uVar11 + 1) == '\0') && (*(char *)(param_2 + uVar11) == '\0')) {
      if ((uVar11 == 0) || (*(char *)(uVar11 + param_2 + -1) != '\0')) {
        lVar9 = -3;
      }
      else {
        lVar9 = -4;
      }
      uVar11 = uVar11 + 3;
      bVar6 = true;
      local_1a0 = uVar11 >> 8;
      uVar10 = lVar9 + uVar11;
      goto LAB_004e8680;
    }
LAB_004e8620:
    uVar10 = uVar11 + 3;
  }
  goto joined_r0x004e8614;
}


// ===== 004e8720  FUN_004e8720 =====

void FUN_004e8720(undefined8 param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  bool bVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong local_198;
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [264];
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  if (param_3 < 5) {
    FUN_004f0510(auStack_190,2,
                 "../../discord_common/native/third_party/libdave/cpp/src/codec_utils.cpp",0xff);
                    /* try { // try from 004e87e8 to 004e87f7 has its CatchHandler @ 004e8940 */
    FUN_00428964(auStack_178,"H265 frame is too small to contain a NAL unit",0x2d);
    FUN_004f0604(auStack_190);
  }
  else {
    uVar8 = 0;
    do {
      bVar4 = *(byte *)(uVar8 + param_2 + 2);
      if (bVar4 < 2) {
        uVar3 = uVar8 + 1;
        if (bVar4 == 1) {
          if ((*(char *)(param_2 + uVar8 + 1) != '\0') || (*(char *)(param_2 + uVar8) != '\0'))
          goto LAB_004e876c;
          if (uVar8 + 3 < param_3 - 1) {
            local_198 = 0;
            uVar8 = uVar8 + 3;
            do {
              pbVar1 = (byte *)(param_2 + uVar8);
              bVar4 = *pbVar1;
              FUN_004f03f0(param_1,&DAT_001f739b,4);
              uVar3 = uVar8;
joined_r0x004e8888:
              uVar10 = uVar3;
              if (uVar10 < param_3 - 3) {
                bVar5 = *(byte *)(uVar10 + param_2 + 2);
                if (bVar5 < 2) goto code_r0x004e88b4;
                goto LAB_004e8894;
              }
              bVar7 = false;
              uVar10 = 0;
              uVar3 = param_3;
joined_r0x004e8938:
              if ((bVar4 >> 6 & 1) == 0) {
                FUN_004f03f0(param_1,pbVar1,2);
                FUN_004f00fc(param_1,pbVar1 + 2,(uVar3 - uVar8) + -2);
              }
              else {
                FUN_004f03f0(param_1,pbVar1,uVar3 - uVar8);
              }
              uVar3 = uVar10 & 0xff | local_198 << 8;
              if (!bVar7) {
                uVar3 = uVar8;
              }
              bVar2 = false;
              if (uVar3 < param_3 - 1) {
                bVar2 = bVar7;
              }
              uVar8 = uVar3;
            } while (bVar2);
          }
          break;
        }
      }
      else {
LAB_004e876c:
        uVar3 = uVar8 + 3;
      }
      uVar8 = uVar3;
    } while (uVar8 < param_3 - 3);
  }
  if (*(long *)(lVar6 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(4 < param_3);
code_r0x004e88b4:
  uVar3 = uVar10 + 1;
  if (bVar5 == 1) {
    if ((*(char *)(param_2 + uVar10 + 1) == '\0') && (*(char *)(param_2 + uVar10) == '\0')) {
      if ((uVar10 == 0) || (*(char *)(uVar10 + param_2 + -1) != '\0')) {
        lVar9 = -3;
      }
      else {
        lVar9 = -4;
      }
      uVar10 = uVar10 + 3;
      bVar7 = true;
      local_198 = uVar10 >> 8;
      uVar3 = lVar9 + uVar10;
      goto joined_r0x004e8938;
    }
LAB_004e8894:
    uVar3 = uVar10 + 3;
  }
  goto joined_r0x004e8888;
}


// ===== 004e8968  FUN_004e8968 =====

undefined8 FUN_004e8968(undefined8 param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long local_1a0;
  byte local_194 [4];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [264];
  long local_70;
  
  lVar4 = tpidr_el0;
  uVar7 = 1;
  local_70 = *(long *)(lVar4 + 0x28);
  if (param_3 != 0) {
    uVar9 = 0;
    do {
      pbVar1 = (byte *)(param_2 + uVar9);
      bVar2 = *pbVar1;
      lVar6 = 1;
      if ((bVar2 & 4) != 0) {
        lVar6 = 2;
      }
      uVar8 = lVar6 + uVar9;
      lVar6 = param_3 - uVar8;
      local_194[0] = bVar2;
      if (param_3 < uVar8 || lVar6 == 0) {
        FUN_004f0510(auStack_190,2,
                     "../../discord_common/native/third_party/libdave/cpp/src/codec_utils.cpp",0x145
                    );
                    /* try { // try from 004e8ad4 to 004e8ae3 has its CatchHandler @ 004e8bb0 */
        FUN_00428964(auStack_178,"Malformed AV1 frame: header overflows frame",0x2b);
LAB_004e8b64:
        FUN_004f0604(auStack_190);
LAB_004e8b70:
        uVar7 = 0;
        goto LAB_004e8b74;
      }
      if ((bVar2 >> 1 & 1) != 0) {
        local_1a0 = param_2 + uVar8;
        lVar6 = FUN_0050defc(&local_1a0,param_2 + param_3);
        if (local_1a0 == 0) {
          FUN_004f0510(auStack_190,2,
                       "../../discord_common/native/third_party/libdave/cpp/src/codec_utils.cpp",
                       0x152);
                    /* try { // try from 004e8b54 to 004e8b63 has its CatchHandler @ 004e8ba8 */
          FUN_00428964(auStack_178,"Malformed AV1 frame: invalid LEB128 size",0x28);
          goto LAB_004e8b64;
        }
        uVar8 = (uVar8 - (param_2 + uVar8)) + local_1a0;
      }
      uVar9 = uVar8 + lVar6;
      if (param_3 < uVar9) {
        FUN_004f0510(auStack_190,2,
                     "../../discord_common/native/third_party/libdave/cpp/src/codec_utils.cpp",0x161
                    );
                    /* try { // try from 004e8b08 to 004e8b1b has its CatchHandler @ 004e8bac */
        FUN_00428964(auStack_178,"Malformed AV1 frame: payload overflows frame",0x2c);
        FUN_004f0604(auStack_190);
        goto LAB_004e8b70;
      }
      uVar3 = bVar2 >> 3 & 0xf;
      if ((0xf < uVar3) || ((1 << (ulong)uVar3 & 0x8104U) == 0)) {
        bVar5 = (bVar2 & 2) != 0;
        if (bVar5 && uVar9 == param_3) {
          local_194[0] = local_194[0] & 0xfd;
        }
        FUN_004f03f0(param_1,local_194,1);
        if ((bVar2 >> 2 & 1) != 0) {
          FUN_004f03f0(param_1,pbVar1 + 1,1);
        }
        if ((bVar2 & 2) != 0 && (!bVar5 || uVar9 != param_3)) {
          uVar7 = FUN_0050df74(lVar6,auStack_190);
          FUN_004f03f0(param_1,auStack_190,uVar7);
        }
        FUN_004f00fc(param_1,param_2 + uVar8,lVar6);
      }
    } while (uVar9 < param_3);
    uVar7 = 1;
  }
LAB_004e8b74:
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004e8bdc  FUN_004e8bdc =====

undefined8 FUN_004e8bdc(byte *param_1,long param_2,ulong param_3)

{
  ulong *puVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (0xfffffffd < *param_1 - 6) {
    puVar5 = *(ulong **)(param_1 + 0x58);
    if (puVar5 == *(ulong **)(param_1 + 0x60)) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      do {
        uVar6 = *puVar5;
        if (uVar7 != uVar6) {
          lVar2 = 0;
          if (1 < uVar7) {
            lVar2 = uVar7 - 2;
          }
          uVar8 = param_3;
          if (uVar6 + 2 <= param_3) {
            uVar8 = uVar6 + 2;
          }
          uVar8 = uVar8 - lVar2;
          uVar7 = uVar6;
          if ((2 < uVar8) && (uVar8 != 3)) {
            uVar6 = 0;
            lVar2 = param_2 + lVar2;
            do {
              bVar3 = *(byte *)(uVar6 + lVar2 + 2);
              if (bVar3 < 2) {
                uVar4 = uVar6 + 1;
                if (bVar3 == 1) {
                  if ((*(char *)(lVar2 + uVar6 + 1) == '\0') && (*(char *)(lVar2 + uVar6) == '\0'))
                  {
                    return 0;
                  }
                  goto LAB_004e8c54;
                }
              }
              else {
LAB_004e8c54:
                uVar4 = uVar6 + 3;
              }
              uVar6 = uVar4;
            } while (uVar6 < uVar8 - 3);
          }
        }
        puVar1 = puVar5 + 1;
        puVar5 = puVar5 + 2;
        uVar7 = *puVar1 + uVar7;
      } while (puVar5 != *(ulong **)(param_1 + 0x60));
    }
    if (uVar7 != param_3) {
      lVar2 = 0;
      if (1 < uVar7) {
        lVar2 = uVar7 - 2;
      }
      param_3 = param_3 - lVar2;
      if ((2 < param_3) && (param_3 != 3)) {
        uVar7 = 0;
        param_2 = param_2 + lVar2;
        do {
          bVar3 = *(byte *)(uVar7 + param_2 + 2);
          if (bVar3 < 2) {
            uVar6 = uVar7 + 1;
            if (bVar3 == 1) {
              if ((*(char *)(param_2 + uVar7 + 1) == '\0') && (*(char *)(param_2 + uVar7) == '\0'))
              {
                return 0;
              }
              goto LAB_004e8cc8;
            }
          }
          else {
LAB_004e8cc8:
            uVar6 = uVar7 + 3;
          }
          uVar7 = uVar6;
        } while (uVar7 < param_3 - 3);
      }
    }
  }
  return 1;
}


// ===== 004e8d14  FUN_004e8d14 =====

long * FUN_004e8d14(undefined8 param_1)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(0x248);
                    /* try { // try from 004e8d30 to 004e8d37 has its CatchHandler @ 004e8d64 */
  FUN_004e7dbc(plVar1,param_1);
  if (plVar1[1] == 0) {
    (**(code **)(*plVar1 + 8))(plVar1);
    plVar1 = (long *)0x0;
  }
  return plVar1;
}


// ===== 004e8d78  FUN_004e8d78 =====

int FUN_004e8d78(uint param_1,uint param_2)

{
  return (param_1 + (uint)(param_2 < (param_1 & 0xff)) * 0x100 & 0xffffff00) + param_2;
}


// ===== 004e8d90  FUN_004e8d90 =====

void FUN_004e8d90(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  lVar2 = *param_2;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
                    /* try { // try from 004e8dc8 to 004e8dcf has its CatchHandler @ 004e8e00 */
  uVar1 = (**(code **)(lVar2 + 0x10))(param_2);
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[9] = 0;
  param_1[7] = uVar1;
  param_1[8] = 0x7fffffffffffffff;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}


// ===== 004e8e2c  FUN_004e8e2c =====

void FUN_004e8e2c(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  long *plVar3;
  
  puVar1 = (undefined8 *)param_1[2];
  while (puVar1 != (undefined8 *)0x0) {
    plVar3 = (long *)puVar1[3];
    puVar1[3] = 0;
    pvVar2 = (void *)*puVar1;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    operator_delete(puVar1);
    puVar1 = (undefined8 *)pvVar2;
  }
  pvVar2 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}


// ===== 004e8ea4  FUN_004e8ea4 =====

bool FUN_004e8ea4(long param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  if ((*(char *)(param_1 + 0x58) == '\0') ||
     (uVar5 = (ulong)(param_3 & 0xffffff) | (ulong)param_2 << 0x18,
     *(long *)(param_1 + 0x50) + 1U <= uVar5)) {
    return true;
  }
  lVar4 = *(long *)(param_1 + 0x68);
  if (*(long *)(param_1 + 0x70) == lVar4) {
    lVar7 = 0;
LAB_004e8f84:
    lVar4 = 0;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x80);
    uVar1 = uVar3 + *(long *)(param_1 + 0x88);
    plVar8 = (long *)(lVar4 + (uVar1 >> 9) * 8);
    lVar2 = *(long *)(lVar4 + (uVar3 >> 9) * 8) + (uVar3 & 0x1ff) * 8;
    lVar7 = *plVar8 + (uVar1 & 0x1ff) * 8;
    if (lVar7 != lVar2) {
      lVar6 = *plVar8;
      lVar9 = lVar7;
      do {
        if (lVar9 == lVar6) {
          plVar8 = plVar8 + -1;
          lVar10 = *plVar8;
          lVar7 = lVar6;
          if (*(ulong *)(lVar10 + 0xff8) == uVar5) break;
          lVar9 = lVar10 + 0x1000;
          lVar6 = lVar10;
        }
        else {
          lVar7 = lVar9;
          if (*(ulong *)(lVar9 + -8) == uVar5) break;
        }
        lVar9 = lVar9 + -8;
        lVar7 = lVar2;
      } while (lVar9 != lVar2);
      if (*(long *)(param_1 + 0x70) == lVar4) goto LAB_004e8f84;
    }
    lVar4 = *(long *)(lVar4 + (uVar3 >> 9) * 8) + (uVar3 & 0x1ff) * 8;
  }
  return lVar7 != lVar4;
}


// ===== 004e8f94  FUN_004e8f94 =====

void FUN_004e8f94(undefined8 *param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  uint local_16c;
  undefined1 local_168 [16];
  undefined1 auStack_150 [264];
  long local_48;
  ulong uVar12;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_16c = param_2;
  FUN_004e9304();
  if (param_2 < *(uint *)(param_1 + 9)) {
    FUN_004f0510(local_168,1,
                 "../../discord_common/native/third_party/libdave/cpp/src/cryptor_manager.cpp",0x35)
    ;
                    /* try { // try from 004e8ff4 to 004e9033 has its CatchHandler @ 004e92dc */
    FUN_00428964(auStack_150,"Received frame with old generation: ",0x24);
    FUN_0054bcd8(auStack_150,param_2);
    FUN_00428964(auStack_150,", oldest generation: ",0x15);
    FUN_0054bcd8(auStack_150,*(undefined4 *)(param_1 + 9));
  }
  else if (*(int *)((long)param_1 + 0x4c) + 0xfaU < param_2) {
    FUN_004f0510(local_168,1,
                 "../../discord_common/native/third_party/libdave/cpp/src/cryptor_manager.cpp",0x3b)
    ;
                    /* try { // try from 004e9068 to 004e90a7 has its CatchHandler @ 004e92d8 */
    FUN_00428964(auStack_150,"Received frame with future generation: ",0x27);
    FUN_0054bcd8(auStack_150,param_2);
    FUN_00428964(auStack_150,", newest generation: ",0x15);
    FUN_0054bcd8(auStack_150,*(undefined4 *)((long)param_1 + 0x4c));
  }
  else {
    lVar3 = (**(code **)(*(long *)*param_1 + 0x10))();
    lVar3 = (lVar3 - param_1[7]) / 1000000000;
    lVar9 = lVar3 * 0xaa >> 0x18;
    uVar4 = (ulong)param_2;
    if ((long)uVar4 <= lVar9) {
      uVar5 = param_1[3];
      if (uVar5 != 0) {
        uVar11 = NEON_cnt(uVar5,1);
        uVar10 = NEON_uaddlv(uVar11,1);
        uVar12 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10);
        if ((uVar12 & 0xffffffff) < 2) {
          uVar6 = (ulong)((int)uVar5 - 1U & param_2);
        }
        else {
          uVar6 = uVar4;
          if (uVar5 <= uVar4) {
            uVar6 = 0;
            if (uVar5 != 0) {
              uVar6 = uVar4 / uVar5;
            }
            uVar6 = uVar4 - uVar6 * uVar5;
          }
        }
        plVar7 = *(long **)(param_1[2] + uVar6 * 8);
        if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
          do {
            uVar8 = plVar7[1];
            if (uVar8 == uVar4) {
              if (*(uint *)(plVar7 + 2) == param_2) goto LAB_004e92a8;
            }
            else {
              if ((uVar12 & 0xffffffff) < 2) {
                uVar8 = uVar8 & uVar5 - 1;
              }
              else if (uVar5 <= uVar8) {
                uVar1 = 0;
                if (uVar5 != 0) {
                  uVar1 = uVar8 / uVar5;
                }
                uVar8 = uVar8 - uVar1 * uVar5;
              }
              if (uVar8 != uVar6) break;
            }
            plVar7 = (long *)*plVar7;
          } while (plVar7 != (long *)0x0);
        }
      }
      local_168 = FUN_004e9590(param_1,param_2);
                    /* try { // try from 004e9278 to 004e928b has its CatchHandler @ 004e92b0 */
      plVar7 = (long *)FUN_004e9fa0(param_1 + 2,&local_16c,&local_16c,local_168);
      uVar11 = local_168._0_8_;
      local_168._0_8_ = 0;
      if ((long *)uVar11 != (long *)0x0) {
        (**(code **)(*(long *)uVar11 + 8))();
      }
LAB_004e92a8:
      lVar3 = plVar7[3];
      goto LAB_004e9198;
    }
    FUN_004f0510(local_168,1,
                 "../../discord_common/native/third_party/libdave/cpp/src/cryptor_manager.cpp",0x45)
    ;
                    /* try { // try from 004e9118 to 004e918b has its CatchHandler @ 004e92d4 */
    FUN_00428964(auStack_150,"Received frame with generation ",0x1f);
    FUN_0054bcd8(auStack_150,param_2);
    FUN_00428964(auStack_150," beyond ratchet max lifetime generations: ",0x2a);
    FUN_0054c260(auStack_150,lVar9);
    FUN_00428964(auStack_150,", ratchet lifetime: ",0x14);
    FUN_0054c260(auStack_150,lVar3);
    FUN_00428964(auStack_150,&DAT_0019cf4c,1);
  }
  FUN_004f0604(local_168);
  lVar3 = 0;
LAB_004e9198:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


// ===== 004e9304  FUN_004e9304 =====

void FUN_004e9304(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined2 uVar13;
  undefined8 uVar14;
  void *local_188 [2];
  char local_178;
  undefined1 auStack_170 [264];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((long *)param_1[4] != (long *)0x0) {
    plVar5 = (long *)param_1[4];
    do {
      while( true ) {
        lVar4 = (**(code **)(*(long *)*param_1 + 0x10))();
        if (lVar4 <= plVar5[4]) break;
        FUN_004f0510(local_188,1,
                     "../../discord_common/native/third_party/libdave/cpp/src/cryptor_manager.cpp",
                     0xa5);
                    /* try { // try from 004e9394 to 004e93af has its CatchHandler @ 004e9568 */
        FUN_00428964(auStack_170,"Removing expired cryptor, generation: ",0x26);
        FUN_0054bcd8(auStack_170,(int)plVar5[2]);
        FUN_004f0604(local_188);
        plVar12 = (long *)*plVar5;
        FUN_004eb248(local_188,param_1 + 2,plVar5);
        pvVar3 = local_188[0];
        local_188[0] = (void *)0x0;
        if (pvVar3 != (void *)0x0) {
          if (local_178 != '\0') {
            plVar5 = *(long **)((long)pvVar3 + 0x18);
            *(undefined8 *)((long)pvVar3 + 0x18) = 0;
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 8))();
            }
          }
          operator_delete(pvVar3);
        }
        plVar5 = plVar12;
        if (plVar12 == (long *)0x0) goto LAB_004e9408;
      }
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
  }
LAB_004e9408:
  uVar8 = *(uint *)(param_1 + 9);
  if (uVar8 < *(uint *)((long)param_1 + 0x4c)) {
    do {
      uVar6 = param_1[3];
      if (uVar6 != 0) {
        uVar9 = (ulong)uVar8;
        uVar14 = NEON_cnt(uVar6,1);
        uVar13 = NEON_uaddlv(uVar14,1);
        uVar7 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
        if (uVar7 < 2) {
          uVar10 = (ulong)((int)uVar6 - 1U & uVar8);
        }
        else {
          uVar10 = uVar9;
          if (uVar6 <= uVar9) {
            uVar10 = 0;
            if (uVar6 != 0) {
              uVar10 = uVar9 / uVar6;
            }
            uVar10 = uVar9 - uVar10 * uVar6;
          }
        }
        plVar5 = *(long **)(param_1[2] + uVar10 * 8);
        if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
          do {
            uVar11 = plVar5[1];
            if (uVar11 == uVar9) {
              if (*(uint *)(plVar5 + 2) == uVar8) goto LAB_004e9534;
            }
            else {
              if (uVar7 < 2) {
                uVar11 = uVar11 & uVar6 - 1;
              }
              else if (uVar6 <= uVar11) {
                uVar1 = 0;
                if (uVar6 != 0) {
                  uVar1 = uVar11 / uVar6;
                }
                uVar11 = uVar11 - uVar1 * uVar6;
              }
              if (uVar11 != uVar10) break;
            }
            plVar5 = (long *)*plVar5;
          } while (plVar5 != (long *)0x0);
        }
      }
      FUN_004f0510(local_188,1,
                   "../../discord_common/native/third_party/libdave/cpp/src/cryptor_manager.cpp",
                   0xad);
                    /* try { // try from 004e94e8 to 004e9503 has its CatchHandler @ 004e9564 */
      FUN_00428964(auStack_170,"Deleting key for old generation: ",0x21);
      FUN_0054bcd8(auStack_170,*(undefined4 *)(param_1 + 9));
      FUN_004f0604(local_188);
      (**(code **)(*(long *)param_1[1] + 0x18))((long *)param_1[1],*(undefined4 *)(param_1 + 9));
      uVar8 = *(int *)(param_1 + 9) + 1;
      *(uint *)(param_1 + 9) = uVar8;
    } while (uVar8 < *(uint *)((long)param_1 + 0x4c));
  }
LAB_004e9534:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004e9590  FUN_004e9590 =====

undefined1  [16] FUN_004e9590(undefined8 *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 *local_180;
  undefined1 *local_178;
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [264];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)param_1[1] + 0x10))(&local_180);
  if (param_2 < *(uint *)((long)param_1 + 0x4c)) {
                    /* try { // try from 004e95dc to 004e95f7 has its CatchHandler @ 004e970c */
    FUN_004f0510(auStack_168,1,
                 "../../discord_common/native/third_party/libdave/cpp/src/cryptor_manager.cpp",0x94)
    ;
                    /* try { // try from 004e95fc to 004e961b has its CatchHandler @ 004e971c */
    FUN_00428964(auStack_150,"Creating cryptor for old generation: ",0x25);
    FUN_0054bcd8(auStack_150,param_2);
    FUN_004f0604(auStack_168);
                    /* try { // try from 004e9630 to 004e9633 has its CatchHandler @ 004e9708 */
    lVar2 = (**(code **)(*(long *)*param_1 + 0x10))();
    lVar2 = lVar2 + 10000000000;
  }
  else {
                    /* try { // try from 004e9648 to 004e9663 has its CatchHandler @ 004e9704 */
    FUN_004f0510(auStack_168,1,
                 "../../discord_common/native/third_party/libdave/cpp/src/cryptor_manager.cpp",0x98)
    ;
                    /* try { // try from 004e9668 to 004e9687 has its CatchHandler @ 004e9718 */
    FUN_00428964(auStack_150,"Creating cryptor for new generation: ",0x25);
    FUN_0054bcd8(auStack_150,param_2);
    FUN_004f0604(auStack_168);
    lVar2 = 0x7fffffffffffffff;
  }
                    /* try { // try from 004e9694 to 004e969b has its CatchHandler @ 004e9710 */
  auVar5._0_8_ = FUN_004e8d14(&local_180);
  if (0 < (long)local_178 - (long)local_180) {
    uVar4 = ((long)local_178 - (long)local_180) + 1;
    puVar3 = local_180;
    do {
      uVar4 = uVar4 - 1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    } while (1 < uVar4);
  }
  if (local_180 != (undefined1 *)0x0) {
    local_178 = local_180;
    operator_delete(local_180);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  auVar5._8_8_ = lVar2;
  return auVar5;
}


// ===== 004e974c  FUN_004e974c =====

void FUN_004e974c(undefined8 *param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined2 uVar17;
  undefined8 uVar18;
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [264];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(char *)(param_1 + 0xb) == '\0') {
    uVar7 = 0;
    uVar15 = (ulong)(param_3 & 0xffffff) | (ulong)param_2 << 0x18;
  }
  else {
    uVar15 = (ulong)(param_3 & 0xffffff) | (ulong)param_2 << 0x18;
    uVar7 = param_1[10] + 1;
    if (uVar15 < uVar7) {
      lVar4 = param_1[0xd];
      if (param_1[0xe] == lVar4) goto LAB_004e9958;
      uVar7 = param_1[0x10];
      plVar10 = (long *)(lVar4 + (uVar7 + param_1[0x11] >> 9) * 8);
      lVar16 = *(long *)(lVar4 + (uVar7 >> 9) * 8) + (uVar7 & 0x1ff) * 8;
      lVar6 = *plVar10 + (uVar7 + param_1[0x11] & 0x1ff) * 8;
      if (lVar6 == lVar16) {
LAB_004e9a24:
        if (lVar6 == *(long *)(lVar4 + (uVar7 >> 9) * 8) + (uVar7 & 0x1ff) * 8) goto LAB_004e9958;
      }
      else {
        lVar11 = *plVar10;
        lVar13 = lVar6;
        do {
          if (lVar13 == lVar11) {
            lVar14 = plVar10[-1];
            lVar6 = lVar11;
            if (*(ulong *)(lVar14 + 0xff8) == uVar15) break;
            lVar13 = lVar14 + 0x1000;
            plVar10 = plVar10 + -1;
            lVar11 = lVar14;
          }
          else {
            lVar6 = lVar13;
            if (*(ulong *)(lVar13 + -8) == uVar15) break;
          }
          lVar13 = lVar13 + -8;
          lVar6 = lVar16;
        } while (lVar13 != lVar16);
        if (param_1[0xe] != lVar4) goto LAB_004e9a24;
        if (lVar6 == 0) goto LAB_004e9958;
      }
      lVar4 = lVar6 - *plVar10 >> 3;
      if (lVar6 - *plVar10 < 9) {
        uVar7 = 0x200 - lVar4;
        plVar10 = plVar10 + -(uVar7 >> 9);
        lVar4 = *plVar10 + ((ulong)~(uint)uVar7 & 0x1ff) * 8;
      }
      else {
        uVar7 = lVar4 - 1;
        plVar10 = plVar10 + (uVar7 >> 9);
        lVar4 = *plVar10 + (uVar7 & 0x1ff) * 8;
      }
      FUN_004e9c64(param_1 + 0xc,plVar10,lVar4);
      goto LAB_004e9958;
    }
  }
  uVar7 = uVar15 - uVar7;
  lVar4 = param_1[0x11];
  if (999 < uVar7) {
    uVar7 = 1000;
  }
  if ((lVar4 != 0) && (1000 < lVar4 + uVar7)) {
    puVar5 = (undefined8 *)param_1[0xd];
    uVar8 = param_1[0x10];
    do {
      if (*(long *)((long)puVar5 + (uVar8 >> 6 & 0x3fffffffffffff8)) == 0) {
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x3f,"__loc != nullptr","null pointer given to destroy_at");
        }
        goto LAB_004e9c60;
      }
      lVar4 = lVar4 + -1;
      uVar8 = uVar8 + 1;
      param_1[0x10] = uVar8;
      param_1[0x11] = lVar4;
      if (0x3ff < uVar8) {
        operator_delete((void *)*puVar5);
        puVar5 = (undefined8 *)(param_1[0xd] + 8);
        lVar4 = param_1[0x11];
        param_1[0xd] = puVar5;
        uVar8 = param_1[0x10] - 0x200;
        param_1[0x10] = uVar8;
      }
    } while ((lVar4 != 0) && (1000 < lVar4 + uVar7));
  }
  if (uVar15 - uVar7 < uVar15) {
    lVar6 = param_1[0xd];
    lVar13 = param_1[0xe];
    lVar16 = -uVar7;
    do {
      lVar11 = 0;
      if (lVar13 != lVar6) {
        lVar11 = (lVar13 - lVar6) * 0x40 + -1;
      }
      if (lVar11 == lVar4 + param_1[0x10]) {
        FUN_004ea474(param_1 + 0xc);
        lVar6 = param_1[0xd];
        lVar13 = param_1[0xe];
      }
      if (lVar13 == lVar6) {
LAB_004e9c00:
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        goto LAB_004e9c60;
      }
      lVar4 = *(long *)(lVar6 + ((ulong)(param_1[0x11] + param_1[0x10]) >> 6 & 0x3fffffffffffff8));
      if (lVar4 == 0) goto LAB_004e9c00;
      lVar11 = uVar15 + lVar16;
      bVar3 = lVar16 != -1;
      lVar16 = lVar16 + 1;
      *(long *)(lVar4 + (param_1[0x11] + param_1[0x10] & 0x1ff) * 8) = lVar11;
      lVar4 = param_1[0x11] + 1;
      param_1[0x11] = lVar4;
    } while (bVar3);
  }
  param_1[10] = uVar15;
  *(undefined1 *)(param_1 + 0xb) = 1;
LAB_004e9958:
  uVar7 = (ulong)param_2;
  if ((*(uint *)((long)param_1 + 0x4c) < param_2) && (uVar15 = param_1[3], uVar15 != 0)) {
    uVar18 = NEON_cnt(uVar15,1);
    uVar17 = NEON_uaddlv(uVar18,1);
    uVar8 = CONCAT62((int6)((ulong)uVar18 >> 0x10),uVar17) & 0xffffffff;
    if (uVar8 < 2) {
      uVar9 = (ulong)((int)uVar15 - 1U & param_2);
    }
    else {
      uVar9 = uVar7;
      if (uVar15 <= uVar7) {
        uVar9 = 0;
        if (uVar15 != 0) {
          uVar9 = uVar7 / uVar15;
        }
        uVar9 = uVar7 - uVar9 * uVar15;
      }
    }
    plVar10 = *(long **)(param_1[2] + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      do {
        uVar12 = plVar10[1];
        if (uVar12 == uVar7) {
          if (*(uint *)(plVar10 + 2) == param_2) {
            FUN_004f0510(auStack_178,1,
                         "../../discord_common/native/third_party/libdave/cpp/src/cryptor_manager.cpp"
                         ,0x78);
                    /* try { // try from 004e9ac8 to 004e9ae7 has its CatchHandler @ 004e9c38 */
            FUN_00428964(auStack_160,"Reporting cryptor success, generation: ",0x27);
            FUN_0054bcd8(auStack_160,param_2);
            FUN_004f0604(auStack_178);
            *(uint *)((long)param_1 + 0x4c) = param_2;
            lVar4 = (**(code **)(*(long *)*param_1 + 0x10))();
            plVar10 = (long *)param_1[4];
            if (plVar10 != (long *)0x0) {
              do {
                if (*(uint *)(plVar10 + 2) < *(uint *)((long)param_1 + 0x4c)) {
                  FUN_004f0510(auStack_178,1,
                               "../../discord_common/native/third_party/libdave/cpp/src/cryptor_manager.cpp"
                               ,0x7f);
                    /* try { // try from 004e9b7c to 004e9b97 has its CatchHandler @ 004e9c3c */
                  FUN_00428964(auStack_160,"Updating expiry for cryptor, generation: ",0x29);
                  FUN_0054bcd8(auStack_160,(int)plVar10[2]);
                  FUN_004f0604(auStack_178);
                  lVar16 = lVar4 + 10000000000;
                  if (plVar10[4] <= lVar4 + 10000000000) {
                    lVar16 = plVar10[4];
                  }
                  plVar10[4] = lVar16;
                }
                plVar10 = (long *)*plVar10;
              } while (plVar10 != (long *)0x0);
            }
            break;
          }
        }
        else {
          if (uVar8 < 2) {
            uVar12 = uVar12 & uVar15 - 1;
          }
          else if (uVar15 <= uVar12) {
            uVar1 = 0;
            if (uVar15 != 0) {
              uVar1 = uVar12 / uVar15;
            }
            uVar12 = uVar12 - uVar1 * uVar15;
          }
          if (uVar12 != uVar9) break;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_004e9c60:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004e9c64  FUN_004e9c64 =====

void FUN_004e9c64(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  long extraout_x1;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  uVar5 = *(ulong *)(param_1 + 0x20);
  lVar3 = *(long *)(param_1 + 8);
  plVar1 = (long *)(lVar3 + (uVar5 >> 9) * 8);
  plVar4 = plVar1;
  if (*(long *)(param_1 + 0x10) == lVar3) {
    lVar10 = 0;
    lVar9 = lVar10;
    if (param_3 == 0) goto LAB_004e9ce8;
LAB_004e9ca4:
    lVar6 = *plVar1;
    uVar7 = (param_3 - *param_2 >> 3) + ((long)param_2 - (long)plVar1) * 0x40;
    uVar8 = lVar9 - lVar6 >> 3;
    uVar2 = uVar7 - uVar8;
    lVar10 = lVar9;
    if (uVar7 != uVar8) {
      if ((long)uVar7 < 1) {
        uVar8 = 0x1ff - uVar7;
        uVar7 = (ulong)~(uint)uVar8;
        lVar10 = (uVar8 >> 9) * -8;
      }
      else {
        lVar10 = (uVar7 >> 9) << 3;
      }
      plVar4 = (long *)((long)plVar1 + lVar10);
      lVar6 = *plVar4;
      lVar10 = lVar6 + (uVar7 & 0x1ff) * 8;
      if (*(long *)(param_1 + 0x28) - 1U >> 1 < uVar2) {
        lVar6 = lVar10 - lVar6;
        if (lVar6 + 7 < 0 == SCARRY8(lVar6,7)) {
          uVar8 = (lVar6 >> 3) + 1;
          lVar9 = (uVar8 >> 9) * 8;
        }
        else {
          uVar7 = 0x1fe - (lVar6 >> 3);
          uVar8 = (ulong)~(uint)uVar7;
          lVar9 = (uVar7 >> 9) * -8;
        }
        uVar5 = *(long *)(param_1 + 0x28) + uVar5;
        plVar1 = (long *)(lVar3 + (uVar5 >> 9) * 8);
        if (*(long *)(param_1 + 0x10) == lVar3) {
          lVar3 = 0;
        }
        else {
          lVar3 = *plVar1 + (uVar5 & 0x1ff) * 8;
        }
        FUN_004eb0c4((long *)((long)plVar4 + lVar9),
                     *(long *)((long)plVar4 + lVar9) + (uVar8 & 0x1ff) * 8,plVar1,lVar3,plVar4,
                     lVar10);
        if (extraout_x1 != 0) {
          lVar10 = *(long *)(param_1 + 0x10);
          lVar9 = *(long *)(param_1 + 0x28);
          lVar3 = 0;
          if (lVar10 != *(long *)(param_1 + 8)) {
            lVar3 = (lVar10 - *(long *)(param_1 + 8)) * 0x40 + -1;
          }
          *(long *)(param_1 + 0x28) = lVar9 + -1;
          if ((lVar3 - (lVar9 + *(long *)(param_1 + 0x20))) + 1U < 0x400) {
            return;
          }
          operator_delete(*(void **)(lVar10 + -8));
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
          return;
        }
        goto LAB_004e9f1c;
      }
    }
  }
  else {
    lVar10 = *plVar1 + (uVar5 & 0x1ff) * 8;
    lVar9 = lVar10;
    if (param_3 != lVar10) goto LAB_004e9ca4;
LAB_004e9ce8:
    lVar6 = *plVar1;
    lVar9 = lVar10;
  }
  lVar6 = lVar10 - lVar6;
  if (lVar6 + 7 < 0 == SCARRY8(lVar6,7)) {
    uVar5 = (lVar6 >> 3) + 1;
    lVar3 = (uVar5 >> 9) * 8;
  }
  else {
    uVar8 = 0x1fe - (lVar6 >> 3);
    uVar5 = (ulong)~(uint)uVar8;
    lVar3 = (uVar8 >> 9) * -8;
  }
  FUN_004eaed0(plVar1,lVar9,plVar4,lVar10,(long *)((long)plVar4 + lVar3),
               *(long *)((long)plVar4 + lVar3) + (uVar5 & 0x1ff) * 8);
  if (lVar9 != 0) {
    uVar5 = *(long *)(param_1 + 0x20) + 1;
    *(ulong *)(param_1 + 0x20) = uVar5;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
    if (0x3ff < uVar5) {
      operator_delete((void *)**(undefined8 **)(param_1 + 8));
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x200;
    }
    return;
  }
LAB_004e9f1c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h",
             0x3f,"__loc != nullptr","null pointer given to destroy_at");
}


// ===== 004e9f44  FUN_004e9f44 =====

int FUN_004e9f44(long param_1,uint param_2)

{
  return (*(uint *)(param_1 + 0x48) + (uint)(param_2 < (*(uint *)(param_1 + 0x48) & 0xff)) * 0x100 &
         0xffffff00) + param_2;
}


// ===== 004e9f60  FUN_004e9f60 =====

void FUN_004e9f60(undefined8 *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  
  puVar1 = (undefined1 *)*param_1;
  if (0 < param_1[1] - (long)puVar1) {
    uVar2 = (param_1[1] - (long)puVar1) + 1;
    do {
      uVar2 = uVar2 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar2);
    puVar1 = (undefined1 *)*param_1;
  }
  if (puVar1 != (undefined1 *)0x0) {
    param_1[1] = puVar1;
    operator_delete(puVar1);
    return;
  }
  return;
}


// ===== 004e9fa0  FUN_004e9fa0 =====

void FUN_004e9fa0(long *param_1,uint *param_2,undefined4 *param_3,long *param_4)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x27;
  undefined2 uVar16;
  undefined8 uVar17;
  float fVar18;
  
  lVar5 = tpidr_el0;
  lVar7 = *(long *)(lVar5 + 0x28);
  uVar15 = param_1[1];
  uVar2 = *param_2;
  uVar14 = (ulong)uVar2;
  if (uVar15 != 0) {
    uVar17 = NEON_cnt(uVar15,1);
    uVar16 = NEON_uaddlv(uVar17,1);
    uVar9 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff;
    if (uVar9 < 2) {
      unaff_x27 = (ulong)((int)uVar15 - 1U & uVar2);
    }
    else {
      unaff_x27 = uVar14;
      if (uVar15 <= uVar14) {
        uVar12 = 0;
        if (uVar15 != 0) {
          uVar12 = uVar14 / uVar15;
        }
        unaff_x27 = uVar14 - uVar12 * uVar15;
      }
    }
    plVar6 = *(long **)(*param_1 + unaff_x27 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) goto LAB_004ea07c;
        uVar12 = plVar6[1];
        if (uVar12 != uVar14) {
          if (uVar9 < 2) {
            uVar12 = uVar12 & uVar15 - 1;
          }
          else if (uVar15 <= uVar12) {
            uVar4 = 0;
            if (uVar15 != 0) {
              uVar4 = uVar12 / uVar15;
            }
            uVar12 = uVar12 - uVar4 * uVar15;
          }
          if (uVar12 != unaff_x27) goto LAB_004ea07c;
        }
      } while (*(uint *)(plVar6 + 2) != uVar2);
      uVar17 = 0;
      goto LAB_004ea26c;
    }
  }
LAB_004ea07c:
  plVar1 = param_1 + 2;
  plVar6 = (long *)operator_new(0x28);
  uVar3 = *param_3;
  lVar8 = *param_4;
  lVar11 = param_4[1];
  *param_4 = 0;
  lVar13 = param_1[3];
  *(undefined4 *)(plVar6 + 2) = uVar3;
  fVar18 = *(float *)(param_1 + 4);
  *plVar6 = 0;
  plVar6[1] = uVar14;
  plVar6[3] = lVar8;
  plVar6[4] = lVar11;
  if ((uVar15 == 0) || (fVar18 * (float)uVar15 < (float)(lVar13 + 1))) {
    if (uVar15 < 3) {
      uVar9 = 1;
    }
    else {
      uVar9 = (ulong)((uVar15 & uVar15 - 1) != 0);
    }
    uVar9 = uVar9 | uVar15 << 1;
    uVar12 = (ulong)((float)(lVar13 + 1) / fVar18);
    if (uVar9 <= uVar12) {
      uVar9 = uVar12;
    }
    if (uVar9 - 1 == 0) {
      uVar9 = 2;
    }
    else if ((uVar9 & uVar9 - 1) != 0) {
                    /* try { // try from 004ea128 to 004ea1b3 has its CatchHandler @ 004ea29c */
      uVar9 = FUN_005204f8(uVar9);
      uVar15 = param_1[1];
    }
    if (uVar15 < uVar9) {
LAB_004ea140:
      FUN_004ea318(param_1,uVar9);
    }
    else if (uVar9 < uVar15) {
      uVar12 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar15 < 3) {
LAB_004ea1b0:
        uVar12 = FUN_005204f8();
      }
      else {
        uVar17 = NEON_cnt(uVar15,1);
        uVar16 = NEON_uaddlv(uVar17,1);
        if (1 < (CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff)) goto LAB_004ea1b0;
        if (1 < uVar12) {
          uVar12 = 1L << (-LZCOUNT(uVar12 - 1) & 0x3fU);
        }
      }
      if (uVar9 <= uVar12) {
        uVar9 = uVar12;
      }
      if (uVar9 < uVar15) goto LAB_004ea140;
    }
    uVar15 = param_1[1];
    if ((uVar15 & uVar15 - 1) == 0) {
      unaff_x27 = (ulong)((int)uVar15 - 1U & uVar2);
    }
    else {
      unaff_x27 = uVar14;
      if (uVar15 <= uVar14) {
        uVar9 = 0;
        if (uVar15 != 0) {
          uVar9 = uVar14 / uVar15;
        }
        unaff_x27 = uVar14 - uVar9 * uVar15;
      }
    }
  }
  lVar8 = *param_1;
  plVar10 = *(long **)(lVar8 + unaff_x27 * 8);
  if (plVar10 == (long *)0x0) {
    lVar11 = *plVar1;
    *plVar1 = (long)plVar6;
    *plVar6 = lVar11;
    *(long **)(lVar8 + unaff_x27 * 8) = plVar1;
    if (*plVar6 != 0) {
      uVar14 = *(ulong *)(*plVar6 + 8);
      if ((uVar15 & uVar15 - 1) == 0) {
        uVar14 = uVar14 & uVar15 - 1;
      }
      else if (uVar15 <= uVar14) {
        uVar9 = 0;
        if (uVar15 != 0) {
          uVar9 = uVar14 / uVar15;
        }
        uVar14 = uVar14 - uVar9 * uVar15;
      }
      *(long **)(*param_1 + uVar14 * 8) = plVar6;
    }
  }
  else {
    *plVar6 = *plVar10;
    *plVar10 = (long)plVar6;
  }
  uVar17 = 1;
  param_1[3] = param_1[3] + 1;
LAB_004ea26c:
  if (*(long *)(lVar5 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar6,uVar17);
}


// ===== 004ea2c4  FUN_004ea2c4 =====

void FUN_004ea2c4(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  
  pvVar2 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar2 != (void *)0x0) {
    if (*(char *)(param_1 + 2) != '\0') {
      plVar1 = *(long **)((long)pvVar2 + 0x18);
      *(undefined8 *)((long)pvVar2 + 0x18) = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
    operator_delete(pvVar2);
    return;
  }
  return;
}


// ===== 004ea318  FUN_004ea318 =====

void FUN_004ea318(long *param_1,ulong param_2)

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


// ===== 004ea474  FUN_004ea474 =====

void FUN_004ea474(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  void *local_68;
  void *local_60;
  void *pvStack_58;
  void *local_50;
  void *pvStack_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((ulong)param_1[4] < 0x200) {
    plVar3 = param_1 + 3;
    lVar4 = *plVar3;
    lVar6 = lVar4 - *param_1;
    uVar7 = param_1[2] - param_1[1] >> 3;
    if (uVar7 < (ulong)(lVar6 >> 3)) {
      if (lVar4 == param_1[2]) {
        local_60 = operator_new(0x1000);
        FUN_004ea9f0(param_1,&local_60);
        local_60 = *(void **)param_1[1];
        param_1[1] = (long)((undefined8 *)param_1[1] + 1);
        goto LAB_004ea4b8;
      }
      local_60 = operator_new(0x1000);
      FUN_004ea840(param_1,&local_60);
    }
    else {
      uVar5 = lVar6 >> 2;
      if (lVar4 == *param_1) {
        uVar5 = 1;
      }
      local_40 = plVar3;
      if (uVar5 >> 0x3d != 0) {
        if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00401ad4();
        }
        goto LAB_004ea68c;
      }
      local_60 = operator_new(uVar5 * 8);
      pvStack_58 = (void *)((long)local_60 + uVar7 * 8);
      pvStack_48 = (void *)((long)local_60 + uVar5 * 8);
      local_50 = pvStack_58;
                    /* try { // try from 004ea544 to 004ea54b has its CatchHandler @ 004ea640 */
      local_68 = operator_new(0x1000);
                    /* try { // try from 004ea554 to 004ea55f has its CatchHandler @ 004ea630 */
      FUN_004eab88(&local_60,&local_68);
      lVar6 = param_1[2];
      lVar4 = -7 - lVar6;
      while (lVar6 != param_1[1]) {
        lVar6 = lVar6 + -8;
        lVar4 = lVar4 + 8;
                    /* try { // try from 004ea580 to 004ea58b has its CatchHandler @ 004ea644 */
        FUN_004ead38(&local_60,lVar6);
      }
      lVar9 = param_1[3];
      lVar8 = param_1[2];
      pvVar2 = (void *)*param_1;
      param_1[1] = (long)pvStack_58;
      *param_1 = (long)local_60;
      param_1[3] = (long)pvStack_48;
      param_1[2] = (long)local_50;
      local_50 = (void *)lVar8;
      if (lVar6 != lVar8) {
        local_50 = (void *)(lVar8 + (-(lVar8 + lVar4) & 0xfffffffffffffff8U));
      }
      local_60 = pvVar2;
      pvStack_58 = (void *)lVar6;
      pvStack_48 = (void *)lVar9;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
      }
    }
  }
  else {
    param_1[4] = param_1[4] - 0x200;
    local_60 = *(void **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
LAB_004ea4b8:
    FUN_004ea690(param_1,&local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_004ea68c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ea690  FUN_004ea690 =====

void FUN_004ea690(undefined8 *param_1,undefined8 *param_2)

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
  if (puVar11 != (undefined8 *)param_1[3]) goto LAB_004ea7e4;
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
    goto LAB_004ea7e4;
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
      if (uVar3 == uVar9) goto LAB_004ea7cc;
    }
    do {
      puVar10 = puVar8 + 1;
      *puVar8 = *__src;
      puVar8 = puVar10;
      __src = __src + 1;
    } while (puVar10 != puVar11);
  }
LAB_004ea7cc:
  *param_1 = pvVar5;
  param_1[1] = puVar1;
  param_1[2] = puVar11;
  param_1[3] = (void *)((long)pvVar5 + uVar7 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2);
    puVar11 = (undefined8 *)param_1[2];
  }
LAB_004ea7e4:
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


// ===== 004ea840  FUN_004ea840 =====

void FUN_004ea840(undefined8 *param_1,undefined8 *param_2)

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
  if (puVar11 != (undefined8 *)param_1[3]) goto LAB_004ea994;
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
    goto LAB_004ea994;
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
      if (uVar3 == uVar9) goto LAB_004ea97c;
    }
    do {
      puVar10 = puVar8 + 1;
      *puVar8 = *__src;
      puVar8 = puVar10;
      __src = __src + 1;
    } while (puVar10 != puVar11);
  }
LAB_004ea97c:
  *param_1 = pvVar5;
  param_1[1] = puVar1;
  param_1[2] = puVar11;
  param_1[3] = (void *)((long)pvVar5 + uVar7 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2);
    puVar11 = (undefined8 *)param_1[2];
  }
LAB_004ea994:
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


// ===== 004ea9f0  FUN_004ea9f0 =====

void FUN_004ea9f0(long *param_1,undefined8 *param_2)

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
  if (__src != (undefined8 *)*param_1) goto LAB_004eab58;
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
    goto LAB_004eab58;
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
      if (uVar2 == uVar10) goto LAB_004eab40;
    }
    do {
      puVar8 = puVar7 + 1;
      *puVar7 = *puVar9;
      puVar7 = puVar8;
      puVar9 = puVar9 + 1;
    } while (puVar8 != puVar6);
  }
LAB_004eab40:
  *param_1 = (long)pvVar3;
  param_1[1] = (long)__dest;
  param_1[2] = (long)puVar6;
  param_1[3] = (long)((long)pvVar3 + uVar5 * 8);
  if (__src != (undefined8 *)0x0) {
    operator_delete(__src);
    __dest = (undefined8 *)param_1[1];
  }
LAB_004eab58:
  __dest[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}


// ===== 004eab88  FUN_004eab88 =====

void FUN_004eab88(undefined8 *param_1,undefined8 *param_2)

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
  if (puVar11 != (undefined8 *)param_1[3]) goto LAB_004eacdc;
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
    goto LAB_004eacdc;
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
      if (uVar3 == uVar9) goto LAB_004eacc4;
    }
    do {
      puVar10 = puVar8 + 1;
      *puVar8 = *__src;
      puVar8 = puVar10;
      __src = __src + 1;
    } while (puVar10 != puVar11);
  }
LAB_004eacc4:
  *param_1 = pvVar5;
  param_1[1] = puVar1;
  param_1[2] = puVar11;
  param_1[3] = (void *)((long)pvVar5 + uVar7 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2);
    puVar11 = (undefined8 *)param_1[2];
  }
LAB_004eacdc:
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


// ===== 004ead38  FUN_004ead38 =====

void FUN_004ead38(long *param_1,undefined8 *param_2)

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
  if (__src != (undefined8 *)*param_1) goto LAB_004eaea0;
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
    goto LAB_004eaea0;
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
      if (uVar2 == uVar10) goto LAB_004eae88;
    }
    do {
      puVar8 = puVar7 + 1;
      *puVar7 = *puVar9;
      puVar7 = puVar8;
      puVar9 = puVar9 + 1;
    } while (puVar8 != puVar6);
  }
LAB_004eae88:
  *param_1 = (long)pvVar3;
  param_1[1] = (long)__dest;
  param_1[2] = (long)puVar6;
  param_1[3] = (long)((long)pvVar3 + uVar5 * 8);
  if (__src != (undefined8 *)0x0) {
    operator_delete(__src);
    __dest = (undefined8 *)param_1[1];
  }
LAB_004eaea0:
  __dest[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}


// ===== 004eaed0  FUN_004eaed0 =====

undefined1  [16]
FUN_004eaed0(long *param_1,void *param_2,long *param_3,void *param_4,long *param_5,long param_6)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  size_t __n;
  void *pvVar4;
  ulong uVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  if (param_4 != param_2) {
    lVar11 = (((long)param_4 - *param_3 >> 3) + ((long)param_3 - (long)param_1) * 0x40) -
             ((long)param_2 - *param_1 >> 3);
    while (0 < lVar11) {
      pvVar6 = (void *)*param_3;
      if (param_4 == pvVar6) {
        param_3 = param_3 + -1;
        pvVar6 = (void *)*param_3;
        param_4 = (void *)((long)pvVar6 + 0x1000);
      }
      lVar7 = (long)param_4 - (long)pvVar6 >> 3;
      lVar1 = lVar7;
      if (lVar11 <= lVar7) {
        lVar1 = lVar11;
      }
      pvVar4 = param_4;
      pvVar3 = (void *)((long)param_4 + lVar11 * -8);
      if (lVar7 <= lVar11) {
        pvVar3 = pvVar6;
      }
      while (pvVar4 != pvVar3) {
        lVar7 = param_6 - *param_5 >> 3;
        if (param_6 - *param_5 < 9) {
          uVar5 = 0x200 - lVar7;
          uVar8 = (ulong)~(uint)uVar5;
          lVar7 = param_5[-(uVar5 >> 9)];
        }
        else {
          uVar8 = lVar7 - 1;
          lVar7 = *(long *)((long)param_5 + (uVar8 >> 6 & 0x3fffffffffffff8));
        }
        lVar2 = lVar7 + (uVar8 & 0x1ff) * 8 + 8;
        lVar9 = (long)pvVar4 - (long)pvVar3 >> 3;
        lVar7 = lVar2 - lVar7;
        lVar10 = lVar7 >> 3;
        pvVar6 = (void *)((long)pvVar4 - lVar7);
        if (lVar9 <= lVar10) {
          pvVar6 = pvVar3;
        }
        if (lVar10 <= lVar9) {
          lVar9 = lVar10;
        }
        __n = (long)pvVar4 - (long)pvVar6;
        if (__n != 0) {
          memmove((void *)(lVar2 - __n),pvVar6,__n);
        }
        pvVar4 = pvVar6;
        if (lVar9 != 0) {
          uVar8 = (param_6 - *param_5 >> 3) - lVar9;
          if ((long)uVar8 < 1) {
            uVar5 = 0x1ff - uVar8;
            uVar8 = (ulong)~(uint)uVar5;
            lVar7 = (uVar5 >> 9) * -8;
          }
          else {
            lVar7 = (uVar8 >> 9) << 3;
          }
          param_5 = (long *)((long)param_5 + lVar7);
          param_6 = *param_5 + (uVar8 & 0x1ff) * 8;
        }
      }
      param_4 = (void *)((long)param_4 + -8);
      lVar11 = lVar11 - lVar1;
      if (lVar1 + -1 != 0) {
        uVar8 = ((long)param_4 - *param_3 >> 3) - (lVar1 + -1);
        if ((long)uVar8 < 1) {
          uVar5 = 0x1ff - uVar8;
          uVar8 = (ulong)~(uint)uVar5;
          lVar1 = (uVar5 >> 9) * -8;
        }
        else {
          lVar1 = (uVar8 >> 9) << 3;
        }
        param_3 = (long *)((long)param_3 + lVar1);
        param_4 = (void *)(*param_3 + (uVar8 & 0x1ff) * 8);
      }
    }
  }
  auVar12._8_8_ = param_6;
  auVar12._0_8_ = param_5;
  return auVar12;
}


// ===== 004eb0c4  FUN_004eb0c4 =====

undefined1  [16]
FUN_004eb0c4(long *param_1,void *param_2,long *param_3,void *param_4,long *param_5,void *param_6)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  void *__src;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  if (param_4 != param_2) {
    lVar9 = (((long)param_4 - *param_3 >> 3) + ((long)param_3 - (long)param_1) * 0x40) -
            ((long)param_2 - *param_1 >> 3);
    while (0 < lVar9) {
      lVar6 = (*param_1 + 0x1000) - (long)param_2 >> 3;
      lVar1 = lVar6;
      if (lVar9 <= lVar6) {
        lVar1 = lVar9;
      }
      __src = param_2;
      pvVar2 = (void *)((long)param_2 + lVar9 * 8);
      if (lVar6 <= lVar9) {
        pvVar2 = (void *)(*param_1 + 0x1000);
      }
      while (__src != pvVar2) {
        lVar7 = (long)pvVar2 - (long)__src >> 3;
        lVar6 = (*param_5 - (long)param_6) + 0x1000;
        lVar8 = lVar6 >> 3;
        pvVar3 = (void *)((long)__src + lVar6);
        if (lVar7 <= lVar8) {
          pvVar3 = pvVar2;
        }
        if (lVar8 <= lVar7) {
          lVar7 = lVar8;
        }
        memmove(param_6,__src,(long)pvVar3 - (long)__src);
        __src = pvVar3;
        if (lVar7 != 0) {
          uVar5 = lVar7 + ((long)param_6 - *param_5 >> 3);
          if ((long)uVar5 < 1) {
            uVar4 = 0x1ff - uVar5;
            uVar5 = (ulong)~(uint)uVar4;
            lVar6 = (uVar4 >> 9) * -8;
          }
          else {
            lVar6 = (uVar5 >> 9) << 3;
          }
          param_5 = (long *)((long)param_5 + lVar6);
          param_6 = (void *)(*param_5 + (uVar5 & 0x1ff) * 8);
        }
      }
      lVar9 = lVar9 - lVar1;
      if (lVar1 != 0) {
        uVar5 = lVar1 + ((long)param_2 - *param_1 >> 3);
        if ((long)uVar5 < 1) {
          uVar4 = 0x1ff - uVar5;
          uVar5 = (ulong)~(uint)uVar4;
          lVar1 = (uVar4 >> 9) * -8;
        }
        else {
          lVar1 = (uVar5 >> 9) << 3;
        }
        param_1 = (long *)((long)param_1 + lVar1);
        param_2 = (void *)(*param_1 + (uVar5 & 0x1ff) * 8);
      }
    }
  }
  auVar10._8_8_ = param_6;
  auVar10._0_8_ = param_5;
  return auVar10;
}


// ===== 004eb248  FUN_004eb248 =====

void FUN_004eb248(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar9 == uVar3) goto LAB_004eb314;
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
    if (uVar9 == uVar3) goto LAB_004eb314;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_004eb314:
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


// ===== 004eb37c  FUN_004eb37c =====

void FUN_004eb37c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x108);
  puVar1[0x20] = 0;
  *puVar1 = &PTR_FUN_00d1f6b8;
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
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  puVar1[1] = &PTR_FUN_00d1f700;
  puVar1[2] = puVar1 + 1;
  puVar1[0x12] = 0x8000000000000000;
  puVar1[0x11] = 0x8000000000000000;
  return;
}


// ===== 004eb3f4  FUN_004eb3f4 =====

void FUN_004eb3f4(long param_1,long *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  bool bVar6;
  long *plVar7;
  char *pcVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  char *local_1a8;
  char *local_1a0;
  long *local_190;
  char *local_188;
  char *local_180;
  undefined1 auStack_170 [264];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 004eb430 to 004eb44b has its CatchHandler @ 004eb77c */
  local_190 = param_2;
  FUN_004f0510(&local_188,1,"../../discord_common/native/third_party/libdave/cpp/src/decryptor.cpp",
               0x1b);
                    /* try { // try from 004eb450 to 004eb463 has its CatchHandler @ 004eb778 */
  FUN_00428964(auStack_170,"Transitioning to new key ratchet: ",0x22);
                    /* try { // try from 004eb464 to 004eb483 has its CatchHandler @ 004eb780 */
  FUN_0054c7e8(auStack_170,param_2);
  FUN_00428964(auStack_170,", expiry: ",10);
                    /* try { // try from 004eb484 to 004eb48f has its CatchHandler @ 004eb774 */
  FUN_0054c260(auStack_170,param_3);
  FUN_004f0604(&local_188);
                    /* try { // try from 004eb498 to 004eb49f has its CatchHandler @ 004eb790 */
  FUN_004eb7cc(param_1);
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x20))(&local_1a8,param_2);
    lVar9 = *(long *)(param_1 + 0x20);
    if (*(long *)(param_1 + 0x28) != lVar9) {
      uVar3 = *(ulong *)(param_1 + 0x38);
      uVar1 = *(long *)(param_1 + 0x40) + uVar3;
      lVar13 = *(long *)(lVar9 + (uVar3 / 0x1c) * 8) + (uVar3 % 0x1c) * 0x90;
      lVar12 = *(long *)(lVar9 + (uVar1 / 0x1c) * 8) + (uVar1 % 0x1c) * 0x90;
      if (lVar13 != lVar12) {
        plVar7 = (long *)(lVar9 + (uVar3 / 0x1c) * 8);
        do {
          (**(code **)(**(long **)(lVar13 + 8) + 0x20))(&local_188);
          if ((long)local_180 - (long)local_188 == (long)local_1a0 - (long)local_1a8) {
            pcVar8 = local_1a8;
            pcVar5 = local_188;
            if (local_188 == local_180) {
              bVar6 = true;
            }
            else {
              do {
                pcVar10 = pcVar5 + 1;
                bVar6 = *pcVar5 == *pcVar8;
                if (!bVar6) break;
                pcVar8 = pcVar8 + 1;
                pcVar5 = pcVar10;
              } while (pcVar10 != local_180);
            }
          }
          else {
            bVar6 = false;
          }
          if (local_188 != (char *)0x0) {
            local_180 = local_188;
            operator_delete(local_188);
          }
          if (bVar6) {
                    /* try { // try from 004eb700 to 004eb71b has its CatchHandler @ 004eb75c */
            FUN_004f0510(&local_188,1,
                         "../../discord_common/native/third_party/libdave/cpp/src/decryptor.cpp",
                         0x29);
                    /* try { // try from 004eb720 to 004eb72f has its CatchHandler @ 004eb74c */
            FUN_00428964(auStack_170,"Ignoring key ratchet for already installed key domain",0x35);
            FUN_004f0604(&local_188);
            if (local_1a8 != (char *)0x0) {
              local_1a0 = local_1a8;
              operator_delete(local_1a8);
            }
            goto LAB_004eb6b8;
          }
          lVar13 = lVar13 + 0x90;
          if (lVar13 - *plVar7 == 0xfc0) {
            plVar7 = plVar7 + 1;
            lVar13 = *plVar7;
          }
        } while (lVar13 != lVar12);
      }
    }
    if (local_1a8 != (char *)0x0) {
      local_1a0 = local_1a8;
      operator_delete(local_1a8);
    }
  }
                    /* try { // try from 004eb5ec to 004eb6b3 has its CatchHandler @ 004eb790 */
  lVar13 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  lVar9 = *(long *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != lVar9) {
    uVar3 = *(ulong *)(param_1 + 0x38);
    uVar1 = *(long *)(param_1 + 0x40) + uVar3;
    plVar7 = (long *)(lVar9 + (uVar3 / 0x1c) * 8);
    lVar11 = *plVar7;
    lVar12 = lVar11 + (uVar3 % 0x1c) * 0x90;
    lVar9 = *(long *)(lVar9 + (uVar1 / 0x1c) * 8) + (uVar1 % 0x1c) * 0x90;
    if (lVar12 != lVar9) {
      lVar13 = lVar13 + param_3 * 1000000000;
      do {
        lVar2 = *(long *)(lVar12 + 0x40);
        if (lVar13 <= *(long *)(lVar12 + 0x40)) {
          lVar2 = lVar13;
        }
        *(long *)(lVar12 + 0x40) = lVar2;
        lVar12 = lVar12 + 0x90;
        if (lVar12 - lVar11 == 0xfc0) {
          plVar7 = plVar7 + 1;
          lVar11 = *plVar7;
          lVar12 = lVar11;
        }
      } while (lVar12 != lVar9);
    }
  }
  if (param_2 != (long *)0x0) {
    FUN_004eb968(param_1 + 0x18,*(undefined8 *)(param_1 + 0x10),&local_190);
    param_2 = local_190;
LAB_004eb6b8:
    local_190 = (long *)0x0;
    if (param_2 != (long *)0x0) {
      (**(code **)(*param_2 + 8))(param_2);
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004eb7cc  FUN_004eb7cc =====

void FUN_004eb7cc(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [264];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar3 = *(ulong *)(param_1 + 0x38);
    do {
      puVar4 = (undefined8 *)
               (*(long *)(*(long *)(param_1 + 0x20) + (uVar3 / 0x1c) * 8) + (uVar3 % 0x1c) * 0x90);
      lVar2 = (**(code **)(*(long *)*puVar4 + 0x10))();
      if (lVar2 <= (long)puVar4[8]) break;
      FUN_004f0510(auStack_188,1,
                   "../../discord_common/native/third_party/libdave/cpp/src/decryptor.cpp",0xed);
                    /* try { // try from 004eb890 to 004eb89f has its CatchHandler @ 004eb940 */
      FUN_00428964(auStack_170,"Removing expired cryptor manager.",0x21);
      FUN_004f0604(auStack_188);
      FUN_004ecd44(*(long *)(*(long *)(param_1 + 0x20) + (*(ulong *)(param_1 + 0x38) / 0x1c) * 8) +
                   (*(ulong *)(param_1 + 0x38) % 0x1c) * 0x90);
      lVar2 = *(long *)(param_1 + 0x40) + -1;
      uVar3 = *(long *)(param_1 + 0x38) + 1;
      *(ulong *)(param_1 + 0x38) = uVar3;
      *(long *)(param_1 + 0x40) = lVar2;
      if (0x37 < uVar3) {
        operator_delete((void *)**(undefined8 **)(param_1 + 0x20));
        lVar2 = *(long *)(param_1 + 0x40);
        uVar3 = *(long *)(param_1 + 0x38) - 0x1c;
        *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 8;
        *(ulong *)(param_1 + 0x38) = uVar3;
      }
    } while (lVar2 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004eb968  FUN_004eb968 =====

long FUN_004eb968(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x10);
  lVar4 = 0;
  if (lVar5 != lVar6) {
    lVar4 = (lVar5 - lVar6 >> 3) * 0x1c + -1;
  }
  if (lVar4 == *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) {
    FUN_004ecfe4(param_1);
    lVar6 = *(long *)(param_1 + 8);
    lVar5 = *(long *)(param_1 + 0x10);
  }
  if (lVar5 != lVar6) {
    uVar1 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
    lVar4 = *(long *)(lVar6 + (uVar1 / 0x1c) * 8);
    if (lVar4 != 0) {
      uVar3 = *param_3;
      *param_3 = 0;
      FUN_004e8d90(lVar4 + (uVar1 % 0x1c) * 0x90,param_2,uVar3);
      lVar4 = *(long *)(param_1 + 0x28) + 1;
      uVar1 = *(long *)(param_1 + 0x20) + lVar4;
      *(long *)(param_1 + 0x28) = lVar4;
      plVar2 = (long *)(*(long *)(param_1 + 8) + (uVar1 / 0x1c) * 8);
      lVar6 = *plVar2;
      lVar4 = 0;
      if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
        lVar4 = lVar6 + (uVar1 % 0x1c) * 0x90;
      }
      if (lVar4 == lVar6) {
        lVar4 = plVar2[-1] + 0xfc0;
      }
      return lVar4 + -0x90;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h",
             0x23,"__location != nullptr","null pointer given to construct_at");
}


// ===== 004ebaa8  FUN_004ebaa8 =====

void FUN_004ebaa8(long param_1,uint param_2,long param_3)

{
  long lVar1;
  
  if ((param_2 & 1) == 0) {
    lVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
    lVar1 = lVar1 + param_3 * 1000000000;
    if (*(long *)(param_1 + 0x88) <= lVar1) {
      lVar1 = *(long *)(param_1 + 0x88);
    }
  }
  else {
    lVar1 = 0x7fffffffffffffff;
  }
  *(long *)(param_1 + 0x88) = lVar1;
  return;
}


// ===== 004ebb00  FUN_004ebb00 =====

int FUN_004ebb00(long param_1,ulong param_2,short *param_3,size_t param_4,short *param_5,
                size_t param_6,size_t *param_7)

{
  ulong uVar1;
  uint uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined *puVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  char *local_1b8;
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [264];
  long local_90;
  char **ppcStack_88;
  code *local_80;
  undefined *local_78;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  uVar2 = (uint)param_2 & 0xff;
  if (1 < uVar2) {
    FUN_004f0510(auStack_1b0,2,
                 "../../discord_common/native/third_party/libdave/cpp/src/decryptor.cpp",0x49);
                    /* try { // try from 004ebb5c to 004ebb6f has its CatchHandler @ 004ec1fc */
    FUN_00428964(auStack_198,"Decrypt failed, invalid media type: ",0x24);
                    /* try { // try from 004ebb70 to 004ebb7b has its CatchHandler @ 004ec1f8 */
    FUN_0054bae0(auStack_198,uVar2);
    FUN_004f0604(auStack_1b0);
    iVar7 = 1;
    *param_7 = 0;
    goto LAB_004ec178;
  }
  lVar8 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  local_1b8 = (char *)FUN_004ec260(param_1);
  ppcStack_88 = &local_1b8;
  local_80 = FUN_004eda40;
  local_78 = &DAT_001f73a8;
  local_90 = param_1;
  if ((((param_2 & 0xff) == 0) && (param_4 == 3)) && (*param_3 == -8 && (char)param_3[1] == -2)) {
                    /* try { // try from 004ebce0 to 004ebcfb has its CatchHandler @ 004ec1d4 */
    FUN_004f0510(auStack_1b0,0,
                 "../../discord_common/native/third_party/libdave/cpp/src/decryptor.cpp",0x58);
                    /* try { // try from 004ebd00 to 004ebd13 has its CatchHandler @ 004ec1cc */
    FUN_00428964(auStack_198,"Decrypt skipping silence of size: ",0x22);
                    /* try { // try from 004ebd14 to 004ebd1f has its CatchHandler @ 004ec1c8 */
    FUN_0054c088(auStack_198,3);
    FUN_004f0604(auStack_1b0);
    if (2 < param_6) {
      param_6 = 3;
    }
    if (param_3 == param_5) {
      iVar7 = 0;
    }
    else {
      memcpy(param_5,param_3,param_6);
      iVar7 = 0;
    }
  }
  else {
                    /* try { // try from 004ebc08 to 004ebc1f has its CatchHandler @ 004ec220 */
    FUN_004eb7cc(param_1);
    FUN_004ef6f8(local_1b8,param_3,param_4);
    lVar10 = param_1 + 0x98;
    lVar12 = *(long *)(param_1 + 0x88);
    uVar15 = param_2 & 0xff;
    if ((lVar8 < lVar12) && (*local_1b8 == '\0')) {
      plVar14 = (long *)(lVar10 + uVar15 * 0x38);
      if (param_6 <= param_4) {
        param_4 = param_6;
      }
      if (param_3 != param_5) {
        memcpy(param_5,param_3,param_4);
      }
      iVar7 = 0;
      *plVar14 = *plVar14 + 1;
      param_6 = param_4;
    }
    else {
      if (*local_1b8 != '\0') {
        uVar1 = *(long *)(param_1 + 0x38) + *(long *)(param_1 + 0x40);
        lVar9 = *(long *)(param_1 + 0x20);
        lVar13 = *(long *)(param_1 + 0x28);
        plVar14 = (long *)(lVar9 + (uVar1 / 0x1c) * 8);
        if (lVar13 == lVar9) {
          lVar16 = 0;
        }
        else {
          lVar16 = *plVar14 + (uVar1 % 0x1c) * 0x90;
        }
        iVar7 = 2;
        do {
          if (lVar13 == lVar9) {
            if (lVar16 == 0) goto LAB_004ebe58;
          }
          else if (lVar16 == *(long *)(lVar9 + (*(ulong *)(param_1 + 0x38) / 0x1c) * 8) +
                             (*(ulong *)(param_1 + 0x38) % 0x1c) * 0x90) {
LAB_004ebe58:
            lVar9 = lVar10 + uVar15 * 0x38;
            *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
                    /* try { // try from 004ebe78 to 004ebe93 has its CatchHandler @ 004ec1b8 */
            FUN_004f0510(auStack_1b0,2,
                         "../../discord_common/native/third_party/libdave/cpp/src/decryptor.cpp",
                         0x90);
                    /* try { // try from 004ebe98 to 004ebeeb has its CatchHandler @ 004ec1f0 */
            FUN_00428964(auStack_198,"Decrypt failed, no valid cryptor found, type: ",0x2e);
            pcVar4 = "audio";
            if ((param_2 & 0xff) != 0) {
              pcVar4 = "video";
            }
            FUN_00428964(auStack_198,pcVar4,5);
            FUN_00428964(auStack_198,", encrypted frame size: ",0x18);
                    /* try { // try from 004ebeec to 004ebf0f has its CatchHandler @ 004ec1e8 */
            FUN_0054c088(auStack_198,param_4);
            FUN_00428964(auStack_198,", plaintext frame size: ",0x18);
                    /* try { // try from 004ebf10 to 004ebf2f has its CatchHandler @ 004ec1e4 */
            FUN_0054c088(auStack_198,param_6);
            FUN_00428964(auStack_198,", number of cryptor managers: ",0x1e);
                    /* try { // try from 004ebf34 to 004ebf4f has its CatchHandler @ 004ec1e0 */
            FUN_0054c088(auStack_198,*(undefined8 *)(param_1 + 0x40));
            FUN_00428964(auStack_198,", pass through enabled: ",0x18);
            puVar5 = &UNK_001d3110;
            if (lVar8 < lVar12) {
              puVar5 = &DAT_001b37c4;
            }
            uVar3 = 2;
            if (lVar8 < lVar12) {
              uVar3 = 3;
            }
                    /* try { // try from 004ebf74 to 004ebf7b has its CatchHandler @ 004ec1b4 */
            FUN_00428964(auStack_198,puVar5,uVar3);
            FUN_004f0604(auStack_1b0);
            if (iVar7 == 2) {
              plVar14 = (long *)(lVar10 + uVar15 * 0x38 + 0x28);
            }
            else {
              if (iVar7 != 3) {
                param_6 = 0;
                goto LAB_004ec018;
              }
              plVar14 = (long *)(lVar10 + uVar15 * 0x38 + 0x30);
            }
            param_6 = 0;
            *plVar14 = *plVar14 + 1;
            goto LAB_004ec018;
          }
          lVar9 = lVar16;
          if (lVar16 == *plVar14) {
            lVar9 = plVar14[-1] + 0xfc0;
          }
                    /* try { // try from 004ebe2c to 004ebe37 has its CatchHandler @ 004ec228 */
          iVar7 = FUN_004ec39c(param_1,lVar9 + -0x90,param_2 & 0xffffffff,local_1b8);
          if (iVar7 == 0) goto LAB_004ebfa8;
          if (lVar16 == *plVar14) {
            plVar14 = plVar14 + -1;
            lVar16 = *plVar14 + 0xfc0;
          }
          lVar9 = *(long *)(param_1 + 0x20);
          lVar13 = *(long *)(param_1 + 0x28);
          lVar16 = lVar16 + -0x90;
        } while( true );
      }
                    /* try { // try from 004ebd58 to 004ebd73 has its CatchHandler @ 004ec1c0 */
      FUN_004f0510(auStack_1b0,1,
                   "../../discord_common/native/third_party/libdave/cpp/src/decryptor.cpp",0x77);
                    /* try { // try from 004ebd78 to 004ebd87 has its CatchHandler @ 004ec1bc */
      FUN_00428964(auStack_198,"Decrypt failed, frame is not encrypted and pass through is disabled"
                   ,0x43);
      FUN_004f0604(auStack_1b0);
      param_6 = 0;
      iVar7 = 1;
      lVar10 = lVar10 + uVar15 * 0x38;
      *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + 1;
    }
  }
  goto LAB_004ec12c;
LAB_004ebfa8:
  lVar12 = lVar10 + uVar15 * 0x38;
  *(long *)(lVar12 + 8) = *(long *)(lVar12 + 8) + 1;
                    /* try { // try from 004ebfcc to 004ebfd3 has its CatchHandler @ 004ec1ac */
  param_6 = FUN_004efc00(local_1b8,param_5,param_6);
  iVar7 = 0;
LAB_004ec018:
                    /* try { // try from 004ec024 to 004ec027 has its CatchHandler @ 004ec1dc */
  lVar12 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  if (*(long *)(param_1 + 0x90) + 10000000000 < lVar12) {
    *(long *)(param_1 + 0x90) = lVar12;
                    /* try { // try from 004ec04c to 004ec067 has its CatchHandler @ 004ec1b0 */
    FUN_004f0510(auStack_1b0,1,
                 "../../discord_common/native/third_party/libdave/cpp/src/decryptor.cpp",0xa2);
                    /* try { // try from 004ec06c to 004ec0eb has its CatchHandler @ 004ec210 */
    FUN_00428964(auStack_198,"Decrypted audio: ",0x11);
    FUN_0054c088(auStack_198,*(undefined8 *)(param_1 + 0xa0));
    FUN_00428964(auStack_198,", video: ",9);
    FUN_0054c088(auStack_198,*(undefined8 *)(param_1 + 0xd8));
    FUN_00428964(auStack_198,". Failed audio: ",0x10);
    FUN_0054c088(auStack_198,*(undefined8 *)(param_1 + 0xa8));
    FUN_00428964(auStack_198,", video: ",9);
    FUN_0054c088(auStack_198,*(undefined8 *)(param_1 + 0xe0));
    FUN_004f0604(auStack_1b0);
  }
  lVar10 = lVar10 + uVar15 * 0x38;
  *(long *)(lVar10 + 0x18) = *(long *)(lVar10 + 0x18) + (lVar12 - lVar8) / 1000;
LAB_004ec12c:
  *param_7 = param_6;
  if (local_78[0x10] == '\0') {
                    /* try { // try from 004ec150 to 004ec157 has its CatchHandler @ 004ec1ec */
    (*local_80)(&local_90);
    pcVar11 = *(code **)(local_78 + 8);
  }
  else {
    pcVar11 = *(code **)(local_78 + 8);
  }
  if (pcVar11 != (code *)0x0) {
                    /* try { // try from 004ec168 to 004ec16b has its CatchHandler @ 004ec1f4 */
    (*pcVar11)(local_90);
  }
  FUN_004ecf68(&local_1b8,0);
LAB_004ec178:
  if (*(long *)(lVar6 + 0x28) == local_70) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ec260  FUN_004ec260 =====

undefined8 * FUN_004ec260(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_005467a4(param_1 + 0x48);
  lVar4 = *(long *)(param_1 + 0x78);
  if (*(long *)(param_1 + 0x70) == lVar4) {
                    /* try { // try from 004ec2d0 to 004ec2d7 has its CatchHandler @ 004ec360 */
    puVar3 = (undefined8 *)operator_new(0x88);
    puVar3[0x10] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    puVar3[0xf] = 0;
    puVar3[0xe] = 0;
  }
  else {
    puVar3 = *(undefined8 **)(lVar4 + -8);
    *(undefined8 *)(lVar4 + -8) = 0;
    if (*(long *)(param_1 + 0x70) == *(long *)(param_1 + 0x78)) {
      if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* try { // try from 004ec338 to 004ec35f has its CatchHandler @ 004ec368 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x623,
                   "!empty()","vector::pop_back called on an empty vector");
      }
      goto LAB_004ec398;
    }
    lVar4 = *(long *)(param_1 + 0x78) + -8;
    FUN_004ecf68(lVar4,0);
    *(long *)(param_1 + 0x78) = lVar4;
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_005467c8(param_1 + 0x48);
    return puVar3;
  }
LAB_004ec398:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ec39c  FUN_004ec39c =====

void FUN_004ec39c(long param_1,undefined8 param_2,byte param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined4 uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 in_x7;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [264];
  undefined8 local_80;
  uint local_78;
  long local_70;
  
  lVar8 = tpidr_el0;
  local_70 = *(long *)(lVar8 + 0x28);
  uVar7 = *(uint *)(param_4 + 0x20);
  local_80 = 0;
  lVar1 = *(long *)(param_4 + 0x40);
  lVar4 = *(long *)(param_4 + 0x48);
  lVar2 = *(long *)(param_4 + 0x58);
  lVar5 = *(long *)(param_4 + 0x60);
  lVar3 = *(long *)(param_4 + 0x70);
  lVar6 = *(long *)(param_4 + 0x78);
  uVar13 = *(undefined8 *)(param_4 + 0x10);
  uVar12 = *(undefined8 *)(param_4 + 0x18);
  local_78 = uVar7;
  uVar9 = FUN_004e9f44(param_2,uVar7 >> 0x18);
  uVar10 = FUN_004e8ea4(param_2,uVar9,uVar7);
  if ((uVar10 & 1) == 0) {
    FUN_004f0510(auStack_1a0,1,
                 "../../discord_common/native/third_party/libdave/cpp/src/decryptor.cpp",0xc5);
                    /* try { // try from 004ec4d0 to 004ec4ef has its CatchHandler @ 004ec5c0 */
    FUN_00428964(auStack_188,"Decrypt failed, cannot process nonce: ",0x26);
    FUN_0054bcd8(auStack_188,uVar7);
    FUN_004f0604(auStack_1a0);
    uVar10 = 3;
  }
  else {
    plVar11 = (long *)FUN_004e8f94(param_2,uVar9);
    if (plVar11 == (long *)0x0) {
      FUN_004f0510(auStack_1a0,1,
                   "../../discord_common/native/third_party/libdave/cpp/src/decryptor.cpp",0xcd);
                    /* try { // try from 004ec520 to 004ec53f has its CatchHandler @ 004ec5bc */
      FUN_00428964(auStack_188,"Decrypt failed, no cryptor found for generation: ",0x31);
      FUN_0054bcd8(auStack_188,uVar9);
      FUN_004f0604(auStack_1a0);
      uVar10 = 4;
    }
    else {
      uVar10 = (**(code **)(*plVar11 + 0x18))
                         (plVar11,lVar3,lVar6 - lVar3,lVar2,lVar5 - lVar2,uVar13,uVar12,in_x7,
                          &local_80,0xc,lVar1,lVar4 - lVar1);
      if (1 < param_3) {
        if (*(long *)(lVar8 + 0x28) == local_70) {
                    /* try { // try from 004ec594 to 004ec5bb has its CatchHandler @ 004ec5ec */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/array",0xda,
                     "__n < _Size","out-of-bounds access in std::array<T, N>");
        }
        goto LAB_004ec5e8;
      }
      param_1 = param_1 + (ulong)param_3 * 0x38;
      *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 1;
      if ((uVar10 & 1) != 0) {
        FUN_004e974c(param_2,uVar9,uVar7);
      }
      uVar10 = (ulong)(((uint)uVar10 ^ 0xffffffff) & 1);
    }
  }
  if (*(long *)(lVar8 + 0x28) == local_70) {
    return;
  }
LAB_004ec5e8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}


// ===== 004ec5f0  FUN_004ec5f0 =====

void FUN_004ec5f0(undefined8 *param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1[3] + 0x10) == '\0') {
                    /* try { // try from 004ec61c to 004ec623 has its CatchHandler @ 004ec644 */
    (*(code *)param_1[2])(param_1);
    pcVar1 = *(code **)(param_1[3] + 8);
  }
  else {
    pcVar1 = *(code **)(param_1[3] + 8);
  }
  if (pcVar1 != (code *)0x0) {
                    /* try { // try from 004ec634 to 004ec637 has its CatchHandler @ 004ec648 */
    (*pcVar1)(*param_1);
  }
  return;
}


// ===== 004ec64c  FUN_004ec64c =====

undefined8 FUN_004ec64c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}


// ===== 004ec654  FUN_004ec654 =====

void FUN_004ec654(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_40 = param_2;
                    /* try { // try from 004ec684 to 004ec68b has its CatchHandler @ 004ec730 */
  FUN_005467a4(param_1 + 0x48);
  puVar1 = *(undefined8 **)(param_1 + 0x78);
  if (puVar1 < *(undefined8 **)(param_1 + 0x80)) {
    if (puVar1 == (undefined8 *)0x0) {
      if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 004ec700 to 004ec727 has its CatchHandler @ 004ec738 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                   ,0x23,"__location != nullptr","null pointer given to construct_at");
      }
      goto LAB_004ec76c;
    }
    local_40 = 0;
    *puVar1 = param_2;
    *(undefined8 **)(param_1 + 0x78) = puVar1 + 1;
  }
  else {
                    /* try { // try from 004ec6b0 to 004ec6b7 has its CatchHandler @ 004ec728 */
    FUN_004ec8c0(param_1 + 0x70,&local_40);
  }
  FUN_005467c8(param_1 + 0x48);
  FUN_004ecf68(&local_40,0);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_004ec76c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ec770  FUN_004ec770 =====

void FUN_004ec770(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(param_1 + 0x70);
  if (pvVar3 != (void *)0x0) {
    pvVar2 = *(void **)(param_1 + 0x78);
    pvVar1 = pvVar3;
    if (pvVar2 != pvVar3) {
      do {
        pvVar2 = (void *)((long)pvVar2 + -8);
        FUN_004ecf68(pvVar2,0);
      } while (pvVar2 != pvVar3);
      pvVar1 = *(void **)(param_1 + 0x70);
    }
    *(void **)(param_1 + 0x78) = pvVar3;
    operator_delete(pvVar1);
  }
  FUN_00546ab0(param_1 + 0x48);
  FUN_004ecba8(param_1 + 0x18);
  return;
}


// ===== 004ec7dc  FUN_004ec7dc =====

void FUN_004ec7dc(void *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)((long)param_1 + 0x70);
  if (pvVar3 != (void *)0x0) {
    pvVar2 = *(void **)((long)param_1 + 0x78);
    pvVar1 = pvVar3;
    if (pvVar2 != pvVar3) {
      do {
        pvVar2 = (void *)((long)pvVar2 + -8);
        FUN_004ecf68(pvVar2,0);
      } while (pvVar2 != pvVar3);
      pvVar1 = *(void **)((long)param_1 + 0x70);
    }
    *(void **)((long)param_1 + 0x78) = pvVar3;
    operator_delete(pvVar1);
  }
  FUN_00546ab0((long)param_1 + 0x48);
  FUN_004ecba8((long)param_1 + 0x18);
  operator_delete(param_1);
  return;
}


// ===== 004ec850  FUN_004ec850 =====

void FUN_004ec850(undefined8 *param_1,long param_2,byte param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_3 < 2) {
    param_2 = param_2 + (ulong)param_3 * 0x38;
    uVar2 = *(undefined8 *)(param_2 + 0x98);
    uVar4 = *(undefined8 *)(param_2 + 0xb0);
    uVar3 = *(undefined8 *)(param_2 + 0xa8);
    uVar6 = *(undefined8 *)(param_2 + 0xc0);
    uVar5 = *(undefined8 *)(param_2 + 0xb8);
    uVar1 = *(undefined8 *)(param_2 + 200);
    param_1[1] = *(undefined8 *)(param_2 + 0xa0);
    *param_1 = uVar2;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
    param_1[5] = uVar6;
    param_1[4] = uVar5;
    param_1[6] = uVar1;
    return;
  }
                    /* try { // try from 004ec894 to 004ec8bb has its CatchHandler @ 004ec8bc */
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/array",0xdf,"__n < _Size",
             "out-of-bounds access in std::array<T, N>");
}


// ===== 004ec8c0  FUN_004ec8c0 =====

void FUN_004ec8c0(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  lVar17 = param_1[1] - *param_1;
  lVar16 = lVar17 >> 3;
  uVar8 = lVar16 + 1;
  if (uVar8 >> 0x3d == 0) {
    uVar7 = param_1[2] - *param_1;
    uVar9 = uVar7 >> 2;
    if (uVar9 <= uVar8) {
      uVar9 = uVar8;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar9 = 0x1fffffffffffffff;
    }
    if (uVar9 != 0) {
      if (uVar9 >> 0x3d != 0) {
        if (*(long *)(lVar3 + 0x28) == lVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_00401ad4();
        }
        goto LAB_004ecb38;
      }
      pvVar4 = operator_new(uVar9 * 8);
      uVar12 = *param_2;
      *param_2 = 0;
      puVar1 = (undefined8 *)*param_1;
      puVar14 = (undefined8 *)param_1[1];
      puVar6 = (undefined8 *)((long)pvVar4 + lVar16 * 8);
      lVar2 = (long)puVar14 - (long)puVar1;
      puVar10 = puVar6 + 1;
      *puVar6 = uVar12;
      puVar15 = puVar14;
      if (lVar2 != 0) {
        uVar8 = lVar2 - 8;
        if ((uVar8 < 0x78) ||
           (((undefined8 *)((long)puVar14 + (-8 - (uVar8 & 0xfffffffffffffff8))) < puVar6 &&
            ((undefined8 *)((long)pvVar4 + (lVar17 - (uVar8 & 0xfffffffffffffff8)) + -8) < puVar14))
           )) {
LAB_004ec9f8:
          do {
            puVar15 = puVar15 + -1;
            uVar12 = *puVar15;
            *puVar15 = 0;
            puVar6 = puVar6 + -1;
            *puVar6 = uVar12;
          } while (puVar15 != puVar1);
        }
        else {
          uVar8 = (uVar8 >> 3) + 1;
          puVar13 = (undefined8 *)((long)pvVar4 + lVar16 * 8 + -0x10);
          uVar11 = uVar8 & 0x3ffffffffffffffc;
          puVar15 = puVar14 + -uVar11;
          puVar6 = puVar6 + -uVar11;
          puVar14 = puVar14 + -2;
          uVar7 = uVar11;
          do {
            uVar20 = puVar14[-1];
            uVar19 = puVar14[-2];
            uVar18 = puVar14[1];
            uVar12 = *puVar14;
            puVar14[-1] = 0;
            puVar14[-2] = 0;
            puVar14[1] = 0;
            *puVar14 = 0;
            puVar14 = puVar14 + -4;
            uVar7 = uVar7 - 4;
            puVar13[-1] = uVar20;
            puVar13[-2] = uVar19;
            puVar13[1] = uVar18;
            *puVar13 = uVar12;
            puVar13 = puVar13 + -4;
          } while (uVar7 != 0);
          if (uVar8 != uVar11) goto LAB_004ec9f8;
        }
        puVar14 = (undefined8 *)param_1[1];
        puVar15 = (undefined8 *)*param_1;
      }
      *param_1 = (ulong)puVar6;
      param_1[1] = (ulong)puVar10;
      param_1[2] = (ulong)((long)pvVar4 + uVar9 * 8);
      puVar6 = puVar14;
      while (puVar14 != puVar15) {
        puVar14 = puVar14 + -1;
        FUN_004ecf68(puVar14,0);
        puVar6 = puVar15;
      }
      if (puVar6 == (undefined8 *)0x0) {
        if (*(long *)(lVar3 + 0x28) == lVar5) {
          return;
        }
      }
      else if (*(long *)(lVar3 + 0x28) == lVar5) {
        operator_delete(puVar6);
        return;
      }
      goto LAB_004ecb38;
    }
  }
  else {
    if (*(long *)(lVar3 + 0x28) != lVar5) goto LAB_004ecb38;
    FUN_004ecb94(param_1);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
                    /* try { // try from 004ecad8 to 004ecaff has its CatchHandler @ 004ecb14 */
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
LAB_004ecb38:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ecb3c  FUN_004ecb3c =====

void FUN_004ecb3c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -8;
    FUN_004ecf68(lVar2 + -8,0);
    lVar2 = param_1[2];
  }
  if ((void *)*param_1 == (void *)0x0) {
    return;
  }
  operator_delete((void *)*param_1);
  return;
}


// ===== 004ecb94  FUN_004ecb94 =====

void FUN_004ecb94(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_004e8250("vector");
}


// ===== 004ecba8  FUN_004ecba8 =====

void FUN_004ecba8(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar6 = puVar4;
  if ((undefined8 *)param_1[2] != puVar4) {
    uVar2 = param_1[4];
    plVar7 = puVar4 + uVar2 / 0x1c;
    lVar3 = *plVar7 + (uVar2 % 0x1c) * 0x90;
    lVar8 = puVar4[(param_1[5] + uVar2) / 0x1c] + ((param_1[5] + uVar2) % 0x1c) * 0x90;
    puVar6 = (undefined8 *)param_1[2];
    if (lVar3 != lVar8) {
      do {
                    /* try { // try from 004ecc44 to 004ecc4b has its CatchHandler @ 004ecd3c */
        FUN_004ecd44(lVar3);
        lVar3 = lVar3 + 0x90;
        if (lVar3 - *plVar7 == 0xfc0) {
          plVar7 = plVar7 + 1;
          lVar3 = *plVar7;
        }
      } while (lVar3 != lVar8);
      puVar4 = (undefined8 *)param_1[1];
      puVar6 = (undefined8 *)param_1[2];
    }
  }
  param_1[5] = 0;
  uVar2 = (long)puVar6 - (long)puVar4;
  while (0x10 < uVar2) {
    operator_delete((void *)*puVar4);
    puVar6 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = puVar4;
    uVar2 = (long)puVar6 - (long)puVar4;
  }
  if (uVar2 >> 3 == 1) {
    uVar1 = 0xe;
  }
  else {
    if (uVar2 >> 3 != 2) goto LAB_004ecccc;
    uVar1 = 0x1c;
  }
  param_1[4] = uVar1;
LAB_004ecccc:
  if (puVar4 != puVar6) {
    do {
      puVar5 = puVar4 + 1;
      operator_delete((void *)*puVar4);
      puVar4 = puVar5;
    } while (puVar5 != puVar6);
    lVar3 = param_1[2];
    if (lVar3 != param_1[1]) {
      param_1[2] = lVar3 + ((param_1[1] - lVar3) + 7U & 0xfffffffffffffff8);
    }
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 004ecd40  FUN_004ecd40 =====

void FUN_004ecd40(void)

{
  return;
}


// ===== 004ecd44  FUN_004ecd44 =====

void FUN_004ecd44(long param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  long *plVar3;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x3f,"__loc != nullptr","null pointer given to destroy_at");
  }
  FUN_004ece08(param_1 + 0x60);
  puVar1 = (undefined8 *)*(void **)(param_1 + 0x20);
  while (puVar1 != (undefined8 *)0x0) {
    plVar3 = (long *)puVar1[3];
    puVar1[3] = 0;
    pvVar2 = (void *)*puVar1;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    operator_delete(puVar1);
    puVar1 = (undefined8 *)pvVar2;
  }
  pvVar2 = *(void **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  plVar3 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004ecd9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 8))();
  return;
}


// ===== 004ece08  FUN_004ece08 =====

void FUN_004ece08(undefined8 *param_1)

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
                    /* try { // try from 004ecf3c to 004ecf63 has its CatchHandler @ 004ecf64 */
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
    if (uVar2 >> 3 != 2) goto LAB_004ecedc;
    uVar3 = 0x200;
  }
  param_1[4] = uVar3;
LAB_004ecedc:
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


// ===== 004ecf68  FUN_004ecf68 =====

void FUN_004ecf68(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar2 = (void *)*param_1;
  *param_1 = param_2;
  if (pvVar2 != (void *)0x0) {
    pvVar1 = *(void **)((long)pvVar2 + 0x70);
    if (pvVar1 != (void *)0x0) {
      *(void **)((long)pvVar2 + 0x78) = pvVar1;
      operator_delete(pvVar1);
    }
    pvVar1 = *(void **)((long)pvVar2 + 0x58);
    if (pvVar1 != (void *)0x0) {
      *(void **)((long)pvVar2 + 0x60) = pvVar1;
      operator_delete(pvVar1);
    }
    pvVar1 = *(void **)((long)pvVar2 + 0x40);
    if (pvVar1 != (void *)0x0) {
      *(void **)((long)pvVar2 + 0x48) = pvVar1;
      operator_delete(pvVar1);
    }
    pvVar1 = *(void **)((long)pvVar2 + 0x28);
    if (pvVar1 != (void *)0x0) {
      *(void **)((long)pvVar2 + 0x30) = pvVar1;
      operator_delete(pvVar1);
    }
    operator_delete(pvVar2);
    return;
  }
  return;
}


// ===== 004ecfdc  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 004ecfe0  thunk_FUN_005183d8 =====

long thunk_FUN_005183d8(void)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  timespec tStack_38;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  iVar2 = clock_gettime(1,&tStack_38);
  if (iVar2 == 0) {
    if (*(long *)(lVar1 + 0x28) == lStack_28) {
      return tStack_38.tv_nsec + tStack_38.tv_sec * 1000000000;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lStack_28) {
    puVar3 = (undefined4 *)__errno();
                    /* WARNING: Subroutine does not return */
    FUN_0054a0b0(*puVar3,"clock_gettime(CLOCK_MONOTONIC) failed");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ecfe4  FUN_004ecfe4 =====

void FUN_004ecfe4(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  void *local_68;
  void *local_60;
  void *pvStack_58;
  void *local_50;
  void *pvStack_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((ulong)param_1[4] < 0x1c) {
    plVar3 = param_1 + 3;
    lVar4 = *plVar3;
    lVar6 = lVar4 - *param_1;
    uVar7 = param_1[2] - param_1[1] >> 3;
    if (uVar7 < (ulong)(lVar6 >> 3)) {
      if (lVar4 == param_1[2]) {
        local_60 = operator_new(0xfc0);
        FUN_004ed560(param_1,&local_60);
        local_60 = *(void **)param_1[1];
        param_1[1] = (long)((undefined8 *)param_1[1] + 1);
        goto LAB_004ed028;
      }
      local_60 = operator_new(0xfc0);
      FUN_004ed3b0(param_1,&local_60);
    }
    else {
      uVar5 = lVar6 >> 2;
      if (lVar4 == *param_1) {
        uVar5 = 1;
      }
      local_40 = plVar3;
      if (uVar5 >> 0x3d != 0) {
        if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00401ad4();
        }
        goto LAB_004ed1fc;
      }
      local_60 = operator_new(uVar5 * 8);
      pvStack_58 = (void *)((long)local_60 + uVar7 * 8);
      pvStack_48 = (void *)((long)local_60 + uVar5 * 8);
      local_50 = pvStack_58;
                    /* try { // try from 004ed0b4 to 004ed0bb has its CatchHandler @ 004ed1b0 */
      local_68 = operator_new(0xfc0);
                    /* try { // try from 004ed0c4 to 004ed0cf has its CatchHandler @ 004ed1a0 */
      FUN_004ed6f8(&local_60,&local_68);
      lVar6 = param_1[2];
      lVar4 = -7 - lVar6;
      while (lVar6 != param_1[1]) {
        lVar6 = lVar6 + -8;
        lVar4 = lVar4 + 8;
                    /* try { // try from 004ed0f0 to 004ed0fb has its CatchHandler @ 004ed1b4 */
        FUN_004ed8a8(&local_60,lVar6);
      }
      lVar9 = param_1[3];
      lVar8 = param_1[2];
      pvVar2 = (void *)*param_1;
      param_1[1] = (long)pvStack_58;
      *param_1 = (long)local_60;
      param_1[3] = (long)pvStack_48;
      param_1[2] = (long)local_50;
      local_50 = (void *)lVar8;
      if (lVar6 != lVar8) {
        local_50 = (void *)(lVar8 + (-(lVar8 + lVar4) & 0xfffffffffffffff8U));
      }
      local_60 = pvVar2;
      pvStack_58 = (void *)lVar6;
      pvStack_48 = (void *)lVar9;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
      }
    }
  }
  else {
    param_1[4] = param_1[4] - 0x1c;
    local_60 = *(void **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
LAB_004ed028:
    FUN_004ed200(param_1,&local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_004ed1fc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ed200  FUN_004ed200 =====

void FUN_004ed200(undefined8 *param_1,undefined8 *param_2)

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
  if (puVar11 != (undefined8 *)param_1[3]) goto LAB_004ed354;
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
    goto LAB_004ed354;
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
      if (uVar3 == uVar9) goto LAB_004ed33c;
    }
    do {
      puVar10 = puVar8 + 1;
      *puVar8 = *__src;
      puVar8 = puVar10;
      __src = __src + 1;
    } while (puVar10 != puVar11);
  }
LAB_004ed33c:
  *param_1 = pvVar5;
  param_1[1] = puVar1;
  param_1[2] = puVar11;
  param_1[3] = (void *)((long)pvVar5 + uVar7 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2);
    puVar11 = (undefined8 *)param_1[2];
  }
LAB_004ed354:
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


// ===== 004ed3b0  FUN_004ed3b0 =====

void FUN_004ed3b0(undefined8 *param_1,undefined8 *param_2)

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
  if (puVar11 != (undefined8 *)param_1[3]) goto LAB_004ed504;
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
    goto LAB_004ed504;
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
      if (uVar3 == uVar9) goto LAB_004ed4ec;
    }
    do {
      puVar10 = puVar8 + 1;
      *puVar8 = *__src;
      puVar8 = puVar10;
      __src = __src + 1;
    } while (puVar10 != puVar11);
  }
LAB_004ed4ec:
  *param_1 = pvVar5;
  param_1[1] = puVar1;
  param_1[2] = puVar11;
  param_1[3] = (void *)((long)pvVar5 + uVar7 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2);
    puVar11 = (undefined8 *)param_1[2];
  }
LAB_004ed504:
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


// ===== 004ed560  FUN_004ed560 =====

void FUN_004ed560(long *param_1,undefined8 *param_2)

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
  if (__src != (undefined8 *)*param_1) goto LAB_004ed6c8;
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
    goto LAB_004ed6c8;
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
      if (uVar2 == uVar10) goto LAB_004ed6b0;
    }
    do {
      puVar8 = puVar7 + 1;
      *puVar7 = *puVar9;
      puVar7 = puVar8;
      puVar9 = puVar9 + 1;
    } while (puVar8 != puVar6);
  }
LAB_004ed6b0:
  *param_1 = (long)pvVar3;
  param_1[1] = (long)__dest;
  param_1[2] = (long)puVar6;
  param_1[3] = (long)((long)pvVar3 + uVar5 * 8);
  if (__src != (undefined8 *)0x0) {
    operator_delete(__src);
    __dest = (undefined8 *)param_1[1];
  }
LAB_004ed6c8:
  __dest[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}


// ===== 004ed6f8  FUN_004ed6f8 =====

void FUN_004ed6f8(undefined8 *param_1,undefined8 *param_2)

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
  if (puVar11 != (undefined8 *)param_1[3]) goto LAB_004ed84c;
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
    goto LAB_004ed84c;
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
      if (uVar3 == uVar9) goto LAB_004ed834;
    }
    do {
      puVar10 = puVar8 + 1;
      *puVar8 = *__src;
      puVar8 = puVar10;
      __src = __src + 1;
    } while (puVar10 != puVar11);
  }
LAB_004ed834:
  *param_1 = pvVar5;
  param_1[1] = puVar1;
  param_1[2] = puVar11;
  param_1[3] = (void *)((long)pvVar5 + uVar7 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2);
    puVar11 = (undefined8 *)param_1[2];
  }
LAB_004ed84c:
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


// ===== 004ed8a8  FUN_004ed8a8 =====

void FUN_004ed8a8(long *param_1,undefined8 *param_2)

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
  if (__src != (undefined8 *)*param_1) goto LAB_004eda10;
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
    goto LAB_004eda10;
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
      if (uVar2 == uVar10) goto LAB_004ed9f8;
    }
    do {
      puVar8 = puVar7 + 1;
      *puVar7 = *puVar9;
      puVar7 = puVar8;
      puVar9 = puVar9 + 1;
    } while (puVar8 != puVar6);
  }
LAB_004ed9f8:
  *param_1 = (long)pvVar3;
  param_1[1] = (long)__dest;
  param_1[2] = (long)puVar6;
  param_1[3] = (long)((long)pvVar3 + uVar5 * 8);
  if (__src != (undefined8 *)0x0) {
    operator_delete(__src);
    __dest = (undefined8 *)param_1[1];
  }
LAB_004eda10:
  __dest[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}


// ===== 004eda40  FUN_004eda40 =====

void FUN_004eda40(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = *(undefined8 *)param_1[1];
  *(undefined8 *)param_1[1] = 0;
  FUN_004ec654(uVar1,uVar2);
  return;
}


// ===== 004eda50  FUN_004eda50 =====

undefined8 * FUN_004eda50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x150);
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
  puVar1[0x29] = 0;
  puVar1[0x28] = 0;
                    /* try { // try from 004eda98 to 004eda9b has its CatchHandler @ 004edaac */
  FUN_004ef004();
  return puVar1;
}


// ===== 004edac0  FUN_004edac0 =====

void FUN_004edac0(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
                    /* try { // try from 004edadc to 004edae3 has its CatchHandler @ 004edb50 */
  FUN_005467a4(param_1 + 0xc);
  plVar4 = *(long **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_2;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = *(long **)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (plVar4 != (long *)0x0) {
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
    }
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  FUN_005467c8(param_1 + 0xc);
  return;
}


// ===== 004edb70  FUN_004edb70 =====

void FUN_004edb70(long param_1)

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


// ===== 004edbc8  FUN_004edbc8 =====

void FUN_004edbc8(long param_1,uint param_2)

{
  short sVar1;
  
  *(uint *)(param_1 + 8) = param_2;
  if ((param_2 & 1) == 0) {
    sVar1 = FUN_0050dfb0();
  }
  else {
    sVar1 = 0;
  }
  if (*(short *)(param_1 + 0x148) != sVar1) {
    *(short *)(param_1 + 0x148) = sVar1;
    if (*(char *)(*(long *)(param_1 + 0x140) + 0x10) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x004edc28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x138))(param_1 + 0x128);
      return;
    }
  }
  return;
}


// ===== 004edc2c  FUN_004edc2c =====

int FUN_004edc2c(long param_1,byte param_2,int param_3,void *param_4,size_t param_5,void *param_6,
                ulong param_7,size_t *param_8)

{
  bool bVar1;
  long *plVar2;
  undefined1 *puVar3;
  long *plVar4;
  char *pcVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  char cVar9;
  bool bVar10;
  long lVar11;
  undefined4 uVar12;
  byte bVar13;
  byte bVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  long lVar22;
  long lVar23;
  code *pcVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  undefined1 uVar29;
  ulong uVar30;
  int iVar31;
  int iVar32;
  ulong uVar33;
  long lVar34;
  long local_1c8;
  long *local_1c0;
  long *local_1b8;
  undefined4 local_1b0;
  undefined1 auStack_1a8 [264];
  undefined8 local_a0;
  undefined4 local_98;
  long local_90;
  long *plStack_88;
  code *local_80;
  undefined *local_78;
  long local_70;
  
  lVar11 = tpidr_el0;
  local_70 = *(long *)(lVar11 + 0x28);
  if (1 < param_2) {
    FUN_004f0510(&local_1c0,2,
                 "../../discord_common/native/third_party/libdave/cpp/src/encryptor.cpp",0x32);
                    /* try { // try from 004edc88 to 004edc9b has its CatchHandler @ 004ee290 */
    FUN_00428964(auStack_1a8,"Encrypt failed, invalid media type: ",0x24);
                    /* try { // try from 004edc9c to 004edca7 has its CatchHandler @ 004ee28c */
    FUN_0054bae0(auStack_1a8,param_2);
    FUN_004f0604(&local_1c0);
    iVar31 = 1;
    goto LAB_004ee234;
  }
  lVar23 = param_1 + 0xb8;
  uVar33 = (ulong)param_2;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    if (param_7 <= param_5) {
      param_5 = param_7;
    }
    memcpy(param_6,param_4,param_5);
    *param_8 = param_5;
    iVar31 = 0;
    *(long *)(lVar23 + uVar33 * 0x38) = *(long *)(lVar23 + uVar33 * 0x38) + 1;
    goto LAB_004ee234;
  }
  lVar15 = param_1 + 0xc;
  FUN_005467a4(lVar15);
  if (*(long *)(param_1 + 0x38) == 0) {
    lVar23 = lVar23 + uVar33 * 0x38;
    *(long *)(lVar23 + 0x10) = *(long *)(lVar23 + 0x10) + 1;
    *(long *)(lVar23 + 0x30) = *(long *)(lVar23 + 0x30) + 1;
    FUN_005467c8(lVar15);
    iVar31 = 2;
    goto LAB_004ee234;
  }
  FUN_005467c8(lVar15);
  lVar15 = FUN_005183d8();
  piVar21 = *(int **)(param_1 + 0x98);
  piVar7 = *(int **)(param_1 + 0xa0);
  if (piVar21 == piVar7) {
LAB_004edd68:
    if (piVar21 == piVar7) goto LAB_004edda8;
    uVar29 = (undefined1)piVar21[1];
  }
  else {
    do {
      if (*piVar21 == param_3) goto LAB_004edd68;
      piVar21 = piVar21 + 2;
    } while (piVar21 != piVar7);
LAB_004edda8:
    uVar29 = 0;
  }
  local_1c8 = FUN_004ee348(param_1);
  plStack_88 = &local_1c8;
  local_80 = FUN_004ef18c;
  local_78 = &DAT_001f73c8;
  local_90 = param_1;
                    /* try { // try from 004eddd4 to 004edde7 has its CatchHandler @ 004ee280 */
  FUN_004efeb4(local_1c8,param_4,param_5,uVar29);
  lVar27 = local_1c8;
  lVar20 = local_1c8 + 0x58;
                    /* try { // try from 004ede00 to 004ede07 has its CatchHandler @ 004ee27c */
  bVar13 = FUN_004ef1dc();
  lVar28 = *(long *)(lVar27 + 0x28);
  lVar6 = *(long *)(lVar27 + 0x40);
  lVar8 = *(long *)(lVar27 + 0x48);
  uVar30 = 1;
  lVar34 = *(long *)(lVar27 + 0x30) - lVar28;
  local_98 = 0;
  local_a0 = 0;
  lVar22 = lVar23 + uVar33 * 0x38;
  lVar27 = (long)param_6 + lVar34 + (*(long *)(lVar27 + 0x18) - *(long *)(lVar27 + 0x10)) + 8;
  uVar25 = (ulong)bVar13;
  iVar32 = 0;
  do {
                    /* try { // try from 004ede78 to 004ede83 has its CatchHandler @ 004ee2d0 */
    FUN_004ee480(&local_1c0,param_1);
    uVar12 = local_1b0;
    if (local_1c0 == (long *)0x0) {
      bVar1 = true;
      *(long *)(lVar22 + 0x30) = *(long *)(lVar22 + 0x30) + 1;
      iVar31 = 3;
    }
    else {
      local_98 = local_1b0;
                    /* try { // try from 004ede9c to 004edec7 has its CatchHandler @ 004ee2c0 */
      uVar16 = (**(code **)(*local_1c0 + 0x10))
                         (local_1c0,lVar6,lVar8 - lVar6,lVar28,lVar34,&local_a0,0xc);
      uVar26 = *(ulong *)(lVar22 + 0x28);
      if (uVar26 <= uVar30) {
        uVar26 = uVar30;
      }
      *(long *)(lVar22 + 0x20) = *(long *)(lVar22 + 0x20) + 1;
      *(ulong *)(lVar22 + 0x28) = uVar26;
      if ((uVar16 & 1) != 0) {
                    /* try { // try from 004edef0 to 004edef7 has its CatchHandler @ 004ee2b4 */
        lVar17 = FUN_004f017c(local_1c8,param_6,param_7);
                    /* try { // try from 004edef8 to 004edf03 has its CatchHandler @ 004ee2b8 */
        lVar18 = FUN_0050decc(uVar12);
                    /* try { // try from 004edf04 to 004edf2f has its CatchHandler @ 004ee2bc */
        lVar19 = FUN_0050df74(uVar12,lVar27);
        if (lVar19 == lVar18) {
          lVar19 = lVar27 + lVar18;
          bVar14 = FUN_004ef240(lVar20,lVar19,uVar25);
          if ((bVar14 == bVar13) && (uVar26 = lVar18 + uVar25 + 0xb, uVar26 < 0x100)) {
            puVar3 = (undefined1 *)(lVar19 + uVar25);
            *puVar3 = (char)uVar26;
            *(undefined2 *)(puVar3 + 1) = 0xfafa;
                    /* try { // try from 004edfd8 to 004edfe3 has its CatchHandler @ 004ee284 */
            uVar16 = FUN_004e8bdc(local_1c8,param_6,uVar26 + lVar17);
            if ((uVar16 & 1) == 0) {
              bVar1 = 9 < uVar30;
              iVar31 = 4;
              if (uVar30 < 10) {
                iVar31 = iVar32;
              }
            }
            else {
              bVar1 = true;
              *param_8 = uVar26 + lVar17;
              iVar31 = iVar32;
            }
            goto LAB_004edf74;
          }
        }
      }
      bVar1 = true;
      iVar31 = 1;
    }
LAB_004edf74:
    plVar4 = local_1b8;
    if (local_1b8 != (long *)0x0) {
      plVar2 = local_1b8 + 1;
      do {
        lVar17 = *plVar2;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar10) {
          *plVar2 = lVar17 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*local_1b8 + 0x10))(local_1b8);
        FUN_005466cc(plVar4);
      }
    }
  } while ((!bVar1) && (uVar30 = uVar30 + 1, iVar32 = iVar31, uVar30 != 0xb));
  lVar20 = FUN_005183d8();
  lVar23 = lVar23 + uVar33 * 0x38;
  plVar4 = (long *)(lVar23 + 8);
  if (iVar31 != 0) {
    plVar4 = (long *)(lVar23 + 0x10);
  }
  lVar28 = *plVar4;
  lVar27 = *(long *)(param_1 + 0xb0);
  *(long *)(lVar23 + 0x18) = (lVar20 - lVar15) / 1000 + *(long *)(lVar23 + 0x18);
  *plVar4 = lVar28 + 1;
  if (lVar27 + 10000000000 < lVar20) {
    *(long *)(param_1 + 0xb0) = lVar20;
                    /* try { // try from 004ee09c to 004ee0b7 has its CatchHandler @ 004ee274 */
    FUN_004f0510(&local_1c0,1,
                 "../../discord_common/native/third_party/libdave/cpp/src/encryptor.cpp",0xd6);
                    /* try { // try from 004ee0bc to 004ee147 has its CatchHandler @ 004ee2a4 */
    FUN_00428964(auStack_1a8,"Encrypted audio: ",0x11);
    FUN_0054c088(auStack_1a8,*(undefined8 *)(param_1 + 0xc0));
    FUN_00428964(auStack_1a8,", video: ",9);
    FUN_0054c088(auStack_1a8,*(undefined8 *)(param_1 + 0xf8));
    FUN_00428964(auStack_1a8,". Failed audio: ",0x10);
    FUN_0054c088(auStack_1a8,*(undefined8 *)(param_1 + 200));
    FUN_00428964(auStack_1a8,", video: ",9);
    FUN_0054c088(auStack_1a8,*(undefined8 *)(param_1 + 0x100));
    FUN_004f0604(&local_1c0);
                    /* try { // try from 004ee150 to 004ee16b has its CatchHandler @ 004ee270 */
    FUN_004f0510(&local_1c0,1,
                 "../../discord_common/native/third_party/libdave/cpp/src/encryptor.cpp",0xda);
                    /* try { // try from 004ee170 to 004ee1db has its CatchHandler @ 004ee288 */
    FUN_00428964(auStack_1a8,"Last encrypted frame, type: ",0x1c);
    pcVar5 = "audio";
    if (param_2 != 0) {
      pcVar5 = "video";
    }
    FUN_00428964(auStack_1a8,pcVar5,5);
    FUN_00428964(auStack_1a8,", ssrc: ",8);
    FUN_0054bcd8(auStack_1a8,param_3);
    FUN_00428964(auStack_1a8,", size: ",8);
                    /* try { // try from 004ee1dc to 004ee1e7 has its CatchHandler @ 004ee26c */
    FUN_0054c088(auStack_1a8,param_5);
    FUN_004f0604(&local_1c0);
  }
  if (local_78[0x10] == '\0') {
                    /* try { // try from 004ee20c to 004ee213 has its CatchHandler @ 004ee268 */
    (*local_80)(&local_90);
    pcVar24 = *(code **)(local_78 + 8);
  }
  else {
    pcVar24 = *(code **)(local_78 + 8);
  }
  if (pcVar24 != (code *)0x0) {
                    /* try { // try from 004ee224 to 004ee227 has its CatchHandler @ 004ee278 */
    (*pcVar24)(local_90);
  }
  FUN_004ef118(&local_1c8,0);
LAB_004ee234:
  if (*(long *)(lVar11 + 0x28) == local_70) {
    return iVar31;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ee308  FUN_004ee308 =====

undefined1 FUN_004ee308(long param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x98);
  piVar1 = *(int **)(param_1 + 0xa0);
  if (piVar2 == piVar1) {
LAB_004ee330:
    if (piVar2 != piVar1) {
      return (char)piVar2[1];
    }
  }
  else {
    do {
      if (*piVar2 == param_2) goto LAB_004ee330;
      piVar2 = piVar2 + 2;
    } while (piVar2 != piVar1);
  }
  return 0;
}


// ===== 004ee348  FUN_004ee348 =====

undefined8 * FUN_004ee348(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_005467a4(param_1 + 0x58);
  lVar4 = *(long *)(param_1 + 0x88);
  if (*(long *)(param_1 + 0x80) == lVar4) {
                    /* try { // try from 004ee3b8 to 004ee3bf has its CatchHandler @ 004ee444 */
    puVar3 = (undefined8 *)operator_new(0x70);
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
  }
  else {
    puVar3 = *(undefined8 **)(lVar4 + -8);
    *(undefined8 *)(lVar4 + -8) = 0;
    if (*(long *)(param_1 + 0x80) == *(long *)(param_1 + 0x88)) {
      if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* try { // try from 004ee41c to 004ee443 has its CatchHandler @ 004ee44c */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x623,
                   "!empty()","vector::pop_back called on an empty vector");
      }
      goto LAB_004ee47c;
    }
    lVar4 = *(long *)(param_1 + 0x88) + -8;
    FUN_004ef118(lVar4,0);
    *(long *)(param_1 + 0x88) = lVar4;
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_005467c8(param_1 + 0x58);
    return puVar3;
  }
LAB_004ee47c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ee480  FUN_004ee480 =====

void FUN_004ee480(long *param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined1 *local_60;
  undefined1 *local_58;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  FUN_005467a4(param_2 + 0xc);
  if (*(long *)(param_2 + 0x38) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  else {
    uVar1 = *(int *)(param_2 + 0x54) + 1;
    *(uint *)(param_2 + 0x54) = uVar1;
                    /* try { // try from 004ee4d0 to 004ee4d7 has its CatchHandler @ 004ee634 */
    iVar6 = FUN_004e8d78(*(undefined4 *)(param_2 + 0x50),uVar1 >> 0x18);
    if ((iVar6 != *(int *)(param_2 + 0x50)) || (lVar9 = *(long *)(param_2 + 0x40), lVar9 == 0)) {
      *(int *)(param_2 + 0x50) = iVar6;
      (**(code **)(**(long **)(param_2 + 0x38) + 0x10))(&local_60);
                    /* try { // try from 004ee504 to 004ee50b has its CatchHandler @ 004ee624 */
      lVar9 = FUN_004e8d14(&local_60);
      if (lVar9 == 0) {
        puVar7 = (undefined8 *)0x0;
      }
      else {
                    /* try { // try from 004ee514 to 004ee51b has its CatchHandler @ 004ee60c */
        puVar7 = (undefined8 *)operator_new(0x20);
        puVar7[2] = 0;
        puVar7[3] = lVar9;
        *puVar7 = &PTR_FUN_00d1f7a0;
        puVar7[1] = 0;
      }
      plVar12 = *(long **)(param_2 + 0x48);
      *(long *)(param_2 + 0x40) = lVar9;
      *(undefined8 **)(param_2 + 0x48) = puVar7;
      if (plVar12 != (long *)0x0) {
        plVar2 = plVar12 + 1;
        do {
          lVar9 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          FUN_005466cc(plVar12);
        }
      }
      if (0 < (long)local_58 - (long)local_60) {
        uVar10 = ((long)local_58 - (long)local_60) + 1;
        puVar8 = local_60;
        do {
          uVar10 = uVar10 - 1;
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        } while (1 < uVar10);
      }
      if (local_60 != (undefined1 *)0x0) {
        local_58 = local_60;
        operator_delete(local_60);
      }
      lVar9 = *(long *)(param_2 + 0x40);
    }
    lVar11 = *(long *)(param_2 + 0x48);
    *param_1 = lVar9;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      plVar12 = (long *)(lVar11 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *plVar12 = *plVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x54);
  }
  FUN_005467c8(param_2 + 0xc);
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004ee65c  FUN_004ee65c =====

void FUN_004ee65c(long param_1)

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


// ===== 004ee6b4  FUN_004ee6b4 =====

long FUN_004ee6b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 + 0x4b;
}


// ===== 004ee6bc  FUN_004ee6bc =====

void FUN_004ee6bc(long param_1,int param_2,undefined1 param_3)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  undefined1 local_30 [4];
  int local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  piVar3 = *(int **)(param_1 + 0x98);
  piVar1 = *(int **)(param_1 + 0xa0);
  local_30[0] = param_3;
  local_2c = param_2;
  if (piVar3 == piVar1) {
LAB_004ee708:
    if (piVar3 != piVar1) {
      *(undefined1 *)(piVar3 + 1) = param_3;
      goto LAB_004ee724;
    }
  }
  else {
    do {
      if (*piVar3 == param_2) goto LAB_004ee708;
      piVar3 = piVar3 + 2;
    } while (piVar3 != piVar1);
  }
  FUN_004ee748((long *)(param_1 + 0x98),&local_2c,local_30);
LAB_004ee724:
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004ee748  FUN_004ee748 =====

undefined8 * FUN_004ee748(ulong *param_1,undefined4 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar11 = (undefined8 *)param_1[1];
  if (puVar11 < (undefined8 *)param_1[2]) {
    if (puVar11 == (undefined8 *)0x0) {
                    /* try { // try from 004ee8f8 to 004ee91f has its CatchHandler @ 004ee954 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                 ,0x23,"__location != nullptr","null pointer given to construct_at");
    }
    puVar5 = puVar11 + 1;
    uVar1 = *param_3;
    *(undefined4 *)puVar11 = *param_2;
    *(undefined1 *)((long)puVar11 + 4) = uVar1;
    param_1[1] = (ulong)puVar5;
    goto LAB_004ee8a4;
  }
  puVar13 = (undefined8 *)*param_1;
  lVar14 = (long)puVar11 - (long)puVar13 >> 3;
  uVar8 = lVar14 + 1;
  if (uVar8 >> 0x3d != 0) {
    FUN_004eec9c(param_1);
LAB_004ee928:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  uVar4 = (long)param_1[2] - (long)puVar13;
  uVar7 = uVar4 >> 2;
  if (uVar7 <= uVar8) {
    uVar7 = uVar8;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar7 = 0x1fffffffffffffff;
  }
  if (uVar7 == 0) goto LAB_004ee928;
  if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401ad4();
  }
  pvVar3 = operator_new(uVar7 * 8);
  puVar6 = (undefined8 *)((long)pvVar3 + lVar14 * 8);
  uVar1 = *param_3;
  puVar5 = puVar6 + 1;
  *(undefined4 *)puVar6 = *param_2;
  *(undefined1 *)((long)puVar6 + 4) = uVar1;
  if ((long)puVar11 - (long)puVar13 != 0) {
    uVar8 = ((long)puVar11 - (long)puVar13) - 8;
    puVar12 = puVar11;
    if ((0x57 < uVar8) &&
       (0x1f < (ulong)((long)puVar11 + (-(long)pvVar3 - ((long)puVar11 - (long)puVar13))))) {
      uVar8 = (uVar8 >> 3) + 1;
      uVar9 = uVar8 & 0x3ffffffffffffffc;
      puVar12 = puVar11 + -uVar9;
      puVar6 = puVar6 + -uVar9;
      puVar10 = (undefined8 *)((long)pvVar3 + lVar14 * 8 + -0x10);
      puVar11 = puVar11 + -2;
      uVar4 = uVar9;
      do {
        puVar2 = puVar11 + -1;
        uVar17 = puVar11[-2];
        uVar16 = puVar11[1];
        uVar15 = *puVar11;
        puVar11 = puVar11 + -4;
        uVar4 = uVar4 - 4;
        puVar10[-1] = *puVar2;
        puVar10[-2] = uVar17;
        puVar10[1] = uVar16;
        *puVar10 = uVar15;
        puVar10 = puVar10 + -4;
      } while (uVar4 != 0);
      puVar11 = puVar13;
      if (uVar8 == uVar9) goto LAB_004ee88c;
    }
    do {
      puVar12 = puVar12 + -1;
      puVar6 = puVar6 + -1;
      *puVar6 = *puVar12;
      puVar11 = puVar13;
    } while (puVar12 != puVar13);
  }
LAB_004ee88c:
  *param_1 = (ulong)puVar6;
  param_1[1] = (ulong)puVar5;
  param_1[2] = (ulong)((long)pvVar3 + uVar7 * 8);
  if (puVar11 != (undefined8 *)0x0) {
    operator_delete(puVar11);
    puVar5 = (undefined8 *)param_1[1];
  }
LAB_004ee8a4:
  if ((undefined8 *)*param_1 == puVar5) {
                    /* try { // try from 004ee8d0 to 004ee8f7 has its CatchHandler @ 004ee95c */
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,"!empty()"
               ,"back() called on an empty vector");
  }
  return puVar5 + -1;
}


// ===== 004ee960  FUN_004ee960 =====

void FUN_004ee960(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_40 = param_2;
                    /* try { // try from 004ee990 to 004ee997 has its CatchHandler @ 004eea3c */
  FUN_005467a4(param_1 + 0x58);
  puVar1 = *(undefined8 **)(param_1 + 0x88);
  if (puVar1 < *(undefined8 **)(param_1 + 0x90)) {
    if (puVar1 == (undefined8 *)0x0) {
      if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 004eea0c to 004eea33 has its CatchHandler @ 004eea44 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                   ,0x23,"__location != nullptr","null pointer given to construct_at");
      }
      goto LAB_004eea78;
    }
    local_40 = 0;
    *puVar1 = param_2;
    *(undefined8 **)(param_1 + 0x88) = puVar1 + 1;
  }
  else {
                    /* try { // try from 004ee9bc to 004ee9c3 has its CatchHandler @ 004eea34 */
    FUN_004eecb0(param_1 + 0x80,&local_40);
  }
  FUN_005467c8(param_1 + 0x58);
  FUN_004ef118(&local_40,0);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_004eea78:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004eea7c  FUN_004eea7c =====

void FUN_004eea7c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  void *pvVar5;
  code *pcVar6;
  long lVar7;
  void *pvVar8;
  long *plVar9;
  
  pcVar6 = *(code **)(*(long *)(param_1 + 0x140) + 8);
  if (pcVar6 != (code *)0x0) {
                    /* try { // try from 004eeaa0 to 004eeaa3 has its CatchHandler @ 004eeb5c */
    (*pcVar6)(*(undefined8 *)(param_1 + 0x128));
  }
  pvVar4 = *(void **)(param_1 + 0x98);
  if (pvVar4 != (void *)0x0) {
    *(void **)(param_1 + 0xa0) = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(param_1 + 0x80);
  if (pvVar4 != (void *)0x0) {
    pvVar8 = *(void **)(param_1 + 0x88);
    pvVar5 = pvVar4;
    if (pvVar8 != pvVar4) {
      do {
        pvVar8 = (void *)((long)pvVar8 + -8);
        FUN_004ef118(pvVar8,0);
      } while (pvVar8 != pvVar4);
      pvVar5 = *(void **)(param_1 + 0x80);
    }
    *(void **)(param_1 + 0x88) = pvVar4;
    operator_delete(pvVar5);
  }
  FUN_00546ab0(param_1 + 0x58);
  plVar9 = *(long **)(param_1 + 0x48);
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
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
      (**(code **)(*plVar9 + 0x10))(plVar9);
      FUN_005466cc(plVar9);
    }
  }
  plVar9 = *(long **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  FUN_00546ab0(param_1 + 0xc);
  return;
}


// ===== 004eeb60  FUN_004eeb60 =====

void FUN_004eeb60(void *param_1)

{
  FUN_004eea7c();
  operator_delete(param_1);
  return;
}


// ===== 004eeb84  FUN_004eeb84 =====

bool FUN_004eeb84(long param_1)

{
  return *(long *)(param_1 + 0x38) != 0;
}


// ===== 004eeb94  FUN_004eeb94 =====

byte FUN_004eeb94(long param_1)

{
  return *(byte *)(param_1 + 8) & 1;
}


// ===== 004eeba4  FUN_004eeba4 =====

void FUN_004eeba4(undefined8 *param_1,long param_2,byte param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_3 < 2) {
    param_2 = param_2 + (ulong)param_3 * 0x38;
    uVar2 = *(undefined8 *)(param_2 + 0xb8);
    uVar4 = *(undefined8 *)(param_2 + 0xd0);
    uVar3 = *(undefined8 *)(param_2 + 200);
    uVar6 = *(undefined8 *)(param_2 + 0xe0);
    uVar5 = *(undefined8 *)(param_2 + 0xd8);
    uVar1 = *(undefined8 *)(param_2 + 0xe8);
    param_1[1] = *(undefined8 *)(param_2 + 0xc0);
    *param_1 = uVar2;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
    param_1[5] = uVar6;
    param_1[4] = uVar5;
    param_1[6] = uVar1;
    return;
  }
                    /* try { // try from 004eebe8 to 004eec0f has its CatchHandler @ 004eec10 */
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/array",0xdf,"__n < _Size",
             "out-of-bounds access in std::array<T, N>");
}


// ===== 004eec14  FUN_004eec14 =====

void FUN_004eec14(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  *(code **)(param_1 + 0x138) = FUN_0040dec4;
  pcVar1 = *(code **)(*(long *)(param_1 + 0x140) + 8);
  *(undefined8 **)(param_1 + 0x140) = &DAT_001f1910;
  if (pcVar1 != (code *)0x0) {
                    /* try { // try from 004eec5c to 004eec5f has its CatchHandler @ 004eec90 */
    (*pcVar1)(*(undefined8 *)(param_1 + 0x128));
  }
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x130) = param_2[1];
  *(undefined8 *)(param_1 + 0x128) = uVar2;
  *(undefined8 *)(param_1 + 0x138) = param_2[2];
  *(undefined8 *)(param_1 + 0x140) = param_2[3];
  param_2[2] = FUN_0040dec4;
  param_2[3] = &DAT_001f1910;
  return;
}


// ===== 004eec94  FUN_004eec94 =====

undefined2 FUN_004eec94(long param_1)

{
  return *(undefined2 *)(param_1 + 0x148);
}


// ===== 004eec9c  FUN_004eec9c =====

void FUN_004eec9c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_004e8250("vector");
}


// ===== 004eecb0  FUN_004eecb0 =====

void FUN_004eecb0(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  lVar17 = param_1[1] - *param_1;
  lVar16 = lVar17 >> 3;
  uVar8 = lVar16 + 1;
  if (uVar8 >> 0x3d == 0) {
    uVar7 = param_1[2] - *param_1;
    uVar9 = uVar7 >> 2;
    if (uVar9 <= uVar8) {
      uVar9 = uVar8;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar9 = 0x1fffffffffffffff;
    }
    if (uVar9 != 0) {
      if (uVar9 >> 0x3d != 0) {
        if (*(long *)(lVar3 + 0x28) == lVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_00401ad4();
        }
        goto LAB_004eef28;
      }
      pvVar4 = operator_new(uVar9 * 8);
      uVar12 = *param_2;
      *param_2 = 0;
      puVar1 = (undefined8 *)*param_1;
      puVar14 = (undefined8 *)param_1[1];
      puVar6 = (undefined8 *)((long)pvVar4 + lVar16 * 8);
      lVar2 = (long)puVar14 - (long)puVar1;
      puVar10 = puVar6 + 1;
      *puVar6 = uVar12;
      puVar15 = puVar14;
      if (lVar2 != 0) {
        uVar8 = lVar2 - 8;
        if ((uVar8 < 0x78) ||
           (((undefined8 *)((long)puVar14 + (-8 - (uVar8 & 0xfffffffffffffff8))) < puVar6 &&
            ((undefined8 *)((long)pvVar4 + (lVar17 - (uVar8 & 0xfffffffffffffff8)) + -8) < puVar14))
           )) {
LAB_004eede8:
          do {
            puVar15 = puVar15 + -1;
            uVar12 = *puVar15;
            *puVar15 = 0;
            puVar6 = puVar6 + -1;
            *puVar6 = uVar12;
          } while (puVar15 != puVar1);
        }
        else {
          uVar8 = (uVar8 >> 3) + 1;
          puVar13 = (undefined8 *)((long)pvVar4 + lVar16 * 8 + -0x10);
          uVar11 = uVar8 & 0x3ffffffffffffffc;
          puVar15 = puVar14 + -uVar11;
          puVar6 = puVar6 + -uVar11;
          puVar14 = puVar14 + -2;
          uVar7 = uVar11;
          do {
            uVar20 = puVar14[-1];
            uVar19 = puVar14[-2];
            uVar18 = puVar14[1];
            uVar12 = *puVar14;
            puVar14[-1] = 0;
            puVar14[-2] = 0;
            puVar14[1] = 0;
            *puVar14 = 0;
            puVar14 = puVar14 + -4;
            uVar7 = uVar7 - 4;
            puVar13[-1] = uVar20;
            puVar13[-2] = uVar19;
            puVar13[1] = uVar18;
            *puVar13 = uVar12;
            puVar13 = puVar13 + -4;
          } while (uVar7 != 0);
          if (uVar8 != uVar11) goto LAB_004eede8;
        }
        puVar14 = (undefined8 *)param_1[1];
        puVar15 = (undefined8 *)*param_1;
      }
      *param_1 = (ulong)puVar6;
      param_1[1] = (ulong)puVar10;
      param_1[2] = (ulong)((long)pvVar4 + uVar9 * 8);
      puVar6 = puVar14;
      while (puVar14 != puVar15) {
        puVar14 = puVar14 + -1;
        FUN_004ef118(puVar14,0);
        puVar6 = puVar15;
      }
      if (puVar6 == (undefined8 *)0x0) {
        if (*(long *)(lVar3 + 0x28) == lVar5) {
          return;
        }
      }
      else if (*(long *)(lVar3 + 0x28) == lVar5) {
        operator_delete(puVar6);
        return;
      }
      goto LAB_004eef28;
    }
  }
  else {
    if (*(long *)(lVar3 + 0x28) != lVar5) goto LAB_004eef28;
    FUN_004eef84(param_1);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
                    /* try { // try from 004eeec8 to 004eeeef has its CatchHandler @ 004eef04 */
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
LAB_004eef28:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004eef2c  FUN_004eef2c =====

void FUN_004eef2c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -8;
    FUN_004ef118(lVar2 + -8,0);
    lVar2 = param_1[2];
  }
  if ((void *)*param_1 == (void *)0x0) {
    return;
  }
  operator_delete((void *)*param_1);
  return;
}


// ===== 004eef84  FUN_004eef84 =====

void FUN_004eef84(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_004e8250("vector");
}


// ===== 004eef98  FUN_004eef98 =====

void FUN_004eef98(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = (void *)*param_1;
  if (pvVar3 != (void *)0x0) {
    pvVar2 = (void *)param_1[1];
    pvVar1 = pvVar3;
    if (pvVar2 != pvVar3) {
      do {
        pvVar2 = (void *)((long)pvVar2 + -8);
        FUN_004ef118(pvVar2,0);
      } while (pvVar2 != pvVar3);
      pvVar1 = (void *)*param_1;
    }
    param_1[1] = pvVar3;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 004ef004  FUN_004ef004 =====

void FUN_004ef004(undefined8 *param_1)

{
  undefined2 uVar1;
  
  *param_1 = &PTR_FUN_00d1f728;
  param_1[0x15] = 0;
  param_1[0x16] = 0x8000000000000000;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x27] = FUN_0040dec4;
  param_1[0x28] = &DAT_001f1910;
                    /* try { // try from 004ef08c to 004ef08f has its CatchHandler @ 004ef0ac */
  uVar1 = FUN_0050dfb0();
  *(undefined2 *)(param_1 + 0x29) = uVar1;
  return;
}


// ===== 004ef118  FUN_004ef118 =====

void FUN_004ef118(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar2 = (void *)*param_1;
  *param_1 = param_2;
  if (pvVar2 != (void *)0x0) {
    pvVar1 = *(void **)((long)pvVar2 + 0x58);
    if (pvVar1 != (void *)0x0) {
      *(void **)((long)pvVar2 + 0x60) = pvVar1;
      operator_delete(pvVar1);
    }
    pvVar1 = *(void **)((long)pvVar2 + 0x40);
    if (pvVar1 != (void *)0x0) {
      *(void **)((long)pvVar2 + 0x48) = pvVar1;
      operator_delete(pvVar1);
    }
    pvVar1 = *(void **)((long)pvVar2 + 0x28);
    if (pvVar1 != (void *)0x0) {
      *(void **)((long)pvVar2 + 0x30) = pvVar1;
      operator_delete(pvVar1);
    }
    pvVar1 = *(void **)((long)pvVar2 + 0x10);
    if (pvVar1 != (void *)0x0) {
      *(void **)((long)pvVar2 + 0x18) = pvVar1;
      operator_delete(pvVar1);
    }
    operator_delete(pvVar2);
    return;
  }
  return;
}


// ===== 004ef18c  FUN_004ef18c =====

void FUN_004ef18c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = *(undefined8 *)param_1[1];
  *(undefined8 *)param_1[1] = 0;
  FUN_004ee960(uVar1,uVar2);
  return;
}


// ===== 004ef19c  FUN_004ef19c =====

void FUN_004ef19c(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 004ef1c0  FUN_004ef1c0 =====

void FUN_004ef1c0(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004ef1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}


// ===== 004ef1d8  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 004ef1dc  FUN_004ef1dc =====

int FUN_004ef1dc(long *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar5 == puVar1) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    do {
      iVar2 = FUN_0050decc(*puVar5);
      iVar3 = FUN_0050decc(puVar5[1]);
      puVar5 = puVar5 + 2;
      iVar4 = iVar2 + iVar4 + iVar3;
    } while (puVar5 != puVar1);
  }
  return iVar4;
}


// ===== 004ef240  FUN_004ef240 =====

int FUN_004ef240(long *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  lVar4 = param_2;
  if (puVar5 != puVar1) {
    do {
      lVar2 = FUN_0050decc(*puVar5);
      lVar3 = FUN_0050decc(puVar5[1]);
      if ((ulong)((param_2 + param_3) - lVar4) < (ulong)(lVar3 + lVar2)) break;
      lVar2 = FUN_0050df74(*puVar5,lVar4);
      lVar3 = FUN_0050df74(puVar5[1],lVar4 + lVar2);
      puVar5 = puVar5 + 2;
      lVar4 = lVar4 + lVar2 + lVar3;
    } while (puVar5 != puVar1);
  }
  return (int)lVar4 - (int)param_2;
}


// ===== 004ef2dc  FUN_004ef2dc =====

ulong FUN_004ef2dc(ulong *param_1,ulong param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 auStack_160 [264];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar6 = param_2 & 0xffffffff;
  uVar5 = *param_1;
  uVar1 = uVar5 + (param_2 & 0xff);
  if ((param_2 & 0xff) != 0) {
    do {
      uVar3 = FUN_0050defc(param_1,uVar1);
      uVar5 = *param_1;
      if (uVar5 == 0) break;
      uVar4 = FUN_0050defc(param_1,uVar1);
      uVar5 = *param_1;
      if (uVar5 == 0) break;
      local_178 = uVar3;
      uStack_170 = uVar4;
      FUN_004ef410(param_3,&local_178);
      uVar5 = *param_1;
    } while (uVar5 < uVar1);
  }
  if (uVar5 != uVar1) {
    FUN_004f0510(&local_178,2,
                 "../../discord_common/native/third_party/libdave/cpp/src/frame_processors.cpp",0x57
                );
                    /* try { // try from 004ef390 to 004ef39f has its CatchHandler @ 004ef3e8 */
    FUN_00428964(auStack_160,"Failed to deserialize unencrypted ranges",0x28);
    FUN_004f0604(&local_178);
    uVar6 = 0;
    param_3[1] = *param_3;
    *param_1 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ef410  FUN_004ef410 =====

void FUN_004ef410(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *__dest;
  ulong uVar4;
  ulong uVar5;
  void *__src;
  long lVar6;
  undefined8 uVar7;
  
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 < (undefined8 *)param_1[2]) {
    if (puVar3 != (undefined8 *)0x0) {
      uVar7 = *param_2;
      puVar3[1] = param_2[1];
      *puVar3 = uVar7;
      param_1[1] = puVar3 + 2;
      return;
    }
                    /* try { // try from 004ef508 to 004ef52f has its CatchHandler @ 004ef564 */
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  __src = (void *)*param_1;
  lVar6 = (long)puVar3 - (long)__src >> 4;
  uVar1 = lVar6 + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar4 = (long)param_1[2] - (long)__src;
    uVar5 = uVar4 >> 3;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7fffffffffffffef < uVar4) {
      uVar5 = 0xfffffffffffffff;
    }
    if (uVar5 != 0) {
      if (uVar5 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00401ad4();
      }
      __dest = operator_new(uVar5 * 0x10);
      uVar7 = *param_2;
      puVar2 = (undefined8 *)((long)__dest + lVar6 * 0x10);
      puVar2[1] = param_2[1];
      *puVar2 = uVar7;
      memmove(__dest,__src,(long)puVar3 - (long)__src);
      *param_1 = __dest;
      param_1[1] = puVar2 + 2;
      param_1[2] = (void *)((long)__dest + uVar5 * 0x10);
      if (__src == (void *)0x0) {
        return;
      }
      operator_delete(__src);
      return;
    }
  }
  else {
    FUN_004f04d8(param_1);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h",
             0x23,"__location != nullptr","null pointer given to construct_at");
}


// ===== 004ef56c  FUN_004ef56c =====

void FUN_004ef56c(long *param_1,ulong param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [264];
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  lVar2 = *param_1;
  if (lVar2 == param_1[1]) {
LAB_004ef6a0:
    uVar6 = 1;
  }
  else {
    uVar7 = param_1[1] - lVar2 >> 4;
    uVar8 = 1;
    do {
      if (uVar7 <= uVar8 - 1) goto LAB_004ef6a0;
      uVar9 = param_2;
      if (uVar8 < uVar7) {
        uVar9 = *(ulong *)(lVar2 + (ulong)uVar8 * 0x10);
      }
      puVar1 = (ulong *)(lVar2 + (ulong)(uVar8 - 1) * 0x10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
    } while ((!CARRY8(uVar3,uVar4)) && (uVar8 = uVar8 + 1, uVar3 + uVar4 <= uVar9));
    FUN_004f0510(auStack_178,2,
                 "../../discord_common/native/third_party/libdave/cpp/src/frame_processors.cpp",0x70
                );
                    /* try { // try from 004ef610 to 004ef68f has its CatchHandler @ 004ef6d0 */
    FUN_00428964(auStack_160,"Unencrypted range may overlap or be out of order: current offset: ",
                 0x42);
    FUN_0054c088(auStack_160,uVar3);
    FUN_00428964(auStack_160,", current size: ",0x10);
    FUN_0054c088(auStack_160,uVar4);
    FUN_00428964(auStack_160,", maximum end: ",0xf);
    FUN_0054c088(auStack_160,uVar9);
    FUN_00428964(auStack_160,", frame size: ",0xe);
    FUN_0054c088(auStack_160,param_2);
    FUN_004f0604(auStack_178);
    uVar6 = 0;
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


// ===== 004ef6f8  FUN_004ef6f8 =====

void FUN_004ef6f8(undefined1 *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  size_t sVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  byte *pbVar15;
  long local_198;
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [264];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  puVar13 = (undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  puVar10 = (undefined8 *)(param_1 + 0x40);
  puVar11 = (undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x30) = *puVar13;
  puVar9 = (undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x48) = *puVar10;
  *(undefined8 *)(param_1 + 0x60) = *puVar11;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x78) = *puVar9;
  if (param_3 < 0xb) {
    FUN_004f0510(auStack_190,2,
                 "../../discord_common/native/third_party/libdave/cpp/src/frame_processors.cpp",0xbf
                );
                    /* try { // try from 004ef78c to 004ef79b has its CatchHandler @ 004efaa4 */
    FUN_00428964(auStack_178,"Encrypted frame is too small to contain min supplemental bytes",0x3e);
  }
  else {
    lVar7 = param_2 + param_3;
    if (*(short *)(lVar7 + -2) != -0x506) goto LAB_004ef7c0;
    pbVar15 = (byte *)(lVar7 + -3);
    uVar6 = (ulong)*pbVar15;
    if (param_3 < uVar6) {
      FUN_004f0510(auStack_190,2,
                   "../../discord_common/native/third_party/libdave/cpp/src/frame_processors.cpp",
                   0xd2);
                    /* try { // try from 004ef820 to 004ef82f has its CatchHandler @ 004efaa0 */
      FUN_00428964(auStack_178,"Encrypted frame is too small to contain supplemental bytes",0x3a);
    }
    else if (*pbVar15 < 0xb) {
      FUN_004f0510(auStack_190,2,
                   "../../discord_common/native/third_party/libdave/cpp/src/frame_processors.cpp",
                   0xd8);
                    /* try { // try from 004ef85c to 004ef86b has its CatchHandler @ 004efa9c */
      FUN_00428964(auStack_178,"Supplemental bytes size is too small to contain supplemental bytes",
                   0x42);
    }
    else {
      local_198 = (lVar7 - uVar6) + 8;
      *(ulong *)(param_1 + 0x10) = lVar7 - uVar6;
      *(undefined8 *)(param_1 + 0x18) = 8;
      uVar4 = FUN_0050defc(&local_198,pbVar15);
      *(undefined4 *)(param_1 + 0x20) = uVar4;
      if (local_198 == 0) {
        FUN_004f0510(auStack_190,2,
                     "../../discord_common/native/third_party/libdave/cpp/src/frame_processors.cpp",
                     0xea);
                    /* try { // try from 004efa14 to 004efa23 has its CatchHandler @ 004efa98 */
        FUN_00428964(auStack_178,"Failed to read truncated nonce",0x1e);
      }
      else {
        FUN_004ef2dc(&local_198,(int)pbVar15 - (int)local_198,puVar13);
        if (local_198 == 0) {
          FUN_004f0510(auStack_190,2,
                       "../../discord_common/native/third_party/libdave/cpp/src/frame_processors.cpp"
                       ,0xf5);
                    /* try { // try from 004efa48 to 004efa57 has its CatchHandler @ 004efa94 */
          FUN_00428964(auStack_178,"Failed to read unencrypted ranges",0x21);
        }
        else {
          uVar5 = FUN_004ef56c(puVar13,param_3);
          if ((uVar5 & 1) != 0) {
            FUN_004efacc(puVar10,param_3);
            FUN_004efacc(puVar11,param_3);
            FUN_004efacc(puVar9,param_3);
            puVar14 = *(ulong **)(param_1 + 0x28);
            puVar2 = *(ulong **)(param_1 + 0x30);
            uVar5 = 0;
            *(ulong *)(param_1 + 8) = param_3;
            for (; puVar14 != puVar2; puVar14 = puVar14 + 2) {
              sVar12 = *puVar14 - uVar5;
              if (sVar12 != 0) {
                lVar7 = *(long *)(param_1 + 0x60);
                uVar8 = lVar7 - *(long *)(param_1 + 0x58);
                uVar1 = uVar8 + sVar12;
                if (uVar8 < uVar1) {
                  FUN_00432ba8(puVar11,sVar12);
                  lVar7 = *(long *)(param_1 + 0x60);
                }
                else if (uVar1 < uVar8) {
                  lVar7 = *(long *)(param_1 + 0x58) + uVar1;
                  *(long *)(param_1 + 0x60) = lVar7;
                }
                memcpy((void *)(lVar7 - sVar12),(void *)(param_2 + uVar5),sVar12);
                uVar5 = *puVar14;
              }
              lVar7 = *(long *)(param_1 + 0x48);
              sVar12 = puVar14[1];
              uVar8 = lVar7 - *(long *)(param_1 + 0x40);
              uVar1 = uVar8 + sVar12;
              if (uVar8 < uVar1) {
                FUN_00432ba8(puVar10,sVar12);
                lVar7 = *(long *)(param_1 + 0x48);
              }
              else if (uVar1 < uVar8) {
                lVar7 = *(long *)(param_1 + 0x40) + uVar1;
                *(long *)(param_1 + 0x48) = lVar7;
              }
              memcpy((void *)(lVar7 - sVar12),(void *)(param_2 + uVar5),sVar12);
              uVar5 = puVar14[1] + *puVar14;
            }
            lVar7 = (param_3 - uVar6) - uVar5;
            if (uVar5 <= param_3 - uVar6 && lVar7 != 0) {
              FUN_004efb68(param_1,param_2 + uVar5,lVar7);
            }
            FUN_004efbd8(puVar9,*(long *)(param_1 + 0x60) - *(long *)(param_1 + 0x58));
            *param_1 = 1;
            goto LAB_004ef7c0;
          }
          FUN_004f0510(auStack_190,2,
                       "../../discord_common/native/third_party/libdave/cpp/src/frame_processors.cpp"
                       ,0xfa);
                    /* try { // try from 004efa7c to 004efa8b has its CatchHandler @ 004efa90 */
          FUN_00428964(auStack_178,"Invalid unencrypted ranges",0x1a);
        }
      }
    }
  }
  FUN_004f0604(auStack_190);
LAB_004ef7c0:
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004efacc  FUN_004efacc =====

void FUN_004efacc(undefined8 *param_1,ulong param_2)

{
  void *__dest;
  long lVar1;
  void *__src;
  
  __src = (void *)*param_1;
  if ((ulong)(param_1[2] - (long)__src) < param_2) {
    if ((long)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004f04ec(param_1);
    }
    lVar1 = param_1[1];
    __dest = operator_new(param_2);
    memmove(__dest,__src,lVar1 - (long)__src);
    *param_1 = __dest;
    param_1[1] = (long)__dest + (lVar1 - (long)__src);
    param_1[2] = (long)__dest + param_2;
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  return;
}


// ===== 004efb68  FUN_004efb68 =====

void FUN_004efb68(long param_1,void *param_2,size_t param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(param_1 + 0x58);
  lVar3 = *(long *)(param_1 + 0x60);
  uVar4 = lVar3 - lVar2;
  uVar1 = uVar4 + param_3;
  if (uVar4 < uVar1) {
    FUN_00432ba8((long *)(param_1 + 0x58),param_3);
    lVar3 = *(long *)(param_1 + 0x60);
  }
  else if (uVar1 < uVar4) {
    lVar3 = lVar2 + uVar1;
    *(long *)(param_1 + 0x60) = lVar3;
  }
  memcpy((void *)(lVar3 - param_3),param_2,param_3);
  return;
}


// ===== 004efbd8  FUN_004efbd8 =====

void FUN_004efbd8(long *param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = param_1[1] - *param_1;
  if (uVar1 < param_2) {
    FUN_00432ba8(param_1,param_2 - uVar1);
    return;
  }
  if (param_2 < uVar1) {
    param_1[1] = *param_1 + param_2;
  }
  return;
}


// ===== 004efc00  FUN_004efc00 =====

ulong FUN_004efc00(char *param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  ulong *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [264];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  if (*param_1 == '\0') {
    FUN_004f0510(auStack_190,2,
                 "../../discord_common/native/third_party/libdave/cpp/src/frame_processors.cpp",
                 0x122);
                    /* try { // try from 004efcb0 to 004efcbf has its CatchHandler @ 004efe8c */
    FUN_00428964(auStack_178,"Cannot reconstruct an invalid encrypted frame",0x2d);
LAB_004efcc0:
    FUN_004f0604(auStack_190);
    uVar9 = 0;
  }
  else {
    lVar15 = *(long *)(param_1 + 0x70);
    lVar13 = *(long *)(param_1 + 0x78);
    if (param_3 < (ulong)((*(long *)(param_1 + 0x48) + lVar13) -
                         (*(long *)(param_1 + 0x40) + lVar15))) {
      FUN_004f0510(auStack_190,2,
                   "../../discord_common/native/third_party/libdave/cpp/src/frame_processors.cpp",
                   0x127);
                    /* try { // try from 004efc7c to 004efc8b has its CatchHandler @ 004efe88 */
      FUN_00428964(auStack_178,"Frame is too small to contain the decrypted frame",0x31);
      goto LAB_004efcc0;
    }
    lVar7 = *(long *)(param_1 + 0x28);
    lVar2 = *(long *)(param_1 + 0x30);
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_198 = 0;
    uVar14 = lVar2 - lVar7;
    if (uVar14 == 0) {
      puVar5 = (ulong *)0x0;
LAB_004efde4:
      uVar14 = 0;
      uVar9 = 0;
      lVar7 = 0;
    }
    else {
      if ((long)uVar14 < 0) {
        if (*(long *)(lVar3 + 0x28) == local_70) {
          uVar6 = FUN_004f04d8(&local_1a8);
                    /* catch() { ... } // from try @ 004efc7c with catch @ 004efe88 */
                    /* catch() { ... } // from try @ 004efcb0 with catch @ 004efe8c */
          FUN_004f0604(auStack_190);
          if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
            FUN_00d0fa5c(uVar6);
          }
        }
        goto LAB_004efeb0;
      }
      puVar5 = (ulong *)operator_new(uVar14);
      lVar1 = 0;
      do {
        lVar8 = lVar1;
        uVar6 = *(undefined8 *)(lVar7 + lVar8);
        ((undefined8 *)((long)puVar5 + lVar8))[1] = ((undefined8 *)(lVar7 + lVar8))[1];
        *(undefined8 *)((long)puVar5 + lVar8) = uVar6;
        lVar1 = lVar8 + 0x10;
      } while (lVar7 + lVar1 != lVar2);
      if (lVar1 == 0) goto LAB_004efde4;
      lVar7 = 0;
      lVar15 = 0;
      uVar9 = 0;
      uVar14 = 0;
      puVar10 = puVar5;
      do {
        uVar11 = *puVar10;
        uVar12 = uVar11 - uVar9;
        if (((uVar9 <= uVar11 && uVar12 != 0) &&
            (uVar12 <= (ulong)((lVar7 + *(long *)(param_1 + 0x78)) - *(long *)(param_1 + 0x70)))) &&
           (uVar12 <= param_3 - uVar9)) {
          memcpy((void *)(param_2 + uVar9),(void *)(*(long *)(param_1 + 0x70) + uVar14),uVar12);
          uVar14 = uVar12 + uVar14;
          uVar9 = uVar11;
        }
        uVar12 = puVar10[1];
        if ((uVar12 <= (ulong)(*(long *)(param_1 + 0x48) - (lVar15 + *(long *)(param_1 + 0x40)))) &&
           (uVar12 <= param_3 - uVar9)) {
          memcpy((void *)(param_2 + uVar9),(void *)(*(long *)(param_1 + 0x40) + lVar15),uVar12);
          lVar15 = uVar12 + lVar15;
          uVar9 = uVar12 + uVar9;
        }
        bVar4 = (ulong *)((long)puVar5 + lVar8) != puVar10;
        lVar7 = -uVar14;
        puVar10 = puVar10 + 2;
      } while (bVar4);
      lVar15 = *(long *)(param_1 + 0x70);
      lVar13 = *(long *)(param_1 + 0x78);
    }
    uVar12 = (lVar13 - lVar15) - uVar14;
    if (((uVar14 <= (ulong)(lVar13 - lVar15) && uVar12 != 0) &&
        (uVar12 <= (ulong)((lVar7 + lVar13) - lVar15))) && (uVar12 <= param_3 - uVar9)) {
      memcpy((void *)(param_2 + uVar9),(void *)(lVar15 + uVar14),uVar12);
      uVar9 = uVar12 + uVar9;
    }
    if (puVar5 != (ulong *)0x0) {
      operator_delete(puVar5);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return uVar9;
  }
LAB_004efeb0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004efeb4  FUN_004efeb4 =====

void FUN_004efeb4(undefined1 *param_1,void *param_2,ulong param_3,undefined1 param_4)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  void *__src;
  void *pvVar6;
  
  pvVar6 = *(void **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x58);
  puVar5 = (undefined8 *)(param_1 + 0x28);
  __src = (void *)*puVar5;
  *(undefined8 *)(param_1 + 8) = 0;
  *(void **)(param_1 + 0x18) = pvVar6;
  *(void **)(param_1 + 0x30) = __src;
  *param_1 = param_4;
  if ((ulong)(*(long *)(param_1 + 0x20) - (long)pvVar6) < param_3) {
    if ((long)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004f04ec();
    }
    pvVar1 = operator_new(param_3);
    *(void **)(param_1 + 0x10) = pvVar1;
    *(void **)(param_1 + 0x18) = pvVar1;
    *(ulong *)(param_1 + 0x20) = (long)pvVar1 + param_3;
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
      __src = (void *)*puVar5;
    }
  }
  if ((ulong)(*(long *)(param_1 + 0x38) - (long)__src) < param_3) {
    if ((long)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004f04ec(puVar5);
    }
    lVar2 = *(long *)(param_1 + 0x30);
    pvVar6 = operator_new(param_3);
    memmove(pvVar6,__src,lVar2 - (long)__src);
    *(void **)(param_1 + 0x28) = pvVar6;
    *(long *)(param_1 + 0x30) = (long)pvVar6 + (lVar2 - (long)__src);
    *(ulong *)(param_1 + 0x38) = (long)pvVar6 + param_3;
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  switch(param_4) {
  case 1:
    uVar3 = FUN_004e8424(param_1,param_2,param_3);
    goto joined_r0x004f0024;
  case 2:
    uVar3 = FUN_004e843c(param_1,param_2,param_3);
joined_r0x004f0024:
    if ((uVar3 & 1) != 0) goto LAB_004f008c;
    goto switchD_004effb0_default;
  case 3:
    uVar3 = FUN_004e8494(param_1,param_2,param_3);
    break;
  case 4:
    uVar3 = FUN_004e84ac(param_1,param_2,param_3);
    break;
  case 5:
    uVar3 = FUN_004e8720(param_1,param_2,param_3);
    break;
  case 6:
    uVar3 = FUN_004e8968(param_1,param_2,param_3);
    break;
  default:
    goto switchD_004effb0_default;
  }
  if ((uVar3 & 1) == 0) {
switchD_004effb0_default:
    *(undefined8 *)(param_1 + 8) = 0;
    lVar2 = *(long *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x30) = lVar2;
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x58);
    if (param_3 != 0) {
      FUN_00432ba8(puVar5,param_3);
      lVar2 = *(long *)(param_1 + 0x30);
    }
    memcpy((void *)(lVar2 - param_3),param_2,param_3);
    *(ulong *)(param_1 + 8) = *(long *)(param_1 + 8) + param_3;
  }
LAB_004f008c:
  lVar2 = *(long *)(param_1 + 0x40);
  uVar3 = *(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28);
  uVar4 = *(long *)(param_1 + 0x48) - lVar2;
  if (uVar3 >= uVar4 && uVar3 - uVar4 != 0) {
    FUN_00432ba8(param_1 + 0x40,uVar3 - uVar4);
    return;
  }
  if (uVar3 < uVar4) {
    *(ulong *)(param_1 + 0x48) = lVar2 + uVar3;
  }
  return;
}


// ===== 004f00fc  FUN_004f00fc =====

void FUN_004f00fc(long param_1,void *param_2,size_t param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(param_1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x30);
  uVar4 = lVar3 - lVar2;
  uVar1 = uVar4 + param_3;
  if (uVar4 < uVar1) {
    FUN_00432ba8((long *)(param_1 + 0x28),param_3);
    lVar3 = *(long *)(param_1 + 0x30);
  }
  else if (uVar1 < uVar4) {
    lVar3 = lVar2 + uVar1;
    *(long *)(param_1 + 0x30) = lVar3;
  }
  memcpy((void *)(lVar3 - param_3),param_2,param_3);
  *(size_t *)(param_1 + 8) = *(long *)(param_1 + 8) + param_3;
  return;
}


// ===== 004f017c  FUN_004f017c =====

ulong FUN_004f017c(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  ulong *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [264];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  lVar15 = *(long *)(param_1 + 0x40);
  lVar13 = *(long *)(param_1 + 0x48);
  if (param_3 < (ulong)((*(long *)(param_1 + 0x18) + lVar13) - (*(long *)(param_1 + 0x10) + lVar15))
     ) {
    FUN_004f0510(auStack_190,2,
                 "../../discord_common/native/third_party/libdave/cpp/src/frame_processors.cpp",
                 0x172);
                    /* try { // try from 004f01e8 to 004f01f7 has its CatchHandler @ 004f03c8 */
    FUN_00428964(auStack_178,"Frame is too small to contain the encrypted frame",0x31);
    FUN_004f0604(auStack_190);
    uVar9 = 0;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x58);
    lVar2 = *(long *)(param_1 + 0x60);
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_198 = 0;
    uVar14 = lVar2 - lVar7;
    if (uVar14 == 0) {
      puVar5 = (ulong *)0x0;
LAB_004f0324:
      uVar14 = 0;
      uVar9 = 0;
      lVar7 = 0;
    }
    else {
      if ((long)uVar14 < 0) {
        if (*(long *)(lVar3 + 0x28) == local_70) {
          uVar6 = FUN_004f04d8(&local_1a8);
                    /* catch() { ... } // from try @ 004f01e8 with catch @ 004f03c8 */
          FUN_004f0604(auStack_190);
          if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
            FUN_00d0fa5c(uVar6);
          }
        }
        goto LAB_004f03ec;
      }
      puVar5 = (ulong *)operator_new(uVar14);
      lVar1 = 0;
      do {
        lVar8 = lVar1;
        uVar6 = *(undefined8 *)(lVar7 + lVar8);
        ((undefined8 *)((long)puVar5 + lVar8))[1] = ((undefined8 *)(lVar7 + lVar8))[1];
        *(undefined8 *)((long)puVar5 + lVar8) = uVar6;
        lVar1 = lVar8 + 0x10;
      } while (lVar7 + lVar1 != lVar2);
      if (lVar1 == 0) goto LAB_004f0324;
      lVar7 = 0;
      lVar15 = 0;
      uVar9 = 0;
      uVar14 = 0;
      puVar10 = puVar5;
      do {
        uVar11 = *puVar10;
        uVar12 = uVar11 - uVar9;
        if (((uVar9 <= uVar11 && uVar12 != 0) &&
            (uVar12 <= (ulong)((lVar7 + *(long *)(param_1 + 0x48)) - *(long *)(param_1 + 0x40)))) &&
           (uVar12 <= param_3 - uVar9)) {
          memcpy((void *)(param_2 + uVar9),(void *)(*(long *)(param_1 + 0x40) + uVar14),uVar12);
          uVar14 = uVar12 + uVar14;
          uVar9 = uVar11;
        }
        uVar12 = puVar10[1];
        if ((uVar12 <= (ulong)(*(long *)(param_1 + 0x18) - (lVar15 + *(long *)(param_1 + 0x10)))) &&
           (uVar12 <= param_3 - uVar9)) {
          memcpy((void *)(param_2 + uVar9),(void *)(*(long *)(param_1 + 0x10) + lVar15),uVar12);
          lVar15 = uVar12 + lVar15;
          uVar9 = uVar12 + uVar9;
        }
        bVar4 = (ulong *)((long)puVar5 + lVar8) != puVar10;
        lVar7 = -uVar14;
        puVar10 = puVar10 + 2;
      } while (bVar4);
      lVar15 = *(long *)(param_1 + 0x40);
      lVar13 = *(long *)(param_1 + 0x48);
    }
    uVar12 = (lVar13 - lVar15) - uVar14;
    if (((uVar14 <= (ulong)(lVar13 - lVar15) && uVar12 != 0) &&
        (uVar12 <= (ulong)((lVar7 + lVar13) - lVar15))) && (uVar12 <= param_3 - uVar9)) {
      memcpy((void *)(param_2 + uVar9),(void *)(lVar15 + uVar14),uVar12);
      uVar9 = uVar12 + uVar9;
    }
    if (puVar5 != (ulong *)0x0) {
      operator_delete(puVar5);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return uVar9;
  }
LAB_004f03ec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f03f0  FUN_004f03f0 =====

void FUN_004f03f0(long param_1,void *param_2,size_t param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long local_48;
  size_t sStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)(param_1 + 0x60);
  if (*(long *)(param_1 + 0x58) == lVar4) {
    lVar3 = *(long *)(param_1 + 8);
  }
  else {
    lVar3 = *(long *)(param_1 + 8);
    if (*(long *)(lVar4 + -8) + *(long *)(lVar4 + -0x10) == lVar3) {
      *(size_t *)(lVar4 + -8) = *(long *)(lVar4 + -8) + param_3;
      goto LAB_004f0458;
    }
  }
  local_48 = lVar3;
  sStack_40 = param_3;
  FUN_004ef410((long *)(param_1 + 0x58),&local_48);
LAB_004f0458:
  lVar3 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(param_1 + 0x18);
  uVar5 = lVar4 - lVar3;
  uVar1 = uVar5 + param_3;
  if (uVar5 < uVar1) {
    FUN_00432ba8((long *)(param_1 + 0x10),param_3);
    lVar4 = *(long *)(param_1 + 0x18);
  }
  else if (uVar1 < uVar5) {
    lVar4 = lVar3 + uVar1;
    *(long *)(param_1 + 0x18) = lVar4;
  }
  memcpy((void *)(lVar4 - param_3),param_2,param_3);
  *(size_t *)(param_1 + 8) = *(long *)(param_1 + 8) + param_3;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f04d8  FUN_004f04d8 =====

void FUN_004f04d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_004e8250("vector");
}


// ===== 004f04ec  FUN_004f04ec =====

void FUN_004f04ec(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_004e8250("vector");
}


// ===== 004f0500  FUN_004f0500 =====

void FUN_004f0500(undefined8 param_1)

{
  DAT_00d610e8 = param_1;
  return;
}


// ===== 004f0510  FUN_004f0510 =====

void FUN_004f0510(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long *plVar5;
  
  puVar1 = PTR_PTR_00d51b50;
  *param_1 = param_2;
  puVar4 = PTR_DAT_00d51b48;
  *(undefined8 *)(param_1 + 2) = param_3;
  param_1[4] = param_4;
  lVar2 = *(long *)(puVar1 + 8);
  uVar3 = *(undefined8 *)(puVar1 + 0x10);
  puVar1 = puVar4 + 0x40;
  plVar5 = (long *)(param_1 + 6);
  *plVar5 = lVar2;
  *(undefined **)(param_1 + 0x22) = puVar1;
  *(undefined8 *)((long)plVar5 + *(long *)(lVar2 + -0x18)) = uVar3;
  lVar2 = (long)plVar5 + *(long *)(*plVar5 + -0x18);
                    /* try { // try from 004f0578 to 004f0583 has its CatchHandler @ 004f05f0 */
  FUN_00520e8c(lVar2,param_1 + 8);
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined **)(param_1 + 0x22) = puVar1;
  *(undefined4 *)(lVar2 + 0x90) = 0xffffffff;
  *plVar5 = (long)(puVar4 + 0x18);
                    /* try { // try from 004f059c to 004f05a3 has its CatchHandler @ 004f05dc */
  FUN_0054a4c8(param_1 + 8);
  puVar1 = PTR_DAT_00d51b20;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined **)(param_1 + 8) = puVar1 + 0x10;
  param_1[0x20] = 0x10;
  return;
}


// ===== 004f0604  FUN_004f0604 =====

void FUN_004f0604(uint *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 ****ppppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  char *pcVar7;
  size_t sVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  char *__s;
  undefined8 ***local_68;
  ulong local_60;
  byte local_51;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 004f0630 to 004f0737 has its CatchHandler @ 004f0824 */
  FUN_0054d504(&local_68,param_1 + 8);
  uVar1 = local_60;
  if (-1 < (char)local_51) {
    uVar1 = (ulong)local_51;
  }
  if (uVar1 != 0) {
    if (DAT_00d610e8 == (code *)0x0) {
      if (*param_1 < 4) {
        __s = *(char **)(param_1 + 2);
        pcVar7 = strrchr(__s,0x2f);
        uVar12 = FUN_00428964(PTR_DAT_00d51cf0,&DAT_0019fcd5,1);
        if (pcVar7 != (char *)0x0) {
          __s = pcVar7 + 1;
        }
        sVar8 = strlen(__s);
        uVar12 = FUN_00428964(uVar12,__s,sVar8);
        uVar12 = FUN_00428964(uVar12,&DAT_001ca603,1);
        uVar12 = FUN_0054bae0(uVar12,param_1[4]);
        uVar12 = FUN_00428964(uVar12,&DAT_001ea2f5,2);
        ppppuVar3 = (undefined8 ****)local_68;
        if (-1 < (char)local_51) {
          local_60 = (ulong)local_51;
          ppppuVar3 = &local_68;
        }
        plVar9 = (long *)FUN_00428964(uVar12,ppppuVar3,local_60);
        FUN_00520ce8(auStack_50,(long)plVar9 + *(long *)(*plVar9 + -0x18));
                    /* try { // try from 004f0738 to 004f0757 has its CatchHandler @ 004f0810 */
        plVar10 = (long *)FUN_0053cfd4(auStack_50,PTR_DAT_00d51b28);
        uVar6 = (**(code **)(*plVar10 + 0x38))(plVar10,10);
        FUN_0053ceec(auStack_50);
                    /* try { // try from 004f0764 to 004f0777 has its CatchHandler @ 004f0824 */
        FUN_0054cbd4(plVar9,uVar6);
        FUN_0054aa28(plVar9);
      }
    }
    else {
      (*DAT_00d610e8)(*param_1,*(undefined8 *)(param_1 + 2),param_1[4],&local_68);
    }
  }
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  puVar5 = PTR_PTR_00d51b50;
  lVar11 = *(long *)PTR_PTR_00d51b50;
  uVar12 = *(undefined8 *)(PTR_PTR_00d51b50 + 0x18);
  *(long *)(param_1 + 6) = lVar11;
  puVar4 = PTR_DAT_00d51b20;
  *(undefined8 *)((long)(param_1 + 6) + *(long *)(lVar11 + -0x18)) = uVar12;
  *(undefined **)(param_1 + 8) = puVar4 + 0x10;
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  FUN_0054a488(param_1 + 8);
  FUN_0054b3d4(param_1 + 6,puVar5 + 8);
  thunk_FUN_00520cf4(param_1 + 0x22);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004f0828  FUN_004f0828 =====

void FUN_004f0828(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  
  uVar1 = FUN_004f0b08(param_3);
                    /* try { // try from 004f0848 to 004f0853 has its CatchHandler @ 004f0860 */
  FUN_00565a44(param_1,param_2,uVar1);
  return;
}


// ===== 004f0880  FUN_004f0880 =====

undefined8 * FUN_004f0880(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined2 uVar2;
  undefined8 *puVar3;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_004f0b08(param_2);
                    /* try { // try from 004f08b0 to 004f08bb has its CatchHandler @ 004f0930 */
  FUN_005656d0(&local_70,uVar2,param_1);
                    /* try { // try from 004f08bc to 004f08c7 has its CatchHandler @ 004f091c */
  puVar3 = (undefined8 *)operator_new(0x48);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_00d1f7d8;
  puVar3[4] = uStack_68;
  puVar3[3] = local_70;
  puVar3[6] = uStack_58;
  puVar3[5] = uStack_60;
  puVar3[8] = uStack_48;
  puVar3[7] = local_50;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return puVar3 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f095c  FUN_004f095c =====

void FUN_004f095c(undefined8 *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  
  puVar1 = (undefined1 *)param_1[3];
  if (0 < param_1[4] - (long)puVar1) {
    uVar2 = (param_1[4] - (long)puVar1) + 1;
    do {
      uVar2 = uVar2 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar2);
    puVar1 = (undefined1 *)param_1[3];
  }
  if (puVar1 != (undefined1 *)0x0) {
    param_1[4] = puVar1;
    operator_delete(puVar1);
  }
  puVar1 = (undefined1 *)*param_1;
  if (0 < param_1[1] - (long)puVar1) {
    uVar2 = (param_1[1] - (long)puVar1) + 1;
    do {
      uVar2 = uVar2 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar2);
    puVar1 = (undefined1 *)*param_1;
  }
  if (puVar1 != (undefined1 *)0x0) {
    param_1[1] = puVar1;
    operator_delete(puVar1);
    return;
  }
  return;
}


// ===== 004f09ec  FUN_004f09ec =====

void FUN_004f09ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1f7d8;
  FUN_005466c0();
  return;
}


// ===== 004f09fc  FUN_004f09fc =====

void FUN_004f09fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1f7d8;
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 004f0a2c  FUN_004f0a2c =====

void FUN_004f0a2c(long param_1)

{
                    /* try { // try from 004f0a38 to 004f0a3b has its CatchHandler @ 004f0a44 */
  FUN_004f0a4c(param_1 + 0x18);
  return;
}


// ===== 004f0a48  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 004f0a4c  FUN_004f0a4c =====

void FUN_004f0a4c(undefined8 *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  
  if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x3f,"__loc != nullptr","null pointer given to destroy_at");
  }
  puVar1 = (undefined1 *)param_1[3];
  if (0 < param_1[4] - (long)puVar1) {
    uVar2 = (param_1[4] - (long)puVar1) + 1;
    do {
      uVar2 = uVar2 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar2);
    puVar1 = (undefined1 *)param_1[3];
  }
  if (puVar1 != (undefined1 *)0x0) {
    param_1[4] = puVar1;
    operator_delete(puVar1);
  }
  puVar1 = (undefined1 *)*param_1;
  if (0 < param_1[1] - (long)puVar1) {
    uVar2 = (param_1[1] - (long)puVar1) + 1;
    do {
      uVar2 = uVar2 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar2);
    puVar1 = (undefined1 *)*param_1;
  }
  if (puVar1 != (undefined1 *)0x0) {
    param_1[1] = puVar1;
    operator_delete(puVar1);
    return;
  }
  return;
}


// ===== 004f0b08  FUN_004f0b08 =====

void FUN_004f0b08(void)

{
  long lVar1;
  undefined2 local_30 [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 004f0b24 to 004f0b2f has its CatchHandler @ 004f0b58 */
  FUN_00562408(local_30,2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_30[0]);
}


// ===== 004f0b5c  FUN_004f0b5c =====

void FUN_004f0b5c(void)

{
  long lVar1;
  undefined2 local_30 [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 004f0b78 to 004f0b83 has its CatchHandler @ 004f0bac */
  FUN_00562408(local_30,2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_30[0]);
}


// ===== 004f0bb0  FUN_004f0bb0 =====

void FUN_004f0bb0(long param_1)

{
  long lVar1;
  undefined2 local_30 [2];
  undefined2 local_2c [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 004f0bd0 to 004f0c0b has its CatchHandler @ 004f0c30 */
  FUN_0055a8b8();
  local_2c[0] = 2;
  FUN_004f10d8(param_1 + 0x18,local_2c,(ulong)local_2c | 2);
  local_30[0] = 1;
  FUN_004f1228(param_1 + 0x60,local_30,(ulong)local_30 | 2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f0c34  FUN_004f0c34 =====

void FUN_004f0c34(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 004f0c40  FUN_004f0c40 =====

void FUN_004f0c40(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined1 auStack_a8 [8];
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 local_88 [56];
  byte local_50;
  long local_48;
  undefined1 *puVar11;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar10 = (undefined1 *)*param_3;
  puVar1 = (undefined1 *)param_3[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_a0 = (undefined1 *)0x0;
  local_98 = (undefined1 *)0x0;
  local_90 = (undefined1 *)0x0;
  uVar5 = (long)puVar1 - (long)puVar10;
  if (uVar5 != 0) {
    if ((long)uVar5 < 0) {
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 004f0ed4 to 004f0edb has its CatchHandler @ 004f0f28 */
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(&local_a0);
      }
      goto LAB_004f0edc;
    }
                    /* try { // try from 004f0c8c to 004f0c93 has its CatchHandler @ 004f0f28 */
    local_a0 = (undefined1 *)operator_new(uVar5);
    local_90 = local_a0 + uVar5;
    puVar4 = local_a0;
    puVar11 = puVar10;
    if ((0x1f < uVar5) && (0x1f < (ulong)((long)local_a0 - (long)puVar10))) {
      uVar6 = uVar5 & 0xffffffffffffffe0;
      puVar7 = (undefined8 *)(local_a0 + 0x10);
      puVar11 = puVar10 + uVar6;
      puVar4 = local_a0 + uVar6;
      puVar8 = (undefined8 *)(puVar10 + 0x10);
      uVar9 = uVar6;
      do {
        puVar3 = puVar8 + -1;
        uVar12 = puVar8[-2];
        uVar14 = puVar8[1];
        uVar13 = *puVar8;
        puVar8 = puVar8 + 4;
        uVar9 = uVar9 - 0x20;
        puVar7[-1] = *puVar3;
        puVar7[-2] = uVar12;
        puVar7[1] = uVar14;
        *puVar7 = uVar13;
        puVar7 = puVar7 + 4;
      } while (uVar9 != 0);
      local_98 = puVar4;
      if (uVar5 == uVar6) goto LAB_004f0d0c;
    }
    do {
      puVar10 = puVar11 + 1;
      local_98 = puVar4 + 1;
      *puVar4 = *puVar11;
      puVar4 = local_98;
      puVar11 = puVar10;
    } while (puVar10 != puVar1);
  }
LAB_004f0d0c:
  local_88[0] = 0;
  local_50 = 0xff;
  if ((ulong)*(byte *)(param_3 + 10) != 0xff) {
                    /* try { // try from 004f0d3c to 004f0d47 has its CatchHandler @ 004f0ee4 */
    (*(code *)(&PTR_FUN_00d1f820)[*(byte *)(param_3 + 10)])(auStack_a8,local_88,param_3 + 3);
    local_50 = *(byte *)(param_3 + 10);
  }
  local_c0 = (undefined8 *)0x0;
  local_b8 = (undefined8 *)0x0;
  local_b0 = (undefined8 *)0x0;
                    /* try { // try from 004f0d58 to 004f0d5f has its CatchHandler @ 004f0f28 */
  local_c0 = (undefined8 *)operator_new(0x58);
  local_b0 = local_c0 + 0xb;
                    /* try { // try from 004f0d80 to 004f0d8b has its CatchHandler @ 004f0f20 */
  local_b8 = local_c0;
  local_b8 = (undefined8 *)FUN_004f2118(&local_b0,&local_a0,&local_48,local_c0);
                    /* try { // try from 004f0d90 to 004f0d9b has its CatchHandler @ 004f0f28 */
  FUN_004f0f30(param_1,&local_c0);
  puVar7 = local_c0;
  puVar8 = local_b8;
  if (local_c0 != (undefined8 *)0x0) {
    while (puVar3 = puVar8, puVar3 != puVar7) {
      if ((ulong)*(byte *)(puVar3 + -1) != 0xff) {
                    /* try { // try from 004f0de4 to 004f0deb has its CatchHandler @ 004f0f2c */
        (*(code *)(&PTR_FUN_00d1f800)[*(byte *)(puVar3 + -1)])(auStack_a8,puVar3 + -8);
      }
      puVar10 = (undefined1 *)puVar3[-0xb];
      puVar8 = puVar3 + -0xb;
      *(undefined1 *)(puVar3 + -1) = 0xff;
      if (0 < puVar3[-10] - (long)puVar10) {
        uVar5 = (puVar3[-10] - (long)puVar10) + 1;
        do {
          uVar5 = uVar5 - 1;
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        } while (1 < uVar5);
        puVar10 = (undefined1 *)*puVar8;
      }
      if (puVar10 != (undefined1 *)0x0) {
        puVar3[-10] = puVar10;
        operator_delete(puVar10);
      }
    }
    local_b8 = puVar7;
    operator_delete(local_c0);
  }
  if ((ulong)local_50 != 0xff) {
                    /* try { // try from 004f0e58 to 004f0e5f has its CatchHandler @ 004f0ee0 */
    (*(code *)(&PTR_FUN_00d1f800)[local_50])(auStack_a8,local_88);
  }
  local_50 = 0xff;
  if (0 < (long)local_98 - (long)local_a0) {
    uVar5 = ((long)local_98 - (long)local_a0) + 1;
    puVar10 = local_a0;
    do {
      uVar5 = uVar5 - 1;
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    } while (1 < uVar5);
  }
  if (local_a0 != (undefined1 *)0x0) {
    local_98 = local_a0;
    operator_delete(local_a0);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_004f0edc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f0f30  FUN_004f0f30 =====

void FUN_004f0f30(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  long local_48;
  undefined1 *puVar11;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_004f24d0(&local_60,param_2);
  puVar3 = local_58;
  puVar10 = local_60;
  local_78 = (undefined1 *)0x0;
  local_70 = (undefined1 *)0x0;
  local_68 = (undefined1 *)0x0;
  uVar5 = (long)local_58 - (long)local_60;
  if (uVar5 != 0) {
    if ((long)uVar5 < 0) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 004f1090 to 004f1097 has its CatchHandler @ 004f10a8 */
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(&local_78);
      }
      goto LAB_004f10d4;
    }
                    /* try { // try from 004f0f7c to 004f0f83 has its CatchHandler @ 004f10a8 */
    local_78 = (undefined1 *)operator_new(uVar5);
    local_68 = local_78 + uVar5;
    puVar4 = local_78;
    puVar11 = puVar10;
    if ((0x1f < uVar5) && (0x1f < (ulong)((long)local_78 - (long)puVar10))) {
      uVar6 = uVar5 & 0xffffffffffffffe0;
      puVar7 = (undefined8 *)(local_78 + 0x10);
      puVar11 = puVar10 + uVar6;
      puVar4 = local_78 + uVar6;
      puVar8 = (undefined8 *)(puVar10 + 0x10);
      uVar9 = uVar6;
      do {
        puVar2 = puVar8 + -1;
        uVar12 = puVar8[-2];
        uVar14 = puVar8[1];
        uVar13 = *puVar8;
        puVar8 = puVar8 + 4;
        uVar9 = uVar9 - 0x20;
        puVar7[-1] = *puVar2;
        puVar7[-2] = uVar12;
        puVar7[1] = uVar14;
        *puVar7 = uVar13;
        puVar7 = puVar7 + 4;
      } while (uVar9 != 0);
      local_70 = puVar4;
      if (uVar5 == uVar6) goto LAB_004f0ffc;
    }
    do {
      puVar10 = puVar11 + 1;
      local_70 = puVar4 + 1;
      *puVar4 = *puVar11;
      puVar4 = local_70;
      puVar11 = puVar10;
    } while (puVar10 != puVar3);
  }
LAB_004f0ffc:
                    /* try { // try from 004f0ffc to 004f1013 has its CatchHandler @ 004f1098 */
  FUN_0055a9f8(param_1,*(undefined2 *)PTR_DAT_00d51cf8,&local_78);
  if (0 < (long)local_70 - (long)local_78) {
    uVar5 = ((long)local_70 - (long)local_78) + 1;
    puVar10 = local_78;
    do {
      uVar5 = uVar5 - 1;
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    } while (1 < uVar5);
  }
  if (local_78 != (undefined1 *)0x0) {
    local_70 = local_78;
    operator_delete(local_78);
  }
  if (local_60 != (undefined1 *)0x0) {
    local_58 = local_60;
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_004f10d4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f10d8  FUN_004f10d8 =====

void FUN_004f10d8(undefined8 *param_1,void *param_2,void *param_3)

{
  ulong uVar1;
  void *__src;
  ulong uVar2;
  size_t sVar3;
  void *pvVar4;
  ulong uVar5;
  
  uVar2 = param_1[2];
  sVar3 = (long)param_3 - (long)param_2;
  pvVar4 = (void *)*param_1;
  uVar5 = (long)sVar3 >> 1;
  if (uVar5 <= (ulong)((long)(uVar2 - (long)pvVar4) >> 1)) {
    uVar2 = param_1[1] - (long)pvVar4 >> 1;
    __src = (void *)((long)param_2 + (param_1[1] - (long)pvVar4));
    if (uVar5 <= uVar2) {
      __src = param_3;
    }
    sVar3 = (long)__src - (long)param_2;
    if (sVar3 != 0) {
      memmove(pvVar4,param_2,sVar3);
    }
    if (uVar2 < uVar5) {
      pvVar4 = (void *)param_1[1];
      sVar3 = (long)param_3 - (long)__src;
      if (sVar3 != 0) {
        memmove(pvVar4,__src,sVar3);
      }
      pvVar4 = (void *)((long)pvVar4 + sVar3);
    }
    else {
      pvVar4 = (void *)((long)pvVar4 + sVar3);
    }
LAB_004f11f0:
    param_1[1] = pvVar4;
    return;
  }
  if (pvVar4 != (void *)0x0) {
    param_1[1] = pvVar4;
    operator_delete(pvVar4);
    uVar2 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (-1 < (long)sVar3) {
    uVar1 = uVar2;
    if (uVar2 <= uVar5) {
      uVar1 = uVar5;
    }
    if (0x7ffffffffffffffd < uVar2) {
      uVar1 = 0x7fffffffffffffff;
    }
    if (-1 < (long)uVar1) {
      pvVar4 = operator_new(uVar1 * 2);
      *param_1 = pvVar4;
      param_1[1] = pvVar4;
      param_1[2] = (void *)((long)pvVar4 + uVar1 * 2);
      if (param_3 != param_2) {
        memcpy(pvVar4,param_2,sVar3);
      }
      pvVar4 = (void *)((long)pvVar4 + uVar5 * 2);
      goto LAB_004f11f0;
    }
  }
  FUN_004f1214(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_004e8250("vector");
}


// ===== 004f1214  FUN_004f1214 =====

void FUN_004f1214(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_004e8250("vector");
}


// ===== 004f1228  FUN_004f1228 =====

void FUN_004f1228(undefined8 *param_1,void *param_2,void *param_3)

{
  ulong uVar1;
  void *__src;
  ulong uVar2;
  size_t sVar3;
  void *pvVar4;
  ulong uVar5;
  
  uVar2 = param_1[2];
  sVar3 = (long)param_3 - (long)param_2;
  pvVar4 = (void *)*param_1;
  uVar5 = (long)sVar3 >> 1;
  if (uVar5 <= (ulong)((long)(uVar2 - (long)pvVar4) >> 1)) {
    uVar2 = param_1[1] - (long)pvVar4 >> 1;
    __src = (void *)((long)param_2 + (param_1[1] - (long)pvVar4));
    if (uVar5 <= uVar2) {
      __src = param_3;
    }
    sVar3 = (long)__src - (long)param_2;
    if (sVar3 != 0) {
      memmove(pvVar4,param_2,sVar3);
    }
    if (uVar2 < uVar5) {
      pvVar4 = (void *)param_1[1];
      sVar3 = (long)param_3 - (long)__src;
      if (sVar3 != 0) {
        memmove(pvVar4,__src,sVar3);
      }
      pvVar4 = (void *)((long)pvVar4 + sVar3);
    }
    else {
      pvVar4 = (void *)((long)pvVar4 + sVar3);
    }
LAB_004f1340:
    param_1[1] = pvVar4;
    return;
  }
  if (pvVar4 != (void *)0x0) {
    param_1[1] = pvVar4;
    operator_delete(pvVar4);
    uVar2 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (-1 < (long)sVar3) {
    uVar1 = uVar2;
    if (uVar2 <= uVar5) {
      uVar1 = uVar5;
    }
    if (0x7ffffffffffffffd < uVar2) {
      uVar1 = 0x7fffffffffffffff;
    }
    if (-1 < (long)uVar1) {
      pvVar4 = operator_new(uVar1 * 2);
      *param_1 = pvVar4;
      param_1[1] = pvVar4;
      param_1[2] = (void *)((long)pvVar4 + uVar1 * 2);
      if (param_3 != param_2) {
        memcpy(pvVar4,param_2,sVar3);
      }
      pvVar4 = (void *)((long)pvVar4 + uVar5 * 2);
      goto LAB_004f1340;
    }
  }
  FUN_004f1364(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_004e8250("vector");
}


// ===== 004f1364  FUN_004f1364 =====

void FUN_004f1364(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_004e8250("vector");
}


// ===== 004f1378  FUN_004f1378 =====

void FUN_004f1378(undefined8 param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  
  puVar1 = (undefined1 *)*param_2;
  if (0 < param_2[1] - (long)puVar1) {
    uVar2 = (param_2[1] - (long)puVar1) + 1;
    do {
      uVar2 = uVar2 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar2);
    puVar1 = (undefined1 *)*param_2;
  }
  if (puVar1 != (undefined1 *)0x0) {
    param_2[1] = puVar1;
    operator_delete(puVar1);
    return;
  }
  return;
}


// ===== 004f13b0  FUN_004f13b0 =====

void FUN_004f13b0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar1 = (undefined1 *)param_2[3];
  if (0 < param_2[4] - (long)puVar1) {
    uVar3 = (param_2[4] - (long)puVar1) + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar3);
    puVar1 = (undefined1 *)param_2[3];
  }
  if (puVar1 != (undefined1 *)0x0) {
    param_2[4] = puVar1;
    operator_delete(puVar1);
  }
  puVar5 = (undefined8 *)*param_2;
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
  puVar4 = (undefined8 *)param_2[1];
  puVar2 = puVar5;
  if (puVar4 != puVar5) {
    do {
      puVar2 = puVar4 + -3;
      puVar1 = (undefined1 *)*puVar2;
      if (0 < puVar4[-2] - (long)puVar1) {
        uVar3 = (puVar4[-2] - (long)puVar1) + 1;
        do {
          uVar3 = uVar3 - 1;
          *puVar1 = 0;
          puVar1 = puVar1 + 1;
        } while (1 < uVar3);
        puVar1 = (undefined1 *)*puVar2;
      }
      if (puVar1 != (undefined1 *)0x0) {
        puVar4[-2] = puVar1;
        operator_delete(puVar1);
      }
      puVar4 = puVar2;
    } while (puVar2 != puVar5);
    puVar2 = (undefined8 *)*param_2;
  }
  param_2[1] = puVar5;
  operator_delete(puVar2);
  return;
}


// ===== 004f1484  FUN_004f1484 =====

void FUN_004f1484(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_2[4];
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
      cVar2 = *(char *)((long)param_2 + 0x17);
      goto joined_r0x004f14e4;
    }
  }
  cVar2 = *(char *)((long)param_2 + 0x17);
joined_r0x004f14e4:
  if (-1 < cVar2) {
    return;
  }
  operator_delete((void *)*param_2);
  return;
}


// ===== 004f14f8  FUN_004f14f8 =====

void FUN_004f14f8(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = param_2[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x78;
                    /* try { // try from 004f1524 to 004f152b has its CatchHandler @ 004f1558 */
      FUN_004f163c(lVar1);
    }
    param_2[1] = lVar2;
    operator_delete((void *)*param_2);
    return;
  }
  return;
}


// ===== 004f155c  FUN_004f155c =====

void FUN_004f155c(undefined8 *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  
  puVar1 = (undefined1 *)*param_1;
  if (0 < param_1[1] - (long)puVar1) {
    uVar2 = (param_1[1] - (long)puVar1) + 1;
    do {
      uVar2 = uVar2 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar2);
    puVar1 = (undefined1 *)*param_1;
  }
  if (puVar1 != (undefined1 *)0x0) {
    param_1[1] = puVar1;
    operator_delete(puVar1);
    return;
  }
  return;
}


// ===== 004f159c  FUN_004f159c =====

void FUN_004f159c(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)*param_1;
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
  puVar3 = (undefined8 *)param_1[1];
  puVar2 = puVar5;
  if (puVar3 != puVar5) {
    do {
      puVar2 = puVar3 + -3;
      puVar1 = (undefined1 *)*puVar2;
      if (0 < puVar3[-2] - (long)puVar1) {
        uVar4 = (puVar3[-2] - (long)puVar1) + 1;
        do {
          uVar4 = uVar4 - 1;
          *puVar1 = 0;
          puVar1 = puVar1 + 1;
        } while (1 < uVar4);
        puVar1 = (undefined1 *)*puVar2;
      }
      if (puVar1 != (undefined1 *)0x0) {
        puVar3[-2] = puVar1;
        operator_delete(puVar1);
      }
      puVar3 = puVar2;
    } while (puVar2 != puVar5);
    puVar2 = (undefined8 *)*param_1;
  }
  param_1[1] = puVar5;
  operator_delete(puVar2);
  return;
}


// ===== 004f163c  FUN_004f163c =====

void FUN_004f163c(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                 ,0x3f,"__loc != nullptr","null pointer given to destroy_at");
    }
  }
  else {
    puVar2 = *(undefined1 **)(param_1 + 0x60);
    lVar3 = *(long *)(param_1 + 0x68) - (long)puVar2;
    if (0 < lVar3) {
      uVar4 = lVar3 + 1;
      do {
        uVar4 = uVar4 - 1;
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      } while (1 < uVar4);
      puVar2 = *(undefined1 **)(param_1 + 0x60);
    }
    if (puVar2 != (undefined1 *)0x0) {
      *(undefined1 **)(param_1 + 0x68) = puVar2;
      operator_delete(puVar2);
    }
    puVar2 = *(undefined1 **)(param_1 + 0x48);
    lVar3 = *(long *)(param_1 + 0x50) - (long)puVar2;
    if (0 < lVar3) {
      uVar4 = lVar3 + 1;
      do {
        uVar4 = uVar4 - 1;
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      } while (1 < uVar4);
      puVar2 = *(undefined1 **)(param_1 + 0x48);
    }
    if (puVar2 != (undefined1 *)0x0) {
      *(undefined1 **)(param_1 + 0x50) = puVar2;
      operator_delete(puVar2);
    }
    if ((ulong)*(byte *)(param_1 + 0x40) != 0xff) {
                    /* try { // try from 004f16e8 to 004f16ef has its CatchHandler @ 004f1754 */
      (*(code *)(&PTR_FUN_00d1f800)[*(byte *)(param_1 + 0x40)])(auStack_30,param_1 + 8);
    }
    *(undefined1 *)(param_1 + 0x40) = 0xff;
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f1758  FUN_004f1758 =====

void FUN_004f1758(long param_1)

{
  long lVar1;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((ulong)*(byte *)(param_1 + 0x38) != 0xff) {
                    /* try { // try from 004f1790 to 004f179b has its CatchHandler @ 004f17c8 */
    (*(code *)(&PTR_FUN_00d1f800)[*(byte *)(param_1 + 0x38)])(auStack_30,param_1);
  }
  *(undefined1 *)(param_1 + 0x38) = 0xff;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f17cc  FUN_004f17cc =====

void FUN_004f17cc(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 *puVar7;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar8 = param_3[1] - *param_3;
  if (uVar8 == 0) {
    return;
  }
  if ((long)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004f04ec(param_2);
  }
  puVar3 = (undefined1 *)operator_new(uVar8);
  *param_2 = puVar3;
  param_2[1] = puVar3;
  param_2[2] = puVar3 + uVar8;
  puVar6 = (undefined1 *)*param_3;
  puVar1 = (undefined1 *)param_3[1];
  puVar4 = puVar3;
  if (puVar6 != puVar1) {
    uVar8 = (long)puVar1 - (long)puVar6;
    puVar7 = puVar6;
    if ((0x1f < uVar8) && (0x1f < (ulong)((long)puVar3 - (long)puVar6))) {
      uVar9 = uVar8 & 0xffffffffffffffe0;
      puVar10 = (undefined8 *)(puVar3 + 0x10);
      puVar7 = puVar6 + uVar9;
      puVar3 = puVar3 + uVar9;
      puVar5 = (undefined8 *)(puVar6 + 0x10);
      uVar11 = uVar9;
      do {
        puVar2 = puVar5 + -1;
        uVar12 = puVar5[-2];
        uVar14 = puVar5[1];
        uVar13 = *puVar5;
        puVar5 = puVar5 + 4;
        uVar11 = uVar11 - 0x20;
        puVar10[-1] = *puVar2;
        puVar10[-2] = uVar12;
        puVar10[1] = uVar14;
        *puVar10 = uVar13;
        puVar10 = puVar10 + 4;
      } while (uVar11 != 0);
      puVar4 = puVar3;
      if (uVar8 == uVar9) goto LAB_004f1890;
    }
    do {
      puVar6 = puVar7 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = *puVar7;
      puVar3 = puVar4;
      puVar7 = puVar6;
    } while (puVar6 != puVar1);
  }
LAB_004f1890:
  param_2[1] = puVar4;
  return;
}


// ===== 004f18ac  FUN_004f18ac =====

void FUN_004f18ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_004f19ac(param_2,param_3);
  return;
}


// ===== 004f18b8  FUN_004f18b8 =====

void FUN_004f18b8(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  
  FUN_004c55b4(param_2,param_3);
  lVar2 = *(long *)(param_3 + 0x20);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
  *(long *)(param_2 + 0x20) = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return;
}


// ===== 004f1904  FUN_004f1904 =====

void FUN_004f1904(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 unaff_x22;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar1 = param_3[1] - *param_3;
  if (uVar1 != 0) {
    if (0x222222222222222 < (ulong)(((long)uVar1 >> 3) * -0x1111111111111111)) {
      FUN_004f1da0(param_2);
                    /* catch() { ... } // from try @ 004f1978 with catch @ 004f19a4 */
      param_2[1] = unaff_x22;
                    /* WARNING: Subroutine does not return */
      FUN_00d0fa5c();
    }
    pvVar2 = operator_new(uVar1);
    *param_2 = pvVar2;
    param_2[1] = pvVar2;
    param_2[2] = (void *)((long)pvVar2 + ((long)uVar1 >> 3) * 8);
                    /* try { // try from 004f1978 to 004f1983 has its CatchHandler @ 004f19a4 */
    uVar3 = FUN_004f1db4(param_2 + 2,*param_3,param_3[1],pvVar2);
    param_2[1] = uVar3;
  }
  return;
}


// ===== 004f19ac  FUN_004f19ac =====

void FUN_004f19ac(undefined8 *param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 *puVar9;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar10 = param_2[1] - *param_2;
  if (uVar10 != 0) {
    if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar10 >> 3) * -0x5555555555555555)) {
      FUN_004f1b28(param_1);
      goto LAB_004f1b08;
    }
    pvVar3 = operator_new(uVar10);
    *param_1 = pvVar3;
    param_1[1] = pvVar3;
    param_1[2] = (void *)((long)pvVar3 + ((long)uVar10 >> 3) * 8);
                    /* try { // try from 004f1a20 to 004f1a2b has its CatchHandler @ 004f1b0c */
    uVar4 = FUN_004f1b3c(param_1 + 2,*param_2,param_2[1],pvVar3);
    param_1[1] = uVar4;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar10 = param_2[4] - param_2[3];
  if (uVar10 == 0) goto LAB_004f1ae4;
  if ((long)uVar10 < 0) {
LAB_004f1b08:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 004f1b08 to 004f1b0b has its CatchHandler @ 004f1b14 */
    FUN_004f04ec();
  }
                    /* try { // try from 004f1a4c to 004f1a53 has its CatchHandler @ 004f1b14 */
  puVar5 = (undefined1 *)operator_new(uVar10);
  param_1[3] = puVar5;
  param_1[4] = puVar5;
  param_1[5] = puVar5 + uVar10;
  puVar8 = (undefined1 *)param_2[3];
  puVar1 = (undefined1 *)param_2[4];
  puVar6 = puVar5;
  if (puVar8 != puVar1) {
    uVar10 = (long)puVar1 - (long)puVar8;
    puVar9 = puVar8;
    if ((0x1f < uVar10) && (0x1f < (ulong)((long)puVar5 - (long)puVar8))) {
      uVar11 = uVar10 & 0xffffffffffffffe0;
      puVar12 = (undefined8 *)(puVar5 + 0x10);
      puVar9 = puVar8 + uVar11;
      puVar5 = puVar5 + uVar11;
      puVar7 = (undefined8 *)(puVar8 + 0x10);
      uVar13 = uVar11;
      do {
        puVar2 = puVar7 + -1;
        uVar4 = puVar7[-2];
        uVar15 = puVar7[1];
        uVar14 = *puVar7;
        puVar7 = puVar7 + 4;
        uVar13 = uVar13 - 0x20;
        puVar12[-1] = *puVar2;
        puVar12[-2] = uVar4;
        puVar12[1] = uVar15;
        *puVar12 = uVar14;
        puVar12 = puVar12 + 4;
      } while (uVar13 != 0);
      puVar6 = puVar5;
      if (uVar10 == uVar11) goto LAB_004f1ae0;
    }
    do {
      puVar8 = puVar9 + 1;
      puVar6 = puVar5 + 1;
      *puVar5 = *puVar9;
      puVar5 = puVar6;
      puVar9 = puVar8;
    } while (puVar8 != puVar1);
  }
LAB_004f1ae0:
  param_1[4] = puVar6;
LAB_004f1ae4:
  *(short *)(param_1 + 6) = (short)param_2[6];
  return;
}


// ===== 004f1b28  FUN_004f1b28 =====

void FUN_004f1b28(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_004e8250("vector");
}


