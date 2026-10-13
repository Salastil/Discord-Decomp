// ===== 004147dc  FUN_004147dc =====

void FUN_004147dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1a020;
  if (-1 < *(char *)((long)param_1 + 0x27)) {
    return;
  }
  operator_delete((void *)param_1[2]);
  return;
}


// ===== 004147fc  FUN_004147fc =====

void FUN_004147fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1a020;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00414838  FUN_00414838 =====

void FUN_00414838(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar2 = *puVar6;
  plVar3 = (long *)puVar6[1];
  if (plVar3 == (long *)0x0) {
    FUN_00451418(uVar2,param_1 + 0x10);
    return;
  }
  plVar1 = plVar3 + 1;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = *plVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  FUN_00451418(uVar2,param_1 + 0x10);
  do {
    lVar7 = *plVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar7 != 0) {
    return;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
  FUN_005466cc(plVar3);
  return;
}


// ===== 004148c8  FUN_004148c8 =====

void FUN_004148c8(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xb] + 8);
  *param_1 = &PTR_FUN_00d1a048;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  if (*(code **)(param_1[4] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00414920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[4] + 8))(param_1[1]);
    return;
  }
  return;
}


// ===== 00414930  FUN_00414930 =====

void FUN_00414930(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xb] + 8);
  *param_1 = &PTR_FUN_00d1a048;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  if (*(code **)(param_1[4] + 8) != (code *)0x0) {
    (**(code **)(param_1[4] + 8))(param_1[1]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00414994  FUN_00414994 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00414994(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  char *local_50;
  undefined8 local_48;
  long lStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = FUN_005ce36c();
  local_50 = (char *)operator_new(0x30);
  uVar4 = s_clips_not_supported_in_this_buil_001c1cf1._24_8_;
  uVar3 = s_clips_not_supported_in_this_buil_001c1cf1._16_8_;
  uVar2 = s_clips_not_supported_in_this_buil_001c1cf1._8_8_;
  uVar6 = s_clips_not_supported_in_this_buil_001c1cf1._0_8_;
  lStack_40 = _UNK_001f48b8;
  local_48 = _DAT_001f48b0;
  if ((local_50 < "lips not supported in this build") &&
     ("clips not supported in this build" < local_50 + 0x21)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_50[0x20] = 'd';
  local_50[0x21] = '\0';
  pcVar7 = *(code **)(param_1 + 0x18);
  *(undefined8 *)(local_50 + 8) = uVar2;
  *(undefined8 *)local_50 = uVar6;
  *(undefined8 *)(local_50 + 0x18) = uVar4;
  *(undefined8 *)(local_50 + 0x10) = uVar3;
  (*pcVar7)(param_1 + 8,&local_50);
  if (lStack_40 < 0) {
    operator_delete(local_50);
  }
  uVar6 = FUN_005ce36c();
  (**(code **)(param_1 + 0x50))
            (param_1 + 0x40,param_1 + 0x28,*(undefined8 *)(param_1 + 0x60),uVar5,uVar6);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00414a98  FUN_00414a98 =====

void FUN_00414a98(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[4] + 8);
  *param_1 = &PTR_FUN_00d1a070;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00414ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[1]);
    return;
  }
  return;
}


// ===== 00414abc  FUN_00414abc =====

void FUN_00414abc(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[4] + 8);
  *param_1 = &PTR_FUN_00d1a070;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[1]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00414afc  FUN_00414afc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00414afc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  char *local_40;
  undefined8 local_38;
  long lStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = (char *)operator_new(0x30);
  uVar5 = s_clips_not_supported_in_this_buil_001c1cf1._24_8_;
  uVar4 = s_clips_not_supported_in_this_buil_001c1cf1._16_8_;
  uVar3 = s_clips_not_supported_in_this_buil_001c1cf1._8_8_;
  uVar2 = s_clips_not_supported_in_this_buil_001c1cf1._0_8_;
  lStack_30 = _UNK_001f48b8;
  local_38 = _DAT_001f48b0;
  if ((local_40 < "lips not supported in this build") &&
     ("clips not supported in this build" < local_40 + 0x21)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_40[0x20] = 'd';
  local_40[0x21] = '\0';
  pcVar6 = *(code **)(param_1 + 0x18);
  *(undefined8 *)(local_40 + 8) = uVar3;
  *(undefined8 *)local_40 = uVar2;
  *(undefined8 *)(local_40 + 0x18) = uVar5;
  *(undefined8 *)(local_40 + 0x10) = uVar4;
  (*pcVar6)(param_1 + 8,&local_40);
  if (lStack_30 < 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00414bd0  FUN_00414bd0 =====

void FUN_00414bd0(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xb] + 8);
  *param_1 = &PTR_FUN_00d1a098;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  if (*(code **)(param_1[4] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00414c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[4] + 8))(param_1[1]);
    return;
  }
  return;
}


// ===== 00414c38  FUN_00414c38 =====

void FUN_00414c38(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xb] + 8);
  *param_1 = &PTR_FUN_00d1a098;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  if (*(code **)(param_1[4] + 8) != (code *)0x0) {
    (**(code **)(param_1[4] + 8))(param_1[1]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00414c9c  FUN_00414c9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00414c9c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  char *local_50;
  undefined8 local_48;
  long lStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = FUN_005ce36c();
  local_50 = (char *)operator_new(0x30);
  uVar4 = s_clips_not_supported_in_this_buil_001c1cf1._24_8_;
  uVar3 = s_clips_not_supported_in_this_buil_001c1cf1._16_8_;
  uVar2 = s_clips_not_supported_in_this_buil_001c1cf1._8_8_;
  uVar6 = s_clips_not_supported_in_this_buil_001c1cf1._0_8_;
  lStack_40 = _UNK_001f48b8;
  local_48 = _DAT_001f48b0;
  if ((local_50 < "lips not supported in this build") &&
     ("clips not supported in this build" < local_50 + 0x21)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_50[0x20] = 'd';
  local_50[0x21] = '\0';
  pcVar7 = *(code **)(param_1 + 0x18);
  *(undefined8 *)(local_50 + 8) = uVar2;
  *(undefined8 *)local_50 = uVar6;
  *(undefined8 *)(local_50 + 0x18) = uVar4;
  *(undefined8 *)(local_50 + 0x10) = uVar3;
  (*pcVar7)(param_1 + 8,&local_50);
  if (lStack_40 < 0) {
    operator_delete(local_50);
  }
  uVar6 = FUN_005ce36c();
  (**(code **)(param_1 + 0x50))
            (param_1 + 0x40,param_1 + 0x28,*(undefined8 *)(param_1 + 0x60),uVar5,uVar6);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00414da0  FUN_00414da0 =====

void FUN_00414da0(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[4] + 8);
  *param_1 = &PTR_FUN_00d1a0c0;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00414dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[1]);
    return;
  }
  return;
}


// ===== 00414dc4  FUN_00414dc4 =====

void FUN_00414dc4(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[4] + 8);
  *param_1 = &PTR_FUN_00d1a0c0;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[1]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00414e04  FUN_00414e04 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00414e04(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  char *local_40;
  undefined8 local_38;
  long lStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = (char *)operator_new(0x30);
  uVar5 = s_clips_not_supported_in_this_buil_001c1cf1._24_8_;
  uVar4 = s_clips_not_supported_in_this_buil_001c1cf1._16_8_;
  uVar3 = s_clips_not_supported_in_this_buil_001c1cf1._8_8_;
  uVar2 = s_clips_not_supported_in_this_buil_001c1cf1._0_8_;
  lStack_30 = _UNK_001f48b8;
  local_38 = _DAT_001f48b0;
  if ((local_40 < "lips not supported in this build") &&
     ("clips not supported in this build" < local_40 + 0x21)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_40[0x20] = 'd';
  local_40[0x21] = '\0';
  pcVar6 = *(code **)(param_1 + 0x18);
  *(undefined8 *)(local_40 + 8) = uVar3;
  *(undefined8 *)local_40 = uVar2;
  *(undefined8 *)(local_40 + 0x18) = uVar5;
  *(undefined8 *)(local_40 + 0x10) = uVar4;
  (*pcVar6)(param_1 + 8,&local_40);
  if (lStack_30 < 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00414ed8  FUN_00414ed8 =====

void FUN_00414ed8(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xb] + 8);
  *param_1 = &PTR_FUN_00d1a0e8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  if (*(code **)(param_1[4] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00414f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[4] + 8))(param_1[1]);
    return;
  }
  return;
}


// ===== 00414f40  FUN_00414f40 =====

void FUN_00414f40(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xb] + 8);
  *param_1 = &PTR_FUN_00d1a0e8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  if (*(code **)(param_1[4] + 8) != (code *)0x0) {
    (**(code **)(param_1[4] + 8))(param_1[1]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00414fa4  FUN_00414fa4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00414fa4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  char *local_50;
  undefined8 local_48;
  long lStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = FUN_005ce36c();
  local_50 = (char *)operator_new(0x30);
  uVar4 = s_clips_not_supported_in_this_buil_001c1cf1._24_8_;
  uVar3 = s_clips_not_supported_in_this_buil_001c1cf1._16_8_;
  uVar2 = s_clips_not_supported_in_this_buil_001c1cf1._8_8_;
  uVar6 = s_clips_not_supported_in_this_buil_001c1cf1._0_8_;
  lStack_40 = _UNK_001f48b8;
  local_48 = _DAT_001f48b0;
  if ((local_50 < "lips not supported in this build") &&
     ("clips not supported in this build" < local_50 + 0x21)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_50[0x20] = 'd';
  local_50[0x21] = '\0';
  pcVar7 = *(code **)(param_1 + 0x18);
  *(undefined8 *)(local_50 + 8) = uVar2;
  *(undefined8 *)local_50 = uVar6;
  *(undefined8 *)(local_50 + 0x18) = uVar4;
  *(undefined8 *)(local_50 + 0x10) = uVar3;
  (*pcVar7)(param_1 + 8,&local_50);
  if (lStack_40 < 0) {
    operator_delete(local_50);
  }
  uVar6 = FUN_005ce36c();
  (**(code **)(param_1 + 0x50))
            (param_1 + 0x40,param_1 + 0x28,*(undefined8 *)(param_1 + 0x60),uVar5,uVar6);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004150a8  FUN_004150a8 =====

void FUN_004150a8(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[4] + 8);
  *param_1 = &PTR_FUN_00d1a110;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004150c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[1]);
    return;
  }
  return;
}


// ===== 004150cc  FUN_004150cc =====

void FUN_004150cc(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[4] + 8);
  *param_1 = &PTR_FUN_00d1a110;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[1]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0041510c  FUN_0041510c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041510c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  char *local_40;
  undefined8 local_38;
  long lStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = (char *)operator_new(0x30);
  uVar5 = s_clips_not_supported_in_this_buil_001c1cf1._24_8_;
  uVar4 = s_clips_not_supported_in_this_buil_001c1cf1._16_8_;
  uVar3 = s_clips_not_supported_in_this_buil_001c1cf1._8_8_;
  uVar2 = s_clips_not_supported_in_this_buil_001c1cf1._0_8_;
  lStack_30 = _UNK_001f48b8;
  local_38 = _DAT_001f48b0;
  if ((local_40 < "lips not supported in this build") &&
     ("clips not supported in this build" < local_40 + 0x21)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_40[0x20] = 'd';
  local_40[0x21] = '\0';
  pcVar6 = *(code **)(param_1 + 0x18);
  *(undefined8 *)(local_40 + 8) = uVar3;
  *(undefined8 *)local_40 = uVar2;
  *(undefined8 *)(local_40 + 0x18) = uVar5;
  *(undefined8 *)(local_40 + 0x10) = uVar4;
  (*pcVar6)(param_1 + 8,&local_40);
  if (lStack_30 < 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004151e0  FUN_004151e0 =====

void FUN_004151e0(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xb] + 8);
  *param_1 = &PTR_FUN_00d1a138;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  if (*(code **)(param_1[4] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00415238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[4] + 8))(param_1[1]);
    return;
  }
  return;
}


// ===== 00415248  FUN_00415248 =====

void FUN_00415248(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xb] + 8);
  *param_1 = &PTR_FUN_00d1a138;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  if (*(code **)(param_1[4] + 8) != (code *)0x0) {
    (**(code **)(param_1[4] + 8))(param_1[1]);
  }
  operator_delete(param_1);
  return;
}


// ===== 004152ac  FUN_004152ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004152ac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  char *local_50;
  undefined8 local_48;
  long lStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = FUN_005ce36c();
  local_50 = (char *)operator_new(0x30);
  uVar4 = s_clips_not_supported_in_this_buil_001c1cf1._24_8_;
  uVar3 = s_clips_not_supported_in_this_buil_001c1cf1._16_8_;
  uVar2 = s_clips_not_supported_in_this_buil_001c1cf1._8_8_;
  uVar6 = s_clips_not_supported_in_this_buil_001c1cf1._0_8_;
  lStack_40 = _UNK_001f48b8;
  local_48 = _DAT_001f48b0;
  if ((local_50 < "lips not supported in this build") &&
     ("clips not supported in this build" < local_50 + 0x21)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_50[0x20] = 'd';
  local_50[0x21] = '\0';
  pcVar7 = *(code **)(param_1 + 0x18);
  *(undefined8 *)(local_50 + 8) = uVar2;
  *(undefined8 *)local_50 = uVar6;
  *(undefined8 *)(local_50 + 0x18) = uVar4;
  *(undefined8 *)(local_50 + 0x10) = uVar3;
  (*pcVar7)(param_1 + 8,&local_50);
  if (lStack_40 < 0) {
    operator_delete(local_50);
  }
  uVar6 = FUN_005ce36c();
  (**(code **)(param_1 + 0x50))
            (param_1 + 0x40,param_1 + 0x28,*(undefined8 *)(param_1 + 0x60),uVar5,uVar6);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004153b0  FUN_004153b0 =====

void FUN_004153b0(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[4] + 8);
  *param_1 = &PTR_FUN_00d1a160;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004153cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[1]);
    return;
  }
  return;
}


// ===== 004153d4  FUN_004153d4 =====

void FUN_004153d4(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[4] + 8);
  *param_1 = &PTR_FUN_00d1a160;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[1]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00415414  FUN_00415414 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00415414(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  char *local_40;
  undefined8 local_38;
  long lStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = (char *)operator_new(0x30);
  uVar5 = s_clips_not_supported_in_this_buil_001c1cf1._24_8_;
  uVar4 = s_clips_not_supported_in_this_buil_001c1cf1._16_8_;
  uVar3 = s_clips_not_supported_in_this_buil_001c1cf1._8_8_;
  uVar2 = s_clips_not_supported_in_this_buil_001c1cf1._0_8_;
  lStack_30 = _UNK_001f48b8;
  local_38 = _DAT_001f48b0;
  if ((local_40 < "lips not supported in this build") &&
     ("clips not supported in this build" < local_40 + 0x21)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_40[0x20] = 'd';
  local_40[0x21] = '\0';
  pcVar6 = *(code **)(param_1 + 0x18);
  *(undefined8 *)(local_40 + 8) = uVar3;
  *(undefined8 *)local_40 = uVar2;
  *(undefined8 *)(local_40 + 0x18) = uVar5;
  *(undefined8 *)(local_40 + 0x10) = uVar4;
  (*pcVar6)(param_1 + 8,&local_40);
  if (lStack_30 < 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004154e8  FUN_004154e8 =====

void FUN_004154e8(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xb] + 8);
  *param_1 = &PTR_FUN_00d1a188;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  if (*(code **)(param_1[4] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00415540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[4] + 8))(param_1[1]);
    return;
  }
  return;
}


// ===== 00415550  FUN_00415550 =====

void FUN_00415550(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xb] + 8);
  *param_1 = &PTR_FUN_00d1a188;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  if (*(code **)(param_1[4] + 8) != (code *)0x0) {
    (**(code **)(param_1[4] + 8))(param_1[1]);
  }
  operator_delete(param_1);
  return;
}


// ===== 004155b4  FUN_004155b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004155b4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  char *local_50;
  undefined8 local_48;
  long lStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = FUN_005ce36c();
  local_50 = (char *)operator_new(0x30);
  uVar4 = s_clips_not_supported_in_this_buil_001c1cf1._24_8_;
  uVar3 = s_clips_not_supported_in_this_buil_001c1cf1._16_8_;
  uVar2 = s_clips_not_supported_in_this_buil_001c1cf1._8_8_;
  uVar6 = s_clips_not_supported_in_this_buil_001c1cf1._0_8_;
  lStack_40 = _UNK_001f48b8;
  local_48 = _DAT_001f48b0;
  if ((local_50 < "lips not supported in this build") &&
     ("clips not supported in this build" < local_50 + 0x21)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_50[0x20] = 'd';
  local_50[0x21] = '\0';
  pcVar7 = *(code **)(param_1 + 0x18);
  *(undefined8 *)(local_50 + 8) = uVar2;
  *(undefined8 *)local_50 = uVar6;
  *(undefined8 *)(local_50 + 0x18) = uVar4;
  *(undefined8 *)(local_50 + 0x10) = uVar3;
  (*pcVar7)(param_1 + 8,&local_50);
  if (lStack_40 < 0) {
    operator_delete(local_50);
  }
  uVar6 = FUN_005ce36c();
  (**(code **)(param_1 + 0x50))
            (param_1 + 0x40,param_1 + 0x28,*(undefined8 *)(param_1 + 0x60),uVar5,uVar6);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004156b8  FUN_004156b8 =====

void FUN_004156b8(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[4] + 8);
  *param_1 = &PTR_FUN_00d1a1b0;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004156d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[1]);
    return;
  }
  return;
}


// ===== 004156dc  FUN_004156dc =====

void FUN_004156dc(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[4] + 8);
  *param_1 = &PTR_FUN_00d1a1b0;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[1]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0041571c  FUN_0041571c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041571c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  char *local_40;
  undefined8 local_38;
  long lStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = (char *)operator_new(0x30);
  uVar5 = s_clips_not_supported_in_this_buil_001c1cf1._24_8_;
  uVar4 = s_clips_not_supported_in_this_buil_001c1cf1._16_8_;
  uVar3 = s_clips_not_supported_in_this_buil_001c1cf1._8_8_;
  uVar2 = s_clips_not_supported_in_this_buil_001c1cf1._0_8_;
  lStack_30 = _UNK_001f48b8;
  local_38 = _DAT_001f48b0;
  if ((local_40 < "lips not supported in this build") &&
     ("clips not supported in this build" < local_40 + 0x21)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_40[0x20] = 'd';
  local_40[0x21] = '\0';
  pcVar6 = *(code **)(param_1 + 0x18);
  *(undefined8 *)(local_40 + 8) = uVar3;
  *(undefined8 *)local_40 = uVar2;
  *(undefined8 *)(local_40 + 0x18) = uVar5;
  *(undefined8 *)(local_40 + 0x10) = uVar4;
  (*pcVar6)(param_1 + 8,&local_40);
  if (lStack_30 < 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004157f0  FUN_004157f0 =====

void FUN_004157f0(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xb] + 8);
  *param_1 = &PTR_FUN_00d1a1d8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  if (*(code **)(param_1[4] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00415848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[4] + 8))(param_1[1]);
    return;
  }
  return;
}


// ===== 00415858  FUN_00415858 =====

void FUN_00415858(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xb] + 8);
  *param_1 = &PTR_FUN_00d1a1d8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  if (*(code **)(param_1[4] + 8) != (code *)0x0) {
    (**(code **)(param_1[4] + 8))(param_1[1]);
  }
  operator_delete(param_1);
  return;
}


// ===== 004158bc  FUN_004158bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004158bc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  char *local_50;
  undefined8 local_48;
  long lStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = FUN_005ce36c();
  local_50 = (char *)operator_new(0x30);
  uVar4 = s_clips_not_supported_in_this_buil_001c1cf1._24_8_;
  uVar3 = s_clips_not_supported_in_this_buil_001c1cf1._16_8_;
  uVar2 = s_clips_not_supported_in_this_buil_001c1cf1._8_8_;
  uVar6 = s_clips_not_supported_in_this_buil_001c1cf1._0_8_;
  lStack_40 = _UNK_001f48b8;
  local_48 = _DAT_001f48b0;
  if ((local_50 < "lips not supported in this build") &&
     ("clips not supported in this build" < local_50 + 0x21)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_50[0x20] = 'd';
  local_50[0x21] = '\0';
  pcVar7 = *(code **)(param_1 + 0x18);
  *(undefined8 *)(local_50 + 8) = uVar2;
  *(undefined8 *)local_50 = uVar6;
  *(undefined8 *)(local_50 + 0x18) = uVar4;
  *(undefined8 *)(local_50 + 0x10) = uVar3;
  (*pcVar7)(param_1 + 8,&local_50);
  if (lStack_40 < 0) {
    operator_delete(local_50);
  }
  uVar6 = FUN_005ce36c();
  (**(code **)(param_1 + 0x50))
            (param_1 + 0x40,param_1 + 0x28,*(undefined8 *)(param_1 + 0x60),uVar5,uVar6);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004159c0  FUN_004159c0 =====

void FUN_004159c0(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[4] + 8);
  *param_1 = &PTR_FUN_00d1a200;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004159dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[1]);
    return;
  }
  return;
}


// ===== 004159e4  FUN_004159e4 =====

void FUN_004159e4(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[4] + 8);
  *param_1 = &PTR_FUN_00d1a200;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[1]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00415a24  FUN_00415a24 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00415a24(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  char *local_40;
  undefined8 local_38;
  long lStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = (char *)operator_new(0x30);
  uVar5 = s_clips_not_supported_in_this_buil_001c1cf1._24_8_;
  uVar4 = s_clips_not_supported_in_this_buil_001c1cf1._16_8_;
  uVar3 = s_clips_not_supported_in_this_buil_001c1cf1._8_8_;
  uVar2 = s_clips_not_supported_in_this_buil_001c1cf1._0_8_;
  lStack_30 = _UNK_001f48b8;
  local_38 = _DAT_001f48b0;
  if ((local_40 < "lips not supported in this build") &&
     ("clips not supported in this build" < local_40 + 0x21)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  local_40[0x20] = 'd';
  local_40[0x21] = '\0';
  pcVar6 = *(code **)(param_1 + 0x18);
  *(undefined8 *)(local_40 + 8) = uVar3;
  *(undefined8 *)local_40 = uVar2;
  *(undefined8 *)(local_40 + 0x18) = uVar5;
  *(undefined8 *)(local_40 + 0x10) = uVar4;
  (*pcVar6)(param_1 + 8,&local_40);
  if (lStack_30 < 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00415af8  FUN_00415af8 =====

void FUN_00415af8(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d1a228;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (-1 < *(char *)((long)param_1 + 0x2f)) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 00415b4c  FUN_00415b4c =====

void FUN_00415b4c(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d1a228;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00415b9c  FUN_00415b9c =====

void FUN_00415b9c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  
  uVar4 = FUN_005ce36c();
  plVar6 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar7 = *plVar6;
  plVar6 = (long *)plVar6[1];
  if (plVar6 == (long *)0x0) {
    FUN_0042f028(*(undefined8 *)(lVar7 + 0x360),*(undefined1 *)(param_1 + 0x10));
  }
  else {
    plVar1 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_0042f028(*(undefined8 *)(lVar7 + 0x360),*(undefined1 *)(param_1 + 0x10));
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  uVar5 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x00415c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x40))
            (param_1 + 0x30,param_1 + 0x18,*(undefined8 *)(param_1 + 0x50),uVar4,uVar5);
  return;
}


// ===== 00415c54  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00415c58  FUN_00415c58 =====

void FUN_00415c58(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar5 = *plVar4;
  plVar4 = (long *)plVar4[1];
  if (plVar4 == (long *)0x0) {
    FUN_0042f028(*(undefined8 *)(lVar5 + 0x360),*(undefined1 *)(param_1 + 0x10));
    return;
  }
  plVar1 = plVar4 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  FUN_0042f028(*(undefined8 *)(lVar5 + 0x360),*(undefined1 *)(param_1 + 0x10));
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
  (**(code **)(*plVar4 + 0x10))(plVar4);
  FUN_005466cc(plVar4);
  return;
}


// ===== 00415cf0  FUN_00415cf0 =====

void FUN_00415cf0(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1a278;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00415d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[5] + 8))(param_1[2]);
    return;
  }
  return;
}


// ===== 00415d58  FUN_00415d58 =====

