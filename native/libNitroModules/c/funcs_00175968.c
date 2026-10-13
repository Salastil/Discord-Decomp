// ===== 00175968  FUN_00175968 =====

void FUN_00175968(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x10);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  facebook::jsi::NativeState::~NativeState(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001759f0  FUN_001759f0 =====

void FUN_001759f0(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_001b77e8;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00175a34  FUN_00175a34 =====

void FUN_00175a34(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_001b77e8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00175a8c  FUN_00175a8c =====

void FUN_00175a8c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x28);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    facebook::jsi::NativeState::~NativeState((NativeState *)(param_1 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00175b0c  FUN_00175b0c =====

void FUN_00175b0c(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00175b44  FUN_00175b44 =====

void FUN_00175b44(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_001b76a8;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete((void *)param_1[3]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00175bb0  FUN_00175bb0 =====

void FUN_00175bb0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_001b76a8;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00175c18  FUN_00175c18 =====

undefined8 * FUN_00175c18(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x38);
  bVar2 = *(byte *)(param_1 + 8);
  *puVar4 = &PTR_FUN_001b76a8;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 00175c78 to 00175c7b has its CatchHandler @ 00175cb4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar4 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    puVar4[5] = *(undefined8 *)(param_1 + 0x28);
    puVar4[4] = uVar6;
    *(undefined4 *)(puVar4 + 6) = uVar1;
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00175cdc  FUN_00175cdc =====

void FUN_00175cdc(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_001b76a8;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar4;
    param_2[1] = uVar3;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x30);
    param_2[5] = uVar4;
    param_2[4] = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00175d74  FUN_00175d74 =====

void FUN_00175d74(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00175dd4  FUN_00175dd4 =====

void FUN_00175dd4(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00175e30  FUN_00175e30 =====

void FUN_00175e30(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
                 ulong *param_6)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  JSError *pJVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [8];
  long *local_120;
  undefined8 local_110;
  long *local_108;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  undefined8 *local_80;
  long *plStack_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar10 = *param_5;
  uVar9 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 00175e90 to 00175e9f has its CatchHandler @ 00176498 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == (undefined8 *)0x0) || ((undefined *)*local_80 != PTR_vtable_001b9ff8 + 0x70)) {
    puVar8 = (undefined8 *)0x0;
    plVar7 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x00175f14;
  }
  else {
    puVar8 = local_80 + -0xc;
    if (plStack_78 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto joined_r0x00175f14;
    }
    FUN_0015c230(1,plStack_78 + 1);
    plVar7 = plStack_78;
  }
  lVar5 = FUN_0015bb40(0xffffffffffffffff,plStack_78 + 1);
  if (lVar5 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x00175f14:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar9 == 1) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_001ba0b0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_defaultValue_001ba0b0), puVar3 = PTR_defaultValue_001ba0a8,
       iVar4 != 0)) {
      *(undefined4 *)PTR_defaultValue_001ba0a8 = 0;
      __cxa_atexit(PTR__Value_001b9f60,puVar3,&PTR_LOOP_001b6ad0);
      __cxa_guard_release(PTR_defaultValue_001ba0b0);
    }
    plVar1 = (long *)((long)puVar8 + ((long)uVar9 >> 1));
    if ((uVar9 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *plVar1);
    }
                    /* try { // try from 00175f50 to 00175f5f has its CatchHandler @ 001761a4 */
    FUN_0016a29c(auStack_128,param_3,uVar10);
                    /* try { // try from 00175f60 to 00175f6f has its CatchHandler @ 0017618c */
    (*pcVar11)(&local_110,plVar1,auStack_128);
    if ((local_120 != (long *)0x0) &&
       (lVar5 = FUN_0015bb40(0xffffffffffffffff,local_120 + 1), lVar5 == 0)) {
      (**(code **)(*local_120 + 0x10))(local_120);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
                    /* try { // try from 00175fa4 to 00175faf has its CatchHandler @ 00176184 */
    FUN_001766f0(param_1,param_3,local_110);
    if ((local_108 != (long *)0x0) &&
       (lVar5 = FUN_0015bb40(0xffffffffffffffff,local_108 + 1), lVar5 == 0)) {
      (**(code **)(*local_108 + 0x10))(local_108);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if ((plVar7 != (long *)0x0) && (lVar5 = FUN_0015bb40(0xffffffffffffffff,plVar7 + 1), lVar5 == 0)
       ) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 00176050 to 0017605f has its CatchHandler @ 00176638 */
    FUN_0017369c(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,puVar8);
    pJVar6 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 0017606c to 0017607f has its CatchHandler @ 00176618 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 00176080 to 00176093 has its CatchHandler @ 00176600 */
    FUN_0015dcfc(auStack_f8,&local_110,"` expected ");
                    /* try { // try from 00176094 to 0017609f has its CatchHandler @ 001765d0 */
    std::__ndk1::to_string(1);
                    /* try { // try from 001760a0 to 001760af has its CatchHandler @ 001765ac */
    FUN_001693b0(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 001760b0 to 001760c3 has its CatchHandler @ 00176588 */
    FUN_0015dcfc(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 001760c4 to 001760cf has its CatchHandler @ 00176564 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 001760d0 to 001760df has its CatchHandler @ 00176540 */
    FUN_001693b0(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 001760e0 to 001760f3 has its CatchHandler @ 00176518 */
    FUN_0015dcfc(local_98,auStack_b0,&DAT_001374e6);
                    /* try { // try from 001760f8 to 00176133 has its CatchHandler @ 001764b8 */
    facebook::jsi::JSError::JSError(pJVar6,param_3,local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar6,PTR_typeinfo_001b9f78,PTR__JSError_001b9f68);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00176660  FUN_00176660 =====

void FUN_00176660(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_001ba0b8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 001766b0  FUN_001766b0 =====

undefined * FUN_001766b0(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_001ba0c0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001766f0  FUN_001766f0 =====

void FUN_001766f0(undefined8 param_1,undefined8 param_2,Runtime *param_3)

{
  long lVar1;
  JSError *pJVar2;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  basic_string abStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_3 == (Runtime *)0x0) {
    FUN_001695dc(abStack_50,PTR_typeinfo_name_001b9ee0);
    pJVar2 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00176764 to 00176777 has its CatchHandler @ 00176818 */
    std::__ndk1::operator+("Cannot convert `nullptr` to NativeState<",abStack_50);
                    /* try { // try from 00176778 to 0017678b has its CatchHandler @ 00176800 */
    FUN_0015dcfc(auStack_68,auStack_80,&DAT_001387ad);
                    /* try { // try from 00176790 to 001767cb has its CatchHandler @ 001767cc */
    facebook::jsi::JSError::JSError(pJVar2,param_2,auStack_68);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar2,PTR_typeinfo_001b9f78,PTR__JSError_001b9f68);
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_38) {
    margelo::nitro::HybridObject::toObject(param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00176850  FUN_00176850 =====

void FUN_00176850(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_001b7610;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete((void *)param_1[3]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001768bc  FUN_001768bc =====

void FUN_001768bc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_001b7610;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00176924  FUN_00176924 =====

undefined8 * FUN_00176924(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x38);
  bVar2 = *(byte *)(param_1 + 8);
  *puVar4 = &PTR_FUN_001b7610;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 00176984 to 00176987 has its CatchHandler @ 001769c0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar4 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    puVar4[5] = *(undefined8 *)(param_1 + 0x28);
    puVar4[4] = uVar6;
    *(undefined4 *)(puVar4 + 6) = uVar1;
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001769e8  FUN_001769e8 =====

void FUN_001769e8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_001b7610;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar4;
    param_2[1] = uVar3;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x30);
    param_2[5] = uVar4;
    param_2[4] = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00176a80  FUN_00176a80 =====

void FUN_00176a80(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00176ae0  FUN_00176ae0 =====

void FUN_00176ae0(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00176b3c  FUN_00176b3c =====

void FUN_00176b3c(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
                 ulong *param_6)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  JSError *pJVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined8 *local_140;
  long *local_138;
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  undefined8 *local_80;
  long *local_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar11 = *param_5;
  uVar10 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 00176b9c to 00176bab has its CatchHandler @ 0017700c */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  plVar1 = local_78;
  if ((local_80 == (undefined8 *)0x0) || ((undefined *)*local_80 != PTR_vtable_001b9ff8 + 0x70)) {
    puVar9 = (undefined8 *)0x0;
    plVar8 = (long *)0x0;
    if (local_78 == (long *)0x0) goto joined_r0x00176c20;
  }
  else {
    puVar9 = local_80 + -0xc;
    if (local_78 == (long *)0x0) {
      plVar8 = (long *)0x0;
      goto joined_r0x00176c20;
    }
    FUN_0015c230(1,local_78 + 1);
    plVar8 = plVar1;
  }
  lVar6 = FUN_0015bb40(0xffffffffffffffff,plVar1 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x00176c20:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar10 == 1) {
    pcVar12 = *(code **)(param_2 + 0x20);
    uVar10 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_001ba090 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_defaultValue_001ba090), puVar3 = PTR_defaultValue_001ba088,
       iVar5 != 0)) {
      *(undefined4 *)PTR_defaultValue_001ba088 = 0;
      __cxa_atexit(PTR__Value_001b9f60,puVar3,&PTR_LOOP_001b6ad0);
      __cxa_guard_release(PTR_defaultValue_001ba090);
    }
    plVar1 = (long *)((long)puVar9 + ((long)uVar10 >> 1));
    if ((uVar10 & 1) != 0) {
      pcVar12 = *(code **)(pcVar12 + *plVar1);
    }
                    /* try { // try from 00176c5c to 00176c6b has its CatchHandler @ 00177000 */
    FUN_0016a29c(&local_80,param_3,uVar11);
                    /* try { // try from 00176c6c to 00176c7b has its CatchHandler @ 00176fe8 */
    (*pcVar12)(&local_140,plVar1,&local_80);
    plVar1 = local_78;
    if ((local_78 != (long *)0x0) &&
       (lVar6 = FUN_0015bb40(0xffffffffffffffff,local_78 + 1), lVar6 == 0)) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar1 = local_138;
    if (local_140 == (undefined8 *)0x0) {
                    /* try { // try from 00176ef4 to 00176f07 has its CatchHandler @ 00177220 */
      FUN_001695dc(&local_80,PTR_typeinfo_name_001b9eb8,0);
      pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00176f14 to 00176f27 has its CatchHandler @ 001771dc */
      std::__ndk1::operator+("Cannot convert `nullptr` to HostObject<",(basic_string *)&local_80);
                    /* try { // try from 00176f28 to 00176f3b has its CatchHandler @ 001771a8 */
      FUN_0015dcfc(local_98,auStack_b0,&DAT_001387ad);
                    /* try { // try from 00176f40 to 00176f7b has its CatchHandler @ 00177170 */
      facebook::jsi::JSError::JSError(pJVar7,param_3,local_98);
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(pJVar7,PTR_typeinfo_001b9f78,PTR__JSError_001b9f68);
      }
    }
    else {
      if (local_138 == (long *)0x0) {
        local_78 = (long *)0x0;
      }
      else {
        FUN_0015c230(1,local_138 + 1);
        local_78 = plVar1;
        FUN_0015c230(1,plVar1 + 1);
      }
      local_80 = local_140;
                    /* try { // try from 00176cec to 00176cfb has its CatchHandler @ 00176fc8 */
      (**(code **)(*param_3 + 0x138))(local_98,param_3,&local_80);
      plVar4 = local_78;
      if ((local_78 != (long *)0x0) &&
         (lVar6 = FUN_0015bb40(0xffffffffffffffff,local_78 + 1), lVar6 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      puVar9 = local_98[0];
      local_98[0] = (undefined8 *)0x0;
      *param_1 = 7;
      *(undefined8 **)(param_1 + 2) = puVar9;
      if ((plVar1 != (long *)0x0) &&
         (lVar6 = FUN_0015bb40(0xffffffffffffffff,plVar1 + 1), lVar6 == 0)) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      if ((local_138 != (long *)0x0) &&
         (lVar6 = FUN_0015bb40(0xffffffffffffffff,local_138 + 1), lVar6 == 0)) {
        (**(code **)(*local_138 + 0x10))(local_138);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      if ((plVar8 != (long *)0x0) &&
         (lVar6 = FUN_0015bb40(0xffffffffffffffff,plVar8 + 1), lVar6 == 0)) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      if (*(long *)(lVar2 + 0x28) == local_68) {
        return;
      }
    }
  }
  else {
                    /* try { // try from 00176e0c to 00176e1b has its CatchHandler @ 0017751c */
    FUN_0017369c(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,puVar9);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00176e28 to 00176e3b has its CatchHandler @ 00177200 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 00176e3c to 00176e4f has its CatchHandler @ 001771c4 */
    FUN_0015dcfc(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 00176e50 to 00176e5b has its CatchHandler @ 00177140 */
    std::__ndk1::to_string(1);
                    /* try { // try from 00176e5c to 00176e6b has its CatchHandler @ 0017711c */
    FUN_001693b0(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 00176e6c to 00176e7f has its CatchHandler @ 001770f8 */
    FUN_0015dcfc(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 00176e80 to 00176e8b has its CatchHandler @ 001770d4 */
    std::__ndk1::to_string(uVar10);
                    /* try { // try from 00176e8c to 00176e9b has its CatchHandler @ 001770b0 */
    FUN_001693b0(auStack_b0,auStack_c8,&local_140);
                    /* try { // try from 00176e9c to 00176eaf has its CatchHandler @ 0017708c */
    FUN_0015dcfc(local_98,auStack_b0,&DAT_001374e6);
                    /* try { // try from 00176eb4 to 00176eef has its CatchHandler @ 0017702c */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_001b9f78,PTR__JSError_001b9f68);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00177548  FUN_00177548 =====

void FUN_00177548(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_001ba098) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00177598  FUN_00177598 =====

undefined * FUN_00177598(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_001ba0a0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001775d8  FUN_001775d8 =====

void FUN_001775d8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_0015bb40(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
     ) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00177664  FUN_00177664 =====

void FUN_00177664(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_0015bb40(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
     ) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001776f0  FUN_001776f0 =====

void FUN_001776f0(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_001b79d0;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00177734  FUN_00177734 =====

void FUN_00177734(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_001b79d0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017778c  FUN_0017778c =====

void FUN_0017778c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x28);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    facebook::jsi::HostObject::~HostObject((HostObject *)(param_1 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017780c  FUN_0017780c =====

void FUN_0017780c(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00177844  FUN_00177844 =====

void FUN_00177844(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_001b7590;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete((void *)param_1[3]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001778b0  FUN_001778b0 =====

void FUN_001778b0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_001b7590;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00177918  FUN_00177918 =====

undefined8 * FUN_00177918(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x38);
  bVar2 = *(byte *)(param_1 + 8);
  *puVar4 = &PTR_FUN_001b7590;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 00177978 to 0017797b has its CatchHandler @ 001779b4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar4 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    puVar4[5] = *(undefined8 *)(param_1 + 0x28);
    puVar4[4] = uVar6;
    *(undefined4 *)(puVar4 + 6) = uVar1;
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001779dc  FUN_001779dc =====

void FUN_001779dc(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_001b7590;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar4;
    param_2[1] = uVar3;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x30);
    param_2[5] = uVar4;
    param_2[4] = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00177a74  FUN_00177a74 =====

void FUN_00177a74(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00177ad4  FUN_00177ad4 =====

void FUN_00177ad4(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00177b30  FUN_00177b30 =====

void FUN_00177b30(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 ulong *param_6)

{
  ulong uVar1;
  long lVar2;
  byte *pbVar3;
  undefined *puVar4;
  int iVar5;
  JSError *pJVar6;
  byte *pbVar7;
  ulong uVar8;
  code *pcVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  undefined8 local_148 [3];
  undefined8 local_130 [3];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined8 *local_a0;
  undefined8 local_98;
  byte *local_88;
  byte *local_80;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  uVar8 = *param_6;
  local_a0 = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 00177b8c to 00177b9b has its CatchHandler @ 00177f38 */
  (**(code **)(*param_3 + 0x160))(&local_88,param_3,&local_a0);
  pbVar10 = local_80;
  if ((local_88 == (byte *)0x0) || (*(undefined **)local_88 != PTR_vtable_001b9ff8 + 0x70)) {
    pbVar7 = (byte *)0x0;
    pbVar11 = (byte *)0x0;
    if (local_80 == (byte *)0x0) goto joined_r0x00177c10;
  }
  else {
    pbVar7 = local_88 + -0x60;
    if (local_80 == (byte *)0x0) {
      pbVar11 = (byte *)0x0;
      goto joined_r0x00177c10;
    }
    FUN_0015c230(1,local_80 + 8);
    pbVar11 = pbVar10;
  }
  lVar12 = FUN_0015bb40(0xffffffffffffffff,pbVar10 + 8);
  if (lVar12 == 0) {
    (**(code **)(*(long *)pbVar10 + 0x10))(pbVar10);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x00177c10:
  if (local_a0 != (undefined8 *)0x0) {
    (**(code **)*local_a0)();
  }
  if (uVar8 == 0) {
    pcVar9 = *(code **)(param_2 + 0x20);
    uVar8 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_23HybridNitroModulesProxyENSt6__ndk16vectorINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEENS9_ISB_EEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSH_FT0_DpT1_ERNSF_7RuntimeEPKSG_mNS4_16integer_sequenceImJXspT2_EEEEE12defaultValue_001ba070
         & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_23HybridNitroModulesProxyENSt6__ndk16vectorINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEENS9_ISB_EEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSH_FT0_DpT1_ERNSF_7RuntimeEPKSG_mNS4_16integer_sequenceImJXspT2_EEEEE12defaultValue_001ba070
                                   ),
       puVar4 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_23HybridNitroModulesProxyENSt6__ndk16vectorINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEENS9_ISB_EEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSH_FT0_DpT1_ERNSF_7RuntimeEPKSG_mNS4_16integer_sequenceImJXspT2_EEEEE12defaultValue_001ba068
       , iVar5 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_23HybridNitroModulesProxyENSt6__ndk16vectorINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEENS9_ISB_EEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSH_FT0_DpT1_ERNSF_7RuntimeEPKSG_mNS4_16integer_sequenceImJXspT2_EEEEE12defaultValue_001ba068
           = 0;
      __cxa_atexit(PTR__Value_001b9f60,puVar4,&PTR_LOOP_001b6ad0);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_23HybridNitroModulesProxyENSt6__ndk16vectorINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEENS9_ISB_EEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSH_FT0_DpT1_ERNSF_7RuntimeEPKSG_mNS4_16integer_sequenceImJXspT2_EEEEE12defaultValue_001ba070
                         );
    }
    if ((uVar8 & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(pbVar7 + ((long)uVar8 >> 1)));
    }
                    /* try { // try from 00177c48 to 00177c4f has its CatchHandler @ 00177f28 */
    (*pcVar9)(&local_88);
                    /* try { // try from 00177c70 to 00177c7b has its CatchHandler @ 00177f18 */
    (**(code **)(*param_3 + 0x230))
              (local_130,param_3,((long)local_80 - (long)local_88 >> 3) * -0x5555555555555555);
    local_148[0] = local_130[0];
    pbVar10 = local_80;
    if (local_80 != local_88) {
      lVar12 = 0;
      uVar8 = 0;
      do {
        pbVar10 = local_88 + lVar12;
        uVar1 = *(ulong *)(pbVar10 + 8);
        pbVar7 = *(byte **)(pbVar10 + 0x10);
        if ((*pbVar10 & 1) == 0) {
          pbVar7 = pbVar10 + 1;
          uVar1 = (ulong)(*pbVar10 >> 1);
        }
                    /* try { // try from 00177ccc to 00177cd7 has its CatchHandler @ 0017806c */
        (**(code **)(*param_3 + 0x110))(local_130,param_3,pbVar7,uVar1);
        local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,6);
        local_98 = local_130[0];
                    /* try { // try from 00177cec to 00177cff has its CatchHandler @ 00178078 */
        (**(code **)(*param_3 + 0x268))(param_3,local_148,uVar8,&local_a0);
        facebook::jsi::Value::~Value((Value *)&local_a0);
        uVar8 = uVar8 + 1;
        lVar12 = lVar12 + 0x18;
        pbVar10 = local_88;
      } while (uVar8 < (ulong)(((long)local_80 - (long)local_88 >> 3) * -0x5555555555555555));
    }
    *(undefined8 *)(param_1 + 2) = local_148[0];
    *param_1 = 7;
    pbVar7 = local_80;
    if (pbVar10 != (byte *)0x0) {
      while (pbVar3 = pbVar7, pbVar3 != pbVar10) {
        pbVar7 = pbVar3 + -0x18;
        local_80 = local_88;
        if ((*pbVar7 & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + -8));
          local_80 = local_88;
        }
      }
      operator_delete(local_80);
    }
    if ((pbVar11 != (byte *)0x0) &&
       (lVar12 = FUN_0015bb40(0xffffffffffffffff,pbVar11 + 8), lVar12 == 0)) {
      (**(code **)(*(long *)pbVar11 + 0x10))(pbVar11);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar2 + 0x28) == local_70) {
      return;
    }
  }
  else {
                    /* try { // try from 00177df0 to 00177dff has its CatchHandler @ 00178404 */
    FUN_0017369c(&local_88,*(undefined4 *)(param_2 + 0x30),param_2 + 8,pbVar7);
    pJVar6 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00177e0c to 00177e1f has its CatchHandler @ 001783e4 */
    std::__ndk1::operator+("`",(basic_string *)&local_88);
                    /* try { // try from 00177e20 to 00177e33 has its CatchHandler @ 001783cc */
    FUN_0015dcfc(auStack_100,auStack_118,"` expected ");
                    /* try { // try from 00177e34 to 00177e3f has its CatchHandler @ 0017839c */
    std::__ndk1::to_string(0);
                    /* try { // try from 00177e40 to 00177e4f has its CatchHandler @ 00178048 */
    FUN_001693b0(auStack_e8,auStack_100,local_130);
                    /* try { // try from 00177e50 to 00177e63 has its CatchHandler @ 00178024 */
    FUN_0015dcfc(auStack_d0,auStack_e8," arguments, but received ");
                    /* try { // try from 00177e64 to 00177e6f has its CatchHandler @ 00178000 */
    std::__ndk1::to_string(uVar8);
                    /* try { // try from 00177e70 to 00177e7f has its CatchHandler @ 00177fdc */
    FUN_001693b0(auStack_b8,auStack_d0,local_148);
                    /* try { // try from 00177e80 to 00177e93 has its CatchHandler @ 00177fb8 */
    FUN_0015dcfc(&local_a0,auStack_b8,&DAT_001374e6);
                    /* try { // try from 00177e98 to 00177ed3 has its CatchHandler @ 00177f58 */
    facebook::jsi::JSError::JSError(pJVar6,param_3,&local_a0);
    if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar6,PTR_typeinfo_001b9f78,PTR__JSError_001b9f68);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017842c  FUN_0017842c =====

void FUN_0017842c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_001ba078) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0017847c  FUN_0017847c =====

undefined * FUN_0017847c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_001ba080;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001784bc  FUN_001784bc =====

void FUN_001784bc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_001b7510;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete((void *)param_1[3]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00178528  FUN_00178528 =====

void FUN_00178528(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_001b7510;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00178590  FUN_00178590 =====

undefined8 * FUN_00178590(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined8 *)operator_new(0x30);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar3 = &PTR_FUN_001b7510;
  if ((bVar1 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 8);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    puVar3[2] = *(undefined8 *)(param_1 + 0x10);
    puVar3[1] = uVar6;
    puVar3[3] = uVar5;
  }
  else {
                    /* try { // try from 001785f0 to 001785f3 has its CatchHandler @ 00178624 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar3 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  puVar3[5] = *(undefined8 *)(param_1 + 0x28);
  puVar3[4] = uVar5;
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017864c  FUN_0017864c =====

void FUN_0017864c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_001b7510;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar4;
    param_2[1] = uVar3;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[4] = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001786dc  FUN_001786dc =====

void FUN_001786dc(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017873c  FUN_0017873c =====

void FUN_0017873c(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00178798  FUN_00178798 =====

void FUN_00178798(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
                 undefined8 *param_6)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *local_80;
  undefined8 *local_78;
  long *plStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar5 = *param_5;
  uVar6 = *param_6;
  local_80 = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 001787fc to 0017880b has its CatchHandler @ 00178938 */
  (**(code **)(*param_3 + 0x160))(&local_78,param_3,&local_80);
  if ((local_78 == (undefined8 *)0x0) || ((undefined *)*local_78 != PTR_vtable_001b9ff8 + 0x70)) {
    puVar8 = (undefined8 *)0x0;
    plVar7 = (long *)0x0;
    if (plStack_70 == (long *)0x0) goto joined_r0x00178880;
  }
  else {
    puVar8 = local_78 + -0xc;
    if (plStack_70 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto joined_r0x00178880;
    }
    FUN_0015c230(1,plStack_70 + 1);
    plVar7 = plStack_70;
  }
  lVar3 = FUN_0015bb40(0xffffffffffffffff,plStack_70 + 1);
  if (lVar3 == 0) {
    (**(code **)(*plStack_70 + 0x10))(plStack_70);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x00178880:
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)();
  }
  pcVar4 = *(code **)(param_2 + 0x20);
  plVar1 = (long *)((long)puVar8 + ((long)*(ulong *)(param_2 + 0x28) >> 1));
  if ((*(ulong *)(param_2 + 0x28) & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *plVar1);
  }
                    /* try { // try from 001788a4 to 001788bb has its CatchHandler @ 00178928 */
  (*pcVar4)(param_1,plVar1,param_3,param_4,uVar5,uVar6);
  if ((plVar7 != (long *)0x0) && (lVar3 = FUN_0015bb40(0xffffffffffffffff,plVar7 + 1), lVar3 == 0))
  {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00178970  FUN_00178970 =====

void FUN_00178970(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_001ba058) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 001789c0  FUN_001789c0 =====

undefined * FUN_001789c0(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_001ba060;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00178a00  FUN_00178a00 =====

void FUN_00178a00(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_001b7490;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete((void *)param_1[3]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00178a6c  FUN_00178a6c =====

void FUN_00178a6c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_001b7490;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00178ad4  FUN_00178ad4 =====

undefined8 * FUN_00178ad4(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x38);
  bVar2 = *(byte *)(param_1 + 8);
  *puVar4 = &PTR_FUN_001b7490;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 00178b34 to 00178b37 has its CatchHandler @ 00178b70 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar4 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    puVar4[5] = *(undefined8 *)(param_1 + 0x28);
    puVar4[4] = uVar6;
    *(undefined4 *)(puVar4 + 6) = uVar1;
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00178b98  FUN_00178b98 =====

void FUN_00178b98(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_001b7490;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar4;
    param_2[1] = uVar3;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x30);
    param_2[5] = uVar4;
    param_2[4] = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00178c30  FUN_00178c30 =====

void FUN_00178c30(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00178c90  FUN_00178c90 =====

void FUN_00178c90(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00178cec  FUN_00178cec =====

void FUN_00178cec(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
                 ulong *param_6)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  JSError *pJVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  IRuntime *pIVar11;
  code *pcVar12;
  undefined1 auStack_140 [24];
  undefined8 *local_128 [3];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  basic_string local_80;
  undefined7 uStack_7f;
  long *plStack_78;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pIVar11 = (IRuntime *)*param_5;
  uVar10 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 00178d4c to 00178d5b has its CatchHandler @ 00179350 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  puVar9 = (undefined8 *)CONCAT71(uStack_7f,local_80);
  if ((puVar9 == (undefined8 *)0x0) || ((undefined *)*puVar9 != PTR_vtable_001b9ff8 + 0x70)) {
    puVar9 = (undefined8 *)0x0;
    plVar8 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x00178dd0;
  }
  else {
    puVar9 = puVar9 + -0xc;
    if (plStack_78 == (long *)0x0) {
      plVar8 = (long *)0x0;
      goto joined_r0x00178dd0;
    }
    FUN_0015c230(1,plStack_78 + 1);
    plVar8 = plStack_78;
  }
  lVar6 = FUN_0015bb40(0xffffffffffffffff,plStack_78 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x00178dd0:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar10 == 1) {
    pcVar12 = *(code **)(param_2 + 0x20);
    uVar10 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_001ba040 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_defaultValue_001ba040), puVar3 = PTR_defaultValue_001ba038,
       iVar5 != 0)) {
      *(undefined4 *)PTR_defaultValue_001ba038 = 0;
      __cxa_atexit(PTR__Value_001b9f60,puVar3,&PTR_LOOP_001b6ad0);
      __cxa_guard_release(PTR_defaultValue_001ba040);
    }
    plVar1 = (long *)((long)puVar9 + ((long)uVar10 >> 1));
    if ((uVar10 & 1) != 0) {
      pcVar12 = *(code **)(pcVar12 + *plVar1);
    }
                    /* try { // try from 00178e0c to 00178e1b has its CatchHandler @ 0017905c */
    facebook::jsi::Value::asString(pIVar11);
                    /* try { // try from 00178e24 to 00178e33 has its CatchHandler @ 00179038 */
    (**(code **)(*param_3 + 0x120))(&local_80,param_3,local_128);
    if (local_128[0] != (undefined8 *)0x0) {
      (**(code **)*local_128[0])();
    }
                    /* try { // try from 00178e48 to 00178e53 has its CatchHandler @ 0017901c */
    bVar4 = (*pcVar12)(plVar1,&local_80);
    if (((byte)local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    *param_1 = 2;
    *(byte *)(param_1 + 2) = bVar4 & 1;
    if ((plVar8 != (long *)0x0) && (lVar6 = FUN_0015bb40(0xffffffffffffffff,plVar8 + 1), lVar6 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 00178ee8 to 00178ef7 has its CatchHandler @ 001794f0 */
    FUN_0017369c(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,puVar9);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00178f04 to 00178f17 has its CatchHandler @ 001794d0 */
    std::__ndk1::operator+("`",&local_80);
                    /* try { // try from 00178f18 to 00178f2b has its CatchHandler @ 001794b8 */
    FUN_0015dcfc(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 00178f2c to 00178f37 has its CatchHandler @ 00179488 */
    std::__ndk1::to_string(1);
                    /* try { // try from 00178f38 to 00178f47 has its CatchHandler @ 00179464 */
    FUN_001693b0(auStack_e0,auStack_f8,local_128);
                    /* try { // try from 00178f48 to 00178f5b has its CatchHandler @ 00179440 */
    FUN_0015dcfc(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 00178f5c to 00178f67 has its CatchHandler @ 0017941c */
    std::__ndk1::to_string(uVar10);
                    /* try { // try from 00178f68 to 00178f77 has its CatchHandler @ 001793f8 */
    FUN_001693b0(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 00178f78 to 00178f8b has its CatchHandler @ 001793d0 */
    FUN_0015dcfc(local_98,auStack_b0,&DAT_001374e6);
                    /* try { // try from 00178f90 to 00178fcb has its CatchHandler @ 00179370 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_001b9f78,PTR__JSError_001b9f68);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00179518  FUN_00179518 =====

void FUN_00179518(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_001ba048) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00179568  FUN_00179568 =====

undefined * FUN_00179568(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_001ba050;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001795a8  FUN_001795a8 =====

void FUN_001795a8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_001b7400;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete((void *)param_1[3]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00179614  FUN_00179614 =====

void FUN_00179614(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_001b7400;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017967c  FUN_0017967c =====

undefined8 * FUN_0017967c(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x38);
  bVar2 = *(byte *)(param_1 + 8);
  *puVar4 = &PTR_FUN_001b7400;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 001796dc to 001796df has its CatchHandler @ 00179718 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar4 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    puVar4[5] = *(undefined8 *)(param_1 + 0x28);
    puVar4[4] = uVar6;
    *(undefined4 *)(puVar4 + 6) = uVar1;
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00179740  FUN_00179740 =====

void FUN_00179740(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_001b7400;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar4;
    param_2[1] = uVar3;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x30);
    param_2[5] = uVar4;
    param_2[4] = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001797d8  FUN_001797d8 =====

void FUN_001797d8(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00179838  FUN_00179838 =====

void FUN_00179838(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00179894  FUN_00179894 =====

void FUN_00179894(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
                 ulong *param_6)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  JSError *pJVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  IRuntime *pIVar10;
  code *pcVar11;
  undefined8 *local_140 [3];
  undefined8 local_128;
  long *local_120;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  basic_string local_80;
  undefined7 uStack_7f;
  long *plStack_78;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pIVar10 = (IRuntime *)*param_5;
  uVar9 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 001798f4 to 00179903 has its CatchHandler @ 00179f40 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  puVar8 = (undefined8 *)CONCAT71(uStack_7f,local_80);
  if ((puVar8 == (undefined8 *)0x0) || ((undefined *)*puVar8 != PTR_vtable_001b9ff8 + 0x70)) {
    puVar8 = (undefined8 *)0x0;
    plVar7 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x00179978;
  }
  else {
    puVar8 = puVar8 + -0xc;
    if (plStack_78 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto joined_r0x00179978;
    }
    FUN_0015c230(1,plStack_78 + 1);
    plVar7 = plStack_78;
  }
  lVar5 = FUN_0015bb40(0xffffffffffffffff,plStack_78 + 1);
  if (lVar5 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x00179978:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar9 == 1) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_001ba020 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_defaultValue_001ba020), puVar3 = PTR_defaultValue_001ba018,
       iVar4 != 0)) {
      *(undefined4 *)PTR_defaultValue_001ba018 = 0;
      __cxa_atexit(PTR__Value_001b9f60,puVar3,&PTR_LOOP_001b6ad0);
      __cxa_guard_release(PTR_defaultValue_001ba020);
    }
    plVar1 = (long *)((long)puVar8 + ((long)uVar9 >> 1));
    if ((uVar9 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *plVar1);
    }
                    /* try { // try from 001799b4 to 001799c3 has its CatchHandler @ 00179c4c */
    facebook::jsi::Value::asString(pIVar10);
                    /* try { // try from 001799cc to 001799db has its CatchHandler @ 00179c28 */
    (**(code **)(*param_3 + 0x120))(&local_80,param_3,local_140);
    if (local_140[0] != (undefined8 *)0x0) {
      (**(code **)*local_140[0])();
    }
                    /* try { // try from 001799f0 to 001799ff has its CatchHandler @ 00179c0c */
    (*pcVar11)(&local_128,plVar1,&local_80);
    if (((byte)local_80 & 1) != 0) {
      operator_delete(local_70);
    }
                    /* try { // try from 00179a14 to 00179a1f has its CatchHandler @ 00179bf4 */
    FUN_001766f0(param_1,param_3,local_128);
    if ((local_120 != (long *)0x0) &&
       (lVar5 = FUN_0015bb40(0xffffffffffffffff,local_120 + 1), lVar5 == 0)) {
      (**(code **)(*local_120 + 0x10))(local_120);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if ((plVar7 != (long *)0x0) && (lVar5 = FUN_0015bb40(0xffffffffffffffff,plVar7 + 1), lVar5 == 0)
       ) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 00179ac0 to 00179acf has its CatchHandler @ 0017a0e0 */
    FUN_0017369c(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,puVar8);
    pJVar6 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00179adc to 00179aef has its CatchHandler @ 0017a0c0 */
    std::__ndk1::operator+("`",&local_80);
                    /* try { // try from 00179af0 to 00179b03 has its CatchHandler @ 0017a0a8 */
    FUN_0015dcfc(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 00179b04 to 00179b0f has its CatchHandler @ 0017a078 */
    std::__ndk1::to_string(1);
                    /* try { // try from 00179b10 to 00179b1f has its CatchHandler @ 0017a054 */
    FUN_001693b0(auStack_e0,auStack_f8,&local_128);
                    /* try { // try from 00179b20 to 00179b33 has its CatchHandler @ 0017a030 */
    FUN_0015dcfc(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 00179b34 to 00179b3f has its CatchHandler @ 0017a00c */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 00179b40 to 00179b4f has its CatchHandler @ 00179fe8 */
    FUN_001693b0(auStack_b0,auStack_c8,local_140);
                    /* try { // try from 00179b50 to 00179b63 has its CatchHandler @ 00179fc0 */
    FUN_0015dcfc(local_98,auStack_b0,&DAT_001374e6);
                    /* try { // try from 00179b68 to 00179ba3 has its CatchHandler @ 00179f60 */
    facebook::jsi::JSError::JSError(pJVar6,param_3,local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar6,PTR_typeinfo_001b9f78,PTR__JSError_001b9f68);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017a108  FUN_0017a108 =====

void FUN_0017a108(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_001ba028) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0017a158  FUN_0017a158 =====

undefined * FUN_0017a158(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_001ba030;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017a198  margelo::nitro::HybridNitroModulesProxy::debug_notifyHybridObjectAllocated =====

/* margelo::nitro::HybridNitroModulesProxy::debug_notifyHybridObjectAllocated() */

void margelo::nitro::HybridNitroModulesProxy::debug_notifyHybridObjectAllocated(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_0015c230(1,&DAT_001bfca0);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017a1e8  margelo::nitro::HybridNitroModulesProxy::debug_notifyHybridObjectDeallocated =====

/* margelo::nitro::HybridNitroModulesProxy::debug_notifyHybridObjectDeallocated() */

void margelo::nitro::HybridNitroModulesProxy::debug_notifyHybridObjectDeallocated(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_0015c230(0xffffffffffffffff,&DAT_001bfca0);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017a238  margelo::nitro::install =====

/* margelo::nitro::install(facebook::jsi::Runtime&,
   std::__ndk1::shared_ptr<margelo::nitro::Dispatcher>) */

void margelo::nitro::install(Runtime *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 local_48;
  long *plStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_48 = *param_2;
  plVar1 = (long *)param_2[1];
  plStack_40 = plVar1;
  if (plVar1 != (long *)0x0) {
    FUN_0015c230(1,plVar1 + 1);
  }
                    /* try { // try from 0017a274 to 0017a27f has its CatchHandler @ 0017a2d4 */
  Dispatcher::installRuntimeGlobalDispatcher(param_1,&local_48);
  if ((plVar1 != (long *)0x0) && (lVar3 = FUN_0015bb40(0xffffffffffffffff,plVar1 + 1), lVar3 == 0))
  {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    install(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017a2fc  margelo::nitro::install =====

/* margelo::nitro::install(facebook::jsi::Runtime&) */

void margelo::nitro::install(Runtime *param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  Runtime *pRVar6;
  Value aVStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)operator_new(0x80);
  puVar2 = PTR_vtable_001b9ff8;
  *plVar3 = (long)&PTR_FUN_001b7a58;
  plVar5 = plVar3 + 1;
  *plVar5 = 0;
  pRVar6 = (Runtime *)(plVar3 + 3);
  *(undefined **)pRVar6 = puVar2 + 0x18;
  plVar3[2] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  *(undefined1 *)(plVar3 + 6) = 0;
  plVar3[9] = (long)"NitroModulesProxy";
  plVar3[7] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  *(undefined4 *)(plVar3 + 0xe) = 0x3f800000;
  plVar3[0xf] = (long)(puVar2 + 0x70);
  FUN_0015c230(1,plVar5);
  FUN_0015c230(1,plVar3 + 2);
  plVar3[7] = (long)pRVar6;
  plVar3[8] = (long)plVar3;
  lVar4 = FUN_0015bb40(0xffffffffffffffff,plVar5);
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0017a3d4 to 0017a3e3 has its CatchHandler @ 0017a45c */
  HybridObject::toObject(pRVar6);
                    /* try { // try from 0017a3e4 to 0017a3f3 has its CatchHandler @ 0017a44c */
  CommonGlobals::defineGlobal(param_1,2,aVStack_58);
  facebook::jsi::Value::~Value(aVStack_58);
  lVar4 = FUN_0015bb40(0xffffffffffffffff,plVar5);
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017a484  FUN_0017a484 =====

void FUN_0017a484(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_0015bb40(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
     ) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017a510  FUN_0017a510 =====

void FUN_0017a510(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_001b7a58;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017a554  FUN_0017a554 =====

void FUN_0017a554(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_001b7a58;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017a5ac  FUN_0017a5ac =====

void FUN_0017a5ac(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(param_1 + 0x18));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState((NativeState *)(param_1 + 0x78));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017a608  FUN_0017a608 =====

void FUN_0017a608(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017a640  margelo::nitro::JSICache::~JSICache =====

/* margelo::nitro::JSICache::~JSICache() */

void __thiscall margelo::nitro::JSICache::~JSICache(JSICache *this)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  Value *pVVar5;
  long *plVar6;
  ulong uVar7;
  runtime_error *prVar8;
  long lVar9;
  long *plVar10;
  void *pvVar11;
  void *pvVar12;
  void *pvVar13;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  basic_string abStack_88 [24];
  Value *local_70;
  long *local_68;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 0017a66c to 0017a673 has its CatchHandler @ 0017b338 */
  std::__ndk1::mutex::lock();
  puVar3 = *(undefined8 **)(this + 0x38);
  for (puVar2 = *(undefined8 **)(this + 0x30); puVar2 != puVar3; puVar2 = puVar2 + 2) {
                    /* try { // try from 0017a6a0 to 0017a6a7 has its CatchHandler @ 0017b444 */
    std::__ndk1::mutex::lock();
    if ((*(byte *)(puVar2[1] + 0x10) & 1) == 0) {
      local_70 = (Value *)*puVar2;
      local_68 = (long *)puVar2[1];
      FUN_0015bb40(1);
      plVar1 = local_68;
      pVVar5 = local_70;
      std::__ndk1::mutex::unlock();
      plVar6 = local_68;
      plVar10 = plVar1;
      if ((pVVar5 != (Value *)0x0) && (plVar10 = local_68, (*(byte *)(plVar1 + 2) & 1) == 0)) {
                    /* try { // try from 0017a6f0 to 0017a6f7 has its CatchHandler @ 0017b3a0 */
        std::__ndk1::mutex::lock();
        pVVar5 = local_70;
        if ((*(byte *)(plVar6 + 2) & 1) == 0) {
          if (local_70 != (Value *)0x0) {
            facebook::jsi::Value::~Value(local_70);
            operator_delete(pVVar5);
          }
          local_70 = (Value *)0x0;
          *(undefined4 *)(local_68 + 2) = 1;
        }
        plVar10 = local_68;
        std::__ndk1::mutex::unlock();
      }
      if (plVar10 != (long *)0x0) {
        uVar7 = FUN_0015bb40(0xffffffffffffffff,plVar10);
        pVVar5 = local_70;
        if (uVar7 < 2) {
          if ((*(byte *)(local_68 + 2) & 1) == 0) {
            if (local_70 != (Value *)0x0) {
              facebook::jsi::Value::~Value(local_70);
              operator_delete(pVVar5);
            }
            local_70 = (Value *)0x0;
            *(undefined4 *)(local_68 + 2) = 1;
            goto LAB_0017a788;
          }
          lVar9 = *local_68;
          plVar1 = local_68;
        }
        else {
LAB_0017a788:
          lVar9 = *local_68;
          plVar1 = local_68;
        }
        local_68 = plVar1;
        if (((lVar9 == 0) && (plVar1[1] == 0)) && (plVar1 != (long *)0x0)) {
          std::__ndk1::mutex::~mutex((mutex *)((long)plVar1 + 0x14));
          operator_delete(plVar1);
        }
      }
    }
    else {
      std::__ndk1::mutex::unlock();
    }
  }
  puVar3 = *(undefined8 **)(this + 0x50);
  for (puVar2 = *(undefined8 **)(this + 0x48); puVar2 != puVar3; puVar2 = puVar2 + 2) {
                    /* try { // try from 0017a800 to 0017a807 has its CatchHandler @ 0017b440 */
    std::__ndk1::mutex::lock();
    if ((*(byte *)(puVar2[1] + 0x10) & 1) == 0) {
      local_70 = (Value *)*puVar2;
      local_68 = (long *)puVar2[1];
      FUN_0015bb40(1);
      plVar1 = local_68;
      pVVar5 = local_70;
      std::__ndk1::mutex::unlock();
      plVar6 = local_68;
      plVar10 = plVar1;
      if ((pVVar5 != (Value *)0x0) && (plVar10 = local_68, (*(byte *)(plVar1 + 2) & 1) == 0)) {
                    /* try { // try from 0017a850 to 0017a857 has its CatchHandler @ 0017b38c */
        std::__ndk1::mutex::lock();
        pVVar5 = local_70;
        if ((*(byte *)(plVar6 + 2) & 1) == 0) {
          if (local_70 != (Value *)0x0) {
            if (*(undefined8 **)local_70 != (undefined8 *)0x0) {
              (**(code **)**(undefined8 **)local_70)();
            }
            operator_delete(pVVar5);
          }
          local_70 = (Value *)0x0;
          *(undefined4 *)(local_68 + 2) = 1;
        }
        plVar10 = local_68;
        std::__ndk1::mutex::unlock();
      }
      if (plVar10 != (long *)0x0) {
        uVar7 = FUN_0015bb40(0xffffffffffffffff,plVar10);
        pVVar5 = local_70;
        if (uVar7 < 2) {
          if ((*(byte *)(local_68 + 2) & 1) == 0) {
            if (local_70 != (Value *)0x0) {
              if (*(undefined8 **)local_70 != (undefined8 *)0x0) {
                (**(code **)**(undefined8 **)local_70)();
              }
              operator_delete(pVVar5);
            }
            local_70 = (Value *)0x0;
            *(undefined4 *)(local_68 + 2) = 1;
            goto LAB_0017a900;
          }
          lVar9 = *local_68;
          plVar1 = local_68;
        }
        else {
LAB_0017a900:
          lVar9 = *local_68;
          plVar1 = local_68;
        }
        local_68 = plVar1;
        if (((lVar9 == 0) && (plVar1[1] == 0)) && (plVar1 != (long *)0x0)) {
          std::__ndk1::mutex::~mutex((mutex *)((long)plVar1 + 0x14));
          operator_delete(plVar1);
        }
      }
    }
    else {
      std::__ndk1::mutex::unlock();
    }
  }
  puVar3 = *(undefined8 **)(this + 0x68);
  for (puVar2 = *(undefined8 **)(this + 0x60); puVar2 != puVar3; puVar2 = puVar2 + 2) {
                    /* try { // try from 0017a978 to 0017a97f has its CatchHandler @ 0017b43c */
    std::__ndk1::mutex::lock();
    if ((*(byte *)(puVar2[1] + 0x10) & 1) == 0) {
      local_70 = (Value *)*puVar2;
      local_68 = (long *)puVar2[1];
      FUN_0015bb40(1);
      plVar1 = local_68;
      pVVar5 = local_70;
      std::__ndk1::mutex::unlock();
      plVar6 = local_68;
      plVar10 = plVar1;
      if ((pVVar5 != (Value *)0x0) && (plVar10 = local_68, (*(byte *)(plVar1 + 2) & 1) == 0)) {
                    /* try { // try from 0017a9c8 to 0017a9cf has its CatchHandler @ 0017b378 */
        std::__ndk1::mutex::lock();
        pVVar5 = local_70;
        if ((*(byte *)(plVar6 + 2) & 1) == 0) {
          if (local_70 != (Value *)0x0) {
            if (*(undefined8 **)local_70 != (undefined8 *)0x0) {
              (**(code **)**(undefined8 **)local_70)();
            }
            operator_delete(pVVar5);
          }
          local_70 = (Value *)0x0;
          *(undefined4 *)(local_68 + 2) = 1;
        }
        plVar10 = local_68;
        std::__ndk1::mutex::unlock();
      }
      if (plVar10 != (long *)0x0) {
        uVar7 = FUN_0015bb40(0xffffffffffffffff,plVar10);
        pVVar5 = local_70;
        if (uVar7 < 2) {
          if ((*(byte *)(local_68 + 2) & 1) == 0) {
            if (local_70 != (Value *)0x0) {
              if (*(undefined8 **)local_70 != (undefined8 *)0x0) {
                (**(code **)**(undefined8 **)local_70)();
              }
              operator_delete(pVVar5);
            }
            local_70 = (Value *)0x0;
            *(undefined4 *)(local_68 + 2) = 1;
            goto LAB_0017aa78;
          }
          lVar9 = *local_68;
          plVar1 = local_68;
        }
        else {
LAB_0017aa78:
          lVar9 = *local_68;
          plVar1 = local_68;
        }
        local_68 = plVar1;
        if (((lVar9 == 0) && (plVar1[1] == 0)) && (plVar1 != (long *)0x0)) {
          std::__ndk1::mutex::~mutex((mutex *)((long)plVar1 + 0x14));
          operator_delete(plVar1);
        }
      }
    }
    else {
      std::__ndk1::mutex::unlock();
    }
  }
  puVar3 = *(undefined8 **)(this + 0x80);
  for (puVar2 = *(undefined8 **)(this + 0x78); puVar2 != puVar3; puVar2 = puVar2 + 2) {
                    /* try { // try from 0017aaf0 to 0017aaf7 has its CatchHandler @ 0017b438 */
    std::__ndk1::mutex::lock();
    if ((*(byte *)(puVar2[1] + 0x10) & 1) == 0) {
      local_70 = (Value *)*puVar2;
      local_68 = (long *)puVar2[1];
      FUN_0015bb40(1);
      plVar1 = local_68;
      pVVar5 = local_70;
      std::__ndk1::mutex::unlock();
      plVar6 = local_68;
      plVar10 = plVar1;
      if ((pVVar5 != (Value *)0x0) && (plVar10 = local_68, (*(byte *)(plVar1 + 2) & 1) == 0)) {
                    /* try { // try from 0017ab40 to 0017ab47 has its CatchHandler @ 0017b364 */
        std::__ndk1::mutex::lock();
        pVVar5 = local_70;
        if ((*(byte *)(plVar6 + 2) & 1) == 0) {
          if (local_70 != (Value *)0x0) {
            if (*(undefined8 **)local_70 != (undefined8 *)0x0) {
              (**(code **)**(undefined8 **)local_70)();
            }
            operator_delete(pVVar5);
          }
          local_70 = (Value *)0x0;
          *(undefined4 *)(local_68 + 2) = 1;
        }
        plVar10 = local_68;
        std::__ndk1::mutex::unlock();
      }
      if (plVar10 != (long *)0x0) {
        uVar7 = FUN_0015bb40(0xffffffffffffffff,plVar10);
        pVVar5 = local_70;
        if (uVar7 < 2) {
          if ((*(byte *)(local_68 + 2) & 1) == 0) {
            if (local_70 != (Value *)0x0) {
              if (*(undefined8 **)local_70 != (undefined8 *)0x0) {
                (**(code **)**(undefined8 **)local_70)();
              }
              operator_delete(pVVar5);
            }
            local_70 = (Value *)0x0;
            *(undefined4 *)(local_68 + 2) = 1;
            goto LAB_0017abf0;
          }
          lVar9 = *local_68;
          plVar1 = local_68;
        }
        else {
LAB_0017abf0:
          lVar9 = *local_68;
          plVar1 = local_68;
        }
        local_68 = plVar1;
        if (((lVar9 == 0) && (plVar1[1] == 0)) && (plVar1 != (long *)0x0)) {
          std::__ndk1::mutex::~mutex((mutex *)((long)plVar1 + 0x14));
          operator_delete(plVar1);
        }
      }
    }
    else {
      std::__ndk1::mutex::unlock();
    }
  }
  puVar3 = *(undefined8 **)(this + 0x98);
  for (puVar2 = *(undefined8 **)(this + 0x90); puVar2 != puVar3; puVar2 = puVar2 + 2) {
                    /* try { // try from 0017ac68 to 0017ac6f has its CatchHandler @ 0017b434 */
    std::__ndk1::mutex::lock();
    if ((*(byte *)(puVar2[1] + 0x10) & 1) == 0) {
      local_70 = (Value *)*puVar2;
      local_68 = (long *)puVar2[1];
      FUN_0015bb40(1);
      plVar1 = local_68;
      pVVar5 = local_70;
      std::__ndk1::mutex::unlock();
      plVar6 = local_68;
      plVar10 = plVar1;
      if ((pVVar5 != (Value *)0x0) && (plVar10 = local_68, (*(byte *)(plVar1 + 2) & 1) == 0)) {
                    /* try { // try from 0017acb8 to 0017acbf has its CatchHandler @ 0017b350 */
        std::__ndk1::mutex::lock();
        pVVar5 = local_70;
        if ((*(byte *)(plVar6 + 2) & 1) == 0) {
          if (local_70 != (Value *)0x0) {
            if (*(undefined8 **)local_70 != (undefined8 *)0x0) {
              (**(code **)**(undefined8 **)local_70)();
            }
            operator_delete(pVVar5);
          }
          local_70 = (Value *)0x0;
          *(undefined4 *)(local_68 + 2) = 1;
        }
        plVar10 = local_68;
        std::__ndk1::mutex::unlock();
      }
      if (plVar10 != (long *)0x0) {
        uVar7 = FUN_0015bb40(0xffffffffffffffff,plVar10);
        pVVar5 = local_70;
        if (uVar7 < 2) {
          if ((*(byte *)(local_68 + 2) & 1) == 0) {
            if (local_70 != (Value *)0x0) {
              if (*(undefined8 **)local_70 != (undefined8 *)0x0) {
                (**(code **)**(undefined8 **)local_70)();
              }
              operator_delete(pVVar5);
            }
            local_70 = (Value *)0x0;
            *(undefined4 *)(local_68 + 2) = 1;
            goto LAB_0017ad68;
          }
          lVar9 = *local_68;
          plVar1 = local_68;
        }
        else {
LAB_0017ad68:
          lVar9 = *local_68;
          plVar1 = local_68;
        }
        local_68 = plVar1;
        if (((lVar9 == 0) && (plVar1[1] == 0)) && (plVar1 != (long *)0x0)) {
          std::__ndk1::mutex::~mutex((mutex *)((long)plVar1 + 0x14));
          operator_delete(plVar1);
        }
      }
    }
    else {
      std::__ndk1::mutex::unlock();
    }
  }
  puVar3 = *(undefined8 **)(this + 0xb0);
  for (puVar2 = *(undefined8 **)(this + 0xa8); puVar2 != puVar3; puVar2 = puVar2 + 2) {
                    /* try { // try from 0017ade0 to 0017ade7 has its CatchHandler @ 0017b430 */
    std::__ndk1::mutex::lock();
    if ((*(byte *)(puVar2[1] + 0x10) & 1) == 0) {
      local_70 = (Value *)*puVar2;
      local_68 = (long *)puVar2[1];
      FUN_0015bb40(1);
      plVar1 = local_68;
      pVVar5 = local_70;
      std::__ndk1::mutex::unlock();
      plVar6 = local_68;
      plVar10 = plVar1;
      if ((pVVar5 != (Value *)0x0) && (plVar10 = local_68, (*(byte *)(plVar1 + 2) & 1) == 0)) {
                    /* try { // try from 0017ae30 to 0017ae37 has its CatchHandler @ 0017b33c */
        std::__ndk1::mutex::lock();
        pVVar5 = local_70;
        if ((*(byte *)(plVar6 + 2) & 1) == 0) {
          if (local_70 != (Value *)0x0) {
            if (*(undefined8 **)local_70 != (undefined8 *)0x0) {
              (**(code **)**(undefined8 **)local_70)();
            }
            operator_delete(pVVar5);
          }
          local_70 = (Value *)0x0;
          *(undefined4 *)(local_68 + 2) = 1;
        }
        plVar10 = local_68;
        std::__ndk1::mutex::unlock();
      }
      if (plVar10 != (long *)0x0) {
        uVar7 = FUN_0015bb40(0xffffffffffffffff,plVar10);
        pVVar5 = local_70;
        if (uVar7 < 2) {
          if ((*(byte *)(local_68 + 2) & 1) == 0) {
            if (local_70 != (Value *)0x0) {
              if (*(undefined8 **)local_70 != (undefined8 *)0x0) {
                (**(code **)**(undefined8 **)local_70)();
              }
              operator_delete(pVVar5);
            }
            local_70 = (Value *)0x0;
            *(undefined4 *)(local_68 + 2) = 1;
            goto LAB_0017aee0;
          }
          lVar9 = *local_68;
          plVar1 = local_68;
        }
        else {
LAB_0017aee0:
          lVar9 = *local_68;
          plVar1 = local_68;
        }
        local_68 = plVar1;
        if (((lVar9 == 0) && (plVar1[1] == 0)) && (plVar1 != (long *)0x0)) {
          std::__ndk1::mutex::~mutex((mutex *)((long)plVar1 + 0x14));
          operator_delete(plVar1);
        }
      }
    }
    else {
      std::__ndk1::mutex::unlock();
    }
  }
  std::__ndk1::mutex::unlock();
  pvVar12 = *(void **)(this + 0xa8);
  if (pvVar12 != (void *)0x0) {
    pvVar13 = *(void **)(this + 0xb0);
    pvVar11 = pvVar12;
    if (pvVar13 != pvVar12) {
      do {
        if (((*(long *)((long)pvVar13 + -8) != 0) &&
            (FUN_0015bb40(0xffffffffffffffff,*(long *)((long)pvVar13 + -8) + 8),
            **(long **)((long)pvVar13 + -8) == 0)) &&
           (*(long *)(*(long *)((long)pvVar13 + -8) + 8) == 0)) {
          if ((*(byte *)(*(long *)((long)pvVar13 + -8) + 0x10) & 1) == 0) {
                    /* try { // try from 0017b1e4 to 0017b1f7 has its CatchHandler @ 0017b4c4 */
            FUN_001695dc(&local_70,PTR_typeinfo_name_001ba138,1);
            prVar8 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0017b204 to 0017b217 has its CatchHandler @ 0017b49c */
            std::__ndk1::operator+("WeakReference<",(basic_string *)&local_70);
                    /* try { // try from 0017b218 to 0017b22b has its CatchHandler @ 0017b480 */
            FUN_0015dcfc(auStack_b8,auStack_d0,
                         "> encountered a stale `_value` - BorrowingReference<");
                    /* try { // try from 0017b22c to 0017b23b has its CatchHandler @ 0017b44c */
            FUN_0016955c(auStack_a0,auStack_b8,&local_70);
                    /* try { // try from 0017b23c to 0017b24f has its CatchHandler @ 0017b40c */
            FUN_0015dcfc(abStack_88,auStack_a0,"> should\'ve already deleted this!");
                    /* try { // try from 0017b254 to 0017b28b has its CatchHandler @ 0017b3cc */
            std::runtime_error::runtime_error(prVar8,abStack_88);
            if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
              __cxa_throw(prVar8,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
            }
            goto LAB_0017b334;
          }
          pvVar11 = *(void **)((long)pvVar13 + -8);
          if (pvVar11 != (void *)0x0) {
            std::__ndk1::mutex::~mutex((mutex *)((long)pvVar11 + 0x14));
            operator_delete(pvVar11);
          }
          *(undefined8 *)((long)pvVar13 + -8) = 0;
        }
        pvVar13 = (void *)((long)pvVar13 + -0x10);
      } while (pvVar13 != pvVar12);
      pvVar11 = *(void **)(this + 0xa8);
    }
    *(void **)(this + 0xb0) = pvVar12;
    operator_delete(pvVar11);
  }
  pvVar12 = *(void **)(this + 0x90);
  if (pvVar12 != (void *)0x0) {
    pvVar13 = *(void **)(this + 0x98);
    pvVar11 = pvVar12;
    if (pvVar13 != pvVar12) {
      do {
        plVar1 = (long *)((long)pvVar13 + -8);
        pvVar13 = (void *)((long)pvVar13 + -0x10);
        if (*plVar1 != 0) {
          FUN_0015bb40(0xffffffffffffffff,*plVar1 + 8);
                    /* try { // try from 0017b004 to 0017b00b has its CatchHandler @ 0017b3c0 */
          FUN_0017b4c8(pvVar13);
        }
      } while (pvVar13 != pvVar12);
      pvVar11 = *(void **)(this + 0x90);
    }
    *(void **)(this + 0x98) = pvVar12;
    operator_delete(pvVar11);
  }
  pvVar12 = *(void **)(this + 0x78);
  if (pvVar12 != (void *)0x0) {
    pvVar13 = *(void **)(this + 0x80);
    pvVar11 = pvVar12;
    if (pvVar13 != pvVar12) {
      do {
        plVar1 = (long *)((long)pvVar13 + -8);
        pvVar13 = (void *)((long)pvVar13 + -0x10);
        if (*plVar1 != 0) {
          FUN_0015bb40(0xffffffffffffffff,*plVar1 + 8);
                    /* try { // try from 0017b058 to 0017b05f has its CatchHandler @ 0017b3bc */
          FUN_0016c224(pvVar13);
        }
      } while (pvVar13 != pvVar12);
      pvVar11 = *(void **)(this + 0x78);
    }
    *(void **)(this + 0x80) = pvVar12;
    operator_delete(pvVar11);
  }
  pvVar12 = *(void **)(this + 0x60);
  if (pvVar12 != (void *)0x0) {
    pvVar13 = *(void **)(this + 0x68);
    pvVar11 = pvVar12;
    if (pvVar13 != pvVar12) {
      do {
        plVar1 = (long *)((long)pvVar13 + -8);
        pvVar13 = (void *)((long)pvVar13 + -0x10);
        if (*plVar1 != 0) {
          FUN_0015bb40(0xffffffffffffffff,*plVar1 + 8);
                    /* try { // try from 0017b0ac to 0017b0b3 has its CatchHandler @ 0017b3b8 */
          FUN_0017b6f4(pvVar13);
        }
      } while (pvVar13 != pvVar12);
      pvVar11 = *(void **)(this + 0x60);
    }
    *(void **)(this + 0x68) = pvVar12;
    operator_delete(pvVar11);
  }
  pvVar12 = *(void **)(this + 0x48);
  if (pvVar12 != (void *)0x0) {
    pvVar13 = *(void **)(this + 0x50);
    pvVar11 = pvVar12;
    if (pvVar13 != pvVar12) {
      do {
        plVar1 = (long *)((long)pvVar13 + -8);
        pvVar13 = (void *)((long)pvVar13 + -0x10);
        if (*plVar1 != 0) {
          FUN_0015bb40(0xffffffffffffffff,*plVar1 + 8);
                    /* try { // try from 0017b100 to 0017b107 has its CatchHandler @ 0017b3b4 */
          FUN_0017b920(pvVar13);
        }
      } while (pvVar13 != pvVar12);
      pvVar11 = *(void **)(this + 0x48);
    }
    *(void **)(this + 0x50) = pvVar12;
    operator_delete(pvVar11);
  }
  pvVar12 = *(void **)(this + 0x30);
  if (pvVar12 != (void *)0x0) {
    pvVar13 = *(void **)(this + 0x38);
    pvVar11 = pvVar12;
    if (pvVar13 != pvVar12) {
      do {
        if (((*(long *)((long)pvVar13 + -8) != 0) &&
            (FUN_0015bb40(0xffffffffffffffff,*(long *)((long)pvVar13 + -8) + 8),
            **(long **)((long)pvVar13 + -8) == 0)) &&
           (*(long *)(*(long *)((long)pvVar13 + -8) + 8) == 0)) {
          if ((*(byte *)(*(long *)((long)pvVar13 + -8) + 0x10) & 1) == 0) {
                    /* try { // try from 0017b28c to 0017b29f has its CatchHandler @ 0017b4c0 */
            FUN_001695dc(&local_70,PTR_typeinfo_name_001ba158,1);
            prVar8 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0017b2ac to 0017b2bf has its CatchHandler @ 0017b498 */
            std::__ndk1::operator+("WeakReference<",(basic_string *)&local_70);
                    /* try { // try from 0017b2c0 to 0017b2d3 has its CatchHandler @ 0017b47c */
            FUN_0015dcfc(auStack_b8,auStack_d0,
                         "> encountered a stale `_value` - BorrowingReference<");
                    /* try { // try from 0017b2d4 to 0017b2e3 has its CatchHandler @ 0017b448 */
            FUN_0016955c(auStack_a0,auStack_b8,&local_70);
                    /* try { // try from 0017b2e4 to 0017b2f7 has its CatchHandler @ 0017b3c8 */
            FUN_0015dcfc(abStack_88,auStack_a0,"> should\'ve already deleted this!");
                    /* try { // try from 0017b2fc to 0017b333 has its CatchHandler @ 0017b3c4 */
            std::runtime_error::runtime_error(prVar8,abStack_88);
            if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
              __cxa_throw(prVar8,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
            }
            goto LAB_0017b334;
          }
          pvVar11 = *(void **)((long)pvVar13 + -8);
          if (pvVar11 != (void *)0x0) {
            std::__ndk1::mutex::~mutex((mutex *)((long)pvVar11 + 0x14));
            operator_delete(pvVar11);
          }
          *(undefined8 *)((long)pvVar13 + -8) = 0;
        }
        pvVar13 = (void *)((long)pvVar13 + -0x10);
      } while (pvVar13 != pvVar12);
      pvVar11 = *(void **)(this + 0x30);
    }
    *(void **)(this + 0x38) = pvVar12;
    operator_delete(pvVar11);
  }
  std::__ndk1::mutex::~mutex((mutex *)(this + 8));
  if (*(long *)(lVar4 + 0x28) == local_58) {
    facebook::jsi::NativeState::~NativeState((NativeState *)this);
    return;
  }
LAB_0017b334:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017b4c8  FUN_0017b4c8 =====

void FUN_0017b4c8(long param_1)

{
  long lVar1;
  runtime_error *this;
  void *pvVar2;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  basic_string abStack_68 [24];
  basic_string abStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((**(long **)(param_1 + 8) == 0) && (*(long *)(*(long *)(param_1 + 8) + 8) == 0)) {
    if ((*(byte *)(*(long *)(param_1 + 8) + 0x10) & 1) == 0) {
      FUN_001695dc(abStack_50,PTR_typeinfo_name_001ba148,1);
      this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0017b580 to 0017b593 has its CatchHandler @ 0017b6b8 */
      std::__ndk1::operator+("WeakReference<",abStack_50);
                    /* try { // try from 0017b594 to 0017b5a7 has its CatchHandler @ 0017b6a0 */
      FUN_0015dcfc(auStack_98,auStack_b0,"> encountered a stale `_value` - BorrowingReference<");
                    /* try { // try from 0017b5a8 to 0017b5b7 has its CatchHandler @ 0017b670 */
      FUN_0016955c(auStack_80,auStack_98,abStack_50);
                    /* try { // try from 0017b5b8 to 0017b5cb has its CatchHandler @ 0017b64c */
      FUN_0015dcfc(abStack_68,auStack_80,"> should\'ve already deleted this!");
                    /* try { // try from 0017b5d0 to 0017b60b has its CatchHandler @ 0017b60c */
      std::runtime_error::runtime_error(this,abStack_68);
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
      }
      goto LAB_0017b6f0;
    }
    pvVar2 = *(void **)(param_1 + 8);
    if (pvVar2 != (void *)0x0) {
      std::__ndk1::mutex::~mutex((mutex *)((long)pvVar2 + 0x14));
      operator_delete(pvVar2);
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_0017b6f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017b6f4  FUN_0017b6f4 =====

void FUN_0017b6f4(long param_1)

{
  long lVar1;
  runtime_error *this;
  void *pvVar2;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  basic_string abStack_68 [24];
  basic_string abStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((**(long **)(param_1 + 8) == 0) && (*(long *)(*(long *)(param_1 + 8) + 8) == 0)) {
    if ((*(byte *)(*(long *)(param_1 + 8) + 0x10) & 1) == 0) {
      FUN_001695dc(abStack_50,PTR_typeinfo_name_001ba150,1);
      this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0017b7ac to 0017b7bf has its CatchHandler @ 0017b8e4 */
      std::__ndk1::operator+("WeakReference<",abStack_50);
                    /* try { // try from 0017b7c0 to 0017b7d3 has its CatchHandler @ 0017b8cc */
      FUN_0015dcfc(auStack_98,auStack_b0,"> encountered a stale `_value` - BorrowingReference<");
                    /* try { // try from 0017b7d4 to 0017b7e3 has its CatchHandler @ 0017b89c */
      FUN_0016955c(auStack_80,auStack_98,abStack_50);
                    /* try { // try from 0017b7e4 to 0017b7f7 has its CatchHandler @ 0017b878 */
      FUN_0015dcfc(abStack_68,auStack_80,"> should\'ve already deleted this!");
                    /* try { // try from 0017b7fc to 0017b837 has its CatchHandler @ 0017b838 */
      std::runtime_error::runtime_error(this,abStack_68);
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
      }
      goto LAB_0017b91c;
    }
    pvVar2 = *(void **)(param_1 + 8);
    if (pvVar2 != (void *)0x0) {
      std::__ndk1::mutex::~mutex((mutex *)((long)pvVar2 + 0x14));
      operator_delete(pvVar2);
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_0017b91c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017b920  FUN_0017b920 =====

void FUN_0017b920(long param_1)

{
  long lVar1;
  runtime_error *this;
  void *pvVar2;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  basic_string abStack_68 [24];
  basic_string abStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((**(long **)(param_1 + 8) == 0) && (*(long *)(*(long *)(param_1 + 8) + 8) == 0)) {
    if ((*(byte *)(*(long *)(param_1 + 8) + 0x10) & 1) == 0) {
      FUN_001695dc(abStack_50,PTR_typeinfo_name_001ba140,1);
      this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0017b9d8 to 0017b9eb has its CatchHandler @ 0017bb10 */
      std::__ndk1::operator+("WeakReference<",abStack_50);
                    /* try { // try from 0017b9ec to 0017b9ff has its CatchHandler @ 0017baf8 */
      FUN_0015dcfc(auStack_98,auStack_b0,"> encountered a stale `_value` - BorrowingReference<");
                    /* try { // try from 0017ba00 to 0017ba0f has its CatchHandler @ 0017bac8 */
      FUN_0016955c(auStack_80,auStack_98,abStack_50);
                    /* try { // try from 0017ba10 to 0017ba23 has its CatchHandler @ 0017baa4 */
      FUN_0015dcfc(abStack_68,auStack_80,"> should\'ve already deleted this!");
                    /* try { // try from 0017ba28 to 0017ba63 has its CatchHandler @ 0017ba64 */
      std::runtime_error::runtime_error(this,abStack_68);
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
      }
      goto LAB_0017bb48;
    }
    pvVar2 = *(void **)(param_1 + 8);
    if (pvVar2 != (void *)0x0) {
      std::__ndk1::mutex::~mutex((mutex *)((long)pvVar2 + 0x14));
      operator_delete(pvVar2);
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_0017bb48:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017bb4c  FUN_0017bb4c =====

void FUN_0017bb4c(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (param_1[1] != 0) {
    uVar2 = FUN_0015bb40(0xffffffffffffffff);
    if ((uVar2 < 2) && ((*(byte *)(param_1[1] + 0x10) & 1) == 0)) {
      plVar4 = (long *)*param_1;
      if (plVar4 != (long *)0x0) {
        if ((undefined8 *)*plVar4 != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)*plVar4)();
        }
        operator_delete(plVar4);
      }
      *param_1 = 0;
      *(undefined4 *)(param_1[1] + 0x10) = 1;
    }
    if ((*(long *)param_1[1] == 0) && (*(long *)(param_1[1] + 8) == 0)) {
      pvVar5 = (void *)param_1[1];
      if (pvVar5 != (void *)0x0) {
        std::__ndk1::mutex::~mutex((mutex *)((long)pvVar5 + 0x14));
        operator_delete(pvVar5);
      }
      param_1[1] = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017bc30  FUN_0017bc30 =====

void FUN_0017bc30(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (param_1[1] != 0) {
    uVar2 = FUN_0015bb40(0xffffffffffffffff);
    if ((uVar2 < 2) && ((*(byte *)(param_1[1] + 0x10) & 1) == 0)) {
      plVar4 = (long *)*param_1;
      if (plVar4 != (long *)0x0) {
        if ((undefined8 *)*plVar4 != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)*plVar4)();
        }
        operator_delete(plVar4);
      }
      *param_1 = 0;
      *(undefined4 *)(param_1[1] + 0x10) = 1;
    }
    if ((*(long *)param_1[1] == 0) && (*(long *)(param_1[1] + 8) == 0)) {
      pvVar5 = (void *)param_1[1];
      if (pvVar5 != (void *)0x0) {
        std::__ndk1::mutex::~mutex((mutex *)((long)pvVar5 + 0x14));
        operator_delete(pvVar5);
      }
      param_1[1] = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017bd14  FUN_0017bd14 =====

void FUN_0017bd14(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (param_1[1] != 0) {
    uVar2 = FUN_0015bb40(0xffffffffffffffff);
    if ((uVar2 < 2) && ((*(byte *)(param_1[1] + 0x10) & 1) == 0)) {
      plVar4 = (long *)*param_1;
      if (plVar4 != (long *)0x0) {
        if ((undefined8 *)*plVar4 != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)*plVar4)();
        }
        operator_delete(plVar4);
      }
      *param_1 = 0;
      *(undefined4 *)(param_1[1] + 0x10) = 1;
    }
    if ((*(long *)param_1[1] == 0) && (*(long *)(param_1[1] + 8) == 0)) {
      pvVar5 = (void *)param_1[1];
      if (pvVar5 != (void *)0x0) {
        std::__ndk1::mutex::~mutex((mutex *)((long)pvVar5 + 0x14));
        operator_delete(pvVar5);
      }
      param_1[1] = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017bdf8  FUN_0017bdf8 =====

void FUN_0017bdf8(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  Value *this;
  void *pvVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (param_1[1] != 0) {
    uVar2 = FUN_0015bb40(0xffffffffffffffff);
    if ((uVar2 < 2) && ((*(byte *)(param_1[1] + 0x10) & 1) == 0)) {
      this = (Value *)*param_1;
      if (this != (Value *)0x0) {
        facebook::jsi::Value::~Value(this);
        operator_delete(this);
      }
      *param_1 = 0;
      *(undefined4 *)(param_1[1] + 0x10) = 1;
    }
    if ((*(long *)param_1[1] == 0) && (*(long *)(param_1[1] + 8) == 0)) {
      pvVar4 = (void *)param_1[1];
      if (pvVar4 != (void *)0x0) {
        std::__ndk1::mutex::~mutex((mutex *)((long)pvVar4 + 0x14));
        operator_delete(pvVar4);
      }
      param_1[1] = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017bed0  margelo::nitro::JSICache::~JSICache =====

/* margelo::nitro::JSICache::~JSICache() */

void __thiscall margelo::nitro::JSICache::~JSICache(JSICache *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  ~JSICache(this);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017bf1c  margelo::nitro::JSICache::getOrCreateCache =====

/* WARNING: Type propagation algorithm not settling */
/* margelo::nitro::JSICache::getOrCreateCache(facebook::jsi::Runtime&) */

void __thiscall margelo::nitro::JSICache::getOrCreateCache(JSICache *this,Runtime *param_1)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong *puVar6;
  byte *pbVar7;
  long *plVar8;
  void *pvVar9;
  long *in_x8;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  void *pvVar21;
  long *plVar22;
  long *plVar23;
  undefined2 uVar24;
  undefined8 uVar25;
  float fVar26;
  byte local_d8 [16];
  void *local_c8;
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  long *local_a0;
  ulong uStack_98;
  void *local_90;
  long *local_80;
  long *local_78;
  undefined1 local_70;
  undefined7 uStack_6f;
  long local_68;
  
  puVar4 = PTR__globalCache_001b9ea0;
  lVar3 = tpidr_el0;
  uVar11 = (((((ulong)this & 0xffffffff) >> 3 & 0x3ffffff) << 6 | 8) ^ (ulong)this >> 0x20) *
           -0x622015f714c7d297;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar11 = ((ulong)this >> 0x20 ^ uVar11 >> 0x2f ^ uVar11) * -0x622015f714c7d297;
  plVar23 = (long *)((uVar11 ^ uVar11 >> 0x2f) * -0x622015f714c7d297);
  plVar12 = *(long **)(PTR__globalCache_001b9ea0 + 8);
  if (plVar12 != (long *)0x0) {
    uVar25 = NEON_cnt(plVar12,1);
    uVar24 = NEON_uaddlv(uVar25,1);
    uVar11 = CONCAT62((int6)((ulong)uVar25 >> 0x10),uVar24) & 0xffffffff;
    if (uVar11 < 2) {
      plVar8 = (long *)((long)plVar12 - 1U & (ulong)plVar23);
    }
    else {
      plVar8 = plVar23;
      if (plVar12 <= plVar23) {
        uVar2 = 0;
        if (plVar12 != (long *)0x0) {
          uVar2 = (ulong)plVar23 / (ulong)plVar12;
        }
        plVar8 = (long *)((long)plVar23 - uVar2 * (long)plVar12);
      }
    }
    plVar16 = *(long **)(*(long *)PTR__globalCache_001b9ea0 + (long)plVar8 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      do {
        plVar18 = (long *)plVar16[1];
        if (plVar18 == plVar23) {
          if ((JSICache *)plVar16[2] == this) {
            if (plVar16[4] != 0) {
              lVar10 = plVar16[3];
              FUN_0015c230(1,plVar16[4] + 0x10);
              plVar12 = (long *)std::__ndk1::__shared_weak_count::lock();
              if (plVar12 == (long *)0x0) {
LAB_0017c0dc:
                std::__ndk1::__shared_weak_count::__release_weak();
              }
              else {
                if (lVar10 == 0) {
                  lVar15 = FUN_0015bb40(0xffffffffffffffff,plVar12 + 1);
                  if (lVar15 != 0) goto LAB_0017c0dc;
                }
                else {
                  *in_x8 = lVar10;
                  in_x8[1] = (long)plVar12;
                  FUN_0015c230(1,plVar12 + 1);
                    /* try { // try from 0017c080 to 0017c087 has its CatchHandler @ 0017c7f0 */
                  std::__ndk1::mutex::lock();
                  lVar15 = FUN_0015bb40(0xffffffffffffffff,plVar12 + 1);
                  if (lVar15 != 0) {
                    if (*(long *)(lVar3 + 0x28) == local_68) {
                      std::__ndk1::__shared_weak_count::__release_weak();
                      return;
                    }
                    goto LAB_0017c97c;
                  }
                }
                (**(code **)(*plVar12 + 0x10))(plVar12);
                std::__ndk1::__shared_weak_count::__release_weak();
                std::__ndk1::__shared_weak_count::__release_weak();
                if (lVar10 != 0) goto LAB_0017c73c;
              }
            }
            break;
          }
        }
        else {
          if (uVar11 < 2) {
            plVar18 = (long *)((ulong)plVar18 & (long)plVar12 - 1U);
          }
          else if (plVar12 <= plVar18) {
            uVar2 = 0;
            if (plVar12 != (long *)0x0) {
              uVar2 = (ulong)plVar18 / (ulong)plVar12;
            }
            plVar18 = (long *)((long)plVar18 - uVar2 * (long)plVar12);
          }
          if (plVar18 != plVar8) break;
        }
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
    }
  }
  ThreadUtils::getThreadName();
                    /* try { // try from 0017c0f4 to 0017c0ff has its CatchHandler @ 0017c94c */
  (**(code **)(*(long *)this + 0x38))(local_d8,this);
                    /* try { // try from 0017c100 to 0017c113 has its CatchHandler @ 0017c92c */
  puVar6 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)local_d8,0x1377cb);
  local_b0 = (void *)puVar6[2];
  uStack_b8 = puVar6[1];
  local_c0 = *puVar6;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  uVar11 = (ulong)&local_80 | 1;
  if (((ulong)local_80 & 1) != 0) {
    uVar11 = CONCAT71(uStack_6f,local_70);
  }
                    /* try { // try from 0017c14c to 0017c153 has its CatchHandler @ 0017c90c */
  puVar6 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_c0,uVar11);
  local_90 = (void *)puVar6[2];
  uStack_98 = puVar6[1];
  local_a0 = (long *)*puVar6;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
                    /* try { // try from 0017c16c to 0017c17f has its CatchHandler @ 0017c8d0 */
  pbVar7 = (byte *)std::__ndk1::
                   basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                   append((char *)&local_a0,0x13757d);
  bVar1 = *pbVar7;
  pbVar7[0] = 0;
  pbVar7[1] = 0;
  pbVar7[2] = 0;
  pbVar7[3] = 0;
  pbVar7[4] = 0;
  pbVar7[5] = 0;
  pbVar7[6] = 0;
  pbVar7[7] = 0;
  pbVar7[8] = 0;
  pbVar7[9] = 0;
  pbVar7[10] = 0;
  pbVar7[0xb] = 0;
  pbVar7[0xc] = 0;
  pbVar7[0xd] = 0;
  pbVar7[0xe] = 0;
  pbVar7[0xf] = 0;
  pvVar21 = *(void **)(pbVar7 + 0x10);
  pbVar7[0x10] = 0;
  pbVar7[0x11] = 0;
  pbVar7[0x12] = 0;
  pbVar7[0x13] = 0;
  pbVar7[0x14] = 0;
  pbVar7[0x15] = 0;
  pbVar7[0x16] = 0;
  pbVar7[0x17] = 0;
  if (((ulong)local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
  if ((local_d8[0] & 1) != 0) {
    operator_delete(local_c8);
  }
  if (((ulong)local_80 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_6f,local_70));
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(pvVar21);
  }
  plVar8 = (long *)operator_new(0xc0);
  puVar5 = PTR_vtable_001ba130;
  plVar8[0x17] = 0;
  *plVar8 = (long)(puVar5 + 0x10);
  plVar8[2] = 0;
  plVar8[1] = 0;
  plVar8[4] = 0;
  plVar8[3] = 0;
  plVar8[6] = 0;
  plVar8[5] = 0;
  plVar8[8] = 0;
  plVar8[7] = 0;
  plVar8[10] = 0;
  plVar8[9] = 0;
  plVar8[0xc] = 0;
  plVar8[0xb] = 0;
  plVar8[0xe] = 0;
  plVar8[0xd] = 0;
  plVar8[0x10] = 0;
  plVar8[0xf] = 0;
  plVar8[0x12] = 0;
  plVar8[0x11] = 0;
  plVar8[0x14] = 0;
  plVar8[0x13] = 0;
  plVar8[0x16] = 0;
  plVar8[0x15] = 0;
                    /* try { // try from 0017c210 to 0017c217 has its CatchHandler @ 0017c8bc */
  plVar16 = (long *)operator_new(0x20);
  *plVar16 = (long)&PTR____shared_weak_count_001b7bc0;
  lVar10 = *(long *)this;
  plVar18 = plVar16 + 1;
  *plVar18 = 0;
  plVar16[2] = 0;
  plVar16[3] = (long)plVar8;
                    /* try { // try from 0017c23c to 0017c247 has its CatchHandler @ 0017c8ac */
  (**(code **)(lVar10 + 0x130))(&local_80,this);
  local_a0 = local_80;
  FUN_0015c230(1,plVar16 + 1);
  local_80 = plVar8;
  local_78 = plVar16;
  FUN_0015c230(1,plVar16 + 1);
                    /* try { // try from 0017c274 to 0017c283 has its CatchHandler @ 0017c87c */
  (**(code **)(*(long *)this + 0x168))(this,&local_a0,&local_80);
  plVar12 = local_78;
  if ((local_78 != (long *)0x0) &&
     (lVar10 = FUN_0015bb40(0xffffffffffffffff,local_78 + 1), lVar10 == 0)) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  lVar10 = FUN_0015bb40(0xffffffffffffffff,plVar18);
  if (lVar10 == 0) {
    (**(code **)(*plVar16 + 0x10))(plVar16);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar20 = *(long **)(puVar4 + 8);
  plVar12 = in_x8;
  if (plVar20 != (long *)0x0) {
    uVar25 = NEON_cnt(plVar20,1);
    uVar24 = NEON_uaddlv(uVar25,1);
    uVar11 = CONCAT62((int6)((ulong)uVar25 >> 0x10),uVar24) & 0xffffffff;
    if (uVar11 < 2) {
      plVar12 = (long *)((ulong)plVar23 & (long)plVar20 - 1U);
    }
    else {
      plVar12 = plVar23;
      if (plVar20 <= plVar23) {
        uVar2 = 0;
        if (plVar20 != (long *)0x0) {
          uVar2 = (ulong)plVar23 / (ulong)plVar20;
        }
        plVar12 = (long *)((long)plVar23 - uVar2 * (long)plVar20);
      }
    }
    puVar13 = *(undefined8 **)(*(long *)puVar4 + (long)plVar12 * 8);
    if ((puVar13 != (undefined8 *)0x0) && (plVar22 = (long *)*puVar13, plVar22 != (long *)0x0)) {
      do {
        plVar14 = (long *)plVar22[1];
        if (plVar14 == plVar23) {
          if ((JSICache *)plVar22[2] == this) goto LAB_0017c69c;
        }
        else {
          if (uVar11 < 2) {
            plVar14 = (long *)((ulong)plVar14 & (long)plVar20 - 1U);
          }
          else if (plVar20 <= plVar14) {
            uVar2 = 0;
            if (plVar20 != (long *)0x0) {
              uVar2 = (ulong)plVar14 / (ulong)plVar20;
            }
            plVar14 = (long *)((long)plVar14 - uVar2 * (long)plVar20);
          }
          if (plVar14 != plVar12) break;
        }
        plVar22 = (long *)*plVar22;
      } while (plVar22 != (long *)0x0);
    }
  }
                    /* try { // try from 0017c3c8 to 0017c3cf has its CatchHandler @ 0017c820 */
  plVar22 = (long *)operator_new(0x28);
  lVar10 = *(long *)(puVar4 + 0x18);
  local_78 = (long *)(puVar4 + 0x10);
  fVar26 = *(float *)(puVar4 + 0x20);
  *plVar22 = 0;
  plVar22[1] = (long)plVar23;
  plVar22[3] = 0;
  plVar22[4] = 0;
  plVar22[2] = (long)this;
  local_70 = 1;
  local_80 = plVar22;
  if ((plVar20 == (long *)0x0) || (fVar26 * (float)plVar20 < (float)(lVar10 + 1))) {
    if (plVar20 < (long *)0x3) {
      uVar11 = 1;
    }
    else {
      uVar11 = (ulong)(((ulong)plVar20 & (long)plVar20 - 1U) != 0);
    }
    plVar12 = (long *)(uVar11 | (long)plVar20 << 1);
    plVar14 = (long *)(long)((float)(lVar10 + 1) / fVar26);
    if (plVar12 <= plVar14) {
      plVar12 = plVar14;
    }
    if ((long)plVar12 - 1U == 0) {
      plVar12 = (long *)0x2;
    }
    else if (((ulong)plVar12 & (long)plVar12 - 1U) != 0) {
                    /* try { // try from 0017c460 to 0017c487 has its CatchHandler @ 0017c810 */
      plVar12 = (long *)std::__ndk1::__next_prime((ulong)plVar12);
      plVar20 = *(long **)(puVar4 + 8);
    }
    if (plVar20 < plVar12) {
LAB_0017c478:
      plVar20 = plVar12;
      if ((ulong)plVar20 >> 0x3d != 0) {
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 0017c7ec to 0017c7ef has its CatchHandler @ 0017c810 */
          uVar25 = FUN_0015d614();
                    /* catch() { ... } // from try @ 0017c080 with catch @ 0017c7f0 */
          FUN_0017c980(plVar8);
          FUN_0017c980(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
          if (*(long *)(lVar3 + 0x28) == local_68) {
            FUN_00157e74(uVar25);
          }
        }
        goto LAB_0017c97c;
      }
      pvVar21 = operator_new((long)plVar20 << 3);
      pvVar9 = *(void **)puVar4;
      *(void **)puVar4 = pvVar21;
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
      }
      plVar12 = (long *)0x0;
      *(long **)(puVar4 + 8) = plVar20;
      do {
        *(undefined8 *)(*(long *)puVar4 + (long)plVar12 * 8) = 0;
        plVar12 = (long *)((long)plVar12 + 1);
      } while (plVar20 != plVar12);
      plVar12 = *(long **)(puVar4 + 0x10);
      if (plVar12 != (long *)0x0) {
        plVar14 = (long *)plVar12[1];
        uVar25 = NEON_cnt(plVar20,1);
        uVar24 = NEON_uaddlv(uVar25,1);
        uVar11 = CONCAT62((int6)((ulong)uVar25 >> 0x10),uVar24) & 0xffffffff;
        if (uVar11 < 2) {
          plVar14 = (long *)((ulong)plVar14 & (long)plVar20 - 1U);
        }
        else if (plVar20 <= plVar14) {
          uVar2 = 0;
          if (plVar20 != (long *)0x0) {
            uVar2 = (ulong)plVar14 / (ulong)plVar20;
          }
          plVar14 = (long *)((long)plVar14 - uVar2 * (long)plVar20);
        }
        *(undefined **)(*(long *)puVar4 + (long)plVar14 * 8) = puVar4 + 0x10;
        plVar17 = (long *)*plVar12;
        if (plVar17 != (long *)0x0) {
          do {
            plVar19 = (long *)plVar17[1];
            if (uVar11 < 2) {
              plVar19 = (long *)((ulong)plVar19 & (long)plVar20 - 1U);
            }
            else if (plVar20 <= plVar19) {
              uVar2 = 0;
              if (plVar20 != (long *)0x0) {
                uVar2 = (ulong)plVar19 / (ulong)plVar20;
              }
              plVar19 = (long *)((long)plVar19 - uVar2 * (long)plVar20);
            }
            if (plVar19 != plVar14) {
              if (*(long *)(*(long *)puVar4 + (long)plVar19 * 8) == 0) {
                *(long **)(*(long *)puVar4 + (long)plVar19 * 8) = plVar12;
                plVar14 = plVar19;
              }
              else {
                *plVar12 = *plVar17;
                *plVar17 = **(long **)(*(long *)puVar4 + (long)plVar19 * 8);
                **(undefined8 **)(*(long *)puVar4 + (long)plVar19 * 8) = plVar17;
                plVar17 = plVar12;
              }
            }
            plVar12 = plVar17;
            plVar17 = (long *)*plVar12;
          } while (plVar17 != (long *)0x0);
        }
      }
    }
    else if (plVar12 < plVar20) {
      plVar14 = (long *)(long)((float)*(ulong *)(puVar4 + 0x18) / *(float *)(puVar4 + 0x20));
      if (plVar20 < (long *)0x3) {
LAB_0017c774:
                    /* try { // try from 0017c774 to 0017c777 has its CatchHandler @ 0017c810 */
        plVar14 = (long *)std::__ndk1::__next_prime((ulong)plVar14);
      }
      else {
        uVar25 = NEON_cnt(plVar20,1);
        uVar24 = NEON_uaddlv(uVar25,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar25 >> 0x10),uVar24)) goto LAB_0017c774;
        if ((long *)0x1 < plVar14) {
          plVar14 = (long *)(1L << (-LZCOUNT((long)plVar14 + -1) & 0x3fU));
        }
      }
      if (plVar12 <= plVar14) {
        plVar12 = plVar14;
      }
      if (plVar12 < plVar20) {
        if (plVar12 != (long *)0x0) goto LAB_0017c478;
        pvVar21 = *(void **)puVar4;
        *(undefined8 *)puVar4 = 0;
        if (pvVar21 != (void *)0x0) {
          operator_delete(pvVar21);
        }
        plVar20 = (long *)0x0;
        *(undefined8 *)(puVar4 + 8) = 0;
      }
      else {
        plVar20 = *(long **)(puVar4 + 8);
      }
    }
    if (((ulong)plVar20 & (long)plVar20 - 1U) == 0) {
      plVar12 = (long *)((long)plVar20 - 1U & (ulong)plVar23);
    }
    else {
      plVar12 = plVar23;
      if (plVar20 <= plVar23) {
        uVar11 = 0;
        if (plVar20 != (long *)0x0) {
          uVar11 = (ulong)plVar23 / (ulong)plVar20;
        }
        plVar12 = (long *)((long)plVar23 - uVar11 * (long)plVar20);
      }
    }
  }
  lVar10 = *(long *)puVar4;
  plVar23 = *(long **)(lVar10 + (long)plVar12 * 8);
  if (plVar23 == (long *)0x0) {
    plVar23 = (long *)(puVar4 + 0x10);
    lVar15 = *plVar23;
    *plVar23 = (long)plVar22;
    *plVar22 = lVar15;
    *(long **)(lVar10 + (long)plVar12 * 8) = plVar23;
    if (*plVar22 != 0) {
      plVar12 = *(long **)(*plVar22 + 8);
      if (((ulong)plVar20 & (long)plVar20 - 1U) == 0) {
        plVar12 = (long *)((ulong)plVar12 & (long)plVar20 - 1U);
      }
      else if (plVar20 <= plVar12) {
        uVar11 = 0;
        if (plVar20 != (long *)0x0) {
          uVar11 = (ulong)plVar12 / (ulong)plVar20;
        }
        plVar12 = (long *)((long)plVar12 - uVar11 * (long)plVar20);
      }
      plVar23 = (long *)(*(long *)puVar4 + (long)plVar12 * 8);
      goto LAB_0017c68c;
    }
  }
  else {
    *plVar22 = *plVar23;
LAB_0017c68c:
    *plVar23 = (long)plVar22;
  }
  *(long *)(puVar4 + 0x18) = *(long *)(puVar4 + 0x18) + 1;
LAB_0017c69c:
  FUN_0015c230(1,plVar16 + 2);
  lVar10 = plVar22[4];
  plVar22[3] = (long)plVar8;
  plVar22[4] = (long)plVar16;
  if (lVar10 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  local_78 = local_a0;
  local_a0 = (long *)0x0;
  local_80 = (long *)CONCAT44(local_80._4_4_,7);
                    /* try { // try from 0017c6cc to 0017c6db has its CatchHandler @ 0017c838 */
  CommonGlobals::defineGlobal(this,1,&local_80);
  facebook::jsi::Value::~Value((Value *)&local_80);
  *in_x8 = (long)plVar8;
  in_x8[1] = (long)plVar16;
  FUN_0015c230(1,plVar16 + 1);
                    /* try { // try from 0017c6f4 to 0017c6fb has its CatchHandler @ 0017c828 */
  std::__ndk1::mutex::lock();
  if (local_a0 != (long *)0x0) {
    (**(code **)*local_a0)();
  }
  lVar10 = FUN_0015bb40(0xffffffffffffffff,plVar18);
  if (lVar10 == 0) {
    (**(code **)(*plVar16 + 0x10))(plVar16);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
LAB_0017c73c:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
LAB_0017c97c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017c980  FUN_0017c980 =====

void FUN_0017c980(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_0015bb40(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
     ) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017ca0c  FUN_0017ca0c =====

void FUN_0017ca0c(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  undefined2 uVar18;
  undefined8 uVar19;
  
  puVar3 = PTR__globalCache_001b9ea0;
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  uVar7 = *(ulong *)(PTR__globalCache_001b9ea0 + 8);
  if (uVar7 != 0) {
    uVar9 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ param_1 >> 0x20) * -0x622015f714c7d297;
    uVar19 = NEON_cnt(uVar7,1);
    uVar18 = NEON_uaddlv(uVar19,1);
    uVar9 = (param_1 >> 0x20 ^ uVar9 >> 0x2f ^ uVar9) * -0x622015f714c7d297;
    uVar10 = CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) & 0xffffffff;
    uVar9 = (uVar9 ^ uVar9 >> 0x2f) * -0x622015f714c7d297;
    if (uVar10 < 2) {
      uVar16 = uVar9 & uVar7 - 1;
    }
    else {
      uVar16 = uVar9;
      if (uVar7 <= uVar9) {
        uVar16 = 0;
        if (uVar7 != 0) {
          uVar16 = uVar9 / uVar7;
        }
        uVar16 = uVar9 - uVar16 * uVar7;
      }
    }
    lVar11 = *(long *)PTR__globalCache_001b9ea0;
    puVar12 = *(undefined8 **)(lVar11 + uVar16 * 8);
    if ((puVar12 != (undefined8 *)0x0) && (plVar17 = (long *)*puVar12, plVar17 != (long *)0x0)) {
      uVar13 = uVar7 - 1;
      do {
        uVar14 = plVar17[1];
        if (uVar14 == uVar9) {
          if (plVar17[2] == param_1) {
            if (uVar10 < 2) {
              uVar9 = uVar13 & uVar9;
            }
            else if (uVar7 <= uVar9) {
              uVar16 = 0;
              if (uVar7 != 0) {
                uVar16 = uVar9 / uVar7;
              }
              uVar9 = uVar9 - uVar16 * uVar7;
            }
            plVar4 = *(long **)(lVar11 + uVar9 * 8);
            do {
              plVar15 = plVar4;
              plVar4 = (long *)*plVar15;
            } while ((long *)*plVar15 != plVar17);
            if (plVar15 == (long *)(PTR__globalCache_001b9ea0 + 0x10)) {
LAB_0017cb9c:
              if (*plVar17 != 0) {
                uVar16 = *(ulong *)(*plVar17 + 8);
                if (uVar10 < 2) {
                  uVar16 = uVar16 & uVar13;
                }
                else if (uVar7 <= uVar16) {
                  uVar14 = 0;
                  if (uVar7 != 0) {
                    uVar14 = uVar16 / uVar7;
                  }
                  uVar16 = uVar16 - uVar14 * uVar7;
                }
                if (uVar16 == uVar9) goto LAB_0017cbd4;
              }
              *(undefined8 *)(lVar11 + uVar9 * 8) = 0;
            }
            else {
              uVar16 = plVar15[1];
              if (uVar10 < 2) {
                uVar16 = uVar16 & uVar13;
              }
              else if (uVar7 <= uVar16) {
                uVar14 = 0;
                if (uVar7 != 0) {
                  uVar14 = uVar16 / uVar7;
                }
                uVar16 = uVar16 - uVar14 * uVar7;
              }
              if (uVar16 != uVar9) goto LAB_0017cb9c;
            }
LAB_0017cbd4:
            lVar11 = *plVar17;
            if (lVar11 != 0) {
              uVar16 = *(ulong *)(lVar11 + 8);
              if (uVar10 < 2) {
                uVar16 = uVar16 & uVar13;
              }
              else if (uVar7 <= uVar16) {
                uVar10 = 0;
                if (uVar7 != 0) {
                  uVar10 = uVar16 / uVar7;
                }
                uVar16 = uVar16 - uVar10 * uVar7;
              }
              if (uVar16 != uVar9) {
                *(long **)(*(long *)puVar3 + uVar16 * 8) = plVar15;
                lVar11 = *plVar17;
              }
            }
            lVar8 = *(long *)(puVar3 + 0x18);
            lVar5 = plVar17[4];
            *plVar15 = lVar11;
            *plVar17 = 0;
            *(long *)(puVar3 + 0x18) = lVar8 + -1;
            if (lVar5 != 0) {
              std::__ndk1::__shared_weak_count::__release_weak();
            }
            if (*(long *)(lVar2 + 0x28) == lVar6) {
              operator_delete(plVar17);
              return;
            }
            goto LAB_0017cc58;
          }
        }
        else {
          if (uVar10 < 2) {
            uVar14 = uVar14 & uVar13;
          }
          else if (uVar7 <= uVar14) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar14 / uVar7;
            }
            uVar14 = uVar14 - uVar1 * uVar7;
          }
          if (uVar14 != uVar16) break;
        }
        plVar17 = (long *)*plVar17;
      } while (plVar17 != (long *)0x0);
    }
  }
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return;
  }
LAB_0017cc58:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017cc5c  FUN_0017cc5c =====

void FUN_0017cc5c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  pvVar3 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar3 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else {
    if ((*(char *)(param_1 + 2) != '\0') && (*(long *)((long)pvVar3 + 0x20) != 0)) {
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      operator_delete(pvVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017cce0  FUN_0017cce0 =====

void FUN_0017cce0(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017cd2c  FUN_0017cd2c =====

void FUN_0017cd2c(long param_1)

{
  long lVar1;
  long lVar2;
  JSICache *this;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = *(JSICache **)(param_1 + 0x18);
  if (this == (JSICache *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else {
    margelo::nitro::JSICache::~JSICache(this);
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      operator_delete(this);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017cda0  FUN_0017cda0 =====

void FUN_0017cda0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_001ba160) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0017cdf0  FUN_0017cdf0 =====

void FUN_0017cdf0(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017ce28  _INIT_3 =====

void _INIT_3(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR__prototypeCache_001ba168;
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(PTR__prototypeCache_001ba168 + 8) = 0;
  *(undefined8 *)puVar2 = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined4 *)(puVar2 + 0x20) = 0x3f800000;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    __cxa_atexit(FUN_0017cfc8,PTR__prototypeCache_001ba168,&PTR_LOOP_001b6ad0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017ce90  _INIT_4 =====

void _INIT_4(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR__globalCache_001ba170;
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(PTR__globalCache_001ba170 + 8) = 0;
  *(undefined8 *)puVar2 = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined4 *)(puVar2 + 0x20) = 0x3f800000;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    __cxa_atexit(FUN_0018003c,PTR__globalCache_001ba170,&PTR_LOOP_001b6ad0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017cef8  _INIT_5 =====

void _INIT_5(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR__cache_001ba190;
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(PTR__cache_001ba190 + 8) = 0;
  *(undefined8 *)puVar2 = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined4 *)(puVar2 + 0x20) = 0x3f800000;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    __cxa_atexit(FUN_00182fc4,PTR__cache_001ba190,&PTR_LOOP_001b6ad0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017cf60  _INIT_6 =====

void _INIT_6(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR__cache_001ba1c0;
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(PTR__cache_001ba1c0 + 8) = 0;
  *(undefined8 *)puVar2 = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined4 *)(puVar2 + 0x20) = 0x3f800000;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    __cxa_atexit(FUN_00195df4,PTR__cache_001ba1c0,&PTR_LOOP_001b6ad0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017cfc8  FUN_0017cfc8 =====

void FUN_0017cfc8(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long lVar5;
  void *pvVar6;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)param_1[2];
  while (puVar2 != (undefined8 *)0x0) {
    pvVar4 = (void *)*puVar2;
    puVar3 = (undefined8 *)puVar2[5];
    while (puVar3 != (undefined8 *)0x0) {
      pvVar6 = (void *)*puVar3;
      FUN_0017bd14(puVar3 + 3);
      operator_delete(puVar3);
      puVar3 = (undefined8 *)pvVar6;
    }
    pvVar6 = (void *)puVar2[3];
    puVar2[3] = 0;
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
    }
    operator_delete(puVar2);
    puVar2 = (undefined8 *)pvVar4;
  }
  pvVar4 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar4 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar5) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar5) {
    operator_delete(pvVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017d0a4  margelo::nitro::HybridObjectPrototype::createPrototype =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* margelo::nitro::HybridObjectPrototype::createPrototype(facebook::jsi::Runtime&,
   std::__ndk1::shared_ptr<margelo::nitro::Prototype> const&) */

void __thiscall
margelo::nitro::HybridObjectPrototype::createPrototype
          (HybridObjectPrototype *this,Runtime *param_1,shared_ptr *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  void *pvVar6;
  void *pvVar7;
  shared_ptr *psVar8;
  Runtime *extraout_x1;
  Runtime *extraout_x1_00;
  Runtime *extraout_x1_01;
  Runtime *extraout_x1_02;
  Runtime *extraout_x1_03;
  Runtime *extraout_x1_04;
  Runtime *pRVar9;
  Runtime *extraout_x1_05;
  Value *in_x8;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  char *pcVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 *puVar16;
  char *pcVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  ulong uVar21;
  char *pcVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  ulong unaff_x23;
  char *pcVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  long lVar29;
  undefined8 *puVar30;
  ulong uVar31;
  undefined8 *puVar32;
  long *plVar33;
  long *plVar34;
  undefined2 uVar35;
  undefined8 uVar36;
  float fVar37;
  long *local_f8;
  shared_ptr *local_f0;
  long local_e8;
  long *local_e0;
  long *local_d8;
  long *local_d0;
  undefined8 *local_c8;
  Value aVStack_c0 [16];
  long *local_b0;
  shared_ptr *psStack_a8;
  long *local_a0;
  long *local_90;
  shared_ptr *psStack_88;
  long *local_80;
  undefined1 local_78;
  long local_68;
  
  puVar5 = PTR__prototypeCache_001ba168;
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  plVar14 = *(long **)param_1;
  if (plVar14 == (long *)0x0) {
    (**(code **)(*(long *)this + 0x130))(&local_90,this);
    *(undefined4 *)in_x8 = 7;
    *(long **)(in_x8 + 8) = local_90;
LAB_0017df70:
    if (*(long *)(lVar4 + 0x28) == local_68) {
      return;
    }
    goto LAB_0017e1a4;
  }
  uVar31 = *(ulong *)(PTR__prototypeCache_001ba168 + 8);
  uVar10 = (((((ulong)this & 0xffffffff) >> 3 & 0x3ffffff) << 6 | 8) ^ (ulong)this >> 0x20) *
           -0x622015f714c7d297;
  uVar10 = ((ulong)this >> 0x20 ^ uVar10 >> 0x2f ^ uVar10) * -0x622015f714c7d297;
  uVar10 = (uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297;
  if (uVar31 != 0) {
    uVar36 = NEON_cnt(uVar31,1);
    uVar35 = NEON_uaddlv(uVar36,1);
    uVar15 = CONCAT62((int6)((ulong)uVar36 >> 0x10),uVar35) & 0xffffffff;
    if (uVar15 < 2) {
      unaff_x23 = uVar10 & uVar31 - 1;
    }
    else {
      unaff_x23 = uVar10;
      if (uVar31 <= uVar10) {
        uVar19 = 0;
        if (uVar31 != 0) {
          uVar19 = uVar10 / uVar31;
        }
        unaff_x23 = uVar10 - uVar19 * uVar31;
      }
    }
    puVar16 = *(undefined8 **)(*(long *)PTR__prototypeCache_001ba168 + unaff_x23 * 8);
    if ((puVar16 != (undefined8 *)0x0) && (plVar24 = (long *)*puVar16, plVar24 != (long *)0x0)) {
      do {
        uVar19 = plVar24[1];
        if (uVar19 == uVar10) {
          if ((HybridObjectPrototype *)plVar24[2] == this) goto LAB_0017d4e0;
        }
        else {
          if (uVar15 < 2) {
            uVar19 = uVar19 & uVar31 - 1;
          }
          else if (uVar31 <= uVar19) {
            uVar12 = 0;
            if (uVar31 != 0) {
              uVar12 = uVar19 / uVar31;
            }
            uVar19 = uVar19 - uVar12 * uVar31;
          }
          if (uVar19 != unaff_x23) break;
        }
        plVar24 = (long *)*plVar24;
      } while (plVar24 != (long *)0x0);
    }
  }
  plVar24 = (long *)operator_new(0x40);
  psStack_88 = (shared_ptr *)(puVar5 + 0x10);
  lVar11 = *(long *)(puVar5 + 0x18);
  *plVar24 = 0;
  plVar24[1] = uVar10;
  plVar24[2] = (long)this;
  plVar24[4] = 0;
  plVar24[3] = 0;
  plVar24[6] = 0;
  plVar24[5] = 0;
  fVar37 = *(float *)(puVar5 + 0x20);
  *(undefined4 *)(plVar24 + 7) = 0x3f800000;
  local_80 = (long *)CONCAT71(local_80._1_7_,1);
  local_90 = plVar24;
  if ((uVar31 == 0) || (fVar37 * (float)uVar31 < (float)(lVar11 + 1))) {
    if (uVar31 < 3) {
      uVar15 = 1;
    }
    else {
      uVar15 = (ulong)((uVar31 & uVar31 - 1) != 0);
    }
    uVar15 = uVar15 | uVar31 << 1;
    uVar19 = (ulong)((float)(lVar11 + 1) / fVar37);
    if (uVar15 <= uVar19) {
      uVar15 = uVar19;
    }
    if (uVar15 - 1 == 0) {
      uVar15 = 2;
    }
    else if ((uVar15 & uVar15 - 1) != 0) {
                    /* try { // try from 0017d2a8 to 0017d2cf has its CatchHandler @ 0017e068 */
      uVar15 = std::__ndk1::__next_prime(uVar15);
      uVar31 = *(ulong *)(puVar5 + 8);
    }
    if (uVar15 <= uVar31) {
      if (uVar15 < uVar31) {
        uVar19 = (ulong)((float)*(ulong *)(puVar5 + 0x18) / *(float *)(puVar5 + 0x20));
        if (uVar31 < 3) {
LAB_0017d5d8:
                    /* try { // try from 0017d5d8 to 0017d5db has its CatchHandler @ 0017e068 */
          uVar19 = std::__ndk1::__next_prime(uVar19);
        }
        else {
          uVar36 = NEON_cnt(uVar31,1);
          uVar35 = NEON_uaddlv(uVar36,1);
          if (1 < (uint)CONCAT62((int6)((ulong)uVar36 >> 0x10),uVar35)) goto LAB_0017d5d8;
          if (1 < uVar19) {
            uVar19 = 1L << (-LZCOUNT(uVar19 - 1) & 0x3fU);
          }
        }
        if (uVar15 <= uVar19) {
          uVar15 = uVar19;
        }
        if (uVar15 < uVar31) {
          if (uVar15 != 0) goto LAB_0017d2c0;
          pvVar6 = *(void **)puVar5;
          *(undefined8 *)puVar5 = 0;
          if (pvVar6 != (void *)0x0) {
            operator_delete(pvVar6);
          }
          *(undefined8 *)(puVar5 + 8) = 0;
          uVar31 = 0;
        }
        else {
          uVar31 = *(ulong *)(puVar5 + 8);
        }
      }
LAB_0017d438:
      if ((uVar31 & uVar31 - 1) == 0) {
        unaff_x23 = uVar31 - 1 & uVar10;
      }
      else {
        unaff_x23 = uVar10;
        if (uVar31 <= uVar10) {
          uVar15 = 0;
          if (uVar31 != 0) {
            uVar15 = uVar10 / uVar31;
          }
          unaff_x23 = uVar10 - uVar15 * uVar31;
        }
      }
      goto LAB_0017d468;
    }
LAB_0017d2c0:
    if (uVar15 >> 0x3d == 0) {
      pvVar6 = operator_new(uVar15 << 3);
      pvVar7 = *(void **)puVar5;
      *(void **)puVar5 = pvVar6;
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
      }
      uVar31 = 0;
      *(ulong *)(puVar5 + 8) = uVar15;
      do {
        *(undefined8 *)(*(long *)puVar5 + uVar31 * 8) = 0;
        uVar31 = uVar31 + 1;
      } while (uVar15 != uVar31);
      plVar14 = *(long **)(puVar5 + 0x10);
      uVar31 = uVar15;
      if (plVar14 != (long *)0x0) {
        uVar19 = plVar14[1];
        uVar36 = NEON_cnt(uVar15,1);
        uVar35 = NEON_uaddlv(uVar36,1);
        uVar12 = CONCAT62((int6)((ulong)uVar36 >> 0x10),uVar35) & 0xffffffff;
        if (uVar12 < 2) {
          uVar19 = uVar19 & uVar15 - 1;
        }
        else if (uVar15 <= uVar19) {
          uVar21 = 0;
          if (uVar15 != 0) {
            uVar21 = uVar19 / uVar15;
          }
          uVar19 = uVar19 - uVar21 * uVar15;
        }
        *(undefined **)(*(long *)puVar5 + uVar19 * 8) = puVar5 + 0x10;
        plVar20 = (long *)*plVar14;
        if (plVar20 != (long *)0x0) {
          do {
            uVar21 = plVar20[1];
            if (uVar12 < 2) {
              uVar21 = uVar21 & uVar15 - 1;
            }
            else if (uVar15 <= uVar21) {
              uVar3 = 0;
              if (uVar15 != 0) {
                uVar3 = uVar21 / uVar15;
              }
              uVar21 = uVar21 - uVar3 * uVar15;
            }
            if (uVar21 != uVar19) {
              if (*(long *)(*(long *)puVar5 + uVar21 * 8) == 0) {
                *(long **)(*(long *)puVar5 + uVar21 * 8) = plVar14;
                uVar19 = uVar21;
              }
              else {
                *plVar14 = *plVar20;
                *plVar20 = **(long **)(*(long *)puVar5 + uVar21 * 8);
                **(undefined8 **)(*(long *)puVar5 + uVar21 * 8) = plVar20;
                plVar20 = plVar14;
              }
            }
            plVar14 = plVar20;
            plVar20 = (long *)*plVar14;
          } while (plVar20 != (long *)0x0);
        }
      }
      goto LAB_0017d438;
    }
LAB_0017e008:
    if (*(long *)(lVar4 + 0x28) != local_68) goto LAB_0017e1a4;
                    /* try { // try from 0017e01c to 0017e01f has its CatchHandler @ 0017e068 */
    FUN_0015d614();
  }
  else {
LAB_0017d468:
    lVar11 = *(long *)puVar5;
    plVar14 = *(long **)(lVar11 + unaff_x23 * 8);
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)(puVar5 + 0x10);
      lVar29 = *plVar14;
      *plVar14 = (long)plVar24;
      *plVar24 = lVar29;
      *(long **)(lVar11 + unaff_x23 * 8) = plVar14;
      if (*plVar24 != 0) {
        uVar10 = *(ulong *)(*plVar24 + 8);
        if ((uVar31 & uVar31 - 1) == 0) {
          uVar10 = uVar10 & uVar31 - 1;
        }
        else if (uVar31 <= uVar10) {
          uVar15 = 0;
          if (uVar31 != 0) {
            uVar15 = uVar10 / uVar31;
          }
          uVar10 = uVar10 - uVar15 * uVar31;
        }
        plVar14 = (long *)(*(long *)puVar5 + uVar10 * 8);
        goto LAB_0017d4cc;
      }
    }
    else {
      *plVar24 = *plVar14;
LAB_0017d4cc:
      *plVar14 = (long)plVar24;
    }
    *(long *)(puVar5 + 0x18) = *(long *)(puVar5 + 0x18) + 1;
    plVar14 = *(long **)param_1;
LAB_0017d4e0:
    pcVar13 = (char *)plVar24[4];
    pcVar26 = *(char **)(*plVar14 + 8);
    if (pcVar13 != (char *)0x0) {
      uVar36 = NEON_cnt(pcVar13,1);
      uVar35 = NEON_uaddlv(uVar36,1);
      uVar31 = CONCAT62((int6)((ulong)uVar36 >> 0x10),uVar35) & 0xffffffff;
      if (uVar31 < 2) {
        pcVar17 = (char *)((ulong)(pcVar13 + -1) & (ulong)pcVar26);
      }
      else {
        pcVar17 = pcVar26;
        if (pcVar13 <= pcVar26) {
          uVar10 = 0;
          if (pcVar13 != (char *)0x0) {
            uVar10 = (ulong)pcVar26 / (ulong)pcVar13;
          }
          pcVar17 = pcVar26 + -(uVar10 * (long)pcVar13);
        }
      }
      plVar14 = *(long **)(plVar24[3] + (long)pcVar17 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        do {
          pcVar22 = (char *)plVar14[1];
          if (pcVar22 == pcVar26) {
            if (*(char **)(plVar14[2] + 8) == pcVar26) {
              if (plVar14[3] != 0) {
                if ((*(byte *)(plVar14[4] + 0x10) & 1) == 0) {
                  puVar16 = (undefined8 *)plVar14[3];
                  lVar11 = *(long *)this;
                  *(undefined4 *)in_x8 = 7;
                    /* try { // try from 0017d5c4 to 0017d5cb has its CatchHandler @ 0017e038 */
                  uVar36 = (**(code **)(lVar11 + 0x88))(this,*puVar16);
                  *(undefined8 *)(in_x8 + 8) = uVar36;
                  goto LAB_0017df70;
                }
                pcVar26 = *(char **)(**(long **)param_1 + 8);
              }
              break;
            }
          }
          else {
            if (uVar31 < 2) {
              pcVar22 = (char *)((ulong)pcVar22 & (ulong)(pcVar13 + -1));
            }
            else if (pcVar13 <= pcVar22) {
              uVar10 = 0;
              if (pcVar13 != (char *)0x0) {
                uVar10 = (ulong)pcVar22 / (ulong)pcVar13;
              }
              pcVar22 = pcVar22 + -(uVar10 * (long)pcVar13);
            }
            if (pcVar22 != pcVar17) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
    psVar8 = (shared_ptr *)strlen(pcVar26);
    if ((shared_ptr *)0xffffffffffffffef < psVar8) {
      if (*(long *)(lVar4 + 0x28) != local_68) goto LAB_0017e1a4;
      FUN_0015d7fc();
LAB_0017dfd8:
      if (*(long *)(lVar4 + 0x28) != local_68) goto LAB_0017e1a4;
                    /* try { // try from 0017dfec to 0017e007 has its CatchHandler @ 0017e0a4 */
      FUN_0017e59c();
LAB_0017dff0:
      if (*(long *)(lVar4 + 0x28) != local_68) goto LAB_0017e1a4;
      FUN_0015d614();
      goto LAB_0017e008;
    }
    if (psVar8 < (shared_ptr *)0x17) {
      plVar14 = (long *)((ulong)&local_90 | 1);
      local_90 = (long *)CONCAT71(local_90._1_7_,(char)((int)psVar8 << 1));
      if (psVar8 != (shared_ptr *)0x0) goto LAB_0017d670;
    }
    else {
      plVar14 = (long *)operator_new(((ulong)psVar8 | 0xf) + 1);
      local_90 = (long *)(((ulong)psVar8 | 0xf) + 2);
      psStack_88 = psVar8;
      local_80 = plVar14;
LAB_0017d670:
      param_2 = psVar8;
      memmove(plVar14,pcVar26,(size_t)psVar8);
    }
    *(shared_ptr *)((long)plVar14 + (long)psVar8) = (shared_ptr)0x0;
    if (((ulong)local_90 & 1) == 0) {
      psStack_a8 = psStack_88;
      local_b0 = local_90;
      local_a0 = local_80;
    }
    else {
                    /* try { // try from 0017d6a4 to 0017d6af has its CatchHandler @ 0017e04c */
      param_2 = psStack_88;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b0,(char *)local_80,(ulong)psStack_88);
      operator_delete(local_80);
    }
                    /* try { // try from 0017d6bc to 0017d6cb has its CatchHandler @ 0017e09c */
    createPrototype(this,(Runtime *)(*(long *)param_1 + 8),param_2);
                    /* try { // try from 0017d6d4 to 0017d6e3 has its CatchHandler @ 0017e094 */
    (**(code **)(*(long *)this + 0x150))(&local_c8,this,aVStack_c0);
    lVar11 = *(long *)param_1;
    plVar14 = *(long **)(lVar11 + 0x28);
    pRVar9 = extraout_x1;
    if (plVar14 != (long *)0x0) {
      do {
        bVar2 = *(byte *)(plVar14 + 2);
        pcVar26 = (char *)plVar14[4];
        local_90 = (long *)CONCAT62(local_90._2_6_,0x100);
                    /* try { // try from 0017d714 to 0017d723 has its CatchHandler @ 0017e134 */
        FUN_0017e1a8(&local_d8,plVar14 + 6,this);
        local_80 = local_d8;
        psStack_88 = (shared_ptr *)CONCAT44(psStack_88._4_4_,7);
        pcVar13 = (char *)((long)plVar14 + 0x11);
        if ((bVar2 & 1) != 0) {
          pcVar13 = pcVar26;
        }
        local_d8 = (long *)0x0;
        local_78 = 0;
                    /* try { // try from 0017d744 to 0017d753 has its CatchHandler @ 0017e13c */
        CommonGlobals::Object::defineProperty
                  ((Runtime *)this,(Object *)&local_c8,pcVar13,(PlainPropertyDescriptor *)&local_90)
        ;
        facebook::jsi::Value::~Value((Value *)&psStack_88);
        pRVar9 = extraout_x1_00;
        if (local_d8 != (long *)0x0) {
          (**(code **)*local_d8)();
          pRVar9 = extraout_x1_01;
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
      lVar11 = *(long *)param_1;
    }
    for (plVar14 = *(long **)(lVar11 + 0x50); plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
      lVar11 = FUN_001673e0(*(undefined8 *)(*(long *)param_1 + 0x68),
                            *(undefined8 *)(*(long *)param_1 + 0x70),plVar14 + 2);
      bVar2 = *(byte *)(plVar14 + 2);
      if (lVar11 == 0) {
        pcVar26 = (char *)plVar14[4];
        local_90 = (long *)CONCAT62(local_90._2_6_,0x100);
                    /* try { // try from 0017d818 to 0017d827 has its CatchHandler @ 0017e0d8 */
        FUN_0017e1a8(&psStack_88,plVar14 + 6,this);
        pcVar13 = (char *)((long)plVar14 + 0x11);
        if ((bVar2 & 1) != 0) {
          pcVar13 = pcVar26;
        }
                    /* try { // try from 0017d834 to 0017d843 has its CatchHandler @ 0017e0e0 */
        CommonGlobals::Object::defineProperty
                  ((Runtime *)this,(Object *)&local_c8,pcVar13,
                   (ComputedReadonlyPropertyDescriptor *)&local_90);
        pRVar9 = extraout_x1_04;
      }
      else {
        local_90 = (long *)CONCAT62(local_90._2_6_,0x100);
        pcVar13 = (char *)((long)plVar14 + 0x11);
        if ((bVar2 & 1) != 0) {
          pcVar13 = (char *)plVar14[4];
        }
                    /* try { // try from 0017d7c4 to 0017d7d3 has its CatchHandler @ 0017e10c */
        FUN_0017e1a8(&psStack_88,plVar14 + 6,this);
                    /* try { // try from 0017d7d4 to 0017d7e3 has its CatchHandler @ 0017e114 */
        FUN_0017e1a8(&local_80,lVar11 + 0x30,this);
                    /* try { // try from 0017d7e4 to 0017d7f7 has its CatchHandler @ 0017e0e4 */
        CommonGlobals::Object::defineProperty
                  ((Runtime *)this,(Object *)&local_c8,pcVar13,
                   (ComputedPropertyDescriptor *)&local_90);
        pRVar9 = extraout_x1_02;
        if (local_80 != (long *)0x0) {
          (**(code **)*local_80)();
          pRVar9 = extraout_x1_03;
        }
      }
      if (psStack_88 != (shared_ptr *)0x0) {
        (*(code *)**(undefined8 **)psStack_88)();
        pRVar9 = extraout_x1_05;
      }
    }
    local_d8 = (long *)0x0;
    local_d0 = (long *)0x0;
                    /* try { // try from 0017d860 to 0017d86b has its CatchHandler @ 0017e08c */
    JSICache::getOrCreateCache((JSICache *)this,pRVar9);
                    /* try { // try from 0017d86c to 0017d88f has its CatchHandler @ 0017e0bc */
    plVar14 = (long *)operator_new(8);
    puVar16 = local_c8;
    local_c8 = (undefined8 *)0x0;
    *plVar14 = (long)puVar16;
    local_f8 = plVar14;
    local_f0 = (shared_ptr *)operator_new(0x40);
    local_f0[0x10] = (shared_ptr)0x0;
    lVar29 = _UNK_00138c28;
    lVar11 = _DAT_00138c20;
    *(undefined8 *)(local_f0 + 0x34) = 0;
    *(long *)(local_f0 + 8) = lVar29;
    *(long *)local_f0 = lVar11;
    *(undefined8 *)(local_f0 + 0x1c) = 0;
    *(undefined8 *)(local_f0 + 0x14) = 0;
    *(undefined8 *)(local_f0 + 0x2c) = 0;
    *(undefined8 *)(local_f0 + 0x24) = 0;
    local_90 = plVar14;
    psStack_88 = local_f0;
    FUN_0015bb40(1,local_f0 + 8);
    puVar16 = *(undefined8 **)(local_e8 + 0x50);
    if (*(undefined8 **)(local_e8 + 0x58) <= puVar16) {
      lVar29 = (long)puVar16 - *(long *)(local_e8 + 0x48);
      lVar11 = lVar29 >> 4;
      uVar31 = lVar11 + 1;
      if (uVar31 >> 0x3c != 0) goto LAB_0017dfd8;
      uVar15 = (long)*(undefined8 **)(local_e8 + 0x58) - *(long *)(local_e8 + 0x48);
      uVar10 = (long)uVar15 >> 3;
      if (uVar10 <= uVar31) {
        uVar10 = uVar31;
      }
      if (0x7fffffffffffffef < uVar15) {
        uVar10 = 0xfffffffffffffff;
      }
      if (uVar10 >> 0x3c == 0) {
                    /* try { // try from 0017d928 to 0017d92b has its CatchHandler @ 0017e0a4 */
        pvVar7 = operator_new(uVar10 << 4);
        psVar8 = psStack_88;
        plVar14 = local_90;
        puVar16 = (undefined8 *)((long)pvVar7 + lVar29);
        pvVar6 = (void *)((long)pvVar7 + uVar10 * 0x10);
        local_90 = (long *)0x0;
        psStack_88 = (shared_ptr *)0x0;
        puVar32 = puVar16 + 2;
        *puVar16 = plVar14;
        *(shared_ptr **)((long)pvVar7 + lVar11 * 0x10 + 8) = psVar8;
        puVar1 = *(undefined8 **)(local_e8 + 0x48);
        puVar28 = *(undefined8 **)(local_e8 + 0x50);
        if (puVar28 == puVar1) {
          *(undefined8 **)(local_e8 + 0x48) = puVar16;
          *(undefined8 **)(local_e8 + 0x50) = puVar32;
          *(void **)(local_e8 + 0x58) = pvVar6;
        }
        else {
          do {
            puVar27 = puVar28 + -2;
            puVar30 = puVar16 + -2;
            *puVar30 = *puVar27;
            lVar11 = puVar28[-1];
            puVar16[-1] = lVar11;
            if (lVar11 != 0) {
              FUN_0015bb40(1,lVar11 + 8);
            }
            puVar28 = puVar27;
            puVar16 = puVar30;
          } while (puVar27 != puVar1);
          puVar28 = *(undefined8 **)(local_e8 + 0x48);
          puVar16 = *(undefined8 **)(local_e8 + 0x50);
          *(undefined8 **)(local_e8 + 0x48) = puVar30;
          *(undefined8 **)(local_e8 + 0x50) = puVar32;
          *(void **)(local_e8 + 0x58) = pvVar6;
          while (puVar16 != puVar28) {
            plVar14 = puVar16 + -1;
            puVar16 = puVar16 + -2;
            if (*plVar14 != 0) {
              FUN_0015bb40(0xffffffffffffffff,*plVar14 + 8);
                    /* try { // try from 0017db04 to 0017db0b has its CatchHandler @ 0017e0d4 */
              FUN_0017b920(puVar16);
            }
          }
        }
        if (puVar28 != (undefined8 *)0x0) {
          operator_delete(puVar28);
        }
        *(undefined8 **)(local_e8 + 0x50) = puVar32;
        if (psStack_88 != (shared_ptr *)0x0) {
          FUN_0015bb40(0xffffffffffffffff,psStack_88 + 8);
                    /* try { // try from 0017d9c8 to 0017d9cf has its CatchHandler @ 0017e048 */
          FUN_0017b920(&local_90);
        }
        goto LAB_0017d9d0;
      }
      goto LAB_0017dff0;
    }
    puVar16[1] = psStack_88;
    *puVar16 = local_90;
    *(undefined8 **)(local_e8 + 0x50) = puVar16 + 2;
LAB_0017d9d0:
    FUN_0017e3b0(&local_d8,&local_f8);
    if (local_f0 != (shared_ptr *)0x0) {
      uVar31 = FUN_0015bb40(0xffffffffffffffff);
      plVar14 = local_f8;
      if (uVar31 < 2) {
        if (((byte)local_f0[0x10] & 1) == 0) {
          if (local_f8 != (long *)0x0) {
            if ((undefined8 *)*local_f8 != (undefined8 *)0x0) {
              (*(code *)**(undefined8 **)*local_f8)();
            }
            operator_delete(plVar14);
          }
          local_f8 = (long *)0x0;
          *(undefined4 *)(local_f0 + 0x10) = 1;
          goto LAB_0017da3c;
        }
        lVar11 = *(long *)local_f0;
        psVar8 = local_f0;
      }
      else {
LAB_0017da3c:
        lVar11 = *(long *)local_f0;
        psVar8 = local_f0;
      }
      local_f0 = psVar8;
      if (((lVar11 == 0) && (*(long *)(psVar8 + 8) == 0)) && (psVar8 != (shared_ptr *)0x0)) {
        std::__ndk1::mutex::~mutex((mutex *)(psVar8 + 0x14));
        operator_delete(psVar8);
      }
    }
    std::__ndk1::mutex::unlock();
    if ((local_e0 != (long *)0x0) &&
       (lVar11 = FUN_0015bb40(0xffffffffffffffff,local_e0 + 1), lVar11 == 0)) {
      (**(code **)(*local_e0 + 0x10))(local_e0);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar34 = *(long **)param_1;
    plVar33 = (long *)plVar24[4];
    plVar20 = *(long **)(*plVar34 + 8);
    plVar14 = local_e0;
    if (plVar33 != (long *)0x0) {
      uVar36 = NEON_cnt(plVar33,1);
      uVar35 = NEON_uaddlv(uVar36,1);
      uVar31 = CONCAT62((int6)((ulong)uVar36 >> 0x10),uVar35) & 0xffffffff;
      if (uVar31 < 2) {
        plVar14 = (long *)((long)plVar33 - 1U & (ulong)plVar20);
      }
      else {
        plVar14 = plVar20;
        if (plVar33 <= plVar20) {
          uVar10 = 0;
          if (plVar33 != (long *)0x0) {
            uVar10 = (ulong)plVar20 / (ulong)plVar33;
          }
          plVar14 = (long *)((long)plVar20 - uVar10 * (long)plVar33);
        }
      }
      puVar16 = *(undefined8 **)(plVar24[3] + (long)plVar14 * 8);
      if ((puVar16 != (undefined8 *)0x0) && (plVar25 = (long *)*puVar16, plVar25 != (long *)0x0)) {
        do {
          plVar18 = (long *)plVar25[1];
          if (plVar18 == plVar20) {
            if (*(long **)(plVar25[2] + 8) == plVar20) goto LAB_0017de80;
          }
          else {
            if (uVar31 < 2) {
              plVar18 = (long *)((ulong)plVar18 & (long)plVar33 - 1U);
            }
            else if (plVar33 <= plVar18) {
              uVar10 = 0;
              if (plVar33 != (long *)0x0) {
                uVar10 = (ulong)plVar18 / (ulong)plVar33;
              }
              plVar18 = (long *)((long)plVar18 - uVar10 * (long)plVar33);
            }
            if (plVar18 != plVar14) break;
          }
          plVar25 = (long *)*plVar25;
        } while (plVar25 != (long *)0x0);
      }
    }
                    /* try { // try from 0017db90 to 0017db97 has its CatchHandler @ 0017e078 */
    plVar25 = (long *)operator_new(0x28);
    psVar8 = (shared_ptr *)(plVar24 + 5);
    *plVar25 = 0;
    plVar25[1] = (long)plVar20;
    lVar11 = *plVar34;
    plVar25[3] = 0;
    plVar25[4] = 0;
    plVar25[2] = lVar11;
    local_80 = (long *)CONCAT71(local_80._1_7_,1);
    local_90 = plVar25;
    psStack_88 = psVar8;
    if ((plVar33 != (long *)0x0) &&
       ((float)(plVar24[6] + 1) <= *(float *)(plVar24 + 7) * (float)plVar33)) {
LAB_0017de10:
      lVar11 = plVar24[3];
      plVar20 = *(long **)(lVar11 + (long)plVar14 * 8);
      if (plVar20 == (long *)0x0) {
        *plVar25 = *(long *)psVar8;
        *(long **)psVar8 = plVar25;
        *(shared_ptr **)(lVar11 + (long)plVar14 * 8) = psVar8;
        if (*plVar25 != 0) {
          plVar14 = *(long **)(*plVar25 + 8);
          if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
            plVar14 = (long *)((ulong)plVar14 & (long)plVar33 - 1U);
          }
          else if (plVar33 <= plVar14) {
            uVar31 = 0;
            if (plVar33 != (long *)0x0) {
              uVar31 = (ulong)plVar14 / (ulong)plVar33;
            }
            plVar14 = (long *)((long)plVar14 - uVar31 * (long)plVar33);
          }
          plVar20 = (long *)(plVar24[3] + (long)plVar14 * 8);
          goto LAB_0017de70;
        }
      }
      else {
        *plVar25 = *plVar20;
LAB_0017de70:
        *plVar20 = (long)plVar25;
      }
      plVar24[6] = plVar24[6] + 1;
LAB_0017de80:
      FUN_0017e3b0(plVar25 + 3,&local_d8);
      lVar11 = *(long *)this;
      *(undefined4 *)in_x8 = 7;
                    /* try { // try from 0017dea4 to 0017deaf has its CatchHandler @ 0017e07c */
      uVar36 = (**(code **)(lVar11 + 0x88))(this,*local_d8);
      *(undefined8 *)(in_x8 + 8) = uVar36;
      if (local_d0 != (long *)0x0) {
        uVar31 = FUN_0015bb40(0xffffffffffffffff);
        plVar14 = local_d8;
        if (uVar31 < 2) {
          if ((*(byte *)(local_d0 + 2) & 1) == 0) {
            if (local_d8 != (long *)0x0) {
              if ((undefined8 *)*local_d8 != (undefined8 *)0x0) {
                (*(code *)**(undefined8 **)*local_d8)();
              }
              operator_delete(plVar14);
            }
            local_d8 = (long *)0x0;
            *(undefined4 *)(local_d0 + 2) = 1;
            goto LAB_0017df14;
          }
          lVar11 = *local_d0;
          plVar14 = local_d0;
        }
        else {
LAB_0017df14:
          lVar11 = *local_d0;
          plVar14 = local_d0;
        }
        local_d0 = plVar14;
        if (((lVar11 == 0) && (plVar14[1] == 0)) && (plVar14 != (long *)0x0)) {
          std::__ndk1::mutex::~mutex((mutex *)((long)plVar14 + 0x14));
          operator_delete(plVar14);
        }
      }
      if (local_c8 != (undefined8 *)0x0) {
        (**(code **)*local_c8)();
      }
      facebook::jsi::Value::~Value(aVStack_c0);
      if (((ulong)local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
      goto LAB_0017df70;
    }
    if (plVar33 < (long *)0x3) {
      uVar31 = 1;
    }
    else {
      uVar31 = (ulong)(((ulong)plVar33 & (long)plVar33 - 1U) != 0);
    }
    plVar14 = (long *)(uVar31 | (long)plVar33 << 1);
    plVar34 = (long *)(long)((float)(plVar24[6] + 1) / *(float *)(plVar24 + 7));
    if (plVar14 <= plVar34) {
      plVar14 = plVar34;
    }
    if ((long)plVar14 - 1U == 0) {
      plVar14 = (long *)0x2;
    }
    else if (((ulong)plVar14 & (long)plVar14 - 1U) != 0) {
                    /* try { // try from 0017dc2c to 0017ddb7 has its CatchHandler @ 0017e058 */
      plVar14 = (long *)std::__ndk1::__next_prime((ulong)plVar14);
      plVar33 = (long *)plVar24[4];
    }
    if (plVar14 <= plVar33) {
      if (plVar14 < plVar33) {
        plVar34 = (long *)(long)((float)(ulong)plVar24[6] / *(float *)(plVar24 + 7));
        if (plVar33 < (long *)0x3) {
LAB_0017ddb4:
          plVar34 = (long *)std::__ndk1::__next_prime((ulong)plVar34);
        }
        else {
          uVar36 = NEON_cnt(plVar33,1);
          uVar35 = NEON_uaddlv(uVar36,1);
          if (1 < (uint)CONCAT62((int6)((ulong)uVar36 >> 0x10),uVar35)) goto LAB_0017ddb4;
          if ((long *)0x1 < plVar34) {
            plVar34 = (long *)(1L << (-LZCOUNT((long)plVar34 - 1) & 0x3fU));
          }
        }
        if (plVar14 <= plVar34) {
          plVar14 = plVar34;
        }
        if (plVar14 < plVar33) {
          if (plVar14 != (long *)0x0) goto LAB_0017dc44;
          pvVar6 = (void *)plVar24[3];
          plVar24[3] = 0;
          if (pvVar6 != (void *)0x0) {
            operator_delete(pvVar6);
          }
          plVar24[4] = 0;
        }
      }
LAB_0017dde0:
      plVar33 = (long *)plVar24[4];
      if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
        plVar14 = (long *)((long)plVar33 - 1U & (ulong)plVar20);
      }
      else {
        plVar14 = plVar20;
        if (plVar33 <= plVar20) {
          uVar31 = 0;
          if (plVar33 != (long *)0x0) {
            uVar31 = (ulong)plVar20 / (ulong)plVar33;
          }
          plVar14 = (long *)((long)plVar20 - uVar31 * (long)plVar33);
        }
      }
      goto LAB_0017de10;
    }
LAB_0017dc44:
    if ((ulong)plVar14 >> 0x3d == 0) {
      pvVar6 = operator_new((long)plVar14 << 3);
      pvVar7 = (void *)plVar24[3];
      plVar24[3] = (long)pvVar6;
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
      }
      plVar33 = (long *)0x0;
      plVar24[4] = (long)plVar14;
      do {
        *(undefined8 *)(plVar24[3] + (long)plVar33 * 8) = 0;
        plVar33 = (long *)((long)plVar33 + 1);
      } while (plVar14 != plVar33);
      plVar33 = *(long **)psVar8;
      if (plVar33 != (long *)0x0) {
        plVar34 = (long *)plVar33[1];
        uVar36 = NEON_cnt(plVar14,1);
        uVar35 = NEON_uaddlv(uVar36,1);
        uVar31 = CONCAT62((int6)((ulong)uVar36 >> 0x10),uVar35) & 0xffffffff;
        if (uVar31 < 2) {
          plVar34 = (long *)((ulong)plVar34 & (long)plVar14 - 1U);
        }
        else if (plVar14 <= plVar34) {
          uVar10 = 0;
          if (plVar14 != (long *)0x0) {
            uVar10 = (ulong)plVar34 / (ulong)plVar14;
          }
          plVar34 = (long *)((long)plVar34 - uVar10 * (long)plVar14);
        }
        *(shared_ptr **)(plVar24[3] + (long)plVar34 * 8) = psVar8;
        plVar18 = (long *)*plVar33;
        if (plVar18 != (long *)0x0) {
          do {
            plVar23 = (long *)plVar18[1];
            if (uVar31 < 2) {
              plVar23 = (long *)((ulong)plVar23 & (long)plVar14 - 1U);
            }
            else if (plVar14 <= plVar23) {
              uVar10 = 0;
              if (plVar14 != (long *)0x0) {
                uVar10 = (ulong)plVar23 / (ulong)plVar14;
              }
              plVar23 = (long *)((long)plVar23 - uVar10 * (long)plVar14);
            }
            if (plVar23 != plVar34) {
              if (*(long *)(plVar24[3] + (long)plVar23 * 8) == 0) {
                *(long **)(plVar24[3] + (long)plVar23 * 8) = plVar33;
                plVar34 = plVar23;
              }
              else {
                *plVar33 = *plVar18;
                *plVar18 = **(long **)(plVar24[3] + (long)plVar23 * 8);
                **(undefined8 **)(plVar24[3] + (long)plVar23 * 8) = plVar18;
                plVar18 = plVar33;
              }
            }
            plVar33 = plVar18;
            plVar18 = (long *)*plVar33;
          } while (plVar18 != (long *)0x0);
        }
      }
      goto LAB_0017dde0;
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 0017e034 to 0017e037 has its CatchHandler @ 0017e058 */
    uVar36 = FUN_0015d614();
                    /* catch() { ... } // from try @ 0017d5c4 with catch @ 0017e038 */
    facebook::jsi::Value::~Value(in_x8);
    if (*(long *)(lVar4 + 0x28) == local_68) {
      FUN_00157e74(uVar36);
    }
  }
LAB_0017e1a4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017e1a8  FUN_0017e1a8 =====

void FUN_0017e1a8(undefined8 param_1,long *param_2,Runtime *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long **pplVar5;
  long lVar6;
  long local_b0 [4];
  long *local_90 [2];
  long local_80 [4];
  long *local_60 [3];
  long local_48;
  
  plVar3 = local_b0;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = margelo::nitro::PropNameIDCache::get(param_3,(basic_string *)(param_2 + 7));
  plVar4 = (long *)param_2[4];
  lVar6 = param_2[6];
  if (plVar4 == (long *)0x0) {
    local_90[0] = (long *)0x0;
LAB_0017e21c:
    pplVar5 = local_60;
LAB_0017e260:
    *pplVar5 = (long *)0x0;
  }
  else {
    if (plVar4 == param_2) {
      local_90[0] = local_b0;
      (**(code **)(*param_2 + 0x18))(param_2,local_b0);
    }
    else {
      local_90[0] = (long *)(**(code **)(*plVar4 + 0x10))(plVar4);
    }
    if (local_90[0] == (long *)0x0) goto LAB_0017e21c;
    if (local_90[0] != local_b0) {
      pplVar5 = local_90;
      local_60[0] = local_90[0];
      goto LAB_0017e260;
    }
    local_60[0] = local_80;
                    /* try { // try from 0017e31c to 0017e327 has its CatchHandler @ 0017e32c */
    (**(code **)(local_b0[0] + 0x18))(local_b0,local_80);
  }
                    /* try { // try from 0017e26c to 0017e287 has its CatchHandler @ 0017e330 */
  (**(code **)(*(long *)param_3 + 0x278))(param_1,param_3,uVar2,(int)lVar6,local_80);
  if (local_60[0] == local_80) {
    lVar6 = 4;
    plVar4 = local_80;
LAB_0017e2a8:
    (**(code **)(*plVar4 + lVar6 * 8))();
  }
  else if (local_60[0] != (long *)0x0) {
    lVar6 = 5;
    plVar4 = local_60[0];
    goto LAB_0017e2a8;
  }
  if (local_90[0] == local_b0) {
    lVar6 = 4;
  }
  else {
    if (local_90[0] == (long *)0x0) goto LAB_0017e2e4;
    lVar6 = 5;
    plVar3 = local_90[0];
  }
  (**(code **)(*plVar3 + lVar6 * 8))();
LAB_0017e2e4:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017e3b0  FUN_0017e3b0 =====

undefined8 * FUN_0017e3b0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  if (param_1 != param_2) {
    if (param_1[1] != 0) {
      uVar3 = FUN_0015bb40(0xffffffffffffffff);
      if ((uVar3 < 2) && ((*(byte *)(param_1[1] + 0x10) & 1) == 0)) {
        plVar5 = (long *)*param_1;
        if (plVar5 != (long *)0x0) {
          if ((undefined8 *)*plVar5 != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)*plVar5)();
          }
          operator_delete(plVar5);
        }
        *param_1 = 0;
        *(undefined4 *)(param_1[1] + 0x10) = 1;
      }
      if ((*(long *)param_1[1] == 0) && (*(long *)(param_1[1] + 8) == 0)) {
        pvVar6 = (void *)param_1[1];
        if (pvVar6 != (void *)0x0) {
          std::__ndk1::mutex::~mutex((mutex *)((long)pvVar6 + 0x14));
          operator_delete(pvVar6);
        }
        param_1[1] = 0;
      }
    }
    lVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      FUN_0015bb40(1);
    }
  }
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017e4b8  FUN_0017e4b8 =====

void FUN_0017e4b8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  pvVar3 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar3 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else {
    if (*(char *)(param_1 + 2) != '\0') {
      FUN_0017bd14((long)pvVar3 + 0x18);
    }
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      operator_delete(pvVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017e538  FUN_0017e538 =====

void FUN_0017e538(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_0015bb40(0xffffffffffffffff,*(long *)(param_1 + 8) + 8);
                    /* try { // try from 0017e56c to 0017e573 has its CatchHandler @ 0017e598 */
    FUN_0017b920(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017e59c  FUN_0017e59c =====

void FUN_0017e59c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_0015d71c("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017e5d4  FUN_0017e5d4 =====

void FUN_0017e5d4(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  pvVar4 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar4 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    if (*(char *)(param_1 + 2) != '\0') {
      puVar2 = (undefined8 *)*(void **)((long)pvVar4 + 0x28);
      while (puVar2 != (undefined8 *)0x0) {
        pvVar5 = (void *)*puVar2;
        FUN_0017bd14(puVar2 + 3);
        operator_delete(puVar2);
        puVar2 = (undefined8 *)pvVar5;
      }
      pvVar5 = *(void **)((long)pvVar4 + 0x18);
      *(undefined8 *)((long)pvVar4 + 0x18) = 0;
      if (pvVar5 != (void *)0x0) {
        operator_delete(pvVar5);
      }
    }
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      operator_delete(pvVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017e68c  margelo::nitro::HybridObjectPrototype::ensureInitialized =====

/* margelo::nitro::HybridObjectPrototype::ensureInitialized() */

void __thiscall
margelo::nitro::HybridObjectPrototype::ensureInitialized(HybridObjectPrototype *this)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (this[0x18] == (HybridObjectPrototype)0x0) {
    if (((DAT_001bfd28 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_001bfd28), iVar2 != 0)) {
      __cxa_atexit(PTR__mutex_001b9e98,&DAT_001bfd00,&PTR_LOOP_001b6ad0);
      __cxa_guard_release(&DAT_001bfd28);
    }
    std::__ndk1::mutex::lock();
    if (this[0x18] == (HybridObjectPrototype)0x0) {
                    /* try { // try from 0017e700 to 0017e707 has its CatchHandler @ 0017e774 */
      (*(code *)**(undefined8 **)this)(this);
      this[0x18] = (HybridObjectPrototype)0x1;
    }
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::mutex::unlock();
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017e7a0  margelo::nitro::HybridObjectPrototype::getPrototype =====

/* margelo::nitro::HybridObjectPrototype::getPrototype(facebook::jsi::Runtime&) */

void margelo::nitro::HybridObjectPrototype::getPrototype(Runtime *param_1)

{
  long lVar1;
  HybridObjectPrototype *in_x1;
  shared_ptr *in_x2;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  ensureInitialized((HybridObjectPrototype *)param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    createPrototype(in_x1,param_1 + 8,in_x2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017e804  margelo::nitro::HybridObjectRegistry::getRegistry =====

/* margelo::nitro::HybridObjectRegistry::getRegistry() */

undefined8 * margelo::nitro::HybridObjectRegistry::getRegistry(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((DAT_001bfd58 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_001bfd58);
    if (iVar2 != 0) {
      DAT_001bfd50 = 0x3f800000;
      DAT_001bfd38 = 0;
      DAT_001bfd30 = 0;
      DAT_001bfd48 = 0;
      DAT_001bfd40 = 0;
      __cxa_atexit(FUN_0017e8ac,&DAT_001bfd30,&PTR_LOOP_001b6ad0);
      __cxa_guard_release(&DAT_001bfd58);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return &DAT_001bfd30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017e8ac  FUN_0017e8ac =====

void FUN_0017e8ac(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = tpidr_el0;
  lVar6 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)param_1[2];
  do {
    if (puVar2 == (undefined8 *)0x0) {
      pvVar3 = (void *)*param_1;
      *param_1 = 0;
      if (pvVar3 == (void *)0x0) {
        if (*(long *)(lVar1 + 0x28) == lVar6) {
          return;
        }
      }
      else if (*(long *)(lVar1 + 0x28) == lVar6) {
        operator_delete(pvVar3);
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    plVar4 = (long *)puVar2[10];
    plVar5 = puVar2 + 6;
    pvVar3 = (void *)*puVar2;
    if (plVar4 == plVar5) {
      lVar7 = 4;
LAB_0017e940:
      (**(code **)(*plVar5 + lVar7 * 8))();
    }
    else if (plVar4 != (long *)0x0) {
      lVar7 = 5;
      plVar5 = plVar4;
      goto LAB_0017e940;
    }
    if ((*(byte *)(puVar2 + 2) & 1) != 0) {
      operator_delete((void *)puVar2[4]);
    }
    operator_delete(puVar2);
    puVar2 = (undefined8 *)pvVar3;
  } while( true );
}


// ===== 0017e988  margelo::nitro::HybridObjectRegistry::hasHybridObject =====

/* margelo::nitro::HybridObjectRegistry::hasHybridObject(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void margelo::nitro::HybridObjectRegistry::hasHybridObject(basic_string *param_1)

{
  size_t sVar1;
  size_t sVar2;
  basic_string *__s2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  basic_string *pbVar12;
  basic_string *pbVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined2 uVar17;
  undefined8 uVar18;
  
  lVar5 = tpidr_el0;
  lVar9 = *(long *)(lVar5 + 0x28);
  if (((DAT_001bfd58 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_001bfd58), iVar7 != 0)) {
    DAT_001bfd50 = 0x3f800000;
    DAT_001bfd38 = 0;
    DAT_001bfd30 = 0;
    DAT_001bfd48 = 0;
    DAT_001bfd40 = 0;
    __cxa_atexit(FUN_0017e8ac,&DAT_001bfd30,&PTR_LOOP_001b6ad0);
    __cxa_guard_release(&DAT_001bfd58);
  }
  sVar2 = *(size_t *)(param_1 + 8);
  __s2 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __s2 = param_1 + 1;
    sVar2 = (ulong)((byte)*param_1 >> 1);
  }
  uVar8 = FUN_0015c450(__s2,sVar2);
  uVar6 = DAT_001bfd38;
  if (DAT_001bfd38 != 0) {
    uVar18 = NEON_cnt(DAT_001bfd38,1);
    uVar17 = NEON_uaddlv(uVar18,1);
    uVar14 = CONCAT62((int6)((ulong)uVar18 >> 0x10),uVar17) & 0xffffffff;
    if (uVar14 < 2) {
      uVar15 = DAT_001bfd38 - 1 & uVar8;
    }
    else {
      uVar15 = uVar8;
      if (DAT_001bfd38 <= uVar8) {
        uVar15 = 0;
        if (DAT_001bfd38 != 0) {
          uVar15 = uVar8 / DAT_001bfd38;
        }
        uVar15 = uVar8 - uVar15 * DAT_001bfd38;
      }
    }
    plVar10 = *(long **)(DAT_001bfd30 + uVar15 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      uVar16 = DAT_001bfd38 - 1;
      do {
        uVar11 = plVar10[1];
        if (uVar8 == uVar11) {
          bVar3 = *(byte *)(plVar10 + 2);
          uVar11 = (ulong)(bVar3 >> 1);
          sVar1 = uVar11;
          if ((bVar3 & 1) != 0) {
            sVar1 = plVar10[3];
          }
          if (sVar1 == sVar2) {
            if ((bVar3 & 1) == 0) {
              if (bVar3 < 2) {
LAB_0017eafc:
                uVar18 = 1;
                goto LAB_0017eb08;
              }
              pbVar12 = (basic_string *)((long)plVar10 + 0x11);
              pbVar13 = __s2;
              while (*pbVar12 == *pbVar13) {
                uVar11 = uVar11 - 1;
                pbVar12 = pbVar12 + 1;
                pbVar13 = pbVar13 + 1;
                if (uVar11 == 0) goto LAB_0017eafc;
              }
            }
            else {
              iVar7 = memcmp((void *)plVar10[4],__s2,plVar10[3]);
              if (iVar7 == 0) goto LAB_0017eafc;
            }
          }
        }
        else {
          if (uVar14 < 2) {
            uVar11 = uVar11 & uVar16;
          }
          else if (uVar6 <= uVar11) {
            uVar4 = 0;
            if (uVar6 != 0) {
              uVar4 = uVar11 / uVar6;
            }
            uVar11 = uVar11 - uVar4 * uVar6;
          }
          if (uVar11 != uVar15) break;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  uVar18 = 0;
LAB_0017eb08:
  if (*(long *)(lVar5 + 0x28) == lVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar18);
}


// ===== 0017eb9c  margelo::nitro::HybridObjectRegistry::getAllHybridObjectNames =====

/* margelo::nitro::HybridObjectRegistry::getAllHybridObjectNames() */

void __thiscall
margelo::nitro::HybridObjectRegistry::getAllHybridObjectNames(HybridObjectRegistry *this)

{
  long lVar1;
  int iVar2;
  undefined8 *in_x8;
  long lVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  if (((DAT_001bfd58 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_001bfd58), iVar2 != 0)) {
    DAT_001bfd50 = 0x3f800000;
    DAT_001bfd38 = 0;
    DAT_001bfd30 = 0;
    DAT_001bfd48 = 0;
    DAT_001bfd40 = (long *)0x0;
    __cxa_atexit(FUN_0017e8ac,&DAT_001bfd30,&PTR_LOOP_001b6ad0);
    __cxa_guard_release(&DAT_001bfd58);
  }
                    /* try { // try from 0017ebe0 to 0017ebe7 has its CatchHandler @ 0017ed1c */
  FUN_0015d0f8();
  if (((DAT_001bfd58 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_001bfd58), iVar2 != 0)) {
    DAT_001bfd50 = 0x3f800000;
    DAT_001bfd38 = 0;
    DAT_001bfd30 = 0;
    DAT_001bfd48 = 0;
    DAT_001bfd40 = (long *)0x0;
    __cxa_atexit(FUN_0017e8ac,&DAT_001bfd30,&PTR_LOOP_001b6ad0);
    __cxa_guard_release(&DAT_001bfd58);
  }
  if (DAT_001bfd40 != (long *)0x0) {
    this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              in_x8[1];
    plVar4 = DAT_001bfd40;
    do {
      if (this_00 < (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)in_x8[2]) {
        if ((*(byte *)(plVar4 + 2) & 1) == 0) {
          lVar6 = plVar4[3];
          lVar5 = plVar4[2];
          *(long *)(this_00 + 0x10) = plVar4[4];
          *(long *)(this_00 + 8) = lVar6;
          *(long *)this_00 = lVar5;
        }
        else {
                    /* try { // try from 0017ec40 to 0017ec47 has its CatchHandler @ 0017ed20 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external(this_00,(char *)plVar4[4],plVar4[3]);
        }
        this_00 = this_00 + 0x18;
        in_x8[1] = this_00;
      }
      else {
                    /* try { // try from 0017ec4c to 0017ec57 has its CatchHandler @ 0017ed2c */
        this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  FUN_0015d30c();
      }
      plVar4 = (long *)*plVar4;
      in_x8[1] = this_00;
    } while (plVar4 != (long *)0x0);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017ed54  margelo::nitro::HybridObjectRegistry::getAllRegisteredHybridObjectNamesToString =====

/* margelo::nitro::HybridObjectRegistry::getAllRegisteredHybridObjectNamesToString() */

void margelo::nitro::HybridObjectRegistry::getAllRegisteredHybridObjectNamesToString(void)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  void *pvVar4;
  long lVar5;
  undefined2 uVar6;
  ulong *puVar7;
  ulong uVar8;
  HybridObjectRegistry *in_x0;
  void *pvVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong *in_x8;
  ulong *puVar12;
  ulong local_110;
  size_t sStack_108;
  void *local_100;
  ulong *local_f8;
  ulong *local_f0;
  ulong local_e0;
  ulong uStack_d8;
  void *local_d0;
  ulong local_c0;
  size_t sStack_b8;
  void *local_b0;
  ulong local_a0;
  ulong local_98;
  void *local_90;
  undefined6 local_88;
  undefined2 uStack_82;
  undefined6 uStack_80;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  getAllHybridObjectNames(in_x0);
  puVar7 = local_f0;
  if (local_f8 == local_f0) {
    *(undefined2 *)in_x8 = 0;
    puVar7 = local_f8;
  }
  else {
    puVar12 = local_f8 + 3;
    if ((*local_f8 & 1) == 0) {
      local_100 = (void *)local_f8[2];
      sStack_108 = local_f8[1];
      local_110 = *local_f8;
    }
    else {
                    /* try { // try from 0017edcc to 0017edd3 has its CatchHandler @ 0017f030 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_110,(char *)local_f8[2],local_f8[1]);
    }
    if (puVar12 != puVar7) {
      do {
        local_b0 = local_100;
        sStack_b8 = sStack_108;
        local_c0 = local_110;
        local_110 = 0;
        sStack_108 = 0;
        local_100 = (void *)0x0;
        if ((*puVar12 & 1) == 0) {
          local_d0 = (void *)puVar12[2];
          uStack_d8 = puVar12[1];
          local_e0 = *puVar12;
        }
        else {
                    /* try { // try from 0017ee4c to 0017ee53 has its CatchHandler @ 0017f038 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_e0,(char *)puVar12[2],puVar12[1]);
        }
        uVar8 = local_c0;
        sVar3 = local_c0 >> 1 & 0x7f;
        if ((local_c0 & 1) != 0) {
          sVar3 = sStack_b8;
        }
        uVar1 = sVar3 + 2;
        if (0xffffffffffffffef < uVar1) {
          if (*(long *)(lVar5 + 0x28) == local_78) {
                    /* try { // try from 0017f02c to 0017f02f has its CatchHandler @ 0017f04c */
            uVar11 = FUN_0015d7fc();
                    /* catch() { ... } // from try @ 0017edcc with catch @ 0017f030 */
            while (FUN_0015d524(&local_f8), *(long *)(lVar5 + 0x28) == local_78) {
              FUN_00157e74(uVar11);
              operator_delete(local_90);
              if ((local_e0 & 1) != 0) {
                operator_delete(local_d0);
              }
              if ((local_c0 & 1) != 0) {
                operator_delete(local_b0);
              }
              if ((local_110 & 1) != 0) {
                operator_delete(local_100);
              }
            }
          }
          goto LAB_0017f0e0;
        }
        if (uVar1 < 0x17) {
          local_98 = 0;
          local_90 = (void *)0x0;
          local_a0 = (ulong)(byte)((int)uVar1 << 1);
          pvVar9 = (void *)((ulong)&local_a0 | 1);
          if (sVar3 != 0) goto LAB_0017eeb8;
        }
        else {
          uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 0017eea0 to 0017eea7 has its CatchHandler @ 0017f048 */
          pvVar9 = operator_new(uVar2);
          local_a0 = uVar2 | 1;
          local_98 = uVar1;
          local_90 = pvVar9;
LAB_0017eeb8:
          pvVar4 = (void *)((ulong)&local_c0 | 1);
          if ((uVar8 & 1) != 0) {
            pvVar4 = local_b0;
          }
          memmove(pvVar9,pvVar4,sVar3);
        }
        *(undefined2 *)((long)pvVar9 + sVar3) = 0x202c;
        pvVar4 = (void *)((ulong)&local_e0 | 1);
        if ((local_e0 & 1) != 0) {
          pvVar4 = local_d0;
        }
        *(undefined1 *)((undefined2 *)((long)pvVar9 + sVar3) + 1) = 0;
                    /* try { // try from 0017eefc to 0017ef03 has its CatchHandler @ 0017f05c */
        puVar10 = (undefined8 *)
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  append((char *)&local_a0,(ulong)pvVar4);
        uVar11 = puVar10[1];
        pvVar9 = (void *)puVar10[2];
        uVar6 = *(undefined2 *)puVar10;
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = 0;
        local_88 = (undefined6)*(undefined8 *)((long)puVar10 + 2);
        uStack_82 = (undefined2)uVar11;
        uStack_80 = (undefined6)((ulong)uVar11 >> 0x10);
        if ((local_a0 & 1) != 0) {
          operator_delete(local_90);
        }
        if ((local_110 & 1) != 0) {
          operator_delete(local_100);
        }
        local_110 = CONCAT62(local_110._2_6_,uVar6);
        *(undefined8 *)((ulong)&local_110 | 2) = CONCAT26(uStack_82,local_88);
        *(ulong *)((long)((ulong)&local_110 | 2) + 6) = CONCAT62(uStack_80,uStack_82);
        local_100 = pvVar9;
        if ((local_e0 & 1) != 0) {
          operator_delete(local_d0);
        }
        if ((local_c0 & 1) != 0) {
          operator_delete(local_b0);
        }
        puVar12 = puVar12 + 3;
      } while (puVar12 != puVar7);
    }
    pvVar9 = local_100;
    sVar3 = sStack_108;
    uVar8 = local_110;
    sStack_108 = 0;
    local_100 = (void *)0x0;
    local_110 = 0;
    in_x8[1] = sVar3;
    *in_x8 = uVar8;
    in_x8[2] = (ulong)pvVar9;
    puVar7 = local_f8;
  }
  local_f8 = puVar7;
  if (puVar7 != (ulong *)0x0) {
    while (puVar12 = local_f0, puVar12 != puVar7) {
      local_f0 = puVar12 + -3;
      if ((*local_f0 & 1) != 0) {
        operator_delete((void *)puVar12[-1]);
      }
    }
    operator_delete(local_f8);
  }
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return;
  }
LAB_0017f0e0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017f0e4  margelo::nitro::HybridObjectRegistry::registerHybridObjectConstructor =====

/* margelo::nitro::HybridObjectRegistry::registerHybridObjectConstructor(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::function<std::__ndk1::shared_ptr<margelo::nitro::HybridObject> ()>&&) */

void margelo::nitro::HybridObjectRegistry::registerHybridObjectConstructor
               (basic_string *param_1,function *param_2)

{
  bool bVar1;
  size_t sVar2;
  size_t sVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  char *__s2;
  void *pvVar7;
  char *pcVar8;
  int iVar9;
  void *pvVar10;
  function *pfVar11;
  function *pfVar12;
  long *plVar13;
  function *pfVar14;
  ulong uVar15;
  long lVar16;
  function *pfVar17;
  char *pcVar18;
  ulong uVar19;
  long *plVar20;
  char *pcVar21;
  long *plVar22;
  function *pfVar23;
  function *pfVar24;
  ulong uVar25;
  undefined2 uVar26;
  undefined8 uVar27;
  ulong local_c0;
  ulong uStack_b8;
  char *local_b0;
  long local_a0 [4];
  function *local_80 [3];
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  if (((DAT_001bfd58 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_001bfd58), iVar9 != 0)) {
    DAT_001bfd50 = 1.0;
    DAT_001bfd38 = (function *)0x0;
    DAT_001bfd30 = (void *)0x0;
    DAT_001bfd48 = 0;
    DAT_001bfd40 = (long *)0x0;
    __cxa_atexit(FUN_0017e8ac,&DAT_001bfd30,&PTR_LOOP_001b6ad0);
    __cxa_guard_release(&DAT_001bfd58);
  }
  if (((byte)*param_1 & 1) == 0) {
    uStack_b8 = *(ulong *)(param_1 + 8);
    local_c0 = *(ulong *)param_1;
    local_b0 = *(char **)(param_1 + 0x10);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_c0,*(char **)(param_1 + 0x10),*(ulong *)(param_1 + 8));
  }
  pfVar12 = param_2 + 0x20;
  pfVar17 = *(function **)pfVar12;
  pfVar11 = (function *)local_a0;
  if (pfVar17 == (function *)0x0) {
    pfVar12 = (function *)local_80;
LAB_0017f17c:
    *(function **)pfVar12 = (function *)0x0;
  }
  else {
    local_80[0] = pfVar17;
    if (pfVar17 != param_2) goto LAB_0017f17c;
    local_80[0] = pfVar11;
                    /* try { // try from 0017f190 to 0017f197 has its CatchHandler @ 0017f798 */
    (**(code **)(*(long *)param_2 + 0x18))(param_2);
  }
  pcVar8 = local_b0;
  uVar5 = uStack_b8;
  uVar19 = local_c0;
  sVar2 = local_c0 >> 1 & 0x7f;
  __s2 = (char *)((ulong)&local_c0 | 1);
  if ((local_c0 & 1) != 0) {
    sVar2 = uStack_b8;
    __s2 = local_b0;
  }
  pfVar17 = (function *)FUN_0015c450(__s2,sVar2);
  pfVar12 = DAT_001bfd38;
  if (DAT_001bfd38 != (function *)0x0) {
    uVar27 = NEON_cnt(DAT_001bfd38,1);
    uVar26 = NEON_uaddlv(uVar27,1);
    uVar25 = CONCAT62((int6)((ulong)uVar27 >> 0x10),uVar26) & 0xffffffff;
    if (uVar25 < 2) {
      param_2 = (function *)((ulong)(DAT_001bfd38 + -1) & (ulong)pfVar17);
    }
    else {
      param_2 = pfVar17;
      if (DAT_001bfd38 <= pfVar17) {
        uVar15 = 0;
        if (DAT_001bfd38 != (function *)0x0) {
          uVar15 = (ulong)pfVar17 / (ulong)DAT_001bfd38;
        }
        param_2 = pfVar17 + -(uVar15 * (long)DAT_001bfd38);
      }
    }
    plVar13 = *(long **)((long)DAT_001bfd30 + (long)param_2 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      pfVar23 = DAT_001bfd38 + -1;
      do {
        pfVar14 = (function *)plVar13[1];
        if (pfVar14 == pfVar17) {
          bVar4 = *(byte *)(plVar13 + 2);
          uVar15 = (ulong)(bVar4 >> 1);
          sVar3 = uVar15;
          if ((bVar4 & 1) != 0) {
            sVar3 = plVar13[3];
          }
          if (sVar3 == sVar2) {
            if ((bVar4 & 1) == 0) {
              if (bVar4 < 2) goto LAB_0017f66c;
              pcVar18 = (char *)((long)plVar13 + 0x11);
              pcVar21 = __s2;
              while (*pcVar18 == *pcVar21) {
                uVar15 = uVar15 - 1;
                pcVar18 = pcVar18 + 1;
                pcVar21 = pcVar21 + 1;
                if (uVar15 == 0) goto LAB_0017f66c;
              }
            }
            else {
              iVar9 = memcmp((void *)plVar13[4],__s2,plVar13[3]);
              if (iVar9 == 0) goto LAB_0017f66c;
            }
          }
        }
        else {
          if (uVar25 < 2) {
            pfVar14 = (function *)((ulong)pfVar14 & (ulong)pfVar23);
          }
          else if (pfVar12 <= pfVar14) {
            uVar15 = 0;
            if (pfVar12 != (function *)0x0) {
              uVar15 = (ulong)pfVar14 / (ulong)pfVar12;
            }
            pfVar14 = pfVar14 + -(uVar15 * (long)pfVar12);
          }
          if (pfVar14 != param_2) break;
        }
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
  }
                    /* try { // try from 0017f314 to 0017f31b has its CatchHandler @ 0017f7b0 */
  plVar13 = (long *)operator_new(0x60);
  *plVar13 = 0;
  plVar13[1] = (long)pfVar17;
  if ((uVar19 & 1) == 0) {
    plVar13[3] = uStack_b8;
    plVar13[2] = local_c0;
    plVar13[4] = (long)local_b0;
  }
  else {
                    /* try { // try from 0017f34c to 0017f35b has its CatchHandler @ 0017f79c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (plVar13 + 2),pcVar8,uVar5);
  }
  if (local_80[0] == (function *)0x0) {
    plVar13[10] = 0;
  }
  else if (local_80[0] == pfVar11) {
    plVar13[10] = (long)(plVar13 + 6);
                    /* try { // try from 0017f39c to 0017f39f has its CatchHandler @ 0017f794 */
    (**(code **)(local_a0[0] + 0x18))();
  }
  else {
    plVar13[10] = (long)local_80[0];
    local_80[0] = (function *)0x0;
  }
  if ((pfVar12 == (function *)0x0) || (DAT_001bfd50 * (float)pfVar12 < (float)(DAT_001bfd48 + 1))) {
    if (pfVar12 < (function *)0x3) {
      uVar19 = 1;
    }
    else {
      uVar19 = (ulong)(((ulong)pfVar12 & (ulong)(pfVar12 + -1)) != 0);
    }
    pfVar23 = (function *)(uVar19 | (long)pfVar12 << 1);
    pfVar12 = (function *)(long)((float)(DAT_001bfd48 + 1) / DAT_001bfd50);
    if (pfVar23 <= pfVar12) {
      pfVar23 = pfVar12;
    }
    if (pfVar23 + -1 == (function *)0x0) {
      pfVar23 = (function *)0x2;
    }
    else if (((ulong)pfVar23 & (ulong)(pfVar23 + -1)) != 0) {
                    /* try { // try from 0017f424 to 0017f44b has its CatchHandler @ 0017f7a0 */
      pfVar23 = (function *)std::__ndk1::__next_prime((ulong)pfVar23);
    }
    pfVar14 = DAT_001bfd38;
    if (DAT_001bfd38 < pfVar23) {
LAB_0017f43c:
      if ((ulong)pfVar23 >> 0x3d != 0) {
        if (*(long *)(lVar6 + 0x28) == local_68) {
          FUN_0015d614();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0017f39c with catch @ 0017f794
                        */
          FUN_0015c8c8();
        }
        goto LAB_0017f7d8;
      }
      pvVar10 = operator_new((long)pfVar23 << 3);
      pvVar7 = DAT_001bfd30;
      bVar1 = DAT_001bfd30 != (void *)0x0;
      DAT_001bfd30 = pvVar10;
      if (bVar1) {
        operator_delete(pvVar7);
      }
      pfVar12 = (function *)0x0;
      DAT_001bfd38 = pfVar23;
      do {
        *(undefined8 *)((long)DAT_001bfd30 + (long)pfVar12 * 8) = 0;
        plVar20 = DAT_001bfd40;
        pfVar12 = pfVar12 + 1;
      } while (pfVar23 != pfVar12);
      pfVar12 = pfVar23;
      if (DAT_001bfd40 != (long *)0x0) {
        pfVar14 = (function *)DAT_001bfd40[1];
        uVar27 = NEON_cnt(pfVar23,1);
        uVar26 = NEON_uaddlv(uVar27,1);
        uVar19 = CONCAT62((int6)((ulong)uVar27 >> 0x10),uVar26) & 0xffffffff;
        if (uVar19 < 2) {
          pfVar14 = (function *)((ulong)pfVar14 & (ulong)(pfVar23 + -1));
        }
        else if (pfVar23 <= pfVar14) {
          uVar5 = 0;
          if (pfVar23 != (function *)0x0) {
            uVar5 = (ulong)pfVar14 / (ulong)pfVar23;
          }
          pfVar14 = pfVar14 + -(uVar5 * (long)pfVar23);
        }
        *(long ***)((long)DAT_001bfd30 + (long)pfVar14 * 8) = &DAT_001bfd40;
        plVar22 = (long *)*plVar20;
        if (plVar22 != (long *)0x0) {
          do {
            pfVar24 = (function *)plVar22[1];
            if (uVar19 < 2) {
              pfVar24 = (function *)((ulong)pfVar24 & (ulong)(pfVar23 + -1));
            }
            else if (pfVar23 <= pfVar24) {
              uVar5 = 0;
              if (pfVar23 != (function *)0x0) {
                uVar5 = (ulong)pfVar24 / (ulong)pfVar23;
              }
              pfVar24 = pfVar24 + -(uVar5 * (long)pfVar23);
            }
            if (pfVar24 != pfVar14) {
              if (*(long *)((long)DAT_001bfd30 + (long)pfVar24 * 8) == 0) {
                *(long **)((long)DAT_001bfd30 + (long)pfVar24 * 8) = plVar20;
                pfVar14 = pfVar24;
              }
              else {
                *plVar20 = *plVar22;
                *plVar22 = **(long **)((long)DAT_001bfd30 + (long)pfVar24 * 8);
                **(undefined8 **)((long)DAT_001bfd30 + (long)pfVar24 * 8) = plVar22;
                plVar22 = plVar20;
              }
            }
            plVar20 = plVar22;
            plVar22 = (long *)*plVar20;
          } while (plVar22 != (long *)0x0);
        }
      }
    }
    else {
      pfVar12 = DAT_001bfd38;
      if (pfVar23 < DAT_001bfd38) {
        pfVar12 = (function *)(long)((float)DAT_001bfd48 / DAT_001bfd50);
        if (DAT_001bfd38 < (function *)0x3) {
LAB_0017f6e0:
                    /* try { // try from 0017f6e0 to 0017f793 has its CatchHandler @ 0017f7a0 */
          pfVar12 = (function *)std::__ndk1::__next_prime((ulong)pfVar12);
        }
        else {
          uVar27 = NEON_cnt(DAT_001bfd38,1);
          uVar26 = NEON_uaddlv(uVar27,1);
          if (1 < (uint)CONCAT62((int6)((ulong)uVar27 >> 0x10),uVar26)) goto LAB_0017f6e0;
          if ((function *)0x1 < pfVar12) {
            pfVar12 = (function *)(1L << (-LZCOUNT(pfVar12 + -1) & 0x3fU));
          }
        }
        pvVar7 = DAT_001bfd30;
        if (pfVar23 <= pfVar12) {
          pfVar23 = pfVar12;
        }
        pfVar12 = DAT_001bfd38;
        if (pfVar23 < pfVar14) {
          if (pfVar23 != (function *)0x0) goto LAB_0017f43c;
          DAT_001bfd30 = (void *)0x0;
          if (pvVar7 != (void *)0x0) {
            operator_delete(pvVar7);
          }
          DAT_001bfd38 = (function *)0x0;
          pfVar12 = (function *)0x0;
        }
      }
    }
    if (((ulong)pfVar12 & (ulong)(pfVar12 + -1)) == 0) {
      param_2 = (function *)((ulong)(pfVar12 + -1) & (ulong)pfVar17);
    }
    else {
      param_2 = pfVar17;
      if (pfVar12 <= pfVar17) {
        uVar19 = 0;
        if (pfVar12 != (function *)0x0) {
          uVar19 = (ulong)pfVar17 / (ulong)pfVar12;
        }
        param_2 = pfVar17 + -(uVar19 * (long)pfVar12);
      }
    }
  }
  plVar20 = *(long **)((long)DAT_001bfd30 + (long)param_2 * 8);
  if (plVar20 == (long *)0x0) {
    *plVar13 = (long)DAT_001bfd40;
    DAT_001bfd40 = plVar13;
    *(long ***)((long)DAT_001bfd30 + (long)param_2 * 8) = &DAT_001bfd40;
    if (*plVar13 != 0) {
      pfVar17 = *(function **)(*plVar13 + 8);
      if (((ulong)pfVar12 & (ulong)(pfVar12 + -1)) == 0) {
        pfVar17 = (function *)((ulong)pfVar17 & (ulong)(pfVar12 + -1));
      }
      else if (pfVar12 <= pfVar17) {
        uVar19 = 0;
        if (pfVar12 != (function *)0x0) {
          uVar19 = (ulong)pfVar17 / (ulong)pfVar12;
        }
        pfVar17 = pfVar17 + -(uVar19 * (long)pfVar12);
      }
      plVar20 = (long *)((long)DAT_001bfd30 + (long)pfVar17 * 8);
      goto LAB_0017f658;
    }
  }
  else {
    *plVar13 = *plVar20;
LAB_0017f658:
    *plVar20 = (long)plVar13;
  }
  DAT_001bfd48 = DAT_001bfd48 + 1;
LAB_0017f66c:
  if (local_80[0] == pfVar11) {
    lVar16 = 4;
LAB_0017f690:
    (**(code **)(*(long *)pfVar11 + lVar16 * 8))();
  }
  else if (local_80[0] != (function *)0x0) {
    lVar16 = 5;
    pfVar11 = local_80[0];
    goto LAB_0017f690;
  }
  if ((local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
LAB_0017f7d8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017f7dc  FUN_0017f7dc =====

void FUN_0017f7dc(byte *param_1)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  pbVar3 = param_1 + 0x20;
  pbVar2 = *(byte **)(param_1 + 0x40);
  if (pbVar2 == pbVar3) {
    lVar5 = 4;
  }
  else {
    if (pbVar2 == (byte *)0x0) goto LAB_0017f82c;
    lVar5 = 5;
    pbVar3 = pbVar2;
  }
  (**(code **)(*(long *)pbVar3 + lVar5 * 8))();
LAB_0017f82c:
  if ((*param_1 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == lVar4) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(*(void **)(param_1 + 0x10));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017f87c  FUN_0017f87c =====

void FUN_0017f87c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  pvVar6 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar6 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar4) {
      return;
    }
    goto LAB_0017f930;
  }
  if (*(char *)(param_1 + 2) != '\0') {
    plVar2 = *(long **)((long)pvVar6 + 0x50);
    plVar3 = (long *)((long)pvVar6 + 0x30);
    if (plVar2 == plVar3) {
      lVar5 = 4;
LAB_0017f8f0:
      (**(code **)(*plVar3 + lVar5 * 8))();
    }
    else if (plVar2 != (long *)0x0) {
      lVar5 = 5;
      plVar3 = plVar2;
      goto LAB_0017f8f0;
    }
    if ((*(byte *)((long)pvVar6 + 0x10) & 1) != 0) {
      operator_delete(*(void **)((long)pvVar6 + 0x20));
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(pvVar6);
    return;
  }
LAB_0017f930:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017f934  margelo::nitro::HybridObjectRegistry::unregisterHybridObjectConstructor =====

/* margelo::nitro::HybridObjectRegistry::unregisterHybridObjectConstructor(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void margelo::nitro::HybridObjectRegistry::unregisterHybridObjectConstructor(basic_string *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined2 uVar14;
  undefined8 uVar15;
  
  lVar2 = tpidr_el0;
  lVar8 = *(long *)(lVar2 + 0x28);
  if (((DAT_001bfd58 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_001bfd58), iVar4 != 0)) {
    DAT_001bfd50 = 0x3f800000;
    DAT_001bfd38 = 0;
    DAT_001bfd30 = 0;
    DAT_001bfd48 = 0;
    DAT_001bfd40 = 0;
    __cxa_atexit(FUN_0017e8ac,&DAT_001bfd30,&PTR_LOOP_001b6ad0);
    __cxa_guard_release(&DAT_001bfd58);
  }
  plVar5 = (long *)FUN_0017fb88(param_1);
  uVar3 = DAT_001bfd38;
  if (plVar5 == (long *)0x0) {
    if (*(long *)(lVar2 + 0x28) == lVar8) {
      return;
    }
    goto LAB_0017fb84;
  }
  uVar9 = plVar5[1];
  uVar15 = NEON_cnt(DAT_001bfd38,1);
  uVar14 = NEON_uaddlv(uVar15,1);
  uVar10 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
  if (uVar10 < 2) {
    uVar9 = DAT_001bfd38 - 1 & uVar9;
  }
  else if (DAT_001bfd38 <= uVar9) {
    uVar13 = 0;
    if (DAT_001bfd38 != 0) {
      uVar13 = uVar9 / DAT_001bfd38;
    }
    uVar9 = uVar9 - uVar13 * DAT_001bfd38;
  }
  plVar7 = *(long **)(DAT_001bfd30 + uVar9 * 8);
  do {
    plVar12 = plVar7;
    plVar7 = (long *)*plVar12;
  } while ((long *)*plVar12 != plVar5);
  if (plVar12 == &DAT_001bfd40) {
LAB_0017fa28:
    if (*plVar5 != 0) {
      uVar13 = *(ulong *)(*plVar5 + 8);
      if (uVar10 < 2) {
        uVar13 = uVar13 & DAT_001bfd38 - 1;
      }
      else if (DAT_001bfd38 <= uVar13) {
        uVar1 = 0;
        if (DAT_001bfd38 != 0) {
          uVar1 = uVar13 / DAT_001bfd38;
        }
        uVar13 = uVar13 - uVar1 * DAT_001bfd38;
      }
      if (uVar13 == uVar9) goto LAB_0017fa64;
    }
    *(undefined8 *)(DAT_001bfd30 + uVar9 * 8) = 0;
  }
  else {
    uVar13 = plVar12[1];
    if (uVar10 < 2) {
      uVar13 = uVar13 & DAT_001bfd38 - 1;
    }
    else if (DAT_001bfd38 <= uVar13) {
      uVar1 = 0;
      if (DAT_001bfd38 != 0) {
        uVar1 = uVar13 / DAT_001bfd38;
      }
      uVar13 = uVar13 - uVar1 * DAT_001bfd38;
    }
    if (uVar13 != uVar9) goto LAB_0017fa28;
  }
LAB_0017fa64:
  lVar11 = *plVar5;
  if (lVar11 != 0) {
    uVar13 = *(ulong *)(lVar11 + 8);
    if (uVar10 < 2) {
      uVar13 = uVar13 & uVar3 - 1;
    }
    else if (uVar3 <= uVar13) {
      uVar10 = 0;
      if (uVar3 != 0) {
        uVar10 = uVar13 / uVar3;
      }
      uVar13 = uVar13 - uVar10 * uVar3;
    }
    if (uVar13 != uVar9) {
      *(long **)(DAT_001bfd30 + uVar13 * 8) = plVar12;
      lVar11 = *plVar5;
    }
  }
  plVar6 = (long *)plVar5[10];
  plVar7 = plVar5 + 6;
  *plVar12 = lVar11;
  *plVar5 = 0;
  DAT_001bfd48 = DAT_001bfd48 + -1;
  if (plVar6 == plVar7) {
    lVar11 = 4;
LAB_0017fae4:
    (**(code **)(*plVar7 + lVar11 * 8))();
  }
  else if (plVar6 != (long *)0x0) {
    lVar11 = 5;
    plVar7 = plVar6;
    goto LAB_0017fae4;
  }
  if ((*(byte *)(plVar5 + 2) & 1) != 0) {
    operator_delete((void *)plVar5[4]);
  }
  if (*(long *)(lVar2 + 0x28) == lVar8) {
    operator_delete(plVar5);
    return;
  }
LAB_0017fb84:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017fb88  FUN_0017fb88 =====

long * FUN_0017fb88(byte *param_1)

{
  size_t sVar1;
  size_t sVar2;
  byte *__s2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined2 uVar15;
  undefined8 uVar16;
  
  lVar5 = tpidr_el0;
  lVar9 = *(long *)(lVar5 + 0x28);
  sVar2 = *(size_t *)(param_1 + 8);
  __s2 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    __s2 = param_1 + 1;
    sVar2 = (ulong)(*param_1 >> 1);
  }
  uVar8 = FUN_0015c450(__s2,sVar2);
  uVar6 = DAT_001bfd38;
  if (DAT_001bfd38 != 0) {
    uVar16 = NEON_cnt(DAT_001bfd38,1);
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar12 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar12 < 2) {
      uVar13 = DAT_001bfd38 - 1 & uVar8;
    }
    else {
      uVar13 = uVar8;
      if (DAT_001bfd38 <= uVar8) {
        uVar13 = 0;
        if (DAT_001bfd38 != 0) {
          uVar13 = uVar8 / DAT_001bfd38;
        }
        uVar13 = uVar8 - uVar13 * DAT_001bfd38;
      }
    }
    plVar10 = *(long **)(DAT_001bfd30 + uVar13 * 8);
    if (plVar10 != (long *)0x0) {
      plVar10 = (long *)*plVar10;
      if (plVar10 != (long *)0x0) {
        uVar14 = DAT_001bfd38 - 1;
        do {
          uVar11 = plVar10[1];
          if (uVar11 == uVar8) {
            bVar3 = *(byte *)(plVar10 + 2);
            sVar1 = (ulong)(bVar3 >> 1);
            if ((bVar3 & 1) != 0) {
              sVar1 = plVar10[3];
            }
            if (sVar1 == sVar2) {
              if ((bVar3 & 1) == 0) {
                if (bVar3 < 2) break;
                uVar11 = 0;
                while (*(byte *)((long)plVar10 + uVar11 + 0x11) == __s2[uVar11]) {
                  uVar11 = uVar11 + 1;
                  if (bVar3 >> 1 == uVar11) goto LAB_0017fcf0;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar10[4],__s2,plVar10[3]);
                if (iVar7 == 0) break;
              }
            }
          }
          else {
            if (uVar12 < 2) {
              uVar11 = uVar11 & uVar14;
            }
            else if (uVar6 <= uVar11) {
              uVar4 = 0;
              if (uVar6 != 0) {
                uVar4 = uVar11 / uVar6;
              }
              uVar11 = uVar11 - uVar4 * uVar6;
            }
            if (uVar11 != uVar13) goto LAB_0017fcec;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      goto LAB_0017fcf0;
    }
  }
LAB_0017fcec:
  plVar10 = (long *)0x0;
LAB_0017fcf0:
  if (*(long *)(lVar5 + 0x28) == lVar9) {
    return plVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017fd28  margelo::nitro::HybridObjectRegistry::createHybridObject =====

/* WARNING: Type propagation algorithm not settling */
/* margelo::nitro::HybridObjectRegistry::createHybridObject(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
margelo::nitro::HybridObjectRegistry::createHybridObject
          (HybridObjectRegistry *this,basic_string *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  runtime_error *this_00;
  undefined8 uVar4;
  basic_string *extraout_x1;
  basic_string *extraout_x1_00;
  byte local_e0 [16];
  void *local_d0;
  byte local_c8 [16];
  void *local_b8;
  byte local_b0 [16];
  void *local_a0;
  byte local_98 [16];
  void *local_88;
  byte local_80 [16];
  void *local_70;
  basic_string local_68 [16];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_001bfd58 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&DAT_001bfd58), param_1 = extraout_x1, iVar2 != 0)) {
    DAT_001bfd50 = 0x3f800000;
    DAT_001bfd38 = 0;
    DAT_001bfd30 = 0;
    DAT_001bfd48 = 0;
    DAT_001bfd40 = 0;
    __cxa_atexit(FUN_0017e8ac,&DAT_001bfd30,&PTR_LOOP_001b6ad0);
    __cxa_guard_release(&DAT_001bfd58);
    param_1 = extraout_x1_00;
  }
  lVar3 = FUN_0017fb88(this,param_1);
  if (lVar3 == 0) {
    getAllRegisteredHybridObjectNamesToString();
                    /* try { // try from 0017fdac to 0017fdbf has its CatchHandler @ 0018000c */
    std::__ndk1::operator+("Cannot create an instance of HybridObject \"",(basic_string *)this);
                    /* try { // try from 0017fdc0 to 0017fdd3 has its CatchHandler @ 0017fff4 */
    FUN_0015dcfc(local_c8,local_e0,
                 "\" - It has not yet been registered in the Nitro Modules HybridObjectRegistry! Suggestions:\n- If you use Nitrogen, make sure your `nitro.json` contains `"
                );
                    /* try { // try from 0017fdd4 to 0017fde3 has its CatchHandler @ 0017ffd4 */
    FUN_0016955c(local_b0,local_c8,this);
                    /* try { // try from 0017fde4 to 0017fdf7 has its CatchHandler @ 0017ffb4 */
    FUN_0015dcfc(local_98,local_b0,
                 "` on this platform.\n- If you use Nitrogen, make sure your library (*Package.kt)/app (MainApplication.kt) calls `$$androidCxxLibName$$OnLoad.initializeNative()` somewhere on app-startup.\n- If you use Nitrogen, make sure your `cpp-adapter.cpp`/`OnLoad.cpp` calls `margelo::nitro::$$cxxNamespace$$::registerNatives()` inside `facebook::jni::initialize(...)`.\n- If you use Nitrogen, inspect the generated `$$androidCxxLibName$$OnLoad.cpp` file.\n- If you don\'t use Nitrogen, make sure you called `HybridObjectRegistry.registerHybridObject(...)`.- All registered HybridObjects: ["
                );
                    /* try { // try from 0017fdf8 to 0017fe07 has its CatchHandler @ 0017ff94 */
    FUN_0016955c(local_80,local_98,local_50);
                    /* try { // try from 0017fe08 to 0017fe1b has its CatchHandler @ 0017ff50 */
    FUN_0015dcfc(local_68,local_80,&DAT_00137c3e);
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    if ((local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
    if ((local_b0[0] & 1) != 0) {
      operator_delete(local_a0);
    }
    if ((local_c8[0] & 1) != 0) {
      operator_delete(local_b8);
    }
    if ((local_e0[0] & 1) != 0) {
      operator_delete(local_d0);
    }
    this_00 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0017fe58 to 0017fe5f has its CatchHandler @ 0017ff34 */
    std::runtime_error::runtime_error(this_00,local_68);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0017fe70 to 0017fe87 has its CatchHandler @ 0017ff2c */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_00,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
    }
  }
  else if (*(long **)(lVar3 + 0x50) == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      uVar4 = FUN_0016c8f4();
                    /* catch() { ... } // from try @ 0017fe70 with catch @ 0017ff2c */
      if (((byte)local_68[0] & 1) != 0) {
        operator_delete(local_58);
      }
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      if (*(long *)(lVar1 + 0x28) == local_38) {
        FUN_00157e74(uVar4);
      }
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Could not recover jumptable at 0x0017fda0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(lVar3 + 0x50) + 0x30))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018003c  FUN_0018003c =====

void FUN_0018003c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)param_1[2];
  while (puVar2 != (undefined8 *)0x0) {
    pvVar3 = (void *)*puVar2;
    if (puVar2[4] != 0) {
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    operator_delete(puVar2);
    puVar2 = (undefined8 *)pvVar3;
  }
  pvVar3 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar3 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar4) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(pvVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001800e4  margelo::nitro::Dispatcher::installRuntimeGlobalDispatcher =====

/* margelo::nitro::Dispatcher::installRuntimeGlobalDispatcher(facebook::jsi::Runtime&,
   std::__ndk1::shared_ptr<margelo::nitro::Dispatcher>) */

void margelo::nitro::Dispatcher::installRuntimeGlobalDispatcher(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  JSError *pJVar8;
  undefined4 local_a0 [2];
  undefined8 local_98;
  undefined1 auStack_90 [24];
  undefined8 local_78 [3];
  long *local_60;
  long *local_58;
  void *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_001803c0(&local_60,param_1);
  if (((byte)local_60._0_1_ & 1) != 0) {
    operator_delete(local_50);
  }
  local_60 = param_1;
  lVar5 = FUN_001805c8(param_1,&local_60);
  lVar7 = *param_2;
  lVar2 = param_2[1];
  if (lVar2 != 0) {
    FUN_0015c230(1,lVar2 + 0x10);
  }
  lVar6 = *(long *)(lVar5 + 0x20);
  *(long *)(lVar5 + 0x18) = lVar7;
  *(long *)(lVar5 + 0x20) = lVar2;
  if (lVar6 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*param_2 == 0) {
    FUN_001695dc(&local_60,PTR_typeinfo_name_001ba178,0);
    pJVar8 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00180294 to 001802a7 has its CatchHandler @ 00180388 */
    std::__ndk1::operator+("Cannot convert `nullptr` to NativeState<",(basic_string *)&local_60);
                    /* try { // try from 001802a8 to 001802bb has its CatchHandler @ 00180370 */
    FUN_0015dcfc(local_78,auStack_90,&DAT_001387ad);
                    /* try { // try from 001802c0 to 001802fb has its CatchHandler @ 0018033c */
    facebook::jsi::JSError::JSError(pJVar8,param_1,local_78);
    if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar8,PTR_typeinfo_001b9f78,PTR__JSError_001b9f68);
    }
  }
  else {
    (**(code **)(*param_1 + 0x130))(local_78,param_1);
    plVar1 = (long *)*param_2;
    plVar3 = (long *)param_2[1];
    if (plVar3 == (long *)0x0) {
      local_58 = (long *)0x0;
    }
    else {
      FUN_0015c230(1,plVar3 + 1);
      local_58 = plVar3;
      FUN_0015c230(1,plVar3 + 1);
    }
                    /* try { // try from 001801b8 to 001801c7 has its CatchHandler @ 0018030c */
    local_60 = plVar1;
    (**(code **)(*param_1 + 0x168))(param_1,local_78,&local_60);
    plVar1 = local_58;
    if ((local_58 != (long *)0x0) &&
       (lVar7 = FUN_0015bb40(0xffffffffffffffff,local_58 + 1), lVar7 == 0)) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if ((plVar3 != (long *)0x0) && (lVar7 = FUN_0015bb40(0xffffffffffffffff,plVar3 + 1), lVar7 == 0)
       ) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    local_a0[0] = 7;
    local_98 = local_78[0];
                    /* try { // try from 00180234 to 00180243 has its CatchHandler @ 001802fc */
    CommonGlobals::defineGlobal(param_1,0,local_a0);
    facebook::jsi::Value::~Value((Value *)local_a0);
    if (*(long *)(lVar4 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001803c0  FUN_001803c0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_001803c0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  void *pvVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte local_a8 [16];
  void *local_98;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  margelo::nitro::ThreadUtils::getThreadName();
                    /* try { // try from 001803f8 to 00180403 has its CatchHandler @ 001805b8 */
  (**(code **)(*param_2 + 0x38))(local_a8,param_2);
                    /* try { // try from 00180404 to 00180417 has its CatchHandler @ 00180598 */
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)local_a8,0x1377cb);
  local_80 = (void *)puVar3[2];
  uStack_88 = puVar3[1];
  local_90 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  pvVar2 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar2 = local_40;
  }
                    /* try { // try from 00180450 to 00180457 has its CatchHandler @ 00180578 */
  puVar3 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_90,(ulong)pvVar2);
  local_60 = (void *)puVar3[2];
  uStack_68 = puVar3[1];
  local_70 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
                    /* try { // try from 00180470 to 00180483 has its CatchHandler @ 0018051c */
  puVar4 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     ((char *)&local_70,0x13757d);
  uVar5 = puVar4[2];
  uVar7 = puVar4[1];
  uVar6 = *puVar4;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  param_1[1] = uVar7;
  *param_1 = uVar6;
  param_1[2] = uVar5;
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001805c8  FUN_001805c8 =====

long * FUN_001805c8(ulong param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  ulong unaff_x25;
  undefined2 uVar18;
  undefined8 uVar19;
  float fVar20;
  long *local_70;
  undefined *puStack_68;
  undefined1 local_60;
  long local_58;
  
  puVar3 = PTR__globalCache_001ba170;
  lVar2 = tpidr_el0;
  uVar8 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ param_1 >> 0x20) * -0x622015f714c7d297;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar9 = (param_1 >> 0x20 ^ uVar8 >> 0x2f ^ uVar8) * -0x622015f714c7d297;
  uVar8 = *(ulong *)(PTR__globalCache_001ba170 + 8);
  uVar9 = (uVar9 ^ uVar9 >> 0x2f) * -0x622015f714c7d297;
  if (uVar8 != 0) {
    uVar19 = NEON_cnt(uVar8,1);
    uVar18 = NEON_uaddlv(uVar19,1);
    uVar12 = CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) & 0xffffffff;
    if (uVar12 < 2) {
      unaff_x25 = uVar9 & uVar8 - 1;
    }
    else {
      unaff_x25 = uVar9;
      if (uVar8 <= uVar9) {
        uVar14 = 0;
        if (uVar8 != 0) {
          uVar14 = uVar9 / uVar8;
        }
        unaff_x25 = uVar9 - uVar14 * uVar8;
      }
    }
    puVar10 = *(undefined8 **)(*(long *)PTR__globalCache_001ba170 + unaff_x25 * 8);
    if ((puVar10 != (undefined8 *)0x0) && (plVar17 = (long *)*puVar10, plVar17 != (long *)0x0)) {
      do {
        uVar14 = plVar17[1];
        if (uVar14 == uVar9) {
          if (plVar17[2] == param_1) goto LAB_001809ac;
        }
        else {
          if (uVar12 < 2) {
            uVar14 = uVar14 & uVar8 - 1;
          }
          else if (uVar8 <= uVar14) {
            uVar7 = 0;
            if (uVar8 != 0) {
              uVar7 = uVar14 / uVar8;
            }
            uVar14 = uVar14 - uVar7 * uVar8;
          }
          if (uVar14 != unaff_x25) break;
        }
        plVar17 = (long *)*plVar17;
      } while (plVar17 != (long *)0x0);
    }
  }
  plVar17 = (long *)operator_new(0x28);
  puStack_68 = puVar3 + 0x10;
  lVar11 = *param_2;
  fVar20 = *(float *)(puVar3 + 0x20);
  lVar6 = *(long *)(puVar3 + 0x18);
  *plVar17 = 0;
  plVar17[1] = uVar9;
  plVar17[3] = 0;
  plVar17[4] = 0;
  plVar17[2] = lVar11;
  local_60 = 1;
  local_70 = plVar17;
  if ((uVar8 == 0) || (fVar20 * (float)uVar8 < (float)(lVar6 + 1))) {
    if (uVar8 < 3) {
      uVar12 = 1;
    }
    else {
      uVar12 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar12 = uVar12 | uVar8 << 1;
    uVar14 = (ulong)((float)(lVar6 + 1) / fVar20);
    if (uVar12 <= uVar14) {
      uVar12 = uVar14;
    }
    if (uVar12 - 1 == 0) {
      uVar12 = 2;
    }
    else if ((uVar12 & uVar12 - 1) != 0) {
                    /* try { // try from 00180778 to 00180a2b has its CatchHandler @ 00180a2c */
      uVar12 = std::__ndk1::__next_prime(uVar12);
      uVar8 = *(ulong *)(puVar3 + 8);
    }
    if (uVar8 < uVar12) {
LAB_00180790:
      if (uVar12 >> 0x3d != 0) {
        if (*(long *)(lVar2 + 0x28) == local_58) {
          uVar19 = FUN_0015d614();
                    /* catch() { ... } // from try @ 00180778 with catch @ 00180a2c */
          FUN_00180a54(&local_70);
          if (*(long *)(lVar2 + 0x28) == local_58) {
            FUN_00157e74(uVar19);
          }
        }
        goto LAB_00180a50;
      }
      pvVar4 = operator_new(uVar12 << 3);
      pvVar5 = *(void **)puVar3;
      *(void **)puVar3 = pvVar4;
      if (pvVar5 != (void *)0x0) {
        operator_delete(pvVar5);
      }
      uVar8 = 0;
      *(ulong *)(puVar3 + 8) = uVar12;
      do {
        *(undefined8 *)(*(long *)puVar3 + uVar8 * 8) = 0;
        uVar8 = uVar8 + 1;
      } while (uVar12 != uVar8);
      plVar13 = *(long **)(puVar3 + 0x10);
      uVar8 = uVar12;
      if (plVar13 != (long *)0x0) {
        uVar14 = plVar13[1];
        uVar19 = NEON_cnt(uVar12,1);
        uVar18 = NEON_uaddlv(uVar19,1);
        uVar7 = CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) & 0xffffffff;
        if (uVar7 < 2) {
          uVar14 = uVar14 & uVar12 - 1;
        }
        else if (uVar12 <= uVar14) {
          uVar16 = 0;
          if (uVar12 != 0) {
            uVar16 = uVar14 / uVar12;
          }
          uVar14 = uVar14 - uVar16 * uVar12;
        }
        *(undefined **)(*(long *)puVar3 + uVar14 * 8) = puVar3 + 0x10;
        plVar15 = (long *)*plVar13;
        if (plVar15 != (long *)0x0) {
          do {
            uVar16 = plVar15[1];
            if (uVar7 < 2) {
              uVar16 = uVar16 & uVar12 - 1;
            }
            else if (uVar12 <= uVar16) {
              uVar1 = 0;
              if (uVar12 != 0) {
                uVar1 = uVar16 / uVar12;
              }
              uVar16 = uVar16 - uVar1 * uVar12;
            }
            if (uVar16 != uVar14) {
              if (*(long *)(*(long *)puVar3 + uVar16 * 8) == 0) {
                *(long **)(*(long *)puVar3 + uVar16 * 8) = plVar13;
                uVar14 = uVar16;
              }
              else {
                *plVar13 = *plVar15;
                *plVar15 = **(long **)(*(long *)puVar3 + uVar16 * 8);
                **(undefined8 **)(*(long *)puVar3 + uVar16 * 8) = plVar15;
                plVar15 = plVar13;
              }
            }
            plVar13 = plVar15;
            plVar15 = (long *)*plVar13;
          } while (plVar15 != (long *)0x0);
        }
      }
    }
    else if (uVar12 < uVar8) {
      uVar14 = (ulong)((float)*(ulong *)(puVar3 + 0x18) / *(float *)(puVar3 + 0x20));
      if (uVar8 < 3) {
LAB_001809dc:
        uVar14 = std::__ndk1::__next_prime(uVar14);
      }
      else {
        uVar19 = NEON_cnt(uVar8,1);
        uVar18 = NEON_uaddlv(uVar19,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18)) goto LAB_001809dc;
        if (1 < uVar14) {
          uVar14 = 1L << (-LZCOUNT(uVar14 - 1) & 0x3fU);
        }
      }
      if (uVar12 <= uVar14) {
        uVar12 = uVar14;
      }
      if (uVar12 < uVar8) {
        if (uVar12 != 0) goto LAB_00180790;
        pvVar4 = *(void **)puVar3;
        *(undefined8 *)puVar3 = 0;
        if (pvVar4 != (void *)0x0) {
          operator_delete(pvVar4);
        }
        *(undefined8 *)(puVar3 + 8) = 0;
        uVar8 = 0;
      }
      else {
        uVar8 = *(ulong *)(puVar3 + 8);
      }
    }
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x25 = uVar8 - 1 & uVar9;
    }
    else {
      unaff_x25 = uVar9;
      if (uVar8 <= uVar9) {
        uVar12 = 0;
        if (uVar8 != 0) {
          uVar12 = uVar9 / uVar8;
        }
        unaff_x25 = uVar9 - uVar12 * uVar8;
      }
    }
  }
  lVar6 = *(long *)puVar3;
  plVar13 = *(long **)(lVar6 + unaff_x25 * 8);
  if (plVar13 == (long *)0x0) {
    plVar13 = (long *)(puVar3 + 0x10);
    lVar11 = *plVar13;
    *plVar13 = (long)plVar17;
    *plVar17 = lVar11;
    *(long **)(lVar6 + unaff_x25 * 8) = plVar13;
    if (*plVar17 != 0) {
      uVar9 = *(ulong *)(*plVar17 + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar9 = uVar9 & uVar8 - 1;
      }
      else if (uVar8 <= uVar9) {
        uVar12 = 0;
        if (uVar8 != 0) {
          uVar12 = uVar9 / uVar8;
        }
        uVar9 = uVar9 - uVar12 * uVar8;
      }
      plVar13 = (long *)(*(long *)puVar3 + uVar9 * 8);
      goto LAB_0018099c;
    }
  }
  else {
    *plVar17 = *plVar13;
LAB_0018099c:
    *plVar13 = (long)plVar17;
  }
  *(long *)(puVar3 + 0x18) = *(long *)(puVar3 + 0x18) + 1;
LAB_001809ac:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return plVar17;
  }
LAB_00180a50:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00180a54  FUN_00180a54 =====

void FUN_00180a54(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  pvVar3 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar3 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else {
    if ((*(char *)(param_1 + 2) != '\0') && (*(long *)((long)pvVar3 + 0x20) != 0)) {
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      operator_delete(pvVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00180ad8  margelo::nitro::Dispatcher::getRuntimeGlobalDispatcher =====

/* margelo::nitro::Dispatcher::getRuntimeGlobalDispatcher(facebook::jsi::Runtime&) */

void __thiscall
margelo::nitro::Dispatcher::getRuntimeGlobalDispatcher(Dispatcher *this,Runtime *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  JSError *pJVar8;
  Runtime *extraout_x1;
  Runtime *pRVar9;
  long *in_x8;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  undefined2 uVar17;
  undefined8 uVar18;
  IRuntime aIStack_e8 [16];
  long *local_d8;
  long *plStack_d0;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined8 *local_80 [3];
  Dispatcher *local_68;
  long *plStack_60;
  void *local_58;
  undefined8 *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar11 = *(ulong *)(PTR__globalCache_001ba170 + 8);
  if (uVar11 != 0) {
    uVar18 = NEON_cnt(uVar11,1);
    uVar17 = NEON_uaddlv(uVar18,1);
    uVar10 = (((((ulong)this & 0xffffffff) >> 3 & 0x3ffffff) << 6 | 8) ^ (ulong)this >> 0x20) *
             -0x622015f714c7d297;
    uVar10 = ((ulong)this >> 0x20 ^ uVar10 >> 0x2f ^ uVar10) * -0x622015f714c7d297;
    uVar10 = (uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297;
    uVar12 = CONCAT62((int6)((ulong)uVar18 >> 0x10),uVar17) & 0xffffffff;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & uVar10;
    }
    else {
      uVar13 = uVar10;
      if (uVar11 <= uVar10) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = uVar10 / uVar11;
        }
        uVar13 = uVar10 - uVar13 * uVar11;
      }
    }
    plVar14 = *(long **)(*(long *)PTR__globalCache_001ba170 + uVar13 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      do {
        uVar15 = plVar14[1];
        if (uVar15 == uVar10) {
          if ((Dispatcher *)plVar14[2] == this) {
            if (plVar14[4] != 0) {
              lVar5 = plVar14[3];
              FUN_0015c230(1,plVar14[4] + 0x10);
              *in_x8 = 0;
              plVar14 = (long *)std::__ndk1::__shared_weak_count::lock();
              in_x8[1] = (long)plVar14;
              if (plVar14 != (long *)0x0) {
                *in_x8 = lVar5;
                if (lVar5 != 0) {
                  if (*(long *)(lVar3 + 0x28) == local_48) {
                    std::__ndk1::__shared_weak_count::__release_weak();
                    return;
                  }
                  goto LAB_001810a4;
                }
                lVar5 = FUN_0015bb40(0xffffffffffffffff,plVar14 + 1);
                if (lVar5 == 0) {
                  (**(code **)(*plVar14 + 0x10))(plVar14);
                  std::__ndk1::__shared_weak_count::__release_weak();
                }
              }
              std::__ndk1::__shared_weak_count::__release_weak();
              uVar11 = ThreadUtils::isUIThread();
              if ((uVar11 & 1) == 0) goto LAB_00180d04;
              goto LAB_00180c60;
            }
            *in_x8 = 0;
            in_x8[1] = 0;
            break;
          }
        }
        else {
          if (uVar12 < 2) {
            uVar15 = uVar15 & uVar11 - 1;
          }
          else if (uVar11 <= uVar15) {
            uVar2 = 0;
            if (uVar11 != 0) {
              uVar2 = uVar15 / uVar11;
            }
            uVar15 = uVar15 - uVar2 * uVar11;
          }
          if (uVar15 != uVar13) break;
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
  }
  uVar11 = ThreadUtils::isUIThread();
  if ((uVar11 & 1) != 0) {
LAB_00180c60:
    plVar14 = (long *)operator_new(0x20);
    plVar14[2] = 0;
    puVar4 = PTR_vtable_001ba9c0;
    *plVar14 = (long)&PTR_FUN_001b99e0;
    plVar16 = plVar14 + 1;
    *plVar16 = 0;
    local_d8 = plVar14 + 3;
    *local_d8 = (long)(puVar4 + 0x10);
    plStack_d0 = plVar14;
    FUN_0015c230(1,plVar16);
                    /* try { // try from 00180ca8 to 00180cb3 has its CatchHandler @ 00181020 */
    installRuntimeGlobalDispatcher(this,&local_d8);
    lVar5 = FUN_0015bb40(0xffffffffffffffff,plVar16);
    if (lVar5 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    lVar5 = FUN_0015bb40(0xffffffffffffffff,plVar16);
    if (lVar5 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
LAB_00180d04:
  FUN_001803c0(&local_68,this);
  pRVar9 = extraout_x1;
  if (((ulong)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  getRuntimeGlobalDispatcherHolder(this,pRVar9);
                    /* try { // try from 00180d2c to 00180d3b has its CatchHandler @ 00181080 */
  facebook::jsi::Value::asObject(aIStack_e8);
                    /* try { // try from 00180d44 to 00180d53 has its CatchHandler @ 00181064 */
  (**(code **)(*(long *)this + 0x160))(&local_68,this,&local_50);
  if ((local_68 == (Dispatcher *)0x0) ||
     (lVar5 = __dynamic_cast(local_68,PTR_typeinfo_001b9f70,PTR_typeinfo_001ba180,0), lVar5 == 0)) {
    *in_x8 = 0;
    in_x8[1] = 0;
                    /* try { // try from 00180e74 to 00180e83 has its CatchHandler @ 0018104c */
    facebook::jsi::Value::toString(aIStack_e8);
                    /* try { // try from 00180e8c to 00180e9b has its CatchHandler @ 00181000 */
    (**(code **)(*(long *)this + 0x120))(&local_68,this,local_80);
    if (local_80[0] != (undefined8 *)0x0) {
      (**(code **)*local_80[0])();
    }
                    /* try { // try from 00180eb0 to 00180ec3 has its CatchHandler @ 00180fe8 */
    FUN_001695dc(local_80,PTR_typeinfo_name_001ba178,0);
    pJVar8 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00180ed0 to 00180ee3 has its CatchHandler @ 00180fc8 */
    std::__ndk1::operator+
              ("Downcasting failed - It has a different NativeState<T>!\n- Did you accidentally pass a different type?\n- Is react-native-nitro-modules linked multiple times? Ensure you don\'t have any duplicate symbols for `"
               ,(basic_string *)local_80);
                    /* try { // try from 00180ee4 to 00180ef7 has its CatchHandler @ 00180fb0 */
    FUN_0015dcfc(auStack_b0,auStack_c8,"` in your app\'s binary.");
                    /* try { // try from 00180ef8 to 00180f07 has its CatchHandler @ 00180f80 */
    FUN_001812dc(auStack_98,&local_68,auStack_b0);
                    /* try { // try from 00180f0c to 00180f47 has its CatchHandler @ 00180f48 */
    facebook::jsi::JSError::JSError(pJVar8,this,auStack_98);
    if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar8,PTR_typeinfo_001b9f78,PTR__JSError_001b9f68);
    }
  }
  else {
    *in_x8 = lVar5;
    in_x8[1] = (long)plStack_60;
    if (plStack_60 != (long *)0x0) {
      FUN_0015c230(1,plStack_60 + 1);
      lVar5 = FUN_0015bb40(0xffffffffffffffff,plStack_60 + 1);
      if (lVar5 == 0) {
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
    if (local_50 != (undefined8 *)0x0) {
      (**(code **)*local_50)();
    }
                    /* try { // try from 00180dcc to 00180dd7 has its CatchHandler @ 00181038 */
    local_68 = this;
    lVar6 = FUN_001805c8(this,&local_68);
    lVar5 = *in_x8;
    lVar1 = in_x8[1];
    if (lVar1 != 0) {
      FUN_0015c230(1,lVar1 + 0x10);
    }
    lVar7 = *(long *)(lVar6 + 0x20);
    *(long *)(lVar6 + 0x18) = lVar5;
    *(long *)(lVar6 + 0x20) = lVar1;
    if (lVar7 != 0) {
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    facebook::jsi::Value::~Value((Value *)aIStack_e8);
    if (*(long *)(lVar3 + 0x28) == local_48) {
      return;
    }
  }
LAB_001810a4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001810a8  margelo::nitro::Dispatcher::getRuntimeGlobalDispatcherHolder =====

/* margelo::nitro::Dispatcher::getRuntimeGlobalDispatcherHolder(facebook::jsi::Runtime&) */

void __thiscall
margelo::nitro::Dispatcher::getRuntimeGlobalDispatcherHolder(Dispatcher *this,Runtime *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  runtime_error *this_00;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined8 *local_60 [3];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = CommonGlobals::getKnownGlobalPropertyName(this,0);
  (**(code **)(*(long *)this + 0x30))(local_60,this);
                    /* try { // try from 001810fc to 0018110b has its CatchHandler @ 00181214 */
  uVar3 = (**(code **)(*(long *)this + 0x198))(this,local_60,uVar2);
  if (local_60[0] != (undefined8 *)0x0) {
    (**(code **)*local_60[0])();
  }
  if ((uVar3 & 1) == 0) {
    this_00 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001811a0 to 001811ab has its CatchHandler @ 001812b4 */
    FUN_001803c0(auStack_90,this);
                    /* try { // try from 001811ac to 001811bf has its CatchHandler @ 0018129c */
    FUN_0016b3c4(auStack_78,"The `jsi::Runtime` \"",auStack_90);
                    /* try { // try from 001811c0 to 001811d3 has its CatchHandler @ 0018126c */
    FUN_0015dcfc(local_60,auStack_78,
                 "\" does not support Callbacks or Promises because it does not have a `Dispatcher` installed!\nTo use Callbacks and Promises follow these steps;\n1. Subclass `Dispatcher` with your implementation of `runAsync`/`runSync` for your Thread.\n2. Call `Dispatcher::installRuntimeGlobalDispatcher(...)` with your `Runtime` and your `Dispatcher`."
                );
                    /* try { // try from 001811d8 to 0018120f has its CatchHandler @ 00181234 */
    std::runtime_error::runtime_error(this_00,(basic_string *)local_60);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_00,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
    }
  }
  else {
    (**(code **)(*(long *)this + 0x30))(local_60,this);
                    /* try { // try from 00181144 to 00181157 has its CatchHandler @ 00181210 */
    (**(code **)(*(long *)this + 0x180))(this,local_60,uVar2);
    if (local_60[0] != (undefined8 *)0x0) {
      (**(code **)*local_60[0])();
    }
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001812dc  FUN_001812dc =====

/* WARNING: Type propagation algorithm not settling */

void FUN_001812dc(undefined8 *param_1,byte *param_2,byte *param_3)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  char *__dest;
  byte bVar3;
  long lVar4;
  char *pcVar5;
  void *pvVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  byte *pbVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong local_e8;
  ulong local_e0;
  undefined8 local_d8;
  ulong local_d0;
  ulong uStack_c8;
  void *local_c0;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  FUN_001695dc(local_70,PTR_typeinfo_name_001ba178,0);
  bVar3 = *param_2;
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_2 + 8);
  }
  uVar1 = __n + 0x10;
  if (uVar1 < 0xfffffffffffffff0) {
    if (uVar1 < 0x17) {
      local_e0 = 0;
      uVar9 = ((uint)uVar1 & 0xff) << 1;
      local_d8 = (char *)0x0;
      local_e8 = (ulong)(byte)uVar9;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 00181370 to 00181377 has its CatchHandler @ 0018161c */
      local_d8 = (char *)operator_new(uVar2);
      local_e8 = uVar2 | 1;
      uVar9 = (uint)local_e8 & 0xff;
      local_e0 = uVar1;
    }
    uVar11 = s_Cannot_convert___0013810c._0_8_;
    __dest = (char *)((long)&local_d8 + 1);
    pcVar5 = (char *)((ulong)&local_e8 | 1);
    if ((uVar9 & 1) != 0) {
      __dest = local_d8 + 0x10;
      pcVar5 = local_d8;
    }
    *(undefined8 *)(pcVar5 + 8) = s_Cannot_convert___0013810c._8_8_;
    *(undefined8 *)pcVar5 = uVar11;
    if (__n != 0) {
      pbVar10 = *(byte **)(param_2 + 0x10);
      if ((bVar3 & 1) == 0) {
        pbVar10 = param_2 + 1;
      }
      memmove(__dest,pbVar10,__n);
    }
    __dest[__n] = '\0';
                    /* try { // try from 001813d4 to 001813e7 has its CatchHandler @ 001815fc */
    puVar7 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_e8,0x13856c);
    local_c0 = (void *)puVar7[2];
    uStack_c8 = puVar7[1];
    local_d0 = *puVar7;
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    pvVar6 = (void *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      pvVar6 = local_60;
    }
                    /* try { // try from 00181420 to 00181427 has its CatchHandler @ 001815dc */
    puVar7 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_d0,(ulong)pvVar6);
    local_a0 = (void *)puVar7[2];
    uStack_a8 = puVar7[1];
    local_b0 = *puVar7;
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
                    /* try { // try from 00181440 to 00181453 has its CatchHandler @ 001815bc */
    puVar7 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_b0,0x137982);
    local_80 = (void *)puVar7[2];
    uStack_88 = puVar7[1];
    local_90 = *puVar7;
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    pbVar10 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pbVar10 = param_3 + 1;
    }
                    /* try { // try from 00181484 to 0018148b has its CatchHandler @ 00181558 */
    puVar8 = (undefined8 *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       ((char *)&local_90,(ulong)pbVar10);
    uVar11 = puVar8[2];
    uVar13 = puVar8[1];
    uVar12 = *puVar8;
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    param_1[1] = uVar13;
    *param_1 = uVar12;
    param_1[2] = uVar11;
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    if ((local_d0 & 1) != 0) {
      operator_delete(local_c0);
    }
    if ((local_e8 & 1) != 0) {
      operator_delete(local_d8);
    }
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    if (*(long *)(lVar4 + 0x28) == local_58) {
      return;
    }
  }
  else if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* try { // try from 00181554 to 00181557 has its CatchHandler @ 0018161c */
    uVar11 = FUN_0015d7fc();
                    /* catch() { ... } // from try @ 00181484 with catch @ 00181558 */
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    if ((local_d0 & 1) != 0) {
      operator_delete(local_c0);
    }
    if ((local_e8 & 1) != 0) {
      operator_delete(local_d8);
    }
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    if (*(long *)(lVar4 + 0x28) == local_58) {
      FUN_00157e74(uVar11);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018162c  margelo::nitro::ThreadPool::ThreadPool =====

/* margelo::nitro::ThreadPool::ThreadPool(char const*, unsigned long, unsigned long) */

void __thiscall
margelo::nitro::ThreadPool::ThreadPool(ThreadPool *this,char *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  this[0xa0] = (ThreadPool)0x1;
  *(undefined8 *)(this + 0xa8) = 0;
  *(ulong *)(this + 0xb0) = param_3;
  *(char **)(this + 0xb8) = param_1;
  if (param_2 != 0) {
    do {
                    /* try { // try from 00181680 to 00181687 has its CatchHandler @ 001816b4 */
      addThread(this);
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001816f4  margelo::nitro::ThreadPool::addThread =====

/* margelo::nitro::ThreadPool::addThread() */

void __thiscall margelo::nitro::ThreadPool::addThread(ThreadPool *this)

{
  thread *ptVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  char *pcVar5;
  size_t __n;
  undefined8 *puVar6;
  byte *pbVar7;
  undefined8 uVar8;
  ThreadPool *pTVar9;
  thread *ptVar10;
  ulong uVar11;
  thread *ptVar12;
  ulong uVar13;
  thread *ptVar14;
  long lVar15;
  thread *this_00;
  char *__s;
  ulong uVar16;
  thread *ptVar17;
  byte unaff_w23;
  void *pvVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ThreadPool *local_c8;
  undefined8 local_c0;
  void *local_b8;
  char *local_b0;
  byte local_a8 [16];
  void *local_98;
  void *local_90;
  thread *ptStack_88;
  thread *local_80;
  void *local_78;
  ThreadPool *local_70;
  undefined4 local_60;
  undefined3 uStack_5c;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  std::__ndk1::mutex::lock();
  if (((byte)this[0xa0] & 1) != 0) {
    pcVar5 = (char *)FUN_0015bb40(1,this + 0xa8);
    __s = *(char **)(this + 0xb8);
    __n = strlen(__s);
    if (0xffffffffffffffef < __n) {
      if (*(long *)(lVar4 + 0x28) != local_58) goto LAB_00181bb0;
                    /* try { // try from 00181ab0 to 00181ab3 has its CatchHandler @ 00181b8c */
      FUN_0015d7fc();
LAB_00181ab4:
      if (*(long *)(lVar4 + 0x28) != local_58) goto LAB_00181bb0;
                    /* try { // try from 00181ac4 to 00181adb has its CatchHandler @ 00181b68 */
      FUN_00181f54();
LAB_00181ac8:
      if (*(long *)(lVar4 + 0x28) == local_58) {
        uVar8 = FUN_0015d614();
                    /* catch() { ... } // from try @ 00181944 with catch @ 00181adc */
        FUN_00181f8c(&local_90);
        if ((local_c0 & 1) != 0) {
          operator_delete(local_b0);
        }
        if ((unaff_w23 & 1) != 0) {
          operator_delete(pcVar5);
        }
        std::__ndk1::mutex::unlock();
        if (*(long *)(lVar4 + 0x28) == local_58) {
          FUN_00157e74(uVar8);
        }
      }
      goto LAB_00181bb0;
    }
    if (__n < 0x17) {
      pvVar18 = (void *)((ulong)&local_c8 | 1);
      local_c8 = (ThreadPool *)CONCAT71(local_c8._1_7_,(char)((int)__n << 1));
      if (__n != 0) goto LAB_0018179c;
    }
    else {
      uVar16 = (__n | 0xf) + 1;
                    /* try { // try from 00181784 to 0018178b has its CatchHandler @ 00181b8c */
      pvVar18 = operator_new(uVar16);
      local_c8 = (ThreadPool *)(uVar16 | 1);
      local_c0 = __n;
      local_b8 = pvVar18;
LAB_0018179c:
      memmove(pvVar18,__s,__n);
    }
    *(undefined1 *)((long)pvVar18 + __n) = 0;
                    /* try { // try from 001817b0 to 001817c3 has its CatchHandler @ 00181b54 */
    puVar6 = (undefined8 *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       ((char *)&local_c8,0x1381f9);
    local_80 = (thread *)puVar6[2];
    ptStack_88 = (thread *)puVar6[1];
    local_90 = (void *)*puVar6;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
                    /* try { // try from 001817dc to 001817eb has its CatchHandler @ 00181b34 */
    std::__ndk1::to_string((ulong)(pcVar5 + 1));
    pvVar18 = (void *)((ulong)local_a8 | 1);
    if ((local_a8[0] & 1) != 0) {
      pvVar18 = local_98;
    }
                    /* try { // try from 00181808 to 0018180f has its CatchHandler @ 00181b00 */
    pbVar7 = (byte *)std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::append((char *)&local_90,(ulong)pvVar18);
    unaff_w23 = *pbVar7;
    pvVar18 = *(void **)(pbVar7 + 8);
    pcVar5 = *(char **)(pbVar7 + 0x10);
    pbVar7[8] = 0;
    pbVar7[9] = 0;
    pbVar7[10] = 0;
    pbVar7[0xb] = 0;
    pbVar7[0xc] = 0;
    pbVar7[0xd] = 0;
    pbVar7[0xe] = 0;
    pbVar7[0xf] = 0;
    pbVar7[0x10] = 0;
    pbVar7[0x11] = 0;
    pbVar7[0x12] = 0;
    pbVar7[0x13] = 0;
    pbVar7[0x14] = 0;
    pbVar7[0x15] = 0;
    pbVar7[0x16] = 0;
    pbVar7[0x17] = 0;
    uVar3 = *(undefined4 *)(pbVar7 + 1);
    uVar2 = *(undefined4 *)(pbVar7 + 4);
    pbVar7[0] = 0;
    pbVar7[1] = 0;
    pbVar7[2] = 0;
    pbVar7[3] = 0;
    pbVar7[4] = 0;
    pbVar7[5] = 0;
    pbVar7[6] = 0;
    pbVar7[7] = 0;
    local_60._0_3_ = (undefined3)uVar3;
    local_60._3_1_ = (undefined1)uVar2;
    uStack_5c = (undefined3)((uint)uVar2 >> 8);
    if ((local_a8[0] & 1) == 0) {
      if (((ulong)local_90 & 1) == 0) goto LAB_00181840;
LAB_0018187c:
      operator_delete(local_80);
      if (((ulong)local_c8 & 1) != 0) goto LAB_0018188c;
LAB_00181848:
      if ((unaff_w23 & 1) == 0) goto LAB_00181850;
LAB_0018189c:
                    /* try { // try from 0018189c to 001818af has its CatchHandler @ 00181af8 */
      local_c8 = this;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_c0,pcVar5,(ulong)pvVar18);
    }
    else {
      operator_delete(local_98);
      if (((ulong)local_90 & 1) != 0) goto LAB_0018187c;
LAB_00181840:
      if (((ulong)local_c8 & 1) == 0) goto LAB_00181848;
LAB_0018188c:
      operator_delete(local_b8);
      if ((unaff_w23 & 1) != 0) goto LAB_0018189c;
LAB_00181850:
      local_c0._0_5_ = CONCAT41(local_60,unaff_w23);
      local_c0 = CONCAT44(CONCAT31(uStack_5c,local_60._3_1_),(undefined4)local_c0);
      local_c8 = this;
      local_b8 = pvVar18;
      local_b0 = pcVar5;
    }
    pTVar9 = this + 0x10;
    uVar16 = *(ulong *)(this + 8);
    if (uVar16 < *(ulong *)pTVar9) {
                    /* try { // try from 001818c4 to 001818cf has its CatchHandler @ 00181aec */
      FUN_00181e48(uVar16,&local_c8);
      ptVar17 = (thread *)(uVar16 + 8);
      *(thread **)(this + 8) = ptVar17;
    }
    else {
      lVar15 = (long)(uVar16 - *(long *)this) >> 3;
      uVar16 = lVar15 + 1;
      if (uVar16 >> 0x3d != 0) goto LAB_00181ab4;
      uVar11 = *(ulong *)pTVar9 - *(long *)this;
      uVar13 = (long)uVar11 >> 2;
      if (uVar13 <= uVar16) {
        uVar13 = uVar16;
      }
      if (0x7ffffffffffffff7 < uVar11) {
        uVar13 = 0x1fffffffffffffff;
      }
      local_70 = pTVar9;
      if (uVar13 == 0) {
        local_90 = (void *)0x0;
      }
      else {
        if (uVar13 >> 0x3d != 0) goto LAB_00181ac8;
                    /* try { // try from 00181928 to 0018192b has its CatchHandler @ 00181b68 */
        local_90 = operator_new(uVar13 << 3);
      }
      ptStack_88 = (thread *)((long)local_90 + lVar15 * 8);
      local_78 = (void *)((long)local_90 + uVar13 * 8);
                    /* try { // try from 00181944 to 0018194f has its CatchHandler @ 00181adc */
      local_80 = ptStack_88;
      FUN_00181e48(ptStack_88,&local_c8);
      ptVar1 = *(thread **)this;
      this_00 = *(thread **)(this + 8);
      ptVar17 = local_80 + 8;
      if ((long)this_00 - (long)ptVar1 == 0) {
        *(thread **)this = ptStack_88;
        *(thread **)(this + 8) = ptVar17;
        *(void **)(this + 0x10) = local_78;
        ptVar1 = this_00;
      }
      else {
        uVar16 = ((long)this_00 - (long)ptVar1) - 8;
        ptVar10 = ptStack_88;
        ptVar12 = this_00;
        if ((uVar16 < 0x58) ||
           ((ptStack_88 + ((ulong)(ptVar1 + (7 - (long)this_00)) & 0xfffffffffffffff8) < this_00 &&
            (this_00 + ((ulong)(ptVar1 + (7 - (long)this_00)) & 0xfffffffffffffff8) < ptStack_88))))
        {
LAB_00181a00:
          do {
            ptVar12 = ptVar12 + -8;
            ptVar10 = ptVar10 + -8;
            *(undefined8 *)ptVar10 = *(undefined8 *)ptVar12;
            *(undefined8 *)ptVar12 = 0;
          } while (ptVar12 != ptVar1);
        }
        else {
          ptVar12 = ptStack_88 + -0x10;
          uVar16 = (uVar16 >> 3) + 1;
          uVar11 = uVar16 & 0x3ffffffffffffffc;
          uVar13 = uVar11;
          ptVar10 = this_00;
          do {
            ptVar14 = ptVar10 + -0x20;
            uVar20 = *(undefined8 *)ptVar14;
            uVar19 = *(undefined8 *)(ptVar10 + -8);
            uVar8 = *(undefined8 *)(ptVar10 + -0x10);
            uVar13 = uVar13 - 4;
            *(undefined8 *)(ptVar12 + -8) = *(undefined8 *)(ptVar10 + -0x18);
            *(undefined8 *)(ptVar12 + -0x10) = uVar20;
            *(undefined8 *)(ptVar12 + 8) = uVar19;
            *(undefined8 *)ptVar12 = uVar8;
            ptVar12 = ptVar12 + -0x20;
            *(undefined8 *)(ptVar10 + -0x18) = 0;
            *(undefined8 *)ptVar14 = 0;
            *(undefined8 *)(ptVar10 + -8) = 0;
            *(undefined8 *)(ptVar10 + -0x10) = 0;
            ptVar10 = ptVar14;
          } while (uVar13 != 0);
          ptVar10 = ptStack_88 + uVar11 * -8;
          ptVar12 = this_00 + uVar11 * -8;
          if (uVar16 != uVar11) goto LAB_00181a00;
        }
        *(thread **)this = ptVar10;
        *(thread **)(this + 8) = ptVar17;
        *(void **)(this + 0x10) = local_78;
        do {
          this_00 = this_00 + -8;
          std::__ndk1::thread::~thread(this_00);
        } while (this_00 != ptVar1);
      }
      if (ptVar1 != (thread *)0x0) {
        operator_delete(ptVar1);
      }
    }
    *(thread **)(this + 8) = ptVar17;
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
    std::__ndk1::condition_variable::notify_all();
    if ((unaff_w23 & 1) != 0) {
      operator_delete(pcVar5);
    }
  }
  std::__ndk1::mutex::unlock();
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
LAB_00181bb0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00181bb4  FUN_00181bb4 =====

void FUN_00181bb4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar9 = (undefined8 *)param_1[1];
  puVar11 = puVar9;
  if ((undefined8 *)param_1[2] != puVar9) {
    uVar7 = param_1[4];
    plVar12 = puVar9 + uVar7 / 0x55;
    uVar8 = (param_1[5] + uVar7) / 0x55;
    plVar4 = (long *)*plVar12;
    plVar14 = plVar4 + (uVar7 / 0x55) * -0x1fe + uVar7 * 6;
    plVar13 = (long *)(puVar9[uVar8] + uVar8 * -0xff0 + (param_1[5] + uVar7) * 0x30);
    puVar11 = (undefined8 *)param_1[2];
    if (plVar14 != plVar13) {
      do {
        plVar2 = (long *)plVar14[4];
        if (plVar2 == plVar14) {
          lVar5 = 4;
          plVar2 = plVar14;
LAB_00181c74:
          (**(code **)(*plVar2 + lVar5 * 8))();
          plVar4 = (long *)*plVar12;
        }
        else if (plVar2 != (long *)0x0) {
          lVar5 = 5;
          goto LAB_00181c74;
        }
        plVar14 = plVar14 + 6;
        if ((long)plVar14 - (long)plVar4 == 0xff0) {
          plVar12 = plVar12 + 1;
          plVar4 = (long *)*plVar12;
          plVar14 = plVar4;
        }
      } while (plVar14 != plVar13);
      puVar9 = (undefined8 *)param_1[1];
      puVar11 = (undefined8 *)param_1[2];
    }
  }
  param_1[5] = 0;
  lVar5 = (long)puVar11 - (long)puVar9;
  while (uVar7 = lVar5 >> 3, 2 < uVar7) {
    operator_delete((void *)*puVar9);
    puVar11 = (undefined8 *)param_1[2];
    puVar9 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = puVar9;
    lVar5 = (long)puVar11 - (long)puVar9;
  }
  if (uVar7 == 1) {
    uVar6 = 0x2a;
  }
  else {
    if (uVar7 != 2) goto LAB_00181d08;
    uVar6 = 0x55;
  }
  param_1[4] = uVar6;
LAB_00181d08:
  if (puVar9 != puVar11) {
    do {
      puVar10 = puVar9 + 1;
      operator_delete((void *)*puVar9);
      puVar9 = puVar10;
    } while (puVar10 != puVar11);
    lVar5 = param_1[2];
    if (lVar5 != param_1[1]) {
      param_1[2] = lVar5 + ((param_1[1] - lVar5) + 7U & 0xfffffffffffffff8);
    }
  }
  if ((void *)*param_1 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete((void *)*param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00181da4  FUN_00181da4 =====

void FUN_00181da4(undefined8 *param_1)

{
  long lVar1;
  thread *ptVar2;
  long lVar3;
  thread *this;
  thread *ptVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  ptVar4 = (thread *)*param_1;
  if (ptVar4 == (thread *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    this = (thread *)param_1[1];
    ptVar2 = ptVar4;
    if (this != ptVar4) {
      do {
        this = this + -8;
        std::__ndk1::thread::~thread(this);
      } while (this != ptVar4);
      ptVar2 = (thread *)*param_1;
    }
    param_1[1] = ptVar4;
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      operator_delete(ptVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00181e48  FUN_00181e48 =====

void FUN_00181e48(pthread_t *param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  __thread_struct *this;
  undefined8 *__arg;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  __thread_struct *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (__thread_struct *)operator_new(8);
                    /* try { // try from 00181e7c to 00181e7f has its CatchHandler @ 00181f14 */
  std::__ndk1::__thread_struct::__thread_struct(this);
  local_40 = this;
                    /* try { // try from 00181e84 to 00181e8b has its CatchHandler @ 00181f0c */
  __arg = (undefined8 *)operator_new(0x28);
  uVar3 = *param_2;
  uVar6 = param_2[2];
  uVar5 = param_2[1];
  uVar4 = param_2[3];
  local_40 = (__thread_struct *)0x0;
  *__arg = this;
  __arg[1] = uVar3;
  __arg[3] = uVar6;
  __arg[2] = uVar5;
  __arg[4] = uVar4;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
                    /* try { // try from 00181eb4 to 00181f0b has its CatchHandler @ 00181f24 */
  iVar2 = pthread_create(param_1,(pthread_attr_t *)0x0,FUN_00182028,__arg);
  if (iVar2 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_38) {
    uVar3 = std::__ndk1::__throw_system_error(iVar2,"thread constructor failed");
                    /* catch() { ... } // from try @ 00181e84 with catch @ 00181f0c */
    FUN_001824a4(&local_40);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      FUN_00157e74(uVar3);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00181f54  FUN_00181f54 =====

void FUN_00181f54(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_0015d71c("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00181f8c  FUN_00181f8c =====

void FUN_00181f8c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  lVar1 = param_1[1];
  lVar4 = param_1[2];
  while (lVar4 != lVar1) {
    param_1[2] = (thread *)(lVar4 + -8);
    std::__ndk1::thread::~thread((thread *)(lVar4 + -8));
    lVar4 = param_1[2];
  }
  if ((void *)*param_1 == (void *)0x0) {
    if (*(long *)(lVar2 + 0x28) == lVar3) {
      return;
    }
  }
  else if (*(long *)(lVar2 + 0x28) == lVar3) {
    operator_delete((void *)*param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00182028  FUN_00182028 =====

undefined8 FUN_00182028(undefined8 *param_1)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  undefined8 *puVar4;
  pthread_key_t *ppVar5;
  long *plVar6;
  undefined8 uVar7;
  void *__pointer;
  long lVar8;
  long lVar9;
  undefined ****ppppuVar10;
  undefined ***pppuVar11;
  long *plVar12;
  undefined ***pppuVar13;
  undefined ****ppppuVar14;
  long lVar15;
  __thread_struct *this;
  ulong uVar16;
  ulong uVar17;
  undefined8 *local_b8;
  undefined ***local_b0;
  char local_a8;
  undefined **local_a0;
  undefined8 *puStack_98;
  undefined ***local_80 [3];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_b8 = param_1;
                    /* try { // try from 00182060 to 00182073 has its CatchHandler @ 0018238c */
  ppVar5 = (pthread_key_t *)std::__ndk1::__thread_local_data();
  __pointer = (void *)*param_1;
  *param_1 = 0;
  pthread_setspecific(*ppVar5,__pointer);
  lVar15 = param_1[1];
  puStack_98 = param_1 + 2;
  local_a0 = &PTR_FUN_001b9950;
                    /* try { // try from 00182090 to 00182097 has its CatchHandler @ 00182354 */
  local_80[0] = &local_a0;
  facebook::jni::ThreadScope::WithClassLoader((function *)&local_a0);
  if (local_80[0] == &local_a0) {
    lVar8 = 4;
    pppuVar11 = &local_a0;
  }
  else {
    if (local_80[0] == (undefined ***)0x0) goto LAB_001820c4;
    lVar8 = 5;
    pppuVar11 = local_80[0];
  }
  (*(code *)(*pppuVar11)[lVar8])();
LAB_001820c4:
  do {
    local_80[0] = (undefined ***)0x0;
    local_a8 = '\x01';
    local_b0 = (undefined ***)(lVar15 + 0x48);
                    /* try { // try from 0018210c to 00182113 has its CatchHandler @ 001823a0 */
    std::__ndk1::mutex::lock();
    bVar1 = *(byte *)(lVar15 + 0xa0);
    pppuVar11 = local_80[0];
    while ((local_80[0] = pppuVar11, (bVar1 & 1) != 0 && (*(long *)(lVar15 + 0x40) == 0))) {
      std::__ndk1::condition_variable::wait((unique_lock *)(lVar15 + 0x70));
      bVar1 = *(byte *)(lVar15 + 0xa0);
      pppuVar11 = local_80[0];
    }
    if (((*(byte *)(lVar15 + 0xa0) & 1) == 0) && (*(long *)(lVar15 + 0x40) == 0)) {
      bVar3 = false;
    }
    else {
      uVar17 = *(ulong *)(lVar15 + 0x38);
      uVar16 = uVar17 / 0x55;
      lVar8 = *(long *)(*(long *)(lVar15 + 0x20) + uVar16 * 8);
      local_80[0] = (undefined ***)0x0;
      if (pppuVar11 == &local_a0) {
        pppuVar11 = &local_a0;
        lVar9 = 4;
LAB_0018218c:
        (*(code *)(*pppuVar11)[lVar9])();
      }
      else if (pppuVar11 != (undefined ***)0x0) {
        lVar9 = 5;
        goto LAB_0018218c;
      }
      pppuVar13 = (undefined ***)(lVar8 + uVar16 * -0xff0 + uVar17 * 0x30);
      ppppuVar10 = (undefined ****)(pppuVar13 + 4);
      pppuVar11 = *ppppuVar10;
      ppppuVar14 = local_80;
      if (pppuVar11 == (undefined ***)0x0) {
LAB_001821c0:
        *ppppuVar14 = (undefined ***)0x0;
      }
      else {
        if (pppuVar11 != pppuVar13) {
          local_80[0] = pppuVar11;
          ppppuVar14 = ppppuVar10;
          goto LAB_001821c0;
        }
        local_80[0] = &local_a0;
                    /* try { // try from 001821dc to 001821e3 has its CatchHandler @ 00182394 */
        (*(code *)(**ppppuVar10)[3])(*ppppuVar10,&local_a0);
      }
      uVar16 = *(ulong *)(lVar15 + 0x38);
      plVar12 = (long *)(*(long *)(*(long *)(lVar15 + 0x20) + (uVar16 / 0x55) * 8) +
                         (uVar16 / 0x55) * -0xff0 + uVar16 * 0x30);
      plVar6 = (long *)plVar12[4];
      if (plVar6 == plVar12) {
        lVar8 = 4;
LAB_00182224:
        (**(code **)(*plVar12 + lVar8 * 8))();
        uVar16 = *(ulong *)(lVar15 + 0x38);
      }
      else if (plVar6 != (long *)0x0) {
        lVar8 = 5;
        plVar12 = plVar6;
        goto LAB_00182224;
      }
      *(ulong *)(lVar15 + 0x38) = uVar16 + 1;
      *(long *)(lVar15 + 0x40) = *(long *)(lVar15 + 0x40) + -1;
      if (0xa9 < uVar16 + 1) {
        operator_delete((void *)**(undefined8 **)(lVar15 + 0x20));
        *(long *)(lVar15 + 0x20) = *(long *)(lVar15 + 0x20) + 8;
        *(long *)(lVar15 + 0x38) = *(long *)(lVar15 + 0x38) + -0x55;
      }
      bVar3 = true;
    }
    if (local_a8 != '\0') {
      std::__ndk1::mutex::unlock();
    }
    if (bVar3) {
      if (local_80[0] == (undefined ***)0x0) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00182350 to 00182353 has its CatchHandler @ 0018239c */
          uVar7 = FUN_0016c8f4();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00182090 with catch @ 00182354
                        */
          if (local_80[0] == (undefined ***)(lVar15 + 0x48)) {
            lVar15 = 4;
            pppuVar11 = &local_a0;
LAB_00182378:
            (*(code *)(*pppuVar11)[lVar15])(pppuVar11);
          }
          else if (local_80[0] != (undefined ***)0x0) {
            lVar15 = 5;
            pppuVar11 = local_80[0];
            goto LAB_00182378;
          }
          FUN_001823fc(&local_b8);
          if (*(long *)(lVar2 + 0x28) == local_68) {
            FUN_00157e74(uVar7);
          }
        }
        goto LAB_001823f8;
      }
                    /* try { // try from 00182298 to 0018229b has its CatchHandler @ 00182398 */
      (*(code *)(*local_80[0])[6])();
    }
    if (local_80[0] == &local_a0) {
      pppuVar11 = &local_a0;
      lVar8 = 4;
LAB_001820f0:
      (*(code *)(*pppuVar11)[lVar8])();
    }
    else if (local_80[0] != (undefined ***)0x0) {
      lVar8 = 5;
      pppuVar11 = local_80[0];
      goto LAB_001820f0;
    }
    puVar4 = local_b8;
  } while (bVar3);
  if (local_b8 != (undefined8 *)0x0) {
    if ((*(byte *)(local_b8 + 2) & 1) != 0) {
      operator_delete((void *)local_b8[4]);
    }
    this = (__thread_struct *)*puVar4;
    *puVar4 = 0;
    if (this != (__thread_struct *)0x0) {
      std::__ndk1::__thread_struct::~__thread_struct(this);
      operator_delete(this);
    }
    operator_delete(puVar4);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return 0;
  }
LAB_001823f8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001823fc  FUN_001823fc =====

void FUN_001823fc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  __thread_struct *this;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  puVar3 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar3 == (undefined8 *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else {
    if ((*(byte *)(puVar3 + 2) & 1) != 0) {
      operator_delete((void *)puVar3[4]);
    }
    this = (__thread_struct *)*puVar3;
    *puVar3 = 0;
    if (this != (__thread_struct *)0x0) {
      std::__ndk1::__thread_struct::~__thread_struct(this);
      operator_delete(this);
    }
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      operator_delete(puVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001824a4  FUN_001824a4 =====

void FUN_001824a4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  __thread_struct *this;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (__thread_struct *)*param_1;
  *param_1 = 0;
  if (this == (__thread_struct *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else {
    std::__ndk1::__thread_struct::~__thread_struct(this);
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      operator_delete(this);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018251c  margelo::nitro::ThreadPool::run =====

/* margelo::nitro::ThreadPool::run(std::__ndk1::function<void ()>&&) */

void __thiscall margelo::nitro::ThreadPool::run(ThreadPool *this,function *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  size_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  void *pvVar7;
  void *pvVar8;
  runtime_error *this_00;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  function *pfVar14;
  ulong uVar15;
  function *pfVar16;
  ulong *puVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  ulong *puVar22;
  undefined8 *__src;
  undefined8 *puVar23;
  ulong *puVar24;
  ulong *puVar25;
  undefined8 *puVar26;
  ulong *puVar27;
  ulong *puVar28;
  ulong uVar29;
  undefined8 uVar30;
  ulong uVar31;
  ulong *puVar32;
  ulong uVar33;
  undefined8 uVar34;
  ulong *local_80;
  
  lVar4 = tpidr_el0;
  lVar11 = *(long *)(lVar4 + 0x28);
  if ((*(long *)(this + 0x40) != 0) && (*(ulong *)(this + 0xa8) < *(ulong *)(this + 0xb0))) {
    addThread(this);
  }
  std::__ndk1::mutex::lock();
  if (((byte)this[0xa0] & 1) == 0) {
    this_00 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00182d0c to 00182d17 has its CatchHandler @ 00182d94 */
    std::runtime_error::runtime_error
              (this_00,"Cannot queue the given task - the ThreadPool has already been stopped!");
    if (*(long *)(lVar4 + 0x28) == lVar11) {
                    /* try { // try from 00182d28 to 00182d3f has its CatchHandler @ 00182dc0 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_00,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
    }
    goto LAB_00182de4;
  }
  puVar22 = *(ulong **)(this + 0x20);
  puVar28 = *(ulong **)(this + 0x28);
  uVar15 = (long)puVar28 - (long)puVar22;
  uVar13 = *(ulong *)(this + 0x38);
  lVar10 = 0;
  if (uVar15 != 0) {
    lVar10 = ((long)puVar28 - (long)puVar22 >> 3) * 0x55 + -1;
  }
  puVar25 = puVar28;
  if (lVar10 == *(long *)(this + 0x40) + uVar13) {
    if (uVar13 < 0x55) {
      puVar25 = *(ulong **)(this + 0x30);
      puVar24 = *(ulong **)(this + 0x18);
      if (uVar15 < (ulong)((long)puVar25 - (long)puVar24)) {
        if (puVar25 != puVar28) {
                    /* try { // try from 0018264c to 00182677 has its CatchHandler @ 00182dc0 */
          pvVar7 = operator_new(0xff0);
          *puVar28 = (ulong)pvVar7;
          goto LAB_00182aa8;
        }
        pvVar7 = operator_new(0xff0);
        puVar27 = puVar22;
        if (puVar22 == puVar24) {
          uVar13 = (long)puVar25 - (long)puVar22 >> 2;
          if (puVar28 == puVar22) {
            uVar13 = 1;
          }
          puVar27 = puVar24;
          if (uVar13 >> 0x3d != 0) goto LAB_00182d54;
          pvVar8 = operator_new(uVar13 << 3);
          pvVar1 = (void *)((long)pvVar8 + uVar13 * 8);
          uVar13 = uVar13 + 3 >> 2;
          puVar27 = (ulong *)((long)pvVar8 + uVar13 * 8);
          puVar25 = puVar27;
          if ((long)puVar28 - (long)puVar22 == 0) {
LAB_00182b90:
            *(void **)(this + 0x18) = pvVar8;
            *(ulong **)(this + 0x20) = puVar27;
            *(ulong **)(this + 0x28) = puVar25;
            *(void **)(this + 0x30) = pvVar1;
            if (puVar22 == (ulong *)0x0) goto LAB_00182ba8;
          }
          else {
            uVar19 = ((long)puVar28 - (long)puVar22) - 8;
            puVar25 = (ulong *)((long)puVar27 + uVar15);
            puVar28 = puVar27;
            puVar24 = puVar22;
            if ((uVar19 < 0x38) || ((long)pvVar8 + (uVar13 * 8 - (long)puVar22) < 0x20)) {
LAB_00182b80:
              do {
                puVar32 = puVar28 + 1;
                *puVar28 = *puVar24;
                puVar28 = puVar32;
                puVar24 = puVar24 + 1;
              } while (puVar32 != puVar25);
              goto LAB_00182b90;
            }
            puVar28 = puVar22 + 2;
            puVar24 = (ulong *)((long)pvVar8 + uVar13 * 8 + 0x10);
            uVar15 = (uVar19 >> 3) + 1;
            uVar19 = uVar15 & 0x3ffffffffffffffc;
            uVar13 = uVar19;
            do {
              puVar32 = puVar28 + -1;
              uVar20 = puVar28[-2];
              uVar31 = puVar28[1];
              uVar29 = *puVar28;
              uVar13 = uVar13 - 4;
              puVar28 = puVar28 + 4;
              puVar24[-1] = *puVar32;
              puVar24[-2] = uVar20;
              puVar24[1] = uVar31;
              *puVar24 = uVar29;
              puVar24 = puVar24 + 4;
            } while (uVar13 != 0);
            if (uVar15 != uVar19) {
              puVar28 = puVar27 + uVar19;
              puVar24 = puVar22 + uVar19;
              goto LAB_00182b80;
            }
            *(void **)(this + 0x18) = pvVar8;
            *(ulong **)(this + 0x20) = puVar27;
            *(ulong **)(this + 0x28) = puVar25;
            *(void **)(this + 0x30) = pvVar1;
          }
          operator_delete(puVar22);
          puVar27 = *(ulong **)(this + 0x20);
        }
LAB_00182ba8:
        puVar27[-1] = (ulong)pvVar7;
        __src = *(undefined8 **)(this + 0x20);
        puVar26 = *(undefined8 **)(this + 0x28);
        puVar21 = __src + -1;
        *(undefined8 **)(this + 0x20) = puVar21;
        puVar27 = (ulong *)__src[-1];
        *(undefined8 **)(this + 0x20) = __src;
        if (puVar26 == *(undefined8 **)(this + 0x30)) {
          puVar23 = *(undefined8 **)(this + 0x18);
          if (puVar23 <= __src && (long)__src - (long)puVar23 != 0) {
            lVar12 = (long)__src - (long)puVar23 >> 3;
            lVar10 = lVar12 + 2;
            if (lVar12 + 1 < 0 == SCARRY8(lVar12,1)) {
              lVar10 = lVar12 + 1;
            }
            sVar3 = (long)puVar26 - (long)__src;
            puVar26 = __src + -(lVar10 >> 1);
            if (sVar3 != 0) {
              memmove(puVar26,__src,sVar3);
              __src = *(undefined8 **)(this + 0x20);
            }
            puVar26 = (undefined8 *)((long)puVar26 + sVar3);
            *(undefined8 **)(this + 0x20) = __src + -(lVar10 >> 1);
            *(undefined8 **)(this + 0x28) = puVar26;
            *puVar26 = puVar27;
            goto LAB_00182aa8;
          }
          uVar15 = (long)puVar26 - (long)puVar23 >> 2;
          if ((long)puVar26 - (long)puVar23 == 0) {
            uVar15 = 1;
          }
          if (uVar15 >> 0x3d != 0) goto LAB_00182d54;
                    /* try { // try from 00182c3c to 00182c3f has its CatchHandler @ 00182dc0 */
          pvVar7 = operator_new(uVar15 << 3);
          uVar13 = uVar15 >> 2;
          puVar2 = (undefined8 *)((long)pvVar7 + uVar13 * 8);
          puVar18 = puVar2;
          if ((long)puVar26 - (long)__src != 0) {
            uVar19 = (long)puVar26 + (-0x10 - (long)puVar21);
            puVar18 = (undefined8 *)((long)puVar2 + ((long)puVar26 - (long)__src));
            puVar26 = puVar2;
            if ((0x47 < uVar19) && (0x1f < (long)pvVar7 + (uVar13 * 8 - (long)puVar21) + -8)) {
              puVar26 = __src + 2;
              puVar21 = (undefined8 *)((long)pvVar7 + uVar13 * 8 + 0x10);
              uVar13 = (uVar19 >> 3) + 1;
              uVar20 = uVar13 & 0x3ffffffffffffffc;
              uVar19 = uVar20;
              do {
                puVar5 = puVar26 + -1;
                uVar9 = puVar26[-2];
                uVar34 = puVar26[1];
                uVar30 = *puVar26;
                uVar19 = uVar19 - 4;
                puVar26 = puVar26 + 4;
                puVar21[-1] = *puVar5;
                puVar21[-2] = uVar9;
                puVar21[1] = uVar34;
                *puVar21 = uVar30;
                puVar21 = puVar21 + 4;
              } while (uVar19 != 0);
              if (uVar13 == uVar20) goto LAB_00182ce4;
              __src = __src + uVar20;
              puVar26 = puVar2 + uVar20;
            }
            do {
              puVar21 = puVar26 + 1;
              *puVar26 = *__src;
              puVar26 = puVar21;
              __src = __src + 1;
            } while (puVar21 != puVar18);
          }
LAB_00182ce4:
          *(void **)(this + 0x18) = pvVar7;
          *(undefined8 **)(this + 0x20) = puVar2;
          *(undefined8 **)(this + 0x28) = puVar18;
          *(void **)(this + 0x30) = (void *)((long)pvVar7 + uVar15 * 8);
          operator_delete(puVar23);
          puVar26 = *(undefined8 **)(this + 0x28);
        }
        *puVar26 = puVar27;
        goto LAB_00182aa8;
      }
      puVar27 = (ulong *)((long)puVar25 - (long)puVar24 >> 2);
      if (puVar25 == puVar24) {
        puVar27 = (ulong *)0x1;
      }
      if ((ulong)puVar27 >> 0x3d != 0) {
LAB_00182d54:
        if (*(long *)(lVar4 + 0x28) != lVar11) goto LAB_00182de4;
                    /* try { // try from 00182d64 to 00182d67 has its CatchHandler @ 00182dc0 */
        FUN_0015d614();
        puVar6 = puVar27;
LAB_00182d68:
        if (*(long *)(lVar4 + 0x28) == lVar11) {
                    /* try { // try from 00182d78 to 00182d7b has its CatchHandler @ 00182d7c */
          uVar9 = FUN_0015d614();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00182818 with catch @ 00182d7c
                       catch(type#1 @ 00000000) { ... } // from try @ 00182d78 with catch @ 00182d7c
                        */
          operator_delete(puVar6);
          if (local_80 != (ulong *)0x0) {
            operator_delete(local_80);
          }
          if (*(long *)(lVar4 + 0x28) == lVar11) {
            std::__ndk1::mutex::unlock();
            FUN_00157e74(uVar9);
          }
        }
        goto LAB_00182de4;
      }
      local_80 = (ulong *)operator_new((long)puVar27 << 3);
      puVar24 = (ulong *)((long)local_80 + uVar15);
                    /* try { // try from 0018268c to 00182693 has its CatchHandler @ 00182d8c */
      puVar6 = (ulong *)operator_new(0xff0);
      puVar32 = local_80 + (long)puVar27;
      if (puVar24 == puVar32) {
        if ((long)uVar15 < 1) {
          uVar15 = (long)uVar15 >> 2;
          if (puVar28 == puVar22) {
            uVar15 = 1;
          }
          if (uVar15 >> 0x3d != 0) goto LAB_00182d68;
                    /* try { // try from 00182818 to 0018281b has its CatchHandler @ 00182d7c */
          puVar24 = (ulong *)operator_new(uVar15 << 3);
          puVar32 = puVar24 + uVar15;
          operator_delete(local_80);
          puVar28 = *(ulong **)(this + 0x28);
          local_80 = puVar24;
        }
        else {
          puVar24 = (ulong *)((long)puVar24 - ((uVar15 >> 1) + 4 & 0xfffffffffffffff8));
        }
      }
      puVar25 = puVar24 + 1;
      *puVar24 = (ulong)puVar6;
      while (puVar28 != *(ulong **)(this + 0x20)) {
        puVar22 = puVar24;
        if (puVar24 == local_80) {
          if (puVar25 < puVar32) {
            lVar12 = (long)puVar32 - (long)puVar25 >> 3;
            lVar10 = lVar12 + 2;
            if (lVar12 + 1 < 0 == SCARRY8(lVar12,1)) {
              lVar10 = lVar12 + 1;
            }
            puVar22 = puVar24 + (lVar10 >> 1);
            if ((long)puVar25 - (long)puVar24 != 0) {
              memmove(puVar22,puVar24,(long)puVar25 - (long)puVar24);
              puVar24 = puVar25;
            }
            puVar25 = puVar24 + (lVar10 >> 1);
          }
          else {
            puVar27 = (ulong *)((long)puVar32 - (long)puVar24 >> 2);
            if ((long)puVar32 - (long)puVar24 == 0) {
              puVar27 = (ulong *)0x1;
            }
            if ((ulong)puVar27 >> 0x3d != 0) {
              if (*(long *)(lVar4 + 0x28) != lVar11) goto LAB_00182de4;
                    /* try { // try from 00182d50 to 00182d53 has its CatchHandler @ 00182da4 */
              FUN_0015d614();
              goto LAB_00182d54;
            }
                    /* try { // try from 001828fc to 001828ff has its CatchHandler @ 00182da8 */
            local_80 = (ulong *)operator_new((long)puVar27 << 3);
            lVar10 = (long)puVar25 - (long)puVar24;
            uVar15 = (long)puVar27 + 3U >> 2;
            puVar32 = local_80 + (long)puVar27;
            puVar22 = local_80 + uVar15;
            puVar25 = puVar22;
            if (lVar10 == 0) {
LAB_001829d0:
              if (puVar24 == (ulong *)0x0) goto LAB_0018285c;
            }
            else {
              puVar25 = (ulong *)((long)puVar22 + lVar10);
              puVar27 = puVar22;
              puVar6 = puVar24;
              if ((lVar10 - 8U < 0x38) || ((long)local_80 + (uVar15 * 8 - (long)puVar24) < 0x20)) {
LAB_001829c0:
                do {
                  puVar17 = puVar27 + 1;
                  *puVar27 = *puVar6;
                  puVar27 = puVar17;
                  puVar6 = puVar6 + 1;
                } while (puVar17 != puVar25);
                goto LAB_001829d0;
              }
              puVar27 = puVar24 + 2;
              puVar6 = local_80 + uVar15 + 2;
              uVar15 = (lVar10 - 8U >> 3) + 1;
              uVar19 = uVar15 & 0x3ffffffffffffffc;
              uVar13 = uVar19;
              do {
                puVar17 = puVar27 + -1;
                uVar20 = puVar27[-2];
                uVar31 = puVar27[1];
                uVar29 = *puVar27;
                uVar13 = uVar13 - 4;
                puVar27 = puVar27 + 4;
                puVar6[-1] = *puVar17;
                puVar6[-2] = uVar20;
                puVar6[1] = uVar31;
                *puVar6 = uVar29;
                puVar6 = puVar6 + 4;
              } while (uVar13 != 0);
              if (uVar15 != uVar19) {
                puVar27 = puVar22 + uVar19;
                puVar6 = puVar24 + uVar19;
                goto LAB_001829c0;
              }
            }
            operator_delete(puVar24);
          }
        }
LAB_0018285c:
        puVar24 = puVar22 + -1;
        puVar28 = puVar28 + -1;
        puVar22[-1] = *puVar28;
      }
      pvVar7 = *(void **)(this + 0x18);
      *(ulong **)(this + 0x20) = puVar24;
      *(ulong **)(this + 0x18) = local_80;
      *(ulong **)(this + 0x30) = puVar32;
      *(ulong **)(this + 0x28) = puVar25;
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar25 = *(ulong **)(this + 0x28);
      }
    }
    else {
      *(ulong *)(this + 0x38) = uVar13 - 0x55;
      puVar25 = puVar22 + 1;
      puVar27 = (ulong *)*puVar22;
      *(ulong **)(this + 0x20) = puVar25;
      if (puVar28 == *(ulong **)(this + 0x30)) {
        puVar24 = *(ulong **)(this + 0x18);
        if (puVar25 < puVar24 || (long)puVar25 - (long)puVar24 == 0) {
          uVar13 = (long)puVar28 - (long)puVar24 >> 2;
          if ((long)puVar28 - (long)puVar24 == 0) {
            uVar13 = 1;
          }
          if (uVar13 >> 0x3d != 0) goto LAB_00182d54;
                    /* try { // try from 001826c8 to 0018275b has its CatchHandler @ 00182dc0 */
          pvVar7 = operator_new(uVar13 << 3);
          uVar19 = uVar13 >> 2;
          puVar32 = (ulong *)((long)pvVar7 + uVar19 * 8);
          puVar6 = puVar32;
          if ((long)puVar28 - (long)puVar25 != 0) {
            puVar6 = (ulong *)((long)puVar32 + ((long)puVar28 - (long)puVar25));
            puVar28 = puVar32;
            if ((0x47 < uVar15 - 0x10) && (0x1f < (long)pvVar7 + (uVar19 * 8 - (long)puVar22) + -8))
            {
              puVar22 = puVar22 + 3;
              puVar28 = (ulong *)((long)pvVar7 + uVar19 * 8 + 0x10);
              uVar15 = (uVar15 - 0x10 >> 3) + 1;
              uVar20 = uVar15 & 0x3ffffffffffffffc;
              uVar19 = uVar20;
              do {
                puVar17 = puVar22 + -1;
                uVar29 = puVar22[-2];
                uVar33 = puVar22[1];
                uVar31 = *puVar22;
                uVar19 = uVar19 - 4;
                puVar22 = puVar22 + 4;
                puVar28[-1] = *puVar17;
                puVar28[-2] = uVar29;
                puVar28[1] = uVar33;
                *puVar28 = uVar31;
                puVar28 = puVar28 + 4;
              } while (uVar19 != 0);
              if (uVar15 == uVar20) goto LAB_00182a90;
              puVar25 = puVar25 + uVar20;
              puVar28 = puVar32 + uVar20;
            }
            do {
              puVar22 = puVar28 + 1;
              *puVar28 = *puVar25;
              puVar28 = puVar22;
              puVar25 = puVar25 + 1;
            } while (puVar22 != puVar6);
          }
LAB_00182a90:
          *(void **)(this + 0x18) = pvVar7;
          *(ulong **)(this + 0x20) = puVar32;
          *(ulong **)(this + 0x28) = puVar6;
          *(void **)(this + 0x30) = (void *)((long)pvVar7 + uVar13 * 8);
          operator_delete(puVar24);
          puVar28 = *(ulong **)(this + 0x28);
        }
        else {
          lVar12 = (long)puVar25 - (long)puVar24 >> 3;
          lVar10 = lVar12 + 2;
          if (lVar12 + 1 < 0 == SCARRY8(lVar12,1)) {
            lVar10 = lVar12 + 1;
          }
          sVar3 = (long)puVar28 - (long)puVar25;
          if (sVar3 != 0) {
            memmove(puVar25 + -(lVar10 >> 1),puVar25,sVar3);
            puVar28 = *(ulong **)(this + 0x20);
          }
          puVar22 = puVar28 + -(lVar10 >> 1);
          puVar28 = (ulong *)((long)(puVar25 + -(lVar10 >> 1)) + sVar3);
          *(ulong **)(this + 0x20) = puVar22;
          *(ulong **)(this + 0x28) = puVar28;
        }
      }
      *puVar28 = (ulong)puVar27;
LAB_00182aa8:
      puVar25 = (ulong *)(*(long *)(this + 0x28) + 8);
      *(ulong **)(this + 0x28) = puVar25;
    }
    puVar22 = *(ulong **)(this + 0x20);
  }
  if (puVar25 == puVar22) {
    lVar10 = 0;
  }
  else {
    uVar15 = (ulong)(*(long *)(this + 0x40) + *(long *)(this + 0x38)) / 0x55;
    lVar10 = puVar22[uVar15] + uVar15 * -0xff0 +
             (*(long *)(this + 0x40) + *(long *)(this + 0x38)) * 0x30;
  }
  pfVar14 = param_1 + 0x20;
  pfVar16 = *(function **)pfVar14;
  if (pfVar16 == (function *)0x0) {
    pfVar14 = (function *)(lVar10 + 0x20);
LAB_00182b18:
    *(undefined8 *)pfVar14 = 0;
  }
  else {
    if (pfVar16 != param_1) {
      *(function **)(lVar10 + 0x20) = pfVar16;
      goto LAB_00182b18;
    }
    *(long *)(lVar10 + 0x20) = lVar10;
                    /* try { // try from 00182b30 to 00182b33 has its CatchHandler @ 00182d90 */
    (**(code **)(**(long **)pfVar14 + 0x18))();
  }
  *(long *)(this + 0x40) = *(long *)(this + 0x40) + 1;
  std::__ndk1::mutex::unlock();
  if (*(long *)(lVar4 + 0x28) == lVar11) {
    std::__ndk1::condition_variable::notify_one();
    return;
  }
LAB_00182de4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00182de8  margelo::nitro::ThreadPool::~ThreadPool =====

/* margelo::nitro::ThreadPool::~ThreadPool() */

void __thiscall margelo::nitro::ThreadPool::~ThreadPool(ThreadPool *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  thread *ptVar4;
  long lVar5;
  thread *this_00;
  thread *ptVar6;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00182e0c to 00182e13 has its CatchHandler @ 00182ee4 */
  std::__ndk1::mutex::lock();
  *(undefined4 *)(this + 0xa0) = 0;
  std::__ndk1::mutex::unlock();
  std::__ndk1::condition_variable::notify_all();
  lVar2 = *(long *)(this + 8);
  for (lVar1 = *(long *)this; lVar1 != lVar2; lVar1 = lVar1 + 8) {
                    /* try { // try from 00182e38 to 00182e3f has its CatchHandler @ 00182ee8 */
    std::__ndk1::thread::join();
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)(this + 0x70));
  std::__ndk1::mutex::~mutex((mutex *)(this + 0x48));
  FUN_00181bb4(this + 0x18);
  ptVar6 = *(thread **)this;
  if (ptVar6 == (thread *)0x0) {
    if (*(long *)(lVar3 + 0x28) == lVar5) {
      return;
    }
  }
  else {
    this_00 = *(thread **)(this + 8);
    ptVar4 = ptVar6;
    if (this_00 != ptVar6) {
      do {
        this_00 = this_00 + -8;
        std::__ndk1::thread::~thread(this_00);
      } while (this_00 != ptVar6);
      ptVar4 = *(thread **)this;
    }
    *(thread **)(this + 8) = ptVar6;
    if (*(long *)(lVar3 + 0x28) == lVar5) {
      operator_delete(ptVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00182eec  margelo::nitro::ThreadPool::shared =====

/* margelo::nitro::ThreadPool::shared() */

undefined * margelo::nitro::ThreadPool::shared(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((DAT_001bfe48 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_001bfe48), iVar2 != 0)) {
    ThreadPool((ThreadPool *)&DAT_001bfd88,"nitro-thread",3,10);
    __cxa_atexit(PTR__ThreadPool_001ba188,&DAT_001bfd88,&PTR_LOOP_001b6ad0);
    __cxa_guard_release(&DAT_001bfe48);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return &DAT_001bfd88;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00182fc4  FUN_00182fc4 =====

void FUN_00182fc4(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  
  lVar1 = tpidr_el0;
  lVar6 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)param_1[2];
  while (puVar2 != (undefined8 *)0x0) {
    pvVar4 = (void *)*puVar2;
    puVar3 = (undefined8 *)puVar2[5];
    while (puVar3 != (undefined8 *)0x0) {
      pvVar5 = (void *)*puVar3;
      FUN_0017bc30(puVar3 + 5);
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        operator_delete((void *)puVar3[4]);
      }
      operator_delete(puVar3);
      puVar3 = (undefined8 *)pvVar5;
    }
    pvVar5 = (void *)puVar2[3];
    puVar2[3] = 0;
    if (pvVar5 != (void *)0x0) {
      operator_delete(pvVar5);
    }
    operator_delete(puVar2);
    puVar2 = (undefined8 *)pvVar4;
  }
  pvVar4 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar4 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar6) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar6) {
    operator_delete(pvVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001830b4  margelo::nitro::CommonGlobals::Object::create =====

/* margelo::nitro::CommonGlobals::Object::create(facebook::jsi::Runtime&, facebook::jsi::Value
   const&) */

void margelo::nitro::CommonGlobals::Object::create(Runtime *param_1,Value *param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001830ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x150))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001830f4  margelo::nitro::CommonGlobals::Object::defineProperty =====

/* margelo::nitro::CommonGlobals::Object::defineProperty(facebook::jsi::Runtime&,
   facebook::jsi::Object const&, char const*, margelo::nitro::PlainPropertyDescriptor&&) */

void margelo::nitro::CommonGlobals::Object::defineProperty
               (Runtime *param_1,Object *param_2,char *param_3,PlainPropertyDescriptor *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined ***pppuVar3;
  size_t sVar4;
  undefined8 uVar5;
  long lVar6;
  Value aVStack_d8 [16];
  undefined4 local_c8 [2];
  PlainPropertyDescriptor local_c0;
  basic_string local_b8;
  undefined4 uStack_b7;
  undefined2 uStack_b3;
  char cStack_b1;
  char cStack_b0;
  uint local_af;
  undefined1 local_ab;
  void *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined **local_90 [4];
  undefined ***local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_90[0] = &PTR_FUN_001b7c40;
                    /* try { // try from 00183140 to 0018314f has its CatchHandler @ 00183478 */
  local_70 = local_90;
  uVar2 = getGlobalFunction(param_1,"Object.defineProperty",local_90);
  if (local_70 == local_90) {
    lVar6 = 4;
    pppuVar3 = local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_00183180;
    lVar6 = 5;
    pppuVar3 = local_70;
  }
  (*(code *)(*pppuVar3)[lVar6])();
LAB_00183180:
  sVar4 = strlen(param_3);
  (**(code **)(*(long *)param_1 + 0x108))(&local_98,param_1,param_3,sVar4);
                    /* try { // try from 001831ac to 001831b7 has its CatchHandler @ 00183468 */
  (**(code **)(*(long *)param_1 + 0x130))(&local_b8,param_1);
  local_a0 = (undefined8 *)CONCAT17(cStack_b1,CONCAT25(uStack_b3,CONCAT41(uStack_b7,local_b8)));
  local_b8 = (basic_string)0x18;
  local_af = 0x656c6261;
  uStack_b7 = (undefined4)s_configurable_00137fa1._0_8_;
  uStack_b3 = SUB82(s_configurable_00137fa1._0_8_,4);
  cStack_b1 = SUB81(s_configurable_00137fa1._0_8_,6);
  cStack_b0 = SUB81(s_configurable_00137fa1._0_8_,7);
  local_ab = 0;
                    /* try { // try from 001831e8 to 001831f3 has its CatchHandler @ 00183410 */
  uVar5 = PropNameIDCache::get(param_1,&local_b8);
  local_c0 = *param_4;
  local_c8[0] = 2;
                    /* try { // try from 00183210 to 0018321f has its CatchHandler @ 00183400 */
  (**(code **)(*(long *)param_1 + 0x1b0))(param_1,&local_a0,uVar5,local_c8);
  facebook::jsi::Value::~Value((Value *)local_c8);
  if (((byte)local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  local_b8 = (basic_string)0x14;
  uStack_b7 = (undefined4)s_enumerable_00138690._0_8_;
  uStack_b3 = SUB82(s_enumerable_00138690._0_8_,4);
  cStack_b1 = SUB81(s_enumerable_00138690._0_8_,6);
  cStack_b0 = SUB81(s_enumerable_00138690._0_8_,7);
  local_af = CONCAT13(local_af._3_1_,0x656c);
                    /* try { // try from 0018325c to 00183267 has its CatchHandler @ 001833fc */
  uVar5 = PropNameIDCache::get(param_1,&local_b8);
  local_c0 = param_4[1];
  local_c8[0] = 2;
                    /* try { // try from 00183284 to 00183293 has its CatchHandler @ 001833f8 */
  (**(code **)(*(long *)param_1 + 0x1b0))(param_1,&local_a0,uVar5,local_c8);
  facebook::jsi::Value::~Value((Value *)local_c8);
  if (((byte)local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  local_b8 = (basic_string)0xa;
  uStack_b7 = 0x756c6176;
  uStack_b3 = 0x65;
                    /* try { // try from 001832c8 to 001832ef has its CatchHandler @ 001834b0 */
  uVar5 = PropNameIDCache::get(param_1,&local_b8);
  (**(code **)(*(long *)param_1 + 0x1b0))(param_1,&local_a0,uVar5,param_4 + 8);
  if (((byte)local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  local_af = local_af & 0xffffff00;
  local_b8 = (basic_string)0x10;
  uStack_b7 = 0x74697277;
  uStack_b3 = 0x6261;
  cStack_b1 = 0x6c;
  cStack_b0 = 0x65;
                    /* try { // try from 00183320 to 0018332b has its CatchHandler @ 001833f4 */
  uVar5 = PropNameIDCache::get(param_1,&local_b8);
  local_c0 = param_4[0x18];
  local_c8[0] = 2;
                    /* try { // try from 00183348 to 00183357 has its CatchHandler @ 001833f0 */
  (**(code **)(*(long *)param_1 + 0x1b0))(param_1,&local_a0,uVar5,local_c8);
  facebook::jsi::Value::~Value((Value *)local_c8);
  if (((byte)local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
                    /* try { // try from 00183374 to 0018338b has its CatchHandler @ 001833e8 */
  FUN_001844d8(aVStack_d8,uVar2,param_1,*(undefined8 *)param_2,&local_98,&local_a0);
  facebook::jsi::Value::~Value(aVStack_d8);
  if (local_a0 != (undefined8 *)0x0) {
    (**(code **)*local_a0)();
  }
  if (local_98 != (undefined8 *)0x0) {
    (**(code **)*local_98)();
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001834c0  margelo::nitro::CommonGlobals::getGlobalFunction =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* margelo::nitro::CommonGlobals::getGlobalFunction(facebook::jsi::Runtime&, char const*,
   std::__ndk1::function<facebook::jsi::Function (facebook::jsi::Runtime&)>) */

long * margelo::nitro::CommonGlobals::getGlobalFunction
                 (JSICache *param_1,char *param_2,long param_3)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  bool bVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  void *pvVar11;
  void *pvVar12;
  size_t sVar13;
  long *plVar14;
  Runtime *extraout_x1;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long *plVar22;
  char *pcVar23;
  ulong uVar24;
  char *pcVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  ulong uVar29;
  long *plVar30;
  long *plVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  long lVar34;
  undefined8 *puVar35;
  ulong unaff_x23;
  undefined8 *puVar36;
  char *pcVar37;
  long *plVar38;
  undefined2 uVar39;
  undefined8 uVar40;
  float fVar41;
  long *local_d0;
  long *local_c8;
  long local_c0;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  undefined8 *local_a0;
  ulong local_98;
  size_t sStack_90;
  char *local_88;
  long *local_80;
  long *plStack_78;
  undefined1 local_70;
  long local_68;
  
  puVar8 = PTR__cache_001ba190;
  uVar15 = (((((ulong)param_1 & 0xffffffff) >> 3 & 0x3ffffff) << 6 | 8) ^ (ulong)param_1 >> 0x20) *
           -0x622015f714c7d297;
  lVar6 = tpidr_el0;
  uVar16 = ((ulong)param_1 >> 0x20 ^ uVar15 >> 0x2f ^ uVar15) * -0x622015f714c7d297;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar15 = *(ulong *)(PTR__cache_001ba190 + 8);
  uVar16 = (uVar16 ^ uVar16 >> 0x2f) * -0x622015f714c7d297;
  if (uVar15 != 0) {
    uVar40 = NEON_cnt(uVar15,1);
    uVar39 = NEON_uaddlv(uVar40,1);
    uVar21 = CONCAT62((int6)((ulong)uVar40 >> 0x10),uVar39) & 0xffffffff;
    if (uVar21 < 2) {
      unaff_x23 = uVar16 & uVar15 - 1;
    }
    else {
      unaff_x23 = uVar16;
      if (uVar15 <= uVar16) {
        uVar24 = 0;
        if (uVar15 != 0) {
          uVar24 = uVar16 / uVar15;
        }
        unaff_x23 = uVar16 - uVar24 * uVar15;
      }
    }
    puVar20 = *(undefined8 **)(*(long *)PTR__cache_001ba190 + unaff_x23 * 8);
    if ((puVar20 != (undefined8 *)0x0) && (plVar31 = (long *)*puVar20, plVar31 != (long *)0x0)) {
      do {
        uVar24 = plVar31[1];
        if (uVar24 == uVar16) {
          if ((JSICache *)plVar31[2] == param_1) goto LAB_001838b8;
        }
        else {
          if (uVar21 < 2) {
            uVar24 = uVar24 & uVar15 - 1;
          }
          else if (uVar15 <= uVar24) {
            uVar18 = 0;
            if (uVar15 != 0) {
              uVar18 = uVar24 / uVar15;
            }
            uVar24 = uVar24 - uVar18 * uVar15;
          }
          if (uVar24 != unaff_x23) break;
        }
        plVar31 = (long *)*plVar31;
      } while (plVar31 != (long *)0x0);
    }
  }
  plVar31 = (long *)operator_new(0x40);
  lVar17 = *(long *)(puVar8 + 0x18);
  *plVar31 = 0;
  plVar31[1] = uVar16;
  plVar31[2] = (long)param_1;
  plVar31[4] = 0;
  plVar31[3] = 0;
  plVar31[6] = 0;
  plVar31[5] = 0;
  fVar41 = *(float *)(puVar8 + 0x20);
  *(undefined4 *)(plVar31 + 7) = 0x3f800000;
  if ((uVar15 == 0) || (fVar41 * (float)uVar15 < (float)(lVar17 + 1))) {
    if (uVar15 < 3) {
      uVar21 = 1;
    }
    else {
      uVar21 = (ulong)((uVar15 & uVar15 - 1) != 0);
    }
    uVar21 = uVar21 | uVar15 << 1;
    uVar24 = (ulong)((float)(lVar17 + 1) / fVar41);
    if (uVar21 <= uVar24) {
      uVar21 = uVar24;
    }
    if (uVar21 - 1 == 0) {
      uVar21 = 2;
    }
    else if ((uVar21 & uVar21 - 1) != 0) {
                    /* try { // try from 00183684 to 001836ab has its CatchHandler @ 0018443c */
      uVar21 = std::__ndk1::__next_prime(uVar21);
      uVar15 = *(ulong *)(puVar8 + 8);
    }
    if (uVar21 <= uVar15) {
      if (uVar21 < uVar15) {
        uVar24 = (ulong)((float)*(ulong *)(puVar8 + 0x18) / *(float *)(puVar8 + 0x20));
        if (uVar15 < 3) {
LAB_00183a94:
                    /* try { // try from 00183a94 to 00183a97 has its CatchHandler @ 0018443c */
          uVar24 = std::__ndk1::__next_prime(uVar24);
        }
        else {
          uVar40 = NEON_cnt(uVar15,1);
          uVar39 = NEON_uaddlv(uVar40,1);
          if (1 < (uint)CONCAT62((int6)((ulong)uVar40 >> 0x10),uVar39)) goto LAB_00183a94;
          if (1 < uVar24) {
            uVar24 = 1L << (-LZCOUNT(uVar24 - 1) & 0x3fU);
          }
        }
        if (uVar21 <= uVar24) {
          uVar21 = uVar24;
        }
        if (uVar21 < uVar15) {
          if (uVar21 != 0) goto LAB_0018369c;
          pvVar11 = *(void **)puVar8;
          *(undefined8 *)puVar8 = 0;
          if (pvVar11 != (void *)0x0) {
            operator_delete(pvVar11);
          }
          *(undefined8 *)(puVar8 + 8) = 0;
          uVar15 = 0;
        }
        else {
          uVar15 = *(ulong *)(puVar8 + 8);
        }
      }
LAB_00183814:
      if ((uVar15 & uVar15 - 1) == 0) {
        unaff_x23 = uVar15 - 1 & uVar16;
      }
      else {
        unaff_x23 = uVar16;
        if (uVar15 <= uVar16) {
          uVar21 = 0;
          if (uVar15 != 0) {
            uVar21 = uVar16 / uVar15;
          }
          unaff_x23 = uVar16 - uVar21 * uVar15;
        }
      }
      goto LAB_00183844;
    }
LAB_0018369c:
    if (uVar21 >> 0x3d == 0) {
      pvVar11 = operator_new(uVar21 << 3);
      pvVar12 = *(void **)puVar8;
      *(void **)puVar8 = pvVar11;
      if (pvVar12 != (void *)0x0) {
        operator_delete(pvVar12);
      }
      uVar15 = 0;
      *(ulong *)(puVar8 + 8) = uVar21;
      do {
        *(undefined8 *)(*(long *)puVar8 + uVar15 * 8) = 0;
        uVar15 = uVar15 + 1;
      } while (uVar21 != uVar15);
      plVar22 = *(long **)(puVar8 + 0x10);
      uVar15 = uVar21;
      if (plVar22 != (long *)0x0) {
        uVar24 = plVar22[1];
        uVar40 = NEON_cnt(uVar21,1);
        uVar39 = NEON_uaddlv(uVar40,1);
        uVar18 = CONCAT62((int6)((ulong)uVar40 >> 0x10),uVar39) & 0xffffffff;
        if (uVar18 < 2) {
          uVar24 = uVar24 & uVar21 - 1;
        }
        else if (uVar21 <= uVar24) {
          uVar29 = 0;
          if (uVar21 != 0) {
            uVar29 = uVar24 / uVar21;
          }
          uVar24 = uVar24 - uVar29 * uVar21;
        }
        *(undefined **)(*(long *)puVar8 + uVar24 * 8) = puVar8 + 0x10;
        plVar27 = (long *)*plVar22;
        if (plVar27 != (long *)0x0) {
          do {
            uVar29 = plVar27[1];
            if (uVar18 < 2) {
              uVar29 = uVar29 & uVar21 - 1;
            }
            else if (uVar21 <= uVar29) {
              uVar5 = 0;
              if (uVar21 != 0) {
                uVar5 = uVar29 / uVar21;
              }
              uVar29 = uVar29 - uVar5 * uVar21;
            }
            if (uVar29 != uVar24) {
              if (*(long *)(*(long *)puVar8 + uVar29 * 8) == 0) {
                *(long **)(*(long *)puVar8 + uVar29 * 8) = plVar22;
                uVar24 = uVar29;
              }
              else {
                *plVar22 = *plVar27;
                *plVar27 = **(long **)(*(long *)puVar8 + uVar29 * 8);
                **(undefined8 **)(*(long *)puVar8 + uVar29 * 8) = plVar27;
                plVar27 = plVar22;
              }
            }
            plVar22 = plVar27;
            plVar27 = (long *)*plVar22;
          } while (plVar27 != (long *)0x0);
        }
      }
      goto LAB_00183814;
    }
LAB_001843f4:
    if (*(long *)(lVar6 + 0x28) != local_68) goto LAB_001844d0;
                    /* try { // try from 00184408 to 0018440b has its CatchHandler @ 0018443c */
    FUN_0015d614();
  }
  else {
LAB_00183844:
    lVar17 = *(long *)puVar8;
    plVar22 = *(long **)(lVar17 + unaff_x23 * 8);
    if (plVar22 == (long *)0x0) {
      plVar22 = (long *)(puVar8 + 0x10);
      lVar34 = *plVar22;
      *plVar22 = (long)plVar31;
      *plVar31 = lVar34;
      *(long **)(lVar17 + unaff_x23 * 8) = plVar22;
      if (*plVar31 != 0) {
        uVar16 = *(ulong *)(*plVar31 + 8);
        if ((uVar15 & uVar15 - 1) == 0) {
          uVar16 = uVar16 & uVar15 - 1;
        }
        else if (uVar15 <= uVar16) {
          uVar21 = 0;
          if (uVar15 != 0) {
            uVar21 = uVar16 / uVar15;
          }
          uVar16 = uVar16 - uVar21 * uVar15;
        }
        plVar22 = (long *)(*(long *)puVar8 + uVar16 * 8);
        goto LAB_001838a8;
      }
    }
    else {
      *plVar31 = *plVar22;
LAB_001838a8:
      *plVar22 = (long)plVar31;
    }
    *(long *)(puVar8 + 0x18) = *(long *)(puVar8 + 0x18) + 1;
LAB_001838b8:
    sVar13 = strlen(param_2);
    if (0xffffffffffffffef < sVar13) {
      if (*(long *)(lVar6 + 0x28) != local_68) goto LAB_001844d0;
      FUN_0015d7fc();
LAB_001843ac:
      if (*(long *)(lVar6 + 0x28) != local_68) goto LAB_001844d0;
                    /* try { // try from 001843c0 to 001843c3 has its CatchHandler @ 001844a0 */
      FUN_0016c8f4();
LAB_001843c4:
      if (*(long *)(lVar6 + 0x28) != local_68) goto LAB_001844d0;
                    /* try { // try from 001843d8 to 001843f3 has its CatchHandler @ 0018445c */
      FUN_00184874();
LAB_001843dc:
      if (*(long *)(lVar6 + 0x28) != local_68) goto LAB_001844d0;
      FUN_0015d614();
      goto LAB_001843f4;
    }
    if (sVar13 < 0x17) {
      pcVar37 = (char *)((ulong)&local_98 | 1);
      local_98 = CONCAT71(local_98._1_7_,(char)((int)sVar13 << 1));
      if (sVar13 != 0) goto LAB_0018390c;
    }
    else {
      pcVar37 = (char *)operator_new((sVar13 | 0xf) + 1);
      local_98 = (sVar13 | 0xf) + 2;
      sStack_90 = sVar13;
      local_88 = pcVar37;
LAB_0018390c:
      memcpy(pcVar37,param_2,sVar13);
    }
    pcVar37[sVar13] = '\0';
    sVar13 = local_98 >> 1 & 0x7f;
    pcVar37 = (char *)((ulong)&local_98 | 1);
    if ((local_98 & 1) != 0) {
      sVar13 = sStack_90;
      pcVar37 = local_88;
    }
    uVar15 = FUN_0015c450(pcVar37,sVar13);
    uVar16 = plVar31[4];
    if (uVar16 != 0) {
      uVar40 = NEON_cnt(uVar16,1);
      uVar39 = NEON_uaddlv(uVar40,1);
      uVar21 = CONCAT62((int6)((ulong)uVar40 >> 0x10),uVar39) & 0xffffffff;
      if (uVar21 < 2) {
        uVar24 = uVar16 - 1 & uVar15;
      }
      else {
        uVar24 = uVar15;
        if (uVar16 <= uVar15) {
          uVar24 = 0;
          if (uVar16 != 0) {
            uVar24 = uVar15 / uVar16;
          }
          uVar24 = uVar15 - uVar24 * uVar16;
        }
      }
      plVar22 = *(long **)(plVar31[3] + uVar24 * 8);
      if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
        do {
          uVar18 = plVar22[1];
          if (uVar18 == uVar15) {
            bVar4 = *(byte *)(plVar22 + 2);
            uVar18 = (ulong)(bVar4 >> 1);
            sVar1 = uVar18;
            if ((bVar4 & 1) != 0) {
              sVar1 = plVar22[3];
            }
            if (sVar1 == sVar13) {
              if ((bVar4 & 1) == 0) {
                if (bVar4 < 2) {
LAB_00183a70:
                  plVar27 = (long *)plVar22[5];
                  plVar22 = (long *)plVar22[6];
                  if (plVar22 == (long *)0x0) {
                    if (plVar27 == (long *)0x0) break;
LAB_00183ad4:
                    bVar7 = false;
                    bVar9 = (*(byte *)(plVar22 + 2) & 1) == 0;
                  }
                  else {
                    bVar7 = true;
                    FUN_0015bb40(1,plVar22);
                    if (plVar27 != (long *)0x0) goto LAB_00183ad4;
                    bVar9 = false;
                  }
                  uVar15 = FUN_0015bb40(0xffffffffffffffff,plVar22);
                  if ((uVar15 < 2) && ((*(byte *)(plVar22 + 2) & 1) == 0)) {
                    if (!bVar7) {
                      if ((undefined8 *)*plVar27 != (undefined8 *)0x0) {
                        (*(code *)**(undefined8 **)*plVar27)();
                      }
                      operator_delete(plVar27);
                    }
                    *(undefined4 *)(plVar22 + 2) = 1;
                  }
                  if ((*plVar22 == 0) && (plVar22[1] == 0)) {
                    std::__ndk1::mutex::~mutex((mutex *)((long)plVar22 + 0x14));
                    operator_delete(plVar22);
                  }
                  if (bVar9) goto LAB_001842f0;
                  break;
                }
                pcVar23 = (char *)((long)plVar22 + 0x11);
                pcVar25 = pcVar37;
                while (*pcVar23 == *pcVar25) {
                  uVar18 = uVar18 - 1;
                  pcVar23 = pcVar23 + 1;
                  pcVar25 = pcVar25 + 1;
                  if (uVar18 == 0) goto LAB_00183a70;
                }
              }
              else {
                iVar10 = memcmp((void *)plVar22[4],pcVar37,plVar22[3]);
                if (iVar10 == 0) goto LAB_00183a70;
              }
            }
          }
          else {
            if (uVar21 < 2) {
              uVar18 = uVar18 & uVar16 - 1;
            }
            else if (uVar16 <= uVar18) {
              uVar29 = 0;
              if (uVar16 != 0) {
                uVar29 = uVar18 / uVar16;
              }
              uVar18 = uVar18 - uVar29 * uVar16;
            }
            if (uVar18 != uVar24) break;
          }
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
      }
    }
    plVar22 = *(long **)(param_3 + 0x20);
    if (plVar22 == (long *)0x0) goto LAB_001843ac;
                    /* try { // try from 00183b70 to 00183b7b has its CatchHandler @ 001844a0 */
    (**(code **)(*plVar22 + 0x30))(&local_a0,plVar22,param_1);
    local_b0 = (long *)0x0;
    local_a8 = (long *)0x0;
                    /* try { // try from 00183b80 to 00183b8b has its CatchHandler @ 00184454 */
    JSICache::getOrCreateCache(param_1,extraout_x1);
                    /* try { // try from 00183b8c to 00183baf has its CatchHandler @ 00184474 */
    plVar22 = (long *)operator_new(8);
    puVar20 = local_a0;
    local_a0 = (undefined8 *)0x0;
    *plVar22 = (long)puVar20;
    local_d0 = plVar22;
    local_c8 = (long *)operator_new(0x40);
    *(undefined1 *)(local_c8 + 2) = 0;
    lVar34 = _UNK_00138c28;
    lVar17 = _DAT_00138c20;
    *(undefined8 *)((long)local_c8 + 0x34) = 0;
    local_c8[1] = lVar34;
    *local_c8 = lVar17;
    *(undefined8 *)((long)local_c8 + 0x1c) = 0;
    *(undefined8 *)((long)local_c8 + 0x14) = 0;
    *(undefined8 *)((long)local_c8 + 0x2c) = 0;
    *(undefined8 *)((long)local_c8 + 0x24) = 0;
    local_80 = plVar22;
    plStack_78 = local_c8;
    FUN_0015bb40(1,local_c8 + 1);
    puVar20 = *(undefined8 **)(local_c0 + 0x68);
    if (*(undefined8 **)(local_c0 + 0x70) <= puVar20) {
      lVar34 = (long)puVar20 - *(long *)(local_c0 + 0x60);
      lVar17 = lVar34 >> 4;
      uVar15 = lVar17 + 1;
      if (uVar15 >> 0x3c != 0) goto LAB_001843c4;
      uVar21 = (long)*(undefined8 **)(local_c0 + 0x70) - *(long *)(local_c0 + 0x60);
      uVar16 = (long)uVar21 >> 3;
      if (uVar16 <= uVar15) {
        uVar16 = uVar15;
      }
      if (0x7fffffffffffffef < uVar21) {
        uVar16 = 0xfffffffffffffff;
      }
      if (uVar16 >> 0x3c == 0) {
                    /* try { // try from 00183c48 to 00183c4b has its CatchHandler @ 0018445c */
        pvVar12 = operator_new(uVar16 << 4);
        plVar27 = plStack_78;
        plVar22 = local_80;
        puVar20 = (undefined8 *)((long)pvVar12 + lVar34);
        pvVar11 = (void *)((long)pvVar12 + uVar16 * 0x10);
        local_80 = (long *)0x0;
        plStack_78 = (long *)0x0;
        puVar36 = puVar20 + 2;
        *puVar20 = plVar22;
        *(long **)((long)pvVar12 + lVar17 * 0x10 + 8) = plVar27;
        puVar3 = *(undefined8 **)(local_c0 + 0x60);
        puVar33 = *(undefined8 **)(local_c0 + 0x68);
        if (puVar33 == puVar3) {
          *(undefined8 **)(local_c0 + 0x60) = puVar20;
          *(undefined8 **)(local_c0 + 0x68) = puVar36;
          *(void **)(local_c0 + 0x70) = pvVar11;
        }
        else {
          do {
            puVar32 = puVar33 + -2;
            puVar35 = puVar20 + -2;
            *puVar35 = *puVar32;
            lVar17 = puVar33[-1];
            puVar20[-1] = lVar17;
            if (lVar17 != 0) {
              FUN_0015bb40(1,lVar17 + 8);
            }
            puVar33 = puVar32;
            puVar20 = puVar35;
          } while (puVar32 != puVar3);
          puVar33 = *(undefined8 **)(local_c0 + 0x60);
          puVar20 = *(undefined8 **)(local_c0 + 0x68);
          *(undefined8 **)(local_c0 + 0x60) = puVar35;
          *(undefined8 **)(local_c0 + 0x68) = puVar36;
          *(void **)(local_c0 + 0x70) = pvVar11;
          while (puVar20 != puVar33) {
            plVar22 = puVar20 + -1;
            puVar20 = puVar20 + -2;
            if (*plVar22 != 0) {
              FUN_0015bb40(0xffffffffffffffff,*plVar22 + 8);
                    /* try { // try from 00183e40 to 00183e47 has its CatchHandler @ 001844d4 */
              FUN_0017b6f4(puVar20);
            }
          }
        }
        if (puVar33 != (undefined8 *)0x0) {
          operator_delete(puVar33);
        }
        *(undefined8 **)(local_c0 + 0x68) = puVar36;
        if (plStack_78 != (long *)0x0) {
          FUN_0015bb40(0xffffffffffffffff,plStack_78 + 1);
                    /* try { // try from 00183ce8 to 00183cef has its CatchHandler @ 00184424 */
          FUN_0017b6f4(&local_80);
        }
        goto LAB_00183cf0;
      }
      goto LAB_001843dc;
    }
    puVar20[1] = plStack_78;
    *puVar20 = local_80;
    *(undefined8 **)(local_c0 + 0x68) = puVar20 + 2;
LAB_00183cf0:
    FUN_00184678(&local_b0,&local_d0);
    if (local_c8 != (long *)0x0) {
      uVar15 = FUN_0015bb40(0xffffffffffffffff);
      plVar22 = local_d0;
      if (uVar15 < 2) {
        if ((*(byte *)(local_c8 + 2) & 1) == 0) {
          if (local_d0 != (long *)0x0) {
            if ((undefined8 *)*local_d0 != (undefined8 *)0x0) {
              (*(code *)**(undefined8 **)*local_d0)();
            }
            operator_delete(plVar22);
          }
          local_d0 = (long *)0x0;
          *(undefined4 *)(local_c8 + 2) = 1;
          goto LAB_00183d5c;
        }
        lVar17 = *local_c8;
        plVar22 = local_c8;
      }
      else {
LAB_00183d5c:
        lVar17 = *local_c8;
        plVar22 = local_c8;
      }
      local_c8 = plVar22;
      if (((lVar17 == 0) && (plVar22[1] == 0)) && (plVar22 != (long *)0x0)) {
        std::__ndk1::mutex::~mutex((mutex *)((long)plVar22 + 0x14));
        operator_delete(plVar22);
      }
    }
    std::__ndk1::mutex::unlock();
    if ((local_b8 != (long *)0x0) &&
       (lVar17 = FUN_0015bb40(0xffffffffffffffff,local_b8 + 1), lVar17 == 0)) {
      (**(code **)(*local_b8 + 0x10))(local_b8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    pcVar23 = local_88;
    sVar1 = sStack_90;
    uVar15 = local_98;
    sVar13 = local_98 >> 1 & 0x7f;
    pcVar37 = (char *)((ulong)&local_98 | 1);
    if ((local_98 & 1) != 0) {
      sVar13 = sStack_90;
      pcVar37 = local_88;
    }
    plVar14 = (long *)FUN_0015c450(pcVar37,sVar13);
    plVar27 = (long *)plVar31[4];
    plVar22 = local_b8;
    if (plVar27 != (long *)0x0) {
      uVar40 = NEON_cnt(plVar27,1);
      uVar39 = NEON_uaddlv(uVar40,1);
      uVar16 = CONCAT62((int6)((ulong)uVar40 >> 0x10),uVar39) & 0xffffffff;
      if (uVar16 < 2) {
        plVar22 = (long *)((long)plVar27 - 1U & (ulong)plVar14);
      }
      else {
        plVar22 = plVar14;
        if (plVar27 <= plVar14) {
          uVar21 = 0;
          if (plVar27 != (long *)0x0) {
            uVar21 = (ulong)plVar14 / (ulong)plVar27;
          }
          plVar22 = (long *)((long)plVar14 - uVar21 * (long)plVar27);
        }
      }
      puVar20 = *(undefined8 **)(plVar31[3] + (long)plVar22 * 8);
      if ((puVar20 != (undefined8 *)0x0) && (plVar38 = (long *)*puVar20, plVar38 != (long *)0x0)) {
        do {
          plVar19 = (long *)plVar38[1];
          if (plVar19 == plVar14) {
            bVar4 = *(byte *)(plVar38 + 2);
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar38[3];
            }
            if (sVar2 == sVar13) {
              if ((bVar4 & 1) == 0) {
                if (bVar4 < 2) goto LAB_00184240;
                uVar21 = 0;
                while (*(char *)((long)plVar38 + uVar21 + 0x11) == pcVar37[uVar21]) {
                  uVar21 = uVar21 + 1;
                  if (bVar4 >> 1 == uVar21) goto LAB_00184240;
                }
              }
              else {
                iVar10 = memcmp((void *)plVar38[4],pcVar37,plVar38[3]);
                if (iVar10 == 0) goto LAB_00184240;
              }
            }
          }
          else {
            if (uVar16 < 2) {
              plVar19 = (long *)((ulong)plVar19 & (long)plVar27 - 1U);
            }
            else if (plVar27 <= plVar19) {
              uVar21 = 0;
              if (plVar27 != (long *)0x0) {
                uVar21 = (ulong)plVar19 / (ulong)plVar27;
              }
              plVar19 = (long *)((long)plVar19 - uVar21 * (long)plVar27);
            }
            if (plVar19 != plVar22) break;
          }
          plVar38 = (long *)*plVar38;
        } while (plVar38 != (long *)0x0);
      }
    }
                    /* try { // try from 00183f50 to 00183f57 has its CatchHandler @ 00184450 */
    plVar19 = (long *)operator_new(0x38);
    plVar38 = plVar31 + 5;
    local_70 = 0;
    *plVar19 = 0;
    plVar19[1] = (long)plVar14;
    local_80 = plVar19;
    plStack_78 = plVar38;
    if ((uVar15 & 1) == 0) {
      plVar19[3] = sStack_90;
      plVar19[2] = local_98;
      plVar19[4] = (long)local_88;
    }
    else {
                    /* try { // try from 00183f84 to 00183f93 has its CatchHandler @ 00184428 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (plVar19 + 2),pcVar23,sVar1);
    }
    plVar19[5] = 0;
    plVar19[6] = 0;
    local_70 = 1;
    if ((plVar27 != (long *)0x0) &&
       ((float)(plVar31[6] + 1) <= *(float *)(plVar31 + 7) * (float)plVar27)) {
LAB_001841c8:
      plVar14 = *(long **)(plVar31[3] + (long)plVar22 * 8);
      if (plVar14 == (long *)0x0) {
        *local_80 = plVar31[5];
        plVar31[5] = (long)local_80;
        *(long **)(plVar31[3] + (long)plVar22 * 8) = plVar38;
        if (*local_80 != 0) {
          plVar22 = *(long **)(*local_80 + 8);
          if (((ulong)plVar27 & (long)plVar27 - 1U) == 0) {
            plVar22 = (long *)((ulong)plVar22 & (long)plVar27 - 1U);
          }
          else if (plVar27 <= plVar22) {
            uVar15 = 0;
            if (plVar27 != (long *)0x0) {
              uVar15 = (ulong)plVar22 / (ulong)plVar27;
            }
            plVar22 = (long *)((long)plVar22 - uVar15 * (long)plVar27);
          }
          plVar14 = (long *)(plVar31[3] + (long)plVar22 * 8);
          goto LAB_00184230;
        }
      }
      else {
        *local_80 = *plVar14;
LAB_00184230:
        *plVar14 = (long)local_80;
      }
      plVar31[6] = plVar31[6] + 1;
      plVar38 = local_80;
LAB_00184240:
      FUN_00184678(plVar38 + 5,&local_b0);
      plVar27 = local_b0;
      if (local_a8 != (long *)0x0) {
        uVar15 = FUN_0015bb40(0xffffffffffffffff);
        plVar31 = local_b0;
        if (uVar15 < 2) {
          if ((*(byte *)(local_a8 + 2) & 1) == 0) {
            if (local_b0 != (long *)0x0) {
              if ((undefined8 *)*local_b0 != (undefined8 *)0x0) {
                (*(code *)**(undefined8 **)*local_b0)();
              }
              operator_delete(plVar31);
            }
            local_b0 = (long *)0x0;
            *(undefined4 *)(local_a8 + 2) = 1;
            goto LAB_001842ac;
          }
          lVar17 = *local_a8;
          plVar31 = local_a8;
        }
        else {
LAB_001842ac:
          lVar17 = *local_a8;
          plVar31 = local_a8;
        }
        local_a8 = plVar31;
        if (((lVar17 == 0) && (plVar31[1] == 0)) && (plVar31 != (long *)0x0)) {
          std::__ndk1::mutex::~mutex((mutex *)((long)plVar31 + 0x14));
          operator_delete(plVar31);
        }
      }
      if (local_a0 != (undefined8 *)0x0) {
        (**(code **)*local_a0)();
      }
LAB_001842f0:
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      if (*(long *)(lVar6 + 0x28) == local_68) {
        return plVar27;
      }
      goto LAB_001844d0;
    }
    if (plVar27 < (long *)0x3) {
      uVar15 = 1;
    }
    else {
      uVar15 = (ulong)(((ulong)plVar27 & (long)plVar27 - 1U) != 0);
    }
    plVar22 = (long *)(uVar15 | (long)plVar27 << 1);
    plVar27 = (long *)(long)((float)(plVar31[6] + 1) / *(float *)(plVar31 + 7));
    if (plVar22 <= plVar27) {
      plVar22 = plVar27;
    }
    if ((long)plVar22 - 1U == 0) {
      plVar22 = (long *)0x2;
    }
    else if (((ulong)plVar22 & (long)plVar22 - 1U) != 0) {
                    /* try { // try from 00184010 to 00184037 has its CatchHandler @ 0018442c */
      plVar22 = (long *)std::__ndk1::__next_prime((ulong)plVar22);
    }
    plVar27 = (long *)plVar31[4];
    if (plVar22 <= plVar27) {
      if (plVar22 < plVar27) {
        plVar19 = (long *)(long)((float)(ulong)plVar31[6] / *(float *)(plVar31 + 7));
        if (plVar27 < (long *)0x3) {
LAB_00184338:
                    /* try { // try from 00184338 to 0018433b has its CatchHandler @ 0018442c */
          plVar19 = (long *)std::__ndk1::__next_prime((ulong)plVar19);
        }
        else {
          uVar40 = NEON_cnt(plVar27,1);
          uVar39 = NEON_uaddlv(uVar40,1);
          if (1 < (uint)CONCAT62((int6)((ulong)uVar40 >> 0x10),uVar39)) goto LAB_00184338;
          if ((long *)0x1 < plVar19) {
            plVar19 = (long *)(1L << (-LZCOUNT((long)plVar19 - 1) & 0x3fU));
          }
        }
        if (plVar22 <= plVar19) {
          plVar22 = plVar19;
        }
        if (plVar22 < plVar27) {
          if (plVar22 != (long *)0x0) goto LAB_00184028;
          pvVar11 = (void *)plVar31[3];
          plVar31[3] = 0;
          if (pvVar11 != (void *)0x0) {
            operator_delete(pvVar11);
          }
          plVar31[4] = 0;
          plVar27 = (long *)0x0;
        }
        else {
          plVar27 = (long *)plVar31[4];
        }
      }
LAB_0018419c:
      if (((ulong)plVar27 & (long)plVar27 - 1U) == 0) {
        plVar22 = (long *)((long)plVar27 - 1U & (ulong)plVar14);
      }
      else {
        plVar22 = plVar14;
        if (plVar27 <= plVar14) {
          uVar15 = 0;
          if (plVar27 != (long *)0x0) {
            uVar15 = (ulong)plVar14 / (ulong)plVar27;
          }
          plVar22 = (long *)((long)plVar14 - uVar15 * (long)plVar27);
        }
      }
      goto LAB_001841c8;
    }
LAB_00184028:
    if ((ulong)plVar22 >> 0x3d == 0) {
      pvVar11 = operator_new((long)plVar22 << 3);
      pvVar12 = (void *)plVar31[3];
      plVar31[3] = (long)pvVar11;
      if (pvVar12 != (void *)0x0) {
        operator_delete(pvVar12);
      }
      plVar27 = (long *)0x0;
      plVar31[4] = (long)plVar22;
      do {
        *(undefined8 *)(plVar31[3] + (long)plVar27 * 8) = 0;
        plVar27 = (long *)((long)plVar27 + 1);
      } while (plVar22 != plVar27);
      plVar19 = (long *)*plVar38;
      plVar27 = plVar22;
      if (plVar19 != (long *)0x0) {
        plVar26 = (long *)plVar19[1];
        uVar40 = NEON_cnt(plVar22,1);
        uVar39 = NEON_uaddlv(uVar40,1);
        uVar15 = CONCAT62((int6)((ulong)uVar40 >> 0x10),uVar39) & 0xffffffff;
        if (uVar15 < 2) {
          plVar26 = (long *)((ulong)plVar26 & (long)plVar22 - 1U);
        }
        else if (plVar22 <= plVar26) {
          uVar16 = 0;
          if (plVar22 != (long *)0x0) {
            uVar16 = (ulong)plVar26 / (ulong)plVar22;
          }
          plVar26 = (long *)((long)plVar26 - uVar16 * (long)plVar22);
        }
        *(long **)(plVar31[3] + (long)plVar26 * 8) = plVar38;
        plVar28 = (long *)*plVar19;
        if (plVar28 != (long *)0x0) {
          do {
            plVar30 = (long *)plVar28[1];
            if (uVar15 < 2) {
              plVar30 = (long *)((ulong)plVar30 & (long)plVar22 - 1U);
            }
            else if (plVar22 <= plVar30) {
              uVar16 = 0;
              if (plVar22 != (long *)0x0) {
                uVar16 = (ulong)plVar30 / (ulong)plVar22;
              }
              plVar30 = (long *)((long)plVar30 - uVar16 * (long)plVar22);
            }
            if (plVar30 != plVar26) {
              if (*(long *)(plVar31[3] + (long)plVar30 * 8) == 0) {
                *(long **)(plVar31[3] + (long)plVar30 * 8) = plVar19;
                plVar26 = plVar30;
              }
              else {
                *plVar19 = *plVar28;
                *plVar28 = **(long **)(plVar31[3] + (long)plVar30 * 8);
                **(undefined8 **)(plVar31[3] + (long)plVar30 * 8) = plVar28;
                plVar28 = plVar19;
              }
            }
            plVar19 = plVar28;
            plVar28 = (long *)*plVar19;
          } while (plVar28 != (long *)0x0);
        }
      }
      goto LAB_0018419c;
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* try { // try from 00184420 to 00184423 has its CatchHandler @ 0018442c */
    FUN_0015d614();
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00183ce8 with catch @ 00184424 */
    FUN_0015c8c8();
  }
LAB_001844d0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001844d8  FUN_001844d8 =====

void FUN_001844d8(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  long lVar1;
  undefined4 local_98 [4];
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined4 local_68 [2];
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_88[0] = 7;
                    /* try { // try from 00184524 to 0018452f has its CatchHandler @ 00184650 */
  local_80 = (**(code **)(*param_3 + 0x88))(param_3,param_4);
  local_78[0] = 6;
                    /* try { // try from 00184550 to 00184557 has its CatchHandler @ 00184628 */
  local_70 = (**(code **)(*param_3 + 0x80))(param_3,*param_5);
  local_68[0] = 7;
                    /* try { // try from 00184574 to 0018457b has its CatchHandler @ 0018461c */
  local_60 = (**(code **)(*param_3 + 0x88))(param_3,*param_6);
  local_98[0] = 0;
                    /* try { // try from 0018458c to 001845a7 has its CatchHandler @ 001845f4 */
  (**(code **)(*param_3 + 0x280))(param_1,param_3,param_2,local_98,local_88,3);
  facebook::jsi::Value::~Value((Value *)local_98);
  facebook::jsi::Value::~Value((Value *)local_68);
  facebook::jsi::Value::~Value((Value *)local_78);
  facebook::jsi::Value::~Value((Value *)local_88);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00184678  FUN_00184678 =====

undefined8 * FUN_00184678(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  if (param_1 != param_2) {
    if (param_1[1] != 0) {
      uVar3 = FUN_0015bb40(0xffffffffffffffff);
      if ((uVar3 < 2) && ((*(byte *)(param_1[1] + 0x10) & 1) == 0)) {
        plVar5 = (long *)*param_1;
        if (plVar5 != (long *)0x0) {
          if ((undefined8 *)*plVar5 != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)*plVar5)();
          }
          operator_delete(plVar5);
        }
        *param_1 = 0;
        *(undefined4 *)(param_1[1] + 0x10) = 1;
      }
      if ((*(long *)param_1[1] == 0) && (*(long *)(param_1[1] + 8) == 0)) {
        pvVar6 = (void *)param_1[1];
        if (pvVar6 != (void *)0x0) {
          std::__ndk1::mutex::~mutex((mutex *)((long)pvVar6 + 0x14));
          operator_delete(pvVar6);
        }
        param_1[1] = 0;
      }
    }
    lVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      FUN_0015bb40(1);
    }
  }
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00184780  FUN_00184780 =====

void FUN_00184780(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  pvVar3 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar3 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else {
    if ((*(char *)(param_1 + 2) != '\0') &&
       (FUN_0017bc30((long)pvVar3 + 0x28), (*(byte *)((long)pvVar3 + 0x10) & 1) != 0)) {
      operator_delete(*(void **)((long)pvVar3 + 0x20));
    }
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      operator_delete(pvVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00184810  FUN_00184810 =====

void FUN_00184810(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_0015bb40(0xffffffffffffffff,*(long *)(param_1 + 8) + 8);
                    /* try { // try from 00184844 to 0018484b has its CatchHandler @ 00184870 */
    FUN_0017b6f4(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00184874  FUN_00184874 =====

void FUN_00184874(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_0015d71c("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001848ac  FUN_001848ac =====

void FUN_001848ac(char param_1,void *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  if (param_1 == '\0') {
    if (param_2 == (void *)0x0) {
      if (*(long *)(lVar1 + 0x28) == lVar4) {
        return;
      }
      goto LAB_00184974;
    }
  }
  else {
    puVar2 = (undefined8 *)*(void **)((long)param_2 + 0x28);
    while (puVar2 != (undefined8 *)0x0) {
      pvVar3 = (void *)*puVar2;
      FUN_0017bc30(puVar2 + 5);
      if ((*(byte *)(puVar2 + 2) & 1) != 0) {
        operator_delete((void *)puVar2[4]);
      }
      operator_delete(puVar2);
      puVar2 = (undefined8 *)pvVar3;
    }
    pvVar3 = *(void **)((long)param_2 + 0x18);
    *(undefined8 *)((long)param_2 + 0x18) = 0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_2);
    return;
  }
LAB_00184974:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00184978  FUN_00184978 =====

void FUN_00184978(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001849b0  FUN_001849b0 =====

void FUN_001849b0(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001849e8  FUN_001849e8 =====

void FUN_001849e8(void)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    puVar2 = (undefined8 *)operator_new(0x10);
    *puVar2 = &PTR_FUN_001b7c40;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00184a34  FUN_00184a34 =====

void FUN_00184a34(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_001b7c40;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00184a78  FUN_00184a78 =====

void FUN_00184a78(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00184ab0  FUN_00184ab0 =====

void FUN_00184ab0(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00184ae8  FUN_00184ae8 =====

void FUN_00184ae8(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_2 + 0x30))(&local_48,param_2);
                    /* try { // try from 00184b24 to 00184b3b has its CatchHandler @ 00184bc0 */
  facebook::jsi::Object::getPropertyAsObject((IRuntime *)&local_48,(char *)param_2);
                    /* try { // try from 00184b3c to 00184b53 has its CatchHandler @ 00184ba0 */
  facebook::jsi::Object::getPropertyAsFunction((IRuntime *)&local_40,(char *)param_2);
  if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)();
  }
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00184bf4  FUN_00184bf4 =====

void FUN_00184bf4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZN7margelo5nitro13CommonGlobals6Object14definePropertyERN8facebook3jsi7RuntimeERKNS4_6ObjectEPKcONS0_23PlainPropertyDescriptorEE3$_0"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00184c44  FUN_00184c44 =====

pointer_____offset_0x10___ * FUN_00184c44(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_001b7cb0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00184c84  margelo::nitro::CommonGlobals::Object::defineProperty =====

/* margelo::nitro::CommonGlobals::Object::defineProperty(facebook::jsi::Runtime&,
   facebook::jsi::Object const&, char const*, margelo::nitro::ComputedReadonlyPropertyDescriptor&&)
    */

void margelo::nitro::CommonGlobals::Object::defineProperty
               (Runtime *param_1,Object *param_2,char *param_3,
               ComputedReadonlyPropertyDescriptor *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined ***pppuVar3;
  size_t sVar4;
  undefined8 uVar5;
  long lVar6;
  Value aVStack_d8 [16];
  basic_string local_c8;
  undefined4 uStack_c7;
  undefined4 uStack_c3;
  undefined4 local_bf;
  undefined1 local_bb;
  void *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined4 local_a0 [2];
  undefined8 local_98;
  undefined **local_90 [4];
  undefined ***local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_90[0] = &PTR_FUN_001b7cd0;
                    /* try { // try from 00184cd0 to 00184cdf has its CatchHandler @ 00184fe8 */
  local_70 = local_90;
  uVar2 = getGlobalFunction(param_1,"Object.defineProperty",local_90);
  if (local_70 == local_90) {
    lVar6 = 4;
    pppuVar3 = local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_00184d10;
    lVar6 = 5;
    pppuVar3 = local_70;
  }
  (*(code *)(*pppuVar3)[lVar6])();
LAB_00184d10:
  sVar4 = strlen(param_3);
  (**(code **)(*(long *)param_1 + 0x108))(&local_a8,param_1,param_3,sVar4);
                    /* try { // try from 00184d3c to 00184d47 has its CatchHandler @ 00184fb4 */
  (**(code **)(*(long *)param_1 + 0x130))(&local_c8,param_1);
  local_b0 = (undefined8 *)CONCAT35((undefined3)uStack_c3,CONCAT41(uStack_c7,local_c8));
  local_c8 = (basic_string)0x18;
  local_bf = 0x656c6261;
  uStack_c7 = (undefined4)s_configurable_00137fa1._0_8_;
  uStack_c3 = SUB84(s_configurable_00137fa1._0_8_,4);
  local_bb = 0;
                    /* try { // try from 00184d78 to 00184d83 has its CatchHandler @ 00184f6c */
  uVar5 = PropNameIDCache::get(param_1,&local_c8);
  local_a0[0] = 2;
  local_98 = CONCAT71(local_98._1_7_,*param_4);
                    /* try { // try from 00184da0 to 00184daf has its CatchHandler @ 00184f5c */
  (**(code **)(*(long *)param_1 + 0x1b0))(param_1,&local_b0,uVar5,local_a0);
  facebook::jsi::Value::~Value((Value *)local_a0);
  if (((byte)local_c8 & 1) != 0) {
    operator_delete(local_b8);
  }
  local_c8 = (basic_string)0x14;
  uStack_c7 = (undefined4)s_enumerable_00138690._0_8_;
  uStack_c3 = SUB84(s_enumerable_00138690._0_8_,4);
  local_bf = CONCAT13(local_bf._3_1_,0x656c);
                    /* try { // try from 00184dec to 00184df7 has its CatchHandler @ 00184f58 */
  uVar5 = PropNameIDCache::get(param_1,&local_c8);
  local_a0[0] = 2;
  local_98 = CONCAT71(local_98._1_7_,param_4[1]);
                    /* try { // try from 00184e14 to 00184e23 has its CatchHandler @ 00184f54 */
  (**(code **)(*(long *)param_1 + 0x1b0))(param_1,&local_b0,uVar5,local_a0);
  facebook::jsi::Value::~Value((Value *)local_a0);
  if (((byte)local_c8 & 1) != 0) {
    operator_delete(local_b8);
  }
  local_c8 = (basic_string)0x6;
  uStack_c7 = 0x746567;
                    /* try { // try from 00184e50 to 00184e5b has its CatchHandler @ 00184f50 */
  uVar5 = PropNameIDCache::get(param_1,&local_c8);
  local_a0[0] = 7;
                    /* try { // try from 00184e74 to 00184e7b has its CatchHandler @ 00184f40 */
  local_98 = (**(code **)(*(long *)param_1 + 0x88))(param_1,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 00184e88 to 00184e9b has its CatchHandler @ 00184f3c */
  (**(code **)(*(long *)param_1 + 0x1b0))(param_1,&local_b0,uVar5,local_a0);
  facebook::jsi::Value::~Value((Value *)local_a0);
  if (((byte)local_c8 & 1) != 0) {
    operator_delete(local_b8);
  }
                    /* try { // try from 00184eb8 to 00184ecf has its CatchHandler @ 00184f2c */
  FUN_001844d8(aVStack_d8,uVar2,param_1,*(undefined8 *)param_2,&local_a8,&local_b0);
  facebook::jsi::Value::~Value(aVStack_d8);
  if (local_b0 != (undefined8 *)0x0) {
    (**(code **)*local_b0)();
  }
  if (local_a8 != (undefined8 *)0x0) {
    (**(code **)*local_a8)();
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00185020  FUN_00185020 =====

void FUN_00185020(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00185058  FUN_00185058 =====

void FUN_00185058(void)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    puVar2 = (undefined8 *)operator_new(0x10);
    *puVar2 = &PTR_FUN_001b7cd0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001850a4  FUN_001850a4 =====

void FUN_001850a4(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_001b7cd0;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001850e8  FUN_001850e8 =====

void FUN_001850e8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00185120  FUN_00185120 =====

void FUN_00185120(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00185158  FUN_00185158 =====

void FUN_00185158(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_2 + 0x30))(&local_48,param_2);
                    /* try { // try from 00185194 to 001851ab has its CatchHandler @ 00185230 */
  facebook::jsi::Object::getPropertyAsObject((IRuntime *)&local_48,(char *)param_2);
                    /* try { // try from 001851ac to 001851c3 has its CatchHandler @ 00185210 */
  facebook::jsi::Object::getPropertyAsFunction((IRuntime *)&local_40,(char *)param_2);
  if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)();
  }
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00185264  FUN_00185264 =====

void FUN_00185264(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZN7margelo5nitro13CommonGlobals6Object14definePropertyERN8facebook3jsi7RuntimeERKNS4_6ObjectEPKcONS0_34ComputedReadonlyPropertyDescriptorEE3$_0"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 001852b4  FUN_001852b4 =====

pointer_____offset_0x10___ * FUN_001852b4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_001b7d30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001852f4  margelo::nitro::CommonGlobals::Object::defineProperty =====

/* margelo::nitro::CommonGlobals::Object::defineProperty(facebook::jsi::Runtime&,
   facebook::jsi::Object const&, char const*, margelo::nitro::ComputedPropertyDescriptor&&) */

void margelo::nitro::CommonGlobals::Object::defineProperty
               (Runtime *param_1,Object *param_2,char *param_3,ComputedPropertyDescriptor *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined ***pppuVar3;
  size_t sVar4;
  undefined8 uVar5;
  long lVar6;
  Value aVStack_d8 [16];
  basic_string local_c8;
  undefined4 uStack_c7;
  undefined4 uStack_c3;
  undefined4 local_bf;
  undefined1 local_bb;
  void *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined4 local_a0 [2];
  undefined8 local_98;
  undefined **local_90 [4];
  undefined ***local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_90[0] = &PTR_FUN_001b7d50;
                    /* try { // try from 00185340 to 0018534f has its CatchHandler @ 001856dc */
  local_70 = local_90;
  uVar2 = getGlobalFunction(param_1,"Object.defineProperty",local_90);
  if (local_70 == local_90) {
    lVar6 = 4;
    pppuVar3 = local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_00185380;
    lVar6 = 5;
    pppuVar3 = local_70;
  }
  (*(code *)(*pppuVar3)[lVar6])();
LAB_00185380:
  sVar4 = strlen(param_3);
  (**(code **)(*(long *)param_1 + 0x108))(&local_a8,param_1,param_3,sVar4);
                    /* try { // try from 001853ac to 001853b7 has its CatchHandler @ 001856cc */
  (**(code **)(*(long *)param_1 + 0x130))(&local_c8,param_1);
  local_b0 = (undefined8 *)CONCAT35((undefined3)uStack_c3,CONCAT41(uStack_c7,local_c8));
  local_c8 = (basic_string)0x18;
  local_bf = 0x656c6261;
  uStack_c7 = (undefined4)s_configurable_00137fa1._0_8_;
  uStack_c3 = SUB84(s_configurable_00137fa1._0_8_,4);
  local_bb = 0;
                    /* try { // try from 001853e8 to 001853f3 has its CatchHandler @ 00185660 */
  uVar5 = PropNameIDCache::get(param_1,&local_c8);
  local_a0[0] = 2;
  local_98 = CONCAT71(local_98._1_7_,*param_4);
                    /* try { // try from 00185410 to 0018541f has its CatchHandler @ 00185650 */
  (**(code **)(*(long *)param_1 + 0x1b0))(param_1,&local_b0,uVar5,local_a0);
  facebook::jsi::Value::~Value((Value *)local_a0);
  if (((byte)local_c8 & 1) != 0) {
    operator_delete(local_b8);
  }
  local_c8 = (basic_string)0x14;
  uStack_c7 = (undefined4)s_enumerable_00138690._0_8_;
  uStack_c3 = SUB84(s_enumerable_00138690._0_8_,4);
  local_bf = CONCAT13(local_bf._3_1_,0x656c);
                    /* try { // try from 0018545c to 00185467 has its CatchHandler @ 0018564c */
  uVar5 = PropNameIDCache::get(param_1,&local_c8);
  local_a0[0] = 2;
  local_98 = CONCAT71(local_98._1_7_,param_4[1]);
                    /* try { // try from 00185484 to 00185493 has its CatchHandler @ 00185648 */
  (**(code **)(*(long *)param_1 + 0x1b0))(param_1,&local_b0,uVar5,local_a0);
  facebook::jsi::Value::~Value((Value *)local_a0);
  if (((byte)local_c8 & 1) != 0) {
    operator_delete(local_b8);
  }
  local_c8 = (basic_string)0x6;
  uStack_c7 = 0x746567;
                    /* try { // try from 001854c0 to 001854cb has its CatchHandler @ 00185644 */
  uVar5 = PropNameIDCache::get(param_1,&local_c8);
  local_a0[0] = 7;
                    /* try { // try from 001854e4 to 001854eb has its CatchHandler @ 00185634 */
  local_98 = (**(code **)(*(long *)param_1 + 0x88))(param_1,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 001854f8 to 0018550b has its CatchHandler @ 00185630 */
  (**(code **)(*(long *)param_1 + 0x1b0))(param_1,&local_b0,uVar5,local_a0);
  facebook::jsi::Value::~Value((Value *)local_a0);
  if (((byte)local_c8 & 1) != 0) {
    operator_delete(local_b8);
  }
  local_c8 = (basic_string)0x6;
  uStack_c7 = 0x746573;
                    /* try { // try from 00185538 to 00185543 has its CatchHandler @ 0018562c */
  uVar5 = PropNameIDCache::get(param_1,&local_c8);
  local_a0[0] = 7;
                    /* try { // try from 0018555c to 00185563 has its CatchHandler @ 00185628 */
  local_98 = (**(code **)(*(long *)param_1 + 0x88))(param_1,*(undefined8 *)(param_4 + 0x10));
                    /* try { // try from 00185570 to 00185583 has its CatchHandler @ 00185624 */
  (**(code **)(*(long *)param_1 + 0x1b0))(param_1,&local_b0,uVar5,local_a0);
  facebook::jsi::Value::~Value((Value *)local_a0);
  if (((byte)local_c8 & 1) != 0) {
    operator_delete(local_b8);
  }
                    /* try { // try from 001855a0 to 001855b7 has its CatchHandler @ 00185614 */
  FUN_001844d8(aVStack_d8,uVar2,param_1,*(undefined8 *)param_2,&local_a8,&local_b0);
  facebook::jsi::Value::~Value(aVStack_d8);
  if (local_b0 != (undefined8 *)0x0) {
    (**(code **)*local_b0)();
  }
  if (local_a8 != (undefined8 *)0x0) {
    (**(code **)*local_a8)();
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00185714  FUN_00185714 =====

void FUN_00185714(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018574c  FUN_0018574c =====

void FUN_0018574c(void)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    puVar2 = (undefined8 *)operator_new(0x10);
    *puVar2 = &PTR_FUN_001b7d50;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00185798  FUN_00185798 =====

void FUN_00185798(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_001b7d50;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001857dc  FUN_001857dc =====

void FUN_001857dc(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00185814  FUN_00185814 =====

void FUN_00185814(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018584c  FUN_0018584c =====

void FUN_0018584c(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_2 + 0x30))(&local_48,param_2);
                    /* try { // try from 00185888 to 0018589f has its CatchHandler @ 00185924 */
  facebook::jsi::Object::getPropertyAsObject((IRuntime *)&local_48,(char *)param_2);
                    /* try { // try from 001858a0 to 001858b7 has its CatchHandler @ 00185904 */
  facebook::jsi::Object::getPropertyAsFunction((IRuntime *)&local_40,(char *)param_2);
  if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)();
  }
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00185958  FUN_00185958 =====

void FUN_00185958(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZN7margelo5nitro13CommonGlobals6Object14definePropertyERN8facebook3jsi7RuntimeERKNS4_6ObjectEPKcONS0_26ComputedPropertyDescriptorEE3$_0"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 001859a8  FUN_001859a8 =====

pointer_____offset_0x10___ * FUN_001859a8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_001b7db0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001859e8  margelo::nitro::CommonGlobals::Object::freeze =====

/* margelo::nitro::CommonGlobals::Object::freeze(facebook::jsi::Runtime&, facebook::jsi::Object
   const&) */

void margelo::nitro::CommonGlobals::Object::freeze(Runtime *param_1,Object *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined ***pppuVar3;
  long lVar4;
  Value aVStack_b0 [16];
  undefined4 local_a0 [4];
  undefined **local_90 [4];
  undefined ***local_70;
  undefined4 local_58 [2];
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_90[0] = &PTR_FUN_001b7dd0;
                    /* try { // try from 00185a28 to 00185a37 has its CatchHandler @ 00185b18 */
  local_70 = local_90;
  uVar2 = getGlobalFunction(param_1,"Object.freeze",local_90);
  if (local_70 == local_90) {
    lVar4 = 4;
    pppuVar3 = local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_00185a68;
    lVar4 = 5;
    pppuVar3 = local_70;
  }
  (*(code *)(*pppuVar3)[lVar4])();
LAB_00185a68:
  local_58[0] = 7;
                    /* try { // try from 00185a7c to 00185a83 has its CatchHandler @ 00185b08 */
  local_50 = (**(code **)(*(long *)param_1 + 0x88))(param_1,*(undefined8 *)param_2);
  local_a0[0] = 0;
                    /* try { // try from 00185a94 to 00185aaf has its CatchHandler @ 00185af0 */
  (**(code **)(*(long *)param_1 + 0x280))(aVStack_b0,param_1,uVar2,local_a0,local_58,1);
  facebook::jsi::Value::~Value((Value *)local_a0);
  facebook::jsi::Value::~Value((Value *)local_58);
  facebook::jsi::Value::~Value(aVStack_b0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00185b68  FUN_00185b68 =====

void FUN_00185b68(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00185ba0  FUN_00185ba0 =====

void FUN_00185ba0(void)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    puVar2 = (undefined8 *)operator_new(0x10);
    *puVar2 = &PTR_FUN_001b7dd0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00185bec  FUN_00185bec =====

void FUN_00185bec(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_001b7dd0;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00185c30  FUN_00185c30 =====

void FUN_00185c30(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00185c68  FUN_00185c68 =====

void FUN_00185c68(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00185ca0  FUN_00185ca0 =====

void FUN_00185ca0(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_2 + 0x30))(&local_48,param_2);
                    /* try { // try from 00185cdc to 00185cf3 has its CatchHandler @ 00185d78 */
  facebook::jsi::Object::getPropertyAsObject((IRuntime *)&local_48,(char *)param_2);
                    /* try { // try from 00185cf4 to 00185d0b has its CatchHandler @ 00185d58 */
  facebook::jsi::Object::getPropertyAsFunction((IRuntime *)&local_40,(char *)param_2);
  if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)();
  }
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00185dac  FUN_00185dac =====

void FUN_00185dac(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZN7margelo5nitro13CommonGlobals6Object6freezeERN8facebook3jsi7RuntimeERKNS4_6ObjectEE3$_0") {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00185dfc  FUN_00185dfc =====

pointer_____offset_0x10___ * FUN_00185dfc(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_001b7e30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00185e3c  margelo::nitro::CommonGlobals::Promise::resolved =====

/* margelo::nitro::CommonGlobals::Promise::resolved(facebook::jsi::Runtime&) */

void __thiscall margelo::nitro::CommonGlobals::Promise::resolved(Promise *this,Runtime *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined ***pppuVar3;
  long lVar4;
  undefined4 local_90 [4];
  undefined **local_80 [4];
  undefined ***local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_80[0] = &PTR_FUN_001b7e50;
                    /* try { // try from 00185e7c to 00185e8b has its CatchHandler @ 00185f24 */
  local_60 = local_80;
  uVar2 = getGlobalFunction(this,"Promise.resolve",local_80);
  if (local_60 == local_80) {
    lVar4 = 4;
    pppuVar3 = local_80;
  }
  else {
    if (local_60 == (undefined ***)0x0) goto LAB_00185ebc;
    lVar4 = 5;
    pppuVar3 = local_60;
  }
  (*(code *)(*pppuVar3)[lVar4])();
LAB_00185ebc:
  local_90[0] = 0;
                    /* try { // try from 00185ec8 to 00185ee3 has its CatchHandler @ 00185f14 */
  (**(code **)(*(long *)this + 0x280))(this,uVar2,local_90,0,0);
  facebook::jsi::Value::~Value((Value *)local_90);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00185f74  FUN_00185f74 =====

void FUN_00185f74(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00185fac  FUN_00185fac =====

void FUN_00185fac(void)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    puVar2 = (undefined8 *)operator_new(0x10);
    *puVar2 = &PTR_FUN_001b7e50;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00185ff8  FUN_00185ff8 =====

void FUN_00185ff8(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_001b7e50;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018603c  FUN_0018603c =====

void FUN_0018603c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00186074  FUN_00186074 =====

void FUN_00186074(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001860ac  FUN_001860ac =====

void FUN_001860ac(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_2 + 0x30))(&local_48,param_2);
                    /* try { // try from 001860e8 to 001860ff has its CatchHandler @ 00186184 */
  facebook::jsi::Object::getPropertyAsObject((IRuntime *)&local_48,(char *)param_2);
                    /* try { // try from 00186100 to 00186117 has its CatchHandler @ 00186164 */
  facebook::jsi::Object::getPropertyAsFunction((IRuntime *)&local_40,(char *)param_2);
  if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)();
  }
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001861b8  FUN_001861b8 =====

void FUN_001861b8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZN7margelo5nitro13CommonGlobals7Promise8resolvedERN8facebook3jsi7RuntimeEE3$_0") {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00186208  FUN_00186208 =====

pointer_____offset_0x10___ * FUN_00186208(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_001b7eb0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00186248  margelo::nitro::CommonGlobals::Promise::resolved =====

/* margelo::nitro::CommonGlobals::Promise::resolved(facebook::jsi::Runtime&, facebook::jsi::Value&&)
    */

void __thiscall
margelo::nitro::CommonGlobals::Promise::resolved(Promise *this,Runtime *param_1,Value *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined ***pppuVar3;
  long lVar4;
  undefined4 local_a0 [4];
  Value aVStack_90 [16];
  undefined **local_80 [4];
  undefined ***local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_80[0] = &PTR_FUN_001b7ed0;
                    /* try { // try from 0018628c to 0018629b has its CatchHandler @ 00186350 */
  local_60 = local_80;
  uVar2 = getGlobalFunction(this,"Promise.resolve",local_80);
  if (local_60 == local_80) {
    lVar4 = 4;
    pppuVar3 = local_80;
  }
  else {
    if (local_60 == (undefined ***)0x0) goto LAB_001862cc;
    lVar4 = 5;
    pppuVar3 = local_60;
  }
  (*(code *)(*pppuVar3)[lVar4])();
LAB_001862cc:
  facebook::jsi::Value::Value(aVStack_90,(Value *)param_1);
  local_a0[0] = 0;
                    /* try { // try from 001862e4 to 001862ff has its CatchHandler @ 00186338 */
  (**(code **)(*(long *)this + 0x280))(this,uVar2,local_a0,aVStack_90,1);
  facebook::jsi::Value::~Value((Value *)local_a0);
  facebook::jsi::Value::~Value(aVStack_90);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001863a0  FUN_001863a0 =====

void FUN_001863a0(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001863d8  FUN_001863d8 =====

void FUN_001863d8(void)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    puVar2 = (undefined8 *)operator_new(0x10);
    *puVar2 = &PTR_FUN_001b7ed0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00186424  FUN_00186424 =====

void FUN_00186424(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_001b7ed0;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00186468  FUN_00186468 =====

void FUN_00186468(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001864a0  FUN_001864a0 =====

void FUN_001864a0(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001864d8  FUN_001864d8 =====

void FUN_001864d8(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_2 + 0x30))(&local_48,param_2);
                    /* try { // try from 00186514 to 0018652b has its CatchHandler @ 001865b0 */
  facebook::jsi::Object::getPropertyAsObject((IRuntime *)&local_48,(char *)param_2);
                    /* try { // try from 0018652c to 00186543 has its CatchHandler @ 00186590 */
  facebook::jsi::Object::getPropertyAsFunction((IRuntime *)&local_40,(char *)param_2);
  if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)();
  }
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001865e4  FUN_001865e4 =====

void FUN_001865e4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZN7margelo5nitro13CommonGlobals7Promise8resolvedERN8facebook3jsi7RuntimeEONS4_5ValueEE3$_0")
  {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00186634  FUN_00186634 =====

pointer_____offset_0x10___ * FUN_00186634(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_001b7f30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00186674  margelo::nitro::CommonGlobals::Promise::rejected =====

/* margelo::nitro::CommonGlobals::Promise::rejected(facebook::jsi::Runtime&, facebook::jsi::Value&&)
    */

void __thiscall
margelo::nitro::CommonGlobals::Promise::rejected(Promise *this,Runtime *param_1,Value *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined ***pppuVar3;
  long lVar4;
  undefined4 local_a0 [4];
  Value aVStack_90 [16];
  undefined **local_80 [4];
  undefined ***local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_80[0] = &PTR_FUN_001b7f50;
                    /* try { // try from 001866b8 to 001866c7 has its CatchHandler @ 0018677c */
  local_60 = local_80;
  uVar2 = getGlobalFunction(this,"Promise.reject",local_80);
  if (local_60 == local_80) {
    lVar4 = 4;
    pppuVar3 = local_80;
  }
  else {
    if (local_60 == (undefined ***)0x0) goto LAB_001866f8;
    lVar4 = 5;
    pppuVar3 = local_60;
  }
  (*(code *)(*pppuVar3)[lVar4])();
LAB_001866f8:
  facebook::jsi::Value::Value(aVStack_90,(Value *)param_1);
  local_a0[0] = 0;
                    /* try { // try from 00186710 to 0018672b has its CatchHandler @ 00186764 */
  (**(code **)(*(long *)this + 0x280))(this,uVar2,local_a0,aVStack_90,1);
  facebook::jsi::Value::~Value((Value *)local_a0);
  facebook::jsi::Value::~Value(aVStack_90);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001867cc  FUN_001867cc =====

void FUN_001867cc(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00186804  FUN_00186804 =====

void FUN_00186804(void)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    puVar2 = (undefined8 *)operator_new(0x10);
    *puVar2 = &PTR_FUN_001b7f50;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00186850  FUN_00186850 =====

void FUN_00186850(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_001b7f50;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00186894  FUN_00186894 =====

void FUN_00186894(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001868cc  FUN_001868cc =====

void FUN_001868cc(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00186904  FUN_00186904 =====

void FUN_00186904(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_2 + 0x30))(&local_48,param_2);
                    /* try { // try from 00186940 to 00186957 has its CatchHandler @ 001869dc */
  facebook::jsi::Object::getPropertyAsObject((IRuntime *)&local_48,(char *)param_2);
                    /* try { // try from 00186958 to 0018696f has its CatchHandler @ 001869bc */
  facebook::jsi::Object::getPropertyAsFunction((IRuntime *)&local_40,(char *)param_2);
  if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)();
  }
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00186a10  FUN_00186a10 =====

void FUN_00186a10(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZN7margelo5nitro13CommonGlobals7Promise8rejectedERN8facebook3jsi7RuntimeEONS4_5ValueEE3$_0")
  {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00186a60  FUN_00186a60 =====

pointer_____offset_0x10___ * FUN_00186a60(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_001b7fb0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00186aa0  margelo::nitro::CommonGlobals::Promise::callConstructor =====

/* margelo::nitro::CommonGlobals::Promise::callConstructor(facebook::jsi::Runtime&,
   std::__ndk1::function<facebook::jsi::Value (facebook::jsi::Runtime&, facebook::jsi::Value const&,
   facebook::jsi::Value const*, unsigned long)>&&) */

void __thiscall
margelo::nitro::CommonGlobals::Promise::callConstructor
          (Promise *this,Runtime *param_1,function *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined ***pppuVar3;
  undefined8 uVar4;
  long lVar5;
  Runtime *pRVar6;
  Runtime *pRVar7;
  Runtime **ppRVar8;
  basic_string local_100;
  undefined8 local_ff;
  undefined1 local_f7;
  void *local_f0;
  undefined8 *local_e8;
  long local_e0 [4];
  Runtime *local_c0 [2];
  undefined **local_b0 [4];
  undefined ***local_90;
  undefined4 local_80 [2];
  undefined8 local_78;
  Runtime *local_60 [3];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_b0[0] = &PTR_FUN_001b7fd0;
                    /* try { // try from 00186ae4 to 00186af3 has its CatchHandler @ 00186db8 */
  local_90 = local_b0;
  uVar2 = getGlobalFunction(this,"Promise",local_b0);
  if (local_90 == local_b0) {
    lVar5 = 4;
    pppuVar3 = local_b0;
LAB_00186b18:
    (*(code *)(*pppuVar3)[lVar5])();
  }
  else if (local_90 != (undefined ***)0x0) {
    lVar5 = 5;
    pppuVar3 = local_90;
    goto LAB_00186b18;
  }
  local_f7 = 0;
  local_100 = (basic_string)0x10;
  local_ff = 0x726f747563657865;
                    /* try { // try from 00186b44 to 00186b4f has its CatchHandler @ 00186da0 */
  uVar4 = PropNameIDCache::get((Runtime *)this,&local_100);
  pRVar6 = param_1 + 0x20;
  pRVar7 = *(Runtime **)pRVar6;
  if (pRVar7 == (Runtime *)0x0) {
    pRVar6 = (Runtime *)local_c0;
LAB_00186b78:
    *(Runtime **)pRVar6 = (Runtime *)0x0;
  }
  else {
    local_c0[0] = pRVar7;
    if (pRVar7 != param_1) goto LAB_00186b78;
    local_c0[0] = (Runtime *)local_e0;
                    /* try { // try from 00186b90 to 00186b9b has its CatchHandler @ 00186d00 */
    (**(code **)(*(long *)param_1 + 0x18))(param_1,local_e0);
  }
  if (local_c0[0] == (Runtime *)0x0) {
    ppRVar8 = local_60;
LAB_00186bc4:
    *ppRVar8 = (Runtime *)0x0;
  }
  else {
    if (local_c0[0] != (Runtime *)local_e0) {
      ppRVar8 = local_c0;
      local_60[0] = local_c0[0];
      goto LAB_00186bc4;
    }
    local_60[0] = (Runtime *)local_80;
                    /* try { // try from 00186bdc to 00186be7 has its CatchHandler @ 00186cfc */
    (**(code **)(local_e0[0] + 0x18))(local_e0,local_80);
  }
                    /* try { // try from 00186bf0 to 00186c0b has its CatchHandler @ 00186d38 */
  (**(code **)(*(long *)this + 0x278))(&local_e8,this,uVar4,2,local_80);
  if (local_60[0] == (Runtime *)local_80) {
    lVar5 = 4;
    pRVar6 = (Runtime *)local_80;
LAB_00186c2c:
    (**(code **)(*(long *)pRVar6 + lVar5 * 8))();
  }
  else if (local_60[0] != (Runtime *)0x0) {
    lVar5 = 5;
    pRVar6 = local_60[0];
    goto LAB_00186c2c;
  }
  if (local_c0[0] == (Runtime *)local_e0) {
    lVar5 = 4;
    pRVar6 = (Runtime *)local_e0;
  }
  else {
    if (local_c0[0] == (Runtime *)0x0) goto LAB_00186c68;
    lVar5 = 5;
    pRVar6 = local_c0[0];
  }
  (**(code **)(*(long *)pRVar6 + lVar5 * 8))();
LAB_00186c68:
  if (((byte)local_100 & 1) != 0) {
    operator_delete(local_f0);
  }
  local_80[0] = 7;
                    /* try { // try from 00186c8c to 00186c93 has its CatchHandler @ 00186d14 */
  local_78 = (**(code **)(*(long *)this + 0x88))(this,local_e8);
                    /* try { // try from 00186ca0 to 00186cb7 has its CatchHandler @ 00186d04 */
  (**(code **)(*(long *)this + 0x288))(this,uVar2,local_80,1);
  facebook::jsi::Value::~Value((Value *)local_80);
  if (local_e8 != (undefined8 *)0x0) {
    (**(code **)*local_e8)();
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00186e08  FUN_00186e08 =====

void FUN_00186e08(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00186e40  FUN_00186e40 =====

void FUN_00186e40(void)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    puVar2 = (undefined8 *)operator_new(0x10);
    *puVar2 = &PTR_FUN_001b7fd0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00186e8c  FUN_00186e8c =====

void FUN_00186e8c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_001b7fd0;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00186ed0  FUN_00186ed0 =====

void FUN_00186ed0(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00186f08  FUN_00186f08 =====

void FUN_00186f08(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00186f40  FUN_00186f40 =====

void FUN_00186f40(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_2 + 0x30))(&local_40,param_2);
                    /* try { // try from 00186f7c to 00186f93 has its CatchHandler @ 00186fcc */
  facebook::jsi::Object::getPropertyAsFunction((IRuntime *)&local_40,(char *)param_2);
  if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00187004  FUN_00187004 =====

void FUN_00187004(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZN7margelo5nitro13CommonGlobals7Promise15callConstructorERN8facebook3jsi7RuntimeEONSt6__ndk18functionIFNS4_5ValueES6_RKS9_PSA_mEEEE3$_0"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00187054  FUN_00187054 =====

pointer_____offset_0x10___ * FUN_00187054(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_001b8030;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00187094  margelo::nitro::CommonGlobals::Promise::isInstanceOf =====

/* margelo::nitro::CommonGlobals::Promise::isInstanceOf(facebook::jsi::Runtime&,
   facebook::jsi::Object const&) */

uint margelo::nitro::CommonGlobals::Promise::isInstanceOf(Runtime *param_1,Object *param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  long lVar5;
  undefined **local_80 [4];
  long *local_60;
  long local_48;
  
  local_60 = (long *)local_80;
  pppuVar4 = local_80;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_80[0] = &PTR_FUN_001b8050;
                    /* try { // try from 001870d4 to 001870e3 has its CatchHandler @ 00187158 */
  uVar3 = getGlobalFunction(param_1,"Promise",local_80);
  if ((undefined ***)local_60 == local_80) {
    lVar5 = 4;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00187114;
    lVar5 = 5;
    pppuVar4 = (undefined ***)local_60;
  }
  (**(code **)((long)*pppuVar4 + lVar5 * 8))();
LAB_00187114:
  uVar2 = (**(code **)(*(long *)param_1 + 0x2c0))(param_1,param_2,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001871a8  FUN_001871a8 =====

void FUN_001871a8(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001871e0  FUN_001871e0 =====

void FUN_001871e0(void)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    puVar2 = (undefined8 *)operator_new(0x10);
    *puVar2 = &PTR_FUN_001b8050;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018722c  FUN_0018722c =====

void FUN_0018722c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_001b8050;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00187270  FUN_00187270 =====

void FUN_00187270(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001872a8  FUN_001872a8 =====

void FUN_001872a8(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001872e0  FUN_001872e0 =====

void FUN_001872e0(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_2 + 0x30))(&local_40,param_2);
                    /* try { // try from 0018731c to 00187333 has its CatchHandler @ 0018736c */
  facebook::jsi::Object::getPropertyAsFunction((IRuntime *)&local_40,(char *)param_2);
  if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001873a4  FUN_001873a4 =====

void FUN_001873a4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZN7margelo5nitro13CommonGlobals7Promise12isInstanceOfERN8facebook3jsi7RuntimeERKNS4_6ObjectEE3$_0"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 001873f4  FUN_001873f4 =====

pointer_____offset_0x10___ * FUN_001873f4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_001b80b0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00187434  margelo::nitro::CommonGlobals::Date::callConstructor =====

/* margelo::nitro::CommonGlobals::Date::callConstructor(facebook::jsi::Runtime&, double) */

void __thiscall
margelo::nitro::CommonGlobals::Date::callConstructor(Date *this,Runtime *param_1,double param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined ***pppuVar3;
  long lVar4;
  undefined4 local_90 [2];
  double local_88;
  undefined **local_80 [4];
  undefined ***local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_80[0] = &PTR_FUN_001b80d0;
                    /* try { // try from 0018747c to 0018748b has its CatchHandler @ 0018752c */
  local_60 = local_80;
  uVar2 = getGlobalFunction(this,&DAT_001377ce,local_80);
  if (local_60 == local_80) {
    lVar4 = 4;
    pppuVar3 = local_80;
  }
  else {
    if (local_60 == (undefined ***)0x0) goto LAB_001874bc;
    lVar4 = 5;
    pppuVar3 = local_60;
  }
  (*(code *)(*pppuVar3)[lVar4])();
LAB_001874bc:
  local_90[0] = 3;
  local_88 = param_2;
                    /* try { // try from 001874d0 to 001874e7 has its CatchHandler @ 0018751c */
  (**(code **)(*(long *)this + 0x288))(this,uVar2,local_90,1);
  facebook::jsi::Value::~Value((Value *)local_90);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018757c  FUN_0018757c =====

void FUN_0018757c(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001875b4  FUN_001875b4 =====

void FUN_001875b4(void)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    puVar2 = (undefined8 *)operator_new(0x10);
    *puVar2 = &PTR_FUN_001b80d0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00187600  FUN_00187600 =====

void FUN_00187600(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_001b80d0;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00187644  FUN_00187644 =====

void FUN_00187644(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018767c  FUN_0018767c =====

void FUN_0018767c(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001876b4  FUN_001876b4 =====

void FUN_001876b4(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_2 + 0x30))(&local_40,param_2);
                    /* try { // try from 001876f0 to 00187707 has its CatchHandler @ 00187740 */
  facebook::jsi::Object::getPropertyAsFunction((IRuntime *)&local_40,(char *)param_2);
  if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00187778  FUN_00187778 =====

void FUN_00187778(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZN7margelo5nitro13CommonGlobals4Date15callConstructorERN8facebook3jsi7RuntimeEdE3$_0") {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 001877c8  FUN_001877c8 =====

pointer_____offset_0x10___ * FUN_001877c8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_001b8130;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00187808  margelo::nitro::CommonGlobals::Date::isInstanceOf =====

/* margelo::nitro::CommonGlobals::Date::isInstanceOf(facebook::jsi::Runtime&, facebook::jsi::Object
   const&) */

uint margelo::nitro::CommonGlobals::Date::isInstanceOf(Runtime *param_1,Object *param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  long lVar5;
  undefined **local_80 [4];
  long *local_60;
  long local_48;
  
  local_60 = (long *)local_80;
  pppuVar4 = local_80;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_80[0] = &PTR_FUN_001b8150;
                    /* try { // try from 00187848 to 00187857 has its CatchHandler @ 001878cc */
  uVar3 = getGlobalFunction(param_1,&DAT_001377ce,local_80);
  if ((undefined ***)local_60 == local_80) {
    lVar5 = 4;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00187888;
    lVar5 = 5;
    pppuVar4 = (undefined ***)local_60;
  }
  (**(code **)((long)*pppuVar4 + lVar5 * 8))();
LAB_00187888:
  uVar2 = (**(code **)(*(long *)param_1 + 0x2c0))(param_1,param_2,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018791c  FUN_0018791c =====

void FUN_0018791c(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00187954  FUN_00187954 =====

void FUN_00187954(void)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    puVar2 = (undefined8 *)operator_new(0x10);
    *puVar2 = &PTR_FUN_001b8150;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001879a0  FUN_001879a0 =====

void FUN_001879a0(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_001b8150;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001879e4  FUN_001879e4 =====

void FUN_001879e4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00187a1c  FUN_00187a1c =====

void FUN_00187a1c(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00187a54  FUN_00187a54 =====

void FUN_00187a54(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_2 + 0x30))(&local_40,param_2);
                    /* try { // try from 00187a90 to 00187aa7 has its CatchHandler @ 00187ae0 */
  facebook::jsi::Object::getPropertyAsFunction((IRuntime *)&local_40,(char *)param_2);
  if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00187b18  FUN_00187b18 =====

void FUN_00187b18(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZN7margelo5nitro13CommonGlobals4Date12isInstanceOfERN8facebook3jsi7RuntimeERKNS4_6ObjectEE3$_0"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00187b68  FUN_00187b68 =====

pointer_____offset_0x10___ * FUN_00187b68(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_001b81b0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00187ba8  margelo::nitro::CommonGlobals::Error::isInstanceOf =====

/* margelo::nitro::CommonGlobals::Error::isInstanceOf(facebook::jsi::Runtime&, facebook::jsi::Object
   const&) */

uint margelo::nitro::CommonGlobals::Error::isInstanceOf(Runtime *param_1,Object *param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  long lVar5;
  undefined **local_80 [4];
  long *local_60;
  long local_48;
  
  local_60 = (long *)local_80;
  pppuVar4 = local_80;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_80[0] = &PTR_FUN_001b81d0;
                    /* try { // try from 00187be8 to 00187bf7 has its CatchHandler @ 00187c6c */
  uVar3 = getGlobalFunction(param_1,"Error",local_80);
  if ((undefined ***)local_60 == local_80) {
    lVar5 = 4;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00187c28;
    lVar5 = 5;
    pppuVar4 = (undefined ***)local_60;
  }
  (**(code **)((long)*pppuVar4 + lVar5 * 8))();
LAB_00187c28:
  uVar2 = (**(code **)(*(long *)param_1 + 0x2c0))(param_1,param_2,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00187cbc  FUN_00187cbc =====

void FUN_00187cbc(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00187cf4  FUN_00187cf4 =====

void FUN_00187cf4(void)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    puVar2 = (undefined8 *)operator_new(0x10);
    *puVar2 = &PTR_FUN_001b81d0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00187d40  FUN_00187d40 =====

void FUN_00187d40(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_001b81d0;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00187d84  FUN_00187d84 =====

void FUN_00187d84(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00187dbc  FUN_00187dbc =====

void FUN_00187dbc(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00187df4  FUN_00187df4 =====

void FUN_00187df4(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_2 + 0x30))(&local_40,param_2);
                    /* try { // try from 00187e30 to 00187e47 has its CatchHandler @ 00187e80 */
  facebook::jsi::Object::getPropertyAsFunction((IRuntime *)&local_40,(char *)param_2);
  if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00187eb8  FUN_00187eb8 =====

void FUN_00187eb8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZN7margelo5nitro13CommonGlobals5Error12isInstanceOfERN8facebook3jsi7RuntimeERKNS4_6ObjectEE3$_0"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00187f08  FUN_00187f08 =====

pointer_____offset_0x10___ * FUN_00187f08(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_001b8230;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00187f48  margelo::nitro::CommonGlobals::defineGlobal =====

/* margelo::nitro::CommonGlobals::defineGlobal(facebook::jsi::Runtime&,
   margelo::nitro::KnownGlobalPropertyName, facebook::jsi::Value&&) */

void margelo::nitro::CommonGlobals::defineGlobal(long *param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puVar3 = (&PTR_s___nitroDispatcher_001b8240)[param_2];
  (**(code **)(*param_1 + 0x30))(&local_48);
                    /* try { // try from 00187f8c to 00187fb3 has its CatchHandler @ 0018803c */
  uVar2 = __strlen_chk(puVar3,0x12);
  (**(code **)(*param_1 + 0x108))(&local_40,param_1,puVar3,uVar2);
                    /* try { // try from 00187fbc to 00187fcf has its CatchHandler @ 0018801c */
  (**(code **)(*param_1 + 0x1b8))(param_1,&local_48,&local_40,param_3);
  if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)();
  }
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00188070  margelo::nitro::CommonGlobals::getKnownGlobalPropertyNameString =====

/* margelo::nitro::CommonGlobals::getKnownGlobalPropertyNameString(margelo::nitro::KnownGlobalPropertyName)
    */

void margelo::nitro::CommonGlobals::getKnownGlobalPropertyNameString(int param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((&PTR_s___nitroDispatcher_001b8240)[param_1]);
}


// ===== 001880b4  margelo::nitro::CommonGlobals::getKnownGlobalPropertyName =====

/* margelo::nitro::CommonGlobals::getKnownGlobalPropertyName(facebook::jsi::Runtime&,
   margelo::nitro::KnownGlobalPropertyName) */

undefined8 margelo::nitro::CommonGlobals::getKnownGlobalPropertyName(Runtime *param_1,int param_2)

{
  long lVar1;
  size_t __n;
  undefined8 uVar2;
  char *__s;
  void *__dest;
  ulong local_60;
  size_t local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __s = (&PTR_s___nitroDispatcher_001b8240)[param_2];
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      uVar2 = FUN_0015d7fc();
                    /* catch() { ... } // from try @ 0018814c with catch @ 001881b0 */
      if ((local_60 & 1) != 0) {
        operator_delete(local_50);
      }
      if (*(long *)(lVar1 + 0x28) == local_48) {
        FUN_00157e74(uVar2);
      }
    }
    goto LAB_001881dc;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00188138;
  }
  else {
    __dest = operator_new((__n | 0xf) + 1);
    local_60 = (__n | 0xf) + 2;
    local_58 = __n;
    local_50 = __dest;
LAB_00188138:
    memcpy(__dest,__s,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 0018814c to 00188157 has its CatchHandler @ 001881b0 */
  uVar2 = PropNameIDCache::get(param_1,(basic_string *)&local_60);
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2;
  }
LAB_001881dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001881e0  margelo::nitro::TypeInfo::getCurrentExceptionName =====

/* margelo::nitro::TypeInfo::getCurrentExceptionName() */

void __thiscall margelo::nitro::TypeInfo::getCurrentExceptionName(TypeInfo *this)

{
  long lVar1;
  long lVar2;
  size_t __n;
  undefined8 uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  void *unaff_x20;
  char *pcVar4;
  char *__dest;
  ulong local_60;
  size_t sStack_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = __cxa_current_exception_type();
  pcVar4 = *(char **)(lVar2 + 8);
  __n = strlen(pcVar4);
  if (0xffffffffffffffef < __n) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      uVar3 = FUN_0015d7fc();
                    /* catch() { ... } // from try @ 001882b8 with catch @ 00188304 */
      operator_delete(unaff_x20);
      if (*(long *)(lVar1 + 0x28) == local_48) {
        FUN_00157e74(uVar3);
      }
    }
    goto LAB_00188328;
  }
  if (__n < 0x17) {
    __dest = (char *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00188260;
  }
  else {
    __dest = (char *)operator_new((__n | 0xf) + 1);
    local_60 = (__n | 0xf) + 2;
    sStack_58 = __n;
    local_50 = __dest;
LAB_00188260:
    memmove(__dest,pcVar4,__n);
  }
  pcVar4 = local_50;
  __dest[__n] = '\0';
  if ((local_60 & 1) == 0) {
    *(size_t *)(in_x8 + 8) = sStack_58;
    *(ulong *)in_x8 = local_60;
    *(char **)(in_x8 + 0x10) = local_50;
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else {
                    /* try { // try from 001882b8 to 001882c3 has its CatchHandler @ 00188304 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(in_x8,local_50,sStack_58);
    if (*(long *)(lVar1 + 0x28) == local_48) {
      operator_delete(pcVar4);
      return;
    }
  }
LAB_00188328:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018832c  margelo::nitro::TypeInfo::demangleName =====

/* margelo::nitro::TypeInfo::demangleName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool) */

void margelo::nitro::TypeInfo::demangleName(basic_string *param_1,bool param_2)

{
  long lVar1;
  char *pcVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pcVar2 = (char *)(ulong)param_2;
  lVar1 = tpidr_el0;
  if (((byte)*param_1 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
      uVar4 = *(undefined8 *)param_1;
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(in_x8 + 8) = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)in_x8 = uVar4;
      *(undefined8 *)(in_x8 + 0x10) = uVar3;
      return;
    }
  }
  else {
    pcVar2 = *(char **)(param_1 + 0x10);
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external(in_x8,pcVar2,*(ulong *)(param_1 + 8));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1,pcVar2);
}


// ===== 001883a0  margelo::nitro::TypeInfo::replaceRegex =====

/* margelo::nitro::TypeInfo::replaceRegex(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall
margelo::nitro::TypeInfo::replaceRegex
          (TypeInfo *this,basic_string *param_1,basic_string *param_2,basic_string *param_3)

{
  bool bVar1;
  size_t sVar2;
  size_t sVar3;
  TypeInfo *pTVar4;
  byte bVar5;
  TypeInfo TVar6;
  basic_string bVar7;
  ulong uVar8;
  long lVar9;
  void *pvVar10;
  float fVar11;
  int iVar12;
  basic_string *pbVar13;
  basic_string *pbVar14;
  void *pvVar15;
  basic_string *pbVar16;
  long lVar17;
  undefined8 *in_x8;
  long *plVar18;
  basic_string *pbVar19;
  ulong uVar20;
  basic_string *pbVar21;
  basic_string *pbVar22;
  ulong uVar23;
  ulong uVar24;
  basic_string *pbVar25;
  long *plVar26;
  basic_string *pbVar27;
  ulong uVar28;
  undefined2 uVar29;
  undefined8 uVar30;
  long lVar31;
  locale alStack_c0 [8];
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long *plStack_90;
  long local_88;
  long *local_80;
  undefined8 *puStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar9 = tpidr_el0;
  local_68 = *(long *)(lVar9 + 0x28);
  if (((DAT_001bfea0 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_001bfea0), iVar12 != 0)) {
    DAT_001bfe98 = 1.0;
    DAT_001bfe80 = (basic_string *)0x0;
    DAT_001bfe78 = (void *)0x0;
    DAT_001bfe90 = 0;
    DAT_001bfe88 = (long *)0x0;
    __cxa_atexit(FUN_00188c9c,&DAT_001bfe78,&PTR_LOOP_001b6ad0);
    __cxa_guard_release(&DAT_001bfea0);
  }
  sVar3 = *(size_t *)(param_1 + 8);
  pbVar21 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar21 = param_1 + 1;
    sVar3 = (ulong)((byte)*param_1 >> 1);
  }
  pbVar13 = (basic_string *)FUN_0015c450(pbVar21,sVar3);
  pbVar14 = DAT_001bfe80;
  if (DAT_001bfe80 != (basic_string *)0x0) {
    uVar30 = NEON_cnt(DAT_001bfe80,1);
    uVar29 = NEON_uaddlv(uVar30,1);
    uVar24 = CONCAT62((int6)((ulong)uVar30 >> 0x10),uVar29) & 0xffffffff;
    if (uVar24 < 2) {
      pbVar16 = (basic_string *)((ulong)(DAT_001bfe80 + -1) & (ulong)pbVar13);
    }
    else {
      pbVar16 = pbVar13;
      if (DAT_001bfe80 <= pbVar13) {
        uVar20 = 0;
        if (DAT_001bfe80 != (basic_string *)0x0) {
          uVar20 = (ulong)pbVar13 / (ulong)DAT_001bfe80;
        }
        pbVar16 = pbVar13 + -(uVar20 * (long)DAT_001bfe80);
      }
    }
    plVar18 = *(long **)((long)DAT_001bfe78 + (long)pbVar16 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      pbVar27 = DAT_001bfe80 + -1;
      do {
        pbVar19 = (basic_string *)plVar18[1];
        if (pbVar19 == pbVar13) {
          bVar5 = *(byte *)(plVar18 + 2);
          uVar20 = (ulong)(bVar5 >> 1);
          sVar2 = uVar20;
          if ((bVar5 & 1) != 0) {
            sVar2 = plVar18[3];
          }
          if (sVar2 == sVar3) {
            if ((bVar5 & 1) == 0) {
              if (bVar5 < 2) {
LAB_00188538:
                *in_x8 = 0;
                in_x8[1] = 0;
                TVar6 = *this;
                uVar24 = *(ulong *)(this + 8);
                pTVar4 = *(TypeInfo **)(this + 0x10);
                bVar7 = *param_2;
                in_x8[2] = 0;
                pbVar21 = *(basic_string **)(param_2 + 0x10);
                if (((byte)TVar6 & 1) == 0) {
                  pTVar4 = this + 1;
                  uVar24 = (ulong)((byte)TVar6 >> 1);
                }
                if (((byte)bVar7 & 1) == 0) {
                  pbVar21 = param_2 + 1;
                }
                    /* try { // try from 00188570 to 0018857f has its CatchHandler @ 00188c00 */
                FUN_00188d8c(in_x8,pTVar4,pTVar4 + uVar24,plVar18 + 5,pbVar21);
                goto LAB_00188b14;
              }
              pbVar19 = (basic_string *)((long)plVar18 + 0x11);
              pbVar22 = pbVar21;
              while (*pbVar19 == *pbVar22) {
                uVar20 = uVar20 - 1;
                pbVar19 = pbVar19 + 1;
                pbVar22 = pbVar22 + 1;
                if (uVar20 == 0) goto LAB_00188538;
              }
            }
            else {
              iVar12 = memcmp((void *)plVar18[4],pbVar21,plVar18[3]);
              if (iVar12 == 0) goto LAB_00188538;
            }
          }
        }
        else {
          if (uVar24 < 2) {
            pbVar19 = (basic_string *)((ulong)pbVar19 & (ulong)pbVar27);
          }
          else if (pbVar14 <= pbVar19) {
            uVar20 = 0;
            if (pbVar14 != (basic_string *)0x0) {
              uVar20 = (ulong)pbVar19 / (ulong)pbVar14;
            }
            pbVar19 = pbVar19 + -(uVar20 * (long)pbVar14);
          }
          if (pbVar19 != pbVar16) break;
        }
        plVar18 = (long *)*plVar18;
      } while (plVar18 != (long *)0x0);
    }
  }
  std::__ndk1::locale::locale(alStack_c0);
                    /* try { // try from 00188590 to 001885b3 has its CatchHandler @ 00188c70 */
  local_b8 = std::__ndk1::locale::use_facet((id *)alStack_c0);
  lStack_b0 = std::__ndk1::locale::use_facet((id *)alStack_c0);
  pbVar21 = param_1 + 1;
  local_88 = 0;
  uVar24 = (ulong)((byte)*param_1 >> 1);
  pbVar14 = pbVar21;
  if (((byte)*param_1 & 1) != 0) {
    uVar24 = *(ulong *)(param_1 + 8);
    pbVar14 = *(basic_string **)(param_1 + 0x10);
  }
  pbVar13 = pbVar14 + uVar24;
  lStack_a0 = 0;
  local_a8 = 0;
  plStack_90 = (long *)0x0;
  local_98 = 0;
                    /* try { // try from 001885e8 to 001885f3 has its CatchHandler @ 00188c5c */
  pbVar14 = (basic_string *)FUN_0018947c(alStack_c0,pbVar14,pbVar13);
  if (pbVar13 != pbVar14) {
    if (*(long *)(lVar9 + 0x28) != local_68) goto LAB_00188c98;
                    /* try { // try from 00188be4 to 00188be7 has its CatchHandler @ 00188c5c */
    FUN_00189960();
LAB_00188be8:
    if (*(long *)(lVar9 + 0x28) == local_68) {
                    /* try { // try from 00188bfc to 00188bff has its CatchHandler @ 00188c20 */
      uVar30 = FUN_0015d614();
                    /* catch() { ... } // from try @ 00188570 with catch @ 00188c00 */
      if (((byte)*pbVar21 & 1) != 0) {
        operator_delete((void *)in_x8[2]);
      }
      if (*(long *)(lVar9 + 0x28) == local_68) {
        FUN_00157e74(uVar30);
      }
    }
    goto LAB_00188c98;
  }
  bVar7 = *param_1;
  uVar20 = *(ulong *)(param_1 + 8);
  pbVar14 = *(basic_string **)(param_1 + 0x10);
  uVar24 = (ulong)((byte)bVar7 >> 1);
  if (((byte)bVar7 & 1) != 0) {
    uVar24 = uVar20;
    pbVar21 = pbVar14;
  }
  pbVar27 = (basic_string *)FUN_0015c450(pbVar21,uVar24);
  pbVar16 = DAT_001bfe80;
  if (DAT_001bfe80 != (basic_string *)0x0) {
    uVar30 = NEON_cnt(DAT_001bfe80,1);
    uVar29 = NEON_uaddlv(uVar30,1);
    uVar28 = CONCAT62((int6)((ulong)uVar30 >> 0x10),uVar29) & 0xffffffff;
    if (uVar28 < 2) {
      pbVar13 = (basic_string *)((ulong)(DAT_001bfe80 + -1) & (ulong)pbVar27);
    }
    else {
      pbVar13 = pbVar27;
      if (DAT_001bfe80 <= pbVar27) {
        uVar8 = 0;
        if (DAT_001bfe80 != (basic_string *)0x0) {
          uVar8 = (ulong)pbVar27 / (ulong)DAT_001bfe80;
        }
        pbVar13 = pbVar27 + -(uVar8 * (long)DAT_001bfe80);
      }
    }
    plVar18 = *(long **)((long)DAT_001bfe78 + (long)pbVar13 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      pbVar19 = DAT_001bfe80 + -1;
      do {
        pbVar22 = (basic_string *)plVar18[1];
        if (pbVar22 == pbVar27) {
          bVar5 = *(byte *)(plVar18 + 2);
          uVar23 = (ulong)(bVar5 >> 1);
          uVar8 = uVar23;
          if ((bVar5 & 1) != 0) {
            uVar8 = plVar18[3];
          }
          if (uVar8 == uVar24) {
            if ((bVar5 & 1) == 0) {
              if (bVar5 < 2) goto LAB_00188a90;
              pbVar22 = (basic_string *)((long)plVar18 + 0x11);
              pbVar25 = pbVar21;
              while (*pbVar22 == *pbVar25) {
                uVar23 = uVar23 - 1;
                pbVar22 = pbVar22 + 1;
                pbVar25 = pbVar25 + 1;
                if (uVar23 == 0) goto LAB_00188a90;
              }
            }
            else {
              iVar12 = memcmp((void *)plVar18[4],pbVar21,plVar18[3]);
              if (iVar12 == 0) goto LAB_00188a90;
            }
          }
        }
        else {
          if (uVar28 < 2) {
            pbVar22 = (basic_string *)((ulong)pbVar22 & (ulong)pbVar19);
          }
          else if (pbVar16 <= pbVar22) {
            uVar8 = 0;
            if (pbVar16 != (basic_string *)0x0) {
              uVar8 = (ulong)pbVar22 / (ulong)pbVar16;
            }
            pbVar22 = pbVar22 + -(uVar8 * (long)pbVar16);
          }
          if (pbVar22 != pbVar13) break;
        }
        plVar18 = (long *)*plVar18;
      } while (plVar18 != (long *)0x0);
    }
  }
                    /* try { // try from 0018873c to 00188743 has its CatchHandler @ 00188c30 */
  plVar18 = (long *)operator_new(0x68);
  puStack_78 = &DAT_001bfe88;
  local_70 = 0;
  *plVar18 = 0;
  plVar18[1] = (long)pbVar27;
  local_80 = plVar18;
  if (((byte)bVar7 & 1) == 0) {
    lVar31 = *(long *)param_1;
    lVar17 = *(long *)(param_1 + 0x10);
    plVar18[3] = *(long *)(param_1 + 8);
    plVar18[2] = lVar31;
    plVar18[4] = lVar17;
  }
  else {
                    /* try { // try from 00188778 to 00188783 has its CatchHandler @ 00188c1c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (plVar18 + 2),(char *)pbVar14,uVar20);
  }
  std::__ndk1::locale::locale((locale *)(plVar18 + 5),alStack_c0);
  plVar18[7] = lStack_b0;
  plVar18[6] = local_b8;
  plVar18[9] = lStack_a0;
  plVar18[8] = local_a8;
  plVar18[10] = local_98;
  plVar18[0xb] = (long)plStack_90;
  if (plStack_90 != (long *)0x0) {
    FUN_0015c230(1,plStack_90 + 1);
  }
  fVar11 = DAT_001bfe98;
  uVar24 = DAT_001bfe90;
  pbVar21 = (basic_string *)&DAT_001bfe90;
  plVar18[0xc] = local_88;
  local_70 = 1;
  if ((pbVar16 == (basic_string *)0x0) || (fVar11 * (float)pbVar16 < (float)(uVar24 + 1))) {
    if (pbVar16 < (basic_string *)0x3) {
      uVar20 = 1;
    }
    else {
      uVar20 = (ulong)(((ulong)pbVar16 & (ulong)(pbVar16 + -1)) != 0);
    }
    pbVar14 = (basic_string *)(uVar20 | (long)pbVar16 << 1);
    pbVar13 = (basic_string *)(long)((float)(uVar24 + 1) / fVar11);
    if (pbVar14 <= pbVar13) {
      pbVar14 = pbVar13;
    }
    if (pbVar14 + -1 == (basic_string *)0x0) {
      pbVar14 = (basic_string *)0x2;
    }
    else if (((ulong)pbVar14 & (ulong)(pbVar14 + -1)) != 0) {
                    /* try { // try from 00188840 to 0018886b has its CatchHandler @ 00188c20 */
      pbVar14 = (basic_string *)std::__ndk1::__next_prime((ulong)pbVar14);
    }
    pbVar13 = DAT_001bfe80;
    pbVar16 = pbVar14;
    if (DAT_001bfe80 < pbVar14) {
LAB_0018885c:
      if ((ulong)pbVar16 >> 0x3d != 0) goto LAB_00188be8;
      pvVar15 = operator_new((long)pbVar16 << 3);
      pvVar10 = DAT_001bfe78;
      bVar1 = DAT_001bfe78 != (void *)0x0;
      DAT_001bfe78 = pvVar15;
      if (bVar1) {
        operator_delete(pvVar10);
      }
      pbVar21 = (basic_string *)0x0;
      DAT_001bfe80 = pbVar16;
      do {
        *(undefined8 *)((long)DAT_001bfe78 + (long)pbVar21 * 8) = 0;
        plVar18 = DAT_001bfe88;
        pbVar21 = pbVar21 + 1;
      } while (pbVar16 != pbVar21);
      if (DAT_001bfe88 != (long *)0x0) {
        pbVar21 = (basic_string *)DAT_001bfe88[1];
        uVar30 = NEON_cnt(pbVar16,1);
        uVar29 = NEON_uaddlv(uVar30,1);
        uVar24 = CONCAT62((int6)((ulong)uVar30 >> 0x10),uVar29) & 0xffffffff;
        if (uVar24 < 2) {
          pbVar21 = (basic_string *)((ulong)pbVar21 & (ulong)(pbVar16 + -1));
        }
        else if (pbVar16 <= pbVar21) {
          uVar20 = 0;
          if (pbVar16 != (basic_string *)0x0) {
            uVar20 = (ulong)pbVar21 / (ulong)pbVar16;
          }
          pbVar21 = pbVar21 + -(uVar20 * (long)pbVar16);
        }
        *(long ***)((long)DAT_001bfe78 + (long)pbVar21 * 8) = &DAT_001bfe88;
        plVar26 = (long *)*plVar18;
        if (plVar26 != (long *)0x0) {
          do {
            pbVar14 = (basic_string *)plVar26[1];
            if (uVar24 < 2) {
              pbVar14 = (basic_string *)((ulong)pbVar14 & (ulong)(pbVar16 + -1));
            }
            else if (pbVar16 <= pbVar14) {
              uVar20 = 0;
              if (pbVar16 != (basic_string *)0x0) {
                uVar20 = (ulong)pbVar14 / (ulong)pbVar16;
              }
              pbVar14 = pbVar14 + -(uVar20 * (long)pbVar16);
            }
            if (pbVar14 != pbVar21) {
              if (*(long *)((long)DAT_001bfe78 + (long)pbVar14 * 8) == 0) {
                *(long **)((long)DAT_001bfe78 + (long)pbVar14 * 8) = plVar18;
                pbVar21 = pbVar14;
              }
              else {
                *plVar18 = *plVar26;
                *plVar26 = **(long **)((long)DAT_001bfe78 + (long)pbVar14 * 8);
                **(undefined8 **)((long)DAT_001bfe78 + (long)pbVar14 * 8) = plVar26;
                plVar26 = plVar18;
              }
            }
            plVar18 = plVar26;
            plVar26 = (long *)*plVar18;
          } while (plVar26 != (long *)0x0);
        }
      }
    }
    else {
      pbVar16 = DAT_001bfe80;
      if (pbVar14 < DAT_001bfe80) {
        pbVar16 = (basic_string *)(long)((float)DAT_001bfe90 / DAT_001bfe98);
        if (DAT_001bfe80 < (basic_string *)0x3) {
LAB_00188b44:
                    /* try { // try from 00188b44 to 00188b47 has its CatchHandler @ 00188c20 */
          pbVar16 = (basic_string *)std::__ndk1::__next_prime((ulong)pbVar16);
        }
        else {
          uVar30 = NEON_cnt(DAT_001bfe80,1);
          uVar29 = NEON_uaddlv(uVar30,1);
          if (1 < (uint)CONCAT62((int6)((ulong)uVar30 >> 0x10),uVar29)) goto LAB_00188b44;
          if ((basic_string *)0x1 < pbVar16) {
            pbVar16 = (basic_string *)(1L << (-LZCOUNT(pbVar16 + -1) & 0x3fU));
          }
        }
        pvVar10 = DAT_001bfe78;
        if (pbVar14 <= pbVar16) {
          pbVar14 = pbVar16;
        }
        pbVar16 = DAT_001bfe80;
        if (pbVar14 < pbVar13) {
          pbVar16 = pbVar14;
          if (pbVar14 != (basic_string *)0x0) goto LAB_0018885c;
          DAT_001bfe78 = (void *)0x0;
          if (pvVar10 != (void *)0x0) {
            operator_delete(pvVar10);
          }
          DAT_001bfe80 = (basic_string *)0x0;
          pbVar16 = (basic_string *)0x0;
        }
      }
    }
    if (((ulong)pbVar16 & (ulong)(pbVar16 + -1)) == 0) {
      pbVar13 = (basic_string *)((ulong)(pbVar16 + -1) & (ulong)pbVar27);
    }
    else {
      pbVar13 = pbVar27;
      if (pbVar16 <= pbVar27) {
        uVar24 = 0;
        if (pbVar16 != (basic_string *)0x0) {
          uVar24 = (ulong)pbVar27 / (ulong)pbVar16;
        }
        pbVar13 = pbVar27 + -(uVar24 * (long)pbVar16);
      }
    }
  }
  plVar18 = *(long **)((long)DAT_001bfe78 + (long)pbVar13 * 8);
  if (plVar18 == (long *)0x0) {
    *local_80 = (long)DAT_001bfe88;
    DAT_001bfe88 = local_80;
    *(long ***)((long)DAT_001bfe78 + (long)pbVar13 * 8) = &DAT_001bfe88;
    if (*local_80 != 0) {
      pbVar21 = *(basic_string **)(*local_80 + 8);
      if (((ulong)pbVar16 & (ulong)(pbVar16 + -1)) == 0) {
        pbVar21 = (basic_string *)((ulong)pbVar21 & (ulong)(pbVar16 + -1));
      }
      else if (pbVar16 <= pbVar21) {
        uVar24 = 0;
        if (pbVar16 != (basic_string *)0x0) {
          uVar24 = (ulong)pbVar21 / (ulong)pbVar16;
        }
        pbVar21 = pbVar21 + -(uVar24 * (long)pbVar16);
      }
      plVar18 = (long *)((long)DAT_001bfe78 + (long)pbVar21 * 8);
      goto LAB_00188a7c;
    }
  }
  else {
    *local_80 = *plVar18;
LAB_00188a7c:
    *plVar18 = (long)local_80;
  }
  DAT_001bfe90 = DAT_001bfe90 + 1;
LAB_00188a90:
  *in_x8 = 0;
  in_x8[1] = 0;
  TVar6 = *this;
  uVar24 = *(ulong *)(this + 8);
  pTVar4 = *(TypeInfo **)(this + 0x10);
  bVar7 = *param_2;
  in_x8[2] = 0;
  pbVar21 = *(basic_string **)(param_2 + 0x10);
  if (((byte)TVar6 & 1) == 0) {
    pTVar4 = this + 1;
    uVar24 = (ulong)((byte)TVar6 >> 1);
  }
  if (((byte)bVar7 & 1) == 0) {
    pbVar21 = param_2 + 1;
  }
                    /* try { // try from 00188ac8 to 00188ad7 has its CatchHandler @ 00188c38 */
  FUN_00188d8c(in_x8,pTVar4,pTVar4 + uVar24,alStack_c0,pbVar21);
  plVar18 = plStack_90;
  if ((plStack_90 != (long *)0x0) &&
     (lVar17 = FUN_0015bb40(0xffffffffffffffff,plStack_90 + 1), lVar17 == 0)) {
    (**(code **)(*plVar18 + 0x10))(plVar18);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  std::__ndk1::locale::~locale(alStack_c0);
LAB_00188b14:
  if (*(long *)(lVar9 + 0x28) == local_68) {
    return;
  }
LAB_00188c98:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00188c9c  FUN_00188c9c =====

void FUN_00188c9c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)param_1[2];
  while (puVar2 != (undefined8 *)0x0) {
    plVar6 = (long *)puVar2[0xb];
    pvVar3 = (void *)*puVar2;
    if ((plVar6 != (long *)0x0) && (lVar4 = FUN_0015bb40(0xffffffffffffffff,plVar6 + 1), lVar4 == 0)
       ) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    std::__ndk1::locale::~locale((locale *)(puVar2 + 5));
    if ((*(byte *)(puVar2 + 2) & 1) != 0) {
      operator_delete((void *)puVar2[4]);
    }
    operator_delete(puVar2);
    puVar2 = (undefined8 *)pvVar3;
  }
  pvVar3 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar3 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar5) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar5) {
    operator_delete(pvVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00188d8c  FUN_00188d8c =====

void FUN_00188d8c(char param_1,long param_2,long param_3,undefined8 param_4,byte *param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  size_t sVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  byte *pbVar15;
  long lVar16;
  long lVar17;
  byte *pbVar18;
  long lVar19;
  uint local_168;
  long *local_160;
  long *plStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined7 local_147;
  undefined1 uStack_140;
  undefined8 uStack_13f;
  long local_130;
  long local_128;
  undefined1 local_120;
  long local_118;
  long lStack_110;
  undefined1 local_108;
  undefined1 local_100;
  undefined8 local_f8;
  void *local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined7 local_d7;
  undefined1 uStack_d0;
  undefined8 uStack_cf;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined1 local_90;
  undefined8 local_88;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  local_168 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  lStack_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  plStack_158 = (long *)0x0;
  local_160 = (long *)0x0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_13f = 0;
  local_147 = 0;
  uStack_140 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  uStack_e8 = 0;
  local_f0 = (void *)0x0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_cf = 0;
  local_d7 = 0;
  uStack_d0 = 0;
                    /* try { // try from 00188e20 to 00188e4b has its CatchHandler @ 001892a0 */
  FUN_0019332c(param_4,param_2,param_3,&local_f0,0);
  FUN_001935ac(&local_160,param_2,param_3,&local_f0,0);
  if (local_f0 != (void *)0x0) {
    operator_delete(local_f0);
  }
  if (plStack_158 == local_160) {
    if (param_2 != param_3) {
      do {
                    /* try { // try from 0018921c to 00189223 has its CatchHandler @ 001892c0 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::push_back(param_1);
        param_2 = param_2 + 1;
      } while (param_2 != param_3);
    }
  }
  else {
    sVar10 = strlen((char *)param_5);
    pbVar2 = param_5 + sVar10;
    plVar4 = local_160;
    lVar13 = local_130;
    lVar17 = local_130;
    lVar7 = local_128;
    lVar8 = local_118;
    lVar9 = lStack_110;
    do {
      for (; lVar19 = local_128, local_160 = plVar4, local_130 = lVar17, local_118 = lVar8,
          lStack_110 = lVar9, lVar13 != local_128; lVar13 = lVar13 + 1) {
        local_128 = lVar7;
                    /* try { // try from 00188ebc to 00188ec3 has its CatchHandler @ 001892f0 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::push_back(param_1);
        plVar4 = local_160;
        lVar17 = local_130;
        lVar7 = local_128;
        lVar8 = local_118;
        lVar9 = lStack_110;
        local_128 = lVar19;
      }
      local_128 = lVar7;
      if (sVar10 != 0) {
        lVar13 = (long)plStack_158 - (long)plVar4;
        pbVar18 = param_5;
        do {
          pbVar1 = pbVar18;
          if ((*pbVar18 == 0x24) && (pbVar15 = pbVar18 + 1, pbVar15 != pbVar2)) {
            uVar12 = (uint)*pbVar15;
            if (*pbVar15 < 0x27) {
              pbVar1 = pbVar15;
              if (uVar12 == 0x24) goto LAB_00188f08;
              if (uVar12 == 0x26) {
                lVar16 = plVar4[1];
                for (lVar19 = *plVar4; lVar19 != lVar16; lVar19 = lVar19 + 1) {
                    /* try { // try from 00188f64 to 00188f6b has its CatchHandler @ 001892f4 */
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  push_back(param_1);
                }
              }
              else {
LAB_00188fb4:
                pbVar1 = pbVar18;
                if (9 < uVar12 - 0x30) goto LAB_00188f08;
                pbVar1 = pbVar18 + 2;
                uVar14 = (ulong)(uVar12 - 0x30);
                uVar11 = uVar14;
                if ((pbVar1 != pbVar2) &&
                   (uVar11 = ((ulong)*pbVar1 + uVar14 * 10) - 0x30, pbVar15 = pbVar1,
                   9 < *pbVar1 - 0x30)) {
                  uVar11 = uVar14;
                  pbVar15 = pbVar18 + 1;
                }
                plVar3 = plVar4 + uVar11 * 3 + 1;
                plVar6 = plVar4 + uVar11 * 3;
                if ((ulong)((lVar13 >> 3) * -0x5555555555555555) <= uVar11) {
                  plVar3 = (long *)&uStack_140;
                  plVar6 = (long *)&uStack_148;
                }
                lVar16 = *plVar3;
                for (lVar19 = *plVar6; lVar19 != lVar16; lVar19 = lVar19 + 1) {
                    /* try { // try from 0018902c to 00189033 has its CatchHandler @ 001892e8 */
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  push_back(param_1);
                }
              }
            }
            else {
              lVar19 = lVar8;
              if (uVar12 == 0x27) {
                for (; lVar19 != lVar9; lVar19 = lVar19 + 1) {
                    /* try { // try from 0018905c to 00189063 has its CatchHandler @ 001892f8 */
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  push_back(param_1);
                }
              }
              else {
                lVar19 = lVar17;
                if (uVar12 != 0x60) goto LAB_00188fb4;
                for (; lVar19 != lVar7; lVar19 = lVar19 + 1) {
                    /* try { // try from 00188f9c to 00188fa3 has its CatchHandler @ 001892fc */
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  push_back(param_1);
                }
              }
            }
          }
          else {
LAB_00188f08:
                    /* try { // try from 00188f08 to 00188f0f has its CatchHandler @ 001892ec */
            pbVar15 = pbVar1;
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back(param_1);
          }
          pbVar18 = pbVar15 + 1;
        } while (pbVar18 != pbVar2);
      }
      lVar16 = lStack_110;
      lVar19 = local_118;
      uVar12 = local_168 | 0x800;
      plVar4 = (long *)&uStack_140;
      plVar3 = (long *)&uStack_148;
      if (plStack_158 != local_160) {
        plVar4 = local_160 + 1;
        plVar3 = local_160;
      }
      lVar17 = *plVar4;
      lVar13 = lVar17;
      if (*plVar3 == lVar17) {
        if (param_3 == lVar17) goto joined_r0x001891ec;
        local_c0 = 0;
        uStack_b8 = 0;
        local_b0 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 0;
        local_90 = 0;
        local_88 = 0;
        uStack_e8 = 0;
        local_f0 = (void *)0x0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_cf = 0;
        local_d7 = 0;
        uStack_d0 = 0;
                    /* try { // try from 00189194 to 001891cb has its CatchHandler @ 001892c4 */
        uVar11 = FUN_0019332c(param_4,lVar17,param_3,&local_f0,local_168 | 0x860);
        FUN_001935ac(&local_160,lVar17,param_3,&local_f0,1);
        if (local_f0 != (void *)0x0) {
          operator_delete(local_f0);
        }
        local_168 = uVar12;
        if ((uVar11 & 1) == 0) {
          lVar13 = lVar17 + 1;
          goto LAB_001890b4;
        }
      }
      else {
LAB_001890b4:
        uVar12 = 0x880;
        local_c0 = 0;
        uStack_b8 = 0;
        local_b0 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 0;
        local_90 = 0;
        local_88 = 0;
        uStack_e8 = 0;
        local_f0 = (void *)0x0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_cf = 0;
        local_d7 = 0;
        uStack_d0 = 0;
                    /* try { // try from 001890e8 to 00189117 has its CatchHandler @ 001892cc */
        uVar11 = FUN_0019332c(param_4,lVar13,param_3,&local_f0);
        FUN_001935ac(&local_160,lVar13,param_3,&local_f0,1);
        if (local_f0 != (void *)0x0) {
          operator_delete(local_f0);
        }
        if ((uVar11 & 1) == 0) {
joined_r0x001891ec:
          if (local_160 != (long *)0x0) {
            operator_delete(local_160);
          }
          local_100 = 0;
          local_130 = 0;
          local_128 = 0;
          local_120 = 0;
          local_118 = 0;
          lStack_110 = 0;
          plStack_158 = (long *)0x0;
          local_160 = (long *)0x0;
          uStack_148 = 0;
          uStack_150 = 0;
          uStack_13f = 0;
          local_147 = 0;
          uStack_140 = 0;
          local_108 = 0;
          local_f8 = 0;
          local_168 = uVar12;
        }
        else {
          local_120 = local_128 != lVar17;
          local_168 = uVar12;
          local_130 = lVar17;
        }
      }
      plVar4 = local_160;
      lVar13 = local_130;
      lVar17 = local_130;
      lVar7 = local_128;
      lVar8 = local_118;
      lVar9 = lStack_110;
    } while (plStack_158 != local_160);
    for (; lVar19 != lVar16; lVar19 = lVar19 + 1) {
                    /* try { // try from 001891f8 to 001891ff has its CatchHandler @ 001892c8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back(param_1);
    }
  }
  if (local_160 == (long *)0x0) {
    if (*(long *)(lVar5 + 0x28) == local_78) {
      return;
    }
  }
  else if (*(long *)(lVar5 + 0x28) == local_78) {
    operator_delete(local_160);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00189330  FUN_00189330 =====

void FUN_00189330(locale *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x30);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    std::__ndk1::locale::~locale(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001893b0  FUN_001893b0 =====

void FUN_001893b0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  long *plVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  pvVar4 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar4 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    if (*(char *)(param_1 + 2) != '\0') {
      plVar5 = *(long **)((long)pvVar4 + 0x58);
      if ((plVar5 != (long *)0x0) &&
         (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar5 + 1), lVar2 == 0)) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      std::__ndk1::locale::~locale((locale *)((long)pvVar4 + 0x28));
      if ((*(byte *)((long)pvVar4 + 0x10) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar4 + 0x20));
      }
    }
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      operator_delete(pvVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018947c  FUN_0018947c =====

void * FUN_0018947c(long param_1,void *param_2,void *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  
  lVar2 = tpidr_el0;
  lVar10 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined8 *)operator_new(8);
  *puVar3 = &PTR_FUN_001b8268;
                    /* try { // try from 001894cc to 001894d3 has its CatchHandler @ 0018992c */
  puVar4 = (undefined8 *)operator_new(0x10);
  *puVar4 = &PTR_FUN_001b8310;
  puVar4[1] = puVar3;
                    /* try { // try from 001894e4 to 001894eb has its CatchHandler @ 00189904 */
  puVar3 = (undefined8 *)operator_new(0x20);
  plVar13 = *(long **)(param_1 + 0x30);
  *puVar3 = &PTR____shared_weak_count_001b82c0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = puVar4;
  *(undefined8 **)(param_1 + 0x28) = puVar4;
  *(undefined8 **)(param_1 + 0x30) = puVar3;
  if ((plVar13 != (long *)0x0) && (lVar5 = FUN_0015bb40(0xffffffffffffffff,plVar13 + 1), lVar5 == 0)
     ) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x18) & 0x1f0;
  *(undefined8 **)(param_1 + 0x38) = puVar3;
  if (uVar1 < 0x40) {
    if (uVar1 == 0) {
      if (*(long *)(lVar2 + 0x28) == lVar10) {
        pvVar7 = (void *)FUN_00189a6c(param_1,param_2,param_3);
        return pvVar7;
      }
      goto LAB_0018995c;
    }
    if (uVar1 == 0x10) {
      if (*(long *)(lVar2 + 0x28) == lVar10) {
        pvVar7 = (void *)FUN_00189ce8(param_1,param_2,param_3);
        return pvVar7;
      }
      goto LAB_0018995c;
    }
    if (uVar1 != 0x20) {
LAB_001898f0:
      if (*(long *)(lVar2 + 0x28) == lVar10) {
        uVar9 = FUN_0018a048();
                    /* catch() { ... } // from try @ 001894e4 with catch @ 00189904 */
        *puVar3 = &PTR_FUN_001b8388;
        operator_delete(plVar13);
        operator_delete(puVar3);
        if (*(long *)(lVar2 + 0x28) == lVar10) {
          (**(code **)(*plVar13 + 8))(plVar13);
          FUN_00157e74(uVar9);
        }
      }
      goto LAB_0018995c;
    }
  }
  else if (uVar1 != 0x40) {
    if (uVar1 == 0x80) {
      pvVar6 = memchr(param_2,10,(long)param_3 - (long)param_2);
      pvVar7 = param_3;
      if (pvVar6 != (void *)0x0) {
        pvVar7 = pvVar6;
      }
      if (pvVar7 == param_2) {
        puVar4 = (undefined8 *)operator_new(0x10);
        uVar9 = puVar3[1];
        *puVar4 = &PTR_FUN_001b8310;
        puVar4[1] = uVar9;
        puVar3[1] = puVar4;
        *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
      }
      else {
        FUN_00189ce8(param_1,param_2,pvVar7);
      }
      if (pvVar7 != param_3) {
        pvVar7 = (void *)((long)pvVar7 + 1);
      }
      if (pvVar7 != param_3) {
        lVar5 = *(long *)(param_1 + 0x38);
        do {
          pvVar8 = memchr(pvVar7,10,(long)param_3 - (long)pvVar7);
          pvVar6 = param_3;
          if (pvVar8 != (void *)0x0) {
            pvVar6 = pvVar8;
          }
          if (pvVar6 == pvVar7) {
            puVar4 = (undefined8 *)operator_new(0x10);
            uVar9 = *(undefined8 *)(lVar5 + 8);
            *puVar4 = &PTR_FUN_001b8310;
            puVar4[1] = uVar9;
            *(undefined8 **)(lVar5 + 8) = puVar4;
            *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
          }
          else {
            FUN_00189ce8(param_1,pvVar7,pvVar6);
          }
          puVar4 = (undefined8 *)operator_new(0x18);
          uVar9 = *(undefined8 *)(lVar5 + 8);
          uVar12 = puVar3[1];
          *puVar4 = &PTR_FUN_001b8880;
          puVar4[1] = uVar12;
          puVar4[2] = uVar9;
          puVar3[1] = puVar4;
          *(undefined8 *)(lVar5 + 8) = 0;
          puVar4 = (undefined8 *)operator_new(0x10);
          lVar11 = *(long *)(param_1 + 0x38);
          *puVar4 = &PTR_FUN_001b8310;
          puVar4[1] = *(undefined8 *)(lVar11 + 8);
          *(undefined8 **)(lVar5 + 8) = puVar4;
          *(undefined8 *)(*(long *)(param_1 + 0x38) + 8) = 0;
          puVar4 = (undefined8 *)operator_new(0x10);
          uVar9 = *(undefined8 *)(lVar5 + 8);
          lVar11 = *(long *)(param_1 + 0x38);
          if (pvVar6 != param_3) {
            pvVar6 = (void *)((long)pvVar6 + 1);
          }
          *puVar4 = &PTR_FUN_001b88c8;
          puVar4[1] = uVar9;
          *(undefined8 **)(lVar11 + 8) = puVar4;
          lVar5 = *(long *)(lVar5 + 8);
          *(long *)(param_1 + 0x38) = lVar5;
          pvVar7 = pvVar6;
        } while (pvVar6 != param_3);
      }
    }
    else {
      if (uVar1 != 0x100) goto LAB_001898f0;
      pvVar6 = memchr(param_2,10,(long)param_3 - (long)param_2);
      pvVar7 = param_3;
      if (pvVar6 != (void *)0x0) {
        pvVar7 = pvVar6;
      }
      if (pvVar7 == param_2) {
        puVar4 = (undefined8 *)operator_new(0x10);
        uVar9 = puVar3[1];
        *puVar4 = &PTR_FUN_001b8310;
        puVar4[1] = uVar9;
        puVar3[1] = puVar4;
        *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
      }
      else {
        FUN_00189ea8(param_1,param_2,pvVar7);
      }
      if (pvVar7 != param_3) {
        pvVar7 = (void *)((long)pvVar7 + 1);
      }
      if (pvVar7 != param_3) {
        lVar5 = *(long *)(param_1 + 0x38);
        do {
          pvVar8 = memchr(pvVar7,10,(long)param_3 - (long)pvVar7);
          pvVar6 = param_3;
          if (pvVar8 != (void *)0x0) {
            pvVar6 = pvVar8;
          }
          if (pvVar6 == pvVar7) {
            puVar4 = (undefined8 *)operator_new(0x10);
            uVar9 = *(undefined8 *)(lVar5 + 8);
            *puVar4 = &PTR_FUN_001b8310;
            puVar4[1] = uVar9;
            *(undefined8 **)(lVar5 + 8) = puVar4;
            *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
          }
          else {
            FUN_00189ea8(param_1,pvVar7,pvVar6);
          }
          puVar4 = (undefined8 *)operator_new(0x18);
          uVar9 = *(undefined8 *)(lVar5 + 8);
          uVar12 = puVar3[1];
          *puVar4 = &PTR_FUN_001b8880;
          puVar4[1] = uVar12;
          puVar4[2] = uVar9;
          puVar3[1] = puVar4;
          *(undefined8 *)(lVar5 + 8) = 0;
          puVar4 = (undefined8 *)operator_new(0x10);
          lVar11 = *(long *)(param_1 + 0x38);
          *puVar4 = &PTR_FUN_001b8310;
          puVar4[1] = *(undefined8 *)(lVar11 + 8);
          *(undefined8 **)(lVar5 + 8) = puVar4;
          *(undefined8 *)(*(long *)(param_1 + 0x38) + 8) = 0;
          puVar4 = (undefined8 *)operator_new(0x10);
          uVar9 = *(undefined8 *)(lVar5 + 8);
          lVar11 = *(long *)(param_1 + 0x38);
          if (pvVar6 != param_3) {
            pvVar6 = (void *)((long)pvVar6 + 1);
          }
          *puVar4 = &PTR_FUN_001b88c8;
          puVar4[1] = uVar9;
          *(undefined8 **)(lVar11 + 8) = puVar4;
          lVar5 = *(long *)(lVar5 + 8);
          *(long *)(param_1 + 0x38) = lVar5;
          pvVar7 = pvVar6;
        } while (pvVar6 != param_3);
      }
    }
    if (*(long *)(lVar2 + 0x28) == lVar10) {
      return param_3;
    }
    goto LAB_0018995c;
  }
  if (*(long *)(lVar2 + 0x28) == lVar10) {
    pvVar7 = (void *)FUN_00189ea8(param_1,param_2,param_3);
    return pvVar7;
  }
LAB_0018995c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00189960  FUN_00189960 =====

void FUN_00189960(void)

{
  long lVar1;
  regex_error *prVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  prVar2 = (regex_error *)__cxa_allocate_exception(0x18);
                    /* try { // try from 00189988 to 0018998f has its CatchHandler @ 001899b8 */
  std::__ndk1::regex_error::regex_error(prVar2,0x11);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* WARNING: Subroutine does not return */
    __cxa_throw(prVar2,PTR_typeinfo_001ba1a8,PTR__regex_error_001ba1a0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001899e0  FUN_001899e0 =====

void FUN_001899e0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_0015bb40(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
     ) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00189a6c  FUN_00189a6c =====

char * FUN_00189a6c(long param_1,char *param_2,char *param_3)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 *puVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  
  lVar2 = tpidr_el0;
  lVar8 = *(long *)(lVar2 + 0x28);
  lVar12 = *(long *)(param_1 + 0x38);
  pcVar3 = param_2;
  do {
    pcVar6 = pcVar3;
    pcVar3 = (char *)FUN_00190e14(param_1,pcVar6,param_3);
    if (pcVar6 == pcVar3) {
      uVar11 = *(undefined8 *)(param_1 + 0x38);
      iVar1 = *(int *)(param_1 + 0x1c);
      pcVar4 = (char *)FUN_00191178(param_1,pcVar6,param_3);
      pcVar3 = pcVar6;
      if (pcVar6 != pcVar4) {
        pcVar3 = (char *)FUN_0018a874(param_1,pcVar4,param_3,uVar11,iVar1 + 1,
                                      *(int *)(param_1 + 0x1c) + 1);
      }
    }
  } while (pcVar6 != pcVar3);
  pcVar3 = pcVar6;
  if (pcVar6 == param_2) {
    puVar5 = (undefined8 *)operator_new(0x10);
    lVar9 = *(long *)(param_1 + 0x38);
    *puVar5 = &PTR_FUN_001b8310;
    puVar5[1] = *(undefined8 *)(lVar9 + 8);
    *(undefined8 **)(lVar9 + 8) = puVar5;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
  }
  while ((pcVar6 != param_3 && (pcVar3 = pcVar6, *pcVar6 == '|'))) {
    lVar9 = *(long *)(param_1 + 0x38);
    pcVar3 = pcVar6 + 1;
    pcVar4 = pcVar3;
    do {
      pcVar6 = pcVar4;
      pcVar4 = (char *)FUN_00190e14(param_1,pcVar6,param_3);
      if (pcVar6 == pcVar4) {
        uVar11 = *(undefined8 *)(param_1 + 0x38);
        iVar1 = *(int *)(param_1 + 0x1c);
        pcVar7 = (char *)FUN_00191178(param_1,pcVar6,param_3);
        pcVar4 = pcVar6;
        if (pcVar6 != pcVar7) {
          pcVar4 = (char *)FUN_0018a874(param_1,pcVar7,param_3,uVar11,iVar1 + 1,
                                        *(int *)(param_1 + 0x1c) + 1);
        }
      }
    } while (pcVar6 != pcVar4);
    if (pcVar6 == pcVar3) {
      puVar5 = (undefined8 *)operator_new(0x10);
      lVar10 = *(long *)(param_1 + 0x38);
      *puVar5 = &PTR_FUN_001b8310;
      puVar5[1] = *(undefined8 *)(lVar10 + 8);
      *(undefined8 **)(lVar10 + 8) = puVar5;
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
    }
    puVar5 = (undefined8 *)operator_new(0x18);
    uVar11 = *(undefined8 *)(lVar9 + 8);
    puVar5[1] = *(undefined8 *)(lVar12 + 8);
    puVar5[2] = uVar11;
    *puVar5 = &PTR_FUN_001b8880;
    *(undefined8 **)(lVar12 + 8) = puVar5;
    *(undefined8 *)(lVar9 + 8) = 0;
    puVar5 = (undefined8 *)operator_new(0x10);
    lVar10 = *(long *)(param_1 + 0x38);
    *puVar5 = &PTR_FUN_001b8310;
    puVar5[1] = *(undefined8 *)(lVar10 + 8);
    *(undefined8 **)(lVar9 + 8) = puVar5;
    *(undefined8 *)(*(long *)(param_1 + 0x38) + 8) = 0;
    puVar5 = (undefined8 *)operator_new(0x10);
    uVar11 = *(undefined8 *)(lVar9 + 8);
    lVar10 = *(long *)(param_1 + 0x38);
    *puVar5 = &PTR_FUN_001b88c8;
    puVar5[1] = uVar11;
    *(undefined8 **)(lVar10 + 8) = puVar5;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar9 + 8);
    pcVar3 = param_3;
  }
  if (*(long *)(lVar2 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pcVar3;
}


// ===== 00189ce8  FUN_00189ce8 =====

char * FUN_00189ce8(long param_1,char *param_2,char *param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  undefined8 uVar10;
  
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
  pcVar9 = param_2;
  if (param_2 != param_3) {
    pcVar9 = param_3;
    if (*param_2 == '^') {
      puVar6 = (undefined8 *)operator_new(0x18);
      lVar8 = *(long *)(param_1 + 0x38);
      uVar2 = *(uint *)(param_1 + 0x18);
      uVar10 = *(undefined8 *)(lVar8 + 8);
      *puVar6 = &PTR_FUN_001b83b8;
      puVar6[1] = uVar10;
      *(undefined8 **)(lVar8 + 8) = puVar6;
      uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
      *(bool *)(puVar6 + 2) = (uVar2 & 0x5f0) == 0x400;
      *(undefined8 *)(param_1 + 0x38) = uVar10;
      pcVar5 = param_2 + 1;
      if (param_2 + 1 != param_3) goto LAB_00189dcc;
    }
    else {
      pcVar5 = param_2;
      if (param_2 != param_3) {
LAB_00189dcc:
        do {
          pcVar4 = pcVar5;
          if (pcVar4 == param_3) goto LAB_00189e64;
          uVar10 = *(undefined8 *)(param_1 + 0x38);
          iVar1 = *(int *)(param_1 + 0x1c);
          pcVar5 = (char *)FUN_00190848(param_1,pcVar4,param_3);
        } while ((pcVar4 != pcVar5) &&
                (pcVar5 = (char *)FUN_00190b8c(param_1,pcVar5,param_3,uVar10,iVar1 + 1,
                                               *(int *)(param_1 + 0x1c) + 1), pcVar4 != pcVar5));
        if ((pcVar4 + 1 != param_3) || (*pcVar4 != '$')) {
          if (*(long *)(lVar3 + 0x28) == lVar7) {
            FUN_0018a774();
          }
          goto LAB_00189ea4;
        }
        puVar6 = (undefined8 *)operator_new(0x18);
        lVar8 = *(long *)(param_1 + 0x38);
        uVar2 = *(uint *)(param_1 + 0x18);
        uVar10 = *(undefined8 *)(lVar8 + 8);
        *puVar6 = &PTR_FUN_001b8400;
        puVar6[1] = uVar10;
        *(undefined8 **)(lVar8 + 8) = puVar6;
        uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
        *(bool *)(puVar6 + 2) = (uVar2 & 0x5f0) == 0x400;
        *(undefined8 *)(param_1 + 0x38) = uVar10;
      }
    }
  }
LAB_00189e64:
  if (*(long *)(lVar3 + 0x28) == lVar7) {
    return pcVar9;
  }
LAB_00189ea4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00189ea8  FUN_00189ea8 =====

char * FUN_00189ea8(long param_1,char *param_2,char *param_3)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  lVar1 = tpidr_el0;
  lVar6 = *(long *)(lVar1 + 0x28);
  lVar10 = *(long *)(param_1 + 0x38);
  pcVar2 = (char *)FUN_0018a438();
  if (pcVar2 != param_2) {
    do {
      pcVar4 = pcVar2;
      pcVar2 = (char *)FUN_0018a438(param_1,pcVar4,param_3);
    } while (pcVar4 != pcVar2);
    if (pcVar4 != param_2) {
      while ((pcVar2 = param_3, pcVar4 != param_3 && (pcVar2 = pcVar4, *pcVar4 == '|'))) {
        pcVar2 = pcVar4 + 1;
        lVar11 = *(long *)(param_1 + 0x38);
        pcVar3 = (char *)FUN_0018a438(param_1,pcVar2,param_3);
        if (pcVar2 == pcVar3) goto LAB_0018a030;
        do {
          pcVar4 = pcVar3;
          pcVar3 = (char *)FUN_0018a438(param_1,pcVar4,param_3);
        } while (pcVar4 != pcVar3);
        if (pcVar4 == pcVar2) goto LAB_0018a030;
        puVar5 = (undefined8 *)operator_new(0x18);
        uVar7 = *(undefined8 *)(lVar11 + 8);
        uVar9 = *(undefined8 *)(lVar10 + 8);
        *puVar5 = &PTR_FUN_001b8880;
        puVar5[1] = uVar9;
        puVar5[2] = uVar7;
        *(undefined8 **)(lVar10 + 8) = puVar5;
        *(undefined8 *)(lVar11 + 8) = 0;
        puVar5 = (undefined8 *)operator_new(0x10);
        lVar8 = *(long *)(param_1 + 0x38);
        *puVar5 = &PTR_FUN_001b8310;
        puVar5[1] = *(undefined8 *)(lVar8 + 8);
        *(undefined8 **)(lVar11 + 8) = puVar5;
        *(undefined8 *)(*(long *)(param_1 + 0x38) + 8) = 0;
        puVar5 = (undefined8 *)operator_new(0x10);
        uVar7 = *(undefined8 *)(lVar11 + 8);
        lVar8 = *(long *)(param_1 + 0x38);
        *puVar5 = &PTR_FUN_001b88c8;
        puVar5[1] = uVar7;
        *(undefined8 **)(lVar8 + 8) = puVar5;
        *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar11 + 8);
      }
      if (*(long *)(lVar1 + 0x28) == lVar6) {
        return pcVar2;
      }
      goto LAB_0018a044;
    }
  }
LAB_0018a030:
  if (*(long *)(lVar1 + 0x28) == lVar6) {
    FUN_0018a774();
  }
LAB_0018a044:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018a048  FUN_0018a048 =====

void FUN_0018a048(void)

{
  long lVar1;
  regex_error *prVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  prVar2 = (regex_error *)__cxa_allocate_exception(0x18);
                    /* try { // try from 0018a070 to 0018a077 has its CatchHandler @ 0018a0a0 */
  std::__ndk1::regex_error::regex_error(prVar2,0xe);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* WARNING: Subroutine does not return */
    __cxa_throw(prVar2,PTR_typeinfo_001ba1a8,PTR__regex_error_001ba1a0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018a0c8  FUN_0018a0c8 =====

void FUN_0018a0c8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018a100  FUN_0018a100 =====

void FUN_0018a100(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018a138  FUN_0018a138 =====

void FUN_0018a138(long param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *param_2 = 0xfffffc1e;
  *(undefined8 *)(param_2 + 0x14) = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018a180  FUN_0018a180 =====

void FUN_0018a180(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018a1b8  FUN_0018a1b8 =====

void FUN_0018a1b8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_001b8808;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  *param_1 = &PTR_FUN_001b8388;
  if ((long *)param_1[1] == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x0018a230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[1] + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018a258  FUN_0018a258 =====

void FUN_0018a258(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_001b8808;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  *param_1 = &PTR_FUN_001b8388;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018a2e0  FUN_0018a2e0 =====

void FUN_0018a2e0(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = 0xfffffc20;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018a320  FUN_0018a320 =====

void FUN_0018a320(long param_1,uint param_2,undefined4 *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  *param_3 = 0xfffffc1e;
  lVar1 = 0x10;
  if ((param_2 & 1) == 0) {
    lVar1 = 8;
  }
  *(undefined8 *)(param_3 + 0x14) = *(undefined8 *)(param_1 + lVar1);
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018a378  FUN_0018a378 =====

void FUN_0018a378(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_001b8808;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  *param_1 = &PTR_FUN_001b8388;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018a400  FUN_0018a400 =====

void FUN_0018a400(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018a438  FUN_0018a438 =====

byte * FUN_0018a438(long param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  int iVar13;
  undefined1 auVar14 [16];
  
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
  uVar12 = *(undefined8 *)(param_1 + 0x38);
  iVar1 = *(int *)(param_1 + 0x1c);
  if (param_2 == param_3) {
    pbVar4 = (byte *)FUN_0018b808(param_1,param_2,param_3);
    pbVar5 = pbVar4;
    if (pbVar4 == param_2) {
LAB_0018a52c:
      pbVar4 = (byte *)FUN_0018b8f0(param_1,param_2,param_3);
      pbVar5 = pbVar4;
    }
joined_r0x0018a654:
    if (pbVar4 != param_2) goto LAB_0018a6e0;
LAB_0018a548:
    if (pbVar4 == param_3) goto LAB_0018a6e0;
    bVar2 = *param_2;
    if (bVar2 != 0x24) {
      if (bVar2 == 0x28) {
        if ((*(byte *)(param_1 + 0x18) >> 1 & 1) == 0) {
          puVar6 = (undefined8 *)operator_new(0x18);
          lVar8 = *(long *)(param_1 + 0x38);
          uVar10 = *(undefined8 *)(lVar8 + 8);
          iVar13 = *(int *)(param_1 + 0x1c) + 1;
          *puVar6 = &PTR_FUN_001b8718;
          *(int *)(param_1 + 0x1c) = iVar13;
          puVar6[1] = uVar10;
          *(undefined8 **)(lVar8 + 8) = puVar6;
          lVar8 = *(long *)(param_1 + 0x38);
          *(int *)(puVar6 + 2) = iVar13;
          *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar8 + 8);
        }
        else {
          iVar13 = *(int *)(param_1 + 0x1c);
        }
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
        auVar14 = FUN_00189ea8(param_1,param_2 + 1,param_3);
        pbVar4 = auVar14._0_8_;
        if ((pbVar4 == param_3) || (*pbVar4 != 0x29)) {
          if (*(long *)(lVar3 + 0x28) == lVar7) {
            auVar14 = FUN_0018a7f4();
          }
          goto LAB_0018a770;
        }
        pbVar5 = pbVar4;
        if ((*(byte *)(param_1 + 0x18) >> 1 & 1) == 0) {
          pbVar5 = (byte *)operator_new(0x18);
          lVar8 = *(long *)(param_1 + 0x38);
          *(undefined ***)pbVar5 = &PTR_FUN_001b8760;
          uVar10 = *(undefined8 *)(lVar8 + 8);
          *(int *)(pbVar5 + 0x10) = iVar13;
          *(undefined8 *)(pbVar5 + 8) = uVar10;
          *(byte **)(lVar8 + 8) = pbVar5;
          *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
        }
        pbVar4 = pbVar4 + 1;
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
        goto LAB_0018a6e0;
      }
      if (bVar2 == 0x5e) {
        pbVar5 = (byte *)operator_new(0x18);
        lVar8 = *(long *)(param_1 + 0x38);
        uVar9 = *(uint *)(param_1 + 0x18);
        ppuVar11 = &PTR_FUN_001b83b8;
        goto LAB_0018a5f4;
      }
      goto LAB_0018a72c;
    }
    pbVar5 = (byte *)operator_new(0x18);
    lVar8 = *(long *)(param_1 + 0x38);
    uVar9 = *(uint *)(param_1 + 0x18);
    ppuVar11 = &PTR_FUN_001b8400;
LAB_0018a5f4:
    uVar10 = *(undefined8 *)(lVar8 + 8);
    *(undefined ***)pbVar5 = ppuVar11;
    *(undefined8 *)(pbVar5 + 8) = uVar10;
    pbVar4 = param_2 + 1;
    *(byte **)(lVar8 + 8) = pbVar5;
    lVar8 = *(long *)(param_1 + 0x38);
    pbVar5[0x10] = (uVar9 & 0x5f0) == 0x400;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar8 + 8);
  }
  else {
    uVar9 = *param_2 - 0x24;
    if (uVar9 < 0x3b) {
      if ((1L << ((ulong)uVar9 & 0x3f) & 0x5800000080004d1U) == 0) {
        if ((ulong)uVar9 != 5) goto LAB_0018a638;
        if (*(int *)(param_1 + 0x24) != 0) goto LAB_0018a4a8;
        goto LAB_0018a644;
      }
    }
    else {
LAB_0018a638:
      if (1 < *param_2 - 0x7b) {
LAB_0018a644:
        pbVar5 = (byte *)FUN_0018b6a0(param_1);
        pbVar4 = param_2 + 1;
        goto joined_r0x0018a654;
      }
    }
LAB_0018a4a8:
    pbVar4 = (byte *)FUN_0018b808(param_1,param_2,param_3);
    pbVar5 = pbVar4;
    if (pbVar4 != param_2) goto joined_r0x0018a654;
    if (*param_2 != 0x2e) goto LAB_0018a52c;
    pbVar5 = (byte *)operator_new(0x10);
    lVar8 = *(long *)(param_1 + 0x38);
    *(undefined ***)pbVar5 = &PTR_FUN_001b8910;
    pbVar4 = param_2 + 1;
    *(undefined8 *)(pbVar5 + 8) = *(undefined8 *)(lVar8 + 8);
    *(byte **)(lVar8 + 8) = pbVar5;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
    if (pbVar4 == param_2) goto LAB_0018a548;
LAB_0018a6e0:
    if (pbVar4 == param_2) {
LAB_0018a72c:
      auVar14._8_8_ = pbVar4;
      auVar14._0_8_ = pbVar5;
      if (*(long *)(lVar3 + 0x28) == lVar7) {
        return param_2;
      }
      goto LAB_0018a770;
    }
  }
  auVar14._8_8_ = pbVar4;
  auVar14._0_8_ = pbVar5;
  if (*(long *)(lVar3 + 0x28) == lVar7) {
    pbVar4 = (byte *)FUN_0018a874(param_1,pbVar4,param_3,uVar12,iVar1 + 1,
                                  *(int *)(param_1 + 0x1c) + 1);
    return pbVar4;
  }
LAB_0018a770:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar14._0_8_,auVar14._8_8_);
}


// ===== 0018a774  FUN_0018a774 =====

void FUN_0018a774(void)

{
  long lVar1;
  regex_error *prVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  prVar2 = (regex_error *)__cxa_allocate_exception(0x18);
                    /* try { // try from 0018a79c to 0018a7a3 has its CatchHandler @ 0018a7cc */
  std::__ndk1::regex_error::regex_error(prVar2,0xf);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* WARNING: Subroutine does not return */
    __cxa_throw(prVar2,PTR_typeinfo_001ba1a8,PTR__regex_error_001ba1a0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018a7f4  FUN_0018a7f4 =====

void FUN_0018a7f4(void)

{
  long lVar1;
  regex_error *prVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  prVar2 = (regex_error *)__cxa_allocate_exception(0x18);
                    /* try { // try from 0018a81c to 0018a823 has its CatchHandler @ 0018a84c */
  std::__ndk1::regex_error::regex_error(prVar2,6);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* WARNING: Subroutine does not return */
    __cxa_throw(prVar2,PTR_typeinfo_001ba1a8,PTR__regex_error_001ba1a0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018a874  FUN_0018a874 =====

byte * FUN_0018a874(long param_1,byte *param_2,byte *param_3,undefined8 param_4,undefined4 param_5,
                   undefined4 param_6)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  
  lVar3 = tpidr_el0;
  lVar8 = *(long *)(lVar3 + 0x28);
  if (param_2 != param_3) {
    bVar2 = *param_2;
    uVar1 = *(uint *)(param_1 + 0x18) & 0x1f0;
    if (bVar2 < 0x3f) {
      if (bVar2 == 0x2a) {
        pbVar12 = param_2 + 1;
        if (((uVar1 != 0) || (pbVar12 == param_3)) || (*pbVar12 != 0x3f)) {
          lVar5 = 0;
LAB_0018aa10:
          lVar6 = -1;
          goto LAB_0018abd0;
        }
        param_2 = param_2 + 2;
        lVar5 = 0;
      }
      else {
        if (bVar2 != 0x2b) goto LAB_0018abd8;
        pbVar12 = param_2 + 1;
        if (((uVar1 != 0) || (pbVar12 == param_3)) || (*pbVar12 != 0x3f)) {
          lVar5 = 1;
          goto LAB_0018aa10;
        }
        param_2 = param_2 + 2;
        lVar5 = 1;
      }
LAB_0018a9b8:
      lVar6 = -1;
LAB_0018aba8:
      uVar7 = 0;
    }
    else {
      if (bVar2 != 0x3f) {
        if (bVar2 != 0x7b) goto LAB_0018abd8;
        pbVar12 = param_2 + 1;
        iVar10 = 0x7b;
        pbVar11 = param_3;
        if (pbVar12 == param_3) {
LAB_0018aa30:
          if (pbVar11 == pbVar12) goto LAB_0018abfc;
          if (pbVar11 == param_3) goto LAB_0018ac10;
          if (*pbVar11 != 0x2c) {
            if (*pbVar11 == 0x7d) {
              pbVar12 = pbVar11 + 1;
              if (((uVar1 != 0) || (pbVar12 == param_3)) || (*pbVar12 != 0x3f)) {
                lVar5 = (long)iVar10;
                lVar6 = lVar5;
                goto LAB_0018abd0;
              }
              lVar5 = (long)iVar10;
              param_2 = pbVar11 + 2;
              lVar6 = lVar5;
              goto LAB_0018aba8;
            }
            goto LAB_0018abfc;
          }
          pbVar12 = pbVar11 + 1;
          if (pbVar12 == param_3) goto LAB_0018abfc;
          bVar2 = *pbVar12;
          if (bVar2 == 0x7d) {
            pbVar12 = pbVar11 + 2;
            if (((uVar1 != 0) || (pbVar12 == param_3)) || (*pbVar12 != 0x3f)) {
              lVar5 = (long)iVar10;
              goto LAB_0018aa10;
            }
            lVar5 = (long)iVar10;
            param_2 = pbVar11 + 3;
            goto LAB_0018a9b8;
          }
          uVar9 = (uint)bVar2;
          if (((bVar2 & 0xf8) == 0x30) || ((uVar9 & 0xfe) == 0x38)) {
            for (pbVar11 = pbVar11 + 2;
                (iVar4 = uVar9 - 0x30, param_2 = param_3, pbVar11 != param_3 &&
                ((bVar2 = *pbVar11, (bVar2 & 0xf8) == 0x30 ||
                 (param_2 = pbVar11, (bVar2 & 0xfe) == 0x38)))); pbVar11 = pbVar11 + 1) {
              if (0xccccccb < iVar4) goto LAB_0018abfc;
              uVar9 = (uint)bVar2 + iVar4 * 10;
            }
            if (((param_2 != pbVar12) && (param_2 != param_3)) && (*param_2 == 0x7d)) {
              if (iVar10 <= iVar4) {
                pbVar12 = param_2 + 1;
                if (((uVar1 != 0) || (pbVar12 == param_3)) || (*pbVar12 != 0x3f)) {
                  lVar5 = (long)iVar10;
                  lVar6 = (long)iVar4;
                  goto LAB_0018abd0;
                }
                lVar5 = (long)iVar10;
                lVar6 = (long)iVar4;
                param_2 = param_2 + 2;
                goto LAB_0018aba8;
              }
              goto LAB_0018abfc;
            }
          }
        }
        else {
          bVar2 = *pbVar12;
          if (((bVar2 & 0xf8) == 0x30) || ((bVar2 & 0xfe) == 0x38)) {
            uVar9 = (uint)bVar2;
            for (param_2 = param_2 + 2;
                (iVar10 = uVar9 - 0x30, pbVar11 = param_3, param_2 != param_3 &&
                ((bVar2 = *param_2, (bVar2 & 0xf8) == 0x30 ||
                 (pbVar11 = param_2, (bVar2 & 0xfe) == 0x38)))); param_2 = param_2 + 1) {
              if (0xccccccb < iVar10) goto LAB_0018abfc;
              uVar9 = (uint)bVar2 + iVar10 * 10;
            }
            goto LAB_0018aa30;
          }
LAB_0018abfc:
          if (*(long *)(lVar3 + 0x28) != lVar8) goto LAB_0018ac24;
          FUN_0018ad98();
        }
LAB_0018ac10:
        if (*(long *)(lVar3 + 0x28) == lVar8) {
          FUN_0018ae18();
        }
        goto LAB_0018ac24;
      }
      pbVar12 = param_2 + 1;
      if (((uVar1 == 0) && (pbVar12 != param_3)) && (*pbVar12 == 0x3f)) {
        param_2 = param_2 + 2;
        lVar5 = 0;
        lVar6 = 1;
        goto LAB_0018aba8;
      }
      lVar5 = 0;
      lVar6 = 1;
LAB_0018abd0:
      uVar7 = 1;
      param_2 = pbVar12;
    }
    FUN_0018ac28(param_1,lVar5,lVar6,param_4,param_5,param_6,uVar7);
  }
LAB_0018abd8:
  if (*(long *)(lVar3 + 0x28) == lVar8) {
    return param_2;
  }
LAB_0018ac24:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018ac28  FUN_0018ac28 =====

void FUN_0018ac28(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 param_5
                 ,undefined4 param_6,byte param_7)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined8 *)operator_new(0x10);
  lVar6 = *(long *)(param_1 + 0x38);
  uVar7 = *(undefined8 *)(lVar6 + 8);
  *puVar3 = &PTR_FUN_001b8310;
  puVar3[1] = uVar7;
  *(undefined8 *)(lVar6 + 8) = 0;
                    /* try { // try from 0018ac98 to 0018ac9f has its CatchHandler @ 0018ad4c */
  puVar4 = (undefined8 *)operator_new(0x38);
  uVar7 = *(undefined8 *)(param_4 + 8);
  puVar4[2] = puVar3;
  puVar4[3] = param_2;
  iVar1 = *(int *)(param_1 + 0x20);
  *puVar4 = &PTR_FUN_001b87a8;
  puVar4[1] = uVar7;
  puVar4[4] = param_3;
  *(int *)(puVar4 + 5) = iVar1;
  *(undefined4 *)((long)puVar4 + 0x2c) = param_5;
  *(undefined4 *)(puVar4 + 6) = param_6;
  *(byte *)((long)puVar4 + 0x34) = param_7 & 1;
  *(undefined8 *)(param_4 + 8) = 0;
                    /* try { // try from 0018acd4 to 0018acdb has its CatchHandler @ 0018ad3c */
  puVar3 = (undefined8 *)operator_new(0x10);
  lVar6 = *(long *)(param_1 + 0x38);
  puVar3[1] = puVar4;
  *(undefined8 **)(lVar6 + 8) = puVar3;
  uVar7 = puVar4[2];
  *puVar3 = &PTR_FUN_001b8838;
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  *(int *)(param_1 + 0x20) = iVar1 + 1;
  *(undefined8 **)(param_4 + 8) = puVar4;
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018ad98  FUN_0018ad98 =====

void FUN_0018ad98(void)

{
  long lVar1;
  regex_error *prVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  prVar2 = (regex_error *)__cxa_allocate_exception(0x18);
                    /* try { // try from 0018adc0 to 0018adc7 has its CatchHandler @ 0018adf0 */
  std::__ndk1::regex_error::regex_error(prVar2,8);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* WARNING: Subroutine does not return */
    __cxa_throw(prVar2,PTR_typeinfo_001ba1a8,PTR__regex_error_001ba1a0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018ae18  FUN_0018ae18 =====

void FUN_0018ae18(void)

{
  long lVar1;
  regex_error *prVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  prVar2 = (regex_error *)__cxa_allocate_exception(0x18);
                    /* try { // try from 0018ae40 to 0018ae47 has its CatchHandler @ 0018ae70 */
  std::__ndk1::regex_error::regex_error(prVar2,7);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* WARNING: Subroutine does not return */
    __cxa_throw(prVar2,PTR_typeinfo_001ba1a8,PTR__regex_error_001ba1a0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018ae98  FUN_0018ae98 =====

void FUN_0018ae98(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_001b8808;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  *param_1 = &PTR_FUN_001b8388;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018af20  FUN_0018af20 =====

void FUN_0018af20(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018af58  FUN_0018af58 =====

void FUN_0018af58(long param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *param_2 = 0xfffffc21;
  *(undefined8 *)(param_2 + 0x14) = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018afa0  FUN_0018afa0 =====

void FUN_0018afa0(long param_1,int *param_2)

{
  ulong *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  
  lVar5 = tpidr_el0;
  lVar7 = *(long *)(lVar5 + 0x28);
  puVar1 = (ulong *)(*(long *)(param_2 + 0xe) + (ulong)*(uint *)(param_1 + 0x28) * 0x10);
  if (*param_2 == -0x3df) {
    uVar8 = *(ulong *)(param_1 + 0x18);
    uVar13 = *(ulong *)(param_1 + 0x20);
    uVar11 = *puVar1 + 1;
    bVar6 = uVar11 < uVar13;
    *puVar1 = uVar11;
    if (bVar6 && uVar8 <= uVar11) {
      bVar6 = uVar11 < uVar13 && puVar1[1] != *(ulong *)(param_2 + 4);
    }
    if (bVar6 && uVar8 <= uVar11) {
LAB_0018b0c4:
      *param_2 = -0x3e0;
      goto LAB_0018b178;
    }
    *param_2 = -0x3e2;
    if (bVar6) {
      iVar2 = *(int *)(param_1 + 0x2c);
      iVar3 = *(int *)(param_1 + 0x30);
      *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(param_1 + 8);
      puVar1[1] = *(ulong *)(param_2 + 4);
      if (iVar2 != iVar3) {
        uVar8 = (ulong)(iVar3 - 1);
        uVar11 = (ulong)(iVar2 - 1);
        uVar4 = *(undefined8 *)(param_2 + 6);
        lVar10 = *(long *)(param_2 + 8);
        uVar13 = uVar8 - uVar11;
        if (1 < uVar13) {
          uVar14 = uVar13 & 0xfffffffffffffffe;
          puVar15 = (undefined8 *)(lVar10 + uVar11 * 0x18 + 0x18);
          uVar16 = uVar14;
          do {
            puVar15[-3] = uVar4;
            puVar15[-2] = uVar4;
            uVar16 = uVar16 - 2;
            *puVar15 = uVar4;
            puVar15[1] = uVar4;
            *(undefined1 *)(puVar15 + -1) = 0;
            *(undefined1 *)(puVar15 + 2) = 0;
            puVar15 = puVar15 + 6;
          } while (uVar16 != 0);
          if (uVar13 == uVar14) goto LAB_0018b178;
          uVar11 = uVar14 + uVar11;
        }
        lVar9 = uVar8 - uVar11;
        puVar12 = (undefined1 *)(lVar10 + uVar11 * 0x18 + 0x10);
        do {
          lVar9 = lVar9 + -1;
          *(undefined8 *)(puVar12 + -0x10) = uVar4;
          *(undefined8 *)(puVar12 + -8) = uVar4;
          *puVar12 = 0;
          puVar12 = puVar12 + 0x18;
        } while (lVar9 != 0);
      }
      goto LAB_0018b178;
    }
  }
  else {
    lVar10 = *(long *)(param_1 + 0x20);
    *puVar1 = 0;
    if ((lVar10 != 0) && (*(long *)(param_1 + 0x18) == 0)) goto LAB_0018b0c4;
    *param_2 = -0x3e2;
    if (lVar10 != 0) {
      iVar2 = *(int *)(param_1 + 0x2c);
      iVar3 = *(int *)(param_1 + 0x30);
      *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(param_1 + 8);
      puVar1[1] = *(ulong *)(param_2 + 4);
      if (iVar2 != iVar3) {
        uVar8 = (ulong)(iVar3 - 1);
        uVar11 = (ulong)(iVar2 - 1);
        uVar4 = *(undefined8 *)(param_2 + 6);
        lVar10 = *(long *)(param_2 + 8);
        uVar13 = uVar8 - uVar11;
        if (1 < uVar13) {
          uVar14 = uVar13 & 0xfffffffffffffffe;
          puVar15 = (undefined8 *)(lVar10 + uVar11 * 0x18 + 0x18);
          uVar16 = uVar14;
          do {
            puVar15[-3] = uVar4;
            puVar15[-2] = uVar4;
            uVar16 = uVar16 - 2;
            *puVar15 = uVar4;
            puVar15[1] = uVar4;
            *(undefined1 *)(puVar15 + -1) = 0;
            *(undefined1 *)(puVar15 + 2) = 0;
            puVar15 = puVar15 + 6;
          } while (uVar16 != 0);
          if (uVar13 == uVar14) goto LAB_0018b178;
          uVar11 = uVar14 + uVar11;
        }
        lVar9 = uVar8 - uVar11;
        puVar12 = (undefined1 *)(lVar10 + uVar11 * 0x18 + 0x10);
        do {
          lVar9 = lVar9 + -1;
          *(undefined8 *)(puVar12 + -0x10) = uVar4;
          *(undefined8 *)(puVar12 + -8) = uVar4;
          *puVar12 = 0;
          puVar12 = puVar12 + 0x18;
        } while (lVar9 != 0);
      }
      goto LAB_0018b178;
    }
  }
  *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(param_1 + 0x10);
LAB_0018b178:
  if (*(long *)(lVar5 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018b198  FUN_0018b198 =====

void FUN_0018b198(long param_1,byte param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  
  lVar7 = tpidr_el0;
  lVar8 = *(long *)(lVar7 + 0x28);
  bVar6 = *(byte *)(param_1 + 0x34);
  *param_3 = 0xfffffc1e;
  if (bVar6 == (param_2 & 1)) {
    *(undefined8 *)(param_3 + 0x14) = *(undefined8 *)(param_1 + 0x10);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x28);
    iVar2 = *(int *)(param_1 + 0x2c);
    iVar5 = *(int *)(param_1 + 0x30);
    *(undefined8 *)(param_3 + 0x14) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(*(long *)(param_3 + 0xe) + (ulong)uVar1 * 0x10 + 8) =
         *(undefined8 *)(param_3 + 4);
    if (iVar2 != iVar5) {
      uVar9 = (ulong)(iVar5 - 1);
      uVar11 = (ulong)(iVar2 - 1);
      uVar3 = *(undefined8 *)(param_3 + 6);
      lVar4 = *(long *)(param_3 + 8);
      uVar13 = uVar9 - uVar11;
      if (1 < uVar13) {
        uVar14 = uVar13 & 0xfffffffffffffffe;
        puVar15 = (undefined8 *)(lVar4 + uVar11 * 0x18 + 0x18);
        uVar16 = uVar14;
        do {
          puVar15[-3] = uVar3;
          puVar15[-2] = uVar3;
          uVar16 = uVar16 - 2;
          *puVar15 = uVar3;
          puVar15[1] = uVar3;
          *(undefined1 *)(puVar15 + -1) = 0;
          *(undefined1 *)(puVar15 + 2) = 0;
          puVar15 = puVar15 + 6;
        } while (uVar16 != 0);
        if (uVar13 == uVar14) goto LAB_0018b270;
        uVar11 = uVar14 + uVar11;
      }
      lVar10 = uVar9 - uVar11;
      puVar12 = (undefined1 *)(lVar4 + uVar11 * 0x18 + 0x10);
      do {
        lVar10 = lVar10 + -1;
        *(undefined8 *)(puVar12 + -0x10) = uVar3;
        *(undefined8 *)(puVar12 + -8) = uVar3;
        *puVar12 = 0;
        puVar12 = puVar12 + 0x18;
      } while (lVar10 != 0);
    }
  }
LAB_0018b270:
  if (*(long *)(lVar7 + 0x28) == lVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018b290  FUN_0018b290 =====

void FUN_0018b290(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_001b8388;
  if ((long *)param_1[1] == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x0018b2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[1] + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018b304  FUN_0018b304 =====

void FUN_0018b304(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)param_1[1];
  *param_1 = &PTR_FUN_001b8388;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018b370  FUN_0018b370 =====

void FUN_0018b370(long param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(param_1 + 8);
  lVar4 = *(long *)(param_2 + 8) + (ulong)(iVar1 - 1) * 0x18;
  *param_2 = 0xfffffc1e;
  *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(param_2 + 4);
  *(undefined1 *)(lVar4 + 0x10) = 1;
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018b3e0  FUN_0018b3e0 =====

void FUN_0018b3e0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)param_1[1];
  *param_1 = &PTR_FUN_001b8388;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018b44c  FUN_0018b44c =====

void FUN_0018b44c(long param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(param_1 + 8);
  *param_2 = 0xfffffc1e;
  *(undefined8 *)(*(long *)(param_2 + 8) + (ulong)(iVar1 - 1) * 0x18) = *(undefined8 *)(param_2 + 4)
  ;
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018b4b0  FUN_0018b4b0 =====

void FUN_0018b4b0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)param_1[1];
  *param_1 = &PTR_FUN_001b8388;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018b51c  FUN_0018b51c =====

void FUN_0018b51c(long param_1,undefined4 *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  if (((*(char **)(param_2 + 4) == *(char **)(param_2 + 6)) &&
      ((*(byte *)(param_2 + 0x16) >> 1 & 1) == 0)) ||
     ((*(char *)(param_1 + 0x10) != '\0' &&
      ((cVar1 = **(char **)(param_2 + 4), cVar1 == '\r' || (cVar1 == '\n')))))) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar5 = 0xfffffc1e;
  }
  else {
    uVar4 = 0;
    uVar5 = 0xfffffc1f;
  }
  *param_2 = uVar5;
  *(undefined8 *)(param_2 + 0x14) = uVar4;
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018b5a0  FUN_0018b5a0 =====

void FUN_0018b5a0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)param_1[1];
  *param_1 = &PTR_FUN_001b8388;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018b60c  FUN_0018b60c =====

void FUN_0018b60c(long param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_2 + 0x17) == '\0') {
    if ((*(char *)(param_1 + 0x10) != '\0') &&
       ((*(char *)(*(long *)(param_2 + 4) + -1) == '\r' ||
        (*(char *)(*(long *)(param_2 + 4) + -1) == '\n')))) goto LAB_0018b664;
  }
  else if ((*(long *)(param_2 + 4) == *(long *)(param_2 + 2)) &&
          ((*(byte *)(param_2 + 0x16) & 1) == 0)) {
LAB_0018b664:
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar4 = 0xfffffc1e;
    goto LAB_0018b678;
  }
  uVar3 = 0;
  uVar4 = 0xfffffc1f;
LAB_0018b678:
  *param_2 = uVar4;
  *(undefined8 *)(param_2 + 0x14) = uVar3;
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0018b6a0  FUN_0018b6a0 =====

void FUN_0018b6a0(locale *param_1,undefined4 param_2)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  if ((*(uint *)(param_1 + 0x18) & 1) == 0) {
    if ((*(uint *)(param_1 + 0x18) >> 3 & 1) == 0) {
      puVar3 = (undefined8 *)operator_new(0x18);
      lVar6 = *(long *)(param_1 + 0x38);
      *(char *)(puVar3 + 2) = (char)param_2;
      uVar7 = *(undefined8 *)(lVar6 + 8);
      *puVar3 = &PTR_FUN_001b85b0;
      puVar3[1] = uVar7;
      *(undefined8 **)(lVar6 + 8) = puVar3;
      goto LAB_0018b788;
    }
    puVar3 = (undefined8 *)operator_new(0x30);
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
    *puVar3 = &PTR_FUN_001b8568;
    puVar3[1] = uVar7;
    std::__ndk1::locale::locale((locale *)(puVar3 + 2),param_1);
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    uVar7 = *(undefined8 *)(param_1 + 8);
    lVar6 = *(long *)(param_1 + 0x38);
    *(char *)(puVar3 + 5) = (char)param_2;
    puVar3[4] = uVar8;
    puVar3[3] = uVar7;
  }
  else {
    puVar3 = (undefined8 *)operator_new(0x30);
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
    *puVar3 = &PTR_FUN_001b8520;
    puVar3[1] = uVar7;
    std::__ndk1::locale::locale((locale *)(puVar3 + 2),param_1);
    uVar7 = *(undefined8 *)(param_1 + 8);
    plVar4 = *(long **)(param_1 + 8);
    puVar3[4] = *(undefined8 *)(param_1 + 0x10);
    puVar3[3] = uVar7;
                    /* try { // try from 0018b738 to 0018b73f has its CatchHandler @ 0018b7b8 */
    uVar2 = (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
    lVar6 = *(long *)(param_1 + 0x38);
    *(undefined1 *)(puVar3 + 5) = uVar2;
  }
  *(undefined8 **)(lVar6 + 8) = puVar3;
LAB_0018b788:
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018b808  FUN_0018b808 =====

byte * FUN_0018b808(long param_1,byte *param_2,byte *param_3)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  if (((param_2 != param_3) && (param_2 + 1 != param_3)) && (*param_2 == 0x5c)) {
    bVar2 = param_2[1];
    uVar3 = bVar2 - 0x24;
    if (((uVar3 < 0x3b) && ((1L << ((ulong)uVar3 & 0x3f) & 0x5800000080004f1U) != 0)) ||
       (bVar2 - 0x7b < 3)) {
      FUN_0018b6a0(param_1,bVar2);
      param_2 = param_2 + 2;
    }
    else if ((*(uint *)(param_1 + 0x18) & 0x1f0) == 0x40) {
      param_2 = (byte *)FUN_0018d66c();
    }
    else {
      uVar5 = FUN_0018fcc8(param_1,bVar2);
      lVar1 = 2;
      if ((uVar5 & 1) == 0) {
        lVar1 = 0;
      }
      param_2 = param_2 + lVar1;
    }
  }
  if (*(long *)(lVar4 + 0x28) == lVar6) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018b8f0  FUN_0018b8f0 =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_0018b8f0(long param_1,byte *param_2,byte *param_3)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined4 uVar6;
  byte *pbVar7;
  bool bVar8;
  byte bVar9;
  char cVar10;
  ushort uVar11;
  void *pvVar12;
  long *plVar13;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar14;
  byte *pbVar15;
  undefined8 uVar16;
  ulong uVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  long lVar22;
  uint uVar23;
  char *pcVar24;
  byte *pbVar25;
  byte *pbVar26;
  byte *pbVar27;
  byte *pbVar28;
  byte *pbVar29;
  ulong uVar30;
  byte *pbVar31;
  byte *pbVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  long local_178;
  ulong local_140;
  ulong uStack_138;
  char *local_130;
  ulong local_120;
  byte *pbStack_118;
  byte *local_110;
  ulong local_100;
  ulong uStack_f8;
  char *local_f0;
  ulong local_e8;
  byte *pbStack_e0;
  byte *local_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  char *local_c0;
  ulong local_b8;
  byte *pbStack_b0;
  byte *local_a8;
  ulong local_a0;
  byte *pbStack_98;
  byte *local_90;
  ulong local_88;
  ulong uStack_80;
  char *local_78;
  long local_70;
  
  lVar22 = tpidr_el0;
  local_70 = *(long *)(lVar22 + 0x28);
  if ((param_2 == param_3) || (*param_2 != 0x5b)) {
LAB_0018c5dc:
    if (*(long *)(lVar22 + 0x28) == local_70) {
      return param_2;
    }
    goto LAB_0018c884;
  }
  if (param_2 + 1 == param_3) {
LAB_0018c634:
    lVar22 = *(long *)(lVar22 + 0x28);
  }
  else {
    bVar9 = param_2[1];
    pbVar15 = param_2 + 2;
    if (bVar9 != 0x5e) {
      pbVar15 = param_2 + 1;
    }
    pvVar12 = operator_new(0xa8);
                    /* try { // try from 0018b974 to 0018b987 has its CatchHandler @ 0018c7b0 */
    FUN_0018c908(pvVar12,param_1,*(undefined8 *)(*(long *)(param_1 + 0x38) + 8),bVar9 == 0x5e,
                 *(uint *)(param_1 + 0x18) & 1,*(uint *)(param_1 + 0x18) >> 3 & 1);
    *(void **)(*(long *)(param_1 + 0x38) + 8) = pvVar12;
    *(void **)(param_1 + 0x38) = pvVar12;
    local_178 = lVar22;
    if (pbVar15 == param_3) goto LAB_0018c634;
    if (((*(ushort *)(param_1 + 0x18) & 0x1f0) != 0) && (*pbVar15 == 0x5d)) {
      FUN_0018cac0(pvVar12,0x5d);
      pbVar15 = pbVar15 + 1;
    }
    if (pbVar15 != param_3) {
      pbVar26 = (byte *)((ulong)&local_b8 | 1);
      pbVar28 = (byte *)((ulong)&local_a0 | 1);
      pbVar32 = (byte *)((ulong)&local_120 | 1);
      pbVar31 = (byte *)((ulong)&local_e8 | 1);
      pcVar24 = (char *)((ulong)&local_140 | 1);
      do {
        param_2 = pbVar15;
        pbVar15 = param_3;
        if ((param_2 != param_3) && (pbVar15 = param_2, *param_2 != 0x5d)) {
          uVar17 = 0;
          local_e8 = 0;
          pbStack_e0 = (byte *)0x0;
          local_d8 = (byte *)0x0;
          pbVar29 = param_2;
          if (param_2 + 1 == param_3) {
LAB_0018bb54:
            uVar17 = 0;
LAB_0018bb58:
            pbVar15 = (byte *)(uVar17 >> 1);
            if ((uVar17 & 1) != 0) {
              pbVar15 = pbStack_e0;
            }
            uVar23 = *(uint *)(param_1 + 0x18) & 0x1f0;
            if (pbVar15 == (byte *)0x0) {
              if ((uVar23 | 0x40) == 0x40) {
                bVar9 = *pbVar29;
                if (bVar9 == 0x5c) {
                  if (uVar23 == 0) {
                    /* try { // try from 0018bf80 to 0018bf97 has its CatchHandler @ 0018c764 */
                    pbVar29 = (byte *)FUN_0018d060(param_1,pbVar29 + 1,param_3,&local_e8,pvVar12);
                  }
                  else {
                    /* try { // try from 0018bb98 to 0018bbab has its CatchHandler @ 0018c78c */
                    pbVar29 = (byte *)FUN_0018d66c(param_1,pbVar29 + 1,param_3,&local_e8);
                  }
                  goto joined_r0x0018bd40;
                }
              }
              else {
                bVar9 = *pbVar29;
              }
              if ((uVar17 & 1) == 0) {
                local_e8 = CONCAT71(local_e8._1_7_,2);
                pbVar15 = pbVar31;
              }
              else {
                pbStack_e0 = (byte *)0x1;
                pbVar15 = local_d8;
              }
              pbVar29 = pbVar29 + 1;
              *pbVar15 = bVar9;
              pbVar15[1] = 0;
            }
joined_r0x0018bd40:
            if ((((pbVar29 == param_3) || (*pbVar29 == 0x5d)) ||
                (pbVar18 = pbVar29 + 1, pbVar18 == param_3)) ||
               ((*pbVar29 != 0x2d || (*pbVar18 == 0x5d)))) {
              bVar8 = (local_e8 & 1) != 0;
              pbVar18 = (byte *)(local_e8 >> 1 & 0x7f);
              if (bVar8) {
                pbVar18 = pbStack_e0;
              }
              pbVar15 = pbVar29;
              if (pbVar18 != (byte *)0x0) {
                if (pbVar18 == (byte *)0x1) {
                  pbVar29 = pbVar31;
                  if (bVar8) {
                    pbVar29 = local_d8;
                  }
                    /* try { // try from 0018bfe4 to 0018bfeb has its CatchHandler @ 0018c850 */
                  FUN_0018cac0(pvVar12,*pbVar29);
                }
                else {
                  pbVar29 = pbVar31;
                  if ((local_e8 & 1) != 0) {
                    pbVar29 = local_d8;
                  }
                  pbVar18 = (byte *)((ulong)&local_e8 | 2);
                  if (bVar8) {
                    pbVar18 = local_d8 + 1;
                  }
                    /* try { // try from 0018c088 to 0018c08f has its CatchHandler @ 0018c850 */
                  FUN_0018d9ec(pvVar12,*pbVar29,*pbVar18);
                }
              }
            }
            else {
              pbVar15 = pbVar29 + 2;
              local_100 = 0;
              uStack_f8 = 0;
              local_f0 = (char *)0x0;
              if (((pbVar15 == param_3) || (*pbVar18 != 0x5b)) || (*pbVar15 != 0x2e)) {
                if ((uVar23 | 0x40) == 0x40) {
                  bVar9 = *pbVar18;
                  if (bVar9 == 0x5c) {
                    if (uVar23 == 0) {
                    /* try { // try from 0018c17c to 0018c193 has its CatchHandler @ 0018c6d8 */
                      pbVar15 = (byte *)FUN_0018d060(param_1,pbVar15,param_3,&local_100,pvVar12);
                    }
                    else {
                    /* try { // try from 0018c0b0 to 0018c0c3 has its CatchHandler @ 0018c6e0 */
                      pbVar15 = (byte *)FUN_0018d66c(param_1,pbVar15,param_3,&local_100);
                    }
                    goto LAB_0018c19c;
                  }
                }
                else {
                  bVar9 = *pbVar18;
                }
                local_100 = CONCAT71((uint7)bVar9,2);
              }
              else {
                    /* try { // try from 0018c04c to 0018c05f has its CatchHandler @ 0018c6dc */
                pbVar15 = (byte *)FUN_0018cf44(param_1,pbVar29 + 3,param_3,&local_100);
              }
LAB_0018c19c:
              local_110 = local_d8;
              pbStack_118 = pbStack_e0;
              local_120 = local_e8;
              uVar3 = uStack_f8;
              uVar30 = local_100;
              pbStack_e0 = (byte *)0x0;
              local_d8 = (byte *)0x0;
              local_e8 = 0;
              uVar17 = local_120;
              local_130 = local_f0;
              uStack_138 = uStack_f8;
              local_140 = local_100;
              local_100 = 0;
              uStack_f8 = 0;
              local_f0 = (char *)0x0;
              if (*(char *)((long)pvVar12 + 0xa6) == '\0') {
                pbVar29 = (byte *)(ulong)((byte)local_120 >> 1);
                if ((local_120 & 1) != 0) {
                  pbVar29 = pbStack_118;
                }
                if (pbVar29 != (byte *)0x1) goto LAB_0018c6a8;
                uVar4 = uVar30 >> 1 & 0x7f;
                if ((uVar30 & 1) != 0) {
                  uVar4 = uVar3;
                }
                if (uVar4 != 1) goto LAB_0018c6a8;
                if (*(char *)((long)pvVar12 + 0xa5) != '\0') {
                  pbVar29 = pbVar32;
                  if ((local_120 & 1) != 0) {
                    pbVar29 = local_110;
                  }
                    /* try { // try from 0018c40c to 0018c447 has its CatchHandler @ 0018c798 */
                  bVar9 = (**(code **)(**(long **)((long)pvVar12 + 0x18) + 0x28))
                                    (*(long **)((long)pvVar12 + 0x18),*pbVar29);
                  pbVar29 = pbVar32;
                  if ((local_120 & 1) != 0) {
                    pbVar29 = local_110;
                  }
                  *pbVar29 = bVar9;
                  pcVar1 = pcVar24;
                  if ((local_140 & 1) != 0) {
                    pcVar1 = local_130;
                  }
                  cVar10 = (**(code **)(**(long **)((long)pvVar12 + 0x18) + 0x28))
                                     (*(long **)((long)pvVar12 + 0x18),*pcVar1);
                  pcVar1 = pcVar24;
                  if ((local_140 & 1) != 0) {
                    pcVar1 = local_130;
                  }
                  *pcVar1 = cVar10;
                }
                local_90 = local_110;
                pbStack_98 = pbStack_118;
                local_a0 = local_120;
                local_78 = local_130;
                uStack_80 = uStack_138;
                local_88 = local_140;
                local_120 = 0;
                pbStack_118 = (byte *)0x0;
                local_110 = (byte *)0x0;
                puVar5 = *(ulong **)((long)pvVar12 + 0x60);
                local_140 = 0;
                uStack_138 = 0;
                local_130 = (char *)0x0;
                if (puVar5 < *(ulong **)((long)pvVar12 + 0x68)) {
                  puVar5[1] = (ulong)pbStack_98;
                  *puVar5 = local_a0;
                  puVar5[2] = (ulong)local_90;
                  pbStack_98 = (byte *)0x0;
                  local_90 = (byte *)0x0;
                  local_a0 = 0;
                  puVar5[4] = uStack_80;
                  puVar5[3] = local_88;
                  puVar5[5] = (ulong)local_78;
                  *(ulong **)((long)pvVar12 + 0x60) = puVar5 + 6;
                  pbVar29 = local_90;
                  uVar17 = local_a0;
                }
                else {
                    /* try { // try from 0018c504 to 0018c50f has its CatchHandler @ 0018c6f0 */
                  uVar16 = FUN_0018dfb0((long)pvVar12 + 0x58,&local_a0);
                  *(undefined8 *)((long)pvVar12 + 0x60) = uVar16;
                  pbVar29 = local_90;
                  uVar17 = local_a0;
                  if ((local_88 & 1) != 0) {
                    operator_delete(local_78);
                    pbVar29 = local_90;
                    uVar17 = local_a0;
                  }
                }
              }
              else {
                if (*(char *)((long)pvVar12 + 0xa5) != '\0') {
                  bVar8 = (local_120 & 1) == 0;
                  pbVar29 = (byte *)(ulong)((byte)local_120 >> 1);
                  if (!bVar8) {
                    pbVar29 = pbStack_118;
                  }
                  if (pbVar29 != (byte *)0x0) {
                    pbVar29 = (byte *)0x0;
                    do {
                      pbVar18 = pbVar32;
                      if (!bVar8) {
                        pbVar18 = local_110;
                      }
                    /* try { // try from 0018c218 to 0018c21b has its CatchHandler @ 0018c818 */
                      bVar9 = (**(code **)(**(long **)((long)pvVar12 + 0x18) + 0x28))
                                        (*(long **)((long)pvVar12 + 0x18),pbVar18[(long)pbVar29]);
                      pbVar18 = pbVar32;
                      if ((local_120 & 1) != 0) {
                        pbVar18 = local_110;
                      }
                      pbVar18[(long)pbVar29] = bVar9;
                      pbVar29 = pbVar29 + 1;
                      bVar8 = (local_120 & 1) == 0;
                      pbVar18 = (byte *)(local_120 >> 1 & 0x7f);
                      if (!bVar8) {
                        pbVar18 = pbStack_118;
                      }
                    } while (pbVar29 < pbVar18);
                  }
                  bVar8 = (local_140 & 1) == 0;
                  uVar30 = local_140 >> 1 & 0x7f;
                  if (!bVar8) {
                    uVar30 = uStack_138;
                  }
                  uVar17 = local_120;
                  if (uVar30 != 0) {
                    uVar30 = 0;
                    do {
                      pcVar1 = pcVar24;
                      if (!bVar8) {
                        pcVar1 = local_130;
                      }
                    /* try { // try from 0018c290 to 0018c293 has its CatchHandler @ 0018c814 */
                      cVar10 = (**(code **)(**(long **)((long)pvVar12 + 0x18) + 0x28))
                                         (*(long **)((long)pvVar12 + 0x18),pcVar1[uVar30]);
                      pcVar1 = pcVar24;
                      if ((local_140 & 1) != 0) {
                        pcVar1 = local_130;
                      }
                      pcVar1[uVar30] = cVar10;
                      uVar30 = uVar30 + 1;
                      bVar8 = (local_140 & 1) == 0;
                      uVar3 = local_140 >> 1 & 0x7f;
                      if (!bVar8) {
                        uVar3 = uStack_138;
                      }
                      uVar17 = local_120;
                    } while (uVar30 < uVar3);
                  }
                }
                local_120 = uVar17;
                pbVar29 = (byte *)(local_120 >> 1 & 0x7f);
                pbVar18 = pbVar32;
                if ((local_120 & 1) != 0) {
                  pbVar29 = pbStack_118;
                  pbVar18 = local_110;
                }
                    /* try { // try from 0018c2e4 to 0018c2f3 has its CatchHandler @ 0018c798 */
                FUN_0018ddfc(&local_b8,(long)pvVar12 + 0x10,pbVar18,pbVar18 + (long)pbVar29);
                uVar17 = local_140 >> 1 & 0x7f;
                pcVar1 = pcVar24;
                if ((local_140 & 1) != 0) {
                  uVar17 = uStack_138;
                  pcVar1 = local_130;
                }
                    /* try { // try from 0018c30c to 0018c31b has its CatchHandler @ 0018c768 */
                FUN_0018ddfc(&local_d0,(long)pvVar12 + 0x10,pcVar1,pcVar1 + uVar17);
                local_90 = local_a8;
                pbStack_98 = pbStack_b0;
                uVar17 = local_b8;
                local_78 = local_c0;
                uStack_80 = uStack_c8;
                local_88 = local_d0;
                pbStack_b0 = (byte *)0x0;
                local_a8 = (byte *)0x0;
                local_a0 = local_b8;
                puVar5 = *(ulong **)((long)pvVar12 + 0x60);
                local_d0 = 0;
                uStack_c8 = 0;
                local_c0 = (char *)0x0;
                local_b8 = 0;
                if (puVar5 < *(ulong **)((long)pvVar12 + 0x68)) {
                  puVar5[1] = (ulong)pbStack_98;
                  *puVar5 = uVar17;
                  puVar5[2] = (ulong)local_90;
                  pbStack_98 = (byte *)0x0;
                  local_90 = (byte *)0x0;
                  local_a0 = 0;
                  puVar5[4] = uStack_80;
                  puVar5[3] = local_88;
                  puVar5[5] = (ulong)local_78;
                  *(ulong **)((long)pvVar12 + 0x60) = puVar5 + 6;
                }
                else {
                    /* try { // try from 0018c4cc to 0018c4d7 has its CatchHandler @ 0018c708 */
                  uVar16 = FUN_0018dfb0((long)pvVar12 + 0x58,&local_a0);
                  *(undefined8 *)((long)pvVar12 + 0x60) = uVar16;
                  if ((local_88 & 1) != 0) {
                    operator_delete(local_78);
                  }
                  if ((local_a0 & 1) != 0) {
                    operator_delete(local_90);
                  }
                }
                pbVar29 = local_a8;
                uVar17 = local_b8;
                if ((local_d0 & 1) != 0) {
                  operator_delete(local_c0);
                  pbVar29 = local_a8;
                  uVar17 = local_b8;
                }
              }
              if ((uVar17 & 1) != 0) {
                operator_delete(pbVar29);
              }
              if ((local_140 & 1) != 0) {
                operator_delete(local_130);
              }
              if ((local_120 & 1) != 0) {
                operator_delete(local_110);
              }
              if ((local_100 & 1) != 0) {
                operator_delete(local_f0);
              }
            }
          }
          else {
            if (*param_2 != 0x5b) goto LAB_0018bb58;
            bVar9 = param_2[1];
            if (bVar9 == 0x2e) {
                    /* try { // try from 0018bb28 to 0018bb3b has its CatchHandler @ 0018c7bc */
              pbVar29 = (byte *)FUN_0018cf44(param_1,param_2 + 2,param_3,&local_e8);
              uVar17 = local_e8 & 0xff;
              goto LAB_0018bb58;
            }
            if (bVar9 != 0x3a) {
              if (bVar9 != 0x3d) goto LAB_0018bb54;
              pbVar15 = param_2 + 2;
              if (1 < (long)param_3 - (long)pbVar15) {
                pbVar18 = param_3 + (-4 - (long)param_2);
                pbVar29 = pbVar15;
                while ((*pbVar29 != 0x3d || (pbVar29[1] != 0x5d))) {
                  if (pbVar18 == (byte *)0x0) goto LAB_0018c610;
                  pbVar18 = pbVar18 + -1;
                  pbVar29 = pbVar29 + 1;
                }
                if (pbVar29 != param_3) {
                    /* try { // try from 0018bbb8 to 0018bbc7 has its CatchHandler @ 0018c7f8 */
                  FUN_0018e818(&local_b8,param_1,pbVar15,pbVar29);
                  pbVar15 = (byte *)(local_b8 >> 1 & 0x7f);
                  if ((local_b8 & 1) != 0) {
                    pbVar15 = pbStack_b0;
                  }
                  if (pbVar15 != (byte *)0x0) {
                    pbVar18 = pbVar26;
                    if ((local_b8 & 1) != 0) {
                      pbVar18 = local_a8;
                    }
                    if (pbVar15 < (byte *)0xfffffffffffffff0) {
                      pbVar21 = pbVar18;
                      if (pbVar15 < (byte *)0x17) {
                        local_a0 = CONCAT71(local_a0._1_7_,(char)((int)pbVar15 << 1));
                        pbVar20 = pbVar28;
LAB_0018bc18:
                        pbVar19 = pbVar20;
                        do {
                          pbVar25 = pbVar21 + 1;
                          pbVar20 = pbVar19 + 1;
                          *pbVar19 = *pbVar21;
                          pbVar19 = pbVar20;
                          pbVar21 = pbVar25;
                        } while (pbVar25 != pbVar18 + (long)pbVar15);
                        uVar17 = local_a0 & 0xff;
                      }
                      else {
                        uVar17 = ((ulong)pbVar15 | 0xf) + 1;
                    /* try { // try from 0018be64 to 0018be6b has its CatchHandler @ 0018c790 */
                        local_90 = (byte *)operator_new(uVar17);
                        local_a0 = uVar17 | 1;
                        pbVar20 = local_90;
                        pbStack_98 = pbVar15;
                        if ((pbVar15 < (byte *)0x20) ||
                           ((ulong)((long)local_90 - (long)pbVar18) < 0x20)) goto LAB_0018bc18;
                        pbVar27 = (byte *)((ulong)pbVar15 & 0xffffffffffffffe0);
                        uVar17 = (ulong)((uint)local_a0 & 0xff);
                        pbVar21 = pbVar18 + 0x10;
                        pbVar20 = local_90 + (long)pbVar27;
                        pbVar19 = local_90 + 0x10;
                        pbVar25 = pbVar27;
                        do {
                          pbVar7 = pbVar21 + -8;
                          uVar16 = *(undefined8 *)(pbVar21 + -0x10);
                          uVar34 = *(undefined8 *)(pbVar21 + 8);
                          uVar33 = *(undefined8 *)pbVar21;
                          pbVar25 = pbVar25 + -0x20;
                          pbVar21 = pbVar21 + 0x20;
                          *(undefined8 *)(pbVar19 + -8) = *(undefined8 *)pbVar7;
                          *(undefined8 *)(pbVar19 + -0x10) = uVar16;
                          *(undefined8 *)(pbVar19 + 8) = uVar34;
                          *(undefined8 *)pbVar19 = uVar33;
                          pbVar19 = pbVar19 + 0x20;
                        } while (pbVar25 != (byte *)0x0);
                        if (pbVar15 != pbVar27) {
                          pbVar21 = pbVar18 + (long)pbVar27;
                          goto LAB_0018bc18;
                        }
                      }
                      plVar13 = *(long **)(param_1 + 0x10);
                      *pbVar20 = 0;
                      pbVar15 = (byte *)(uVar17 >> 1);
                      pbVar18 = pbVar28;
                      if ((uVar17 & 1) != 0) {
                        pbVar15 = pbStack_98;
                        pbVar18 = local_90;
                      }
                    /* try { // try from 0018bc5c to 0018bc67 has its CatchHandler @ 0018c7d0 */
                      (**(code **)(*plVar13 + 0x20))
                                (&local_d0,plVar13,pbVar18,pbVar18 + (long)pbVar15);
                      uVar17 = local_d0 >> 1 & 0x7f;
                      if ((local_d0 & 1) != 0) {
                        uVar17 = uStack_c8;
                      }
                      if (uVar17 != 1) {
                        if (uVar17 == 0xc) {
                          bVar8 = (local_d0 & 1) != 0;
                          pcVar1 = (char *)((ulong)&local_d0 | 4);
                          if (bVar8) {
                            pcVar1 = local_c0 + 3;
                          }
                          pcVar2 = (char *)((long)&uStack_c8 + 4);
                          if (bVar8) {
                            pcVar2 = local_c0 + 0xb;
                          }
                          *pcVar2 = *pcVar1;
                        }
                        else if ((local_d0 & 1) == 0) {
                          local_d0 = local_d0 & 0xffffffffffff0000;
                        }
                        else {
                          *local_c0 = '\0';
                          uStack_c8 = 0;
                        }
                      }
                      if ((local_a0 & 1) != 0) {
                        operator_delete(local_90);
                      }
                      uVar17 = local_d0 >> 1 & 0x7f;
                      if ((local_d0 & 1) != 0) {
                        uVar17 = uStack_c8;
                      }
                      if (uVar17 == 0) {
                        pbVar15 = (byte *)(local_b8 >> 1 & 0x7f);
                        if ((local_b8 & 1) != 0) {
                          pbVar15 = pbStack_b0;
                        }
                        if (pbVar15 == (byte *)0x2) {
                          pbVar15 = (byte *)((ulong)&local_b8 | 2);
                          pbVar18 = pbVar26;
                          if ((local_b8 & 1) != 0) {
                            pbVar15 = local_a8 + 1;
                            pbVar18 = local_a8;
                          }
                    /* try { // try from 0018c0ec to 0018c0f3 has its CatchHandler @ 0018c79c */
                          FUN_0018d9ec(pvVar12,*pbVar18,*pbVar15);
                        }
                        else {
                          if (pbVar15 != (byte *)0x1) goto LAB_0018c6c0;
                          pbVar15 = pbVar26;
                          if ((local_b8 & 1) != 0) {
                            pbVar15 = local_a8;
                          }
                    /* try { // try from 0018bf64 to 0018bf7b has its CatchHandler @ 0018c79c */
                          FUN_0018cac0(pvVar12,*pbVar15);
                        }
                      }
                      else {
                        pbVar14 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                    **)((long)pvVar12 + 0x90);
                        if (pbVar14 < *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                        **)((long)pvVar12 + 0x98)) {
                          if ((local_d0 & 1) == 0) {
                            *(char **)(pbVar14 + 0x10) = local_c0;
                            *(ulong *)(pbVar14 + 8) = uStack_c8;
                            *(ulong *)pbVar14 = local_d0;
                          }
                          else {
                    /* try { // try from 0018c114 to 0018c11b has its CatchHandler @ 0018c754 */
                            std::__ndk1::
                            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            ::__init_copy_ctor_external(pbVar14,local_c0,uStack_c8);
                          }
                          pbVar14 = pbVar14 + 0x18;
                          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            **)((long)pvVar12 + 0x90) = pbVar14;
                        }
                        else {
                          pbVar14 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                     *)FUN_0015d30c((long)pvVar12 + 0x88,&local_d0);
                        }
                        *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          **)((long)pvVar12 + 0x90) = pbVar14;
                      }
                      if ((local_d0 & 1) != 0) {
                        operator_delete(local_c0);
                      }
                      if ((local_b8 & 1) != 0) {
                        operator_delete(local_a8);
                      }
                      goto joined_r0x0018c150;
                    }
                    goto LAB_0018c648;
                  }
                  goto LAB_0018c660;
                }
              }
LAB_0018c610:
              if (*(long *)(lVar22 + 0x28) != local_70) goto LAB_0018c884;
                    /* try { // try from 0018c624 to 0018c627 has its CatchHandler @ 0018c854 */
              FUN_0018c888();
              goto LAB_0018c628;
            }
            pbVar15 = param_2 + 2;
            if ((long)param_3 - (long)pbVar15 < 2) goto LAB_0018c610;
            for (pbVar18 = (byte *)0x0;
                (param_2[(long)(pbVar18 + 2)] != 0x3a || (param_2[(long)(pbVar18 + 3)] != 0x5d));
                pbVar18 = pbVar18 + 1) {
              if (param_3 + (-4 - (long)param_2) == pbVar18) goto LAB_0018c610;
            }
            pbVar29 = param_2 + (long)(pbVar18 + 2);
            if (pbVar29 == param_3) goto LAB_0018c610;
            if ((byte *)0xffffffffffffffef < pbVar18) goto LAB_0018c690;
            uVar6 = *(undefined4 *)(param_1 + 0x18);
            if (pbVar18 < (byte *)0x17) {
              uVar23 = ((uint)pbVar18 & 0xff) << 1;
              local_a0 = CONCAT71(local_a0._1_7_,(char)uVar23);
              pbVar21 = pbVar28;
              if (pbVar18 + 2 != (byte *)0x2) goto LAB_0018bdbc;
            }
            else {
              uVar17 = ((ulong)pbVar18 | 0xf) + 1;
                    /* try { // try from 0018bd50 to 0018bd57 has its CatchHandler @ 0018c7f8 */
              local_90 = (byte *)operator_new(uVar17);
              local_a0 = uVar17 | 1;
              pbVar21 = local_90;
              pbStack_98 = pbVar18;
              if (((byte *)0x1f < pbVar18) && (0x1f < (ulong)((long)local_90 - (long)pbVar15))) {
                pbVar25 = (byte *)((ulong)pbVar18 & 0xffffffffffffffe0);
                uVar23 = (uint)local_a0 & 0xff;
                uVar17 = (ulong)pbVar18 & 0xffffffffffffffe0;
                pbVar21 = local_90 + (long)pbVar25;
                pbVar20 = param_2 + 0x12;
                pbVar19 = local_90 + 0x10;
                do {
                  pbVar27 = pbVar20 + -8;
                  uVar16 = *(undefined8 *)(pbVar20 + -0x10);
                  uVar34 = *(undefined8 *)(pbVar20 + 8);
                  uVar33 = *(undefined8 *)pbVar20;
                  uVar17 = uVar17 - 0x20;
                  pbVar20 = pbVar20 + 0x20;
                  *(undefined8 *)(pbVar19 + -8) = *(undefined8 *)pbVar27;
                  *(undefined8 *)(pbVar19 + -0x10) = uVar16;
                  *(undefined8 *)(pbVar19 + 8) = uVar34;
                  *(undefined8 *)pbVar19 = uVar33;
                  pbVar19 = pbVar19 + 0x20;
                } while (uVar17 != 0);
                if (pbVar18 == pbVar25) goto LAB_0018bdd0;
                pbVar15 = pbVar15 + (long)pbVar25;
              }
LAB_0018bdbc:
              do {
                pbVar20 = pbVar15 + 1;
                pbVar18 = pbVar21 + 1;
                *pbVar21 = *pbVar15;
                pbVar21 = pbVar18;
                pbVar15 = pbVar20;
              } while (pbVar20 != pbVar29);
              uVar23 = (uint)(byte)local_a0;
            }
LAB_0018bdd0:
            plVar13 = *(long **)(param_1 + 8);
            *pbVar21 = 0;
            pbVar15 = (byte *)(ulong)(uVar23 >> 1);
            pbVar18 = pbVar28;
            if ((uVar23 & 1) != 0) {
              pbVar15 = pbStack_98;
              pbVar18 = local_90;
            }
                    /* try { // try from 0018bdf8 to 0018be17 has its CatchHandler @ 0018c7fc */
            (**(code **)(*plVar13 + 0x30))(plVar13,pbVar18,pbVar18 + (long)pbVar15);
            pbVar15 = pbVar28;
            if ((local_a0 & 1) != 0) {
              pbVar15 = local_90;
            }
            uVar11 = std::__ndk1::__get_classname((char *)pbVar15,(bool)((byte)uVar6 & 1));
            if ((local_a0 & 1) != 0) {
              operator_delete(local_90);
            }
            if (uVar11 == 0) goto LAB_0018c678;
            *(ushort *)((long)pvVar12 + 0xa0) = *(ushort *)((long)pvVar12 + 0xa0) | uVar11;
joined_r0x0018c150:
            pbVar15 = pbVar29 + 2;
          }
          if ((local_e8 & 1) != 0) {
            operator_delete(local_d8);
          }
        }
      } while (param_2 != pbVar15);
      if (param_2 != param_3) {
        if (*param_2 == 0x2d) {
          FUN_0018cac0(pvVar12,0x2d);
          param_2 = param_2 + 1;
        }
        if ((param_2 != param_3) && (*param_2 == 0x5d)) {
          param_2 = param_2 + 1;
          goto LAB_0018c5dc;
        }
      }
    }
LAB_0018c628:
    lVar22 = *(long *)(lVar22 + 0x28);
  }
  if (lVar22 == local_70) {
    FUN_0018c888();
LAB_0018c648:
    if (*(long *)(local_178 + 0x28) == local_70) {
                    /* try { // try from 0018c65c to 0018c65f has its CatchHandler @ 0018c7c8 */
      FUN_0015d7fc();
LAB_0018c660:
      if (*(long *)(local_178 + 0x28) == local_70) {
                    /* try { // try from 0018c674 to 0018c677 has its CatchHandler @ 0018c7c0 */
        FUN_0018eb08();
LAB_0018c678:
        if (*(long *)(local_178 + 0x28) == local_70) {
                    /* try { // try from 0018c68c to 0018c6a7 has its CatchHandler @ 0018c854 */
          FUN_0018eb88();
LAB_0018c690:
          if (*(long *)(local_178 + 0x28) == local_70) {
            FUN_0015d7fc();
LAB_0018c6a8:
            if (*(long *)(local_178 + 0x28) == local_70) {
                    /* try { // try from 0018c6bc to 0018c6bf has its CatchHandler @ 0018c788 */
              FUN_0018e21c();
LAB_0018c6c0:
              if (*(long *)(local_178 + 0x28) == local_70) {
                    /* try { // try from 0018c6d4 to 0018c6d7 has its CatchHandler @ 0018c760 */
                uVar16 = FUN_0018eb08();
                    /* catch() { ... } // from try @ 0018c17c with catch @ 0018c6d8 */
                    /* catch() { ... } // from try @ 0018c0b0 with catch @ 0018c6e0 */
                if ((local_100 & 1) != 0) {
                  operator_delete(local_f0);
                }
                if ((local_e8 & 1) != 0) {
                  operator_delete(local_d8);
                }
                if (*(long *)(local_178 + 0x28) == local_70) {
                  FUN_00157e74(uVar16);
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0018c884:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018c888  FUN_0018c888 =====

void FUN_0018c888(void)

{
  long lVar1;
  regex_error *prVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  prVar2 = (regex_error *)__cxa_allocate_exception(0x18);
                    /* try { // try from 0018c8b0 to 0018c8b7 has its CatchHandler @ 0018c8e0 */
  std::__ndk1::regex_error::regex_error(prVar2,5);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* WARNING: Subroutine does not return */
    __cxa_throw(prVar2,PTR_typeinfo_001ba1a8,PTR__regex_error_001ba1a0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018c908  FUN_0018c908 =====

void FUN_0018c908(undefined8 *param_1,locale *param_2,undefined8 param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  locale alStack_78 [8];
  byte local_70 [8];
  ulong local_68;
  char *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  *param_1 = &PTR_FUN_001b86d0;
  param_1[1] = param_3;
  std::__ndk1::locale::locale((locale *)(param_1 + 2),param_2);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[4] = uVar6;
  param_1[3] = uVar5;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  *(undefined1 *)((long)param_1 + 0xa4) = param_4;
  *(undefined1 *)((long)param_1 + 0xa5) = param_5;
  *(undefined1 *)((long)param_1 + 0xa6) = param_6;
  std::__ndk1::locale::locale(alStack_78,(locale *)(param_1 + 2));
                    /* try { // try from 0018c998 to 0018c9a3 has its CatchHandler @ 0018ca30 */
  std::__ndk1::locale::name();
  uVar1 = (ulong)(local_70[0] >> 1);
  if ((local_70[0] & 1) != 0) {
    uVar1 = local_68;
  }
  if (uVar1 == 1) {
    pcVar2 = (char *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      pcVar2 = local_60;
    }
    bVar4 = *pcVar2 != 'C';
  }
  else {
    bVar4 = true;
  }
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  std::__ndk1::locale::~locale(alStack_78);
  *(bool *)((long)param_1 + 0xa7) = bVar4;
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018cac0  FUN_0018cac0 =====

void FUN_0018cac0(long param_1,undefined1 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0xa5) == '\0') {
    puVar16 = *(undefined1 **)(param_1 + 0x30);
    puVar17 = *(undefined1 **)(param_1 + 0x38);
    puVar4 = puVar16;
    if (*(char *)(param_1 + 0xa6) == '\0') {
      if (puVar16 >= puVar17) {
        puVar8 = *(undefined1 **)(param_1 + 0x28);
        uVar20 = (long)puVar16 - (long)puVar8;
        uVar13 = uVar20 + 1;
        if ((long)uVar13 < 0) goto LAB_0018cf2c;
        uVar10 = ((long)puVar17 - (long)puVar8) * 2;
        if (uVar10 < uVar13 || uVar10 - uVar13 == 0) {
          uVar10 = uVar13;
        }
        if (0x3ffffffffffffffe < (ulong)((long)puVar17 - (long)puVar8)) {
          uVar10 = 0x7fffffffffffffff;
        }
        if (uVar10 == 0) {
          puVar17 = (undefined1 *)0x0;
        }
        else {
          puVar17 = (undefined1 *)operator_new(uVar10);
        }
        puVar9 = puVar17 + uVar20;
        puVar7 = puVar17 + uVar10;
        puVar18 = puVar9 + 1;
        *puVar9 = param_2;
        puVar19 = puVar9;
        if (puVar16 == puVar8) goto LAB_0018cee8;
        if ((7 < uVar20) && (0x1f < (ulong)((long)puVar8 - (long)puVar17))) {
          puVar19 = puVar17;
          puVar4 = puVar8;
          if (uVar20 < 0x20) {
            uVar10 = 0;
          }
          else {
            puVar12 = (undefined8 *)(puVar16 + -0x10);
            uVar10 = uVar20 & 0xffffffffffffffe0;
            puVar14 = (undefined8 *)(puVar17 + ((long)puVar12 - (long)puVar8));
            uVar13 = uVar10;
            do {
              puVar2 = puVar12 + -1;
              uVar23 = puVar12[-2];
              uVar22 = puVar12[1];
              uVar21 = *puVar12;
              uVar13 = uVar13 - 0x20;
              puVar12 = puVar12 + -4;
              puVar14[-1] = *puVar2;
              puVar14[-2] = uVar23;
              puVar14[1] = uVar22;
              *puVar14 = uVar21;
              puVar14 = puVar14 + -4;
            } while (uVar13 != 0);
            if (uVar20 == uVar10) goto LAB_0018cee8;
            if ((uVar20 & 0x18) == 0) {
              puVar9 = puVar9 + -uVar10;
              puVar16 = puVar16 + -uVar10;
              goto LAB_0018ced4;
            }
          }
          uVar13 = uVar20 & 0xfffffffffffffff8;
          puVar14 = (undefined8 *)(puVar16 + (-8 - uVar10));
          puVar16 = puVar16 + -uVar13;
          lVar11 = uVar10 - uVar13;
          lVar15 = (long)puVar14 - (long)puVar8;
          do {
            lVar11 = lVar11 + 8;
            *(undefined8 *)(puVar17 + lVar15) = *puVar14;
            lVar15 = lVar15 + -8;
            puVar14 = puVar14 + -1;
          } while (lVar11 != 0);
          if (uVar20 == uVar13) goto LAB_0018cee8;
          puVar9 = puVar9 + -uVar13;
        }
LAB_0018ced4:
        do {
          puVar9 = puVar9 + -1;
          puVar16 = puVar16 + -1;
          *puVar9 = *puVar16;
        } while (puVar16 != puVar8);
LAB_0018cee4:
        puVar19 = puVar17;
        puVar4 = *(undefined1 **)(param_1 + 0x28);
        goto LAB_0018cee8;
      }
LAB_0018cbc4:
      puVar18 = puVar16 + 1;
      *puVar16 = param_2;
    }
    else {
      if (puVar16 < puVar17) goto LAB_0018cbc4;
      puVar8 = *(undefined1 **)(param_1 + 0x28);
      uVar20 = (long)puVar16 - (long)puVar8;
      uVar13 = uVar20 + 1;
      if ((long)uVar13 < 0) {
LAB_0018cf2c:
        if (*(long *)(lVar1 + 0x28) == lVar5) {
          FUN_0018e7e0();
        }
        goto LAB_0018cf40;
      }
      uVar10 = ((long)puVar17 - (long)puVar8) * 2;
      if (uVar10 < uVar13 || uVar10 - uVar13 == 0) {
        uVar10 = uVar13;
      }
      if (0x3ffffffffffffffe < (ulong)((long)puVar17 - (long)puVar8)) {
        uVar10 = 0x7fffffffffffffff;
      }
      if (uVar10 == 0) {
        puVar17 = (undefined1 *)0x0;
      }
      else {
        puVar17 = (undefined1 *)operator_new(uVar10);
      }
      puVar9 = puVar17 + uVar20;
      puVar7 = puVar17 + uVar10;
      puVar18 = puVar9 + 1;
      *puVar9 = param_2;
      puVar19 = puVar9;
      if (puVar16 != puVar8) {
        if ((7 < uVar20) && (0x1f < (ulong)((long)puVar8 - (long)puVar17))) {
          puVar19 = puVar17;
          puVar4 = puVar8;
          if (uVar20 < 0x20) {
            uVar10 = 0;
          }
          else {
            puVar12 = (undefined8 *)(puVar16 + -0x10);
            uVar10 = uVar20 & 0xffffffffffffffe0;
            puVar14 = (undefined8 *)(puVar17 + ((long)puVar12 - (long)puVar8));
            uVar13 = uVar10;
            do {
              puVar2 = puVar12 + -1;
              uVar23 = puVar12[-2];
              uVar22 = puVar12[1];
              uVar21 = *puVar12;
              uVar13 = uVar13 - 0x20;
              puVar12 = puVar12 + -4;
              puVar14[-1] = *puVar2;
              puVar14[-2] = uVar23;
              puVar14[1] = uVar22;
              *puVar14 = uVar21;
              puVar14 = puVar14 + -4;
            } while (uVar13 != 0);
            if (uVar20 == uVar10) goto LAB_0018cee8;
            if ((uVar20 & 0x18) == 0) {
              puVar9 = puVar9 + -uVar10;
              puVar16 = puVar16 + -uVar10;
              goto LAB_0018ceb4;
            }
          }
          uVar13 = uVar20 & 0xfffffffffffffff8;
          puVar14 = (undefined8 *)(puVar16 + (-8 - uVar10));
          puVar16 = puVar16 + -uVar13;
          lVar11 = uVar10 - uVar13;
          lVar15 = (long)puVar14 - (long)puVar8;
          do {
            lVar11 = lVar11 + 8;
            *(undefined8 *)(puVar17 + lVar15) = *puVar14;
            lVar15 = lVar15 + -8;
            puVar14 = puVar14 + -1;
          } while (lVar11 != 0);
          if (uVar20 == uVar13) goto LAB_0018cee8;
          puVar9 = puVar9 + -uVar13;
        }
LAB_0018ceb4:
        do {
          puVar9 = puVar9 + -1;
          puVar16 = puVar16 + -1;
          *puVar9 = *puVar16;
        } while (puVar16 != puVar8);
        goto LAB_0018cee4;
      }
LAB_0018cee8:
      *(undefined1 **)(param_1 + 0x28) = puVar19;
      *(undefined1 **)(param_1 + 0x30) = puVar18;
      *(undefined1 **)(param_1 + 0x38) = puVar7;
      if (puVar4 != (undefined1 *)0x0) {
        operator_delete(puVar4);
      }
    }
    *(undefined1 **)(param_1 + 0x30) = puVar18;
  }
  else {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))();
    puVar16 = *(undefined1 **)(param_1 + 0x30);
    if (puVar16 < *(undefined1 **)(param_1 + 0x38)) {
      *puVar16 = uVar3;
      *(undefined1 **)(param_1 + 0x30) = puVar16 + 1;
    }
    else {
      puVar17 = *(undefined1 **)(param_1 + 0x28);
      uVar20 = (long)puVar16 - (long)puVar17;
      uVar13 = uVar20 + 1;
      if ((long)uVar13 < 0) goto LAB_0018cf2c;
      uVar6 = (long)*(undefined1 **)(param_1 + 0x38) - (long)puVar17;
      uVar10 = uVar6 * 2;
      if (uVar10 < uVar13 || uVar10 - uVar13 == 0) {
        uVar10 = uVar13;
      }
      if (0x3ffffffffffffffe < uVar6) {
        uVar10 = 0x7fffffffffffffff;
      }
      if (uVar10 == 0) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        puVar4 = (undefined1 *)operator_new(uVar10);
      }
      puVar8 = puVar4 + uVar20;
      puVar19 = puVar8 + 1;
      *puVar8 = uVar3;
      puVar9 = puVar8;
      puVar7 = puVar16;
      if (puVar16 != puVar17) {
        puVar9 = puVar4;
        if ((7 < uVar20) && (0x1f < (ulong)((long)puVar17 - (long)puVar4))) {
          puVar7 = puVar17;
          if (uVar20 < 0x20) {
            uVar6 = 0;
          }
          else {
            puVar12 = (undefined8 *)(puVar16 + -0x10);
            uVar6 = uVar20 & 0xffffffffffffffe0;
            puVar14 = (undefined8 *)(puVar4 + ((long)puVar12 - (long)puVar17));
            uVar13 = uVar6;
            do {
              puVar2 = puVar12 + -1;
              uVar23 = puVar12[-2];
              uVar22 = puVar12[1];
              uVar21 = *puVar12;
              uVar13 = uVar13 - 0x20;
              puVar12 = puVar12 + -4;
              puVar14[-1] = *puVar2;
              puVar14[-2] = uVar23;
              puVar14[1] = uVar22;
              *puVar14 = uVar21;
              puVar14 = puVar14 + -4;
            } while (uVar13 != 0);
            if (uVar20 == uVar6) goto LAB_0018ce84;
            if ((uVar20 & 0x18) == 0) {
              puVar8 = puVar8 + -uVar6;
              puVar16 = puVar16 + -uVar6;
              goto LAB_0018ce70;
            }
          }
          uVar13 = uVar20 & 0xfffffffffffffff8;
          puVar14 = (undefined8 *)(puVar16 + (-8 - uVar6));
          puVar16 = puVar16 + -uVar13;
          lVar11 = uVar6 - uVar13;
          lVar15 = (long)puVar14 - (long)puVar17;
          do {
            lVar11 = lVar11 + 8;
            *(undefined8 *)(puVar4 + lVar15) = *puVar14;
            lVar15 = lVar15 + -8;
            puVar14 = puVar14 + -1;
          } while (lVar11 != 0);
          if (uVar20 == uVar13) goto LAB_0018ce84;
          puVar8 = puVar8 + -uVar13;
        }
LAB_0018ce70:
        do {
          puVar8 = puVar8 + -1;
          puVar16 = puVar16 + -1;
          *puVar8 = *puVar16;
        } while (puVar16 != puVar17);
        puVar7 = *(undefined1 **)(param_1 + 0x28);
      }
LAB_0018ce84:
      *(undefined1 **)(param_1 + 0x28) = puVar9;
      *(undefined1 **)(param_1 + 0x30) = puVar19;
      *(undefined1 **)(param_1 + 0x38) = puVar4 + uVar10;
      if (puVar7 != (undefined1 *)0x0) {
        operator_delete(puVar7);
      }
      *(undefined1 **)(param_1 + 0x30) = puVar19;
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    return;
  }
LAB_0018cf40:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018cf44  FUN_0018cf44 =====

char * FUN_0018cf44(undefined8 param_1,char *param_2,char *param_3,byte *param_4)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (1 < (long)param_3 - (long)param_2) {
    pcVar3 = param_3 + -2;
    pcVar4 = param_2;
    while ((*pcVar4 != '.' || (pcVar4[1] != ']'))) {
      if (param_2 == pcVar3) goto LAB_0018d034;
      pcVar3 = pcVar3 + -1;
      pcVar4 = pcVar4 + 1;
    }
    if (pcVar4 != param_3) {
      FUN_0018e818(&local_50,param_1,param_2,pcVar4);
      if ((*param_4 & 1) != 0) {
        operator_delete(*(void **)(param_4 + 0x10));
      }
      *(undefined8 *)(param_4 + 8) = uStack_48;
      *(undefined8 *)param_4 = local_50;
      uVar1 = (ulong)(*param_4 >> 1);
      if ((*param_4 & 1) != 0) {
        uVar1 = *(ulong *)(param_4 + 8);
      }
      *(undefined8 *)(param_4 + 0x10) = local_40;
      if (1 < uVar1 - 1) goto LAB_0018d048;
      if (*(long *)(lVar2 + 0x28) == local_38) {
        return pcVar4 + 2;
      }
      goto LAB_0018d05c;
    }
  }
LAB_0018d034:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    FUN_0018c888();
LAB_0018d048:
    if (*(long *)(lVar2 + 0x28) == local_38) {
      FUN_0018eb08();
    }
  }
LAB_0018d05c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018d060  FUN_0018d060 =====

void FUN_0018d060(undefined8 param_1,byte *param_2,byte *param_3,byte *param_4,long param_5)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 *puVar5;
  byte *extraout_x1;
  byte *pbVar6;
  byte *pbVar7;
  ushort uVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  
  auVar28._8_8_ = param_2;
  auVar28._0_8_ = param_1;
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  lVar2 = tpidr_el0;
  lVar9 = *(long *)(lVar2 + 0x28);
  if (param_2 == param_3) {
    if (*(long *)(lVar2 + 0x28) != lVar9) goto LAB_0018d668;
    auVar28 = FUN_0018e2d4();
    goto LAB_0018d654;
  }
  bVar1 = *param_2;
  if (bVar1 < 0x62) {
    if (bVar1 < 0x53) {
      if (bVar1 == 0) {
        if ((*param_4 & 1) == 0) {
          pbVar6 = param_4 + 1;
          *param_4 = 2;
        }
        else {
          pbVar6 = *(byte **)(param_4 + 0x10);
          param_4[8] = 1;
          param_4[9] = 0;
          param_4[10] = 0;
          param_4[0xb] = 0;
          param_4[0xc] = 0;
          param_4[0xd] = 0;
          param_4[0xe] = 0;
          param_4[0xf] = 0;
        }
        pbVar6[0] = 0;
        pbVar6[1] = 0;
      }
      else {
        if (bVar1 != 0x44) {
LAB_0018d1c8:
          auVar28 = FUN_0018e354();
          param_2 = auVar28._8_8_;
          pbVar6 = auVar28._0_8_;
          goto LAB_0018d610;
        }
        uVar8 = *(ushort *)(param_5 + 0xa2) | 0x40;
LAB_0018d1b0:
        *(ushort *)(param_5 + 0xa2) = uVar8;
      }
    }
    else {
      if (bVar1 == 0x53) {
        uVar8 = *(ushort *)(param_5 + 0xa2) | 1;
        goto LAB_0018d1b0;
      }
      if (bVar1 != 0x57) goto LAB_0018d1c8;
      *(ushort *)(param_5 + 0xa2) = *(ushort *)(param_5 + 0xa2) | 0x60;
      if (*(char *)(param_5 + 0xa5) != '\0') {
        auVar28 = (**(code **)(**(long **)(param_5 + 0x18) + 0x28))(*(long **)(param_5 + 0x18),0x5f)
        ;
        puVar21 = *(undefined1 **)(param_5 + 0x48);
        if (puVar21 < *(undefined1 **)(param_5 + 0x50)) {
          puVar20 = puVar21 + 1;
          *puVar21 = auVar28[0];
        }
        else {
          puVar23 = *(undefined1 **)(param_5 + 0x40);
          uVar24 = (long)puVar21 - (long)puVar23;
          uVar17 = uVar24 + 1;
          if ((long)uVar17 < 0) goto LAB_0018d654;
          uVar11 = (long)*(undefined1 **)(param_5 + 0x50) - (long)puVar23;
          uVar14 = uVar11 * 2;
          if (uVar14 < uVar17 || uVar14 - uVar17 == 0) {
            uVar14 = uVar17;
          }
          if (0x3ffffffffffffffe < uVar11) {
            uVar14 = 0x7fffffffffffffff;
          }
          if (uVar14 == 0) {
            puVar5 = (undefined1 *)0x0;
          }
          else {
            puVar5 = (undefined1 *)operator_new(uVar14);
          }
          puVar13 = puVar5 + uVar24;
          puVar20 = puVar13 + 1;
          *puVar13 = auVar28[0];
          puVar12 = puVar13;
          puVar10 = puVar21;
          if (puVar21 != puVar23) {
            puVar12 = puVar5;
            if ((7 < uVar24) && (0x1f < (ulong)((long)puVar23 - (long)puVar5))) {
              puVar10 = puVar23;
              if (uVar24 < 0x20) {
                uVar11 = 0;
              }
              else {
                puVar16 = (undefined8 *)(puVar21 + -0x10);
                uVar11 = uVar24 & 0xffffffffffffffe0;
                puVar18 = (undefined8 *)(puVar5 + ((long)puVar16 - (long)puVar23));
                uVar17 = uVar11;
                do {
                  puVar3 = puVar16 + -1;
                  uVar27 = puVar16[-2];
                  uVar26 = puVar16[1];
                  uVar25 = *puVar16;
                  uVar17 = uVar17 - 0x20;
                  puVar16 = puVar16 + -4;
                  puVar18[-1] = *puVar3;
                  puVar18[-2] = uVar27;
                  puVar18[1] = uVar26;
                  *puVar18 = uVar25;
                  puVar18 = puVar18 + -4;
                } while (uVar17 != 0);
                if (uVar24 == uVar11) goto LAB_0018d578;
                if ((uVar24 & 0x18) == 0) {
                  puVar13 = puVar13 + -uVar11;
                  puVar21 = puVar21 + -uVar11;
                  goto LAB_0018d564;
                }
              }
              uVar17 = uVar24 & 0xfffffffffffffff8;
              puVar18 = (undefined8 *)(puVar21 + (-8 - uVar11));
              puVar21 = puVar21 + -uVar17;
              lVar15 = uVar11 - uVar17;
              lVar19 = (long)puVar18 - (long)puVar23;
              do {
                lVar15 = lVar15 + 8;
                *(undefined8 *)(puVar5 + lVar19) = *puVar18;
                lVar19 = lVar19 + -8;
                puVar18 = puVar18 + -1;
              } while (lVar15 != 0);
              if (uVar24 == uVar17) goto LAB_0018d578;
              puVar13 = puVar13 + -uVar17;
            }
LAB_0018d564:
            do {
              puVar13 = puVar13 + -1;
              puVar21 = puVar21 + -1;
              *puVar13 = *puVar21;
            } while (puVar21 != puVar23);
            puVar10 = *(undefined1 **)(param_5 + 0x40);
          }
LAB_0018d578:
          *(undefined1 **)(param_5 + 0x40) = puVar12;
          *(undefined1 **)(param_5 + 0x48) = puVar20;
          *(undefined1 **)(param_5 + 0x50) = puVar5 + uVar14;
          if (puVar10 != (undefined1 *)0x0) {
            operator_delete(puVar10);
          }
        }
        *(undefined1 **)(param_5 + 0x48) = puVar20;
        pbVar6 = param_2 + 1;
        goto LAB_0018d610;
      }
      puVar21 = *(undefined1 **)(param_5 + 0x48);
      puVar23 = *(undefined1 **)(param_5 + 0x50);
      puVar5 = puVar21;
      if (*(char *)(param_5 + 0xa6) == '\0') {
        if (puVar21 >= puVar23) {
          puVar13 = *(undefined1 **)(param_5 + 0x40);
          uVar24 = (long)puVar21 - (long)puVar13;
          uVar17 = uVar24 + 1;
          if ((long)uVar17 < 0) goto LAB_0018d654;
          uVar14 = ((long)puVar23 - (long)puVar13) * 2;
          if (uVar14 < uVar17 || uVar14 - uVar17 == 0) {
            uVar14 = uVar17;
          }
          if (0x3ffffffffffffffe < (ulong)((long)puVar23 - (long)puVar13)) {
            uVar14 = 0x7fffffffffffffff;
          }
          if (uVar14 == 0) {
            puVar23 = (undefined1 *)0x0;
          }
          else {
            puVar23 = (undefined1 *)operator_new(uVar14);
          }
          puVar12 = puVar23 + uVar24;
          puVar10 = puVar23 + uVar14;
          puVar22 = puVar12 + 1;
          *puVar12 = 0x5f;
          puVar20 = puVar12;
          if (puVar21 == puVar13) goto LAB_0018d5e8;
          if ((7 < uVar24) && (0x1f < (ulong)((long)puVar13 - (long)puVar23))) {
            puVar20 = puVar23;
            puVar5 = puVar13;
            if (uVar24 < 0x20) {
              uVar14 = 0;
            }
            else {
              puVar16 = (undefined8 *)(puVar21 + -0x10);
              uVar14 = uVar24 & 0xffffffffffffffe0;
              puVar18 = (undefined8 *)(puVar23 + ((long)puVar16 - (long)puVar13));
              uVar17 = uVar14;
              do {
                puVar3 = puVar16 + -1;
                uVar27 = puVar16[-2];
                uVar26 = puVar16[1];
                uVar25 = *puVar16;
                uVar17 = uVar17 - 0x20;
                puVar16 = puVar16 + -4;
                puVar18[-1] = *puVar3;
                puVar18[-2] = uVar27;
                puVar18[1] = uVar26;
                *puVar18 = uVar25;
                puVar18 = puVar18 + -4;
              } while (uVar17 != 0);
              if (uVar24 == uVar14) goto LAB_0018d5e8;
              if ((uVar24 & 0x18) == 0) {
                puVar12 = puVar12 + -uVar14;
                puVar21 = puVar21 + -uVar14;
                goto LAB_0018d5d4;
              }
            }
            uVar17 = uVar24 & 0xfffffffffffffff8;
            puVar18 = (undefined8 *)(puVar21 + (-8 - uVar14));
            puVar21 = puVar21 + -uVar17;
            lVar15 = uVar14 - uVar17;
            lVar19 = (long)puVar18 - (long)puVar13;
            do {
              lVar15 = lVar15 + 8;
              *(undefined8 *)(puVar23 + lVar19) = *puVar18;
              lVar19 = lVar19 + -8;
              puVar18 = puVar18 + -1;
            } while (lVar15 != 0);
            if (uVar24 == uVar17) goto LAB_0018d5e8;
            puVar12 = puVar12 + -uVar17;
          }
LAB_0018d5d4:
          do {
            puVar12 = puVar12 + -1;
            puVar21 = puVar21 + -1;
            *puVar12 = *puVar21;
          } while (puVar21 != puVar13);
LAB_0018d5e4:
          puVar20 = puVar23;
          puVar5 = *(undefined1 **)(param_5 + 0x40);
          goto LAB_0018d5e8;
        }
LAB_0018d2a8:
        puVar22 = puVar21 + 1;
        *puVar21 = 0x5f;
      }
      else {
        if (puVar21 < puVar23) goto LAB_0018d2a8;
        puVar13 = *(undefined1 **)(param_5 + 0x40);
        uVar24 = (long)puVar21 - (long)puVar13;
        uVar17 = uVar24 + 1;
        auVar28 = auVar4;
        if ((long)uVar17 < 0) {
LAB_0018d654:
          if (*(long *)(lVar2 + 0x28) == lVar9) {
            auVar28 = FUN_0018e7e0();
          }
          goto LAB_0018d668;
        }
        uVar14 = ((long)puVar23 - (long)puVar13) * 2;
        if (uVar14 < uVar17 || uVar14 - uVar17 == 0) {
          uVar14 = uVar17;
        }
        if (0x3ffffffffffffffe < (ulong)((long)puVar23 - (long)puVar13)) {
          uVar14 = 0x7fffffffffffffff;
        }
        if (uVar14 == 0) {
          puVar23 = (undefined1 *)0x0;
        }
        else {
          puVar23 = (undefined1 *)operator_new(uVar14);
        }
        puVar12 = puVar23 + uVar24;
        puVar10 = puVar23 + uVar14;
        puVar22 = puVar12 + 1;
        *puVar12 = 0x5f;
        puVar20 = puVar12;
        if (puVar21 != puVar13) {
          if ((7 < uVar24) && (0x1f < (ulong)((long)puVar13 - (long)puVar23))) {
            puVar20 = puVar23;
            puVar5 = puVar13;
            if (uVar24 < 0x20) {
              uVar14 = 0;
            }
            else {
              puVar16 = (undefined8 *)(puVar21 + -0x10);
              uVar14 = uVar24 & 0xffffffffffffffe0;
              puVar18 = (undefined8 *)(puVar23 + ((long)puVar16 - (long)puVar13));
              uVar17 = uVar14;
              do {
                puVar3 = puVar16 + -1;
                uVar27 = puVar16[-2];
                uVar26 = puVar16[1];
                uVar25 = *puVar16;
                uVar17 = uVar17 - 0x20;
                puVar16 = puVar16 + -4;
                puVar18[-1] = *puVar3;
                puVar18[-2] = uVar27;
                puVar18[1] = uVar26;
                *puVar18 = uVar25;
                puVar18 = puVar18 + -4;
              } while (uVar17 != 0);
              if (uVar24 == uVar14) goto LAB_0018d5e8;
              if ((uVar24 & 0x18) == 0) {
                puVar12 = puVar12 + -uVar14;
                puVar21 = puVar21 + -uVar14;
                goto LAB_0018d5b4;
              }
            }
            uVar17 = uVar24 & 0xfffffffffffffff8;
            puVar18 = (undefined8 *)(puVar21 + (-8 - uVar14));
            puVar21 = puVar21 + -uVar17;
            lVar15 = uVar14 - uVar17;
            lVar19 = (long)puVar18 - (long)puVar13;
            do {
              lVar15 = lVar15 + 8;
              *(undefined8 *)(puVar23 + lVar19) = *puVar18;
              lVar19 = lVar19 + -8;
              puVar18 = puVar18 + -1;
            } while (lVar15 != 0);
            if (uVar24 == uVar17) goto LAB_0018d5e8;
            puVar12 = puVar12 + -uVar17;
          }
LAB_0018d5b4:
          do {
            puVar12 = puVar12 + -1;
            puVar21 = puVar21 + -1;
            *puVar12 = *puVar21;
          } while (puVar21 != puVar13);
          goto LAB_0018d5e4;
        }
LAB_0018d5e8:
        *(undefined1 **)(param_5 + 0x40) = puVar20;
        *(undefined1 **)(param_5 + 0x48) = puVar22;
        *(undefined1 **)(param_5 + 0x50) = puVar10;
        if (puVar5 != (undefined1 *)0x0) {
          operator_delete(puVar5);
        }
      }
      *(undefined1 **)(param_5 + 0x48) = puVar22;
    }
LAB_0018d60c:
    pbVar6 = param_2 + 1;
  }
  else if (bVar1 < 0x73) {
    if (bVar1 != 0x62) {
      if (bVar1 != 100) goto LAB_0018d1c8;
      uVar8 = *(ushort *)(param_5 + 0xa0) | 0x40;
LAB_0018d1c0:
      *(ushort *)(param_5 + 0xa0) = uVar8;
      goto LAB_0018d60c;
    }
    if ((*param_4 & 1) == 0) {
      pbVar7 = param_4 + 1;
      *param_4 = 2;
    }
    else {
      pbVar7 = *(byte **)(param_4 + 0x10);
      param_4[8] = 1;
      param_4[9] = 0;
      param_4[10] = 0;
      param_4[0xb] = 0;
      param_4[0xc] = 0;
      param_4[0xd] = 0;
      param_4[0xe] = 0;
      param_4[0xf] = 0;
    }
    pbVar6 = param_2 + 1;
    pbVar7[0] = 8;
    pbVar7[1] = 0;
  }
  else {
    if (bVar1 == 0x73) {
      uVar8 = *(ushort *)(param_5 + 0xa0) | 1;
      goto LAB_0018d1c0;
    }
    if (bVar1 != 0x77) goto LAB_0018d1c8;
    *(ushort *)(param_5 + 0xa0) = *(ushort *)(param_5 + 0xa0) | 0x60;
    FUN_0018cac0(param_5,0x5f);
    pbVar6 = param_2 + 1;
    param_2 = extraout_x1;
  }
LAB_0018d610:
  auVar28._8_8_ = param_2;
  auVar28._0_8_ = pbVar6;
  if (*(long *)(lVar2 + 0x28) == lVar9) {
    return;
  }
LAB_0018d668:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar28._0_8_,auVar28._8_8_);
}


// ===== 0018d66c  FUN_0018d66c =====

void FUN_0018d66c(undefined8 param_1,byte *param_2,byte *param_3,byte *param_4)

{
  byte *pbVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  byte bVar5;
  byte *extraout_x1;
  byte *pbVar6;
  uint uVar7;
  long lVar8;
  undefined2 uVar9;
  undefined1 auVar10 [16];
  
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = param_1;
  lVar3 = tpidr_el0;
  lVar8 = *(long *)(lVar3 + 0x28);
  if (param_2 == param_3) {
LAB_0018d9d4:
    if (*(long *)(lVar3 + 0x28) == lVar8) {
      auVar10 = FUN_0018e2d4();
    }
    goto LAB_0018d9e8;
  }
  bVar5 = *param_2;
  uVar7 = (uint)bVar5;
  if (bVar5 < 0x66) {
    if (bVar5 < 0x5c) {
      if ((uVar7 == 0x22) || (bVar5 == 0x2f)) goto LAB_0018d724;
LAB_0018d7e8:
      if ((uVar7 & 0xf8) != 0x30) goto LAB_0018d9d4;
      pbVar6 = param_2 + 1;
      iVar2 = uVar7 - 0x30;
      pbVar4 = param_3;
      if ((pbVar6 != param_3) && (pbVar4 = pbVar6, (*pbVar6 & 0xf8) == 0x30)) {
        pbVar1 = param_2 + 2;
        iVar2 = (uint)*pbVar6 + iVar2 * 8 + -0x30;
        pbVar4 = param_3;
        if ((pbVar1 != param_3) && (pbVar4 = pbVar1, (*pbVar1 & 0xf8) == 0x30)) {
          iVar2 = (uint)*pbVar1 + iVar2 * 8 + -0x30;
          pbVar4 = param_2 + 3;
        }
      }
      if (param_4 == (byte *)0x0) {
        FUN_0018b6a0(param_1,iVar2);
        param_2 = extraout_x1;
      }
      else {
        if ((*param_4 & 1) == 0) {
          pbVar6 = param_4 + 1;
          *param_4 = 2;
        }
        else {
          pbVar6 = *(byte **)(param_4 + 0x10);
          param_4[8] = 1;
          param_4[9] = 0;
          param_4[10] = 0;
          param_4[0xb] = 0;
          param_4[0xc] = 0;
          param_4[0xd] = 0;
          param_4[0xe] = 0;
          param_4[0xf] = 0;
        }
        *pbVar6 = (byte)iVar2;
        pbVar6[1] = 0;
      }
    }
    else {
      if (bVar5 != 0x5c) {
        if (uVar7 == 0x61) {
          if (param_4 != (byte *)0x0) {
            if ((*param_4 & 1) == 0) {
              pbVar6 = param_4 + 1;
              *param_4 = 2;
            }
            else {
              pbVar6 = *(byte **)(param_4 + 0x10);
              param_4[8] = 1;
              param_4[9] = 0;
              param_4[10] = 0;
              param_4[0xb] = 0;
              param_4[0xc] = 0;
              param_4[0xd] = 0;
              param_4[0xe] = 0;
              param_4[0xf] = 0;
            }
            uVar9 = 7;
            goto LAB_0018d978;
          }
          bVar5 = 7;
        }
        else {
          if (uVar7 != 0x62) goto LAB_0018d7e8;
          if (param_4 != (byte *)0x0) {
            if ((*param_4 & 1) == 0) {
              pbVar6 = param_4 + 1;
              *param_4 = 2;
            }
            else {
              pbVar6 = *(byte **)(param_4 + 0x10);
              param_4[8] = 1;
              param_4[9] = 0;
              param_4[10] = 0;
              param_4[0xb] = 0;
              param_4[0xc] = 0;
              param_4[0xd] = 0;
              param_4[0xe] = 0;
              param_4[0xf] = 0;
            }
            uVar9 = 8;
            goto LAB_0018d978;
          }
          bVar5 = 8;
        }
        goto LAB_0018d8c0;
      }
LAB_0018d724:
      if (param_4 == (byte *)0x0) goto LAB_0018d8c0;
      if ((*param_4 & 1) == 0) {
        pbVar6 = param_4 + 1;
        *param_4 = 2;
      }
      else {
        pbVar6 = *(byte **)(param_4 + 0x10);
        param_4[8] = 1;
        param_4[9] = 0;
        param_4[10] = 0;
        param_4[0xb] = 0;
        param_4[0xc] = 0;
        param_4[0xd] = 0;
        param_4[0xe] = 0;
        param_4[0xf] = 0;
      }
      *pbVar6 = bVar5;
      pbVar4 = param_2 + 1;
      pbVar6[1] = 0;
    }
  }
  else {
    if (bVar5 < 0x72) {
      if (bVar5 == 0x66) {
        if (param_4 != (byte *)0x0) {
          if ((*param_4 & 1) == 0) {
            pbVar6 = param_4 + 1;
            *param_4 = 2;
          }
          else {
            pbVar6 = *(byte **)(param_4 + 0x10);
            param_4[8] = 1;
            param_4[9] = 0;
            param_4[10] = 0;
            param_4[0xb] = 0;
            param_4[0xc] = 0;
            param_4[0xd] = 0;
            param_4[0xe] = 0;
            param_4[0xf] = 0;
          }
          uVar9 = 0xc;
          goto LAB_0018d978;
        }
        bVar5 = 0xc;
      }
      else {
        if (bVar5 != 0x6e) goto LAB_0018d7e8;
        if (param_4 != (byte *)0x0) {
          if ((*param_4 & 1) == 0) {
            pbVar6 = param_4 + 1;
            *param_4 = 2;
          }
          else {
            pbVar6 = *(byte **)(param_4 + 0x10);
            param_4[8] = 1;
            param_4[9] = 0;
            param_4[10] = 0;
            param_4[0xb] = 0;
            param_4[0xc] = 0;
            param_4[0xd] = 0;
            param_4[0xe] = 0;
            param_4[0xf] = 0;
          }
          uVar9 = 10;
          goto LAB_0018d978;
        }
        bVar5 = 10;
      }
    }
    else if (uVar7 == 0x72) {
      if (param_4 != (byte *)0x0) {
        if ((*param_4 & 1) == 0) {
          pbVar6 = param_4 + 1;
          *param_4 = 2;
        }
        else {
          pbVar6 = *(byte **)(param_4 + 0x10);
          param_4[8] = 1;
          param_4[9] = 0;
          param_4[10] = 0;
          param_4[0xb] = 0;
          param_4[0xc] = 0;
          param_4[0xd] = 0;
          param_4[0xe] = 0;
          param_4[0xf] = 0;
        }
        uVar9 = 0xd;
LAB_0018d978:
        pbVar4 = param_2 + 1;
        *(undefined2 *)pbVar6 = uVar9;
        goto LAB_0018d980;
      }
      bVar5 = 0xd;
    }
    else if (uVar7 == 0x74) {
      if (param_4 != (byte *)0x0) {
        if ((*param_4 & 1) == 0) {
          pbVar6 = param_4 + 1;
          *param_4 = 2;
        }
        else {
          pbVar6 = *(byte **)(param_4 + 0x10);
          param_4[8] = 1;
          param_4[9] = 0;
          param_4[10] = 0;
          param_4[0xb] = 0;
          param_4[0xc] = 0;
          param_4[0xd] = 0;
          param_4[0xe] = 0;
          param_4[0xf] = 0;
        }
        uVar9 = 9;
        goto LAB_0018d978;
      }
      bVar5 = 9;
    }
    else {
      if (bVar5 != 0x76) goto LAB_0018d7e8;
      if (param_4 != (byte *)0x0) {
        if ((*param_4 & 1) == 0) {
          pbVar6 = param_4 + 1;
          *param_4 = 2;
        }
        else {
          pbVar6 = *(byte **)(param_4 + 0x10);
          param_4[8] = 1;
          param_4[9] = 0;
          param_4[10] = 0;
          param_4[0xb] = 0;
          param_4[0xc] = 0;
          param_4[0xd] = 0;
          param_4[0xe] = 0;
          param_4[0xf] = 0;
        }
        uVar9 = 0xb;
        goto LAB_0018d978;
      }
      bVar5 = 0xb;
    }
LAB_0018d8c0:
    FUN_0018b6a0(param_1,bVar5);
    pbVar4 = param_2 + 1;
  }
LAB_0018d980:
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = pbVar4;
  if (*(long *)(lVar3 + 0x28) == lVar8) {
    return;
  }
LAB_0018d9e8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar10._0_8_,auVar10._8_8_);
}


// ===== 0018d9ec  FUN_0018d9ec =====

void FUN_0018d9ec(long param_1,ushort param_2,int param_3)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  ushort *puVar8;
  ulong uVar9;
  ulong uVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  ushort *puVar15;
  long lVar16;
  ushort *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0xa5) == '\0') {
    puVar14 = *(ushort **)(param_1 + 0x78);
    puVar8 = *(ushort **)(param_1 + 0x80);
    uVar2 = param_2 & 0xff | (ushort)(param_3 << 8);
    if (*(char *)(param_1 + 0xa6) == '\0') {
      if (puVar14 < puVar8) goto LAB_0018db20;
      puVar13 = *(ushort **)(param_1 + 0x70);
      lVar16 = (long)puVar14 - (long)puVar13 >> 1;
      if (lVar16 == -2 || lVar16 + 2 < 0 != SCARRY8(lVar16,2)) goto LAB_0018dd98;
      uVar6 = (long)puVar8 - (long)puVar13;
      uVar9 = uVar6;
      if (uVar6 <= lVar16 + 1U) {
        uVar9 = lVar16 + 1;
      }
      if (0x7ffffffffffffffd < uVar6) {
        uVar9 = 0x7fffffffffffffff;
      }
      if (uVar9 == 0) {
        pvVar4 = (void *)0x0;
      }
      else {
        if ((long)uVar9 < 0) goto LAB_0018ddac;
        pvVar4 = operator_new(uVar9 << 1);
      }
      puVar8 = (ushort *)((long)pvVar4 + lVar16 * 2);
      pvVar7 = (void *)((long)pvVar4 + uVar9 * 2);
      puVar17 = puVar8 + 1;
      *puVar8 = uVar2;
      if ((long)puVar14 - (long)puVar13 == 0) goto LAB_0018dd54;
      uVar9 = ((long)puVar14 - (long)puVar13) - 2;
      puVar15 = puVar14;
      if ((0x1d < uVar9) &&
         (0x1f < (ulong)((long)puVar14 + (-((long)puVar14 - (long)puVar13) - (long)pvVar4)))) {
        puVar11 = puVar8 + -8;
        puVar12 = puVar14 + -8;
        uVar9 = (uVar9 >> 1) + 1;
        uVar10 = uVar9 & 0xfffffffffffffff0;
        puVar15 = puVar14 + -uVar10;
        uVar6 = uVar10;
        do {
          puVar14 = puVar12 + -4;
          uVar20 = *(undefined8 *)(puVar12 + -8);
          uVar19 = *(undefined8 *)(puVar12 + 4);
          uVar18 = *(undefined8 *)puVar12;
          uVar6 = uVar6 - 0x10;
          puVar12 = puVar12 + -0x10;
          *(undefined8 *)(puVar11 + -4) = *(undefined8 *)puVar14;
          *(undefined8 *)(puVar11 + -8) = uVar20;
          *(undefined8 *)(puVar11 + 4) = uVar19;
          *(undefined8 *)puVar11 = uVar18;
          puVar11 = puVar11 + -0x10;
        } while (uVar6 != 0);
        puVar8 = puVar8 + -uVar10;
        puVar14 = puVar13;
        if (uVar9 == uVar10) goto LAB_0018dd54;
      }
      do {
        puVar15 = puVar15 + -1;
        puVar8 = puVar8 + -1;
        *puVar8 = *puVar15;
      } while (puVar15 != puVar13);
    }
    else {
      if (puVar14 < puVar8) {
LAB_0018db20:
        puVar17 = puVar14 + 1;
        *puVar14 = uVar2;
        goto LAB_0018dd68;
      }
      puVar13 = *(ushort **)(param_1 + 0x70);
      lVar16 = (long)puVar14 - (long)puVar13 >> 1;
      if (lVar16 == -2 || lVar16 + 2 < 0 != SCARRY8(lVar16,2)) {
LAB_0018dd98:
        if (*(long *)(lVar1 + 0x28) != lVar5) goto LAB_0018ddc0;
        FUN_0018ddc4();
LAB_0018ddac:
        if (*(long *)(lVar1 + 0x28) == lVar5) {
          FUN_0015d614();
        }
        goto LAB_0018ddc0;
      }
      uVar6 = (long)puVar8 - (long)puVar13;
      uVar9 = uVar6;
      if (uVar6 <= lVar16 + 1U) {
        uVar9 = lVar16 + 1;
      }
      if (0x7ffffffffffffffd < uVar6) {
        uVar9 = 0x7fffffffffffffff;
      }
      if (uVar9 == 0) {
        pvVar4 = (void *)0x0;
      }
      else {
        if ((long)uVar9 < 0) goto LAB_0018ddac;
        pvVar4 = operator_new(uVar9 << 1);
      }
      puVar8 = (ushort *)((long)pvVar4 + lVar16 * 2);
      pvVar7 = (void *)((long)pvVar4 + uVar9 * 2);
      puVar17 = puVar8 + 1;
      *puVar8 = uVar2;
      if ((long)puVar14 - (long)puVar13 == 0) goto LAB_0018dd54;
      uVar9 = ((long)puVar14 - (long)puVar13) - 2;
      puVar15 = puVar14;
      if ((0x1d < uVar9) &&
         (0x1f < (ulong)((long)puVar14 + (-((long)puVar14 - (long)puVar13) - (long)pvVar4)))) {
        puVar11 = puVar8 + -8;
        puVar12 = puVar14 + -8;
        uVar9 = (uVar9 >> 1) + 1;
        uVar10 = uVar9 & 0xfffffffffffffff0;
        puVar15 = puVar14 + -uVar10;
        uVar6 = uVar10;
        do {
          puVar14 = puVar12 + -4;
          uVar20 = *(undefined8 *)(puVar12 + -8);
          uVar19 = *(undefined8 *)(puVar12 + 4);
          uVar18 = *(undefined8 *)puVar12;
          uVar6 = uVar6 - 0x10;
          puVar12 = puVar12 + -0x10;
          *(undefined8 *)(puVar11 + -4) = *(undefined8 *)puVar14;
          *(undefined8 *)(puVar11 + -8) = uVar20;
          *(undefined8 *)(puVar11 + 4) = uVar19;
          *(undefined8 *)puVar11 = uVar18;
          puVar11 = puVar11 + -0x10;
        } while (uVar6 != 0);
        puVar8 = puVar8 + -uVar10;
        puVar14 = puVar13;
        if (uVar9 == uVar10) goto LAB_0018dd54;
      }
      do {
        puVar15 = puVar15 + -1;
        puVar8 = puVar8 + -1;
        *puVar8 = *puVar15;
      } while (puVar15 != puVar13);
    }
LAB_0018dd48:
    puVar14 = *(ushort **)(param_1 + 0x70);
LAB_0018dd54:
    *(ushort **)(param_1 + 0x70) = puVar8;
    *(ushort **)(param_1 + 0x78) = puVar17;
    *(void **)(param_1 + 0x80) = pvVar7;
    if (puVar14 != (ushort *)0x0) {
      operator_delete(puVar14);
    }
  }
  else {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))();
    iVar3 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),param_3);
    puVar14 = *(ushort **)(param_1 + 0x78);
    uVar2 = uVar2 & 0xff | (ushort)(iVar3 << 8);
    if (*(ushort **)(param_1 + 0x80) <= puVar14) {
      puVar13 = *(ushort **)(param_1 + 0x70);
      lVar16 = (long)puVar14 - (long)puVar13 >> 1;
      if (lVar16 == -2 || lVar16 + 2 < 0 != SCARRY8(lVar16,2)) goto LAB_0018dd98;
      uVar6 = (long)*(ushort **)(param_1 + 0x80) - (long)puVar13;
      uVar9 = uVar6;
      if (uVar6 <= lVar16 + 1U) {
        uVar9 = lVar16 + 1;
      }
      if (0x7ffffffffffffffd < uVar6) {
        uVar9 = 0x7fffffffffffffff;
      }
      if (uVar9 == 0) {
        pvVar4 = (void *)0x0;
      }
      else {
        if ((long)uVar9 < 0) goto LAB_0018ddac;
        pvVar4 = operator_new(uVar9 << 1);
      }
      puVar8 = (ushort *)((long)pvVar4 + lVar16 * 2);
      pvVar7 = (void *)((long)pvVar4 + uVar9 * 2);
      puVar17 = puVar8 + 1;
      *puVar8 = uVar2;
      if ((long)puVar14 - (long)puVar13 != 0) {
        uVar9 = ((long)puVar14 - (long)puVar13) - 2;
        puVar15 = puVar14;
        if ((0x1d < uVar9) &&
           (0x1f < (ulong)((long)puVar14 + (-((long)puVar14 - (long)puVar13) - (long)pvVar4)))) {
          puVar11 = puVar8 + -8;
          puVar12 = puVar14 + -8;
          uVar9 = (uVar9 >> 1) + 1;
          uVar10 = uVar9 & 0xfffffffffffffff0;
          puVar15 = puVar14 + -uVar10;
          uVar6 = uVar10;
          do {
            puVar14 = puVar12 + -4;
            uVar20 = *(undefined8 *)(puVar12 + -8);
            uVar19 = *(undefined8 *)(puVar12 + 4);
            uVar18 = *(undefined8 *)puVar12;
            uVar6 = uVar6 - 0x10;
            puVar12 = puVar12 + -0x10;
            *(undefined8 *)(puVar11 + -4) = *(undefined8 *)puVar14;
            *(undefined8 *)(puVar11 + -8) = uVar20;
            *(undefined8 *)(puVar11 + 4) = uVar19;
            *(undefined8 *)puVar11 = uVar18;
            puVar11 = puVar11 + -0x10;
          } while (uVar6 != 0);
          puVar8 = puVar8 + -uVar10;
          puVar14 = puVar13;
          if (uVar9 == uVar10) goto LAB_0018dd54;
        }
        do {
          puVar15 = puVar15 + -1;
          puVar8 = puVar8 + -1;
          *puVar8 = *puVar15;
        } while (puVar15 != puVar13);
        goto LAB_0018dd48;
      }
      goto LAB_0018dd54;
    }
    puVar17 = puVar14 + 1;
    *puVar14 = uVar2;
  }
LAB_0018dd68:
  *(ushort **)(param_1 + 0x78) = puVar17;
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    return;
  }
LAB_0018ddc0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018ddc4  FUN_0018ddc4 =====

void FUN_0018ddc4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_0015d71c("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018ddfc  FUN_0018ddfc =====

void FUN_0018ddfc(undefined8 param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong local_70;
  ulong local_68;
  undefined1 *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  uVar11 = (long)param_4 - (long)param_3;
  local_58 = *(long *)(lVar1 + 0x28);
  if (0xffffffffffffffef < uVar11) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
      uVar5 = FUN_0015d7fc();
                    /* catch() { ... } // from try @ 0018df24 with catch @ 0018df80 */
      if ((local_70 & 1) != 0) {
        operator_delete(local_60);
      }
      if (*(long *)(lVar1 + 0x28) == local_58) {
        FUN_00157e74(uVar5);
      }
    }
    goto LAB_0018dfac;
  }
  if (uVar11 < 0x17) {
    puVar3 = (undefined1 *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)uVar11 << 1));
  }
  else {
    puVar3 = (undefined1 *)operator_new((uVar11 | 0xf) + 1);
    local_70 = (uVar11 | 0xf) + 2;
    local_68 = uVar11;
    local_60 = puVar3;
  }
  if (param_3 != param_4) {
    puVar4 = puVar3;
    if ((0x1f < uVar11) && (0x1f < (ulong)((long)puVar3 - (long)param_3))) {
      uVar6 = uVar11 & 0xffffffffffffffe0;
      puVar7 = (undefined8 *)(param_3 + 0x10);
      puVar8 = (undefined8 *)(puVar3 + 0x10);
      puVar3 = puVar3 + uVar6;
      uVar9 = uVar6;
      do {
        puVar2 = puVar7 + -1;
        uVar5 = puVar7[-2];
        uVar13 = puVar7[1];
        uVar12 = *puVar7;
        uVar9 = uVar9 - 0x20;
        puVar7 = puVar7 + 4;
        puVar8[-1] = *puVar2;
        puVar8[-2] = uVar5;
        puVar8[1] = uVar13;
        *puVar8 = uVar12;
        puVar8 = puVar8 + 4;
      } while (uVar9 != 0);
      if (uVar11 == uVar6) goto LAB_0018def4;
      param_3 = param_3 + uVar6;
      puVar4 = puVar3;
    }
    do {
      puVar10 = param_3 + 1;
      puVar3 = puVar4 + 1;
      *puVar4 = *param_3;
      puVar4 = puVar3;
      param_3 = puVar10;
    } while (puVar10 != param_4);
  }
LAB_0018def4:
  *puVar3 = 0;
  uVar11 = local_70 >> 1 & 0x7f;
  puVar3 = (undefined1 *)((ulong)&local_70 | 1);
  if ((local_70 & 1) != 0) {
    uVar11 = local_68;
    puVar3 = local_60;
  }
                    /* try { // try from 0018df24 to 0018df2f has its CatchHandler @ 0018df80 */
  (**(code **)(**(long **)(param_2 + 0x10) + 0x20))
            (param_1,*(long **)(param_2 + 0x10),puVar3,puVar3 + uVar11);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_0018dfac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018dfb0  FUN_0018dfb0 =====

undefined8 * FUN_0018dfb0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  void *pvVar11;
  undefined8 uVar12;
  void *pvVar13;
  void *pvVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  lVar6 = param_1[1] - *param_1 >> 4;
  uVar1 = lVar6 * -0x5555555555555555 + 1;
  if (uVar1 < 0x555555555555556) {
    lVar7 = param_1[2] - *param_1 >> 4;
    uVar9 = lVar7 * 0x5555555555555556;
    if (uVar9 < uVar1 || uVar9 - uVar1 == 0) {
      uVar9 = uVar1;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar7 * -0x5555555555555555)) {
      uVar9 = 0x555555555555555;
    }
    if (uVar9 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (0x555555555555555 < uVar9) goto LAB_0018e184;
      pvVar4 = operator_new(uVar9 * 0x30);
    }
    uVar10 = param_2[2];
    uVar16 = param_2[4];
    uVar15 = param_2[3];
    puVar8 = (undefined8 *)((long)pvVar4 + lVar6 * 0x10);
    param_2[2] = 0;
    param_2[3] = 0;
    uVar18 = param_2[1];
    uVar17 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    uVar12 = param_2[5];
    param_2[4] = 0;
    param_2[5] = 0;
    pvVar4 = (void *)((long)pvVar4 + uVar9 * 0x30);
    pvVar14 = (void *)*param_1;
    pvVar13 = (void *)param_1[1];
    puVar2 = puVar8 + 6;
    puVar8[1] = uVar18;
    *puVar8 = uVar17;
    puVar8[2] = uVar10;
    puVar8[5] = uVar12;
    puVar8[4] = uVar16;
    puVar8[3] = uVar15;
    if (pvVar13 == pvVar14) {
      *param_1 = (long)puVar8;
      param_1[1] = (long)puVar2;
      param_1[2] = (long)pvVar4;
    }
    else {
      do {
        uVar12 = *(undefined8 *)((long)pvVar13 + -0x28);
        uVar10 = *(undefined8 *)((long)pvVar13 + -0x30);
        puVar8[-4] = *(undefined8 *)((long)pvVar13 + -0x20);
        puVar8[-5] = uVar12;
        puVar8[-6] = uVar10;
        uVar12 = *(undefined8 *)((long)pvVar13 + -0x10);
        uVar10 = *(undefined8 *)((long)pvVar13 + -0x18);
        *(undefined8 *)((long)pvVar13 + -0x28) = 0;
        *(undefined8 *)((long)pvVar13 + -0x20) = 0;
        *(undefined8 *)((long)pvVar13 + -0x30) = 0;
        puVar8[-1] = *(undefined8 *)((long)pvVar13 + -8);
        pvVar11 = (void *)((long)pvVar13 + -0x30);
        puVar8[-2] = uVar12;
        puVar8[-3] = uVar10;
        puVar8 = puVar8 + -6;
        *(undefined8 *)((long)pvVar13 + -0x10) = 0;
        *(undefined8 *)((long)pvVar13 + -8) = 0;
        *(undefined8 *)((long)pvVar13 + -0x18) = 0;
        pvVar13 = pvVar11;
      } while (pvVar11 != pvVar14);
      pvVar13 = (void *)*param_1;
      pvVar14 = (void *)param_1[1];
      *param_1 = (long)puVar8;
      param_1[1] = (long)puVar2;
      param_1[2] = (long)pvVar4;
      for (; pvVar14 != pvVar13; pvVar14 = (void *)((long)pvVar14 + -0x30)) {
        if ((*(byte *)((long)pvVar14 + -0x18) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar14 + -8));
        }
        if ((*(byte *)((long)pvVar14 + -0x30) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar14 + -0x20));
        }
      }
    }
    if (pvVar13 != (void *)0x0) {
      operator_delete(pvVar13);
    }
    if (*(long *)(lVar3 + 0x28) == lVar5) {
      return puVar2;
    }
  }
  else {
    if (*(long *)(lVar3 + 0x28) != lVar5) goto LAB_0018e198;
    FUN_0018e29c();
LAB_0018e184:
    if (*(long *)(lVar3 + 0x28) == lVar5) {
      FUN_0015d614();
    }
  }
LAB_0018e198:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018e19c  FUN_0018e19c =====

void FUN_0018e19c(byte *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((param_1[0x18] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  if ((*param_1 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(*(void **)(param_1 + 0x10));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018e21c  FUN_0018e21c =====

void FUN_0018e21c(void)

{
  long lVar1;
  regex_error *prVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  prVar2 = (regex_error *)__cxa_allocate_exception(0x18);
                    /* try { // try from 0018e244 to 0018e24b has its CatchHandler @ 0018e274 */
  std::__ndk1::regex_error::regex_error(prVar2,9);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* WARNING: Subroutine does not return */
    __cxa_throw(prVar2,PTR_typeinfo_001ba1a8,PTR__regex_error_001ba1a0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018e29c  FUN_0018e29c =====

void FUN_0018e29c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_0015d71c("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018e2d4  FUN_0018e2d4 =====

void FUN_0018e2d4(void)

{
  long lVar1;
  regex_error *prVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  prVar2 = (regex_error *)__cxa_allocate_exception(0x18);
                    /* try { // try from 0018e2fc to 0018e303 has its CatchHandler @ 0018e32c */
  std::__ndk1::regex_error::regex_error(prVar2,3);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* WARNING: Subroutine does not return */
    __cxa_throw(prVar2,PTR_typeinfo_001ba1a8,PTR__regex_error_001ba1a0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018e354  FUN_0018e354 =====

byte * FUN_0018e354(long param_1,byte *param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  if (param_2 != param_3) {
    bVar1 = *param_2;
    uVar4 = (uint)bVar1;
    if (bVar1 < 0x72) {
      if (uVar4 == 0x65 || bVar1 < 0x65) {
        if (uVar4 != 0x30) {
          if (uVar4 == 99) {
            if (((param_2 + 1 != param_3) && (bVar1 = param_2[1], 0x40 < bVar1)) &&
               ((bVar1 < 0x5b || ((byte)(bVar1 + 0x9f) < 0x1a)))) {
              if (param_4 == (byte *)0x0) {
                FUN_0018b6a0(param_1,bVar1 & 0x1f);
                param_2 = param_2 + 2;
              }
              else {
                if ((*param_4 & 1) == 0) {
                  pbVar3 = param_4 + 1;
                  *param_4 = 2;
                }
                else {
                  pbVar3 = *(byte **)(param_4 + 0x10);
                  param_4[8] = 1;
                  param_4[9] = 0;
                  param_4[10] = 0;
                  param_4[0xb] = 0;
                  param_4[0xc] = 0;
                  param_4[0xd] = 0;
                  param_4[0xe] = 0;
                  param_4[0xf] = 0;
                }
                *pbVar3 = bVar1 & 0x1f;
                param_2 = param_2 + 2;
                pbVar3[1] = 0;
              }
              goto LAB_0018e78c;
            }
          }
          else if (bVar1 != 0x5f) goto LAB_0018e740;
          goto LAB_0018e7c8;
        }
        if (param_4 == (byte *)0x0) {
          iVar6 = 0;
          goto LAB_0018e780;
        }
        if ((*param_4 & 1) == 0) {
          *param_4 = 2;
          param_4[1] = 0;
          param_4[2] = 0;
        }
        else {
          param_4[8] = 1;
          param_4[9] = 0;
          param_4[10] = 0;
          param_4[0xb] = 0;
          param_4[0xc] = 0;
          param_4[0xd] = 0;
          param_4[0xe] = 0;
          param_4[0xf] = 0;
          **(undefined2 **)(param_4 + 0x10) = 0;
        }
      }
      else if (uVar4 == 0x66) {
        if (param_4 == (byte *)0x0) {
          iVar6 = 0xc;
          goto LAB_0018e780;
        }
        if ((*param_4 & 1) == 0) {
          pbVar3 = param_4 + 1;
          *param_4 = 2;
        }
        else {
          pbVar3 = *(byte **)(param_4 + 0x10);
          param_4[8] = 1;
          param_4[9] = 0;
          param_4[10] = 0;
          param_4[0xb] = 0;
          param_4[0xc] = 0;
          param_4[0xd] = 0;
          param_4[0xe] = 0;
          param_4[0xf] = 0;
        }
        pbVar3[0] = 0xc;
        pbVar3[1] = 0;
      }
      else {
        if (uVar4 != 0x6e) goto LAB_0018e740;
        if (param_4 == (byte *)0x0) {
          iVar6 = 10;
          goto LAB_0018e780;
        }
        if ((*param_4 & 1) == 0) {
          pbVar3 = param_4 + 1;
          *param_4 = 2;
        }
        else {
          pbVar3 = *(byte **)(param_4 + 0x10);
          param_4[8] = 1;
          param_4[9] = 0;
          param_4[10] = 0;
          param_4[0xb] = 0;
          param_4[0xc] = 0;
          param_4[0xd] = 0;
          param_4[0xe] = 0;
          param_4[0xf] = 0;
        }
        pbVar3[0] = 10;
        pbVar3[1] = 0;
      }
    }
    else {
      if (0x74 < bVar1) {
        if (bVar1 == 0x75) {
          if (((param_2 + 1 == param_3) ||
              ((((bVar1 = param_2[1], (bVar1 & 0xf8) != 0x30 && ((bVar1 & 0xfe) != 0x38)) &&
                (5 < (bVar1 | 0x20) - 0x61)) || (param_2 = param_2 + 2, param_2 == param_3)))) ||
             (((bVar1 = *param_2, (bVar1 & 0xf8) != 0x30 && ((bVar1 & 0xfe) != 0x38)) &&
              (5 < (bVar1 | 0x20) - 0x61)))) goto LAB_0018e7c8;
        }
        else {
          if (uVar4 == 0x76) {
            if (param_4 == (byte *)0x0) {
              iVar6 = 0xb;
              goto LAB_0018e780;
            }
            if ((*param_4 & 1) == 0) {
              pbVar3 = param_4 + 1;
              *param_4 = 2;
            }
            else {
              pbVar3 = *(byte **)(param_4 + 0x10);
              param_4[8] = 1;
              param_4[9] = 0;
              param_4[10] = 0;
              param_4[0xb] = 0;
              param_4[0xc] = 0;
              param_4[0xd] = 0;
              param_4[0xe] = 0;
              param_4[0xf] = 0;
            }
            pbVar3[0] = 0xb;
            pbVar3[1] = 0;
            goto LAB_0018e788;
          }
          if (uVar4 != 0x78) goto LAB_0018e740;
        }
        if (param_2 + 1 != param_3) {
          bVar1 = param_2[1];
          uVar4 = (uint)bVar1;
          iVar6 = 0xd0;
          if (((bVar1 & 0xf8) != 0x30) && ((bVar1 & 0xfe) != 0x38)) {
            uVar4 = uVar4 | 0x20;
            if (5 < (uVar4 - 0x61 & 0xff)) goto LAB_0018e7c8;
            iVar6 = 0xa9;
          }
          if (param_2 + 2 != param_3) {
            bVar1 = param_2[2];
            uVar7 = (uint)bVar1;
            iVar8 = 0xd0;
            if (((bVar1 & 0xf8) != 0x30) && ((bVar1 & 0xfe) != 0x38)) {
              uVar7 = uVar7 | 0x20;
              if (5 < (uVar7 - 0x61 & 0xff)) goto LAB_0018e7c8;
              iVar8 = 0xa9;
            }
            iVar6 = iVar8 + uVar7 + (iVar6 + uVar4) * 0x10;
            if (param_4 == (byte *)0x0) {
              FUN_0018b6a0(param_1,iVar6);
              param_2 = param_2 + 3;
            }
            else {
              if ((*param_4 & 1) == 0) {
                pbVar3 = param_4 + 1;
                *param_4 = 2;
              }
              else {
                pbVar3 = *(byte **)(param_4 + 0x10);
                param_4[8] = 1;
                param_4[9] = 0;
                param_4[10] = 0;
                param_4[0xb] = 0;
                param_4[0xc] = 0;
                param_4[0xd] = 0;
                param_4[0xe] = 0;
                param_4[0xf] = 0;
              }
              *pbVar3 = (byte)iVar6;
              param_2 = param_2 + 3;
              pbVar3[1] = 0;
            }
            goto LAB_0018e78c;
          }
        }
LAB_0018e7c8:
        if (*(long *)(lVar2 + 0x28) == lVar5) {
          FUN_0018e2d4();
        }
        goto LAB_0018e7dc;
      }
      if (uVar4 == 0x72) {
        if (param_4 == (byte *)0x0) {
          iVar6 = 0xd;
LAB_0018e780:
          FUN_0018b6a0(param_1,iVar6);
        }
        else {
          if ((*param_4 & 1) == 0) {
            pbVar3 = param_4 + 1;
            *param_4 = 2;
          }
          else {
            pbVar3 = *(byte **)(param_4 + 0x10);
            param_4[8] = 1;
            param_4[9] = 0;
            param_4[10] = 0;
            param_4[0xb] = 0;
            param_4[0xc] = 0;
            param_4[0xd] = 0;
            param_4[0xe] = 0;
            param_4[0xf] = 0;
          }
          pbVar3[0] = 0xd;
          pbVar3[1] = 0;
        }
      }
      else if (bVar1 == 0x74) {
        if (param_4 == (byte *)0x0) {
          iVar6 = 9;
          goto LAB_0018e780;
        }
        if ((*param_4 & 1) == 0) {
          pbVar3 = param_4 + 1;
          *param_4 = 2;
        }
        else {
          pbVar3 = *(byte **)(param_4 + 0x10);
          param_4[8] = 1;
          param_4[9] = 0;
          param_4[10] = 0;
          param_4[0xb] = 0;
          param_4[0xc] = 0;
          param_4[0xd] = 0;
          param_4[0xe] = 0;
          param_4[0xf] = 0;
        }
        pbVar3[0] = 9;
        pbVar3[1] = 0;
      }
      else {
LAB_0018e740:
        iVar6 = (int)(char)bVar1;
        if ((-1 < iVar6) &&
           ((*(ulong *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + (ulong)uVar4 * 8) & 0x60) != 0))
        goto LAB_0018e7c8;
        if (param_4 == (byte *)0x0) goto LAB_0018e780;
        if ((*param_4 & 1) == 0) {
          pbVar3 = param_4 + 1;
          *param_4 = 2;
        }
        else {
          pbVar3 = *(byte **)(param_4 + 0x10);
          param_4[8] = 1;
          param_4[9] = 0;
          param_4[10] = 0;
          param_4[0xb] = 0;
          param_4[0xc] = 0;
          param_4[0xd] = 0;
          param_4[0xe] = 0;
          param_4[0xf] = 0;
        }
        *pbVar3 = bVar1;
        pbVar3[1] = 0;
      }
    }
LAB_0018e788:
    param_2 = param_2 + 1;
  }
LAB_0018e78c:
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    return param_2;
  }
LAB_0018e7dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018e7e0  FUN_0018e7e0 =====

void FUN_0018e7e0(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_0015d71c("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018e818  FUN_0018e818 =====

void FUN_0018e818(ulong *param_1,long param_2,char *param_3,char *param_4)

{
  byte bVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *unaff_x19;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  ulong local_70;
  ulong uStack_68;
  char *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  uVar10 = (long)param_4 - (long)param_3;
  local_58 = *(long *)(lVar2 + 0x28);
  if (0xffffffffffffffef < uVar10) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
      uVar5 = FUN_0015d7fc();
                    /* catch() { ... } // from try @ 0018ea48 with catch @ 0018eac0 */
                    /* catch() { ... } // from try @ 0018e948 with catch @ 0018eac8 */
      if ((*unaff_x19 & 1) != 0) {
        operator_delete(*(void **)(unaff_x19 + 0x10));
      }
      if ((local_70 & 1) != 0) {
        operator_delete(local_60);
      }
      if (*(long *)(lVar2 + 0x28) == local_58) {
        FUN_00157e74(uVar5);
      }
    }
    goto LAB_0018eb04;
  }
  if (uVar10 < 0x17) {
    pcVar4 = (char *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)uVar10 << 1));
  }
  else {
    pcVar4 = (char *)operator_new((uVar10 | 0xf) + 1);
    local_70 = (uVar10 | 0xf) + 2;
    uStack_68 = uVar10;
    local_60 = pcVar4;
  }
  if (param_3 != param_4) {
    pcVar8 = pcVar4;
    if ((0x1f < uVar10) && (0x1f < (ulong)((long)pcVar4 - (long)param_3))) {
      uVar6 = uVar10 & 0xffffffffffffffe0;
      pcVar8 = param_3 + 0x10;
      pcVar9 = pcVar4 + 0x10;
      pcVar4 = pcVar4 + uVar6;
      uVar7 = uVar6;
      do {
        pcVar3 = pcVar8 + -8;
        uVar5 = *(undefined8 *)(pcVar8 + -0x10);
        uVar12 = *(undefined8 *)(pcVar8 + 8);
        uVar11 = *(undefined8 *)pcVar8;
        uVar7 = uVar7 - 0x20;
        pcVar8 = pcVar8 + 0x20;
        *(undefined8 *)(pcVar9 + -8) = *(undefined8 *)pcVar3;
        *(undefined8 *)(pcVar9 + -0x10) = uVar5;
        *(undefined8 *)(pcVar9 + 8) = uVar12;
        *(undefined8 *)pcVar9 = uVar11;
        pcVar9 = pcVar9 + 0x20;
      } while (uVar7 != 0);
      if (uVar10 == uVar6) goto LAB_0018e910;
      param_3 = param_3 + uVar6;
      pcVar8 = pcVar4;
    }
    do {
      pcVar9 = param_3 + 1;
      pcVar4 = pcVar8 + 1;
      *pcVar8 = *param_3;
      pcVar8 = pcVar4;
      param_3 = pcVar9;
    } while (pcVar9 != param_4);
  }
LAB_0018e910:
  *pcVar4 = '\0';
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar10 = local_70 >> 1 & 0x7f;
  if ((local_70 & 1) != 0) {
    uVar10 = uStack_68;
  }
  if (uVar10 != 0) {
    pcVar8 = (char *)((ulong)&local_70 | 1);
    pcVar4 = pcVar8;
    if ((local_70 & 1) != 0) {
      pcVar4 = local_60;
    }
                    /* try { // try from 0018e948 to 0018e94f has its CatchHandler @ 0018eac8 */
    std::__ndk1::__get_collation_name(pcVar4);
    param_1[1] = uStack_80;
    *param_1 = local_88;
    param_1[2] = local_78;
    uVar10 = (ulong)(byte)((byte)*param_1 >> 1);
    if (((byte)*param_1 & 1) != 0) {
      uVar10 = param_1[1];
    }
    if (uVar10 == 0) {
      uVar10 = local_70 >> 1 & 0x7f;
      if ((local_70 & 1) != 0) {
        uVar10 = uStack_68;
      }
      if (uVar10 < 3) {
        pcVar4 = pcVar8;
        if ((local_70 & 1) != 0) {
          pcVar4 = local_60;
        }
                    /* try { // try from 0018e9ac to 0018e9b7 has its CatchHandler @ 0018eac4 */
        (**(code **)(**(long **)(param_2 + 0x10) + 0x20))
                  (&local_88,*(long **)(param_2 + 0x10),pcVar4,pcVar4 + uVar10);
        if ((*param_1 & 1) != 0) {
          operator_delete((void *)param_1[2]);
        }
        param_1[1] = uStack_80;
        *param_1 = local_88;
        bVar1 = (byte)*param_1;
        param_1[2] = local_78;
        uVar10 = (ulong)(bVar1 >> 1);
        if ((bVar1 & 1) != 0) {
          uVar10 = param_1[1];
        }
        if ((uVar10 == 0xc) || (uVar10 == 1)) {
          if (&local_70 != param_1) {
            if ((bVar1 & 1) == 0) {
              if ((local_70 & 1) == 0) {
                param_1[1] = uStack_68;
                *param_1 = local_70;
                param_1[2] = (ulong)local_60;
              }
              else {
                FUN_001632d4(param_1,local_60,uStack_68);
              }
            }
            else {
              uVar10 = local_70 >> 1 & 0x7f;
              if ((local_70 & 1) != 0) {
                uVar10 = uStack_68;
                pcVar8 = local_60;
              }
                    /* try { // try from 0018ea48 to 0018ea6f has its CatchHandler @ 0018eac0 */
              FUN_001633b4(param_1,pcVar8,uVar10);
            }
          }
        }
        else if ((bVar1 & 1) == 0) {
          *(undefined2 *)param_1 = 0;
        }
        else {
          *(undefined1 *)param_1[2] = 0;
          param_1[1] = 0;
        }
      }
    }
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_0018eb04:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018eb08  FUN_0018eb08 =====

void FUN_0018eb08(void)

{
  long lVar1;
  regex_error *prVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  prVar2 = (regex_error *)__cxa_allocate_exception(0x18);
                    /* try { // try from 0018eb30 to 0018eb37 has its CatchHandler @ 0018eb60 */
  std::__ndk1::regex_error::regex_error(prVar2,1);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* WARNING: Subroutine does not return */
    __cxa_throw(prVar2,PTR_typeinfo_001ba1a8,PTR__regex_error_001ba1a0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018eb88  FUN_0018eb88 =====

void FUN_0018eb88(void)

{
  long lVar1;
  regex_error *prVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  prVar2 = (regex_error *)__cxa_allocate_exception(0x18);
                    /* try { // try from 0018ebb0 to 0018ebb7 has its CatchHandler @ 0018ebe0 */
  std::__ndk1::regex_error::regex_error(prVar2,2);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* WARNING: Subroutine does not return */
    __cxa_throw(prVar2,PTR_typeinfo_001ba1a8,PTR__regex_error_001ba1a0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018ec08  FUN_0018ec08 =====

void FUN_0018ec08(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  pvVar4 = (void *)*param_1;
  if (pvVar4 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    pvVar5 = (void *)param_1[1];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        if ((*(byte *)((long)pvVar5 + -0x18) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar5 + -8));
        }
        if ((*(byte *)((long)pvVar5 + -0x30) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar5 + -0x20));
        }
        pvVar5 = (void *)((long)pvVar5 + -0x30);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)*param_1;
    }
    param_1[1] = pvVar4;
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      operator_delete(pvVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018eccc  FUN_0018eccc =====

void FUN_0018eccc(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  void *pvVar8;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  pbVar6 = (byte *)param_1[0x11];
  *param_1 = &PTR_FUN_001b86d0;
  if (pbVar6 != (byte *)0x0) {
    pbVar5 = (byte *)param_1[0x12];
    pbVar7 = pbVar6;
    if (pbVar5 != pbVar6) {
      do {
        pbVar7 = pbVar5 + -0x18;
        if ((*pbVar7 & 1) != 0) {
          operator_delete(*(void **)(pbVar5 + -8));
        }
        pbVar5 = pbVar7;
      } while (pbVar7 != pbVar6);
      pbVar7 = (byte *)param_1[0x11];
    }
    param_1[0x12] = pbVar6;
    operator_delete(pbVar7);
  }
  pvVar2 = (void *)param_1[0xe];
  if (pvVar2 != (void *)0x0) {
    param_1[0xf] = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0xb];
  if (pvVar2 != (void *)0x0) {
    pvVar8 = (void *)param_1[0xc];
    pvVar3 = pvVar2;
    if (pvVar8 != pvVar2) {
      do {
        if ((*(byte *)((long)pvVar8 + -0x18) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar8 + -8));
        }
        if ((*(byte *)((long)pvVar8 + -0x30) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar8 + -0x20));
        }
        pvVar8 = (void *)((long)pvVar8 + -0x30);
      } while (pvVar8 != pvVar2);
      pvVar3 = (void *)param_1[0xb];
    }
    param_1[0xc] = pvVar2;
    operator_delete(pvVar3);
  }
  pvVar2 = (void *)param_1[8];
  if (pvVar2 != (void *)0x0) {
    param_1[9] = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[5];
  if (pvVar2 != (void *)0x0) {
    param_1[6] = pvVar2;
    operator_delete(pvVar2);
  }
  std::__ndk1::locale::~locale((locale *)(param_1 + 2));
  *param_1 = &PTR_FUN_001b8388;
  if ((long *)param_1[1] == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar4) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x0018ee14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[1] + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018ee40  FUN_0018ee40 =====

void FUN_0018ee40(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_0018eccc();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018ee8c  FUN_0018ee8c =====

/* WARNING: Removing unreachable block (ram,0x0018f884) */
/* WARNING: Removing unreachable block (ram,0x0018f838) */
/* WARNING: Removing unreachable block (ram,0x0018f87c) */
/* WARNING: Removing unreachable block (ram,0x0018f880) */
/* WARNING: Type propagation algorithm not settling */

void FUN_0018ee8c(long param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  void *pvVar3;
  size_t sVar4;
  undefined2 *puVar5;
  void *pvVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  long lVar10;
  byte bVar11;
  bool bVar12;
  bool bVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  int iVar16;
  ulong uVar17;
  void *pvVar18;
  long lVar19;
  byte *pbVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  byte *pbVar26;
  uint uVar27;
  char *pcVar28;
  ulong uVar29;
  undefined8 *puVar30;
  ulong uVar31;
  ulong uVar32;
  long lVar33;
  ulong local_c0;
  ulong uStack_b8;
  char *local_b0;
  undefined2 local_9c;
  byte local_98;
  char cStack_97;
  undefined1 uStack_96;
  undefined5 uStack_95;
  ulong uStack_90;
  char *local_88;
  byte local_80;
  char cStack_7f;
  char cStack_7e;
  undefined1 uStack_7d;
  undefined4 uStack_7c;
  ulong uStack_78;
  char *local_70;
  long local_68;
  
  lVar10 = tpidr_el0;
  local_68 = *(long *)(lVar10 + 0x28);
  puVar5 = *(undefined2 **)(param_2 + 4);
  if (puVar5 == *(undefined2 **)(param_2 + 6)) {
    lVar33 = 0;
    bVar12 = *(char *)(param_1 + 0xa4) != '\0';
    goto LAB_0018f8cc;
  }
  if ((*(char *)(param_1 + 0xa7) == '\0') ||
     ((undefined2 *)((long)puVar5 + 1) == *(undefined2 **)(param_2 + 6))) {
LAB_0018f100:
    bVar12 = false;
    lVar33 = 1;
  }
  else {
    uVar15 = *(undefined1 *)((long)puVar5 + 1);
    local_9c = *puVar5;
    if (*(char *)(param_1 + 0xa5) != '\0') {
      uVar14 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))();
      local_9c = CONCAT11(local_9c._1_1_,uVar14);
      uVar15 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),uVar15);
      local_9c = CONCAT11(uVar15,(byte)local_9c);
    }
    uStack_7d = 0;
    local_80 = 4;
    pcVar28 = (char *)((ulong)&local_80 | 1);
    cStack_7f = (char)local_9c;
    cStack_7e = (char)((ushort)local_9c >> 8);
    uStack_b8 = 0;
    local_b0 = (char *)0x0;
    local_c0 = 0;
                    /* try { // try from 0018ef4c to 0018ef57 has its CatchHandler @ 0018f9f8 */
    std::__ndk1::__get_collation_name(pcVar28);
    bVar7 = local_98;
    local_c0 = CONCAT53(uStack_95,CONCAT12(uStack_96,CONCAT11(cStack_97,local_98)));
    uStack_b8 = uStack_90;
    local_b0 = local_88;
    uVar25 = (ulong)(local_98 >> 1);
    if ((local_98 & 1) != 0) {
      uVar25 = uStack_90;
    }
    if (uVar25 == 0) {
      uVar25 = (ulong)(local_80 >> 1);
      if ((local_80 & 1) != 0) {
        uVar25 = uStack_78;
      }
      if (uVar25 < 3) {
        pcVar2 = pcVar28;
        if ((local_80 & 1) != 0) {
          pcVar2 = local_70;
        }
                    /* try { // try from 0018efb4 to 0018efbf has its CatchHandler @ 0018f9d4 */
        (**(code **)(**(long **)(param_1 + 0x20) + 0x20))
                  (&local_98,*(long **)(param_1 + 0x20),pcVar2,pcVar2 + uVar25);
        if ((bVar7 & 1) != 0) {
          operator_delete(local_b0);
        }
        local_c0 = CONCAT53(uStack_95,CONCAT12(uStack_96,CONCAT11(cStack_97,local_98)));
        uStack_b8 = uStack_90;
        local_b0 = local_88;
        uVar25 = (ulong)(local_98 >> 1);
        if ((local_98 & 1) != 0) {
          uVar25 = uStack_90;
        }
        if ((uVar25 == 0xc) || (uVar25 == 1)) {
          if ((local_98 & 1) == 0) {
            if ((local_80 & 1) == 0) {
              local_c0 = CONCAT44(uStack_7c,
                                  CONCAT13(uStack_7d,
                                           CONCAT12(cStack_7e,CONCAT11(cStack_7f,local_80))));
              uStack_b8 = uStack_78;
              local_b0 = local_70;
            }
            else {
              FUN_001632d4(&local_c0,local_70,uStack_78);
            }
          }
          else {
            uVar25 = (ulong)(local_80 >> 1);
            if ((local_80 & 1) != 0) {
              uVar25 = uStack_78;
              pcVar28 = local_70;
            }
                    /* try { // try from 0018f048 to 0018f06b has its CatchHandler @ 0018f9c8 */
            FUN_001633b4(&local_c0,pcVar28,uVar25);
          }
        }
        else if ((local_98 & 1) == 0) {
          local_c0 = local_c0 & 0xffffffffffff0000;
        }
        else {
          *local_88 = '\0';
          uStack_b8 = 0;
        }
      }
    }
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    uVar25 = local_c0 >> 1 & 0x7f;
    if ((local_c0 & 1) != 0) {
      uVar25 = uStack_b8;
    }
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
    if (uVar25 == 0) goto LAB_0018f100;
    lVar33 = *(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x70);
    if (lVar33 != 0) {
      uVar25 = lVar33 >> 1;
      pcVar28 = (char *)(*(long *)(param_1 + 0x70) + 1);
      if (uVar25 < 2) {
        uVar25 = 1;
      }
      do {
        if (((byte)local_9c == pcVar28[-1]) && (local_9c._1_1_ == *pcVar28)) goto LAB_0018f8c4;
        uVar25 = uVar25 - 1;
        pcVar28 = pcVar28 + 2;
      } while (uVar25 != 0);
    }
    if ((*(char *)(param_1 + 0xa6) == '\0') ||
       (*(long *)(param_1 + 0x58) == *(long *)(param_1 + 0x60))) {
LAB_0018f69c:
      if (*(long *)(param_1 + 0x88) == *(long *)(param_1 + 0x90)) {
        bVar12 = false;
      }
      else {
        FUN_0018fa28(&local_80,param_1 + 0x10,&local_9c,(ulong)&local_9c | 2);
        pcVar28 = local_70;
        uVar25 = uStack_78;
        bVar7 = local_80;
        lVar33 = *(long *)(param_1 + 0x88);
        lVar19 = *(long *)(param_1 + 0x90) - lVar33;
        if (lVar19 == 0) {
          if ((local_80 & 1) != 0) {
            operator_delete(local_70);
          }
LAB_0018f7f4:
          bVar12 = false;
        }
        else {
          uVar17 = 0;
          bVar13 = true;
          uVar29 = (lVar19 >> 3) * -0x5555555555555555;
          bVar11 = local_80 >> 1;
          uVar31 = (ulong)bVar11;
          if ((local_80 & 1) != 0) {
            uVar31 = uStack_78;
          }
          uVar32 = uVar29;
          if (uVar29 < 2) {
            uVar32 = 1;
          }
          do {
            while( true ) {
              pbVar20 = (byte *)(lVar33 + uVar17 * 0x18);
              bVar8 = *pbVar20;
              uVar24 = (ulong)(bVar8 >> 1);
              if ((bVar8 & 1) != 0) {
                uVar24 = *(ulong *)(pbVar20 + 8);
              }
              if (uVar31 == uVar24) break;
LAB_0018f720:
              uVar17 = uVar17 + 1;
              bVar13 = uVar17 < uVar29;
              if (uVar17 == uVar32) {
                if ((bVar7 & 1) == 0) {
                  if (uVar29 <= uVar17) goto LAB_0018f7f4;
                  goto LAB_0018f960;
                }
                bVar12 = false;
                iVar16 = 0;
LAB_0018f9ac:
                operator_delete(pcVar28);
                if (bVar13) goto LAB_0018f68c;
                goto LAB_0018f808;
              }
            }
            pbVar26 = *(byte **)(pbVar20 + 0x10);
            if ((bVar8 & 1) == 0) {
              pbVar26 = pbVar20 + 1;
            }
            if ((bVar7 & 1) == 0) {
              pbVar20 = (byte *)((ulong)&local_80 | 1);
              uVar24 = (ulong)bVar11;
              if (1 < bVar7) {
                while (*pbVar20 == *pbVar26) {
                  uVar24 = uVar24 - 1;
                  pbVar26 = pbVar26 + 1;
                  pbVar20 = pbVar20 + 1;
                  if (uVar24 == 0) goto LAB_0018f7d8;
                }
                goto LAB_0018f720;
              }
LAB_0018f7d8:
              if (bVar13) goto LAB_0018f8c4;
              bVar12 = true;
              goto LAB_0018f808;
            }
            iVar16 = memcmp(pcVar28,pbVar26,uVar25);
            if (iVar16 == 0) {
              iVar16 = 5;
              bVar12 = true;
              goto LAB_0018f9ac;
            }
            uVar17 = uVar17 + 1;
            bVar13 = uVar17 < uVar29;
          } while (uVar17 != uVar32);
          operator_delete(pcVar28);
          if (uVar17 < uVar29) {
LAB_0018f960:
            bVar12 = false;
            lVar33 = 2;
            goto LAB_0018f108;
          }
          bVar12 = false;
        }
      }
LAB_0018f808:
      uVar9 = *(ushort *)(param_1 + 0xa0);
      lVar33 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
      uVar25 = *(ulong *)(lVar33 + (ulong)(byte)local_9c * 8);
      if (((uVar25 & uVar9) == 0) ||
         (((*(ulong *)(lVar33 + (ulong)local_9c._1_1_ * 8) & (ulong)uVar9) == 0 &&
          ((-1 < (short)uVar9 || (local_9c._1_1_ != 0x5f)))))) {
        uVar9 = *(ushort *)(param_1 + 0xa2);
        if (((uVar25 & uVar9) != 0) ||
           ((((int)(short)uVar9 &
              (uint)*(undefined8 *)
                     (*(long *)(*(long *)(param_1 + 0x18) + 0x10) + (ulong)local_9c._1_1_ * 8) &
             0xffff) != 0 ||
            ((bVar13 = true, ((uint)(int)(short)uVar9 >> 0xf & 1) != 0 && (local_9c._1_1_ == 0x5f)))
            ))) {
          bVar13 = bVar12;
        }
      }
      else {
LAB_0018f8c4:
        bVar13 = true;
      }
      bVar12 = bVar13;
      lVar33 = 2;
      goto LAB_0018f8cc;
    }
    local_80 = 4;
    uStack_7d = 0;
                    /* try { // try from 0018f364 to 0018f373 has its CatchHandler @ 0018f9d0 */
    cStack_7f = (byte)local_9c;
    cStack_7e = local_9c._1_1_;
    (**(code **)(**(long **)(param_1 + 0x20) + 0x20))
              (&local_98,*(long **)(param_1 + 0x20),(ulong)&local_80 | 1,(ulong)&local_80 | 3);
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    bVar7 = local_98;
    lVar33 = *(long *)(param_1 + 0x60) - *(long *)(param_1 + 0x58);
    if (lVar33 == 0) {
      bVar12 = false;
      iVar16 = 0;
    }
    else {
      uVar31 = (lVar33 >> 4) * -0x5555555555555555;
      uVar25 = 0;
      puVar30 = (undefined8 *)(*(long *)(param_1 + 0x58) + 0x28);
      bVar12 = true;
      uVar17 = (ulong)(local_98 >> 1);
      pcVar28 = (char *)((ulong)&local_98 | 1);
      if ((local_98 & 1) != 0) {
        uVar17 = uStack_90;
        pcVar28 = local_88;
      }
      uVar29 = uVar31;
      if (uVar31 < 2) {
        uVar29 = 1;
      }
      do {
        uVar32 = (ulong)(*(byte *)(puVar30 + -5) >> 1);
        pvVar3 = (void *)((long)puVar30 + -0x27);
        if ((*(byte *)(puVar30 + -5) & 1) != 0) {
          uVar32 = puVar30[-4];
          pvVar3 = (void *)puVar30[-3];
        }
        sVar4 = uVar17;
        if (uVar32 <= uVar17) {
          sVar4 = uVar32;
        }
        iVar16 = memcmp(pvVar3,pcVar28,sVar4);
        if (iVar16 == 0) {
          if (uVar32 <= uVar17) goto LAB_0018f440;
        }
        else if (iVar16 < 0) {
LAB_0018f440:
          uVar32 = (ulong)(*(byte *)(puVar30 + -2) >> 1);
          pvVar3 = (void *)((long)puVar30 + -0xf);
          if ((*(byte *)(puVar30 + -2) & 1) != 0) {
            uVar32 = puVar30[-1];
            pvVar3 = (void *)*puVar30;
          }
          sVar4 = uVar32;
          if (uVar17 <= uVar32) {
            sVar4 = uVar17;
          }
          iVar16 = memcmp(pcVar28,pvVar3,sVar4);
          if (iVar16 == 0) {
            if (uVar17 <= uVar32) goto LAB_0018f474;
          }
          else if (iVar16 < 0) {
LAB_0018f474:
            iVar16 = 5;
            goto LAB_0018f678;
          }
        }
        uVar25 = uVar25 + 1;
        puVar30 = puVar30 + 6;
        bVar12 = uVar25 < uVar31;
      } while (uVar29 != uVar25);
      iVar16 = 0;
    }
LAB_0018f678:
    if ((bVar7 & 1) != 0) {
      operator_delete(local_88);
    }
    if (!bVar12) goto LAB_0018f69c;
    bVar12 = true;
LAB_0018f68c:
    lVar33 = 2;
    if (iVar16 != 0) goto LAB_0018f8cc;
  }
LAB_0018f108:
  bVar7 = **(byte **)(param_2 + 4);
  uVar25 = (ulong)bVar7;
  local_c0 = CONCAT71(local_c0._1_7_,bVar7);
  if (*(char *)(param_1 + 0xa5) != '\0') {
    uVar17 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),bVar7);
    uVar25 = uVar17 & 0xffffffff;
    local_c0 = CONCAT71(local_c0._1_7_,(char)uVar17);
  }
  uVar27 = (uint)uVar25;
  pcVar28 = *(char **)(param_1 + 0x28);
  uVar17 = *(long *)(param_1 + 0x30) - (long)pcVar28;
  cVar1 = (char)uVar25;
  if (uVar17 != 0) {
    if (uVar17 < 2) {
      uVar17 = 1;
    }
    do {
      if (*pcVar28 == cVar1) goto LAB_0018f640;
      uVar17 = uVar17 - 1;
      pcVar28 = pcVar28 + 1;
    } while (uVar17 != 0);
  }
  uVar9 = *(ushort *)(param_1 + 0xa2);
  if (((ulong)uVar9 == 0) && (*(long *)(param_1 + 0x40) == *(long *)(param_1 + 0x48))) {
LAB_0018f1d4:
    lVar19 = *(long *)(param_1 + 0x58);
    if (lVar19 != *(long *)(param_1 + 0x60)) {
      if (*(char *)(param_1 + 0xa6) == '\0') {
        uVar25 = 2;
        local_98 = 2;
        uStack_96 = 0;
        lVar23 = *(long *)(param_1 + 0x60) - lVar19;
        cStack_97 = cVar1;
        if (lVar23 == 0) goto LAB_0018f5e4;
LAB_0018f238:
        uVar29 = (lVar23 >> 4) * -0x5555555555555555;
        uVar17 = 0;
        puVar30 = (undefined8 *)(lVar19 + 0x28);
        uVar31 = uVar25 >> 1;
        pcVar28 = (char *)((ulong)&local_98 | 1);
        if ((uVar25 & 1) != 0) {
          uVar31 = uStack_90;
          pcVar28 = local_88;
        }
        bVar13 = true;
        uVar32 = uVar29;
        if (uVar29 < 2) {
          uVar32 = 1;
        }
        do {
          uVar24 = (ulong)(*(byte *)(puVar30 + -5) >> 1);
          pvVar3 = (void *)((long)puVar30 + -0x27);
          if ((*(byte *)(puVar30 + -5) & 1) != 0) {
            uVar24 = puVar30[-4];
            pvVar3 = (void *)puVar30[-3];
          }
          sVar4 = uVar31;
          if (uVar24 <= uVar31) {
            sVar4 = uVar24;
          }
          iVar16 = memcmp(pvVar3,pcVar28,sVar4);
          if (iVar16 == 0) {
            if (uVar24 <= uVar31) goto LAB_0018f2ec;
          }
          else if (iVar16 < 0) {
LAB_0018f2ec:
            uVar24 = (ulong)(*(byte *)(puVar30 + -2) >> 1);
            pvVar3 = (void *)((long)puVar30 + -0xf);
            if ((*(byte *)(puVar30 + -2) & 1) != 0) {
              uVar24 = puVar30[-1];
              pvVar3 = (void *)*puVar30;
            }
            sVar4 = uVar24;
            if (uVar31 <= uVar24) {
              sVar4 = uVar31;
            }
            iVar16 = memcmp(pcVar28,pvVar3,sVar4);
            if (iVar16 == 0) {
              if (uVar31 <= uVar24) goto LAB_0018f320;
            }
            else if (iVar16 < 0) {
LAB_0018f320:
              bVar12 = true;
              break;
            }
          }
          uVar17 = uVar17 + 1;
          puVar30 = puVar30 + 6;
          bVar13 = uVar17 < uVar29;
        } while (uVar32 != uVar17);
      }
      else {
        local_80 = 2;
        cStack_7e = '\0';
                    /* try { // try from 0018f208 to 0018f217 has its CatchHandler @ 0018f9e8 */
        cStack_7f = cVar1;
        (**(code **)(**(long **)(param_1 + 0x20) + 0x20))
                  (&local_98,*(long **)(param_1 + 0x20),(ulong)&local_80 | 1,(ulong)&local_80 | 2);
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
        lVar19 = *(long *)(param_1 + 0x58);
        uVar25 = (ulong)local_98;
        lVar23 = *(long *)(param_1 + 0x60) - lVar19;
        if (lVar23 != 0) goto LAB_0018f238;
LAB_0018f5e4:
        bVar13 = false;
      }
      if ((uVar25 & 1) != 0) {
        operator_delete(local_88);
      }
      if (bVar13) goto LAB_0018f8cc;
    }
    if (*(long *)(param_1 + 0x88) != *(long *)(param_1 + 0x90)) {
      FUN_0018fa28(&local_80,param_1 + 0x10,&local_c0,(ulong)&local_c0 | 1);
      bVar7 = local_80;
      lVar19 = *(long *)(param_1 + 0x88);
      lVar23 = *(long *)(param_1 + 0x90) - lVar19;
      if (lVar23 == 0) {
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
      }
      else {
        uVar17 = (lVar23 >> 3) * -0x5555555555555555;
        bVar11 = local_80 >> 1;
        uVar25 = (ulong)bVar11;
        if ((local_80 & 1) != 0) {
          uVar25 = uStack_78;
        }
        bVar13 = true;
        uVar31 = 0;
        uVar29 = uVar17;
        if (uVar17 < 2) {
          uVar29 = 1;
        }
        do {
          while( true ) {
            uVar32 = uVar31;
            pbVar20 = (byte *)(lVar19 + uVar32 * 0x18);
            bVar8 = *pbVar20;
            uVar31 = (ulong)(bVar8 >> 1);
            if ((bVar8 & 1) != 0) {
              uVar31 = *(ulong *)(pbVar20 + 8);
            }
            if (uVar25 == uVar31) break;
LAB_0018f528:
            uVar31 = uVar32 + 1;
            bVar13 = uVar31 < uVar17;
            if (uVar31 == uVar29) {
              if ((bVar7 & 1) == 0) goto LAB_0018f934;
LAB_0018f980:
              operator_delete(local_70);
joined_r0x0018f5fc:
              if (!bVar13) goto LAB_0018f618;
              goto LAB_0018f8cc;
            }
          }
          pbVar26 = *(byte **)(pbVar20 + 0x10);
          if ((bVar8 & 1) == 0) {
            pbVar26 = pbVar20 + 1;
          }
          if ((bVar7 & 1) == 0) {
            pbVar20 = (byte *)((ulong)&local_80 | 1);
            uVar31 = (ulong)bVar11;
            if (1 < bVar7) {
              while (*pbVar20 == *pbVar26) {
                uVar31 = uVar31 - 1;
                pbVar26 = pbVar26 + 1;
                pbVar20 = pbVar20 + 1;
                if (uVar31 == 0) goto LAB_0018f5f0;
              }
              goto LAB_0018f528;
            }
LAB_0018f5f0:
            bVar12 = true;
            goto joined_r0x0018f5fc;
          }
          iVar16 = memcmp(local_70,pbVar26,uStack_78);
          if (iVar16 == 0) {
            bVar12 = true;
            goto LAB_0018f980;
          }
          uVar31 = uVar32 + 1;
          bVar13 = uVar31 < uVar17;
        } while (uVar31 != uVar29);
        operator_delete(local_70);
LAB_0018f934:
        if (uVar32 + 1 < uVar17) goto LAB_0018f8cc;
      }
LAB_0018f618:
      uVar27 = (uint)(byte)local_c0;
    }
    if (((uVar27 >> 7 & 1) != 0) ||
       ((*(ulong *)(*(long *)(*(long *)(param_1 + 0x18) + 0x10) + ((ulong)uVar27 & 0xff) * 8) &
        (ulong)*(ushort *)(param_1 + 0xa0)) == 0)) {
      if ((uVar27 & 0xff) == 0x5f && (short)*(ushort *)(param_1 + 0xa0) < 0) {
        bVar12 = true;
      }
      goto LAB_0018f8cc;
    }
  }
  else {
    if (((uVar27 >> 7 & 1) == 0) &&
       ((*(ulong *)(*(long *)(*(long *)(param_1 + 0x18) + 0x10) + (uVar25 & 0xff) * 8) &
        (ulong)uVar9) != 0)) {
      bVar13 = true;
    }
    else {
      bVar13 = (short)uVar9 < 0 && (uVar27 & 0xff) == 0x5f;
    }
    pvVar6 = *(void **)(param_1 + 0x48);
    pvVar18 = memchr(*(void **)(param_1 + 0x40),uVar27 & 0xff,
                     (long)pvVar6 - (long)*(void **)(param_1 + 0x40));
    pvVar3 = pvVar6;
    if (pvVar18 != (void *)0x0) {
      pvVar3 = pvVar18;
    }
    if ((bVar13) || (pvVar3 != pvVar6)) goto LAB_0018f1d4;
  }
LAB_0018f640:
  bVar12 = true;
LAB_0018f8cc:
  if ((bool)*(char *)(param_1 + 0xa4) == bVar12) {
    uVar21 = 0;
    uVar22 = 0xfffffc1f;
  }
  else {
    uVar22 = 0xfffffc1d;
    *(long *)(param_2 + 4) = *(long *)(param_2 + 4) + lVar33;
    uVar21 = *(undefined8 *)(param_1 + 8);
  }
  *param_2 = uVar22;
  *(undefined8 *)(param_2 + 0x14) = uVar21;
  if (*(long *)(lVar10 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018fa28  FUN_0018fa28 =====

void FUN_0018fa28(byte *param_1,long param_2,void *param_3,void *param_4)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  byte *pbVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong local_70;
  ulong local_68;
  undefined1 *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  uVar5 = (long)param_4 - (long)param_3;
  local_58 = *(long *)(lVar2 + 0x28);
  if (uVar5 < 0xfffffffffffffff0) {
    if (uVar5 < 0x17) {
      puVar6 = (undefined1 *)((ulong)&local_70 | 1);
      local_70 = CONCAT71(local_70._1_7_,(char)((int)uVar5 << 1));
    }
    else {
      puVar6 = (undefined1 *)operator_new((uVar5 | 0xf) + 1);
      local_70 = (uVar5 | 0xf) + 2;
      local_68 = uVar5;
      local_60 = puVar6;
    }
    if (param_3 != param_4) {
      memcpy(puVar6,param_3,uVar5);
      puVar6 = puVar6 + uVar5;
    }
    *puVar6 = 0;
    uVar5 = local_70 >> 1 & 0x7f;
    puVar6 = (undefined1 *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      uVar5 = local_68;
      puVar6 = local_60;
    }
                    /* try { // try from 0018faf8 to 0018fb03 has its CatchHandler @ 0018fbb8 */
    (**(code **)(**(long **)(param_2 + 0x10) + 0x20))
              (param_1,*(long **)(param_2 + 0x10),puVar6,puVar6 + uVar5);
    bVar1 = *param_1;
    uVar5 = (ulong)(bVar1 >> 1);
    if ((bVar1 & 1) != 0) {
      uVar5 = *(ulong *)(param_1 + 8);
    }
    if (uVar5 != 1) {
      if (uVar5 == 0xc) {
        pbVar4 = *(byte **)(param_1 + 0x10);
        if ((bVar1 & 1) == 0) {
          pbVar4 = param_1 + 1;
        }
        pbVar4[0xb] = pbVar4[3];
      }
      else if ((bVar1 & 1) == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
      }
      else {
        **(undefined1 **)(param_1 + 0x10) = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
      }
    }
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return;
    }
  }
  else if (*(long *)(lVar2 + 0x28) == local_58) {
    uVar3 = FUN_0015d7fc();
                    /* catch() { ... } // from try @ 0018faf8 with catch @ 0018fbb8 */
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    if (*(long *)(lVar2 + 0x28) == local_58) {
      FUN_00157e74(uVar3);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018fbe8  FUN_0018fbe8 =====

void FUN_0018fbe8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)param_1[1];
  *param_1 = &PTR_FUN_001b8388;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018fc54  FUN_0018fc54 =====

void FUN_0018fc54(long param_1,undefined4 *param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  pcVar1 = *(char **)(param_2 + 4);
  if ((pcVar1 == *(char **)(param_2 + 6)) || (*pcVar1 == '\0')) {
    uVar4 = 0;
    *param_2 = 0xfffffc1f;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 8);
    *param_2 = 0xfffffc1d;
    *(char **)(param_2 + 4) = pcVar1 + 1;
  }
  *(undefined8 *)(param_2 + 0x14) = uVar4;
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018fcc8  FUN_0018fcc8 =====

void FUN_0018fcc8(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (((param_2 & 0xf8) == 0x30) || ((param_2 & 0xfe) == 0x38)) {
    if (8 < (param_2 & 0xff) - 0x31) goto LAB_0018fd28;
    if (*(uint *)(param_1 + 0x1c) < (param_2 & 0xff) - 0x30) {
      if (*(long *)(lVar1 + 0x28) == lVar2) {
        param_1 = FUN_0018fd64();
      }
      goto LAB_0018fd60;
    }
    FUN_0018fde4();
    param_1 = 1;
  }
  else {
LAB_0018fd28:
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
LAB_0018fd60:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0018fd64  FUN_0018fd64 =====

void FUN_0018fd64(void)

{
  long lVar1;
  regex_error *prVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  prVar2 = (regex_error *)__cxa_allocate_exception(0x18);
                    /* try { // try from 0018fd8c to 0018fd93 has its CatchHandler @ 0018fdbc */
  std::__ndk1::regex_error::regex_error(prVar2,4);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* WARNING: Subroutine does not return */
    __cxa_throw(prVar2,PTR_typeinfo_001ba1a8,PTR__regex_error_001ba1a0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018fde4  FUN_0018fde4 =====

void FUN_0018fde4(locale *param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((*(uint *)(param_1 + 0x18) & 1) == 0) {
    if ((*(uint *)(param_1 + 0x18) >> 3 & 1) == 0) {
      puVar2 = (undefined8 *)operator_new(0x18);
      lVar4 = *(long *)(param_1 + 0x38);
      *(undefined4 *)(puVar2 + 2) = param_2;
      uVar5 = *(undefined8 *)(lVar4 + 8);
      *puVar2 = &PTR_FUN_001b8688;
      puVar2[1] = uVar5;
      *(undefined8 **)(lVar4 + 8) = puVar2;
      goto LAB_0018fe98;
    }
    puVar2 = (undefined8 *)operator_new(0x30);
    lVar4 = *(long *)(param_1 + 0x38);
    ppuVar6 = &PTR_FUN_001b8640;
  }
  else {
    puVar2 = (undefined8 *)operator_new(0x30);
    lVar4 = *(long *)(param_1 + 0x38);
    ppuVar6 = &PTR_FUN_001b85f8;
  }
  uVar5 = *(undefined8 *)(lVar4 + 8);
  *puVar2 = ppuVar6;
  puVar2[1] = uVar5;
  std::__ndk1::locale::locale((locale *)(puVar2 + 2),param_1);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x38);
  *(undefined4 *)(puVar2 + 5) = param_2;
  puVar2[4] = uVar7;
  puVar2[3] = uVar5;
  *(undefined8 **)(lVar4 + 8) = puVar2;
LAB_0018fe98:
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018fecc  FUN_0018fecc =====

void FUN_0018fecc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)param_1[1];
  *param_1 = &PTR_FUN_001b8388;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018ff38  FUN_0018ff38 =====

void FUN_0018ff38(long param_1,undefined4 *param_2)

{
  long lVar1;
  void *__s2;
  void *__s1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  size_t __n;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  lVar1 = *(long *)(param_2 + 8);
  if ((ulong)((*(long *)(param_2 + 10) - lVar1 >> 3) * -0x5555555555555555) <
      (ulong)*(uint *)(param_1 + 0x10)) {
    if (*(long *)(lVar3 + 0x28) == lVar5) {
      FUN_0018fd64();
    }
    goto LAB_0019003c;
  }
  uVar2 = *(uint *)(param_1 + 0x10) - 1;
  if (*(char *)(lVar1 + (ulong)uVar2 * 0x18 + 0x10) == '\0') {
LAB_0018ffd4:
    uVar7 = 0;
    *param_2 = 0xfffffc1f;
  }
  else {
    puVar6 = (undefined8 *)(lVar1 + (ulong)uVar2 * 0x18);
    __s2 = *(void **)(param_2 + 4);
    __s1 = (void *)*puVar6;
    __n = puVar6[1] - (long)__s1;
    if (*(long *)(param_2 + 6) - (long)__s2 < (long)__n) goto LAB_0018ffd4;
    iVar4 = memcmp(__s1,__s2,__n);
    if (iVar4 != 0) goto LAB_0018ffd4;
    uVar7 = *(undefined8 *)(param_1 + 8);
    *param_2 = 0xfffffc1e;
    *(size_t *)(param_2 + 4) = (long)__s2 + __n;
  }
  *(undefined8 *)(param_2 + 0x14) = uVar7;
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
LAB_0019003c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00190040  FUN_00190040 =====

void FUN_00190040(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_001b8640;
  std::__ndk1::locale::~locale((locale *)(param_1 + 2));
  *param_1 = &PTR_FUN_001b8388;
  if ((long *)param_1[1] == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x001900a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[1] + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001900d0  FUN_001900d0 =====

void FUN_001900d0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_001b8640;
  std::__ndk1::locale::~locale((locale *)(param_1 + 2));
  *param_1 = &PTR_FUN_001b8388;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00190148  FUN_00190148 =====

void FUN_00190148(long param_1,undefined4 *param_2)

{
  char *pcVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar2 = *(int *)(param_1 + 0x28) - 1;
  if (*(char *)(*(long *)(param_2 + 8) + (ulong)uVar2 * 0x18 + 0x10) != '\0') {
    plVar5 = (long *)(*(long *)(param_2 + 8) + (ulong)uVar2 * 0x18);
    pcVar7 = (char *)*plVar5;
    pcVar1 = *(char **)(param_2 + 4);
    lVar8 = plVar5[1] - (long)pcVar7;
    if (lVar8 <= *(long *)(param_2 + 6) - (long)pcVar1) {
      lVar9 = lVar8;
      pcVar10 = pcVar1;
      if (0 < lVar8) {
        do {
          if (*pcVar7 != *pcVar10) goto LAB_0019019c;
          lVar9 = lVar9 + -1;
          pcVar7 = pcVar7 + 1;
          pcVar10 = pcVar10 + 1;
        } while (lVar9 != 0);
      }
      uVar6 = *(undefined8 *)(param_1 + 8);
      *param_2 = 0xfffffc1e;
      *(char **)(param_2 + 4) = pcVar1 + lVar8;
      goto LAB_001901e8;
    }
  }
LAB_0019019c:
  uVar6 = 0;
  *param_2 = 0xfffffc1f;
LAB_001901e8:
  *(undefined8 *)(param_2 + 0x14) = uVar6;
  if (*(long *)(lVar3 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0019020c  FUN_0019020c =====

void FUN_0019020c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_001b85f8;
  std::__ndk1::locale::~locale((locale *)(param_1 + 2));
  *param_1 = &PTR_FUN_001b8388;
  if ((long *)param_1[1] == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x00190274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[1] + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019029c  FUN_0019029c =====

void FUN_0019029c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_001b85f8;
  std::__ndk1::locale::~locale((locale *)(param_1 + 2));
  *param_1 = &PTR_FUN_001b8388;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00190314  FUN_00190314 =====

void FUN_00190314(long param_1,undefined4 *param_2)

{
  long lVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar7 = (long *)(*(long *)(param_2 + 8) + (ulong)(*(int *)(param_1 + 0x28) - 1) * 0x18);
  if ((char)plVar7[2] != '\0') {
    lVar8 = *(long *)(param_2 + 4);
    lVar6 = plVar7[1] - *plVar7;
    if (lVar6 <= *(long *)(param_2 + 6) - lVar8) {
      if (0 < lVar6) {
        lVar8 = 0;
        do {
          cVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))
                            (*(long **)(param_1 + 0x18),*(undefined1 *)(*plVar7 + lVar8));
          cVar3 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))
                            (*(long **)(param_1 + 0x18),
                             *(undefined1 *)(*(long *)(param_2 + 4) + lVar8));
          if (cVar2 != cVar3) goto LAB_00190374;
          lVar8 = lVar8 + 1;
        } while (lVar6 != lVar8);
        lVar8 = *(long *)(param_2 + 4);
      }
      uVar5 = *(undefined8 *)(param_1 + 8);
      *param_2 = 0xfffffc1e;
      *(long *)(param_2 + 4) = lVar8 + lVar6;
      goto LAB_001903f8;
    }
  }
LAB_00190374:
  uVar5 = 0;
  *param_2 = 0xfffffc1f;
LAB_001903f8:
  *(undefined8 *)(param_2 + 0x14) = uVar5;
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019042c  FUN_0019042c =====

void FUN_0019042c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)param_1[1];
  *param_1 = &PTR_FUN_001b8388;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00190498  FUN_00190498 =====

void FUN_00190498(long param_1,undefined4 *param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  pcVar1 = *(char **)(param_2 + 4);
  if ((pcVar1 == *(char **)(param_2 + 6)) || (*pcVar1 != *(char *)(param_1 + 0x10))) {
    uVar4 = 0;
    *param_2 = 0xfffffc1f;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 8);
    *param_2 = 0xfffffc1d;
    *(char **)(param_2 + 4) = pcVar1 + 1;
  }
  *(undefined8 *)(param_2 + 0x14) = uVar4;
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00190514  FUN_00190514 =====

void FUN_00190514(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_001b8568;
  std::__ndk1::locale::~locale((locale *)(param_1 + 2));
  *param_1 = &PTR_FUN_001b8388;
  if ((long *)param_1[1] == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x0019057c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[1] + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001905a4  FUN_001905a4 =====

void FUN_001905a4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_001b8568;
  std::__ndk1::locale::~locale((locale *)(param_1 + 2));
  *param_1 = &PTR_FUN_001b8388;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019061c  FUN_0019061c =====

void FUN_0019061c(long param_1,undefined4 *param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  pcVar1 = *(char **)(param_2 + 4);
  if ((pcVar1 == *(char **)(param_2 + 6)) || (*pcVar1 != *(char *)(param_1 + 0x28))) {
    uVar4 = 0;
    *param_2 = 0xfffffc1f;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 8);
    *param_2 = 0xfffffc1d;
    *(char **)(param_2 + 4) = pcVar1 + 1;
  }
  *(undefined8 *)(param_2 + 0x14) = uVar4;
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00190698  FUN_00190698 =====

void FUN_00190698(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_001b8520;
  std::__ndk1::locale::~locale((locale *)(param_1 + 2));
  *param_1 = &PTR_FUN_001b8388;
  if ((long *)param_1[1] == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x00190700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[1] + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00190728  FUN_00190728 =====

void FUN_00190728(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_001b8520;
  std::__ndk1::locale::~locale((locale *)(param_1 + 2));
  *param_1 = &PTR_FUN_001b8388;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001907a0  FUN_001907a0 =====

void FUN_001907a0(long param_1,undefined4 *param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((*(undefined1 **)(param_2 + 4) == *(undefined1 **)(param_2 + 6)) ||
     (cVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))
                        (*(long **)(param_1 + 0x18),**(undefined1 **)(param_2 + 4)),
     *(char *)(param_1 + 0x28) != cVar2)) {
    uVar4 = 0;
    *param_2 = 0xfffffc1f;
  }
  else {
    *param_2 = 0xfffffc1d;
    uVar4 = *(undefined8 *)(param_1 + 8);
    *(long *)(param_2 + 4) = *(long *)(param_2 + 4) + 1;
  }
  *(undefined8 *)(param_2 + 0x14) = uVar4;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00190848  FUN_00190848 =====

void FUN_00190848(long param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  int iVar11;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  if (param_2 == param_3) {
    pbVar7 = (byte *)FUN_0018b8f0(param_1,param_2,param_3);
  }
  else {
    pbVar7 = param_2 + 1;
    uVar5 = (uint)*param_2;
    if ((pbVar7 == param_3) && (uVar5 == 0x24)) goto LAB_00190898;
    if ((uVar5 - 0x2e < 0x2f) && ((1L << ((ulong)(uVar5 - 0x2e) & 0x3f) & 0x600000000001U) != 0)) {
      if ((pbVar7 == param_3) || (uVar5 != 0x5c)) {
        if (uVar5 != 0x2e) goto LAB_00190898;
        puVar4 = (undefined8 *)operator_new(0x10);
        lVar8 = *(long *)(param_1 + 0x38);
        ppuVar10 = &PTR_FUN_001b8910;
LAB_00190b18:
        uVar9 = *(undefined8 *)(lVar8 + 8);
        *puVar4 = ppuVar10;
        puVar4[1] = uVar9;
        *(undefined8 **)(lVar8 + 8) = puVar4;
        *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
      }
      else {
        uVar5 = *pbVar7 - 0x24;
        if ((uVar5 < 0x3b) && ((1L << ((ulong)uVar5 & 0x3f) & 0x580000000000441U) != 0)) {
          FUN_0018b6a0(param_1,(uint)*pbVar7);
          pbVar7 = param_2 + 2;
        }
        else {
LAB_00190898:
          pbVar7 = (byte *)FUN_0018b8f0(param_1,param_2,param_3);
          if ((pbVar7 == param_2) &&
             (((param_2 != param_3 && (pbVar7 = param_2, param_2 + 1 != param_3)) &&
              (*param_2 == 0x5c)))) {
            bVar2 = param_2[1];
            if ((ulong)(bVar2 == 0x28) == 0) {
              bVar2 = param_2[1];
              if ((((bVar2 & 0xf8) == 0x30) || ((bVar2 & 0xfe) == 0x38)) && (bVar2 - 0x31 < 9)) {
                if (*(uint *)(param_1 + 0x1c) < bVar2 - 0x30) goto LAB_00190b74;
                FUN_0018fde4(param_1);
                pbVar7 = param_2 + 2;
              }
            }
            else {
              if ((*(byte *)(param_1 + 0x18) >> 1 & 1) == 0) {
                puVar4 = (undefined8 *)operator_new(0x18);
                lVar8 = *(long *)(param_1 + 0x38);
                uVar9 = *(undefined8 *)(lVar8 + 8);
                iVar11 = *(int *)(param_1 + 0x1c) + 1;
                *puVar4 = &PTR_FUN_001b8718;
                *(int *)(param_1 + 0x1c) = iVar11;
                puVar4[1] = uVar9;
                *(undefined8 **)(lVar8 + 8) = puVar4;
                lVar8 = *(long *)(param_1 + 0x38);
                *(int *)(puVar4 + 2) = iVar11;
                *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar8 + 8);
                param_2 = param_2 + (ulong)(bVar2 == 0x28) * 2;
              }
              else {
                iVar11 = *(int *)(param_1 + 0x1c);
                param_2 = param_2 + (ulong)(bVar2 == 0x28) * 2;
              }
              do {
                pbVar7 = param_2;
                param_2 = pbVar7;
                if (pbVar7 == param_3) goto LAB_00190b60;
                uVar9 = *(undefined8 *)(param_1 + 0x38);
                iVar1 = *(int *)(param_1 + 0x1c);
                param_2 = (byte *)FUN_00190848(param_1,pbVar7,param_3);
              } while ((pbVar7 != param_2) &&
                      (param_2 = (byte *)FUN_00190b8c(param_1,param_2,param_3,uVar9,iVar1 + 1,
                                                      *(int *)(param_1 + 0x1c) + 1),
                      pbVar7 != param_2));
              if ((pbVar7 + 1 == param_3) || ((*pbVar7 != 0x5c || (pbVar7[1] != 0x29)))) {
LAB_00190b60:
                if (*(long *)(lVar3 + 0x28) != lVar6) goto LAB_00190b88;
                param_2 = (byte *)FUN_0018a7f4();
LAB_00190b74:
                if (*(long *)(lVar3 + 0x28) == lVar6) {
                  param_2 = (byte *)FUN_0018fd64(param_2);
                }
                goto LAB_00190b88;
              }
              pbVar7 = pbVar7 + (ulong)(pbVar7[1] == 0x29) * 2;
              if ((*(byte *)(param_1 + 0x18) >> 1 & 1) == 0) {
                puVar4 = (undefined8 *)operator_new(0x18);
                lVar8 = *(long *)(param_1 + 0x38);
                ppuVar10 = &PTR_FUN_001b8760;
                *(int *)(puVar4 + 2) = iVar11;
                goto LAB_00190b18;
              }
            }
          }
        }
      }
    }
    else {
      FUN_0018b6a0(param_1,*param_2);
    }
  }
  param_2 = pbVar7;
  if (*(long *)(lVar3 + 0x28) == lVar6) {
    return;
  }
LAB_00190b88:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}


// ===== 00190b8c  FUN_00190b8c =====

byte * FUN_00190b8c(undefined8 param_1,byte *param_2,byte *param_3,undefined8 param_4,ulong param_5,
                   ulong param_6)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  int extraout_w8;
  int iVar7;
  long lVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  
  lVar2 = tpidr_el0;
  lVar8 = *(long *)(lVar2 + 0x28);
  if (param_2 != param_3) {
    if (*param_2 == 0x2a) {
      FUN_0018ac28(param_1,0,0xffffffffffffffff,param_4,param_5 & 0xffffffff,param_6 & 0xffffffff,1)
      ;
      param_2 = param_2 + 1;
    }
    else if (((param_2 + 1 != param_3) && (*param_2 == 0x5c)) && (param_2[1] == 0x7b)) {
      pbVar9 = param_2 + (ulong)(param_2[1] == 0x7b) * 2;
      if ((pbVar9 != param_3) &&
         ((bVar1 = *pbVar9, (bVar1 & 0xf8) == 0x30 || ((bVar1 & 0xfe) == 0x38)))) {
        uVar6 = (uint)bVar1;
        pbVar3 = pbVar9;
        while( true ) {
          pbVar3 = pbVar3 + 1;
          iVar7 = uVar6 - 0x30;
          pbVar11 = param_3;
          if ((pbVar3 == param_3) ||
             ((bVar1 = *pbVar3, (bVar1 & 0xf8) != 0x30 && (pbVar11 = pbVar3, (bVar1 & 0xfe) != 0x38)
              ))) break;
          if (0xccccccb < iVar7) goto LAB_00190dfc;
          uVar6 = (uint)bVar1 + iVar7 * 10;
        }
        if (pbVar11 != pbVar9) {
          if (pbVar11 == param_3) goto LAB_00190dcc;
          pbVar9 = pbVar11 + 1;
          if (*pbVar11 == 0x2c) {
            if (pbVar9 == param_3) {
LAB_00190dcc:
              if (*(long *)(lVar2 + 0x28) != lVar8) goto LAB_00190e10;
              param_1 = FUN_0018ae18();
              iVar7 = extraout_w8;
            }
            else {
              bVar1 = *pbVar9;
              if (((bVar1 & 0xf8) == 0x30) || ((bVar1 & 0xfe) == 0x38)) {
                pbVar9 = pbVar11 + 2;
                if (pbVar9 != param_3) {
                  uVar6 = (uint)bVar1;
                  do {
                    iVar10 = uVar6 - 0x30;
                    bVar1 = *pbVar9;
                    if (((bVar1 & 0xf8) != 0x30) && ((bVar1 & 0xfe) != 0x38)) goto LAB_00190cec;
                    if (0xccccccb < iVar10) goto LAB_00190dfc;
                    uVar6 = (uint)bVar1 + iVar10 * 10;
                    pbVar9 = pbVar9 + 1;
                  } while (pbVar9 != param_3);
                }
                goto LAB_00190dcc;
              }
              iVar10 = -1;
LAB_00190cec:
              if ((((pbVar9 == param_3) || (pbVar9 + 1 == param_3)) || (*pbVar9 != 0x5c)) ||
                 (pbVar9[1] != 0x7d)) goto LAB_00190dcc;
              param_2 = pbVar9 + (ulong)(pbVar9[1] == 0x7d) * 2;
              if (iVar10 != -1) {
                if (iVar10 < iVar7) goto LAB_00190dfc;
                lVar4 = (long)iVar7;
                param_5 = param_5 & 0xffffffff;
                param_6 = param_6 & 0xffffffff;
                lVar5 = (long)iVar10;
                goto LAB_00190df0;
              }
            }
            lVar4 = (long)iVar7;
            param_5 = param_5 & 0xffffffff;
            param_6 = param_6 & 0xffffffff;
            lVar5 = -1;
          }
          else {
            if (((pbVar9 == param_3) || (*pbVar11 != 0x5c)) || (*pbVar9 != 0x7d)) goto LAB_00190dcc;
            lVar4 = (long)iVar7;
            param_2 = pbVar11 + 2;
            param_5 = param_5 & 0xffffffff;
            param_6 = param_6 & 0xffffffff;
            lVar5 = lVar4;
          }
LAB_00190df0:
          FUN_0018ac28(param_1,lVar4,lVar5,param_4,param_5,param_6,1);
          goto LAB_00190bdc;
        }
      }
LAB_00190dfc:
      if (*(long *)(lVar2 + 0x28) == lVar8) {
        FUN_0018ad98();
      }
      goto LAB_00190e10;
    }
  }
LAB_00190bdc:
  if (*(long *)(lVar2 + 0x28) == lVar8) {
    return param_2;
  }
LAB_00190e10:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00190e14  FUN_00190e14 =====

byte * FUN_00190e14(long param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  long lVar2;
  locale *plVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  uint uVar6;
  uint extraout_w8;
  undefined **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_88 [24];
  undefined4 local_70;
  int local_6c;
  long local_48;
  
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = param_1;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_2 != param_3) {
    bVar1 = *param_2;
    uVar6 = (uint)bVar1;
    pbVar5 = param_3;
    if (bVar1 < 0x5c) {
      if (bVar1 == 0x24) {
        puVar4 = (undefined8 *)operator_new(0x18);
        uVar6 = *(uint *)(param_1 + 0x18);
        lVar8 = *(long *)(param_1 + 0x38);
        uVar9 = *(undefined8 *)(lVar8 + 8);
        ppuVar7 = &PTR_FUN_001b8400;
LAB_00190f94:
        *puVar4 = ppuVar7;
        puVar4[1] = uVar9;
        param_2 = (byte *)(auVar11._8_8_ + 1);
        *(bool *)(puVar4 + 2) = (uVar6 & 0x5f0) == 0x400;
        *(undefined8 **)(lVar8 + 8) = puVar4;
        *(undefined8 *)(auVar11._0_8_ + 0x38) = *(undefined8 *)(*(long *)(auVar11._0_8_ + 0x38) + 8)
        ;
      }
      else if ((((bVar1 == 0x28) && (param_2 + 1 != param_3)) && (param_2[1] == 0x3f)) &&
              (param_2 + 2 != param_3)) {
        if (param_2[2] == 0x21) {
          FUN_00191864(auStack_88);
          local_70 = *(undefined4 *)(param_1 + 0x18);
                    /* try { // try from 001910cc to 001910df has its CatchHandler @ 00191144 */
          param_2 = (byte *)FUN_0018947c(auStack_88,param_2 + 3,param_3);
                    /* try { // try from 001910f0 to 00191143 has its CatchHandler @ 0019114c */
          FUN_00191908(param_1,auStack_88,1,*(undefined4 *)(param_1 + 0x1c));
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + local_6c;
          if ((param_2 == param_3) || (*param_2 != 0x29)) {
            if (*(long *)(lVar2 + 0x28) == local_48) {
              uVar9 = FUN_0018a7f4();
                    /* catch() { ... } // from try @ 001910cc with catch @ 00191144 */
                    /* catch() { ... } // from try @ 00190ed8 with catch @ 00191150 */
              FUN_00189330(auStack_88);
              if (*(long *)(lVar2 + 0x28) == local_48) {
                FUN_00157e74(uVar9);
              }
            }
            goto LAB_00191174;
          }
        }
        else {
          if (param_2[2] != 0x3d) goto LAB_00190fb4;
          FUN_00191864(auStack_88);
          local_70 = *(undefined4 *)(param_1 + 0x18);
                    /* try { // try from 00190eb4 to 00190ec7 has its CatchHandler @ 00191148 */
          param_2 = (byte *)FUN_0018947c(auStack_88,param_2 + 3,param_3);
                    /* try { // try from 00190ed8 to 00190f17 has its CatchHandler @ 00191150 */
          pbVar5 = (byte *)0x0;
          FUN_00191908(param_1,auStack_88,0,*(undefined4 *)(param_1 + 0x1c));
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + local_6c;
          if ((param_2 == param_3) || (*param_2 != 0x29)) {
            if (*(long *)(lVar2 + 0x28) != local_48) goto LAB_00191174;
            auVar11 = FUN_0018a7f4();
            uVar6 = extraout_w8;
            goto LAB_00190f18;
          }
        }
        param_2 = param_2 + 1;
        FUN_00189330(auStack_88);
      }
    }
    else {
LAB_00190f18:
      param_2 = auVar11._8_8_;
      plVar3 = auVar11._0_8_;
      if (uVar6 == 0x5c) {
        if (param_2 + 1 != pbVar5) {
          if (param_2[1] == 0x42) {
            puVar4 = (undefined8 *)operator_new(0x30);
            uVar9 = *(undefined8 *)(*(long *)(plVar3 + 0x38) + 8);
            *puVar4 = &PTR_FUN_001b8448;
            puVar4[1] = uVar9;
            std::__ndk1::locale::locale((locale *)(puVar4 + 2),plVar3);
            uVar10 = *(undefined8 *)(plVar3 + 0x10);
            uVar9 = *(undefined8 *)(plVar3 + 8);
            lVar8 = *(long *)(plVar3 + 0x38);
            *(undefined1 *)(puVar4 + 5) = 1;
            puVar4[4] = uVar10;
            puVar4[3] = uVar9;
            *(undefined8 **)(lVar8 + 8) = puVar4;
          }
          else {
            if (param_2[1] != 0x62) goto LAB_00190fb4;
            puVar4 = (undefined8 *)operator_new(0x30);
            uVar9 = *(undefined8 *)(*(long *)(plVar3 + 0x38) + 8);
            *puVar4 = &PTR_FUN_001b8448;
            puVar4[1] = uVar9;
            std::__ndk1::locale::locale((locale *)(puVar4 + 2),plVar3);
            uVar10 = *(undefined8 *)(plVar3 + 0x10);
            uVar9 = *(undefined8 *)(plVar3 + 8);
            lVar8 = *(long *)(plVar3 + 0x38);
            *(undefined1 *)(puVar4 + 5) = 0;
            puVar4[4] = uVar10;
            puVar4[3] = uVar9;
            *(undefined8 **)(lVar8 + 8) = puVar4;
          }
          param_2 = param_2 + 2;
          *(undefined8 *)(plVar3 + 0x38) = *(undefined8 *)(*(long *)(plVar3 + 0x38) + 8);
        }
      }
      else if (uVar6 == 0x5e) {
        puVar4 = (undefined8 *)operator_new(0x18);
        uVar6 = *(uint *)(plVar3 + 0x18);
        lVar8 = *(long *)(plVar3 + 0x38);
        uVar9 = *(undefined8 *)(lVar8 + 8);
        ppuVar7 = &PTR_FUN_001b83b8;
        goto LAB_00190f94;
      }
    }
  }
LAB_00190fb4:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return param_2;
  }
LAB_00191174:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00191178  FUN_00191178 =====

void FUN_00191178(byte *param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  void *pvVar6;
  byte *pbVar7;
  ushort uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 uVar14;
  byte *pbVar15;
  uint uVar16;
  byte *unaff_x19;
  int iVar17;
  
  lVar3 = tpidr_el0;
  lVar10 = *(long *)(lVar3 + 0x28);
  pbVar5 = param_2;
  if (param_2 == param_3) goto LAB_00191484;
  bVar2 = *param_2;
  uVar12 = (uint)bVar2;
  pbVar7 = param_1;
  if (bVar2 < 0x3f) {
    if (bVar2 < 0x29) {
      if (uVar12 != 0x24) {
        if (bVar2 == 0x28) {
          unaff_x19 = param_2 + 1;
          if (unaff_x19 != param_3) {
            if (((param_2 + 2 == param_3) || (*unaff_x19 != 0x3f)) || (param_2[2] != 0x3a)) {
              if ((param_1[0x18] >> 1 & 1) == 0) {
                puVar4 = (undefined8 *)operator_new(0x18);
                lVar11 = *(long *)(param_1 + 0x38);
                uVar14 = *(undefined8 *)(lVar11 + 8);
                iVar17 = *(int *)(param_1 + 0x1c) + 1;
                *(int *)(param_1 + 0x1c) = iVar17;
                puVar4[1] = uVar14;
                *(undefined8 **)(lVar11 + 8) = puVar4;
                lVar11 = *(long *)(param_1 + 0x38);
                *puVar4 = &PTR_FUN_001b8718;
                *(int *)(puVar4 + 2) = iVar17;
                *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar11 + 8);
              }
              else {
                iVar17 = *(int *)(param_1 + 0x1c);
              }
              *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
              pbVar7 = (byte *)FUN_00189a6c(param_1,unaff_x19);
              if ((pbVar7 == param_3) || (unaff_x19 = pbVar7, *pbVar7 != 0x29)) goto LAB_00191700;
              if ((param_1[0x18] >> 1 & 1) == 0) {
                puVar4 = (undefined8 *)operator_new(0x18);
                lVar11 = *(long *)(param_1 + 0x38);
                *(int *)(puVar4 + 2) = iVar17;
                uVar14 = *(undefined8 *)(lVar11 + 8);
                *puVar4 = &PTR_FUN_001b8760;
                puVar4[1] = uVar14;
                *(undefined8 **)(lVar11 + 8) = puVar4;
                *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
              }
              *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
              pbVar5 = pbVar7 + 1;
            }
            else {
              *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
              pbVar7 = (byte *)FUN_00189a6c(param_1,param_2 + 3);
              unaff_x19 = param_3;
              if ((pbVar7 == param_3) || (*pbVar7 != 0x29)) goto LAB_00191700;
              *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
              pbVar5 = pbVar7 + 1;
            }
            goto LAB_00191484;
          }
          goto LAB_00191700;
        }
LAB_0019146c:
        FUN_0018b6a0(param_1,uVar12);
        pbVar5 = param_2 + 1;
      }
    }
    else if (bVar2 != 0x29) {
      if (uVar12 != 0x2e) {
        if (1 < uVar12 - 0x2a) goto LAB_0019146c;
        goto LAB_001916ec;
      }
      puVar4 = (undefined8 *)operator_new(0x10);
      lVar11 = *(long *)(param_1 + 0x38);
      *puVar4 = &PTR_FUN_001b84d8;
      puVar4[1] = *(undefined8 *)(lVar11 + 8);
      *(undefined8 **)(lVar11 + 8) = puVar4;
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
      pbVar5 = param_2 + 1;
    }
  }
  else {
    uVar13 = (ulong)(uVar12 - 0x5c);
    if (uVar12 - 0x5c < 0x22) {
      if ((1L << (uVar13 & 0x3f) & 0x300000006U) != 0) goto LAB_00191484;
      if (uVar13 != 0) {
        if (uVar13 == 0x1f) goto LAB_001916ec;
        goto LAB_00191454;
      }
      unaff_x19 = param_2 + 1;
      if (unaff_x19 == param_3) goto LAB_00191728;
      bVar2 = *unaff_x19;
      uVar12 = (uint)bVar2;
      uVar9 = bVar2 - 0x30;
      if (uVar9 == 0) {
        FUN_0018b6a0(param_1,0);
        pbVar5 = param_2 + 2;
        goto LAB_00191484;
      }
      if (bVar2 - 0x31 < 9) {
        pbVar1 = param_2 + 2;
        pbVar5 = param_3;
        if ((pbVar1 != param_3) && (uVar16 = (uint)*pbVar1, pbVar5 = pbVar1, *pbVar1 - 0x30 < 10)) {
          pbVar1 = param_2 + 3;
          do {
            pbVar15 = pbVar1;
            if (0x19999998 < uVar9) goto LAB_00191714;
            uVar12 = uVar16 + uVar9 * 10;
            uVar9 = uVar12 - 0x30;
            pbVar5 = param_3;
            if (pbVar15 == param_3) break;
            uVar16 = (uint)*pbVar15;
            pbVar1 = pbVar15 + 1;
            pbVar5 = pbVar15;
          } while (uVar16 - 0x30 < 10);
        }
        if (*(uint *)(param_1 + 0x1c) <= uVar12 - 0x31) goto LAB_00191714;
        FUN_0018fde4(param_1,uVar9);
        if (unaff_x19 != pbVar5) goto LAB_00191484;
        uVar12 = (uint)*unaff_x19;
      }
      if (uVar12 < 100) {
        if (uVar12 == 0x44) {
          pvVar6 = operator_new(0xa8);
                    /* try { // try from 001915bc to 001915cf has its CatchHandler @ 00191748 */
          FUN_0018c908(pvVar6,param_1,*(undefined8 *)(*(long *)(param_1 + 0x38) + 8),1,
                       *(uint *)(param_1 + 0x18) & 1,*(uint *)(param_1 + 0x18) >> 3 & 1);
          goto LAB_001915d0;
        }
        if (uVar12 != 0x53) {
          if (uVar12 != 0x57) {
LAB_00191648:
            pbVar7 = (byte *)FUN_0018e354(param_1,unaff_x19,param_3,0);
            pbVar5 = param_2;
            if (unaff_x19 != pbVar7) {
              pbVar5 = pbVar7;
            }
            goto LAB_00191484;
          }
          pvVar6 = operator_new(0xa8);
                    /* try { // try from 00191534 to 00191547 has its CatchHandler @ 00191750 */
          FUN_0018c908(pvVar6,param_1,*(undefined8 *)(*(long *)(param_1 + 0x38) + 8),1,
                       *(uint *)(param_1 + 0x18) & 1,*(uint *)(param_1 + 0x18) >> 3 & 1);
          goto LAB_0019161c;
        }
        pvVar6 = operator_new(0xa8);
                    /* try { // try from 00191680 to 00191693 has its CatchHandler @ 00191740 */
        FUN_0018c908(pvVar6,param_1,*(undefined8 *)(*(long *)(param_1 + 0x38) + 8),1,
                     *(uint *)(param_1 + 0x18) & 1,*(uint *)(param_1 + 0x18) >> 3 & 1);
LAB_001916cc:
        uVar8 = *(ushort *)((long)pvVar6 + 0xa0);
        *(void **)(*(long *)(param_1 + 0x38) + 8) = pvVar6;
        uVar8 = uVar8 | 1;
      }
      else {
        if (uVar12 == 0x77) {
          pvVar6 = operator_new(0xa8);
                    /* try { // try from 00191608 to 0019161b has its CatchHandler @ 00191744 */
          FUN_0018c908(pvVar6,param_1,*(undefined8 *)(*(long *)(param_1 + 0x38) + 8),0,
                       *(uint *)(param_1 + 0x18) & 1,*(uint *)(param_1 + 0x18) >> 3 & 1);
LAB_0019161c:
          uVar8 = *(ushort *)((long)pvVar6 + 0xa0);
          *(void **)(*(long *)(param_1 + 0x38) + 8) = pvVar6;
          *(void **)(param_1 + 0x38) = pvVar6;
          *(ushort *)((long)pvVar6 + 0xa0) = uVar8 | 0x60;
          FUN_0018cac0(pvVar6,0x5f);
          pbVar5 = param_2 + 2;
          goto LAB_00191484;
        }
        if (uVar12 == 0x73) {
          pvVar6 = operator_new(0xa8);
                    /* try { // try from 001916b8 to 001916cb has its CatchHandler @ 0019173c */
          FUN_0018c908(pvVar6,param_1,*(undefined8 *)(*(long *)(param_1 + 0x38) + 8),0,
                       *(uint *)(param_1 + 0x18) & 1,*(uint *)(param_1 + 0x18) >> 3 & 1);
          goto LAB_001916cc;
        }
        if (uVar12 != 100) goto LAB_00191648;
        pvVar6 = operator_new(0xa8);
                    /* try { // try from 00191584 to 00191597 has its CatchHandler @ 0019174c */
        FUN_0018c908(pvVar6,param_1,*(undefined8 *)(*(long *)(param_1 + 0x38) + 8),0,
                     *(uint *)(param_1 + 0x18) & 1,*(uint *)(param_1 + 0x18) >> 3 & 1);
LAB_001915d0:
        uVar8 = *(ushort *)((long)pvVar6 + 0xa0);
        *(void **)(*(long *)(param_1 + 0x38) + 8) = pvVar6;
        uVar8 = uVar8 | 0x40;
      }
      *(void **)(param_1 + 0x38) = pvVar6;
      *(ushort *)((long)pvVar6 + 0xa0) = uVar8;
      pbVar5 = param_2 + 2;
    }
    else {
LAB_00191454:
      if (uVar12 != 0x5b) {
        if (bVar2 != 0x3f) goto LAB_0019146c;
LAB_001916ec:
        if (*(long *)(lVar3 + 0x28) != lVar10) goto LAB_00191774;
        pbVar7 = (byte *)FUN_00191778();
LAB_00191700:
        if (*(long *)(lVar3 + 0x28) != lVar10) goto LAB_00191774;
        pbVar7 = (byte *)FUN_0018a7f4();
LAB_00191714:
        if (*(long *)(lVar3 + 0x28) != lVar10) goto LAB_00191774;
        pbVar7 = (byte *)FUN_0018fd64();
LAB_00191728:
                    /* catch() { ... } // from try @ 001916b8 with catch @ 0019173c */
                    /* catch() { ... } // from try @ 00191534 with catch @ 00191750 */
        if ((*(long *)(lVar3 + 0x28) == lVar10) &&
           (pbVar7 = (byte *)FUN_0018e2d4(), *(long *)(lVar3 + 0x28) == lVar10)) {
          operator_delete(unaff_x19);
          pbVar7 = (byte *)FUN_00157e74(pbVar7);
        }
        goto LAB_00191774;
      }
      pbVar5 = (byte *)FUN_0018b8f0();
    }
  }
LAB_00191484:
  pbVar7 = pbVar5;
  if (*(long *)(lVar3 + 0x28) == lVar10) {
    return;
  }
LAB_00191774:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pbVar7);
}


// ===== 00191778  FUN_00191778 =====

void FUN_00191778(void)

{
  long lVar1;
  regex_error *prVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  prVar2 = (regex_error *)__cxa_allocate_exception(0x18);
                    /* try { // try from 001917a0 to 001917a7 has its CatchHandler @ 001917d0 */
  std::__ndk1::regex_error::regex_error(prVar2,0xb);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* WARNING: Subroutine does not return */
    __cxa_throw(prVar2,PTR_typeinfo_001ba1a8,PTR__regex_error_001ba1a0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001917f8  FUN_001917f8 =====

void FUN_001917f8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)param_1[1];
  *param_1 = &PTR_FUN_001b8388;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00191864  FUN_00191864 =====

void FUN_00191864(locale *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  std::__ndk1::locale::locale(param_1);
                    /* try { // try from 00191888 to 001918ab has its CatchHandler @ 001918e0 */
  uVar2 = std::__ndk1::locale::use_facet((id *)param_1);
  *(undefined8 *)(param_1 + 8) = uVar2;
  uVar2 = std::__ndk1::locale::use_facet((id *)param_1);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00191908  FUN_00191908 =====

void FUN_00191908(long param_1,locale *param_2,byte param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x58);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
  *puVar2 = &PTR_FUN_001b8490;
  puVar2[1] = uVar4;
  std::__ndk1::locale::locale((locale *)(puVar2 + 2),param_2);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  lVar5 = *(long *)(param_2 + 0x30);
  uVar6 = *(undefined8 *)(param_2 + 8);
  uVar8 = *(undefined8 *)(param_2 + 0x20);
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  puVar2[4] = *(undefined8 *)(param_2 + 0x10);
  puVar2[3] = uVar6;
  puVar2[6] = uVar8;
  puVar2[5] = uVar7;
  puVar2[7] = uVar4;
  puVar2[8] = lVar5;
  if (lVar5 != 0) {
    FUN_0015c230(1,lVar5 + 8);
  }
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  lVar5 = *(long *)(param_1 + 0x38);
  *(undefined4 *)(puVar2 + 10) = param_4;
  puVar2[9] = uVar4;
  *(undefined8 **)(lVar5 + 8) = puVar2;
  lVar5 = *(long *)(param_1 + 0x38);
  *(byte *)((long)puVar2 + 0x54) = param_3 & 1;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar5 + 8);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001919e0  FUN_001919e0 =====

void FUN_001919e0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[8];
  *param_1 = &PTR_FUN_001b8490;
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  std::__ndk1::locale::~locale((locale *)(param_1 + 2));
  *param_1 = &PTR_FUN_001b8388;
  if ((long *)param_1[1] == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00191a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[1] + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00191ab0  FUN_00191ab0 =====

void FUN_00191ab0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[8];
  *param_1 = &PTR_FUN_001b8490;
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  std::__ndk1::locale::~locale((locale *)(param_1 + 2));
  *param_1 = &PTR_FUN_001b8388;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00191b64  FUN_00191b64 =====

void FUN_00191b64(long param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 uVar2;
  long lVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  void *local_a8;
  long lStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined1 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar11 = *(undefined8 *)(param_2 + 4);
  local_90 = *(undefined8 *)(param_2 + 6);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_a8 = (void *)0x0;
  lStack_a0 = 0;
  local_98 = 0;
  local_80 = 0;
                    /* try { // try from 00191bc4 to 00191bcf has its CatchHandler @ 00191d10 */
  uStack_88 = local_90;
  FUN_00191d3c(&local_a8,*(int *)(param_1 + 0x2c) + 1,&local_90);
  local_50 = local_80;
  local_68 = 0;
  local_48 = 1;
  uStack_58 = uStack_88;
  local_60 = local_90;
                    /* try { // try from 00191c14 to 00191c23 has its CatchHandler @ 00191d0c */
  local_78 = uVar11;
  uStack_70 = uVar11;
  local_40 = uVar11;
  bVar4 = FUN_00191f40(param_1 + 0x10,*(long *)(param_2 + 4),*(undefined8 *)(param_2 + 6),&local_a8,
                       param_2[0x16] & 0xfff | 0x40,
                       *(char *)(param_2 + 0x17) != '\0' &&
                       *(long *)(param_2 + 4) == *(long *)(param_2 + 2));
  if (*(byte *)(param_1 + 0x54) == (bVar4 & 1)) {
    *(undefined8 *)(param_2 + 0x14) = 0;
    *param_2 = 0xfffffc1f;
LAB_00191cc0:
    if (local_a8 == (void *)0x0) {
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return;
      }
      goto LAB_00191d38;
    }
  }
  else {
    *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(param_1 + 8);
    uVar5 = (lStack_a0 - (long)local_a8 >> 3) * -0x5555555555555555;
    *param_2 = 0xfffffc1e;
    if (uVar5 < 2) goto LAB_00191cc0;
    iVar1 = *(int *)(param_1 + 0x50);
    lVar6 = *(long *)(param_2 + 8);
    uVar7 = 2;
    uVar8 = 1;
    do {
      puVar9 = (undefined8 *)((long)local_a8 + uVar8 * 0x18);
      puVar10 = (undefined8 *)(lVar6 + (ulong)((iVar1 + uVar7) - 2) * 0x18);
      uVar8 = (ulong)uVar7;
      uVar7 = uVar7 + 1;
      uVar11 = *puVar9;
      uVar2 = *(undefined1 *)(puVar9 + 2);
      puVar10[1] = puVar9[1];
      *puVar10 = uVar11;
      *(undefined1 *)(puVar10 + 2) = uVar2;
    } while (uVar8 <= uVar5 && uVar5 - uVar8 != 0);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    operator_delete(local_a8);
    return;
  }
LAB_00191d38:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00191d3c  FUN_00191d3c =====

void FUN_00191d3c(undefined8 *param_1,ulong param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  lVar7 = param_1[2];
  puVar4 = (undefined8 *)*param_1;
  if ((ulong)((lVar7 - (long)puVar4 >> 3) * -0x5555555555555555) < param_2) {
    if (puVar4 != (undefined8 *)0x0) {
      param_1[1] = puVar4;
      operator_delete(puVar4);
      lVar7 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (param_2 < 0xaaaaaaaaaaaaaab) {
      uVar9 = (lVar7 >> 3) * 0x5555555555555556;
      if (uVar9 < param_2 || uVar9 - param_2 == 0) {
        uVar9 = param_2;
      }
      if (0x555555555555554 < (ulong)((lVar7 >> 3) * -0x5555555555555555)) {
        uVar9 = 0xaaaaaaaaaaaaaaa;
      }
      if (uVar9 < 0xaaaaaaaaaaaaaab) {
        puVar5 = (undefined8 *)operator_new(uVar9 * 0x18);
        *param_1 = puVar5;
        param_1[1] = puVar5;
        param_1[2] = puVar5 + uVar9 * 3;
        lVar7 = param_2 * 0x18;
        puVar4 = puVar5 + param_2 * 3;
        do {
          uVar15 = *param_3;
          uVar10 = param_3[2];
          lVar7 = lVar7 + -0x18;
          puVar5[1] = param_3[1];
          *puVar5 = uVar15;
          puVar5[2] = uVar10;
          puVar5 = puVar5 + 3;
        } while (lVar7 != 0);
        goto LAB_00191eec;
      }
    }
    if (*(long *)(lVar3 + 0x28) == lVar6) {
      FUN_00192d68();
    }
  }
  else {
    puVar5 = (undefined8 *)param_1[1];
    lVar7 = (long)puVar5 - (long)puVar4 >> 3;
    uVar8 = lVar7 * -0x5555555555555555;
    uVar9 = uVar8;
    if (param_2 <= uVar8) {
      uVar9 = param_2;
    }
    if (uVar9 != 0) {
      uVar10 = *param_3;
      uVar15 = param_3[1];
      uVar1 = *(undefined1 *)(param_3 + 2);
      if (uVar9 == 1) {
        uVar9 = 1;
        puVar11 = puVar4;
      }
      else {
        uVar12 = uVar9 & 0xfffffffffffffffe;
        puVar13 = puVar4 + 3;
        puVar11 = puVar4 + uVar12 * 3;
        uVar14 = uVar12;
        do {
          puVar13[-3] = uVar10;
          puVar13[-2] = uVar15;
          uVar14 = uVar14 - 2;
          *puVar13 = uVar10;
          puVar13[1] = uVar15;
          *(undefined1 *)(puVar13 + -1) = uVar1;
          *(undefined1 *)(puVar13 + 2) = uVar1;
          puVar13 = puVar13 + 6;
        } while (uVar14 != 0);
        if (uVar9 == uVar12) goto LAB_00191eb8;
        uVar9 = uVar9 & 1;
      }
      do {
        *puVar11 = uVar10;
        puVar11[1] = uVar15;
        uVar9 = uVar9 - 1;
        *(undefined1 *)(puVar11 + 2) = uVar1;
        puVar11 = puVar11 + 3;
      } while (uVar9 != 0);
    }
LAB_00191eb8:
    lVar2 = param_2 + lVar7 * 0x5555555555555555;
    if (param_2 < uVar8 || lVar2 == 0) {
      param_1[1] = puVar4 + param_2 * 3;
    }
    else {
      puVar4 = puVar5 + lVar2 * 3;
      lVar7 = lVar7 * -8 + param_2 * 0x18;
      do {
        uVar15 = param_3[1];
        uVar10 = *param_3;
        lVar7 = lVar7 + -0x18;
        puVar5[2] = param_3[2];
        puVar5[1] = uVar15;
        *puVar5 = uVar10;
        puVar5 = puVar5 + 3;
      } while (lVar7 != 0);
LAB_00191eec:
      param_1[1] = puVar4;
    }
    if (*(long *)(lVar3 + 0x28) == lVar6) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00191f40  FUN_00191f40 =====

undefined4
FUN_00191f40(long param_1,long param_2,long param_3,undefined8 *param_4,uint param_5,byte param_6)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  void *pvVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  long *plVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  int *piVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  void *pvStack_c0;
  void *local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  void *pvStack_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 uStack_88;
  long local_80;
  long lStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar16 = *(long *)(param_1 + 0x28);
  local_f8 = (undefined8 *)0x0;
  local_f0 = (undefined8 *)0x0;
  local_e8 = (undefined8 *)0x0;
  if (lVar16 == 0) {
    uVar13 = 0;
  }
  else {
    local_70 = 0;
    local_e0 = 0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    pvStack_c0 = (void *)0x0;
    local_c8 = 0;
    uStack_b0 = 0;
    local_b8 = (void *)0x0;
    pvStack_a0 = (void *)0x0;
    local_a8 = (void *)0x0;
    uStack_90 = 0;
    local_98 = 0;
    uStack_8b = 0;
    uStack_88 = 0;
                    /* try { // try from 00191fbc to 00191fc7 has its CatchHandler @ 00192344 */
    local_80 = param_3;
    lStack_78 = param_3;
    puVar4 = (undefined8 *)FUN_0019238c(&local_f8,&local_e0);
    local_f0 = puVar4;
    if (local_a8 != (void *)0x0) {
      operator_delete(local_a8);
    }
    if (pvStack_c0 != (void *)0x0) {
      operator_delete(pvStack_c0);
    }
    lVar18 = puVar4[-8];
    *(undefined4 *)(puVar4 + -0xc) = 0;
    puVar4[-0xb] = param_2;
    puVar4[-10] = param_2;
    puVar4[-9] = param_3;
    lVar8 = puVar4[-7] - lVar18 >> 3;
    uVar9 = (ulong)*(uint *)(param_1 + 0x1c);
    bVar3 = uVar9 < (ulong)(lVar8 * -0x5555555555555555);
    lVar8 = uVar9 + lVar8 * 0x5555555555555555;
    if (bVar3 || lVar8 == 0) {
      if (bVar3) {
        puVar4[-7] = lVar18 + uVar9 * 0x18;
      }
    }
    else {
                    /* try { // try from 0019201c to 0019205f has its CatchHandler @ 00192340 */
      FUN_001925b8(puVar4 + -8,lVar8,&local_80);
    }
    lVar18 = puVar4[-5];
    uVar9 = (ulong)*(uint *)(param_1 + 0x20);
    uVar10 = puVar4[-4] - lVar18 >> 4;
    if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
      if (uVar9 < uVar10) {
        puVar4[-4] = lVar18 + uVar9 * 0x10;
      }
    }
    else {
      FUN_001927c8(puVar4 + -5,uVar9 - uVar10);
    }
    puVar4[-2] = lVar16;
    uVar17 = 1;
    *(uint *)(puVar4 + -1) = param_5;
    *(byte *)((long)puVar4 + -4) = param_6 & 1;
    do {
      if (((uVar17 & 0xfff) == 0) && ((int)param_3 - (int)param_2 <= (int)(uVar17 >> 0xc))) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00192328 to 0019232b has its CatchHandler @ 00192364 */
          FUN_0019295c();
LAB_0019232c:
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0019233c to 0019233f has its CatchHandler @ 00192348 */
            uVar7 = FUN_00192c24();
                    /* catch() { ... } // from try @ 0019201c with catch @ 00192340 */
                    /* catch() { ... } // from try @ 00192328 with catch @ 00192364 */
            FUN_00192ca4(&local_f8);
            if (*(long *)(lVar2 + 0x28) == local_68) {
              FUN_00157e74(uVar7);
            }
          }
        }
        goto LAB_00192388;
      }
      plVar5 = (long *)puVar4[-2];
      piVar15 = (int *)(puVar4 + -0xc);
      if (plVar5 != (long *)0x0) {
                    /* try { // try from 001920d4 to 001920db has its CatchHandler @ 00192360 */
        (**(code **)(*plVar5 + 0x10))(plVar5,piVar15);
      }
      puVar14 = local_f0;
      iVar1 = *piVar15;
      if (iVar1 == -0x3e2 || iVar1 + 0x3e2 < 0 != SCARRY4(iVar1,0x3e2)) {
        if (iVar1 + 0x3e3U < 2) goto LAB_0019209c;
        if (iVar1 != -1000) goto LAB_0019232c;
        lVar16 = puVar4[-10];
        if ((((param_5 >> 5 & 1) != 0) && (lVar16 == param_2)) ||
           (((param_5 >> 0xc & 1) != 0 && (lVar16 != param_3)))) goto LAB_00192128;
        plVar5 = (long *)*param_4;
        *plVar5 = param_2;
        plVar5[1] = lVar16;
        *(undefined1 *)(plVar5 + 2) = 1;
        lVar16 = puVar4[-7] - puVar4[-8];
        if (lVar16 != 0) {
          uVar10 = 1;
          uVar9 = (lVar16 >> 3) * -0x5555555555555555;
          puVar11 = (undefined1 *)(puVar4[-8] + 0x10);
          do {
            plVar12 = plVar5 + uVar10 * 3;
            lVar18 = *(long *)(puVar11 + -0x10);
            bVar3 = uVar10 <= uVar9;
            lVar16 = uVar9 - uVar10;
            uVar10 = (ulong)((int)uVar10 + 1);
            plVar12[1] = *(long *)(puVar11 + -8);
            *plVar12 = lVar18;
            *(undefined1 *)(plVar12 + 2) = *puVar11;
            puVar11 = puVar11 + 0x18;
          } while (bVar3 && lVar16 != 0);
        }
        uVar13 = 1;
        puVar4 = local_f8;
        goto joined_r0x00192310;
      }
      if (iVar1 == -0x3e1) {
LAB_00192128:
        pvVar6 = (void *)local_f0[-5];
        if (pvVar6 != (void *)0x0) {
          local_f0[-4] = pvVar6;
          operator_delete(pvVar6);
        }
        pvVar6 = (void *)puVar14[-8];
        if (pvVar6 != (void *)0x0) {
          puVar14[-7] = pvVar6;
          operator_delete(pvVar6);
        }
        local_f0 = puVar14 + -0xc;
      }
      else if (iVar1 == -0x3e0) {
                    /* try { // try from 00192158 to 00192163 has its CatchHandler @ 0019234c */
        FUN_00192a5c(&local_e0,piVar15);
                    /* try { // try from 00192170 to 00192207 has its CatchHandler @ 00192350 */
        (**(code **)(*(long *)puVar4[-2] + 0x18))((long *)puVar4[-2],1,piVar15);
        (**(code **)(*(long *)CONCAT35(uStack_8b,uStack_90) + 0x18))
                  ((long *)CONCAT35(uStack_8b,uStack_90),0,&local_e0);
        if (local_f0 < local_e8) {
          local_f0[4] = 0;
          local_f0[5] = 0;
          local_f0[6] = 0;
          local_f0[7] = 0;
          local_f0[8] = 0;
          local_f0[9] = 0;
          local_f0[1] = uStack_d8;
          *local_f0 = CONCAT44(uStack_dc,local_e0);
          local_f0[3] = local_c8;
          local_f0[2] = uStack_d0;
          local_f0[5] = local_b8;
          local_f0[4] = pvStack_c0;
          pvStack_c0 = (void *)0x0;
          local_b8 = (void *)0x0;
          local_f0[6] = uStack_b0;
          local_f0[8] = pvStack_a0;
          local_f0[7] = local_a8;
          uStack_b0 = 0;
          local_a8 = (void *)0x0;
          local_f0[9] = local_98;
          pvStack_a0 = (void *)0x0;
          local_98 = 0;
          *(ulong *)((long)local_f0 + 0x55) = CONCAT53(uStack_88,uStack_8b);
          local_f0[10] = CONCAT35(uStack_8b,uStack_90);
          local_f0 = local_f0 + 0xc;
        }
        else {
          local_f0 = (undefined8 *)FUN_0019238c(&local_f8,&local_e0);
          if (local_a8 != (void *)0x0) {
            pvStack_a0 = local_a8;
            operator_delete(local_a8);
          }
        }
        if (pvStack_c0 != (void *)0x0) {
          local_b8 = pvStack_c0;
          operator_delete(pvStack_c0);
        }
      }
      else if (iVar1 != -0x3df) goto LAB_0019232c;
LAB_0019209c:
      uVar17 = uVar17 + 1;
      puVar4 = local_f0;
    } while (local_f8 != local_f0);
    uVar13 = 0;
    puVar4 = local_f8;
    puVar14 = local_f0;
joined_r0x00192310:
    local_f8 = puVar4;
    local_f0 = puVar14;
    if (puVar4 != (undefined8 *)0x0) {
      for (; puVar14 != puVar4; puVar14 = puVar14 + -0xc) {
        pvVar6 = (void *)puVar14[-5];
        if (pvVar6 != (void *)0x0) {
          puVar14[-4] = pvVar6;
          operator_delete(pvVar6);
        }
        pvVar6 = (void *)puVar14[-8];
        if (pvVar6 != (void *)0x0) {
          puVar14[-7] = pvVar6;
          operator_delete(pvVar6);
        }
      }
      operator_delete(puVar4);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return uVar13;
  }
LAB_00192388:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019238c  FUN_0019238c =====

undefined8 * FUN_0019238c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  void *pvVar12;
  void *pvVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  lVar6 = param_1[1] - *param_1 >> 5;
  uVar1 = lVar6 * -0x5555555555555555 + 1;
  if (uVar1 < 0x2aaaaaaaaaaaaab) {
    lVar8 = param_1[2] - *param_1 >> 5;
    uVar10 = lVar8 * 0x5555555555555556;
    if (uVar10 < uVar1 || uVar10 - uVar1 == 0) {
      uVar10 = uVar1;
    }
    if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar10 = 0x2aaaaaaaaaaaaaa;
    }
    if (uVar10 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (0x2aaaaaaaaaaaaaa < uVar10) goto LAB_001925a0;
      pvVar4 = operator_new(uVar10 * 0x60);
    }
    uVar14 = *param_2;
    uVar17 = param_2[3];
    uVar15 = param_2[2];
    puVar7 = (undefined8 *)((long)pvVar4 + lVar6 * 0x20);
    uVar9 = param_2[6];
    uVar11 = param_2[9];
    uVar16 = param_2[10];
    pvVar4 = (void *)((long)pvVar4 + uVar10 * 0x60);
    puVar7[1] = param_2[1];
    *puVar7 = uVar14;
    puVar7[3] = uVar17;
    puVar7[2] = uVar15;
    uVar15 = param_2[5];
    uVar14 = param_2[4];
    puVar7[6] = uVar9;
    uVar9 = *(undefined8 *)((long)param_2 + 0x55);
    param_2[4] = 0;
    param_2[5] = 0;
    puVar7[5] = uVar15;
    puVar7[4] = uVar14;
    uVar15 = param_2[8];
    uVar14 = param_2[7];
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    puVar2 = puVar7 + 0xc;
    *(undefined8 *)((long)puVar7 + 0x55) = uVar9;
    pvVar13 = (void *)*param_1;
    pvVar12 = (void *)param_1[1];
    puVar7[9] = 0;
    puVar7[10] = uVar16;
    puVar7[9] = uVar11;
    puVar7[8] = uVar15;
    puVar7[7] = uVar14;
    if (pvVar12 == pvVar13) {
      *param_1 = (long)puVar7;
      param_1[1] = (long)puVar2;
      param_1[2] = (long)pvVar4;
    }
    else {
      lVar6 = 0;
      do {
        lVar8 = lVar6 + -0x60;
        uVar16 = *(undefined8 *)((long)pvVar12 + lVar6 + -0x58);
        uVar11 = *(undefined8 *)((long)pvVar12 + lVar6 + -0x60);
        uVar14 = *(undefined8 *)((long)pvVar12 + lVar6 + -0x48);
        uVar9 = *(undefined8 *)((long)pvVar12 + lVar6 + -0x50);
        *(undefined8 *)((long)puVar7 + lVar6 + -0x38) = 0;
        *(undefined8 *)((long)puVar7 + lVar6 + -0x30) = 0;
        *(undefined8 *)((long)puVar7 + lVar6 + -0x58) = uVar16;
        *(undefined8 *)((long)puVar7 + lVar6 + -0x60) = uVar11;
        *(undefined8 *)((long)puVar7 + lVar6 + -0x48) = uVar14;
        *(undefined8 *)((long)puVar7 + lVar6 + -0x50) = uVar9;
        uVar11 = *(undefined8 *)((long)pvVar12 + lVar6 + -0x40);
        *(undefined8 *)((long)puVar7 + lVar6 + -0x38) =
             *(undefined8 *)((long)pvVar12 + lVar6 + -0x38);
        *(undefined8 *)((long)puVar7 + lVar6 + -0x40) = uVar11;
        *(undefined8 *)((long)puVar7 + lVar6 + -0x30) =
             *(undefined8 *)((long)pvVar12 + lVar6 + -0x30);
        *(undefined8 *)((long)pvVar12 + lVar6 + -0x40) = 0;
        *(undefined8 *)((long)pvVar12 + lVar6 + -0x38) = 0;
        *(undefined8 *)((long)pvVar12 + lVar6 + -0x30) = 0;
        *(undefined8 *)((long)puVar7 + lVar6 + -0x20) = 0;
        *(undefined8 *)((long)puVar7 + lVar6 + -0x18) = 0;
        uVar11 = *(undefined8 *)((long)pvVar12 + lVar6 + -0x28);
        *(undefined8 *)((long)puVar7 + lVar6 + -0x20) =
             *(undefined8 *)((long)pvVar12 + lVar6 + -0x20);
        *(undefined8 *)((long)puVar7 + lVar6 + -0x28) = uVar11;
        *(undefined8 *)((long)puVar7 + lVar6 + -0x18) =
             *(undefined8 *)((long)pvVar12 + lVar6 + -0x18);
        *(undefined8 *)((long)pvVar12 + lVar6 + -0x28) = 0;
        *(undefined8 *)((long)pvVar12 + lVar6 + -0x20) = 0;
        *(undefined8 *)((long)pvVar12 + lVar6 + -0x18) = 0;
        uVar11 = *(undefined8 *)((long)pvVar12 + lVar6 + -0x10);
        *(undefined8 *)((long)puVar7 + lVar6 + -0xb) = *(undefined8 *)((long)pvVar12 + lVar6 + -0xb)
        ;
        *(undefined8 *)((long)puVar7 + lVar6 + -0x10) = uVar11;
        lVar6 = lVar8;
      } while ((void *)((long)pvVar12 + lVar8) != pvVar13);
      pvVar12 = (void *)*param_1;
      pvVar13 = (void *)param_1[1];
      *param_1 = (long)puVar7 + lVar8;
      param_1[1] = (long)puVar2;
      param_1[2] = (long)pvVar4;
      for (; pvVar13 != pvVar12; pvVar13 = (void *)((long)pvVar13 + -0x60)) {
        pvVar4 = *(void **)((long)pvVar13 + -0x28);
        if (pvVar4 != (void *)0x0) {
          *(void **)((long)pvVar13 + -0x20) = pvVar4;
          operator_delete(pvVar4);
        }
        pvVar4 = *(void **)((long)pvVar13 + -0x40);
        if (pvVar4 != (void *)0x0) {
          *(void **)((long)pvVar13 + -0x38) = pvVar4;
          operator_delete(pvVar4);
        }
      }
    }
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
    if (*(long *)(lVar3 + 0x28) == lVar5) {
      return puVar2;
    }
  }
  else {
    if (*(long *)(lVar3 + 0x28) != lVar5) goto LAB_001925b4;
    FUN_00192dd8();
LAB_001925a0:
    if (*(long *)(lVar3 + 0x28) == lVar5) {
      FUN_0015d614();
    }
  }
LAB_001925b4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001925b8  FUN_001925b8 =====

void FUN_001925b8(long *param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar12 = (undefined8 *)param_1[1];
  if ((ulong)((param_1[2] - (long)puVar12 >> 3) * -0x5555555555555555) < param_2) {
    lVar7 = (long)puVar12 - *param_1 >> 3;
    uVar2 = lVar7 * -0x5555555555555555 + param_2;
    if (0xaaaaaaaaaaaaaaa < uVar2) {
      if (*(long *)(lVar3 + 0x28) != lVar5) goto LAB_001927c4;
      FUN_00192d68();
LAB_001927b0:
      if (*(long *)(lVar3 + 0x28) == lVar5) {
        FUN_0015d614();
      }
      goto LAB_001927c4;
    }
    lVar6 = param_1[2] - *param_1 >> 3;
    uVar9 = lVar6 * 0x5555555555555556;
    if (uVar9 < uVar2 || uVar9 - uVar2 == 0) {
      uVar9 = uVar2;
    }
    if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
      uVar9 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar9 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar9) goto LAB_001927b0;
      pvVar4 = operator_new(uVar9 * 0x18);
    }
    puVar8 = (undefined8 *)((long)pvVar4 + lVar7 * 8);
    lVar7 = param_2 * 0x18;
    puVar11 = puVar8 + param_2 * 3;
    puVar10 = puVar8;
    do {
      uVar14 = param_3[1];
      uVar13 = *param_3;
      lVar7 = lVar7 + -0x18;
      puVar10[2] = param_3[2];
      puVar10[1] = uVar14;
      *puVar10 = uVar13;
      puVar10 = puVar10 + 3;
    } while (lVar7 != 0);
    puVar10 = (undefined8 *)*param_1;
    if (puVar12 != puVar10) {
      do {
        puVar1 = puVar12 + -1;
        uVar14 = puVar12[-2];
        uVar13 = puVar12[-3];
        puVar12 = puVar12 + -3;
        puVar8[-1] = *puVar1;
        puVar8[-2] = uVar14;
        puVar8[-3] = uVar13;
        puVar8 = puVar8 + -3;
      } while (puVar12 != puVar10);
      puVar12 = (undefined8 *)*param_1;
    }
    *param_1 = (long)puVar8;
    param_1[1] = (long)puVar11;
    param_1[2] = (long)((long)pvVar4 + uVar9 * 0x18);
    if (puVar12 != (undefined8 *)0x0) {
      if (*(long *)(lVar3 + 0x28) == lVar5) {
        operator_delete(puVar12);
        return;
      }
      goto LAB_001927c4;
    }
  }
  else {
    puVar11 = puVar12;
    if (param_2 != 0) {
      puVar11 = puVar12 + param_2 * 3;
      lVar7 = param_2 * 0x18;
      do {
        uVar14 = param_3[1];
        uVar13 = *param_3;
        lVar7 = lVar7 + -0x18;
        puVar12[2] = param_3[2];
        puVar12[1] = uVar14;
        *puVar12 = uVar13;
        puVar12 = puVar12 + 3;
      } while (lVar7 != 0);
    }
    param_1[1] = (long)puVar11;
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
LAB_001927c4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001927c8  FUN_001927c8 =====

void FUN_001927c8(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  void *__s;
  long lVar9;
  void *__s_00;
  void *pvVar10;
  undefined8 uVar11;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  __s = (void *)param_1[1];
  if ((ulong)(param_1[2] - (long)__s >> 4) < param_2) {
    pvVar10 = (void *)*param_1;
    lVar9 = (long)__s - (long)pvVar10 >> 4;
    uVar1 = lVar9 + param_2;
    if (uVar1 >> 0x3c != 0) {
      if (*(long *)(lVar3 + 0x28) != lVar6) goto LAB_00192958;
      FUN_00192da0();
LAB_00192944:
      if (*(long *)(lVar3 + 0x28) == lVar6) {
        FUN_0015d614();
      }
      goto LAB_00192958;
    }
    uVar7 = param_1[2] - (long)pvVar10;
    uVar8 = (long)uVar7 >> 3;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffef < uVar7) {
      uVar8 = 0xfffffffffffffff;
    }
    if (uVar8 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (uVar8 >> 0x3c != 0) goto LAB_00192944;
      pvVar5 = operator_new(uVar8 << 4);
    }
    __s_00 = (void *)((long)pvVar5 + lVar9 * 0x10);
    memset(__s_00,0,param_2 * 0x10);
    pvVar2 = (void *)((long)__s_00 + param_2 * 0x10);
    if (__s != pvVar10) {
      do {
        puVar4 = (undefined8 *)((long)__s + -8);
        uVar11 = *(undefined8 *)((long)__s + -0x10);
        __s = (void *)((long)__s + -0x10);
        *(undefined8 *)((long)__s_00 + -8) = *puVar4;
        *(undefined8 *)((long)__s_00 + -0x10) = uVar11;
        __s_00 = (void *)((long)__s_00 + -0x10);
      } while (__s != pvVar10);
      __s = (void *)*param_1;
    }
    *param_1 = __s_00;
    param_1[1] = pvVar2;
    param_1[2] = (void *)((long)pvVar5 + uVar8 * 0x10);
    if (__s != (void *)0x0) {
      if (*(long *)(lVar3 + 0x28) == lVar6) {
        operator_delete(__s);
        return;
      }
      goto LAB_00192958;
    }
  }
  else {
    if (param_2 != 0) {
      memset(__s,0,param_2 * 0x10);
      __s = (void *)((long)__s + param_2 * 0x10);
    }
    param_1[1] = __s;
  }
  if (*(long *)(lVar3 + 0x28) == lVar6) {
    return;
  }
LAB_00192958:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019295c  FUN_0019295c =====

void FUN_0019295c(void)

{
  long lVar1;
  regex_error *prVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  prVar2 = (regex_error *)__cxa_allocate_exception(0x18);
                    /* try { // try from 00192984 to 0019298b has its CatchHandler @ 001929b4 */
  std::__ndk1::regex_error::regex_error(prVar2,0xc);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* WARNING: Subroutine does not return */
    __cxa_throw(prVar2,PTR_typeinfo_001ba1a8,PTR__regex_error_001ba1a0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001929dc  FUN_001929dc =====

void FUN_001929dc(long param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  pvVar2 = *(void **)(param_1 + 0x38);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x40) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0x20);
  if (pvVar2 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    *(void **)(param_1 + 0x28) = pvVar2;
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      operator_delete(pvVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00192a5c  FUN_00192a5c =====

void FUN_00192a5c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 *unaff_x24;
  size_t __n;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  uVar9 = param_2[1];
  uVar8 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[1] = uVar9;
  *param_1 = uVar8;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  pvVar5 = (void *)param_2[4];
  uVar1 = param_2[5] - (long)pvVar5;
  if (uVar1 == 0) {
LAB_00192b1c:
    unaff_x24 = param_1 + 7;
    *unaff_x24 = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    pvVar5 = (void *)param_2[7];
    uVar1 = param_2[8] - (long)pvVar5;
    if (uVar1 != 0) {
      if ((long)uVar1 < 0) goto LAB_00192bb8;
                    /* try { // try from 00192b38 to 00192b3f has its CatchHandler @ 00192bcc */
      pvVar3 = operator_new(uVar1);
      param_1[7] = pvVar3;
      param_1[8] = pvVar3;
      param_1[9] = (long)pvVar3 + uVar1;
      memcpy(pvVar3,pvVar5,uVar1 & 0x7ffffffffffffff0);
      param_1[8] = (long)pvVar3 + (uVar1 & 0x7ffffffffffffff0);
    }
    if (*(long *)(lVar2 + 0x28) == lVar4) {
      uVar6 = param_2[10];
      *(undefined8 *)((long)param_1 + 0x55) = *(undefined8 *)((long)param_2 + 0x55);
      param_1[10] = uVar6;
      return;
    }
  }
  else {
    if ((ulong)(((long)uVar1 >> 3) * -0x5555555555555555) < 0xaaaaaaaaaaaaaab) {
                    /* try { // try from 00192ad0 to 00192ad7 has its CatchHandler @ 00192bf0 */
      pvVar3 = operator_new(uVar1);
      param_1[4] = pvVar3;
      param_1[5] = pvVar3;
      __n = ((uVar1 - 0x18) / 0x18) * 0x18 + 0x18;
      param_1[6] = (long)pvVar3 + uVar1;
      memcpy(pvVar3,pvVar5,__n);
      param_1[5] = (long)pvVar3 + __n;
      goto LAB_00192b1c;
    }
    if (*(long *)(lVar2 + 0x28) != lVar4) goto LAB_00192c20;
                    /* try { // try from 00192bb4 to 00192bb7 has its CatchHandler @ 00192bf0 */
    FUN_00192d68();
LAB_00192bb8:
    if (*(long *)(lVar2 + 0x28) == lVar4) {
                    /* try { // try from 00192bc8 to 00192bcb has its CatchHandler @ 00192bcc */
      uVar6 = FUN_00192da0();
                    /* catch() { ... } // from try @ 00192b38 with catch @ 00192bcc
                       catch() { ... } // from try @ 00192bc8 with catch @ 00192bcc */
      pvVar5 = (void *)*unaff_x24;
      if (pvVar5 != (void *)0x0) {
        param_1[8] = pvVar5;
        operator_delete(pvVar5);
      }
      pvVar5 = (void *)param_1[4];
      if (pvVar5 != (void *)0x0) {
        param_1[5] = pvVar5;
        operator_delete(pvVar5);
      }
      if (*(long *)(lVar2 + 0x28) == lVar4) {
        FUN_00157e74(uVar6);
      }
    }
  }
LAB_00192c20:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00192c24  FUN_00192c24 =====

void FUN_00192c24(void)

{
  long lVar1;
  regex_error *prVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  prVar2 = (regex_error *)__cxa_allocate_exception(0x18);
                    /* try { // try from 00192c4c to 00192c53 has its CatchHandler @ 00192c7c */
  std::__ndk1::regex_error::regex_error(prVar2,0x10);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* WARNING: Subroutine does not return */
    __cxa_throw(prVar2,PTR_typeinfo_001ba1a8,PTR__regex_error_001ba1a0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00192ca4  FUN_00192ca4 =====

void FUN_00192ca4(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  pvVar4 = (void *)*param_1;
  if (pvVar4 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    pvVar5 = (void *)param_1[1];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        pvVar2 = *(void **)((long)pvVar5 + -0x28);
        if (pvVar2 != (void *)0x0) {
          *(void **)((long)pvVar5 + -0x20) = pvVar2;
          operator_delete(pvVar2);
        }
        pvVar2 = *(void **)((long)pvVar5 + -0x40);
        if (pvVar2 != (void *)0x0) {
          *(void **)((long)pvVar5 + -0x38) = pvVar2;
          operator_delete(pvVar2);
        }
        pvVar5 = (void *)((long)pvVar5 + -0x60);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)*param_1;
    }
    param_1[1] = pvVar4;
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      operator_delete(pvVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00192d68  FUN_00192d68 =====

void FUN_00192d68(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_0015d71c("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00192da0  FUN_00192da0 =====

void FUN_00192da0(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_0015d71c("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00192dd8  FUN_00192dd8 =====

void FUN_00192dd8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_0015d71c("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00192e10  FUN_00192e10 =====

void FUN_00192e10(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_001b8448;
  std::__ndk1::locale::~locale((locale *)(param_1 + 2));
  *param_1 = &PTR_FUN_001b8388;
  if ((long *)param_1[1] == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x00192e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[1] + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00192ea0  FUN_00192ea0 =====

void FUN_00192ea0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_001b8448;
  std::__ndk1::locale::~locale((locale *)(param_1 + 2));
  *param_1 = &PTR_FUN_001b8388;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00192f18  FUN_00192f18 =====

void FUN_00192f18(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined4 uVar12;
  
  lVar4 = tpidr_el0;
  lVar7 = *(long *)(lVar4 + 0x28);
  pbVar8 = *(byte **)(param_2 + 2);
  pbVar11 = *(byte **)(param_2 + 6);
  if (pbVar8 != pbVar11) {
    pbVar10 = *(byte **)(param_2 + 4);
    if (pbVar10 == pbVar11) {
      if ((*(byte *)(param_2 + 0x16) >> 3 & 1) == 0) {
        bVar2 = pbVar11[-1];
joined_r0x00192fb8:
        if (((ulong)bVar2 == 0x5f) ||
           ((-1 < (char)bVar2 &&
            ((*(ulong *)(*(long *)(*(long *)(param_1 + 0x18) + 0x10) + (ulong)bVar2 * 8) & 0x60) !=
             0)))) {
          bVar5 = true;
          goto LAB_0019301c;
        }
      }
    }
    else {
      if ((pbVar10 != pbVar8) || (((uint)param_2[0x16] >> 7 & 1) != 0)) {
        bVar3 = pbVar10[-1];
        bVar2 = *pbVar10;
        if (((ulong)bVar3 == 0x5f) ||
           ((-1 < (char)bVar3 &&
            ((*(ulong *)(*(long *)(*(long *)(param_1 + 0x18) + 0x10) + (ulong)bVar3 * 8) & 0x60) !=
             0)))) {
          iVar9 = 1;
          if (bVar2 != 0x5f) goto LAB_00192ff0;
LAB_00193008:
          iVar6 = 1;
        }
        else {
          iVar9 = 0;
          if (bVar2 == 0x5f) goto LAB_00193008;
LAB_00192ff0:
          if ((-1 < (char)bVar2) &&
             ((*(ulong *)(*(long *)(*(long *)(param_1 + 0x18) + 0x10) + (ulong)bVar2 * 8) & 0x60) !=
              0)) goto LAB_00193008;
          iVar6 = 0;
        }
        bVar5 = iVar9 != iVar6;
        goto LAB_0019301c;
      }
      if (((uint)param_2[0x16] >> 2 & 1) == 0) {
        bVar2 = *pbVar8;
        goto joined_r0x00192fb8;
      }
    }
  }
  bVar5 = false;
LAB_0019301c:
  bVar5 = (bool)*(char *)(param_1 + 0x28) == bVar5;
  uVar12 = 0xfffffc1e;
  if (bVar5) {
    uVar12 = 0xfffffc1f;
  }
  uVar1 = 0;
  if (!bVar5) {
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  *param_2 = uVar12;
  *(undefined8 *)(param_2 + 0x14) = uVar1;
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019305c  FUN_0019305c =====

void FUN_0019305c(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001930a8  FUN_001930a8 =====

void FUN_001930a8(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long **)(param_1 + 0x18) == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001930e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019310c  FUN_0019310c =====

void FUN_0019310c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_001ba198) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0019315c  FUN_0019315c =====

void FUN_0019315c(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00193194  FUN_00193194 =====

void FUN_00193194(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)param_1[1];
  *param_1 = &PTR_FUN_001b8388;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00193200  FUN_00193200 =====

void FUN_00193200(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)param_1[1];
  *param_1 = &PTR_FUN_001b8388;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019326c  FUN_0019326c =====

void FUN_0019326c(long param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *param_2 = 0xfffffc1e;
  *(undefined8 *)(param_2 + 0x14) = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001932b4  FUN_001932b4 =====

void FUN_001932b4(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001932ec  FUN_001932ec =====

void FUN_001932ec(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = 0xfffffc18;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019332c  FUN_0019332c =====

void FUN_0019332c(long param_1,long param_2,long param_3,long *param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(param_1 + 0x1c);
  plVar8 = param_4 + 3;
  *plVar8 = param_3;
  param_4[4] = param_3;
  if ((param_5 & 0x80) != 0) {
    param_5 = param_5 & 0xffa;
  }
  *(undefined1 *)(param_4 + 5) = 0;
  FUN_00191d3c(param_4,iVar1 + 1,plVar8);
  param_4[6] = param_2;
  param_4[7] = param_2;
  *(undefined1 *)(param_4 + 8) = 0;
  param_4[10] = param_4[4];
  param_4[9] = *plVar8;
  *(char *)(param_4 + 0xb) = (char)param_4[5];
  if ((param_5 >> 0xb & 1) == 0) {
    param_4[0xd] = param_2;
  }
  *(undefined1 *)(param_4 + 0xc) = 1;
  if ((*(ushort *)(param_1 + 0x18) & 0x1f0) == 0) {
    uVar3 = FUN_00191f40(param_1,param_2,param_3,param_4,param_5,(param_5 & 0x800) == 0);
  }
  else if (*(int *)(param_1 + 0x1c) == 0) {
    uVar3 = FUN_00193948(param_1,param_2,param_3,param_4,param_5,(param_5 & 0x800) == 0);
  }
  else {
    uVar3 = FUN_001946ac(param_1,param_2,param_3,param_4,param_5,(param_5 & 0x800) == 0);
  }
  if ((uVar3 & 1) == 0) {
    if ((param_2 != param_3) && ((param_5 >> 6 & 1) == 0)) {
      for (param_2 = param_2 + 1; param_2 != param_3; param_2 = param_2 + 1) {
        FUN_00191d3c(param_4,(param_4[1] - *param_4 >> 3) * -0x5555555555555555,plVar8);
        if ((*(ushort *)(param_1 + 0x18) & 0x1f0) == 0) {
          uVar3 = FUN_00191f40(param_1,param_2,param_3,param_4,param_5 | 0x80,0);
        }
        else if (*(int *)(param_1 + 0x1c) == 0) {
          uVar3 = FUN_00193948(param_1,param_2,param_3,param_4,param_5 | 0x80,0);
        }
        else {
          uVar3 = FUN_001946ac(param_1,param_2,param_3,param_4,param_5 | 0x80,0);
        }
        if ((uVar3 & 1) != 0) goto LAB_00193448;
        FUN_00191d3c(param_4,(param_4[1] - *param_4 >> 3) * -0x5555555555555555,plVar8);
      }
    }
    uVar4 = 0;
    param_4[1] = *param_4;
  }
  else {
LAB_00193448:
    uVar4 = 1;
    if ((long *)param_4[1] != (long *)*param_4) {
      plVar8 = (long *)*param_4;
    }
    lVar7 = *plVar8;
    param_4[7] = lVar7;
    lVar6 = plVar8[1];
    *(bool *)(param_4 + 8) = param_4[6] != lVar7;
    param_4[9] = lVar6;
    *(bool *)(param_4 + 0xb) = lVar6 != param_4[10];
  }
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 001935ac  FUN_001935ac =====

void FUN_001935ac(long *param_1,long param_2,long param_3,long *param_4,ulong param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  bool bVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long local_70;
  
  lVar4 = tpidr_el0;
  lVar7 = *(long *)(lVar4 + 0x28);
  lVar14 = *param_4;
  lVar12 = param_4[1];
  lVar19 = param_4[6];
  puVar16 = (undefined8 *)*param_1;
  puVar18 = (undefined8 *)param_1[1];
  lVar17 = lVar12 - lVar14;
  lVar8 = lVar17 >> 3;
  lVar13 = (long)puVar18 - (long)puVar16 >> 3;
  uVar10 = lVar8 * -0x5555555555555555;
  bVar5 = uVar10 < (ulong)(lVar13 * -0x5555555555555555);
  uVar15 = uVar10 + lVar13 * 0x5555555555555555;
  if (bVar5 || uVar15 == 0) {
    if (bVar5) {
      puVar18 = (undefined8 *)((long)puVar16 + lVar17);
      param_1[1] = (long)puVar18;
    }
  }
  else {
    if ((ulong)((param_1[2] - (long)puVar18 >> 3) * -0x5555555555555555) < uVar15) {
      if (uVar10 < 0xaaaaaaaaaaaaaab) {
        lVar13 = param_1[2] - (long)puVar16 >> 3;
        uVar15 = lVar13 * 0x5555555555555556;
        if (uVar15 < uVar10 || uVar15 + lVar8 * 0x5555555555555555 == 0) {
          uVar15 = uVar10;
        }
        if (0x555555555555554 < (ulong)(lVar13 * -0x5555555555555555)) {
          uVar15 = 0xaaaaaaaaaaaaaaa;
        }
        local_70 = lVar4;
        if (uVar15 < 0xaaaaaaaaaaaaaab) {
          pvVar6 = operator_new(uVar15 * 0x18);
          puVar11 = (undefined8 *)((long)pvVar6 + ((long)puVar18 - (long)puVar16));
          puVar9 = (undefined8 *)((long)pvVar6 + lVar17);
          lVar14 = (long)puVar16 + ((lVar12 - (long)puVar18) - lVar14);
          puVar16 = puVar11;
          do {
            *puVar16 = 0;
            puVar16[1] = 0;
            lVar14 = lVar14 + -0x18;
            *(undefined1 *)(puVar16 + 2) = 0;
            puVar16 = puVar16 + 3;
          } while (lVar14 != 0);
          puVar16 = (undefined8 *)*param_1;
          if (puVar18 != puVar16) {
            do {
              puVar1 = puVar18 + -1;
              uVar21 = puVar18[-2];
              uVar20 = puVar18[-3];
              puVar18 = puVar18 + -3;
              puVar11[-1] = *puVar1;
              puVar11[-2] = uVar21;
              puVar11[-3] = uVar20;
              puVar11 = puVar11 + -3;
            } while (puVar18 != puVar16);
            puVar18 = (undefined8 *)*param_1;
          }
          *param_1 = (long)puVar11;
          param_1[1] = (long)puVar9;
          param_1[2] = (long)((long)pvVar6 + uVar15 * 0x18);
          uVar15 = param_5 & 0xffffffff;
          if (puVar18 != (undefined8 *)0x0) {
            operator_delete(puVar18);
            puVar9 = (undefined8 *)param_1[1];
            uVar15 = param_5 & 0xffffffff;
          }
          goto LAB_0019377c;
        }
      }
      else {
        if (*(long *)(lVar4 + 0x28) != lVar7) goto LAB_0019390c;
        FUN_00193910();
      }
      if (*(long *)(local_70 + 0x28) == lVar7) {
        FUN_0015d614();
      }
      goto LAB_0019390c;
    }
    puVar9 = puVar18 + uVar15 * 3;
    lVar14 = lVar13 * -8 + lVar8 * 8;
    do {
      *puVar18 = 0;
      puVar18[1] = 0;
      lVar14 = lVar14 + -0x18;
      *(undefined1 *)(puVar18 + 2) = 0;
      puVar18 = puVar18 + 3;
    } while (lVar14 != 0);
    param_1[1] = (long)puVar9;
    uVar15 = param_5;
LAB_0019377c:
    puVar16 = (undefined8 *)*param_1;
    param_5 = uVar15;
    puVar18 = puVar9;
  }
  if (puVar18 != puVar16) {
    lVar14 = *param_4;
    lVar12 = param_4[1];
    uVar15 = 0;
    plVar2 = param_4 + 3;
    lVar8 = 0;
    do {
      uVar10 = (lVar12 - lVar14 >> 3) * -0x5555555555555555;
      plVar3 = (long *)(lVar14 + lVar8);
      if (uVar10 < uVar15 || uVar10 - uVar15 == 0) {
        plVar3 = plVar2;
      }
      *(long *)((long)puVar16 + lVar8) = param_2 + (*plVar3 - lVar19);
      uVar10 = (param_4[1] - *param_4 >> 3) * -0x5555555555555555;
      plVar3 = (long *)(*param_4 + lVar8);
      if (uVar10 < uVar15 || uVar10 - uVar15 == 0) {
        plVar3 = plVar2;
      }
      *(long *)(*param_1 + lVar8 + 8) = param_2 + (plVar3[1] - lVar19);
      lVar14 = *param_4;
      lVar12 = param_4[1];
      puVar16 = (undefined8 *)*param_1;
      lVar17 = param_1[1];
      uVar10 = (lVar12 - lVar14 >> 3) * -0x5555555555555555;
      bVar5 = uVar10 < uVar15;
      lVar13 = uVar10 - uVar15;
      uVar15 = uVar15 + 1;
      plVar3 = (long *)(lVar14 + lVar8);
      if (bVar5 || lVar13 == 0) {
        plVar3 = plVar2;
      }
      *(char *)((long)puVar16 + lVar8 + 0x10) = (char)plVar3[2];
      lVar8 = lVar8 + 0x18;
    } while (uVar15 < (ulong)((lVar17 - (long)puVar16 >> 3) * -0x5555555555555555));
  }
  param_1[3] = param_3;
  param_1[4] = param_3;
  lVar14 = param_4[6];
  *(undefined1 *)(param_1 + 5) = 0;
  lVar14 = param_2 + (lVar14 - lVar19);
  param_1[6] = lVar14;
  param_1[7] = param_2 + (param_4[7] - lVar19);
  lVar12 = param_4[9];
  *(char *)(param_1 + 8) = (char)param_4[8];
  param_1[9] = param_2 + (lVar12 - lVar19);
  param_1[10] = param_2 + (param_4[10] - lVar19);
  *(char *)(param_1 + 0xb) = (char)param_4[0xb];
  if ((param_5 & 1) == 0) {
    param_1[0xd] = lVar14;
  }
  *(char *)(param_1 + 0xc) = (char)param_4[0xc];
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return;
  }
LAB_0019390c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00193910  FUN_00193910 =====

void FUN_00193910(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_0015d71c("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00193948  FUN_00193948 =====

/* WARNING: Removing unreachable block (ram,0x00193ea8) */
/* WARNING: Removing unreachable block (ram,0x00193ec0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00193948(long param_1,long param_2,long param_3,undefined8 *param_4,uint param_5,
                  byte param_6)

{
  int iVar1;
  size_t __n;
  undefined8 *puVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 *puVar23;
  int *piVar24;
  undefined8 *puVar25;
  undefined8 *unaff_x25;
  undefined8 *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long local_150;
  undefined8 *local_130;
  uint local_114;
  undefined8 *local_110;
  undefined8 *puStack_108;
  undefined8 *local_100;
  undefined8 *puStack_f8;
  ulong local_f0;
  long lStack_e8;
  void *local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined5 uStack_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  long local_78;
  
  puVar2 = (undefined8 *)tpidr_el0;
  local_78 = puVar2[5];
  uVar22 = *(ulong *)(param_1 + 0x28);
  puStack_f8 = (undefined8 *)0x0;
  local_100 = (undefined8 *)0x0;
  lStack_e8 = 0;
  local_f0 = 0;
  puStack_108 = (undefined8 *)0x0;
  local_110 = (undefined8 *)0x0;
  if (uVar22 != 0) {
    local_d8 = (void *)((ulong)local_d8 & 0xffffffff00000000);
    uStack_c8 = 0;
    uStack_d0 = 0;
    local_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_83 = 0;
    uStack_80 = 0;
                    /* try { // try from 001939b8 to 001939bf has its CatchHandler @ 00194638 */
    FUN_00195050(&local_110);
    puVar11 = (undefined8 *)
              (puStack_108[(lStack_e8 + local_f0) / 0x2a] + ((lStack_e8 + local_f0) % 0x2a) * 0x60);
    puVar11[1] = uStack_d0;
    *puVar11 = local_d8;
    puVar11[4] = 0;
    puVar11[5] = 0;
    puVar11[6] = 0;
    puVar11[7] = 0;
    puVar11[3] = uStack_c0;
    puVar11[2] = uStack_c8;
    uStack_b0 = 0;
    uStack_a8 = 0;
    local_b8 = 0;
    puVar11[8] = 0;
    puVar11[9] = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    *(ulong *)((long)puVar11 + 0x55) = CONCAT53(uStack_80,uStack_83);
    puVar11[10] = CONCAT35(uStack_83,uStack_88);
    uVar13 = lStack_e8 + local_f0;
    lStack_e8 = lStack_e8 + 1;
    uVar17 = uVar13 / 0x2a;
    lVar18 = puStack_108[uVar17];
    lVar20 = (uVar13 % 0x2a) * 0x60;
    uVar13 = (ulong)*(uint *)(param_1 + 0x20);
    *(undefined4 *)(lVar18 + lVar20) = 0;
    *(long *)((undefined4 *)(lVar18 + lVar20) + 2) = param_2;
    *(long *)(puStack_108[uVar17] + lVar20 + 0x10) = param_2;
    *(long *)(puStack_108[uVar17] + lVar20 + 0x18) = param_3;
    plVar5 = (long *)(puStack_108[uVar17] + lVar20 + 0x38);
    lVar18 = *plVar5;
    plVar19 = (long *)(puStack_108[uVar17] + lVar20 + 0x40);
    uVar17 = *plVar19 - lVar18 >> 4;
    if (uVar13 < uVar17 || uVar13 - uVar17 == 0) {
      if (uVar13 < uVar17) {
        *plVar19 = lVar18 + uVar13 * 0x10;
      }
    }
    else {
                    /* try { // try from 00193ac4 to 00193ac7 has its CatchHandler @ 00194630 */
      FUN_001927c8(plVar5,uVar13 - uVar17);
    }
    uVar13 = (lStack_e8 + local_f0) - 1;
    bVar3 = false;
    local_114 = 0;
    local_150 = 0;
    uVar17 = uVar13 / 0x2a;
    lVar18 = (uVar13 % 0x2a) * 0x60;
    *(ulong *)(puStack_108[uVar17] + lVar18 + 0x50) = uVar22;
    lVar4 = _UNK_00138c08;
    lVar20 = _DAT_00138c00;
    lVar16 = param_3 - param_2;
    lVar18 = puStack_108[uVar17] + lVar18;
    *(uint *)(lVar18 + 0x58) = param_5;
    *(byte *)(lVar18 + 0x5c) = param_6 & 1;
    do {
      local_114 = local_114 + 1;
      puVar11 = puVar2;
      if (((local_114 & 0xfff) == 0) && ((int)lVar16 <= (int)(local_114 >> 0xc))) {
        if (puVar2[5] == local_78) {
                    /* try { // try from 001945cc to 001945cf has its CatchHandler @ 00194680 */
          FUN_0019295c();
LAB_001945d0:
          if (puVar2[5] == local_78) {
                    /* try { // try from 001945e4 to 001945e7 has its CatchHandler @ 00194658 */
            FUN_00192c24();
LAB_001945e8:
            if (puVar2[5] == local_78) {
                    /* try { // try from 001945fc to 001945ff has its CatchHandler @ 0019463c */
              FUN_0015d614();
LAB_00194600:
              if (puVar11[5] == local_78) {
                    /* try { // try from 00194610 to 00194613 has its CatchHandler @ 00194624 */
                uVar10 = FUN_0015d614();
                    /* catch() { ... } // from try @ 001941d8 with catch @ 00194614 */
                operator_delete(unaff_x25);
                operator_delete(local_130);
                FUN_00195698(&local_110);
                if (puVar2[5] == local_78) {
                  FUN_00157e74(uVar10);
                }
              }
            }
          }
        }
        goto LAB_001946a8;
      }
      uVar22 = (lStack_e8 + local_f0) - 1;
      uVar13 = uVar22 % 0x2a;
      lVar18 = puStack_108[uVar22 / 0x2a];
      piVar24 = (int *)(lVar18 + uVar13 * 0x60);
      plVar19 = (long *)(piVar24 + 0x14);
      plVar5 = (long *)*plVar19;
      if (plVar5 != (long *)0x0) {
                    /* try { // try from 00193be8 to 00193c83 has its CatchHandler @ 00194678 */
        (**(code **)(*plVar5 + 0x10))(plVar5,piVar24);
      }
      puVar25 = local_100;
      puVar23 = puStack_108;
      iVar1 = *piVar24;
      if (iVar1 == -0x3e3 || iVar1 + 0x3e3 < 0 != SCARRY4(iVar1,0x3e3)) {
        if (iVar1 == -1000) {
          lVar12 = *(long *)(lVar18 + uVar13 * 0x60 + 0x10);
          if ((((param_5 >> 5 & 1) != 0) && (lVar12 == param_2)) ||
             (((param_5 >> 0xc & 1) != 0 && (lVar12 != param_3)))) {
LAB_00193cb4:
            uVar13 = (lStack_e8 + local_f0) - 1;
            uVar22 = uVar13 % 0x2a;
            lVar18 = puStack_108[uVar13 / 0x2a];
            pvVar6 = *(void **)(lVar18 + uVar22 * 0x60 + 0x38);
            goto joined_r0x00194344;
          }
          lVar12 = lVar12 - *(long *)(lVar18 + uVar13 * 0x60 + 8);
          if (local_150 <= lVar12) {
            local_150 = lVar12;
          }
          if (!bVar3) {
            local_150 = lVar12;
          }
          if (local_150 == lVar16) {
            puVar11 = puStack_108;
            if (local_100 != puStack_108) {
              uVar22 = lStack_e8 + local_f0;
              plVar5 = puStack_108 + local_f0 / 0x2a;
              uVar13 = uVar22 / 0x2a;
              lVar12 = puStack_108[uVar13];
              lVar18 = *plVar5 + (local_f0 / 0x2a) * -0xfc0 + local_f0 * 0x60;
              puVar11 = local_100;
              while (local_100 = puVar11, lVar18 != lVar12 + uVar13 * -0xfc0 + uVar22 * 0x60) {
                pvVar6 = *(void **)(lVar18 + 0x38);
                if (pvVar6 != (void *)0x0) {
                  *(void **)(lVar18 + 0x40) = pvVar6;
                  operator_delete(pvVar6);
                }
                pvVar6 = *(void **)(lVar18 + 0x20);
                if (pvVar6 != (void *)0x0) {
                  *(void **)(lVar18 + 0x28) = pvVar6;
                  operator_delete(pvVar6);
                }
                lVar18 = lVar18 + 0x60;
                puVar11 = local_100;
                if (lVar18 - *plVar5 == 0xfc0) {
                  plVar5 = plVar5 + 1;
                  lVar18 = *plVar5;
                }
              }
            }
            lStack_e8 = 0;
            lVar18 = (long)puVar11 - (long)puStack_108;
            while (uVar22 = lVar18 >> 3, 2 < uVar22) {
              operator_delete((void *)*puStack_108);
              puStack_108 = puStack_108 + 1;
              lVar18 = (long)local_100 - (long)puStack_108;
            }
            if (uVar22 == 1) {
              local_f0 = 0x15;
            }
            else if (uVar22 == 2) {
              local_f0 = 0x2a;
            }
            bVar3 = true;
            local_150 = lVar16;
          }
          else {
            uVar22 = (lStack_e8 + local_f0) - 1;
            uVar13 = uVar22 % 0x2a;
            lVar18 = puStack_108[uVar22 / 0x2a];
            pvVar6 = *(void **)(lVar18 + uVar13 * 0x60 + 0x38);
            if (pvVar6 != (void *)0x0) {
              *(void **)(lVar18 + uVar13 * 0x60 + 0x40) = pvVar6;
              operator_delete(pvVar6);
            }
            pvVar6 = *(void **)(lVar18 + uVar13 * 0x60 + 0x20);
            if (pvVar6 != (void *)0x0) {
              *(void **)(lVar18 + uVar13 * 0x60 + 0x28) = pvVar6;
              operator_delete(pvVar6);
            }
            lVar18 = lStack_e8 + local_f0;
            lStack_e8 = lStack_e8 + -1;
            lVar12 = 0;
            if ((long)local_100 - (long)puStack_108 != 0) {
              lVar12 = ((long)local_100 - (long)puStack_108 >> 3) * 0x2a + -1;
            }
            if (0x53 < (lVar12 - lVar18) + 1U) {
              operator_delete((void *)local_100[-1]);
              local_100 = local_100 + -1;
            }
            bVar3 = true;
          }
        }
        else if (iVar1 != -999) {
          if (iVar1 != -0x3e3) goto LAB_001945d0;
          if (local_f0 == 0) {
            uVar22 = (long)local_100 - (long)puStack_108 >> 3;
            lVar12 = 0;
            if ((long)local_100 - (long)puStack_108 != 0) {
              lVar12 = uVar22 * 0x2a + -1;
            }
            if ((ulong)(lVar12 - lStack_e8) < 0x2a) {
              if (uVar22 < (ulong)((long)puStack_f8 - (long)local_110 >> 3)) {
                if (puStack_108 == local_110) {
                    /* try { // try from 00194180 to 001941b3 has its CatchHandler @ 00194678 */
                  local_d8 = operator_new(0xfc0);
                  FUN_00195c38(&local_110,&local_d8);
                  local_100 = local_100 + -1;
                  local_d8 = (void *)*local_100;
                  FUN_00195888(&local_110,&local_d8);
                }
                else {
                    /* try { // try from 00193fd8 to 001940e3 has its CatchHandler @ 00194678 */
                  local_d8 = operator_new(0xfc0);
                  FUN_00195a60(&local_110,&local_d8);
                }
                uVar22 = local_f0 + 0x2a;
                local_f0 = 0x15;
                if ((long)local_100 - (long)puStack_108 != 8) {
                  local_f0 = uVar22;
                }
              }
              else {
                uVar22 = (long)puStack_f8 - (long)local_110 >> 2;
                if (puStack_f8 == local_110) {
                  uVar22 = 1;
                }
                if (uVar22 >> 0x3d != 0) goto LAB_00194600;
                puVar7 = (undefined8 *)operator_new(uVar22 << 3);
                    /* try { // try from 001940e4 to 001940eb has its CatchHandler @ 00194628 */
                pvVar6 = operator_new(0xfc0);
                if (uVar22 == 0) {
                    /* try { // try from 001941d8 to 001941df has its CatchHandler @ 00194614 */
                  puVar8 = (undefined8 *)operator_new(8);
                  puVar26 = puVar8 + 1;
                  operator_delete(puVar7);
                  puVar23 = puStack_108;
                  puVar25 = local_100;
                }
                else {
                  puVar26 = puVar7 + uVar22;
                  puVar8 = puVar7;
                }
                puVar7 = puVar8 + 1;
                *puVar8 = pvVar6;
                unaff_x25 = puVar8;
                local_130 = puVar8;
                if (puVar23 != puVar25) {
                  do {
                    puVar8 = unaff_x25;
                    puVar25 = puVar7;
                    puVar9 = local_130;
                    if (puVar7 == puVar26) {
                      if (unaff_x25 < local_130 || (long)unaff_x25 - (long)local_130 == 0) {
                        uVar22 = (long)puVar7 - (long)local_130 >> 2;
                        if ((long)puVar7 - (long)local_130 == 0) {
                          uVar22 = 1;
                        }
                        if (uVar22 >> 0x3d != 0) goto LAB_001945e8;
                    /* try { // try from 001943ec to 001943ef has its CatchHandler @ 00194640 */
                        puVar9 = (undefined8 *)operator_new(uVar22 << 3);
                        uVar17 = uVar22 >> 2;
                        lVar12 = (long)puVar7 - (long)unaff_x25;
                        puVar8 = puVar9 + uVar17;
                        puVar25 = puVar8;
                        if (lVar12 != 0) {
                          puVar25 = (undefined8 *)((long)puVar8 + lVar12);
                          puVar11 = puVar8;
                          if ((0x37 < lVar12 - 8U) &&
                             (0x1f < (long)puVar9 + (uVar17 * 8 - (long)unaff_x25))) {
                            puVar11 = unaff_x25 + 2;
                            puVar7 = puVar9 + uVar17 + 2;
                            uVar17 = (lVar12 - 8U >> 3) + 1;
                            uVar15 = uVar17 & 0x3ffffffffffffffc;
                            uVar21 = uVar15;
                            do {
                              puVar26 = puVar11 + -1;
                              uVar10 = puVar11[-2];
                              uVar28 = puVar11[1];
                              uVar27 = *puVar11;
                              uVar21 = uVar21 - 4;
                              puVar11 = puVar11 + 4;
                              puVar7[-1] = *puVar26;
                              puVar7[-2] = uVar10;
                              puVar7[1] = uVar28;
                              *puVar7 = uVar27;
                              puVar7 = puVar7 + 4;
                            } while (uVar21 != 0);
                            if (uVar17 == uVar15) goto LAB_00194494;
                            unaff_x25 = unaff_x25 + uVar15;
                            puVar11 = puVar8 + uVar15;
                          }
                          do {
                            puVar7 = puVar11 + 1;
                            *puVar11 = *unaff_x25;
                            puVar11 = puVar7;
                            unaff_x25 = unaff_x25 + 1;
                          } while (puVar7 != puVar25);
                        }
LAB_00194494:
                        puVar26 = puVar9 + uVar22;
                        if (local_130 != (undefined8 *)0x0) {
                          operator_delete(local_130);
                        }
                      }
                      else {
                        lVar14 = (long)unaff_x25 - (long)local_130 >> 3;
                        lVar12 = lVar14 + 2;
                        if (lVar14 + 1 < 0 == SCARRY8(lVar14,1)) {
                          lVar12 = lVar14 + 1;
                        }
                        __n = (long)puVar7 - (long)unaff_x25;
                        puVar11 = puVar7;
                        if (__n != 0) {
                          memmove(unaff_x25 + -(lVar12 >> 1),unaff_x25,__n);
                          puVar11 = unaff_x25;
                        }
                        puVar8 = puVar11 + -(lVar12 >> 1);
                        puVar26 = puVar7;
                        puVar25 = (undefined8 *)((long)(unaff_x25 + -(lVar12 >> 1)) + __n);
                      }
                    }
                    local_130 = puVar9;
                    puVar9 = puVar23 + 1;
                    puVar7 = puVar25 + 1;
                    *puVar25 = *puVar23;
                    puVar23 = puVar9;
                    unaff_x25 = puVar8;
                    puVar11 = puVar7;
                  } while (puVar9 != local_100);
                }
                puVar11 = local_110;
                uVar22 = local_f0 + 0x2a;
                local_110 = local_130;
                local_f0 = 0x15;
                if ((long)puVar7 - (long)puVar8 != 8) {
                  local_f0 = uVar22;
                }
                unaff_x25 = puVar8;
                puStack_108 = puVar8;
                local_100 = puVar7;
                puStack_f8 = puVar26;
                if (puVar11 != (undefined8 *)0x0) {
                  operator_delete(puVar11);
                }
              }
            }
            else {
              local_f0 = 0x2a;
              local_100 = local_100 + -1;
              local_d8 = (void *)*local_100;
              FUN_00195888(&local_110,&local_d8);
            }
          }
          lVar14 = puStack_108[local_f0 / 0x2a];
          lVar12 = 0;
          if (local_100 != puStack_108) {
            lVar12 = lVar14 + (local_f0 / 0x2a) * -0xfc0 + local_f0 * 0x60;
          }
          if (lVar12 == lVar14) {
            lVar12 = (puStack_108 + local_f0 / 0x2a)[-1] + 0xfc0;
          }
          lVar18 = lVar18 + uVar13 * 0x60;
          uVar27 = *(undefined8 *)(piVar24 + 2);
          uVar10 = *(undefined8 *)piVar24;
          uVar29 = *(undefined8 *)(piVar24 + 6);
          uVar28 = *(undefined8 *)(piVar24 + 4);
          *(undefined8 *)(lVar12 + -0x38) = 0;
          *(undefined8 *)(lVar12 + -0x30) = 0;
          *(undefined8 *)(lVar12 + -0x40) = 0;
          *(undefined8 *)(lVar12 + -0x58) = uVar27;
          *(undefined8 *)(lVar12 + -0x60) = uVar10;
          *(undefined8 *)(lVar12 + -0x48) = uVar29;
          *(undefined8 *)(lVar12 + -0x50) = uVar28;
          uVar10 = *(undefined8 *)(lVar18 + 0x20);
          *(undefined8 *)(lVar12 + -0x38) = *(undefined8 *)(lVar18 + 0x28);
          *(undefined8 *)(lVar12 + -0x40) = uVar10;
          *(undefined8 *)(lVar12 + -0x30) = *(undefined8 *)(lVar18 + 0x30);
          *(undefined8 *)(lVar18 + 0x20) = 0;
          *(undefined8 *)(lVar18 + 0x28) = 0;
          *(undefined8 *)(lVar18 + 0x30) = 0;
          *(undefined8 *)(lVar12 + -0x28) = 0;
          *(undefined8 *)(lVar12 + -0x20) = 0;
          *(undefined8 *)(lVar12 + -0x18) = 0;
          uVar10 = *(undefined8 *)(lVar18 + 0x38);
          *(undefined8 *)(lVar12 + -0x20) = *(undefined8 *)(lVar18 + 0x40);
          *(undefined8 *)(lVar12 + -0x28) = uVar10;
          *(undefined8 *)(lVar12 + -0x18) = *(undefined8 *)(lVar18 + 0x48);
          *(undefined8 *)(lVar18 + 0x38) = 0;
          *(undefined8 *)(lVar18 + 0x40) = 0;
          uVar10 = *(undefined8 *)((long)piVar24 + 0x55);
          *(undefined8 *)(lVar18 + 0x48) = 0;
          lVar18 = *plVar19;
          *(undefined8 *)(lVar12 + -0xb) = uVar10;
          *(long *)(lVar12 + -0x10) = lVar18;
          local_f0 = local_f0 + lVar20;
          uVar22 = (lStack_e8 + local_f0) % 0x2a;
          lVar18 = puStack_108[(lStack_e8 + local_f0) / 0x2a];
          pvVar6 = *(void **)(lVar18 + uVar22 * 0x60 + 0x38);
          lStack_e8 = lStack_e8 + lVar4;
joined_r0x00194344:
          if (pvVar6 != (void *)0x0) {
            *(void **)(lVar18 + uVar22 * 0x60 + 0x40) = pvVar6;
            operator_delete(pvVar6);
          }
          pvVar6 = *(void **)(lVar18 + uVar22 * 0x60 + 0x20);
          if (pvVar6 != (void *)0x0) {
            *(void **)(lVar18 + uVar22 * 0x60 + 0x28) = pvVar6;
            operator_delete(pvVar6);
          }
          lVar18 = lStack_e8 + local_f0;
          lStack_e8 = lStack_e8 + -1;
          lVar12 = 0;
          if ((long)local_100 - (long)puStack_108 != 0) {
            lVar12 = ((long)local_100 - (long)puStack_108 >> 3) * 0x2a + -1;
          }
          if (0x53 < (lVar12 - lVar18) + 1U) {
            operator_delete((void *)local_100[-1]);
            local_100 = local_100 + -1;
          }
        }
      }
      else if (iVar1 == -0x3e1 || iVar1 + 0x3e1 < 0 != SCARRY4(iVar1,0x3e1)) {
        if (iVar1 != -0x3e2) {
          if (iVar1 == -0x3e1) goto LAB_00193cb4;
          goto LAB_001945d0;
        }
      }
      else if (iVar1 == -0x3e0) {
                    /* try { // try from 00193d80 to 00193d8b has its CatchHandler @ 0019465c */
        FUN_00192a5c(&local_d8,piVar24);
                    /* try { // try from 00193d9c to 00193e0b has its CatchHandler @ 00194664 */
        (**(code **)(*(long *)*plVar19 + 0x18))((long *)*plVar19,1,piVar24);
        (**(code **)(*(long *)CONCAT35(uStack_83,uStack_88) + 0x18))
                  ((long *)CONCAT35(uStack_83,uStack_88),0,&local_d8);
        uVar22 = 0;
        if ((long)local_100 - (long)puStack_108 != 0) {
          uVar22 = ((long)local_100 - (long)puStack_108 >> 3) * 0x2a - 1;
        }
        uVar13 = lStack_e8 + local_f0;
        if (uVar22 == uVar13) {
          FUN_00195050(&local_110);
          uVar13 = lStack_e8 + local_f0;
        }
        puVar11 = (undefined8 *)(puStack_108[uVar13 / 0x2a] + (uVar13 % 0x2a) * 0x60);
        puVar11[1] = uStack_d0;
        *puVar11 = local_d8;
        puVar11[3] = uStack_c0;
        puVar11[2] = uStack_c8;
        puVar11[5] = 0;
        puVar11[6] = 0;
        puVar11[4] = 0;
        puVar11[5] = uStack_b0;
        puVar11[4] = local_b8;
        puVar11[6] = uStack_a8;
        local_b8 = 0;
        uStack_b0 = 0;
        uStack_a8 = 0;
        puVar11[7] = 0;
        puVar11[8] = 0;
        puVar11[9] = 0;
        puVar11[8] = uStack_98;
        puVar11[7] = local_a0;
        puVar11[9] = local_90;
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = 0;
        *(ulong *)((long)puVar11 + 0x55) = CONCAT53(uStack_80,uStack_83);
        puVar11[10] = CONCAT35(uStack_83,uStack_88);
        lStack_e8 = lStack_e8 + 1;
      }
      else if (iVar1 != -0x3df) goto LAB_001945d0;
    } while (lStack_e8 != 0);
    if (bVar3) {
      uVar22 = 1;
      plVar5 = (long *)*param_4;
      *plVar5 = param_2;
      plVar5[1] = param_2 + local_150;
      *(undefined1 *)(plVar5 + 2) = 1;
    }
    else {
      uVar22 = 0;
    }
  }
  lStack_e8 = 0;
  lVar18 = (long)local_100 - (long)puStack_108;
  puVar11 = local_100;
  while (uVar13 = lVar18 >> 3, local_100 = puVar11, 2 < uVar13) {
    operator_delete((void *)*puStack_108);
    puStack_108 = puStack_108 + 1;
    puVar11 = local_100;
    lVar18 = (long)local_100 - (long)puStack_108;
  }
  if (uVar13 == 1) {
    local_f0 = 0x15;
  }
  else if (uVar13 == 2) {
    local_f0 = 0x2a;
  }
  puVar23 = puStack_108;
  if (puStack_108 != puVar11) {
    do {
      puVar25 = puVar23 + 1;
      operator_delete((void *)*puVar23);
      puVar23 = puVar25;
    } while (puVar25 != puVar11);
    if (local_100 != puStack_108) {
      local_100 = (undefined8 *)
                  ((long)local_100 +
                  ((long)puStack_108 + (7 - (long)local_100) & 0xfffffffffffffff8U));
    }
  }
  if (local_110 != (undefined8 *)0x0) {
    operator_delete(local_110);
  }
  if (puVar2[5] == local_78) {
    return uVar22 & 0xffffffff;
  }
LAB_001946a8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001946ac  FUN_001946ac =====

undefined4
FUN_001946ac(long param_1,long param_2,long param_3,undefined8 *param_4,uint param_5,byte param_6)

{
  size_t __n;
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined4 uVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  ulong *puVar23;
  uint uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 *local_170;
  undefined8 *local_168;
  undefined8 *local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  void *local_138;
  void *pvStack_130;
  undefined8 uStack_128;
  void *local_120;
  void *pvStack_118;
  undefined8 local_110;
  undefined5 uStack_108;
  undefined3 uStack_103;
  undefined5 uStack_100;
  long local_f8;
  long lStack_f0;
  undefined1 local_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 *puStack_c0;
  undefined8 *local_b8;
  undefined8 *puStack_b0;
  undefined8 *local_a8;
  undefined8 *puStack_a0;
  undefined8 *local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 uStack_88;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  lVar20 = *(long *)(param_1 + 0x28);
  local_170 = (undefined8 *)0x0;
  local_168 = (undefined8 *)0x0;
  local_160 = (undefined8 *)0x0;
  local_e0 = local_e0 & 0xffffffff00000000;
  uStack_d0 = 0;
  uStack_d8 = 0;
  puStack_c0 = (undefined8 *)0x0;
  local_c8 = 0;
  puStack_b0 = (undefined8 *)0x0;
  local_b8 = (undefined8 *)0x0;
  puStack_a0 = (undefined8 *)0x0;
  local_a8 = (undefined8 *)0x0;
  uStack_90 = 0;
  local_98 = (undefined8 *)0x0;
  uStack_8b = 0;
  uStack_88 = 0;
  if (lVar20 != 0) {
    local_e8 = 0;
    local_158 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    local_138 = (void *)0x0;
    uStack_140 = 0;
    uStack_128 = 0;
    pvStack_130 = (void *)0x0;
    pvStack_118 = (void *)0x0;
    local_120 = (void *)0x0;
    uStack_108 = 0;
    local_110 = 0;
    uStack_103 = 0;
    uStack_100 = 0;
                    /* try { // try from 00194740 to 0019474f has its CatchHandler @ 00194ff8 */
    local_f8 = param_3;
    lStack_f0 = param_3;
    puVar5 = (undefined8 *)FUN_0019238c(&local_170,&local_158);
    local_168 = puVar5;
    if (local_120 != (void *)0x0) {
      operator_delete(local_120);
    }
    if (local_138 != (void *)0x0) {
      operator_delete(local_138);
    }
    lVar21 = puVar5[-8];
    *(undefined4 *)(puVar5 + -0xc) = 0;
    puVar5[-9] = param_3;
    lVar11 = puVar5[-7] - lVar21 >> 3;
    puVar5[-0xb] = param_2;
    puVar5[-10] = param_2;
    uVar12 = (ulong)*(uint *)(param_1 + 0x1c);
    bVar4 = uVar12 < (ulong)(lVar11 * -0x5555555555555555);
    lVar11 = uVar12 + lVar11 * 0x5555555555555555;
    if (bVar4 || lVar11 == 0) {
      if (bVar4) {
        puVar5[-7] = lVar21 + uVar12 * 0x18;
      }
    }
    else {
                    /* try { // try from 001947a8 to 001947eb has its CatchHandler @ 00194ff4 */
      FUN_001925b8(puVar5 + -8,lVar11,&local_f8);
    }
    lVar21 = puVar5[-5];
    uVar12 = (ulong)*(uint *)(param_1 + 0x20);
    uVar14 = puVar5[-4] - lVar21 >> 4;
    if (uVar12 < uVar14 || uVar12 - uVar14 == 0) {
      if (uVar12 < uVar14) {
        puVar5[-4] = lVar21 + uVar12 * 0x10;
      }
    }
    else {
      FUN_001927c8(puVar5 + -5,uVar12 - uVar14);
    }
    puVar5[-2] = lVar20;
    lVar20 = 0;
    bVar4 = false;
    uVar24 = 0;
    lVar21 = param_3 - param_2;
    *(uint *)(puVar5 + -1) = param_5;
    *(byte *)((long)puVar5 + -4) = param_6 & 1;
    do {
      uVar24 = uVar24 + 1;
      if (((uVar24 & 0xfff) == 0) && ((int)lVar21 <= (int)(uVar24 >> 0xc))) {
        if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* try { // try from 00194fa8 to 00194fab has its CatchHandler @ 0019501c */
          FUN_0019295c();
LAB_00194fac:
          if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* try { // try from 00194fc0 to 00194fc3 has its CatchHandler @ 00195000 */
            FUN_00192c24();
            goto LAB_00194fc4;
          }
        }
        goto LAB_0019504c;
      }
      plVar22 = puVar5 + -2;
      plVar6 = (long *)*plVar22;
      puVar23 = puVar5 + -0xc;
      if (plVar6 != (long *)0x0) {
                    /* try { // try from 0019487c to 00194883 has its CatchHandler @ 00195018 */
        (**(code **)(*plVar6 + 0x10))(plVar6,puVar23);
      }
      puVar19 = local_168;
      iVar2 = (int)*puVar23;
      if (iVar2 == -0x3e2 || iVar2 + 0x3e2 < 0 != SCARRY4(iVar2,0x3e2)) {
        if (1 < iVar2 + 0x3e3U) {
          if (iVar2 != -1000) goto LAB_00194fac;
          lVar11 = puVar5[-10];
          if ((((param_5 >> 5 & 1) != 0) && (lVar11 == param_2)) ||
             (((param_5 >> 0xc & 1) != 0 && (lVar11 != param_3)))) goto LAB_001948e0;
          lVar13 = puVar5[-0xb];
          if (!(bool)(bVar4 & lVar11 - lVar13 <= lVar20)) {
            puVar19 = (undefined8 *)puVar5[-8];
            puVar1 = (undefined8 *)puVar5[-7];
            uStack_d8 = puVar5[-0xb];
            local_e0 = *puVar23;
            local_c8 = puVar5[-9];
            uStack_d0 = puVar5[-10];
            lVar20 = (long)puVar1 - (long)puVar19 >> 3;
            uVar12 = lVar20 * -0x5555555555555555;
            if ((ulong)(((long)puStack_b0 - (long)puStack_c0 >> 3) * -0x5555555555555555) < uVar12)
            {
              if (puStack_c0 != (undefined8 *)0x0) {
                operator_delete(puStack_c0);
                puStack_c0 = (undefined8 *)0x0;
                local_b8 = (undefined8 *)0x0;
                puStack_b0 = (undefined8 *)0x0;
              }
              if (uVar12 < 0xaaaaaaaaaaaaaab) {
                uVar14 = ((long)puStack_b0 >> 3) * 0x5555555555555556;
                if (uVar14 < uVar12 || uVar14 + lVar20 * 0x5555555555555555 == 0) {
                  uVar14 = uVar12;
                }
                if (0x555555555555554 < (ulong)(((long)puStack_b0 >> 3) * -0x5555555555555555)) {
                  uVar14 = 0xaaaaaaaaaaaaaaa;
                }
                if (uVar14 < 0xaaaaaaaaaaaaaab) {
                    /* try { // try from 00194aac to 00194aaf has its CatchHandler @ 00195018 */
                  puVar8 = (undefined8 *)operator_new(uVar14 * 0x18);
                  puStack_b0 = puVar8 + uVar14 * 3;
                  puStack_c0 = puVar8;
                  if (puVar19 != puVar1) {
                    uVar12 = (((long)puVar1 - (long)puVar19) - 0x18U) / 0x18;
                    memcpy(puVar8,puVar19,uVar12 * 0x18 + 0x18);
                    puVar8 = puVar8 + uVar12 * 3 + 3;
                  }
                  goto LAB_00194b98;
                }
              }
            }
            else {
              puVar8 = puStack_c0;
              if ((ulong)(((long)local_b8 - (long)puStack_c0 >> 3) * -0x5555555555555555) < uVar12)
              {
                puVar16 = (undefined8 *)((long)puVar19 + ((long)local_b8 - (long)puStack_c0));
                puVar9 = puStack_c0;
                puVar8 = local_b8;
                if (local_b8 != puStack_c0) {
                  do {
                    uVar10 = *puVar19;
                    puVar9[1] = puVar19[1];
                    *puVar9 = uVar10;
                    puVar17 = puVar19 + 2;
                    puVar19 = puVar19 + 3;
                    *(undefined1 *)(puVar9 + 2) = *(undefined1 *)puVar17;
                    puVar9 = puVar9 + 3;
                  } while (puVar19 != puVar16);
                }
                for (; puVar16 != puVar1; puVar16 = puVar16 + 3) {
                  uVar25 = puVar16[1];
                  uVar10 = *puVar16;
                  puVar8[2] = puVar16[2];
                  puVar8[1] = uVar25;
                  *puVar8 = uVar10;
                  puVar8 = puVar8 + 3;
                }
              }
              else {
                for (; puVar19 != puVar1; puVar19 = puVar19 + 3) {
                  uVar10 = *puVar19;
                  puVar8[1] = puVar19[1];
                  *puVar8 = uVar10;
                  *(undefined1 *)(puVar8 + 2) = *(undefined1 *)(puVar19 + 2);
                  puVar8 = puVar8 + 3;
                }
              }
LAB_00194b98:
              puVar19 = (undefined8 *)puVar5[-5];
              puVar1 = (undefined8 *)puVar5[-4];
              lVar20 = (long)puVar1 - (long)puVar19;
              uVar12 = lVar20 >> 4;
              local_b8 = puVar8;
              if (uVar12 <= (ulong)((long)local_98 - (long)local_a8 >> 4)) {
                if ((ulong)((long)puStack_a0 - (long)local_a8 >> 4) < uVar12) {
                  puVar9 = (undefined8 *)((long)puVar19 + ((long)puStack_a0 - (long)local_a8));
                  if ((long)puStack_a0 - (long)local_a8 != 0) {
                    uVar12 = ((long)puStack_a0 - (long)local_a8) - 0x10;
                    puVar8 = local_a8;
                    if (0xef < uVar12) {
                      lVar20 = (uVar12 & 0xfffffffffffffff0) + 0x10;
                      uVar14 = uVar12 & 0xfffffffffffffff0 | 8;
                      if (((undefined8 *)((long)local_a8 + uVar14) <= puVar19 ||
                           (undefined8 *)((long)puVar19 + uVar14) <= local_a8) &&
                         ((undefined8 *)((long)puVar19 + lVar20) <= local_a8 + 1 ||
                          (undefined8 *)((long)local_a8 + lVar20) <= puVar19 + 1)) {
                        uVar12 = (uVar12 >> 4) + 1;
                        uVar15 = uVar12 & 0x1ffffffffffffffc;
                        puVar8 = local_a8 + uVar15 * 2;
                        puVar16 = puVar19 + 4;
                        puVar17 = local_a8 + 4;
                        uVar14 = uVar15;
                        do {
                          uVar29 = puVar16[1];
                          uVar28 = puVar16[2];
                          uVar30 = puVar16[3];
                          uVar14 = uVar14 - 4;
                          uVar10 = puVar16[-4];
                          uVar26 = puVar16[-3];
                          uVar25 = puVar16[-2];
                          uVar27 = puVar16[-1];
                          *puVar17 = *puVar16;
                          puVar17[1] = uVar29;
                          puVar17[2] = uVar28;
                          puVar17[3] = uVar30;
                          puVar17[-4] = uVar10;
                          puVar17[-3] = uVar26;
                          puVar17[-2] = uVar25;
                          puVar17[-1] = uVar27;
                          puVar16 = puVar16 + 8;
                          puVar17 = puVar17 + 8;
                        } while (uVar14 != 0);
                        if (uVar12 == uVar15) goto joined_r0x00194c94;
                        puVar19 = puVar19 + uVar15 * 2;
                      }
                    }
                    do {
                      *puVar8 = *puVar19;
                      puVar16 = puVar19 + 1;
                      puVar19 = puVar19 + 2;
                      puVar8[1] = *puVar16;
                      puVar8 = puVar8 + 2;
                    } while (puVar19 != puVar9);
                  }
joined_r0x00194c94:
                  for (; puVar8 = puStack_a0, puVar9 != puVar1; puVar9 = puVar9 + 2) {
                    uVar10 = *puVar9;
                    puStack_a0[1] = puVar9[1];
                    *puStack_a0 = uVar10;
                    puStack_a0 = puStack_a0 + 2;
                  }
                }
                else {
                  puVar8 = local_a8;
                  if (puVar19 != puVar1) {
                    uVar12 = lVar20 - 0x10;
                    if (0xef < uVar12) {
                      lVar20 = (uVar12 & 0xfffffffffffffff0) + 0x10;
                      uVar14 = uVar12 & 0xfffffffffffffff0 | 8;
                      if (((undefined8 *)((long)local_a8 + uVar14) <= puVar19 ||
                           (undefined8 *)((long)puVar19 + uVar14) <= local_a8) &&
                         ((undefined8 *)((long)puVar19 + lVar20) <= local_a8 + 1 ||
                          (undefined8 *)((long)local_a8 + lVar20) <= puVar19 + 1)) {
                        uVar12 = (uVar12 >> 4) + 1;
                        uVar15 = uVar12 & 0x1ffffffffffffffc;
                        puVar8 = local_a8 + uVar15 * 2;
                        puVar9 = puVar19 + 4;
                        puVar16 = local_a8 + 4;
                        uVar14 = uVar15;
                        do {
                          uVar29 = puVar9[1];
                          uVar28 = puVar9[2];
                          uVar30 = puVar9[3];
                          uVar14 = uVar14 - 4;
                          uVar10 = puVar9[-4];
                          uVar26 = puVar9[-3];
                          uVar25 = puVar9[-2];
                          uVar27 = puVar9[-1];
                          *puVar16 = *puVar9;
                          puVar16[1] = uVar29;
                          puVar16[2] = uVar28;
                          puVar16[3] = uVar30;
                          puVar16[-4] = uVar10;
                          puVar16[-3] = uVar26;
                          puVar16[-2] = uVar25;
                          puVar16[-1] = uVar27;
                          puVar9 = puVar9 + 8;
                          puVar16 = puVar16 + 8;
                        } while (uVar14 != 0);
                        if (uVar12 == uVar15) goto LAB_00194ce4;
                        puVar19 = puVar19 + uVar15 * 2;
                      }
                    }
                    do {
                      *puVar8 = *puVar19;
                      puVar9 = puVar19 + 1;
                      puVar19 = puVar19 + 2;
                      puVar8[1] = *puVar9;
                      puVar8 = puVar8 + 2;
                    } while (puVar19 != puVar1);
                  }
                }
LAB_00194ce4:
                uStack_90 = (undefined5)*plVar22;
                uStack_8b = (undefined3)*(undefined8 *)((long)puVar5 + -0xb);
                uStack_88 = (undefined5)((ulong)*(undefined8 *)((long)puVar5 + -0xb) >> 0x18);
                lVar20 = lVar11 - lVar13;
                puStack_a0 = puVar8;
                goto LAB_00194d00;
              }
              if (local_a8 != (undefined8 *)0x0) {
                operator_delete(local_a8);
                local_a8 = (undefined8 *)0x0;
                puStack_a0 = (undefined8 *)0x0;
                local_98 = (undefined8 *)0x0;
              }
              if (uVar12 >> 0x3c == 0) {
                uVar14 = (long)local_98 >> 3;
                if ((ulong)((long)local_98 >> 3) <= uVar12) {
                  uVar14 = uVar12;
                }
                if ((undefined8 *)0x7fffffffffffffef < local_98) {
                  uVar14 = 0xfffffffffffffff;
                }
                if (uVar14 >> 0x3c == 0) {
                    /* try { // try from 00194c04 to 00194c07 has its CatchHandler @ 00195018 */
                  puVar8 = (undefined8 *)operator_new(uVar14 << 4);
                  local_98 = puVar8 + uVar14 * 2;
                  local_a8 = puVar8;
                  if (puVar19 != puVar1) {
                    __n = (lVar20 - 0x10U & 0xfffffffffffffff0) + 0x10;
                    memcpy(puVar8,puVar19,__n);
                    puVar8 = (undefined8 *)((long)puVar8 + __n);
                  }
                  goto LAB_00194ce4;
                }
              }
LAB_00194fc4:
              if (*(long *)(lVar3 + 0x28) != local_78) goto LAB_0019504c;
                    /* try { // try from 00194fd8 to 00194ff3 has its CatchHandler @ 00194ffc */
              FUN_00192da0();
            }
            if (*(long *)(lVar3 + 0x28) == local_78) {
              uVar10 = FUN_00192d68();
                    /* catch() { ... } // from try @ 001947a8 with catch @ 00194ff4 */
                    /* catch() { ... } // from try @ 00194fa8 with catch @ 0019501c */
              FUN_001929dc(&local_e0);
              FUN_00192ca4(&local_170);
              if (*(long *)(lVar3 + 0x28) == local_78) {
                FUN_00157e74(uVar10);
              }
            }
            goto LAB_0019504c;
          }
LAB_00194d00:
          puVar19 = local_168;
          puVar5 = local_170;
          if (lVar20 == lVar21) {
            for (; puVar19 != puVar5; puVar19 = puVar19 + -0xc) {
              pvVar7 = (void *)puVar19[-5];
              if (pvVar7 != (void *)0x0) {
                puVar19[-4] = pvVar7;
                operator_delete(pvVar7);
              }
              pvVar7 = (void *)puVar19[-8];
              if (pvVar7 != (void *)0x0) {
                puVar19[-7] = pvVar7;
                operator_delete(pvVar7);
              }
            }
            local_168 = puVar5;
            bVar4 = true;
            lVar20 = lVar21;
          }
          else {
            pvVar7 = (void *)local_168[-5];
            if (pvVar7 != (void *)0x0) {
              local_168[-4] = pvVar7;
              operator_delete(pvVar7);
            }
            pvVar7 = (void *)puVar19[-8];
            if (pvVar7 != (void *)0x0) {
              puVar19[-7] = pvVar7;
              operator_delete(pvVar7);
            }
            local_168 = puVar19 + -0xc;
            bVar4 = true;
          }
        }
      }
      else if (iVar2 == -0x3e1) {
LAB_001948e0:
        pvVar7 = (void *)local_168[-5];
        if (pvVar7 != (void *)0x0) {
          local_168[-4] = pvVar7;
          operator_delete(pvVar7);
        }
        pvVar7 = (void *)puVar19[-8];
        if (pvVar7 != (void *)0x0) {
          puVar19[-7] = pvVar7;
          operator_delete(pvVar7);
        }
        local_168 = puVar19 + -0xc;
      }
      else if (iVar2 == -0x3e0) {
                    /* try { // try from 00194910 to 0019491b has its CatchHandler @ 00195004 */
        FUN_00192a5c(&local_158,puVar23);
                    /* try { // try from 00194928 to 001949c3 has its CatchHandler @ 00195008 */
        (**(code **)(*(long *)*plVar22 + 0x18))((long *)*plVar22,1,puVar23);
        (**(code **)(*(long *)CONCAT35(uStack_103,uStack_108) + 0x18))
                  ((long *)CONCAT35(uStack_103,uStack_108),0,&local_158);
        if (local_168 < local_160) {
          local_168[4] = 0;
          local_168[5] = 0;
          local_168[6] = 0;
          local_168[7] = 0;
          local_168[1] = uStack_150;
          *local_168 = CONCAT44(uStack_154,local_158);
          local_168[3] = uStack_140;
          local_168[2] = uStack_148;
          local_168[8] = 0;
          local_168[9] = 0;
          local_168[5] = pvStack_130;
          local_168[4] = local_138;
          local_138 = (void *)0x0;
          pvStack_130 = (void *)0x0;
          local_168[6] = uStack_128;
          local_168[8] = pvStack_118;
          local_168[7] = local_120;
          uStack_128 = 0;
          local_120 = (void *)0x0;
          local_168[9] = local_110;
          pvStack_118 = (void *)0x0;
          local_110 = 0;
          *(ulong *)((long)local_168 + 0x55) = CONCAT53(uStack_100,uStack_103);
          local_168[10] = CONCAT35(uStack_103,uStack_108);
          local_168 = local_168 + 0xc;
        }
        else {
          local_168 = (undefined8 *)FUN_0019238c(&local_170,&local_158);
          if (local_120 != (void *)0x0) {
            pvStack_118 = local_120;
            operator_delete(local_120);
          }
        }
        if (local_138 != (void *)0x0) {
          pvStack_130 = local_138;
          operator_delete(local_138);
        }
      }
      else if (iVar2 != -0x3df) goto LAB_00194fac;
      puVar5 = local_168;
    } while (local_170 != local_168);
    if (bVar4) {
      plVar6 = (long *)*param_4;
      *plVar6 = param_2;
      plVar6[1] = param_2 + lVar20;
      *(undefined1 *)(plVar6 + 2) = 1;
      if ((long)local_b8 - (long)puStack_c0 != 0) {
        uVar14 = 1;
        uVar12 = ((long)local_b8 - (long)puStack_c0 >> 3) * -0x5555555555555555;
        puVar5 = puStack_c0 + 2;
        do {
          plVar22 = plVar6 + uVar14 * 3;
          lVar21 = puVar5[-2];
          bVar4 = uVar14 <= uVar12;
          lVar20 = uVar12 - uVar14;
          uVar14 = (ulong)((int)uVar14 + 1);
          plVar22[1] = puVar5[-1];
          *plVar22 = lVar21;
          *(undefined1 *)(plVar22 + 2) = *(undefined1 *)puVar5;
          puVar5 = puVar5 + 3;
        } while (bVar4 && lVar20 != 0);
      }
      uVar18 = 1;
      puVar5 = local_170;
      goto joined_r0x00194f40;
    }
  }
  uVar18 = 0;
  puVar5 = local_170;
joined_r0x00194f40:
  local_170 = puVar5;
  if (local_a8 != (undefined8 *)0x0) {
    operator_delete(local_a8);
  }
  if (puStack_c0 != (undefined8 *)0x0) {
    operator_delete(puStack_c0);
  }
  if (puVar5 != (undefined8 *)0x0) {
    operator_delete(puVar5);
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return uVar18;
  }
LAB_0019504c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00195050  FUN_00195050 =====

void FUN_00195050(long *param_1)

{
  size_t __n;
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *unaff_x22;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 *local_80;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((ulong)param_1[4] < 0x2a) {
    puVar14 = (undefined8 *)param_1[2];
    puVar15 = (undefined8 *)param_1[3];
    puVar11 = (undefined8 *)param_1[1];
    uVar16 = (long)puVar14 - (long)puVar11;
    uVar5 = (long)puVar15 - *param_1;
    if (uVar16 < uVar5) {
      if (puVar15 == puVar14) {
        local_70 = operator_new(0xfc0);
        FUN_00195a60(param_1,&local_70);
        puVar14 = (undefined8 *)param_1[1];
        puVar15 = (undefined8 *)param_1[2];
        puVar11 = puVar14 + 1;
        uVar13 = *puVar14;
        param_1[1] = (long)puVar11;
        if (puVar15 != (undefined8 *)param_1[3]) goto LAB_00195560;
        puVar12 = (undefined8 *)*param_1;
        lVar4 = (long)puVar11 - (long)puVar12;
        if (puVar12 <= puVar11 && lVar4 != 0) goto LAB_001950b8;
        uVar5 = (long)puVar15 - (long)puVar12 >> 2;
        if ((long)puVar15 - (long)puVar12 == 0) {
          uVar5 = 1;
        }
        if (uVar5 >> 0x3d != 0) goto LAB_00195628;
        uVar16 = uVar5 >> 2;
        pvVar2 = operator_new(uVar5 * 8);
        puVar7 = (undefined8 *)((long)pvVar2 + uVar16 * 8);
        pvVar3 = (void *)((long)pvVar2 + uVar5 * 8);
        puVar9 = puVar7;
        if ((long)puVar15 - (long)puVar11 != 0) {
          uVar5 = (long)puVar15 + (-0x10 - (long)puVar14);
          puVar9 = (undefined8 *)((long)puVar7 + ((long)puVar15 - (long)puVar11));
          puVar15 = puVar7;
          if ((0x47 < uVar5) && (0x1f < (long)pvVar2 + (uVar16 * 8 - (long)puVar14) + -8)) {
            puVar14 = puVar14 + 3;
            puVar15 = (undefined8 *)((long)pvVar2 + uVar16 * 8 + 0x10);
            uVar5 = (uVar5 >> 3) + 1;
            uVar10 = uVar5 & 0x3ffffffffffffffc;
            uVar16 = uVar10;
            do {
              puVar8 = puVar14 + -1;
              uVar17 = puVar14[-2];
              uVar19 = puVar14[1];
              uVar18 = *puVar14;
              uVar16 = uVar16 - 4;
              puVar14 = puVar14 + 4;
              puVar15[-1] = *puVar8;
              puVar15[-2] = uVar17;
              puVar15[1] = uVar19;
              *puVar15 = uVar18;
              puVar15 = puVar15 + 4;
            } while (uVar16 != 0);
            if (uVar5 == uVar10) goto LAB_0019554c;
            puVar11 = puVar11 + uVar10;
            puVar15 = puVar7 + uVar10;
          }
          do {
            puVar14 = puVar15 + 1;
            *puVar15 = *puVar11;
            puVar15 = puVar14;
            puVar11 = puVar11 + 1;
          } while (puVar14 != puVar9);
        }
        goto LAB_0019554c;
      }
      local_70 = operator_new(0xfc0);
      FUN_00195c38(param_1,&local_70);
    }
    else {
      uVar5 = (long)uVar5 >> 2;
      if (puVar15 == (undefined8 *)*param_1) {
        uVar5 = 1;
      }
      if (uVar5 >> 0x3d != 0) {
LAB_00195628:
        if (*(long *)(lVar1 + 0x28) != local_68) goto LAB_00195694;
        FUN_0015d614();
LAB_0019563c:
        if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 0019564c to 0019564f has its CatchHandler @ 00195650 */
          uVar13 = FUN_0015d614();
                    /* catch() { ... } // from try @ 001952bc with catch @ 00195650
                       catch() { ... } // from try @ 0019564c with catch @ 00195650 */
          operator_delete(unaff_x22);
          if (local_80 != (undefined8 *)0x0) {
            operator_delete(local_80);
          }
          if (*(long *)(lVar1 + 0x28) == local_68) {
            FUN_00157e74(uVar13);
          }
        }
        goto LAB_00195694;
      }
      local_80 = (undefined8 *)operator_new(uVar5 * 8);
      puVar15 = (undefined8 *)((long)local_80 + uVar16);
                    /* try { // try from 00195170 to 00195177 has its CatchHandler @ 00195660 */
      unaff_x22 = (undefined8 *)operator_new(0xfc0);
      puVar12 = local_80 + uVar5;
      if (puVar15 == puVar12) {
        if ((long)uVar16 < 1) {
          uVar16 = (long)uVar16 >> 2;
          if (puVar14 == puVar11) {
            uVar16 = 1;
          }
          if (uVar16 >> 0x3d != 0) goto LAB_0019563c;
                    /* try { // try from 001952bc to 001952bf has its CatchHandler @ 00195650 */
          puVar15 = (undefined8 *)operator_new(uVar16 << 3);
          puVar12 = puVar15 + uVar16;
          operator_delete(local_80);
          puVar14 = (undefined8 *)param_1[2];
          local_80 = puVar15;
        }
        else {
          puVar15 = (undefined8 *)((long)puVar15 - ((uVar16 >> 1) + 4 & 0xfffffffffffffff8));
        }
      }
      *puVar15 = unaff_x22;
      unaff_x22 = puVar15 + 1;
      while (puVar14 != (undefined8 *)param_1[1]) {
        puVar11 = puVar15;
        if (puVar15 == local_80) {
          if (unaff_x22 < puVar12) {
            lVar6 = (long)puVar12 - (long)unaff_x22 >> 3;
            lVar4 = lVar6 + 2;
            if (lVar6 + 1 < 0 == SCARRY8(lVar6,1)) {
              lVar4 = lVar6 + 1;
            }
            puVar11 = puVar15 + (lVar4 >> 1);
            if ((long)unaff_x22 - (long)puVar15 != 0) {
              memmove(puVar11,puVar15,(long)unaff_x22 - (long)puVar15);
              puVar15 = unaff_x22;
            }
            unaff_x22 = puVar15 + (lVar4 >> 1);
          }
          else {
            uVar5 = (long)puVar12 - (long)puVar15 >> 2;
            if ((long)puVar12 - (long)puVar15 == 0) {
              uVar5 = 1;
            }
            if (uVar5 >> 0x3d != 0) {
              if (*(long *)(lVar1 + 0x28) != local_68) goto LAB_00195694;
                    /* try { // try from 00195624 to 00195627 has its CatchHandler @ 00195664 */
              FUN_0015d614();
              goto LAB_00195628;
            }
                    /* try { // try from 001953a0 to 001953a3 has its CatchHandler @ 00195668 */
            local_80 = (undefined8 *)operator_new(uVar5 << 3);
            lVar4 = (long)unaff_x22 - (long)puVar15;
            uVar16 = uVar5 + 3 >> 2;
            puVar12 = local_80 + uVar5;
            puVar11 = local_80 + uVar16;
            unaff_x22 = puVar11;
            if (lVar4 == 0) {
LAB_00195474:
              if (puVar15 == (undefined8 *)0x0) goto LAB_00195300;
            }
            else {
              unaff_x22 = (undefined8 *)((long)puVar11 + lVar4);
              puVar7 = puVar11;
              puVar9 = puVar15;
              if ((lVar4 - 8U < 0x38) || ((long)local_80 + (uVar16 * 8 - (long)puVar15) < 0x20)) {
LAB_00195464:
                do {
                  puVar8 = puVar7 + 1;
                  *puVar7 = *puVar9;
                  puVar7 = puVar8;
                  puVar9 = puVar9 + 1;
                } while (puVar8 != unaff_x22);
                goto LAB_00195474;
              }
              puVar7 = puVar15 + 2;
              puVar9 = local_80 + uVar16 + 2;
              uVar5 = (lVar4 - 8U >> 3) + 1;
              uVar10 = uVar5 & 0x3ffffffffffffffc;
              uVar16 = uVar10;
              do {
                puVar8 = puVar7 + -1;
                uVar13 = puVar7[-2];
                uVar18 = puVar7[1];
                uVar17 = *puVar7;
                uVar16 = uVar16 - 4;
                puVar7 = puVar7 + 4;
                puVar9[-1] = *puVar8;
                puVar9[-2] = uVar13;
                puVar9[1] = uVar18;
                *puVar9 = uVar17;
                puVar9 = puVar9 + 4;
              } while (uVar16 != 0);
              if (uVar5 != uVar10) {
                puVar7 = puVar11 + uVar10;
                puVar9 = puVar15 + uVar10;
                goto LAB_00195464;
              }
            }
            operator_delete(puVar15);
          }
        }
LAB_00195300:
        puVar15 = puVar11 + -1;
        puVar14 = puVar14 + -1;
        puVar11[-1] = *puVar14;
      }
      pvVar3 = (void *)*param_1;
      param_1[1] = (long)puVar15;
      *param_1 = (long)local_80;
      param_1[3] = (long)puVar12;
      param_1[2] = (long)unaff_x22;
      if (pvVar3 != (void *)0x0) {
        if (*(long *)(lVar1 + 0x28) == local_68) {
          operator_delete(pvVar3);
          return;
        }
        goto LAB_00195694;
      }
    }
  }
  else {
    puVar14 = (undefined8 *)param_1[1];
    puVar15 = (undefined8 *)param_1[2];
    param_1[4] = param_1[4] - 0x2a;
    puVar11 = puVar14 + 1;
    uVar13 = *puVar14;
    param_1[1] = (long)puVar11;
    if (puVar15 == (undefined8 *)param_1[3]) {
      puVar12 = (undefined8 *)*param_1;
      lVar4 = (long)puVar11 - (long)puVar12;
      if (puVar11 < puVar12 || lVar4 == 0) {
        uVar5 = (long)puVar15 - (long)puVar12 >> 2;
        if ((long)puVar15 - (long)puVar12 == 0) {
          uVar5 = 1;
        }
        if (uVar5 >> 0x3d != 0) goto LAB_00195628;
        uVar16 = uVar5 >> 2;
        pvVar2 = operator_new(uVar5 * 8);
        puVar7 = (undefined8 *)((long)pvVar2 + uVar16 * 8);
        pvVar3 = (void *)((long)pvVar2 + uVar5 * 8);
        puVar9 = puVar7;
        if ((long)puVar15 - (long)puVar11 != 0) {
          uVar5 = (long)puVar15 + (-0x10 - (long)puVar14);
          puVar9 = (undefined8 *)((long)puVar7 + ((long)puVar15 - (long)puVar11));
          puVar15 = puVar7;
          if ((0x47 < uVar5) && (0x1f < (long)pvVar2 + (uVar16 * 8 - (long)puVar14) + -8)) {
            puVar14 = puVar14 + 3;
            puVar15 = (undefined8 *)((long)pvVar2 + uVar16 * 8 + 0x10);
            uVar5 = (uVar5 >> 3) + 1;
            uVar10 = uVar5 & 0x3ffffffffffffffc;
            uVar16 = uVar10;
            do {
              puVar8 = puVar14 + -1;
              uVar17 = puVar14[-2];
              uVar19 = puVar14[1];
              uVar18 = *puVar14;
              uVar16 = uVar16 - 4;
              puVar14 = puVar14 + 4;
              puVar15[-1] = *puVar8;
              puVar15[-2] = uVar17;
              puVar15[1] = uVar19;
              *puVar15 = uVar18;
              puVar15 = puVar15 + 4;
            } while (uVar16 != 0);
            if (uVar5 == uVar10) goto LAB_0019554c;
            puVar11 = puVar11 + uVar10;
            puVar15 = puVar7 + uVar10;
          }
          do {
            puVar14 = puVar15 + 1;
            *puVar15 = *puVar11;
            puVar15 = puVar14;
            puVar11 = puVar11 + 1;
          } while (puVar14 != puVar9);
        }
LAB_0019554c:
        *param_1 = (long)pvVar2;
        param_1[1] = (long)puVar7;
        param_1[2] = (long)puVar9;
        param_1[3] = (long)pvVar3;
        operator_delete(puVar12);
        puVar15 = (undefined8 *)param_1[2];
      }
      else {
LAB_001950b8:
        lVar4 = lVar4 >> 3;
        lVar6 = lVar4 + 2;
        if (lVar4 + 1 < 0 == SCARRY8(lVar4,1)) {
          lVar6 = lVar4 + 1;
        }
        __n = (long)puVar15 - (long)puVar11;
        puVar15 = puVar11 + -(lVar6 >> 1);
        if (__n != 0) {
          memmove(puVar15,puVar11,__n);
          puVar11 = (undefined8 *)param_1[1];
        }
        puVar15 = (undefined8 *)((long)puVar15 + __n);
        param_1[1] = (long)(puVar11 + -(lVar6 >> 1));
        param_1[2] = (long)puVar15;
      }
    }
LAB_00195560:
    *puVar15 = uVar13;
    param_1[2] = param_1[2] + 8;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
LAB_00195694:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00195698  FUN_00195698 =====

void FUN_00195698(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar7 = (undefined8 *)param_1[1];
  puVar9 = puVar7;
  if ((undefined8 *)param_1[2] != puVar7) {
    uVar5 = param_1[4];
    plVar10 = puVar7 + uVar5 / 0x2a;
    uVar6 = (param_1[5] + uVar5) / 0x2a;
    lVar12 = *plVar10 + (uVar5 / 0x2a) * -0xfc0 + uVar5 * 0x60;
    lVar11 = puVar7[uVar6] + uVar6 * -0xfc0 + (param_1[5] + uVar5) * 0x60;
    puVar9 = (undefined8 *)param_1[2];
    if (lVar12 != lVar11) {
      do {
        pvVar2 = *(void **)(lVar12 + 0x38);
        if (pvVar2 != (void *)0x0) {
          *(void **)(lVar12 + 0x40) = pvVar2;
          operator_delete(pvVar2);
        }
        pvVar2 = *(void **)(lVar12 + 0x20);
        if (pvVar2 != (void *)0x0) {
          *(void **)(lVar12 + 0x28) = pvVar2;
          operator_delete(pvVar2);
        }
        lVar12 = lVar12 + 0x60;
        if (lVar12 - *plVar10 == 0xfc0) {
          plVar10 = plVar10 + 1;
          lVar12 = *plVar10;
        }
      } while (lVar12 != lVar11);
      puVar7 = (undefined8 *)param_1[1];
      puVar9 = (undefined8 *)param_1[2];
    }
  }
  param_1[5] = 0;
  lVar12 = (long)puVar9 - (long)puVar7;
  while (uVar5 = lVar12 >> 3, 2 < uVar5) {
    operator_delete((void *)*puVar7);
    puVar9 = (undefined8 *)param_1[2];
    puVar7 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = puVar7;
    lVar12 = (long)puVar9 - (long)puVar7;
  }
  if (uVar5 == 1) {
    uVar4 = 0x15;
  }
  else {
    if (uVar5 != 2) goto LAB_001957ec;
    uVar4 = 0x2a;
  }
  param_1[4] = uVar4;
LAB_001957ec:
  if (puVar7 != puVar9) {
    do {
      puVar8 = puVar7 + 1;
      operator_delete((void *)*puVar7);
      puVar7 = puVar8;
    } while (puVar8 != puVar9);
    lVar12 = param_1[2];
    if (lVar12 != param_1[1]) {
      param_1[2] = lVar12 + ((param_1[1] - lVar12) + 7U & 0xfffffffffffffff8);
    }
  }
  if ((void *)*param_1 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete((void *)*param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00195888  FUN_00195888 =====

void FUN_00195888(long *param_1,undefined8 *param_2)

{
  long lVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *__src;
  undefined8 *__dest;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  __src = (undefined8 *)param_1[1];
  __dest = __src;
  if (__src == (undefined8 *)*param_1) {
    uVar3 = param_1[2];
    uVar13 = param_1[3];
    if (uVar3 < uVar13) {
      lVar7 = (long)(uVar13 - uVar3) >> 3;
      lVar1 = lVar7 + 2;
      if (lVar7 + 1 < 0 == SCARRY8(lVar7,1)) {
        lVar1 = lVar7 + 1;
      }
      __dest = __src + (lVar1 >> 1);
      if (uVar3 - (long)__src != 0) {
        memmove(__dest,__src,uVar3 - (long)__src);
        __src = (undefined8 *)param_1[2];
      }
      param_1[1] = (long)__dest;
      param_1[2] = (long)(__src + (lVar1 >> 1));
    }
    else {
      uVar8 = (long)(uVar13 - (long)__src) >> 2;
      if (uVar13 - (long)__src == 0) {
        uVar8 = 1;
      }
      if (uVar8 >> 0x3d != 0) {
        if (*(long *)(lVar4 + 0x28) == lVar6) {
          FUN_0015d614();
        }
        goto LAB_00195a5c;
      }
      uVar13 = uVar8 + 3 >> 2;
      pvVar5 = operator_new(uVar8 * 8);
      lVar1 = uVar3 - (long)__src;
      __dest = (undefined8 *)((long)pvVar5 + uVar13 * 8);
      pvVar2 = (void *)((long)pvVar5 + uVar8 * 8);
      puVar9 = __dest;
      if (lVar1 == 0) {
LAB_001959f0:
        *param_1 = (long)pvVar5;
        param_1[1] = (long)__dest;
        param_1[2] = (long)puVar9;
        param_1[3] = (long)pvVar2;
        if (__src == (undefined8 *)0x0) goto LAB_00195a08;
      }
      else {
        puVar9 = (undefined8 *)((long)__dest + lVar1);
        puVar10 = __dest;
        puVar12 = __src;
        if ((lVar1 - 8U < 0x38) || ((long)pvVar5 + (uVar13 * 8 - (long)__src) < 0x20)) {
LAB_001959e0:
          do {
            puVar11 = puVar10 + 1;
            *puVar10 = *puVar12;
            puVar10 = puVar11;
            puVar12 = puVar12 + 1;
          } while (puVar11 != puVar9);
          goto LAB_001959f0;
        }
        puVar10 = __src + 2;
        puVar12 = (undefined8 *)((long)pvVar5 + uVar13 * 8 + 0x10);
        uVar3 = (lVar1 - 8U >> 3) + 1;
        uVar8 = uVar3 & 0x3ffffffffffffffc;
        uVar13 = uVar8;
        do {
          puVar11 = puVar10 + -1;
          uVar14 = puVar10[-2];
          uVar16 = puVar10[1];
          uVar15 = *puVar10;
          uVar13 = uVar13 - 4;
          puVar10 = puVar10 + 4;
          puVar12[-1] = *puVar11;
          puVar12[-2] = uVar14;
          puVar12[1] = uVar16;
          *puVar12 = uVar15;
          puVar12 = puVar12 + 4;
        } while (uVar13 != 0);
        if (uVar3 != uVar8) {
          puVar10 = __dest + uVar8;
          puVar12 = __src + uVar8;
          goto LAB_001959e0;
        }
        *param_1 = (long)pvVar5;
        param_1[1] = (long)__dest;
        param_1[2] = (long)puVar9;
        param_1[3] = (long)pvVar2;
      }
      operator_delete(__src);
      __dest = (undefined8 *)param_1[1];
    }
  }
LAB_00195a08:
  __dest[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  if (*(long *)(lVar4 + 0x28) == lVar6) {
    return;
  }
LAB_00195a5c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00195a60  FUN_00195a60 =====

void FUN_00195a60(long *param_1,undefined8 *param_2)

{
  long lVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *__src;
  undefined8 *__dest;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  __src = (undefined8 *)param_1[1];
  __dest = __src;
  if (__src == (undefined8 *)*param_1) {
    uVar3 = param_1[2];
    uVar13 = param_1[3];
    if (uVar3 < uVar13) {
      lVar7 = (long)(uVar13 - uVar3) >> 3;
      lVar1 = lVar7 + 2;
      if (lVar7 + 1 < 0 == SCARRY8(lVar7,1)) {
        lVar1 = lVar7 + 1;
      }
      __dest = __src + (lVar1 >> 1);
      if (uVar3 - (long)__src != 0) {
        memmove(__dest,__src,uVar3 - (long)__src);
        __src = (undefined8 *)param_1[2];
      }
      param_1[1] = (long)__dest;
      param_1[2] = (long)(__src + (lVar1 >> 1));
    }
    else {
      uVar8 = (long)(uVar13 - (long)__src) >> 2;
      if (uVar13 - (long)__src == 0) {
        uVar8 = 1;
      }
      if (uVar8 >> 0x3d != 0) {
        if (*(long *)(lVar4 + 0x28) == lVar6) {
          FUN_0015d614();
        }
        goto LAB_00195c34;
      }
      uVar13 = uVar8 + 3 >> 2;
      pvVar5 = operator_new(uVar8 * 8);
      lVar1 = uVar3 - (long)__src;
      __dest = (undefined8 *)((long)pvVar5 + uVar13 * 8);
      pvVar2 = (void *)((long)pvVar5 + uVar8 * 8);
      puVar9 = __dest;
      if (lVar1 == 0) {
LAB_00195bc8:
        *param_1 = (long)pvVar5;
        param_1[1] = (long)__dest;
        param_1[2] = (long)puVar9;
        param_1[3] = (long)pvVar2;
        if (__src == (undefined8 *)0x0) goto LAB_00195be0;
      }
      else {
        puVar9 = (undefined8 *)((long)__dest + lVar1);
        puVar10 = __dest;
        puVar12 = __src;
        if ((lVar1 - 8U < 0x38) || ((long)pvVar5 + (uVar13 * 8 - (long)__src) < 0x20)) {
LAB_00195bb8:
          do {
            puVar11 = puVar10 + 1;
            *puVar10 = *puVar12;
            puVar10 = puVar11;
            puVar12 = puVar12 + 1;
          } while (puVar11 != puVar9);
          goto LAB_00195bc8;
        }
        puVar10 = __src + 2;
        puVar12 = (undefined8 *)((long)pvVar5 + uVar13 * 8 + 0x10);
        uVar3 = (lVar1 - 8U >> 3) + 1;
        uVar8 = uVar3 & 0x3ffffffffffffffc;
        uVar13 = uVar8;
        do {
          puVar11 = puVar10 + -1;
          uVar14 = puVar10[-2];
          uVar16 = puVar10[1];
          uVar15 = *puVar10;
          uVar13 = uVar13 - 4;
          puVar10 = puVar10 + 4;
          puVar12[-1] = *puVar11;
          puVar12[-2] = uVar14;
          puVar12[1] = uVar16;
          *puVar12 = uVar15;
          puVar12 = puVar12 + 4;
        } while (uVar13 != 0);
        if (uVar3 != uVar8) {
          puVar10 = __dest + uVar8;
          puVar12 = __src + uVar8;
          goto LAB_00195bb8;
        }
        *param_1 = (long)pvVar5;
        param_1[1] = (long)__dest;
        param_1[2] = (long)puVar9;
        param_1[3] = (long)pvVar2;
      }
      operator_delete(__src);
      __dest = (undefined8 *)param_1[1];
    }
  }
LAB_00195be0:
  __dest[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  if (*(long *)(lVar4 + 0x28) == lVar6) {
    return;
  }
LAB_00195c34:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00195c38  FUN_00195c38 =====

void FUN_00195c38(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  size_t __n;
  long lVar4;
  undefined8 *puVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *__src;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar4 = tpidr_el0;
  lVar7 = *(long *)(lVar4 + 0x28);
  puVar14 = (undefined8 *)param_1[2];
  if (puVar14 == (undefined8 *)param_1[3]) {
    puVar3 = (undefined8 *)*param_1;
    __src = (undefined8 *)param_1[1];
    if (__src < puVar3 || (long)__src - (long)puVar3 == 0) {
      uVar9 = (long)puVar14 - (long)puVar3 >> 2;
      if ((long)puVar14 - (long)puVar3 == 0) {
        uVar9 = 1;
      }
      if (uVar9 >> 0x3d != 0) {
        if (*(long *)(lVar4 + 0x28) == lVar7) {
          FUN_0015d614();
        }
        goto LAB_00195df0;
      }
      uVar15 = uVar9 >> 2;
      pvVar6 = operator_new(uVar9 * 8);
      puVar2 = (undefined8 *)((long)pvVar6 + uVar15 * 8);
      lVar1 = (long)puVar14 - (long)__src;
      puVar14 = puVar2;
      if (lVar1 != 0) {
        puVar14 = (undefined8 *)((long)puVar2 + lVar1);
        puVar10 = puVar2;
        if ((0x37 < lVar1 - 8U) && (0x1f < (long)pvVar6 + (uVar15 * 8 - (long)__src))) {
          puVar10 = __src + 2;
          puVar12 = (undefined8 *)((long)pvVar6 + uVar15 * 8 + 0x10);
          uVar15 = (lVar1 - 8U >> 3) + 1;
          uVar11 = uVar15 & 0x3ffffffffffffffc;
          uVar13 = uVar11;
          do {
            puVar5 = puVar10 + -1;
            uVar16 = puVar10[-2];
            uVar18 = puVar10[1];
            uVar17 = *puVar10;
            uVar13 = uVar13 - 4;
            puVar10 = puVar10 + 4;
            puVar12[-1] = *puVar5;
            puVar12[-2] = uVar16;
            puVar12[1] = uVar18;
            *puVar12 = uVar17;
            puVar12 = puVar12 + 4;
          } while (uVar13 != 0);
          if (uVar15 == uVar11) goto LAB_00195d84;
          __src = __src + uVar11;
          puVar10 = puVar2 + uVar11;
        }
        do {
          puVar12 = puVar10 + 1;
          *puVar10 = *__src;
          puVar10 = puVar12;
          __src = __src + 1;
        } while (puVar12 != puVar14);
      }
LAB_00195d84:
      *param_1 = pvVar6;
      param_1[1] = puVar2;
      param_1[2] = puVar14;
      param_1[3] = (void *)((long)pvVar6 + uVar9 * 8);
      if (puVar3 != (undefined8 *)0x0) {
        operator_delete(puVar3);
        puVar14 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (long)__src - (long)puVar3 >> 3;
      lVar1 = lVar8 + 2;
      if (lVar8 + 1 < 0 == SCARRY8(lVar8,1)) {
        lVar1 = lVar8 + 1;
      }
      __n = (long)puVar14 - (long)__src;
      if (__n != 0) {
        memmove(__src + -(lVar1 >> 1),__src,__n);
        puVar14 = (undefined8 *)param_1[1];
      }
      puVar3 = puVar14 + -(lVar1 >> 1);
      puVar14 = (undefined8 *)((long)(__src + -(lVar1 >> 1)) + __n);
      param_1[1] = puVar3;
      param_1[2] = puVar14;
    }
  }
  *puVar14 = *param_2;
  param_1[2] = param_1[2] + 8;
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return;
  }
LAB_00195df0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00195df4  FUN_00195df4 =====

void FUN_00195df4(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  
  lVar1 = tpidr_el0;
  lVar6 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)param_1[2];
  while (puVar2 != (undefined8 *)0x0) {
    pvVar4 = (void *)*puVar2;
    puVar3 = (undefined8 *)puVar2[5];
    while (puVar3 != (undefined8 *)0x0) {
      pvVar5 = (void *)*puVar3;
      FUN_0017bb4c(puVar3 + 5);
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        operator_delete((void *)puVar3[4]);
      }
      operator_delete(puVar3);
      puVar3 = (undefined8 *)pvVar5;
    }
    pvVar5 = (void *)puVar2[3];
    puVar2[3] = 0;
    if (pvVar5 != (void *)0x0) {
      operator_delete(pvVar5);
    }
    operator_delete(puVar2);
    puVar2 = (undefined8 *)pvVar4;
  }
  pvVar4 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar4 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar6) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar6) {
    operator_delete(pvVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00195ee4  margelo::nitro::PropNameIDCache::get =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* margelo::nitro::PropNameIDCache::get(facebook::jsi::Runtime&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

long * margelo::nitro::PropNameIDCache::get(Runtime *param_1,basic_string *param_2)

{
  size_t sVar1;
  size_t sVar2;
  basic_string *pbVar3;
  basic_string bVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  int iVar8;
  void *pvVar9;
  void *pvVar10;
  long *plVar11;
  Runtime *extraout_x1;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long *plVar21;
  basic_string *pbVar22;
  ulong uVar23;
  basic_string *pbVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  ulong uVar28;
  long *plVar29;
  long *plVar30;
  ulong unaff_x20;
  byte bVar31;
  long lVar32;
  basic_string *pbVar33;
  size_t sVar34;
  long *plVar35;
  size_t sVar36;
  undefined2 uVar37;
  undefined8 uVar38;
  float fVar39;
  long local_98;
  long *local_90;
  undefined8 *local_88;
  long *local_80;
  long *plStack_78;
  undefined1 local_70;
  long local_68;
  
  puVar7 = PTR__cache_001ba1c0;
  uVar12 = (((((ulong)param_1 & 0xffffffff) >> 3 & 0x3ffffff) << 6 | 8) ^ (ulong)param_1 >> 0x20) *
           -0x622015f714c7d297;
  lVar6 = tpidr_el0;
  uVar13 = ((ulong)param_1 >> 0x20 ^ uVar12 >> 0x2f ^ uVar12) * -0x622015f714c7d297;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar12 = *(ulong *)(PTR__cache_001ba1c0 + 8);
  uVar13 = (uVar13 ^ uVar13 >> 0x2f) * -0x622015f714c7d297;
  if (uVar12 != 0) {
    uVar38 = NEON_cnt(uVar12,1);
    uVar37 = NEON_uaddlv(uVar38,1);
    uVar20 = CONCAT62((int6)((ulong)uVar38 >> 0x10),uVar37) & 0xffffffff;
    if (uVar20 < 2) {
      unaff_x20 = uVar13 & uVar12 - 1;
    }
    else {
      unaff_x20 = uVar13;
      if (uVar12 <= uVar13) {
        uVar23 = 0;
        if (uVar12 != 0) {
          uVar23 = uVar13 / uVar12;
        }
        unaff_x20 = uVar13 - uVar23 * uVar12;
      }
    }
    puVar19 = *(undefined8 **)(*(long *)PTR__cache_001ba1c0 + unaff_x20 * 8);
    if ((puVar19 != (undefined8 *)0x0) && (plVar30 = (long *)*puVar19, plVar30 != (long *)0x0)) {
      do {
        uVar23 = plVar30[1];
        if (uVar23 == uVar13) {
          if ((Runtime *)plVar30[2] == param_1) goto LAB_001962d8;
        }
        else {
          if (uVar20 < 2) {
            uVar23 = uVar23 & uVar12 - 1;
          }
          else if (uVar12 <= uVar23) {
            uVar15 = 0;
            if (uVar12 != 0) {
              uVar15 = uVar23 / uVar12;
            }
            uVar23 = uVar23 - uVar15 * uVar12;
          }
          if (uVar23 != unaff_x20) break;
        }
        plVar30 = (long *)*plVar30;
      } while (plVar30 != (long *)0x0);
    }
  }
  plVar30 = (long *)operator_new(0x40);
  lVar14 = *(long *)(puVar7 + 0x18);
  *plVar30 = 0;
  plVar30[1] = uVar13;
  plVar30[2] = (long)param_1;
  plVar30[4] = 0;
  plVar30[3] = 0;
  plVar30[6] = 0;
  plVar30[5] = 0;
  fVar39 = *(float *)(puVar7 + 0x20);
  *(undefined4 *)(plVar30 + 7) = 0x3f800000;
  if ((uVar12 == 0) || (fVar39 * (float)uVar12 < (float)(lVar14 + 1))) {
    if (uVar12 < 3) {
      uVar20 = 1;
    }
    else {
      uVar20 = (ulong)((uVar12 & uVar12 - 1) != 0);
    }
    uVar20 = uVar20 | uVar12 << 1;
    uVar23 = (ulong)((float)(lVar14 + 1) / fVar39);
    if (uVar20 <= uVar23) {
      uVar20 = uVar23;
    }
    if (uVar20 - 1 == 0) {
      uVar20 = 2;
    }
    else if ((uVar20 & uVar20 - 1) != 0) {
                    /* try { // try from 001960a4 to 001960cb has its CatchHandler @ 00196d7c */
      uVar20 = std::__ndk1::__next_prime(uVar20);
      uVar12 = *(ulong *)(puVar7 + 8);
    }
    if (uVar20 <= uVar12) {
      if (uVar20 < uVar12) {
        uVar23 = (ulong)((float)*(ulong *)(puVar7 + 0x18) / *(float *)(puVar7 + 0x20));
        if (uVar12 < 3) {
LAB_00196bd8:
                    /* try { // try from 00196bd8 to 00196bdb has its CatchHandler @ 00196d7c */
          uVar23 = std::__ndk1::__next_prime(uVar23);
        }
        else {
          uVar38 = NEON_cnt(uVar12,1);
          uVar37 = NEON_uaddlv(uVar38,1);
          if (1 < (uint)CONCAT62((int6)((ulong)uVar38 >> 0x10),uVar37)) goto LAB_00196bd8;
          if (1 < uVar23) {
            uVar23 = 1L << (-LZCOUNT(uVar23 - 1) & 0x3fU);
          }
        }
        if (uVar20 <= uVar23) {
          uVar20 = uVar23;
        }
        if (uVar20 < uVar12) {
          if (uVar20 != 0) goto LAB_001960bc;
          pvVar9 = *(void **)puVar7;
          *(undefined8 *)puVar7 = 0;
          if (pvVar9 != (void *)0x0) {
            operator_delete(pvVar9);
          }
          *(undefined8 *)(puVar7 + 8) = 0;
          uVar12 = 0;
        }
        else {
          uVar12 = *(ulong *)(puVar7 + 8);
        }
      }
LAB_00196234:
      if ((uVar12 & uVar12 - 1) == 0) {
        unaff_x20 = uVar12 - 1 & uVar13;
      }
      else {
        unaff_x20 = uVar13;
        if (uVar12 <= uVar13) {
          uVar20 = 0;
          if (uVar12 != 0) {
            uVar20 = uVar13 / uVar12;
          }
          unaff_x20 = uVar13 - uVar20 * uVar12;
        }
      }
      goto LAB_00196264;
    }
LAB_001960bc:
    if (uVar20 >> 0x3d == 0) {
      pvVar9 = operator_new(uVar20 << 3);
      pvVar10 = *(void **)puVar7;
      *(void **)puVar7 = pvVar9;
      if (pvVar10 != (void *)0x0) {
        operator_delete(pvVar10);
      }
      uVar12 = 0;
      *(ulong *)(puVar7 + 8) = uVar20;
      do {
        *(undefined8 *)(*(long *)puVar7 + uVar12 * 8) = 0;
        uVar12 = uVar12 + 1;
      } while (uVar20 != uVar12);
      plVar21 = *(long **)(puVar7 + 0x10);
      uVar12 = uVar20;
      if (plVar21 != (long *)0x0) {
        uVar23 = plVar21[1];
        uVar38 = NEON_cnt(uVar20,1);
        uVar37 = NEON_uaddlv(uVar38,1);
        uVar15 = CONCAT62((int6)((ulong)uVar38 >> 0x10),uVar37) & 0xffffffff;
        if (uVar15 < 2) {
          uVar23 = uVar23 & uVar20 - 1;
        }
        else if (uVar20 <= uVar23) {
          uVar28 = 0;
          if (uVar20 != 0) {
            uVar28 = uVar23 / uVar20;
          }
          uVar23 = uVar23 - uVar28 * uVar20;
        }
        *(undefined **)(*(long *)puVar7 + uVar23 * 8) = puVar7 + 0x10;
        plVar26 = (long *)*plVar21;
        if (plVar26 != (long *)0x0) {
          do {
            uVar28 = plVar26[1];
            if (uVar15 < 2) {
              uVar28 = uVar28 & uVar20 - 1;
            }
            else if (uVar20 <= uVar28) {
              uVar5 = 0;
              if (uVar20 != 0) {
                uVar5 = uVar28 / uVar20;
              }
              uVar28 = uVar28 - uVar5 * uVar20;
            }
            if (uVar28 != uVar23) {
              if (*(long *)(*(long *)puVar7 + uVar28 * 8) == 0) {
                *(long **)(*(long *)puVar7 + uVar28 * 8) = plVar21;
                uVar23 = uVar28;
              }
              else {
                *plVar21 = *plVar26;
                *plVar26 = **(long **)(*(long *)puVar7 + uVar28 * 8);
                **(undefined8 **)(*(long *)puVar7 + uVar28 * 8) = plVar26;
                plVar26 = plVar21;
              }
            }
            plVar21 = plVar26;
            plVar26 = (long *)*plVar21;
          } while (plVar26 != (long *)0x0);
        }
      }
      goto LAB_00196234;
    }
LAB_00196d34:
    if (*(long *)(lVar6 + 0x28) != local_68) goto LAB_00196df4;
                    /* try { // try from 00196d48 to 00196d4b has its CatchHandler @ 00196d7c */
    FUN_0015d614();
  }
  else {
LAB_00196264:
    lVar14 = *(long *)puVar7;
    plVar21 = *(long **)(lVar14 + unaff_x20 * 8);
    if (plVar21 == (long *)0x0) {
      plVar21 = (long *)(puVar7 + 0x10);
      lVar32 = *plVar21;
      *plVar21 = (long)plVar30;
      *plVar30 = lVar32;
      *(long **)(lVar14 + unaff_x20 * 8) = plVar21;
      if (*plVar30 != 0) {
        uVar13 = *(ulong *)(*plVar30 + 8);
        if ((uVar12 & uVar12 - 1) == 0) {
          uVar13 = uVar13 & uVar12 - 1;
        }
        else if (uVar12 <= uVar13) {
          uVar20 = 0;
          if (uVar12 != 0) {
            uVar20 = uVar13 / uVar12;
          }
          uVar13 = uVar13 - uVar20 * uVar12;
        }
        plVar21 = (long *)(*(long *)puVar7 + uVar13 * 8);
        goto LAB_001962c8;
      }
    }
    else {
      *plVar30 = *plVar21;
LAB_001962c8:
      *plVar21 = (long)plVar30;
    }
    *(long *)(puVar7 + 0x18) = *(long *)(puVar7 + 0x18) + 1;
LAB_001962d8:
    bVar4 = *param_2;
    sVar34 = *(size_t *)(param_2 + 8);
    pbVar33 = *(basic_string **)(param_2 + 0x10);
    sVar36 = (size_t)((byte)bVar4 >> 1);
    bVar31 = (byte)bVar4 & 1;
    sVar1 = sVar34;
    pbVar3 = pbVar33;
    if (((byte)bVar4 & 1) == 0) {
      sVar1 = sVar36;
      pbVar3 = param_2 + 1;
    }
    uVar12 = FUN_0015c450(pbVar3,sVar1);
    uVar13 = plVar30[4];
    if (uVar13 != 0) {
      uVar38 = NEON_cnt(uVar13,1);
      uVar37 = NEON_uaddlv(uVar38,1);
      uVar20 = CONCAT62((int6)((ulong)uVar38 >> 0x10),uVar37) & 0xffffffff;
      if (uVar20 < 2) {
        uVar23 = uVar13 - 1 & uVar12;
      }
      else {
        uVar23 = uVar12;
        if (uVar13 <= uVar12) {
          uVar23 = 0;
          if (uVar13 != 0) {
            uVar23 = uVar12 / uVar13;
          }
          uVar23 = uVar12 - uVar23 * uVar13;
        }
      }
      plVar21 = *(long **)(plVar30[3] + uVar23 * 8);
      if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
        do {
          uVar15 = plVar21[1];
          if (uVar15 == uVar12) {
            bVar31 = *(byte *)(plVar21 + 2);
            uVar15 = (ulong)(bVar31 >> 1);
            sVar2 = uVar15;
            if ((bVar31 & 1) != 0) {
              sVar2 = plVar21[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar31 & 1) == 0) {
                if (bVar31 < 2) {
LAB_00196438:
                  bVar31 = (byte)bVar4 & 1;
                  if (plVar21[5] == 0) goto LAB_00196460;
                  if ((*(byte *)(plVar21[6] + 0x10) & 1) == 0) {
                    plVar21 = (long *)plVar21[5];
                    goto LAB_00196c68;
                  }
                  sVar34 = *(size_t *)(param_2 + 8);
                  pbVar33 = *(basic_string **)(param_2 + 0x10);
                  sVar36 = (size_t)((byte)*param_2 >> 1);
                  bVar31 = (byte)*param_2 & 1;
                  goto LAB_00196460;
                }
                pbVar22 = (basic_string *)((long)plVar21 + 0x11);
                pbVar24 = pbVar3;
                while (*pbVar22 == *pbVar24) {
                  uVar15 = uVar15 - 1;
                  pbVar22 = pbVar22 + 1;
                  pbVar24 = pbVar24 + 1;
                  if (uVar15 == 0) goto LAB_00196438;
                }
              }
              else {
                iVar8 = memcmp((void *)plVar21[4],pbVar3,plVar21[3]);
                if (iVar8 == 0) goto LAB_00196438;
              }
            }
          }
          else {
            if (uVar20 < 2) {
              uVar15 = uVar15 & uVar13 - 1;
            }
            else if (uVar13 <= uVar15) {
              uVar28 = 0;
              if (uVar13 != 0) {
                uVar28 = uVar15 / uVar13;
              }
              uVar15 = uVar15 - uVar28 * uVar13;
            }
            if (uVar15 != uVar23) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      bVar31 = (byte)bVar4 & 1;
    }
LAB_00196460:
    if (bVar31 != 0) {
      sVar36 = sVar34;
    }
    pbVar3 = param_2 + 1;
    if (bVar31 != 0) {
      pbVar3 = pbVar33;
    }
    (**(code **)(*(long *)param_1 + 0x98))(&local_88,param_1,pbVar3,sVar36);
                    /* try { // try from 00196488 to 00196493 has its CatchHandler @ 00196d98 */
    JSICache::getOrCreateCache((JSICache *)param_1,extraout_x1);
                    /* try { // try from 00196494 to 001964b7 has its CatchHandler @ 00196db8 */
    plVar21 = (long *)operator_new(8);
    puVar19 = local_88;
    local_88 = (undefined8 *)0x0;
    *plVar21 = (long)puVar19;
    plVar26 = (long *)operator_new(0x40);
    *(undefined1 *)(plVar26 + 2) = 0;
    lVar32 = _UNK_00138c28;
    lVar14 = _DAT_00138c20;
    *(undefined8 *)((long)plVar26 + 0x34) = 0;
    plVar26[1] = lVar32;
    *plVar26 = lVar14;
    *(undefined8 *)((long)plVar26 + 0x1c) = 0;
    *(undefined8 *)((long)plVar26 + 0x14) = 0;
    *(undefined8 *)((long)plVar26 + 0x2c) = 0;
    *(undefined8 *)((long)plVar26 + 0x24) = 0;
    local_80 = plVar21;
    plStack_78 = plVar26;
    FUN_0015bb40(1,plVar26 + 1);
    puVar19 = *(undefined8 **)(local_98 + 0x98);
    if (*(undefined8 **)(local_98 + 0xa0) <= puVar19) {
      lVar32 = (long)puVar19 - *(long *)(local_98 + 0x90);
      lVar14 = lVar32 >> 4;
      uVar12 = lVar14 + 1;
      if (uVar12 >> 0x3c == 0) {
        uVar20 = (long)*(undefined8 **)(local_98 + 0xa0) - *(long *)(local_98 + 0x90);
        uVar13 = (long)uVar20 >> 3;
        if (uVar13 <= uVar12) {
          uVar13 = uVar12;
        }
        if (0x7fffffffffffffef < uVar20) {
          uVar13 = 0xfffffffffffffff;
        }
        if (uVar13 >> 0x3c == 0) {
                    /* try { // try from 00196550 to 00196553 has its CatchHandler @ 00196da0 */
          pvVar10 = operator_new(uVar13 << 4);
          plVar18 = plStack_78;
          plVar11 = local_80;
          plVar35 = (long *)((long)pvVar10 + lVar32);
          pvVar9 = (void *)((long)pvVar10 + uVar13 * 0x10);
          local_80 = (long *)0x0;
          plStack_78 = (long *)0x0;
          plVar16 = plVar35 + 2;
          *plVar35 = (long)plVar11;
          *(long **)((long)pvVar10 + lVar14 * 0x10 + 8) = plVar18;
          plVar11 = *(long **)(local_98 + 0x90);
          plVar18 = *(long **)(local_98 + 0x98);
          if (plVar18 == plVar11) {
            *(long **)(local_98 + 0x90) = plVar35;
            *(long **)(local_98 + 0x98) = plVar16;
            *(void **)(local_98 + 0xa0) = pvVar9;
          }
          else {
            do {
              plVar17 = plVar18 + -2;
              plVar25 = plVar35 + -2;
              *plVar25 = *plVar17;
              lVar14 = plVar18[-1];
              plVar35[-1] = lVar14;
              if (lVar14 != 0) {
                FUN_0015bb40(1,lVar14 + 8);
              }
              plVar18 = plVar17;
              plVar35 = plVar25;
            } while (plVar17 != plVar11);
            plVar18 = *(long **)(local_98 + 0x90);
            plVar35 = *(long **)(local_98 + 0x98);
            *(long **)(local_98 + 0x90) = plVar25;
            *(long **)(local_98 + 0x98) = plVar16;
            *(void **)(local_98 + 0xa0) = pvVar9;
            while (plVar35 != plVar18) {
              plVar11 = plVar35 + -1;
              plVar35 = plVar35 + -2;
              if (*plVar11 != 0) {
                FUN_0015bb40(0xffffffffffffffff,*plVar11 + 8);
                    /* try { // try from 00196674 to 0019667b has its CatchHandler @ 00196df8 */
                FUN_0017b4c8(plVar35);
              }
            }
          }
          if (plVar18 != (long *)0x0) {
            operator_delete(plVar18);
          }
          *(long **)(local_98 + 0x98) = plVar16;
          if (plStack_78 != (long *)0x0) {
            FUN_0015bb40(0xffffffffffffffff,plStack_78 + 1);
                    /* try { // try from 001965f0 to 001965f7 has its CatchHandler @ 00196d64 */
            FUN_0017b4c8(&local_80);
          }
          goto LAB_001965f8;
        }
      }
      else {
        if (*(long *)(lVar6 + 0x28) != local_68) goto LAB_00196df4;
                    /* try { // try from 00196d18 to 00196d33 has its CatchHandler @ 00196da0 */
        FUN_00196ef0();
      }
      if (*(long *)(lVar6 + 0x28) != local_68) goto LAB_00196df4;
      FUN_0015d614();
      goto LAB_00196d34;
    }
    puVar19[1] = plStack_78;
    *puVar19 = local_80;
    *(undefined8 **)(local_98 + 0x98) = puVar19 + 2;
    plVar18 = plVar21;
LAB_001965f8:
    bVar4 = *param_2;
    uVar13 = *(ulong *)(param_2 + 8);
    pbVar33 = *(basic_string **)(param_2 + 0x10);
    uVar12 = (ulong)((byte)bVar4 >> 1);
    pbVar3 = param_2 + 1;
    if (((byte)bVar4 & 1) != 0) {
      uVar12 = uVar13;
      pbVar3 = pbVar33;
    }
    plVar11 = (long *)FUN_0015c450(pbVar3,uVar12);
    plVar35 = (long *)plVar30[4];
    if (plVar35 != (long *)0x0) {
      uVar38 = NEON_cnt(plVar35,1);
      uVar37 = NEON_uaddlv(uVar38,1);
      uVar20 = CONCAT62((int6)((ulong)uVar38 >> 0x10),uVar37) & 0xffffffff;
      if (uVar20 < 2) {
        plVar18 = (long *)((long)plVar35 - 1U & (ulong)plVar11);
      }
      else {
        plVar18 = plVar11;
        if (plVar35 <= plVar11) {
          uVar23 = 0;
          if (plVar35 != (long *)0x0) {
            uVar23 = (ulong)plVar11 / (ulong)plVar35;
          }
          plVar18 = (long *)((long)plVar11 - uVar23 * (long)plVar35);
        }
      }
      plVar16 = *(long **)(plVar30[3] + (long)plVar18 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        do {
          plVar17 = (long *)plVar16[1];
          if (plVar17 == plVar11) {
            bVar31 = *(byte *)(plVar16 + 2);
            uVar15 = (ulong)(bVar31 >> 1);
            uVar23 = uVar15;
            if ((bVar31 & 1) != 0) {
              uVar23 = plVar16[3];
            }
            if (uVar23 == uVar12) {
              if ((bVar31 & 1) == 0) {
                if (bVar31 < 2) {
LAB_00196784:
                  if (plVar16[6] != 0) {
                    uVar12 = FUN_0015bb40(0xffffffffffffffff);
                    if ((uVar12 < 2) && ((*(byte *)(plVar16[6] + 0x10) & 1) == 0)) {
                      plVar30 = (long *)plVar16[5];
                      if (plVar30 != (long *)0x0) {
                        if ((undefined8 *)*plVar30 != (undefined8 *)0x0) {
                          (*(code *)**(undefined8 **)*plVar30)();
                        }
                        operator_delete(plVar30);
                      }
                      plVar16[5] = 0;
                      *(undefined4 *)(plVar16[6] + 0x10) = 1;
                    }
                    if ((*(long *)plVar16[6] == 0) && (*(long *)(plVar16[6] + 8) == 0)) {
                      pvVar9 = (void *)plVar16[6];
                      if (pvVar9 != (void *)0x0) {
                        std::__ndk1::mutex::~mutex((mutex *)((long)pvVar9 + 0x14));
                        operator_delete(pvVar9);
                      }
                      plVar16[6] = 0;
                    }
                  }
                  plVar16[5] = (long)plVar21;
                  plVar16[6] = (long)plVar26;
                  if ((plVar26 == (long *)0x0) || (FUN_0015bb40(1), plVar26 == (long *)0x0))
                  goto LAB_00196c18;
                  goto LAB_00196b4c;
                }
                pbVar22 = (basic_string *)((long)plVar16 + 0x11);
                pbVar24 = pbVar3;
                while (*pbVar22 == *pbVar24) {
                  uVar15 = uVar15 - 1;
                  pbVar22 = pbVar22 + 1;
                  pbVar24 = pbVar24 + 1;
                  if (uVar15 == 0) goto LAB_00196784;
                }
              }
              else {
                iVar8 = memcmp((void *)plVar16[4],pbVar3,plVar16[3]);
                if (iVar8 == 0) goto LAB_00196784;
              }
            }
          }
          else {
            if (uVar20 < 2) {
              plVar17 = (long *)((ulong)plVar17 & (long)plVar35 - 1U);
            }
            else if (plVar35 <= plVar17) {
              uVar23 = 0;
              if (plVar35 != (long *)0x0) {
                uVar23 = (ulong)plVar17 / (ulong)plVar35;
              }
              plVar17 = (long *)((long)plVar17 - uVar23 * (long)plVar35);
            }
            if (plVar17 != plVar18) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
                    /* try { // try from 00196844 to 0019684b has its CatchHandler @ 00196d90 */
    plVar17 = (long *)operator_new(0x38);
    plVar16 = plVar30 + 5;
    local_70 = 0;
    *plVar17 = 0;
    plVar17[1] = (long)plVar11;
    local_80 = plVar17;
    plStack_78 = plVar16;
    if (((byte)bVar4 & 1) == 0) {
      lVar32 = *(long *)param_2;
      lVar14 = *(long *)(param_2 + 0x10);
      plVar17[3] = *(long *)(param_2 + 8);
      plVar17[2] = lVar32;
      plVar17[4] = lVar14;
    }
    else {
                    /* try { // try from 0019687c to 0019688b has its CatchHandler @ 00196d68 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (plVar17 + 2),(char *)pbVar33,uVar13);
    }
    plVar17[5] = (long)plVar21;
    plVar17[6] = (long)plVar26;
    if (plVar26 != (long *)0x0) {
      FUN_0015bb40(1);
    }
    local_70 = 1;
    if ((plVar35 != (long *)0x0) &&
       ((float)(plVar30[6] + 1) <= *(float *)(plVar30 + 7) * (float)plVar35)) {
LAB_00196acc:
      plVar11 = *(long **)(plVar30[3] + (long)plVar18 * 8);
      if (plVar11 == (long *)0x0) {
        *local_80 = plVar30[5];
        plVar30[5] = (long)local_80;
        *(long **)(plVar30[3] + (long)plVar18 * 8) = plVar16;
        if (*local_80 != 0) {
          plVar11 = *(long **)(*local_80 + 8);
          if (((ulong)plVar35 & (long)plVar35 - 1U) == 0) {
            plVar11 = (long *)((ulong)plVar11 & (long)plVar35 - 1U);
          }
          else if (plVar35 <= plVar11) {
            uVar12 = 0;
            if (plVar35 != (long *)0x0) {
              uVar12 = (ulong)plVar11 / (ulong)plVar35;
            }
            plVar11 = (long *)((long)plVar11 - uVar12 * (long)plVar35);
          }
          plVar11 = (long *)(plVar30[3] + (long)plVar11 * 8);
          goto LAB_00196b34;
        }
      }
      else {
        *local_80 = *plVar11;
LAB_00196b34:
        *plVar11 = (long)local_80;
      }
      plVar30[6] = plVar30[6] + 1;
      if (plVar26 != (long *)0x0) {
LAB_00196b4c:
        uVar12 = FUN_0015bb40(0xffffffffffffffff);
        if (uVar12 < 2) {
          if ((*(byte *)(plVar26 + 2) & 1) == 0) {
            if (plVar21 != (long *)0x0) {
              if ((undefined8 *)*plVar21 != (undefined8 *)0x0) {
                (*(code *)**(undefined8 **)*plVar21)();
              }
              operator_delete(plVar21);
            }
            *(undefined4 *)(plVar26 + 2) = 1;
            goto LAB_00196ba4;
          }
          lVar14 = *plVar26;
        }
        else {
LAB_00196ba4:
          lVar14 = *plVar26;
        }
        if (((lVar14 == 0) && (plVar26[1] == 0)) && (plVar26 != (long *)0x0)) {
          std::__ndk1::mutex::~mutex((mutex *)((long)plVar26 + 0x14));
          operator_delete(plVar26);
        }
      }
LAB_00196c18:
      std::__ndk1::mutex::unlock();
      if ((local_90 != (long *)0x0) &&
         (lVar14 = FUN_0015bb40(0xffffffffffffffff,local_90 + 1), lVar14 == 0)) {
        (**(code **)(*local_90 + 0x10))(local_90);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      if (local_88 != (undefined8 *)0x0) {
        (**(code **)*local_88)();
      }
LAB_00196c68:
      if (*(long *)(lVar6 + 0x28) == local_68) {
        return plVar21;
      }
      goto LAB_00196df4;
    }
    if (plVar35 < (long *)0x3) {
      uVar12 = 1;
    }
    else {
      uVar12 = (ulong)(((ulong)plVar35 & (long)plVar35 - 1U) != 0);
    }
    plVar18 = (long *)(uVar12 | (long)plVar35 << 1);
    plVar35 = (long *)(long)((float)(plVar30[6] + 1) / *(float *)(plVar30 + 7));
    if (plVar18 <= plVar35) {
      plVar18 = plVar35;
    }
    if ((long)plVar18 - 1U == 0) {
      plVar18 = (long *)0x2;
    }
    else if (((ulong)plVar18 & (long)plVar18 - 1U) != 0) {
                    /* try { // try from 0019691c to 00196943 has its CatchHandler @ 00196d6c */
      plVar18 = (long *)std::__ndk1::__next_prime((ulong)plVar18);
    }
    plVar35 = (long *)plVar30[4];
    if (plVar18 <= plVar35) {
      if (plVar18 < plVar35) {
        plVar17 = (long *)(long)((float)(ulong)plVar30[6] / *(float *)(plVar30 + 7));
        if (plVar35 < (long *)0x3) {
LAB_00196ca0:
                    /* try { // try from 00196ca0 to 00196ca3 has its CatchHandler @ 00196d6c */
          plVar17 = (long *)std::__ndk1::__next_prime((ulong)plVar17);
        }
        else {
          uVar38 = NEON_cnt(plVar35,1);
          uVar37 = NEON_uaddlv(uVar38,1);
          if (1 < (uint)CONCAT62((int6)((ulong)uVar38 >> 0x10),uVar37)) goto LAB_00196ca0;
          if ((long *)0x1 < plVar17) {
            plVar17 = (long *)(1L << (-LZCOUNT((long)plVar17 + -1) & 0x3fU));
          }
        }
        if (plVar18 <= plVar17) {
          plVar18 = plVar17;
        }
        if (plVar18 < plVar35) {
          if (plVar18 != (long *)0x0) goto LAB_00196934;
          pvVar9 = (void *)plVar30[3];
          plVar30[3] = 0;
          if (pvVar9 != (void *)0x0) {
            operator_delete(pvVar9);
          }
          plVar30[4] = 0;
          plVar35 = (long *)0x0;
        }
        else {
          plVar35 = (long *)plVar30[4];
        }
      }
LAB_00196aa8:
      if (((ulong)plVar35 & (long)plVar35 - 1U) == 0) {
        plVar18 = (long *)((long)plVar35 - 1U & (ulong)plVar11);
      }
      else {
        plVar18 = plVar11;
        if (plVar35 <= plVar11) {
          uVar12 = 0;
          if (plVar35 != (long *)0x0) {
            uVar12 = (ulong)plVar11 / (ulong)plVar35;
          }
          plVar18 = (long *)((long)plVar11 - uVar12 * (long)plVar35);
        }
      }
      goto LAB_00196acc;
    }
LAB_00196934:
    if ((ulong)plVar18 >> 0x3d == 0) {
      pvVar9 = operator_new((long)plVar18 << 3);
      pvVar10 = (void *)plVar30[3];
      plVar30[3] = (long)pvVar9;
      if (pvVar10 != (void *)0x0) {
        operator_delete(pvVar10);
      }
      plVar35 = (long *)0x0;
      plVar30[4] = (long)plVar18;
      do {
        *(undefined8 *)(plVar30[3] + (long)plVar35 * 8) = 0;
        plVar35 = (long *)((long)plVar35 + 1);
      } while (plVar18 != plVar35);
      plVar17 = (long *)*plVar16;
      plVar35 = plVar18;
      if (plVar17 != (long *)0x0) {
        plVar25 = (long *)plVar17[1];
        uVar38 = NEON_cnt(plVar18,1);
        uVar37 = NEON_uaddlv(uVar38,1);
        uVar12 = CONCAT62((int6)((ulong)uVar38 >> 0x10),uVar37) & 0xffffffff;
        if (uVar12 < 2) {
          plVar25 = (long *)((ulong)plVar25 & (long)plVar18 - 1U);
        }
        else if (plVar18 <= plVar25) {
          uVar13 = 0;
          if (plVar18 != (long *)0x0) {
            uVar13 = (ulong)plVar25 / (ulong)plVar18;
          }
          plVar25 = (long *)((long)plVar25 - uVar13 * (long)plVar18);
        }
        *(long **)(plVar30[3] + (long)plVar25 * 8) = plVar16;
        plVar27 = (long *)*plVar17;
        if (plVar27 != (long *)0x0) {
          do {
            plVar29 = (long *)plVar27[1];
            if (uVar12 < 2) {
              plVar29 = (long *)((ulong)plVar29 & (long)plVar18 - 1U);
            }
            else if (plVar18 <= plVar29) {
              uVar13 = 0;
              if (plVar18 != (long *)0x0) {
                uVar13 = (ulong)plVar29 / (ulong)plVar18;
              }
              plVar29 = (long *)((long)plVar29 - uVar13 * (long)plVar18);
            }
            if (plVar29 != plVar25) {
              if (*(long *)(plVar30[3] + (long)plVar29 * 8) == 0) {
                *(long **)(plVar30[3] + (long)plVar29 * 8) = plVar17;
                plVar25 = plVar29;
              }
              else {
                *plVar17 = *plVar27;
                *plVar27 = **(long **)(plVar30[3] + (long)plVar29 * 8);
                **(undefined8 **)(plVar30[3] + (long)plVar29 * 8) = plVar27;
                plVar27 = plVar17;
              }
            }
            plVar17 = plVar27;
            plVar27 = (long *)*plVar17;
          } while (plVar27 != (long *)0x0);
        }
      }
      goto LAB_00196aa8;
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* try { // try from 00196d60 to 00196d63 has its CatchHandler @ 00196d6c */
    FUN_0015d614();
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 001965f0 with catch @ 00196d64 */
    FUN_0015c8c8();
  }
LAB_00196df4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


