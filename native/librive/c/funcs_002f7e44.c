// ===== 002f7e44  FUN_002f7e44 =====

void FUN_002f7e44(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00382918;
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


// ===== 002f7eb0  FUN_002f7eb0 =====

void FUN_002f7eb0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00382918;
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


// ===== 002f7f18  FUN_002f7f18 =====

undefined8 * FUN_002f7f18(long param_1)

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
  *puVar4 = &PTR_FUN_00382918;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002f7f78 to 002f7f7b has its CatchHandler @ 002f7fb4 */
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


// ===== 002f7fdc  FUN_002f7fdc =====

void FUN_002f7fdc(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00382918;
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


// ===== 002f8074  FUN_002f8074 =====

void FUN_002f8074(long param_1)

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


// ===== 002f80d4  FUN_002f80d4 =====

void FUN_002f80d4(void *param_1)

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


// ===== 002f8130  FUN_002f8130 =====

void FUN_002f8130(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 ulong *param_6)

{
  long lVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  JSError *pJVar7;
  long *plVar8;
  ulong uVar9;
  code *pcVar10;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  long local_80;
  long *plStack_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar9 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002f818c to 002f819b has its CatchHandler @ 002f86e8 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar5 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00395738,0xffffffffffffffff
                            ), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x002f8214;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar8 = (long *)0x0;
      goto joined_r0x002f8214;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar8 = plStack_78;
  }
  lVar6 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002f8214:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar9 == 0) {
    pcVar10 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive34HybridViewModelBooleanPropertySpecEbJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395970
         & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive34HybridViewModelBooleanPropertySpecEbJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395970
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive34HybridViewModelBooleanPropertySpecEbJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395968
       , iVar4 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive34HybridViewModelBooleanPropertySpecEbJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395968
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive34HybridViewModelBooleanPropertySpecEbJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395970
                         );
    }
    if ((uVar9 & 1) != 0) {
      pcVar10 = *(code **)(pcVar10 + *(long *)(lVar5 + ((long)uVar9 >> 1)));
    }
                    /* try { // try from 002f824c to 002f824f has its CatchHandler @ 002f83f8 */
    bVar3 = (*pcVar10)();
    *param_1 = 2;
    *(byte *)(param_1 + 2) = bVar3 & 1;
    if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar5 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 002f82d0 to 002f82df has its CatchHandler @ 002f8884 */
    FUN_002f559c(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002f82ec to 002f82ff has its CatchHandler @ 002f8864 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 002f8300 to 002f8313 has its CatchHandler @ 002f884c */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002f8314 to 002f831f has its CatchHandler @ 002f881c */
    std::__ndk1::to_string(0);
                    /* try { // try from 002f8320 to 002f832f has its CatchHandler @ 002f87f8 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002f8330 to 002f8343 has its CatchHandler @ 002f87d4 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002f8344 to 002f834f has its CatchHandler @ 002f87b0 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 002f8350 to 002f835f has its CatchHandler @ 002f878c */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 002f8360 to 002f8373 has its CatchHandler @ 002f8768 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002f8378 to 002f83b3 has its CatchHandler @ 002f8708 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f88ac  FUN_002f88ac =====

void FUN_002f88ac(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395978) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002f88fc  FUN_002f88fc =====

undefined * FUN_002f88fc(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395980;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f893c  margelo::nitro::rive::HybridViewModelBooleanPropertySpec::loadHybridMethods =====

/* virtual thunk to margelo::nitro::rive::HybridViewModelBooleanPropertySpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridViewModelBooleanPropertySpec::loadHybridMethods
          (HybridViewModelBooleanPropertySpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    loadHybridMethods(this + *(long *)(*(long *)this + -0x30));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f8980  margelo::nitro::rive::HybridViewModelBooleanPropertySpec::loadHybridMethods =====

/* virtual thunk to margelo::nitro::rive::HybridViewModelBooleanPropertySpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridViewModelBooleanPropertySpec::loadHybridMethods
          (HybridViewModelBooleanPropertySpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    loadHybridMethods(this + *(long *)(*(long *)this + -0x20));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002f89c4  FUN_002f89c4 =====

void FUN_002f89c4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2f89c8);
  (*pcVar1)();
}


// ===== 002f89c8  FUN_002f89c8 =====

void FUN_002f89c8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2f89cc);
  (*pcVar1)();
}


// ===== 002f89cc  FUN_002f89cc =====

void FUN_002f89cc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2f89d0);
  (*pcVar1)();
}


// ===== 002f89d0  FUN_002f89d0 =====

void FUN_002f89d0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2f89d4);
  (*pcVar1)();
}


// ===== 002f89d4  margelo::nitro::rive::HybridViewModelColorPropertySpec::loadHybridMethods =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* margelo::nitro::rive::HybridViewModelColorPropertySpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridViewModelColorPropertySpec::loadHybridMethods
          (HybridViewModelColorPropertySpec *this)

{
  long lVar1;
  long lVar2;
  long **pplVar3;
  runtime_error *prVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  basic_string local_1a0;
  char acStack_19f [7];
  char cStack_198;
  char acStack_197 [7];
  undefined1 local_190;
  undefined7 uStack_18f;
  basic_string local_188;
  undefined7 uStack_187;
  undefined4 uStack_180;
  uint uStack_17c;
  long *local_178;
  basic_string local_170;
  undefined4 local_16f;
  void *local_160;
  basic_string local_158;
  char acStack_157 [5];
  undefined2 uStack_152;
  char cStack_150;
  char acStack_14f [5];
  undefined1 uStack_14a;
  undefined1 uStack_149;
  long *local_148;
  basic_string local_140;
  undefined4 local_13f;
  undefined2 local_13b;
  void *local_130;
  basic_string local_128;
  undefined4 uStack_127;
  undefined2 uStack_123;
  undefined1 uStack_121;
  long *plStack_120;
  long *local_118;
  undefined *local_110;
  long *plStack_108;
  long *local_100;
  long *local_f8;
  long *plStack_f0;
  undefined4 local_e8;
  long *local_e0;
  long *plStack_d8;
  long **local_c0;
  undefined8 local_b0;
  ulong local_a8;
  long *plStack_a0;
  long *local_98;
  long *local_90;
  long *plStack_88;
  long **local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  margelo::nitro::HybridObject::loadHybridMethods();
  lVar5 = *(long *)(*(long *)this + -0x38);
  margelo::nitro::HybridObject::loadHybridMethods();
  FUN_002e4024(this + lVar5 + *(long *)(*(long *)(this + lVar5) + -0x20) + 8);
  lVar5 = *(long *)(*(long *)this + -0x20);
  plVar6 = *(long **)(this + lVar5 + 8);
  if (plVar6 == (long *)0x0) {
    local_90 = (long *)0x0;
    plStack_88 = (long *)0x0;
    local_110 = PTR_typeinfo_00395740;
                    /* try { // try from 002f8a64 to 002f8a73 has its CatchHandler @ 002f9cf8 */
    FUN_00264f84(&local_e0,&local_110,&local_90);
    plVar9 = plStack_d8;
    plVar6 = local_e0;
    plVar8 = *(long **)(this + lVar5 + 0x10);
    local_e0 = (long *)0x0;
    plStack_d8 = (long *)0x0;
    *(long **)(this + lVar5 + 0x10) = plVar9;
    *(long **)(this + lVar5 + 8) = plVar6;
    if ((plVar8 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar6 = plStack_d8;
    if ((plStack_d8 != (long *)0x0) &&
       (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_d8 + 1), lVar2 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar6 = plStack_88;
    if ((plStack_88 != (long *)0x0) &&
       (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_88 + 1), lVar2 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar6 = *(long **)(this + lVar5 + 8);
  }
  puVar7 = *(undefined **)(*plVar6 + 8);
  plVar9 = plVar6;
  while (puVar7 != PTR_typeinfo_name_00395a08) {
    plVar9 = (long *)plVar9[1];
    if (plVar9 == (long *)0x0) {
      plStack_d8 = *(long **)(this + lVar5 + 0x10);
      local_e0 = plVar6;
      if (plStack_d8 != (long *)0x0) {
        FUN_00259a00(1,plStack_d8 + 1);
      }
      local_110 = PTR_typeinfo_00395740;
                    /* try { // try from 002f8b80 to 002f8b8f has its CatchHandler @ 002f9cec */
      FUN_00264f84(&local_90,&local_110,&local_e0);
      plVar9 = plStack_88;
      plVar6 = local_90;
      plVar8 = *(long **)(this + lVar5 + 0x10);
      local_90 = (long *)0x0;
      plStack_88 = (long *)0x0;
      *(long **)(this + lVar5 + 0x10) = plVar9;
      *(long **)(this + lVar5 + 8) = plVar6;
      if ((plVar8 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar2 == 0)) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar6 = plStack_88;
      if ((plStack_88 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_88 + 1), lVar2 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar6 = plStack_d8;
      if ((plStack_d8 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_d8 + 1), lVar2 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar9 = *(long **)(this + lVar5 + 8);
      lVar5 = plVar9[6];
      goto joined_r0x002f8c34;
    }
    puVar7 = *(undefined **)(*plVar9 + 8);
  }
  lVar5 = plVar9[6];
joined_r0x002f8c34:
  if (((lVar5 == 0) && (plVar9[0xb] == 0)) && (plVar9[0x10] == 0)) {
    local_128 = (basic_string)0xa;
    uStack_127 = 0x756c6176;
    uStack_123 = 0x65;
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_128);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002f9770 to 002f9783 has its CatchHandler @ 002fa094 */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_128);
                    /* try { // try from 002f9784 to 002f9797 has its CatchHandler @ 002f9f58 */
      FUN_00263450(&local_e0,&local_90,"\" - a getter with that name already exists!");
                    /* try { // try from 002f979c to 002f97d3 has its CatchHandler @ 002f9f34 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002fa140;
    }
    plVar6 = plVar9 + 3;
    lVar5 = FUN_002632b8(*plVar6,plVar9[4],&local_128);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002f97e4 to 002f97f7 has its CatchHandler @ 002fa090 */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_128);
                    /* try { // try from 002f97f8 to 002f980b has its CatchHandler @ 002f9f30 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002f9810 to 002f9847 has its CatchHandler @ 002f9f04 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002fa140;
    }
    local_110 = (undefined *)
                CONCAT17(uStack_121,CONCAT25(uStack_123,CONCAT41(uStack_127,local_128)));
    local_100 = local_118;
    plStack_108 = plStack_120;
    plStack_f0 = _UNK_001d8138;
    local_f8 = _DAT_001d8130;
    local_e8 = 1;
                    /* try { // try from 002f8cb4 to 002f8cbb has its CatchHandler @ 002f9dc0 */
    local_70 = (long **)operator_new(0x38);
    *local_70 = (long *)&PTR_FUN_00383110;
    if (((ulong)local_110 & 1) == 0) {
      local_70[2] = plStack_108;
      *(undefined **)(local_70 + 1) = local_110;
      local_70[3] = local_100;
    }
    else {
                    /* try { // try from 002f8cec to 002f8cef has its CatchHandler @ 002f9cdc */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (local_70 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70[5] = plStack_f0;
    local_70[4] = local_f8;
    *(undefined4 *)(local_70 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_002f8d2c:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_002f8d3c:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_002f8d3c;
      }
      if (local_70 != &local_90) goto LAB_002f8d2c;
      local_c0 = &local_e0;
                    /* try { // try from 002f9524 to 002f952f has its CatchHandler @ 002f9af8 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 0;
    if (((byte)local_128 & 1) == 0) {
      plStack_a0 = plStack_120;
      local_a8 = CONCAT17(uStack_121,CONCAT25(uStack_123,CONCAT41(uStack_127,local_128)));
      local_98 = local_118;
    }
    else {
                    /* try { // try from 002f8d6c to 002f8d73 has its CatchHandler @ 002f9c70 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_118,(ulong)plStack_120);
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_002f8d98:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_002f8d98;
    }
                    /* try { // try from 002f8da4 to 002f8db7 has its CatchHandler @ 002f9db0 */
    FUN_002634d4(plVar9 + 8,&local_128,&local_128,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002f8dec:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002f8dec;
    }
    if (((byte)local_128 & 1) != 0) {
      operator_delete(local_118);
    }
    local_140 = (basic_string)0xa;
    local_13f = 0x756c6176;
    local_13b = 0x65;
    lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_140);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002f9854 to 002f9867 has its CatchHandler @ 002fa074 */
      std::__ndk1::operator+("Cannot add Hybrid Property Setter \"",&local_140);
                    /* try { // try from 002f9868 to 002f987b has its CatchHandler @ 002f9eec */
      FUN_00263450(&local_e0,&local_90,"\" - a setter with that name already exists!");
                    /* try { // try from 002f9880 to 002f98b7 has its CatchHandler @ 002f9ec8 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002fa140;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_140);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002f98c8 to 002f98db has its CatchHandler @ 002fa070 */
      std::__ndk1::operator+("Cannot add Hybrid Property Setter \"",&local_140);
                    /* try { // try from 002f98dc to 002f98ef has its CatchHandler @ 002f9ec4 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002f98f4 to 002f992b has its CatchHandler @ 002f9e98 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002fa140;
    }
                    /* try { // try from 002f8e48 to 002f8e5f has its CatchHandler @ 002f9da8 */
    FUN_002fbc34(&local_e0,&local_140,0x20,1,2);
                    /* try { // try from 002f8e60 to 002f8e73 has its CatchHandler @ 002f9d98 */
    FUN_002634d4(plVar9 + 0xd,&local_140,&local_140,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002f8ea8:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002f8ea8;
    }
    if (((byte)local_140 & 1) != 0) {
      operator_delete(local_130);
    }
    local_158 = (basic_string)0x1a;
    uStack_14a = 0;
    acStack_157[0] = s_getValueAsync_001d6c10[0];
    acStack_157[1] = s_getValueAsync_001d6c10[1];
    acStack_157[2] = s_getValueAsync_001d6c10[2];
    acStack_157[3] = s_getValueAsync_001d6c10[3];
    acStack_157[4] = s_getValueAsync_001d6c10[4];
    uStack_152 = (undefined2)s_getValueAsync_001d6c10._5_3_;
    cStack_150 = SUB31(s_getValueAsync_001d6c10._5_3_,2);
    acStack_14f[0] = s_getValueAsync_001d6c10[8];
    acStack_14f[1] = s_getValueAsync_001d6c10[9];
    acStack_14f[2] = s_getValueAsync_001d6c10[10];
    acStack_14f[3] = s_getValueAsync_001d6c10[0xb];
    acStack_14f[4] = s_getValueAsync_001d6c10[0xc];
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_158);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_158), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002f95a0 to 002f95b3 has its CatchHandler @ 002fa104 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_158);
                    /* try { // try from 002f95b4 to 002f95c7 has its CatchHandler @ 002fa058 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 002f95cc to 002f9603 has its CatchHandler @ 002fa034 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002fa140;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_158);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002f9938 to 002f994b has its CatchHandler @ 002fa030 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_158);
                    /* try { // try from 002f994c to 002f995f has its CatchHandler @ 002f9e94 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002f9964 to 002f999b has its CatchHandler @ 002f9e68 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002fa140;
    }
    plStack_108 = (long *)CONCAT17(uStack_149,CONCAT16(uStack_14a,CONCAT51(acStack_14f,cStack_150)))
    ;
    local_110 = (undefined *)CONCAT26(uStack_152,CONCAT51(acStack_157,local_158));
    local_e8 = 0;
    local_100 = local_148;
    plStack_f0 = _UNK_001d81b8;
    local_f8 = _DAT_001d81b0;
                    /* try { // try from 002f8f38 to 002f8f3f has its CatchHandler @ 002f9d80 */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_00383210;
    if (((ulong)local_110 & 1) == 0) {
      pplVar3[2] = plStack_108;
      *(undefined **)(pplVar3 + 1) = local_110;
      pplVar3[3] = local_100;
    }
    else {
                    /* try { // try from 002f8f70 to 002f8f73 has its CatchHandler @ 002f9c60 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar3;
    pplVar3[5] = plStack_f0;
    pplVar3[4] = local_f8;
    *(undefined4 *)(pplVar3 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_002f8fb0:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_002f8fc0:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_002f8fc0;
      }
      if (local_70 != &local_90) goto LAB_002f8fb0;
      local_c0 = &local_e0;
                    /* try { // try from 002f9544 to 002f954f has its CatchHandler @ 002f9af4 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 0;
    if (((byte)local_158 & 1) == 0) {
      plStack_a0 = (long *)CONCAT17(uStack_149,CONCAT16(uStack_14a,CONCAT51(acStack_14f,cStack_150))
                                   );
      local_a8 = CONCAT26(uStack_152,CONCAT51(acStack_157,local_158));
      local_98 = local_148;
    }
    else {
                    /* try { // try from 002f8ff0 to 002f8ff7 has its CatchHandler @ 002f9bf4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_148,
                 CONCAT17(uStack_149,CONCAT16(uStack_14a,CONCAT51(acStack_14f,cStack_150))));
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_002f901c:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_002f901c;
    }
                    /* try { // try from 002f9028 to 002f903b has its CatchHandler @ 002f9d70 */
    FUN_002634d4(plVar6,&local_158,&local_158,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002f9070:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002f9070;
    }
    if (((byte)local_158 & 1) != 0) {
      operator_delete(local_148);
    }
    local_170 = (basic_string)0x6;
    local_16f = 0x746573;
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_170);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_170), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002f9614 to 002f9627 has its CatchHandler @ 002fa0e8 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_170);
                    /* try { // try from 002f9628 to 002f963b has its CatchHandler @ 002fa018 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 002f9640 to 002f9677 has its CatchHandler @ 002f9ff4 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002fa140;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_170);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002f99a8 to 002f99bb has its CatchHandler @ 002f9ff0 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_170);
                    /* try { // try from 002f99bc to 002f99cf has its CatchHandler @ 002f9e64 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002f99d4 to 002f9a0b has its CatchHandler @ 002f9e38 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002fa140;
    }
                    /* try { // try from 002f90d0 to 002f90e7 has its CatchHandler @ 002f9d68 */
    FUN_002fbc34(&local_e0,&local_170,0x30,1,0);
                    /* try { // try from 002f90e8 to 002f90fb has its CatchHandler @ 002f9d58 */
    FUN_002634d4(plVar6,&local_170,&local_170,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002f9130:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002f9130;
    }
    if (((byte)local_170 & 1) != 0) {
      operator_delete(local_160);
    }
    local_188 = (basic_string)0x16;
    uStack_187 = (undefined7)s_addListener_001d6f8c._0_8_;
    uStack_180 = CONCAT31(0x72656e,SUB81(s_addListener_001d6f8c._0_8_,7));
    uStack_17c = uStack_17c & 0xffffff00;
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_188);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_188), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002f9688 to 002f969b has its CatchHandler @ 002fa0cc */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_188);
                    /* try { // try from 002f969c to 002f96af has its CatchHandler @ 002f9fd8 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 002f96b4 to 002f96eb has its CatchHandler @ 002f9fb4 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002fa140;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_188);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002f9a18 to 002f9a2b has its CatchHandler @ 002f9fb0 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_188);
                    /* try { // try from 002f9a2c to 002f9a3f has its CatchHandler @ 002f9e34 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002f9a44 to 002f9a7b has its CatchHandler @ 002f9e08 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002fa140;
    }
    plStack_108 = (long *)CONCAT44(uStack_17c,uStack_180);
    local_110 = (undefined *)CONCAT71(uStack_187,local_188);
    local_e8 = 0;
    local_100 = local_178;
    plStack_f0 = _UNK_001d7f48;
    local_f8 = _DAT_001d7f40;
                    /* try { // try from 002f91c4 to 002f91cb has its CatchHandler @ 002f9d40 */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_00383290;
    if (((ulong)local_110 & 1) == 0) {
      pplVar3[2] = plStack_108;
      *(undefined **)(pplVar3 + 1) = local_110;
      pplVar3[3] = local_100;
    }
    else {
                    /* try { // try from 002f91fc to 002f91ff has its CatchHandler @ 002f9be4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar3;
    pplVar3[5] = plStack_f0;
    pplVar3[4] = local_f8;
    *(undefined4 *)(pplVar3 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_002f923c:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_002f924c:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_002f924c;
      }
      if (local_70 != &local_90) goto LAB_002f923c;
      local_c0 = &local_e0;
                    /* try { // try from 002f9564 to 002f956f has its CatchHandler @ 002f9af0 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 1;
    if (((byte)local_188 & 1) == 0) {
      plStack_a0 = (long *)CONCAT44(uStack_17c,uStack_180);
      local_a8 = CONCAT71(uStack_187,local_188);
      local_98 = local_178;
    }
    else {
                    /* try { // try from 002f9280 to 002f9287 has its CatchHandler @ 002f9b78 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_178,CONCAT44(uStack_17c,uStack_180));
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_002f92ac:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_002f92ac;
    }
                    /* try { // try from 002f92b8 to 002f92cb has its CatchHandler @ 002f9d30 */
    FUN_002634d4(plVar6,&local_188,&local_188,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002f9300:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002f9300;
    }
    if (((byte)local_188 & 1) != 0) {
      operator_delete(local_178);
    }
    local_1a0 = (basic_string)0x1e;
    local_190 = 0;
    acStack_19f[0] = s_removeListeners_001d79f7[0];
    acStack_19f[1] = s_removeListeners_001d79f7[1];
    acStack_19f[2] = s_removeListeners_001d79f7[2];
    acStack_19f[3] = s_removeListeners_001d79f7[3];
    acStack_19f[4] = s_removeListeners_001d79f7[4];
    acStack_19f[5] = s_removeListeners_001d79f7[5];
    acStack_19f[6] = s_removeListeners_001d79f7[6];
    cStack_198 = s_removeListeners_001d79f7[7];
    acStack_197[0] = s_removeListeners_001d79f7[8];
    acStack_197[1] = s_removeListeners_001d79f7[9];
    acStack_197[2] = s_removeListeners_001d79f7[10];
    acStack_197[3] = s_removeListeners_001d79f7[0xb];
    acStack_197[4] = s_removeListeners_001d79f7[0xc];
    acStack_197[5] = s_removeListeners_001d79f7[0xd];
    acStack_197[6] = s_removeListeners_001d79f7[0xe];
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_1a0);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_1a0), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002f96fc to 002f970f has its CatchHandler @ 002fa0b0 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_1a0);
                    /* try { // try from 002f9710 to 002f9723 has its CatchHandler @ 002f9f98 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 002f9728 to 002f975f has its CatchHandler @ 002f9f74 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002fa140;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_1a0);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002f9a88 to 002f9a9b has its CatchHandler @ 002f9f70 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_1a0);
                    /* try { // try from 002f9a9c to 002f9aaf has its CatchHandler @ 002f9e04 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002f9ab4 to 002f9aeb has its CatchHandler @ 002f9dd8 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002fa140;
    }
    plStack_108 = (long *)CONCAT71(acStack_197,cStack_198);
    local_110 = (undefined *)CONCAT71(acStack_19f,local_1a0);
    local_100 = (long *)CONCAT71(uStack_18f,local_190);
    local_e8 = 0;
    plStack_f0 = _UNK_001d7f78;
    local_f8 = _DAT_001d7f70;
                    /* try { // try from 002f9394 to 002f939b has its CatchHandler @ 002f9d18 */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_00383310;
    if (((ulong)local_110 & 1) == 0) {
      pplVar3[2] = plStack_108;
      *(undefined **)(pplVar3 + 1) = local_110;
      pplVar3[3] = local_100;
    }
    else {
                    /* try { // try from 002f93cc to 002f93cf has its CatchHandler @ 002f9b68 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar3;
    pplVar3[5] = plStack_f0;
    pplVar3[4] = local_f8;
    *(undefined4 *)(pplVar3 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_002f940c:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_002f941c:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_002f941c;
      }
      if (local_70 != &local_90) goto LAB_002f940c;
      local_c0 = &local_e0;
                    /* try { // try from 002f9584 to 002f958f has its CatchHandler @ 002f9aec */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 0;
    if (((byte)local_1a0 & 1) == 0) {
      plStack_a0 = (long *)CONCAT71(acStack_197,cStack_198);
      local_a8 = CONCAT71(acStack_19f,local_1a0);
      local_98 = (long *)CONCAT71(uStack_18f,local_190);
    }
    else {
                    /* try { // try from 002f944c to 002f9453 has its CatchHandler @ 002f9afc */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)CONCAT71(uStack_18f,local_190),CONCAT71(acStack_197,cStack_198));
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_002f9478:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_002f9478;
    }
                    /* try { // try from 002f9484 to 002f9497 has its CatchHandler @ 002f9d08 */
    FUN_002634d4(plVar6,&local_1a0,&local_1a0,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002f94cc:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002f94cc;
    }
    if (((byte)local_1a0 & 1) != 0) {
      operator_delete((void *)CONCAT71(uStack_18f,local_190));
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_002fa140:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002fa144  FUN_002fa144 =====

void FUN_002fa144(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00383310;
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


// ===== 002fa1b0  FUN_002fa1b0 =====

void FUN_002fa1b0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00383310;
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


// ===== 002fa218  FUN_002fa218 =====

undefined8 * FUN_002fa218(long param_1)

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
  *puVar4 = &PTR_FUN_00383310;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002fa278 to 002fa27b has its CatchHandler @ 002fa2b4 */
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


// ===== 002fa2dc  FUN_002fa2dc =====

void FUN_002fa2dc(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00383310;
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


// ===== 002fa374  FUN_002fa374 =====

void FUN_002fa374(long param_1)

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


// ===== 002fa3d4  FUN_002fa3d4 =====

void FUN_002fa3d4(void *param_1)

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


// ===== 002fa430  FUN_002fa430 =====

void FUN_002fa430(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 ulong *param_6)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  JSError *pJVar6;
  long *plVar7;
  ulong uVar8;
  code *pcVar9;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  long local_80;
  long *plStack_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar8 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002fa48c to 002fa49b has its CatchHandler @ 002fa9dc */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar4 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00395740,0xffffffffffffffff
                            ), lVar4 == 0)) {
    lVar4 = 0;
    plVar7 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x002fa514;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto joined_r0x002fa514;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar7 = plStack_78;
  }
  lVar5 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar5 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002fa514:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar8 == 0) {
    pcVar9 = *(code **)(param_2 + 0x20);
    uVar8 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive32HybridViewModelColorPropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395a98
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive32HybridViewModelColorPropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395a98
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive32HybridViewModelColorPropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395a90
       , iVar3 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive32HybridViewModelColorPropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395a90
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive32HybridViewModelColorPropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395a98
                         );
    }
    if ((uVar8 & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(lVar4 + ((long)uVar8 >> 1)));
    }
                    /* try { // try from 002fa54c to 002fa54f has its CatchHandler @ 002fa6ec */
    (*pcVar9)();
    *param_1 = 0;
    if ((plVar7 != (long *)0x0) && (lVar4 = FUN_00255510(0xffffffffffffffff,plVar7 + 1), lVar4 == 0)
       ) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 002fa5c4 to 002fa5d3 has its CatchHandler @ 002fab78 */
    FUN_002fac30(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar4);
    pJVar6 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002fa5e0 to 002fa5f3 has its CatchHandler @ 002fab58 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 002fa5f4 to 002fa607 has its CatchHandler @ 002fab40 */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002fa608 to 002fa613 has its CatchHandler @ 002fab10 */
    std::__ndk1::to_string(0);
                    /* try { // try from 002fa614 to 002fa623 has its CatchHandler @ 002faaec */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002fa624 to 002fa637 has its CatchHandler @ 002faac8 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002fa638 to 002fa643 has its CatchHandler @ 002faaa4 */
    std::__ndk1::to_string(uVar8);
                    /* try { // try from 002fa644 to 002fa653 has its CatchHandler @ 002faa80 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 002fa654 to 002fa667 has its CatchHandler @ 002faa5c */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002fa66c to 002fa6a7 has its CatchHandler @ 002fa9fc */
    facebook::jsi::JSError::JSError(pJVar6,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar6,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002faba0  FUN_002faba0 =====

void FUN_002faba0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395aa0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002fabf0  FUN_002fabf0 =====

undefined * FUN_002fabf0(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395aa8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002fac30  FUN_002fac30 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002fac30(undefined8 *param_1,int param_2,byte *param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  void *pvVar4;
  byte *pbVar5;
  long lVar6;
  undefined *puVar7;
  byte bVar8;
  ulong *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong local_a0;
  ulong local_98;
  undefined8 *local_90;
  byte local_88 [8];
  size_t local_80;
  void *local_78;
  ulong local_70;
  ulong uStack_68;
  undefined8 *local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  if (param_4 == 0) {
    local_60 = (undefined8 *)operator_new(0x40);
    puVar7 = PTR_typeinfo_name_00395a08;
    uStack_68 = _UNK_001d7fa8;
    local_70 = _DAT_001d7fa0;
    *(undefined1 *)((long)local_60 + 0x37) = 0;
    uVar14 = *(undefined8 *)puVar7;
    uVar13 = *(undefined8 *)(puVar7 + 0x18);
    uVar12 = *(undefined8 *)(puVar7 + 0x10);
    uVar10 = *(undefined8 *)(puVar7 + 0x2f);
    local_60[1] = *(undefined8 *)(puVar7 + 8);
    *local_60 = uVar14;
    local_60[3] = uVar13;
    local_60[2] = uVar12;
    uVar12 = *(undefined8 *)(puVar7 + 0x20);
    local_60[5] = *(undefined8 *)(puVar7 + 0x28);
    local_60[4] = uVar12;
    *(undefined8 *)((long)local_60 + 0x2f) = uVar10;
                    /* try { // try from 002facbc to 002faccb has its CatchHandler @ 002faf5c */
    margelo::nitro::TypeInfo::demangleName((basic_string *)&local_70,true);
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
  }
  else {
    margelo::nitro::HybridObject::getName();
  }
  bVar8 = local_88[0];
  if (param_2 == 0) {
    sVar3 = (ulong)(local_88[0] >> 1);
    if ((local_88[0] & 1) != 0) {
      sVar3 = local_80;
    }
    uVar1 = sVar3 + 1;
    if (0xffffffffffffffef < uVar1) goto LAB_002faf1c;
    if (uVar1 < 0x17) {
      local_98 = 0;
      puVar11 = (undefined8 *)((ulong)&local_a0 | 1);
      local_90 = (undefined8 *)0x0;
      local_a0 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_002fae20;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 002fae08 to 002fae0f has its CatchHandler @ 002faf70 */
      puVar11 = (undefined8 *)operator_new(uVar2);
      local_a0 = uVar2 | 1;
      local_98 = uVar1;
      local_90 = puVar11;
LAB_002fae20:
      pvVar4 = (void *)((ulong)local_88 | 1);
      if ((bVar8 & 1) != 0) {
        pvVar4 = local_78;
      }
      memmove(puVar11,pvVar4,sVar3);
    }
    *(undefined2 *)((long)puVar11 + sVar3) = 0x2e;
    pbVar5 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pbVar5 = param_3 + 1;
    }
                    /* try { // try from 002fae60 to 002fae67 has its CatchHandler @ 002faf48 */
    puVar9 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_a0,(ulong)pbVar5);
    local_60 = (undefined8 *)puVar9[2];
    uStack_68 = puVar9[1];
    local_70 = *puVar9;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
                    /* try { // try from 002fae80 to 002fae93 has its CatchHandler @ 002faf30 */
    puVar11 = (undefined8 *)
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_70,0x1d6185);
    uVar10 = puVar11[2];
    uVar13 = puVar11[1];
    uVar12 = *puVar11;
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    param_1[1] = uVar13;
    *param_1 = uVar12;
    param_1[2] = uVar10;
    puVar11 = local_90;
    uVar1 = local_a0;
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
      puVar11 = local_90;
      uVar1 = local_a0;
    }
  }
  else {
    sVar3 = (ulong)(local_88[0] >> 1);
    if ((local_88[0] & 1) != 0) {
      sVar3 = local_80;
    }
    uVar1 = sVar3 + 1;
    if (0xffffffffffffffef < uVar1) {
      if (*(long *)(lVar6 + 0x28) != local_58) goto LAB_002fafb8;
                    /* try { // try from 002faf18 to 002faf1b has its CatchHandler @ 002faf8c */
      FUN_00260a84();
LAB_002faf1c:
      if (*(long *)(lVar6 + 0x28) == local_58) {
                    /* try { // try from 002faf2c to 002faf2f has its CatchHandler @ 002faf70 */
        uVar10 = FUN_00260a84();
                    /* catch() { ... } // from try @ 002fae80 with catch @ 002faf30 */
        if ((local_70 & 1) != 0) {
          operator_delete(local_60);
        }
        if ((local_a0 & 1) != 0) {
          operator_delete(local_90);
        }
        if ((local_88[0] & 1) != 0) {
          operator_delete(local_78);
        }
        if (*(long *)(lVar6 + 0x28) == local_58) {
          FUN_00255d34(uVar10);
        }
      }
      goto LAB_002fafb8;
    }
    if (uVar1 < 0x17) {
      uStack_68 = 0;
      puVar11 = (undefined8 *)((ulong)&local_70 | 1);
      local_60 = (undefined8 *)0x0;
      local_70 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_002fad90;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 002fad78 to 002fad7f has its CatchHandler @ 002faf8c */
      puVar11 = (undefined8 *)operator_new(uVar2);
      local_70 = uVar2 | 1;
      uStack_68 = uVar1;
      local_60 = puVar11;
LAB_002fad90:
      pvVar4 = (void *)((ulong)local_88 | 1);
      if ((bVar8 & 1) != 0) {
        pvVar4 = local_78;
      }
      memmove(puVar11,pvVar4,sVar3);
    }
    *(undefined2 *)((long)puVar11 + sVar3) = 0x2e;
    pbVar5 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pbVar5 = param_3 + 1;
    }
                    /* try { // try from 002fadd0 to 002fadd7 has its CatchHandler @ 002faf74 */
    puVar11 = (undefined8 *)
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_70,(ulong)pbVar5);
    uVar10 = puVar11[2];
    uVar13 = puVar11[1];
    uVar12 = *puVar11;
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    param_1[1] = uVar13;
    *param_1 = uVar12;
    param_1[2] = uVar10;
    puVar11 = local_60;
    uVar1 = local_70;
  }
  if ((uVar1 & 1) != 0) {
    operator_delete(puVar11);
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
LAB_002fafb8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002fafbc  FUN_002fafbc =====

void FUN_002fafbc(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
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


// ===== 002fb048  FUN_002fb048 =====

void FUN_002fb048(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00383290;
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


// ===== 002fb0b4  FUN_002fb0b4 =====

void FUN_002fb0b4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00383290;
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


// ===== 002fb11c  FUN_002fb11c =====

undefined8 * FUN_002fb11c(long param_1)

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
  *puVar4 = &PTR_FUN_00383290;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002fb17c to 002fb17f has its CatchHandler @ 002fb1b8 */
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


// ===== 002fb1e0  FUN_002fb1e0 =====

void FUN_002fb1e0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00383290;
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


// ===== 002fb278  FUN_002fb278 =====

void FUN_002fb278(long param_1)

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


// ===== 002fb2d8  FUN_002fb2d8 =====

void FUN_002fb2d8(void *param_1)

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


// ===== 002fb334  FUN_002fb334 =====

void FUN_002fb334(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
                 ulong *param_6)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  JSError *pJVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined8 *local_d0 [4];
  undefined8 **local_b0;
  long local_a0;
  long *plStack_98;
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar10 = *param_5;
  uVar9 = *param_6;
  local_d0[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002fb394 to 002fb3a3 has its CatchHandler @ 002fb9dc */
  (**(code **)(*param_3 + 0x160))(&local_a0,param_3,local_d0);
  if ((local_a0 == 0) ||
     (lVar5 = __dynamic_cast(local_a0,PTR_typeinfo_00394860,PTR_typeinfo_00395740,0xffffffffffffffff
                            ), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_98 != (long *)0x0) goto LAB_002fb3f0;
  }
  else if (plStack_98 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
    FUN_00259a00(1,plStack_98 + 1);
    plVar8 = plStack_98;
LAB_002fb3f0:
    lVar6 = FUN_00255510(0xffffffffffffffff,plStack_98 + 1);
    if (lVar6 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
  if (local_d0[0] != (undefined8 *)0x0) {
    (**(code **)*local_d0[0])();
  }
  if (uVar9 != 1) {
                    /* try { // try from 002fb558 to 002fb567 has its CatchHandler @ 002fbb7c */
    FUN_002fac30(&local_a0,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002fb574 to 002fb587 has its CatchHandler @ 002fbb5c */
    std::__ndk1::operator+("`",(basic_string *)&local_a0);
                    /* try { // try from 002fb588 to 002fb59b has its CatchHandler @ 002fbb44 */
    FUN_00263450(auStack_130,auStack_148,"` expected ");
                    /* try { // try from 002fb59c to 002fb5a7 has its CatchHandler @ 002fbb14 */
    std::__ndk1::to_string(1);
                    /* try { // try from 002fb5a8 to 002fb5b7 has its CatchHandler @ 002fbaf0 */
    FUN_00264adc(auStack_118,auStack_130,auStack_160);
                    /* try { // try from 002fb5b8 to 002fb5cb has its CatchHandler @ 002fbacc */
    FUN_00263450(auStack_100,auStack_118," arguments, but received ");
                    /* try { // try from 002fb5cc to 002fb5d7 has its CatchHandler @ 002fbaa8 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 002fb5d8 to 002fb5e7 has its CatchHandler @ 002fba84 */
    FUN_00264adc(auStack_e8,auStack_100,auStack_178);
                    /* try { // try from 002fb5e8 to 002fb5fb has its CatchHandler @ 002fba5c */
    FUN_00263450(local_d0,auStack_e8,&DAT_001d5be0);
                    /* try { // try from 002fb600 to 002fb63b has its CatchHandler @ 002fb9fc */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_d0);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
    goto LAB_002fbba0;
  }
  pcVar11 = *(code **)(param_2 + 0x20);
  uVar9 = *(ulong *)(param_2 + 0x28);
  if (((*
        PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive32HybridViewModelColorPropertySpecENSt6__ndk18functionIFvvEEEJRKNS6_IFvdEEEEJLm0EEEEN8facebook3jsi5ValueEPT_MSG_FT0_DpT1_ERNSE_7RuntimeEPKSF_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395a78
       & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(
                                 PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive32HybridViewModelColorPropertySpecENSt6__ndk18functionIFvvEEEJRKNS6_IFvdEEEEJLm0EEEEN8facebook3jsi5ValueEPT_MSG_FT0_DpT1_ERNSE_7RuntimeEPKSF_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395a78
                                 ),
     puVar3 = 
     PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive32HybridViewModelColorPropertySpecENSt6__ndk18functionIFvvEEEJRKNS6_IFvdEEEEJLm0EEEEN8facebook3jsi5ValueEPT_MSG_FT0_DpT1_ERNSE_7RuntimeEPKSF_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395a70
     , iVar4 != 0)) {
    *(undefined4 *)
     PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive32HybridViewModelColorPropertySpecENSt6__ndk18functionIFvvEEEJRKNS6_IFvdEEEEJLm0EEEEN8facebook3jsi5ValueEPT_MSG_FT0_DpT1_ERNSE_7RuntimeEPKSF_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395a70
         = 0;
    __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
    __cxa_guard_release(
                       PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive32HybridViewModelColorPropertySpecENSt6__ndk18functionIFvvEEEJRKNS6_IFvdEEEEJLm0EEEEN8facebook3jsi5ValueEPT_MSG_FT0_DpT1_ERNSE_7RuntimeEPKSF_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395a78
                       );
  }
  plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
  if ((uVar9 & 1) != 0) {
    pcVar11 = *(code **)(pcVar11 + *plVar1);
  }
                    /* try { // try from 002fb458 to 002fb467 has its CatchHandler @ 002fb6e8 */
  FUN_0026be64(local_d0,param_3,uVar10);
                    /* try { // try from 002fb468 to 002fb47b has its CatchHandler @ 002fb6ac */
  (*pcVar11)(&local_a0,plVar1,local_d0);
  if (local_b0 == local_d0) {
    lVar5 = 4;
    local_b0 = local_d0;
LAB_002fb49c:
    (*(code *)(*local_b0)[lVar5])();
  }
  else if (local_b0 != (undefined8 **)0x0) {
    lVar5 = 5;
    goto LAB_002fb49c;
  }
                    /* try { // try from 002fb4a8 to 002fb4bb has its CatchHandler @ 002fb68c */
  FUN_002e76cc(param_1,param_3,&local_a0);
  if (local_80 == &local_a0) {
    lVar5 = 4;
    local_80 = &local_a0;
LAB_002fb4dc:
    (**(code **)(*local_80 + lVar5 * 8))();
  }
  else if (local_80 != (long *)0x0) {
    lVar5 = 5;
    goto LAB_002fb4dc;
  }
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_002fbba0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002fbba4  FUN_002fbba4 =====

void FUN_002fbba4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395a80) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002fbbf4  FUN_002fbbf4 =====

undefined * FUN_002fbbf4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395a88;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002fbc34  FUN_002fbc34 =====

void FUN_002fbc34(long param_1,ulong *param_2,long param_3,long param_4,undefined4 param_5)

{
  long lVar1;
  long *plVar2;
  long **pplVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_b0;
  ulong uStack_a8;
  char *local_a0;
  long local_98;
  long lStack_90;
  undefined4 local_88;
  long local_80 [4];
  long *local_60 [3];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*param_2 & 1) == 0) {
    uStack_a8 = param_2[1];
    local_b0 = *param_2;
    local_a0 = (char *)param_2[2];
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_b0,(char *)param_2[2],param_2[1]);
  }
  local_98 = param_3;
  lStack_90 = param_4;
  local_88 = param_5;
                    /* try { // try from 002fbc9c to 002fbca3 has its CatchHandler @ 002fbe4c */
  local_60[0] = (long *)operator_new(0x38);
  *local_60[0] = (long)&PTR_FUN_00383190;
  if ((local_b0 & 1) == 0) {
    local_60[0][2] = uStack_a8;
    *(ulong *)(local_60[0] + 1) = local_b0;
    local_60[0][3] = (long)local_a0;
  }
  else {
                    /* try { // try from 002fbcd4 to 002fbcd7 has its CatchHandler @ 002fbe3c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (local_60[0] + 1),local_a0,uStack_a8);
  }
  local_60[0][5] = lStack_90;
  local_60[0][4] = local_98;
  *(undefined4 *)(local_60[0] + 6) = local_88;
  if (((byte)local_b0._0_1_ & 1) == 0) {
LAB_002fbd14:
    *(long **)(param_1 + 0x20) = local_60[0];
    pplVar3 = local_60;
LAB_002fbd28:
    *pplVar3 = (long *)0x0;
  }
  else {
    operator_delete(local_a0);
    if (local_60[0] == (long *)0x0) {
      pplVar3 = (long **)(param_1 + 0x20);
      goto LAB_002fbd28;
    }
    if (local_60[0] != local_80) goto LAB_002fbd14;
    *(long *)(param_1 + 0x20) = param_1;
                    /* try { // try from 002fbdc0 to 002fbdcb has its CatchHandler @ 002fbdd0 */
    (**(code **)(local_80[0] + 0x18))(local_80,param_1);
  }
  uVar4 = *param_2;
  *(undefined8 *)(param_1 + 0x30) = 1;
  if ((uVar4 & 1) == 0) {
    uVar6 = *param_2;
    uVar4 = param_2[2];
    *(ulong *)(param_1 + 0x40) = param_2[1];
    *(ulong *)(param_1 + 0x38) = uVar6;
    *(ulong *)(param_1 + 0x48) = uVar4;
  }
  else {
                    /* try { // try from 002fbd54 to 002fbd5b has its CatchHandler @ 002fbdd4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 0x38),(char *)param_2[2],param_2[1]);
  }
  if (local_60[0] == local_80) {
    lVar5 = 4;
    plVar2 = local_80;
  }
  else {
    if (local_60[0] == (long *)0x0) goto LAB_002fbd8c;
    lVar5 = 5;
    plVar2 = local_60[0];
  }
  (**(code **)(*plVar2 + lVar5 * 8))();
LAB_002fbd8c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002fbe7c  FUN_002fbe7c =====

void FUN_002fbe7c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00383190;
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


// ===== 002fbee8  FUN_002fbee8 =====

void FUN_002fbee8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00383190;
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


// ===== 002fbf50  FUN_002fbf50 =====

undefined8 * FUN_002fbf50(long param_1)

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
  *puVar4 = &PTR_FUN_00383190;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002fbfb0 to 002fbfb3 has its CatchHandler @ 002fbfec */
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


// ===== 002fc014  FUN_002fc014 =====

void FUN_002fc014(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00383190;
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


// ===== 002fc0ac  FUN_002fc0ac =====

void FUN_002fc0ac(long param_1)

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


// ===== 002fc10c  FUN_002fc10c =====

void FUN_002fc10c(void *param_1)

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


// ===== 002fc168  FUN_002fc168 =====

void FUN_002fc168(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 ulong *param_6)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  JSError *pJVar7;
  long *plVar8;
  ulong uVar9;
  code *pcVar10;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  long local_80;
  long *plStack_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar9 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002fc1c8 to 002fc1d7 has its CatchHandler @ 002fc444 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar5 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00395740,0xffffffffffffffff
                            ), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x002fc250;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar8 = (long *)0x0;
      goto joined_r0x002fc250;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar8 = plStack_78;
  }
  lVar6 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002fc250:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar9 == 1) {
    pcVar10 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00395a38 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_defaultValue_00395a38), puVar3 = PTR_defaultValue_00395a30,
       iVar4 != 0)) {
      *(undefined4 *)PTR_defaultValue_00395a30 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00395a38);
    }
    plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
    if ((uVar9 & 1) != 0) {
      pcVar10 = *(code **)(pcVar10 + *plVar1);
    }
                    /* try { // try from 002fc28c to 002fc29b has its CatchHandler @ 002fc4e8 */
    facebook::jsi::Value::asNumber();
    (*pcVar10)(plVar1);
    *param_1 = 0;
    if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar5 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 002fc310 to 002fc31f has its CatchHandler @ 002fc8d0 */
    FUN_002fac30(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002fc32c to 002fc33f has its CatchHandler @ 002fc8b0 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 002fc340 to 002fc353 has its CatchHandler @ 002fc898 */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002fc354 to 002fc35f has its CatchHandler @ 002fc868 */
    std::__ndk1::to_string(1);
                    /* try { // try from 002fc360 to 002fc36f has its CatchHandler @ 002fc844 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002fc370 to 002fc383 has its CatchHandler @ 002fc820 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002fc384 to 002fc38f has its CatchHandler @ 002fc7fc */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 002fc390 to 002fc39f has its CatchHandler @ 002fc7d8 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 002fc3a0 to 002fc3b3 has its CatchHandler @ 002fc4c4 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002fc3b8 to 002fc3f3 has its CatchHandler @ 002fc464 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002fc8f8  FUN_002fc8f8 =====

void FUN_002fc8f8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395a40) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002fc948  FUN_002fc948 =====

undefined * FUN_002fc948(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395a48;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002fc988  FUN_002fc988 =====

void FUN_002fc988(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00383210;
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


// ===== 002fc9f4  FUN_002fc9f4 =====

void FUN_002fc9f4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00383210;
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


// ===== 002fca5c  FUN_002fca5c =====

undefined8 * FUN_002fca5c(long param_1)

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
  *puVar4 = &PTR_FUN_00383210;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002fcabc to 002fcabf has its CatchHandler @ 002fcaf8 */
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


// ===== 002fcb20  FUN_002fcb20 =====

void FUN_002fcb20(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00383210;
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


// ===== 002fcbb8  FUN_002fcbb8 =====

void FUN_002fcbb8(long param_1)

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


// ===== 002fcc18  FUN_002fcc18 =====

void FUN_002fcc18(void *param_1)

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


// ===== 002fcc74  FUN_002fcc74 =====

void FUN_002fcc74(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 ulong *param_6)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  JSError *pJVar6;
  long *plVar7;
  ulong uVar8;
  code *pcVar9;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined8 local_110;
  long *local_108;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  long local_80;
  long *plStack_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar8 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002fccd0 to 002fccdf has its CatchHandler @ 002fd280 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar4 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00395740,0xffffffffffffffff
                            ), lVar4 == 0)) {
    lVar4 = 0;
    plVar7 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x002fcd58;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto joined_r0x002fcd58;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar7 = plStack_78;
  }
  lVar5 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar5 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002fcd58:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar8 == 0) {
    pcVar9 = *(code **)(param_2 + 0x20);
    uVar8 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive32HybridViewModelColorPropertySpecENSt6__ndk110shared_ptrINS0_7PromiseIdEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395a58
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive32HybridViewModelColorPropertySpecENSt6__ndk110shared_ptrINS0_7PromiseIdEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395a58
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive32HybridViewModelColorPropertySpecENSt6__ndk110shared_ptrINS0_7PromiseIdEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395a50
       , iVar3 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive32HybridViewModelColorPropertySpecENSt6__ndk110shared_ptrINS0_7PromiseIdEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395a50
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive32HybridViewModelColorPropertySpecENSt6__ndk110shared_ptrINS0_7PromiseIdEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395a58
                         );
    }
    if ((uVar8 & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(lVar4 + ((long)uVar8 >> 1)));
    }
                    /* try { // try from 002fcd90 to 002fcd97 has its CatchHandler @ 002fcf88 */
    (*pcVar9)(&local_110);
                    /* try { // try from 002fcd9c to 002fcda7 has its CatchHandler @ 002fcf70 */
    FUN_0026ab84(param_1,param_3,local_110,local_108);
    if ((local_108 != (long *)0x0) &&
       (lVar4 = FUN_00255510(0xffffffffffffffff,local_108 + 1), lVar4 == 0)) {
      (**(code **)(*local_108 + 0x10))(local_108);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if ((plVar7 != (long *)0x0) && (lVar4 = FUN_00255510(0xffffffffffffffff,plVar7 + 1), lVar4 == 0)
       ) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 002fce48 to 002fce57 has its CatchHandler @ 002fd41c */
    FUN_002fac30(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar4);
    pJVar6 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002fce64 to 002fce77 has its CatchHandler @ 002fd3fc */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 002fce78 to 002fce8b has its CatchHandler @ 002fd3e4 */
    FUN_00263450(auStack_f8,&local_110,"` expected ");
                    /* try { // try from 002fce8c to 002fce97 has its CatchHandler @ 002fd3b4 */
    std::__ndk1::to_string(0);
                    /* try { // try from 002fce98 to 002fcea7 has its CatchHandler @ 002fd390 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002fcea8 to 002fcebb has its CatchHandler @ 002fd36c */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002fcebc to 002fcec7 has its CatchHandler @ 002fd348 */
    std::__ndk1::to_string(uVar8);
                    /* try { // try from 002fcec8 to 002fced7 has its CatchHandler @ 002fd324 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 002fced8 to 002fceeb has its CatchHandler @ 002fd300 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002fcef0 to 002fcf2b has its CatchHandler @ 002fd2a0 */
    facebook::jsi::JSError::JSError(pJVar6,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar6,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002fd444  FUN_002fd444 =====

void FUN_002fd444(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395a60) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002fd494  FUN_002fd494 =====

undefined * FUN_002fd494(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395a68;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002fd4d4  FUN_002fd4d4 =====

void FUN_002fd4d4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00383110;
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


// ===== 002fd540  FUN_002fd540 =====

void FUN_002fd540(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00383110;
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


// ===== 002fd5a8  FUN_002fd5a8 =====

undefined8 * FUN_002fd5a8(long param_1)

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
  *puVar4 = &PTR_FUN_00383110;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002fd608 to 002fd60b has its CatchHandler @ 002fd644 */
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


// ===== 002fd66c  FUN_002fd66c =====

void FUN_002fd66c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00383110;
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


// ===== 002fd704  FUN_002fd704 =====

void FUN_002fd704(long param_1)

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


// ===== 002fd764  FUN_002fd764 =====

void FUN_002fd764(void *param_1)

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


// ===== 002fd7c0  FUN_002fd7c0 =====

void FUN_002fd7c0(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 ulong *param_6)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  JSError *pJVar6;
  long *plVar7;
  ulong uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  long local_80;
  long *plStack_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar8 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002fd81c to 002fd82b has its CatchHandler @ 002fdd74 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar4 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00395740,0xffffffffffffffff
                            ), lVar4 == 0)) {
    lVar4 = 0;
    plVar7 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x002fd8a4;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto joined_r0x002fd8a4;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar7 = plStack_78;
  }
  lVar5 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar5 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002fd8a4:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar8 == 0) {
    pcVar9 = *(code **)(param_2 + 0x20);
    uVar8 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive32HybridViewModelColorPropertySpecEdJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395a18
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive32HybridViewModelColorPropertySpecEdJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395a18
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive32HybridViewModelColorPropertySpecEdJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395a10
       , iVar3 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive32HybridViewModelColorPropertySpecEdJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395a10
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive32HybridViewModelColorPropertySpecEdJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395a18
                         );
    }
    if ((uVar8 & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(lVar4 + ((long)uVar8 >> 1)));
    }
                    /* try { // try from 002fd8dc to 002fd8df has its CatchHandler @ 002fda84 */
    uVar10 = (*pcVar9)();
    *(undefined8 *)(param_1 + 2) = uVar10;
    *param_1 = 3;
    if ((plVar7 != (long *)0x0) && (lVar4 = FUN_00255510(0xffffffffffffffff,plVar7 + 1), lVar4 == 0)
       ) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 002fd95c to 002fd96b has its CatchHandler @ 002fdf10 */
    FUN_002fac30(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar4);
    pJVar6 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002fd978 to 002fd98b has its CatchHandler @ 002fdef0 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 002fd98c to 002fd99f has its CatchHandler @ 002fded8 */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002fd9a0 to 002fd9ab has its CatchHandler @ 002fdea8 */
    std::__ndk1::to_string(0);
                    /* try { // try from 002fd9ac to 002fd9bb has its CatchHandler @ 002fde84 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002fd9bc to 002fd9cf has its CatchHandler @ 002fde60 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002fd9d0 to 002fd9db has its CatchHandler @ 002fde3c */
    std::__ndk1::to_string(uVar8);
                    /* try { // try from 002fd9dc to 002fd9eb has its CatchHandler @ 002fde18 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 002fd9ec to 002fd9ff has its CatchHandler @ 002fddf4 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002fda04 to 002fda3f has its CatchHandler @ 002fdd94 */
    facebook::jsi::JSError::JSError(pJVar6,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar6,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002fdf38  FUN_002fdf38 =====

void FUN_002fdf38(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395a20) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002fdf88  FUN_002fdf88 =====

undefined * FUN_002fdf88(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395a28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002fdfc8  margelo::nitro::rive::HybridViewModelColorPropertySpec::loadHybridMethods =====

/* virtual thunk to margelo::nitro::rive::HybridViewModelColorPropertySpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridViewModelColorPropertySpec::loadHybridMethods
          (HybridViewModelColorPropertySpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    loadHybridMethods(this + *(long *)(*(long *)this + -0x30));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002fe00c  margelo::nitro::rive::HybridViewModelColorPropertySpec::loadHybridMethods =====

/* virtual thunk to margelo::nitro::rive::HybridViewModelColorPropertySpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridViewModelColorPropertySpec::loadHybridMethods
          (HybridViewModelColorPropertySpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    loadHybridMethods(this + *(long *)(*(long *)this + -0x20));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002fe050  FUN_002fe050 =====

void FUN_002fe050(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2fe054);
  (*pcVar1)();
}


// ===== 002fe054  FUN_002fe054 =====

void FUN_002fe054(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2fe058);
  (*pcVar1)();
}


// ===== 002fe058  FUN_002fe058 =====

void FUN_002fe058(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2fe05c);
  (*pcVar1)();
}


// ===== 002fe05c  FUN_002fe05c =====

void FUN_002fe05c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2fe060);
  (*pcVar1)();
}


// ===== 002fe060  margelo::nitro::rive::HybridViewModelEnumPropertySpec::loadHybridMethods =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* margelo::nitro::rive::HybridViewModelEnumPropertySpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridViewModelEnumPropertySpec::loadHybridMethods
          (HybridViewModelEnumPropertySpec *this)

{
  long lVar1;
  long lVar2;
  long **pplVar3;
  runtime_error *prVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  basic_string local_1a0;
  char acStack_19f [7];
  char cStack_198;
  char acStack_197 [7];
  undefined1 local_190;
  undefined7 uStack_18f;
  basic_string local_188;
  undefined7 uStack_187;
  undefined4 uStack_180;
  uint uStack_17c;
  long *local_178;
  basic_string local_170;
  undefined4 local_16f;
  void *local_160;
  basic_string local_158;
  char acStack_157 [5];
  undefined2 uStack_152;
  char cStack_150;
  char acStack_14f [5];
  undefined1 uStack_14a;
  undefined1 uStack_149;
  long *local_148;
  basic_string local_140;
  undefined4 local_13f;
  undefined2 local_13b;
  void *local_130;
  basic_string local_128;
  undefined4 uStack_127;
  undefined2 uStack_123;
  undefined1 uStack_121;
  long *plStack_120;
  long *local_118;
  undefined *local_110;
  long *plStack_108;
  long *local_100;
  long *local_f8;
  long *plStack_f0;
  undefined4 local_e8;
  long *local_e0;
  long *plStack_d8;
  long **local_c0;
  undefined8 local_b0;
  ulong local_a8;
  long *plStack_a0;
  long *local_98;
  long *local_90;
  long *plStack_88;
  long **local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  margelo::nitro::HybridObject::loadHybridMethods();
  lVar5 = *(long *)(*(long *)this + -0x38);
  margelo::nitro::HybridObject::loadHybridMethods();
  FUN_002e4024(this + lVar5 + *(long *)(*(long *)(this + lVar5) + -0x20) + 8);
  lVar5 = *(long *)(*(long *)this + -0x20);
  plVar6 = *(long **)(this + lVar5 + 8);
  if (plVar6 == (long *)0x0) {
    local_90 = (long *)0x0;
    plStack_88 = (long *)0x0;
    local_110 = PTR_typeinfo_00395748;
                    /* try { // try from 002fe0f0 to 002fe0ff has its CatchHandler @ 002ff384 */
    FUN_00264f84(&local_e0,&local_110,&local_90);
    plVar9 = plStack_d8;
    plVar6 = local_e0;
    plVar8 = *(long **)(this + lVar5 + 0x10);
    local_e0 = (long *)0x0;
    plStack_d8 = (long *)0x0;
    *(long **)(this + lVar5 + 0x10) = plVar9;
    *(long **)(this + lVar5 + 8) = plVar6;
    if ((plVar8 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar6 = plStack_d8;
    if ((plStack_d8 != (long *)0x0) &&
       (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_d8 + 1), lVar2 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar6 = plStack_88;
    if ((plStack_88 != (long *)0x0) &&
       (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_88 + 1), lVar2 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar6 = *(long **)(this + lVar5 + 8);
  }
  puVar7 = *(undefined **)(*plVar6 + 8);
  plVar9 = plVar6;
  while (puVar7 != PTR_typeinfo_name_00395ab0) {
    plVar9 = (long *)plVar9[1];
    if (plVar9 == (long *)0x0) {
      plStack_d8 = *(long **)(this + lVar5 + 0x10);
      local_e0 = plVar6;
      if (plStack_d8 != (long *)0x0) {
        FUN_00259a00(1,plStack_d8 + 1);
      }
      local_110 = PTR_typeinfo_00395748;
                    /* try { // try from 002fe20c to 002fe21b has its CatchHandler @ 002ff378 */
      FUN_00264f84(&local_90,&local_110,&local_e0);
      plVar9 = plStack_88;
      plVar6 = local_90;
      plVar8 = *(long **)(this + lVar5 + 0x10);
      local_90 = (long *)0x0;
      plStack_88 = (long *)0x0;
      *(long **)(this + lVar5 + 0x10) = plVar9;
      *(long **)(this + lVar5 + 8) = plVar6;
      if ((plVar8 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar2 == 0)) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar6 = plStack_88;
      if ((plStack_88 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_88 + 1), lVar2 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar6 = plStack_d8;
      if ((plStack_d8 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_d8 + 1), lVar2 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar9 = *(long **)(this + lVar5 + 8);
      lVar5 = plVar9[6];
      goto joined_r0x002fe2c0;
    }
    puVar7 = *(undefined **)(*plVar9 + 8);
  }
  lVar5 = plVar9[6];
joined_r0x002fe2c0:
  if (((lVar5 == 0) && (plVar9[0xb] == 0)) && (plVar9[0x10] == 0)) {
    local_128 = (basic_string)0xa;
    uStack_127 = 0x756c6176;
    uStack_123 = 0x65;
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_128);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002fedfc to 002fee0f has its CatchHandler @ 002ff720 */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_128);
                    /* try { // try from 002fee10 to 002fee23 has its CatchHandler @ 002ff5e4 */
      FUN_00263450(&local_e0,&local_90,"\" - a getter with that name already exists!");
                    /* try { // try from 002fee28 to 002fee5f has its CatchHandler @ 002ff5c0 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002ff7cc;
    }
    plVar6 = plVar9 + 3;
    lVar5 = FUN_002632b8(*plVar6,plVar9[4],&local_128);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002fee70 to 002fee83 has its CatchHandler @ 002ff71c */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_128);
                    /* try { // try from 002fee84 to 002fee97 has its CatchHandler @ 002ff5bc */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002fee9c to 002feed3 has its CatchHandler @ 002ff590 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002ff7cc;
    }
    local_110 = (undefined *)
                CONCAT17(uStack_121,CONCAT25(uStack_123,CONCAT41(uStack_127,local_128)));
    local_100 = local_118;
    plStack_108 = plStack_120;
    plStack_f0 = _UNK_001d8138;
    local_f8 = _DAT_001d8130;
    local_e8 = 1;
                    /* try { // try from 002fe340 to 002fe347 has its CatchHandler @ 002ff44c */
    local_70 = (long **)operator_new(0x38);
    *local_70 = (long *)&PTR_FUN_00383678;
    if (((ulong)local_110 & 1) == 0) {
      local_70[2] = plStack_108;
      *(undefined **)(local_70 + 1) = local_110;
      local_70[3] = local_100;
    }
    else {
                    /* try { // try from 002fe378 to 002fe37b has its CatchHandler @ 002ff368 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (local_70 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70[5] = plStack_f0;
    local_70[4] = local_f8;
    *(undefined4 *)(local_70 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_002fe3b8:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_002fe3c8:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_002fe3c8;
      }
      if (local_70 != &local_90) goto LAB_002fe3b8;
      local_c0 = &local_e0;
                    /* try { // try from 002febb0 to 002febbb has its CatchHandler @ 002ff184 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 0;
    if (((byte)local_128 & 1) == 0) {
      plStack_a0 = plStack_120;
      local_a8 = CONCAT17(uStack_121,CONCAT25(uStack_123,CONCAT41(uStack_127,local_128)));
      local_98 = local_118;
    }
    else {
                    /* try { // try from 002fe3f8 to 002fe3ff has its CatchHandler @ 002ff2fc */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_118,(ulong)plStack_120);
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_002fe424:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_002fe424;
    }
                    /* try { // try from 002fe430 to 002fe443 has its CatchHandler @ 002ff43c */
    FUN_002634d4(plVar9 + 8,&local_128,&local_128,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002fe478:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002fe478;
    }
    if (((byte)local_128 & 1) != 0) {
      operator_delete(local_118);
    }
    local_140 = (basic_string)0xa;
    local_13f = 0x756c6176;
    local_13b = 0x65;
    lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_140);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002feee0 to 002feef3 has its CatchHandler @ 002ff700 */
      std::__ndk1::operator+("Cannot add Hybrid Property Setter \"",&local_140);
                    /* try { // try from 002feef4 to 002fef07 has its CatchHandler @ 002ff578 */
      FUN_00263450(&local_e0,&local_90,"\" - a setter with that name already exists!");
                    /* try { // try from 002fef0c to 002fef43 has its CatchHandler @ 002ff554 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002ff7cc;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_140);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002fef54 to 002fef67 has its CatchHandler @ 002ff6fc */
      std::__ndk1::operator+("Cannot add Hybrid Property Setter \"",&local_140);
                    /* try { // try from 002fef68 to 002fef7b has its CatchHandler @ 002ff550 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002fef80 to 002fefb7 has its CatchHandler @ 002ff524 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002ff7cc;
    }
                    /* try { // try from 002fe4d4 to 002fe4eb has its CatchHandler @ 002ff434 */
    FUN_003012c0(&local_e0,&local_140,0x20,1,2);
                    /* try { // try from 002fe4ec to 002fe4ff has its CatchHandler @ 002ff424 */
    FUN_002634d4(plVar9 + 0xd,&local_140,&local_140,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002fe534:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002fe534;
    }
    if (((byte)local_140 & 1) != 0) {
      operator_delete(local_130);
    }
    local_158 = (basic_string)0x1a;
    uStack_14a = 0;
    acStack_157[0] = s_getValueAsync_001d6c10[0];
    acStack_157[1] = s_getValueAsync_001d6c10[1];
    acStack_157[2] = s_getValueAsync_001d6c10[2];
    acStack_157[3] = s_getValueAsync_001d6c10[3];
    acStack_157[4] = s_getValueAsync_001d6c10[4];
    uStack_152 = (undefined2)s_getValueAsync_001d6c10._5_3_;
    cStack_150 = SUB31(s_getValueAsync_001d6c10._5_3_,2);
    acStack_14f[0] = s_getValueAsync_001d6c10[8];
    acStack_14f[1] = s_getValueAsync_001d6c10[9];
    acStack_14f[2] = s_getValueAsync_001d6c10[10];
    acStack_14f[3] = s_getValueAsync_001d6c10[0xb];
    acStack_14f[4] = s_getValueAsync_001d6c10[0xc];
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_158);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_158), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002fec2c to 002fec3f has its CatchHandler @ 002ff790 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_158);
                    /* try { // try from 002fec40 to 002fec53 has its CatchHandler @ 002ff6e4 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 002fec58 to 002fec8f has its CatchHandler @ 002ff6c0 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002ff7cc;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_158);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002fefc4 to 002fefd7 has its CatchHandler @ 002ff6bc */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_158);
                    /* try { // try from 002fefd8 to 002fefeb has its CatchHandler @ 002ff520 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002feff0 to 002ff027 has its CatchHandler @ 002ff4f4 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002ff7cc;
    }
    plStack_108 = (long *)CONCAT17(uStack_149,CONCAT16(uStack_14a,CONCAT51(acStack_14f,cStack_150)))
    ;
    local_110 = (undefined *)CONCAT26(uStack_152,CONCAT51(acStack_157,local_158));
    local_e8 = 0;
    local_100 = local_148;
    plStack_f0 = _UNK_001d81b8;
    local_f8 = _DAT_001d81b0;
                    /* try { // try from 002fe5c4 to 002fe5cb has its CatchHandler @ 002ff40c */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_00383778;
    if (((ulong)local_110 & 1) == 0) {
      pplVar3[2] = plStack_108;
      *(undefined **)(pplVar3 + 1) = local_110;
      pplVar3[3] = local_100;
    }
    else {
                    /* try { // try from 002fe5fc to 002fe5ff has its CatchHandler @ 002ff2ec */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar3;
    pplVar3[5] = plStack_f0;
    pplVar3[4] = local_f8;
    *(undefined4 *)(pplVar3 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_002fe63c:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_002fe64c:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_002fe64c;
      }
      if (local_70 != &local_90) goto LAB_002fe63c;
      local_c0 = &local_e0;
                    /* try { // try from 002febd0 to 002febdb has its CatchHandler @ 002ff180 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 0;
    if (((byte)local_158 & 1) == 0) {
      plStack_a0 = (long *)CONCAT17(uStack_149,CONCAT16(uStack_14a,CONCAT51(acStack_14f,cStack_150))
                                   );
      local_a8 = CONCAT26(uStack_152,CONCAT51(acStack_157,local_158));
      local_98 = local_148;
    }
    else {
                    /* try { // try from 002fe67c to 002fe683 has its CatchHandler @ 002ff280 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_148,
                 CONCAT17(uStack_149,CONCAT16(uStack_14a,CONCAT51(acStack_14f,cStack_150))));
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_002fe6a8:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_002fe6a8;
    }
                    /* try { // try from 002fe6b4 to 002fe6c7 has its CatchHandler @ 002ff3fc */
    FUN_002634d4(plVar6,&local_158,&local_158,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002fe6fc:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002fe6fc;
    }
    if (((byte)local_158 & 1) != 0) {
      operator_delete(local_148);
    }
    local_170 = (basic_string)0x6;
    local_16f = 0x746573;
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_170);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_170), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002feca0 to 002fecb3 has its CatchHandler @ 002ff774 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_170);
                    /* try { // try from 002fecb4 to 002fecc7 has its CatchHandler @ 002ff6a4 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 002feccc to 002fed03 has its CatchHandler @ 002ff680 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002ff7cc;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_170);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002ff034 to 002ff047 has its CatchHandler @ 002ff67c */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_170);
                    /* try { // try from 002ff048 to 002ff05b has its CatchHandler @ 002ff4f0 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002ff060 to 002ff097 has its CatchHandler @ 002ff4c4 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002ff7cc;
    }
                    /* try { // try from 002fe75c to 002fe773 has its CatchHandler @ 002ff3f4 */
    FUN_003012c0(&local_e0,&local_170,0x30,1,0);
                    /* try { // try from 002fe774 to 002fe787 has its CatchHandler @ 002ff3e4 */
    FUN_002634d4(plVar6,&local_170,&local_170,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002fe7bc:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002fe7bc;
    }
    if (((byte)local_170 & 1) != 0) {
      operator_delete(local_160);
    }
    local_188 = (basic_string)0x16;
    uStack_187 = (undefined7)s_addListener_001d6f8c._0_8_;
    uStack_180 = CONCAT31(0x72656e,SUB81(s_addListener_001d6f8c._0_8_,7));
    uStack_17c = uStack_17c & 0xffffff00;
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_188);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_188), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002fed14 to 002fed27 has its CatchHandler @ 002ff758 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_188);
                    /* try { // try from 002fed28 to 002fed3b has its CatchHandler @ 002ff664 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 002fed40 to 002fed77 has its CatchHandler @ 002ff640 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002ff7cc;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_188);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002ff0a4 to 002ff0b7 has its CatchHandler @ 002ff63c */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_188);
                    /* try { // try from 002ff0b8 to 002ff0cb has its CatchHandler @ 002ff4c0 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002ff0d0 to 002ff107 has its CatchHandler @ 002ff494 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002ff7cc;
    }
    plStack_108 = (long *)CONCAT44(uStack_17c,uStack_180);
    local_110 = (undefined *)CONCAT71(uStack_187,local_188);
    local_e8 = 0;
    local_100 = local_178;
    plStack_f0 = _UNK_001d7f48;
    local_f8 = _DAT_001d7f40;
                    /* try { // try from 002fe850 to 002fe857 has its CatchHandler @ 002ff3cc */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_00383a88;
    if (((ulong)local_110 & 1) == 0) {
      pplVar3[2] = plStack_108;
      *(undefined **)(pplVar3 + 1) = local_110;
      pplVar3[3] = local_100;
    }
    else {
                    /* try { // try from 002fe888 to 002fe88b has its CatchHandler @ 002ff270 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar3;
    pplVar3[5] = plStack_f0;
    pplVar3[4] = local_f8;
    *(undefined4 *)(pplVar3 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_002fe8c8:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_002fe8d8:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_002fe8d8;
      }
      if (local_70 != &local_90) goto LAB_002fe8c8;
      local_c0 = &local_e0;
                    /* try { // try from 002febf0 to 002febfb has its CatchHandler @ 002ff17c */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 1;
    if (((byte)local_188 & 1) == 0) {
      plStack_a0 = (long *)CONCAT44(uStack_17c,uStack_180);
      local_a8 = CONCAT71(uStack_187,local_188);
      local_98 = local_178;
    }
    else {
                    /* try { // try from 002fe90c to 002fe913 has its CatchHandler @ 002ff204 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_178,CONCAT44(uStack_17c,uStack_180));
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_002fe938:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_002fe938;
    }
                    /* try { // try from 002fe944 to 002fe957 has its CatchHandler @ 002ff3bc */
    FUN_002634d4(plVar6,&local_188,&local_188,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002fe98c:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002fe98c;
    }
    if (((byte)local_188 & 1) != 0) {
      operator_delete(local_178);
    }
    local_1a0 = (basic_string)0x1e;
    local_190 = 0;
    acStack_19f[0] = s_removeListeners_001d79f7[0];
    acStack_19f[1] = s_removeListeners_001d79f7[1];
    acStack_19f[2] = s_removeListeners_001d79f7[2];
    acStack_19f[3] = s_removeListeners_001d79f7[3];
    acStack_19f[4] = s_removeListeners_001d79f7[4];
    acStack_19f[5] = s_removeListeners_001d79f7[5];
    acStack_19f[6] = s_removeListeners_001d79f7[6];
    cStack_198 = s_removeListeners_001d79f7[7];
    acStack_197[0] = s_removeListeners_001d79f7[8];
    acStack_197[1] = s_removeListeners_001d79f7[9];
    acStack_197[2] = s_removeListeners_001d79f7[10];
    acStack_197[3] = s_removeListeners_001d79f7[0xb];
    acStack_197[4] = s_removeListeners_001d79f7[0xc];
    acStack_197[5] = s_removeListeners_001d79f7[0xd];
    acStack_197[6] = s_removeListeners_001d79f7[0xe];
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_1a0);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_1a0), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002fed88 to 002fed9b has its CatchHandler @ 002ff73c */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_1a0);
                    /* try { // try from 002fed9c to 002fedaf has its CatchHandler @ 002ff624 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 002fedb4 to 002fedeb has its CatchHandler @ 002ff600 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002ff7cc;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_1a0);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002ff114 to 002ff127 has its CatchHandler @ 002ff5fc */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_1a0);
                    /* try { // try from 002ff128 to 002ff13b has its CatchHandler @ 002ff490 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002ff140 to 002ff177 has its CatchHandler @ 002ff464 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002ff7cc;
    }
    plStack_108 = (long *)CONCAT71(acStack_197,cStack_198);
    local_110 = (undefined *)CONCAT71(acStack_19f,local_1a0);
    local_100 = (long *)CONCAT71(uStack_18f,local_190);
    local_e8 = 0;
    plStack_f0 = _UNK_001d7f78;
    local_f8 = _DAT_001d7f70;
                    /* try { // try from 002fea20 to 002fea27 has its CatchHandler @ 002ff3a4 */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_00383c18;
    if (((ulong)local_110 & 1) == 0) {
      pplVar3[2] = plStack_108;
      *(undefined **)(pplVar3 + 1) = local_110;
      pplVar3[3] = local_100;
    }
    else {
                    /* try { // try from 002fea58 to 002fea5b has its CatchHandler @ 002ff1f4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar3;
    pplVar3[5] = plStack_f0;
    pplVar3[4] = local_f8;
    *(undefined4 *)(pplVar3 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_002fea98:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_002feaa8:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_002feaa8;
      }
      if (local_70 != &local_90) goto LAB_002fea98;
      local_c0 = &local_e0;
                    /* try { // try from 002fec10 to 002fec1b has its CatchHandler @ 002ff178 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 0;
    if (((byte)local_1a0 & 1) == 0) {
      plStack_a0 = (long *)CONCAT71(acStack_197,cStack_198);
      local_a8 = CONCAT71(acStack_19f,local_1a0);
      local_98 = (long *)CONCAT71(uStack_18f,local_190);
    }
    else {
                    /* try { // try from 002fead8 to 002feadf has its CatchHandler @ 002ff188 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)CONCAT71(uStack_18f,local_190),CONCAT71(acStack_197,cStack_198));
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_002feb04:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_002feb04;
    }
                    /* try { // try from 002feb10 to 002feb23 has its CatchHandler @ 002ff394 */
    FUN_002634d4(plVar6,&local_1a0,&local_1a0,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_002feb58:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_002feb58;
    }
    if (((byte)local_1a0 & 1) != 0) {
      operator_delete((void *)CONCAT71(uStack_18f,local_190));
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_002ff7cc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ff7d0  FUN_002ff7d0 =====

void FUN_002ff7d0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00383c18;
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


// ===== 002ff83c  FUN_002ff83c =====

void FUN_002ff83c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00383c18;
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


// ===== 002ff8a4  FUN_002ff8a4 =====

undefined8 * FUN_002ff8a4(long param_1)

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
  *puVar4 = &PTR_FUN_00383c18;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002ff904 to 002ff907 has its CatchHandler @ 002ff940 */
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


// ===== 002ff968  FUN_002ff968 =====

void FUN_002ff968(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00383c18;
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


// ===== 002ffa00  FUN_002ffa00 =====

void FUN_002ffa00(long param_1)

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


// ===== 002ffa60  FUN_002ffa60 =====

void FUN_002ffa60(void *param_1)

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


// ===== 002ffabc  FUN_002ffabc =====

void FUN_002ffabc(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 ulong *param_6)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  JSError *pJVar6;
  long *plVar7;
  ulong uVar8;
  code *pcVar9;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  long local_80;
  long *plStack_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar8 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002ffb18 to 002ffb27 has its CatchHandler @ 00300068 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar4 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00395748,0xffffffffffffffff
                            ), lVar4 == 0)) {
    lVar4 = 0;
    plVar7 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x002ffba0;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto joined_r0x002ffba0;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar7 = plStack_78;
  }
  lVar5 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar5 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002ffba0:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar8 == 0) {
    pcVar9 = *(code **)(param_2 + 0x20);
    uVar8 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelEnumPropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395b40
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelEnumPropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395b40
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelEnumPropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395b38
       , iVar3 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelEnumPropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395b38
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelEnumPropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395b40
                         );
    }
    if ((uVar8 & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(lVar4 + ((long)uVar8 >> 1)));
    }
                    /* try { // try from 002ffbd8 to 002ffbdb has its CatchHandler @ 002ffd78 */
    (*pcVar9)();
    *param_1 = 0;
    if ((plVar7 != (long *)0x0) && (lVar4 = FUN_00255510(0xffffffffffffffff,plVar7 + 1), lVar4 == 0)
       ) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 002ffc50 to 002ffc5f has its CatchHandler @ 00300204 */
    FUN_003002bc(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar4);
    pJVar6 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002ffc6c to 002ffc7f has its CatchHandler @ 003001e4 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 002ffc80 to 002ffc93 has its CatchHandler @ 003001cc */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002ffc94 to 002ffc9f has its CatchHandler @ 0030019c */
    std::__ndk1::to_string(0);
                    /* try { // try from 002ffca0 to 002ffcaf has its CatchHandler @ 00300178 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002ffcb0 to 002ffcc3 has its CatchHandler @ 00300154 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002ffcc4 to 002ffccf has its CatchHandler @ 00300130 */
    std::__ndk1::to_string(uVar8);
                    /* try { // try from 002ffcd0 to 002ffcdf has its CatchHandler @ 0030010c */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 002ffce0 to 002ffcf3 has its CatchHandler @ 003000e8 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002ffcf8 to 002ffd33 has its CatchHandler @ 00300088 */
    facebook::jsi::JSError::JSError(pJVar6,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar6,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030022c  FUN_0030022c =====

void FUN_0030022c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395b48) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0030027c  FUN_0030027c =====

undefined * FUN_0030027c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395b50;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003002bc  FUN_003002bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003002bc(undefined8 *param_1,int param_2,byte *param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  void *pvVar4;
  byte *pbVar5;
  long lVar6;
  undefined *puVar7;
  byte bVar8;
  ulong *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong local_a0;
  ulong local_98;
  undefined8 *local_90;
  byte local_88 [8];
  size_t local_80;
  void *local_78;
  ulong local_70;
  ulong uStack_68;
  undefined8 *local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  if (param_4 == 0) {
    local_60 = (undefined8 *)operator_new(0x40);
    puVar7 = PTR_typeinfo_name_00395ab0;
    uStack_68 = _UNK_001d8198;
    local_70 = _DAT_001d8190;
    *(undefined1 *)((long)local_60 + 0x36) = 0;
    uVar14 = *(undefined8 *)puVar7;
    uVar13 = *(undefined8 *)(puVar7 + 0x18);
    uVar12 = *(undefined8 *)(puVar7 + 0x10);
    uVar10 = *(undefined8 *)(puVar7 + 0x2e);
    local_60[1] = *(undefined8 *)(puVar7 + 8);
    *local_60 = uVar14;
    local_60[3] = uVar13;
    local_60[2] = uVar12;
    uVar12 = *(undefined8 *)(puVar7 + 0x20);
    local_60[5] = *(undefined8 *)(puVar7 + 0x28);
    local_60[4] = uVar12;
    *(undefined8 *)((long)local_60 + 0x2e) = uVar10;
                    /* try { // try from 00300348 to 00300357 has its CatchHandler @ 003005e8 */
    margelo::nitro::TypeInfo::demangleName((basic_string *)&local_70,true);
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
  }
  else {
    margelo::nitro::HybridObject::getName();
  }
  bVar8 = local_88[0];
  if (param_2 == 0) {
    sVar3 = (ulong)(local_88[0] >> 1);
    if ((local_88[0] & 1) != 0) {
      sVar3 = local_80;
    }
    uVar1 = sVar3 + 1;
    if (0xffffffffffffffef < uVar1) goto LAB_003005a8;
    if (uVar1 < 0x17) {
      local_98 = 0;
      puVar11 = (undefined8 *)((ulong)&local_a0 | 1);
      local_90 = (undefined8 *)0x0;
      local_a0 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_003004ac;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 00300494 to 0030049b has its CatchHandler @ 003005fc */
      puVar11 = (undefined8 *)operator_new(uVar2);
      local_a0 = uVar2 | 1;
      local_98 = uVar1;
      local_90 = puVar11;
LAB_003004ac:
      pvVar4 = (void *)((ulong)local_88 | 1);
      if ((bVar8 & 1) != 0) {
        pvVar4 = local_78;
      }
      memmove(puVar11,pvVar4,sVar3);
    }
    *(undefined2 *)((long)puVar11 + sVar3) = 0x2e;
    pbVar5 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pbVar5 = param_3 + 1;
    }
                    /* try { // try from 003004ec to 003004f3 has its CatchHandler @ 003005d4 */
    puVar9 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_a0,(ulong)pbVar5);
    local_60 = (undefined8 *)puVar9[2];
    uStack_68 = puVar9[1];
    local_70 = *puVar9;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
                    /* try { // try from 0030050c to 0030051f has its CatchHandler @ 003005bc */
    puVar11 = (undefined8 *)
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_70,0x1d6185);
    uVar10 = puVar11[2];
    uVar13 = puVar11[1];
    uVar12 = *puVar11;
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    param_1[1] = uVar13;
    *param_1 = uVar12;
    param_1[2] = uVar10;
    puVar11 = local_90;
    uVar1 = local_a0;
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
      puVar11 = local_90;
      uVar1 = local_a0;
    }
  }
  else {
    sVar3 = (ulong)(local_88[0] >> 1);
    if ((local_88[0] & 1) != 0) {
      sVar3 = local_80;
    }
    uVar1 = sVar3 + 1;
    if (0xffffffffffffffef < uVar1) {
      if (*(long *)(lVar6 + 0x28) != local_58) goto LAB_00300644;
                    /* try { // try from 003005a4 to 003005a7 has its CatchHandler @ 00300618 */
      FUN_00260a84();
LAB_003005a8:
      if (*(long *)(lVar6 + 0x28) == local_58) {
                    /* try { // try from 003005b8 to 003005bb has its CatchHandler @ 003005fc */
        uVar10 = FUN_00260a84();
                    /* catch() { ... } // from try @ 0030050c with catch @ 003005bc */
        if ((local_70 & 1) != 0) {
          operator_delete(local_60);
        }
        if ((local_a0 & 1) != 0) {
          operator_delete(local_90);
        }
        if ((local_88[0] & 1) != 0) {
          operator_delete(local_78);
        }
        if (*(long *)(lVar6 + 0x28) == local_58) {
          FUN_00255d34(uVar10);
        }
      }
      goto LAB_00300644;
    }
    if (uVar1 < 0x17) {
      uStack_68 = 0;
      puVar11 = (undefined8 *)((ulong)&local_70 | 1);
      local_60 = (undefined8 *)0x0;
      local_70 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_0030041c;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 00300404 to 0030040b has its CatchHandler @ 00300618 */
      puVar11 = (undefined8 *)operator_new(uVar2);
      local_70 = uVar2 | 1;
      uStack_68 = uVar1;
      local_60 = puVar11;
LAB_0030041c:
      pvVar4 = (void *)((ulong)local_88 | 1);
      if ((bVar8 & 1) != 0) {
        pvVar4 = local_78;
      }
      memmove(puVar11,pvVar4,sVar3);
    }
    *(undefined2 *)((long)puVar11 + sVar3) = 0x2e;
    pbVar5 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pbVar5 = param_3 + 1;
    }
                    /* try { // try from 0030045c to 00300463 has its CatchHandler @ 00300600 */
    puVar11 = (undefined8 *)
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_70,(ulong)pbVar5);
    uVar10 = puVar11[2];
    uVar13 = puVar11[1];
    uVar12 = *puVar11;
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    param_1[1] = uVar13;
    *param_1 = uVar12;
    param_1[2] = uVar10;
    puVar11 = local_60;
    uVar1 = local_70;
  }
  if ((uVar1 & 1) != 0) {
    operator_delete(puVar11);
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
LAB_00300644:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00300648  FUN_00300648 =====

void FUN_00300648(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
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


// ===== 003006d4  FUN_003006d4 =====

void FUN_003006d4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00383a88;
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


// ===== 00300740  FUN_00300740 =====

void FUN_00300740(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00383a88;
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


// ===== 003007a8  FUN_003007a8 =====

undefined8 * FUN_003007a8(long param_1)

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
  *puVar4 = &PTR_FUN_00383a88;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 00300808 to 0030080b has its CatchHandler @ 00300844 */
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


// ===== 0030086c  FUN_0030086c =====

void FUN_0030086c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00383a88;
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


// ===== 00300904  FUN_00300904 =====

void FUN_00300904(long param_1)

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


// ===== 00300964  FUN_00300964 =====

void FUN_00300964(void *param_1)

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


// ===== 003009c0  FUN_003009c0 =====

void FUN_003009c0(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
                 ulong *param_6)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  JSError *pJVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined8 *local_d0 [4];
  undefined8 **local_b0;
  long local_a0;
  long *plStack_98;
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar10 = *param_5;
  uVar9 = *param_6;
  local_d0[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 00300a20 to 00300a2f has its CatchHandler @ 00301068 */
  (**(code **)(*param_3 + 0x160))(&local_a0,param_3,local_d0);
  if ((local_a0 == 0) ||
     (lVar5 = __dynamic_cast(local_a0,PTR_typeinfo_00394860,PTR_typeinfo_00395748,0xffffffffffffffff
                            ), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_98 != (long *)0x0) goto LAB_00300a7c;
  }
  else if (plStack_98 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
    FUN_00259a00(1,plStack_98 + 1);
    plVar8 = plStack_98;
LAB_00300a7c:
    lVar6 = FUN_00255510(0xffffffffffffffff,plStack_98 + 1);
    if (lVar6 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
  if (local_d0[0] != (undefined8 *)0x0) {
    (**(code **)*local_d0[0])();
  }
  if (uVar9 != 1) {
                    /* try { // try from 00300be4 to 00300bf3 has its CatchHandler @ 00301208 */
    FUN_003002bc(&local_a0,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00300c00 to 00300c13 has its CatchHandler @ 003011e8 */
    std::__ndk1::operator+("`",(basic_string *)&local_a0);
                    /* try { // try from 00300c14 to 00300c27 has its CatchHandler @ 003011d0 */
    FUN_00263450(auStack_130,auStack_148,"` expected ");
                    /* try { // try from 00300c28 to 00300c33 has its CatchHandler @ 003011a0 */
    std::__ndk1::to_string(1);
                    /* try { // try from 00300c34 to 00300c43 has its CatchHandler @ 0030117c */
    FUN_00264adc(auStack_118,auStack_130,auStack_160);
                    /* try { // try from 00300c44 to 00300c57 has its CatchHandler @ 00301158 */
    FUN_00263450(auStack_100,auStack_118," arguments, but received ");
                    /* try { // try from 00300c58 to 00300c63 has its CatchHandler @ 00301134 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 00300c64 to 00300c73 has its CatchHandler @ 00301110 */
    FUN_00264adc(auStack_e8,auStack_100,auStack_178);
                    /* try { // try from 00300c74 to 00300c87 has its CatchHandler @ 003010e8 */
    FUN_00263450(local_d0,auStack_e8,&DAT_001d5be0);
                    /* try { // try from 00300c8c to 00300cc7 has its CatchHandler @ 00301088 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_d0);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
    goto LAB_0030122c;
  }
  pcVar11 = *(code **)(param_2 + 0x20);
  uVar9 = *(ulong *)(param_2 + 0x28);
  if (((*
        PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelEnumPropertySpecENSt6__ndk18functionIFvvEEEJRKNS6_IFvRKNS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEEEJLm0EEEEN8facebook3jsi5ValueEPT_MSO_FT0_DpT1_ERNSM_7RuntimeEPKSN_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395b20
       & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(
                                 PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelEnumPropertySpecENSt6__ndk18functionIFvvEEEJRKNS6_IFvRKNS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEEEJLm0EEEEN8facebook3jsi5ValueEPT_MSO_FT0_DpT1_ERNSM_7RuntimeEPKSN_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395b20
                                 ),
     puVar3 = 
     PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelEnumPropertySpecENSt6__ndk18functionIFvvEEEJRKNS6_IFvRKNS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEEEJLm0EEEEN8facebook3jsi5ValueEPT_MSO_FT0_DpT1_ERNSM_7RuntimeEPKSN_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395b18
     , iVar4 != 0)) {
    *(undefined4 *)
     PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelEnumPropertySpecENSt6__ndk18functionIFvvEEEJRKNS6_IFvRKNS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEEEJLm0EEEEN8facebook3jsi5ValueEPT_MSO_FT0_DpT1_ERNSM_7RuntimeEPKSN_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395b18
         = 0;
    __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
    __cxa_guard_release(
                       PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelEnumPropertySpecENSt6__ndk18functionIFvvEEEJRKNS6_IFvRKNS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEEEJLm0EEEEN8facebook3jsi5ValueEPT_MSO_FT0_DpT1_ERNSM_7RuntimeEPKSN_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395b20
                       );
  }
  plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
  if ((uVar9 & 1) != 0) {
    pcVar11 = *(code **)(pcVar11 + *plVar1);
  }
                    /* try { // try from 00300ae4 to 00300af3 has its CatchHandler @ 00300d74 */
  FUN_002ed7a4(local_d0,param_3,uVar10);
                    /* try { // try from 00300af4 to 00300b07 has its CatchHandler @ 00300d38 */
  (*pcVar11)(&local_a0,plVar1,local_d0);
  if (local_b0 == local_d0) {
    lVar5 = 4;
    local_b0 = local_d0;
LAB_00300b28:
    (*(code *)(*local_b0)[lVar5])();
  }
  else if (local_b0 != (undefined8 **)0x0) {
    lVar5 = 5;
    goto LAB_00300b28;
  }
                    /* try { // try from 00300b34 to 00300b47 has its CatchHandler @ 00300d18 */
  FUN_002e76cc(param_1,param_3,&local_a0);
  if (local_80 == &local_a0) {
    lVar5 = 4;
    local_80 = &local_a0;
LAB_00300b68:
    (**(code **)(*local_80 + lVar5 * 8))();
  }
  else if (local_80 != (long *)0x0) {
    lVar5 = 5;
    goto LAB_00300b68;
  }
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_0030122c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00301230  FUN_00301230 =====

void FUN_00301230(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395b28) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00301280  FUN_00301280 =====

undefined * FUN_00301280(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395b30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003012c0  FUN_003012c0 =====

void FUN_003012c0(long param_1,ulong *param_2,long param_3,long param_4,undefined4 param_5)

{
  long lVar1;
  long *plVar2;
  long **pplVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_b0;
  ulong uStack_a8;
  char *local_a0;
  long local_98;
  long lStack_90;
  undefined4 local_88;
  long local_80 [4];
  long *local_60 [3];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*param_2 & 1) == 0) {
    uStack_a8 = param_2[1];
    local_b0 = *param_2;
    local_a0 = (char *)param_2[2];
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_b0,(char *)param_2[2],param_2[1]);
  }
  local_98 = param_3;
  lStack_90 = param_4;
  local_88 = param_5;
                    /* try { // try from 00301328 to 0030132f has its CatchHandler @ 003014d8 */
  local_60[0] = (long *)operator_new(0x38);
  *local_60[0] = (long)&PTR_FUN_003836f8;
  if ((local_b0 & 1) == 0) {
    local_60[0][2] = uStack_a8;
    *(ulong *)(local_60[0] + 1) = local_b0;
    local_60[0][3] = (long)local_a0;
  }
  else {
                    /* try { // try from 00301360 to 00301363 has its CatchHandler @ 003014c8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (local_60[0] + 1),local_a0,uStack_a8);
  }
  local_60[0][5] = lStack_90;
  local_60[0][4] = local_98;
  *(undefined4 *)(local_60[0] + 6) = local_88;
  if (((byte)local_b0._0_1_ & 1) == 0) {
LAB_003013a0:
    *(long **)(param_1 + 0x20) = local_60[0];
    pplVar3 = local_60;
LAB_003013b4:
    *pplVar3 = (long *)0x0;
  }
  else {
    operator_delete(local_a0);
    if (local_60[0] == (long *)0x0) {
      pplVar3 = (long **)(param_1 + 0x20);
      goto LAB_003013b4;
    }
    if (local_60[0] != local_80) goto LAB_003013a0;
    *(long *)(param_1 + 0x20) = param_1;
                    /* try { // try from 0030144c to 00301457 has its CatchHandler @ 0030145c */
    (**(code **)(local_80[0] + 0x18))(local_80,param_1);
  }
  uVar4 = *param_2;
  *(undefined8 *)(param_1 + 0x30) = 1;
  if ((uVar4 & 1) == 0) {
    uVar6 = *param_2;
    uVar4 = param_2[2];
    *(ulong *)(param_1 + 0x40) = param_2[1];
    *(ulong *)(param_1 + 0x38) = uVar6;
    *(ulong *)(param_1 + 0x48) = uVar4;
  }
  else {
                    /* try { // try from 003013e0 to 003013e7 has its CatchHandler @ 00301460 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_1 + 0x38),(char *)param_2[2],param_2[1]);
  }
  if (local_60[0] == local_80) {
    lVar5 = 4;
    plVar2 = local_80;
  }
  else {
    if (local_60[0] == (long *)0x0) goto LAB_00301418;
    lVar5 = 5;
    plVar2 = local_60[0];
  }
  (**(code **)(*plVar2 + lVar5 * 8))();
LAB_00301418:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00301508  FUN_00301508 =====

void FUN_00301508(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003836f8;
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


// ===== 00301574  FUN_00301574 =====

void FUN_00301574(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003836f8;
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


// ===== 003015dc  FUN_003015dc =====

undefined8 * FUN_003015dc(long param_1)

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
  *puVar4 = &PTR_FUN_003836f8;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 0030163c to 0030163f has its CatchHandler @ 00301678 */
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


// ===== 003016a0  FUN_003016a0 =====

void FUN_003016a0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_003836f8;
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


// ===== 00301738  FUN_00301738 =====

void FUN_00301738(long param_1)

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


// ===== 00301798  FUN_00301798 =====

void FUN_00301798(void *param_1)

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


// ===== 003017f4  FUN_003017f4 =====

void FUN_003017f4(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
                 ulong *param_6)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  JSError *pJVar7;
  long *plVar8;
  ulong uVar9;
  IRuntime *pIVar10;
  code *pcVar11;
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
  pIVar10 = (IRuntime *)*param_5;
  uVar9 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 00301854 to 00301863 has its CatchHandler @ 00301e4c */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((CONCAT71(uStack_7f,local_80) == 0) ||
     (lVar5 = __dynamic_cast(CONCAT71(uStack_7f,local_80),PTR_typeinfo_00394860,
                             PTR_typeinfo_00395748,0xffffffffffffffff), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x003018dc;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar8 = (long *)0x0;
      goto joined_r0x003018dc;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar8 = plStack_78;
  }
  lVar6 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x003018dc:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar9 == 1) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00395ae0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_defaultValue_00395ae0), puVar3 = PTR_defaultValue_00395ad8,
       iVar4 != 0)) {
      *(undefined4 *)PTR_defaultValue_00395ad8 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00395ae0);
    }
    plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
    if ((uVar9 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *plVar1);
    }
                    /* try { // try from 00301918 to 00301927 has its CatchHandler @ 00301b58 */
    facebook::jsi::Value::asString(pIVar10);
                    /* try { // try from 00301930 to 0030193f has its CatchHandler @ 00301b34 */
    (**(code **)(*param_3 + 0x120))(&local_80,param_3,local_128);
    if (local_128[0] != (undefined8 *)0x0) {
      (**(code **)*local_128[0])();
    }
                    /* try { // try from 00301954 to 0030195f has its CatchHandler @ 00301b18 */
    (*pcVar11)(plVar1,&local_80);
    if (((byte)local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    *param_1 = 0;
    if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar5 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 003019e4 to 003019f3 has its CatchHandler @ 00301fec */
    FUN_003002bc(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00301a00 to 00301a13 has its CatchHandler @ 00301fcc */
    std::__ndk1::operator+("`",&local_80);
                    /* try { // try from 00301a14 to 00301a27 has its CatchHandler @ 00301fb4 */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 00301a28 to 00301a33 has its CatchHandler @ 00301f84 */
    std::__ndk1::to_string(1);
                    /* try { // try from 00301a34 to 00301a43 has its CatchHandler @ 00301f60 */
    FUN_00264adc(auStack_e0,auStack_f8,local_128);
                    /* try { // try from 00301a44 to 00301a57 has its CatchHandler @ 00301f3c */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 00301a58 to 00301a63 has its CatchHandler @ 00301f18 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 00301a64 to 00301a73 has its CatchHandler @ 00301ef4 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 00301a74 to 00301a87 has its CatchHandler @ 00301ecc */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 00301a8c to 00301ac7 has its CatchHandler @ 00301e6c */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00302014  FUN_00302014 =====

void FUN_00302014(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395ae8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00302064  FUN_00302064 =====

undefined * FUN_00302064(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395af0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003020a4  FUN_003020a4 =====

void FUN_003020a4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00383778;
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


// ===== 00302110  FUN_00302110 =====

void FUN_00302110(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00383778;
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


// ===== 00302178  FUN_00302178 =====

undefined8 * FUN_00302178(long param_1)

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
  *puVar4 = &PTR_FUN_00383778;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 003021d8 to 003021db has its CatchHandler @ 00302214 */
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


// ===== 0030223c  FUN_0030223c =====

void FUN_0030223c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00383778;
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


// ===== 003022d4  FUN_003022d4 =====

void FUN_003022d4(long param_1)

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


// ===== 00302334  FUN_00302334 =====

void FUN_00302334(void *param_1)

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


// ===== 00302390  FUN_00302390 =====

void FUN_00302390(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 ulong *param_6)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  JSError *pJVar6;
  long *plVar7;
  ulong uVar8;
  code *pcVar9;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined8 local_110;
  long *local_108;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  long local_80;
  long *plStack_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar8 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 003023ec to 003023fb has its CatchHandler @ 0030299c */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar4 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00395748,0xffffffffffffffff
                            ), lVar4 == 0)) {
    lVar4 = 0;
    plVar7 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x00302474;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto joined_r0x00302474;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar7 = plStack_78;
  }
  lVar5 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar5 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x00302474:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar8 == 0) {
    pcVar9 = *(code **)(param_2 + 0x20);
    uVar8 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelEnumPropertySpecENSt6__ndk110shared_ptrINS0_7PromiseINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSJ_FT0_DpT1_ERNSH_7RuntimeEPKSI_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395b00
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelEnumPropertySpecENSt6__ndk110shared_ptrINS0_7PromiseINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSJ_FT0_DpT1_ERNSH_7RuntimeEPKSI_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395b00
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelEnumPropertySpecENSt6__ndk110shared_ptrINS0_7PromiseINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSJ_FT0_DpT1_ERNSH_7RuntimeEPKSI_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395af8
       , iVar3 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelEnumPropertySpecENSt6__ndk110shared_ptrINS0_7PromiseINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSJ_FT0_DpT1_ERNSH_7RuntimeEPKSI_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395af8
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelEnumPropertySpecENSt6__ndk110shared_ptrINS0_7PromiseINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSJ_FT0_DpT1_ERNSH_7RuntimeEPKSI_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395b00
                         );
    }
    if ((uVar8 & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(lVar4 + ((long)uVar8 >> 1)));
    }
                    /* try { // try from 003024ac to 003024b3 has its CatchHandler @ 003026a4 */
    (*pcVar9)(&local_110);
                    /* try { // try from 003024b8 to 003024c3 has its CatchHandler @ 0030268c */
    FUN_002f0240(param_1,param_3,local_110,local_108);
    if ((local_108 != (long *)0x0) &&
       (lVar4 = FUN_00255510(0xffffffffffffffff,local_108 + 1), lVar4 == 0)) {
      (**(code **)(*local_108 + 0x10))(local_108);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if ((plVar7 != (long *)0x0) && (lVar4 = FUN_00255510(0xffffffffffffffff,plVar7 + 1), lVar4 == 0)
       ) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 00302564 to 00302573 has its CatchHandler @ 00302b38 */
    FUN_003002bc(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar4);
    pJVar6 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00302580 to 00302593 has its CatchHandler @ 00302b18 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 00302594 to 003025a7 has its CatchHandler @ 00302b00 */
    FUN_00263450(auStack_f8,&local_110,"` expected ");
                    /* try { // try from 003025a8 to 003025b3 has its CatchHandler @ 00302ad0 */
    std::__ndk1::to_string(0);
                    /* try { // try from 003025b4 to 003025c3 has its CatchHandler @ 00302aac */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 003025c4 to 003025d7 has its CatchHandler @ 00302a88 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 003025d8 to 003025e3 has its CatchHandler @ 00302a64 */
    std::__ndk1::to_string(uVar8);
                    /* try { // try from 003025e4 to 003025f3 has its CatchHandler @ 00302a40 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 003025f4 to 00302607 has its CatchHandler @ 00302a1c */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 0030260c to 00302647 has its CatchHandler @ 003029bc */
    facebook::jsi::JSError::JSError(pJVar6,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar6,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00302b60  FUN_00302b60 =====

void FUN_00302b60(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395b08) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00302bb0  FUN_00302bb0 =====

undefined * FUN_00302bb0(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395b10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00302bf0  FUN_00302bf0 =====

void FUN_00302bf0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00383678;
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


// ===== 00302c5c  FUN_00302c5c =====

void FUN_00302c5c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00383678;
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


// ===== 00302cc4  FUN_00302cc4 =====

undefined8 * FUN_00302cc4(long param_1)

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
  *puVar4 = &PTR_FUN_00383678;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 00302d24 to 00302d27 has its CatchHandler @ 00302d60 */
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


// ===== 00302d88  FUN_00302d88 =====

void FUN_00302d88(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00383678;
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


// ===== 00302e20  FUN_00302e20 =====

void FUN_00302e20(long param_1)

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


// ===== 00302e80  FUN_00302e80 =====

void FUN_00302e80(void *param_1)

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


// ===== 00302edc  FUN_00302edc =====

void FUN_00302edc(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 ulong *param_6)

{
  long *plVar1;
  long lVar2;
  void *pvVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  JSError *pJVar8;
  long *plVar9;
  ulong uVar10;
  code *pcVar11;
  undefined1 auStack_140 [24];
  undefined8 local_128 [3];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  basic_string local_80;
  undefined7 uStack_7f;
  long *local_78;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar10 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 00302f38 to 00302f47 has its CatchHandler @ 00303500 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  plVar1 = local_78;
  if ((CONCAT71(uStack_7f,local_80) == 0) ||
     (lVar6 = __dynamic_cast(CONCAT71(uStack_7f,local_80),PTR_typeinfo_00394860,
                             PTR_typeinfo_00395748,0xffffffffffffffff), lVar6 == 0)) {
    lVar6 = 0;
    plVar9 = (long *)0x0;
    if (plVar1 == (long *)0x0) goto joined_r0x00302fc0;
  }
  else {
    if (plVar1 == (long *)0x0) {
      plVar9 = (long *)0x0;
      goto joined_r0x00302fc0;
    }
    FUN_00259a00(1,plVar1 + 1);
    plVar9 = plVar1;
  }
  lVar7 = FUN_00255510(0xffffffffffffffff,plVar1 + 1);
  if (lVar7 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x00302fc0:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar10 == 0) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar10 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelEnumPropertySpecENSt6__ndk112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSF_FT0_DpT1_ERNSD_7RuntimeEPKSE_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395ac0
         & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelEnumPropertySpecENSt6__ndk112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSF_FT0_DpT1_ERNSD_7RuntimeEPKSE_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395ac0
                                   ),
       puVar4 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelEnumPropertySpecENSt6__ndk112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSF_FT0_DpT1_ERNSD_7RuntimeEPKSE_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395ab8
       , iVar5 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelEnumPropertySpecENSt6__ndk112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSF_FT0_DpT1_ERNSD_7RuntimeEPKSE_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395ab8
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar4,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelEnumPropertySpecENSt6__ndk112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSF_FT0_DpT1_ERNSD_7RuntimeEPKSE_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395ac0
                         );
    }
    if ((uVar10 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *(long *)(lVar6 + ((long)uVar10 >> 1)));
    }
                    /* try { // try from 00302ff8 to 00303003 has its CatchHandler @ 00303208 */
    (*pcVar11)(&local_80);
    plVar1 = (long *)(ulong)((byte)local_80 >> 1);
    pvVar3 = (void *)((ulong)&local_80 | 1);
    if (((byte)local_80 & 1) != 0) {
      plVar1 = local_78;
      pvVar3 = local_70;
    }
                    /* try { // try from 00303028 to 00303033 has its CatchHandler @ 003031ec */
    (**(code **)(*param_3 + 0x110))(local_128,param_3,pvVar3,plVar1);
    *param_1 = 6;
    *(undefined8 *)(param_1 + 2) = local_128[0];
    if (((byte)local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if ((plVar9 != (long *)0x0) && (lVar6 = FUN_00255510(0xffffffffffffffff,plVar9 + 1), lVar6 == 0)
       ) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 003030c4 to 003030d3 has its CatchHandler @ 0030369c */
    FUN_003002bc(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar6);
    pJVar8 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 003030e0 to 003030f3 has its CatchHandler @ 0030367c */
    std::__ndk1::operator+("`",&local_80);
                    /* try { // try from 003030f4 to 00303107 has its CatchHandler @ 00303664 */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 00303108 to 00303113 has its CatchHandler @ 00303634 */
    std::__ndk1::to_string(0);
                    /* try { // try from 00303114 to 00303123 has its CatchHandler @ 00303610 */
    FUN_00264adc(auStack_e0,auStack_f8,local_128);
                    /* try { // try from 00303124 to 00303137 has its CatchHandler @ 003035ec */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 00303138 to 00303143 has its CatchHandler @ 003035c8 */
    std::__ndk1::to_string(uVar10);
                    /* try { // try from 00303144 to 00303153 has its CatchHandler @ 003035a4 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 00303154 to 00303167 has its CatchHandler @ 00303580 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 0030316c to 003031a7 has its CatchHandler @ 00303520 */
    facebook::jsi::JSError::JSError(pJVar8,param_3,local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar8,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003036c4  FUN_003036c4 =====

void FUN_003036c4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395ac8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00303714  FUN_00303714 =====

undefined * FUN_00303714(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395ad0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00303754  margelo::nitro::rive::HybridViewModelEnumPropertySpec::loadHybridMethods =====

/* virtual thunk to margelo::nitro::rive::HybridViewModelEnumPropertySpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridViewModelEnumPropertySpec::loadHybridMethods
          (HybridViewModelEnumPropertySpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    loadHybridMethods(this + *(long *)(*(long *)this + -0x30));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00303798  margelo::nitro::rive::HybridViewModelEnumPropertySpec::loadHybridMethods =====

/* virtual thunk to margelo::nitro::rive::HybridViewModelEnumPropertySpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridViewModelEnumPropertySpec::loadHybridMethods
          (HybridViewModelEnumPropertySpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    loadHybridMethods(this + *(long *)(*(long *)this + -0x20));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003037dc  FUN_003037dc =====

void FUN_003037dc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3037e0);
  (*pcVar1)();
}


// ===== 003037e0  FUN_003037e0 =====

void FUN_003037e0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3037e4);
  (*pcVar1)();
}


// ===== 003037e4  FUN_003037e4 =====

void FUN_003037e4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3037e8);
  (*pcVar1)();
}


// ===== 003037e8  FUN_003037e8 =====

void FUN_003037e8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3037ec);
  (*pcVar1)();
}


// ===== 003037ec  margelo::nitro::rive::HybridViewModelTriggerPropertySpec::loadHybridMethods =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* margelo::nitro::rive::HybridViewModelTriggerPropertySpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridViewModelTriggerPropertySpec::loadHybridMethods
          (HybridViewModelTriggerPropertySpec *this)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long **pplVar5;
  runtime_error *prVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  long *plVar10;
  long *plVar11;
  basic_string local_118;
  undefined7 uStack_117;
  undefined4 uStack_110;
  uint uStack_10c;
  long *local_108;
  undefined *local_100;
  long *plStack_f8;
  long *local_f0;
  long *local_e8;
  long *plStack_e0;
  undefined4 local_d8;
  long *local_d0;
  long *plStack_c8;
  void *local_c0;
  long **local_b0;
  undefined8 local_a0;
  ulong local_98;
  undefined8 uStack_90;
  long *local_88;
  undefined8 local_80;
  char cStack_78;
  char acStack_77 [8];
  undefined7 uStack_6f;
  long **local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  margelo::nitro::HybridObject::loadHybridMethods();
  lVar7 = *(long *)(*(long *)this + -0x38);
  margelo::nitro::HybridObject::loadHybridMethods();
  FUN_002e4024(this + lVar7 + *(long *)(*(long *)(this + lVar7) + -0x20) + 8);
  lVar7 = *(long *)(*(long *)this + -0x20);
  plVar8 = *(long **)(this + lVar7 + 8);
  if (plVar8 == (long *)0x0) {
    local_80._0_1_ = 0;
    local_80._1_1_ = '\0';
    local_80._2_1_ = '\0';
    local_80._3_1_ = '\0';
    local_80._4_1_ = '\0';
    local_80._5_1_ = '\0';
    local_80._6_1_ = '\0';
    local_80._7_1_ = '\0';
    cStack_78 = '\0';
    acStack_77[0] = '\0';
    acStack_77[1] = '\0';
    acStack_77[2] = '\0';
    acStack_77[3] = '\0';
    acStack_77[4] = '\0';
    acStack_77[5] = '\0';
    acStack_77[6] = '\0';
    local_100 = PTR_typeinfo_00395750;
                    /* try { // try from 00303878 to 00303887 has its CatchHandler @ 00303e84 */
    FUN_00264f84(&local_d0,&local_100,&local_80);
    plVar11 = plStack_c8;
    plVar8 = local_d0;
    plVar10 = *(long **)(this + lVar7 + 0x10);
    local_d0 = (long *)0x0;
    plStack_c8 = (long *)0x0;
    *(long **)(this + lVar7 + 0x10) = plVar11;
    *(long **)(this + lVar7 + 8) = plVar8;
    if ((plVar10 != (long *)0x0) &&
       (lVar4 = FUN_00255510(0xffffffffffffffff,plVar10 + 1), lVar4 == 0)) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar8 = plStack_c8;
    if ((plStack_c8 != (long *)0x0) &&
       (lVar4 = FUN_00255510(0xffffffffffffffff,plStack_c8 + 1), lVar4 == 0)) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar8 = (long *)CONCAT71(acStack_77._0_7_,cStack_78);
    if ((plVar8 != (long *)0x0) && (lVar4 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar4 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar8 = *(long **)(this + lVar7 + 8);
  }
  puVar9 = *(undefined **)(*plVar8 + 8);
  plVar11 = plVar8;
  while (puVar9 != PTR_typeinfo_name_00395b58) {
    plVar11 = (long *)plVar11[1];
    if (plVar11 == (long *)0x0) {
      plStack_c8 = *(long **)(this + lVar7 + 0x10);
      local_d0 = plVar8;
      if (plStack_c8 != (long *)0x0) {
        FUN_00259a00(1,plStack_c8 + 1);
      }
      local_100 = PTR_typeinfo_00395750;
                    /* try { // try from 00303998 to 003039a7 has its CatchHandler @ 00303e78 */
      FUN_00264f84(&local_80,&local_100,&local_d0);
      uVar3 = CONCAT71(acStack_77._0_7_,cStack_78);
      uVar2 = CONCAT71(local_80._1_7_,(byte)local_80);
      plVar8 = *(long **)(this + lVar7 + 0x10);
      local_80._0_1_ = 0;
      local_80._1_1_ = '\0';
      local_80._2_1_ = '\0';
      local_80._3_1_ = '\0';
      local_80._4_1_ = '\0';
      local_80._5_1_ = '\0';
      local_80._6_1_ = '\0';
      local_80._7_1_ = '\0';
      cStack_78 = '\0';
      acStack_77[0] = '\0';
      acStack_77[1] = '\0';
      acStack_77[2] = '\0';
      acStack_77[3] = '\0';
      acStack_77[4] = '\0';
      acStack_77[5] = '\0';
      acStack_77[6] = '\0';
      *(undefined8 *)(this + lVar7 + 0x10) = uVar3;
      *(undefined8 *)(this + lVar7 + 8) = uVar2;
      if ((plVar8 != (long *)0x0) &&
         (lVar4 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar4 == 0)) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar8 = (long *)CONCAT71(acStack_77._0_7_,cStack_78);
      if ((plVar8 != (long *)0x0) &&
         (lVar4 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar4 == 0)) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar8 = plStack_c8;
      if ((plStack_c8 != (long *)0x0) &&
         (lVar4 = FUN_00255510(0xffffffffffffffff,plStack_c8 + 1), lVar4 == 0)) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar11 = *(long **)(this + lVar7 + 8);
      lVar7 = plVar11[6];
      goto joined_r0x00303a4c;
    }
    puVar9 = *(undefined **)(*plVar11 + 8);
  }
  lVar7 = plVar11[6];
joined_r0x00303a4c:
  if (((lVar7 == 0) && (plVar11[0xb] == 0)) && (plVar11[0x10] == 0)) {
    local_118 = (basic_string)0x16;
    uStack_117 = (undefined7)s_addListener_001d6f8c._0_8_;
    uStack_110 = CONCAT31(0x72656e,SUB81(s_addListener_001d6f8c._0_8_,7));
    uStack_10c = uStack_10c & 0xffffff00;
    lVar7 = FUN_002632b8(plVar11[8],plVar11[9],&local_118);
    if ((lVar7 != 0) || (lVar7 = FUN_002632b8(plVar11[0xd],plVar11[0xe],&local_118), lVar7 != 0)) {
      prVar6 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00303d20 to 00303d33 has its CatchHandler @ 00303f50 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_118);
                    /* try { // try from 00303d34 to 00303d47 has its CatchHandler @ 00303f38 */
      FUN_00263450(&local_d0,&local_80,"\" - a property with that name already exists!");
                    /* try { // try from 00303d4c to 00303d83 has its CatchHandler @ 00303f14 */
      std::runtime_error::runtime_error(prVar6,(basic_string *)&local_d0);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar6,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00303f8c;
    }
    lVar7 = FUN_002632b8(plVar11[3],plVar11[4],&local_118);
    if (lVar7 != 0) {
      prVar6 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00303d94 to 00303da7 has its CatchHandler @ 00303f10 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_118);
                    /* try { // try from 00303da8 to 00303dbb has its CatchHandler @ 00303f0c */
      FUN_00263450(&local_d0,&local_80,"\" - a method with that name already exists!");
                    /* try { // try from 00303dc0 to 00303df7 has its CatchHandler @ 00303ee0 */
      std::runtime_error::runtime_error(prVar6,(basic_string *)&local_d0);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar6,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00303f8c;
    }
    plStack_f8 = (long *)CONCAT44(uStack_10c,uStack_110);
    local_100 = (undefined *)CONCAT71(uStack_117,local_118);
    local_d8 = 0;
    local_f0 = local_108;
    plStack_e0 = _UNK_001d8138;
    local_e8 = _DAT_001d8130;
                    /* try { // try from 00303adc to 00303ae3 has its CatchHandler @ 00303ec8 */
    local_60 = (long **)operator_new(0x38);
    *local_60 = (long *)&PTR_FUN_00383f68;
    if (((ulong)local_100 & 1) == 0) {
      local_60[2] = plStack_f8;
      *(undefined **)(local_60 + 1) = local_100;
      local_60[3] = local_f0;
    }
    else {
                    /* try { // try from 00303b14 to 00303b17 has its CatchHandler @ 00303e68 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (local_60 + 1),(char *)local_f0,(ulong)plStack_f8);
    }
    local_60[5] = plStack_e0;
    local_60[4] = local_e8;
    *(undefined4 *)(local_60 + 6) = local_d8;
    if (((byte)local_100 & 1) == 0) {
LAB_00303b54:
      pplVar5 = (long **)&local_80;
      local_b0 = local_60;
LAB_00303b64:
      pplVar5[4] = (long *)0x0;
    }
    else {
      operator_delete(local_f0);
      if (local_60 == (long **)0x0) {
        pplVar5 = &local_d0;
        goto LAB_00303b64;
      }
      if (local_60 != (long **)&local_80) goto LAB_00303b54;
      local_b0 = &local_d0;
                    /* try { // try from 00303d04 to 00303d0f has its CatchHandler @ 00303df8 */
      (**(code **)(CONCAT71(local_80._1_7_,(byte)local_80) + 0x18))(&local_80,&local_d0);
    }
    local_a0 = 1;
    if (((byte)local_118 & 1) == 0) {
      uStack_90 = CONCAT44(uStack_10c,uStack_110);
      local_98 = CONCAT71(uStack_117,local_118);
      local_88 = local_108;
    }
    else {
                    /* try { // try from 00303b98 to 00303b9f has its CatchHandler @ 00303dfc */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_98,(char *)local_108,CONCAT44(uStack_10c,uStack_110));
    }
    if (local_60 == (long **)&local_80) {
      lVar7 = 4;
      pplVar5 = (long **)&local_80;
LAB_00303bc4:
      (*(code *)(*pplVar5)[lVar7])();
    }
    else if (local_60 != (long **)0x0) {
      lVar7 = 5;
      pplVar5 = local_60;
      goto LAB_00303bc4;
    }
                    /* try { // try from 00303bd0 to 00303be3 has its CatchHandler @ 00303eb8 */
    FUN_002634d4(plVar11 + 3,&local_118,&local_118,&local_d0);
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if (local_b0 == &local_d0) {
      lVar7 = 4;
      pplVar5 = &local_d0;
LAB_00303c18:
      (*(code *)(*pplVar5)[lVar7])();
    }
    else if (local_b0 != (long **)0x0) {
      lVar7 = 5;
      pplVar5 = local_b0;
      goto LAB_00303c18;
    }
    if (((byte)local_118 & 1) != 0) {
      operator_delete(local_108);
    }
    plStack_c8 = (long *)((ulong)plStack_c8 & 0xffffffffffffff00);
    local_d0 = (long *)0x726567676972740e;
                    /* try { // try from 00303c58 to 00303c6b has its CatchHandler @ 00303ea4 */
    FUN_00303f90(plVar11,&local_d0,0x20,1);
    if (((ulong)local_d0 & 1) != 0) {
      operator_delete(local_c0);
    }
    local_80._0_1_ = 0x1e;
    acStack_77[7] = 0;
    local_80._1_1_ = s_removeListeners_001d79f7[0];
    local_80._2_1_ = s_removeListeners_001d79f7[1];
    local_80._3_1_ = s_removeListeners_001d79f7[2];
    local_80._4_1_ = s_removeListeners_001d79f7[3];
    local_80._5_1_ = s_removeListeners_001d79f7[4];
    local_80._6_1_ = s_removeListeners_001d79f7[5];
    local_80._7_1_ = s_removeListeners_001d79f7[6];
    cStack_78 = s_removeListeners_001d79f7[7];
    acStack_77[0] = s_removeListeners_001d79f7[8];
    acStack_77[1] = s_removeListeners_001d79f7[9];
    acStack_77[2] = s_removeListeners_001d79f7[10];
    acStack_77[3] = s_removeListeners_001d79f7[0xb];
    acStack_77[4] = s_removeListeners_001d79f7[0xc];
    acStack_77[5] = s_removeListeners_001d79f7[0xd];
    acStack_77[6] = s_removeListeners_001d79f7[0xe];
                    /* try { // try from 00303ca8 to 00303cbb has its CatchHandler @ 00303e94 */
    FUN_00303f90(&local_80,plVar11,&local_80,0x28,1);
    if (((byte)local_80 & 1) != 0) {
      operator_delete((void *)CONCAT71(uStack_6f,acStack_77[7]));
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00303f8c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00303f90  FUN_00303f90 =====

void FUN_00303f90(long param_1,basic_string *param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  basic_string *pbVar3;
  runtime_error *prVar4;
  ulong local_100;
  ulong uStack_f8;
  char *local_f0;
  long local_e8;
  long lStack_e0;
  undefined4 local_d8;
  basic_string local_d0 [32];
  basic_string *local_b0;
  undefined8 local_a0;
  ulong local_98;
  undefined8 uStack_90;
  void *local_88;
  long local_80 [4];
  basic_string *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_002632b8(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),param_2);
  if ((lVar2 != 0) ||
     (lVar2 = FUN_002632b8(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),param_2),
     lVar2 != 0)) {
    prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 003041c4 to 003041d7 has its CatchHandler @ 003043b4 */
    std::__ndk1::operator+("Cannot add Hybrid Method \"",param_2);
                    /* try { // try from 003041d8 to 003041eb has its CatchHandler @ 0030439c */
    FUN_00263450(local_d0,local_80,"\" - a property with that name already exists!");
                    /* try { // try from 003041f0 to 00304227 has its CatchHandler @ 00304378 */
    std::runtime_error::runtime_error(prVar4,local_d0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_003043d8;
  }
  lVar2 = FUN_002632b8(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),param_2);
  if (lVar2 != 0) {
    prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00304238 to 0030424b has its CatchHandler @ 00304374 */
    std::__ndk1::operator+("Cannot add Hybrid Method \"",param_2);
                    /* try { // try from 0030424c to 0030425f has its CatchHandler @ 00304370 */
    FUN_00263450(local_d0,local_80,"\" - a method with that name already exists!");
                    /* try { // try from 00304264 to 0030429b has its CatchHandler @ 00304344 */
    std::runtime_error::runtime_error(prVar4,local_d0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_003043d8;
  }
  if (((byte)*param_2 & 1) == 0) {
    uStack_f8 = *(ulong *)(param_2 + 8);
    local_100 = *(ulong *)param_2;
    local_f0 = *(char **)(param_2 + 0x10);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_100,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  local_d8 = 0;
  local_e8 = param_3;
  lStack_e0 = param_4;
                    /* try { // try from 0030402c to 00304033 has its CatchHandler @ 0030432c */
  local_60 = (basic_string *)operator_new(0x38);
  *(undefined ***)local_60 = &PTR_FUN_00383fe8;
  if ((local_100 & 1) == 0) {
    *(ulong *)(local_60 + 0x10) = uStack_f8;
    *(ulong *)(local_60 + 8) = local_100;
    *(char **)(local_60 + 0x18) = local_f0;
  }
  else {
                    /* try { // try from 00304064 to 00304067 has its CatchHandler @ 0030430c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (local_60 + 8),local_f0,uStack_f8);
  }
  *(long *)(local_60 + 0x28) = lStack_e0;
  *(long *)(local_60 + 0x20) = local_e8;
  *(undefined4 *)(local_60 + 0x30) = local_d8;
  if (((byte)local_100._0_1_ & 1) == 0) {
LAB_003040a4:
    pbVar3 = (basic_string *)local_80;
    local_b0 = local_60;
LAB_003040b4:
    *(long *)(pbVar3 + 0x20) = 0;
  }
  else {
    operator_delete(local_f0);
    if (local_60 == (basic_string *)0x0) {
      pbVar3 = local_d0;
      goto LAB_003040b4;
    }
    if (local_60 != (basic_string *)local_80) goto LAB_003040a4;
    local_b0 = local_d0;
                    /* try { // try from 003041a8 to 003041b3 has its CatchHandler @ 0030429c */
    (**(code **)(local_80[0] + 0x18))(local_80,local_d0);
  }
  local_a0 = 0;
  if (((byte)*param_2 & 1) == 0) {
    uStack_90 = *(undefined8 *)(param_2 + 8);
    local_98 = *(ulong *)param_2;
    local_88 = *(void **)(param_2 + 0x10);
  }
  else {
                    /* try { // try from 003040e4 to 003040eb has its CatchHandler @ 003042a0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_98,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  if (local_60 == (basic_string *)local_80) {
    lVar2 = 4;
    pbVar3 = (basic_string *)local_80;
LAB_00304110:
    (**(code **)(*(long *)pbVar3 + lVar2 * 8))();
  }
  else if (local_60 != (basic_string *)0x0) {
    lVar2 = 5;
    pbVar3 = local_60;
    goto LAB_00304110;
  }
                    /* try { // try from 0030411c to 0030412f has its CatchHandler @ 0030431c */
  FUN_002634d4((undefined8 *)(param_1 + 0x18),param_2,param_2,local_d0);
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (local_b0 == local_d0) {
    lVar2 = 4;
    pbVar3 = local_d0;
LAB_00304164:
    (**(code **)(*(long *)pbVar3 + lVar2 * 8))();
  }
  else if (local_b0 != (basic_string *)0x0) {
    lVar2 = 5;
    pbVar3 = local_b0;
    goto LAB_00304164;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_003043d8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003043dc  FUN_003043dc =====

void FUN_003043dc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00383fe8;
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


// ===== 00304448  FUN_00304448 =====

void FUN_00304448(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00383fe8;
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


// ===== 003044b0  FUN_003044b0 =====

undefined8 * FUN_003044b0(long param_1)

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
  *puVar4 = &PTR_FUN_00383fe8;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 00304510 to 00304513 has its CatchHandler @ 0030454c */
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


// ===== 00304574  FUN_00304574 =====

void FUN_00304574(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00383fe8;
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


// ===== 0030460c  FUN_0030460c =====

void FUN_0030460c(long param_1)

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


// ===== 0030466c  FUN_0030466c =====

void FUN_0030466c(void *param_1)

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


// ===== 003046c8  FUN_003046c8 =====

void FUN_003046c8(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 ulong *param_6)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  JSError *pJVar6;
  long *plVar7;
  ulong uVar8;
  code *pcVar9;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  long local_80;
  long *plStack_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar8 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 00304724 to 00304733 has its CatchHandler @ 00304c74 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar4 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00395750,0xffffffffffffffff
                            ), lVar4 == 0)) {
    lVar4 = 0;
    plVar7 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x003047ac;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto joined_r0x003047ac;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar7 = plStack_78;
  }
  lVar5 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar5 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x003047ac:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar8 == 0) {
    pcVar9 = *(code **)(param_2 + 0x20);
    uVar8 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive34HybridViewModelTriggerPropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395b88
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive34HybridViewModelTriggerPropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395b88
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive34HybridViewModelTriggerPropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395b80
       , iVar3 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive34HybridViewModelTriggerPropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395b80
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive34HybridViewModelTriggerPropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395b88
                         );
    }
    if ((uVar8 & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(lVar4 + ((long)uVar8 >> 1)));
    }
                    /* try { // try from 003047e4 to 003047e7 has its CatchHandler @ 00304984 */
    (*pcVar9)();
    *param_1 = 0;
    if ((plVar7 != (long *)0x0) && (lVar4 = FUN_00255510(0xffffffffffffffff,plVar7 + 1), lVar4 == 0)
       ) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 0030485c to 0030486b has its CatchHandler @ 00304e10 */
    FUN_00304ec8(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar4);
    pJVar6 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00304878 to 0030488b has its CatchHandler @ 00304df0 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 0030488c to 0030489f has its CatchHandler @ 00304dd8 */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 003048a0 to 003048ab has its CatchHandler @ 00304da8 */
    std::__ndk1::to_string(0);
                    /* try { // try from 003048ac to 003048bb has its CatchHandler @ 00304d84 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 003048bc to 003048cf has its CatchHandler @ 00304d60 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 003048d0 to 003048db has its CatchHandler @ 00304d3c */
    std::__ndk1::to_string(uVar8);
                    /* try { // try from 003048dc to 003048eb has its CatchHandler @ 00304d18 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 003048ec to 003048ff has its CatchHandler @ 00304cf4 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 00304904 to 0030493f has its CatchHandler @ 00304c94 */
    facebook::jsi::JSError::JSError(pJVar6,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar6,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00304e38  FUN_00304e38 =====

void FUN_00304e38(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395b90) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00304e88  FUN_00304e88 =====

undefined * FUN_00304e88(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395b98;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00304ec8  FUN_00304ec8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00304ec8(undefined8 *param_1,int param_2,byte *param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  void *pvVar4;
  byte *pbVar5;
  long lVar6;
  undefined *puVar7;
  byte bVar8;
  ulong *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong local_a0;
  ulong local_98;
  undefined8 *local_90;
  byte local_88 [8];
  size_t local_80;
  void *local_78;
  ulong local_70;
  ulong uStack_68;
  undefined8 *local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  if (param_4 == 0) {
    local_60 = (undefined8 *)operator_new(0x40);
    puVar7 = PTR_typeinfo_name_00395b58;
    uStack_68 = _UNK_001d7fd8;
    local_70 = _DAT_001d7fd0;
    *(undefined1 *)((long)local_60 + 0x39) = 0;
    uVar10 = *(undefined8 *)(puVar7 + 0x20);
    uVar14 = *(undefined8 *)(puVar7 + 8);
    uVar13 = *(undefined8 *)puVar7;
    uVar16 = *(undefined8 *)(puVar7 + 0x18);
    uVar15 = *(undefined8 *)(puVar7 + 0x10);
    local_60[5] = *(undefined8 *)(puVar7 + 0x28);
    local_60[4] = uVar10;
    uVar12 = *(undefined8 *)(puVar7 + 0x31);
    uVar10 = *(undefined8 *)(puVar7 + 0x29);
    local_60[1] = uVar14;
    *local_60 = uVar13;
    local_60[3] = uVar16;
    local_60[2] = uVar15;
    *(undefined8 *)((long)local_60 + 0x31) = uVar12;
    *(undefined8 *)((long)local_60 + 0x29) = uVar10;
                    /* try { // try from 00304f54 to 00304f63 has its CatchHandler @ 003051f4 */
    margelo::nitro::TypeInfo::demangleName((basic_string *)&local_70,true);
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
  }
  else {
    margelo::nitro::HybridObject::getName();
  }
  bVar8 = local_88[0];
  if (param_2 == 0) {
    sVar3 = (ulong)(local_88[0] >> 1);
    if ((local_88[0] & 1) != 0) {
      sVar3 = local_80;
    }
    uVar1 = sVar3 + 1;
    if (0xffffffffffffffef < uVar1) goto LAB_003051b4;
    if (uVar1 < 0x17) {
      local_98 = 0;
      puVar11 = (undefined8 *)((ulong)&local_a0 | 1);
      local_90 = (undefined8 *)0x0;
      local_a0 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_003050b8;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 003050a0 to 003050a7 has its CatchHandler @ 00305208 */
      puVar11 = (undefined8 *)operator_new(uVar2);
      local_a0 = uVar2 | 1;
      local_98 = uVar1;
      local_90 = puVar11;
LAB_003050b8:
      pvVar4 = (void *)((ulong)local_88 | 1);
      if ((bVar8 & 1) != 0) {
        pvVar4 = local_78;
      }
      memmove(puVar11,pvVar4,sVar3);
    }
    *(undefined2 *)((long)puVar11 + sVar3) = 0x2e;
    pbVar5 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pbVar5 = param_3 + 1;
    }
                    /* try { // try from 003050f8 to 003050ff has its CatchHandler @ 003051e0 */
    puVar9 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_a0,(ulong)pbVar5);
    local_60 = (undefined8 *)puVar9[2];
    uStack_68 = puVar9[1];
    local_70 = *puVar9;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
                    /* try { // try from 00305118 to 0030512b has its CatchHandler @ 003051c8 */
    puVar11 = (undefined8 *)
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_70,0x1d6185);
    uVar10 = puVar11[2];
    uVar13 = puVar11[1];
    uVar12 = *puVar11;
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    param_1[1] = uVar13;
    *param_1 = uVar12;
    param_1[2] = uVar10;
    puVar11 = local_90;
    uVar1 = local_a0;
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
      puVar11 = local_90;
      uVar1 = local_a0;
    }
  }
  else {
    sVar3 = (ulong)(local_88[0] >> 1);
    if ((local_88[0] & 1) != 0) {
      sVar3 = local_80;
    }
    uVar1 = sVar3 + 1;
    if (0xffffffffffffffef < uVar1) {
      if (*(long *)(lVar6 + 0x28) != local_58) goto LAB_00305250;
                    /* try { // try from 003051b0 to 003051b3 has its CatchHandler @ 00305224 */
      FUN_00260a84();
LAB_003051b4:
      if (*(long *)(lVar6 + 0x28) == local_58) {
                    /* try { // try from 003051c4 to 003051c7 has its CatchHandler @ 00305208 */
        uVar10 = FUN_00260a84();
                    /* catch() { ... } // from try @ 00305118 with catch @ 003051c8 */
        if ((local_70 & 1) != 0) {
          operator_delete(local_60);
        }
        if ((local_a0 & 1) != 0) {
          operator_delete(local_90);
        }
        if ((local_88[0] & 1) != 0) {
          operator_delete(local_78);
        }
        if (*(long *)(lVar6 + 0x28) == local_58) {
          FUN_00255d34(uVar10);
        }
      }
      goto LAB_00305250;
    }
    if (uVar1 < 0x17) {
      uStack_68 = 0;
      puVar11 = (undefined8 *)((ulong)&local_70 | 1);
      local_60 = (undefined8 *)0x0;
      local_70 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_00305028;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 00305010 to 00305017 has its CatchHandler @ 00305224 */
      puVar11 = (undefined8 *)operator_new(uVar2);
      local_70 = uVar2 | 1;
      uStack_68 = uVar1;
      local_60 = puVar11;
LAB_00305028:
      pvVar4 = (void *)((ulong)local_88 | 1);
      if ((bVar8 & 1) != 0) {
        pvVar4 = local_78;
      }
      memmove(puVar11,pvVar4,sVar3);
    }
    *(undefined2 *)((long)puVar11 + sVar3) = 0x2e;
    pbVar5 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pbVar5 = param_3 + 1;
    }
                    /* try { // try from 00305068 to 0030506f has its CatchHandler @ 0030520c */
    puVar11 = (undefined8 *)
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_70,(ulong)pbVar5);
    uVar10 = puVar11[2];
    uVar13 = puVar11[1];
    uVar12 = *puVar11;
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    param_1[1] = uVar13;
    *param_1 = uVar12;
    param_1[2] = uVar10;
    puVar11 = local_60;
    uVar1 = local_70;
  }
  if ((uVar1 & 1) != 0) {
    operator_delete(puVar11);
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
LAB_00305250:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00305254  FUN_00305254 =====

void FUN_00305254(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
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


// ===== 003052e0  FUN_003052e0 =====

void FUN_003052e0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00383f68;
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


// ===== 0030534c  FUN_0030534c =====

void FUN_0030534c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00383f68;
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


// ===== 003053b4  FUN_003053b4 =====

undefined8 * FUN_003053b4(long param_1)

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
  *puVar4 = &PTR_FUN_00383f68;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 00305414 to 00305417 has its CatchHandler @ 00305450 */
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


// ===== 00305478  FUN_00305478 =====

void FUN_00305478(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00383f68;
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


// ===== 00305510  FUN_00305510 =====

void FUN_00305510(long param_1)

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


// ===== 00305570  FUN_00305570 =====

void FUN_00305570(void *param_1)

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


// ===== 003055cc  FUN_003055cc =====

void FUN_003055cc(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
                 ulong *param_6)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  JSError *pJVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined8 *local_d0 [4];
  undefined8 **local_b0;
  long local_a0;
  long *plStack_98;
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar10 = *param_5;
  uVar9 = *param_6;
  local_d0[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 0030562c to 0030563b has its CatchHandler @ 00305c74 */
  (**(code **)(*param_3 + 0x160))(&local_a0,param_3,local_d0);
  if ((local_a0 == 0) ||
     (lVar5 = __dynamic_cast(local_a0,PTR_typeinfo_00394860,PTR_typeinfo_00395750,0xffffffffffffffff
                            ), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_98 != (long *)0x0) goto LAB_00305688;
  }
  else if (plStack_98 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
    FUN_00259a00(1,plStack_98 + 1);
    plVar8 = plStack_98;
LAB_00305688:
    lVar6 = FUN_00255510(0xffffffffffffffff,plStack_98 + 1);
    if (lVar6 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
  if (local_d0[0] != (undefined8 *)0x0) {
    (**(code **)*local_d0[0])();
  }
  if (uVar9 != 1) {
                    /* try { // try from 003057f0 to 003057ff has its CatchHandler @ 00305e14 */
    FUN_00304ec8(&local_a0,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 0030580c to 0030581f has its CatchHandler @ 00305df4 */
    std::__ndk1::operator+("`",(basic_string *)&local_a0);
                    /* try { // try from 00305820 to 00305833 has its CatchHandler @ 00305ddc */
    FUN_00263450(auStack_130,auStack_148,"` expected ");
                    /* try { // try from 00305834 to 0030583f has its CatchHandler @ 00305dac */
    std::__ndk1::to_string(1);
                    /* try { // try from 00305840 to 0030584f has its CatchHandler @ 00305d88 */
    FUN_00264adc(auStack_118,auStack_130,auStack_160);
                    /* try { // try from 00305850 to 00305863 has its CatchHandler @ 00305d64 */
    FUN_00263450(auStack_100,auStack_118," arguments, but received ");
                    /* try { // try from 00305864 to 0030586f has its CatchHandler @ 00305d40 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 00305870 to 0030587f has its CatchHandler @ 00305d1c */
    FUN_00264adc(auStack_e8,auStack_100,auStack_178);
                    /* try { // try from 00305880 to 00305893 has its CatchHandler @ 00305cf4 */
    FUN_00263450(local_d0,auStack_e8,&DAT_001d5be0);
                    /* try { // try from 00305898 to 003058d3 has its CatchHandler @ 00305c94 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_d0);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
    goto LAB_00305e38;
  }
  pcVar11 = *(code **)(param_2 + 0x20);
  uVar9 = *(ulong *)(param_2 + 0x28);
  if (((*
        PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive34HybridViewModelTriggerPropertySpecENSt6__ndk18functionIFvvEEEJRKS8_EJLm0EEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395b68
       & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(
                                 PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive34HybridViewModelTriggerPropertySpecENSt6__ndk18functionIFvvEEEJRKS8_EJLm0EEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395b68
                                 ),
     puVar3 = 
     PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive34HybridViewModelTriggerPropertySpecENSt6__ndk18functionIFvvEEEJRKS8_EJLm0EEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395b60
     , iVar4 != 0)) {
    *(undefined4 *)
     PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive34HybridViewModelTriggerPropertySpecENSt6__ndk18functionIFvvEEEJRKS8_EJLm0EEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395b60
         = 0;
    __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
    __cxa_guard_release(
                       PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive34HybridViewModelTriggerPropertySpecENSt6__ndk18functionIFvvEEEJRKS8_EJLm0EEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395b68
                       );
  }
  plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
  if ((uVar9 & 1) != 0) {
    pcVar11 = *(code **)(pcVar11 + *plVar1);
  }
                    /* try { // try from 003056f0 to 003056ff has its CatchHandler @ 00305980 */
  FUN_00288784(local_d0,param_3,uVar10);
                    /* try { // try from 00305700 to 00305713 has its CatchHandler @ 00305944 */
  (*pcVar11)(&local_a0,plVar1,local_d0);
  if (local_b0 == local_d0) {
    lVar5 = 4;
    local_b0 = local_d0;
LAB_00305734:
    (*(code *)(*local_b0)[lVar5])();
  }
  else if (local_b0 != (undefined8 **)0x0) {
    lVar5 = 5;
    goto LAB_00305734;
  }
                    /* try { // try from 00305740 to 00305753 has its CatchHandler @ 00305924 */
  FUN_002e76cc(param_1,param_3,&local_a0);
  if (local_80 == &local_a0) {
    lVar5 = 4;
    local_80 = &local_a0;
LAB_00305774:
    (**(code **)(*local_80 + lVar5 * 8))();
  }
  else if (local_80 != (long *)0x0) {
    lVar5 = 5;
    goto LAB_00305774;
  }
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_00305e38:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00305e3c  FUN_00305e3c =====

void FUN_00305e3c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395b70) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00305e8c  FUN_00305e8c =====

undefined * FUN_00305e8c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395b78;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00305ecc  margelo::nitro::rive::HybridViewModelTriggerPropertySpec::loadHybridMethods =====

/* virtual thunk to margelo::nitro::rive::HybridViewModelTriggerPropertySpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridViewModelTriggerPropertySpec::loadHybridMethods
          (HybridViewModelTriggerPropertySpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    loadHybridMethods(this + *(long *)(*(long *)this + -0x30));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00305f10  margelo::nitro::rive::HybridViewModelTriggerPropertySpec::loadHybridMethods =====

/* virtual thunk to margelo::nitro::rive::HybridViewModelTriggerPropertySpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridViewModelTriggerPropertySpec::loadHybridMethods
          (HybridViewModelTriggerPropertySpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    loadHybridMethods(this + *(long *)(*(long *)this + -0x20));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00305f54  FUN_00305f54 =====

void FUN_00305f54(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x305f58);
  (*pcVar1)();
}


// ===== 00305f58  FUN_00305f58 =====

void FUN_00305f58(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x305f5c);
  (*pcVar1)();
}


// ===== 00305f5c  FUN_00305f5c =====

void FUN_00305f5c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x305f60);
  (*pcVar1)();
}


// ===== 00305f60  FUN_00305f60 =====

void FUN_00305f60(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x305f64);
  (*pcVar1)();
}


// ===== 00305f64  margelo::nitro::rive::HybridViewModelImagePropertySpec::loadHybridMethods =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* margelo::nitro::rive::HybridViewModelImagePropertySpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridViewModelImagePropertySpec::loadHybridMethods
          (HybridViewModelImagePropertySpec *this)

{
  long lVar1;
  long lVar2;
  long **pplVar3;
  runtime_error *prVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  basic_string local_148;
  char acStack_147 [7];
  char cStack_140;
  char acStack_13f [7];
  undefined1 local_138;
  undefined7 uStack_137;
  basic_string local_130;
  undefined7 uStack_12f;
  undefined4 uStack_128;
  uint uStack_124;
  long *local_120;
  basic_string local_118;
  undefined4 uStack_117;
  undefined3 uStack_113;
  long *plStack_110;
  long *local_108;
  undefined *local_100;
  long *plStack_f8;
  long *local_f0;
  long *local_e8;
  long *plStack_e0;
  undefined4 local_d8;
  long *local_d0;
  long *plStack_c8;
  long **local_b0;
  undefined8 local_a0;
  ulong local_98;
  long *plStack_90;
  long *local_88;
  long *local_80;
  long *plStack_78;
  long **local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  margelo::nitro::HybridObject::loadHybridMethods();
  lVar5 = *(long *)(*(long *)this + -0x38);
  margelo::nitro::HybridObject::loadHybridMethods();
  FUN_002e4024(this + lVar5 + *(long *)(*(long *)(this + lVar5) + -0x20) + 8);
  lVar5 = *(long *)(*(long *)this + -0x20);
  plVar6 = *(long **)(this + lVar5 + 8);
  if (plVar6 == (long *)0x0) {
    local_80 = (long *)0x0;
    plStack_78 = (long *)0x0;
    local_100 = PTR_typeinfo_00395758;
                    /* try { // try from 00305ff0 to 00305fff has its CatchHandler @ 00306bf0 */
    FUN_00264f84(&local_d0,&local_100,&local_80);
    plVar9 = plStack_c8;
    plVar6 = local_d0;
    plVar8 = *(long **)(this + lVar5 + 0x10);
    local_d0 = (long *)0x0;
    plStack_c8 = (long *)0x0;
    *(long **)(this + lVar5 + 0x10) = plVar9;
    *(long **)(this + lVar5 + 8) = plVar6;
    if ((plVar8 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar6 = plStack_c8;
    if ((plStack_c8 != (long *)0x0) &&
       (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_c8 + 1), lVar2 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar6 = plStack_78;
    if ((plStack_78 != (long *)0x0) &&
       (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1), lVar2 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar6 = *(long **)(this + lVar5 + 8);
  }
  puVar7 = *(undefined **)(*plVar6 + 8);
  plVar9 = plVar6;
  while (puVar7 != PTR_typeinfo_name_00395ba0) {
    plVar9 = (long *)plVar9[1];
    if (plVar9 == (long *)0x0) {
      plStack_c8 = *(long **)(this + lVar5 + 0x10);
      local_d0 = plVar6;
      if (plStack_c8 != (long *)0x0) {
        FUN_00259a00(1,plStack_c8 + 1);
      }
      local_100 = PTR_typeinfo_00395758;
                    /* try { // try from 0030610c to 0030611b has its CatchHandler @ 00306be4 */
      FUN_00264f84(&local_80,&local_100,&local_d0);
      plVar9 = plStack_78;
      plVar6 = local_80;
      plVar8 = *(long **)(this + lVar5 + 0x10);
      local_80 = (long *)0x0;
      plStack_78 = (long *)0x0;
      *(long **)(this + lVar5 + 0x10) = plVar9;
      *(long **)(this + lVar5 + 8) = plVar6;
      if ((plVar8 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar2 == 0)) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar6 = plStack_78;
      if ((plStack_78 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1), lVar2 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar6 = plStack_c8;
      if ((plStack_c8 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_c8 + 1), lVar2 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar9 = *(long **)(this + lVar5 + 8);
      lVar5 = plVar9[6];
      goto joined_r0x003061c0;
    }
    puVar7 = *(undefined **)(*plVar9 + 8);
  }
  lVar5 = plVar9[6];
joined_r0x003061c0:
  if (((lVar5 == 0) && (plVar9[0xb] == 0)) && (plVar9[0x10] == 0)) {
    local_118 = (basic_string)0x6;
    uStack_117 = 0x746573;
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_118);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_118), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 003067c4 to 003067d7 has its CatchHandler @ 00306e00 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_118);
                    /* try { // try from 003067d8 to 003067eb has its CatchHandler @ 00306db0 */
      FUN_00263450(&local_d0,&local_80,"\" - a property with that name already exists!");
                    /* try { // try from 003067f0 to 00306827 has its CatchHandler @ 00306d8c */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_d0);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00306e3c;
    }
    plVar6 = plVar9 + 3;
    lVar5 = FUN_002632b8(*plVar6,plVar9[4],&local_118);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00306920 to 00306933 has its CatchHandler @ 00306d88 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_118);
                    /* try { // try from 00306934 to 00306947 has its CatchHandler @ 00306d04 */
      FUN_00263450(&local_d0,&local_80,"\" - a method with that name already exists!");
                    /* try { // try from 0030694c to 00306983 has its CatchHandler @ 00306cd8 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_d0);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00306e3c;
    }
    local_100 = (undefined *)CONCAT35(uStack_113,CONCAT41(uStack_117,local_118));
    local_d8 = 0;
    plStack_f8 = plStack_110;
    local_f0 = local_108;
    plStack_e0 = _UNK_001d8138;
    local_e8 = _DAT_001d8130;
                    /* try { // try from 0030623c to 00306243 has its CatchHandler @ 00306c60 */
    local_60 = (long **)operator_new(0x38);
    *local_60 = (long *)&PTR_FUN_00384338;
    if (((ulong)local_100 & 1) == 0) {
      local_60[2] = plStack_f8;
      *(undefined **)(local_60 + 1) = local_100;
      local_60[3] = local_f0;
    }
    else {
                    /* try { // try from 00306274 to 00306277 has its CatchHandler @ 00306bd4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (local_60 + 1),(char *)local_f0,(ulong)plStack_f8);
    }
    local_60[5] = plStack_e0;
    local_60[4] = local_e8;
    *(undefined4 *)(local_60 + 6) = local_d8;
    if (((byte)local_100 & 1) == 0) {
LAB_003062b4:
      pplVar3 = &local_80;
      local_b0 = local_60;
LAB_003062c4:
      pplVar3[4] = (long *)0x0;
    }
    else {
      operator_delete(local_f0);
      if (local_60 == (long **)0x0) {
        pplVar3 = &local_d0;
        goto LAB_003062c4;
      }
      if (local_60 != &local_80) goto LAB_003062b4;
      local_b0 = &local_d0;
                    /* try { // try from 00306768 to 00306773 has its CatchHandler @ 00306a6c */
      (*(code *)local_80[3])(&local_80,&local_d0);
    }
    local_a0 = 1;
    if (((byte)local_118 & 1) == 0) {
      plStack_90 = plStack_110;
      local_98 = CONCAT35(uStack_113,CONCAT41(uStack_117,local_118));
      local_88 = local_108;
    }
    else {
                    /* try { // try from 003062f8 to 003062ff has its CatchHandler @ 00306b68 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_98,(char *)local_108,(ulong)plStack_110);
    }
    if (local_60 == &local_80) {
      lVar5 = 4;
      pplVar3 = &local_80;
LAB_00306324:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_60 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_60;
      goto LAB_00306324;
    }
                    /* try { // try from 00306330 to 00306343 has its CatchHandler @ 00306c50 */
    FUN_002634d4(plVar6,&local_118,&local_118,&local_d0);
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if (local_b0 == &local_d0) {
      lVar5 = 4;
      pplVar3 = &local_d0;
LAB_00306378:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_b0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_b0;
      goto LAB_00306378;
    }
    if (((byte)local_118 & 1) != 0) {
      operator_delete(local_108);
    }
    local_130 = (basic_string)0x16;
    uStack_12f = (undefined7)s_addListener_001d6f8c._0_8_;
    uStack_128 = CONCAT31(0x72656e,SUB81(s_addListener_001d6f8c._0_8_,7));
    uStack_124 = uStack_124 & 0xffffff00;
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_130);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_130), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00306838 to 0030684b has its CatchHandler @ 00306de4 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_130);
                    /* try { // try from 0030684c to 0030685f has its CatchHandler @ 00306d70 */
      FUN_00263450(&local_d0,&local_80,"\" - a property with that name already exists!");
                    /* try { // try from 00306864 to 0030689b has its CatchHandler @ 00306d4c */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_d0);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00306e3c;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_130);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00306990 to 003069a3 has its CatchHandler @ 00306d48 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_130);
                    /* try { // try from 003069a4 to 003069b7 has its CatchHandler @ 00306cd4 */
      FUN_00263450(&local_d0,&local_80,"\" - a method with that name already exists!");
                    /* try { // try from 003069bc to 003069f3 has its CatchHandler @ 00306ca8 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_d0);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00306e3c;
    }
    plStack_f8 = (long *)CONCAT44(uStack_124,uStack_128);
    local_100 = (undefined *)CONCAT71(uStack_12f,local_130);
    local_d8 = 0;
    local_f0 = local_120;
    plStack_e0 = _UNK_001d7f68;
    local_e8 = _DAT_001d7f60;
                    /* try { // try from 0030640c to 00306413 has its CatchHandler @ 00306c38 */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_003843b8;
    if (((ulong)local_100 & 1) == 0) {
      pplVar3[2] = plStack_f8;
      *(undefined **)(pplVar3 + 1) = local_100;
      pplVar3[3] = local_f0;
    }
    else {
                    /* try { // try from 00306444 to 00306447 has its CatchHandler @ 00306b58 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_f0,(ulong)plStack_f8);
    }
    local_60 = pplVar3;
    pplVar3[5] = plStack_e0;
    pplVar3[4] = local_e8;
    *(undefined4 *)(pplVar3 + 6) = local_d8;
    if (((byte)local_100 & 1) == 0) {
LAB_00306484:
      pplVar3 = &local_80;
      local_b0 = local_60;
LAB_00306494:
      pplVar3[4] = (long *)0x0;
    }
    else {
      operator_delete(local_f0);
      if (local_60 == (long **)0x0) {
        pplVar3 = &local_d0;
        goto LAB_00306494;
      }
      if (local_60 != &local_80) goto LAB_00306484;
      local_b0 = &local_d0;
                    /* try { // try from 00306788 to 00306793 has its CatchHandler @ 00306a68 */
      (*(code *)local_80[3])(&local_80,&local_d0);
    }
    local_a0 = 1;
    if (((byte)local_130 & 1) == 0) {
      plStack_90 = (long *)CONCAT44(uStack_124,uStack_128);
      local_98 = CONCAT71(uStack_12f,local_130);
      local_88 = local_120;
    }
    else {
                    /* try { // try from 003064c8 to 003064cf has its CatchHandler @ 00306aec */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_98,(char *)local_120,CONCAT44(uStack_124,uStack_128));
    }
    if (local_60 == &local_80) {
      lVar5 = 4;
      pplVar3 = &local_80;
LAB_003064f4:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_60 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_60;
      goto LAB_003064f4;
    }
                    /* try { // try from 00306500 to 00306513 has its CatchHandler @ 00306c28 */
    FUN_002634d4(plVar6,&local_130,&local_130,&local_d0);
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if (local_b0 == &local_d0) {
      lVar5 = 4;
      pplVar3 = &local_d0;
LAB_00306548:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_b0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_b0;
      goto LAB_00306548;
    }
    if (((byte)local_130 & 1) != 0) {
      operator_delete(local_120);
    }
    local_148 = (basic_string)0x1e;
    local_138 = 0;
    acStack_147[0] = s_removeListeners_001d79f7[0];
    acStack_147[1] = s_removeListeners_001d79f7[1];
    acStack_147[2] = s_removeListeners_001d79f7[2];
    acStack_147[3] = s_removeListeners_001d79f7[3];
    acStack_147[4] = s_removeListeners_001d79f7[4];
    acStack_147[5] = s_removeListeners_001d79f7[5];
    acStack_147[6] = s_removeListeners_001d79f7[6];
    cStack_140 = s_removeListeners_001d79f7[7];
    acStack_13f[0] = s_removeListeners_001d79f7[8];
    acStack_13f[1] = s_removeListeners_001d79f7[9];
    acStack_13f[2] = s_removeListeners_001d79f7[10];
    acStack_13f[3] = s_removeListeners_001d79f7[0xb];
    acStack_13f[4] = s_removeListeners_001d79f7[0xc];
    acStack_13f[5] = s_removeListeners_001d79f7[0xd];
    acStack_13f[6] = s_removeListeners_001d79f7[0xe];
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_148);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_148), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 003068ac to 003068bf has its CatchHandler @ 00306dc8 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_148);
                    /* try { // try from 003068c0 to 003068d3 has its CatchHandler @ 00306d30 */
      FUN_00263450(&local_d0,&local_80,"\" - a property with that name already exists!");
                    /* try { // try from 003068d8 to 0030690f has its CatchHandler @ 00306d0c */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_d0);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00306e3c;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_148);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00306a00 to 00306a13 has its CatchHandler @ 00306d08 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_148);
                    /* try { // try from 00306a14 to 00306a27 has its CatchHandler @ 00306ca4 */
      FUN_00263450(&local_d0,&local_80,"\" - a method with that name already exists!");
                    /* try { // try from 00306a2c to 00306a63 has its CatchHandler @ 00306c78 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_d0);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00306e3c;
    }
    plStack_f8 = (long *)CONCAT71(acStack_13f,cStack_140);
    local_100 = (undefined *)CONCAT71(acStack_147,local_148);
    local_f0 = (long *)CONCAT71(uStack_137,local_138);
    local_d8 = 0;
    plStack_e0 = _UNK_001d81b8;
    local_e8 = _DAT_001d81b0;
                    /* try { // try from 003065dc to 003065e3 has its CatchHandler @ 00306c10 */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_00384438;
    if (((ulong)local_100 & 1) == 0) {
      pplVar3[2] = plStack_f8;
      *(undefined **)(pplVar3 + 1) = local_100;
      pplVar3[3] = local_f0;
    }
    else {
                    /* try { // try from 00306614 to 00306617 has its CatchHandler @ 00306adc */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_f0,(ulong)plStack_f8);
    }
    local_60 = pplVar3;
    pplVar3[5] = plStack_e0;
    pplVar3[4] = local_e8;
    *(undefined4 *)(pplVar3 + 6) = local_d8;
    if (((byte)local_100 & 1) == 0) {
LAB_00306654:
      pplVar3 = &local_80;
      local_b0 = local_60;
LAB_00306664:
      pplVar3[4] = (long *)0x0;
    }
    else {
      operator_delete(local_f0);
      if (local_60 == (long **)0x0) {
        pplVar3 = &local_d0;
        goto LAB_00306664;
      }
      if (local_60 != &local_80) goto LAB_00306654;
      local_b0 = &local_d0;
                    /* try { // try from 003067a8 to 003067b3 has its CatchHandler @ 00306a64 */
      (*(code *)local_80[3])(&local_80,&local_d0);
    }
    local_a0 = 0;
    if (((byte)local_148 & 1) == 0) {
      plStack_90 = (long *)CONCAT71(acStack_13f,cStack_140);
      local_98 = CONCAT71(acStack_147,local_148);
      local_88 = (long *)CONCAT71(uStack_137,local_138);
    }
    else {
                    /* try { // try from 00306694 to 0030669b has its CatchHandler @ 00306a70 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_98,(char *)CONCAT71(uStack_137,local_138),CONCAT71(acStack_13f,cStack_140));
    }
    if (local_60 == &local_80) {
      lVar5 = 4;
      pplVar3 = &local_80;
LAB_003066c0:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_60 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_60;
      goto LAB_003066c0;
    }
                    /* try { // try from 003066cc to 003066df has its CatchHandler @ 00306c00 */
    FUN_002634d4(plVar6,&local_148,&local_148,&local_d0);
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if (local_b0 == &local_d0) {
      lVar5 = 4;
      pplVar3 = &local_d0;
LAB_00306714:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_b0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_b0;
      goto LAB_00306714;
    }
    if (((byte)local_148 & 1) != 0) {
      operator_delete((void *)CONCAT71(uStack_137,local_138));
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00306e3c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00306e40  FUN_00306e40 =====

void FUN_00306e40(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00384438;
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


// ===== 00306eac  FUN_00306eac =====

void FUN_00306eac(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00384438;
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


// ===== 00306f14  FUN_00306f14 =====

undefined8 * FUN_00306f14(long param_1)

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
  *puVar4 = &PTR_FUN_00384438;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 00306f74 to 00306f77 has its CatchHandler @ 00306fb0 */
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


// ===== 00306fd8  FUN_00306fd8 =====

void FUN_00306fd8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00384438;
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


// ===== 00307070  FUN_00307070 =====

void FUN_00307070(long param_1)

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


// ===== 003070d0  FUN_003070d0 =====

void FUN_003070d0(void *param_1)

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


// ===== 0030712c  FUN_0030712c =====

void FUN_0030712c(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 ulong *param_6)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  JSError *pJVar6;
  long *plVar7;
  ulong uVar8;
  code *pcVar9;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  long local_80;
  long *plStack_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar8 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 00307188 to 00307197 has its CatchHandler @ 003076d8 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar4 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00395758,0xffffffffffffffff
                            ), lVar4 == 0)) {
    lVar4 = 0;
    plVar7 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x00307210;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto joined_r0x00307210;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar7 = plStack_78;
  }
  lVar5 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar5 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x00307210:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar8 == 0) {
    pcVar9 = *(code **)(param_2 + 0x20);
    uVar8 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive32HybridViewModelImagePropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395bf0
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive32HybridViewModelImagePropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395bf0
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive32HybridViewModelImagePropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395be8
       , iVar3 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive32HybridViewModelImagePropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395be8
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive32HybridViewModelImagePropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395bf0
                         );
    }
    if ((uVar8 & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(lVar4 + ((long)uVar8 >> 1)));
    }
                    /* try { // try from 00307248 to 0030724b has its CatchHandler @ 003073e8 */
    (*pcVar9)();
    *param_1 = 0;
    if ((plVar7 != (long *)0x0) && (lVar4 = FUN_00255510(0xffffffffffffffff,plVar7 + 1), lVar4 == 0)
       ) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 003072c0 to 003072cf has its CatchHandler @ 00307874 */
    FUN_0030792c(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar4);
    pJVar6 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 003072dc to 003072ef has its CatchHandler @ 00307854 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 003072f0 to 00307303 has its CatchHandler @ 0030783c */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 00307304 to 0030730f has its CatchHandler @ 0030780c */
    std::__ndk1::to_string(0);
                    /* try { // try from 00307310 to 0030731f has its CatchHandler @ 003077e8 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 00307320 to 00307333 has its CatchHandler @ 003077c4 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 00307334 to 0030733f has its CatchHandler @ 003077a0 */
    std::__ndk1::to_string(uVar8);
                    /* try { // try from 00307340 to 0030734f has its CatchHandler @ 0030777c */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 00307350 to 00307363 has its CatchHandler @ 00307758 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 00307368 to 003073a3 has its CatchHandler @ 003076f8 */
    facebook::jsi::JSError::JSError(pJVar6,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar6,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030789c  FUN_0030789c =====

void FUN_0030789c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395bf8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 003078ec  FUN_003078ec =====

undefined * FUN_003078ec(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395c00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030792c  FUN_0030792c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0030792c(undefined8 *param_1,int param_2,byte *param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  void *pvVar4;
  byte *pbVar5;
  long lVar6;
  undefined *puVar7;
  byte bVar8;
  ulong *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong local_a0;
  ulong local_98;
  undefined8 *local_90;
  byte local_88 [8];
  size_t local_80;
  void *local_78;
  ulong local_70;
  ulong uStack_68;
  undefined8 *local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  if (param_4 == 0) {
    local_60 = (undefined8 *)operator_new(0x40);
    puVar7 = PTR_typeinfo_name_00395ba0;
    uStack_68 = _UNK_001d7fa8;
    local_70 = _DAT_001d7fa0;
    *(undefined1 *)((long)local_60 + 0x37) = 0;
    uVar14 = *(undefined8 *)puVar7;
    uVar13 = *(undefined8 *)(puVar7 + 0x18);
    uVar12 = *(undefined8 *)(puVar7 + 0x10);
    uVar10 = *(undefined8 *)(puVar7 + 0x2f);
    local_60[1] = *(undefined8 *)(puVar7 + 8);
    *local_60 = uVar14;
    local_60[3] = uVar13;
    local_60[2] = uVar12;
    uVar12 = *(undefined8 *)(puVar7 + 0x20);
    local_60[5] = *(undefined8 *)(puVar7 + 0x28);
    local_60[4] = uVar12;
    *(undefined8 *)((long)local_60 + 0x2f) = uVar10;
                    /* try { // try from 003079b8 to 003079c7 has its CatchHandler @ 00307c58 */
    margelo::nitro::TypeInfo::demangleName((basic_string *)&local_70,true);
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
  }
  else {
    margelo::nitro::HybridObject::getName();
  }
  bVar8 = local_88[0];
  if (param_2 == 0) {
    sVar3 = (ulong)(local_88[0] >> 1);
    if ((local_88[0] & 1) != 0) {
      sVar3 = local_80;
    }
    uVar1 = sVar3 + 1;
    if (0xffffffffffffffef < uVar1) goto LAB_00307c18;
    if (uVar1 < 0x17) {
      local_98 = 0;
      puVar11 = (undefined8 *)((ulong)&local_a0 | 1);
      local_90 = (undefined8 *)0x0;
      local_a0 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_00307b1c;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 00307b04 to 00307b0b has its CatchHandler @ 00307c6c */
      puVar11 = (undefined8 *)operator_new(uVar2);
      local_a0 = uVar2 | 1;
      local_98 = uVar1;
      local_90 = puVar11;
LAB_00307b1c:
      pvVar4 = (void *)((ulong)local_88 | 1);
      if ((bVar8 & 1) != 0) {
        pvVar4 = local_78;
      }
      memmove(puVar11,pvVar4,sVar3);
    }
    *(undefined2 *)((long)puVar11 + sVar3) = 0x2e;
    pbVar5 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pbVar5 = param_3 + 1;
    }
                    /* try { // try from 00307b5c to 00307b63 has its CatchHandler @ 00307c44 */
    puVar9 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_a0,(ulong)pbVar5);
    local_60 = (undefined8 *)puVar9[2];
    uStack_68 = puVar9[1];
    local_70 = *puVar9;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
                    /* try { // try from 00307b7c to 00307b8f has its CatchHandler @ 00307c2c */
    puVar11 = (undefined8 *)
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_70,0x1d6185);
    uVar10 = puVar11[2];
    uVar13 = puVar11[1];
    uVar12 = *puVar11;
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    param_1[1] = uVar13;
    *param_1 = uVar12;
    param_1[2] = uVar10;
    puVar11 = local_90;
    uVar1 = local_a0;
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
      puVar11 = local_90;
      uVar1 = local_a0;
    }
  }
  else {
    sVar3 = (ulong)(local_88[0] >> 1);
    if ((local_88[0] & 1) != 0) {
      sVar3 = local_80;
    }
    uVar1 = sVar3 + 1;
    if (0xffffffffffffffef < uVar1) {
      if (*(long *)(lVar6 + 0x28) != local_58) goto LAB_00307cb4;
                    /* try { // try from 00307c14 to 00307c17 has its CatchHandler @ 00307c88 */
      FUN_00260a84();
LAB_00307c18:
      if (*(long *)(lVar6 + 0x28) == local_58) {
                    /* try { // try from 00307c28 to 00307c2b has its CatchHandler @ 00307c6c */
        uVar10 = FUN_00260a84();
                    /* catch() { ... } // from try @ 00307b7c with catch @ 00307c2c */
        if ((local_70 & 1) != 0) {
          operator_delete(local_60);
        }
        if ((local_a0 & 1) != 0) {
          operator_delete(local_90);
        }
        if ((local_88[0] & 1) != 0) {
          operator_delete(local_78);
        }
        if (*(long *)(lVar6 + 0x28) == local_58) {
          FUN_00255d34(uVar10);
        }
      }
      goto LAB_00307cb4;
    }
    if (uVar1 < 0x17) {
      uStack_68 = 0;
      puVar11 = (undefined8 *)((ulong)&local_70 | 1);
      local_60 = (undefined8 *)0x0;
      local_70 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_00307a8c;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 00307a74 to 00307a7b has its CatchHandler @ 00307c88 */
      puVar11 = (undefined8 *)operator_new(uVar2);
      local_70 = uVar2 | 1;
      uStack_68 = uVar1;
      local_60 = puVar11;
LAB_00307a8c:
      pvVar4 = (void *)((ulong)local_88 | 1);
      if ((bVar8 & 1) != 0) {
        pvVar4 = local_78;
      }
      memmove(puVar11,pvVar4,sVar3);
    }
    *(undefined2 *)((long)puVar11 + sVar3) = 0x2e;
    pbVar5 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pbVar5 = param_3 + 1;
    }
                    /* try { // try from 00307acc to 00307ad3 has its CatchHandler @ 00307c70 */
    puVar11 = (undefined8 *)
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_70,(ulong)pbVar5);
    uVar10 = puVar11[2];
    uVar13 = puVar11[1];
    uVar12 = *puVar11;
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    param_1[1] = uVar13;
    *param_1 = uVar12;
    param_1[2] = uVar10;
    puVar11 = local_60;
    uVar1 = local_70;
  }
  if ((uVar1 & 1) != 0) {
    operator_delete(puVar11);
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
LAB_00307cb4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00307cb8  FUN_00307cb8 =====

void FUN_00307cb8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
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


// ===== 00307d44  FUN_00307d44 =====

void FUN_00307d44(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003843b8;
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


// ===== 00307db0  FUN_00307db0 =====

void FUN_00307db0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003843b8;
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


// ===== 00307e18  FUN_00307e18 =====

undefined8 * FUN_00307e18(long param_1)

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
  *puVar4 = &PTR_FUN_003843b8;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 00307e78 to 00307e7b has its CatchHandler @ 00307eb4 */
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


// ===== 00307edc  FUN_00307edc =====

void FUN_00307edc(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_003843b8;
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


// ===== 00307f74  FUN_00307f74 =====

void FUN_00307f74(long param_1)

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


// ===== 00307fd4  FUN_00307fd4 =====

void FUN_00307fd4(void *param_1)

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


// ===== 00308030  FUN_00308030 =====

void FUN_00308030(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
                 ulong *param_6)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  JSError *pJVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined8 *local_d0 [4];
  undefined8 **local_b0;
  long local_a0;
  long *plStack_98;
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar10 = *param_5;
  uVar9 = *param_6;
  local_d0[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 00308090 to 0030809f has its CatchHandler @ 003086d8 */
  (**(code **)(*param_3 + 0x160))(&local_a0,param_3,local_d0);
  if ((local_a0 == 0) ||
     (lVar5 = __dynamic_cast(local_a0,PTR_typeinfo_00394860,PTR_typeinfo_00395758,0xffffffffffffffff
                            ), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_98 != (long *)0x0) goto LAB_003080ec;
  }
  else if (plStack_98 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
    FUN_00259a00(1,plStack_98 + 1);
    plVar8 = plStack_98;
LAB_003080ec:
    lVar6 = FUN_00255510(0xffffffffffffffff,plStack_98 + 1);
    if (lVar6 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
  if (local_d0[0] != (undefined8 *)0x0) {
    (**(code **)*local_d0[0])();
  }
  if (uVar9 != 1) {
                    /* try { // try from 00308254 to 00308263 has its CatchHandler @ 00308878 */
    FUN_0030792c(&local_a0,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00308270 to 00308283 has its CatchHandler @ 00308858 */
    std::__ndk1::operator+("`",(basic_string *)&local_a0);
                    /* try { // try from 00308284 to 00308297 has its CatchHandler @ 00308840 */
    FUN_00263450(auStack_130,auStack_148,"` expected ");
                    /* try { // try from 00308298 to 003082a3 has its CatchHandler @ 00308810 */
    std::__ndk1::to_string(1);
                    /* try { // try from 003082a4 to 003082b3 has its CatchHandler @ 003087ec */
    FUN_00264adc(auStack_118,auStack_130,auStack_160);
                    /* try { // try from 003082b4 to 003082c7 has its CatchHandler @ 003087c8 */
    FUN_00263450(auStack_100,auStack_118," arguments, but received ");
                    /* try { // try from 003082c8 to 003082d3 has its CatchHandler @ 003087a4 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 003082d4 to 003082e3 has its CatchHandler @ 00308780 */
    FUN_00264adc(auStack_e8,auStack_100,auStack_178);
                    /* try { // try from 003082e4 to 003082f7 has its CatchHandler @ 00308758 */
    FUN_00263450(local_d0,auStack_e8,&DAT_001d5be0);
                    /* try { // try from 003082fc to 00308337 has its CatchHandler @ 003086f8 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_d0);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
    goto LAB_0030889c;
  }
  pcVar11 = *(code **)(param_2 + 0x20);
  uVar9 = *(ulong *)(param_2 + 0x28);
  if (((*
        PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive32HybridViewModelImagePropertySpecENSt6__ndk18functionIFvvEEEJRKS8_EJLm0EEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395bd0
       & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(
                                 PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive32HybridViewModelImagePropertySpecENSt6__ndk18functionIFvvEEEJRKS8_EJLm0EEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395bd0
                                 ),
     puVar3 = 
     PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive32HybridViewModelImagePropertySpecENSt6__ndk18functionIFvvEEEJRKS8_EJLm0EEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395bc8
     , iVar4 != 0)) {
    *(undefined4 *)
     PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive32HybridViewModelImagePropertySpecENSt6__ndk18functionIFvvEEEJRKS8_EJLm0EEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395bc8
         = 0;
    __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
    __cxa_guard_release(
                       PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive32HybridViewModelImagePropertySpecENSt6__ndk18functionIFvvEEEJRKS8_EJLm0EEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395bd0
                       );
  }
  plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
  if ((uVar9 & 1) != 0) {
    pcVar11 = *(code **)(pcVar11 + *plVar1);
  }
                    /* try { // try from 00308154 to 00308163 has its CatchHandler @ 003083e4 */
  FUN_00288784(local_d0,param_3,uVar10);
                    /* try { // try from 00308164 to 00308177 has its CatchHandler @ 003083a8 */
  (*pcVar11)(&local_a0,plVar1,local_d0);
  if (local_b0 == local_d0) {
    lVar5 = 4;
    local_b0 = local_d0;
LAB_00308198:
    (*(code *)(*local_b0)[lVar5])();
  }
  else if (local_b0 != (undefined8 **)0x0) {
    lVar5 = 5;
    goto LAB_00308198;
  }
                    /* try { // try from 003081a4 to 003081b7 has its CatchHandler @ 00308388 */
  FUN_002e76cc(param_1,param_3,&local_a0);
  if (local_80 == &local_a0) {
    lVar5 = 4;
    local_80 = &local_a0;
LAB_003081d8:
    (**(code **)(*local_80 + lVar5 * 8))();
  }
  else if (local_80 != (long *)0x0) {
    lVar5 = 5;
    goto LAB_003081d8;
  }
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_0030889c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003088a0  FUN_003088a0 =====

void FUN_003088a0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395bd8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 003088f0  FUN_003088f0 =====

undefined * FUN_003088f0(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395be0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00308930  FUN_00308930 =====

void FUN_00308930(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00384338;
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


// ===== 0030899c  FUN_0030899c =====

void FUN_0030899c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00384338;
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


// ===== 00308a04  FUN_00308a04 =====

undefined8 * FUN_00308a04(long param_1)

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
  *puVar4 = &PTR_FUN_00384338;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 00308a64 to 00308a67 has its CatchHandler @ 00308aa0 */
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


// ===== 00308ac8  FUN_00308ac8 =====

void FUN_00308ac8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00384338;
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


// ===== 00308b60  FUN_00308b60 =====

void FUN_00308b60(long param_1)

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


// ===== 00308bc0  FUN_00308bc0 =====

void FUN_00308bc0(void *param_1)

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


// ===== 00308c1c  FUN_00308c1c =====

void FUN_00308c1c(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
                 ulong *param_6)

{
  long *plVar1;
  int *piVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  JSError *pJVar8;
  long *plVar9;
  ulong uVar10;
  int *piVar11;
  code *pcVar12;
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  ulong local_140;
  long *plStack_138;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined8 *local_a8 [3];
  ulong local_90;
  long *plStack_88;
  char local_80;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  piVar11 = (int *)*param_5;
  uVar10 = *param_6;
  local_a8[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 00308c7c to 00308c8b has its CatchHandler @ 003093a0 */
  (**(code **)(*param_3 + 0x160))(&local_90,param_3,local_a8);
  plVar1 = plStack_88;
  if ((local_90 == 0) ||
     (lVar6 = __dynamic_cast(local_90,PTR_typeinfo_00394860,PTR_typeinfo_00395758,0xffffffffffffffff
                            ), lVar6 == 0)) {
    lVar6 = 0;
    plVar9 = (long *)0x0;
    if (plVar1 == (long *)0x0) goto joined_r0x00308d04;
  }
  else {
    if (plVar1 == (long *)0x0) {
      plVar9 = (long *)0x0;
      goto joined_r0x00308d04;
    }
    FUN_00259a00(1,plVar1 + 1);
    plVar9 = plVar1;
  }
  lVar7 = FUN_00255510(0xffffffffffffffff,plVar1 + 1);
  if (lVar7 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x00308d04:
  if (local_a8[0] != (undefined8 *)0x0) {
    (**(code **)*local_a8[0])();
  }
  piVar2 = (int *)PTR_defaultValue_00395ba8;
  if (uVar10 < 2) {
    pcVar12 = *(code **)(param_2 + 0x20);
    uVar3 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00395bb0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_defaultValue_00395bb0), iVar5 != 0)) {
      *piVar2 = 0;
      __cxa_atexit(PTR__Value_00394848,piVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00395bb0);
    }
    plVar1 = (long *)(lVar6 + ((long)uVar3 >> 1));
    if ((uVar3 & 1) != 0) {
      pcVar12 = *(code **)(pcVar12 + *plVar1);
    }
    if (uVar10 != 0) {
      piVar2 = piVar11;
    }
    iVar5 = *piVar2;
    if (iVar5 == 0) {
      local_90 = local_90 & 0xffffffffffffff00;
    }
    else {
                    /* try { // try from 00308d5c to 00308d67 has its CatchHandler @ 00309084 */
      FUN_00279c30(&local_140,param_3);
      plStack_88 = plStack_138;
      local_90 = local_140;
    }
    local_80 = iVar5 != 0;
                    /* try { // try from 00308d80 to 00308d8b has its CatchHandler @ 00309090 */
    (*pcVar12)(plVar1,&local_90);
    plVar1 = plStack_88;
    if (((local_80 != '\0') && (plStack_88 != (long *)0x0)) &&
       (lVar6 = FUN_00255510(0xffffffffffffffff,plStack_88 + 1), lVar6 == 0)) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    *param_1 = 0;
    if ((plVar9 != (long *)0x0) && (lVar6 = FUN_00255510(0xffffffffffffffff,plVar9 + 1), lVar6 == 0)
       ) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar4 + 0x28) == local_70) {
      return;
    }
  }
  else {
                    /* try { // try from 00308e3c to 00308e4b has its CatchHandler @ 003094dc */
    FUN_0030792c(&local_90,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar6);
    pJVar8 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00308e5c to 00308e6f has its CatchHandler @ 003094bc */
    std::__ndk1::operator+("`",(basic_string *)&local_90);
                    /* try { // try from 00308e70 to 00308e83 has its CatchHandler @ 003094a4 */
    FUN_00263450(&local_140,auStack_158,"` expected between ");
                    /* try { // try from 00308e84 to 00308e8f has its CatchHandler @ 00309474 */
    std::__ndk1::to_string(0);
                    /* try { // try from 00308e90 to 00308e9f has its CatchHandler @ 00309450 */
    FUN_00264adc(auStack_120,&local_140,auStack_170);
                    /* try { // try from 00308ea0 to 00308eb3 has its CatchHandler @ 0030942c */
    FUN_00263450(auStack_108,auStack_120," and ");
                    /* try { // try from 00308eb4 to 00308ebf has its CatchHandler @ 00309408 */
    std::__ndk1::to_string(1);
                    /* try { // try from 00308ec0 to 00308ecf has its CatchHandler @ 003093e4 */
    FUN_00264adc(auStack_f0,auStack_108,auStack_188);
                    /* try { // try from 00308ed0 to 00308ee3 has its CatchHandler @ 003093c0 */
    FUN_00263450(auStack_d8,auStack_f0," arguments, but received ");
                    /* try { // try from 00308ee4 to 00308eef has its CatchHandler @ 00309060 */
    std::__ndk1::to_string(uVar10);
                    /* try { // try from 00308ef0 to 00308eff has its CatchHandler @ 0030903c */
    FUN_00264adc(auStack_c0,auStack_d8,auStack_1a0);
                    /* try { // try from 00308f00 to 00308f13 has its CatchHandler @ 00309018 */
    FUN_00263450(local_a8,auStack_c0,&DAT_001d5be0);
                    /* try { // try from 00308f18 to 00308f53 has its CatchHandler @ 00308fa0 */
    facebook::jsi::JSError::JSError(pJVar8,param_3,local_a8);
    if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar8,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00309504  FUN_00309504 =====

void FUN_00309504(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395bb8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00309554  FUN_00309554 =====

undefined * FUN_00309554(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395bc0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00309594  margelo::nitro::rive::HybridViewModelImagePropertySpec::loadHybridMethods =====

/* virtual thunk to margelo::nitro::rive::HybridViewModelImagePropertySpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridViewModelImagePropertySpec::loadHybridMethods
          (HybridViewModelImagePropertySpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    loadHybridMethods(this + *(long *)(*(long *)this + -0x30));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003095d8  margelo::nitro::rive::HybridViewModelImagePropertySpec::loadHybridMethods =====

/* virtual thunk to margelo::nitro::rive::HybridViewModelImagePropertySpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridViewModelImagePropertySpec::loadHybridMethods
          (HybridViewModelImagePropertySpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    loadHybridMethods(this + *(long *)(*(long *)this + -0x20));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030961c  FUN_0030961c =====

void FUN_0030961c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x309620);
  (*pcVar1)();
}


// ===== 00309620  FUN_00309620 =====

void FUN_00309620(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x309624);
  (*pcVar1)();
}


// ===== 00309624  FUN_00309624 =====

void FUN_00309624(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x309628);
  (*pcVar1)();
}


// ===== 00309628  FUN_00309628 =====

void FUN_00309628(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x30962c);
  (*pcVar1)();
}


// ===== 0030962c  margelo::nitro::rive::HybridViewModelListPropertySpec::loadHybridMethods =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* margelo::nitro::rive::HybridViewModelListPropertySpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridViewModelListPropertySpec::loadHybridMethods
          (HybridViewModelListPropertySpec *this)

{
  long lVar1;
  long lVar2;
  long **pplVar3;
  runtime_error *prVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  basic_string local_290;
  char acStack_28f [7];
  char cStack_288;
  char acStack_287 [7];
  undefined1 local_280;
  undefined7 uStack_27f;
  basic_string local_278;
  undefined7 uStack_277;
  undefined4 uStack_270;
  uint uStack_26c;
  long *local_268;
  basic_string local_260;
  undefined7 uStack_25f;
  char cStack_258;
  undefined2 uStack_257;
  undefined5 uStack_255;
  long *local_250;
  basic_string local_248;
  undefined7 uStack_247;
  char cStack_240;
  char acStack_23f [5];
  undefined2 uStack_23a;
  char cStack_238;
  char acStack_237 [5];
  undefined1 uStack_232;
  undefined1 uStack_231;
  byte local_230;
  char local_22f [8];
  undefined7 uStack_227;
  undefined4 uStack_220;
  uint uStack_21c;
  basic_string local_218;
  undefined7 uStack_217;
  char cStack_210;
  undefined7 uStack_20f;
  char cStack_208;
  undefined2 uStack_207;
  undefined1 uStack_205;
  undefined4 uStack_204;
  byte local_200;
  char local_1ff [8];
  undefined7 uStack_1f7;
  char cStack_1f0;
  undefined1 uStack_1ef;
  undefined6 uStack_1ee;
  basic_string local_1e8;
  undefined4 uStack_1e7;
  undefined1 uStack_1e3;
  undefined2 uStack_1e2;
  long *plStack_1e0;
  long *local_1d8;
  basic_string local_1d0;
  undefined7 uStack_1cf;
  char cStack_1c8;
  undefined7 uStack_1c7;
  char cStack_1c0;
  undefined1 uStack_1bf;
  undefined6 uStack_1be;
  byte local_1b8;
  char local_1b7 [6];
  char acStack_1b1 [2];
  char acStack_1af [6];
  undefined1 local_1a9;
  void *local_1a8;
  basic_string local_1a0;
  char acStack_19f [5];
  undefined2 uStack_19a;
  char cStack_198;
  char acStack_197 [5];
  undefined1 uStack_192;
  undefined1 uStack_191;
  long *local_190;
  byte local_188;
  undefined7 local_187;
  undefined4 uStack_180;
  undefined1 local_17c;
  void *local_178;
  basic_string local_170;
  undefined7 uStack_16f;
  char cStack_168;
  undefined7 uStack_167;
  char cStack_160;
  undefined2 uStack_15f;
  undefined1 uStack_15d;
  undefined4 uStack_15c;
  basic_string local_158;
  char acStack_157 [6];
  char cStack_151;
  char cStack_150;
  char acStack_14f [6];
  undefined1 uStack_149;
  long *local_148;
  basic_string local_140;
  char acStack_13f [5];
  undefined2 uStack_13a;
  char cStack_138;
  char acStack_137 [5];
  undefined1 uStack_132;
  undefined1 uStack_131;
  long *local_130;
  basic_string local_128;
  undefined4 uStack_127;
  undefined2 uStack_123;
  undefined1 uStack_121;
  long *plStack_120;
  long *local_118;
  undefined *local_110;
  long *plStack_108;
  long *local_100;
  long *local_f8;
  long *plStack_f0;
  undefined4 local_e8;
  long *local_e0;
  long *plStack_d8;
  long **local_c0;
  undefined8 local_b0;
  ulong local_a8;
  long *plStack_a0;
  long *local_98;
  long *local_90;
  long *plStack_88;
  long **local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  margelo::nitro::HybridObject::loadHybridMethods();
  lVar5 = *(long *)(*(long *)this + -0x38);
  margelo::nitro::HybridObject::loadHybridMethods();
  FUN_002e4024(this + lVar5 + *(long *)(*(long *)(this + lVar5) + -0x20) + 8);
  lVar5 = *(long *)(*(long *)this + -0x20);
  plVar6 = *(long **)(this + lVar5 + 8);
  if (plVar6 == (long *)0x0) {
    local_90 = (long *)0x0;
    plStack_88 = (long *)0x0;
    local_110 = PTR_typeinfo_00395760;
                    /* try { // try from 003096bc to 003096cb has its CatchHandler @ 0030c19c */
    FUN_00264f84(&local_e0,&local_110,&local_90);
    plVar9 = plStack_d8;
    plVar6 = local_e0;
    plVar8 = *(long **)(this + lVar5 + 0x10);
    local_e0 = (long *)0x0;
    plStack_d8 = (long *)0x0;
    *(long **)(this + lVar5 + 0x10) = plVar9;
    *(long **)(this + lVar5 + 8) = plVar6;
    if ((plVar8 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar6 = plStack_d8;
    if ((plStack_d8 != (long *)0x0) &&
       (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_d8 + 1), lVar2 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar6 = plStack_88;
    if ((plStack_88 != (long *)0x0) &&
       (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_88 + 1), lVar2 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar6 = *(long **)(this + lVar5 + 8);
  }
  puVar7 = *(undefined **)(*plVar6 + 8);
  plVar9 = plVar6;
  while (puVar7 != PTR_typeinfo_name_00395c08) {
    plVar9 = (long *)plVar9[1];
    if (plVar9 == (long *)0x0) {
      plStack_d8 = *(long **)(this + lVar5 + 0x10);
      local_e0 = plVar6;
      if (plStack_d8 != (long *)0x0) {
        FUN_00259a00(1,plStack_d8 + 1);
      }
      local_110 = PTR_typeinfo_00395760;
                    /* try { // try from 003097d8 to 003097e7 has its CatchHandler @ 0030c190 */
      FUN_00264f84(&local_90,&local_110,&local_e0);
      plVar9 = plStack_88;
      plVar6 = local_90;
      plVar8 = *(long **)(this + lVar5 + 0x10);
      local_90 = (long *)0x0;
      plStack_88 = (long *)0x0;
      *(long **)(this + lVar5 + 0x10) = plVar9;
      *(long **)(this + lVar5 + 8) = plVar6;
      if ((plVar8 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar2 == 0)) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar6 = plStack_88;
      if ((plStack_88 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_88 + 1), lVar2 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar6 = plStack_d8;
      if ((plStack_d8 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_d8 + 1), lVar2 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar9 = *(long **)(this + lVar5 + 8);
      lVar5 = plVar9[6];
      goto joined_r0x0030988c;
    }
    puVar7 = *(undefined **)(*plVar9 + 8);
  }
  lVar5 = plVar9[6];
joined_r0x0030988c:
  if (((lVar5 == 0) && (plVar9[0xb] == 0)) && (plVar9[0x10] == 0)) {
    local_128 = (basic_string)0xc;
    uStack_127 = 0x676e656c;
    uStack_123 = 0x6874;
    uStack_121 = 0;
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_128);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0030b5e8 to 0030b5fb has its CatchHandler @ 0030c91c */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_128);
                    /* try { // try from 0030b5fc to 0030b60f has its CatchHandler @ 0030c640 */
      FUN_00263450(&local_e0,&local_90,"\" - a getter with that name already exists!");
                    /* try { // try from 0030b614 to 0030b64b has its CatchHandler @ 0030c61c */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_0030ca8c;
    }
    plVar6 = plVar9 + 3;
    lVar5 = FUN_002632b8(*plVar6,plVar9[4],&local_128);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0030b65c to 0030b66f has its CatchHandler @ 0030c918 */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_128);
                    /* try { // try from 0030b670 to 0030b683 has its CatchHandler @ 0030c618 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 0030b688 to 0030b6bf has its CatchHandler @ 0030c5ec */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_0030ca8c;
    }
    local_110 = (undefined *)
                CONCAT17(uStack_121,CONCAT25(uStack_123,CONCAT41(uStack_127,local_128)));
    local_100 = local_118;
    plStack_108 = plStack_120;
    plStack_f0 = _UNK_001d8138;
    local_f8 = _DAT_001d8130;
    local_e8 = 1;
                    /* try { // try from 00309914 to 0030991b has its CatchHandler @ 0030c3c4 */
    local_70 = (long **)operator_new(0x38);
    *local_70 = (long *)&PTR_FUN_003847f0;
    if (((ulong)local_110 & 1) == 0) {
      local_70[2] = plStack_108;
      *(undefined **)(local_70 + 1) = local_110;
      local_70[3] = local_100;
    }
    else {
                    /* try { // try from 0030994c to 0030994f has its CatchHandler @ 0030c180 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (local_70 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70[5] = plStack_f0;
    local_70[4] = local_f8;
    *(undefined4 *)(local_70 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_0030998c:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_0030999c:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_0030999c;
      }
      if (local_70 != &local_90) goto LAB_0030998c;
      local_c0 = &local_e0;
                    /* try { // try from 0030af70 to 0030af7b has its CatchHandler @ 0030bbbc */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 0;
    if (((byte)local_128 & 1) == 0) {
      plStack_a0 = plStack_120;
      local_a8 = CONCAT17(uStack_121,CONCAT25(uStack_123,CONCAT41(uStack_127,local_128)));
      local_98 = local_118;
    }
    else {
                    /* try { // try from 003099cc to 003099d3 has its CatchHandler @ 0030c114 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_118,(ulong)plStack_120);
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_003099f8:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_003099f8;
    }
                    /* try { // try from 00309a04 to 00309a17 has its CatchHandler @ 0030c3b4 */
    FUN_002634d4(plVar9 + 8,&local_128,&local_128,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_00309a4c:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_00309a4c;
    }
    if (((byte)local_128 & 1) != 0) {
      operator_delete(local_118);
    }
    local_140 = (basic_string)0x1a;
    uStack_132 = 0;
    acStack_13f[0] = s_getInstanceAt_001d50ad[0];
    acStack_13f[1] = s_getInstanceAt_001d50ad[1];
    acStack_13f[2] = s_getInstanceAt_001d50ad[2];
    acStack_13f[3] = s_getInstanceAt_001d50ad[3];
    acStack_13f[4] = s_getInstanceAt_001d50ad[4];
    uStack_13a = (undefined2)s_getInstanceAt_001d50ad._5_3_;
    cStack_138 = SUB31(s_getInstanceAt_001d50ad._5_3_,2);
    acStack_137[0] = s_getInstanceAt_001d50ad[8];
    acStack_137[1] = s_getInstanceAt_001d50ad[9];
    acStack_137[2] = s_getInstanceAt_001d50ad[10];
    acStack_137[3] = s_getInstanceAt_001d50ad[0xb];
    acStack_137[4] = s_getInstanceAt_001d50ad[0xc];
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_140);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_140), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0030b0ec to 0030b0ff has its CatchHandler @ 0030ca50 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_140);
                    /* try { // try from 0030b100 to 0030b113 has its CatchHandler @ 0030c900 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 0030b118 to 0030b14f has its CatchHandler @ 0030c8dc */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_0030ca8c;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_140);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0030b6cc to 0030b6df has its CatchHandler @ 0030c8d8 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_140);
                    /* try { // try from 0030b6e0 to 0030b6f3 has its CatchHandler @ 0030c5e8 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 0030b6f8 to 0030b72f has its CatchHandler @ 0030c5bc */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_0030ca8c;
    }
    plStack_108 = (long *)CONCAT17(uStack_131,CONCAT16(uStack_132,CONCAT51(acStack_137,cStack_138)))
    ;
    local_110 = (undefined *)CONCAT26(uStack_13a,CONCAT51(acStack_13f,local_140));
    local_e8 = 0;
    local_100 = local_130;
    plStack_f0 = _UNK_001d7f68;
    local_f8 = _DAT_001d7f60;
                    /* try { // try from 00309adc to 00309ae3 has its CatchHandler @ 0030c39c */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_00384870;
    if (((ulong)local_110 & 1) == 0) {
      pplVar3[2] = plStack_108;
      *(undefined **)(pplVar3 + 1) = local_110;
      pplVar3[3] = local_100;
    }
    else {
                    /* try { // try from 00309b14 to 00309b17 has its CatchHandler @ 0030c104 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar3;
    pplVar3[5] = plStack_f0;
    pplVar3[4] = local_f8;
    *(undefined4 *)(pplVar3 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_00309b54:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_00309b64:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_00309b64;
      }
      if (local_70 != &local_90) goto LAB_00309b54;
      local_c0 = &local_e0;
                    /* try { // try from 0030af90 to 0030af9b has its CatchHandler @ 0030bbb8 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 1;
    if (((byte)local_140 & 1) == 0) {
      plStack_a0 = (long *)CONCAT17(uStack_131,CONCAT16(uStack_132,CONCAT51(acStack_137,cStack_138))
                                   );
      local_a8 = CONCAT26(uStack_13a,CONCAT51(acStack_13f,local_140));
      local_98 = local_130;
    }
    else {
                    /* try { // try from 00309b98 to 00309b9f has its CatchHandler @ 0030c098 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_130,
                 CONCAT17(uStack_131,CONCAT16(uStack_132,CONCAT51(acStack_137,cStack_138))));
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_00309bc4:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_00309bc4;
    }
                    /* try { // try from 00309bd0 to 00309be3 has its CatchHandler @ 0030c38c */
    FUN_002634d4(plVar6,&local_140,&local_140,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_00309c18:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_00309c18;
    }
    if (((byte)local_140 & 1) != 0) {
      operator_delete(local_130);
    }
    local_158 = (basic_string)0x1c;
    uStack_149 = 0;
    acStack_157[0] = s_getLengthAsync_001d581b[0];
    acStack_157[1] = s_getLengthAsync_001d581b[1];
    acStack_157[2] = s_getLengthAsync_001d581b[2];
    acStack_157[3] = s_getLengthAsync_001d581b[3];
    acStack_157[4] = s_getLengthAsync_001d581b[4];
    acStack_157[5] = s_getLengthAsync_001d581b[5];
    cStack_151 = (char)s_getLengthAsync_001d581b._6_2_;
    cStack_150 = SUB21(s_getLengthAsync_001d581b._6_2_,1);
    acStack_14f[0] = s_getLengthAsync_001d581b[8];
    acStack_14f[1] = s_getLengthAsync_001d581b[9];
    acStack_14f[2] = s_getLengthAsync_001d581b[10];
    acStack_14f[3] = s_getLengthAsync_001d581b[0xb];
    acStack_14f[4] = s_getLengthAsync_001d581b[0xc];
    acStack_14f[5] = s_getLengthAsync_001d581b[0xd];
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_158);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_158), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0030b160 to 0030b173 has its CatchHandler @ 0030ca34 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_158);
                    /* try { // try from 0030b174 to 0030b187 has its CatchHandler @ 0030c8c0 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 0030b18c to 0030b1c3 has its CatchHandler @ 0030c89c */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_0030ca8c;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_158);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0030b73c to 0030b74f has its CatchHandler @ 0030c898 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_158);
                    /* try { // try from 0030b750 to 0030b763 has its CatchHandler @ 0030c5b8 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 0030b768 to 0030b79f has its CatchHandler @ 0030c58c */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_0030ca8c;
    }
    plStack_108 = (long *)CONCAT17(uStack_149,CONCAT61(acStack_14f,cStack_150));
    local_110 = (undefined *)CONCAT17(cStack_151,CONCAT61(acStack_157,local_158));
    local_e8 = 0;
    local_100 = local_148;
    plStack_f0 = _UNK_001d81b8;
    local_f8 = _DAT_001d81b0;
                    /* try { // try from 00309ca8 to 00309caf has its CatchHandler @ 0030c374 */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_003848f0;
    if (((ulong)local_110 & 1) == 0) {
      pplVar3[2] = plStack_108;
      *(undefined **)(pplVar3 + 1) = local_110;
      pplVar3[3] = local_100;
    }
    else {
                    /* try { // try from 00309ce0 to 00309ce3 has its CatchHandler @ 0030c088 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar3;
    pplVar3[5] = plStack_f0;
    pplVar3[4] = local_f8;
    *(undefined4 *)(pplVar3 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_00309d20:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_00309d30:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_00309d30;
      }
      if (local_70 != &local_90) goto LAB_00309d20;
      local_c0 = &local_e0;
                    /* try { // try from 0030afb0 to 0030afbb has its CatchHandler @ 0030bbb4 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 0;
    if (((byte)local_158 & 1) == 0) {
      plStack_a0 = (long *)CONCAT17(uStack_149,CONCAT61(acStack_14f,cStack_150));
      local_a8 = CONCAT17(cStack_151,CONCAT61(acStack_157,local_158));
      local_98 = local_148;
    }
    else {
                    /* try { // try from 00309d60 to 00309d67 has its CatchHandler @ 0030c01c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_148,CONCAT17(uStack_149,CONCAT61(acStack_14f,cStack_150)));
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_00309d8c:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_00309d8c;
    }
                    /* try { // try from 00309d98 to 00309dab has its CatchHandler @ 0030c364 */
    FUN_002634d4(plVar6,&local_158,&local_158,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_00309de0:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_00309de0;
    }
    if (((byte)local_158 & 1) != 0) {
      operator_delete(local_148);
    }
    local_170 = (basic_string)0x24;
    uStack_15f = 0x636e;
    uStack_167 = (undefined7)s_getInstanceAtAsync_001d571a._8_8_;
    cStack_160 = SUB81(s_getInstanceAtAsync_001d571a._8_8_,7);
    uStack_16f = (undefined7)s_getInstanceAtAsync_001d571a._0_8_;
    cStack_168 = SUB81(s_getInstanceAtAsync_001d571a._0_8_,7);
    uStack_15d = 0;
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_170);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_170), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0030b1d4 to 0030b1e7 has its CatchHandler @ 0030ca18 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_170);
                    /* try { // try from 0030b1e8 to 0030b1fb has its CatchHandler @ 0030c880 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 0030b200 to 0030b237 has its CatchHandler @ 0030c85c */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_0030ca8c;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_170);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0030b7ac to 0030b7bf has its CatchHandler @ 0030c858 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_170);
                    /* try { // try from 0030b7c0 to 0030b7d3 has its CatchHandler @ 0030c588 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 0030b7d8 to 0030b80f has its CatchHandler @ 0030c55c */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_0030ca8c;
    }
    plStack_108 = (long *)CONCAT71(uStack_167,cStack_168);
    local_110 = (undefined *)CONCAT71(uStack_16f,local_170);
    local_100 = (long *)CONCAT44(uStack_15c,CONCAT13(uStack_15d,CONCAT21(uStack_15f,cStack_160)));
    local_e8 = 0;
    plStack_f0 = _UNK_001d8188;
    local_f8 = _DAT_001d8180;
                    /* try { // try from 00309e70 to 00309e77 has its CatchHandler @ 0030c34c */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_00384e50;
    if (((ulong)local_110 & 1) == 0) {
      pplVar3[2] = plStack_108;
      *(undefined **)(pplVar3 + 1) = local_110;
      pplVar3[3] = local_100;
    }
    else {
                    /* try { // try from 00309ea8 to 00309eab has its CatchHandler @ 0030c00c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar3;
    pplVar3[5] = plStack_f0;
    pplVar3[4] = local_f8;
    *(undefined4 *)(pplVar3 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_00309ee8:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_00309ef8:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_00309ef8;
      }
      if (local_70 != &local_90) goto LAB_00309ee8;
      local_c0 = &local_e0;
                    /* try { // try from 0030afd0 to 0030afdb has its CatchHandler @ 0030bbb0 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 1;
    if (((byte)local_170 & 1) == 0) {
      plStack_a0 = (long *)CONCAT71(uStack_167,cStack_168);
      local_a8 = CONCAT71(uStack_16f,local_170);
      local_98 = (long *)CONCAT44(uStack_15c,CONCAT13(uStack_15d,CONCAT21(uStack_15f,cStack_160)));
    }
    else {
                    /* try { // try from 00309f2c to 00309f33 has its CatchHandler @ 0030bfa0 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,
                 (char *)CONCAT44(uStack_15c,CONCAT13(uStack_15d,CONCAT21(uStack_15f,cStack_160))),
                 CONCAT71(uStack_167,cStack_168));
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_00309f58:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_00309f58;
    }
                    /* try { // try from 00309f64 to 00309f77 has its CatchHandler @ 0030c33c */
    FUN_002634d4(plVar6,&local_170,&local_170,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_00309fac:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_00309fac;
    }
    if (((byte)local_170 & 1) != 0) {
      operator_delete((void *)CONCAT44(uStack_15c,
                                       CONCAT13(uStack_15d,CONCAT21(uStack_15f,cStack_160))));
    }
    local_188 = 0x16;
    local_187 = (undefined7)s_addInstance_001d7300._0_8_;
    uStack_180 = CONCAT31(0x65636e,SUB81(s_addInstance_001d7300._0_8_,7));
    local_17c = 0;
                    /* try { // try from 00309ff0 to 0030a003 has its CatchHandler @ 0030c328 */
    FUN_0030ca90(plVar9,&local_188,0x38,1);
    if ((local_188 & 1) != 0) {
      operator_delete(local_178);
    }
    local_1a0 = (basic_string)0x1a;
    uStack_192 = 0;
    acStack_19f[0] = s_addInstanceAt_001d6086[0];
    acStack_19f[1] = s_addInstanceAt_001d6086[1];
    acStack_19f[2] = s_addInstanceAt_001d6086[2];
    acStack_19f[3] = s_addInstanceAt_001d6086[3];
    acStack_19f[4] = s_addInstanceAt_001d6086[4];
    uStack_19a = (undefined2)s_addInstanceAt_001d6086._5_3_;
    cStack_198 = SUB31(s_addInstanceAt_001d6086._5_3_,2);
    acStack_197[0] = s_addInstanceAt_001d6086[8];
    acStack_197[1] = s_addInstanceAt_001d6086[9];
    acStack_197[2] = s_addInstanceAt_001d6086[10];
    acStack_197[3] = s_addInstanceAt_001d6086[0xb];
    acStack_197[4] = s_addInstanceAt_001d6086[0xc];
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_1a0);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_1a0), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0030b248 to 0030b25b has its CatchHandler @ 0030c9fc */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_1a0);
                    /* try { // try from 0030b25c to 0030b26f has its CatchHandler @ 0030c840 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 0030b274 to 0030b2ab has its CatchHandler @ 0030c81c */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_0030ca8c;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_1a0);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0030b81c to 0030b82f has its CatchHandler @ 0030c818 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_1a0);
                    /* try { // try from 0030b830 to 0030b843 has its CatchHandler @ 0030c558 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 0030b848 to 0030b87f has its CatchHandler @ 0030c52c */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_0030ca8c;
    }
    plStack_108 = (long *)CONCAT17(uStack_191,CONCAT16(uStack_192,CONCAT51(acStack_197,cStack_198)))
    ;
    local_110 = (undefined *)CONCAT26(uStack_19a,CONCAT51(acStack_19f,local_1a0));
    local_e8 = 0;
    local_100 = local_190;
    plStack_f0 = _UNK_001d7f78;
    local_f8 = _DAT_001d7f70;
                    /* try { // try from 0030a088 to 0030a08f has its CatchHandler @ 0030c310 */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_003851e0;
    if (((ulong)local_110 & 1) == 0) {
      pplVar3[2] = plStack_108;
      *(undefined **)(pplVar3 + 1) = local_110;
      pplVar3[3] = local_100;
    }
    else {
                    /* try { // try from 0030a0c0 to 0030a0c3 has its CatchHandler @ 0030bf90 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar3;
    pplVar3[5] = plStack_f0;
    pplVar3[4] = local_f8;
    *(undefined4 *)(pplVar3 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_0030a100:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_0030a110:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_0030a110;
      }
      if (local_70 != &local_90) goto LAB_0030a100;
      local_c0 = &local_e0;
                    /* try { // try from 0030aff0 to 0030affb has its CatchHandler @ 0030bbac */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 2;
    if (((byte)local_1a0 & 1) == 0) {
      plStack_a0 = (long *)CONCAT17(uStack_191,CONCAT16(uStack_192,CONCAT51(acStack_197,cStack_198))
                                   );
      local_a8 = CONCAT26(uStack_19a,CONCAT51(acStack_19f,local_1a0));
      local_98 = local_190;
    }
    else {
                    /* try { // try from 0030a144 to 0030a14b has its CatchHandler @ 0030bf24 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_190,
                 CONCAT17(uStack_191,CONCAT16(uStack_192,CONCAT51(acStack_197,cStack_198))));
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_0030a170:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_0030a170;
    }
                    /* try { // try from 0030a17c to 0030a18f has its CatchHandler @ 0030c300 */
    FUN_002634d4(plVar6,&local_1a0,&local_1a0,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_0030a1c4:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_0030a1c4;
    }
    if (((byte)local_1a0 & 1) != 0) {
      operator_delete(local_190);
    }
    local_1b8 = 0x1c;
    local_1a9 = 0;
    local_1b7[0] = s_removeInstance_001d6094[0];
    local_1b7[1] = s_removeInstance_001d6094[1];
    local_1b7[2] = s_removeInstance_001d6094[2];
    local_1b7[3] = s_removeInstance_001d6094[3];
    local_1b7[4] = s_removeInstance_001d6094[4];
    local_1b7[5] = s_removeInstance_001d6094[5];
    acStack_1b1[0] = s_removeInstance_001d6094[6];
    acStack_1b1[1] = s_removeInstance_001d6094[7];
    acStack_1af[0] = s_removeInstance_001d6094[8];
    acStack_1af[1] = s_removeInstance_001d6094[9];
    acStack_1af[2] = s_removeInstance_001d6094[10];
    acStack_1af[3] = s_removeInstance_001d6094[0xb];
    acStack_1af[4] = s_removeInstance_001d6094[0xc];
    acStack_1af[5] = s_removeInstance_001d6094[0xd];
                    /* try { // try from 0030a204 to 0030a217 has its CatchHandler @ 0030c2ec */
    FUN_0030ca90(plVar9,&local_1b8,0x48,1);
    if ((local_1b8 & 1) != 0) {
      operator_delete(local_1a8);
    }
    local_1d0 = (basic_string)0x20;
    uStack_1bf = 0;
    uStack_1c7 = (undefined7)s_removeInstanceAt_001d6fe5._8_8_;
    cStack_1c0 = SUB81(s_removeInstanceAt_001d6fe5._8_8_,7);
    uStack_1cf = (undefined7)s_removeInstanceAt_001d6fe5._0_8_;
    cStack_1c8 = SUB81(s_removeInstanceAt_001d6fe5._0_8_,7);
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_1d0);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_1d0), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0030b2bc to 0030b2cf has its CatchHandler @ 0030c9e0 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_1d0);
                    /* try { // try from 0030b2d0 to 0030b2e3 has its CatchHandler @ 0030c800 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 0030b2e8 to 0030b31f has its CatchHandler @ 0030c7dc */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_0030ca8c;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_1d0);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0030b88c to 0030b89f has its CatchHandler @ 0030c7d8 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_1d0);
                    /* try { // try from 0030b8a0 to 0030b8b3 has its CatchHandler @ 0030c528 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 0030b8b8 to 0030b8ef has its CatchHandler @ 0030c4fc */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_0030ca8c;
    }
    plStack_108 = (long *)CONCAT71(uStack_1c7,cStack_1c8);
    local_110 = (undefined *)CONCAT71(uStack_1cf,local_1d0);
    local_100 = (long *)CONCAT62(uStack_1be,CONCAT11(uStack_1bf,cStack_1c0));
    local_e8 = 0;
    plStack_f0 = _UNK_001d80c8;
    local_f8 = _DAT_001d80c0;
                    /* try { // try from 0030a294 to 0030a29b has its CatchHandler @ 0030c2d4 */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_00385260;
    if (((ulong)local_110 & 1) == 0) {
      pplVar3[2] = plStack_108;
      *(undefined **)(pplVar3 + 1) = local_110;
      pplVar3[3] = local_100;
    }
    else {
                    /* try { // try from 0030a2cc to 0030a2cf has its CatchHandler @ 0030bf14 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar3;
    pplVar3[5] = plStack_f0;
    pplVar3[4] = local_f8;
    *(undefined4 *)(pplVar3 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_0030a30c:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_0030a31c:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_0030a31c;
      }
      if (local_70 != &local_90) goto LAB_0030a30c;
      local_c0 = &local_e0;
                    /* try { // try from 0030b010 to 0030b01b has its CatchHandler @ 0030bba8 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 1;
    if (((byte)local_1d0 & 1) == 0) {
      plStack_a0 = (long *)CONCAT71(uStack_1c7,cStack_1c8);
      local_a8 = CONCAT71(uStack_1cf,local_1d0);
      local_98 = (long *)CONCAT62(uStack_1be,CONCAT11(uStack_1bf,cStack_1c0));
    }
    else {
                    /* try { // try from 0030a350 to 0030a357 has its CatchHandler @ 0030bea8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)CONCAT62(uStack_1be,CONCAT11(uStack_1bf,cStack_1c0)),
                 CONCAT71(uStack_1c7,cStack_1c8));
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_0030a37c:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_0030a37c;
    }
                    /* try { // try from 0030a388 to 0030a39b has its CatchHandler @ 0030c2c4 */
    FUN_002634d4(plVar6,&local_1d0,&local_1d0,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_0030a3d0:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_0030a3d0;
    }
    if (((byte)local_1d0 & 1) != 0) {
      operator_delete((void *)CONCAT62(uStack_1be,CONCAT11(uStack_1bf,cStack_1c0)));
    }
    uStack_1e3 = 0;
    local_1e8 = (basic_string)0x8;
    uStack_1e7 = 0x70617773;
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_1e8);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_1e8), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0030b330 to 0030b343 has its CatchHandler @ 0030c9c4 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_1e8);
                    /* try { // try from 0030b344 to 0030b357 has its CatchHandler @ 0030c7c0 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 0030b35c to 0030b393 has its CatchHandler @ 0030c79c */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_0030ca8c;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_1e8);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0030b8fc to 0030b90f has its CatchHandler @ 0030c798 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_1e8);
                    /* try { // try from 0030b910 to 0030b923 has its CatchHandler @ 0030c4f8 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 0030b928 to 0030b95f has its CatchHandler @ 0030c4cc */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_0030ca8c;
    }
    local_110 = (undefined *)
                CONCAT26(uStack_1e2,CONCAT15(uStack_1e3,CONCAT41(uStack_1e7,local_1e8)));
    local_e8 = 0;
    plStack_108 = plStack_1e0;
    local_100 = local_1d8;
    plStack_f0 = _UNK_001d80e8;
    local_f8 = _DAT_001d80e0;
                    /* try { // try from 0030a454 to 0030a45b has its CatchHandler @ 0030c2ac */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_003852e0;
    if (((ulong)local_110 & 1) == 0) {
      pplVar3[2] = plStack_108;
      *(undefined **)(pplVar3 + 1) = local_110;
      pplVar3[3] = local_100;
    }
    else {
                    /* try { // try from 0030a48c to 0030a48f has its CatchHandler @ 0030be98 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar3;
    pplVar3[5] = plStack_f0;
    pplVar3[4] = local_f8;
    *(undefined4 *)(pplVar3 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_0030a4cc:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_0030a4dc:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_0030a4dc;
      }
      if (local_70 != &local_90) goto LAB_0030a4cc;
      local_c0 = &local_e0;
                    /* try { // try from 0030b030 to 0030b03b has its CatchHandler @ 0030bba4 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 2;
    if (((byte)local_1e8 & 1) == 0) {
      plStack_a0 = plStack_1e0;
      local_a8 = CONCAT26(uStack_1e2,CONCAT15(uStack_1e3,CONCAT41(uStack_1e7,local_1e8)));
      local_98 = local_1d8;
    }
    else {
                    /* try { // try from 0030a510 to 0030a517 has its CatchHandler @ 0030be2c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_1d8,(ulong)plStack_1e0);
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_0030a53c:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_0030a53c;
    }
                    /* try { // try from 0030a548 to 0030a55b has its CatchHandler @ 0030c29c */
    FUN_002634d4(plVar6,&local_1e8,&local_1e8,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_0030a590:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_0030a590;
    }
    if (((byte)local_1e8 & 1) != 0) {
      operator_delete(local_1d8);
    }
    local_200 = 0x20;
    uStack_1ef = 0;
    uStack_1f7 = (undefined7)s_addInstanceAsync_001d55f6._8_8_;
    cStack_1f0 = SUB81(s_addInstanceAsync_001d55f6._8_8_,7);
    local_1ff[0] = s_addInstanceAsync_001d55f6[0];
    local_1ff[1] = s_addInstanceAsync_001d55f6[1];
    local_1ff[2] = s_addInstanceAsync_001d55f6[2];
    local_1ff[3] = s_addInstanceAsync_001d55f6[3];
    local_1ff[4] = s_addInstanceAsync_001d55f6[4];
    local_1ff[5] = s_addInstanceAsync_001d55f6[5];
    local_1ff[6] = s_addInstanceAsync_001d55f6[6];
    local_1ff[7] = s_addInstanceAsync_001d55f6[7];
                    /* try { // try from 0030a5c8 to 0030a5db has its CatchHandler @ 0030c288 */
    FUN_0030cee0(plVar9,&local_200,0x60,1);
    if ((local_200 & 1) != 0) {
      operator_delete((void *)CONCAT62(uStack_1ee,CONCAT11(uStack_1ef,cStack_1f0)));
    }
    local_218 = (basic_string)0x24;
    uStack_207 = 0x636e;
    uStack_20f = (undefined7)s_addInstanceAtAsync_001d6976._8_8_;
    cStack_208 = SUB81(s_addInstanceAtAsync_001d6976._8_8_,7);
    uStack_217 = (undefined7)s_addInstanceAtAsync_001d6976._0_8_;
    cStack_210 = SUB81(s_addInstanceAtAsync_001d6976._0_8_,7);
    uStack_205 = 0;
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_218);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_218), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0030b3a4 to 0030b3b7 has its CatchHandler @ 0030c9a8 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_218);
                    /* try { // try from 0030b3b8 to 0030b3cb has its CatchHandler @ 0030c780 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 0030b3d0 to 0030b407 has its CatchHandler @ 0030c75c */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_0030ca8c;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_218);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0030b96c to 0030b97f has its CatchHandler @ 0030c758 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_218);
                    /* try { // try from 0030b980 to 0030b993 has its CatchHandler @ 0030c4c8 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 0030b998 to 0030b9cf has its CatchHandler @ 0030c49c */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_0030ca8c;
    }
    plStack_108 = (long *)CONCAT71(uStack_20f,cStack_210);
    local_110 = (undefined *)CONCAT71(uStack_217,local_218);
    local_100 = (long *)CONCAT44(uStack_204,CONCAT13(uStack_205,CONCAT21(uStack_207,cStack_208)));
    local_e8 = 0;
    plStack_f0 = _UNK_001d8028;
    local_f8 = _DAT_001d8020;
                    /* try { // try from 0030a660 to 0030a667 has its CatchHandler @ 0030c270 */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_00385570;
    if (((ulong)local_110 & 1) == 0) {
      pplVar3[2] = plStack_108;
      *(undefined **)(pplVar3 + 1) = local_110;
      pplVar3[3] = local_100;
    }
    else {
                    /* try { // try from 0030a698 to 0030a69b has its CatchHandler @ 0030be1c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar3;
    pplVar3[5] = plStack_f0;
    pplVar3[4] = local_f8;
    *(undefined4 *)(pplVar3 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_0030a6d8:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_0030a6e8:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_0030a6e8;
      }
      if (local_70 != &local_90) goto LAB_0030a6d8;
      local_c0 = &local_e0;
                    /* try { // try from 0030b050 to 0030b05b has its CatchHandler @ 0030bba0 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 2;
    if (((byte)local_218 & 1) == 0) {
      plStack_a0 = (long *)CONCAT71(uStack_20f,cStack_210);
      local_a8 = CONCAT71(uStack_217,local_218);
      local_98 = (long *)CONCAT44(uStack_204,CONCAT13(uStack_205,CONCAT21(uStack_207,cStack_208)));
    }
    else {
                    /* try { // try from 0030a71c to 0030a723 has its CatchHandler @ 0030bdb0 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,
                 (char *)CONCAT44(uStack_204,CONCAT13(uStack_205,CONCAT21(uStack_207,cStack_208))),
                 CONCAT71(uStack_20f,cStack_210));
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_0030a748:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_0030a748;
    }
                    /* try { // try from 0030a754 to 0030a767 has its CatchHandler @ 0030c260 */
    FUN_002634d4(plVar6,&local_218,&local_218,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_0030a79c:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_0030a79c;
    }
    if (((byte)local_218 & 1) != 0) {
      operator_delete((void *)CONCAT44(uStack_204,
                                       CONCAT13(uStack_205,CONCAT21(uStack_207,cStack_208))));
    }
    local_230 = 0x26;
    uStack_227 = (undefined7)s_removeInstanceAsync_001d71e0._8_8_;
    uStack_220 = CONCAT31(0x636e79,SUB81(s_removeInstanceAsync_001d71e0._8_8_,7));
    local_22f[0] = s_removeInstanceAsync_001d71e0[0];
    local_22f[1] = s_removeInstanceAsync_001d71e0[1];
    local_22f[2] = s_removeInstanceAsync_001d71e0[2];
    local_22f[3] = s_removeInstanceAsync_001d71e0[3];
    local_22f[4] = s_removeInstanceAsync_001d71e0[4];
    local_22f[5] = s_removeInstanceAsync_001d71e0[5];
    local_22f[6] = s_removeInstanceAsync_001d71e0[6];
    local_22f[7] = s_removeInstanceAsync_001d71e0[7];
    uStack_21c = uStack_21c & 0xffffff00;
                    /* try { // try from 0030a7e0 to 0030a7f3 has its CatchHandler @ 0030c24c */
    FUN_0030cee0(plVar9,&local_230,0x70,1);
    if ((local_230 & 1) != 0) {
      operator_delete((void *)CONCAT44(uStack_21c,uStack_220));
    }
    local_248 = (basic_string)0x2a;
    uStack_232 = 0;
    acStack_23f[0] = s_removeInstanceAtAsync_001d50bb[8];
    acStack_23f[1] = s_removeInstanceAtAsync_001d50bb[9];
    acStack_23f[2] = s_removeInstanceAtAsync_001d50bb[10];
    acStack_23f[3] = s_removeInstanceAtAsync_001d50bb[0xb];
    acStack_23f[4] = s_removeInstanceAtAsync_001d50bb[0xc];
    uStack_247 = (undefined7)s_removeInstanceAtAsync_001d50bb._0_8_;
    cStack_240 = SUB81(s_removeInstanceAtAsync_001d50bb._0_8_,7);
    uStack_23a = (undefined2)s_removeInstanceAtAsync_001d50bb._13_3_;
    cStack_238 = SUB31(s_removeInstanceAtAsync_001d50bb._13_3_,2);
    acStack_237[0] = s_removeInstanceAtAsync_001d50bb[0x10];
    acStack_237[1] = s_removeInstanceAtAsync_001d50bb[0x11];
    acStack_237[2] = s_removeInstanceAtAsync_001d50bb[0x12];
    acStack_237[3] = s_removeInstanceAtAsync_001d50bb[0x13];
    acStack_237[4] = s_removeInstanceAtAsync_001d50bb[0x14];
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_248);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_248), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0030b418 to 0030b42b has its CatchHandler @ 0030c98c */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_248);
                    /* try { // try from 0030b42c to 0030b43f has its CatchHandler @ 0030c740 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 0030b444 to 0030b47b has its CatchHandler @ 0030c71c */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_0030ca8c;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_248);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0030b9dc to 0030b9ef has its CatchHandler @ 0030c718 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_248);
                    /* try { // try from 0030b9f0 to 0030ba03 has its CatchHandler @ 0030c498 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 0030ba08 to 0030ba3f has its CatchHandler @ 0030c46c */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_0030ca8c;
    }
    plStack_108 = (long *)CONCAT26(uStack_23a,CONCAT51(acStack_23f,cStack_240));
    local_110 = (undefined *)CONCAT71(uStack_247,local_248);
    local_100 = (long *)CONCAT17(uStack_231,CONCAT16(uStack_232,CONCAT51(acStack_237,cStack_238)));
    local_e8 = 0;
    plStack_f0 = _UNK_001d7f58;
    local_f8 = _DAT_001d7f50;
                    /* try { // try from 0030a878 to 0030a87f has its CatchHandler @ 0030c234 */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_003855f0;
    if (((ulong)local_110 & 1) == 0) {
      pplVar3[2] = plStack_108;
      *(undefined **)(pplVar3 + 1) = local_110;
      pplVar3[3] = local_100;
    }
    else {
                    /* try { // try from 0030a8b0 to 0030a8b3 has its CatchHandler @ 0030bda0 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar3;
    pplVar3[5] = plStack_f0;
    pplVar3[4] = local_f8;
    *(undefined4 *)(pplVar3 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_0030a8f0:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_0030a900:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_0030a900;
      }
      if (local_70 != &local_90) goto LAB_0030a8f0;
      local_c0 = &local_e0;
                    /* try { // try from 0030b070 to 0030b07b has its CatchHandler @ 0030bb9c */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 1;
    if (((byte)local_248 & 1) == 0) {
      plStack_a0 = (long *)CONCAT26(uStack_23a,CONCAT51(acStack_23f,cStack_240));
      local_a8 = CONCAT71(uStack_247,local_248);
      local_98 = (long *)CONCAT17(uStack_231,CONCAT16(uStack_232,CONCAT51(acStack_237,cStack_238)));
    }
    else {
                    /* try { // try from 0030a934 to 0030a93b has its CatchHandler @ 0030bd34 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,
                 (char *)CONCAT17(uStack_231,CONCAT16(uStack_232,CONCAT51(acStack_237,cStack_238))),
                 CONCAT26(uStack_23a,CONCAT51(acStack_23f,cStack_240)));
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_0030a960:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_0030a960;
    }
                    /* try { // try from 0030a96c to 0030a97f has its CatchHandler @ 0030c224 */
    FUN_002634d4(plVar6,&local_248,&local_248,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_0030a9b4:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_0030a9b4;
    }
    if (((byte)local_248 & 1) != 0) {
      operator_delete((void *)CONCAT17(uStack_231,
                                       CONCAT16(uStack_232,CONCAT51(acStack_237,cStack_238))));
    }
    local_260 = (basic_string)0x12;
    uStack_257 = 99;
    uStack_25f = (undefined7)s_swapAsync_001d60a3._0_8_;
    cStack_258 = SUB81(s_swapAsync_001d60a3._0_8_,7);
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_260);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_260), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0030b48c to 0030b49f has its CatchHandler @ 0030c970 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_260);
                    /* try { // try from 0030b4a0 to 0030b4b3 has its CatchHandler @ 0030c700 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 0030b4b8 to 0030b4ef has its CatchHandler @ 0030c6dc */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_0030ca8c;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_260);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0030ba4c to 0030ba5f has its CatchHandler @ 0030c6d8 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_260);
                    /* try { // try from 0030ba60 to 0030ba73 has its CatchHandler @ 0030c468 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 0030ba78 to 0030baaf has its CatchHandler @ 0030c43c */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_0030ca8c;
    }
    plStack_108 = (long *)CONCAT53(uStack_255,CONCAT21(uStack_257,cStack_258));
    local_110 = (undefined *)CONCAT71(uStack_25f,local_260);
    local_e8 = 0;
    local_100 = local_250;
    plStack_f0 = _UNK_001d7fb8;
    local_f8 = _DAT_001d7fb0;
                    /* try { // try from 0030aa40 to 0030aa47 has its CatchHandler @ 0030c20c */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_00385670;
    if (((ulong)local_110 & 1) == 0) {
      pplVar3[2] = plStack_108;
      *(undefined **)(pplVar3 + 1) = local_110;
      pplVar3[3] = local_100;
    }
    else {
                    /* try { // try from 0030aa78 to 0030aa7b has its CatchHandler @ 0030bd24 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar3;
    pplVar3[5] = plStack_f0;
    pplVar3[4] = local_f8;
    *(undefined4 *)(pplVar3 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_0030aab8:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_0030aac8:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_0030aac8;
      }
      if (local_70 != &local_90) goto LAB_0030aab8;
      local_c0 = &local_e0;
                    /* try { // try from 0030b090 to 0030b09b has its CatchHandler @ 0030bb98 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 2;
    if (((byte)local_260 & 1) == 0) {
      plStack_a0 = (long *)CONCAT53(uStack_255,CONCAT21(uStack_257,cStack_258));
      local_a8 = CONCAT71(uStack_25f,local_260);
      local_98 = local_250;
    }
    else {
                    /* try { // try from 0030aafc to 0030ab03 has its CatchHandler @ 0030bcb8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_250,CONCAT53(uStack_255,CONCAT21(uStack_257,cStack_258)));
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_0030ab28:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_0030ab28;
    }
                    /* try { // try from 0030ab34 to 0030ab47 has its CatchHandler @ 0030c1fc */
    FUN_002634d4(plVar6,&local_260,&local_260,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_0030ab7c:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_0030ab7c;
    }
    if (((byte)local_260 & 1) != 0) {
      operator_delete(local_250);
    }
    local_278 = (basic_string)0x16;
    uStack_277 = (undefined7)s_addListener_001d6f8c._0_8_;
    uStack_270 = CONCAT31(0x72656e,SUB81(s_addListener_001d6f8c._0_8_,7));
    uStack_26c = uStack_26c & 0xffffff00;
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_278);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_278), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0030b500 to 0030b513 has its CatchHandler @ 0030c954 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_278);
                    /* try { // try from 0030b514 to 0030b527 has its CatchHandler @ 0030c6c0 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 0030b52c to 0030b563 has its CatchHandler @ 0030c69c */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_0030ca8c;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_278);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0030babc to 0030bacf has its CatchHandler @ 0030c698 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_278);
                    /* try { // try from 0030bad0 to 0030bae3 has its CatchHandler @ 0030c438 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 0030bae8 to 0030bb1f has its CatchHandler @ 0030c40c */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_0030ca8c;
    }
    plStack_108 = (long *)CONCAT44(uStack_26c,uStack_270);
    local_110 = (undefined *)CONCAT71(uStack_277,local_278);
    local_e8 = 0;
    local_100 = local_268;
    plStack_f0 = _UNK_001d8098;
    local_f8 = _DAT_001d8090;
                    /* try { // try from 0030ac10 to 0030ac17 has its CatchHandler @ 0030c1e4 */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_003856f0;
    if (((ulong)local_110 & 1) == 0) {
      pplVar3[2] = plStack_108;
      *(undefined **)(pplVar3 + 1) = local_110;
      pplVar3[3] = local_100;
    }
    else {
                    /* try { // try from 0030ac48 to 0030ac4b has its CatchHandler @ 0030bca8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar3;
    pplVar3[5] = plStack_f0;
    pplVar3[4] = local_f8;
    *(undefined4 *)(pplVar3 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_0030ac88:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_0030ac98:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_0030ac98;
      }
      if (local_70 != &local_90) goto LAB_0030ac88;
      local_c0 = &local_e0;
                    /* try { // try from 0030b0b0 to 0030b0bb has its CatchHandler @ 0030bb94 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 1;
    if (((byte)local_278 & 1) == 0) {
      plStack_a0 = (long *)CONCAT44(uStack_26c,uStack_270);
      local_a8 = CONCAT71(uStack_277,local_278);
      local_98 = local_268;
    }
    else {
                    /* try { // try from 0030accc to 0030acd3 has its CatchHandler @ 0030bc3c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_268,CONCAT44(uStack_26c,uStack_270));
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_0030acf8:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_0030acf8;
    }
                    /* try { // try from 0030ad04 to 0030ad17 has its CatchHandler @ 0030c1d4 */
    FUN_002634d4(plVar6,&local_278,&local_278,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_0030ad4c:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_0030ad4c;
    }
    if (((byte)local_278 & 1) != 0) {
      operator_delete(local_268);
    }
    local_290 = (basic_string)0x1e;
    local_280 = 0;
    acStack_28f[0] = s_removeListeners_001d79f7[0];
    acStack_28f[1] = s_removeListeners_001d79f7[1];
    acStack_28f[2] = s_removeListeners_001d79f7[2];
    acStack_28f[3] = s_removeListeners_001d79f7[3];
    acStack_28f[4] = s_removeListeners_001d79f7[4];
    acStack_28f[5] = s_removeListeners_001d79f7[5];
    acStack_28f[6] = s_removeListeners_001d79f7[6];
    cStack_288 = s_removeListeners_001d79f7[7];
    acStack_287[0] = s_removeListeners_001d79f7[8];
    acStack_287[1] = s_removeListeners_001d79f7[9];
    acStack_287[2] = s_removeListeners_001d79f7[10];
    acStack_287[3] = s_removeListeners_001d79f7[0xb];
    acStack_287[4] = s_removeListeners_001d79f7[0xc];
    acStack_287[5] = s_removeListeners_001d79f7[0xd];
    acStack_287[6] = s_removeListeners_001d79f7[0xe];
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_290);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_290), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0030b574 to 0030b587 has its CatchHandler @ 0030c938 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_290);
                    /* try { // try from 0030b588 to 0030b59b has its CatchHandler @ 0030c680 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 0030b5a0 to 0030b5d7 has its CatchHandler @ 0030c65c */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_0030ca8c;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_290);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0030bb2c to 0030bb3f has its CatchHandler @ 0030c658 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_290);
                    /* try { // try from 0030bb40 to 0030bb53 has its CatchHandler @ 0030c408 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 0030bb58 to 0030bb8f has its CatchHandler @ 0030c3dc */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_0030ca8c;
    }
    plStack_108 = (long *)CONCAT71(acStack_287,cStack_288);
    local_110 = (undefined *)CONCAT71(acStack_28f,local_290);
    local_100 = (long *)CONCAT71(uStack_27f,local_280);
    local_e8 = 0;
    plStack_f0 = _UNK_001d80a8;
    local_f8 = _DAT_001d80a0;
                    /* try { // try from 0030ade0 to 0030ade7 has its CatchHandler @ 0030c1bc */
    pplVar3 = (long **)operator_new(0x38);
    *pplVar3 = (long *)&PTR_FUN_003857f0;
    if (((ulong)local_110 & 1) == 0) {
      pplVar3[2] = plStack_108;
      *(undefined **)(pplVar3 + 1) = local_110;
      pplVar3[3] = local_100;
    }
    else {
                    /* try { // try from 0030ae18 to 0030ae1b has its CatchHandler @ 0030bc2c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar3 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar3;
    pplVar3[5] = plStack_f0;
    pplVar3[4] = local_f8;
    *(undefined4 *)(pplVar3 + 6) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_0030ae58:
      lVar5 = -0x40;
      local_c0 = local_70;
LAB_0030ae68:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar5 = -0x90;
        goto LAB_0030ae68;
      }
      if (local_70 != &local_90) goto LAB_0030ae58;
      local_c0 = &local_e0;
                    /* try { // try from 0030b0d0 to 0030b0db has its CatchHandler @ 0030bb90 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 0;
    if (((byte)local_290 & 1) == 0) {
      plStack_a0 = (long *)CONCAT71(acStack_287,cStack_288);
      local_a8 = CONCAT71(acStack_28f,local_290);
      local_98 = (long *)CONCAT71(uStack_27f,local_280);
    }
    else {
                    /* try { // try from 0030ae98 to 0030ae9f has its CatchHandler @ 0030bbc0 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)CONCAT71(uStack_27f,local_280),CONCAT71(acStack_287,cStack_288));
    }
    if (local_70 == &local_90) {
      lVar5 = 4;
      pplVar3 = &local_90;
LAB_0030aec4:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_70 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_70;
      goto LAB_0030aec4;
    }
                    /* try { // try from 0030aed0 to 0030aee3 has its CatchHandler @ 0030c1ac */
    FUN_002634d4(plVar6,&local_290,&local_290,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar5 = 4;
      pplVar3 = &local_e0;
LAB_0030af18:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_c0;
      goto LAB_0030af18;
    }
    if (((byte)local_290 & 1) != 0) {
      operator_delete((void *)CONCAT71(uStack_27f,local_280));
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_0030ca8c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030ca90  FUN_0030ca90 =====

void FUN_0030ca90(long param_1,basic_string *param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  basic_string *pbVar3;
  runtime_error *prVar4;
  ulong local_100;
  ulong uStack_f8;
  char *local_f0;
  long local_e8;
  long lStack_e0;
  undefined4 local_d8;
  basic_string local_d0 [32];
  basic_string *local_b0;
  undefined8 local_a0;
  ulong local_98;
  undefined8 uStack_90;
  void *local_88;
  long local_80 [4];
  basic_string *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_002632b8(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),param_2);
  if ((lVar2 != 0) ||
     (lVar2 = FUN_002632b8(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),param_2),
     lVar2 != 0)) {
    prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0030ccc8 to 0030ccdb has its CatchHandler @ 0030ceb8 */
    std::__ndk1::operator+("Cannot add Hybrid Method \"",param_2);
                    /* try { // try from 0030ccdc to 0030ccef has its CatchHandler @ 0030cea0 */
    FUN_00263450(local_d0,local_80,"\" - a property with that name already exists!");
                    /* try { // try from 0030ccf4 to 0030cd2b has its CatchHandler @ 0030ce7c */
    std::runtime_error::runtime_error(prVar4,local_d0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_0030cedc;
  }
  lVar2 = FUN_002632b8(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),param_2);
  if (lVar2 != 0) {
    prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0030cd3c to 0030cd4f has its CatchHandler @ 0030ce78 */
    std::__ndk1::operator+("Cannot add Hybrid Method \"",param_2);
                    /* try { // try from 0030cd50 to 0030cd63 has its CatchHandler @ 0030ce74 */
    FUN_00263450(local_d0,local_80,"\" - a method with that name already exists!");
                    /* try { // try from 0030cd68 to 0030cd9f has its CatchHandler @ 0030ce48 */
    std::runtime_error::runtime_error(prVar4,local_d0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_0030cedc;
  }
  if (((byte)*param_2 & 1) == 0) {
    uStack_f8 = *(ulong *)(param_2 + 8);
    local_100 = *(ulong *)param_2;
    local_f0 = *(char **)(param_2 + 0x10);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_100,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  local_d8 = 0;
  local_e8 = param_3;
  lStack_e0 = param_4;
                    /* try { // try from 0030cb2c to 0030cb33 has its CatchHandler @ 0030ce30 */
  local_60 = (basic_string *)operator_new(0x38);
  *(undefined ***)local_60 = &PTR_FUN_00385160;
  if ((local_100 & 1) == 0) {
    *(ulong *)(local_60 + 0x10) = uStack_f8;
    *(ulong *)(local_60 + 8) = local_100;
    *(char **)(local_60 + 0x18) = local_f0;
  }
  else {
                    /* try { // try from 0030cb64 to 0030cb67 has its CatchHandler @ 0030ce10 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (local_60 + 8),local_f0,uStack_f8);
  }
  *(long *)(local_60 + 0x28) = lStack_e0;
  *(long *)(local_60 + 0x20) = local_e8;
  *(undefined4 *)(local_60 + 0x30) = local_d8;
  if (((byte)local_100._0_1_ & 1) == 0) {
LAB_0030cba4:
    pbVar3 = (basic_string *)local_80;
    local_b0 = local_60;
LAB_0030cbb4:
    *(long *)(pbVar3 + 0x20) = 0;
  }
  else {
    operator_delete(local_f0);
    if (local_60 == (basic_string *)0x0) {
      pbVar3 = local_d0;
      goto LAB_0030cbb4;
    }
    if (local_60 != (basic_string *)local_80) goto LAB_0030cba4;
    local_b0 = local_d0;
                    /* try { // try from 0030ccac to 0030ccb7 has its CatchHandler @ 0030cda0 */
    (**(code **)(local_80[0] + 0x18))(local_80,local_d0);
  }
  local_a0 = 1;
  if (((byte)*param_2 & 1) == 0) {
    uStack_90 = *(undefined8 *)(param_2 + 8);
    local_98 = *(ulong *)param_2;
    local_88 = *(void **)(param_2 + 0x10);
  }
  else {
                    /* try { // try from 0030cbe8 to 0030cbef has its CatchHandler @ 0030cda4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_98,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  if (local_60 == (basic_string *)local_80) {
    lVar2 = 4;
    pbVar3 = (basic_string *)local_80;
LAB_0030cc14:
    (**(code **)(*(long *)pbVar3 + lVar2 * 8))();
  }
  else if (local_60 != (basic_string *)0x0) {
    lVar2 = 5;
    pbVar3 = local_60;
    goto LAB_0030cc14;
  }
                    /* try { // try from 0030cc20 to 0030cc33 has its CatchHandler @ 0030ce20 */
  FUN_002634d4((undefined8 *)(param_1 + 0x18),param_2,param_2,local_d0);
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (local_b0 == local_d0) {
    lVar2 = 4;
    pbVar3 = local_d0;
LAB_0030cc68:
    (**(code **)(*(long *)pbVar3 + lVar2 * 8))();
  }
  else if (local_b0 != (basic_string *)0x0) {
    lVar2 = 5;
    pbVar3 = local_b0;
    goto LAB_0030cc68;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_0030cedc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030cee0  FUN_0030cee0 =====

void FUN_0030cee0(long param_1,basic_string *param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  basic_string *pbVar3;
  runtime_error *prVar4;
  ulong local_100;
  ulong uStack_f8;
  char *local_f0;
  long local_e8;
  long lStack_e0;
  undefined4 local_d8;
  basic_string local_d0 [32];
  basic_string *local_b0;
  undefined8 local_a0;
  ulong local_98;
  undefined8 uStack_90;
  void *local_88;
  long local_80 [4];
  basic_string *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_002632b8(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),param_2);
  if ((lVar2 != 0) ||
     (lVar2 = FUN_002632b8(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),param_2),
     lVar2 != 0)) {
    prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0030d118 to 0030d12b has its CatchHandler @ 0030d308 */
    std::__ndk1::operator+("Cannot add Hybrid Method \"",param_2);
                    /* try { // try from 0030d12c to 0030d13f has its CatchHandler @ 0030d2f0 */
    FUN_00263450(local_d0,local_80,"\" - a property with that name already exists!");
                    /* try { // try from 0030d144 to 0030d17b has its CatchHandler @ 0030d2cc */
    std::runtime_error::runtime_error(prVar4,local_d0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_0030d32c;
  }
  lVar2 = FUN_002632b8(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),param_2);
  if (lVar2 != 0) {
    prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0030d18c to 0030d19f has its CatchHandler @ 0030d2c8 */
    std::__ndk1::operator+("Cannot add Hybrid Method \"",param_2);
                    /* try { // try from 0030d1a0 to 0030d1b3 has its CatchHandler @ 0030d2c4 */
    FUN_00263450(local_d0,local_80,"\" - a method with that name already exists!");
                    /* try { // try from 0030d1b8 to 0030d1ef has its CatchHandler @ 0030d298 */
    std::runtime_error::runtime_error(prVar4,local_d0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_0030d32c;
  }
  if (((byte)*param_2 & 1) == 0) {
    uStack_f8 = *(ulong *)(param_2 + 8);
    local_100 = *(ulong *)param_2;
    local_f0 = *(char **)(param_2 + 0x10);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_100,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  local_d8 = 0;
  local_e8 = param_3;
  lStack_e0 = param_4;
                    /* try { // try from 0030cf7c to 0030cf83 has its CatchHandler @ 0030d280 */
  local_60 = (basic_string *)operator_new(0x38);
  *(undefined ***)local_60 = &PTR_FUN_00385360;
  if ((local_100 & 1) == 0) {
    *(ulong *)(local_60 + 0x10) = uStack_f8;
    *(ulong *)(local_60 + 8) = local_100;
    *(char **)(local_60 + 0x18) = local_f0;
  }
  else {
                    /* try { // try from 0030cfb4 to 0030cfb7 has its CatchHandler @ 0030d260 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (local_60 + 8),local_f0,uStack_f8);
  }
  *(long *)(local_60 + 0x28) = lStack_e0;
  *(long *)(local_60 + 0x20) = local_e8;
  *(undefined4 *)(local_60 + 0x30) = local_d8;
  if (((byte)local_100._0_1_ & 1) == 0) {
LAB_0030cff4:
    pbVar3 = (basic_string *)local_80;
    local_b0 = local_60;
LAB_0030d004:
    *(long *)(pbVar3 + 0x20) = 0;
  }
  else {
    operator_delete(local_f0);
    if (local_60 == (basic_string *)0x0) {
      pbVar3 = local_d0;
      goto LAB_0030d004;
    }
    if (local_60 != (basic_string *)local_80) goto LAB_0030cff4;
    local_b0 = local_d0;
                    /* try { // try from 0030d0fc to 0030d107 has its CatchHandler @ 0030d1f0 */
    (**(code **)(local_80[0] + 0x18))(local_80,local_d0);
  }
  local_a0 = 1;
  if (((byte)*param_2 & 1) == 0) {
    uStack_90 = *(undefined8 *)(param_2 + 8);
    local_98 = *(ulong *)param_2;
    local_88 = *(void **)(param_2 + 0x10);
  }
  else {
                    /* try { // try from 0030d038 to 0030d03f has its CatchHandler @ 0030d1f4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_98,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  if (local_60 == (basic_string *)local_80) {
    lVar2 = 4;
    pbVar3 = (basic_string *)local_80;
LAB_0030d064:
    (**(code **)(*(long *)pbVar3 + lVar2 * 8))();
  }
  else if (local_60 != (basic_string *)0x0) {
    lVar2 = 5;
    pbVar3 = local_60;
    goto LAB_0030d064;
  }
                    /* try { // try from 0030d070 to 0030d083 has its CatchHandler @ 0030d270 */
  FUN_002634d4((undefined8 *)(param_1 + 0x18),param_2,param_2,local_d0);
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (local_b0 == local_d0) {
    lVar2 = 4;
    pbVar3 = local_d0;
LAB_0030d0b8:
    (**(code **)(*(long *)pbVar3 + lVar2 * 8))();
  }
  else if (local_b0 != (basic_string *)0x0) {
    lVar2 = 5;
    pbVar3 = local_b0;
    goto LAB_0030d0b8;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_0030d32c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030d330  FUN_0030d330 =====

void FUN_0030d330(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003857f0;
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


// ===== 0030d39c  FUN_0030d39c =====

void FUN_0030d39c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003857f0;
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


// ===== 0030d404  FUN_0030d404 =====

undefined8 * FUN_0030d404(long param_1)

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
  *puVar4 = &PTR_FUN_003857f0;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 0030d464 to 0030d467 has its CatchHandler @ 0030d4a0 */
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


// ===== 0030d4c8  FUN_0030d4c8 =====

void FUN_0030d4c8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_003857f0;
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


// ===== 0030d560  FUN_0030d560 =====

void FUN_0030d560(long param_1)

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


// ===== 0030d5c0  FUN_0030d5c0 =====

void FUN_0030d5c0(void *param_1)

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


// ===== 0030d61c  FUN_0030d61c =====

void FUN_0030d61c(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 ulong *param_6)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  JSError *pJVar6;
  long *plVar7;
  ulong uVar8;
  code *pcVar9;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  long local_80;
  long *plStack_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar8 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 0030d678 to 0030d687 has its CatchHandler @ 0030dbc8 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar4 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00395760,0xffffffffffffffff
                            ), lVar4 == 0)) {
    lVar4 = 0;
    plVar7 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x0030d700;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto joined_r0x0030d700;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar7 = plStack_78;
  }
  lVar5 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar5 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x0030d700:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar8 == 0) {
    pcVar9 = *(code **)(param_2 + 0x20);
    uVar8 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelListPropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395db8
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelListPropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395db8
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelListPropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395db0
       , iVar3 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelListPropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395db0
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelListPropertySpecEvJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395db8
                         );
    }
    if ((uVar8 & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(lVar4 + ((long)uVar8 >> 1)));
    }
                    /* try { // try from 0030d738 to 0030d73b has its CatchHandler @ 0030d8d8 */
    (*pcVar9)();
    *param_1 = 0;
    if ((plVar7 != (long *)0x0) && (lVar4 = FUN_00255510(0xffffffffffffffff,plVar7 + 1), lVar4 == 0)
       ) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 0030d7b0 to 0030d7bf has its CatchHandler @ 0030dd64 */
    FUN_0030de1c(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar4);
    pJVar6 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 0030d7cc to 0030d7df has its CatchHandler @ 0030dd44 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 0030d7e0 to 0030d7f3 has its CatchHandler @ 0030dd2c */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 0030d7f4 to 0030d7ff has its CatchHandler @ 0030dcfc */
    std::__ndk1::to_string(0);
                    /* try { // try from 0030d800 to 0030d80f has its CatchHandler @ 0030dcd8 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 0030d810 to 0030d823 has its CatchHandler @ 0030dcb4 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 0030d824 to 0030d82f has its CatchHandler @ 0030dc90 */
    std::__ndk1::to_string(uVar8);
                    /* try { // try from 0030d830 to 0030d83f has its CatchHandler @ 0030dc6c */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 0030d840 to 0030d853 has its CatchHandler @ 0030dc48 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 0030d858 to 0030d893 has its CatchHandler @ 0030dbe8 */
    facebook::jsi::JSError::JSError(pJVar6,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar6,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030dd8c  FUN_0030dd8c =====

void FUN_0030dd8c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395dc0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0030dddc  FUN_0030dddc =====

undefined * FUN_0030dddc(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395dc8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030de1c  FUN_0030de1c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0030de1c(undefined8 *param_1,int param_2,byte *param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  void *pvVar4;
  byte *pbVar5;
  long lVar6;
  undefined *puVar7;
  byte bVar8;
  ulong *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong local_a0;
  ulong local_98;
  undefined8 *local_90;
  byte local_88 [8];
  size_t local_80;
  void *local_78;
  ulong local_70;
  ulong uStack_68;
  undefined8 *local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  if (param_4 == 0) {
    local_60 = (undefined8 *)operator_new(0x40);
    puVar7 = PTR_typeinfo_name_00395c08;
    uStack_68 = _UNK_001d8198;
    local_70 = _DAT_001d8190;
    *(undefined1 *)((long)local_60 + 0x36) = 0;
    uVar14 = *(undefined8 *)puVar7;
    uVar13 = *(undefined8 *)(puVar7 + 0x18);
    uVar12 = *(undefined8 *)(puVar7 + 0x10);
    uVar10 = *(undefined8 *)(puVar7 + 0x2e);
    local_60[1] = *(undefined8 *)(puVar7 + 8);
    *local_60 = uVar14;
    local_60[3] = uVar13;
    local_60[2] = uVar12;
    uVar12 = *(undefined8 *)(puVar7 + 0x20);
    local_60[5] = *(undefined8 *)(puVar7 + 0x28);
    local_60[4] = uVar12;
    *(undefined8 *)((long)local_60 + 0x2e) = uVar10;
                    /* try { // try from 0030dea8 to 0030deb7 has its CatchHandler @ 0030e148 */
    margelo::nitro::TypeInfo::demangleName((basic_string *)&local_70,true);
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
  }
  else {
    margelo::nitro::HybridObject::getName();
  }
  bVar8 = local_88[0];
  if (param_2 == 0) {
    sVar3 = (ulong)(local_88[0] >> 1);
    if ((local_88[0] & 1) != 0) {
      sVar3 = local_80;
    }
    uVar1 = sVar3 + 1;
    if (0xffffffffffffffef < uVar1) goto LAB_0030e108;
    if (uVar1 < 0x17) {
      local_98 = 0;
      puVar11 = (undefined8 *)((ulong)&local_a0 | 1);
      local_90 = (undefined8 *)0x0;
      local_a0 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_0030e00c;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 0030dff4 to 0030dffb has its CatchHandler @ 0030e15c */
      puVar11 = (undefined8 *)operator_new(uVar2);
      local_a0 = uVar2 | 1;
      local_98 = uVar1;
      local_90 = puVar11;
LAB_0030e00c:
      pvVar4 = (void *)((ulong)local_88 | 1);
      if ((bVar8 & 1) != 0) {
        pvVar4 = local_78;
      }
      memmove(puVar11,pvVar4,sVar3);
    }
    *(undefined2 *)((long)puVar11 + sVar3) = 0x2e;
    pbVar5 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pbVar5 = param_3 + 1;
    }
                    /* try { // try from 0030e04c to 0030e053 has its CatchHandler @ 0030e134 */
    puVar9 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_a0,(ulong)pbVar5);
    local_60 = (undefined8 *)puVar9[2];
    uStack_68 = puVar9[1];
    local_70 = *puVar9;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
                    /* try { // try from 0030e06c to 0030e07f has its CatchHandler @ 0030e11c */
    puVar11 = (undefined8 *)
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_70,0x1d6185);
    uVar10 = puVar11[2];
    uVar13 = puVar11[1];
    uVar12 = *puVar11;
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    param_1[1] = uVar13;
    *param_1 = uVar12;
    param_1[2] = uVar10;
    puVar11 = local_90;
    uVar1 = local_a0;
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
      puVar11 = local_90;
      uVar1 = local_a0;
    }
  }
  else {
    sVar3 = (ulong)(local_88[0] >> 1);
    if ((local_88[0] & 1) != 0) {
      sVar3 = local_80;
    }
    uVar1 = sVar3 + 1;
    if (0xffffffffffffffef < uVar1) {
      if (*(long *)(lVar6 + 0x28) != local_58) goto LAB_0030e1a4;
                    /* try { // try from 0030e104 to 0030e107 has its CatchHandler @ 0030e178 */
      FUN_00260a84();
LAB_0030e108:
      if (*(long *)(lVar6 + 0x28) == local_58) {
                    /* try { // try from 0030e118 to 0030e11b has its CatchHandler @ 0030e15c */
        uVar10 = FUN_00260a84();
                    /* catch() { ... } // from try @ 0030e06c with catch @ 0030e11c */
        if ((local_70 & 1) != 0) {
          operator_delete(local_60);
        }
        if ((local_a0 & 1) != 0) {
          operator_delete(local_90);
        }
        if ((local_88[0] & 1) != 0) {
          operator_delete(local_78);
        }
        if (*(long *)(lVar6 + 0x28) == local_58) {
          FUN_00255d34(uVar10);
        }
      }
      goto LAB_0030e1a4;
    }
    if (uVar1 < 0x17) {
      uStack_68 = 0;
      puVar11 = (undefined8 *)((ulong)&local_70 | 1);
      local_60 = (undefined8 *)0x0;
      local_70 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_0030df7c;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 0030df64 to 0030df6b has its CatchHandler @ 0030e178 */
      puVar11 = (undefined8 *)operator_new(uVar2);
      local_70 = uVar2 | 1;
      uStack_68 = uVar1;
      local_60 = puVar11;
LAB_0030df7c:
      pvVar4 = (void *)((ulong)local_88 | 1);
      if ((bVar8 & 1) != 0) {
        pvVar4 = local_78;
      }
      memmove(puVar11,pvVar4,sVar3);
    }
    *(undefined2 *)((long)puVar11 + sVar3) = 0x2e;
    pbVar5 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pbVar5 = param_3 + 1;
    }
                    /* try { // try from 0030dfbc to 0030dfc3 has its CatchHandler @ 0030e160 */
    puVar11 = (undefined8 *)
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_70,(ulong)pbVar5);
    uVar10 = puVar11[2];
    uVar13 = puVar11[1];
    uVar12 = *puVar11;
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    param_1[1] = uVar13;
    *param_1 = uVar12;
    param_1[2] = uVar10;
    puVar11 = local_60;
    uVar1 = local_70;
  }
  if ((uVar1 & 1) != 0) {
    operator_delete(puVar11);
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
LAB_0030e1a4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030e1a8  FUN_0030e1a8 =====

void FUN_0030e1a8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
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


// ===== 0030e234  FUN_0030e234 =====

void FUN_0030e234(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003856f0;
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


// ===== 0030e2a0  FUN_0030e2a0 =====

void FUN_0030e2a0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003856f0;
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


// ===== 0030e308  FUN_0030e308 =====

undefined8 * FUN_0030e308(long param_1)

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
  *puVar4 = &PTR_FUN_003856f0;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 0030e368 to 0030e36b has its CatchHandler @ 0030e3a4 */
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


// ===== 0030e3cc  FUN_0030e3cc =====

void FUN_0030e3cc(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_003856f0;
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


// ===== 0030e464  FUN_0030e464 =====

void FUN_0030e464(long param_1)

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


// ===== 0030e4c4  FUN_0030e4c4 =====

void FUN_0030e4c4(void *param_1)

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


// ===== 0030e520  FUN_0030e520 =====

void FUN_0030e520(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
                 ulong *param_6)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  JSError *pJVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined8 *local_d0 [4];
  undefined8 **local_b0;
  long local_a0;
  long *plStack_98;
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar10 = *param_5;
  uVar9 = *param_6;
  local_d0[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 0030e580 to 0030e58f has its CatchHandler @ 0030ebc8 */
  (**(code **)(*param_3 + 0x160))(&local_a0,param_3,local_d0);
  if ((local_a0 == 0) ||
     (lVar5 = __dynamic_cast(local_a0,PTR_typeinfo_00394860,PTR_typeinfo_00395760,0xffffffffffffffff
                            ), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_98 != (long *)0x0) goto LAB_0030e5dc;
  }
  else if (plStack_98 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
    FUN_00259a00(1,plStack_98 + 1);
    plVar8 = plStack_98;
LAB_0030e5dc:
    lVar6 = FUN_00255510(0xffffffffffffffff,plStack_98 + 1);
    if (lVar6 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
  if (local_d0[0] != (undefined8 *)0x0) {
    (**(code **)*local_d0[0])();
  }
  if (uVar9 != 1) {
                    /* try { // try from 0030e744 to 0030e753 has its CatchHandler @ 0030ed68 */
    FUN_0030de1c(&local_a0,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 0030e760 to 0030e773 has its CatchHandler @ 0030ed48 */
    std::__ndk1::operator+("`",(basic_string *)&local_a0);
                    /* try { // try from 0030e774 to 0030e787 has its CatchHandler @ 0030ed30 */
    FUN_00263450(auStack_130,auStack_148,"` expected ");
                    /* try { // try from 0030e788 to 0030e793 has its CatchHandler @ 0030ed00 */
    std::__ndk1::to_string(1);
                    /* try { // try from 0030e794 to 0030e7a3 has its CatchHandler @ 0030ecdc */
    FUN_00264adc(auStack_118,auStack_130,auStack_160);
                    /* try { // try from 0030e7a4 to 0030e7b7 has its CatchHandler @ 0030ecb8 */
    FUN_00263450(auStack_100,auStack_118," arguments, but received ");
                    /* try { // try from 0030e7b8 to 0030e7c3 has its CatchHandler @ 0030ec94 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 0030e7c4 to 0030e7d3 has its CatchHandler @ 0030ec70 */
    FUN_00264adc(auStack_e8,auStack_100,auStack_178);
                    /* try { // try from 0030e7d4 to 0030e7e7 has its CatchHandler @ 0030ec48 */
    FUN_00263450(local_d0,auStack_e8,&DAT_001d5be0);
                    /* try { // try from 0030e7ec to 0030e827 has its CatchHandler @ 0030ebe8 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_d0);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
    goto LAB_0030ed8c;
  }
  pcVar11 = *(code **)(param_2 + 0x20);
  uVar9 = *(ulong *)(param_2 + 0x28);
  if (((*
        PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelListPropertySpecENSt6__ndk18functionIFvvEEEJRKS8_EJLm0EEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395d98
       & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(
                                 PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelListPropertySpecENSt6__ndk18functionIFvvEEEJRKS8_EJLm0EEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395d98
                                 ),
     puVar3 = 
     PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelListPropertySpecENSt6__ndk18functionIFvvEEEJRKS8_EJLm0EEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395d90
     , iVar4 != 0)) {
    *(undefined4 *)
     PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelListPropertySpecENSt6__ndk18functionIFvvEEEJRKS8_EJLm0EEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395d90
         = 0;
    __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
    __cxa_guard_release(
                       PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelListPropertySpecENSt6__ndk18functionIFvvEEEJRKS8_EJLm0EEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395d98
                       );
  }
  plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
  if ((uVar9 & 1) != 0) {
    pcVar11 = *(code **)(pcVar11 + *plVar1);
  }
                    /* try { // try from 0030e644 to 0030e653 has its CatchHandler @ 0030e8d4 */
  FUN_00288784(local_d0,param_3,uVar10);
                    /* try { // try from 0030e654 to 0030e667 has its CatchHandler @ 0030e898 */
  (*pcVar11)(&local_a0,plVar1,local_d0);
  if (local_b0 == local_d0) {
    lVar5 = 4;
    local_b0 = local_d0;
LAB_0030e688:
    (*(code *)(*local_b0)[lVar5])();
  }
  else if (local_b0 != (undefined8 **)0x0) {
    lVar5 = 5;
    goto LAB_0030e688;
  }
                    /* try { // try from 0030e694 to 0030e6a7 has its CatchHandler @ 0030e878 */
  FUN_002e76cc(param_1,param_3,&local_a0);
  if (local_80 == &local_a0) {
    lVar5 = 4;
    local_80 = &local_a0;
LAB_0030e6c8:
    (**(code **)(*local_80 + lVar5 * 8))();
  }
  else if (local_80 != (long *)0x0) {
    lVar5 = 5;
    goto LAB_0030e6c8;
  }
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_0030ed8c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030ed90  FUN_0030ed90 =====

void FUN_0030ed90(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395da0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0030ede0  FUN_0030ede0 =====

undefined * FUN_0030ede0(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395da8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030ee20  FUN_0030ee20 =====

void FUN_0030ee20(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00385670;
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


// ===== 0030ee8c  FUN_0030ee8c =====

void FUN_0030ee8c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00385670;
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


// ===== 0030eef4  FUN_0030eef4 =====

undefined8 * FUN_0030eef4(long param_1)

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
  *puVar4 = &PTR_FUN_00385670;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 0030ef54 to 0030ef57 has its CatchHandler @ 0030ef90 */
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


// ===== 0030efb8  FUN_0030efb8 =====

void FUN_0030efb8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00385670;
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


// ===== 0030f050  FUN_0030f050 =====

void FUN_0030f050(long param_1)

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


// ===== 0030f0b0  FUN_0030f0b0 =====

void FUN_0030f0b0(void *param_1)

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


// ===== 0030f10c  FUN_0030f10c =====

void FUN_0030f10c(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 ulong *param_6)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  JSError *pJVar7;
  long *plVar8;
  ulong uVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [8];
  long *local_118;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined8 *local_a8 [3];
  long local_90;
  long *plStack_88;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  uVar9 = *param_6;
  local_a8[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 0030f170 to 0030f17f has its CatchHandler @ 0030f45c */
  (**(code **)(*param_3 + 0x160))(&local_90,param_3,local_a8);
  if ((local_90 == 0) ||
     (lVar5 = __dynamic_cast(local_90,PTR_typeinfo_00394860,PTR_typeinfo_00395760,0xffffffffffffffff
                            ), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_88 == (long *)0x0) goto joined_r0x0030f1f8;
  }
  else {
    if (plStack_88 == (long *)0x0) {
      plVar8 = (long *)0x0;
      goto joined_r0x0030f1f8;
    }
    FUN_00259a00(1,plStack_88 + 1);
    plVar8 = plStack_88;
  }
  lVar6 = FUN_00255510(0xffffffffffffffff,plStack_88 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plStack_88 + 0x10))(plStack_88);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x0030f1f8:
  if (local_a8[0] != (undefined8 *)0x0) {
    (**(code **)*local_a8[0])();
  }
  if (uVar9 == 2) {
    pcVar10 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00395d78 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_defaultValue_00395d78), puVar3 = PTR_defaultValue_00395d70,
       iVar4 != 0)) {
      *(undefined4 *)PTR_defaultValue_00395d70 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00395d78);
    }
    plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
    if ((uVar9 & 1) != 0) {
      pcVar10 = *(code **)(pcVar10 + *plVar1);
    }
                    /* try { // try from 0030f234 to 0030f25b has its CatchHandler @ 0030f524 */
    uVar11 = facebook::jsi::Value::asNumber();
    uVar12 = facebook::jsi::Value::asNumber();
    (*pcVar10)(auStack_120,uVar11,uVar12,plVar1);
                    /* try { // try from 0030f25c to 0030f26b has its CatchHandler @ 0030f444 */
    FUN_00287ce8(param_1,param_3,auStack_120);
    if ((local_118 != (long *)0x0) &&
       (lVar5 = FUN_00255510(0xffffffffffffffff,local_118 + 1), lVar5 == 0)) {
      (**(code **)(*local_118 + 0x10))(local_118);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar5 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar2 + 0x28) == local_78) {
      return;
    }
  }
  else {
                    /* try { // try from 0030f310 to 0030f31f has its CatchHandler @ 0030f8f0 */
    FUN_0030de1c(&local_90,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 0030f32c to 0030f33f has its CatchHandler @ 0030f8d0 */
    std::__ndk1::operator+("`",(basic_string *)&local_90);
                    /* try { // try from 0030f340 to 0030f353 has its CatchHandler @ 0030f8b8 */
    FUN_00263450(auStack_108,auStack_120,"` expected ");
                    /* try { // try from 0030f354 to 0030f35f has its CatchHandler @ 0030f888 */
    std::__ndk1::to_string(2);
                    /* try { // try from 0030f360 to 0030f36f has its CatchHandler @ 0030f864 */
    FUN_00264adc(auStack_f0,auStack_108,auStack_138);
                    /* try { // try from 0030f370 to 0030f383 has its CatchHandler @ 0030f840 */
    FUN_00263450(auStack_d8,auStack_f0," arguments, but received ");
                    /* try { // try from 0030f384 to 0030f38f has its CatchHandler @ 0030f81c */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 0030f390 to 0030f39f has its CatchHandler @ 0030f500 */
    FUN_00264adc(auStack_c0,auStack_d8,auStack_150);
                    /* try { // try from 0030f3a0 to 0030f3b3 has its CatchHandler @ 0030f4dc */
    FUN_00263450(local_a8,auStack_c0,&DAT_001d5be0);
                    /* try { // try from 0030f3b8 to 0030f3f3 has its CatchHandler @ 0030f47c */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_a8);
    if (*(long *)(lVar2 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030f918  FUN_0030f918 =====

void FUN_0030f918(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395d80) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0030f968  FUN_0030f968 =====

undefined * FUN_0030f968(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395d88;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0030f9a8  FUN_0030f9a8 =====

void FUN_0030f9a8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003855f0;
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


// ===== 0030fa14  FUN_0030fa14 =====

void FUN_0030fa14(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003855f0;
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


// ===== 0030fa7c  FUN_0030fa7c =====

undefined8 * FUN_0030fa7c(long param_1)

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
  *puVar4 = &PTR_FUN_003855f0;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 0030fadc to 0030fadf has its CatchHandler @ 0030fb18 */
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


// ===== 0030fb40  FUN_0030fb40 =====

void FUN_0030fb40(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_003855f0;
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


// ===== 0030fbd8  FUN_0030fbd8 =====

void FUN_0030fbd8(long param_1)

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


// ===== 0030fc38  FUN_0030fc38 =====

void FUN_0030fc38(void *param_1)

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


// ===== 0030fc94  FUN_0030fc94 =====

void FUN_0030fc94(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 ulong *param_6)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  JSError *pJVar7;
  long *plVar8;
  ulong uVar9;
  code *pcVar10;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [8];
  long *local_108;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  long local_80;
  long *plStack_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar9 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 0030fcf4 to 0030fd03 has its CatchHandler @ 0030ffc8 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar5 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00395760,0xffffffffffffffff
                            ), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x0030fd7c;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar8 = (long *)0x0;
      goto joined_r0x0030fd7c;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar8 = plStack_78;
  }
  lVar6 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x0030fd7c:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar9 == 1) {
    pcVar10 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00395d58 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_defaultValue_00395d58), puVar3 = PTR_defaultValue_00395d50,
       iVar4 != 0)) {
      *(undefined4 *)PTR_defaultValue_00395d50 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00395d58);
    }
    plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
    if ((uVar9 & 1) != 0) {
      pcVar10 = *(code **)(pcVar10 + *plVar1);
    }
                    /* try { // try from 0030fdb8 to 0030fdcb has its CatchHandler @ 0031006c */
    facebook::jsi::Value::asNumber();
    (*pcVar10)(auStack_110,plVar1);
                    /* try { // try from 0030fdcc to 0030fddb has its CatchHandler @ 0030ffb0 */
    FUN_00287ce8(param_1,param_3,auStack_110);
    if ((local_108 != (long *)0x0) &&
       (lVar5 = FUN_00255510(0xffffffffffffffff,local_108 + 1), lVar5 == 0)) {
      (**(code **)(*local_108 + 0x10))(local_108);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar5 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 0030fe7c to 0030fe8b has its CatchHandler @ 0031045c */
    FUN_0030de1c(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 0030fe98 to 0030feab has its CatchHandler @ 0031043c */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 0030feac to 0030febf has its CatchHandler @ 00310424 */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 0030fec0 to 0030fecb has its CatchHandler @ 003103f4 */
    std::__ndk1::to_string(1);
                    /* try { // try from 0030fecc to 0030fedb has its CatchHandler @ 003103d0 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 0030fedc to 0030feef has its CatchHandler @ 003103ac */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 0030fef0 to 0030fefb has its CatchHandler @ 00310388 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 0030fefc to 0030ff0b has its CatchHandler @ 00310364 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 0030ff0c to 0030ff1f has its CatchHandler @ 00310048 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 0030ff24 to 0030ff5f has its CatchHandler @ 0030ffe8 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00310484  FUN_00310484 =====

void FUN_00310484(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395d60) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 003104d4  FUN_003104d4 =====

undefined * FUN_003104d4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395d68;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00310514  FUN_00310514 =====

void FUN_00310514(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00385570;
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


// ===== 00310580  FUN_00310580 =====

void FUN_00310580(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00385570;
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


// ===== 003105e8  FUN_003105e8 =====

undefined8 * FUN_003105e8(long param_1)

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
  *puVar4 = &PTR_FUN_00385570;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 00310648 to 0031064b has its CatchHandler @ 00310684 */
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


// ===== 003106ac  FUN_003106ac =====

void FUN_003106ac(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00385570;
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


// ===== 00310744  FUN_00310744 =====

void FUN_00310744(long param_1)

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


// ===== 003107a4  FUN_003107a4 =====

void FUN_003107a4(void *param_1)

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


// ===== 00310800  FUN_00310800 =====

void FUN_00310800(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
                 ulong *param_6)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  JSError *pJVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [8];
  long *local_120;
  undefined1 auStack_110 [8];
  long *local_108;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  long local_80;
  long *plStack_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar10 = *param_5;
  uVar9 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 00310860 to 0031086f has its CatchHandler @ 00310b84 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar5 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00395760,0xffffffffffffffff
                            ), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x003108e8;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar8 = (long *)0x0;
      goto joined_r0x003108e8;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar8 = plStack_78;
  }
  lVar6 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x003108e8:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar9 == 2) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00395d38 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_defaultValue_00395d38), puVar3 = PTR_defaultValue_00395d30,
       iVar4 != 0)) {
      *(undefined4 *)PTR_defaultValue_00395d30 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00395d38);
    }
    plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
    if ((uVar9 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *plVar1);
    }
                    /* try { // try from 00310924 to 00310933 has its CatchHandler @ 00310b78 */
    FUN_002accd0(auStack_128,param_3,uVar10);
                    /* try { // try from 00310934 to 0031094b has its CatchHandler @ 00310c28 */
    facebook::jsi::Value::asNumber();
    (*pcVar11)(auStack_110,plVar1,auStack_128);
    if ((local_120 != (long *)0x0) &&
       (lVar5 = FUN_00255510(0xffffffffffffffff,local_120 + 1), lVar5 == 0)) {
      (**(code **)(*local_120 + 0x10))(local_120);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
                    /* try { // try from 0031097c to 0031098b has its CatchHandler @ 00310b60 */
    FUN_00287ce8(param_1,param_3,auStack_110);
    if ((local_108 != (long *)0x0) &&
       (lVar5 = FUN_00255510(0xffffffffffffffff,local_108 + 1), lVar5 == 0)) {
      (**(code **)(*local_108 + 0x10))(local_108);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar5 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 00310a2c to 00310a3b has its CatchHandler @ 00311024 */
    FUN_0030de1c(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00310a48 to 00310a5b has its CatchHandler @ 00311004 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 00310a5c to 00310a6f has its CatchHandler @ 00310fec */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 00310a70 to 00310a7b has its CatchHandler @ 00310fbc */
    std::__ndk1::to_string(2);
                    /* try { // try from 00310a7c to 00310a8b has its CatchHandler @ 00310f98 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 00310a8c to 00310a9f has its CatchHandler @ 00310f74 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 00310aa0 to 00310aab has its CatchHandler @ 00310f50 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 00310aac to 00310abb has its CatchHandler @ 00310f2c */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 00310abc to 00310acf has its CatchHandler @ 00310c04 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 00310ad4 to 00310b0f has its CatchHandler @ 00310ba4 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031104c  FUN_0031104c =====

void FUN_0031104c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395d40) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0031109c  FUN_0031109c =====

undefined * FUN_0031109c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395d48;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003110dc  FUN_003110dc =====

void FUN_003110dc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00385360;
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


// ===== 00311148  FUN_00311148 =====

void FUN_00311148(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00385360;
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


// ===== 003111b0  FUN_003111b0 =====

undefined8 * FUN_003111b0(long param_1)

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
  *puVar4 = &PTR_FUN_00385360;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 00311210 to 00311213 has its CatchHandler @ 0031124c */
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


// ===== 00311274  FUN_00311274 =====

void FUN_00311274(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00385360;
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


// ===== 0031130c  FUN_0031130c =====

void FUN_0031130c(long param_1)

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


// ===== 0031136c  FUN_0031136c =====

void FUN_0031136c(void *param_1)

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


// ===== 003113c8  FUN_003113c8 =====

void FUN_003113c8(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
                 ulong *param_6)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  JSError *pJVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [8];
  long *local_120;
  undefined1 auStack_110 [8];
  long *local_108;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  long local_80;
  long *plStack_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar10 = *param_5;
  uVar9 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 00311428 to 00311437 has its CatchHandler @ 00311a44 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar5 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00395760,0xffffffffffffffff
                            ), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x003114b0;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar8 = (long *)0x0;
      goto joined_r0x003114b0;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar8 = plStack_78;
  }
  lVar6 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x003114b0:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar9 == 1) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00395d18 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_defaultValue_00395d18), puVar3 = PTR_defaultValue_00395d10,
       iVar4 != 0)) {
      *(undefined4 *)PTR_defaultValue_00395d10 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00395d18);
    }
    plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
    if ((uVar9 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *plVar1);
    }
                    /* try { // try from 003114ec to 003114fb has its CatchHandler @ 00311750 */
    FUN_002accd0(auStack_128,param_3,uVar10);
                    /* try { // try from 003114fc to 0031150b has its CatchHandler @ 00311738 */
    (*pcVar11)(auStack_110,plVar1,auStack_128);
    if ((local_120 != (long *)0x0) &&
       (lVar5 = FUN_00255510(0xffffffffffffffff,local_120 + 1), lVar5 == 0)) {
      (**(code **)(*local_120 + 0x10))(local_120);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
                    /* try { // try from 0031153c to 0031154b has its CatchHandler @ 00311720 */
    FUN_00287ce8(param_1,param_3,auStack_110);
    if ((local_108 != (long *)0x0) &&
       (lVar5 = FUN_00255510(0xffffffffffffffff,local_108 + 1), lVar5 == 0)) {
      (**(code **)(*local_108 + 0x10))(local_108);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar5 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 003115ec to 003115fb has its CatchHandler @ 00311be4 */
    FUN_0030de1c(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00311608 to 0031161b has its CatchHandler @ 00311bc4 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 0031161c to 0031162f has its CatchHandler @ 00311bac */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 00311630 to 0031163b has its CatchHandler @ 00311b7c */
    std::__ndk1::to_string(1);
                    /* try { // try from 0031163c to 0031164b has its CatchHandler @ 00311b58 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 0031164c to 0031165f has its CatchHandler @ 00311b34 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 00311660 to 0031166b has its CatchHandler @ 00311b10 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 0031166c to 0031167b has its CatchHandler @ 00311aec */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 0031167c to 0031168f has its CatchHandler @ 00311ac4 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 00311694 to 003116cf has its CatchHandler @ 00311a64 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00311c0c  FUN_00311c0c =====

void FUN_00311c0c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395d20) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00311c5c  FUN_00311c5c =====

undefined * FUN_00311c5c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395d28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00311c9c  FUN_00311c9c =====

void FUN_00311c9c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003852e0;
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


// ===== 00311d08  FUN_00311d08 =====

void FUN_00311d08(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003852e0;
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


// ===== 00311d70  FUN_00311d70 =====

undefined8 * FUN_00311d70(long param_1)

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
  *puVar4 = &PTR_FUN_003852e0;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 00311dd0 to 00311dd3 has its CatchHandler @ 00311e0c */
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


// ===== 00311e34  FUN_00311e34 =====

void FUN_00311e34(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_003852e0;
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


// ===== 00311ecc  FUN_00311ecc =====

void FUN_00311ecc(long param_1)

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


// ===== 00311f2c  FUN_00311f2c =====

void FUN_00311f2c(void *param_1)

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


// ===== 00311f88  FUN_00311f88 =====

void FUN_00311f88(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 ulong *param_6)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  JSError *pJVar8;
  long *plVar9;
  ulong uVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined8 *local_a8 [3];
  long local_90;
  long *plStack_88;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  uVar10 = *param_6;
  local_a8[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 00311fec to 00311ffb has its CatchHandler @ 0031228c */
  (**(code **)(*param_3 + 0x160))(&local_90,param_3,local_a8);
  if ((local_90 == 0) ||
     (lVar6 = __dynamic_cast(local_90,PTR_typeinfo_00394860,PTR_typeinfo_00395760,0xffffffffffffffff
                            ), lVar6 == 0)) {
    lVar6 = 0;
    plVar9 = (long *)0x0;
    if (plStack_88 == (long *)0x0) goto joined_r0x00312074;
  }
  else {
    if (plStack_88 == (long *)0x0) {
      plVar9 = (long *)0x0;
      goto joined_r0x00312074;
    }
    FUN_00259a00(1,plStack_88 + 1);
    plVar9 = plStack_88;
  }
  lVar7 = FUN_00255510(0xffffffffffffffff,plStack_88 + 1);
  if (lVar7 == 0) {
    (**(code **)(*plStack_88 + 0x10))(plStack_88);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x00312074:
  if (local_a8[0] != (undefined8 *)0x0) {
    (**(code **)*local_a8[0])();
  }
  if (uVar10 == 2) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar10 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00395cf8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_defaultValue_00395cf8), puVar3 = PTR_defaultValue_00395cf0,
       iVar5 != 0)) {
      *(undefined4 *)PTR_defaultValue_00395cf0 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00395cf8);
    }
    plVar1 = (long *)(lVar6 + ((long)uVar10 >> 1));
    if ((uVar10 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *plVar1);
    }
                    /* try { // try from 003120b0 to 003120d3 has its CatchHandler @ 00312354 */
    uVar12 = facebook::jsi::Value::asNumber();
    uVar13 = facebook::jsi::Value::asNumber();
    bVar4 = (*pcVar11)(uVar12,uVar13,plVar1);
    *param_1 = 2;
    *(byte *)(param_1 + 2) = bVar4 & 1;
    if ((plVar9 != (long *)0x0) && (lVar6 = FUN_00255510(0xffffffffffffffff,plVar9 + 1), lVar6 == 0)
       ) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar2 + 0x28) == local_78) {
      return;
    }
  }
  else {
                    /* try { // try from 00312158 to 00312167 has its CatchHandler @ 00312718 */
    FUN_0030de1c(&local_90,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar6);
    pJVar8 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00312174 to 00312187 has its CatchHandler @ 003126f8 */
    std::__ndk1::operator+("`",(basic_string *)&local_90);
                    /* try { // try from 00312188 to 0031219b has its CatchHandler @ 003126e0 */
    FUN_00263450(auStack_108,auStack_120,"` expected ");
                    /* try { // try from 0031219c to 003121a7 has its CatchHandler @ 003126b0 */
    std::__ndk1::to_string(2);
                    /* try { // try from 003121a8 to 003121b7 has its CatchHandler @ 0031268c */
    FUN_00264adc(auStack_f0,auStack_108,auStack_138);
                    /* try { // try from 003121b8 to 003121cb has its CatchHandler @ 00312668 */
    FUN_00263450(auStack_d8,auStack_f0," arguments, but received ");
                    /* try { // try from 003121cc to 003121d7 has its CatchHandler @ 00312644 */
    std::__ndk1::to_string(uVar10);
                    /* try { // try from 003121d8 to 003121e7 has its CatchHandler @ 00312330 */
    FUN_00264adc(auStack_c0,auStack_d8,auStack_150);
                    /* try { // try from 003121e8 to 003121fb has its CatchHandler @ 0031230c */
    FUN_00263450(local_a8,auStack_c0,&DAT_001d5be0);
                    /* try { // try from 00312200 to 0031223b has its CatchHandler @ 003122ac */
    facebook::jsi::JSError::JSError(pJVar8,param_3,local_a8);
    if (*(long *)(lVar2 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar8,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00312740  FUN_00312740 =====

void FUN_00312740(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395d00) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00312790  FUN_00312790 =====

undefined * FUN_00312790(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395d08;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003127d0  FUN_003127d0 =====

void FUN_003127d0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00385260;
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


// ===== 0031283c  FUN_0031283c =====

void FUN_0031283c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00385260;
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


// ===== 003128a4  FUN_003128a4 =====

undefined8 * FUN_003128a4(long param_1)

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
  *puVar4 = &PTR_FUN_00385260;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 00312904 to 00312907 has its CatchHandler @ 00312940 */
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


// ===== 00312968  FUN_00312968 =====

void FUN_00312968(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00385260;
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


// ===== 00312a00  FUN_00312a00 =====

void FUN_00312a00(long param_1)

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


// ===== 00312a60  FUN_00312a60 =====

void FUN_00312a60(void *param_1)

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


// ===== 00312abc  FUN_00312abc =====

void FUN_00312abc(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 ulong *param_6)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  JSError *pJVar7;
  long *plVar8;
  ulong uVar9;
  code *pcVar10;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  long local_80;
  long *plStack_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar9 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 00312b1c to 00312b2b has its CatchHandler @ 00312d98 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar5 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00395760,0xffffffffffffffff
                            ), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x00312ba4;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar8 = (long *)0x0;
      goto joined_r0x00312ba4;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar8 = plStack_78;
  }
  lVar6 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x00312ba4:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar9 == 1) {
    pcVar10 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00395cd8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_defaultValue_00395cd8), puVar3 = PTR_defaultValue_00395cd0,
       iVar4 != 0)) {
      *(undefined4 *)PTR_defaultValue_00395cd0 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00395cd8);
    }
    plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
    if ((uVar9 & 1) != 0) {
      pcVar10 = *(code **)(pcVar10 + *plVar1);
    }
                    /* try { // try from 00312be0 to 00312bef has its CatchHandler @ 00312e3c */
    facebook::jsi::Value::asNumber();
    (*pcVar10)(plVar1);
    *param_1 = 0;
    if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar5 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 00312c64 to 00312c73 has its CatchHandler @ 00313224 */
    FUN_0030de1c(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00312c80 to 00312c93 has its CatchHandler @ 00313204 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 00312c94 to 00312ca7 has its CatchHandler @ 003131ec */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 00312ca8 to 00312cb3 has its CatchHandler @ 003131bc */
    std::__ndk1::to_string(1);
                    /* try { // try from 00312cb4 to 00312cc3 has its CatchHandler @ 00313198 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 00312cc4 to 00312cd7 has its CatchHandler @ 00313174 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 00312cd8 to 00312ce3 has its CatchHandler @ 00313150 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 00312ce4 to 00312cf3 has its CatchHandler @ 0031312c */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 00312cf4 to 00312d07 has its CatchHandler @ 00312e18 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 00312d0c to 00312d47 has its CatchHandler @ 00312db8 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031324c  FUN_0031324c =====

void FUN_0031324c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395ce0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0031329c  FUN_0031329c =====

undefined * FUN_0031329c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395ce8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003132dc  FUN_003132dc =====

void FUN_003132dc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003851e0;
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


// ===== 00313348  FUN_00313348 =====

void FUN_00313348(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003851e0;
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


// ===== 003133b0  FUN_003133b0 =====

undefined8 * FUN_003133b0(long param_1)

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
  *puVar4 = &PTR_FUN_003851e0;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 00313410 to 00313413 has its CatchHandler @ 0031344c */
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


// ===== 00313474  FUN_00313474 =====

void FUN_00313474(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_003851e0;
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


// ===== 0031350c  FUN_0031350c =====

void FUN_0031350c(long param_1)

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


// ===== 0031356c  FUN_0031356c =====

void FUN_0031356c(void *param_1)

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


// ===== 003135c8  FUN_003135c8 =====

void FUN_003135c8(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
                 ulong *param_6)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  JSError *pJVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [8];
  long *local_108;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  long local_80;
  long *plStack_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar11 = *param_5;
  uVar10 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 00313628 to 00313637 has its CatchHandler @ 00313904 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar6 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00395760,0xffffffffffffffff
                            ), lVar6 == 0)) {
    lVar6 = 0;
    plVar9 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x003136b0;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar9 = (long *)0x0;
      goto joined_r0x003136b0;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar9 = plStack_78;
  }
  lVar7 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar7 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x003136b0:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar10 == 2) {
    pcVar12 = *(code **)(param_2 + 0x20);
    uVar10 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00395cb8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_defaultValue_00395cb8), puVar3 = PTR_defaultValue_00395cb0,
       iVar5 != 0)) {
      *(undefined4 *)PTR_defaultValue_00395cb0 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00395cb8);
    }
    plVar1 = (long *)(lVar6 + ((long)uVar10 >> 1));
    if ((uVar10 & 1) != 0) {
      pcVar12 = *(code **)(pcVar12 + *plVar1);
    }
                    /* try { // try from 003136ec to 003136fb has its CatchHandler @ 003138f8 */
    FUN_002accd0(auStack_110,param_3,uVar11);
                    /* try { // try from 003136fc to 0031370f has its CatchHandler @ 003139a8 */
    facebook::jsi::Value::asNumber();
    bVar4 = (*pcVar12)(plVar1,auStack_110);
    if ((local_108 != (long *)0x0) &&
       (lVar6 = FUN_00255510(0xffffffffffffffff,local_108 + 1), lVar6 == 0)) {
      (**(code **)(*local_108 + 0x10))(local_108);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    *param_1 = 2;
    *(byte *)(param_1 + 2) = bVar4 & 1;
    if ((plVar9 != (long *)0x0) && (lVar6 = FUN_00255510(0xffffffffffffffff,plVar9 + 1), lVar6 == 0)
       ) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 003137c4 to 003137d3 has its CatchHandler @ 00313da4 */
    FUN_0030de1c(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar6);
    pJVar8 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 003137e0 to 003137f3 has its CatchHandler @ 00313d84 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 003137f4 to 00313807 has its CatchHandler @ 00313d6c */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 00313808 to 00313813 has its CatchHandler @ 00313d3c */
    std::__ndk1::to_string(2);
                    /* try { // try from 00313814 to 00313823 has its CatchHandler @ 00313d18 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 00313824 to 00313837 has its CatchHandler @ 00313cf4 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 00313838 to 00313843 has its CatchHandler @ 00313cd0 */
    std::__ndk1::to_string(uVar10);
                    /* try { // try from 00313844 to 00313853 has its CatchHandler @ 00313cac */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 00313854 to 00313867 has its CatchHandler @ 00313984 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 0031386c to 003138a7 has its CatchHandler @ 00313924 */
    facebook::jsi::JSError::JSError(pJVar8,param_3,local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar8,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00313dcc  FUN_00313dcc =====

void FUN_00313dcc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395cc0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00313e1c  FUN_00313e1c =====

undefined * FUN_00313e1c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395cc8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00313e5c  FUN_00313e5c =====

void FUN_00313e5c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00385160;
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


// ===== 00313ec8  FUN_00313ec8 =====

void FUN_00313ec8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00385160;
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


// ===== 00313f30  FUN_00313f30 =====

undefined8 * FUN_00313f30(long param_1)

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
  *puVar4 = &PTR_FUN_00385160;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 00313f90 to 00313f93 has its CatchHandler @ 00313fcc */
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


// ===== 00313ff4  FUN_00313ff4 =====

void FUN_00313ff4(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00385160;
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


// ===== 0031408c  FUN_0031408c =====

void FUN_0031408c(long param_1)

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


// ===== 003140ec  FUN_003140ec =====

void FUN_003140ec(void *param_1)

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


// ===== 00314148  FUN_00314148 =====

void FUN_00314148(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
                 ulong *param_6)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  JSError *pJVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [8];
  long *local_108;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  long local_80;
  long *plStack_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar10 = *param_5;
  uVar9 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 003141a8 to 003141b7 has its CatchHandler @ 00314770 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar5 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00395760,0xffffffffffffffff
                            ), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x00314230;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar8 = (long *)0x0;
      goto joined_r0x00314230;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar8 = plStack_78;
  }
  lVar6 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x00314230:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar9 == 1) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00395c98 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_defaultValue_00395c98), puVar3 = PTR_defaultValue_00395c90,
       iVar4 != 0)) {
      *(undefined4 *)PTR_defaultValue_00395c90 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00395c98);
    }
    plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
    if ((uVar9 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *plVar1);
    }
                    /* try { // try from 0031426c to 0031427b has its CatchHandler @ 00314478 */
    FUN_002accd0(auStack_110,param_3,uVar10);
                    /* try { // try from 0031427c to 00314287 has its CatchHandler @ 00314460 */
    (*pcVar11)(plVar1,auStack_110);
    if ((local_108 != (long *)0x0) &&
       (lVar5 = FUN_00255510(0xffffffffffffffff,local_108 + 1), lVar5 == 0)) {
      (**(code **)(*local_108 + 0x10))(local_108);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    *param_1 = 0;
    if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar5 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 0031432c to 0031433b has its CatchHandler @ 0031490c */
    FUN_0030de1c(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00314348 to 0031435b has its CatchHandler @ 003148ec */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 0031435c to 0031436f has its CatchHandler @ 003148d4 */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 00314370 to 0031437b has its CatchHandler @ 003148a4 */
    std::__ndk1::to_string(1);
                    /* try { // try from 0031437c to 0031438b has its CatchHandler @ 00314880 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 0031438c to 0031439f has its CatchHandler @ 0031485c */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 003143a0 to 003143ab has its CatchHandler @ 00314838 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 003143ac to 003143bb has its CatchHandler @ 00314814 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 003143bc to 003143cf has its CatchHandler @ 003147f0 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 003143d4 to 0031440f has its CatchHandler @ 00314790 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00314934  FUN_00314934 =====

void FUN_00314934(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395ca0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00314984  FUN_00314984 =====

undefined * FUN_00314984(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395ca8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003149c4  FUN_003149c4 =====

void FUN_003149c4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00384e50;
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


// ===== 00314a30  FUN_00314a30 =====

void FUN_00314a30(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00384e50;
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


// ===== 00314a98  FUN_00314a98 =====

undefined8 * FUN_00314a98(long param_1)

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
  *puVar4 = &PTR_FUN_00384e50;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 00314af8 to 00314afb has its CatchHandler @ 00314b34 */
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


// ===== 00314b5c  FUN_00314b5c =====

void FUN_00314b5c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00384e50;
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


// ===== 00314bf4  FUN_00314bf4 =====

void FUN_00314bf4(long param_1)

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


// ===== 00314c54  FUN_00314c54 =====

void FUN_00314c54(void *param_1)

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


// ===== 00314cb0  FUN_00314cb0 =====

void FUN_00314cb0(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 ulong *param_6)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  JSError *pJVar7;
  long *plVar8;
  ulong uVar9;
  code *pcVar10;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined8 local_110;
  long *local_108;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  long local_80;
  long *plStack_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar9 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 00314d10 to 00314d1f has its CatchHandler @ 00314fe4 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar5 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00395760,0xffffffffffffffff
                            ), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x00314d98;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar8 = (long *)0x0;
      goto joined_r0x00314d98;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar8 = plStack_78;
  }
  lVar6 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x00314d98:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar9 == 1) {
    pcVar10 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00395c78 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_defaultValue_00395c78), puVar3 = PTR_defaultValue_00395c70,
       iVar4 != 0)) {
      *(undefined4 *)PTR_defaultValue_00395c70 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00395c78);
    }
    plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
    if ((uVar9 & 1) != 0) {
      pcVar10 = *(code **)(pcVar10 + *plVar1);
    }
                    /* try { // try from 00314dd4 to 00314de7 has its CatchHandler @ 00315088 */
    facebook::jsi::Value::asNumber();
    (*pcVar10)(&local_110,plVar1);
                    /* try { // try from 00314dec to 00314df7 has its CatchHandler @ 00314fcc */
    FUN_002ce204(param_1,param_3,local_110,local_108);
    if ((local_108 != (long *)0x0) &&
       (lVar5 = FUN_00255510(0xffffffffffffffff,local_108 + 1), lVar5 == 0)) {
      (**(code **)(*local_108 + 0x10))(local_108);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar5 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 00314e98 to 00314ea7 has its CatchHandler @ 00315478 */
    FUN_0030de1c(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00314eb4 to 00314ec7 has its CatchHandler @ 00315458 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 00314ec8 to 00314edb has its CatchHandler @ 00315440 */
    FUN_00263450(auStack_f8,&local_110,"` expected ");
                    /* try { // try from 00314edc to 00314ee7 has its CatchHandler @ 00315410 */
    std::__ndk1::to_string(1);
                    /* try { // try from 00314ee8 to 00314ef7 has its CatchHandler @ 003153ec */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 00314ef8 to 00314f0b has its CatchHandler @ 003153c8 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 00314f0c to 00314f17 has its CatchHandler @ 003153a4 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 00314f18 to 00314f27 has its CatchHandler @ 00315380 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 00314f28 to 00314f3b has its CatchHandler @ 00315064 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 00314f40 to 00314f7b has its CatchHandler @ 00315004 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003154a0  FUN_003154a0 =====

void FUN_003154a0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395c80) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 003154f0  FUN_003154f0 =====

undefined * FUN_003154f0(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395c88;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00315530  FUN_00315530 =====

void FUN_00315530(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003848f0;
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


// ===== 0031559c  FUN_0031559c =====

void FUN_0031559c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003848f0;
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


// ===== 00315604  FUN_00315604 =====

undefined8 * FUN_00315604(long param_1)

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
  *puVar4 = &PTR_FUN_003848f0;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 00315664 to 00315667 has its CatchHandler @ 003156a0 */
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


// ===== 003156c8  FUN_003156c8 =====

void FUN_003156c8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_003848f0;
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


// ===== 00315760  FUN_00315760 =====

void FUN_00315760(long param_1)

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


// ===== 003157c0  FUN_003157c0 =====

void FUN_003157c0(void *param_1)

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


// ===== 0031581c  FUN_0031581c =====

void FUN_0031581c(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 ulong *param_6)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  JSError *pJVar6;
  long *plVar7;
  ulong uVar8;
  code *pcVar9;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined8 local_110;
  long *local_108;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  long local_80;
  long *plStack_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar8 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 00315878 to 00315887 has its CatchHandler @ 00315e28 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar4 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00395760,0xffffffffffffffff
                            ), lVar4 == 0)) {
    lVar4 = 0;
    plVar7 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x00315900;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto joined_r0x00315900;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar7 = plStack_78;
  }
  lVar5 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar5 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x00315900:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar8 == 0) {
    pcVar9 = *(code **)(param_2 + 0x20);
    uVar8 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelListPropertySpecENSt6__ndk110shared_ptrINS0_7PromiseIdEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395c58
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelListPropertySpecENSt6__ndk110shared_ptrINS0_7PromiseIdEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395c58
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelListPropertySpecENSt6__ndk110shared_ptrINS0_7PromiseIdEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395c50
       , iVar3 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelListPropertySpecENSt6__ndk110shared_ptrINS0_7PromiseIdEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395c50
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelListPropertySpecENSt6__ndk110shared_ptrINS0_7PromiseIdEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395c58
                         );
    }
    if ((uVar8 & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(lVar4 + ((long)uVar8 >> 1)));
    }
                    /* try { // try from 00315938 to 0031593f has its CatchHandler @ 00315b30 */
    (*pcVar9)(&local_110);
                    /* try { // try from 00315944 to 0031594f has its CatchHandler @ 00315b18 */
    FUN_0026ab84(param_1,param_3,local_110,local_108);
    if ((local_108 != (long *)0x0) &&
       (lVar4 = FUN_00255510(0xffffffffffffffff,local_108 + 1), lVar4 == 0)) {
      (**(code **)(*local_108 + 0x10))(local_108);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if ((plVar7 != (long *)0x0) && (lVar4 = FUN_00255510(0xffffffffffffffff,plVar7 + 1), lVar4 == 0)
       ) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 003159f0 to 003159ff has its CatchHandler @ 00315fc4 */
    FUN_0030de1c(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar4);
    pJVar6 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00315a0c to 00315a1f has its CatchHandler @ 00315fa4 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 00315a20 to 00315a33 has its CatchHandler @ 00315f8c */
    FUN_00263450(auStack_f8,&local_110,"` expected ");
                    /* try { // try from 00315a34 to 00315a3f has its CatchHandler @ 00315f5c */
    std::__ndk1::to_string(0);
                    /* try { // try from 00315a40 to 00315a4f has its CatchHandler @ 00315f38 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 00315a50 to 00315a63 has its CatchHandler @ 00315f14 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 00315a64 to 00315a6f has its CatchHandler @ 00315ef0 */
    std::__ndk1::to_string(uVar8);
                    /* try { // try from 00315a70 to 00315a7f has its CatchHandler @ 00315ecc */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 00315a80 to 00315a93 has its CatchHandler @ 00315ea8 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 00315a98 to 00315ad3 has its CatchHandler @ 00315e48 */
    facebook::jsi::JSError::JSError(pJVar6,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar6,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00315fec  FUN_00315fec =====

void FUN_00315fec(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395c60) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0031603c  FUN_0031603c =====

undefined * FUN_0031603c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395c68;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031607c  FUN_0031607c =====

void FUN_0031607c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00384870;
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


// ===== 003160e8  FUN_003160e8 =====

void FUN_003160e8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00384870;
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


// ===== 00316150  FUN_00316150 =====

undefined8 * FUN_00316150(long param_1)

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
  *puVar4 = &PTR_FUN_00384870;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 003161b0 to 003161b3 has its CatchHandler @ 003161ec */
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


// ===== 00316214  FUN_00316214 =====

void FUN_00316214(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00384870;
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


// ===== 003162ac  FUN_003162ac =====

void FUN_003162ac(long param_1)

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


// ===== 0031630c  FUN_0031630c =====

void FUN_0031630c(void *param_1)

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


// ===== 00316368  FUN_00316368 =====

void FUN_00316368(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 ulong *param_6)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  JSError *pJVar7;
  long *plVar8;
  ulong uVar9;
  code *pcVar10;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  long local_80;
  long *local_78;
  char local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar9 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 003163c8 to 003163d7 has its CatchHandler @ 003166b8 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  plVar1 = local_78;
  if ((local_80 == 0) ||
     (lVar5 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00395760,0xffffffffffffffff
                            ), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plVar1 == (long *)0x0) goto joined_r0x00316450;
  }
  else {
    if (plVar1 == (long *)0x0) {
      plVar8 = (long *)0x0;
      goto joined_r0x00316450;
    }
    FUN_00259a00(1,plVar1 + 1);
    plVar8 = plVar1;
  }
  lVar6 = FUN_00255510(0xffffffffffffffff,plVar1 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x00316450:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar9 == 1) {
    pcVar10 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00395c38 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_defaultValue_00395c38), puVar3 = PTR_defaultValue_00395c30,
       iVar4 != 0)) {
      *(undefined4 *)PTR_defaultValue_00395c30 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00395c38);
    }
    plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
    if ((uVar9 & 1) != 0) {
      pcVar10 = *(code **)(pcVar10 + *plVar1);
    }
                    /* try { // try from 0031648c to 0031649f has its CatchHandler @ 0031675c */
    facebook::jsi::Value::asNumber();
    (*pcVar10)(&local_80,plVar1);
    if (local_70 == '\0') {
      *param_1 = 0;
    }
    else {
                    /* try { // try from 003164ac to 003164b7 has its CatchHandler @ 0031669c */
      FUN_002abf6c(param_1,param_3,local_80);
      if (((local_70 != '\0') && (local_78 != (long *)0x0)) &&
         (lVar5 = FUN_00255510(0xffffffffffffffff,local_78 + 1), lVar5 == 0)) {
        (**(code **)(*local_78 + 0x10))(local_78);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
    if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar5 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 00316568 to 00316577 has its CatchHandler @ 00316b4c */
    FUN_0030de1c(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00316584 to 00316597 has its CatchHandler @ 00316b2c */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 00316598 to 003165ab has its CatchHandler @ 00316b14 */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 003165ac to 003165b7 has its CatchHandler @ 00316ae4 */
    std::__ndk1::to_string(1);
                    /* try { // try from 003165b8 to 003165c7 has its CatchHandler @ 00316ac0 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 003165c8 to 003165db has its CatchHandler @ 00316a9c */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 003165dc to 003165e7 has its CatchHandler @ 00316a78 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 003165e8 to 003165f7 has its CatchHandler @ 00316a54 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 003165f8 to 0031660b has its CatchHandler @ 00316738 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 00316610 to 0031664b has its CatchHandler @ 003166d8 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00316b74  FUN_00316b74 =====

void FUN_00316b74(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395c40) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00316bc4  FUN_00316bc4 =====

undefined * FUN_00316bc4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395c48;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00316c04  FUN_00316c04 =====

void FUN_00316c04(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003847f0;
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


// ===== 00316c70  FUN_00316c70 =====

void FUN_00316c70(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003847f0;
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


// ===== 00316cd8  FUN_00316cd8 =====

undefined8 * FUN_00316cd8(long param_1)

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
  *puVar4 = &PTR_FUN_003847f0;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 00316d38 to 00316d3b has its CatchHandler @ 00316d74 */
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


// ===== 00316d9c  FUN_00316d9c =====

void FUN_00316d9c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_003847f0;
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


// ===== 00316e34  FUN_00316e34 =====

void FUN_00316e34(long param_1)

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


// ===== 00316e94  FUN_00316e94 =====

void FUN_00316e94(void *param_1)

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


// ===== 00316ef0  FUN_00316ef0 =====

void FUN_00316ef0(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 ulong *param_6)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  JSError *pJVar6;
  long *plVar7;
  ulong uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  long local_80;
  long *plStack_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar8 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 00316f4c to 00316f5b has its CatchHandler @ 003174a4 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar4 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00395760,0xffffffffffffffff
                            ), lVar4 == 0)) {
    lVar4 = 0;
    plVar7 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x00316fd4;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto joined_r0x00316fd4;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar7 = plStack_78;
  }
  lVar5 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar5 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x00316fd4:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar8 == 0) {
    pcVar9 = *(code **)(param_2 + 0x20);
    uVar8 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelListPropertySpecEdJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395c18
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelListPropertySpecEdJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395c18
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelListPropertySpecEdJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395c10
       , iVar3 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelListPropertySpecEdJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395c10
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive31HybridViewModelListPropertySpecEdJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00395c18
                         );
    }
    if ((uVar8 & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(lVar4 + ((long)uVar8 >> 1)));
    }
                    /* try { // try from 0031700c to 0031700f has its CatchHandler @ 003171b4 */
    uVar10 = (*pcVar9)();
    *(undefined8 *)(param_1 + 2) = uVar10;
    *param_1 = 3;
    if ((plVar7 != (long *)0x0) && (lVar4 = FUN_00255510(0xffffffffffffffff,plVar7 + 1), lVar4 == 0)
       ) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 0031708c to 0031709b has its CatchHandler @ 00317640 */
    FUN_0030de1c(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar4);
    pJVar6 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 003170a8 to 003170bb has its CatchHandler @ 00317620 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 003170bc to 003170cf has its CatchHandler @ 00317608 */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 003170d0 to 003170db has its CatchHandler @ 003175d8 */
    std::__ndk1::to_string(0);
                    /* try { // try from 003170dc to 003170eb has its CatchHandler @ 003175b4 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 003170ec to 003170ff has its CatchHandler @ 00317590 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 00317100 to 0031710b has its CatchHandler @ 0031756c */
    std::__ndk1::to_string(uVar8);
                    /* try { // try from 0031710c to 0031711b has its CatchHandler @ 00317548 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 0031711c to 0031712f has its CatchHandler @ 00317524 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 00317134 to 0031716f has its CatchHandler @ 003174c4 */
    facebook::jsi::JSError::JSError(pJVar6,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar6,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00317668  FUN_00317668 =====

void FUN_00317668(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395c20) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 003176b8  FUN_003176b8 =====

undefined * FUN_003176b8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395c28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003176f8  margelo::nitro::rive::HybridViewModelListPropertySpec::loadHybridMethods =====

/* virtual thunk to margelo::nitro::rive::HybridViewModelListPropertySpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridViewModelListPropertySpec::loadHybridMethods
          (HybridViewModelListPropertySpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    loadHybridMethods(this + *(long *)(*(long *)this + -0x30));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031773c  margelo::nitro::rive::HybridViewModelListPropertySpec::loadHybridMethods =====

/* virtual thunk to margelo::nitro::rive::HybridViewModelListPropertySpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridViewModelListPropertySpec::loadHybridMethods
          (HybridViewModelListPropertySpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    loadHybridMethods(this + *(long *)(*(long *)this + -0x20));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00317780  FUN_00317780 =====

void FUN_00317780(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x317784);
  (*pcVar1)();
}


// ===== 00317784  FUN_00317784 =====

void FUN_00317784(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x317788);
  (*pcVar1)();
}


// ===== 00317788  FUN_00317788 =====

void FUN_00317788(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x31778c);
  (*pcVar1)();
}


// ===== 0031778c  FUN_0031778c =====

void FUN_0031778c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x317790);
  (*pcVar1)();
}


// ===== 00317790  margelo::nitro::rive::HybridViewModelArtboardPropertySpec::loadHybridMethods =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* margelo::nitro::rive::HybridViewModelArtboardPropertySpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridViewModelArtboardPropertySpec::loadHybridMethods
          (HybridViewModelArtboardPropertySpec *this)

{
  long lVar1;
  long lVar2;
  long **pplVar3;
  runtime_error *prVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  basic_string local_118;
  undefined4 uStack_117;
  undefined3 uStack_113;
  long *plStack_110;
  long *local_108;
  undefined *local_100;
  long *plStack_f8;
  long *local_f0;
  long *local_e8;
  long *plStack_e0;
  undefined4 local_d8;
  long *local_d0;
  long *plStack_c8;
  long **local_b0;
  undefined8 local_a0;
  ulong local_98;
  long *plStack_90;
  long *local_88;
  long *local_80;
  long *plStack_78;
  long **local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  margelo::nitro::HybridObject::loadHybridMethods();
  lVar5 = *(long *)(*(long *)this + -0x38);
  margelo::nitro::HybridObject::loadHybridMethods();
  FUN_002e4024(this + lVar5 + *(long *)(*(long *)(this + lVar5) + -0x20) + 8);
  lVar5 = *(long *)(*(long *)this + -0x20);
  plVar6 = *(long **)(this + lVar5 + 8);
  if (plVar6 == (long *)0x0) {
    local_80 = (long *)0x0;
    plStack_78 = (long *)0x0;
    local_100 = PTR_typeinfo_00395768;
                    /* try { // try from 0031781c to 0031782b has its CatchHandler @ 00317d74 */
    FUN_00264f84(&local_d0,&local_100,&local_80);
    plVar9 = plStack_c8;
    plVar6 = local_d0;
    plVar8 = *(long **)(this + lVar5 + 0x10);
    local_d0 = (long *)0x0;
    plStack_c8 = (long *)0x0;
    *(long **)(this + lVar5 + 0x10) = plVar9;
    *(long **)(this + lVar5 + 8) = plVar6;
    if ((plVar8 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar6 = plStack_c8;
    if ((plStack_c8 != (long *)0x0) &&
       (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_c8 + 1), lVar2 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar6 = plStack_78;
    if ((plStack_78 != (long *)0x0) &&
       (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1), lVar2 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar6 = *(long **)(this + lVar5 + 8);
  }
  puVar7 = *(undefined **)(*plVar6 + 8);
  plVar9 = plVar6;
  while (puVar7 != PTR_typeinfo_name_00395dd0) {
    plVar9 = (long *)plVar9[1];
    if (plVar9 == (long *)0x0) {
      plStack_c8 = *(long **)(this + lVar5 + 0x10);
      local_d0 = plVar6;
      if (plStack_c8 != (long *)0x0) {
        FUN_00259a00(1,plStack_c8 + 1);
      }
      local_100 = PTR_typeinfo_00395768;
                    /* try { // try from 00317938 to 00317947 has its CatchHandler @ 00317d68 */
      FUN_00264f84(&local_80,&local_100,&local_d0);
      plVar9 = plStack_78;
      plVar6 = local_80;
      plVar8 = *(long **)(this + lVar5 + 0x10);
      local_80 = (long *)0x0;
      plStack_78 = (long *)0x0;
      *(long **)(this + lVar5 + 0x10) = plVar9;
      *(long **)(this + lVar5 + 8) = plVar6;
      if ((plVar8 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar2 == 0)) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar6 = plStack_78;
      if ((plStack_78 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1), lVar2 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar6 = plStack_c8;
      if ((plStack_c8 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_c8 + 1), lVar2 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar9 = *(long **)(this + lVar5 + 8);
      lVar5 = plVar9[6];
      goto joined_r0x003179ec;
    }
    puVar7 = *(undefined **)(*plVar9 + 8);
  }
  lVar5 = plVar9[6];
joined_r0x003179ec:
  if (((lVar5 == 0) && (plVar9[0xb] == 0)) && (plVar9[0x10] == 0)) {
    local_118 = (basic_string)0x6;
    uStack_117 = 0x746573;
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_118);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_118), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00317c10 to 00317c23 has its CatchHandler @ 00317e1c */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_118);
                    /* try { // try from 00317c24 to 00317c37 has its CatchHandler @ 00317e04 */
      FUN_00263450(&local_d0,&local_80,"\" - a property with that name already exists!");
                    /* try { // try from 00317c3c to 00317c73 has its CatchHandler @ 00317de0 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_d0);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00317e50;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_118);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00317c84 to 00317c97 has its CatchHandler @ 00317ddc */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_118);
                    /* try { // try from 00317c98 to 00317cab has its CatchHandler @ 00317dd8 */
      FUN_00263450(&local_d0,&local_80,"\" - a method with that name already exists!");
                    /* try { // try from 00317cb0 to 00317ce7 has its CatchHandler @ 00317dac */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_d0);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00317e50;
    }
    local_100 = (undefined *)CONCAT35(uStack_113,CONCAT41(uStack_117,local_118));
    local_d8 = 0;
    plStack_f8 = plStack_110;
    local_f0 = local_108;
    plStack_e0 = _UNK_001d8138;
    local_e8 = _DAT_001d8130;
                    /* try { // try from 00317a64 to 00317a6b has its CatchHandler @ 00317d94 */
    local_60 = (long **)operator_new(0x38);
    *local_60 = (long *)&PTR_FUN_00385b30;
    if (((ulong)local_100 & 1) == 0) {
      local_60[2] = plStack_f8;
      *(undefined **)(local_60 + 1) = local_100;
      local_60[3] = local_f0;
    }
    else {
                    /* try { // try from 00317a9c to 00317a9f has its CatchHandler @ 00317d58 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (local_60 + 1),(char *)local_f0,(ulong)plStack_f8);
    }
    local_60[5] = plStack_e0;
    local_60[4] = local_e8;
    *(undefined4 *)(local_60 + 6) = local_d8;
    if (((byte)local_100 & 1) == 0) {
LAB_00317adc:
      pplVar3 = &local_80;
      local_b0 = local_60;
LAB_00317aec:
      pplVar3[4] = (long *)0x0;
    }
    else {
      operator_delete(local_f0);
      if (local_60 == (long **)0x0) {
        pplVar3 = &local_d0;
        goto LAB_00317aec;
      }
      if (local_60 != &local_80) goto LAB_00317adc;
      local_b0 = &local_d0;
                    /* try { // try from 00317bf4 to 00317bff has its CatchHandler @ 00317ce8 */
      (*(code *)local_80[3])(&local_80,&local_d0);
    }
    local_a0 = 1;
    if (((byte)local_118 & 1) == 0) {
      plStack_90 = plStack_110;
      local_98 = CONCAT35(uStack_113,CONCAT41(uStack_117,local_118));
      local_88 = local_108;
    }
    else {
                    /* try { // try from 00317b20 to 00317b27 has its CatchHandler @ 00317cec */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_98,(char *)local_108,(ulong)plStack_110);
    }
    if (local_60 == &local_80) {
      lVar5 = 4;
      pplVar3 = &local_80;
LAB_00317b4c:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_60 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_60;
      goto LAB_00317b4c;
    }
                    /* try { // try from 00317b58 to 00317b6b has its CatchHandler @ 00317d84 */
    FUN_002634d4(plVar9 + 3,&local_118,&local_118,&local_d0);
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if (local_b0 == &local_d0) {
      lVar5 = 4;
      pplVar3 = &local_d0;
LAB_00317ba0:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_b0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_b0;
      goto LAB_00317ba0;
    }
    if (((byte)local_118 & 1) != 0) {
      operator_delete(local_108);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00317e50:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00317e54  FUN_00317e54 =====

void FUN_00317e54(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00385b30;
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


// ===== 00317ec0  FUN_00317ec0 =====

void FUN_00317ec0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00385b30;
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


// ===== 00317f28  FUN_00317f28 =====

undefined8 * FUN_00317f28(long param_1)

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
  *puVar4 = &PTR_FUN_00385b30;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 00317f88 to 00317f8b has its CatchHandler @ 00317fc4 */
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


// ===== 00317fec  FUN_00317fec =====

void FUN_00317fec(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00385b30;
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


// ===== 00318084  FUN_00318084 =====

void FUN_00318084(long param_1)

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


// ===== 003180e4  FUN_003180e4 =====

void FUN_003180e4(void *param_1)

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


// ===== 00318140  FUN_00318140 =====

void FUN_00318140(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
                 ulong *param_6)

{
  long *plVar1;
  IRuntime *pIVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  JSError *pJVar8;
  ulong uVar9;
  long *plVar10;
  code *pcVar11;
  IRuntime *pIVar12;
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined8 *local_150 [3];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  long local_d8;
  long *plStack_d0;
  undefined8 *local_c0 [3];
  long local_a8;
  long *plStack_a0;
  ulong local_90;
  long *plStack_88;
  char local_80;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  pIVar12 = (IRuntime *)*param_5;
  uVar9 = *param_6;
  local_c0[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 003181a0 to 003181af has its CatchHandler @ 00318b60 */
  (**(code **)(*param_3 + 0x160))(&local_a8,param_3,local_c0);
  if ((local_a8 == 0) ||
     (lVar6 = __dynamic_cast(local_a8,PTR_typeinfo_00394860,PTR_typeinfo_00395768,0xffffffffffffffff
                            ), lVar6 == 0)) {
    lVar6 = 0;
    plVar10 = (long *)0x0;
    if (plStack_a0 != (long *)0x0) goto LAB_003181fc;
  }
  else if (plStack_a0 == (long *)0x0) {
    plVar10 = (long *)0x0;
  }
  else {
    FUN_00259a00(1,plStack_a0 + 1);
    plVar10 = plStack_a0;
LAB_003181fc:
    lVar7 = FUN_00255510(0xffffffffffffffff,plStack_a0 + 1);
    if (lVar7 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
  if (local_c0[0] != (undefined8 *)0x0) {
    (**(code **)*local_c0[0])();
  }
  pIVar2 = (IRuntime *)PTR_defaultValue_00395dd8;
  if (uVar9 < 2) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar3 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00395de0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_defaultValue_00395de0), iVar5 != 0)) {
      *(undefined4 *)pIVar2 = 0;
      __cxa_atexit(PTR__Value_00394848,pIVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00395de0);
    }
    plVar1 = (long *)(lVar6 + ((long)uVar3 >> 1));
    if ((uVar3 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *plVar1);
    }
    if (uVar9 != 0) {
      pIVar2 = pIVar12;
    }
    if (*(int *)pIVar2 == 0) {
      local_90 = local_90 & 0xffffffffffffff00;
      local_80 = '\0';
    }
    else {
                    /* try { // try from 00318280 to 0031828f has its CatchHandler @ 00318840 */
      facebook::jsi::Value::asObject(pIVar2);
                    /* try { // try from 00318298 to 003182a7 has its CatchHandler @ 00318820 */
      (**(code **)(*param_3 + 0x160))(&local_d8,param_3,local_150);
      if ((local_d8 == 0) ||
         (uVar9 = __dynamic_cast(local_d8,PTR_typeinfo_00394860,PTR_typeinfo_003947f8,
                                 0xffffffffffffffff), uVar9 == 0)) {
                    /* try { // try from 0031851c to 0031852b has its CatchHandler @ 00318804 */
        facebook::jsi::Value::toString(pIVar2);
                    /* try { // try from 00318534 to 00318543 has its CatchHandler @ 003187bc */
        (**(code **)(*param_3 + 0x120))(&local_a8,param_3,local_c0);
        if (local_c0[0] != (undefined8 *)0x0) {
          (**(code **)*local_c0[0])();
        }
                    /* try { // try from 00318558 to 0031856b has its CatchHandler @ 0031877c */
        FUN_00264e5c(local_c0,PTR_typeinfo_name_003947f0,0);
        pJVar8 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00318578 to 0031858b has its CatchHandler @ 003186bc */
        std::__ndk1::operator+
                  ("Downcasting failed - It has a different NativeState<T>!\n- Did you accidentally pass a different type?\n- Is react-native-nitro-modules linked multiple times? Ensure you don\'t have any duplicate symbols for `"
                   ,(basic_string *)local_c0);
                    /* try { // try from 0031858c to 0031859f has its CatchHandler @ 003186a0 */
        FUN_00263450(auStack_f0,auStack_108,"` in your app\'s binary.");
                    /* try { // try from 003185a0 to 003185af has its CatchHandler @ 0031866c */
        FUN_00319204(&local_d8,&local_a8,auStack_f0);
                    /* try { // try from 003185b4 to 003185f3 has its CatchHandler @ 00318630 */
        facebook::jsi::JSError::JSError(pJVar8,param_3,&local_d8);
        if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
          __cxa_throw(pJVar8,PTR_typeinfo_00394858,PTR__JSError_00394840);
        }
        goto LAB_00318cc4;
      }
      if (plStack_d0 != (long *)0x0) {
        FUN_00259a00(1,plStack_d0 + 1);
        lVar6 = FUN_00255510(0xffffffffffffffff,plStack_d0 + 1);
        if (lVar6 == 0) {
          (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      if (local_150[0] != (undefined8 *)0x0) {
        (**(code **)*local_150[0])();
      }
      local_80 = '\x01';
      plStack_88 = plStack_d0;
      local_90 = uVar9;
    }
                    /* try { // try from 00318348 to 00318353 has its CatchHandler @ 0031884c */
    (*pcVar11)(plVar1,&local_90);
    plVar1 = plStack_88;
    if (((local_80 != '\0') && (plStack_88 != (long *)0x0)) &&
       (lVar6 = FUN_00255510(0xffffffffffffffff,plStack_88 + 1), lVar6 == 0)) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    *param_1 = 0;
    if ((plVar10 != (long *)0x0) &&
       (lVar6 = FUN_00255510(0xffffffffffffffff,plVar10 + 1), lVar6 == 0)) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar4 + 0x28) == local_70) {
      return;
    }
  }
  else {
                    /* try { // try from 00318404 to 00318413 has its CatchHandler @ 00318ca0 */
    FUN_00318d58(&local_a8,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar6);
    pJVar8 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00318420 to 00318433 has its CatchHandler @ 00318c80 */
    std::__ndk1::operator+("`",(basic_string *)&local_a8);
                    /* try { // try from 00318434 to 00318447 has its CatchHandler @ 00318c68 */
    FUN_00263450(auStack_138,local_150,"` expected between ");
                    /* try { // try from 00318448 to 00318453 has its CatchHandler @ 00318c38 */
    std::__ndk1::to_string(0);
                    /* try { // try from 00318454 to 00318463 has its CatchHandler @ 00318c14 */
    FUN_00264adc(auStack_120,auStack_138,auStack_168);
                    /* try { // try from 00318464 to 00318477 has its CatchHandler @ 00318bf0 */
    FUN_00263450(&local_90,auStack_120," and ");
                    /* try { // try from 00318478 to 00318483 has its CatchHandler @ 00318bcc */
    std::__ndk1::to_string(1);
                    /* try { // try from 00318484 to 00318493 has its CatchHandler @ 00318ba8 */
    FUN_00264adc(auStack_108,&local_90,auStack_180);
                    /* try { // try from 00318494 to 003184a7 has its CatchHandler @ 00318b80 */
    FUN_00263450(auStack_f0,auStack_108," arguments, but received ");
                    /* try { // try from 003184a8 to 003184b3 has its CatchHandler @ 003187e0 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 003184b4 to 003184c3 has its CatchHandler @ 00318798 */
    FUN_00264adc(&local_d8,auStack_f0,auStack_198);
                    /* try { // try from 003184c4 to 003184d7 has its CatchHandler @ 00318758 */
    FUN_00263450(local_c0,&local_d8,&DAT_001d5be0);
                    /* try { // try from 003184dc to 00318517 has its CatchHandler @ 003186e0 */
    facebook::jsi::JSError::JSError(pJVar8,param_3,local_c0);
    if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar8,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
LAB_00318cc4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00318cc8  FUN_00318cc8 =====

void FUN_00318cc8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395de8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00318d18  FUN_00318d18 =====

undefined * FUN_00318d18(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395df0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00318d58  FUN_00318d58 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00318d58(undefined8 *param_1,int param_2,byte *param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  void *pvVar4;
  byte *pbVar5;
  long lVar6;
  undefined *puVar7;
  byte bVar8;
  ulong *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong local_a0;
  ulong local_98;
  undefined8 *local_90;
  byte local_88 [8];
  size_t local_80;
  void *local_78;
  ulong local_70;
  ulong uStack_68;
  undefined8 *local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  if (param_4 == 0) {
    local_60 = (undefined8 *)operator_new(0x40);
    puVar7 = PTR_typeinfo_name_00395dd0;
    uStack_68 = _UNK_001d7ee8;
    local_70 = _DAT_001d7ee0;
    *(undefined1 *)((long)local_60 + 0x3a) = 0;
    uVar10 = *(undefined8 *)(puVar7 + 0x20);
    uVar14 = *(undefined8 *)(puVar7 + 8);
    uVar13 = *(undefined8 *)puVar7;
    uVar16 = *(undefined8 *)(puVar7 + 0x18);
    uVar15 = *(undefined8 *)(puVar7 + 0x10);
    local_60[5] = *(undefined8 *)(puVar7 + 0x28);
    local_60[4] = uVar10;
    uVar12 = *(undefined8 *)(puVar7 + 0x32);
    uVar10 = *(undefined8 *)(puVar7 + 0x2a);
    local_60[1] = uVar14;
    *local_60 = uVar13;
    local_60[3] = uVar16;
    local_60[2] = uVar15;
    *(undefined8 *)((long)local_60 + 0x32) = uVar12;
    *(undefined8 *)((long)local_60 + 0x2a) = uVar10;
                    /* try { // try from 00318de4 to 00318df3 has its CatchHandler @ 00319084 */
    margelo::nitro::TypeInfo::demangleName((basic_string *)&local_70,true);
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
  }
  else {
    margelo::nitro::HybridObject::getName();
  }
  bVar8 = local_88[0];
  if (param_2 == 0) {
    sVar3 = (ulong)(local_88[0] >> 1);
    if ((local_88[0] & 1) != 0) {
      sVar3 = local_80;
    }
    uVar1 = sVar3 + 1;
    if (0xffffffffffffffef < uVar1) goto LAB_00319044;
    if (uVar1 < 0x17) {
      local_98 = 0;
      puVar11 = (undefined8 *)((ulong)&local_a0 | 1);
      local_90 = (undefined8 *)0x0;
      local_a0 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_00318f48;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 00318f30 to 00318f37 has its CatchHandler @ 00319098 */
      puVar11 = (undefined8 *)operator_new(uVar2);
      local_a0 = uVar2 | 1;
      local_98 = uVar1;
      local_90 = puVar11;
LAB_00318f48:
      pvVar4 = (void *)((ulong)local_88 | 1);
      if ((bVar8 & 1) != 0) {
        pvVar4 = local_78;
      }
      memmove(puVar11,pvVar4,sVar3);
    }
    *(undefined2 *)((long)puVar11 + sVar3) = 0x2e;
    pbVar5 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pbVar5 = param_3 + 1;
    }
                    /* try { // try from 00318f88 to 00318f8f has its CatchHandler @ 00319070 */
    puVar9 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_a0,(ulong)pbVar5);
    local_60 = (undefined8 *)puVar9[2];
    uStack_68 = puVar9[1];
    local_70 = *puVar9;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
                    /* try { // try from 00318fa8 to 00318fbb has its CatchHandler @ 00319058 */
    puVar11 = (undefined8 *)
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_70,0x1d6185);
    uVar10 = puVar11[2];
    uVar13 = puVar11[1];
    uVar12 = *puVar11;
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    param_1[1] = uVar13;
    *param_1 = uVar12;
    param_1[2] = uVar10;
    puVar11 = local_90;
    uVar1 = local_a0;
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
      puVar11 = local_90;
      uVar1 = local_a0;
    }
  }
  else {
    sVar3 = (ulong)(local_88[0] >> 1);
    if ((local_88[0] & 1) != 0) {
      sVar3 = local_80;
    }
    uVar1 = sVar3 + 1;
    if (0xffffffffffffffef < uVar1) {
      if (*(long *)(lVar6 + 0x28) != local_58) goto LAB_003190e0;
                    /* try { // try from 00319040 to 00319043 has its CatchHandler @ 003190b4 */
      FUN_00260a84();
LAB_00319044:
      if (*(long *)(lVar6 + 0x28) == local_58) {
                    /* try { // try from 00319054 to 00319057 has its CatchHandler @ 00319098 */
        uVar10 = FUN_00260a84();
                    /* catch() { ... } // from try @ 00318fa8 with catch @ 00319058 */
        if ((local_70 & 1) != 0) {
          operator_delete(local_60);
        }
        if ((local_a0 & 1) != 0) {
          operator_delete(local_90);
        }
        if ((local_88[0] & 1) != 0) {
          operator_delete(local_78);
        }
        if (*(long *)(lVar6 + 0x28) == local_58) {
          FUN_00255d34(uVar10);
        }
      }
      goto LAB_003190e0;
    }
    if (uVar1 < 0x17) {
      uStack_68 = 0;
      puVar11 = (undefined8 *)((ulong)&local_70 | 1);
      local_60 = (undefined8 *)0x0;
      local_70 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_00318eb8;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 00318ea0 to 00318ea7 has its CatchHandler @ 003190b4 */
      puVar11 = (undefined8 *)operator_new(uVar2);
      local_70 = uVar2 | 1;
      uStack_68 = uVar1;
      local_60 = puVar11;
LAB_00318eb8:
      pvVar4 = (void *)((ulong)local_88 | 1);
      if ((bVar8 & 1) != 0) {
        pvVar4 = local_78;
      }
      memmove(puVar11,pvVar4,sVar3);
    }
    *(undefined2 *)((long)puVar11 + sVar3) = 0x2e;
    pbVar5 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pbVar5 = param_3 + 1;
    }
                    /* try { // try from 00318ef8 to 00318eff has its CatchHandler @ 0031909c */
    puVar11 = (undefined8 *)
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_70,(ulong)pbVar5);
    uVar10 = puVar11[2];
    uVar13 = puVar11[1];
    uVar12 = *puVar11;
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    param_1[1] = uVar13;
    *param_1 = uVar12;
    param_1[2] = uVar10;
    puVar11 = local_60;
    uVar1 = local_70;
  }
  if ((uVar1 & 1) != 0) {
    operator_delete(puVar11);
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
LAB_003190e0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003190e4  FUN_003190e4 =====

void FUN_003190e4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
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


// ===== 00319170  FUN_00319170 =====

void FUN_00319170(long *param_1,char param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((param_2 == '\0') || (param_1 == (long *)0x0)) ||
     (lVar2 = FUN_00255510(0xffffffffffffffff,param_1 + 1), lVar2 != 0)) {
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


// ===== 00319204  FUN_00319204 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00319204(undefined8 *param_1,byte *param_2,byte *param_3)

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
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong local_d8;
  ulong local_d0;
  undefined8 local_c8;
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  byte local_88 [16];
  void *local_78;
  ulong local_70;
  ulong uStack_68;
  undefined8 *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  local_60 = (undefined8 *)operator_new(0x40);
  uVar14 = *(undefined8 *)(PTR_typeinfo_name_003947f0 + 8);
  uVar13 = *(undefined8 *)PTR_typeinfo_name_003947f0;
  uVar16 = *(undefined8 *)(PTR_typeinfo_name_003947f0 + 0x18);
  uVar15 = *(undefined8 *)(PTR_typeinfo_name_003947f0 + 0x10);
  uStack_68 = _UNK_001d7e98;
  local_70 = _DAT_001d7e90;
  uVar12 = *(undefined8 *)(PTR_typeinfo_name_003947f0 + 0x28);
  uVar11 = *(undefined8 *)(PTR_typeinfo_name_003947f0 + 0x20);
  *(undefined2 *)(local_60 + 6) = 0x45;
  local_60[1] = uVar14;
  *local_60 = uVar13;
  local_60[3] = uVar16;
  local_60[2] = uVar15;
  local_60[5] = uVar12;
  local_60[4] = uVar11;
                    /* try { // try from 00319270 to 0031927f has its CatchHandler @ 00319568 */
  margelo::nitro::TypeInfo::demangleName((basic_string *)&local_70,false);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  bVar3 = *param_2;
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_2 + 8);
  }
  uVar1 = __n + 0x10;
  if (uVar1 < 0xfffffffffffffff0) {
    if (uVar1 < 0x17) {
      local_d0 = 0;
      uVar9 = ((uint)uVar1 & 0xff) << 1;
      local_c8 = (char *)0x0;
      local_d8 = (ulong)(byte)uVar9;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 003192dc to 003192e3 has its CatchHandler @ 0031957c */
      local_c8 = (char *)operator_new(uVar2);
      local_d8 = uVar2 | 1;
      uVar9 = (uint)local_d8 & 0xff;
      local_d0 = uVar1;
    }
    uVar11 = s_Cannot_convert___001d6d63._0_8_;
    __dest = (char *)((long)&local_c8 + 1);
    pcVar5 = (char *)((ulong)&local_d8 | 1);
    if ((uVar9 & 1) != 0) {
      __dest = local_c8 + 0x10;
      pcVar5 = local_c8;
    }
    *(undefined8 *)(pcVar5 + 8) = s_Cannot_convert___001d6d63._8_8_;
    *(undefined8 *)pcVar5 = uVar11;
    if (__n != 0) {
      pbVar10 = *(byte **)(param_2 + 0x10);
      if ((bVar3 & 1) == 0) {
        pbVar10 = param_2 + 1;
      }
      memmove(__dest,pbVar10,__n);
    }
    __dest[__n] = '\0';
                    /* try { // try from 00319340 to 00319353 has its CatchHandler @ 00319548 */
    puVar7 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_d8,0x1d7691);
    local_b0 = (void *)puVar7[2];
    uStack_b8 = puVar7[1];
    local_c0 = *puVar7;
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    pvVar6 = (void *)((ulong)local_88 | 1);
    if ((local_88[0] & 1) != 0) {
      pvVar6 = local_78;
    }
                    /* try { // try from 0031938c to 00319393 has its CatchHandler @ 00319528 */
    puVar7 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_c0,(ulong)pvVar6);
    local_90 = (void *)puVar7[2];
    uStack_98 = puVar7[1];
    local_a0 = *puVar7;
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
                    /* try { // try from 003193ac to 003193bf has its CatchHandler @ 00319508 */
    puVar7 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_a0,0x1d6339);
    local_60 = (undefined8 *)puVar7[2];
    uStack_68 = puVar7[1];
    local_70 = *puVar7;
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    pbVar10 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pbVar10 = param_3 + 1;
    }
                    /* try { // try from 003193f0 to 003193f7 has its CatchHandler @ 003194c4 */
    puVar8 = (undefined8 *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       ((char *)&local_70,(ulong)pbVar10);
    uVar11 = puVar8[2];
    uVar13 = puVar8[1];
    uVar12 = *puVar8;
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    param_1[1] = uVar13;
    *param_1 = uVar12;
    param_1[2] = uVar11;
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
    if ((local_d8 & 1) != 0) {
      operator_delete(local_c8);
    }
    if ((local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
    if (*(long *)(lVar4 + 0x28) == local_58) {
      return;
    }
  }
  else if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* try { // try from 003194c0 to 003194c3 has its CatchHandler @ 0031957c */
    uVar11 = FUN_00260a84();
                    /* catch() { ... } // from try @ 003193f0 with catch @ 003194c4 */
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
    if ((local_d8 & 1) != 0) {
      operator_delete(local_c8);
    }
    if ((local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
    if (*(long *)(lVar4 + 0x28) == local_58) {
      FUN_00255d34(uVar11);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003195ac  margelo::nitro::rive::HybridViewModelArtboardPropertySpec::loadHybridMethods =====

/* virtual thunk to margelo::nitro::rive::HybridViewModelArtboardPropertySpec::loadHybridMethods()
    */

void __thiscall
margelo::nitro::rive::HybridViewModelArtboardPropertySpec::loadHybridMethods
          (HybridViewModelArtboardPropertySpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    loadHybridMethods(this + *(long *)(*(long *)this + -0x30));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003195f0  margelo::nitro::rive::HybridViewModelArtboardPropertySpec::loadHybridMethods =====

/* virtual thunk to margelo::nitro::rive::HybridViewModelArtboardPropertySpec::loadHybridMethods()
    */

void __thiscall
margelo::nitro::rive::HybridViewModelArtboardPropertySpec::loadHybridMethods
          (HybridViewModelArtboardPropertySpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    loadHybridMethods(this + *(long *)(*(long *)this + -0x20));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00319634  FUN_00319634 =====

void FUN_00319634(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x319638);
  (*pcVar1)();
}


// ===== 00319638  FUN_00319638 =====

void FUN_00319638(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x31963c);
  (*pcVar1)();
}


// ===== 0031963c  FUN_0031963c =====

void FUN_0031963c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x319640);
  (*pcVar1)();
}


// ===== 00319640  FUN_00319640 =====

void FUN_00319640(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x319644);
  (*pcVar1)();
}


// ===== 00319644  margelo::nitro::rive::JHybridBindableArtboardSpec::JavaPart::getJHybridBindableArtboardSpec =====

/* margelo::nitro::rive::JHybridBindableArtboardSpec::JavaPart::getJHybridBindableArtboardSpec() */

void __thiscall
margelo::nitro::rive::JHybridBindableArtboardSpec::JavaPart::getJHybridBindableArtboardSpec
          (JavaPart *this)

{
  long lVar1;
  long lVar2;
  runtime_error *this_00;
  long *in_x8;
  long lVar3;
  long local_38;
  long *local_30;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  margelo::nitro::JHybridObject::JavaPart::getJHybridObject();
  if ((local_38 == 0) ||
     (lVar2 = __dynamic_cast(local_38,PTR_typeinfo_00395e60,PTR_typeinfo_00395e10,0xffffffffffffffff
                            ), lVar2 == 0)) {
    *in_x8 = 0;
    in_x8[1] = 0;
    this_00 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0031970c to 00319717 has its CatchHandler @ 0031974c */
    std::runtime_error::runtime_error
              (this_00,"Failed to downcast JHybridObject to JHybridBindableArtboardSpec!");
    if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* try { // try from 0031972c to 00319743 has its CatchHandler @ 00319744 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_00,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
  }
  else {
    *in_x8 = lVar2;
    in_x8[1] = (long)local_30;
    if (local_30 != (long *)0x0) {
      FUN_00259a00(1,local_30 + 1);
      if ((local_30 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,local_30 + 1), lVar2 == 0)) {
        (**(code **)(*local_30 + 0x10))(local_30);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00319788  FUN_00319788 =====

void FUN_00319788(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
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


// ===== 00319814  FUN_00319814 =====

void FUN_00319814(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
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


// ===== 003198a0  margelo::nitro::rive::JHybridBindableArtboardSpec::CxxPart::initHybrid =====

/* margelo::nitro::rive::JHybridBindableArtboardSpec::CxxPart::initHybrid(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridBindableArtboardSpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, void>::_javaobject*>) */

void __thiscall
margelo::nitro::rive::JHybridBindableArtboardSpec::CxxPart::initHybrid
          (undefined8 *param_1,CxxPart *this)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_003198f8(&local_30,*(undefined8 *)this);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003198f8  FUN_003198f8 =====

void FUN_003198f8(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  CxxPart *pCVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  CxxPart *local_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pCVar2 = (CxxPart *)operator_new(0x20);
                    /* try { // try from 00319930 to 00319937 has its CatchHandler @ 00319a14 */
  local_48 = param_2;
  margelo::nitro::JHybridObject::CxxPart::CxxPart(pCVar2,&local_48);
  *(undefined **)pCVar2 = PTR_vtable_00395e18 + 0x10;
                    /* try { // try from 00319948 to 0031994f has its CatchHandler @ 00319a0c */
  facebook::jni::detail::HybridData::create();
  uVar5 = *param_1;
                    /* try { // try from 00319954 to 0031996f has its CatchHandler @ 00319a28 */
  plVar3 = (long *)facebook::jni::Environment::current();
  lVar4 = (**(code **)(*plVar3 + 200))(plVar3,uVar5);
  facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 00319978 to 00319983 has its CatchHandler @ 003199dc */
  local_50 = pCVar2;
  local_40 = lVar4;
  FUN_00319a60(&local_40,&local_50);
  pCVar2 = local_50;
  local_50 = (CxxPart *)0x0;
  if (pCVar2 != (CxxPart *)0x0) {
    (**(code **)(*(long *)pCVar2 + 8))();
  }
  lVar4 = local_40;
  if (local_40 != 0) {
                    /* try { // try from 003199a4 to 003199b7 has its CatchHandler @ 00319a24 */
    plVar3 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb8))(plVar3,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00319a60  FUN_00319a60 =====

void FUN_00319a60(detail *param_1,HybridData *param_2)

{
  long lVar1;
  long *plVar2;
  long *local_38;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::getHolder<facebook::jni::detail::HybridData>(param_1,param_2);
  local_38 = *(long **)param_2;
  *(undefined8 *)param_2 = 0;
                    /* try { // try from 00319a94 to 00319a9f has its CatchHandler @ 00319af4 */
  facebook::jni::detail::HybridDestructor::setNativePointer(&local_30,&local_38);
  plVar2 = local_38;
  local_38 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (local_30 != 0) {
                    /* try { // try from 00319ac0 to 00319ad3 has its CatchHandler @ 00319b34 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00319b38  FUN_00319b38 =====

void FUN_00319b38(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00319b64 to 00319b77 has its CatchHandler @ 00319ba4 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar4);
  }
  *param_1 = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00319ba8  FUN_00319ba8 =====

void FUN_00319ba8(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = param_1[3];
  *param_1 = (long)(PTR_vtable_00395e68 + 0x10);
  if (lVar4 != 0) {
                    /* try { // try from 00319be4 to 00319bf7 has its CatchHandler @ 00319c50 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb0))(plVar2,lVar4);
  }
  param_1[3] = 0;
  if (param_1[2] == 0) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar3) {
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00319c54  FUN_00319c54 =====

void FUN_00319c54(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = param_1[3];
  *param_1 = (long)(PTR_vtable_00395e68 + 0x10);
  if (lVar4 != 0) {
                    /* try { // try from 00319c90 to 00319ca3 has its CatchHandler @ 00319ce0 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb0))(plVar2,lVar4);
  }
  param_1[3] = 0;
  if (param_1[2] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00319ce4  margelo::nitro::rive::JHybridBindableArtboardSpec::CxxPart::createHybridObject =====

/* margelo::nitro::rive::JHybridBindableArtboardSpec::CxxPart::createHybridObject(facebook::jni::basic_strong_ref<margelo::nitro::JHybridObject::JavaPart,
   facebook::jni::LocalReferenceAllocator> const&) */

void margelo::nitro::rive::JHybridBindableArtboardSpec::CxxPart::createHybridObject
               (basic_strong_ref *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  char cVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  runtime_error *this;
  bad_alloc *pbVar9;
  long *in_x1;
  long *in_x8;
  long lVar10;
  long *plVar11;
  long local_88;
  ulong local_80 [2];
  ulong local_70;
  long local_68;
  undefined8 local_60;
  long local_58;
  
  puVar1 = PTR_target_class_00395e30;
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (*in_x1 == 0) {
LAB_00319fa0:
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00319fac to 00319fb7 has its CatchHandler @ 0031a144 */
    param_1 = (basic_strong_ref *)
              std::runtime_error::runtime_error
                        (this,
                         "Failed to cast JHybridObject::JavaPart to JHybridBindableArtboardSpec::JavaPart!"
                        );
    if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 00319fc8 to 00319fdf has its CatchHandler @ 0031a140 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_0031a1e8;
  }
  if (((*PTR_target_class_00395e38 & 1) == 0) &&
     (param_1 = (basic_strong_ref *)__cxa_guard_acquire(PTR_target_class_00395e38),
     (int)param_1 != 0)) {
                    /* try { // try from 00319ff0 to 00319fff has its CatchHandler @ 0031a104 */
    facebook::jni::findClassStatic(PTR_kBaseName_00395e40);
    *(undefined8 *)puVar1 = local_60;
    param_1 = (basic_strong_ref *)__cxa_guard_release(PTR_target_class_00395e38);
  }
  if (*(long *)puVar1 == 0) {
    if (*(long *)(lVar3 + 0x28) != local_58) goto LAB_0031a1e8;
    FUN_00261580("java/lang/ClassCastException","Could not find class %s.",PTR_kBaseName_00395e40);
LAB_0031a044:
                    /* try { // try from 0031a044 to 0031a053 has its CatchHandler @ 0031a130 */
    param_1 = (basic_strong_ref *)FUN_002615d4(local_80,&local_68);
    uVar8 = (ulong)local_80 | 1;
    if ((local_80[0] & 1) != 0) {
      uVar8 = local_70;
    }
    if (*(long *)(lVar3 + 0x28) != local_58) goto LAB_0031a1e8;
                    /* try { // try from 0031a078 to 0031a093 has its CatchHandler @ 0031a118 */
    FUN_0026171c("java/lang/ClassCastException","Tried to cast from %s to %s.",uVar8,
                 PTR_kBaseName_00395e40);
  }
  else {
                    /* try { // try from 00319d3c to 00319d4f has its CatchHandler @ 0031a184 */
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5,*in_x1);
    local_68 = lVar6;
                    /* try { // try from 00319d58 to 00319d6f has its CatchHandler @ 0031a180 */
    plVar5 = (long *)facebook::jni::Environment::current();
    cVar4 = (**(code **)(*plVar5 + 0x58))(plVar5,lVar6,*(undefined8 *)puVar1);
    if (cVar4 == '\0') goto LAB_0031a044;
    lVar10 = *in_x1;
    if (lVar10 == 0) {
      local_88 = 0;
    }
    else {
                    /* try { // try from 00319d80 to 00319d9b has its CatchHandler @ 0031a188 */
      plVar5 = (long *)facebook::jni::Environment::current();
      local_88 = (**(code **)(*plVar5 + 200))(plVar5,lVar10);
      facebook::jni::throwPendingJniExceptionAsCppException();
      if (local_88 == 0) {
        pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
        param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar9);
        if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 0031a0ec to 0031a103 has its CatchHandler @ 0031a188 */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(pbVar9,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
        }
        goto LAB_0031a1e8;
      }
    }
    if (lVar6 != 0) {
                    /* try { // try from 00319db8 to 00319dcb has its CatchHandler @ 0031a17c */
      plVar5 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar5 + 0xb8))(plVar5,lVar6);
    }
    if (local_88 == 0) goto LAB_00319fa0;
                    /* try { // try from 00319dd0 to 00319dd7 has its CatchHandler @ 0031a16c */
    plVar5 = (long *)operator_new(0x98);
    puVar1 = PTR_vtable_00395e70;
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_003861a8;
    plVar11 = plVar5 + 3;
    *plVar11 = (long)(puVar1 + 0x10);
    puVar2 = PTR_PTR_00395e00;
                    /* try { // try from 00319e08 to 00319e23 has its CatchHandler @ 0031a164 */
    margelo::nitro::HybridObject::HybridObject((HybridObject *)(plVar5 + 5),PTR_PTR_00395e00 + 0x40)
    ;
    puVar1 = PTR_construction_vtable_00395e08 + 0x38;
    plVar5[5] = (long)(PTR_construction_vtable_00395e08 + 0xa8);
    plVar5[3] = (long)puVar1;
                    /* try { // try from 00319e3c to 00319e57 has its CatchHandler @ 0031a18c */
    plVar7 = (long *)facebook::jni::Environment::current();
    uVar8 = (**(code **)(*plVar7 + 200))(plVar7,local_88);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 00319e5c to 00319e6b has its CatchHandler @ 0031a154 */
    local_80[0] = uVar8;
    margelo::nitro::JHybridObject::JHybridObject((JHybridObject *)(plVar5 + 0x11),puVar2 + 0x50);
    uVar8 = local_80[0];
    if (local_80[0] != 0) {
                    /* try { // try from 00319e74 to 00319e87 has its CatchHandler @ 0031a178 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,uVar8);
    }
    puVar1 = PTR_vtable_00395df8 + 0x48;
    puVar2 = PTR_vtable_00395df8 + 0x140;
    plVar5[5] = (long)(PTR_vtable_00395df8 + 0xb8);
    *plVar11 = (long)puVar1;
    plVar5[0x11] = (long)puVar2;
                    /* try { // try from 00319ea8 to 00319ec3 has its CatchHandler @ 0031a194 */
    plVar7 = (long *)facebook::jni::Environment::current();
    lVar6 = (**(code **)(*plVar7 + 0xa8))(plVar7,local_88);
    param_1 = (basic_strong_ref *)facebook::jni::throwPendingJniExceptionAsCppException();
    if (lVar6 != 0) {
      plVar5[4] = lVar6;
      lVar6 = (long)plVar11 + *(long *)(plVar5[3] + -0x20);
      if ((lVar6 != -0x20) &&
         ((*(long *)(lVar6 + 0x28) == 0 || (*(long *)(*(long *)(lVar6 + 0x28) + 8) == -1)))) {
        FUN_00259a00(1,plVar5 + 1);
        FUN_00259a00(1,plVar5 + 2);
        lVar10 = *(long *)(lVar6 + 0x28);
        *(long *)(lVar6 + 0x20) = lVar6;
        *(long **)(lVar6 + 0x28) = plVar5;
        if (lVar10 != 0) {
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        param_1 = (basic_strong_ref *)FUN_00255510(0xffffffffffffffff,plVar5 + 1);
        if (param_1 == (basic_strong_ref *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          param_1 = (basic_strong_ref *)std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      *in_x8 = (long)plVar11 + *(long *)(plVar5[3] + -0x48);
      in_x8[1] = (long)plVar5;
      if (local_88 != 0) {
                    /* try { // try from 00319f5c to 00319f6f has its CatchHandler @ 0031a174 */
        plVar5 = (long *)facebook::jni::Environment::current();
        param_1 = (basic_strong_ref *)(**(code **)(*plVar5 + 0xb8))(plVar5,local_88);
      }
      if (*(long *)(lVar3 + 0x28) == local_58) {
        return;
      }
      goto LAB_0031a1e8;
    }
  }
  pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
  param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar9);
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 0031a0b4 to 0031a0cb has its CatchHandler @ 0031a194 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pbVar9,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
  }
LAB_0031a1e8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0031a1ec  FUN_0031a1ec =====

void FUN_0031a1ec(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 0031a218 to 0031a22b has its CatchHandler @ 0031a258 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar4);
  }
  *param_1 = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031a25c  FUN_0031a25c =====

void FUN_0031a25c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 0031a288 to 0031a29b has its CatchHandler @ 0031a2c8 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar4);
  }
  *param_1 = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031a2cc  FUN_0031a2cc =====

void FUN_0031a2cc(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_0031a6f0();
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(param_1 + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(param_1 + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031a340  FUN_0031a340 =====

void FUN_0031a340(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_0031a6f0();
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(param_1 + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(param_1 + 0x10));
  facebook::jsi::NativeState::~NativeState(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031a3bc  margelo::nitro::rive::JHybridBindableArtboardSpec::getArtboardName =====

/* margelo::nitro::rive::JHybridBindableArtboardSpec::getArtboardName() */

void __thiscall
margelo::nitro::rive::JHybridBindableArtboardSpec::getArtboardName
          (JHybridBindableArtboardSpec *this)

{
  long lVar1;
  int iVar2;
  _jobject *p_Var3;
  long lVar4;
  long *plVar5;
  _jmethodID *p_Var6;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039d598 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039d598), iVar2 != 0)) {
                    /* try { // try from 0031a474 to 0031a48b has its CatchHandler @ 0031a4a0 */
    FUN_0031aa18(&local_40);
    DAT_0039d590 = facebook::jni::JClass::
                   getMethod<facebook::jni::basic_strong_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>()>
                             ((JClass *)&local_40,"getArtboardName");
    __cxa_guard_release(&DAT_0039d598);
  }
  p_Var6 = *(_jmethodID **)(this + 8);
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  lVar4 = _JNIEnv::CallObjectMethod(p_Var3,p_Var6,DAT_0039d590);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_40 = lVar4;
                    /* try { // try from 0031a418 to 0031a423 has its CatchHandler @ 0031a4b4 */
  facebook::jni::JString::toStdString();
  lVar4 = local_40;
  if (local_40 != 0) {
                    /* try { // try from 0031a42c to 0031a43f has its CatchHandler @ 0031a4dc */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031a4e0  FUN_0031a4e0 =====

void FUN_0031a4e0(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_0031a6f0(this);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031a560  FUN_0031a560 =====

void FUN_0031a560(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_0031a6f0(this);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  facebook::jsi::NativeState::~NativeState(this);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031a5e8  FUN_0031a5e8 =====

void FUN_0031a5e8(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_0031a6f0(this);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031a668  FUN_0031a668 =====

void FUN_0031a668(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_0031a6f0(this);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  facebook::jsi::NativeState::~NativeState(this);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031a6f0  FUN_0031a6f0 =====

void FUN_0031a6f0(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined ***pppuVar3;
  long *plVar4;
  long lVar5;
  undefined **local_70;
  long *plStack_68;
  long *local_50;
  long local_38;
  
  puVar2 = PTR_vtable_00395df8;
  local_50 = (long *)&local_70;
  pppuVar3 = &local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1[2] = (long)(PTR_vtable_00395df8 + 0xb8);
  param_1[0xe] = (long)(puVar2 + 0x140);
  *param_1 = (long)(puVar2 + 0x48);
  local_70 = &PTR_FUN_00386128;
  plStack_68 = param_1;
                    /* try { // try from 0031a748 to 0031a74f has its CatchHandler @ 0031a7c4 */
  facebook::jni::ThreadScope::WithClassLoader((function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar5 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_0031a77c;
    lVar5 = 5;
    pppuVar3 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar3 + lVar5 * 8))();
LAB_0031a77c:
  lVar5 = param_1[1];
  if (lVar5 != 0) {
                    /* try { // try from 0031a784 to 0031a797 has its CatchHandler @ 0031a7c8 */
    plVar4 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar4 + 0xb0))(plVar4,lVar5);
  }
  param_1[1] = 0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031a7cc  FUN_0031a7cc =====

void FUN_0031a7cc(void *param_1)

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


// ===== 0031a804  FUN_0031a804 =====

void FUN_0031a804(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00386128;
  puVar2[1] = uVar4;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031a860  FUN_0031a860 =====

void FUN_0031a860(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00386128;
  param_2[1] = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031a8a8  FUN_0031a8a8 =====

void FUN_0031a8a8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031a8e0  FUN_0031a8e0 =====

void FUN_0031a8e0(void *param_1)

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


// ===== 0031a918  FUN_0031a918 =====

void FUN_0031a918(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(lVar5 + 8);
  if (lVar4 != 0) {
                    /* try { // try from 0031a944 to 0031a957 has its CatchHandler @ 0031a984 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb0))(plVar2,lVar4);
  }
  *(undefined8 *)(lVar5 + 8) = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031a988  FUN_0031a988 =====

void FUN_0031a988(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395e20) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0031a9d8  FUN_0031a9d8 =====

undefined * FUN_0031a9d8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395e28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031aa18  FUN_0031aa18 =====

void FUN_0031aa18(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00395e50 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00395e50), iVar2 != 0))
  {
                    /* try { // try from 0031aa88 to 0031aa9b has its CatchHandler @ 0031aaac */
    facebook::jni::findClassStatic(PTR_kBaseName_00395e58);
    __cxa_guard_release(PTR_cls_00395e50);
  }
  *param_1 = *(undefined8 *)PTR_cls_00395e48;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031aad8  facebook::jni::JClass::getMethod<facebook::jni::basic_strong_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>()> =====

/* facebook::jni::JMethod<facebook::jni::basic_strong_ref<facebook::jni::JString,
   facebook::jni::LocalReferenceAllocator> ()>
   facebook::jni::JClass::getMethod<facebook::jni::basic_strong_ref<facebook::jni::JString,
   facebook::jni::LocalReferenceAllocator> ()>(char const*) const */

long __thiscall
facebook::jni::JClass::
getMethod<facebook::jni::basic_strong_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>()>
          (JClass *this,char *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*(undefined8 *)this,param_1,PTR_kDescriptor_00394568);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031ab5c  FUN_0031ab5c =====

void FUN_0031ab5c(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_003861a8;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031aba0  FUN_0031aba0 =====

void FUN_0031aba0(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_003861a8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031abf8  FUN_0031abf8 =====

void FUN_0031abf8(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0031ac30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(param_1 + 0x18))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031ac38  FUN_0031ac38 =====

void FUN_0031ac38(void *param_1)

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


// ===== 0031ac70  margelo::nitro::rive::JHybridBindableArtboardSpec::CxxPart::registerNatives =====

/* margelo::nitro::rive::JHybridBindableArtboardSpec::CxxPart::registerNatives() */

void margelo::nitro::rive::JHybridBindableArtboardSpec::CxxPart::registerNatives(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  char *pcVar9;
  long *plVar10;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puStack_58 = PTR_kDescriptor_00385c08;
  local_60 = PTR_s_initHybrid_00385c00;
  local_50 = PTR_call_00385c10;
  pcVar9 = (char *)operator_new(0x40);
  uVar7 = s_Lcom_margelo_nitro_rive_HybridBi_001d6b5e._33_8_;
  uVar6 = s_Lcom_margelo_nitro_rive_HybridBi_001d6b5e._25_8_;
  uVar5 = s_Lcom_margelo_nitro_rive_HybridBi_001d6b5e._17_8_;
  uVar4 = s_Lcom_margelo_nitro_rive_HybridBi_001d6b5e._9_8_;
  uVar3 = s_Lcom_margelo_nitro_rive_HybridBi_001d6b5e._1_8_;
  uVar2 = CONCAT71(s_Lcom_margelo_nitro_rive_HybridBi_001d6b5e._42_7_,
                   s_Lcom_margelo_nitro_rive_HybridBi_001d6b5e[0x29]);
  pcVar9[0x39] = '\0';
  *(undefined8 *)(pcVar9 + 0x28) = uVar2;
  *(undefined8 *)(pcVar9 + 0x20) = uVar7;
  *(undefined8 *)(pcVar9 + 8) = uVar4;
  *(undefined8 *)pcVar9 = uVar3;
  *(undefined8 *)(pcVar9 + 0x18) = uVar6;
  *(undefined8 *)(pcVar9 + 0x10) = uVar5;
  uVar2 = CONCAT17(s_Lcom_margelo_nitro_rive_HybridBi_001d6b5e[0x31],
                   s_Lcom_margelo_nitro_rive_HybridBi_001d6b5e._42_7_);
  *(undefined8 *)(pcVar9 + 0x31) = s_Lcom_margelo_nitro_rive_HybridBi_001d6b5e._50_8_;
  *(undefined8 *)(pcVar9 + 0x29) = uVar2;
                    /* try { // try from 0031acd8 to 0031acdf has its CatchHandler @ 0031ad50 */
  facebook::jni::findClassLocal(pcVar9);
  operator_delete(pcVar9);
                    /* try { // try from 0031ace8 to 0031ad0f has its CatchHandler @ 0031ad64 */
  plVar10 = (long *)facebook::jni::Environment::current();
  iVar8 = (**(code **)(*plVar10 + 0x6b8))(plVar10,local_40,&local_60,1);
  facebook::jni::throwCppExceptionIf(iVar8 != 0);
  if (local_40 != 0) {
                    /* try { // try from 0031ad18 to 0031ad2b has its CatchHandler @ 0031ad60 */
    plVar10 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar10 + 0xb8))(plVar10,local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031ad8c  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridBindableArtboardSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridBindableArtboardSpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridBindableArtboardSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   (*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridBindableArtboardSpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, void>::_javaobject*>),
   &margelo::nitro::rive::JHybridBindableArtboardSpec::CxxPart::initHybrid,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridBindableArtboardSpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, void>::_javaobject*,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>>::call(_JNIEnv*, _jobject*) */

undefined8
facebook::jni::detail::
FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridBindableArtboardSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridBindableArtboardSpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridBindableArtboardSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>
::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  JniEnvCacher aJStack_48 [24];
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_48,param_1);
                    /* try { // try from 0031adb8 to 0031adc3 has its CatchHandler @ 0031adf4 */
  FUN_003198f8(&local_30,param_2);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031ae40  margelo::nitro::rive::JHybridBindableArtboardSpec::getArtboardName =====

/* virtual thunk to margelo::nitro::rive::JHybridBindableArtboardSpec::getArtboardName() */

void __thiscall
margelo::nitro::rive::JHybridBindableArtboardSpec::getArtboardName
          (JHybridBindableArtboardSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getArtboardName(this + *(long *)(*(long *)this + -0x30));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031ae84  margelo::nitro::rive::JHybridRiveFileSpec::JavaPart::getJHybridRiveFileSpec =====

/* margelo::nitro::rive::JHybridRiveFileSpec::JavaPart::getJHybridRiveFileSpec() */

void __thiscall
margelo::nitro::rive::JHybridRiveFileSpec::JavaPart::getJHybridRiveFileSpec(JavaPart *this)

{
  long lVar1;
  long lVar2;
  runtime_error *this_00;
  long *in_x8;
  long lVar3;
  long local_38;
  long *local_30;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  margelo::nitro::JHybridObject::JavaPart::getJHybridObject();
  if ((local_38 == 0) ||
     (lVar2 = __dynamic_cast(local_38,PTR_typeinfo_00395e60,PTR_typeinfo_00395e90,0xffffffffffffffff
                            ), lVar2 == 0)) {
    *in_x8 = 0;
    in_x8[1] = 0;
    this_00 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0031af4c to 0031af57 has its CatchHandler @ 0031af8c */
    std::runtime_error::runtime_error
              (this_00,"Failed to downcast JHybridObject to JHybridRiveFileSpec!");
    if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* try { // try from 0031af6c to 0031af83 has its CatchHandler @ 0031af84 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_00,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
  }
  else {
    *in_x8 = lVar2;
    in_x8[1] = (long)local_30;
    if (local_30 != (long *)0x0) {
      FUN_00259a00(1,local_30 + 1);
      if ((local_30 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,local_30 + 1), lVar2 == 0)) {
        (**(code **)(*local_30 + 0x10))(local_30);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031afc8  FUN_0031afc8 =====

void FUN_0031afc8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
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


// ===== 0031b054  margelo::nitro::rive::JHybridRiveFileSpec::CxxPart::initHybrid =====

/* margelo::nitro::rive::JHybridRiveFileSpec::CxxPart::initHybrid(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveFileSpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, void>::_javaobject*>) */

void __thiscall
margelo::nitro::rive::JHybridRiveFileSpec::CxxPart::initHybrid(undefined8 *param_1,CxxPart *this)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_0031b0ac(&local_30,*(undefined8 *)this);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031b0ac  FUN_0031b0ac =====

void FUN_0031b0ac(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  CxxPart *pCVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  CxxPart *local_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pCVar2 = (CxxPart *)operator_new(0x20);
                    /* try { // try from 0031b0e4 to 0031b0eb has its CatchHandler @ 0031b1c8 */
  local_48 = param_2;
  margelo::nitro::JHybridObject::CxxPart::CxxPart(pCVar2,&local_48);
  *(undefined **)pCVar2 = PTR_vtable_00395e98 + 0x10;
                    /* try { // try from 0031b0fc to 0031b103 has its CatchHandler @ 0031b1c0 */
  facebook::jni::detail::HybridData::create();
  uVar5 = *param_1;
                    /* try { // try from 0031b108 to 0031b123 has its CatchHandler @ 0031b1dc */
  plVar3 = (long *)facebook::jni::Environment::current();
  lVar4 = (**(code **)(*plVar3 + 200))(plVar3,uVar5);
  facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 0031b12c to 0031b137 has its CatchHandler @ 0031b190 */
  local_50 = pCVar2;
  local_40 = lVar4;
  FUN_00319a60(&local_40,&local_50);
  pCVar2 = local_50;
  local_50 = (CxxPart *)0x0;
  if (pCVar2 != (CxxPart *)0x0) {
    (**(code **)(*(long *)pCVar2 + 8))();
  }
  lVar4 = local_40;
  if (local_40 != 0) {
                    /* try { // try from 0031b158 to 0031b16b has its CatchHandler @ 0031b1d8 */
    plVar3 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb8))(plVar3,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031b214  FUN_0031b214 =====

void FUN_0031b214(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = param_1[3];
  *param_1 = (long)(PTR_vtable_00395e68 + 0x10);
  if (lVar4 != 0) {
                    /* try { // try from 0031b250 to 0031b263 has its CatchHandler @ 0031b2a0 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb0))(plVar2,lVar4);
  }
  param_1[3] = 0;
  if (param_1[2] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031b2a4  margelo::nitro::rive::JHybridRiveFileSpec::CxxPart::createHybridObject =====

/* margelo::nitro::rive::JHybridRiveFileSpec::CxxPart::createHybridObject(facebook::jni::basic_strong_ref<margelo::nitro::JHybridObject::JavaPart,
   facebook::jni::LocalReferenceAllocator> const&) */

void margelo::nitro::rive::JHybridRiveFileSpec::CxxPart::createHybridObject
               (basic_strong_ref *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  char cVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  runtime_error *this;
  bad_alloc *pbVar9;
  long *in_x1;
  long *in_x8;
  long lVar10;
  long *plVar11;
  long local_88;
  ulong local_80 [2];
  ulong local_70;
  long local_68;
  undefined8 local_60;
  long local_58;
  
  puVar1 = PTR_target_class_003960b8;
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (*in_x1 == 0) {
LAB_0031b560:
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0031b56c to 0031b577 has its CatchHandler @ 0031b704 */
    param_1 = (basic_strong_ref *)
              std::runtime_error::runtime_error
                        (this,
                         "Failed to cast JHybridObject::JavaPart to JHybridRiveFileSpec::JavaPart!")
    ;
    if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 0031b588 to 0031b59f has its CatchHandler @ 0031b700 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_0031b7a8;
  }
  if (((*PTR_target_class_003960c0 & 1) == 0) &&
     (param_1 = (basic_strong_ref *)__cxa_guard_acquire(PTR_target_class_003960c0),
     (int)param_1 != 0)) {
                    /* try { // try from 0031b5b0 to 0031b5bf has its CatchHandler @ 0031b6c4 */
    facebook::jni::findClassStatic(PTR_kBaseName_003960c8);
    *(undefined8 *)puVar1 = local_60;
    param_1 = (basic_strong_ref *)__cxa_guard_release(PTR_target_class_003960c0);
  }
  if (*(long *)puVar1 == 0) {
    if (*(long *)(lVar3 + 0x28) != local_58) goto LAB_0031b7a8;
    FUN_00261580("java/lang/ClassCastException","Could not find class %s.",PTR_kBaseName_003960c8);
LAB_0031b604:
                    /* try { // try from 0031b604 to 0031b613 has its CatchHandler @ 0031b6f0 */
    param_1 = (basic_strong_ref *)FUN_002615d4(local_80,&local_68);
    uVar8 = (ulong)local_80 | 1;
    if ((local_80[0] & 1) != 0) {
      uVar8 = local_70;
    }
    if (*(long *)(lVar3 + 0x28) != local_58) goto LAB_0031b7a8;
                    /* try { // try from 0031b638 to 0031b653 has its CatchHandler @ 0031b6d8 */
    FUN_0026171c("java/lang/ClassCastException","Tried to cast from %s to %s.",uVar8,
                 PTR_kBaseName_003960c8);
  }
  else {
                    /* try { // try from 0031b2fc to 0031b30f has its CatchHandler @ 0031b744 */
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5,*in_x1);
    local_68 = lVar6;
                    /* try { // try from 0031b318 to 0031b32f has its CatchHandler @ 0031b740 */
    plVar5 = (long *)facebook::jni::Environment::current();
    cVar4 = (**(code **)(*plVar5 + 0x58))(plVar5,lVar6,*(undefined8 *)puVar1);
    if (cVar4 == '\0') goto LAB_0031b604;
    lVar10 = *in_x1;
    if (lVar10 == 0) {
      local_88 = 0;
    }
    else {
                    /* try { // try from 0031b340 to 0031b35b has its CatchHandler @ 0031b748 */
      plVar5 = (long *)facebook::jni::Environment::current();
      local_88 = (**(code **)(*plVar5 + 200))(plVar5,lVar10);
      facebook::jni::throwPendingJniExceptionAsCppException();
      if (local_88 == 0) {
        pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
        param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar9);
        if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 0031b6ac to 0031b6c3 has its CatchHandler @ 0031b748 */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(pbVar9,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
        }
        goto LAB_0031b7a8;
      }
    }
    if (lVar6 != 0) {
                    /* try { // try from 0031b378 to 0031b38b has its CatchHandler @ 0031b73c */
      plVar5 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar5 + 0xb8))(plVar5,lVar6);
    }
    if (local_88 == 0) goto LAB_0031b560;
                    /* try { // try from 0031b390 to 0031b397 has its CatchHandler @ 0031b72c */
    plVar5 = (long *)operator_new(0x98);
    puVar1 = PTR_vtable_00395e70;
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_00386fd8;
    plVar11 = plVar5 + 3;
    *plVar11 = (long)(puVar1 + 0x10);
    puVar2 = PTR_PTR_00395e80;
                    /* try { // try from 0031b3c8 to 0031b3e3 has its CatchHandler @ 0031b724 */
    margelo::nitro::HybridObject::HybridObject((HybridObject *)(plVar5 + 5),PTR_PTR_00395e80 + 0x40)
    ;
    puVar1 = PTR_construction_vtable_00395e88 + 0x98;
    plVar5[5] = (long)(PTR_construction_vtable_00395e88 + 0x168);
    plVar5[3] = (long)puVar1;
                    /* try { // try from 0031b3fc to 0031b417 has its CatchHandler @ 0031b74c */
    plVar7 = (long *)facebook::jni::Environment::current();
    uVar8 = (**(code **)(*plVar7 + 200))(plVar7,local_88);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 0031b41c to 0031b42b has its CatchHandler @ 0031b714 */
    local_80[0] = uVar8;
    margelo::nitro::JHybridObject::JHybridObject((JHybridObject *)(plVar5 + 0x11),puVar2 + 0x50);
    uVar8 = local_80[0];
    if (local_80[0] != 0) {
                    /* try { // try from 0031b434 to 0031b447 has its CatchHandler @ 0031b738 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,uVar8);
    }
    puVar1 = PTR_vtable_00395e78 + 0xa8;
    puVar2 = PTR_vtable_00395e78 + 0x200;
    plVar5[5] = (long)(PTR_vtable_00395e78 + 0x178);
    *plVar11 = (long)puVar1;
    plVar5[0x11] = (long)puVar2;
                    /* try { // try from 0031b468 to 0031b483 has its CatchHandler @ 0031b754 */
    plVar7 = (long *)facebook::jni::Environment::current();
    lVar6 = (**(code **)(*plVar7 + 0xa8))(plVar7,local_88);
    param_1 = (basic_strong_ref *)facebook::jni::throwPendingJniExceptionAsCppException();
    if (lVar6 != 0) {
      plVar5[4] = lVar6;
      lVar6 = (long)plVar11 + *(long *)(plVar5[3] + -0x20);
      if ((lVar6 != -0x20) &&
         ((*(long *)(lVar6 + 0x28) == 0 || (*(long *)(*(long *)(lVar6 + 0x28) + 8) == -1)))) {
        FUN_00259a00(1,plVar5 + 1);
        FUN_00259a00(1,plVar5 + 2);
        lVar10 = *(long *)(lVar6 + 0x28);
        *(long *)(lVar6 + 0x20) = lVar6;
        *(long **)(lVar6 + 0x28) = plVar5;
        if (lVar10 != 0) {
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        param_1 = (basic_strong_ref *)FUN_00255510(0xffffffffffffffff,plVar5 + 1);
        if (param_1 == (basic_strong_ref *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          param_1 = (basic_strong_ref *)std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      *in_x8 = (long)plVar11 + *(long *)(plVar5[3] + -0xa8);
      in_x8[1] = (long)plVar5;
      if (local_88 != 0) {
                    /* try { // try from 0031b51c to 0031b52f has its CatchHandler @ 0031b734 */
        plVar5 = (long *)facebook::jni::Environment::current();
        param_1 = (basic_strong_ref *)(**(code **)(*plVar5 + 0xb8))(plVar5,local_88);
      }
      if (*(long *)(lVar3 + 0x28) == local_58) {
        return;
      }
      goto LAB_0031b7a8;
    }
  }
  pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
  param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar9);
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 0031b674 to 0031b68b has its CatchHandler @ 0031b754 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pbVar9,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
  }
LAB_0031b7a8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0031b7ac  FUN_0031b7ac =====

void FUN_0031b7ac(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_0031dbcc();
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(param_1 + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(param_1 + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031b820  FUN_0031b820 =====

void FUN_0031b820(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_0031dbcc();
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(param_1 + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(param_1 + 0x10));
  facebook::jsi::NativeState::~NativeState(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031b89c  margelo::nitro::rive::JHybridRiveFileSpec::getViewModelCount =====

/* margelo::nitro::rive::JHybridRiveFileSpec::getViewModelCount() */

ulong __thiscall
margelo::nitro::rive::JHybridRiveFileSpec::getViewModelCount(JHybridRiveFileSpec *this)

{
  long lVar1;
  int iVar2;
  _jobject *p_Var3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  _jmethodID *p_Var8;
  ulong uVar9;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039d5c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039d5c8), iVar2 != 0)) {
                    /* try { // try from 0031b978 to 0031b98f has its CatchHandler @ 0031b9a4 */
    FUN_0031def4(&local_40);
    DAT_0039d5c0 = FUN_00326344(&local_40,"getViewModelCount");
    __cxa_guard_release(&DAT_0039d5c8);
  }
  p_Var8 = *(_jmethodID **)(this + 8);
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  lVar4 = _JNIEnv::CallObjectMethod(p_Var3,p_Var8,DAT_0039d5c0);
  uVar5 = facebook::jni::throwPendingJniExceptionAsCppException();
  local_40 = lVar4;
  if (lVar4 == 0) {
    uVar7 = 0;
    uVar9 = 0;
  }
  else {
                    /* try { // try from 0031b8fc to 0031b903 has its CatchHandler @ 0031b9b8 */
    uVar9 = FUN_0025f988(&local_40);
                    /* try { // try from 0031b904 to 0031b91b has its CatchHandler @ 0031b9e0 */
    plVar6 = (long *)facebook::jni::Environment::current();
    uVar5 = (**(code **)(*plVar6 + 0xb8))(plVar6,lVar4);
    uVar7 = uVar9 & 0xffffffffffffff00;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar9 & 0xff | uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5,lVar4 != 0);
}


// ===== 0031b9e4  margelo::nitro::rive::JHybridRiveFileSpec::getArtboardCount =====

/* margelo::nitro::rive::JHybridRiveFileSpec::getArtboardCount() */

undefined1  [16] __thiscall
margelo::nitro::rive::JHybridRiveFileSpec::getArtboardCount(JHybridRiveFileSpec *this)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039d5d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039d5d8), iVar2 != 0)) {
                    /* try { // try from 0031ba78 to 0031ba8f has its CatchHandler @ 0031baa4 */
    FUN_0031def4(auStack_40);
    DAT_0039d5d0 = FUN_002620fc(auStack_40,"getArtboardCount");
    __cxa_guard_release(&DAT_0039d5d8);
  }
  uVar4 = *(undefined8 *)(this + 8);
  uVar3 = facebook::jni::Environment::current();
  auVar5._0_8_ = FUN_00262180(uVar3,uVar4,DAT_0039d5d0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    facebook::jni::throwPendingJniExceptionAsCppException();
    auVar5._8_8_ = 0;
    return auVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031bad0  margelo::nitro::rive::JHybridRiveFileSpec::getArtboardNames =====

/* margelo::nitro::rive::JHybridRiveFileSpec::getArtboardNames() */

void margelo::nitro::rive::JHybridRiveFileSpec::getArtboardNames(void)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  int iVar5;
  long in_x0;
  _jobject *p_Var6;
  long *plVar7;
  void *pvVar8;
  undefined8 uVar9;
  ulong *in_x8;
  long lVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong *puVar14;
  _jmethodID *p_Var15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  long local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  puVar16 = &
            _ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive27HybridViewModelInstanceSpecENSt6__ndk112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSF_FT0_DpT1_ERNSD_7RuntimeEPKSE_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue
  ;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((DAT_0039d5e8 & 1) == 0) goto code_r0x0031bdbc;
  while( true ) {
    p_Var15 = *(_jmethodID **)(in_x0 + 8);
    p_Var6 = (_jobject *)facebook::jni::Environment::current();
    in_x0 = _JNIEnv::CallObjectMethod(p_Var6,p_Var15,*(undefined8 *)(puVar16 + 0x5e0));
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 0031bb3c to 0031bb4f has its CatchHandler @ 0031be08 */
    plVar7 = (long *)facebook::jni::Environment::current();
    iVar5 = (**(code **)(*plVar7 + 0x558))(plVar7,in_x0);
    *in_x8 = 0;
    in_x8[1] = 0;
    puVar16 = (undefined1 *)(long)iVar5;
    in_x8[2] = 0;
                    /* try { // try from 0031bb60 to 0031bb6b has its CatchHandler @ 0031be00 */
    FUN_0031fad0();
    if (iVar5 == 0) break;
    puVar17 = (undefined1 *)0x0;
LAB_0031bb98:
                    /* try { // try from 0031bb98 to 0031bbaf has its CatchHandler @ 0031be3c */
    plVar7 = (long *)facebook::jni::Environment::current();
    local_70 = (**(code **)(*plVar7 + 0x568))(plVar7,in_x0,(ulong)puVar17 & 0xffffffff);
                    /* try { // try from 0031bbb4 to 0031bbbf has its CatchHandler @ 0031be28 */
    facebook::jni::JString::toStdString();
    puVar18 = (ulong *)in_x8[1];
    if (puVar18 < (ulong *)in_x8[2]) {
      puVar18[2] = (ulong)local_78;
      puVar18[1] = uStack_80;
      *puVar18 = local_88;
      in_x8[1] = (ulong)(puVar18 + 3);
LAB_0031bd1c:
      lVar11 = local_70;
      if (local_70 != 0) {
                    /* try { // try from 0031bd24 to 0031bd37 has its CatchHandler @ 0031be38 */
        plVar7 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar7 + 0xb8))(plVar7,lVar11);
      }
      puVar17 = puVar17 + 1;
      if (puVar17 == puVar16) break;
      goto LAB_0031bb98;
    }
    puVar19 = (ulong *)*in_x8;
    lVar11 = (long)puVar18 - (long)puVar19 >> 3;
    uVar20 = lVar11 * -0x5555555555555555 + 1;
    if (uVar20 < 0xaaaaaaaaaaaaaab) {
      lVar10 = (long)in_x8[2] - (long)puVar19 >> 3;
      uVar13 = lVar10 * 0x5555555555555556;
      if (uVar13 < uVar20 || uVar13 - uVar20 == 0) {
        uVar13 = uVar20;
      }
      if (0x555555555555554 < (ulong)(lVar10 * -0x5555555555555555)) {
        uVar13 = 0xaaaaaaaaaaaaaaa;
      }
      if (uVar13 == 0) {
        pvVar8 = (void *)0x0;
      }
      else {
        if (0xaaaaaaaaaaaaaaa < uVar13) goto LAB_0031bda0;
                    /* try { // try from 0031bc40 to 0031bc43 has its CatchHandler @ 0031be0c */
        pvVar8 = operator_new(uVar13 * 0x18);
      }
      pvVar4 = local_78;
      uVar3 = uStack_80;
      uVar20 = local_88;
      puVar12 = (ulong *)((long)pvVar8 + lVar11 * 8);
      uStack_80 = 0;
      local_78 = (void *)0x0;
      pvVar8 = (void *)((long)pvVar8 + uVar13 * 0x18);
      local_88 = 0;
      puVar1 = puVar12 + 3;
      puVar12[1] = uVar3;
      *puVar12 = uVar20;
      puVar12[2] = (ulong)pvVar4;
      if (puVar18 == puVar19) {
        *in_x8 = (ulong)puVar12;
        in_x8[1] = (ulong)puVar1;
        in_x8[2] = (ulong)pvVar8;
      }
      else {
        do {
          uVar13 = puVar18[-2];
          uVar20 = puVar18[-3];
          puVar12[-1] = puVar18[-1];
          puVar14 = puVar18 + -3;
          puVar12[-2] = uVar13;
          puVar12[-3] = uVar20;
          puVar12 = puVar12 + -3;
          puVar18[-2] = 0;
          puVar18[-1] = 0;
          puVar18[-3] = 0;
          puVar18 = puVar14;
        } while (puVar14 != puVar19);
        puVar18 = (ulong *)*in_x8;
        puVar19 = (ulong *)in_x8[1];
        *in_x8 = (ulong)puVar12;
        in_x8[1] = (ulong)puVar1;
        in_x8[2] = (ulong)pvVar8;
        while (puVar12 = puVar19, puVar12 != puVar18) {
          puVar19 = puVar12 + -3;
          if ((*puVar19 & 1) != 0) {
            operator_delete((void *)puVar12[-1]);
          }
        }
      }
      if (puVar18 != (ulong *)0x0) {
        operator_delete(puVar18);
      }
      in_x8[1] = (ulong)puVar1;
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      goto LAB_0031bd1c;
    }
    if (*(long *)(lVar2 + 0x28) != local_68) goto LAB_0031be6c;
                    /* try { // try from 0031bd9c to 0031bdb7 has its CatchHandler @ 0031be10 */
    FUN_00275ff4();
LAB_0031bda0:
    if (*(long *)(lVar2 + 0x28) != local_68) goto LAB_0031be6c;
    FUN_00260a2c();
code_r0x0031bdbc:
    iVar5 = __cxa_guard_acquire(&DAT_0039d5e8);
    if (iVar5 != 0) {
                    /* try { // try from 0031bdc8 to 0031bdd7 has its CatchHandler @ 0031bdec */
      FUN_0031def4(&local_88);
      uVar9 = FUN_00326258(&local_88);
      *(undefined8 *)(puVar16 + 0x5e0) = uVar9;
      __cxa_guard_release(&DAT_0039d5e8);
    }
  }
  if (in_x0 != 0) {
                    /* try { // try from 0031bd40 to 0031bd53 has its CatchHandler @ 0031be04 */
    plVar7 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb8))(plVar7,in_x0);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_0031be6c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031be70  margelo::nitro::rive::JHybridRiveFileSpec::viewModelByIndex =====

/* margelo::nitro::rive::JHybridRiveFileSpec::viewModelByIndex(double) */

void margelo::nitro::rive::JHybridRiveFileSpec::viewModelByIndex(double param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long in_x0;
  _jobject *p_Var4;
  long lVar5;
  long *plVar6;
  long *in_x8;
  _jmethodID *p_Var7;
  long *local_60;
  long lStack_58;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039d5f8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039d5f8), iVar3 != 0)) {
                    /* try { // try from 0031bf74 to 0031bf83 has its CatchHandler @ 0031bf98 */
    FUN_0031def4(&local_60);
    DAT_0039d5f0 = FUN_003261dc(&local_60);
    __cxa_guard_release(&DAT_0039d5f8);
  }
  p_Var7 = *(_jmethodID **)(in_x0 + 8);
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::CallObjectMethod(p_Var4,p_Var7,param_1,DAT_0039d5f0);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_50 = lVar5;
  if (lVar5 == 0) {
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 2) = 0;
  }
  else {
                    /* try { // try from 0031bedc to 0031bee7 has its CatchHandler @ 0031bfac */
    JHybridViewModelSpec::JavaPart::getJHybridViewModelSpec((JavaPart *)&local_50);
    lVar2 = local_50;
    lVar5 = lStack_58;
    plVar6 = local_60;
    local_60 = (long *)0x0;
    lStack_58 = 0;
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 2) = 0;
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)((long)plVar6 + *(long *)(*plVar6 + -0x98));
    }
    *in_x8 = (long)plVar6;
    in_x8[1] = lVar5;
    *(undefined1 *)(in_x8 + 2) = 1;
    if (local_50 != 0) {
                    /* try { // try from 0031bf1c to 0031bf2f has its CatchHandler @ 0031bfd4 */
      plVar6 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,lVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031bfd8  margelo::nitro::rive::JHybridRiveFileSpec::viewModelByName =====

/* margelo::nitro::rive::JHybridRiveFileSpec::viewModelByName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void margelo::nitro::rive::JHybridRiveFileSpec::viewModelByName(basic_string *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  _jobject *p_Var4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  byte *in_x1;
  long *in_x8;
  byte *pbVar8;
  _jmethodID *p_Var9;
  long *local_50;
  long lStack_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039d608 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039d608), iVar3 != 0)) {
                    /* try { // try from 0031c10c to 0031c11b has its CatchHandler @ 0031c134 */
    FUN_0031def4(&local_50);
    DAT_0039d600 = FUN_00326160(&local_50);
    __cxa_guard_release(&DAT_0039d608);
  }
  pbVar8 = *(byte **)(in_x1 + 0x10);
  p_Var9 = *(_jmethodID **)(param_1 + 8);
  if ((*in_x1 & 1) == 0) {
    pbVar8 = in_x1 + 1;
  }
  facebook::jni::make_jstring((char *)pbVar8);
  plVar7 = local_50;
                    /* try { // try from 0031c034 to 0031c053 has its CatchHandler @ 0031c160 */
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::CallObjectMethod(p_Var4,p_Var9,DAT_0039d600,plVar7);
  facebook::jni::throwPendingJniExceptionAsCppException();
  plVar7 = local_50;
  local_40 = lVar5;
  if (local_50 != (long *)0x0) {
                    /* try { // try from 0031c060 to 0031c073 has its CatchHandler @ 0031c15c */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,plVar7);
  }
  if (lVar5 == 0) {
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 2) = 0;
  }
  else {
                    /* try { // try from 0031c078 to 0031c083 has its CatchHandler @ 0031c148 */
    JHybridViewModelSpec::JavaPart::getJHybridViewModelSpec((JavaPart *)&local_40);
    lVar2 = local_40;
    lVar5 = lStack_48;
    plVar7 = local_50;
    local_50 = (long *)0x0;
    lStack_48 = 0;
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 2) = 0;
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)((long)plVar7 + *(long *)(*plVar7 + -0x98));
    }
    *in_x8 = (long)plVar7;
    in_x8[1] = lVar5;
    *(undefined1 *)(in_x8 + 2) = 1;
    if (local_40 != 0) {
                    /* try { // try from 0031c0b8 to 0031c0cb has its CatchHandler @ 0031c158 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,lVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031c188  margelo::nitro::rive::JHybridRiveFileSpec::defaultArtboardViewModel =====

/* margelo::nitro::rive::JHybridRiveFileSpec::defaultArtboardViewModel(std::__ndk1::optional<margelo::nitro::rive::ArtboardBy>
   const&) */

void margelo::nitro::rive::JHybridRiveFileSpec::defaultArtboardViewModel(optional *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  _jobject *p_Var4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long in_x1;
  long *in_x8;
  _jmethodID *p_Var8;
  long *local_50;
  long lStack_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039d618 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039d618), iVar3 != 0)) {
                    /* try { // try from 0031c2c0 to 0031c2cf has its CatchHandler @ 0031c2e8 */
    FUN_0031def4(&local_50);
    DAT_0039d610 = FUN_00326074(&local_50);
    __cxa_guard_release(&DAT_0039d618);
  }
  p_Var8 = *(_jmethodID **)(param_1 + 8);
  if (*(char *)(in_x1 + 0x38) == '\0') {
    local_50 = (long *)0x0;
  }
  else {
    FUN_003215c8(&local_50);
  }
  plVar7 = local_50;
                    /* try { // try from 0031c1ec to 0031c20b has its CatchHandler @ 0031c314 */
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::CallObjectMethod(p_Var4,p_Var8,DAT_0039d610,plVar7);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_40 = lVar5;
  if (plVar7 != (long *)0x0) {
                    /* try { // try from 0031c214 to 0031c227 has its CatchHandler @ 0031c310 */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,plVar7);
  }
  if (lVar5 == 0) {
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 2) = 0;
  }
  else {
                    /* try { // try from 0031c22c to 0031c237 has its CatchHandler @ 0031c2fc */
    JHybridViewModelSpec::JavaPart::getJHybridViewModelSpec((JavaPart *)&local_40);
    lVar2 = local_40;
    lVar5 = lStack_48;
    plVar7 = local_50;
    local_50 = (long *)0x0;
    lStack_48 = 0;
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 2) = 0;
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)((long)plVar7 + *(long *)(*plVar7 + -0x98));
    }
    *in_x8 = (long)plVar7;
    in_x8[1] = lVar5;
    *(undefined1 *)(in_x8 + 2) = 1;
    if (local_40 != 0) {
                    /* try { // try from 0031c26c to 0031c27f has its CatchHandler @ 0031c30c */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,lVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031c33c  margelo::nitro::rive::JHybridRiveFileSpec::updateReferencedAssets =====

/* margelo::nitro::rive::JHybridRiveFileSpec::updateReferencedAssets(margelo::nitro::rive::ReferencedAssetsType
   const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveFileSpec::updateReferencedAssets
          (JHybridRiveFileSpec *this,ReferencedAssetsType *param_1)

{
  long lVar1;
  int iVar2;
  _jobject *p_Var3;
  long *plVar4;
  _jmethodID *p_Var5;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039d628 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039d628), iVar2 != 0)) {
                    /* try { // try from 0031c3f0 to 0031c3ff has its CatchHandler @ 0031c418 */
    FUN_0031def4(&local_40);
    DAT_0039d620 = FUN_00325008(&local_40);
    __cxa_guard_release(&DAT_0039d628);
  }
  p_Var5 = *(_jmethodID **)(this + 8);
  FUN_00325084(&local_40,param_1);
                    /* try { // try from 0031c388 to 0031c3a3 has its CatchHandler @ 0031c430 */
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var3,p_Var5,DAT_0039d620,local_40);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (local_40 != 0) {
                    /* try { // try from 0031c3a8 to 0031c3bb has its CatchHandler @ 0031c42c */
    plVar4 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar4 + 0xb8))(plVar4,local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031c458  margelo::nitro::rive::JHybridRiveFileSpec::getViewModelNamesAsync =====

/* margelo::nitro::rive::JHybridRiveFileSpec::getViewModelNamesAsync() */

void margelo::nitro::rive::JHybridRiveFileSpec::getViewModelNamesAsync(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long in_x0;
  _jobject *p_Var5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined ***pppuVar11;
  long *plVar12;
  undefined8 *in_x8;
  _jmethodID *p_Var13;
  long local_98;
  undefined **local_90;
  undefined8 uStack_88;
  long local_80;
  undefined ***local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039d638 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039d638), iVar4 != 0)) {
                    /* try { // try from 0031c66c to 0031c683 has its CatchHandler @ 0031c740 */
    FUN_0031def4(&local_90);
    DAT_0039d630 = FUN_0031e0a0(&local_90,"getViewModelNamesAsync");
    __cxa_guard_release(&DAT_0039d638);
  }
  p_Var13 = *(_jmethodID **)(in_x0 + 8);
  p_Var5 = (_jobject *)facebook::jni::Environment::current();
  lVar6 = _JNIEnv::CallObjectMethod(p_Var5,p_Var13,DAT_0039d630);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_98 = lVar6;
                    /* try { // try from 0031c4bc to 0031c4c3 has its CatchHandler @ 0031c7e4 */
  ppuVar7 = (undefined **)operator_new(0x78);
  ppuVar7[0xe] = (undefined *)0x0;
  *in_x8 = ppuVar7;
  ppuVar7[3] = (undefined *)0x0;
  ppuVar7[2] = (undefined *)0x0;
  ppuVar7[5] = (undefined *)0x0;
  ppuVar7[4] = (undefined *)0x0;
  ppuVar7[7] = (undefined *)0x0;
  ppuVar7[6] = (undefined *)0x0;
  ppuVar7[9] = (undefined *)0x0;
  ppuVar7[8] = (undefined *)0x0;
  ppuVar7[0xb] = (undefined *)0x0;
  ppuVar7[10] = (undefined *)0x0;
  ppuVar7[0xd] = (undefined *)0x0;
  ppuVar7[0xc] = (undefined *)0x0;
  ppuVar7[1] = (undefined *)0x0;
  *ppuVar7 = (undefined *)0x0;
  local_90 = ppuVar7;
                    /* try { // try from 0031c4e8 to 0031c4ef has its CatchHandler @ 0031c7d4 */
  puVar8 = (undefined8 *)operator_new(0x20);
  puVar8[2] = 0;
  *puVar8 = &PTR____shared_weak_count_00386890;
  puVar8[1] = 0;
  puVar3 = PTR_hybridDataField_00396038;
  puVar8[3] = ppuVar7;
  in_x8[1] = puVar8;
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0031c6b8 to 0031c6bb has its CatchHandler @ 0031c724 */
    uVar9 = FUN_0031e19c(local_90);
    *(undefined8 *)PTR_hybridDataField_00396030 = uVar9;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0031c518 to 0031c52b has its CatchHandler @ 0031c7f0 */
  puVar2 = PTR_hybridDataField_00396030;
  uVar9 = facebook::jni::getHybridDataFromField
                    ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uStack_88 = *in_x8;
  local_80 = in_x8[1];
  if (local_80 != 0) {
    FUN_00259a00(1,local_80 + 8);
  }
  local_90 = &PTR_FUN_00386908;
                    /* try { // try from 0031c560 to 0031c567 has its CatchHandler @ 0031c794 */
  local_70 = &local_90;
  FUN_0031e2bc(uVar9,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar11 = &local_90;
LAB_0031c588:
    (*(code *)(*pppuVar11)[lVar6])();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar6 = 5;
    pppuVar11 = local_70;
    goto LAB_0031c588;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0031c700 to 0031c703 has its CatchHandler @ 0031c720 */
    uVar9 = FUN_0031e19c(local_90);
    *(undefined8 *)puVar2 = uVar9;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0031c59c to 0031c5ab has its CatchHandler @ 0031c7f0 */
  uVar10 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uVar9 = *in_x8;
  lVar6 = in_x8[1];
  if (lVar6 != 0) {
    FUN_00259a00(1,lVar6 + 8);
  }
  local_90 = &PTR_FUN_00386988;
                    /* try { // try from 0031c5e0 to 0031c5e7 has its CatchHandler @ 0031c754 */
  uStack_88 = uVar9;
  local_80 = lVar6;
  local_70 = &local_90;
  FUN_0031e5cc(uVar10,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar11 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_0031c614;
    lVar6 = 5;
    pppuVar11 = local_70;
  }
  (*(code *)(*pppuVar11)[lVar6])();
LAB_0031c614:
  lVar6 = local_98;
  if (local_98 != 0) {
                    /* try { // try from 0031c61c to 0031c62f has its CatchHandler @ 0031c7ec */
    plVar12 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar12 + 0xb8))(plVar12,lVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031c820  margelo::nitro::rive::JHybridRiveFileSpec::viewModelByNameAsync =====

/* margelo::nitro::rive::JHybridRiveFileSpec::viewModelByNameAsync(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::optional<bool>) */

void margelo::nitro::rive::JHybridRiveFileSpec::viewModelByNameAsync
               (undefined8 *param_1_00,long param_1,byte *param_3,uint param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  _jobject *p_Var5;
  long lVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined ***pppuVar12;
  long lVar13;
  byte *pbVar14;
  _jmethodID *p_Var15;
  long local_a0;
  long local_98;
  undefined **local_90;
  undefined8 uStack_88;
  long local_80;
  undefined ***local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039d648 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039d648), iVar4 != 0)) {
                    /* try { // try from 0031cab4 to 0031cac3 has its CatchHandler @ 0031cb84 */
    FUN_0031def4(&local_90);
    DAT_0039d640 = FUN_003235bc(&local_90);
    __cxa_guard_release(&DAT_0039d648);
  }
  pbVar14 = *(byte **)(param_3 + 0x10);
  p_Var15 = *(_jmethodID **)(param_1 + 8);
  if ((*param_3 & 1) == 0) {
    pbVar14 = param_3 + 1;
  }
  facebook::jni::make_jstring((char *)pbVar14);
  ppuVar8 = local_90;
  if ((param_4 & 0xff00) == 0) {
    local_a0 = 0;
  }
  else {
                    /* try { // try from 0031c890 to 0031c89b has its CatchHandler @ 0031cb98 */
    FUN_00323638(&local_a0,param_4);
  }
  lVar13 = local_a0;
                    /* try { // try from 0031c8ac to 0031c8cf has its CatchHandler @ 0031cc5c */
  p_Var5 = (_jobject *)facebook::jni::Environment::current();
  lVar6 = _JNIEnv::CallObjectMethod(p_Var5,p_Var15,DAT_0039d640,ppuVar8,lVar13);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_98 = lVar6;
  if (lVar13 != 0) {
                    /* try { // try from 0031c8d8 to 0031c8eb has its CatchHandler @ 0031cc40 */
    plVar7 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb8))(plVar7,lVar13);
  }
  if (local_90 != (undefined **)0x0) {
                    /* try { // try from 0031c8f4 to 0031c907 has its CatchHandler @ 0031cc3c */
    plVar7 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb8))(plVar7,local_90);
  }
                    /* try { // try from 0031c908 to 0031c90f has its CatchHandler @ 0031cc30 */
  ppuVar8 = (undefined **)operator_new(0x80);
  *param_1_00 = ppuVar8;
  ppuVar8[1] = (undefined *)0x0;
  *ppuVar8 = (undefined *)0x0;
  ppuVar8[3] = (undefined *)0x0;
  ppuVar8[2] = (undefined *)0x0;
  ppuVar8[5] = (undefined *)0x0;
  ppuVar8[4] = (undefined *)0x0;
  ppuVar8[7] = (undefined *)0x0;
  ppuVar8[6] = (undefined *)0x0;
  ppuVar8[9] = (undefined *)0x0;
  ppuVar8[8] = (undefined *)0x0;
  ppuVar8[0xb] = (undefined *)0x0;
  ppuVar8[10] = (undefined *)0x0;
  ppuVar8[0xd] = (undefined *)0x0;
  ppuVar8[0xc] = (undefined *)0x0;
  ppuVar8[0xf] = (undefined *)0x0;
  ppuVar8[0xe] = (undefined *)0x0;
  local_90 = ppuVar8;
                    /* try { // try from 0031c930 to 0031c937 has its CatchHandler @ 0031cc20 */
  puVar9 = (undefined8 *)operator_new(0x20);
  puVar9[2] = 0;
  *puVar9 = &PTR____shared_weak_count_00386a08;
  puVar9[1] = 0;
  puVar3 = PTR_hybridDataField_00396038;
  puVar9[3] = ppuVar8;
  param_1_00[1] = puVar9;
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0031cafc to 0031caff has its CatchHandler @ 0031cb68 */
    uVar10 = FUN_0031e19c(local_90);
    *(undefined8 *)PTR_hybridDataField_00396030 = uVar10;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0031c960 to 0031c973 has its CatchHandler @ 0031cc44 */
  puVar2 = PTR_hybridDataField_00396030;
  uVar10 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uStack_88 = *param_1_00;
  local_80 = param_1_00[1];
  if (local_80 != 0) {
    FUN_00259a00(1,local_80 + 8);
  }
  local_90 = &PTR_FUN_00386b40;
                    /* try { // try from 0031c9a8 to 0031c9af has its CatchHandler @ 0031cbe0 */
  local_70 = &local_90;
  FUN_0031e2bc(uVar10,&local_90);
  if (local_70 == &local_90) {
    lVar13 = 4;
    pppuVar12 = &local_90;
LAB_0031c9d0:
    (*(code *)(*pppuVar12)[lVar13])();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar13 = 5;
    pppuVar12 = local_70;
    goto LAB_0031c9d0;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0031cb44 to 0031cb47 has its CatchHandler @ 0031cb64 */
    uVar10 = FUN_0031e19c(local_90);
    *(undefined8 *)puVar2 = uVar10;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0031c9e4 to 0031c9f3 has its CatchHandler @ 0031cc44 */
  uVar11 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uVar10 = *param_1_00;
  lVar13 = param_1_00[1];
  if (lVar13 != 0) {
    FUN_00259a00(1,lVar13 + 8);
  }
  local_90 = &PTR_FUN_00386bc0;
                    /* try { // try from 0031ca28 to 0031ca2f has its CatchHandler @ 0031cba0 */
  uStack_88 = uVar10;
  local_80 = lVar13;
  local_70 = &local_90;
  FUN_0031e5cc(uVar11,&local_90);
  if (local_70 == &local_90) {
    lVar13 = 4;
    pppuVar12 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_0031ca5c;
    lVar13 = 5;
    pppuVar12 = local_70;
  }
  (*(code *)(*pppuVar12)[lVar13])();
LAB_0031ca5c:
  lVar13 = local_98;
  if (local_98 != 0) {
                    /* try { // try from 0031ca64 to 0031ca77 has its CatchHandler @ 0031cc38 */
    plVar7 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb8))(plVar7,lVar13);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