void FUN_00415d58(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1a278;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
    (**(code **)(param_1[5] + 8))(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00415dbc  FUN_00415dbc =====

void FUN_00415dbc(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 *local_58;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  uVar6 = FUN_005ce36c();
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar7 = *puVar8;
  plVar2 = (long *)puVar8[1];
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_60 = *(undefined8 *)(param_1 + 0x20);
  local_58 = *(undefined8 **)(param_1 + 0x28);
  uStack_68 = *(undefined8 *)(param_1 + 0x18);
  local_70 = *(undefined8 *)(param_1 + 0x10);
  if ((code *)*local_58 != (code *)0x0) {
    local_70 = (*(code *)*local_58)(*(undefined8 *)(param_1 + 0x10));
  }
  FUN_0044f084(uVar7,&local_70);
  if ((code *)local_58[1] != (code *)0x0) {
    (*(code *)local_58[1])(local_70);
  }
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
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
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  uVar7 = FUN_005ce36c();
  (**(code **)(param_1 + 0x58))
            (param_1 + 0x48,param_1 + 0x30,*(undefined8 *)(param_1 + 0x68),uVar6,uVar7);
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00415ed8  FUN_00415ed8 =====

void FUN_00415ed8(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1a2a0;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00415ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[2]);
    return;
  }
  return;
}


// ===== 00415efc  FUN_00415efc =====

void FUN_00415efc(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1a2a0;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00415f3c  FUN_00415f3c =====

void FUN_00415f3c(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 *local_48;
  long local_38;
  
  lVar6 = tpidr_el0;
  local_38 = *(long *)(lVar6 + 0x28);
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar2 = *puVar7;
  plVar3 = (long *)puVar7[1];
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_50 = *(undefined8 *)(param_1 + 0x20);
  local_48 = *(undefined8 **)(param_1 + 0x28);
  uStack_58 = *(undefined8 *)(param_1 + 0x18);
  local_60 = *(undefined8 *)(param_1 + 0x10);
  if ((code *)*local_48 != (code *)0x0) {
    local_60 = (*(code *)*local_48)(*(undefined8 *)(param_1 + 0x10));
  }
  FUN_0044f084(uVar2,&local_60);
  if ((code *)local_48[1] != (code *)0x0) {
    (*(code *)local_48[1])(local_60);
  }
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
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
  if (*(long *)(lVar6 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00416024  FUN_00416024 =====

void FUN_00416024(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1a2c8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041607c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[5] + 8))(param_1[2]);
    return;
  }
  return;
}


// ===== 0041608c  FUN_0041608c =====

void FUN_0041608c(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1a2c8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
    (**(code **)(param_1[5] + 8))(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 004160f0  FUN_004160f0 =====

void FUN_004160f0(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 *local_58;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  uVar6 = FUN_005ce36c();
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar7 = *puVar8;
  plVar2 = (long *)puVar8[1];
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_60 = *(undefined8 *)(param_1 + 0x20);
  local_58 = *(undefined8 **)(param_1 + 0x28);
  uStack_68 = *(undefined8 *)(param_1 + 0x18);
  local_70 = *(undefined8 *)(param_1 + 0x10);
  if ((code *)*local_58 != (code *)0x0) {
    local_70 = (*(code *)*local_58)(*(undefined8 *)(param_1 + 0x10));
  }
  FUN_0044f088(uVar7,&local_70);
  if ((code *)local_58[1] != (code *)0x0) {
    (*(code *)local_58[1])(local_70);
  }
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
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
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  uVar7 = FUN_005ce36c();
  (**(code **)(param_1 + 0x58))
            (param_1 + 0x48,param_1 + 0x30,*(undefined8 *)(param_1 + 0x68),uVar6,uVar7);
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0041620c  FUN_0041620c =====

void FUN_0041620c(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1a2f0;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00416228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[2]);
    return;
  }
  return;
}


// ===== 00416230  FUN_00416230 =====

void FUN_00416230(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1a2f0;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00416270  FUN_00416270 =====

void FUN_00416270(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 *local_48;
  long local_38;
  
  lVar6 = tpidr_el0;
  local_38 = *(long *)(lVar6 + 0x28);
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar2 = *puVar7;
  plVar3 = (long *)puVar7[1];
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_50 = *(undefined8 *)(param_1 + 0x20);
  local_48 = *(undefined8 **)(param_1 + 0x28);
  uStack_58 = *(undefined8 *)(param_1 + 0x18);
  local_60 = *(undefined8 *)(param_1 + 0x10);
  if ((code *)*local_48 != (code *)0x0) {
    local_60 = (*(code *)*local_48)(*(undefined8 *)(param_1 + 0x10));
  }
  FUN_0044f088(uVar2,&local_60);
  if ((code *)local_48[1] != (code *)0x0) {
    (*(code *)local_48[1])(local_60);
  }
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
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
  if (*(long *)(lVar6 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00416358  FUN_00416358 =====

void FUN_00416358(undefined8 *param_1)

{
  char cVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1[0xb] + 8);
  *param_1 = &PTR_FUN_00d1a318;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  if (-1 < cVar1) {
    return;
  }
  operator_delete((void *)param_1[2]);
  return;
}


// ===== 004163c4  FUN_004163c4 =====

void FUN_004163c4(undefined8 *param_1)

{
  char cVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1[0xb] + 8);
  *param_1 = &PTR_FUN_00d1a318;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00416430  FUN_00416430 =====

void FUN_00416430(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_005ce36c();
  FUN_00416488(param_1 + 8);
  uVar2 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x00416484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x50))
            (param_1 + 0x40,param_1 + 0x28,*(undefined8 *)(param_1 + 0x60),uVar1,uVar2);
  return;
}


// ===== 00416488  FUN_00416488 =====

void FUN_00416488(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 *__src;
  long *plVar4;
  ulong uVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined1 **__dest;
  long lVar9;
  undefined1 *local_60;
  ulong uStack_58;
  undefined8 local_50;
  long local_48;
  
  __dest = &local_60;
  lVar8 = tpidr_el0;
  local_48 = *(long *)(lVar8 + 0x28);
  uVar3 = **(undefined8 **)(*param_1 + 0x18);
  plVar4 = (long *)(*(undefined8 **)(*param_1 + 0x18))[1];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __src = (undefined1 *)param_1[1];
    uVar5 = param_1[2];
    if (uVar5 < 0x17) {
      local_50 = CONCAT17((char)uVar5,(undefined7)local_50);
    }
    else {
      if (0x7fffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar2 = (uVar5 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar2);
      local_50 = uVar2 | 0x8000000000000000;
      local_60 = (undefined1 *)__dest;
      uStack_58 = uVar5;
    }
    if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar5 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar5 + 1);
  }
  else {
    uStack_58 = param_1[2];
    local_60 = (undefined1 *)param_1[1];
    local_50 = param_1[3];
  }
  FUN_0044f0f0(uVar3,&local_60);
  if ((long)local_50 < 0) {
    operator_delete(local_60);
  }
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar9 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_005466cc(plVar4);
    }
  }
  if (*(long *)(lVar8 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004165f8  FUN_004165f8 =====

void FUN_004165f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1a340;
  if (-1 < *(char *)((long)param_1 + 0x27)) {
    return;
  }
  operator_delete((void *)param_1[2]);
  return;
}


// ===== 00416618  FUN_00416618 =====

void FUN_00416618(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1a340;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00416654  FUN_00416654 =====

void FUN_00416654(long param_1)

{
  FUN_00416488(param_1 + 8);
  return;
}


// ===== 0041665c  FUN_0041665c =====

void FUN_0041665c(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d1a368;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (-1 < *(char *)((long)param_1 + 0x2f)) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 004166b0  FUN_004166b0 =====

void FUN_004166b0(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d1a368;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00416700  FUN_00416700 =====

void FUN_00416700(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  
  uVar5 = FUN_005ce36c();
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar6 = *puVar7;
  plVar2 = (long *)puVar7[1];
  if (plVar2 == (long *)0x0) {
    FUN_0044f0f4(*(undefined4 *)(param_1 + 0x10),uVar6);
  }
  else {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_0044f0f4(*(undefined4 *)(param_1 + 0x10),uVar6);
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  uVar6 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x004167ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x40))
            (param_1 + 0x30,param_1 + 0x18,*(undefined8 *)(param_1 + 0x50),uVar5,uVar6);
  return;
}


// ===== 004167b0  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 004167b4  FUN_004167b4 =====

void FUN_004167b4(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar2 = *puVar6;
  plVar3 = (long *)puVar6[1];
  if (plVar3 == (long *)0x0) {
    FUN_0044f0f4(*(undefined4 *)(param_1 + 0x10),uVar2);
    return;
  }
  plVar1 = plVar3 + 1;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = *plVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  FUN_0044f0f4(*(undefined4 *)(param_1 + 0x10),uVar2);
  do {
    lVar7 = *plVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar7 != 0) {
    return;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
  FUN_005466cc(plVar3);
  return;
}


// ===== 00416844  FUN_00416844 =====

void FUN_00416844(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d1a3b8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (-1 < *(char *)((long)param_1 + 0x2f)) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 00416898  FUN_00416898 =====

void FUN_00416898(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d1a3b8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 004168e8  FUN_004168e8 =====

void FUN_004168e8(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  
  uVar5 = FUN_005ce36c();
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar6 = *puVar7;
  plVar2 = (long *)puVar7[1];
  if (plVar2 == (long *)0x0) {
    FUN_0044f1b0(*(undefined4 *)(param_1 + 0x10),uVar6);
  }
  else {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_0044f1b0(*(undefined4 *)(param_1 + 0x10),uVar6);
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  uVar6 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x00416994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x40))
            (param_1 + 0x30,param_1 + 0x18,*(undefined8 *)(param_1 + 0x50),uVar5,uVar6);
  return;
}


// ===== 00416998  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0041699c  FUN_0041699c =====

void FUN_0041699c(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar2 = *puVar6;
  plVar3 = (long *)puVar6[1];
  if (plVar3 == (long *)0x0) {
    FUN_0044f1b0(*(undefined4 *)(param_1 + 0x10),uVar2);
    return;
  }
  plVar1 = plVar3 + 1;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = *plVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  FUN_0044f1b0(*(undefined4 *)(param_1 + 0x10),uVar2);
  do {
    lVar7 = *plVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar7 != 0) {
    return;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
  FUN_005466cc(plVar3);
  return;
}


// ===== 00416a2c  FUN_00416a2c =====

void FUN_00416a2c(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d1a408;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (-1 < *(char *)((long)param_1 + 0x2f)) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 00416a80  FUN_00416a80 =====

void FUN_00416a80(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d1a408;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00416ad0  FUN_00416ad0 =====

void FUN_00416ad0(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  
  uVar5 = FUN_005ce36c();
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar6 = *puVar7;
  plVar2 = (long *)puVar7[1];
  if (plVar2 == (long *)0x0) {
    FUN_00450e44(*(undefined4 *)(param_1 + 0x10),uVar6);
  }
  else {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_00450e44(*(undefined4 *)(param_1 + 0x10),uVar6);
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  uVar6 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x00416b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x40))
            (param_1 + 0x30,param_1 + 0x18,*(undefined8 *)(param_1 + 0x50),uVar5,uVar6);
  return;
}


// ===== 00416b80  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00416b84  FUN_00416b84 =====

void FUN_00416b84(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar2 = *puVar6;
  plVar3 = (long *)puVar6[1];
  if (plVar3 == (long *)0x0) {
    FUN_00450e44(*(undefined4 *)(param_1 + 0x10),uVar2);
    return;
  }
  plVar1 = plVar3 + 1;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = *plVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  FUN_00450e44(*(undefined4 *)(param_1 + 0x10),uVar2);
  do {
    lVar7 = *plVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar7 != 0) {
    return;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
  FUN_005466cc(plVar3);
  return;
}


// ===== 00416c14  FUN_00416c14 =====

void FUN_00416c14(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d1a458;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (-1 < *(char *)((long)param_1 + 0x2f)) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 00416c68  FUN_00416c68 =====

void FUN_00416c68(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d1a458;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00416cb8  FUN_00416cb8 =====

void FUN_00416cb8(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  
  uVar5 = FUN_005ce36c();
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar6 = *puVar7;
  plVar2 = (long *)puVar7[1];
  if (plVar2 == (long *)0x0) {
    FUN_00450e50(uVar6,*(undefined4 *)(param_1 + 0x10));
  }
  else {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_00450e50(uVar6,*(undefined4 *)(param_1 + 0x10));
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  uVar6 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x00416d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x40))
            (param_1 + 0x30,param_1 + 0x18,*(undefined8 *)(param_1 + 0x50),uVar5,uVar6);
  return;
}


// ===== 00416d68  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00416d6c  FUN_00416d6c =====

void FUN_00416d6c(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar2 = *puVar6;
  plVar3 = (long *)puVar6[1];
  if (plVar3 == (long *)0x0) {
    FUN_00450e50(uVar2,*(undefined4 *)(param_1 + 0x10));
    return;
  }
  plVar1 = plVar3 + 1;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = *plVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  FUN_00450e50(uVar2,*(undefined4 *)(param_1 + 0x10));
  do {
    lVar7 = *plVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar7 != 0) {
    return;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
  FUN_005466cc(plVar3);
  return;
}


// ===== 00416dfc  FUN_00416dfc =====

void FUN_00416dfc(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d1a4a8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (-1 < *(char *)((long)param_1 + 0x2f)) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 00416e50  FUN_00416e50 =====

void FUN_00416e50(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d1a4a8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00416ea0  FUN_00416ea0 =====

void FUN_00416ea0(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  
  uVar5 = FUN_005ce36c();
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar6 = *puVar7;
  plVar2 = (long *)puVar7[1];
  if (plVar2 == (long *)0x0) {
    FUN_00450e5c(uVar6,*(undefined4 *)(param_1 + 0x10));
  }
  else {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_00450e5c(uVar6,*(undefined4 *)(param_1 + 0x10));
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  uVar6 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x00416f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x40))
            (param_1 + 0x30,param_1 + 0x18,*(undefined8 *)(param_1 + 0x50),uVar5,uVar6);
  return;
}


// ===== 00416f50  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00416f54  FUN_00416f54 =====

void FUN_00416f54(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar2 = *puVar6;
  plVar3 = (long *)puVar6[1];
  if (plVar3 == (long *)0x0) {
    FUN_00450e5c(uVar2,*(undefined4 *)(param_1 + 0x10));
    return;
  }
  plVar1 = plVar3 + 1;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = *plVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  FUN_00450e5c(uVar2,*(undefined4 *)(param_1 + 0x10));
  do {
    lVar7 = *plVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar7 != 0) {
    return;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
  FUN_005466cc(plVar3);
  return;
}


// ===== 00416fe4  FUN_00416fe4 =====

void FUN_00416fe4(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1a4f8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041703c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[5] + 8))(param_1[2]);
    return;
  }
  return;
}


// ===== 0041704c  FUN_0041704c =====

void FUN_0041704c(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1a4f8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
    (**(code **)(param_1[5] + 8))(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 004170b0  FUN_004170b0 =====

void FUN_004170b0(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 *local_58;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  uVar6 = FUN_005ce36c();
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar7 = *puVar8;
  plVar2 = (long *)puVar8[1];
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_60 = *(undefined8 *)(param_1 + 0x20);
  local_58 = *(undefined8 **)(param_1 + 0x28);
  uStack_68 = *(undefined8 *)(param_1 + 0x18);
  local_70 = *(undefined8 *)(param_1 + 0x10);
  if ((code *)*local_58 != (code *)0x0) {
    local_70 = (*(code *)*local_58)(*(undefined8 *)(param_1 + 0x10));
  }
  FUN_00450cc8(uVar7,&local_70);
  if ((code *)local_58[1] != (code *)0x0) {
    (*(code *)local_58[1])(local_70);
  }
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
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
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  uVar7 = FUN_005ce36c();
  (**(code **)(param_1 + 0x58))
            (param_1 + 0x48,param_1 + 0x30,*(undefined8 *)(param_1 + 0x68),uVar6,uVar7);
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004171cc  FUN_004171cc =====

void FUN_004171cc(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1a520;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004171e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[2]);
    return;
  }
  return;
}


// ===== 004171f0  FUN_004171f0 =====

void FUN_004171f0(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1a520;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00417230  FUN_00417230 =====

void FUN_00417230(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 *local_48;
  long local_38;
  
  lVar6 = tpidr_el0;
  local_38 = *(long *)(lVar6 + 0x28);
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar2 = *puVar7;
  plVar3 = (long *)puVar7[1];
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_50 = *(undefined8 *)(param_1 + 0x20);
  local_48 = *(undefined8 **)(param_1 + 0x28);
  uStack_58 = *(undefined8 *)(param_1 + 0x18);
  local_60 = *(undefined8 *)(param_1 + 0x10);
  if ((code *)*local_48 != (code *)0x0) {
    local_60 = (*(code *)*local_48)(*(undefined8 *)(param_1 + 0x10));
  }
  FUN_00450cc8(uVar2,&local_60);
  if ((code *)local_48[1] != (code *)0x0) {
    (*(code *)local_48[1])(local_60);
  }
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
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
  if (*(long *)(lVar6 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00417318  FUN_00417318 =====

void FUN_00417318(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1a548;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00417370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[5] + 8))(param_1[2]);
    return;
  }
  return;
}


// ===== 00417380  FUN_00417380 =====

void FUN_00417380(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1a548;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
    (**(code **)(param_1[5] + 8))(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 004173e4  FUN_004173e4 =====

void FUN_004173e4(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  
  uVar5 = FUN_005ce36c();
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar6 = *puVar7;
  plVar2 = (long *)puVar7[1];
  if (plVar2 == (long *)0x0) {
    FUN_0044fc7c(uVar6,param_1 + 0x10);
  }
  else {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_0044fc7c(uVar6,param_1 + 0x10);
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  uVar6 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x00417490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x58))
            (param_1 + 0x48,param_1 + 0x30,*(undefined8 *)(param_1 + 0x68),uVar5,uVar6);
  return;
}


// ===== 00417494  FUN_00417494 =====

void FUN_00417494(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1a570;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004174b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[2]);
    return;
  }
  return;
}


// ===== 004174b8  FUN_004174b8 =====

void FUN_004174b8(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1a570;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 004174f8  FUN_004174f8 =====

void FUN_004174f8(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar2 = *puVar6;
  plVar3 = (long *)puVar6[1];
  if (plVar3 == (long *)0x0) {
    FUN_0044fc7c(uVar2,param_1 + 0x10);
    return;
  }
  plVar1 = plVar3 + 1;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = *plVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  FUN_0044fc7c(uVar2,param_1 + 0x10);
  do {
    lVar7 = *plVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar7 != 0) {
    return;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
  FUN_005466cc(plVar3);
  return;
}


// ===== 00417588  FUN_00417588 =====

void FUN_00417588(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d1a598;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (-1 < *(char *)((long)param_1 + 0x2f)) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 004175dc  FUN_004175dc =====

void FUN_004175dc(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d1a598;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0041762c  FUN_0041762c =====

void FUN_0041762c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  
  uVar4 = FUN_005ce36c();
  plVar6 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar7 = *plVar6;
  plVar6 = (long *)plVar6[1];
  if (plVar6 == (long *)0x0) {
    FUN_004a2260(*(undefined8 *)(lVar7 + 0x450),*(undefined1 *)(param_1 + 0x10));
  }
  else {
    plVar1 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_004a2260(*(undefined8 *)(lVar7 + 0x450),*(undefined1 *)(param_1 + 0x10));
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  uVar5 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x004176e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x40))
            (param_1 + 0x30,param_1 + 0x18,*(undefined8 *)(param_1 + 0x50),uVar4,uVar5);
  return;
}


// ===== 004176e4  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 004176e8  FUN_004176e8 =====

void FUN_004176e8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar5 = *plVar4;
  plVar4 = (long *)plVar4[1];
  if (plVar4 == (long *)0x0) {
    FUN_004a2260(*(undefined8 *)(lVar5 + 0x450),*(undefined1 *)(param_1 + 0x10));
    return;
  }
  plVar1 = plVar4 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  FUN_004a2260(*(undefined8 *)(lVar5 + 0x450),*(undefined1 *)(param_1 + 0x10));
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
  (**(code **)(*plVar4 + 0x10))(plVar4);
  FUN_005466cc(plVar4);
  return;
}


// ===== 00417780  FUN_00417780 =====

void FUN_00417780(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 0041778c  FUN_0041778c =====

void FUN_0041778c(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1a5e8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004177e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[5] + 8))(param_1[2]);
    return;
  }
  return;
}


// ===== 004177f4  FUN_004177f4 =====

void FUN_004177f4(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1a5e8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
    (**(code **)(param_1[5] + 8))(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00417858  FUN_00417858 =====

void FUN_00417858(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  void *local_60 [2];
  char local_49;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  uVar6 = FUN_005ce36c();
  if (*(char *)(*(long *)(param_1 + 0x28) + 0x10) == '\0') {
    puVar8 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
    uVar7 = *puVar8;
    plVar2 = (long *)puVar8[1];
    if (plVar2 == (long *)0x0) {
      FUN_004524bc(local_60,uVar7);
    }
    else {
      plVar1 = plVar2 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      FUN_004524bc(local_60,uVar7);
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
        (**(code **)(*plVar2 + 0x10))(plVar2);
        FUN_005466cc(plVar2);
      }
    }
    (**(code **)(param_1 + 0x20))(param_1 + 0x10,local_60);
    if (local_49 < '\0') {
      operator_delete(local_60[0]);
    }
  }
  uVar7 = FUN_005ce36c();
  (**(code **)(param_1 + 0x58))
            (param_1 + 0x48,param_1 + 0x30,*(undefined8 *)(param_1 + 0x68),uVar6,uVar7);
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00417968  FUN_00417968 =====

void FUN_00417968(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1a610;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00417984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[2]);
    return;
  }
  return;
}


// ===== 0041798c  FUN_0041798c =====

void FUN_0041798c(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1a610;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 004179cc  FUN_004179cc =====

void FUN_004179cc(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  void *local_60 [2];
  char local_49;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  if (*(char *)(*(long *)(param_1 + 0x28) + 0x10) == '\0') {
    puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
    uVar2 = *puVar7;
    plVar3 = (long *)puVar7[1];
    if (plVar3 == (long *)0x0) {
      FUN_004524bc(local_60,uVar2);
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
      FUN_004524bc(local_60,uVar2);
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
    (**(code **)(param_1 + 0x20))(param_1 + 0x10,local_60);
    if (local_49 < '\0') {
      operator_delete(local_60[0]);
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00417ab4  FUN_00417ab4 =====

void FUN_00417ab4(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1a638;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00417b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[5] + 8))(param_1[2]);
    return;
  }
  return;
}


// ===== 00417b1c  FUN_00417b1c =====

void FUN_00417b1c(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1a638;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
    (**(code **)(param_1[5] + 8))(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00417b80  FUN_00417b80 =====

void FUN_00417b80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_005ce36c();
  FUN_00417bd8(param_1 + 8);
  uVar2 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x00417bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x58))
            (param_1 + 0x48,param_1 + 0x30,*(undefined8 *)(param_1 + 0x68),uVar1,uVar2);
  return;
}


// ===== 00417bd8  FUN_00417bd8 =====

void FUN_00417bd8(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long *local_68 [2];
  code *local_58;
  undefined **local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  puVar8 = (undefined8 *)param_1[4];
  if (*(char *)(puVar8 + 2) == '\0') {
    uVar2 = **(undefined8 **)(*param_1 + 0x18);
    plVar3 = (long *)(*(undefined8 **)(*param_1 + 0x18))[1];
    if (plVar3 != (long *)0x0) {
      plVar1 = plVar3 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      puVar8 = (undefined8 *)param_1[4];
    }
    lVar7 = param_1[1];
    lVar10 = param_1[3];
    lVar9 = param_1[2];
    if ((code *)*puVar8 != (code *)0x0) {
      lVar7 = (*(code *)*puVar8)(lVar7);
    }
    local_58 = FUN_00417d28;
    local_50 = &PTR_FUN_00d1a650;
    local_68[0] = (long *)operator_new(0x20);
    *local_68[0] = lVar7;
    local_68[0][3] = (long)puVar8;
    local_68[0][2] = lVar10;
    local_68[0][1] = lVar9;
    if (puVar8[1] != 0) {
      puVar8 = &DAT_001f1910;
    }
    FUN_00452f0c(uVar2,local_68);
    if ((code *)local_50[1] != (code *)0x0) {
      (*(code *)local_50[1])(local_68[0]);
    }
    if ((code *)puVar8[1] != (code *)0x0) {
      (*(code *)puVar8[1])(lVar7);
    }
    if (plVar3 != (long *)0x0) {
      plVar1 = plVar3 + 1;
      do {
        lVar7 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        FUN_005466cc(plVar3);
      }
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00417d28  FUN_00417d28 =====

/* WARNING: Removing unreachable block (ram,0x00417dcc) */

void FUN_00417d28(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  void *local_90 [2];
  char local_79;
  undefined1 auStack_78 [40];
  undefined **local_50 [5];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar3 = *param_1;
  FUN_004df808(auStack_78);
  FUN_004e36c8(local_50);
  FUN_004e36e0(local_90,local_50,auStack_78);
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e90,"../../discord_native_lib/src/discord.cpp",0x1c09,
                 "obtained codec survey: ",local_90);
  }
  (**(code **)(lVar3 + 0x10))(lVar3,local_90);
  if (local_79 < '\0') {
    operator_delete(local_90[0]);
  }
  local_50[0] = &PTR_FUN_00d1f540;
  FUN_004e36c0(local_50);
  FUN_004df880(auStack_78);
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00417e08  FUN_00417e08 =====

void FUN_00417e08(void)

{
  FUN_00623b7c(1);
  return;
}


// ===== 00417e10  FUN_00417e10 =====

undefined8 * FUN_00417e10(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  uVar3 = param_1[2];
  puVar1 = (undefined8 *)param_1[3];
  uVar5 = *param_1;
  pcVar4 = (code *)*puVar1;
  puVar2[1] = param_1[1];
  *puVar2 = uVar5;
  puVar2[2] = uVar3;
  puVar2[3] = puVar1;
  if (pcVar4 != (code *)0x0) {
    uVar3 = (*pcVar4)(*param_1);
    *puVar2 = uVar3;
  }
  return puVar2;
}


// ===== 00417e60  FUN_00417e60 =====

void FUN_00417e60(undefined8 *param_1)

{
  if (*(code **)(param_1[3] + 8) != (code *)0x0) {
    (**(code **)(param_1[3] + 8))(*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00417e94  FUN_00417e94 =====

void FUN_00417e94(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1a680;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00417eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[2]);
    return;
  }
  return;
}


// ===== 00417eb8  FUN_00417eb8 =====

void FUN_00417eb8(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1a680;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00417ef8  FUN_00417ef8 =====

void FUN_00417ef8(long param_1)

{
  FUN_00417bd8(param_1 + 8);
  return;
}


// ===== 00417f00  FUN_00417f00 =====

void FUN_00417f00(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xb] + 8);
  *param_1 = &PTR_FUN_00d1a6a8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[8]);
  }
  if (-1 < *(char *)((long)param_1 + 0x3f)) {
    return;
  }
  operator_delete((void *)param_1[5]);
  return;
}


// ===== 00417f54  FUN_00417f54 =====

void FUN_00417f54(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xb] + 8);
  *param_1 = &PTR_FUN_00d1a6a8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00417fa4  FUN_00417fa4 =====

void FUN_00417fa4(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  uVar6 = FUN_005ce36c();
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar7 = *puVar8;
  plVar2 = (long *)puVar8[1];
  if (plVar2 == (long *)0x0) {
    uStack_58 = *(undefined8 *)(param_1 + 0x18);
    local_60 = *(undefined8 *)(param_1 + 0x10);
    local_50 = *(undefined4 *)(param_1 + 0x20);
    FUN_00450bdc(uVar7,&local_60);
  }
  else {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uStack_58 = *(undefined8 *)(param_1 + 0x18);
    local_60 = *(undefined8 *)(param_1 + 0x10);
    local_50 = *(undefined4 *)(param_1 + 0x20);
    FUN_00450bdc(uVar7,&local_60);
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
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  uVar7 = FUN_005ce36c();
  (**(code **)(param_1 + 0x50))
            (param_1 + 0x40,param_1 + 0x28,*(undefined8 *)(param_1 + 0x60),uVar6,uVar7);
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004180a4  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 004180a8  FUN_004180a8 =====

void FUN_004180a8(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar6 = tpidr_el0;
  local_38 = *(long *)(lVar6 + 0x28);
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar2 = *puVar8;
  plVar3 = (long *)puVar8[1];
  if (plVar3 == (long *)0x0) {
    uStack_48 = *(undefined8 *)(param_1 + 0x18);
    local_50 = *(undefined8 *)(param_1 + 0x10);
    local_40 = *(undefined4 *)(param_1 + 0x20);
    FUN_00450bdc(uVar2,&local_50);
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
    uStack_48 = *(undefined8 *)(param_1 + 0x18);
    local_50 = *(undefined8 *)(param_1 + 0x10);
    local_40 = *(undefined4 *)(param_1 + 0x20);
    FUN_00450bdc(uVar2,&local_50);
    do {
      lVar7 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_005466cc(plVar3);
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00418178  FUN_00418178 =====

void FUN_00418178(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1a6f8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004181d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[5] + 8))(param_1[2]);
    return;
  }
  return;
}


// ===== 004181e0  FUN_004181e0 =====

void FUN_004181e0(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1a6f8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
    (**(code **)(param_1[5] + 8))(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00418244  FUN_00418244 =====

void FUN_00418244(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_005ce36c();
  FUN_004182a8(param_1 + 8);
  uVar2 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x00418298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x58))
            (param_1 + 0x48,param_1 + 0x30,*(undefined8 *)(param_1 + 0x68),uVar1,uVar2);
  return;
}


// ===== 0041829c  FUN_0041829c =====

void FUN_0041829c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 004182a8  FUN_004182a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004182a8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined2 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  char local_80 [8];
  undefined2 uStack_78;
  uint uStack_76;
  char cStack_72;
  char cStack_71;
  undefined8 uStack_70;
  void *local_60 [2];
  char local_49;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  lVar15 = *param_1;
  puVar12 = *(undefined8 **)(lVar15 + 0x18);
  uVar16 = *puVar12;
  plVar2 = (long *)puVar12[1];
  if (plVar2 == (long *)0x0) {
    uVar10 = FUN_0044f078(uVar16);
  }
  else {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar10 = FUN_0044f078(uVar16);
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
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  FUN_00486064(local_60,uVar10);
  puVar12 = *(undefined8 **)(lVar15 + 0x18);
  uVar16 = *puVar12;
  plVar2 = (long *)puVar12[1];
  if (plVar2 == (long *)0x0) {
    uVar10 = FUN_00450b1c(uVar16);
  }
  else {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar10 = FUN_00450b1c(uVar16);
    do {
      lVar15 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  switch(uVar10) {
  case 0:
    pcVar11 = "platformDefaultAudio";
    goto LAB_00418590;
  case 1:
    pcVar11 = "windowsCoreAudio";
    goto LAB_00418614;
  case 2:
    uStack_70 = CONCAT17(0x11,(undefined7)uStack_70);
    if ((local_80 < "indowsCoreAudio2") && ("windowsCoreAudio2" < (char *)((long)&uStack_70 + 1U)))
    goto LAB_004186b0;
    uVar14 = 0x32;
    uVar16 = s_windowsCoreAudio2_0019ca21._0_8_;
    uVar17 = s_windowsCoreAudio2_0019ca21._8_8_;
    goto LAB_004185fc;
  case 3:
    uStack_70 = CONCAT17(0xe,(undefined7)uStack_70);
    if ((local_80 < "inuxAlsaAudio") && ("linuxAlsaAudio" < (char *)((ulong)local_80 | 0xe)))
    goto LAB_004186b0;
    cStack_72 = '\0';
    local_80[0] = s_linuxAlsaAudio_001bee4b[0];
    local_80[1] = s_linuxAlsaAudio_001bee4b[1];
    local_80[2] = s_linuxAlsaAudio_001bee4b[2];
    local_80[3] = s_linuxAlsaAudio_001bee4b[3];
    local_80[4] = s_linuxAlsaAudio_001bee4b[4];
    local_80[5] = s_linuxAlsaAudio_001bee4b[5];
    local_80[6] = (char)s_linuxAlsaAudio_001bee4b._6_2_;
    local_80[7] = SUB21(s_linuxAlsaAudio_001bee4b._6_2_,1);
    uStack_78 = (undefined2)s_linuxAlsaAudio_001bee4b._8_6_;
    uStack_76 = SUB64(s_linuxAlsaAudio_001bee4b._8_6_,2);
    break;
  case 4:
    uStack_70 = CONCAT17(0xf,(undefined7)uStack_70);
    if ((local_80 < "inuxPulseAudio") && ("linuxPulseAudio" < (char *)((ulong)local_80 | 0xf)))
    goto LAB_004186b0;
    cStack_71 = '\0';
    local_80._0_6_ = (undefined6)s_linuxPulseAudio_0019ca33._0_7_;
    local_80[6] = SUB71(s_linuxPulseAudio_0019ca33._0_7_,6);
    local_80[7] = s_linuxPulseAudio_0019ca33[7];
    uStack_78 = (undefined2)s_linuxPulseAudio_0019ca33._8_7_;
    uStack_76 = SUB74(s_linuxPulseAudio_0019ca33._8_7_,2);
    cStack_72 = SUB71(s_linuxPulseAudio_0019ca33._8_7_,6);
    break;
  case 5:
    pcVar11 = "androidJavaAudio";
    goto LAB_00418614;
  case 6:
    pcVar11 = "androidOpenSLESAudio";
LAB_00418590:
    uStack_70 = CONCAT17(0x14,(undefined7)uStack_70);
    if ((pcVar11 < local_80) || ((char *)((long)&uStack_70 + 4) <= pcVar11)) {
      uVar17 = *(undefined8 *)(pcVar11 + 8);
      uVar16 = *(undefined8 *)pcVar11;
      uVar8 = uStack_70 >> 0x20;
      uStack_78 = (undefined2)uVar17;
      uStack_76 = (uint)((ulong)uVar17 >> 0x10);
      cStack_72 = (char)((ulong)uVar17 >> 0x30);
      cStack_71 = (char)((ulong)uVar17 >> 0x38);
      local_80._0_6_ = (undefined6)uVar16;
      local_80[6] = (char)((ulong)uVar16 >> 0x30);
      local_80[7] = (char)((ulong)uVar16 >> 0x38);
      uStack_70 = CONCAT44((uint)uVar8 & 0xffffff00,0x6f696475);
      break;
    }
    goto LAB_004186b0;
  case 7:
    pcVar11 = (char *)operator_new(0x30);
    uVar9 = s_androidJavaInputAndOpenSLESOutpu_001bee5a._16_8_;
    uVar17 = s_androidJavaInputAndOpenSLESOutpu_001bee5a._8_8_;
    uVar16 = s_androidJavaInputAndOpenSLESOutpu_001bee5a._0_8_;
    local_80._0_6_ = SUB86(pcVar11,0);
    local_80[6] = (char)((ulong)pcVar11 >> 0x30);
    local_80[7] = (char)((ulong)pcVar11 >> 0x38);
    uStack_70 = _UNK_001f4ab8;
    uStack_78 = (undefined2)_DAT_001f4ab0;
    uStack_76 = (uint)((ulong)_DAT_001f4ab0 >> 0x10);
    cStack_72 = (char)((ulong)_DAT_001f4ab0 >> 0x30);
    cStack_71 = (char)((ulong)_DAT_001f4ab0 >> 0x38);
    if ((pcVar11 < "ndroidJavaInputAndOpenSLESOutputAudio") &&
       ("androidJavaInputAndOpenSLESOutputAudio" < pcVar11 + 0x26)) goto LAB_004186b0;
    uVar6 = CONCAT26(s_androidJavaInputAndOpenSLESOutpu_001bee5a._30_2_,
                     s_androidJavaInputAndOpenSLESOutpu_001bee5a._24_6_);
    pcVar11[0x26] = '\0';
    uVar7 = CONCAT62(s_androidJavaInputAndOpenSLESOutpu_001bee5a._32_6_,
                     s_androidJavaInputAndOpenSLESOutpu_001bee5a._30_2_);
    *(undefined8 *)(pcVar11 + 8) = uVar17;
    *(undefined8 *)pcVar11 = uVar16;
    *(undefined8 *)(pcVar11 + 0x18) = uVar6;
    *(undefined8 *)(pcVar11 + 0x10) = uVar9;
    *(undefined8 *)(pcVar11 + 0x1e) = uVar7;
    break;
  case 8:
    uStack_70 = CONCAT17(0x12,(undefined7)uStack_70);
    if ((local_80 < "ndroidAAudioAudio") && ("androidAAudioAudio" < (char *)((long)&uStack_70 + 2U))
       ) goto LAB_004186b0;
    uVar14 = 0x6f69;
    uStack_70 = uStack_70 & 0xffffffffff000000;
    uVar16 = s_androidAAudioAudio_001a5b6c._0_8_;
    uVar17 = s_androidAAudioAudio_001a5b6c._8_8_;
LAB_004185fc:
    uStack_70 = CONCAT62(uStack_70._2_6_,uVar14);
    uStack_78 = (undefined2)uVar17;
    uStack_76 = SUB84(uVar17,2);
    cStack_72 = SUB81(uVar17,6);
    cStack_71 = SUB81(uVar17,7);
    local_80._0_6_ = (undefined6)uVar16;
    local_80[6] = SUB81(uVar16,6);
    local_80[7] = SUB81(uVar16,7);
    break;
  case 9:
    pcVar11 = (char *)operator_new(0x30);
    uVar6 = s_androidJavaInputAndAAudioOutputA_001ca4c4._24_8_;
    uVar9 = s_androidJavaInputAndAAudioOutputA_001ca4c4._16_8_;
    uVar17 = s_androidJavaInputAndAAudioOutputA_001ca4c4._8_8_;
    uVar16 = s_androidJavaInputAndAAudioOutputA_001ca4c4._0_8_;
    local_80._0_6_ = SUB86(pcVar11,0);
    local_80[6] = (char)((ulong)pcVar11 >> 0x30);
    local_80[7] = (char)((ulong)pcVar11 >> 0x38);
    uStack_70 = _UNK_001f2568;
    uStack_78 = (undefined2)_DAT_001f2560;
    uStack_76 = (uint)((ulong)_DAT_001f2560 >> 0x10);
    cStack_72 = (char)((ulong)_DAT_001f2560 >> 0x30);
    cStack_71 = (char)((ulong)_DAT_001f2560 >> 0x38);
    if ((pcVar11 < "ndroidJavaInputAndAAudioOutputAudio") &&
       ("androidJavaInputAndAAudioOutputAudio" < pcVar11 + 0x24)) goto LAB_004186b0;
    pcVar11[0x24] = '\0';
    pcVar11[0x20] = 'u';
    pcVar11[0x21] = 'd';
    pcVar11[0x22] = 'i';
    pcVar11[0x23] = 'o';
    *(undefined8 *)(pcVar11 + 8) = uVar17;
    *(undefined8 *)pcVar11 = uVar16;
    *(undefined8 *)(pcVar11 + 0x18) = uVar6;
    *(undefined8 *)(pcVar11 + 0x10) = uVar9;
    break;
  case 10:
    pcVar11 = "androidGameAudio";
LAB_00418614:
    uStack_70 = CONCAT17(0x10,(undefined7)uStack_70);
    if ((local_80 <= pcVar11) && (pcVar11 < &uStack_70)) {
LAB_004186b0:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    uVar17 = *(undefined8 *)(pcVar11 + 8);
    uVar16 = *(undefined8 *)pcVar11;
    uStack_70 = uStack_70 & 0xffffffffffffff00;
    uStack_78 = (undefined2)uVar17;
    uStack_76 = (uint)((ulong)uVar17 >> 0x10);
    cStack_72 = (char)((ulong)uVar17 >> 0x30);
    cStack_71 = (char)((ulong)uVar17 >> 0x38);
    local_80._0_6_ = (undefined6)uVar16;
    local_80[6] = (char)((ulong)uVar16 >> 0x30);
    local_80[7] = (char)((ulong)uVar16 >> 0x38);
    break;
  case 0xb:
    uStack_70 = CONCAT17(10,(undefined7)uStack_70);
    if ((local_80 < "ummyAudio") && ("dummyAudio" < &uStack_76)) goto LAB_004186b0;
    uStack_76 = uStack_76 & 0xffffff00;
    uStack_78 = 0x6f69;
    local_80._0_6_ = (undefined6)s_dummyAudio_001b06f0._0_8_;
    local_80[6] = SUB81(s_dummyAudio_001b06f0._0_8_,6);
    local_80[7] = SUB81(s_dummyAudio_001b06f0._0_8_,7);
    break;
  default:
    local_80[0] = '\0';
    local_80[1] = '\0';
    local_80[2] = '\0';
    local_80[3] = '\0';
    local_80[4] = '\0';
    local_80[5] = '\0';
    local_80[6] = '\0';
    local_80[7] = '\0';
    uStack_78 = 0;
    uStack_76 = 0;
    cStack_72 = '\0';
    cStack_71 = '\0';
    uStack_70 = 0;
  }
  (*(code *)param_1[3])(param_1 + 1,local_60,local_80);
  if ((long)uStack_70 < 0) {
    operator_delete((void *)CONCAT17(local_80[7],CONCAT16(local_80[6],local_80._0_6_)));
  }
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004186dc  FUN_004186dc =====

void FUN_004186dc(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1a720;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004186f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[2]);
    return;
  }
  return;
}


// ===== 00418700  FUN_00418700 =====

void FUN_00418700(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1a720;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00418740  FUN_00418740 =====

void FUN_00418740(long param_1)

{
  FUN_004182a8(param_1 + 8);
  return;
}


// ===== 00418748  FUN_00418748 =====

void FUN_00418748(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d1a748;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (-1 < *(char *)((long)param_1 + 0x2f)) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 0041879c  FUN_0041879c =====

void FUN_0041879c(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d1a748;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 004187ec  FUN_004187ec =====

void FUN_004187ec(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  
  uVar5 = FUN_005ce36c();
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar6 = *puVar7;
  plVar2 = (long *)puVar7[1];
  if (plVar2 == (long *)0x0) {
    FUN_0044ffe8(uVar6,*(undefined1 *)(param_1 + 0x10));
  }
  else {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_0044ffe8(uVar6,*(undefined1 *)(param_1 + 0x10));
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  uVar6 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x00418898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x40))
            (param_1 + 0x30,param_1 + 0x18,*(undefined8 *)(param_1 + 0x50),uVar5,uVar6);
  return;
}


// ===== 0041889c  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 004188a0  FUN_004188a0 =====

void FUN_004188a0(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar2 = *puVar6;
  plVar3 = (long *)puVar6[1];
  if (plVar3 == (long *)0x0) {
    FUN_0044ffe8(uVar2,*(undefined1 *)(param_1 + 0x10));
    return;
  }
  plVar1 = plVar3 + 1;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = *plVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  FUN_0044ffe8(uVar2,*(undefined1 *)(param_1 + 0x10));
  do {
    lVar7 = *plVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar7 != 0) {
    return;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
  FUN_005466cc(plVar3);
  return;
}


// ===== 00418930  FUN_00418930 =====

void FUN_00418930(undefined8 *param_1)

{
  char cVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1[0xd] + 8);
  *param_1 = &PTR_FUN_00d1a798;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1[10]);
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  if (-1 < cVar1) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 0041899c  FUN_0041899c =====

void FUN_0041899c(undefined8 *param_1)

{
  char cVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1[0xd] + 8);
  *param_1 = &PTR_FUN_00d1a798;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1[10]);
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00418a08  FUN_00418a08 =====

void FUN_00418a08(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_005ce36c();
  FUN_00418a60(param_1 + 8);
  uVar2 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x00418a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x60))
            (param_1 + 0x50,param_1 + 0x38,*(undefined8 *)(param_1 + 0x70),uVar1,uVar2);
  return;
}


// ===== 00418a60  FUN_00418a60 =====

void FUN_00418a60(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *__src;
  long *plVar4;
  ulong uVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined1 **__dest;
  long lVar9;
  undefined8 uVar10;
  undefined1 *local_70;
  ulong uStack_68;
  undefined8 local_60;
  long local_58;
  
  __dest = &local_70;
  lVar8 = tpidr_el0;
  local_58 = *(long *)(lVar8 + 0x28);
  lVar3 = **(long **)(*param_1 + 0x18);
  plVar4 = (long *)(*(long **)(*param_1 + 0x18))[1];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      lVar9 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_005466cc(plVar4);
    }
  }
  uVar10 = *(undefined8 *)(lVar3 + 0x360);
  lVar3 = param_1[1];
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    __src = (undefined1 *)param_1[2];
    uVar5 = param_1[3];
    if (uVar5 < 0x17) {
      local_60 = CONCAT17((char)uVar5,(undefined7)local_60);
    }
    else {
      if (0x7fffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar2 = (uVar5 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar2);
      local_60 = uVar2 | 0x8000000000000000;
      local_70 = (undefined1 *)__dest;
      uStack_68 = uVar5;
    }
    if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar5 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar5 + 1);
  }
  else {
    uStack_68 = param_1[3];
    local_70 = (undefined1 *)param_1[2];
    local_60 = param_1[4];
  }
  FUN_0042fecc(uVar10,(char)lVar3 != '\0',&local_70,(char)param_1[5]);
  if ((long)local_60 < 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar8 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00418be8  FUN_00418be8 =====

void FUN_00418be8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1a7c0;
  if (-1 < *(char *)((long)param_1 + 0x2f)) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 00418c08  FUN_00418c08 =====

void FUN_00418c08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1a7c0;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00418c44  FUN_00418c44 =====

void FUN_00418c44(long param_1)

{
  FUN_00418a60(param_1 + 8);
  return;
}


// ===== 00418c4c  FUN_00418c4c =====

void FUN_00418c4c(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d1a7e8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (-1 < *(char *)((long)param_1 + 0x2f)) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 00418ca0  FUN_00418ca0 =====

void FUN_00418ca0(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d1a7e8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00418cf0  FUN_00418cf0 =====

void FUN_00418cf0(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  uVar5 = FUN_005ce36c();
  plVar7 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar2 = *plVar7;
  plVar7 = (long *)plVar7[1];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_005466cc(plVar7);
    }
  }
  FUN_0042ff40(*(undefined8 *)(lVar2 + 0x360),*(undefined1 *)(param_1 + 0x10));
  uVar6 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x00418d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x40))
            (param_1 + 0x30,param_1 + 0x18,*(undefined8 *)(param_1 + 0x50),uVar5,uVar6);
  return;
}


// ===== 00418d98  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00418d9c  FUN_00418d9c =====

void FUN_00418d9c(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar2 = *plVar5;
  plVar5 = (long *)plVar5[1];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
    }
  }
  FUN_0042ff40(*(undefined8 *)(lVar2 + 0x360),*(undefined1 *)(param_1 + 0x10));
  return;
}


// ===== 00418e18  FUN_00418e18 =====

void FUN_00418e18(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xd] + 8);
  *param_1 = &PTR_FUN_00d1a838;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[10]);
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  if (*(code **)(param_1[6] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00418e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[6] + 8))(param_1[3]);
    return;
  }
  return;
}


// ===== 00418e80  FUN_00418e80 =====

void FUN_00418e80(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xd] + 8);
  *param_1 = &PTR_FUN_00d1a838;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[10]);
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  if (*(code **)(param_1[6] + 8) != (code *)0x0) {
    (**(code **)(param_1[6] + 8))(param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00418ee4  FUN_00418ee4 =====

void FUN_00418ee4(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  
  uVar5 = FUN_005ce36c();
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar6 = *puVar7;
  plVar2 = (long *)puVar7[1];
  if (plVar2 == (long *)0x0) {
    FUN_0044fe34(uVar6,*(undefined1 *)(param_1 + 0x10),param_1 + 0x18);
  }
  else {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_0044fe34(uVar6,*(undefined1 *)(param_1 + 0x10),param_1 + 0x18);
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  uVar6 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x00418f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x60))
            (param_1 + 0x50,param_1 + 0x38,*(undefined8 *)(param_1 + 0x70),uVar5,uVar6);
  return;
}


// ===== 00418f9c  FUN_00418f9c =====

void FUN_00418f9c(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[6] + 8);
  *param_1 = &PTR_FUN_00d1a860;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00418fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[3]);
    return;
  }
  return;
}


// ===== 00418fc0  FUN_00418fc0 =====

void FUN_00418fc0(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[6] + 8);
  *param_1 = &PTR_FUN_00d1a860;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00419000  FUN_00419000 =====

void FUN_00419000(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar2 = *puVar6;
  plVar3 = (long *)puVar6[1];
  if (plVar3 == (long *)0x0) {
    FUN_0044fe34(uVar2,*(undefined1 *)(param_1 + 0x10),param_1 + 0x18);
    return;
  }
  plVar1 = plVar3 + 1;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = *plVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  FUN_0044fe34(uVar2,*(undefined1 *)(param_1 + 0x10),param_1 + 0x18);
  do {
    lVar7 = *plVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar7 != 0) {
    return;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
  FUN_005466cc(plVar3);
  return;
}


// ===== 00419098  FUN_00419098 =====

void FUN_00419098(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0x10] + 8);
  *param_1 = &PTR_FUN_00d1a888;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[0xd]);
  }
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    operator_delete((void *)param_1[10]);
  }
  if (*(code **)(param_1[9] + 8) != (code *)0x0) {
    (**(code **)(param_1[9] + 8))(param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00419104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[5] + 8))(param_1[2]);
    return;
  }
  return;
}


