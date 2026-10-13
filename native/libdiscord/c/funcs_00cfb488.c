// ===== 00cfb488  FUN_00cfb488 =====

long FUN_00cfb488(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  long lVar5;
  void *pvVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 ***local_68;
  ulong uStack_60;
  undefined8 local_58;
  
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    *(undefined1 *)*param_3 = 0;
    param_3[1] = 0;
    if (-1 < *(char *)((long)param_4 + 0x17)) goto LAB_00cfb4cc;
LAB_00cfb4ec:
    *(undefined1 *)*param_4 = 0;
    param_4[1] = 0;
  }
  else {
    *(undefined1 *)param_3 = 0;
    *(undefined1 *)((long)param_3 + 0x17) = 0;
    if (*(char *)((long)param_4 + 0x17) < '\0') goto LAB_00cfb4ec;
LAB_00cfb4cc:
    *(undefined1 *)param_4 = 0;
    *(undefined1 *)((long)param_4 + 0x17) = 0;
  }
  lVar5 = FUN_00c69fe8(param_2,6);
  if (lVar5 != 0) {
    ppppuVar8 = *(undefined8 *****)(lVar5 + 0x10);
    uVar9 = (ulong)*(ushort *)(lVar5 + 10);
    if ((ppppuVar8 == (undefined8 ****)0x0) && (*(ushort *)(lVar5 + 10) != 0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
                );
    }
    pvVar6 = memchr(ppppuVar8,0x3a,uVar9);
    lVar5 = 0;
    if ((pvVar6 != (void *)0x0) &&
       (uVar10 = (long)pvVar6 - (long)ppppuVar8, uVar10 != 0xffffffffffffffff)) {
      uVar2 = uVar9;
      if (uVar10 <= uVar9) {
        uVar2 = uVar10;
      }
      if (uVar2 < 0x17) {
        local_58 = CONCAT17((char)uVar2,(undefined7)local_58);
        ppppuVar7 = &local_68;
      }
      else {
        uVar1 = (uVar2 & 0xfff8) + 8;
        uVar3 = 0x19;
        if (uVar1 != 0x18) {
          uVar3 = uVar1;
        }
        ppppuVar7 = (undefined8 ****)operator_new(uVar3);
        local_58 = uVar3 | 0x8000000000000000;
        local_68 = ppppuVar7;
        uStack_60 = uVar2;
      }
      if ((undefined8 ****)((long)ppppuVar7 + uVar2) < ppppuVar7) {
LAB_00cfb6bc:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                  );
      }
      if ((ppppuVar8 < ppppuVar7) || ((undefined8 ****)((long)ppppuVar7 + uVar2) <= ppppuVar8)) {
        memmove(ppppuVar7,ppppuVar8,uVar2);
        cVar4 = *(char *)((long)param_3 + 0x17);
        *(undefined1 *)((long)ppppuVar7 + uVar2) = 0;
        if (cVar4 < '\0') {
          operator_delete((void *)*param_3);
        }
        param_3[1] = uStack_60;
        *param_3 = local_68;
        param_3[2] = local_58;
        if (uVar9 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_005f55a8("string_view::substr");
        }
        uVar9 = uVar9 - (uVar10 + 1);
        if (uVar9 < 0x17) {
          local_58 = CONCAT17((char)uVar9,(undefined7)local_58);
          ppppuVar7 = &local_68;
        }
        else {
          uVar2 = (uVar9 & 0xfff8) + 8;
          uVar1 = 0x19;
          if (uVar2 != 0x18) {
            uVar1 = uVar2;
          }
          ppppuVar7 = (undefined8 ****)operator_new(uVar1);
          local_58 = uVar1 | 0x8000000000000000;
          local_68 = ppppuVar7;
          uStack_60 = uVar9;
        }
        if ((undefined8 ****)((long)ppppuVar7 + uVar9) < ppppuVar7) goto LAB_00cfb6bc;
        ppppuVar8 = (undefined8 ****)((long)ppppuVar8 + uVar10 + 1);
        if ((ppppuVar8 < ppppuVar7) || ((undefined8 ****)((long)ppppuVar7 + uVar9) <= ppppuVar8)) {
          memmove(ppppuVar7,ppppuVar8,uVar9);
          cVar4 = *(char *)((long)param_4 + 0x17);
          *(undefined1 *)((long)ppppuVar7 + uVar9) = 0;
          if (cVar4 < '\0') {
            operator_delete((void *)*param_4);
          }
          param_4[1] = uStack_60;
          *param_4 = local_68;
          param_4[2] = local_58;
          return 1;
        }
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
  }
  return lVar5;
}


// ===== 00cfb6f0  FUN_00cfb6f0 =====

undefined8
FUN_00cfb6f0(long *param_1,undefined8 param_2,undefined8 param_3,void *param_4,size_t param_5)

{
  long *__s2;
  int iVar1;
  long lVar2;
  ulong uVar3;
  size_t sVar4;
  ulong uVar5;
  
  lVar2 = FUN_00c69fb8(param_3,0x802a);
  if (lVar2 == 0) {
    uVar5 = 0;
    iVar1 = 2;
  }
  else {
    sVar4 = (size_t)*(char *)((long)param_1 + 0x97);
    uVar5 = *(ulong *)(lVar2 + 0x10);
    if ((long)sVar4 < 0) {
      __s2 = (long *)param_1[0x10];
      sVar4 = param_1[0x11];
    }
    else {
      __s2 = param_1 + 0x10;
    }
    if (((param_5 == sVar4) && (iVar1 = memcmp(param_4,__s2,sVar4), iVar1 == 0)) &&
       (uVar3 = (**(code **)(*param_1 + 0x38))(param_1), uVar5 == uVar3)) {
      return 1;
    }
    iVar1 = 0;
  }
  lVar2 = FUN_00c69fb8(param_3,0x8029);
  if (lVar2 != 0) {
    uVar5 = *(ulong *)(lVar2 + 0x10);
    iVar1 = 1;
  }
  if ((int)param_1[0x1d] == 1) {
    if (iVar1 != 1) {
      return 1;
    }
    if ((ulong)param_1[0x1e] <= uVar5) goto LAB_00cfb7e8;
  }
  else {
    if ((int)param_1[0x1d] != 0) {
      return 1;
    }
    if (iVar1 != 0) {
      return 1;
    }
    if (uVar5 < (ulong)param_1[0x1e]) {
LAB_00cfb7e8:
      sVar4 = strlen("Role Conflict");
      (**(code **)(*param_1 + 0xb0))(param_1,param_3,param_2,0x1e7,"Role Conflict",sVar4);
      return 0;
    }
  }
  (**(code **)(*param_1 + 0xd0))(param_1);
  return 1;
}


// ===== 00cfb840  FUN_00cfb840 =====

void FUN_00cfb840(undefined8 *param_1,long param_2,undefined8 ****param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 ****__dest;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 ***local_78;
  ulong uStack_70;
  undefined8 local_68;
  void *local_60;
  undefined8 uStack_58;
  long local_50;
  
  if (0x7ffffffffffffff6 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_4 < 0x17) {
    local_68 = CONCAT17((char)param_4,(undefined7)local_68);
    __dest = &local_78;
  }
  else {
    uVar1 = (param_4 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 ****)operator_new(uVar2);
    local_68 = uVar2 | 0x8000000000000000;
    local_78 = __dest;
    uStack_70 = param_4;
  }
  if ((undefined8 ****)((long)__dest + param_4) < __dest) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((__dest <= param_3) && (param_3 < (undefined8 ****)((long)__dest + param_4))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(__dest,param_3,param_4);
  *(undefined1 *)((long)__dest + param_4) = 0;
  puVar3 = (undefined8 *)FUN_00547cac(&local_78,&DAT_001ca603,1);
  uStack_58 = puVar3[1];
  local_60 = (void *)*puVar3;
  local_50 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  uVar1 = *(ulong *)(param_2 + 0x88);
  puVar3 = *(undefined8 **)(param_2 + 0x80);
  if (-1 < (char)*(byte *)(param_2 + 0x97)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0x97);
    puVar3 = (undefined8 *)(param_2 + 0x80);
  }
  puVar3 = (undefined8 *)FUN_00547cac(&local_60,puVar3,uVar1);
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar4 = puVar3[2];
  puVar3[2] = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[2] = uVar4;
  if (local_50 < 0) {
    operator_delete(local_60);
  }
  if ((long)local_68 < 0) {
    operator_delete(local_78);
  }
  return;
}


// ===== 00cfb9d8  FUN_00cfb9d8 =====

undefined8 FUN_00cfb9d8(void)

{
  return 0;
}


// ===== 00cfb9e4  FUN_00cfb9e4 =====

undefined8 FUN_00cfb9e4(void)

{
  return 0;
}


// ===== 00cfb9f0  FUN_00cfb9f0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00cfb9f0(long *param_1,long param_2,undefined8 param_3,int param_4,
                 undefined8 *******param_5,ulong param_6)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *******__dest;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  void *local_228 [2];
  char cStack_211;
  void *local_210 [2];
  char cStack_1f9;
  void *local_1f8 [2];
  char cStack_1e1;
  undefined1 uStack_1d9;
  char *local_1d8;
  undefined8 local_1d0;
  undefined1 *local_1c8;
  void **local_1c0;
  char **ppcStack_1b8;
  char *local_1b0;
  void ***pppvStack_1a8;
  void **local_1a0;
  char **ppcStack_198;
  undefined8 *******local_190;
  undefined1 *puStack_188;
  undefined8 local_180;
  undefined1 *puStack_178;
  undefined1 *puStack_170;
  undefined1 *puStack_168;
  undefined1 *local_160;
  undefined1 *puStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined1 *local_110;
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
  undefined8 *******local_80;
  ulong uStack_78;
  
  lVar8 = (long)*(char *)(param_2 + 0x3f);
  uVar3 = 0x111;
  if (*(short *)(param_2 + 0x20) != 1) {
    uVar3 = 0x310;
  }
  if (lVar8 < 0) {
    lVar7 = *(long *)(param_2 + 0x28);
    lVar8 = *(long *)(param_2 + 0x30);
  }
  else {
    lVar7 = param_2 + 0x28;
  }
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
  local_80 = param_5;
  uStack_78 = param_6;
  FUN_00c69b48(&local_100,uVar3,lVar7,lVar8);
  uVar4 = FUN_00c6bafc();
  FUN_00c6ceac(uVar4,param_4);
  if (0x7ffffffffffffff6 < param_6) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_6 < 0x17) {
    local_180 = (undefined1 *)CONCAT17((char)param_6,(undefined7)local_180);
    __dest = &local_190;
  }
  else {
    uVar5 = (param_6 & 0x7ffffffffffffff8) + 8;
    uVar1 = 0x19;
    if (uVar5 != 0x18) {
      uVar1 = uVar5;
    }
    __dest = (undefined8 *******)operator_new(uVar1);
    local_180 = (undefined1 *)(uVar1 | 0x8000000000000000);
    local_190 = __dest;
    puStack_188 = (undefined1 *)param_6;
  }
  if ((undefined8 *******)((long)__dest + param_6) < __dest) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((__dest <= param_5) && (param_5 < (undefined8 *******)((long)__dest + param_6))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(__dest,param_5,param_6);
  *(undefined1 *)((long)__dest + param_6) = 0;
  FUN_00c6ced8(uVar4,&local_190);
  if ((long)local_180 < 0) {
    operator_delete(local_190);
  }
  FUN_00c69d80(&local_100,uVar4);
  if (param_4 - 0x192U < 0xfffffffe) {
    if (*(short *)(param_2 + 0x20) == 0x200) goto LAB_00cfbba8;
    if (*(short *)(param_2 + 0x20) == 1) {
      lVar8 = (long)*(char *)((long)param_1 + 0xaf);
      if (lVar8 < 0) {
        plVar6 = (long *)param_1[0x13];
        lVar8 = param_1[0x14];
      }
      else {
        plVar6 = param_1 + 0x13;
      }
      FUN_00c6a5dc(&local_100,plVar6,lVar8);
    }
    else {
      lVar8 = (long)*(char *)((long)param_1 + 0xaf);
      if (lVar8 < 0) {
        plVar6 = (long *)param_1[0x13];
        lVar8 = param_1[0x14];
      }
      else {
        plVar6 = param_1 + 0x13;
      }
      FUN_00c6a9a8(&local_100,plVar6,lVar8);
    }
  }
  if (*(short *)(param_2 + 0x20) == 1) {
    FUN_00c6ae6c(&local_100);
  }
LAB_00cfbba8:
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  local_120 = &DAT_aaaaaaaaaaaaaaaa;
  local_110 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_008792d8(&local_120);
  FUN_00c6a9c0(&local_100,&local_120);
  puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
  local_180 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_170 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
  local_160 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_150 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
  local_140 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
  local_190 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
  uVar3 = (**(code **)(*param_1 + 0x170))(param_1);
  FUN_00897b90(&local_190,uVar3);
  uStack_150 = (undefined1 *)CONCAT44(3,(undefined4)uStack_150);
  (**(code **)(*param_1 + 0x90))(param_1,local_110,local_120,param_3,&local_190,0);
  uVar5 = FUN_00417e08();
  if ((uVar5 & 1) == 0) {
    local_1d8 = "../../p2p/base/port.cc";
    local_1d0 = 0x18f1;
    local_1c8 = &uStack_1d9;
    (**(code **)(*param_1 + 0x110))(local_1f8,param_1);
    ppcStack_1b8 = &local_1d8;
    pppvStack_1a8 = &local_1c0;
    local_1b0 = ": Sending STUN ";
    local_1c0 = local_1f8;
    FUN_00c6dac8(local_210,(ulong)local_e0 & 0xffff);
    ppcStack_198 = &local_1b0;
    local_1a0 = local_210;
    FUN_007e924c(local_228,param_3);
    FUN_00623bb0(&DAT_0025a6a3,*pppvStack_1a8[1],*(undefined4 *)(pppvStack_1a8[1] + 1),
                 *pppvStack_1a8,local_1b0,local_1a0,": reason=",&local_80,&DAT_0019fec4,local_228);
    if (cStack_211 < '\0') {
      operator_delete(local_228[0]);
    }
    if (cStack_1f9 < '\0') {
      operator_delete(local_210[0]);
    }
    if (cStack_1e1 < '\0') {
      operator_delete(local_1f8[0]);
    }
  }
  FUN_00897c8c(&local_190);
  puVar2 = local_110;
  local_110 = (undefined1 *)0x0;
  if (puVar2 != (undefined1 *)0x0) {
    operator_delete__(puVar2);
  }
  FUN_00c6e5fc(&local_100);
  return;
}


// ===== 00cfbda0  FUN_00cfbda0 =====

void FUN_00cfbda0(long param_1)

{
  if (*(int *)(param_1 + 0xfc) != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0xfc) = 1;
  return;
}


// ===== 00cfbdbc  FUN_00cfbdbc =====

void FUN_00cfbdbc(long param_1)

{
  *(undefined4 *)(param_1 + 0xfc) = 2;
  FUN_00cf8c18(param_1,0);
  return;
}


// ===== 00cfbdd0  FUN_00cfbdd0 =====

void FUN_00cfbdd0(long *param_1)

{
  ulong uVar1;
  long **local_38 [2];
  char cStack_21;
  long *local_8;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    (**(code **)(*param_1 + 0x110))(local_38,param_1);
    FUN_00623bb0(&DAT_00223e94,"../../p2p/base/port.cc",0x1f19,local_38,": Port deleted");
    if (cStack_21 < '\0') {
      operator_delete(local_38[0]);
    }
  }
  local_38[0] = &local_8;
  local_8 = param_1;
  FUN_007b6160(param_1 + 0x31,local_38,FUN_00cfd774);
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  return;
}


// ===== 00cfbe88  FUN_00cfbe88 =====

void FUN_00cfbe88(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *local_38;
  code *pcStack_30;
  code *local_28;
  
  local_38 = (undefined8 *)operator_new(0x20);
  uVar2 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  lVar1 = param_2[3];
  local_38[1] = param_2[1];
  *local_38 = uVar2;
  local_38[3] = uVar4;
  local_38[2] = uVar3;
  if (*(long *)(lVar1 + 8) != 0) {
    param_2[2] = 0;
    param_2[3] = &DAT_001fbc50;
  }
  pcStack_30 = FUN_00cfd724;
  local_28 = FUN_00cfd734;
  FUN_007b5c0c(param_1 + 0x188,&local_38);
  return;
}


// ===== 00cfbf04  FUN_00cfbf04 =====

void FUN_00cfbf04(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *local_48;
  code *pcStack_40;
  code *local_38;
  
  local_48 = (undefined8 *)operator_new(0x20);
  uVar2 = *param_3;
  uVar4 = param_3[3];
  uVar3 = param_3[2];
  lVar1 = param_3[3];
  local_48[1] = param_3[1];
  *local_48 = uVar2;
  local_48[3] = uVar4;
  local_48[2] = uVar3;
  if (*(long *)(lVar1 + 8) != 0) {
    param_3[2] = 0;
    param_3[3] = &DAT_001fbc50;
  }
  pcStack_40 = FUN_00cfd724;
  local_38 = FUN_00cfd734;
  FUN_007b5b08(param_1 + 0x188,param_2,&local_48);
  return;
}


// ===== 00cfbf90  FUN_00cfbf90 =====

/* WARNING: Removing unreachable block (ram,0x00cfc0e8) */
/* WARNING: Removing unreachable block (ram,0x00cfc084) */
/* WARNING: Removing unreachable block (ram,0x00cfc1bc) */

void FUN_00cfbf90(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 **local_78;
  ulong uStack_70;
  byte bStack_61;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 **local_48;
  ulong uStack_40;
  ulong local_38;
  
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  FUN_00547cac(&local_60,"Port[",5);
  FUN_00625774(&local_78,param_2 & 0xffffffff);
  pppuVar2 = (undefined8 ***)local_78;
  if (-1 < (char)bStack_61) {
    uStack_70 = (ulong)bStack_61;
    pppuVar2 = &local_78;
  }
  FUN_00547cac(&local_60,pppuVar2,uStack_70);
  FUN_00547cac(&local_60,&DAT_001ca603,1);
  lVar4 = (long)*(char *)(param_2 + 0x77);
  if (lVar4 < 0) {
    lVar3 = *(long *)(param_2 + 0x60);
    lVar4 = *(long *)(param_2 + 0x68);
  }
  else {
    lVar3 = param_2 + 0x60;
  }
  FUN_00547cac(&local_60,lVar3,lVar4);
  FUN_00547cac(&local_60,&DAT_001ca603,1);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,*(undefined4 *)(param_2 + 0x78));
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  FUN_00547cac(&local_60,&DAT_001ca603,1);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005fa03c(&local_48,0x16,*(undefined4 *)(param_2 + 0x7c));
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  FUN_00547cac(&local_60,&DAT_001ca603,1);
  auVar5 = FUN_00afdb88(*(undefined4 *)(param_2 + 0x48));
  FUN_00547cac(&local_60,auVar5._0_8_,auVar5._8_8_);
  FUN_00547cac(&local_60,&DAT_001ca603,1);
  FUN_00bcc3dc(&local_48,*(undefined8 *)(param_2 + 0x50));
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  FUN_00547cac(&local_60,&DAT_0019fa9e,1);
  if ((char)bStack_61 < '\0') {
    operator_delete(local_78);
  }
  param_1[1] = uStack_58;
  *param_1 = local_60;
  param_1[2] = local_50;
  return;
}


// ===== 00cfc1e8  FUN_00cfc1e8 =====

void FUN_00cfc1e8(long param_1)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  ushort uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  char *local_88;
  undefined8 uStack_80;
  undefined1 *local_78;
  char *pcStack_70;
  char **local_68;
  long local_60;
  char **ppcStack_58;
  undefined *local_50;
  long *plStack_48;
  ulong local_40;
  undefined **ppuStack_38;
  undefined1 uStack_11;
  
  uVar4 = FUN_00bccb90(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x10));
  if ((int)*(short *)(param_1 + 0xfa) == (uint)uVar4) {
    return;
  }
  uVar5 = FUN_00417e08();
  if ((uVar5 & 1) == 0) {
    local_78 = &uStack_11;
    local_88 = "../../p2p/base/port.cc";
    uStack_80 = 0x1d11;
    local_60 = (long)*(short *)(param_1 + 0xfa);
    local_68 = &local_88;
    pcStack_70 = "Network cost changed from ";
    ppuStack_38 = &local_50;
    ppcStack_58 = &pcStack_70;
    plStack_48 = &local_60;
    local_50 = &DAT_0019fec4;
    local_40 = (ulong)uVar4;
    FUN_00623bb0(&DAT_0025a6b3,"../../p2p/base/port.cc",0x1d11);
  }
  lVar6 = *(long *)(param_1 + 0xb0);
  lVar1 = *(long *)(param_1 + 0xb8);
  *(ushort *)(param_1 + 0xfa) = uVar4;
  if (lVar6 != lVar1) {
    lVar7 = (lVar1 + -0x198) - lVar6;
    if (lVar7 != 0) {
      uVar5 = ((ulong)(lVar7 * 0x1afafafafafafafb) >> 3) + 1;
      uVar8 = uVar5 & 0x3ffffffffffffffe;
      lVar7 = lVar6 + (uVar5 & 0x3ffffffffffffffe) * 0x198;
      do {
        *(ushort *)(lVar6 + 0x17a) = uVar4;
        uVar8 = uVar8 - 2;
        *(ushort *)(lVar6 + 0x312) = uVar4;
        lVar6 = lVar6 + 0x330;
      } while (uVar8 != 0);
      lVar6 = lVar7;
      if (uVar5 == (uVar5 & 0x3ffffffffffffffe)) goto LAB_00cfc35c;
    }
    do {
      *(ushort *)(lVar6 + 0x17a) = uVar4;
      lVar6 = lVar6 + 0x198;
    } while (lVar6 != lVar1);
  }
LAB_00cfc35c:
  plVar9 = *(long **)(param_1 + 200);
  while (plVar9 != (long *)(param_1 + 0xd0)) {
    FUN_00c67f88(plVar9[0xd],*(undefined2 *)(param_1 + 0xfa));
    plVar2 = (long *)plVar9[1];
    plVar10 = plVar9;
    if ((long *)plVar9[1] == (long *)0x0) {
      do {
        plVar9 = (long *)plVar10[2];
        bVar3 = plVar10 != (long *)*plVar9;
        plVar10 = plVar9;
      } while (bVar3);
    }
    else {
      do {
        plVar9 = plVar2;
        plVar2 = (long *)*plVar9;
      } while ((long *)*plVar9 != (long *)0x0);
    }
  }
  return;
}


// ===== 00cfc3a8  FUN_00cfc3a8 =====

void FUN_00cfc3a8(long param_1)

{
  *(undefined1 *)(param_1 + 0xe4) = 1;
  return;
}


// ===== 00cfc3b8  FUN_00cfc3b8 =====

undefined4 FUN_00cfc3b8(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  lVar1 = (**(code **)(*param_2 + 0x18))(param_2);
  plVar5 = param_1 + 0x1a;
  if ((long *)*plVar5 != (long *)0x0) {
    plVar4 = (long *)*plVar5;
    plVar7 = plVar5;
    do {
      while (plVar6 = plVar4, uVar2 = FUN_007e97f4(lVar1 + 0x50,plVar6 + 4), (uVar2 & 1) != 0) {
        plVar4 = (long *)*plVar6;
        plVar7 = plVar6;
        if ((long *)*plVar6 == (long *)0x0) {
          return 0;
        }
      }
      uVar2 = FUN_007e97f4(plVar6 + 4,lVar1 + 0x50);
      if ((uVar2 & 1) == 0) {
        if ((long *)*plVar7 == (long *)0x0) {
          return 0;
        }
        if ((long *)*plVar7 != plVar5) {
          FUN_00cfd790(param_1 + 0x19);
          (**(code **)(*param_1 + 0x1c0))(param_1,param_2);
          if (param_1[0x1b] == 0) {
            uVar3 = (**(code **)(*(long *)param_1[3] + 0x10))();
            uVar2 = uVar3 / 1000;
            if (499 < uVar3 % 1000) {
              uVar2 = uVar2 + 1;
            }
            if ((uVar3 & 0x8000000000000000) != 0) {
              uVar2 = -(-uVar3 / 1000) - (ulong)(500 < -uVar3 % 1000);
            }
            param_1[0x20] = uVar2;
            FUN_00cf8c18(param_1,1);
            return 1;
          }
          return 1;
        }
        return 0;
      }
      plVar4 = (long *)plVar6[1];
      plVar7 = plVar6 + 1;
    } while (plVar4 != (long *)0x0);
  }
  return 0;
}


// ===== 00cfc52c  FUN_00cfc52c =====

void FUN_00cfc52c(long param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar1 = FUN_00cfc3b8();
  if ((uVar1 & 1) != 0) {
    FUN_00c653c4(param_2);
    if ((param_3 & 1) == 0) {
      if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00cfc5d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_2 + 8))(param_2);
        return;
      }
    }
    else {
      local_40 = FUN_00cfd858;
      pcStack_38 = FUN_00cfd850;
      local_50[0] = param_2;
      (**(code **)(**(long **)(param_1 + 0x30) + 8))
                (*(long **)(param_1 + 0x30),local_50,&uStack_11,&uStack_12);
      (*local_40)(0,local_50,local_50);
    }
  }
  return;
}


// ===== 00cfc5f0  FUN_00cfc5f0 =====

void FUN_00cfc5f0(long *param_1,long param_2)

{
  undefined2 uVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  
  uVar2 = (**(code **)(*param_1 + 0x80))();
  if (uVar2 < 5) {
    uVar4 = *(undefined4 *)(&DAT_0025a6c0 + (ulong)uVar2 * 4);
  }
  else {
    uVar4 = 0;
  }
  *(undefined4 *)(param_2 + 8) = uVar4;
  lVar3 = (**(code **)(*param_1 + 0x18))(param_1);
  uVar1 = *(undefined2 *)(lVar3 + 0xae);
  *(undefined1 *)(param_2 + 0xe) = 1;
  *(undefined2 *)(param_2 + 0xc) = uVar1;
  return;
}


// ===== 00cfc664  FUN_00cfc664 =====

void FUN_00cfc664(void *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  code *pcVar6;
  void *local_90;
  long *plStack_88;
  undefined1 local_80 [7];
  char cStack_79;
  code *local_70;
  long lStack_68;
  long *local_60 [2];
  code *local_50;
  code *pcStack_48;
  long *local_28;
  
  if (*(long **)((long)param_1 + 0x40) == (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00cfc820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x18))(param_3,0);
    return;
  }
  plVar2 = (long *)(**(code **)(**(long **)((long)param_1 + 0x40) + 0x10))();
  local_28 = plVar2;
  uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
  if ((uVar3 & 1) == 0) {
    (**(code **)(param_3 + 0x18))(param_3,0);
  }
  else {
    uVar3 = FUN_0044075c();
    if ((uVar3 & 1) == 0) {
      FUN_007e9004(&local_90,param_2);
      FUN_00623bb0(&DAT_001f4e90,"../../p2p/base/port.cc",0x2010,
                   "Asynchronously requesting LNA permission.",&local_90);
      plVar2 = local_28;
      if (cStack_79 < '\0') {
        operator_delete(local_90);
        plVar2 = local_28;
      }
    }
    plVar4 = *(long **)((long)param_1 + 0x118);
    if (plVar4 < *(long **)((long)param_1 + 0x120)) {
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      local_28 = (long *)0x0;
      plVar5 = plVar4 + 1;
      *plVar4 = (long)plVar2;
    }
    else {
      plVar5 = (long *)FUN_00cfcfbc((long)param_1 + 0x110,&local_28);
    }
    *(long **)((long)param_1 + 0x118) = plVar5;
    local_90 = param_1;
    plStack_88 = plVar2;
    (**(code **)(param_3 + 0x10))(1,param_3,local_80);
    lStack_68 = *(long *)(param_3 + 0x18);
    pcVar6 = *(code **)(param_3 + 0x10);
    *(code **)(param_3 + 0x10) = FUN_00433984;
    *(undefined8 *)(param_3 + 0x18) = 0;
    local_70 = pcVar6;
    plVar4 = (long *)operator_new(0x30);
    plVar4[1] = (long)plStack_88;
    *plVar4 = (long)local_90;
    (*pcVar6)(1,local_80,plVar4 + 2);
    lVar1 = lStack_68;
    pcVar6 = local_70;
    local_70 = FUN_00433984;
    lStack_68 = 0;
    plVar4[5] = lVar1;
    plVar4[4] = (long)pcVar6;
    local_50 = FUN_00cfd92c;
    pcStack_48 = FUN_00cfd8a0;
    local_60[0] = plVar4;
    (**(code **)(*plVar2 + 0x18))(plVar2,param_2,local_60);
    (*local_50)(0,local_60,local_60);
    (*local_70)(0,local_80,local_80);
    plVar2 = local_28;
  }
  if (plVar2 != (long *)0x0) {
    local_28 = (long *)0x0;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  return;
}


// ===== 00cfc88c  FUN_00cfc88c =====

void FUN_00cfc88c(long param_1,long param_2,long param_3,undefined4 param_4)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  
  plVar2 = *(long **)(param_1 + 0x110);
  plVar7 = *(long **)(param_1 + 0x118);
  if (plVar2 == plVar7) {
LAB_00cfc960:
    plVar6 = plVar2;
    if (plVar2 == plVar7) goto LAB_00cfc96c;
  }
  else {
    uVar4 = (long)plVar7 + (-8 - (long)plVar2);
    uVar3 = (uint)uVar4;
    if ((~uVar3 & 0x18) != 0) {
      uVar5 = (ulong)((uVar3 >> 3) + 1) & 3;
      do {
        if (*plVar2 == param_2) goto LAB_00cfc960;
        uVar5 = uVar5 - 1;
        plVar2 = plVar2 + 1;
      } while (uVar5 != 0);
    }
    plVar6 = plVar7;
    if (0x17 < uVar4) {
      plVar2 = plVar2 + 2;
      do {
        if (plVar2[-2] == param_2) {
          plVar2 = plVar2 + -2;
          goto LAB_00cfc960;
        }
        if (plVar2[-1] == param_2) {
          plVar2 = plVar2 + -1;
          goto LAB_00cfc960;
        }
        if (*plVar2 == param_2) goto LAB_00cfc960;
        if (plVar2[1] == param_2) {
          plVar2 = plVar2 + 1;
          goto LAB_00cfc960;
        }
        plVar1 = plVar2 + 2;
        plVar2 = plVar2 + 4;
      } while (plVar1 != plVar7);
    }
LAB_00cfc96c:
    uVar4 = FUN_004249b0();
    plVar2 = plVar7;
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../p2p/base/port.cc",0x20d3,
                   "Unexpected LocalNetworkAccessPermission return");
    }
  }
  plVar7 = *(long **)(param_1 + 0x118);
  if (plVar2 == plVar7) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:1160: libc++ Hardening assertion __position != end() failed: vector::erase(iterator) called with a non-dereferenceable iterator\n"
              );
  }
  plVar2 = plVar6 + 1;
  if (plVar6 + 1 == plVar7) {
    if (plVar6 == plVar7) goto LAB_00cfca28;
  }
  else {
    do {
      plVar6 = plVar2;
      plVar2 = (long *)plVar6[-1];
      plVar6[-1] = *plVar6;
      *plVar6 = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      plVar2 = plVar6 + 1;
    } while (plVar6 + 1 != plVar7);
    plVar7 = *(long **)(param_1 + 0x118);
    if (plVar6 == plVar7) goto LAB_00cfca28;
  }
  do {
    plVar7 = plVar7 + -1;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    plVar2 = (long *)*plVar7;
    *plVar7 = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
  } while (plVar7 != plVar6);
LAB_00cfca28:
  *(long **)(param_1 + 0x118) = plVar6;
                    /* WARNING: Could not recover jumptable at 0x00cfca4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x18))(param_3,param_4);
  return;
}


// ===== 00cfca78  FUN_00cfca78 =====

void FUN_00cfca78(long param_1,long param_2)

{
  (**(code **)(param_1 + 0x240))(0,param_1 + 0x230,param_1 + 0x230);
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(code **)(param_1 + 0x240) = FUN_00433984;
  (**(code **)(param_2 + 0x10))(1,param_2,param_1 + 0x230);
  *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)(param_2 + 0x18);
  *(code **)(param_2 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}


// ===== 00cfcaf4  FUN_00cfcaf4 =====

void FUN_00cfcaf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00cfcb00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x248))(param_1 + 0x230);
  return;
}


// ===== 00cfcb04  FUN_00cfcb04 =====

void FUN_00cfcb04(long param_1,long param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *local_48;
  code *pcStack_40;
  code *local_38;
  
  pvVar1 = operator_new(0x20);
  (**(code **)(param_2 + 0x10))(1,param_2,pvVar1);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(code **)(param_2 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_2 + 0x18) = 0;
  pcStack_40 = FUN_00cfd9a0;
  *(undefined8 *)((long)pvVar1 + 0x18) = uVar3;
  *(undefined8 *)((long)pvVar1 + 0x10) = uVar2;
  local_38 = FUN_00cfd9b0;
  local_48 = pvVar1;
  FUN_007b5c0c(param_1 + 0x128,&local_48);
  return;
}


// ===== 00cfcb94  FUN_00cfcb94 =====

void FUN_00cfcb94(long param_1,undefined8 param_2,long param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *local_48;
  code *pcStack_40;
  code *local_38;
  
  pvVar1 = operator_new(0x20);
  (**(code **)(param_3 + 0x10))(1,param_3,pvVar1);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  *(code **)(param_3 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_3 + 0x18) = 0;
  pcStack_40 = FUN_00cfd9a0;
  *(undefined8 *)((long)pvVar1 + 0x18) = uVar3;
  *(undefined8 *)((long)pvVar1 + 0x10) = uVar2;
  local_38 = FUN_00cfd9b0;
  local_48 = pvVar1;
  FUN_007b5b08(param_1 + 0x128,param_2,&local_48);
  return;
}


// ===== 00cfcc2c  FUN_00cfcc2c =====

void FUN_00cfcc2c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined1 local_5c [4];
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 *puStack_40;
  undefined8 local_38;
  undefined4 *puStack_30;
  undefined8 *local_28;
  undefined8 uStack_20;
  undefined1 *local_18;
  
  puStack_40 = &local_48;
  local_28 = &local_58;
  puStack_30 = &local_4c;
  local_18 = local_5c;
  local_5c[0] = param_7;
  local_58 = param_5;
  local_4c = param_4;
  local_48 = param_2;
  local_38 = param_3;
  uStack_20 = param_6;
  FUN_007b6160(param_1 + 0x128,&puStack_40,FUN_00cfd9f0);
  return;
}


// ===== 00cfcc8c  FUN_00cfcc8c =====

void FUN_00cfcc8c(long param_1,long param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *local_48;
  code *pcStack_40;
  code *local_38;
  
  pvVar1 = operator_new(0x20);
  (**(code **)(param_2 + 0x10))(1,param_2,pvVar1);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(code **)(param_2 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_2 + 0x18) = 0;
  pcStack_40 = FUN_00cfda20;
  *(undefined8 *)((long)pvVar1 + 0x18) = uVar3;
  *(undefined8 *)((long)pvVar1 + 0x10) = uVar2;
  local_38 = FUN_00cfda30;
  local_48 = pvVar1;
  FUN_007b5c0c(param_1 + 0x148,&local_48);
  return;
}


// ===== 00cfcd1c  FUN_00cfcd1c =====

void FUN_00cfcd1c(long param_1,undefined8 param_2,long param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *local_48;
  code *pcStack_40;
  code *local_38;
  
  pvVar1 = operator_new(0x20);
  (**(code **)(param_3 + 0x10))(1,param_3,pvVar1);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  *(code **)(param_3 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_3 + 0x18) = 0;
  pcStack_40 = FUN_00cfda20;
  *(undefined8 *)((long)pvVar1 + 0x18) = uVar3;
  *(undefined8 *)((long)pvVar1 + 0x10) = uVar2;
  local_38 = FUN_00cfda30;
  local_48 = pvVar1;
  FUN_007b5b08(param_1 + 0x148,param_2,&local_48);
  return;
}


// ===== 00cfcdb4  FUN_00cfcdb4 =====

void FUN_00cfcdb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 *local_30;
  undefined8 *puStack_28;
  undefined8 *local_20;
  undefined8 uStack_18;
  
  local_30 = &uStack_38;
  puStack_28 = &local_40;
  local_20 = &local_48;
  local_48 = param_4;
  local_40 = param_3;
  uStack_38 = param_2;
  uStack_18 = param_5;
  FUN_007b6160(param_1 + 0x148,&local_30,FUN_00cfda70);
  return;
}


// ===== 00cfce04  FUN_00cfce04 =====

void FUN_00cfce04(long param_1,long param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *local_48;
  code *pcStack_40;
  code *local_38;
  
  pvVar1 = operator_new(0x20);
  (**(code **)(param_2 + 0x10))(1,param_2,pvVar1);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(code **)(param_2 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_2 + 0x18) = 0;
  pcStack_40 = FUN_00c314ac;
  *(undefined8 *)((long)pvVar1 + 0x18) = uVar3;
  *(undefined8 *)((long)pvVar1 + 0x10) = uVar2;
  local_38 = FUN_00c314bc;
  local_48 = pvVar1;
  FUN_007b5c0c(param_1 + 0x168,&local_48);
  return;
}


// ===== 00cfce94  FUN_00cfce94 =====

void FUN_00cfce94(long param_1,undefined8 param_2,long param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *local_48;
  code *pcStack_40;
  code *local_38;
  
  pvVar1 = operator_new(0x20);
  (**(code **)(param_3 + 0x10))(1,param_3,pvVar1);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  *(code **)(param_3 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_3 + 0x18) = 0;
  pcStack_40 = FUN_00c314ac;
  *(undefined8 *)((long)pvVar1 + 0x18) = uVar3;
  *(undefined8 *)((long)pvVar1 + 0x10) = uVar2;
  local_38 = FUN_00c314bc;
  local_48 = pvVar1;
  FUN_007b5b08(param_1 + 0x168,param_2,&local_48);
  return;
}


// ===== 00cfcf2c  FUN_00cfcf2c =====

void FUN_00cfcf2c(long param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_2;
  FUN_007b6160(param_1 + 0x168,&local_18,FUN_00c464b4);
  return;
}


// ===== 00cfcf64  FUN_00cfcf64 =====

void FUN_00cfcf64(void)

{
  return;
}


// ===== 00cfcf6c  FUN_00cfcf6c =====

void FUN_00cfcf6c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00cfcf78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


// ===== 00cfcf7c  FUN_00cfcf7c =====

void FUN_00cfcf7c(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  (**(code **)((long)pvVar1 + 0x10))(0,pvVar1,pvVar1);
  operator_delete(pvVar1);
  return;
}


// ===== 00cfcfbc  FUN_00cfcfbc =====

undefined8 * FUN_00cfcfbc(long *param_1,undefined8 *param_2)

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
    FUN_00cfd0b4();
LAB_00cfd0b0:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
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
    if (uVar6 >> 0x3d != 0) goto LAB_00cfd0b0;
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


// ===== 00cfd0b4  FUN_00cfd0b4 =====

void FUN_00cfd0b4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00cfd0cc  FUN_00cfd0cc =====

void FUN_00cfd0cc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00cfd0cc(param_1,*param_2);
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


// ===== 00cfd160  FUN_00cfd160 =====

void FUN_00cfd160(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00cfd170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x168))();
  return;
}


// ===== 00cfd174  FUN_00cfd174 =====

void FUN_00cfd174(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long **local_c8;
  long lStack_c0;
  char cStack_b1;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  long *local_38;
  
  lVar9 = *param_1;
  uVar2 = *param_3;
  uVar3 = param_3[1];
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  uVar5 = FUN_007e8eb4(lVar9 + 0x60);
  FUN_007e8ad0(&local_80,uVar2,uVar3,uVar5);
  FUN_007e8e8c(&local_80,param_2);
  FUN_007e8d84(lVar9 + 0x60,&local_80);
  FUN_007e8a64(&local_c8);
  FUN_007e8d84(lVar9 + 0x128,&local_c8);
  if (cStack_b1 < '\0') {
    operator_delete(local_c8);
  }
  uVar6 = FUN_009881a4(lVar9);
  if (((uVar6 & 1) != 0) && (*(long *)(lVar9 + 8) != 0)) {
    lVar1 = lVar9 + 0x10;
    uVar6 = FUN_009881a4(lVar9);
    lVar7 = *(long *)(lVar9 + 8);
    if ((uVar6 & 1) == 0) {
      lVar7 = 0;
    }
    *(undefined4 *)(lVar7 + 0x108) = 2;
    uVar6 = FUN_009881a4(lVar9);
    plVar8 = *(long **)(lVar9 + 8);
    uVar4 = *(undefined1 *)(lVar9 + 0x1a8);
    if ((uVar6 & 1) == 0) {
      plVar8 = (long *)0x0;
    }
    uVar6 = plVar8[0x17];
    if (uVar6 < (ulong)plVar8[0x18]) {
      if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_00afef10(uVar6,lVar1);
      lVar9 = uVar6 + 0x198;
    }
    else {
      lVar9 = FUN_00b07478(plVar8 + 0x16,lVar1);
    }
    plVar8[0x17] = lVar9;
    local_c8 = &local_38;
    lStack_c0 = lVar1;
    local_38 = plVar8;
    FUN_007b6160(plVar8 + 0x39,&local_c8,FUN_00cee12c);
    (**(code **)(*plVar8 + 0x1b8))(plVar8,uVar4);
  }
  if ((long)local_70 < 0) {
    operator_delete(local_80);
  }
  return;
}


// ===== 00cfd304  FUN_00cfd304 =====

void * FUN_00cfd304(long param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1b0);
  FUN_00988170(pvVar1,param_1);
  *(undefined8 *)((long)pvVar1 + 8) = *(undefined8 *)(param_1 + 8);
  FUN_00afef10((long)pvVar1 + 0x10,param_1 + 0x10);
  *(undefined1 *)((long)pvVar1 + 0x1a8) = *(undefined1 *)(param_1 + 0x1a8);
  return pvVar1;
}


// ===== 00cfd35c  FUN_00cfd35c =====

void FUN_00cfd35c(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_00aff0f8((long)param_1 + 0x10);
    FUN_00988344(param_1);
    operator_delete(param_1);
    return;
  }
  return;
}


// ===== 00cfd3a4  FUN_00cfd3a4 =====

void FUN_00cfd3a4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00cfd3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


// ===== 00cfd3b4  FUN_00cfd3b4 =====

void FUN_00cfd3b4(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  (**(code **)((long)pvVar1 + 0x10))(0,pvVar1,pvVar1);
  operator_delete(pvVar1);
  return;
}


// ===== 00cfd3f4  FUN_00cfd3f4 =====

void FUN_00cfd3f4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00cfd400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}


// ===== 00cfd404  FUN_00cfd404 =====

void FUN_00cfd404(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  if (*(code **)(param_1[3] + 8) != (code *)0x0) {
    (**(code **)(param_1[3] + 8))(*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00cfd444  FUN_00cfd444 =====

void FUN_00cfd444(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00cfd45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*(undefined8 *)*param_1,param_1[1]);
  return;
}


// ===== 00cfd460  FUN_00cfd460 =====

void FUN_00cfd460(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00cfd46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


// ===== 00cfd470  FUN_00cfd470 =====

void FUN_00cfd470(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  (**(code **)((long)pvVar1 + 0x10))(0,pvVar1,pvVar1);
  operator_delete(pvVar1);
  return;
}


// ===== 00cfd4b0  FUN_00cfd4b0 =====

undefined1  [16] FUN_00cfd4b0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  
  plVar6 = (long *)*param_1;
  plVar7 = plVar6 + 1;
  plVar8 = plVar7;
  plVar1 = (long *)*plVar7;
joined_r0x00cfd4d8:
  do {
    if (plVar1 == (long *)0x0) {
LAB_00cfd528:
      puVar3 = (undefined8 *)operator_new(0x70);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = 0;
        if (puVar3 + 4 != (undefined8 *)0x0) {
          FUN_007e8cec(puVar3 + 4,param_3);
          uVar5 = *(undefined8 *)(param_3 + 0x48);
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = plVar8;
          puVar3[0xd] = uVar5;
          *plVar7 = (long)puVar3;
          puVar4 = puVar3;
          if (*(long *)*plVar6 != 0) {
            *plVar6 = *(long *)*plVar6;
            puVar4 = (undefined8 *)*plVar7;
          }
          FUN_005d5b94(plVar6[1],puVar4);
          uVar5 = 1;
          plVar6[2] = plVar6[2] + 1;
LAB_00cfd58c:
          auVar9._8_8_ = uVar5;
          auVar9._0_8_ = puVar3;
          return auVar9;
        }
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar2 = FUN_007e97f4(param_2,plVar1 + 4);
    plVar8 = plVar1;
    if ((uVar2 & 1) != 0) {
      plVar7 = plVar1;
      plVar1 = (long *)*plVar1;
      goto joined_r0x00cfd4d8;
    }
    uVar2 = FUN_007e97f4(plVar1 + 4,param_2);
    if ((uVar2 & 1) == 0) {
      puVar3 = (undefined8 *)*plVar7;
      if (puVar3 != (undefined8 *)0x0) {
        uVar5 = 0;
        goto LAB_00cfd58c;
      }
      goto LAB_00cfd528;
    }
    plVar7 = plVar1 + 1;
    plVar1 = (long *)*plVar7;
  } while( true );
}


// ===== 00cfd5cc  FUN_00cfd5cc =====

void FUN_00cfd5cc(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  uVar1 = FUN_009881a4(lVar3);
  if (((uVar1 & 1) != 0) && (*(long *)(lVar3 + 8) != 0)) {
    uVar1 = FUN_009881a4(lVar3);
    lVar3 = *(long *)(lVar3 + 8);
    if ((uVar1 & 1) == 0) {
      lVar3 = 0;
    }
    if (((*(uint *)(lVar3 + 0xfc) & 0xfffffffd) == 0) && (*(long *)(lVar3 + 0xd8) == 0)) {
      uVar2 = (**(code **)(**(long **)(lVar3 + 0x18) + 0x10))();
      uVar1 = uVar2 / 1000;
      if (499 < uVar2 % 1000) {
        uVar1 = uVar1 + 1;
      }
      if ((uVar2 & 0x8000000000000000) != 0) {
        uVar1 = -(-uVar2 / 1000) - (ulong)(500 < -uVar2 % 1000);
      }
      if ((long)*(int *)(lVar3 + 0xe0) <= (long)(uVar1 - *(long *)(lVar3 + 0x100))) {
        FUN_00cfbdd0(lVar3);
        return;
      }
    }
  }
  return;
}


// ===== 00cfd6bc  FUN_00cfd6bc =====

void FUN_00cfd6bc(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xcfd724);
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


// ===== 00cfd724  FUN_00cfd724 =====

void FUN_00cfd724(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00cfd730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}


// ===== 00cfd734  FUN_00cfd734 =====

void FUN_00cfd734(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  if (*(code **)(param_1[3] + 8) != (code *)0x0) {
    (**(code **)(param_1[3] + 8))(*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00cfd774  FUN_00cfd774 =====

void FUN_00cfd774(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00cfd78c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*(undefined8 *)*param_1);
  return;
}


// ===== 00cfd790  FUN_00cfd790 =====

undefined8 * FUN_00cfd790(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)param_2[1];
  puVar3 = param_2;
  if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
    do {
      puVar4 = (undefined8 *)puVar3[2];
      bVar2 = puVar3 != (undefined8 *)*puVar4;
      puVar3 = puVar4;
    } while (bVar2);
  }
  else {
    do {
      puVar4 = puVar1;
      puVar1 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
  if ((undefined8 *)*param_1 == param_2) {
    *param_1 = puVar4;
  }
  param_1[2] = param_1[2] + -1;
  FUN_005d5d48(param_1[1],param_2);
  if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  if (*(char *)((long)param_2 + 0x37) < '\0') {
    operator_delete((void *)param_2[4]);
  }
  operator_delete(param_2);
  return puVar4;
}


// ===== 00cfd850  FUN_00cfd850 =====

void FUN_00cfd850(void)

{
  return;
}


// ===== 00cfd858  FUN_00cfd858 =====

void FUN_00cfd858(uint param_1,long *param_2,long *param_3)

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
    pcVar1 = (code *)SoftwareBreakpoint(1,0xcfd8a0);
    (*pcVar1)();
  }
  plVar2 = (long *)*param_2;
  *param_2 = 0;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00cfd894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))();
    return;
  }
  return;
}


// ===== 00cfd8a0  FUN_00cfd8a0 =====

void FUN_00cfd8a0(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [16];
  code *local_40;
  undefined8 uStack_38;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = *param_1;
  uVar2 = param_1[1];
  (*(code *)param_1[4])(1,param_1 + 2,auStack_50);
  uStack_38 = param_1[5];
  local_40 = (code *)param_1[4];
  param_1[4] = FUN_00433984;
  param_1[5] = 0;
  FUN_00cfc88c(uVar1,uVar2,auStack_50,param_2);
  (*local_40)(0,auStack_50,auStack_50);
  return;
}


// ===== 00cfd92c  FUN_00cfd92c =====

void FUN_00cfd92c(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xcfd9a0);
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


// ===== 00cfd9a0  FUN_00cfd9a0 =====

void FUN_00cfd9a0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00cfd9ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


// ===== 00cfd9b0  FUN_00cfd9b0 =====

void FUN_00cfd9b0(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  (**(code **)((long)pvVar1 + 0x10))(0,pvVar1,pvVar1);
  operator_delete(pvVar1);
  return;
}


// ===== 00cfd9f0  FUN_00cfd9f0 =====

void FUN_00cfd9f0(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00cfda1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))
            (param_2,*(undefined8 *)*param_1,param_1[1],*(undefined4 *)param_1[2],
             *(undefined8 *)param_1[3],param_1[4],*(undefined1 *)param_1[5]);
  return;
}


// ===== 00cfda20  FUN_00cfda20 =====

void FUN_00cfda20(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00cfda2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


// ===== 00cfda30  FUN_00cfda30 =====

void FUN_00cfda30(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  (**(code **)((long)pvVar1 + 0x10))(0,pvVar1,pvVar1);
  operator_delete(pvVar1);
  return;
}


// ===== 00cfda70  FUN_00cfda70 =====

void FUN_00cfda70(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00cfda94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))
            (param_2,*(undefined8 *)*param_1,*(undefined8 *)param_1[1],*(undefined8 *)param_1[2],
             param_1[3]);
  return;
}


// ===== 00cfda98  FUN_00cfda98 =====

void FUN_00cfda98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d50820;
  return;
}


// ===== 00cfdaac  FUN_00cfdaac =====

void FUN_00cfdaac(void)

{
  return;
}


// ===== 00cfdab4  FUN_00cfdab4 =====

void FUN_00cfdab4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xcfdabc);
  (*pcVar1)();
}


// ===== 00cfdabc  FUN_00cfdabc =====

/* WARNING: Removing unreachable block (ram,0x00cfdc54) */

void FUN_00cfdabc(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *local_100 [2];
  code *local_f0;
  code *pcStack_e8;
  undefined8 *local_e0;
  undefined1 *local_d8;
  undefined1 *puStack_d0;
  undefined1 *local_c8;
  undefined1 *puStack_c0;
  undefined1 *local_b8;
  undefined1 *puStack_b0;
  undefined1 *local_a8;
  undefined1 *puStack_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  long *local_48;
  
  plVar4 = param_1 + 6;
  plVar2 = plVar4;
  plVar3 = (long *)*plVar4;
joined_r0x00cfdaec:
  do {
    if (plVar3 == (long *)0x0) {
LAB_00cfdb40:
      plVar2 = (long *)(**(code **)(*(long *)*param_1 + 0x28))();
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
      local_60 = &DAT_aaaaaaaaaaaaaaaa;
      local_48 = (long *)&DAT_aaaaaaaaaaaaaaaa;
      puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_007e8cec(&local_90,param_2);
      local_e0 = param_1 + 5;
      local_48 = plVar2;
      FUN_00cffc84(&local_e0,&local_90,&local_90);
      local_98 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
      local_a8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
      local_b8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
      local_c8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
      local_d8 = &DAT_aaaaaaaaaaaaaaaa;
      local_e0 = param_1;
      FUN_007e8cec(&local_d8,param_2);
      plVar3 = (long *)operator_new(0x50);
      *plVar3 = (long)local_e0;
      FUN_007e8cec(plVar3 + 1,&local_d8);
      local_f0 = FUN_00cffe7c;
      pcStack_e8 = FUN_00cffda4;
      local_100[0] = plVar3;
      (**(code **)(*plVar2 + 0x18))(plVar2,param_2,param_3,local_100);
      (*local_f0)(0,local_100,local_100);
      if ((long)local_c8 < 0) {
        operator_delete(local_d8);
      }
      plVar2 = local_48;
      local_48 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      return;
    }
    uVar1 = FUN_007e97f4(param_2,plVar3 + 4);
    if ((uVar1 & 1) == 0) {
      uVar1 = FUN_007e97f4(plVar3 + 4,param_2);
      if ((uVar1 & 1) == 0) {
        if (((long *)*plVar2 != (long *)0x0) && ((long *)*plVar2 != plVar4)) {
          return;
        }
        goto LAB_00cfdb40;
      }
      plVar2 = plVar3 + 1;
      plVar3 = (long *)plVar3[1];
      goto joined_r0x00cfdaec;
    }
    plVar2 = plVar3;
    plVar3 = (long *)*plVar3;
  } while( true );
}


// ===== 00cfdc80  FUN_00cfdc80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00cfdc80(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *local_68 [2];
  code *local_58;
  undefined *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cf877c();
  *param_1 = &PTR_FUN_00d509d0;
  param_1[0x4f] = param_1 + 0x50;
  param_1[0x4c] = param_1 + 0x4d;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = param_1 + 0x53;
  local_58 = FUN_00cffef4;
  local_50 = &DAT_0025a6d8;
  local_68[0] = param_1;
  FUN_00c68a38(param_1 + 0x55,*(undefined8 *)(param_2 + 0x28),local_68);
  if (*(code **)(local_50 + 8) != (code *)0x0) {
    (**(code **)(local_50 + 8))(local_68[0]);
  }
  param_1[0x5d] = param_4;
  uVar3 = _UNK_001f2b18;
  uVar2 = _DAT_001f2b10;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  param_1[99] = uVar3;
  param_1[0x62] = uVar2;
  param_1[0x65] = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  *(byte *)(param_1 + 0x68) = param_5 & 1;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00cfdd98  FUN_00cfdd98 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00cfdd98(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte in_w5;
  undefined8 *local_58 [2];
  code *local_48;
  undefined *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cf8790();
  *param_1 = &PTR_FUN_00d509d0;
  param_1[0x4f] = param_1 + 0x50;
  param_1[0x4c] = param_1 + 0x4d;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = param_1 + 0x53;
  local_48 = FUN_00cfffa4;
  local_40 = &DAT_0025a6f8;
  local_58[0] = param_1;
  FUN_00c68a38(param_1 + 0x55,*(undefined8 *)(param_2 + 0x28),local_58);
  if (*(code **)(local_40 + 8) != (code *)0x0) {
    (**(code **)(local_40 + 8))(local_58[0]);
  }
  *(undefined1 *)(param_1 + 0x61) = 0;
  param_1[0x65] = 0;
  param_1[0x67] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  uVar3 = _UNK_001f2b18;
  uVar2 = _DAT_001f2b10;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  param_1[99] = uVar3;
  param_1[0x62] = uVar2;
  param_1[0x66] = 0;
  *(byte *)(param_1 + 0x68) = in_w5 & 1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00cfdea4  FUN_00cfdea4 =====

/* WARNING: Removing unreachable block (ram,0x00cfdf84) */
/* WARNING: Removing unreachable block (ram,0x00cfe0ec) */

undefined8 FUN_00cfdea4(long *param_1)

{
  short sVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *local_e0 [2];
  code *local_d0;
  code *pcStack_c8;
  long *local_c0 [2];
  code *local_b0;
  code *pcStack_a8;
  undefined1 auStack_98 [32];
  long *local_78;
  code *pcStack_70;
  code *local_68;
  
  sVar1 = (**(code **)(*param_1 + 0x198))();
  lVar4 = 120000000;
  if (sVar1 < 900) {
    lVar4 = 0x7fffffffffffffff;
  }
  param_1[99] = lVar4;
  uVar2 = (**(code **)(*param_1 + 0x40))(param_1);
  if ((uVar2 & 1) == 0) {
    plVar3 = (long *)(**(code **)(*param_1 + 0x138))(param_1);
    (**(code **)(*param_1 + 0x18))(param_1);
    FUN_00bca960(auStack_98);
    FUN_007e8cac(&local_78,auStack_98,0);
    lVar4 = (**(code **)(*plVar3 + 0x10))
                      (plVar3,param_1 + 1,&local_78,(short)param_1[0xb],
                       *(undefined2 *)((long)param_1 + 0x5a));
    plVar3 = (long *)param_1[0x5e];
    param_1[0x5e] = lVar4;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
    lVar4 = param_1[0x5e];
    param_1[0x5d] = lVar4;
    if (lVar4 == 0) {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) == 0) {
        (**(code **)(*param_1 + 0x110))(&local_78,param_1);
        FUN_00623bb0(&DAT_00223e94,"../../p2p/base/stun_port.cc",0x702,&local_78,
                     ": UDP socket creation failed");
      }
      return 0;
    }
    local_b0 = FUN_004473ec;
    pcStack_a8 = FUN_00d00054;
    local_c0[0] = param_1;
    FUN_00897e08(lVar4,local_c0);
    (*local_b0)(0,local_c0,local_c0);
  }
  local_d0 = FUN_004473ec;
  pcStack_c8 = FUN_00d00060;
  local_e0[0] = param_1;
  FUN_00897f10(param_1[0x5d],param_1,local_e0);
  (*local_d0)(0,local_e0,local_e0);
  lVar4 = param_1[0x5d];
  local_78 = (long *)operator_new(0x20);
  *local_78 = (long)param_1;
  local_78[2] = (long)FUN_004473ec;
  local_78[3] = (long)FUN_00d00074;
  pcStack_70 = FUN_00cf7ca4;
  local_68 = FUN_00cf7cb4;
  FUN_007b5b08(lVar4 + 0x90,param_1,&local_78);
  lVar4 = param_1[0x5d];
  local_78 = (long *)operator_new(0x20);
  *local_78 = (long)param_1;
  local_78[2] = (long)FUN_004473ec;
  local_78[3] = (long)FUN_00d00080;
  pcStack_70 = FUN_00cffc34;
  local_68 = FUN_00cffc44;
  FUN_007b5b08(lVar4 + 0xb0,param_1,&local_78);
  return 1;
}


// ===== 00cfe104  FUN_00cfe104 =====

void FUN_00cfe104(void *param_1)

{
  FUN_00cffaf4();
  operator_delete(param_1);
  return;
}


// ===== 00cfe134  FUN_00cfe134 =====

void FUN_00cfe134(long param_1)

{
  int iVar1;
  undefined8 extraout_x1;
  void *local_68 [2];
  char cStack_51;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x2e8) + 0x38))();
  if (iVar1 == 2) {
    (**(code **)(**(long **)(param_1 + 0x2e8) + 0x10))(local_68);
    FUN_00cfe1b0(param_1,extraout_x1,local_68);
    if (cStack_51 < '\0') {
      operator_delete(local_68[0]);
    }
  }
  return;
}


// ===== 00cfe1b0  FUN_00cfe1b0 =====

/* WARNING: Removing unreachable block (ram,0x00cfe3ac) */

void FUN_00cfe1b0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  size_t sVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long **local_c8;
  undefined8 uStack_c0;
  long local_b8;
  undefined8 local_b0;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  long *local_38;
  
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007e8cec(&local_80,param_3);
  uVar3 = FUN_007e95f8(&local_80);
  if ((((uVar3 & 1) != 0) && ((char)param_1[0x68] == '\x01')) &&
     (plVar4 = (long *)(**(code **)(*param_1 + 0x18))(param_1), *plVar4 != 0)) {
    local_b8 = 0;
    local_b0 = 0xaaaaaaaa00000000;
    local_c8 = (long **)&PTR_FUN_00d385d8;
    uStack_c0 = 0;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x18))(param_1);
    uVar3 = (**(code **)(*(long *)*puVar5 + 0x10))
                      ((long *)*puVar5,(ulong)local_60 & 0xffffffff,&local_c8);
    if (((uVar3 & 1) != 0) && (uVar3 = FUN_007e9c90(&local_c8), (uVar3 & 1) == 0)) {
      FUN_007e8c64(&local_80,&local_c8);
    }
  }
  FUN_007e8a64(&local_c8);
  sVar6 = strlen("udp");
  FUN_00cf9524(param_1,&local_80,&local_80,&local_c8,&DAT_00254717,sVar6,&DAT_001b3348,0,
               &DAT_001b3348,0,0,0x7e,0,&DAT_001b3348,0,0);
  if (local_b8 < 0) {
    operator_delete(local_c8);
    lVar7 = param_1[0x4e];
  }
  else {
    lVar7 = param_1[0x4e];
  }
  if (lVar7 == 0) {
    if ((((int)param_1[0x21] != 1) && ((*(byte *)(param_1 + 0x61) & 1) == 0)) &&
       (param_1[0x51] + param_1[0x54] == 0)) {
      local_c8 = &local_38;
      *(undefined1 *)(param_1 + 0x61) = 1;
      local_38 = param_1;
      FUN_007b6160(param_1 + 0x3d,&local_c8,FUN_00cf8404);
    }
  }
  else {
    plVar4 = (long *)param_1[0x4c];
    while (plVar4 != param_1 + 0x4d) {
      plVar1 = (long *)plVar4[1];
      plVar8 = plVar4;
      if ((long *)plVar4[1] == (long *)0x0) {
        do {
          plVar9 = (long *)plVar8[2];
          bVar2 = plVar8 != (long *)*plVar9;
          plVar8 = plVar9;
        } while (bVar2);
      }
      else {
        do {
          plVar9 = plVar1;
          plVar1 = (long *)*plVar9;
        } while ((long *)*plVar9 != (long *)0x0);
      }
      FUN_00cfea10(param_1,plVar4 + 4);
      plVar4 = plVar9;
    }
  }
  return;
}


// ===== 00cfe3d4  FUN_00cfe3d4 =====

void * FUN_00cfe3d4(long *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  undefined1 auStack_58 [8];
  long local_50;
  undefined1 auStack_48 [8];
  long local_40;
  undefined1 auStack_38 [8];
  
  uVar1 = *(ulong *)(param_2 + 0x28);
  plVar2 = (long *)*(long *)(param_2 + 0x20);
  if (-1 < (char)*(byte *)(param_2 + 0x37)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0x37);
    plVar2 = (long *)(param_2 + 0x20);
  }
  uVar1 = (**(code **)(*param_1 + 0x48))(param_1,plVar2,uVar1);
  if ((((uVar1 & 1) == 0) || (uVar1 = FUN_00cfb3f8(param_1,param_2 + 0x50), (uVar1 & 1) == 0)) ||
     (plVar2 = (long *)(**(code **)(*param_1 + 0x88))(param_1), *plVar2 == plVar2[1])) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = operator_new(0xb30);
    FUN_00988288(auStack_38,param_1 + 0x4a);
    lVar4 = param_1[0x4b];
    FUN_00988398(auStack_58,auStack_38);
    local_50 = lVar4;
    FUN_00988108(auStack_38);
    FUN_0098815c(auStack_48,auStack_58);
    local_40 = local_50;
    FUN_00c680d4(pvVar3,param_1 + 1,auStack_48,0,param_2);
    FUN_00988344(auStack_48);
    FUN_00988344(auStack_58);
    FUN_00cf9d80(param_1,pvVar3);
  }
  return pvVar3;
}


// ===== 00cfe4f0  FUN_00cfe4f0 =====

int FUN_00cfe4f0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  void *local_120 [2];
  char cStack_109;
  void *local_108 [2];
  char cStack_f1;
  undefined1 uStack_e9;
  char *local_e8;
  undefined8 local_e0;
  undefined1 *local_d8;
  void **local_d0;
  char **ppcStack_c8;
  char *local_c0;
  void ***pppvStack_b8;
  undefined1 *local_b0;
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
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00897be8(&local_b0,param_5);
  FUN_00cfc5f0(param_1,&puStack_70);
  iVar1 = (**(code **)(*(long *)param_1[0x5d] + 0x28))
                    ((long *)param_1[0x5d],param_2,param_3,param_4,&local_b0);
  if (iVar1 < 0) {
    uVar2 = (**(code **)(*(long *)param_1[0x5d] + 0x50))();
    *(undefined4 *)(param_1 + 0x5f) = uVar2;
    if (*(int *)((long)param_1 + 0x2fc) < 5) {
      *(int *)((long)param_1 + 0x2fc) = *(int *)((long)param_1 + 0x2fc) + 1;
      uVar3 = FUN_004249b0();
      if ((uVar3 & 1) == 0) {
        local_e8 = "../../p2p/base/stun_port.cc";
        local_e0 = 0xa23;
        local_d8 = &uStack_e9;
        (**(code **)(*param_1 + 0x110))(local_108,param_1);
        ppcStack_c8 = &local_e8;
        pppvStack_b8 = &local_d0;
        local_c0 = ": UDP send of ";
        local_d0 = local_108;
        FUN_007e9344(local_120,param_4);
        FUN_00623bb0(&DAT_0025a718,*ppcStack_c8,*(undefined4 *)(ppcStack_c8 + 1),local_d0,local_c0,
                     param_3," bytes to host ",local_120," failed with error ",(int)param_1[0x5f]);
        if (cStack_109 < '\0') {
          operator_delete(local_120[0]);
        }
        if (cStack_f1 < '\0') {
          operator_delete(local_108[0]);
        }
      }
    }
  }
  else {
    *(undefined4 *)((long)param_1 + 0x2fc) = 0;
  }
  FUN_00897c8c(&local_b0);
  return iVar1;
}


// ===== 00cfe698  FUN_00cfe698 =====

void FUN_00cfe698(long *param_1)

{
  short sVar1;
  long lVar2;
  
  FUN_00cfc1e8();
  sVar1 = (**(code **)(*param_1 + 0x198))(param_1);
  lVar2 = 120000000;
  if (sVar1 < 900) {
    lVar2 = 0x7fffffffffffffff;
  }
  param_1[99] = lVar2;
  return;
}


// ===== 00cfe6ec  FUN_00cfe6ec =====

undefined4 FUN_00cfe6ec(long param_1)

{
  return *(undefined4 *)(param_1 + 800);
}


// ===== 00cfe6f8  FUN_00cfe6f8 =====

void FUN_00cfe6f8(long param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 5) {
    *(undefined4 *)(param_1 + 800) = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00cfe714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x2e8) + 0x48))();
  return;
}


// ===== 00cfe718  FUN_00cfe718 =====

void FUN_00cfe718(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00cfe728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x2e8) + 0x40))();
  return;
}


// ===== 00cfe72c  FUN_00cfe72c =====

undefined4 FUN_00cfe72c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2f8);
}


// ===== 00cfe738  FUN_00cfe738 =====

undefined8 FUN_00cfe738(void)

{
  FUN_00cfe758();
  return 1;
}


// ===== 00cfe758  FUN_00cfe758 =====

void FUN_00cfe758(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  
  if ((long *)param_1[0x4d] != (long *)0x0) {
    uVar4 = param_3[4];
    plVar3 = (long *)param_1[0x4d];
    plVar6 = param_1 + 0x4d;
    do {
      plVar5 = plVar3;
      uVar1 = FUN_007e97f4(uVar4,plVar5 + 4);
      if ((uVar1 & 1) == 0) {
        uVar1 = FUN_007e97f4(plVar5 + 4,uVar4);
        if ((uVar1 & 1) == 0) {
          if (((long *)*plVar6 != (long *)0x0) && ((long *)*plVar6 != param_1 + 0x4d)) {
            FUN_00c69178(param_1 + 0x55,*param_3,param_3[1]);
            return;
          }
          break;
        }
        plVar5 = plVar5 + 1;
        plVar3 = (long *)*plVar5;
      }
      else {
        plVar3 = (long *)*plVar5;
      }
      plVar6 = plVar5;
    } while (plVar3 != (long *)0x0);
  }
  lVar2 = (**(code **)(*param_1 + 0x58))(param_1,param_3[4]);
  if (lVar2 != 0) {
    FUN_00c62f8c(lVar2,param_3);
    return;
  }
  FUN_00cf9f10(param_1,param_3,0);
  return;
}


// ===== 00cfe850  FUN_00cfe850 =====

bool FUN_00cfe850(undefined8 param_1,void *param_2,size_t param_3)

{
  bool bVar1;
  int iVar2;
  size_t __n;
  
  __n = strlen(PTR_DAT_00d528e8);
  if (param_3 == __n) {
    iVar2 = memcmp(param_2,PTR_DAT_00d528e8,__n);
    bVar1 = iVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


// ===== 00cfe8b0  FUN_00cfe8b0 =====

undefined8 FUN_00cfe8b0(void)

{
  return 0;
}


// ===== 00cfe8bc  FUN_00cfe8bc =====

void FUN_00cfe8bc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_2 + 3) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x338);
    uVar3 = *(undefined8 *)(param_1 + 0x330);
    uVar2 = *(undefined8 *)(param_1 + 0x328);
  }
  else {
    if (param_2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar1 = *(undefined8 *)(param_1 + 0x338);
    uVar3 = *(undefined8 *)(param_1 + 0x330);
    uVar2 = *(undefined8 *)(param_1 + 0x328);
    *(undefined1 *)(param_2 + 3) = 1;
  }
  param_2[2] = uVar1;
  param_2[1] = uVar3;
  *param_2 = uVar2;
  return;
}


// ===== 00cfe91c  FUN_00cfe91c =====

void FUN_00cfe91c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  if (*(char *)(param_2 + 1) == '\0') {
    uVar1 = 10000000;
  }
  *(undefined8 *)(param_1 + 0x310) = uVar1;
  return;
}


// ===== 00cfe940  FUN_00cfe940 =====

void FUN_00cfe940(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *local_28;
  long **local_8;
  
  if (((int)param_1[0x21] != 1) && ((*(byte *)(param_1 + 0x61) & 1) == 0)) {
    lVar1 = param_1[0x51] + param_1[0x54];
    if (param_1[0x4e] == lVar1) {
      *(undefined1 *)(param_1 + 0x61) = 1;
      if (((param_1[0x51] == 0) && (lVar1 != 0)) &&
         (uVar2 = (**(code **)(*param_1 + 0x40))(param_1), (uVar2 & 1) == 0)) {
        plVar3 = param_1 + 0x41;
      }
      else {
        plVar3 = param_1 + 0x3d;
      }
      local_8 = &local_28;
      local_28 = param_1;
      FUN_007b6160(plVar3,&local_8,FUN_00cf8404);
    }
  }
  return;
}


// ===== 00cfe9fc  FUN_00cfe9fc =====

void FUN_00cfe9fc(long *param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00cfea0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x108))(param_1,param_3);
  return;
}


// ===== 00cfea10  FUN_00cfea10 =====

void FUN_00cfea10(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *local_a0;
  void *local_98;
  char cStack_89;
  char cStack_81;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  
  uVar3 = FUN_007e95a4(param_2);
  if ((uVar3 & 1) != 0) {
    FUN_00cfebc8(param_1,param_2);
    return;
  }
  iVar1 = (**(code **)(*(long *)param_1[0x5d] + 0x38))();
  if (iVar1 == 2) {
    uVar3 = FUN_00cfb3f8(param_1,param_2);
    if ((uVar3 & 1) == 0) {
      uVar3 = FUN_004022fc();
      if ((uVar3 & 1) == 0) {
        (**(code **)(*param_1 + 0x110))(&local_a0,param_1);
        FUN_00623bb0(&DAT_00223e94,"../../p2p/base/stun_port.cc",0xfaa,&local_a0,
                     ": STUN server address is incompatible.");
        if (cStack_89 < '\0') {
          operator_delete(local_a0);
        }
      }
      FUN_00cfefb8(param_1,param_2,0,"STUN server address is incompatible.",0x24);
    }
    else {
      lVar4 = FUN_0066631c("WebRTC.PeerConnection.Stun.ServerAddressType",0x2c,4);
      if (lVar4 != 0) {
        uVar2 = FUN_007e9680(param_2);
        FUN_00666568(lVar4,uVar2);
      }
      local_a0 = param_1;
      FUN_007e8cec(&local_98,param_2);
      plVar5 = (long *)operator_new(0x50);
      *plVar5 = (long)local_a0;
      FUN_007e8cec(plVar5 + 1,&local_98);
      local_40 = FUN_00d00384;
      pcStack_38 = FUN_00d00204;
      local_50[0] = plVar5;
      FUN_00cfc664(param_1,param_2,local_50);
      (*local_40)(0,local_50,local_50);
      if (cStack_81 < '\0') {
        operator_delete(local_98);
      }
    }
  }
  return;
}


// ===== 00cfebc8  FUN_00cfebc8 =====

void FUN_00cfebc8(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  void *pvVar6;
  long lVar7;
  void *local_60 [2];
  char cStack_49;
  void *local_48 [2];
  char cStack_31;
  
  if (param_1[0x60] == 0) {
    puVar1 = (undefined8 *)operator_new(0x40);
    uVar2 = (**(code **)(*param_1 + 0x138))(param_1);
    pvVar6 = (void *)param_1[0x60];
    *puVar1 = uVar2;
    puVar1[1] = param_1;
    puVar1[3] = FUN_00d00138;
    puVar1[4] = &DAT_0025a728;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[5] = puVar1 + 6;
    param_1[0x60] = (long)puVar1;
    if (pvVar6 != (void *)0x0) {
      local_48[0] = (void *)((long)pvVar6 + 0x28);
      FUN_00d0008c(local_48,*(undefined8 *)((long)pvVar6 + 0x30));
      pcVar5 = *(code **)(*(long *)((long)pvVar6 + 0x20) + 8);
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(*(undefined8 *)((long)pvVar6 + 8));
      }
      operator_delete(pvVar6);
    }
  }
  uVar3 = FUN_00417e08();
  if ((uVar3 & 1) == 0) {
    (**(code **)(*param_1 + 0x110))(local_48,param_1);
    FUN_007e924c(local_60,param_2);
    FUN_00623bb0(&DAT_0025987e,"../../p2p/base/stun_port.cc",0xe59,local_48,
                 ": Starting STUN host lookup for ",local_60);
    if (cStack_49 < '\0') {
      operator_delete(local_60[0]);
    }
    if (cStack_31 < '\0') {
      operator_delete(local_48[0]);
    }
  }
  lVar7 = param_1[0x60];
  lVar4 = (**(code **)(*param_1 + 0x18))(param_1);
  FUN_00cfdabc(lVar7,param_2,*(undefined4 *)(lVar4 + 0x48));
  return;
}


// ===== 00cfed3c  FUN_00cfed3c =====

void FUN_00cfed3c(long *param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *local_c0;
  undefined4 local_b8;
  char cStack_a9;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007e8a64(&local_a0);
  if (param_3 == 0) {
    lVar5 = param_1[0x60];
    (**(code **)(*param_1 + 0x18))(param_1);
    FUN_00bca960(&local_c0);
    plVar6 = (long *)(lVar5 + 0x30);
    plVar2 = plVar6;
    plVar3 = (long *)*plVar6;
    while (plVar3 != (long *)0x0) {
      uVar1 = FUN_007e97f4(param_2,plVar3 + 4);
      if ((uVar1 & 1) == 0) {
        uVar1 = FUN_007e97f4(plVar3 + 4,param_2);
        if ((uVar1 & 1) == 0) {
          plVar2 = (long *)*plVar2;
          if ((plVar2 != (long *)0x0) && (plVar2 != plVar6)) {
            plVar2 = (long *)(**(code **)(*(long *)plVar2[0xd] + 0x20))();
            uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,local_b8,&local_a0);
            if ((uVar1 & 1) != 0) {
              if ((long *)param_1[0x4d] == (long *)0x0) goto LAB_00cfef94;
              plVar2 = param_1 + 0x4d;
              plVar3 = (long *)param_1[0x4d];
              plVar6 = param_1 + 0x4d;
              goto LAB_00cfeefc;
            }
          }
          break;
        }
        plVar2 = plVar3 + 1;
        plVar3 = (long *)plVar3[1];
      }
      else {
        plVar2 = plVar3;
        plVar3 = (long *)*plVar3;
      }
    }
  }
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    (**(code **)(*param_1 + 0x110))(&local_c0,param_1);
    FUN_00623bb0(&DAT_00259892,"../../p2p/base/stun_port.cc",0xeb2,&local_c0,
                 ": StunPort: stun host lookup received error ",param_3);
    if (cStack_a9 < '\0') {
      operator_delete(local_c0);
    }
  }
  FUN_00cfefb8(param_1,param_2,0x2bd,"STUN host lookup received error.",0x20);
  goto LAB_00cfedfc;
LAB_00cfeefc:
  do {
    plVar4 = plVar3;
    uVar1 = FUN_007e97f4(param_2,plVar4 + 4);
    if ((uVar1 & 1) == 0) {
      uVar1 = FUN_007e97f4(plVar4 + 4,param_2);
      if ((uVar1 & 1) == 0) {
        if (((long *)*plVar6 != (long *)0x0) && ((long *)*plVar6 != plVar2)) {
          FUN_00d00144(param_1 + 0x4c);
        }
        break;
      }
      plVar4 = plVar4 + 1;
      plVar3 = (long *)*plVar4;
    }
    else {
      plVar3 = (long *)*plVar4;
    }
    plVar6 = plVar4;
  } while (plVar3 != (long *)0x0);
  if ((long *)*plVar2 != (long *)0x0) {
    plVar3 = (long *)*plVar2;
    plVar6 = param_1 + 0x4d;
    do {
      plVar4 = plVar3;
      uVar1 = FUN_007e97f4(&local_a0,plVar4 + 4);
      if ((uVar1 & 1) == 0) {
        uVar1 = FUN_007e97f4(plVar4 + 4,&local_a0);
        if ((uVar1 & 1) == 0) {
          if (((long *)*plVar6 != (long *)0x0) && ((long *)*plVar6 != plVar2)) goto LAB_00cfedfc;
          break;
        }
        plVar4 = plVar4 + 1;
        plVar3 = (long *)*plVar4;
      }
      else {
        plVar3 = (long *)*plVar4;
      }
      plVar6 = plVar4;
    } while (plVar3 != (long *)0x0);
  }
LAB_00cfef94:
  local_c0 = param_1 + 0x4c;
  FUN_00cefc98(&local_c0,&local_a0,&local_a0);
  FUN_00cfea10(param_1,&local_a0);
LAB_00cfedfc:
  if ((long)local_90 < 0) {
    operator_delete(local_a0);
  }
  return;
}


// ===== 00cfefb8  FUN_00cfefb8 =====

/* WARNING: Removing unreachable block (ram,0x00cff1dc) */
/* WARNING: Removing unreachable block (ram,0x00cff1ac) */
/* WARNING: Removing unreachable block (ram,0x00cff194) */
/* WARNING: Removing unreachable block (ram,0x00cff17c) */
/* WARNING: Removing unreachable block (ram,0x00cff04c) */
/* WARNING: Removing unreachable block (ram,0x00cff20c) */
/* WARNING: Removing unreachable block (ram,0x00cff224) */

void FUN_00cfefb8(long *****param_1,undefined8 param_2,int param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long ****pppplVar1;
  undefined8 *******pppppppuVar2;
  undefined8 *******pppppppuVar3;
  undefined2 uVar4;
  ulong uVar5;
  long *****ppppplVar6;
  long *****ppppplVar7;
  long *****ppppplVar8;
  void *local_178 [2];
  char cStack_161;
  long ****local_130 [2];
  char cStack_119;
  undefined8 ******local_e8;
  ulong uStack_e0;
  byte bStack_d1;
  long ******local_d0;
  ulong uStack_c8;
  byte bStack_b9;
  undefined8 ******local_78;
  ulong uStack_70;
  ulong local_68;
  
  if (param_3 != 0) {
    local_78 = (undefined8 *******)0x0;
    uStack_70 = 0;
    local_68 = 0;
    FUN_00547cac(&local_78,"stun:",5);
    FUN_007e9154(&local_d0,param_2);
    if (-1 < (char)bStack_b9) {
      uStack_c8 = (ulong)bStack_b9;
      local_d0 = (long ******)&local_d0;
    }
    FUN_00547cac(&local_78,local_d0,uStack_c8);
    (*(code *)(*param_1[0x5d])[2])(local_130);
    FUN_007e9004(&local_e8,local_130);
    if (-1 < (char)bStack_d1) {
      uStack_e0 = (ulong)bStack_d1;
    }
    pppppppuVar2 = (undefined8 *******)local_e8;
    if (-1 < (char)bStack_d1) {
      pppppppuVar2 = &local_e8;
    }
    (*(code *)(*param_1[0x5d])[2])(local_178);
    uVar4 = FUN_007e8eb4(local_178);
    uVar5 = uStack_70;
    pppppppuVar3 = (undefined8 *******)local_78;
    if (-1 < (long)local_68) {
      uVar5 = local_68 >> 0x38;
      pppppppuVar3 = &local_78;
    }
    FUN_00cf3f18(&local_d0,pppppppuVar2,uStack_e0,uVar4,pppppppuVar3,uVar5,param_3,param_8,param_4,
                 param_5);
    FUN_00cf9c10(param_1,&local_d0);
    if (cStack_161 < '\0') {
      operator_delete(local_178[0]);
    }
    if (cStack_119 < '\0') {
      operator_delete(local_130[0]);
    }
  }
  if ((long *****)param_1[0x53] != (long *****)0x0) {
    ppppplVar6 = (long *****)param_1[0x53];
    ppppplVar8 = param_1 + 0x53;
    do {
      ppppplVar7 = ppppplVar6;
      uVar5 = FUN_007e97f4(param_2,ppppplVar7 + 4);
      if ((uVar5 & 1) == 0) {
        uVar5 = FUN_007e97f4(ppppplVar7 + 4,param_2);
        if ((uVar5 & 1) == 0) {
          if (((long *****)*ppppplVar8 != (long *****)0x0) &&
             ((long *****)*ppppplVar8 != param_1 + 0x53)) {
            return;
          }
          break;
        }
        ppppplVar7 = ppppplVar7 + 1;
        ppppplVar6 = (long *****)*ppppplVar7;
      }
      else {
        ppppplVar6 = (long *****)*ppppplVar7;
      }
      ppppplVar8 = ppppplVar7;
    } while (ppppplVar6 != (long *****)0x0);
  }
  local_d0 = (long ******)(param_1 + 0x52);
  FUN_00cefc98(&local_d0,param_2,param_2);
  if ((*(int *)(param_1 + 0x21) != 1) && (((ulong)param_1[0x61] & 1) == 0)) {
    pppplVar1 = (long ****)((long)param_1[0x51] + (long)param_1[0x54]);
    if (param_1[0x4e] == pppplVar1) {
      *(undefined1 *)(param_1 + 0x61) = 1;
      if (((param_1[0x51] == (long ****)0x0) && (pppplVar1 != (long ****)0x0)) &&
         (uVar5 = (*(code *)(*param_1)[8])(param_1), (uVar5 & 1) == 0)) {
        ppppplVar6 = param_1 + 0x41;
      }
      else {
        ppppplVar6 = param_1 + 0x3d;
      }
      local_d0 = (long ******)local_130;
      local_130[0] = (long ****)param_1;
      FUN_007b6160(ppppplVar6,&local_d0,FUN_00cf8404);
    }
  }
  return;
}


// ===== 00cff300  FUN_00cff300 =====

/* WARNING: Removing unreachable block (ram,0x00cff4d4) */
/* WARNING: Removing unreachable block (ram,0x00cff4e8) */
/* WARNING: Removing unreachable block (ram,0x00cff7cc) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00cff300(undefined *******param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined ******ppppppuVar1;
  undefined ********ppppppppuVar2;
  undefined8 *******pppppppuVar3;
  bool bVar4;
  undefined2 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  size_t sVar11;
  int iVar12;
  undefined *******pppppppuVar13;
  undefined *******pppppppuVar14;
  undefined *******pppppppuVar15;
  undefined8 *******local_140;
  ulong uStack_138;
  ulong local_130;
  undefined ********local_128;
  ulong uStack_120;
  ulong local_118;
  undefined8 local_110;
  undefined ********local_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined *******local_98 [9];
  
  iVar12 = (int)(param_2 / 1000);
  if (499 < param_2 % 1000) {
    iVar12 = iVar12 + 1;
  }
  if ((param_2 & 0x8000000000000000) != 0) {
    iVar12 = -(int)(-param_2 / 1000) - (uint)(500 < -param_2 % 1000);
  }
  *(int *)((long)param_1 + 0x32c) = *(int *)((long)param_1 + 0x32c) + 1;
  param_1[0x67] = (undefined ******)((double)param_1[0x67] + (double)(iVar12 * iVar12));
  param_1[0x66] = (undefined ******)((double)param_1[0x66] + (double)iVar12);
  if ((undefined *******)param_1[0x50] != (undefined *******)0x0) {
    pppppppuVar13 = (undefined *******)param_1[0x50];
    pppppppuVar15 = param_1 + 0x50;
    do {
      pppppppuVar14 = pppppppuVar13;
      uVar6 = FUN_007e97f4(param_3,pppppppuVar14 + 4);
      if ((uVar6 & 1) == 0) {
        uVar6 = FUN_007e97f4(pppppppuVar14 + 4,param_3);
        if ((uVar6 & 1) == 0) {
          if (((undefined *******)*pppppppuVar15 != (undefined *******)0x0) &&
             ((undefined *******)*pppppppuVar15 != param_1 + 0x50)) {
            return;
          }
          break;
        }
        pppppppuVar14 = pppppppuVar14 + 1;
        pppppppuVar13 = (undefined *******)*pppppppuVar14;
      }
      else {
        pppppppuVar13 = (undefined *******)*pppppppuVar14;
      }
      pppppppuVar15 = pppppppuVar14;
    } while (pppppppuVar13 != (undefined *******)0x0);
  }
  local_98[0] = param_1 + 0x4f;
  FUN_00cefc98(local_98,param_3,param_3);
  uVar6 = (*(code *)(*param_1)[8])(param_1);
  if ((uVar6 & 1) == 0) {
LAB_00cff474:
    plVar9 = (long *)(*(code *)(*param_1)[0x11])(param_1);
    lVar8 = *plVar9;
    if (lVar8 != plVar9[1]) {
      do {
        uVar7 = FUN_00aff2f4(lVar8);
        if (((uVar7 & 1) != 0) && (uVar7 = FUN_007e973c(lVar8 + 0x50,param_4), (uVar7 & 1) != 0)) {
          if ((uVar6 & 1) != 0) goto LAB_00cff4c8;
          goto LAB_00cff730;
        }
        lVar8 = lVar8 + 0x198;
      } while (lVar8 != plVar9[1]);
    }
    if ((uVar6 & 1) != 0) {
      bVar4 = true;
      goto LAB_00cff4f8;
    }
  }
  else {
    (*(code *)(*param_1[0x5d])[2])(local_98);
    uVar7 = FUN_007e973c(param_4,local_98);
    if ((uVar7 & 1) == 0) goto LAB_00cff474;
    (*(code *)(*param_1)[3])(param_1);
    lVar8 = FUN_00bccb74();
    if (lVar8 != 0) goto LAB_00cff474;
LAB_00cff4c8:
    bVar4 = false;
LAB_00cff4f8:
    if (!bVar4) goto LAB_00cff730;
  }
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = (undefined ********)&DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  (*(code *)(*param_1[0x5d])[2])(&local_e0);
  uVar6 = FUN_007e95f8(&local_e0);
  if ((((uVar6 & 1) != 0) && (*(char *)(param_1 + 0x68) == '\x01')) &&
     (plVar9 = (long *)(*(code *)(*param_1)[3])(param_1), *plVar9 != 0)) {
    local_118 = 0;
    local_110 = 0xaaaaaaaa00000000;
    local_128 = (undefined ********)&PTR_FUN_00d385d8;
    uStack_120 = 0;
    puVar10 = (undefined8 *)(*(code *)(*param_1)[3])(param_1);
    uVar6 = (**(code **)(*(long *)*puVar10 + 0x10))
                      ((long *)*puVar10,(ulong)local_c0 & 0xffffffff,&local_128);
    if (((uVar6 & 1) == 0) || (uVar6 = FUN_007e9c90(&local_128), (uVar6 & 1) != 0)) {
      FUN_007e9bb8(&local_128,(ulong)local_c0 & 0xffffffff);
      FUN_007e8d84(&local_e0,&local_128);
      if ((long)local_118 < 0) {
        operator_delete(local_128);
      }
    }
    else {
      FUN_007e8c64(&local_e0,&local_128);
    }
  }
  local_140 = (undefined8 *******)0x0;
  uStack_138 = 0;
  local_130 = 0;
  FUN_00547cac(&local_140,"stun:",5);
  uVar6 = param_3[1];
  puVar10 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar6 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar10 = param_3;
  }
  FUN_00547cac(&local_140,puVar10,uVar6);
  FUN_00547cac(&local_140,&DAT_001ca603,1);
  uVar5 = FUN_007e8eb4(param_3);
  local_128 = (undefined ********)0x0;
  uStack_120 = 0;
  local_118 = 0;
  FUN_005f55c4(&local_128,0x16,uVar5);
  uVar6 = uStack_120;
  ppppppppuVar2 = local_128;
  if (-1 < (long)local_118) {
    uVar6 = local_118 >> 0x38;
    ppppppppuVar2 = (undefined ********)&local_128;
  }
  FUN_00547cac(&local_140,ppppppppuVar2,uVar6);
  if ((long)local_118 < 0) {
    operator_delete(local_128);
  }
  (*(code *)(*param_1[0x5d])[2])(&local_128);
  sVar11 = strlen("udp");
  uVar6 = uStack_138;
  pppppppuVar3 = local_140;
  if (-1 < (long)local_130) {
    uVar6 = local_130 >> 0x38;
    pppppppuVar3 = &local_140;
  }
  FUN_00cf9524(param_1,param_4,&local_128,&local_e0,&DAT_00254717,sVar11,&DAT_001b3348,0,
               &DAT_001b3348,0,1,100,0,pppppppuVar3,uVar6,0);
  if ((long)local_118 < 0) {
    operator_delete(local_128);
  }
  if ((long)local_130 < 0) {
    operator_delete(local_140);
  }
LAB_00cff730:
  if ((*(int *)(param_1 + 0x21) != 1) && (((ulong)param_1[0x61] & 1) == 0)) {
    ppppppuVar1 = (undefined ******)((long)param_1[0x51] + (long)param_1[0x54]);
    if (param_1[0x4e] == ppppppuVar1) {
      *(undefined1 *)(param_1 + 0x61) = 1;
      if (((param_1[0x51] == (undefined ******)0x0) && (ppppppuVar1 != (undefined ******)0x0)) &&
         (uVar6 = (*(code *)(*param_1)[8])(param_1), (uVar6 & 1) == 0)) {
        pppppppuVar13 = param_1 + 0x41;
      }
      else {
        pppppppuVar13 = param_1 + 0x3d;
      }
      local_e0 = (undefined ********)&local_128;
      local_128 = (undefined ********)param_1;
      FUN_007b6160(pppppppuVar13,&local_e0,FUN_00cf8404);
    }
  }
  return;
}


// ===== 00cff820  FUN_00cff820 =====

long * FUN_00cff820(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                   long param_5,ulong param_6)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = (long *)operator_new(0x350);
  FUN_00cff8cc(plVar1,param_1,param_2,param_3,param_4);
  if ((param_6 & 1) == 0) {
    param_5 = 10000000;
  }
  plVar1[0x62] = param_5;
  uVar2 = FUN_00cfdea4(plVar1);
  if (((uVar2 & 1) == 0) && (plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 8))(plVar1);
    plVar1 = (long *)0x0;
  }
  return plVar1;
}


// ===== 00cff8cc  FUN_00cff8cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00cff8cc(undefined8 *param_1,long param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 *local_68 [2];
  code *local_58;
  undefined *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cf8790(param_1,param_2,1,param_3,param_4,0);
  *param_1 = &PTR_FUN_00d509d0;
  plVar6 = param_1 + 0x4d;
  param_1[0x4f] = param_1 + 0x50;
  param_1[0x4c] = plVar6;
  param_1[0x4e] = 0;
  *plVar6 = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = param_1 + 0x53;
  local_58 = FUN_00cfffa4;
  local_50 = &DAT_0025a6f8;
  local_68[0] = param_1;
  FUN_00c68a38(param_1 + 0x55,*(undefined8 *)(param_2 + 0x28),local_68);
  if (*(code **)(local_50 + 8) != (code *)0x0) {
    (**(code **)(local_50 + 8))(local_68[0]);
  }
  *(undefined1 *)(param_1 + 0x61) = 0;
  param_1[0x65] = 0;
  param_1[0x67] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  uVar3 = _UNK_001f2b18;
  uVar2 = _DAT_001f2b10;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  param_1[99] = uVar3;
  param_1[0x62] = uVar2;
  param_1[0x66] = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *param_1 = &PTR_FUN_00d50ba8;
  if (param_1 + 0x4c == param_5) goto LAB_00cffa38;
  if (param_1[0x4e] == 0) {
    lVar5 = FUN_00be483c(param_1 + 0x4c,param_5[1],param_1 + 0x4c);
    *plVar6 = lVar5;
    if (lVar5 != 0) {
      *(long **)(lVar5 + 0x10) = plVar6;
      plVar4 = (long *)*plVar6;
      goto joined_r0x00cff9f4;
    }
  }
  else {
    plVar4 = (long *)FUN_00be4748(param_1 + 0x4c,*plVar6,param_5[1],0,param_1 + 0x4c);
    *plVar6 = (long)plVar4;
joined_r0x00cff9f4:
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      plVar6 = plVar4;
    }
  }
  param_1[0x4c] = plVar6;
  param_1[0x4e] = param_5[2];
LAB_00cffa38:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00cffa68  FUN_00cffa68 =====

void FUN_00cffa68(long param_1)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  
  plVar1 = *(long **)(param_1 + 0x260);
  while (plVar1 != (long *)(param_1 + 0x268)) {
    plVar2 = (long *)plVar1[1];
    plVar4 = plVar1;
    if ((long *)plVar1[1] == (long *)0x0) {
      do {
        plVar5 = (long *)plVar4[2];
        bVar3 = plVar4 != (long *)*plVar5;
        plVar4 = plVar5;
      } while (bVar3);
    }
    else {
      do {
        plVar5 = plVar2;
        plVar2 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
    FUN_00cfea10(param_1,plVar1 + 4);
    plVar1 = plVar5;
  }
  return;
}


// ===== 00cffaf4  FUN_00cffaf4 =====

void FUN_00cffaf4(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  void *pvVar3;
  undefined8 *local_28;
  
  *param_1 = &PTR_FUN_00d509d0;
  if (param_1[0x5d] != 0) {
    FUN_007b5df8(param_1[0x5d] + 0x70,param_1);
    FUN_007b5df8(param_1[0x5d] + 0x90,param_1);
    FUN_007b5df8(param_1[0x5d] + 0xb0,param_1);
  }
  pvVar3 = (void *)param_1[0x60];
  param_1[0x60] = 0;
  if (pvVar3 != (void *)0x0) {
    local_28 = (undefined8 *)((long)pvVar3 + 0x28);
    FUN_00d0008c(&local_28,*(undefined8 *)((long)pvVar3 + 0x30));
    pcVar2 = *(code **)(*(long *)((long)pvVar3 + 0x20) + 8);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(*(undefined8 *)((long)pvVar3 + 8));
    }
    operator_delete(pvVar3);
  }
  plVar1 = (long *)param_1[0x5e];
  param_1[0x5e] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_00c68a7c(param_1 + 0x55);
  local_28 = param_1 + 0x52;
  FUN_00b8b8d8(&local_28,param_1[0x53]);
  local_28 = param_1 + 0x4f;
  FUN_00b8b8d8(&local_28,param_1[0x50]);
  local_28 = param_1 + 0x4c;
  FUN_00b8b8d8(&local_28,param_1[0x4d]);
  FUN_00cf8d60(param_1);
  return;
}


// ===== 00cffc04  FUN_00cffc04 =====

void FUN_00cffc04(void *param_1)

{
  FUN_00cffaf4();
  operator_delete(param_1);
  return;
}


// ===== 00cffc34  FUN_00cffc34 =====

void FUN_00cffc34(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00cffc40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


// ===== 00cffc44  FUN_00cffc44 =====

void FUN_00cffc44(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  (**(code **)((long)pvVar1 + 0x10))(0,pvVar1,pvVar1);
  operator_delete(pvVar1);
  return;
}


// ===== 00cffc84  FUN_00cffc84 =====

undefined1  [16] FUN_00cffc84(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  
  plVar6 = (long *)*param_1;
  plVar7 = plVar6 + 1;
  plVar8 = plVar7;
  plVar1 = (long *)*plVar7;
joined_r0x00cffcac:
  do {
    if (plVar1 == (long *)0x0) {
LAB_00cffcfc:
      puVar3 = (undefined8 *)operator_new(0x70);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = 0;
        if (puVar3 + 4 != (undefined8 *)0x0) {
          FUN_007e8cec(puVar3 + 4,param_3);
          uVar5 = *(undefined8 *)(param_3 + 0x48);
          *(undefined8 *)(param_3 + 0x48) = 0;
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[0xd] = uVar5;
          puVar3[2] = plVar8;
          *plVar7 = (long)puVar3;
          puVar4 = puVar3;
          if (*(long *)*plVar6 != 0) {
            *plVar6 = *(long *)*plVar6;
            puVar4 = (undefined8 *)*plVar7;
          }
          FUN_005d5b94(plVar6[1],puVar4);
          uVar5 = 1;
          plVar6[2] = plVar6[2] + 1;
LAB_00cffd64:
          auVar9._8_8_ = uVar5;
          auVar9._0_8_ = puVar3;
          return auVar9;
        }
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar2 = FUN_007e97f4(param_2,plVar1 + 4);
    plVar8 = plVar1;
    if ((uVar2 & 1) != 0) {
      plVar7 = plVar1;
      plVar1 = (long *)*plVar1;
      goto joined_r0x00cffcac;
    }
    uVar2 = FUN_007e97f4(plVar1 + 4,param_2);
    if ((uVar2 & 1) == 0) {
      puVar3 = (undefined8 *)*plVar7;
      if (puVar3 != (undefined8 *)0x0) {
        uVar5 = 0;
        goto LAB_00cffd64;
      }
      goto LAB_00cffcfc;
    }
    plVar7 = plVar1 + 1;
    plVar1 = (long *)*plVar7;
  } while( true );
}


// ===== 00cffda4  FUN_00cffda4 =====

void FUN_00cffda4(long *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  plVar4 = (long *)*param_1 + 1;
  lVar6 = *(long *)*param_1;
  plVar7 = (long *)(lVar6 + 0x30);
  plVar5 = plVar7;
  plVar3 = (long *)*plVar7;
  while( true ) {
    while( true ) {
      if (plVar3 == (long *)0x0) {
        return;
      }
      uVar2 = FUN_007e97f4(plVar4,plVar3 + 4);
      if ((uVar2 & 1) == 0) break;
      plVar5 = plVar3;
      plVar3 = (long *)*plVar3;
    }
    uVar2 = FUN_007e97f4(plVar3 + 4,plVar4);
    if ((uVar2 & 1) == 0) break;
    plVar5 = plVar3 + 1;
    plVar3 = (long *)plVar3[1];
  }
  plVar5 = (long *)*plVar5;
  if (plVar5 == (long *)0x0) {
    return;
  }
  if (plVar5 == plVar7) {
    return;
  }
  plVar3 = (long *)(**(code **)(*(long *)plVar5[0xd] + 0x20))();
  uVar1 = (**(code **)(*plVar3 + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x00cffe60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 0x18))(lVar6 + 8,plVar5 + 4,uVar1);
  return;
}


// ===== 00cffe7c  FUN_00cffe7c =====

void FUN_00cffe7c(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xcffef4);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      if (*(char *)((long)pvVar2 + 0x1f) < '\0') {
        operator_delete(*(void **)((long)pvVar2 + 8));
      }
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 00cffef4  FUN_00cffef4 =====

void FUN_00cffef4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  long *plVar2;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  plVar2 = (long *)*param_1;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  uVar1 = (**(code **)(*plVar2 + 0x170))(plVar2);
  FUN_00897b90(&local_a0,uVar1);
  uStack_60 = (undefined1 *)CONCAT44(4,(undefined4)uStack_60);
  (**(code **)(*plVar2 + 0x90))(plVar2,param_2,param_3,param_4 + 0x68,&local_a0,1);
  *(int *)(plVar2 + 0x65) = (int)plVar2[0x65] + 1;
  FUN_00897c8c(&local_a0);
  return;
}


// ===== 00cfffa4  FUN_00cfffa4 =====

void FUN_00cfffa4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  long *plVar2;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  plVar2 = (long *)*param_1;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  uVar1 = (**(code **)(*plVar2 + 0x170))(plVar2);
  FUN_00897b90(&local_a0,uVar1);
  uStack_60 = (undefined1 *)CONCAT44(4,(undefined4)uStack_60);
  (**(code **)(*plVar2 + 0x90))(plVar2,param_2,param_3,param_4 + 0x68,&local_a0,1);
  *(int *)(plVar2 + 0x65) = (int)plVar2[0x65] + 1;
  FUN_00897c8c(&local_a0);
  return;
}


// ===== 00d00054  FUN_00d00054 =====

void FUN_00d00054(undefined8 *param_1)

{
  FUN_00cfe758(*param_1);
  return;
}


// ===== 00d00060  FUN_00d00060 =====

void FUN_00d00060(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d00070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x1b0))();
  return;
}


// ===== 00d00074  FUN_00d00074 =====

void FUN_00d00074(undefined8 *param_1)

{
  FUN_00cfa32c(*param_1);
  return;
}


// ===== 00d00080  FUN_00d00080 =====

void FUN_00d00080(undefined8 *param_1)

{
  FUN_00cfe1b0(*param_1);
  return;
}


// ===== 00d0008c  FUN_00d0008c =====

void FUN_00d0008c(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00d0008c(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar1 = (long *)param_2[0xd];
      puVar2 = (undefined8 *)param_2[1];
      param_2[0xd] = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (*(char *)((long)param_2 + 0x37) < '\0') {
        operator_delete((void *)param_2[4]);
      }
      operator_delete(param_2);
      param_2 = puVar2;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}


// ===== 00d00138  FUN_00d00138 =====

void FUN_00d00138(undefined8 *param_1)

{
  FUN_00cfed3c(*param_1);
  return;
}


// ===== 00d00144  FUN_00d00144 =====

undefined8 * FUN_00d00144(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)param_2[1];
  puVar3 = param_2;
  if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
    do {
      puVar4 = (undefined8 *)puVar3[2];
      bVar2 = puVar3 != (undefined8 *)*puVar4;
      puVar3 = puVar4;
    } while (bVar2);
  }
  else {
    do {
      puVar4 = puVar1;
      puVar1 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
  if ((undefined8 *)*param_1 == param_2) {
    *param_1 = puVar4;
  }
  param_1[2] = param_1[2] + -1;
  FUN_005d5d48(param_1[1],param_2);
  if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  if (*(char *)((long)param_2 + 0x37) < '\0') {
    operator_delete((void *)param_2[4]);
  }
  operator_delete(param_2);
  return puVar4;
}


// ===== 00d00204  FUN_00d00204 =====

void FUN_00d00204(undefined8 *param_1,int param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long *plVar5;
  void *local_70 [2];
  char cStack_59;
  void *local_58 [2];
  char cStack_41;
  
  param_1 = (undefined8 *)*param_1;
  plVar5 = (long *)*param_1;
  if (param_2 == 0) {
    uVar2 = (**(code **)(*(long *)plVar5[3] + 0x10))();
    puVar3 = (undefined8 *)operator_new(0xb8);
    pvVar4 = operator_new(0x80);
    FUN_00c69ccc(pvVar4,1);
    FUN_00c69328(puVar3,plVar5 + 1,plVar5 + 0x55,pvVar4);
    *puVar3 = &PTR_FUN_00d50d80;
    puVar3[0xc] = plVar5;
    FUN_007e8cec(puVar3 + 0xd,param_1 + 1);
    puVar3[0x16] = uVar2;
    *(undefined1 *)(puVar3 + 0xb) = 0;
    FUN_00c68ac8(plVar5 + 0x55,puVar3,0);
    return;
  }
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    (**(code **)(*plVar5 + 0x110))(local_58,plVar5);
    FUN_007e9004(local_70,param_1 + 1);
    FUN_00623bb0(&DAT_0025987e,"../../p2p/base/stun_port.cc",0x101a,local_58,
                 ": Permission denied to connect to STUN server ",local_70);
    if (cStack_59 < '\0') {
      operator_delete(local_70[0]);
    }
    if (cStack_41 < '\0') {
      operator_delete(local_58[0]);
    }
  }
  FUN_00cfefb8(plVar5,param_1 + 1,0,"Not allowed to connecto to STUN server.",0x27);
  return;
}


// ===== 00d00384  FUN_00d00384 =====

void FUN_00d00384(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xd003fc);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      if (*(char *)((long)pvVar2 + 0x1f) < '\0') {
        operator_delete(*(void **)((long)pvVar2 + 8));
      }
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 00d003fc  FUN_00d003fc =====

void FUN_00d003fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d50d80;
  if (*(char *)((long)param_1 + 0x7f) < '\0') {
    operator_delete((void *)param_1[0xd]);
  }
  FUN_00c693c0(param_1);
  return;
}


// ===== 00d00448  FUN_00d00448 =====

void FUN_00d00448(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d50d80;
  if (*(char *)((long)param_1 + 0x7f) < '\0') {
    operator_delete((void *)param_1[0xd]);
  }
  FUN_00c693c0(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00d004a0  FUN_00d004a0 =====

void FUN_00d004a0(long param_1,undefined8 param_2)

{
  undefined2 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *pvVar7;
  char *pcVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  lVar2 = FUN_00c69f04(param_2,1);
  if (lVar2 == 0) {
    uVar5 = FUN_004249b0();
    if ((uVar5 & 1) != 0) goto LAB_00d005c0;
    pcVar8 = "Binding response missing mapped address.";
    uVar4 = 0x293;
  }
  else {
    lVar3 = FUN_007e8ea8(lVar2 + 0x10);
    if ((*(int *)(lVar3 + 8) == 2) ||
       (lVar3 = FUN_007e8ea8(lVar2 + 0x10), *(int *)(lVar3 + 8) == 10)) {
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
      local_50 = &DAT_aaaaaaaaaaaaaaaa;
      uVar4 = FUN_007e8ea8(lVar2 + 0x10);
      uVar1 = FUN_007e8eb4(lVar2 + 0x10);
      FUN_007e8cac(&local_90,uVar4,uVar1);
      uVar9 = *(undefined8 *)(param_1 + 0x60);
      uVar4 = FUN_00c6951c(param_1);
      FUN_00cff300(uVar9,uVar4,param_1 + 0x68,&local_90);
      if ((long)local_80 < 0) {
        operator_delete(local_90);
      }
      goto LAB_00d005c0;
    }
    uVar5 = FUN_004249b0();
    if ((uVar5 & 1) != 0) goto LAB_00d005c0;
    pcVar8 = "Binding address has bad family";
    uVar4 = 0x2ab;
  }
  FUN_00623bb0(&DAT_001f4e98,"../../p2p/base/stun_port.cc",uVar4,pcVar8);
LAB_00d005c0:
  lVar3 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  lVar10 = *(long *)(param_1 + 0xb0);
  lVar2 = 0x7fffffffffffffff;
  if ((lVar3 != 0x7fffffffffffffff) && (lVar10 != -0x8000000000000000)) {
    lVar2 = -0x8000000000000000;
    if (lVar10 != 0x7fffffffffffffff && lVar3 != -0x8000000000000000) {
      lVar2 = lVar3 - lVar10;
    }
  }
  lVar3 = *(long *)(param_1 + 0x60);
  if (lVar2 <= *(long *)(lVar3 + 0x318)) {
    puVar6 = (undefined8 *)operator_new(0xb8);
    pvVar7 = operator_new(0x80);
    FUN_00c69ccc(pvVar7,1);
    FUN_00c69328(puVar6,lVar3 + 8,lVar3 + 0x2a8,pvVar7);
    *puVar6 = &PTR_FUN_00d50d80;
    puVar6[0xc] = lVar3;
    FUN_007e8cec(puVar6 + 0xd,param_1 + 0x68);
    lVar2 = *(long *)(param_1 + 0x60);
    puVar6[0x16] = lVar10;
    *(undefined1 *)(puVar6 + 0xb) = 0;
    FUN_00c68ac8(lVar3 + 0x2a8,puVar6,*(undefined8 *)(lVar2 + 0x310));
  }
  return;
}


// ===== 00d00694  FUN_00d00694 =====

void FUN_00d00694(long param_1,undefined8 param_2)

{
  ulong uVar1;
  char ***pppcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 uStack_71;
  char **local_70;
  ulong uStack_68;
  undefined1 *local_60;
  char *local_50;
  char **ppcStack_48;
  
  lVar3 = FUN_00c6a048(param_2);
  uVar4 = FUN_004249b0();
  if (lVar3 == 0) {
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../p2p/base/stun_port.cc",0x333,
                   "Missing binding response error code.");
    }
    uVar7 = *(undefined8 *)(param_1 + 0x60);
    FUN_005d3510(&local_70,"STUN binding response with no error code attribute.");
    uVar4 = 600;
  }
  else {
    if ((uVar4 & 1) == 0) {
      local_60 = &uStack_71;
      local_70 = (char **)0x1b31d2;
      uStack_68 = 0x343;
      ppcStack_48 = (char **)&local_70;
      local_50 = "Binding error response: class=";
      FUN_00623bb0(&DAT_00214ec4,"../../p2p/base/stun_port.cc",0x343,
                   "Binding error response: class=",*(undefined1 *)(lVar3 + 0xc)," number=",
                   *(undefined1 *)(lVar3 + 0xd)," reason=",lVar3 + 0x10);
    }
    uVar4 = (ulong)*(byte *)(lVar3 + 0xd);
    uVar7 = *(undefined8 *)(param_1 + 0x60);
    if (*(char *)(lVar3 + 0x27) < '\0') {
      FUN_005478d8(&local_70,*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18));
    }
    else {
      local_60 = *(undefined1 **)(lVar3 + 0x20);
      uStack_68 = *(ulong *)(lVar3 + 0x18);
      local_70 = *(char ***)(lVar3 + 0x10);
    }
  }
  uVar1 = uStack_68;
  pppcVar2 = (char ***)local_70;
  if (-1 < (long)local_60) {
    uVar1 = (ulong)local_60 >> 0x38;
    pppcVar2 = &local_70;
  }
  FUN_00cfefb8(uVar7,param_1 + 0x68,uVar4,pppcVar2,uVar1);
  if ((long)local_60 < 0) {
    operator_delete(local_70);
  }
  lVar3 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  if ((lVar3 != 0x7fffffffffffffff) &&
     (lVar8 = *(long *)(param_1 + 0xb0), lVar8 != -0x8000000000000000)) {
    lVar9 = *(long *)(param_1 + 0x60);
    if (((lVar3 == -0x8000000000000000) ||
        ((lVar8 == 0x7fffffffffffffff || (lVar3 - lVar8 <= *(long *)(lVar9 + 0x318))))) &&
       ((lVar3 == -0x8000000000000000 ||
        ((lVar8 == 0x7fffffffffffffff || (lVar3 - lVar8 < 50000000)))))) {
      puVar5 = (undefined8 *)operator_new(0xb8);
      pvVar6 = operator_new(0x80);
      FUN_00c69ccc(pvVar6,1);
      FUN_00c69328(puVar5,lVar9 + 8,lVar9 + 0x2a8,pvVar6);
      *puVar5 = &PTR_FUN_00d50d80;
      puVar5[0xc] = lVar9;
      FUN_007e8cec(puVar5 + 0xd,param_1 + 0x68);
      lVar3 = *(long *)(param_1 + 0x60);
      puVar5[0x16] = lVar8;
      *(undefined1 *)(puVar5 + 0xb) = 0;
      FUN_00c68ac8(lVar9 + 0x2a8,puVar5,*(undefined8 *)(lVar3 + 0x310));
    }
  }
  return;
}


// ===== 00d008e4  FUN_00d008e4 =====

/* WARNING: Removing unreachable block (ram,0x00d009d4) */

void FUN_00d008e4(long param_1)

{
  ulong uVar1;
  long lVar2;
  void *local_a8 [2];
  char cStack_91;
  undefined1 local_60 [24];
  char *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  char *local_30;
  char **ppcStack_28;
  undefined1 uStack_1;
  
  uVar1 = FUN_004249b0();
  if ((uVar1 & 1) == 0) {
    local_48 = "../../p2p/base/stun_port.cc";
    local_40 = 0x3db;
    local_38 = &uStack_1;
    ppcStack_28 = &local_48;
    local_30 = "Binding request timed out from ";
    (**(code **)(**(long **)(*(long *)(param_1 + 0x60) + 0x2e8) + 0x10))(local_a8);
    FUN_007e924c(local_60,local_a8);
    lVar2 = (**(code **)(**(long **)(param_1 + 0x60) + 0x18))();
    FUN_00623bb0("\r\t\n\t\n\t",*ppcStack_28,*(undefined4 *)(ppcStack_28 + 1),local_30,local_60,
                 &DAT_001a2df6,lVar2 + 0x10,&DAT_001ca519);
    if (cStack_91 < '\0') {
      operator_delete(local_a8[0]);
    }
  }
  FUN_00cfefb8(*(undefined8 *)(param_1 + 0x60),param_1 + 0x68,0x2bd,
               "STUN binding request timed out.",0x1f);
  return;
}


// ===== 00d00a00  FUN_00d00a00 =====

void FUN_00d00a00(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 byte param_5)

{
  undefined **ppuVar1;
  
  FUN_00cf8790(param_1,param_2,0,param_3,param_4,0);
  ppuVar1 = &PTR_FUN_00d50dc8;
  *param_1 = &PTR_FUN_00d50dc8;
  *(byte *)(param_1 + 0x4c) = param_5;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x52] = param_1 + 0x52;
  param_1[0x53] = param_1 + 0x52;
  param_1[0x54] = 0;
  if ((param_5 & 1) != 0) {
    FUN_00d00a8c(param_1);
    ppuVar1 = (undefined **)*param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00d00a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)ppuVar1[0xd])(param_1,3,1);
  return;
}


// ===== 00d00a8c  FUN_00d00a8c =====

void FUN_00d00a8c(long *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_88 [32];
  long *local_68;
  code *pcStack_60;
  undefined8 local_58;
  
  plVar1 = (long *)(**(code **)(*param_1 + 0x138))();
  (**(code **)(*param_1 + 0x18))(param_1);
  FUN_00bca960(auStack_88);
  FUN_007e8cac(&local_68,auStack_88,0);
  lVar2 = (**(code **)(*plVar1 + 0x18))
                    (plVar1,param_1 + 1,&local_68,(short)param_1[0xb],
                     *(undefined2 *)((long)param_1 + 0x5a),0);
  plVar1 = (long *)param_1[0x4d];
  param_1[0x4d] = lVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  if ((long)local_58 < 0) {
    operator_delete(local_68);
    lVar2 = param_1[0x4d];
  }
  else {
    lVar2 = param_1[0x4d];
  }
  if (lVar2 == 0) {
    uVar3 = FUN_004022fc();
    if ((uVar3 & 1) == 0) {
      (**(code **)(*param_1 + 0x110))(&local_68,param_1);
      FUN_00623bb0(&DAT_00223e94,"../../p2p/base/tcp_port.cc",0x9a2,&local_68,
                   ": TCP server socket creation failed; continuing anyway.");
      if (local_58._7_1_ < '\0') {
        operator_delete(local_68);
      }
    }
  }
  else {
    local_68 = (long *)operator_new(0x20);
    *local_68 = (long)param_1;
    local_68[2] = (long)FUN_004473ec;
    local_68[3] = (long)FUN_00d03434;
    pcStack_60 = FUN_00d02d3c;
    local_58 = FUN_00d02d4c;
    FUN_007b5b08(lVar2 + 8,param_1,&local_68);
  }
  return;
}


// ===== 00d00bfc  FUN_00d00bfc =====

void FUN_00d00bfc(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  plVar1 = (long *)param_1[0x4d];
  param_1[0x4d] = 0;
  *param_1 = &PTR_FUN_00d50dc8;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  for (puVar6 = (undefined8 *)param_1[0x53]; puVar6 != param_1 + 0x52;
      puVar6 = (undefined8 *)puVar6[1]) {
    if ((long *)puVar6[0xb] != (long *)0x0) {
      (**(code **)(*(long *)puVar6[0xb] + 8))();
    }
  }
  FUN_00d02c3c(param_1 + 0x52);
  FUN_00d02c3c(param_1 + 0x52);
  pvVar2 = (void *)param_1[0x4e];
  if (pvVar2 != (void *)0x0) {
    pvVar3 = (void *)param_1[0x4f];
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
    while (pvVar3 != pvVar2) {
      pvVar3 = (void *)((long)pvVar3 + -8);
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[0x4f] = pvVar2;
    operator_delete(pvVar2);
  }
  plVar1 = (long *)param_1[0x4d];
  param_1[0x4d] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_00cf8d60(param_1);
  return;
}


// ===== 00d00d38  FUN_00d00d38 =====

void FUN_00d00d38(void *param_1)

{
  FUN_00d00bfc();
  operator_delete(param_1);
  return;
}


// ===== 00d00d68  FUN_00d00d68 =====

void * FUN_00d00d68(long *param_1,long param_2,int param_3)

{
  undefined8 *puVar1;
  short sVar2;
  int iVar3;
  ulong uVar4;
  size_t __n;
  void *pvVar5;
  undefined1 *puVar6;
  long lVar7;
  byte bVar8;
  int *piVar9;
  undefined8 *__s1;
  long *plVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [8];
  long local_50;
  undefined1 auStack_48 [8];
  
  __s1 = (undefined8 *)(param_2 + 0x20);
  uVar4 = *(ulong *)(param_2 + 0x28);
  puVar1 = (undefined8 *)*__s1;
  if (-1 < (char)*(byte *)(param_2 + 0x37)) {
    uVar4 = (ulong)*(byte *)(param_2 + 0x37);
    puVar1 = __s1;
  }
  uVar4 = (**(code **)(*param_1 + 0x48))(param_1,puVar1,uVar4);
  if ((uVar4 & 1) == 0) {
    return (void *)0x0;
  }
  bVar8 = *(byte *)(param_2 + 0x177);
  piVar9 = (int *)(param_2 + 0x160);
  if ((char)bVar8 < '\0') {
    if (*(long *)(param_2 + 0x168) == 6) {
      piVar9 = *(int **)piVar9;
      goto LAB_00d00de8;
    }
  }
  else if (bVar8 == 6) {
LAB_00d00de8:
    if (*piVar9 == 0x69746361 && (short)piVar9[1] == 0x6576) {
      uVar4 = FUN_00aff308(param_2);
      if ((uVar4 & 1) == 0) {
        return (void *)0x0;
      }
      bVar8 = *(byte *)(param_2 + 0x177);
    }
  }
  uVar4 = *(ulong *)(param_2 + 0x168);
  if ((bVar8 & 0x80) == 0) {
    uVar4 = (ulong)bVar8;
  }
  if (uVar4 == 0) {
    sVar2 = FUN_007e8eb4(param_2 + 0x50);
    if (param_3 == 1) {
      return (void *)0x0;
    }
    if (sVar2 == 0) {
      return (void *)0x0;
    }
  }
  else if (param_3 == 1) {
    return (void *)0x0;
  }
  __n = strlen("ssltcp");
  if ((long)*(char *)(param_2 + 0x37) < 0) {
    if (__n != *(size_t *)(param_2 + 0x28)) goto LAB_00d00ea8;
    if (__n == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_005f5590();
    }
    __s1 = (undefined8 *)*__s1;
  }
  else if (__n != (long)*(char *)(param_2 + 0x37)) goto LAB_00d00ea8;
  iVar3 = memcmp(__s1,PTR_s_ssltcp_00d528f8,__n);
  if (iVar3 == 0 && param_3 == 0) {
    return (void *)0x0;
  }
LAB_00d00ea8:
  uVar4 = FUN_00cfb3f8(param_1,param_2 + 0x50);
  if ((uVar4 & 1) == 0) {
    return (void *)0x0;
  }
  plVar10 = (long *)param_1[0x53];
  do {
    if (plVar10 == param_1 + 0x52) {
LAB_00d00ee4:
      pvVar5 = operator_new(0xb40);
      puVar11 = auStack_68;
      FUN_00d02ce8(auStack_68,param_1 + 0x4a);
      puVar6 = auStack_68;
      lVar7 = 0;
LAB_00d00f14:
      FUN_00d01a40(pvVar5,param_1 + 1,puVar6,param_2,lVar7);
      FUN_00988344(puVar11);
      FUN_00cf9d80(param_1,pvVar5);
      return pvVar5;
    }
    uVar4 = FUN_007e973c(plVar10 + 2,param_2 + 0x50);
    if ((uVar4 & 1) != 0) {
      lVar7 = plVar10[0xb];
      FUN_00d01988(param_1 + 0x52,plVar10);
      if (lVar7 != 0) {
        FUN_00897ea8(lVar7);
        pvVar5 = operator_new(0xb40);
        FUN_00988288(auStack_48,param_1 + 0x4a);
        lVar12 = param_1[0x4b];
        puVar11 = auStack_58;
        FUN_00988398(auStack_58,auStack_48);
        local_50 = lVar12;
        FUN_00988108(auStack_48);
        puVar6 = auStack_58;
        goto LAB_00d00f14;
      }
      goto LAB_00d00ee4;
    }
    plVar10 = (long *)plVar10[1];
  } while( true );
}


// ===== 00d00fc4  FUN_00d00fc4 =====

/* WARNING: Removing unreachable block (ram,0x00d011f4) */
/* WARNING: Removing unreachable block (ram,0x00d010e0) */
/* WARNING: Removing unreachable block (ram,0x00d0120c) */

void FUN_00d00fc4(long *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  size_t sVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 auStack_148 [32];
  undefined1 auStack_128 [32];
  void *local_108 [2];
  char cStack_f1;
  undefined1 local_c0 [72];
  undefined1 local_78 [72];
  
  if (param_1[0x4d] == 0) {
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      (**(code **)(*param_1 + 0x110))(local_78,param_1);
      FUN_00623bb0(&DAT_00223e94,"../../p2p/base/tcp_port.cc",0x5b9,local_78,
                   ": Not listening due to firewall restrictions.");
    }
    (**(code **)(*param_1 + 0x18))(param_1);
    FUN_00bca960(auStack_128);
    FUN_007e8cac(local_78,auStack_128,9);
    (**(code **)(*param_1 + 0x18))(param_1);
    FUN_00bca960(auStack_148);
    FUN_007e8cac(local_c0,auStack_148,0);
    FUN_007e8a64(local_108);
    sVar3 = strlen("tcp");
    uVar4 = 6;
    pcVar5 = "active";
  }
  else {
    uVar2 = FUN_0044075c();
    if ((uVar2 & 1) == 0) {
      uVar1 = (**(code **)(*(long *)param_1[0x4d] + 0x10))();
      FUN_00623bb0(&DAT_001f4e94,"../../p2p/base/tcp_port.cc",0x580,
                   "Preparing TCP address, current state: ",uVar1);
    }
    (**(code **)(*(long *)param_1[0x4d] + 0x18))(local_78);
    (**(code **)(*(long *)param_1[0x4d] + 0x18))(local_c0);
    FUN_007e8a64(local_108);
    sVar3 = strlen("tcp");
    pcVar5 = "passive";
    uVar4 = 7;
  }
  FUN_00cf9524(param_1,local_78,local_c0,local_108,&DAT_00254720,sVar3,&DAT_001b3348,0,pcVar5,uVar4,
               0,0x5a,0,&DAT_001b3348,0,1);
  if (cStack_f1 < '\0') {
    operator_delete(local_108[0]);
  }
  return;
}


// ===== 00d01220  FUN_00d01220 =====

/* WARNING: Removing unreachable block (ram,0x00d01490) */

int FUN_00d01220(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  long *plVar7;
  void *local_f8 [2];
  char cStack_e1;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined8 local_d0;
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
  char *local_68;
  ulong local_60;
  undefined1 *local_58;
  undefined1 uStack_31;
  
  lVar3 = (**(code **)(*param_1 + 0x58))(param_1,param_4);
  if (lVar3 == 0) {
    for (plVar7 = (long *)param_1[0x53]; plVar7 != param_1 + 0x52; plVar7 = (long *)plVar7[1]) {
      uVar4 = FUN_007e973c(plVar7 + 2,param_4);
      if ((uVar4 & 1) != 0) {
        plVar7 = (long *)plVar7[0xb];
        if (plVar7 != (long *)0x0) goto LAB_00d01380;
        break;
      }
    }
    uVar4 = FUN_004249b0();
    if ((uVar4 & 1) != 0) goto LAB_00d01358;
    (**(code **)(*param_1 + 0x110))(&local_e0,param_1);
    FUN_007e924c(&local_68,param_4);
    pcVar6 = ": Attempted to send to an unknown destination: ";
    uVar5 = 0x733;
  }
  else {
    uVar4 = FUN_00c66bfc();
    if ((uVar4 & 1) == 0) {
      FUN_00d014bc(lVar3);
      return -1;
    }
    plVar7 = *(long **)(lVar3 + 0xb20);
    if (plVar7 != (long *)0x0) {
LAB_00d01380:
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
      puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
      local_e0 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00897be8(&local_e0,param_5);
      FUN_00cfc5f0(param_1,&puStack_a0);
      iVar1 = (**(code **)(*plVar7 + 0x20))(plVar7,param_2,param_3,&local_e0);
      if (iVar1 < 0) {
        uVar2 = (**(code **)(*plVar7 + 0x50))(plVar7);
        *(undefined4 *)(param_1 + 0x51) = uVar2;
        uVar4 = FUN_004249b0();
        if ((uVar4 & 1) == 0) {
          local_68 = "../../p2p/base/tcp_port.cc";
          local_60 = 0x7ab;
          local_58 = &uStack_31;
          (**(code **)(*param_1 + 0x110))(local_f8,param_1);
          FUN_00623bb0(&DAT_0025a757,local_68,local_60 & 0xffffffff,local_f8,": TCP send of ",
                       param_3," bytes failed with error ",(int)param_1[0x51]);
          if (cStack_e1 < '\0') {
            operator_delete(local_f8[0]);
          }
        }
      }
      FUN_00897c8c(&local_e0);
      return iVar1;
    }
    uVar4 = FUN_00417e08();
    if ((uVar4 & 1) != 0) goto LAB_00d01358;
    (**(code **)(*param_1 + 0x110))(&local_e0,param_1);
    FUN_007e924c(&local_68,param_4);
    pcVar6 = ": Attempted to send to an uninitialized socket: ";
    uVar5 = 0x6e9;
  }
  FUN_00623bb0(&DAT_0025987e,"../../p2p/base/tcp_port.cc",uVar5,&local_e0,pcVar6,&local_68);
  if (local_d0._7_1_ < '\0') {
    operator_delete(local_e0);
  }
LAB_00d01358:
  *(undefined4 *)(param_1 + 0x51) = 0x71;
  return -1;
}


// ===== 00d014bc  FUN_00d014bc =====

void FUN_00d014bc(long param_1)

{
  ulong uVar1;
  void *local_38 [2];
  char cStack_21;
  
  uVar1 = FUN_00c66bfc();
  if ((((uVar1 & 1) == 0) && ((*(byte *)(param_1 + 0xb2d) & 1) == 0)) &&
     (*(char *)(param_1 + 0xb2c) == '\x01')) {
    uVar1 = FUN_00417e08();
    if ((uVar1 & 1) == 0) {
      FUN_00c61eb8(local_38,param_1);
      FUN_00623bb0(&DAT_00223e94,"../../p2p/base/tcp_port.cc",0x11c1,local_38,
                   ": TCP Connection with remote is closed, trying to reconnect");
      if (cStack_21 < '\0') {
        operator_delete(local_38[0]);
      }
    }
    FUN_00d01c74(param_1);
    *(undefined4 *)(param_1 + 0xb28) = 0x20;
  }
  return;
}


// ===== 00d01564  FUN_00d01564 =====

undefined8 FUN_00d01564(long param_1,int param_2,int *param_3)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  ulong uVar4;
  ulong uVar5;
  
  piVar2 = *(int **)(param_1 + 0x270);
  lVar1 = (long)*(int **)(param_1 + 0x278) - (long)piVar2;
  if (lVar1 != 0) {
    uVar4 = lVar1 >> 3;
    piVar3 = piVar2;
    do {
      uVar5 = uVar4 >> 1;
      piVar2 = piVar3 + uVar5 * 2 + 2;
      uVar4 = uVar4 + ~uVar5;
      if (param_2 <= piVar3[uVar5 * 2]) {
        piVar2 = piVar3;
        uVar4 = uVar5;
      }
      piVar3 = piVar2;
    } while (uVar4 != 0);
  }
  if ((piVar2 != *(int **)(param_1 + 0x278)) && (*piVar2 <= param_2)) {
    *param_3 = piVar2[1];
    return 0;
  }
  return 0xffffffff;
}


// ===== 00d015cc  FUN_00d015cc =====

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00d015cc(long param_1,int param_2,int param_3)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  ulong uVar4;
  ulong uVar5;
  int local_8 [2];
  
  piVar2 = *(int **)(param_1 + 0x270);
  lVar1 = (long)*(int **)(param_1 + 0x278) - (long)piVar2;
  if (lVar1 != 0) {
    uVar4 = lVar1 >> 3;
    piVar3 = piVar2;
    do {
      uVar5 = uVar4 >> 1;
      piVar2 = piVar3 + uVar5 * 2 + 2;
      uVar4 = uVar4 + ~uVar5;
      if (param_2 <= piVar3[uVar5 * 2]) {
        piVar2 = piVar3;
        uVar4 = uVar5;
      }
      piVar3 = piVar2;
    } while (uVar4 != 0);
  }
  if ((piVar2 == *(int **)(param_1 + 0x278)) || (param_2 < *piVar2)) {
    local_8[1] = 0;
    local_8[0] = param_2;
    piVar2 = (int *)FUN_00d02d8c(param_1 + 0x270,piVar2,local_8,local_8 + 1);
  }
  piVar2[1] = param_3;
  return 0;
}


// ===== 00d01664  FUN_00d01664 =====

undefined4 FUN_00d01664(long param_1)

{
  return *(undefined4 *)(param_1 + 0x288);
}


// ===== 00d01670  FUN_00d01670 =====

bool FUN_00d01670(undefined8 param_1,void *param_2,size_t param_3)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  
  sVar3 = strlen(PTR_DAT_00d528f0);
  if ((param_3 == sVar3) && (iVar2 = memcmp(param_2,PTR_DAT_00d528f0,sVar3), iVar2 == 0)) {
    bVar1 = true;
  }
  else {
    sVar3 = strlen("ssltcp");
    if (param_3 == sVar3) {
      iVar2 = memcmp(param_2,PTR_s_ssltcp_00d528f8,param_3);
      bVar1 = iVar2 == 0;
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}


// ===== 00d01704  FUN_00d01704 =====

undefined8 FUN_00d01704(void)

{
  return 2;
}


// ===== 00d01710  FUN_00d01710 =====

/* WARNING: Removing unreachable block (ram,0x00d0191c) */

void FUN_00d01710(long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *local_138 [2];
  char cStack_121;
  long *local_120 [2];
  code *local_110;
  code *pcStack_108;
  long *local_100 [2];
  code *local_f0;
  code *pcStack_e8;
  long *local_d8;
  code *pcStack_d0;
  undefined8 local_c8;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  long *local_48;
  
  puVar5 = (undefined4 *)param_1[0x4f];
  for (puVar4 = (undefined4 *)param_1[0x4e]; puVar4 != puVar5; puVar4 = puVar4 + 2) {
    (**(code **)(*param_3 + 0x48))(param_3,*puVar4,puVar4[1]);
  }
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007e8a64(&local_90);
  (**(code **)(*param_3 + 0x18))(&local_d8,param_3);
  FUN_007e8d84(&local_90,&local_d8);
  if (local_c8._7_1_ < '\0') {
    operator_delete(local_d8);
  }
  local_f0 = FUN_004473ec;
  pcStack_e8 = FUN_00d03400;
  local_100[0] = param_1;
  local_48 = param_3;
  FUN_00897e08(param_3,local_100);
  (*local_f0)(0,local_100,local_100);
  plVar2 = local_48;
  local_d8 = (long *)operator_new(0x20);
  *local_d8 = (long)param_1;
  local_d8[2] = (long)FUN_004473ec;
  local_d8[3] = (long)FUN_00d03414;
  pcStack_d0 = FUN_00cf7ca4;
  local_c8 = FUN_00cf7cb4;
  FUN_007b5b08(plVar2 + 0x12,param_1,&local_d8);
  local_110 = FUN_004473ec;
  pcStack_108 = FUN_00d03420;
  local_120[0] = param_1;
  FUN_00897f10(local_48,param_1,local_120);
  (*local_110)(0,local_120,local_120);
  uVar1 = FUN_0044075c();
  if ((uVar1 & 1) == 0) {
    (**(code **)(*param_1 + 0x110))(&local_d8,param_1);
    FUN_007e924c(local_138,&local_90);
    FUN_00623bb0(&DAT_0025987e,"../../p2p/base/tcp_port.cc",0x950,&local_d8,
                 ": Accepted connection from ",local_138);
    if (cStack_121 < '\0') {
      operator_delete(local_138[0]);
    }
    if ((long)local_c8 < 0) {
      operator_delete(local_d8);
    }
  }
  plVar2 = (long *)operator_new(0x60);
  if (plVar2 != (long *)0x0) {
    *plVar2 = 0;
    plVar2[1] = 0;
    if (plVar2 + 2 != (long *)0x0) {
      FUN_007e8cec(plVar2 + 2,&local_90);
      lVar3 = param_1[0x52];
      plVar2[0xb] = (long)local_48;
      *plVar2 = lVar3;
      plVar2[1] = (long)(param_1 + 0x52);
      *(long **)(lVar3 + 8) = plVar2;
      param_1[0x52] = (long)plVar2;
      param_1[0x54] = param_1[0x54] + 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00d01988  FUN_00d01988 =====

long * FUN_00d01988(long *param_1,long *param_2)

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
  if (param_2 != (long *)0xfffffffffffffff0) {
    if (*(char *)((long)param_2 + 0x27) < '\0') {
      operator_delete((void *)param_2[2]);
    }
    if (param_2 != (long *)0x0) {
      operator_delete(param_2);
      return plVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00d01a2c  FUN_00d01a2c =====

void FUN_00d01a2c(long *param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00d01a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x108))(param_1,param_3);
  return;
}


// ===== 00d01a40  FUN_00d01a40 =====

/* WARNING: Removing unreachable block (ram,0x00d01c30) */
/* WARNING: Removing unreachable block (ram,0x00d01c60) */

void FUN_00d01a40(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 long param_5)

{
  ulong uVar1;
  long *plVar2;
  void *local_e0 [2];
  char cStack_c9;
  undefined8 *local_c8;
  code *pcStack_c0;
  code *local_b8;
  undefined1 local_80 [24];
  undefined1 local_68 [24];
  undefined1 auStack_50 [8];
  undefined8 local_48;
  
  FUN_0098815c(auStack_50,param_3);
  local_48 = *(undefined8 *)(param_3 + 8);
  FUN_00c61b3c(param_1,param_2,auStack_50,0,param_4);
  FUN_00988344(auStack_50);
  *param_1 = &PTR_FUN_00d50fa0;
  *(bool *)((long)param_1 + 0xb2c) = param_5 == 0;
  *(undefined2 *)((long)param_1 + 0xb2d) = 0;
  *(undefined4 *)(param_1 + 0x166) = 5000;
  param_1[0x164] = param_5;
  *(undefined4 *)(param_1 + 0x165) = 0;
  FUN_007ebca0(param_1 + 0x167);
  local_c8 = (undefined8 *)operator_new(0x20);
  *local_c8 = param_1;
  local_c8[2] = FUN_004473ec;
  local_c8[3] = FUN_00d03440;
  pcStack_c0 = FUN_00c59850;
  local_b8 = FUN_00c59860;
  FUN_007b5b08(param_1 + 0x158,param_1,&local_c8);
  if (*(char *)((long)param_1 + 0xb2c) == '\x01') {
    FUN_00d01c74(param_1);
  }
  else {
    uVar1 = FUN_0044075c();
    if ((uVar1 & 1) == 0) {
      FUN_00c61eb8(local_68,param_1);
      (**(code **)(*(long *)param_1[0x164] + 0x10))(&local_c8);
      FUN_007e924c(local_80,&local_c8);
      uVar1 = FUN_009881a4(param_1 + 8);
      if ((uVar1 & 1) == 0) {
        plVar2 = (long *)0x0;
      }
      else {
        plVar2 = (long *)param_1[9];
      }
      (**(code **)(*plVar2 + 0x18))();
      FUN_00bcc3dc(local_e0);
      FUN_00623bb0("\r\n\t\n\t\n","../../p2p/base/tcp_port.cc",0xbc0,local_68,": socket ipaddr: ",
                   local_80,", port() Network:",local_e0);
      if (cStack_c9 < '\0') {
        operator_delete(local_e0[0]);
      }
      if ((long)local_b8 < 0) {
        operator_delete(local_c8);
      }
    }
    FUN_00d020c4(param_1,param_5);
  }
  return;
}


// ===== 00d01c74  FUN_00d01c74 =====

void FUN_00d01c74(long *param_1)

{
  int iVar1;
  long lVar2;
  size_t __n;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *__s1;
  uint uVar6;
  void *local_120 [2];
  char cStack_109;
  void *local_108 [2];
  char cStack_f1;
  void *local_f0 [2];
  char cStack_d9;
  long *local_d0 [2];
  undefined8 local_c0;
  code *pcStack_b8;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  lVar2 = (**(code **)(*param_1 + 0x18))();
  __s1 = (undefined8 *)(lVar2 + 0x20);
  __n = strlen("ssltcp");
  if ((long)*(char *)(lVar2 + 0x37) < 0) {
    if (__n == *(size_t *)(lVar2 + 0x28)) {
      if (__n == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_005f5590();
      }
      __s1 = (undefined8 *)*__s1;
      goto LAB_00d01ce4;
    }
LAB_00d01d00:
    uVar6 = 0;
  }
  else {
    if (__n != (long)*(char *)(lVar2 + 0x37)) goto LAB_00d01d00;
LAB_00d01ce4:
    iVar1 = memcmp(__s1,PTR_s_ssltcp_00d528f8,__n);
    uVar6 = (uint)(iVar1 == 0);
  }
  lVar2 = param_1[0x164];
  if (lVar2 != 0) {
    if (*(char *)((long)param_1 + 0xb2c) == '\x01') {
      FUN_007b5df8(lVar2 + 0x50,param_1);
      FUN_007b5df8(lVar2 + 0x90,param_1);
      FUN_007b5df8(lVar2 + 0x70,param_1);
    }
    FUN_00897ea8(lVar2);
    FUN_00897dfc(lVar2,param_1);
  }
  local_48 = 0;
  local_80 = CONCAT44(0xaaaaaaaa,uVar6);
  uStack_70 = 0;
  local_78 = 0;
  uStack_60 = 0;
  local_68 = 0;
  uStack_50 = 0;
  local_58 = 0;
  uVar3 = FUN_009881a4(param_1 + 8);
  plVar4 = (long *)0x0;
  if ((uVar3 & 1) != 0) {
    plVar4 = (long *)param_1[9];
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x138))();
  uVar3 = FUN_009881a4(param_1 + 8);
  if ((uVar3 & 1) == 0) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = (long *)param_1[9];
  }
  (**(code **)(*plVar5 + 0x18))();
  FUN_00bca960(local_f0);
  FUN_007e8cac(local_d0,local_f0,0);
  lVar2 = (**(code **)(*param_1 + 0x18))(param_1);
  lVar2 = (**(code **)(*plVar4 + 0x20))(plVar4,param_1 + 1,local_d0,lVar2 + 0x50,&local_80);
  plVar4 = (long *)param_1[0x164];
  param_1[0x164] = lVar2;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  if ((long)local_c0 < 0) {
    operator_delete(local_d0[0]);
    lVar2 = param_1[0x164];
  }
  else {
    lVar2 = param_1[0x164];
  }
  if (lVar2 != 0) {
    uVar3 = FUN_0044075c();
    if ((uVar3 & 1) == 0) {
      FUN_00c61eb8(local_f0,param_1);
      (**(code **)(*(long *)param_1[0x164] + 0x10))(local_d0);
      FUN_007e924c(local_108,local_d0);
      lVar2 = (**(code **)(*param_1 + 0x18))(param_1);
      FUN_007e924c(local_120,lVar2 + 0x50);
      FUN_00623bb0("\r\n\t\n\t\n","../../p2p/base/tcp_port.cc",0x1328,local_f0,": Connecting from ",
                   local_108,&DAT_0019fec4,local_120);
      if (cStack_109 < '\0') {
        operator_delete(local_120[0]);
      }
      if (cStack_f1 < '\0') {
        operator_delete(local_108[0]);
      }
      if ((long)local_c0 < 0) {
        operator_delete(local_d0[0]);
      }
      if (cStack_d9 < '\0') {
        operator_delete(local_f0[0]);
      }
    }
    FUN_00c62b94(param_1,0);
    *(undefined1 *)((long)param_1 + 0xb2d) = 1;
    FUN_00d020c4(param_1,param_1[0x164]);
    goto LAB_00d02014;
  }
  uVar3 = FUN_004022fc();
  if ((uVar3 & 1) == 0) {
    FUN_00c61eb8(local_d0,param_1);
    lVar2 = (**(code **)(*param_1 + 0x18))(param_1);
    FUN_007e924c(local_f0,lVar2 + 0x50);
    FUN_00623bb0(&DAT_0025987e,"../../p2p/base/tcp_port.cc",0x136a,local_d0,
                 ": Failed to create connection to ",local_f0);
    if (cStack_d9 < '\0') {
      operator_delete(local_f0[0]);
      if (local_c0._7_1_ < '\0') goto LAB_00d020ac;
    }
    else if ((long)local_c0 < 0) {
LAB_00d020ac:
      operator_delete(local_d0[0]);
    }
  }
  FUN_00c62b04(param_1,3);
  plVar4 = (long *)FUN_00c62750(param_1);
  lVar2 = param_1[0x167];
  if (lVar2 != 0) {
    FUN_00d0f740(1,lVar2);
  }
  local_d0[0] = (long *)operator_new(0x30);
  *local_d0[0] = lVar2;
  local_d0[0][4] = (long)FUN_004473ec;
  local_d0[0][5] = (long)FUN_00d034d8;
  local_d0[0][2] = (long)param_1;
  local_c0 = FUN_005db390;
  pcStack_b8 = FUN_005db348;
  (**(code **)(*plVar4 + 8))(plVar4,local_d0,local_f0,local_108);
  (*local_c0)(0,local_d0,local_d0);
LAB_00d02014:
  FUN_00cf1eac(&local_80);
  return;
}


// ===== 00d020c4  FUN_00d020c4 =====

void FUN_00d020c4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long local_c0 [2];
  code *local_b0;
  code *pcStack_a8;
  long local_a0 [2];
  code *local_90;
  code *pcStack_88;
  long *local_80;
  code *pcStack_78;
  code *local_70;
  long *local_68 [2];
  code *local_58;
  undefined **local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0xb2c) == '\x01') {
    local_80 = (long *)operator_new(0x20);
    *local_80 = param_1;
    local_80[2] = (long)FUN_004473ec;
    local_80[3] = (long)FUN_00d034e4;
    pcStack_78 = FUN_00cf7ca4;
    local_70 = FUN_00cf7cb4;
    FUN_007b5b08(param_2 + 0x50,param_1,&local_80);
    local_90 = FUN_004473ec;
    pcStack_88 = FUN_00d034f0;
    local_a0[0] = param_1;
    FUN_00897f10(param_2,param_1,local_a0);
    (*local_90)(0,local_a0,local_a0);
    local_80 = (long *)operator_new(0x20);
    *local_80 = param_1;
    local_80[2] = (long)FUN_004473ec;
    local_80[3] = (long)FUN_00d03560;
    pcStack_78 = FUN_00cf7ca4;
    local_70 = FUN_00cf7cb4;
    FUN_007b5b08(param_2 + 0x90,param_1,&local_80);
  }
  local_b0 = FUN_004473ec;
  pcStack_a8 = FUN_00d0356c;
  local_c0[0] = param_1;
  FUN_00897e08(param_2,local_c0);
  (*local_b0)(0,local_c0,local_c0);
  lVar2 = *(long *)(param_1 + 0xb38);
  if (lVar2 != 0) {
    FUN_00d0f740(1,lVar2);
  }
  local_58 = FUN_00d0357c;
  local_50 = &PTR_FUN_00d50ff0;
  local_68[0] = (long *)operator_new(0x10);
  *local_68[0] = param_1;
  local_68[0][1] = lVar2;
  FUN_00897d70(param_2,param_1,local_68);
  if ((code *)local_50[1] != (code *)0x0) {
    (*(code *)local_50[1])(local_68[0]);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00d02268  FUN_00d02268 =====

void FUN_00d02268(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  
  *param_1 = &PTR_FUN_00d50fa0;
  FUN_007ebdcc(param_1[0x167]);
  pvVar3 = (void *)param_1[0x167];
  if ((pvVar3 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar3), iVar1 == 1)) {
    operator_delete(pvVar3);
  }
  plVar2 = (long *)param_1[0x164];
  param_1[0x164] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_00c682e0(param_1);
  return;
}


// ===== 00d022e4  FUN_00d022e4 =====

void FUN_00d022e4(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  
  *param_1 = &PTR_FUN_00d50fa0;
  FUN_007ebdcc(param_1[0x167]);
  pvVar3 = (void *)param_1[0x167];
  if ((pvVar3 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar3), iVar1 == 1)) {
    operator_delete(pvVar3);
  }
  plVar2 = (long *)param_1[0x164];
  param_1[0x164] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_00c682e0(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00d0236c  FUN_00d0236c =====

uint FUN_00d0236c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
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
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  if (*(long *)(param_1 + 0xb20) != 0) {
    uVar4 = FUN_00c66bfc(param_1);
    if ((uVar4 & 1) == 0) {
      FUN_00d014bc(param_1);
      return 0xffffffff;
    }
    if (((*(byte *)(param_1 + 0xb2e) & 1) == 0) && (iVar1 = FUN_00c66be4(param_1), iVar1 == 0)) {
      *(long *)(param_1 + 0x3b0) = *(long *)(param_1 + 0x3b0) + 1;
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
      puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
      local_a0 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00897be8(&local_a0,param_4);
      uVar4 = FUN_009881a4(param_1 + 0x40);
      if ((uVar4 & 1) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(param_1 + 0x48);
      }
      FUN_00cfc5f0(uVar5,&puStack_60);
      uVar2 = (**(code **)(**(long **)(param_1 + 0xb20) + 0x20))
                        (*(long **)(param_1 + 0xb20),param_2,param_3,&local_a0);
      uVar5 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(*(long **)(param_1 + 0x18));
      if ((int)uVar2 < 0) {
        *(long *)(param_1 + 0x3a8) = *(long *)(param_1 + 0x3a8) + 1;
        uVar3 = (**(code **)(**(long **)(param_1 + 0xb20) + 0x50))();
        *(undefined4 *)(param_1 + 0xb28) = uVar3;
      }
      else {
        FUN_008532e0(param_1 + 0x7d8,(ulong)uVar2,uVar5);
        *(ulong *)(param_1 + 0x398) = *(long *)(param_1 + 0x398) + (ulong)uVar2;
      }
      *(undefined8 *)(param_1 + 0x838) = uVar5;
      FUN_00897c8c(&local_a0);
      return uVar2;
    }
  }
  *(undefined4 *)(param_1 + 0xb28) = 0x6b;
  return 0xffffffff;
}


// ===== 00d024d4  FUN_00d024d4 =====

undefined4 FUN_00d024d4(long param_1)

{
  return *(undefined4 *)(param_1 + 0xb28);
}


// ===== 00d024e0  FUN_00d024e0 =====

void FUN_00d024e0(long param_1)

{
  FUN_00c67034();
  if (*(char *)(param_1 + 0xb2e) == '\x01') {
    FUN_00c65258(param_1);
  }
  *(undefined1 *)(param_1 + 0xb2e) = 0;
  return;
}


// ===== 00d02520  FUN_00d02520 =====

/* WARNING: Removing unreachable block (ram,0x00d02780) */
/* WARNING: Removing unreachable block (ram,0x00d026c8) */
/* WARNING: Removing unreachable block (ram,0x00d02898) */

void FUN_00d02520(long param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  undefined1 uStack_159;
  char *local_158;
  char **ppcStack_150;
  char **local_148;
  char **ppcStack_140;
  char cStack_131;
  char *local_130 [2];
  char cStack_119;
  char *local_118;
  ulong local_110;
  char **local_108;
  void *local_d0 [2];
  char cStack_b9;
  char *local_88;
  undefined8 local_80;
  char **local_78;
  
  uVar1 = FUN_009881a4(param_1 + 0x40);
  if (((uVar1 & 1) == 0) || (*(long *)(param_1 + 0x48) == 0)) {
    uVar1 = FUN_004249b0();
    if ((uVar1 & 1) != 0) {
      return;
    }
    FUN_00623bb0(&DAT_001f4e98,"../../p2p/base/tcp_port.cc",0xe73,
                 "TCPConnection: Port has been deleted.");
    return;
  }
  (**(code **)(*param_2 + 0x10))(local_d0,param_2);
  uVar1 = FUN_009881a4(param_1 + 0x40);
  if ((uVar1 & 1) == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = *(long **)(param_1 + 0x48);
  }
  lVar3 = (**(code **)(*plVar2 + 0x18))();
  FUN_007e8cec(&local_118,local_d0);
  lVar7 = *(long *)(lVar3 + 0x80);
  lVar3 = *(long *)(lVar3 + 0x88);
  FUN_007e8cec(&local_88,&local_118);
  if (lVar7 == lVar3) {
    uVar1 = 0;
  }
  else {
    do {
      uVar4 = FUN_007e8ea8(&local_88);
      uVar5 = FUN_007e9cb8(uVar4,lVar7);
      uVar1 = uVar5 & 0xffffffff;
      if ((uVar5 & 1) != 0) break;
      lVar7 = lVar7 + 0x20;
    } while (lVar7 != lVar3);
  }
  if ((long)local_108 < 0) {
    operator_delete(local_118);
    if ((uVar1 & 1) == 0) goto LAB_00d026f4;
LAB_00d0263c:
    uVar1 = FUN_0044075c();
    if ((uVar1 & 1) != 0) goto LAB_00d0296c;
    local_118 = "../../p2p/base/tcp_port.cc";
    local_110 = 0xf28;
    local_108 = &local_158;
    FUN_00c61eb8(local_130,param_1);
    (**(code **)(*param_2 + 0x18))(&local_88,param_2);
    FUN_007e924c(&local_148,&local_88);
    FUN_00623bb0(&DAT_0025987e,local_118,local_110 & 0xffffffff,local_130,
                 ": Connection established to ",&local_148);
    if (cStack_131 < '\0') {
      operator_delete(local_148);
    }
    if (-1 < cStack_119) goto LAB_00d0296c;
LAB_00d02964:
    operator_delete(local_130[0]);
  }
  else {
    if ((uVar1 & 1) != 0) goto LAB_00d0263c;
LAB_00d026f4:
    (**(code **)(*param_2 + 0x10))(&local_88,param_2);
    uVar1 = FUN_007e9604(&local_88);
    if ((uVar1 & 1) == 0) {
      uVar1 = FUN_009881a4(param_1 + 0x40);
      if ((uVar1 & 1) == 0) {
        plVar2 = (long *)0x0;
      }
      else {
        plVar2 = *(long **)(param_1 + 0x48);
      }
      (**(code **)(*plVar2 + 0x18))();
      FUN_00bca960(&local_88);
      uVar1 = FUN_007ea478(&local_88);
      uVar5 = FUN_004022fc();
      if ((uVar1 & 1) == 0) {
        if ((uVar5 & 1) == 0) {
          local_88 = "../../p2p/base/tcp_port.cc";
          local_80 = 0xfba;
          local_78 = &local_158;
          ppcStack_140 = &local_88;
          local_148 = (char **)0x199a81;
          FUN_007e8ea8(local_d0);
          FUN_007e9f18(&local_118);
          uVar1 = FUN_009881a4(param_1 + 0x40);
          if ((uVar1 & 1) == 0) {
            plVar2 = (long *)0x0;
          }
          else {
            plVar2 = *(long **)(param_1 + 0x48);
          }
          (**(code **)(*plVar2 + 0x18))();
          FUN_00bcc3dc(local_130);
          FUN_00623bb0("\r\t\n\t\n",*ppcStack_140,*(undefined4 *)(ppcStack_140 + 1),local_148,
                       &local_118,", rather than an address associated with network:",local_130);
          if (cStack_119 < '\0') {
            operator_delete(local_130[0]);
          }
          if ((long)local_108 < 0) {
            operator_delete(local_118);
          }
        }
        FUN_00d02a38(param_1);
        goto joined_r0x00d02980;
      }
      if ((uVar5 & 1) == 0) {
        local_88 = "../../p2p/base/tcp_port.cc";
        local_80 = 0xf7a;
        local_78 = (char **)&uStack_159;
        ppcStack_150 = &local_88;
        local_158 = "Socket is bound to the address:";
        FUN_007e8ea8(local_d0);
        FUN_007e9f18(&local_118);
        ppcStack_140 = &local_158;
        local_148 = &local_118;
        uVar1 = FUN_009881a4(param_1 + 0x40);
        if ((uVar1 & 1) == 0) {
          plVar2 = (long *)0x0;
        }
        else {
          plVar2 = *(long **)(param_1 + 0x48);
        }
        (**(code **)(*plVar2 + 0x18))();
        FUN_00bcc3dc(local_130);
        pcVar6 = 
        ". Still allowing it since it\'s the \'any\' address, possibly caused by multiple_routes being disabled."
        ;
        goto LAB_00d02928;
      }
    }
    else {
      uVar1 = FUN_004022fc();
      if ((uVar1 & 1) == 0) {
        local_88 = "../../p2p/base/tcp_port.cc";
        local_80 = 0xf4a;
        local_78 = (char **)&uStack_159;
        ppcStack_150 = &local_88;
        local_158 = "Socket is bound to the address:";
        FUN_007e8ea8(local_d0);
        FUN_007e9f18(&local_118);
        ppcStack_140 = &local_158;
        local_148 = &local_118;
        uVar1 = FUN_009881a4(param_1 + 0x40);
        if ((uVar1 & 1) == 0) {
          plVar2 = (long *)0x0;
        }
        else {
          plVar2 = *(long **)(param_1 + 0x48);
        }
        (**(code **)(*plVar2 + 0x18))();
        FUN_00bcc3dc(local_130);
        pcVar6 = ". Still allowing it since it\'s localhost.";
LAB_00d02928:
        FUN_00623bb0("\r\t\n\t\n\t",*(undefined8 *)ppcStack_140[1],
                     *(undefined4 *)(ppcStack_140[1] + 8),*ppcStack_140,local_148,
                     ", rather than an address associated with network:",local_130,pcVar6);
        if (cStack_119 < '\0') {
          operator_delete(local_130[0]);
        }
        local_130[0] = local_118;
        if ((long)local_108 < 0) goto LAB_00d02964;
      }
    }
  }
LAB_00d0296c:
  FUN_00c62b94(param_1,1);
  *(undefined1 *)(param_1 + 0xb2d) = 0;
joined_r0x00d02980:
  if (cStack_b9 < '\0') {
    operator_delete(local_d0[0]);
  }
  return;
}


// ===== 00d02a38  FUN_00d02a38 =====

void FUN_00d02a38(long param_1,undefined8 param_2,undefined4 param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *local_50 [2];
  undefined8 local_40;
  code *pcStack_38;
  undefined1 local_14 [3];
  undefined1 uStack_11;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00c61eb8(local_50,param_1);
    FUN_00623bb0(&DAT_00259892,"../../p2p/base/tcp_port.cc",0x1041,local_50,
                 ": Connection closed with error ",param_3);
    if (local_40._7_1_ < '\0') {
      operator_delete(local_50[0]);
    }
  }
  uVar1 = FUN_009881a4(param_1 + 0x40);
  if (((uVar1 & 1) == 0) || (*(long *)(param_1 + 0x48) == 0)) {
    uVar1 = FUN_004249b0();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../p2p/base/tcp_port.cc",0x105b,
                   "TCPConnection: Port has been deleted.");
    }
  }
  else {
    uVar1 = FUN_00c66bfc(param_1);
    if ((uVar1 & 1) == 0) {
      if ((*(byte *)(param_1 + 0xb2e) & 1) == 0) {
        lVar3 = *(long *)(param_1 + 0xb20);
        if (*(char *)(param_1 + 0xb2c) == '\x01') {
          FUN_007b5df8(lVar3 + 0x50,param_1);
          FUN_007b5df8(lVar3 + 0x90,param_1);
          FUN_007b5df8(lVar3 + 0x70,param_1);
        }
        FUN_00897ea8(lVar3);
        FUN_00897dfc(lVar3,param_1);
        uVar1 = FUN_009881a4(param_1 + 0x40);
        if ((uVar1 & 1) == 0) {
          plVar2 = (long *)0x0;
        }
        else {
          plVar2 = *(long **)(param_1 + 0x48);
        }
        (**(code **)(*plVar2 + 0x128))(plVar2,param_1);
      }
    }
    else {
      FUN_00c62b94(param_1,0);
      *(undefined1 *)(param_1 + 0xb2e) = 1;
      plVar2 = (long *)FUN_00c62750(param_1);
      lVar3 = *(long *)(param_1 + 0xb38);
      if (lVar3 != 0) {
        FUN_00d0f740(1,lVar3);
      }
      local_50[0] = (long *)operator_new(0x30);
      *local_50[0] = lVar3;
      local_50[0][4] = (long)FUN_004473ec;
      local_50[0][5] = (long)FUN_00d034bc;
      local_50[0][2] = param_1;
      local_40 = FUN_005db390;
      pcStack_38 = FUN_005db348;
      local_14[0] = 0;
      (**(code **)(*plVar2 + 0x10))
                (plVar2,local_50,(long)*(int *)(param_1 + 0xb30) * 1000,local_14,&uStack_11);
      (*local_40)(0,local_50,local_50);
    }
  }
  return;
}


// ===== 00d02c3c  FUN_00d02c3c =====

void FUN_00d02c3c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (param_1[2] != 0) {
    plVar1 = (long *)param_1[1];
    plVar2 = *(long **)(*param_1 + 8);
    *(long **)(*plVar1 + 8) = plVar2;
    *plVar2 = *plVar1;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      if (plVar1 == (long *)0xfffffffffffffff0) {
LAB_00d02cd4:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar2 = (long *)plVar1[1];
      if (*(char *)((long)plVar1 + 0x27) < '\0') {
        operator_delete((void *)plVar1[2]);
      }
      if (plVar1 == (long *)0x0) goto LAB_00d02cd4;
      operator_delete(plVar1);
      plVar1 = plVar2;
    }
  }
  return;
}


// ===== 00d02ce8  FUN_00d02ce8 =====

void FUN_00d02ce8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_28 [8];
  
  FUN_00988288(auStack_28);
  uVar1 = *(undefined8 *)(param_2 + 8);
  FUN_00988398(param_1,auStack_28);
  *(undefined8 *)(param_1 + 8) = uVar1;
  FUN_00988108(auStack_28);
  return;
}


// ===== 00d02d3c  FUN_00d02d3c =====

void FUN_00d02d3c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d02d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


// ===== 00d02d4c  FUN_00d02d4c =====

void FUN_00d02d4c(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  (**(code **)((long)pvVar1 + 0x10))(0,pvVar1,pvVar1);
  operator_delete(pvVar1);
  return;
}


// ===== 00d02d8c  FUN_00d02d8c =====

undefined8 * FUN_00d02d8c(long *param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  size_t __n;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  void *__dest;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  void *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  void *pvStack_48;
  
  puVar4 = (undefined8 *)param_1[1];
  if ((undefined8 *)param_1[2] <= puVar4) {
    lVar13 = *param_1;
    uVar8 = ((long)puVar4 - lVar13 >> 3) + 1;
    if (uVar8 >> 0x3d == 0) {
      uVar12 = param_1[2] - lVar13;
      local_60 = (void *)0x0;
      uVar11 = (long)uVar12 >> 2;
      if (uVar11 <= uVar8) {
        uVar11 = uVar8;
      }
      if (0x7ffffffffffffff7 < uVar12) {
        uVar11 = 0x1fffffffffffffff;
      }
      if (uVar11 != 0) {
        if (uVar11 >> 0x3d != 0) goto LAB_00d03020;
        local_60 = operator_new(uVar11 << 3);
      }
      pvStack_48 = (void *)((long)local_60 + uVar11 * 8);
      local_58 = (undefined8 *)((long)local_60 + ((long)param_2 - lVar13));
      local_50 = local_58;
      FUN_00d03024(&local_60,param_3,param_4);
      puVar4 = local_58;
      memcpy(local_50,param_2,param_1[1] - (long)param_2);
      lVar13 = param_1[1];
      param_1[1] = (long)param_2;
      __n = (long)param_2 - *param_1;
      __dest = (void *)((long)local_58 - __n);
      local_50 = (undefined8 *)((long)local_50 + (lVar13 - (long)param_2));
      memcpy(__dest,(void *)*param_1,__n);
      local_60 = (void *)*param_1;
      lVar13 = param_1[2];
      *param_1 = (long)__dest;
      param_1[2] = (long)pvStack_48;
      param_1[1] = (long)local_50;
      if (local_60 == (void *)0x0) {
        return puVar4;
      }
      local_58 = (undefined8 *)local_60;
      local_50 = (undefined8 *)local_60;
      pvStack_48 = (void *)lVar13;
      operator_delete(local_60);
      return puVar4;
    }
    FUN_00c315f0();
LAB_00d03020:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  if (param_2 == puVar4) {
    if (param_2 != (undefined8 *)0x0) {
      *(undefined4 *)puVar4 = *param_3;
      *(undefined4 *)((long)puVar4 + 4) = *param_4;
      param_1[1] = (long)(puVar4 + 1);
      return param_2;
    }
LAB_00d03008:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  puVar3 = puVar4 + -1;
  uVar1 = *param_3;
  uVar2 = *param_4;
  puVar5 = puVar4;
  if (puVar3 < puVar4) {
    puVar7 = puVar4;
    puVar9 = puVar4 + -1;
    do {
      if (puVar7 == (undefined8 *)0x0) goto LAB_00d03008;
      puVar10 = puVar9 + 1;
      puVar5 = puVar7 + 1;
      *puVar7 = *puVar9;
      puVar7 = puVar5;
      puVar9 = puVar10;
    } while (puVar10 < puVar4);
  }
  param_1[1] = (long)puVar5;
  if (puVar4 != param_2 + 1) {
    uVar8 = (long)puVar4 + (-0x10 - (long)param_2);
    puVar5 = puVar4;
    if ((((0x137 < uVar8) &&
         (uVar11 = uVar8 & 0xfffffffffffffff8, (undefined8 *)((long)puVar3 - uVar11) <= puVar3)) &&
        ((undefined4 *)((long)((long)puVar4 - 4U) - uVar11) <= (undefined4 *)((long)puVar4 - 4U)))
       && (((undefined4 *)((long)((long)puVar4 - 0xcU) - uVar11) <=
            (undefined4 *)((long)puVar4 - 0xcU) &&
           ((uVar11 = (long)puVar4 + (-0x10 - (long)param_2) & 0xfffffffffffffff8,
            puVar4 <= (undefined8 *)((long)puVar4 + (-0x10 - uVar11)) ||
            (puVar3 <= (undefined8 *)((long)puVar4 + (-8 - uVar11)))))))) {
      uVar8 = (uVar8 >> 3) + 1;
      uVar11 = uVar8 & 0x3ffffffffffffffc;
      uVar12 = uVar8 & 0x3ffffffffffffffc;
      puVar5 = puVar4 + -uVar11;
      puVar3 = puVar3 + -uVar11;
      puVar7 = puVar4 + -5;
      do {
        uVar16 = *puVar7;
        uVar15 = puVar7[3];
        uVar14 = puVar7[2];
        uVar12 = uVar12 - 4;
        puVar4[-3] = puVar7[1];
        puVar4[-4] = uVar16;
        puVar4[-1] = uVar15;
        puVar4[-2] = uVar14;
        puVar7 = puVar7 + -4;
        puVar4 = puVar4 + -4;
      } while (uVar12 != 0);
      if (uVar8 == uVar11) goto LAB_00d02e3c;
    }
    puVar6 = (undefined4 *)((long)puVar5 - 4);
    do {
      puVar4 = puVar3 + -1;
      puVar6[-1] = *(undefined4 *)puVar4;
      *puVar6 = *(undefined4 *)((long)puVar3 + -4);
      puVar3 = puVar4;
      puVar6 = puVar6 + -2;
    } while (puVar4 != param_2);
  }
LAB_00d02e3c:
  *(undefined4 *)param_2 = uVar1;
  *(undefined4 *)((long)param_2 + 4) = uVar2;
  return param_2;
}


// ===== 00d03024  FUN_00d03024 =====

void FUN_00d03024(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  puVar18 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] != puVar18) goto LAB_00d03200;
  pvVar2 = (void *)*param_1;
  puVar19 = (undefined8 *)param_1[1];
  if ((long)puVar19 - (long)pvVar2 == 0) {
    uVar10 = (long)param_1[3] - (long)pvVar2 >> 2;
    if (puVar18 == puVar19) {
      uVar10 = 1;
    }
    if (uVar10 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    uVar16 = uVar10 >> 2;
    pvVar4 = operator_new(uVar10 * 8);
    puVar5 = (undefined8 *)((long)pvVar4 + uVar16 * 8);
    lVar6 = (long)puVar18 - (long)puVar19;
    iVar17 = (int)puVar18;
    puVar7 = puVar5;
    if (lVar6 != 0) {
      uVar14 = lVar6 - 8U >> 3;
      uVar12 = uVar14;
      if ((ulong)-(long)puVar5 >> 3 <= uVar14) {
        uVar12 = (ulong)-(long)puVar5 >> 3;
      }
      puVar7 = (undefined8 *)((long)puVar5 + lVar6);
      puVar8 = puVar5;
      puVar11 = puVar19;
      if (0x31 < uVar12) {
        if ((ulong)-(long)puVar5 >> 3 <= uVar14) {
          uVar14 = (ulong)-(long)puVar5 >> 3;
        }
        if ((((((iVar17 - (int)puVar19 | -(int)pvVar4) & 7U) == 0) && (puVar5 <= puVar5 + uVar14))
            && (puVar19 <= puVar19 + uVar14)) &&
           (0x1f < (long)pvVar4 + (uVar16 * 8 - (long)puVar19))) {
          uVar1 = uVar12 + 1 & 3;
          puVar15 = (undefined8 *)((long)pvVar4 + uVar16 * 8 + 0x10);
          uVar16 = 4;
          if (uVar1 != 0) {
            uVar16 = uVar1;
          }
          puVar13 = puVar19 + 2;
          lVar9 = (uVar12 + 1) - uVar16;
          lVar6 = ~uVar14 + uVar16;
          puVar8 = puVar5 + lVar9;
          puVar11 = puVar19 + lVar9;
          do {
            puVar3 = puVar13 + -1;
            uVar20 = puVar13[-2];
            uVar22 = puVar13[1];
            uVar21 = *puVar13;
            lVar6 = lVar6 + 4;
            puVar13 = puVar13 + 4;
            puVar15[-1] = *puVar3;
            puVar15[-2] = uVar20;
            puVar15[1] = uVar22;
            *puVar15 = uVar21;
            puVar15 = puVar15 + 4;
          } while (lVar6 != 0);
        }
      }
      do {
        if (puVar8 == (undefined8 *)0x0) goto LAB_00d033d8;
        puVar15 = puVar8 + 1;
        *puVar8 = *puVar11;
        puVar8 = puVar15;
        puVar11 = puVar11 + 1;
      } while (puVar15 != puVar7);
    }
    *param_1 = pvVar4;
    param_1[1] = puVar5;
    uVar12 = (ulong)((long)puVar18 + (-8 - ((long)puVar18 << 0x3d))) >> 3;
    uVar16 = (ulong)(((long)puVar19 - (long)puVar18 << 0x3d) - ((long)puVar19 - (long)puVar18)) >> 3
    ;
    param_1[2] = puVar7;
    param_1[3] = (void *)((long)pvVar4 + uVar10 * 8);
    if (uVar12 <= uVar16) {
      uVar16 = uVar12;
    }
    puVar5 = puVar18;
    if ((1 < uVar16) && ((((int)puVar19 - iVar17 | -iVar17) & 7U) == 0)) {
      uVar16 = uVar16 & 0x1ffffffffffffffe;
      puVar5 = puVar18 + -uVar16;
      do {
        uVar16 = uVar16 - 2;
      } while (uVar16 != 0);
    }
    while (puVar5 != puVar19) {
      puVar5 = puVar5 + -1;
      if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    if (puVar19 != (undefined8 *)0x0) {
      operator_delete(pvVar2);
    }
    goto LAB_00d03200;
  }
  lVar6 = (((long)puVar19 - (long)pvVar2 >> 3) + 1) / 2;
  puVar5 = puVar19 + -lVar6;
  if (puVar19 != puVar18) {
    uVar10 = (long)puVar18 + (-8 - (long)puVar19);
    if (uVar10 < 0x1d8) {
LAB_00d031d0:
      do {
        *(undefined4 *)puVar5 = *(undefined4 *)puVar19;
        puVar7 = puVar19 + 1;
        *(undefined4 *)((long)puVar5 + 4) = *(undefined4 *)((long)puVar19 + 4);
        puVar5 = puVar5 + 1;
        puVar19 = puVar7;
      } while (puVar7 != puVar18);
    }
    else {
      uVar12 = uVar10 & 0xfffffffffffffff8;
      uVar16 = (long)puVar19 + lVar6 * -8 + 4;
      puVar7 = (undefined8 *)((long)puVar19 + uVar12);
      if (((undefined8 *)((long)puVar5 + uVar12) < puVar5 || uVar16 + uVar12 < uVar16) ||
          puVar7 < puVar19) goto LAB_00d031d0;
      puVar8 = (undefined8 *)((long)puVar7 + lVar6 * -8 + 4);
      puVar11 = (undefined8 *)((long)puVar19 + 4);
      puVar13 = puVar11 + -lVar6;
      puVar15 = puVar7 + (1 - lVar6);
      if (((puVar13 < puVar8 && puVar5 < puVar15) ||
          (puVar5 < (undefined8 *)((long)puVar7 + 4U) && puVar19 < puVar8)) ||
         ((puVar5 < puVar7 + 1 && puVar11 < puVar8 ||
          ((puVar13 < (undefined8 *)((long)puVar7 + 4U) && puVar19 < puVar15 ||
           (puVar13 < puVar7 + 1 && puVar11 < puVar15)))))) goto LAB_00d031d0;
      uVar10 = (uVar10 >> 3) + 1;
      uVar12 = uVar10 & 0x3ffffffffffffff8;
      uVar16 = uVar10 & 0x3ffffffffffffff8;
      puVar5 = puVar5 + uVar12;
      puVar7 = puVar19 + uVar12;
      do {
        puVar11 = puVar19 + 1;
        uVar20 = *puVar19;
        uVar22 = puVar19[3];
        uVar21 = puVar19[2];
        puVar8 = puVar19 + -lVar6;
        uVar26 = puVar19[5];
        uVar25 = puVar19[4];
        uVar24 = puVar19[7];
        uVar23 = puVar19[6];
        uVar16 = uVar16 - 8;
        puVar19 = puVar19 + 8;
        puVar8[1] = *puVar11;
        *puVar8 = uVar20;
        puVar8[3] = uVar22;
        puVar8[2] = uVar21;
        puVar8[5] = uVar26;
        puVar8[4] = uVar25;
        puVar8[7] = uVar24;
        puVar8[6] = uVar23;
      } while (uVar16 != 0);
      puVar19 = puVar7;
      if (uVar10 != uVar12) goto LAB_00d031d0;
    }
    puVar19 = (undefined8 *)param_1[1];
  }
  param_1[1] = puVar19 + -lVar6;
  param_1[2] = puVar5;
  puVar18 = puVar5;
LAB_00d03200:
  if (puVar18 != (undefined8 *)0x0) {
    *(undefined4 *)puVar18 = *param_2;
    *(undefined4 *)((long)puVar18 + 4) = *param_3;
    param_1[2] = puVar18 + 1;
    return;
  }
LAB_00d033d8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00d03400  FUN_00d03400 =====

void FUN_00d03400(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00cf9f10(*param_1,param_3,2);
  return;
}


// ===== 00d03414  FUN_00d03414 =====

void FUN_00d03414(undefined8 *param_1)

{
  FUN_00cfa32c(*param_1);
  return;
}


// ===== 00d03420  FUN_00d03420 =====

void FUN_00d03420(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d03430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x1b0))();
  return;
}


// ===== 00d03434  FUN_00d03434 =====

void FUN_00d03434(undefined8 *param_1)

{
  FUN_00d01710(*param_1);
  return;
}


// ===== 00d03440  FUN_00d03440 =====

void FUN_00d03440(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = *(long *)(lVar1 + 0xb20);
  if (lVar2 != 0) {
    if (*(char *)(lVar1 + 0xb2c) == '\x01') {
      FUN_007b5df8(lVar2 + 0x50,lVar1);
      FUN_007b5df8(lVar2 + 0x90,lVar1);
      FUN_007b5df8(lVar2 + 0x70,lVar1);
    }
    FUN_00897ea8(lVar2);
    FUN_00897dfc(lVar2,lVar1);
    return;
  }
  return;
}


// ===== 00d034bc  FUN_00d034bc =====

void FUN_00d034bc(long *param_1)

{
  if (*(char *)(*param_1 + 0xb2e) == '\x01') {
    FUN_00c65358();
    return;
  }
  return;
}


// ===== 00d034d8  FUN_00d034d8 =====

void FUN_00d034d8(undefined8 *param_1)

{
  FUN_00c654b0(*param_1);
  return;
}


// ===== 00d034e4  FUN_00d034e4 =====

void FUN_00d034e4(undefined8 *param_1)

{
  FUN_00d02520(*param_1);
  return;
}


// ===== 00d034f0  FUN_00d034f0 =====

void FUN_00d034f0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *param_1;
  uVar1 = FUN_009881a4(lVar3 + 0x40);
  if (((uVar1 & 1) != 0) && (*(long *)(lVar3 + 0x48) != 0)) {
    uVar1 = FUN_009881a4(lVar3 + 0x40);
    if ((uVar1 & 1) == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = *(long **)(lVar3 + 0x48);
    }
                    /* WARNING: Could not recover jumptable at 0x00d0355c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x108))(plVar2,param_3);
    return;
  }
  return;
}


// ===== 00d03560  FUN_00d03560 =====

void FUN_00d03560(undefined8 *param_1)

{
  FUN_00c65258(*param_1);
  return;
}


// ===== 00d0356c  FUN_00d0356c =====

void FUN_00d0356c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00c62f8c(*param_1,param_3);
  return;
}


// ===== 00d0357c  FUN_00d0357c =====

void FUN_00d0357c(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = *(undefined8 *)*param_1;
  auVar2 = FUN_007ebde8(((undefined8 *)*param_1)[1]);
  if ((auVar2 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
    FUN_00d02a38(uVar1,auVar2._8_8_,param_3);
    return;
  }
  return;
}


// ===== 00d035c8  FUN_00d035c8 =====

undefined8 * FUN_00d035c8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  lVar2 = param_1[1];
  uVar3 = *param_1;
  puVar1[1] = param_1[1];
  *puVar1 = uVar3;
  if (lVar2 != 0) {
    FUN_00d0f740(1);
  }
  return puVar1;
}


// ===== 00d03614  FUN_00d03614 =====

void FUN_00d03614(void *param_1)

{
  int iVar1;
  void *pvVar2;
  
  if (param_1 != (void *)0x0) {
    pvVar2 = *(void **)((long)param_1 + 8);
    if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar2), iVar1 == 1)) {
      operator_delete(pvVar2);
    }
    operator_delete(param_1);
    return;
  }
  return;
}


// ===== 00d03674  FUN_00d03674 =====

void FUN_00d03674(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xd0367c);
  (*pcVar1)();
}


// ===== 00d0367c  FUN_00d0367c =====

void FUN_00d0367c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  ulong uVar1;
  byte bVar2;
  long *plVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined **local_18;
  
  uStack_70 = param_5[2];
  local_78 = param_5[1];
  param_5[8] = &local_18;
  local_18 = &PTR_FUN_00d51080;
  bVar2 = *(byte *)((long)param_3 + 0x17);
  local_80 = (long *)*param_5;
  uStack_60 = param_5[4];
  local_68 = param_5[3];
  uVar1 = param_3[1];
  uStack_50 = param_5[6];
  local_58 = param_5[5];
  local_38 = param_5[9];
  uStack_40 = param_5[8];
  local_48 = param_5[7];
  puVar6 = (undefined8 *)*param_3;
  if (-1 < (char)bVar2) {
    puVar6 = param_3;
  }
  *param_5 = 0;
  if (-1 < (char)bVar2) {
    uVar1 = (ulong)bVar2;
  }
  uVar5 = FUN_00c502a0(puVar6,uVar1,param_4,&local_80);
  puVar6 = (undefined8 *)operator_new(0x20);
  puVar6[2] = uVar5;
  *puVar6 = &PTR_FUN_00d510a8;
  *(undefined4 *)(puVar6 + 3) = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00d0f740(1,puVar6 + 3);
  }
  plVar3 = local_80;
  *param_1 = puVar6;
  if ((local_80 != (long *)0x0) && (iVar4 = FUN_00d0f7a0(0xffffffff,local_80 + 1), iVar4 == 1)) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  return;
}


// ===== 00d0377c  FUN_00d0377c =====

void FUN_00d0377c(void)

{
  return;
}


// ===== 00d03784  FUN_00d03784 =====

void FUN_00d03784(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00d03790  FUN_00d03790 =====

undefined8 FUN_00d03790(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 00d0379c  FUN_00d0379c =====

void FUN_00d0379c(void)

{
  return;
}


// ===== 00d037a4  FUN_00d037a4 =====

void FUN_00d037a4(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00d037b0  FUN_00d037b0 =====

void * FUN_00d037b0(undefined8 param_1,undefined8 param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1d8);
  FUN_00c5cd80(pvVar1,param_2);
  return pvVar1;
}


// ===== 00d037ec  FUN_00d037ec =====

void FUN_00d037ec(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x18);
  return;
}


// ===== 00d03810  FUN_00d03810 =====

bool FUN_00d03810(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 3);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00d03868  FUN_00d03868 =====

void FUN_00d03868(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[2];
  param_1[2] = 0;
  *param_1 = &PTR_FUN_00d51020;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d03890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x48))();
    return;
  }
  return;
}


// ===== 00d03898  FUN_00d03898 =====

void FUN_00d03898(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[2];
  param_1[2] = 0;
  *param_1 = &PTR_FUN_00d51020;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x48))();
  }
  operator_delete(param_1);
  return;
}


// ===== 00d038e8  FUN_00d038e8 =====

bool FUN_00d038e8(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x18) == 1;
}


// ===== 00d03900  Java_org_webrtc_RtcCertificatePem_nativeGenerateCertificate =====

undefined8
Java_org_webrtc_RtcCertificatePem_nativeGenerateCertificate
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  local_b8 = param_3;
  uVar2 = FUN_00b1fb8c(param_1,&local_b8);
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_008342c0(&local_50,uVar2);
  puStack_88 = (undefined1 *)CONCAT71(puStack_88._1_7_,1);
  local_90 = param_4;
  FUN_00b22554(&local_58,&local_50,&local_90);
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00833e64(&local_90,local_58);
  FUN_00adcf00(&local_a0,param_1,&local_90);
  FUN_00adcf00(&local_b0,param_1,&puStack_78);
  uVar4 = FUN_00adaed8(param_1,"org/webrtc/RtcCertificatePem",&DAT_00dbb788);
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = auStack_d0;
  FUN_00ad8450(&local_50,param_1,uVar4,"<init>","(Ljava/lang/String;Ljava/lang/String;)V",
               &DAT_00dbb798);
  local_c8 = FUN_004b8418(param_1,uVar4,local_30,local_a0,local_b0);
  uStack_c0 = param_1;
  FUN_00ad843c(&local_50);
  FUN_00ada608(&local_b0,local_a8);
  FUN_00ada608(&local_a0,local_98);
  if ((long)local_68 < 0) {
    operator_delete(puStack_78);
  }
  puVar1 = local_58;
  if ((long)local_80 < 0) {
    operator_delete(local_90);
    puVar1 = local_58;
  }
  local_58 = puVar1;
  if ((puVar1 != (undefined1 *)0x0) && (iVar3 = FUN_00d0f7a0(0xffffffff,puVar1), iVar3 == 1)) {
    FUN_00833e18(puVar1);
    operator_delete(puVar1);
  }
  uVar4 = local_c8;
  local_c8 = 0;
  FUN_00ada608(&local_c8,uStack_c0);
  return uVar4;
}


// ===== 00d03ac4  FUN_00d03ac4 =====

/* WARNING: Removing unreachable block (ram,0x00d03c8c) */

void FUN_00d03ac4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 uVar4;
  undefined1 auStack_b0 [8];
  undefined8 **local_a8;
  ulong uStack_a0;
  byte bStack_91;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 **local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  uVar4 = FUN_00adaed8(param_2,"org/webrtc/RtcCertificatePem",&DAT_00dbb788);
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = (undefined8 **)&DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = auStack_b0;
  FUN_00ad8450(&local_70,param_2,uVar4,"getPrivateKey","()Ljava/lang/String;",&DAT_00dbb780);
  local_80 = FUN_004a41b4(param_2,*param_3,local_50);
  local_78 = param_2;
  FUN_00ad843c(&local_70);
  uVar4 = FUN_00adaed8(param_2,"org/webrtc/RtcCertificatePem",&DAT_00dbb788);
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = (undefined8 **)&DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = auStack_b0;
  FUN_00ad8450(&local_70,param_2,uVar4,"getCertificate","()Ljava/lang/String;",&DAT_00dbb790);
  local_90 = FUN_004a41b4(param_2,*param_3,local_50);
  local_88 = param_2;
  FUN_00ad843c(&local_70);
  FUN_00adc4e0(&local_70,param_2,&local_80);
  puVar1 = puStack_68;
  pppuVar2 = (undefined8 ***)local_70;
  if (-1 < (long)local_60) {
    puVar1 = (undefined1 *)((ulong)local_60 >> 0x38);
    pppuVar2 = &local_70;
  }
  FUN_00adc4e0(&local_a8,param_2,&local_90);
  pppuVar3 = (undefined8 ***)local_a8;
  if (-1 < (char)bStack_91) {
    uStack_a0 = (ulong)bStack_91;
    pppuVar3 = &local_a8;
  }
  FUN_00833f54(param_1,pppuVar2,puVar1,pppuVar3,uStack_a0);
  if ((char)bStack_91 < '\0') {
    operator_delete(local_a8);
  }
  FUN_00ada608(&local_90,local_88);
  FUN_00ada608(&local_80,local_78);
  return;
}


// ===== 00d03ca0  FUN_00d03ca0 =====

void FUN_00d03ca0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  FUN_00adcf00(&local_70);
  FUN_00adcf00(&local_80,param_2,param_3 + 0x18);
  uVar1 = FUN_00adaed8(param_2,"org/webrtc/RtcCertificatePem",&DAT_00dbb788);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_80;
  FUN_00ad8450(&local_60,param_2,uVar1,"<init>","(Ljava/lang/String;Ljava/lang/String;)V",
               &DAT_00dbb798);
  uVar1 = FUN_004b8418(param_2,uVar1,local_40,local_70,local_80);
  *param_1 = uVar1;
  param_1[1] = param_2;
  FUN_00ad843c(&local_60);
  FUN_00ada608(&local_80,local_78);
  FUN_00ada608(&local_70,local_68);
  return;
}


// ===== 00d03d88  FUN_00d03d88 =====

void FUN_00d03d88(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = &PTR_FUN_00d510e8;
  param_1[1] = 0;
  FUN_00ada590(param_1 + 1,param_2,*param_3);
  return;
}


// ===== 00d03da4  FUN_00d03da4 =====

void FUN_00d03da4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d510e8;
  FUN_00ada650(param_1 + 1);
  return;
}


// ===== 00d03db8  FUN_00d03db8 =====

void FUN_00d03db8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xd03dc0);
  (*pcVar1)();
}


// ===== 00d03dc0  FUN_00d03dc0 =====

void FUN_00d03dc0(long param_1,long *param_2)

{
  void *pvVar1;
  void *pvVar2;
  long *plVar3;
  bool bVar4;
  ulong *puVar5;
  ulong uVar6;
  long *plVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *puVar16;
  undefined8 *puVar17;
  undefined8 uVar19;
  long lVar20;
  int iVar21;
  ulong *puVar22;
  long *plVar23;
  long *plVar24;
  ulong uVar25;
  ulong uStack_1b0;
  long *local_1a8;
  undefined1 *local_1a0;
  undefined1 *puStack_198;
  undefined1 *local_190;
  ulong *puStack_188;
  undefined1 *local_180;
  ulong *local_178;
  undefined1 *local_170;
  undefined1 *puStack_168;
  undefined1 *local_160;
  undefined1 *puStack_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  undefined1 *local_140;
  undefined1 *local_130;
  undefined8 uStack_128;
  undefined1 auStack_118 [8];
  undefined8 local_110;
  void *local_108;
  void *local_100;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  ulong *local_e0;
  ulong *local_d0;
  ulong *puStack_c8;
  ulong *local_c0;
  ulong *local_b0;
  ulong *puStack_a8;
  ulong *local_a0;
  ulong *puStack_98;
  ulong *local_90;
  ulong *puStack_88;
  ulong *local_80;
  ulong *local_78;
  undefined1 *local_70;
  undefined8 *puVar18;
  
  puVar5 = (ulong *)thunk_FUN_00ad9fc4();
  lVar20 = *param_2;
  puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
  local_1a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_140 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
  local_150 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00addcb4(&local_150,puVar5);
  puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
  local_160 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c87f68(&local_160,lVar20);
  puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
  local_170 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c8800c(&local_170,lVar20);
  uVar6 = FUN_00c87af8(&local_160,&local_170);
  do {
    if ((uVar6 & 1) == 0) {
      FUN_00c87a50(&local_170);
      FUN_00c87a50(&local_160);
      local_1a0 = (undefined1 *)0x0;
      puStack_198 = local_140;
      FUN_00ada514(&local_1a0,local_140,puStack_148);
      FUN_00addd64(&local_150);
      uVar19 = *(undefined8 *)(*param_2 + 8);
      uVar10 = FUN_00adaed8(puVar5,"org/webrtc/RTCStatsReport",&DAT_00dbb7d8);
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = (ulong *)&DAT_aaaaaaaaaaaaaaaa;
      local_78 = (ulong *)&DAT_aaaaaaaaaaaaaaaa;
      local_80 = (ulong *)&DAT_aaaaaaaaaaaaaaaa;
      puStack_88 = &uStack_1b0;
      FUN_00ad8360(&local_90,puVar5,uVar10,"create","(JLjava/util/Map;)Lorg/webrtc/RTCStatsReport;",
                   &DAT_00dbb7d0);
      puVar11 = (undefined1 *)FUN_004aecec(puVar5,uVar10,local_70,uVar19,local_1a0);
      local_190 = puVar11;
      puStack_188 = puVar5;
      FUN_00ad843c(&local_90);
      FUN_00ada608(&local_1a0,puStack_198);
      uVar10 = FUN_00adaed8(puVar5,"org/webrtc/RTCStatsCollectorCallback",&DAT_00dbb7a8);
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = (ulong *)&DAT_aaaaaaaaaaaaaaaa;
      local_78 = (ulong *)&DAT_aaaaaaaaaaaaaaaa;
      local_80 = (ulong *)&DAT_aaaaaaaaaaaaaaaa;
      puStack_88 = &uStack_1b0;
      FUN_00ad8450(&local_90,puVar5,uVar10,"onStatsDelivered","(Lorg/webrtc/RTCStatsReport;)V",
                   &DAT_00dbb7a0);
      FUN_004c2120(puVar5,*(undefined8 *)(param_1 + 8),local_70,puVar11);
      FUN_00ad843c(&local_90);
      FUN_00ada608(&local_190,puVar5);
      return;
    }
    plVar7 = (long *)FUN_00c87ae8(&local_160);
    puStack_188 = (ulong *)&DAT_aaaaaaaaaaaaaaaa;
    local_190 = &DAT_aaaaaaaaaaaaaaaa;
    local_178 = (ulong *)&DAT_aaaaaaaaaaaaaaaa;
    local_180 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00adcf00(&local_130,puVar5,plVar7 + 1);
    local_e0 = (ulong *)&DAT_aaaaaaaaaaaaaaaa;
    puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
    local_f0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00addcb4(&local_f0,puVar5);
    local_1a8 = plVar7;
    FUN_00c88708(&local_108,plVar7);
    pvVar2 = local_100;
    for (pvVar1 = local_108; pvVar1 != pvVar2; pvVar1 = (void *)((long)pvVar1 + 0x18)) {
      uVar6 = FUN_00c88ac4(pvVar1);
      if ((uVar6 & 1) == 0) goto LAB_00d03f04;
      uVar10 = FUN_00c88ab8(pvVar1);
      FUN_00adce64(auStack_118,puVar5,uVar10);
      switch(*(undefined1 *)((long)pvVar1 + 0x10)) {
      case 0:
        uVar6 = FUN_00c88ac4(pvVar1);
        if ((uVar6 & 1) == 0) {
LAB_00d04ac8:
                    /* WARNING: Subroutine does not return */
          FUN_0061fd88("../../api/stats/attribute.h",0x45,"has_value()",&DAT_001f5fa0);
        }
        if (*(char *)((long)pvVar1 + 0x10) != '\0') {
LAB_00d04ae8:
                    /* WARNING: Subroutine does not return */
          FUN_005ee558();
        }
        if (((*(undefined1 **)((long)pvVar1 + 8))[1] & 1) == 0) {
LAB_00d04ac4:
                    /* WARNING: Subroutine does not return */
          FUN_005dc08c();
        }
        FUN_00adcb9c(&local_a0,puVar5,**(undefined1 **)((long)pvVar1 + 8));
        break;
      case 1:
        uVar6 = FUN_00c88ac4(pvVar1);
        if ((uVar6 & 1) == 0) goto LAB_00d04ac8;
        if (*(char *)((long)pvVar1 + 0x10) != '\x01') goto LAB_00d04ae8;
        if ((*(byte *)(*(undefined4 **)((long)pvVar1 + 8) + 1) & 1) == 0) goto LAB_00d04ac4;
        FUN_00adcd04(&local_a0,puVar5,**(undefined4 **)((long)pvVar1 + 8));
        break;
      case 2:
        uVar6 = FUN_00c88ac4(pvVar1);
        if ((uVar6 & 1) == 0) goto LAB_00d04ac8;
        if (*(char *)((long)pvVar1 + 0x10) != '\x02') goto LAB_00d04ae8;
        if (((*(uint **)((long)pvVar1 + 8))[1] & 1) == 0) goto LAB_00d04ac4;
        uVar6 = (ulong)**(uint **)((long)pvVar1 + 8);
        goto LAB_00d04498;
      case 3:
        uVar6 = FUN_00c88ac4(pvVar1);
        if ((uVar6 & 1) == 0) goto LAB_00d04ac8;
        if (*(char *)((long)pvVar1 + 0x10) != '\x03') goto LAB_00d04ae8;
        if (((*(ulong **)((long)pvVar1 + 8))[1] & 1) == 0) goto LAB_00d04ac4;
        uVar6 = **(ulong **)((long)pvVar1 + 8);
LAB_00d04498:
        FUN_00adcdb4(&local_a0,puVar5,uVar6);
        break;
      case 4:
        uVar6 = FUN_00c88ac4(pvVar1);
        if ((uVar6 & 1) == 0) goto LAB_00d04ac8;
        if (*(char *)((long)pvVar1 + 0x10) != '\x04') goto LAB_00d04ae8;
        if ((*(byte *)(*(undefined8 **)((long)pvVar1 + 8) + 1) & 1) == 0) goto LAB_00d04ac4;
        FUN_00d04af0(&local_a0,puVar5,**(undefined8 **)((long)pvVar1 + 8));
        break;
      case 5:
        uVar6 = FUN_00c88ac4(pvVar1);
        if ((uVar6 & 1) == 0) goto LAB_00d04ac8;
        if (*(char *)((long)pvVar1 + 0x10) != '\x05') goto LAB_00d04ae8;
        if ((*(byte *)(*(undefined8 **)((long)pvVar1 + 8) + 1) & 1) == 0) goto LAB_00d04ac4;
        FUN_00adcc4c(&local_a0,**(undefined8 **)((long)pvVar1 + 8),puVar5);
        break;
      case 6:
        uVar6 = FUN_00c88ac4(pvVar1);
        if ((uVar6 & 1) == 0) goto LAB_00d04ac8;
        if (*(char *)((long)pvVar1 + 0x10) != '\x06') goto LAB_00d04ae8;
        if ((*(byte *)(*(long *)((long)pvVar1 + 8) + 0x18) & 1) == 0) goto LAB_00d04ac4;
        FUN_00adcf00(&local_90,puVar5);
        goto LAB_00d03ec4;
      case 7:
        uVar6 = FUN_00c88ac4(pvVar1);
        if ((uVar6 & 1) == 0) goto LAB_00d04ac8;
        if (*(char *)((long)pvVar1 + 0x10) != '\a') goto LAB_00d04ae8;
        if ((*(byte *)(*(long *)((long)pvVar1 + 8) + 0x18) & 1) == 0) goto LAB_00d04ac4;
        FUN_00add3e0(&local_90,puVar5);
        goto LAB_00d03ec4;
      case 8:
        uVar6 = FUN_00c88ac4(pvVar1);
        if ((uVar6 & 1) == 0) goto LAB_00d04ac8;
        if (*(char *)((long)pvVar1 + 0x10) != '\b') goto LAB_00d04ae8;
        if ((*(byte *)(*(long *)((long)pvVar1 + 8) + 0x18) & 1) == 0) goto LAB_00d04ac4;
        FUN_00add6cc(&local_90,puVar5);
        goto LAB_00d03ec4;
      case 9:
        uVar6 = FUN_00c88ac4(pvVar1);
        if ((uVar6 & 1) == 0) goto LAB_00d04ac8;
        if (*(char *)((long)pvVar1 + 0x10) != '\t') goto LAB_00d04ae8;
        puVar12 = *(undefined8 **)((long)pvVar1 + 8);
        if ((*(byte *)(puVar12 + 3) & 1) == 0) goto LAB_00d04ac4;
        puVar13 = (ulong *)*puVar12;
        puVar8 = (ulong *)puVar12[1];
        local_90 = (ulong *)0x0;
        puStack_88 = (ulong *)0x0;
        local_80 = (ulong *)0x0;
        lVar20 = (long)puVar8 - (long)puVar13;
        if (lVar20 != 0) {
          if ((ulong)(lVar20 >> 2) >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00d04bec();
          }
          local_90 = (ulong *)operator_new(lVar20 * 2);
          local_80 = local_90 + (lVar20 >> 2);
          uVar14 = lVar20 - 4U >> 2;
          uVar6 = (ulong)-(long)local_90 >> 3;
          if (uVar14 <= (ulong)-(long)local_90 >> 3) {
            uVar6 = uVar14;
          }
          puVar9 = local_90;
          puStack_88 = local_90;
          if (0x2f < uVar6) {
            uVar15 = (ulong)-(long)local_90 >> 3;
            if (uVar14 <= uVar15) {
              uVar15 = uVar14;
            }
            if ((((-(long)local_90 & 7U) == 0) && (local_90 <= local_90 + uVar15)) &&
               (puVar13 <= (ulong *)((long)puVar13 + uVar15 * 4))) {
              uVar15 = (ulong)-(long)local_90 >> 3;
              if (uVar14 <= (ulong)-(long)local_90 >> 3) {
                uVar15 = uVar14;
              }
              if (((ulong *)((long)puVar13 + uVar15 * 4 + 4) <= local_90) ||
                 (local_90 + uVar15 + 1 <= puVar13)) {
                uVar14 = uVar6 + 1 & 7;
                puVar22 = puVar13 + 2;
                uVar15 = 8;
                if (uVar14 != 0) {
                  uVar15 = uVar14;
                }
                lVar20 = (uVar6 + 1) - uVar15;
                puVar13 = (ulong *)((long)puVar13 + lVar20 * 4);
                puVar9 = local_90 + lVar20;
                puVar16 = local_90 + 4;
                do {
                  uVar14 = puVar22[-1];
                  uVar6 = puVar22[-2];
                  uVar25 = puVar22[1];
                  uVar15 = *puVar22;
                  lVar20 = lVar20 + -8;
                  puVar22 = puVar22 + 4;
                  puVar16[-3] = uVar6 >> 0x20;
                  puVar16[-4] = uVar6 & 0xffffffff;
                  puVar16[-1] = uVar14 >> 0x20;
                  puVar16[-2] = uVar14 & 0xffffffff;
                  puVar16[1] = uVar15 >> 0x20;
                  *puVar16 = uVar15 & 0xffffffff;
                  puVar16[3] = uVar25 >> 0x20;
                  puVar16[2] = uVar25 & 0xffffffff;
                  puStack_88 = puVar9;
                  puVar16 = puVar16 + 8;
                } while (lVar20 != 0);
              }
            }
          }
          do {
            if (puVar9 == (ulong *)0x0) {
              puStack_88 = local_90;
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            puVar22 = (ulong *)((long)puVar13 + 4);
            puStack_88 = puStack_88 + 1;
            *puVar9 = (ulong)(uint)*puVar13;
            puVar9 = puVar9 + 1;
            puVar13 = puVar22;
          } while (puVar22 != puVar8);
        }
        FUN_00add82c(&local_d0,puVar5,&local_90);
        local_a0 = local_d0;
        local_d0 = (ulong *)0x0;
        puStack_98 = puStack_c8;
        FUN_00ada608(&local_d0,puStack_c8);
        if (local_90 != (ulong *)0x0) {
          uVar14 = (ulong)((long)puStack_88 + (-8 - ((long)puStack_88 << 0x3d))) >> 3;
          uVar6 = (ulong)(((long)local_90 - (long)puStack_88 << 0x3d) -
                         ((long)local_90 - (long)puStack_88)) >> 3;
          if (uVar14 <= uVar6) {
            uVar6 = uVar14;
          }
          puVar13 = puStack_88;
          if ((1 < uVar6) && ((((int)local_90 - (int)puStack_88 | -(int)puStack_88) & 7U) == 0)) {
            uVar6 = uVar6 & 0x1ffffffffffffffe;
            puVar13 = puStack_88 + -uVar6;
            do {
              uVar6 = uVar6 - 2;
            } while (uVar6 != 0);
          }
          while (puVar13 != local_90) {
            puVar13 = puVar13 + -1;
            if (puVar13 == (ulong *)0x0) goto LAB_00d04a9c;
          }
          puStack_88 = local_90;
          operator_delete(local_90);
        }
        break;
      case 10:
        uVar6 = FUN_00c88ac4(pvVar1);
        if ((uVar6 & 1) == 0) goto LAB_00d04ac8;
        if (*(char *)((long)pvVar1 + 0x10) != '\n') goto LAB_00d04ae8;
        if ((*(byte *)(*(long *)((long)pvVar1 + 8) + 0x18) & 1) == 0) goto LAB_00d04ac4;
        FUN_00add82c(&local_90,puVar5);
        goto LAB_00d03ec4;
      case 0xb:
        uVar6 = FUN_00c88ac4(pvVar1);
        if ((uVar6 & 1) == 0) goto LAB_00d04ac8;
        if (*(char *)((long)pvVar1 + 0x10) != '\v') goto LAB_00d04ae8;
        plVar7 = *(long **)((long)pvVar1 + 8);
        if ((*(byte *)(plVar7 + 3) & 1) == 0) goto LAB_00d04ac4;
        uVar10 = FUN_00adaed8(puVar5,"java/math/BigInteger",&DAT_00dbb7b8);
        puVar8 = (ulong *)(**(code **)(*puVar5 + 0x560))
                                    (puVar5,(ulong)(plVar7[1] - *plVar7) >> 3,uVar10,0);
        puVar12 = (undefined8 *)plVar7[1];
        puVar13 = puVar8;
        puStack_c8 = puVar5;
        if ((undefined8 *)*plVar7 != puVar12) {
          iVar21 = 0;
          puVar17 = (undefined8 *)*plVar7;
          local_d0 = puVar8;
          do {
            puVar18 = puVar17 + 1;
            FUN_00d04af0(&local_90,puVar5,*puVar17);
            (**(code **)(*puVar5 + 0x570))(puVar5,puVar8,iVar21,local_90);
            FUN_00ada608(&local_90,puStack_88);
            iVar21 = iVar21 + 1;
            puVar17 = puVar18;
            puVar13 = local_d0;
          } while (puVar18 != puVar12);
        }
        local_d0 = (ulong *)0x0;
        local_a0 = puVar13;
        puStack_98 = puStack_c8;
        FUN_00ada608(&local_d0);
        break;
      case 0xc:
        uVar6 = FUN_00c88ac4(pvVar1);
        if ((uVar6 & 1) == 0) goto LAB_00d04ac8;
        if (*(char *)((long)pvVar1 + 0x10) != '\f') goto LAB_00d04ae8;
        if ((*(byte *)(*(long *)((long)pvVar1 + 8) + 0x18) & 1) == 0) goto LAB_00d04ac4;
        FUN_00add560(&local_90,puVar5);
        goto LAB_00d03ec4;
      case 0xd:
        uVar6 = FUN_00c88ac4(pvVar1);
        if ((uVar6 & 1) == 0) goto LAB_00d04ac8;
        if (*(char *)((long)pvVar1 + 0x10) != '\r') goto LAB_00d04ae8;
        if ((*(byte *)(*(long *)((long)pvVar1 + 8) + 0x18) & 1) == 0) goto LAB_00d04ac4;
        FUN_00add98c(&local_90,puVar5);
LAB_00d03ec4:
        local_a0 = local_90;
        local_90 = (ulong *)0x0;
        puStack_98 = puStack_88;
        FUN_00ada608(&local_90,puStack_88);
        break;
      case 0xe:
        uVar6 = FUN_00c88ac4(pvVar1);
        if ((uVar6 & 1) == 0) goto LAB_00d04ac8;
        if (*(char *)((long)pvVar1 + 0x10) != '\x0e') goto LAB_00d04ae8;
        plVar7 = *(long **)((long)pvVar1 + 8);
        if ((*(byte *)(plVar7 + 3) & 1) == 0) goto LAB_00d04ac4;
        puStack_c8 = (ulong *)&DAT_aaaaaaaaaaaaaaaa;
        local_d0 = (ulong *)&DAT_aaaaaaaaaaaaaaaa;
        local_c0 = (ulong *)&DAT_aaaaaaaaaaaaaaaa;
        FUN_00addcb4(&local_d0,puVar5);
        plVar23 = (long *)*plVar7;
        while (plVar23 != plVar7 + 1) {
          puStack_88 = (ulong *)&DAT_aaaaaaaaaaaaaaaa;
          local_90 = (ulong *)&DAT_aaaaaaaaaaaaaaaa;
          local_78 = (ulong *)&DAT_aaaaaaaaaaaaaaaa;
          local_80 = (ulong *)&DAT_aaaaaaaaaaaaaaaa;
          FUN_00adcf00(&local_a0,puVar5,plVar23 + 4);
          FUN_00d04af0(&local_b0,puVar5,plVar23[7]);
          local_90 = local_a0;
          local_80 = local_b0;
          local_a0 = (ulong *)0x0;
          local_b0 = (ulong *)0x0;
          puStack_88 = puStack_98;
          local_78 = puStack_a8;
          FUN_00ada608(&local_b0,puStack_a8);
          FUN_00ada608(&local_a0,puStack_98);
          FUN_00addd74(&local_d0,&local_90,&local_80);
          FUN_00ada608(&local_80,local_78);
          FUN_00ada608(&local_90,puStack_88);
          plVar3 = (long *)plVar23[1];
          plVar24 = plVar23;
          if ((long *)plVar23[1] == (long *)0x0) {
            do {
              plVar23 = (long *)plVar24[2];
              bVar4 = plVar24 != (long *)*plVar23;
              plVar24 = plVar23;
            } while (bVar4);
          }
          else {
            do {
              plVar23 = plVar3;
              plVar3 = (long *)*plVar23;
            } while ((long *)*plVar23 != (long *)0x0);
          }
        }
        goto LAB_00d043a0;
      case 0xf:
        uVar6 = FUN_00c88ac4(pvVar1);
        if ((uVar6 & 1) == 0) goto LAB_00d04ac8;
        if (*(char *)((long)pvVar1 + 0x10) != '\x0f') goto LAB_00d04ae8;
        plVar7 = *(long **)((long)pvVar1 + 8);
        if ((*(byte *)(plVar7 + 3) & 1) == 0) goto LAB_00d04ac4;
        puStack_c8 = (ulong *)&DAT_aaaaaaaaaaaaaaaa;
        local_d0 = (ulong *)&DAT_aaaaaaaaaaaaaaaa;
        local_c0 = (ulong *)&DAT_aaaaaaaaaaaaaaaa;
        FUN_00addcb4(&local_d0,puVar5);
        plVar23 = (long *)*plVar7;
        while (plVar23 != plVar7 + 1) {
          puStack_88 = (ulong *)&DAT_aaaaaaaaaaaaaaaa;
          local_90 = (ulong *)&DAT_aaaaaaaaaaaaaaaa;
          local_78 = (ulong *)&DAT_aaaaaaaaaaaaaaaa;
          local_80 = (ulong *)&DAT_aaaaaaaaaaaaaaaa;
          FUN_00adcf00(&local_a0,puVar5,plVar23 + 4);
          FUN_00adcc4c(&local_b0,plVar23[7],puVar5);
          local_90 = local_a0;
          local_80 = local_b0;
          local_a0 = (ulong *)0x0;
          local_b0 = (ulong *)0x0;
          puStack_88 = puStack_98;
          local_78 = puStack_a8;
          FUN_00ada608(&local_b0,puStack_a8);
          FUN_00ada608(&local_a0,puStack_98);
          FUN_00addd74(&local_d0,&local_90,&local_80);
          FUN_00ada608(&local_80,local_78);
          FUN_00ada608(&local_90,puStack_88);
          plVar3 = (long *)plVar23[1];
          plVar24 = plVar23;
          if ((long *)plVar23[1] == (long *)0x0) {
            do {
              plVar23 = (long *)plVar24[2];
              bVar4 = plVar24 != (long *)*plVar23;
              plVar24 = plVar23;
            } while (bVar4);
          }
          else {
            do {
              plVar23 = plVar3;
              plVar3 = (long *)*plVar23;
            } while ((long *)*plVar23 != (long *)0x0);
          }
        }
LAB_00d043a0:
        local_a0 = (ulong *)0x0;
        puStack_98 = local_c0;
        FUN_00ada514(&local_a0,local_c0,puStack_c8);
        FUN_00addd64(&local_d0);
        break;
      default:
        local_a0 = (ulong *)0x0;
        puStack_98 = (ulong *)0x0;
      }
      FUN_00addd74(&local_f0,auStack_118,&local_a0);
      FUN_00ada608(&local_a0,puStack_98);
      FUN_00ada608(auStack_118,local_110);
LAB_00d03f04:
    }
    if (local_108 != (void *)0x0) {
      uVar6 = (ulong)(((long)local_108 - (long)local_100) * 0x1555555555555555) >> 3;
      uVar14 = (long)local_100 * -0x1555555555555555 - 8U >> 3;
      if (uVar14 <= uVar6) {
        uVar6 = uVar14;
      }
      if ((1 < uVar6) && ((((int)local_108 - (int)local_100 | -(int)local_100) & 7U) == 0)) {
        uVar6 = uVar6 & 0x1ffffffffffffffe;
        local_100 = (void *)((long)local_100 + uVar6 * -0x18);
        do {
          uVar6 = uVar6 - 2;
        } while (uVar6 != 0);
      }
      while (local_100 != local_108) {
        local_100 = (void *)((long)local_100 + -0x18);
        if (local_100 == (void *)0x0) {
LAB_00d04a9c:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      local_100 = local_108;
      operator_delete(local_108);
    }
    plVar7 = local_1a8;
    lVar20 = local_1a8[4];
    uVar10 = (**(code **)(*local_1a8 + 0x18))(local_1a8);
    FUN_00adce64(&local_d0,puVar5,uVar10);
    FUN_00adcf00(&local_108,puVar5,plVar7 + 1);
    local_a0 = (ulong *)0x0;
    puStack_98 = local_e0;
    FUN_00ada514(&local_a0,local_e0,puStack_e8);
    uVar10 = FUN_00adaed8(puVar5,"org/webrtc/RTCStats",&DAT_00dbb7c8);
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = (ulong *)&DAT_aaaaaaaaaaaaaaaa;
    local_78 = (ulong *)&DAT_aaaaaaaaaaaaaaaa;
    local_80 = (ulong *)&DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &uStack_1b0;
    FUN_00ad8360(&local_90,puVar5,uVar10,"create",
                 "(JLjava/lang/String;Ljava/lang/String;Ljava/util/Map;)Lorg/webrtc/RTCStats;",
                 &DAT_00dbb7c0);
    puVar11 = (undefined1 *)FUN_004aecec(puVar5,uVar10,local_70,lVar20,local_d0,local_108,local_a0);
    puStack_a8 = puVar5;
    FUN_00ad843c(&local_90);
    FUN_00ada608(&local_a0,puStack_98);
    FUN_00ada608(&local_108,local_100);
    FUN_00ada608(&local_d0,puStack_c8);
    FUN_00addd64(&local_f0);
    local_190 = local_130;
    local_130 = (undefined1 *)0x0;
    puStack_188 = (ulong *)uStack_128;
    local_b0 = (ulong *)0x0;
    local_180 = puVar11;
    local_178 = puVar5;
    FUN_00ada608(&local_b0,puVar5);
    FUN_00ada608(&local_130,uStack_128);
    FUN_00addd74(&local_150,&local_190,&local_180);
    FUN_00ada608(&local_180,local_178);
    FUN_00ada608(&local_190,puStack_188);
    FUN_00c87aac(&local_160);
    uVar6 = FUN_00c87af8(&local_160,&local_170);
  } while( true );
}


// ===== 00d04af0  FUN_00d04af0 =====

void FUN_00d04af0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_90 [8];
  void *local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  local_88 = (void *)0x0;
  uStack_80 = 0;
  local_78 = 0;
  FUN_006247b4(&local_88,0x16,param_3);
  FUN_00adcf00(&local_70,param_2,&local_88);
  uVar1 = FUN_00adaed8(param_2,"java/math/BigInteger",&DAT_00dbb7b8);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = auStack_90;
  FUN_00ad8450(&local_60,param_2,uVar1,"<init>","(Ljava/lang/String;)V",&DAT_00dbb7b0);
  uVar1 = FUN_004b8418(param_2,uVar1,local_40,local_70);
  *param_1 = uVar1;
  param_1[1] = param_2;
  FUN_00ad843c(&local_60);
  FUN_00ada608(&local_70,local_68);
  if (local_78 < 0) {
    operator_delete(local_88);
  }
  return;
}


// ===== 00d04bec  FUN_00d04bec =====

void FUN_00d04bec(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00d04c04  FUN_00d04c04 =====

void FUN_00d04c04(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  FUN_00d04cfc(&local_70,param_2,param_3,FUN_00d04db4);
  FUN_00d04f5c(&local_80,param_2,param_3 + 0x18,FUN_00d05014);
  uVar1 = FUN_00adaed8(param_2,"org/webrtc/RtpCapabilities",&DAT_00dbb7e0);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_80;
  FUN_00ad8450(&local_60,param_2,uVar1,"<init>","(Ljava/util/List;Ljava/util/List;)V",&DAT_00dbb828)
  ;
  uVar1 = FUN_004b8418(param_2,uVar1,local_40,local_70,local_80);
  *param_1 = uVar1;
  param_1[1] = param_2;
  FUN_00ad843c(&local_60);
  FUN_00ada608(&local_80,local_78);
  FUN_00ada608(&local_70,local_68);
  return;
}


// ===== 00d04cfc  FUN_00d04cfc =====

void FUN_00d04cfc(undefined8 *param_1,undefined8 param_2,long *param_3,code *param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00addb48(&local_60,param_2);
  lVar2 = param_3[1];
  for (lVar1 = *param_3; lVar1 != lVar2; lVar1 = lVar1 + 0xa0) {
    (*param_4)(auStack_70,param_2,lVar1);
    FUN_00addc08(&local_60,auStack_70);
    FUN_00ada608(auStack_70,local_68);
  }
  *param_1 = 0;
  param_1[1] = local_50;
  FUN_00ada514(param_1,local_50,puStack_58);
  FUN_00addbf8(&local_60);
  return;
}


// ===== 00d04db4  FUN_00d04db4 =====

void FUN_00d04db4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  void *local_c8 [2];
  char cStack_b1;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  if ((*(byte *)(param_3 + 0x6c) & 1) != 0) {
    uVar1 = *(undefined4 *)(param_3 + 0x68);
    FUN_00adcf00(&local_70,param_2,param_3 + 8);
    FUN_00af35fc(&local_80,param_2,*(undefined4 *)(param_3 + 0x20));
    FUN_00add114(&local_90,param_2,param_3 + 0x24);
    FUN_00add114(&local_a0,param_2,param_3 + 0x2c);
    FUN_00c82388(local_c8,param_3);
    FUN_00adcf00(&local_b0,param_2,local_c8);
    FUN_00ae26a8(&local_d8,param_2,param_3 + 0x50);
    uVar2 = FUN_00adaed8(param_2,"org/webrtc/RtpCapabilities$CodecCapability",&DAT_00dbb7f8);
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = (undefined1 *)&local_f0;
    FUN_00ad8450(&local_60,param_2,uVar2,"<init>",
                 "(ILjava/lang/String;Lorg/webrtc/MediaStreamTrack$MediaType;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/util/Map;)V"
                 ,&DAT_00dbb830);
    local_f0 = local_b0;
    uStack_e8 = local_d8;
    uVar2 = FUN_004b8418(param_2,uVar2,local_40,uVar1,local_70,local_80,local_90,local_a0);
    *param_1 = uVar2;
    param_1[1] = param_2;
    FUN_00ad843c(&local_60);
    FUN_00ada608(&local_d8,local_d0);
    FUN_00ada608(&local_b0,local_a8);
    if (cStack_b1 < '\0') {
      operator_delete(local_c8[0]);
    }
    FUN_00ada608(&local_a0,local_98);
    FUN_00ada608(&local_90,local_88);
    FUN_00ada608(&local_80,local_78);
    FUN_00ada608(&local_70,local_68);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_005dc08c();
}


// ===== 00d04f5c  FUN_00d04f5c =====

void FUN_00d04f5c(undefined8 *param_1,undefined8 param_2,long *param_3,code *param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00addb48(&local_60,param_2);
  lVar2 = param_3[1];
  for (lVar1 = *param_3; lVar1 != lVar2; lVar1 = lVar1 + 0x28) {
    (*param_4)(auStack_70,param_2,lVar1);
    FUN_00addc08(&local_60,auStack_70);
    FUN_00ada608(auStack_70,local_68);
  }
  *param_1 = 0;
  param_1[1] = local_50;
  FUN_00ada514(param_1,local_50,puStack_58);
  FUN_00addbf8(&local_60);
  return;
}


// ===== 00d05014  FUN_00d05014 =====

void FUN_00d05014(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  FUN_00adcf00(&local_80);
  if ((*(byte *)(param_3 + 0x1c) & 1) != 0) {
    uVar1 = *(undefined4 *)(param_3 + 0x18);
    uVar2 = *(undefined1 *)(param_3 + 0x20);
    uVar3 = FUN_00adaed8(param_2,"org/webrtc/RtpCapabilities$HeaderExtensionCapability",
                         &DAT_00dbb7e8);
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = (undefined1 *)&local_80;
    FUN_00ad8450(&local_70,param_2,uVar3,"<init>","(Ljava/lang/String;IZ)V",&DAT_00dbb838);
    uVar3 = FUN_004b8418(param_2,uVar3,local_50,local_80,uVar1,uVar2);
    *param_1 = uVar3;
    param_1[1] = param_2;
    FUN_00ad843c(&local_70);
    FUN_00ada608(&local_80,local_78);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_005dc08c();
}


// ===== 00d05100  FUN_00d05100 =====

void FUN_00d05100(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 **local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
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
  FUN_00668960(param_1);
  uVar3 = FUN_00adaed8(param_2,"org/webrtc/RtpCapabilities$CodecCapability",&DAT_00dbb7f8);
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = (undefined1 *)&local_a0;
  FUN_00ad8450(&local_70,param_2,uVar3,"getPreferredPayloadType",&DAT_001bb71e,&DAT_00dbb7f0);
  uVar2 = FUN_004c1718(param_2,*param_3,local_50);
  FUN_00ad843c(&local_70);
  *(undefined4 *)(param_1 + 0xd) = uVar2;
  *(undefined1 *)((long)param_1 + 0x6c) = 1;
  uVar3 = FUN_00adaed8(param_2,"org/webrtc/RtpCapabilities$CodecCapability",&DAT_00dbb7f8);
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = (undefined1 *)&local_a0;
  FUN_00ad8450(&local_70,param_2,uVar3,"getName","()Ljava/lang/String;",&DAT_00dbb800);
  local_90 = (undefined1 *)FUN_004a41b4(param_2,*param_3,local_50);
  puStack_88 = (undefined1 *)param_2;
  FUN_00ad843c(&local_70);
  FUN_00adc4e0(&local_70,param_2,&local_90);
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
  }
  puVar1 = local_60;
  local_60 = (undefined1 *)((ulong)local_60 & 0xffffffffffffff);
  param_1[2] = puStack_68;
  param_1[1] = local_70;
  param_1[3] = puVar1;
  local_70 = (undefined1 **)((ulong)local_70 & 0xffffffffffffff00);
  FUN_00ada608(&local_90,puStack_88);
  uVar3 = FUN_00adaed8(param_2,"org/webrtc/RtpCapabilities$CodecCapability",&DAT_00dbb7f8);
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = (undefined1 *)&local_a0;
  FUN_00ad8450(&local_70,param_2,uVar3,"getKind","()Lorg/webrtc/MediaStreamTrack$MediaType;",
               &DAT_00dbb808);
  local_90 = (undefined1 *)FUN_004a41b4(param_2,*param_3,local_50);
  puStack_88 = (undefined1 *)param_2;
  FUN_00ad843c(&local_70);
  uVar2 = FUN_00af36ac(param_2,&local_90);
  *(undefined4 *)(param_1 + 4) = uVar2;
  FUN_00ada608(&local_90,puStack_88);
  uVar3 = FUN_00adaed8(param_2,"org/webrtc/RtpCapabilities$CodecCapability",&DAT_00dbb7f8);
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = (undefined1 *)&local_a0;
  FUN_00ad8450(&local_70,param_2,uVar3,"getClockRate","()Ljava/lang/Integer;",&DAT_00dbb810);
  local_90 = (undefined1 *)FUN_004a41b4(param_2,*param_3,local_50);
  puStack_88 = (undefined1 *)param_2;
  FUN_00ad843c(&local_70);
  uVar3 = FUN_00adc418(param_2,&local_90);
  *(int *)((long)param_1 + 0x24) = (int)uVar3;
  *(char *)(param_1 + 5) = (char)((ulong)uVar3 >> 0x20);
  FUN_00ada608(&local_90,puStack_88);
  uVar3 = FUN_00adaed8(param_2,"org/webrtc/RtpCapabilities$CodecCapability",&DAT_00dbb7f8);
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = (undefined1 *)&local_a0;
  FUN_00ad8450(&local_70,param_2,uVar3,"getNumChannels","()Ljava/lang/Integer;",&DAT_00dbb818);
  local_90 = (undefined1 *)FUN_004a41b4(param_2,*param_3,local_50);
  puStack_88 = (undefined1 *)param_2;
  FUN_00ad843c(&local_70);
  uVar3 = FUN_00adc418(param_2,&local_90);
  *(int *)((long)param_1 + 0x2c) = (int)uVar3;
  *(char *)(param_1 + 6) = (char)((ulong)uVar3 >> 0x20);
  FUN_00ada608(&local_90,puStack_88);
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  uVar3 = FUN_00adaed8(param_2,"org/webrtc/RtpCapabilities$CodecCapability",&DAT_00dbb7f8);
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = (undefined1 *)&local_a0;
  FUN_00ad8450(&local_70,param_2,uVar3,"getParameters","()Ljava/util/Map;",&DAT_00dbb820);
  local_a0 = FUN_004a41b4(param_2,*param_3,local_50);
  local_98 = param_2;
  FUN_00ad843c(&local_70);
  FUN_00adc6fc(&local_90,param_2,&local_a0);
  FUN_00ada608(&local_a0,local_98);
  FUN_00b8684c(param_1 + 10,local_90,(ulong)&local_90 | 8);
  local_70 = &local_90;
  FUN_0060b2cc(&local_70,puStack_88);
  return;
}


// ===== 00d054ec  Java_org_webrtc_RtpReceiver_nativeGetId =====

undefined1 *
Java_org_webrtc_RtpReceiver_nativeGetId(undefined8 param_1,undefined8 param_2,long *param_3)

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


// ===== 00d05570  Java_org_webrtc_RtpReceiver_nativeGetParameters =====

undefined1 *
Java_org_webrtc_RtpReceiver_nativeGetParameters(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
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
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
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
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*param_3 + 0x50))(&puStack_d0,param_3);
  FUN_00d07200(&local_e0,param_1,&puStack_d0);
  FUN_0066981c(&puStack_d0);
  puVar1 = local_e0;
  local_e0 = (undefined1 *)0x0;
  FUN_00ada608(&local_e0,puStack_d8);
  return puVar1;
}


// ===== 00d055fc  Java_org_webrtc_RtpReceiver_nativeGetTrack =====

undefined8
Java_org_webrtc_RtpReceiver_nativeGetTrack(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *local_8;
  
  (**(code **)(*param_3 + 0x20))(&local_8,param_3);
  plVar1 = local_8;
  local_8 = (long *)0x0;
  uVar2 = FUN_00adde38(plVar1);
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return uVar2;
}


// ===== 00d0565c  Java_org_webrtc_RtpReceiver_nativeSetFrameDecryptor =====

void Java_org_webrtc_RtpReceiver_nativeSetFrameDecryptor
               (undefined8 param_1,undefined8 param_2,long *param_3,long *param_4)

{
  long *local_8;
  
  local_8 = param_4;
  if (param_4 != (long *)0x0) {
    (**(code **)*param_4)(param_4);
  }
  (**(code **)(*param_3 + 0x78))(param_3,&local_8);
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 8))();
  }
  return;
}


// ===== 00d056c0  Java_org_webrtc_RtpReceiver_nativeSetObserver =====

void Java_org_webrtc_RtpReceiver_nativeSetObserver
               (undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_00d51120;
  puVar1[1] = 0;
  FUN_00ada590(puVar1 + 1,param_1,param_4);
  (**(code **)(*param_3 + 0x60))(param_3,puVar1);
  FUN_00adde38(puVar1);
  return;
}


// ===== 00d05734  Java_org_webrtc_RtpReceiver_nativeUnsetObserver =====

void Java_org_webrtc_RtpReceiver_nativeUnsetObserver
               (undefined8 param_1,undefined8 param_2,long *param_3,long *param_4)

{
  (**(code **)(*param_3 + 0x60))(param_3,0);
  if (param_4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d05778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_4 + 0x18))(param_4);
    return;
  }
  return;
}


// ===== 00d0578c  FUN_00d0578c =====

void FUN_00d0578c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  uVar1 = *param_3;
  *param_3 = 0;
  uVar1 = FUN_00adde38(uVar1);
  uVar2 = FUN_00adaed8(param_2,"org/webrtc/RtpReceiver",&DAT_00dbb860);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_60;
  FUN_00ad8450(&local_60,param_2,uVar2,"<init>",&DAT_001cf399,&DAT_00dbb858);
  uVar1 = FUN_004b8418(param_2,uVar2,local_40,uVar1);
  *param_1 = uVar1;
  param_1[1] = param_2;
  FUN_00ad843c(&local_60);
  return;
}


// ===== 00d0584c  FUN_00d0584c =====

void FUN_00d0584c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  FUN_00ada590(param_1,param_2,*param_3);
  return;
}


// ===== 00d0585c  FUN_00d0585c =====

void FUN_00d0585c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  return;
}


// ===== 00d05874  FUN_00d05874 =====

void FUN_00d05874(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  if (*param_1 != 0) {
    uVar1 = FUN_00ad9fc4();
    uVar2 = FUN_00adaed8(uVar1,"org/webrtc/RtpReceiver",&DAT_00dbb860);
    local_30 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = (undefined1 *)&local_50;
    FUN_00ad8450(&local_50,uVar1,uVar2,"dispose",&DAT_001ebb20,&DAT_00dbb868);
    FUN_004c2120(uVar1,*param_1,local_30);
    FUN_00ad843c(&local_50);
  }
  FUN_00ada650(param_1);
  return;
}


// ===== 00d05920  FUN_00d05920 =====

void FUN_00d05920(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  uVar1 = FUN_00ad9fc4();
  FUN_00af35fc(&local_70,uVar1,param_2);
  uVar2 = FUN_00adaed8(uVar1,"org/webrtc/RtpReceiver$Observer",&DAT_00dbb848);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_70;
  FUN_00ad8450(&local_60,uVar1,uVar2,"onFirstPacketReceived",
               "(Lorg/webrtc/MediaStreamTrack$MediaType;)V",&DAT_00dbb840);
  FUN_004c2120(uVar1,*(undefined8 *)(param_1 + 8),local_40,local_70);
  FUN_00ad843c(&local_60);
  FUN_00ada608(&local_70,local_68);
  return;
}


// ===== 00d059e8  FUN_00d059e8 =====

void FUN_00d059e8(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  uVar1 = FUN_00ad9fc4();
  FUN_00af35fc(&local_70,uVar1,param_2);
  uVar2 = FUN_00adaed8(uVar1,"org/webrtc/RtpReceiver$Observer",&DAT_00dbb848);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_70;
  FUN_00ad8450(&local_60,uVar1,uVar2,"onFirstPacketReceivedAfterReceptiveChange",
               "(Lorg/webrtc/MediaStreamTrack$MediaType;)V",&DAT_00dbb850);
  FUN_004c2120(uVar1,*(undefined8 *)(param_1 + 8),local_40,local_70);
  FUN_00ad843c(&local_60);
  FUN_00ada608(&local_70,local_68);
  return;
}


// ===== 00d05ab0  FUN_00d05ab0 =====

void FUN_00d05ab0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d51120;
  FUN_00ada650(param_1 + 1);
  return;
}


// ===== 00d05ac4  FUN_00d05ac4 =====

void FUN_00d05ac4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d51120;
  FUN_00ada650(param_1 + 1);
  operator_delete(param_1);
  return;
}


// ===== 00d05b00  FUN_00d05b00 =====

void FUN_00d05b00(undefined4 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 extraout_w1;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  
  memcpy(param_1,&DAT_0025a8d8,0x130);
  FUN_00668fb0(param_1);
  uVar3 = FUN_00adaed8(param_2,"org/webrtc/RtpParameters$Encoding",&DAT_00dbb878);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = (undefined1 *)&local_f0;
  FUN_00ad8450(&local_80,param_2,uVar3,"getRid","()Ljava/lang/String;",&DAT_00dbb870);
  local_90 = FUN_004a41b4(param_2,*param_3,local_60);
  local_88 = param_2;
  FUN_00ad843c(&local_80);
  uVar4 = FUN_00adc1a8(param_2,&local_90);
  if ((uVar4 & 1) == 0) {
    FUN_00adc4e0(&local_80,param_2,&local_90);
    if (*(char *)((long)param_1 + 0xb7) < '\0') {
      operator_delete(*(void **)(param_1 + 0x28));
    }
    *(undefined1 **)(param_1 + 0x2a) = puStack_78;
    *(undefined1 **)(param_1 + 0x28) = local_80;
    *(undefined1 **)(param_1 + 0x2c) = local_70;
  }
  uVar3 = FUN_00adaed8(param_2,"org/webrtc/RtpParameters$Encoding",&DAT_00dbb878);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = (undefined1 *)&local_f0;
  FUN_00ad8450(&local_80,param_2,uVar3,"getActive",&DAT_001be1bc,&DAT_00dbb880);
  cVar1 = FUN_004c17b4(param_2,*param_3,local_60);
  FUN_00ad843c(&local_80);
  *(bool *)(param_1 + 0x27) = cVar1 != '\0';
  uVar3 = FUN_00adaed8(param_2,"org/webrtc/RtpParameters$Encoding",&DAT_00dbb878);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = (undefined1 *)&local_f0;
  FUN_00ad8450(&local_80,param_2,uVar3,"getMaxBitrateBps","()Ljava/lang/Integer;",&DAT_00dbb888);
  local_a0 = FUN_004a41b4(param_2,*param_3,local_60);
  local_98 = param_2;
  FUN_00ad843c(&local_80);
  uVar3 = FUN_00adaed8(param_2,"org/webrtc/RtpParameters$Encoding",&DAT_00dbb878);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = (undefined1 *)&local_f0;
  FUN_00ad8450(&local_80,param_2,uVar3,"getBitratePriority",&DAT_001a4f21,&DAT_00dbb890);
  uVar3 = FUN_00adde40(param_2,*param_3,local_60);
  FUN_00ad843c(&local_80);
  *(undefined8 *)(param_1 + 10) = uVar3;
  uVar3 = FUN_00adaed8(param_2,"org/webrtc/RtpParameters$Encoding",&DAT_00dbb878);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = (undefined1 *)&local_f0;
  FUN_00ad8450(&local_80,param_2,uVar3,"getNetworkPriority",&DAT_001bb71e,&DAT_00dbb898);
  uVar2 = FUN_004c1718(param_2,*param_3,local_60);
  FUN_00ad843c(&local_80);
  param_1[0xc] = uVar2;
  uVar3 = FUN_00adc418(param_2,&local_a0);
  param_1[0xd] = (int)uVar3;
  *(char *)(param_1 + 0xe) = (char)((ulong)uVar3 >> 0x20);
  uVar3 = FUN_00adaed8(param_2,"org/webrtc/RtpParameters$Encoding",&DAT_00dbb878);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = (undefined1 *)&local_f0;
  FUN_00ad8450(&local_80,param_2,uVar3,"getMinBitrateBps","()Ljava/lang/Integer;",&DAT_00dbb8a0);
  local_b0 = FUN_004a41b4(param_2,*param_3,local_60);
  local_a8 = param_2;
  FUN_00ad843c(&local_80);
  uVar3 = FUN_00adc418(param_2,&local_b0);
  param_1[0xf] = (int)uVar3;
  *(char *)(param_1 + 0x10) = (char)((ulong)uVar3 >> 0x20);
  uVar3 = FUN_00adaed8(param_2,"org/webrtc/RtpParameters$Encoding",&DAT_00dbb878);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = (undefined1 *)&local_f0;
  FUN_00ad8450(&local_80,param_2,uVar3,"getMaxFramerate","()Ljava/lang/Integer;",&DAT_00dbb8a8);
  local_c0 = FUN_004a41b4(param_2,*param_3,local_60);
  local_b8 = param_2;
  FUN_00ad843c(&local_80);
  uVar3 = FUN_00adc418(param_2,&local_c0);
  cVar1 = *(char *)(param_1 + 0x14);
  if (cVar1 == (char)((ulong)uVar3 >> 0x20)) {
    if (cVar1 == '\0') goto LAB_00d05f24;
  }
  else {
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x14) = 0;
      goto LAB_00d05f24;
    }
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  *(double *)(param_1 + 0x12) = (double)(int)uVar3;
LAB_00d05f24:
  uVar3 = FUN_00adaed8(param_2,"org/webrtc/RtpParameters$Encoding",&DAT_00dbb878);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = (undefined1 *)&local_f0;
  FUN_00ad8450(&local_80,param_2,uVar3,"getNumTemporalLayers","()Ljava/lang/Integer;",&DAT_00dbb8b0)
  ;
  local_d0 = FUN_004a41b4(param_2,*param_3,local_60);
  local_c8 = param_2;
  FUN_00ad843c(&local_80);
  uVar3 = FUN_00adc418(param_2,&local_d0);
  param_1[0x16] = (int)uVar3;
  *(char *)(param_1 + 0x17) = (char)((ulong)uVar3 >> 0x20);
  uVar3 = FUN_00adaed8(param_2,"org/webrtc/RtpParameters$Encoding",&DAT_00dbb878);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = (undefined1 *)&local_f0;
  FUN_00ad8450(&local_80,param_2,uVar3,"getScaleResolutionDownBy","()Ljava/lang/Double;",
               &DAT_00dbb8b8);
  local_e0 = FUN_004a41b4(param_2,*param_3,local_60);
  local_d8 = param_2;
  FUN_00ad843c(&local_80);
  uVar3 = FUN_00adc340(param_2,&local_e0);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(undefined1 *)(param_1 + 0x1a) = extraout_w1;
  uVar3 = FUN_00adaed8(param_2,"org/webrtc/RtpParameters$Encoding",&DAT_00dbb878);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = (undefined1 *)&local_f0;
  FUN_00ad8450(&local_80,param_2,uVar3,"getAdaptivePTime",&DAT_001be1bc,&DAT_00dbb8c0);
  cVar1 = FUN_004c17b4(param_2,*param_3,local_60);
  FUN_00ad843c(&local_80);
  *(bool *)((long)param_1 + 0xb9) = cVar1 != '\0';
  uVar3 = FUN_00adaed8(param_2,"org/webrtc/RtpParameters$Encoding",&DAT_00dbb878);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = (undefined1 *)&local_f0;
  FUN_00ad8450(&local_80,param_2,uVar3,"getSsrc","()Ljava/lang/Long;",&DAT_00dbb8c8);
  local_f0 = FUN_004a41b4(param_2,*param_3,local_60);
  local_e8 = param_2;
  FUN_00ad843c(&local_80);
  uVar4 = FUN_00adc1a8(param_2,&local_f0);
  if ((uVar4 & 1) == 0) {
    uVar2 = FUN_00adc2a0(param_2,&local_f0);
    if (*(char *)(param_1 + 1) == '\x01') {
      *param_1 = uVar2;
    }
    else {
      if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *param_1 = uVar2;
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  FUN_00ada608(&local_f0,local_e8);
  FUN_00ada608(&local_e0,local_d8);
  FUN_00ada608(&local_d0,local_c8);
  FUN_00ada608(&local_c0,local_b8);
  FUN_00ada608(&local_b0,local_a8);
  FUN_00ada608(&local_a0,local_98);
  FUN_00ada608(&local_90,local_88);
  return;
}


// ===== 00d061d8  FUN_00d061d8 =====

void FUN_00d061d8(undefined8 *param_1,undefined1 *param_2,undefined8 *param_3)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long local_2f0;
  undefined8 *local_2e8;
  undefined8 local_2e0;
  undefined1 *local_2d8;
  undefined1 *local_2d0;
  undefined1 *puStack_2c8;
  undefined1 *local_2c0;
  undefined8 local_2b8;
  undefined1 *local_2b0;
  undefined8 local_2a8;
  undefined1 *local_2a0;
  undefined8 local_298;
  undefined1 auStack_290 [16];
  undefined8 local_280;
  undefined1 *local_278;
  undefined8 local_270;
  undefined1 *local_268;
  undefined8 local_260;
  undefined1 *puStack_258;
  undefined1 *local_250;
  undefined1 *puStack_248;
  undefined8 local_240;
  undefined1 *local_238;
  undefined1 **local_230;
  undefined1 *puStack_228;
  undefined1 *local_220;
  undefined8 local_218;
  undefined1 *local_210;
  long *local_200;
  undefined3 uStack_1f8;
  undefined5 uStack_1f5;
  short sStack_1f0;
  undefined1 uStack_1ee;
  undefined4 uStack_1ed;
  char cStack_1e9;
  undefined1 *puStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined1 *local_1d0;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined1 *puStack_1b8;
  undefined1 *local_1b0;
  undefined1 *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined1 *local_198;
  undefined1 **local_d0;
  undefined1 *puStack_c8;
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
  long local_70;
  
  lVar9 = tpidr_el0;
  local_70 = *(long *)(lVar9 + 0x28);
  param_1[0x14] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
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
  FUN_00669500(param_1);
  uVar4 = FUN_00adaed8(param_2,"org/webrtc/RtpParameters",&DAT_00dbb8d8);
  local_1e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_200 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_1e8 = &DAT_aaaaaaaaaaaaaaaa;
  sStack_1f0 = 0xaaaa;
  uStack_1ee = 0xaa;
  uStack_1ed = 0xaaaaaaaa;
  cStack_1e9 = 0xaa;
  uStack_1f8 = SUB83(&local_2f0,0);
  uStack_1f5 = (undefined5)((ulong)&local_2f0 >> 0x18);
  FUN_00ad8450(&local_200,param_2,uVar4,"getTransactionId","()Ljava/lang/String;",&DAT_00dbb8d0);
  local_240 = FUN_004a41b4(param_2,*param_3,local_1e0);
  local_238 = param_2;
  FUN_00ad843c(&local_200);
  FUN_00adc4e0(&local_200,param_2,&local_240);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    operator_delete((void *)*param_1);
  }
  param_1[1] = CONCAT53(uStack_1f5,uStack_1f8);
  *param_1 = local_200;
  param_1[2] = CONCAT17(cStack_1e9,CONCAT43(uStack_1ed,CONCAT12(uStack_1ee,sStack_1f0)));
  puStack_248 = &DAT_aaaaaaaaaaaaaaaa;
  local_250 = &DAT_aaaaaaaaaaaaaaaa;
  uVar4 = FUN_00adaed8(param_2,"org/webrtc/RtpParameters",&DAT_00dbb8d8);
  local_1e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_200 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_1e8 = &DAT_aaaaaaaaaaaaaaaa;
  sStack_1f0 = -0x5556;
  uStack_1ee = 0xaa;
  uStack_1ed = 0xaaaaaaaa;
  cStack_1e9 = -0x56;
  uStack_1f8 = SUB83(&local_2f0,0);
  uStack_1f5 = (undefined5)((ulong)&local_2f0 >> 0x18);
  FUN_00ad8450(&local_200,param_2,uVar4,"getDegradationPreference",
               "()Lorg/webrtc/RtpParameters$DegradationPreference;",&DAT_00dbb8e0);
  local_250 = (undefined1 *)FUN_004a41b4(param_2,*param_3,local_1e0);
  puStack_248 = param_2;
  FUN_00ad843c(&local_200);
  uVar5 = FUN_00adc1a8(param_2,&local_250);
  if ((uVar5 & 1) != 0) goto LAB_00d06420;
  uStack_1f8 = 0xaaaaaa;
  uStack_1f5 = 0xaaaaaaaaaa;
  local_200 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  sStack_1f0 = -0x5556;
  uStack_1ee = 0xaa;
  uStack_1ed = 0xaaaaaaaa;
  cStack_1e9 = -0x56;
  FUN_00adc1dc(&local_200,param_2,&local_250);
  lVar1 = CONCAT53(uStack_1f5,uStack_1f8);
  if ((cStack_1e9 < '\0') && (lVar1 == 0x21)) {
    if ((((*local_200 != 0x4e4941544e49414d || local_200[1] != 0x4152454d4152465f) ||
         local_200[2] != 0x525f444e415f4554) || local_200[3] != 0x4f4954554c4f5345) ||
        (char)local_200[4] != 'N') goto LAB_00d071d4;
LAB_00d06404:
    uVar3 = 0;
LAB_00d06408:
    operator_delete(local_200);
  }
  else {
    if (cStack_1e9 < '\0') {
      if (lVar1 == 8) {
        if (*local_200 == 0x44454c4241534944) goto LAB_00d06404;
        if (*local_200 != 0x4445434e414c4142) goto LAB_00d071d4;
        uVar3 = 3;
      }
      else if (lVar1 == 0x12) {
        if ((*local_200 != 0x4e4941544e49414d || local_200[1] != 0x4152454d4152465f) ||
            (short)local_200[2] != 0x4554) goto LAB_00d071d4;
        uVar3 = 1;
      }
      else {
        if ((lVar1 != 0x13) ||
           ((*local_200 != 0x4e4941544e49414d || local_200[1] != 0x54554c4f5345525f) ||
            *(long *)((long)local_200 + 0xb) != 0x4e4f4954554c4f53)) goto LAB_00d071d4;
        uVar3 = 2;
      }
      goto LAB_00d06408;
    }
    if (cStack_1e9 == '\b') {
      if (local_200 == (long *)0x4445434e414c4142) {
        uVar3 = 3;
      }
      else {
        if (local_200 != (long *)0x44454c4241534944) goto LAB_00d071d4;
        uVar3 = 0;
      }
    }
    else if (cStack_1e9 == '\x12') {
      if ((local_200 != (long *)0x4e4941544e49414d ||
          CONCAT53(uStack_1f5,uStack_1f8) != 0x4152454d4152465f) || sStack_1f0 != 0x4554)
      goto LAB_00d071d4;
      uVar3 = 1;
    }
    else {
      if ((cStack_1e9 != '\x13') ||
         ((local_200 != (long *)0x4e4941544e49414d ||
          CONCAT53(uStack_1f5,uStack_1f8) != 0x54554c4f5345525f) ||
          CONCAT17(uStack_1ee,CONCAT25(sStack_1f0,uStack_1f5)) != 0x4e4f4954554c4f53)) {
LAB_00d071d4:
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../sdk/android/src/jni/pc/rtp_parameters.cc",0x32,"false",&DAT_002544f2,
                     "Unexpected DegradationPreference enum_name ",&local_200);
      }
      uVar3 = 2;
    }
  }
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined1 *)((long)param_1 + 0xa4) = 1;
LAB_00d06420:
  local_2f0 = lVar9;
  uVar4 = FUN_00adaed8(param_2,"org/webrtc/RtpParameters",&DAT_00dbb8d8);
  local_1e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_200 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_1e8 = &DAT_aaaaaaaaaaaaaaaa;
  sStack_1f0 = 0xaaaa;
  uStack_1ee = 0xaa;
  uStack_1ed = 0xaaaaaaaa;
  cStack_1e9 = 0xaa;
  uStack_1f8 = SUB83(&local_2f0,0);
  uStack_1f5 = (undefined5)((ulong)&local_2f0 >> 0x18);
  FUN_00ad8450(&local_200,param_2,uVar4,"getRtcp","()Lorg/webrtc/RtpParameters$Rtcp;",&DAT_00dbb8e8)
  ;
  uVar4 = FUN_004a41b4(param_2,*param_3,local_1e0);
  local_260 = uVar4;
  puStack_258 = param_2;
  FUN_00ad843c(&local_200);
  uVar6 = FUN_00adaed8(param_2,"org/webrtc/RtpParameters$Rtcp",&DAT_00dbb8f8);
  local_1e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_200 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_1e8 = &DAT_aaaaaaaaaaaaaaaa;
  sStack_1f0 = 0xaaaa;
  uStack_1ee = 0xaa;
  uStack_1ed = 0xaaaaaaaa;
  cStack_1e9 = 0xaa;
  uStack_1f8 = SUB83(&local_2f0,0);
  uStack_1f5 = (undefined5)((ulong)&local_2f0 >> 0x18);
  FUN_00ad8450(&local_200,param_2,uVar6,"getCname","()Ljava/lang/String;",&DAT_00dbb8f0);
  local_270 = FUN_004a41b4(param_2,uVar4,local_1e0);
  local_268 = param_2;
  FUN_00ad843c(&local_200);
  uVar6 = FUN_00adaed8(param_2,"org/webrtc/RtpParameters$Rtcp",&DAT_00dbb8f8);
  local_1e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_200 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_1e8 = &DAT_aaaaaaaaaaaaaaaa;
  sStack_1f0 = 0xaaaa;
  uStack_1ee = 0xaa;
  uStack_1ed = 0xaaaaaaaa;
  cStack_1e9 = 0xaa;
  uStack_1f8 = SUB83(&local_2f0,0);
  uStack_1f5 = (undefined5)((ulong)&local_2f0 >> 0x18);
  FUN_00ad8450(&local_200,param_2,uVar6,"getReducedSize",&DAT_001be1bc,&DAT_00dbb900);
  cVar2 = FUN_004c17b4(param_2,uVar4,local_1e0);
  FUN_00ad843c(&local_200);
  FUN_00adc4e0(&local_200,param_2,&local_270);
  if (*(char *)((long)param_1 + 0x97) < '\0') {
    operator_delete((void *)param_1[0x10]);
  }
  param_1[0x11] = CONCAT53(uStack_1f5,uStack_1f8);
  param_1[0x10] = local_200;
  param_1[0x12] = CONCAT17(cStack_1e9,CONCAT43(uStack_1ed,CONCAT12(uStack_1ee,sStack_1f0)));
  *(bool *)(param_1 + 0x13) = cVar2 != '\0';
  uVar4 = FUN_00adaed8(param_2,"org/webrtc/RtpParameters",&DAT_00dbb8d8);
  local_1e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_200 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_1e8 = &DAT_aaaaaaaaaaaaaaaa;
  sStack_1f0 = 0xaaaa;
  uStack_1ee = 0xaa;
  uStack_1ed = 0xaaaaaaaa;
  cStack_1e9 = 0xaa;
  uStack_1f8 = SUB83(&local_2f0,0);
  uStack_1f5 = (undefined5)((ulong)&local_2f0 >> 0x18);
  FUN_00ad8450(&local_200,param_2,uVar4,"getHeaderExtensions","()Ljava/util/List;",&DAT_00dbb908);
  local_2e8 = param_3;
  local_280 = FUN_004a41b4(param_2,*param_3,local_1e0);
  local_278 = param_2;
  FUN_00ad843c(&local_200);
  FUN_00adbd70(&local_298,param_2,&local_280);
  puStack_1e8 = &DAT_aaaaaaaaaaaaaaaa;
  sStack_1f0 = 0xaaaa;
  uStack_1ee = 0xaa;
  uStack_1ed = 0xaaaaaaaa;
  cStack_1e9 = 0xaa;
  local_1d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1e0 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_1f8 = 0xaaaaaa;
  uStack_1f5 = 0xaaaaaaaaaa;
  local_200 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  FUN_00adbdd4(&local_200,local_298,auStack_290);
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00adbdc0(&local_a0);
  uVar5 = FUN_00adc0b0(&local_200,&local_a0);
  while ((uVar5 & 1) == 0) {
    puVar8 = (undefined8 *)FUN_00adc13c(&local_200);
    puStack_228 = &DAT_aaaaaaaaaaaaaaaa;
    local_230 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
    local_218 = &DAT_aaaaaaaaaaaaaaaa;
    local_220 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00668d80(&local_230);
    uVar4 = FUN_00adaed8(param_2,"org/webrtc/RtpParameters$HeaderExtension",&DAT_00dbb918);
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    local_d0 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_c0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_c8 = (undefined1 *)&local_2f0;
    FUN_00ad8450(&local_d0,param_2,uVar4,"getUri","()Ljava/lang/String;",&DAT_00dbb910);
    local_2d0 = (undefined1 *)FUN_004a41b4(param_2,*puVar8,local_b0);
    puStack_2c8 = param_2;
    FUN_00ad843c(&local_d0);
    FUN_00adc4e0(&local_d0,param_2,&local_2d0);
    if ((long)local_220 < 0) {
      operator_delete(local_230);
    }
    local_220 = local_c0;
    local_c0 = (undefined1 *)((ulong)local_c0 & 0xffffffffffffff);
    puStack_228 = puStack_c8;
    local_230 = local_d0;
    local_d0 = (undefined1 **)((ulong)local_d0 & 0xffffffffffffff00);
    FUN_00ada608(&local_2d0,puStack_2c8);
    uVar4 = FUN_00adaed8(param_2,"org/webrtc/RtpParameters$HeaderExtension",&DAT_00dbb918);
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    local_d0 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_c0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_c8 = (undefined1 *)&local_2f0;
    FUN_00ad8450(&local_d0,param_2,uVar4,"getId",&DAT_001bb71e,&DAT_00dbb920);
    uVar3 = FUN_004c1718(param_2,*puVar8,local_b0);
    FUN_00ad843c(&local_d0);
    local_218 = (undefined1 *)CONCAT44(local_218._4_4_,uVar3);
    uVar4 = FUN_00adaed8(param_2,"org/webrtc/RtpParameters$HeaderExtension",&DAT_00dbb918);
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    local_d0 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_c0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_c8 = (undefined1 *)&local_2f0;
    FUN_00ad8450(&local_d0,param_2,uVar4,"getEncrypted",&DAT_001be1bc,&DAT_00dbb928);
    cVar2 = FUN_004c17b4(param_2,*puVar8,local_b0);
    FUN_00ad843c(&local_d0);
    puVar8 = (undefined8 *)param_1[10];
    local_218._0_5_ = CONCAT14(cVar2 != '\0',(undefined4)local_218);
    if (puVar8 < (undefined8 *)param_1[0xb]) {
      if (puVar8 == (undefined8 *)0x0) goto LAB_00d071bc;
      if ((long)local_220 < 0) {
        FUN_005478d8(puVar8,local_230,puStack_228);
      }
      else {
        puVar8[2] = local_220;
        puVar8[1] = puStack_228;
        *puVar8 = local_230;
      }
      puVar7 = puVar8 + 4;
      *(undefined1 *)((long)puVar8 + 0x1c) = local_218._4_1_;
      *(undefined4 *)(puVar8 + 3) = (undefined4)local_218;
    }
    else {
      puVar7 = (undefined8 *)FUN_0066a5f0(param_1 + 9,&local_230);
    }
    param_1[10] = puVar7;
    FUN_00668f8c(&local_230);
    FUN_00adbeec(&local_200);
    uVar5 = FUN_00adc0b0(&local_200,&local_a0);
  }
  FUN_00adc078(&local_a0);
  FUN_00adc078(&local_200);
  FUN_00adbdb0(&local_298);
  uVar4 = FUN_00adaed8(param_2,"org/webrtc/RtpParameters",&DAT_00dbb8d8);
  local_1e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_200 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_1e8 = &DAT_aaaaaaaaaaaaaaaa;
  sStack_1f0 = 0xaaaa;
  uStack_1ee = 0xaa;
  uStack_1ed = 0xaaaaaaaa;
  cStack_1e9 = 0xaa;
  uStack_1f8 = SUB83(&local_2f0,0);
  uStack_1f5 = (undefined5)((ulong)&local_2f0 >> 0x18);
  FUN_00ad8450(&local_200,param_2,uVar4,"getEncodings","()Ljava/util/List;",&DAT_00dbb930);
  puVar8 = local_2e8;
  local_2a8 = FUN_004a41b4(param_2,*local_2e8,local_1e0);
  local_2a0 = param_2;
  FUN_00ad843c(&local_200);
  FUN_00adbd70(&local_230,param_2,&local_2a8);
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00adbdd4(&local_a0,local_230,&puStack_228);
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
  FUN_00adbdc0(&local_d0);
  uVar5 = FUN_00adc0b0(&local_a0,&local_d0);
  while ((uVar5 & 1) == 0) {
    uVar4 = FUN_00adc13c(&local_a0);
    memcpy(&local_200,&DAT_0025a8d8,0x130);
    FUN_00d05b00(&local_200,param_2,uVar4);
    uVar5 = param_1[0xd];
    if (uVar5 < (ulong)param_1[0xe]) {
      if (uVar5 == 0) goto LAB_00d071bc;
      FUN_00669028(uVar5,&local_200);
      lVar9 = uVar5 + 0x130;
    }
    else {
      lVar9 = FUN_00b6c788(param_1 + 0xc,&local_200);
    }
    param_1[0xd] = lVar9;
    FUN_0066919c(&local_200);
    FUN_00adbeec(&local_a0);
    uVar5 = FUN_00adc0b0(&local_a0,&local_d0);
  }
  FUN_00adc078(&local_d0);
  FUN_00adc078(&local_a0);
  FUN_00adbdb0(&local_230);
  uVar4 = FUN_00adaed8(param_2,"org/webrtc/RtpParameters",&DAT_00dbb8d8);
  local_1e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_200 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_1e8 = &DAT_aaaaaaaaaaaaaaaa;
  sStack_1f0 = 0xaaaa;
  uStack_1ee = 0xaa;
  uStack_1ed = 0xaaaaaaaa;
  cStack_1e9 = 0xaa;
  uStack_1f8 = SUB83(&local_2f0,0);
  uStack_1f5 = (undefined5)((ulong)&local_2f0 >> 0x18);
  FUN_00ad8450(&local_200,param_2,uVar4,"getCodecs","()Ljava/util/List;",&DAT_00dbb938);
  local_2b8 = FUN_004a41b4(param_2,*puVar8,local_1e0);
  local_2b0 = param_2;
  FUN_00ad843c(&local_200);
  FUN_00adbd70(&local_298,param_2,&local_2b8);
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00adbdd4(&local_a0,local_298,auStack_290);
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
  FUN_00adbdc0(&local_d0);
  uVar5 = FUN_00adc0b0(&local_a0,&local_d0);
  if ((uVar5 & 1) == 0) {
    do {
      puVar8 = (undefined8 *)FUN_00adc13c(&local_a0);
      puStack_1e8 = &DAT_aaaaaaaaaaaaaaaa;
      sStack_1f0 = 0xaaaa;
      uStack_1ee = 0xaa;
      uStack_1ed = 0xaaaaaaaa;
      cStack_1e9 = 0xaa;
      local_1d8 = &DAT_aaaaaaaaaaaaaaaa;
      local_1e0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
      local_1d0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1c0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
      local_1b0 = &DAT_aaaaaaaaaaaaaaaa;
      local_198 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1a0 = &DAT_aaaaaaaaaaaaaaaa;
      uStack_1f8 = 0xaaaaaa;
      uStack_1f5 = 0xaaaaaaaaaa;
      local_200 = (long *)&DAT_aaaaaaaaaaaaaaaa;
      FUN_006692b8(&local_200);
      uVar4 = FUN_00adaed8(param_2,"org/webrtc/RtpParameters$Codec",&DAT_00dbb948);
      local_210 = &DAT_aaaaaaaaaaaaaaaa;
      local_230 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
      local_218 = &DAT_aaaaaaaaaaaaaaaa;
      local_220 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_228 = (undefined1 *)&local_2f0;
      FUN_00ad8450(&local_230,param_2,uVar4,"getPayloadType",&DAT_001bb71e,&DAT_00dbb940);
      uVar3 = FUN_004c1718(param_2,*puVar8,local_210);
      FUN_00ad843c(&local_230);
      local_198 = (undefined1 *)CONCAT44(local_198._4_4_,uVar3);
      uVar4 = FUN_00adaed8(param_2,"org/webrtc/RtpParameters$Codec",&DAT_00dbb948);
      local_210 = &DAT_aaaaaaaaaaaaaaaa;
      local_230 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
      local_218 = &DAT_aaaaaaaaaaaaaaaa;
      local_220 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_228 = (undefined1 *)&local_2f0;
      FUN_00ad8450(&local_230,param_2,uVar4,"getName","()Ljava/lang/String;",&DAT_00dbb950);
      local_2d0 = (undefined1 *)FUN_004a41b4(param_2,*puVar8,local_210);
      puStack_2c8 = param_2;
      FUN_00ad843c(&local_230);
      FUN_00adc4e0(&local_230,param_2,&local_2d0);
      if ((long)puStack_1e8 < 0) {
        operator_delete((void *)CONCAT53(uStack_1f5,uStack_1f8));
      }
      puStack_1e8 = local_220;
      local_220 = (undefined1 *)((ulong)local_220 & 0xffffffffffffff);
      sStack_1f0 = (short)puStack_228;
      uStack_1ee = (undefined1)((ulong)puStack_228 >> 0x10);
      uStack_1ed = (undefined4)((ulong)puStack_228 >> 0x18);
      cStack_1e9 = (char)((ulong)puStack_228 >> 0x38);
      uStack_1f8 = SUB83(local_230,0);
      uStack_1f5 = (undefined5)((ulong)local_230 >> 0x18);
      local_230 = (undefined1 **)((ulong)local_230 & 0xffffffffffffff00);
      FUN_00ada608(&local_2d0,puStack_2c8);
      uVar4 = FUN_00adaed8(param_2,"org/webrtc/RtpParameters$Codec",&DAT_00dbb948);
      local_210 = &DAT_aaaaaaaaaaaaaaaa;
      local_230 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
      local_218 = &DAT_aaaaaaaaaaaaaaaa;
      local_220 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_228 = (undefined1 *)&local_2f0;
      FUN_00ad8450(&local_230,param_2,uVar4,"getKind","()Lorg/webrtc/MediaStreamTrack$MediaType;",
                   &DAT_00dbb958);
      local_2d0 = (undefined1 *)FUN_004a41b4(param_2,*puVar8,local_210);
      puStack_2c8 = param_2;
      FUN_00ad843c(&local_230);
      uVar3 = FUN_00af36ac(param_2,&local_2d0);
      local_1e0 = (undefined1 *)CONCAT44(local_1e0._4_4_,uVar3);
      FUN_00ada608(&local_2d0,puStack_2c8);
      uVar4 = FUN_00adaed8(param_2,"org/webrtc/RtpParameters$Codec",&DAT_00dbb948);
      local_210 = &DAT_aaaaaaaaaaaaaaaa;
      local_230 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
      local_218 = &DAT_aaaaaaaaaaaaaaaa;
      local_220 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_228 = (undefined1 *)&local_2f0;
      FUN_00ad8450(&local_230,param_2,uVar4,"getClockRate","()Ljava/lang/Integer;",&DAT_00dbb960);
      local_2d0 = (undefined1 *)FUN_004a41b4(param_2,*puVar8,local_210);
      puStack_2c8 = param_2;
      FUN_00ad843c(&local_230);
      uVar4 = FUN_00adc418(param_2,&local_2d0);
      local_1e0 = (undefined1 *)CONCAT44((int)uVar4,(undefined4)local_1e0);
      local_1d8 = (undefined1 *)CONCAT71(local_1d8._1_7_,(char)((ulong)uVar4 >> 0x20));
      FUN_00ada608(&local_2d0,puStack_2c8);
      uVar4 = FUN_00adaed8(param_2,"org/webrtc/RtpParameters$Codec",&DAT_00dbb948);
      local_210 = &DAT_aaaaaaaaaaaaaaaa;
      local_230 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
      local_218 = &DAT_aaaaaaaaaaaaaaaa;
      local_220 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_228 = (undefined1 *)&local_2f0;
      FUN_00ad8450(&local_230,param_2,uVar4,"getNumChannels","()Ljava/lang/Integer;",&DAT_00dbb968);
      local_2d0 = (undefined1 *)FUN_004a41b4(param_2,*puVar8,local_210);
      puStack_2c8 = param_2;
      FUN_00ad843c(&local_230);
      uVar4 = FUN_00adc418(param_2,&local_2d0);
      local_1d8 = (undefined1 *)CONCAT44((int)uVar4,(undefined4)local_1d8);
      local_1d0 = (undefined1 *)CONCAT71(local_1d0._1_7_,(char)((ulong)uVar4 >> 0x20));
      FUN_00ada608(&local_2d0,puStack_2c8);
      local_2c0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_2c8 = &DAT_aaaaaaaaaaaaaaaa;
      local_2d0 = &DAT_aaaaaaaaaaaaaaaa;
      uVar4 = FUN_00adaed8(param_2,"org/webrtc/RtpParameters$Codec",&DAT_00dbb948);
      local_210 = &DAT_aaaaaaaaaaaaaaaa;
      local_230 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
      local_218 = &DAT_aaaaaaaaaaaaaaaa;
      local_220 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_228 = (undefined1 *)&local_2f0;
      FUN_00ad8450(&local_230,param_2,uVar4,"getParameters","()Ljava/util/Map;",&DAT_00dbb970);
      local_2e0 = FUN_004a41b4(param_2,*puVar8,local_210);
      local_2d8 = param_2;
      FUN_00ad843c(&local_230);
      FUN_00adc6fc(&local_2d0,param_2,&local_2e0);
      FUN_00ada608(&local_2e0,local_2d8);
      FUN_00b8684c(&local_1b0,local_2d0,&puStack_2c8);
      uVar5 = param_1[7];
      if (uVar5 < (ulong)param_1[8]) {
        if (uVar5 == 0) {
LAB_00d071bc:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        FUN_006692f8(uVar5,&local_200);
        lVar9 = uVar5 + 0x70;
      }
      else {
        lVar9 = FUN_00d07b18(param_1 + 6,&local_200);
      }
      param_1[7] = lVar9;
      local_230 = &local_2d0;
      FUN_0060b2cc(&local_230,puStack_2c8);
      FUN_00668620(&local_200);
      FUN_00adbeec(&local_a0);
      uVar5 = FUN_00adc0b0(&local_a0,&local_d0);
    } while ((uVar5 & 1) == 0);
  }
  FUN_00adc078(&local_d0);
  FUN_00adc078(&local_a0);
  FUN_00adbdb0(&local_298);
  FUN_00ada608(&local_2b8,local_2b0);
  FUN_00ada608(&local_2a8,local_2a0);
  FUN_00ada608(&local_280,local_278);
  FUN_00ada608(&local_270,local_268);
  FUN_00ada608(&local_260,param_2);
  FUN_00ada608(&local_250,puStack_248);
  FUN_00ada608(&local_240,local_238);
  if (*(long *)(local_2f0 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00d07200  FUN_00d07200 =====

void FUN_00d07200(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_f0 [2];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  
  FUN_00adcf00(&local_a0);
  if (*(char *)(param_3 + 0xa4) == '\x01') {
    uVar1 = *(undefined4 *)(param_3 + 0xa0);
    uVar3 = FUN_00adaed8(param_2,"org/webrtc/RtpParameters$DegradationPreference",&DAT_00dbb988);
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = (undefined1 *)local_f0;
    FUN_00ad8360(&local_80,param_2,uVar3,"fromNativeIndex",
                 "(I)Lorg/webrtc/RtpParameters$DegradationPreference;",&DAT_00dbb980);
    uVar3 = FUN_004aecec(param_2,uVar3,local_60,uVar1);
    local_b0 = uVar3;
    local_a8 = param_2;
    FUN_00ad843c(&local_80);
  }
  else {
    uVar3 = 0;
    local_b0 = 0;
    local_a8 = 0;
  }
  FUN_00adcf00(&local_90,param_2,param_3 + 0x80);
  uVar2 = *(undefined1 *)(param_3 + 0x98);
  uVar4 = FUN_00adaed8(param_2,"org/webrtc/RtpParameters$Rtcp",&DAT_00dbb8f8);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = (undefined1 *)local_f0;
  FUN_00ad8450(&local_80,param_2,uVar4,"<init>","(Ljava/lang/String;Z)V",&DAT_00dbb990);
  uVar4 = FUN_004b8418(param_2,uVar4,local_60,local_90,uVar2);
  local_c0 = uVar4;
  local_b8 = param_2;
  FUN_00ad843c(&local_80);
  FUN_00ada608(&local_90,local_88);
  FUN_00d074ac(&local_90,param_2,param_3 + 0x48,FUN_00d07564);
  FUN_00d07644(&local_d0,param_2,param_3 + 0x60,FUN_00d076fc);
  FUN_00d07908(&local_e0,param_2,param_3 + 0x30,FUN_00d079c0);
  uVar5 = FUN_00adaed8(param_2,"org/webrtc/RtpParameters",&DAT_00dbb8d8);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = (undefined1 *)local_f0;
  FUN_00ad8450(&local_80,param_2,uVar5,"<init>",
               "(Ljava/lang/String;Lorg/webrtc/RtpParameters$DegradationPreference;Lorg/webrtc/RtpParameters$Rtcp;Ljava/util/List;Ljava/util/List;Ljava/util/List;)V"
               ,&DAT_00dbb978);
  local_f0[0] = local_e0;
  uVar3 = FUN_004b8418(param_2,uVar5,local_60,local_a0,uVar3,uVar4,local_90,local_d0);
  *param_1 = uVar3;
  param_1[1] = param_2;
  FUN_00ad843c(&local_80);
  FUN_00ada608(&local_e0,local_d8);
  FUN_00ada608(&local_d0,local_c8);
  FUN_00ada608(&local_90,local_88);
  FUN_00ada608(&local_c0,local_b8);
  FUN_00ada608(&local_b0,local_a8);
  FUN_00ada608(&local_a0,local_98);
  return;
}


// ===== 00d074ac  FUN_00d074ac =====

void FUN_00d074ac(undefined8 *param_1,undefined8 param_2,long *param_3,code *param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00addb48(&local_60,param_2);
  lVar2 = param_3[1];
  for (lVar1 = *param_3; lVar1 != lVar2; lVar1 = lVar1 + 0x20) {
    (*param_4)(auStack_70,param_2,lVar1);
    FUN_00addc08(&local_60,auStack_70);
    FUN_00ada608(auStack_70,local_68);
  }
  *param_1 = 0;
  param_1[1] = local_50;
  FUN_00ada514(param_1,local_50,puStack_58);
  FUN_00addbf8(&local_60);
  return;
}


// ===== 00d07564  FUN_00d07564 =====

void FUN_00d07564(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  FUN_00adcf00(&local_80);
  uVar1 = *(undefined4 *)(param_3 + 0x18);
  uVar2 = *(undefined1 *)(param_3 + 0x1c);
  uVar3 = FUN_00adaed8(param_2,"org/webrtc/RtpParameters$HeaderExtension",&DAT_00dbb918);
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = (undefined1 *)&local_80;
  FUN_00ad8450(&local_70,param_2,uVar3,"<init>","(Ljava/lang/String;IZ)V",&DAT_00dbb998);
  uVar3 = FUN_004b8418(param_2,uVar3,local_50,local_80,uVar1,uVar2);
  *param_1 = uVar3;
  param_1[1] = param_2;
  FUN_00ad843c(&local_70);
  FUN_00ada608(&local_80,local_78);
  return;
}


// ===== 00d07644  FUN_00d07644 =====

void FUN_00d07644(undefined8 *param_1,undefined8 param_2,long *param_3,code *param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00addb48(&local_60,param_2);
  lVar2 = param_3[1];
  for (lVar1 = *param_3; lVar1 != lVar2; lVar1 = lVar1 + 0x130) {
    (*param_4)(auStack_70,param_2,lVar1);
    FUN_00addc08(&local_60,auStack_70);
    FUN_00ada608(auStack_70,local_68);
  }
  *param_1 = 0;
  param_1[1] = local_50;
  FUN_00ada514(param_1,local_50,puStack_58);
  FUN_00addbf8(&local_60);
  return;
}


// ===== 00d076fc  FUN_00d076fc =====

void FUN_00d076fc(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  uint local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  uint local_c8;
  undefined1 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  
  FUN_00adcf00(&local_90,param_2,param_3 + 0x28);
  uVar2 = *(undefined1 *)(param_3 + 0x27);
  uVar5 = *(undefined8 *)(param_3 + 10);
  uVar1 = param_3[0xc];
  FUN_00add114(&local_a0,param_2,param_3 + 0xd);
  FUN_00add114(&local_b0,param_2,param_3 + 0xf);
  local_c8 = local_c8 & 0xffffff00;
  local_c4 = *(char *)(param_3 + 0x14) == '\x01';
  if ((bool)local_c4) {
    local_c8 = (uint)*(double *)(param_3 + 0x12);
  }
  FUN_00add114(&local_c0,param_2,&local_c8);
  FUN_00add114(&local_d8,param_2,param_3 + 0x16);
  FUN_00add048(&local_e8,param_2,param_3 + 0x18);
  if (*(char *)(param_3 + 1) == '\x01') {
    FUN_00adcdb4(&local_f8,param_2,*param_3);
  }
  else {
    local_f8 = 0;
    local_f0 = 0;
  }
  bVar3 = *(byte *)((long)param_3 + 0xb9);
  uVar4 = FUN_00adaed8(param_2,"org/webrtc/RtpParameters$Encoding",&DAT_00dbb878);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = (undefined1 *)&local_120;
  FUN_00ad8450(&local_80,param_2,uVar4,"<init>",
               "(Ljava/lang/String;ZDILjava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Double;Ljava/lang/Long;Z)V"
               ,&DAT_00dbb9a0);
  local_100 = (uint)bVar3;
  local_110 = local_e8;
  uStack_108 = local_f8;
  local_120 = local_c0;
  uStack_118 = local_d8;
  uVar5 = FUN_004b8418(uVar5,param_2,uVar4,local_60,local_90,uVar2,uVar1,local_a0,local_b0);
  *param_1 = uVar5;
  param_1[1] = param_2;
  FUN_00ad843c(&local_80);
  FUN_00ada608(&local_f8,local_f0);
  FUN_00ada608(&local_e8,local_e0);
  FUN_00ada608(&local_d8,local_d0);
  FUN_00ada608(&local_c0,local_b8);
  FUN_00ada608(&local_b0,local_a8);
  FUN_00ada608(&local_a0,local_98);
  FUN_00ada608(&local_90,local_88);
  return;
}


// ===== 00d07908  FUN_00d07908 =====

void FUN_00d07908(undefined8 *param_1,undefined8 param_2,long *param_3,code *param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00addb48(&local_60,param_2);
  lVar2 = param_3[1];
  for (lVar1 = *param_3; lVar1 != lVar2; lVar1 = lVar1 + 0x70) {
    (*param_4)(auStack_70,param_2,lVar1);
    FUN_00addc08(&local_60,auStack_70);
    FUN_00ada608(auStack_70,local_68);
  }
  *param_1 = 0;
  param_1[1] = local_50;
  FUN_00ada514(param_1,local_50,puStack_58);
  FUN_00addbf8(&local_60);
  return;
}


// ===== 00d079c0  FUN_00d079c0 =====

void FUN_00d079c0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_c0 [2];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  uVar1 = *(undefined4 *)(param_3 + 0x68);
  FUN_00adcf00(&local_70,param_2,param_3 + 8);
  FUN_00af35fc(&local_80,param_2,*(undefined4 *)(param_3 + 0x20));
  FUN_00add114(&local_90,param_2,param_3 + 0x24);
  FUN_00add114(&local_a0,param_2,param_3 + 0x2c);
  FUN_00ae26a8(&local_b0,param_2,param_3 + 0x50);
  uVar2 = FUN_00adaed8(param_2,"org/webrtc/RtpParameters$Codec",&DAT_00dbb948);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)local_c0;
  FUN_00ad8450(&local_60,param_2,uVar2,"<init>",
               "(ILjava/lang/String;Lorg/webrtc/MediaStreamTrack$MediaType;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/util/Map;)V"
               ,&DAT_00dbb9a8);
  local_c0[0] = local_b0;
  uVar2 = FUN_004b8418(param_2,uVar2,local_40,uVar1,local_70,local_80,local_90,local_a0);
  *param_1 = uVar2;
  param_1[1] = param_2;
  FUN_00ad843c(&local_60);
  FUN_00ada608(&local_b0,local_a8);
  FUN_00ada608(&local_a0,local_98);
  FUN_00ada608(&local_90,local_88);
  FUN_00ada608(&local_80,local_78);
  FUN_00ada608(&local_70,local_68);
  return;
}


// ===== 00d07b18  FUN_00d07b18 =====

long FUN_00d07b18(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  
  lVar6 = param_1[1] - *param_1;
  uVar3 = (lVar6 >> 4) * 0x6db6db6db6db6db7 + 1;
  if (uVar3 < 0x24924924924924a) {
    lVar4 = param_1[2] - *param_1 >> 4;
    uVar5 = lVar4 * -0x2492492492492492;
    if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
      uVar5 = uVar3;
    }
    if (0x124924924924923 < (ulong)(lVar4 * 0x6db6db6db6db6db7)) {
      uVar5 = 0x249249249249249;
    }
    if (uVar5 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (0x249249249249249 < uVar5) goto LAB_00d07ccc;
      pvVar2 = operator_new(uVar5 * 0x70);
      lVar6 = (long)pvVar2 + lVar6;
    }
    if (lVar6 == 0) {
LAB_00d07ca0:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_006692f8(lVar6,param_2);
    puVar7 = (undefined8 *)*param_1;
    puVar1 = (undefined8 *)param_1[1];
    lVar4 = (long)puVar7 + (lVar6 - (long)puVar1);
    puVar8 = puVar7;
    lVar9 = lVar4;
    if (puVar1 != puVar7) {
      do {
        if (lVar9 == 0) goto LAB_00d07ca0;
        FUN_006692f8(lVar9,puVar8);
        puVar8 = puVar8 + 0xe;
        lVar9 = lVar9 + 0x70;
      } while (puVar8 != puVar1);
      do {
        if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        puVar8 = puVar7 + 0xe;
        (**(code **)*puVar7)(puVar7);
        puVar7 = puVar8;
      } while (puVar8 != puVar1);
      puVar7 = (undefined8 *)*param_1;
    }
    *param_1 = lVar4;
    param_1[1] = lVar6 + 0x70;
    param_1[2] = (long)((long)pvVar2 + uVar5 * 0x70);
    if (puVar7 != (undefined8 *)0x0) {
      operator_delete(puVar7);
    }
    return lVar6 + 0x70;
  }
  FUN_0066a5c0();
LAB_00d07ccc:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00d07cd0  Java_org_webrtc_RtpSender_nativeGetDtmfSender =====

undefined8
Java_org_webrtc_RtpSender_nativeGetDtmfSender(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *local_8;
  
  (**(code **)(*param_3 + 0x88))(&local_8,param_3);
  plVar1 = local_8;
  local_8 = (long *)0x0;
  uVar2 = FUN_00adde38(plVar1);
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return uVar2;
}


// ===== 00d07d30  Java_org_webrtc_RtpSender_nativeGetId =====

undefined1 *
Java_org_webrtc_RtpSender_nativeGetId(undefined8 param_1,undefined8 param_2,long *param_3)

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


// ===== 00d07db4  Java_org_webrtc_RtpSender_nativeGetMediaType =====

undefined1 *
Java_org_webrtc_RtpSender_nativeGetMediaType(undefined8 param_1,undefined8 param_2,long *param_3)

{
  char *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *local_30;
  undefined1 *puStack_28;
  
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  iVar3 = (**(code **)(*param_3 + 0x40))(param_3);
  pcVar1 = "audio";
  if (iVar3 != 0) {
    pcVar1 = "video";
  }
  FUN_00adce64(&local_30,param_1,pcVar1);
  puVar2 = local_30;
  local_30 = (undefined1 *)0x0;
  FUN_00ada608(&local_30,puStack_28);
  return puVar2;
}


// ===== 00d07e30  Java_org_webrtc_RtpSender_nativeGetParameters =====

undefined1 *
Java_org_webrtc_RtpSender_nativeGetParameters(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
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
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
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
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*param_3 + 0x68))(&puStack_d0,param_3);
  FUN_00d07200(&local_e0,param_1,&puStack_d0);
  FUN_0066981c(&puStack_d0);
  puVar1 = local_e0;
  local_e0 = (undefined1 *)0x0;
  FUN_00ada608(&local_e0,puStack_d8);
  return puVar1;
}


// ===== 00d07ebc  Java_org_webrtc_RtpSender_nativeGetStreams =====

/* WARNING: Removing unreachable block (ram,0x00d07f94) */

undefined8
Java_org_webrtc_RtpSender_nativeGetStreams(undefined8 param_1,undefined8 param_2,long *param_3)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 uVar3;
  void *local_78;
  void *local_70;
  undefined8 local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  (**(code **)(*param_3 + 0x50))(&local_78,param_3);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00addb48(&local_50,param_1);
  pvVar2 = local_70;
  for (pvVar1 = local_78; pvVar1 != pvVar2; pvVar1 = (void *)((long)pvVar1 + 0x18)) {
    FUN_00adcf00(&local_60,param_1,pvVar1);
    FUN_00addc08(&local_50,&local_60);
    FUN_00ada608(&local_60,local_58);
  }
  local_60 = 0;
  local_58 = local_40;
  FUN_00ada514(&local_60,local_40,puStack_48);
  FUN_00addbf8(&local_50);
  if (local_78 != (void *)0x0) {
    while (local_78 != local_70) {
      local_70 = (void *)((long)local_70 + -0x18);
      if (local_70 == (void *)0x0) {
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
  uVar3 = local_60;
  local_60 = 0;
  FUN_00ada608(&local_60,local_58);
  return uVar3;
}


// ===== 00d07ffc  Java_org_webrtc_RtpSender_nativeGetTrack =====

undefined8
Java_org_webrtc_RtpSender_nativeGetTrack(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *local_8;
  
  (**(code **)(*param_3 + 0x28))(&local_8,param_3);
  plVar1 = local_8;
  local_8 = (long *)0x0;
  uVar2 = FUN_00adde38(plVar1);
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return uVar2;
}


// ===== 00d0805c  Java_org_webrtc_RtpSender_nativeSetFrameEncryptor =====

void Java_org_webrtc_RtpSender_nativeSetFrameEncryptor
               (undefined8 param_1,undefined8 param_2,long *param_3,long *param_4)

{
  long *local_8;
  
  local_8 = param_4;
  if (param_4 != (long *)0x0) {
    (**(code **)*param_4)(param_4);
  }
  (**(code **)(*param_3 + 0x90))(param_3,&local_8);
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 8))();
  }
  return;
}


// ===== 00d080c0  Java_org_webrtc_RtpSender_nativeSetParameters =====

bool Java_org_webrtc_RtpSender_nativeSetParameters
               (undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined8 local_100;
  int local_f8 [2];
  void *local_f0;
  char cStack_d9;
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
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  local_100 = param_4;
  uVar2 = FUN_00adc1a8(param_1,&local_100);
  if ((uVar2 & 1) == 0) {
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
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
    local_30 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00d061d8(&local_d0,param_1,&local_100);
    (**(code **)(*param_3 + 0x70))(local_f8,param_3,&local_d0);
    bVar1 = local_f8[0] == 0;
    if (cStack_d9 < '\0') {
      operator_delete(local_f0);
    }
    FUN_0066981c(&local_d0);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


// ===== 00d0817c  Java_org_webrtc_RtpSender_nativeSetStreams =====

/* WARNING: Removing unreachable block (ram,0x00d081f8) */

void Java_org_webrtc_RtpSender_nativeSetStreams
               (undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined8 local_40;
  void *local_38;
  void *local_30;
  
  local_40 = param_4;
  FUN_00afa544(&local_38,param_1,&local_40,FUN_00adc4e0);
  (**(code **)(*param_3 + 0x58))(param_3,&local_38);
  if (local_38 != (void *)0x0) {
    while (local_38 != local_30) {
      local_30 = (void *)((long)local_30 + -0x18);
      if (local_30 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    local_30 = local_38;
    operator_delete(local_38);
  }
  return;
}


// ===== 00d08248  Java_org_webrtc_RtpSender_nativeSetTrack =====

uint Java_org_webrtc_RtpSender_nativeSetTrack
               (undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_3 + 0x20))(param_3,param_4);
  return uVar1 & 1;
}


// ===== 00d08278  FUN_00d08278 =====

void FUN_00d08278(undefined8 *param_1,undefined8 param_2,long *param_3)

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
    uVar2 = FUN_00adaed8(param_2,"org/webrtc/RtpSender",&DAT_00dbb9b8);
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = (undefined1 *)&local_60;
    FUN_00ad8450(&local_60,param_2,uVar2,"<init>",&DAT_001cf399,&DAT_00dbb9b0);
    uVar1 = FUN_004b8418(param_2,uVar2,local_40,uVar1);
    *param_1 = uVar1;
    param_1[1] = param_2;
    FUN_00ad843c(&local_60);
  }
  return;
}


// ===== 00d08344  Java_org_webrtc_RtpTransceiver_nativeCurrentDirection =====

undefined8
Java_org_webrtc_RtpTransceiver_nativeCurrentDirection
          (undefined8 param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  uVar1 = (**(code **)(*param_3 + 0x70))(param_3);
  if ((uVar1 >> 0x20 & 1) == 0) {
    param_1 = 0;
    uVar2 = 0;
    local_68 = 0;
  }
  else {
    uVar2 = FUN_00adaed8(param_1,"org/webrtc/RtpTransceiver$RtpTransceiverDirection",&DAT_00dbb9c8);
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = (undefined1 *)&local_70;
    FUN_00ad8360(&local_60,param_1,uVar2,"fromNativeIndex",
                 "(I)Lorg/webrtc/RtpTransceiver$RtpTransceiverDirection;",&DAT_00dbb9c0);
    uVar2 = FUN_004aecec(param_1,uVar2,local_40,uVar1 & 0xffffffff);
    local_68 = param_1;
    FUN_00ad843c(&local_60);
  }
  local_70 = 0;
  FUN_00ada608(&local_70,param_1);
  return uVar2;
}


// ===== 00d08430  Java_org_webrtc_RtpTransceiver_nativeDirection =====

undefined8
Java_org_webrtc_RtpTransceiver_nativeDirection(undefined8 param_1,undefined8 param_2,long *param_3)

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
  
  uVar1 = (**(code **)(*param_3 + 0x50))(param_3);
  uVar2 = FUN_00adaed8(param_1,"org/webrtc/RtpTransceiver$RtpTransceiverDirection",&DAT_00dbb9c8);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_70;
  FUN_00ad8360(&local_60,param_1,uVar2,"fromNativeIndex",
               "(I)Lorg/webrtc/RtpTransceiver$RtpTransceiverDirection;",&DAT_00dbb9c0);
  uVar2 = FUN_004aecec(param_1,uVar2,local_40,uVar1);
  local_68 = param_1;
  FUN_00ad843c(&local_60);
  local_70 = 0;
  FUN_00ada608(&local_70,param_1);
  return uVar2;
}


// ===== 00d08508  Java_org_webrtc_RtpTransceiver_nativeGetMediaType =====

undefined1 *
Java_org_webrtc_RtpTransceiver_nativeGetMediaType
          (undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 *local_30;
  undefined1 *puStack_28;
  
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  uVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  FUN_00af35fc(&local_30,param_1,uVar2);
  puVar1 = local_30;
  local_30 = (undefined1 *)0x0;
  FUN_00ada608(&local_30,puStack_28);
  return puVar1;
}


// ===== 00d08570  Java_org_webrtc_RtpTransceiver_nativeGetMid =====

undefined1 *
Java_org_webrtc_RtpTransceiver_nativeGetMid(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  undefined1 *puStack_28;
  
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*param_3 + 0x28))(&local_40,param_3);
  FUN_00add1d8(&local_50,param_1,&local_40);
  if (((char)puStack_28 == '\x01') && ((long)local_30 < 0)) {
    operator_delete(local_40);
  }
  puVar1 = local_50;
  local_50 = (undefined1 *)0x0;
  FUN_00ada608(&local_50,puStack_48);
  return puVar1;
}


// ===== 00d08604  Java_org_webrtc_RtpTransceiver_nativeGetReceiver =====

undefined1 *
Java_org_webrtc_RtpTransceiver_nativeGetReceiver
          (undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined1 *local_30;
  undefined1 *puStack_28;
  long *local_8;
  
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*param_3 + 0x38))(&local_8,param_3);
  FUN_00d0578c(&local_30,param_1,&local_8);
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 8))();
  }
  puVar1 = local_30;
  local_30 = (undefined1 *)0x0;
  FUN_00ada608(&local_30,puStack_28);
  return puVar1;
}


// ===== 00d08684  Java_org_webrtc_RtpTransceiver_nativeGetSender =====

undefined1 *
Java_org_webrtc_RtpTransceiver_nativeGetSender(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined1 *local_30;
  undefined1 *puStack_28;
  long *local_8;
  
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*param_3 + 0x30))(&local_8,param_3);
  FUN_00d08278(&local_30,param_1,&local_8);
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 8))();
  }
  puVar1 = local_30;
  local_30 = (undefined1 *)0x0;
  FUN_00ada608(&local_30,puStack_28);
  return puVar1;
}


// ===== 00d08704  Java_org_webrtc_RtpTransceiver_nativeSetCodecPreferences =====

undefined1 *
Java_org_webrtc_RtpTransceiver_nativeSetCodecPreferences
          (undefined1 *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined8 *local_70;
  undefined8 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  long local_28;
  
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  local_28 = param_4;
  if (param_4 == 0) {
    puVar5 = (undefined8 *)0x0;
    puVar4 = (undefined8 *)0x0;
  }
  else {
    FUN_00d091b4(&local_70,param_1,&local_28,PTR_FUN_00d54a30);
    puVar4 = local_70;
    puVar5 = puStack_68;
  }
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puVar1 = (undefined8 *)0x0;
  if ((long)puVar5 - (long)puVar4 != 0) {
    puVar1 = puVar4;
  }
  (**(code **)(*param_3 + 0x98))
            (&local_a0,param_3,puVar1,((long)puVar5 - (long)puVar4 >> 5) * -0x3333333333333333);
  if ((int)local_a0 == 0) {
    uVar2 = FUN_00adaed8(param_1,"org/webrtc/RtcError",&DAT_00dbb9d8);
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &local_c0;
    FUN_00ad8360(&local_70,param_1,uVar2,"success","()Lorg/webrtc/RtcError;",&DAT_00dbb9e0);
    puVar3 = (undefined1 *)FUN_004aecec(param_1,uVar2,local_50);
    FUN_00ad843c(&local_70);
  }
  else {
    uVar2 = FUN_005ecd5c(&local_a0);
    FUN_00adce64(&local_b0,param_1,uVar2);
    uVar2 = FUN_00adaed8(param_1,"org/webrtc/RtcError",&DAT_00dbb9d8);
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &local_c0;
    FUN_00ad8360(&local_70,param_1,uVar2,"error","(Ljava/lang/String;)Lorg/webrtc/RtcError;",
                 &DAT_00dbb9d0);
    puVar3 = (undefined1 *)FUN_004aecec(param_1,uVar2,local_50,local_b0);
    FUN_00ad843c(&local_70);
    FUN_00ada608(&local_b0,local_a8);
  }
  local_c0 = puVar3;
  puStack_b8 = param_1;
  if ((long)local_88 < 0) {
    operator_delete(puStack_98);
  }
  if (puVar4 != (undefined8 *)0x0) {
    while (puVar5 != puVar4) {
      puVar5 = puVar5 + -0x14;
      if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      (**(code **)*puVar5)(puVar5);
    }
    operator_delete(puVar4);
    param_1 = puStack_b8;
    puVar3 = local_c0;
  }
  local_c0 = (undefined1 *)0x0;
  FUN_00ada608(&local_c0,param_1);
  return puVar3;
}


// ===== 00d08968  Java_org_webrtc_RtpTransceiver_nativeSetDirection =====

bool Java_org_webrtc_RtpTransceiver_nativeSetDirection
               (undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  bool bVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_68 = param_4;
  uVar3 = FUN_00adc1a8(param_1,&local_68);
  if ((uVar3 & 1) == 0) {
    uVar4 = FUN_00adaed8(param_1,"org/webrtc/RtpTransceiver$RtpTransceiverDirection",&DAT_00dbb9c8);
    local_30 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    local_38 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = auStack_70;
    FUN_00ad8450(&local_50,param_1,uVar4,"getNativeIndex",&DAT_001bb71e,&DAT_00dbb9e8);
    uVar2 = FUN_004c1718(param_1,local_68,local_30);
    FUN_00ad843c(&local_50);
    local_30 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    local_38 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
    (**(code **)(*param_3 + 0x60))(&local_50,param_3,uVar2);
    if ((int)local_50 == 0) {
      bVar1 = true;
    }
    else {
      uVar3 = FUN_004022fc();
      if ((uVar3 & 1) == 0) {
        local_60 = FUN_005eceec((ulong)local_50 & 0xffffffff);
        uVar4 = FUN_005ecd5c(&local_50);
        FUN_00623bb0(&DAT_00254d9c,"../../sdk/android/src/jni/pc/rtp_transceiver.cc",0x64a,
                     "SetDirection failed, code ",local_60,", message ",uVar4);
      }
      bVar1 = (int)local_50 == 0;
    }
    if ((long)local_38 < 0) {
      operator_delete(puStack_48);
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


// ===== 00d08ad0  Java_org_webrtc_RtpTransceiver_nativeStopInternal =====

void Java_org_webrtc_RtpTransceiver_nativeStopInternal
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00d08ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x88))(param_3);
  return;
}


// ===== 00d08ae4  Java_org_webrtc_RtpTransceiver_nativeStopStandard =====

void Java_org_webrtc_RtpTransceiver_nativeStopStandard
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined1 auStack_38 [8];
  void *local_30;
  char cStack_19;
  
  (**(code **)(*param_3 + 0x80))(auStack_38,param_3);
  if (cStack_19 < '\0') {
    operator_delete(local_30);
  }
  return;
}


// ===== 00d08b30  Java_org_webrtc_RtpTransceiver_nativeStopped =====

uint Java_org_webrtc_RtpTransceiver_nativeStopped
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_3 + 0x40))(param_3);
  return uVar1 & 1;
}


// ===== 00d08b5c  FUN_00d08b5c =====

/* WARNING: Removing unreachable block (ram,0x00d08cd0) */

void FUN_00d08b5c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00b1d314(param_1);
  uVar2 = FUN_00adaed8(param_2,"org/webrtc/RtpTransceiver$RtpTransceiverInit",&DAT_00dbb9f8);
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = (undefined1 *)&local_90;
  FUN_00ad8450(&local_70,param_2,uVar2,"getDirectionNativeIndex",&DAT_001bb71e,&DAT_00dbb9f0);
  uVar1 = FUN_004c1718(param_2,*param_3,local_50);
  FUN_00ad843c(&local_70);
  *(undefined4 *)param_1 = uVar1;
  uVar2 = FUN_00adaed8(param_2,"org/webrtc/RtpTransceiver$RtpTransceiverInit",&DAT_00dbb9f8);
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = (undefined1 *)&local_90;
  FUN_00ad8450(&local_70,param_2,uVar2,"getStreamIds","()Ljava/util/List;",&DAT_00dbba00);
  local_80 = FUN_004a41b4(param_2,*param_3,local_50);
  local_78 = param_2;
  FUN_00ad843c(&local_70);
  FUN_00afa544(&local_70,param_2,&local_80,PTR_FUN_00d54a10);
  pvVar5 = (void *)param_1[1];
  if (pvVar5 != (void *)0x0) {
    pvVar4 = (void *)param_1[2];
    pvVar3 = pvVar5;
    if (pvVar5 != pvVar4) {
      do {
        pvVar4 = (void *)((long)pvVar4 + -0x18);
        if (pvVar4 == (void *)0x0) goto LAB_00d08e18;
      } while (pvVar4 != pvVar5);
      pvVar3 = (void *)param_1[1];
    }
    param_1[2] = pvVar5;
    operator_delete(pvVar3);
  }
  param_1[2] = puStack_68;
  param_1[1] = local_70;
  param_1[3] = local_60;
  uVar2 = FUN_00adaed8(param_2,"org/webrtc/RtpTransceiver$RtpTransceiverInit",&DAT_00dbb9f8);
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = (undefined1 *)&local_90;
  FUN_00ad8450(&local_70,param_2,uVar2,"getSendEncodings","()Ljava/util/List;",&DAT_00dbba08);
  local_90 = FUN_004a41b4(param_2,*param_3,local_50);
  local_88 = param_2;
  FUN_00ad843c(&local_70);
  FUN_00d08e2c(&local_70,param_2,&local_90,PTR_FUN_00d54a38);
  pvVar5 = (void *)param_1[4];
  if (pvVar5 != (void *)0x0) {
    pvVar4 = (void *)param_1[5];
    pvVar3 = pvVar5;
    if (pvVar5 != pvVar4) {
      do {
        pvVar4 = (void *)((long)pvVar4 + -0x130);
        if (pvVar4 == (void *)0x0) {
LAB_00d08e18:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_0066919c(pvVar4);
      } while (pvVar4 != pvVar5);
      pvVar3 = (void *)param_1[4];
    }
    param_1[5] = pvVar5;
    operator_delete(pvVar3);
  }
  param_1[5] = puStack_68;
  param_1[4] = local_70;
  param_1[6] = local_60;
  FUN_00ada608(&local_90,local_88);
  FUN_00ada608(&local_80,local_78);
  return;
}


// ===== 00d08e2c  FUN_00d08e2c =====

void FUN_00d08e2c(undefined8 *param_1,long *param_2,long *param_3,code *param_4)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_218;
  long *local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_d8;
  undefined1 auStack_d0 [16];
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar5 = *param_3;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (lVar5 != 0) {
    FUN_00adbd70(&local_d8,param_2,param_3);
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00adbdd4(&local_90,local_d8,auStack_d0);
    puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_c0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00adbdc0(&local_c0);
    while (uVar3 = FUN_00adc0b0(&local_90,&local_c0), (uVar3 & 1) == 0) {
      puVar4 = (undefined8 *)FUN_00adc13c(&local_90);
      local_208 = 0;
      uStack_200 = 0;
      uStack_200 = FUN_00ada514(&local_208,0,*puVar4);
      local_218 = local_208;
      local_208 = 0;
      local_210 = param_2;
      FUN_00ada608(&local_208,uStack_200);
      (*param_4)(&local_208,param_2,&local_218);
      uVar3 = param_1[1];
      if (uVar3 < (ulong)param_1[2]) {
        if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        FUN_00669028(uVar3,&local_208);
        lVar5 = uVar3 + 0x130;
      }
      else {
        lVar5 = FUN_00bf3f88(param_1,&local_208);
      }
      param_1[1] = lVar5;
      FUN_0066919c(&local_208);
      FUN_00ada608(&local_218,local_210);
      FUN_00adbeec(&local_90);
    }
    FUN_00adc078(&local_c0);
    FUN_00adc078(&local_90);
    FUN_00adbdb0(&local_d8);
    cVar2 = (**(code **)(*param_2 + 0x720))(param_2);
    if (cVar2 != '\0') {
      FUN_00adbb80(&local_208,param_2);
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../sdk/android/native_api/jni/java_types.h",0xb2,"!env->ExceptionCheck()",
                   &DAT_00252f37,&local_208,"Error during JavaListToNativeVector");
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00d09014  FUN_00d09014 =====

void FUN_00d09014(undefined8 *param_1,undefined8 param_2,long *param_3)

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
    uVar2 = FUN_00adaed8(param_2,"org/webrtc/RtpTransceiver",&DAT_00dbba18);
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = (undefined1 *)&local_60;
    FUN_00ad8450(&local_60,param_2,uVar2,"<init>",&DAT_001cf399,&DAT_00dbba10);
    uVar1 = FUN_004b8418(param_2,uVar2,local_40,uVar1);
    *param_1 = uVar1;
    param_1[1] = param_2;
    FUN_00ad843c(&local_60);
  }
  return;
}


// ===== 00d090e0  FUN_00d090e0 =====

void FUN_00d090e0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  FUN_00ada590(param_1,param_2,*param_3);
  return;
}


// ===== 00d090f0  FUN_00d090f0 =====

void FUN_00d090f0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  return;
}


// ===== 00d09108  FUN_00d09108 =====

void FUN_00d09108(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  if (*param_1 != 0) {
    uVar1 = FUN_00ad9fc4();
    uVar2 = FUN_00adaed8(uVar1,"org/webrtc/RtpTransceiver",&DAT_00dbba18);
    local_30 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = (undefined1 *)&local_50;
    FUN_00ad8450(&local_50,uVar1,uVar2,"dispose",&DAT_001ebb20,&DAT_00dbba20);
    FUN_004c2120(uVar1,*param_1,local_30);
    FUN_00ad843c(&local_50);
  }
  FUN_00ada650(param_1);
  return;
}


// ===== 00d091b4  FUN_00d091b4 =====

void FUN_00d091b4(undefined8 *param_1,long *param_2,long *param_3,code *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 local_198;
  long *local_190;
  undefined8 local_188;
  undefined1 auStack_180 [16];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [104];
  long local_f8;
  ulong local_f0;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long lStack_d0;
  long local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar8 = *param_3;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (lVar8 != 0) {
    FUN_00adbd70(&local_188,param_2,param_3);
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00adbdd4(&local_90,local_188,auStack_180);
    puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_c0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00adbdc0(&local_c0);
    uVar5 = FUN_00adc0b0(&local_90,&local_c0);
    if ((uVar5 & 1) == 0) {
      puVar1 = PTR_DAT_00d52108 + 0x10;
      do {
        puVar6 = (undefined8 *)FUN_00adc13c(&local_90);
        local_170 = 0;
        uStack_168 = 0;
        uStack_168 = FUN_00ada514(&local_170,0,*puVar6);
        local_198 = local_170;
        local_170 = 0;
        local_190 = param_2;
        FUN_00ada608(&local_170,uStack_168);
        (*param_4)(auStack_160,param_2,&local_198);
        plVar2 = (long *)param_1[1];
        if (plVar2 < (long *)param_1[2]) {
          if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          FUN_006684dc(plVar2,auStack_160);
          *plVar2 = (long)puVar1;
          plVar2[0xe] = 0;
          plVar2[0xd] = local_f8;
          if (1 < local_f0) {
            if ((local_f0 & 1) == 0) {
              plVar2[0xe] = local_f0;
              plVar7 = plVar2 + 0x14;
              plVar2[0x13] = local_c8;
              plVar2[0x12] = lStack_d0;
              plVar2[0x11] = local_d8;
              plVar2[0x10] = lStack_e0;
              plVar2[0xf] = local_e8;
              goto LAB_00d092d4;
            }
            FUN_007b7fb0(plVar2 + 0xe,&local_f0);
          }
          plVar7 = plVar2 + 0x14;
        }
        else {
          plVar7 = (long *)FUN_00d0940c(param_1,auStack_160);
        }
LAB_00d092d4:
        param_1[1] = plVar7;
        FUN_006689a8(auStack_160);
        FUN_00ada608(&local_198,local_190);
        FUN_00adbeec(&local_90);
        uVar5 = FUN_00adc0b0(&local_90,&local_c0);
      } while ((uVar5 & 1) == 0);
    }
    FUN_00adc078(&local_c0);
    FUN_00adc078(&local_90);
    FUN_00adbdb0(&local_188);
    cVar4 = (**(code **)(*param_2 + 0x720))(param_2);
    if (cVar4 != '\0') {
      FUN_00adbb80(auStack_160,param_2);
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../sdk/android/native_api/jni/java_types.h",0xb2,"!env->ExceptionCheck()",
                   &DAT_00252f37,auStack_160,"Error during JavaListToNativeVector");
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00d0940c  FUN_00d0940c =====

long * FUN_00d0940c(long *param_1,long param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  plVar6 = (long *)(param_1[1] - *param_1);
  uVar3 = ((long)plVar6 >> 5) * -0x3333333333333333 + 1;
  if (0x199999999999999 < uVar3) {
    FUN_00b88a40();
LAB_00d09580:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  lVar4 = param_1[2] - *param_1 >> 5;
  uVar5 = lVar4 * -0x6666666666666666;
  if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
    uVar5 = uVar3;
  }
  if (0xcccccccccccccb < (ulong)(lVar4 * -0x3333333333333333)) {
    uVar5 = 0x199999999999999;
  }
  if (uVar5 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    if (0x199999999999999 < uVar5) goto LAB_00d09580;
    pvVar1 = operator_new(uVar5 * 0xa0);
    plVar6 = (long *)((long)pvVar1 + (long)plVar6);
  }
  if (plVar6 != (long *)0x0) {
    FUN_006684dc(plVar6,param_2);
    *plVar6 = (long)(PTR_DAT_00d52108 + 0x10);
    lVar4 = *(long *)(param_2 + 0x68);
    plVar6[0xe] = 0;
    plVar6[0xd] = lVar4;
    uVar3 = *(ulong *)(param_2 + 0x70);
    if (1 < uVar3) {
      if ((uVar3 & 1) == 0) {
        plVar6[0xe] = uVar3;
        lVar7 = *(long *)(param_2 + 0x90);
        lVar4 = *(long *)(param_2 + 0x88);
        lVar9 = *(long *)(param_2 + 0x80);
        lVar8 = *(long *)(param_2 + 0x78);
        plVar6[0x13] = *(long *)(param_2 + 0x98);
        plVar6[0x12] = lVar7;
        plVar6[0x11] = lVar4;
        plVar6[0x10] = lVar9;
        plVar6[0xf] = lVar8;
      }
      else {
        FUN_007b7fb0();
      }
    }
    lVar4 = (long)plVar6 + (*param_1 - param_1[1]);
    FUN_00bdfa2c(param_1,*param_1,param_1[1],lVar4);
    pvVar2 = (void *)*param_1;
    *param_1 = lVar4;
    param_1[1] = (long)(plVar6 + 0x14);
    param_1[2] = (long)((long)pvVar1 + uVar5 * 0xa0);
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    return plVar6 + 0x14;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00d09584  FUN_00d09584 =====

void FUN_00d09584(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  *param_1 = &PTR_FUN_00d51150;
  param_1[1] = 0;
  FUN_00ada590(param_1 + 1,param_2,*param_3);
  param_1[2] = param_4;
  return;
}


// ===== 00d095c8  FUN_00d095c8 =====

void FUN_00d095c8(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[2];
  param_1[2] = 0;
  *param_1 = &PTR_FUN_00d51150;
  if (pvVar1 != (void *)0x0) {
    FUN_00afbb14((long)pvVar1 + 0x18);
    FUN_00afbb14(pvVar1);
    operator_delete(pvVar1);
  }
  FUN_00ada650(param_1 + 1);
  return;
}


// ===== 00d09624  FUN_00d09624 =====

void FUN_00d09624(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xd0962c);
  (*pcVar1)();
}


// ===== 00d0962c  FUN_00d0962c =====

void FUN_00d0962c(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  void *local_78;
  ulong local_70;
  byte bStack_61;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  uVar1 = FUN_00ad9fc4();
  thunk_FUN_00b00c84(&local_78,param_2);
  if ((bStack_61 & 0x80) == 0) {
    local_70 = (ulong)bStack_61;
  }
  if (local_70 != 0) {
    FUN_00d09de4(&local_88,uVar1,&local_78,*param_2);
    uVar2 = FUN_00adaed8(uVar1,"org/webrtc/SdpObserver",&DAT_00dbba30);
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = auStack_90;
    FUN_00ad8450(&local_60,uVar1,uVar2,"onCreateSuccess","(Lorg/webrtc/SessionDescription;)V",
                 &DAT_00dbba28);
    FUN_004c2120(uVar1,*(undefined8 *)(param_1 + 8),local_40,local_88);
    FUN_00ad843c(&local_60);
    FUN_00ada608(&local_88,local_80);
    if (param_2 != (undefined4 *)0x0) {
      FUN_00afbecc(param_2);
      operator_delete(param_2);
    }
    if ((char)bStack_61 < '\0') {
      operator_delete(local_78);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../sdk/android/src/jni/pc/sdp_observer.cc",0x2c,"desc->ToString(&sdp)",
               &DAT_002544f2,"got so far: ",&local_78);
}


// ===== 00d09778  FUN_00d09778 =====

void FUN_00d09778(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  uVar1 = FUN_00ad9fc4();
  uVar2 = FUN_005ecd5c(param_2);
  FUN_00adce64(&local_70,uVar1,uVar2);
  uVar2 = FUN_00adaed8(uVar1,"org/webrtc/SdpObserver",&DAT_00dbba30);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_70;
  FUN_00ad8450(&local_60,uVar1,uVar2,"onCreateFailure","(Ljava/lang/String;)V",&DAT_00dbba38);
  FUN_004c2120(uVar1,*(undefined8 *)(param_1 + 8),local_40,local_70);
  FUN_00ad843c(&local_60);
  FUN_00ada608(&local_70,local_68);
  return;
}


// ===== 00d0984c  FUN_00d0984c =====

void FUN_00d0984c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = &PTR_FUN_00d51190;
  param_1[1] = 0;
  FUN_00ada590(param_1 + 1,param_2,*param_3);
  return;
}


// ===== 00d09868  FUN_00d09868 =====

void FUN_00d09868(long param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  uVar1 = FUN_00ad9fc4();
  if (*param_2 == 0) {
    uVar2 = FUN_00adaed8(uVar1,"org/webrtc/SdpObserver",&DAT_00dbba30);
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = (undefined1 *)&local_70;
    FUN_00ad8450(&local_60,uVar1,uVar2,"onSetSuccess",&DAT_001ebb20,&DAT_00dbba40);
    FUN_004c2120(uVar1,*(undefined8 *)(param_1 + 8),local_40);
    FUN_00ad843c(&local_60);
  }
  else {
    uVar2 = FUN_005ecd5c(param_2);
    FUN_00adce64(&local_70,uVar1,uVar2);
    uVar2 = FUN_00adaed8(uVar1,"org/webrtc/SdpObserver",&DAT_00dbba30);
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = (undefined1 *)&local_70;
    FUN_00ad8450(&local_60,uVar1,uVar2,"onSetFailure","(Ljava/lang/String;)V",&DAT_00dbba48);
    FUN_004c2120(uVar1,*(undefined8 *)(param_1 + 8),local_40,local_70);
    FUN_00ad843c(&local_60);
    FUN_00ada608(&local_70,local_68);
  }
  return;
}


// ===== 00d099b4  FUN_00d099b4 =====

void FUN_00d099b4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = &PTR_FUN_00d511c8;
  param_1[1] = 0;
  FUN_00ada590(param_1 + 1,param_2,*param_3);
  return;
}


// ===== 00d099d0  FUN_00d099d0 =====

void FUN_00d099d0(long param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  uVar1 = FUN_00ad9fc4();
  if (*param_2 == 0) {
    uVar2 = FUN_00adaed8(uVar1,"org/webrtc/SdpObserver",&DAT_00dbba30);
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = (undefined1 *)&local_70;
    FUN_00ad8450(&local_60,uVar1,uVar2,"onSetSuccess",&DAT_001ebb20,&DAT_00dbba40);
    FUN_004c2120(uVar1,*(undefined8 *)(param_1 + 8),local_40);
    FUN_00ad843c(&local_60);
  }
  else {
    uVar2 = FUN_005ecd5c(param_2);
    FUN_00adce64(&local_70,uVar1,uVar2);
    uVar2 = FUN_00adaed8(uVar1,"org/webrtc/SdpObserver",&DAT_00dbba30);
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = (undefined1 *)&local_70;
    FUN_00ad8450(&local_60,uVar1,uVar2,"onSetFailure","(Ljava/lang/String;)V",&DAT_00dbba48);
    FUN_004c2120(uVar1,*(undefined8 *)(param_1 + 8),local_40,local_70);
    FUN_00ad843c(&local_60);
    FUN_00ada608(&local_70,local_68);
  }
  return;
}


// ===== 00d09b1c  FUN_00d09b1c =====

void FUN_00d09b1c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xd09b24);
  (*pcVar1)();
}


// ===== 00d09b24  FUN_00d09b24 =====

void FUN_00d09b24(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xd09b2c);
  (*pcVar1)();
}


// ===== 00d09b2c  FUN_00d09b2c =====

undefined8 FUN_00d09b2c(undefined8 param_1,undefined8 *param_2)

{
  long *****ppppplVar1;
  undefined1 *puVar2;
  undefined8 *****pppppuVar3;
  undefined8 uVar4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 ****local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  long ****local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = (long ****)&DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  uVar4 = FUN_00adaed8(param_1,"org/webrtc/SessionDescription",&DAT_00dbba58);
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = (undefined1 *)&local_c0;
  FUN_00ad8450(&local_70,param_1,uVar4,"getTypeInCanonicalForm","()Ljava/lang/String;",&DAT_00dbba50
              );
  local_b0 = (undefined8 ****)FUN_004a41b4(param_1,*param_2,local_50);
  puStack_a8 = (undefined1 *)param_1;
  FUN_00ad843c(&local_70);
  FUN_00adc4e0(&local_90,param_1,&local_b0);
  FUN_00ada608(&local_b0,puStack_a8);
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = (undefined8 ****)&DAT_aaaaaaaaaaaaaaaa;
  uVar4 = FUN_00adaed8(param_1,"org/webrtc/SessionDescription",&DAT_00dbba58);
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = (undefined1 *)&local_c0;
  FUN_00ad8450(&local_70,param_1,uVar4,"getDescription","()Ljava/lang/String;",&DAT_00dbba60);
  local_c0 = FUN_004a41b4(param_1,*param_2,local_50);
  local_b8 = param_1;
  FUN_00ad843c(&local_70);
  FUN_00adc4e0(&local_b0,param_1,&local_c0);
  FUN_00ada608(&local_c0,local_b8);
  ppppplVar1 = (long *****)local_90;
  puVar2 = puStack_88;
  if (-1 < (long)local_80) {
    ppppplVar1 = &local_90;
    puVar2 = (undefined1 *)((ulong)local_80 >> 0x38);
  }
  if (puVar2 == (undefined1 *)0x8) {
    if (*ppppplVar1 == (long ****)0x726577736e617270) {
      uVar4 = 1;
    }
    else {
      if (*ppppplVar1 != (long ****)0x6b6361626c6c6f72) goto LAB_00d09dc4;
      uVar4 = 3;
    }
  }
  else if (puVar2 == (undefined1 *)0x6) {
    if (*(int *)ppppplVar1 != 0x77736e61 || *(short *)((long)ppppplVar1 + 4) != 0x7265)
    goto LAB_00d09dc4;
    uVar4 = 2;
  }
  else {
    if ((puVar2 != (undefined1 *)0x5) ||
       (*(int *)ppppplVar1 != 0x6566666f || *(char *)((long)ppppplVar1 + 4) != 'r')) {
LAB_00d09dc4:
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../sdk/android/src/jni/pc/session_description.cc",0x26,"false",&DAT_001f5fa0)
      ;
    }
    uVar4 = 0;
  }
  puVar2 = puStack_a8;
  pppppuVar3 = (undefined8 *****)local_b0;
  if (-1 < (long)local_a0) {
    puVar2 = (undefined1 *)((ulong)local_a0 >> 0x38);
    pppppuVar3 = &local_b0;
  }
  uVar4 = FUN_00afbc38(uVar4,pppppuVar3,puVar2);
  if ((long)local_a0 < 0) {
    operator_delete(local_b0);
  }
  if ((long)local_80 < 0) {
    operator_delete(local_90);
  }
  return uVar4;
}


// ===== 00d09de4  FUN_00d09de4 =====

void FUN_00d09de4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  uVar1 = FUN_00afbbec(param_4);
  FUN_00adce64(&local_80,param_2,uVar1);
  uVar1 = FUN_00adaed8(param_2,"org/webrtc/SessionDescription$Type",&DAT_00dbba78);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_90;
  FUN_00ad8360(&local_60,param_2,uVar1,"fromCanonicalForm",
               "(Ljava/lang/String;)Lorg/webrtc/SessionDescription$Type;",&DAT_00dbba70);
  uVar1 = FUN_004aecec(param_2,uVar1,local_40,local_80);
  local_70 = uVar1;
  uStack_68 = param_2;
  FUN_00ad843c(&local_60);
  FUN_00adcf00(&local_90,param_2,param_3);
  uVar2 = FUN_00adaed8(param_2,"org/webrtc/SessionDescription",&DAT_00dbba58);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_90;
  FUN_00ad8450(&local_60,param_2,uVar2,"<init>",
               "(Lorg/webrtc/SessionDescription$Type;Ljava/lang/String;)V",&DAT_00dbba68);
  uVar1 = FUN_004b8418(param_2,uVar2,local_40,uVar1,local_90);
  *param_1 = uVar1;
  param_1[1] = param_2;
  FUN_00ad843c(&local_60);
  FUN_00ada608(&local_90,local_88);
  FUN_00ada608(&local_70,param_2);
  FUN_00ada608(&local_80,local_78);
  return;
}


// ===== 00d09f64  FUN_00d09f64 =====

void FUN_00d09f64(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = &PTR_FUN_00d51200;
  param_1[1] = 0;
  FUN_00ada590(param_1 + 1,param_2,*param_3);
  return;
}


// ===== 00d09f80  FUN_00d09f80 =====

void FUN_00d09f80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d51200;
  FUN_00ada650(param_1 + 1);
  return;
}


// ===== 00d09f94  FUN_00d09f94 =====

void FUN_00d09f94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d51200;
  FUN_00ada650(param_1 + 1);
  operator_delete(param_1);
  return;
}


// ===== 00d09fd0  FUN_00d09fd0 =====

bool FUN_00d09fd0(long param_1,long *param_2)

{
  void *pvVar1;
  char cVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  long *plStack_80;
  ulong local_78 [2];
  void *local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  plVar3 = (long *)thunk_FUN_00ad9fc4();
  local_78[0] = 0;
  local_78[1] = 0;
  local_68 = (void *)0x0;
  (**(code **)(*param_2 + 0x20))(param_2,local_78);
  uVar4 = (**(code **)(*plVar3 + 0x580))(plVar3,local_78[0] & 0xffffffff);
  local_88 = uVar4;
  plStack_80 = plVar3;
  (**(code **)(*plVar3 + 0x680))(plVar3,uVar4,0,local_78[0] & 0xffffffff,local_68);
  uVar5 = FUN_00adaed8(plVar3,"org/webrtc/SSLCertificateVerifier",&DAT_00dbba88);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = auStack_90;
  FUN_00ad8450(&local_60,plVar3,uVar5,"verify","([B)Z",&DAT_00dbba80);
  cVar2 = FUN_004c17b4(plVar3,*(undefined8 *)(param_1 + 8),local_40,uVar4);
  FUN_00ad843c(&local_60);
  FUN_00ada608(&local_88,plVar3);
  pvVar1 = local_68;
  local_68 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  return cVar2 != '\0';
}


// ===== 00d0a100  FUN_00d0a100 =====

undefined8 FUN_00d0a100(long *param_1,long *param_2)

{
  undefined8 uVar1;
  
  if ((undefined8 *)param_2[1] != (undefined8 *)*param_2) {
                    /* WARNING: Could not recover jumptable at 0x00d0a11c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x18))(param_1,*(undefined8 *)*param_2);
    return uVar1;
  }
  return 0;
}


// ===== 00d0a128  FUN_00d0a128 =====

void FUN_00d0a128(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = &PTR_FUN_00d51230;
  param_1[1] = 0;
  FUN_00ada590(param_1 + 1,param_2,*param_3);
  return;
}


// ===== 00d0a144  FUN_00d0a144 =====

void FUN_00d0a144(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d51230;
  FUN_00ada650(param_1 + 1);
  return;
}


// ===== 00d0a158  FUN_00d0a158 =====

void FUN_00d0a158(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xd0a160);
  (*pcVar1)();
}


// ===== 00d0a160  FUN_00d0a160 =====

/* WARNING: Removing unreachable block (ram,0x00d0a480) */

void FUN_00d0a160(long param_1,long *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  void *pvVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined1 auStack_190 [8];
  long local_188;
  undefined8 local_180;
  undefined8 *local_178;
  int local_16c;
  undefined8 local_168;
  long *plStack_160;
  undefined8 local_158;
  long *plStack_150;
  undefined8 local_148;
  undefined8 local_140;
  void *local_138 [2];
  char cStack_121;
  undefined8 local_120;
  undefined8 local_118;
  long *local_110;
  long *local_108;
  long *local_100;
  undefined8 local_f8;
  long *local_f0;
  undefined8 local_e8;
  long *local_e0;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  
  plVar3 = (long *)FUN_00ad9fc4();
  uVar4 = FUN_00adaed8(plVar3,"org/webrtc/StatsReport",&DAT_00dbba90);
  local_168 = (**(code **)(*plVar3 + 0x560))(plVar3,(ulong)(param_2[1] - *param_2) >> 3,uVar4,0);
  puVar15 = (undefined8 *)*param_2;
  local_178 = (undefined8 *)param_2[1];
  plStack_160 = plVar3;
  if (puVar15 != local_178) {
    iVar16 = 0;
    local_188 = param_1;
    local_180 = local_168;
    do {
      puVar8 = (undefined8 *)*puVar15;
      (**(code **)(*(long *)*puVar8 + 0x20))(local_138);
      FUN_00adcf00(&local_120,plVar3,local_138);
      uVar4 = FUN_00c087bc(puVar8);
      FUN_00adce64(&local_148,plVar3,uVar4);
      uVar4 = puVar8[1];
      local_108 = (long *)0x0;
      local_100 = (long *)0x0;
      puVar11 = (undefined8 *)puVar8[2];
      local_110 = (long *)0x0;
      while (puVar11 != puVar8 + 3) {
        if (local_108 < local_100) {
          if (local_108 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          lVar7 = puVar11[5];
          *local_108 = lVar7;
          if (lVar7 != 0) {
            *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
          }
          local_108 = local_108 + 1;
        }
        else {
          local_108 = (long *)FUN_00d0a6b0(&local_110,puVar11 + 5);
        }
        puVar1 = (undefined8 *)puVar11[1];
        puVar12 = puVar11;
        if ((undefined8 *)puVar11[1] == (undefined8 *)0x0) {
          do {
            puVar11 = (undefined8 *)puVar12[2];
            bVar2 = puVar12 != (undefined8 *)*puVar11;
            puVar12 = puVar11;
          } while (bVar2);
        }
        else {
          do {
            puVar11 = puVar1;
            puVar1 = (undefined8 *)*puVar11;
          } while ((undefined8 *)*puVar11 != (undefined8 *)0x0);
        }
      }
      local_16c = iVar16;
      uVar5 = FUN_00adaed8(plVar3,"org/webrtc/StatsReport$Value",&DAT_00dbbab0);
      uVar5 = (**(code **)(*plVar3 + 0x560))
                        (plVar3,(ulong)((long)local_108 - (long)local_110) >> 3,uVar5,0);
      plVar13 = local_108;
      local_158 = uVar5;
      plStack_150 = plVar3;
      if (local_110 != local_108) {
        iVar16 = 0;
        plVar14 = local_110;
        do {
          uVar6 = FUN_00c08280(*plVar14);
          FUN_00adce64(&local_c0,plVar3,uVar6);
          FUN_00c082ac(&local_e8,*plVar14);
          FUN_00adcf00(&local_d0,plVar3,&local_e8);
          uVar6 = FUN_00adaed8(plVar3,"org/webrtc/StatsReport$Value",&DAT_00dbbab0);
          local_90 = &DAT_aaaaaaaaaaaaaaaa;
          local_b0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_a8 = auStack_190;
          FUN_00ad8450(&local_b0,plVar3,uVar6,"<init>","(Ljava/lang/String;Ljava/lang/String;)V",
                       &DAT_00dbbab8);
          local_f8 = FUN_004b8418(plVar3,uVar6,local_90,local_c0,local_d0);
          local_f0 = plVar3;
          FUN_00ad843c(&local_b0);
          FUN_00ada608(&local_d0,local_c8);
          FUN_00ada608(&local_c0,local_b8);
          (**(code **)(*plVar3 + 0x570))(plVar3,uVar5,iVar16,local_f8);
          FUN_00ada608(&local_f8,local_f0);
          plVar14 = plVar14 + 1;
          iVar16 = iVar16 + 1;
        } while (plVar14 != plVar13);
      }
      plVar14 = local_110;
      plVar10 = plVar3;
      plVar13 = local_108;
      if (local_110 != (long *)0x0) {
        while (plVar14 != plVar13) {
          plVar13 = plVar13 + -1;
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          pvVar9 = (void *)*plVar13;
          if ((pvVar9 != (void *)0x0) &&
             (iVar16 = *(int *)((long)pvVar9 + 8) + -1, *(int *)((long)pvVar9 + 8) = iVar16,
             iVar16 == 0)) {
            FUN_00c08038(pvVar9);
            operator_delete(pvVar9);
          }
        }
        local_108 = plVar14;
        operator_delete(local_110);
        plVar10 = plStack_150;
        uVar5 = local_158;
      }
      uVar6 = FUN_00adaed8(plVar3,"org/webrtc/StatsReport",&DAT_00dbba90);
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      local_b0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a8 = auStack_190;
      FUN_00ad8450(&local_b0,plVar3,uVar6,"<init>",
                   "(Ljava/lang/String;Ljava/lang/String;D[Lorg/webrtc/StatsReport$Value;)V",
                   &DAT_00dbbaa8);
      local_e8 = FUN_004b8418(uVar4,plVar3,uVar6,local_90,local_120,local_148,uVar5);
      local_e0 = plVar3;
      FUN_00ad843c(&local_b0);
      FUN_00ada608(&local_158,plVar10);
      FUN_00ada608(&local_148,local_140);
      FUN_00ada608(&local_120,local_118);
      iVar16 = local_16c;
      if (cStack_121 < '\0') {
        operator_delete(local_138[0]);
      }
      (**(code **)(*plVar3 + 0x570))(plVar3,local_180,iVar16,local_e8);
      FUN_00ada608(&local_e8,local_e0);
      iVar16 = iVar16 + 1;
      puVar15 = puVar15 + 1;
      param_1 = local_188;
    } while (puVar15 != local_178);
  }
  plVar13 = plStack_160;
  uVar4 = local_168;
  uVar5 = FUN_00adaed8(plVar3,"org/webrtc/StatsObserver",&DAT_00dbbaa0);
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = auStack_190;
  FUN_00ad8450(&local_b0,plVar3,uVar5,"onComplete","([Lorg/webrtc/StatsReport;)V",&DAT_00dbba98);
  FUN_004c2120(plVar3,*(undefined8 *)(param_1 + 8),local_90,uVar4);
  FUN_00ad843c(&local_b0);
  FUN_00ada608(&local_168,plVar13);
  return;
}


// ===== 00d0a6b0  FUN_00d0a6b0 =====

long FUN_00d0a6b0(long *param_1,long *param_2)

{
  ulong uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  void *pvVar6;
  long lVar7;
  long *plVar8;
  void *local_50;
  long *local_48;
  long *local_40;
  void *local_38;
  
  lVar7 = param_1[1] - *param_1;
  uVar1 = (lVar7 >> 3) + 1;
  if (uVar1 >> 0x3d != 0) {
    FUN_00d0aa30();
LAB_00d0a830:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  local_50 = (void *)0x0;
  uVar4 = param_1[2] - *param_1;
  uVar5 = (long)uVar4 >> 2;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 != 0) {
    if (uVar5 >> 0x3d != 0) goto LAB_00d0a830;
    local_50 = operator_new(uVar5 << 3);
  }
  local_38 = (void *)((long)local_50 + uVar5 * 8);
  local_48 = (long *)((long)local_50 + lVar7);
  if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  lVar7 = *param_2;
  *local_48 = lVar7;
  if (lVar7 != 0) {
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
  }
  local_40 = local_48 + 1;
  FUN_00d0a834(param_1,&local_50);
  plVar3 = local_48;
  lVar7 = param_1[1];
  plVar8 = local_40;
  while( true ) {
    if (plVar3 == plVar8) {
      if (local_50 != (void *)0x0) {
        local_40 = plVar8;
        operator_delete(local_50);
      }
      return lVar7;
    }
    plVar8 = plVar8 + -1;
    if (plVar8 == (long *)0x0) break;
    pvVar6 = (void *)*plVar8;
    if ((pvVar6 != (void *)0x0) &&
       (iVar2 = *(int *)((long)pvVar6 + 8) + -1, *(int *)((long)pvVar6 + 8) = iVar2, iVar2 == 0)) {
      FUN_00c08038(pvVar6);
      operator_delete(pvVar6);
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00d0a834  FUN_00d0a834 =====

void FUN_00d0a834(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  void *pvVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  
  puVar18 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  lVar6 = param_2[1];
  lVar5 = (long)puVar3 - (long)puVar18;
  puVar19 = (undefined8 *)(lVar6 - ((long)puVar3 - (long)puVar18));
  if (lVar5 != 0) {
    uVar15 = lVar5 - 8U >> 3;
    uVar16 = (ulong)(lVar5 - lVar6) >> 3;
    uVar1 = uVar15;
    if (uVar16 <= uVar15) {
      uVar1 = uVar16;
    }
    puVar9 = puVar18;
    puVar13 = puVar19;
    if (0x31 < uVar1) {
      uVar2 = uVar15;
      if (uVar16 <= uVar15) {
        uVar2 = uVar16;
      }
      if ((((((int)puVar3 - (int)puVar18 | -(int)lVar6) & 7U) == 0) && (puVar18 <= puVar18 + uVar2))
         && (puVar19 <= puVar19 + uVar2)) {
        if (uVar16 <= uVar15) {
          uVar15 = uVar16;
        }
        if (((undefined8 *)(lVar6 + ((uVar15 * 8 + 8) - lVar5)) <= puVar18) ||
           (puVar18 + uVar15 + 1 <= puVar19)) {
          uVar15 = uVar1 + 1 & 3;
          uVar16 = 4;
          if (uVar15 != 0) {
            uVar16 = uVar15;
          }
          lVar12 = (uVar1 + 1) - uVar16;
          puVar9 = puVar18 + lVar12;
          puVar13 = puVar19 + lVar12;
          puVar8 = (undefined8 *)(lVar6 + (lVar5 >> 3) * -8 + 0x10);
          puVar14 = puVar18 + 2;
          do {
            uVar10 = puVar14[-1];
            uVar7 = puVar14[-2];
            uVar20 = puVar14[1];
            uVar11 = *puVar14;
            lVar12 = lVar12 + -4;
            puVar14[-1] = 0;
            puVar14[-2] = 0;
            puVar14[1] = 0;
            *puVar14 = 0;
            puVar8[-1] = uVar10;
            puVar8[-2] = uVar7;
            puVar8[1] = uVar20;
            *puVar8 = uVar11;
            puVar8 = puVar8 + 4;
            puVar14 = puVar14 + 4;
          } while (lVar12 != 0);
        }
      }
    }
    do {
      if (puVar13 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar7 = *puVar9;
      puVar8 = puVar9 + 1;
      *puVar9 = 0;
      *puVar13 = uVar7;
      puVar9 = puVar8;
      puVar13 = puVar13 + 1;
    } while (puVar8 != puVar3);
    do {
      if (puVar18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar17 = (void *)*puVar18;
      if ((pvVar17 != (void *)0x0) &&
         (iVar4 = *(int *)((long)pvVar17 + 8) + -1, *(int *)((long)pvVar17 + 8) = iVar4, iVar4 == 0)
         ) {
        FUN_00c08038(pvVar17);
        operator_delete(pvVar17);
      }
      puVar18 = puVar18 + 1;
    } while (puVar18 != puVar3);
  }
  param_2[1] = puVar19;
  uVar7 = *param_1;
  uVar11 = param_1[2];
  param_1[1] = uVar7;
  uVar20 = param_2[1];
  uVar10 = param_2[3];
  param_1[1] = param_2[2];
  *param_1 = uVar20;
  param_1[2] = uVar10;
  param_2[2] = uVar7;
  param_2[3] = uVar11;
  *param_2 = uVar7;
  param_2[1] = uVar7;
  return;
}


// ===== 00d0aa30  FUN_00d0aa30 =====

void FUN_00d0aa30(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00d0aa48  Java_org_webrtc_TurnCustomizer_nativeFreeTurnCustomizer =====

void Java_org_webrtc_TurnCustomizer_nativeFreeTurnCustomizer
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  if (param_3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d0aa5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x18))(param_3);
    return;
  }
  return;
}


// ===== 00d0aa64  FUN_00d0aa64 =====

undefined8 FUN_00d0aa64(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  uVar1 = FUN_00adc1a8();
  if ((uVar1 & 1) == 0) {
    uVar2 = FUN_00adaed8(param_1,"org/webrtc/TurnCustomizer",&DAT_00dbbac8);
    local_30 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = (undefined1 *)&local_50;
    FUN_00ad8450(&local_50,param_1,uVar2,"getNativeTurnCustomizer",&DAT_001a78d2,&DAT_00dbbac0);
    uVar2 = FUN_00ad87a4(param_1,*param_2,local_30);
    FUN_00ad843c(&local_50);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


// ===== 00d0ab18  FUN_00d0ab18 =====

void FUN_00d0ab18(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = &PTR_FUN_00d51268;
  param_1[1] = 0;
  param_1[3] = 0;
  FUN_00ada590(param_1 + 3,param_2,*param_3);
  return;
}


// ===== 00d0ab34  FUN_00d0ab34 =====

void FUN_00d0ab34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d51268;
  FUN_00ada650(param_1 + 3);
  return;
}


// ===== 00d0ab48  FUN_00d0ab48 =====

void FUN_00d0ab48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d51268;
  FUN_00ada650(param_1 + 3);
  operator_delete(param_1);
  return;
}


// ===== 00d0ab84  FUN_00d0ab84 =====

void FUN_00d0ab84(void)

{
  return;
}


// ===== 00d0ab8c  FUN_00d0ab8c =====

void FUN_00d0ab8c(long *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00d0abb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1,puVar2,uVar1,param_3,param_4);
  return;
}


// ===== 00d0abbc  FUN_00d0abbc =====

void FUN_00d0abbc(long param_1,undefined8 ***param_2,ulong param_3,undefined4 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 ***__dest;
  undefined8 uVar4;
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 **local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  
  uVar3 = FUN_00ad9fc4();
  if (0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_3 < 0x17) {
    local_98 = CONCAT17((char)param_3,(undefined7)local_98);
    __dest = &local_a8;
  }
  else {
    uVar1 = (param_3 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 ***)operator_new(uVar2);
    local_98 = uVar2 | 0x8000000000000000;
    local_a8 = __dest;
    uStack_a0 = param_3;
  }
  if (__dest <= (undefined8 ***)((long)__dest + param_3)) {
    if ((__dest <= param_2) && (param_2 < (undefined8 ***)((long)__dest + param_3))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(__dest,param_2,param_3);
    *(undefined1 *)((long)__dest + param_3) = 0;
    FUN_00adcf00(&local_90,uVar3,&local_a8);
    FUN_00adcd04(&local_b8,uVar3,param_4);
    FUN_00adce64(&local_c8,uVar3,param_5);
    uVar4 = FUN_00adaed8(uVar3,"org/webrtc/JNILogging",&DAT_00dbbad8);
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = auStack_d0;
    FUN_00ad8450(&local_80,uVar3,uVar4,"logToInjectable",
                 "(Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;)V",&DAT_00dbbad0);
    FUN_004c2120(uVar3,*(undefined8 *)(param_1 + 0x18),local_60,local_90,local_b8,local_c8);
    FUN_00ad843c(&local_80);
    FUN_00ada608(&local_c8,local_c0);
    FUN_00ada608(&local_b8,local_b0);
    FUN_00ada608(&local_90,local_88);
    if ((long)local_98 < 0) {
      operator_delete(local_a8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 00d0ada8  FUN_00d0ada8 =====

undefined8 FUN_00d0ada8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *__s2;
  size_t sVar1;
  undefined8 *__s1;
  ulong uVar2;
  undefined8 *puVar3;
  byte bVar4;
  size_t __n;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar6 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  if (puVar6 != puVar3) {
    __n = param_2[1];
    __s2 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      __n = (ulong)*(byte *)((long)param_2 + 0x17);
      __s2 = param_2;
    }
    do {
      bVar4 = *(byte *)((long)puVar6 + 0x17);
      sVar1 = puVar6[1];
      if (-1 < (char)bVar4) {
        sVar1 = (ulong)bVar4;
      }
      if (sVar1 == __n) {
        __s1 = (undefined8 *)*puVar6;
        if (-1 < (char)bVar4) {
          __s1 = puVar6;
        }
        iVar5 = memcmp(__s1,__s2,__n);
        if (iVar5 == 0) {
          puVar3 = puVar6 + 3;
          if (puVar3 == param_3) {
            return 1;
          }
          bVar4 = *(byte *)((long)puVar6 + 0x2f);
          if (-1 < *(char *)((long)param_3 + 0x17)) {
            if (-1 < (char)bVar4) {
              uVar8 = puVar6[4];
              uVar7 = *puVar3;
              param_3[2] = puVar6[5];
              param_3[1] = uVar8;
              *param_3 = uVar7;
              return 1;
            }
            FUN_00547fc0(param_3,puVar6[3],puVar6[4]);
            return 1;
          }
          uVar2 = puVar6[4];
          puVar6 = (undefined8 *)puVar6[3];
          if (-1 < (char)bVar4) {
            uVar2 = (ulong)bVar4;
            puVar6 = puVar3;
          }
          FUN_00547f08(param_3,puVar6,uVar2);
          return 1;
        }
      }
      puVar6 = puVar6 + 6;
    } while (puVar6 != puVar3);
  }
  return 0;
}


// ===== 00d0aec0  FUN_00d0aec0 =====

void FUN_00d0aec0(long param_1,long param_2)

{
  undefined8 ******ppppppuVar1;
  ulong uVar2;
  undefined4 local_60;
  undefined4 uStack_5c;
  char cStack_49;
  undefined8 *****local_48;
  ulong uStack_40;
  ulong local_38;
  
  if (param_1 != 0) {
    FUN_005d3510(&local_60,"googDscp");
    local_48 = (undefined8 ******)0x0;
    uStack_40 = 0;
    local_38 = 0;
    uVar2 = FUN_00d0ada8(param_1,&local_60,&local_48);
    if (((uVar2 & 1) != 0) ||
       (uVar2 = FUN_00d0ada8(param_1 + 0x18,&local_60,&local_48), (uVar2 & 1) != 0)) {
      uVar2 = uStack_40;
      ppppppuVar1 = (undefined8 ******)local_48;
      if (-1 < (long)local_38) {
        uVar2 = local_38 >> 0x38;
        ppppppuVar1 = &local_48;
      }
      FUN_006253e8(ppppppuVar1,uVar2,param_2 + 0x7c);
    }
    if ((long)local_38 < 0) {
      operator_delete(local_48);
    }
    if (cStack_49 < '\0') {
      operator_delete((void *)CONCAT44(uStack_5c,local_60));
    }
    FUN_005d3510(&local_60,"googCpuOveruseDetection");
    local_48 = (undefined8 ******)0x0;
    uStack_40 = 0;
    local_38 = 0;
    uVar2 = FUN_00d0ada8(param_1,&local_60,&local_48);
    if (((uVar2 & 1) != 0) ||
       (uVar2 = FUN_00d0ada8(param_1 + 0x18,&local_60,&local_48), (uVar2 & 1) != 0)) {
      uVar2 = uStack_40;
      ppppppuVar1 = (undefined8 ******)local_48;
      if (-1 < (long)local_38) {
        uVar2 = local_38 >> 0x38;
        ppppppuVar1 = &local_48;
      }
      FUN_006253e8(ppppppuVar1,uVar2,param_2 + 0x80);
    }
    if ((long)local_38 < 0) {
      operator_delete(local_48);
    }
    if (cStack_49 < '\0') {
      operator_delete((void *)CONCAT44(uStack_5c,local_60));
    }
    FUN_005d3510(&local_60,"googSuspendBelowMinBitrate");
    local_48 = (undefined8 ******)0x0;
    uStack_40 = 0;
    local_38 = 0;
    uVar2 = FUN_00d0ada8(param_1,&local_60,&local_48);
    if (((uVar2 & 1) != 0) ||
       (uVar2 = FUN_00d0ada8(param_1 + 0x18,&local_60,&local_48), (uVar2 & 1) != 0)) {
      uVar2 = uStack_40;
      ppppppuVar1 = (undefined8 ******)local_48;
      if (-1 < (long)local_38) {
        uVar2 = local_38 >> 0x38;
        ppppppuVar1 = &local_48;
      }
      FUN_006253e8(ppppppuVar1,uVar2,param_2 + 0x81);
    }
    if ((long)local_38 < 0) {
      operator_delete(local_48);
    }
    if (cStack_49 < '\0') {
      operator_delete((void *)CONCAT44(uStack_5c,local_60));
    }
    FUN_005d3510(&local_48,"googScreencastMinBitrate");
    local_60 = 0xaaaaaaaa;
    uVar2 = FUN_00d0b9e4(param_1,&local_48,&local_60,0);
    if ((uVar2 & 1) != 0) {
      *(undefined1 *)(param_2 + 0x54) = 1;
      *(undefined4 *)(param_2 + 0x50) = local_60;
    }
    if ((long)local_38 < 0) {
      operator_delete(local_48);
    }
  }
  return;
}


// ===== 00d0b150  FUN_00d0b150 =====

void FUN_00d0b150(long param_1,long param_2)

{
  ulong uVar1;
  void *local_50 [2];
  char cStack_39;
  void *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if (param_1 != 0) {
    FUN_005d3510(&local_38,"googEchoCancellation");
    FUN_00d0b37c(param_1,&local_38,param_2);
    if (local_28 < 0) {
      operator_delete(local_38);
    }
    FUN_005d3510(&local_38,"googAutoGainControl");
    FUN_00d0b37c(param_1,&local_38,param_2 + 2);
    if (local_28 < 0) {
      operator_delete(local_38);
    }
    FUN_005d3510(&local_38,"googNoiseSuppression");
    FUN_00d0b37c(param_1,&local_38,param_2 + 4);
    if (local_28 < 0) {
      operator_delete(local_38);
    }
    FUN_005d3510(&local_38,"googHighpassFilter");
    FUN_00d0b37c(param_1,&local_38,param_2 + 6);
    if (local_28 < 0) {
      operator_delete(local_38);
    }
    FUN_005d3510(&local_38,"googAudioMirroring");
    FUN_00d0b37c(param_1,&local_38,param_2 + 8);
    if (local_28._7_1_ < '\0') {
      operator_delete(local_38);
    }
    FUN_005d3510(local_50,"googAudioNetworkAdaptorConfig");
    local_38 = (void *)0x0;
    uStack_30 = 0;
    local_28 = 0;
    uVar1 = FUN_00d0ada8(param_1,local_50,&local_38);
    if (((uVar1 & 1) != 0) ||
       (uVar1 = FUN_00d0ada8(param_1 + 0x18,local_50,&local_38), (uVar1 & 1) != 0)) {
      FUN_00661bd4(param_2 + 0x28,&local_38);
    }
    if (local_28 < 0) {
      operator_delete(local_38);
    }
    if (cStack_39 < '\0') {
      operator_delete(local_50[0]);
    }
    if (*(char *)(param_2 + 0x40) == '\x01') {
      *(undefined2 *)(param_2 + 0x20) = 0x101;
    }
    FUN_005d3510(&local_38,"InitAudioRecordingOnSend");
    FUN_00d0b37c(param_1,&local_38,param_2 + 0x48);
    if (local_28 < 0) {
      operator_delete(local_38);
    }
  }
  return;
}


// ===== 00d0b37c  FUN_00d0b37c =====

void FUN_00d0b37c(long param_1,undefined8 param_2,ushort *param_3)

{
  undefined8 *****pppppuVar1;
  ulong uVar2;
  byte local_4c [4];
  undefined8 ****local_48;
  ulong uStack_40;
  ulong local_38;
  
  local_4c[0] = 0xaa;
  local_48 = (undefined8 *****)0x0;
  uStack_40 = 0;
  local_38 = 0;
  uVar2 = FUN_00d0ada8(param_1,param_2,&local_48);
  if (((uVar2 & 1) == 0) &&
     (uVar2 = FUN_00d0ada8(param_1 + 0x18,param_2,&local_48), (uVar2 & 1) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = uStack_40;
    pppppuVar1 = (undefined8 *****)local_48;
    if (-1 < (long)local_38) {
      uVar2 = local_38 >> 0x38;
      pppppuVar1 = &local_48;
    }
    uVar2 = FUN_006253e8(pppppuVar1,uVar2,local_4c);
    uVar2 = uVar2 & 0xffffffff;
  }
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  if ((uVar2 & 1) != 0) {
    *param_3 = local_4c[0] | 0x100;
  }
  return;
}


// ===== 00d0b448  FUN_00d0b448 =====

/* WARNING: Removing unreachable block (ram,0x00d0b9b4) */
/* WARNING: Removing unreachable block (ram,0x00d0b888) */
/* WARNING: Removing unreachable block (ram,0x00d0b8c4) */
/* WARNING: Removing unreachable block (ram,0x00d0b900) */
/* WARNING: Removing unreachable block (ram,0x00d0b93c) */
/* WARNING: Removing unreachable block (ram,0x00d0b978) */
/* WARNING: Removing unreachable block (ram,0x00d0b864) */
/* WARNING: Removing unreachable block (ram,0x00d0b878) */
/* WARNING: Type propagation algorithm not settling */

bool FUN_00d0b448(long *param_1,uint *param_2)

{
  undefined8 *******pppppppuVar1;
  ulong uVar2;
  long lVar3;
  uint local_70;
  undefined4 uStack_6c;
  char cStack_59;
  long local_58;
  byte local_4c [4];
  undefined8 *******local_48;
  ulong uStack_40;
  ulong local_38;
  
  if (param_1 == (long *)0x0) {
    return true;
  }
  local_4c[0] = 0;
  local_58 = 0;
  FUN_005d3510(&local_70,"OfferToReceiveAudio");
  local_48 = (undefined8 *******)0x0;
  uStack_40 = 0;
  local_38 = 0;
  uVar2 = FUN_00d0ada8(param_1,&local_70,&local_48);
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_00d0ada8(param_1 + 3,&local_70,&local_48);
    lVar3 = 0;
    if ((uVar2 & 1) != 0) goto LAB_00d0b4d0;
    uVar2 = 0;
  }
  else {
    lVar3 = 1;
    local_58 = 1;
LAB_00d0b4d0:
    uVar2 = uStack_40;
    pppppppuVar1 = local_48;
    if (-1 < (long)local_38) {
      uVar2 = local_38 >> 0x38;
      pppppppuVar1 = &local_48;
    }
    uVar2 = FUN_006253e8(pppppppuVar1,uVar2,local_4c);
    uVar2 = uVar2 & 0xffffffff;
  }
  if (cStack_59 < '\0') {
    operator_delete((void *)CONCAT44(uStack_6c,local_70));
  }
  if ((uVar2 & 1) != 0) {
    param_2[1] = (uint)local_4c[0];
  }
  FUN_005d3510(&local_70,"OfferToReceiveVideo");
  local_48 = (undefined8 *******)0x0;
  uStack_40 = 0;
  local_38 = 0;
  uVar2 = FUN_00d0ada8(param_1,&local_70,&local_48);
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_00d0ada8(param_1 + 3,&local_70,&local_48);
    if ((uVar2 & 1) != 0) goto LAB_00d0b560;
    uVar2 = 0;
  }
  else {
    lVar3 = lVar3 + 1;
    local_58 = lVar3;
LAB_00d0b560:
    uVar2 = uStack_40;
    pppppppuVar1 = local_48;
    if (-1 < (long)local_38) {
      uVar2 = local_38 >> 0x38;
      pppppppuVar1 = &local_48;
    }
    uVar2 = FUN_006253e8(pppppppuVar1,uVar2,local_4c);
    uVar2 = uVar2 & 0xffffffff;
  }
  if (cStack_59 < '\0') {
    operator_delete((void *)CONCAT44(uStack_6c,local_70));
  }
  if ((uVar2 & 1) != 0) {
    *param_2 = (uint)local_4c[0];
  }
  FUN_005d3510(&local_70,"VoiceActivityDetection");
  local_48 = (undefined8 *******)0x0;
  uStack_40 = 0;
  local_38 = 0;
  uVar2 = FUN_00d0ada8(param_1,&local_70,&local_48);
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_00d0ada8(param_1 + 3,&local_70,&local_48);
    if ((uVar2 & 1) != 0) goto LAB_00d0b5f0;
    uVar2 = 0;
  }
  else {
    lVar3 = lVar3 + 1;
    local_58 = lVar3;
LAB_00d0b5f0:
    uVar2 = uStack_40;
    pppppppuVar1 = local_48;
    if (-1 < (long)local_38) {
      uVar2 = local_38 >> 0x38;
      pppppppuVar1 = &local_48;
    }
    uVar2 = FUN_006253e8(pppppppuVar1,uVar2,local_4c);
    uVar2 = uVar2 & 0xffffffff;
  }
  if (cStack_59 < '\0') {
    operator_delete((void *)CONCAT44(uStack_6c,local_70));
  }
  if ((uVar2 & 1) != 0) {
    *(byte *)(param_2 + 2) = local_4c[0];
  }
  FUN_005d3510(&local_70,"googUseRtpMUX");
  local_48 = (undefined8 *******)0x0;
  uStack_40 = 0;
  local_38 = 0;
  uVar2 = FUN_00d0ada8(param_1,&local_70,&local_48);
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_00d0ada8(param_1 + 3,&local_70,&local_48);
    if ((uVar2 & 1) != 0) goto LAB_00d0b680;
    uVar2 = 0;
  }
  else {
    lVar3 = lVar3 + 1;
    local_58 = lVar3;
LAB_00d0b680:
    uVar2 = uStack_40;
    pppppppuVar1 = local_48;
    if (-1 < (long)local_38) {
      uVar2 = local_38 >> 0x38;
      pppppppuVar1 = &local_48;
    }
    uVar2 = FUN_006253e8(pppppppuVar1,uVar2,local_4c);
    uVar2 = uVar2 & 0xffffffff;
  }
  if (cStack_59 < '\0') {
    operator_delete((void *)CONCAT44(uStack_6c,local_70));
  }
  if ((uVar2 & 1) != 0) {
    *(byte *)((long)param_2 + 10) = local_4c[0];
  }
  FUN_005d3510(&local_70,"IceRestart");
  local_48 = (undefined8 *******)0x0;
  uStack_40 = 0;
  local_38 = 0;
  uVar2 = FUN_00d0ada8(param_1,&local_70,&local_48);
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_00d0ada8(param_1 + 3,&local_70,&local_48);
    if ((uVar2 & 1) != 0) goto LAB_00d0b710;
    uVar2 = 0;
  }
  else {
    lVar3 = lVar3 + 1;
    local_58 = lVar3;
LAB_00d0b710:
    uVar2 = uStack_40;
    pppppppuVar1 = local_48;
    if (-1 < (long)local_38) {
      uVar2 = local_38 >> 0x38;
      pppppppuVar1 = &local_48;
    }
    uVar2 = FUN_006253e8(pppppppuVar1,uVar2,local_4c);
    uVar2 = uVar2 & 0xffffffff;
  }
  if (cStack_59 < '\0') {
    operator_delete((void *)CONCAT44(uStack_6c,local_70));
  }
  if ((uVar2 & 1) != 0) {
    *(byte *)((long)param_2 + 9) = local_4c[0];
  }
  FUN_005d3510(&local_70,"googRawPacketizationForVideoEnabled");
  local_48 = (undefined8 *******)0x0;
  uStack_40 = 0;
  local_38 = 0;
  uVar2 = FUN_00d0ada8(param_1,&local_70,&local_48);
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_00d0ada8(param_1 + 3,&local_70,&local_48);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      goto LAB_00d0b7d0;
    }
  }
  else {
    local_58 = lVar3 + 1;
  }
  uVar2 = uStack_40;
  pppppppuVar1 = local_48;
  if (-1 < (long)local_38) {
    uVar2 = local_38 >> 0x38;
    pppppppuVar1 = &local_48;
  }
  uVar2 = FUN_006253e8(pppppppuVar1,uVar2,local_4c);
  uVar2 = uVar2 & 0xffffffff;
LAB_00d0b7d0:
  if (cStack_59 < '\0') {
    operator_delete((void *)CONCAT44(uStack_6c,local_70));
  }
  if ((uVar2 & 1) != 0) {
    *(byte *)((long)param_2 + 0xb) = local_4c[0];
  }
  local_70 = 0xaaaaaaaa;
  FUN_005d3510(&local_48,"googNumSimulcastLayers");
  uVar2 = FUN_00d0b9e4(param_1,&local_48,&local_70,&local_58);
  if ((uVar2 & 1) != 0) {
    param_2[3] = local_70;
  }
  return local_58 == (param_1[1] - *param_1 >> 4) * -0x5555555555555555;
}


// ===== 00d0b9e4  FUN_00d0b9e4 =====

undefined4 FUN_00d0b9e4(long param_1,undefined8 param_2,undefined4 *param_3,long *param_4)

{
  undefined8 *****pppppuVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [12];
  undefined8 ****local_48;
  ulong uStack_40;
  ulong local_38;
  
  local_48 = (undefined8 *****)0x0;
  uStack_40 = 0;
  local_38 = 0;
  uVar2 = FUN_00d0ada8(param_1,param_2,&local_48);
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_00d0ada8(param_1 + 0x18,param_2,&local_48);
    if ((uVar2 & 1) != 0) goto LAB_00d0ba48;
  }
  else {
    if (param_4 != (long *)0x0) {
      *param_4 = *param_4 + 1;
    }
LAB_00d0ba48:
    uVar2 = uStack_40;
    pppppuVar1 = (undefined8 *****)local_48;
    if (-1 < (long)local_38) {
      uVar2 = local_38 >> 0x38;
      pppppuVar1 = &local_48;
    }
    auVar4 = FUN_00675340(pppppuVar1,uVar2,10);
    uVar2 = auVar4._0_8_ & 0xffffffff | 0x100000000;
    if ((auVar4._8_4_ & (uint)(auVar4._0_8_ + 0x80000000 >> 0x20 == 0)) == 0) {
      uVar2 = 0;
    }
    if (uVar2 >> 0x20 != 0) {
      *param_3 = (int)uVar2;
      uVar3 = 1;
      goto joined_r0x00d0bab4;
    }
  }
  uVar3 = 0;
joined_r0x00d0bab4:
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  return uVar3;
}


// ===== 00d0bae4  FUN_00d0bae4 =====

void FUN_00d0bae4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 local_8;
  
  *param_1 = &PTR_FUN_00d512c0;
  param_1[1] = param_3;
  param_1[2] = 0;
  local_8 = param_2;
  FUN_0065a6d0(param_1 + 3,&local_8);
  if (-1 < (long)param_1[1]) {
    if ((param_1[3] == 0) && (uVar1 = FUN_004249b0(), (uVar1 & 1) == 0)) {
      FUN_00623bb0(&DAT_001f4e98,"../../api/rtc_event_log_output_file.cc",0x1b3,
                   "Invalid file. WebRTC event log not started.");
    }
    FUN_0065a730(&local_8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../api/rtc_event_log_output_file.cc",0x34,
               "max_size_bytes_ <= kMaxReasonableFileSize",&DAT_001fb920,param_1[1],
               0x7fffffffffffffff);
}


// ===== 00d0bb8c  FUN_00d0bb8c =====

bool FUN_00d0bb8c(long param_1)

{
  return *(long *)(param_1 + 0x18) != 0;
}


// ===== 00d0bba0  FUN_00d0bba0 =====

undefined8 FUN_00d0bba0(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  if ((*(ulong *)(param_1 + 8) == 0) ||
     ((ulong)(*(long *)(param_1 + 0x10) + param_3) <= *(ulong *)(param_1 + 8))) {
    uVar1 = FUN_0065a830(param_1 + 0x18,param_2,param_3);
    if ((uVar1 & 1) != 0) {
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_3;
      return 1;
    }
    uVar1 = FUN_004249b0();
    if ((uVar1 & 1) != 0) goto LAB_00d0bc44;
    pcVar3 = "Write to WebRtcEventLog file failed.";
    uVar2 = 0x253;
  }
  else {
    uVar1 = FUN_0044075c();
    if ((uVar1 & 1) != 0) goto LAB_00d0bc44;
    pcVar3 = "Max file size reached.";
    uVar2 = 0x268;
  }
  FUN_00623bb0(&DAT_001f4e98,"../../api/rtc_event_log_output_file.cc",uVar2,pcVar3);
LAB_00d0bc44:
  FUN_0065a730(param_1 + 0x18);
  return 0;
}


// ===== 00d0bc60  FUN_00d0bc60 =====

void FUN_00d0bc60(long param_1)

{
  FUN_0065a730(param_1 + 0x18);
  return;
}


// ===== 00d0bc6c  FUN_00d0bc6c =====

void FUN_00d0bc6c(void *param_1)

{
  FUN_0065a730((long)param_1 + 0x18);
  operator_delete(param_1);
  return;
}


// ===== 00d0bca0  FUN_00d0bca0 =====

void FUN_00d0bca0(void)

{
  return;
}


// ===== 00d0bca8  FUN_00d0bca8 =====

void FUN_00d0bca8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined8 local_28;
  
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = param_4;
  FUN_00aecb14(&local_70,param_2,&local_58);
  uStack_88 = 0;
  uStack_a8 = 0;
  local_90 = 0xaaaaaaaa00000000;
  local_80 = 0;
  uStack_78 = 0;
  local_b0 = 0xaaaaaaaa00000000;
  local_a0 = 0;
  uStack_98 = 0;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_28 = param_4;
  FUN_00aecb14(&local_50,param_2,&local_28);
  uVar1 = FUN_00aecbc4(param_2,&local_50);
  uVar2 = FUN_00aecbc4(param_2,&local_50);
  FUN_00aecc74(param_2,&local_28,&local_50,uVar1,uVar2,0,0,&local_90,&local_b0);
  FUN_00ada608(&local_50,puStack_48);
  FUN_00aee040(&local_50,param_2,&local_58,&local_70);
  pvVar3 = operator_new(0x98);
  FUN_00aee100(pvVar3,param_2,param_3,&local_90,0x96,&local_50);
  FUN_00ada608(&local_50,puStack_48);
  FUN_00aef314(&local_50,param_2,&local_58,&local_70,param_5);
  pvVar4 = operator_new(0x90);
  FUN_00aef3dc(pvVar4,param_2,param_3,&local_b0,&local_50);
  FUN_00ada608(&local_50,puStack_48);
  FUN_00aed00c(param_1,param_3,5,0,0,0x96,pvVar3,pvVar4);
  FUN_00ada608(&local_70,puStack_68);
  return;
}


// ===== 00d0be50  FUN_00d0be50 =====

void FUN_00d0be50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  void *pvVar6;
  long *plVar7;
  void *pvVar8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined8 local_48;
  
  uStack_78 = 0;
  uStack_98 = 0;
  local_80 = 0xaaaaaaaa00000000;
  local_70 = 0;
  uStack_68 = 0;
  local_a0 = 0xaaaaaaaa00000000;
  local_90 = 0;
  uStack_88 = 0;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = param_4;
  FUN_00aecb14(&local_60,param_2,&local_48);
  uVar2 = FUN_00aecbc4(param_2,&local_60);
  uVar3 = FUN_00aecbc4(param_2,&local_60);
  FUN_00aecc74(param_2,&local_48,&local_60,uVar2,uVar3,0,0,&local_80,&local_a0);
  FUN_00ada608(&local_60,puStack_58);
  puVar5 = (undefined1 *)operator_new(0x10);
  FUN_00d0c610();
  if (puVar5 == (undefined1 *)0x0) {
    pvVar6 = operator_new(200);
  }
  else {
    FUN_00d0f740(1,puVar5);
    pvVar6 = operator_new(200);
    FUN_00d0f740(1,puVar5);
  }
  local_60 = puVar5;
  FUN_00d0dbc8(pvVar6,param_3,&local_80,&local_60);
  puVar1 = local_60;
  if ((local_60 != (undefined1 *)0x0) && (iVar4 = FUN_00d0f7a0(0xffffffff,local_60), iVar4 == 1)) {
    plVar7 = *(long **)(puVar1 + 8);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x30))();
    }
    operator_delete(puVar1);
  }
  pvVar8 = operator_new(0xe0);
  local_60 = puVar5;
  FUN_00d0c794(pvVar8,param_3,&local_a0,&local_60,param_5 & 1);
  puVar5 = local_60;
  if ((local_60 != (undefined1 *)0x0) && (iVar4 = FUN_00d0f7a0(0xffffffff,local_60), iVar4 == 1)) {
    plVar7 = *(long **)(puVar5 + 8);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x30))();
    }
    operator_delete(puVar5);
  }
  FUN_00aed00c(param_1,param_3,6,0,0,0x32,pvVar6,pvVar8);
  return;
}


// ===== 00d0c040  FUN_00d0c040 =====

void FUN_00d0c040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  undefined1 *puVar5;
  void *pvVar6;
  long *plVar7;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined8 local_48;
  
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = param_4;
  FUN_00aecb14(&local_80,param_2,&local_68);
  uStack_98 = 0;
  uStack_b8 = 0;
  local_a0 = 0xaaaaaaaa00000000;
  local_90 = 0;
  uStack_88 = 0;
  local_c0 = 0xaaaaaaaa00000000;
  local_b0 = 0;
  uStack_a8 = 0;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = param_4;
  FUN_00aecb14(&local_60,param_2,&local_48);
  uVar1 = FUN_00aecbc4(param_2,&local_60);
  uVar2 = FUN_00aecbc4(param_2,&local_60);
  FUN_00aecc74(param_2,&local_48,&local_60,uVar1,uVar2,0,0,&local_a0,&local_c0);
  FUN_00ada608(&local_60,puStack_58);
  FUN_00aee040(&local_60,param_2,&local_68,&local_80);
  pvVar4 = operator_new(0x98);
  FUN_00aee100(pvVar4,param_2,param_3,&local_a0,0x32,&local_60);
  FUN_00ada608(&local_60,puStack_58);
  puVar5 = (undefined1 *)operator_new(0x10);
  FUN_00d0c610();
  if (puVar5 != (undefined1 *)0x0) {
    FUN_00d0f740(1,puVar5);
  }
  pvVar6 = operator_new(0xe0);
  local_60 = puVar5;
  FUN_00d0c794(pvVar6,param_3,&local_c0,&local_60,param_5 & 1);
  puVar5 = local_60;
  if ((local_60 != (undefined1 *)0x0) && (iVar3 = FUN_00d0f7a0(0xffffffff,local_60), iVar3 == 1)) {
    plVar7 = *(long **)(puVar5 + 8);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x30))();
    }
    operator_delete(puVar5);
  }
  FUN_00aed00c(param_1,param_3,7,0,0,0x32,pvVar4,pvVar6);
  FUN_00ada608(&local_80,puStack_78);
  return;
}


// ===== 00d0c224  FUN_00d0c224 =====

void FUN_00d0c224(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 *local_40;
  undefined1 *puStack_38;
  
  uVar2 = thunk_FUN_00ad9fc4();
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00d0c358(&local_40);
  iVar1 = 0;
  if (param_3 != 10) {
    iVar1 = param_3;
  }
  if (iVar1 < 6) {
    if (iVar1 == 0) {
      uVar3 = FUN_00aecea4(uVar2,&local_40);
      if (((uVar3 & 1) != 0) && (uVar3 = FUN_00aecf58(uVar2,&local_40), (uVar3 & 1) != 0))
      goto LAB_00d0c2d8;
      uVar3 = FUN_00aecf58(uVar2,&local_40);
      if (((uVar3 & 1) != 0) && (uVar3 = FUN_00aecea4(uVar2,&local_40), (uVar3 & 1) == 0))
      goto LAB_00d0c290;
    }
    else if (iVar1 != 5) goto LAB_00d0c2b0;
    FUN_00d0bca8(param_1,uVar2,param_2,local_40,param_3 == 10);
  }
  else {
    if (iVar1 == 6) {
LAB_00d0c2d8:
      FUN_00d0be50(param_1,uVar2,param_2,local_40,param_3 == 10);
      goto LAB_00d0c334;
    }
    if (iVar1 == 7) {
LAB_00d0c290:
      FUN_00d0c040(param_1,uVar2,param_2,local_40,param_3 == 10);
      goto LAB_00d0c334;
    }
LAB_00d0c2b0:
    *param_1 = 0;
  }
LAB_00d0c334:
  FUN_00ada608(&local_40,puStack_38);
  return;
}


// ===== 00d0c358  FUN_00d0c358 =====

void FUN_00d0c358(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  uVar1 = FUN_00adaed8(param_2,"org/webrtc/ApplicationContextProvider",&DAT_00dbbae8);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = (undefined1 *)&local_60;
  FUN_00ad8360(&local_60,param_2,uVar1,"getApplicationContext","()Landroid/content/Context;",
               &DAT_00dbbae0);
  uVar1 = FUN_004aecec(param_2,uVar1,local_40);
  *param_1 = uVar1;
  param_1[1] = param_2;
  FUN_00ad843c(&local_60);
  return;
}


// ===== 00d0c400  FUN_00d0c400 =====

char * FUN_00d0c400(ulong param_1)

{
  if (param_1 < 0x11) {
    return (&PTR_s_SL_RESULT_SUCCESS_00d512e8)[param_1];
  }
  return "SL_RESULT_UNKNOWN_ERROR";
}


// ===== 00d0c428  FUN_00d0c428 =====

void FUN_00d0c428(undefined4 *param_1,int param_2,int param_3,long param_4)

{
  undefined4 uVar1;
  
  if (param_4 != 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../sdk/android/src/jni/audio_device/opensles_common.cc",0x39,
                 "bits_per_sample == ((SLuint16) 0x0010)",&DAT_001fbca2,param_4,0x10);
  }
  param_1[1] = param_2;
  param_1[2] = 0xaaaaaaaa;
  *param_1 = 2;
  if (param_3 < 0xac44) {
    if (param_3 < 0x5622) {
      if (param_3 == 8000) {
        uVar1 = 8000000;
      }
      else {
        if (param_3 != 16000) {
LAB_00d0c5e4:
                    /* WARNING: Subroutine does not return */
          FUN_0061fd88("../../sdk/android/src/jni/audio_device/opensles_common.cc",0x5b,"false",
                       &DAT_00223ede,"Unsupported sample rate: ",param_3);
        }
        uVar1 = 16000000;
      }
    }
    else if (param_3 == 0x5622) {
      uVar1 = 0x15074d0;
    }
    else {
      if (param_3 != 32000) goto LAB_00d0c5e4;
      uVar1 = 32000000;
    }
  }
  else if (param_3 < 64000) {
    if (param_3 == 0xac44) {
      uVar1 = 44100000;
    }
    else {
      if (param_3 != 48000) goto LAB_00d0c5e4;
      uVar1 = 48000000;
    }
  }
  else if (param_3 == 64000) {
    uVar1 = 64000000;
  }
  else if (param_3 == 0x15888) {
    uVar1 = 88200000;
  }
  else {
    if (param_3 != 96000) goto LAB_00d0c5e4;
    uVar1 = 96000000;
  }
  param_1[2] = uVar1;
  param_1[6] = 2;
  *(undefined8 *)(param_1 + 3) = 0x1000000010;
  if (param_2 == 1) {
    uVar1 = 4;
  }
  else {
    if (param_2 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../sdk/android/src/jni/audio_device/opensles_common.cc",0x66,"false",
                   &DAT_0025847f,"Unsupported number of channels: ");
    }
    uVar1 = 3;
  }
  param_1[5] = uVar1;
  return;
}


// ===== 00d0c610  FUN_00d0c610 =====

void FUN_00d0c610(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}


// ===== 00d0c620  FUN_00d0c620 =====

long * FUN_00d0c620(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  long *plVar7;
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../sdk/android/src/jni/audio_device/opensles_common.cc",0x389,
                 "GetOpenSLEngine");
  }
  plVar7 = (long *)(param_1 + 8);
  if (*plVar7 == 0) {
    uVar1 = slCreateEngine(plVar7,1,&DAT_0025ae1c,0,0,0);
    if (uVar1 == 0) {
      uVar1 = (*(code *)**(undefined8 **)*plVar7)((undefined8 *)*plVar7,0);
      if (uVar1 == 0) goto LAB_00d0c68c;
      uVar2 = FUN_004249b0();
      if ((uVar2 & 1) == 0) {
        if (uVar1 < 0x11) {
          pcVar6 = (&PTR_s_SL_RESULT_SUCCESS_00d512e8)[uVar1];
        }
        else {
          pcVar6 = "SL_RESULT_UNKNOWN_ERROR";
        }
        pcVar5 = "Realize() failed: ";
        uVar4 = 1099;
        goto LAB_00d0c764;
      }
    }
    else {
      uVar2 = FUN_004249b0();
      if ((uVar2 & 1) == 0) {
        if (uVar1 < 0x11) {
          pcVar6 = (&PTR_s_SL_RESULT_SUCCESS_00d512e8)[uVar1];
        }
        else {
          pcVar6 = "SL_RESULT_UNKNOWN_ERROR";
        }
        pcVar5 = "slCreateEngine() failed: ";
        uVar4 = 0x40b;
LAB_00d0c764:
        FUN_00623bb0(&DAT_001f4ed3,"../../sdk/android/src/jni/audio_device/opensles_common.cc",uVar4
                     ,pcVar5,pcVar6);
      }
    }
    plVar3 = (long *)*plVar7;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x30))();
      plVar3 = (long *)0x0;
      *plVar7 = 0;
    }
  }
  else {
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../sdk/android/src/jni/audio_device/opensles_common.cc",0x3ba,
                   "The OpenSL ES engine object has already been created");
    }
LAB_00d0c68c:
    plVar3 = (long *)*plVar7;
  }
  return plVar3;
}


// ===== 00d0c794  FUN_00d0c794 =====

void FUN_00d0c794(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
                 byte param_5)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_5c;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
  *param_1 = &PTR_FUN_00d51380;
  lVar2 = *param_2;
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    FUN_00d0f740(1,lVar2 + 8);
  }
  lVar4 = param_2[4];
  lVar2 = param_2[3];
  lVar6 = param_2[1];
  param_1[3] = param_2[2];
  param_1[2] = lVar6;
  param_1[5] = lVar4;
  param_1[4] = lVar2;
  uVar5 = param_3[1];
  uVar3 = *param_3;
  uVar8 = param_3[3];
  uVar7 = param_3[2];
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(byte *)((long)param_1 + 0x62) = param_5 & 1;
  param_1[8] = uVar5;
  param_1[7] = uVar3;
  param_1[10] = uVar8;
  param_1[9] = uVar7;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  uVar3 = *param_4;
  *param_4 = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = uVar3;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  uVar1 = gettid();
  __android_log_print(3,"OpenSLESPlayer","ctor[tid=%d]",uVar1);
  FUN_00d0c428(&local_5c,param_1[8],*(undefined4 *)(param_1 + 7),0x10);
  *(ulong *)((long)param_1 + 0x6c) = CONCAT44(uStack_50,uStack_54);
  *(undefined8 *)((long)param_1 + 100) = local_5c;
  param_1[0xf] = uStack_48;
  param_1[0xe] = CONCAT44(uStack_4c,uStack_50);
  return;
}


// ===== 00d0c89c  FUN_00d0c89c =====

void FUN_00d0c89c(long *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  void *pvVar4;
  
  *param_1 = (long)&PTR_FUN_00d51380;
  uVar1 = gettid();
  __android_log_print(3,"OpenSLESPlayer","dtor[tid=%d]",uVar1);
  (**(code **)(*param_1 + 0x18))(param_1);
  __android_log_print(3,"OpenSLESPlayer","DestroyAudioPlayer");
  if (param_1[0x17] != 0) {
    (**(code **)(*(long *)param_1[0x19] + 0x18))((long *)param_1[0x19],0,0);
    if ((long *)param_1[0x17] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x17] + 0x30))();
      param_1[0x17] = 0;
    }
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
  }
  __android_log_print(3,"OpenSLESPlayer","DestroyMix");
  if ((long *)param_1[0x16] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x16] + 0x30))();
    param_1[0x16] = 0;
  }
  param_1[0x15] = 0;
  if ((long *)param_1[0x17] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x17] + 0x30))();
    param_1[0x17] = 0;
    if ((long *)param_1[0x16] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x16] + 0x30))();
      param_1[0x16] = 0;
    }
  }
  pvVar4 = (void *)param_1[0x14];
  if ((pvVar4 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar4), iVar2 == 1)) {
    if (*(long **)((long)pvVar4 + 8) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar4 + 8) + 0x30))();
    }
    operator_delete(pvVar4);
  }
  pvVar4 = (void *)param_1[0x12];
  param_1[0x12] = 0;
  if (pvVar4 != (void *)0x0) {
    FUN_00d0d788(pvVar4);
    operator_delete(pvVar4);
  }
  pvVar4 = (void *)param_1[0x11];
  param_1[0x11] = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete__(pvVar4);
  }
  pvVar4 = (void *)param_1[0x10];
  param_1[0x10] = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete__(pvVar4);
  }
  plVar3 = (long *)param_1[1];
  if ((plVar3 != (long *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,plVar3 + 1), iVar2 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x00d0ca58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 8))(plVar3);
    return;
  }
  return;
}


// ===== 00d0ca6c  FUN_00d0ca6c =====

void FUN_00d0ca6c(void *param_1)

{
  FUN_00d0c89c();
  operator_delete(param_1);
  return;
}


// ===== 00d0ca9c  FUN_00d0ca9c =====

undefined8 FUN_00d0ca9c(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = gettid();
  __android_log_print(3,"OpenSLESPlayer","Init[tid=%d]",uVar1);
  if (*(long *)(param_1 + 0x40) == 2) {
    __android_log_print(5,"OpenSLESPlayer","Stereo mode is enabled");
  }
  return 0;
}


// ===== 00d0cb08  FUN_00d0cb08 =====

undefined8 FUN_00d0cb08(long *param_1)

{
  undefined4 uVar1;
  
  uVar1 = gettid();
  __android_log_print(3,"OpenSLESPlayer","Terminate[tid=%d]",uVar1);
  (**(code **)(*param_1 + 0x38))(param_1);
  return 0;
}


// ===== 00d0cb60  FUN_00d0cb60 =====

undefined8 FUN_00d0cb60(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  char *pcVar6;
  
  uVar1 = gettid();
  __android_log_print(3,"OpenSLESPlayer","InitPlayout[tid=%d]",uVar1);
  uVar3 = FUN_00d0cc74(param_1);
  if ((uVar3 & 1) == 0) {
    __android_log_print(6,"OpenSLESPlayer","Failed to obtain SL Engine interface");
    return 0xffffffff;
  }
  __android_log_print(3,"OpenSLESPlayer","CreateMix");
  plVar5 = (long *)(param_1 + 0xb0);
  if (*plVar5 == 0) {
    iVar2 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x38))
                      (*(long **)(param_1 + 0xa8),plVar5,0,0,0);
    if (iVar2 == 0) {
      iVar2 = (*(code *)**(undefined8 **)*plVar5)((undefined8 *)*plVar5,0);
      if (iVar2 == 0) goto LAB_00d0cc54;
      pcVar6 = "output_mix_->Realize(output_mix_.Get(), SL_BOOLEAN_FALSE)";
    }
    else {
      pcVar6 = "(*engine_)->CreateOutputMix(engine_, output_mix_.Receive(), 0, nullptr, nullptr)";
    }
    uVar4 = FUN_00d0c400(iVar2);
    __android_log_print(6,"OpenSLESPlayer","%s failed: %s",pcVar6,uVar4);
  }
LAB_00d0cc54:
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0x60) = 1;
  return 0;
}


// ===== 00d0cc74  FUN_00d0cc74 =====

undefined8 FUN_00d0cc74(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  
  __android_log_print(3,"OpenSLESPlayer","ObtainEngineInterface");
  if (*(long *)(param_1 + 0xa8) == 0) {
    plVar3 = (long *)FUN_00d0c620(*(undefined8 *)(param_1 + 0xa0));
    if (plVar3 == (long *)0x0) {
      __android_log_print(6,"OpenSLESPlayer","Failed to access the global OpenSL engine");
    }
    else {
      iVar1 = (**(code **)(*plVar3 + 0x18))
                        (plVar3,*(undefined8 *)PTR_SL_IID_ENGINE_00d51ef0,(long *)(param_1 + 0xa8));
      if (iVar1 == 0) goto LAB_00d0ccac;
      uVar2 = FUN_00d0c400(iVar1);
      __android_log_print(6,"OpenSLESPlayer","%s failed: %s",
                          "(*engine_object)->GetInterface(engine_object, SL_IID_ENGINE, &engine_)",
                          uVar2);
    }
    uVar2 = 0;
  }
  else {
LAB_00d0ccac:
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 00d0cd3c  FUN_00d0cd3c =====

undefined1 FUN_00d0cd3c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x60);
}


// ===== 00d0cd48  FUN_00d0cd48 =====

undefined8 FUN_00d0cd48(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  int local_4;
  
  uVar1 = gettid();
  __android_log_print(3,"OpenSLESPlayer","StartPlayout[tid=%d]",uVar1);
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_00d0d7d8();
  }
  FUN_00d0ce68(param_1);
  uVar3 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  *(undefined8 *)(param_1 + 0xd8) = uVar3;
  FUN_00d0d114(param_1,1);
  FUN_00d0d114(param_1,1);
  iVar2 = (**(code **)**(undefined8 **)(param_1 + 0xc0))(*(undefined8 **)(param_1 + 0xc0),3);
  if (iVar2 == 0) {
    local_4 = -0x55555556;
    iVar2 = (**(code **)(**(long **)(param_1 + 0xc0) + 8))(*(long **)(param_1 + 0xc0),&local_4);
    if (iVar2 != 0) {
      __android_log_print(6,"OpenSLESPlayer","GetPlayState failed: %d",iVar2);
    }
    uVar3 = 0;
    *(bool *)(param_1 + 0x61) = local_4 == 3;
  }
  else {
    uVar3 = FUN_00d0c400(iVar2);
    __android_log_print(6,"OpenSLESPlayer","%s failed: %s",
                        "(*player_)->SetPlayState(player_, SL_PLAYSTATE_PLAYING)",uVar3);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


// ===== 00d0ce68  FUN_00d0ce68 =====

undefined8 FUN_00d0ce68(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_9c;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  long lStack_50;
  undefined8 local_48;
  
  __android_log_print(3,"OpenSLESPlayer","CreateAudioPlayer");
  plVar4 = (long *)(param_1 + 0xb8);
  if (*plVar4 == 0) {
    local_58 = &local_48;
    lStack_50 = param_1 + 100;
    local_60 = *(undefined8 *)(param_1 + 0xb0);
    local_78 = &local_68;
    local_48 = DAT_001f5d50;
    local_68 = 0xaaaaaaaa00000004;
    uVar6 = *(undefined8 *)PTR_SL_IID_ANDROIDCONFIGURATION_00d51f00;
    uVar5 = *(undefined8 *)PTR_SL_IID_BUFFERQUEUE_00d51f08;
    uStack_70 = 0;
    uVar2 = *(undefined8 *)PTR_SL_IID_VOLUME_00d51ef8;
    local_90 = uVar6;
    uStack_88 = uVar5;
    local_80 = uVar2;
    iVar1 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x10))
                      (*(long **)(param_1 + 0xa8),plVar4,&local_58,&local_78,3,&local_90,
                       &DAT_0025ae24);
    if (iVar1 == 0) {
      local_98 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
      iVar1 = (**(code **)(*(long *)*plVar4 + 0x18))((long *)*plVar4,uVar6,&local_98);
      if (iVar1 == 0) {
        local_9c = 3;
        if (*(char *)(param_1 + 0x62) == '\0') {
          local_9c = 0;
        }
        iVar1 = (**(code **)*local_98)(local_98,"androidPlaybackStreamType",&local_9c,4);
        if (iVar1 == 0) {
          iVar1 = (*(code *)**(undefined8 **)*plVar4)((undefined8 *)*plVar4,0);
          if (iVar1 == 0) {
            iVar1 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))
                              (*(long **)(param_1 + 0xb8),*(undefined8 *)PTR_SL_IID_PLAY_00d51f18,
                               param_1 + 0xc0);
            if (iVar1 == 0) {
              iVar1 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))
                                (*(long **)(param_1 + 0xb8),uVar5,param_1 + 200);
              if (iVar1 == 0) {
                iVar1 = (**(code **)(**(long **)(param_1 + 200) + 0x18))
                                  (*(long **)(param_1 + 200),FUN_00d0d648,param_1);
                if (iVar1 == 0) {
                  iVar1 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))
                                    (*(long **)(param_1 + 0xb8),uVar2,param_1 + 0xd0);
                  if (iVar1 == 0) goto LAB_00d0ceac;
                  pcVar3 = 
                  "player_object_->GetInterface(player_object_.Get(), SL_IID_VOLUME, &volume_)";
                }
                else {
                  pcVar3 = 
                  "(*simple_buffer_queue_) ->RegisterCallback(simple_buffer_queue_, SimpleBufferQueueCallback, this)"
                  ;
                }
              }
              else {
                pcVar3 = 
                "player_object_->GetInterface(player_object_.Get(), SL_IID_BUFFERQUEUE, &simple_buffer_queue_)"
                ;
              }
            }
            else {
              pcVar3 = "player_object_->GetInterface(player_object_.Get(), SL_IID_PLAY, &player_)";
            }
          }
          else {
            pcVar3 = "player_object_->Realize(player_object_.Get(), SL_BOOLEAN_FALSE)";
          }
        }
        else {
          pcVar3 = 
          "(*player_config) ->SetConfiguration(player_config, SL_ANDROID_KEY_STREAM_TYPE, &stream_type, sizeof(SLint32))"
          ;
        }
        uVar2 = FUN_00d0c400(iVar1);
      }
      else {
        uVar2 = FUN_00d0c400(iVar1);
        pcVar3 = 
        "player_object_->GetInterface(player_object_.Get(), SL_IID_ANDROIDCONFIGURATION, &player_config)"
        ;
      }
    }
    else {
      uVar2 = FUN_00d0c400(iVar1);
      pcVar3 = 
      "(*engine_)->CreateAudioPlayer( engine_, player_object_.Receive(), &audio_source, &audio_sink, std::size(interface_ids), interface_ids, interface_required)"
      ;
    }
    __android_log_print(6,"OpenSLESPlayer","%s failed: %s",pcVar3,uVar2);
    uVar2 = 0;
  }
  else {
LAB_00d0ceac:
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 00d0d114  FUN_00d0d114 =====

void FUN_00d0d114(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  void *__s;
  
  lVar7 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  lVar9 = *(long *)(param_1 + 0xd8);
  uVar8 = 0x7fffffffffffffff;
  if ((lVar7 == 0x7fffffffffffffff || lVar9 == -0x8000000000000000) ||
     (uVar8 = lVar7 - lVar9,
     (lVar7 != -0x8000000000000000 && lVar9 != 0x7fffffffffffffff) && 150000 < (long)uVar8)) {
    iVar6 = (int)(uVar8 / 1000);
    if (499 < uVar8 % 1000) {
      iVar6 = iVar6 + 1;
    }
    __android_log_print(5,"OpenSLESPlayer","Bad OpenSL ES playout timing, dT=%u [ms]",iVar6);
  }
  *(long *)(param_1 + 0xd8) = lVar7;
  if (*(uint *)(param_1 + 0x98) < 3) {
    __s = *(void **)(param_1 + (ulong)*(uint *)(param_1 + 0x98) * 8 + 0x80);
    if ((param_2 & 1) == 0) {
      lVar7 = *(long *)(param_1 + 0x40) * *(long *)(param_1 + 0x48);
      pvVar4 = (void *)0x0;
      if (lVar7 != 0) {
        pvVar4 = __s;
      }
      FUN_00d0d7f0(*(undefined8 *)(param_1 + 0x90),pvVar4,lVar7,0x19);
    }
    else {
      memset(__s,0,(*(ulong *)(param_1 + 0x40) & 0xfffffffffffffff) * 2 * *(long *)(param_1 + 0x48))
      ;
    }
    iVar6 = (**(code **)**(undefined8 **)(param_1 + 200))
                      (*(undefined8 **)(param_1 + 200),__s,
                       *(int *)(param_1 + 0x48) * *(int *)(param_1 + 0x40) * 2);
    if (iVar6 != 0) {
      __android_log_print(6,"OpenSLESPlayer","Enqueue failed: %d",iVar6);
    }
    uVar1 = *(int *)(param_1 + 0x98) + 1;
    uVar2 = uVar1 & 1;
    uVar3 = -uVar2;
    if (-1 < (int)uVar1) {
      uVar3 = uVar2;
    }
    *(uint *)(param_1 + 0x98) = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(0x5512,0xd0d284);
  (*pcVar5)();
}


// ===== 00d0d284  FUN_00d0d284 =====

undefined8 FUN_00d0d284(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  uVar1 = gettid();
  __android_log_print(3,"OpenSLESPlayer","StopPlayout[tid=%d]",uVar1);
  if ((*(char *)(param_1 + 0x60) == '\x01') && (*(char *)(param_1 + 0x61) == '\x01')) {
    puVar3 = *(undefined8 **)(param_1 + 0xc0);
    iVar2 = (**(code **)*puVar3)(puVar3,1);
    if (iVar2 == 0) {
      iVar2 = (**(code **)(**(long **)(param_1 + 200) + 8))();
      if (iVar2 == 0) {
        __android_log_print(3,"OpenSLESPlayer","DestroyAudioPlayer");
        if (*(long *)(param_1 + 0xb8) != 0) {
          (**(code **)(**(long **)(param_1 + 200) + 0x18))(*(long **)(param_1 + 200),0,0);
          if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
            (**(code **)(**(long **)(param_1 + 0xb8) + 0x30))();
            *(undefined8 *)(param_1 + 0xb8) = 0;
          }
          *(undefined8 *)(param_1 + 0xc0) = 0;
          *(undefined8 *)(param_1 + 200) = 0;
          *(undefined8 *)(param_1 + 0xd0) = 0;
        }
        *(undefined2 *)(param_1 + 0x60) = 0;
        return 0;
      }
      uVar4 = FUN_00d0c400(iVar2);
      pcVar5 = "(*simple_buffer_queue_)->Clear(simple_buffer_queue_)";
    }
    else {
      uVar4 = FUN_00d0c400(iVar2);
      pcVar5 = "(*player_)->SetPlayState(player_, SL_PLAYSTATE_STOPPED)";
    }
    __android_log_print(6,"OpenSLESPlayer","%s failed: %s",pcVar5,uVar4);
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


// ===== 00d0d3d4  FUN_00d0d3d4 =====

undefined1 FUN_00d0d3d4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x61);
}


// ===== 00d0d3e0  FUN_00d0d3e0 =====

undefined8 FUN_00d0d3e0(void)

{
  return 0;
}


// ===== 00d0d3ec  FUN_00d0d3ec =====

undefined8 FUN_00d0d3ec(void)

{
  return 0xffffffff;
}


// ===== 00d0d3f8  FUN_00d0d3f8 =====

undefined8 FUN_00d0d3f8(void)

{
  return 0;
}


// ===== 00d0d404  FUN_00d0d404 =====

undefined8 FUN_00d0d404(void)

{
  return 0;
}


// ===== 00d0d410  FUN_00d0d410 =====

undefined8 FUN_00d0d410(void)

{
  return 0;
}


// ===== 00d0d41c  FUN_00d0d41c =====

void FUN_00d0d41c(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  __android_log_print(3,"OpenSLESPlayer","AttachAudioBuffer");
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x58) = param_2;
  __android_log_print(3,"OpenSLESPlayer","SetPlayoutSampleRate(%d)",uVar1);
  FUN_0099b90c(*(undefined8 *)(param_1 + 0x58),uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  __android_log_print(3,"OpenSLESPlayer","SetPlayoutChannels(%zu)",uVar2);
  FUN_0099b9fc(*(undefined8 *)(param_1 + 0x58),uVar2);
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_00d0d4e8(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../sdk/android/src/jni/audio_device/opensles_player.cc",0xdf,
               "audio_device_buffer_",&DAT_001f5fa0);
}


// ===== 00d0d4e8  FUN_00d0d4e8 =====

void FUN_00d0d4e8(long param_1)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  double dVar5;
  
  __android_log_print(3,"OpenSLESPlayer","AllocateDataBuffers");
  if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../sdk/android/src/jni/audio_device/opensles_player.cc",0xe7,
                 "audio_device_buffer_",&DAT_001f5fa0);
  }
  lVar3 = *(long *)(param_1 + 0x40) * *(long *)(param_1 + 0x48);
  __android_log_print(3,"OpenSLESPlayer","native buffer size: %zu",lVar3);
  if (*(int *)(param_1 + 0x38) == 0) {
    dVar5 = 0.0;
  }
  else {
    dVar5 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 0x48));
    dVar5 = dVar5 / ((double)*(int *)(param_1 + 0x38) / 1000.0);
  }
  __android_log_print(dVar5,3,"OpenSLESPlayer","native buffer size in ms: %.2f");
  pvVar1 = operator_new(0x60);
  FUN_00d0d6e8(pvVar1,*(undefined8 *)(param_1 + 0x58));
  pvVar4 = *(void **)(param_1 + 0x90);
  *(void **)(param_1 + 0x90) = pvVar1;
  if (pvVar4 != (void *)0x0) {
    FUN_00d0d788(pvVar4);
    operator_delete(pvVar4);
  }
  uVar2 = lVar3 * 2;
  if (lVar3 == -1 || lVar3 + 1 < 0 != SCARRY8(lVar3,1)) {
    uVar2 = 0xffffffffffffffff;
  }
  pvVar1 = operator_new__(uVar2);
  pvVar4 = *(void **)(param_1 + 0x80);
  *(void **)(param_1 + 0x80) = pvVar1;
  if (pvVar4 != (void *)0x0) {
    operator_delete__(pvVar4);
  }
  pvVar1 = operator_new__(uVar2);
  pvVar4 = *(void **)(param_1 + 0x88);
  *(void **)(param_1 + 0x88) = pvVar1;
  if (pvVar4 != (void *)0x0) {
    operator_delete__(pvVar4);
    return;
  }
  return;
}


// ===== 00d0d648  FUN_00d0d648 =====

void FUN_00d0d648(undefined8 param_1,long param_2)

{
  int iVar1;
  int local_4;
  
  local_4 = -0x55555556;
  iVar1 = (**(code **)(**(long **)(param_2 + 0xc0) + 8))(*(long **)(param_2 + 0xc0),&local_4);
  if (iVar1 != 0) {
    __android_log_print(6,"OpenSLESPlayer","GetPlayState failed: %d",iVar1);
  }
  if (local_4 == 3) {
    FUN_00d0d114(param_2,0);
  }
  else {
    __android_log_print(5,"OpenSLESPlayer","Buffer callback in non-playing state!");
  }
  return;
}


// ===== 00d0d6dc  FUN_00d0d6dc =====

undefined8 FUN_00d0d6dc(void)

{
  return 0xffffffff;
}


// ===== 00d0d6e8  FUN_00d0d6e8 =====

void FUN_00d0d6e8(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  iVar1 = FUN_0099b984(param_2);
  param_1[1] = (ulong)(uint)(iVar1 * 10) / 1000;
  iVar1 = FUN_0099b974(param_2);
  param_1[2] = (ulong)(uint)(iVar1 * 10) / 1000;
  uVar2 = FUN_0099ba74(param_2);
  param_1[3] = uVar2;
  uVar2 = FUN_0099ba64(param_2);
  param_1[4] = uVar2;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  return;
}


// ===== 00d0d788  FUN_00d0d788 =====

void FUN_00d0d788(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    return;
  }
  return;
}


// ===== 00d0d7d8  FUN_00d0d7d8 =====

void FUN_00d0d7d8(long param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}


// ===== 00d0d7e4  FUN_00d0d7e4 =====

void FUN_00d0d7e4(long param_1)

{
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}


// ===== 00d0d7f0  FUN_00d0d7f0 =====

void FUN_00d0d7f0(undefined8 *param_1,void *param_2,ulong param_3,undefined4 param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  void *pvVar9;
  
  uVar6 = param_1[5];
  while( true ) {
    if (param_3 <= uVar6) {
      memcpy(param_2,(void *)param_1[7],param_3 * 2);
      memmove((void *)param_1[7],(void *)((long)param_1[7] + param_3 * 2),(param_1[5] - param_3) * 2
             );
      lVar3 = param_1[5];
      uVar6 = param_1[6];
      param_3 = lVar3 - param_3;
      if (uVar6 < param_3) {
        uVar6 = uVar6 + (uVar6 >> 1);
        uVar7 = param_3;
        if (param_3 <= uVar6) {
          uVar7 = uVar6;
        }
        uVar6 = uVar7 << 1;
        if (uVar7 == 0xffffffffffffffff || (long)(uVar7 + 1) < 0 != SCARRY8(uVar7,1)) {
          uVar6 = 0xffffffffffffffff;
        }
        pvVar5 = operator_new__(uVar6);
        pvVar9 = (void *)param_1[7];
        if (pvVar9 == (void *)0x0) {
          param_1[7] = pvVar5;
        }
        else {
          memcpy(pvVar5,pvVar9,lVar3 << 1);
          param_1[7] = pvVar5;
          operator_delete__(pvVar9);
        }
        param_1[6] = uVar7;
      }
      param_1[5] = param_3;
      *(undefined4 *)(param_1 + 0xb) = param_4;
      return;
    }
    iVar4 = (**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,param_1[1]);
    if (iVar4 != (int)param_1[1]) break;
    uVar8 = param_1[3] * param_1[1];
    lVar3 = param_1[5];
    uVar7 = param_1[6];
    uVar6 = lVar3 + uVar8;
    if (uVar7 < uVar6) {
      uVar7 = uVar7 + (uVar7 >> 1);
      uVar1 = uVar6;
      if (uVar6 <= uVar7) {
        uVar1 = uVar7;
      }
      uVar7 = uVar1 << 1;
      if (uVar1 == 0xffffffffffffffff || (long)(uVar1 + 1) < 0 != SCARRY8(uVar1,1)) {
        uVar7 = 0xffffffffffffffff;
      }
      pvVar5 = operator_new__(uVar7);
      pvVar9 = (void *)param_1[7];
      if (pvVar9 == (void *)0x0) {
        param_1[7] = pvVar5;
      }
      else {
        memcpy(pvVar5,pvVar9,lVar3 << 1);
        param_1[7] = pvVar5;
        operator_delete__(pvVar9);
      }
      param_1[6] = uVar1;
    }
    param_1[5] = uVar6;
    lVar2 = 0;
    if (uVar8 != 0) {
      lVar2 = param_1[7] + lVar3 * 2;
    }
    iVar4 = (**(code **)(*(long *)*param_1 + 0x38))((long *)*param_1,lVar2);
    uVar6 = param_1[3] * (long)iVar4;
    if (uVar8 <= uVar6 && uVar6 - uVar8 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../rtc_base/buffer.h",0x152,"written_elements <= max_elements",&DAT_001fb920,
                   uVar6,uVar8);
    }
    uVar6 = uVar6 + lVar3;
    param_1[5] = uVar6;
  }
  memset(param_2,0,param_3 << 1);
  return;
}


// ===== 00d0d9fc  FUN_00d0d9fc =====

void FUN_00d0d9fc(undefined8 *param_1,void *param_2,long param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar7 = param_1[8];
  if (param_3 != 0) {
    uVar4 = param_1[9];
    uVar6 = uVar7 + param_3;
    if (uVar4 < uVar6) {
      uVar4 = uVar4 + (uVar4 >> 1);
      uVar1 = uVar6;
      if (uVar6 <= uVar4) {
        uVar1 = uVar4;
      }
      uVar4 = uVar1 << 1;
      if (uVar1 == 0xffffffffffffffff || (long)(uVar1 + 1) < 0 != SCARRY8(uVar1,1)) {
        uVar4 = 0xffffffffffffffff;
      }
      pvVar3 = operator_new__(uVar4);
      pvVar5 = (void *)param_1[10];
      if (pvVar5 == (void *)0x0) {
        param_1[10] = pvVar3;
      }
      else {
        memcpy(pvVar3,pvVar5,uVar7 << 1);
        param_1[10] = pvVar3;
        operator_delete__(pvVar5);
        uVar7 = param_1[8];
      }
      param_1[9] = uVar1;
    }
    memcpy((void *)(param_1[10] + uVar7 * 2),param_2,param_3 << 1);
    param_1[8] = uVar6;
    uVar7 = uVar6;
  }
  uVar6 = param_1[2] * param_1[4];
  while (uVar6 <= uVar7) {
    (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1[10],param_1[2],param_5,param_6)
    ;
    (**(code **)(*(long *)*param_1 + 0x20))((long *)*param_1,*(undefined4 *)(param_1 + 0xb),param_4)
    ;
    (**(code **)(*(long *)*param_1 + 0x28))();
    memmove((void *)param_1[10],(void *)((long)param_1[10] + uVar6 * 2),(param_1[8] - uVar6) * 2);
    lVar2 = param_1[8];
    uVar4 = param_1[9];
    uVar7 = lVar2 - uVar6;
    if (uVar4 < uVar7) {
      uVar4 = uVar4 + (uVar4 >> 1);
      uVar1 = uVar7;
      if (uVar7 <= uVar4) {
        uVar1 = uVar4;
      }
      uVar4 = uVar1 << 1;
      if (uVar1 == 0xffffffffffffffff || (long)(uVar1 + 1) < 0 != SCARRY8(uVar1,1)) {
        uVar4 = 0xffffffffffffffff;
      }
      pvVar3 = operator_new__(uVar4);
      pvVar5 = (void *)param_1[10];
      if (pvVar5 == (void *)0x0) {
        param_1[10] = pvVar3;
      }
      else {
        memcpy(pvVar3,pvVar5,lVar2 << 1);
        param_1[10] = pvVar3;
        operator_delete__(pvVar5);
      }
      param_1[9] = uVar1;
    }
    param_1[8] = uVar7;
  }
  return;
}


// ===== 00d0dbc8  FUN_00d0dbc8 =====

void FUN_00d0dbc8(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_4c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  *param_1 = &PTR_FUN_00d51418;
  lVar2 = *param_2;
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    FUN_00d0f740(1,lVar2 + 8);
  }
  lVar4 = param_2[4];
  lVar2 = param_2[3];
  lVar6 = param_2[1];
  param_1[3] = param_2[2];
  param_1[2] = lVar6;
  param_1[5] = lVar4;
  param_1[4] = lVar2;
  uVar5 = param_3[1];
  uVar3 = *param_3;
  uVar8 = param_3[3];
  uVar7 = param_3[2];
  param_1[0xb] = 0;
  *(undefined2 *)((long)param_1 + 0x7c) = 0;
  param_1[10] = uVar8;
  param_1[9] = uVar7;
  param_1[8] = uVar5;
  param_1[7] = uVar3;
  uVar3 = *param_4;
  *param_4 = 0;
  param_1[0x18] = 0;
  param_1[0x10] = uVar3;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  uVar1 = gettid();
  __android_log_print(3,"OpenSLESRecorder","ctor[tid=%d]",uVar1);
  FUN_00d0c428(&local_4c,param_1[8],*(undefined4 *)(param_1 + 7),0x10);
  param_1[0xd] = CONCAT44(uStack_40,uStack_44);
  param_1[0xc] = local_4c;
  *(undefined8 *)((long)param_1 + 0x74) = uStack_38;
  *(ulong *)((long)param_1 + 0x6c) = CONCAT44(uStack_3c,uStack_40);
  return;
}


// ===== 00d0dcb4  FUN_00d0dcb4 =====

void FUN_00d0dcb4(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  long lVar5;
  long *plVar6;
  
  *param_1 = (long)&PTR_FUN_00d51418;
  uVar2 = gettid();
  __android_log_print(3,"OpenSLESRecorder","dtor[tid=%d]",uVar2);
  (**(code **)(*param_1 + 0x18))(param_1);
  __android_log_print(3,"OpenSLESRecorder","DestroyAudioRecorder");
  if (param_1[0x12] != 0) {
    (**(code **)(*(long *)param_1[0x14] + 0x18))((long *)param_1[0x14],0,0);
    if ((long *)param_1[0x12] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x12] + 0x30))();
      param_1[0x12] = 0;
    }
    *(undefined1 *)((long)param_1 + 0x7c) = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
  }
  lVar5 = param_1[0x16];
  param_1[0x11] = 0;
  param_1[0x16] = 0;
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + -8);
    lVar5 = *plVar6 << 3;
    lVar1 = *plVar6;
    while (lVar1 != 0) {
      pvVar4 = *(void **)((long)plVar6 + lVar5);
      *(undefined8 *)((long)plVar6 + lVar5) = 0;
      if (pvVar4 != (void *)0x0) {
        operator_delete__(pvVar4);
      }
      lVar5 = lVar5 + -8;
      lVar1 = lVar5;
    }
    operator_delete__(plVar6);
  }
  pvVar4 = (void *)param_1[0x15];
  param_1[0x15] = 0;
  if (pvVar4 != (void *)0x0) {
    FUN_00d0d788(pvVar4);
    operator_delete(pvVar4);
  }
  if ((long *)param_1[0x12] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x12] + 0x30))();
    param_1[0x12] = 0;
  }
  pvVar4 = (void *)param_1[0x10];
  if ((pvVar4 != (void *)0x0) && (iVar3 = FUN_00d0f7a0(0xffffffff,pvVar4), iVar3 == 1)) {
    if (*(long **)((long)pvVar4 + 8) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar4 + 8) + 0x30))();
    }
    operator_delete(pvVar4);
  }
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (iVar3 = FUN_00d0f7a0(0xffffffff,plVar6 + 1), iVar3 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x00d0de58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 8))(plVar6);
    return;
  }
  return;
}


// ===== 00d0de70  FUN_00d0de70 =====

void FUN_00d0de70(void *param_1)

{
  FUN_00d0dcb4();
  operator_delete(param_1);
  return;
}


// ===== 00d0dea0  FUN_00d0dea0 =====

undefined8 FUN_00d0dea0(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = gettid();
  __android_log_print(3,"OpenSLESRecorder","Init[tid=%d]",uVar1);
  if (*(long *)(param_1 + 0x40) == 2) {
    __android_log_print(3,"OpenSLESRecorder","Stereo mode is enabled");
  }
  return 0;
}


// ===== 00d0df0c  FUN_00d0df0c =====

undefined8 FUN_00d0df0c(long *param_1)

{
  undefined4 uVar1;
  
  uVar1 = gettid();
  __android_log_print(3,"OpenSLESRecorder","Terminate[tid=%d]",uVar1);
  (**(code **)(*param_1 + 0x38))(param_1);
  return 0;
}


// ===== 00d0df64  FUN_00d0df64 =====

int FUN_00d0df64(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  uVar1 = gettid();
  __android_log_print(3,"OpenSLESRecorder","InitRecording[tid=%d]",uVar1);
  uVar4 = FUN_00d0dfec(param_1);
  if ((uVar4 & 1) == 0) {
    __android_log_print(6,"OpenSLESRecorder","Failed to obtain SL Engine interface");
    iVar3 = -1;
  }
  else {
    uVar2 = FUN_00d0e0c0(param_1);
    *(undefined4 *)(param_1 + 0xb8) = 0;
    iVar3 = (uVar2 & 1) - 1;
    *(char *)(param_1 + 0x7c) = (char)(uVar2 & 1);
  }
  return iVar3;
}


// ===== 00d0dfec  FUN_00d0dfec =====

undefined8 FUN_00d0dfec(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  
  __android_log_print(3,"OpenSLESRecorder","ObtainEngineInterface");
  if (*(long *)(param_1 + 0x88) == 0) {
    plVar3 = (long *)FUN_00d0c620(*(undefined8 *)(param_1 + 0x80));
    if (plVar3 == (long *)0x0) {
      __android_log_print(6,"OpenSLESRecorder","Failed to access the global OpenSL engine");
    }
    else {
      iVar1 = (**(code **)(*plVar3 + 0x18))
                        (plVar3,*(undefined8 *)PTR_SL_IID_ENGINE_00d51ef0,(long *)(param_1 + 0x88));
      if (iVar1 == 0) goto LAB_00d0e024;
      uVar2 = FUN_00d0c400(iVar1);
      __android_log_print(6,"OpenSLESRecorder","%s:%d %s failed: %s",
                          "../../sdk/android/src/jni/audio_device/opensles_recorder.cc",0xfb,
                          "(*engine_object) ->GetInterface(engine_object, SL_IID_ENGINE, &engine_)",
                          uVar2);
    }
    uVar2 = 0;
  }
  else {
LAB_00d0e024:
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 00d0e0c0  FUN_00d0e0c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00d0e0c0(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined4 local_94;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  long lStack_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  __android_log_print(3,"OpenSLESRecorder","CreateAudioRecorder");
  plVar6 = (long *)(param_1 + 0x90);
  if (*plVar6 != 0) {
    uVar2 = 1;
    goto LAB_00d0e330;
  }
  local_60 = &local_50;
  local_40 = 0;
  local_78 = &local_68;
  lStack_70 = param_1 + 0x60;
  uStack_48 = _UNK_001f4c78;
  local_50 = _DAT_001f4c70;
  local_58 = 0;
  local_68 = DAT_001f5d50;
  uVar5 = *(undefined8 *)PTR_SL_IID_ANDROIDSIMPLEBUFFERQUEUE_00d51ee8;
  uVar7 = *(undefined8 *)PTR_SL_IID_ANDROIDCONFIGURATION_00d51f00;
  local_88 = uVar5;
  uStack_80 = uVar7;
  iVar1 = (**(code **)(**(long **)(param_1 + 0x88) + 0x18))
                    (*(long **)(param_1 + 0x88),plVar6,&local_60,&local_78,2,&local_88,&DAT_0025ae30
                    );
  if (iVar1 == 0) {
    local_90 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
    iVar1 = (**(code **)(*(long *)*plVar6 + 0x18))((long *)*plVar6,uVar7,&local_90);
    if (iVar1 != 0) {
      uVar5 = FUN_00d0c400(iVar1);
      pcVar4 = 
      "(recorder_object_->GetInterface(recorder_object_.Get(), SL_IID_ANDROIDCONFIGURATION, &recorder_config))"
      ;
      uVar7 = 0x124;
      goto LAB_00d0e328;
    }
    local_94 = 4;
    iVar1 = (**(code **)*local_90)(local_90,"androidRecordingPreset",&local_94,4);
    if (iVar1 != 0) {
      uVar5 = FUN_00d0c400(iVar1);
      pcVar4 = 
      "((*recorder_config) ->SetConfiguration(recorder_config, SL_ANDROID_KEY_RECORDING_PRESET, &stream_type, sizeof(SLint32)))"
      ;
      uVar7 = 0x130;
      goto LAB_00d0e328;
    }
    iVar1 = (*(code *)**(undefined8 **)*plVar6)((undefined8 *)*plVar6,0);
    if (iVar1 != 0) {
      uVar5 = FUN_00d0c400(iVar1);
      pcVar4 = "(recorder_object_->Realize(recorder_object_.Get(), SL_BOOLEAN_FALSE))";
      uVar7 = 0x136;
      goto LAB_00d0e328;
    }
    iVar1 = (**(code **)(**(long **)(param_1 + 0x90) + 0x18))
                      (*(long **)(param_1 + 0x90),*(undefined8 *)PTR_SL_IID_RECORD_00d51f10,
                       param_1 + 0x98);
    if (iVar1 != 0) {
      uVar5 = FUN_00d0c400(iVar1);
      pcVar4 = 
      "(recorder_object_->GetInterface( recorder_object_.Get(), SL_IID_RECORD, &recorder_))";
      uVar7 = 0x13c;
      goto LAB_00d0e328;
    }
    (**(code **)(**(long **)(param_1 + 0x90) + 0x18))
              (*(long **)(param_1 + 0x90),uVar5,param_1 + 0xa0);
    uVar3 = FUN_00d0eb78();
    if ((uVar3 & 1) == 0) {
      (**(code **)(**(long **)(param_1 + 0xa0) + 0x18))
                (*(long **)(param_1 + 0xa0),FUN_00d0ec48,param_1);
      uVar2 = FUN_00d0ebe0();
      uVar2 = uVar2 ^ 1;
      goto LAB_00d0e330;
    }
  }
  else {
    uVar5 = FUN_00d0c400(iVar1);
    pcVar4 = 
    "(*engine_)->CreateAudioRecorder( engine_, recorder_object_.Receive(), &audio_source, &audio_sink, std::size(interface_id), interface_id, interface_required)"
    ;
    uVar7 = 0x11c;
LAB_00d0e328:
    __android_log_print(6,"OpenSLESRecorder","%s:%d %s failed: %s",
                        "../../sdk/android/src/jni/audio_device/opensles_recorder.cc",uVar7,pcVar4,
                        uVar5);
  }
  uVar2 = 0;
LAB_00d0e330:
  return uVar2 & 1;
}


// ===== 00d0e394  FUN_00d0e394 =====

undefined1 FUN_00d0e394(long param_1)

{
  return *(undefined1 *)(param_1 + 0x7c);
}


// ===== 00d0e3a0  FUN_00d0e3a0 =====

undefined8 FUN_00d0e3a0(long param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 local_28;
  
  uVar4 = gettid();
  __android_log_print(3,"OpenSLESRecorder","StartRecording[tid=%d]",uVar4);
  if (*(long *)(param_1 + 0xa8) != 0) {
    FUN_00d0d7e4();
  }
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  iVar5 = (**(code **)(**(long **)(param_1 + 0xa0) + 0x10))(*(long **)(param_1 + 0xa0),&local_28);
  if (iVar5 != 0) {
    uVar7 = FUN_00d0c400(iVar5);
    __android_log_print(6,"OpenSLESRecorder","GetState failed: %s",uVar7);
  }
  if (0 < 2 - (int)local_28) {
    uVar8 = *(uint *)(param_1 + 0xb8);
    iVar5 = (int)local_28 + -2;
    do {
      if (*(ulong *)(*(long *)(param_1 + 0xb0) + -8) <= (ulong)(long)(int)uVar8) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/unique_ptr.h:578: libc++ Hardening assertion __checker_.__in_bounds<deleter_type>(std::__to_address(__ptr_), __i) failed: unique_ptr<T[]>::operator[](index): index out of range\n"
                  );
      }
      iVar6 = (**(code **)**(undefined8 **)(param_1 + 0xa0))
                        (*(undefined8 **)(param_1 + 0xa0),
                         *(undefined8 *)(*(long *)(param_1 + 0xb0) + (long)(int)uVar8 * 8),
                         *(int *)(param_1 + 0x48) * *(int *)(param_1 + 0x40) * 2);
      if (iVar6 != 0) {
        uVar7 = FUN_00d0c400(iVar6);
        __android_log_print(6,"OpenSLESRecorder","Enqueue failed: %s",uVar7);
        *(undefined1 *)(param_1 + 0x7d) = 0;
        return 0xffffffff;
      }
      uVar1 = *(int *)(param_1 + 0xb8) + 1;
      uVar2 = uVar1 & 1;
      uVar8 = -uVar2;
      if (-1 < (int)uVar1) {
        uVar8 = uVar2;
      }
      bVar3 = iVar5 != -1;
      iVar5 = iVar5 + 1;
      *(uint *)(param_1 + 0xb8) = uVar8;
    } while (bVar3);
  }
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  iVar5 = (**(code **)(**(long **)(param_1 + 0xa0) + 0x10))(*(long **)(param_1 + 0xa0),&local_28);
  if (iVar5 != 0) {
    uVar7 = FUN_00d0c400(iVar5);
    __android_log_print(6,"OpenSLESRecorder","GetState failed: %s",uVar7);
  }
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  iVar5 = (**(code **)(**(long **)(param_1 + 0xa0) + 0x10))(*(long **)(param_1 + 0xa0),&local_28);
  if (iVar5 != 0) {
    uVar7 = FUN_00d0c400(iVar5);
    __android_log_print(6,"OpenSLESRecorder","GetState failed: %s",uVar7);
  }
  __android_log_print(3,"OpenSLESRecorder","state.count:%d state.index:%d",
                      (ulong)local_28 & 0xffffffff,local_28._4_4_);
  uVar7 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  *(undefined8 *)(param_1 + 0xc0) = uVar7;
  iVar5 = (**(code **)**(undefined8 **)(param_1 + 0x98))(*(undefined8 **)(param_1 + 0x98),3);
  if (iVar5 == 0) {
    local_28 = (undefined1 *)CONCAT44(local_28._4_4_,0xaaaaaaaa);
    iVar5 = (**(code **)(**(long **)(param_1 + 0x98) + 8))(*(long **)(param_1 + 0x98),&local_28);
    if (iVar5 != 0) {
      uVar7 = FUN_00d0c400(iVar5);
      __android_log_print(6,"OpenSLESRecorder","GetRecordState failed: %s",uVar7);
    }
    uVar7 = 0;
    *(bool *)(param_1 + 0x7d) = (int)local_28 == 3;
  }
  else {
    uVar7 = FUN_00d0c400(iVar5);
    __android_log_print(6,"OpenSLESRecorder","%s:%d %s failed: %s",
                        "../../sdk/android/src/jni/audio_device/opensles_recorder.cc",0x9c,
                        "(*recorder_)->SetRecordState(recorder_, SL_RECORDSTATE_RECORDING)",uVar7);
    uVar7 = 0xffffffff;
  }
  return uVar7;
}


// ===== 00d0e65c  FUN_00d0e65c =====

undefined8 FUN_00d0e65c(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  uVar1 = gettid();
  __android_log_print(3,"OpenSLESRecorder","StopRecording[tid=%d]",uVar1);
  if ((*(char *)(param_1 + 0x7c) == '\x01') && (*(char *)(param_1 + 0x7d) == '\x01')) {
    puVar3 = *(undefined8 **)(param_1 + 0x98);
    iVar2 = (**(code **)*puVar3)(puVar3,1);
    if (iVar2 == 0) {
      iVar2 = (**(code **)(**(long **)(param_1 + 0xa0) + 8))();
      if (iVar2 == 0) {
        *(undefined1 *)(param_1 + 0x7d) = 0;
        __android_log_print(3,"OpenSLESRecorder","DestroyAudioRecorder");
        if (*(long *)(param_1 + 0x90) != 0) {
          (**(code **)(**(long **)(param_1 + 0xa0) + 0x18))(*(long **)(param_1 + 0xa0),0,0);
          if (*(long **)(param_1 + 0x90) != (long *)0x0) {
            (**(code **)(**(long **)(param_1 + 0x90) + 0x30))();
            *(undefined8 *)(param_1 + 0x90) = 0;
          }
          *(undefined1 *)(param_1 + 0x7c) = 0;
          *(undefined8 *)(param_1 + 0x98) = 0;
          *(undefined8 *)(param_1 + 0xa0) = 0;
          return 0;
        }
        goto LAB_00d0e7b4;
      }
      uVar4 = FUN_00d0c400(iVar2);
      pcVar6 = "(*simple_buffer_queue_)->Clear(simple_buffer_queue_)";
      uVar5 = 0xb0;
    }
    else {
      uVar4 = FUN_00d0c400(iVar2);
      pcVar6 = "(*recorder_)->SetRecordState(recorder_, SL_RECORDSTATE_STOPPED)";
      uVar5 = 0xac;
    }
    __android_log_print(6,"OpenSLESRecorder","%s:%d %s failed: %s",
                        "../../sdk/android/src/jni/audio_device/opensles_recorder.cc",uVar5,pcVar6,
                        uVar4);
    uVar4 = 0xffffffff;
  }
  else {
LAB_00d0e7b4:
    uVar4 = 0;
  }
  return uVar4;
}


// ===== 00d0e7c8  FUN_00d0e7c8 =====

undefined1 FUN_00d0e7c8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x7d);
}


// ===== 00d0e7d4  FUN_00d0e7d4 =====

void FUN_00d0e7d4(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  __android_log_print(3,"OpenSLESRecorder","AttachAudioBuffer");
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x38);
    *(long *)(param_1 + 0x58) = param_2;
    __android_log_print(3,"OpenSLESRecorder","SetRecordingSampleRate(%d)",uVar1);
    FUN_0099b8a4(*(undefined8 *)(param_1 + 0x58),uVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    __android_log_print(3,"OpenSLESRecorder","SetRecordingChannels(%zu)",uVar2);
    FUN_0099b994(*(undefined8 *)(param_1 + 0x58),uVar2);
    FUN_00d0e8a0(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../sdk/android/src/jni/audio_device/opensles_recorder.cc",0xc6,"audio_buffer",
               &DAT_001f5fa0);
}


// ===== 00d0e8a0  FUN_00d0e8a0 =====

void FUN_00d0e8a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  long *plVar8;
  
  __android_log_print(3,"OpenSLESRecorder","AllocateDataBuffers");
  if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../sdk/android/src/jni/audio_device/opensles_recorder.cc",0x16a,
                 "audio_device_buffer_",&DAT_001f5fa0);
  }
  __android_log_print(3,"OpenSLESRecorder","frames per native buffer: %zu",
                      *(undefined8 *)(param_1 + 0x48));
  __android_log_print(3,"OpenSLESRecorder","frames per 10ms buffer: %zu",
                      *(undefined8 *)(param_1 + 0x50));
  __android_log_print(3,"OpenSLESRecorder","bytes per native buffer: %zu",
                      (*(ulong *)(param_1 + 0x40) & 0xfffffffffffffff) * 2 *
                      *(long *)(param_1 + 0x48));
  __android_log_print(3,"OpenSLESRecorder","native sample rate: %d",*(undefined4 *)(param_1 + 0x38))
  ;
  pvVar3 = operator_new(0x60);
  FUN_00d0d6e8(pvVar3,*(undefined8 *)(param_1 + 0x58));
  pvVar6 = *(void **)(param_1 + 0xa8);
  *(void **)(param_1 + 0xa8) = pvVar3;
  if (pvVar6 != (void *)0x0) {
    FUN_00d0d788(pvVar6);
    operator_delete(pvVar6);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  puVar4 = (undefined8 *)operator_new__(0x18);
  lVar7 = *(long *)(param_1 + 0xb0);
  *puVar4 = 2;
  puVar4[2] = 0;
  puVar4 = puVar4 + 1;
  *puVar4 = 0;
  *(undefined8 **)(param_1 + 0xb0) = puVar4;
  if (lVar7 != 0) {
    plVar8 = (long *)(lVar7 + -8);
    lVar7 = *plVar8 << 3;
    lVar5 = *plVar8;
    while (lVar5 != 0) {
      pvVar3 = *(void **)((long)plVar8 + lVar7);
      *(undefined8 *)((long)plVar8 + lVar7) = 0;
      if (pvVar3 != (void *)0x0) {
        operator_delete__(pvVar3);
      }
      lVar7 = lVar7 + -8;
      lVar5 = lVar7;
    }
    operator_delete__(plVar8);
    puVar4 = *(undefined8 **)(param_1 + 0xb0);
  }
  lVar7 = (ulong)(uint)((int)uVar2 * (int)uVar1) << 0x20;
  if (lVar7 == -1 || lVar7 + 1 < 0 != SCARRY8(lVar7,1)) {
    lVar7 = -1;
  }
  if (puVar4[-1] != 0) {
    pvVar3 = operator_new__(lVar7 >> 0x1f);
    pvVar6 = (void *)*puVar4;
    *puVar4 = pvVar3;
    if (pvVar6 != (void *)0x0) {
      operator_delete__(pvVar6);
    }
    lVar5 = *(long *)(param_1 + 0xb0);
    if (1 < *(ulong *)(lVar5 + -8)) {
      pvVar3 = operator_new__(lVar7 >> 0x1f);
      pvVar6 = *(void **)(lVar5 + 8);
      *(void **)(lVar5 + 8) = pvVar3;
      if (pvVar6 != (void *)0x0) {
        operator_delete__(pvVar6);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/unique_ptr.h:578: libc++ Hardening assertion __checker_.__in_bounds<deleter_type>(std::__to_address(__ptr_), __i) failed: unique_ptr<T[]>::operator[](index): index out of range\n"
            );
}


// ===== 00d0eab0  FUN_00d0eab0 =====

undefined8 FUN_00d0eab0(void)

{
  return 0;
}


// ===== 00d0eabc  FUN_00d0eabc =====

undefined8 FUN_00d0eabc(void)

{
  return 0;
}


// ===== 00d0eac8  FUN_00d0eac8 =====

undefined8 FUN_00d0eac8(undefined8 param_1,uint param_2)

{
  __android_log_print(3,"OpenSLESRecorder","EnableBuiltInAEC(%d)",param_2 & 1);
  __android_log_print(6,"OpenSLESRecorder","Not implemented");
  return 0;
}


// ===== 00d0eb20  FUN_00d0eb20 =====

undefined8 FUN_00d0eb20(undefined8 param_1,uint param_2)

{
  __android_log_print(3,"OpenSLESRecorder","EnableBuiltInNS(%d)",param_2 & 1);
  __android_log_print(6,"OpenSLESRecorder","Not implemented");
  return 0;
}


// ===== 00d0eb78  FUN_00d0eb78 =====

bool FUN_00d0eb78(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00d0c400(param_1);
    __android_log_print(6,"OpenSLESRecorder","%s:%d %s failed: %s",
                        "../../sdk/android/src/jni/audio_device/opensles_recorder.cc",0x144,
                        "(recorder_object_->GetInterface( recorder_object_.Get(), SL_IID_ANDROIDSIMPLEBUFFERQUEUE, &simple_buffer_queue_))"
                        ,uVar1);
  }
  return param_1 != 0;
}


// ===== 00d0ebe0  FUN_00d0ebe0 =====

bool FUN_00d0ebe0(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00d0c400(param_1);
    __android_log_print(6,"OpenSLESRecorder","%s:%d %s failed: %s",
                        "../../sdk/android/src/jni/audio_device/opensles_recorder.cc",0x14c,
                        "((*simple_buffer_queue_) ->RegisterCallback(simple_buffer_queue_, SimpleBufferQueueCallback, this))"
                        ,uVar1);
  }
  return param_1 != 0;
}


// ===== 00d0ec48  FUN_00d0ec48 =====

void FUN_00d0ec48(undefined8 param_1,undefined8 param_2)

{
  FUN_00d0ec54(param_2);
  return;
}


// ===== 00d0ec54  FUN_00d0ec54 =====

void FUN_00d0ec54(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int local_24;
  
  local_24 = -0x55555556;
  iVar4 = (**(code **)(**(long **)(param_1 + 0x98) + 8))(*(long **)(param_1 + 0x98),&local_24);
  if (iVar4 != 0) {
    uVar5 = FUN_00d0c400(iVar4);
    __android_log_print(6,"OpenSLESRecorder","GetRecordState failed: %s",uVar5);
  }
  if (local_24 != 3) {
    __android_log_print(5,"OpenSLESRecorder","Buffer callback in non-recording state!");
    return;
  }
  lVar6 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  uVar7 = 0x7fffffffffffffff;
  if (((lVar6 == 0x7fffffffffffffff) ||
      (lVar8 = *(long *)(param_1 + 0xc0), lVar8 == -0x8000000000000000)) ||
     ((lVar6 != -0x8000000000000000 &&
      ((lVar8 != 0x7fffffffffffffff && (uVar7 = lVar6 - lVar8, 150000 < (long)uVar7)))))) {
    iVar4 = (int)(uVar7 / 1000);
    if (499 < uVar7 % 1000) {
      iVar4 = iVar4 + 1;
    }
    __android_log_print(5,"OpenSLESRecorder","Bad OpenSL ES record timing, dT=%u [ms]",iVar4);
  }
  *(long *)(param_1 + 0xc0) = lVar6;
  if ((ulong)(long)*(int *)(param_1 + 0xb8) < *(ulong *)(*(long *)(param_1 + 0xb0) + -8)) {
    lVar6 = *(long *)(param_1 + 0x40) * *(long *)(param_1 + 0x48);
    uVar5 = 0;
    if (lVar6 != 0) {
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0xb0) + (long)*(int *)(param_1 + 0xb8) * 8);
    }
    FUN_00d0d9fc(*(undefined8 *)(param_1 + 0xa8),uVar5,lVar6,0x19,0,0);
    if ((ulong)(long)*(int *)(param_1 + 0xb8) < *(ulong *)(*(long *)(param_1 + 0xb0) + -8)) {
      iVar4 = (**(code **)**(undefined8 **)(param_1 + 0xa0))
                        (*(undefined8 **)(param_1 + 0xa0),
                         *(undefined8 *)
                          (*(long *)(param_1 + 0xb0) + (long)*(int *)(param_1 + 0xb8) * 8),
                         *(int *)(param_1 + 0x48) * *(int *)(param_1 + 0x40) * 2);
      if (iVar4 != 0) {
        uVar5 = FUN_00d0c400(iVar4);
        __android_log_print(6,"OpenSLESRecorder","Enqueue failed: %s",uVar5);
        return;
      }
      uVar1 = *(int *)(param_1 + 0xb8) + 1;
      uVar2 = uVar1 & 1;
      uVar3 = -uVar2;
      if (-1 < (int)uVar1) {
        uVar3 = uVar2;
      }
      *(uint *)(param_1 + 0xb8) = uVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/unique_ptr.h:578: libc++ Hardening assertion __checker_.__in_bounds<deleter_type>(std::__to_address(__ptr_), __i) failed: unique_ptr<T[]>::operator[](index): index out of range\n"
            );
}


// ===== 00d0ee50  FUN_00d0ee50 =====

void * FUN_00d0ee50(undefined8 param_1,undefined8 param_2)

{
  void *pvVar1;
  undefined8 local_28;
  
  local_28 = param_2;
  pvVar1 = operator_new(0x10);
  FUN_00b23e68(pvVar1,param_1,&local_28);
  return pvVar1;
}


// ===== 00d0ee9c  FUN_00d0ee9c =====

void * FUN_00d0ee9c(undefined8 param_1,undefined8 param_2)

{
  void *pvVar1;
  undefined8 local_28;
  
  local_28 = param_2;
  pvVar1 = operator_new(0x40);
  FUN_00b22dcc(pvVar1,param_1,&local_28);
  return pvVar1;
}


// ===== 00d0eee8  FUN_00d0eee8 =====

undefined1  [16]
FUN_00d0eee8(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong *param_5)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  bVar2 = param_3 <= param_1;
  if (param_4 != param_2) {
    bVar2 = param_4 <= param_2;
  }
  if (bVar2) {
    if (param_4 == 0) {
      if (param_2 < param_3) {
        uVar3 = LZCOUNT(param_3);
        uVar6 = param_3 << (uVar3 & 0x3f);
        uVar5 = uVar6 >> 0x20;
        uVar11 = param_2 << (uVar3 & 0x3f) | (param_1 >> 1) >> ((ulong)~(uint)uVar3 & 0x3f);
        param_1 = param_1 << (uVar3 & 0x3f);
        uVar10 = 0;
        if (uVar5 != 0) {
          uVar10 = uVar11 / uVar5;
        }
        uVar7 = param_1 >> 0x20;
        param_1 = param_1 & 0xffffffff;
        uVar3 = uVar11 - uVar10 * uVar5;
        do {
          if ((uVar10 >> 0x20 == 0) &&
             (uVar12 = uVar10 * (uVar6 & 0xffffffff), uVar8 = uVar7 | uVar3 << 0x20,
             uVar12 < uVar8 || uVar12 - uVar8 == 0)) break;
          uVar3 = uVar3 + uVar5;
          uVar10 = uVar10 - 1;
        } while (uVar3 >> 0x20 == 0);
        uVar7 = (uVar7 | uVar11 << 0x20) - uVar10 * uVar6;
        uVar11 = 0;
        if (uVar5 != 0) {
          uVar11 = uVar7 / uVar5;
        }
        uVar3 = uVar7 - uVar11 * uVar5;
        do {
          if ((uVar11 >> 0x20 == 0) &&
             (uVar12 = uVar11 * (uVar6 & 0xffffffff), uVar8 = param_1 | uVar3 << 0x20,
             uVar12 < uVar8 || uVar12 - uVar8 == 0)) break;
          uVar3 = uVar3 + uVar5;
          uVar11 = uVar11 - 1;
        } while (uVar3 >> 0x20 == 0);
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        if (param_3 != 0) {
          uVar3 = param_2 / param_3;
        }
        uVar10 = LZCOUNT(param_3);
        uVar6 = param_3 << (uVar10 & 0x3f);
        uVar5 = uVar6 >> 0x20;
        uVar11 = param_2 - uVar3 * param_3 << (uVar10 & 0x3f) |
                 (param_1 >> 1) >> ((ulong)~(uint)uVar10 & 0x3f);
        param_1 = param_1 << (uVar10 & 0x3f);
        uVar10 = 0;
        if (uVar5 != 0) {
          uVar10 = uVar11 / uVar5;
        }
        uVar8 = param_1 >> 0x20;
        param_1 = param_1 & 0xffffffff;
        uVar7 = uVar11 - uVar10 * uVar5;
        do {
          if ((uVar10 >> 0x20 == 0) &&
             (uVar13 = uVar10 * (uVar6 & 0xffffffff), uVar12 = uVar8 | uVar7 << 0x20,
             uVar13 < uVar12 || uVar13 - uVar12 == 0)) break;
          uVar7 = uVar7 + uVar5;
          uVar10 = uVar10 - 1;
        } while (uVar7 >> 0x20 == 0);
        uVar7 = (uVar8 | uVar11 << 0x20) - uVar10 * uVar6;
        uVar11 = 0;
        if (uVar5 != 0) {
          uVar11 = uVar7 / uVar5;
        }
        uVar8 = uVar7 - uVar11 * uVar5;
        do {
          if ((uVar11 >> 0x20 == 0) &&
             (uVar13 = uVar11 * (uVar6 & 0xffffffff), uVar12 = param_1 | uVar8 << 0x20,
             uVar13 < uVar12 || uVar13 - uVar12 == 0)) break;
          uVar8 = uVar8 + uVar5;
          uVar11 = uVar11 - 1;
        } while (uVar8 >> 0x20 == 0);
      }
      lVar4 = uVar11 + (uVar10 << 0x20);
      if (param_5 != (ulong *)0x0) {
        *param_5 = (param_1 | uVar7 << 0x20) - uVar11 * uVar6 >> (LZCOUNT(param_3) & 0x3fU);
        param_5[1] = 0;
        auVar15._8_8_ = uVar3;
        auVar15._0_8_ = lVar4;
        return auVar15;
      }
      goto LAB_00d0efb8;
    }
    uVar1 = (int)LZCOUNT(param_4) - (int)LZCOUNT(param_2);
    uVar10 = (ulong)uVar1;
    uVar3 = 0;
    if (uVar10 != 0) {
      uVar3 = param_3 >> (-uVar10 & 0x3f);
    }
    uVar6 = param_3 << (uVar10 & 0x3f);
    uVar5 = 0;
    if ((long)(uVar10 - 0x40) < 0) {
      uVar6 = uVar3 | param_4 << (uVar10 & 0x3f);
      uVar5 = param_3 << (uVar10 & 0x3f);
    }
    lVar4 = 0;
    if (-1 < (int)uVar1) {
      iVar9 = uVar1 + 1;
      do {
        uVar3 = (long)(uVar6 + ~param_2 + (ulong)CARRY8(uVar5,~param_1)) >> 0x3f;
        lVar4 = lVar4 * 2 - uVar3;
        bVar2 = param_1 < (uVar3 & uVar5);
        param_1 = param_1 - (uVar3 & uVar5);
        param_2 = param_2 - ((uVar3 & uVar6) + (ulong)bVar2);
        iVar9 = iVar9 + -1;
        uVar5 = uVar5 >> 1 | uVar6 << 0x3f;
        uVar6 = uVar6 >> 1;
      } while (0 < iVar9);
    }
    if (param_5 != (ulong *)0x0) {
      *param_5 = param_1;
      param_5[1] = param_2;
    }
  }
  else {
    lVar4 = 0;
    if (param_5 != (ulong *)0x0) {
      *param_5 = param_1;
      param_5[1] = param_2;
      return ZEXT816(0);
    }
  }
  uVar3 = 0;
LAB_00d0efb8:
  auVar14._8_8_ = uVar3;
  auVar14._0_8_ = lVar4;
  return auVar14;
}


// ===== 00d0f14c  FUN_00d0f14c =====

void FUN_00d0f14c(void)

{
  FUN_00d0eee8();
  return;
}


// ===== 00d0f158  FUN_00d0f158 =====

undefined1  [16] FUN_00d0f158(void)

{
  undefined1 local_20 [16];
  
  FUN_00d0eee8();
  return local_20;
}


// ===== 00d0f180  __emutls_get_address =====

void * __emutls_get_address(size_t *param_1)

{
  undefined8 *__ptr;
  void *pvVar1;
  void *__s;
  ulong uVar2;
  size_t __n;
  size_t sVar3;
  long lVar4;
  
  sVar3 = param_1[2];
  if (sVar3 == 0) {
    pthread_once((pthread_once_t *)&DAT_00dbbaf8,FUN_00d0f378);
    pthread_mutex_lock((pthread_mutex_t *)&DAT_00dbbb08);
    sVar3 = param_1[2];
    if (sVar3 == 0) {
      sVar3 = DAT_00dbbb00 + 1;
      DAT_00dbbb00 = sVar3;
      param_1[2] = sVar3;
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_00dbbb08);
    __ptr = (undefined8 *)pthread_getspecific(DAT_00dbbaf4);
    if (__ptr != (undefined8 *)0x0) goto LAB_00d0f1b4;
LAB_00d0f260:
    lVar4 = (sVar3 + 0x11 & 0xfffffffffffffff0) - 2;
    __ptr = (undefined8 *)malloc(lVar4 * 8 + 0x10);
    if (__ptr == (undefined8 *)0x0) goto LAB_00d0f33c;
    memset(__ptr + 2,0,lVar4 * 8);
    *__ptr = 1;
LAB_00d0f298:
    __ptr[1] = lVar4;
    pthread_setspecific(DAT_00dbbaf4,__ptr);
  }
  else {
    __ptr = (undefined8 *)pthread_getspecific(DAT_00dbbaf4);
    if (__ptr == (undefined8 *)0x0) goto LAB_00d0f260;
LAB_00d0f1b4:
    uVar2 = __ptr[1];
    if (uVar2 < sVar3) {
      lVar4 = (sVar3 + 0x11 & 0xfffffffffffffff0) - 2;
      __ptr = (undefined8 *)realloc(__ptr,lVar4 * 8 + 0x10);
      if (__ptr == (undefined8 *)0x0) goto LAB_00d0f33c;
      memset(__ptr + uVar2 + 2,0,(lVar4 - uVar2) * 8);
      goto LAB_00d0f298;
    }
  }
  pvVar1 = (void *)__ptr[sVar3 + 1];
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
  uVar2 = param_1[1];
  if (uVar2 < 9) {
    uVar2 = 8;
  }
  if ((uVar2 & uVar2 - 1) == 0) {
    __n = *param_1;
    pvVar1 = malloc(uVar2 + 7 + __n);
    if (pvVar1 != (void *)0x0) {
      __s = (void *)((long)pvVar1 + uVar2 + 7 & -uVar2);
      *(void **)((long)__s + -8) = pvVar1;
      if ((void *)param_1[3] == (void *)0x0) {
        memset(__s,0,__n);
      }
      else {
        memcpy(__s,(void *)param_1[3],__n);
      }
      __ptr[sVar3 + 1] = __s;
      return __s;
    }
  }
LAB_00d0f33c:
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00d0f340  FUN_00d0f340 =====

ulong FUN_00d0f340(ulong param_1)

{
  uint uVar1;
  
  if (DAT_00dbbaf0 == '\x01') {
    uVar1 = pthread_key_delete(DAT_00dbbaf4);
    param_1 = (ulong)uVar1;
    DAT_00dbbaf0 = '\0';
  }
  return param_1;
}


// ===== 00d0f378  FUN_00d0f378 =====

void FUN_00d0f378(void)

{
  int iVar1;
  
  iVar1 = pthread_key_create(&DAT_00dbbaf4,FUN_00d0f3b4);
  if (iVar1 == 0) {
    DAT_00dbbaf0 = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00d0f3b4  FUN_00d0f3b4 =====

long * FUN_00d0f3b4(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*param_1 != 0) {
    *param_1 = *param_1 + -1;
    uVar1 = pthread_setspecific(DAT_00dbbaf4,param_1);
    return (long *)(ulong)uVar1;
  }
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      if (param_1[uVar3 + 2] != 0) {
        free(*(void **)(param_1[uVar3 + 2] + -8));
        uVar2 = param_1[1];
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  free(param_1);
  return param_1;
}


// ===== 00d0f440  FUN_00d0f440 =====

char FUN_00d0f440(char param_1,char param_2,char *param_3)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  
  if (DAT_00dbbb30 != '\0') {
    cVar3 = *param_3;
    if (cVar3 == param_1) {
      *param_3 = param_2;
    }
    return cVar3;
  }
  do {
    cVar3 = *param_3;
    if (*param_3 != param_1) {
      return cVar3;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_3,0x10);
    if (bVar2) {
      *param_3 = param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return cVar3;
}


// ===== 00d0f474  _INIT_19 =====

void _INIT_19(void)

{
  byte extraout_var;
  
  getauxval(0x10);
  DAT_00dbbb30 = extraout_var & 1;
  return;
}


// ===== 00d0f4a0  FUN_00d0f4a0 =====

int FUN_00d0f4a0(int param_1,int param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  if (DAT_00dbbb30 != '\0') {
    iVar3 = *param_3;
    if (iVar3 == param_1) {
      *param_3 = param_2;
    }
    return iVar3;
  }
  do {
    iVar3 = *param_3;
    if (*param_3 != param_1) {
      return iVar3;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_3,0x10);
    if (bVar2) {
      *param_3 = param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return iVar3;
}


// ===== 00d0f4e0  FUN_00d0f4e0 =====

int FUN_00d0f4e0(int param_1,int param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  if (DAT_00dbbb30 != '\0') {
    iVar3 = *param_3;
    if (iVar3 == param_1) {
      *param_3 = param_2;
    }
    return iVar3;
  }
  do {
    iVar3 = *param_3;
    if (*param_3 != param_1) {
      return iVar3;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_3,0x10);
    if (bVar2) {
      *param_3 = param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return iVar3;
}


// ===== 00d0f520  FUN_00d0f520 =====

int FUN_00d0f520(int param_1,int param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  if (DAT_00dbbb30 != '\0') {
    iVar3 = *param_3;
    if (iVar3 == param_1) {
      *param_3 = param_2;
    }
    return iVar3;
  }
  do {
    iVar3 = *param_3;
    if (*param_3 != param_1) {
      return iVar3;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_3,0x10);
    if (bVar2) {
      *param_3 = param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return iVar3;
}


// ===== 00d0f560  FUN_00d0f560 =====

long FUN_00d0f560(long param_1,long param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_00dbbb30 != '\0') {
    lVar3 = *param_3;
    if (lVar3 == param_1) {
      *param_3 = param_2;
    }
    return lVar3;
  }
  do {
    lVar3 = *param_3;
    if (lVar3 != param_1) {
      return lVar3;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_3,0x10);
    if (bVar2) {
      *param_3 = param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return lVar3;
}


// ===== 00d0f5a0  FUN_00d0f5a0 =====

long FUN_00d0f5a0(long param_1,long param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_00dbbb30 != '\0') {
    lVar3 = *param_3;
    if (lVar3 == param_1) {
      *param_3 = param_2;
    }
    return lVar3;
  }
  do {
    lVar3 = *param_3;
    if (lVar3 != param_1) {
      return lVar3;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_3,0x10);
    if (bVar2) {
      *param_3 = param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return lVar3;
}


// ===== 00d0f5e0  FUN_00d0f5e0 =====

long FUN_00d0f5e0(long param_1,long param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_00dbbb30 != '\0') {
    lVar3 = *param_3;
    if (lVar3 == param_1) {
      *param_3 = param_2;
    }
    return lVar3;
  }
  do {
    lVar3 = *param_3;
    if (lVar3 != param_1) {
      return lVar3;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_3,0x10);
    if (bVar2) {
      *param_3 = param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return lVar3;
}


// ===== 00d0f620  FUN_00d0f620 =====

undefined1 FUN_00d0f620(undefined1 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  
  if (DAT_00dbbb30 == '\0') {
    do {
      uVar1 = *param_2;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar3) {
        *param_2 = param_1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    return uVar1;
  }
  LOAcquire();
  uVar1 = *param_2;
  *param_2 = param_1;
  return uVar1;
}


// ===== 00d0f650  FUN_00d0f650 =====

undefined1 FUN_00d0f650(undefined1 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  
  if (DAT_00dbbb30 == '\0') {
    do {
      uVar1 = *param_2;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar3) {
        *param_2 = param_1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    return uVar1;
  }
  LOAcquire();
  uVar1 = *param_2;
  *param_2 = param_1;
  LORelease();
  return uVar1;
}


// ===== 00d0f680  FUN_00d0f680 =====

undefined4 FUN_00d0f680(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  
  if (DAT_00dbbb30 == '\0') {
    do {
      uVar3 = *param_2;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = param_1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return uVar3;
  }
  uVar3 = *param_2;
  *param_2 = param_1;
  LORelease();
  return uVar3;
}


// ===== 00d0f6b0  FUN_00d0f6b0 =====

undefined4 FUN_00d0f6b0(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  
  if (DAT_00dbbb30 == '\0') {
    do {
      uVar3 = *param_2;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = param_1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return uVar3;
  }
  LOAcquire();
  uVar3 = *param_2;
  *param_2 = param_1;
  LORelease();
  return uVar3;
}


// ===== 00d0f6e0  FUN_00d0f6e0 =====

undefined8 FUN_00d0f6e0(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  
  if (DAT_00dbbb30 == '\0') {
    do {
      uVar3 = *param_2;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = param_1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return uVar3;
  }
  uVar3 = *param_2;
  *param_2 = param_1;
  return uVar3;
}


// ===== 00d0f710  FUN_00d0f710 =====

undefined8 FUN_00d0f710(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  
  if (DAT_00dbbb30 == '\0') {
    do {
      uVar3 = *param_2;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = param_1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return uVar3;
  }
  LOAcquire();
  uVar3 = *param_2;
  *param_2 = param_1;
  LORelease();
  return uVar3;
}


// ===== 00d0f740  FUN_00d0f740 =====

int FUN_00d0f740(int param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  if (DAT_00dbbb30 == '\0') {
    do {
      iVar3 = *param_2;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = iVar3 + param_1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return iVar3;
  }
  iVar3 = *param_2;
  *param_2 = iVar3 + param_1;
  return iVar3;
}


// ===== 00d0f770  FUN_00d0f770 =====

int FUN_00d0f770(int param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  if (DAT_00dbbb30 == '\0') {
    do {
      iVar3 = *param_2;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = iVar3 + param_1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return iVar3;
  }
  iVar3 = *param_2;
  *param_2 = iVar3 + param_1;
  LORelease();
  return iVar3;
}


// ===== 00d0f7a0  FUN_00d0f7a0 =====

int FUN_00d0f7a0(int param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  if (DAT_00dbbb30 == '\0') {
    do {
      iVar3 = *param_2;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = iVar3 + param_1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return iVar3;
  }
  LOAcquire();
  iVar3 = *param_2;
  *param_2 = iVar3 + param_1;
  LORelease();
  return iVar3;
}


// ===== 00d0f7d0  FUN_00d0f7d0 =====

long FUN_00d0f7d0(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_00dbbb30 == '\0') {
    do {
      lVar3 = *param_2;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = lVar3 + param_1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return lVar3;
  }
  lVar3 = *param_2;
  *param_2 = lVar3 + param_1;
  return lVar3;
}


// ===== 00d0f800  FUN_00d0f800 =====

long FUN_00d0f800(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_00dbbb30 == '\0') {
    do {
      lVar3 = *param_2;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = lVar3 + param_1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return lVar3;
  }
  lVar3 = *param_2;
  *param_2 = lVar3 + param_1;
  LORelease();
  return lVar3;
}


// ===== 00d0f830  FUN_00d0f830 =====

uint FUN_00d0f830(uint param_1,uint *param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  
  if (DAT_00dbbb30 == '\0') {
    do {
      uVar3 = *param_2;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = uVar3 | param_1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return uVar3;
  }
  LOAcquire();
  uVar3 = *param_2;
  *param_2 = uVar3 | param_1;
  LORelease();
  return uVar3;
}


// ===== 00d0f860  FUN_00d0f860 =====

undefined8 FUN_00d0f860(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_4f0 [624];
  undefined1 auStack_280 [528];
  undefined8 local_70;
  undefined1 auStack_68 [24];
  code *local_50;
  
  FUN_00d13a78(auStack_280);
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00d0fc94(auStack_4f0,auStack_280);
  iVar1 = FUN_00d0fe80(auStack_4f0);
  while( true ) {
    if (iVar1 == 0) {
      return 5;
    }
    if ((iVar1 < 0) || (iVar1 = FUN_00d0fe90(auStack_4f0,auStack_68), iVar1 != 0)) break;
    if ((local_50 != (code *)0x0) &&
       (iVar1 = (*local_50)(1,1,*param_1,param_1,auStack_4f0), iVar1 != 8)) {
      if (iVar1 != 6) {
        return 3;
      }
      FUN_00d0fd3c(auStack_4f0,0xfffffffe,&local_70);
      param_1[3] = local_70;
      uVar2 = FUN_00d0f938(auStack_280,auStack_4f0,param_1);
      return uVar2;
    }
    iVar1 = FUN_00d0fe80(auStack_4f0);
  }
  return 3;
}


// ===== 00d0f938  FUN_00d0f938 =====

undefined8 FUN_00d0f938(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  FILE *__stream;
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_80 [24];
  code *local_68;
  long local_38;
  
  FUN_00d0fc94(param_2,param_1);
  iVar1 = FUN_00d0fe80(param_2);
  while( true ) {
    if (iVar1 == 0) {
      return 5;
    }
    if (iVar1 < 0) break;
    FUN_00d0fd3c(param_2,0xfffffffe,&local_38);
    iVar1 = FUN_00d0fe90(param_2,auStack_80);
    if (iVar1 != 0) {
      return 2;
    }
    if (local_68 != (code *)0x0) {
      uVar2 = 6;
      if (local_38 != param_3[3]) {
        uVar2 = 2;
      }
      iVar1 = (*local_68)(1,uVar2,*param_3,param_3,param_2);
      if (iVar1 != 8) {
        if (iVar1 != 7) {
          return 2;
        }
        FUN_00d0fed0(param_2);
        return 2;
      }
      if (local_38 == param_3[3]) {
        __stream = (FILE *)(PTR___sF_00d54a40 + 0x130);
        fprintf(__stream,"libunwind: %s - %s\n","unwind_phase2",
                "during phase1 personality function said it would stop here, but now in phase2 it did not stop here"
               );
        fflush(__stream);
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    iVar1 = FUN_00d0fe80(param_2);
  }
  return 2;
}


// ===== 00d0fa5c  FUN_00d0fa5c =====

void FUN_00d0fa5c(long param_1)

{
  FILE *__stream;
  undefined1 auStack_4a0 [624];
  undefined1 auStack_230 [528];
  
  FUN_00d13a78(auStack_230);
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_00d0f938(auStack_230,auStack_4a0,param_1);
  }
  else {
    FUN_00d0fae4(auStack_230,auStack_4a0,param_1,*(long *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18));
  }
  __stream = (FILE *)(PTR___sF_00d54a40 + 0x130);
  fprintf(__stream,"libunwind: %s - %s\n","_Unwind_Resume","_Unwind_Resume() can\'t return");
  fflush(__stream);
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00d0fae4  FUN_00d0fae4 =====

void FUN_00d0fae4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,code *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined1 auStack_78 [24];
  code *local_60;
  
  FUN_00d0fc94(param_2,param_1);
  while( true ) {
    iVar1 = FUN_00d0fe80(param_2);
    if (iVar1 < 1) {
      (*param_4)(1,0x1a,*param_3,param_3,param_2,param_5);
      return;
    }
    iVar1 = FUN_00d0fe90(param_2,auStack_78);
    if (iVar1 != 0) break;
    iVar1 = (*param_4)(1,10,*param_3,param_3,param_2,param_5);
    if (iVar1 != 0) {
      return;
    }
    if ((local_60 != (code *)0x0) &&
       (iVar1 = (*local_60)(1,10,*param_3,param_3,param_2), iVar1 != 8)) {
      if (iVar1 != 7) {
        return;
      }
      FUN_00d0fed0(param_2);
    }
  }
  return;
}


// ===== 00d0fbc8  FUN_00d0fbc8 =====

undefined8 FUN_00d0fbc8(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_58 [16];
  undefined8 local_48;
  
  iVar1 = FUN_00d0fe90(param_1,auStack_58);
  if (iVar1 != 0) {
    local_48 = 0;
  }
  return local_48;
}


// ===== 00d0fbfc  FUN_00d0fbfc =====

undefined8 FUN_00d0fbfc(undefined8 param_1)

{
  int iVar1;
  undefined8 local_58 [9];
  
  iVar1 = FUN_00d0fe90(param_1,local_58);
  if (iVar1 != 0) {
    local_58[0] = 0;
  }
  return local_58[0];
}


// ===== 00d0fc30  FUN_00d0fc30 =====

void FUN_00d0fc30(long param_1)

{
  if (*(code **)(param_1 + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d0fc44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 8))(1,param_1);
    return;
  }
  return;
}


// ===== 00d0fc4c  thunk_FUN_00d0fda8 =====

void thunk_FUN_00d0fda8(void)

{
  FUN_00d0fda8();
  return;
}


// ===== 00d0fc54  FUN_00d0fc54 =====

undefined8 FUN_00d0fc54(undefined8 param_1)

{
  undefined8 local_18;
  
  FUN_00d0fd3c(param_1,0xffffffff,&local_18);
  return local_18;
}


// ===== 00d0fc84  FUN_00d0fc84 =====

void FUN_00d0fc84(undefined8 param_1,undefined8 param_2)

{
  FUN_00d0fda8(param_1,0xffffffff,param_2);
  return;
}


// ===== 00d0fc94  FUN_00d0fc94 =====

undefined8 FUN_00d0fc94(undefined8 *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *param_1 = &PTR_FUN_00d51498;
  param_1[1] = &DAT_00dbbb31;
  memcpy(param_1 + 2,param_2,0x110);
  uVar3 = *(undefined8 *)((long)param_2 + 0x130);
  uVar2 = *(undefined8 *)((long)param_2 + 0x148);
  uVar1 = *(undefined8 *)((long)param_2 + 0x140);
  uVar5 = *(undefined8 *)((long)param_2 + 0x118);
  uVar4 = *(undefined8 *)((long)param_2 + 0x110);
  uVar7 = *(undefined8 *)((long)param_2 + 0x128);
  uVar6 = *(undefined8 *)((long)param_2 + 0x120);
  param_1[0x29] = *(undefined8 *)((long)param_2 + 0x138);
  param_1[0x28] = uVar3;
  param_1[0x2b] = uVar2;
  param_1[0x2a] = uVar1;
  param_1[0x25] = uVar5;
  param_1[0x24] = uVar4;
  param_1[0x27] = uVar7;
  param_1[0x26] = uVar6;
  uVar3 = *(undefined8 *)((long)param_2 + 0x170);
  uVar2 = *(undefined8 *)((long)param_2 + 0x188);
  uVar1 = *(undefined8 *)((long)param_2 + 0x180);
  uVar5 = *(undefined8 *)((long)param_2 + 0x158);
  uVar4 = *(undefined8 *)((long)param_2 + 0x150);
  uVar7 = *(undefined8 *)((long)param_2 + 0x168);
  uVar6 = *(undefined8 *)((long)param_2 + 0x160);
  param_1[0x31] = *(undefined8 *)((long)param_2 + 0x178);
  param_1[0x30] = uVar3;
  param_1[0x33] = uVar2;
  param_1[0x32] = uVar1;
  param_1[0x2d] = uVar5;
  param_1[0x2c] = uVar4;
  param_1[0x2f] = uVar7;
  param_1[0x2e] = uVar6;
  uVar3 = *(undefined8 *)((long)param_2 + 0x1b0);
  uVar2 = *(undefined8 *)((long)param_2 + 0x1c8);
  uVar1 = *(undefined8 *)((long)param_2 + 0x1c0);
  uVar5 = *(undefined8 *)((long)param_2 + 0x198);
  uVar4 = *(undefined8 *)((long)param_2 + 400);
  uVar7 = *(undefined8 *)((long)param_2 + 0x1a8);
  uVar6 = *(undefined8 *)((long)param_2 + 0x1a0);
  param_1[0x39] = *(undefined8 *)((long)param_2 + 0x1b8);
  param_1[0x38] = uVar3;
  param_1[0x3b] = uVar2;
  param_1[0x3a] = uVar1;
  param_1[0x35] = uVar5;
  param_1[0x34] = uVar4;
  param_1[0x37] = uVar7;
  param_1[0x36] = uVar6;
  uVar2 = *(undefined8 *)((long)param_2 + 0x1f8);
  uVar1 = *(undefined8 *)((long)param_2 + 0x1f0);
  uVar4 = *(undefined8 *)((long)param_2 + 0x208);
  uVar3 = *(undefined8 *)((long)param_2 + 0x200);
  uVar8 = *(undefined8 *)((long)param_2 + 0x1d8);
  uVar7 = *(undefined8 *)((long)param_2 + 0x1d0);
  uVar6 = *(undefined8 *)((long)param_2 + 0x1e8);
  uVar5 = *(undefined8 *)((long)param_2 + 0x1e0);
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x41] = uVar2;
  param_1[0x40] = uVar1;
  param_1[0x43] = uVar4;
  param_1[0x42] = uVar3;
  param_1[0x3d] = uVar8;
  param_1[0x3c] = uVar7;
  param_1[0x3f] = uVar6;
  param_1[0x3e] = uVar5;
  *(undefined8 *)((long)param_1 + 0x263) = 0;
  *(undefined8 *)((long)param_1 + 0x25b) = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  FUN_00d10430(param_1,0);
  return 0;
}


// ===== 00d0fd3c  FUN_00d0fd3c =====

undefined8 FUN_00d0fd3c(long *param_1,undefined4 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x10))();
  if ((uVar1 & 1) == 0) {
    uVar3 = 0xffffe672;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_2);
    uVar3 = 0;
    *param_3 = uVar2;
  }
  return uVar3;
}


// ===== 00d0fda8  FUN_00d0fda8 =====

undefined8 FUN_00d0fda8(long *param_1,int param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  long local_58;
  
  uVar1 = (**(code **)(*param_1 + 0x10))();
  if ((uVar1 & 1) == 0) {
    uVar3 = 0xffffe672;
  }
  else {
    (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3);
    if (param_2 == -1) {
      (**(code **)(*param_1 + 0x48))(param_1,auStack_78);
      (**(code **)(*param_1 + 0x68))(param_1,0);
      if (local_58 != 0) {
        lVar2 = (**(code **)(*param_1 + 0x18))(param_1,0xfffffffe);
        (**(code **)(*param_1 + 0x20))(param_1,0xfffffffe,local_58 + lVar2);
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}


// ===== 00d0fe80  FUN_00d0fe80 =====

void FUN_00d0fe80(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d0fe8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}


// ===== 00d0fe90  FUN_00d0fe90 =====

undefined4 FUN_00d0fe90(long *param_1,long param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x48))();
  uVar1 = 0xffffe66b;
  if (*(long *)(param_2 + 8) != 0) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 00d0fed0  FUN_00d0fed0 =====

undefined8 FUN_00d0fed0(long *param_1)

{
  (**(code **)(*param_1 + 0x50))();
  return 0xffffe674;
}


// ===== 00d0fef8  FUN_00d0fef8 =====

char * FUN_00d0fef8(undefined8 param_1,uint *param_2,undefined8 *param_3,long param_4)

{
  uint uVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  FILE *__stream;
  ulong uVar11;
  uint *puVar12;
  uint *puVar13;
  uint *local_48;
  
  puVar12 = param_2 + 1;
  uVar11 = (ulong)*param_2;
  if (*param_2 == 0xffffffff) {
    uVar11 = *(ulong *)(param_2 + 1);
    puVar12 = param_2 + 3;
  }
  if (uVar11 == 0) {
    pcVar2 = "FDE has zero length";
  }
  else if (*puVar12 == 0) {
    pcVar2 = "FDE is really a CIE";
  }
  else {
    local_48 = puVar12;
    pcVar2 = (char *)FUN_00d1347c(param_1,(long)puVar12 - (ulong)*puVar12,param_4);
    if (pcVar2 == (char *)0x0) {
      local_48 = puVar12 + 1;
      puVar12 = (uint *)((long)puVar12 + uVar11);
      lVar3 = FUN_00d11f1c(param_1,&local_48,puVar12,*(undefined1 *)(param_4 + 0x18),0);
      lVar4 = FUN_00d11f1c(param_1,&local_48,puVar12,*(byte *)(param_4 + 0x18) & 0xf,0);
      param_3[5] = 0;
      puVar13 = local_48;
      if (*(char *)(param_4 + 0x31) != '\0') {
        uVar11 = 0;
        uVar7 = 0;
        lVar8 = -(long)local_48;
        do {
          if (puVar12 == puVar13) {
            pcVar2 = "truncated uleb128 expression";
            goto LAB_00d10104;
          }
          if (0x3f < uVar11) {
LAB_00d100b8:
            pcVar2 = "malformed uleb128 expression";
LAB_00d10104:
            __stream = (FILE *)(PTR___sF_00d54a40 + 0x130);
            fprintf(__stream,"libunwind: %s - %s\n","getULEB128",pcVar2);
            fflush(__stream);
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar1 = *puVar13;
          uVar10 = (ulong)(byte)uVar1 & 0x7f;
          uVar9 = uVar10 << (uVar11 & 0x3f);
          if (uVar9 >> (uVar11 & 0x3f) != uVar10) goto LAB_00d100b8;
          uVar7 = uVar9 | uVar7;
          uVar11 = uVar11 + 7;
          puVar13 = (uint *)((long)puVar13 + 1);
          lVar8 = lVar8 + -1;
        } while ((char)(byte)uVar1 < '\0');
        puVar13 = (uint *)(uVar7 - lVar8);
        if ((*(byte *)(param_4 + 0x19) != 0xff) &&
           (local_48 = (uint *)-lVar8,
           lVar5 = FUN_00d11f1c(param_1,&local_48,puVar12,*(byte *)(param_4 + 0x19) & 0xf,0),
           lVar5 != 0)) {
          local_48 = (uint *)-lVar8;
          uVar6 = FUN_00d11f1c(param_1,&local_48,puVar12,*(undefined1 *)(param_4 + 0x19),0);
          param_3[5] = uVar6;
        }
      }
      pcVar2 = (char *)0x0;
      param_3[2] = puVar13;
      param_3[3] = lVar3;
      *param_3 = param_2;
      param_3[1] = (long)puVar12 - (long)param_2;
      param_3[4] = lVar4 + lVar3;
    }
  }
  return pcVar2;
}


// ===== 00d10118  FUN_00d10118 =====

void FUN_00d10118(void)

{
  return;
}


// ===== 00d10120  FUN_00d10120 =====

void FUN_00d10120(void)

{
  return;
}


