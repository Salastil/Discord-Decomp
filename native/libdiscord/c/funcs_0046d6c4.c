// ===== 0046d6c4  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0046d6c8  FUN_0046d6c8 =====

bool FUN_0046d6c8(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x10) == 1;
}


// ===== 0046d6dc  FUN_0046d6dc =====

void FUN_0046d6dc(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 **ppuVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 *local_50;
  ulong uStack_48;
  ulong local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar5 = 7;
  local_50 = (undefined1 *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  pcVar4 = "Generic";
  switch(*param_2) {
  case 0:
    break;
  case 1:
    uVar5 = 3;
    pcVar4 = "VP8";
    break;
  case 2:
    uVar5 = 3;
    pcVar4 = "VP9";
    break;
  case 3:
    uVar5 = 3;
    pcVar4 = "AV1";
    break;
  case 4:
    uVar5 = 4;
    pcVar4 = "H264";
    break;
  case 5:
    uVar5 = 4;
    pcVar4 = "H265";
    break;
  default:
    pcVar4 = "Unknown";
  }
  thunk_FUN_00547cac(&local_50,pcVar4,uVar5);
  uVar1 = uStack_48;
  ppuVar3 = (undefined1 **)local_50;
  if (-1 < (long)local_40) {
    uVar1 = local_40 >> 0x38;
    ppuVar3 = &local_50;
  }
  if ((ppuVar3 == (undefined1 **)0x0) && (uVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
               "__len == 0 || __s != nullptr",
               "string_view::string_view(_CharT *, size_t): received nullptr");
  }
  FUN_0046d824(param_1);
  if ((long)local_40 < 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0046d824  FUN_0046d824 =====

void FUN_0046d824(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 *__dest;
  
  if ((param_2 == (undefined8 *)0x0) && (param_3 != 0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/string",0x37e,
               "__n == 0 || __s != nullptr","basic_string(const char*, n) detected nullptr");
  }
  if (0x7fffffffffffffef < param_3) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)param_3;
    __dest = param_1;
  }
  else {
    uVar1 = (param_3 | 0xf) + 1;
    __dest = (undefined8 *)operator_new(uVar1);
    *param_1 = __dest;
    param_1[1] = param_3;
    param_1[2] = uVar1 | 0x8000000000000000;
  }
  if ((__dest <= param_2) && (param_2 < (undefined8 *)((long)__dest + param_3))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  if (param_3 != 0) {
    memmove(__dest,param_2,param_3);
  }
  *(undefined1 *)((long)__dest + param_3) = 0;
  return;
}


// ===== 0046d914  FUN_0046d914 =====

void FUN_0046d914(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 0x130);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}


// ===== 0046d92c  FUN_0046d92c =====

bool FUN_0046d92c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  
  plVar1 = param_1 + 0x26;
  do {
    lVar5 = *plVar1;
    iVar4 = (int)lVar5 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*param_1 + 0x18))();
  }
  return (int)lVar5 != 1;
}


// ===== 0046d970  FUN_0046d970 =====

/* WARNING: Removing unreachable block (ram,0x0046d9dc) */
/* WARNING: Removing unreachable block (ram,0x0046da60) */

void FUN_0046d970(long *param_1)

{
  char cVar1;
  void *pvVar2;
  code *pcVar3;
  void *pvVar4;
  void *pvVar5;
  
  pcVar3 = *(code **)(param_1[0x25] + 8);
  *param_1 = (long)(PTR_DAT_00d51bf0 + 0x10);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(param_1[0x22]);
  }
  pvVar5 = (void *)param_1[0x1f];
  if (pvVar5 != (void *)0x0) {
    pvVar4 = (void *)param_1[0x20];
    pvVar2 = pvVar5;
    if (pvVar4 != pvVar5) {
      do {
        pvVar4 = (void *)((long)pvVar4 + -0x40);
      } while (pvVar4 != pvVar5);
      pvVar2 = (void *)param_1[0x1f];
    }
    param_1[0x20] = (long)pvVar5;
    operator_delete(pvVar2);
  }
  if (*(char *)((long)param_1 + 0xe7) < '\0') {
    operator_delete((void *)param_1[0x1a]);
    pvVar5 = (void *)param_1[0x15];
  }
  else {
    pvVar5 = (void *)param_1[0x15];
  }
  if (pvVar5 == (void *)0x0) {
    cVar1 = *(char *)((long)param_1 + 0x9f);
  }
  else {
    pvVar4 = (void *)param_1[0x16];
    pvVar2 = pvVar5;
    if (pvVar4 != pvVar5) {
      do {
        pvVar4 = (void *)((long)pvVar4 + -0x18);
      } while (pvVar4 != pvVar5);
      pvVar2 = (void *)param_1[0x15];
    }
    param_1[0x16] = (long)pvVar5;
    operator_delete(pvVar2);
    cVar1 = *(char *)((long)param_1 + 0x9f);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[0x11]);
    cVar1 = *(char *)((long)param_1 + 0x7f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x7f);
  }
  if (-1 < cVar1) {
    return;
  }
  operator_delete((void *)param_1[0xd]);
  return;
}


// ===== 0046daa4  FUN_0046daa4 =====

void FUN_0046daa4(void *param_1)

{
  FUN_0046d970();
  operator_delete(param_1);
  return;
}


// ===== 0046dac8  FUN_0046dac8 =====

bool FUN_0046dac8(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x130) == 1;
}


// ===== 0046dadc  FUN_0046dadc =====

void FUN_0046dadc(undefined8 *param_1)

{
  FUN_00469b50(*param_1);
  return;
}


// ===== 0046dae4  FUN_0046dae4 =====

void FUN_0046dae4(undefined8 *param_1)

{
  FUN_00469b50(*param_1);
  return;
}


// ===== 0046daec  FUN_0046daec =====

void FUN_0046daec(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  lVar6 = *param_1;
  if (*(char *)(lVar6 + 0x1f2b) == '\0') {
    auVar7 = FUN_0044127c(*(undefined8 *)(lVar6 + 8));
    plVar5 = auVar7._8_8_;
    plVar3 = auVar7._0_8_;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))(plVar3,param_2);
      uVar4 = FUN_00659108(param_2);
      FUN_00485e48(lVar6,uVar4,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x28));
    }
    if (plVar5 != (long *)0x0) {
      plVar3 = plVar5 + 1;
      do {
        lVar6 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        FUN_005466cc(plVar5);
        return;
      }
    }
  }
  return;
}


// ===== 0046db9c  FUN_0046db9c =====

void FUN_0046db9c(undefined8 *param_1)

{
  FUN_00462764(*param_1);
  return;
}


// ===== 0046dba4  FUN_0046dba4 =====

void FUN_0046dba4(undefined8 *param_1)

{
  FUN_00462894(*param_1);
  return;
}


// ===== 0046dbac  FUN_0046dbac =====

void FUN_0046dbac(long *param_1,undefined4 param_2,undefined8 *param_3,byte param_4)

{
  ulong uVar1;
  undefined1 *__src;
  ulong uVar2;
  long lVar3;
  undefined1 **__dest;
  long lVar4;
  undefined1 *local_90;
  ulong uStack_88;
  undefined8 local_80;
  byte local_78 [4];
  undefined4 local_74;
  undefined4 *local_70;
  undefined1 *puStack_68;
  byte *local_60;
  long local_58;
  
  __dest = &local_90;
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar4 = *param_1;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    __src = (undefined1 *)*param_3;
    uVar2 = param_3[1];
    if (uVar2 < 0x17) {
      local_80 = CONCAT17((char)uVar2,(undefined7)local_80);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar1);
      local_80 = uVar1 | 0x8000000000000000;
      local_90 = (undefined1 *)__dest;
      uStack_88 = uVar2;
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
    uStack_88 = param_3[1];
    local_90 = (undefined1 *)*param_3;
    local_80 = param_3[2];
  }
  local_78[0] = param_4 & 1;
  local_74 = param_2;
  FUN_005467a4(lVar4 + 0x20a8);
  if (*(char *)(lVar4 + 0x20f0) == '\0') {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
               "this->has_value()","optional operator-> called on a disengaged value");
  }
  local_70 = &local_74;
  local_60 = local_78;
  puStack_68 = (undefined1 *)&local_90;
  FUN_007b6160(lVar4 + 0x20d0,&local_70,FUN_0046c20c);
  FUN_005467c8(lVar4 + 0x20a8);
  if ((long)local_80 < 0) {
    operator_delete(local_90);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0046dd48  FUN_0046dd48 =====

void FUN_0046dd48(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 0046dd54  FUN_0046dd54 =====

void FUN_0046dd54(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  void *local_80 [2];
  char local_69;
  undefined1 *local_68;
  undefined **local_60;
  void *local_58;
  char local_41;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *param_1;
  FUN_004e36c8(&local_60);
  FUN_004e36e0(local_80,&local_60,param_2);
  FUN_005467a4(lVar2 + 0x20f8);
  if (*(char *)(lVar2 + 0x2140) == '\0') {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
               "this->has_value()","optional operator-> called on a disengaged value");
  }
  local_68 = (undefined1 *)local_80;
  FUN_007b6160(lVar2 + 0x2120,&local_68,FUN_0046af44);
  FUN_005467c8(lVar2 + 0x20f8);
  if (local_69 < '\0') {
    operator_delete(local_80[0]);
  }
  local_60 = &PTR_FUN_00d1f540;
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  FUN_004e36c0(&local_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0046de5c  FUN_0046de5c =====

void FUN_0046de5c(undefined8 *param_1,long param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long local_78;
  undefined8 *puStack_70;
  code *local_68;
  undefined8 *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = param_3;
  param_1[5] = param_5;
  *param_1 = &PTR_FUN_00d1ce68;
  param_1[1] = 0;
  plVar5 = (long *)operator_new(8);
  *(undefined4 *)(param_1 + 0xb) = param_4;
  puVar4 = PTR_DAT_00d51bf8;
  lVar9 = param_2 + 0x78;
  param_1[6] = plVar5;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xe] = FUN_004547f0;
  param_1[0xf] = &DAT_001f1910;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *plVar5 = (long)(puVar4 + 0x10);
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined1 *)((long)param_1 + 0xac) = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((long)param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((long)param_1 + 0xbc) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  FUN_005467a4(lVar9);
  if (*(char *)(param_2 + 0xc0) != '\0') {
    puVar1 = param_1 + 0x1a;
    FUN_007b5a0c(param_2 + 0xa0,param_1,param_1,FUN_0046f668);
    FUN_005467c8(lVar9);
    plVar5 = (long *)param_1[0x1b];
    local_68 = FUN_0046f670;
    local_60 = (undefined8 *)&DAT_001f69f0;
    local_78 = lVar9;
    puStack_70 = param_1;
    if (plVar5 < (long *)param_1[0x1c]) {
      if (plVar5 == (long *)0x0) goto LAB_0046e368;
      plVar5[1] = (long)param_1;
      *plVar5 = lVar9;
      plVar5[2] = (long)FUN_0046f670;
      plVar5[3] = (long)&DAT_001f69f0;
      if (DAT_001f69f8 != 0) {
        local_68 = FUN_0040dec4;
        local_60 = &DAT_001f1910;
      }
      param_1[0x1b] = plVar5 + 4;
    }
    else {
      FUN_004313e8(puVar1,&local_78);
    }
    if ((code *)local_60[1] != (code *)0x0) {
      (*(code *)local_60[1])(local_78);
    }
    lVar10 = param_1[3];
    lVar9 = lVar10 + 200;
    FUN_005467a4(lVar9);
    if (*(char *)(lVar10 + 0x110) == '\0') goto LAB_0046e340;
    FUN_007b5a0c(lVar10 + 0xf0,param_1,param_1,FUN_0046f6d4);
    FUN_005467c8(lVar9);
    plVar5 = (long *)param_1[0x1b];
    local_68 = FUN_0046f6dc;
    local_60 = (undefined8 *)&DAT_001f6a10;
    local_78 = lVar9;
    if (plVar5 < (long *)param_1[0x1c]) {
      if (plVar5 == (long *)0x0) goto LAB_0046e368;
      plVar5[1] = (long)param_1;
      *plVar5 = lVar9;
      plVar5[2] = (long)FUN_0046f6dc;
      plVar5[3] = (long)&DAT_001f6a10;
      if (DAT_001f6a18 != 0) {
        local_68 = FUN_0040dec4;
        local_60 = &DAT_001f1910;
      }
      param_1[0x1b] = plVar5 + 4;
      puStack_70 = param_1;
    }
    else {
      puStack_70 = param_1;
      FUN_004313e8(puVar1,&local_78);
    }
    if ((code *)local_60[1] != (code *)0x0) {
      (*(code *)local_60[1])(local_78);
    }
    lVar10 = param_1[3];
    lVar9 = lVar10 + 0x168;
    FUN_005467a4(lVar9);
    if (*(char *)(lVar10 + 0x1b0) == '\0') goto LAB_0046e340;
    FUN_007b5a0c(lVar10 + 400,param_1,param_1,FUN_0046f740);
    FUN_005467c8(lVar9);
    plVar5 = (long *)param_1[0x1b];
    local_68 = FUN_0046f774;
    local_60 = (undefined8 *)&DAT_001f6a30;
    local_78 = lVar9;
    if (plVar5 < (long *)param_1[0x1c]) {
      if (plVar5 == (long *)0x0) goto LAB_0046e368;
      plVar5[1] = (long)param_1;
      *plVar5 = lVar9;
      plVar5[2] = (long)FUN_0046f774;
      plVar5[3] = (long)&DAT_001f6a30;
      if (DAT_001f6a38 != 0) {
        local_68 = FUN_0040dec4;
        local_60 = &DAT_001f1910;
      }
      param_1[0x1b] = plVar5 + 4;
      puStack_70 = param_1;
    }
    else {
      puStack_70 = param_1;
      FUN_004313e8(puVar1,&local_78);
    }
    if ((code *)local_60[1] != (code *)0x0) {
      (*(code *)local_60[1])(local_78);
    }
    lVar10 = param_1[3];
    lVar9 = lVar10 + 0x208;
    FUN_005467a4(lVar9);
    if (*(char *)(lVar10 + 0x250) == '\0') goto LAB_0046e340;
    FUN_007b5a0c(lVar10 + 0x230,param_1,param_1,FUN_0046f7d8);
    FUN_005467c8(lVar9);
    plVar5 = (long *)param_1[0x1b];
    local_68 = FUN_0046f7e0;
    local_60 = (undefined8 *)&DAT_001f6a50;
    local_78 = lVar9;
    if (plVar5 < (long *)param_1[0x1c]) {
      if (plVar5 == (long *)0x0) goto LAB_0046e368;
      plVar5[1] = (long)param_1;
      *plVar5 = lVar9;
      plVar5[2] = (long)FUN_0046f7e0;
      plVar5[3] = (long)&DAT_001f6a50;
      if (DAT_001f6a58 != 0) {
        local_68 = FUN_0040dec4;
        local_60 = &DAT_001f1910;
      }
      param_1[0x1b] = plVar5 + 4;
      puStack_70 = param_1;
    }
    else {
      puStack_70 = param_1;
      FUN_004313e8(puVar1,&local_78);
    }
    if ((code *)local_60[1] != (code *)0x0) {
      (*(code *)local_60[1])(local_78);
    }
    lVar10 = param_1[3];
    lVar9 = lVar10 + 600;
    FUN_005467a4(lVar9);
    if (*(char *)(lVar10 + 0x2a0) != '\0') {
      FUN_007b5a0c(lVar10 + 0x280,param_1,param_1,FUN_0046f844);
      FUN_005467c8(lVar9);
      plVar5 = (long *)param_1[0x1b];
      local_68 = FUN_0046f84c;
      local_60 = (undefined8 *)&DAT_001f6a70;
      local_78 = lVar9;
      if (plVar5 < (long *)param_1[0x1c]) {
        if (plVar5 == (long *)0x0) {
LAB_0046e368:
          puStack_70 = param_1;
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        plVar5[1] = (long)param_1;
        *plVar5 = lVar9;
        plVar5[2] = (long)FUN_0046f84c;
        plVar5[3] = (long)&DAT_001f6a70;
        if (DAT_001f6a78 != 0) {
          local_68 = FUN_0040dec4;
          local_60 = &DAT_001f1910;
        }
        param_1[0x1b] = plVar5 + 4;
        puStack_70 = param_1;
      }
      else {
        puStack_70 = param_1;
        FUN_004313e8(puVar1,&local_78);
      }
      if ((code *)local_60[1] != (code *)0x0) {
        (*(code *)local_60[1])(local_78);
      }
      *(undefined4 *)(param_1 + 0x15) = 3;
      *(undefined1 *)((long)param_1 + 0xac) = 1;
      uVar8 = param_6[2];
      puVar1 = (undefined8 *)param_6[3];
      uVar6 = *param_6;
      uVar2 = param_6[1];
      pcVar7 = (code *)*puVar1;
      if (pcVar7 != (code *)0x0) {
        uVar6 = (*pcVar7)();
      }
      lVar9 = param_1[0xf];
      param_1[0xe] = uVar8;
      param_1[0xf] = puVar1;
      uVar8 = param_1[0xc];
      param_1[0xc] = uVar6;
      param_1[0xd] = uVar2;
      if (*(code **)(lVar9 + 8) != (code *)0x0) {
        (**(code **)(lVar9 + 8))(uVar8);
      }
      *(undefined1 *)(param_1 + 0x10) = 1;
      FUN_0046e394(param_1);
      if (*(long *)(lVar3 + 0x28) == local_58) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
LAB_0046e340:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
             "this->has_value()","optional operator-> called on a disengaged value");
}


// ===== 0046e394  FUN_0046e394 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0046e394(long param_1)

{
  long *plVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *******__dest;
  void *pvVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *******__src;
  ulong uVar14;
  void *pvVar15;
  undefined1 auVar16 [16];
  void *local_208 [2];
  char local_1f1;
  void *local_1f0;
  undefined8 uStack_1e8;
  long local_1e0;
  undefined8 *******local_1d0;
  ulong uStack_1c8;
  undefined8 local_1c0;
  long *local_1b8 [2];
  char local_1a1;
  long *local_190;
  long local_188;
  undefined8 uStack_180;
  long local_178;
  long lStack_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_ff;
  long *local_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long local_d8;
  long lStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_5f;
  long local_48;
  
  lVar7 = tpidr_el0;
  local_48 = *(long *)(lVar7 + 0x28);
  FUN_0042fd98(*(undefined8 *)(param_1 + 0x20));
  lStack_d0 = 0;
  lVar11 = *(long *)(*(long *)(param_1 + 0x18) + 0x17f0);
  lVar10 = *(long *)(*(long *)(param_1 + 0x18) + 0x1810);
  lStack_e8 = 0;
  local_f0 = (long *)0x0;
  local_d8 = 0;
  uStack_e0 = 0;
  if (lVar11 != 0) {
    lStack_e8 = lVar11;
  }
  if (lVar10 != 0) {
    local_d8 = lVar10;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    lStack_d0 = *(long *)(param_1 + 0x30);
  }
  FUN_008b60e8(local_1b8,&local_f0);
  if (local_f0 != (long *)0x0) {
    plVar13 = local_f0 + 1;
    do {
      iVar6 = (int)*plVar13 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *(int *)plVar13 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_f0 + 8))();
    }
  }
  FUN_0084228c(&local_f0,local_1b8,0);
  if (local_1b8[0] != (long *)0x0) {
    plVar13 = local_1b8[0] + 1;
    do {
      iVar6 = (int)*plVar13 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *(int *)plVar13 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_1b8[0] + 8))();
    }
  }
  puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x80);
  if (puVar12 != (undefined8 *)0x0) {
    (**(code **)*puVar12)(puVar12);
  }
  local_158 = puVar12;
  if (local_b8 != (long *)0x0) {
    lVar10 = *local_b8;
    local_b8 = puVar12;
    (**(code **)(lVar10 + 8))();
    local_158 = local_b8;
  }
  uStack_138 = local_98;
  local_190 = local_f0;
  local_b8 = (long *)0x0;
  local_f0 = (long *)0x0;
  uStack_180 = uStack_e0;
  local_188 = lStack_e8;
  lStack_170 = lStack_d0;
  local_178 = local_d8;
  uStack_148 = uStack_a8;
  local_150 = local_b0;
  uStack_ff = uStack_5f;
  local_168 = local_c8;
  local_160 = local_c0;
  uStack_118 = uStack_78;
  local_120 = local_80;
  uStack_110 = uStack_70;
  local_98 = 0;
  local_140 = local_a0;
  uStack_128 = uStack_88;
  local_130 = local_90;
  puVar8 = (undefined8 *)FUN_005ddce4(&local_190);
  puVar12 = puVar8;
  if (puVar8 != (undefined8 *)0x0) {
    puVar12 = (undefined8 *)operator_new(0x20);
    puVar12[2] = 0;
    puVar12[3] = puVar8;
    *puVar12 = &PTR_FUN_00d1ce98;
    puVar12[1] = 0;
  }
  plVar13 = *(long **)(param_1 + 0x40);
  *(undefined8 **)(param_1 + 0x38) = puVar8;
  *(undefined8 **)(param_1 + 0x40) = puVar12;
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 1;
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
      (**(code **)(*plVar13 + 0x10))(plVar13);
      FUN_005466cc(plVar13);
    }
  }
  FUN_008423b8(&local_190);
  (**(code **)(**(long **)(param_1 + 0x38) + 0x78))(*(long **)(param_1 + 0x38),0,0);
  iVar6 = *(int *)(param_1 + 0x58);
  if (iVar6 == 2) {
    lVar10 = *(long *)(param_1 + 0x18);
    bVar3 = *(byte *)(lVar10 + 0x2c7);
    uVar14 = *(ulong *)(lVar10 + 0x2b8);
    uVar2 = uVar14;
    if (-1 < (char)bVar3) {
      uVar2 = (ulong)bVar3;
    }
    if (uVar2 == 0) {
      FUN_005125b4(&local_1d0);
    }
    else if ((char)bVar3 < '\0') {
      __src = *(undefined8 ********)(lVar10 + 0x2b0);
      if (uVar14 < 0x17) {
        __dest = &local_1d0;
        local_1c0 = CONCAT17((char)uVar14,(undefined7)local_1c0);
      }
      else {
        if (0x7fffffffffffffef < uVar14) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar2 = (uVar14 | 0xf) + 1;
        __dest = (undefined8 *******)operator_new(uVar2);
        local_1c0 = uVar2 | 0x8000000000000000;
        local_1d0 = __dest;
        uStack_1c8 = uVar14;
      }
      if ((__dest <= __src) && (__src < (undefined8 *******)((long)__dest + uVar14 + 1))) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      memmove(__dest,__src,uVar14 + 1);
    }
    else {
      uStack_1c8 = *(ulong *)(lVar10 + 0x2b8);
      local_1d0 = *(undefined8 ********)(lVar10 + 0x2b0);
      local_1c0 = *(ulong *)(lVar10 + 0x2c0);
    }
    FUN_004d7b58(local_1b8,&local_1d0);
    if ((long)local_1c0 < 0) {
      operator_delete(local_1d0);
    }
    lVar10 = *(long *)(param_1 + 0x18);
    DAT_00d60280 = DAT_00d60280 + 1;
    FUN_005490bc(local_208);
    uVar2 = DAT_00d60270;
    puVar12 = DAT_00d60268;
    if (-1 < (char)DAT_00d6027f) {
      uVar2 = (ulong)DAT_00d6027f;
      puVar12 = &DAT_00d60268;
    }
    puVar12 = (undefined8 *)FUN_00547cac(local_208,puVar12,uVar2);
    uStack_1e8 = puVar12[1];
    local_1f0 = (void *)*puVar12;
    local_1e0 = puVar12[2];
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = 0;
    FUN_0046f160(&local_1d0,lVar10 + 0x2b0,&local_1f0);
    if (local_1e0 < 0) {
      operator_delete(local_1f0);
    }
    if (local_1f1 < '\0') {
      operator_delete(local_208[0]);
    }
    if (4 < DAT_00d60280) {
      DAT_00d60280 = 0;
    }
    puVar12 = (undefined8 *)operator_new(0x48);
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = &PTR_FUN_00d1cfc8;
    FUN_004710cc(puVar12 + 3,&local_1d0);
    plVar13 = *(long **)(param_1 + 0x50);
    *(undefined8 **)(param_1 + 0x48) = puVar12 + 3;
    *(undefined8 **)(param_1 + 0x50) = puVar12;
    if (plVar13 != (long *)0x0) {
      plVar1 = plVar13 + 1;
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
        (**(code **)(*plVar13 + 0x10))(plVar13);
        FUN_005466cc(plVar13);
      }
    }
    if ((long)local_1c0 < 0) {
      operator_delete(local_1d0);
    }
    if (local_1a1 < '\0') {
      operator_delete(local_1b8[0]);
      cVar4 = *(char *)(param_1 + 0x80);
      goto joined_r0x0046e924;
    }
  }
  else if (iVar6 == 1) {
    auVar16 = FUN_0046f954(local_1b8,param_1 + 0x38,param_1 + 0x28);
    plVar13 = *(long **)(param_1 + 0x50);
    *(undefined1 (*) [16])(param_1 + 0x48) = auVar16;
    if (plVar13 != (long *)0x0) {
      plVar1 = plVar13 + 1;
      do {
        lVar10 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_0046e624:
      if (lVar10 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        FUN_005466cc(plVar13);
        cVar4 = *(char *)(param_1 + 0x80);
        goto joined_r0x0046e924;
      }
    }
  }
  else if (iVar6 == 0) {
    puVar12 = (undefined8 *)operator_new(0x20);
    plVar13 = *(long **)(param_1 + 0x50);
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = &PTR_FUN_00d1ced0;
    puVar12[3] = &PTR_FUN_00d1cf08;
    *(undefined8 **)(param_1 + 0x48) = puVar12 + 3;
    *(undefined8 **)(param_1 + 0x50) = puVar12;
    if (plVar13 != (long *)0x0) {
      plVar1 = plVar13 + 1;
      do {
        lVar10 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_0046e624;
    }
  }
  cVar4 = *(char *)(param_1 + 0x80);
joined_r0x0046e924:
  if (cVar4 != '\0') {
    if (*(long *)(param_1 + 8) != 0) {
      FUN_0042f8ec(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38));
      *(undefined8 *)(param_1 + 8) = 0;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_0042f81c(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38));
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    FUN_0042e290(*(undefined8 *)(param_1 + 0x20),param_1);
    pvVar9 = operator_new(0x1d08);
    FUN_00492628();
    pvVar15 = *(void **)(param_1 + 200);
    *(void **)(param_1 + 200) = pvVar9;
    if (pvVar15 != (void *)0x0) {
      FUN_004928ec(pvVar15);
      operator_delete(pvVar15);
      pvVar9 = *(void **)(param_1 + 200);
    }
    FUN_004927c8(pvVar9,param_1 + 0x60);
  }
  FUN_0046ef00(param_1);
  FUN_0046eb7c(param_1);
  FUN_0042f120(*(undefined8 *)(param_1 + 0x20),param_1);
  FUN_008423b8(&local_f0);
  if (*(long *)(lVar7 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0046e95c  FUN_0046e95c =====

void FUN_0046e95c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  void *pvVar9;
  
  *param_1 = &PTR_FUN_00d1ce68;
  if (param_1[7] != 0) {
    FUN_0042fe70(param_1[4]);
  }
  FUN_0042e2fc(param_1[4],param_1);
  FUN_0042f234(param_1[4],param_1);
  if (param_1[1] != 0) {
    FUN_0042f8ec(param_1[4],param_1[7]);
    param_1[1] = 0;
  }
  if (param_1[2] != 0) {
    FUN_0042f81c(param_1[4],param_1[7]);
    param_1[2] = 0;
  }
  FUN_004312b4(param_1 + 0x1a);
  pvVar8 = (void *)param_1[0x1a];
  if (pvVar8 != (void *)0x0) {
    pvVar9 = pvVar8;
    pvVar4 = (void *)param_1[0x1b];
    if ((void *)param_1[0x1b] != pvVar8) {
      do {
        pvVar9 = (void *)((long)pvVar4 + -0x20);
        pcVar5 = *(code **)(*(long *)((long)pvVar4 + -8) + 8);
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(*(undefined8 *)((long)pvVar4 + -0x20));
        }
        pvVar4 = pvVar9;
      } while (pvVar9 != pvVar8);
      pvVar9 = (void *)param_1[0x1a];
    }
    param_1[0x1b] = pvVar8;
    operator_delete(pvVar9);
  }
  pvVar8 = (void *)param_1[0x19];
  param_1[0x19] = 0;
  if (pvVar8 != (void *)0x0) {
    FUN_004928ec(pvVar8);
    operator_delete(pvVar8);
  }
  if (*(code **)(param_1[0xf] + 8) != (code *)0x0) {
    (**(code **)(param_1[0xf] + 8))(param_1[0xc]);
  }
  plVar7 = (long *)param_1[10];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_005466cc(plVar7);
      plVar7 = (long *)param_1[8];
      goto joined_r0x0046ead8;
    }
  }
  plVar7 = (long *)param_1[8];
joined_r0x0046ead8:
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_005466cc(plVar7);
    }
  }
  plVar7 = (long *)param_1[6];
  param_1[6] = 0;
  if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0046eafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 8))();
    return;
  }
  return;
}


// ===== 0046eb10  FUN_0046eb10 =====

void FUN_0046eb10(void *param_1)

{
  FUN_0046e95c();
  operator_delete(param_1);
  return;
}


// ===== 0046eb34  FUN_0046eb34 =====

void FUN_0046eb34(long param_1,long param_2)

{
  if (*(long *)(param_1 + 200) != 0) {
    *(undefined1 *)(param_2 + 0x20) = 0;
    FUN_00489c90(param_1 + 0x60);
    FUN_004927c8(*(undefined8 *)(param_1 + 200),param_1 + 0x60);
    return;
  }
  return;
}


// ===== 0046eb7c  FUN_0046eb7c =====

/* WARNING: Removing unreachable block (ram,0x0046edb4) */
/* WARNING: Removing unreachable block (ram,0x0046edc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046eb7c(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *local_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined1 auStack_608 [64];
  undefined1 auStack_5c8 [408];
  undefined1 auStack_430 [408];
  undefined4 local_298 [2];
  undefined1 auStack_290 [64];
  undefined8 local_250;
  undefined8 uStack_23f;
  undefined4 local_230 [54];
  undefined4 local_158;
  undefined1 auStack_150 [64];
  undefined8 local_110;
  undefined8 uStack_ff;
  char local_f0;
  long *local_e8;
  long local_98 [2];
  code *local_88;
  undefined *local_80;
  undefined1 local_78 [48];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_0042f8ec(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  FUN_00842718(local_230,*(undefined8 *)(param_1 + 0x48));
  plVar7 = *(long **)(*(long *)(param_1 + 0x20) + 0x90);
  local_230[0] = 0x141e;
  if (plVar7 != (undefined8 *)0x0) {
    (**(code **)*plVar7)(plVar7);
  }
  if (local_e8 != (long *)0x0) {
    lVar6 = *local_e8;
    local_e8 = plVar7;
    (**(code **)(lVar6 + 8))();
    plVar7 = local_e8;
  }
  local_e8 = plVar7;
  if (*(int *)(param_1 + 0x58) == 0) {
    FUN_00667494(auStack_608,&DAT_001adc30,4,8000,1);
    FUN_00843440(local_298,0,auStack_608);
    local_158 = local_298[0];
    if (local_f0 == '\0') {
      FUN_00667388(auStack_150,auStack_290);
      local_f0 = '\x01';
    }
    else {
      FUN_006678fc();
    }
    uStack_ff = uStack_23f;
    local_110 = local_250;
    FUN_0084348c(local_298);
    FUN_006678ac(auStack_608);
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    puVar8 = auStack_430;
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    FUN_00465350(auStack_430,local_230);
    puVar4 = auStack_430;
    uVar5 = 8000;
  }
  else {
    uVar1 = DAT_00d60228;
    puVar3 = _DAT_00d60220;
    if (-1 < (char)DAT_00d60237) {
      uVar1 = (ulong)DAT_00d60237;
      puVar3 = &DAT_00d60220;
    }
    if ((puVar3 == (undefined4 *)0x0) && (uVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
                 "__len == 0 || __s != nullptr",
                 "string_view::string_view(_CharT *, size_t): received nullptr");
    }
    FUN_00465d60(local_78,"stereo",&DAT_0019cb7e);
    local_620 = &local_618;
    local_618 = 0;
    uStack_610 = 0;
    FUN_004414e0(&local_620,local_620,local_78,local_78);
    FUN_006676e8(auStack_608,puVar3,uVar1,48000,2,&local_620);
    FUN_00843440(local_298,0x78,auStack_608);
    local_158 = local_298[0];
    if (local_f0 == '\0') {
      FUN_00667388(auStack_150,auStack_290);
      local_110 = local_250;
      uStack_ff = uStack_23f;
      local_f0 = '\x01';
    }
    else {
      FUN_006678fc();
      local_110 = local_250;
      uStack_ff = uStack_23f;
    }
    FUN_0084348c(local_298);
    FUN_006678ac(auStack_608);
    FUN_00441e1c(&local_620,local_618);
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    puVar8 = auStack_5c8;
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    FUN_00465350(auStack_5c8,local_230);
    puVar4 = auStack_5c8;
    uVar5 = 48000;
  }
  uVar9 = FUN_0042f880(uVar9,uVar10,puVar4,0,uVar5,1);
  *(undefined8 *)(param_1 + 8) = uVar9;
  FUN_008427b0(puVar8);
  (**(code **)(**(long **)(param_1 + 8) + 0x40))(*(long **)(param_1 + 8),0);
  if (*(long *)(param_1 + 200) != 0) {
    local_88 = FUN_004713e8;
    local_80 = &DAT_001f6a90;
    local_98[0] = param_1;
    FUN_0045ab70(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb8),*(undefined8 *)(param_1 + 8),
                 local_98);
    if (*(code **)(local_80 + 8) != (code *)0x0) {
      (**(code **)(local_80 + 8))(local_98[0]);
    }
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x28))();
  FUN_008427b0(local_230);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0046ef00  FUN_0046ef00 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046ef00(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 ***pppuVar5;
  undefined8 **ppuVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 ***pppuVar11;
  undefined8 ***pppuVar12;
  float fVar13;
  undefined1 auStack_240 [64];
  int local_200;
  undefined1 auStack_1f8 [64];
  undefined1 auStack_1b8 [176];
  undefined4 local_108 [6];
  undefined8 local_f0;
  long *local_b8;
  undefined8 **local_b0;
  long local_a8;
  long *local_a0;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_0042f81c(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x58) == 1) {
    FUN_0084207c(local_108);
    local_f0 = *(undefined8 *)(param_1 + 0x48);
    plVar8 = *(long **)(*(long *)(param_1 + 0x20) + 0x88);
    local_108[0] = 0x141e;
    if (plVar8 != (long *)0x0) {
      (**(code **)*plVar8)(plVar8);
    }
    if (local_a0 != (long *)0x0) {
      lVar7 = *local_a0;
      local_a0 = plVar8;
      (**(code **)(lVar7 + 8))();
      plVar8 = local_a0;
    }
    local_a0 = plVar8;
    uVar1 = DAT_00d60228;
    puVar3 = _DAT_00d60220;
    if (-1 < (char)DAT_00d60237) {
      uVar1 = (ulong)DAT_00d60237;
      puVar3 = &DAT_00d60220;
    }
    if ((puVar3 == (undefined4 *)0x0) && (uVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
                 "__len == 0 || __s != nullptr",
                 "string_view::string_view(_CharT *, size_t): received nullptr");
    }
    FUN_00667494(auStack_240,puVar3,uVar1,48000,2);
    local_200 = 0x78;
    FUN_00667434(auStack_1f8,auStack_240);
    iVar4 = local_200;
    pppuVar5 = (undefined8 ***)local_b0;
    if ((undefined8 ***)local_b0 == (undefined8 ***)0x0) {
      pppuVar11 = &local_b0;
      pppuVar12 = pppuVar11;
    }
    else {
      do {
        while (pppuVar11 = pppuVar5, *(int *)(pppuVar11 + 4) <= local_200) {
          if (local_200 <= *(int *)(pppuVar11 + 4)) goto LAB_0046f090;
          pppuVar5 = (undefined8 ***)pppuVar11[1];
          if ((undefined8 ***)pppuVar11[1] == (undefined8 ***)0x0) {
            pppuVar12 = pppuVar11 + 1;
            goto LAB_0046f03c;
          }
        }
        pppuVar5 = (undefined8 ***)*pppuVar11;
        pppuVar12 = pppuVar11;
      } while ((undefined8 ***)*pppuVar11 != (undefined8 ***)0x0);
    }
LAB_0046f03c:
    ppuVar6 = (undefined8 **)operator_new(0x68);
    *(int *)(ppuVar6 + 4) = iVar4;
    FUN_00667434(ppuVar6 + 5,auStack_1f8);
    *ppuVar6 = (undefined8 *)0x0;
    ppuVar6[1] = (undefined8 *)0x0;
    ppuVar6[2] = pppuVar11;
    *pppuVar12 = ppuVar6;
    if ((long *)*local_b8 != (long *)0x0) {
      ppuVar6 = *pppuVar12;
      local_b8 = (long *)*local_b8;
    }
    FUN_0041dcd0(local_b0,ppuVar6);
    local_a8 = local_a8 + 1;
LAB_0046f090:
    FUN_006678ac(auStack_1f8);
    FUN_006678ac(auStack_240);
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    FUN_0042f4d0(auStack_1b8,local_108);
    uVar9 = FUN_0042f2bc(uVar9,uVar10,auStack_1b8,0);
    *(undefined8 *)(param_1 + 0x10) = uVar9;
    FUN_008420e8(auStack_1b8);
    if (*(long **)(param_1 + 0x10) != (long *)0x0) {
      fVar13 = (float)NEON_fminnm(*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x3a8),0x41200000);
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      (**(code **)(**(long **)(param_1 + 0x10) + 0x70))(fVar13);
    }
    FUN_008420e8(local_108);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0046f160  FUN_0046f160 =====

void FUN_0046f160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  char ****ppppcVar2;
  long lVar3;
  undefined8 ****ppppuVar4;
  ulong uVar5;
  char ***local_68;
  ulong local_60;
  byte local_51;
  undefined8 ***local_50;
  ulong local_48;
  undefined7 local_40;
  byte bStack_39;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00470d40(&local_50);
  FUN_00470d40(&local_68,param_3);
  uVar5 = (ulong)bStack_39;
  uVar1 = local_48;
  if (-1 < (char)bStack_39) {
    uVar1 = uVar5;
  }
  if (uVar1 == 0) goto LAB_0046f278;
  ppppuVar4 = (undefined8 ****)local_50;
  if (-1 < (char)bStack_39) {
    ppppuVar4 = &local_50;
  }
  if (*(char *)((long)ppppuVar4 + (uVar1 - 1)) == '/') goto LAB_0046f278;
  if (-1 < (char)local_51) {
    local_60 = (ulong)local_51;
  }
  if (local_60 == 0) goto LAB_0046f278;
  ppppcVar2 = (char ****)local_68;
  if (-1 < (char)local_51) {
    ppppcVar2 = &local_68;
  }
  if (*(char *)ppppcVar2 == '/') goto LAB_0046f278;
  if ((char)bStack_39 < '\0') {
    uVar5 = local_48;
    if (local_48 == (CONCAT17(bStack_39,local_40) & 0x7fffffffffffffff) - 1) goto LAB_0046f22c;
LAB_0046f250:
    local_48 = uVar5 + 1;
    ppppuVar4 = (undefined8 ****)local_50;
  }
  else {
    if (bStack_39 == 0x16) {
      uVar5 = 0x16;
LAB_0046f22c:
      FUN_0054774c(&local_50,uVar5,1,uVar5,uVar5,0,0);
      goto LAB_0046f250;
    }
    if (0x15 < bStack_39) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                 "__s < __min_cap",
                 "__s should never be greater than or equal to the short string capacity");
    }
    bStack_39 = bStack_39 + 1;
    ppppuVar4 = &local_50;
  }
  *(undefined2 *)((long)ppppuVar4 + uVar5) = 0x2f;
LAB_0046f278:
  FUN_00470f38(param_1,&local_50,&local_68);
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  if ((char)bStack_39 < '\0') {
    operator_delete(local_50);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0046f304  FUN_0046f304 =====

void FUN_0046f304(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *pvVar5;
  long *plVar6;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_0042fe70(*(undefined8 *)(param_1 + 0x20));
  }
  FUN_0042f234(*(undefined8 *)(param_1 + 0x20),param_1);
  FUN_0042e2fc(*(undefined8 *)(param_1 + 0x20),param_1);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_0042f8ec(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_0042f81c(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  pvVar5 = *(void **)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = 0;
  if (pvVar5 != (void *)0x0) {
    FUN_004928ec(pvVar5);
    operator_delete(pvVar5);
  }
  plVar6 = *(long **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  plVar6 = *(long **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
      return;
    }
  }
  return;
}


// ===== 0046f414  FUN_0046f414 =====

void FUN_0046f414(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x58) == 2) {
    lVar2 = *(long *)(param_1 + 0x48);
    *(undefined1 *)(lVar2 + 0x10) = 1;
    if (*(long *)(*(long *)(lVar2 + 8) + 8) != 0) {
      FUN_00554270();
      return;
    }
  }
  else {
    uVar1 = FUN_004022fc();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../discord_native_lib/src/media/loopback_audio_stream.cpp",
                   0xd22,"LoopbackAudioStream::StopRecording(): incorrect mode: ",
                   *(undefined4 *)(param_1 + 0x58));
      return;
    }
  }
  return;
}


// ===== 0046f494  FUN_0046f494 =====

void FUN_0046f494(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  undefined8 *__dest;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(int *)(param_2 + 0x58) == 2) {
    lVar3 = *(long *)(param_2 + 0x48);
    if (*(long *)(*(long *)(lVar3 + 8) + 8) != 0) {
      if (-1 < *(char *)(lVar3 + 0x2f)) {
        uVar5 = *(undefined8 *)(lVar3 + 0x20);
        uVar4 = *(undefined8 *)(lVar3 + 0x18);
        param_1[2] = *(undefined8 *)(lVar3 + 0x28);
        param_1[1] = uVar5;
        *param_1 = uVar4;
        return;
      }
      __src = *(undefined8 **)(lVar3 + 0x18);
      uVar2 = *(ulong *)(lVar3 + 0x20);
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
      return;
    }
  }
  else {
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../discord_native_lib/src/media/loopback_audio_stream.cpp",
                   0xd7a,"LoopbackAudioStream::GetRecordingFileName(): incorrect mode: ",
                   *(undefined4 *)(param_2 + 0x58));
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 0046f5c8  FUN_0046f5c8 =====

int FUN_0046f5c8(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x58) == 2) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x48) + 8);
    if (*(long *)(lVar2 + 8) != 0) {
      lVar2 = *(long *)(lVar2 + 0x10);
      return (int)((ulong)(lVar2 / 6 + (lVar2 >> 0x3f)) >> 3) -
             (SUB164(SEXT816(lVar2) * SEXT816(0x2aaaaaaaaaaaaaab),0xc) >> 0x1f);
    }
  }
  else {
    uVar1 = FUN_004022fc();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../discord_native_lib/src/media/loopback_audio_stream.cpp",
                   0xdda,"LoopbackAudioStream::GetRecordingDurationMs(): incorrect mode: ",
                   *(undefined4 *)(param_1 + 0x58));
    }
  }
  return 0;
}


// ===== 0046f654  FUN_0046f654 =====

bool FUN_0046f654(long param_1)

{
  return *(long *)(param_1 + 200) != 0;
}


// ===== 0046f664  FUN_0046f664 =====

void FUN_0046f664(void)

{
  return;
}


// ===== 0046f668  FUN_0046f668 =====

void FUN_0046f668(undefined8 *param_1)

{
  FUN_0046eb7c(*param_1);
  return;
}


// ===== 0046f670  FUN_0046f670 =====

void FUN_0046f670(long *param_1)

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


// ===== 0046f6d4  FUN_0046f6d4 =====

void FUN_0046f6d4(undefined8 *param_1)

{
  FUN_0046ef00(*param_1);
  return;
}


// ===== 0046f6dc  FUN_0046f6dc =====

void FUN_0046f6dc(long *param_1)

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


// ===== 0046f740  FUN_0046f740 =====

void FUN_0046f740(long *param_1)

{
  long *plVar1;
  float fVar2;
  
  plVar1 = *(long **)(*param_1 + 0x10);
  if (plVar1 != (long *)0x0) {
    fVar2 = (float)NEON_fminnm(*(undefined4 *)(*(long *)(*param_1 + 0x18) + 0x3a8),0x41200000);
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
                    /* WARNING: Could not recover jumptable at 0x0046f76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x70))(fVar2);
    return;
  }
  return;
}


// ===== 0046f774  FUN_0046f774 =====

void FUN_0046f774(long *param_1)

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


// ===== 0046f7d8  FUN_0046f7d8 =====

void FUN_0046f7d8(undefined8 *param_1)

{
  FUN_0046e394(*param_1);
  return;
}


// ===== 0046f7e0  FUN_0046f7e0 =====

void FUN_0046f7e0(long *param_1)

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


// ===== 0046f844  FUN_0046f844 =====

void FUN_0046f844(undefined8 *param_1)

{
  FUN_0046f304(*param_1);
  return;
}


// ===== 0046f84c  FUN_0046f84c =====

void FUN_0046f84c(long *param_1)

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


// ===== 0046f8b0  FUN_0046f8b0 =====

void FUN_0046f8b0(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 0046f8d4  FUN_0046f8d4 =====

void FUN_0046f8d4(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0046f8e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0xe8))();
    return;
  }
  return;
}


// ===== 0046f8ec  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0046f8f0  FUN_0046f8f0 =====

void FUN_0046f8f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1ced0;
  FUN_005466c0();
  return;
}


// ===== 0046f900  FUN_0046f900 =====

void FUN_0046f900(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1ced0;
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 0046f930  FUN_0046f930 =====

void FUN_0046f930(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0046f938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}


// ===== 0046f93c  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0046f940  FUN_0046f940 =====

undefined8 FUN_0046f940(void)

{
  return 1;
}


// ===== 0046f948  FUN_0046f948 =====

undefined8 FUN_0046f948(void)

{
  return 1;
}


// ===== 0046f950  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0046f954  FUN_0046f954 =====

undefined1  [16] FUN_0046f954(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  puVar6 = (undefined8 *)operator_new(0xe8);
  uVar2 = *param_2;
  plVar3 = (long *)param_2[1];
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_00d1cf38;
  if (plVar3 == (long *)0x0) {
    uVar7 = *param_3;
    puVar6[5] = 0;
    puVar6[3] = &PTR_FUN_00d1cf70;
    puVar6[4] = uVar2;
    FUN_00512b50(puVar6 + 6,uVar7);
    puVar6[0x1c] = 0;
    puVar6[0x15] = 0;
    puVar6[0x14] = 0;
    puVar6[0x17] = 0;
    puVar6[0x16] = 0;
    puVar6[0x19] = 0;
    puVar6[0x18] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x13] = 0;
    puVar6[0x12] = 0;
  }
  else {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar7 = *param_3;
    puVar6[5] = plVar3;
    puVar6[3] = &PTR_FUN_00d1cf70;
    puVar6[4] = uVar2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    FUN_00512b50(puVar6 + 6,uVar7);
    puVar6[0x1c] = 0;
    puVar6[0x15] = 0;
    puVar6[0x14] = 0;
    puVar6[0x17] = 0;
    puVar6[0x16] = 0;
    puVar6[0x19] = 0;
    puVar6[0x18] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x13] = 0;
    puVar6[0x12] = 0;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_005466cc(plVar3);
    }
  }
  auVar9._8_8_ = puVar6;
  auVar9._0_8_ = puVar6 + 3;
  return auVar9;
}


// ===== 0046fa68  FUN_0046fa68 =====

void FUN_0046fa68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1cf38;
  FUN_005466c0();
  return;
}


// ===== 0046fa78  FUN_0046fa78 =====

void FUN_0046fa78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1cf38;
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 0046faa8  FUN_0046faa8 =====

void FUN_0046faa8(long param_1)

{
  FUN_00470c48(param_1 + 0x18);
  return;
}


// ===== 0046fab0  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0046fab4  FUN_0046fab4 =====

undefined8 FUN_0046fab4(long param_1,void *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  void *local_60;
  void *local_58;
  void *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  lVar1 = param_1 + 0x78;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_005467a4(lVar1);
  local_60 = (void *)0x0;
  local_58 = (void *)0x0;
  local_50 = (void *)0x0;
  if (param_3 != 0) {
    if ((long)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_60 = operator_new(param_3);
    pvVar3 = (void *)((long)local_60 + param_3);
    local_50 = pvVar3;
    memcpy(local_60,param_2,param_3);
    local_58 = pvVar3;
  }
  lVar2 = param_1 + 0xa0;
  FUN_0046fdc4(lVar2,&local_60);
  if (local_60 != (void *)0x0) {
    local_58 = local_60;
    operator_delete(local_60);
  }
  uVar5 = *(ulong *)(param_1 + 200);
  if (uVar5 < 5) {
    FUN_005467c8(lVar1);
  }
  else {
    while (6 < uVar5) {
      FUN_004708d8(lVar2);
      uVar5 = *(ulong *)(param_1 + 200);
    }
    puVar6 = (undefined8 *)
             (*(long *)(*(long *)(param_1 + 0xa8) + (*(ulong *)(param_1 + 0xc0) / 0xaa) * 8) +
             (*(ulong *)(param_1 + 0xc0) % 0xaa) * 0x18);
    uVar9 = puVar6[1];
    uVar8 = *puVar6;
    *puVar6 = 0;
    puVar6[1] = 0;
    uVar7 = puVar6[2];
    puVar6[2] = 0;
    FUN_004708d8(lVar2);
    FUN_005467c8(lVar1);
    puVar6 = (undefined8 *)operator_new(0x28);
    puVar6[4] = uVar7;
    *puVar6 = &PTR_FUN_00d1cfa0;
    puVar6[1] = param_1;
    puVar6[3] = uVar9;
    puVar6[2] = uVar8;
    FUN_00512cf8(param_1 + 0x18,puVar6);
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0046fc2c  FUN_0046fc2c =====

undefined8 FUN_0046fc2c(void)

{
  return 1;
}


// ===== 0046fc34  FUN_0046fc34 =====

void FUN_0046fc34(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  void *pvVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  FUN_00470af4((undefined8 *)(param_1 + 0xa0));
  puVar2 = *(undefined8 **)(param_1 + 0xb0);
  puVar8 = *(undefined8 **)(param_1 + 0xa8);
  if (*(undefined8 **)(param_1 + 0xa8) != puVar2) {
    do {
      puVar9 = puVar8 + 1;
      operator_delete((void *)*puVar8);
      puVar8 = puVar9;
    } while (puVar9 != puVar2);
    lVar6 = *(long *)(param_1 + 0xb0);
    if (lVar6 != *(long *)(param_1 + 0xa8)) {
      *(ulong *)(param_1 + 0xb0) =
           lVar6 + ((*(long *)(param_1 + 0xa8) - lVar6) + 7U & 0xfffffffffffffff8);
    }
  }
  pvVar5 = *(void **)(param_1 + 0xa0);
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  FUN_00546ab0(param_1 + 0x78);
  FUN_00512bf4(param_1 + 0x18);
  plVar7 = *(long **)(param_1 + 0x10);
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
      return;
    }
  }
  return;
}


// ===== 0046fd00  FUN_0046fd00 =====

void FUN_0046fd00(void *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  void *pvVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  FUN_00470af4((undefined8 *)((long)param_1 + 0xa0));
  puVar2 = *(undefined8 **)((long)param_1 + 0xb0);
  puVar8 = *(undefined8 **)((long)param_1 + 0xa8);
  if (*(undefined8 **)((long)param_1 + 0xa8) != puVar2) {
    do {
      puVar9 = puVar8 + 1;
      operator_delete((void *)*puVar8);
      puVar8 = puVar9;
    } while (puVar9 != puVar2);
    lVar6 = *(long *)((long)param_1 + 0xb0);
    if (lVar6 != *(long *)((long)param_1 + 0xa8)) {
      *(ulong *)((long)param_1 + 0xb0) =
           lVar6 + ((*(long *)((long)param_1 + 0xa8) - lVar6) + 7U & 0xfffffffffffffff8);
    }
  }
  pvVar5 = *(void **)((long)param_1 + 0xa0);
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  FUN_00546ab0((long)param_1 + 0x78);
  FUN_00512bf4((long)param_1 + 0x18);
  plVar7 = *(long **)((long)param_1 + 0x10);
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
  operator_delete(param_1);
  return;
}


// ===== 0046fdc4  FUN_0046fdc4 =====

long FUN_0046fdc4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar6 = *(long *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x10);
  lVar3 = 0;
  if (lVar5 != lVar6) {
    lVar3 = (lVar5 - lVar6 >> 3) * 0xaa + -1;
  }
  if (lVar3 == *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) {
    FUN_0046feec(param_1);
    lVar6 = *(long *)(param_1 + 8);
    lVar5 = *(long *)(param_1 + 0x10);
  }
  if (lVar5 != lVar6) {
    uVar1 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
    lVar3 = *(long *)(lVar6 + (uVar1 / 0xaa) * 8);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar3 + (uVar1 % 0xaa) * 0x18);
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      uVar7 = *param_2;
      puVar4[1] = param_2[1];
      *puVar4 = uVar7;
      puVar4[2] = param_2[2];
      param_2[1] = 0;
      param_2[2] = 0;
      *param_2 = 0;
      lVar3 = *(long *)(param_1 + 0x28) + 1;
      uVar1 = *(long *)(param_1 + 0x20) + lVar3;
      *(long *)(param_1 + 0x28) = lVar3;
      plVar2 = (long *)(*(long *)(param_1 + 8) + (uVar1 / 0xaa) * 8);
      lVar6 = *plVar2;
      lVar3 = 0;
      if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
        lVar3 = lVar6 + (uVar1 % 0xaa) * 0x18;
      }
      if (lVar3 == lVar6) {
        lVar3 = plVar2[-1] + 0xff0;
      }
      return lVar3 + -0x18;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h",
             0x23,"__location != nullptr","null pointer given to construct_at");
}


// ===== 0046feec  FUN_0046feec =====

void FUN_0046feec(long *param_1)

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
  if ((ulong)param_1[4] < 0xaa) {
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
      FUN_00470590(&local_60,&local_68);
      lVar4 = param_1[2];
      lVar7 = lVar4;
      if (lVar4 != param_1[1]) {
        do {
          lVar7 = lVar7 + -8;
          FUN_00470740(&local_60,lVar7);
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
      goto LAB_0047006c;
    }
    if (lVar4 != param_1[2]) {
      local_60 = operator_new(0xff0);
      FUN_00470248(param_1,&local_60);
      goto LAB_0047006c;
    }
    local_60 = operator_new(0xff0);
    FUN_004703f8(param_1,&local_60);
    local_60 = *(void **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0xaa;
    local_60 = *(void **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_00470098(param_1,&local_60);
LAB_0047006c:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00470098  FUN_00470098 =====

void FUN_00470098(undefined8 *param_1,undefined8 *param_2)

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
  if (puVar11 != (undefined8 *)param_1[3]) goto LAB_004701ec;
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
    goto LAB_004701ec;
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
      if (uVar3 == uVar9) goto LAB_004701d4;
    }
    do {
      puVar10 = puVar8 + 1;
      *puVar8 = *__src;
      puVar8 = puVar10;
      __src = __src + 1;
    } while (puVar10 != puVar11);
  }
LAB_004701d4:
  *param_1 = pvVar5;
  param_1[1] = puVar1;
  param_1[2] = puVar11;
  param_1[3] = (void *)((long)pvVar5 + uVar7 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2);
    puVar11 = (undefined8 *)param_1[2];
  }
LAB_004701ec:
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


// ===== 00470248  FUN_00470248 =====

void FUN_00470248(undefined8 *param_1,undefined8 *param_2)

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
  if (puVar11 != (undefined8 *)param_1[3]) goto LAB_0047039c;
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
    goto LAB_0047039c;
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
      if (uVar3 == uVar9) goto LAB_00470384;
    }
    do {
      puVar10 = puVar8 + 1;
      *puVar8 = *__src;
      puVar8 = puVar10;
      __src = __src + 1;
    } while (puVar10 != puVar11);
  }
LAB_00470384:
  *param_1 = pvVar5;
  param_1[1] = puVar1;
  param_1[2] = puVar11;
  param_1[3] = (void *)((long)pvVar5 + uVar7 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2);
    puVar11 = (undefined8 *)param_1[2];
  }
LAB_0047039c:
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


// ===== 004703f8  FUN_004703f8 =====

void FUN_004703f8(long *param_1,undefined8 *param_2)

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
  if (__src != (undefined8 *)*param_1) goto LAB_00470560;
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
    goto LAB_00470560;
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
      if (uVar2 == uVar10) goto LAB_00470548;
    }
    do {
      puVar8 = puVar7 + 1;
      *puVar7 = *puVar9;
      puVar7 = puVar8;
      puVar9 = puVar9 + 1;
    } while (puVar8 != puVar6);
  }
LAB_00470548:
  *param_1 = (long)pvVar3;
  param_1[1] = (long)__dest;
  param_1[2] = (long)puVar6;
  param_1[3] = (long)((long)pvVar3 + uVar5 * 8);
  if (__src != (undefined8 *)0x0) {
    operator_delete(__src);
    __dest = (undefined8 *)param_1[1];
  }
LAB_00470560:
  __dest[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}


// ===== 00470590  FUN_00470590 =====

void FUN_00470590(undefined8 *param_1,undefined8 *param_2)

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
  if (puVar11 != (undefined8 *)param_1[3]) goto LAB_004706e4;
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
    goto LAB_004706e4;
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
      if (uVar3 == uVar9) goto LAB_004706cc;
    }
    do {
      puVar10 = puVar8 + 1;
      *puVar8 = *__src;
      puVar8 = puVar10;
      __src = __src + 1;
    } while (puVar10 != puVar11);
  }
LAB_004706cc:
  *param_1 = pvVar5;
  param_1[1] = puVar1;
  param_1[2] = puVar11;
  param_1[3] = (void *)((long)pvVar5 + uVar7 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2);
    puVar11 = (undefined8 *)param_1[2];
  }
LAB_004706e4:
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


// ===== 00470740  FUN_00470740 =====

void FUN_00470740(long *param_1,undefined8 *param_2)

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
  if (__src != (undefined8 *)*param_1) goto LAB_004708a8;
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
    goto LAB_004708a8;
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
      if (uVar2 == uVar10) goto LAB_00470890;
    }
    do {
      puVar8 = puVar7 + 1;
      *puVar7 = *puVar9;
      puVar7 = puVar8;
      puVar9 = puVar9 + 1;
    } while (puVar8 != puVar6);
  }
LAB_00470890:
  *param_1 = (long)pvVar3;
  param_1[1] = (long)__dest;
  param_1[2] = (long)puVar6;
  param_1[3] = (long)((long)pvVar3 + uVar5 * 8);
  if (__src != (undefined8 *)0x0) {
    operator_delete(__src);
    __dest = (undefined8 *)param_1[1];
  }
LAB_004708a8:
  __dest[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}


// ===== 004708d8  FUN_004708d8 =====

void FUN_004708d8(long param_1)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  lVar3 = *(long *)(*(long *)(param_1 + 8) + (uVar2 / 0xaa) * 8);
  if (lVar3 != 0) {
    pvVar1 = *(void **)(lVar3 + (uVar2 % 0xaa) * 0x18);
    if (pvVar1 != (void *)0x0) {
      *(void **)(lVar3 + (uVar2 % 0xaa) * 0x18 + 8) = pvVar1;
      operator_delete(pvVar1);
      uVar2 = *(ulong *)(param_1 + 0x20);
    }
    *(ulong *)(param_1 + 0x20) = uVar2 + 1;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
    if (0x153 < uVar2 + 1) {
      operator_delete((void *)**(undefined8 **)(param_1 + 8));
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0xaa;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h",
             0x3f,"__loc != nullptr","null pointer given to destroy_at");
}


// ===== 004709a4  FUN_004709a4 =====

void FUN_004709a4(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[2];
  *param_1 = &PTR_FUN_00d1cfa0;
  if (pvVar1 != (void *)0x0) {
    param_1[3] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 004709c8  FUN_004709c8 =====

void FUN_004709c8(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[2];
  *param_1 = &PTR_FUN_00d1cfa0;
  if (pvVar1 != (void *)0x0) {
    param_1[3] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00470a04  FUN_00470a04 =====

void FUN_00470a04(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_180 [16];
  code *local_170;
  code *pcStack_168;
  undefined1 auStack_158 [144];
  undefined1 auStack_c8 [144];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(param_1 + 8);
  uVar2 = FUN_006258f0();
  FUN_007dc060(auStack_c8,0,uVar2);
  FUN_007da040(auStack_c8,*(long *)(param_1 + 0x10),
               *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10));
  plVar3 = (long *)(**(code **)(**(long **)(lVar4 + 8) + 0x60))();
  FUN_007dc0a0(auStack_158,auStack_c8);
  local_170 = FUN_004473ec;
  pcStack_168 = FUN_00470aec;
  (**(code **)(*plVar3 + 8))(plVar3,0,auStack_158,auStack_180);
  (*local_170)(0,auStack_180,auStack_180);
  FUN_007dc1b4(auStack_158);
  FUN_007dc1b4(auStack_c8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00470aec  FUN_00470aec =====

undefined8 FUN_00470aec(void)

{
  return 1;
}


// ===== 00470af4  FUN_00470af4 =====

void FUN_00470af4(long param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar5;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  if (puVar5 != puVar2) {
    uVar6 = *(ulong *)(param_1 + 0x20);
    uVar4 = *(long *)(param_1 + 0x28) + uVar6;
    plVar7 = puVar2 + uVar6 / 0xaa;
    puVar9 = (undefined8 *)(*plVar7 + (uVar6 % 0xaa) * 0x18);
    puVar8 = (undefined8 *)(puVar2[uVar4 / 0xaa] + (uVar4 % 0xaa) * 0x18);
    if (puVar9 != puVar8) {
      do {
        if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x3f,"__loc != nullptr","null pointer given to destroy_at");
        }
        pvVar1 = (void *)*puVar9;
        if (pvVar1 != (void *)0x0) {
          puVar9[1] = pvVar1;
          operator_delete(pvVar1);
        }
        puVar9 = puVar9 + 3;
        if ((long)puVar9 - *plVar7 == 0xff0) {
          plVar7 = plVar7 + 1;
          puVar9 = (undefined8 *)*plVar7;
        }
      } while (puVar9 != puVar8);
      puVar2 = *(undefined8 **)(param_1 + 8);
      puVar5 = *(undefined8 **)(param_1 + 0x10);
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  uVar4 = (long)puVar5 - (long)puVar2;
  while (0x10 < uVar4) {
    operator_delete((void *)*puVar2);
    puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar2;
    uVar4 = *(long *)(param_1 + 0x10) - (long)puVar2;
  }
  if (uVar4 >> 3 == 1) {
    uVar3 = 0x55;
  }
  else {
    if (uVar4 >> 3 != 2) {
      return;
    }
    uVar3 = 0xaa;
  }
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  return;
}


// ===== 00470c48  FUN_00470c48 =====

void FUN_00470c48(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  void *pvVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x3f,"__loc != nullptr","null pointer given to destroy_at");
  }
  FUN_00470af4((undefined8 *)(param_1 + 0xa0));
  puVar2 = *(undefined8 **)(param_1 + 0xb0);
  puVar8 = *(undefined8 **)(param_1 + 0xa8);
  if (*(undefined8 **)(param_1 + 0xa8) != puVar2) {
    do {
      puVar9 = puVar8 + 1;
      operator_delete((void *)*puVar8);
      puVar8 = puVar9;
    } while (puVar9 != puVar2);
    lVar6 = *(long *)(param_1 + 0xb0);
    if (lVar6 != *(long *)(param_1 + 0xa8)) {
      *(ulong *)(param_1 + 0xb0) =
           lVar6 + ((*(long *)(param_1 + 0xa8) - lVar6) + 7U & 0xfffffffffffffff8);
    }
  }
  pvVar5 = *(void **)(param_1 + 0xa0);
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  FUN_00546ab0(param_1 + 0x78);
  FUN_00512bf4(param_1 + 0x18);
  plVar7 = *(long **)(param_1 + 0x10);
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
      return;
    }
  }
  return;
}


// ===== 00470d40  FUN_00470d40 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00470d40(char *param_1,undefined8 *param_2)

{
  char *pcVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    pcVar1 = (char *)*param_2;
    uVar2 = param_2[1];
    if (uVar2 < 0x17) {
      param_1[0x17] = (char)uVar2;
      pcVar3 = param_1;
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar7 = (uVar2 | 0xf) + 1;
      pcVar3 = (char *)operator_new(uVar7);
      *(char **)param_1 = pcVar3;
      *(ulong *)(param_1 + 8) = uVar2;
      *(ulong *)(param_1 + 0x10) = uVar7 | 0x8000000000000000;
    }
    if ((pcVar3 <= pcVar1) && (pcVar1 < pcVar3 + uVar2 + 1)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(pcVar3,pcVar1,uVar2 + 1);
  }
  else {
    uVar8 = *param_2;
    uVar4 = param_2[2];
    *(undefined8 *)(param_1 + 8) = param_2[1];
    *(undefined8 *)param_1 = uVar8;
    *(undefined8 *)(param_1 + 0x10) = uVar4;
  }
  pcVar1 = *(char **)param_1;
  uVar2 = *(ulong *)(param_1 + 8);
  if (-1 < param_1[0x17]) {
    pcVar1 = param_1;
    uVar2 = (ulong)(byte)param_1[0x17];
  }
  if (uVar2 != 0) {
    pcVar3 = pcVar1;
    if (7 < uVar2) {
      uVar5 = uVar2 & 0xfffffffffffffff8;
      pcVar3 = pcVar1 + uVar5;
      pcVar6 = pcVar1 + 3;
      uVar7 = uVar5;
      do {
        uVar9 = NEON_cmeq(*(undefined8 *)(pcVar6 + -3),0x5c5c5c5c5c5c5c5c,1);
        if ((uVar9 & 1) != 0) {
          pcVar6[-3] = '/';
        }
        if ((uVar9 & 0x100) != 0) {
          pcVar6[-2] = '/';
        }
        if ((uVar9 & 0x10000) != 0) {
          pcVar6[-1] = '/';
        }
        if ((uVar9 & 0x1000000) != 0) {
          *pcVar6 = '/';
        }
        if ((uVar9 & 0x100000000) != 0) {
          pcVar6[1] = '/';
        }
        if ((uVar9 & 0x10000000000) != 0) {
          pcVar6[2] = '/';
        }
        if ((uVar9 & 0x1000000000000) != 0) {
          pcVar6[3] = '/';
        }
        if ((uVar9 & 0x100000000000000) != 0) {
          pcVar6[4] = '/';
        }
        uVar7 = uVar7 - 8;
        pcVar6 = pcVar6 + 8;
      } while (uVar7 != 0);
      if (uVar2 == uVar5) {
        return;
      }
    }
    do {
      if (*pcVar3 == '\\') {
        *pcVar3 = '/';
      }
      pcVar3 = pcVar3 + 1;
    } while (pcVar3 != pcVar1 + uVar2);
  }
  return;
}


// ===== 00470f38  FUN_00470f38 =====

void FUN_00470f38(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *__dest;
  size_t __n;
  size_t __n_00;
  undefined8 *__src;
  byte bVar3;
  byte bVar4;
  undefined8 *puVar5;
  
  bVar3 = *(byte *)((long)param_2 + 0x17);
  bVar4 = *(byte *)((long)param_3 + 0x17);
  __n = param_2[1];
  if (-1 < (char)bVar3) {
    __n = (ulong)bVar3;
  }
  __n_00 = param_3[1];
  if (-1 < (char)bVar4) {
    __n_00 = (ulong)bVar4;
  }
  uVar2 = __n_00 + __n;
  if (uVar2 < 0x7ffffffffffffff0) {
    if (uVar2 < 0x17) {
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      *(char *)((long)param_1 + 0x17) = (char)uVar2;
      puVar5 = param_1;
    }
    else {
      uVar1 = (uVar2 | 0xf) + 1;
      puVar5 = (undefined8 *)operator_new(uVar1);
      *param_1 = puVar5;
      param_1[1] = uVar2;
      param_1[2] = uVar1 | 0x8000000000000000;
    }
    __src = (undefined8 *)*param_2;
    if (-1 < (char)bVar3) {
      __src = param_2;
    }
    __dest = (undefined8 *)((long)puVar5 + __n);
    if ((__src < puVar5) || (__dest <= __src)) {
      if (__n != 0) {
        memmove(puVar5,__src,__n);
      }
      puVar5 = (undefined8 *)*param_3;
      if (-1 < (char)bVar4) {
        puVar5 = param_3;
      }
      if ((puVar5 < __dest) || ((undefined8 *)((long)__dest + __n_00) <= puVar5)) {
        if (__n_00 != 0) {
          memmove(__dest,puVar5,__n_00);
        }
        *(undefined1 *)((long)__dest + __n_00) = 0;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0047107c  FUN_0047107c =====

void FUN_0047107c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1cfc8;
  FUN_005466c0();
  return;
}


// ===== 0047108c  FUN_0047108c =====

void FUN_0047108c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1cfc8;
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 004710bc  FUN_004710bc =====

void FUN_004710bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004710c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}


// ===== 004710c8  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 004710cc  FUN_004710cc =====

void FUN_004710cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *__src;
  ulong uVar3;
  void *pvVar4;
  undefined8 *__dest;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *(undefined1 *)(param_1 + 2) = 0;
  puVar1 = param_1 + 3;
  *param_1 = &PTR_FUN_00d1d000;
  param_1[1] = 0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __src = (undefined8 *)*param_2;
    uVar3 = param_2[1];
    if (uVar3 < 0x17) {
      *(char *)((long)param_1 + 0x2f) = (char)uVar3;
      __dest = puVar1;
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar2 = (uVar3 | 0xf) + 1;
      __dest = (undefined8 *)operator_new(uVar2);
      param_1[3] = __dest;
      param_1[4] = uVar3;
      param_1[5] = uVar2 | 0x8000000000000000;
    }
    if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + uVar3 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar3 + 1);
    uVar3 = FUN_00417e08();
  }
  else {
    uVar7 = param_2[1];
    uVar6 = *param_2;
    param_1[5] = param_2[2];
    param_1[4] = uVar7;
    *puVar1 = uVar6;
    uVar3 = FUN_00417e08();
  }
  if ((uVar3 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e90,"../../discord_native_lib/src/media/loopback_audio_stream.cpp",0x3f9,
                 "Creating OggWriter with file: ",puVar1);
  }
  pvVar4 = operator_new(0x18);
  FUN_00553fe4(pvVar4,puVar1);
  pvVar5 = (void *)param_1[1];
  param_1[1] = pvVar4;
  if (pvVar5 != (void *)0x0) {
    FUN_00554038(pvVar5);
    operator_delete(pvVar5);
    pvVar4 = (void *)param_1[1];
  }
  if (*(long *)((long)pvVar4 + 8) != 0) {
    FUN_00554060(pvVar4,48000,1);
    FUN_0055415c(param_1[1],&DAT_00d60238,&DAT_00d60250);
    return;
  }
  uVar3 = FUN_004022fc();
  if ((uVar3 & 1) != 0) {
    return;
  }
  FUN_00623bb0(&DAT_001f4e90,"../../discord_native_lib/src/media/loopback_audio_stream.cpp",0x442,
               "Failed to create Ogg file: ",puVar1);
  return;
}


// ===== 00471298  FUN_00471298 =====

bool FUN_00471298(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  
  bVar2 = *(long *)(*(long *)(param_1 + 8) + 8) != 0;
  bVar3 = *(char *)(param_1 + 0x10) == '\0';
  if (((bVar2 && bVar3) && ((*(byte *)(param_2 + 1) & 0x7f) == 0x78)) &&
     (uVar1 = (*(uint *)(param_2 + 8) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 8) & 0xff00ff) << 8,
     (uVar1 >> 0x10 | uVar1 << 0x10) == 0x141e)) {
    uVar4 = FUN_00510698(param_2,param_3);
    if (uVar4 <= param_3 && param_3 - uVar4 != 0) {
      FUN_00554370(*(undefined8 *)(param_1 + 8),param_2 + uVar4,param_3 - uVar4);
    }
  }
  return bVar2 && bVar3;
}


// ===== 0047132c  FUN_0047132c =====

undefined8 FUN_0047132c(void)

{
  return 1;
}


// ===== 00471334  FUN_00471334 =====

void FUN_00471334(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_00d1d000;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  pvVar1 = (void *)param_1[1];
  param_1[1] = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_00554038(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00471390  FUN_00471390 =====

void FUN_00471390(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_00d1d000;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  pvVar1 = (void *)param_1[1];
  param_1[1] = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_00554038(pvVar1);
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 004713e8  FUN_004713e8 =====

void FUN_004713e8(long *param_1)

{
  FUN_00492a00(*(undefined8 *)(*param_1 + 200));
  return;
}


// ===== 004713f4  _INIT_1 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_1(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  DAT_00d60237 = 4;
  DAT_00d60224 = 0;
  DAT_00d60220 = 0x7375706f;
  __cxa_atexit(PTR_FUN_00d51c00,&DAT_00d60220,&PTR_LOOP_00d19390);
  pcVar4 = (char *)operator_new(0x20);
  uVar3 = s_Opus_provided_by_WebRTC_001b0944._0_8_;
  uRam0000000000d60248 = _UNK_001f3b08;
  _DAT_00d60240 = _DAT_001f3b00;
  DAT_00d60238 = pcVar4;
  if ((pcVar4 < "pus provided by WebRTC") && ("Opus provided by WebRTC" < pcVar4 + 0x17)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  uVar1 = CONCAT17(s_Opus_provided_by_WebRTC_001b0944[0xf],s_Opus_provided_by_WebRTC_001b0944._8_7_)
  ;
  pcVar4[0x17] = '\0';
  uVar2 = CONCAT71(s_Opus_provided_by_WebRTC_001b0944._16_7_,s_Opus_provided_by_WebRTC_001b0944[0xf]
                  );
  *(undefined8 *)(pcVar4 + 8) = uVar1;
  *(undefined8 *)pcVar4 = uVar3;
  *(undefined8 *)(pcVar4 + 0xf) = uVar2;
  __cxa_atexit(PTR_FUN_00d51c00,&DAT_00d60238,&PTR_LOOP_00d19390);
  DAT_00d60267 = 0xe;
  DAT_00d6025e = 0;
  DAT_00d60250._0_1_ = s_Discord_Client_001c7d05[0];
  DAT_00d60250._1_1_ = s_Discord_Client_001c7d05[1];
  DAT_00d60250._2_1_ = s_Discord_Client_001c7d05[2];
  DAT_00d60250._3_1_ = s_Discord_Client_001c7d05[3];
  DAT_00d60250._4_1_ = s_Discord_Client_001c7d05[4];
  DAT_00d60250._5_1_ = s_Discord_Client_001c7d05[5];
  DAT_00d60250._6_1_ = s_Discord_Client_001c7d05[6];
  DAT_00d60250._7_1_ = s_Discord_Client_001c7d05[7];
  uRam0000000000d60258._0_1_ = s_Discord_Client_001c7d05[8];
  uRam0000000000d60258._1_1_ = s_Discord_Client_001c7d05[9];
  uRam0000000000d60258._2_1_ = s_Discord_Client_001c7d05[10];
  uRam0000000000d60258._3_1_ = s_Discord_Client_001c7d05[0xb];
  uRam0000000000d60258._4_1_ = s_Discord_Client_001c7d05[0xc];
  uRam0000000000d60258._5_1_ = s_Discord_Client_001c7d05[0xd];
  __cxa_atexit(PTR_FUN_00d51c00,&DAT_00d60250,&PTR_LOOP_00d19390);
  DAT_00d6027f = 0xd;
  DAT_00d60268._0_1_ = s_recording_ogg_001b65cd[0];
  DAT_00d60268._1_1_ = s_recording_ogg_001b65cd[1];
  DAT_00d60268._2_1_ = s_recording_ogg_001b65cd[2];
  DAT_00d60268._3_1_ = s_recording_ogg_001b65cd[3];
  DAT_00d60268._4_1_ = s_recording_ogg_001b65cd[4];
  DAT_00d60268._5_1_ = s_recording_ogg_001b65cd[5];
  DAT_00d60268._6_1_ = s_recording_ogg_001b65cd[6];
  DAT_00d60268._7_1_ = s_recording_ogg_001b65cd[7];
  DAT_00d60270._0_1_ = s_recording_ogg_001b65cd[8];
  DAT_00d60270._1_1_ = s_recording_ogg_001b65cd[9];
  DAT_00d60270._2_1_ = s_recording_ogg_001b65cd[10];
  DAT_00d60270._3_1_ = s_recording_ogg_001b65cd[0xb];
  DAT_00d60270._4_1_ = s_recording_ogg_001b65cd[0xc];
  DAT_00d60270._5_1_ = 0;
  __cxa_atexit(PTR_FUN_00d51c00,&DAT_00d60268,&PTR_LOOP_00d19390);
  return;
}


// ===== 00471580  FUN_00471580 =====

void FUN_00471580(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x60);
  FUN_00512b50(pvVar1,param_2);
  *param_1 = pvVar1;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  return;
}


// ===== 00471604  FUN_00471604 =====

void FUN_00471604(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x1a);
  *(int *)(param_1 + 0x1a) = iVar1 + 1;
  if (iVar1 + 1 == 10) {
    uVar3 = *param_1;
    *(undefined4 *)(param_1 + 0x1a) = 0;
    puVar2 = (undefined8 *)operator_new(0x10);
    *puVar2 = &PTR_FUN_00d1d030;
    puVar2[1] = param_1;
    FUN_00512cf8(uVar3);
    return;
  }
  return;
}


// ===== 00471664  FUN_00471664 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00471664(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined *puVar20;
  undefined ***pppuVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  double dVar24;
  undefined8 uVar25;
  ulong uVar26;
  ulong uVar27;
  undefined *puVar28;
  long *plVar29;
  long lVar30;
  long *plVar31;
  long *plVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  long lVar41;
  undefined1 auVar42 [16];
  int local_494;
  undefined1 auStack_490 [8];
  undefined4 local_488;
  char local_480;
  undefined1 auStack_478 [8];
  int local_470;
  char local_468;
  int local_434;
  int local_430;
  int local_42c;
  uint local_3fc;
  uint local_3f8;
  uint local_3f4;
  undefined **local_198 [9];
  void *local_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined *local_128 [3];
  undefined8 uStack_110;
  undefined4 auStack_108 [30];
  long local_90;
  
  lVar8 = tpidr_el0;
  local_90 = *(long *)(lVar8 + 0x28);
  FUN_005467a4();
  dVar24 = DAT_001f4ff8;
  uVar23 = _UNK_001f4ad8;
  uVar22 = _DAT_001f4ad0;
  plVar29 = *(long **)(param_1 + 0x40);
  if (plVar29 != (long *)0x0) {
    pppuVar21 = local_198 + 1;
    ppuVar4 = *(undefined ***)PTR_PTR_00d51b50;
    ppuVar6 = *(undefined ***)(PTR_PTR_00d51b50 + 8);
    uVar5 = *(undefined8 *)(PTR_PTR_00d51b50 + 0x10);
    uVar7 = *(undefined8 *)(PTR_PTR_00d51b50 + 0x18);
    puVar1 = PTR_DAT_00d51b20 + 0x10;
    do {
      puVar20 = PTR_DAT_00d51b48;
      for (plVar32 = (long *)plVar29[5]; PTR_DAT_00d51b48 = puVar20, plVar32 != (long *)0x0;
          plVar32 = (long *)*plVar32) {
        local_198[0] = ppuVar6;
        local_128[0] = puVar20 + 0x40;
        *(undefined8 *)(ppuVar6[-3] + (long)local_198) = uVar5;
        puVar28 = local_198[0][-3];
        FUN_00520e8c(puVar28 + (long)local_198,pppuVar21);
        local_198[0] = (undefined **)(puVar20 + 0x18);
        *(undefined8 *)((long)&uStack_110 + (long)puVar28) = 0;
        *(undefined4 *)((long)auStack_108 + (long)puVar28) = 0xffffffff;
        local_128[0] = puVar20 + 0x40;
        FUN_0054a4c8(pppuVar21);
        local_130 = 0x10;
        uStack_148 = 0;
        local_150 = (void *)0x0;
        uStack_138 = 0;
        lStack_140 = 0;
        lVar30 = plVar32[5];
        local_198[1] = (undefined **)puVar1;
        if (lVar30 != 0) {
          FUN_005d3e18(auStack_478,lVar30,1);
          lVar41 = plVar32[0x3b];
          auVar19._8_8_ = uVar23;
          auVar19._0_8_ = uVar22;
          auVar18._8_8_ = uVar23;
          auVar18._0_8_ = uVar22;
          auVar17._8_8_ = uVar23;
          auVar17._0_8_ = uVar22;
          dVar33 = (double)NEON_ucvtf((ulong)local_3fc);
          lVar12 = lVar41 + 1;
          auVar34._8_8_ = plVar32[0x3c];
          auVar34._0_8_ = 0x31;
          auVar13._8_8_ = 0x32;
          auVar13._0_8_ = lVar12;
          auVar42 = NEON_cmhi(auVar13,auVar34,8);
          auVar14._8_8_ = 0x32;
          auVar14._0_8_ = lVar12;
          auVar35 = NEON_cmeq(auVar14,auVar34,8);
          auVar36._0_8_ = (long)auVar42._0_4_;
          auVar36._8_8_ = (long)auVar35._8_4_;
          auVar42._8_8_ = plVar32[0x3c] + 1;
          auVar42._0_8_ = lVar12;
          auVar35 = NEON_bsl(auVar36,auVar17,auVar42,1);
          plVar32[0x3c] = auVar35._8_8_;
          plVar32[0x3b] = auVar35._0_8_;
          plVar32[lVar41 + 9] = (long)(dVar33 / 1000.0);
          lVar41 = plVar32[0x6f];
          dVar33 = (double)NEON_ucvtf((ulong)local_3f4);
          lVar12 = lVar41 + 1;
          auVar37._8_8_ = plVar32[0x70];
          auVar37._0_8_ = 0x31;
          auVar15._8_8_ = 0x32;
          auVar15._0_8_ = lVar12;
          auVar42 = NEON_cmhi(auVar15,auVar37,8);
          auVar16._8_8_ = 0x32;
          auVar16._0_8_ = lVar12;
          auVar35 = NEON_cmeq(auVar16,auVar37,8);
          auVar38._0_8_ = (long)auVar42._0_4_;
          auVar38._8_8_ = (long)auVar35._8_4_;
          auVar9._8_8_ = plVar32[0x70] + 1;
          auVar9._0_8_ = lVar12;
          auVar35 = NEON_bsl(auVar38,auVar18,auVar9,1);
          plVar32[0x70] = auVar35._8_8_;
          plVar32[0x6f] = auVar35._0_8_;
          plVar32[lVar41 + 0x3d] = (long)(dVar33 / 1000.0);
          lVar12 = plVar32[0xa3];
          dVar33 = (double)NEON_ucvtf((ulong)local_3f8);
          lVar41 = lVar12 + 1;
          auVar39._8_8_ = plVar32[0xa4];
          auVar39._0_8_ = 0x31;
          auVar10._8_8_ = 0x32;
          auVar10._0_8_ = lVar41;
          auVar42 = NEON_cmhi(auVar10,auVar39,8);
          auVar11._8_8_ = 0x32;
          auVar11._0_8_ = lVar41;
          auVar35 = NEON_cmeq(auVar11,auVar39,8);
          auVar40._0_8_ = (long)auVar42._0_4_;
          auVar40._8_8_ = (long)auVar35._8_4_;
          auVar35._8_8_ = plVar32[0xa4] + 1;
          auVar35._0_8_ = lVar41;
          auVar35 = NEON_bsl(auVar40,auVar19,auVar35,1);
          plVar32[0xa4] = auVar35._8_8_;
          plVar32[0xa3] = auVar35._0_8_;
          plVar32[lVar12 + 0x71] = (long)(dVar33 / 1000.0);
          FUN_00842058(auStack_478);
        }
        if ((undefined8 *)plVar32[7] != (undefined8 *)plVar32[6]) {
          plVar31 = *(long **)plVar32[6];
          uVar25 = FUN_005f8e18(plVar31);
          (**(code **)(*plVar31 + 0x40))(auStack_478,plVar31);
          FUN_00471b14((double)local_42c / 1000.0,plVar32 + 0xa5);
          FUN_00471b14((double)local_430 / 1000.0,plVar32 + 0xb5);
          FUN_00471b14((double)local_434 / 1000.0,plVar32 + 0xad);
          FUN_0084546c(auStack_478);
          if (lVar30 != 0) {
            if (((plVar32[7] - plVar32[6] == 8) &&
                (uVar26 = FUN_005f32cc(uVar25,&local_494), (uVar26 & 1) != 0)) &&
               (local_494 < 10000)) {
              iVar2 = -local_494;
              if (-1 < local_494) {
                iVar2 = local_494;
              }
              FUN_00471b14((double)iVar2 / 1000.0,plVar32 + 0xbd);
            }
            FUN_005d4400(auStack_478,lVar30);
            iVar2 = 0;
            if (local_468 != '\0') {
              iVar2 = local_470;
            }
            (**(code **)(*plVar31 + 200))(auStack_490,plVar31);
            if (iVar2 != *(int *)(plVar32 + 0xcd)) {
              *(int *)(plVar32 + 0xcd) = iVar2;
              uVar3 = 0;
              if (local_480 != '\0') {
                uVar3 = local_488;
              }
              uVar26 = FUN_005f32b4(uVar25,iVar2);
              uVar27 = FUN_005f32c0(uVar25,uVar3);
              if ((uVar26 != 0) && (uVar27 != 0)) {
                uVar27 = ((long)((double)(uVar26 & 0xffffffff) / dVar24 + 0.5) -
                         (long)((double)(uVar27 & 0xffffffff) / dVar24 + 0.5)) +
                         ((uVar26 >> 0x20) - (uVar27 >> 0x20)) * 1000;
                uVar26 = -uVar27;
                if (-1 < (long)uVar27) {
                  uVar26 = uVar27;
                }
                if (uVar26 >> 4 < 0x271) {
                  FUN_00471b14((double)(long)uVar26 / 1000.0,plVar32 + 0xc5);
                }
              }
            }
          }
        }
        local_198[0] = ppuVar4;
        *(undefined8 *)(ppuVar4[-3] + (long)local_198) = uVar7;
        local_198[1] = &PTR_FUN_00d226c8;
        if (lStack_140 < 0) {
          operator_delete(local_150);
        }
        FUN_0054a488(pppuVar21);
        FUN_0054b3d4(local_198,PTR_PTR_00d51b50 + 8);
        thunk_FUN_00520cf4(local_128);
        puVar20 = PTR_DAT_00d51b48;
      }
      plVar29 = (long *)*plVar29;
    } while (plVar29 != (long *)0x0);
  }
  FUN_005467c8(param_1 + 8);
  if (*(long *)(lVar8 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00471b14  FUN_00471b14 =====

void FUN_00471b14(double param_1,double *param_2)

{
  long *plVar1;
  long *plVar2;
  double *pdVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  double *pdVar7;
  ulong uVar8;
  ulong uVar9;
  double *pdVar10;
  ulong uVar11;
  double dVar12;
  undefined1 auVar13 [16];
  
  dVar12 = DAT_001f55d8;
  uVar5 = (uint)(param_1 / *param_2);
  if (0x1f2 < (int)uVar5) {
    uVar5 = 499;
  }
  if ((int)uVar5 < 0) {
    return;
  }
  plVar4 = (long *)param_2[1];
  plVar2 = (long *)param_2[2];
  plVar1 = plVar4;
  do {
    if (plVar1 == plVar2) {
      lVar6 = (long)plVar2 - (long)plVar4 >> 3;
      uVar8 = lVar6 * -0x5555555555555555;
      uVar11 = (ulong)uVar5 / 0x32;
      param_2[5] = param_2[5] * 0.999235;
      param_2[4] = param_2[4] * 0.999235;
      if (uVar8 < uVar11 || uVar8 - uVar11 == 0) {
        FUN_00473b7c(param_2 + 1,uVar11 + lVar6 * 0x5555555555555555 + 1);
        plVar4 = (long *)param_2[1];
        uVar8 = ((long)param_2[2] - (long)plVar4 >> 3) * -0x5555555555555555;
      }
      if (uVar11 < uVar8) {
        plVar4 = plVar4 + uVar11 * 3;
        uVar11 = (ulong)(uVar5 % 0x32);
        lVar6 = *plVar4;
        uVar8 = plVar4[1] - lVar6 >> 3;
        if (uVar8 <= uVar11) {
          FUN_00473d70(plVar4,(uVar11 - uVar8) + 1);
          lVar6 = *plVar4;
          uVar8 = plVar4[1] - lVar6 >> 3;
        }
        if (uVar11 < uVar8) {
          auVar13 = NEON_fmov(0x3ff0000000000000,8);
          *(double *)(lVar6 + uVar11 * 8) = *(double *)(lVar6 + uVar11 * 8) + 1.0;
          dVar12 = param_2[6];
          if (dVar12 == param_1 || dVar12 < param_1 != (NAN(dVar12) || NAN(param_1))) {
            dVar12 = param_1;
          }
          param_2[5] = param_2[5] + param_1;
          param_2[4] = param_2[4] + auVar13._0_8_;
          param_2[6] = dVar12;
          param_2[7] = param_1;
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x587,
                 "__n < size()","vector[] index out of bounds");
    }
    pdVar7 = (double *)*plVar1;
    pdVar3 = (double *)plVar1[1];
    if (pdVar7 != pdVar3) {
      uVar8 = (long)pdVar3 + (-8 - (long)pdVar7);
      if (0x17 < uVar8) {
        uVar8 = (uVar8 >> 3) + 1;
        uVar9 = uVar8 & 0x3ffffffffffffffc;
        pdVar10 = pdVar7 + 2;
        uVar11 = uVar9;
        do {
          uVar11 = uVar11 - 4;
          pdVar10[-1] = pdVar10[-1] * 0.999235;
          pdVar10[-2] = pdVar10[-2] * 0.999235;
          pdVar10[1] = pdVar10[1] * 0.999235;
          *pdVar10 = *pdVar10 * 0.999235;
          pdVar10 = pdVar10 + 4;
        } while (uVar11 != 0);
        pdVar7 = pdVar7 + uVar9;
        if (uVar8 == uVar9) goto LAB_00471b80;
      }
      do {
        pdVar10 = pdVar7 + 1;
        *pdVar7 = *pdVar7 * dVar12;
        pdVar7 = pdVar10;
      } while (pdVar10 != pdVar3);
    }
LAB_00471b80:
    plVar1 = plVar1 + 3;
  } while( true );
}


// ===== 00471d40  FUN_00471d40 =====

void FUN_00471d40(undefined8 *param_1,long param_2,ulong param_3)

{
  double *pdVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  double *pdVar12;
  long *plVar13;
  double *pdVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  undefined2 uVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined8 uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auStack_88 [8];
  long *local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  FUN_005467a4(param_2 + 8);
  uVar9 = *(ulong *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  if (uVar9 != 0) {
    uVar10 = ((param_3 & 0xffffffff) * 8 + 8 ^ param_3 >> 0x20) * -0x622015f714c7d297;
    uVar19 = NEON_cnt(uVar9,1);
    uVar10 = (param_3 >> 0x20 ^ uVar10 >> 0x2f ^ uVar10) * -0x622015f714c7d297;
    uVar18 = NEON_uaddlv(uVar19,1);
    uVar17 = CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) & 0xffffffff;
    uVar10 = (uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297;
    if (uVar17 < 2) {
      uVar11 = uVar9 - 1 & uVar10;
    }
    else {
      uVar11 = uVar10;
      if (uVar9 <= uVar10) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar10 / uVar9;
        }
        uVar11 = uVar10 - uVar11 * uVar9;
      }
    }
    plVar13 = *(long **)(*(long *)(param_2 + 0x30) + uVar11 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      do {
        uVar16 = plVar13[1];
        if (uVar16 == uVar10) {
          if (plVar13[2] == param_3) {
            for (plVar13 = (long *)plVar13[5]; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
              local_80 = plVar13 + 2;
              lVar8 = FUN_00473ecc(param_1,local_80,&DAT_001f6ab0,&local_80,auStack_88);
              FUN_00472638(lVar8 + 0x28,plVar13 + 9);
              FUN_00472638(lVar8 + 0x40,plVar13 + 0x3d);
              FUN_00472638(lVar8 + 0x58,plVar13 + 0x71);
              dVar20 = (double)plVar13[0xa9];
              dVar22 = 0.0;
              dVar21 = 0.0;
              if (dVar20 != 0.0) {
                dVar21 = (double)plVar13[0xaa] / dVar20;
              }
              dVar24 = 0.0;
              dVar25 = 0.0;
              uVar23 = plVar13[0xac];
              uVar19 = plVar13[0xab];
              lVar2 = plVar13[0xa7] - plVar13[0xa6];
              if (lVar2 != 0) {
                dVar26 = 0.0;
                dVar27 = 0.0;
                dVar28 = 0.0;
                uVar10 = lVar2 / 0x18;
                dVar29 = 0.0;
                uVar9 = 0;
                if (uVar10 < 2) {
                  uVar10 = 1;
                }
                do {
                  plVar15 = (long *)(plVar13[0xa6] + uVar9 * 0x18);
                  pdVar12 = (double *)*plVar15;
                  pdVar1 = (double *)plVar15[1];
                  if (pdVar12 != pdVar1) {
                    uVar17 = uVar9 * 0x32;
                    dVar30 = dVar27;
                    dVar31 = dVar28;
                    dVar32 = dVar29;
                    do {
                      pdVar14 = pdVar12 + 1;
                      dVar26 = dVar26 + *pdVar12;
                      dVar33 = dVar26 / dVar20;
                      bVar5 = uVar17 != 499;
                      bVar6 = uVar17 != 499;
                      bVar7 = uVar17 != 499;
                      dVar34 = (double)plVar13[0xa5] * ((double)uVar17 + 1.0);
                      uVar17 = uVar17 + 1;
                      if (dVar30 == 0.0 && (bVar7 && dVar33 < 0.75 == NAN(dVar33))) {
                        dVar30 = dVar34;
                        dVar25 = dVar34;
                        dVar27 = dVar34;
                      }
                      if (dVar31 == 0.0 && (bVar6 && dVar33 < 0.95 == NAN(dVar33))) {
                        dVar31 = dVar34;
                        dVar24 = dVar34;
                        dVar28 = dVar34;
                      }
                      if (dVar32 == 0.0 &&
                          (bVar5 && dVar33 < DAT_001f5890 == (NAN(dVar33) || NAN(DAT_001f5890)))) {
                        dVar32 = dVar34;
                        dVar22 = dVar34;
                        dVar29 = dVar34;
                      }
                      pdVar12 = pdVar14;
                    } while (pdVar14 != pdVar1);
                  }
                  uVar9 = uVar9 + 1;
                } while (uVar9 != uVar10);
              }
              *(double *)(lVar8 + 0xd0) = dVar21;
              dVar21 = 0.0;
              *(double *)(lVar8 + 0xd8) = dVar25;
              *(double *)(lVar8 + 0xe0) = dVar24;
              *(double *)(lVar8 + 0xe8) = dVar22;
              dVar22 = 0.0;
              *(undefined8 *)(lVar8 + 0xf8) = uVar23;
              *(undefined8 *)(lVar8 + 0xf0) = uVar19;
              dVar20 = (double)plVar13[0xb1];
              if (dVar20 != 0.0) {
                dVar21 = (double)plVar13[0xb2] / dVar20;
              }
              dVar24 = 0.0;
              dVar25 = 0.0;
              uVar23 = plVar13[0xb4];
              uVar19 = plVar13[0xb3];
              lVar2 = plVar13[0xaf] - plVar13[0xae];
              if (lVar2 != 0) {
                dVar26 = 0.0;
                dVar27 = 0.0;
                dVar28 = 0.0;
                uVar10 = lVar2 / 0x18;
                dVar29 = 0.0;
                uVar9 = 0;
                if (uVar10 < 2) {
                  uVar10 = 1;
                }
                do {
                  plVar15 = (long *)(plVar13[0xae] + uVar9 * 0x18);
                  pdVar12 = (double *)*plVar15;
                  pdVar1 = (double *)plVar15[1];
                  if (pdVar12 != pdVar1) {
                    uVar17 = uVar9 * 0x32;
                    dVar30 = dVar27;
                    dVar31 = dVar28;
                    dVar32 = dVar29;
                    do {
                      pdVar14 = pdVar12 + 1;
                      dVar26 = dVar26 + *pdVar12;
                      dVar33 = dVar26 / dVar20;
                      bVar5 = uVar17 != 499;
                      bVar6 = uVar17 != 499;
                      bVar7 = uVar17 != 499;
                      dVar34 = (double)plVar13[0xad] * ((double)uVar17 + 1.0);
                      uVar17 = uVar17 + 1;
                      if (dVar30 == 0.0 && (bVar7 && dVar33 < 0.75 == NAN(dVar33))) {
                        dVar30 = dVar34;
                        dVar25 = dVar34;
                        dVar27 = dVar34;
                      }
                      if (dVar31 == 0.0 && (bVar6 && dVar33 < 0.95 == NAN(dVar33))) {
                        dVar31 = dVar34;
                        dVar24 = dVar34;
                        dVar28 = dVar34;
                      }
                      if (dVar32 == 0.0 &&
                          (bVar5 && dVar33 < DAT_001f5890 == (NAN(dVar33) || NAN(DAT_001f5890)))) {
                        dVar32 = dVar34;
                        dVar22 = dVar34;
                        dVar29 = dVar34;
                      }
                      pdVar12 = pdVar14;
                    } while (pdVar14 != pdVar1);
                  }
                  uVar9 = uVar9 + 1;
                } while (uVar9 != uVar10);
              }
              *(double *)(lVar8 + 0x100) = dVar21;
              *(double *)(lVar8 + 0x108) = dVar25;
              dVar21 = 0.0;
              *(double *)(lVar8 + 0x110) = dVar24;
              *(double *)(lVar8 + 0x118) = dVar22;
              dVar22 = 0.0;
              *(undefined8 *)(lVar8 + 0x128) = uVar23;
              *(undefined8 *)(lVar8 + 0x120) = uVar19;
              dVar20 = (double)plVar13[0xb9];
              if (dVar20 != 0.0) {
                dVar21 = (double)plVar13[0xba] / dVar20;
              }
              dVar24 = 0.0;
              dVar25 = 0.0;
              uVar23 = plVar13[0xbc];
              uVar19 = plVar13[0xbb];
              lVar2 = plVar13[0xb7] - plVar13[0xb6];
              if (lVar2 != 0) {
                dVar26 = 0.0;
                dVar27 = 0.0;
                dVar28 = 0.0;
                uVar10 = lVar2 / 0x18;
                dVar29 = 0.0;
                uVar9 = 0;
                if (uVar10 < 2) {
                  uVar10 = 1;
                }
                do {
                  plVar15 = (long *)(plVar13[0xb6] + uVar9 * 0x18);
                  pdVar12 = (double *)*plVar15;
                  pdVar1 = (double *)plVar15[1];
                  if (pdVar12 != pdVar1) {
                    uVar17 = uVar9 * 0x32;
                    dVar30 = dVar27;
                    dVar31 = dVar28;
                    dVar32 = dVar29;
                    do {
                      pdVar14 = pdVar12 + 1;
                      dVar26 = dVar26 + *pdVar12;
                      dVar33 = dVar26 / dVar20;
                      bVar5 = uVar17 != 499;
                      bVar6 = uVar17 != 499;
                      bVar7 = uVar17 != 499;
                      dVar34 = (double)plVar13[0xb5] * ((double)uVar17 + 1.0);
                      uVar17 = uVar17 + 1;
                      if (dVar30 == 0.0 && (bVar7 && dVar33 < 0.75 == NAN(dVar33))) {
                        dVar30 = dVar34;
                        dVar25 = dVar34;
                        dVar27 = dVar34;
                      }
                      if (dVar31 == 0.0 && (bVar6 && dVar33 < 0.95 == NAN(dVar33))) {
                        dVar31 = dVar34;
                        dVar24 = dVar34;
                        dVar28 = dVar34;
                      }
                      if (dVar32 == 0.0 &&
                          (bVar5 && dVar33 < DAT_001f5890 == (NAN(dVar33) || NAN(DAT_001f5890)))) {
                        dVar32 = dVar34;
                        dVar22 = dVar34;
                        dVar29 = dVar34;
                      }
                      pdVar12 = pdVar14;
                    } while (pdVar14 != pdVar1);
                  }
                  uVar9 = uVar9 + 1;
                } while (uVar9 != uVar10);
              }
              *(double *)(lVar8 + 0x130) = dVar21;
              dVar21 = 0.0;
              *(double *)(lVar8 + 0x138) = dVar25;
              *(double *)(lVar8 + 0x140) = dVar24;
              *(double *)(lVar8 + 0x148) = dVar22;
              dVar22 = 0.0;
              *(undefined8 *)(lVar8 + 0x158) = uVar23;
              *(undefined8 *)(lVar8 + 0x150) = uVar19;
              dVar20 = (double)plVar13[0xc1];
              if (dVar20 != 0.0) {
                dVar21 = (double)plVar13[0xc2] / dVar20;
              }
              dVar25 = 0.0;
              dVar24 = 0.0;
              uVar23 = plVar13[0xc4];
              uVar19 = plVar13[0xc3];
              lVar2 = plVar13[0xbf] - plVar13[0xbe];
              if (lVar2 != 0) {
                dVar26 = 0.0;
                dVar27 = 0.0;
                dVar28 = 0.0;
                uVar10 = lVar2 / 0x18;
                dVar29 = 0.0;
                uVar9 = 0;
                if (uVar10 < 2) {
                  uVar10 = 1;
                }
                do {
                  plVar15 = (long *)(plVar13[0xbe] + uVar9 * 0x18);
                  pdVar12 = (double *)*plVar15;
                  pdVar1 = (double *)plVar15[1];
                  if (pdVar12 != pdVar1) {
                    uVar17 = uVar9 * 0x32;
                    dVar30 = dVar27;
                    dVar31 = dVar28;
                    dVar32 = dVar29;
                    do {
                      pdVar14 = pdVar12 + 1;
                      dVar26 = dVar26 + *pdVar12;
                      dVar33 = dVar26 / dVar20;
                      bVar5 = uVar17 != 499;
                      bVar6 = uVar17 != 499;
                      bVar7 = uVar17 != 499;
                      dVar34 = (double)plVar13[0xbd] * ((double)uVar17 + 1.0);
                      uVar17 = uVar17 + 1;
                      if (dVar30 == 0.0 && (bVar7 && dVar33 < 0.75 == NAN(dVar33))) {
                        dVar30 = dVar34;
                        dVar22 = dVar34;
                        dVar27 = dVar34;
                      }
                      if (dVar31 == 0.0 && (bVar6 && dVar33 < 0.95 == NAN(dVar33))) {
                        dVar31 = dVar34;
                        dVar25 = dVar34;
                        dVar28 = dVar34;
                      }
                      if (dVar32 == 0.0 &&
                          (bVar5 && dVar33 < DAT_001f5890 == (NAN(dVar33) || NAN(DAT_001f5890)))) {
                        dVar32 = dVar34;
                        dVar24 = dVar34;
                        dVar29 = dVar34;
                      }
                      pdVar12 = pdVar14;
                    } while (pdVar14 != pdVar1);
                  }
                  uVar9 = uVar9 + 1;
                } while (uVar9 != uVar10);
              }
              *(double *)(lVar8 + 0x160) = dVar21;
              *(double *)(lVar8 + 0x168) = dVar22;
              dVar22 = 0.0;
              *(double *)(lVar8 + 0x170) = dVar25;
              *(double *)(lVar8 + 0x178) = dVar24;
              dVar21 = 0.0;
              *(undefined8 *)(lVar8 + 0x188) = uVar23;
              *(undefined8 *)(lVar8 + 0x180) = uVar19;
              dVar20 = (double)plVar13[0xc9];
              if (dVar20 != 0.0) {
                dVar21 = (double)plVar13[0xca] / dVar20;
              }
              dVar25 = 0.0;
              dVar24 = 0.0;
              uVar23 = plVar13[0xcc];
              uVar19 = plVar13[0xcb];
              lVar2 = plVar13[199] - plVar13[0xc6];
              if (lVar2 != 0) {
                dVar26 = 0.0;
                dVar27 = 0.0;
                dVar28 = 0.0;
                uVar10 = lVar2 / 0x18;
                dVar29 = 0.0;
                uVar9 = 0;
                if (uVar10 < 2) {
                  uVar10 = 1;
                }
                do {
                  plVar15 = (long *)(plVar13[0xc6] + uVar9 * 0x18);
                  pdVar12 = (double *)*plVar15;
                  pdVar1 = (double *)plVar15[1];
                  if (pdVar12 != pdVar1) {
                    uVar17 = uVar9 * 0x32;
                    dVar30 = dVar27;
                    dVar31 = dVar28;
                    dVar32 = dVar29;
                    do {
                      pdVar14 = pdVar12 + 1;
                      dVar26 = dVar26 + *pdVar12;
                      dVar33 = dVar26 / dVar20;
                      bVar5 = uVar17 != 499;
                      bVar6 = uVar17 != 499;
                      bVar7 = uVar17 != 499;
                      dVar34 = (double)plVar13[0xc5] * ((double)uVar17 + 1.0);
                      uVar17 = uVar17 + 1;
                      if (dVar30 == 0.0 && (bVar7 && dVar33 < 0.75 == NAN(dVar33))) {
                        dVar30 = dVar34;
                        dVar22 = dVar34;
                        dVar27 = dVar34;
                      }
                      if (dVar31 == 0.0 && (bVar6 && dVar33 < 0.95 == NAN(dVar33))) {
                        dVar31 = dVar34;
                        dVar25 = dVar34;
                        dVar28 = dVar34;
                      }
                      if (dVar32 == 0.0 &&
                          (bVar5 && dVar33 < DAT_001f5890 == (NAN(dVar33) || NAN(DAT_001f5890)))) {
                        dVar32 = dVar34;
                        dVar24 = dVar34;
                        dVar29 = dVar34;
                      }
                      pdVar12 = pdVar14;
                    } while (pdVar14 != pdVar1);
                  }
                  uVar9 = uVar9 + 1;
                } while (uVar9 != uVar10);
              }
              *(double *)(lVar8 + 400) = dVar21;
              *(double *)(lVar8 + 0x198) = dVar22;
              *(double *)(lVar8 + 0x1a0) = dVar25;
              *(double *)(lVar8 + 0x1a8) = dVar24;
              *(undefined8 *)(lVar8 + 0x1b8) = uVar23;
              *(undefined8 *)(lVar8 + 0x1b0) = uVar19;
              *(long *)(lVar8 + 0x1c0) = plVar13[0xce];
              uVar9 = plVar13[0xcf];
              if ((long)uVar9 < 0) {
                uVar10 = -(-uVar9 / 1000) - (ulong)(500 < -uVar9 % 1000);
              }
              else {
                uVar10 = uVar9 / 1000;
                if (499 < uVar9 % 1000) {
                  uVar10 = uVar10 + 1;
                }
              }
              *(ulong *)(lVar8 + 0x1c8) = uVar10;
            }
            break;
          }
        }
        else {
          if (uVar17 < 2) {
            uVar16 = uVar16 & uVar9 - 1;
          }
          else if (uVar9 <= uVar16) {
            uVar3 = 0;
            if (uVar9 != 0) {
              uVar3 = uVar16 / uVar9;
            }
            uVar16 = uVar16 - uVar3 * uVar9;
          }
          if (uVar16 != uVar11) break;
        }
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
  }
  FUN_005467c8(param_2 + 8);
  if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00472638  FUN_00472638 =====

void FUN_00472638(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  void *__dest;
  long lVar2;
  void *__src;
  ulong uVar3;
  
  __src = (void *)*param_1;
  uVar3 = *(ulong *)(param_2 + 0x198);
  if ((ulong)(param_1[2] - (long)__src >> 3) < uVar3) {
    if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_1[1];
    __dest = operator_new(uVar3 * 8);
    memmove(__dest,__src,lVar2 - (long)__src);
    *param_1 = __dest;
    param_1[1] = (long)__dest + (lVar2 - (long)__src);
    param_1[2] = (void *)((long)__dest + uVar3 * 8);
    if (__src == (void *)0x0) goto LAB_004726c0;
    operator_delete(__src);
    uVar3 = *(ulong *)(param_2 + 0x198);
  }
  if (uVar3 == 0) {
    return;
  }
LAB_004726c0:
  do {
    uVar3 = *(long *)(param_2 + 400) - uVar3;
    uVar1 = uVar3 + 0x32;
    if (uVar1 < 0x32) {
      uVar3 = uVar1;
    }
    FUN_00473754(param_1,param_2 + uVar3 * 8);
    uVar3 = *(long *)(param_2 + 0x198) - 1;
    *(ulong *)(param_2 + 0x198) = uVar3;
  } while (uVar3 != 0);
  return;
}


// ===== 0047270c  FUN_0047270c =====

void FUN_0047270c(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (*param_2 == 0) {
    plVar3 = DAT_00d60288;
    if (((DAT_00d60290 & 1) == 0) &&
       (iVar1 = FUN_0054fdd4(&DAT_00d60290), plVar3 = DAT_00d60288, iVar1 != 0)) {
      DAT_00d60288 = (long *)operator_new(0x18);
      DAT_00d60288[1] = 0;
      DAT_00d60288[2] = 0;
      *DAT_00d60288 = 0;
      FUN_0054ff1c(&DAT_00d60290);
      plVar3 = DAT_00d60288;
    }
  }
  else {
    plVar3 = (long *)(*param_2 + 8);
  }
  if (*plVar3 == plVar3[1]) {
    return;
  }
  uVar4 = *param_1;
  lVar5 = *param_2;
  *param_2 = 0;
  puVar2 = (undefined8 *)operator_new(0x20);
  puVar2[2] = lVar5;
  puVar2[3] = param_3;
  *puVar2 = &PTR_FUN_00d1d058;
  puVar2[1] = param_1;
  FUN_00512cf8(uVar4);
  return;
}


// ===== 004727f0  FUN_004727f0 =====

void FUN_004727f0(long param_1,long *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  uint *puVar5;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  uint *puVar16;
  undefined2 uVar17;
  undefined8 uVar18;
  undefined8 *puVar6;
  
  FUN_005467a4(param_1 + 8);
  lVar7 = *param_2;
  if (lVar7 == 0) {
    if (((DAT_00d60290 & 1) == 0) && (iVar4 = FUN_0054fdd4(&DAT_00d60290), iVar4 != 0)) {
      DAT_00d60288 = (undefined8 *)operator_new(0x18);
      DAT_00d60288[1] = 0;
      DAT_00d60288[2] = 0;
      *DAT_00d60288 = 0;
      FUN_0054ff1c(&DAT_00d60290);
    }
    puVar16 = (uint *)*DAT_00d60288;
    if (*param_2 == 0) {
      puVar6 = DAT_00d60288;
      if (((DAT_00d60290 & 1) == 0) &&
         (iVar4 = FUN_0054fdd4(&DAT_00d60290), puVar6 = DAT_00d60288, iVar4 != 0)) {
        DAT_00d60288 = (undefined8 *)operator_new(0x18);
        DAT_00d60288[1] = 0;
        DAT_00d60288[2] = 0;
        *DAT_00d60288 = 0;
        FUN_0054ff1c(&DAT_00d60290);
        puVar6 = DAT_00d60288;
      }
    }
    else {
      puVar6 = (undefined8 *)(*param_2 + 8);
    }
  }
  else {
    puVar16 = *(uint **)(lVar7 + 8);
    puVar6 = (undefined8 *)(lVar7 + 8);
  }
  puVar5 = (uint *)puVar6[1];
  do {
    if (puVar16 == puVar5) {
      FUN_005467c8(param_1 + 8);
      return;
    }
    uVar8 = *(ulong *)(param_1 + 0xb0);
    if (uVar8 != 0) {
      uVar2 = *puVar16;
      uVar10 = (ulong)uVar2;
      uVar18 = NEON_cnt(uVar8,1);
      uVar17 = NEON_uaddlv(uVar18,1);
      uVar9 = CONCAT62((int6)((ulong)uVar18 >> 0x10),uVar17) & 0xffffffff;
      if (uVar9 < 2) {
        uVar12 = (ulong)((int)uVar8 - 1U & uVar2);
      }
      else {
        uVar12 = uVar10;
        if (uVar8 <= uVar10) {
          uVar12 = 0;
          if (uVar8 != 0) {
            uVar12 = uVar10 / uVar8;
          }
          uVar12 = uVar10 - uVar12 * uVar8;
        }
      }
      plVar14 = *(long **)(*(long *)(param_1 + 0xa8) + uVar12 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        do {
          uVar15 = plVar14[1];
          if (uVar15 == uVar10) {
            if (*(uint *)(plVar14 + 2) == uVar2) {
              lVar7 = plVar14[3];
              *(long *)(lVar7 + 0x648) = *(long *)(lVar7 + 0x648) + 1;
              if ((param_3 == 0x7fffffffffffffff) ||
                 (lVar11 = *(long *)(puVar16 + 10), lVar11 == -0x8000000000000000)) {
                lVar11 = 0x7fffffffffffffff;
              }
              else {
                lVar13 = *(long *)(lVar7 + 0x650);
                lVar1 = -0x8000000000000000;
                if (lVar11 != 0x7fffffffffffffff && param_3 != -0x8000000000000000) {
                  lVar1 = param_3 - lVar11;
                }
                lVar11 = 0x7fffffffffffffff;
                if ((lVar13 != 0x7fffffffffffffff) && (lVar1 != 0x7fffffffffffffff)) {
                  lVar11 = -0x8000000000000000;
                  if (lVar1 != -0x8000000000000000 && lVar13 != -0x8000000000000000) {
                    lVar11 = lVar13 + lVar1;
                  }
                }
              }
              *(long *)(lVar7 + 0x650) = lVar11;
              break;
            }
          }
          else {
            if (uVar9 < 2) {
              uVar15 = uVar15 & uVar8 - 1;
            }
            else if (uVar8 <= uVar15) {
              uVar3 = 0;
              if (uVar8 != 0) {
                uVar3 = uVar15 / uVar8;
              }
              uVar15 = uVar15 - uVar3 * uVar8;
            }
            if (uVar15 != uVar12) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
    puVar16 = puVar16 + 0x1a;
  } while( true );
}


// ===== 00472a48  FUN_00472a48 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00472a48(long param_1,long *param_2,long **param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 local_80 [2];
  long *local_78;
  long *local_70;
  undefined1 auStack_68 [8];
  long **local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_78 = param_4;
  local_70 = param_2;
  FUN_005467a4(param_1 + 8);
  local_60 = &local_70;
  lVar2 = FUN_004746d0(param_1 + 0x30,&local_70,&DAT_001f6ab0,&local_60,local_80);
  local_60 = param_3;
  lVar2 = FUN_00474c04(lVar2 + 0x18,param_3,&DAT_001f6ab0,&local_60,local_80);
  local_60 = &local_78;
  lVar3 = FUN_00475248(param_1 + 0x58,&local_78,&DAT_001f6ab0,&local_60,local_80);
  *(long **)(lVar3 + 0x18) = local_70;
  FUN_00411268(lVar3 + 0x20,param_3);
  puVar5 = *(undefined8 **)(lVar2 + 0x5f0);
  *(undefined8 *)(lVar2 + 0x28) = local_78;
  *(undefined8 *)(lVar2 + 0x1e0) = 0;
  *(undefined8 *)(lVar2 + 0x1d8) = 0;
  *(undefined8 *)(lVar2 + 0x380) = 0;
  *(undefined8 *)(lVar2 + 0x378) = 0;
  *(undefined8 *)(lVar2 + 0x520) = 0;
  *(undefined8 *)(lVar2 + 0x518) = 0;
  *(undefined8 *)(lVar2 + 0x610) = 0;
  *(undefined8 *)(lVar2 + 0x608) = 0;
  *(undefined8 *)(lVar2 + 0x620) = 0;
  *(undefined8 *)(lVar2 + 0x618) = 0;
  *(undefined8 *)(lVar2 + 0x678) = 0;
  *(undefined8 *)(lVar2 + 0x670) = 0;
  puVar6 = *(undefined8 **)(lVar2 + 0x5f8);
  while (puVar7 = puVar6, puVar7 != puVar5) {
    puVar6 = puVar7 + -3;
    pvVar4 = (void *)*puVar6;
    if (pvVar4 != (void *)0x0) {
      puVar7[-2] = pvVar4;
      operator_delete(pvVar4);
    }
  }
  puVar7 = *(undefined8 **)(lVar2 + 0x630);
  *(undefined8 **)(lVar2 + 0x5f8) = puVar5;
  *(undefined8 *)(lVar2 + 0x650) = 0;
  *(undefined8 *)(lVar2 + 0x648) = 0;
  *(undefined8 *)(lVar2 + 0x660) = 0;
  *(undefined8 *)(lVar2 + 0x658) = 0;
  puVar6 = *(undefined8 **)(lVar2 + 0x638);
  while (puVar5 = puVar6, puVar5 != puVar7) {
    puVar6 = puVar5 + -3;
    pvVar4 = (void *)*puVar6;
    if (pvVar4 != (void *)0x0) {
      puVar5[-2] = pvVar4;
      operator_delete(pvVar4);
    }
  }
  *(undefined8 **)(lVar2 + 0x638) = puVar7;
  local_80[0] = (**(code **)(*local_78 + 0x98))();
  local_60 = (long **)local_80;
  lVar3 = FUN_0047568c(param_1 + 0xa8,local_80,&DAT_001f6ab0,&local_60,auStack_68);
  *(undefined8 **)(lVar3 + 0x18) = (undefined8 *)(lVar2 + 0x28);
  FUN_005467c8(param_1 + 8);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00472c30  FUN_00472c30 =====

void FUN_00472c30(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 auStack_68 [8];
  undefined8 *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_78 = param_4;
  local_70 = param_2;
  FUN_005467a4(param_1 + 8);
  local_60 = &local_70;
  lVar2 = FUN_004746d0(param_1 + 0x30,&local_70,&DAT_001f6ab0,&local_60,auStack_68);
  local_60 = param_3;
  lVar2 = FUN_00474c04(lVar2 + 0x18,param_3,&DAT_001f6ab0,&local_60,auStack_68);
  local_60 = &local_78;
  lVar3 = FUN_00475a94(param_1 + 0x80,&local_78,&DAT_001f6ab0,&local_60,auStack_68);
  *(undefined8 *)(lVar3 + 0x18) = local_70;
  FUN_00411268(lVar3 + 0x20,param_3);
  FUN_00472ea8(lVar2 + 0x30,&local_78);
  puVar5 = *(undefined8 **)(lVar2 + 0x530);
  *(undefined8 *)(lVar2 + 0x560) = 0;
  *(undefined8 *)(lVar2 + 0x558) = 0;
  *(undefined8 *)(lVar2 + 0x550) = 0;
  *(undefined8 *)(lVar2 + 0x548) = 0;
  puVar6 = *(undefined8 **)(lVar2 + 0x538);
  while (puVar7 = puVar6, puVar7 != puVar5) {
    puVar6 = puVar7 + -3;
    pvVar4 = (void *)*puVar6;
    if (pvVar4 != (void *)0x0) {
      puVar7[-2] = pvVar4;
      operator_delete(pvVar4);
    }
  }
  *(undefined8 **)(lVar2 + 0x538) = puVar5;
  puVar5 = *(undefined8 **)(lVar2 + 0x570);
  *(undefined8 *)(lVar2 + 0x590) = 0;
  *(undefined8 *)(lVar2 + 0x588) = 0;
  *(undefined8 *)(lVar2 + 0x5a0) = 0;
  *(undefined8 *)(lVar2 + 0x598) = 0;
  puVar6 = *(undefined8 **)(lVar2 + 0x578);
  while (puVar7 = puVar6, puVar7 != puVar5) {
    puVar6 = puVar7 + -3;
    pvVar4 = (void *)*puVar6;
    if (pvVar4 != (void *)0x0) {
      puVar7[-2] = pvVar4;
      operator_delete(pvVar4);
    }
  }
  puVar7 = *(undefined8 **)(lVar2 + 0x5b0);
  *(undefined8 **)(lVar2 + 0x578) = puVar5;
  *(undefined8 *)(lVar2 + 0x5d0) = 0;
  *(undefined8 *)(lVar2 + 0x5c8) = 0;
  *(undefined8 *)(lVar2 + 0x5e0) = 0;
  *(undefined8 *)(lVar2 + 0x5d8) = 0;
  puVar6 = *(undefined8 **)(lVar2 + 0x5b8);
  while (puVar5 = puVar6, puVar5 != puVar7) {
    puVar6 = puVar5 + -3;
    pvVar4 = (void *)*puVar6;
    if (pvVar4 != (void *)0x0) {
      puVar5[-2] = pvVar4;
      operator_delete(pvVar4);
    }
  }
  *(undefined8 **)(lVar2 + 0x5b8) = puVar7;
  puVar5 = *(undefined8 **)(lVar2 + 0x5f0);
  *(undefined8 *)(lVar2 + 0x610) = 0;
  *(undefined8 *)(lVar2 + 0x608) = 0;
  *(undefined8 *)(lVar2 + 0x620) = 0;
  *(undefined8 *)(lVar2 + 0x618) = 0;
  puVar6 = *(undefined8 **)(lVar2 + 0x5f8);
  while (puVar7 = puVar6, puVar7 != puVar5) {
    puVar6 = puVar7 + -3;
    pvVar4 = (void *)*puVar6;
    if (pvVar4 != (void *)0x0) {
      puVar7[-2] = pvVar4;
      operator_delete(pvVar4);
    }
  }
  puVar7 = *(undefined8 **)(lVar2 + 0x630);
  *(undefined8 **)(lVar2 + 0x5f8) = puVar5;
  *(undefined8 *)(lVar2 + 0x650) = 0;
  *(undefined8 *)(lVar2 + 0x648) = 0;
  *(undefined8 *)(lVar2 + 0x660) = 0;
  *(undefined8 *)(lVar2 + 0x658) = 0;
  puVar6 = *(undefined8 **)(lVar2 + 0x638);
  while (puVar5 = puVar6, puVar5 != puVar7) {
    puVar6 = puVar5 + -3;
    pvVar4 = (void *)*puVar6;
    if (pvVar4 != (void *)0x0) {
      puVar5[-2] = pvVar4;
      operator_delete(pvVar4);
    }
  }
  *(undefined8 **)(lVar2 + 0x638) = puVar7;
  FUN_005467c8(param_1 + 8);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00472ea8  FUN_00472ea8 =====

void FUN_00472ea8(undefined8 *param_1,undefined8 *param_2)

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
    if (uVar2 == 0) goto LAB_00472f90;
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
LAB_00472f90:
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


// ===== 00472fc0  FUN_00472fc0 =====

void FUN_00472fc0(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  long *local_88;
  undefined4 local_80 [6];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_88 = param_2;
  FUN_005467a4(param_1 + 8);
  uVar6 = *(ulong *)(param_1 + 0x60);
  if (uVar6 != 0) {
    uVar4 = (((ulong)param_2 & 0xffffffff) * 8 + 8 ^ (ulong)param_2 >> 0x20) * -0x622015f714c7d297;
    uVar13 = NEON_cnt(uVar6,1);
    uVar4 = ((ulong)param_2 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar7 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    if (uVar7 < 2) {
      uVar8 = uVar4 & uVar6 - 1;
    }
    else {
      uVar8 = uVar4;
      if (uVar6 <= uVar4) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar4 / uVar6;
        }
        uVar8 = uVar4 - uVar8 * uVar6;
      }
    }
    plVar5 = *(long **)(*(long *)(param_1 + 0x58) + uVar8 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      do {
        uVar10 = plVar5[1];
        if (uVar10 == uVar4) {
          if ((long *)plVar5[2] == param_2) {
            uVar6 = *(ulong *)(param_1 + 0x38);
            if (uVar6 != 0) {
              uVar7 = plVar5[3];
              uVar13 = NEON_cnt(uVar6,1);
              uVar4 = ((uVar7 & 0xffffffff) * 8 + 8 ^ uVar7 >> 0x20) * -0x622015f714c7d297;
              uVar12 = NEON_uaddlv(uVar13,1);
              uVar4 = (uVar7 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
              uVar8 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
              uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
              if (uVar8 < 2) {
                uVar10 = uVar4 & uVar6 - 1;
              }
              else {
                uVar10 = uVar4;
                if (uVar6 <= uVar4) {
                  uVar10 = 0;
                  if (uVar6 != 0) {
                    uVar10 = uVar4 / uVar6;
                  }
                  uVar10 = uVar4 - uVar10 * uVar6;
                }
              }
              plVar9 = *(long **)(*(long *)(param_1 + 0x30) + uVar10 * 8);
              if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
                goto LAB_00473188;
              }
            }
            break;
          }
        }
        else {
          if (uVar7 < 2) {
            uVar10 = uVar10 & uVar6 - 1;
          }
          else if (uVar6 <= uVar10) {
            uVar11 = 0;
            if (uVar6 != 0) {
              uVar11 = uVar10 / uVar6;
            }
            uVar10 = uVar10 - uVar11 * uVar6;
          }
          if (uVar10 != uVar8) break;
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  goto LAB_00473250;
LAB_00473188:
  do {
    uVar11 = plVar9[1];
    if (uVar11 == uVar4) {
      if (plVar9[2] == uVar7) {
        lVar3 = FUN_00475ed8(plVar9 + 3,plVar5 + 4);
        if (lVar3 != 0) {
          *(undefined8 *)(lVar3 + 0x28) = 0;
          local_80[0] = (**(code **)(*param_2 + 0x98))(param_2);
          FUN_00476094(param_1 + 0xa8,local_80);
          if ((*(long *)(lVar3 + 0x28) == 0) && (*(long *)(lVar3 + 0x38) == *(long *)(lVar3 + 0x30))
             ) {
            FUN_004762d4(plVar9 + 3,lVar3);
          }
          if (plVar9[6] == 0) {
            FUN_004764c0(local_80,(long *)(param_1 + 0x30),plVar9);
            FUN_00474b74(local_80,0);
          }
          FUN_004765f4((long *)(param_1 + 0x58),&local_88);
        }
        break;
      }
    }
    else {
      if (uVar8 < 2) {
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
    plVar9 = (long *)*plVar9;
  } while (plVar9 != (long *)0x0);
LAB_00473250:
  FUN_005467c8(param_1 + 8);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0047328c  FUN_0047328c =====

void FUN_0047328c(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong *puVar15;
  undefined2 uVar16;
  undefined8 uVar17;
  ulong local_88;
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_88 = param_2;
  FUN_005467a4(param_1 + 8);
  uVar8 = *(ulong *)(param_1 + 0x88);
  if (uVar8 != 0) {
    uVar6 = ((param_2 & 0xffffffff) * 8 + 8 ^ param_2 >> 0x20) * -0x622015f714c7d297;
    uVar17 = NEON_cnt(uVar8,1);
    uVar6 = (param_2 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
    uVar16 = NEON_uaddlv(uVar17,1);
    uVar9 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff;
    uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    if (uVar9 < 2) {
      uVar10 = uVar6 & uVar8 - 1;
    }
    else {
      uVar10 = uVar6;
      if (uVar8 <= uVar6) {
        uVar10 = 0;
        if (uVar8 != 0) {
          uVar10 = uVar6 / uVar8;
        }
        uVar10 = uVar6 - uVar10 * uVar8;
      }
    }
    plVar7 = *(long **)(*(long *)(param_1 + 0x80) + uVar10 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar12 = plVar7[1];
        if (uVar12 == uVar6) {
          if (plVar7[2] == param_2) {
            uVar8 = *(ulong *)(param_1 + 0x38);
            if (uVar8 != 0) {
              uVar9 = plVar7[3];
              uVar17 = NEON_cnt(uVar8,1);
              uVar6 = ((uVar9 & 0xffffffff) * 8 + 8 ^ uVar9 >> 0x20) * -0x622015f714c7d297;
              uVar16 = NEON_uaddlv(uVar17,1);
              uVar6 = (uVar9 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
              uVar10 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff;
              uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
              if (uVar10 < 2) {
                uVar12 = uVar6 & uVar8 - 1;
              }
              else {
                uVar12 = uVar6;
                if (uVar8 <= uVar6) {
                  uVar12 = 0;
                  if (uVar8 != 0) {
                    uVar12 = uVar6 / uVar8;
                  }
                  uVar12 = uVar6 - uVar12 * uVar8;
                }
              }
              plVar11 = *(long **)(*(long *)(param_1 + 0x30) + uVar12 * 8);
              if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0))
              {
                goto LAB_00473454;
              }
            }
            break;
          }
        }
        else {
          if (uVar9 < 2) {
            uVar12 = uVar12 & uVar8 - 1;
          }
          else if (uVar8 <= uVar12) {
            uVar13 = 0;
            if (uVar8 != 0) {
              uVar13 = uVar12 / uVar8;
            }
            uVar12 = uVar12 - uVar13 * uVar8;
          }
          if (uVar12 != uVar10) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  goto LAB_0047358c;
joined_r0x004734ac:
  puVar15 = puVar5;
  if (puVar14 == puVar4) goto LAB_00473520;
  if (*puVar14 == param_2) {
    if ((puVar14 != puVar4) && (puVar5 = puVar14 + 1, puVar15 = puVar14, puVar5 != puVar4)) {
      do {
        puVar14 = puVar15;
        if (*puVar5 != local_88) {
          puVar14 = puVar15 + 1;
          *puVar15 = *puVar5;
        }
        puVar5 = puVar5 + 1;
        puVar15 = puVar14;
      } while (puVar5 != puVar4);
      puVar4 = *(ulong **)(lVar3 + 0x38);
    }
    puVar5 = puVar4;
    puVar15 = puVar14;
    if (puVar4 < puVar14) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x644,
                 "__first <= __last","vector::erase(first, last) called with invalid range");
    }
LAB_00473520:
    if (puVar15 != puVar5) {
      memmove(puVar15,puVar5,0);
      *(ulong **)(lVar3 + 0x38) = puVar15;
      puVar5 = puVar15;
    }
    if ((*(long *)(lVar3 + 0x28) == 0) && (puVar5 == *(ulong **)(lVar3 + 0x30))) {
      FUN_004762d4(plVar11 + 3,lVar3);
    }
    if (plVar11[6] == 0) {
      FUN_004764c0(auStack_80,(long *)(param_1 + 0x30),plVar11);
      FUN_00474b74(auStack_80,0);
    }
    FUN_00476888((long *)(param_1 + 0x80),&local_88);
    goto LAB_0047358c;
  }
  puVar14 = puVar14 + 1;
  puVar5 = puVar4;
  goto joined_r0x004734ac;
  while (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0) {
LAB_00473454:
    uVar13 = plVar11[1];
    if (uVar13 == uVar6) {
      if (plVar11[2] == uVar9) {
        lVar3 = FUN_00475ed8(plVar11 + 3,plVar7 + 4);
        if (lVar3 != 0) {
          puVar14 = *(ulong **)(lVar3 + 0x30);
          puVar4 = *(ulong **)(lVar3 + 0x38);
          puVar5 = puVar14;
          goto joined_r0x004734ac;
        }
        break;
      }
    }
    else {
      if (uVar10 < 2) {
        uVar13 = uVar13 & uVar8 - 1;
      }
      else if (uVar8 <= uVar13) {
        uVar1 = 0;
        if (uVar8 != 0) {
          uVar1 = uVar13 / uVar8;
        }
        uVar13 = uVar13 - uVar1 * uVar8;
      }
      if (uVar13 != uVar12) break;
    }
  }
LAB_0047358c:
  FUN_005467c8(param_1 + 8);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004735f0  FUN_004735f0 =====

void FUN_004735f0(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004df134(param_1,7);
  FUN_004df250(*param_2,auStack_60);
  uVar2 = FUN_004e1438(param_1,&DAT_001ef5a1);
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  FUN_004df250(param_2[1],auStack_60);
  uVar2 = FUN_004e1438(param_1,&DAT_001b3526);
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  FUN_004df250(param_2[2],auStack_60);
  uVar2 = FUN_004e1438(param_1,&DAT_001e737e);
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  FUN_004df250(param_2[3],auStack_60);
  uVar2 = FUN_004e1438(param_1,&DAT_001bc430);
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  FUN_004df250(param_2[4],auStack_60);
  uVar2 = FUN_004e1438(param_1,&DAT_001e4381);
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  FUN_004df250(param_2[5],auStack_60);
  uVar2 = FUN_004e1438(param_1,&DAT_001cd929);
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00473754  FUN_00473754 =====

void FUN_00473754(undefined8 *param_1,undefined8 *param_2)

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
    if (uVar2 == 0) goto LAB_0047383c;
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
LAB_0047383c:
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


// ===== 0047386c  FUN_0047386c =====

void FUN_0047386c(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_98 [40];
  undefined1 auStack_70 [40];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_004df134(param_1,7);
  FUN_004df134(auStack_98,6);
  puVar1 = (undefined8 *)param_2[1];
  for (puVar4 = (undefined8 *)*param_2; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    FUN_004df250(*puVar4,auStack_70);
    FUN_004e1528(auStack_98,auStack_70);
    FUN_004df880(auStack_70);
  }
  uVar3 = FUN_004e1438(param_1,"audioJitterBufferSamples");
  FUN_004dfa04(uVar3,auStack_98);
  FUN_004df880(auStack_98);
  FUN_004df134(auStack_98,6);
  puVar1 = (undefined8 *)param_2[4];
  for (puVar4 = (undefined8 *)param_2[3]; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    FUN_004df250(*puVar4,auStack_70);
    FUN_004e1528(auStack_98,auStack_70);
    FUN_004df880(auStack_70);
  }
  uVar3 = FUN_004e1438(param_1,"audioJitterDelaySamples");
  FUN_004dfa04(uVar3,auStack_98);
  FUN_004df880(auStack_98);
  FUN_004df134(auStack_98,6);
  puVar1 = (undefined8 *)param_2[7];
  for (puVar4 = (undefined8 *)param_2[6]; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    FUN_004df250(*puVar4,auStack_70);
    FUN_004e1528(auStack_98,auStack_70);
    FUN_004df880(auStack_70);
  }
  uVar3 = FUN_004e1438(param_1,"audioJitterTargetSamples");
  FUN_004dfa04(uVar3,auStack_98);
  FUN_004df880(auStack_98);
  FUN_004735f0(auStack_70,param_2 + 9);
  uVar3 = FUN_004e1438(param_1,"audioPlayoutUnderruns");
  FUN_004dfa04(uVar3,auStack_70);
  FUN_004df880(auStack_70);
  FUN_004735f0(auStack_70,param_2 + 0xf);
  uVar3 = FUN_004e1438(param_1,"audioCaptureOverruns");
  FUN_004dfa04(uVar3,auStack_70);
  FUN_004df880(auStack_70);
  FUN_004735f0(auStack_70,param_2 + 0x15);
  uVar3 = FUN_004e1438(param_1,"videoJitterBuffer");
  FUN_004dfa04(uVar3,auStack_70);
  FUN_004df880(auStack_70);
  FUN_004735f0(auStack_70,param_2 + 0x1b);
  uVar3 = FUN_004e1438(param_1,"videoJitterDelay");
  FUN_004dfa04(uVar3,auStack_70);
  FUN_004df880(auStack_70);
  FUN_004735f0(auStack_70,param_2 + 0x21);
  uVar3 = FUN_004e1438(param_1,"videoJitterTarget");
  FUN_004dfa04(uVar3,auStack_70);
  FUN_004df880(auStack_70);
  FUN_004735f0(auStack_70,param_2 + 0x27);
  uVar3 = FUN_004e1438(param_1,"relativeReceptionDelay");
  FUN_004dfa04(uVar3,auStack_70);
  FUN_004df880(auStack_70);
  FUN_004735f0(auStack_70,param_2 + 0x2d);
  uVar3 = FUN_004e1438(param_1,"relativePlayoutDelay");
  FUN_004dfa04(uVar3,auStack_70);
  FUN_004df880(auStack_70);
  FUN_004df230(auStack_70,param_2[0x33]);
  uVar3 = FUN_004e1438(param_1,"audioPacketCount");
  FUN_004dfa04(uVar3,auStack_70);
  FUN_004df880(auStack_70);
  FUN_004df210(auStack_70,param_2[0x34]);
  uVar3 = FUN_004e1438(param_1,"audioPacketDelayMs");
  FUN_004dfa04(uVar3,auStack_70);
  FUN_004df880(auStack_70);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00473b7c  FUN_00473b7c =====

void FUN_00473b7c(long *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  
  puVar11 = (undefined8 *)param_1[1];
  if ((ulong)((param_1[2] - (long)puVar11 >> 3) * -0x5555555555555555) < param_2) {
    lVar7 = (long)puVar11 - *param_1 >> 3;
    uVar1 = lVar7 * -0x5555555555555555 + param_2;
    if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_1[2] - *param_1 >> 3;
    uVar8 = lVar3 * 0x5555555555555556;
    if (uVar8 < uVar1 || uVar8 - uVar1 == 0) {
      uVar8 = uVar1;
    }
    if (0x555555555555554 < (ulong)(lVar3 * -0x5555555555555555)) {
      uVar8 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar8 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_00401ad4();
      }
      pvVar2 = operator_new(uVar8 * 0x18);
    }
    lVar3 = param_2 * 0x18;
    puVar4 = (undefined8 *)((long)pvVar2 + lVar7 * 8);
    pvVar2 = (void *)((long)pvVar2 + uVar8 * 0x18);
    puVar5 = puVar4;
    do {
      if (puVar5 == (undefined8 *)0x0) {
LAB_00473d40:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                   ,0x23,"__location != nullptr","null pointer given to construct_at");
      }
      *puVar5 = 0;
      puVar5[1] = 0;
      lVar3 = lVar3 + -0x18;
      puVar5[2] = 0;
      puVar5 = puVar5 + 3;
    } while (lVar3 != 0);
    puVar9 = (undefined8 *)*param_1;
    puVar5 = puVar4;
    if (puVar11 == puVar9) {
      *param_1 = (long)puVar4;
      param_1[1] = (long)(puVar4 + param_2 * 3);
      param_1[2] = (long)pvVar2;
    }
    else {
      do {
        puVar5[-2] = 0;
        puVar5[-1] = 0;
        puVar10 = puVar11 + -3;
        uVar12 = *puVar10;
        puVar6 = puVar5 + -3;
        puVar5[-2] = puVar11[-2];
        *puVar6 = uVar12;
        puVar5[-1] = puVar11[-1];
        *puVar10 = 0;
        puVar11[-2] = 0;
        puVar11[-1] = 0;
        puVar5 = puVar6;
        puVar11 = puVar10;
      } while (puVar10 != puVar9);
      puVar11 = (undefined8 *)*param_1;
      puVar5 = (undefined8 *)param_1[1];
      *param_1 = (long)puVar6;
      param_1[1] = (long)(puVar4 + param_2 * 3);
      param_1[2] = (long)pvVar2;
      while (puVar4 = puVar5, puVar4 != puVar11) {
        puVar5 = puVar4 + -3;
        pvVar2 = (void *)*puVar5;
        if (pvVar2 != (void *)0x0) {
          puVar4[-2] = pvVar2;
          operator_delete(pvVar2);
        }
      }
    }
    if (puVar11 != (undefined8 *)0x0) {
      operator_delete(puVar11);
      return;
    }
  }
  else {
    puVar5 = puVar11;
    if (param_2 != 0) {
      lVar7 = param_2 * 0x18;
      puVar5 = puVar11 + param_2 * 3;
      do {
        if (puVar11 == (undefined8 *)0x0) goto LAB_00473d40;
        *puVar11 = 0;
        puVar11[1] = 0;
        lVar7 = lVar7 + -0x18;
        puVar11[2] = 0;
        puVar11 = puVar11 + 3;
      } while (lVar7 != 0);
    }
    param_1[1] = (long)puVar5;
  }
  return;
}


// ===== 00473d70  FUN_00473d70 =====

void FUN_00473d70(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  void *__dest;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  void *__src;
  long lVar7;
  
  puVar2 = (undefined8 *)param_1[1];
  if ((ulong)(param_1[2] - (long)puVar2 >> 3) < param_2) {
    __src = (void *)*param_1;
    lVar7 = (long)puVar2 - (long)__src >> 3;
    uVar1 = lVar7 + param_2;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar5 = param_1[2] - (long)__src;
    uVar6 = uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    if (uVar6 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar6 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00401ad4();
      }
      __dest = operator_new(uVar6 << 3);
    }
    puVar3 = (undefined8 *)((long)__dest + lVar7 * 8);
    lVar7 = param_2 * 8;
    puVar4 = puVar3;
    do {
      if (puVar4 == (undefined8 *)0x0) {
LAB_00473e90:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                   ,0x23,"__location != nullptr","null pointer given to construct_at");
      }
      lVar7 = lVar7 + -8;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    } while (lVar7 != 0);
    memmove(__dest,__src,(long)puVar2 - (long)__src);
    *param_1 = __dest;
    param_1[1] = puVar3 + param_2;
    param_1[2] = (void *)((long)__dest + uVar6 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    puVar3 = puVar2;
    if (param_2 != 0) {
      puVar3 = puVar2 + param_2;
      lVar7 = param_2 << 3;
      do {
        if (puVar2 == (undefined8 *)0x0) goto LAB_00473e90;
        lVar7 = lVar7 + -8;
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      } while (lVar7 != 0);
    }
    param_1[1] = puVar3;
  }
  return;
}


// ===== 00473ec0  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00473ec4  FUN_00473ec4 =====

void FUN_00473ec4(long param_1)

{
  FUN_00471664(*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 00473ecc  FUN_00473ecc =====

long * FUN_00473ecc(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  size_t __n;
  size_t sVar1;
  long *__src;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  ulong unaff_x27;
  undefined2 uVar17;
  undefined8 uVar18;
  long *local_80;
  long *plStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar6 = param_2[1];
  puVar8 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar6 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar8 = param_2;
  }
  uVar6 = FUN_00427058(&local_80,puVar8,uVar6);
  uVar16 = param_1[1];
  if (uVar16 != 0) {
    uVar18 = NEON_cnt(uVar16,1);
    uVar17 = NEON_uaddlv(uVar18,1);
    uVar12 = CONCAT62((int6)((ulong)uVar18 >> 0x10),uVar17) & 0xffffffff;
    if (uVar12 < 2) {
      unaff_x27 = uVar16 - 1 & uVar6;
    }
    else {
      unaff_x27 = uVar6;
      if (uVar16 <= uVar6) {
        uVar9 = 0;
        if (uVar16 != 0) {
          uVar9 = uVar6 / uVar16;
        }
        unaff_x27 = uVar6 - uVar9 * uVar16;
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + unaff_x27 * 8);
    if ((puVar8 != (undefined8 *)0x0) && (plVar15 = (long *)*puVar8, plVar15 != (long *)0x0)) {
      puVar8 = (undefined8 *)*param_2;
      __n = param_2[1];
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        puVar8 = param_2;
        __n = (ulong)*(byte *)((long)param_2 + 0x17);
      }
      do {
        uVar9 = plVar15[1];
        if (uVar9 != uVar6) {
          if (uVar12 < 2) {
            uVar9 = uVar9 & uVar16 - 1;
          }
          else if (uVar16 <= uVar9) {
            uVar3 = 0;
            if (uVar16 != 0) {
              uVar3 = uVar9 / uVar16;
            }
            uVar9 = uVar9 - uVar3 * uVar16;
          }
          if (uVar9 != unaff_x27) break;
        }
        bVar2 = *(byte *)((long)plVar15 + 0x27);
        sVar1 = plVar15[3];
        if (-1 < (char)bVar2) {
          sVar1 = (ulong)bVar2;
        }
        if (sVar1 == __n) {
          plVar7 = plVar15 + 2;
          plVar14 = (long *)*plVar7;
          if ((char)bVar2 < '\0') {
            plVar7 = plVar14;
            if (__n != 0) {
              uVar5 = memcmp(plVar14,puVar8,__n);
              plVar7 = (long *)(ulong)uVar5;
              if (uVar5 != 0) goto LAB_00473fa4;
            }
          }
          else if (bVar2 != 0) {
            uVar9 = 0;
            while (*(char *)((long)plVar15 + uVar9 + 0x10) == *(char *)((long)puVar8 + uVar9)) {
              uVar9 = uVar9 + 1;
              if (bVar2 == uVar9) goto LAB_00474064;
            }
            goto LAB_00473fa4;
          }
LAB_00474064:
          uVar18 = 0;
          goto LAB_00474334;
        }
LAB_00473fa4:
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
  }
  plVar7 = param_1 + 2;
  plVar14 = (long *)operator_new(0x1d0);
  plVar10 = (long *)*param_4;
  plVar15 = plVar14 + 2;
  local_80 = plVar14;
  plStack_78 = plVar7;
  if (*(char *)((long)plVar10 + 0x17) < '\0') {
    __src = (long *)*plVar10;
    uVar12 = plVar10[1];
    if (uVar12 < 0x17) {
      *(char *)((long)plVar14 + 0x27) = (char)uVar12;
    }
    else {
      if (0x7fffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar9 = (uVar12 | 0xf) + 1;
      plVar15 = (long *)operator_new(uVar9);
      plVar14[2] = (long)plVar15;
      plVar14[3] = uVar12;
      plVar14[4] = uVar9 | 0x8000000000000000;
    }
    if ((plVar15 <= __src) && (__src < (long *)((long)plVar15 + uVar12 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(plVar15,__src,uVar12 + 1);
  }
  else {
    lVar13 = plVar10[1];
    lVar11 = *plVar10;
    plVar14[4] = plVar10[2];
    plVar14[3] = lVar13;
    *plVar15 = lVar11;
  }
  lVar11 = param_1[3];
  plVar14[0x39] = 0;
  *plVar14 = 0;
  plVar14[1] = uVar6;
  plVar14[6] = 0;
  plVar14[5] = 0;
  plVar14[0x26] = 0;
  plVar14[0x25] = 0;
  plVar14[0x28] = 0;
  plVar14[0x27] = 0;
  plVar14[0x2a] = 0;
  plVar14[0x29] = 0;
  plVar14[0x2c] = 0;
  plVar14[0x2b] = 0;
  plVar14[0x2e] = 0;
  plVar14[0x2d] = 0;
  plVar14[0x30] = 0;
  plVar14[0x2f] = 0;
  plVar14[0x32] = 0;
  plVar14[0x31] = 0;
  plVar14[0x34] = 0;
  plVar14[0x33] = 0;
  plVar14[0x36] = 0;
  plVar14[0x35] = 0;
  plVar14[0x38] = 0;
  plVar14[0x37] = 0;
  plVar14[0x24] = 0;
  plVar14[0x23] = 0;
  plVar14[0x20] = 0;
  plVar14[0x1f] = 0;
  plVar14[0x1e] = 0;
  plVar14[0x1d] = 0;
  plVar14[0x1c] = 0;
  plVar14[0x1b] = 0;
  plVar14[0x1a] = 0;
  plVar14[0x19] = 0;
  plVar14[0x18] = 0;
  plVar14[0x17] = 0;
  plVar14[0x16] = 0;
  plVar14[0x15] = 0;
  plVar14[0x14] = 0;
  plVar14[0x13] = 0;
  plVar14[0x12] = 0;
  plVar14[0x11] = 0;
  plVar14[0x10] = 0;
  plVar14[0xf] = 0;
  plVar14[0xe] = 0;
  plVar14[0xd] = 0;
  plVar14[0xc] = 0;
  plVar14[0xb] = 0;
  plVar14[0x22] = 0;
  plVar14[0x21] = 0;
  plVar14[10] = 0;
  plVar14[9] = 0;
  plVar14[8] = 0;
  plVar14[7] = 0;
  local_70 = 1;
  if ((uVar16 != 0) && ((float)(lVar11 + 1) <= *(float *)(param_1 + 4) * (float)uVar16))
  goto LAB_004742a8;
  if (uVar16 < 3) {
    uVar12 = 1;
  }
  else {
    uVar12 = (ulong)((uVar16 & uVar16 - 1) != 0);
  }
  uVar12 = uVar12 | uVar16 << 1;
  uVar9 = (ulong)((float)(lVar11 + 1) / *(float *)(param_1 + 4));
  if (uVar12 <= uVar9) {
    uVar12 = uVar9;
  }
  if (uVar12 - 1 == 0) {
    uVar12 = 2;
  }
  else if ((uVar12 & uVar12 - 1) != 0) {
    uVar12 = FUN_005204f8(uVar12);
    uVar16 = param_1[1];
  }
  if (uVar16 < uVar12) {
LAB_004741fc:
    FUN_00474398(param_1,uVar12);
  }
  else if (uVar12 < uVar16) {
    uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if (uVar16 < 3) {
LAB_00474264:
      uVar9 = FUN_005204f8();
    }
    else {
      uVar18 = NEON_cnt(uVar16,1);
      uVar17 = NEON_uaddlv(uVar18,1);
      if (1 < (CONCAT62((int6)((ulong)uVar18 >> 0x10),uVar17) & 0xffffffff)) goto LAB_00474264;
      if (1 < uVar9) {
        uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
      }
    }
    if (uVar12 <= uVar9) {
      uVar12 = uVar9;
    }
    if (uVar12 < uVar16) goto LAB_004741fc;
  }
  uVar16 = param_1[1];
  if ((uVar16 & uVar16 - 1) == 0) {
    unaff_x27 = uVar16 - 1 & uVar6;
  }
  else {
    unaff_x27 = uVar6;
    if (uVar16 <= uVar6) {
      uVar12 = 0;
      if (uVar16 != 0) {
        uVar12 = uVar6 / uVar16;
      }
      unaff_x27 = uVar6 - uVar12 * uVar16;
    }
  }
LAB_004742a8:
  plVar15 = local_80;
  lVar11 = *param_1;
  plVar10 = *(long **)(lVar11 + unaff_x27 * 8);
  if (plVar10 == (long *)0x0) {
    lVar13 = *plVar7;
    *plVar7 = (long)plVar14;
    *plVar14 = lVar13;
    *(long **)(lVar11 + unaff_x27 * 8) = plVar7;
    if (*local_80 != 0) {
      uVar6 = *(ulong *)(*local_80 + 8);
      if ((uVar16 & uVar16 - 1) == 0) {
        uVar6 = uVar6 & uVar16 - 1;
      }
      else if (uVar16 <= uVar6) {
        uVar12 = 0;
        if (uVar16 != 0) {
          uVar12 = uVar6 / uVar16;
        }
        uVar6 = uVar6 - uVar12 * uVar16;
      }
      *(long **)(*param_1 + uVar6 * 8) = local_80;
    }
  }
  else {
    *plVar14 = *plVar10;
    *plVar10 = (long)plVar14;
  }
  local_80 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  plVar7 = (long *)FUN_004744f4(&local_80,0);
  uVar18 = 1;
LAB_00474334:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar7,uVar18);
  }
  return plVar15;
}


// ===== 00474398  FUN_00474398 =====

void FUN_00474398(long *param_1,ulong param_2)

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


// ===== 004744f4  FUN_004744f4 =====

void FUN_004744f4(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar2 = (void *)*param_1;
  *param_1 = param_2;
  if (pvVar2 != (void *)0x0) {
    if (*(char *)(param_1 + 2) != '\0') {
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
      if (*(char *)((long)pvVar2 + 0x27) < '\0') {
        operator_delete(*(void **)((long)pvVar2 + 0x10));
      }
    }
    operator_delete(pvVar2);
    return;
  }
  return;
}


// ===== 00474570  FUN_00474570 =====

void FUN_00474570(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  void *pvVar5;
  int *piVar6;
  void *pvVar7;
  void *pvVar8;
  
  piVar6 = (int *)param_1[2];
  *param_1 = &PTR_FUN_00d1d058;
  if (piVar6 != (int *)0x0) {
    do {
      iVar1 = *piVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      pvVar7 = *(void **)(piVar6 + 2);
      if (pvVar7 != (void *)0x0) {
        pvVar4 = pvVar7;
        pvVar5 = *(void **)(piVar6 + 4);
        if (*(void **)(piVar6 + 4) != pvVar7) {
          do {
            pvVar4 = *(void **)((long)pvVar5 + -0x60);
            pvVar8 = (void *)((long)pvVar5 + -0x68);
            if (pvVar4 != (void *)0x0) {
              *(void **)((long)pvVar5 + -0x58) = pvVar4;
              operator_delete(pvVar4);
            }
            pvVar5 = pvVar8;
          } while (pvVar8 != pvVar7);
          pvVar4 = *(void **)(piVar6 + 2);
        }
        *(void **)(piVar6 + 4) = pvVar7;
        operator_delete(pvVar4);
      }
      operator_delete(piVar6);
      return;
    }
  }
  return;
}


// ===== 00474618  FUN_00474618 =====

void FUN_00474618(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  void *pvVar5;
  int *piVar6;
  void *pvVar7;
  void *pvVar8;
  
  piVar6 = (int *)param_1[2];
  *param_1 = &PTR_FUN_00d1d058;
  if (piVar6 != (int *)0x0) {
    do {
      iVar1 = *piVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      pvVar7 = *(void **)(piVar6 + 2);
      if (pvVar7 != (void *)0x0) {
        pvVar4 = pvVar7;
        pvVar5 = *(void **)(piVar6 + 4);
        if (*(void **)(piVar6 + 4) != pvVar7) {
          do {
            pvVar4 = *(void **)((long)pvVar5 + -0x60);
            pvVar8 = (void *)((long)pvVar5 + -0x68);
            if (pvVar4 != (void *)0x0) {
              *(void **)((long)pvVar5 + -0x58) = pvVar4;
              operator_delete(pvVar4);
            }
            pvVar5 = pvVar8;
          } while (pvVar8 != pvVar7);
          pvVar4 = *(void **)(piVar6 + 2);
        }
        *(void **)(piVar6 + 4) = pvVar7;
        operator_delete(pvVar4);
      }
      operator_delete(piVar6);
    }
  }
  operator_delete(param_1);
  return;
}


// ===== 004746bc  FUN_004746bc =====

void FUN_004746bc(long param_1)

{
  FUN_004727f0(*(undefined8 *)(param_1 + 8),param_1 + 0x10,*(undefined8 *)(param_1 + 0x18));
  return;
}


// ===== 004746d0  FUN_004746d0 =====

long * FUN_004746d0(long *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong unaff_x26;
  undefined2 uVar14;
  undefined8 uVar15;
  long *local_70;
  long *plStack_68;
  undefined1 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar5 = *param_2;
  uVar13 = param_1[1];
  uVar7 = ((uVar5 & 0xffffffff) * 8 + 8 ^ uVar5 >> 0x20) * -0x622015f714c7d297;
  uVar7 = (uVar5 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
  uVar7 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  if (uVar13 != 0) {
    uVar15 = NEON_cnt(uVar13,1);
    uVar14 = NEON_uaddlv(uVar15,1);
    uVar10 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
    if (uVar10 < 2) {
      unaff_x26 = uVar7 & uVar13 - 1;
    }
    else {
      unaff_x26 = uVar7;
      if (uVar13 <= uVar7) {
        uVar11 = 0;
        if (uVar13 != 0) {
          uVar11 = uVar7 / uVar13;
        }
        unaff_x26 = uVar7 - uVar11 * uVar13;
      }
    }
    plVar12 = *(long **)(*param_1 + unaff_x26 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        plVar12 = (long *)*plVar12;
        if (plVar12 == (long *)0x0) goto LAB_004747dc;
        uVar11 = plVar12[1];
        if (uVar11 != uVar7) {
          if (uVar10 < 2) {
            uVar11 = uVar11 & uVar13 - 1;
          }
          else if (uVar13 <= uVar11) {
            uVar2 = 0;
            if (uVar13 != 0) {
              uVar2 = uVar11 / uVar13;
            }
            uVar11 = uVar11 - uVar2 * uVar13;
          }
          if (uVar11 != unaff_x26) goto LAB_004747dc;
        }
      } while (plVar12[2] != uVar5);
      uVar15 = 0;
      goto LAB_004749e4;
    }
  }
LAB_004747dc:
  plVar1 = param_1 + 2;
  plVar4 = (long *)operator_new(0x40);
  lVar9 = param_1[3];
  lVar6 = *(long *)*param_4;
  *(undefined4 *)(plVar4 + 7) = 0x3f800000;
  *plVar4 = 0;
  plVar4[1] = uVar7;
  plVar4[2] = lVar6;
  plVar4[6] = 0;
  plVar4[5] = 0;
  plVar4[4] = 0;
  plVar4[3] = 0;
  local_60 = 1;
  local_70 = plVar4;
  plStack_68 = plVar1;
  if ((uVar13 == 0) || (*(float *)(param_1 + 4) * (float)uVar13 < (float)(lVar9 + 1))) {
    if (uVar13 < 3) {
      uVar5 = 1;
    }
    else {
      uVar5 = (ulong)((uVar13 & uVar13 - 1) != 0);
    }
    uVar5 = uVar5 | uVar13 << 1;
    uVar10 = (ulong)((float)(lVar9 + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar10) {
      uVar5 = uVar10;
    }
    if (uVar5 - 1 == 0) {
      uVar5 = 2;
    }
    else if ((uVar5 & uVar5 - 1) != 0) {
      uVar5 = FUN_005204f8(uVar5);
      uVar13 = param_1[1];
    }
    if (uVar13 < uVar5) {
LAB_004748a4:
      FUN_00474a18(param_1,uVar5);
    }
    else if (uVar5 < uVar13) {
      uVar10 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar13 < 3) {
LAB_00474914:
        uVar10 = FUN_005204f8();
      }
      else {
        uVar15 = NEON_cnt(uVar13,1);
        uVar14 = NEON_uaddlv(uVar15,1);
        if (1 < (CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff)) goto LAB_00474914;
        if (1 < uVar10) {
          uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
        }
      }
      if (uVar5 <= uVar10) {
        uVar5 = uVar10;
      }
      if (uVar5 < uVar13) goto LAB_004748a4;
    }
    uVar13 = param_1[1];
    if ((uVar13 & uVar13 - 1) == 0) {
      unaff_x26 = uVar13 - 1 & uVar7;
    }
    else {
      unaff_x26 = uVar7;
      if (uVar13 <= uVar7) {
        uVar5 = 0;
        if (uVar13 != 0) {
          uVar5 = uVar7 / uVar13;
        }
        unaff_x26 = uVar7 - uVar5 * uVar13;
      }
    }
  }
  plVar12 = local_70;
  lVar6 = *param_1;
  plVar8 = *(long **)(lVar6 + unaff_x26 * 8);
  if (plVar8 == (long *)0x0) {
    lVar9 = *plVar1;
    *plVar1 = (long)plVar4;
    *plVar4 = lVar9;
    *(long **)(lVar6 + unaff_x26 * 8) = plVar1;
    if (*local_70 != 0) {
      uVar5 = *(ulong *)(*local_70 + 8);
      if ((uVar13 & uVar13 - 1) == 0) {
        uVar5 = uVar5 & uVar13 - 1;
      }
      else if (uVar13 <= uVar5) {
        uVar7 = 0;
        if (uVar13 != 0) {
          uVar7 = uVar5 / uVar13;
        }
        uVar5 = uVar5 - uVar7 * uVar13;
      }
      *(long **)(*param_1 + uVar5 * 8) = local_70;
    }
  }
  else {
    *plVar4 = *plVar8;
    *plVar8 = (long)plVar4;
  }
  local_70 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  param_1 = (long *)FUN_00474b74(&local_70,0);
  uVar15 = 1;
LAB_004749e4:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return plVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1,uVar15);
}


// ===== 00474a18  FUN_00474a18 =====

void FUN_00474a18(long *param_1,ulong param_2)

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


// ===== 00474b74  FUN_00474b74 =====

void FUN_00474b74(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = (void *)*param_1;
  *param_1 = param_2;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(char *)(param_1 + 2) != '\0') {
    puVar1 = (undefined8 *)*(void **)((long)pvVar3 + 0x28);
    while (puVar1 != (undefined8 *)0x0) {
      pvVar2 = (void *)*puVar1;
      FUN_004305c8(puVar1 + 5);
      if (*(char *)((long)puVar1 + 0x27) < '\0') {
        operator_delete((void *)puVar1[2]);
      }
      operator_delete(puVar1);
      puVar1 = (undefined8 *)pvVar2;
    }
    pvVar2 = *(void **)((long)pvVar3 + 0x18);
    *(undefined8 *)((long)pvVar3 + 0x18) = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
  }
  operator_delete(pvVar3);
  return;
}


// ===== 00474c04  FUN_00474c04 =====

long * FUN_00474c04(long *param_1,undefined8 *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  ulong unaff_x27;
  undefined2 uVar17;
  undefined8 uVar18;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar6 = param_2[1];
  puVar8 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar6 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar8 = param_2;
  }
  uVar6 = FUN_00427058(auStack_70,puVar8,uVar6);
  uVar16 = param_1[1];
  if (uVar16 != 0) {
    uVar18 = NEON_cnt(uVar16,1);
    uVar17 = NEON_uaddlv(uVar18,1);
    uVar11 = CONCAT62((int6)((ulong)uVar18 >> 0x10),uVar17) & 0xffffffff;
    if (uVar11 < 2) {
      unaff_x27 = uVar16 - 1 & uVar6;
    }
    else {
      unaff_x27 = uVar6;
      if (uVar16 <= uVar6) {
        uVar9 = 0;
        if (uVar16 != 0) {
          uVar9 = uVar6 / uVar16;
        }
        unaff_x27 = uVar6 - uVar9 * uVar16;
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + unaff_x27 * 8);
    if ((puVar8 != (undefined8 *)0x0) && (plVar15 = (long *)*puVar8, plVar15 != (long *)0x0)) {
      puVar8 = (undefined8 *)*param_2;
      __n = param_2[1];
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        puVar8 = param_2;
        __n = (ulong)*(byte *)((long)param_2 + 0x17);
      }
      do {
        uVar9 = plVar15[1];
        if (uVar9 != uVar6) {
          if (uVar11 < 2) {
            uVar9 = uVar9 & uVar16 - 1;
          }
          else if (uVar16 <= uVar9) {
            uVar3 = 0;
            if (uVar16 != 0) {
              uVar3 = uVar9 / uVar16;
            }
            uVar9 = uVar9 - uVar3 * uVar16;
          }
          if (uVar9 != unaff_x27) break;
        }
        bVar2 = *(byte *)((long)plVar15 + 0x27);
        sVar1 = plVar15[3];
        if (-1 < (char)bVar2) {
          sVar1 = (ulong)bVar2;
        }
        if (sVar1 == __n) {
          plVar7 = plVar15 + 2;
          plVar12 = (long *)*plVar7;
          if ((char)bVar2 < '\0') {
            plVar7 = plVar12;
            if (__n != 0) {
              uVar5 = memcmp(plVar12,puVar8,__n);
              plVar7 = (long *)(ulong)uVar5;
              if (uVar5 != 0) goto LAB_00474cdc;
            }
          }
          else if (bVar2 != 0) {
            uVar9 = 0;
            while (*(char *)((long)plVar15 + uVar9 + 0x10) == *(char *)((long)puVar8 + uVar9)) {
              uVar9 = uVar9 + 1;
              if (bVar2 == uVar9) goto LAB_00474d9c;
            }
            goto LAB_00474cdc;
          }
LAB_00474d9c:
          uVar18 = 0;
          goto LAB_00474f70;
        }
LAB_00474cdc:
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
  }
  plVar15 = (long *)operator_new(0x680);
  plVar7 = (long *)FUN_00474fa8(plVar15 + 2);
  lVar10 = param_1[3];
  *plVar15 = 0;
  plVar15[1] = uVar6;
  if ((uVar16 == 0) || (*(float *)(param_1 + 4) * (float)uVar16 < (float)(lVar10 + 1))) {
    if (uVar16 < 3) {
      uVar11 = 1;
    }
    else {
      uVar11 = (ulong)((uVar16 & uVar16 - 1) != 0);
    }
    plVar12 = (long *)(uVar11 | uVar16 << 1);
    plVar13 = (long *)(long)((float)(lVar10 + 1) / *(float *)(param_1 + 4));
    if (plVar12 <= plVar13) {
      plVar12 = plVar13;
    }
    if ((long)plVar12 - 1U == 0) {
      plVar12 = (long *)0x2;
    }
    else if (((ulong)plVar12 & (long)plVar12 - 1U) != 0) {
      plVar7 = (long *)FUN_005204f8(plVar12);
      plVar12 = plVar7;
    }
    plVar13 = (long *)param_1[1];
    if (plVar13 < plVar12) {
LAB_00474e4c:
      plVar7 = (long *)FUN_004750ec(param_1,plVar12);
    }
    else if (plVar12 < plVar13) {
      plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (plVar13 < (long *)0x3) {
LAB_00474eb4:
        plVar7 = (long *)FUN_005204f8();
      }
      else {
        uVar18 = NEON_cnt(plVar13,1);
        uVar17 = NEON_uaddlv(uVar18,1);
        if (1 < (CONCAT62((int6)((ulong)uVar18 >> 0x10),uVar17) & 0xffffffff)) goto LAB_00474eb4;
        if ((long *)0x1 < plVar7) {
          plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
        }
      }
      if (plVar12 <= plVar7) {
        plVar12 = plVar7;
      }
      if (plVar12 < plVar13) goto LAB_00474e4c;
    }
    uVar16 = param_1[1];
    if ((uVar16 & uVar16 - 1) == 0) {
      unaff_x27 = uVar16 - 1 & uVar6;
    }
    else {
      unaff_x27 = uVar6;
      if (uVar16 <= uVar6) {
        uVar11 = 0;
        if (uVar16 != 0) {
          uVar11 = uVar6 / uVar16;
        }
        unaff_x27 = uVar6 - uVar11 * uVar16;
      }
    }
  }
  lVar10 = *param_1;
  plVar12 = *(long **)(lVar10 + unaff_x27 * 8);
  if (plVar12 == (long *)0x0) {
    plVar12 = param_1 + 2;
    lVar14 = *plVar12;
    *plVar12 = (long)plVar15;
    *plVar15 = lVar14;
    *(long **)(lVar10 + unaff_x27 * 8) = plVar12;
    if (*plVar15 == 0) goto LAB_00474f60;
    uVar6 = *(ulong *)(*plVar15 + 8);
    if ((uVar16 & uVar16 - 1) == 0) {
      uVar6 = uVar6 & uVar16 - 1;
    }
    else if (uVar16 <= uVar6) {
      uVar11 = 0;
      if (uVar16 != 0) {
        uVar11 = uVar6 / uVar16;
      }
      uVar6 = uVar6 - uVar11 * uVar16;
    }
    plVar12 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    *plVar15 = *plVar12;
  }
  *plVar12 = (long)plVar15;
LAB_00474f60:
  uVar18 = 1;
  param_1[3] = param_1[3] + 1;
LAB_00474f70:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar7,uVar18);
  }
  return plVar15;
}


// ===== 00474fa8  FUN_00474fa8 =====

void FUN_00474fa8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  undefined8 *__dest;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    __src = (undefined8 *)*param_3;
    uVar2 = param_3[1];
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
    uVar4 = param_3[1];
    uVar3 = *param_3;
    param_1[2] = param_3[2];
    param_1[1] = uVar4;
    *param_1 = uVar3;
  }
  memset(param_1 + 3,0,0x648);
  param_1[0xa3] = 0x3f747ae147ae147b;
  param_1[0xab] = 0x3f747ae147ae147b;
  param_1[0xa5] = 0;
  param_1[0xa4] = 0;
  param_1[0xa7] = 0;
  param_1[0xa6] = 0;
  param_1[0xa9] = 0;
  param_1[0xa8] = 0;
  param_1[0xad] = 0;
  param_1[0xac] = 0;
  param_1[0xaf] = 0;
  param_1[0xae] = 0;
  param_1[0xb1] = 0;
  param_1[0xb0] = 0;
  param_1[0xb3] = 0x3f747ae147ae147b;
  param_1[0xb5] = 0;
  param_1[0xb4] = 0;
  param_1[0xb7] = 0;
  param_1[0xb6] = 0;
  param_1[0xb9] = 0;
  param_1[0xb8] = 0;
  param_1[0xbb] = 0x3f747ae147ae147b;
  param_1[0xbd] = 0;
  param_1[0xbc] = 0;
  param_1[0xbf] = 0;
  param_1[0xbe] = 0;
  param_1[0xc1] = 0;
  param_1[0xc0] = 0;
  param_1[0xc3] = 0x3f747ae147ae147b;
  param_1[0xc9] = 0;
  param_1[200] = 0;
  param_1[199] = 0;
  param_1[0xc6] = 0;
  param_1[0xc5] = 0;
  param_1[0xc4] = 0;
  param_1[0xcd] = 0;
  param_1[0xcc] = 0;
  return;
}


// ===== 004750ec  FUN_004750ec =====

void FUN_004750ec(long *param_1,ulong param_2)

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


// ===== 00475248  FUN_00475248 =====

undefined1  [16] FUN_00475248(long *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined2 uVar11;
  undefined8 uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  
  uVar2 = *param_2;
  uVar10 = param_1[1];
  uVar6 = ((uVar2 & 0xffffffff) * 8 + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
  uVar6 = (uVar2 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
  uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  if (uVar10 != 0) {
    uVar12 = NEON_cnt(uVar10,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar7 < 2) {
      unaff_x24 = uVar6 & uVar10 - 1;
    }
    else {
      unaff_x24 = uVar6;
      if (uVar10 <= uVar6) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = uVar6 / uVar10;
        }
        unaff_x24 = uVar6 - uVar8 * uVar10;
      }
    }
    plVar9 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar9 != (long *)0x0) {
      do {
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) goto LAB_00475340;
        uVar8 = plVar9[1];
        if (uVar8 != uVar6) {
          if (uVar7 < 2) {
            uVar8 = uVar8 & uVar10 - 1;
          }
          else if (uVar10 <= uVar8) {
            uVar1 = 0;
            if (uVar10 != 0) {
              uVar1 = uVar8 / uVar10;
            }
            uVar8 = uVar8 - uVar1 * uVar10;
          }
          if (uVar8 != unaff_x24) goto LAB_00475340;
        }
      } while (plVar9[2] != uVar2);
      uVar12 = 0;
      goto LAB_00475518;
    }
  }
LAB_00475340:
  plVar9 = (long *)operator_new(0x38);
  lVar5 = param_1[3];
  lVar3 = *(long *)*param_4;
  *plVar9 = 0;
  plVar9[6] = 0;
  plVar9[5] = 0;
  plVar9[4] = 0;
  plVar9[3] = 0;
  fVar13 = *(float *)(param_1 + 4);
  plVar9[1] = uVar6;
  plVar9[2] = lVar3;
  if ((uVar10 == 0) || (fVar13 * (float)uVar10 < (float)(lVar5 + 1))) {
    if (uVar10 < 3) {
      uVar2 = 1;
    }
    else {
      uVar2 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar2 = uVar2 | uVar10 << 1;
    uVar7 = (ulong)((float)(lVar5 + 1) / fVar13);
    if (uVar2 <= uVar7) {
      uVar2 = uVar7;
    }
    if (uVar2 - 1 == 0) {
      uVar2 = 2;
    }
    else if ((uVar2 & uVar2 - 1) != 0) {
      uVar2 = FUN_005204f8(uVar2);
      uVar10 = param_1[1];
    }
    if (uVar10 < uVar2) {
LAB_00475464:
      FUN_00475530(param_1,uVar2);
    }
    else if (uVar2 < uVar10) {
      uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar10 < 3) {
LAB_00475450:
        uVar7 = FUN_005204f8();
      }
      else {
        uVar12 = NEON_cnt(uVar10,1);
        uVar11 = NEON_uaddlv(uVar12,1);
        if (1 < (CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff)) goto LAB_00475450;
        if (1 < uVar7) {
          uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
        }
      }
      if (uVar2 <= uVar7) {
        uVar2 = uVar7;
      }
      if (uVar2 < uVar10) goto LAB_00475464;
    }
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x24 = uVar10 - 1 & uVar6;
    }
    else {
      unaff_x24 = uVar6;
      if (uVar10 <= uVar6) {
        uVar2 = 0;
        if (uVar10 != 0) {
          uVar2 = uVar6 / uVar10;
        }
        unaff_x24 = uVar6 - uVar2 * uVar10;
      }
    }
  }
  lVar3 = *param_1;
  plVar4 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    lVar5 = *plVar4;
    *plVar4 = (long)plVar9;
    *plVar9 = lVar5;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar4;
    if (*plVar9 != 0) {
      uVar2 = *(ulong *)(*plVar9 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar2 = uVar2 & uVar10 - 1;
      }
      else if (uVar10 <= uVar2) {
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = uVar2 / uVar10;
        }
        uVar2 = uVar2 - uVar6 * uVar10;
      }
      plVar4 = (long *)(*param_1 + uVar2 * 8);
      goto LAB_00475504;
    }
  }
  else {
    *plVar9 = *plVar4;
LAB_00475504:
    *plVar4 = (long)plVar9;
  }
  uVar12 = 1;
  param_1[3] = param_1[3] + 1;
LAB_00475518:
  auVar14._8_8_ = uVar12;
  auVar14._0_8_ = plVar9;
  return auVar14;
}


// ===== 00475530  FUN_00475530 =====

void FUN_00475530(long *param_1,ulong param_2)

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


// ===== 0047568c  FUN_0047568c =====

undefined1  [16] FUN_0047568c(long *param_1,uint *param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  long *plVar4;
  long lVar5;
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
        if (plVar9 == (long *)0x0) goto LAB_0047574c;
        uVar7 = plVar9[1];
        if (uVar7 != uVar11) {
          if (uVar6 < 2) {
            uVar7 = uVar7 & uVar10 - 1;
          }
          else if (uVar10 <= uVar7) {
            uVar2 = 0;
            if (uVar10 != 0) {
              uVar2 = uVar7 / uVar10;
            }
            uVar7 = uVar7 - uVar2 * uVar10;
          }
          if (uVar7 != unaff_x24) goto LAB_0047574c;
        }
      } while (*(uint *)(plVar9 + 2) != uVar1);
      uVar13 = 0;
      goto LAB_00475920;
    }
  }
LAB_0047574c:
  plVar9 = (long *)operator_new(0x20);
  lVar5 = param_1[3];
  puVar3 = (undefined4 *)*param_4;
  plVar9[3] = 0;
  fVar14 = *(float *)(param_1 + 4);
  *plVar9 = 0;
  plVar9[1] = uVar11;
  *(undefined4 *)(plVar9 + 2) = *puVar3;
  if ((uVar10 == 0) || (fVar14 * (float)uVar10 < (float)(lVar5 + 1))) {
    if (uVar10 < 3) {
      uVar6 = 1;
    }
    else {
      uVar6 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar6 = uVar6 | uVar10 << 1;
    uVar7 = (ulong)((float)(lVar5 + 1) / fVar14);
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
LAB_00475868:
      FUN_00475938(param_1,uVar6);
    }
    else if (uVar6 < uVar10) {
      uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar10 < 3) {
LAB_00475854:
        uVar7 = FUN_005204f8();
      }
      else {
        uVar13 = NEON_cnt(uVar10,1);
        uVar12 = NEON_uaddlv(uVar13,1);
        if (1 < (CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff)) goto LAB_00475854;
        if (1 < uVar7) {
          uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
        }
      }
      if (uVar6 <= uVar7) {
        uVar6 = uVar7;
      }
      if (uVar6 < uVar10) goto LAB_00475868;
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
  lVar5 = *param_1;
  plVar4 = *(long **)(lVar5 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    lVar8 = *plVar4;
    *plVar4 = (long)plVar9;
    *plVar9 = lVar8;
    *(long **)(lVar5 + unaff_x24 * 8) = plVar4;
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
      plVar4 = (long *)(*param_1 + uVar11 * 8);
      goto LAB_0047590c;
    }
  }
  else {
    *plVar9 = *plVar4;
LAB_0047590c:
    *plVar4 = (long)plVar9;
  }
  uVar13 = 1;
  param_1[3] = param_1[3] + 1;
LAB_00475920:
  auVar15._8_8_ = uVar13;
  auVar15._0_8_ = plVar9;
  return auVar15;
}


// ===== 00475938  FUN_00475938 =====

void FUN_00475938(long *param_1,ulong param_2)

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


// ===== 00475a94  FUN_00475a94 =====

undefined1  [16] FUN_00475a94(long *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined2 uVar11;
  undefined8 uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  
  uVar2 = *param_2;
  uVar10 = param_1[1];
  uVar6 = ((uVar2 & 0xffffffff) * 8 + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
  uVar6 = (uVar2 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
  uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  if (uVar10 != 0) {
    uVar12 = NEON_cnt(uVar10,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar7 < 2) {
      unaff_x24 = uVar6 & uVar10 - 1;
    }
    else {
      unaff_x24 = uVar6;
      if (uVar10 <= uVar6) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = uVar6 / uVar10;
        }
        unaff_x24 = uVar6 - uVar8 * uVar10;
      }
    }
    plVar9 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar9 != (long *)0x0) {
      do {
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) goto LAB_00475b8c;
        uVar8 = plVar9[1];
        if (uVar8 != uVar6) {
          if (uVar7 < 2) {
            uVar8 = uVar8 & uVar10 - 1;
          }
          else if (uVar10 <= uVar8) {
            uVar1 = 0;
            if (uVar10 != 0) {
              uVar1 = uVar8 / uVar10;
            }
            uVar8 = uVar8 - uVar1 * uVar10;
          }
          if (uVar8 != unaff_x24) goto LAB_00475b8c;
        }
      } while (plVar9[2] != uVar2);
      uVar12 = 0;
      goto LAB_00475d64;
    }
  }
LAB_00475b8c:
  plVar9 = (long *)operator_new(0x38);
  lVar5 = param_1[3];
  lVar3 = *(long *)*param_4;
  *plVar9 = 0;
  plVar9[6] = 0;
  plVar9[5] = 0;
  plVar9[4] = 0;
  plVar9[3] = 0;
  fVar13 = *(float *)(param_1 + 4);
  plVar9[1] = uVar6;
  plVar9[2] = lVar3;
  if ((uVar10 == 0) || (fVar13 * (float)uVar10 < (float)(lVar5 + 1))) {
    if (uVar10 < 3) {
      uVar2 = 1;
    }
    else {
      uVar2 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar2 = uVar2 | uVar10 << 1;
    uVar7 = (ulong)((float)(lVar5 + 1) / fVar13);
    if (uVar2 <= uVar7) {
      uVar2 = uVar7;
    }
    if (uVar2 - 1 == 0) {
      uVar2 = 2;
    }
    else if ((uVar2 & uVar2 - 1) != 0) {
      uVar2 = FUN_005204f8(uVar2);
      uVar10 = param_1[1];
    }
    if (uVar10 < uVar2) {
LAB_00475cb0:
      FUN_00475d7c(param_1,uVar2);
    }
    else if (uVar2 < uVar10) {
      uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar10 < 3) {
LAB_00475c9c:
        uVar7 = FUN_005204f8();
      }
      else {
        uVar12 = NEON_cnt(uVar10,1);
        uVar11 = NEON_uaddlv(uVar12,1);
        if (1 < (CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff)) goto LAB_00475c9c;
        if (1 < uVar7) {
          uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
        }
      }
      if (uVar2 <= uVar7) {
        uVar2 = uVar7;
      }
      if (uVar2 < uVar10) goto LAB_00475cb0;
    }
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x24 = uVar10 - 1 & uVar6;
    }
    else {
      unaff_x24 = uVar6;
      if (uVar10 <= uVar6) {
        uVar2 = 0;
        if (uVar10 != 0) {
          uVar2 = uVar6 / uVar10;
        }
        unaff_x24 = uVar6 - uVar2 * uVar10;
      }
    }
  }
  lVar3 = *param_1;
  plVar4 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    lVar5 = *plVar4;
    *plVar4 = (long)plVar9;
    *plVar9 = lVar5;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar4;
    if (*plVar9 != 0) {
      uVar2 = *(ulong *)(*plVar9 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar2 = uVar2 & uVar10 - 1;
      }
      else if (uVar10 <= uVar2) {
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = uVar2 / uVar10;
        }
        uVar2 = uVar2 - uVar6 * uVar10;
      }
      plVar4 = (long *)(*param_1 + uVar2 * 8);
      goto LAB_00475d50;
    }
  }
  else {
    *plVar9 = *plVar4;
LAB_00475d50:
    *plVar4 = (long)plVar9;
  }
  uVar12 = 1;
  param_1[3] = param_1[3] + 1;
LAB_00475d64:
  auVar14._8_8_ = uVar12;
  auVar14._0_8_ = plVar9;
  return auVar14;
}


// ===== 00475d7c  FUN_00475d7c =====

void FUN_00475d7c(long *param_1,ulong param_2)

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


// ===== 00475ed8  FUN_00475ed8 =====

long * FUN_00475ed8(long *param_1,undefined8 *param_2)

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
                  if (bVar2 == uVar9) goto LAB_0047605c;
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
            if (uVar9 != uVar12) goto LAB_00476058;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      goto LAB_0047605c;
    }
  }
LAB_00476058:
  plVar8 = (long *)0x0;
LAB_0047605c:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return plVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00476094  FUN_00476094 =====

void FUN_00476094(long *param_1,uint *param_2)

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
            FUN_004761a0(local_40);
            pvVar4 = local_40[0];
            local_40[0] = (void *)0x0;
            if (pvVar4 != (void *)0x0) {
              operator_delete(pvVar4);
            }
            uVar12 = 1;
            goto LAB_0047615c;
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
LAB_0047615c:
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar12);
}


// ===== 004761a0  FUN_004761a0 =====

void FUN_004761a0(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar9 == uVar3) goto LAB_0047626c;
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
    if (uVar9 == uVar3) goto LAB_0047626c;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_0047626c:
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


// ===== 004762d4  FUN_004762d4 =====

undefined8 FUN_004762d4(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  void *local_50 [2];
  char local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__hash_table",0x965,
               "__p != end()",
               "unordered container erase(iterator) called with a non-dereferenceable iterator");
  }
  uVar3 = *param_2;
  FUN_0047638c(local_50);
  pvVar2 = local_50[0];
  local_50[0] = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    if ((local_40 != '\0') &&
       (FUN_004305c8((long)pvVar2 + 0x28), *(char *)((long)pvVar2 + 0x27) < '\0')) {
      operator_delete(*(void **)((long)pvVar2 + 0x10));
    }
    operator_delete(pvVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0047638c  FUN_0047638c =====

void FUN_0047638c(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar9 == uVar3) goto LAB_00476458;
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
    if (uVar9 == uVar3) goto LAB_00476458;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_00476458:
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


// ===== 004764c0  FUN_004764c0 =====

void FUN_004764c0(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar9 == uVar3) goto LAB_0047658c;
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
    if (uVar9 == uVar3) goto LAB_0047658c;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_0047658c:
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


// ===== 004765f4  FUN_004765f4 =====

void FUN_004765f4(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  void *local_40 [2];
  char local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar5 = *param_2;
    uVar12 = NEON_cnt(uVar4,1);
    uVar6 = ((uVar5 & 0xffffffff) * 8 + 8 ^ uVar5 >> 0x20) * -0x622015f714c7d297;
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar6 = (uVar5 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
    uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    if (uVar7 < 2) {
      uVar8 = uVar6 & uVar4 - 1;
    }
    else {
      uVar8 = uVar6;
      if (uVar4 <= uVar6) {
        uVar8 = 0;
        if (uVar4 != 0) {
          uVar8 = uVar6 / uVar4;
        }
        uVar8 = uVar6 - uVar8 * uVar4;
      }
    }
    plVar9 = *(long **)(*param_1 + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar6) {
          if (plVar9[2] == uVar5) {
            FUN_00476754(local_40);
            pvVar3 = local_40[0];
            local_40[0] = (void *)0x0;
            if (pvVar3 != (void *)0x0) {
              if ((local_30 != '\0') && (*(char *)((long)pvVar3 + 0x37) < '\0')) {
                operator_delete(*(void **)((long)pvVar3 + 0x20));
              }
              operator_delete(pvVar3);
            }
            uVar12 = 1;
            goto LAB_004766f4;
          }
        }
        else {
          if (uVar7 < 2) {
            uVar10 = uVar10 & uVar4 - 1;
          }
          else if (uVar4 <= uVar10) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar10 / uVar4;
            }
            uVar10 = uVar10 - uVar1 * uVar4;
          }
          if (uVar10 != uVar8) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  uVar12 = 0;
LAB_004766f4:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar12);
}


// ===== 00476754  FUN_00476754 =====

void FUN_00476754(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar9 == uVar3) goto LAB_00476820;
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
    if (uVar9 == uVar3) goto LAB_00476820;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_00476820:
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


// ===== 00476888  FUN_00476888 =====

void FUN_00476888(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  void *local_40 [2];
  char local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar5 = *param_2;
    uVar12 = NEON_cnt(uVar4,1);
    uVar6 = ((uVar5 & 0xffffffff) * 8 + 8 ^ uVar5 >> 0x20) * -0x622015f714c7d297;
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar6 = (uVar5 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
    uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    if (uVar7 < 2) {
      uVar8 = uVar6 & uVar4 - 1;
    }
    else {
      uVar8 = uVar6;
      if (uVar4 <= uVar6) {
        uVar8 = 0;
        if (uVar4 != 0) {
          uVar8 = uVar6 / uVar4;
        }
        uVar8 = uVar6 - uVar8 * uVar4;
      }
    }
    plVar9 = *(long **)(*param_1 + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar6) {
          if (plVar9[2] == uVar5) {
            FUN_004769e8(local_40);
            pvVar3 = local_40[0];
            local_40[0] = (void *)0x0;
            if (pvVar3 != (void *)0x0) {
              if ((local_30 != '\0') && (*(char *)((long)pvVar3 + 0x37) < '\0')) {
                operator_delete(*(void **)((long)pvVar3 + 0x20));
              }
              operator_delete(pvVar3);
            }
            uVar12 = 1;
            goto LAB_00476988;
          }
        }
        else {
          if (uVar7 < 2) {
            uVar10 = uVar10 & uVar4 - 1;
          }
          else if (uVar4 <= uVar10) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar10 / uVar4;
            }
            uVar10 = uVar10 - uVar1 * uVar4;
          }
          if (uVar10 != uVar8) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  uVar12 = 0;
LAB_00476988:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar12);
}


// ===== 004769e8  FUN_004769e8 =====

void FUN_004769e8(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar9 == uVar3) goto LAB_00476ab4;
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
    if (uVar9 == uVar3) goto LAB_00476ab4;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_00476ab4:
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


// ===== 00476b1c  FUN_00476b1c =====

void FUN_00476b1c(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 local_78 [2];
  code *local_68;
  undefined8 *local_60;
  undefined8 local_58 [2];
  code *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0x80);
  local_48 = FUN_0040df64;
  local_40 = &DAT_001f1910;
  local_68 = FUN_0040dec4;
  local_60 = &DAT_001f1910;
  FUN_00513ef0(pvVar2,"WindowPreviews",local_58,local_78);
  if ((code *)local_60[1] != (code *)0x0) {
    (*(code *)local_60[1])(local_78[0]);
  }
  if ((code *)local_40[1] != (code *)0x0) {
    (*(code *)local_40[1])(local_58[0]);
  }
  *param_1 = pvVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00476bdc  FUN_00476bdc =====

void FUN_00476bdc(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  if (param_1[2] == 0) {
    pvVar1 = operator_new(8);
    FUN_004c1490();
    pvVar3 = (void *)param_1[2];
    param_1[2] = pvVar1;
    if (pvVar3 != (void *)0x0) {
      FUN_004c1498(pvVar3);
      operator_delete(pvVar3);
    }
  }
  pvVar1 = (void *)param_1[3];
  if (pvVar1 == (void *)0x0) {
    uVar2 = FUN_0051452c(*param_1);
    pvVar1 = operator_new(0x18);
    FUN_005156ac(pvVar1,uVar2,param_1);
    puVar4 = (undefined8 *)param_1[3];
    param_1[3] = pvVar1;
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_00d193e8;
      if (puVar4[1] != 0) {
        FUN_005ce374(puVar4[1],PTR_free_00d51ac0);
      }
      operator_delete(puVar4);
      pvVar1 = (void *)param_1[3];
    }
  }
  FUN_00515738(pvVar1);
  FUN_00515708(param_1[3],FUN_00476cb4,5000,0);
  return;
}


// ===== 00476cb4  FUN_00476cb4 =====

void FUN_00476cb4(long *param_1)

{
  long lVar1;
  void *pvVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    pvVar2 = *(void **)(lVar1 + 0x10);
    *(undefined8 *)(lVar1 + 0x10) = 0;
    if (pvVar2 != (void *)0x0) {
      FUN_004c1498(pvVar2);
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 00476cf8  FUN_00476cf8 =====

void FUN_00476cf8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  undefined8 *local_b0;
  void *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar1 = param_4[2];
  local_b0 = (undefined8 *)param_4[3];
  uVar8 = *param_4;
  uVar2 = param_4[1];
  lVar14 = *param_1;
  if ((code *)*local_b0 != (code *)0x0) {
    uVar8 = (*(code *)*local_b0)(uVar8);
  }
  lVar13 = *(long *)(lVar14 + 0x58);
  puVar11 = local_b0;
  if (lVar13 != 0) {
    lVar14 = *(long *)(lVar14 + 0x78);
    if (lVar14 == 0) {
      puVar11 = (undefined8 *)operator_new(0x40);
      puVar11[2] = param_2;
      puVar11[3] = param_3;
      puVar11[4] = uVar8;
      puVar11[5] = uVar2;
      *puVar11 = &PTR_FUN_00d1d0a8;
      puVar11[1] = param_1;
      puVar11[6] = uVar1;
      puVar11[7] = local_b0;
      if (local_b0[1] != 0) {
        local_b0 = &DAT_001f1910;
      }
      FUN_00512cf8(lVar13,puVar11);
      pcVar12 = (code *)local_b0[1];
      goto joined_r0x00476ebc;
    }
    uVar9 = FUN_005ce36c();
    local_98 = CONCAT17(0x11,(undefined7)local_98);
    if (local_b0[1] != 0) {
      puVar11 = &DAT_001f1910;
    }
    if ((&local_a8 < (void **)0x19fbc8) && ("GetScreenPreviews" < (char *)((long)&local_98 + 1U))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar4 = (ulong)local_98 >> 8;
    local_98 = CONCAT71((uint7)uVar4 & 0xffffffffffff00,0x73);
    uStack_a0._0_1_ = s_GetScreenPreviews_0019fbc7[8];
    uStack_a0._1_1_ = s_GetScreenPreviews_0019fbc7[9];
    uStack_a0._2_1_ = s_GetScreenPreviews_0019fbc7[10];
    uStack_a0._3_1_ = s_GetScreenPreviews_0019fbc7[0xb];
    uStack_a0._4_1_ = s_GetScreenPreviews_0019fbc7[0xc];
    uStack_a0._5_1_ = s_GetScreenPreviews_0019fbc7[0xd];
    uStack_a0._6_1_ = s_GetScreenPreviews_0019fbc7[0xe];
    uStack_a0._7_1_ = s_GetScreenPreviews_0019fbc7[0xf];
    local_a8 = (void *)s_GetScreenPreviews_0019fbc7._0_8_;
    local_80 = FUN_0040e7ec;
    local_78 = &DAT_001f4e70;
    local_90 = lVar14;
    local_70 = uVar9;
    puVar10 = (undefined8 *)operator_new(0x80);
    uVar7 = local_98;
    uVar6 = uStack_a0;
    pvVar5 = local_a8;
    puVar10[6] = uVar1;
    puVar10[7] = local_b0;
    puVar10[3] = param_3;
    *puVar10 = &PTR_FUN_00d1d080;
    puVar10[2] = param_2;
    puVar10[1] = param_1;
    puVar10[5] = uVar2;
    puVar10[4] = uVar8;
    if (local_b0[1] != 0) {
      local_b0 = &DAT_001f1910;
    }
    uStack_a0 = 0;
    local_98 = 0;
    local_a8 = (void *)0x0;
    puVar10[9] = uVar6;
    puVar10[8] = pvVar5;
    puVar10[10] = uVar7;
    puVar10[0xf] = uVar9;
    puVar10[0xc] = uStack_88;
    puVar10[0xb] = local_90;
    puVar10[0xd] = FUN_0040e7ec;
    puVar10[0xe] = &DAT_001f4e70;
    FUN_00512cf8(lVar13);
    if (*(code **)(local_78 + 8) != (code *)0x0) {
      (**(code **)(local_78 + 8))(local_90);
    }
    if (local_98 < 0) {
      operator_delete(local_a8);
    }
    if ((code *)local_b0[1] != (code *)0x0) {
      (*(code *)local_b0[1])(uVar8);
    }
  }
  pcVar12 = (code *)puVar11[1];
joined_r0x00476ebc:
  if (pcVar12 != (code *)0x0) {
    (*pcVar12)(uVar8);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00476f70  FUN_00476f70 =====

void FUN_00476f70(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  undefined8 *local_b0;
  void *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar1 = param_4[2];
  local_b0 = (undefined8 *)param_4[3];
  uVar8 = *param_4;
  uVar2 = param_4[1];
  lVar14 = *param_1;
  if ((code *)*local_b0 != (code *)0x0) {
    uVar8 = (*(code *)*local_b0)(uVar8);
  }
  lVar13 = *(long *)(lVar14 + 0x58);
  puVar11 = local_b0;
  if (lVar13 != 0) {
    lVar14 = *(long *)(lVar14 + 0x78);
    if (lVar14 == 0) {
      puVar11 = (undefined8 *)operator_new(0x40);
      puVar11[2] = param_2;
      puVar11[3] = param_3;
      puVar11[4] = uVar8;
      puVar11[5] = uVar2;
      *puVar11 = &PTR_FUN_00d1d0f8;
      puVar11[1] = param_1;
      puVar11[6] = uVar1;
      puVar11[7] = local_b0;
      if (local_b0[1] != 0) {
        local_b0 = &DAT_001f1910;
      }
      FUN_00512cf8(lVar13,puVar11);
      pcVar12 = (code *)local_b0[1];
      goto joined_r0x00477134;
    }
    uVar9 = FUN_005ce36c();
    local_98 = CONCAT17(0x11,(undefined7)local_98);
    if (local_b0[1] != 0) {
      puVar11 = &DAT_001f1910;
    }
    if ((&local_a8 < (void **)0x1bc435) && ("GetWindowPreviews" < (char *)((long)&local_98 + 1U))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar4 = (ulong)local_98 >> 8;
    local_98 = CONCAT71((uint7)uVar4 & 0xffffffffffff00,0x73);
    uStack_a0._0_1_ = s_GetWindowPreviews_001bc434[8];
    uStack_a0._1_1_ = s_GetWindowPreviews_001bc434[9];
    uStack_a0._2_1_ = s_GetWindowPreviews_001bc434[10];
    uStack_a0._3_1_ = s_GetWindowPreviews_001bc434[0xb];
    uStack_a0._4_1_ = s_GetWindowPreviews_001bc434[0xc];
    uStack_a0._5_1_ = s_GetWindowPreviews_001bc434[0xd];
    uStack_a0._6_1_ = s_GetWindowPreviews_001bc434[0xe];
    uStack_a0._7_1_ = s_GetWindowPreviews_001bc434[0xf];
    local_a8 = (void *)s_GetWindowPreviews_001bc434._0_8_;
    local_80 = FUN_0040e7ec;
    local_78 = &DAT_001f4e70;
    local_90 = lVar14;
    local_70 = uVar9;
    puVar10 = (undefined8 *)operator_new(0x80);
    uVar7 = local_98;
    uVar6 = uStack_a0;
    pvVar5 = local_a8;
    puVar10[6] = uVar1;
    puVar10[7] = local_b0;
    puVar10[3] = param_3;
    *puVar10 = &PTR_FUN_00d1d0d0;
    puVar10[2] = param_2;
    puVar10[1] = param_1;
    puVar10[5] = uVar2;
    puVar10[4] = uVar8;
    if (local_b0[1] != 0) {
      local_b0 = &DAT_001f1910;
    }
    uStack_a0 = 0;
    local_98 = 0;
    local_a8 = (void *)0x0;
    puVar10[9] = uVar6;
    puVar10[8] = pvVar5;
    puVar10[10] = uVar7;
    puVar10[0xf] = uVar9;
    puVar10[0xc] = uStack_88;
    puVar10[0xb] = local_90;
    puVar10[0xd] = FUN_0040e7ec;
    puVar10[0xe] = &DAT_001f4e70;
    FUN_00512cf8(lVar13);
    if (*(code **)(local_78 + 8) != (code *)0x0) {
      (**(code **)(local_78 + 8))(local_90);
    }
    if (local_98 < 0) {
      operator_delete(local_a8);
    }
    if ((code *)local_b0[1] != (code *)0x0) {
      (*(code *)local_b0[1])(uVar8);
    }
  }
  pcVar12 = (code *)puVar11[1];
joined_r0x00477134:
  if (pcVar12 != (code *)0x0) {
    (*pcVar12)(uVar8);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004771e8  FUN_004771e8 =====

void FUN_004771e8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  undefined8 *local_b0;
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
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar1 = param_5[2];
  local_b0 = (undefined8 *)param_5[3];
  uVar5 = *param_5;
  uVar2 = param_5[1];
  lVar11 = *param_1;
  if ((code *)*local_b0 != (code *)0x0) {
    uVar5 = (*(code *)*local_b0)(uVar5);
  }
  lVar10 = *(long *)(lVar11 + 0x58);
  if (lVar10 != 0) {
    lVar11 = *(long *)(lVar11 + 0x78);
    if (lVar11 != 0) {
      uVar6 = FUN_005ce36c();
      cStack_91 = 0x16;
      puVar8 = local_b0;
      if (local_b0[1] != 0) {
        puVar8 = &DAT_001f1910;
      }
      if ((&local_a8 < (void **)0x1a5db6) && ("GetSingleWindowPreview" < &cStack_92)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      cStack_92 = '\0';
      uStack_a0._0_1_ = s_GetSingleWindowPreview_001a5db5[8];
      uStack_a0._1_1_ = s_GetSingleWindowPreview_001a5db5[9];
      uStack_a0._2_1_ = s_GetSingleWindowPreview_001a5db5[10];
      uStack_a0._3_1_ = s_GetSingleWindowPreview_001a5db5[0xb];
      uStack_a0._4_1_ = s_GetSingleWindowPreview_001a5db5[0xc];
      uStack_a0._5_1_ = s_GetSingleWindowPreview_001a5db5[0xd];
      local_a8 = (void *)s_GetSingleWindowPreview_001a5db5._0_8_;
      uStack_9a._0_1_ = s_GetSingleWindowPreview_001a5db5[0xe];
      uStack_9a._1_1_ = s_GetSingleWindowPreview_001a5db5[0xf];
      uStack_98._0_1_ = s_GetSingleWindowPreview_001a5db5[0x10];
      uStack_98._1_1_ = s_GetSingleWindowPreview_001a5db5[0x11];
      uStack_98._2_1_ = s_GetSingleWindowPreview_001a5db5[0x12];
      uStack_98._3_1_ = s_GetSingleWindowPreview_001a5db5[0x13];
      uStack_98._4_1_ = s_GetSingleWindowPreview_001a5db5[0x14];
      uStack_98._5_1_ = s_GetSingleWindowPreview_001a5db5[0x15];
      local_80 = FUN_0040e7ec;
      local_78 = &DAT_001f4e70;
      local_90 = lVar11;
      local_70 = uVar6;
      puVar7 = (undefined8 *)operator_new(0x88);
      pvVar4 = local_a8;
      puVar7[7] = uVar1;
      puVar7[8] = local_b0;
      puVar7[4] = param_4;
      puVar7[3] = param_3;
      *puVar7 = &PTR_FUN_00d1d120;
      puVar7[2] = param_2;
      puVar7[1] = param_1;
      puVar7[6] = uVar2;
      puVar7[5] = uVar5;
      if (local_b0[1] != 0) {
        local_b0 = &DAT_001f1910;
      }
      uVar1 = CONCAT26(uStack_9a,uStack_a0);
      uVar2 = CONCAT17(cStack_91,CONCAT16(cStack_92,uStack_98));
      uStack_a0 = 0;
      uStack_9a = 0;
      uStack_98 = 0;
      cStack_92 = '\0';
      cStack_91 = '\0';
      local_a8 = (void *)0x0;
      puVar7[10] = uVar1;
      puVar7[9] = pvVar4;
      puVar7[0xb] = uVar2;
      puVar7[0xe] = FUN_0040e7ec;
      puVar7[0xf] = &DAT_001f4e70;
      puVar7[0xd] = uStack_88;
      puVar7[0xc] = local_90;
      puVar7[0x10] = uVar6;
      FUN_00512cf8(lVar10);
      if (*(code **)(local_78 + 8) != (code *)0x0) {
        (**(code **)(local_78 + 8))(local_90);
      }
      if (cStack_91 < '\0') {
        operator_delete(local_a8);
      }
      if ((code *)local_b0[1] != (code *)0x0) {
        (*(code *)local_b0[1])(uVar5);
      }
      pcVar9 = (code *)puVar8[1];
      goto joined_r0x00477408;
    }
    puVar8 = (undefined8 *)operator_new(0x48);
    puVar8[2] = param_2;
    puVar8[3] = param_3;
    puVar8[4] = param_4;
    puVar8[5] = uVar5;
    *puVar8 = &PTR_FUN_00d1d148;
    puVar8[1] = param_1;
    puVar8[6] = uVar2;
    puVar8[7] = uVar1;
    puVar8[8] = local_b0;
    if (local_b0[1] != 0) {
      local_b0 = &DAT_001f1910;
    }
    FUN_00512cf8(lVar10,puVar8);
  }
  pcVar9 = (code *)local_b0[1];
joined_r0x00477408:
  if (pcVar9 != (code *)0x0) {
    (*pcVar9)(uVar5);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00477470  FUN_00477470 =====

void FUN_00477470(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}


// ===== 0047747c  FUN_0047747c =====

void FUN_0047747c(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xe] + 8);
  *param_1 = &PTR_FUN_00d1d080;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[0xb]);
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  if (*(code **)(param_1[7] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004774d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[7] + 8))(param_1[4]);
    return;
  }
  return;
}


// ===== 004774e4  FUN_004774e4 =====

void FUN_004774e4(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xe] + 8);
  *param_1 = &PTR_FUN_00d1d080;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[0xb]);
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  if (*(code **)(param_1[7] + 8) != (code *)0x0) {
    (**(code **)(param_1[7] + 8))(param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00477548  FUN_00477548 =====

void FUN_00477548(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_005ce36c();
  lVar4 = *(long *)(param_1 + 8);
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  if ((*(byte *)(lVar4 + 8) & 1) == 0) {
    FUN_004c14a8(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),&local_50);
  }
  else {
    FUN_00476bdc(lVar4);
    FUN_004c149c(*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18),&local_50);
  }
  (**(code **)(param_1 + 0x30))(param_1 + 0x20,&local_50);
  FUN_00477620(&local_50);
  uVar3 = FUN_005ce36c();
  (**(code **)(param_1 + 0x68))
            (param_1 + 0x58,param_1 + 0x40,*(undefined8 *)(param_1 + 0x78),uVar2,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00477614  FUN_00477614 =====

void FUN_00477614(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 00477620  FUN_00477620 =====

/* WARNING: Removing unreachable block (ram,0x00477680) */
/* WARNING: Removing unreachable block (ram,0x0047768c) */
/* WARNING: Removing unreachable block (ram,0x0047769c) */
/* WARNING: Removing unreachable block (ram,0x004776ac) */

void FUN_00477620(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar2 = (void *)*param_1;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  pvVar3 = (void *)param_1[1];
  pvVar1 = pvVar2;
  if (pvVar3 != pvVar2) {
    do {
      pvVar3 = (void *)((long)pvVar3 + -0x60);
    } while (pvVar3 != pvVar2);
    pvVar1 = (void *)*param_1;
  }
  param_1[1] = pvVar2;
  operator_delete(pvVar1);
  return;
}


// ===== 004776e0  FUN_004776e0 =====

void FUN_004776e0(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[7] + 8);
  *param_1 = &PTR_FUN_00d1d0a8;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004776fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[4]);
    return;
  }
  return;
}


// ===== 00477704  FUN_00477704 =====

void FUN_00477704(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[7] + 8);
  *param_1 = &PTR_FUN_00d1d0a8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00477744  FUN_00477744 =====

void FUN_00477744(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(param_1 + 8);
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  if ((*(byte *)(lVar2 + 8) & 1) == 0) {
    FUN_004c14a8(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),&local_50);
  }
  else {
    FUN_00476bdc(lVar2);
    FUN_004c149c(*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18),&local_50);
  }
  (**(code **)(param_1 + 0x30))(param_1 + 0x20,&local_50);
  FUN_00477620(&local_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004777e8  FUN_004777e8 =====

void FUN_004777e8(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xe] + 8);
  *param_1 = &PTR_FUN_00d1d0d0;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[0xb]);
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  if (*(code **)(param_1[7] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00477840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[7] + 8))(param_1[4]);
    return;
  }
  return;
}


// ===== 00477850  FUN_00477850 =====

void FUN_00477850(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xe] + 8);
  *param_1 = &PTR_FUN_00d1d0d0;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[0xb]);
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  if (*(code **)(param_1[7] + 8) != (code *)0x0) {
    (**(code **)(param_1[7] + 8))(param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 004778b4  FUN_004778b4 =====

void FUN_004778b4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_005ce36c();
  lVar4 = *(long *)(param_1 + 8);
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  if ((*(byte *)(lVar4 + 8) & 1) == 0) {
    FUN_004c14ac(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),&local_50);
  }
  else {
    FUN_00476bdc(lVar4);
    FUN_004c14a0(*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18),&local_50);
  }
  (**(code **)(param_1 + 0x30))(param_1 + 0x20,&local_50);
  FUN_00477620(&local_50);
  uVar3 = FUN_005ce36c();
  (**(code **)(param_1 + 0x68))
            (param_1 + 0x58,param_1 + 0x40,*(undefined8 *)(param_1 + 0x78),uVar2,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00477980  FUN_00477980 =====

void FUN_00477980(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[7] + 8);
  *param_1 = &PTR_FUN_00d1d0f8;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0047799c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[4]);
    return;
  }
  return;
}


// ===== 004779a4  FUN_004779a4 =====

void FUN_004779a4(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[7] + 8);
  *param_1 = &PTR_FUN_00d1d0f8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[4]);
  }
  operator_delete(param_1);
  return;
}


// ===== 004779e4  FUN_004779e4 =====

void FUN_004779e4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(param_1 + 8);
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  if ((*(byte *)(lVar2 + 8) & 1) == 0) {
    FUN_004c14ac(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),&local_50);
  }
  else {
    FUN_00476bdc(lVar2);
    FUN_004c14a0(*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18),&local_50);
  }
  (**(code **)(param_1 + 0x30))(param_1 + 0x20,&local_50);
  FUN_00477620(&local_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00477a88  FUN_00477a88 =====

void FUN_00477a88(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xf] + 8);
  *param_1 = &PTR_FUN_00d1d120;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[0xc]);
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  if (*(code **)(param_1[8] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00477ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[8] + 8))(param_1[5]);
    return;
  }
  return;
}


// ===== 00477af0  FUN_00477af0 =====

void FUN_00477af0(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xf] + 8);
  *param_1 = &PTR_FUN_00d1d120;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[0xc]);
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  if (*(code **)(param_1[8] + 8) != (code *)0x0) {
    (**(code **)(param_1[8] + 8))(param_1[5]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00477b54  FUN_00477b54 =====

void FUN_00477b54(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_005ce36c();
  lVar4 = *(long *)(param_1 + 8);
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  if ((*(byte *)(lVar4 + 8) & 1) == 0) {
    FUN_004c14b0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                 *(undefined8 *)(param_1 + 0x20),&local_50);
  }
  else {
    FUN_00476bdc(lVar4);
    FUN_004c14a4(*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),&local_50);
  }
  (**(code **)(param_1 + 0x38))(param_1 + 0x28,&local_50);
  FUN_00477620(&local_50);
  uVar3 = FUN_005ce36c();
  (**(code **)(param_1 + 0x70))
            (param_1 + 0x60,param_1 + 0x48,*(undefined8 *)(param_1 + 0x80),uVar2,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00477c28  FUN_00477c28 =====

void FUN_00477c28(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[8] + 8);
  *param_1 = &PTR_FUN_00d1d148;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00477c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[5]);
    return;
  }
  return;
}


// ===== 00477c4c  FUN_00477c4c =====

void FUN_00477c4c(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[8] + 8);
  *param_1 = &PTR_FUN_00d1d148;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[5]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00477c8c  FUN_00477c8c =====

void FUN_00477c8c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(param_1 + 8);
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  if ((*(byte *)(lVar2 + 8) & 1) == 0) {
    FUN_004c14b0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                 *(undefined8 *)(param_1 + 0x20),&local_50);
  }
  else {
    FUN_00476bdc(lVar2);
    FUN_004c14a4(*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),&local_50);
  }
  (**(code **)(param_1 + 0x38))(param_1 + 0x28,&local_50);
  FUN_00477620(&local_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00477d38  FUN_00477d38 =====

void FUN_00477d38(undefined1 *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  void *pvVar7;
  long lVar8;
  code *pcVar9;
  ulong uVar10;
  void *pvVar11;
  long lVar12;
  undefined1 *local_c0;
  undefined8 local_b8;
  undefined8 local_b0 [2];
  code *local_a0;
  undefined8 *local_98;
  undefined1 *local_90;
  void *local_88;
  undefined7 uStack_80;
  undefined4 uStack_79;
  uint uStack_75;
  char cStack_71;
  long local_70;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  *param_1 = 0;
  *(code **)(param_1 + 0x18) = FUN_0041b428;
  *(undefined8 **)(param_1 + 0x20) = &DAT_001f1910;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(long **)(param_1 + 0x38) = param_3;
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
  }
  uVar10 = 0x1571;
  lVar8 = 10;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0x1571;
  do {
    uVar10 = (ulong)(((int)lVar8 + ((uint)(uVar10 >> 0x1e) ^ (uint)uVar10) * 0x6c078965) - 9);
    *(ulong *)(param_1 + lVar8 * 8) = uVar10;
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x279);
  *(undefined8 *)(param_1 + 0x13c8) = 0;
  *(undefined8 *)(param_1 + 0x1418) = 0;
  uVar5 = DAT_001f5ba8;
  *(undefined4 *)(param_1 + 0x1420) = 0;
  *(undefined4 *)(param_1 + 0x1408) = 0;
  *(undefined8 *)(param_1 + 0x13d0) = uVar5;
  *(undefined8 *)(param_1 + 0x13e0) = 0;
  *(undefined8 *)(param_1 + 0x13d8) = 0;
  *(undefined8 *)(param_1 + 0x13f0) = 0;
  *(undefined8 *)(param_1 + 0x13e8) = 0;
  *(undefined8 *)(param_1 + 0x1400) = 0;
  *(undefined8 *)(param_1 + 0x13f8) = 0;
  *(undefined ***)(param_1 + 0x1410) = &PTR_FUN_00d1c7a8;
  puVar6 = (undefined8 *)operator_new(0x20);
  puVar6[1] = 0;
  puVar6[2] = 0;
  *(undefined8 **)(param_1 + 0x1430) = puVar6;
  *puVar6 = &PTR_FUN_00d1d170;
  *(undefined1 *)(puVar6 + 3) = 0;
  *(undefined8 **)(param_1 + 0x1428) = puVar6 + 3;
  pvVar7 = operator_new(0x80);
  uStack_80 = 0x40df64;
  uStack_79 = 0x1f191000;
  uStack_75 = 0;
  cStack_71 = '\0';
  local_a0 = FUN_0040dec4;
  local_98 = &DAT_001f1910;
  FUN_00513ef0(pvVar7,"LatencyTester",&local_90,local_b0);
  if ((code *)local_98[1] != (code *)0x0) {
    (*(code *)local_98[1])(local_b0[0]);
  }
  pcVar9 = *(code **)(CONCAT17(cStack_71,CONCAT43(uStack_75,uStack_79._1_3_)) + 8);
  if (pcVar9 != (code *)0x0) {
    (*pcVar9)(local_90);
  }
  pvVar11 = *(void **)(param_1 + 0x28);
  *(void **)(param_1 + 0x28) = pvVar7;
  if (pvVar11 != (void *)0x0) {
    FUN_00514454(pvVar11);
    operator_delete(pvVar11);
    pvVar7 = *(void **)(param_1 + 0x28);
  }
  lVar8 = *(long *)((long)pvVar7 + 0x58);
  local_c0 = param_1;
  if (lVar8 != 0) {
    lVar12 = *(long *)((long)pvVar7 + 0x78);
    if (lVar12 == 0) {
      FUN_00520194(&local_90);
      puVar6 = (undefined8 *)operator_new(0x18);
      puVar6[2] = &local_90;
      *puVar6 = &PTR_FUN_00d1d1d0;
      puVar6[1] = &local_c0;
      FUN_00512cf8(lVar8,puVar6);
      FUN_005203e8(local_b0,&local_90);
      FUN_0052007c(local_b0[0]);
      FUN_00520164(local_b0);
      FUN_005201dc(&local_90);
    }
    else {
      local_50 = FUN_005ce36c();
      cStack_71 = '\x13';
      local_90 = param_1;
      if ((&local_88 < (void **)0x1bc447) && ("RegionLatencyTester" < &uStack_75)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      uStack_75 = uStack_75 & 0xffffff00;
      uStack_80 = (undefined7)s_RegionLatencyTester_001bc446._8_8_;
      uStack_79 = CONCAT31(0x726574,SUB81(s_RegionLatencyTester_001bc446._8_8_,7));
      local_88 = (void *)s_RegionLatencyTester_001bc446._0_8_;
      local_60 = FUN_0040e7ec;
      local_58 = &DAT_001f4e70;
      local_70 = lVar12;
      FUN_00520194(local_b0);
      puVar6 = (undefined8 *)operator_new(0x18);
      puVar6[2] = local_b0;
      *puVar6 = &PTR_FUN_00d1d1a8;
      puVar6[1] = &local_90;
      FUN_00512cf8(lVar8,puVar6);
      FUN_005203e8(&local_b8,local_b0);
      FUN_0052007c(local_b8);
      FUN_00520164(&local_b8);
      FUN_005201dc(local_b0);
      if (*(code **)(local_58 + 8) != (code *)0x0) {
        (**(code **)(local_58 + 8))(local_70);
      }
      if (cStack_71 < '\0') {
        operator_delete(local_88);
      }
    }
  }
  if (param_3 != (long *)0x0) {
    plVar1 = param_3 + 1;
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


// ===== 0047808c  FUN_0047808c =====

/* WARNING: Removing unreachable block (ram,0x004782d4) */

void FUN_0047808c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  void *pvVar6;
  void *pvVar7;
  code *pcVar8;
  long lVar9;
  long *plVar10;
  void *pvVar11;
  long lVar12;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  void *local_88;
  char acStack_80 [8];
  undefined4 local_78;
  char local_74 [3];
  char local_71;
  long local_70;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  **(undefined4 **)(param_1 + 0x1428) = 1;
  lVar9 = *(long *)(*(long *)(param_1 + 0x28) + 0x58);
  local_a8 = param_1;
  if (lVar9 != 0) {
    lVar12 = *(long *)(*(long *)(param_1 + 0x28) + 0x78);
    if (lVar12 == 0) {
      FUN_00520194(&local_90);
      puVar5 = (undefined8 *)operator_new(0x18);
      puVar5[2] = &local_90;
      *puVar5 = &PTR_FUN_00d1d220;
      puVar5[1] = &local_a8;
      FUN_00512cf8(lVar9,puVar5);
      FUN_005203e8(&local_98,&local_90);
      FUN_0052007c(local_98);
      FUN_00520164(&local_98);
      FUN_005201dc(&local_90);
    }
    else {
      local_50 = FUN_005ce36c();
      local_71 = '\x14';
      local_90 = param_1;
      if ((&local_88 < (void **)0x19fbda) && ("~RegionLatencyTester" < local_74)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      acStack_80[0] = s__RegionLatencyTester_0019fbd9[8];
      acStack_80[1] = s__RegionLatencyTester_0019fbd9[9];
      acStack_80[2] = s__RegionLatencyTester_0019fbd9[10];
      acStack_80[3] = s__RegionLatencyTester_0019fbd9[0xb];
      acStack_80[4] = s__RegionLatencyTester_0019fbd9[0xc];
      acStack_80[5] = s__RegionLatencyTester_0019fbd9[0xd];
      acStack_80[6] = s__RegionLatencyTester_0019fbd9[0xe];
      acStack_80[7] = s__RegionLatencyTester_0019fbd9[0xf];
      local_88 = (void *)s__RegionLatencyTester_0019fbd9._0_8_;
      local_78 = 0x72657473;
      local_74[0] = '\0';
      local_60 = FUN_0040e7ec;
      local_58 = &DAT_001f4e70;
      local_70 = lVar12;
      FUN_00520194(&local_98);
      puVar5 = (undefined8 *)operator_new(0x18);
      puVar5[2] = &local_98;
      *puVar5 = &PTR_FUN_00d1d1f8;
      puVar5[1] = &local_90;
      FUN_00512cf8(lVar9,puVar5);
      FUN_005203e8(&local_a0,&local_98);
      FUN_0052007c(local_a0);
      FUN_00520164(&local_a0);
      FUN_005201dc(&local_98);
      if (*(code **)(local_58 + 8) != (code *)0x0) {
        (**(code **)(local_58 + 8))(local_70);
      }
      if (local_71 < '\0') {
        operator_delete(local_88);
      }
    }
  }
  FUN_005144ec(*(undefined8 *)(param_1 + 0x28));
  **(undefined4 **)(param_1 + 0x1428) = 1;
  plVar10 = *(long **)(param_1 + 0x1430);
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 1;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_005466cc(plVar10);
    }
  }
  *(undefined ***)(param_1 + 0x1410) = &PTR_FUN_00d193e8;
  if (*(long *)(param_1 + 0x1418) != 0) {
    FUN_005ce374(*(long *)(param_1 + 0x1418),PTR_free_00d51ac0);
    *(undefined8 *)(param_1 + 0x1418) = 0;
  }
  pvVar6 = *(void **)(param_1 + 0x13f0);
  if (pvVar6 != (void *)0x0) {
    *(void **)(param_1 + 0x13f8) = pvVar6;
    operator_delete(pvVar6);
  }
  pvVar6 = *(void **)(param_1 + 0x13d8);
  if (pvVar6 != (void *)0x0) {
    pvVar11 = *(void **)(param_1 + 0x13e0);
    pvVar7 = pvVar6;
    if (pvVar11 != pvVar6) {
      do {
        pvVar7 = *(void **)((long)pvVar11 + -0x18);
        if (pvVar7 != (void *)0x0) {
          *(void **)((long)pvVar11 + -0x10) = pvVar7;
          operator_delete(pvVar7);
        }
        pvVar11 = (void *)((long)pvVar11 + -0x30);
      } while (pvVar11 != pvVar6);
      pvVar7 = *(void **)(param_1 + 0x13d8);
    }
    *(void **)(param_1 + 0x13e0) = pvVar6;
    operator_delete(pvVar7);
  }
  plVar10 = *(long **)(param_1 + 0x38);
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 1;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_005466cc(plVar10);
    }
  }
  pvVar6 = *(void **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (pvVar6 != (void *)0x0) {
    FUN_00514454(pvVar6);
    operator_delete(pvVar6);
  }
  pcVar8 = *(code **)(*(long *)(param_1 + 0x20) + 8);
  if (pcVar8 != (code *)0x0) {
    (*pcVar8)(*(undefined8 *)(param_1 + 8));
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004783a8  FUN_004783a8 =====

/* WARNING: Removing unreachable block (ram,0x004786d8) */
/* WARNING: Removing unreachable block (ram,0x00478454) */

void FUN_004783a8(char *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  long *plStack_128;
  char *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  void *local_f8;
  void *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  long *local_d8;
  char *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined7 local_b0;
  undefined4 uStack_a9;
  char cStack_a5;
  undefined4 uStack_a4;
  undefined8 local_a0;
  long local_98;
  undefined8 uStack_90;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  if (*param_1 == '\0') {
    lVar12 = *(long *)(param_1 + 0x20);
    *(code **)(param_1 + 0x18) = FUN_0041b428;
    *(undefined8 **)(param_1 + 0x20) = &DAT_001f1910;
    if (*(code **)(lVar12 + 8) != (code *)0x0) {
      (**(code **)(lVar12 + 8))(*(undefined8 *)(param_1 + 8));
    }
    uVar15 = *param_3;
    *(undefined8 *)(param_1 + 0x10) = param_3[1];
    *(undefined8 *)(param_1 + 8) = uVar15;
    *(undefined8 *)(param_1 + 0x18) = param_3[2];
    *(undefined8 *)(param_1 + 0x20) = param_3[3];
    param_3[2] = FUN_0041b428;
    param_3[3] = &DAT_001f1910;
    lVar12 = *(long *)(param_1 + 0x28);
    plVar14 = *(long **)(param_1 + 0x1430);
    local_130 = *(undefined8 *)(param_1 + 0x1428);
    if (plVar14 != (long *)0x0) {
      plVar1 = plVar14 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_118 = *param_2;
    uStack_110 = param_2[1];
    *param_2 = 0;
    local_108 = param_2[2];
    param_2[1] = 0;
    param_2[2] = 0;
    plStack_128 = plVar14;
    local_120 = param_1;
    if (plVar14 == (long *)0x0) {
      uStack_140 = 0;
      local_138 = 0;
      local_148 = 0;
      lVar13 = *(long *)(lVar12 + 0x58);
    }
    else {
      plVar1 = plVar14 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uStack_140 = 0;
      local_138 = 0;
      plVar1 = plVar14 + 1;
      local_148 = 0;
      do {
        lVar13 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        FUN_005466cc(plVar14);
      }
      lVar13 = *(long *)(lVar12 + 0x58);
    }
    if (lVar13 != 0) {
      lVar12 = *(long *)(lVar12 + 0x78);
      if (lVar12 == 0) {
        puVar11 = (undefined8 *)operator_new(0x38);
        plVar14 = plStack_128;
        uVar15 = local_130;
        local_130 = 0;
        plStack_128 = (long *)0x0;
        puVar11[2] = plVar14;
        puVar11[1] = uVar15;
        *puVar11 = &PTR_FUN_00d1d2c0;
        puVar11[3] = local_120;
        puVar11[5] = uStack_110;
        puVar11[4] = local_118;
        puVar11[6] = local_108;
        local_118 = 0;
        uStack_110 = 0;
        local_108 = 0;
        FUN_00512cf8(lVar13,puVar11);
      }
      else {
        uVar10 = FUN_005ce36c();
        uVar8 = local_108;
        uVar7 = uStack_110;
        uVar6 = local_118;
        pcVar5 = local_120;
        plVar14 = plStack_128;
        uVar15 = local_130;
        local_130 = 0;
        plStack_128 = (long *)0x0;
        local_e0 = uVar15;
        local_d8 = plVar14;
        local_c0 = uStack_110;
        uStack_b8 = local_108;
        local_a0 = CONCAT17(0xb,(undefined7)local_a0);
        uStack_110 = 0;
        local_108 = 0;
        local_d0 = local_120;
        local_c8 = local_118;
        local_118 = 0;
        if ((&local_b0 < "erformTest") && ("PerformTest" < &cStack_a5)) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                     ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
        }
        cStack_a5 = '\0';
        local_b0 = (undefined7)s_PerformTest_001c1f5b._0_8_;
        uStack_a9._0_1_ = SUB81(s_PerformTest_001c1f5b._0_8_,7);
        uStack_a9._1_3_ = 0x747365;
        local_88 = FUN_0040e7ec;
        local_80 = &DAT_001f4e70;
        local_98 = lVar12;
        local_78 = uVar10;
        puVar11 = (undefined8 *)operator_new(0x78);
        puVar11[4] = uVar6;
        puVar11[5] = uVar7;
        puVar11[6] = uVar8;
        *puVar11 = &PTR_FUN_00d1d248;
        puVar11[1] = uVar15;
        puVar11[8] = CONCAT44(uStack_a4,CONCAT13(cStack_a5,uStack_a9._1_3_));
        puVar11[7] = CONCAT17((char)uStack_a9,local_b0);
        puVar11[0xe] = uVar10;
        local_e0 = 0;
        local_d8 = (long *)0x0;
        puVar11[2] = plVar14;
        puVar11[3] = pcVar5;
        puVar11[0xb] = uStack_90;
        puVar11[10] = local_98;
        local_c0 = 0;
        uStack_b8 = 0;
        puVar11[9] = local_a0;
        local_c8 = 0;
        local_b0 = 0;
        uStack_a9 = 0;
        cStack_a5 = '\0';
        uStack_a4 = 0;
        local_a0 = 0;
        puVar11[0xc] = FUN_0040e7ec;
        puVar11[0xd] = &DAT_001f4e70;
        FUN_00512cf8(lVar13,puVar11);
        if (*(code **)(local_80 + 8) != (code *)0x0) {
          (**(code **)(local_80 + 8))(local_98);
        }
        FUN_0040dcf8(&local_c8);
        plVar14 = local_d8;
        if (local_d8 != (long *)0x0) {
          plVar1 = local_d8 + 1;
          do {
            lVar12 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*local_d8 + 0x10))(local_d8);
            FUN_005466cc(plVar14);
          }
        }
      }
    }
    FUN_0040dcf8(&local_118);
    plVar14 = plStack_128;
    if (plStack_128 != (long *)0x0) {
      plVar1 = plStack_128 + 1;
      do {
        lVar12 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_128 + 0x10))(plStack_128);
        FUN_005466cc(plVar14);
      }
    }
    FUN_0040dcf8(&local_148);
  }
  else {
    uVar9 = FUN_004249b0();
    if ((uVar9 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/region_latency_tester.cpp",
                   0x1bb,
                   "Cannot complete RTC region latency test because of an error during initialization"
                  );
    }
    local_f8 = (void *)0x0;
    local_f0 = (void *)0x0;
    local_e8 = 0;
    (*(code *)param_3[2])(param_3,&local_f8);
    if (local_f8 != (void *)0x0) {
      for (; local_f0 != local_f8; local_f0 = (void *)((long)local_f0 + -0x18)) {
      }
      local_f0 = local_f8;
      operator_delete(local_f8);
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00478814  FUN_00478814 =====

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00478814(long param_1,int param_2,long *param_3)

{
  ulong uVar1;
  size_t __n;
  long *plVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  void *pvVar8;
  undefined8 *****__dest;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *****pppppuVar11;
  long lVar12;
  ulong uVar13;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined8 ****local_a0;
  ulong uStack_98;
  undefined8 local_90;
  int local_84;
  undefined1 local_80 [16];
  undefined1 *local_70;
  undefined1 auStack_68 [16];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  bVar3 = *(byte *)((long)param_3 + 0x17);
  uVar13 = param_3[1];
  __n = uVar13;
  if (-1 < (char)bVar3) {
    __n = (ulong)bVar3;
  }
  local_84 = param_2;
  if (__n == 0) {
    uVar10 = 0xffffffffffffffff;
    if ((char)bVar3 < '\0') goto LAB_004788fc;
LAB_00478888:
    uStack_98 = param_3[1];
    local_a0 = (undefined8 ****)*param_3;
    local_90 = param_3[2];
    if (uVar10 != 0xffffffffffffffff) goto LAB_004788a0;
LAB_0047897c:
    uVar6 = FUN_0047bbac(param_1 + 0x13d0,param_1 + 0x48,param_1 + 0x13d0);
  }
  else {
    plVar2 = (long *)*param_3;
    if (-1 < (char)bVar3) {
      plVar2 = param_3;
    }
    pvVar8 = memchr(plVar2,0x3a,__n);
    uVar10 = (long)pvVar8 - (long)plVar2;
    if (pvVar8 == (void *)0x0) {
      uVar10 = 0xffffffffffffffff;
    }
    if (-1 < (char)bVar3) goto LAB_00478888;
LAB_004788fc:
    pppppuVar11 = (undefined8 *****)*param_3;
    if (uVar13 < 0x17) {
      __dest = &local_a0;
      local_90 = CONCAT17((char)uVar13,(undefined7)local_90);
    }
    else {
      if (0x7fffffffffffffef < uVar13) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar13 | 0xf) + 1;
      __dest = (undefined8 *****)operator_new(uVar1);
      local_90 = uVar1 | 0x8000000000000000;
      local_a0 = __dest;
      uStack_98 = uVar13;
    }
    if ((__dest <= pppppuVar11) && (pppppuVar11 < (undefined8 *****)((long)__dest + uVar13 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,pppppuVar11,uVar13 + 1);
    if (uVar10 == 0xffffffffffffffff) goto LAB_0047897c;
LAB_004788a0:
    plVar2 = (long *)*param_3;
    if (-1 < (char)bVar3) {
      plVar2 = param_3;
    }
    uVar5 = atoi((char *)((long)plVar2 + uVar10 + 1));
    uVar6 = 0;
    if (0xffff0000 < uVar5 - 0x10000) {
      uVar6 = uVar5;
    }
    uVar13 = uStack_98;
    if (-1 < (long)local_90) {
      uVar13 = local_90 >> 0x38;
    }
    if (uVar10 < uVar13 || uVar10 - uVar13 == 0) {
      pppppuVar11 = (undefined8 *****)local_a0;
      uVar13 = uVar10;
      if (-1 < (long)local_90) {
        if (0x16 < uVar10) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                     "__s < __min_cap",
                     "__s should never be greater than or equal to the short string capacity");
        }
        local_90 = CONCAT17((char)uVar10,(undefined7)local_90);
        pppppuVar11 = &local_a0;
        uVar13 = uStack_98;
      }
      uStack_98 = uVar13;
      *(undefined1 *)((long)pppppuVar11 + uVar10) = 0;
    }
    else {
      FUN_0054809c(&local_a0,uVar10 - uVar13,0);
    }
  }
  lVar12 = (*(long *)(param_1 + 0x13f8) - *(long *)(param_1 + 0x13f0) >> 3) * -0x5555555555555555;
  FUN_0051452c(*(undefined8 *)(param_1 + 0x28));
  local_a8 = FUN_005cdc90();
  if ((uVar6 & 0xffff) != 0) {
    uVar13 = FUN_00417e08();
    if ((uVar13 & 1) == 0) {
      FUN_00623bb0(&DAT_001f614e,"../../discord_native_lib/src/media/region_latency_tester.cpp",
                   0x451,"Sending latency test ping to IP ",&local_a0,&DAT_001ca603,uVar6 & 0xffff);
    }
    pppppuVar11 = (undefined8 *****)local_a0;
    if (-1 < (long)local_90) {
      pppppuVar11 = &local_a0;
    }
    FUN_005cdbe0(pppppuVar11,uVar6 & 0xffff,auStack_68);
    local_80 = FUN_005cd334(0,0);
    uVar9 = FUN_005125e4(local_80,8);
    local_80._8_8_ = 8;
    *(undefined4 *)local_80._0_8_ = 0xfeca3713;
    *(int *)(local_80._0_8_ + 4) = (int)lVar12;
    iVar7 = FUN_005cdc10(uVar9,*(undefined8 *)(param_1 + 0x40),local_80,1,auStack_68,
                         PTR_FUN_00d51c08);
    if (iVar7 == 0) {
      FUN_00478f18(param_1 + 0x13f0,&local_84,&local_a8);
      *(int *)(param_1 + 0x1408) = *(int *)(param_1 + 0x1408) + 1;
      goto joined_r0x00478b80;
    }
  }
  uVar13 = FUN_00417e08();
  iVar7 = local_84;
  if ((uVar13 & 1) == 0) {
    local_70 = auStack_b0;
    local_80._0_8_ = "../../discord_native_lib/src/media/region_latency_tester.cpp";
    local_80._8_8_ = 0x509;
    uVar13 = (*(long *)(param_1 + 0x13e0) - *(long *)(param_1 + 0x13d8) >> 4) * -0x5555555555555555;
    if (uVar13 < (ulong)(long)local_84 || uVar13 - (long)local_84 == 0) goto LAB_00478be0;
    FUN_00623bb0(&DAT_001f6ac6,"../../discord_native_lib/src/media/region_latency_tester.cpp",0x509,
                 "Error sending latency test ping to region ",
                 *(long *)(param_1 + 0x13d8) + (long)local_84 * 0x30," with sequence ",lVar12,
                 " to IP ",param_3);
  }
  uVar13 = (*(long *)(param_1 + 0x13e0) - *(long *)(param_1 + 0x13d8) >> 4) * -0x5555555555555555;
  if ((ulong)(long)iVar7 <= uVar13 && uVar13 - (long)iVar7 != 0) {
    FUN_00478c60(*(long *)(param_1 + 0x13d8) + (long)iVar7 * 0x30 + 0x18,&DAT_001f6ab8);
    local_80[0] = 1;
    FUN_00478d78(param_1 + 0x13f0,&local_84,&local_a8,local_80);
joined_r0x00478b80:
    if ((long)local_90 < 0) {
      operator_delete(local_a0);
    }
    if (*(long *)(lVar4 + 0x28) == local_58) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_00478be0:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x587,
             "__n < size()","vector[] index out of bounds");
}


// ===== 00478c60  FUN_00478c60 =====

void FUN_00478c60(undefined8 *param_1,undefined8 *param_2)

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
    if (uVar2 == 0) goto LAB_00478d48;
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
LAB_00478d48:
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


// ===== 00478d78  FUN_00478d78 =====

undefined4 *
FUN_00478d78(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,undefined1 *param_4)

{
  ulong uVar1;
  undefined1 uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  void *__src;
  undefined4 *puVar8;
  size_t __n;
  
  puVar4 = (undefined4 *)param_1[1];
  if (puVar4 < (undefined4 *)param_1[2]) {
    if (puVar4 == (undefined4 *)0x0) {
LAB_00478ee8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                 ,0x23,"__location != nullptr","null pointer given to construct_at");
    }
    uVar6 = *param_3;
    puVar8 = puVar4 + 6;
    uVar2 = *param_4;
    *puVar4 = *param_2;
    *(undefined8 *)(puVar4 + 2) = uVar6;
    *(undefined1 *)(puVar4 + 4) = uVar2;
    param_1[1] = puVar8;
  }
  else {
    __src = (void *)*param_1;
    __n = (long)puVar4 - (long)__src;
    uVar1 = ((long)__n >> 3) * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = (long)param_1[2] - (long)__src >> 3;
    uVar7 = lVar5 * 0x5555555555555556;
    if (uVar7 < uVar1 || uVar7 - uVar1 == 0) {
      uVar7 = uVar1;
    }
    if (0x555555555555554 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar7 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar7 == 0) goto LAB_00478ee8;
    if (0xaaaaaaaaaaaaaaa < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
    pvVar3 = operator_new(uVar7 * 0x18);
    uVar2 = *param_4;
    puVar4 = (undefined4 *)((long)pvVar3 + ((long)__n >> 3) * 8);
    uVar6 = *param_3;
    puVar8 = puVar4 + 6;
    *puVar4 = *param_2;
    *(undefined8 *)(puVar4 + 2) = uVar6;
    *(undefined1 *)(puVar4 + 4) = uVar2;
    memmove((void *)((long)puVar4 - __n),__src,__n);
    *param_1 = (void *)((long)puVar4 - __n);
    param_1[1] = puVar8;
    param_1[2] = (void *)((long)pvVar3 + uVar7 * 0x18);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      puVar8 = (undefined4 *)param_1[1];
    }
  }
  if ((undefined4 *)*param_1 != puVar8) {
    return puVar8 + -6;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,"!empty()",
             "back() called on an empty vector");
}


// ===== 00478f18  FUN_00478f18 =====

undefined4 * FUN_00478f18(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  void *__src;
  undefined4 *puVar8;
  size_t __n;
  
  puVar4 = (undefined4 *)param_1[1];
  if (puVar4 < (undefined4 *)param_1[2]) {
    if (puVar4 == (undefined4 *)0x0) {
LAB_0047907c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                 ,0x23,"__location != nullptr","null pointer given to construct_at");
    }
    uVar2 = *param_2;
    puVar8 = puVar4 + 6;
    uVar6 = *param_3;
    *(undefined1 *)(puVar4 + 4) = 0;
    *puVar4 = uVar2;
    *(undefined8 *)(puVar4 + 2) = uVar6;
    param_1[1] = puVar8;
  }
  else {
    __src = (void *)*param_1;
    __n = (long)puVar4 - (long)__src;
    uVar1 = ((long)__n >> 3) * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = (long)param_1[2] - (long)__src >> 3;
    uVar7 = lVar5 * 0x5555555555555556;
    if (uVar7 < uVar1 || uVar7 - uVar1 == 0) {
      uVar7 = uVar1;
    }
    if (0x555555555555554 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar7 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar7 == 0) goto LAB_0047907c;
    if (0xaaaaaaaaaaaaaaa < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
    pvVar3 = operator_new(uVar7 * 0x18);
    uVar6 = *param_3;
    puVar4 = (undefined4 *)((long)pvVar3 + ((long)__n >> 3) * 8);
    puVar8 = puVar4 + 6;
    *puVar4 = *param_2;
    *(undefined8 *)(puVar4 + 2) = uVar6;
    *(undefined1 *)(puVar4 + 4) = 0;
    memmove((void *)((long)puVar4 - __n),__src,__n);
    *param_1 = (void *)((long)puVar4 - __n);
    param_1[1] = puVar8;
    param_1[2] = (void *)((long)pvVar3 + uVar7 * 0x18);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      puVar8 = (undefined4 *)param_1[1];
    }
  }
  if ((undefined4 *)*param_1 != puVar8) {
    return puVar8 + -6;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,"!empty()",
             "back() called on an empty vector");
}


// ===== 004790ac  FUN_004790ac =====

void FUN_004790ac(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long local_50 [3];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *param_1;
  FUN_00512a58(local_50,param_3,param_2);
  if ((param_2 == 8) && (lVar2 != 0)) {
    FUN_00479130(lVar2,*(undefined4 *)(local_50[0] + 4));
  }
  FUN_00512a8c(local_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00479130  FUN_00479130 =====

void FUN_00479130(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  long local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_0051452c(*(undefined8 *)(param_1 + 0x28));
  lVar3 = FUN_005cdc90();
  lVar4 = *(long *)(param_1 + 0x13f0);
  uVar5 = (*(long *)(param_1 + 0x13f8) - lVar4 >> 3) * -0x5555555555555555;
  if ((param_2 <= uVar5 && uVar5 - param_2 != 0) &&
     (pcVar6 = (char *)(lVar4 + param_2 * 0x18 + 0x10), *pcVar6 == '\0')) {
    iVar1 = *(int *)(lVar4 + param_2 * 0x18);
    uVar5 = (*(long *)(param_1 + 0x13e0) - *(long *)(param_1 + 0x13d8) >> 4) * -0x5555555555555555;
    if (uVar5 < (ulong)(long)iVar1 || uVar5 - (long)iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x587,
                 "__n < size()","vector[] index out of bounds");
    }
    local_40 = lVar3 - *(long *)(lVar4 + param_2 * 0x18 + 8);
    FUN_0047a3fc(*(long *)(param_1 + 0x13d8) + (long)iVar1 * 0x30 + 0x18,&local_40);
    *pcVar6 = '\x01';
    iVar1 = *(int *)(param_1 + 0x1408) + -1;
    *(int *)(param_1 + 0x1408) = iVar1;
    if (iVar1 == 0) {
      FUN_0047939c(param_1);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00479260  FUN_00479260 =====

void FUN_00479260(undefined8 *param_1)

{
  FUN_00479268(*param_1);
  return;
}


// ===== 00479268  FUN_00479268 =====

void FUN_00479268(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f1906,"../../discord_native_lib/src/media/region_latency_tester.cpp",0x679,
                 "Timing out ",*(undefined4 *)(param_1 + 0x1408)," remaining latency test pings");
  }
  lVar4 = *(long *)(param_1 + 0x13f8);
  lVar3 = *(long *)(param_1 + 0x13f0);
  if (lVar4 != lVar3) {
    lVar6 = 0;
    uVar2 = 0;
    do {
      if (*(char *)(lVar3 + lVar6 + 0x10) == '\0') {
        iVar1 = *(int *)(lVar3 + lVar6);
        uVar5 = (*(long *)(param_1 + 0x13e0) - *(long *)(param_1 + 0x13d8) >> 4) *
                -0x5555555555555555;
        if (uVar5 < (ulong)(long)iVar1 || uVar5 - (long)iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x587,
                     "__n < size()","vector[] index out of bounds");
        }
        FUN_00478c60(*(long *)(param_1 + 0x13d8) + (long)iVar1 * 0x30 + 0x18,&DAT_001f6ab8);
        lVar4 = *(long *)(param_1 + 0x13f8);
        *(undefined1 *)(lVar3 + lVar6 + 0x10) = 1;
        lVar3 = *(long *)(param_1 + 0x13f0);
      }
      uVar2 = uVar2 + 1;
      lVar6 = lVar6 + 0x18;
    } while (uVar2 < (ulong)((lVar4 - lVar3 >> 3) * -0x5555555555555555));
  }
  *(undefined4 *)(param_1 + 0x1408) = 0;
  FUN_0047939c(param_1);
  return;
}


// ===== 0047939c  FUN_0047939c =====

/* WARNING: Removing unreachable block (ram,0x0047a308) */
/* WARNING: Removing unreachable block (ram,0x00479df0) */
/* WARNING: Removing unreachable block (ram,0x00479914) */
/* WARNING: Removing unreachable block (ram,0x00479710) */
/* WARNING: Removing unreachable block (ram,0x0047a248) */
/* WARNING: Removing unreachable block (ram,0x0047a384) */
/* WARNING: Type propagation algorithm not settling */

void FUN_0047939c(long ******param_1)

{
  undefined8 *puVar1;
  undefined8 *__src;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  bool bVar6;
  long *******ppppppplVar7;
  void *pvVar8;
  undefined8 *__dest;
  undefined8 uVar9;
  long *****ppppplVar10;
  ulong uVar11;
  long lVar12;
  long *****ppppplVar13;
  ulong uVar14;
  ulong uVar15;
  long ***ppplVar16;
  long ****pppplVar17;
  long ***ppplVar18;
  long lVar19;
  long *******ppppppplVar20;
  long *******ppppppplVar21;
  long ****pppplVar22;
  void *pvVar23;
  undefined8 *puVar24;
  long ******pppppplVar25;
  ulong uVar26;
  long lVar27;
  long *******ppppppplVar28;
  long ****pppplVar29;
  long *******ppppppplVar30;
  long *******ppppppplVar31;
  long *******ppppppplVar32;
  ulong uVar33;
  float fVar34;
  long ******pppppplVar35;
  undefined8 uVar36;
  long *******local_118;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  long *******local_f0;
  long ******pppppplStack_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined6 uStack_d0;
  undefined2 uStack_ca;
  undefined6 uStack_c8;
  char cStack_c2;
  char cStack_c1;
  long ****local_c0;
  undefined6 uStack_b8;
  undefined2 uStack_b2;
  undefined6 uStack_b0;
  char cStack_aa;
  char cStack_a9;
  long ****local_a8;
  undefined8 uStack_a0;
  code *local_98;
  undefined *local_90;
  undefined8 local_88;
  long local_80;
  
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  FUN_00515738(param_1 + 0x282);
  if (param_1[0x283] != (long *****)0x0) {
    FUN_005ce374(param_1[0x283],PTR_free_00d51ac0);
    param_1[0x283] = (long *****)0x0;
  }
  if (param_1[8] != (long *****)0x0) {
    FUN_005cdc6c();
    FUN_005ce374(param_1[8],PTR_free_00d51ac0);
    param_1[8] = (long *****)0x0;
  }
  ppppplVar10 = param_1[0x27b];
  if (param_1[0x27c] == ppppplVar10) {
    ppppplVar10 = param_1[6];
    pppppplVar25 = (long ******)param_1[0x286];
    ppppppplVar28 = (long *******)param_1[0x285];
    if (pppppplVar25 == (long ******)0x0) {
      pppplVar29 = ppppplVar10[0xb];
      if (pppplVar29 != (long ****)0x0) goto LAB_00479e1c;
    }
    else {
      pppppplVar35 = pppppplVar25 + 1;
      do {
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppppplVar35,0x10);
        if (bVar6) {
          *pppppplVar35 = (long *****)((long)*pppppplVar35 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppppplVar35,0x10);
        if (bVar6) {
          *pppppplVar35 = (long *****)((long)*pppppplVar35 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        ppppplVar13 = *pppppplVar35;
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppppplVar35,0x10);
        if (bVar6) {
          *pppppplVar35 = (long *****)((long)ppppplVar13 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppppplVar13 == (long *****)0x0) {
        (*(code *)(*pppppplVar25)[2])(pppppplVar25);
        FUN_005466cc(pppppplVar25);
        pppplVar29 = ppppplVar10[0xb];
      }
      else {
        pppplVar29 = ppppplVar10[0xb];
      }
      if (pppplVar29 == (long ****)0x0) {
        if (pppppplVar25 != (long ******)0x0) {
          pppppplVar35 = pppppplVar25 + 1;
          do {
            ppppplVar10 = *pppppplVar35;
            cVar2 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppplVar35,0x10);
            if (bVar6) {
              *pppppplVar35 = (long *****)((long)ppppplVar10 + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (ppppplVar10 == (long *****)0x0) {
            (*(code *)(*pppppplVar25)[2])(pppppplVar25);
            if (*(long *)(lVar3 + 0x28) == local_80) {
              FUN_005466cc(pppppplVar25);
              return;
            }
            goto LAB_0047a3f8;
          }
        }
      }
      else {
LAB_00479e1c:
        pppplVar22 = ppppplVar10[0xf];
        if (pppplVar22 == (long ****)0x0) {
          puVar24 = (undefined8 *)operator_new(0x20);
          *puVar24 = &PTR_FUN_00d1d310;
          puVar24[1] = ppppppplVar28;
          puVar24[2] = pppppplVar25;
          puVar24[3] = param_1;
          if (*(long *)(lVar3 + 0x28) == local_80) {
            FUN_00512cf8(pppplVar29,puVar24);
            return;
          }
          goto LAB_0047a3f8;
        }
        uVar9 = FUN_005ce36c();
        cStack_c1 = '\x16';
        local_f0 = ppppppplVar28;
        pppppplStack_e8 = pppppplVar25;
        if ((&local_d8 < (void **)0x1e9f9e) &&
           (local_e0 = param_1, "RankRegionsAndCallback" < &cStack_c2)) goto LAB_0047a390;
        cStack_c2 = '\0';
        uStack_d0._0_1_ = s_RankRegionsAndCallback_001e9f9d[8];
        uStack_d0._1_1_ = s_RankRegionsAndCallback_001e9f9d[9];
        uStack_d0._2_1_ = s_RankRegionsAndCallback_001e9f9d[10];
        uStack_d0._3_1_ = s_RankRegionsAndCallback_001e9f9d[0xb];
        uStack_d0._4_1_ = s_RankRegionsAndCallback_001e9f9d[0xc];
        uStack_d0._5_1_ = s_RankRegionsAndCallback_001e9f9d[0xd];
        local_d8 = (void *)s_RankRegionsAndCallback_001e9f9d._0_8_;
        uStack_ca._0_1_ = s_RankRegionsAndCallback_001e9f9d[0xe];
        uStack_ca._1_1_ = s_RankRegionsAndCallback_001e9f9d[0xf];
        uStack_c8._0_1_ = s_RankRegionsAndCallback_001e9f9d[0x10];
        uStack_c8._1_1_ = s_RankRegionsAndCallback_001e9f9d[0x11];
        uStack_c8._2_1_ = s_RankRegionsAndCallback_001e9f9d[0x12];
        uStack_c8._3_1_ = s_RankRegionsAndCallback_001e9f9d[0x13];
        uStack_c8._4_1_ = s_RankRegionsAndCallback_001e9f9d[0x14];
        uStack_c8._5_1_ = s_RankRegionsAndCallback_001e9f9d[0x15];
        uStack_b0 = 0x40e7ec;
        cStack_aa = '\0';
        cStack_a9 = '\0';
        local_a8 = (long ****)&DAT_001f4e70;
        local_e0 = param_1;
        local_c0 = pppplVar22;
        uStack_a0 = uVar9;
        puVar24 = (undefined8 *)operator_new(0x60);
        puVar24[9] = FUN_0040e7ec;
        puVar24[10] = &DAT_001f4e70;
        *puVar24 = &PTR_FUN_00d1d2e8;
        puVar24[1] = ppppppplVar28;
        puVar24[5] = CONCAT26(uStack_ca,uStack_d0);
        puVar24[4] = local_d8;
        puVar24[2] = pppppplVar25;
        puVar24[3] = param_1;
        puVar24[6] = CONCAT17(cStack_c1,CONCAT16(cStack_c2,uStack_c8));
        puVar24[8] = CONCAT26(uStack_b2,uStack_b8);
        puVar24[7] = local_c0;
        puVar24[0xb] = uVar9;
        local_f0 = (long *******)0x0;
        pppppplStack_e8 = (long ******)0x0;
        local_d8 = (void *)0x0;
        uStack_d0 = 0;
        uStack_ca = 0;
        uStack_c8 = 0;
        cStack_c2 = '\0';
        cStack_c1 = '\0';
        FUN_00512cf8(pppplVar29,puVar24);
        if (local_a8[1] != (long ***)0x0) {
          (*(code *)local_a8[1])(local_c0);
        }
        if (cStack_c1 < '\0') {
          operator_delete(local_d8);
        }
        pppppplVar25 = pppppplStack_e8;
        if (pppppplStack_e8 != (long ******)0x0) {
          pppppplVar35 = pppppplStack_e8 + 1;
          do {
            ppppplVar10 = *pppppplVar35;
            cVar2 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppplVar35,0x10);
            if (bVar6) {
              *pppppplVar35 = (long *****)((long)ppppplVar10 + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (ppppplVar10 == (long *****)0x0) {
            (*(code *)(*pppppplStack_e8)[2])(pppppplStack_e8);
            FUN_005466cc(pppppplVar25);
          }
        }
      }
    }
  }
  else {
    local_118 = (long *******)0x0;
    ppppppplVar28 = (long *******)0x0;
    uVar33 = 0;
    ppppppplVar20 = (long *******)0x0;
    ppppppplVar31 = (long *******)0x0;
    do {
      ppppplVar10 = ppppplVar10 + uVar33 * 6;
      pppplVar29 = ppppplVar10[3];
      pppplVar22 = ppppplVar10[4];
      if (pppplVar29 != pppplVar22) {
        fVar34 = 0.0;
        uVar11 = 0;
        ppplVar16 = (long ***)0x0;
        pppplVar17 = pppplVar29;
        do {
          ppplVar18 = *pppplVar17;
          if ((ulong)ppplVar18 >> 3 < 0x271) {
            uVar11 = uVar11 + 1;
            if (ppplVar16 <= ppplVar18) {
              ppplVar16 = ppplVar18;
            }
            fVar34 = fVar34 + (float)ppplVar18;
          }
          pppplVar17 = pppplVar17 + 1;
        } while (pppplVar17 != pppplVar22);
        if ((uVar11 != 0) || (1 < uVar33)) {
          if (uVar11 < 3) {
            if (uVar11 == 0) goto LAB_00479564;
          }
          else if (uVar11 == (long)pppplVar22 - (long)pppplVar29 >> 3) {
            uVar11 = uVar11 - 1;
            fVar34 = fVar34 - (float)ppplVar16;
          }
          fVar34 = fVar34 / (float)uVar11;
          uVar11 = FUN_00417e08();
          goto joined_r0x00479574;
        }
LAB_004799b8:
        ppppplVar10 = param_1[6];
        pppppplVar25 = (long ******)param_1[0x286];
        ppppppplVar28 = (long *******)param_1[0x285];
        if (pppppplVar25 == (long ******)0x0) {
          pppplVar29 = ppppplVar10[0xb];
          if (pppplVar29 != (long ****)0x0) goto LAB_0047a02c;
        }
        else {
          pppppplVar35 = pppppplVar25 + 1;
          do {
            cVar2 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppplVar35,0x10);
            if (bVar6) {
              *pppppplVar35 = (long *****)((long)*pppppplVar35 + 1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          do {
            cVar2 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppplVar35,0x10);
            if (bVar6) {
              *pppppplVar35 = (long *****)((long)*pppppplVar35 + 1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          do {
            ppppplVar13 = *pppppplVar35;
            cVar2 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppplVar35,0x10);
            if (bVar6) {
              *pppppplVar35 = (long *****)((long)ppppplVar13 + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (ppppplVar13 != (long *****)0x0) {
            pppplVar29 = ppppplVar10[0xb];
            if (pppplVar29 == (long ****)0x0) goto LAB_0047a160;
LAB_0047a02c:
            pppplVar22 = ppppplVar10[0xf];
            if (pppplVar22 == (long ****)0x0) {
              puVar24 = (undefined8 *)operator_new(0x20);
              *puVar24 = &PTR_FUN_00d1d360;
              puVar24[1] = ppppppplVar28;
              puVar24[2] = pppppplVar25;
              puVar24[3] = param_1;
              FUN_00512cf8(pppplVar29,puVar24);
            }
            else {
              uVar9 = FUN_005ce36c();
              cStack_c1 = '\x16';
              local_f0 = ppppppplVar28;
              pppppplStack_e8 = pppppplVar25;
              if ((&local_d8 < (void **)0x1e9f9e) &&
                 (local_e0 = param_1, "RankRegionsAndCallback" < &cStack_c2)) goto LAB_0047a390;
              cStack_c2 = '\0';
              uStack_d0._0_1_ = s_RankRegionsAndCallback_001e9f9d[8];
              uStack_d0._1_1_ = s_RankRegionsAndCallback_001e9f9d[9];
              uStack_d0._2_1_ = s_RankRegionsAndCallback_001e9f9d[10];
              uStack_d0._3_1_ = s_RankRegionsAndCallback_001e9f9d[0xb];
              uStack_d0._4_1_ = s_RankRegionsAndCallback_001e9f9d[0xc];
              uStack_d0._5_1_ = s_RankRegionsAndCallback_001e9f9d[0xd];
              local_d8 = (void *)s_RankRegionsAndCallback_001e9f9d._0_8_;
              uStack_ca._0_1_ = s_RankRegionsAndCallback_001e9f9d[0xe];
              uStack_ca._1_1_ = s_RankRegionsAndCallback_001e9f9d[0xf];
              uStack_c8._0_1_ = s_RankRegionsAndCallback_001e9f9d[0x10];
              uStack_c8._1_1_ = s_RankRegionsAndCallback_001e9f9d[0x11];
              uStack_c8._2_1_ = s_RankRegionsAndCallback_001e9f9d[0x12];
              uStack_c8._3_1_ = s_RankRegionsAndCallback_001e9f9d[0x13];
              uStack_c8._4_1_ = s_RankRegionsAndCallback_001e9f9d[0x14];
              uStack_c8._5_1_ = s_RankRegionsAndCallback_001e9f9d[0x15];
              uStack_b0 = 0x40e7ec;
              cStack_aa = '\0';
              cStack_a9 = '\0';
              local_a8 = (long ****)&DAT_001f4e70;
              local_e0 = param_1;
              local_c0 = pppplVar22;
              uStack_a0 = uVar9;
              puVar24 = (undefined8 *)operator_new(0x60);
              puVar24[9] = FUN_0040e7ec;
              puVar24[10] = &DAT_001f4e70;
              *puVar24 = &PTR_FUN_00d1d338;
              puVar24[1] = ppppppplVar28;
              puVar24[5] = CONCAT26(uStack_ca,uStack_d0);
              puVar24[4] = local_d8;
              puVar24[2] = pppppplVar25;
              puVar24[3] = param_1;
              puVar24[6] = CONCAT17(cStack_c1,CONCAT16(cStack_c2,uStack_c8));
              puVar24[8] = CONCAT26(uStack_b2,uStack_b8);
              puVar24[7] = local_c0;
              puVar24[0xb] = uVar9;
              local_f0 = (long *******)0x0;
              pppppplStack_e8 = (long ******)0x0;
              local_d8 = (void *)0x0;
              uStack_d0 = 0;
              uStack_ca = 0;
              uStack_c8 = 0;
              cStack_c2 = '\0';
              cStack_c1 = '\0';
              FUN_00512cf8(pppplVar29,puVar24);
              if (local_a8[1] != (long ***)0x0) {
                (*(code *)local_a8[1])(local_c0);
              }
              if (cStack_c1 < '\0') {
                operator_delete(local_d8);
              }
              pppppplVar25 = pppppplStack_e8;
              if (pppppplStack_e8 != (long ******)0x0) {
                pppppplVar35 = pppppplStack_e8 + 1;
                do {
                  ppppplVar10 = *pppppplVar35;
                  cVar2 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(pppppplVar35,0x10);
                  if (bVar6) {
                    *pppppplVar35 = (long *****)((long)ppppplVar10 + -1);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (ppppplVar10 == (long *****)0x0) {
                  (*(code *)(*pppppplStack_e8)[2])(pppppplStack_e8);
                  FUN_005466cc(pppppplVar25);
                }
              }
            }
            goto LAB_0047a320;
          }
          (*(code *)(*pppppplVar25)[2])(pppppplVar25);
          FUN_005466cc(pppppplVar25);
          pppplVar29 = ppppplVar10[0xb];
          if (pppplVar29 != (long ****)0x0) goto LAB_0047a02c;
LAB_0047a160:
          if (pppppplVar25 != (long ******)0x0) {
            pppppplVar35 = pppppplVar25 + 1;
            do {
              ppppplVar10 = *pppppplVar35;
              cVar2 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(pppppplVar35,0x10);
              if (bVar6) {
                *pppppplVar35 = (long *****)((long)ppppplVar10 + -1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (ppppplVar10 == (long *****)0x0) {
              (*(code *)(*pppppplVar25)[2])(pppppplVar25);
              FUN_005466cc(pppppplVar25);
            }
          }
        }
        goto LAB_0047a320;
      }
      if (uVar33 < 2) goto LAB_004799b8;
LAB_00479564:
      fVar34 = 5000.0;
      uVar11 = FUN_00417e08();
joined_r0x00479574:
      if ((uVar11 & 1) == 0) {
        FUN_00623bb0((double)fVar34,&DAT_001f64af,
                     "../../discord_native_lib/src/media/region_latency_tester.cpp",0x9d1,
                     "Average RTT for region ",ppppplVar10,&DAT_001d8c66);
      }
      if (*(char *)((long)ppppplVar10 + 0x17) < '\0') {
        ppppppplVar30 = (long *******)*ppppplVar10;
        pppppplVar25 = (long ******)ppppplVar10[1];
        if (pppppplVar25 < (long ******)0x17) {
          ppppppplVar7 = (long *******)&local_f0;
          local_e0 = (long ******)CONCAT17((char)pppppplVar25,(undefined7)local_e0);
        }
        else {
          if ((long ******)0x7fffffffffffffef < pppppplVar25) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar11 = ((ulong)pppppplVar25 | 0xf) + 1;
          ppppppplVar7 = (long *******)operator_new(uVar11);
          local_e0 = (long ******)(uVar11 | 0x8000000000000000);
          local_f0 = ppppppplVar7;
          pppppplStack_e8 = pppppplVar25;
        }
        if ((ppppppplVar7 <= ppppppplVar30) &&
           (ppppppplVar30 < (long *******)((long)ppppppplVar7 + (long)pppppplVar25 + 1U)))
        goto LAB_0047a390;
        memmove(ppppppplVar7,ppppppplVar30,(long)pppppplVar25 + 1U);
      }
      else {
        local_e0 = (long ******)ppppplVar10[2];
        pppppplStack_e8 = (long ******)ppppplVar10[1];
        local_f0 = (long *******)*ppppplVar10;
      }
      local_d8 = (void *)CONCAT44(local_d8._4_4_,fVar34);
      uVar11 = (long)ppppppplVar20 - (long)ppppppplVar28 >> 5;
      ppppppplVar30 = ppppppplVar20;
      ppppppplVar7 = ppppppplVar28;
      uVar26 = uVar11;
      uVar14 = (long)ppppppplVar20 - (long)ppppppplVar28;
      while (uVar14 != 0) {
        uVar14 = uVar26 >> 1;
        uVar15 = uVar26 + ~uVar14;
        ppppppplVar30 = ppppppplVar7;
        uVar26 = uVar14;
        if (*(float *)(ppppppplVar7 + uVar14 * 4 + 3) <= fVar34) {
          ppppppplVar30 = ppppppplVar7 + uVar14 * 4 + 4;
          ppppppplVar7 = ppppppplVar7 + uVar14 * 4 + 4;
          uVar26 = uVar15;
          uVar14 = uVar15;
        }
      }
      uVar26 = (long)ppppppplVar30 - (long)ppppppplVar28;
      uVar14 = (long)uVar26 >> 5;
      ppppppplVar7 = (long *******)((long)ppppppplVar28 + (uVar26 & 0xffffffffffffffe0));
      if (ppppppplVar20 < local_118) {
        ppppppplVar30 = ppppppplVar31;
        if (ppppppplVar7 == ppppppplVar20) {
          FUN_0047a690(ppppppplVar20,&local_f0);
          ppppppplVar21 = ppppppplVar20 + 4;
        }
        else {
          ppppppplVar21 = ppppppplVar20;
          for (ppppppplVar31 = ppppppplVar20 + -4; ppppppplVar31 < ppppppplVar20;
              ppppppplVar31 = ppppppplVar31 + 4) {
            pppppplVar35 = ppppppplVar31[1];
            pppppplVar25 = *ppppppplVar31;
            ppppppplVar21[2] = ppppppplVar31[2];
            ppppppplVar21[1] = pppppplVar35;
            *ppppppplVar21 = pppppplVar25;
            ppppppplVar31[1] = (long ******)0x0;
            ppppppplVar31[2] = (long ******)0x0;
            *ppppppplVar31 = (long ******)0x0;
            *(undefined4 *)(ppppppplVar21 + 3) = *(undefined4 *)(ppppppplVar31 + 3);
            ppppppplVar21 = ppppppplVar21 + 4;
          }
          if (ppppppplVar20 != ppppppplVar7 + 4) {
            lVar12 = (long)ppppppplVar20 - (long)(ppppppplVar7 + 4) >> 5;
            lVar19 = 0;
            do {
              lVar4 = lVar19 + lVar12 * 0x20 + uVar14 * 0x20;
              puVar24 = (undefined8 *)((long)ppppppplVar28 + lVar4 + -0x20);
              lVar27 = lVar19 + -0x20;
              uVar36 = *(undefined8 *)((long)ppppppplVar28 + lVar4 + -0x18);
              uVar9 = *puVar24;
              *(undefined8 *)((long)ppppppplVar20 + lVar19 + -0x10) =
                   *(undefined8 *)((long)ppppppplVar28 + lVar4 + -0x10);
              *(undefined8 *)((long)ppppppplVar20 + lVar19 + -0x18) = uVar36;
              *(undefined8 *)((long)ppppppplVar20 + lVar19 + -0x20) = uVar9;
              *(undefined1 *)((long)ppppppplVar28 + lVar4 + -9) = 0;
              *(undefined1 *)puVar24 = 0;
              *(undefined4 *)((long)ppppppplVar20 + lVar19 + -8) =
                   *(undefined4 *)((long)ppppppplVar28 + lVar4 + -8);
              lVar19 = lVar27;
            } while (lVar12 * -0x20 - lVar27 != 0);
          }
          ppppppplVar20 = (long *******)&local_f0;
          uVar11 = (ulong)((ppppppplVar20 >= ppppppplVar7 && ppppppplVar20 <= ppppppplVar21) &&
                          (ppppppplVar20 < ppppppplVar7 || ppppppplVar21 != ppppppplVar20));
          FUN_00411268(ppppppplVar7,ppppppplVar20 + uVar11 * 4);
          *(undefined4 *)(ppppppplVar28 + uVar14 * 4 + 3) = *(undefined4 *)(&local_d8 + uVar11 * 4);
        }
      }
      else {
        uVar11 = uVar11 + 1;
        if (uVar11 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar15 = (ulong)((long)local_118 - (long)ppppppplVar28) >> 4;
        if (uVar15 <= uVar11) {
          uVar15 = uVar11;
        }
        if (0x7fffffffffffffdf < (ulong)((long)local_118 - (long)ppppppplVar28)) {
          uVar15 = 0x7ffffffffffffff;
        }
        if (uVar15 == 0) {
          pvVar23 = (void *)0x0;
        }
        else {
          if (uVar15 >> 0x3b != 0) goto LAB_0047a3e4;
          pvVar23 = operator_new(uVar15 << 5);
        }
        local_118 = (long *******)((long)pvVar23 + uVar15 * 0x20);
        ppppppplVar32 = (long *******)((long)pvVar23 + uVar14 * 0x20);
        if (uVar14 == uVar15) {
          if ((long)uVar26 < 1) {
            uVar26 = (long)uVar26 >> 4;
            if (ppppppplVar30 == ppppppplVar28) {
              uVar26 = 1;
            }
            if (uVar26 >> 0x3b != 0) {
LAB_0047a3e4:
                    /* WARNING: Subroutine does not return */
              FUN_00401ad4();
            }
            pvVar8 = operator_new(uVar26 * 0x20);
            local_118 = (long *******)((long)pvVar8 + uVar26 * 0x20);
            ppppppplVar32 = (long *******)((long)pvVar8 + (uVar26 >> 2) * 0x20);
            if (pvVar23 != (void *)0x0) {
              operator_delete(pvVar23);
            }
          }
          else {
            uVar11 = uVar14 + 2;
            if (-1 < (long)(uVar14 + 1)) {
              uVar11 = uVar14 + 1;
            }
            ppppppplVar32 = ppppppplVar32 + (uVar11 >> 1) * -4;
          }
        }
        FUN_0047a690(ppppppplVar32,&local_f0);
        bVar6 = ppppppplVar30 != ppppppplVar28;
        ppppppplVar30 = ppppppplVar7;
        ppppppplVar28 = ppppppplVar32;
        if (bVar6) {
          lVar19 = 0;
          do {
            lVar12 = lVar19 + -0x20;
            uVar36 = *(undefined8 *)((long)ppppppplVar7 + lVar19 + -0x18);
            uVar9 = *(undefined8 *)((long)ppppppplVar7 + lVar19 + -0x20);
            *(undefined8 *)((long)ppppppplVar32 + lVar19 + -0x10) =
                 *(undefined8 *)((long)ppppppplVar7 + lVar19 + -0x10);
            *(undefined8 *)((long)ppppppplVar32 + lVar19 + -0x18) = uVar36;
            *(undefined8 *)((long)ppppppplVar32 + lVar19 + -0x20) = uVar9;
            *(undefined8 *)((long)ppppppplVar7 + lVar19 + -0x18) = 0;
            *(undefined8 *)((long)ppppppplVar7 + lVar19 + -0x10) = 0;
            *(undefined8 *)((long)ppppppplVar7 + lVar19 + -0x20) = 0;
            *(undefined4 *)((long)ppppppplVar32 + lVar19 + -8) =
                 *(undefined4 *)((long)ppppppplVar7 + lVar19 + -8);
            lVar19 = lVar12;
          } while (-lVar12 != uVar14 * 0x20);
          ppppppplVar28 = (long *******)((long)ppppppplVar32 + lVar12);
        }
        for (; ppppppplVar21 = (long *******)((long)ppppppplVar32 + 0x20),
            ppppppplVar20 != ppppppplVar7; ppppppplVar7 = (long *******)((long)ppppppplVar7 + 0x20))
        {
          pppppplVar35 = *(long *******)((long)ppppppplVar7 + 8);
          pppppplVar25 = *ppppppplVar7;
          *(long *******)((long)ppppppplVar32 + 0x30) = *(long *******)((long)ppppppplVar7 + 0x10);
          *(long *******)((long)ppppppplVar32 + 0x28) = pppppplVar35;
          *ppppppplVar21 = pppppplVar25;
          *(long *******)((long)ppppppplVar7 + 8) = (long ******)0x0;
          *(long *******)((long)ppppppplVar7 + 0x10) = (long ******)0x0;
          *ppppppplVar7 = (long ******)0x0;
          *(undefined4 *)((long)ppppppplVar32 + 0x38) = *(undefined4 *)((long)ppppppplVar7 + 0x18);
          ppppppplVar30 = ppppppplVar20;
          ppppppplVar32 = ppppppplVar21;
        }
        for (; ppppppplVar30 != ppppppplVar31; ppppppplVar30 = ppppppplVar30 + -4) {
        }
        ppppppplVar30 = ppppppplVar28;
        if (ppppppplVar31 != (long *******)0x0) {
          operator_delete(ppppppplVar31);
        }
      }
      if ((long)local_e0 < 0) {
        operator_delete(local_f0);
      }
      ppppplVar10 = param_1[0x27b];
      uVar33 = uVar33 + 1;
      ppppppplVar20 = ppppppplVar21;
      ppppppplVar31 = ppppppplVar30;
    } while (uVar33 < (ulong)(((long)param_1[0x27c] - (long)ppppplVar10 >> 4) * -0x5555555555555555)
            );
    local_108 = (undefined8 *)0x0;
    local_100 = (undefined8 *)0x0;
    local_f8 = (undefined8 *)0x0;
    FUN_0047a51c(&local_108,(long)ppppppplVar21 - (long)ppppppplVar30 >> 5);
    puVar24 = local_108;
    puVar5 = local_100;
    for (; local_108 = puVar24, local_100 = puVar5, ppppppplVar21 != ppppppplVar30;
        ppppppplVar30 = ppppppplVar30 + 4) {
      if (*(char *)((long)ppppppplVar30 + 0x17) < '\0') {
        ppppppplVar28 = (long *******)*ppppppplVar30;
        pppppplVar25 = ppppppplVar30[1];
        if (pppppplVar25 < (long ******)0x17) {
          ppppppplVar7 = (long *******)&local_f0;
          local_e0 = (long ******)CONCAT17((char)pppppplVar25,(undefined7)local_e0);
        }
        else {
          if ((long ******)0x7fffffffffffffef < pppppplVar25) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar33 = ((ulong)pppppplVar25 | 0xf) + 1;
          ppppppplVar7 = (long *******)operator_new(uVar33);
          local_e0 = (long ******)(uVar33 | 0x8000000000000000);
          local_f0 = ppppppplVar7;
          pppppplStack_e8 = pppppplVar25;
        }
        if ((ppppppplVar7 <= ppppppplVar28) &&
           (ppppppplVar28 < (long *******)((long)ppppppplVar7 + (long)pppppplVar25 + 1U)))
        goto LAB_0047a390;
        memmove(ppppppplVar7,ppppppplVar28,(long)pppppplVar25 + 1U);
      }
      else {
        local_e0 = ppppppplVar30[2];
        pppppplStack_e8 = ppppppplVar30[1];
        local_f0 = (long *******)*ppppppplVar30;
      }
      if (local_100 < local_f8) {
        if (local_100 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        local_100[2] = local_e0;
        local_100[1] = pppppplStack_e8;
        *local_100 = local_f0;
        local_100 = local_100 + 3;
      }
      else {
        FUN_0047a79c(&local_108,&local_f0);
        if ((long)local_e0 < 0) {
          operator_delete(local_f0);
        }
      }
      puVar24 = local_108;
      puVar5 = local_100;
    }
    ppppplVar10 = param_1[6];
    pppppplVar25 = (long ******)param_1[0x286];
    ppppppplVar28 = (long *******)param_1[0x285];
    if (pppppplVar25 != (long ******)0x0) {
      pppppplVar35 = pppppplVar25 + 1;
      do {
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppppplVar35,0x10);
        if (bVar6) {
          *pppppplVar35 = (long *****)((long)*pppppplVar35 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar33 = (long)puVar5 - (long)puVar24;
    if (uVar33 == 0) {
      pvVar8 = (void *)0x0;
      pvVar23 = (void *)0x0;
      local_118 = (long *******)0x0;
      if (pppppplVar25 != (long ******)0x0) goto LAB_00479c6c;
LAB_00479c94:
      pppplVar29 = ppppplVar10[0xb];
      if (pppplVar29 != (long ****)0x0) goto LAB_00479c9c;
LAB_0047a1e8:
      if (pvVar8 != (void *)0x0) {
        for (; pvVar23 != pvVar8; pvVar23 = (void *)((long)pvVar23 + -0x18)) {
        }
        operator_delete(pvVar8);
      }
      if (pppppplVar25 != (long ******)0x0) {
        pppppplVar35 = pppppplVar25 + 1;
        do {
          ppppplVar10 = *pppppplVar35;
          cVar2 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppplVar35,0x10);
          if (bVar6) {
            *pppppplVar35 = (long *****)((long)ppppplVar10 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (ppppplVar10 != (long *****)0x0) goto LAB_0047a2d4;
        (*(code *)(*pppppplVar25)[2])(pppppplVar25);
LAB_0047a2d0:
        FUN_005466cc(pppppplVar25);
      }
    }
    else {
      if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar33 >> 3) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      pvVar8 = operator_new(uVar33);
      local_118 = (long *******)((long)pvVar8 + ((long)uVar33 >> 3) * 8);
      lVar19 = 0;
      do {
        puVar1 = (undefined8 *)((long)puVar24 + lVar19);
        __dest = (undefined8 *)((long)pvVar8 + lVar19);
        if (*(char *)((long)puVar1 + 0x17) < '\0') {
          __src = (undefined8 *)*puVar1;
          uVar33 = puVar1[1];
          if (uVar33 < 0x17) {
            *(char *)((long)pvVar8 + lVar19 + 0x17) = (char)uVar33;
          }
          else {
            if (0x7fffffffffffffef < uVar33) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            uVar11 = (uVar33 | 0xf) + 1;
            __dest = (undefined8 *)operator_new(uVar11);
            puVar1 = (undefined8 *)((long)pvVar8 + lVar19);
            puVar1[1] = uVar33;
            puVar1[2] = uVar11 | 0x8000000000000000;
            *puVar1 = __dest;
          }
          if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + uVar33 + 1)))
          goto LAB_0047a390;
          memmove(__dest,__src,uVar33 + 1);
        }
        else {
          uVar36 = puVar1[1];
          uVar9 = *puVar1;
          __dest[2] = puVar1[2];
          __dest[1] = uVar36;
          *__dest = uVar9;
        }
        lVar19 = lVar19 + 0x18;
      } while ((undefined8 *)((long)puVar24 + lVar19) != puVar5);
      pvVar23 = (void *)((long)pvVar8 + lVar19);
      if (pppppplVar25 == (long ******)0x0) goto LAB_00479c94;
LAB_00479c6c:
      pppppplVar35 = pppppplVar25 + 1;
      do {
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppppplVar35,0x10);
        if (bVar6) {
          *pppppplVar35 = (long *****)((long)*pppppplVar35 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        ppppplVar13 = *pppppplVar35;
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppppplVar35,0x10);
        if (bVar6) {
          *pppppplVar35 = (long *****)((long)ppppplVar13 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppppplVar13 != (long *****)0x0) goto LAB_00479c94;
      (*(code *)(*pppppplVar25)[2])(pppppplVar25);
      FUN_005466cc(pppppplVar25);
      pppplVar29 = ppppplVar10[0xb];
      if (pppplVar29 == (long ****)0x0) goto LAB_0047a1e8;
LAB_00479c9c:
      pppplVar22 = ppppplVar10[0xf];
      if (pppplVar22 == (long ****)0x0) {
        puVar24 = (undefined8 *)operator_new(0x38);
        puVar24[4] = pvVar8;
        puVar24[5] = pvVar23;
        *puVar24 = &PTR_FUN_00d1d3b0;
        puVar24[1] = ppppppplVar28;
        puVar24[2] = pppppplVar25;
        puVar24[3] = param_1;
        puVar24[6] = local_118;
        FUN_00512cf8(pppplVar29,puVar24);
      }
      else {
        uVar9 = FUN_005ce36c();
        uStack_d0 = SUB86(pvVar23,0);
        uStack_ca = (undefined2)((ulong)pvVar23 >> 0x30);
        uStack_c8 = SUB86(local_118,0);
        cStack_c2 = (char)((ulong)local_118 >> 0x30);
        cStack_c1 = (char)((ulong)local_118 >> 0x38);
        cStack_a9 = '\x16';
        local_f0 = ppppppplVar28;
        pppppplStack_e8 = pppppplVar25;
        local_d8 = pvVar8;
        if ((&local_c0 < (long ****)0x1e9f9e) &&
           (local_e0 = param_1, "RankRegionsAndCallback" < &cStack_aa)) {
LAB_0047a390:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                     ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
        }
        cStack_aa = '\0';
        uStack_b8._0_1_ = s_RankRegionsAndCallback_001e9f9d[8];
        uStack_b8._1_1_ = s_RankRegionsAndCallback_001e9f9d[9];
        uStack_b8._2_1_ = s_RankRegionsAndCallback_001e9f9d[10];
        uStack_b8._3_1_ = s_RankRegionsAndCallback_001e9f9d[0xb];
        uStack_b8._4_1_ = s_RankRegionsAndCallback_001e9f9d[0xc];
        uStack_b8._5_1_ = s_RankRegionsAndCallback_001e9f9d[0xd];
        local_c0 = (long ****)s_RankRegionsAndCallback_001e9f9d._0_8_;
        uStack_b2._0_1_ = s_RankRegionsAndCallback_001e9f9d[0xe];
        uStack_b2._1_1_ = s_RankRegionsAndCallback_001e9f9d[0xf];
        uStack_b0._0_1_ = s_RankRegionsAndCallback_001e9f9d[0x10];
        uStack_b0._1_1_ = s_RankRegionsAndCallback_001e9f9d[0x11];
        uStack_b0._2_1_ = s_RankRegionsAndCallback_001e9f9d[0x12];
        uStack_b0._3_1_ = s_RankRegionsAndCallback_001e9f9d[0x13];
        uStack_b0._4_1_ = s_RankRegionsAndCallback_001e9f9d[0x14];
        uStack_b0._5_1_ = s_RankRegionsAndCallback_001e9f9d[0x15];
        local_98 = FUN_0040e7ec;
        local_90 = &DAT_001f4e70;
        local_e0 = param_1;
        local_a8 = pppplVar22;
        local_88 = uVar9;
        puVar24 = (undefined8 *)operator_new(0x78);
        puVar24[4] = pvVar8;
        puVar24[5] = pvVar23;
        puVar24[0xe] = uVar9;
        *puVar24 = &PTR_FUN_00d1d388;
        puVar24[1] = ppppppplVar28;
        puVar24[8] = CONCAT26(uStack_b2,uStack_b8);
        puVar24[7] = local_c0;
        local_f0 = (long *******)0x0;
        pppppplStack_e8 = (long ******)0x0;
        puVar24[2] = pppppplVar25;
        puVar24[3] = param_1;
        puVar24[0xb] = uStack_a0;
        puVar24[10] = local_a8;
        uStack_d0 = 0;
        uStack_ca = 0;
        uStack_c8 = 0;
        cStack_c2 = '\0';
        cStack_c1 = '\0';
        puVar24[6] = local_118;
        local_d8 = (void *)0x0;
        local_c0 = (long ****)0x0;
        uStack_b8 = 0;
        uStack_b2 = 0;
        puVar24[9] = CONCAT17(cStack_a9,CONCAT16(cStack_aa,uStack_b0));
        uStack_b0 = 0;
        cStack_aa = '\0';
        cStack_a9 = '\0';
        puVar24[0xc] = FUN_0040e7ec;
        puVar24[0xd] = &DAT_001f4e70;
        FUN_00512cf8(pppplVar29,puVar24);
        if (*(code **)(local_90 + 8) != (code *)0x0) {
          (**(code **)(local_90 + 8))(local_a8);
        }
        if (cStack_a9 < '\0') {
          operator_delete(local_c0);
        }
        if (local_d8 != (void *)0x0) {
          for (pvVar23 = (void *)CONCAT26(uStack_ca,uStack_d0); pvVar23 != local_d8;
              pvVar23 = (void *)((long)pvVar23 + -0x18)) {
          }
          uStack_d0 = SUB86(local_d8,0);
          uStack_ca = (undefined2)((ulong)local_d8 >> 0x30);
          operator_delete(local_d8);
        }
        pppppplVar25 = pppppplStack_e8;
        if (pppppplStack_e8 != (long ******)0x0) {
          pppppplVar35 = pppppplStack_e8 + 1;
          do {
            ppppplVar10 = *pppppplVar35;
            cVar2 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppplVar35,0x10);
            if (bVar6) {
              *pppppplVar35 = (long *****)((long)ppppplVar10 + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (ppppplVar10 == (long *****)0x0) {
            (*(code *)(*pppppplStack_e8)[2])(pppppplStack_e8);
            goto LAB_0047a2d0;
          }
        }
      }
    }
LAB_0047a2d4:
    if (local_108 != (undefined8 *)0x0) {
      for (; local_100 != local_108; local_100 = local_100 + -3) {
      }
      local_100 = local_108;
      operator_delete(local_108);
    }
LAB_0047a320:
    if (ppppppplVar31 != (long *******)0x0) {
      for (; ppppppplVar20 != ppppppplVar31; ppppppplVar20 = ppppppplVar20 + -4) {
      }
      operator_delete(ppppppplVar31);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_80) {
    return;
  }
LAB_0047a3f8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0047a3fc  FUN_0047a3fc =====

void FUN_0047a3fc(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *__dest;
  ulong uVar4;
  ulong uVar5;
  void *__src;
  long lVar6;
  
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 < (undefined8 *)param_1[2]) {
    if (puVar3 == (undefined8 *)0x0) {
LAB_0047a4ec:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                 ,0x23,"__location != nullptr","null pointer given to construct_at");
    }
    *puVar3 = *param_2;
    param_1[1] = puVar3 + 1;
  }
  else {
    __src = (void *)*param_1;
    lVar6 = (long)puVar3 - (long)__src >> 3;
    uVar1 = lVar6 + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar4 = (long)param_1[2] - (long)__src;
    uVar5 = uVar4 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    if (uVar5 == 0) goto LAB_0047a4ec;
    if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
    __dest = operator_new(uVar5 * 8);
    puVar2 = (undefined8 *)((long)__dest + lVar6 * 8);
    *puVar2 = *param_2;
    memmove(__dest,__src,(long)puVar3 - (long)__src);
    *param_1 = __dest;
    param_1[1] = puVar2 + 1;
    param_1[2] = (void *)((long)__dest + uVar5 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  return;
}


// ===== 0047a51c  FUN_0047a51c =====

/* WARNING: Removing unreachable block (ram,0x0047a61c) */

void FUN_0047a51c(long *param_1,ulong param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  pvVar5 = (void *)*param_1;
  if ((ulong)((param_1[2] - (long)pvVar5 >> 3) * -0x5555555555555555) < param_2) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar6 = (void *)param_1[1];
    pvVar1 = operator_new(param_2 * 0x18);
    pvVar2 = (void *)((long)pvVar1 + (((long)pvVar6 - (long)pvVar5) / 0x18) * 0x18);
    pvVar1 = (void *)((long)pvVar1 + param_2 * 0x18);
    pvVar4 = pvVar2;
    if ((long)pvVar6 - (long)pvVar5 == 0) {
      *param_1 = (long)pvVar2;
      param_1[1] = (long)pvVar2;
      param_1[2] = (long)pvVar1;
    }
    else {
      do {
        uVar8 = *(undefined8 *)((long)pvVar6 + -0x10);
        uVar7 = *(undefined8 *)((long)pvVar6 + -0x18);
        *(undefined8 *)((long)pvVar4 + -8) = *(undefined8 *)((long)pvVar6 + -8);
        pvVar3 = (void *)((long)pvVar6 + -0x18);
        *(undefined8 *)((long)pvVar4 + -0x10) = uVar8;
        *(undefined8 *)((long)pvVar4 + -0x18) = uVar7;
        pvVar4 = (void *)((long)pvVar4 + -0x18);
        *(undefined8 *)((long)pvVar6 + -0x10) = 0;
        *(undefined8 *)((long)pvVar6 + -8) = 0;
        *(undefined8 *)((long)pvVar6 + -0x18) = 0;
        pvVar6 = pvVar3;
      } while (pvVar3 != pvVar5);
      pvVar5 = (void *)*param_1;
      pvVar6 = (void *)param_1[1];
      *param_1 = (long)pvVar4;
      param_1[1] = (long)pvVar2;
      param_1[2] = (long)pvVar1;
      for (; pvVar6 != pvVar5; pvVar6 = (void *)((long)pvVar6 + -0x18)) {
      }
    }
    if (pvVar5 != (void *)0x0) {
      operator_delete(pvVar5);
      return;
    }
  }
  return;
}


// ===== 0047a648  FUN_0047a648 =====

void FUN_0047a648(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1d170;
  FUN_005466c0();
  return;
}


// ===== 0047a658  FUN_0047a658 =====

void FUN_0047a658(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1d170;
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 0047a688  FUN_0047a688 =====

void FUN_0047a688(void)

{
  return;
}


// ===== 0047a68c  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0047a690  FUN_0047a690 =====

void FUN_0047a690(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  return;
}


// ===== 0047a79c  FUN_0047a79c =====

/* WARNING: Removing unreachable block (ram,0x0047a8d0) */

void FUN_0047a79c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  void *pvVar9;
  void *pvVar10;
  void *pvVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar4 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar4 * -0x5555555555555555 + 1;
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
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  if (0xaaaaaaaaaaaaaaa < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_00401ad4();
  }
  pvVar3 = operator_new(uVar6 * 0x18);
  uVar13 = param_2[1];
  uVar12 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uVar8 = param_2[2];
  param_2[2] = 0;
  pvVar10 = (void *)*param_1;
  pvVar11 = (void *)param_1[1];
  puVar7 = (undefined8 *)((long)pvVar3 + lVar4 * 8);
  pvVar3 = (void *)((long)pvVar3 + uVar6 * 0x18);
  puVar2 = puVar7 + 3;
  puVar7[2] = uVar8;
  puVar7[1] = uVar13;
  *puVar7 = uVar12;
  if (pvVar11 == pvVar10) {
    *param_1 = (long)puVar7;
    param_1[1] = (long)puVar2;
    param_1[2] = (long)pvVar3;
  }
  else {
    do {
      uVar12 = *(undefined8 *)((long)pvVar11 + -0x10);
      uVar8 = *(undefined8 *)((long)pvVar11 + -0x18);
      puVar7[-1] = *(undefined8 *)((long)pvVar11 + -8);
      pvVar9 = (void *)((long)pvVar11 + -0x18);
      puVar7[-2] = uVar12;
      puVar7[-3] = uVar8;
      puVar7 = puVar7 + -3;
      *(undefined8 *)((long)pvVar11 + -0x10) = 0;
      *(undefined8 *)((long)pvVar11 + -8) = 0;
      *(undefined8 *)((long)pvVar11 + -0x18) = 0;
      pvVar11 = pvVar9;
    } while (pvVar9 != pvVar10);
    pvVar11 = (void *)*param_1;
    pvVar10 = (void *)param_1[1];
    *param_1 = (long)puVar7;
    param_1[1] = (long)puVar2;
    param_1[2] = (long)pvVar3;
    for (; pvVar10 != pvVar11; pvVar10 = (void *)((long)pvVar10 + -0x18)) {
    }
  }
  if (pvVar11 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar11);
  return;
}


// ===== 0047a928  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0047a92c  FUN_0047a92c =====

void FUN_0047a92c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  byte bVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  
  puVar8 = *(undefined8 **)(param_1 + 8);
  uVar2 = FUN_005ce36c();
  pbVar9 = (byte *)*puVar8;
  pvVar3 = malloc(0xe0);
  *(void **)(pbVar9 + 0x40) = pvVar3;
  uVar4 = FUN_0051452c(*(undefined8 *)(pbVar9 + 0x28));
  iVar1 = FUN_005d174c(uVar4,*(undefined8 *)(pbVar9 + 0x40));
  if (iVar1 < 0) {
    bVar7 = 1;
  }
  else {
    puVar5 = *(undefined8 **)(pbVar9 + 0x40);
    *puVar5 = pbVar9;
    uVar6 = FUN_005cdc4c(puVar5,PTR_FUN_00d51c18,FUN_004790ac);
    bVar7 = (byte)(uVar6 >> 0x1f) & 1;
  }
  *pbVar9 = bVar7;
  uVar4 = FUN_005ce36c();
  (*(code *)puVar8[6])(puVar8 + 4,puVar8 + 1,puVar8[8],uVar2,uVar4);
  FUN_00520464(*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 0047a9d4  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0047a9d8  FUN_0047a9d8 =====

void FUN_0047a9d8(long param_1)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  byte bVar6;
  byte *pbVar7;
  
  pbVar7 = (byte *)**(undefined8 **)(param_1 + 8);
  pvVar2 = malloc(0xe0);
  *(void **)(pbVar7 + 0x40) = pvVar2;
  uVar3 = FUN_0051452c(*(undefined8 *)(pbVar7 + 0x28));
  iVar1 = FUN_005d174c(uVar3,*(undefined8 *)(pbVar7 + 0x40));
  if (iVar1 < 0) {
    bVar6 = 1;
  }
  else {
    puVar4 = *(undefined8 **)(pbVar7 + 0x40);
    *puVar4 = pbVar7;
    uVar5 = FUN_005cdc4c(puVar4,PTR_FUN_00d51c18,FUN_004790ac);
    bVar6 = (byte)(uVar5 >> 0x1f) & 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *pbVar7 = bVar6;
  FUN_00520464(uVar3);
  return;
}


// ===== 0047aa50  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0047aa54  FUN_0047aa54 =====

void FUN_0047aa54(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 8);
  uVar1 = FUN_005ce36c();
  lVar4 = *plVar3;
  if (*(long *)(lVar4 + 0x1418) != 0) {
    FUN_005ce374(*(long *)(lVar4 + 0x1418),PTR_free_00d51ac0);
    *(undefined8 *)(lVar4 + 0x1418) = 0;
  }
  if (*(long *)(lVar4 + 0x40) != 0) {
    FUN_005cdc6c();
    FUN_005ce374(*(undefined8 *)(lVar4 + 0x40),PTR_free_00d51ac0);
    *(undefined8 *)(lVar4 + 0x40) = 0;
  }
  uVar2 = FUN_005ce36c();
  (*(code *)plVar3[6])(plVar3 + 4,plVar3 + 1,plVar3[8],uVar1,uVar2);
  FUN_00520464(*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 0047aae8  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0047aaec  FUN_0047aaec =====

void FUN_0047aaec(long param_1)

{
  long lVar1;
  
  lVar1 = **(long **)(param_1 + 8);
  if (*(long *)(lVar1 + 0x1418) != 0) {
    FUN_005ce374(*(long *)(lVar1 + 0x1418),PTR_free_00d51ac0);
    *(undefined8 *)(lVar1 + 0x1418) = 0;
  }
  if (*(long *)(lVar1 + 0x40) != 0) {
    FUN_005cdc6c();
    FUN_005ce374(*(undefined8 *)(lVar1 + 0x40),PTR_free_00d51ac0);
    *(undefined8 *)(lVar1 + 0x40) = 0;
  }
  FUN_00520464(*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 0047ab4c  FUN_0047ab4c =====

void FUN_0047ab4c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  
  pcVar4 = *(code **)(param_1[0xd] + 8);
  *param_1 = &PTR_FUN_00d1d248;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(param_1[10]);
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  FUN_0040dcf8(param_1 + 4);
  plVar6 = (long *)param_1[2];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
      return;
    }
  }
  return;
}


// ===== 0047abe0  FUN_0047abe0 =====

void FUN_0047abe0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  
  pcVar4 = *(code **)(param_1[0xd] + 8);
  *param_1 = &PTR_FUN_00d1d248;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(param_1[10]);
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  FUN_0040dcf8(param_1 + 4);
  plVar6 = (long *)param_1[2];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  operator_delete(param_1);
  return;
}


// ===== 0047ac70  FUN_0047ac70 =====

void FUN_0047ac70(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_005ce36c();
  FUN_0047acc8(param_1 + 8);
  uVar2 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x0047acc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x60))
            (param_1 + 0x50,param_1 + 0x38,*(undefined8 *)(param_1 + 0x70),uVar1,uVar2);
  return;
}


// ===== 0047acc8  FUN_0047acc8 =====

void FUN_0047acc8(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined **ppuVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined **local_c0;
  long *local_b8;
  long local_b0;
  void *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if ((*(byte *)*param_1 & 1) == 0) {
    lVar11 = param_1[2];
    plVar12 = (long *)(lVar11 + 0x13d8);
    FUN_0047b1e4(plVar12,((long)(param_1[4] - param_1[3]) >> 4) * -0x5555555555555555);
    lVar13 = param_1[3];
    lVar9 = param_1[4];
    if (lVar13 == lVar9) {
      lVar8 = *(long *)(lVar11 + 0x13f8);
      lVar10 = *(long *)(lVar11 + 0x13f0);
    }
    else {
      do {
        uVar15 = *(ulong *)(lVar11 + 0x13e0);
        local_c0 = (undefined **)
                   ((*(long *)(lVar13 + 0x20) - *(long *)(lVar13 + 0x18) >> 3) * -0x5555555555555555
                   );
        if (uVar15 < *(ulong *)(lVar11 + 0x13e8)) {
          FUN_0047b4b8(uVar15,lVar13);
          lVar8 = uVar15 + 0x30;
          *(long *)(lVar11 + 0x13e0) = lVar8;
        }
        else {
          FUN_0047b31c(plVar12,lVar13,&local_c0);
          lVar8 = *(long *)(lVar11 + 0x13e0);
        }
        if (*plVar12 == lVar8) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                     "!empty()","back() called on an empty vector");
        }
        uVar16 = (lVar8 - *plVar12 >> 4) * -0x5555555555555555 - 1;
        uVar15 = FUN_00417e08();
        if ((uVar15 & 1) == 0) {
          uVar15 = (*(long *)(lVar11 + 0x13e0) - *(long *)(lVar11 + 0x13d8) >> 4) *
                   -0x5555555555555555;
          if (uVar15 < uVar16 || uVar15 - uVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x587,
                       "__n < size()","vector[] index out of bounds");
          }
          FUN_00623bb0(&DAT_001f6ac0,"../../discord_native_lib/src/media/region_latency_tester.cpp",
                       0x249,"Sending ",
                       (*(long *)(lVar13 + 0x20) - *(long *)(lVar13 + 0x18) >> 3) *
                       -0x5555555555555555," latency test pings to region ",
                       *(long *)(lVar11 + 0x13d8) + uVar16 * 0x30);
        }
        lVar17 = *(long *)(lVar13 + 0x18);
        lVar2 = *(long *)(lVar13 + 0x20);
        if (lVar17 == lVar2) {
          lVar8 = *(long *)(lVar11 + 0x13f8);
          lVar10 = *(long *)(lVar11 + 0x13f0);
          uVar15 = (lVar8 - lVar10 >> 3) * -0x5555555555555555;
        }
        else {
          do {
            FUN_00478814(lVar11,uVar16 & 0xffffffff,lVar17);
            lVar8 = *(long *)(lVar11 + 0x13f8);
            lVar17 = lVar17 + 0x18;
            lVar10 = *(long *)(lVar11 + 0x13f0);
            uVar15 = (lVar8 - lVar10 >> 3) * -0x5555555555555555;
          } while (uVar15 < 0x32 && lVar17 != lVar2);
        }
        lVar13 = lVar13 + 0x30;
      } while (uVar15 < 0x32 && lVar13 != lVar9);
    }
    if (lVar8 == lVar10) {
      uVar15 = FUN_004249b0();
      if ((uVar15 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/region_latency_tester.cpp",
                     0x303,"RTC region latency test failed because no ping packets were sent");
      }
      lVar13 = *(long *)(lVar11 + 0x30);
      plVar12 = *(long **)(lVar11 + 0x1430);
      ppuVar14 = *(undefined ***)(lVar11 + 0x1428);
      if (plVar12 == (long *)0x0) {
        lVar9 = *(long *)(lVar13 + 0x58);
        if (lVar9 == 0) goto LAB_0047afe4;
      }
      else {
        plVar1 = plVar12 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        do {
          lVar9 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          FUN_005466cc(plVar12);
        }
        lVar9 = *(long *)(lVar13 + 0x58);
        if (lVar9 == 0) {
          do {
            lVar13 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar13 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
            FUN_005466cc(plVar12);
          }
          goto LAB_0047afe4;
        }
      }
      lVar13 = *(long *)(lVar13 + 0x78);
      if (lVar13 == 0) {
        puVar7 = (undefined8 *)operator_new(0x20);
        puVar7[2] = plVar12;
        puVar7[3] = lVar11;
        *puVar7 = &PTR_FUN_00d1d298;
        puVar7[1] = ppuVar14;
        FUN_00512cf8(lVar9,puVar7);
      }
      else {
        uVar6 = FUN_005ce36c();
        local_98 = CONCAT17(10,(undefined7)local_98);
        local_c0 = ppuVar14;
        local_b8 = plVar12;
        local_b0 = lVar11;
        if ((&local_a8 < (void **)0x1e15d0) && ("operator()" < (char *)((long)&uStack_a0 + 2U))) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                     ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
        }
        uVar15 = (ulong)uStack_a0 >> 0x10;
        uStack_a0 = CONCAT62((uint6)uVar15 & 0xffffffffff00,0x2928);
        local_a8 = (void *)s_operator___001e15cf._0_8_;
        local_80 = FUN_0040e7ec;
        local_78 = &DAT_001f4e70;
        local_90 = lVar13;
        local_70 = uVar6;
        puVar7 = (undefined8 *)operator_new(0x60);
        puVar7[2] = plVar12;
        puVar7[3] = lVar11;
        *puVar7 = &PTR_FUN_00d1d270;
        puVar7[1] = ppuVar14;
        puVar7[5] = uStack_a0;
        puVar7[4] = local_a8;
        puVar7[9] = FUN_0040e7ec;
        puVar7[10] = &DAT_001f4e70;
        puVar7[6] = local_98;
        puVar7[8] = uStack_88;
        puVar7[7] = local_90;
        puVar7[0xb] = uVar6;
        local_c0 = (undefined **)0x0;
        local_b8 = (long *)0x0;
        local_a8 = (void *)0x0;
        uStack_a0 = 0;
        local_98 = 0;
        FUN_00512cf8(lVar9,puVar7);
        if (*(code **)(local_78 + 8) != (code *)0x0) {
          (**(code **)(local_78 + 8))(local_90);
        }
        if (local_98 < 0) {
          operator_delete(local_a8);
        }
        plVar12 = local_b8;
        if (local_b8 != (long *)0x0) {
          plVar1 = local_b8 + 1;
          do {
            lVar13 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar13 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*local_b8 + 0x10))(local_b8);
            FUN_005466cc(plVar12);
          }
        }
      }
    }
    else {
      uVar6 = FUN_0051452c(*(undefined8 *)(lVar11 + 0x28));
      FUN_005156ac(&local_c0,uVar6,lVar11);
      if ((undefined ***)(lVar11 + 0x1410) == &local_c0) {
        local_c0 = &PTR_FUN_00d193e8;
        if (local_b8 != (long *)0x0) {
          FUN_005ce374(local_b8,PTR_free_00d51ac0);
        }
      }
      else {
        if (*(long *)(lVar11 + 0x1418) != 0) {
          FUN_005ce374(*(long *)(lVar11 + 0x1418),PTR_free_00d51ac0);
        }
        *(long **)(lVar11 + 0x1418) = local_b8;
        *(undefined4 *)(lVar11 + 0x1420) = (undefined4)local_b0;
      }
      FUN_00515708((undefined ***)(lVar11 + 0x1410),FUN_00479260,5000,0);
    }
  }
LAB_0047afe4:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0047b1e4  FUN_0047b1e4 =====

/* WARNING: Removing unreachable block (ram,0x0047b2f0) */

void FUN_0047b1e4(long *param_1,ulong param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  pvVar5 = (void *)*param_1;
  if ((ulong)((param_1[2] - (long)pvVar5 >> 4) * -0x5555555555555555) < param_2) {
    if (0x555555555555555 < param_2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar6 = (void *)param_1[1];
    pvVar2 = operator_new(param_2 * 0x30);
    lVar1 = (long)pvVar2 + ((long)pvVar6 - (long)pvVar5);
    pvVar2 = (void *)((long)pvVar2 + param_2 * 0x30);
    lVar3 = lVar1;
    if ((long)pvVar6 - (long)pvVar5 == 0) {
      *param_1 = lVar1;
      param_1[1] = lVar1;
      param_1[2] = (long)pvVar2;
    }
    else {
      do {
        uVar8 = *(undefined8 *)((long)pvVar6 + -0x28);
        uVar7 = *(undefined8 *)((long)pvVar6 + -0x30);
        *(undefined8 *)(lVar3 + -0x20) = *(undefined8 *)((long)pvVar6 + -0x20);
        *(undefined8 *)(lVar3 + -0x28) = uVar8;
        *(undefined8 *)(lVar3 + -0x30) = uVar7;
        uVar7 = *(undefined8 *)((long)pvVar6 + -0x18);
        *(undefined8 *)((long)pvVar6 + -0x28) = 0;
        *(undefined8 *)((long)pvVar6 + -0x20) = 0;
        *(undefined8 *)((long)pvVar6 + -0x30) = 0;
        *(undefined8 *)(lVar3 + -0x10) = *(undefined8 *)((long)pvVar6 + -0x10);
        *(undefined8 *)(lVar3 + -0x18) = uVar7;
        *(undefined8 *)(lVar3 + -8) = *(undefined8 *)((long)pvVar6 + -8);
        pvVar4 = (void *)((long)pvVar6 + -0x30);
        *(undefined8 *)((long)pvVar6 + -0x18) = 0;
        *(undefined8 *)((long)pvVar6 + -0x10) = 0;
        lVar3 = lVar3 + -0x30;
        *(undefined8 *)((long)pvVar6 + -8) = 0;
        pvVar6 = pvVar4;
      } while (pvVar4 != pvVar5);
      pvVar5 = (void *)*param_1;
      pvVar6 = (void *)param_1[1];
      *param_1 = lVar3;
      param_1[1] = lVar1;
      param_1[2] = (long)pvVar2;
      for (; pvVar6 != pvVar5; pvVar6 = (void *)((long)pvVar6 + -0x30)) {
        pvVar2 = *(void **)((long)pvVar6 + -0x18);
        if (pvVar2 != (void *)0x0) {
          *(void **)((long)pvVar6 + -0x10) = pvVar2;
          operator_delete(pvVar2);
        }
      }
    }
    if (pvVar5 != (void *)0x0) {
      operator_delete(pvVar5);
      return;
    }
  }
  return;
}


// ===== 0047b31c  FUN_0047b31c =====

/* WARNING: Removing unreachable block (ram,0x0047b484) */

void FUN_0047b31c(long *param_1,undefined8 param_2,undefined8 param_3)

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
  
  lVar3 = param_1[1] - *param_1 >> 4;
  uVar1 = lVar3 * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar5 = param_1[2] - *param_1 >> 4;
  uVar6 = lVar5 * 0x5555555555555556;
  if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
    uVar6 = uVar1;
  }
  if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar5 * -0x5555555555555555)) {
    uVar6 = 0x555555555555555;
  }
  if (uVar6 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (0x555555555555555 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
    pvVar2 = operator_new(uVar6 * 0x30);
  }
  pvVar9 = (void *)((long)pvVar2 + lVar3 * 0x10);
  pvVar2 = (void *)((long)pvVar2 + uVar6 * 0x30);
  FUN_0047b4b8(pvVar9,param_2,param_3);
  pvVar7 = (void *)*param_1;
  pvVar8 = (void *)param_1[1];
  lVar3 = (long)pvVar9 + 0x30;
  if (pvVar8 == pvVar7) {
    *param_1 = (long)pvVar9;
    param_1[1] = lVar3;
    param_1[2] = (long)pvVar2;
  }
  else {
    do {
      uVar11 = *(undefined8 *)((long)pvVar8 + -0x28);
      uVar10 = *(undefined8 *)((long)pvVar8 + -0x30);
      *(undefined8 *)((long)pvVar9 + -0x20) = *(undefined8 *)((long)pvVar8 + -0x20);
      *(undefined8 *)((long)pvVar9 + -0x28) = uVar11;
      *(undefined8 *)((long)pvVar9 + -0x30) = uVar10;
      *(undefined8 *)((long)pvVar8 + -0x28) = 0;
      *(undefined8 *)((long)pvVar8 + -0x20) = 0;
      *(undefined8 *)((long)pvVar8 + -0x30) = 0;
      *(undefined8 *)((long)pvVar9 + -0x18) = 0;
      *(undefined8 *)((long)pvVar9 + -0x10) = 0;
      *(undefined8 *)((long)pvVar9 + -8) = 0;
      uVar10 = *(undefined8 *)((long)pvVar8 + -0x18);
      *(undefined8 *)((long)pvVar9 + -0x10) = *(undefined8 *)((long)pvVar8 + -0x10);
      *(undefined8 *)((long)pvVar9 + -0x18) = uVar10;
      *(undefined8 *)((long)pvVar9 + -8) = *(undefined8 *)((long)pvVar8 + -8);
      pvVar4 = (void *)((long)pvVar8 + -0x30);
      *(undefined8 *)((long)pvVar8 + -0x18) = 0;
      *(undefined8 *)((long)pvVar8 + -0x10) = 0;
      pvVar9 = (void *)((long)pvVar9 + -0x30);
      *(undefined8 *)((long)pvVar8 + -8) = 0;
      pvVar8 = pvVar4;
    } while (pvVar4 != pvVar7);
    pvVar8 = (void *)*param_1;
    pvVar7 = (void *)param_1[1];
    *param_1 = (long)pvVar9;
    param_1[1] = lVar3;
    param_1[2] = (long)pvVar2;
    for (; pvVar7 != pvVar8; pvVar7 = (void *)((long)pvVar7 + -0x30)) {
      pvVar2 = *(void **)((long)pvVar7 + -0x18);
      if (pvVar2 != (void *)0x0) {
        *(void **)((long)pvVar7 + -0x10) = pvVar2;
        operator_delete(pvVar2);
      }
    }
  }
  if (pvVar8 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar8);
  return;
}


// ===== 0047b4b8  FUN_0047b4b8 =====

long FUN_0047b4b8(long param_1,undefined8 *param_2,undefined8 *param_3)

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
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
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
  FUN_0047b608(param_1,&local_60,*param_3);
  if ((long)local_50 < 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0047b608  FUN_0047b608 =====

void FUN_0047b608(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  undefined8 *__dest;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
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
    uVar5 = param_2[1];
    uVar4 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar5;
    *param_1 = uVar4;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (param_3 != 0) {
    if (param_3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar3 = operator_new(param_3 * 8);
    param_1[3] = pvVar3;
    param_1[4] = pvVar3;
    param_1[5] = (void *)((long)pvVar3 + param_3 * 8);
  }
  return;
}


// ===== 0047b710  FUN_0047b710 =====

void FUN_0047b710(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  
  pcVar4 = *(code **)(param_1[10] + 8);
  *param_1 = &PTR_FUN_00d1d270;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(param_1[7]);
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
    plVar6 = (long *)param_1[2];
  }
  else {
    plVar6 = (long *)param_1[2];
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
      return;
    }
  }
  return;
}


// ===== 0047b7a8  FUN_0047b7a8 =====

void FUN_0047b7a8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  
  pcVar4 = *(code **)(param_1[10] + 8);
  *param_1 = &PTR_FUN_00d1d270;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(param_1[7]);
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
    plVar6 = (long *)param_1[2];
  }
  else {
    plVar6 = (long *)param_1[2];
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  operator_delete(param_1);
  return;
}


// ===== 0047b83c  FUN_0047b83c =====

/* WARNING: Removing unreachable block (ram,0x0047b8d4) */

void FUN_0047b83c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  void *local_60;
  void *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_005ce36c();
  if (((**(byte **)(param_1 + 8) & 1) == 0) &&
     (lVar4 = *(long *)(param_1 + 0x18), *(char *)(*(long *)(lVar4 + 0x20) + 0x10) == '\0')) {
    local_60 = (void *)0x0;
    local_58 = (void *)0x0;
    local_50 = 0;
    (**(code **)(lVar4 + 0x18))(lVar4 + 8,&local_60);
    if (local_60 != (void *)0x0) {
      for (; local_58 != local_60; local_58 = (void *)((long)local_58 + -0x18)) {
      }
      local_58 = local_60;
      operator_delete(local_60);
    }
  }
  uVar3 = FUN_005ce36c();
  (**(code **)(param_1 + 0x48))
            (param_1 + 0x38,param_1 + 0x20,*(undefined8 *)(param_1 + 0x58),uVar2,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0047b938  FUN_0047b938 =====

void FUN_0047b938(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00d1d298;
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


// ===== 0047b99c  FUN_0047b99c =====

void FUN_0047b99c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00d1d298;
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


// ===== 0047ba00  FUN_0047ba00 =====

/* WARNING: Removing unreachable block (ram,0x0047ba88) */

void FUN_0047ba00(long param_1)

{
  long lVar1;
  long lVar2;
  void *local_50;
  void *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((**(byte **)(param_1 + 8) & 1) == 0) &&
     (lVar2 = *(long *)(param_1 + 0x18), *(char *)(*(long *)(lVar2 + 0x20) + 0x10) == '\0')) {
    local_50 = (void *)0x0;
    local_48 = (void *)0x0;
    local_40 = 0;
    (**(code **)(lVar2 + 0x18))(lVar2 + 8,&local_50);
    if (local_50 != (void *)0x0) {
      for (; local_48 != local_50; local_48 = (void *)((long)local_48 + -0x18)) {
      }
      local_48 = local_50;
      operator_delete(local_50);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0047bac8  FUN_0047bac8 =====

void FUN_0047bac8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_00d1d2c0;
  FUN_0040dcf8(param_1 + 4);
  plVar5 = (long *)param_1[2];
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


// ===== 0047bb38  FUN_0047bb38 =====

void FUN_0047bb38(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_00d1d2c0;
  FUN_0040dcf8(param_1 + 4);
  plVar5 = (long *)param_1[2];
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


// ===== 0047bba4  FUN_0047bba4 =====

void FUN_0047bba4(long param_1)

{
  FUN_0047acc8(param_1 + 8);
  return;
}


// ===== 0047bbac  FUN_0047bbac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047bbac(undefined8 param_1,undefined8 param_2,int *param_3)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 local_80;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  long lStack_60;
  ulong local_58;
  ulong uStack_50;
  ulong local_48;
  ulong uStack_40;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  uVar7 = (ulong)(uint)param_3[1];
  iVar4 = param_3[1] - *param_3;
  if (iVar4 == 0) goto LAB_0047bd30;
  uVar2 = iVar4 + 1;
  local_80 = param_2;
  if (uVar2 == 0) {
    uStack_70 = 0x20;
    local_78 = 0x20;
    lStack_60 = 1;
    local_68 = 1;
    uStack_50 = _UNK_001f4488;
    local_58 = _DAT_001f4480;
    uStack_40 = _UNK_001f4ca8;
    local_48 = _DAT_001f4ca0;
    uVar7 = FUN_0046a67c(&local_80);
    goto LAB_0047bd30;
  }
  lVar3 = 0x1f;
  if ((uVar2 << (ulong)((uint)LZCOUNT(uVar2) & 0x1f) & 0x7fffffff) != 0) {
    lVar3 = 0x20;
  }
  local_78 = lVar3 - LZCOUNT(uVar2);
  local_68 = local_78 >> 5;
  if ((local_78 & 0x1f) != 0) {
    local_68 = local_68 + 1;
  }
  uStack_70 = 0;
  if (local_68 != 0) {
    uStack_70 = local_78 / local_68;
  }
  local_58 = -1L << (uStack_70 & 0x3f) & 0x100000000;
  if (0x3f < uStack_70) {
    local_58 = 0;
  }
  uVar7 = 0;
  if (local_68 != 0) {
    uVar7 = local_58 / local_68;
  }
  if (uVar7 < (local_58 ^ 0x100000000)) {
    local_68 = local_68 + 1;
    uStack_70 = 0;
    if (local_68 != 0) {
      uStack_70 = local_78 / local_68;
    }
    if (uStack_70 < 0x40) {
      local_58 = -1L << (uStack_70 & 0x3f) & 0x100000000;
      goto LAB_0047bc60;
    }
    bVar1 = false;
    local_58 = 0;
    lStack_60 = local_68 + (uStack_70 * local_68 - local_78);
    uStack_50 = 0;
  }
  else {
LAB_0047bc60:
    uVar7 = 0;
    if (local_68 != 0) {
      uVar7 = local_78 / local_68;
    }
    bVar1 = uStack_70 < 0x3f;
    lStack_60 = local_68 + (uVar7 * local_68 - local_78);
    uStack_50 = 0;
    if (uStack_70 < 0x3f) {
      uStack_50 = -2L << (uStack_70 & 0x3f) & 0x100000000;
    }
  }
  local_48 = 0;
  if (uStack_70 != 0) {
    local_48 = 0xffffffffffffffff >> (-uStack_70 & 0x3f);
  }
  uStack_40 = 0xffffffffffffffff >> (~uStack_70 & 0x3f);
  if (!bVar1) {
    uStack_40 = 0xffffffffffffffff;
  }
  do {
    uVar6 = FUN_0046a67c(&local_80);
  } while (uVar2 <= uVar6);
  uVar7 = (ulong)(*param_3 + uVar6);
LAB_0047bd30:
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


// ===== 0047bd58  FUN_0047bd58 =====

void FUN_0047bd58(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  
  pcVar4 = *(code **)(param_1[10] + 8);
  *param_1 = &PTR_FUN_00d1d2e8;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(param_1[7]);
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
    plVar6 = (long *)param_1[2];
  }
  else {
    plVar6 = (long *)param_1[2];
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
      return;
    }
  }
  return;
}


// ===== 0047bdf0  FUN_0047bdf0 =====

void FUN_0047bdf0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  
  pcVar4 = *(code **)(param_1[10] + 8);
  *param_1 = &PTR_FUN_00d1d2e8;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(param_1[7]);
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
    plVar6 = (long *)param_1[2];
  }
  else {
    plVar6 = (long *)param_1[2];
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  operator_delete(param_1);
  return;
}


// ===== 0047be84  FUN_0047be84 =====

/* WARNING: Removing unreachable block (ram,0x0047bf1c) */

void FUN_0047be84(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  void *local_60;
  void *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_005ce36c();
  if (((**(byte **)(param_1 + 8) & 1) == 0) &&
     (lVar4 = *(long *)(param_1 + 0x18), *(char *)(*(long *)(lVar4 + 0x20) + 0x10) == '\0')) {
    local_60 = (void *)0x0;
    local_58 = (void *)0x0;
    local_50 = 0;
    (**(code **)(lVar4 + 0x18))(lVar4 + 8,&local_60);
    if (local_60 != (void *)0x0) {
      for (; local_58 != local_60; local_58 = (void *)((long)local_58 + -0x18)) {
      }
      local_58 = local_60;
      operator_delete(local_60);
    }
  }
  uVar3 = FUN_005ce36c();
  (**(code **)(param_1 + 0x48))
            (param_1 + 0x38,param_1 + 0x20,*(undefined8 *)(param_1 + 0x58),uVar2,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0047bf80  FUN_0047bf80 =====

void FUN_0047bf80(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00d1d310;
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


// ===== 0047bfe4  FUN_0047bfe4 =====

void FUN_0047bfe4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00d1d310;
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


// ===== 0047c048  FUN_0047c048 =====

/* WARNING: Removing unreachable block (ram,0x0047c0d0) */

void FUN_0047c048(long param_1)

{
  long lVar1;
  long lVar2;
  void *local_50;
  void *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((**(byte **)(param_1 + 8) & 1) == 0) &&
     (lVar2 = *(long *)(param_1 + 0x18), *(char *)(*(long *)(lVar2 + 0x20) + 0x10) == '\0')) {
    local_50 = (void *)0x0;
    local_48 = (void *)0x0;
    local_40 = 0;
    (**(code **)(lVar2 + 0x18))(lVar2 + 8,&local_50);
    if (local_50 != (void *)0x0) {
      for (; local_48 != local_50; local_48 = (void *)((long)local_48 + -0x18)) {
      }
      local_48 = local_50;
      operator_delete(local_50);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0047c110  FUN_0047c110 =====

void FUN_0047c110(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  
  pcVar4 = *(code **)(param_1[10] + 8);
  *param_1 = &PTR_FUN_00d1d338;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(param_1[7]);
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
    plVar6 = (long *)param_1[2];
  }
  else {
    plVar6 = (long *)param_1[2];
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
      return;
    }
  }
  return;
}


// ===== 0047c1a8  FUN_0047c1a8 =====

void FUN_0047c1a8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  
  pcVar4 = *(code **)(param_1[10] + 8);
  *param_1 = &PTR_FUN_00d1d338;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(param_1[7]);
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
    plVar6 = (long *)param_1[2];
  }
  else {
    plVar6 = (long *)param_1[2];
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  operator_delete(param_1);
  return;
}


// ===== 0047c23c  FUN_0047c23c =====

/* WARNING: Removing unreachable block (ram,0x0047c2d4) */

void FUN_0047c23c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  void *local_60;
  void *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_005ce36c();
  if (((**(byte **)(param_1 + 8) & 1) == 0) &&
     (lVar4 = *(long *)(param_1 + 0x18), *(char *)(*(long *)(lVar4 + 0x20) + 0x10) == '\0')) {
    local_60 = (void *)0x0;
    local_58 = (void *)0x0;
    local_50 = 0;
    (**(code **)(lVar4 + 0x18))(lVar4 + 8,&local_60);
    if (local_60 != (void *)0x0) {
      for (; local_58 != local_60; local_58 = (void *)((long)local_58 + -0x18)) {
      }
      local_58 = local_60;
      operator_delete(local_60);
    }
  }
  uVar3 = FUN_005ce36c();
  (**(code **)(param_1 + 0x48))
            (param_1 + 0x38,param_1 + 0x20,*(undefined8 *)(param_1 + 0x58),uVar2,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0047c338  FUN_0047c338 =====

void FUN_0047c338(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00d1d360;
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


// ===== 0047c39c  FUN_0047c39c =====

void FUN_0047c39c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00d1d360;
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


// ===== 0047c400  FUN_0047c400 =====

/* WARNING: Removing unreachable block (ram,0x0047c488) */

void FUN_0047c400(long param_1)

{
  long lVar1;
  long lVar2;
  void *local_50;
  void *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((**(byte **)(param_1 + 8) & 1) == 0) &&
     (lVar2 = *(long *)(param_1 + 0x18), *(char *)(*(long *)(lVar2 + 0x20) + 0x10) == '\0')) {
    local_50 = (void *)0x0;
    local_48 = (void *)0x0;
    local_40 = 0;
    (**(code **)(lVar2 + 0x18))(lVar2 + 8,&local_50);
    if (local_50 != (void *)0x0) {
      for (; local_48 != local_50; local_48 = (void *)((long)local_48 + -0x18)) {
      }
      local_48 = local_50;
      operator_delete(local_50);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0047c4c8  FUN_0047c4c8 =====

/* WARNING: Removing unreachable block (ram,0x0047c554) */

void FUN_0047c4c8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  code *pcVar5;
  void *pvVar6;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  
  pcVar5 = *(code **)(param_1[0xd] + 8);
  *param_1 = &PTR_FUN_00d1d388;
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(param_1[10]);
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
    pvVar9 = (void *)param_1[4];
  }
  else {
    pvVar9 = (void *)param_1[4];
  }
  if (pvVar9 == (void *)0x0) {
    plVar8 = (long *)param_1[2];
  }
  else {
    pvVar6 = (void *)param_1[5];
    pvVar4 = pvVar9;
    if (pvVar6 != pvVar9) {
      do {
        pvVar6 = (void *)((long)pvVar6 + -0x18);
      } while (pvVar6 != pvVar9);
      pvVar4 = (void *)param_1[4];
    }
    param_1[5] = pvVar9;
    operator_delete(pvVar4);
    plVar8 = (long *)param_1[2];
  }
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
      return;
    }
  }
  return;
}


// ===== 0047c5c0  FUN_0047c5c0 =====

/* WARNING: Removing unreachable block (ram,0x0047c64c) */

void FUN_0047c5c0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  code *pcVar5;
  void *pvVar6;
  long lVar7;
  void *pvVar8;
  long *plVar9;
  
  pcVar5 = *(code **)(param_1[0xd] + 8);
  *param_1 = &PTR_FUN_00d1d388;
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(param_1[10]);
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
    pvVar8 = (void *)param_1[4];
  }
  else {
    pvVar8 = (void *)param_1[4];
  }
  if (pvVar8 == (void *)0x0) {
    plVar9 = (long *)param_1[2];
  }
  else {
    pvVar6 = (void *)param_1[5];
    pvVar4 = pvVar8;
    if (pvVar6 != pvVar8) {
      do {
        pvVar6 = (void *)((long)pvVar6 + -0x18);
      } while (pvVar6 != pvVar8);
      pvVar4 = (void *)param_1[4];
    }
    param_1[5] = pvVar8;
    operator_delete(pvVar4);
    plVar9 = (long *)param_1[2];
  }
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
  operator_delete(param_1);
  return;
}


// ===== 0047c6b0  FUN_0047c6b0 =====

void FUN_0047c6b0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_005ce36c();
  FUN_0047c708(param_1 + 8);
  uVar2 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x0047c704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x60))
            (param_1 + 0x50,param_1 + 0x38,*(undefined8 *)(param_1 + 0x70),uVar1,uVar2);
  return;
}


// ===== 0047c708  FUN_0047c708 =====

/* WARNING: Removing unreachable block (ram,0x0047c88c) */

void FUN_0047c708(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *__src;
  long lVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  undefined8 *__dest;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  void *local_80;
  void *local_78;
  void *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  if (((*(byte *)*param_1 & 1) == 0) &&
     (lVar8 = param_1[2], *(char *)(*(long *)(lVar8 + 0x20) + 0x10) == '\0')) {
    lVar3 = param_1[3];
    lVar4 = param_1[4];
    local_80 = (void *)0x0;
    local_78 = (void *)0x0;
    local_70 = (void *)0x0;
    uVar5 = lVar4 - lVar3;
    if (uVar5 != 0) {
      if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar5 >> 3) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      pvVar7 = operator_new(uVar5);
      lVar9 = 0;
      local_70 = (void *)((long)pvVar7 + ((long)uVar5 >> 3) * 8);
      local_80 = pvVar7;
      do {
        puVar2 = (undefined8 *)(lVar3 + lVar9);
        __dest = (undefined8 *)((long)pvVar7 + lVar9);
        if (*(char *)((long)puVar2 + 0x17) < '\0') {
          __src = (undefined8 *)*puVar2;
          uVar5 = puVar2[1];
          if (uVar5 < 0x17) {
            *(char *)((long)pvVar7 + lVar9 + 0x17) = (char)uVar5;
          }
          else {
            if (0x7fffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            uVar1 = (uVar5 | 0xf) + 1;
            __dest = (undefined8 *)operator_new(uVar1);
            puVar2 = (undefined8 *)((long)pvVar7 + lVar9);
            puVar2[1] = uVar5;
            puVar2[2] = uVar1 | 0x8000000000000000;
            *puVar2 = __dest;
          }
          if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + uVar5 + 1))) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                       ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range")
            ;
          }
          memmove(__dest,__src,uVar5 + 1);
        }
        else {
          uVar11 = puVar2[1];
          uVar10 = *puVar2;
          __dest[2] = puVar2[2];
          __dest[1] = uVar11;
          *__dest = uVar10;
        }
        lVar9 = lVar9 + 0x18;
      } while (lVar3 + lVar9 != lVar4);
      local_78 = (void *)((long)pvVar7 + lVar9);
    }
    (**(code **)(lVar8 + 0x18))(lVar8 + 8,&local_80);
    if (local_80 != (void *)0x0) {
      for (; local_78 != local_80; local_78 = (void *)((long)local_78 + -0x18)) {
      }
      local_78 = local_80;
      operator_delete(local_80);
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0047c908  FUN_0047c908 =====

/* WARNING: Removing unreachable block (ram,0x0047c95c) */

void FUN_0047c908(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  
  pvVar8 = (void *)param_1[4];
  *param_1 = &PTR_FUN_00d1d3b0;
  if (pvVar8 != (void *)0x0) {
    pvVar5 = (void *)param_1[5];
    pvVar4 = pvVar8;
    if (pvVar5 != pvVar8) {
      do {
        pvVar5 = (void *)((long)pvVar5 + -0x18);
      } while (pvVar5 != pvVar8);
      pvVar4 = (void *)param_1[4];
    }
    param_1[5] = pvVar8;
    operator_delete(pvVar4);
  }
  plVar7 = (long *)param_1[2];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_005466cc(plVar7);
      return;
    }
  }
  return;
}


// ===== 0047c9c8  FUN_0047c9c8 =====

/* WARNING: Removing unreachable block (ram,0x0047ca1c) */

void FUN_0047c9c8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  void *pvVar7;
  long *plVar8;
  
  pvVar7 = (void *)param_1[4];
  *param_1 = &PTR_FUN_00d1d3b0;
  if (pvVar7 != (void *)0x0) {
    pvVar5 = (void *)param_1[5];
    pvVar4 = pvVar7;
    if (pvVar5 != pvVar7) {
      do {
        pvVar5 = (void *)((long)pvVar5 + -0x18);
      } while (pvVar5 != pvVar7);
      pvVar4 = (void *)param_1[4];
    }
    param_1[5] = pvVar7;
    operator_delete(pvVar4);
  }
  plVar8 = (long *)param_1[2];
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
  }
  operator_delete(param_1);
  return;
}


// ===== 0047ca80  FUN_0047ca80 =====

void FUN_0047ca80(long param_1)

{
  FUN_0047c708(param_1 + 8);
  return;
}


// ===== 0047ca88  FUN_0047ca88 =====

void FUN_0047ca88(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 (*param_5) [16],undefined4 param_6,byte param_7)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  code *pcVar9;
  long lVar10;
  undefined1 auVar11 [16];
  long local_78;
  undefined8 *puStack_70;
  code *local_68;
  undefined8 *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  auVar11 = *param_5;
  *(undefined8 *)*param_5 = 0;
  lVar7 = *(long *)param_5[1];
  *(undefined8 *)(*param_5 + 8) = 0;
  *(undefined8 *)param_5[1] = 0;
  FUN_00485cd0();
  if (lVar7 < 0) {
    operator_delete(auVar11._0_8_);
  }
  *param_1 = &PTR_FUN_00d1d3d8;
  param_1[0x3a8] = &PTR_FUN_00d1d418;
  param_1[0x3b3] = 0;
  param_1[0x3aa] = 0;
  param_1[0x3a9] = 0;
  param_1[0x3ac] = 0;
  param_1[0x3ab] = 0;
  *(undefined4 *)(param_1 + 0x3ad) = 0x3f800000;
  param_1[0x3af] = 0;
  param_1[0x3ae] = 0;
  param_1[0x3b1] = 0;
  param_1[0x3b0] = 0;
  *(undefined4 *)(param_1 + 0x3b2) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3b4) = param_6;
  uVar6 = *(undefined8 *)(param_2 + 0xf8);
  lVar7 = *(long *)(param_2 + 0x100);
  if (lVar7 != 0) {
    plVar8 = (long *)(lVar7 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puVar5 = (undefined8 *)operator_new(0x30);
  auVar11 = NEON_fmov(0x3f800000,4);
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_00d1d440;
  puVar5[4] = uVar6;
  puVar5[5] = lVar7;
  param_1[0x3b6] = puVar5;
  param_1[0x3b8] = auVar11._8_8_;
  param_1[0x3b7] = auVar11._0_8_;
  puVar5[3] = &PTR_FUN_00d1d478;
  param_1[0x3b5] = puVar5 + 3;
  param_1[0x3b9] = 0;
  *(undefined2 *)(param_1 + 0x3ba) = 0;
  *(undefined4 *)(param_1 + 0x3bf) = 0x3f800000;
  param_1[0x3bc] = 0;
  param_1[0x3bb] = 0;
  param_1[0x3be] = 0;
  param_1[0x3bd] = 0;
  param_1[0x3c1] = 0;
  param_1[0x3c0] = 0;
  param_1[0x3c3] = 0;
  param_1[0x3c2] = 0;
  *(undefined4 *)(param_1 + 0x3c4) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x3c5) = 0;
  puVar5 = (undefined8 *)operator_new(0x28);
  puVar4 = PTR_DAT_00d51bb8;
  puVar5[4] = 0;
  puVar5[1] = 0;
  *puVar5 = 0;
  puVar5[3] = 0;
  puVar5[2] = 0;
  pcVar9 = *(code **)(puVar4 + 0x10);
  *puVar5 = puVar4 + 0x10;
  uVar6 = FUN_004eb37c();
  puVar5[2] = uVar6;
  *(undefined1 *)(puVar5 + 3) = 0;
  *(undefined1 *)(puVar5 + 4) = 0;
  param_1[0x3c6] = puVar5;
  (*pcVar9)(puVar5);
  *(byte *)(param_1 + 0x3c7) = param_7 & 1;
  *(undefined4 *)((long)param_1 + 0x1e3c) = 0;
  *(undefined1 *)(param_1 + 0x3c8) = 0;
  *(undefined1 *)(param_1 + 0x3c9) = 0;
  *(undefined1 *)(param_1 + 0x3ca) = 0;
  *(undefined1 *)(param_1 + 0x3cb) = 0;
  *(undefined1 *)(param_1 + 0x3cc) = 0;
  *(undefined1 *)(param_1 + 0x3cd) = 0;
  *(undefined1 *)(param_1 + 0x3ce) = 0;
  *(undefined1 *)(param_1 + 0x3cf) = 0;
  *(undefined1 *)(param_1 + 0x3d0) = 0;
  *(undefined1 *)(param_1 + 0x3d1) = 0;
  *(undefined1 *)(param_1 + 0x3d2) = 0;
  *(undefined1 *)(param_1 + 0x3d3) = 0;
  *(undefined1 *)(param_1 + 0x3d4) = 0;
  *(undefined1 *)(param_1 + 0x3d5) = 0;
  *(undefined1 *)(param_1 + 0x3d6) = 0;
  *(undefined1 *)(param_1 + 0x3d7) = 0;
  param_1[0x3d8] = 0;
  param_1[0x3da] = 0;
  param_1[0x3d9] = 0;
  FUN_0047ce9c(param_1);
  lVar10 = param_1[2];
  lVar7 = lVar10 + 0x168;
  FUN_005467a4(lVar7);
  if (*(char *)(lVar10 + 0x1b0) != '\0') {
    FUN_007b5a0c(lVar10 + 400,param_1,param_1,FUN_00481f00);
    FUN_005467c8(lVar7);
    plVar8 = (long *)param_1[0x3d9];
    local_68 = FUN_00481fac;
    local_60 = (undefined8 *)&DAT_001f6ad0;
    local_78 = lVar7;
    puStack_70 = param_1;
    if (plVar8 < (long *)param_1[0x3da]) {
      if (plVar8 == (long *)0x0) goto LAB_0047ce70;
      plVar8[1] = (long)param_1;
      *plVar8 = lVar7;
      plVar8[2] = (long)FUN_00481fac;
      plVar8[3] = (long)&DAT_001f6ad0;
      if (DAT_001f6ad8 != 0) {
        local_68 = FUN_0040dec4;
        local_60 = &DAT_001f1910;
      }
      param_1[0x3d9] = plVar8 + 4;
    }
    else {
      FUN_004313e8(param_1 + 0x3d8,&local_78);
    }
    if ((code *)local_60[1] != (code *)0x0) {
      (*(code *)local_60[1])(local_78);
    }
    lVar10 = param_1[2];
    lVar7 = lVar10 + 200;
    FUN_005467a4(lVar7);
    if (*(char *)(lVar10 + 0x110) != '\0') {
      FUN_007b5a0c(lVar10 + 0xf0,param_1,param_1,FUN_00482010);
      FUN_005467c8(lVar7);
      plVar8 = (long *)param_1[0x3d9];
      local_68 = FUN_00482078;
      local_60 = (undefined8 *)&DAT_001f6af0;
      local_78 = lVar7;
      if (plVar8 < (long *)param_1[0x3da]) {
        if (plVar8 == (long *)0x0) {
LAB_0047ce70:
          puStack_70 = param_1;
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        plVar8[1] = (long)param_1;
        *plVar8 = lVar7;
        plVar8[2] = (long)FUN_00482078;
        plVar8[3] = (long)&DAT_001f6af0;
        if (DAT_001f6af8 != 0) {
          local_68 = FUN_0040dec4;
          local_60 = &DAT_001f1910;
        }
        param_1[0x3d9] = plVar8 + 4;
        puStack_70 = param_1;
      }
      else {
        puStack_70 = param_1;
        FUN_004313e8(param_1 + 0x3d8,&local_78);
      }
      if ((code *)local_60[1] != (code *)0x0) {
        (*(code *)local_60[1])(local_78);
      }
      lVar7 = FUN_005183d8();
      if (*(char *)(param_1 + 0x3c9) == '\0') {
        *(undefined1 *)(param_1 + 0x3c9) = 1;
      }
      param_1[0x3c8] = lVar7 / 1000000;
      if (*(long *)(lVar3 + 0x28) == local_58) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
             "this->has_value()","optional operator-> called on a disengaged value");
}


// ===== 0047ce9c  FUN_0047ce9c =====

void FUN_0047ce9c(long param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  void *pvVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  undefined1 auStack_2f0 [64];
  undefined1 auStack_2b0 [176];
  undefined1 auStack_200 [176];
  void *local_150;
  undefined8 uStack_148;
  void *local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  long *local_a0;
  undefined1 local_84;
  long *local_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar6 = FUN_004504d4(*(undefined8 *)(param_1 + 0x10));
  if (((uVar6 & 1) != 0) && (*(int *)(param_1 + 0x1da0) != 0)) {
    FUN_0084207c(&local_108);
    local_108 = *(undefined4 *)(param_1 + 0x1da0);
    local_100 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x2d0);
    local_104 = FUN_004624c4(*(undefined8 *)(*(long *)(param_1 + 8) + 0x3d8));
    local_f0 = *(undefined8 *)(param_1 + 0x1da8);
    local_dc = *(undefined4 *)(*(long *)(param_1 + 8) + 0x2c8);
    uStack_e8 = 200;
    uVar6 = FUN_00417e08();
    if ((uVar6 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../discord_native_lib/src/media/remote_user.cpp",0x1621,
                   "config.jitter_buffer_min_delay_ms = ",local_dc);
    }
    local_d8 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x2c0);
    plVar8 = *(long **)(*(long *)(param_1 + 0x18) + 0x88);
    if (plVar8 != (long *)0x0) {
      (**(code **)*plVar8)(plVar8);
    }
    if (local_a0 != (long *)0x0) {
      lVar7 = *local_a0;
      local_a0 = plVar8;
      (**(code **)(lVar7 + 8))();
      plVar8 = local_a0;
    }
    local_a0 = plVar8;
    lVar7 = *(long *)(param_1 + 0xb0);
    if (*(long *)(param_1 + 0xa8) != lVar7) {
      lVar11 = *(long *)(param_1 + 0xa8) + 0x28;
      do {
        bVar2 = *(byte *)(lVar11 + -9);
        plVar8 = (long *)*(long *)(lVar11 + -0x20);
        if (-1 < (char)bVar2) {
          plVar8 = (long *)(lVar11 + -0x20);
        }
        uVar6 = *(ulong *)(lVar11 + -0x18);
        if (-1 < (char)bVar2) {
          uVar6 = (ulong)bVar2;
        }
        if (plVar8 == (long *)0x0 && uVar6 != 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131
                     ,"__len == 0 || __s != nullptr",
                     "string_view::string_view(_CharT *, size_t): received nullptr");
        }
        FUN_0066759c(auStack_2f0,plVar8,uVar6,*(undefined4 *)(lVar11 + -8),
                     *(undefined4 *)(lVar11 + -4),lVar11);
        local_150 = (void *)CONCAT71(local_150._1_7_,*(undefined1 *)(lVar11 + -0x28));
        FUN_00667434(&uStack_148,auStack_2f0);
        FUN_004834a8(auStack_b8,&local_150);
        FUN_006678ac(&uStack_148);
        FUN_006678ac(auStack_2f0);
        lVar1 = lVar11 + 0x18;
        lVar11 = lVar11 + 0x40;
      } while (lVar1 != lVar7);
    }
    FUN_00411268(auStack_d0,param_1 + 0x20);
    plVar8 = *(long **)(param_1 + 0x1e30);
    if (plVar8 != (long *)0x0) {
      (**(code **)*plVar8)(plVar8);
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 8))();
    }
    uVar12 = *(undefined8 *)(param_1 + 0x18);
    local_84 = 1;
    uVar13 = *(undefined8 *)(*(long *)(param_1 + 8) + 0xe0);
    local_68 = plVar8;
    if (*(int *)(*(long *)(param_1 + 8) + 0x500) == 1) {
      puVar10 = auStack_200;
      FUN_0042f4d0(auStack_200,&local_108);
      uVar12 = FUN_0042f794(uVar12,uVar13,auStack_200,*(undefined1 *)(param_1 + 0x3c));
    }
    else {
      puVar10 = auStack_2b0;
      FUN_0042f4d0(auStack_2b0,&local_108);
      uVar12 = FUN_0042f2bc(uVar12,uVar13,auStack_2b0,*(undefined1 *)(param_1 + 0x3c));
    }
    *(undefined8 *)(param_1 + 0x1d98) = uVar12;
    FUN_008420e8(puVar10);
    if (*(char *)(*(long *)(*(long *)(param_1 + 8) + 0x4d8) + 0x10) == '\0') {
      (**(code **)(**(long **)(param_1 + 0x1d98) + 0x68))
                (*(long **)(param_1 + 0x1d98),param_1 + 0x1d40);
    }
    if (*(long *)(param_1 + 0x1d98) != 0) {
      fVar14 = (float)NEON_fminnm(*(float *)(*(long *)(param_1 + 0x10) + 0x3a8) *
                                  *(float *)(param_1 + 0x1db8) * *(float *)(param_1 + 0x1dc4),
                                  0x41200000);
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      uVar6 = FUN_00417e08();
      if ((uVar6 & 1) == 0) {
        FUN_00623bb0((double)fVar14,&DAT_001f64af,
                     "../../discord_native_lib/src/media/remote_user.cpp",0xd01,
                     "RemoteUser::UpdateVolume ",param_1 + 0x20," effectiveGain: ");
      }
      (**(code **)(**(long **)(param_1 + 0x1d98) + 0x70))(fVar14);
    }
    lVar7 = *(long *)(param_1 + 0xa8);
    lVar11 = *(long *)(param_1 + 0xb0);
    local_130 = 0x3f800000;
    uStack_148 = 0;
    local_150 = (void *)0x0;
    uStack_138 = 0;
    local_140 = (void *)0x0;
    for (; lVar7 != lVar11; lVar7 = lVar7 + 0x40) {
      FUN_0048359c(&local_150,lVar7,lVar7);
    }
    FUN_00483be0(param_1 + 0x1dd8,&local_150);
    pvVar4 = local_150;
    puVar5 = (undefined8 *)local_140;
    while (puVar5 != (undefined8 *)0x0) {
      pvVar9 = (void *)*puVar5;
      local_150 = pvVar4;
      FUN_00441e1c(puVar5 + 7,puVar5[8]);
      if (*(char *)((long)puVar5 + 0x2f) < '\0') {
        operator_delete((void *)puVar5[3]);
      }
      operator_delete(puVar5);
      pvVar4 = local_150;
      puVar5 = (undefined8 *)pvVar9;
    }
    local_150 = (void *)0x0;
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
    FUN_008420e8(&local_108);
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0047d28c  FUN_0047d28c =====

void FUN_0047d28c(long param_1)

{
  long *plVar1;
  
  for (plVar1 = *(long **)(param_1 + 0x1d58); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_0047d2dc(param_1,plVar1 + 3);
    FUN_0047d3a4(param_1,plVar1 + 3);
  }
  return;
}


// ===== 0047d2dc  FUN_0047d2dc =====

bool FUN_0047d2dc(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  
  plVar4 = *(long **)(param_2 + 0x38);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
    FUN_004534dc(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(*(long *)(param_1 + 8) + 0xe0),
                 *(undefined8 *)(param_2 + 0x38));
    lVar2 = *(long *)(param_1 + 0x1e18);
    *(undefined8 *)(param_2 + 0x38) = 0;
    if (lVar2 != 0) {
      puVar1 = (undefined8 *)*(void **)(param_1 + 0x1e10);
      while (puVar1 != (undefined8 *)0x0) {
        pvVar5 = (void *)*puVar1;
        FUN_00441e1c(puVar1 + 6,puVar1[7]);
        if (*(char *)((long)puVar1 + 0x2f) < '\0') {
          operator_delete((void *)puVar1[3]);
        }
        operator_delete(puVar1);
        puVar1 = (undefined8 *)pvVar5;
      }
      lVar2 = *(long *)(param_1 + 0x1e08);
      *(undefined8 *)(param_1 + 0x1e10) = 0;
      if (lVar2 != 0) {
        lVar3 = 0;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x1e00) + lVar3 * 8) = 0;
          lVar3 = lVar3 + 1;
        } while (lVar2 != lVar3);
      }
      *(undefined8 *)(param_1 + 0x1e18) = 0;
    }
  }
  return plVar4 != (long *)0x0;
}


// ===== 0047d3a4  FUN_0047d3a4 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0047d3a4(long param_1,uint *param_2)

{
  long *plVar1;
  undefined8 ******ppppppuVar2;
  long *plVar3;
  long lVar4;
  byte *pbVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined8 *******pppppppuVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *******pppppppuVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  ulong uVar21;
  long *plVar22;
  void *pvVar23;
  byte *pbVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 *******pppppppuVar27;
  undefined2 uVar28;
  undefined8 uVar29;
  undefined1 auStack_288 [248];
  undefined8 *******local_190;
  undefined8 ******ppppppuStack_188;
  ulong local_180;
  undefined8 *******local_170;
  undefined8 ******ppppppuStack_168;
  void *local_160;
  long lStack_158;
  uint local_150;
  undefined4 local_14c;
  undefined4 local_148;
  uint local_134;
  long *local_120;
  undefined8 *******local_118;
  long local_110;
  long local_e8;
  undefined1 local_dc;
  undefined1 auStack_d8 [24];
  long *local_c0;
  undefined1 local_b4;
  undefined1 auStack_90 [24];
  long local_78;
  
  puVar12 = PTR_DAT_00d51bd8;
  lVar10 = tpidr_el0;
  local_78 = *(long *)(lVar10 + 0x28);
  if (*param_2 != 0) {
    plVar20 = *(long **)(param_1 + 0x48);
    plVar3 = *(long **)(param_1 + 0x50);
    local_190 = (undefined8 *******)0x0;
    ppppppuStack_188 = (undefined8 ******)0x0;
    local_180 = 0;
    if (plVar20 == plVar3) {
      local_150 = 0x3f800000;
      ppppppuStack_168 = (undefined8 ******)0x0;
      local_170 = (undefined8 *******)0x0;
      lStack_158 = 0;
      local_160 = (void *)0x0;
    }
    else {
      plVar22 = plVar20 + 5;
      plVar20 = plVar20 + 4;
      do {
        FUN_008450ac(&local_170);
        FUN_00411268(&local_170,plVar20 + -3);
        ppppppuVar2 = ppppppuStack_168;
        pppppppuVar15 = local_170;
        if (-1 < (long)local_160) {
          ppppppuVar2 = (undefined8 ******)((ulong)local_160 >> 0x38);
          pppppppuVar15 = &local_170;
        }
        if ((pppppppuVar15 == (undefined8 *******)0x0) && (ppppppuVar2 != (undefined8 ******)0x0)) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131
                     ,"__len == 0 || __s != nullptr",
                     "string_view::string_view(_CharT *, size_t): received nullptr");
        }
        uVar13 = FUN_0061ff84(pppppppuVar15,ppppppuVar2,&DAT_001f6638,4);
        if ((uVar13 & 1) != 0) {
          FUN_00547bf8(&local_170,puVar12);
        }
        local_110 = CONCAT44(local_110._4_4_,(uint)*(byte *)(plVar20 + -4));
        if (plVar20 != &lStack_158) {
          FUN_0046cff4(&lStack_158,*plVar20,plVar22);
        }
        ppppppuVar2 = ppppppuStack_188;
        if (ppppppuStack_188 < local_180) {
          if (ppppppuStack_188 == (undefined8 ******)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                       ,0x23,"__location != nullptr","null pointer given to construct_at");
          }
          FUN_00845110(ppppppuStack_188,&local_170);
          ppppppuStack_188 = (undefined8 ******)((long)ppppppuVar2 + 0x68);
        }
        else {
          FUN_00481c54(&local_190,&local_170);
        }
        thunk_FUN_007b6d78(&local_170);
        plVar1 = plVar20 + 3;
        plVar22 = plVar22 + 7;
        plVar20 = plVar20 + 7;
      } while (plVar1 != plVar3);
      lVar25 = *(long *)(param_1 + 0x48);
      lVar4 = *(long *)(param_1 + 0x50);
      local_150 = 0x3f800000;
      ppppppuStack_168 = (undefined8 ******)0x0;
      local_170 = (undefined8 *******)0x0;
      lStack_158 = 0;
      local_160 = (void *)0x0;
      for (; lVar25 != lVar4; lVar25 = lVar25 + 0x38) {
        FUN_004820ec(&local_170,lVar25,lVar25);
      }
    }
    FUN_00482720(param_1 + 0x1e00,&local_170);
    pppppppuVar15 = local_170;
    puVar11 = (undefined8 *)local_160;
    while (puVar11 != (undefined8 *)0x0) {
      pvVar23 = (void *)*puVar11;
      local_170 = pppppppuVar15;
      FUN_00441e1c(puVar11 + 6,puVar11[7]);
      if (*(char *)((long)puVar11 + 0x2f) < '\0') {
        operator_delete((void *)puVar11[3]);
      }
      operator_delete(puVar11);
      pppppppuVar15 = local_170;
      puVar11 = (undefined8 *)pvVar23;
    }
    local_170 = (undefined8 *******)0x0;
    if (pppppppuVar15 != (undefined8 *******)0x0) {
      operator_delete(pppppppuVar15);
    }
    FUN_00846a20(&local_170,*(undefined8 *)(param_1 + 0x1da8),0);
    pppppppuVar15 = local_170;
    ppppppuVar2 = ppppppuStack_168;
    if (local_170 != (undefined8 *******)0x0) {
      while ((undefined8 *******)ppppppuVar2 != pppppppuVar15) {
        thunk_FUN_007b6d78(ppppppuVar2 + -0xd);
        ppppppuVar2 = ppppppuVar2 + -0xd;
      }
      ppppppuStack_168 = pppppppuVar15;
      operator_delete(local_170);
    }
    local_160 = (void *)local_180;
    ppppppuStack_168 = ppppppuStack_188;
    local_170 = local_190;
    ppppppuStack_188 = (undefined8 ******)0x0;
    local_180 = 0;
    lStack_158 = *(long *)(param_1 + 8) + 0x6b0;
    local_150 = *param_2;
    local_190 = (undefined8 *******)0x0;
    local_14c = FUN_00469528(*(undefined8 *)(*(long *)(param_1 + 8) + 0x3d8));
    uVar6 = param_2[1];
    local_148 = 1000;
    if (uVar6 != 0) {
      pbVar24 = *(byte **)(param_1 + 0x48);
      pbVar5 = *(byte **)(param_1 + 0x50);
      local_134 = uVar6;
      if (pbVar24 != pbVar5) {
        do {
          bVar7 = *pbVar24;
          bVar8 = pbVar24[1];
          pppppppuVar15 = &local_118;
          pppppppuVar16 = local_118;
          while (pppppppuVar27 = pppppppuVar15, pppppppuVar16 != (undefined8 *******)0x0) {
            while( true ) {
              pppppppuVar14 = pppppppuVar16;
              pppppppuVar15 = pppppppuVar14;
              if ((int)(uint)bVar8 < *(int *)((long)pppppppuVar14 + 0x1c)) break;
              if ((int)(uint)bVar8 <= *(int *)((long)pppppppuVar14 + 0x1c)) goto LAB_0047d64c;
              pppppppuVar16 = (undefined8 *******)pppppppuVar14[1];
              if ((undefined8 *******)pppppppuVar14[1] == (undefined8 *******)0x0) {
                pppppppuVar27 = pppppppuVar14 + 1;
                goto LAB_0047d6a4;
              }
            }
            pppppppuVar16 = (undefined8 *******)*pppppppuVar14;
          }
LAB_0047d6a4:
          pppppppuVar14 = (undefined8 *******)operator_new(0x28);
          *(uint *)((long)pppppppuVar14 + 0x1c) = (uint)bVar8;
          *(undefined4 *)(pppppppuVar14 + 4) = 0;
          *pppppppuVar14 = (undefined8 ******)0x0;
          pppppppuVar14[1] = (undefined8 ******)0x0;
          pppppppuVar14[2] = pppppppuVar15;
          *pppppppuVar27 = pppppppuVar14;
          pppppppuVar15 = pppppppuVar14;
          if ((long *)*local_120 != (long *)0x0) {
            pppppppuVar15 = (undefined8 *******)*pppppppuVar27;
            local_120 = (long *)*local_120;
          }
          FUN_0041dcd0(local_118,pppppppuVar15);
          local_110 = local_110 + 1;
LAB_0047d64c:
          pbVar24 = pbVar24 + 0x38;
          *(uint *)(pppppppuVar14 + 4) = (uint)bVar7;
        } while (pbVar24 != pbVar5);
      }
    }
    uVar13 = *(ulong *)(param_1 + 0x1d78);
    if (uVar13 != 0) {
      uVar6 = *param_2;
      uVar18 = (ulong)uVar6;
      uVar29 = NEON_cnt(uVar13,1);
      uVar28 = NEON_uaddlv(uVar29,1);
      uVar17 = CONCAT62((int6)((ulong)uVar29 >> 0x10),uVar28) & 0xffffffff;
      if (uVar17 < 2) {
        uVar19 = (ulong)((int)uVar13 - 1U & uVar6);
      }
      else {
        uVar19 = uVar18;
        if (uVar13 <= uVar18) {
          uVar19 = 0;
          if (uVar13 != 0) {
            uVar19 = uVar18 / uVar13;
          }
          uVar19 = uVar18 - uVar19 * uVar13;
        }
      }
      plVar20 = *(long **)(*(long *)(param_1 + 0x1d70) + uVar19 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        do {
          uVar21 = plVar20[1];
          if (uVar21 == uVar18) {
            if (*(uint *)(plVar20 + 2) == uVar6) {
              lVar25 = plVar20[3];
              FUN_005467a4(lVar25 + 0x18);
              if (*(char *)(lVar25 + 0x60) == '\0') {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s:%d: assertion %s failed: %s",
                           "../../discord_common/native/third_party/llvm/libcxx/include/optional",
                           0x3b0,"this->has_value()",
                           "optional operator-> called on a disengaged value");
              }
              FUN_007b5a0c(lVar25 + 0x40,param_1,param_1,FUN_00482834);
              FUN_005467c8(lVar25 + 0x18);
              uVar13 = *(ulong *)(param_1 + 0x1d78);
              if (uVar13 == 0) goto LAB_0047d86c;
              uVar6 = *param_2;
              uVar18 = (ulong)uVar6;
              uVar29 = NEON_cnt(uVar13,1);
              uVar28 = NEON_uaddlv(uVar29,1);
              uVar17 = CONCAT62((int6)((ulong)uVar29 >> 0x10),uVar28) & 0xffffffff;
              if (uVar17 < 2) {
                uVar19 = (ulong)((int)uVar13 - 1U & uVar6);
              }
              else {
                uVar19 = uVar18;
                if (uVar13 <= uVar18) {
                  uVar19 = 0;
                  if (uVar13 != 0) {
                    uVar19 = uVar18 / uVar13;
                  }
                  uVar19 = uVar18 - uVar19 * uVar13;
                }
              }
              plVar20 = *(long **)(*(long *)(param_1 + 0x1d70) + uVar19 * 8);
              if ((plVar20 == (long *)0x0) || (plVar20 = (long *)*plVar20, plVar20 == (long *)0x0))
              goto LAB_0047d86c;
              goto LAB_0047d838;
            }
          }
          else {
            if (uVar17 < 2) {
              uVar21 = uVar21 & uVar13 - 1;
            }
            else if (uVar13 <= uVar21) {
              uVar9 = 0;
              if (uVar13 != 0) {
                uVar9 = uVar21 / uVar13;
              }
              uVar21 = uVar21 - uVar9 * uVar13;
            }
            if (uVar21 != uVar19) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
                    /* WARNING: Subroutine does not return */
    abort();
  }
LAB_0047d950:
  if (*(long *)(lVar10 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_0047d838:
  do {
    uVar21 = plVar20[1];
    if (uVar21 == uVar18) {
      if (*(uint *)(plVar20 + 2) == uVar6) {
        local_dc = 0;
        local_e8 = 0;
        if (plVar20[3] != 0) {
          local_e8 = plVar20[3] + 0x440;
        }
        FUN_00411268(auStack_90,param_2 + 8);
        FUN_00411268(auStack_d8,param_1 + 0x20);
        plVar20 = *(long **)(param_1 + 0x1e30);
        if (plVar20 != (long *)0x0) {
          (**(code **)*plVar20)(plVar20);
        }
        if (local_c0 != (long *)0x0) {
          (**(code **)(*local_c0 + 8))();
        }
        uVar29 = *(undefined8 *)(param_1 + 0x10);
        uVar26 = *(undefined8 *)(*(long *)(param_1 + 8) + 0xe0);
        local_b4 = 1;
        local_c0 = plVar20;
        FUN_00846884(auStack_288,&local_170);
        uVar29 = FUN_0045334c(uVar29,uVar26,auStack_288);
        *(undefined8 *)(param_2 + 0xe) = uVar29;
        FUN_00846ac4(auStack_288);
        FUN_00846ac4(&local_170);
        pppppppuVar15 = local_190;
        ppppppuVar2 = ppppppuStack_188;
        if (local_190 != (undefined8 *******)0x0) {
          while ((undefined8 *******)ppppppuVar2 != pppppppuVar15) {
            thunk_FUN_007b6d78(ppppppuVar2 + -0xd);
            ppppppuVar2 = ppppppuVar2 + -0xd;
          }
          ppppppuStack_188 = pppppppuVar15;
          operator_delete(local_190);
        }
        goto LAB_0047d950;
      }
    }
    else {
      if (uVar17 < 2) {
        uVar21 = uVar21 & uVar13 - 1;
      }
      else if (uVar13 <= uVar21) {
        uVar9 = 0;
        if (uVar13 != 0) {
          uVar9 = uVar21 / uVar13;
        }
        uVar21 = uVar21 - uVar9 * uVar13;
      }
      if (uVar21 != uVar19) break;
    }
    plVar20 = (long *)*plVar20;
  } while (plVar20 != (long *)0x0);
LAB_0047d86c:
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0047d9fc  FUN_0047d9fc =====

void FUN_0047d9fc(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c[0] = '\0';
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[3];
  *(undefined4 *)(param_1 + 0x1e3c) = *(undefined4 *)(param_2 + 2);
  FUN_00485e48(param_1,uVar2,uVar3,uVar4);
  FUN_0043a8e0(*(undefined8 *)(param_1 + 8),param_1 + 0x20,*param_2,param_2[1],
               *(undefined4 *)(param_2 + 2),param_2[3],*(undefined4 *)(param_2 + 4),local_3c);
  if (local_3c[0] != '\0') {
    memset((void *)*param_2,0,param_2[3] * param_2[1] * 2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0047daa8  FUN_0047daa8 =====

void FUN_0047daa8(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c[0] = '\0';
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[3];
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 2);
  FUN_00485e48(param_1 + -0x1d40,uVar2,uVar3,uVar4);
  FUN_0043a8e0(*(undefined8 *)(param_1 + -0x1d38),param_1 + -0x1d20,*param_2,param_2[1],
               *(undefined4 *)(param_2 + 2),param_2[3],*(undefined4 *)(param_2 + 4),local_3c);
  if (local_3c[0] != '\0') {
    memset((void *)*param_2,0,param_2[3] * param_2[1] * 2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0047db64  FUN_0047db64 =====

void FUN_0047db64(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  void *pvVar8;
  code *pcVar9;
  long lVar10;
  long *plVar11;
  void *pvVar12;
  void *pvVar13;
  undefined4 *local_60;
  undefined4 *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  plVar11 = *(long **)(param_1 + 0x1d58);
  local_60 = (undefined4 *)0x0;
  local_58 = (undefined4 *)0x0;
  local_50 = 0;
  if (plVar11 != (long *)0x0) {
    do {
      FUN_0047de38(&local_60,plVar11 + 2);
      puVar7 = local_58;
      plVar11 = (long *)*plVar11;
      puVar5 = local_60;
    } while (plVar11 != (long *)0x0);
    for (; puVar5 != puVar7; puVar5 = puVar5 + 1) {
      FUN_0047df80(param_1,*puVar5);
    }
  }
  FUN_0047e44c(param_1);
  FUN_004a225c(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x450),*(undefined4 *)(param_1 + 0x38),0)
  ;
  if (local_60 != (undefined4 *)0x0) {
    local_58 = local_60;
    operator_delete(local_60);
  }
  FUN_004312b4((undefined8 *)(param_1 + 0x1ec0));
  pvVar12 = *(void **)(param_1 + 0x1ec0);
  if (pvVar12 != (void *)0x0) {
    pvVar13 = pvVar12;
    pvVar8 = *(void **)(param_1 + 0x1ec8);
    if (*(void **)(param_1 + 0x1ec8) != pvVar12) {
      do {
        pvVar13 = (void *)((long)pvVar8 + -0x20);
        pcVar9 = *(code **)(*(long *)((long)pvVar8 + -8) + 8);
        if (pcVar9 != (code *)0x0) {
          (*pcVar9)(*(undefined8 *)((long)pvVar8 + -0x20));
        }
        pvVar8 = pvVar13;
      } while (pvVar13 != pvVar12);
      pvVar13 = *(void **)(param_1 + 0x1ec0);
    }
    *(void **)(param_1 + 0x1ec8) = pvVar12;
    operator_delete(pvVar13);
  }
  if (*(long **)(param_1 + 0x1e30) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1e30) + 8))();
  }
  puVar6 = (undefined8 *)*(void **)(param_1 + 0x1e10);
  while (puVar6 != (undefined8 *)0x0) {
    pvVar12 = (void *)*puVar6;
    FUN_00441e1c(puVar6 + 6,puVar6[7]);
    if (*(char *)((long)puVar6 + 0x2f) < '\0') {
      operator_delete((void *)puVar6[3]);
    }
    operator_delete(puVar6);
    puVar6 = (undefined8 *)pvVar12;
  }
  pvVar12 = *(void **)(param_1 + 0x1e00);
  *(undefined8 *)(param_1 + 0x1e00) = 0;
  if (pvVar12 != (void *)0x0) {
    operator_delete(pvVar12);
  }
  puVar6 = (undefined8 *)*(void **)(param_1 + 0x1de8);
  while (puVar6 != (undefined8 *)0x0) {
    pvVar12 = (void *)*puVar6;
    FUN_00441e1c(puVar6 + 7,puVar6[8]);
    if (*(char *)((long)puVar6 + 0x2f) < '\0') {
      operator_delete((void *)puVar6[3]);
    }
    operator_delete(puVar6);
    puVar6 = (undefined8 *)pvVar12;
  }
  pvVar12 = *(void **)(param_1 + 0x1dd8);
  *(undefined8 *)(param_1 + 0x1dd8) = 0;
  if (pvVar12 != (void *)0x0) {
    operator_delete(pvVar12);
  }
  plVar11 = *(long **)(param_1 + 0x1db0);
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 1;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      FUN_005466cc(plVar11);
    }
  }
  puVar6 = (undefined8 *)*(void **)(param_1 + 0x1d80);
  while (puVar6 != (undefined8 *)0x0) {
    plVar11 = (long *)puVar6[4];
    pvVar12 = (void *)*puVar6;
    if (plVar11 != (long *)0x0) {
      plVar1 = plVar11 + 1;
      do {
        lVar10 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        FUN_005466cc(plVar11);
      }
    }
    operator_delete(puVar6);
    puVar6 = (undefined8 *)pvVar12;
  }
  pvVar12 = *(void **)(param_1 + 0x1d70);
  *(undefined8 *)(param_1 + 0x1d70) = 0;
  if (pvVar12 != (void *)0x0) {
    operator_delete(pvVar12);
  }
  puVar6 = (undefined8 *)*(void **)(param_1 + 0x1d58);
  while (puVar6 != (undefined8 *)0x0) {
    pvVar12 = (void *)*puVar6;
    if (*(char *)((long)puVar6 + 0x4f) < '\0') {
      operator_delete((void *)puVar6[7]);
      cVar2 = *(char *)((long)puVar6 + 0x37);
    }
    else {
      cVar2 = *(char *)((long)puVar6 + 0x37);
    }
    if (cVar2 < '\0') {
      operator_delete((void *)puVar6[4]);
    }
    operator_delete(puVar6);
    puVar6 = (undefined8 *)pvVar12;
  }
  pvVar12 = *(void **)(param_1 + 0x1d48);
  *(undefined8 *)(param_1 + 0x1d48) = 0;
  if (pvVar12 != (void *)0x0) {
    operator_delete(pvVar12);
  }
  FUN_00485d58(param_1);
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0047de38  FUN_0047de38 =====

undefined4 * FUN_0047de38(undefined8 *param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *__dest;
  ulong uVar4;
  ulong uVar5;
  void *__src;
  long lVar6;
  undefined4 *puVar7;
  
  puVar3 = (undefined4 *)param_1[1];
  if (puVar3 < (undefined4 *)param_1[2]) {
    if (puVar3 == (undefined4 *)0x0) {
LAB_0047df50:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                 ,0x23,"__location != nullptr","null pointer given to construct_at");
    }
    puVar7 = puVar3 + 1;
    *puVar3 = *param_2;
    param_1[1] = puVar7;
  }
  else {
    __src = (void *)*param_1;
    lVar6 = (long)puVar3 - (long)__src >> 2;
    uVar1 = lVar6 + 1;
    if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar4 = (long)param_1[2] - (long)__src;
    uVar5 = uVar4 >> 1;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar4) {
      uVar5 = 0x3fffffffffffffff;
    }
    if (uVar5 == 0) goto LAB_0047df50;
    if (uVar5 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
    __dest = operator_new(uVar5 * 4);
    puVar2 = (undefined4 *)((long)__dest + lVar6 * 4);
    puVar7 = puVar2 + 1;
    *puVar2 = *param_2;
    memmove(__dest,__src,(long)puVar3 - (long)__src);
    *param_1 = __dest;
    param_1[1] = puVar7;
    param_1[2] = (void *)((long)__dest + uVar5 * 4);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      puVar7 = (undefined4 *)param_1[1];
    }
  }
  if ((undefined4 *)*param_1 != puVar7) {
    return puVar7 + -1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,"!empty()",
             "back() called on an empty vector");
}


// ===== 0047df80  FUN_0047df80 =====

/* WARNING: Removing unreachable block (ram,0x0047e3c8) */

void FUN_0047df80(long param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined4 uVar11;
  ulong uVar12;
  long lVar13;
  undefined2 uVar14;
  undefined8 uVar15;
  void *local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  undefined8 uStack_78;
  long local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (param_2 == 0) goto LAB_0047e3f0;
  uVar5 = *(ulong *)(param_1 + 0x1d50);
  if (uVar5 != 0) {
    plVar1 = (long *)(param_1 + 0x1d48);
    uVar12 = (ulong)param_2;
    uVar15 = NEON_cnt(uVar5,1);
    uVar14 = NEON_uaddlv(uVar15,1);
    uVar6 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
    if (uVar6 < 2) {
      uVar8 = (ulong)((int)uVar5 - 1U & param_2);
    }
    else {
      uVar8 = uVar12;
      if (uVar5 <= uVar12) {
        uVar8 = 0;
        if (uVar5 != 0) {
          uVar8 = uVar12 / uVar5;
        }
        uVar8 = uVar12 - uVar8 * uVar5;
      }
    }
    plVar7 = *(long **)(*plVar1 + uVar8 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar10 = plVar7[1];
        if (uVar10 == uVar12) {
          if (*(uint *)(plVar7 + 2) == param_2) {
            if (uVar6 < 2) {
              uVar8 = (ulong)((int)uVar5 - 1U & param_2);
            }
            else {
              uVar8 = uVar12;
              if (uVar5 <= uVar12) {
                uVar8 = 0;
                if (uVar5 != 0) {
                  uVar8 = uVar12 / uVar5;
                }
                uVar8 = uVar12 - uVar8 * uVar5;
              }
            }
            plVar7 = *(long **)(*plVar1 + uVar8 * 8);
            if ((plVar7 == (long *)0x0) || (plVar7 = (long *)*plVar7, plVar7 == (long *)0x0))
            goto LAB_0047e0f0;
            goto LAB_0047e0bc;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar10 = uVar10 & uVar5 - 1;
          }
          else if (uVar5 <= uVar10) {
            uVar3 = 0;
            if (uVar5 != 0) {
              uVar3 = uVar10 / uVar5;
            }
            uVar10 = uVar10 - uVar3 * uVar5;
          }
          if (uVar10 != uVar8) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  goto LAB_0047e348;
  while (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0) {
LAB_0047e0bc:
    uVar10 = plVar7[1];
    if (uVar10 == uVar12) {
      if (*(uint *)(plVar7 + 2) == param_2) {
        FUN_0047d2dc(param_1,plVar7 + 3);
        uVar5 = *(ulong *)(param_1 + 0x1d78);
        plVar2 = (long *)(param_1 + 0x1d70);
        if (uVar5 == 0) goto LAB_0047e1dc;
        uVar15 = NEON_cnt(uVar5,1);
        uVar14 = NEON_uaddlv(uVar15,1);
        uVar6 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
        if (uVar6 < 2) {
          uVar8 = (ulong)((int)uVar5 - 1U & param_2);
        }
        else {
          uVar8 = uVar12;
          if (uVar5 <= uVar12) {
            uVar8 = 0;
            if (uVar5 != 0) {
              uVar8 = uVar12 / uVar5;
            }
            uVar8 = uVar12 - uVar8 * uVar5;
          }
        }
        plVar9 = *(long **)(*plVar2 + uVar8 * 8);
        if ((plVar9 == (long *)0x0) || (plVar9 = (long *)*plVar9, plVar9 == (long *)0x0))
        goto LAB_0047e1dc;
        goto LAB_0047e178;
      }
    }
    else {
      if (uVar6 < 2) {
        uVar10 = uVar10 & uVar5 - 1;
      }
      else if (uVar5 <= uVar10) {
        uVar3 = 0;
        if (uVar5 != 0) {
          uVar3 = uVar10 / uVar5;
        }
        uVar10 = uVar10 - uVar3 * uVar5;
      }
      if (uVar10 != uVar8) break;
    }
  }
LAB_0047e0f0:
                    /* WARNING: Subroutine does not return */
  abort();
LAB_0047e178:
  do {
    uVar10 = plVar9[1];
    if (uVar10 == uVar12) {
      if (*(uint *)(plVar9 + 2) == param_2) {
        lVar13 = plVar9[3];
        FUN_005467a4(lVar13 + 0x18);
        if (*(char *)(lVar13 + 0x60) == '\0') {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
                     "this->has_value()","optional operator-> called on a disengaged value");
        }
        FUN_007b5df8(lVar13 + 0x40,param_1);
        FUN_005467c8(lVar13 + 0x18);
        break;
      }
    }
    else {
      if (uVar6 < 2) {
        uVar10 = uVar10 & uVar5 - 1;
      }
      else if (uVar5 <= uVar10) {
        uVar3 = 0;
        if (uVar5 != 0) {
          uVar3 = uVar10 / uVar5;
        }
        uVar10 = uVar10 - uVar3 * uVar5;
      }
      if (uVar10 != uVar8) break;
    }
    plVar9 = (long *)*plVar9;
  } while (plVar9 != (long *)0x0);
LAB_0047e1dc:
  FUN_0045138c(*(undefined8 *)(param_1 + 0x10),plVar7 + 7);
  uVar5 = *(ulong *)(param_1 + 0x1d78);
  if (uVar5 != 0) {
    uVar15 = NEON_cnt(uVar5,1);
    uVar14 = NEON_uaddlv(uVar15,1);
    uVar6 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
    if (uVar6 < 2) {
      uVar8 = (ulong)((int)uVar5 - 1U & param_2);
    }
    else {
      uVar8 = uVar12;
      if (uVar5 <= uVar12) {
        uVar8 = 0;
        if (uVar5 != 0) {
          uVar8 = uVar12 / uVar5;
        }
        uVar8 = uVar12 - uVar8 * uVar5;
      }
    }
    plVar7 = *(long **)(*plVar2 + uVar8 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar10 = plVar7[1];
        if (uVar10 == uVar12) {
          if (*(uint *)(plVar7 + 2) == param_2) {
            FUN_0048309c(plVar2);
            break;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar10 = uVar10 & uVar5 - 1;
          }
          else if (uVar5 <= uVar10) {
            uVar3 = 0;
            if (uVar5 != 0) {
              uVar3 = uVar10 / uVar5;
            }
            uVar10 = uVar10 - uVar3 * uVar5;
          }
          if (uVar10 != uVar8) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  uVar5 = *(ulong *)(param_1 + 0x1d50);
  if (uVar5 != 0) {
    uVar15 = NEON_cnt(uVar5,1);
    uVar14 = NEON_uaddlv(uVar15,1);
    uVar6 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
    if (uVar6 < 2) {
      uVar8 = (ulong)((int)uVar5 - 1U & param_2);
    }
    else {
      uVar8 = uVar12;
      if (uVar5 <= uVar12) {
        uVar8 = 0;
        if (uVar5 != 0) {
          uVar8 = uVar12 / uVar5;
        }
        uVar8 = uVar12 - uVar8 * uVar5;
      }
    }
    plVar7 = *(long **)(*plVar1 + uVar8 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar10 = plVar7[1];
        if (uVar10 == uVar12) {
          if (*(uint *)(plVar7 + 2) == param_2) {
            FUN_004832a8(plVar1);
            break;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar10 = uVar10 & uVar5 - 1;
          }
          else if (uVar5 <= uVar10) {
            uVar3 = 0;
            if (uVar5 != 0) {
              uVar3 = uVar10 / uVar5;
            }
            uVar10 = uVar10 - uVar3 * uVar5;
          }
          if (uVar10 != uVar8) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
LAB_0047e348:
  local_80 = (void *)0x0;
  uStack_78 = 0;
  local_70 = 0;
  if (*(long *)(param_1 + 0x1d60) == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined4 *)(*(long *)(param_1 + 0x1d58) + 0x18);
    FUN_00411268(&local_80,*(long *)(param_1 + 0x1d58) + 0x38);
  }
  local_98 = (void *)0x0;
  local_90 = (void *)0x0;
  local_88 = 0;
  FUN_0043abc4(*(undefined8 *)(param_1 + 8),param_1 + 0x20,uVar11,&local_80,&local_98);
  if (local_98 != (void *)0x0) {
    for (; local_90 != local_98; local_90 = (void *)((long)local_90 + -0x48)) {
    }
    local_90 = local_98;
    operator_delete(local_98);
  }
  if (local_70 < 0) {
    operator_delete(local_80);
  }
LAB_0047e3f0:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0047e44c  FUN_0047e44c =====

void FUN_0047e44c(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  plVar2 = *(long **)(param_1 + 0x1d98);
  if (plVar2 != (long *)0x0) {
    lVar3 = *(long *)(param_1 + 8);
    if (*(char *)(*(long *)(lVar3 + 0x4d8) + 0x10) == '\0') {
      (**(code **)(*plVar2 + 0x68))(plVar2,0);
      lVar3 = *(long *)(param_1 + 8);
      plVar2 = *(long **)(param_1 + 0x1d98);
    }
    FUN_0042f81c(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(lVar3 + 0xe0),plVar2);
    *(undefined8 *)(param_1 + 0x1d98) = 0;
    if (*(long *)(param_1 + 0x1df0) != 0) {
      puVar1 = (undefined8 *)*(void **)(param_1 + 0x1de8);
      while (puVar1 != (undefined8 *)0x0) {
        pvVar5 = (void *)*puVar1;
        FUN_00441e1c(puVar1 + 7,puVar1[8]);
        if (*(char *)((long)puVar1 + 0x2f) < '\0') {
          operator_delete((void *)puVar1[3]);
        }
        operator_delete(puVar1);
        puVar1 = (undefined8 *)pvVar5;
      }
      lVar3 = *(long *)(param_1 + 0x1de0);
      *(undefined8 *)(param_1 + 0x1de8) = 0;
      if (lVar3 != 0) {
        lVar4 = 0;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x1dd8) + lVar4 * 8) = 0;
          lVar4 = lVar4 + 1;
        } while (lVar3 != lVar4);
      }
      *(undefined8 *)(param_1 + 0x1df0) = 0;
    }
  }
  return;
}


// ===== 0047e520  FUN_0047e520 =====

void FUN_0047e520(long param_1)

{
  FUN_0047db64(param_1 + -0x1d40);
  return;
}


// ===== 0047e52c  FUN_0047e52c =====

void FUN_0047e52c(void *param_1)

{
  FUN_0047db64();
  operator_delete(param_1);
  return;
}


// ===== 0047e550  FUN_0047e550 =====

void FUN_0047e550(long param_1)

{
  FUN_0047db64((void *)(param_1 + -0x1d40));
  operator_delete((void *)(param_1 + -0x1d40));
  return;
}


// ===== 0047e57c  FUN_0047e57c =====

void FUN_0047e57c(long param_1,byte *param_2,undefined8 param_3,undefined8 param_4,uint param_5,
                 long *param_6)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_1a0 [16];
  code *local_190;
  code *pcStack_188;
  undefined1 auStack_178 [144];
  undefined1 auStack_e8 [144];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((param_5 & 1) == 0) {
    uVar1 = ((uint)(*(ushort *)(param_2 + 2) >> 8) | (*(ushort *)(param_2 + 2) & 0xff00ff) << 8) -
            (uint)*(ushort *)(param_1 + 0x1e28);
    *(ushort *)(param_2 + 2) = (ushort)(uVar1 >> 8) & 0xff | (ushort)((uVar1 & 0xff00ff) << 8);
    *(undefined1 *)(param_1 + 0x1dd1) = 0;
    if ((*param_2 >> 4 & 1) != 0) {
      uVar7 = FUN_005106fc(param_2,param_3);
      FUN_00510774(auStack_e8,uVar7);
      while (uVar4 = FUN_00510894(auStack_e8), (uVar4 & 1) != 0) {
        cVar3 = FUN_005107e4(auStack_e8);
        if ((cVar3 == '\t') && (lVar5 = FUN_0051081c(auStack_e8), lVar5 == 1)) {
          puVar6 = (undefined1 *)FUN_00510860(auStack_e8);
          *(undefined1 *)(param_1 + 0x1dd1) = *puVar6;
        }
        FUN_00510918(auStack_e8);
      }
    }
    uVar4 = FUN_00510a9c(param_2,param_3);
    if ((uVar4 & 1) == 0) {
      uVar7 = FUN_005183d8();
      *(undefined8 *)(param_1 + 0x1dc8) = uVar7;
      *(undefined1 *)(param_1 + 0x1dd0) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x1dd0) = 0;
    }
    if (param_6 != (long *)0x0) {
      uVar7 = FUN_004846b8();
      FUN_007dc060(auStack_e8,uVar7,param_4);
      FUN_007da040(auStack_e8,param_2,param_3);
      FUN_007dc0a0(auStack_178,auStack_e8);
      local_190 = FUN_004473ec;
      pcStack_188 = FUN_004820dc;
      (**(code **)(*param_6 + 8))(param_6,0,auStack_178,auStack_1a0);
      (*local_190)(0,auStack_1a0,auStack_1a0);
      FUN_007dc1b4(auStack_178);
      FUN_007dc1b4(auStack_e8);
    }
  }
  else {
    *(short *)(param_1 + 0x1e28) = *(short *)(param_1 + 0x1e28) + 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0047e750  FUN_0047e750 =====

void FUN_0047e750(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_1a0 [16];
  code *local_190;
  code *pcStack_188;
  undefined1 auStack_178 [144];
  undefined1 auStack_e8 [144];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_5 != (long *)0x0) {
    pcVar1 = (char *)(param_1 + 0x1e68);
    if (*pcVar1 == '\0') {
      lVar3 = FUN_005183d8();
      if (*pcVar1 == '\0') {
        *pcVar1 = '\x01';
      }
      *(long *)(param_1 + 0x1e60) = lVar3 / 1000000;
    }
    uVar4 = FUN_004846b8();
    FUN_007dc060(auStack_e8,uVar4,param_4);
    FUN_007da040(auStack_e8,param_2,param_3);
    FUN_007dc0a0(auStack_178,auStack_e8);
    local_190 = FUN_004473ec;
    pcStack_188 = FUN_004820e4;
    (**(code **)(*param_5 + 8))(param_5,1,auStack_178,auStack_1a0);
    (*local_190)(0,auStack_1a0,auStack_1a0);
    FUN_007dc1b4(auStack_178);
    FUN_007dc1b4(auStack_e8);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0047e888  FUN_0047e888 =====

void FUN_0047e888(float param_1,long param_2)

{
  ulong uVar1;
  float fVar2;
  
  *(float *)(param_2 + 0x1db8) = param_1;
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0((double)param_1,&DAT_001f64af,"../../discord_native_lib/src/media/remote_user.cpp",
                 0xb41,"RemoteUser::SetVolume ",param_2 + 0x20," level: ");
  }
  if (*(long *)(param_2 + 0x1d98) != 0) {
    fVar2 = (float)NEON_fminnm(*(float *)(*(long *)(param_2 + 0x10) + 0x3a8) *
                               *(float *)(param_2 + 0x1db8) * *(float *)(param_2 + 0x1dc4),
                               0x41200000);
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    uVar1 = FUN_00417e08();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0((double)fVar2,&DAT_001f64af,"../../discord_native_lib/src/media/remote_user.cpp",
                   0xd01,"RemoteUser::UpdateVolume ",param_2 + 0x20," effectiveGain: ");
    }
                    /* WARNING: Could not recover jumptable at 0x0047e960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_2 + 0x1d98) + 0x70))(fVar2);
    return;
  }
  return;
}


// ===== 0047e974  FUN_0047e974 =====

void FUN_0047e974(float param_1,long param_2)

{
  ulong uVar1;
  float fVar2;
  
  *(float *)(param_2 + 0x1dc4) = param_1;
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0((double)param_1,&DAT_001f64af,"../../discord_native_lib/src/media/remote_user.cpp",
                 0xb79,"RemoteUser::SetPriorityLevel ",param_2 + 0x20," level: ");
  }
  if (*(long *)(param_2 + 0x1d98) != 0) {
    fVar2 = (float)NEON_fminnm(*(float *)(*(long *)(param_2 + 0x10) + 0x3a8) *
                               *(float *)(param_2 + 0x1db8) * *(float *)(param_2 + 0x1dc4),
                               0x41200000);
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    uVar1 = FUN_00417e08();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0((double)fVar2,&DAT_001f64af,"../../discord_native_lib/src/media/remote_user.cpp",
                   0xd01,"RemoteUser::UpdateVolume ",param_2 + 0x20," effectiveGain: ");
    }
                    /* WARNING: Could not recover jumptable at 0x0047ea4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_2 + 0x1d98) + 0x70))(fVar2);
    return;
  }
  return;
}


// ===== 0047ea60  FUN_0047ea60 =====

void FUN_0047ea60(long param_1,byte param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  
  bVar1 = param_2 & 1;
  uVar3 = FUN_00417e08();
  if ((uVar3 & 1) == 0) {
    FUN_00623bb0(&DAT_001f614e,"../../discord_native_lib/src/media/remote_user.cpp",0xba9,
                 "RemoteUser::SetMute ",param_1 + 0x20," muted: ",bVar1);
  }
  if (*(byte *)(param_1 + 0x3c) != bVar1) {
    *(byte *)(param_1 + 0x3c) = bVar1;
    if (*(long **)(param_1 + 0x1d98) != (long *)0x0) {
      lVar2 = 0x18;
      if ((param_2 & 1) == 0) {
        lVar2 = 0x10;
      }
                    /* WARNING: Could not recover jumptable at 0x0047eaf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x1d98) + lVar2))();
      return;
    }
  }
  return;
}


// ===== 0047eb04  FUN_0047eb04 =====

void FUN_0047eb04(float param_1,float param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  undefined1 auStack_58 [8];
  char *local_50;
  undefined8 uStack_48;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    local_40 = auStack_58;
    local_50 = "../../discord_native_lib/src/media/remote_user.cpp";
    uStack_48 = 0xc29;
    FUN_00623bb0((double)param_1,(double)param_2,&DAT_001f6b10,
                 "../../discord_native_lib/src/media/remote_user.cpp",0xc29,"RemoteUser::SetPan ",
                 param_3 + 0x20," left: "," right: ");
  }
  *(float *)(param_3 + 0x1dbc) = param_1;
  *(float *)(param_3 + 0x1dc0) = param_2;
  if (*(long *)(param_3 + 0x1d98) != 0) {
    fVar3 = (float)NEON_fminnm(*(float *)(*(long *)(param_3 + 0x10) + 0x3a8) *
                               *(float *)(param_3 + 0x1db8) * *(float *)(param_3 + 0x1dc4),
                               0x41200000);
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0((double)fVar3,&DAT_001f64af,"../../discord_native_lib/src/media/remote_user.cpp",
                   0xd01,"RemoteUser::UpdateVolume ",param_3 + 0x20," effectiveGain: ");
    }
    (**(code **)(**(long **)(param_3 + 0x1d98) + 0x70))(fVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0047ec38  FUN_0047ec38 =====

void FUN_0047ec38(long param_1,int param_2)

{
  if ((param_2 != 0) && (*(int *)(param_1 + 0x1da0) != param_2)) {
    FUN_0047e44c(param_1);
    *(int *)(param_1 + 0x1da0) = param_2;
    FUN_0047ce9c(param_1);
    return;
  }
  return;
}


// ===== 0047ec84  thunk_FUN_0047ec88 =====

/* WARNING: Removing unreachable block (ram,0x0047f5f4) */
/* WARNING: Removing unreachable block (ram,0x0047f52c) */
/* WARNING: Removing unreachable block (ram,0x0047f620) */
/* WARNING: Removing unreachable block (ram,0x0047f6b4) */
/* WARNING: Removing unreachable block (ram,0x0047f6c0) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_0047ec88(long param_1,uint param_2)

{
  long *plVar1;
  char *pcVar2;
  char *******pppppppcVar3;
  char *******pppppppcVar4;
  char *******__src;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  char *pcVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  byte bVar17;
  ulong uVar18;
  char *******pppppppcVar19;
  ulong uVar20;
  long *plVar21;
  char *pcVar22;
  ulong uVar23;
  char *pcVar24;
  char *pcVar25;
  ulong uVar26;
  ulong unaff_x28;
  undefined2 uVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  undefined8 uStack_120;
  void *pvStack_118;
  undefined8 uStack_110;
  long lStack_108;
  char *******pppppppcStack_100;
  char *******pppppppcStack_f8;
  char cStack_e9;
  char *******pppppppcStack_d8;
  char *pcStack_d0;
  ulong uStack_c8;
  char *******pppppppcStack_c0;
  char *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  char *******pppppppcStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [28];
  uint uStack_74;
  long lStack_70;
  
  lVar8 = tpidr_el0;
  lStack_70 = *(long *)(lVar8 + 0x28);
  uStack_74 = param_2;
  if (param_2 == 0) goto LAB_0047f664;
  uVar14 = *(ulong *)(param_1 + 0x1d50);
  if (uVar14 != 0) {
    uVar18 = (ulong)param_2;
    uVar29 = NEON_cnt(uVar14,1);
    uVar27 = NEON_uaddlv(uVar29,1);
    uVar26 = CONCAT62((int6)((ulong)uVar29 >> 0x10),uVar27) & 0xffffffff;
    if (uVar26 < 2) {
      uVar20 = (ulong)((int)uVar14 - 1U & param_2);
    }
    else {
      uVar20 = uVar18;
      if (uVar14 <= uVar18) {
        uVar20 = 0;
        if (uVar14 != 0) {
          uVar20 = uVar18 / uVar14;
        }
        uVar20 = uVar18 - uVar20 * uVar14;
      }
    }
    plVar21 = *(long **)(*(long *)(param_1 + 0x1d48) + uVar20 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      do {
        uVar23 = plVar21[1];
        if (uVar23 == uVar18) {
          if (*(uint *)(plVar21 + 2) == param_2) goto LAB_0047f664;
        }
        else {
          if (uVar26 < 2) {
            uVar23 = uVar23 & uVar14 - 1;
          }
          else if (uVar14 <= uVar23) {
            uVar7 = 0;
            if (uVar14 != 0) {
              uVar7 = uVar23 / uVar14;
            }
            uVar23 = uVar23 - uVar7 * uVar14;
          }
          if (uVar23 != uVar20) break;
        }
        plVar21 = (long *)*plVar21;
      } while (plVar21 != (long *)0x0);
    }
  }
  plVar1 = (long *)(param_1 + 0x1d70);
  plVar11 = (long *)operator_new(0x468);
  plVar21 = plVar11 + 3;
  *plVar11 = (long)&PTR_FUN_00d1d4a8;
  plVar12 = plVar11 + 1;
  *plVar12 = 0;
  plVar16 = plVar11 + 2;
  *plVar16 = 0;
  memset(plVar21,0,0x450);
  FUN_0048288c(plVar21);
  plVar11[3] = (long)&PTR_thunk_FUN_004bc7c8_00d1d4e0;
  plVar11[0x8b] = (long)&PTR_FUN_00d1d5a0;
  plVar11[0x8c] = 0x7fffffff7fffffff;
  if (plVar11[5] == 0) {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = *plVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *plVar16 = *plVar16 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar11[4] = (long)plVar21;
    plVar11[5] = (long)plVar11;
LAB_0047ee3c:
    do {
      lVar15 = *plVar12;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      FUN_005466cc(plVar11);
    }
  }
  else if (*(long *)(plVar11[5] + 8) == -1) {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = *plVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *plVar16 = *plVar16 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar11[4] = (long)plVar21;
    plVar11[5] = (long)plVar11;
    FUN_005466cc();
    goto LAB_0047ee3c;
  }
  uVar9 = uStack_74;
  uVar14 = *(ulong *)(param_1 + 0x1d78);
  uVar26 = (ulong)uStack_74;
  if (uVar14 != 0) {
    uVar29 = NEON_cnt(uVar14,1);
    uVar27 = NEON_uaddlv(uVar29,1);
    uVar18 = CONCAT62((int6)((ulong)uVar29 >> 0x10),uVar27) & 0xffffffff;
    if (uVar18 < 2) {
      unaff_x28 = (ulong)((int)uVar14 - 1U & uStack_74);
    }
    else {
      unaff_x28 = uVar26;
      if (uVar14 <= uVar26) {
        uVar20 = 0;
        if (uVar14 != 0) {
          uVar20 = uVar26 / uVar14;
        }
        unaff_x28 = uVar26 - uVar20 * uVar14;
      }
    }
    plVar16 = *(long **)(*plVar1 + unaff_x28 * 8);
    if (plVar16 != (long *)0x0) {
      do {
        plVar16 = (long *)*plVar16;
        if (plVar16 == (long *)0x0) goto LAB_0047ef3c;
        uVar20 = plVar16[1];
        if (uVar20 != uVar26) {
          if (uVar18 < 2) {
            uVar20 = uVar20 & uVar14 - 1;
          }
          else if (uVar14 <= uVar20) {
            uVar23 = 0;
            if (uVar14 != 0) {
              uVar23 = uVar20 / uVar14;
            }
            uVar20 = uVar20 - uVar23 * uVar14;
          }
          if (uVar20 != unaff_x28) goto LAB_0047ef3c;
        }
      } while (*(uint *)(plVar16 + 2) != uStack_74);
      do {
        lVar15 = *plVar12;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar6) {
          *plVar12 = lVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        FUN_005466cc(plVar11);
      }
      goto LAB_0047f104;
    }
  }
LAB_0047ef3c:
  plVar12 = (long *)operator_new(0x28);
  lVar15 = *(long *)(param_1 + 0x1d88);
  fVar30 = *(float *)(param_1 + 0x1d90);
  *(uint *)(plVar12 + 2) = uVar9;
  plVar12[3] = (long)plVar21;
  plVar12[4] = (long)plVar11;
  *plVar12 = 0;
  plVar12[1] = uVar26;
  fVar28 = (float)(lVar15 + 1);
  if ((uVar14 == 0) || (fVar30 * (float)uVar14 < fVar28)) {
    if (uVar14 < 3) {
      uVar18 = 1;
    }
    else {
      uVar18 = (ulong)((uVar14 & uVar14 - 1) != 0);
    }
    uVar18 = uVar18 | uVar14 << 1;
    uVar20 = (ulong)(fVar28 / fVar30);
    if (uVar18 <= uVar20) {
      uVar18 = uVar20;
    }
    if (uVar18 - 1 == 0) {
      uVar18 = 2;
    }
    else if ((uVar18 & uVar18 - 1) != 0) {
      uVar18 = FUN_005204f8(uVar18);
      uVar14 = *(ulong *)(param_1 + 0x1d78);
    }
    if (uVar14 < uVar18) {
LAB_0047efdc:
      FUN_00482b00(plVar1,uVar18);
    }
    else if (uVar18 < uVar14) {
      uVar20 = (ulong)((float)*(ulong *)(param_1 + 0x1d88) / *(float *)(param_1 + 0x1d90));
      if (uVar14 < 3) {
LAB_0047f044:
        uVar20 = FUN_005204f8();
      }
      else {
        uVar29 = NEON_cnt(uVar14,1);
        uVar27 = NEON_uaddlv(uVar29,1);
        if (1 < (CONCAT62((int6)((ulong)uVar29 >> 0x10),uVar27) & 0xffffffff)) goto LAB_0047f044;
        if (1 < uVar20) {
          uVar20 = 1L << (-LZCOUNT(uVar20 - 1) & 0x3fU);
        }
      }
      if (uVar18 <= uVar20) {
        uVar18 = uVar20;
      }
      if (uVar18 < uVar14) goto LAB_0047efdc;
    }
    uVar14 = *(ulong *)(param_1 + 0x1d78);
    if ((uVar14 & uVar14 - 1) == 0) {
      unaff_x28 = (ulong)((int)uVar14 - 1U & uVar9);
    }
    else {
      unaff_x28 = uVar26;
      if (uVar14 <= uVar26) {
        uVar18 = 0;
        if (uVar14 != 0) {
          uVar18 = uVar26 / uVar14;
        }
        unaff_x28 = uVar26 - uVar18 * uVar14;
      }
    }
  }
  lVar15 = *plVar1;
  plVar21 = *(long **)(lVar15 + unaff_x28 * 8);
  if (plVar21 == (long *)0x0) {
    lVar13 = *(long *)(param_1 + 0x1d80);
    *(long **)(param_1 + 0x1d80) = plVar12;
    *plVar12 = lVar13;
    *(long *)(lVar15 + unaff_x28 * 8) = param_1 + 0x1d80;
    if (*plVar12 != 0) {
      uVar26 = *(ulong *)(*plVar12 + 8);
      if ((uVar14 & uVar14 - 1) == 0) {
        uVar26 = uVar26 & uVar14 - 1;
      }
      else if (uVar14 <= uVar26) {
        uVar18 = 0;
        if (uVar14 != 0) {
          uVar18 = uVar26 / uVar14;
        }
        uVar26 = uVar26 - uVar18 * uVar14;
      }
      plVar21 = (long *)(*plVar1 + uVar26 * 8);
      goto LAB_0047f0f4;
    }
  }
  else {
    *plVar12 = *plVar21;
LAB_0047f0f4:
    *plVar21 = (long)plVar12;
  }
  *(long *)(param_1 + 0x1d88) = *(long *)(param_1 + 0x1d88) + 1;
LAB_0047f104:
  uVar9 = uStack_74;
  uVar14 = *(ulong *)(param_1 + 0x1d78);
  if (uVar14 != 0) {
    uVar18 = (ulong)uStack_74;
    uVar29 = NEON_cnt(uVar14,1);
    uVar27 = NEON_uaddlv(uVar29,1);
    uVar26 = CONCAT62((int6)((ulong)uVar29 >> 0x10),uVar27) & 0xffffffff;
    if (uVar26 < 2) {
      uVar20 = (ulong)((int)uVar14 - 1U & uStack_74);
    }
    else {
      uVar20 = uVar18;
      if (uVar14 <= uVar18) {
        uVar20 = 0;
        if (uVar14 != 0) {
          uVar20 = uVar18 / uVar14;
        }
        uVar20 = uVar18 - uVar20 * uVar14;
      }
    }
    plVar21 = *(long **)(*plVar1 + uVar20 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      uVar29 = *(undefined8 *)(param_1 + 0x10);
LAB_0047f17c:
      uVar23 = plVar21[1];
      if (uVar23 != uVar18) {
        if (uVar26 < 2) {
          uVar23 = uVar23 & uVar14 - 1;
        }
        else if (uVar14 <= uVar23) {
          uVar7 = 0;
          if (uVar14 != 0) {
            uVar7 = uVar23 / uVar14;
          }
          uVar23 = uVar23 - uVar7 * uVar14;
        }
        if (uVar23 == uVar20) goto LAB_0047f174;
        goto LAB_0047f1b0;
      }
      if (*(uint *)(plVar21 + 2) != uStack_74) goto LAB_0047f174;
      lVar15 = plVar21[3];
      if (plVar21[4] != 0) {
        plVar21 = (long *)(plVar21[4] + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar6) {
            *plVar21 = *plVar21 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      FUN_00451174(auStack_90,uVar29,lVar15);
      if (*(char *)(param_1 + 0x108) == '\0') {
        plVar21 = (long *)0x0;
        goto LAB_0047f504;
      }
      lStack_108 = 0;
      uStack_110 = 0;
      pppppppcStack_f8 = (char *******)0x0;
      pppppppcStack_100 = (char *******)0x0;
      pvStack_118 = (void *)0x0;
      uStack_120 = 0;
      FUN_005125b4(&pppppppcStack_c0);
      FUN_004d7b58(&uStack_a8,&pppppppcStack_c0);
      if (uStack_b0._7_1_ < '\0') {
        operator_delete(pppppppcStack_c0);
      }
      pppppppcVar19 = (char *******)(ulong)uStack_98._7_1_;
      pppppppcVar4 = pppppppcVar19;
      if ((char *******)0x3 < pppppppcVar19) {
        pppppppcVar4 = (char *******)0x4;
      }
      bVar17 = uStack_98._7_1_;
      if (pppppppcVar4 == (char *******)0x0) goto LAB_0047f2e8;
      pcVar2 = (char *)((long)&uStack_a8 + (long)pppppppcVar4);
      pcVar10 = pcVar2;
      pcVar25 = (char *)&uStack_a8;
LAB_0047f248:
      pcVar22 = pcVar10;
      pcVar24 = pcVar25 + 3;
      do {
        pcVar25 = pcVar24 + -2;
        if (pcVar24[-3] == '\\') {
          if (pcVar25 == pcVar2) goto LAB_0047f2b0;
          if (*pcVar25 == '\\') {
            if (pcVar24 + -1 == pcVar2) goto LAB_0047f2b0;
            if (pcVar24[-1] == '?') goto code_r0x0047f298;
          }
        }
        else if (pcVar25 == pcVar2) goto LAB_0047f2b0;
        pcVar24 = pcVar24 + 1;
      } while( true );
    }
  }
LAB_0047f1b0:
                    /* WARNING: Subroutine does not return */
  abort();
LAB_0047f174:
  plVar21 = (long *)*plVar21;
  if (plVar21 == (long *)0x0) goto LAB_0047f1b0;
  goto LAB_0047f17c;
code_r0x0047f298:
  if (pcVar24 == pcVar2) goto LAB_0047f2b0;
  pcVar10 = pcVar24 + -3;
  if (*pcVar24 != '\\') {
    pcVar10 = pcVar22;
  }
  goto LAB_0047f248;
LAB_0047f2b0:
  if ((pcVar22 != pcVar2) && (pcVar22 == (char *)&uStack_a8)) {
    FUN_005472e8(&uStack_a8,0,4,&DAT_001d5f4a,4);
    pppppppcVar19 = (char *******)(ulong)uStack_98._7_1_;
    bVar17 = uStack_98._7_1_;
  }
LAB_0047f2e8:
  pppppppcVar4 = pppppppcStack_a0;
  if (-1 < (char)bVar17) {
    pppppppcVar4 = pppppppcVar19;
  }
  pcVar2 = (char *)((long)pppppppcVar4 + 0xe);
  if ((char *)0x7fffffffffffffef < pcVar2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (pcVar2 < (char *)0x17) {
    pcStack_b8 = (char *)0x0;
    pppppppcVar19 = (char *******)&pppppppcStack_c0;
    pppppppcStack_c0 = (char *******)0x0;
    uStack_b0 = (long)pcVar2 << 0x38;
  }
  else {
    uVar14 = ((ulong)pcVar2 | 0xf) + 1;
    pppppppcVar19 = (char *******)operator_new(uVar14);
    uStack_b0 = uVar14 | 0x8000000000000000;
    pppppppcStack_c0 = pppppppcVar19;
    pcStack_b8 = pcVar2;
  }
  pppppppcVar3 = (char *******)((long)pppppppcVar19 + (long)pppppppcVar4);
  __src = uStack_a8;
  if (-1 < (char)bVar17) {
    __src = (char *******)&uStack_a8;
  }
  if ((pppppppcVar19 <= __src) && (__src < pppppppcVar3)) {
LAB_0047f6c4:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  if (pppppppcVar4 != (char *******)0x0) {
    memmove(pppppppcVar19,__src,(size_t)pppppppcVar4);
  }
  if ((pppppppcVar3 < (char *******)0x1e1713) &&
     ("vfx_helper.exe" < (char *)((long)pppppppcVar3 + 0xeU))) goto LAB_0047f6c4;
  pcVar2 = (char *)((long)pppppppcVar4 + 0xc);
  *(char *)((long)pppppppcVar3 + 0xe) = '\0';
  *pppppppcVar3 =
       (char ******)CONCAT26(s_vfx_helper_exe_001e1712._6_2_,s_vfx_helper_exe_001e1712._0_6_);
  *(ulong *)((long)pppppppcVar3 + 6) =
       CONCAT62(s_vfx_helper_exe_001e1712._8_6_,s_vfx_helper_exe_001e1712._6_2_);
  if ((char *)0x7fffffffffffffef < pcVar2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (pcVar2 < (char *)0x17) {
    pcStack_d0 = (char *)0x0;
    pppppppcVar19 = (char *******)&pppppppcStack_d8;
    pppppppcStack_d8 = (char *******)0x0;
    uStack_c8 = (long)pcVar2 << 0x38;
  }
  else {
    uVar14 = ((ulong)pcVar2 | 0xf) + 1;
    pppppppcVar19 = (char *******)operator_new(uVar14);
    uStack_c8 = uVar14 | 0x8000000000000000;
    pppppppcStack_d8 = pppppppcVar19;
    pcStack_d0 = pcVar2;
  }
  pppppppcVar3 = (char *******)((long)pppppppcVar19 + (long)pppppppcVar4);
  if ((pppppppcVar19 <= __src) && (__src < pppppppcVar3)) goto LAB_0047f6c4;
  if (pppppppcVar4 != (char *******)0x0) {
    memmove(pppppppcVar19,__src,(size_t)pppppppcVar4);
  }
  if ((pppppppcVar3 < (char *******)0x1adc74) &&
     ("..\\..\\..\\vfx" < (char *)((long)pppppppcVar3 + 0xcU))) goto LAB_0047f6c4;
  *(char *)((long)pppppppcVar3 + 0xc) = '\0';
  *pppppppcVar3 = (char ******)s__________vfx_001adc73._0_8_;
  *(undefined4 *)(pppppppcVar3 + 1) = 0x7866765c;
  uVar14 = FUN_004d7ae8(&pppppppcStack_d8);
  if ((uVar14 & 1) == 0) {
LAB_0047f4e8:
    plVar21 = (long *)0x0;
  }
  else {
    pppppppcStack_100 = pppppppcStack_c0;
    if (-1 < (long)uStack_b0) {
      pppppppcStack_100 = (char *******)&pppppppcStack_c0;
    }
    pppppppcStack_f8 = pppppppcStack_d8;
    if (-1 < (long)uStack_c8) {
      pppppppcStack_f8 = (char *******)&pppppppcStack_d8;
    }
    pvStack_118 = _UNK_001f2ec8;
    uStack_120 = _DAT_001f2ec0;
    plVar21 = (long *)FUN_00515888(&uStack_120);
    if ((plVar21 != (long *)0x0) &&
       (lVar15 = FUN_0045143c(*(undefined8 *)(param_1 + 0x10),auStack_90,1), lVar15 != 0)) {
      uVar14 = FUN_00417e08();
      if ((uVar14 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/remote_user.cpp",0x12a9,
                     "Enabling VFX processing.");
      }
      FUN_004bbb50(lVar15,plVar21);
      goto LAB_0047f4e8;
    }
  }
  if ((long)uStack_c8 < 0) {
    operator_delete(pppppppcStack_d8);
  }
  if ((long)uStack_b0 < 0) {
    operator_delete(pppppppcStack_c0);
  }
LAB_0047f504:
  uStack_98 = uStack_98 & 0xffffffffffffff;
  uStack_a8 = (char *******)((ulong)uStack_a8 & 0xffffffffffffff00);
  FUN_0047f938(&uStack_120,uVar18,uVar9 + 1,&uStack_a8,auStack_90);
  lVar15 = FUN_00482c5c((long *)(param_1 + 0x1d48),&uStack_74,&uStack_74,&uStack_120);
  FUN_0047d3a4(param_1,lVar15 + 0x18);
  lVar13 = FUN_005183d8();
  if (*(char *)(param_1 + 0x1e58) == '\0') {
    *(char *)(param_1 + 0x1e58) = '\x01';
  }
  *(long *)(param_1 + 0x1e50) = lVar13 / 1000000;
  if (*(long *)(param_1 + 0x1d60) == 1) {
    uStack_a8 = (char *******)0x0;
    pppppppcStack_a0 = (char *******)0x0;
    uStack_98 = 0;
    FUN_0043abc4(*(undefined8 *)(param_1 + 8),param_1 + 0x20,uStack_74,lVar15 + 0x38,&uStack_a8);
    if (uStack_a8 != (char *******)0x0) {
      for (; pppppppcStack_a0 != uStack_a8; pppppppcStack_a0 = pppppppcStack_a0 + -9) {
      }
      pppppppcStack_a0 = uStack_a8;
      operator_delete(uStack_a8);
    }
  }
  if (cStack_e9 < '\0') {
    operator_delete(pppppppcStack_100);
  }
  if (lStack_108 < 0) {
    operator_delete(pvStack_118);
  }
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 8))(plVar21);
  }
LAB_0047f664:
  if (*(long *)(lVar8 + 0x28) != lStack_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0047ec88  FUN_0047ec88 =====

/* WARNING: Removing unreachable block (ram,0x0047f5f4) */
/* WARNING: Removing unreachable block (ram,0x0047f52c) */
/* WARNING: Removing unreachable block (ram,0x0047f620) */
/* WARNING: Removing unreachable block (ram,0x0047f6b4) */
/* WARNING: Removing unreachable block (ram,0x0047f6c0) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047ec88(long param_1,uint param_2)

{
  long *plVar1;
  char *pcVar2;
  char *******pppppppcVar3;
  char *******pppppppcVar4;
  char *******__src;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  char *pcVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  byte bVar17;
  ulong uVar18;
  char *******pppppppcVar19;
  ulong uVar20;
  long *plVar21;
  char *pcVar22;
  ulong uVar23;
  char *pcVar24;
  char *pcVar25;
  ulong uVar26;
  ulong unaff_x28;
  undefined2 uVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  undefined8 local_120;
  void *pvStack_118;
  undefined8 local_110;
  long lStack_108;
  char *******local_100;
  char *******pppppppcStack_f8;
  char local_e9;
  char *******local_d8;
  char *local_d0;
  ulong uStack_c8;
  char *******local_c0;
  char *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  char *******local_a0;
  undefined8 local_98;
  undefined1 local_90 [28];
  uint local_74;
  long local_70;
  
  lVar8 = tpidr_el0;
  local_70 = *(long *)(lVar8 + 0x28);
  local_74 = param_2;
  if (param_2 == 0) goto LAB_0047f664;
  uVar14 = *(ulong *)(param_1 + 0x1d50);
  if (uVar14 != 0) {
    uVar18 = (ulong)param_2;
    uVar29 = NEON_cnt(uVar14,1);
    uVar27 = NEON_uaddlv(uVar29,1);
    uVar26 = CONCAT62((int6)((ulong)uVar29 >> 0x10),uVar27) & 0xffffffff;
    if (uVar26 < 2) {
      uVar20 = (ulong)((int)uVar14 - 1U & param_2);
    }
    else {
      uVar20 = uVar18;
      if (uVar14 <= uVar18) {
        uVar20 = 0;
        if (uVar14 != 0) {
          uVar20 = uVar18 / uVar14;
        }
        uVar20 = uVar18 - uVar20 * uVar14;
      }
    }
    plVar21 = *(long **)(*(long *)(param_1 + 0x1d48) + uVar20 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      do {
        uVar23 = plVar21[1];
        if (uVar23 == uVar18) {
          if (*(uint *)(plVar21 + 2) == param_2) goto LAB_0047f664;
        }
        else {
          if (uVar26 < 2) {
            uVar23 = uVar23 & uVar14 - 1;
          }
          else if (uVar14 <= uVar23) {
            uVar7 = 0;
            if (uVar14 != 0) {
              uVar7 = uVar23 / uVar14;
            }
            uVar23 = uVar23 - uVar7 * uVar14;
          }
          if (uVar23 != uVar20) break;
        }
        plVar21 = (long *)*plVar21;
      } while (plVar21 != (long *)0x0);
    }
  }
  plVar1 = (long *)(param_1 + 0x1d70);
  plVar11 = (long *)operator_new(0x468);
  plVar21 = plVar11 + 3;
  *plVar11 = (long)&PTR_FUN_00d1d4a8;
  plVar12 = plVar11 + 1;
  *plVar12 = 0;
  plVar16 = plVar11 + 2;
  *plVar16 = 0;
  memset(plVar21,0,0x450);
  FUN_0048288c(plVar21);
  plVar11[3] = (long)&PTR_thunk_FUN_004bc7c8_00d1d4e0;
  plVar11[0x8b] = (long)&PTR_FUN_00d1d5a0;
  plVar11[0x8c] = 0x7fffffff7fffffff;
  if (plVar11[5] == 0) {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = *plVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *plVar16 = *plVar16 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar11[4] = (long)plVar21;
    plVar11[5] = (long)plVar11;
LAB_0047ee3c:
    do {
      lVar15 = *plVar12;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      FUN_005466cc(plVar11);
    }
  }
  else if (*(long *)(plVar11[5] + 8) == -1) {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = *plVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *plVar16 = *plVar16 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar11[4] = (long)plVar21;
    plVar11[5] = (long)plVar11;
    FUN_005466cc();
    goto LAB_0047ee3c;
  }
  uVar9 = local_74;
  uVar14 = *(ulong *)(param_1 + 0x1d78);
  uVar26 = (ulong)local_74;
  if (uVar14 != 0) {
    uVar29 = NEON_cnt(uVar14,1);
    uVar27 = NEON_uaddlv(uVar29,1);
    uVar18 = CONCAT62((int6)((ulong)uVar29 >> 0x10),uVar27) & 0xffffffff;
    if (uVar18 < 2) {
      unaff_x28 = (ulong)((int)uVar14 - 1U & local_74);
    }
    else {
      unaff_x28 = uVar26;
      if (uVar14 <= uVar26) {
        uVar20 = 0;
        if (uVar14 != 0) {
          uVar20 = uVar26 / uVar14;
        }
        unaff_x28 = uVar26 - uVar20 * uVar14;
      }
    }
    plVar16 = *(long **)(*plVar1 + unaff_x28 * 8);
    if (plVar16 != (long *)0x0) {
      do {
        plVar16 = (long *)*plVar16;
        if (plVar16 == (long *)0x0) goto LAB_0047ef3c;
        uVar20 = plVar16[1];
        if (uVar20 != uVar26) {
          if (uVar18 < 2) {
            uVar20 = uVar20 & uVar14 - 1;
          }
          else if (uVar14 <= uVar20) {
            uVar23 = 0;
            if (uVar14 != 0) {
              uVar23 = uVar20 / uVar14;
            }
            uVar20 = uVar20 - uVar23 * uVar14;
          }
          if (uVar20 != unaff_x28) goto LAB_0047ef3c;
        }
      } while (*(uint *)(plVar16 + 2) != local_74);
      do {
        lVar15 = *plVar12;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar6) {
          *plVar12 = lVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        FUN_005466cc(plVar11);
      }
      goto LAB_0047f104;
    }
  }
LAB_0047ef3c:
  plVar12 = (long *)operator_new(0x28);
  lVar15 = *(long *)(param_1 + 0x1d88);
  fVar30 = *(float *)(param_1 + 0x1d90);
  *(uint *)(plVar12 + 2) = uVar9;
  plVar12[3] = (long)plVar21;
  plVar12[4] = (long)plVar11;
  *plVar12 = 0;
  plVar12[1] = uVar26;
  fVar28 = (float)(lVar15 + 1);
  if ((uVar14 == 0) || (fVar30 * (float)uVar14 < fVar28)) {
    if (uVar14 < 3) {
      uVar18 = 1;
    }
    else {
      uVar18 = (ulong)((uVar14 & uVar14 - 1) != 0);
    }
    uVar18 = uVar18 | uVar14 << 1;
    uVar20 = (ulong)(fVar28 / fVar30);
    if (uVar18 <= uVar20) {
      uVar18 = uVar20;
    }
    if (uVar18 - 1 == 0) {
      uVar18 = 2;
    }
    else if ((uVar18 & uVar18 - 1) != 0) {
      uVar18 = FUN_005204f8(uVar18);
      uVar14 = *(ulong *)(param_1 + 0x1d78);
    }
    if (uVar14 < uVar18) {
LAB_0047efdc:
      FUN_00482b00(plVar1,uVar18);
    }
    else if (uVar18 < uVar14) {
      uVar20 = (ulong)((float)*(ulong *)(param_1 + 0x1d88) / *(float *)(param_1 + 0x1d90));
      if (uVar14 < 3) {
LAB_0047f044:
        uVar20 = FUN_005204f8();
      }
      else {
        uVar29 = NEON_cnt(uVar14,1);
        uVar27 = NEON_uaddlv(uVar29,1);
        if (1 < (CONCAT62((int6)((ulong)uVar29 >> 0x10),uVar27) & 0xffffffff)) goto LAB_0047f044;
        if (1 < uVar20) {
          uVar20 = 1L << (-LZCOUNT(uVar20 - 1) & 0x3fU);
        }
      }
      if (uVar18 <= uVar20) {
        uVar18 = uVar20;
      }
      if (uVar18 < uVar14) goto LAB_0047efdc;
    }
    uVar14 = *(ulong *)(param_1 + 0x1d78);
    if ((uVar14 & uVar14 - 1) == 0) {
      unaff_x28 = (ulong)((int)uVar14 - 1U & uVar9);
    }
    else {
      unaff_x28 = uVar26;
      if (uVar14 <= uVar26) {
        uVar18 = 0;
        if (uVar14 != 0) {
          uVar18 = uVar26 / uVar14;
        }
        unaff_x28 = uVar26 - uVar18 * uVar14;
      }
    }
  }
  lVar15 = *plVar1;
  plVar21 = *(long **)(lVar15 + unaff_x28 * 8);
  if (plVar21 == (long *)0x0) {
    lVar13 = *(long *)(param_1 + 0x1d80);
    *(long **)(param_1 + 0x1d80) = plVar12;
    *plVar12 = lVar13;
    *(long *)(lVar15 + unaff_x28 * 8) = param_1 + 0x1d80;
    if (*plVar12 != 0) {
      uVar26 = *(ulong *)(*plVar12 + 8);
      if ((uVar14 & uVar14 - 1) == 0) {
        uVar26 = uVar26 & uVar14 - 1;
      }
      else if (uVar14 <= uVar26) {
        uVar18 = 0;
        if (uVar14 != 0) {
          uVar18 = uVar26 / uVar14;
        }
        uVar26 = uVar26 - uVar18 * uVar14;
      }
      plVar21 = (long *)(*plVar1 + uVar26 * 8);
      goto LAB_0047f0f4;
    }
  }
  else {
    *plVar12 = *plVar21;
LAB_0047f0f4:
    *plVar21 = (long)plVar12;
  }
  *(long *)(param_1 + 0x1d88) = *(long *)(param_1 + 0x1d88) + 1;
LAB_0047f104:
  uVar9 = local_74;
  uVar14 = *(ulong *)(param_1 + 0x1d78);
  if (uVar14 != 0) {
    uVar18 = (ulong)local_74;
    uVar29 = NEON_cnt(uVar14,1);
    uVar27 = NEON_uaddlv(uVar29,1);
    uVar26 = CONCAT62((int6)((ulong)uVar29 >> 0x10),uVar27) & 0xffffffff;
    if (uVar26 < 2) {
      uVar20 = (ulong)((int)uVar14 - 1U & local_74);
    }
    else {
      uVar20 = uVar18;
      if (uVar14 <= uVar18) {
        uVar20 = 0;
        if (uVar14 != 0) {
          uVar20 = uVar18 / uVar14;
        }
        uVar20 = uVar18 - uVar20 * uVar14;
      }
    }
    plVar21 = *(long **)(*plVar1 + uVar20 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      uVar29 = *(undefined8 *)(param_1 + 0x10);
LAB_0047f17c:
      uVar23 = plVar21[1];
      if (uVar23 != uVar18) {
        if (uVar26 < 2) {
          uVar23 = uVar23 & uVar14 - 1;
        }
        else if (uVar14 <= uVar23) {
          uVar7 = 0;
          if (uVar14 != 0) {
            uVar7 = uVar23 / uVar14;
          }
          uVar23 = uVar23 - uVar7 * uVar14;
        }
        if (uVar23 == uVar20) goto LAB_0047f174;
        goto LAB_0047f1b0;
      }
      if (*(uint *)(plVar21 + 2) != local_74) goto LAB_0047f174;
      lVar15 = plVar21[3];
      if (plVar21[4] != 0) {
        plVar21 = (long *)(plVar21[4] + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar6) {
            *plVar21 = *plVar21 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      FUN_00451174(local_90,uVar29,lVar15);
      if (*(char *)(param_1 + 0x108) == '\0') {
        plVar21 = (long *)0x0;
        goto LAB_0047f504;
      }
      lStack_108 = 0;
      local_110 = 0;
      pppppppcStack_f8 = (char *******)0x0;
      local_100 = (char *******)0x0;
      pvStack_118 = (void *)0x0;
      local_120 = 0;
      FUN_005125b4(&local_c0);
      FUN_004d7b58(&local_a8,&local_c0);
      if (uStack_b0._7_1_ < '\0') {
        operator_delete(local_c0);
      }
      pppppppcVar19 = (char *******)(ulong)local_98._7_1_;
      pppppppcVar4 = pppppppcVar19;
      if ((char *******)0x3 < pppppppcVar19) {
        pppppppcVar4 = (char *******)0x4;
      }
      bVar17 = local_98._7_1_;
      if (pppppppcVar4 == (char *******)0x0) goto LAB_0047f2e8;
      pcVar2 = (char *)((long)&local_a8 + (long)pppppppcVar4);
      pcVar10 = pcVar2;
      pcVar25 = (char *)&local_a8;
LAB_0047f248:
      pcVar22 = pcVar10;
      pcVar24 = pcVar25 + 3;
      do {
        pcVar25 = pcVar24 + -2;
        if (pcVar24[-3] == '\\') {
          if (pcVar25 == pcVar2) goto LAB_0047f2b0;
          if (*pcVar25 == '\\') {
            if (pcVar24 + -1 == pcVar2) goto LAB_0047f2b0;
            if (pcVar24[-1] == '?') goto code_r0x0047f298;
          }
        }
        else if (pcVar25 == pcVar2) goto LAB_0047f2b0;
        pcVar24 = pcVar24 + 1;
      } while( true );
    }
  }
LAB_0047f1b0:
                    /* WARNING: Subroutine does not return */
  abort();
LAB_0047f174:
  plVar21 = (long *)*plVar21;
  if (plVar21 == (long *)0x0) goto LAB_0047f1b0;
  goto LAB_0047f17c;
code_r0x0047f298:
  if (pcVar24 == pcVar2) goto LAB_0047f2b0;
  pcVar10 = pcVar24 + -3;
  if (*pcVar24 != '\\') {
    pcVar10 = pcVar22;
  }
  goto LAB_0047f248;
LAB_0047f2b0:
  if ((pcVar22 != pcVar2) && (pcVar22 == (char *)&local_a8)) {
    FUN_005472e8(&local_a8,0,4,&DAT_001d5f4a,4);
    pppppppcVar19 = (char *******)(ulong)local_98._7_1_;
    bVar17 = local_98._7_1_;
  }
LAB_0047f2e8:
  pppppppcVar4 = local_a0;
  if (-1 < (char)bVar17) {
    pppppppcVar4 = pppppppcVar19;
  }
  pcVar2 = (char *)((long)pppppppcVar4 + 0xe);
  if ((char *)0x7fffffffffffffef < pcVar2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (pcVar2 < (char *)0x17) {
    local_b8 = (char *)0x0;
    pppppppcVar19 = (char *******)&local_c0;
    local_c0 = (char *******)0x0;
    uStack_b0 = (long)pcVar2 << 0x38;
  }
  else {
    uVar14 = ((ulong)pcVar2 | 0xf) + 1;
    pppppppcVar19 = (char *******)operator_new(uVar14);
    uStack_b0 = uVar14 | 0x8000000000000000;
    local_c0 = pppppppcVar19;
    local_b8 = pcVar2;
  }
  pppppppcVar3 = (char *******)((long)pppppppcVar19 + (long)pppppppcVar4);
  __src = local_a8;
  if (-1 < (char)bVar17) {
    __src = (char *******)&local_a8;
  }
  if ((pppppppcVar19 <= __src) && (__src < pppppppcVar3)) {
LAB_0047f6c4:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  if (pppppppcVar4 != (char *******)0x0) {
    memmove(pppppppcVar19,__src,(size_t)pppppppcVar4);
  }
  if ((pppppppcVar3 < (char *******)0x1e1713) &&
     ("vfx_helper.exe" < (char *)((long)pppppppcVar3 + 0xeU))) goto LAB_0047f6c4;
  pcVar2 = (char *)((long)pppppppcVar4 + 0xc);
  *(char *)((long)pppppppcVar3 + 0xe) = '\0';
  *pppppppcVar3 =
       (char ******)CONCAT26(s_vfx_helper_exe_001e1712._6_2_,s_vfx_helper_exe_001e1712._0_6_);
  *(ulong *)((long)pppppppcVar3 + 6) =
       CONCAT62(s_vfx_helper_exe_001e1712._8_6_,s_vfx_helper_exe_001e1712._6_2_);
  if ((char *)0x7fffffffffffffef < pcVar2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (pcVar2 < (char *)0x17) {
    local_d0 = (char *)0x0;
    pppppppcVar19 = (char *******)&local_d8;
    local_d8 = (char *******)0x0;
    uStack_c8 = (long)pcVar2 << 0x38;
  }
  else {
    uVar14 = ((ulong)pcVar2 | 0xf) + 1;
    pppppppcVar19 = (char *******)operator_new(uVar14);
    uStack_c8 = uVar14 | 0x8000000000000000;
    local_d8 = pppppppcVar19;
    local_d0 = pcVar2;
  }
  pppppppcVar3 = (char *******)((long)pppppppcVar19 + (long)pppppppcVar4);
  if ((pppppppcVar19 <= __src) && (__src < pppppppcVar3)) goto LAB_0047f6c4;
  if (pppppppcVar4 != (char *******)0x0) {
    memmove(pppppppcVar19,__src,(size_t)pppppppcVar4);
  }
  if ((pppppppcVar3 < (char *******)0x1adc74) &&
     ("..\\..\\..\\vfx" < (char *)((long)pppppppcVar3 + 0xcU))) goto LAB_0047f6c4;
  *(char *)((long)pppppppcVar3 + 0xc) = '\0';
  *pppppppcVar3 = (char ******)s__________vfx_001adc73._0_8_;
  *(undefined4 *)(pppppppcVar3 + 1) = 0x7866765c;
  uVar14 = FUN_004d7ae8(&local_d8);
  if ((uVar14 & 1) == 0) {
LAB_0047f4e8:
    plVar21 = (long *)0x0;
  }
  else {
    local_100 = local_c0;
    if (-1 < (long)uStack_b0) {
      local_100 = (char *******)&local_c0;
    }
    pppppppcStack_f8 = local_d8;
    if (-1 < (long)uStack_c8) {
      pppppppcStack_f8 = (char *******)&local_d8;
    }
    pvStack_118 = _UNK_001f2ec8;
    local_120 = _DAT_001f2ec0;
    plVar21 = (long *)FUN_00515888(&local_120);
    if ((plVar21 != (long *)0x0) &&
       (lVar15 = FUN_0045143c(*(undefined8 *)(param_1 + 0x10),local_90,1), lVar15 != 0)) {
      uVar14 = FUN_00417e08();
      if ((uVar14 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/remote_user.cpp",0x12a9,
                     "Enabling VFX processing.");
      }
      FUN_004bbb50(lVar15,plVar21);
      goto LAB_0047f4e8;
    }
  }
  if ((long)uStack_c8 < 0) {
    operator_delete(local_d8);
  }
  if ((long)uStack_b0 < 0) {
    operator_delete(local_c0);
  }
LAB_0047f504:
  local_98 = local_98 & 0xffffffffffffff;
  local_a8 = (char *******)((ulong)local_a8 & 0xffffffffffffff00);
  FUN_0047f938(&local_120,uVar18,uVar9 + 1,&local_a8,local_90);
  lVar15 = FUN_00482c5c((long *)(param_1 + 0x1d48),&local_74,&local_74,&local_120);
  FUN_0047d3a4(param_1,lVar15 + 0x18);
  lVar13 = FUN_005183d8();
  if (*(char *)(param_1 + 0x1e58) == '\0') {
    *(char *)(param_1 + 0x1e58) = '\x01';
  }
  *(long *)(param_1 + 0x1e50) = lVar13 / 1000000;
  if (*(long *)(param_1 + 0x1d60) == 1) {
    local_a8 = (char *******)0x0;
    local_a0 = (char *******)0x0;
    local_98 = 0;
    FUN_0043abc4(*(undefined8 *)(param_1 + 8),param_1 + 0x20,local_74,lVar15 + 0x38,&local_a8);
    if (local_a8 != (char *******)0x0) {
      for (; local_a0 != local_a8; local_a0 = local_a0 + -9) {
      }
      local_a0 = local_a8;
      operator_delete(local_a8);
    }
  }
  if (local_e9 < '\0') {
    operator_delete(local_100);
  }
  if (lStack_108 < 0) {
    operator_delete(pvStack_118);
  }
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 8))(plVar21);
  }
LAB_0047f664:
  if (*(long *)(lVar8 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0047f6f8  thunk_FUN_0047df80 =====

/* WARNING: Removing unreachable block (ram,0x0047e3c8) */

void thunk_FUN_0047df80(long param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined4 uVar11;
  ulong uVar12;
  long lVar13;
  undefined2 uVar14;
  undefined8 uVar15;
  void *pvStack_98;
  void *pvStack_90;
  undefined8 uStack_88;
  void *pvStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar4 = tpidr_el0;
  lStack_68 = *(long *)(lVar4 + 0x28);
  if (param_2 == 0) goto LAB_0047e3f0;
  uVar5 = *(ulong *)(param_1 + 0x1d50);
  if (uVar5 != 0) {
    plVar1 = (long *)(param_1 + 0x1d48);
    uVar12 = (ulong)param_2;
    uVar15 = NEON_cnt(uVar5,1);
    uVar14 = NEON_uaddlv(uVar15,1);
    uVar6 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
    if (uVar6 < 2) {
      uVar8 = (ulong)((int)uVar5 - 1U & param_2);
    }
    else {
      uVar8 = uVar12;
      if (uVar5 <= uVar12) {
        uVar8 = 0;
        if (uVar5 != 0) {
          uVar8 = uVar12 / uVar5;
        }
        uVar8 = uVar12 - uVar8 * uVar5;
      }
    }
    plVar7 = *(long **)(*plVar1 + uVar8 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar10 = plVar7[1];
        if (uVar10 == uVar12) {
          if (*(uint *)(plVar7 + 2) == param_2) {
            if (uVar6 < 2) {
              uVar8 = (ulong)((int)uVar5 - 1U & param_2);
            }
            else {
              uVar8 = uVar12;
              if (uVar5 <= uVar12) {
                uVar8 = 0;
                if (uVar5 != 0) {
                  uVar8 = uVar12 / uVar5;
                }
                uVar8 = uVar12 - uVar8 * uVar5;
              }
            }
            plVar7 = *(long **)(*plVar1 + uVar8 * 8);
            if ((plVar7 == (long *)0x0) || (plVar7 = (long *)*plVar7, plVar7 == (long *)0x0))
            goto LAB_0047e0f0;
            goto LAB_0047e0bc;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar10 = uVar10 & uVar5 - 1;
          }
          else if (uVar5 <= uVar10) {
            uVar3 = 0;
            if (uVar5 != 0) {
              uVar3 = uVar10 / uVar5;
            }
            uVar10 = uVar10 - uVar3 * uVar5;
          }
          if (uVar10 != uVar8) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  goto LAB_0047e348;
  while (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0) {
LAB_0047e0bc:
    uVar10 = plVar7[1];
    if (uVar10 == uVar12) {
      if (*(uint *)(plVar7 + 2) == param_2) {
        FUN_0047d2dc(param_1,plVar7 + 3);
        uVar5 = *(ulong *)(param_1 + 0x1d78);
        plVar2 = (long *)(param_1 + 0x1d70);
        if (uVar5 == 0) goto LAB_0047e1dc;
        uVar15 = NEON_cnt(uVar5,1);
        uVar14 = NEON_uaddlv(uVar15,1);
        uVar6 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
        if (uVar6 < 2) {
          uVar8 = (ulong)((int)uVar5 - 1U & param_2);
        }
        else {
          uVar8 = uVar12;
          if (uVar5 <= uVar12) {
            uVar8 = 0;
            if (uVar5 != 0) {
              uVar8 = uVar12 / uVar5;
            }
            uVar8 = uVar12 - uVar8 * uVar5;
          }
        }
        plVar9 = *(long **)(*plVar2 + uVar8 * 8);
        if ((plVar9 == (long *)0x0) || (plVar9 = (long *)*plVar9, plVar9 == (long *)0x0))
        goto LAB_0047e1dc;
        goto LAB_0047e178;
      }
    }
    else {
      if (uVar6 < 2) {
        uVar10 = uVar10 & uVar5 - 1;
      }
      else if (uVar5 <= uVar10) {
        uVar3 = 0;
        if (uVar5 != 0) {
          uVar3 = uVar10 / uVar5;
        }
        uVar10 = uVar10 - uVar3 * uVar5;
      }
      if (uVar10 != uVar8) break;
    }
  }
LAB_0047e0f0:
                    /* WARNING: Subroutine does not return */
  abort();
LAB_0047e178:
  do {
    uVar10 = plVar9[1];
    if (uVar10 == uVar12) {
      if (*(uint *)(plVar9 + 2) == param_2) {
        lVar13 = plVar9[3];
        FUN_005467a4(lVar13 + 0x18);
        if (*(char *)(lVar13 + 0x60) == '\0') {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
                     "this->has_value()","optional operator-> called on a disengaged value");
        }
        FUN_007b5df8(lVar13 + 0x40,param_1);
        FUN_005467c8(lVar13 + 0x18);
        break;
      }
    }
    else {
      if (uVar6 < 2) {
        uVar10 = uVar10 & uVar5 - 1;
      }
      else if (uVar5 <= uVar10) {
        uVar3 = 0;
        if (uVar5 != 0) {
          uVar3 = uVar10 / uVar5;
        }
        uVar10 = uVar10 - uVar3 * uVar5;
      }
      if (uVar10 != uVar8) break;
    }
    plVar9 = (long *)*plVar9;
  } while (plVar9 != (long *)0x0);
LAB_0047e1dc:
  FUN_0045138c(*(undefined8 *)(param_1 + 0x10),plVar7 + 7);
  uVar5 = *(ulong *)(param_1 + 0x1d78);
  if (uVar5 != 0) {
    uVar15 = NEON_cnt(uVar5,1);
    uVar14 = NEON_uaddlv(uVar15,1);
    uVar6 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
    if (uVar6 < 2) {
      uVar8 = (ulong)((int)uVar5 - 1U & param_2);
    }
    else {
      uVar8 = uVar12;
      if (uVar5 <= uVar12) {
        uVar8 = 0;
        if (uVar5 != 0) {
          uVar8 = uVar12 / uVar5;
        }
        uVar8 = uVar12 - uVar8 * uVar5;
      }
    }
    plVar7 = *(long **)(*plVar2 + uVar8 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar10 = plVar7[1];
        if (uVar10 == uVar12) {
          if (*(uint *)(plVar7 + 2) == param_2) {
            FUN_0048309c(plVar2);
            break;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar10 = uVar10 & uVar5 - 1;
          }
          else if (uVar5 <= uVar10) {
            uVar3 = 0;
            if (uVar5 != 0) {
              uVar3 = uVar10 / uVar5;
            }
            uVar10 = uVar10 - uVar3 * uVar5;
          }
          if (uVar10 != uVar8) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  uVar5 = *(ulong *)(param_1 + 0x1d50);
  if (uVar5 != 0) {
    uVar15 = NEON_cnt(uVar5,1);
    uVar14 = NEON_uaddlv(uVar15,1);
    uVar6 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
    if (uVar6 < 2) {
      uVar8 = (ulong)((int)uVar5 - 1U & param_2);
    }
    else {
      uVar8 = uVar12;
      if (uVar5 <= uVar12) {
        uVar8 = 0;
        if (uVar5 != 0) {
          uVar8 = uVar12 / uVar5;
        }
        uVar8 = uVar12 - uVar8 * uVar5;
      }
    }
    plVar7 = *(long **)(*plVar1 + uVar8 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar10 = plVar7[1];
        if (uVar10 == uVar12) {
          if (*(uint *)(plVar7 + 2) == param_2) {
            FUN_004832a8(plVar1);
            break;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar10 = uVar10 & uVar5 - 1;
          }
          else if (uVar5 <= uVar10) {
            uVar3 = 0;
            if (uVar5 != 0) {
              uVar3 = uVar10 / uVar5;
            }
            uVar10 = uVar10 - uVar3 * uVar5;
          }
          if (uVar10 != uVar8) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
LAB_0047e348:
  pvStack_80 = (void *)0x0;
  uStack_78 = 0;
  lStack_70 = 0;
  if (*(long *)(param_1 + 0x1d60) == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined4 *)(*(long *)(param_1 + 0x1d58) + 0x18);
    FUN_00411268(&pvStack_80,*(long *)(param_1 + 0x1d58) + 0x38);
  }
  pvStack_98 = (void *)0x0;
  pvStack_90 = (void *)0x0;
  uStack_88 = 0;
  FUN_0043abc4(*(undefined8 *)(param_1 + 8),param_1 + 0x20,uVar11,&pvStack_80,&pvStack_98);
  if (pvStack_98 != (void *)0x0) {
    for (; pvStack_90 != pvStack_98; pvStack_90 = (void *)((long)pvStack_90 + -0x48)) {
    }
    pvStack_90 = pvStack_98;
    operator_delete(pvStack_98);
  }
  if (lStack_70 < 0) {
    operator_delete(pvStack_80);
  }
LAB_0047e3f0:
  if (*(long *)(lVar4 + 0x28) == lStack_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0047f6fc  FUN_0047f6fc =====

void FUN_0047f6fc(undefined8 *param_1,long param_2,uint param_3)

{
  undefined8 *__src;
  ulong uVar1;
  undefined8 *__dest;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar3 = *(ulong *)(param_2 + 0x1d50);
  if (uVar3 != 0) {
    uVar4 = (ulong)param_3;
    uVar9 = NEON_cnt(uVar3,1);
    uVar8 = NEON_uaddlv(uVar9,1);
    uVar2 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8) & 0xffffffff;
    if (uVar2 < 2) {
      uVar6 = (ulong)((int)uVar3 - 1U & param_3);
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar5 = *(long **)(*(long *)(param_2 + 0x1d48) + uVar6 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      do {
        uVar7 = plVar5[1];
        if (uVar7 == uVar4) {
          if (*(uint *)(plVar5 + 2) == param_3) {
            if (uVar2 < 2) {
              uVar6 = (ulong)((int)uVar3 - 1U & param_3);
            }
            else {
              uVar6 = uVar4;
              if (uVar3 <= uVar4) {
                uVar6 = 0;
                if (uVar3 != 0) {
                  uVar6 = uVar4 / uVar3;
                }
                uVar6 = uVar4 - uVar6 * uVar3;
              }
            }
            plVar5 = *(long **)(*(long *)(param_2 + 0x1d48) + uVar6 * 8);
            if (plVar5 != (long *)0x0) goto LAB_0047f810;
            goto LAB_0047f84c;
          }
        }
        else {
          if (uVar2 < 2) {
            uVar7 = uVar7 & uVar3 - 1;
          }
          else if (uVar3 <= uVar7) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar7 / uVar3;
            }
            uVar7 = uVar7 - uVar1 * uVar3;
          }
          if (uVar7 != uVar6) break;
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
LAB_0047f810:
  plVar5 = (long *)*plVar5;
  if (plVar5 == (long *)0x0) goto LAB_0047f84c;
  uVar7 = plVar5[1];
  if (uVar7 != uVar4) {
    if (uVar2 < 2) {
      uVar7 = uVar7 & uVar3 - 1;
    }
    else if (uVar3 <= uVar7) {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = uVar7 / uVar3;
      }
      uVar7 = uVar7 - uVar1 * uVar3;
    }
    if (uVar7 != uVar6) {
LAB_0047f84c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    goto LAB_0047f810;
  }
  if (*(uint *)(plVar5 + 2) == param_3) {
    if (-1 < *(char *)((long)plVar5 + 0x4f)) {
      uVar10 = plVar5[8];
      uVar9 = plVar5[7];
      param_1[2] = plVar5[9];
      param_1[1] = uVar10;
      *param_1 = uVar9;
      return;
    }
    __src = (undefined8 *)plVar5[7];
    uVar3 = plVar5[8];
    if (uVar3 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)uVar3;
      __dest = param_1;
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar2 = (uVar3 | 0xf) + 1;
      __dest = (undefined8 *)operator_new(uVar2);
      *param_1 = __dest;
      param_1[1] = uVar3;
      param_1[2] = uVar2 | 0x8000000000000000;
    }
    if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + uVar3 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar3 + 1);
    return;
  }
  goto LAB_0047f810;
}


// ===== 0047f90c  FUN_0047f90c =====

bool FUN_0047f90c(long param_1,int param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x1d58);
  do {
    plVar1 = (long *)*plVar1;
    if (plVar1 == (long *)0x0) break;
  } while (*(int *)(plVar1 + 3) != param_2 && *(int *)((long)plVar1 + 0x1c) != param_2);
  return plVar1 != (long *)0x0;
}


// ===== 0047f938  FUN_0047f938 =====

void FUN_0047f938(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)(param_1 + 2);
  *param_1 = param_2;
  param_1[1] = param_3;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    puVar2 = (undefined8 *)*param_4;
    uVar3 = param_4[1];
    if (uVar3 < 0x17) {
      *(char *)((long)param_1 + 0x1f) = (char)uVar3;
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar3 | 0xf) + 1;
      puVar4 = (undefined8 *)operator_new(uVar1);
      *(undefined8 **)(param_1 + 2) = puVar4;
      *(ulong *)(param_1 + 4) = uVar3;
      *(ulong *)(param_1 + 6) = uVar1 | 0x8000000000000000;
    }
    if ((puVar4 <= puVar2) && (puVar2 < (undefined8 *)((long)puVar4 + uVar3 + 1)))
    goto LAB_0047fa6c;
    memmove(puVar4,puVar2,uVar3 + 1);
  }
  else {
    uVar6 = param_4[1];
    uVar5 = *param_4;
    *(undefined8 *)(param_1 + 6) = param_4[2];
    *(undefined8 *)(param_1 + 4) = uVar6;
    *puVar4 = uVar5;
  }
  puVar4 = (undefined8 *)(param_1 + 8);
  if (*(char *)((long)param_5 + 0x17) < '\0') {
    puVar2 = (undefined8 *)*param_5;
    uVar3 = param_5[1];
    if (uVar3 < 0x17) {
      *(char *)((long)param_1 + 0x37) = (char)uVar3;
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar3 | 0xf) + 1;
      puVar4 = (undefined8 *)operator_new(uVar1);
      *(undefined8 **)(param_1 + 8) = puVar4;
      *(ulong *)(param_1 + 10) = uVar3;
      *(ulong *)(param_1 + 0xc) = uVar1 | 0x8000000000000000;
    }
    if ((puVar4 <= puVar2) && (puVar2 < (undefined8 *)((long)puVar4 + uVar3 + 1))) {
LAB_0047fa6c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(puVar4,puVar2,uVar3 + 1);
  }
  else {
    uVar6 = param_5[1];
    uVar5 = *param_5;
    *(undefined8 *)(param_1 + 0xc) = param_5[2];
    *(undefined8 *)(param_1 + 10) = uVar6;
    *puVar4 = uVar5;
  }
  *(undefined8 *)(param_1 + 0xe) = 0;
  return;
}


// ===== 0047fa9c  FUN_0047fa9c =====

void FUN_0047fa9c(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  undefined2 uVar16;
  undefined8 uVar17;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    lVar14 = *(long *)(param_2 + 8);
    plVar7 = (long *)FUN_005466fc(*(long *)(param_2 + 0x10));
    if (plVar7 != (long *)0x0) {
      plVar15 = *(long **)(param_1 + 0x1d80);
      if (plVar15 != (long *)0x0) {
        do {
          lVar9 = plVar15[3];
          plVar2 = (long *)plVar15[4];
          uVar3 = *(uint *)(plVar15 + 2);
          uVar13 = (ulong)uVar3;
          if (plVar2 == (long *)0x0) {
            if (lVar9 == lVar14) goto LAB_0047fb50;
          }
          else {
            plVar1 = plVar2 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = *plVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar9 == lVar14) {
LAB_0047fb50:
              uVar8 = *(ulong *)(param_1 + 0x1d50);
              if (uVar8 == 0) goto LAB_0047fbf4;
              uVar17 = NEON_cnt(uVar8,1);
              uVar16 = NEON_uaddlv(uVar17,1);
              uVar10 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff;
              if (uVar10 < 2) {
                uVar11 = (ulong)((int)uVar8 - 1U & uVar3);
              }
              else {
                uVar11 = uVar13;
                if (uVar8 <= uVar13) {
                  uVar11 = 0;
                  if (uVar8 != 0) {
                    uVar11 = uVar13 / uVar8;
                  }
                  uVar11 = uVar13 - uVar11 * uVar8;
                }
              }
              plVar15 = *(long **)(*(long *)(param_1 + 0x1d48) + uVar11 * 8);
              if ((plVar15 == (long *)0x0) || (plVar15 = (long *)*plVar15, plVar15 == (long *)0x0))
              goto LAB_0047fbf4;
              goto LAB_0047fbc0;
            }
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
              (**(code **)(*plVar2 + 0x10))(plVar2);
              FUN_005466cc(plVar2);
            }
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
LAB_0047fcc8:
      plVar15 = plVar7 + 1;
      do {
        lVar14 = *plVar15;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *plVar15 = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 != 0) {
        return;
      }
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_005466cc(plVar7);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00458330();
LAB_0047fbc0:
  do {
    uVar12 = plVar15[1];
    if (uVar12 == uVar13) {
      if (*(uint *)(plVar15 + 2) == uVar3) {
        lVar14 = FUN_005183d8();
        if (*(char *)(param_1 + 0x1e78) == '\0') {
          *(char *)(param_1 + 0x1e78) = '\x01';
        }
        *(long *)(param_1 + 0x1e70) = lVar14 / 1000000;
        uVar17 = *(undefined8 *)(*(long *)(param_1 + 0x1e30) + 0x20);
        *(undefined8 *)(param_1 + 0x1eb0) = *(undefined8 *)(*(long *)(param_1 + 0x1e30) + 0x18);
        *(char *)(param_1 + 0x1eb8) = (char)uVar17;
        uVar8 = FUN_00417e08();
        if ((uVar8 & 1) == 0) {
          FUN_00623bb0(&DAT_001f6b18,"../../discord_native_lib/src/media/remote_user.cpp",0x1501,
                       "RemoteUser delivering first video frame from ",param_1 + 0x20,", ssrc: ",
                       uVar3);
        }
        FUN_0043ad74(*(undefined8 *)(param_1 + 8),param_1 + 0x20,uVar13,plVar15 + 7,param_1 + 0x1e40
                    );
        if (plVar2 != (long *)0x0) {
          plVar15 = plVar2 + 1;
          do {
            lVar14 = *plVar15;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar5) {
              *plVar15 = lVar14 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
            FUN_005466cc(plVar2);
          }
        }
        goto LAB_0047fcc8;
      }
    }
    else {
      if (uVar10 < 2) {
        uVar12 = uVar12 & uVar8 - 1;
      }
      else if (uVar8 <= uVar12) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = uVar12 / uVar8;
        }
        uVar12 = uVar12 - uVar6 * uVar8;
      }
      if (uVar12 != uVar11) break;
    }
    plVar15 = (long *)*plVar15;
  } while (plVar15 != (long *)0x0);
LAB_0047fbf4:
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0047fd28  FUN_0047fd28 =====

void FUN_0047fd28(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  byte *pbVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  undefined2 uVar18;
  int local_414;
  char *local_408;
  char *local_400 [5];
  undefined8 local_3d8;
  undefined4 local_3d0;
  undefined4 uStack_3cc;
  long lStack_3c8;
  undefined4 local_3c0;
  char local_3b0;
  undefined8 local_3a8;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 local_398;
  undefined4 local_394;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  undefined1 auStack_380 [24];
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  ulong local_348;
  double local_328;
  undefined8 local_320;
  undefined8 local_310;
  char local_308;
  float local_2e0;
  float local_2dc;
  float local_2d8;
  undefined4 local_2d4;
  float local_2d0;
  float local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined1 auStack_288 [88];
  undefined1 auStack_230 [56];
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  char *local_f8 [5];
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 auStack_98 [40];
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  FUN_004df134(param_1,7);
  FUN_004df478(&local_3d8,param_2 + 0x20);
  local_d0 = &DAT_0019cad0;
  uVar9 = FUN_004e148c(param_1,&local_d0);
  FUN_004dfa04(uVar9,&local_3d8);
  FUN_004df880(&local_3d8);
  plVar10 = *(long **)(param_2 + 0x1d98);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x60))(&local_3d8,plVar10,1);
    FUN_004df134(auStack_98,7);
    FUN_004df1ec(&local_d0,*(undefined4 *)(param_2 + 0x40));
    local_f8[0] = "speaking";
    uVar9 = FUN_004e148c(auStack_98,local_f8);
    FUN_004dfa04(uVar9,&local_d0);
    FUN_004df880(&local_d0);
    FUN_004df1ec(&local_d0,(ulong)local_3d8 & 0xffffffff);
    local_f8[0] = "ssrc";
    uVar9 = FUN_004e148c(auStack_98,local_f8);
    FUN_004dfa04(uVar9,&local_d0);
    FUN_004df880(&local_d0);
    FUN_004df230(&local_d0,lStack_3c8 + CONCAT44(uStack_3cc,local_3d0));
    local_f8[0] = "bytesReceived";
    uVar9 = FUN_004e148c(auStack_98,local_f8);
    FUN_004dfa04(uVar9,&local_d0);
    FUN_004df880(&local_d0);
    FUN_004df1ec(&local_d0,local_3c0);
    local_f8[0] = "packetsReceived";
    uVar9 = FUN_004e148c(auStack_98,local_f8);
    FUN_004dfa04(uVar9,&local_d0);
    FUN_004df880(&local_d0);
    FUN_004df1c8(&local_d0,local_398);
    local_f8[0] = "packetsLost";
    uVar9 = FUN_004e148c(auStack_98,local_f8);
    FUN_004dfa04(uVar9,&local_d0);
    FUN_004df880(&local_d0);
    FUN_004df478(&local_d0,auStack_380);
    local_f8[0] = "codecName";
    uVar9 = FUN_004e148c(auStack_98,local_f8);
    FUN_004dfa04(uVar9,&local_d0);
    FUN_004df880(&local_d0);
    uVar1 = local_368;
    if ((char)local_364 == '\0') {
      uVar1 = 0xffffffff;
    }
    FUN_004df1c8(&local_d0,uVar1);
    local_f8[0] = "codecPayloadType";
    uVar9 = FUN_004e148c(auStack_98,local_f8);
    FUN_004dfa04(uVar9,&local_d0);
    FUN_004df880(&local_d0);
    FUN_004df1ec(&local_d0,local_388);
    local_f8[0] = "nackCount";
    uVar9 = FUN_004e148c(auStack_98,local_f8);
    FUN_004dfa04(uVar9,&local_d0);
    FUN_004df880(&local_d0);
    FUN_004df1ec(&local_d0,local_360);
    local_f8[0] = "jitter";
    uVar9 = FUN_004e148c(auStack_98,local_f8);
    FUN_004dfa04(uVar9,&local_d0);
    FUN_004df880(&local_d0);
    FUN_004df1ec(&local_d0,local_35c);
    local_f8[0] = "jitterBuffer";
    uVar9 = FUN_004e148c(auStack_98,local_f8);
    FUN_004dfa04(uVar9,&local_d0);
    FUN_004df880(&local_d0);
    FUN_004df1ec(&local_d0,local_358);
    local_f8[0] = "jitterBufferPreferred";
    uVar9 = FUN_004e148c(auStack_98,local_f8);
    FUN_004dfa04(uVar9,&local_d0);
    FUN_004df880(&local_d0);
    FUN_004df1ec(&local_d0,local_354);
    local_f8[0] = "delayEstimate";
    uVar9 = FUN_004e148c(auStack_98,local_f8);
    FUN_004dfa04(uVar9,&local_d0);
    FUN_004df880(&local_d0);
    FUN_004df1c8(&local_d0,local_350);
    local_f8[0] = "audioLevel";
    uVar9 = FUN_004e148c(auStack_98,local_f8);
    FUN_004dfa04(uVar9,&local_d0);
    FUN_004df880(&local_d0);
    FUN_004df250((double)local_2e0,&local_d0);
    local_f8[0] = "expandRate";
    uVar9 = FUN_004e148c(auStack_98,local_f8);
    FUN_004dfa04(uVar9,&local_d0);
    FUN_004df880(&local_d0);
    FUN_004df250((double)local_2dc,&local_d0);
    local_f8[0] = "speechExpandRate";
    uVar9 = FUN_004e148c(auStack_98,local_f8);
    FUN_004dfa04(uVar9,&local_d0);
    FUN_004df880(&local_d0);
    FUN_004df250((double)local_2d8,&local_d0);
    local_f8[0] = "secondaryDecodedRate";
    uVar9 = FUN_004e148c(auStack_98,local_f8);
    FUN_004dfa04(uVar9,&local_d0);
    FUN_004df880(&local_d0);
    FUN_004df250((double)local_2d0,&local_d0);
    local_f8[0] = "accelerateRate";
    uVar9 = FUN_004e148c(auStack_98,local_f8);
    FUN_004dfa04(uVar9,&local_d0);
    FUN_004df880(&local_d0);
    FUN_004df250((double)local_2cc,&local_d0);
    local_f8[0] = "preemptiveExpandRate";
    uVar9 = FUN_004e148c(auStack_98,local_f8);
    FUN_004dfa04(uVar9,&local_d0);
    FUN_004df880(&local_d0);
    FUN_004df1c8(&local_d0,local_2c0);
    local_f8[0] = "decodingCallsToSilenceGenerator";
    uVar9 = FUN_004e148c(auStack_98,local_f8);
    FUN_004dfa04(uVar9,&local_d0);
    FUN_004df880(&local_d0);
    FUN_004df1c8(&local_d0,local_2bc);
    local_f8[0] = "decodingCallsToNetEq";
    uVar9 = FUN_004e148c(auStack_98,local_f8);
    FUN_004dfa04(uVar9,&local_d0);
    FUN_004df880(&local_d0);
    FUN_004df1c8(&local_d0,local_2b8);
    local_f8[0] = "decodingNormal";
    uVar9 = FUN_004e148c(auStack_98,local_f8);
    FUN_004dfa04(uVar9,&local_d0);
    FUN_004df880(&local_d0);
    FUN_004df1c8(&local_d0,local_2b4);
    local_f8[0] = "decodingPLC";
    uVar9 = FUN_004e148c(auStack_98,local_f8);
    FUN_004dfa04(uVar9,&local_d0);
    FUN_004df880(&local_d0);
    FUN_004df1c8(&local_d0,local_2ac);
    local_f8[0] = "decodingCNG";
    uVar9 = FUN_004e148c(auStack_98,local_f8);
    FUN_004dfa04(uVar9,&local_d0);
    FUN_004df880(&local_d0);
    FUN_004df1c8(&local_d0,local_2a8);
    local_f8[0] = "decodingPLCCNG";
    uVar9 = FUN_004e148c(auStack_98,local_f8);
    FUN_004dfa04(uVar9,&local_d0);
    FUN_004df880(&local_d0);
    FUN_004df1c8(&local_d0,local_2a4);
    local_f8[0] = "decodingMutedOutput";
    uVar9 = FUN_004e148c(auStack_98,local_f8);
    FUN_004dfa04(uVar9,&local_d0);
    FUN_004df880(&local_d0);
    FUN_004df230(&local_d0,local_3a8);
    local_f8[0] = "fecPacketsReceived";
    uVar9 = FUN_004e148c(auStack_98,local_f8);
    FUN_004dfa04(uVar9,&local_d0);
    FUN_004df880(&local_d0);
    FUN_004df230(&local_d0,CONCAT44(uStack_39c,local_3a0));
    local_f8[0] = "fecPacketsDiscarded";
    uVar9 = FUN_004e148c(auStack_98,local_f8);
    FUN_004dfa04(uVar9,&local_d0);
    FUN_004df880(&local_d0);
    FUN_004df230(&local_d0,local_1f8);
    local_f8[0] = "opSilence";
    uVar9 = FUN_004e148c(auStack_98,local_f8);
    FUN_004dfa04(uVar9,&local_d0);
    FUN_004df880(&local_d0);
    FUN_004df230(&local_d0,local_1f0);
    local_f8[0] = "opNormal";
    uVar9 = FUN_004e148c(auStack_98,local_f8);
    FUN_004dfa04(uVar9,&local_d0);
    FUN_004df880(&local_d0);
    FUN_004df230(&local_d0,local_1e8);
    local_f8[0] = "opMerge";
    uVar9 = FUN_004e148c(auStack_98,local_f8);
    FUN_004dfa04(uVar9,&local_d0);
    FUN_004df880(&local_d0);
    FUN_004df230(&local_d0,local_1e0);
    local_f8[0] = "opExpand";
    uVar9 = FUN_004e148c(auStack_98,local_f8);
    FUN_004dfa04(uVar9,&local_d0);
    FUN_004df880(&local_d0);
    FUN_004df230(&local_d0,local_1d8);
    local_f8[0] = "opAccelerate";
    uVar9 = FUN_004e148c(auStack_98,local_f8);
    FUN_004dfa04(uVar9,&local_d0);
    FUN_004df880(&local_d0);
    FUN_004df230(&local_d0,local_1d0);
    local_f8[0] = "opPreemptiveExpand";
    uVar9 = FUN_004e148c(auStack_98,local_f8);
    FUN_004dfa04(uVar9,&local_d0);
    FUN_004df880(&local_d0);
    FUN_004df230(&local_d0,local_1c8);
    local_f8[0] = "opCNG";
    uVar9 = FUN_004e148c(auStack_98,local_f8);
    FUN_004dfa04(uVar9,&local_d0);
    FUN_004df880(&local_d0);
    FUN_0045f8f8(&local_d0,*(undefined8 *)(param_2 + 0x1e30),0);
    FUN_004df230(local_f8,local_d0);
    local_400[0] = "passthroughCount";
    uVar9 = FUN_004e148c(auStack_98,local_400);
    FUN_004dfa04(uVar9,local_f8);
    FUN_004df880(local_f8);
    FUN_004df230(local_f8,local_c8);
    local_400[0] = "decryptSuccessCount";
    uVar9 = FUN_004e148c(auStack_98,local_400);
    FUN_004dfa04(uVar9,local_f8);
    FUN_004df880(local_f8);
    FUN_004df230(local_f8,local_c0);
    local_400[0] = "decryptFailureCount";
    uVar9 = FUN_004e148c(auStack_98,local_400);
    FUN_004dfa04(uVar9,local_f8);
    FUN_004df880(local_f8);
    FUN_004df230(local_f8,local_b8);
    local_400[0] = "decryptDuration";
    uVar9 = FUN_004e148c(auStack_98,local_400);
    FUN_004dfa04(uVar9,local_f8);
    FUN_004df880(local_f8);
    FUN_004df230(local_f8,local_b0);
    local_400[0] = "decryptAttempts";
    uVar9 = FUN_004e148c(auStack_98,local_400);
    FUN_004dfa04(uVar9,local_f8);
    FUN_004df880(local_f8);
    FUN_004df230(local_f8,local_a8);
    local_400[0] = "decryptMissingKeyCount";
    uVar9 = FUN_004e148c(auStack_98,local_400);
    FUN_004dfa04(uVar9,local_f8);
    FUN_004df880(local_f8);
    FUN_004df230(local_f8,local_a0);
    local_400[0] = "decryptInvalidNonceCount";
    uVar9 = FUN_004e148c(auStack_98,local_400);
    FUN_004dfa04(uVar9,local_f8);
    FUN_004df880(local_f8);
    FUN_004df1c8(local_f8,*(undefined4 *)(param_2 + 0x1e3c));
    local_400[0] = "currentSampleRate";
    uVar9 = FUN_004e148c(auStack_98,local_400);
    FUN_004dfa04(uVar9,local_f8);
    FUN_004df880(local_f8);
    local_f8[0] = "audio";
    uVar9 = FUN_004e148c(param_1,local_f8);
    FUN_004df948(uVar9,auStack_98);
    FUN_004df880(auStack_98);
    FUN_00842058(&local_3d8);
  }
  FUN_004df134(auStack_98,6);
  plVar10 = *(long **)(param_2 + 0x1d58);
  if (plVar10 == (long *)0x0) {
LAB_0048123c:
    local_3d8 = "videos";
    uVar9 = FUN_004e148c(param_1,&local_3d8);
    FUN_004df948(uVar9,auStack_98);
    FUN_004df880(auStack_98);
    if (*(long *)(lVar5 + 0x28) == local_70) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_414 = 0;
LAB_00480760:
  (**(code **)(*(long *)plVar10[10] + 0x40))(&local_3d8);
  FUN_004df134(local_f8,7);
  fVar6 = local_2dc;
  FUN_004df1c8(&local_d0,local_2dc);
  local_400[0] = "codecPayloadType";
  uVar9 = FUN_004e148c(local_f8,local_400);
  FUN_004dfa04(uVar9,&local_d0);
  FUN_004df880(&local_d0);
  for (pbVar2 = *(byte **)(param_2 + 0x48); pbVar2 != *(byte **)(param_2 + 0x50);
      pbVar2 = pbVar2 + 0x38) {
    if (fVar6 == (float)(uint)*pbVar2) {
      FUN_004df478(&local_d0,pbVar2 + 8);
      local_400[0] = "codecName";
      uVar9 = FUN_004e148c(local_f8,local_400);
      FUN_004dfa04(uVar9,&local_d0);
      FUN_004df880(&local_d0);
      break;
    }
  }
  FUN_004df1c8(&local_d0,(ulong)local_3d8 & 0xffffffff);
  local_400[0] = "networkFrameRate";
  uVar9 = FUN_004e148c(local_f8,local_400);
  FUN_004dfa04(uVar9,&local_d0);
  FUN_004df880(&local_d0);
  FUN_004df1c8(&local_d0,local_3d8._4_4_);
  local_400[0] = "decodeFrameRate";
  uVar9 = FUN_004e148c(local_f8,local_400);
  FUN_004dfa04(uVar9,&local_d0);
  FUN_004df880(&local_d0);
  FUN_004df1c8(&local_d0,local_3d0);
  local_400[0] = "renderFrameRate";
  uVar9 = FUN_004e148c(local_f8,local_400);
  FUN_004dfa04(uVar9,&local_d0);
  FUN_004df880(&local_d0);
  FUN_004df1ec(&local_d0,uStack_3cc);
  local_400[0] = "framesRendered";
  uVar9 = FUN_004e148c(local_f8,local_400);
  FUN_004dfa04(uVar9,&local_d0);
  FUN_004df880(&local_d0);
  if (local_3b0 != '\0') {
    FUN_004df478(&local_d0,&lStack_3c8);
    local_400[0] = "decoderImplementationName";
    uVar9 = FUN_004e148c(local_f8,local_400);
    FUN_004dfa04(uVar9,&local_d0);
    FUN_004df880(&local_d0);
  }
  FUN_00485eac(&local_d0,param_2,(long)&local_3a8 + 4);
  local_400[0] = "frameCounts";
  uVar9 = FUN_004e148c(local_f8,local_400);
  FUN_004dfa04(uVar9,&local_d0);
  FUN_004df880(&local_d0);
  FUN_004df1c8(&local_d0,uStack_39c);
  local_400[0] = "decode";
  uVar9 = FUN_004e148c(local_f8,local_400);
  FUN_004dfa04(uVar9,&local_d0);
  FUN_004df880(&local_d0);
  FUN_004df1c8(&local_d0,local_398);
  local_400[0] = "maxDecode";
  uVar9 = FUN_004e148c(local_f8,local_400);
  FUN_004dfa04(uVar9,&local_d0);
  FUN_004df880(&local_d0);
  if ((long)local_348 < 0) {
    uVar12 = -(-local_348 / 1000) - (ulong)(500 < -local_348 % 1000);
  }
  else {
    uVar12 = local_348 / 1000;
    if (499 < local_348 % 1000) {
      uVar12 = uVar12 + 1;
    }
  }
  FUN_004df210(&local_d0,uVar12);
  local_400[0] = "totalDecode";
  uVar9 = FUN_004e148c(local_f8,local_400);
  FUN_004dfa04(uVar9,&local_d0);
  FUN_004df880(&local_d0);
  FUN_004df1c8(&local_d0,local_394);
  local_400[0] = "currentDelay";
  uVar9 = FUN_004e148c(local_f8,local_400);
  FUN_004dfa04(uVar9,&local_d0);
  FUN_004df880(&local_d0);
  FUN_004df1c8(&local_d0,local_390);
  local_400[0] = "targetDelay";
  uVar9 = FUN_004e148c(local_f8,local_400);
  FUN_004dfa04(uVar9,&local_d0);
  FUN_004df880(&local_d0);
  FUN_004df1c8(&local_d0,local_38c);
  local_400[0] = "jitterBuffer";
  uVar9 = FUN_004e148c(local_f8,local_400);
  FUN_004dfa04(uVar9,&local_d0);
  FUN_004df880(&local_d0);
  FUN_004df1c8(&local_d0,local_368);
  local_400[0] = "minPlayoutDelay";
  uVar9 = FUN_004e148c(local_f8,local_400);
  FUN_004dfa04(uVar9,&local_d0);
  FUN_004df880(&local_d0);
  FUN_004df1c8(&local_d0,local_364);
  local_400[0] = "renderDelay";
  uVar9 = FUN_004e148c(local_f8,local_400);
  FUN_004dfa04(uVar9,&local_d0);
  FUN_004df880(&local_d0);
  FUN_004df1ec(&local_d0,local_350);
  local_400[0] = "framesDecoded";
  uVar9 = FUN_004e148c(local_f8,local_400);
  FUN_004dfa04(uVar9,&local_d0);
  FUN_004df880(&local_d0);
  FUN_004df1ec(&local_d0,local_354);
  local_400[0] = "framesDecodeErrors";
  uVar9 = FUN_004e148c(local_f8,local_400);
  FUN_004dfa04(uVar9,&local_d0);
  FUN_004df880(&local_d0);
  uVar9 = local_310;
  if (local_308 == '\0') {
    uVar9 = 0xffffffffffffffff;
  }
  FUN_004df210(&local_d0,uVar9);
  local_400[0] = "qpSum";
  uVar9 = FUN_004e148c(local_f8,local_400);
  FUN_004dfa04(uVar9,&local_d0);
  FUN_004df880(&local_d0);
  FUN_004df1c8(&local_d0,local_2dc);
  local_400[0] = "currentPayloadType";
  uVar9 = FUN_004e148c(local_f8,local_400);
  FUN_004dfa04(uVar9,&local_d0);
  FUN_004df880(&local_d0);
  FUN_004df1c8(&local_d0,local_2d8);
  local_400[0] = "totalBitrate";
  uVar9 = FUN_004e148c(local_f8,local_400);
  FUN_004dfa04(uVar9,&local_d0);
  FUN_004df880(&local_d0);
  FUN_004df1c8(&local_d0,local_2d4);
  local_400[0] = "width";
  uVar9 = FUN_004e148c(local_f8,local_400);
  FUN_004dfa04(uVar9,&local_d0);
  FUN_004df880(&local_d0);
  FUN_004df1c8(&local_d0,local_2d0);
  local_400[0] = "height";
  uVar9 = FUN_004e148c(local_f8,local_400);
  FUN_004dfa04(uVar9,&local_d0);
  FUN_004df880(&local_d0);
  uVar12 = *(ulong *)(param_2 + 0x1d78);
  if (uVar12 != 0) {
    uVar3 = *(uint *)(plVar10 + 2);
    uVar14 = (ulong)uVar3;
    uVar9 = NEON_cnt(uVar12,1);
    uVar18 = NEON_uaddlv(uVar9,1);
    uVar13 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar18) & 0xffffffff;
    if (uVar13 < 2) {
      uVar15 = (ulong)((int)uVar12 - 1U & uVar3);
    }
    else {
      uVar15 = uVar14;
      if (uVar12 <= uVar14) {
        uVar15 = 0;
        if (uVar12 != 0) {
          uVar15 = uVar14 / uVar12;
        }
        uVar15 = uVar14 - uVar15 * uVar12;
      }
    }
    plVar16 = *(long **)(*(long *)(param_2 + 0x1d70) + uVar15 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      do {
        uVar17 = plVar16[1];
        if (uVar17 == uVar14) {
          if (*(uint *)(plVar16 + 2) == uVar3) goto LAB_00480d7c;
        }
        else {
          if (uVar13 < 2) {
            uVar17 = uVar17 & uVar12 - 1;
          }
          else if (uVar12 <= uVar17) {
            uVar4 = 0;
            if (uVar12 != 0) {
              uVar4 = uVar17 / uVar12;
            }
            uVar17 = uVar17 - uVar4 * uVar12;
          }
          if (uVar17 != uVar15) break;
        }
        plVar16 = (long *)*plVar16;
        if (plVar16 == (long *)0x0) break;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
LAB_00480d7c:
  if (plVar16[3] != 0) {
    lVar11 = plVar16[3] + 0x448;
    iVar7 = FUN_004b9368(lVar11);
    iVar8 = FUN_004b937c(lVar11);
    if (0 < iVar7) {
      FUN_004df1c8(&local_d0,iVar7);
      local_400[0] = "minResolutionWidth";
      uVar9 = FUN_004e148c(local_f8,local_400);
      FUN_004dfa04(uVar9,&local_d0);
      FUN_004df880(&local_d0);
    }
    if (0 < iVar8) {
      FUN_004df1c8(&local_d0,iVar8);
      local_400[0] = "minResolutionHeight";
      uVar9 = FUN_004e148c(local_f8,local_400);
      FUN_004dfa04(uVar9,&local_d0);
      FUN_004df880(&local_d0);
    }
  }
  FUN_004df1c8(&local_d0,local_2a8);
  local_400[0] = "syncOffset";
  uVar9 = FUN_004e148c(local_f8,local_400);
  FUN_004dfa04(uVar9,&local_d0);
  FUN_004df880(&local_d0);
  FUN_004df1ec(&local_d0,local_2a4);
  local_400[0] = "ssrc";
  uVar9 = FUN_004e148c(local_f8,local_400);
  FUN_004dfa04(uVar9,&local_d0);
  uVar9 = FUN_004df880(&local_d0);
  FUN_004812a0(&local_d0,uVar9,auStack_288);
  local_400[0] = "rtpStats";
  uVar9 = FUN_004e148c(local_f8,local_400);
  FUN_004dfa04(uVar9,&local_d0);
  uVar9 = FUN_004df880(&local_d0);
  FUN_00481434(&local_d0,uVar9,auStack_230);
  local_400[0] = "rtcpStats";
  uVar9 = FUN_004e148c(local_f8,local_400);
  FUN_004dfa04(uVar9,&local_d0);
  FUN_004df880(&local_d0);
  FUN_004df1ec(&local_d0,local_2cc);
  local_400[0] = "freezeCount";
  uVar9 = FUN_004e148c(local_f8,local_400);
  FUN_004dfa04(uVar9,&local_d0);
  FUN_004df880(&local_d0);
  FUN_004df1ec(&local_d0,local_2c8);
  local_400[0] = "pauseCount";
  uVar9 = FUN_004e148c(local_f8,local_400);
  FUN_004dfa04(uVar9,&local_d0);
  FUN_004df880(&local_d0);
  FUN_004df1ec(&local_d0,local_2c4);
  local_400[0] = "totalFreezesDuration";
  uVar9 = FUN_004e148c(local_f8,local_400);
  FUN_004dfa04(uVar9,&local_d0);
  FUN_004df880(&local_d0);
  FUN_004df1ec(&local_d0,local_2c0);
  local_400[0] = "totalPausesDuration";
  uVar9 = FUN_004e148c(local_f8,local_400);
  FUN_004dfa04(uVar9,&local_d0);
  FUN_004df880(&local_d0);
  FUN_004df250(local_328 * 1000.0,&local_d0);
  local_400[0] = "totalFramesDuration";
  uVar9 = FUN_004e148c(local_f8,local_400);
  FUN_004dfa04(uVar9,&local_d0);
  FUN_004df880(&local_d0);
  FUN_004df250(local_320,&local_d0);
  local_400[0] = "sumOfSquaredFramesDurations";
  uVar9 = FUN_004e148c(local_f8,local_400);
  FUN_004dfa04(uVar9,&local_d0);
  FUN_004df880(&local_d0);
  FUN_004df1ec(&local_d0,local_358);
  local_400[0] = "networkFramesDropped";
  uVar9 = FUN_004e148c(local_f8,local_400);
  FUN_004dfa04(uVar9,&local_d0);
  FUN_004df880(&local_d0);
  FUN_0045f8f8(&local_d0,*(undefined8 *)(param_2 + 0x1e30),1);
  FUN_004df230(local_400,local_d0);
  local_408 = "passthroughCount";
  uVar9 = FUN_004e148c(local_f8,&local_408);
  FUN_004dfa04(uVar9,local_400);
  FUN_004df880(local_400);
  FUN_004df230(local_400,local_c8);
  local_408 = "decryptSuccessCount";
  uVar9 = FUN_004e148c(local_f8,&local_408);
  FUN_004dfa04(uVar9,local_400);
  FUN_004df880(local_400);
  FUN_004df230(local_400,local_c0);
  local_408 = "decryptFailureCount";
  uVar9 = FUN_004e148c(local_f8,&local_408);
  FUN_004dfa04(uVar9,local_400);
  FUN_004df880(local_400);
  FUN_004df230(local_400,local_b8);
  local_408 = "decryptDuration";
  uVar9 = FUN_004e148c(local_f8,&local_408);
  FUN_004dfa04(uVar9,local_400);
  FUN_004df880(local_400);
  FUN_004df230(local_400,local_b0);
  local_408 = "decryptAttempts";
  uVar9 = FUN_004e148c(local_f8,&local_408);
  FUN_004dfa04(uVar9,local_400);
  FUN_004df880(local_400);
  FUN_004df230(local_400,local_a8);
  local_408 = "decryptMissingKeyCount";
  uVar9 = FUN_004e148c(local_f8,&local_408);
  FUN_004dfa04(uVar9,local_400);
  FUN_004df880(local_400);
  FUN_004df230(local_400,local_a0);
  local_408 = "decryptInvalidNonceCount";
  uVar9 = FUN_004e148c(local_f8,&local_408);
  FUN_004dfa04(uVar9,local_400);
  FUN_004df880(local_400);
  lVar11 = FUN_0045143c(*(undefined8 *)(param_2 + 0x10),plVar10 + 7,0);
  if (lVar11 != 0) {
    FUN_004df1c8(local_400,*(undefined8 *)(lVar11 + 0x6c));
    local_408 = "framesDropped";
    uVar9 = FUN_004e148c(local_f8,&local_408);
    FUN_004dfa04(uVar9,local_400);
    FUN_004df880(local_400);
  }
  local_400[0] = "video";
  uVar9 = FUN_004e148c(param_1,local_400);
  FUN_004df948(uVar9,local_f8);
  uVar9 = FUN_004e0998(auStack_98,local_414);
  FUN_004df948(uVar9,local_f8);
  local_414 = local_414 + 1;
  FUN_004df880(local_f8);
  FUN_0084546c(&local_3d8);
  plVar10 = (long *)*plVar10;
  if (plVar10 == (long *)0x0) goto LAB_0048123c;
  goto LAB_00480760;
}


// ===== 004812a0  FUN_004812a0 =====

void FUN_004812a0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  char *local_68;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004df134(param_1,7);
  FUN_004df1ec(auStack_60,param_3[1]);
  local_68 = "jitter";
  uVar2 = FUN_004e148c(param_1,&local_68);
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  FUN_004df1c8(auStack_60,*param_3);
  local_68 = "packetsLost";
  uVar2 = FUN_004e148c(param_1,&local_68);
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  FUN_004df230(auStack_60,*(undefined8 *)(param_3 + 8));
  local_68 = "headerBytes";
  uVar2 = FUN_004e148c(param_1,&local_68);
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  FUN_004df230(auStack_60,*(undefined8 *)(param_3 + 10));
  local_68 = "payloadBytes";
  uVar2 = FUN_004e148c(param_1,&local_68);
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  FUN_004df230(auStack_60,*(undefined8 *)(param_3 + 0xc));
  local_68 = "paddingBytes";
  uVar2 = FUN_004e148c(param_1,&local_68);
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  FUN_004df230(auStack_60,*(undefined8 *)(param_3 + 0xe));
  local_68 = "packets";
  uVar2 = FUN_004e148c(param_1,&local_68);
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00481434  FUN_00481434 =====

void FUN_00481434(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  char *local_68;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004df134(param_1,7);
  FUN_004df1ec(auStack_60,*param_3);
  local_68 = "nackPackets";
  uVar2 = FUN_004e148c(param_1,&local_68);
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  FUN_004df1ec(auStack_60,param_3[1]);
  local_68 = "firPackets";
  uVar2 = FUN_004e148c(param_1,&local_68);
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  FUN_004df1ec(auStack_60,param_3[2]);
  local_68 = "pliPackets";
  uVar2 = FUN_004e148c(param_1,&local_68);
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  FUN_004df1ec(auStack_60,param_3[3]);
  local_68 = "nackRequests";
  uVar2 = FUN_004e148c(param_1,&local_68);
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  FUN_004df1ec(auStack_60,param_3[4]);
  local_68 = "uniqueNackRequests";
  uVar2 = FUN_004e148c(param_1,&local_68);
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00481594  FUN_00481594 =====

void FUN_00481594(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_250 [24];
  undefined4 local_238;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined4 local_210;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_2 + 0x1d98);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x60))(auStack_250,plVar2,1);
    *(undefined4 *)param_1 = local_238;
    *(undefined4 *)((long)param_1 + 4) = local_210;
    param_1[2] = uStack_218;
    param_1[1] = local_220;
    FUN_00842058(auStack_250);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00481620  FUN_00481620 =====

void FUN_00481620(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_250 [480];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_2 + 0x1d98);
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x60))(auStack_250,plVar2,1);
    param_1[1] = uStack_68;
    *param_1 = local_70;
    param_1[3] = uStack_58;
    param_1[2] = uStack_60;
    param_1[5] = uStack_48;
    param_1[4] = local_50;
    param_1[6] = local_40;
    FUN_00842058(auStack_250);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004816b8  FUN_004816b8 =====

void FUN_004816b8(long param_1,long *param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 0x1dd0) == '\0') {
    if (*(char *)(param_1 + 0x3d) != '\0') {
      *(undefined1 *)(param_1 + 0x3d) = 0;
      FUN_004385e8(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x1da0),0);
    }
    uVar3 = 0;
    cVar2 = *(char *)(*(long *)(param_1 + 0x10) + 0x388);
  }
  else {
    if (1.0 <= (float)(*param_2 - *(long *)(param_1 + 0x1dc8)) / 1e+09) {
      uVar3 = 0;
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x1dd1);
      if (bVar1 == 0) {
        uVar3 = 1;
      }
      else if ((bVar1 & 1) == 0) {
        uVar3 = bVar1 >> 1 & 3;
      }
      else {
        uVar3 = bVar1 >> 1 & 2 | 5;
      }
    }
    if ((uint)*(byte *)(param_1 + 0x3d) != uVar3 >> 2) {
      *(char *)(param_1 + 0x3d) = (char)((uVar3 & 4) >> 2);
      FUN_004385e8(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x1da0),
                   (uVar3 & 4) != 0 && *(char *)(param_1 + 0x3e) != '\0');
    }
    if (uVar3 != 0) goto LAB_004817c0;
    cVar2 = *(char *)(*(long *)(param_1 + 0x10) + 0x388);
  }
  if ((cVar2 != '\0') && (*(long **)(param_1 + 0x1d98) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x1d98) + 0xa8))();
  }
LAB_004817c0:
  FUN_00485dc0(param_1,uVar3);
  return;
}


// ===== 004817d4  FUN_004817d4 =====

void FUN_004817d4(long param_1,byte param_2)

{
  if (*(byte *)(param_1 + 0x3d) == (param_2 & 1)) {
    return;
  }
  *(byte *)(param_1 + 0x3d) = param_2 & 1;
  FUN_004385e8(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x1da0),
               param_2 & *(char *)(param_1 + 0x3e) != '\0');
  return;
}


// ===== 00481810  FUN_00481810 =====

void FUN_00481810(long param_1,int param_2)

{
  if (((param_2 == 0) && (*(char *)(*(long *)(param_1 + 0x10) + 0x388) != '\0')) &&
     (*(long **)(param_1 + 0x1d98) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x1d98) + 0xa8))();
  }
  FUN_00485dc0(param_1,param_2);
  return;
}


// ===== 0048185c  FUN_0048185c =====

void FUN_0048185c(long param_1,byte param_2)

{
  if (*(byte *)(param_1 + 0x3e) == (param_2 & 1)) {
    return;
  }
  *(byte *)(param_1 + 0x3e) = param_2 & 1;
  FUN_004385e8(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x1da0),
               *(char *)(param_1 + 0x3d) != '\0' & param_2);
  return;
}


// ===== 00481898  FUN_00481898 =====

void FUN_00481898(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  void *pvVar10;
  undefined8 *puVar11;
  undefined8 **ppuVar12;
  void *local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_00485ea4();
  if ((char)param_2[3] == '\0') {
    bVar5 = false;
  }
  else {
    lVar7 = *param_2;
    lVar1 = param_2[1];
    local_60 = 0x3f800000;
    uStack_78 = 0;
    local_80 = (void *)0x0;
    local_68 = 0;
    local_70 = (undefined8 *)0x0;
    for (; lVar7 != lVar1; lVar7 = lVar7 + 0x38) {
      FUN_004820ec(&local_80,lVar7,lVar7);
    }
    if (local_68 == *(long *)(param_1 + 0x1e18)) {
      ppuVar12 = &local_70;
      while( true ) {
        ppuVar12 = (undefined8 **)*ppuVar12;
        bVar5 = ppuVar12 != (undefined8 **)0x0;
        pvVar3 = local_80;
        puVar4 = local_70;
        if (ppuVar12 == (undefined8 **)0x0) break;
        lVar7 = FUN_00483cf4(param_1 + 0x1e00,ppuVar12 + 2);
        pvVar3 = local_80;
        puVar4 = local_70;
        if ((lVar7 == 0) ||
           (uVar8 = FUN_0048240c(ppuVar12 + 2,lVar7 + 0x10), pvVar3 = local_80, puVar4 = local_70,
           (uVar8 & 1) == 0)) break;
      }
    }
    else {
      bVar5 = true;
      pvVar3 = local_80;
      puVar4 = local_70;
    }
    while (puVar4 != (undefined8 *)0x0) {
      pvVar10 = (void *)*puVar4;
      local_80 = pvVar3;
      FUN_00441e1c(puVar4 + 6,puVar4[7]);
      if (*(char *)((long)puVar4 + 0x2f) < '\0') {
        operator_delete((void *)puVar4[3]);
      }
      operator_delete(puVar4);
      pvVar3 = local_80;
      puVar4 = (undefined8 *)pvVar10;
    }
    local_80 = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
  }
  if ((char)param_2[0xf] == '\0') {
    if (*(char *)((long)param_2 + 0xc1) != '\0') {
      bVar5 = true;
    }
  }
  else {
    lVar7 = param_2[0xc];
    lVar1 = param_2[0xd];
    local_60 = 0x3f800000;
    uStack_78 = 0;
    local_80 = (void *)0x0;
    local_68 = 0;
    local_70 = (undefined8 *)0x0;
    for (; lVar7 != lVar1; lVar7 = lVar7 + 0x40) {
      FUN_0048359c(&local_80,lVar7,lVar7);
    }
    if (local_68 == *(long *)(param_1 + 0x1df0)) {
      ppuVar12 = &local_70;
      while( true ) {
        ppuVar12 = (undefined8 **)*ppuVar12;
        bVar6 = ppuVar12 != (undefined8 **)0x0;
        pvVar3 = local_80;
        puVar4 = local_70;
        if (ppuVar12 == (undefined8 **)0x0) break;
        lVar7 = FUN_00483e40(param_1 + 0x1dd8,ppuVar12 + 2);
        pvVar3 = local_80;
        puVar4 = local_70;
        if ((lVar7 == 0) ||
           (uVar8 = FUN_004838bc(ppuVar12 + 2,lVar7 + 0x10), pvVar3 = local_80, puVar4 = local_70,
           (uVar8 & 1) == 0)) break;
      }
    }
    else {
      bVar6 = true;
      pvVar3 = local_80;
      puVar4 = local_70;
    }
    while (puVar4 != (undefined8 *)0x0) {
      puVar11 = (undefined8 *)*puVar4;
      local_80 = pvVar3;
      FUN_00441e1c(puVar4 + 7,puVar4[8]);
      if (*(char *)((long)puVar4 + 0x2f) < '\0') {
        operator_delete((void *)puVar4[3]);
      }
      operator_delete(puVar4);
      pvVar3 = local_80;
      puVar4 = puVar11;
    }
    local_80 = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    if (*(char *)((long)param_2 + 0xc1) != '\0') {
      bVar5 = true;
    }
    if (bVar6) {
      FUN_0047e44c(param_1);
      FUN_0047ce9c(param_1);
    }
  }
  if (bVar5) {
    for (plVar9 = *(long **)(param_1 + 0x1d58); plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      FUN_0047d2dc(param_1,plVar9 + 3);
      FUN_0047d3a4(param_1,plVar9 + 3);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00481b50  FUN_00481b50 =====

void FUN_00481b50(long param_1,ulong param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x1d58);
  if ((param_2 & 1) == 0) {
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      FUN_0047d2dc(param_1,plVar1 + 3);
      FUN_0047d3a4(param_1,plVar1 + 3);
    }
  }
  else {
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      (**(code **)(*(long *)plVar1[10] + 0x18))();
    }
  }
  return;
}


// ===== 00481bc4  FUN_00481bc4 =====

void FUN_00481bc4(long param_1,int param_2)

{
  if (*(long *)(param_1 + 0x1d98) != 0) {
    FUN_005d4450(*(long *)(param_1 + 0x1d98),(long)param_2 * 1000);
    return;
  }
  return;
}


// ===== 00481bdc  FUN_00481bdc =====

void FUN_00481bdc(long param_1,long param_2)

{
  long lVar1;
  
  if ((*(char *)(param_1 + 0x120) == '\0') && (param_2 != 0)) {
    lVar1 = FUN_005183d8();
    if (*(char *)(param_1 + 0x120) == '\0') {
      *(undefined1 *)(param_1 + 0x120) = 1;
    }
    *(long *)(param_1 + 0x118) = lVar1 / 1000000;
  }
  FUN_0045f79c(*(undefined8 *)(param_1 + 0x1e30),param_2,10);
  return;
}


// ===== 00481c48  FUN_00481c48 =====

void FUN_00481c48(long param_1,undefined8 param_2)

{
  FUN_0045f7ac(*(undefined8 *)(param_1 + 0x1e30),param_2,10);
  return;
}


// ===== 00481c54  FUN_00481c54 =====

void FUN_00481c54(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  
  lVar3 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar3 * 0x4ec4ec4ec4ec4ec5 + 1;
  if (0x276276276276276 < uVar1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar4 = param_1[2] - *param_1 >> 3;
  uVar5 = lVar4 * -0x6276276276276276;
  if (uVar5 < uVar1 || uVar5 - uVar1 == 0) {
    uVar5 = uVar1;
  }
  if (0x13b13b13b13b13a < (ulong)(lVar4 * 0x4ec4ec4ec4ec4ec5)) {
    uVar5 = 0x276276276276276;
  }
  if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  if (0x276276276276276 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_00401ad4();
  }
  pvVar2 = operator_new(uVar5 * 0x68);
  pvVar7 = (void *)((long)pvVar2 + lVar3 * 8);
  pvVar2 = (void *)((long)pvVar2 + uVar5 * 0x68);
  FUN_00845110(pvVar7,param_2);
  pvVar8 = (void *)*param_1;
  pvVar6 = (void *)param_1[1];
  lVar3 = (long)pvVar7 + 0x68;
  if (pvVar6 == pvVar8) {
    *param_1 = (long)pvVar7;
    param_1[1] = lVar3;
    param_1[2] = (long)pvVar2;
  }
  else {
    do {
      pvVar7 = (void *)((long)pvVar7 + -0x68);
      pvVar6 = (void *)((long)pvVar6 + -0x68);
      FUN_00845110(pvVar7,pvVar6);
    } while (pvVar6 != pvVar8);
    pvVar6 = (void *)*param_1;
    pvVar8 = (void *)param_1[1];
    *param_1 = (long)pvVar7;
    param_1[1] = lVar3;
    param_1[2] = (long)pvVar2;
    while (pvVar8 != pvVar6) {
      pvVar8 = (void *)((long)pvVar8 + -0x68);
      thunk_FUN_007b6d78(pvVar8);
    }
  }
  if (pvVar6 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar6);
  return;
}


// ===== 00481dd0  FUN_00481dd0 =====

void FUN_00481dd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1d440;
  FUN_005466c0();
  return;
}


// ===== 00481de0  FUN_00481de0 =====

void FUN_00481de0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1d440;
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 00481e10  FUN_00481e10 =====

void FUN_00481e10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00481e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}


// ===== 00481e1c  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00481e20  FUN_00481e20 =====

undefined8 FUN_00481e20(void)

{
  return 0;
}


// ===== 00481e28  FUN_00481e28 =====

void FUN_00481e28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00481e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 8))();
  return;
}


// ===== 00481e38  FUN_00481e38 =====

void FUN_00481e38(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00d1d478;
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


// ===== 00481e9c  FUN_00481e9c =====

void FUN_00481e9c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00d1d478;
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


// ===== 00481f00  FUN_00481f00 =====

void FUN_00481f00(long *param_1)

{
  ulong uVar1;
  long lVar2;
  float fVar3;
  
  lVar2 = *param_1;
  if (*(long *)(lVar2 + 0x1d98) != 0) {
    fVar3 = (float)NEON_fminnm(*(float *)(*(long *)(lVar2 + 0x10) + 0x3a8) *
                               *(float *)(lVar2 + 0x1db8) * *(float *)(lVar2 + 0x1dc4),0x41200000);
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    uVar1 = FUN_00417e08();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0((double)fVar3,&DAT_001f64af,"../../discord_native_lib/src/media/remote_user.cpp",
                   0xd01,"RemoteUser::UpdateVolume ",lVar2 + 0x20," effectiveGain: ");
    }
                    /* WARNING: Could not recover jumptable at 0x00481f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(lVar2 + 0x1d98) + 0x70))(fVar3);
    return;
  }
  return;
}


// ===== 00481fac  FUN_00481fac =====

void FUN_00481fac(long *param_1)

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


// ===== 00482010  FUN_00482010 =====

void FUN_00482010(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (*(long *)(lVar2 + 0x1d98) == 0) {
    uVar1 = FUN_004504d4(*(undefined8 *)(lVar2 + 0x10));
    if ((uVar1 & 1) != 0) {
      FUN_0047ce9c(lVar2);
      return;
    }
    if (*(long *)(lVar2 + 0x1d98) == 0) {
      return;
    }
  }
  uVar1 = FUN_004504d4(*(undefined8 *)(lVar2 + 0x10));
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_0047e44c(lVar2);
  return;
}


// ===== 00482078  FUN_00482078 =====

void FUN_00482078(long *param_1)

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


// ===== 004820dc  FUN_004820dc =====

undefined8 FUN_004820dc(void)

{
  return 1;
}


// ===== 004820e4  FUN_004820e4 =====

undefined8 FUN_004820e4(void)

{
  return 1;
}


// ===== 004820ec  FUN_004820ec =====

long * FUN_004820ec(long *param_1,byte *param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  ulong unaff_x26;
  undefined2 uVar15;
  undefined8 uVar16;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  bVar4 = param_2[0x1f];
  bVar2 = *param_2;
  bVar3 = param_2[1];
  pbVar1 = *(byte **)(param_2 + 8);
  if (-1 < (char)bVar4) {
    pbVar1 = param_2 + 8;
  }
  uVar7 = *(ulong *)(param_2 + 0x10);
  if (-1 < (char)bVar4) {
    uVar7 = (ulong)bVar4;
  }
  uVar7 = FUN_00427058(auStack_70,pbVar1,uVar7);
  uVar14 = param_1[1];
  uVar7 = uVar7 ^ (bVar3 ^ bVar2);
  if (uVar14 != 0) {
    uVar16 = NEON_cnt(uVar14,1);
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar11 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar11 < 2) {
      unaff_x26 = uVar14 - 1 & uVar7;
    }
    else {
      unaff_x26 = uVar7;
      if (uVar14 <= uVar7) {
        uVar8 = 0;
        if (uVar14 != 0) {
          uVar8 = uVar7 / uVar14;
        }
        unaff_x26 = uVar7 - uVar8 * uVar14;
      }
    }
    plVar13 = *(long **)(*param_1 + unaff_x26 * 8);
    if (plVar13 != (long *)0x0) {
      do {
        plVar13 = (long *)*plVar13;
        if (plVar13 == (long *)0x0) goto LAB_00482204;
        uVar8 = plVar13[1];
        if (uVar8 != uVar7) {
          if (uVar11 < 2) {
            uVar8 = uVar8 & uVar14 - 1;
          }
          else if (uVar14 <= uVar8) {
            uVar5 = 0;
            if (uVar14 != 0) {
              uVar5 = uVar8 / uVar14;
            }
            uVar8 = uVar8 - uVar5 * uVar14;
          }
          if (uVar8 != unaff_x26) goto LAB_00482204;
        }
        uVar8 = FUN_0048240c(plVar13 + 2,param_2);
      } while ((uVar8 & 1) == 0);
      uVar16 = 0;
      goto LAB_004823d4;
    }
  }
LAB_00482204:
  plVar13 = (long *)operator_new(0x48);
  uVar8 = FUN_00441364(plVar13 + 2,param_3);
  lVar9 = param_1[3];
  *plVar13 = 0;
  plVar13[1] = uVar7;
  if ((uVar14 == 0) || (*(float *)(param_1 + 4) * (float)uVar14 < (float)(lVar9 + 1))) {
    if (uVar14 < 3) {
      uVar11 = 1;
    }
    else {
      uVar11 = (ulong)((uVar14 & uVar14 - 1) != 0);
    }
    uVar11 = uVar11 | uVar14 << 1;
    uVar14 = (ulong)((float)(lVar9 + 1) / *(float *)(param_1 + 4));
    if (uVar11 <= uVar14) {
      uVar11 = uVar14;
    }
    if (uVar11 - 1 == 0) {
      uVar11 = 2;
    }
    else if ((uVar11 & uVar11 - 1) != 0) {
      uVar8 = FUN_005204f8(uVar11);
      uVar11 = uVar8;
    }
    uVar14 = param_1[1];
    if (uVar14 < uVar11) {
LAB_004822a8:
      uVar8 = FUN_004825c4(param_1,uVar11);
    }
    else if (uVar11 < uVar14) {
      uVar8 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar14 < 3) {
LAB_00482318:
        uVar8 = FUN_005204f8();
      }
      else {
        uVar16 = NEON_cnt(uVar14,1);
        uVar15 = NEON_uaddlv(uVar16,1);
        if (1 < (CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff)) goto LAB_00482318;
        if (1 < uVar8) {
          uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
        }
      }
      if (uVar11 <= uVar8) {
        uVar11 = uVar8;
      }
      if (uVar11 < uVar14) goto LAB_004822a8;
    }
    uVar14 = param_1[1];
    if ((uVar14 & uVar14 - 1) == 0) {
      unaff_x26 = uVar14 - 1 & uVar7;
    }
    else {
      unaff_x26 = uVar7;
      if (uVar14 <= uVar7) {
        uVar11 = 0;
        if (uVar14 != 0) {
          uVar11 = uVar7 / uVar14;
        }
        unaff_x26 = uVar7 - uVar11 * uVar14;
      }
    }
  }
  lVar9 = *param_1;
  plVar10 = *(long **)(lVar9 + unaff_x26 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = param_1 + 2;
    lVar12 = *plVar10;
    *plVar10 = (long)plVar13;
    *plVar13 = lVar12;
    *(long **)(lVar9 + unaff_x26 * 8) = plVar10;
    if (*plVar13 != 0) {
      uVar7 = *(ulong *)(*plVar13 + 8);
      if ((uVar14 & uVar14 - 1) == 0) {
        uVar7 = uVar7 & uVar14 - 1;
      }
      else if (uVar14 <= uVar7) {
        uVar11 = 0;
        if (uVar14 != 0) {
          uVar11 = uVar7 / uVar14;
        }
        uVar7 = uVar7 - uVar11 * uVar14;
      }
      plVar10 = (long *)(*param_1 + uVar7 * 8);
      goto LAB_004823c0;
    }
  }
  else {
    *plVar13 = *plVar10;
LAB_004823c0:
    *plVar10 = (long)plVar13;
  }
  uVar16 = 1;
  param_1[3] = param_1[3] + 1;
LAB_004823d4:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return plVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8,uVar16);
}


// ===== 0048240c  FUN_0048240c =====

uint FUN_0048240c(char *param_1,char *param_2)

{
  size_t __n;
  size_t sVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  char *pcVar13;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    bVar3 = param_1[0x1f];
    uVar10 = (ulong)bVar3;
    bVar4 = param_2[0x1f];
    __n = *(size_t *)(param_1 + 0x10);
    if (-1 < (char)bVar3) {
      __n = uVar10;
    }
    sVar1 = *(size_t *)(param_2 + 0x10);
    if (-1 < (char)bVar4) {
      sVar1 = (ulong)bVar4;
    }
    if (__n == sVar1) {
      pcVar13 = param_1 + 8;
      pcVar2 = *(char **)pcVar13;
      if (-1 < (char)bVar3) {
        pcVar2 = pcVar13;
      }
      pcVar9 = *(char **)(param_2 + 8);
      if (-1 < (char)bVar4) {
        pcVar9 = param_2 + 8;
      }
      if ((char)bVar3 < '\0') {
        if ((__n != 0) && (iVar7 = memcmp(pcVar2,pcVar9,__n), iVar7 != 0)) goto LAB_0048257c;
      }
      else if (bVar3 != 0) {
        do {
          if (*pcVar13 != *pcVar9) goto LAB_0048257c;
          uVar10 = uVar10 - 1;
          pcVar13 = pcVar13 + 1;
          pcVar9 = pcVar9 + 1;
        } while (uVar10 != 0);
      }
      if (*(long *)(param_1 + 0x30) == *(long *)(param_2 + 0x30)) {
        pcVar13 = *(char **)(param_1 + 0x20);
        if (pcVar13 == param_1 + 0x28) {
          uVar8 = 1;
        }
        else {
          plVar11 = *(long **)(param_2 + 0x20);
          do {
            uVar8 = FUN_0046b450(pcVar13 + 0x20,plVar11 + 4);
            if ((uVar8 & 1) == 0) goto LAB_0048257c;
            if (pcVar13 == (char *)0x0) {
LAB_0048259c:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
                         "__x != nullptr","node shouldn\'t be null");
            }
            pcVar2 = *(char **)(pcVar13 + 8);
            pcVar9 = pcVar13;
            if (*(char **)(pcVar13 + 8) == (char *)0x0) {
              do {
                pcVar13 = *(char **)(pcVar9 + 0x10);
                bVar6 = *(char **)pcVar13 != pcVar9;
                pcVar9 = pcVar13;
              } while (bVar6);
            }
            else {
              do {
                pcVar13 = pcVar2;
                pcVar2 = *(char **)pcVar13;
              } while (*(char **)pcVar13 != (char *)0x0);
            }
            if (plVar11 == (long *)0x0) goto LAB_0048259c;
            plVar5 = (long *)plVar11[1];
            plVar12 = plVar11;
            if ((long *)plVar11[1] == (long *)0x0) {
              do {
                plVar11 = (long *)plVar12[2];
                bVar6 = (long *)*plVar11 != plVar12;
                plVar12 = plVar11;
              } while (bVar6);
            }
            else {
              do {
                plVar11 = plVar5;
                plVar5 = (long *)*plVar11;
              } while ((long *)*plVar11 != (long *)0x0);
            }
          } while (pcVar13 != param_1 + 0x28);
        }
        goto LAB_00482580;
      }
    }
  }
LAB_0048257c:
  uVar8 = 0;
LAB_00482580:
  return uVar8 & 1;
}


// ===== 004825c4  FUN_004825c4 =====

void FUN_004825c4(long *param_1,ulong param_2)

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


// ===== 00482720  FUN_00482720 =====

void FUN_00482720(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  if (param_1[3] != 0) {
    puVar2 = (undefined8 *)param_1[2];
    while (puVar2 != (undefined8 *)0x0) {
      pvVar3 = (void *)*puVar2;
      FUN_00441e1c(puVar2 + 6,puVar2[7]);
      if (*(char *)((long)puVar2 + 0x2f) < '\0') {
        operator_delete((void *)puVar2[3]);
      }
      operator_delete(puVar2);
      puVar2 = (undefined8 *)pvVar3;
    }
    lVar4 = param_1[1];
    param_1[2] = 0;
    if (lVar4 != 0) {
      lVar5 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar5 * 8) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar4 != lVar5);
    }
    param_1[3] = 0;
  }
  lVar4 = *param_2;
  *param_2 = 0;
  pvVar3 = (void *)*param_1;
  *param_1 = lVar4;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  lVar5 = param_2[2];
  lVar7 = param_2[1];
  lVar4 = param_2[4];
  param_1[2] = lVar5;
  param_1[1] = lVar7;
  lVar7 = param_2[3];
  param_2[1] = 0;
  *(int *)(param_1 + 4) = (int)lVar4;
  param_1[3] = lVar7;
  if (lVar7 != 0) {
    uVar8 = param_1[1];
    uVar6 = *(ulong *)(lVar5 + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar6 = uVar8 - 1 & uVar6;
    }
    else if (uVar8 <= uVar6) {
      uVar1 = 0;
      if (uVar8 != 0) {
        uVar1 = uVar6 / uVar8;
      }
      uVar6 = uVar6 - uVar1 * uVar8;
    }
    *(long **)(*param_1 + uVar6 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}


// ===== 00482834  FUN_00482834 =====

void FUN_00482834(undefined8 *param_1)

{
  FUN_0047fa9c(*param_1);
  return;
}


// ===== 0048283c  FUN_0048283c =====

void FUN_0048283c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1d4a8;
  FUN_005466c0();
  return;
}


// ===== 0048284c  FUN_0048284c =====

void FUN_0048284c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1d4a8;
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 0048287c  FUN_0048287c =====

void FUN_0048287c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00482884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00482888  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0048288c  FUN_0048288c =====

void FUN_0048288c(long *param_1)

{
  undefined *puVar1;
  
  *param_1 = (long)&PTR_FUN_00d1cba0;
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
  *(undefined8 *)((long)param_1 + 0x59) = 0;
  *(undefined8 *)((long)param_1 + 0x51) = 0;
  FUN_007b5d10(param_1 + 8);
  *(undefined1 *)(param_1 + 0xc) = 1;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((long)param_1 + 0xa9) = 0;
  *(undefined8 *)((long)param_1 + 0xa1) = 0;
  FUN_007b5d10(param_1 + 0x12);
  puVar1 = PTR_DAT_00d51c20;
  *(undefined1 *)(param_1 + 0x16) = 1;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_0089e258(param_1 + 0x18);
  FUN_0089e258(param_1 + 0x35);
  FUN_0054680c(param_1 + 0x52);
  param_1[0x61] = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0x3f800000;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
  FUN_007bfa40(param_1 + 0x62);
  FUN_007bfa40(param_1 + 0x6a);
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  FUN_005f068c(param_1 + 0x74);
  FUN_005f068c(param_1 + 0x7b);
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0;
  param_1[0x87] = 0;
  param_1[0x84] = (long)(param_1 + 0x84);
  param_1[0x85] = (long)(param_1 + 0x84);
  param_1[0x86] = 0;
  return;
}


// ===== 00482994  thunk_FUN_004bc7c8 =====

void thunk_FUN_004bc7c8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  
  *param_1 = &PTR_FUN_00d1ecd0;
  if (param_1[0x86] != 0) {
    lVar3 = param_1[0x84];
    plVar2 = (long *)param_1[0x85];
    param_1[0x86] = 0;
    lVar4 = *plVar2;
    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar3 + 8);
    **(long **)(lVar3 + 8) = lVar4;
    while (plVar2 != param_1 + 0x84) {
      plVar5 = (long *)plVar2[1];
      operator_delete(plVar2);
      plVar2 = plVar5;
    }
  }
  FUN_005f0718(param_1 + 0x7b);
  FUN_005f0718(param_1 + 0x74);
  FUN_007bfb14(param_1 + 0x6a);
  FUN_007bfb14(param_1 + 0x62);
  puVar1 = (undefined8 *)param_1[0x5e];
  while (puVar1 != (undefined8 *)0x0) {
    pvVar6 = (void *)*puVar1;
    FUN_0089e310(puVar1 + 3);
    operator_delete(puVar1);
    puVar1 = (undefined8 *)pvVar6;
  }
  pvVar6 = (void *)param_1[0x5c];
  param_1[0x5c] = 0;
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
  }
  puVar1 = (undefined8 *)param_1[0x59];
  while (puVar1 != (undefined8 *)0x0) {
    pvVar6 = (void *)*puVar1;
    FUN_007bfb14(puVar1 + 3);
    operator_delete(puVar1);
    puVar1 = (undefined8 *)pvVar6;
  }
  pvVar6 = (void *)param_1[0x57];
  param_1[0x57] = 0;
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
  }
  FUN_005468e0(param_1 + 0x52);
  FUN_0089e310(param_1 + 0x35);
  FUN_0089e310(param_1 + 0x18);
  *param_1 = &PTR_FUN_00d1cba0;
  if (*(char *)(param_1 + 0x16) != '\0') {
    FUN_007b5d24(param_1 + 0x12);
  }
  FUN_00546ab0(param_1 + 0xd);
  if (*(char *)(param_1 + 0xc) != '\0') {
    FUN_007b5d24(param_1 + 8);
  }
  FUN_00546ab0(param_1 + 3);
  if (param_1[2] == 0) {
    return;
  }
  FUN_005466cc();
  return;
}


// ===== 00482998  FUN_00482998 =====

void FUN_00482998(void *param_1)

{
  FUN_004bc7c8();
  operator_delete(param_1);
  return;
}


// ===== 004829bc  FUN_004829bc =====

void FUN_004829bc(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x418) = param_2;
  return;
}


// ===== 004829c4  FUN_004829c4 =====

void FUN_004829c4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 004829d0  FUN_004829d0 =====

void FUN_004829d0(void)

{
  return;
}


// ===== 004829d4  FUN_004829d4 =====

undefined8 FUN_004829d4(void)

{
  return 1;
}


// ===== 004829dc  FUN_004829dc =====

void FUN_004829dc(void)

{
  return;
}


// ===== 004829e0  FUN_004829e0 =====

void FUN_004829e0(long param_1,undefined8 param_2)

{
  long lVar1;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0xb8) == '\0') {
    *(undefined1 *)(param_1 + 0xb8) = 1;
    FUN_005467a4(param_1 + 0x18);
    if (*(char *)(param_1 + 0x60) == '\0') {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
                 "this->has_value()","optional operator-> called on a disengaged value");
    }
    local_40 = param_1;
    FUN_007b6160(param_1 + 0x40,&local_40,FUN_00482aec);
    FUN_005467c8(param_1 + 0x18);
  }
  FUN_004b92a0(param_1 + 0x448,param_2);
  FUN_004bd05c(param_1,param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00482ab4  FUN_00482ab4 =====

void FUN_00482ab4(long param_1)

{
  FUN_004bc7c8(param_1 + -0x440);
  return;
}


// ===== 00482abc  FUN_00482abc =====

void FUN_00482abc(long param_1)

{
  FUN_004bc7c8((void *)(param_1 + -0x440));
  operator_delete((void *)(param_1 + -0x440));
  return;
}


// ===== 00482ae4  FUN_00482ae4 =====

void FUN_00482ae4(long param_1)

{
  FUN_004829e0(param_1 + -0x440);
  return;
}


// ===== 00482aec  FUN_00482aec =====

void FUN_00482aec(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00482afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*param_1);
  return;
}


// ===== 00482b00  FUN_00482b00 =====

void FUN_00482b00(long *param_1,ulong param_2)

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


// ===== 00482c5c  FUN_00482c5c =====

undefined1  [16] FUN_00482c5c(long *param_1,uint *param_2,undefined4 *param_3,long *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x25;
  undefined2 uVar15;
  undefined8 uVar16;
  long lVar17;
  float fVar18;
  long lVar19;
  long lVar20;
  undefined1 auVar21 [16];
  
  uVar14 = param_1[1];
  uVar1 = *param_2;
  uVar13 = (ulong)uVar1;
  if (uVar14 != 0) {
    uVar16 = NEON_cnt(uVar14,1);
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar6 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar6 < 2) {
      unaff_x25 = (ulong)((int)uVar14 - 1U & uVar1);
    }
    else {
      unaff_x25 = uVar13;
      if (uVar14 <= uVar13) {
        uVar8 = 0;
        if (uVar14 != 0) {
          uVar8 = uVar13 / uVar14;
        }
        unaff_x25 = uVar13 - uVar8 * uVar14;
      }
    }
    plVar12 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        plVar12 = (long *)*plVar12;
        if (plVar12 == (long *)0x0) goto LAB_00482d24;
        uVar8 = plVar12[1];
        if (uVar8 != uVar13) {
          if (uVar6 < 2) {
            uVar8 = uVar8 & uVar14 - 1;
          }
          else if (uVar14 <= uVar8) {
            uVar3 = 0;
            if (uVar14 != 0) {
              uVar3 = uVar8 / uVar14;
            }
            uVar8 = uVar8 - uVar3 * uVar14;
          }
          if (uVar8 != unaff_x25) goto LAB_00482d24;
        }
      } while (*(uint *)(plVar12 + 2) != uVar1);
      uVar16 = 0;
      goto LAB_00482f24;
    }
  }
LAB_00482d24:
  plVar12 = (long *)operator_new(0x58);
  uVar2 = *param_3;
  lVar17 = param_4[2];
  lVar10 = param_4[1];
  param_4[1] = 0;
  param_4[2] = 0;
  lVar5 = param_4[3];
  *plVar12 = 0;
  plVar12[1] = uVar13;
  lVar20 = param_4[5];
  lVar19 = param_4[4];
  param_4[3] = 0;
  param_4[4] = 0;
  lVar7 = param_4[6];
  lVar9 = param_4[7];
  param_4[5] = 0;
  param_4[6] = 0;
  lVar11 = param_1[3];
  *(undefined4 *)(plVar12 + 2) = uVar2;
  plVar12[5] = lVar17;
  plVar12[4] = lVar10;
  lVar10 = *param_4;
  plVar12[8] = lVar20;
  plVar12[7] = lVar19;
  fVar18 = *(float *)(param_1 + 4);
  plVar12[6] = lVar5;
  plVar12[3] = lVar10;
  plVar12[9] = lVar7;
  plVar12[10] = lVar9;
  if ((uVar14 == 0) || (fVar18 * (float)uVar14 < (float)(lVar11 + 1))) {
    if (uVar14 < 3) {
      uVar6 = 1;
    }
    else {
      uVar6 = (ulong)((uVar14 & uVar14 - 1) != 0);
    }
    uVar6 = uVar6 | uVar14 << 1;
    uVar14 = (ulong)((float)(lVar11 + 1) / fVar18);
    if (uVar6 <= uVar14) {
      uVar6 = uVar14;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      uVar6 = FUN_005204f8(uVar6);
    }
    uVar14 = param_1[1];
    if (uVar14 < uVar6) {
LAB_00482e6c:
      FUN_00482f40(param_1,uVar6);
    }
    else if (uVar6 < uVar14) {
      uVar8 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar14 < 3) {
LAB_00482e58:
        uVar8 = FUN_005204f8();
      }
      else {
        uVar16 = NEON_cnt(uVar14,1);
        uVar15 = NEON_uaddlv(uVar16,1);
        if (1 < (CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff)) goto LAB_00482e58;
        if (1 < uVar8) {
          uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
        }
      }
      if (uVar6 <= uVar8) {
        uVar6 = uVar8;
      }
      if (uVar6 < uVar14) goto LAB_00482e6c;
    }
    uVar14 = param_1[1];
    if ((uVar14 & uVar14 - 1) == 0) {
      unaff_x25 = (ulong)((int)uVar14 - 1U & uVar1);
    }
    else {
      unaff_x25 = uVar13;
      if (uVar14 <= uVar13) {
        uVar6 = 0;
        if (uVar14 != 0) {
          uVar6 = uVar13 / uVar14;
        }
        unaff_x25 = uVar13 - uVar6 * uVar14;
      }
    }
  }
  lVar7 = *param_1;
  plVar4 = *(long **)(lVar7 + unaff_x25 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    lVar9 = *plVar4;
    *plVar4 = (long)plVar12;
    *plVar12 = lVar9;
    *(long **)(lVar7 + unaff_x25 * 8) = plVar4;
    if (*plVar12 != 0) {
      uVar13 = *(ulong *)(*plVar12 + 8);
      if ((uVar14 & uVar14 - 1) == 0) {
        uVar13 = uVar13 & uVar14 - 1;
      }
      else if (uVar14 <= uVar13) {
        uVar6 = 0;
        if (uVar14 != 0) {
          uVar6 = uVar13 / uVar14;
        }
        uVar13 = uVar13 - uVar6 * uVar14;
      }
      plVar4 = (long *)(*param_1 + uVar13 * 8);
      goto LAB_00482f10;
    }
  }
  else {
    *plVar12 = *plVar4;
LAB_00482f10:
    *plVar4 = (long)plVar12;
  }
  uVar16 = 1;
  param_1[3] = param_1[3] + 1;
LAB_00482f24:
  auVar21._8_8_ = uVar16;
  auVar21._0_8_ = plVar12;
  return auVar21;
}


// ===== 00482f40  FUN_00482f40 =====

void FUN_00482f40(long *param_1,ulong param_2)

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


// ===== 0048309c  FUN_0048309c =====

undefined8 FUN_0048309c(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  void *local_50 [2];
  char local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (param_2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__hash_table",0x965,
               "__p != end()",
               "unordered container erase(iterator) called with a non-dereferenceable iterator");
  }
  uVar7 = *param_2;
  FUN_00483174(local_50);
  pvVar5 = local_50[0];
  local_50[0] = (void *)0x0;
  if (pvVar5 != (void *)0x0) {
    if ((local_40 != '\0') && (plVar8 = *(long **)((long)pvVar5 + 0x20), plVar8 != (long *)0x0)) {
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
    }
    operator_delete(pvVar5);
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00483174  FUN_00483174 =====

void FUN_00483174(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar9 == uVar3) goto LAB_00483240;
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
    if (uVar9 == uVar3) goto LAB_00483240;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_00483240:
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


// ===== 004832a8  FUN_004832a8 =====

undefined8 FUN_004832a8(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  void *local_50 [2];
  char local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__hash_table",0x965,
               "__p != end()",
               "unordered container erase(iterator) called with a non-dereferenceable iterator");
  }
  uVar4 = *param_2;
  FUN_00483374(local_50);
  pvVar3 = local_50[0];
  local_50[0] = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    if (local_40 != '\0') {
      if (*(char *)((long)pvVar3 + 0x4f) < '\0') {
        operator_delete(*(void **)((long)pvVar3 + 0x38));
        cVar1 = *(char *)((long)pvVar3 + 0x37);
      }
      else {
        cVar1 = *(char *)((long)pvVar3 + 0x37);
      }
      if (cVar1 < '\0') {
        operator_delete(*(void **)((long)pvVar3 + 0x20));
      }
    }
    operator_delete(pvVar3);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}


// ===== 00483374  FUN_00483374 =====

void FUN_00483374(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar9 == uVar3) goto LAB_00483440;
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
    if (uVar9 == uVar3) goto LAB_00483440;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_00483440:
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


// ===== 004834a8  FUN_004834a8 =====

undefined1  [16] FUN_004834a8(long *param_1,byte *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  
  plVar2 = (long *)operator_new(0x68);
  *(uint *)(plVar2 + 4) = (uint)*param_2;
  FUN_00667434(plVar2 + 5,param_2 + 8);
  plVar5 = param_1 + 1;
  plVar3 = plVar5;
  if ((long *)*plVar5 != (long *)0x0) {
    plVar1 = (long *)*plVar5;
    do {
      while (plVar3 = plVar1, (int)plVar3[4] <= (int)plVar2[4]) {
        if ((int)plVar2[4] <= (int)plVar3[4]) {
          FUN_006678ac(plVar2 + 5);
          operator_delete(plVar2);
          uVar4 = 0;
          goto LAB_00483588;
        }
        plVar1 = (long *)plVar3[1];
        if ((long *)plVar3[1] == (long *)0x0) {
          plVar5 = plVar3 + 1;
          goto LAB_00483530;
        }
      }
      plVar5 = plVar3;
      plVar1 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
LAB_00483530:
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = (long)plVar3;
  *plVar5 = (long)plVar2;
  plVar3 = plVar2;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    plVar3 = (long *)*plVar5;
  }
  FUN_0041dcd0(param_1[1],plVar3);
  uVar4 = 1;
  param_1[2] = param_1[2] + 1;
  plVar3 = plVar2;
LAB_00483588:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = plVar3;
  return auVar6;
}


// ===== 0048359c  FUN_0048359c =====

long * FUN_0048359c(long *param_1,byte *param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  ulong unaff_x26;
  undefined2 uVar14;
  undefined8 uVar15;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  bVar3 = param_2[0x1f];
  pbVar1 = *(byte **)(param_2 + 8);
  if (-1 < (char)bVar3) {
    pbVar1 = param_2 + 8;
  }
  bVar2 = *param_2;
  uVar6 = *(ulong *)(param_2 + 0x10);
  if (-1 < (char)bVar3) {
    uVar6 = (ulong)bVar3;
  }
  uVar6 = FUN_00427058(auStack_70,pbVar1,uVar6);
  uVar13 = param_1[1];
  uVar6 = uVar6 ^ (ulong)bVar2 ^ (ulong)*(uint *)(param_2 + 0x20) ^ (ulong)*(uint *)(param_2 + 0x24)
  ;
  if (uVar13 != 0) {
    uVar15 = NEON_cnt(uVar13,1);
    uVar14 = NEON_uaddlv(uVar15,1);
    uVar10 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
    if (uVar10 < 2) {
      unaff_x26 = uVar13 - 1 & uVar6;
    }
    else {
      unaff_x26 = uVar6;
      if (uVar13 <= uVar6) {
        uVar7 = 0;
        if (uVar13 != 0) {
          uVar7 = uVar6 / uVar13;
        }
        unaff_x26 = uVar6 - uVar7 * uVar13;
      }
    }
    plVar12 = *(long **)(*param_1 + unaff_x26 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        plVar12 = (long *)*plVar12;
        if (plVar12 == (long *)0x0) goto LAB_004836b4;
        uVar7 = plVar12[1];
        if (uVar7 != uVar6) {
          if (uVar10 < 2) {
            uVar7 = uVar7 & uVar13 - 1;
          }
          else if (uVar13 <= uVar7) {
            uVar4 = 0;
            if (uVar13 != 0) {
              uVar4 = uVar7 / uVar13;
            }
            uVar7 = uVar7 - uVar4 * uVar13;
          }
          if (uVar7 != unaff_x26) goto LAB_004836b4;
        }
        uVar7 = FUN_004838bc(plVar12 + 2,param_2);
      } while ((uVar7 & 1) == 0);
      uVar15 = 0;
      goto LAB_00483884;
    }
  }
LAB_004836b4:
  plVar12 = (long *)operator_new(0x50);
  uVar7 = FUN_00441b00(plVar12 + 2,param_3);
  lVar8 = param_1[3];
  *plVar12 = 0;
  plVar12[1] = uVar6;
  if ((uVar13 == 0) || (*(float *)(param_1 + 4) * (float)uVar13 < (float)(lVar8 + 1))) {
    if (uVar13 < 3) {
      uVar10 = 1;
    }
    else {
      uVar10 = (ulong)((uVar13 & uVar13 - 1) != 0);
    }
    uVar10 = uVar10 | uVar13 << 1;
    uVar13 = (ulong)((float)(lVar8 + 1) / *(float *)(param_1 + 4));
    if (uVar10 <= uVar13) {
      uVar10 = uVar13;
    }
    if (uVar10 - 1 == 0) {
      uVar10 = 2;
    }
    else if ((uVar10 & uVar10 - 1) != 0) {
      uVar7 = FUN_005204f8(uVar10);
      uVar10 = uVar7;
    }
    uVar13 = param_1[1];
    if (uVar13 < uVar10) {
LAB_00483758:
      uVar7 = FUN_00483a84(param_1,uVar10);
    }
    else if (uVar10 < uVar13) {
      uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar13 < 3) {
LAB_004837c8:
        uVar7 = FUN_005204f8();
      }
      else {
        uVar15 = NEON_cnt(uVar13,1);
        uVar14 = NEON_uaddlv(uVar15,1);
        if (1 < (CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff)) goto LAB_004837c8;
        if (1 < uVar7) {
          uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
        }
      }
      if (uVar10 <= uVar7) {
        uVar10 = uVar7;
      }
      if (uVar10 < uVar13) goto LAB_00483758;
    }
    uVar13 = param_1[1];
    if ((uVar13 & uVar13 - 1) == 0) {
      unaff_x26 = uVar13 - 1 & uVar6;
    }
    else {
      unaff_x26 = uVar6;
      if (uVar13 <= uVar6) {
        uVar10 = 0;
        if (uVar13 != 0) {
          uVar10 = uVar6 / uVar13;
        }
        unaff_x26 = uVar6 - uVar10 * uVar13;
      }
    }
  }
  lVar8 = *param_1;
  plVar9 = *(long **)(lVar8 + unaff_x26 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    lVar11 = *plVar9;
    *plVar9 = (long)plVar12;
    *plVar12 = lVar11;
    *(long **)(lVar8 + unaff_x26 * 8) = plVar9;
    if (*plVar12 != 0) {
      uVar6 = *(ulong *)(*plVar12 + 8);
      if ((uVar13 & uVar13 - 1) == 0) {
        uVar6 = uVar6 & uVar13 - 1;
      }
      else if (uVar13 <= uVar6) {
        uVar10 = 0;
        if (uVar13 != 0) {
          uVar10 = uVar6 / uVar13;
        }
        uVar6 = uVar6 - uVar10 * uVar13;
      }
      plVar9 = (long *)(*param_1 + uVar6 * 8);
      goto LAB_00483870;
    }
  }
  else {
    *plVar12 = *plVar9;
LAB_00483870:
    *plVar9 = (long)plVar12;
  }
  uVar15 = 1;
  param_1[3] = param_1[3] + 1;
LAB_00483884:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return plVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7,uVar15);
}


// ===== 004838bc  FUN_004838bc =====

uint FUN_004838bc(char *param_1,char *param_2)

{
  size_t __n;
  size_t sVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  char *pcVar13;
  
  if (*param_1 == *param_2) {
    bVar3 = param_1[0x1f];
    uVar10 = (ulong)bVar3;
    bVar4 = param_2[0x1f];
    __n = *(size_t *)(param_1 + 0x10);
    if (-1 < (char)bVar3) {
      __n = uVar10;
    }
    sVar1 = *(size_t *)(param_2 + 0x10);
    if (-1 < (char)bVar4) {
      sVar1 = (ulong)bVar4;
    }
    if (__n == sVar1) {
      pcVar13 = param_1 + 8;
      pcVar2 = *(char **)pcVar13;
      if (-1 < (char)bVar3) {
        pcVar2 = pcVar13;
      }
      pcVar9 = *(char **)(param_2 + 8);
      if (-1 < (char)bVar4) {
        pcVar9 = param_2 + 8;
      }
      if ((char)bVar3 < '\0') {
        if ((__n != 0) && (iVar7 = memcmp(pcVar2,pcVar9,__n), iVar7 != 0)) goto LAB_00483a3c;
      }
      else if (bVar3 != 0) {
        do {
          if (*pcVar13 != *pcVar9) goto LAB_00483a3c;
          uVar10 = uVar10 - 1;
          pcVar13 = pcVar13 + 1;
          pcVar9 = pcVar9 + 1;
        } while (uVar10 != 0);
      }
      if (((*(int *)(param_1 + 0x20) == *(int *)(param_2 + 0x20)) &&
          (*(int *)(param_1 + 0x24) == *(int *)(param_2 + 0x24))) &&
         (*(long *)(param_1 + 0x38) == *(long *)(param_2 + 0x38))) {
        pcVar13 = *(char **)(param_1 + 0x28);
        if (pcVar13 == param_1 + 0x30) {
          uVar8 = 1;
        }
        else {
          plVar11 = *(long **)(param_2 + 0x28);
          do {
            uVar8 = FUN_0046b450(pcVar13 + 0x20,plVar11 + 4);
            if ((uVar8 & 1) == 0) goto LAB_00483a3c;
            if (pcVar13 == (char *)0x0) {
LAB_00483a5c:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
                         "__x != nullptr","node shouldn\'t be null");
            }
            pcVar2 = *(char **)(pcVar13 + 8);
            pcVar9 = pcVar13;
            if (*(char **)(pcVar13 + 8) == (char *)0x0) {
              do {
                pcVar13 = *(char **)(pcVar9 + 0x10);
                bVar6 = *(char **)pcVar13 != pcVar9;
                pcVar9 = pcVar13;
              } while (bVar6);
            }
            else {
              do {
                pcVar13 = pcVar2;
                pcVar2 = *(char **)pcVar13;
              } while (*(char **)pcVar13 != (char *)0x0);
            }
            if (plVar11 == (long *)0x0) goto LAB_00483a5c;
            plVar5 = (long *)plVar11[1];
            plVar12 = plVar11;
            if ((long *)plVar11[1] == (long *)0x0) {
              do {
                plVar11 = (long *)plVar12[2];
                bVar6 = (long *)*plVar11 != plVar12;
                plVar12 = plVar11;
              } while (bVar6);
            }
            else {
              do {
                plVar11 = plVar5;
                plVar5 = (long *)*plVar11;
              } while ((long *)*plVar11 != (long *)0x0);
            }
          } while (pcVar13 != param_1 + 0x30);
        }
        goto LAB_00483a40;
      }
    }
  }
LAB_00483a3c:
  uVar8 = 0;
LAB_00483a40:
  return uVar8 & 1;
}


// ===== 00483a84  FUN_00483a84 =====

void FUN_00483a84(long *param_1,ulong param_2)

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


// ===== 00483be0  FUN_00483be0 =====

void FUN_00483be0(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  if (param_1[3] != 0) {
    puVar2 = (undefined8 *)param_1[2];
    while (puVar2 != (undefined8 *)0x0) {
      pvVar3 = (void *)*puVar2;
      FUN_00441e1c(puVar2 + 7,puVar2[8]);
      if (*(char *)((long)puVar2 + 0x2f) < '\0') {
        operator_delete((void *)puVar2[3]);
      }
      operator_delete(puVar2);
      puVar2 = (undefined8 *)pvVar3;
    }
    lVar4 = param_1[1];
    param_1[2] = 0;
    if (lVar4 != 0) {
      lVar5 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar5 * 8) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar4 != lVar5);
    }
    param_1[3] = 0;
  }
  lVar4 = *param_2;
  *param_2 = 0;
  pvVar3 = (void *)*param_1;
  *param_1 = lVar4;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  lVar5 = param_2[2];
  lVar7 = param_2[1];
  lVar4 = param_2[4];
  param_1[2] = lVar5;
  param_1[1] = lVar7;
  lVar7 = param_2[3];
  param_2[1] = 0;
  *(int *)(param_1 + 4) = (int)lVar4;
  param_1[3] = lVar7;
  if (lVar7 != 0) {
    uVar8 = param_1[1];
    uVar6 = *(ulong *)(lVar5 + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar6 = uVar8 - 1 & uVar6;
    }
    else if (uVar8 <= uVar6) {
      uVar1 = 0;
      if (uVar8 != 0) {
        uVar1 = uVar6 / uVar8;
      }
      uVar6 = uVar6 - uVar1 * uVar8;
    }
    *(long **)(*param_1 + uVar6 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}


// ===== 00483cf4  FUN_00483cf4 =====

long * FUN_00483cf4(long *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  bVar1 = *param_2;
  uVar6 = *(ulong *)(param_2 + 0x10);
  pbVar5 = *(byte **)(param_2 + 8);
  if (-1 < (char)param_2[0x1f]) {
    uVar6 = (ulong)param_2[0x1f];
    pbVar5 = param_2 + 8;
  }
  bVar2 = param_2[1];
  uVar6 = FUN_00427058(auStack_60,pbVar5,uVar6);
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar6 = uVar6 ^ (bVar2 ^ bVar1);
    uVar13 = NEON_cnt(uVar9,1);
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar10 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
    if (uVar10 < 2) {
      uVar11 = uVar9 - 1 & uVar6;
    }
    else {
      uVar11 = uVar6;
      if (uVar9 <= uVar6) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar6 / uVar9;
        }
        uVar11 = uVar6 - uVar11 * uVar9;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar11 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      if (plVar7 != (long *)0x0) {
        do {
          uVar8 = plVar7[1];
          if (uVar6 == uVar8) {
            uVar8 = FUN_0048240c(plVar7 + 2,param_2);
            if ((uVar8 & 1) != 0) break;
          }
          else {
            if (uVar10 < 2) {
              uVar8 = uVar8 & uVar9 - 1;
            }
            else if (uVar9 <= uVar8) {
              uVar3 = 0;
              if (uVar9 != 0) {
                uVar3 = uVar8 / uVar9;
              }
              uVar8 = uVar8 - uVar3 * uVar9;
            }
            if (uVar8 != uVar11) goto LAB_00483e08;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      goto LAB_00483e0c;
    }
  }
LAB_00483e08:
  plVar7 = (long *)0x0;
LAB_00483e0c:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar7;
}


// ===== 00483e40  FUN_00483e40 =====

long * FUN_00483e40(long *param_1,byte *param_2)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  bVar1 = *param_2;
  uVar5 = *(ulong *)(param_2 + 0x10);
  pbVar4 = *(byte **)(param_2 + 8);
  if (-1 < (char)param_2[0x1f]) {
    uVar5 = (ulong)param_2[0x1f];
    pbVar4 = param_2 + 8;
  }
  uVar5 = FUN_00427058(auStack_60,pbVar4,uVar5);
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    uVar12 = NEON_cnt(uVar8,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar5 = uVar5 ^ (ulong)bVar1 ^ (ulong)*(uint *)(param_2 + 0x20) ^
                    (ulong)*(uint *)(param_2 + 0x24);
    uVar9 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar9 < 2) {
      uVar10 = uVar8 - 1 & uVar5;
    }
    else {
      uVar10 = uVar5;
      if (uVar8 <= uVar5) {
        uVar10 = 0;
        if (uVar8 != 0) {
          uVar10 = uVar5 / uVar8;
        }
        uVar10 = uVar5 - uVar10 * uVar8;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar10 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      if (plVar6 != (long *)0x0) {
        do {
          uVar7 = plVar6[1];
          if (uVar5 == uVar7) {
            uVar7 = FUN_004838bc(plVar6 + 2,param_2);
            if ((uVar7 & 1) != 0) break;
          }
          else {
            if (uVar9 < 2) {
              uVar7 = uVar7 & uVar8 - 1;
            }
            else if (uVar8 <= uVar7) {
              uVar2 = 0;
              if (uVar8 != 0) {
                uVar2 = uVar7 / uVar8;
              }
              uVar7 = uVar7 - uVar2 * uVar8;
            }
            if (uVar7 != uVar10) goto LAB_00483f54;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      goto LAB_00483f58;
    }
  }
LAB_00483f54:
  plVar6 = (long *)0x0;
LAB_00483f58:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar6;
}


// ===== 00483f8c  FUN_00483f8c =====

undefined8 * FUN_00483f8c(void)

{
  long lVar1;
  int iVar2;
  undefined1 auStack_1f0 [32];
  undefined1 auStack_1d0 [32];
  undefined1 auStack_1b0 [32];
  undefined1 auStack_190 [32];
  undefined1 auStack_170 [32];
  undefined1 auStack_150 [32];
  undefined1 auStack_130 [32];
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  if (((DAT_00d602b0 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d602b0), iVar2 != 0)) {
    FUN_00668d94(auStack_1f0,"urn:ietf:params:rtp-hdrext:ssrc-audio-level",0x2b,1);
    FUN_00668d94(auStack_1d0,"urn:ietf:params:rtp-hdrext:toffset",0x22,2);
    FUN_00668d94(auStack_1b0,"http://www.webrtc.org/experiments/rtp-hdrext/abs-send-time",0x3a,3);
    FUN_00668d94(auStack_190,"urn:3gpp:video-orientation",0x1a,4);
    FUN_00668d94(auStack_170,
                 "http://www.ietf.org/id/draft-holmer-rmcat-transport-wide-cc-extensions-01",0x49,5)
    ;
    FUN_00668d94(auStack_150,"http://www.webrtc.org/experiments/rtp-hdrext/playout-delay",0x3a,6);
    FUN_00668d94(auStack_130,"http://www.webrtc.org/experiments/rtp-hdrext/video-content-type",0x3f,
                 7);
    FUN_00668d94(auStack_110,"http://www.webrtc.org/experiments/rtp-hdrext/video-timing",0x39,8);
    FUN_00668d94(auStack_f0,"https://discord.com/#rtp-hdrext/2018-07-29/speaker",0x32,9);
    FUN_00668d94(auStack_d0,"urn:ietf:params:rtp-hdrext:sdes:mid",0x23,10);
    FUN_00668d94(auStack_b0,"urn:ietf:params:rtp-hdrext:sdes:rtp-stream-id",0x2d,0xb);
    FUN_00668d94(auStack_90,"urn:ietf:params:rtp-hdrext:sdes:repaired-rtp-stream-id",0x36,0xc);
    FUN_00484204(&DAT_00d60298,auStack_1f0,0xc);
    FUN_00668f8c(auStack_90);
    FUN_00668f8c(auStack_b0);
    FUN_00668f8c(auStack_d0);
    FUN_00668f8c(auStack_f0);
    FUN_00668f8c(auStack_110);
    FUN_00668f8c(auStack_130);
    FUN_00668f8c(auStack_150);
    FUN_00668f8c(auStack_170);
    FUN_00668f8c(auStack_190);
    FUN_00668f8c(auStack_1b0);
    FUN_00668f8c(auStack_1d0);
    FUN_00668f8c(auStack_1f0);
    __cxa_atexit(FUN_00484280,&DAT_00d60298,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d602b0);
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return &DAT_00d60298;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00484204  FUN_00484204 =====

void FUN_00484204(undefined8 *param_1,long param_2,ulong param_3)

{
  void *pvVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 != 0) {
    if (param_3 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    param_3 = param_3 * 0x20;
    pvVar1 = operator_new(param_3);
    *param_1 = pvVar1;
    param_1[1] = pvVar1;
    param_1[2] = (void *)((long)pvVar1 + param_3);
    do {
      FUN_00484728(pvVar1,param_2);
      param_2 = param_2 + 0x20;
      pvVar1 = (void *)((long)pvVar1 + 0x20);
      param_3 = param_3 - 0x20;
    } while (param_3 != 0);
    param_1[1] = pvVar1;
  }
  return;
}


// ===== 00484280  FUN_00484280 =====

void FUN_00484280(undefined8 *param_1)

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
        pvVar2 = (void *)((long)pvVar2 + -0x20);
        FUN_00668f8c(pvVar2);
      } while (pvVar2 != pvVar3);
      pvVar1 = (void *)*param_1;
    }
    param_1[1] = pvVar3;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 004842e8  FUN_004842e8 =====

undefined * FUN_004842e8(void)

{
  long lVar1;
  int iVar2;
  undefined1 auStack_1b0 [32];
  undefined1 auStack_190 [32];
  undefined1 auStack_170 [32];
  undefined1 auStack_150 [32];
  undefined1 auStack_130 [32];
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  if (((DAT_00d602d0 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d602d0), iVar2 != 0)) {
    FUN_00668d94(auStack_1b0,"urn:ietf:params:rtp-hdrext:toffset",0x22,2);
    FUN_00668d94(auStack_190,"http://www.webrtc.org/experiments/rtp-hdrext/abs-send-time",0x3a,3);
    FUN_00668d94(auStack_170,"urn:3gpp:video-orientation",0x1a,4);
    FUN_00668d94(auStack_150,
                 "http://www.ietf.org/id/draft-holmer-rmcat-transport-wide-cc-extensions-01",0x49,5)
    ;
    FUN_00668d94(auStack_130,"http://www.webrtc.org/experiments/rtp-hdrext/playout-delay",0x3a,6);
    FUN_00668d94(auStack_110,"http://www.webrtc.org/experiments/rtp-hdrext/video-content-type",0x3f,
                 7);
    FUN_00668d94(auStack_f0,"http://www.webrtc.org/experiments/rtp-hdrext/video-timing",0x39,8);
    FUN_00668d94(auStack_d0,"urn:ietf:params:rtp-hdrext:sdes:mid",0x23,10);
    FUN_00668d94(auStack_b0,"urn:ietf:params:rtp-hdrext:sdes:rtp-stream-id",0x2d,0xb);
    FUN_00668d94(auStack_90,"urn:ietf:params:rtp-hdrext:sdes:repaired-rtp-stream-id",0x36,0xc);
    FUN_00484204(&DAT_00d602b8,auStack_1b0,10);
    FUN_00668f8c(auStack_90);
    FUN_00668f8c(auStack_b0);
    FUN_00668f8c(auStack_d0);
    FUN_00668f8c(auStack_f0);
    FUN_00668f8c(auStack_110);
    FUN_00668f8c(auStack_130);
    FUN_00668f8c(auStack_150);
    FUN_00668f8c(auStack_170);
    FUN_00668f8c(auStack_190);
    FUN_00668f8c(auStack_1b0);
    __cxa_atexit(FUN_00484280,&DAT_00d602b8,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d602d0);
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return &DAT_00d602b8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00484518  FUN_00484518 =====

undefined * FUN_00484518(void)

{
  long lVar1;
  int iVar2;
  undefined1 auStack_118 [32];
  undefined1 auStack_f8 [32];
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [32];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((DAT_00d602f0 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d602f0), iVar2 != 0)) {
    FUN_00668d94(auStack_118,"urn:ietf:params:rtp-hdrext:ssrc-audio-level",0x2b,1);
    FUN_00668d94(auStack_f8,"http://www.webrtc.org/experiments/rtp-hdrext/abs-send-time",0x3a,3);
    FUN_00668d94(auStack_d8,"https://discord.com/#rtp-hdrext/2018-07-29/speaker",0x32,9);
    FUN_00668d94(auStack_b8,"urn:ietf:params:rtp-hdrext:sdes:mid",0x23,10);
    FUN_00668d94(auStack_98,"urn:ietf:params:rtp-hdrext:sdes:rtp-stream-id",0x2d,0xb);
    FUN_00668d94(auStack_78,"urn:ietf:params:rtp-hdrext:sdes:repaired-rtp-stream-id",0x36,0xc);
    FUN_00484204(&DAT_00d602d8,auStack_118,6);
    FUN_00668f8c(auStack_78);
    FUN_00668f8c(auStack_98);
    FUN_00668f8c(auStack_b8);
    FUN_00668f8c(auStack_d8);
    FUN_00668f8c(auStack_f8);
    FUN_00668f8c(auStack_118);
    __cxa_atexit(FUN_00484280,&DAT_00d602d8,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d602f0);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return &DAT_00d602d8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004846b8  FUN_004846b8 =====

undefined * FUN_004846b8(void)

{
  long lVar1;
  int iVar2;
  
  if (((DAT_00d60310 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d60310), iVar2 != 0)) {
    FUN_00483f8c();
    lVar1 = 0;
    if (DAT_00d602a0 - DAT_00d60298 != 0) {
      lVar1 = DAT_00d60298;
    }
    FUN_007d87fc(&DAT_00d602f8,lVar1,DAT_00d602a0 - DAT_00d60298 >> 5);
    FUN_0054ff1c(&DAT_00d60310);
  }
  return &DAT_00d602f8;
}


// ===== 00484728  FUN_00484728 =====

undefined8 * FUN_00484728(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 *__dest;
  undefined8 uVar4;
  undefined8 uVar5;
  
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
    uVar5 = param_2[1];
    uVar4 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar5;
    *param_1 = uVar4;
  }
  uVar3 = *(undefined4 *)(param_2 + 3);
  *(undefined1 *)((long)param_1 + 0x1c) = *(undefined1 *)((long)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 3) = uVar3;
  return param_1;
}


// ===== 00484840  FUN_00484840 =====

void FUN_00484840(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xc2200000;
  *(undefined4 *)(param_1 + 2) = 0x3d888889;
  *(undefined4 *)(param_1 + 3) = 0x41200000;
  *(undefined1 *)((long)param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 4) = 0x43160000;
  *(undefined1 *)((long)param_1 + 0x14) = 1;
  *(undefined1 *)((long)param_1 + 0x1c) = 1;
  *(undefined1 *)((long)param_1 + 0x24) = 1;
  FUN_00484880();
  return;
}


// ===== 00484880  FUN_00484880 =====

void FUN_00484880(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (*param_1 == 0) {
    plVar1 = (long *)operator_new(0x60);
    FUN_00510358();
    plVar2 = (long *)*param_1;
    *param_1 = (long)plVar1;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
      plVar1 = (long *)*param_1;
    }
    (**(code **)(*plVar1 + 0x60))(plVar1);
    (**(code **)(*(long *)*param_1 + 0x30))(0x40e7700000000000);
    if ((long *)*param_1 != (long *)0x0) {
      (**(code **)(*(long *)*param_1 + 0x40))((double)*(float *)(param_1 + 1));
      (**(code **)(*(long *)*param_1 + 0x48))((double)*(float *)(param_1 + 2));
      (**(code **)(*(long *)*param_1 + 0x10))((double)*(float *)(param_1 + 3));
                    /* WARNING: Could not recover jumptable at 0x00484964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)*param_1 + 0x20))((double)*(float *)(param_1 + 4));
      return;
    }
  }
  return;
}


// ===== 00484968  FUN_00484968 =====

void FUN_00484968(long *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  
  if (*(ulong *)(param_2 + 0x28) < 3) {
    FUN_00484880(param_1);
    dVar11 = (double)(**(code **)(*(long *)*param_1 + 0x38))();
    if (dVar11 != (double)*(int *)(param_2 + 0x20)) {
      uVar5 = FUN_00417e08();
      if ((uVar5 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e94,"../../discord_native_lib/src/media/sidechain_compressor.cpp",
                     0x129,"SidechainCompressor::Compress Adjusting compressor sample rate to ",
                     *(undefined4 *)(param_2 + 0x20));
      }
      (**(code **)(*(long *)*param_1 + 0x30))(SUB84((double)*(int *)(param_2 + 0x20),0));
    }
    lVar7 = FUN_006591a0(param_2);
    dVar4 = DAT_001f5cd0;
    dVar3 = DAT_001f5898;
    dVar2 = DAT_001f5758;
    dVar11 = DAT_001f4f08;
    if (*(long *)(param_2 + 0x18) != 0) {
      uVar5 = 0;
      uVar8 = *(ulong *)(param_2 + 0x28);
      do {
        lVar9 = uVar8 * uVar5;
        dVar16 = (double)((float)(int)*(short *)(lVar7 + lVar9 * 2) * 3.0517578e-05);
        dVar17 = dVar16;
        if (uVar8 != 1) {
          dVar17 = (double)((float)(int)*(short *)(lVar7 + lVar9 * 2 + 2) * 3.0517578e-05);
        }
        lVar6 = FUN_00659108(param_3);
        lVar10 = *param_1;
        dVar13 = log((double)ABS((float)(int)*(short *)(lVar6 + *(long *)(param_3 + 0x28) * uVar5 *
                                                                2) * 3.0517578e-05) + dVar3);
        dVar13 = dVar13 * dVar4 - *(double *)(lVar10 + 0x48);
        if (dVar13 <= 0.0) {
          dVar13 = 0.0;
        }
        dVar13 = dVar13 + dVar3;
        puVar1 = (undefined8 *)(lVar10 + 0x20);
        if (dVar13 <= *(double *)(lVar10 + 0x58)) {
          puVar1 = (undefined8 *)(lVar10 + 0x40);
        }
        dVar13 = (double)NEON_fmadd(*puVar1,*(double *)(lVar10 + 0x58) - dVar13,dVar13);
        *(double *)(lVar10 + 0x58) = dVar13;
        dVar13 = exp((*(double *)(lVar10 + 0x50) + -1.0) * (dVar13 + dVar11) * dVar2);
        uVar8 = *(ulong *)(param_2 + 0x28);
        fVar12 = (float)NEON_fmin((float)(dVar13 * dVar16) * 32768.0,0x46fffe00);
        auVar14 = ZEXT416((uint)fVar12);
        if (fVar12 <= -32768.0) {
          auVar14 = ZEXT816(0xc7000000);
        }
        auVar15._8_4_ = 0x7fffffff;
        auVar15._0_8_ = 0x7fffffff7fffffff;
        auVar15._12_4_ = 0x7fffffff;
        auVar15 = NEON_bif(ZEXT816(0x3f000000),auVar14,auVar15,1);
        *(short *)(lVar7 + lVar9 * 2) = (short)(int)(auVar14._0_4_ + auVar15._0_4_);
        if (1 < uVar8) {
          auVar14._8_4_ = 0x7fffffff;
          auVar14._0_8_ = 0x7fffffff7fffffff;
          auVar14._12_4_ = 0x7fffffff;
          fVar12 = (float)NEON_fmin((float)(dVar17 * dVar13) * 32768.0,0x46fffe00);
          if (fVar12 <= -32768.0) {
            fVar12 = -32768.0;
          }
          auVar14 = NEON_bif(ZEXT816(0x3f000000),ZEXT416((uint)fVar12),auVar14,1);
          *(short *)(lVar7 + lVar9 * 2 + 2) = (short)(int)(fVar12 + auVar14._0_4_);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ulong *)(param_2 + 0x18));
    }
  }
  else {
    uVar5 = FUN_00417e08();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f6d4b,"../../discord_native_lib/src/media/sidechain_compressor.cpp",0xf1,
                   "SidechainCompressor::Compress cannot compress audio with ",
                   *(undefined8 *)(param_2 + 0x28)," channels");
    }
    if ((long *)*param_1 != (long *)0x0) {
      lVar7 = *(long *)*param_1;
      *param_1 = 0;
                    /* WARNING: Could not recover jumptable at 0x00484a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar7 + 8))();
      return;
    }
  }
  return;
}


// ===== 00484c40  FUN_00484c40 =====

void FUN_00484c40(long *param_1)

{
  long lVar1;
  
  if ((long *)*param_1 != (long *)0x0) {
    lVar1 = *(long *)*param_1;
    *param_1 = 0;
                    /* WARNING: Could not recover jumptable at 0x00484c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
  return;
}


// ===== 00484c60  FUN_00484c60 =====

void FUN_00484c60(long *param_1,undefined4 *param_2)

{
  if (*(char *)(param_2 + 1) != '\0') {
    *(undefined4 *)(param_1 + 1) = *param_2;
    *(undefined1 *)((long)param_1 + 0xc) = 1;
  }
  if (*(char *)(param_2 + 3) != '\0') {
    *(undefined4 *)(param_1 + 2) = param_2[2];
    *(undefined1 *)((long)param_1 + 0x14) = 1;
  }
  if (*(char *)(param_2 + 5) != '\0') {
    *(undefined4 *)(param_1 + 3) = param_2[4];
    *(undefined1 *)((long)param_1 + 0x1c) = 1;
  }
  if (*(char *)(param_2 + 7) != '\0') {
    *(undefined4 *)(param_1 + 4) = param_2[6];
    *(undefined1 *)((long)param_1 + 0x24) = 1;
  }
  if ((long *)*param_1 != (long *)0x0) {
    (**(code **)(*(long *)*param_1 + 0x40))((double)*(float *)(param_1 + 1));
    (**(code **)(*(long *)*param_1 + 0x48))((double)*(float *)(param_1 + 2));
    (**(code **)(*(long *)*param_1 + 0x10))((double)*(float *)(param_1 + 3));
                    /* WARNING: Could not recover jumptable at 0x00484d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*param_1 + 0x20))((double)*(float *)(param_1 + 4));
    return;
  }
  return;
}


// ===== 00484d48  FUN_00484d48 =====

void FUN_00484d48(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}


// ===== 00484d50  FUN_00484d50 =====

void FUN_00484d50(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}


// ===== 00484d58  FUN_00484d58 =====

void FUN_00484d58(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_3 != (long *)0x0) {
    plVar5 = param_3 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(long **)(param_1 + 0x20) = param_3;
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
  if (param_3 != (long *)0x0) {
    plVar5 = param_3 + 1;
    do {
      lVar4 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar4 + -1;
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


// ===== 00484e08  FUN_00484e08 =====

void FUN_00484e08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_006258f0();
  FUN_00484e50(param_1,param_2,param_3,param_4,uVar1);
  return;
}


// ===== 00484e50  FUN_00484e50 =====

uint FUN_00484e50(long param_1,long param_2,ulong param_3,undefined8 *param_4,undefined8 param_5)

{
  long *plVar1;
  undefined4 uVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auStack_a0 [16];
  undefined2 local_90;
  undefined1 local_8e;
  ulong local_80;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar7 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar12 = *param_4;
      uVar8 = FUN_0062589c();
      FUN_007b6444(auStack_a0,uVar12,uVar8);
      local_90 = *(undefined2 *)((long)param_4 + 9);
      local_8e = *(undefined1 *)(param_4 + 1);
      local_80 = param_3;
      (**(code **)(**(long **)(param_1 + 0x28) + 0xa8))(*(long **)(param_1 + 0x28),auStack_a0);
      FUN_007b643c(&local_90);
    }
    lVar9 = FUN_0062589c();
    lVar11 = *(long *)(param_1 + 0xb0);
    if ((0xc < param_3) &&
       (lVar11 != 0x7fffffffffffffff && 999999 < lVar9 * 1000 - lVar11 ||
        lVar11 == -0x8000000000000000)) {
      *(long *)(param_1 + 0xb0) = lVar9 * 1000;
      uVar3 = *(ushort *)(param_2 + 2);
      uVar8 = *(undefined8 *)(param_1 + 8);
      lVar9 = *(long *)(param_1 + 0x10);
      uVar7 = (*(uint *)(param_2 + 8) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 8) & 0xff00ff) << 8;
      uVar2 = *(undefined4 *)param_4;
      if (lVar9 != 0) {
        plVar1 = (long *)(lVar9 + 0x10);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar10 = (undefined8 *)operator_new(0x28);
      puVar10[2] = lVar9;
      *(ushort *)(puVar10 + 3) = uVar3 >> 8 | (ushort)((uVar3 & 0xff00ff) << 8);
      *puVar10 = &PTR_FUN_00d1d638;
      puVar10[1] = uVar8;
      *(undefined4 *)((long)puVar10 + 0x1c) = uVar2;
      *(uint *)(puVar10 + 4) = uVar7 >> 0x10 | uVar7 << 0x10;
      FUN_00512cf8(param_1 + 0x50,puVar10);
      if (lVar9 != 0) {
        FUN_005466cc(lVar9);
      }
    }
    uVar7 = FUN_004875f0(*(undefined8 *)(param_1 + 0x18),param_2,param_3 & 0xffffffff,param_5,1);
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return uVar7 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00485014  FUN_00485014 =====

void FUN_00485014(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_0048753c();
    return;
  }
  return;
}


// ===== 00485024  FUN_00485024 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_00485024(long param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined4 uVar13;
  undefined2 *puVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  undefined2 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong uVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  undefined *puVar26;
  ulong uVar27;
  undefined2 *puVar28;
  undefined2 *puVar30;
  undefined2 *puVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  void *local_230 [2];
  char local_219;
  undefined1 auStack_218 [8];
  char *local_210;
  char **ppcStack_208;
  ulong local_200;
  char **local_1f8;
  undefined2 local_1f0;
  byte local_1ee;
  uint local_1ec;
  long local_1e8;
  char *local_1e0;
  undefined8 uStack_1d8;
  undefined1 *local_1d0;
  undefined *local_1c8;
  undefined8 local_1c0;
  undefined *local_1b8 [3];
  long local_1a0;
  long lStack_198;
  void *local_170;
  undefined8 uStack_168;
  char local_159;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined *local_148;
  undefined8 uStack_140;
  undefined4 auStack_138 [34];
  char *local_b0;
  undefined8 local_a8;
  char **local_a0;
  undefined2 *local_88;
  undefined2 *puStack_80;
  long local_70;
  undefined2 *puVar29;
  
  lVar10 = tpidr_el0;
  local_70 = *(long *)(lVar10 + 0x28);
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar16 = 0;
  }
  else {
    iVar15 = FUN_00623870();
    if (iVar15 < 2) {
      local_1f0 = 0;
      local_1ee = 0;
      local_1ec = 0;
      local_1e8 = 0;
      if (param_3 != 0) {
        lVar6 = *(long *)(PTR_PTR_00d51b18 + 8);
        puVar8 = *(undefined **)(PTR_PTR_00d51b18 + 0x10);
        uVar20 = *(undefined8 *)(PTR_PTR_00d51b18 + 0x18);
        lVar22 = *(long *)(PTR_PTR_00d51b18 + 0x20);
        ppuVar11 = local_1b8 + 1;
        uVar23 = *(undefined8 *)(PTR_PTR_00d51b18 + 0x28);
        uVar24 = *(undefined8 *)(PTR_PTR_00d51b18 + 0x30);
        puVar26 = *(undefined **)PTR_PTR_00d51b18;
        uVar7 = *(undefined8 *)(PTR_PTR_00d51b18 + 0x40);
        puVar9 = *(undefined **)(PTR_PTR_00d51b18 + 0x48);
        puVar1 = PTR_DAT_00d51b20 + 0x10;
        lVar25 = param_2;
        do {
          uVar17 = FUN_007cd9ac(&local_1f0,lVar25,(param_2 + param_3) - lVar25);
          if ((uVar17 & 1) == 0) break;
          if ((char)local_1f0 == -0x33) {
            if (local_1f0._1_1_ != '\x01') goto LAB_00485264;
            FUN_007ce040(&local_b0);
            uVar17 = FUN_007ce1d4(&local_b0,&local_1f0);
            puVar14 = puStack_80;
            puVar28 = local_88;
            if ((uVar17 & 1) == 0) {
              FUN_007ce060(&local_b0);
              goto LAB_00485118;
            }
            uVar17 = (long)puStack_80 - (long)local_88;
            if (uVar17 == 0) {
              puVar30 = (undefined2 *)0x0;
              puVar18 = (undefined2 *)0x0;
            }
            else {
              if ((long)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              puVar18 = (undefined2 *)operator_new(uVar17);
              puVar31 = puVar18;
              if ((0x1d < uVar17 - 2) && (0x1f < (ulong)((long)puVar18 - (long)puVar28))) {
                lVar25 = 0;
                uVar17 = (uVar17 - 2 >> 1) + 1;
                uVar21 = uVar17 & 0xfffffffffffffff0;
                puVar30 = puVar18 + uVar21;
                uVar27 = uVar21;
                do {
                  puVar4 = (undefined8 *)((long)puVar28 + lVar25);
                  puVar5 = (undefined8 *)((long)puVar18 + lVar25);
                  lVar25 = lVar25 + 0x20;
                  uVar27 = uVar27 - 0x10;
                  uVar19 = *puVar4;
                  uVar33 = puVar4[3];
                  uVar32 = puVar4[2];
                  puVar5[1] = puVar4[1];
                  *puVar5 = uVar19;
                  puVar5[3] = uVar33;
                  puVar5[2] = uVar32;
                } while (uVar27 != 0);
                puVar28 = puVar28 + uVar21;
                puVar31 = puVar30;
                if (uVar17 == uVar21) goto LAB_00485430;
              }
              do {
                puVar29 = puVar28 + 1;
                puVar30 = puVar31 + 1;
                *puVar31 = *puVar28;
                puVar28 = puVar29;
                puVar31 = puVar30;
              } while (puVar29 != puVar14);
            }
LAB_00485430:
            puVar12 = PTR_DAT_00d51b10;
            puVar2 = PTR_DAT_00d51b10 + 0x68;
            puVar3 = PTR_DAT_00d51b10 + 0x40;
            local_1c8 = puVar8;
            local_1b8[0] = puVar3;
            local_148 = puVar2;
            *(undefined8 *)((long)&local_1c8 + *(long *)(puVar8 + -0x18)) = uVar20;
            local_1c0 = 0;
            lVar25 = *(long *)(local_1c8 + -0x18);
            FUN_00520e8c((long)&local_1c8 + lVar25,ppuVar11);
            *(undefined8 *)((long)&uStack_140 + lVar25) = 0;
            *(undefined4 *)((long)auStack_138 + lVar25) = 0xffffffff;
            *(undefined8 *)((long)local_1b8 + *(long *)(lVar22 + -0x18)) = uVar23;
            *(undefined8 *)((long)&local_1c8 + *(long *)(lVar6 + -0x18)) = uVar24;
            local_1c8 = puVar12 + 0x18;
            local_1b8[0] = puVar3;
            local_148 = puVar2;
            FUN_0054a4c8(ppuVar11);
            uStack_168 = 0;
            local_170 = (void *)0x0;
            uStack_158 = 0;
            local_159 = '\0';
            local_150 = 0x18;
            local_1b8[1] = puVar1;
            for (puVar28 = puVar18; puVar28 != puVar30; puVar28 = puVar28 + 1) {
              uVar19 = FUN_0054b908(local_1b8,*puVar28);
              FUN_00428964(uVar19,&DAT_001d5e07,1);
            }
            uVar17 = FUN_00417e08();
            if ((uVar17 & 1) == 0) {
              ppcStack_208 = &local_1e0;
              local_200 = local_a8 & 0xffffffff;
              uVar13 = local_a8._4_4_;
              local_1e0 = "../../discord_native_lib/src/media/socket_client_adapter.cpp";
              uStack_1d8 = 0x481;
              local_1d0 = auStack_218;
              local_210 = "Send RTCP NACK with sender ssrc: ";
              local_1f8 = &local_210;
              FUN_0054d504(local_230,ppuVar11);
              FUN_00623bb0(&DAT_001f6d50,*(undefined8 *)local_1f8[1],
                           *(undefined8 *)(local_1f8[1] + 8),*local_1f8,(undefined4)local_200,
                           " for media ssrc: ",uVar13,&DAT_001c4dc3,local_230);
              if (local_219 < '\0') {
                operator_delete(local_230[0]);
              }
            }
            local_1c8 = puVar26;
            *(undefined8 *)((long)&local_1c8 + *(long *)(puVar26 + -0x18)) = uVar7;
            local_1b8[1] = PTR_DAT_00d51b20 + 0x10;
            local_1b8[0] = puVar9;
            if (local_159 < '\0') {
              operator_delete(local_170);
            }
            FUN_0054a488(ppuVar11);
            FUN_0054ce58(&local_1c8,PTR_PTR_00d51b18 + 8);
            thunk_FUN_00520cf4(&local_148);
            if (puVar18 != (undefined2 *)0x0) {
              operator_delete(puVar18);
            }
            FUN_007ce060(&local_b0);
          }
          else if (((char)local_1f0 == -0x32) && (local_1f0._1_1_ == '\x01')) {
            FUN_007ceda8(&local_1c8);
            uVar17 = FUN_007cedd0(&local_1c8,&local_1f0);
            if (((uVar17 & 1) != 0) && (uVar17 = FUN_00417e08(), (uVar17 & 1) == 0)) {
              FUN_00623bb0(&DAT_001f621a,
                           "../../discord_native_lib/src/media/socket_client_adapter.cpp",0x419,
                           "Send RTCP PLI with sender ssrc: ",local_1c0 & 0xffffffff,
                           " for media ssrc: ",local_1c0._4_4_);
            }
            FUN_007cedbc(&local_1c8);
          }
          else {
LAB_00485264:
            iVar15 = FUN_00623870();
            if ((iVar15 == 0) && ((char)local_1f0 == -0x37)) {
              FUN_007cef74(&local_1c8);
              uVar17 = FUN_007cf150(&local_1c8,&local_1f0);
              if (((uVar17 & 1) != 0) && (uVar17 = FUN_0044075c(), (uVar17 & 1) == 0)) {
                local_b0 = "../../discord_native_lib/src/media/socket_client_adapter.cpp";
                local_a8 = 0x4c8;
                local_a0 = &local_1e0;
                FUN_00623bb0(&DAT_001f620c,
                             "../../discord_native_lib/src/media/socket_client_adapter.cpp",0x4c8,
                             "Send RTCP RR with sender ssrc: ",local_1c0 & 0xffffffff,", blocks: ",
                             ((long)local_1b8[1] - (long)local_1b8[0] >> 2) * 0x6db6db6db6db6db7);
              }
              FUN_007cef94(&local_1c8);
            }
            else {
              iVar15 = FUN_00623870();
              if ((iVar15 == 0) && ((char)local_1f0 == -0x36)) {
                FUN_007d02a0(&local_1c8);
                uVar17 = FUN_007d0434(&local_1c8,&local_1f0);
                if (((uVar17 & 1) != 0) && (uVar17 = FUN_0044075c(), (uVar17 & 1) == 0)) {
                  local_b0 = "../../discord_native_lib/src/media/socket_client_adapter.cpp";
                  local_a8 = 0x510;
                  local_a0 = &local_1e0;
                  FUN_00623bb0(&DAT_001f620c,
                               "../../discord_native_lib/src/media/socket_client_adapter.cpp",0x510,
                               "Send RTCP SDES with sender ssrc: ",local_1c0 & 0xffffffff,
                               ", chunks: ",(long)local_1b8[1] - (long)local_1b8[0] >> 5);
                }
                FUN_007d02c4(&local_1c8);
              }
              else {
                iVar15 = FUN_00623870();
                if ((iVar15 == 0) && ((char)local_1f0 == -0x38)) {
                  FUN_007d10f0(&local_1c8);
                  uVar17 = FUN_007d12d4(&local_1c8,&local_1f0);
                  if (((uVar17 & 1) != 0) && (uVar17 = FUN_0044075c(), (uVar17 & 1) == 0)) {
                    local_b0 = "../../discord_native_lib/src/media/socket_client_adapter.cpp";
                    local_a8 = 0x558;
                    local_a0 = &local_1e0;
                    FUN_00623bb0(&DAT_001f620c,
                                 "../../discord_native_lib/src/media/socket_client_adapter.cpp",
                                 0x558,"Send RTCP SR with sender ssrc: ",local_1c0 & 0xffffffff,
                                 ", blocks: ",(lStack_198 - local_1a0 >> 2) * 0x6db6db6db6db6db7);
                  }
                  FUN_007d1118(&local_1c8);
                }
              }
            }
          }
LAB_00485118:
          lVar25 = local_1e8 + (ulong)local_1ec + (ulong)local_1ee;
        } while (lVar25 != param_2 + param_3);
      }
    }
    uVar16 = FUN_004875f0(*(undefined8 *)(param_1 + 0x18),param_2,param_3 & 0xffffffff,0,0);
  }
  if (*(long *)(lVar10 + 0x28) == local_70) {
    return uVar16 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00485688  FUN_00485688 =====

void FUN_00485688(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  void *local_98 [2];
  char local_81;
  undefined1 auStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar5 = *(long **)(param_1 + 0x38);
  while (plVar5 != (long *)(param_1 + 0x40)) {
    FUN_004df134(auStack_70,7);
    FUN_004df1c8(local_98,(short)plVar5[4]);
    uVar4 = FUN_004e1438(auStack_70,"sequenceNumber");
    FUN_004dfa04(uVar4,local_98);
    FUN_004df880(local_98);
    FUN_004df1c8(local_98,*(undefined4 *)((long)plVar5 + 0x24));
    uVar4 = FUN_004e1438(auStack_70,"transportSequenceNumber");
    FUN_004dfa04(uVar4,local_98);
    FUN_004df880(local_98);
    FUN_0054923c(local_98,*(undefined4 *)((long)plVar5 + 0x1c));
    uVar4 = FUN_004e146c(param_2,local_98);
    FUN_004df948(uVar4,auStack_70);
    if (local_81 < '\0') {
      operator_delete(local_98[0]);
    }
    FUN_004df880(auStack_70);
    plVar2 = (long *)plVar5[1];
    plVar6 = plVar5;
    if ((long *)plVar5[1] == (long *)0x0) {
      do {
        plVar5 = (long *)plVar6[2];
        bVar3 = (long *)*plVar5 != plVar6;
        plVar6 = plVar5;
      } while (bVar3);
    }
    else {
      do {
        plVar5 = plVar2;
        plVar2 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004857d0  FUN_004857d0 =====

void FUN_004857d0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
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
      goto joined_r0x00485844;
    }
  }
  lVar4 = *(long *)(param_1 + 0x10);
joined_r0x00485844:
  if (lVar4 != 0) {
    FUN_005466cc();
    return;
  }
  return;
}


// ===== 00485854  FUN_00485854 =====

void FUN_00485854(void *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_00512bf4((long)param_1 + 0x50);
  FUN_00443264((long)param_1 + 0x38,*(undefined8 *)((long)param_1 + 0x40));
  plVar5 = *(long **)((long)param_1 + 0x20);
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
      lVar4 = *(long *)((long)param_1 + 0x10);
      goto joined_r0x0048589c;
    }
  }
  lVar4 = *(long *)((long)param_1 + 0x10);
joined_r0x0048589c:
  if (lVar4 != 0) {
    FUN_005466cc();
  }
  operator_delete(param_1);
  return;
}


// ===== 004858d8  FUN_004858d8 =====

void FUN_004858d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1d638;
  if (param_1[2] != 0) {
    FUN_005466cc();
    return;
  }
  return;
}


// ===== 004858f8  FUN_004858f8 =====

void FUN_004858f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1d638;
  if (param_1[2] != 0) {
    FUN_005466cc();
  }
  operator_delete(param_1);
  return;
}


// ===== 00485930  FUN_00485930 =====

void FUN_00485930(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined2 uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar6 = (long *)FUN_005466fc();
    if ((plVar6 != (long *)0x0) && (lVar10 = *(long *)(param_1 + 8), lVar10 != 0)) {
      uVar3 = *(undefined2 *)(param_1 + 0x18);
      uVar1 = *(undefined4 *)(param_1 + 0x1c);
      uVar2 = *(uint *)(param_1 + 0x20);
      puVar11 = (undefined8 *)(lVar10 + 0x40);
      puVar8 = (undefined8 *)*puVar11;
      puVar12 = puVar11;
      if ((undefined8 *)*puVar11 != (undefined8 *)0x0) {
        do {
          while (puVar7 = puVar8, puVar11 = puVar7, uVar2 < *(uint *)((long)puVar7 + 0x1c)) {
            puVar8 = (undefined8 *)*puVar7;
            puVar12 = puVar7;
            if ((undefined8 *)*puVar7 == (undefined8 *)0x0) goto LAB_004859b4;
          }
          if (uVar2 <= *(uint *)((long)puVar7 + 0x1c)) goto LAB_00485a04;
          puVar8 = (undefined8 *)puVar7[1];
        } while ((undefined8 *)puVar7[1] != (undefined8 *)0x0);
        puVar12 = puVar7 + 1;
      }
LAB_004859b4:
      puVar7 = (undefined8 *)operator_new(0x28);
      puVar7[4] = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = puVar11;
      *puVar12 = puVar7;
      plVar9 = *(long **)(lVar10 + 0x38);
      *(uint *)((long)puVar7 + 0x1c) = uVar2;
      puVar8 = puVar7;
      if (*plVar9 != 0) {
        *(long *)(lVar10 + 0x38) = *plVar9;
        puVar8 = (undefined8 *)*puVar12;
      }
      FUN_0041dcd0(*(undefined8 *)(lVar10 + 0x40),puVar8);
      *(long *)(lVar10 + 0x48) = *(long *)(lVar10 + 0x48) + 1;
LAB_00485a04:
      *(undefined2 *)(puVar7 + 4) = uVar3;
      *(undefined4 *)((long)puVar7 + 0x24) = uVar1;
    }
    if (plVar6 != (long *)0x0) {
      plVar9 = plVar6 + 1;
      do {
        lVar10 = *plVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_005466cc(plVar6);
        return;
      }
    }
  }
  return;
}


// ===== 00485a6c  discord::media::IsSpatialAudioAvailable =====

/* discord::media::IsSpatialAudioAvailable() */

undefined8 discord::media::IsSpatialAudioAvailable(void)

{
  return 0;
}


// ===== 00485a74  FUN_00485a74 =====

void FUN_00485a74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1d660;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  param_1[4] = FUN_0041a0c4;
  param_1[5] = &DAT_001f1910;
  *(undefined4 *)(param_1 + 6) = 0;
  FUN_00993548(param_1 + 7);
  return;
}


// ===== 00485ab8  FUN_00485ab8 =====

void FUN_00485ab8(long param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  
  pbVar1 = (byte *)(param_1 + 8);
  bVar3 = *param_2;
  do {
    bVar2 = *pbVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = bVar3;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (((*param_2 != (bVar2 & 1)) && (*param_2 != 0)) && (uVar6 = FUN_004249b0(), (uVar6 & 1) == 0))
  {
    FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/spatial_mixer.cpp",0x3f3,
                 "[SpatialAudio] Tried to enable spatial mixer but it is unavailable");
    return;
  }
  return;
}


// ===== 00485b1c  FUN_00485b1c =====

void FUN_00485b1c(void)

{
  return;
}


// ===== 00485b20  FUN_00485b20 =====

void FUN_00485b20(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 0x10);
  *(code **)(param_1 + 0x20) = FUN_0041a0c4;
  pcVar2 = *(code **)(*(long *)(param_1 + 0x28) + 8);
  *(undefined8 **)(param_1 + 0x28) = &DAT_001f1910;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(*puVar1);
  }
  uVar3 = *param_2;
  *(undefined8 *)(param_1 + 0x18) = param_2[1];
  *puVar1 = uVar3;
  *(undefined8 *)(param_1 + 0x20) = param_2[2];
  *(undefined8 *)(param_1 + 0x28) = param_2[3];
  param_2[2] = FUN_0041a0c4;
  param_2[3] = &DAT_001f1910;
  if (*(char *)(*(long *)(param_1 + 0x28) + 0x10) != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00485bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(puVar1,*(undefined4 *)(param_1 + 0xc));
  return;
}


// ===== 00485bc8  FUN_00485bc8 =====

uint FUN_00485bc8(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  
  uVar5 = (**(code **)(**(long **)(param_1 + 0x38) + 0x20))();
  piVar1 = (int *)(param_1 + 0x30);
  do {
    iVar2 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return uVar5 & 1;
}


// ===== 00485c14  FUN_00485c14 =====

void FUN_00485c14(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  
  (**(code **)(**(long **)(param_1 + 0x38) + 0x28))();
  piVar1 = (int *)(param_1 + 0x30);
  do {
    iVar2 = *piVar1;
    iVar5 = iVar2 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 == 0 || iVar2 < 1) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


// ===== 00485c5c  FUN_00485c5c =====

void FUN_00485c5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 0xc);
  do {
    iVar2 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((iVar2 != 0) && (*(char *)(*(long *)(param_1 + 0x28) + 0x10) == '\0')) {
    (**(code **)(param_1 + 0x20))(param_1 + 0x10,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00485cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x38) + 0x30))(*(long **)(param_1 + 0x38),param_2,param_3);
  return;
}


// ===== 00485ccc  FUN_00485ccc =====

void FUN_00485ccc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x485cd0);
  (*pcVar1)();
}


// ===== 00485cd0  FUN_00485cd0 =====

void FUN_00485cd0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1[2] = param_3;
  param_1[3] = param_4;
  *param_1 = &PTR_FUN_00d1d6a8;
  param_1[1] = param_2;
  uVar3 = param_5[1];
  uVar2 = *param_5;
  param_1[6] = param_5[2];
  param_1[5] = uVar3;
  param_1[4] = uVar2;
  param_5[1] = 0;
  param_5[2] = 0;
  *param_5 = 0;
  uVar1 = FUN_00450508(param_3);
  *(undefined4 *)(param_1 + 7) = uVar1;
  *(undefined2 *)((long)param_1 + 0x3c) = 0;
  *(undefined1 *)((long)param_1 + 0x3e) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_00435de4(param_1 + 9,param_1[1] + 0x1f8);
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  FUN_004a1af0(param_1 + 0x25);
  *(undefined4 *)(param_1 + 0x3a7) = 0xff800000;
  return;
}


// ===== 00485d58  FUN_00485d58 =====

void FUN_00485d58(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1[2] + 0x450);
  *param_1 = &PTR_FUN_00d1d6a8;
  FUN_004a225c(uVar1,*(undefined4 *)(param_1 + 7),0);
  FUN_004a1c80(param_1 + 0x25);
  FUN_004379f4(param_1 + 9);
  if (-1 < *(char *)((long)param_1 + 0x37)) {
    return;
  }
  operator_delete((void *)param_1[4]);
  return;
}


// ===== 00485dbc  FUN_00485dbc =====

void FUN_00485dbc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x485dc0);
  (*pcVar1)();
}


// ===== 00485dc0  FUN_00485dc0 =====

void FUN_00485dc0(long param_1,uint param_2)

{
  if (*(uint *)(param_1 + 0x40) == param_2) {
    if (((*(char *)(*(long *)(param_1 + 8) + 0x504) == '\0') || (param_2 == 0)) ||
       (*(char *)(*(long *)(param_1 + 8) + 0x505) != '\0')) {
      return;
    }
  }
  else {
    FUN_004a225c(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x450),*(undefined4 *)(param_1 + 0x38),
                 param_2 & 1);
    *(uint *)(param_1 + 0x40) = param_2;
  }
  FUN_0043ba14((int)*(undefined8 *)(param_1 + 0x1d38),*(undefined8 *)(param_1 + 8),param_1 + 0x20,
               param_2,*(undefined1 *)(param_1 + 0x3d));
  return;
}


// ===== 00485e48  FUN_00485e48 =====

undefined1  [16] FUN_00485e48(long param_1)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  if (*(char *)(*(long *)(param_1 + 8) + 0x504) != '\0') {
    FUN_004a1cac(param_1 + 0x128);
    uVar1 = FUN_004a1fb0(param_1 + 0x128);
    *(undefined4 *)(param_1 + 0x1d38) = uVar1;
  }
  auVar2._0_8_ = *(ulong *)(param_1 + 0x1d38) & 0xffffffff;
  auVar2._8_8_ = 0;
  return auVar2;
}


// ===== 00485ea4  FUN_00485ea4 =====

void FUN_00485ea4(long param_1)

{
  FUN_00489e98(param_1 + 0x48);
  return;
}


// ===== 00485eac  FUN_00485eac =====

void FUN_00485eac(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  char *local_68;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004df134(param_1,7);
  FUN_004df1c8(auStack_60,*param_3);
  local_68 = "keyFrames";
  uVar2 = FUN_004e148c(param_1,&local_68);
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  FUN_004df1c8(auStack_60,param_3[1]);
  local_68 = "deltaFrames";
  uVar2 = FUN_004e148c(param_1,&local_68);
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00485f70  FUN_00485f70 =====

undefined1  [16] FUN_00485f70(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x118);
}


// ===== 00485f7c  FUN_00485f7c =====

undefined4 FUN_00485f7c(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 8) + 0x500);
}


// ===== 00485f88  discord::MediaEngine::MediaEngine =====

/* discord::MediaEngine::MediaEngine(std::__Cr::shared_ptr<discord::uv::ThreadedEventLoop>,
   discord::media::EngineConfig const&) */

void __thiscall
discord::MediaEngine::MediaEngine
          (MediaEngine *this,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined1 auVar7 [16];
  long *local_58;
  undefined8 local_50;
  long *local_48;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  local_50 = param_2;
  local_48 = param_3;
  local_58 = (long *)operator_new(8);
  *local_58 = (long)(PTR_DAT_00d51af0 + 0x10);
  auVar7 = FUN_00486200(auStack_40,&local_50,&local_58,param_4);
  plVar5 = local_58;
  local_58 = (long *)0x0;
  *(undefined1 (*) [16])this = auVar7;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  plVar5 = local_48;
  if (local_48 != (long *)0x0) {
    plVar1 = local_48 + 1;
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
      (**(code **)(*local_48 + 0x10))(local_48);
      FUN_005466cc(plVar5);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00486064  FUN_00486064 =====

void FUN_00486064(char *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  switch(param_2) {
  case 0:
    param_1[0x17] = '\x06';
    if (("legacy" < param_1) || (param_1 + 6 < "egacy")) {
      builtin_strncpy(param_1,"legacy",7);
      return;
    }
    break;
  case 1:
    param_1[0x17] = '\b';
    if (("standard" < param_1) || (param_1 + 8 < "tandard")) {
      param_1[8] = '\0';
      uVar1._0_1_ = 's';
      uVar1._1_1_ = 't';
      uVar1._2_1_ = 'a';
      uVar1._3_1_ = 'n';
      uVar1._4_1_ = 'd';
      uVar1._5_1_ = 'a';
      uVar1._6_1_ = 'r';
      uVar1._7_1_ = 'd';
LAB_004861cc:
      *(undefined8 *)param_1 = uVar1;
      return;
    }
    break;
  case 2:
    param_1[0x17] = '\f';
    if (("experimental" < param_1) || (param_1 + 0xc < "xperimental")) {
      *(undefined8 *)param_1 = s_experimental_0019765e._0_8_;
      param_1[8] = 'n';
      param_1[9] = 't';
      param_1[10] = 'a';
      param_1[0xb] = 'l';
      param_1[0xc] = '\0';
      return;
    }
    break;
  case 3:
    param_1[0x17] = '\t';
    uVar1 = s_gameaudio_001db62d._0_8_;
    if (("gameaudio" < param_1) || (param_1 + 9 < "ameaudio")) {
      param_1[8] = 'o';
      param_1[9] = '\0';
      goto LAB_004861cc;
    }
    break;
  default:
    param_1[0x17] = '\a';
    if (("unknown" < param_1) || (param_1 + 7 < "nknown")) {
      builtin_strncpy(param_1,"unknown",8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
             0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
}


// ===== 00486200  FUN_00486200 =====

undefined1  [16]
FUN_00486200(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  
  plVar5 = (long *)operator_new(0x1ac0);
  uVar2 = *param_2;
  lVar7 = param_2[1];
  plVar8 = plVar5 + 1;
  *plVar8 = 0;
  plVar9 = plVar5 + 2;
  *plVar9 = 0;
  *plVar5 = (long)&PTR_FUN_00d1d6e0;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar6 = *param_3;
  *param_3 = 0;
  FUN_0044c3fc(plVar5 + 3,uVar2,lVar7,uVar6,param_4);
  if (plVar5[4] == 0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5[3] = (long)(plVar5 + 3);
    plVar5[4] = (long)plVar5;
  }
  else {
    if (*(long *)(plVar5[4] + 8) != -1) goto LAB_00486314;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5[3] = (long)(plVar5 + 3);
    plVar5[4] = (long)plVar5;
    FUN_005466cc();
  }
  do {
    lVar7 = *plVar8;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = lVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar7 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_005466cc(plVar5);
  }
LAB_00486314:
  auVar10._8_8_ = plVar5;
  auVar10._0_8_ = plVar5 + 3;
  return auVar10;
}


// ===== 00486330  FUN_00486330 =====

void FUN_00486330(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1d6e0;
  FUN_005466c0();
  return;
}


// ===== 00486340  FUN_00486340 =====

void FUN_00486340(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1d6e0;
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 00486370  FUN_00486370 =====

void FUN_00486370(long param_1)

{
  FUN_0044df20(param_1 + 0x18);
  return;
}


// ===== 00486378  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0048637c  FUN_0048637c =====

void FUN_0048637c(long param_1,long param_2,long param_3,long param_4)

{
  bool bVar1;
  unkbyte10 *pVar2;
  char cVar3;
  char cVar4;
  uint6 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  unkbyte10 Var12;
  uint3 uVar13;
  ulong uVar14;
  ulong uVar15;
  short *psVar16;
  long lVar17;
  unkbyte10 *pVar18;
  ulong uVar19;
  long lVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  byte bVar38;
  short sVar39;
  short sVar42;
  short sVar43;
  undefined8 uVar40;
  ulong uVar41;
  short sVar44;
  short sVar45;
  short sVar46;
  short sVar47;
  short sVar48;
  short sVar49;
  short sVar50;
  short sVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  short sVar55;
  short sVar56;
  ulong uVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  
  uVar14 = param_4 * param_3;
  fVar21 = 0.0;
  if (uVar14 == 0) goto LAB_0048650c;
  if (uVar14 < 0x10) {
    lVar17 = 0;
    uVar15 = 0;
LAB_004864dc:
    lVar20 = uVar14 - uVar15;
    psVar16 = (short *)(param_2 + uVar15 * 2);
    do {
      sVar39 = *psVar16;
      if (*(byte *)(param_1 + 0x2d) != 0 && sVar39 < 0) {
        sVar39 = sVar39 + 1;
      }
      lVar20 = lVar20 + -1;
      lVar17 = lVar17 + (ulong)(uint)((int)sVar39 * (int)sVar39);
      psVar16 = psVar16 + 1;
    } while (lVar20 != 0);
  }
  else {
    uVar15 = uVar14 & 0xfffffffffffffff0;
    pVar18 = (unkbyte10 *)(param_2 + 0x10);
    lVar17 = 0;
    lVar20 = 0;
    lVar28 = 0;
    lVar29 = 0;
    lVar24 = 0;
    lVar25 = 0;
    lVar26 = 0;
    lVar27 = 0;
    lVar30 = 0;
    lVar31 = 0;
    lVar36 = 0;
    lVar37 = 0;
    lVar32 = 0;
    lVar33 = 0;
    lVar34 = 0;
    lVar35 = 0;
    uVar19 = uVar15;
    do {
      uVar19 = uVar19 - 0x10;
      uVar40 = NEON_cmeq((ulong)(uint)*(byte *)(param_1 + 0x2d),0,1);
      pVar2 = pVar18 + -1;
      uVar10 = *(undefined8 *)((long)pVar18 + -8);
      sVar46 = (short)((ulong)uVar10 >> 0x10);
      sVar47 = (short)((ulong)uVar10 >> 0x20);
      sVar48 = (short)((ulong)uVar10 >> 0x30);
      uVar9 = *(undefined8 *)pVar2;
      uVar7 = *(undefined8 *)((long)pVar18 + 8);
      sVar54 = (short)((ulong)uVar7 >> 0x10);
      sVar55 = (short)((ulong)uVar7 >> 0x20);
      sVar56 = (short)((ulong)uVar7 >> 0x30);
      uVar6 = *(undefined8 *)pVar18;
      Var12 = *pVar18;
      bVar38 = ~(byte)uVar40;
      pVar18 = pVar18 + 2;
      auVar60._10_2_ = sVar46;
      auVar60._0_10_ = *pVar2;
      auVar60._12_2_ = sVar47;
      auVar60._14_2_ = sVar48;
      auVar60 = NEON_cmlt(auVar60,0,2);
      auVar58._10_2_ = sVar54;
      auVar58._0_10_ = Var12;
      auVar58._12_2_ = sVar55;
      auVar58._14_2_ = sVar56;
      auVar58 = NEON_cmlt(auVar58,0,2);
      uVar41 = CONCAT17(bVar38 >> 7,
                        CONCAT16(bVar38 >> 6,
                                 CONCAT15(bVar38 >> 5,
                                          CONCAT14(bVar38 >> 4,
                                                   CONCAT13(bVar38 >> 3,
                                                            CONCAT12(bVar38 >> 2,
                                                                     CONCAT11(bVar38 >> 1,bVar38))))
                                         ))) & 0xff01010101010101;
      uVar57 = uVar41 & CONCAT17(auVar58[0xe],
                                 CONCAT16(auVar58[0xc],
                                          CONCAT15(auVar58[10],
                                                   CONCAT14(auVar58[8],
                                                            CONCAT13(auVar58[6],
                                                                     CONCAT12(auVar58[4],
                                                                              CONCAT11(auVar58[2],
                                                                                       auVar58[0])))
                                                           ))));
      uVar41 = uVar41 & CONCAT17(auVar60[0xe],
                                 CONCAT16(auVar60[0xc],
                                          CONCAT15(auVar60[10],
                                                   CONCAT14(auVar60[8],
                                                            CONCAT13(auVar60[6],
                                                                     CONCAT12(auVar60[4],
                                                                              CONCAT11(auVar60[2],
                                                                                       auVar60[0])))
                                                           ))));
      uVar13 = CONCAT12((char)(uVar41 >> 8),(short)uVar41) & 0xff00ff;
      sVar39 = (short)uVar9 + (ushort)(byte)uVar13;
      sVar42 = (short)((ulong)uVar9 >> 0x10) + (ushort)(byte)(uVar13 >> 0x10);
      sVar43 = (short)((ulong)uVar9 >> 0x20) + (ushort)(byte)(uVar41 >> 0x10);
      sVar44 = (short)((ulong)uVar9 >> 0x30) + (ushort)(byte)(uVar41 >> 0x18);
      sVar45 = (short)uVar10 + (ushort)(byte)(uVar41 >> 0x20);
      sVar46 = sVar46 + (ushort)(byte)(uVar41 >> 0x28);
      sVar47 = sVar47 + (ushort)(byte)(uVar41 >> 0x30);
      sVar48 = sVar48 + (ushort)(byte)(uVar41 >> 0x38);
      sVar49 = (short)uVar6 + (ushort)(byte)uVar57;
      sVar50 = (short)((ulong)uVar6 >> 0x10) + (ushort)(byte)(uVar57 >> 8);
      sVar51 = (short)((ulong)uVar6 >> 0x20) + (ushort)(byte)(uVar57 >> 0x10);
      sVar52 = (short)((ulong)uVar6 >> 0x30) + (ushort)(byte)(uVar57 >> 0x18);
      sVar53 = (short)uVar7 + (ushort)(byte)(uVar57 >> 0x20);
      sVar54 = sVar54 + (ushort)(byte)(uVar57 >> 0x28);
      sVar55 = sVar55 + (ushort)(byte)(uVar57 >> 0x30);
      sVar56 = sVar56 + (ushort)(byte)(uVar57 >> 0x38);
      iVar11 = (int)sVar48 * (int)sVar48;
      auVar59._0_4_ = (int)sVar53 * (int)sVar53;
      auVar59._4_4_ = (int)sVar54 * (int)sVar54;
      auVar59._8_4_ = (int)sVar55 * (int)sVar55;
      auVar59._12_4_ = (int)sVar56 * (int)sVar56;
      iVar8 = (int)sVar52 * (int)sVar52;
      uVar5 = CONCAT24((short)iVar11,(int)sVar47 * (int)sVar47);
      lVar26 = lVar26 + ((ulong)uVar5 & 0xffffffff);
      lVar27 = lVar27 + (CONCAT26((short)((uint)iVar11 >> 0x10),uVar5) >> 0x20);
      lVar24 = lVar24 + (ulong)(uint)((int)sVar45 * (int)sVar45);
      lVar25 = lVar25 + (ulong)(uint)((int)sVar46 * (int)sVar46);
      lVar28 = lVar28 + (ulong)(uint)((int)sVar43 * (int)sVar43);
      lVar29 = lVar29 + (ulong)(uint)((int)sVar44 * (int)sVar44);
      lVar17 = lVar17 + (ulong)(uint)((int)sVar39 * (int)sVar39);
      lVar20 = lVar20 + (ulong)(uint)((int)sVar42 * (int)sVar42);
      lVar34 = lVar34 + (auVar59._8_8_ & 0xffffffff);
      lVar35 = lVar35 + (auVar59._8_8_ >> 0x20);
      lVar32 = lVar32 + (ulong)auVar59._0_4_;
      lVar33 = lVar33 + (ulong)auVar59._4_4_;
      uVar5 = CONCAT24((short)iVar8,(int)sVar51 * (int)sVar51);
      lVar36 = lVar36 + ((ulong)uVar5 & 0xffffffff);
      lVar37 = lVar37 + (CONCAT26((short)((uint)iVar8 >> 0x10),uVar5) >> 0x20);
      lVar30 = lVar30 + (ulong)(uint)((int)sVar49 * (int)sVar49);
      lVar31 = lVar31 + (ulong)(uint)((int)sVar50 * (int)sVar50);
    } while (uVar19 != 0);
    lVar17 = lVar30 + lVar17 + lVar32 + lVar24 + lVar36 + lVar28 + lVar34 + lVar26 +
             lVar31 + lVar20 + lVar33 + lVar25 + lVar37 + lVar29 + lVar35 + lVar27;
    if (uVar14 - uVar15 != 0) goto LAB_004864dc;
  }
  fVar21 = (float)lVar17;
LAB_0048650c:
  fVar21 = log10f(fVar21 / (float)(uVar14 * 0x40000000));
  fVar21 = (float)NEON_fmadd(fVar21,0x41200000,0x3fb504f3);
  if (fVar21 <= -100.0) {
    fVar21 = -100.0;
  }
  uVar14 = (*(long *)(param_1 + 0x80) + 1U) % 0x14;
  *(float *)(param_1 + 0x30 + uVar14 * 4) = fVar21;
  *(ulong *)(param_1 + 0x80) = uVar14;
  uVar22 = NEON_fmadd(*(undefined4 *)(param_1 + 0x30),0x3d4ccccd,0);
  cVar3 = *(char *)(*(long *)(param_1 + 0x20) + 0x10);
  cVar4 = *(char *)(param_1 + 0x2c);
  uVar22 = NEON_fmadd(*(undefined4 *)(param_1 + 0x34),0x3d4ccccd,uVar22);
  uVar22 = NEON_fmadd(*(undefined4 *)(param_1 + 0x38),0x3d4ccccd,uVar22);
  uVar22 = NEON_fmadd(*(undefined4 *)(param_1 + 0x3c),0x3d4ccccd,uVar22);
  uVar22 = NEON_fmadd(*(undefined4 *)(param_1 + 0x40),0x3d4ccccd,uVar22);
  uVar22 = NEON_fmadd(*(undefined4 *)(param_1 + 0x44),0x3d4ccccd,uVar22);
  uVar22 = NEON_fmadd(*(undefined4 *)(param_1 + 0x48),0x3d4ccccd,uVar22);
  uVar22 = NEON_fmadd(*(undefined4 *)(param_1 + 0x4c),0x3d4ccccd,uVar22);
  uVar22 = NEON_fmadd(*(undefined4 *)(param_1 + 0x50),0x3d4ccccd,uVar22);
  uVar22 = NEON_fmadd(*(undefined4 *)(param_1 + 0x54),0x3d4ccccd,uVar22);
  uVar22 = NEON_fmadd(*(undefined4 *)(param_1 + 0x58),0x3d4ccccd,uVar22);
  uVar22 = NEON_fmadd(*(undefined4 *)(param_1 + 0x5c),0x3d4ccccd,uVar22);
  uVar22 = NEON_fmadd(*(undefined4 *)(param_1 + 0x60),0x3d4ccccd,uVar22);
  uVar22 = NEON_fmadd(*(undefined4 *)(param_1 + 100),0x3d4ccccd,uVar22);
  uVar22 = NEON_fmadd(*(undefined4 *)(param_1 + 0x68),0x3d4ccccd,uVar22);
  uVar22 = NEON_fmadd(*(undefined4 *)(param_1 + 0x6c),0x3d4ccccd,uVar22);
  uVar22 = NEON_fmadd(*(undefined4 *)(param_1 + 0x70),0x3d4ccccd,uVar22);
  uVar22 = NEON_fmadd(*(undefined4 *)(param_1 + 0x74),0x3d4ccccd,uVar22);
  uVar22 = NEON_fmadd(*(undefined4 *)(param_1 + 0x78),0x3d4ccccd,uVar22);
  fVar21 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x7c),0x3d4ccccd,uVar22);
  fVar23 = *(float *)(param_1 + 0x28);
  bVar1 = fVar21 != fVar23 && fVar21 < fVar23 == (NAN(fVar21) || NAN(fVar23));
  *(bool *)(param_1 + 0x2c) = bVar1;
  if ((cVar3 == '\0') && ((bool)cVar4 != bVar1)) {
                    /* WARNING: Could not recover jumptable at 0x00486634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x18))
              (param_1 + 8,fVar21 != fVar23 && fVar21 < fVar23 == (NAN(fVar21) || NAN(fVar23)));
    return;
  }
  return;
}


// ===== 0048664c  FUN_0048664c =====

void FUN_0048664c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *(code **)(param_1 + 0x18) = FUN_0041c32c;
  pcVar2 = *(code **)(*(long *)(param_1 + 0x20) + 8);
  *(undefined8 **)(param_1 + 0x20) = &DAT_001f1910;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(*puVar1);
  }
  uVar3 = *param_2;
  *(undefined8 *)(param_1 + 0x10) = param_2[1];
  *puVar1 = uVar3;
  *(undefined8 *)(param_1 + 0x18) = param_2[2];
  *(undefined8 *)(param_1 + 0x20) = param_2[3];
  param_2[2] = FUN_0041c32c;
  param_2[3] = &DAT_001f1910;
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x10) != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004866f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x18))(puVar1,*(undefined1 *)(param_1 + 0x2c));
  return;
}


// ===== 004866f4  FUN_004866f4 =====

void FUN_004866f4(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x28) = param_1;
  return;
}


// ===== 004866fc  FUN_004866fc =====

void FUN_004866fc(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x2d) = param_2;
  return;
}


// ===== 00486704  FUN_00486704 =====

void FUN_00486704(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  void *pvVar8;
  void *pvVar9;
  long *plVar10;
  long lVar11;
  void *local_a0;
  undefined8 *puStack_98;
  code *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  uVar7 = FUN_0051452c(param_2);
  pvVar8 = operator_new(0x60);
  FUN_00512b50(pvVar8,uVar7);
  *param_1 = pvVar8;
  param_1[1] = param_2;
  param_1[2] = param_3;
  if (param_3 != (long *)0x0) {
    plVar10 = param_3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  plVar10 = param_1 + 3;
  param_1[4] = 0;
  *plVar10 = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  pvVar8 = operator_new(0x40);
  local_80 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_a0 = (void *)0x0;
  local_88 = (undefined8 *)0x0;
  local_90 = (code *)0x0;
  FUN_004d8e34(pvVar8,&local_a0);
  param_1[0x18] = FUN_0048870c;
  param_1[0x19] = &DAT_001f1910;
  param_1[0x24] = FUN_00410008;
  param_1[0x25] = &DAT_001f1910;
  param_1[9] = pvVar8;
  param_1[0x1c] = FUN_00488718;
  param_1[0x1d] = &DAT_001f1910;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x20] = FUN_0040ea94;
  param_1[0x21] = &DAT_001f1910;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  *(undefined8 *)((long)param_1 + 0x171) = 0;
  *(undefined8 *)((long)param_1 + 0x169) = 0;
  FUN_007b5d10(param_1 + 0x2b);
  *(undefined1 *)(param_1 + 0x2f) = 1;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  *(undefined8 *)((long)param_1 + 0x1c1) = 0;
  *(undefined8 *)((long)param_1 + 0x1b9) = 0;
  FUN_007b5d10(param_1 + 0x35);
  *(undefined1 *)(param_1 + 0x39) = 1;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3a] = 0;
  pvVar8 = operator_new(800);
  FUN_0048beb8();
  pvVar9 = (void *)*plVar10;
  *plVar10 = (long)pvVar8;
  if (pvVar9 != (void *)0x0) {
    FUN_0048c5cc(pvVar9);
    operator_delete(pvVar9);
    pvVar8 = (void *)*plVar10;
  }
  FUN_005467a4(pvVar8);
  if (*(char *)((long)pvVar8 + 0x48) != '\0') {
    puVar1 = param_1 + 0x3a;
    FUN_007b5a0c((long)pvVar8 + 0x28,param_1,param_1,FUN_00488724);
    FUN_005467c8(pvVar8);
    puVar2 = (undefined8 *)param_1[0x3b];
    local_90 = FUN_004887d8;
    local_88 = (undefined8 *)&DAT_001f6d60;
    local_a0 = pvVar8;
    puStack_98 = param_1;
    if (puVar2 < (undefined8 *)param_1[0x3c]) {
      if (puVar2 == (undefined8 *)0x0) goto LAB_00486d7c;
      puVar2[1] = param_1;
      *puVar2 = pvVar8;
      puVar2[2] = FUN_004887d8;
      puVar2[3] = &DAT_001f6d60;
      if (DAT_001f6d68 != 0) {
        local_90 = FUN_0040dec4;
        local_88 = &DAT_001f1910;
      }
      param_1[0x3b] = puVar2 + 4;
    }
    else {
      FUN_004313e8(puVar1,&local_a0);
    }
    if ((code *)local_88[1] != (code *)0x0) {
      (*(code *)local_88[1])(local_a0);
    }
    lVar11 = *plVar10;
    pvVar8 = (void *)(lVar11 + 0x50);
    FUN_005467a4(pvVar8);
    if (*(char *)(lVar11 + 0x98) == '\0') goto LAB_00486d54;
    FUN_007b5a0c(lVar11 + 0x78,param_1,param_1,FUN_0048883c);
    FUN_005467c8(pvVar8);
    plVar3 = (long *)param_1[0x3b];
    local_90 = FUN_0048888c;
    local_88 = (undefined8 *)&DAT_001f6d80;
    local_a0 = pvVar8;
    if (plVar3 < (long *)param_1[0x3c]) {
      if (plVar3 == (long *)0x0) goto LAB_00486d7c;
      plVar3[1] = (long)param_1;
      *plVar3 = (long)pvVar8;
      plVar3[2] = (long)FUN_0048888c;
      plVar3[3] = (long)&DAT_001f6d80;
      if (DAT_001f6d88 != 0) {
        local_90 = FUN_0040dec4;
        local_88 = &DAT_001f1910;
      }
      param_1[0x3b] = plVar3 + 4;
      puStack_98 = param_1;
    }
    else {
      puStack_98 = param_1;
      FUN_004313e8(puVar1,&local_a0);
    }
    if ((code *)local_88[1] != (code *)0x0) {
      (*(code *)local_88[1])(local_a0);
    }
    lVar11 = *plVar10;
    pvVar8 = (void *)(lVar11 + 0xa0);
    FUN_005467a4(pvVar8);
    if (*(char *)(lVar11 + 0xe8) == '\0') goto LAB_00486d54;
    FUN_007b5a0c(lVar11 + 200,param_1,param_1,FUN_004888f0);
    FUN_005467c8(pvVar8);
    plVar3 = (long *)param_1[0x3b];
    local_90 = FUN_00488940;
    local_88 = (undefined8 *)&DAT_001f6da0;
    local_a0 = pvVar8;
    if (plVar3 < (long *)param_1[0x3c]) {
      if (plVar3 == (long *)0x0) goto LAB_00486d7c;
      plVar3[1] = (long)param_1;
      *plVar3 = (long)pvVar8;
      plVar3[2] = (long)FUN_00488940;
      plVar3[3] = (long)&DAT_001f6da0;
      if (DAT_001f6da8 != 0) {
        local_90 = FUN_0040dec4;
        local_88 = &DAT_001f1910;
      }
      param_1[0x3b] = plVar3 + 4;
      puStack_98 = param_1;
    }
    else {
      puStack_98 = param_1;
      FUN_004313e8(puVar1,&local_a0);
    }
    if ((code *)local_88[1] != (code *)0x0) {
      (*(code *)local_88[1])(local_a0);
    }
    lVar11 = *plVar10;
    pvVar8 = (void *)(lVar11 + 0xf0);
    FUN_005467a4(pvVar8);
    if (*(char *)(lVar11 + 0x138) == '\0') goto LAB_00486d54;
    FUN_007b5a0c(lVar11 + 0x118,param_1,param_1,FUN_004889a4);
    FUN_005467c8(pvVar8);
    plVar3 = (long *)param_1[0x3b];
    local_90 = FUN_004889ac;
    local_88 = (undefined8 *)&DAT_001f6dc0;
    local_a0 = pvVar8;
    if (plVar3 < (long *)param_1[0x3c]) {
      if (plVar3 == (long *)0x0) goto LAB_00486d7c;
      plVar3[1] = (long)param_1;
      *plVar3 = (long)pvVar8;
      plVar3[2] = (long)FUN_004889ac;
      plVar3[3] = (long)&DAT_001f6dc0;
      if (DAT_001f6dc8 != 0) {
        local_90 = FUN_0040dec4;
        local_88 = &DAT_001f1910;
      }
      param_1[0x3b] = plVar3 + 4;
      puStack_98 = param_1;
    }
    else {
      puStack_98 = param_1;
      FUN_004313e8(puVar1,&local_a0);
    }
    if ((code *)local_88[1] != (code *)0x0) {
      (*(code *)local_88[1])(local_a0);
    }
    lVar11 = *plVar10;
    pvVar8 = (void *)(lVar11 + 0x140);
    FUN_005467a4(pvVar8);
    if (*(char *)(lVar11 + 0x188) == '\0') goto LAB_00486d54;
    FUN_007b5a0c(lVar11 + 0x168,param_1,param_1,FUN_00488a10);
    FUN_005467c8(pvVar8);
    plVar3 = (long *)param_1[0x3b];
    local_90 = FUN_00488a4c;
    local_88 = (undefined8 *)&DAT_001f6de0;
    local_a0 = pvVar8;
    if (plVar3 < (long *)param_1[0x3c]) {
      if (plVar3 == (long *)0x0) goto LAB_00486d7c;
      plVar3[1] = (long)param_1;
      *plVar3 = (long)pvVar8;
      plVar3[2] = (long)FUN_00488a4c;
      plVar3[3] = (long)&DAT_001f6de0;
      if (DAT_001f6de8 != 0) {
        local_90 = FUN_0040dec4;
        local_88 = &DAT_001f1910;
      }
      param_1[0x3b] = plVar3 + 4;
      puStack_98 = param_1;
    }
    else {
      puStack_98 = param_1;
      FUN_004313e8(puVar1,&local_a0);
    }
    if ((code *)local_88[1] != (code *)0x0) {
      (*(code *)local_88[1])(local_a0);
    }
    lVar11 = *plVar10;
    pvVar8 = (void *)(lVar11 + 400);
    FUN_005467a4(pvVar8);
    if (*(char *)(lVar11 + 0x1d8) != '\0') {
      FUN_007b5a0c(lVar11 + 0x1b8,param_1,param_1,FUN_00488ab0);
      FUN_005467c8(pvVar8);
      plVar10 = (long *)param_1[0x3b];
      local_90 = FUN_00488ab8;
      local_88 = (undefined8 *)&DAT_001f6e00;
      local_a0 = pvVar8;
      if (plVar10 < (long *)param_1[0x3c]) {
        if (plVar10 == (long *)0x0) {
LAB_00486d7c:
          puStack_98 = param_1;
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        plVar10[1] = (long)param_1;
        *plVar10 = (long)pvVar8;
        plVar10[2] = (long)FUN_00488ab8;
        plVar10[3] = (long)&DAT_001f6e00;
        if (DAT_001f6e08 != 0) {
          local_90 = FUN_0040dec4;
          local_88 = &DAT_001f1910;
        }
        param_1[0x3b] = plVar10 + 4;
        puStack_98 = param_1;
      }
      else {
        puStack_98 = param_1;
        FUN_004313e8(puVar1,&local_a0);
      }
      if ((code *)local_88[1] != (code *)0x0) {
        (*(code *)local_88[1])(local_a0);
      }
      if (param_3 != (long *)0x0) {
        plVar10 = param_3 + 1;
        do {
          lVar11 = *plVar10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*param_3 + 0x10))(param_3);
          FUN_005466cc(param_3);
        }
      }
      if (*(long *)(lVar6 + 0x28) == local_58) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
LAB_00486d54:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
             "this->has_value()","optional operator-> called on a disengaged value");
}


// ===== 00486da8  FUN_00486da8 =====

/* WARNING: Removing unreachable block (ram,0x00486f68) */

void FUN_00486da8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  void *pvVar7;
  code *pcVar8;
  long lVar9;
  long *plVar10;
  void *pvVar11;
  void *pvVar12;
  
  puVar1 = param_1 + 0x3a;
  FUN_004312b4(puVar1);
  pvVar11 = (void *)param_1[3];
  param_1[3] = 0;
  if (pvVar11 != (void *)0x0) {
    FUN_0048c5cc(pvVar11);
    operator_delete(pvVar11);
  }
  uVar5 = FUN_0044075c();
  if ((uVar5 & 1) == 0) {
    uVar6 = FUN_00512e1c(*param_1);
    FUN_00623bb0(&DAT_001f6643,"../../discord_native_lib/src/socket_client.cpp",0x1a0,
                 "*** ~SocketClient() pre-flush, pending: ",uVar6);
  }
  FUN_00512e5c(*param_1);
  uVar5 = FUN_0044075c();
  if ((uVar5 & 1) == 0) {
    uVar6 = FUN_00512e1c(*param_1);
    FUN_00623bb0(&DAT_001f6643,"../../discord_native_lib/src/socket_client.cpp",0x1d0,
                 "*** ~SocketClient() post-flush, pending: ",uVar6);
  }
  FUN_004312b4(puVar1);
  pvVar11 = (void *)*puVar1;
  if (pvVar11 != (void *)0x0) {
    pvVar12 = pvVar11;
    pvVar7 = (void *)param_1[0x3b];
    if ((void *)param_1[0x3b] != pvVar11) {
      do {
        pvVar12 = (void *)((long)pvVar7 + -0x20);
        pcVar8 = *(code **)(*(long *)((long)pvVar7 + -8) + 8);
        if (pcVar8 != (code *)0x0) {
          (*pcVar8)(*(undefined8 *)((long)pvVar7 + -0x20));
        }
        pvVar7 = pvVar12;
      } while (pvVar12 != pvVar11);
      pvVar12 = (void *)*puVar1;
    }
    param_1[0x3b] = pvVar11;
    operator_delete(pvVar12);
  }
  if (*(char *)(param_1 + 0x39) != '\0') {
    FUN_007b5d24(param_1 + 0x35);
  }
  FUN_00546ab0(param_1 + 0x30);
  if (*(char *)(param_1 + 0x2f) != '\0') {
    FUN_007b5d24(param_1 + 0x2b);
  }
  FUN_00546ab0(param_1 + 0x26);
  if (*(code **)(param_1[0x25] + 8) != (code *)0x0) {
    (**(code **)(param_1[0x25] + 8))(param_1[0x22]);
  }
  if (*(code **)(param_1[0x21] + 8) != (code *)0x0) {
    (**(code **)(param_1[0x21] + 8))(param_1[0x1e]);
  }
  if (*(code **)(param_1[0x1d] + 8) != (code *)0x0) {
    (**(code **)(param_1[0x1d] + 8))(param_1[0x1a]);
  }
  if (*(code **)(param_1[0x19] + 8) != (code *)0x0) {
    (**(code **)(param_1[0x19] + 8))(param_1[0x16]);
  }
  pvVar11 = (void *)param_1[0xe];
  if (pvVar11 != (void *)0x0) {
    pvVar7 = (void *)param_1[0xf];
    pvVar12 = pvVar11;
    if (pvVar7 != pvVar11) {
      do {
        pvVar7 = (void *)((long)pvVar7 + -0x28);
      } while (pvVar7 != pvVar11);
      pvVar12 = (void *)param_1[0xe];
    }
    param_1[0xf] = pvVar11;
    operator_delete(pvVar12);
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    operator_delete((void *)param_1[0xb]);
  }
  pvVar11 = (void *)param_1[9];
  param_1[9] = 0;
  if (pvVar11 != (void *)0x0) {
    operator_delete(pvVar11);
  }
  FUN_00546ab0(param_1 + 4);
  pvVar11 = (void *)param_1[3];
  param_1[3] = 0;
  if (pvVar11 != (void *)0x0) {
    FUN_0048c5cc(pvVar11);
    operator_delete(pvVar11);
  }
  plVar10 = (long *)param_1[2];
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10 + 1;
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
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_005466cc(plVar10);
    }
  }
  pvVar11 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar11 != (void *)0x0) {
    FUN_00512bf4(pvVar11);
    operator_delete(pvVar11);
    return;
  }
  return;
}


// ===== 00487034  FUN_00487034 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00487034(long param_1,undefined4 param_2,undefined8 param_3,undefined2 param_4,uint param_5
                 ,undefined8 *param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  char *local_d8;
  char **local_d0;
  long lStack_c8;
  undefined1 auStack_c0 [4];
  undefined2 local_bc [2];
  char *local_b8;
  void *local_b0;
  undefined1 *puStack_a8;
  long lStack_a0;
  void *local_98;
  undefined8 local_90;
  long lStack_88;
  undefined1 local_7c;
  undefined1 local_78;
  undefined1 local_74;
  undefined1 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_bc[0] = param_4;
  uVar5 = FUN_00417e08();
  if ((uVar5 & 1) == 0) {
    puStack_a8 = auStack_c0;
    local_b8 = "../../discord_native_lib/src/socket_client.cpp";
    local_b0 = (void *)0x231;
    local_d0 = &local_b8;
    local_d8 = "TryConnect: ";
    FUN_00623bb0(&DAT_001f6e20,"../../discord_native_lib/src/socket_client.cpp",0x231,"TryConnect: "
                 ,param_3,&DAT_001ca603,param_4," with ssrc: ",param_2);
  }
  local_b8 = (char *)FUN_005183d8();
  uVar5 = *(ulong *)(param_1 + 0x78);
  if (uVar5 < *(ulong *)(param_1 + 0x80)) {
    FUN_004885c8(uVar5,param_3);
    lVar7 = uVar5 + 0x28;
    *(long *)(param_1 + 0x78) = lVar7;
  }
  else {
    FUN_00488448((long *)(param_1 + 0x70),param_3,local_bc,&local_b8);
    lVar7 = *(long *)(param_1 + 0x78);
  }
  if (*(long *)(param_1 + 0x70) == lVar7) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,"!empty()"
               ,"back() called on an empty vector");
  }
  uVar5 = FUN_0048e734(*(undefined8 *)(param_1 + 0x18));
  if ((uVar5 & 1) == 0) {
    lVar7 = *(long *)(param_1 + 0x108);
    *(code **)(param_1 + 0x100) = FUN_0040ea94;
    *(undefined8 **)(param_1 + 0x108) = &DAT_001f1910;
    pcVar6 = *(code **)(lVar7 + 8);
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(*(undefined8 *)(param_1 + 0xf0));
    }
    uVar8 = *param_6;
    *(undefined8 *)(param_1 + 0xf8) = param_6[1];
    *(undefined8 *)(param_1 + 0xf0) = uVar8;
    *(undefined8 *)(param_1 + 0x100) = param_6[2];
    *(undefined8 *)(param_1 + 0x108) = param_6[3];
    param_6[2] = FUN_0040ea94;
    param_6[3] = &DAT_001f1910;
    FUN_0048ca8c(*(undefined8 *)(param_1 + 0x18),param_2,param_3,local_bc[0],param_5 & 1);
  }
  else {
    local_7c = 0;
    local_78 = 0;
    local_74 = 0;
    local_70 = 0;
    puStack_a8 = (undefined1 *)0x0;
    local_b0 = (void *)0x0;
    local_98 = (void *)0x0;
    lStack_a0 = 0;
    lStack_88 = 0;
    local_90 = 0;
    local_b8 = (char *)((ulong)local_b8 & 0xffffffffffffff00);
    local_d8 = (char *)operator_new(0x20);
    uVar8 = s_Connection_already_in_progress_001c7d5f._0_8_;
    lStack_c8 = _UNK_001f4c98;
    local_d0 = _DAT_001f4c90;
    if ((local_d8 < "onnection already in progress") &&
       ("Connection already in progress" < local_d8 + 0x1e)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar2 = CONCAT26(s_Connection_already_in_progress_001c7d5f._14_2_,
                     s_Connection_already_in_progress_001c7d5f._8_6_);
    local_d8[0x1e] = '\0';
    uVar4 = s_Connection_already_in_progress_001c7d5f._22_8_;
    uVar3 = CONCAT62(s_Connection_already_in_progress_001c7d5f._16_6_,
                     s_Connection_already_in_progress_001c7d5f._14_2_);
    pcVar6 = (code *)param_6[2];
    *(undefined8 *)(local_d8 + 8) = uVar2;
    *(undefined8 *)local_d8 = uVar8;
    *(undefined8 *)(local_d8 + 0x16) = uVar4;
    *(undefined8 *)(local_d8 + 0xe) = uVar3;
    (*pcVar6)(param_6,&local_b8,&local_d8);
    if (lStack_c8 < 0) {
      operator_delete(local_d8);
    }
    if (lStack_88 < 0) {
      operator_delete(local_98);
    }
    if (lStack_a0 < 0) {
      operator_delete(local_b0);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004872e0  FUN_004872e0 =====

void FUN_004872e0(long param_1,undefined8 param_2,undefined2 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_58;
  undefined2 local_4c [2];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_4c[0] = param_3;
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f614e,"../../discord_native_lib/src/socket_client.cpp",0x311,
                 "SetUdpEndpoint: ",param_2,&DAT_001ca603,param_3);
  }
  local_58 = FUN_005183d8();
  uVar2 = *(ulong *)(param_1 + 0x78);
  if (uVar2 < *(ulong *)(param_1 + 0x80)) {
    FUN_004885c8(uVar2,param_2);
    lVar3 = uVar2 + 0x28;
    *(long *)(param_1 + 0x78) = lVar3;
  }
  else {
    FUN_00488448((long *)(param_1 + 0x70),param_2,local_4c,&local_58);
    lVar3 = *(long *)(param_1 + 0x78);
  }
  if (*(long *)(param_1 + 0x70) != lVar3) {
    FUN_0048ddb4(*(undefined8 *)(param_1 + 0x18),param_2,local_4c[0]);
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,"!empty()",
             "back() called on an empty vector");
}


// ===== 00487404  FUN_00487404 =====

void FUN_00487404(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/socket_client.cpp",0x369,
                 "ClearUdpEndpoint");
  }
  FUN_0048e1d8(*(undefined8 *)(param_1 + 0x18));
  return;
}


// ===== 0048744c  FUN_0048744c =====

void FUN_0048744c(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  *(code **)(param_1 + 0x120) = FUN_00410008;
  pcVar1 = *(code **)(*(long *)(param_1 + 0x128) + 8);
  *(undefined8 **)(param_1 + 0x128) = &DAT_001f1910;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)(param_1 + 0x110));
  }
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x118) = param_2[1];
  *(undefined8 *)(param_1 + 0x110) = uVar2;
  *(undefined8 *)(param_1 + 0x120) = param_2[2];
  *(undefined8 *)(param_1 + 0x128) = param_2[3];
  param_2[2] = FUN_00410008;
  param_2[3] = &DAT_001f1910;
  return;
}


// ===== 004874c8  FUN_004874c8 =====

/* WARNING: Removing unreachable block (ram,0x00487530) */

void FUN_004874c8(long param_1,long *param_2)

{
  long lVar1;
  
  for (lVar1 = param_2[1]; lVar1 != *param_2; lVar1 = lVar1 + -0x18) {
  }
  param_2[1] = *param_2;
  FUN_005467a4(param_1 + 0x20);
  FUN_004d8e48(param_2);
  FUN_005467c8(param_1 + 0x20);
  return;
}


// ===== 0048753c  FUN_0048753c =====

void FUN_0048753c(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  void *pvVar2;
  undefined4 local_78 [4];
  void *local_68;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_007cdbf8(auStack_60);
  pvVar2 = operator_new(0x28);
  FUN_007cef74();
  *(undefined4 *)((long)pvVar2 + 8) = param_2;
  FUN_007cdd88(auStack_60,pvVar2);
  FUN_007cd458(local_78,auStack_60);
  FUN_004875f0(param_1,local_68,local_78[0],0,0);
  pvVar2 = local_68;
  local_68 = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  FUN_007cdc18(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004875f0  FUN_004875f0 =====

void FUN_004875f0(long param_1,void *param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong local_80;
  undefined1 local_78 [16];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (0 < (int)param_3) {
    uVar5 = (ulong)param_3;
    local_78 = FUN_005cd334(0,0);
    lVar1 = param_1 + 0x20;
    FUN_005467a4(lVar1);
    uVar3 = FUN_004d9140(*(undefined8 *)(param_1 + 0x48),uVar5);
    uVar4 = FUN_005125e4(local_78,uVar3);
    uVar3 = local_78._8_8_;
    memcpy((void *)local_78._0_8_,param_2,uVar5);
    local_80 = uVar5;
    local_78._8_8_ = uVar5;
    uVar5 = FUN_004d93d0(*(undefined8 *)(param_1 + 0x48),local_78._0_8_,&local_80,uVar3);
    if ((uVar5 & 1) == 0) {
      FUN_005467c8(lVar1);
    }
    else {
      local_78._8_8_ = local_80;
      FUN_005467c8(lVar1);
      uVar5 = FUN_0048e384(*(undefined8 *)(param_1 + 0x18),uVar4,local_78._0_8_,local_78._8_8_,
                           param_4,param_5);
      if ((uVar5 & 1) != 0) {
        uVar3 = 1;
        *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + 1;
        *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + local_78._8_8_;
        goto LAB_00487700;
      }
    }
  }
  uVar3 = 0;
LAB_00487700:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 00487734  FUN_00487734 =====

void FUN_00487734(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004df1c8(auStack_60,*(undefined4 *)(param_1 + 0x88));
  uVar2 = FUN_004e1438(param_2,&DAT_001a5c3f);
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  FUN_004df1ec(auStack_60,*(undefined4 *)(param_1 + 0x50));
  uVar2 = FUN_004e1438(param_2,"decryptionFailures");
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  FUN_004df478(auStack_60,param_1 + 0x58);
  uVar2 = FUN_004e1438(param_2,"localAddress");
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  FUN_004df230(auStack_60,*(undefined8 *)(param_1 + 0x90));
  uVar2 = FUN_004e1438(param_2,"bytesSent");
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  FUN_004df230(auStack_60,*(undefined8 *)(param_1 + 0x98));
  uVar2 = FUN_004e1438(param_2,"packetsSent");
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  FUN_004df230(auStack_60,*(undefined8 *)(param_1 + 0xa0));
  uVar2 = FUN_004e1438(param_2,"bytesReceived");
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  FUN_004df230(auStack_60,*(undefined8 *)(param_1 + 0xa8));
  uVar2 = FUN_004e1438(param_2,"packetsReceived");
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  FUN_004df210(auStack_60,*(long *)(*(long *)(param_1 + 0x18) + 0x220) / 1000);
  uVar2 = FUN_004e1438(param_2,"totalSendDelayMs");
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  FUN_004df210(auStack_60,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x228));
  uVar2 = FUN_004e1438(param_2,"sendDelayPackets");
  FUN_004dfa04(uVar2,auStack_60);
  FUN_004df880(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00487934  FUN_00487934 =====

void FUN_00487934(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  
  FUN_0048e570(*(undefined8 *)(param_1 + 0x18));
  if (*(char *)(param_2 + 0x70) != '\0') {
    uVar5 = *(undefined8 *)(param_2 + 0x60);
    puVar1 = *(undefined8 **)(param_2 + 0x68);
    uVar3 = *(undefined8 *)(param_2 + 0x50);
    uVar2 = *(undefined8 *)(param_2 + 0x58);
    pcVar4 = (code *)*puVar1;
    if (pcVar4 != (code *)0x0) {
      uVar3 = (*pcVar4)();
    }
    lVar6 = *(long *)(param_1 + 200);
    *(undefined8 *)(param_1 + 0xc0) = uVar5;
    *(undefined8 **)(param_1 + 200) = puVar1;
    uVar5 = *(undefined8 *)(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 0xb0) = uVar3;
    *(undefined8 *)(param_1 + 0xb8) = uVar2;
    pcVar4 = *(code **)(lVar6 + 8);
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar5);
    }
  }
  if (*(char *)(param_2 + 0x98) != '\0') {
    uVar5 = *(undefined8 *)(param_2 + 0x88);
    puVar1 = *(undefined8 **)(param_2 + 0x90);
    uVar3 = *(undefined8 *)(param_2 + 0x78);
    uVar2 = *(undefined8 *)(param_2 + 0x80);
    pcVar4 = (code *)*puVar1;
    if (pcVar4 != (code *)0x0) {
      uVar3 = (*pcVar4)();
    }
    lVar6 = *(long *)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0xe0) = uVar5;
    *(undefined8 **)(param_1 + 0xe8) = puVar1;
    uVar5 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0xd0) = uVar3;
    *(undefined8 *)(param_1 + 0xd8) = uVar2;
    pcVar4 = *(code **)(lVar6 + 8);
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar5);
    }
  }
  if (*(char *)(param_2 + 0x48) != '\0') {
    FUN_00487a08(param_1,param_2 + 0x18);
    return;
  }
  return;
}


// ===== 00487a08  FUN_00487a08 =====

void FUN_00487a08(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_c0 [8];
  char *local_b8;
  undefined4 *puStack_b0;
  undefined4 local_a8;
  char local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  FUN_004d8204(&local_a8,plVar1);
  if (local_a4 == '\0') {
    uVar6 = FUN_004249b0();
    if ((uVar6 & 1) == 0) {
      plVar1 = (long *)*param_2;
      if (-1 < *(char *)((long)param_2 + 0x17)) {
        plVar1 = param_2;
      }
      FUN_00623bb0(&DAT_001f4ead,"../../discord_native_lib/src/socket_client.cpp",0x753,
                   "SetEncryptionSettings error: unknown mode \'",plVar1,&DAT_001c1d3e);
    }
  }
  else {
    puVar2 = (undefined8 *)param_2[3];
    if (param_2[4] - (long)puVar2 == 0x20) {
      uVar10 = puVar2[1];
      uVar9 = *puVar2;
      uVar8 = puVar2[3];
      uVar7 = puVar2[2];
      FUN_005467a4(param_1 + 0x20);
      pvVar4 = operator_new(0x40);
      local_88 = local_a8;
      uStack_78._4_4_ = (undefined4)uVar7;
      uStack_70 = (undefined4)((ulong)uVar7 >> 0x20);
      local_64 = 0x80000000;
      uStack_7c = (undefined4)uVar10;
      uStack_78._0_4_ = (undefined4)((ulong)uVar10 >> 0x20);
      uStack_84 = (undefined4)uVar9;
      uStack_80 = (undefined4)((ulong)uVar9 >> 0x20);
      uStack_58 = uStack_98;
      local_60 = local_a0;
      local_50 = local_90;
      uStack_6c = uVar8;
      FUN_004d8e34(pvVar4,&local_88);
      pvVar5 = *(void **)(param_1 + 0x48);
      *(void **)(param_1 + 0x48) = pvVar4;
      if (pvVar5 != (void *)0x0) {
        operator_delete(pvVar5);
      }
      FUN_005467c8(param_1 + 0x20);
    }
    else {
      uVar6 = FUN_004249b0();
      if ((uVar6 & 1) == 0) {
        uStack_78 = auStack_c0;
        local_88 = 0x19766b;
        uStack_84 = 0;
        uStack_80 = 0x7bb;
        uStack_7c = 0;
        puStack_b0 = &local_88;
        local_b8 = "SetEncryptionSettings mode: ";
        FUN_00623bb0(&DAT_001f6e28,"../../discord_native_lib/src/socket_client.cpp",0x7bb,
                     "SetEncryptionSettings mode: ",param_2," error: expected ",0x20,
                     " byte key, received ",param_2[4] - param_2[3]," bytes");
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00487bc4  FUN_00487bc4 =====

void FUN_00487bc4(long param_1,char *param_2,ulong *param_3)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  long lVar10;
  bool bVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  char *local_d0;
  char **local_c8;
  ulong local_c0;
  char **ppcStack_b8;
  char *local_b0;
  uint local_a4;
  char *local_a0;
  undefined4 local_94;
  char *local_90;
  ulong *local_88;
  char **local_80;
  char **ppcStack_78;
  uint *local_70;
  long local_68;
  
  lVar10 = tpidr_el0;
  local_68 = *(long *)(lVar10 + 0x28);
  uVar12 = FUN_005105e4(*param_3,param_3[1]);
  uVar15 = *param_3;
  local_b0 = (char *)param_3[1];
  pcVar1 = (char *)0x8;
  if ((uVar12 & 1) == 0) {
    pcVar1 = (char *)0xc;
  }
  *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + 1;
  *(char **)(param_1 + 0xa0) = local_b0 + *(long *)(param_1 + 0xa0);
  FUN_005467a4(param_1 + 0x20);
  uVar13 = FUN_004d916c(*(undefined8 *)(param_1 + 0x48),uVar15,&local_b0,param_3[2]);
  FUN_005467c8(param_1 + 0x20);
  if ((uVar13 & 1) == 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    lVar14 = FUN_0062589c();
    lVar2 = DAT_00d60318;
    if (500 < lVar14 - DAT_00d60318) {
      lVar2 = lVar14;
      if (pcVar1 < local_b0) {
        if ((uVar12 & 1) == 0) {
          uVar12 = FUN_004022fc();
          if ((uVar12 & 1) == 0) {
            local_80 = &local_a0;
            local_c8 = &local_90;
            local_88 = (ulong *)0x9a2;
            local_90 = "../../discord_native_lib/src/socket_client.cpp";
            local_d0 = "Decryption error, dropping packet (RTP) with ssrc: ";
            uVar9 = (*(uint *)(uVar15 + 8) & 0xff00ff00) >> 8 |
                    (*(uint *)(uVar15 + 8) & 0xff00ff) << 8;
            local_c0 = (ulong)(uVar9 >> 0x10 | uVar9 << 0x10);
            ppcStack_b8 = &local_d0;
            FUN_00623bb0(&DAT_001f6e31,"../../discord_native_lib/src/socket_client.cpp",0x9a2,
                         "Decryption error, dropping packet (RTP) with ssrc: ",local_c0,", seq: ",
                         (uint)(*(ushort *)(uVar15 + 2) >> 8) |
                         (*(ushort *)(uVar15 + 2) & 0xff00ff) << 8,", length: ",local_b0);
          }
        }
        else {
          bVar5 = *(byte *)(uVar15 + 4);
          bVar6 = *(byte *)(uVar15 + 5);
          bVar7 = *(byte *)(uVar15 + 6);
          bVar8 = *(byte *)(uVar15 + 7);
          uVar15 = FUN_004022fc();
          if ((uVar15 & 1) == 0) {
            FUN_00623bb0(&DAT_001f620c,"../../discord_native_lib/src/socket_client.cpp",0x9d2,
                         "Decryption error, dropping RTCP packet (RTCP) with ssrc: ",
                         (uint)bVar5 << 0x18 | (uint)bVar6 << 0x10 | (uint)bVar7 << 8 | (uint)bVar8,
                         ", length: ",local_b0);
          }
        }
      }
      else {
        uVar15 = FUN_004022fc();
        if ((uVar15 & 1) == 0) {
          FUN_00623bb0(&DAT_001f6643,"../../discord_native_lib/src/socket_client.cpp",0xa02,
                       "Decryption error, dropping packet with length: ",local_b0);
        }
      }
    }
  }
  else {
    bVar11 = (uVar12 & 1) == 0;
    lVar2 = 4;
    if (bVar11) {
      lVar2 = 8;
    }
    lVar14 = 5;
    if (bVar11) {
      lVar14 = 9;
    }
    param_3[1] = (ulong)local_b0;
    lVar3 = 6;
    if (bVar11) {
      lVar3 = 10;
    }
    lVar4 = 7;
    if (bVar11) {
      lVar4 = 0xb;
    }
    local_94 = 1;
    if (!bVar11) {
      local_94 = 2;
    }
    local_a4 = (uint)*(byte *)(uVar15 + lVar2) << 0x18 | (uint)*(byte *)(uVar15 + lVar14) << 0x10 |
               (uint)*(byte *)(uVar15 + lVar3) << 8 | (uint)*(byte *)(uVar15 + lVar4);
    local_d0 = local_b0;
    local_c0 = uVar15;
    local_a0 = param_2;
    FUN_005467a4(param_1 + 0x130);
    if (*(char *)(param_1 + 0x178) == '\0') {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
                 "this->has_value()","optional operator-> called on a disengaged value");
    }
    local_90 = (char *)&local_94;
    local_88 = &local_c0;
    local_80 = &local_d0;
    ppcStack_78 = &local_a0;
    local_70 = &local_a4;
    FUN_007b6160(param_1 + 0x158,&local_90,FUN_004886dc);
    FUN_005467c8(param_1 + 0x130);
    lVar2 = DAT_00d60318;
  }
  DAT_00d60318 = lVar2;
  if (*(long *)(lVar10 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00487ec4  FUN_00487ec4 =====

void FUN_00487ec4(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  size_t __n;
  undefined8 ****__src;
  ulong uVar2;
  long lVar3;
  undefined8 ***__src_00;
  undefined8 *puVar4;
  undefined8 ****ppppuVar5;
  undefined8 uVar6;
  undefined1 auStack_c0 [8];
  void *local_b8;
  char local_a1;
  void *local_a0;
  char local_89;
  undefined8 ***local_70;
  ulong uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_00411268(param_1 + 0xb,param_2 + 0x20);
  uVar6 = *param_1;
  FUN_004880fc(auStack_c0,param_2);
  ppppuVar5 = &local_70;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    __src = (undefined8 ****)*param_3;
    uVar2 = param_3[1];
    if (uVar2 < 0x17) {
      local_60 = CONCAT17((char)uVar2,(undefined7)local_60);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      ppppuVar5 = (undefined8 ****)operator_new(uVar1);
      local_60 = uVar1 | 0x8000000000000000;
      local_70 = ppppuVar5;
      uStack_68 = uVar2;
    }
    if ((ppppuVar5 <= __src) && (__src < (undefined8 ****)((long)ppppuVar5 + uVar2 + 1)))
    goto LAB_004880c8;
    memmove(ppppuVar5,__src,uVar2 + 1);
  }
  else {
    uStack_68 = param_3[1];
    local_70 = (undefined8 ***)*param_3;
    local_60 = param_3[2];
  }
  puVar4 = (undefined8 *)operator_new(0x78);
  *puVar4 = &PTR_FUN_00d1d790;
  puVar4[1] = param_1;
  FUN_004880fc(puVar4 + 2,auStack_c0);
  uVar2 = uStack_68;
  __src_00 = local_70;
  ppppuVar5 = (undefined8 ****)(puVar4 + 0xc);
  if ((long)local_60 < 0) {
    if (uStack_68 < 0x17) {
      *(char *)((long)puVar4 + 0x77) = (char)uStack_68;
    }
    else {
      if (0x7fffffffffffffef < uStack_68) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uStack_68 | 0xf) + 1;
      ppppuVar5 = (undefined8 ****)operator_new(uVar1);
      puVar4[0xc] = ppppuVar5;
      puVar4[0xd] = uVar2;
      puVar4[0xe] = uVar1 | 0x8000000000000000;
    }
    __n = uVar2 + 1;
    if ((ppppuVar5 <= __src_00) && (__src_00 < (undefined8 ****)((long)ppppuVar5 + __n))) {
LAB_004880c8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(ppppuVar5,__src_00,__n);
  }
  else {
    puVar4[0xd] = uStack_68;
    *ppppuVar5 = local_70;
    puVar4[0xe] = local_60;
  }
  FUN_00512cf8(uVar6,puVar4);
  if ((long)local_60 < 0) {
    operator_delete(local_70);
  }
  if (local_89 < '\0') {
    operator_delete(local_a0);
  }
  if (local_a1 < '\0') {
    operator_delete(local_b8);
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004880fc  FUN_004880fc =====

void FUN_004880fc(undefined1 *param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)(param_1 + 8);
  *param_1 = *param_2;
  if ((char)param_2[0x1f] < '\0') {
    puVar2 = *(undefined8 **)(param_2 + 8);
    uVar3 = *(ulong *)(param_2 + 0x10);
    if (uVar3 < 0x17) {
      param_1[0x1f] = (char)uVar3;
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar3 | 0xf) + 1;
      puVar4 = (undefined8 *)operator_new(uVar1);
      *(undefined8 **)(param_1 + 8) = puVar4;
      *(ulong *)(param_1 + 0x10) = uVar3;
      *(ulong *)(param_1 + 0x18) = uVar1 | 0x8000000000000000;
    }
    if ((puVar4 <= puVar2) && (puVar2 < (undefined8 *)((long)puVar4 + uVar3 + 1)))
    goto LAB_00488248;
    memmove(puVar4,puVar2,uVar3 + 1);
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = uVar6;
    *puVar4 = uVar5;
  }
  puVar4 = (undefined8 *)(param_1 + 0x20);
  if ((char)param_2[0x37] < '\0') {
    puVar2 = *(undefined8 **)(param_2 + 0x20);
    uVar3 = *(ulong *)(param_2 + 0x28);
    if (uVar3 < 0x17) {
      param_1[0x37] = (char)uVar3;
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar3 | 0xf) + 1;
      puVar4 = (undefined8 *)operator_new(uVar1);
      *(undefined8 **)(param_1 + 0x20) = puVar4;
      *(ulong *)(param_1 + 0x28) = uVar3;
      *(ulong *)(param_1 + 0x30) = uVar1 | 0x8000000000000000;
    }
    if ((puVar4 <= puVar2) && (puVar2 < (undefined8 *)((long)puVar4 + uVar3 + 1))) {
LAB_00488248:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(puVar4,puVar2,uVar3 + 1);
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x28);
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = uVar6;
    *puVar4 = uVar5;
  }
  uVar6 = *(undefined8 *)(param_2 + 0x40);
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  param_1[0x48] = param_2[0x48];
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  return;
}


// ===== 00488278  FUN_00488278 =====

void FUN_00488278(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  size_t __n;
  undefined8 ***__src;
  ulong uVar2;
  long lVar3;
  undefined8 **__src_00;
  undefined8 *puVar4;
  undefined8 ***pppuVar5;
  undefined8 uVar6;
  undefined8 **local_70;
  ulong uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pppuVar5 = &local_70;
  uVar6 = *param_1;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __src = (undefined8 ***)*param_2;
    uVar2 = param_2[1];
    if (uVar2 < 0x17) {
      local_60 = CONCAT17((char)uVar2,(undefined7)local_60);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      pppuVar5 = (undefined8 ***)operator_new(uVar1);
      local_60 = uVar1 | 0x8000000000000000;
      local_70 = pppuVar5;
      uStack_68 = uVar2;
    }
    if ((pppuVar5 <= __src) && (__src < (undefined8 ***)((long)pppuVar5 + uVar2 + 1)))
    goto LAB_00488414;
    memmove(pppuVar5,__src,uVar2 + 1);
  }
  else {
    uStack_68 = param_2[1];
    local_70 = (undefined8 **)*param_2;
    local_60 = param_2[2];
  }
  puVar4 = (undefined8 *)operator_new(0x28);
  uVar2 = uStack_68;
  __src_00 = local_70;
  pppuVar5 = (undefined8 ***)(puVar4 + 2);
  *puVar4 = &PTR_FUN_00d1d7e0;
  puVar4[1] = param_1;
  if ((long)local_60 < 0) {
    if (uStack_68 < 0x17) {
      *(char *)((long)puVar4 + 0x27) = (char)uStack_68;
    }
    else {
      if (0x7fffffffffffffef < uStack_68) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uStack_68 | 0xf) + 1;
      pppuVar5 = (undefined8 ***)operator_new(uVar1);
      puVar4[2] = pppuVar5;
      puVar4[3] = uVar2;
      puVar4[4] = uVar1 | 0x8000000000000000;
    }
    __n = uVar2 + 1;
    if ((pppuVar5 <= __src_00) && (__src_00 < (undefined8 ***)((long)pppuVar5 + __n))) {
LAB_00488414:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(pppuVar5,__src_00,__n);
  }
  else {
    puVar4[3] = uStack_68;
    *pppuVar5 = local_70;
    puVar4[4] = local_60;
  }
  FUN_00512cf8(uVar6,puVar4);
  if ((long)local_60 < 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00488448  FUN_00488448 =====

/* WARNING: Removing unreachable block (ram,0x00488594) */

void FUN_00488448(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  void *pvVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar3 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar3 * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar4 = param_1[2] - *param_1 >> 3;
  uVar5 = lVar4 * -0x6666666666666666;
  if (uVar5 < uVar1 || uVar5 - uVar1 == 0) {
    uVar5 = uVar1;
  }
  if (0x333333333333332 < (ulong)(lVar4 * -0x3333333333333333)) {
    uVar5 = 0x666666666666666;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (0x666666666666666 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
    pvVar2 = operator_new(uVar5 * 0x28);
  }
  pvVar9 = (void *)((long)pvVar2 + lVar3 * 8);
  pvVar2 = (void *)((long)pvVar2 + uVar5 * 0x28);
  FUN_004885c8(pvVar9,param_2,param_3,param_4);
  pvVar7 = (void *)*param_1;
  pvVar8 = (void *)param_1[1];
  pvVar10 = pvVar9;
  if (pvVar8 == pvVar7) {
    *param_1 = (long)pvVar9;
    param_1[1] = (long)pvVar9 + 0x28;
    param_1[2] = (long)pvVar2;
  }
  else {
    do {
      uVar13 = *(undefined8 *)((long)pvVar8 + -0x20);
      uVar12 = *(undefined8 *)((long)pvVar8 + -0x28);
      *(undefined8 *)((long)pvVar10 + -0x18) = *(undefined8 *)((long)pvVar8 + -0x18);
      pvVar6 = (void *)((long)pvVar8 + -0x28);
      *(undefined8 *)((long)pvVar10 + -0x20) = uVar13;
      *(undefined8 *)((long)pvVar10 + -0x28) = uVar12;
      pvVar11 = (void *)((long)pvVar10 + -0x28);
      *(undefined8 *)((long)pvVar8 + -0x20) = 0;
      *(undefined8 *)((long)pvVar8 + -0x18) = 0;
      uVar12 = *(undefined8 *)((long)pvVar8 + -0x10);
      *(undefined8 *)((long)pvVar8 + -0x28) = 0;
      *(undefined8 *)((long)pvVar10 + -8) = *(undefined8 *)((long)pvVar8 + -8);
      *(undefined8 *)((long)pvVar10 + -0x10) = uVar12;
      pvVar8 = pvVar6;
      pvVar10 = pvVar11;
    } while (pvVar6 != pvVar7);
    pvVar8 = (void *)*param_1;
    pvVar7 = (void *)param_1[1];
    *param_1 = (long)pvVar11;
    param_1[1] = (long)pvVar9 + 0x28;
    param_1[2] = (long)pvVar2;
    for (; pvVar7 != pvVar8; pvVar7 = (void *)((long)pvVar7 + -0x28)) {
    }
  }
  if (pvVar8 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar8);
  return;
}


// ===== 004885c8  FUN_004885c8 =====

undefined8 *
FUN_004885c8(undefined8 *param_1,undefined8 *param_2,undefined2 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  undefined2 uVar3;
  undefined8 *__dest;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  uVar3 = *param_3;
  uVar4 = *param_4;
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
    uVar6 = param_2[1];
    uVar5 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar6;
    *param_1 = uVar5;
  }
  *(undefined2 *)(param_1 + 3) = uVar3;
  param_1[4] = uVar4;
  return param_1;
}


// ===== 004886dc  FUN_004886dc =====

void FUN_004886dc(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00488708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))
            (param_2,*(undefined4 *)*param_1,*(undefined8 *)param_1[1],*(undefined8 *)param_1[2],
             *(undefined8 *)param_1[3],*(undefined4 *)param_1[4]);
  return;
}


// ===== 0048870c  FUN_0048870c =====

void FUN_0048870c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 00488718  FUN_00488718 =====

void FUN_00488718(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 00488724  FUN_00488724 =====

void FUN_00488724(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1 = (undefined8 *)*param_1;
  uVar3 = *param_1;
  FUN_00512a70(auStack_58,param_3);
  local_40 = param_2;
  puVar2 = (undefined8 *)operator_new(0x30);
  *puVar2 = &PTR_FUN_00d1d718;
  puVar2[1] = param_1;
  FUN_00512a70(puVar2 + 2,auStack_58);
  puVar2[5] = local_40;
  FUN_00512cf8(uVar3,puVar2);
  FUN_00512a8c(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004887d8  FUN_004887d8 =====

void FUN_004887d8(long *param_1)

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


// ===== 0048883c  FUN_0048883c =====

void FUN_0048883c(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  param_1 = (undefined8 *)*param_1;
  uVar2 = *param_1;
  puVar1 = (undefined8 *)operator_new(0x18);
  *(undefined4 *)(puVar1 + 2) = param_2;
  *(undefined4 *)((long)puVar1 + 0x14) = param_3;
  *puVar1 = &PTR_FUN_00d1d740;
  puVar1[1] = param_1;
  FUN_00512cf8(uVar2);
  return;
}


// ===== 0048888c  FUN_0048888c =====

void FUN_0048888c(long *param_1)

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


// ===== 004888f0  FUN_004888f0 =====

void FUN_004888f0(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  param_1 = (undefined8 *)*param_1;
  uVar2 = *param_1;
  puVar1 = (undefined8 *)operator_new(0x18);
  *(undefined4 *)(puVar1 + 2) = param_2;
  *(undefined4 *)((long)puVar1 + 0x14) = param_3;
  *puVar1 = &PTR_FUN_00d1d768;
  puVar1[1] = param_1;
  FUN_00512cf8(uVar2);
  return;
}