// ===== 00419114  FUN_00419114 =====

void FUN_00419114(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0x10] + 8);
  *param_1 = &PTR_FUN_00d1a888;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[0xd]);
  }
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    operator_delete((void *)param_1[10]);
  }
  if (*(code **)(param_1[9] + 8) != (code *)0x0) {
    (**(code **)(param_1[9] + 8))(param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
    (**(code **)(param_1[5] + 8))(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0041918c  FUN_0041918c =====

void FUN_0041918c(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 *local_58;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  uVar6 = FUN_005ce36c();
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar7 = *puVar8;
  plVar2 = (long *)puVar8[1];
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_60 = *(undefined8 *)(param_1 + 0x20);
  local_58 = *(undefined8 **)(param_1 + 0x28);
  uStack_68 = *(undefined8 *)(param_1 + 0x18);
  local_70 = *(undefined8 *)(param_1 + 0x10);
  if ((code *)*local_58 != (code *)0x0) {
    local_70 = (*(code *)*local_58)(*(undefined8 *)(param_1 + 0x10));
  }
  FUN_004500dc(uVar7,&local_70,param_1 + 0x30);
  if ((code *)local_58[1] != (code *)0x0) {
    (*(code *)local_58[1])(local_70);
  }
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
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
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  uVar7 = FUN_005ce36c();
  (**(code **)(param_1 + 0x78))
            (param_1 + 0x68,param_1 + 0x50,*(undefined8 *)(param_1 + 0x88),uVar6,uVar7);
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004192ac  FUN_004192ac =====

void FUN_004192ac(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d1a8b0;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004192f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[5] + 8))(param_1[2]);
    return;
  }
  return;
}


// ===== 00419304  FUN_00419304 =====

void FUN_00419304(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d1a8b0;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
    (**(code **)(param_1[5] + 8))(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00419358  FUN_00419358 =====

void FUN_00419358(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 *local_48;
  long local_38;
  
  lVar6 = tpidr_el0;
  local_38 = *(long *)(lVar6 + 0x28);
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar2 = *puVar7;
  plVar3 = (long *)puVar7[1];
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_50 = *(undefined8 *)(param_1 + 0x20);
  local_48 = *(undefined8 **)(param_1 + 0x28);
  uStack_58 = *(undefined8 *)(param_1 + 0x18);
  local_60 = *(undefined8 *)(param_1 + 0x10);
  if ((code *)*local_48 != (code *)0x0) {
    local_60 = (*(code *)*local_48)(*(undefined8 *)(param_1 + 0x10));
  }
  FUN_004500dc(uVar2,&local_60,param_1 + 0x30);
  if ((code *)local_48[1] != (code *)0x0) {
    (*(code *)local_48[1])(local_60);
  }
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
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
  if (*(long *)(lVar6 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00419448  FUN_00419448 =====

void FUN_00419448(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1a8d8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004194a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[5] + 8))(param_1[2]);
    return;
  }
  return;
}


// ===== 004194b0  FUN_004194b0 =====

void FUN_004194b0(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1a8d8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
    (**(code **)(param_1[5] + 8))(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00419514  FUN_00419514 =====

void FUN_00419514(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 *local_58;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  uVar6 = FUN_005ce36c();
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar7 = *puVar8;
  plVar2 = (long *)puVar8[1];
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_60 = *(undefined8 *)(param_1 + 0x20);
  local_58 = *(undefined8 **)(param_1 + 0x28);
  uStack_68 = *(undefined8 *)(param_1 + 0x18);
  local_70 = *(undefined8 *)(param_1 + 0x10);
  if ((code *)*local_58 != (code *)0x0) {
    local_70 = (*(code *)*local_58)(*(undefined8 *)(param_1 + 0x10));
  }
  FUN_00450290(uVar7,&local_70);
  if ((code *)local_58[1] != (code *)0x0) {
    (*(code *)local_58[1])(local_70);
  }
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
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
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  uVar7 = FUN_005ce36c();
  (**(code **)(param_1 + 0x58))
            (param_1 + 0x48,param_1 + 0x30,*(undefined8 *)(param_1 + 0x68),uVar6,uVar7);
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00419630  FUN_00419630 =====

void FUN_00419630(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1a900;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041964c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[2]);
    return;
  }
  return;
}


// ===== 00419654  FUN_00419654 =====

void FUN_00419654(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1a900;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00419694  FUN_00419694 =====

void FUN_00419694(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 *local_48;
  long local_38;
  
  lVar6 = tpidr_el0;
  local_38 = *(long *)(lVar6 + 0x28);
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar2 = *puVar7;
  plVar3 = (long *)puVar7[1];
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_50 = *(undefined8 *)(param_1 + 0x20);
  local_48 = *(undefined8 **)(param_1 + 0x28);
  uStack_58 = *(undefined8 *)(param_1 + 0x18);
  local_60 = *(undefined8 *)(param_1 + 0x10);
  if ((code *)*local_48 != (code *)0x0) {
    local_60 = (*(code *)*local_48)(*(undefined8 *)(param_1 + 0x10));
  }
  FUN_00450290(uVar2,&local_60);
  if ((code *)local_48[1] != (code *)0x0) {
    (*(code *)local_48[1])(local_60);
  }
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
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
  if (*(long *)(lVar6 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0041977c  FUN_0041977c =====

void FUN_0041977c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                 ulong param_5,undefined8 *param_6)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *__dest;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = FUN_005ce36c();
  lVar2 = param_3[3];
  uVar6 = param_3[1];
  uVar5 = *param_3;
  param_1[2] = param_3[2];
  param_1[1] = uVar6;
  *param_1 = uVar5;
  lVar4 = *(long *)(lVar2 + 8);
  param_1[3] = lVar2;
  if (lVar4 != 0) {
    param_3[2] = FUN_0040dec4;
    param_3[3] = &DAT_001f1910;
  }
  if (0x7fffffffffffffef < param_5) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_5 < 0x17) {
    __dest = param_1 + 4;
    *(char *)((long)param_1 + 0x37) = (char)param_5;
  }
  else {
    uVar1 = (param_5 | 0xf) + 1;
    __dest = (undefined8 *)operator_new(uVar1);
    param_1[4] = __dest;
    param_1[5] = param_5;
    param_1[6] = uVar1 | 0x8000000000000000;
  }
  if ((__dest <= param_4) && (param_4 < (undefined8 *)((long)__dest + param_5))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  if (param_5 != 0) {
    memmove(__dest,param_4,param_5);
  }
  uVar5 = param_6[2];
  lVar2 = param_6[3];
  *(undefined1 *)((long)__dest + param_5) = 0;
  uVar7 = param_6[1];
  uVar6 = *param_6;
  param_1[9] = uVar5;
  param_1[8] = uVar7;
  param_1[7] = uVar6;
  lVar4 = *(long *)(lVar2 + 8);
  param_1[10] = lVar2;
  if (lVar4 != 0) {
    param_6[2] = FUN_0040e33c;
    param_6[3] = &DAT_001f1910;
  }
  param_1[0xb] = uVar3;
  return;
}


// ===== 004198b4  FUN_004198b4 =====

void FUN_004198b4(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xb] + 8);
  *param_1 = &PTR_FUN_00d1b078;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  if (*(code **)(param_1[4] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041990c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[4] + 8))(param_1[1]);
    return;
  }
  return;
}


// ===== 0041991c  FUN_0041991c =====

void FUN_0041991c(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xb] + 8);
  *param_1 = &PTR_FUN_00d1b078;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  if (*(code **)(param_1[4] + 8) != (code *)0x0) {
    (**(code **)(param_1[4] + 8))(param_1[1]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00419980  FUN_00419980 =====

void FUN_00419980(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_005ce36c();
  (**(code **)(param_1 + 0x18))(param_1 + 8);
  uVar2 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x004199d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x50))
            (param_1 + 0x40,param_1 + 0x28,*(undefined8 *)(param_1 + 0x60),uVar1,uVar2);
  return;
}


// ===== 004199dc  FUN_004199dc =====

void FUN_004199dc(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[4] + 8);
  *param_1 = &PTR_FUN_00d1b0a0;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004199f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[1]);
    return;
  }
  return;
}


// ===== 00419a00  FUN_00419a00 =====

void FUN_00419a00(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[4] + 8);
  *param_1 = &PTR_FUN_00d1b0a0;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[1]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00419a40  FUN_00419a40 =====

void FUN_00419a40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00419a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x18))(param_1 + 8);
  return;
}


// ===== 00419a50  FUN_00419a50 =====

void FUN_00419a50(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 00419a5c  FUN_00419a5c =====

void FUN_00419a5c(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1a928;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00419ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[5] + 8))(param_1[2]);
    return;
  }
  return;
}


// ===== 00419ac4  FUN_00419ac4 =====

void FUN_00419ac4(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1a928;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
    (**(code **)(param_1[5] + 8))(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00419b28  FUN_00419b28 =====

void FUN_00419b28(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 *local_58;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  uVar6 = FUN_005ce36c();
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar7 = *puVar8;
  plVar2 = (long *)puVar8[1];
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_60 = *(undefined8 *)(param_1 + 0x20);
  local_58 = *(undefined8 **)(param_1 + 0x28);
  uStack_68 = *(undefined8 *)(param_1 + 0x18);
  local_70 = *(undefined8 *)(param_1 + 0x10);
  if ((code *)*local_58 != (code *)0x0) {
    local_70 = (*(code *)*local_58)(*(undefined8 *)(param_1 + 0x10));
  }
  FUN_0045051c(uVar7,&local_70);
  if ((code *)local_58[1] != (code *)0x0) {
    (*(code *)local_58[1])(local_70);
  }
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
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
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  uVar7 = FUN_005ce36c();
  (**(code **)(param_1 + 0x58))
            (param_1 + 0x48,param_1 + 0x30,*(undefined8 *)(param_1 + 0x68),uVar6,uVar7);
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00419c44  FUN_00419c44 =====

void FUN_00419c44(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1a950;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00419c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[2]);
    return;
  }
  return;
}


// ===== 00419c68  FUN_00419c68 =====

void FUN_00419c68(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1a950;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00419ca8  FUN_00419ca8 =====

void FUN_00419ca8(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 *local_48;
  long local_38;
  
  lVar6 = tpidr_el0;
  local_38 = *(long *)(lVar6 + 0x28);
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar2 = *puVar7;
  plVar3 = (long *)puVar7[1];
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_50 = *(undefined8 *)(param_1 + 0x20);
  local_48 = *(undefined8 **)(param_1 + 0x28);
  uStack_58 = *(undefined8 *)(param_1 + 0x18);
  local_60 = *(undefined8 *)(param_1 + 0x10);
  if ((code *)*local_48 != (code *)0x0) {
    local_60 = (*(code *)*local_48)(*(undefined8 *)(param_1 + 0x10));
  }
  FUN_0045051c(uVar2,&local_60);
  if ((code *)local_48[1] != (code *)0x0) {
    (*(code *)local_48[1])(local_60);
  }
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
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
  if (*(long *)(lVar6 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00419d90  FUN_00419d90 =====

void FUN_00419d90(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1a978;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00419de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[5] + 8))(param_1[2]);
    return;
  }
  return;
}


// ===== 00419df8  FUN_00419df8 =====

void FUN_00419df8(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1a978;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
    (**(code **)(param_1[5] + 8))(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00419e5c  FUN_00419e5c =====

void FUN_00419e5c(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 *local_58;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  uVar6 = FUN_005ce36c();
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar7 = *puVar8;
  plVar2 = (long *)puVar8[1];
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_60 = *(undefined8 *)(param_1 + 0x20);
  local_58 = *(undefined8 **)(param_1 + 0x28);
  uStack_68 = *(undefined8 *)(param_1 + 0x18);
  local_70 = *(undefined8 *)(param_1 + 0x10);
  if ((code *)*local_58 != (code *)0x0) {
    local_70 = (*(code *)*local_58)(*(undefined8 *)(param_1 + 0x10));
  }
  FUN_00450d5c(uVar7,&local_70);
  if ((code *)local_58[1] != (code *)0x0) {
    (*(code *)local_58[1])(local_70);
  }
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
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
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  uVar7 = FUN_005ce36c();
  (**(code **)(param_1 + 0x58))
            (param_1 + 0x48,param_1 + 0x30,*(undefined8 *)(param_1 + 0x68),uVar6,uVar7);
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00419f78  FUN_00419f78 =====

void FUN_00419f78(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1a9a0;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00419f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[2]);
    return;
  }
  return;
}


// ===== 00419f9c  FUN_00419f9c =====

void FUN_00419f9c(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1a9a0;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00419fdc  FUN_00419fdc =====

void FUN_00419fdc(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 *local_48;
  long local_38;
  
  lVar6 = tpidr_el0;
  local_38 = *(long *)(lVar6 + 0x28);
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar2 = *puVar7;
  plVar3 = (long *)puVar7[1];
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_50 = *(undefined8 *)(param_1 + 0x20);
  local_48 = *(undefined8 **)(param_1 + 0x28);
  uStack_58 = *(undefined8 *)(param_1 + 0x18);
  local_60 = *(undefined8 *)(param_1 + 0x10);
  if ((code *)*local_48 != (code *)0x0) {
    local_60 = (*(code *)*local_48)(*(undefined8 *)(param_1 + 0x10));
  }
  FUN_00450d5c(uVar2,&local_60);
  if ((code *)local_48[1] != (code *)0x0) {
    (*(code *)local_48[1])(local_60);
  }
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
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
  if (*(long *)(lVar6 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0041a0c4  FUN_0041a0c4 =====

void FUN_0041a0c4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 0041a0d0  FUN_0041a0d0 =====

void FUN_0041a0d0(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1a9c8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041a128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[5] + 8))(param_1[2]);
    return;
  }
  return;
}


// ===== 0041a138  FUN_0041a138 =====

void FUN_0041a138(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1a9c8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
    (**(code **)(param_1[5] + 8))(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0041a19c  FUN_0041a19c =====

void FUN_0041a19c(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 *local_58;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  uVar6 = FUN_005ce36c();
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar7 = *puVar8;
  plVar2 = (long *)puVar8[1];
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_60 = *(undefined8 *)(param_1 + 0x20);
  local_58 = *(undefined8 **)(param_1 + 0x28);
  uStack_68 = *(undefined8 *)(param_1 + 0x18);
  local_70 = *(undefined8 *)(param_1 + 0x10);
  if ((code *)*local_58 != (code *)0x0) {
    local_70 = (*(code *)*local_58)(*(undefined8 *)(param_1 + 0x10));
  }
  FUN_00450c38(uVar7,&local_70);
  if ((code *)local_58[1] != (code *)0x0) {
    (*(code *)local_58[1])(local_70);
  }
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
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
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  uVar7 = FUN_005ce36c();
  (**(code **)(param_1 + 0x58))
            (param_1 + 0x48,param_1 + 0x30,*(undefined8 *)(param_1 + 0x68),uVar6,uVar7);
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0041a2b8  FUN_0041a2b8 =====

void FUN_0041a2b8(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1a9f0;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041a2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[2]);
    return;
  }
  return;
}


// ===== 0041a2dc  FUN_0041a2dc =====

void FUN_0041a2dc(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1a9f0;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0041a31c  FUN_0041a31c =====

void FUN_0041a31c(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 *local_48;
  long local_38;
  
  lVar6 = tpidr_el0;
  local_38 = *(long *)(lVar6 + 0x28);
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar2 = *puVar7;
  plVar3 = (long *)puVar7[1];
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_50 = *(undefined8 *)(param_1 + 0x20);
  local_48 = *(undefined8 **)(param_1 + 0x28);
  uStack_58 = *(undefined8 *)(param_1 + 0x18);
  local_60 = *(undefined8 *)(param_1 + 0x10);
  if ((code *)*local_48 != (code *)0x0) {
    local_60 = (*(code *)*local_48)(*(undefined8 *)(param_1 + 0x10));
  }
  FUN_00450c38(uVar2,&local_60);
  if ((code *)local_48[1] != (code *)0x0) {
    (*(code *)local_48[1])(local_60);
  }
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
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
  if (*(long *)(lVar6 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0041a404  FUN_0041a404 =====

void FUN_0041a404(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 0041a410  FUN_0041a410 =====

void FUN_0041a410(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1aa18;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041a468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[5] + 8))(param_1[2]);
    return;
  }
  return;
}


// ===== 0041a478  FUN_0041a478 =====

void FUN_0041a478(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1aa18;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
    (**(code **)(param_1[5] + 8))(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0041a4dc  FUN_0041a4dc =====

void FUN_0041a4dc(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 *local_58;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  uVar6 = FUN_005ce36c();
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar7 = *puVar8;
  plVar2 = (long *)puVar8[1];
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_60 = *(undefined8 *)(param_1 + 0x20);
  local_58 = *(undefined8 **)(param_1 + 0x28);
  uStack_68 = *(undefined8 *)(param_1 + 0x18);
  local_70 = *(undefined8 *)(param_1 + 0x10);
  if ((code *)*local_58 != (code *)0x0) {
    local_70 = (*(code *)*local_58)(*(undefined8 *)(param_1 + 0x10));
  }
  FUN_004510e0(uVar7,&local_70);
  if ((code *)local_58[1] != (code *)0x0) {
    (*(code *)local_58[1])(local_70);
  }
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
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
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  uVar7 = FUN_005ce36c();
  (**(code **)(param_1 + 0x58))
            (param_1 + 0x48,param_1 + 0x30,*(undefined8 *)(param_1 + 0x68),uVar6,uVar7);
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0041a5f8  FUN_0041a5f8 =====

void FUN_0041a5f8(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1aa40;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041a614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[2]);
    return;
  }
  return;
}


// ===== 0041a61c  FUN_0041a61c =====

void FUN_0041a61c(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1aa40;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0041a65c  FUN_0041a65c =====

void FUN_0041a65c(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 *local_48;
  long local_38;
  
  lVar6 = tpidr_el0;
  local_38 = *(long *)(lVar6 + 0x28);
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar2 = *puVar7;
  plVar3 = (long *)puVar7[1];
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_50 = *(undefined8 *)(param_1 + 0x20);
  local_48 = *(undefined8 **)(param_1 + 0x28);
  uStack_58 = *(undefined8 *)(param_1 + 0x18);
  local_60 = *(undefined8 *)(param_1 + 0x10);
  if ((code *)*local_48 != (code *)0x0) {
    local_60 = (*(code *)*local_48)(*(undefined8 *)(param_1 + 0x10));
  }
  FUN_004510e0(uVar2,&local_60);
  if ((code *)local_48[1] != (code *)0x0) {
    (*(code *)local_48[1])(local_60);
  }
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
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
  if (*(long *)(lVar6 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0041a744  FUN_0041a744 =====

void FUN_0041a744(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d1aa68;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (-1 < *(char *)((long)param_1 + 0x2f)) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 0041a798  FUN_0041a798 =====

void FUN_0041a798(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d1aa68;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0041a7e8  FUN_0041a7e8 =====

void FUN_0041a7e8(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  uVar5 = FUN_005ce36c();
  plVar7 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar2 = *plVar7;
  plVar7 = (long *)plVar7[1];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_005466cc(plVar7);
    }
  }
  FUN_0045bcc8(*(undefined8 *)(*(long *)(lVar2 + 0x360) + 0xb8),*(undefined1 *)(param_1 + 0x10));
  uVar6 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x0041a890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x40))
            (param_1 + 0x30,param_1 + 0x18,*(undefined8 *)(param_1 + 0x50),uVar5,uVar6);
  return;
}


// ===== 0041a894  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0041a898  FUN_0041a898 =====

void FUN_0041a898(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar2 = *plVar5;
  plVar5 = (long *)plVar5[1];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
    }
  }
  FUN_0045bcc8(*(undefined8 *)(*(long *)(lVar2 + 0x360) + 0xb8),*(undefined1 *)(param_1 + 0x10));
  return;
}


// ===== 0041a918  FUN_0041a918 =====

void FUN_0041a918(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 0041a924  FUN_0041a924 =====

void FUN_0041a924(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1aab8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[5] + 8))(param_1[2]);
    return;
  }
  return;
}


// ===== 0041a98c  FUN_0041a98c =====

void FUN_0041a98c(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1aab8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
    (**(code **)(param_1[5] + 8))(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0041a9f0  FUN_0041a9f0 =====

void FUN_0041a9f0(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 *local_58;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  uVar6 = FUN_005ce36c();
  plVar7 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar2 = *plVar7;
  plVar7 = (long *)plVar7[1];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_005466cc(plVar7);
    }
  }
  local_60 = *(undefined8 *)(param_1 + 0x20);
  local_58 = *(undefined8 **)(param_1 + 0x28);
  uStack_68 = *(undefined8 *)(param_1 + 0x18);
  local_70 = *(undefined8 *)(param_1 + 0x10);
  uVar9 = *(undefined8 *)(*(long *)(lVar2 + 0x360) + 0xb8);
  if ((code *)*local_58 != (code *)0x0) {
    local_70 = (*(code *)*local_58)(*(undefined8 *)(param_1 + 0x10));
  }
  FUN_0045c5d8(uVar9,&local_70);
  if ((code *)local_58[1] != (code *)0x0) {
    (*(code *)local_58[1])(local_70);
  }
  uVar9 = FUN_005ce36c();
  (**(code **)(param_1 + 0x58))
            (param_1 + 0x48,param_1 + 0x30,*(undefined8 *)(param_1 + 0x68),uVar6,uVar9);
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0041ab0c  FUN_0041ab0c =====

void FUN_0041ab0c(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1aae0;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041ab28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[2]);
    return;
  }
  return;
}


// ===== 0041ab30  FUN_0041ab30 =====

void FUN_0041ab30(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1aae0;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0041ab70  FUN_0041ab70 =====

void FUN_0041ab70(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 *local_48;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  plVar6 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar2 = *plVar6;
  plVar6 = (long *)plVar6[1];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  local_50 = *(undefined8 *)(param_1 + 0x20);
  local_48 = *(undefined8 **)(param_1 + 0x28);
  uStack_58 = *(undefined8 *)(param_1 + 0x18);
  local_60 = *(undefined8 *)(param_1 + 0x10);
  uVar8 = *(undefined8 *)(*(long *)(lVar2 + 0x360) + 0xb8);
  if ((code *)*local_48 != (code *)0x0) {
    local_60 = (*(code *)*local_48)(*(undefined8 *)(param_1 + 0x10));
  }
  FUN_0045c5d8(uVar8,&local_60);
  if ((code *)local_48[1] != (code *)0x0) {
    (*(code *)local_48[1])(local_60);
  }
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0041ac5c  FUN_0041ac5c =====

void FUN_0041ac5c(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[8] + 8);
  *param_1 = &PTR_FUN_00d1ab08;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[5]);
  }
  if (-1 < *(char *)((long)param_1 + 0x27)) {
    return;
  }
  operator_delete((void *)param_1[2]);
  return;
}


// ===== 0041acb0  FUN_0041acb0 =====

void FUN_0041acb0(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[8] + 8);
  *param_1 = &PTR_FUN_00d1ab08;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[5]);
  }
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0041ad00  FUN_0041ad00 =====

void FUN_0041ad00(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  uVar5 = FUN_005ce36c();
  plVar7 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar2 = *plVar7;
  plVar7 = (long *)plVar7[1];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_005466cc(plVar7);
    }
  }
  FUN_00459ebc(*(undefined8 *)(*(long *)(lVar2 + 0x360) + 0xb8));
  uVar6 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x0041ada4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x38))
            (param_1 + 0x28,param_1 + 0x10,*(undefined8 *)(param_1 + 0x48),uVar5,uVar6);
  return;
}


// ===== 0041ada8  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0041adac  FUN_0041adac =====

void FUN_0041adac(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar2 = *plVar5;
  plVar5 = (long *)plVar5[1];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
    }
  }
  FUN_00459ebc(*(undefined8 *)(*(long *)(lVar2 + 0x360) + 0xb8));
  return;
}


// ===== 0041ae1c  FUN_0041ae1c =====

void FUN_0041ae1c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 0041ae28  FUN_0041ae28 =====

void FUN_0041ae28(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 0041ae34  FUN_0041ae34 =====

void FUN_0041ae34(undefined8 *param_1)

{
  char cVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1[0x16] + 8);
  *param_1 = &PTR_FUN_00d1ab58;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1[0x13]);
  }
  if (*(char *)((long)param_1 + 0x97) < '\0') {
    operator_delete((void *)param_1[0x10]);
  }
  if (*(code **)(param_1[0xf] + 8) != (code *)0x0) {
    (**(code **)(param_1[0xf] + 8))(param_1[0xc]);
  }
  if (*(code **)(param_1[0xb] + 8) != (code *)0x0) {
    (**(code **)(param_1[0xb] + 8))(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  if (-1 < cVar1) {
    return;
  }
  operator_delete((void *)param_1[2]);
  return;
}


// ===== 0041aed8  FUN_0041aed8 =====

void FUN_0041aed8(undefined8 *param_1)

{
  char cVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1[0x16] + 8);
  *param_1 = &PTR_FUN_00d1ab58;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1[0x13]);
  }
  if (*(char *)((long)param_1 + 0x97) < '\0') {
    operator_delete((void *)param_1[0x10]);
  }
  if (*(code **)(param_1[0xf] + 8) != (code *)0x0) {
    (**(code **)(param_1[0xf] + 8))(param_1[0xc]);
  }
  if (*(code **)(param_1[0xb] + 8) != (code *)0x0) {
    (**(code **)(param_1[0xb] + 8))(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0041af7c  FUN_0041af7c =====

void FUN_0041af7c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_005ce36c();
  FUN_0041b1a0(param_1 + 8);
  uVar2 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x0041afd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0xa8))
            (param_1 + 0x98,param_1 + 0x80,*(undefined8 *)(param_1 + 0xb8),uVar1,uVar2);
  return;
}


// ===== 0041afd4  FUN_0041afd4 =====

void FUN_0041afd4(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar4 = param_1 + 1;
  *param_1 = *param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    puVar2 = (undefined8 *)param_2[1];
    uVar3 = param_2[2];
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
      param_1[1] = puVar4;
      param_1[2] = uVar3;
      param_1[3] = uVar1 | 0x8000000000000000;
    }
    if ((puVar4 <= puVar2) && (puVar2 < (undefined8 *)((long)puVar4 + uVar3 + 1)))
    goto LAB_0041b170;
    memmove(puVar4,puVar2,uVar3 + 1);
  }
  else {
    uVar7 = param_2[2];
    uVar6 = param_2[1];
    param_1[3] = param_2[3];
    param_1[2] = uVar7;
    *puVar4 = uVar6;
  }
  puVar4 = param_1 + 4;
  if (*(char *)((long)param_2 + 0x37) < '\0') {
    puVar2 = (undefined8 *)param_2[4];
    uVar3 = param_2[5];
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
      param_1[4] = puVar4;
      param_1[5] = uVar3;
      param_1[6] = uVar1 | 0x8000000000000000;
    }
    if ((puVar4 <= puVar2) && (puVar2 < (undefined8 *)((long)puVar4 + uVar3 + 1))) {
LAB_0041b170:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(puVar4,puVar2,uVar3 + 1);
  }
  else {
    uVar7 = param_2[5];
    uVar6 = param_2[4];
    param_1[6] = param_2[6];
    param_1[5] = uVar7;
    *puVar4 = uVar6;
  }
  uVar6 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar6;
  param_1[9] = param_2[9];
  lVar5 = *(long *)(param_2[10] + 8);
  param_1[10] = param_2[10];
  if (lVar5 != 0) {
    param_2[9] = FUN_0041ae1c;
    param_2[10] = &DAT_001f1910;
  }
  uVar6 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar6;
  param_1[0xd] = param_2[0xd];
  lVar5 = *(long *)(param_2[0xe] + 8);
  param_1[0xe] = param_2[0xe];
  if (lVar5 != 0) {
    param_2[0xd] = FUN_0041ae28;
    param_2[0xe] = &DAT_001f1910;
  }
  return;
}


// ===== 0041b1a0  FUN_0041b1a0 =====

void FUN_0041b1a0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long local_90;
  long lStack_88;
  long local_80;
  undefined8 *local_78;
  long local_70;
  long lStack_68;
  long local_60;
  undefined8 *local_58;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  lVar10 = *param_1;
  lVar2 = **(long **)(lVar10 + 0x18);
  plVar3 = (long *)(*(long **)(lVar10 + 0x18))[1];
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
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
  FUN_005467a4(lVar10 + 0x40);
  if (*(long *)(lVar10 + 0x68) == 0) {
    puVar7 = (undefined1 *)operator_new(1);
    *puVar7 = 0;
    *(undefined1 **)(lVar10 + 0x68) = puVar7;
  }
  FUN_005467c8(lVar10 + 0x40);
  local_60 = param_1[9];
  local_58 = (undefined8 *)param_1[10];
  lStack_68 = param_1[8];
  local_70 = param_1[7];
  uVar9 = *(undefined8 *)(lVar10 + 0x68);
  uVar11 = *(undefined8 *)(*(long *)(lVar2 + 0x360) + 0xb8);
  if ((code *)*local_58 != (code *)0x0) {
    local_70 = (*(code *)*local_58)(param_1[7]);
  }
  local_80 = param_1[0xd];
  local_78 = (undefined8 *)param_1[0xe];
  lStack_88 = param_1[0xc];
  local_90 = param_1[0xb];
  if ((code *)*local_78 != (code *)0x0) {
    local_90 = (*(code *)*local_78)(param_1[0xb]);
  }
  FUN_004b0550(uVar9,uVar11,param_1 + 1,param_1 + 4,&local_70,&local_90);
  if ((code *)local_78[1] != (code *)0x0) {
    (*(code *)local_78[1])(local_90);
  }
  if ((code *)local_58[1] != (code *)0x0) {
    (*(code *)local_58[1])(local_70);
  }
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0041b320  FUN_0041b320 =====

void FUN_0041b320(undefined8 *param_1)

{
  char cVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1[0xf] + 8);
  *param_1 = &PTR_FUN_00d1ab80;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1[0xc]);
  }
  if (*(code **)(param_1[0xb] + 8) != (code *)0x0) {
    (**(code **)(param_1[0xb] + 8))(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  if (-1 < cVar1) {
    return;
  }
  operator_delete((void *)param_1[2]);
  return;
}


// ===== 0041b3a0  FUN_0041b3a0 =====

void FUN_0041b3a0(undefined8 *param_1)

{
  char cVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1[0xf] + 8);
  *param_1 = &PTR_FUN_00d1ab80;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1[0xc]);
  }
  if (*(code **)(param_1[0xb] + 8) != (code *)0x0) {
    (**(code **)(param_1[0xb] + 8))(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0041b420  FUN_0041b420 =====

void FUN_0041b420(long param_1)

{
  FUN_0041b1a0(param_1 + 8);
  return;
}


// ===== 0041b428  FUN_0041b428 =====

void FUN_0041b428(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 0041b434  FUN_0041b434 =====

void FUN_0041b434(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xf] + 8);
  *param_1 = &PTR_FUN_00d1aba8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[0xc]);
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  if (*(code **)(param_1[8] + 8) != (code *)0x0) {
    (**(code **)(param_1[8] + 8))(param_1[5]);
  }
  FUN_0040dcf8(param_1 + 2);
  return;
}


// ===== 0041b498  FUN_0041b498 =====

void FUN_0041b498(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xf] + 8);
  *param_1 = &PTR_FUN_00d1aba8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[0xc]);
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  if (*(code **)(param_1[8] + 8) != (code *)0x0) {
    (**(code **)(param_1[8] + 8))(param_1[5]);
  }
  FUN_0040dcf8(param_1 + 2);
  operator_delete(param_1);
  return;
}


// ===== 0041b504  FUN_0041b504 =====

void FUN_0041b504(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_005ce36c();
  FUN_0041b55c(param_1 + 8);
  uVar2 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x0041b558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x70))
            (param_1 + 0x60,param_1 + 0x48,*(undefined8 *)(param_1 + 0x80),uVar1,uVar2);
  return;
}


// ===== 0041b55c  FUN_0041b55c =====

void FUN_0041b55c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  void *local_90;
  void *local_88;
  void *local_80;
  undefined8 *local_78 [2];
  code *local_68;
  undefined **local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  puVar12 = (undefined8 *)*param_1;
  pvVar7 = operator_new(0x1438);
  uVar10 = *puVar12;
  if (puVar12[1] != 0) {
    plVar1 = (long *)(puVar12[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_00477d38(pvVar7,uVar10);
  pvVar8 = (void *)puVar12[4];
  puVar12[4] = pvVar7;
  if (pvVar8 != (void *)0x0) {
    FUN_0047808c(pvVar8);
    operator_delete(pvVar8);
    pvVar7 = (void *)puVar12[4];
  }
  lVar9 = param_1[1];
  lVar2 = param_1[2];
  local_90 = (void *)0x0;
  local_88 = (void *)0x0;
  local_80 = (void *)0x0;
  uVar5 = lVar2 - lVar9;
  pvVar8 = local_88;
  if (uVar5 != 0) {
    if (0x555555555555555 < (ulong)(((long)uVar5 >> 4) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar8 = operator_new(uVar5);
    local_80 = (void *)((long)pvVar8 + ((long)uVar5 >> 4) * 0x10);
    local_90 = pvVar8;
    do {
      FUN_0041b72c(pvVar8,lVar9);
      lVar9 = lVar9 + 0x30;
      pvVar8 = (void *)((long)pvVar8 + 0x30);
    } while (lVar9 != lVar2);
  }
  local_88 = pvVar8;
  puVar11 = (undefined8 *)param_1[7];
  uVar10 = param_1[4];
  uVar14 = param_1[6];
  uVar13 = param_1[5];
  if ((code *)*puVar11 != (code *)0x0) {
    uVar10 = (*(code *)*puVar11)(uVar10);
  }
  local_68 = FUN_0041b928;
  local_60 = &PTR_FUN_00d1abc0;
  local_78[0] = (undefined8 *)operator_new(0x28);
  local_78[0][1] = uVar10;
  *local_78[0] = puVar12;
  local_78[0][4] = puVar11;
  local_78[0][3] = uVar14;
  local_78[0][2] = uVar13;
  if (puVar11[1] != 0) {
    puVar11 = &DAT_001f1910;
  }
  FUN_004783a8(pvVar7,&local_90,local_78);
  if ((code *)local_60[1] != (code *)0x0) {
    (*(code *)local_60[1])(local_78[0]);
  }
  if ((code *)puVar11[1] != (code *)0x0) {
    (*(code *)puVar11[1])(uVar10);
  }
  FUN_0040dcf8(&local_90);
  if (*(long *)(lVar6 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0041b72c  FUN_0041b72c =====

void FUN_0041b72c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *__src;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    puVar2 = (undefined8 *)*param_2;
    uVar5 = param_2[1];
    if (uVar5 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)uVar5;
      puVar7 = param_1;
    }
    else {
      if (0x7fffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar5 | 0xf) + 1;
      puVar7 = (undefined8 *)operator_new(uVar1);
      *param_1 = puVar7;
      param_1[1] = uVar5;
      param_1[2] = uVar1 | 0x8000000000000000;
    }
    if ((puVar7 <= puVar2) && (puVar2 < (undefined8 *)((long)puVar7 + uVar5 + 1))) {
LAB_0041b8f4:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(puVar7,puVar2,uVar5 + 1);
  }
  else {
    uVar10 = param_2[1];
    uVar9 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar10;
    *param_1 = uVar9;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  uVar5 = param_2[4] - param_2[3];
  if (uVar5 != 0) {
    if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar5 >> 3) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar6 = operator_new(uVar5);
    param_1[3] = pvVar6;
    param_1[4] = pvVar6;
    param_1[5] = (void *)((long)pvVar6 + ((long)uVar5 >> 3) * 8);
    lVar3 = param_2[3];
    lVar4 = param_2[4];
    if (lVar3 != lVar4) {
      lVar8 = 0;
      do {
        puVar2 = (undefined8 *)(lVar3 + lVar8);
        puVar7 = (undefined8 *)((long)pvVar6 + lVar8);
        if (*(char *)((long)puVar2 + 0x17) < '\0') {
          __src = (undefined8 *)*puVar2;
          uVar5 = puVar2[1];
          if (uVar5 < 0x17) {
            *(char *)((long)pvVar6 + lVar8 + 0x17) = (char)uVar5;
          }
          else {
            if (0x7fffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            uVar1 = (uVar5 | 0xf) + 1;
            puVar7 = (undefined8 *)operator_new(uVar1);
            puVar2 = (undefined8 *)((long)pvVar6 + lVar8);
            puVar2[1] = uVar5;
            puVar2[2] = uVar1 | 0x8000000000000000;
            *puVar2 = puVar7;
          }
          if ((puVar7 <= __src) && (__src < (undefined8 *)((long)puVar7 + uVar5 + 1)))
          goto LAB_0041b8f4;
          memmove(puVar7,__src,uVar5 + 1);
        }
        else {
          uVar10 = puVar2[1];
          uVar9 = *puVar2;
          puVar7[2] = puVar2[2];
          puVar7[1] = uVar10;
          *puVar7 = uVar9;
        }
        lVar8 = lVar8 + 0x18;
      } while (lVar3 + lVar8 != lVar4);
      pvVar6 = (void *)((long)pvVar6 + lVar8);
    }
    param_1[4] = pvVar6;
  }
  return;
}


// ===== 0041b928  FUN_0041b928 =====

/* WARNING: Removing unreachable block (ram,0x0041baac) */
/* WARNING: Removing unreachable block (ram,0x0041bb3c) */

void FUN_0041b928(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *__src;
  ulong uVar4;
  long lVar5;
  void *pvVar6;
  undefined8 *__dest;
  void *pvVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  void *local_80;
  void *local_78;
  void *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  plVar9 = (long *)*param_1;
  param_2[2] = 0;
  pvVar3 = (void *)*param_2;
  pvVar7 = (void *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  lVar8 = *plVar9;
  uVar4 = (long)pvVar7 - (long)pvVar3;
  local_80 = (void *)0x0;
  local_78 = (void *)0x0;
  local_70 = (void *)0x0;
  if (uVar4 != 0) {
    if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar4 >> 3) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar6 = operator_new(uVar4);
    lVar10 = 0;
    local_70 = (void *)((long)pvVar6 + ((long)uVar4 >> 3) * 8);
    local_80 = pvVar6;
    do {
      puVar2 = (undefined8 *)((long)pvVar3 + lVar10);
      __dest = (undefined8 *)((long)pvVar6 + lVar10);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        __src = (undefined8 *)*puVar2;
        uVar4 = puVar2[1];
        if (uVar4 < 0x17) {
          *(char *)((long)pvVar6 + lVar10 + 0x17) = (char)uVar4;
        }
        else {
          if (0x7fffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar1 = (uVar4 | 0xf) + 1;
          __dest = (undefined8 *)operator_new(uVar1);
          puVar2 = (undefined8 *)((long)pvVar6 + lVar10);
          puVar2[1] = uVar4;
          puVar2[2] = uVar1 | 0x8000000000000000;
          *puVar2 = __dest;
        }
        if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + uVar4 + 1))) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                     ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
        }
        memmove(__dest,__src,uVar4 + 1);
      }
      else {
        uVar12 = puVar2[1];
        uVar11 = *puVar2;
        __dest[2] = puVar2[2];
        __dest[1] = uVar12;
        *__dest = uVar11;
      }
      lVar10 = lVar10 + 0x18;
    } while ((void *)((long)pvVar3 + lVar10) != pvVar7);
    local_78 = (void *)((long)pvVar6 + lVar10);
  }
  (*(code *)plVar9[3])(plVar9 + 1,&local_80);
  if (local_80 != (void *)0x0) {
    for (; local_78 != local_80; local_78 = (void *)((long)local_78 + -0x18)) {
    }
    local_78 = local_80;
    operator_delete(local_80);
  }
  pvVar6 = *(void **)(lVar8 + 0x20);
  *(undefined8 *)(lVar8 + 0x20) = 0;
  if (pvVar6 != (void *)0x0) {
    FUN_0047808c(pvVar6);
    operator_delete(pvVar6);
  }
  if (pvVar3 != (void *)0x0) {
    for (; pvVar7 != pvVar3; pvVar7 = (void *)((long)pvVar7 + -0x18)) {
    }
    operator_delete(pvVar3);
  }
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0041bb7c  FUN_0041bb7c =====

undefined8 * FUN_0041bb7c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = (undefined8 *)operator_new(0x28);
  uVar3 = param_1[3];
  puVar1 = (undefined8 *)param_1[4];
  uVar6 = param_1[2];
  uVar5 = param_1[1];
  *puVar2 = *param_1;
  pcVar4 = (code *)*puVar1;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  puVar2[3] = uVar3;
  puVar2[4] = puVar1;
  if (pcVar4 != (code *)0x0) {
    uVar3 = (*pcVar4)(param_1[1]);
    puVar2[1] = uVar3;
  }
  return puVar2;
}


// ===== 0041bbdc  FUN_0041bbdc =====

void FUN_0041bbdc(void *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)((long)param_1 + 0x20) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 0041bc10  FUN_0041bc10 =====

void FUN_0041bc10(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[8] + 8);
  *param_1 = &PTR_FUN_00d1abf0;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[5]);
  }
  FUN_0040dcf8(param_1 + 2);
  return;
}


// ===== 0041bc50  FUN_0041bc50 =====

void FUN_0041bc50(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[8] + 8);
  *param_1 = &PTR_FUN_00d1abf0;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[5]);
  }
  FUN_0040dcf8(param_1 + 2);
  operator_delete(param_1);
  return;
}


// ===== 0041bc98  FUN_0041bc98 =====

void FUN_0041bc98(long param_1)

{
  FUN_0041b55c(param_1 + 8);
  return;
}


// ===== 0041bca0  FUN_0041bca0 =====

void FUN_0041bca0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 0041bcac  FUN_0041bcac =====

void FUN_0041bcac(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1ac18;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041bd04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[5] + 8))(param_1[2]);
    return;
  }
  return;
}


// ===== 0041bd14  FUN_0041bd14 =====

void FUN_0041bd14(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1ac18;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
    (**(code **)(param_1[5] + 8))(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0041bd78  FUN_0041bd78 =====

void FUN_0041bd78(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 *local_58;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  uVar6 = FUN_005ce36c();
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar7 = *puVar8;
  plVar2 = (long *)puVar8[1];
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_60 = *(undefined8 *)(param_1 + 0x20);
  local_58 = *(undefined8 **)(param_1 + 0x28);
  uStack_68 = *(undefined8 *)(param_1 + 0x18);
  local_70 = *(undefined8 *)(param_1 + 0x10);
  if ((code *)*local_58 != (code *)0x0) {
    local_70 = (*(code *)*local_58)(*(undefined8 *)(param_1 + 0x10));
  }
  FUN_004505ac(uVar7,&local_70);
  if ((code *)local_58[1] != (code *)0x0) {
    (*(code *)local_58[1])(local_70);
  }
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
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
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  uVar7 = FUN_005ce36c();
  (**(code **)(param_1 + 0x58))
            (param_1 + 0x48,param_1 + 0x30,*(undefined8 *)(param_1 + 0x68),uVar6,uVar7);
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0041be94  FUN_0041be94 =====

void FUN_0041be94(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1ac40;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041beb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[2]);
    return;
  }
  return;
}


// ===== 0041beb8  FUN_0041beb8 =====

void FUN_0041beb8(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1ac40;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0041bef8  FUN_0041bef8 =====

void FUN_0041bef8(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 *local_48;
  long local_38;
  
  lVar6 = tpidr_el0;
  local_38 = *(long *)(lVar6 + 0x28);
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar2 = *puVar7;
  plVar3 = (long *)puVar7[1];
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_50 = *(undefined8 *)(param_1 + 0x20);
  local_48 = *(undefined8 **)(param_1 + 0x28);
  uStack_58 = *(undefined8 *)(param_1 + 0x18);
  local_60 = *(undefined8 *)(param_1 + 0x10);
  if ((code *)*local_48 != (code *)0x0) {
    local_60 = (*(code *)*local_48)(*(undefined8 *)(param_1 + 0x10));
  }
  FUN_004505ac(uVar2,&local_60);
  if ((code *)local_48[1] != (code *)0x0) {
    (*(code *)local_48[1])(local_60);
  }
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
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
  if (*(long *)(lVar6 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0041bfe0  FUN_0041bfe0 =====

void FUN_0041bfe0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 0041bfec  FUN_0041bfec =====

void FUN_0041bfec(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1ac68;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041c044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[5] + 8))(param_1[2]);
    return;
  }
  return;
}


// ===== 0041c054  FUN_0041c054 =====

void FUN_0041c054(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1ac68;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
    (**(code **)(param_1[5] + 8))(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0041c0b8  FUN_0041c0b8 =====

void FUN_0041c0b8(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 *local_58;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  uVar6 = FUN_005ce36c();
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar7 = *puVar8;
  plVar2 = (long *)puVar8[1];
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_60 = *(undefined8 *)(param_1 + 0x20);
  local_58 = *(undefined8 **)(param_1 + 0x28);
  uStack_68 = *(undefined8 *)(param_1 + 0x18);
  local_70 = *(undefined8 *)(param_1 + 0x10);
  if ((code *)*local_58 != (code *)0x0) {
    local_70 = (*(code *)*local_58)(*(undefined8 *)(param_1 + 0x10));
  }
  FUN_00453adc(uVar7,&local_70);
  if ((code *)local_58[1] != (code *)0x0) {
    (*(code *)local_58[1])(local_70);
  }
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
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
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  uVar7 = FUN_005ce36c();
  (**(code **)(param_1 + 0x58))
            (param_1 + 0x48,param_1 + 0x30,*(undefined8 *)(param_1 + 0x68),uVar6,uVar7);
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0041c1d4  FUN_0041c1d4 =====

void FUN_0041c1d4(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1ac90;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041c1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[2]);
    return;
  }
  return;
}


// ===== 0041c1f8  FUN_0041c1f8 =====

void FUN_0041c1f8(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1ac90;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0041c238  FUN_0041c238 =====

void FUN_0041c238(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 *local_48;
  long local_38;
  
  lVar6 = tpidr_el0;
  local_38 = *(long *)(lVar6 + 0x28);
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar2 = *puVar7;
  plVar3 = (long *)puVar7[1];
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_50 = *(undefined8 *)(param_1 + 0x20);
  local_48 = *(undefined8 **)(param_1 + 0x28);
  uStack_58 = *(undefined8 *)(param_1 + 0x18);
  local_60 = *(undefined8 *)(param_1 + 0x10);
  if ((code *)*local_48 != (code *)0x0) {
    local_60 = (*(code *)*local_48)(*(undefined8 *)(param_1 + 0x10));
  }
  FUN_00453adc(uVar2,&local_60);
  if ((code *)local_48[1] != (code *)0x0) {
    (*(code *)local_48[1])(local_60);
  }
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
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
  if (*(long *)(lVar6 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0041c320  FUN_0041c320 =====

void FUN_0041c320(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 0041c32c  FUN_0041c32c =====

void FUN_0041c32c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 0041c338  FUN_0041c338 =====

void FUN_0041c338(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0x14] + 8);
  *param_1 = &PTR_FUN_00d1acb8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[0x11]);
  }
  if (*(char *)((long)param_1 + 0x87) < '\0') {
    operator_delete((void *)param_1[0xe]);
  }
  if (*(code **)(param_1[0xd] + 8) != (code *)0x0) {
    (**(code **)(param_1[0xd] + 8))(param_1[10]);
  }
  if (*(code **)(param_1[9] + 8) != (code *)0x0) {
    (**(code **)(param_1[9] + 8))(param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041c3b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[5] + 8))(param_1[2]);
    return;
  }
  return;
}


// ===== 0041c3c8  FUN_0041c3c8 =====

void FUN_0041c3c8(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0x14] + 8);
  *param_1 = &PTR_FUN_00d1acb8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[0x11]);
  }
  if (*(char *)((long)param_1 + 0x87) < '\0') {
    operator_delete((void *)param_1[0xe]);
  }
  if (*(code **)(param_1[0xd] + 8) != (code *)0x0) {
    (**(code **)(param_1[0xd] + 8))(param_1[10]);
  }
  if (*(code **)(param_1[9] + 8) != (code *)0x0) {
    (**(code **)(param_1[9] + 8))(param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
    (**(code **)(param_1[5] + 8))(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0041c454  FUN_0041c454 =====

void FUN_0041c454(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_005ce36c();
  FUN_0041c4ac(param_1 + 8);
  uVar2 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x0041c4a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x98))
            (param_1 + 0x88,param_1 + 0x70,*(undefined8 *)(param_1 + 0xa8),uVar1,uVar2);
  return;
}


// ===== 0041c4ac  FUN_0041c4ac =====

void FUN_0041c4ac(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long local_a0;
  long lStack_98;
  long local_90;
  undefined8 *local_88;
  long local_80;
  long lStack_78;
  long local_70;
  undefined8 *local_68;
  long local_60;
  long lStack_58;
  long local_50;
  undefined8 *local_48;
  long local_38;
  
  lVar6 = tpidr_el0;
  local_38 = *(long *)(lVar6 + 0x28);
  uVar2 = **(undefined8 **)(*param_1 + 0x18);
  plVar3 = (long *)(*(undefined8 **)(*param_1 + 0x18))[1];
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_50 = param_1[3];
  local_48 = (undefined8 *)param_1[4];
  lStack_58 = param_1[2];
  local_60 = param_1[1];
  if ((code *)*local_48 != (code *)0x0) {
    local_60 = (*(code *)*local_48)(param_1[1]);
  }
  local_70 = param_1[7];
  local_68 = (undefined8 *)param_1[8];
  lStack_78 = param_1[6];
  local_80 = param_1[5];
  if ((code *)*local_68 != (code *)0x0) {
    local_80 = (*(code *)*local_68)(param_1[5]);
  }
  local_90 = param_1[0xb];
  local_88 = (undefined8 *)param_1[0xc];
  lStack_98 = param_1[10];
  local_a0 = param_1[9];
  if ((code *)*local_88 != (code *)0x0) {
    local_a0 = (*(code *)*local_88)(param_1[9]);
  }
  FUN_004539bc(uVar2,&local_60,&local_80,&local_a0);
  if ((code *)local_88[1] != (code *)0x0) {
    (*(code *)local_88[1])(local_a0);
  }
  if ((code *)local_68[1] != (code *)0x0) {
    (*(code *)local_68[1])(local_80);
  }
  if ((code *)local_48[1] != (code *)0x0) {
    (*(code *)local_48[1])(local_60);
  }
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      lVar7 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_005466cc(plVar3);
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0041c624  FUN_0041c624 =====

void FUN_0041c624(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xd] + 8);
  *param_1 = &PTR_FUN_00d1ace0;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[10]);
  }
  if (*(code **)(param_1[9] + 8) != (code *)0x0) {
    (**(code **)(param_1[9] + 8))(param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041c680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[5] + 8))(param_1[2]);
    return;
  }
  return;
}


// ===== 0041c690  FUN_0041c690 =====

void FUN_0041c690(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xd] + 8);
  *param_1 = &PTR_FUN_00d1ace0;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[10]);
  }
  if (*(code **)(param_1[9] + 8) != (code *)0x0) {
    (**(code **)(param_1[9] + 8))(param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
    (**(code **)(param_1[5] + 8))(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0041c6f8  FUN_0041c6f8 =====

void FUN_0041c6f8(long param_1)

{
  FUN_0041c4ac(param_1 + 8);
  return;
}


// ===== 0041c700  FUN_0041c700 =====

void FUN_0041c700(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d1ad08;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (-1 < *(char *)((long)param_1 + 0x2f)) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 0041c754  FUN_0041c754 =====

void FUN_0041c754(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d1ad08;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0041c7a4  FUN_0041c7a4 =====

void FUN_0041c7a4(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  
  uVar5 = FUN_005ce36c();
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar6 = *puVar7;
  plVar2 = (long *)puVar7[1];
  if (plVar2 == (long *)0x0) {
    FUN_00450418(uVar6,*(undefined1 *)(param_1 + 0x10));
  }
  else {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_00450418(uVar6,*(undefined1 *)(param_1 + 0x10));
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  uVar6 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x0041c850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x40))
            (param_1 + 0x30,param_1 + 0x18,*(undefined8 *)(param_1 + 0x50),uVar5,uVar6);
  return;
}


// ===== 0041c854  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0041c858  FUN_0041c858 =====

void FUN_0041c858(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar2 = *puVar6;
  plVar3 = (long *)puVar6[1];
  if (plVar3 == (long *)0x0) {
    FUN_00450418(uVar2,*(undefined1 *)(param_1 + 0x10));
    return;
  }
  plVar1 = plVar3 + 1;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = *plVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  FUN_00450418(uVar2,*(undefined1 *)(param_1 + 0x10));
  do {
    lVar7 = *plVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar7 != 0) {
    return;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
  FUN_005466cc(plVar3);
  return;
}


// ===== 0041c8e8  FUN_0041c8e8 =====

void FUN_0041c8e8(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d1ad58;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (-1 < *(char *)((long)param_1 + 0x2f)) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 0041c93c  FUN_0041c93c =====

void FUN_0041c93c(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d1ad58;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0041c98c  FUN_0041c98c =====

void FUN_0041c98c(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  
  uVar5 = FUN_005ce36c();
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar6 = *puVar7;
  plVar2 = (long *)puVar7[1];
  if (plVar2 == (long *)0x0) {
    FUN_00450b30(uVar6,*(undefined1 *)(param_1 + 0x10));
  }
  else {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_00450b30(uVar6,*(undefined1 *)(param_1 + 0x10));
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  uVar6 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x0041ca38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x40))
            (param_1 + 0x30,param_1 + 0x18,*(undefined8 *)(param_1 + 0x50),uVar5,uVar6);
  return;
}


// ===== 0041ca3c  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0041ca40  FUN_0041ca40 =====

void FUN_0041ca40(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar2 = *puVar6;
  plVar3 = (long *)puVar6[1];
  if (plVar3 == (long *)0x0) {
    FUN_00450b30(uVar2,*(undefined1 *)(param_1 + 0x10));
    return;
  }
  plVar1 = plVar3 + 1;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = *plVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  FUN_00450b30(uVar2,*(undefined1 *)(param_1 + 0x10));
  do {
    lVar7 = *plVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar7 != 0) {
    return;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
  FUN_005466cc(plVar3);
  return;
}


// ===== 0041cad0  FUN_0041cad0 =====

void FUN_0041cad0(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1ada8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (-1 < *(char *)((long)param_1 + 0x47)) {
    return;
  }
  operator_delete((void *)param_1[6]);
  return;
}


// ===== 0041cb24  FUN_0041cb24 =====

void FUN_0041cb24(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1ada8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0041cb74  FUN_0041cb74 =====

void FUN_0041cb74(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  uVar6 = FUN_005ce36c();
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar7 = *puVar8;
  plVar2 = (long *)puVar8[1];
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_58 = *(undefined4 *)(param_1 + 0x10);
  local_54 = *(undefined1 *)(param_1 + 0x14);
  local_4c = *(undefined1 *)(param_1 + 0x1c);
  local_48 = *(undefined4 *)(param_1 + 0x20);
  local_50 = *(undefined4 *)(param_1 + 0x18);
  local_44 = *(undefined1 *)(param_1 + 0x24);
  local_40 = *(undefined4 *)(param_1 + 0x28);
  local_3c = *(undefined1 *)(param_1 + 0x2c);
  FUN_00450b3c(uVar7,&local_58);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
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
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  uVar7 = FUN_005ce36c();
  (**(code **)(param_1 + 0x58))
            (param_1 + 0x48,param_1 + 0x30,*(undefined8 *)(param_1 + 0x68),uVar6,uVar7);
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0041cc88  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0041cc8c  FUN_0041cc8c =====

void FUN_0041cc8c(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  long local_28;
  
  lVar6 = tpidr_el0;
  local_28 = *(long *)(lVar6 + 0x28);
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar2 = *puVar7;
  plVar3 = (long *)puVar7[1];
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_48 = *(undefined4 *)(param_1 + 0x10);
  local_44 = *(undefined1 *)(param_1 + 0x14);
  local_3c = *(undefined1 *)(param_1 + 0x1c);
  local_38 = *(undefined4 *)(param_1 + 0x20);
  local_40 = *(undefined4 *)(param_1 + 0x18);
  local_34 = *(undefined1 *)(param_1 + 0x24);
  local_30 = *(undefined4 *)(param_1 + 0x28);
  local_2c = *(undefined1 *)(param_1 + 0x2c);
  FUN_00450b3c(uVar2,&local_48);
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
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
  if (*(long *)(lVar6 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0041cd70  FUN_0041cd70 =====

void FUN_0041cd70(undefined8 *param_1)

{
  char cVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1[0xe] + 8);
  *param_1 = &PTR_FUN_00d1adf8;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1[0xb]);
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
    cVar1 = *(char *)((long)param_1 + 0x3f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x3f);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[5]);
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  if (-1 < cVar1) {
    return;
  }
  operator_delete((void *)param_1[2]);
  return;
}


// ===== 0041cdf4  FUN_0041cdf4 =====

void FUN_0041cdf4(undefined8 *param_1)

{
  char cVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1[0xe] + 8);
  *param_1 = &PTR_FUN_00d1adf8;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1[0xb]);
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
    cVar1 = *(char *)((long)param_1 + 0x3f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x3f);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[5]);
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0041ce78  FUN_0041ce78 =====

void FUN_0041ce78(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_005ce36c();
  FUN_0041ced0(param_1 + 8);
  uVar2 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x0041cecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x68))
            (param_1 + 0x58,param_1 + 0x40,*(undefined8 *)(param_1 + 0x78),uVar1,uVar2);
  return;
}


// ===== 0041ced0  FUN_0041ced0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0041ced0(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *******__src;
  undefined1 *__src_00;
  long *plVar3;
  ulong uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined8 *******__dest;
  undefined1 **__dest_00;
  long lVar8;
  undefined8 uVar9;
  undefined1 *local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 *******local_70;
  ulong uStack_68;
  undefined8 local_60;
  long local_58;
  
  __dest_00 = &local_90;
  lVar7 = tpidr_el0;
  local_58 = *(long *)(lVar7 + 0x28);
  lVar8 = **(long **)(*param_1 + 0x18);
  plVar3 = (long *)(*(long **)(*param_1 + 0x18))[1];
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  uVar9 = *(undefined8 *)(lVar8 + 0x17f0);
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __src = (undefined8 *******)param_1[1];
    uVar4 = param_1[2];
    if (uVar4 < 0x17) {
      __dest = &local_70;
      local_60 = CONCAT17((char)uVar4,(undefined7)local_60);
    }
    else {
      if (0x7fffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar2 = (uVar4 | 0xf) + 1;
      __dest = (undefined8 *******)operator_new(uVar2);
      local_60 = uVar2 | 0x8000000000000000;
      local_70 = __dest;
      uStack_68 = uVar4;
    }
    if ((__dest <= __src) && (__src < (undefined8 *******)((long)__dest + uVar4 + 1)))
    goto LAB_0041d0d0;
    memmove(__dest,__src,uVar4 + 1);
    cVar5 = *(char *)((long)param_1 + 0x37);
  }
  else {
    uStack_68 = param_1[2];
    local_70 = (undefined8 *******)param_1[1];
    local_60 = param_1[3];
    cVar5 = *(char *)((long)param_1 + 0x37);
  }
  if (cVar5 < '\0') {
    __src_00 = (undefined1 *)param_1[4];
    uVar4 = param_1[5];
    if (uVar4 < 0x17) {
      local_80 = CONCAT17((char)uVar4,(undefined7)local_80);
    }
    else {
      if (0x7fffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar2 = (uVar4 | 0xf) + 1;
      __dest_00 = (undefined1 **)operator_new(uVar2);
      local_80 = uVar2 | 0x8000000000000000;
      local_90 = (undefined1 *)__dest_00;
      uStack_88 = uVar4;
    }
    if ((__dest_00 <= __src_00) && (__src_00 < (undefined1 *)((long)__dest_00 + uVar4 + 1))) {
LAB_0041d0d0:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest_00,__src_00,uVar4 + 1);
  }
  else {
    uStack_88 = param_1[5];
    local_90 = (undefined1 *)param_1[4];
    local_80 = param_1[6];
  }
  FUN_0044b968(uVar9,&local_70,&local_90);
  if ((long)local_80 < 0) {
    operator_delete(local_90);
  }
  if ((long)local_60 < 0) {
    operator_delete(local_70);
  }
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      lVar8 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_005466cc(plVar3);
    }
  }
  if (*(long *)(lVar7 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0041d104  FUN_0041d104 =====

void FUN_0041d104(undefined8 *param_1)

{
  char cVar1;
  
  *param_1 = &PTR_FUN_00d1ae20;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  if (-1 < cVar1) {
    return;
  }
  operator_delete((void *)param_1[2]);
  return;
}


// ===== 0041d15c  FUN_0041d15c =====

void FUN_0041d15c(undefined8 *param_1)

{
  char cVar1;
  
  *param_1 = &PTR_FUN_00d1ae20;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0041d1b4  FUN_0041d1b4 =====

void FUN_0041d1b4(long param_1)

{
  FUN_0041ced0(param_1 + 8);
  return;
}


// ===== 0041d1bc  FUN_0041d1bc =====

void FUN_0041d1bc(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xf] + 8);
  *param_1 = &PTR_FUN_00d1ae48;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[0xc]);
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  if (*(code **)(param_1[8] + 8) != (code *)0x0) {
    (**(code **)(param_1[8] + 8))(param_1[5]);
  }
  FUN_0040ddcc(param_1 + 2,param_1[3]);
  return;
}


// ===== 0041d224  FUN_0041d224 =====

void FUN_0041d224(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xf] + 8);
  *param_1 = &PTR_FUN_00d1ae48;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[0xc]);
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  if (*(code **)(param_1[8] + 8) != (code *)0x0) {
    (**(code **)(param_1[8] + 8))(param_1[5]);
  }
  FUN_0040ddcc(param_1 + 2,param_1[3]);
  operator_delete(param_1);
  return;
}


// ===== 0041d294  FUN_0041d294 =====

void FUN_0041d294(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_005ce36c();
  FUN_0041d2ec(param_1 + 8);
  uVar2 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x0041d2e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x70))
            (param_1 + 0x60,param_1 + 0x48,*(undefined8 *)(param_1 + 0x80),uVar1,uVar2);
  return;
}


// ===== 0041d2ec  FUN_0041d2ec =====

void FUN_0041d2ec(long *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  uVar1 = **(undefined8 **)(*param_1 + 0x18);
  plVar2 = (long *)(*(undefined8 **)(*param_1 + 0x18))[1];
  if (plVar2 != (long *)0x0) {
    plVar8 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar8 = (long *)param_1[1];
  local_68 = 0;
  uStack_60 = 0;
  local_70 = &local_68;
  while (plVar8 != param_1 + 2) {
    FUN_0041d46c(&local_70,&local_68,plVar8 + 4,plVar8 + 4);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
                 "__x != nullptr","node shouldn\'t be null");
    }
    plVar5 = (long *)plVar8[1];
    plVar9 = plVar8;
    if ((long *)plVar8[1] == (long *)0x0) {
      do {
        plVar8 = (long *)plVar9[2];
        bVar6 = (long *)*plVar8 != plVar9;
        plVar9 = plVar8;
      } while (bVar6);
    }
    else {
      do {
        plVar8 = plVar5;
        plVar5 = (long *)*plVar8;
      } while ((long *)*plVar8 != (long *)0x0);
    }
  }
  FUN_00453cfc(uVar1,&local_70);
  FUN_0040ddcc(&local_70,local_68);
  if (plVar2 != (long *)0x0) {
    plVar8 = plVar2 + 1;
    do {
      lVar7 = *plVar8;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  if (*(char *)(param_1[7] + 0x10) == '\0') {
    (*(code *)param_1[6])(param_1 + 4);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0041d46c  FUN_0041d46c =====

undefined8 * FUN_0041d46c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  puVar2 = (undefined8 *)FUN_0041d544(param_1,param_2,&local_50,auStack_58,param_3);
  puVar5 = (undefined8 *)*puVar2;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new(0xf0);
    FUN_0041d85c(puVar5 + 4,param_4);
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


// ===== 0041d544  FUN_0041d544 =====

long * FUN_0041d544(undefined8 *param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5
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
              if ((uVar3 >> 7 & 1) == 0) goto LAB_0041d68c;
              plVar8 = plVar7 + 1;
              plVar5 = (long *)*plVar8;
              if ((long *)*plVar8 == (long *)0x0) goto LAB_0041d68c;
            }
            plVar8 = plVar7;
            plVar5 = (long *)*plVar7;
          }
          goto LAB_0041d68c;
        }
        plVar4 = (long *)*plVar6;
      }
      plVar7 = plVar8;
      if (plVar4 == (long *)0x0) {
        *param_3 = (long)param_2;
        return plVar6;
      }
      goto LAB_0041d68c;
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
          if ((uVar3 >> 7 & 1) == 0) goto LAB_0041d68c;
          plVar8 = plVar7 + 1;
          plVar5 = (long *)*plVar8;
          if ((long *)*plVar8 == (long *)0x0) goto LAB_0041d68c;
        }
        plVar8 = plVar7;
        plVar5 = (long *)*plVar7;
      }
      goto LAB_0041d68c;
    }
  }
  if (*param_2 == 0) {
    *param_3 = (long)param_2;
    return param_2;
  }
  plVar8 = plVar7 + 1;
LAB_0041d68c:
  *param_3 = (long)plVar7;
  return plVar8;
}


// ===== 0041d7a0  FUN_0041d7a0 =====

undefined8 FUN_0041d7a0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  undefined8 *__s1;
  undefined8 *__s2;
  int iVar3;
  
  uVar1 = param_1[1];
  __s1 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    __s1 = param_1;
  }
  if (__s1 != (undefined8 *)0x0 || uVar1 == 0) {
    uVar2 = param_2[1];
    __s2 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
      __s2 = param_2;
    }
    if ((__s2 != (undefined8 *)0x0) || (uVar2 == 0)) {
      __n = uVar2;
      if (uVar1 <= uVar2) {
        __n = uVar1;
      }
      if ((__n == 0) || (iVar3 = memcmp(__s1,__s2,__n), iVar3 == 0)) {
        if (uVar1 == uVar2) {
          return 0;
        }
        if (uVar1 < uVar2) {
          return 0xff;
        }
      }
      else if (iVar3 < 0) {
        return 0xff;
      }
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
             "__len == 0 || __s != nullptr",
             "string_view::string_view(_CharT *, size_t): received nullptr");
}


// ===== 0041d85c  FUN_0041d85c =====

void FUN_0041d85c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  undefined8 *__dest;
  undefined8 uVar3;
  undefined8 uVar4;
  
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
  FUN_0041d93c(param_1 + 3,param_2 + 3);
  return;
}


// ===== 0041d93c  FUN_0041d93c =====

void FUN_0041d93c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    puVar16 = (undefined8 *)*param_2;
    uVar14 = param_2[1];
    if (uVar14 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)uVar14;
      puVar8 = param_1;
    }
    else {
      if (0x7fffffffffffffef < uVar14) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar17 = (uVar14 | 0xf) + 1;
      puVar8 = (undefined8 *)operator_new(uVar17);
      *param_1 = puVar8;
      param_1[1] = uVar14;
      param_1[2] = uVar17 | 0x8000000000000000;
    }
    if ((puVar8 <= puVar16) && (puVar16 < (undefined8 *)((long)puVar8 + uVar14 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(puVar8,puVar16,uVar14 + 1);
  }
  else {
    uVar19 = param_2[1];
    uVar11 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar19;
    *param_1 = uVar11;
  }
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  FUN_0041dbe0(param_1 + 4,param_2 + 4);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = 0;
  uVar14 = param_2[0xb] - param_2[10];
  if (uVar14 != 0) {
    if ((long)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar9 = (undefined1 *)operator_new(uVar14);
    param_1[10] = puVar9;
    param_1[0xb] = puVar9;
    param_1[0xc] = puVar9 + uVar14;
    puVar12 = (undefined1 *)param_2[10];
    puVar2 = (undefined1 *)param_2[0xb];
    puVar10 = puVar9;
    if (puVar12 != puVar2) {
      uVar14 = (long)puVar2 - (long)puVar12;
      puVar13 = puVar12;
      if ((0x1f < uVar14) && (0x1f < (ulong)((long)puVar9 - (long)puVar12))) {
        uVar15 = uVar14 & 0xffffffffffffffe0;
        puVar16 = (undefined8 *)(puVar9 + 0x10);
        puVar9 = puVar9 + uVar15;
        puVar13 = puVar12 + uVar15;
        puVar8 = (undefined8 *)(puVar12 + 0x10);
        uVar17 = uVar15;
        do {
          puVar7 = puVar8 + -1;
          uVar11 = puVar8[-2];
          uVar20 = puVar8[1];
          uVar19 = *puVar8;
          puVar8 = puVar8 + 4;
          uVar17 = uVar17 - 0x20;
          puVar16[-1] = *puVar7;
          puVar16[-2] = uVar11;
          puVar16[1] = uVar20;
          *puVar16 = uVar19;
          puVar16 = puVar16 + 4;
        } while (uVar17 != 0);
        puVar10 = puVar9;
        if (uVar14 == uVar15) goto LAB_0041da94;
      }
      do {
        puVar12 = puVar13 + 1;
        puVar10 = puVar9 + 1;
        *puVar9 = *puVar13;
        puVar9 = puVar10;
        puVar13 = puVar12;
      } while (puVar12 != puVar2);
    }
LAB_0041da94:
    param_1[0xb] = puVar10;
  }
  uVar11 = param_2[0xd];
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  param_1[0xd] = uVar11;
  uVar5 = *(undefined1 *)(param_2 + 0xf);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x10] = 0;
  lVar1 = param_2[0x10];
  lVar3 = param_2[0x11];
  *(undefined1 *)(param_1 + 0xf) = uVar5;
  uVar14 = lVar3 - lVar1;
  if (uVar14 == 0) goto LAB_0041db60;
  if ((long)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar9 = (undefined1 *)operator_new(uVar14);
  param_1[0x10] = puVar9;
  param_1[0x11] = puVar9;
  param_1[0x12] = puVar9 + uVar14;
  puVar12 = (undefined1 *)param_2[0x10];
  puVar2 = (undefined1 *)param_2[0x11];
  puVar10 = puVar9;
  if (puVar12 != puVar2) {
    uVar14 = (long)puVar2 - (long)puVar12;
    puVar13 = puVar12;
    if ((0x1f < uVar14) && (0x1f < (ulong)((long)puVar9 - (long)puVar12))) {
      uVar15 = uVar14 & 0xffffffffffffffe0;
      puVar16 = (undefined8 *)(puVar9 + 0x10);
      puVar9 = puVar9 + uVar15;
      puVar13 = puVar12 + uVar15;
      puVar8 = (undefined8 *)(puVar12 + 0x10);
      uVar17 = uVar15;
      do {
        puVar7 = puVar8 + -1;
        uVar11 = puVar8[-2];
        uVar20 = puVar8[1];
        uVar19 = *puVar8;
        puVar8 = puVar8 + 4;
        uVar17 = uVar17 - 0x20;
        puVar16[-1] = *puVar7;
        puVar16[-2] = uVar11;
        puVar16[1] = uVar20;
        *puVar16 = uVar19;
        puVar16 = puVar16 + 4;
      } while (uVar17 != 0);
      puVar10 = puVar9;
      if (uVar14 == uVar15) goto LAB_0041db5c;
    }
    do {
      puVar12 = puVar13 + 1;
      puVar10 = puVar9 + 1;
      *puVar9 = *puVar13;
      puVar9 = puVar10;
      puVar13 = puVar12;
    } while (puVar12 != puVar2);
  }
LAB_0041db5c:
  param_1[0x11] = puVar10;
LAB_0041db60:
  uVar5 = *(undefined1 *)((long)param_2 + 0xa4);
  uVar6 = *(undefined1 *)(param_2 + 0x13);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 0x16);
  *(undefined1 *)((long)param_1 + 0xa4) = uVar5;
  uVar18 = *(undefined4 *)(param_2 + 0x15);
  *(undefined1 *)(param_1 + 0x13) = uVar6;
  uVar5 = *(undefined1 *)((long)param_2 + 0xac);
  uVar6 = *(undefined1 *)((long)param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0x16) = uVar4;
  *(undefined4 *)(param_1 + 0x15) = uVar18;
  *(undefined1 *)((long)param_1 + 0xac) = uVar5;
  *(undefined1 *)((long)param_1 + 0xb4) = uVar6;
  return;
}


// ===== 0041dbe0  FUN_0041dbe0 =====

void FUN_0041dbe0(undefined4 *param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  undefined1 uVar3;
  undefined8 *__dest;
  undefined8 uVar4;
  undefined8 uVar5;
  
  __dest = (undefined8 *)(param_1 + 2);
  *param_1 = *param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    __src = *(undefined8 **)(param_2 + 2);
    uVar2 = *(ulong *)(param_2 + 4);
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
      *(undefined8 **)(param_1 + 2) = __dest;
      *(ulong *)(param_1 + 4) = uVar2;
      *(ulong *)(param_1 + 6) = uVar1 | 0x8000000000000000;
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
    uVar5 = *(undefined8 *)(param_2 + 4);
    uVar4 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar5;
    *__dest = uVar4;
  }
  uVar3 = *(undefined1 *)(param_2 + 10);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 10) = uVar3;
  return;
}


// ===== 0041dcd0  FUN_0041dcd0 =====

void FUN_0041dcd0(long *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0x126,
               "__root != nullptr","Root of the tree shouldn\'t be null");
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0x127,
               "__x != nullptr","Can\'t attach null node to a leaf");
  }
  bVar1 = param_2 == param_1;
  *(bool *)(param_2 + 3) = bVar1;
  do {
    if ((bVar1) || (plVar3 = (long *)param_2[2], (char)plVar3[3] != '\0')) {
      return;
    }
    plVar2 = (long *)plVar3[2];
    plVar5 = (long *)*plVar2;
    if (plVar5 == plVar3) {
      if ((plVar2[1] == 0) || (plVar5 = (long *)(plVar2[1] + 0x18), *(char *)plVar5 != '\0')) {
        if ((long *)*plVar3 == param_2) {
          *(undefined1 *)(plVar3 + 3) = 1;
          *(undefined1 *)(plVar2 + 3) = 0;
        }
        else {
          plVar5 = (long *)plVar3[1];
          if (plVar5 == (long *)0x0) goto LAB_0041df0c;
          lVar4 = *plVar5;
          plVar3[1] = lVar4;
          if (lVar4 != 0) {
            *(long **)(lVar4 + 0x10) = plVar3;
            plVar2 = (long *)plVar3[2];
          }
          plVar5[2] = (long)plVar2;
          ((undefined8 *)plVar3[2])[*(long **)plVar3[2] != plVar3] = plVar5;
          plVar3[2] = (long)plVar5;
          plVar2 = (long *)plVar5[2];
          *plVar5 = (long)plVar3;
          *(undefined1 *)(plVar5 + 3) = 1;
          plVar3 = (long *)*plVar2;
          *(undefined1 *)(plVar2 + 3) = 0;
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0x10d,
                       "__x->__left_ != nullptr","node should have a left child");
          }
        }
        lVar4 = plVar3[1];
        *plVar2 = lVar4;
        if (lVar4 != 0) {
          *(long **)(lVar4 + 0x10) = plVar2;
        }
        plVar3[2] = plVar2[2];
        ((undefined8 *)plVar2[2])[*(long **)plVar2[2] != plVar2] = plVar3;
        plVar3[1] = (long)plVar2;
LAB_0041deb0:
        plVar2[2] = (long)plVar3;
        return;
      }
    }
    else if ((plVar5 == (long *)0x0) || (plVar5 = plVar5 + 3, (char)*plVar5 != '\0')) {
      if ((long *)*plVar3 == param_2) {
        lVar4 = param_2[1];
        *plVar3 = lVar4;
        if (lVar4 != 0) {
          *(long **)(lVar4 + 0x10) = plVar3;
          plVar2 = (long *)plVar3[2];
        }
        param_2[2] = (long)plVar2;
        ((undefined8 *)plVar3[2])[*(long **)plVar3[2] != plVar3] = param_2;
        plVar3[2] = (long)param_2;
        plVar2 = (long *)param_2[2];
        param_2[1] = (long)plVar3;
        plVar3 = param_2;
      }
      plVar5 = (long *)plVar2[1];
      *(undefined1 *)(plVar3 + 3) = 1;
      *(undefined1 *)(plVar2 + 3) = 0;
      if (plVar5 == (long *)0x0) {
LAB_0041df0c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xf8,
                   "__x->__right_ != nullptr","node should have a right child");
      }
      lVar4 = *plVar5;
      plVar2[1] = lVar4;
      if (lVar4 != 0) {
        *(long **)(lVar4 + 0x10) = plVar2;
      }
      plVar5[2] = plVar2[2];
      ((undefined8 *)plVar2[2])[*(long **)plVar2[2] != plVar2] = plVar5;
      *plVar5 = (long)plVar2;
      plVar3 = plVar5;
      goto LAB_0041deb0;
    }
    bVar1 = plVar2 == param_1;
    *(undefined1 *)(plVar3 + 3) = 1;
    *(bool *)(plVar2 + 3) = bVar1;
    *(char *)plVar5 = '\x01';
    param_2 = plVar2;
  } while( true );
}


// ===== 0041df34  FUN_0041df34 =====

void FUN_0041df34(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[8] + 8);
  *param_1 = &PTR_FUN_00d1ae70;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[5]);
  }
  FUN_0040ddcc(param_1 + 2,param_1[3]);
  return;
}


// ===== 0041df78  FUN_0041df78 =====

void FUN_0041df78(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[8] + 8);
  *param_1 = &PTR_FUN_00d1ae70;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[5]);
  }
  FUN_0040ddcc(param_1 + 2,param_1[3]);
  operator_delete(param_1);
  return;
}


// ===== 0041dfc4  FUN_0041dfc4 =====

void FUN_0041dfc4(long param_1)

{
  FUN_0041d2ec(param_1 + 8);
  return;
}


// ===== 0041dfcc  FUN_0041dfcc =====

void FUN_0041dfcc(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d1ae98;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (-1 < *(char *)((long)param_1 + 0x2f)) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 0041e020  FUN_0041e020 =====

void FUN_0041e020(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[9] + 8);
  *param_1 = &PTR_FUN_00d1ae98;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0041e070  FUN_0041e070 =====

void FUN_0041e070(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  
  uVar4 = FUN_005ce36c();
  plVar6 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar7 = *plVar6;
  plVar6 = (long *)plVar6[1];
  if (plVar6 == (long *)0x0) {
    *(undefined4 *)(lVar7 + 0x1820) = *(undefined4 *)(param_1 + 0x10);
  }
  else {
    plVar1 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(undefined4 *)(lVar7 + 0x1820) = *(undefined4 *)(param_1 + 0x10);
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  uVar5 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x0041e11c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x40))
            (param_1 + 0x30,param_1 + 0x18,*(undefined8 *)(param_1 + 0x50),uVar4,uVar5);
  return;
}


// ===== 0041e120  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0041e124  FUN_0041e124 =====

void FUN_0041e124(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  lVar5 = *plVar4;
  plVar4 = (long *)plVar4[1];
  if (plVar4 == (long *)0x0) {
    *(undefined4 *)(lVar5 + 0x1820) = *(undefined4 *)(param_1 + 0x10);
  }
  else {
    plVar1 = plVar4 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(undefined4 *)(lVar5 + 0x1820) = *(undefined4 *)(param_1 + 0x10);
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


// ===== 0041e1a4  FUN_0041e1a4 =====

void FUN_0041e1a4(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1aee8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041e1fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[5] + 8))(param_1[2]);
    return;
  }
  return;
}


// ===== 0041e20c  FUN_0041e20c =====

void FUN_0041e20c(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1aee8;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
    (**(code **)(param_1[5] + 8))(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0041e270  FUN_0041e270 =====

void FUN_0041e270(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  
  uVar5 = FUN_005ce36c();
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar6 = *puVar7;
  plVar2 = (long *)puVar7[1];
  if (plVar2 == (long *)0x0) {
    FUN_00450e68(uVar6);
  }
  else {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_00450e68(uVar6);
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  (**(code **)(param_1 + 0x20))(param_1 + 0x10);
  uVar6 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x0041e320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x58))
            (param_1 + 0x48,param_1 + 0x30,*(undefined8 *)(param_1 + 0x68),uVar5,uVar6);
  return;
}


// ===== 0041e324  FUN_0041e324 =====

void FUN_0041e324(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1af10;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041e340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[2]);
    return;
  }
  return;
}


// ===== 0041e348  FUN_0041e348 =====

void FUN_0041e348(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1af10;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0041e388  FUN_0041e388 =====

void FUN_0041e388(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar2 = *puVar6;
  plVar3 = (long *)puVar6[1];
  if (plVar3 == (long *)0x0) {
    FUN_00450e68(uVar2);
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
    FUN_00450e68(uVar2);
    do {
      lVar7 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_005466cc(plVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0041e40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(param_1 + 0x10);
  return;
}


// ===== 0041e410  FUN_0041e410 =====

void FUN_0041e410(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1af38;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041e468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[5] + 8))(param_1[2]);
    return;
  }
  return;
}


// ===== 0041e478  FUN_0041e478 =====

void FUN_0041e478(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1af38;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
    (**(code **)(param_1[5] + 8))(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0041e4dc  FUN_0041e4dc =====

void FUN_0041e4dc(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  
  uVar5 = FUN_005ce36c();
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar6 = *puVar7;
  plVar2 = (long *)puVar7[1];
  if (plVar2 == (long *)0x0) {
    FUN_004510d8(uVar6);
  }
  else {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_004510d8(uVar6);
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  (**(code **)(param_1 + 0x20))(param_1 + 0x10);
  uVar6 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x0041e58c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x58))
            (param_1 + 0x48,param_1 + 0x30,*(undefined8 *)(param_1 + 0x68),uVar5,uVar6);
  return;
}


// ===== 0041e590  FUN_0041e590 =====

void FUN_0041e590(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1af60;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041e5ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[2]);
    return;
  }
  return;
}


// ===== 0041e5b4  FUN_0041e5b4 =====

void FUN_0041e5b4(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1af60;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0041e5f4  FUN_0041e5f4 =====

void FUN_0041e5f4(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  uVar2 = *puVar6;
  plVar3 = (long *)puVar6[1];
  if (plVar3 == (long *)0x0) {
    FUN_004510d8(uVar2);
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
    FUN_004510d8(uVar2);
    do {
      lVar7 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_005466cc(plVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0041e678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(param_1 + 0x10);
  return;
}


// ===== 0041e67c  FUN_0041e67c =====

void FUN_0041e67c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 0041e688  FUN_0041e688 =====

void FUN_0041e688(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1af88;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041e6e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[5] + 8))(param_1[2]);
    return;
  }
  return;
}


// ===== 0041e6f0  FUN_0041e6f0 =====

void FUN_0041e6f0(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1af88;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
    (**(code **)(param_1[5] + 8))(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0041e754  FUN_0041e754 =====

void FUN_0041e754(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_005ce36c();
  FUN_0041e7ac(param_1 + 8);
  uVar2 = FUN_005ce36c();
                    /* WARNING: Could not recover jumptable at 0x0041e7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x58))
            (param_1 + 0x48,param_1 + 0x30,*(undefined8 *)(param_1 + 0x68),uVar1,uVar2);
  return;
}


// ===== 0041e7ac  FUN_0041e7ac =====

/* WARNING: Removing unreachable block (ram,0x0041e88c) */

void FUN_0041e7ac(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  void *local_60;
  void *local_58;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  if (*(char *)(param_1[4] + 0x10) == '\0') {
    uVar2 = **(undefined8 **)(*param_1 + 0x18);
    plVar3 = (long *)(*(undefined8 **)(*param_1 + 0x18))[1];
    if (plVar3 == (long *)0x0) {
      FUN_00453d9c(&local_60,uVar2);
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
      FUN_00453d9c(&local_60,uVar2);
      do {
        lVar7 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        FUN_005466cc(plVar3);
      }
    }
    (*(code *)param_1[3])(param_1 + 1,&local_60);
    if (local_60 != (void *)0x0) {
      for (; local_58 != local_60; local_58 = (void *)((long)local_58 + -0x18)) {
      }
      local_58 = local_60;
      operator_delete(local_60);
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0041e8d0  FUN_0041e8d0 =====

void FUN_0041e8d0(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1afb0;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041e8ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[2]);
    return;
  }
  return;
}


// ===== 0041e8f4  FUN_0041e8f4 =====

void FUN_0041e8f4(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1afb0;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0041e934  FUN_0041e934 =====

void FUN_0041e934(long param_1)

{
  FUN_0041e7ac(param_1 + 8);
  return;
}


// ===== 0041e93c  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0041e940  FUN_0041e940 =====

void FUN_0041e940(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  plVar11 = *(long **)(param_1 + 8);
  uVar6 = FUN_005ce36c();
  uVar8 = **(undefined8 **)(*plVar11 + 0x18);
  plVar2 = (long *)(*(undefined8 **)(*plVar11 + 0x18))[1];
  if (plVar2 == (long *)0x0) {
    plVar7 = (long *)FUN_0044de5c(uVar8,*(undefined4 *)plVar11[1]);
  }
  else {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar7 = (long *)FUN_0044de5c(uVar8,*(undefined4 *)plVar11[1]);
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
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  if (*plVar7 != 0) {
    FUN_004f0828(&local_70,*plVar7,*(undefined4 *)plVar11[1]);
    puVar10 = (undefined8 *)plVar11[2];
    if (*(char *)((long)puVar10 + 0x17) < '\0') {
      operator_delete((void *)*puVar10);
    }
    puVar10[2] = local_60;
    puVar10[1] = uStack_68;
    *puVar10 = local_70;
  }
  uVar8 = FUN_005ce36c();
  (*(code *)plVar11[8])(plVar11 + 6,plVar11 + 3,plVar11[10],uVar6,uVar8);
  FUN_00520464(*(undefined8 *)(param_1 + 0x10));
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0041ea80  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 0041ea84  FUN_0041ea84 =====

void FUN_0041ea84(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  plVar10 = *(long **)(param_1 + 8);
  uVar2 = **(undefined8 **)(*plVar10 + 0x18);
  plVar3 = (long *)(*(undefined8 **)(*plVar10 + 0x18))[1];
  if (plVar3 == (long *)0x0) {
    plVar7 = (long *)FUN_0044de5c(uVar2,*(undefined4 *)plVar10[1]);
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
    plVar7 = (long *)FUN_0044de5c(uVar2,*(undefined4 *)plVar10[1]);
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
  if (*plVar7 != 0) {
    FUN_004f0828(&local_60,*plVar7,*(undefined4 *)plVar10[1]);
    puVar9 = (undefined8 *)plVar10[2];
    if (*(char *)((long)puVar9 + 0x17) < '\0') {
      operator_delete((void *)*puVar9);
    }
    puVar9[2] = local_50;
    puVar9[1] = uStack_58;
    *puVar9 = local_60;
  }
  FUN_00520464(*(undefined8 *)(param_1 + 0x10));
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0041eb94  FUN_0041eb94 =====

void FUN_0041eb94(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 0041eba0  FUN_0041eba0 =====

void FUN_0041eba0(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1b028;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041ebf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[5] + 8))(param_1[2]);
    return;
  }
  return;
}


// ===== 0041ec08  FUN_0041ec08 =====

void FUN_0041ec08(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0xc] + 8);
  *param_1 = &PTR_FUN_00d1b028;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(code **)(param_1[5] + 8) != (code *)0x0) {
    (**(code **)(param_1[5] + 8))(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0041ec6c  FUN_0041ec6c =====

void FUN_0041ec6c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_005ce36c();
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  if (*(char *)(puVar3 + 2) == '\0') {
    local_50 = *(undefined8 *)(param_1 + 0x20);
    uStack_58 = *(undefined8 *)(param_1 + 0x18);
    local_60 = *(undefined8 *)(param_1 + 0x10);
    uVar4 = **(undefined8 **)(param_1 + 8);
    local_48 = puVar3;
    if ((code *)*puVar3 != (code *)0x0) {
      local_60 = (*(code *)*puVar3)(*(undefined8 *)(param_1 + 0x10));
    }
    FUN_00514574(uVar4,&local_60);
    if ((code *)local_48[1] != (code *)0x0) {
      (*(code *)local_48[1])(local_60);
    }
  }
  uVar4 = FUN_005ce36c();
  (**(code **)(param_1 + 0x58))
            (param_1 + 0x48,param_1 + 0x30,*(undefined8 *)(param_1 + 0x68),uVar2,uVar4);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0041ed3c  FUN_0041ed3c =====

void FUN_0041ed3c(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1b050;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041ed58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[2]);
    return;
  }
  return;
}


// ===== 0041ed60  FUN_0041ed60 =====

void FUN_0041ed60(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[5] + 8);
  *param_1 = &PTR_FUN_00d1b050;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0041eda0  FUN_0041eda0 =====

void FUN_0041eda0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 *local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  if (*(char *)(puVar2 + 2) == '\0') {
    local_40 = *(undefined8 *)(param_1 + 0x20);
    uStack_48 = *(undefined8 *)(param_1 + 0x18);
    local_50 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = **(undefined8 **)(param_1 + 8);
    local_38 = puVar2;
    if ((code *)*puVar2 != (code *)0x0) {
      local_50 = (*(code *)*puVar2)(*(undefined8 *)(param_1 + 0x10));
    }
    FUN_00514574(uVar3,&local_50);
    if ((code *)local_38[1] != (code *)0x0) {
      (*(code *)local_38[1])(local_50);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0041ee3c  FUN_0041ee3c =====

void FUN_0041ee3c(undefined8 *param_1)

{
  ulong uVar1;
  code *pcVar2;
  
  if (DAT_00d60200 == 0) {
    return;
  }
  pcVar2 = (code *)*param_1;
  if (pcVar2 == (code *)0x0) {
    uVar1 = FUN_004022fc();
    if ((uVar1 & 1) != 0) {
      return;
    }
    FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/krisp/krisp_wrapper.cpp",0x132,
                 "Krisp NC model was set but KrispNCSetModel was not found");
    return;
  }
  if (DAT_00d60200 == 1) {
    uVar1 = (*pcVar2)("small_NC_8k");
  }
  else if (DAT_00d60200 == 3) {
    uVar1 = (*pcVar2)("full_NC");
  }
  else {
    if (DAT_00d60200 != 2) goto LAB_0041eedc;
    uVar1 = (*pcVar2)("small_NC");
  }
  if ((uVar1 & 1) != 0) {
    return;
  }
LAB_0041eedc:
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00623bb0(&DAT_001f4e94,"../../discord_native_lib/src/krisp/krisp_wrapper.cpp",0x10a,
               "Failed to set Krisp NC model: ",DAT_00d60200);
  return;
}


// ===== 0041ef1c  FUN_0041ef1c =====

bool FUN_0041ef1c(long param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  if ((int)*(undefined8 *)(param_1 + 0xb0) == 0) {
    *(undefined4 *)(param_1 + 0xb0) = 1;
    uVar2 = FUN_004ad6b4(param_1 + 0xe0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/krisp/noise_canceller.cpp",0xd2,
                     "Failed to load Krisp");
      }
      uVar3 = 3;
      bVar1 = false;
    }
    else {
      uVar2 = FUN_00417e08();
      if ((uVar2 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/krisp/noise_canceller.cpp",0xf9,
                     "Krisp initialized successfully");
      }
      uVar3 = 2;
      bVar1 = true;
    }
    *(undefined4 *)(param_1 + 0xb0) = uVar3;
  }
  else {
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../discord_native_lib/src/krisp/noise_canceller.cpp",0x8a,
                   "Attempting to initialize while not in NotInitialized state, state: ",
                   *(undefined8 *)(param_1 + 0xb0));
    }
    bVar1 = (int)*(undefined8 *)(param_1 + 0xb0) == 2;
  }
  return bVar1;
}


// ===== 0041f00c  FUN_0041f00c =====

void FUN_0041f00c(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  char *local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 auStack_50 [40];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((*(long *)(param_1 + 0x88) != 0) && (*(code **)(param_1 + 0x110) != (code *)0x0)) &&
     (iVar2 = (**(code **)(param_1 + 0x110))(*(long *)(param_1 + 0x88),&local_68), iVar2 == 0)) {
    FUN_004df1ec(auStack_50,local_68);
    local_70 = "talkTimeMs";
    uVar3 = FUN_004e148c(param_2,&local_70);
    FUN_004dfa04(uVar3,auStack_50);
    FUN_004df880(auStack_50);
    FUN_004df1ec(auStack_50,local_64);
    local_70 = "noNoiseMs";
    uVar3 = FUN_004e148c(param_2,&local_70);
    FUN_004dfa04(uVar3,auStack_50);
    FUN_004df880(auStack_50);
    FUN_004df1ec(auStack_50,local_60);
    local_70 = "lowNoiseMs";
    uVar3 = FUN_004e148c(param_2,&local_70);
    FUN_004dfa04(uVar3,auStack_50);
    FUN_004df880(auStack_50);
    FUN_004df1ec(auStack_50,local_5c);
    local_70 = "mediumNoiseMs";
    uVar3 = FUN_004e148c(param_2,&local_70);
    FUN_004dfa04(uVar3,auStack_50);
    FUN_004df880(auStack_50);
    FUN_004df1ec(auStack_50,local_58);
    local_70 = "highNoiseMs";
    uVar3 = FUN_004e148c(param_2,&local_70);
    FUN_004dfa04(uVar3,auStack_50);
    FUN_004df880(auStack_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0041f174  FUN_0041f174 =====

void FUN_0041f174(int *param_1,undefined8 *param_2,ulong param_3)

{
  long *plVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  undefined1 auStack_98 [8];
  char *local_90;
  char **ppcStack_88;
  undefined8 local_80;
  char **ppcStack_78;
  char *local_70;
  undefined8 *puStack_68;
  char *local_60;
  undefined8 uStack_58;
  undefined1 *local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  if ((int)*(undefined8 *)(param_1 + 0x2c) == 2) {
    plVar1 = (long *)(param_1 + 0x2a);
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar14 = *param_2;
    uVar13 = param_2[3];
    uVar12 = param_2[2];
    *(undefined8 *)(param_1 + 2) = param_2[1];
    *(undefined8 *)param_1 = uVar14;
    *(undefined8 *)(param_1 + 6) = uVar13;
    *(undefined8 *)(param_1 + 4) = uVar12;
    if (((((param_3 & 1) == 0) || (*(long *)(param_1 + 0x3c) == 0)) ||
        (*(long *)(param_1 + 0x42) == 0)) || (*(long *)(param_1 + 0x48) == 0)) {
      bVar6 = false;
      uVar7 = 0;
      uVar10 = *(ulong *)(param_1 + 4);
    }
    else {
      bVar6 = *(long *)(param_1 + 0x4e) != 0;
      uVar7 = *(ulong *)(param_1 + 4);
      uVar10 = 0;
      if (!bVar6) {
        uVar7 = 0;
        uVar10 = *(ulong *)(param_1 + 4);
      }
    }
    lVar8 = *(long *)(param_1 + 8);
    uVar9 = *(long *)(param_1 + 10) - lVar8 >> 1;
    if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
      if (uVar10 < uVar9) {
        *(ulong *)(param_1 + 10) = lVar8 + uVar10 * 2;
      }
    }
    else {
      FUN_0041fd24(param_1 + 8,uVar10 - uVar9);
    }
    lVar8 = *(long *)(param_1 + 0x14);
    uVar9 = *(long *)(param_1 + 0x16) - lVar8 >> 1;
    if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
      if (uVar10 < uVar9) {
        *(ulong *)(param_1 + 0x16) = lVar8 + uVar10 * 2;
      }
    }
    else {
      FUN_0041fd24(param_1 + 0x14,uVar10 - uVar9);
    }
    lVar8 = *(long *)(param_1 + 0xe);
    uVar10 = *(long *)(param_1 + 0x10) - lVar8 >> 2;
    if (uVar7 < uVar10 || uVar7 - uVar10 == 0) {
      if (uVar7 < uVar10) {
        *(ulong *)(param_1 + 0x10) = lVar8 + uVar7 * 4;
      }
    }
    else {
      FUN_0041fe68(param_1 + 0xe,uVar7 - uVar10);
    }
    lVar8 = *(long *)(param_1 + 0x1a);
    uVar10 = *(long *)(param_1 + 0x1c) - lVar8 >> 2;
    if (uVar7 < uVar10 || uVar7 - uVar10 == 0) {
      if (uVar7 < uVar10) {
        *(ulong *)(param_1 + 0x1c) = lVar8 + uVar7 * 4;
      }
    }
    else {
      FUN_0041fe68(param_1 + 0x1a,uVar7 - uVar10);
    }
    if (*param_1 == 0) {
      iVar11 = 0;
      uVar7 = FUN_00417e08();
    }
    else {
      dVar15 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 4));
      iVar11 = (int)(dVar15 / ((double)*param_1 / 1000.0));
      uVar7 = FUN_00417e08();
    }
    if ((uVar7 & 1) == 0) {
      local_50 = auStack_98;
      local_80 = *(undefined8 *)(param_1 + 2);
      local_60 = "../../discord_native_lib/src/krisp/noise_canceller.cpp";
      uStack_58 = 0x251;
      ppcStack_88 = &local_60;
      ppcStack_78 = &local_90;
      local_90 = "Creating noise canceller, channels: ";
      puStack_68 = &local_80;
      local_70 = ", rate ";
      FUN_00623bb0(&DAT_001f4e9b,"../../discord_native_lib/src/krisp/noise_canceller.cpp",0x251);
    }
    if (*(long *)(param_1 + 0x22) != 0) {
      (**(code **)(param_1 + 0x3e))();
    }
    iVar3 = *param_1;
    bVar2 = *(byte *)(param_1 + 0x24);
    FUN_0041ee3c(param_1 + 0x38);
    if (((*(code **)(param_1 + 0x3c) == (code *)0x0) || (*(long *)(param_1 + 0x42) == 0)) ||
       ((*(long *)(param_1 + 0x48) == 0 || (*(long *)(param_1 + 0x4e) == 0)))) {
      if (bVar6 == false) {
        lVar8 = (**(code **)(param_1 + 0x3a))(iVar3,iVar11,bVar2 & 1);
        goto LAB_0041f464;
      }
      param_1[0x22] = 0;
      param_1[0x23] = 0;
      *(bool *)(param_1 + 0x20) = bVar6;
    }
    else {
      lVar8 = (**(code **)(param_1 + 0x3c))(iVar3,iVar11,bVar2 & 1,bVar6);
LAB_0041f464:
      *(long *)(param_1 + 0x22) = lVar8;
      *(bool *)(param_1 + 0x20) = bVar6;
      if (lVar8 != 0) goto LAB_0041f498;
    }
    uVar7 = FUN_004022fc();
    if ((uVar7 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/krisp/noise_canceller.cpp",0x2c2,
                   "Failed to create noise cancellation session");
    }
  }
  else {
    uVar7 = FUN_004022fc();
    if ((uVar7 & 1) == 0) {
      if (*(long *)(lVar5 + 0x28) == local_48) {
        FUN_00623bb0(&DAT_001f4e94,"../../discord_native_lib/src/krisp/noise_canceller.cpp",0x1ba,
                     "Attempting to setup while uninitialized, state: ",
                     *(undefined8 *)(param_1 + 0x2c));
        return;
      }
      goto LAB_0041f4c0;
    }
  }
LAB_0041f498:
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
LAB_0041f4c0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0041f4c4  FUN_0041f4c4 =====

void FUN_0041f4c4(long param_1)

{
  ulong uVar1;
  
  FUN_005467a4(param_1 + 0xb4);
  if ((int)*(undefined8 *)(param_1 + 0xb0) == 2) {
    if (*(long *)(param_1 + 0x88) != 0) {
      (**(code **)(param_1 + 0xf8))();
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  else {
    uVar1 = FUN_004022fc();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../discord_native_lib/src/krisp/noise_canceller.cpp",0x30a,
                   "Attempting to reset while uninitialized, state: ",
                   *(undefined8 *)(param_1 + 0xb0));
    }
  }
  FUN_005467c8(param_1 + 0xb4);
  return;
}


// ===== 0041f560  FUN_0041f560 =====

void FUN_0041f560(int *param_1,long param_2,ulong param_3,undefined8 param_4,ulong param_5,
                 int param_6)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined2 uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  undefined2 *puVar16;
  undefined8 *puVar17;
  int local_78 [2];
  ulong local_70;
  ulong uStack_68;
  long local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  FUN_005467a4(param_1 + 0x2d);
  if ((int)*(undefined8 *)(param_1 + 0x2c) == 2) {
    if ((((*(long *)(param_1 + 0x22) == 0) || (*param_1 != param_6)) ||
        (*(ulong *)(param_1 + 2) != param_5)) ||
       ((*(ulong *)(param_1 + 4) != param_3 || ((char)param_1[0x20] != '\0')))) {
      local_60 = (long)(param_6 / 100);
      local_78[0] = param_6;
      local_70 = param_5;
      uStack_68 = param_3;
      FUN_0041f174(param_1,local_78,0);
    }
    FUN_004332ec(*(undefined8 *)(param_1 + 8),param_2,param_3,param_5);
    lVar8 = FUN_005ce36c();
    if ((*(long *)(param_1 + 0x22) == 0) ||
       (iVar7 = (**(code **)(param_1 + 0x40))
                          (*(long *)(param_1 + 0x22),*(undefined8 *)(param_1 + 8),param_3,
                           *(undefined8 *)(param_1 + 0x14),param_3), iVar7 != 0)) {
      uVar9 = FUN_004022fc();
      if ((uVar9 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/krisp/noise_canceller.cpp",0x492,
                     "Noise cancellation failed");
      }
    }
    else {
      lVar10 = FUN_005ce36c();
      plVar1 = (long *)(param_1 + 0x26);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + (ulong)(lVar10 - lVar8) / 1000;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (param_3 != 0) {
        lVar10 = *(long *)(param_1 + 0x14);
        lVar2 = *(long *)(param_1 + 0x16);
        lVar8 = 0;
        uVar9 = 0;
        uVar12 = param_5 & 0xfffffffffffffff0;
        puVar13 = (undefined8 *)(param_2 + 0x10);
        lVar11 = param_5 * 2;
        do {
          if (param_5 != 0) {
            if ((ulong)(lVar2 - lVar10 >> 1) <= uVar9) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x587,
                         "__n < size()","vector[] index out of bounds");
            }
            if (param_5 < 0x10) {
LAB_0041f784:
              uVar14 = 0;
            }
            else {
              uVar14 = lVar10 + uVar9 * 2;
              if ((param_2 + lVar11 * uVar9 < uVar14 + 2) &&
                 (uVar14 < param_2 + lVar11 + lVar11 * uVar9)) goto LAB_0041f784;
              uVar5 = *(undefined2 *)(lVar10 + uVar9 * 2);
              uVar14 = uVar12;
              puVar17 = puVar13;
              do {
                puVar17[-1] = CONCAT26(uVar5,CONCAT24(uVar5,CONCAT22(uVar5,uVar5)));
                puVar17[-2] = CONCAT26(uVar5,CONCAT24(uVar5,CONCAT22(uVar5,uVar5)));
                puVar17[1] = CONCAT26(uVar5,CONCAT24(uVar5,CONCAT22(uVar5,uVar5)));
                *puVar17 = CONCAT26(uVar5,CONCAT24(uVar5,CONCAT22(uVar5,uVar5)));
                puVar17 = puVar17 + 4;
                uVar14 = uVar14 - 0x10;
              } while (uVar14 != 0);
              uVar14 = uVar12;
              if (uVar12 == param_5) goto LAB_0041f734;
            }
            lVar15 = param_5 - uVar14;
            puVar16 = (undefined2 *)(param_2 + (uVar14 + lVar8) * 2);
            do {
              lVar15 = lVar15 + -1;
              *puVar16 = *(undefined2 *)(lVar10 + uVar9 * 2);
              puVar16 = puVar16 + 1;
            } while (lVar15 != 0);
          }
LAB_0041f734:
          uVar9 = uVar9 + 1;
          puVar13 = (undefined8 *)((long)puVar13 + lVar11);
          lVar8 = lVar8 + param_5;
        } while (uVar9 != param_3);
      }
    }
    plVar1 = (long *)(param_1 + 0x28);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (*(long *)(lVar6 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  FUN_005467c8(param_1 + 0x2d);
  return;
}


// ===== 0041f804  FUN_0041f804 =====

void FUN_0041f804(int *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  float fVar16;
  undefined1 auVar17 [16];
  int local_78 [2];
  ulong local_70;
  ulong uStack_68;
  long local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_005467a4(param_1 + 0x2d);
  if ((int)*(undefined8 *)(param_1 + 0x2c) != 2) goto LAB_0041fb64;
  uVar15 = *(ulong *)(param_2 + 0x48);
  iVar4 = (int)*(ulong *)(param_2 + 0x20) * 100;
  uVar12 = *(ulong *)(param_2 + 0x20) & 0xffffffff;
  uVar13 = uVar15 & 0xffffffff;
  if ((((*(long *)(param_1 + 0x22) == 0) || (*param_1 != iVar4)) ||
      (*(ulong *)(param_1 + 2) != uVar13)) || (*(ulong *)(param_1 + 4) != uVar12)) {
LAB_0041f8c8:
    local_60 = (long)(iVar4 / 100);
    local_78[0] = iVar4;
    local_70 = uVar13;
    uStack_68 = uVar12;
    FUN_0041f174(param_1,local_78,1);
    plVar14 = *(long **)(*(long *)(param_2 + 0x60) + 8);
    if ((char)param_1[0x20] != '\0') goto LAB_0041f910;
LAB_0041fa70:
    if (uVar12 != 0) {
      lVar5 = *(long *)(param_1 + 8);
      lVar6 = *(long *)(param_1 + 10);
      uVar8 = 0;
      do {
        fVar16 = 0.0;
        plVar9 = plVar14;
        for (uVar10 = uVar13; uVar10 != 0; uVar10 = uVar10 - 1) {
          fVar16 = fVar16 + *(float *)(*plVar9 + uVar8 * 4);
          plVar9 = plVar9 + 1;
        }
        if (uVar8 == lVar6 - lVar5 >> 1) goto LAB_0041fc68;
        fVar16 = (float)NEON_fmin(fVar16 / (float)(uVar15 & 0xffffffff),0x46fffe00);
        auVar17._8_8_ = 0x7fffffff7fffffff;
        auVar17._0_8_ = 0x7fffffff7fffffff;
        if (fVar16 <= -32768.0) {
          fVar16 = -32768.0;
        }
        auVar17 = NEON_bsl(auVar17,ZEXT816(0x3f000000),ZEXT416((uint)fVar16),1);
        *(short *)(lVar5 + uVar8 * 2) = (short)(int)(fVar16 + auVar17._0_4_);
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar12);
    }
    lVar5 = FUN_005ce36c();
    if ((*(long *)(param_1 + 0x22) == 0) ||
       (iVar4 = (**(code **)(param_1 + 0x40))
                          (*(long *)(param_1 + 0x22),*(undefined8 *)(param_1 + 8),uVar12,
                           *(undefined8 *)(param_1 + 0x14),uVar12), iVar4 != 0)) {
      uVar12 = FUN_004022fc();
      if ((uVar12 & 1) != 0) goto LAB_0041fb50;
      uVar7 = 0x73a;
      goto LAB_0041fb34;
    }
    lVar6 = FUN_005ce36c();
    plVar9 = (long *)(param_1 + 0x26);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = *plVar9 + (ulong)(lVar6 - lVar5) / 1000;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (uVar12 != 0) {
      lVar5 = *(long *)(param_1 + 0x14);
      lVar6 = *(long *)(param_1 + 0x16);
      uVar8 = 0;
      do {
        if (uVar13 != 0) {
          if ((ulong)(lVar6 - lVar5 >> 1) <= uVar8) goto LAB_0041fc68;
          fVar16 = (float)(int)*(short *)(lVar5 + uVar8 * 2);
          uVar10 = uVar15 & 0xfffffffe;
          plVar9 = plVar14 + 1;
          if (uVar13 < 2) {
            uVar10 = 0;
          }
          else {
            do {
              lVar11 = *plVar9;
              uVar10 = uVar10 - 2;
              *(float *)(plVar9[-1] + uVar8 * 4) = fVar16;
              *(float *)(lVar11 + uVar8 * 4) = fVar16;
              plVar9 = plVar9 + 2;
            } while (uVar10 != 0);
            uVar10 = uVar15 & 0xfffffffe;
            if ((uVar15 & 1) == 0) goto LAB_0041fbf0;
          }
          lVar11 = uVar13 - uVar10;
          plVar9 = plVar14 + uVar10;
          do {
            lVar11 = lVar11 + -1;
            *(float *)(*plVar9 + uVar8 * 4) = fVar16;
            plVar9 = plVar9 + 1;
          } while (lVar11 != 0);
        }
LAB_0041fbf0:
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar12);
    }
  }
  else {
    if ((char)param_1[0x20] == '\0') {
      if (((*(long *)(param_1 + 0x3c) != 0) && (*(long *)(param_1 + 0x42) != 0)) &&
         ((*(long *)(param_1 + 0x48) != 0 && (*(long *)(param_1 + 0x4e) != 0)))) goto LAB_0041f8c8;
      plVar14 = *(long **)(*(long *)(param_2 + 0x60) + 8);
      goto LAB_0041fa70;
    }
    plVar14 = *(long **)(*(long *)(param_2 + 0x60) + 8);
LAB_0041f910:
    if (uVar12 != 0) {
      lVar5 = *(long *)(param_1 + 0xe);
      lVar6 = *(long *)(param_1 + 0x10);
      uVar8 = 0;
      do {
        fVar16 = 0.0;
        plVar9 = plVar14;
        for (uVar10 = uVar13; uVar10 != 0; uVar10 = uVar10 - 1) {
          fVar16 = fVar16 + *(float *)(*plVar9 + uVar8 * 4);
          plVar9 = plVar9 + 1;
        }
        if (uVar8 == lVar6 - lVar5 >> 2) goto LAB_0041fc68;
        fVar16 = (float)NEON_fmin(fVar16 / (float)(uVar15 & 0xffffffff),0x47000000);
        if (fVar16 <= -32768.0) {
          fVar16 = -32768.0;
        }
        *(float *)(lVar5 + uVar8 * 4) = fVar16 * 3.0517578e-05;
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar12);
    }
    lVar5 = FUN_005ce36c();
    if (((*(long *)(param_1 + 0x22) == 0) || (*(code **)(param_1 + 0x42) == (code *)0x0)) ||
       (iVar4 = (**(code **)(param_1 + 0x42))
                          (*(long *)(param_1 + 0x22),*(undefined8 *)(param_1 + 0xe),uVar12,
                           *(undefined8 *)(param_1 + 0x1a),uVar12), iVar4 != 0)) {
      uVar12 = FUN_004022fc();
      if ((uVar12 & 1) == 0) {
        uVar7 = 0x66a;
LAB_0041fb34:
        FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/krisp/noise_canceller.cpp",uVar7,
                     "Noise cancellation failed");
      }
    }
    else {
      lVar6 = FUN_005ce36c();
      plVar9 = (long *)(param_1 + 0x26);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = *plVar9 + (ulong)(lVar6 - lVar5) / 1000;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (uVar12 != 0) {
        lVar5 = *(long *)(param_1 + 0x1a);
        lVar6 = *(long *)(param_1 + 0x1c);
        uVar15 = 0;
        do {
          if (uVar13 != 0) {
            plVar9 = plVar14;
            uVar8 = uVar13;
            if ((ulong)(lVar6 - lVar5 >> 2) <= uVar15) {
LAB_0041fc68:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x587,
                         "__n < size()","vector[] index out of bounds");
            }
            do {
              uVar8 = uVar8 - 1;
              fVar16 = (float)NEON_fmin(*(undefined4 *)(lVar5 + uVar15 * 4),0x3f800000);
              if (fVar16 <= -1.0) {
                fVar16 = -1.0;
              }
              *(float *)(*plVar9 + uVar15 * 4) = fVar16 * 32768.0;
              plVar9 = plVar9 + 1;
            } while (uVar8 != 0);
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 != uVar12);
      }
    }
  }
LAB_0041fb50:
  plVar14 = (long *)(param_1 + 0x28);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar2) {
      *plVar14 = *plVar14 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_0041fb64:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    FUN_005467c8(param_1 + 0x2d);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0041fc94  FUN_0041fc94 =====

void FUN_0041fc94(long param_1,uint param_2)

{
  ulong uVar1;
  
  if ((*(byte *)(param_1 + 0x90) & 1) != (param_2 & 1)) {
    *(uint *)(param_1 + 0x90) = param_2 & 1;
    if ((int)*(undefined8 *)(param_1 + 0xb0) == 2) {
      FUN_0041f4c4(param_1);
      return;
    }
    uVar1 = FUN_004022fc();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../discord_native_lib/src/krisp/noise_canceller.cpp",0x7ba,
                   "Attempting to set enable stats while uninitialized, state: ",
                   *(undefined8 *)(param_1 + 0xb0));
      return;
    }
  }
  return;
}


// ===== 0041fd24  FUN_0041fd24 =====

void FUN_0041fd24(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  void *__dest;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  ulong uVar6;
  void *__src;
  long lVar7;
  
  puVar3 = (undefined2 *)param_1[1];
  if ((ulong)(param_1[2] - (long)puVar3 >> 1) < param_2) {
    __src = (void *)*param_1;
    lVar7 = (long)puVar3 - (long)__src >> 1;
    uVar1 = lVar7 + param_2;
    if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar6 = param_1[2] - (long)__src;
    uVar2 = uVar6;
    if (uVar6 <= uVar1) {
      uVar2 = uVar1;
    }
    if (0x7ffffffffffffffd < uVar6) {
      uVar2 = 0x7fffffffffffffff;
    }
    if (uVar2 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00401ad4();
      }
      __dest = operator_new(uVar2 << 1);
    }
    puVar4 = (undefined2 *)((long)__dest + lVar7 * 2);
    lVar7 = param_2 * 2;
    puVar5 = puVar4;
    do {
      if (puVar5 == (undefined2 *)0x0) {
LAB_0041fe38:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                   ,0x23,"__location != nullptr","null pointer given to construct_at");
      }
      lVar7 = lVar7 + -2;
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    } while (lVar7 != 0);
    memmove(__dest,__src,(long)puVar3 - (long)__src);
    *param_1 = __dest;
    param_1[1] = puVar4 + param_2;
    param_1[2] = (void *)((long)__dest + uVar2 * 2);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    puVar4 = puVar3;
    if (param_2 != 0) {
      puVar4 = puVar3 + param_2;
      lVar7 = param_2 << 1;
      do {
        if (puVar3 == (undefined2 *)0x0) goto LAB_0041fe38;
        lVar7 = lVar7 + -2;
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      } while (lVar7 != 0);
    }
    param_1[1] = puVar4;
  }
  return;
}


// ===== 0041fe68  FUN_0041fe68 =====

void FUN_0041fe68(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  void *__dest;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulong uVar5;
  ulong uVar6;
  void *__src;
  long lVar7;
  
  puVar2 = (undefined4 *)param_1[1];
  if ((ulong)(param_1[2] - (long)puVar2 >> 2) < param_2) {
    __src = (void *)*param_1;
    lVar7 = (long)puVar2 - (long)__src >> 2;
    uVar1 = lVar7 + param_2;
    if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar5 = param_1[2] - (long)__src;
    uVar6 = uVar5 >> 1;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar5) {
      uVar6 = 0x3fffffffffffffff;
    }
    if (uVar6 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar6 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00401ad4();
      }
      __dest = operator_new(uVar6 << 2);
    }
    puVar3 = (undefined4 *)((long)__dest + lVar7 * 4);
    lVar7 = param_2 * 4;
    puVar4 = puVar3;
    do {
      if (puVar4 == (undefined4 *)0x0) {
LAB_0041ff88:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                   ,0x23,"__location != nullptr","null pointer given to construct_at");
      }
      lVar7 = lVar7 + -4;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    } while (lVar7 != 0);
    memmove(__dest,__src,(long)puVar2 - (long)__src);
    *param_1 = __dest;
    param_1[1] = puVar3 + param_2;
    param_1[2] = (void *)((long)__dest + uVar6 * 4);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    puVar3 = puVar2;
    if (param_2 != 0) {
      puVar3 = puVar2 + param_2;
      lVar7 = param_2 << 2;
      do {
        if (puVar2 == (undefined4 *)0x0) goto LAB_0041ff88;
        lVar7 = lVar7 + -4;
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      } while (lVar7 != 0);
    }
    param_1[1] = puVar3;
  }
  return;
}


// ===== 0041ffb8  FUN_0041ffb8 =====

bool FUN_0041ffb8(long param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  if ((int)*(undefined8 *)(param_1 + 0x70) == 0) {
    *(undefined4 *)(param_1 + 0x70) = 1;
    uVar2 = FUN_004ad6b4(param_1 + 0x78);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/krisp/voice_activity_detector.cpp",
                     0xc2,"Failed to load Krisp");
      }
      uVar3 = 3;
      bVar1 = false;
    }
    else {
      uVar2 = FUN_00417e08();
      if ((uVar2 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/krisp/voice_activity_detector.cpp",
                     0xe9,"Krisp initialized successfully");
      }
      uVar3 = 2;
      bVar1 = true;
    }
    *(undefined4 *)(param_1 + 0x70) = uVar3;
  }
  else {
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../discord_native_lib/src/krisp/voice_activity_detector.cpp",
                   0x7a,"Attempting to initialize while not in NotInitialized state, state: ",
                   *(undefined8 *)(param_1 + 0x70));
    }
    bVar1 = (int)*(undefined8 *)(param_1 + 0x70) == 2;
  }
  return bVar1;
}


// ===== 004200a8  FUN_004200a8 =====

void FUN_004200a8(int *param_1,int param_2,ulong param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  if ((int)*(undefined8 *)(param_1 + 0x1c) == 2) {
    plVar1 = (long *)(param_1 + 0x1a);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *param_1 = param_2;
    lVar5 = *(long *)(param_1 + 2);
    uVar6 = *(long *)(param_1 + 4) - lVar5 >> 1;
    if (uVar6 < param_3) {
      FUN_0041fd24(param_1 + 2,param_3 - uVar6);
    }
    else if (param_3 < uVar6) {
      *(ulong *)(param_1 + 4) = lVar5 + param_3 * 2;
    }
    uVar6 = 0;
    if ((long)param_2 != 0) {
      uVar6 = (param_3 * 1000) / (ulong)(long)param_2;
    }
    uVar4 = FUN_00417e08();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4ea6,"../../discord_native_lib/src/krisp/voice_activity_detector.cpp",
                   0x171,"Creating voice activity detector, rate ",param_2,", duration: ",
                   uVar6 & 0xffffffff," [ms]");
    }
    if (*(long *)(param_1 + 8) != 0) {
      (**(code **)(param_1 + 0x30))();
    }
    if ((((*(long *)(param_1 + 0x22) == 0) || (*(long *)(param_1 + 0x28) == 0)) ||
        (*(code **)(param_1 + 0x2e) == (code *)0x0)) || (*(long *)(param_1 + 0x34) == 0)) {
      lVar5 = (**(code **)(param_1 + 0x2c))(param_2,uVar6 & 0xffffffff);
      *(long *)(param_1 + 8) = lVar5;
    }
    else {
      lVar5 = (**(code **)(param_1 + 0x2e))(param_2,uVar6 & 0xffffffff,0);
      *(long *)(param_1 + 8) = lVar5;
    }
    if ((lVar5 == 0) && (uVar6 = FUN_004022fc(), (uVar6 & 1) == 0)) {
      FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/krisp/voice_activity_detector.cpp",
                   0x1ba,"Failed to create voice activity detection session for channel");
      return;
    }
  }
  else {
    uVar6 = FUN_004022fc();
    if ((uVar6 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../discord_native_lib/src/krisp/voice_activity_detector.cpp",
                   0x12a,"Attempting to setup while uninitialized, state: ",
                   *(undefined8 *)(param_1 + 0x1c));
      return;
    }
  }
  return;
}


// ===== 00420254  FUN_00420254 =====

void FUN_00420254(long param_1)

{
  ulong uVar1;
  
  FUN_005467a4(param_1 + 0x28);
  if ((int)*(undefined8 *)(param_1 + 0x70) == 2) {
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(param_1 + 0xc0))();
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  else {
    uVar1 = FUN_004022fc();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../discord_native_lib/src/krisp/voice_activity_detector.cpp",
                   0x202,"Attempting to reset while uninitialized, state: ",
                   *(undefined8 *)(param_1 + 0x70));
    }
  }
  FUN_005467c8(param_1 + 0x28);
  return;
}


// ===== 004202f0  FUN_004202f0 =====

void FUN_004202f0(int *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  
  FUN_005467a4(param_1 + 10);
  if ((int)*(undefined8 *)(param_1 + 0x1c) == 2) {
    uVar7 = *(undefined8 *)(param_2 + 0x28);
    lVar6 = *(long *)(param_2 + 0x18);
    if (((*(long *)(param_1 + 8) == 0) || (*param_1 != *(int *)(param_2 + 0x20))) ||
       (lVar8 = *(long *)(param_1 + 2), lVar6 != *(long *)(param_1 + 4) - lVar8 >> 1)) {
      FUN_004200a8(param_1,*(int *)(param_2 + 0x20),lVar6);
      lVar8 = *(long *)(param_1 + 2);
    }
    uVar4 = FUN_00659108(param_2);
    FUN_004332ec(lVar8,uVar4,lVar6,uVar7);
    if (*(long *)(param_1 + 8) != 0) {
      lVar8 = FUN_005ce36c();
      iVar9 = (**(code **)(param_1 + 0x32))
                        (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 2),lVar6);
      param_1[0x14] = iVar9;
      lVar6 = FUN_005ce36c();
      plVar1 = (long *)(param_1 + 0x16);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + (ulong)(lVar6 - lVar8) / 1000;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = (long *)(param_1 + 0x18);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  else {
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../discord_native_lib/src/krisp/voice_activity_detector.cpp",
                   0x292,"Attempting to process while uninitialized, state: ",
                   *(undefined8 *)(param_1 + 0x1c));
    }
  }
  FUN_005467c8(param_1 + 10);
  return;
}


// ===== 0042044c  FUN_0042044c =====

void FUN_0042044c(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ead,"../../discord_native_lib/src/media/audio_coding/audio_coding.cpp",
                 0x4f1,"Using ","software"," Opus decoder");
  }
  FUN_005d27d8(&local_30);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004204d8  FUN_004204d8 =====

void FUN_004204d8(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ead,"../../discord_native_lib/src/media/audio_coding/audio_coding.cpp",
                 0x579,"Using ","software"," Opus encoder");
  }
  FUN_005d2bb8(&local_30);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00420564  FUN_00420564 =====

void FUN_00420564(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[0x2a] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
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
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((long)param_1 + 0x144) = 0;
  *(undefined8 *)((long)param_1 + 0x13c) = 0;
  return;
}


// ===== 004205b0  FUN_004205b0 =====

void FUN_004205b0(long param_1)

{
  void *pvVar1;
  
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    free(*(void **)(param_1 + 0x60));
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  if (*(void **)(param_1 + 0x68) != (void *)0x0) {
    free(*(void **)(param_1 + 0x68));
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  FUN_00546ab0(param_1 + 0x118);
  pvVar1 = *(void **)(param_1 + 0x100);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x108) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0xe8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0xf0) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0xd0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0xd8) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0xb8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0xc0) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0xa0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0xa8) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x88);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x90) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x70);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x78) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x40);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x48) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x28);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x30) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 0042068c  FUN_0042068c =====

void FUN_0042068c(ulong *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  long lVar4;
  int iVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  void *__src;
  void *pvVar9;
  uint uVar10;
  undefined8 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  uVar7 = param_1[1];
  *(int *)(param_1 + 2) = param_2;
  if ((long)uVar7 < 0) {
    uVar8 = -(-uVar7 / 1000) - (ulong)(500 < -uVar7 % 1000);
  }
  else {
    uVar8 = uVar7 / 1000;
    if (499 < uVar7 % 1000) {
      uVar8 = uVar8 + 1;
    }
  }
  auVar3 = SEXT816((long)(uVar8 * (long)param_2)) * SEXT816(0x20c49ba5e353f7cf);
  uVar1 = (int)(auVar3._8_8_ >> 7) - (auVar3._12_4_ >> 0x1f);
  uVar7 = *param_1;
  if ((int)uVar1 < 2) {
    uVar1 = 1;
  }
  *(uint *)(param_1 + 3) = uVar1;
  if ((long)uVar7 < 0) {
    uVar8 = -(-uVar7 / 1000) - (ulong)(500 < -uVar7 % 1000);
  }
  else {
    uVar8 = uVar7 / 1000;
    if (499 < uVar7 % 1000) {
      uVar8 = uVar8 + 1;
    }
  }
  pvVar9 = (void *)param_1[5];
  __src = (void *)param_1[8];
  auVar3 = SEXT816((long)(uVar8 * (long)param_2)) * SEXT816(0x20c49ba5e353f7cf);
  param_1[6] = (ulong)pvVar9;
  iVar5 = (int)(auVar3._8_8_ >> 7) - (auVar3._12_4_ >> 0x1f);
  uVar2 = uVar1 >> 1;
  param_1[9] = (ulong)__src;
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  uVar10 = iVar5 + uVar1 + uVar2;
  *(int *)((long)param_1 + 0x14) = iVar5;
  *(uint *)((long)param_1 + 0x1c) = uVar2;
  *(uint *)(param_1 + 4) = iVar5 + uVar1;
  if ((ulong)((long)(param_1[7] - (long)pvVar9) >> 2) < (ulong)uVar10) {
    uVar7 = (ulong)uVar10 * 4;
    pvVar6 = operator_new(uVar7);
    param_1[5] = (ulong)pvVar6;
    param_1[6] = (ulong)pvVar6;
    param_1[7] = (ulong)((long)pvVar6 + uVar7);
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
      __src = (void *)param_1[8];
      uVar10 = *(int *)((long)param_1 + 0x1c) + (int)param_1[4];
    }
  }
  if ((ulong)((long)(param_1[10] - (long)__src) >> 2) < (ulong)(long)(int)uVar10) {
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar8 = (long)(int)uVar10 * 4;
    uVar7 = param_1[9];
    pvVar9 = operator_new(uVar8);
    memmove(pvVar9,__src,uVar7 - (long)__src);
    param_1[8] = (ulong)pvVar9;
    param_1[9] = (long)pvVar9 + (uVar7 - (long)__src);
    param_1[10] = (ulong)((long)pvVar9 + uVar8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  if ((void *)param_1[0xc] != (void *)0x0) {
    free((void *)param_1[0xc]);
    param_1[0xc] = 0;
  }
  if ((void *)param_1[0xd] != (void *)0x0) {
    free((void *)param_1[0xd]);
    param_1[0xd] = 0;
  }
  uVar1 = (int)param_1[3] + (int)param_1[4];
  if ((int)uVar1 < 4) {
    uVar1 = 3;
  }
  iVar5 = FUN_005531f0(uVar1 >> 1);
  *(int *)(param_1 + 0xb) = iVar5 << 1;
  uVar7 = FUN_005532c0(iVar5 << 1,0,0,0);
  param_1[0xc] = uVar7;
  uVar7 = FUN_005532c0((int)param_1[0xb],1,0,0);
  param_1[0xd] = uVar7;
  local_60._0_4_ = 0;
  FUN_00420a10(param_1 + 0xe,(long)(int)param_1[0xb],&local_60);
  local_60 = (ulong)local_60._4_4_ << 0x20;
  FUN_00420a10(param_1 + 0x11,(long)(int)param_1[0xb],&local_60);
  iVar5 = (int)param_1[0xb];
  if (iVar5 < 0) {
    iVar5 = iVar5 + 1;
  }
  local_60 = 0;
  FUN_00420bf4(param_1 + 0x14,(long)((iVar5 >> 1) + 1),&local_60);
  iVar5 = (int)param_1[0xb];
  local_60 = 0;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 1;
  }
  FUN_00420bf4(param_1 + 0x17,(long)((iVar5 >> 1) + 1),&local_60);
  local_60 = local_60 & 0xffffffff00000000;
  FUN_00420a10(param_1 + 0x1a,(long)(int)param_1[0xb],&local_60);
  local_60 = local_60 & 0xffffffff00000000;
  FUN_00420a10(param_1 + 0x1d,(long)(int)param_1[4] + 1,&local_60);
  local_60 = local_60 & 0xffffffff00000000;
  FUN_00420a10(param_1 + 0x20,(long)*(int *)((long)param_1 + 0x14) + 1,&local_60);
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00420a10  FUN_00420a10 =====

void FUN_00420a10(undefined8 *param_1,ulong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 uVar11;
  
  uVar3 = param_1[2];
  puVar4 = (undefined4 *)*param_1;
  if ((ulong)((long)(uVar3 - (long)puVar4) >> 2) < param_2) {
    if (puVar4 != (undefined4 *)0x0) {
      param_1[1] = puVar4;
      operator_delete(puVar4);
      uVar3 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (param_2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar5 = uVar3 >> 1;
    if (uVar3 >> 1 <= param_2) {
      uVar5 = param_2;
    }
    if (0x7ffffffffffffffb < uVar3) {
      uVar5 = 0x3fffffffffffffff;
    }
    if (uVar5 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar1 = (undefined4 *)operator_new(uVar5 * 4);
    uVar11 = *param_3;
    puVar4 = puVar1 + param_2;
    uVar3 = param_2 - 1 & 0x3fffffffffffffff;
    *param_1 = puVar1;
    param_1[2] = puVar1 + uVar5;
    if (6 < uVar3) {
      uVar3 = uVar3 + 1;
      puVar8 = (undefined8 *)(puVar1 + 4);
      uVar7 = uVar3 & 0x7ffffffffffffff8;
      uVar5 = uVar7;
      do {
        puVar8[-1] = CONCAT44(uVar11,uVar11);
        puVar8[-2] = CONCAT44(uVar11,uVar11);
        puVar8[1] = CONCAT44(uVar11,uVar11);
        *puVar8 = CONCAT44(uVar11,uVar11);
        puVar8 = puVar8 + 4;
        uVar5 = uVar5 - 8;
      } while (uVar5 != 0);
      puVar1 = puVar1 + uVar7;
      if (uVar3 == uVar7) goto LAB_00420bb0;
    }
    do {
      puVar2 = puVar1 + 1;
      *puVar1 = uVar11;
      puVar1 = puVar2;
    } while (puVar2 != puVar4);
    goto LAB_00420bb0;
  }
  puVar1 = (undefined4 *)param_1[1];
  uVar5 = (long)puVar1 - (long)puVar4 >> 2;
  uVar3 = uVar5;
  if (param_2 <= uVar5) {
    uVar3 = param_2;
  }
  if (uVar3 != 0) {
    puVar2 = puVar4;
    uVar7 = uVar3;
    if ((7 < uVar3) && ((param_3 + 1 <= puVar4 || (puVar4 + uVar3 <= param_3)))) {
      uVar9 = uVar3 & 0xfffffffffffffff8;
      uVar11 = *param_3;
      uVar7 = uVar3 & 7;
      puVar8 = (undefined8 *)(puVar4 + 4);
      uVar10 = uVar9;
      do {
        puVar8[-1] = CONCAT44(uVar11,uVar11);
        puVar8[-2] = CONCAT44(uVar11,uVar11);
        puVar8[1] = CONCAT44(uVar11,uVar11);
        *puVar8 = CONCAT44(uVar11,uVar11);
        puVar8 = puVar8 + 4;
        uVar10 = uVar10 - 8;
      } while (uVar10 != 0);
      puVar2 = puVar4 + uVar9;
      if (uVar3 == uVar9) goto LAB_00420b78;
    }
    do {
      uVar7 = uVar7 - 1;
      *puVar2 = *param_3;
      puVar2 = puVar2 + 1;
    } while (uVar7 != 0);
  }
LAB_00420b78:
  if (uVar5 < param_2) {
    lVar6 = param_2 * 4 + uVar5 * -4;
    puVar4 = puVar1;
    do {
      if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                   ,0x23,"__location != nullptr","null pointer given to construct_at");
      }
      lVar6 = lVar6 + -4;
      *puVar4 = *param_3;
      puVar4 = puVar4 + 1;
    } while (lVar6 != 0);
    param_1[1] = puVar1 + (param_2 - uVar5);
    return;
  }
  puVar4 = puVar4 + param_2;
LAB_00420bb0:
  param_1[1] = puVar4;
  return;
}


// ===== 00420bf4  FUN_00420bf4 =====

void FUN_00420bf4(long *param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  
  uVar2 = param_1[2];
  puVar6 = (undefined8 *)*param_1;
  if ((ulong)((long)(uVar2 - (long)puVar6) >> 3) < param_2) {
    if (puVar6 != (undefined8 *)0x0) {
      param_1[1] = (long)puVar6;
      operator_delete(puVar6);
      uVar2 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar3 = uVar2 >> 2;
    if (uVar2 >> 2 <= param_2) {
      uVar3 = param_2;
    }
    if (0x7ffffffffffffff7 < uVar2) {
      uVar3 = 0x1fffffffffffffff;
    }
    if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar1 = (undefined8 *)operator_new(uVar3 * 8);
    *param_1 = (long)puVar1;
    param_1[1] = (long)puVar1;
    uVar2 = param_2 - 1 & 0x1fffffffffffffff;
    param_1[2] = (long)(puVar1 + uVar3);
    puVar6 = puVar1 + param_2;
    uVar5 = *param_3;
    if (2 < uVar2) {
      uVar2 = uVar2 + 1;
      puVar9 = puVar1 + 2;
      uVar8 = uVar2 & 0x3ffffffffffffffc;
      uVar3 = uVar8;
      do {
        puVar9[-1] = uVar5;
        puVar9[-2] = uVar5;
        puVar9[1] = uVar5;
        *puVar9 = uVar5;
        puVar9 = puVar9 + 4;
        uVar3 = uVar3 - 4;
      } while (uVar3 != 0);
      puVar1 = puVar1 + uVar8;
      if (uVar2 == uVar8) goto LAB_00420da0;
    }
    do {
      puVar9 = puVar1 + 1;
      *puVar1 = uVar5;
      puVar1 = puVar9;
    } while (puVar9 != puVar6);
    goto LAB_00420da0;
  }
  uVar3 = param_1[1] - (long)puVar6 >> 3;
  uVar2 = uVar3;
  if (param_2 <= uVar3) {
    uVar2 = param_2;
  }
  if (uVar2 != 0) {
    uVar8 = uVar2;
    if ((7 < uVar2) && ((param_3 + 1 <= puVar6 || (puVar6 + uVar2 <= param_3)))) {
      uVar7 = uVar2 & 0xfffffffffffffffc;
      uVar8 = uVar2 & 3;
      puVar1 = puVar6 + 2;
      uVar10 = uVar7;
      do {
        uVar5 = *param_3;
        uVar10 = uVar10 - 4;
        puVar1[-1] = uVar5;
        puVar1[-2] = uVar5;
        puVar1[1] = uVar5;
        *puVar1 = uVar5;
        puVar1 = puVar1 + 4;
      } while (uVar10 != 0);
      puVar6 = puVar6 + uVar7;
      if (uVar2 == uVar7) goto LAB_00420d60;
    }
    do {
      uVar8 = uVar8 - 1;
      *puVar6 = *param_3;
      puVar6 = puVar6 + 1;
    } while (uVar8 != 0);
  }
LAB_00420d60:
  if (uVar3 < param_2) {
    puVar1 = (undefined8 *)param_1[1];
    lVar4 = param_2 * 8 + uVar3 * -8;
    puVar6 = puVar1;
    do {
      if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                   ,0x23,"__location != nullptr","null pointer given to construct_at");
      }
      lVar4 = lVar4 + -8;
      *puVar6 = *param_3;
      puVar6 = puVar6 + 1;
    } while (lVar4 != 0);
    param_1[1] = (long)(puVar1 + (param_2 - uVar3));
    return;
  }
  puVar6 = (undefined8 *)(*param_1 + param_2 * 8);
LAB_00420da0:
  param_1[1] = (long)puVar6;
  return;
}


// ===== 00420de4  FUN_00420de4 =====

void FUN_00420de4(undefined8 *param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *__dest;
  ulong uVar4;
  ulong uVar5;
  void *__src;
  long lVar6;
  
  puVar3 = (undefined4 *)param_1[1];
  if (puVar3 < (undefined4 *)param_1[2]) {
    if (puVar3 == (undefined4 *)0x0) {
LAB_00420ed4:
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
    if (uVar5 == 0) goto LAB_00420ed4;
    if (uVar5 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
    __dest = operator_new(uVar5 * 4);
    puVar2 = (undefined4 *)((long)__dest + lVar6 * 4);
    *puVar2 = *param_2;
    memmove(__dest,__src,(long)puVar3 - (long)__src);
    *param_1 = __dest;
    param_1[1] = puVar2 + 1;
    param_1[2] = (void *)((long)__dest + uVar5 * 4);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  return;
}


// ===== 00420f04  FUN_00420f04 =====

void FUN_00420f04(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  short *psVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  float local_7c;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if ((0 < *(int *)(param_2 + 0x20)) && (lVar7 = *(long *)(param_2 + 0x18), lVar7 != 0)) {
    if (*(int *)(param_2 + 0x20) != *(int *)(param_1 + 0x10)) {
      FUN_0042068c(param_1);
      lVar7 = *(long *)(param_2 + 0x18);
    }
    uVar8 = *(ulong *)(param_2 + 0x28);
    if (((uVar8 != 0) && (lVar7 != 0)) && (lVar7 * uVar8 < 0x1e01)) {
      lVar2 = FUN_00659108(param_2);
      lVar9 = 0;
      lVar10 = 0;
      uVar11 = uVar8 & 0xfffffffffffffff0;
      puVar12 = (undefined8 *)(lVar2 + 0x10);
      do {
        if (uVar8 < 0x10) {
          iVar13 = 0;
          uVar3 = 0;
LAB_00421050:
          lVar5 = uVar8 - uVar3;
          psVar6 = (short *)(lVar2 + (uVar3 + lVar9) * 2);
          do {
            lVar5 = lVar5 + -1;
            iVar13 = iVar13 + *psVar6;
            psVar6 = psVar6 + 1;
          } while (lVar5 != 0);
        }
        else {
          iVar13 = 0;
          iVar14 = 0;
          iVar15 = 0;
          iVar16 = 0;
          iVar17 = 0;
          iVar18 = 0;
          iVar19 = 0;
          iVar20 = 0;
          iVar21 = 0;
          iVar22 = 0;
          iVar23 = 0;
          iVar24 = 0;
          iVar25 = 0;
          iVar26 = 0;
          iVar27 = 0;
          iVar28 = 0;
          uVar3 = uVar11;
          puVar4 = puVar12;
          do {
            uVar30 = puVar4[-1];
            uVar29 = puVar4[-2];
            uVar32 = puVar4[1];
            uVar31 = *puVar4;
            puVar4 = puVar4 + 4;
            uVar3 = uVar3 - 0x10;
            iVar17 = iVar17 + (short)uVar30;
            iVar18 = iVar18 + (short)((ulong)uVar30 >> 0x10);
            iVar19 = iVar19 + (short)((ulong)uVar30 >> 0x20);
            iVar20 = iVar20 + (short)((ulong)uVar30 >> 0x30);
            iVar13 = iVar13 + (short)uVar29;
            iVar14 = iVar14 + (short)((ulong)uVar29 >> 0x10);
            iVar15 = iVar15 + (short)((ulong)uVar29 >> 0x20);
            iVar16 = iVar16 + (short)((ulong)uVar29 >> 0x30);
            iVar25 = iVar25 + (short)uVar32;
            iVar26 = iVar26 + (short)((ulong)uVar32 >> 0x10);
            iVar27 = iVar27 + (short)((ulong)uVar32 >> 0x20);
            iVar28 = iVar28 + (short)((ulong)uVar32 >> 0x30);
            iVar21 = iVar21 + (short)uVar31;
            iVar22 = iVar22 + (short)((ulong)uVar31 >> 0x10);
            iVar23 = iVar23 + (short)((ulong)uVar31 >> 0x20);
            iVar24 = iVar24 + (short)((ulong)uVar31 >> 0x30);
          } while (uVar3 != 0);
          iVar13 = iVar21 + iVar13 + iVar25 + iVar17 + iVar22 + iVar14 + iVar26 + iVar18 +
                   iVar23 + iVar15 + iVar27 + iVar19 + iVar24 + iVar16 + iVar28 + iVar20;
          uVar3 = uVar11;
          if (uVar8 != uVar11) goto LAB_00421050;
        }
        local_7c = ((float)iVar13 * 3.0517578e-05) / (float)uVar8;
        FUN_00420de4(param_1 + 0x28,&local_7c);
        lVar10 = lVar10 + 1;
        puVar12 = (undefined8 *)((long)puVar12 + uVar8 * 2);
        lVar9 = lVar9 + uVar8;
      } while (lVar10 != lVar7);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004210a8  FUN_004210a8 =====

void FUN_004210a8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  short *psVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  float local_7c;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if (((*(int *)(param_1 + 0x10) != 0) && (*(int *)(param_2 + 0x20) == *(int *)(param_1 + 0x10))) &&
     (lVar7 = *(long *)(param_2 + 0x18), lVar7 != 0)) {
    uVar8 = *(ulong *)(param_2 + 0x28);
    if ((uVar8 != 0) && (uVar8 * lVar7 < 0x1e01)) {
      lVar2 = FUN_00659108(param_2);
      lVar9 = 0;
      lVar10 = 0;
      uVar11 = uVar8 & 0xfffffffffffffff0;
      puVar12 = (undefined8 *)(lVar2 + 0x10);
      do {
        if (uVar8 < 0x10) {
          iVar13 = 0;
          uVar3 = 0;
LAB_004211e0:
          lVar5 = uVar8 - uVar3;
          psVar6 = (short *)(lVar2 + (uVar3 + lVar9) * 2);
          do {
            lVar5 = lVar5 + -1;
            iVar13 = iVar13 + *psVar6;
            psVar6 = psVar6 + 1;
          } while (lVar5 != 0);
        }
        else {
          iVar13 = 0;
          iVar14 = 0;
          iVar15 = 0;
          iVar16 = 0;
          iVar17 = 0;
          iVar18 = 0;
          iVar19 = 0;
          iVar20 = 0;
          iVar21 = 0;
          iVar22 = 0;
          iVar23 = 0;
          iVar24 = 0;
          iVar25 = 0;
          iVar26 = 0;
          iVar27 = 0;
          iVar28 = 0;
          uVar3 = uVar11;
          puVar4 = puVar12;
          do {
            uVar30 = puVar4[-1];
            uVar29 = puVar4[-2];
            uVar32 = puVar4[1];
            uVar31 = *puVar4;
            puVar4 = puVar4 + 4;
            uVar3 = uVar3 - 0x10;
            iVar17 = iVar17 + (short)uVar30;
            iVar18 = iVar18 + (short)((ulong)uVar30 >> 0x10);
            iVar19 = iVar19 + (short)((ulong)uVar30 >> 0x20);
            iVar20 = iVar20 + (short)((ulong)uVar30 >> 0x30);
            iVar13 = iVar13 + (short)uVar29;
            iVar14 = iVar14 + (short)((ulong)uVar29 >> 0x10);
            iVar15 = iVar15 + (short)((ulong)uVar29 >> 0x20);
            iVar16 = iVar16 + (short)((ulong)uVar29 >> 0x30);
            iVar25 = iVar25 + (short)uVar32;
            iVar26 = iVar26 + (short)((ulong)uVar32 >> 0x10);
            iVar27 = iVar27 + (short)((ulong)uVar32 >> 0x20);
            iVar28 = iVar28 + (short)((ulong)uVar32 >> 0x30);
            iVar21 = iVar21 + (short)uVar31;
            iVar22 = iVar22 + (short)((ulong)uVar31 >> 0x10);
            iVar23 = iVar23 + (short)((ulong)uVar31 >> 0x20);
            iVar24 = iVar24 + (short)((ulong)uVar31 >> 0x30);
          } while (uVar3 != 0);
          iVar13 = iVar21 + iVar13 + iVar25 + iVar17 + iVar22 + iVar14 + iVar26 + iVar18 +
                   iVar23 + iVar15 + iVar27 + iVar19 + iVar24 + iVar16 + iVar28 + iVar20;
          uVar3 = uVar11;
          if (uVar8 != uVar11) goto LAB_004211e0;
        }
        local_7c = ((float)iVar13 * 3.0517578e-05) / (float)uVar8;
        FUN_00420de4(param_1 + 0x40,&local_7c);
        lVar10 = lVar10 + 1;
        puVar12 = (undefined8 *)((long)puVar12 + uVar8 * 2);
        lVar9 = lVar9 + uVar8;
      } while (lVar10 != lVar7);
    }
    FUN_00421240(param_1);
  }
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00421240  FUN_00421240 =====

void FUN_00421240(long param_1)

{
  bool bVar1;
  ulong uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  void *__dest;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  bool bVar8;
  ulong uVar9;
  float *pfVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  float *pfVar17;
  float *pfVar18;
  undefined4 *puVar19;
  ulong uVar20;
  float *pfVar21;
  long lVar22;
  size_t __n;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  int iVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  
  lVar16 = *(long *)(param_1 + 0x28);
  iVar30 = *(int *)(param_1 + 0x20);
  uVar23 = (ulong)iVar30;
  uVar24 = *(long *)(param_1 + 0x30) - lVar16 >> 2;
  if (uVar24 < uVar23) {
    return;
  }
  lVar22 = *(long *)(param_1 + 0x40);
  if ((ulong)(*(long *)(param_1 + 0x48) - lVar22 >> 2) < uVar23) {
    return;
  }
  pvVar3 = *(void **)(param_1 + 0x70);
  lVar26 = (uVar24 - uVar23) * 4;
  lVar25 = (long)*(int *)(param_1 + 0x14);
  uVar9 = *(long *)(param_1 + 0x78) - (long)pvVar3;
  if (0 < (long)uVar9) {
    memset(pvVar3,0,((uVar9 >> 2) - (ulong)(3 < uVar9)) * 4 + 4);
  }
  puVar19 = (undefined4 *)(lVar16 + lVar26);
  uVar9 = *(long *)(param_1 + 0x90) - (long)*(void **)(param_1 + 0x88);
  if (0 < (long)uVar9) {
    memset(*(void **)(param_1 + 0x88),0,((uVar9 >> 2) - (ulong)(3 < uVar9)) * 4 + 4);
  }
  if (iVar30 != 0) {
    memmove(pvVar3,puVar19,(lVar16 + uVar24 * 4) - (long)puVar19);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    memmove(*(void **)(param_1 + 0x88),(void *)(lVar22 + lVar26 + lVar25 * 4),
            (long)*(int *)(param_1 + 0x18) << 2);
  }
  FUN_005535d8(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x70),
               *(undefined8 *)(param_1 + 0xa0));
  FUN_005535d8(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x88),
               *(undefined8 *)(param_1 + 0xb8));
  pfVar18 = *(float **)(param_1 + 0xa0);
  lVar16 = *(long *)(param_1 + 0xa8) - (long)pfVar18;
  if (lVar16 != 0) {
    pfVar17 = *(float **)(param_1 + 0xb8);
    uVar9 = lVar16 >> 3;
    if (uVar9 < 2) {
      uVar9 = 1;
    }
    uVar20 = uVar9 - 1;
    uVar12 = *(long *)(param_1 + 0xc0) - (long)pfVar17 >> 3;
    uVar11 = uVar12;
    if (uVar20 <= uVar12) {
      uVar11 = uVar20;
    }
    if (uVar11 < 0x10) {
      lVar16 = 0;
    }
    else {
      lVar16 = 0;
      uVar2 = uVar12;
      if (uVar20 <= uVar12) {
        uVar2 = uVar20;
      }
      if (((pfVar18 <= pfVar18 + uVar2 * 2) && (pfVar18 + 1 <= pfVar18 + 1 + uVar2 * 2)) &&
         (uVar2 >> 0x3d == 0)) {
        uVar2 = uVar12;
        if (uVar20 <= uVar12) {
          uVar2 = uVar20;
        }
        uVar20 = uVar2 << 3 | 4;
        lVar16 = 0;
        if (((float *)((long)pfVar18 + uVar20) <= pfVar17 ||
             (float *)((long)pfVar17 + uVar20) <= pfVar18) &&
           (pfVar17 + uVar2 * 2 + 2 <= pfVar18 + 1 || pfVar18 + uVar2 * 2 + 2 <= pfVar17 + 1)) {
          uVar20 = uVar11 + 1 & 3;
          uVar2 = 4;
          if (uVar20 != 0) {
            uVar2 = uVar20;
          }
          lVar16 = (uVar11 + 1) - uVar2;
          lVar26 = lVar16;
          pfVar10 = pfVar17;
          pfVar21 = pfVar18;
          do {
            fVar27 = *pfVar21;
            fVar29 = pfVar21[2];
            fVar32 = pfVar21[4];
            fVar36 = pfVar21[6];
            lVar26 = lVar26 + -4;
            fVar37 = *pfVar10;
            fVar35 = pfVar10[1];
            fVar41 = pfVar10[2];
            fVar38 = pfVar10[3];
            fVar33 = pfVar10[4];
            fVar39 = pfVar10[5];
            fVar34 = pfVar10[6];
            fVar40 = pfVar10[7];
            pfVar10 = pfVar10 + 8;
            *pfVar21 = pfVar21[1] * fVar35 + fVar37 * fVar27;
            pfVar21[1] = fVar35 * -fVar27 + fVar37 * pfVar21[1];
            pfVar21[2] = pfVar21[3] * fVar38 + fVar41 * fVar29;
            pfVar21[3] = fVar38 * -fVar29 + fVar41 * pfVar21[3];
            pfVar21[4] = pfVar21[5] * fVar39 + fVar33 * fVar32;
            pfVar21[5] = fVar39 * -fVar32 + fVar33 * pfVar21[5];
            pfVar21[6] = pfVar21[7] * fVar40 + fVar34 * fVar36;
            pfVar21[7] = fVar40 * -fVar36 + fVar34 * pfVar21[7];
            pfVar21 = pfVar21 + 8;
          } while (lVar26 != 0);
        }
      }
    }
    lVar13 = uVar12 - lVar16;
    lVar26 = uVar9 - lVar16;
    pfVar17 = pfVar17 + lVar16 * 2 + 1;
    pfVar10 = pfVar18 + lVar16 * 2;
    do {
      if (lVar13 == 0) goto LAB_00421780;
      lVar13 = lVar13 + -1;
      lVar26 = lVar26 + -1;
      fVar27 = (float)*(undefined8 *)pfVar10;
      fVar32 = (float)((ulong)*(undefined8 *)pfVar10 >> 0x20);
      fVar29 = *pfVar17;
      pfVar21 = pfVar17 + -1;
      pfVar17 = pfVar17 + 2;
      uVar31 = NEON_rev64(CONCAT44(fVar32 * fVar29,-fVar27 * fVar29),4);
      *(ulong *)pfVar10 =
           CONCAT44((float)((ulong)uVar31 >> 0x20) + fVar32 * *pfVar21,
                    (float)uVar31 + fVar27 * *pfVar21);
      pfVar10 = pfVar10 + 2;
    } while (lVar26 != 0);
  }
  FUN_005536e0(*(undefined8 *)(param_1 + 0x68),pfVar18,*(undefined8 *)(param_1 + 0xd0));
  puVar4 = *(undefined4 **)(param_1 + 0xe8);
  lVar16 = *(long *)(param_1 + 0xf0) - (long)puVar4;
  if (lVar16 == 0) goto LAB_00421780;
  uVar5 = *(uint *)(param_1 + 0x20);
  uVar9 = (ulong)uVar5;
  uVar11 = lVar16 >> 2;
  *puVar4 = 0;
  if (0 < (int)uVar5) {
    uVar28 = 0;
    uVar20 = uVar11;
    puVar7 = puVar4;
    uVar12 = uVar11;
    if (uVar11 < 2) {
      uVar12 = 1;
    }
    do {
      if ((uVar20 == 0) || (uVar12 - 1 == 0)) goto LAB_00421780;
      uVar9 = uVar9 - 1;
      uVar28 = NEON_fmadd(*puVar19,*puVar19,uVar28);
      puVar7[1] = uVar28;
      uVar20 = uVar20 - 1;
      puVar19 = puVar19 + 1;
      puVar7 = puVar7 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar9 != 0);
  }
  uVar5 = *(uint *)(param_1 + 0x18);
  uVar9 = (ulong)uVar5;
  fVar27 = 0.0;
  fVar29 = 0.0;
  if (0 < (int)uVar5) {
    if (uVar5 == 1) {
      uVar20 = 0;
    }
    else {
      uVar20 = uVar9 & 0xfffffffe;
      pfVar18 = (float *)(uVar24 * 4 + lVar25 * 4 + uVar23 * -4 + lVar22 + 4);
      uVar12 = uVar20;
      do {
        pfVar17 = pfVar18 + -1;
        fVar32 = *pfVar18;
        pfVar18 = pfVar18 + 2;
        uVar12 = uVar12 - 2;
        fVar29 = fVar29 + *pfVar17 * *pfVar17 + fVar32 * fVar32;
      } while (uVar12 != 0);
      if (uVar20 == uVar9) goto LAB_004215a8;
    }
    lVar16 = uVar9 - uVar20;
    puVar19 = (undefined4 *)(lVar22 + uVar20 * 4 + uVar24 * 4 + lVar25 * 4 + uVar23 * -4);
    do {
      lVar16 = lVar16 + -1;
      fVar29 = (float)NEON_fmadd(*puVar19,*puVar19,fVar29);
      puVar19 = puVar19 + 1;
    } while (lVar16 != 0);
  }
LAB_004215a8:
  uVar6 = *(uint *)(param_1 + 0x14);
  if ((int)uVar6 < 0) {
    uVar15 = 0xffffffff;
  }
  else {
    iVar30 = *(int *)(param_1 + 0x58);
    lVar16 = *(long *)(param_1 + 0xd0);
    lVar25 = *(long *)(param_1 + 0xd8);
    fVar27 = 0.0;
    uVar9 = 0;
    lVar22 = *(long *)(param_1 + 0x100);
    lVar26 = *(long *)(param_1 + 0x108);
    uVar14 = 0xffffffff;
    do {
      if (((lVar25 - lVar16 >> 2 == uVar9) || (uVar11 <= (long)(int)uVar5 + uVar9)) ||
         (uVar11 == uVar9)) goto LAB_00421780;
      fVar36 = SQRT(fVar29 * ((float)puVar4[(long)(int)uVar5 + uVar9] - (float)puVar4[uVar9]));
      fVar32 = 0.0;
      if (fVar36 != 0.0 && fVar36 < 0.0 == NAN(fVar36)) {
        fVar32 = ((1.0 / (float)iVar30) * *(float *)(lVar16 + uVar9 * 4)) / fVar36;
      }
      if (lVar26 - lVar22 >> 2 == uVar9) goto LAB_00421780;
      bVar8 = fVar32 == fVar27;
      *(float *)(lVar22 + uVar9 * 4) = fVar32;
      bVar1 = fVar32 < fVar27 != (NAN(fVar32) || NAN(fVar27));
      if ((bVar8 || bVar1) && -1 < (int)uVar14) {
        fVar32 = fVar27;
      }
      fVar27 = fVar32;
      uVar15 = (uint)uVar9;
      if ((bVar8 || bVar1) && -1 < (int)uVar14) {
        uVar15 = uVar14;
      }
      uVar9 = uVar9 + 1;
      uVar14 = uVar15;
    } while ((ulong)uVar6 + 1 != uVar9);
  }
  if ((SQRT(fVar29 / (float)(int)uVar5) < 0.001 == NAN(SQRT(fVar29 / (float)(int)uVar5))) &&
     (fVar27 < 0.5 == NAN(fVar27))) {
    fVar29 = (float)(int)uVar15;
    if ((0 < (int)uVar15) && ((int)uVar15 < (int)uVar6)) {
      lVar16 = *(long *)(param_1 + 0x100);
      uVar9 = *(long *)(param_1 + 0x108) - lVar16 >> 2;
      if (((uVar9 <= uVar15 - 1) || (uVar9 <= uVar15)) || (uVar9 <= uVar15 + 1)) {
LAB_00421780:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x587,
                   "__n < size()","vector[] index out of bounds");
      }
      fVar32 = *(float *)(lVar16 + (ulong)(uVar15 - 1) * 4);
      fVar37 = *(float *)(lVar16 + (ulong)(uVar15 + 1) * 4);
      fVar36 = (float)NEON_fmadd(*(undefined4 *)(lVar16 + (ulong)uVar15 * 4),0xc0000000,fVar32);
      fVar36 = fVar36 + fVar37;
      fVar41 = ABS(fVar36);
      if (fVar41 != 1e-09 && fVar41 < 1e-09 == NAN(fVar41)) {
        fVar29 = ((fVar32 - fVar37) * 0.5) / fVar36 + fVar29;
      }
    }
    lVar16 = 0x7fffffffffffffff;
    fVar29 = (((float)(int)uVar6 - fVar29) * 1e+06) / (float)*(int *)(param_1 + 0x10);
    if (fVar29 != INFINITY) {
      if (fVar29 == -INFINITY) {
        lVar16 = -0x8000000000000000;
      }
      else {
        lVar16 = (long)fVar29;
      }
    }
    FUN_005467a4(param_1 + 0x118);
    lVar25 = *(long *)(param_1 + 0x140);
    lVar22 = 0x7fffffffffffffff;
    if ((lVar25 != 0x7fffffffffffffff) && (lVar16 != 0x7fffffffffffffff)) {
      lVar22 = -0x8000000000000000;
      if (lVar16 != -0x8000000000000000 && lVar25 != -0x8000000000000000) {
        lVar22 = lVar25 + lVar16;
      }
    }
    *(long *)(param_1 + 0x140) = lVar22;
    *(float *)(param_1 + 0x148) = fVar27 + *(float *)(param_1 + 0x148);
    *(long *)(param_1 + 0x150) = *(long *)(param_1 + 0x150) + 1;
    FUN_005467c8(param_1 + 0x118);
  }
  lVar16 = (uVar24 - uVar23) + (long)*(int *)(param_1 + 0x1c);
  if (-1 < lVar16) {
    if (lVar16 != 0) {
      __dest = *(void **)(param_1 + 0x28);
      pvVar3 = (void *)((long)__dest + lVar16 * 4);
      __n = *(long *)(param_1 + 0x30) - (long)pvVar3;
      memmove(__dest,pvVar3,__n);
      lVar22 = *(long *)(param_1 + 0x48);
      pvVar3 = (void *)((long)*(void **)(param_1 + 0x40) + lVar16 * 4);
      *(size_t *)(param_1 + 0x30) = (long)__dest + __n;
      memmove(*(void **)(param_1 + 0x40),pvVar3,lVar22 - (long)pvVar3);
      *(long *)(param_1 + 0x48) = lVar22 + lVar16 * -4;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x644,
             "__first <= __last","vector::erase(first, last) called with invalid range");
}


// ===== 0042189c  FUN_0042189c =====

void FUN_0042189c(undefined8 *param_1,long param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_005467a4(param_2 + 0x118);
  bVar1 = *(long *)(param_2 + 0x150) == 0;
  if (bVar1) {
    *(undefined1 *)param_1 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x140);
    uVar2 = *(undefined8 *)(param_2 + 0x150);
    param_1[1] = *(undefined8 *)(param_2 + 0x148);
    *param_1 = uVar3;
    param_1[2] = uVar2;
  }
  *(bool *)(param_1 + 3) = !bVar1;
  FUN_005467c8(param_2 + 0x118);
  return;
}


// ===== 004218fc  FUN_004218fc =====

void FUN_004218fc(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  void *pvVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  void *local_e8;
  long *local_e0;
  code *local_d8;
  undefined8 *puStack_d0;
  undefined8 local_c8;
  void *local_c0;
  long *local_b8;
  code *local_b0;
  undefined8 *puStack_a8;
  undefined8 local_a0;
  char local_98 [7];
  char cStack_91;
  char acStack_90 [7];
  char local_89 [8];
  char local_81;
  long local_80;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  cVar2 = *(char *)((long)param_2 + 4);
  local_100 = 0;
  uVar6 = FUN_00417e08();
  if (cVar2 == '\0') {
    if ((uVar6 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,
                   "../../discord_native_lib/src/media/audio_device/adm_factory_default.cpp",0x401,
                   "Creating ADM on main thread");
    }
    local_100 = FUN_00421ca8(param_2,param_3,0,0);
  }
  else {
    if ((uVar6 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,
                   "../../discord_native_lib/src/media/audio_device/adm_factory_default.cpp",0x389,
                   "Creating ADM on dedicated controls thread");
    }
    pvVar7 = operator_new(0x80);
    local_b0 = FUN_0040df64;
    puStack_a8 = &DAT_001f1910;
    local_d8 = FUN_0040dec4;
    puStack_d0 = &DAT_001f1910;
    FUN_00513ef0(pvVar7,"AdmHelper",&local_c0,&local_e8);
    if ((code *)puStack_d0[1] != (code *)0x0) {
      (*(code *)puStack_d0[1])(local_e8);
    }
    if ((code *)puStack_a8[1] != (code *)0x0) {
      (*(code *)puStack_a8[1])(local_c0);
    }
    plVar8 = (long *)operator_new(0x20);
    plVar8[2] = 0;
    plVar8[3] = (long)pvVar7;
    *plVar8 = (long)&PTR_FUN_00d1b140;
    plVar12 = plVar8 + 1;
    *plVar12 = 0;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = *plVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar11 = *(long *)((long)pvVar7 + 0x58);
    local_e8 = pvVar7;
    local_e0 = plVar8;
    local_d8 = (code *)&local_100;
    puStack_d0 = param_2;
    local_c8 = param_3;
    if (lVar11 != 0) {
      lVar10 = *(long *)((long)pvVar7 + 0x78);
      if (lVar10 == 0) {
        local_d8 = (code *)&local_100;
        FUN_00520194(&local_c0);
        puVar9 = (undefined8 *)operator_new(0x18);
        puVar9[2] = &local_c0;
        *puVar9 = &PTR_FUN_00d1b118;
        puVar9[1] = &local_e8;
        FUN_00512cf8(lVar11,puVar9);
        FUN_005203e8(&local_f0,&local_c0);
        FUN_0052007c(local_f0);
        FUN_00520164(&local_f0);
        FUN_005201dc(&local_c0);
      }
      else {
        local_d8 = (code *)&local_100;
        local_60 = FUN_005ce36c();
        local_a0 = local_c8;
        local_81 = '\x0f';
        local_e8 = (void *)0x0;
        local_e0 = (long *)0x0;
        puStack_a8 = puStack_d0;
        local_b0 = local_d8;
        local_c0 = pvVar7;
        local_b8 = plVar8;
        if ((local_98 < "reateAdmHelper") && ("CreateAdmHelper" < local_89)) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                     ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
        }
        local_98[0] = s_CreateAdmHelper_001bc26f[0];
        local_98[1] = s_CreateAdmHelper_001bc26f[1];
        local_98[2] = s_CreateAdmHelper_001bc26f[2];
        local_98[3] = s_CreateAdmHelper_001bc26f[3];
        local_98[4] = s_CreateAdmHelper_001bc26f[4];
        local_98[5] = s_CreateAdmHelper_001bc26f[5];
        local_98[6] = s_CreateAdmHelper_001bc26f[6];
        cStack_91 = s_CreateAdmHelper_001bc26f[7];
        acStack_90[0] = s_CreateAdmHelper_001bc26f[8];
        acStack_90[1] = s_CreateAdmHelper_001bc26f[9];
        acStack_90[2] = s_CreateAdmHelper_001bc26f[10];
        acStack_90[3] = s_CreateAdmHelper_001bc26f[0xb];
        acStack_90[4] = s_CreateAdmHelper_001bc26f[0xc];
        acStack_90[5] = s_CreateAdmHelper_001bc26f[0xd];
        acStack_90[6] = s_CreateAdmHelper_001bc26f[0xe];
        local_89[0] = '\0';
        local_70 = FUN_0040e7ec;
        local_68 = &DAT_001f4e70;
        local_80 = lVar10;
        FUN_00520194(&local_f0);
        puVar9 = (undefined8 *)operator_new(0x18);
        puVar9[2] = &local_f0;
        *puVar9 = &PTR_FUN_00d1b0f0;
        puVar9[1] = &local_c0;
        FUN_00512cf8(lVar11,puVar9);
        FUN_005203e8(&local_f8,&local_f0);
        FUN_0052007c(local_f8);
        FUN_00520164(&local_f8);
        FUN_005201dc(&local_f0);
        if (*(code **)(local_68 + 8) != (code *)0x0) {
          (**(code **)(local_68 + 8))(local_80);
        }
        if (local_81 < '\0') {
          operator_delete((void *)CONCAT17(cStack_91,local_98));
        }
        plVar5 = local_b8;
        if (local_b8 != (long *)0x0) {
          plVar1 = local_b8 + 1;
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
            (**(code **)(*local_b8 + 0x10))(local_b8);
            FUN_005466cc(plVar5);
          }
        }
      }
    }
    plVar5 = local_e0;
    if (local_e0 != (long *)0x0) {
      plVar1 = local_e0 + 1;
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
        (**(code **)(*local_e0 + 0x10))(local_e0);
        FUN_005466cc(plVar5);
      }
    }
    do {
      lVar11 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_005466cc(plVar8);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_100);
}


// ===== 00421ca8  FUN_00421ca8 =====

/* WARNING: Removing unreachable block (ram,0x00421ea4) */

undefined8 * FUN_00421ca8(undefined4 *param_1,undefined8 param_2,long param_3,long *param_4)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *__src;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined4 uVar7;
  void *pvVar8;
  undefined8 *__dest;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long *local_98;
  long *local_90;
  void *local_88;
  void *local_80;
  void *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  if (*(char *)((long)param_1 + 5) == '\0') {
    lVar12 = *(long *)(param_1 + 2);
    lVar13 = *(long *)(param_1 + 4);
    if (lVar12 == lVar13) {
      if (param_3 == 0) {
        plVar10 = (long *)0x0;
      }
      else {
        plVar10 = (long *)operator_new(0xf8);
        if (param_4 != (long *)0x0) {
          plVar14 = param_4 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar4) {
              *plVar14 = *plVar14 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_00433484(plVar10,param_3,param_4);
        uVar11 = FUN_007e03ac();
        FUN_007e08e0(uVar11,plVar10);
      }
      uVar7 = FUN_004a22e0(*param_1);
      FUN_00d0c224(&local_90,param_2,uVar7);
      plVar14 = local_90;
      if ((local_90 == (long *)0x0) &&
         (FUN_009983a4(&local_90,param_2,uVar7), plVar14 = local_90, local_90 == (long *)0x0)) {
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x20))(plVar10);
        }
        puVar9 = (undefined8 *)0x0;
      }
      else {
        puVar9 = (undefined8 *)operator_new(0x30);
        if (param_4 != (long *)0x0) {
          plVar2 = param_4 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = *plVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        local_90 = plVar14;
        (**(code **)*plVar14)(plVar14);
        FUN_004296a4(puVar9,param_3,param_4,plVar10,&local_90);
        if (local_90 != (long *)0x0) {
          (**(code **)(*local_90 + 8))();
        }
        (**(code **)(*plVar14 + 8))(plVar14);
      }
      goto LAB_00421ebc;
    }
  }
  else {
    lVar12 = *(long *)(param_1 + 2);
    lVar13 = *(long *)(param_1 + 4);
  }
  uVar5 = lVar13 - lVar12;
  local_90 = (long *)CONCAT71(local_90._1_7_,*(char *)((long)param_1 + 5));
  local_80 = (void *)0x0;
  local_78 = (void *)0x0;
  local_88 = (void *)0x0;
  if (uVar5 != 0) {
    if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar5 >> 3) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar8 = operator_new(uVar5);
    lVar15 = 0;
    local_78 = (void *)((long)pvVar8 + ((long)uVar5 >> 3) * 8);
    local_88 = pvVar8;
    do {
      puVar9 = (undefined8 *)(lVar12 + lVar15);
      __dest = (undefined8 *)((long)pvVar8 + lVar15);
      if (*(char *)((long)puVar9 + 0x17) < '\0') {
        __src = (undefined8 *)*puVar9;
        uVar5 = puVar9[1];
        if (uVar5 < 0x17) {
          *(char *)((long)pvVar8 + lVar15 + 0x17) = (char)uVar5;
        }
        else {
          if (0x7fffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar1 = (uVar5 | 0xf) + 1;
          __dest = (undefined8 *)operator_new(uVar1);
          puVar9 = (undefined8 *)((long)pvVar8 + lVar15);
          puVar9[1] = uVar5;
          puVar9[2] = uVar1 | 0x8000000000000000;
          *puVar9 = __dest;
        }
        if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + uVar5 + 1))) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                     ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
        }
        memmove(__dest,__src,uVar5 + 1);
      }
      else {
        uVar16 = puVar9[1];
        uVar11 = *puVar9;
        __dest[2] = puVar9[2];
        __dest[1] = uVar16;
        *__dest = uVar11;
      }
      lVar15 = lVar15 + 0x18;
    } while (lVar12 + lVar15 != lVar13);
    local_80 = (void *)((long)pvVar8 + lVar15);
  }
  local_70 = *(undefined8 *)(param_1 + 8);
  FUN_00424758(&local_98,&local_90);
  puVar9 = (undefined8 *)operator_new(0x10);
  plVar10 = local_98;
  if (local_98 == (long *)0x0) {
    *puVar9 = &PTR_FUN_00d1b7e0;
    puVar9[1] = 0;
  }
  else {
    (**(code **)*local_98)(local_98);
    *puVar9 = &PTR_FUN_00d1b7e0;
    puVar9[1] = plVar10;
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 8))();
    }
  }
  if (local_88 != (void *)0x0) {
    for (; local_80 != local_88; local_80 = (void *)((long)local_80 + -0x18)) {
    }
    local_80 = local_88;
    operator_delete(local_88);
  }
LAB_00421ebc:
  if (param_4 != (long *)0x0) {
    plVar10 = param_4 + 1;
    do {
      lVar12 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*param_4 + 0x10))(param_4);
      FUN_005466cc(param_4);
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return puVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0042207c  FUN_0042207c =====

void FUN_0042207c(void)

{
  return;
}


// ===== 00422080  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00422084  FUN_00422084 =====

void FUN_00422084(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 004220a8  FUN_004220a8 =====

void FUN_004220a8(long param_1)

{
  FUN_004220b4((undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x18));
  return;
}


// ===== 004220b0  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 004220b4  FUN_004220b4 =====

void FUN_004220b4(undefined8 param_1,void *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 *__arg;
  pthread_t pStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00514534(param_2);
  if ((uVar3 & 1) == 0) {
    FUN_00514454(param_2);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      operator_delete(param_2);
      return;
    }
  }
  else {
    pvVar4 = operator_new(8);
    FUN_0054a384();
    __arg = (undefined8 *)operator_new(0x10);
    *__arg = pvVar4;
    __arg[1] = param_2;
    iVar2 = pthread_create(&pStack_40,(pthread_attr_t *)0x0,FUN_00422190,__arg);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0054a0b0(iVar2,"thread constructor failed");
    }
    FUN_0054a1b8(&pStack_40);
    FUN_0054a158(&pStack_40);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00422190  FUN_00422190 =====

undefined8 FUN_00422190(undefined8 *param_1)

{
  pthread_key_t __key;
  pthread_key_t *ppVar1;
  void *pvVar2;
  void *__pointer;
  
  ppVar1 = (pthread_key_t *)FUN_0054a21c();
  __key = *ppVar1;
  __pointer = (void *)*param_1;
  *param_1 = 0;
  pvVar2 = pthread_getspecific(__key);
  if (pvVar2 == (void *)0x0) {
    pthread_setspecific(*ppVar1,__pointer);
    pvVar2 = (void *)param_1[1];
    if (pvVar2 != (void *)0x0) {
      FUN_00514454(pvVar2);
      operator_delete(pvVar2);
    }
    pvVar2 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar2 != (void *)0x0) {
      FUN_0054a3b8(pvVar2);
      operator_delete(pvVar2);
    }
    operator_delete(param_1);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/thread",0xc9,
             "get() == nullptr","Attempting to overwrite thread local data");
}


// ===== 00422244  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00422248  FUN_00422248 =====

void FUN_00422248(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  puVar9 = *(undefined8 **)(param_1 + 8);
  uVar5 = FUN_005ce36c();
  uVar8 = *puVar9;
  uVar1 = puVar9[3];
  uVar2 = puVar9[4];
  if (puVar9[1] != 0) {
    plVar7 = (long *)(puVar9[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar6 = FUN_00421ca8(uVar1,uVar2,uVar8);
  plVar7 = *(long **)puVar9[2];
  *(long *)puVar9[2] = lVar6;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0xe0))();
  }
  uVar8 = FUN_005ce36c();
  (*(code *)puVar9[10])(puVar9 + 8,puVar9 + 5,puVar9[0xc],uVar5,uVar8);
  FUN_00520464(*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 004222e0  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 004222e4  FUN_004222e4 =====

void FUN_004222e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  puVar8 = *(undefined8 **)(param_1 + 8);
  uVar1 = *puVar8;
  uVar2 = puVar8[3];
  uVar3 = puVar8[4];
  if (puVar8[1] != 0) {
    plVar7 = (long *)(puVar8[1] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = *plVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar6 = FUN_00421ca8(uVar2,uVar3,uVar1);
  plVar7 = *(long **)puVar8[2];
  *(long *)puVar8[2] = lVar6;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0xe0))();
  }
  FUN_00520464(*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 0042234c  FUN_0042234c =====

void FUN_0042234c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00d1b178;
  param_1[1] = param_2;
  return;
}


// ===== 0042235c  FUN_0042235c =====

undefined8 FUN_0042235c(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0x9a,"ActiveAudioLayer"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 004223a0  FUN_004223a0 =====

undefined8 FUN_004223a0(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0xca,"RegisterAudioCallback"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 004223e4  FUN_004223e4 =====

undefined8 FUN_004223e4(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0xfa,&DAT_001ca4e9," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 00422428  FUN_00422428 =====

undefined8 FUN_00422428(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0x12a,"Terminate"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 0042246c  FUN_0042246c =====

undefined8 FUN_0042246c(void)

{
  return 1;
}


// ===== 00422474  FUN_00422474 =====

undefined8 FUN_00422474(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0x182,"PlayoutDevices"," not implemented for audio state");
  }
  return 0xffff;
}


// ===== 004224b8  FUN_004224b8 =====

undefined8 FUN_004224b8(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0x1b2,"RecordingDevices"," not implemented for audio state");
  }
  return 0xffff;
}


// ===== 004224fc  FUN_004224fc =====

undefined8 FUN_004224fc(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0x1f2,"PlayoutDeviceName"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 00422540  FUN_00422540 =====

undefined8 FUN_00422540(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0x232,"RecordingDeviceName"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 00422584  FUN_00422584 =====

undefined8 FUN_00422584(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0x262,"SetPlayoutDevice"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 004225c8  FUN_004225c8 =====

undefined8 FUN_004225c8(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0x292,"SetPlayoutDevice"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 0042260c  FUN_0042260c =====

undefined8 FUN_0042260c(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0x2ca,"SetPlayoutDevice"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 00422650  FUN_00422650 =====

undefined8 FUN_00422650(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0x2fa,"SetRecordingDevice"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 00422694  FUN_00422694 =====

undefined8 FUN_00422694(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0x332,"SetRecordingDevice"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 004226d8  FUN_004226d8 =====

undefined8 FUN_004226d8(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0x362,"SetRecordingDevice"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 0042271c  FUN_0042271c =====

undefined8 FUN_0042271c(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0x392,"PlayoutIsAvailable"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 00422760  FUN_00422760 =====

undefined8 FUN_00422760(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0x3c2,"PlayoutIsInitialized"," not implemented for audio state");
  }
  return 1;
}


// ===== 004227a4  FUN_004227a4 =====

undefined8 FUN_004227a4(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0x3f2,"RecordingIsAvailable"," not implemented for audio state");
  }
  return 0xffffffff;
}


// ===== 004227e8  FUN_004227e8 =====

undefined8 FUN_004227e8(void)

{
  ulong uVar1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,
                 "../../discord_native_lib/src/media/audio_device/audio_state_device_module.cpp",
                 0x422,"RecordingIsInitialized"," not implemented for audio state");
  }
  return 1;
}


// ===== 0042282c  FUN_0042282c =====

undefined8 FUN_0042282c(void)

{
  return 0;
}


// ===== 00422834  FUN_00422834 =====

undefined8 FUN_00422834(void)

{
  return 0;
}


