// ===== 002b62dc  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<margelo::nitro::JSIConverter<std::__ndk1::variant<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>,void>::toJSI(facebook::jsi::Runtime&,std::__ndk1::variant<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>const&)::{lambda(auto:1_const&)#1}>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>const&> =====

/* decltype(auto)
   std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<margelo::nitro::JSIConverter<std::__ndk1::variant<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>,
   void>::toJSI(facebook::jsi::Runtime&,
   std::__ndk1::variant<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName> const&)::{lambda(auto:1
   const&)#1}>&&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>
   const&>(std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<margelo::nitro::JSIConverter<std::__ndk1::variant<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>,
   void>::toJSI(facebook::jsi::Runtime&,
   std::__ndk1::variant<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName> const&)::{lambda(auto:1
   const&)#1}>&&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName> const&) */

_func_decltype_auto * __thiscall
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__visitation::__variant::__value_visitor<margelo::nitro::JSIConverter<std::__ndk1::variant<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>,void>::toJSI(facebook::jsi::Runtime&,std::__ndk1::variant<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>const&)::_lambda(auto:1_const&)_1_>&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>const&>
          (__dispatcher<2ul> *this,__value_visitor *param_1,__base *param_2)

{
  ulong uVar1;
  __value_visitor *p_Var2;
  long lVar3;
  undefined8 uVar4;
  _func_decltype_auto *p_Var5;
  undefined4 *in_x8;
  Runtime *pRVar6;
  undefined4 local_80 [2];
  undefined8 local_78;
  basic_string local_70;
  undefined4 local_6f;
  undefined2 local_6b;
  undefined1 local_69;
  _func_decltype_auto *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pRVar6 = (Runtime *)**(undefined8 **)this;
  (**(code **)(*(long *)pRVar6 + 0x130))(&local_58,pRVar6);
  local_69 = 0;
  local_70 = (basic_string)0xc;
  local_6f = 0x614e7962;
  local_6b = 0x656d;
                    /* try { // try from 002b6344 to 002b634f has its CatchHandler @ 002b6410 */
  uVar4 = margelo::nitro::PropNameIDCache::get(pRVar6,&local_70);
  uVar1 = *(ulong *)(param_1 + 8);
  p_Var2 = *(__value_visitor **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    p_Var2 = param_1 + 1;
    uVar1 = (ulong)((byte)*param_1 >> 1);
  }
                    /* try { // try from 002b6374 to 002b637f has its CatchHandler @ 002b640c */
  (**(code **)(*(long *)pRVar6 + 0x110))(&local_50,pRVar6,p_Var2,uVar1);
  local_80[0] = 6;
  local_78 = local_50;
                    /* try { // try from 002b6398 to 002b63ab has its CatchHandler @ 002b63fc */
  (**(code **)(*(long *)pRVar6 + 0x1b0))(pRVar6,&local_58,uVar4,local_80);
  p_Var5 = (_func_decltype_auto *)facebook::jsi::Value::~Value((Value *)local_80);
  if (((byte)local_70 & 1) != 0) {
    operator_delete(local_60);
    p_Var5 = local_60;
  }
  *in_x8 = 7;
  *(undefined8 *)(in_x8 + 2) = local_58;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return p_Var5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b6454  FUN_002b6454 =====

void FUN_002b6454(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037f270;
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


// ===== 002b64c0  FUN_002b64c0 =====

void FUN_002b64c0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037f270;
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


// ===== 002b6528  FUN_002b6528 =====

undefined8 * FUN_002b6528(long param_1)

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
  *puVar4 = &PTR_FUN_0037f270;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002b6588 to 002b658b has its CatchHandler @ 002b65c4 */
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


// ===== 002b65ec  FUN_002b65ec =====

void FUN_002b65ec(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037f270;
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


// ===== 002b6684  FUN_002b6684 =====

void FUN_002b6684(long param_1)

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


// ===== 002b66e4  FUN_002b66e4 =====

void FUN_002b66e4(void *param_1)

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


// ===== 002b6740  FUN_002b6740 =====

void FUN_002b6740(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
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
  ulong uVar9;
  int *piVar10;
  code *pcVar11;
  undefined8 uVar12;
  long *local_198;
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined8 *local_a0 [3];
  long local_88;
  long *plStack_80;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  piVar10 = (int *)*param_5;
  uVar9 = *param_6;
  local_a0[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002b67a0 to 002b67af has its CatchHandler @ 002b6b60 */
  (**(code **)(*param_3 + 0x160))(&local_88,param_3,local_a0);
  if ((local_88 == 0) ||
     (lVar6 = __dynamic_cast(local_88,PTR_typeinfo_00394860,PTR_typeinfo_00394ec0,0xffffffffffffffff
                            ), lVar6 == 0)) {
    lVar6 = 0;
    local_198 = (long *)0x0;
    if (plStack_80 == (long *)0x0) goto joined_r0x002b6828;
  }
  else {
    if (plStack_80 == (long *)0x0) {
      local_198 = (long *)0x0;
      goto joined_r0x002b6828;
    }
    FUN_00259a00(1,plStack_80 + 1);
    local_198 = plStack_80;
  }
  lVar7 = FUN_00255510(0xffffffffffffffff,plStack_80 + 1);
  if (lVar7 == 0) {
    (**(code **)(*plStack_80 + 0x10))(plStack_80);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002b6828:
  if (local_a0[0] != (undefined8 *)0x0) {
    (**(code **)*local_a0[0])();
  }
  piVar2 = (int *)PTR_defaultValue_00395028;
  if (uVar9 < 2) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar3 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00395030 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_defaultValue_00395030), iVar5 != 0)) {
      *piVar2 = 0;
      __cxa_atexit(PTR__Value_00394848,piVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00395030);
    }
    plVar1 = (long *)(lVar6 + ((long)uVar3 >> 1));
    if ((uVar3 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *plVar1);
    }
    if (uVar9 != 0) {
      piVar2 = piVar10;
    }
    iVar5 = *piVar2;
    if (iVar5 == 0) {
      uVar12 = 0;
    }
    else {
                    /* try { // try from 002b6880 to 002b689f has its CatchHandler @ 002b6ba4 */
      uVar12 = facebook::jsi::Value::asNumber();
    }
    (*pcVar11)(plVar1,uVar12,iVar5 != 0);
    *param_1 = 0;
    if ((local_198 != (long *)0x0) &&
       (lVar6 = FUN_00255510(0xffffffffffffffff,local_198 + 1), lVar6 == 0)) {
      (**(code **)(*local_198 + 0x10))(local_198);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar4 + 0x28) == local_70) {
      return;
    }
  }
  else {
                    /* try { // try from 002b6918 to 002b6927 has its CatchHandler @ 002b6f94 */
    FUN_002a21c4(&local_88,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar6);
    pJVar8 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002b6938 to 002b694b has its CatchHandler @ 002b6f74 */
    std::__ndk1::operator+("`",(basic_string *)&local_88);
                    /* try { // try from 002b694c to 002b695f has its CatchHandler @ 002b6f5c */
    FUN_00263450(auStack_130,auStack_148,"` expected between ");
                    /* try { // try from 002b6960 to 002b696b has its CatchHandler @ 002b6f2c */
    std::__ndk1::to_string(0);
                    /* try { // try from 002b696c to 002b697b has its CatchHandler @ 002b6f08 */
    FUN_00264adc(auStack_118,auStack_130,auStack_160);
                    /* try { // try from 002b697c to 002b698f has its CatchHandler @ 002b6ee4 */
    FUN_00263450(auStack_100,auStack_118," and ");
                    /* try { // try from 002b6990 to 002b699b has its CatchHandler @ 002b6ec0 */
    std::__ndk1::to_string(1);
                    /* try { // try from 002b699c to 002b69ab has its CatchHandler @ 002b6e9c */
    FUN_00264adc(auStack_e8,auStack_100,auStack_178);
                    /* try { // try from 002b69ac to 002b69bf has its CatchHandler @ 002b6b80 */
    FUN_00263450(auStack_d0,auStack_e8," arguments, but received ");
                    /* try { // try from 002b69c0 to 002b69cb has its CatchHandler @ 002b6b3c */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 002b69cc to 002b69db has its CatchHandler @ 002b6b18 */
    FUN_00264adc(auStack_b8,auStack_d0,auStack_190);
                    /* try { // try from 002b69dc to 002b69ef has its CatchHandler @ 002b6af4 */
    FUN_00263450(local_a0,auStack_b8,&DAT_001d5be0);
                    /* try { // try from 002b69f4 to 002b6a2f has its CatchHandler @ 002b6a7c */
    facebook::jsi::JSError::JSError(pJVar8,param_3,local_a0);
    if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar8,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b6fbc  FUN_002b6fbc =====

void FUN_002b6fbc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395038) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002b700c  FUN_002b700c =====

undefined * FUN_002b700c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395040;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b704c  FUN_002b704c =====

void FUN_002b704c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037f1f0;
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


// ===== 002b70b8  FUN_002b70b8 =====

void FUN_002b70b8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037f1f0;
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


// ===== 002b7120  FUN_002b7120 =====

undefined8 * FUN_002b7120(long param_1)

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
  *puVar4 = &PTR_FUN_0037f1f0;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002b7180 to 002b7183 has its CatchHandler @ 002b71bc */
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


// ===== 002b71e4  FUN_002b71e4 =====

void FUN_002b71e4(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037f1f0;
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


// ===== 002b727c  FUN_002b727c =====

void FUN_002b727c(long param_1)

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


// ===== 002b72dc  FUN_002b72dc =====

void FUN_002b72dc(void *param_1)

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


// ===== 002b7338  FUN_002b7338 =====

void FUN_002b7338(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
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
  undefined1 auVar10 [16];
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
                    /* try { // try from 002b7394 to 002b73a3 has its CatchHandler @ 002b7904 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar4 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00394ec0,0xffffffffffffffff
                            ), lVar4 == 0)) {
    lVar4 = 0;
    plVar7 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x002b741c;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto joined_r0x002b741c;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar7 = plStack_78;
  }
  lVar5 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar5 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002b741c:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar8 == 0) {
    pcVar9 = *(code **)(param_2 + 0x20);
    uVar8 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18optionalIdEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSB_FT0_DpT1_ERNS9_7RuntimeEPKSA_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395010
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18optionalIdEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSB_FT0_DpT1_ERNS9_7RuntimeEPKSA_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395010
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18optionalIdEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSB_FT0_DpT1_ERNS9_7RuntimeEPKSA_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395008
       , iVar3 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18optionalIdEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSB_FT0_DpT1_ERNS9_7RuntimeEPKSA_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395008
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18optionalIdEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSB_FT0_DpT1_ERNS9_7RuntimeEPKSA_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395010
                         );
    }
    if ((uVar8 & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(lVar4 + ((long)uVar8 >> 1)));
    }
                    /* try { // try from 002b7454 to 002b7457 has its CatchHandler @ 002b7614 */
    auVar10 = (*pcVar9)();
    if ((auVar10 & (undefined1  [16])0xff) == (undefined1  [16])0x0) {
      *param_1 = 0;
    }
    else {
      *(long *)(param_1 + 2) = auVar10._0_8_;
      *param_1 = 3;
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
                    /* try { // try from 002b74ec to 002b74fb has its CatchHandler @ 002b7aa0 */
    FUN_002a21c4(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar4);
    pJVar6 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002b7508 to 002b751b has its CatchHandler @ 002b7a80 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 002b751c to 002b752f has its CatchHandler @ 002b7a68 */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002b7530 to 002b753b has its CatchHandler @ 002b7a38 */
    std::__ndk1::to_string(0);
                    /* try { // try from 002b753c to 002b754b has its CatchHandler @ 002b7a14 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002b754c to 002b755f has its CatchHandler @ 002b79f0 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002b7560 to 002b756b has its CatchHandler @ 002b79cc */
    std::__ndk1::to_string(uVar8);
                    /* try { // try from 002b756c to 002b757b has its CatchHandler @ 002b79a8 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 002b757c to 002b758f has its CatchHandler @ 002b7984 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002b7594 to 002b75cf has its CatchHandler @ 002b7924 */
    facebook::jsi::JSError::JSError(pJVar6,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar6,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b7ac8  FUN_002b7ac8 =====

void FUN_002b7ac8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395018) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002b7b18  FUN_002b7b18 =====

undefined * FUN_002b7b18(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395020;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b7b58  FUN_002b7b58 =====

void FUN_002b7b58(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037f170;
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


// ===== 002b7bc4  FUN_002b7bc4 =====

void FUN_002b7bc4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037f170;
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


// ===== 002b7c2c  FUN_002b7c2c =====

undefined8 * FUN_002b7c2c(long param_1)

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
  *puVar4 = &PTR_FUN_0037f170;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002b7c8c to 002b7c8f has its CatchHandler @ 002b7cc8 */
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


// ===== 002b7cf0  FUN_002b7cf0 =====

void FUN_002b7cf0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037f170;
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


// ===== 002b7d88  FUN_002b7d88 =====

void FUN_002b7d88(long param_1)

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


// ===== 002b7de8  FUN_002b7de8 =====

void FUN_002b7de8(void *param_1)

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


// ===== 002b7e44  FUN_002b7e44 =====

void FUN_002b7e44(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
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
  code *pcVar9;
  ulong uVar10;
  int *piVar11;
  double dVar12;
  long *local_198;
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined8 *local_a0 [3];
  long local_88;
  long *plStack_80;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  piVar11 = (int *)*param_5;
  uVar10 = *param_6;
  local_a0[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002b7ea4 to 002b7eb3 has its CatchHandler @ 002b8258 */
  (**(code **)(*param_3 + 0x160))(&local_88,param_3,local_a0);
  if ((local_88 == 0) ||
     (lVar6 = __dynamic_cast(local_88,PTR_typeinfo_00394860,PTR_typeinfo_00394ec0,0xffffffffffffffff
                            ), lVar6 == 0)) {
    lVar6 = 0;
    local_198 = (long *)0x0;
    if (plStack_80 == (long *)0x0) goto joined_r0x002b7f2c;
  }
  else {
    if (plStack_80 == (long *)0x0) {
      local_198 = (long *)0x0;
      goto joined_r0x002b7f2c;
    }
    FUN_00259a00(1,plStack_80 + 1);
    local_198 = plStack_80;
  }
  lVar7 = FUN_00255510(0xffffffffffffffff,plStack_80 + 1);
  if (lVar7 == 0) {
    (**(code **)(*plStack_80 + 0x10))(plStack_80);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002b7f2c:
  if (local_a0[0] != (undefined8 *)0x0) {
    (**(code **)*local_a0[0])();
  }
  piVar2 = (int *)PTR_defaultValue_00394fe8;
  if (uVar10 < 2) {
    pcVar9 = *(code **)(param_2 + 0x20);
    uVar3 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00394ff0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_defaultValue_00394ff0), iVar5 != 0)) {
      *piVar2 = 0;
      __cxa_atexit(PTR__Value_00394848,piVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00394ff0);
    }
    plVar1 = (long *)(lVar6 + ((long)uVar3 >> 1));
    if ((uVar3 & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *plVar1);
    }
    if (uVar10 != 0) {
      piVar2 = piVar11;
    }
    if (*piVar2 == 0) {
      uVar10 = 0;
    }
    else {
                    /* try { // try from 002b7f88 to 002b7fa3 has its CatchHandler @ 002b829c */
      dVar12 = (double)facebook::jsi::Value::asNumber();
      uVar10 = (ulong)(uint)(int)dVar12 | 0x100000000;
    }
    (*pcVar9)(plVar1,uVar10);
    *param_1 = 0;
    if ((local_198 != (long *)0x0) &&
       (lVar6 = FUN_00255510(0xffffffffffffffff,local_198 + 1), lVar6 == 0)) {
      (**(code **)(*local_198 + 0x10))(local_198);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar4 + 0x28) == local_70) {
      return;
    }
  }
  else {
                    /* try { // try from 002b801c to 002b802b has its CatchHandler @ 002b8694 */
    FUN_002a21c4(&local_88,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar6);
    pJVar8 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002b803c to 002b804f has its CatchHandler @ 002b8674 */
    std::__ndk1::operator+("`",(basic_string *)&local_88);
                    /* try { // try from 002b8050 to 002b8063 has its CatchHandler @ 002b865c */
    FUN_00263450(auStack_130,auStack_148,"` expected between ");
                    /* try { // try from 002b8064 to 002b806f has its CatchHandler @ 002b862c */
    std::__ndk1::to_string(0);
                    /* try { // try from 002b8070 to 002b807f has its CatchHandler @ 002b8608 */
    FUN_00264adc(auStack_118,auStack_130,auStack_160);
                    /* try { // try from 002b8080 to 002b8093 has its CatchHandler @ 002b85e4 */
    FUN_00263450(auStack_100,auStack_118," and ");
                    /* try { // try from 002b8094 to 002b809f has its CatchHandler @ 002b85c0 */
    std::__ndk1::to_string(1);
                    /* try { // try from 002b80a0 to 002b80af has its CatchHandler @ 002b859c */
    FUN_00264adc(auStack_e8,auStack_100,auStack_178);
                    /* try { // try from 002b80b0 to 002b80c3 has its CatchHandler @ 002b8278 */
    FUN_00263450(auStack_d0,auStack_e8," arguments, but received ");
                    /* try { // try from 002b80c4 to 002b80cf has its CatchHandler @ 002b8234 */
    std::__ndk1::to_string(uVar10);
                    /* try { // try from 002b80d0 to 002b80df has its CatchHandler @ 002b8210 */
    FUN_00264adc(auStack_b8,auStack_d0,auStack_190);
                    /* try { // try from 002b80e0 to 002b80f3 has its CatchHandler @ 002b81ec */
    FUN_00263450(local_a0,auStack_b8,&DAT_001d5be0);
                    /* try { // try from 002b80f8 to 002b8133 has its CatchHandler @ 002b8174 */
    facebook::jsi::JSError::JSError(pJVar8,param_3,local_a0);
    if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar8,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b86bc  FUN_002b86bc =====

void FUN_002b86bc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394ff8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002b870c  FUN_002b870c =====

undefined * FUN_002b870c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395000;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b874c  FUN_002b874c =====

void FUN_002b874c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037f0f0;
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


// ===== 002b87b8  FUN_002b87b8 =====

void FUN_002b87b8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037f0f0;
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


// ===== 002b8820  FUN_002b8820 =====

undefined8 * FUN_002b8820(long param_1)

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
  *puVar4 = &PTR_FUN_0037f0f0;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002b8880 to 002b8883 has its CatchHandler @ 002b88bc */
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


// ===== 002b88e4  FUN_002b88e4 =====

void FUN_002b88e4(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037f0f0;
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


// ===== 002b897c  FUN_002b897c =====

void FUN_002b897c(long param_1)

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


// ===== 002b89dc  FUN_002b89dc =====

void FUN_002b89dc(void *param_1)

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


// ===== 002b8a38  FUN_002b8a38 =====

void FUN_002b8a38(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
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
                    /* try { // try from 002b8a94 to 002b8aa3 has its CatchHandler @ 002b9008 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar4 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00394ec0,0xffffffffffffffff
                            ), lVar4 == 0)) {
    lVar4 = 0;
    plVar7 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x002b8b1c;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto joined_r0x002b8b1c;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar7 = plStack_78;
  }
  lVar5 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar5 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002b8b1c:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar8 == 0) {
    pcVar9 = *(code **)(param_2 + 0x20);
    uVar8 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18optionalINS3_3FitEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSC_FT0_DpT1_ERNSA_7RuntimeEPKSB_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394fd0
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18optionalINS3_3FitEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSC_FT0_DpT1_ERNSA_7RuntimeEPKSB_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394fd0
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18optionalINS3_3FitEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSC_FT0_DpT1_ERNSA_7RuntimeEPKSB_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394fc8
       , iVar3 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18optionalINS3_3FitEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSC_FT0_DpT1_ERNSA_7RuntimeEPKSB_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394fc8
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18optionalINS3_3FitEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSC_FT0_DpT1_ERNSA_7RuntimeEPKSB_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394fd0
                         );
    }
    if ((uVar8 & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(lVar4 + ((long)uVar8 >> 1)));
    }
                    /* try { // try from 002b8b54 to 002b8b57 has its CatchHandler @ 002b8d18 */
    uVar8 = (*pcVar9)();
    if ((uVar8 & 0xff00000000) == 0) {
      *param_1 = 0;
    }
    else {
      *(double *)(param_1 + 2) = (double)(int)uVar8;
      *param_1 = 3;
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
                    /* try { // try from 002b8bf0 to 002b8bff has its CatchHandler @ 002b91a4 */
    FUN_002a21c4(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar4);
    pJVar6 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002b8c0c to 002b8c1f has its CatchHandler @ 002b9184 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 002b8c20 to 002b8c33 has its CatchHandler @ 002b916c */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002b8c34 to 002b8c3f has its CatchHandler @ 002b913c */
    std::__ndk1::to_string(0);
                    /* try { // try from 002b8c40 to 002b8c4f has its CatchHandler @ 002b9118 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002b8c50 to 002b8c63 has its CatchHandler @ 002b90f4 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002b8c64 to 002b8c6f has its CatchHandler @ 002b90d0 */
    std::__ndk1::to_string(uVar8);
                    /* try { // try from 002b8c70 to 002b8c7f has its CatchHandler @ 002b90ac */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 002b8c80 to 002b8c93 has its CatchHandler @ 002b9088 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002b8c98 to 002b8cd3 has its CatchHandler @ 002b9028 */
    facebook::jsi::JSError::JSError(pJVar6,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar6,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b91cc  FUN_002b91cc =====

void FUN_002b91cc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394fd8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002b921c  FUN_002b921c =====

undefined * FUN_002b921c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394fe0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b925c  FUN_002b925c =====

void FUN_002b925c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037f070;
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


// ===== 002b92c8  FUN_002b92c8 =====

void FUN_002b92c8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037f070;
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


// ===== 002b9330  FUN_002b9330 =====

undefined8 * FUN_002b9330(long param_1)

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
  *puVar4 = &PTR_FUN_0037f070;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002b9390 to 002b9393 has its CatchHandler @ 002b93cc */
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


// ===== 002b93f4  FUN_002b93f4 =====

void FUN_002b93f4(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037f070;
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


// ===== 002b948c  FUN_002b948c =====

void FUN_002b948c(long param_1)

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


// ===== 002b94ec  FUN_002b94ec =====

void FUN_002b94ec(void *param_1)

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


// ===== 002b9548  FUN_002b9548 =====

void FUN_002b9548(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
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
  ulong uVar9;
  int *piVar10;
  code *pcVar11;
  long *local_198;
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined8 *local_a0 [3];
  long local_88;
  long *plStack_80;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  piVar10 = (int *)*param_5;
  uVar9 = *param_6;
  local_a0[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002b95a8 to 002b95b7 has its CatchHandler @ 002b9968 */
  (**(code **)(*param_3 + 0x160))(&local_88,param_3,local_a0);
  if ((local_88 == 0) ||
     (lVar6 = __dynamic_cast(local_88,PTR_typeinfo_00394860,PTR_typeinfo_00394ec0,0xffffffffffffffff
                            ), lVar6 == 0)) {
    lVar6 = 0;
    local_198 = (long *)0x0;
    if (plStack_80 == (long *)0x0) goto joined_r0x002b9630;
  }
  else {
    if (plStack_80 == (long *)0x0) {
      local_198 = (long *)0x0;
      goto joined_r0x002b9630;
    }
    FUN_00259a00(1,plStack_80 + 1);
    local_198 = plStack_80;
  }
  lVar7 = FUN_00255510(0xffffffffffffffff,plStack_80 + 1);
  if (lVar7 == 0) {
    (**(code **)(*plStack_80 + 0x10))(plStack_80);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002b9630:
  if (local_a0[0] != (undefined8 *)0x0) {
    (**(code **)*local_a0[0])();
  }
  piVar2 = (int *)PTR_defaultValue_00394fa8;
  if (uVar9 < 2) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar3 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00394fb0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_defaultValue_00394fb0), iVar5 != 0)) {
      *piVar2 = 0;
      __cxa_atexit(PTR__Value_00394848,piVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00394fb0);
    }
    plVar1 = (long *)(lVar6 + ((long)uVar3 >> 1));
    if ((uVar3 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *plVar1);
    }
    if (uVar9 != 0) {
      piVar2 = piVar10;
    }
    if (*piVar2 == 0) {
      uVar9 = 0;
    }
    else {
                    /* try { // try from 002b9688 to 002b96a7 has its CatchHandler @ 002b99ac */
      uVar9 = FUN_002b9e54(param_3);
      uVar9 = uVar9 & 0xffffffff | 0x100000000;
    }
    (*pcVar11)(plVar1,uVar9);
    *param_1 = 0;
    if ((local_198 != (long *)0x0) &&
       (lVar6 = FUN_00255510(0xffffffffffffffff,local_198 + 1), lVar6 == 0)) {
      (**(code **)(*local_198 + 0x10))(local_198);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar4 + 0x28) == local_70) {
      return;
    }
  }
  else {
                    /* try { // try from 002b9720 to 002b972f has its CatchHandler @ 002b9d9c */
    FUN_002a21c4(&local_88,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar6);
    pJVar8 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002b9740 to 002b9753 has its CatchHandler @ 002b9d7c */
    std::__ndk1::operator+("`",(basic_string *)&local_88);
                    /* try { // try from 002b9754 to 002b9767 has its CatchHandler @ 002b9d64 */
    FUN_00263450(auStack_130,auStack_148,"` expected between ");
                    /* try { // try from 002b9768 to 002b9773 has its CatchHandler @ 002b9d34 */
    std::__ndk1::to_string(0);
                    /* try { // try from 002b9774 to 002b9783 has its CatchHandler @ 002b9d10 */
    FUN_00264adc(auStack_118,auStack_130,auStack_160);
                    /* try { // try from 002b9784 to 002b9797 has its CatchHandler @ 002b9cec */
    FUN_00263450(auStack_100,auStack_118," and ");
                    /* try { // try from 002b9798 to 002b97a3 has its CatchHandler @ 002b9cc8 */
    std::__ndk1::to_string(1);
                    /* try { // try from 002b97a4 to 002b97b3 has its CatchHandler @ 002b9ca4 */
    FUN_00264adc(auStack_e8,auStack_100,auStack_178);
                    /* try { // try from 002b97b4 to 002b97c7 has its CatchHandler @ 002b9988 */
    FUN_00263450(auStack_d0,auStack_e8," arguments, but received ");
                    /* try { // try from 002b97c8 to 002b97d3 has its CatchHandler @ 002b9944 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 002b97d4 to 002b97e3 has its CatchHandler @ 002b9920 */
    FUN_00264adc(auStack_b8,auStack_d0,auStack_190);
                    /* try { // try from 002b97e4 to 002b97f7 has its CatchHandler @ 002b98fc */
    FUN_00263450(local_a0,auStack_b8,&DAT_001d5be0);
                    /* try { // try from 002b97fc to 002b9837 has its CatchHandler @ 002b9884 */
    facebook::jsi::JSError::JSError(pJVar8,param_3,local_a0);
    if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar8,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b9dc4  FUN_002b9dc4 =====

void FUN_002b9dc4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394fb8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002b9e14  FUN_002b9e14 =====

undefined * FUN_002b9e14(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394fc0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002b9e54  FUN_002b9e54 =====

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_002b9e54(long *param_1,IRuntime *param_2)

{
  long lVar1;
  logic_error *this;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  undefined4 uVar5;
  undefined1 auStack_80 [24];
  undefined8 *local_68 [3];
  basic_string local_50 [8];
  ulong local_48;
  byte *pbStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jsi::Value::asString(param_2);
                    /* try { // try from 002b9e90 to 002b9e9f has its CatchHandler @ 002ba1a4 */
  (**(code **)(*param_1 + 0x120))(local_50,param_1,local_68);
  if (local_68[0] != (undefined8 *)0x0) {
    (**(code **)*local_68[0])();
  }
  uVar3 = (ulong)((byte)local_50[0] >> 1);
  pbVar4 = (byte *)((ulong)local_50 | 1);
  if (((byte)local_50[0] & 1) != 0) {
    uVar3 = local_48;
    pbVar4 = pbStack_40;
  }
  if (uVar3 == 0) {
LAB_002ba0b8:
    this = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002ba0c4 to 002ba0d7 has its CatchHandler @ 002ba184 */
    std::__ndk1::operator+("Cannot convert \"",local_50);
                    /* try { // try from 002ba0d8 to 002ba0eb has its CatchHandler @ 002ba16c */
    FUN_00263450(local_68,auStack_80,"\" to enum Alignment - invalid value!");
                    /* try { // try from 002ba0f0 to 002ba137 has its CatchHandler @ 002ba138 */
    std::logic_error::logic_error(this,(basic_string *)local_68);
    *(undefined **)this = PTR_vtable_00394b38 + 0x10;
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394b30,PTR__invalid_argument_00394b20);
    }
  }
  else {
    uVar2 = 0xcbf29ce484222325;
    do {
      uVar3 = uVar3 - 1;
      uVar2 = (uVar2 ^ *pbVar4) * 0x100000001b3;
      pbVar4 = pbVar4 + 1;
    } while (uVar3 != 0);
    if ((long)uVar2 < 0x3a5f4e1bee02ec5f) {
      if ((long)uVar2 < -0x532a7d549efdd953) {
        if (uVar2 == 0x807904a886dd7025) {
          uVar5 = 3;
        }
        else {
          if (uVar2 != 0x9e09388f919e91c7) goto LAB_002ba0b8;
          uVar5 = 6;
        }
      }
      else if (uVar2 == 0xacd582ab610226ad) {
        uVar5 = 0;
      }
      else {
        if (uVar2 != 0x14d6f2935f58003e) goto LAB_002ba0b8;
        uVar5 = 5;
      }
    }
    else if ((long)uVar2 < 0x4e82e6cb78f005f8) {
      if (uVar2 == 0x3a5f4e1bee02ec5f) {
        uVar5 = 7;
      }
      else {
        if (uVar2 != 0x4685adaf7a904f95) goto LAB_002ba0b8;
        uVar5 = 1;
      }
    }
    else if (uVar2 == 0x4e82e6cb78f005f8) {
      uVar5 = 8;
    }
    else if (uVar2 == 0x6f4b7ec4dcaa8ac4) {
      uVar5 = 4;
    }
    else {
      if (uVar2 != 0x7aa08a677be67426) goto LAB_002ba0b8;
      uVar5 = 2;
    }
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(pbStack_40);
    }
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return uVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ba1dc  FUN_002ba1dc =====

void FUN_002ba1dc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037eff0;
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


// ===== 002ba248  FUN_002ba248 =====

void FUN_002ba248(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037eff0;
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


// ===== 002ba2b0  FUN_002ba2b0 =====

undefined8 * FUN_002ba2b0(long param_1)

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
  *puVar4 = &PTR_FUN_0037eff0;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002ba310 to 002ba313 has its CatchHandler @ 002ba34c */
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


// ===== 002ba374  FUN_002ba374 =====

void FUN_002ba374(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037eff0;
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


// ===== 002ba40c  FUN_002ba40c =====

void FUN_002ba40c(long param_1)

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


// ===== 002ba46c  FUN_002ba46c =====

void FUN_002ba46c(void *param_1)

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


// ===== 002ba4c8  FUN_002ba4c8 =====

void FUN_002ba4c8(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 ulong *param_6)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  JSError *pJVar7;
  logic_error *this;
  long *plVar8;
  ulong uVar9;
  code *pcVar10;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined8 local_110 [3];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  uint local_80;
  char cStack_7c;
  undefined2 uStack_7b;
  char cStack_79;
  char local_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 local_74;
  undefined1 local_73;
  undefined2 uStack_72;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar9 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002ba524 to 002ba533 has its CatchHandler @ 002baf10 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  lVar5 = CONCAT17(cStack_79,CONCAT25(uStack_7b,CONCAT14(cStack_7c,local_80)));
  plVar2 = (long *)CONCAT26(uStack_72,
                            CONCAT15(local_73,CONCAT14(local_74,CONCAT13(uStack_75,
                                                                         CONCAT12(uStack_76,
                                                                                  CONCAT11(uStack_77
                                                  ,local_78))))));
  if ((lVar5 == 0) ||
     (lVar5 = __dynamic_cast(lVar5,PTR_typeinfo_00394860,PTR_typeinfo_00394ec0,0xffffffffffffffff),
     lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plVar2 != (long *)0x0) goto LAB_002ba580;
  }
  else if (plVar2 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
    FUN_00259a00(1,plVar2 + 1);
    plVar8 = plVar2;
LAB_002ba580:
    lVar6 = FUN_00255510(0xffffffffffffffff,plVar2 + 1);
    if (lVar6 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar9 != 0) {
                    /* try { // try from 002ba984 to 002ba993 has its CatchHandler @ 002bb0ac */
    FUN_002a21c4(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002ba9a0 to 002ba9b3 has its CatchHandler @ 002bb08c */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 002ba9b4 to 002ba9c7 has its CatchHandler @ 002bb074 */
    FUN_00263450(auStack_f8,local_110,"` expected ");
                    /* try { // try from 002ba9c8 to 002ba9d3 has its CatchHandler @ 002bb044 */
    std::__ndk1::to_string(0);
                    /* try { // try from 002ba9d4 to 002ba9e3 has its CatchHandler @ 002bb020 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002ba9e4 to 002ba9f7 has its CatchHandler @ 002baffc */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002ba9f8 to 002baa03 has its CatchHandler @ 002bafd8 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 002baa04 to 002baa13 has its CatchHandler @ 002bafb4 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 002baa14 to 002baa27 has its CatchHandler @ 002baf90 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002baa2c to 002baa67 has its CatchHandler @ 002baf30 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
    goto LAB_002bb0d0;
  }
  pcVar10 = *(code **)(param_2 + 0x20);
  uVar9 = *(ulong *)(param_2 + 0x28);
  if (((*
        PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18optionalINS3_9AlignmentEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSC_FT0_DpT1_ERNSA_7RuntimeEPKSB_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394f90
       & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(
                                 PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18optionalINS3_9AlignmentEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSC_FT0_DpT1_ERNSA_7RuntimeEPKSB_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394f90
                                 ),
     puVar3 = 
     PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18optionalINS3_9AlignmentEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSC_FT0_DpT1_ERNSA_7RuntimeEPKSB_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394f88
     , iVar4 != 0)) {
    *(undefined4 *)
     PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18optionalINS3_9AlignmentEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSC_FT0_DpT1_ERNSA_7RuntimeEPKSB_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394f88
         = 0;
    __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
    __cxa_guard_release(
                       PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18optionalINS3_9AlignmentEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSC_FT0_DpT1_ERNSA_7RuntimeEPKSB_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394f90
                       );
  }
  if ((uVar9 & 1) != 0) {
    pcVar10 = *(code **)(pcVar10 + *(long *)(lVar5 + ((long)uVar9 >> 1)));
  }
                    /* try { // try from 002ba5e4 to 002ba5e7 has its CatchHandler @ 002bac18 */
  uVar9 = (*pcVar10)();
  if ((uVar9 & 0xff00000000) == 0) {
    *param_1 = 0;
  }
  else {
    iVar4 = (int)uVar9;
    if (iVar4 < 4) {
      if (iVar4 < 2) {
        if (iVar4 == 0) {
          local_80 = 0x706f740e;
          local_78 = '\0';
          cStack_7c = 'L';
          uStack_7b = 0x6665;
          cStack_79 = 't';
                    /* try { // try from 002ba7bc to 002ba7cf has its CatchHandler @ 002babf4 */
          (**(code **)(*param_3 + 0x110))(local_110,param_3,(ulong)&local_80 | 1,7);
        }
        else {
          if (iVar4 != 1) {
LAB_002baaac:
            this = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002baabc to 002baac7 has its CatchHandler @ 002babc8 */
            std::__ndk1::to_string(iVar4);
                    /* try { // try from 002baac8 to 002baadb has its CatchHandler @ 002babac */
            FUN_002b3788(local_98,"Cannot convert Alignment to JS - invalid value: ",auStack_b0);
                    /* try { // try from 002baadc to 002baaef has its CatchHandler @ 002bab78 */
            FUN_00263450(&local_80,local_98,&DAT_001d5be0);
                    /* try { // try from 002baaf4 to 002bab3b has its CatchHandler @ 002bab3c */
            std::logic_error::logic_error(this,(basic_string *)&local_80);
            *(undefined **)this = PTR_vtable_00394b38 + 0x10;
            if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              __cxa_throw(this,PTR_typeinfo_00394b30,PTR__invalid_argument_00394b20);
            }
            goto LAB_002bb0d0;
          }
          uStack_77 = 0x72;
          uStack_76 = 0;
          local_80._1_3_ = (undefined3)s_topCenter_001d72ac._0_8_;
          local_80 = CONCAT31(local_80._1_3_,0x12);
          cStack_7c = SUB81(s_topCenter_001d72ac._0_8_,3);
          uStack_7b = SUB82(s_topCenter_001d72ac._0_8_,4);
          cStack_79 = SUB81(s_topCenter_001d72ac._0_8_,6);
          local_78 = SUB81(s_topCenter_001d72ac._0_8_,7);
                    /* try { // try from 002ba6b0 to 002ba6c3 has its CatchHandler @ 002babfc */
          (**(code **)(*param_3 + 0x110))(local_110,param_3,(ulong)&local_80 | 1,9);
        }
      }
      else if (iVar4 == 2) {
        uStack_77 = 0;
        local_80 = 0x706f7410;
        cStack_7c = 'R';
        uStack_7b = 0x6769;
        cStack_79 = 'h';
        local_78 = 't';
                    /* try { // try from 002ba800 to 002ba813 has its CatchHandler @ 002babf0 */
        (**(code **)(*param_3 + 0x110))(local_110,param_3,(ulong)&local_80 | 1,8);
      }
      else {
        if (iVar4 != 3) goto LAB_002baaac;
        uStack_75 = 0;
        uStack_77 = 0x66;
        uStack_76 = 0x74;
        local_80._1_3_ = (undefined3)s_centerLeft_001d73b3._0_8_;
        local_80 = CONCAT31(local_80._1_3_,0x14);
        cStack_7c = SUB81(s_centerLeft_001d73b3._0_8_,3);
        uStack_7b = SUB82(s_centerLeft_001d73b3._0_8_,4);
        cStack_79 = SUB81(s_centerLeft_001d73b3._0_8_,6);
        local_78 = SUB81(s_centerLeft_001d73b3._0_8_,7);
                    /* try { // try from 002ba718 to 002ba72b has its CatchHandler @ 002babf8 */
        (**(code **)(*param_3 + 0x110))(local_110,param_3,(ulong)&local_80 | 1,10);
      }
LAB_002ba904:
      *param_1 = 6;
      *(undefined8 *)(param_1 + 2) = local_110[0];
    }
    else {
      if (5 < iVar4) {
        if (iVar4 == 6) {
          uStack_75 = 0;
          uStack_77 = 0x66;
          uStack_76 = 0x74;
          local_80._1_3_ = (undefined3)s_bottomLeft_001d765f._0_8_;
          local_80 = CONCAT31(local_80._1_3_,0x14);
          cStack_7c = SUB81(s_bottomLeft_001d765f._0_8_,3);
          uStack_7b = SUB82(s_bottomLeft_001d765f._0_8_,4);
          cStack_79 = SUB81(s_bottomLeft_001d765f._0_8_,6);
          local_78 = SUB81(s_bottomLeft_001d765f._0_8_,7);
                    /* try { // try from 002ba8a4 to 002ba8b7 has its CatchHandler @ 002babe4 */
          (**(code **)(*param_3 + 0x110))(local_110,param_3,(ulong)&local_80 | 1,10);
        }
        else if (iVar4 == 7) {
          local_73 = 0;
          uStack_77 = 0x6e;
          uStack_76 = 0x74;
          uStack_75 = 0x65;
          local_74 = 0x72;
          local_80._1_3_ = (undefined3)s_bottomCenter_001d72b6._0_8_;
          local_80 = CONCAT31(local_80._1_3_,0x18);
          cStack_7c = SUB81(s_bottomCenter_001d72b6._0_8_,3);
          uStack_7b = SUB82(s_bottomCenter_001d72b6._0_8_,4);
          cStack_79 = SUB81(s_bottomCenter_001d72b6._0_8_,6);
          local_78 = SUB81(s_bottomCenter_001d72b6._0_8_,7);
                    /* try { // try from 002ba8f0 to 002ba903 has its CatchHandler @ 002babe0 */
          (**(code **)(*param_3 + 0x110))(local_110,param_3,(ulong)&local_80 | 1,0xc);
        }
        else {
          if (iVar4 != 8) goto LAB_002baaac;
          local_74 = 0;
          uStack_77 = 0x67;
          uStack_76 = 0x68;
          uStack_75 = 0x74;
          local_80._1_3_ = (undefined3)s_bottomRight_001d6154._0_8_;
          local_80 = CONCAT31(local_80._1_3_,0x16);
          cStack_7c = SUB81(s_bottomRight_001d6154._0_8_,3);
          uStack_7b = SUB82(s_bottomRight_001d6154._0_8_,4);
          cStack_79 = SUB81(s_bottomRight_001d6154._0_8_,6);
          local_78 = SUB81(s_bottomRight_001d6154._0_8_,7);
                    /* try { // try from 002ba650 to 002ba663 has its CatchHandler @ 002babdc */
          (**(code **)(*param_3 + 0x110))(local_110,param_3,(ulong)&local_80 | 1,0xb);
        }
        goto LAB_002ba904;
      }
      if (iVar4 != 4) {
        if (iVar4 != 5) goto LAB_002baaac;
        local_74 = 0;
        uStack_77 = 0x67;
        uStack_76 = 0x68;
        uStack_75 = 0x74;
        local_80._1_3_ = (undefined3)s_centerRight_001d7653._0_8_;
        local_80 = CONCAT31(local_80._1_3_,0x16);
        cStack_7c = SUB81(s_centerRight_001d7653._0_8_,3);
        uStack_7b = SUB82(s_centerRight_001d7653._0_8_,4);
        cStack_79 = SUB81(s_centerRight_001d7653._0_8_,6);
        local_78 = SUB81(s_centerRight_001d7653._0_8_,7);
                    /* try { // try from 002ba774 to 002ba787 has its CatchHandler @ 002babe8 */
        (**(code **)(*param_3 + 0x110))(local_110,param_3,(ulong)&local_80 | 1,0xb);
        goto LAB_002ba904;
      }
      uStack_7b = 0x7265;
      local_80 = 0x6e65630c;
      cStack_7c = 't';
      cStack_79 = '\0';
                    /* try { // try from 002ba844 to 002ba85b has its CatchHandler @ 002babec */
      (**(code **)(*param_3 + 0x110))(local_110,param_3,(ulong)&local_80 | 1,6);
      *param_1 = 6;
      *(undefined8 *)(param_1 + 2) = local_110[0];
    }
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
  }
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
LAB_002bb0d0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002bb0d4  FUN_002bb0d4 =====

void FUN_002bb0d4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394f98) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002bb124  FUN_002bb124 =====

undefined * FUN_002bb124(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394fa0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002bb164  FUN_002bb164 =====

void FUN_002bb164(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037ef70;
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


// ===== 002bb1d0  FUN_002bb1d0 =====

void FUN_002bb1d0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037ef70;
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


// ===== 002bb238  FUN_002bb238 =====

undefined8 * FUN_002bb238(long param_1)

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
  *puVar4 = &PTR_FUN_0037ef70;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002bb298 to 002bb29b has its CatchHandler @ 002bb2d4 */
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


// ===== 002bb2fc  FUN_002bb2fc =====

void FUN_002bb2fc(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037ef70;
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


// ===== 002bb394  FUN_002bb394 =====

void FUN_002bb394(long param_1)

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


// ===== 002bb3f4  FUN_002bb3f4 =====

void FUN_002bb3f4(void *param_1)

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


// ===== 002bb450  FUN_002bb450 =====

void FUN_002bb450(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
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
                    /* try { // try from 002bb4b0 to 002bb4bf has its CatchHandler @ 002bba78 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar5 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00394ec0,0xffffffffffffffff
                            ), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x002bb538;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar8 = (long *)0x0;
      goto joined_r0x002bb538;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar8 = plStack_78;
  }
  lVar6 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002bb538:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar9 == 1) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00394f70 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_defaultValue_00394f70), puVar3 = PTR_defaultValue_00394f68,
       iVar4 != 0)) {
      *(undefined4 *)PTR_defaultValue_00394f68 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00394f70);
    }
    plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
    if ((uVar9 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *plVar1);
    }
                    /* try { // try from 002bb574 to 002bb583 has its CatchHandler @ 002bb780 */
    FUN_002bbccc(auStack_110,param_3,uVar10);
                    /* try { // try from 002bb584 to 002bb58f has its CatchHandler @ 002bb768 */
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
                    /* try { // try from 002bb634 to 002bb643 has its CatchHandler @ 002bbc14 */
    FUN_002a21c4(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002bb650 to 002bb663 has its CatchHandler @ 002bbbf4 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 002bb664 to 002bb677 has its CatchHandler @ 002bbbdc */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002bb678 to 002bb683 has its CatchHandler @ 002bbbac */
    std::__ndk1::to_string(1);
                    /* try { // try from 002bb684 to 002bb693 has its CatchHandler @ 002bbb88 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002bb694 to 002bb6a7 has its CatchHandler @ 002bbb64 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002bb6a8 to 002bb6b3 has its CatchHandler @ 002bbb40 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 002bb6b4 to 002bb6c3 has its CatchHandler @ 002bbb1c */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 002bb6c4 to 002bb6d7 has its CatchHandler @ 002bbaf8 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002bb6dc to 002bb717 has its CatchHandler @ 002bba98 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002bbc3c  FUN_002bbc3c =====

void FUN_002bbc3c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394f78) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002bbc8c  FUN_002bbc8c =====

undefined * FUN_002bbc8c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394f80;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002bbccc  FUN_002bbccc =====

void FUN_002bbccc(long *param_1,long *param_2,IRuntime *param_3)

{
  long lVar1;
  long lVar2;
  JSError *pJVar3;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined8 *local_80 [3];
  long local_68;
  long *plStack_60;
  undefined8 *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  facebook::jsi::Value::asObject(param_3);
                    /* try { // try from 002bbd10 to 002bbd1f has its CatchHandler @ 002bbf84 */
  (**(code **)(*param_2 + 0x160))(&local_68,param_2,&local_50);
  if ((local_68 == 0) ||
     (lVar2 = __dynamic_cast(local_68,PTR_typeinfo_00394860,PTR_typeinfo_00394870,0xffffffffffffffff
                            ), lVar2 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
                    /* try { // try from 002bbdc0 to 002bbdcf has its CatchHandler @ 002bbf6c */
    facebook::jsi::Value::toString(param_3);
                    /* try { // try from 002bbdd8 to 002bbde7 has its CatchHandler @ 002bbf4c */
    (**(code **)(*param_2 + 0x120))(&local_68,param_2,local_80);
    if (local_80[0] != (undefined8 *)0x0) {
      (**(code **)*local_80[0])();
    }
                    /* try { // try from 002bbdfc to 002bbe0f has its CatchHandler @ 002bbf34 */
    FUN_00264e5c(local_80,PTR_typeinfo_name_00394868,0);
    pJVar3 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002bbe1c to 002bbe2f has its CatchHandler @ 002bbf14 */
    std::__ndk1::operator+
              ("Downcasting failed - It has a different NativeState<T>!\n- Did you accidentally pass a different type?\n- Is react-native-nitro-modules linked multiple times? Ensure you don\'t have any duplicate symbols for `"
               ,(basic_string *)local_80);
                    /* try { // try from 002bbe30 to 002bbe43 has its CatchHandler @ 002bbefc */
    FUN_00263450(auStack_b0,auStack_c8,"` in your app\'s binary.");
                    /* try { // try from 002bbe44 to 002bbe53 has its CatchHandler @ 002bbecc */
    FUN_002bbfb8(auStack_98,&local_68,auStack_b0);
                    /* try { // try from 002bbe58 to 002bbe93 has its CatchHandler @ 002bbe94 */
    facebook::jsi::JSError::JSError(pJVar3,param_2,auStack_98);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar3,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
  else {
    *param_1 = lVar2;
    param_1[1] = (long)plStack_60;
    if (plStack_60 != (long *)0x0) {
      FUN_00259a00(1,plStack_60 + 1);
      lVar2 = FUN_00255510(0xffffffffffffffff,plStack_60 + 1);
      if (lVar2 == 0) {
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
    if (local_50 != (undefined8 *)0x0) {
      (**(code **)*local_50)();
    }
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002bbfb8  FUN_002bbfb8 =====

void FUN_002bbfb8(void)

{
  undefined8 uVar1;
  
  uVar1 = tpidr_el0;
  operator_new(0x30);
  FUN_00376208(" malformed DW_CFA_GNU_negative_offset_extended DWARF unwind, reg too big\n");
  return;
}


// ===== 002bc004  FUN_002bc004 =====

void FUN_002bc004(undefined1 param_1 [16],undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  char *__dest;
  byte bVar3;
  char *pcVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined8 *in_x9;
  undefined8 *unaff_x19;
  byte *unaff_x20;
  byte *unaff_x21;
  long unaff_x24;
  long unaff_x29;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong in_stack_00000008;
  ulong in_stack_00000010;
  char *in_stack_00000018;
  ulong in_stack_00000020;
  ulong in_stack_00000028;
  void *in_stack_00000030;
  ulong in_stack_00000040;
  ulong in_stack_00000048;
  void *in_stack_00000050;
  
  *(undefined8 **)(unaff_x29 + -0x10) = param_2;
  *(undefined1 *)((long)param_2 + 0x29) = 0;
  uVar12 = in_x9[1];
  uVar11 = *in_x9;
  uVar14 = in_x9[3];
  uVar13 = in_x9[2];
  *(long *)(unaff_x29 + -0x18) = param_1._8_8_;
  *(long *)(unaff_x29 + -0x20) = param_1._0_8_;
  uVar10 = *(undefined8 *)((long)in_x9 + 0x21);
  uVar9 = *(undefined8 *)((long)in_x9 + 0x19);
  param_2[1] = uVar12;
  *param_2 = uVar11;
  param_2[3] = uVar14;
  param_2[2] = uVar13;
  *(undefined8 *)((long)param_2 + 0x21) = uVar10;
  *(undefined8 *)((long)param_2 + 0x19) = uVar9;
                    /* try { // try from 002bc020 to 002bc02f has its CatchHandler @ 002bc318 */
  margelo::nitro::TypeInfo::demangleName((basic_string *)(unaff_x29 + -0x20),false);
  if ((*(byte *)(unaff_x29 + -0x20) & 1) != 0) {
    operator_delete(*(void **)(unaff_x29 + -0x10));
  }
  bVar3 = *unaff_x21;
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(unaff_x21 + 8);
  }
  uVar1 = __n + 0x10;
  if (0xffffffffffffffef < uVar1) {
    if (*(long *)(unaff_x24 + 0x28) != *(long *)(unaff_x29 + -8)) goto LAB_002bc358;
                    /* try { // try from 002bc270 to 002bc273 has its CatchHandler @ 002bc32c */
    uVar9 = FUN_00260a84();
                    /* catch() { ... } // from try @ 002bc1a0 with catch @ 002bc274 */
    if ((*(byte *)(unaff_x29 + -0x20) & 1) == 0) {
      if ((in_stack_00000040 & 1) != 0) goto LAB_002bc2c4;
LAB_002bc288:
      if ((in_stack_00000020 & 1) != 0) goto LAB_002bc2e4;
LAB_002bc290:
      if ((in_stack_00000008 & 1) != 0) goto LAB_002bc304;
LAB_002bc298:
      bVar3 = *(byte *)(unaff_x29 + -0x38);
    }
    else {
      operator_delete(*(void **)(unaff_x29 + -0x10));
      if ((in_stack_00000040 & 1) == 0) goto LAB_002bc288;
LAB_002bc2c4:
      operator_delete(in_stack_00000050);
      if ((in_stack_00000020 & 1) == 0) goto LAB_002bc290;
LAB_002bc2e4:
      operator_delete(in_stack_00000030);
      if ((in_stack_00000008 & 1) == 0) goto LAB_002bc298;
LAB_002bc304:
      operator_delete(in_stack_00000018);
      bVar3 = *(byte *)(unaff_x29 + -0x38);
    }
    if ((bVar3 & 1) != 0) {
      operator_delete(*(void **)(unaff_x29 + -0x28));
    }
    if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
      FUN_00255d34(uVar9);
    }
    goto LAB_002bc358;
  }
  if (uVar1 < 0x17) {
    in_stack_00000010 = 0;
    uVar7 = ((uint)uVar1 & 0xff) << 1;
    in_stack_00000018 = (char *)0x0;
    in_stack_00000008 = (ulong)(byte)uVar7;
  }
  else {
    uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 002bc08c to 002bc093 has its CatchHandler @ 002bc32c */
    in_stack_00000018 = (char *)operator_new(uVar2);
    in_stack_00000008 = uVar2 | 1;
    uVar7 = (uint)in_stack_00000008 & 0xff;
    in_stack_00000010 = uVar1;
  }
  uVar9 = s_Cannot_convert___001d6d63._0_8_;
  __dest = (char *)((long)&stack0x00000018 + 1);
  pcVar4 = (char *)((ulong)&stack0x00000008 | 1);
  if ((uVar7 & 1) != 0) {
    __dest = in_stack_00000018 + 0x10;
    pcVar4 = in_stack_00000018;
  }
  *(undefined8 *)(pcVar4 + 8) = s_Cannot_convert___001d6d63._8_8_;
  *(undefined8 *)pcVar4 = uVar9;
  if (__n != 0) {
    pbVar8 = *(byte **)(unaff_x21 + 0x10);
    if ((bVar3 & 1) == 0) {
      pbVar8 = unaff_x21 + 1;
    }
    memmove(__dest,pbVar8,__n);
  }
  __dest[__n] = '\0';
                    /* try { // try from 002bc0f0 to 002bc103 has its CatchHandler @ 002bc2f8 */
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&stack0x00000008,0x1d7691);
  in_stack_00000030 = (void *)puVar5[2];
  in_stack_00000028 = puVar5[1];
  in_stack_00000020 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  uVar1 = unaff_x29 - 0x38U | 1;
  if ((*(byte *)(unaff_x29 + -0x38) & 1) != 0) {
    uVar1 = *(ulong *)(unaff_x29 + -0x28);
  }
                    /* try { // try from 002bc13c to 002bc143 has its CatchHandler @ 002bc2d8 */
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&stack0x00000020,uVar1);
  in_stack_00000050 = (void *)puVar5[2];
  in_stack_00000048 = puVar5[1];
  in_stack_00000040 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
                    /* try { // try from 002bc15c to 002bc16f has its CatchHandler @ 002bc2b8 */
  puVar6 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     ((char *)&stack0x00000040,0x1d6339);
  uVar10 = puVar6[1];
  uVar9 = *puVar6;
  *(undefined8 *)(unaff_x29 + -0x10) = puVar6[2];
  *(undefined8 *)(unaff_x29 + -0x18) = uVar10;
  *(undefined8 *)(unaff_x29 + -0x20) = uVar9;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  pbVar8 = *(byte **)(unaff_x20 + 0x10);
  if ((*unaff_x20 & 1) == 0) {
    pbVar8 = unaff_x20 + 1;
  }
                    /* try { // try from 002bc1a0 to 002bc1a7 has its CatchHandler @ 002bc274 */
  puVar6 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     ((char *)(unaff_x29 + -0x20),(ulong)pbVar8);
  uVar9 = puVar6[2];
  uVar11 = puVar6[1];
  uVar10 = *puVar6;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  bVar3 = *(byte *)(unaff_x29 + -0x20);
  unaff_x19[1] = uVar11;
  *unaff_x19 = uVar10;
  unaff_x19[2] = uVar9;
  if ((bVar3 & 1) == 0) {
    if ((in_stack_00000040 & 1) != 0) goto LAB_002bc22c;
LAB_002bc1d0:
    if ((in_stack_00000020 & 1) != 0) goto LAB_002bc23c;
LAB_002bc1d8:
    if ((in_stack_00000008 & 1) != 0) goto LAB_002bc24c;
LAB_002bc1e0:
    bVar3 = *(byte *)(unaff_x29 + -0x38);
  }
  else {
    operator_delete(*(void **)(unaff_x29 + -0x10));
    if ((in_stack_00000040 & 1) == 0) goto LAB_002bc1d0;
LAB_002bc22c:
    operator_delete(in_stack_00000050);
    if ((in_stack_00000020 & 1) == 0) goto LAB_002bc1d8;
LAB_002bc23c:
    operator_delete(in_stack_00000030);
    if ((in_stack_00000008 & 1) == 0) goto LAB_002bc1e0;
LAB_002bc24c:
    operator_delete(in_stack_00000018);
    bVar3 = *(byte *)(unaff_x29 + -0x38);
  }
  if ((bVar3 & 1) != 0) {
    operator_delete(*(void **)(unaff_x29 + -0x28));
  }
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_002bc358:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002bc35c  FUN_002bc35c =====

void FUN_002bc35c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037eef0;
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


// ===== 002bc3c8  FUN_002bc3c8 =====

void FUN_002bc3c8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037eef0;
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


// ===== 002bc430  FUN_002bc430 =====

undefined8 * FUN_002bc430(long param_1)

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
  *puVar4 = &PTR_FUN_0037eef0;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002bc490 to 002bc493 has its CatchHandler @ 002bc4cc */
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


// ===== 002bc4f4  FUN_002bc4f4 =====

void FUN_002bc4f4(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037eef0;
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


// ===== 002bc58c  FUN_002bc58c =====

void FUN_002bc58c(long param_1)

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


// ===== 002bc5ec  FUN_002bc5ec =====

void FUN_002bc5ec(void *param_1)

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


// ===== 002bc648  FUN_002bc648 =====

void FUN_002bc648(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
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
                    /* try { // try from 002bc6a4 to 002bc6b3 has its CatchHandler @ 002bcc54 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar4 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00394ec0,0xffffffffffffffff
                            ), lVar4 == 0)) {
    lVar4 = 0;
    plVar7 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x002bc72c;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto joined_r0x002bc72c;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar7 = plStack_78;
  }
  lVar5 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar5 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002bc72c:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar8 == 0) {
    pcVar9 = *(code **)(param_2 + 0x20);
    uVar8 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk110shared_ptrINS3_18HybridRiveFileSpecEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSC_FT0_DpT1_ERNSA_7RuntimeEPKSB_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394f50
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk110shared_ptrINS3_18HybridRiveFileSpecEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSC_FT0_DpT1_ERNSA_7RuntimeEPKSB_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394f50
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk110shared_ptrINS3_18HybridRiveFileSpecEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSC_FT0_DpT1_ERNSA_7RuntimeEPKSB_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394f48
       , iVar3 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk110shared_ptrINS3_18HybridRiveFileSpecEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSC_FT0_DpT1_ERNSA_7RuntimeEPKSB_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394f48
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk110shared_ptrINS3_18HybridRiveFileSpecEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSC_FT0_DpT1_ERNSA_7RuntimeEPKSB_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394f50
                         );
    }
    if ((uVar8 & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(lVar4 + ((long)uVar8 >> 1)));
    }
                    /* try { // try from 002bc764 to 002bc76b has its CatchHandler @ 002bc95c */
    (*pcVar9)(&local_110);
                    /* try { // try from 002bc770 to 002bc77b has its CatchHandler @ 002bc944 */
    FUN_00281630(param_1,param_3,local_110);
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
                    /* try { // try from 002bc81c to 002bc82b has its CatchHandler @ 002bcdf0 */
    FUN_002a21c4(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar4);
    pJVar6 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002bc838 to 002bc84b has its CatchHandler @ 002bcdd0 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 002bc84c to 002bc85f has its CatchHandler @ 002bcdb8 */
    FUN_00263450(auStack_f8,&local_110,"` expected ");
                    /* try { // try from 002bc860 to 002bc86b has its CatchHandler @ 002bcd88 */
    std::__ndk1::to_string(0);
                    /* try { // try from 002bc86c to 002bc87b has its CatchHandler @ 002bcd64 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002bc87c to 002bc88f has its CatchHandler @ 002bcd40 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002bc890 to 002bc89b has its CatchHandler @ 002bcd1c */
    std::__ndk1::to_string(uVar8);
                    /* try { // try from 002bc89c to 002bc8ab has its CatchHandler @ 002bccf8 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 002bc8ac to 002bc8bf has its CatchHandler @ 002bccd4 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002bc8c4 to 002bc8ff has its CatchHandler @ 002bcc74 */
    facebook::jsi::JSError::JSError(pJVar6,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar6,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002bce18  FUN_002bce18 =====

void FUN_002bce18(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394f58) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002bce68  FUN_002bce68 =====

undefined * FUN_002bce68(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394f60;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002bcea8  FUN_002bcea8 =====

void FUN_002bcea8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037ee70;
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


// ===== 002bcf14  FUN_002bcf14 =====

void FUN_002bcf14(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037ee70;
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


// ===== 002bcf7c  FUN_002bcf7c =====

undefined8 * FUN_002bcf7c(long param_1)

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
  *puVar4 = &PTR_FUN_0037ee70;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002bcfdc to 002bcfdf has its CatchHandler @ 002bd018 */
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


// ===== 002bd040  FUN_002bd040 =====

void FUN_002bd040(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037ee70;
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


// ===== 002bd0d8  FUN_002bd0d8 =====

void FUN_002bd0d8(long param_1)

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


// ===== 002bd138  FUN_002bd138 =====

void FUN_002bd138(void *param_1)

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


// ===== 002bd194  FUN_002bd194 =====

void FUN_002bd194(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
                 ulong *param_6)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  JSError *pJVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  code *pcVar11;
  long *local_198;
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined8 *local_a0 [3];
  long local_88;
  long *plStack_80;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  piVar10 = (int *)*param_5;
  uVar9 = *param_6;
  local_a0[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002bd1f4 to 002bd203 has its CatchHandler @ 002bd5b8 */
  (**(code **)(*param_3 + 0x160))(&local_88,param_3,local_a0);
  if ((local_88 == 0) ||
     (lVar5 = __dynamic_cast(local_88,PTR_typeinfo_00394860,PTR_typeinfo_00394ec0,0xffffffffffffffff
                            ), lVar5 == 0)) {
    lVar5 = 0;
    local_198 = (long *)0x0;
    if (plStack_80 == (long *)0x0) goto joined_r0x002bd27c;
  }
  else {
    if (plStack_80 == (long *)0x0) {
      local_198 = (long *)0x0;
      goto joined_r0x002bd27c;
    }
    FUN_00259a00(1,plStack_80 + 1);
    local_198 = plStack_80;
  }
  lVar6 = FUN_00255510(0xffffffffffffffff,plStack_80 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plStack_80 + 0x10))(plStack_80);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002bd27c:
  if (local_a0[0] != (undefined8 *)0x0) {
    (**(code **)*local_a0[0])();
  }
  piVar2 = (int *)PTR_defaultValue_00394f28;
  if (uVar9 < 2) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar8 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00394f30 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_defaultValue_00394f30), iVar4 != 0)) {
      *piVar2 = 0;
      __cxa_atexit(PTR__Value_00394848,piVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00394f30);
    }
    plVar1 = (long *)(lVar5 + ((long)uVar8 >> 1));
    if ((uVar8 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *plVar1);
    }
    if (uVar9 != 0) {
      piVar2 = piVar10;
    }
    if (*piVar2 == 0) {
      uVar9 = 0;
      uVar8 = 0;
    }
    else {
                    /* try { // try from 002bd2d4 to 002bd2f7 has its CatchHandler @ 002bd5fc */
      uVar9 = facebook::jsi::Value::asBool();
      uVar9 = uVar9 & 1;
      uVar8 = 0x100;
    }
    (*pcVar11)(plVar1,uVar8 | uVar9);
    *param_1 = 0;
    if ((local_198 != (long *)0x0) &&
       (lVar5 = FUN_00255510(0xffffffffffffffff,local_198 + 1), lVar5 == 0)) {
      (**(code **)(*local_198 + 0x10))(local_198);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar3 + 0x28) == local_70) {
      return;
    }
  }
  else {
                    /* try { // try from 002bd370 to 002bd37f has its CatchHandler @ 002bd9ec */
    FUN_002a21c4(&local_88,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002bd390 to 002bd3a3 has its CatchHandler @ 002bd9cc */
    std::__ndk1::operator+("`",(basic_string *)&local_88);
                    /* try { // try from 002bd3a4 to 002bd3b7 has its CatchHandler @ 002bd9b4 */
    FUN_00263450(auStack_130,auStack_148,"` expected between ");
                    /* try { // try from 002bd3b8 to 002bd3c3 has its CatchHandler @ 002bd984 */
    std::__ndk1::to_string(0);
                    /* try { // try from 002bd3c4 to 002bd3d3 has its CatchHandler @ 002bd960 */
    FUN_00264adc(auStack_118,auStack_130,auStack_160);
                    /* try { // try from 002bd3d4 to 002bd3e7 has its CatchHandler @ 002bd93c */
    FUN_00263450(auStack_100,auStack_118," and ");
                    /* try { // try from 002bd3e8 to 002bd3f3 has its CatchHandler @ 002bd918 */
    std::__ndk1::to_string(1);
                    /* try { // try from 002bd3f4 to 002bd403 has its CatchHandler @ 002bd8f4 */
    FUN_00264adc(auStack_e8,auStack_100,auStack_178);
                    /* try { // try from 002bd404 to 002bd417 has its CatchHandler @ 002bd5d8 */
    FUN_00263450(auStack_d0,auStack_e8," arguments, but received ");
                    /* try { // try from 002bd418 to 002bd423 has its CatchHandler @ 002bd594 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 002bd424 to 002bd433 has its CatchHandler @ 002bd570 */
    FUN_00264adc(auStack_b8,auStack_d0,auStack_190);
                    /* try { // try from 002bd434 to 002bd447 has its CatchHandler @ 002bd54c */
    FUN_00263450(local_a0,auStack_b8,&DAT_001d5be0);
                    /* try { // try from 002bd44c to 002bd487 has its CatchHandler @ 002bd4d4 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_a0);
    if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002bda14  FUN_002bda14 =====

void FUN_002bda14(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394f38) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002bda64  FUN_002bda64 =====

undefined * FUN_002bda64(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394f40;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002bdaa4  FUN_002bdaa4 =====

void FUN_002bdaa4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037edf0;
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


// ===== 002bdb10  FUN_002bdb10 =====

void FUN_002bdb10(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037edf0;
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


// ===== 002bdb78  FUN_002bdb78 =====

undefined8 * FUN_002bdb78(long param_1)

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
  *puVar4 = &PTR_FUN_0037edf0;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002bdbd8 to 002bdbdb has its CatchHandler @ 002bdc14 */
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


// ===== 002bdc3c  FUN_002bdc3c =====

void FUN_002bdc3c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037edf0;
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


// ===== 002bdcd4  FUN_002bdcd4 =====

void FUN_002bdcd4(long param_1)

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


// ===== 002bdd34  FUN_002bdd34 =====

void FUN_002bdd34(void *param_1)

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


// ===== 002bdd90  FUN_002bdd90 =====

void FUN_002bdd90(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 ulong *param_6)

{
  long lVar1;
  undefined *puVar2;
  ushort uVar3;
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
                    /* try { // try from 002bddec to 002bddfb has its CatchHandler @ 002be360 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar5 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00394ec0,0xffffffffffffffff
                            ), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x002bde74;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar8 = (long *)0x0;
      goto joined_r0x002bde74;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar8 = plStack_78;
  }
  lVar6 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002bde74:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar9 == 0) {
    pcVar10 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18optionalIbEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSB_FT0_DpT1_ERNS9_7RuntimeEPKSA_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394f10
         & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18optionalIbEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSB_FT0_DpT1_ERNS9_7RuntimeEPKSA_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394f10
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18optionalIbEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSB_FT0_DpT1_ERNS9_7RuntimeEPKSA_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394f08
       , iVar4 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18optionalIbEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSB_FT0_DpT1_ERNS9_7RuntimeEPKSA_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394f08
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18optionalIbEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSB_FT0_DpT1_ERNS9_7RuntimeEPKSA_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394f10
                         );
    }
    if ((uVar9 & 1) != 0) {
      pcVar10 = *(code **)(pcVar10 + *(long *)(lVar5 + ((long)uVar9 >> 1)));
    }
                    /* try { // try from 002bdeac to 002bdeaf has its CatchHandler @ 002be070 */
    uVar3 = (*pcVar10)();
    if (uVar3 < 0x100) {
      *param_1 = 0;
    }
    else {
      *(char *)(param_1 + 2) = (char)uVar3;
      *param_1 = 2;
    }
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
                    /* try { // try from 002bdf48 to 002bdf57 has its CatchHandler @ 002be4fc */
    FUN_002a21c4(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002bdf64 to 002bdf77 has its CatchHandler @ 002be4dc */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 002bdf78 to 002bdf8b has its CatchHandler @ 002be4c4 */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002bdf8c to 002bdf97 has its CatchHandler @ 002be494 */
    std::__ndk1::to_string(0);
                    /* try { // try from 002bdf98 to 002bdfa7 has its CatchHandler @ 002be470 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002bdfa8 to 002bdfbb has its CatchHandler @ 002be44c */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002bdfbc to 002bdfc7 has its CatchHandler @ 002be428 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 002bdfc8 to 002bdfd7 has its CatchHandler @ 002be404 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 002bdfd8 to 002bdfeb has its CatchHandler @ 002be3e0 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002bdff0 to 002be02b has its CatchHandler @ 002be380 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002be524  FUN_002be524 =====

void FUN_002be524(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394f18) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002be574  FUN_002be574 =====

undefined * FUN_002be574(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394f20;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002be5b4  FUN_002be5b4 =====

void FUN_002be5b4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037ed70;
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


// ===== 002be620  FUN_002be620 =====

void FUN_002be620(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037ed70;
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


// ===== 002be688  FUN_002be688 =====

undefined8 * FUN_002be688(long param_1)

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
  *puVar4 = &PTR_FUN_0037ed70;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002be6e8 to 002be6eb has its CatchHandler @ 002be724 */
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


// ===== 002be74c  FUN_002be74c =====

void FUN_002be74c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037ed70;
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


// ===== 002be7e4  FUN_002be7e4 =====

void FUN_002be7e4(long param_1)

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


// ===== 002be844  FUN_002be844 =====

void FUN_002be844(void *param_1)

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


// ===== 002be8a0  FUN_002be8a0 =====

void FUN_002be8a0(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
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
  IRuntime *pIVar11;
  code *pcVar12;
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined8 *local_150 [3];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined8 *local_a8;
  long *plStack_a0;
  void *local_98;
  undefined8 *local_90;
  long *plStack_88;
  void *local_80;
  char local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  pIVar11 = (IRuntime *)*param_5;
  uVar9 = *param_6;
  local_a8 = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002be900 to 002be90f has its CatchHandler @ 002bf064 */
  (**(code **)(*param_3 + 0x160))(&local_90,param_3,&local_a8);
  plVar1 = plStack_88;
  if ((local_90 == (undefined8 *)0x0) ||
     (lVar6 = __dynamic_cast(local_90,PTR_typeinfo_00394860,PTR_typeinfo_00394ec0,0xffffffffffffffff
                            ), lVar6 == 0)) {
    lVar6 = 0;
    plVar10 = (long *)0x0;
    if (plVar1 == (long *)0x0) goto joined_r0x002be988;
  }
  else {
    if (plVar1 == (long *)0x0) {
      plVar10 = (long *)0x0;
      goto joined_r0x002be988;
    }
    FUN_00259a00(1,plVar1 + 1);
    plVar10 = plVar1;
  }
  lVar7 = FUN_00255510(0xffffffffffffffff,plVar1 + 1);
  if (lVar7 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002be988:
  if (local_a8 != (undefined8 *)0x0) {
    (**(code **)*local_a8)();
  }
  pIVar2 = (IRuntime *)PTR_defaultValue_00394ee8;
  if (uVar9 < 2) {
    pcVar12 = *(code **)(param_2 + 0x20);
    uVar3 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00394ef0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_defaultValue_00394ef0), iVar5 != 0)) {
      *(undefined4 *)pIVar2 = 0;
      __cxa_atexit(PTR__Value_00394848,pIVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00394ef0);
    }
    plVar1 = (long *)(lVar6 + ((long)uVar3 >> 1));
    if ((uVar3 & 1) != 0) {
      pcVar12 = *(code **)(pcVar12 + *plVar1);
    }
    if (uVar9 != 0) {
      pIVar2 = pIVar11;
    }
    if (*(int *)pIVar2 == 0) {
      local_90 = (undefined8 *)((ulong)local_90 & 0xffffffffffffff00);
      local_78 = '\0';
    }
    else {
                    /* try { // try from 002be9e8 to 002be9f3 has its CatchHandler @ 002bed44 */
      facebook::jsi::Value::asString(pIVar2);
                    /* try { // try from 002be9fc to 002bea0b has its CatchHandler @ 002bed20 */
      (**(code **)(*param_3 + 0x120))(&local_a8,param_3,local_150);
      if (local_150[0] != (undefined8 *)0x0) {
        (**(code **)*local_150[0])();
      }
      local_78 = '\x01';
      plStack_88 = plStack_a0;
      local_90 = local_a8;
      local_80 = local_98;
    }
                    /* try { // try from 002bea44 to 002bea4f has its CatchHandler @ 002bed50 */
    (*pcVar12)(plVar1,&local_90);
    if ((local_78 != '\0') && (((ulong)local_90 & 1) != 0)) {
      operator_delete(local_80);
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
                    /* try { // try from 002beadc to 002beaeb has its CatchHandler @ 002bf1a4 */
    FUN_002a21c4(&local_90,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar6);
    pJVar8 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002beaf8 to 002beb0b has its CatchHandler @ 002bf184 */
    std::__ndk1::operator+("`",(basic_string *)&local_90);
                    /* try { // try from 002beb0c to 002beb1f has its CatchHandler @ 002bf16c */
    FUN_00263450(auStack_138,local_150,"` expected between ");
                    /* try { // try from 002beb20 to 002beb2b has its CatchHandler @ 002bf13c */
    std::__ndk1::to_string(0);
                    /* try { // try from 002beb2c to 002beb3b has its CatchHandler @ 002bf118 */
    FUN_00264adc(auStack_120,auStack_138,auStack_168);
                    /* try { // try from 002beb3c to 002beb4f has its CatchHandler @ 002bf0f4 */
    FUN_00263450(auStack_108,auStack_120," and ");
                    /* try { // try from 002beb50 to 002beb5b has its CatchHandler @ 002bf0d0 */
    std::__ndk1::to_string(1);
                    /* try { // try from 002beb5c to 002beb6b has its CatchHandler @ 002bf0ac */
    FUN_00264adc(auStack_f0,auStack_108,auStack_180);
                    /* try { // try from 002beb6c to 002beb7f has its CatchHandler @ 002bf084 */
    FUN_00263450(auStack_d8,auStack_f0," arguments, but received ");
                    /* try { // try from 002beb80 to 002beb8b has its CatchHandler @ 002becfc */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 002beb8c to 002beb9b has its CatchHandler @ 002becd8 */
    FUN_00264adc(auStack_c0,auStack_d8,auStack_198);
                    /* try { // try from 002beb9c to 002bebaf has its CatchHandler @ 002becb4 */
    FUN_00263450(&local_a8,auStack_c0,&DAT_001d5be0);
                    /* try { // try from 002bebb4 to 002bebef has its CatchHandler @ 002bec3c */
    facebook::jsi::JSError::JSError(pJVar8,param_3,&local_a8);
    if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar8,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002bf1cc  FUN_002bf1cc =====

void FUN_002bf1cc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394ef8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002bf21c  FUN_002bf21c =====

undefined * FUN_002bf21c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394f00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002bf25c  FUN_002bf25c =====

void FUN_002bf25c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037ecf0;
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


// ===== 002bf2c8  FUN_002bf2c8 =====

void FUN_002bf2c8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037ecf0;
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


// ===== 002bf330  FUN_002bf330 =====

undefined8 * FUN_002bf330(long param_1)

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
  *puVar4 = &PTR_FUN_0037ecf0;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002bf390 to 002bf393 has its CatchHandler @ 002bf3cc */
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


// ===== 002bf3f4  FUN_002bf3f4 =====

void FUN_002bf3f4(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037ecf0;
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


// ===== 002bf48c  FUN_002bf48c =====

void FUN_002bf48c(long param_1)

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


// ===== 002bf4ec  FUN_002bf4ec =====

void FUN_002bf4ec(void *param_1)

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


// ===== 002bf548  FUN_002bf548 =====

void FUN_002bf548(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
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
  undefined1 auStack_148 [24];
  undefined8 local_130 [3];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined8 *local_a0 [3];
  basic_string local_88;
  undefined7 uStack_87;
  long *local_80;
  void *local_78;
  char local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar10 = *param_6;
  local_a0[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002bf5a4 to 002bf5b3 has its CatchHandler @ 002bfb8c */
  (**(code **)(*param_3 + 0x160))(&local_88,param_3,local_a0);
  plVar1 = local_80;
  if ((CONCAT71(uStack_87,local_88) == 0) ||
     (lVar6 = __dynamic_cast(CONCAT71(uStack_87,local_88),PTR_typeinfo_00394860,
                             PTR_typeinfo_00394ec0,0xffffffffffffffff), lVar6 == 0)) {
    lVar6 = 0;
    plVar9 = (long *)0x0;
    if (plVar1 == (long *)0x0) goto joined_r0x002bf62c;
  }
  else {
    if (plVar1 == (long *)0x0) {
      plVar9 = (long *)0x0;
      goto joined_r0x002bf62c;
    }
    FUN_00259a00(1,plVar1 + 1);
    plVar9 = plVar1;
  }
  lVar7 = FUN_00255510(0xffffffffffffffff,plVar1 + 1);
  if (lVar7 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002bf62c:
  if (local_a0[0] != (undefined8 *)0x0) {
    (**(code **)*local_a0[0])();
  }
  if (uVar10 == 0) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar10 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18optionalINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSH_FT0_DpT1_ERNSF_7RuntimeEPKSG_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394ed0
         & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18optionalINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSH_FT0_DpT1_ERNSF_7RuntimeEPKSG_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394ed0
                                   ),
       puVar4 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18optionalINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSH_FT0_DpT1_ERNSF_7RuntimeEPKSG_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394ec8
       , iVar5 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18optionalINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSH_FT0_DpT1_ERNSF_7RuntimeEPKSG_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394ec8
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar4,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveViewSpecENSt6__ndk18optionalINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSH_FT0_DpT1_ERNSF_7RuntimeEPKSG_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394ed0
                         );
    }
    if ((uVar10 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *(long *)(lVar6 + ((long)uVar10 >> 1)));
    }
                    /* try { // try from 002bf664 to 002bf66b has its CatchHandler @ 002bf894 */
    (*pcVar11)(&local_88);
    if (local_70 == '\0') {
      *param_1 = 0;
    }
    else {
      plVar1 = (long *)(ulong)((byte)local_88 >> 1);
      pvVar3 = (void *)((ulong)&local_88 | 1);
      if (((byte)local_88 & 1) != 0) {
        plVar1 = local_80;
        pvVar3 = local_78;
      }
                    /* try { // try from 002bf69c to 002bf6a7 has its CatchHandler @ 002bf870 */
      (**(code **)(*param_3 + 0x110))(local_130,param_3,pvVar3,plVar1);
      *param_1 = 6;
      *(undefined8 *)(param_1 + 2) = local_130[0];
      if ((local_70 != '\0') && (((byte)local_88 & 1) != 0)) {
        operator_delete(local_78);
      }
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
                    /* try { // try from 002bf748 to 002bf757 has its CatchHandler @ 002bfd28 */
    FUN_002a21c4(&local_88,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar6);
    pJVar8 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002bf764 to 002bf777 has its CatchHandler @ 002bfd08 */
    std::__ndk1::operator+("`",&local_88);
                    /* try { // try from 002bf778 to 002bf78b has its CatchHandler @ 002bfcf0 */
    FUN_00263450(auStack_100,auStack_118,"` expected ");
                    /* try { // try from 002bf78c to 002bf797 has its CatchHandler @ 002bfcc0 */
    std::__ndk1::to_string(0);
                    /* try { // try from 002bf798 to 002bf7a7 has its CatchHandler @ 002bfc9c */
    FUN_00264adc(auStack_e8,auStack_100,local_130);
                    /* try { // try from 002bf7a8 to 002bf7bb has its CatchHandler @ 002bfc78 */
    FUN_00263450(auStack_d0,auStack_e8," arguments, but received ");
                    /* try { // try from 002bf7bc to 002bf7c7 has its CatchHandler @ 002bfc54 */
    std::__ndk1::to_string(uVar10);
                    /* try { // try from 002bf7c8 to 002bf7d7 has its CatchHandler @ 002bfc30 */
    FUN_00264adc(auStack_b8,auStack_d0,auStack_148);
                    /* try { // try from 002bf7d8 to 002bf7eb has its CatchHandler @ 002bfc0c */
    FUN_00263450(local_a0,auStack_b8,&DAT_001d5be0);
                    /* try { // try from 002bf7f0 to 002bf82b has its CatchHandler @ 002bfbac */
    facebook::jsi::JSError::JSError(pJVar8,param_3,local_a0);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar8,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002bfd50  FUN_002bfd50 =====

void FUN_002bfd50(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394ed8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002bfda0  FUN_002bfda0 =====

undefined * FUN_002bfda0(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394ee0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002bfde0  margelo::nitro::rive::HybridRiveViewSpec::loadHybridMethods =====

/* virtual thunk to margelo::nitro::rive::HybridRiveViewSpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridRiveViewSpec::loadHybridMethods(HybridRiveViewSpec *this)

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


// ===== 002bfe24  FUN_002bfe24 =====

void FUN_002bfe24(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2bfe28);
  (*pcVar1)();
}


// ===== 002bfe28  FUN_002bfe28 =====

void FUN_002bfe28(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2bfe2c);
  (*pcVar1)();
}


// ===== 002bfe2c  FUN_002bfe2c =====

void FUN_002bfe2c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2bfe30);
  (*pcVar1)();
}


// ===== 002bfe30  FUN_002bfe30 =====

void FUN_002bfe30(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2bfe34);
  (*pcVar1)();
}


// ===== 002bfe34  margelo::nitro::rive::views::HybridRiveViewProps::HybridRiveViewProps =====

/* margelo::nitro::rive::views::HybridRiveViewProps::HybridRiveViewProps(facebook::react::PropsParserContext
   const&, margelo::nitro::rive::views::HybridRiveViewProps const&, facebook::react::RawProps
   const&) */

void __thiscall
margelo::nitro::rive::views::HybridRiveViewProps::HybridRiveViewProps
          (HybridRiveViewProps *this,PropsParserContext *param_1,HybridRiveViewProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  undefined ***pppuVar2;
  function *in_x4;
  long lVar3;
  undefined **local_80;
  RawProps *pRStack_78;
  long *local_60;
  long local_48;
  
  local_60 = (long *)&local_80;
  pppuVar2 = &local_80;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_80 = &PTR_FUN_00380300;
  pRStack_78 = (RawProps *)PTR_filterObjectKeys_00395368;
                    /* try { // try from 002bfe84 to 002bfe8f has its CatchHandler @ 002c0048 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if ((undefined ***)local_60 == &local_80) {
    lVar3 = 4;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_002bfebc;
    lVar3 = 5;
    pppuVar2 = (undefined ***)local_60;
  }
  (**(code **)((long)*pppuVar2 + lVar3 * 8))();
LAB_002bfebc:
  *(undefined8 *)this = *(undefined8 *)param_1;
                    /* try { // try from 002bfec8 to 002bfed3 has its CatchHandler @ 002c0040 */
  pRStack_78 = param_3;
  FUN_002c024c(this + 0x6e0,&local_80);
                    /* try { // try from 002bfed8 to 002bfee3 has its CatchHandler @ 002c0038 */
  pRStack_78 = param_3;
  FUN_002c04a4(this + 0x718,&local_80);
                    /* try { // try from 002bfee8 to 002bfef3 has its CatchHandler @ 002c0030 */
  pRStack_78 = param_3;
  FUN_002c06fc(this + 0x750,&local_80);
                    /* try { // try from 002bfef8 to 002bff03 has its CatchHandler @ 002c0028 */
  pRStack_78 = param_3;
  FUN_002c0acc(this + 0x768,&local_80);
                    /* try { // try from 002bff08 to 002bff13 has its CatchHandler @ 002c0020 */
  pRStack_78 = param_3;
  FUN_002c0eb8(this + 0x790,&local_80);
                    /* try { // try from 002bff18 to 002bff23 has its CatchHandler @ 002bffcc */
  pRStack_78 = param_3;
  FUN_002c1288(this + 0x7b0,&local_80);
                    /* try { // try from 002bff28 to 002bff33 has its CatchHandler @ 002bffbc */
  pRStack_78 = param_3;
  FUN_002c1654(this + 2000,&local_80);
                    /* try { // try from 002bff38 to 002bff43 has its CatchHandler @ 002bffac */
  pRStack_78 = param_3;
  FUN_002c1a30(this + 0x7f8,&local_80);
                    /* try { // try from 002bff48 to 002bff53 has its CatchHandler @ 002bff9c */
  pRStack_78 = param_3;
  FUN_002c1f64(this + 0x840,&local_80);
                    /* try { // try from 002bff58 to 002bff63 has its CatchHandler @ 002bff8c */
  pRStack_78 = param_3;
  FUN_002c2504(this + 0x890,&local_80);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c0080  margelo::nitro::rive::views::HybridRiveViewProps::filterObjectKeys =====

/* margelo::nitro::rive::views::HybridRiveViewProps::filterObjectKeys(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void margelo::nitro::rive::views::HybridRiveViewProps::filterObjectKeys(basic_string *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  basic_string *pbVar5;
  
  lVar1 = tpidr_el0;
  uVar4 = *(ulong *)(param_1 + 8);
  pbVar5 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar5 = param_1 + 1;
    uVar4 = (ulong)((byte)*param_1 >> 1);
  }
  if (uVar4 != 0) {
    uVar3 = 0xcbf29ce484222325;
    do {
      uVar4 = uVar4 - 1;
      uVar3 = (uVar3 ^ (byte)*pbVar5) * 0x100000001b3;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 != 0);
    uVar2 = 1;
    if ((long)uVar3 < -0x723f4a0c3afbe74) {
      if ((long)uVar3 < -0x552fee870fd595dd) {
        if ((uVar3 == 0x8a61e36fdccfc0f6) || (uVar3 == 0x9b78a319c82f67d1)) goto LAB_002c022c;
      }
      else if ((uVar3 == 0xaad01178f02a6a23) ||
              ((uVar3 == 0xd3b4a013f38e5890 || (uVar3 == 0xdc9e7a18fec934ec)))) goto LAB_002c022c;
    }
    else if ((long)uVar3 < 0x23d217257181e9ee) {
      if ((uVar3 == 0xf8dc0b5f3c50418c) || (uVar3 == 0x1e858aaac191037e)) goto LAB_002c022c;
    }
    else if ((uVar3 == 0x23d217257181e9ee) ||
            ((uVar3 == 0x56083c90c8923d28 || (uVar3 == 0x571070b9b81b249c)))) goto LAB_002c022c;
  }
  uVar2 = 0;
LAB_002c022c:
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 002c024c  FUN_002c024c =====

void FUN_002c024c(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_50;
  Value aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = facebook::react::RawProps::at((char *)*param_2,"artboardName",(char *)0x0);
  if (lVar2 == 0) {
    lVar2 = param_2[1];
    *param_1 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    param_1[0x18] =
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    if (*(char *)(lVar2 + 0x6f8) != '\0') {
      if ((*(byte *)(lVar2 + 0x6e0) & 1) == 0) {
        uVar5 = *(undefined8 *)(lVar2 + 0x6e8);
        uVar4 = *(undefined8 *)(lVar2 + 0x6e0);
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar2 + 0x6f0);
        *(undefined8 *)(param_1 + 8) = uVar5;
        *(undefined8 *)param_1 = uVar4;
      }
      else {
                    /* try { // try from 002c0304 to 002c030b has its CatchHandler @ 002c0358 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external(param_1,*(char **)(lVar2 + 0x6f0),*(ulong *)(lVar2 + 0x6e8));
      }
      param_1[0x18] =
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1;
    }
    uVar4 = *(undefined8 *)(lVar2 + 0x708);
    lVar3 = *(long *)(lVar2 + 0x710);
    param_1[0x20] =
         *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (lVar2 + 0x700);
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    *(long *)(param_1 + 0x30) = lVar3;
    if (lVar3 != 0) {
      FUN_00255510(1);
    }
  }
  else {
                    /* try { // try from 002c0294 to 002c02a3 has its CatchHandler @ 002c0394 */
    FUN_002c3944(&local_50,lVar2);
                    /* try { // try from 002c02ac to 002c02bb has its CatchHandler @ 002c037c */
    FUN_002c4ed8(param_1,local_50,aVStack_48,param_2[1] + 0x6e0);
    facebook::jsi::Value::~Value(aVStack_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c04a4  FUN_002c04a4 =====

void FUN_002c04a4(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_50;
  Value aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = facebook::react::RawProps::at((char *)*param_2,"stateMachineName",(char *)0x0);
  if (lVar2 == 0) {
    lVar2 = param_2[1];
    *param_1 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    param_1[0x18] =
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    if (*(char *)(lVar2 + 0x730) != '\0') {
      if ((*(byte *)(lVar2 + 0x718) & 1) == 0) {
        uVar5 = *(undefined8 *)(lVar2 + 0x720);
        uVar4 = *(undefined8 *)(lVar2 + 0x718);
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar2 + 0x728);
        *(undefined8 *)(param_1 + 8) = uVar5;
        *(undefined8 *)param_1 = uVar4;
      }
      else {
                    /* try { // try from 002c055c to 002c0563 has its CatchHandler @ 002c05b0 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external(param_1,*(char **)(lVar2 + 0x728),*(ulong *)(lVar2 + 0x720));
      }
      param_1[0x18] =
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1;
    }
    uVar4 = *(undefined8 *)(lVar2 + 0x740);
    lVar3 = *(long *)(lVar2 + 0x748);
    param_1[0x20] =
         *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (lVar2 + 0x738);
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    *(long *)(param_1 + 0x30) = lVar3;
    if (lVar3 != 0) {
      FUN_00255510(1);
    }
  }
  else {
                    /* try { // try from 002c04ec to 002c04fb has its CatchHandler @ 002c05ec */
    FUN_002c3944(&local_50,lVar2);
                    /* try { // try from 002c0504 to 002c0513 has its CatchHandler @ 002c05d4 */
    FUN_002c4ed8(param_1,local_50,aVStack_48,param_2[1] + 0x718);
    facebook::jsi::Value::~Value(aVStack_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c06fc  FUN_002c06fc =====

void FUN_002c06fc(ushort *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  ushort uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 local_b8 [8];
  long *local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  IRuntime *local_80;
  int local_78 [4];
  Value aVStack_68 [16];
  Value *local_58;
  long *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar5 = facebook::react::RawProps::at((char *)*param_2,"autoPlay",(char *)0x0);
  if (lVar5 == 0) {
    lVar7 = param_2[1];
    uVar1 = *(undefined1 *)(lVar7 + 0x752);
    uVar8 = *(undefined8 *)(lVar7 + 0x758);
    lVar5 = *(long *)(lVar7 + 0x760);
    *param_1 = *(ushort *)(lVar7 + 0x750);
    *(undefined1 *)(param_1 + 1) = uVar1;
    *(undefined8 *)(param_1 + 4) = uVar8;
    *(long *)(param_1 + 8) = lVar5;
    if (lVar5 != 0) {
      FUN_00255510(1);
    }
    goto LAB_002c0934;
  }
                    /* try { // try from 002c0748 to 002c0757 has its CatchHandler @ 002c09bc */
  FUN_002c3944(&local_80,lVar5);
  lVar5 = param_2[1];
                    /* try { // try from 002c077c to 002c0787 has its CatchHandler @ 002c096c */
  if (((*(long *)(lVar5 + 0x758) == 0) || ((*(byte *)(*(long *)(lVar5 + 0x760) + 0x10) & 1) != 0))
     || (uVar6 = facebook::jsi::Value::strictEquals
                           (local_80,*(Value **)(lVar5 + 0x758),(Value *)local_78), (uVar6 & 1) == 0
        )) {
    if (local_78[0] == 0) {
      uVar4 = 0;
    }
    else {
                    /* try { // try from 002c07c0 to 002c07c7 has its CatchHandler @ 002c096c */
      uVar4 = facebook::jsi::Value::asBool();
      uVar4 = uVar4 & 1;
    }
    local_a0 = 0;
    uStack_98 = 0;
                    /* try { // try from 002c0810 to 002c081b has its CatchHandler @ 002c09a0 */
    margelo::nitro::JSICache::getOrCreateCache((Runtime *)local_80);
                    /* try { // try from 002c081c to 002c082b has its CatchHandler @ 002c098c */
    facebook::jsi::Value::Value(aVStack_68,local_80,(Value *)local_78);
                    /* try { // try from 002c082c to 002c083b has its CatchHandler @ 002c0978 */
    FUN_002c3a44(&local_58,local_b8,aVStack_68);
    FUN_002c3c88(&local_a0,&local_58);
    if (local_50 != (long *)0x0) {
      uVar6 = FUN_00255510(0xffffffffffffffff);
      if (uVar6 < 2) {
        if ((*(byte *)(local_50 + 2) & 1) == 0) {
          if (local_58 != (Value *)0x0) {
            facebook::jsi::Value::~Value(local_58);
            operator_delete(local_58);
          }
          local_58 = (Value *)0x0;
          *(undefined4 *)(local_50 + 2) = 1;
          goto LAB_002c089c;
        }
        lVar5 = *local_50;
        plVar3 = local_50;
      }
      else {
LAB_002c089c:
        lVar5 = *local_50;
        plVar3 = local_50;
      }
      local_50 = plVar3;
      if ((lVar5 == 0) && (plVar3[1] == 0)) {
        if (plVar3 != (long *)0x0) {
          std::__ndk1::mutex::~mutex((mutex *)((long)plVar3 + 0x14));
          operator_delete(plVar3);
        }
        local_50 = (long *)0x0;
      }
    }
    facebook::jsi::Value::~Value(aVStack_68);
    std::__ndk1::mutex::unlock();
    if ((local_b0 != (long *)0x0) &&
       (lVar5 = FUN_00255510(0xffffffffffffffff,local_b0 + 1), lVar5 == 0)) {
      (**(code **)(*local_b0 + 0x10))(local_b0);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    *param_1 = uVar4 | (ushort)(local_78[0] != 0) << 8;
    *(undefined1 *)(param_1 + 1) = 1;
    *(undefined8 *)(param_1 + 8) = uStack_98;
    *(undefined8 *)(param_1 + 4) = local_a0;
  }
  else {
    uVar1 = *(undefined1 *)(lVar5 + 0x752);
    uVar8 = *(undefined8 *)(lVar5 + 0x758);
    lVar7 = *(long *)(lVar5 + 0x760);
    *param_1 = *(ushort *)(lVar5 + 0x750);
    *(undefined1 *)(param_1 + 1) = uVar1;
    *(undefined8 *)(param_1 + 4) = uVar8;
    *(long *)(param_1 + 8) = lVar7;
    if (lVar7 != 0) {
      FUN_00255510(1);
    }
  }
  facebook::jsi::Value::~Value((Value *)local_78);
LAB_002c0934:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c0acc  FUN_002c0acc =====

void FUN_002c0acc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 local_c8 [8];
  long *local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  IRuntime *local_98;
  Value aVStack_90 [16];
  Value aVStack_80 [16];
  Value *local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = facebook::react::RawProps::at((char *)*param_2,"file",(char *)0x0);
  if (lVar3 == 0) {
    lVar5 = param_2[1];
    lVar3 = *(long *)(lVar5 + 0x770);
    *param_1 = *(undefined8 *)(lVar5 + 0x768);
    param_1[1] = lVar3;
    if (lVar3 != 0) {
      FUN_00259a00(1,lVar3 + 8);
    }
    uVar6 = *(undefined8 *)(lVar5 + 0x780);
    lVar3 = *(long *)(lVar5 + 0x788);
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(lVar5 + 0x778);
    param_1[3] = uVar6;
    param_1[4] = lVar3;
    if (lVar3 != 0) {
      FUN_00255510(1);
    }
    goto LAB_002c0d18;
  }
                    /* try { // try from 002c0b18 to 002c0b27 has its CatchHandler @ 002c0d94 */
  FUN_002c3944(&local_98,lVar3);
  lVar3 = param_2[1];
                    /* try { // try from 002c0b4c to 002c0b57 has its CatchHandler @ 002c0da0 */
  if (((*(long *)(lVar3 + 0x780) == 0) || ((*(byte *)(*(long *)(lVar3 + 0x788) + 0x10) & 1) != 0))
     || (uVar4 = facebook::jsi::Value::strictEquals(local_98,*(Value **)(lVar3 + 0x780),aVStack_90),
        (uVar4 & 1) == 0)) {
                    /* try { // try from 002c0b9c to 002c0bab has its CatchHandler @ 002c0da0 */
    FUN_002bbccc(&local_60,local_98,aVStack_90);
    local_b0 = 0;
    uStack_a8 = 0;
                    /* try { // try from 002c0bb0 to 002c0bbb has its CatchHandler @ 002c0d78 */
    margelo::nitro::JSICache::getOrCreateCache((Runtime *)local_98);
                    /* try { // try from 002c0bbc to 002c0bcb has its CatchHandler @ 002c0d64 */
    facebook::jsi::Value::Value(aVStack_80,local_98,aVStack_90);
                    /* try { // try from 002c0bcc to 002c0bdb has its CatchHandler @ 002c0d50 */
    FUN_002c3a44(&local_70,local_c8,aVStack_80);
    FUN_002c3c88(&local_b0,&local_70);
    if (local_68 != (long *)0x0) {
      uVar4 = FUN_00255510(0xffffffffffffffff);
      if (uVar4 < 2) {
        if ((*(byte *)(local_68 + 2) & 1) == 0) {
          if (local_70 != (Value *)0x0) {
            facebook::jsi::Value::~Value(local_70);
            operator_delete(local_70);
          }
          local_70 = (Value *)0x0;
          *(undefined4 *)(local_68 + 2) = 1;
          goto LAB_002c0c3c;
        }
        lVar3 = *local_68;
        plVar2 = local_68;
      }
      else {
LAB_002c0c3c:
        lVar3 = *local_68;
        plVar2 = local_68;
      }
      local_68 = plVar2;
      if ((lVar3 == 0) && (plVar2[1] == 0)) {
        if (plVar2 != (long *)0x0) {
          std::__ndk1::mutex::~mutex((mutex *)((long)plVar2 + 0x14));
          operator_delete(plVar2);
        }
        local_68 = (long *)0x0;
      }
    }
    facebook::jsi::Value::~Value(aVStack_80);
    std::__ndk1::mutex::unlock();
    if ((local_c0 != (long *)0x0) &&
       (lVar3 = FUN_00255510(0xffffffffffffffff,local_c0 + 1), lVar3 == 0)) {
      (**(code **)(*local_c0 + 0x10))(local_c0);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    *(undefined1 *)(param_1 + 2) = 1;
    param_1[1] = uStack_58;
    *param_1 = local_60;
    param_1[4] = uStack_a8;
    param_1[3] = local_b0;
  }
  else {
    lVar5 = *(long *)(lVar3 + 0x770);
    *param_1 = *(undefined8 *)(lVar3 + 0x768);
    param_1[1] = lVar5;
    if (lVar5 != 0) {
      FUN_00259a00(1,lVar5 + 8);
    }
    uVar6 = *(undefined8 *)(lVar3 + 0x780);
    lVar5 = *(long *)(lVar3 + 0x788);
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(lVar3 + 0x778);
    param_1[3] = uVar6;
    param_1[4] = lVar5;
    if (lVar5 != 0) {
      FUN_00255510(1);
    }
  }
  facebook::jsi::Value::~Value(aVStack_90);
LAB_002c0d18:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c0eb8  FUN_002c0eb8 =====

void FUN_002c0eb8(ulong *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 local_b8 [8];
  long *local_b0;
  ulong local_a0;
  ulong uStack_98;
  IRuntime *local_80;
  int local_78 [4];
  Value aVStack_68 [16];
  Value *local_58;
  long *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar4 = facebook::react::RawProps::at((char *)*param_2,"alignment",(char *)0x0);
  if (lVar4 == 0) {
    lVar4 = param_2[1];
    uVar1 = *(undefined1 *)(lVar4 + 0x798);
    uVar6 = *(ulong *)(lVar4 + 0x7a0);
    uVar5 = *(ulong *)(lVar4 + 0x7a8);
    *param_1 = *(ulong *)(lVar4 + 0x790);
    *(undefined1 *)(param_1 + 1) = uVar1;
    param_1[2] = uVar6;
    param_1[3] = uVar5;
    if (uVar5 != 0) {
      FUN_00255510(1);
    }
    goto LAB_002c10f0;
  }
                    /* try { // try from 002c0f04 to 002c0f13 has its CatchHandler @ 002c1178 */
  FUN_002c3944(&local_80,lVar4);
  lVar4 = param_2[1];
                    /* try { // try from 002c0f38 to 002c0f43 has its CatchHandler @ 002c1128 */
  if (((*(long *)(lVar4 + 0x7a0) == 0) || ((*(byte *)(*(long *)(lVar4 + 0x7a8) + 0x10) & 1) != 0))
     || (uVar5 = facebook::jsi::Value::strictEquals
                           (local_80,*(Value **)(lVar4 + 0x7a0),(Value *)local_78), (uVar5 & 1) == 0
        )) {
    if (local_78[0] == 0) {
      uVar5 = 0;
    }
    else {
                    /* try { // try from 002c0f80 to 002c0f8b has its CatchHandler @ 002c1128 */
      uVar5 = FUN_002b9e54(local_80,local_78);
      uVar5 = uVar5 & 0xffffffff | 0x100000000;
    }
    local_a0 = 0;
    uStack_98 = 0;
                    /* try { // try from 002c0fd0 to 002c0fdb has its CatchHandler @ 002c115c */
    margelo::nitro::JSICache::getOrCreateCache((Runtime *)local_80);
                    /* try { // try from 002c0fdc to 002c0feb has its CatchHandler @ 002c1148 */
    facebook::jsi::Value::Value(aVStack_68,local_80,(Value *)local_78);
                    /* try { // try from 002c0fec to 002c0ffb has its CatchHandler @ 002c1134 */
    FUN_002c3a44(&local_58,local_b8,aVStack_68);
    FUN_002c3c88(&local_a0,&local_58);
    if (local_50 != (long *)0x0) {
      uVar6 = FUN_00255510(0xffffffffffffffff);
      if (uVar6 < 2) {
        if ((*(byte *)(local_50 + 2) & 1) == 0) {
          if (local_58 != (Value *)0x0) {
            facebook::jsi::Value::~Value(local_58);
            operator_delete(local_58);
          }
          local_58 = (Value *)0x0;
          *(undefined4 *)(local_50 + 2) = 1;
          goto LAB_002c105c;
        }
        lVar4 = *local_50;
        plVar3 = local_50;
      }
      else {
LAB_002c105c:
        lVar4 = *local_50;
        plVar3 = local_50;
      }
      local_50 = plVar3;
      if ((lVar4 == 0) && (plVar3[1] == 0)) {
        if (plVar3 != (long *)0x0) {
          std::__ndk1::mutex::~mutex((mutex *)((long)plVar3 + 0x14));
          operator_delete(plVar3);
        }
        local_50 = (long *)0x0;
      }
    }
    facebook::jsi::Value::~Value(aVStack_68);
    std::__ndk1::mutex::unlock();
    if ((local_b0 != (long *)0x0) &&
       (lVar4 = FUN_00255510(0xffffffffffffffff,local_b0 + 1), lVar4 == 0)) {
      (**(code **)(*local_b0 + 0x10))(local_b0);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    *param_1 = uVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    param_1[3] = uStack_98;
    param_1[2] = local_a0;
  }
  else {
    uVar5 = *(ulong *)(lVar4 + 0x7a8);
    uVar6 = *(ulong *)(lVar4 + 0x790);
    uVar1 = *(undefined1 *)(lVar4 + 0x798);
    param_1[2] = *(ulong *)(lVar4 + 0x7a0);
    param_1[3] = uVar5;
    *param_1 = uVar6;
    *(undefined1 *)(param_1 + 1) = uVar1;
    if (uVar5 != 0) {
      FUN_00255510(1);
    }
  }
  facebook::jsi::Value::~Value((Value *)local_78);
LAB_002c10f0:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c1288  FUN_002c1288 =====

void FUN_002c1288(ulong *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  undefined1 local_b8 [8];
  long *local_b0;
  ulong local_a0;
  ulong uStack_98;
  IRuntime *local_80;
  int local_78 [4];
  Value aVStack_68 [16];
  Value *local_58;
  long *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar4 = facebook::react::RawProps::at((char *)*param_2,"fit",(char *)0x0);
  if (lVar4 == 0) {
    lVar4 = param_2[1];
    uVar1 = *(undefined1 *)(lVar4 + 0x7b8);
    uVar6 = *(ulong *)(lVar4 + 0x7c0);
    uVar5 = *(ulong *)(lVar4 + 0x7c8);
    *param_1 = *(ulong *)(lVar4 + 0x7b0);
    *(undefined1 *)(param_1 + 1) = uVar1;
    param_1[2] = uVar6;
    param_1[3] = uVar5;
    if (uVar5 != 0) {
      FUN_00255510(1);
    }
    goto LAB_002c14bc;
  }
                    /* try { // try from 002c12d4 to 002c12e3 has its CatchHandler @ 002c1544 */
  FUN_002c3944(&local_80,lVar4);
  lVar4 = param_2[1];
                    /* try { // try from 002c1308 to 002c1313 has its CatchHandler @ 002c14f4 */
  if (((*(long *)(lVar4 + 0x7c0) == 0) || ((*(byte *)(*(long *)(lVar4 + 0x7c8) + 0x10) & 1) != 0))
     || (uVar5 = facebook::jsi::Value::strictEquals
                           (local_80,*(Value **)(lVar4 + 0x7c0),(Value *)local_78), (uVar5 & 1) == 0
        )) {
    if (local_78[0] == 0) {
      uVar5 = 0;
    }
    else {
                    /* try { // try from 002c1350 to 002c1357 has its CatchHandler @ 002c14f4 */
      dVar7 = (double)facebook::jsi::Value::asNumber();
      uVar5 = (ulong)(uint)(int)dVar7 | 0x100000000;
    }
    local_a0 = 0;
    uStack_98 = 0;
                    /* try { // try from 002c139c to 002c13a7 has its CatchHandler @ 002c1528 */
    margelo::nitro::JSICache::getOrCreateCache((Runtime *)local_80);
                    /* try { // try from 002c13a8 to 002c13b7 has its CatchHandler @ 002c1514 */
    facebook::jsi::Value::Value(aVStack_68,local_80,(Value *)local_78);
                    /* try { // try from 002c13b8 to 002c13c7 has its CatchHandler @ 002c1500 */
    FUN_002c3a44(&local_58,local_b8,aVStack_68);
    FUN_002c3c88(&local_a0,&local_58);
    if (local_50 != (long *)0x0) {
      uVar6 = FUN_00255510(0xffffffffffffffff);
      if (uVar6 < 2) {
        if ((*(byte *)(local_50 + 2) & 1) == 0) {
          if (local_58 != (Value *)0x0) {
            facebook::jsi::Value::~Value(local_58);
            operator_delete(local_58);
          }
          local_58 = (Value *)0x0;
          *(undefined4 *)(local_50 + 2) = 1;
          goto LAB_002c1428;
        }
        lVar4 = *local_50;
        plVar3 = local_50;
      }
      else {
LAB_002c1428:
        lVar4 = *local_50;
        plVar3 = local_50;
      }
      local_50 = plVar3;
      if ((lVar4 == 0) && (plVar3[1] == 0)) {
        if (plVar3 != (long *)0x0) {
          std::__ndk1::mutex::~mutex((mutex *)((long)plVar3 + 0x14));
          operator_delete(plVar3);
        }
        local_50 = (long *)0x0;
      }
    }
    facebook::jsi::Value::~Value(aVStack_68);
    std::__ndk1::mutex::unlock();
    if ((local_b0 != (long *)0x0) &&
       (lVar4 = FUN_00255510(0xffffffffffffffff,local_b0 + 1), lVar4 == 0)) {
      (**(code **)(*local_b0 + 0x10))(local_b0);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    *param_1 = uVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    param_1[3] = uStack_98;
    param_1[2] = local_a0;
  }
  else {
    uVar5 = *(ulong *)(lVar4 + 0x7c8);
    uVar6 = *(ulong *)(lVar4 + 0x7b0);
    uVar1 = *(undefined1 *)(lVar4 + 0x7b8);
    param_1[2] = *(ulong *)(lVar4 + 0x7c0);
    param_1[3] = uVar5;
    *param_1 = uVar6;
    *(undefined1 *)(param_1 + 1) = uVar1;
    if (uVar5 != 0) {
      FUN_00255510(1);
    }
  }
  facebook::jsi::Value::~Value((Value *)local_78);
LAB_002c14bc:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c1654  FUN_002c1654 =====

void FUN_002c1654(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 local_b8 [8];
  long *local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  IRuntime *local_80;
  int local_78 [4];
  Value aVStack_68 [16];
  Value *local_58;
  long *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar4 = facebook::react::RawProps::at((char *)*param_2,"layoutScaleFactor",(char *)0x0);
  if (lVar4 == 0) {
    lVar6 = param_2[1];
    uVar8 = *(undefined8 *)(lVar6 + 2000);
    uVar1 = *(undefined1 *)(lVar6 + 0x7e0);
    uVar7 = *(undefined8 *)(lVar6 + 0x7e8);
    lVar4 = *(long *)(lVar6 + 0x7f0);
    param_1[1] = *(undefined8 *)(lVar6 + 0x7d8);
    *param_1 = uVar8;
    *(undefined1 *)(param_1 + 2) = uVar1;
    param_1[3] = uVar7;
    param_1[4] = lVar4;
    if (lVar4 != 0) {
      FUN_00255510(1);
    }
    goto LAB_002c1894;
  }
                    /* try { // try from 002c16a4 to 002c16b3 has its CatchHandler @ 002c1920 */
  FUN_002c3944(&local_80,lVar4);
  lVar4 = param_2[1];
                    /* try { // try from 002c16d8 to 002c16e3 has its CatchHandler @ 002c18d0 */
  if (((*(long *)(lVar4 + 0x7e8) == 0) || ((*(byte *)(*(long *)(lVar4 + 0x7f0) + 0x10) & 1) != 0))
     || (uVar5 = facebook::jsi::Value::strictEquals
                           (local_80,*(Value **)(lVar4 + 0x7e8),(Value *)local_78), (uVar5 & 1) == 0
        )) {
    if (local_78[0] == 0) {
      uVar7 = 0;
    }
    else {
                    /* try { // try from 002c1720 to 002c1727 has its CatchHandler @ 002c18d0 */
      uVar7 = facebook::jsi::Value::asNumber();
    }
    local_a0 = 0;
    uStack_98 = 0;
                    /* try { // try from 002c1770 to 002c177b has its CatchHandler @ 002c1904 */
    margelo::nitro::JSICache::getOrCreateCache((Runtime *)local_80);
                    /* try { // try from 002c177c to 002c178b has its CatchHandler @ 002c18f0 */
    facebook::jsi::Value::Value(aVStack_68,local_80,(Value *)local_78);
                    /* try { // try from 002c178c to 002c179b has its CatchHandler @ 002c18dc */
    FUN_002c3a44(&local_58,local_b8,aVStack_68);
    FUN_002c3c88(&local_a0,&local_58);
    if (local_50 != (long *)0x0) {
      uVar5 = FUN_00255510(0xffffffffffffffff);
      if (uVar5 < 2) {
        if ((*(byte *)(local_50 + 2) & 1) == 0) {
          if (local_58 != (Value *)0x0) {
            facebook::jsi::Value::~Value(local_58);
            operator_delete(local_58);
          }
          local_58 = (Value *)0x0;
          *(undefined4 *)(local_50 + 2) = 1;
          goto LAB_002c17fc;
        }
        lVar4 = *local_50;
        plVar3 = local_50;
      }
      else {
LAB_002c17fc:
        lVar4 = *local_50;
        plVar3 = local_50;
      }
      local_50 = plVar3;
      if ((lVar4 == 0) && (plVar3[1] == 0)) {
        if (plVar3 != (long *)0x0) {
          std::__ndk1::mutex::~mutex((mutex *)((long)plVar3 + 0x14));
          operator_delete(plVar3);
        }
        local_50 = (long *)0x0;
      }
    }
    facebook::jsi::Value::~Value(aVStack_68);
    std::__ndk1::mutex::unlock();
    if ((local_b0 != (long *)0x0) &&
       (lVar4 = FUN_00255510(0xffffffffffffffff,local_b0 + 1), lVar4 == 0)) {
      (**(code **)(*local_b0 + 0x10))(local_b0);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    *param_1 = uVar7;
    param_1[1] = (ulong)(local_78[0] != 0);
    *(undefined1 *)(param_1 + 2) = 1;
    param_1[4] = uStack_98;
    param_1[3] = local_a0;
  }
  else {
    lVar6 = *(long *)(lVar4 + 0x7f0);
    uVar8 = *(undefined8 *)(lVar4 + 0x7d8);
    uVar7 = *(undefined8 *)(lVar4 + 2000);
    uVar1 = *(undefined1 *)(lVar4 + 0x7e0);
    param_1[3] = *(undefined8 *)(lVar4 + 0x7e8);
    param_1[4] = lVar6;
    param_1[1] = uVar8;
    *param_1 = uVar7;
    *(undefined1 *)(param_1 + 2) = uVar1;
    if (lVar6 != 0) {
      FUN_00255510(1);
    }
  }
  facebook::jsi::Value::~Value((Value *)local_78);
LAB_002c1894:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c1a30  FUN_002c1a30 =====

void FUN_002c1a30(undefined1 *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined1 local_d8 [8];
  long *local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  IRuntime *local_a8;
  Value aVStack_a0 [16];
  Value aVStack_90 [16];
  Value *local_80;
  long *local_78;
  undefined1 auStack_70 [24];
  uint local_58;
  char local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = facebook::react::RawProps::at((char *)*param_2,"dataBind",(char *)0x0);
  if (lVar3 == 0) {
    lVar3 = param_2[1];
    *param_1 = 0;
    param_1[0x20] = 0;
    if (*(char *)(lVar3 + 0x818) != '\0') {
      *param_1 = 0;
      *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
      if (*(uint *)(lVar3 + 0x810) != 0xffffffff) {
                    /* try { // try from 002c1d14 to 002c1d23 has its CatchHandler @ 002c1ddc */
        (*(code *)(&
                  PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<std___ndk1_shared_ptr<margelo_nitro_rive_HybridViewModelInstanceSpec>,margelo_nitro_rive_DataBindMode,margelo_nitro_rive_DataBindByName>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___copy_constructor<std___ndk1___variant_detail___traits<std___ndk1_shared_ptr<margelo_nitro_rive_HybridViewModelInstanceSpec>,margelo_nitro_rive_DataBindMode,margelo_nitro_rive_DataBindByName>,(std___ndk1___variant_detail__Trait)1>const&>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<std___ndk1_shared_ptr<margelo_nitro_rive_HybridViewModelInstanceSpec>,margelo_nitro_rive_DataBindMode,margelo_nitro_rive_DataBindByName>>&,std___ndk1___variant_detail___copy_constructor<std___ndk1___variant_detail___traits<std___ndk1_shared_ptr<margelo_nitro_rive_HybridViewModelInstanceSpec>,margelo_nitro_rive_DataBindMode,margelo_nitro_rive_DataBindByName>,(std___ndk1___variant_detail__Trait)1>const&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,std___ndk1_shared_ptr<margelo_nitro_rive_HybridViewModelInstanceSpec>,margelo_nitro_rive_DataBindMode,margelo_nitro_rive_DataBindByName>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,std___ndk1_shared_ptr<margelo_nitro_rive_HybridViewModelInstanceSpec>,margelo_nitro_rive_DataBindMode,margelo_nitro_rive_DataBindByName>const&>_0037fff0
                  )[*(uint *)(lVar3 + 0x810)])(auStack_70,param_1,lVar3 + 0x7f8);
        *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar3 + 0x810);
      }
      param_1[0x20] = 1;
    }
    param_1[0x28] = *(undefined1 *)(lVar3 + 0x820);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar3 + 0x828);
    lVar3 = *(long *)(lVar3 + 0x830);
    *(long *)(param_1 + 0x38) = lVar3;
    if (lVar3 != 0) {
      FUN_00255510(1);
    }
    goto LAB_002c1d84;
  }
                    /* try { // try from 002c1a7c to 002c1a8b has its CatchHandler @ 002c1e40 */
  FUN_002c3944(&local_a8,lVar3);
  lVar3 = param_2[1];
                    /* try { // try from 002c1ab0 to 002c1abb has its CatchHandler @ 002c1e4c */
  if (((*(long *)(lVar3 + 0x828) == 0) || ((*(byte *)(*(long *)(lVar3 + 0x830) + 0x10) & 1) != 0))
     || (uVar4 = facebook::jsi::Value::strictEquals(local_a8,*(Value **)(lVar3 + 0x828),aVStack_a0),
        (uVar4 & 1) == 0)) {
                    /* try { // try from 002c1b3c to 002c1b4b has its CatchHandler @ 002c1e4c */
    FUN_002b4444(auStack_70,local_a8,aVStack_a0);
    local_c0 = 0;
    uStack_b8 = 0;
                    /* try { // try from 002c1b50 to 002c1b5b has its CatchHandler @ 002c1e24 */
    margelo::nitro::JSICache::getOrCreateCache((Runtime *)local_a8);
                    /* try { // try from 002c1b5c to 002c1b6b has its CatchHandler @ 002c1e10 */
    facebook::jsi::Value::Value(aVStack_90,local_a8,aVStack_a0);
                    /* try { // try from 002c1b6c to 002c1b7b has its CatchHandler @ 002c1dfc */
    FUN_002c3a44(&local_80,local_d8,aVStack_90);
    FUN_002c3c88(&local_c0,&local_80);
    if (local_78 != (long *)0x0) {
      uVar4 = FUN_00255510(0xffffffffffffffff);
      if (uVar4 < 2) {
        if ((*(byte *)(local_78 + 2) & 1) == 0) {
          if (local_80 != (Value *)0x0) {
            facebook::jsi::Value::~Value(local_80);
            operator_delete(local_80);
          }
          local_80 = (Value *)0x0;
          *(undefined4 *)(local_78 + 2) = 1;
          goto LAB_002c1bdc;
        }
        lVar3 = *local_78;
        plVar2 = local_78;
      }
      else {
LAB_002c1bdc:
        lVar3 = *local_78;
        plVar2 = local_78;
      }
      local_78 = plVar2;
      if ((lVar3 == 0) && (plVar2[1] == 0)) {
        if (plVar2 != (long *)0x0) {
          std::__ndk1::mutex::~mutex((mutex *)((long)plVar2 + 0x14));
          operator_delete(plVar2);
        }
        local_78 = (long *)0x0;
      }
    }
    facebook::jsi::Value::~Value(aVStack_90);
    std::__ndk1::mutex::unlock();
    if ((local_d0 != (long *)0x0) &&
       (lVar3 = FUN_00255510(0xffffffffffffffff,local_d0 + 1), lVar3 == 0)) {
      (**(code **)(*local_d0 + 0x10))(local_d0);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    *param_1 = 0;
    param_1[0x20] = 0;
    if (local_50 != '\0') {
      *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
      if (local_58 != 0xffffffff) {
                    /* try { // try from 002c1c84 to 002c1c93 has its CatchHandler @ 002c1df8 */
        (*(code *)(&
                  PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<std___ndk1_shared_ptr<margelo_nitro_rive_HybridViewModelInstanceSpec>,margelo_nitro_rive_DataBindMode,margelo_nitro_rive_DataBindByName>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<std___ndk1_shared_ptr<margelo_nitro_rive_HybridViewModelInstanceSpec>,margelo_nitro_rive_DataBindMode,margelo_nitro_rive_DataBindByName>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<std___ndk1_shared_ptr<margelo_nitro_rive_HybridViewModelInstanceSpec>,margelo_nitro_rive_DataBindMode,margelo_nitro_rive_DataBindByName>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<std___ndk1_shared_ptr<margelo_nitro_rive_HybridViewModelInstanceSpec>,margelo_nitro_rive_DataBindMode,margelo_nitro_rive_DataBindByName>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,std___ndk1_shared_ptr<margelo_nitro_rive_HybridViewModelInstanceSpec>,margelo_nitro_rive_DataBindMode,margelo_nitro_rive_DataBindByName>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,std___ndk1_shared_ptr<margelo_nitro_rive_HybridViewModelInstanceSpec>,margelo_nitro_rive_DataBindMode,margelo_nitro_rive_DataBindByName>&&>_0038ae68
                  )[local_58])(local_d8,param_1,auStack_70);
        param_1[0x20] = 1;
        param_1[0x28] = 1;
        *(uint *)(param_1 + 0x18) = local_58;
        *(undefined8 *)(param_1 + 0x38) = uStack_b8;
        *(undefined8 *)(param_1 + 0x30) = local_c0;
        if ((local_50 != '\0') && (local_58 != 0xffffffff)) {
                    /* try { // try from 002c1ccc to 002c1cd7 has its CatchHandler @ 002c1dd8 */
          (*(code *)(&PTR_FUN_0038ae50)[local_58])(&local_c0,auStack_70);
        }
        goto LAB_002c1d7c;
      }
      param_1[0x20] = 1;
    }
    param_1[0x28] = 1;
    *(undefined8 *)(param_1 + 0x38) = uStack_b8;
    *(undefined8 *)(param_1 + 0x30) = local_c0;
  }
  else {
    *param_1 = 0;
    param_1[0x20] = 0;
    if (*(char *)(lVar3 + 0x818) != '\0') {
      *param_1 = 0;
      *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
      if (*(uint *)(lVar3 + 0x810) != 0xffffffff) {
                    /* try { // try from 002c1af4 to 002c1b03 has its CatchHandler @ 002c1dbc */
        (*(code *)(&
                  PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<std___ndk1_shared_ptr<margelo_nitro_rive_HybridViewModelInstanceSpec>,margelo_nitro_rive_DataBindMode,margelo_nitro_rive_DataBindByName>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___copy_constructor<std___ndk1___variant_detail___traits<std___ndk1_shared_ptr<margelo_nitro_rive_HybridViewModelInstanceSpec>,margelo_nitro_rive_DataBindMode,margelo_nitro_rive_DataBindByName>,(std___ndk1___variant_detail__Trait)1>const&>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<std___ndk1_shared_ptr<margelo_nitro_rive_HybridViewModelInstanceSpec>,margelo_nitro_rive_DataBindMode,margelo_nitro_rive_DataBindByName>>&,std___ndk1___variant_detail___copy_constructor<std___ndk1___variant_detail___traits<std___ndk1_shared_ptr<margelo_nitro_rive_HybridViewModelInstanceSpec>,margelo_nitro_rive_DataBindMode,margelo_nitro_rive_DataBindByName>,(std___ndk1___variant_detail__Trait)1>const&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,std___ndk1_shared_ptr<margelo_nitro_rive_HybridViewModelInstanceSpec>,margelo_nitro_rive_DataBindMode,margelo_nitro_rive_DataBindByName>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,std___ndk1_shared_ptr<margelo_nitro_rive_HybridViewModelInstanceSpec>,margelo_nitro_rive_DataBindMode,margelo_nitro_rive_DataBindByName>const&>_0037fff0
                  )[*(uint *)(lVar3 + 0x810)])(auStack_70,param_1,lVar3 + 0x7f8);
        *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar3 + 0x810);
      }
      param_1[0x20] = 1;
    }
    param_1[0x28] = *(undefined1 *)(lVar3 + 0x820);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar3 + 0x828);
    lVar3 = *(long *)(lVar3 + 0x830);
    *(long *)(param_1 + 0x38) = lVar3;
    if (lVar3 != 0) {
      FUN_00255510(1);
    }
  }
LAB_002c1d7c:
  facebook::jsi::Value::~Value(aVStack_a0);
LAB_002c1d84:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c1f64  FUN_002c1f64 =====

void FUN_002c1f64(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  IRuntime *pIVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long **pplVar8;
  undefined8 local_120;
  undefined8 uStack_118;
  ushort local_108;
  undefined1 local_106;
  void *local_f8;
  undefined8 *local_f0;
  Value aVStack_e8 [16];
  IRuntime *local_d8;
  IRuntime aIStack_d0 [16];
  Value aVStack_c0 [16];
  Value *local_b0;
  long *local_a8;
  undefined1 local_a0 [8];
  long *local_98;
  long local_90 [4];
  long *local_70 [3];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar4 = facebook::react::RawProps::at((char *)*param_2,"onError",(char *)0x0);
  if (lVar4 != 0) {
                    /* try { // try from 002c1fb4 to 002c1fc3 has its CatchHandler @ 002c23a8 */
    FUN_002c3944(&local_d8,lVar4);
    pIVar3 = local_d8;
                    /* try { // try from 002c1fc8 to 002c1fd7 has its CatchHandler @ 002c239c */
    facebook::jsi::Value::asObject(aIStack_d0);
    local_106 = 0;
    local_108 = 0x6602;
                    /* try { // try from 002c1fe8 to 002c200f has its CatchHandler @ 002c23c8 */
    uVar5 = margelo::nitro::PropNameIDCache::get((Runtime *)local_d8,(basic_string *)&local_108);
    (**(code **)(*(long *)local_d8 + 0x180))(aVStack_e8,local_d8,&local_f0,uVar5);
    lVar4 = param_2[1];
                    /* try { // try from 002c2030 to 002c2077 has its CatchHandler @ 002c23b4 */
    if (((*(long *)(lVar4 + 0x878) == 0) || ((*(byte *)(*(long *)(lVar4 + 0x880) + 0x10) & 1) != 0))
       || (uVar6 = facebook::jsi::Value::strictEquals(pIVar3,*(Value **)(lVar4 + 0x878),aVStack_e8),
          (uVar6 & 1) == 0)) {
      FUN_002b0d40(local_90,pIVar3,aVStack_e8);
      local_120 = 0;
      uStack_118 = 0;
                    /* try { // try from 002c207c to 002c2087 has its CatchHandler @ 002c2358 */
      margelo::nitro::JSICache::getOrCreateCache((Runtime *)pIVar3);
                    /* try { // try from 002c2088 to 002c2097 has its CatchHandler @ 002c2344 */
      facebook::jsi::Value::Value(aVStack_c0,pIVar3,aVStack_e8);
                    /* try { // try from 002c2098 to 002c20a7 has its CatchHandler @ 002c2330 */
      FUN_002c3a44(&local_b0,local_a0,aVStack_c0);
      FUN_002c3c88(&local_120,&local_b0);
      if (local_a8 != (long *)0x0) {
        uVar6 = FUN_00255510(0xffffffffffffffff);
        if (uVar6 < 2) {
          if ((*(byte *)(local_a8 + 2) & 1) == 0) {
            if (local_b0 != (Value *)0x0) {
              facebook::jsi::Value::~Value(local_b0);
              operator_delete(local_b0);
            }
            local_b0 = (Value *)0x0;
            *(undefined4 *)(local_a8 + 2) = 1;
            goto LAB_002c2108;
          }
          lVar4 = *local_a8;
          plVar7 = local_a8;
        }
        else {
LAB_002c2108:
          lVar4 = *local_a8;
          plVar7 = local_a8;
        }
        local_a8 = plVar7;
        if ((lVar4 == 0) && (plVar7[1] == 0)) {
          if (plVar7 != (long *)0x0) {
            std::__ndk1::mutex::~mutex((mutex *)((long)plVar7 + 0x14));
            operator_delete(plVar7);
          }
          local_a8 = (long *)0x0;
        }
      }
      facebook::jsi::Value::~Value(aVStack_c0);
      std::__ndk1::mutex::unlock();
      if ((local_98 == (long *)0x0) ||
         (lVar4 = FUN_00255510(0xffffffffffffffff,local_98 + 1), lVar4 != 0)) {
        if (local_70[0] != (long *)0x0) goto LAB_002c2170;
LAB_002c21d4:
        pplVar8 = (long **)(param_1 + 0x20);
LAB_002c21d8:
        *pplVar8 = (long *)0x0;
      }
      else {
        (**(code **)(*local_98 + 0x10))(local_98);
        std::__ndk1::__shared_weak_count::__release_weak();
        if (local_70[0] == (long *)0x0) goto LAB_002c21d4;
LAB_002c2170:
        if (local_70[0] != local_90) {
          pplVar8 = local_70;
          *(long **)(param_1 + 0x20) = local_70[0];
          goto LAB_002c21d8;
        }
        *(long *)(param_1 + 0x20) = param_1;
                    /* try { // try from 002c21ec to 002c21f7 has its CatchHandler @ 002c2328 */
        (**(code **)(local_90[0] + 0x18))(local_90,param_1);
      }
      *(undefined1 *)(param_1 + 0x30) = 1;
      *(undefined8 *)(param_1 + 0x40) = uStack_118;
      *(undefined8 *)(param_1 + 0x38) = local_120;
      if (local_70[0] == local_90) {
        lVar4 = 4;
        local_70[0] = local_90;
LAB_002c222c:
        (**(code **)(*local_70[0] + lVar4 * 8))();
      }
      else if (local_70[0] != (long *)0x0) {
        lVar4 = 5;
        goto LAB_002c222c;
      }
    }
    else {
      plVar7 = *(long **)(lVar4 + 0x860);
      if (plVar7 == (long *)0x0) {
LAB_002c2060:
        *(long **)(param_1 + 0x20) = plVar7;
      }
      else {
        plVar1 = (long *)(lVar4 + 0x840);
        if (plVar7 != plVar1) {
          plVar7 = (long *)(**(code **)(*plVar7 + 0x10))();
          goto LAB_002c2060;
        }
        *(long *)(param_1 + 0x20) = param_1;
                    /* try { // try from 002c22e4 to 002c22ef has its CatchHandler @ 002c23b4 */
        (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
      }
      *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(lVar4 + 0x870);
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar4 + 0x878);
      lVar4 = *(long *)(lVar4 + 0x880);
      *(long *)(param_1 + 0x40) = lVar4;
      if (lVar4 != 0) {
        FUN_00255510(1);
      }
    }
    facebook::jsi::Value::~Value(aVStack_e8);
    if ((local_108 & 1) != 0) {
      operator_delete(local_f8);
    }
    if (local_f0 != (undefined8 *)0x0) {
      (**(code **)*local_f0)();
    }
    facebook::jsi::Value::~Value((Value *)aIStack_d0);
    goto LAB_002c22ac;
  }
  lVar4 = param_2[1];
  plVar7 = *(long **)(lVar4 + 0x860);
  if (plVar7 == (long *)0x0) {
LAB_002c21ac:
    *(long **)(param_1 + 0x20) = plVar7;
  }
  else {
    if (plVar7 != (long *)(lVar4 + 0x840)) {
                    /* try { // try from 002c21a8 to 002c21ab has its CatchHandler @ 002c232c */
      plVar7 = (long *)(**(code **)(*plVar7 + 0x10))();
      goto LAB_002c21ac;
    }
    *(long *)(param_1 + 0x20) = param_1;
                    /* try { // try from 002c2280 to 002c2287 has its CatchHandler @ 002c232c */
    (**(code **)(**(long **)(lVar4 + 0x860) + 0x18))(*(long **)(lVar4 + 0x860),param_1);
  }
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(lVar4 + 0x870);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar4 + 0x878);
  lVar4 = *(long *)(lVar4 + 0x880);
  *(long *)(param_1 + 0x40) = lVar4;
  if (lVar4 != 0) {
    FUN_00255510(1);
  }
LAB_002c22ac:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c2504  FUN_002c2504 =====

void FUN_002c2504(undefined1 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  IRuntime *pIVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 **ppuVar10;
  undefined8 ***pppuVar11;
  ushort local_190;
  undefined1 local_18e;
  void *local_180;
  undefined8 *local_178;
  int local_170 [4];
  IRuntime *local_160;
  IRuntime aIStack_158 [16];
  IRuntime *local_148;
  long *local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  long *local_128;
  undefined8 *local_120;
  long *local_118;
  IRuntime *local_110;
  long *local_108;
  long *local_100;
  long *local_f8;
  long *local_f0;
  undefined8 *local_e8;
  undefined1 local_e0;
  undefined7 uStack_df;
  undefined8 **local_c0 [2];
  char local_b0;
  undefined8 *local_a0;
  long *plStack_98;
  undefined8 **local_80 [3];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar6 = facebook::react::RawProps::at((char *)*param_2,"hybridRef",(char *)0x0);
  if (lVar6 != 0) {
                    /* try { // try from 002c2558 to 002c2567 has its CatchHandler @ 002c2ee0 */
    FUN_002c3944(&local_160,lVar6);
    pIVar3 = local_160;
                    /* try { // try from 002c256c to 002c257b has its CatchHandler @ 002c2ed4 */
    facebook::jsi::Value::asObject(aIStack_158);
    local_18e = 0;
    local_190 = 0x6602;
                    /* try { // try from 002c258c to 002c25b3 has its CatchHandler @ 002c2eec */
    uVar7 = margelo::nitro::PropNameIDCache::get((Runtime *)local_160,(basic_string *)&local_190);
    (**(code **)(*(long *)local_160 + 0x180))(local_170,local_160,&local_178,uVar7);
    lVar6 = param_2[1];
                    /* try { // try from 002c25d4 to 002c25df has its CatchHandler @ 002c2e4c */
    if (((*(long *)(lVar6 + 0x8d8) == 0) || ((*(byte *)(*(long *)(lVar6 + 0x8e0) + 0x10) & 1) != 0))
       || (uVar8 = facebook::jsi::Value::strictEquals
                             (pIVar3,*(Value **)(lVar6 + 0x8d8),(Value *)local_170),
          (uVar8 & 1) == 0)) {
      if (local_170[0] == 0) {
        local_e0 = 0;
        local_b0 = '\0';
      }
      else {
                    /* try { // try from 002c2624 to 002c2633 has its CatchHandler @ 002c2e4c */
        facebook::jsi::Value::asObject((IRuntime *)local_170);
                    /* try { // try from 002c2634 to 002c2643 has its CatchHandler @ 002c2e28 */
        facebook::jsi::Object::asFunction((IRuntime *)&local_a0);
        if (local_a0 != (undefined8 *)0x0) {
          (**(code **)*local_a0)();
        }
        local_f8 = (long *)0x0;
        local_f0 = (undefined8 *)0x0;
                    /* try { // try from 002c265c to 002c2667 has its CatchHandler @ 002c2e04 */
        margelo::nitro::JSICache::getOrCreateCache((Runtime *)pIVar3);
                    /* try { // try from 002c266c to 002c2677 has its CatchHandler @ 002c2df0 */
        FUN_0026ce4c(&local_148,local_a0,&local_e8);
                    /* try { // try from 002c2678 to 002c2683 has its CatchHandler @ 002c2ddc */
        FUN_0026d090(&local_f8,&local_148);
        if (local_140 != (long *)0x0) {
          uVar8 = FUN_00255510(0xffffffffffffffff);
          if (uVar8 < 2) {
            if ((*(byte *)(local_140 + 2) & 1) == 0) {
              if (local_148 != (IRuntime *)0x0) {
                if (*(undefined8 **)local_148 != (undefined8 *)0x0) {
                  (**(code **)**(undefined8 **)local_148)();
                }
                operator_delete(local_148);
              }
              local_148 = (IRuntime *)0x0;
              *(undefined4 *)(local_140 + 2) = 1;
              goto LAB_002c26e4;
            }
            lVar6 = *local_140;
            plVar9 = local_140;
          }
          else {
LAB_002c26e4:
            lVar6 = *local_140;
            plVar9 = local_140;
          }
          if (((lVar6 == 0) && (plVar9[1] == 0)) && (plVar9 != (long *)0x0)) {
            std::__ndk1::mutex::~mutex((mutex *)((long)plVar9 + 0x14));
            operator_delete(plVar9);
          }
        }
        std::__ndk1::mutex::unlock();
        if ((plStack_98 != (long *)0x0) &&
           (lVar6 = FUN_00255510(0xffffffffffffffff,plStack_98 + 1), lVar6 == 0)) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        plVar4 = local_f0;
        plVar1 = local_f8;
        local_f0 = (long *)0x0;
        local_110 = pIVar3;
        local_108 = local_f8;
        local_100 = plVar4;
        local_f8 = (long *)0x0;
                    /* try { // try from 002c2764 to 002c276f has its CatchHandler @ 002c2dc8 */
        margelo::nitro::Dispatcher::getRuntimeGlobalDispatcher((Runtime *)pIVar3);
        plVar9 = local_118;
        if (local_118 != (long *)0x0) {
          FUN_00259a00(1,local_118 + 2);
        }
        local_148 = pIVar3;
        local_140 = plVar1;
        local_108 = (long *)0x0;
        local_100 = (long *)0x0;
        local_138 = plVar4;
        local_130 = local_120;
        local_128 = plVar9;
        if (plVar9 != (long *)0x0) {
          FUN_00259a00(1,plVar9 + 2);
        }
        local_80[0] = (undefined8 **)0x0;
                    /* try { // try from 002c27a8 to 002c27af has its CatchHandler @ 002c2d9c */
        local_80[0] = (undefined8 **)operator_new(0x30);
        local_80[0][2] = plVar1;
        local_80[0][3] = plVar4;
        *local_80[0] = &PTR_FUN_00380158;
        local_80[0][1] = (undefined8 *)pIVar3;
        local_140 = (long *)0x0;
        local_138 = (undefined8 *)0x0;
        local_80[0][4] = local_120;
        local_80[0][5] = plVar9;
        local_130 = (undefined8 *)0x0;
        local_128 = (long *)0x0;
        if (((plVar9 != (long *)0x0) &&
            (std::__ndk1::__shared_weak_count::__release_weak(), local_118 != (long *)0x0)) &&
           (lVar6 = FUN_00255510(0xffffffffffffffff,local_118 + 1), lVar6 == 0)) {
          (**(code **)(*local_118 + 0x10))(local_118);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        if (local_100 != (long *)0x0) {
          uVar8 = FUN_00255510(0xffffffffffffffff);
          plVar9 = local_108;
          if (uVar8 < 2) {
            if ((*(byte *)(local_100 + 2) & 1) == 0) {
              if (local_108 != (long *)0x0) {
                if ((undefined8 *)*local_108 != (undefined8 *)0x0) {
                  (*(code *)**(undefined8 **)*local_108)();
                }
                operator_delete(plVar9);
              }
              local_108 = (long *)0x0;
              *(undefined4 *)(local_100 + 2) = 1;
              goto LAB_002c2870;
            }
            lVar6 = *local_100;
            plVar9 = local_100;
          }
          else {
LAB_002c2870:
            lVar6 = *local_100;
            plVar9 = local_100;
          }
          local_100 = plVar9;
          if (((lVar6 == 0) && (plVar9[1] == 0)) && (plVar9 != (long *)0x0)) {
            std::__ndk1::mutex::~mutex((mutex *)((long)plVar9 + 0x14));
            operator_delete(plVar9);
          }
        }
        if (local_f0 != (long *)0x0) {
          uVar8 = FUN_00255510(0xffffffffffffffff);
          plVar9 = local_f8;
          if (uVar8 < 2) {
            if ((*(byte *)(local_f0 + 2) & 1) == 0) {
              if (local_f8 != (long *)0x0) {
                if ((undefined8 *)*local_f8 != (undefined8 *)0x0) {
                  (*(code *)**(undefined8 **)*local_f8)();
                }
                operator_delete(plVar9);
              }
              local_f8 = (long *)0x0;
              *(undefined4 *)(local_f0 + 2) = 1;
              goto LAB_002c2900;
            }
            lVar6 = *local_f0;
            plVar9 = local_f0;
          }
          else {
LAB_002c2900:
            lVar6 = *local_f0;
            plVar9 = local_f0;
          }
          local_f0 = plVar9;
          if (((lVar6 == 0) && (plVar9[1] == 0)) && (plVar9 != (long *)0x0)) {
            std::__ndk1::mutex::~mutex((mutex *)((long)plVar9 + 0x14));
            operator_delete(plVar9);
          }
        }
        if (local_e8 != (undefined8 *)0x0) {
          (**(code **)*local_e8)();
        }
        if (local_80[0] == (undefined8 **)0x0) {
          pppuVar11 = local_c0;
LAB_002c29b4:
          *pppuVar11 = (undefined8 **)0x0;
        }
        else {
          if (local_80[0] != &local_a0) {
            pppuVar11 = local_80;
            local_c0[0] = local_80[0];
            goto LAB_002c29b4;
          }
          local_c0[0] = (undefined8 **)&local_e0;
                    /* try { // try from 002c29cc to 002c29d7 has its CatchHandler @ 002c2d54 */
          (*(code *)local_a0[3])(&local_a0,&local_e0);
        }
        local_b0 = '\x01';
        if (local_80[0] == &local_a0) {
          lVar6 = 4;
          ppuVar10 = &local_a0;
        }
        else {
          if (local_80[0] == (undefined8 **)0x0) goto LAB_002c2a10;
          lVar6 = 5;
          ppuVar10 = local_80[0];
        }
        (*(code *)(*ppuVar10)[lVar6])();
      }
LAB_002c2a10:
      local_a0 = (undefined8 *)0x0;
      plStack_98 = (long *)0x0;
                    /* try { // try from 002c2a14 to 002c2a1f has its CatchHandler @ 002c2e80 */
      margelo::nitro::JSICache::getOrCreateCache((Runtime *)pIVar3);
                    /* try { // try from 002c2a20 to 002c2a2f has its CatchHandler @ 002c2e6c */
      facebook::jsi::Value::Value((Value *)&local_f8,pIVar3,(Value *)local_170);
                    /* try { // try from 002c2a30 to 002c2a3f has its CatchHandler @ 002c2e58 */
      FUN_002c3a44(&local_110,&local_148,&local_f8);
      FUN_002c3c88(&local_a0,&local_110);
      if (local_108 != (long *)0x0) {
        uVar8 = FUN_00255510(0xffffffffffffffff);
        pIVar3 = local_110;
        if (uVar8 < 2) {
          if ((*(byte *)(local_108 + 2) & 1) == 0) {
            if (local_110 != (IRuntime *)0x0) {
              facebook::jsi::Value::~Value((Value *)local_110);
              operator_delete(pIVar3);
            }
            local_110 = (IRuntime *)0x0;
            *(undefined4 *)(local_108 + 2) = 1;
            goto LAB_002c2aa0;
          }
          lVar6 = *local_108;
          plVar9 = local_108;
        }
        else {
LAB_002c2aa0:
          lVar6 = *local_108;
          plVar9 = local_108;
        }
        local_108 = plVar9;
        if ((lVar6 == 0) && (plVar9[1] == 0)) {
          if (plVar9 != (long *)0x0) {
            std::__ndk1::mutex::~mutex((mutex *)((long)plVar9 + 0x14));
            operator_delete(plVar9);
          }
          local_108 = (long *)0x0;
        }
      }
      facebook::jsi::Value::~Value((Value *)&local_f8);
      std::__ndk1::mutex::unlock();
      plVar9 = local_140;
      if ((local_140 != (long *)0x0) &&
         (lVar6 = FUN_00255510(0xffffffffffffffff,local_140 + 1), lVar6 == 0)) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar9 = plStack_98;
      puVar5 = local_a0;
      *param_1 = 0;
      param_1[0x30] = 0;
      if (local_b0 == '\0') {
        param_1[0x40] = 1;
        *(long **)(param_1 + 0x50) = plStack_98;
        *(undefined8 **)(param_1 + 0x48) = local_a0;
      }
      else {
        if (local_c0[0] == (undefined8 **)0x0) {
          pppuVar11 = (undefined8 ***)(param_1 + 0x20);
LAB_002c2b60:
          *pppuVar11 = (undefined8 **)0x0;
          param_1[0x30] = 1;
          param_1[0x40] = 1;
          *(long **)(param_1 + 0x50) = plVar9;
          *(undefined8 **)(param_1 + 0x48) = puVar5;
        }
        else {
          if (local_c0[0] != (undefined8 **)&local_e0) {
            pppuVar11 = local_c0;
            *(undefined8 ***)(param_1 + 0x20) = local_c0[0];
            goto LAB_002c2b60;
          }
          *(undefined1 **)(param_1 + 0x20) = param_1;
                    /* try { // try from 002c2bb8 to 002c2bc3 has its CatchHandler @ 002c2d50 */
          (**(code **)(CONCAT71(uStack_df,local_e0) + 0x18))(&local_e0,param_1);
          param_1[0x30] = 1;
          param_1[0x40] = 1;
          *(long **)(param_1 + 0x50) = plStack_98;
          *(undefined8 **)(param_1 + 0x48) = local_a0;
          if (local_b0 == '\0') goto LAB_002c2c70;
        }
        if (local_c0[0] == (undefined8 **)&local_e0) {
          lVar6 = 4;
          ppuVar10 = (undefined8 **)&local_e0;
        }
        else {
          if (local_c0[0] == (undefined8 **)0x0) goto LAB_002c2c70;
          lVar6 = 5;
          ppuVar10 = local_c0[0];
        }
        (*(code *)(*ppuVar10)[lVar6])();
      }
    }
    else {
      *param_1 = 0;
      param_1[0x30] = 0;
      if (*(char *)(lVar6 + 0x8c0) != '\0') {
        plVar9 = *(long **)(lVar6 + 0x8b0);
        if (plVar9 == (long *)0x0) {
LAB_002c2614:
          *(long **)(param_1 + 0x20) = plVar9;
        }
        else {
          plVar1 = (long *)(lVar6 + 0x890);
          if (plVar9 != plVar1) {
                    /* try { // try from 002c2610 to 002c2613 has its CatchHandler @ 002c2d14 */
            plVar9 = (long *)(**(code **)(*plVar9 + 0x10))();
            goto LAB_002c2614;
          }
          *(undefined1 **)(param_1 + 0x20) = param_1;
                    /* try { // try from 002c2c38 to 002c2c43 has its CatchHandler @ 002c2d14 */
          (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
        }
        param_1[0x30] = 1;
      }
      param_1[0x40] = *(undefined1 *)(lVar6 + 0x8d0);
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar6 + 0x8d8);
      lVar6 = *(long *)(lVar6 + 0x8e0);
      *(long *)(param_1 + 0x50) = lVar6;
      if (lVar6 != 0) {
        FUN_00255510(1);
      }
    }
LAB_002c2c70:
    facebook::jsi::Value::~Value((Value *)local_170);
    if ((local_190 & 1) != 0) {
      operator_delete(local_180);
    }
    if (local_178 != (undefined8 *)0x0) {
      (**(code **)*local_178)();
    }
    facebook::jsi::Value::~Value((Value *)aIStack_158);
    goto LAB_002c2ca4;
  }
  lVar6 = param_2[1];
  *param_1 = 0;
  param_1[0x30] = 0;
  if (*(char *)(lVar6 + 0x8c0) != '\0') {
    plVar9 = *(long **)(lVar6 + 0x8b0);
    if (plVar9 == (long *)0x0) {
LAB_002c2998:
      *(long **)(param_1 + 0x20) = plVar9;
    }
    else {
      if (plVar9 != (long *)(lVar6 + 0x890)) {
                    /* try { // try from 002c2994 to 002c2997 has its CatchHandler @ 002c2d58 */
        plVar9 = (long *)(**(code **)(*plVar9 + 0x10))();
        goto LAB_002c2998;
      }
      *(undefined1 **)(param_1 + 0x20) = param_1;
                    /* try { // try from 002c2bf4 to 002c2bfb has its CatchHandler @ 002c2d58 */
      (**(code **)(**(long **)(lVar6 + 0x8b0) + 0x18))(*(long **)(lVar6 + 0x8b0),param_1);
    }
    param_1[0x30] = 1;
  }
  param_1[0x40] = *(undefined1 *)(lVar6 + 0x8d0);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar6 + 0x8d8);
  lVar6 = *(long *)(lVar6 + 0x8e0);
  *(long *)(param_1 + 0x50) = lVar6;
  if (lVar6 != 0) {
    FUN_00255510(1);
  }
LAB_002c2ca4:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c3028  FUN_002c3028 =====

void FUN_002c3028(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_002c3144(param_1 + 7);
  plVar4 = (long *)param_1[4];
  if (plVar4 == param_1) {
    lVar3 = 4;
  }
  else {
    if (plVar4 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == lVar2) {
        return;
      }
      goto LAB_002c30bc;
    }
    lVar3 = 5;
    param_1 = plVar4;
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x002c3098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + lVar3 * 8))(param_1);
    return;
  }
LAB_002c30bc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c30c0  FUN_002c30c0 =====

void FUN_002c30c0(long param_1)

{
  long lVar1;
  undefined1 uStack_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_002c3144(param_1 + 0x30);
  if (*(char *)(param_1 + 0x20) != '\0') {
    if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
                    /* try { // try from 002c3108 to 002c3113 has its CatchHandler @ 002c3140 */
      (*(code *)(&PTR_FUN_0038ae50)[*(uint *)(param_1 + 0x18)])(&uStack_29,param_1);
    }
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c3144  FUN_002c3144 =====

void FUN_002c3144(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  Value *this;
  void *pvVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (param_1[1] != 0) {
    uVar2 = FUN_00255510(0xffffffffffffffff);
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


// ===== 002c321c  FUN_002c321c =====

void FUN_002c321c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  FUN_002c3144(param_1 + 0x18);
  plVar4 = *(long **)(param_1 + 8);
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c32b4  FUN_002c32b4 =====

void FUN_002c32b4(byte *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_002c3144(param_1 + 0x28);
  if ((param_1[0x18] == 0) || ((*param_1 & 1) == 0)) {
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


// ===== 002c3334  FUN_002c3334 =====

void FUN_002c3334(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = *param_2;
  if (*(char *)(param_1 + 0xd5) != '\0') {
    if ((*(char *)(param_1 + 0xd0) != '\0') &&
       (pbVar4 = (byte *)param_1[0xcd], pbVar4 != (byte *)0x0)) {
      pbVar3 = (byte *)param_1[0xce];
      pbVar5 = pbVar4;
      if (pbVar3 != pbVar4) {
        do {
          pbVar5 = pbVar3 + -0x18;
          if ((*pbVar5 & 1) != 0) {
            operator_delete(*(void **)(pbVar3 + -8));
          }
          pbVar3 = pbVar5;
        } while (pbVar5 != pbVar4);
        pbVar5 = (byte *)param_1[0xcd];
      }
      param_1[0xce] = pbVar4;
      operator_delete(pbVar5);
    }
    if ((*(byte *)(param_1 + 0xc9) & 1) != 0) {
      operator_delete((void *)param_1[0xcb]);
    }
  }
  if (*(char *)(param_1 + 200) != '\0') {
    if ((*(char *)(param_1 + 0xc3) != '\0') &&
       (pbVar4 = (byte *)param_1[0xc0], pbVar4 != (byte *)0x0)) {
      pbVar3 = (byte *)param_1[0xc1];
      pbVar5 = pbVar4;
      if (pbVar3 != pbVar4) {
        do {
          pbVar5 = pbVar3 + -0x18;
          if ((*pbVar5 & 1) != 0) {
            operator_delete(*(void **)(pbVar3 + -8));
          }
          pbVar3 = pbVar5;
        } while (pbVar5 != pbVar4);
        pbVar5 = (byte *)param_1[0xc0];
      }
      param_1[0xc1] = pbVar4;
      operator_delete(pbVar5);
    }
    if ((*(byte *)(param_1 + 0xbc) & 1) != 0) {
      operator_delete((void *)param_1[0xbe]);
    }
  }
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  FUN_002c3474(param_1,param_2 + 1);
  return;
}


// ===== 002c3474  FUN_002c3474 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_002c3474(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  byte *pbVar6;
  byte *pbVar7;
  void *pvVar8;
  byte *pbVar9;
  undefined1 uStack_59;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pvVar4 = (void *)param_1[0xa8];
  *param_1 = *param_2;
  if (pvVar4 != (void *)0x0) {
    param_1[0xa9] = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = (void *)param_1[0xa4];
  if (pvVar4 != (void *)0x0) {
    param_1[0xa5] = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = (void *)param_1[0xa1];
  if (pvVar4 != (void *)0x0) {
    param_1[0xa2] = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = (void *)param_1[0x9e];
  if (pvVar4 != (void *)0x0) {
    param_1[0x9f] = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = (void *)param_1[0x9b];
  if (pvVar4 != (void *)0x0) {
    pvVar8 = (void *)param_1[0x9c];
    pvVar5 = pvVar4;
    if (pvVar8 != pvVar4) {
      do {
        if (*(uint *)((long)pvVar8 + -8) != 0xffffffff) {
                    /* try { // try from 002c353c to 002c3543 has its CatchHandler @ 002c37a4 */
          (*(code *)(&PTR_FUN_00380268)[*(uint *)((long)pvVar8 + -8)])
                    (&uStack_59,(long)pvVar8 + -0x68);
        }
        pvVar5 = (void *)((long)pvVar8 + -0x70);
        *(undefined4 *)((long)pvVar8 + -8) = 0xffffffff;
        pvVar8 = pvVar5;
      } while (pvVar5 != pvVar4);
      pvVar5 = (void *)param_1[0x9b];
    }
    param_1[0x9c] = pvVar4;
    operator_delete(pvVar5);
  }
  pvVar4 = (void *)param_1[0x98];
  if (pvVar4 != (void *)0x0) {
    param_1[0x99] = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = (void *)param_1[0x95];
  if (pvVar4 != (void *)0x0) {
    param_1[0x96] = pvVar4;
    operator_delete(pvVar4);
  }
  if ((*(byte *)(param_1 + 0x65) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x62);
  }
  else {
    operator_delete((void *)param_1[0x67]);
    bVar1 = *(byte *)(param_1 + 0x62);
  }
  if ((bVar1 & 1) == 0) {
    pvVar4 = (void *)param_1[0x5d];
  }
  else {
    operator_delete((void *)param_1[100]);
    pvVar4 = (void *)param_1[0x5d];
  }
  if (pvVar4 == (void *)0x0) {
    cVar2 = *(char *)(param_1 + 0x5c);
  }
  else {
    pvVar8 = (void *)param_1[0x5e];
    pvVar5 = pvVar4;
    if (pvVar8 != pvVar4) {
      do {
        if ((*(char *)((long)pvVar8 + -8) != '\0') && ((*(byte *)((long)pvVar8 + -0x20) & 1) != 0))
        {
          operator_delete(*(void **)((long)pvVar8 + -0x10));
        }
        if ((*(byte *)((long)pvVar8 + -0x38) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar8 + -0x28));
        }
        pvVar8 = (void *)((long)pvVar8 + -0x38);
      } while (pvVar8 != pvVar4);
      pvVar5 = (void *)param_1[0x5d];
    }
    param_1[0x5e] = pvVar4;
    operator_delete(pvVar5);
    cVar2 = *(char *)(param_1 + 0x5c);
  }
  if ((cVar2 != '\0') && ((*(byte *)(param_1 + 0x59) & 1) != 0)) {
    operator_delete((void *)param_1[0x5b]);
  }
  if ((*(byte *)(param_1 + 0x53) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x50);
  }
  else {
    operator_delete((void *)param_1[0x55]);
    bVar1 = *(byte *)(param_1 + 0x50);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x4d);
  }
  else {
    operator_delete((void *)param_1[0x52]);
    bVar1 = *(byte *)(param_1 + 0x4d);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x4a);
  }
  else {
    operator_delete((void *)param_1[0x4f]);
    bVar1 = *(byte *)(param_1 + 0x4a);
  }
  if ((bVar1 & 1) == 0) {
    pbVar7 = (byte *)param_1[0x46];
  }
  else {
    operator_delete((void *)param_1[0x4c]);
    pbVar7 = (byte *)param_1[0x46];
  }
  if (pbVar7 == (byte *)0x0) {
    pbVar7 = (byte *)param_1[0x43];
  }
  else {
    pbVar6 = (byte *)param_1[0x47];
    pbVar9 = pbVar7;
    if (pbVar6 != pbVar7) {
      do {
        pbVar9 = pbVar6 + -0x18;
        if ((*pbVar9 & 1) != 0) {
          operator_delete(*(void **)(pbVar6 + -8));
        }
        pbVar6 = pbVar9;
      } while (pbVar9 != pbVar7);
      pbVar9 = (byte *)param_1[0x46];
    }
    param_1[0x47] = pbVar7;
    operator_delete(pbVar9);
    pbVar7 = (byte *)param_1[0x43];
  }
  if (pbVar7 == (byte *)0x0) {
    bVar1 = *(byte *)(param_1 + 0x40);
  }
  else {
    pbVar6 = (byte *)param_1[0x44];
    pbVar9 = pbVar7;
    if (pbVar6 != pbVar7) {
      do {
        pbVar9 = pbVar6 + -0x18;
        if ((*pbVar9 & 1) != 0) {
          operator_delete(*(void **)(pbVar6 + -8));
        }
        pbVar6 = pbVar9;
      } while (pbVar9 != pbVar7);
      pbVar9 = (byte *)param_1[0x43];
    }
    param_1[0x44] = pbVar7;
    operator_delete(pbVar9);
    bVar1 = *(byte *)(param_1 + 0x40);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete((void *)param_1[0x42]);
  }
  *param_1 = param_2[1];
  FUN_002c37a8(param_1 + 10);
  *param_1 = param_2[2];
  folly::dynamic::destroy();
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 002c37a8  FUN_002c37a8 =====

void FUN_002c37a8(long param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar4 = *(undefined8 **)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = 0;
  if (puVar4 != (undefined8 *)0x0) {
    if ((void *)puVar4[3] != (void *)0x0) {
      operator_delete((void *)puVar4[3]);
    }
    pvVar2 = (void *)*puVar4;
    if (pvVar2 != (void *)0x0) {
      puVar4[1] = pvVar2;
      operator_delete(pvVar2);
    }
    operator_delete(puVar4);
  }
  pvVar2 = *(void **)(param_1 + 0xb8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0xc0) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0xa0);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0xa8) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0x88);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x90) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0x70);
  if (pvVar2 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    *(void **)(param_1 + 0x78) = pvVar2;
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      operator_delete(pvVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c3884  FUN_002c3884 =====

void FUN_002c3884(undefined8 param_1,long param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  pvVar2 = *(void **)(param_2 + 8);
  if (pvVar2 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    *(void **)(param_2 + 0x10) = pvVar2;
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      operator_delete(pvVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c38e4  FUN_002c38e4 =====

void FUN_002c38e4(undefined8 param_1,long param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  pvVar2 = *(void **)(param_2 + 0x48);
  if (pvVar2 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    *(void **)(param_2 + 0x50) = pvVar2;
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      operator_delete(pvVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c3944  FUN_002c3944 =====

void FUN_002c3944(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  runtime_error *this;
  undefined8 uVar2;
  IRuntime *pIVar3;
  Value aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_2 + 6) == 1) {
    pIVar3 = (IRuntime *)*param_2;
    facebook::jsi::Value::Value(aVStack_48,pIVar3,(Value *)(param_2 + 1));
    *param_1 = pIVar3;
    facebook::jsi::Value::Value((Value *)(param_1 + 1),aVStack_48);
    facebook::jsi::Value::~Value(aVStack_48);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
  else if (*(int *)(param_2 + 6) == 0) {
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002c39d4 to 002c39df has its CatchHandler @ 002c3a1c */
    std::runtime_error::runtime_error(this,"Cannot cast dynamic to a jsi::Value type");
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_38) {
    uVar2 = FUN_002a9bc8();
                    /* catch() { ... } // from try @ 002c39d4 with catch @ 002c3a1c */
    if (*(long *)(lVar1 + 0x28) == local_38) {
      __cxa_free_exception();
      FUN_00255d34(uVar2);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c3a44  FUN_002c3a44 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002c3a44(undefined8 *param_1,long *param_2,Value *param_3)

{
  long *plVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  Value *pVVar7;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  Value *local_70;
  undefined8 *puStack_68;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  pVVar7 = (Value *)operator_new(0x10);
  facebook::jsi::Value::Value(pVVar7,param_3);
  *param_1 = pVVar7;
  puStack_68 = (undefined8 *)operator_new(0x40);
  *(undefined1 *)(puStack_68 + 2) = 0;
  uVar6 = _UNK_001d8078;
  uVar5 = _DAT_001d8070;
  *(undefined8 *)((long)puStack_68 + 0x34) = 0;
  lVar15 = *param_2;
  param_1[1] = puStack_68;
  puStack_68[1] = uVar6;
  *puStack_68 = uVar5;
  *(undefined8 *)((long)puStack_68 + 0x1c) = 0;
  *(undefined8 *)((long)puStack_68 + 0x14) = 0;
  *(undefined8 *)((long)puStack_68 + 0x2c) = 0;
  *(undefined8 *)((long)puStack_68 + 0x24) = 0;
  local_70 = pVVar7;
  FUN_00255510(1,puStack_68 + 1);
  puVar12 = *(undefined8 **)(lVar15 + 0x38);
  if (puVar12 < *(undefined8 **)(lVar15 + 0x40)) {
    puVar12[1] = puStack_68;
    *puVar12 = local_70;
    *(undefined8 **)(lVar15 + 0x38) = puVar12 + 2;
LAB_002c3bcc:
    if (*(long *)(lVar4 + 0x28) == local_58) {
      return;
    }
  }
  else {
    puVar18 = *(undefined8 **)(lVar15 + 0x30);
    lVar16 = (long)puVar12 - (long)puVar18 >> 4;
    uVar2 = lVar16 + 1;
    if (uVar2 >> 0x3c == 0) {
      uVar9 = (long)*(undefined8 **)(lVar15 + 0x40) - (long)puVar18;
      uVar10 = (long)uVar9 >> 3;
      if (uVar10 <= uVar2) {
        uVar10 = uVar2;
      }
      if (0x7fffffffffffffef < uVar9) {
        uVar10 = 0xfffffffffffffff;
      }
      if (uVar10 >> 0x3c == 0) {
                    /* try { // try from 002c3b30 to 002c3b33 has its CatchHandler @ 002c3c54 */
        pvVar8 = operator_new(uVar10 << 4);
        puVar11 = puStack_68;
        pVVar7 = local_70;
        puVar13 = (undefined8 *)((long)pvVar8 + ((long)puVar12 - (long)puVar18));
        pvVar3 = (void *)((long)pvVar8 + uVar10 * 0x10);
        local_70 = (Value *)0x0;
        puStack_68 = (undefined8 *)0x0;
        puVar17 = puVar13 + 2;
        *puVar13 = pVVar7;
        *(undefined8 **)((long)pvVar8 + lVar16 * 0x10 + 8) = puVar11;
        if (puVar12 == puVar18) {
          *(undefined8 **)(lVar15 + 0x30) = puVar13;
          *(undefined8 **)(lVar15 + 0x38) = puVar17;
          *(void **)(lVar15 + 0x40) = pvVar3;
        }
        else {
          do {
            puVar11 = puVar12 + -2;
            lVar16 = puVar12[-1];
            puVar14 = puVar13 + -2;
            *puVar14 = *puVar11;
            puVar13[-1] = lVar16;
            if (lVar16 != 0) {
              FUN_00255510(1,lVar16 + 8);
            }
            puVar12 = puVar11;
            puVar13 = puVar14;
          } while (puVar11 != puVar18);
          puVar12 = *(undefined8 **)(lVar15 + 0x30);
          puVar18 = *(undefined8 **)(lVar15 + 0x38);
          *(undefined8 **)(lVar15 + 0x30) = puVar14;
          *(undefined8 **)(lVar15 + 0x38) = puVar17;
          *(void **)(lVar15 + 0x40) = pvVar3;
          while (puVar18 != puVar12) {
            plVar1 = puVar18 + -1;
            puVar18 = puVar18 + -2;
            if (*plVar1 != 0) {
              FUN_00255510(0xffffffffffffffff,*plVar1 + 8);
                    /* try { // try from 002c3c1c to 002c3c23 has its CatchHandler @ 002c3c84 */
              FUN_002c3d84(puVar18);
            }
          }
        }
        if (puVar12 != (undefined8 *)0x0) {
          operator_delete(puVar12);
        }
        *(undefined8 **)(lVar15 + 0x38) = puVar17;
        if (puStack_68 != (undefined8 *)0x0) {
          FUN_00255510(0xffffffffffffffff,puStack_68 + 1);
                    /* try { // try from 002c3bc4 to 002c3bcb has its CatchHandler @ 002c3c50 */
          FUN_002c3d84(&local_70);
        }
        goto LAB_002c3bcc;
      }
    }
    else {
      if (*(long *)(lVar4 + 0x28) != local_58) goto LAB_002c3c80;
                    /* try { // try from 002c3c38 to 002c3c4f has its CatchHandler @ 002c3c54 */
      FUN_002c4014();
    }
    if (*(long *)(lVar4 + 0x28) == local_58) {
      FUN_00260a2c();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 002c3bc4 with catch @ 002c3c50
                        */
      FUN_0025ad9c();
    }
  }
LAB_002c3c80:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c3c88  FUN_002c3c88 =====

undefined8 * FUN_002c3c88(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  Value *this;
  void *pvVar5;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  if (param_1 != param_2) {
    if (param_1[1] != 0) {
      uVar3 = FUN_00255510(0xffffffffffffffff);
      if ((uVar3 < 2) && ((*(byte *)(param_1[1] + 0x10) & 1) == 0)) {
        this = (Value *)*param_1;
        if (this != (Value *)0x0) {
          facebook::jsi::Value::~Value(this);
          operator_delete(this);
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
    lVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      FUN_00255510(1);
    }
  }
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c3d84  FUN_002c3d84 =====

void FUN_002c3d84(long param_1)

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
      FUN_00264e5c(abStack_50,PTR_typeinfo_name_00395378,1);
      this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002c3e3c to 002c3e4f has its CatchHandler @ 002c3f74 */
      std::__ndk1::operator+("WeakReference<",abStack_50);
                    /* try { // try from 002c3e50 to 002c3e63 has its CatchHandler @ 002c3f5c */
      FUN_00263450(auStack_98,auStack_b0,"> encountered a stale `_value` - BorrowingReference<");
                    /* try { // try from 002c3e64 to 002c3e73 has its CatchHandler @ 002c3f2c */
      FUN_00264d50(auStack_80,auStack_98,abStack_50);
                    /* try { // try from 002c3e74 to 002c3e87 has its CatchHandler @ 002c3f08 */
      FUN_00263450(abStack_68,auStack_80,"> should\'ve already deleted this!");
                    /* try { // try from 002c3e8c to 002c3ec7 has its CatchHandler @ 002c3ec8 */
      std::runtime_error::runtime_error(this,abStack_68);
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002c3fac;
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
LAB_002c3fac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c3fb0  FUN_002c3fb0 =====

void FUN_002c3fb0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_00255510(0xffffffffffffffff,*(long *)(param_1 + 8) + 8);
                    /* try { // try from 002c3fe4 to 002c3feb has its CatchHandler @ 002c4010 */
    FUN_002c3d84(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c4014  FUN_002c4014 =====

void FUN_002c4014(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_00260abc("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c404c  FUN_002c404c =====

void FUN_002c404c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_0026d198(param_1 + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c40a0  FUN_002c40a0 =====

void FUN_002c40a0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00380158;
  if (param_1[5] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_0026d198(param_1 + 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c4100  FUN_002c4100 =====

void FUN_002c4100(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00380158;
  if (param_1[5] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0026d198(param_1 + 2);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c4168  FUN_002c4168 =====

undefined8 * FUN_002c4168(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x18);
  *puVar2 = &PTR_FUN_00380158;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  puVar2[3] = lVar3;
  if (lVar3 != 0) {
    FUN_00255510(1);
  }
  lVar3 = *(long *)(param_1 + 0x28);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = lVar3;
  if (lVar3 != 0) {
    FUN_00259a00(1,lVar3 + 0x10);
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c4204  FUN_002c4204 =====

void FUN_002c4204(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00380158;
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[2] = uVar4;
  param_2[3] = lVar2;
  if (lVar2 != 0) {
    FUN_00255510(1);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[5] = lVar2;
  if (lVar2 != 0) {
    FUN_00259a00(1,lVar2 + 0x10);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c4298  FUN_002c4298 =====

void FUN_002c4298(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x28) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_0026d198(param_1 + 0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c42ec  FUN_002c42ec =====

void FUN_002c42ec(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)((long)param_1 + 0x28) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0026d198((long)param_1 + 0x10);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c4348  FUN_002c4348 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002c4348(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  ulong *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  ulong local_98;
  ulong uStack_90;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  ulong *local_60;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*(long *)(param_1 + 0x28) == 0) {
    plVar5 = (long *)0x0;
LAB_002c4438:
                    /* try { // try from 002c4438 to 002c443f has its CatchHandler @ 002c4588 */
    local_70 = (undefined8 *)operator_new(0x60);
    puVar4 = PTR_typeinfo_name_00395380;
    uStack_78 = _UNK_001d8208;
    local_80 = _DAT_001d8200;
    *(undefined1 *)((long)local_70 + 0x5f) = 0;
    uVar11 = *(undefined8 *)(puVar4 + 0x20);
    uVar13 = *(undefined8 *)(puVar4 + 0x38);
    uVar12 = *(undefined8 *)(puVar4 + 0x30);
    uVar10 = *(undefined8 *)(puVar4 + 0x48);
    uVar9 = *(undefined8 *)(puVar4 + 0x40);
    local_70[5] = *(undefined8 *)(puVar4 + 0x28);
    local_70[4] = uVar11;
    local_70[7] = uVar13;
    local_70[6] = uVar12;
    uVar12 = *(undefined8 *)(puVar4 + 0x57);
    uVar11 = *(undefined8 *)(puVar4 + 0x4f);
    local_70[9] = uVar10;
    local_70[8] = uVar9;
    *(undefined8 *)((long)local_70 + 0x57) = uVar12;
    *(undefined8 *)((long)local_70 + 0x4f) = uVar11;
    uVar9 = *(undefined8 *)puVar4;
    uVar11 = *(undefined8 *)(puVar4 + 0x18);
    uVar10 = *(undefined8 *)(puVar4 + 0x10);
    local_70[1] = *(undefined8 *)(puVar4 + 8);
    *local_70 = uVar9;
    local_70[3] = uVar11;
    local_70[2] = uVar10;
                    /* try { // try from 002c447c to 002c448b has its CatchHandler @ 002c4570 */
    margelo::nitro::TypeInfo::demangleName((basic_string *)&local_80,true);
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    if (plVar5 == (long *)0x0) goto LAB_002c4500;
  }
  else {
    plVar5 = (long *)std::__ndk1::__shared_weak_count::lock();
    if ((plVar5 == (long *)0x0) || (plVar8 = *(long **)(param_1 + 0x20), plVar8 == (long *)0x0))
    goto LAB_002c4438;
    uStack_a8 = *(ulong *)(param_1 + 0x10);
    local_b0 = *(ulong *)(param_1 + 8);
    local_a0 = *(void **)(param_1 + 0x18);
    if (local_a0 != (void *)0x0) {
      FUN_00255510(1);
    }
    uVar1 = *param_2;
    uVar2 = param_2[1];
    local_98 = uVar1;
    uStack_90 = uVar2;
    if (uVar2 != 0) {
      FUN_00259a00(1,uVar2 + 8);
    }
    local_60 = (ulong *)0x0;
                    /* try { // try from 002c43c8 to 002c43cf has its CatchHandler @ 002c4560 */
    local_60 = (ulong *)operator_new(0x30);
    local_60[5] = uVar2;
    *local_60 = (ulong)&PTR_FUN_003801e8;
    local_60[2] = uStack_a8;
    local_60[1] = local_b0;
    *(undefined8 *)((ulong)&local_b0 | 8) = 0;
    ((undefined8 *)((ulong)&local_b0 | 8))[1] = 0;
    local_60[3] = (ulong)local_a0;
    local_60[4] = uVar1;
    local_98 = 0;
    uStack_90 = 0;
                    /* try { // try from 002c440c to 002c441b has its CatchHandler @ 002c4528 */
    (**(code **)(*plVar8 + 0x18))(plVar8,&local_80);
    if (local_60 == &local_80) {
      lVar7 = 4;
      puVar6 = &local_80;
LAB_002c44cc:
      (**(code **)(*puVar6 + lVar7 * 8))();
    }
    else if (local_60 != (ulong *)0x0) {
      lVar7 = 5;
      puVar6 = local_60;
      goto LAB_002c44cc;
    }
  }
  lVar7 = FUN_00255510(0xffffffffffffffff,plVar5 + 1);
  if (lVar7 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
LAB_002c4500:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c45b0  FUN_002c45b0 =====

void FUN_002c45b0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395380) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002c4600  FUN_002c4600 =====

undefined * FUN_002c4600(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395388;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c4640  FUN_002c4640 =====

void FUN_002c4640(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x20);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    FUN_0026d198(param_1 + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c46c0  FUN_002c46c0 =====

void FUN_002c46c0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[5];
  *param_1 = &PTR_FUN_003801e8;
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    FUN_0026d198(param_1 + 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c474c  FUN_002c474c =====

void FUN_002c474c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[5];
  *param_1 = &PTR_FUN_003801e8;
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0026d198(param_1 + 2);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c47e0  FUN_002c47e0 =====

undefined8 * FUN_002c47e0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x18);
  *puVar2 = &PTR_FUN_003801e8;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  puVar2[3] = lVar3;
  if (lVar3 != 0) {
    FUN_00255510(1);
  }
  lVar3 = *(long *)(param_1 + 0x28);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = lVar3;
  if (lVar3 != 0) {
    FUN_00259a00(1,lVar3 + 8);
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c487c  FUN_002c487c =====

void FUN_002c487c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_003801e8;
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[2] = uVar4;
  param_2[3] = lVar2;
  if (lVar2 != 0) {
    FUN_00255510(1);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[5] = lVar2;
  if (lVar2 != 0) {
    FUN_00259a00(1,lVar2 + 8);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c4910  FUN_002c4910 =====

void FUN_002c4910(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x28);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    FUN_0026d198(param_1 + 0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c4990  FUN_002c4990 =====

void FUN_002c4990(void *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)((long)param_1 + 0x28);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0026d198((long)param_1 + 0x10);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c4a18  FUN_002c4a18 =====

void FUN_002c4a18(long param_1)

{
  long lVar1;
  runtime_error *this;
  JSError *pJVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  Value aVStack_a0 [16];
  Value aVStack_90 [16];
  undefined1 auStack_80 [24];
  undefined4 local_68 [6];
  Value aVStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(param_1 + 0x10) == 0) || ((*(byte *)(*(long *)(param_1 + 0x18) + 0x10) & 1) != 0))
  {
    FUN_00264e5c(local_68,PTR_typeinfo_name_00395390,1);
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002c4b10 to 002c4b23 has its CatchHandler @ 002c4c8c */
    std::__ndk1::operator+("Cannot call ",(basic_string *)local_68);
                    /* try { // try from 002c4b24 to 002c4b37 has its CatchHandler @ 002c4c70 */
    FUN_00263450(aVStack_50,auStack_80," - the underlying `jsi::Function` has already been deleted!"
                );
                    /* try { // try from 002c4b3c to 002c4b73 has its CatchHandler @ 002c4c4c */
    std::runtime_error::runtime_error(this,(basic_string *)aVStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
  }
  else {
    plVar3 = *(long **)(param_1 + 0x20);
    plVar4 = *(long **)(param_1 + 8);
    if (plVar3 == (long *)0x0) {
      FUN_00264e5c(local_68,PTR_typeinfo_name_00394eb8,0);
      pJVar2 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002c4b94 to 002c4ba7 has its CatchHandler @ 002c4c88 */
      std::__ndk1::operator+("Cannot convert `nullptr` to NativeState<",(basic_string *)local_68);
                    /* try { // try from 002c4ba8 to 002c4bbb has its CatchHandler @ 002c4c48 */
      FUN_00263450(aVStack_50,auStack_80,&DAT_001d795b);
                    /* try { // try from 002c4bc0 to 002c4bfb has its CatchHandler @ 002c4c1c */
      facebook::jsi::JSError::JSError(pJVar2,plVar4,aVStack_50);
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(pJVar2,PTR_typeinfo_00394858,PTR__JSError_00394840);
      }
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      margelo::nitro::HybridObject::toObject((Runtime *)((long)plVar3 + *(long *)(*plVar3 + -0x20)))
      ;
      facebook::jsi::Value::Value(aVStack_50,aVStack_a0);
      local_68[0] = 0;
                    /* try { // try from 002c4a90 to 002c4aab has its CatchHandler @ 002c4bfc */
      (**(code **)(*plVar4 + 0x280))(aVStack_90,plVar4,uVar5,local_68,aVStack_50,1);
      facebook::jsi::Value::~Value((Value *)local_68);
      facebook::jsi::Value::~Value(aVStack_50);
      facebook::jsi::Value::~Value(aVStack_a0);
      facebook::jsi::Value::~Value(aVStack_90);
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c4cc4  FUN_002c4cc4 =====

void FUN_002c4cc4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395398) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002c4d14  FUN_002c4d14 =====

undefined * FUN_002c4d14(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003953a0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c4d54  FUN_002c4d54 =====

void FUN_002c4d54(long param_1)

{
  long lVar1;
  undefined1 uStack_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
                    /* try { // try from 002c4d8c to 002c4d97 has its CatchHandler @ 002c4dc4 */
    (*(code *)(&PTR_FUN_0038ae50)[*(uint *)(param_1 + 0x18)])(&uStack_29,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c4dc8  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>,(std::__ndk1::__variant_detail::_Trait)1>const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>>&,std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>,(std::__ndk1::__variant_detail::_Trait)1>const&)::{lambda(auto:1&,auto:2&&)#1}&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>const&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,
   0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>,
   (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName> >&,
   std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>,
   (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>
   const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>,
   (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName> >&,
   std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>,
   (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName> const&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,0ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>,(std::__ndk1::__variant_detail::_Trait)1>const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>>&,std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>,(std::__ndk1::__variant_detail::_Trait)1>const&)::_lambda(auto:1&,auto:2&&)_1_&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>const&>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  lVar1 = *(long *)(param_3 + 8);
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(long *)(param_2 + 8) = lVar1;
  if (lVar1 != 0) {
    param_1 = (_lambda_auto_1__auto_2____1_ *)FUN_00259a00(1,lVar1 + 8);
  }
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return (_func_decltype_auto *)param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c4e20  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>,(std::__ndk1::__variant_detail::_Trait)1>const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>>&,std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>,(std::__ndk1::__variant_detail::_Trait)1>const&)::{lambda(auto:1&,auto:2&&)#1}&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>const&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,
   1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>,
   (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName> >&,
   std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>,
   (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>
   const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>,
   (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName> >&,
   std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>,
   (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName> const&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,1ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>,(std::__ndk1::__variant_detail::_Trait)1>const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>>&,std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>,(std::__ndk1::__variant_detail::_Trait)1>const&)::_lambda(auto:1&,auto:2&&)_1_&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>const&>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)param_2 = *(undefined4 *)param_3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return (_func_decltype_auto *)param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c4e60  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul,2ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>,(std::__ndk1::__variant_detail::_Trait)1>const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>>&,std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>,(std::__ndk1::__variant_detail::_Trait)1>const&)::{lambda(auto:1&,auto:2&&)#1}&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>const&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul,
   2ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>,
   (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName> >&,
   std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>,
   (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>
   const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>,
   (std::__ndk1::__variant_detail::_Trait)1>
   const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName> >&,
   std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>,
   (std::__ndk1::__variant_detail::_Trait)1> const&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName>&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName> const&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul,2ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>,(std::__ndk1::__variant_detail::_Trait)1>const&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>>&,std::__ndk1::__variant_detail::__copy_constructor<std::__ndk1::__variant_detail::__traits<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>,(std::__ndk1::__variant_detail::_Trait)1>const&)::_lambda(auto:1&,auto:2&&)_1_&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,margelo::nitro::rive::DataBindMode,margelo::nitro::rive::DataBindByName>const&>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  long lVar1;
  _func_decltype_auto *p_Var2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  if (((byte)*param_3 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
      uVar4 = *(undefined8 *)(param_3 + 8);
      uVar3 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_2 + 8) = uVar4;
      *(undefined8 *)param_2 = uVar3;
      return (_func_decltype_auto *)param_1;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    p_Var2 = (_func_decltype_auto *)
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
             __init_copy_ctor_external
                       ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)param_2,*(char **)(param_3 + 0x10),*(ulong *)(param_3 + 8));
    return p_Var2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c4ed8  FUN_002c4ed8 =====

void FUN_002c4ed8(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,IRuntime *param_2,IRuntime *param_3,byte *param_4)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar8;
  undefined8 uVar9;
  Value aVStack_b0 [16];
  Value *local_a0;
  long *local_98;
  undefined8 *local_90;
  long *local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  byte *pbStack_70;
  undefined7 local_68;
  undefined1 uStack_61;
  undefined7 uStack_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (((*(long *)(param_4 + 0x28) != 0) && ((*(byte *)(*(long *)(param_4 + 0x30) + 0x10) & 1) == 0))
     && (uVar5 = facebook::jsi::Value::strictEquals
                           (param_2,*(Value **)(param_4 + 0x28),(Value *)param_3),
        unaff_x20 = param_4, (uVar5 & 1) != 0)) {
    bVar2 = param_4[0x18];
    *param_1 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    param_1[0x18] =
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    if (bVar2 != 0) {
      if ((*param_4 & 1) == 0) {
        uVar9 = *(undefined8 *)param_4;
        uVar7 = *(undefined8 *)(param_4 + 0x10);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_4 + 8);
        *(undefined8 *)param_1 = uVar9;
        *(undefined8 *)(param_1 + 0x10) = uVar7;
      }
      else {
                    /* try { // try from 002c513c to 002c5147 has its CatchHandler @ 002c5180 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external(param_1,*(char **)(param_4 + 0x10),*(ulong *)(param_4 + 8));
      }
      param_1[0x18] =
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1;
    }
    uVar7 = *(undefined8 *)(param_4 + 0x28);
    lVar6 = *(long *)(param_4 + 0x30);
    param_1[0x20] =
         *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (param_4 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = uVar7;
    *(long *)(param_1 + 0x30) = lVar6;
    if (lVar6 != 0) {
      FUN_00255510(1);
    }
    goto LAB_002c510c;
  }
  iVar1 = *(int *)param_3;
  if (iVar1 == 0) {
    bVar8 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  }
  else {
    facebook::jsi::Value::asString(param_3);
                    /* try { // try from 002c4f8c to 002c4f9b has its CatchHandler @ 002c519c */
    (**(code **)(*(long *)param_2 + 0x120))(&local_80,param_2,&local_90);
    if (local_90 != (undefined8 *)0x0) {
      (**(code **)*local_90)();
    }
    local_68 = uStack_7f;
    uStack_61 = uStack_78;
    uStack_60 = uStack_77;
    unaff_x20 = pbStack_70;
    bVar8 = local_80;
  }
  local_80 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  uStack_7f = 0;
  uStack_78 = 0;
  uStack_77 = 0;
                    /* try { // try from 002c4fd0 to 002c4fdb has its CatchHandler @ 002c51dc */
  margelo::nitro::JSICache::getOrCreateCache((Runtime *)param_2);
                    /* try { // try from 002c4fdc to 002c4feb has its CatchHandler @ 002c51cc */
  facebook::jsi::Value::Value(aVStack_b0,param_2,(Value *)param_3);
                    /* try { // try from 002c4fec to 002c4ffb has its CatchHandler @ 002c51bc */
  FUN_002c3a44(&local_a0,&local_90,aVStack_b0);
  FUN_002c3c88(&local_80,&local_a0);
  if (local_98 != (long *)0x0) {
    uVar5 = FUN_00255510(0xffffffffffffffff);
    if (uVar5 < 2) {
      if ((*(byte *)(local_98 + 2) & 1) == 0) {
        if (local_a0 != (Value *)0x0) {
          facebook::jsi::Value::~Value(local_a0);
          operator_delete(local_a0);
        }
        local_a0 = (Value *)0x0;
        *(undefined4 *)(local_98 + 2) = 1;
        goto LAB_002c505c;
      }
      lVar6 = *local_98;
      plVar4 = local_98;
    }
    else {
LAB_002c505c:
      lVar6 = *local_98;
      plVar4 = local_98;
    }
    local_98 = plVar4;
    if ((lVar6 == 0) && (plVar4[1] == 0)) {
      if (plVar4 != (long *)0x0) {
        std::__ndk1::mutex::~mutex((mutex *)((long)plVar4 + 0x14));
        operator_delete(plVar4);
      }
      local_98 = (long *)0x0;
    }
  }
  facebook::jsi::Value::~Value(aVStack_b0);
  std::__ndk1::mutex::unlock();
  if ((local_88 != (long *)0x0) &&
     (lVar6 = FUN_00255510(0xffffffffffffffff,local_88 + 1), lVar6 == 0)) {
    (**(code **)(*local_88 + 0x10))(local_88);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  param_1[0x18] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  if (iVar1 != 0) {
    *param_1 = bVar8;
    *(ulong *)(param_1 + 1) = CONCAT17(uStack_61,local_68);
    *(ulong *)(param_1 + 8) = CONCAT71(uStack_60,uStack_61);
    *(byte **)(param_1 + 0x10) = unaff_x20;
    param_1[0x18] =
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1;
  }
  param_1[0x20] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1;
  *(ulong *)(param_1 + 0x30) = CONCAT71(uStack_77,uStack_78);
  *(ulong *)(param_1 + 0x28) = CONCAT71(uStack_7f,local_80);
LAB_002c510c:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c5214  FUN_002c5214 =====

void FUN_002c5214(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c524c  FUN_002c524c =====

void FUN_002c524c(void *param_1)

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


// ===== 002c5284  FUN_002c5284 =====

void FUN_002c5284(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00380300;
  puVar2[1] = uVar4;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c52e0  FUN_002c52e0 =====

void FUN_002c52e0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00380300;
  param_2[1] = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c5328  FUN_002c5328 =====

void FUN_002c5328(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c5360  FUN_002c5360 =====

void FUN_002c5360(void *param_1)

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


// ===== 002c5398  FUN_002c5398 =====

void FUN_002c5398(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x002c53d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 8))(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c53d8  FUN_002c53d8 =====

void FUN_002c53d8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003953a8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002c5428  FUN_002c5428 =====

undefined * FUN_002c5428(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003953b0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c5468  margelo::nitro::rive::views::HybridRiveViewProps::HybridRiveViewProps =====

/* margelo::nitro::rive::views::HybridRiveViewProps::HybridRiveViewProps(facebook::react::PropsParserContext
   const&, margelo::nitro::rive::views::HybridRiveViewProps const&, facebook::react::RawProps
   const&) */

void __thiscall
margelo::nitro::rive::views::HybridRiveViewProps::HybridRiveViewProps
          (HybridRiveViewProps *this,PropsParserContext *param_1,HybridRiveViewProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  RawProps **ppRVar2;
  long lVar3;
  RawProps *local_80;
  HybridRiveViewProps *pHStack_78;
  long *local_60;
  long local_48;
  
  local_60 = (long *)&local_80;
  ppRVar2 = &local_80;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_80 = (RawProps *)&PTR_FUN_00380300;
  pHStack_78 = (HybridRiveViewProps *)PTR_filterObjectKeys_00395368;
                    /* try { // try from 002c54b8 to 002c54cf has its CatchHandler @ 002c5690 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)&PTR_PTR_FUN_0037fd90,
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if ((RawProps **)local_60 == &local_80) {
    lVar3 = 4;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_002c54fc;
    lVar3 = 5;
    ppRVar2 = (RawProps **)local_60;
  }
  (**(code **)((long)*ppRVar2 + lVar3 * 8))();
LAB_002c54fc:
  *(undefined ***)this = &PTR_FUN_0037fd68;
                    /* try { // try from 002c550c to 002c5517 has its CatchHandler @ 002c5688 */
  local_80 = param_3;
  pHStack_78 = param_2;
  FUN_002c024c(this + 0x6e0,&local_80);
                    /* try { // try from 002c551c to 002c5527 has its CatchHandler @ 002c5680 */
  local_80 = param_3;
  pHStack_78 = param_2;
  FUN_002c04a4(this + 0x718,&local_80);
                    /* try { // try from 002c552c to 002c5537 has its CatchHandler @ 002c5678 */
  local_80 = param_3;
  pHStack_78 = param_2;
  FUN_002c06fc(this + 0x750,&local_80);
                    /* try { // try from 002c553c to 002c5547 has its CatchHandler @ 002c5670 */
  local_80 = param_3;
  pHStack_78 = param_2;
  FUN_002c0acc(this + 0x768,&local_80);
                    /* try { // try from 002c554c to 002c5557 has its CatchHandler @ 002c5668 */
  local_80 = param_3;
  pHStack_78 = param_2;
  FUN_002c0eb8(this + 0x790,&local_80);
                    /* try { // try from 002c555c to 002c5567 has its CatchHandler @ 002c5610 */
  local_80 = param_3;
  pHStack_78 = param_2;
  FUN_002c1288(this + 0x7b0,&local_80);
                    /* try { // try from 002c556c to 002c5577 has its CatchHandler @ 002c5600 */
  local_80 = param_3;
  pHStack_78 = param_2;
  FUN_002c1654(this + 2000,&local_80);
                    /* try { // try from 002c557c to 002c5587 has its CatchHandler @ 002c55f0 */
  local_80 = param_3;
  pHStack_78 = param_2;
  FUN_002c1a30(this + 0x7f8,&local_80);
                    /* try { // try from 002c558c to 002c5597 has its CatchHandler @ 002c55e0 */
  local_80 = param_3;
  pHStack_78 = param_2;
  FUN_002c1f64(this + 0x840,&local_80);
                    /* try { // try from 002c559c to 002c55a7 has its CatchHandler @ 002c55d0 */
  local_80 = param_3;
  pHStack_78 = param_2;
  FUN_002c2504(this + 0x890,&local_80);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c56c8  FUN_002c56c8 =====

void FUN_002c56c8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_002c574c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c5700  FUN_002c5700 =====

void FUN_002c5700(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_002c574c();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c574c  FUN_002c574c =====

void FUN_002c574c(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined1 uStack_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_002c3144(param_1 + 0x8d8);
  if (*(char *)(param_1 + 0x8c0) != '\0') {
    plVar2 = *(long **)(param_1 + 0x8b0);
    plVar4 = (long *)(param_1 + 0x890);
    if (plVar2 == plVar4) {
      lVar3 = 4;
    }
    else {
      if (plVar2 == (long *)0x0) goto LAB_002c57b0;
      lVar3 = 5;
      plVar4 = plVar2;
    }
    (**(code **)(*plVar4 + lVar3 * 8))();
  }
LAB_002c57b0:
  plVar4 = (long *)(param_1 + 0x840);
  FUN_002c3144(param_1 + 0x878);
  plVar2 = *(long **)(param_1 + 0x860);
  if (plVar2 == plVar4) {
    lVar3 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_002c57e8;
    lVar3 = 5;
    plVar4 = plVar2;
  }
  (**(code **)(*plVar4 + lVar3 * 8))();
LAB_002c57e8:
  FUN_002c3144(param_1 + 0x828);
  if (*(char *)(param_1 + 0x818) != '\0') {
    if (*(uint *)(param_1 + 0x810) != 0xffffffff) {
                    /* try { // try from 002c5810 to 002c581b has its CatchHandler @ 002c58f4 */
      (*(code *)(&PTR_FUN_0038ae50)[*(uint *)(param_1 + 0x810)])(&uStack_39,param_1 + 0x7f8);
    }
    *(undefined4 *)(param_1 + 0x810) = 0xffffffff;
  }
  FUN_002c3144(param_1 + 0x7e8);
  FUN_002c3144(param_1 + 0x7c0);
  FUN_002c3144(param_1 + 0x7a0);
  FUN_002c3144(param_1 + 0x780);
  plVar4 = *(long **)(param_1 + 0x770);
  if ((plVar4 != (long *)0x0) && (lVar3 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar3 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_002c3144(param_1 + 0x758);
  FUN_002c3144(param_1 + 0x740);
  if ((*(char *)(param_1 + 0x730) != '\0') && ((*(byte *)(param_1 + 0x718) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x728));
  }
  FUN_002c3144(param_1 + 0x708);
  if ((*(char *)(param_1 + 0x6f8) != '\0') && ((*(byte *)(param_1 + 0x6e0) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x6f0));
  }
  FUN_002c3334(param_1,&PTR_PTR_FUN_0037fd90);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c58f8  FUN_002c58f8 =====

void FUN_002c58f8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = (long)(PTR_vtable_00395420 + 0x20);
  folly::dynamic::destroy();
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


// ===== 002c597c  FUN_002c597c =====

void FUN_002c597c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = (long)(PTR_vtable_00395420 + 0x20);
  folly::dynamic::destroy();
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


// ===== 002c59e8  FUN_002c59e8 =====

void FUN_002c59e8(undefined4 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = 5;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[10] = 0x3f800000;
  folly::dynamic::destroy();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c5a5c  FUN_002c5a5c =====

void FUN_002c5a5c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00380b90;
  FUN_002c37a8(param_1 + 10);
  *param_1 = &PTR_FUN_00380bd0;
  folly::dynamic::destroy();
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


// ===== 002c5af0  FUN_002c5af0 =====

void FUN_002c5af0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00380b90;
  FUN_002c37a8(param_1 + 10);
  *param_1 = &PTR_FUN_00380bd0;
  folly::dynamic::destroy();
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


// ===== 002c5b6c  FUN_002c5b6c =====

void FUN_002c5b6c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_002c3474(param_1,&PTR_PTR_FUN_00380ad8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c5bac  FUN_002c5bac =====

void FUN_002c5bac(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_002c3474(param_1,&PTR_PTR_FUN_00380ad8);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c5c00  FUN_002c5c00 =====

void FUN_002c5c00(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_002c3334(param_1,PTR_VTT_00395418);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c5c40  FUN_002c5c40 =====

void FUN_002c5c40(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_002c3334(param_1,PTR_VTT_00395418);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c5c94  margelo::nitro::rive::views::HybridRiveViewComponentDescriptor::HybridRiveViewComponentDescriptor =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* margelo::nitro::rive::views::HybridRiveViewComponentDescriptor::HybridRiveViewComponentDescriptor(facebook::react::ComponentDescriptorParameters
   const&) */

void __thiscall
margelo::nitro::rive::views::HybridRiveViewComponentDescriptor::HybridRiveViewComponentDescriptor
          (HybridRiveViewComponentDescriptor *this,ComponentDescriptorParameters *param_1)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  undefined4 local_13f0 [2];
  undefined8 *local_13e8;
  void *local_13e0;
  void *pvStack_13d8;
  undefined8 local_13d0;
  void *pvStack_13c8;
  void *local_13c0;
  undefined8 uStack_13b8;
  void *local_13b0;
  void *pvStack_13a8;
  undefined8 uStack_13a0;
  undefined8 uStack_1398;
  undefined **local_1390;
  undefined8 uStack_1388;
  undefined8 local_1380;
  undefined8 uStack_1378;
  undefined4 local_1370 [2];
  undefined8 local_1368;
  undefined8 uStack_1360;
  undefined8 local_1358;
  undefined8 uStack_1350;
  undefined4 local_1348;
  undefined4 local_1340;
  undefined1 local_133c;
  undefined8 local_133b;
  undefined8 local_1333;
  undefined8 uStack_132b;
  undefined8 local_1323;
  undefined8 uStack_131b;
  undefined8 local_1313;
  undefined8 uStack_130b;
  undefined8 local_1303;
  undefined6 uStack_12fb;
  undefined2 uStack_12f5;
  undefined6 uStack_12f3;
  undefined8 uStack_12ed;
  undefined4 local_12e5;
  undefined8 local_12e1;
  undefined1 local_12d9;
  undefined1 uStack_12d8;
  undefined7 uStack_12d7;
  undefined8 uStack_12d0;
  undefined8 uStack_12c8;
  undefined8 uStack_12c0;
  undefined8 local_12b8;
  undefined8 uStack_12b0;
  undefined8 local_12a8;
  undefined8 uStack_12a0;
  undefined8 local_1298;
  undefined8 uStack_1290;
  undefined8 local_1288;
  undefined8 uStack_1280;
  undefined8 uStack_1278;
  undefined8 local_1270;
  undefined8 local_1268;
  undefined8 uStack_1260;
  undefined8 local_1258;
  undefined4 uStack_1250;
  undefined4 uStack_124c;
  undefined4 uStack_1248;
  undefined4 uStack_1244;
  undefined4 uStack_1240;
  undefined4 uStack_123c;
  undefined8 local_1238;
  undefined8 uStack_1230;
  undefined4 local_1228;
  undefined1 local_1224;
  undefined4 local_1220;
  undefined1 local_121c;
  undefined4 local_1218;
  undefined1 local_1214;
  undefined4 local_1210;
  undefined1 local_120c;
  undefined4 local_1208;
  undefined1 local_1204;
  undefined4 local_1200;
  undefined1 local_11fc;
  undefined4 local_11f8;
  undefined1 local_11f4;
  undefined4 local_11f0;
  undefined1 local_11ec;
  undefined4 local_11e8;
  undefined1 local_11e4;
  undefined4 local_11e0;
  undefined1 local_11dc;
  undefined4 local_11d8;
  undefined1 local_11d4;
  undefined4 local_11d0;
  undefined1 local_11cc;
  undefined4 local_11c8;
  undefined1 local_11c4;
  undefined4 local_11c0;
  undefined1 local_11bc;
  undefined4 local_11b8;
  undefined1 local_11b4;
  undefined4 local_11b0;
  undefined1 local_11ac;
  undefined1 local_11a8;
  undefined1 local_11a4;
  undefined1 local_1198;
  undefined8 local_1190;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
  undefined8 uStack_1178;
  undefined8 local_1170;
  undefined8 uStack_1168;
  undefined8 uStack_1160;
  undefined1 uStack_1158;
  undefined7 local_1157;
  undefined1 uStack_1150;
  undefined8 uStack_114f;
  undefined8 local_1144;
  undefined8 uStack_113c;
  undefined8 uStack_1134;
  undefined8 uStack_112c;
  undefined8 local_1124;
  undefined8 uStack_111c;
  undefined8 uStack_1114;
  undefined8 uStack_110c;
  undefined8 local_1104;
  undefined8 uStack_10fc;
  undefined8 uStack_10f4;
  undefined5 uStack_10ec;
  undefined3 local_10e7;
  undefined5 uStack_10e4;
  undefined1 local_10dc;
  undefined1 local_10d8;
  undefined1 local_10d4;
  undefined1 local_10d0;
  undefined1 local_10cc;
  undefined1 local_10c8;
  undefined1 local_10b0;
  undefined8 local_10a8;
  undefined8 uStack_10a0;
  undefined8 local_1098;
  undefined4 local_1090;
  undefined1 local_108c;
  undefined4 local_108b;
  undefined1 local_1087;
  undefined1 local_1086;
  undefined8 local_1080;
  undefined8 uStack_1078;
  undefined8 uStack_1070;
  undefined8 uStack_1068;
  undefined8 local_1060;
  undefined7 uStack_1058;
  undefined4 uStack_1051;
  undefined8 local_104c;
  undefined1 local_1044;
  undefined1 local_103c;
  undefined1 local_1038;
  undefined1 local_1030;
  undefined1 local_102c;
  undefined1 local_1024;
  undefined1 local_1020;
  undefined1 local_1018;
  undefined1 local_1014;
  undefined1 local_100c;
  undefined1 local_1008;
  undefined1 local_1000;
  undefined1 local_ffc;
  undefined1 local_ff4;
  undefined1 local_ff0;
  undefined1 local_fe8;
  undefined1 local_fe4;
  undefined1 local_fdc;
  undefined1 local_fd8;
  undefined1 local_fd0;
  undefined1 local_fcc;
  undefined1 local_fc4;
  undefined1 local_fc0;
  undefined1 local_fb8;
  undefined1 local_fb4;
  undefined1 local_fac;
  undefined1 local_fa8;
  undefined1 local_fa4;
  undefined1 local_fa0;
  undefined1 local_f9c;
  undefined1 local_f98;
  undefined1 local_f94;
  undefined1 local_f90;
  undefined1 local_f8c;
  undefined1 local_f88;
  undefined1 local_f84;
  undefined1 local_f80;
  undefined1 local_f7c;
  undefined1 local_f78;
  undefined1 local_f74;
  undefined1 local_f70;
  undefined1 local_f6c;
  undefined1 local_f68;
  undefined1 local_f64;
  undefined1 local_f60;
  undefined1 local_f5c;
  undefined1 local_f58;
  undefined1 local_f54;
  undefined1 local_f50;
  undefined1 local_f4c;
  undefined8 local_f48;
  undefined8 uStack_f40;
  undefined8 local_f38;
  undefined8 uStack_f30;
  undefined8 uStack_f28;
  undefined8 uStack_f20;
  undefined2 local_f18;
  undefined8 local_f14;
  undefined1 local_f0c;
  undefined8 local_f08;
  undefined8 local_f00;
  undefined8 uStack_ef8;
  undefined1 local_ef0;
  undefined8 local_ee8;
  undefined8 uStack_ee0;
  undefined8 uStack_ed8;
  undefined8 uStack_ed0;
  undefined8 local_ec8;
  undefined8 uStack_ec0;
  undefined8 uStack_eb8;
  undefined8 uStack_eb0;
  undefined8 local_ea8;
  undefined8 uStack_ea0;
  undefined8 uStack_e98;
  undefined8 uStack_e90;
  undefined8 local_e88;
  undefined8 uStack_e80;
  undefined8 uStack_e78;
  undefined8 uStack_e70;
  undefined8 local_e68;
  undefined8 uStack_e60;
  undefined8 uStack_e58;
  undefined8 uStack_e50;
  undefined8 local_e48;
  undefined8 uStack_e40;
  undefined8 local_e38;
  undefined8 uStack_e30;
  undefined8 local_e28;
  undefined8 uStack_e20;
  undefined8 local_e18;
  undefined8 uStack_e10;
  undefined8 local_e08;
  undefined8 uStack_e00;
  undefined8 local_df8;
  undefined6 uStack_df0;
  undefined2 uStack_dea;
  undefined6 uStack_de8;
  undefined1 local_de0;
  undefined1 local_ddc;
  undefined1 local_dd8;
  undefined8 local_dd4;
  undefined8 uStack_dcc;
  undefined1 local_dc4;
  undefined8 local_dc0;
  undefined2 local_db8;
  undefined1 local_db6;
  undefined4 local_db4;
  undefined1 local_db0;
  undefined1 local_d50;
  undefined1 local_d48;
  undefined1 local_ce8;
  undefined4 local_ce0;
  undefined2 local_cdc;
  undefined1 local_cd8;
  undefined1 local_cd4;
  undefined1 local_cd0;
  undefined1 local_ccc;
  undefined1 local_cc8;
  undefined1 local_cc4;
  undefined1 local_cc0;
  undefined1 local_cbc;
  undefined1 local_cb8;
  undefined1 local_cb4;
  undefined1 local_cb0;
  undefined1 local_c98;
  undefined1 local_c90;
  undefined8 local_c88;
  undefined8 local_c80;
  undefined1 local_c78;
  undefined1 local_c60;
  undefined1 local_c58;
  undefined8 local_c50;
  undefined7 local_c48;
  undefined4 uStack_c41;
  undefined8 local_c38;
  undefined8 uStack_c30;
  undefined8 local_c28;
  undefined8 uStack_c20;
  undefined1 local_c18;
  undefined8 local_c10;
  undefined8 local_c08;
  undefined1 local_c00;
  undefined1 local_bfc;
  undefined1 local_bf8;
  undefined8 local_bf0;
  undefined8 local_be8;
  undefined1 local_be0;
  undefined1 local_bdc;
  undefined1 local_bd8;
  undefined8 local_bd0;
  undefined8 local_bc8;
  undefined1 local_bc0;
  undefined1 local_bb8;
  undefined1 local_bb0;
  undefined8 local_ba8;
  undefined8 local_ba0;
  undefined1 local_b98;
  undefined1 local_b78;
  undefined1 local_b70;
  undefined8 local_b68;
  undefined8 local_b60;
  undefined8 local_b30;
  undefined1 local_b20;
  undefined8 local_b18;
  undefined8 local_b10;
  undefined1 local_b00;
  undefined1 local_ad0;
  undefined1 local_ac0;
  undefined8 local_ab8;
  undefined8 local_ab0;
  undefined4 local_aa0 [2];
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined8 local_a80;
  undefined8 uStack_a78;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
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
  void *local_120;
  undefined8 uStack_118;
  void *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0 [4];
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_a0;
  void *local_98;
  void *pvStack_90;
  undefined8 uStack_88;
  void *local_80;
  void *local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pvStack_13c8 = (void *)0x0;
  local_13d0 = 0;
  uStack_13b8 = 0;
  local_13c0 = (void *)0x0;
  pvStack_13a8 = (void *)0x0;
  local_13b0 = (void *)0x0;
  uStack_1398 = 0;
  uStack_13a0 = 0;
  pvStack_13d8 = (void *)0x0;
  local_13e0 = (void *)0x0;
                    /* try { // try from 002c5cd8 to 002c5cdf has its CatchHandler @ 002c63c8 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            ((ComponentDescriptor *)this,param_1,(RawPropsParser *)&local_13e0);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_003803b0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0[0] = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_a0 = 0;
  pvStack_90 = (void *)0x0;
  local_98 = (void *)0x0;
  local_80 = (void *)0x0;
  uStack_88 = 0;
  uStack_70 = 0;
  local_78 = (void *)0x0;
  local_100 = 0;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
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
  uStack_178 = 0;
  local_180 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
                    /* try { // try from 002c5d4c to 002c5d5f has its CatchHandler @ 002c63f0 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_13f0[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_13e8 = &local_1b0;
  facebook::react::RawProps::parse((RawPropsParser *)&local_f8);
  memset(local_1370,0,0x8d0);
  local_1390 = &PTR_FUN_0037ffa8;
  uStack_1388 = 0;
  local_aa0[0] = 5;
  local_a88 = 0;
  uStack_1378 = 0;
  local_1380 = 0;
  local_a80 = 0;
  uStack_a78 = 0x3f800000;
  uStack_a90 = 0;
  local_a98 = 0;
  uStack_1360 = 0;
  local_1368 = 0;
  uStack_1350 = 0;
  local_1358 = 0;
  local_1370[0] = 5;
  local_1348 = 0x3f800000;
  folly::dynamic::destroy();
  local_133c = 0;
  local_12e1 = 0;
  uStack_e00 = _UNK_001e4910;
  local_e08 = _DAT_001e4908;
  local_133b = DAT_001d8250;
  uStack_ef8 = _UNK_001d7f28;
  local_f00 = _DAT_001d7f20;
  uStack_e10 = _UNK_001e4900;
  local_e18 = _DAT_001e48f8;
  local_1224 = 0;
  uStack_e20 = _UNK_001e48f0;
  local_e28 = _DAT_001e48e8;
  uStack_e30 = _UNK_001e48e0;
  local_e38 = _DAT_001e48d8;
  uStack_de8 = 0;
  local_121c = 0;
  uStack_1250 = 0;
  local_1258 = 0;
  uStack_123c = 0;
  uStack_1260 = 0;
  local_1268 = 0;
  uStack_df0 = 0;
  uStack_dea = 0;
  local_df8 = 0;
  local_1340 = 0x10410710;
  local_12e5 = 0x40004;
  uStack_1244 = 0;
  uStack_1240 = 0;
  uStack_124c = 0;
  uStack_1248 = 0;
  uStack_1230 = 0;
  local_1238 = 0;
  local_1228 = 0x7fc00000;
  local_1220 = 0x7fc00000;
  local_1218 = 0x7fc00000;
  local_1210 = 0x7fc00000;
  local_1208 = 0x7fc00000;
  local_1200 = 0x7fc00000;
  local_11f8 = 0x7fc00000;
  local_11f0 = 0x7fc00000;
  local_11e8 = 0x7fc00000;
  local_11e0 = 0x7fc00000;
  local_11d8 = 0x7fc00000;
  local_11d0 = 0x7fc00000;
  local_11c8 = 0x7fc00000;
  local_11c0 = 0x7fc00000;
  local_11b8 = 0x7fc00000;
  local_11b0 = 0x7fc00000;
  uStack_114f = 0;
  uStack_1150 = 0;
  uStack_113c = 0;
  local_1144 = 0;
  uStack_112c = 0;
  uStack_1134 = 0;
  uStack_111c = 0;
  local_1124 = 0;
  uStack_110c = 0;
  uStack_1114 = 0;
  uStack_10fc = 0;
  local_1104 = 0;
  uStack_10ec = 0;
  uStack_10f4 = 0;
  local_10e7 = 0;
  uStack_10e4 = 0;
  local_108c = 1;
  local_108b = 0;
  local_1086 = 0x23;
  local_104c = 0x3f800000;
  uStack_f30 = 0;
  local_f38 = 0;
  uStack_f20 = 0;
  uStack_f28 = 0;
  uStack_f40 = 0;
  local_f48 = 0;
  local_db8 = 0x101;
  local_f14 = 0;
  local_1390 = &PTR_FUN_0037fd68;
  uStack_ee0 = 0;
  local_ee8 = 0;
  uStack_ed0 = 0;
  uStack_ed8 = 0;
  uStack_ec0 = 0;
  local_ec8 = 0;
  uStack_eb0 = 0;
  uStack_eb8 = 0;
  uStack_ea0 = 0;
  local_ea8 = 0;
  uStack_e90 = 0;
  uStack_e98 = 0;
  uStack_e80 = 0;
  local_e88 = 0;
  uStack_e70 = 0;
  uStack_e78 = 0;
  uStack_e60 = 0;
  local_e68 = 0;
  uStack_e50 = 0;
  uStack_e58 = 0;
  uStack_e40 = 0;
  local_e48 = 0;
  uStack_12d7 = 0;
  uStack_132b = 0;
  local_1333 = 0;
  uStack_131b = 0;
  local_1323 = 0;
  uStack_130b = 0;
  local_1313 = 0;
  uStack_12fb = 0;
  local_1303 = 0;
  uStack_12ed = 0;
  uStack_12f5 = 0;
  uStack_12f3 = 0;
  local_12d9 = 0;
  uStack_12d8 = 0;
  uStack_12c8 = 0;
  uStack_12d0 = 0;
  local_12b8 = 0;
  uStack_12c0 = 0;
  local_12a8 = 0;
  uStack_12b0 = 0;
  local_1298 = 0;
  uStack_12a0 = 0;
  local_1288 = 0;
  uStack_1290 = 0;
  uStack_1278 = 0;
  uStack_1280 = 0;
  local_1270 = 0;
  local_1214 = 0;
  local_120c = 0;
  local_1204 = 0;
  local_11fc = 0;
  local_11f4 = 0;
  local_11ec = 0;
  local_11e4 = 0;
  local_11dc = 0;
  local_11d4 = 0;
  local_11cc = 0;
  local_11c4 = 0;
  local_11bc = 0;
  local_11b4 = 0;
  local_11ac = 0;
  local_11a8 = 0;
  local_11a4 = 0;
  local_1198 = 0;
  local_10dc = 0;
  local_10d8 = 0;
  local_10d4 = 0;
  local_10d0 = 0;
  local_10cc = 0;
  local_10c8 = 0;
  local_10b0 = 0;
  uStack_1188 = 0;
  local_1190 = 0;
  uStack_1178 = 0;
  uStack_1180 = 0;
  uStack_1168 = 0;
  local_1170 = 0;
  uStack_1158 = 0;
  local_1157 = 0;
  uStack_1160 = 0;
  uStack_10a0 = 0;
  local_10a8 = 0;
  local_1098 = 0;
  local_1090 = 0;
  local_1087 = 0;
  uStack_1078 = 0;
  local_1080 = 0;
  uStack_1068 = 0;
  uStack_1070 = 0;
  uStack_1058 = 0;
  uStack_1051 = 0;
  local_1060 = 0;
  local_1044 = 0;
  local_103c = 0;
  local_1038 = 0;
  local_1030 = 0;
  local_102c = 0;
  local_1024 = 0;
  local_1020 = 0;
  local_1018 = 0;
  local_1014 = 0;
  local_100c = 0;
  local_1008 = 0;
  local_1000 = 0;
  local_ffc = 0;
  local_ff4 = 0;
  local_ff0 = 0;
  local_fe8 = 0;
  local_fe4 = 0;
  local_fdc = 0;
  local_fd8 = 0;
  local_fd0 = 0;
  local_fcc = 0;
  local_fc4 = 0;
  local_fc0 = 0;
  local_fb8 = 0;
  local_fb4 = 0;
  local_fac = 0;
  local_fa8 = 0;
  local_fa4 = 0;
  local_fa0 = 0;
  local_f9c = 0;
  local_f98 = 0;
  local_f94 = 0;
  local_f90 = 0;
  local_f8c = 0;
  local_f88 = 0;
  local_f84 = 0;
  local_f80 = 0;
  local_f7c = 0;
  local_f78 = 0;
  local_f74 = 0;
  local_f70 = 0;
  local_f6c = 0;
  local_f68 = 0;
  local_f64 = 0;
  local_f60 = 0;
  local_f5c = 0;
  local_f58 = 0;
  local_f54 = 0;
  local_f50 = 0;
  local_f4c = 0;
  local_f08 = 0;
  local_f18 = 0;
  local_f0c = 0;
  local_ef0 = 0;
  local_de0 = 0;
  local_ddc = 0;
  local_dd8 = 0;
  local_dc0 = 0;
  uStack_dcc = 0;
  local_dd4 = 0;
  local_dc4 = 0;
  local_db6 = 0;
  local_db4 = 0;
  local_db0 = 0;
  local_d50 = 0;
  local_d48 = 0;
  local_ce8 = 0;
  local_cd8 = 0;
  local_cd4 = 0;
  local_cd0 = 0;
  local_ccc = 0;
  local_cc8 = 0;
  local_cc4 = 0;
  local_cc0 = 0;
  local_cbc = 0;
  local_cb8 = 0;
  local_cb4 = 0;
  local_cdc = 0;
  local_ce0 = 0;
  local_cb0 = 0;
  local_c98 = 0;
  local_c90 = 0;
  local_c60 = 0;
  local_c58 = 0;
  local_bfc = 0;
  local_bf8 = 0;
  local_bdc = 0;
  local_bd8 = 0;
  local_bb8 = 0;
  local_bb0 = 0;
  local_b78 = 0;
  local_b70 = 0;
  local_b68 = 0;
  local_b60 = 0;
  local_b30 = 0;
  local_b20 = 0;
  local_b10 = 0;
  local_b18 = 0;
  local_b00 = 0;
  local_ad0 = 0;
  local_ac0 = 0;
  local_ab8 = 0;
  local_ab0 = 0;
  local_c78 = 0;
  local_c88 = 0;
  local_c80 = 0;
  local_c48 = 0;
  uStack_c41 = 0;
  local_c50 = 0;
  uStack_c20 = 0;
  local_c28 = 0;
  uStack_c30 = 0;
  local_c38 = 0;
  local_c18 = 0;
  local_c08 = 0;
  local_c10 = 0;
  local_c00 = 0;
  local_be8 = 0;
  local_bf0 = 0;
  local_be0 = 0;
  local_bc8 = 0;
  local_bd0 = 0;
  local_bc0 = 0;
  local_ba0 = 0;
  local_ba8 = 0;
  local_b98 = 0;
                    /* try { // try from 002c6200 to 002c6213 has its CatchHandler @ 002c63f0 */
  HybridRiveViewProps::HybridRiveViewProps
            ((HybridRiveViewProps *)local_aa0,(PropsParserContext *)local_13f0,
             (HybridRiveViewProps *)&local_1390,(RawProps *)&local_f8);
  FUN_002c574c(local_aa0);
  FUN_002c574c(&local_1390);
  facebook::react::RawPropsParser::postPrepare();
  pvVar3 = local_120;
  puVar4 = (undefined8 *)local_110;
  while (puVar4 != (undefined8 *)0x0) {
    plVar6 = (long *)puVar4[6];
    pvVar7 = (void *)*puVar4;
    local_120 = pvVar3;
    if ((plVar6 == (long *)0x0) || (lVar5 = FUN_00255510(0xffffffffffffffff,plVar6 + 1), lVar5 != 0)
       ) {
      bVar1 = *(byte *)(puVar4 + 2);
    }
    else {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__ndk1::__shared_weak_count::__release_weak();
      bVar1 = *(byte *)(puVar4 + 2);
    }
    if ((bVar1 & 1) != 0) {
      operator_delete((void *)puVar4[4]);
    }
    operator_delete(puVar4);
    pvVar3 = local_120;
    puVar4 = (undefined8 *)pvVar7;
  }
  local_120 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_158);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_188);
  std::__ndk1::mutex::~mutex((mutex *)&local_1b0);
  pvVar7 = local_80;
  pvVar3 = local_78;
  if (local_80 != (void *)0x0) {
    while (pvVar3 != pvVar7) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 002c6318 to 002c6323 has its CatchHandler @ 002c63f4 */
        (*(code *)(&PTR_FUN_00380418)[*(uint *)((long)pvVar3 + -8)])
                  (&local_1390,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_78 = pvVar7;
    operator_delete(local_80);
  }
  if (local_98 != (void *)0x0) {
    pvStack_90 = local_98;
    operator_delete(local_98);
  }
  folly::dynamic::destroy();
  facebook::jsi::Value::~Value((Value *)local_e0);
  if (local_13b0 != (void *)0x0) {
    pvStack_13a8 = local_13b0;
    operator_delete(local_13b0);
  }
  if (pvStack_13c8 != (void *)0x0) {
    local_13c0 = pvStack_13c8;
    operator_delete(pvStack_13c8);
  }
  if (local_13e0 != (void *)0x0) {
    pvStack_13d8 = local_13e0;
    operator_delete(local_13e0);
  }
  *(undefined **)this = PTR_vtable_00395370 + 0x10;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c63f8  FUN_002c63f8 =====

void FUN_002c63f8(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  pvVar2 = (void *)param_1[6];
  if (pvVar2 != (void *)0x0) {
    param_1[7] = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[3];
  if (pvVar2 != (void *)0x0) {
    param_1[4] = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)*param_1;
  if (pvVar2 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    param_1[1] = pvVar2;
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      operator_delete(pvVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c6488  FUN_002c6488 =====

void FUN_002c6488(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  pvVar2 = (void *)param_1[0xd];
  *param_1 = &PTR_FUN_00380288;
  if (pvVar2 != (void *)0x0) {
    param_1[0xe] = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[10];
  if (pvVar2 != (void *)0x0) {
    param_1[0xb] = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[7];
  if (pvVar2 != (void *)0x0) {
    param_1[8] = pvVar2;
    operator_delete(pvVar2);
  }
  plVar5 = (long *)param_1[6];
  if ((plVar5 != (long *)0x0) && (lVar3 = FUN_00255510(0xffffffffffffffff,plVar5 + 1), lVar3 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = (long *)param_1[4];
  if ((plVar5 == (long *)0x0) || (lVar3 = FUN_00255510(0xffffffffffffffff,plVar5 + 1), lVar3 != 0))
  {
    lVar3 = param_1[2];
  }
  else {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
    lVar3 = param_1[2];
  }
  if (lVar3 == 0) {
    if (*(long *)(lVar1 + 0x28) == lVar4) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar4) {
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c65a4  FUN_002c65a4 =====

void FUN_002c65a4(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_002c6488();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c65f0  FUN_002c65f0 =====

undefined * FUN_002c65f0(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_HybridRiveViewComponentName_003947e8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c6630  FUN_002c6630 =====

undefined * FUN_002c6630(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_HybridRiveViewComponentName_003947e8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c6670  FUN_002c6670 =====

undefined8 FUN_002c6670(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return 0x61;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c66ac  FUN_002c66ac =====

void FUN_002c66ac(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar4 = tpidr_el0;
  lVar9 = *(long *)(lVar4 + 0x28);
  uVar5 = (**(code **)(*param_2 + 0x20))();
  puVar6 = (undefined8 *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_00380780;
                    /* try { // try from 002c6718 to 002c6727 has its CatchHandler @ 002c6804 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_003807d0;
  uVar3 = *(uint *)((long)puVar6 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar5 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar5;
  lVar8 = *param_2;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar7 + 0x6b0) != '\0' || *(char *)(lVar7 + 0x6b1) != '\0') ||
             *(char *)(lVar7 + 0x1e8) != '\0') << 0xb;
                    /* try { // try from 002c67b0 to 002c67bb has its CatchHandler @ 002c67f4 */
  (**(code **)(lVar8 + 0x60))(param_2,pYVar1);
  param_1[1] = puVar6;
  *param_1 = pYVar1;
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 002c6834  FUN_002c6834 =====

void FUN_002c6834(undefined8 *param_1,long *param_2,shared_ptr *param_3,ShadowNodeFragment *param_4)

{
  YogaLayoutableShadowNode *this;
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  YogaLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  plVar5 = (long *)operator_new(0x400);
  this = (YogaLayoutableShadowNode *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_00380780;
                    /* try { // try from 002c688c to 002c689b has its CatchHandler @ 002c69dc */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            (this,(ShadowNode *)param_3,param_4);
  lVar6 = plVar5[4];
  plVar5[3] = (long)&PTR_FUN_003807d0;
  uVar2 = *(uint *)((long)plVar5 + 0x6c);
  uVar1 = uVar2 & 3 | (uint)((*(byte *)(lVar6 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)plVar5 + 0x6c) = uVar2 & 0xfffffff8 | uVar1;
  if ((*(uint *)(lVar6 + 0x50) & 0x30000000) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    if (*(char *)(lVar6 + 0x5b4) != '\0') {
      uVar7 = *(undefined4 *)(lVar6 + 0x5b0);
    }
  }
  *(undefined4 *)(plVar5 + 10) = uVar7;
  *(uint *)((long)plVar5 + 0x6c) =
       uVar2 & 0xfffff000 |
       uVar2 & 0x7f8 | uVar1 |
       (uint)((*(char *)(lVar6 + 0x6b0) != '\0' || *(char *)(lVar6 + 0x6b1) != '\0') ||
             *(char *)(lVar6 + 0x1e8) != '\0') << 0xb;
                    /* try { // try from 002c691c to 002c692b has its CatchHandler @ 002c69f4 */
  facebook::react::YogaLayoutableShadowNode::completeClone
            ((ShadowNode *)this,(ShadowNodeFragment *)param_3);
  local_68 = this;
  local_60 = plVar5;
  FUN_00259a00(1,plVar5 + 1);
                    /* try { // try from 002c693c to 002c694b has its CatchHandler @ 002c69c8 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_68);
  plVar4 = local_60;
  if ((local_60 != (long *)0x0) &&
     (lVar6 = FUN_00255510(0xffffffffffffffff,local_60 + 1), lVar6 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 002c6984 to 002c698f has its CatchHandler @ 002c69f4 */
  (**(code **)(*param_2 + 0x60))(param_2,this);
  param_1[1] = plVar5;
  *param_1 = this;
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 002c6a1c  FUN_002c6a1c =====

void FUN_002c6a1c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x002c6a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c6a64  margelo::nitro::rive::views::HybridRiveViewComponentDescriptor::cloneProps =====

/* margelo::nitro::rive::views::HybridRiveViewComponentDescriptor::cloneProps(facebook::react::PropsParserContext
   const&, std::__ndk1::shared_ptr<facebook::react::Props const> const&, facebook::react::RawProps)
   const */

void margelo::nitro::rive::views::HybridRiveViewComponentDescriptor::cloneProps
               (undefined8 *param_1,undefined8 param_2_00,undefined8 param_2,undefined8 *param_4,
               RawPropsParser *param_5)

{
  long lVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  facebook::react::RawProps::parse(param_5);
  FUN_002c95cc(&local_60,param_2,param_5,*param_4);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c6aec  FUN_002c6aec =====

void FUN_002c6aec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 local_70;
  long lStack_68;
  long *local_60;
  long *plStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 002c6b18 to 002c6b1f has its CatchHandler @ 002c6c6c */
  plVar2 = (long *)operator_new(0x28);
  plVar2[1] = 0;
  plVar2[2] = 0;
  plVar2[3] = 0;
  plVar2[4] = 0;
  *plVar2 = (long)&PTR_FUN_00380720;
                    /* try { // try from 002c6b48 to 002c6b4f has its CatchHandler @ 002c6c58 */
  puVar3 = (undefined8 *)operator_new(0x50);
  lStack_68 = param_4[1];
  local_70 = *param_4;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_00380898;
  if (lStack_68 != 0) {
    FUN_00259a00(1,lStack_68 + 0x10);
  }
                    /* try { // try from 002c6b94 to 002c6ba3 has its CatchHandler @ 002c6c18 */
  local_60 = plVar2 + 3;
  plStack_58 = plVar2;
  facebook::react::State::State((State *)(puVar3 + 3),&local_60,&local_70);
  if (lStack_68 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = plStack_58;
  if ((plStack_58 != (long *)0x0) &&
     (lVar4 = FUN_00255510(0xffffffffffffffff,plStack_58 + 1), lVar4 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = (State *)(puVar3 + 3);
  param_1[1] = puVar3;
  puVar3[3] = &PTR_FUN_00380568;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c6c94  FUN_002c6c94 =====

void FUN_002c6c94(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_68;
  long *local_60;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = *param_4;
  local_50 = (long *)param_4[1];
  if (local_50 != (long *)0x0) {
    FUN_00259a00(1,local_50 + 1);
  }
                    /* try { // try from 002c6cd8 to 002c6ce3 has its CatchHandler @ 002c6dcc */
  facebook::react::ShadowNodeFamily::getMostRecentState();
                    /* try { // try from 002c6ce8 to 002c6cef has its CatchHandler @ 002c6dbc */
  puVar3 = (undefined8 *)operator_new(0x50);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_00380518;
                    /* try { // try from 002c6d08 to 002c6d13 has its CatchHandler @ 002c6da0 */
  uVar4 = FUN_002c750c(puVar3 + 3,&local_58,local_68);
  *param_1 = uVar4;
  param_1[1] = puVar3;
  if ((local_60 != (long *)0x0) &&
     (lVar5 = FUN_00255510(0xffffffffffffffff,local_60 + 1), lVar5 == 0)) {
    (**(code **)(*local_60 + 0x10))(local_60);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar5 = FUN_00255510(0xffffffffffffffff,local_50 + 1), lVar5 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c6df4  FUN_002c6df4 =====

void FUN_002c6df4(undefined8 *param_1,long param_2,long param_3)

{
  EventTarget *pEVar1;
  EventEmitter *pEVar2;
  ShadowNodeFamily *pSVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  ShadowNodeFamily *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  long local_88;
  EventTarget *local_80;
  long *plStack_78;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  plVar5 = (long *)operator_new(0x48);
  *plVar5 = (long)&PTR_FUN_00380a08;
  local_80 = *(EventTarget **)(param_3 + 8);
  plStack_78 = *(long **)(param_3 + 0x10);
  pEVar1 = (EventTarget *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  if (plStack_78 != (long *)0x0) {
    FUN_00259a00(1,plStack_78 + 1);
  }
                    /* try { // try from 002c6e68 to 002c6e73 has its CatchHandler @ 002c715c */
  facebook::react::EventTarget::EventTarget(pEVar1,&local_80,*(undefined4 *)(param_3 + 4));
  plVar7 = plStack_78;
  if ((plStack_78 != (long *)0x0) &&
     (lVar6 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1), lVar6 == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 002c6eb0 to 002c6eb7 has its CatchHandler @ 002c7148 */
  plVar7 = (long *)operator_new(0x68);
  *plVar7 = (long)&PTR_FUN_003808e8;
  local_90 = *(undefined8 *)(param_2 + 8);
  local_88 = *(long *)(param_2 + 0x10);
  pEVar2 = (EventEmitter *)(plVar7 + 3);
  plVar7[2] = 0;
  plVar7[1] = 0;
  local_80 = pEVar1;
  plStack_78 = plVar5;
  if (local_88 != 0) {
    FUN_00259a00(1,local_88 + 0x10);
  }
                    /* try { // try from 002c6ef8 to 002c6f07 has its CatchHandler @ 002c7118 */
  facebook::react::EventEmitter::EventEmitter(pEVar2,&local_80,&local_90);
  *(undefined ***)pEVar2 = &PTR_FUN_00380938;
                    /* try { // try from 002c6f14 to 002c6f1b has its CatchHandler @ 002c7108 */
  puVar8 = (undefined8 *)operator_new(0x58);
  *puVar8 = &PTR_FUN_00380998;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8[6] = 0;
  puVar8[5] = 0;
  puVar8[8] = 0;
  puVar8[7] = 0;
  *(undefined8 *)((long)puVar8 + 0x4c) = 0;
  *(undefined8 *)((long)puVar8 + 0x44) = 0;
  puVar8[4] = 0;
  puVar8[3] = 0;
  plVar7[0xb] = (long)(puVar8 + 3);
  plVar7[0xc] = (long)puVar8;
  if (local_88 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = plStack_78;
  if ((plStack_78 != (long *)0x0) &&
     (lVar6 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 002c6f88 to 002c6f8f has its CatchHandler @ 002c70f8 */
  puVar8 = (undefined8 *)operator_new(0x1a0);
  puVar8[1] = 0;
  puVar8[2] = 0;
  pSVar3 = (ShadowNodeFamily *)(puVar8 + 4);
  *puVar8 = &PTR_FUN_00380a58;
  local_80 = (EventTarget *)pEVar2;
  plStack_78 = plVar7;
  FUN_00259a00(1,plVar7 + 1);
  local_90 = *(undefined8 *)(param_2 + 8);
  local_88 = *(long *)(param_2 + 0x10);
  if (local_88 != 0) {
    FUN_00259a00(1,local_88 + 0x10);
  }
                    /* try { // try from 002c6fd0 to 002c6fe7 has its CatchHandler @ 002c70c8 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar3,param_3,&local_80,&local_90,param_2);
  if (local_88 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = plStack_78;
  if ((plStack_78 != (long *)0x0) &&
     (lVar6 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = pSVar3;
  param_1[1] = puVar8;
  local_a0 = pSVar3;
  local_98 = puVar8;
  FUN_00259a00(1,puVar8 + 2);
                    /* try { // try from 002c7038 to 002c7043 has its CatchHandler @ 002c70a8 */
  facebook::react::EventEmitter::setShadowNodeFamily(pEVar2,&local_a0);
  if (local_98 != (undefined8 *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  lVar6 = FUN_00255510(0xffffffffffffffff,plVar7 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c7198  margelo::nitro::rive::views::HybridRiveViewComponentDescriptor::adopt =====

/* WARNING: Removing unreachable block (ram,0x002c72ec) */
/* WARNING: Removing unreachable block (ram,0x002c7338) */
/* WARNING: Removing unreachable block (ram,0x002c7354) */
/* margelo::nitro::rive::views::HybridRiveViewComponentDescriptor::adopt(facebook::react::ShadowNode&)
   const */

void __thiscall
margelo::nitro::rive::views::HybridRiveViewComponentDescriptor::adopt
          (HybridRiveViewComponentDescriptor *this,ShadowNode *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plStack_68;
  long *local_58;
  long *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar5 = *(long *)(param_1 + 8);
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 == (long *)0x0) {
    plStack_68 = (long *)0x0;
  }
  else {
    FUN_00259a00(1,plVar1 + 1);
    lVar3 = FUN_00255510(0xffffffffffffffff,plVar1 + 1);
    if (lVar3 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    FUN_00259a00(1,plVar1 + 1);
    FUN_00259a00(1,plVar1 + 1);
    plStack_68 = plVar1;
  }
                    /* try { // try from 002c7220 to 002c7227 has its CatchHandler @ 002c73c4 */
  local_50 = (long *)operator_new(0x28);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  *local_50 = (long)&PTR_FUN_00380720;
  local_50[1] = 0;
  local_50[2] = 0;
  local_58 = local_50 + 3;
  local_50[4] = (long)plStack_68;
  *local_58 = lVar5;
                    /* try { // try from 002c7254 to 002c725b has its CatchHandler @ 002c73b0 */
  puVar4 = (undefined8 *)operator_new(0x50);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_00380518;
                    /* try { // try from 002c7274 to 002c727f has its CatchHandler @ 002c7394 */
  uVar7 = FUN_002c750c(puVar4 + 3,&local_58,uVar7);
  plVar6 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar7;
  *(undefined8 **)(param_1 + 0x30) = puVar4;
  if ((plVar6 != (long *)0x0) && (lVar5 = FUN_00255510(0xffffffffffffffff,plVar6 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar5 = FUN_00255510(0xffffffffffffffff,local_50 + 1), lVar5 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if ((plVar1 == (long *)0x0) || (lVar5 = FUN_00255510(0xffffffffffffffff,plVar1 + 1), lVar5 != 0))
  {
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return;
    }
  }
  else {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    if (*(long *)(lVar2 + 0x28) == local_48) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c73f4  FUN_002c73f4 =====

void FUN_002c73f4(long *param_1)

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


// ===== 002c7480  FUN_002c7480 =====

void FUN_002c7480(long *param_1)

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


// ===== 002c750c  FUN_002c750c =====

State * FUN_002c750c(State *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_50;
  long *plStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plStack_48 = (long *)param_2[1];
  local_50 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
                    /* try { // try from 002c753c to 002c7543 has its CatchHandler @ 002c75a8 */
  facebook::react::State::State(param_1,&local_50);
  plVar2 = plStack_48;
  if ((plStack_48 != (long *)0x0) &&
     (lVar3 = FUN_00255510(0xffffffffffffffff,plStack_48 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined ***)param_1 = &PTR_FUN_00380568;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c75dc  FUN_002c75dc =====

void FUN_002c75dc(long *param_1)

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


// ===== 002c7668  FUN_002c7668 =====

void FUN_002c7668(long *param_1)

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


// ===== 002c76f4  FUN_002c76f4 =====

void FUN_002c76f4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[4];
  *param_1 = &PTR_FUN_003805d0;
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
  {
    lVar2 = param_1[2];
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
    lVar2 = param_1[2];
  }
  if (lVar2 == 0) {
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


// ===== 002c77b0  FUN_002c77b0 =====

void FUN_002c77b0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[4];
  *param_1 = &PTR_FUN_003805d0;
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
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


// ===== 002c7848  FUN_002c7848 =====

void FUN_002c7848(void)

{
  long lVar1;
  runtime_error *this;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002c7870 to 002c787b has its CatchHandler @ 002c78a4 */
  std::runtime_error::runtime_error(this,"HybridRiveViewState does not support folly!");
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c78cc  FUN_002c78cc =====

void FUN_002c78cc(void)

{
  long lVar1;
  runtime_error *this;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002c78f4 to 002c78ff has its CatchHandler @ 002c7928 */
  std::runtime_error::runtime_error(this,"HybridRiveViewState does not support MapBuffer!");
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c7950  FUN_002c7950 =====

void FUN_002c7950(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = 0;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c798c  FUN_002c798c =====

void FUN_002c798c(long param_1,dynamic *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined ***pppuVar4;
  undefined ****ppppuVar5;
  long lVar6;
  long lVar7;
  dynamic adStack_120 [48];
  undefined **local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined ***local_d0;
  undefined **local_c0 [4];
  undefined ***local_a0 [2];
  long local_90;
  long *local_88;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  folly::dynamic::dynamic(adStack_120,param_2);
  local_f0 = &PTR_FUN_003806a0;
  uStack_e8 = 0;
  local_e0 = 0;
  local_d0 = &local_f0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (plVar2 = (long *)std::__ndk1::__shared_weak_count::lock(), plVar2 != (long *)0x0)) {
    lVar7 = *(long *)(param_1 + 8);
    if (lVar7 != 0) {
      local_90 = lVar7;
      local_88 = plVar2;
      FUN_00259a00(1,plVar2 + 1);
      local_a0[0] = local_d0;
      if (local_d0 != (undefined ***)0x0) {
        if (local_d0 == &local_f0) {
          local_a0[0] = local_c0;
          (*(code *)local_f0[3])(&local_f0,local_c0);
        }
        else {
                    /* try { // try from 002c7a1c to 002c7a43 has its CatchHandler @ 002c7bdc */
          local_a0[0] = (undefined ***)(*(code *)(*local_d0)[2])();
        }
      }
      local_60 = (long *)0x0;
                    /* try { // try from 002c7a48 to 002c7a4f has its CatchHandler @ 002c7bf4 */
      plVar3 = (long *)operator_new(0x40);
      *plVar3 = (long)&PTR_FUN_00380610;
      if (local_a0[0] == (undefined ***)0x0) {
        ppppuVar5 = (undefined ****)(plVar3 + 6);
LAB_002c7a84:
        *ppppuVar5 = (undefined ***)0x0;
      }
      else {
        if (local_a0[0] != local_c0) {
          ppppuVar5 = local_a0;
          plVar3[6] = (long)local_a0[0];
          goto LAB_002c7a84;
        }
        plVar3[6] = (long)(plVar3 + 2);
                    /* try { // try from 002c7a98 to 002c7aa7 has its CatchHandler @ 002c7bd8 */
        (*(code *)local_c0[0][3])(local_c0);
      }
      local_60 = plVar3;
      if (local_a0[0] == local_c0) {
        lVar6 = 4;
        pppuVar4 = local_c0;
LAB_002c7ad0:
        (*(code *)(*pppuVar4)[lVar6])(pppuVar4);
      }
      else if (local_a0[0] != (undefined ***)0x0) {
        lVar6 = 5;
        pppuVar4 = local_a0[0];
        goto LAB_002c7ad0;
      }
                    /* try { // try from 002c7ae0 to 002c7aef has its CatchHandler @ 002c7be4 */
      facebook::react::ShadowNodeFamily::dispatchRawState(lVar7,&local_90,0);
      plVar3 = local_80;
      if (local_60 == plVar3) {
        lVar7 = 4;
LAB_002c7b18:
        (**(code **)(*plVar3 + lVar7 * 8))();
      }
      else if (local_60 != (long *)0x0) {
        lVar7 = 5;
        plVar3 = local_60;
        goto LAB_002c7b18;
      }
      plVar3 = local_88;
      if ((local_88 != (long *)0x0) &&
         (lVar7 = FUN_00255510(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
    lVar7 = FUN_00255510(0xffffffffffffffff,plVar2 + 1);
    if (lVar7 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
  if (local_d0 == &local_f0) {
    lVar7 = 4;
    pppuVar4 = &local_f0;
  }
  else {
    if (local_d0 == (undefined ***)0x0) goto LAB_002c7ba8;
    lVar7 = 5;
    pppuVar4 = local_d0;
  }
  (*(code *)(*pppuVar4)[lVar7])();
LAB_002c7ba8:
  folly::dynamic::destroy();
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 002c7ca0  FUN_002c7ca0 =====

void FUN_002c7ca0(long *param_1)

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


// ===== 002c7d2c  FUN_002c7d2c =====

void FUN_002c7d2c(long *param_1)

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


// ===== 002c7db8  FUN_002c7db8 =====

void FUN_002c7db8(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar5 = (long *)(param_1 + 0x10);
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 == plVar5) {
    lVar4 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_002c7e08;
    lVar4 = 5;
    plVar5 = plVar2;
  }
  (**(code **)(*plVar5 + lVar4 * 8))();
LAB_002c7e08:
  plVar5 = *(long **)(param_1 + 8);
  if ((plVar5 == (long *)0x0) || (lVar4 = FUN_00255510(0xffffffffffffffff,plVar5 + 1), lVar4 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c7e78  FUN_002c7e78 =====

void FUN_002c7e78(long *param_1)

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


// ===== 002c7f04  FUN_002c7f04 =====

void FUN_002c7f04(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  plVar3 = param_1 + 2;
  plVar2 = (long *)param_1[6];
  *param_1 = &PTR_FUN_00380610;
  if (plVar2 == plVar3) {
    lVar4 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == lVar5) {
        return;
      }
      goto LAB_002c7f90;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x002c7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar4 * 8))();
    return;
  }
LAB_002c7f90:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c7f94  FUN_002c7f94 =====

void FUN_002c7f94(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar3 = param_1 + 2;
  plVar2 = (long *)param_1[6];
  *param_1 = &PTR_FUN_00380610;
  if (plVar2 == plVar3) {
    lVar5 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_002c7ff0;
    lVar5 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_002c7ff0:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c8018  FUN_002c8018 =====

undefined8 * FUN_002c8018(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x40);
  plVar3 = *(long **)(param_1 + 0x30);
  *puVar2 = &PTR_FUN_00380610;
  if (plVar3 != (long *)0x0) {
    if (plVar3 == (long *)(param_1 + 0x10)) {
      lVar5 = *plVar3;
      puVar2[6] = puVar2 + 2;
      (**(code **)(lVar5 + 0x18))();
      goto LAB_002c8090;
    }
                    /* try { // try from 002c8074 to 002c808f has its CatchHandler @ 002c80b8 */
    plVar3 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
  puVar2[6] = plVar3;
LAB_002c8090:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c80e0  FUN_002c80e0 =====

void FUN_002c80e0(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x30);
  *param_2 = &PTR_FUN_00380610;
  if (plVar4 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if (plVar4 == (long *)(param_1 + 0x10)) {
      param_2[6] = param_2 + 2;
      if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x002c8188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
        return;
      }
      goto LAB_002c818c;
    }
    uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
    param_2[6] = uVar2;
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
LAB_002c818c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c8190  FUN_002c8190 =====

void FUN_002c8190(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  plVar3 = (long *)(param_1 + 0x10);
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 == plVar3) {
    lVar4 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
        return;
      }
      goto LAB_002c8210;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x002c81f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar4 * 8))();
    return;
  }
LAB_002c8210:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c8214  FUN_002c8214 =====

void FUN_002c8214(void *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)((long)param_1 + 0x10);
  plVar2 = *(long **)((long)param_1 + 0x30);
  if (plVar2 == plVar3) {
    lVar5 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_002c8264;
    lVar5 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_002c8264:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c828c  FUN_002c828c =====

void FUN_002c828c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  
  lVar1 = tpidr_el0;
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
      auVar3 = FUN_0025cd00();
      param_2 = auVar3._8_8_;
      plVar2 = auVar3._0_8_;
    }
  }
  else {
    param_2 = (undefined8 *)*param_2;
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x002c82d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x30))();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar2,param_2);
}


// ===== 002c82ec  FUN_002c82ec =====

void FUN_002c82ec(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 0x10;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003953d0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002c833c  FUN_002c833c =====

undefined * FUN_002c833c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003953d8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c837c  FUN_002c837c =====

void FUN_002c837c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_003806a0;
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c8414  FUN_002c8414 =====

void FUN_002c8414(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_003806a0;
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c84a0  FUN_002c84a0 =====

void FUN_002c84a0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x18);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_003806a0;
  puVar4[1] = uVar1;
  puVar4[2] = lVar2;
  if (lVar2 != 0) {
    FUN_00259a00(1,lVar2 + 8);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


// ===== 002c8518  FUN_002c8518 =====

void FUN_002c8518(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_003806a0;
  param_2[1] = uVar1;
  param_2[2] = lVar2;
  if (lVar2 != 0) {
    FUN_00259a00(1,lVar2 + 8);
  }
  if (*(long *)(lVar3 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c857c  FUN_002c857c =====

void FUN_002c857c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x10);
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c8608  FUN_002c8608 =====

void FUN_002c8608(void *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)((long)param_1 + 0x10);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c8688  FUN_002c8688 =====

void FUN_002c8688(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x28);
  *puVar4 = &PTR_FUN_00380720;
  uVar1 = *(undefined8 *)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x10);
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = uVar1;
  puVar4[4] = lVar2;
  if (lVar2 != 0) {
    FUN_00259a00(1,lVar2 + 8);
  }
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c8720  FUN_002c8720 =====

void FUN_002c8720(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003953e0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002c8770  FUN_002c8770 =====

undefined * FUN_002c8770(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003953e8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c87b0  FUN_002c87b0 =====

void FUN_002c87b0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2c87b4);
  (*pcVar1)();
}


// ===== 002c87b4  FUN_002c87b4 =====

void FUN_002c87b4(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_00380518;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c87f8  FUN_002c87f8 =====

void FUN_002c87f8(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_00380518;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c8850  FUN_002c8850 =====

void FUN_002c8850(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x002c8888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(param_1 + 0x18))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c8890  FUN_002c8890 =====

void FUN_002c8890(void *param_1)

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


// ===== 002c88c8  FUN_002c88c8 =====

void FUN_002c88c8(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_00380720;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c890c  FUN_002c890c =====

void FUN_002c890c(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_00380720;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c8964  FUN_002c8964 =====

void FUN_002c8964(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x20);
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c89f0  FUN_002c89f0 =====

void FUN_002c89f0(void *param_1)

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


// ===== 002c8a28  FUN_002c8a28 =====

void FUN_002c8a28(long *param_1)

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


// ===== 002c8ab4  FUN_002c8ab4 =====

void FUN_002c8ab4(long *param_1)

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


// ===== 002c8b40  FUN_002c8b40 =====

void FUN_002c8b40(long *param_1)

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


// ===== 002c8bcc  FUN_002c8bcc =====

void FUN_002c8bcc(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_00380a58;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c8c10  FUN_002c8c10 =====

void FUN_002c8c10(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_00380a58;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c8c68  FUN_002c8c68 =====

void FUN_002c8c68(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    facebook::react::ShadowNodeFamily::~ShadowNodeFamily((ShadowNodeFamily *)(param_1 + 0x20));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c8ca4  FUN_002c8ca4 =====

void FUN_002c8ca4(void *param_1)

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


// ===== 002c8cdc  FUN_002c8cdc =====

void FUN_002c8cdc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003809e8;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = (long *)param_1[2];
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c8d90  FUN_002c8d90 =====

void FUN_002c8d90(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_00380998;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c8dd4  FUN_002c8dd4 =====

void FUN_002c8dd4(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_00380998;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c8e2c  FUN_002c8e2c =====

void FUN_002c8e2c(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    std::__ndk1::mutex::~mutex((mutex *)(param_1 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c8e68  FUN_002c8e68 =====

void FUN_002c8e68(void *param_1)

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


// ===== 002c8ea0  FUN_002c8ea0 =====

void FUN_002c8ea0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003809e8;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = (long *)param_1[2];
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c8f44  FUN_002c8f44 =====

void FUN_002c8f44(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[9];
  *param_1 = &PTR_FUN_00380938;
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_003809e8;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = (long *)param_1[2];
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c9040  FUN_002c9040 =====

void FUN_002c9040(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[9];
  *param_1 = &PTR_FUN_00380938;
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_003809e8;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = (long *)param_1[2];
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c9120  FUN_002c9120 =====

void FUN_002c9120(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_003808e8;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c9164  FUN_002c9164 =====

void FUN_002c9164(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_003808e8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c91bc  FUN_002c91bc =====

void FUN_002c91bc(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x002c91f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(param_1 + 0x18))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c91fc  FUN_002c91fc =====

void FUN_002c91fc(void *param_1)

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


// ===== 002c9234  FUN_002c9234 =====

void FUN_002c9234(long *param_1)

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


// ===== 002c92c0  FUN_002c92c0 =====

void FUN_002c92c0(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_00380a08;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c9304  FUN_002c9304 =====

void FUN_002c9304(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_00380a08;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c935c  FUN_002c935c =====

void FUN_002c935c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  facebook::jsi::Value::~Value((Value *)(param_1 + 0x30));
  plVar4 = *(long **)(param_1 + 0x20);
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c93f4  FUN_002c93f4 =====

void FUN_002c93f4(void *param_1)

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


// ===== 002c942c  FUN_002c942c =====

void FUN_002c942c(long *param_1)

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


// ===== 002c94b8  FUN_002c94b8 =====

void FUN_002c94b8(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_00380898;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c94fc  FUN_002c94fc =====

void FUN_002c94fc(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_00380898;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c9554  FUN_002c9554 =====

void FUN_002c9554(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x002c958c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(param_1 + 0x18))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c9594  FUN_002c9594 =====

void FUN_002c9594(void *param_1)

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


// ===== 002c95cc  FUN_002c95cc =====

void FUN_002c95cc(undefined8 *param_1,PropsParserContext *param_2,RawProps *param_3,
                 HybridRiveViewProps *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  if (param_4 == (HybridRiveViewProps *)0x0) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZN7margelo5nitro4rive5views27HybridRiveViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS6_19HybridRiveViewPropsENS0_20BaseViewEventEmitterENS6_19HybridRiveViewStateEE18defaultSharedPropsEvE18defaultSharedProps_003953c0
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZN7margelo5nitro4rive5views27HybridRiveViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS6_19HybridRiveViewPropsENS0_20BaseViewEventEmitterENS6_19HybridRiveViewStateEE18defaultSharedPropsEvE18defaultSharedProps_003953c0
                                   ), iVar2 != 0)) {
                    /* try { // try from 002c9698 to 002c969b has its CatchHandler @ 002c96c8 */
      FUN_002c970c();
      __cxa_atexit(FUN_002c9bdc,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZN7margelo5nitro4rive5views27HybridRiveViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS6_19HybridRiveViewPropsENS0_20BaseViewEventEmitterENS6_19HybridRiveViewStateEE18defaultSharedPropsEvE18defaultSharedProps_003953b8
                   ,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZN7margelo5nitro4rive5views27HybridRiveViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS6_19HybridRiveViewPropsENS0_20BaseViewEventEmitterENS6_19HybridRiveViewStateEE18defaultSharedPropsEvE18defaultSharedProps_003953c0
                         );
    }
    param_4 = *(HybridRiveViewProps **)
               PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZN7margelo5nitro4rive5views27HybridRiveViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS6_19HybridRiveViewPropsENS0_20BaseViewEventEmitterENS6_19HybridRiveViewStateEE18defaultSharedPropsEvE18defaultSharedProps_003953b8
    ;
  }
  puVar3 = (undefined8 *)operator_new(0x910);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_003804c8;
                    /* try { // try from 002c9644 to 002c9657 has its CatchHandler @ 002c96dc */
  margelo::nitro::rive::views::HybridRiveViewProps::HybridRiveViewProps
            ((HybridRiveViewProps *)(puVar3 + 4),param_2,param_4,param_3);
  *param_1 = (HybridRiveViewProps *)(puVar3 + 4);
  param_1[1] = puVar3;
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c970c  FUN_002c970c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002c970c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  
  lVar1 = tpidr_el0;
  lVar8 = *(long *)(lVar1 + 0x28);
  puVar7 = (undefined8 *)operator_new(0x910);
  puVar7[2] = 0;
  puVar7[1] = 0;
  *puVar7 = &PTR_FUN_00380438;
  memset(puVar7 + 8,0,0x8d0);
  puVar9 = puVar7 + 4;
  *puVar9 = &PTR_FUN_0037ffa8;
  puVar7[5] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  *(undefined4 *)(puVar7 + 8) = 5;
  puVar7[10] = 0;
  puVar7[9] = 0;
  puVar7[0xc] = 0;
  puVar7[0xb] = 0;
  *(undefined4 *)(puVar7 + 0xd) = 0x3f800000;
  folly::dynamic::destroy();
  *(undefined1 *)((long)puVar7 + 0x74) = 0;
  *(undefined8 *)((long)puVar7 + 0xcf) = 0;
  *(undefined4 *)(puVar7 + 0xe) = 0x10410710;
  puVar7[0x1c] = 0;
  puVar7[0x1b] = 0;
  puVar7[0x28] = 0;
  puVar7[0x27] = 0;
  puVar7[0x2a] = 0;
  puVar7[0x29] = 0;
  puVar7[0x2c] = 0;
  puVar7[0x2b] = 0;
  puVar7[0x2e] = 0;
  puVar7[0x2d] = 0;
  puVar7[0x26] = 0;
  puVar7[0x25] = 0;
  uVar2 = DAT_001d8250;
  puVar7[0x6b] = 0;
  puVar7[0x6a] = 0;
  *(undefined4 *)((long)puVar7 + 0xcb) = 0x40004;
  *(undefined8 *)((long)puVar7 + 0x16c) = 0;
  *(undefined8 *)((long)puVar7 + 0x164) = 0;
  puVar7[0x30] = 0;
  puVar7[0x2f] = 0;
  *(undefined4 *)(puVar7 + 0x31) = 0x7fc00000;
  *(undefined4 *)(puVar7 + 0x32) = 0x7fc00000;
  *(undefined4 *)(puVar7 + 0x33) = 0x7fc00000;
  *(undefined4 *)(puVar7 + 0x34) = 0x7fc00000;
  *(undefined4 *)(puVar7 + 0x35) = 0x7fc00000;
  *(undefined4 *)(puVar7 + 0x36) = 0x7fc00000;
  *(undefined4 *)(puVar7 + 0x37) = 0x7fc00000;
  *(undefined4 *)(puVar7 + 0x38) = 0x7fc00000;
  *(undefined4 *)(puVar7 + 0x39) = 0x7fc00000;
  *(undefined4 *)(puVar7 + 0x3a) = 0x7fc00000;
  *(undefined4 *)(puVar7 + 0x3b) = 0x7fc00000;
  *(undefined4 *)(puVar7 + 0x3c) = 0x7fc00000;
  *(undefined4 *)(puVar7 + 0x3d) = 0x7fc00000;
  *(undefined4 *)(puVar7 + 0x3e) = 0x7fc00000;
  *(undefined4 *)(puVar7 + 0x3f) = 0x7fc00000;
  *(undefined4 *)(puVar7 + 0x40) = 0x7fc00000;
  *(undefined8 *)((long)puVar7 + 0x261) = 0;
  *(undefined8 *)((long)puVar7 + 0x259) = 0;
  *(undefined8 *)((long)puVar7 + 0x2c9) = 0;
  *(undefined8 *)((long)puVar7 + 0x274) = 0;
  *(undefined8 *)((long)puVar7 + 0x26c) = 0;
  *(undefined8 *)((long)puVar7 + 0x284) = 0;
  *(undefined8 *)((long)puVar7 + 0x27c) = 0;
  *(undefined8 *)((long)puVar7 + 0x294) = 0;
  *(undefined8 *)((long)puVar7 + 0x28c) = 0;
  *(undefined8 *)((long)puVar7 + 0x2a4) = 0;
  *(undefined8 *)((long)puVar7 + 0x29c) = 0;
  *(undefined8 *)((long)puVar7 + 0x2b4) = 0;
  *(undefined8 *)((long)puVar7 + 0x2ac) = 0;
  *(undefined8 *)((long)puVar7 + 0x2c4) = 0;
  *(undefined8 *)((long)puVar7 + 700) = 0;
  puVar7[0x62] = 0;
  puVar7[0x61] = 0;
  *(undefined1 *)((long)puVar7 + 0x324) = 1;
  *(undefined4 *)((long)puVar7 + 0x325) = 0;
  *(undefined1 *)((long)puVar7 + 0x32a) = 0x23;
  *(undefined4 *)((long)puVar7 + 0x35f) = 0;
  *(undefined8 *)((long)puVar7 + 0x364) = 0x3f800000;
  puVar7[0x90] = 0;
  puVar7[0x8f] = 0;
  puVar7[0x92] = 0;
  puVar7[0x91] = 0;
  puVar7[0x8e] = 0;
  puVar7[0x8d] = 0;
  *(undefined8 *)((long)puVar7 + 0x75) = uVar2;
  uVar3 = _UNK_001d7f28;
  uVar2 = _DAT_001d7f20;
  puVar7[0x9c] = 0;
  puVar7[0x9b] = 0;
  puVar7[0x9e] = 0;
  puVar7[0x9d] = 0;
  puVar7[0xa0] = 0;
  puVar7[0x9f] = 0;
  puVar7[0xa2] = 0;
  puVar7[0xa1] = 0;
  puVar7[0xa4] = 0;
  puVar7[0xa3] = 0;
  puVar7[0xa6] = 0;
  puVar7[0xa5] = 0;
  puVar7[0xa8] = 0;
  puVar7[0xa7] = 0;
  puVar7[0xaa] = 0;
  puVar7[0xa9] = 0;
  puVar7[0xac] = 0;
  puVar7[0xab] = 0;
  puVar7[0xae] = 0;
  puVar7[0xad] = 0;
  puVar7[0x9a] = 0;
  puVar7[0x99] = 0;
  *(undefined8 *)((long)puVar7 + 0x5c6) = 0;
  puVar7[0xb8] = 0;
  puVar7[0xb7] = 0;
  *(undefined8 *)((long)puVar7 + 0x49c) = 0;
  *(undefined2 *)(puVar7 + 0xbf) = 0x101;
  puVar7[0x24] = 0;
  puVar7[0x23] = 0;
  puVar7[0x22] = 0;
  puVar7[0x21] = 0;
  puVar7[0x20] = 0;
  puVar7[0x1f] = 0;
  puVar7[0x1e] = 0;
  puVar7[0x1d] = 0;
  *(undefined8 *)((long)puVar7 + 0x85) = 0;
  *(undefined8 *)((long)puVar7 + 0x7d) = 0;
  *(undefined8 *)((long)puVar7 + 0x95) = 0;
  *(undefined8 *)((long)puVar7 + 0x8d) = 0;
  *(undefined8 *)((long)puVar7 + 0xa5) = 0;
  *(undefined8 *)((long)puVar7 + 0x9d) = 0;
  *(undefined8 *)((long)puVar7 + 0xb5) = 0;
  *(undefined8 *)((long)puVar7 + 0xad) = 0;
  *(undefined8 *)((long)puVar7 + 0xc3) = 0;
  *(undefined8 *)((long)puVar7 + 0xbb) = 0;
  puVar7[0x1d] = 0;
  puVar7[0x1c] = 0;
  puVar7[0x1f] = 0;
  puVar7[0x1e] = 0;
  puVar7[0x21] = 0;
  puVar7[0x20] = 0;
  puVar7[0x23] = 0;
  puVar7[0x22] = 0;
  puVar7[0x25] = 0;
  puVar7[0x24] = 0;
  puVar7[0x27] = 0;
  puVar7[0x26] = 0;
  puVar7[0x97] = uVar3;
  puVar7[0x96] = uVar2;
  uVar5 = _UNK_001e48f0;
  uVar4 = _DAT_001e48e8;
  uVar3 = _UNK_001e48e0;
  uVar2 = _DAT_001e48d8;
  *puVar9 = &PTR_FUN_0037fd68;
  puVar7[0x10a] = 0;
  puVar7[0x109] = 0;
  puVar7[0x114] = 0;
  puVar7[0x113] = 0;
  puVar7[0xb0] = uVar3;
  puVar7[0xaf] = uVar2;
  puVar7[0xb2] = uVar5;
  puVar7[0xb1] = uVar4;
  uVar5 = _UNK_001e4910;
  uVar4 = _DAT_001e4908;
  uVar3 = _UNK_001e4900;
  uVar2 = _DAT_001e48f8;
  puVar7[0x120] = 0;
  puVar7[0x11f] = 0;
  puVar7[0xe6] = 0;
  puVar7[0xe5] = 0;
  *(undefined8 *)((long)puVar7 + 0x5e4) = 0;
  *(undefined8 *)((long)puVar7 + 0x5dc) = 0;
  puVar7[0xf0] = 0;
  puVar7[0xef] = 0;
  puVar7[0xf2] = 0;
  puVar7[0xf1] = 0;
  *(undefined2 *)((long)puVar7 + 0xd7) = 0;
  *(undefined2 *)(puVar7 + 0x2c) = 0;
  *(undefined1 *)(puVar7 + 0x28) = 0;
  *(undefined1 *)((long)puVar7 + 0x18c) = 0;
  *(undefined1 *)((long)puVar7 + 0x194) = 0;
  *(undefined1 *)((long)puVar7 + 0x19c) = 0;
  *(undefined1 *)((long)puVar7 + 0x1a4) = 0;
  *(undefined1 *)((long)puVar7 + 0x1ac) = 0;
  *(undefined1 *)((long)puVar7 + 0x1b4) = 0;
  *(undefined1 *)((long)puVar7 + 0x1bc) = 0;
  *(undefined1 *)((long)puVar7 + 0x1c4) = 0;
  *(undefined1 *)((long)puVar7 + 0x1cc) = 0;
  *(undefined1 *)((long)puVar7 + 0x1d4) = 0;
  *(undefined1 *)((long)puVar7 + 0x1dc) = 0;
  *(undefined1 *)((long)puVar7 + 0x1e4) = 0;
  *(undefined1 *)((long)puVar7 + 0x1ec) = 0;
  *(undefined1 *)((long)puVar7 + 500) = 0;
  *(undefined1 *)((long)puVar7 + 0x1fc) = 0;
  *(undefined1 *)((long)puVar7 + 0x204) = 0;
  *(undefined1 *)(puVar7 + 0x41) = 0;
  *(undefined1 *)((long)puVar7 + 0x20c) = 0;
  *(undefined1 *)(puVar7 + 0x43) = 0;
  *(undefined1 *)((long)puVar7 + 0x2d4) = 0;
  *(undefined1 *)(puVar7 + 0x5b) = 0;
  *(undefined1 *)((long)puVar7 + 0x2dc) = 0;
  *(undefined1 *)(puVar7 + 0x5c) = 0;
  *(undefined1 *)((long)puVar7 + 0x2e4) = 0;
  *(undefined1 *)(puVar7 + 0x5d) = 0;
  *(undefined1 *)(puVar7 + 0x60) = 0;
  puVar7[0x45] = 0;
  puVar7[0x44] = 0;
  puVar7[0x47] = 0;
  puVar7[0x46] = 0;
  puVar7[0x49] = 0;
  puVar7[0x48] = 0;
  puVar7[0x4b] = 0;
  puVar7[0x4a] = 0;
  puVar7[99] = 0;
  *(undefined4 *)(puVar7 + 100) = 0;
  *(undefined1 *)((long)puVar7 + 0x329) = 0;
  puVar7[0x67] = 0;
  puVar7[0x66] = 0;
  puVar7[0x69] = 0;
  puVar7[0x68] = 0;
  *(undefined1 *)((long)puVar7 + 0x36c) = 0;
  *(undefined1 *)((long)puVar7 + 0x374) = 0;
  *(undefined1 *)(puVar7 + 0x6f) = 0;
  *(undefined1 *)(puVar7 + 0x70) = 0;
  *(undefined1 *)((long)puVar7 + 900) = 0;
  *(undefined1 *)((long)puVar7 + 0x38c) = 0;
  *(undefined1 *)(puVar7 + 0x72) = 0;
  *(undefined1 *)(puVar7 + 0x73) = 0;
  *(undefined1 *)((long)puVar7 + 0x39c) = 0;
  *(undefined1 *)((long)puVar7 + 0x3a4) = 0;
  *(undefined1 *)(puVar7 + 0x75) = 0;
  *(undefined1 *)(puVar7 + 0x76) = 0;
  *(undefined1 *)((long)puVar7 + 0x3b4) = 0;
  *(undefined1 *)((long)puVar7 + 0x3bc) = 0;
  *(undefined1 *)(puVar7 + 0x78) = 0;
  *(undefined1 *)(puVar7 + 0x79) = 0;
  *(undefined1 *)((long)puVar7 + 0x3cc) = 0;
  *(undefined1 *)((long)puVar7 + 0x3d4) = 0;
  *(undefined1 *)(puVar7 + 0x7b) = 0;
  *(undefined1 *)(puVar7 + 0x7c) = 0;
  *(undefined1 *)((long)puVar7 + 0x3e4) = 0;
  *(undefined1 *)((long)puVar7 + 0x3ec) = 0;
  *(undefined1 *)(puVar7 + 0x7e) = 0;
  *(undefined1 *)(puVar7 + 0x7f) = 0;
  *(undefined1 *)((long)puVar7 + 0x3fc) = 0;
  *(undefined1 *)((long)puVar7 + 0x404) = 0;
  *(undefined1 *)(puVar7 + 0x81) = 0;
  *(undefined1 *)((long)puVar7 + 0x40c) = 0;
  *(undefined1 *)(puVar7 + 0x82) = 0;
  *(undefined1 *)((long)puVar7 + 0x414) = 0;
  *(undefined1 *)(puVar7 + 0x83) = 0;
  *(undefined1 *)((long)puVar7 + 0x41c) = 0;
  *(undefined1 *)(puVar7 + 0x84) = 0;
  *(undefined1 *)((long)puVar7 + 0x424) = 0;
  *(undefined1 *)(puVar7 + 0x85) = 0;
  *(undefined1 *)((long)puVar7 + 0x42c) = 0;
  *(undefined1 *)(puVar7 + 0x86) = 0;
  *(undefined1 *)((long)puVar7 + 0x434) = 0;
  *(undefined1 *)(puVar7 + 0x87) = 0;
  *(undefined1 *)((long)puVar7 + 0x43c) = 0;
  *(undefined1 *)(puVar7 + 0x88) = 0;
  *(undefined1 *)((long)puVar7 + 0x444) = 0;
  *(undefined1 *)(puVar7 + 0x89) = 0;
  *(undefined1 *)((long)puVar7 + 0x44c) = 0;
  *(undefined1 *)(puVar7 + 0x8a) = 0;
  *(undefined1 *)((long)puVar7 + 0x454) = 0;
  *(undefined1 *)(puVar7 + 0x8b) = 0;
  *(undefined1 *)((long)puVar7 + 0x45c) = 0;
  *(undefined1 *)(puVar7 + 0x8c) = 0;
  *(undefined1 *)((long)puVar7 + 0x464) = 0;
  puVar7[0x95] = 0;
  *(undefined2 *)(puVar7 + 0x93) = 0;
  *(undefined1 *)((long)puVar7 + 0x4a4) = 0;
  *(undefined1 *)(puVar7 + 0x98) = 0;
  puVar7[0xb4] = uVar3;
  puVar7[0xb3] = uVar2;
  puVar7[0xb6] = uVar5;
  puVar7[0xb5] = uVar4;
  *(undefined1 *)(puVar7 + 0xba) = 0;
  *(undefined1 *)((long)puVar7 + 0x5d4) = 0;
  *(undefined1 *)(puVar7 + 0xbb) = 0;
  puVar7[0xbe] = 0;
  *(undefined1 *)((long)puVar7 + 0x5ec) = 0;
  *(undefined1 *)((long)puVar7 + 0x5fa) = 0;
  *(undefined4 *)((long)puVar7 + 0x5fc) = 0;
  *(undefined1 *)(puVar7 + 0xc0) = 0;
  *(undefined1 *)(puVar7 + 0xcc) = 0;
  *(undefined1 *)(puVar7 + 0xcd) = 0;
  *(undefined1 *)(puVar7 + 0xd9) = 0;
  *(undefined1 *)(puVar7 + 0xdb) = 0;
  *(undefined1 *)((long)puVar7 + 0x6dc) = 0;
  *(undefined1 *)(puVar7 + 0xdc) = 0;
  *(undefined1 *)((long)puVar7 + 0x6e4) = 0;
  *(undefined1 *)(puVar7 + 0xdd) = 0;
  *(undefined1 *)((long)puVar7 + 0x6ec) = 0;
  *(undefined1 *)(puVar7 + 0xde) = 0;
  *(undefined1 *)((long)puVar7 + 0x6f4) = 0;
  *(undefined1 *)(puVar7 + 0xdf) = 0;
  *(undefined1 *)((long)puVar7 + 0x6fc) = 0;
  *(undefined2 *)((long)puVar7 + 0x6d4) = 0;
  *(undefined4 *)(puVar7 + 0xda) = 0;
  *(undefined1 *)(puVar7 + 0xe0) = 0;
  *(undefined1 *)(puVar7 + 0xe3) = 0;
  *(undefined1 *)(puVar7 + 0xe4) = 0;
  *(undefined1 *)(puVar7 + 0xea) = 0;
  *(undefined1 *)(puVar7 + 0xeb) = 0;
  *(undefined1 *)((long)puVar7 + 0x7b4) = 0;
  *(undefined1 *)(puVar7 + 0xf7) = 0;
  *(undefined1 *)((long)puVar7 + 0x7d4) = 0;
  *(undefined1 *)(puVar7 + 0xfb) = 0;
  *(undefined1 *)(puVar7 + 0xff) = 0;
  *(undefined1 *)(puVar7 + 0x100) = 0;
  *(undefined1 *)(puVar7 + 0x107) = 0;
  *(undefined1 *)(puVar7 + 0x108) = 0;
  puVar7[0x110] = 0;
  *(undefined1 *)(puVar7 + 0x112) = 0;
  *(undefined1 *)(puVar7 + 0x116) = 0;
  *(undefined1 *)(puVar7 + 0x11c) = 0;
  *(undefined1 *)(puVar7 + 0x11e) = 0;
  *(undefined1 *)(puVar7 + 0xe7) = 0;
  *(undefined4 *)((long)puVar7 + 0x76f) = 0;
  puVar7[0xed] = 0;
  puVar7[0xec] = 0;
  *(undefined1 *)(puVar7 + 0xf3) = 0;
  *(undefined1 *)(puVar7 + 0xf6) = 0;
  puVar7[0xf5] = 0;
  puVar7[0xf4] = 0;
  *(undefined1 *)(puVar7 + 0xfa) = 0;
  puVar7[0xf9] = 0;
  puVar7[0xf8] = 0;
  *(undefined1 *)(puVar7 + 0xfe) = 0;
  puVar7[0xfd] = 0;
  puVar7[0xfc] = 0;
  puVar7[0x102] = 0;
  puVar7[0x101] = 0;
  puVar6 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZN7margelo5nitro4rive5views27HybridRiveViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS6_19HybridRiveViewPropsENS0_20BaseViewEventEmitterENS6_19HybridRiveViewStateEE18defaultSharedPropsEvE18defaultSharedProps_003953b8
  ;
  *(undefined1 *)(puVar7 + 0x103) = 0;
  *(undefined8 **)puVar6 = puVar9;
  *(undefined8 **)(puVar6 + 8) = puVar7;
  if (*(long *)(lVar1 + 0x28) == lVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c9bdc  FUN_002c9bdc =====

void FUN_002c9bdc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 8);
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c9c68  FUN_002c9c68 =====

void FUN_002c9c68(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_003804c8;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c9cac  FUN_002c9cac =====

void FUN_002c9cac(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_003804c8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c9d04  FUN_002c9d04 =====

void FUN_002c9d04(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_002c574c(param_1 + 0x20);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c9d40  FUN_002c9d40 =====

void FUN_002c9d40(void *param_1)

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


// ===== 002c9d78  FUN_002c9d78 =====

void FUN_002c9d78(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_00380438;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c9dbc  FUN_002c9dbc =====

void FUN_002c9dbc(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_00380438;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c9e14  FUN_002c9e14 =====

void FUN_002c9e14(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_002c574c(param_1 + 0x20);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002c9e50  FUN_002c9e50 =====

void FUN_002c9e50(void *param_1)

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


// ===== 002c9e88  FUN_002c9e88 =====

void FUN_002c9e88(long *param_1)

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


// ===== 002c9f14  FUN_002c9f14 =====

void FUN_002c9f14(long *param_1)

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


// ===== 002c9fa0  FUN_002c9fa0 =====

void FUN_002c9fa0(long *param_1)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  void *pvVar7;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  pvVar6 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_00395408 + 0x10);
  if (pvVar6 != (void *)0x0) {
    pvVar7 = (void *)param_1[0x7a];
    pvVar3 = pvVar6;
    if (pvVar7 != pvVar6) {
      do {
        plVar5 = *(long **)((long)pvVar7 + -8);
        if ((plVar5 != (long *)0x0) &&
           (lVar2 = FUN_00255510(0xffffffffffffffff,plVar5 + 1), lVar2 == 0)) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar7 = (void *)((long)pvVar7 + -0x10);
      } while (pvVar7 != pvVar6);
      pvVar3 = (void *)param_1[0x79];
    }
    param_1[0x7a] = (long)pvVar6;
    operator_delete(pvVar3);
  }
  pvVar6 = (void *)param_1[0x73];
  if (pvVar6 != (void *)0x0) {
    param_1[0x74] = (long)pvVar6;
    operator_delete(pvVar6);
  }
  FUN_002c37a8(param_1 + 0x23);
  if (*(long *)(lVar1 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  FUN_002ca278(param_1);
  return;
}


// ===== 002ca088  FUN_002ca088 =====

void FUN_002ca088(long *param_1)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  void *pvVar7;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  pvVar6 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_00395408 + 0x10);
  if (pvVar6 != (void *)0x0) {
    pvVar7 = (void *)param_1[0x7a];
    pvVar3 = pvVar6;
    if (pvVar7 != pvVar6) {
      do {
        plVar5 = *(long **)((long)pvVar7 + -8);
        if ((plVar5 != (long *)0x0) &&
           (lVar2 = FUN_00255510(0xffffffffffffffff,plVar5 + 1), lVar2 == 0)) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar7 = (void *)((long)pvVar7 + -0x10);
      } while (pvVar7 != pvVar6);
      pvVar3 = (void *)param_1[0x79];
    }
    param_1[0x7a] = (long)pvVar6;
    operator_delete(pvVar3);
  }
  pvVar6 = (void *)param_1[0x73];
  if (pvVar6 != (void *)0x0) {
    param_1[0x74] = (long)pvVar6;
    operator_delete(pvVar6);
  }
  FUN_002c37a8(param_1 + 0x23);
  FUN_002ca278(param_1);
  if (*(long *)(lVar1 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  operator_delete(param_1);
  return;
}


// ===== 002ca178  FUN_002ca178 =====

void FUN_002ca178(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  facebook::react::LayoutableShadowNode::getLayoutMetrics();
  facebook::react::BaseViewProps::resolveTransform(*(LayoutMetrics **)(param_1 + 8));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ca1e0  FUN_002ca1e0 =====

void FUN_002ca1e0(long param_1)

{
  char cVar1;
  long lVar2;
  
  lVar2 = tpidr_el0;
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  if (*(long *)(lVar2 + 0x28) == *(long *)(lVar2 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1 == '\0' || cVar1 == '\x03');
}


// ===== 002ca22c  FUN_002ca22c =====

void FUN_002ca22c(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0);
}


// ===== 002ca278  FUN_002ca278 =====

void FUN_002ca278(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  *(undefined **)param_1 = PTR_vtable_00395410 + 0x10;
  if (*(long *)(param_1 + 0x60) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = *(long **)(param_1 + 0x48);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = *(long **)(param_1 + 0x30);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = *(long **)(param_1 + 0x20);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = *(long **)(param_1 + 0x10);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    facebook::jsi::NativeState::~NativeState(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ca3a4  FUN_002ca3a4 =====

void FUN_002ca3a4(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_00380780;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ca3e8  FUN_002ca3e8 =====

void FUN_002ca3e8(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_00380780;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ca440  FUN_002ca440 =====

void FUN_002ca440(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x002ca478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(param_1 + 0x18))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ca480  FUN_002ca480 =====

void FUN_002ca480(void *param_1)

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


// ===== 002ca4b8  FUN_002ca4b8 =====

void FUN_002ca4b8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2ca4bc);
  (*pcVar1)();
}


// ===== 002ca4bc  FUN_002ca4bc =====

void FUN_002ca4bc(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    folly::dynamic::destroy();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ca4f8  FUN_002ca4f8 =====

void FUN_002ca4f8(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    facebook::jsi::Value::~Value((Value *)(param_2 + 8));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ca534  FUN_002ca534 =====

void FUN_002ca534(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_002c6488();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ca580  FUN_002ca580 =====

void FUN_002ca580(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 RawValue *param_5)

{
  long lVar1;
  PropsParserContext *pPVar2;
  RawValue *pRVar3;
  Props *pPVar4;
  int iVar5;
  ulong uVar6;
  char *__s2;
  dynamic *pdVar7;
  long lVar8;
  long *plVar9;
  Props *unaff_x24;
  PropsParserContext *local_f0;
  long *plStack_e8;
  undefined1 uStack_d1;
  dynamic local_d0 [32];
  dynamic *local_b0;
  uint local_a0;
  int local_98 [6];
  Props *local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((*param_4 == 0) && (uVar6 = facebook::react::RawProps::isEmpty(), (uVar6 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZN7margelo5nitro4rive5views27HybridRiveViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS6_19HybridRiveViewPropsENS0_20BaseViewEventEmitterENS6_19HybridRiveViewStateEE18defaultSharedPropsEvE18defaultSharedProps_003953c0
         & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZN7margelo5nitro4rive5views27HybridRiveViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS6_19HybridRiveViewPropsENS0_20BaseViewEventEmitterENS6_19HybridRiveViewStateEE18defaultSharedPropsEvE18defaultSharedProps_003953c0
                                   ), iVar5 != 0)) {
                    /* try { // try from 002ca8f8 to 002ca8fb has its CatchHandler @ 002ca928 */
      FUN_002c970c();
      __cxa_atexit(FUN_002c9bdc,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZN7margelo5nitro4rive5views27HybridRiveViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS6_19HybridRiveViewPropsENS0_20BaseViewEventEmitterENS6_19HybridRiveViewStateEE18defaultSharedPropsEvE18defaultSharedProps_003953b8
                   ,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZN7margelo5nitro4rive5views27HybridRiveViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS6_19HybridRiveViewPropsENS0_20BaseViewEventEmitterENS6_19HybridRiveViewStateEE18defaultSharedPropsEvE18defaultSharedProps_003953c0
                         );
    }
    lVar8 = *(long *)(
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZN7margelo5nitro4rive5views27HybridRiveViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS6_19HybridRiveViewPropsENS0_20BaseViewEventEmitterENS6_19HybridRiveViewStateEE18defaultSharedPropsEvE18defaultSharedProps_003953b8
                     + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZN7margelo5nitro4rive5views27HybridRiveViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS6_19HybridRiveViewPropsENS0_20BaseViewEventEmitterENS6_19HybridRiveViewStateEE18defaultSharedPropsEvE18defaultSharedProps_003953b8
    ;
    param_1[1] = lVar8;
    if (lVar8 != 0) {
      FUN_00259a00(1,lVar8 + 8);
    }
LAB_002ca830:
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
LAB_002ca9f0:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  facebook::react::RawProps::parse((RawPropsParser *)param_5);
  FUN_002c95cc(&local_f0,param_3,param_5,*param_4);
                    /* try { // try from 002ca628 to 002ca63b has its CatchHandler @ 002ca9a4 */
  uVar6 = facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid();
  if ((((uVar6 & 1) != 0) &&
      (uVar6 = facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid()
      , (uVar6 & 1) != 0)) &&
     (uVar6 = facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid(),
     (uVar6 & 1) != 0)) {
                    /* try { // try from 002ca64c to 002ca653 has its CatchHandler @ 002ca950 */
    __s2 = (char *)(**(code **)(*(long *)local_f0 + 0x10))();
    iVar5 = strcmp(PTR_HybridRiveViewComponentName_003947e8,__s2);
    if (iVar5 == 0) {
      plVar9 = (long *)0x0;
      goto LAB_002ca72c;
    }
  }
  plVar9 = plStack_e8;
  unaff_x24 = (Props *)local_f0;
  if (plStack_e8 != (long *)0x0) {
    FUN_00259a00(1,plStack_e8 + 1);
  }
  if ((RawProps *)*param_4 == (RawProps *)0x0) {
    if ((*
         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZN7margelo5nitro4rive5views27HybridRiveViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS6_19HybridRiveViewPropsENS0_20BaseViewEventEmitterENS6_19HybridRiveViewStateEE18defaultSharedPropsEvE18defaultSharedProps_003953c0
        & 1) == 0) goto LAB_002ca8a8;
    goto LAB_002ca6ac;
  }
  local_b0 = (dynamic *)0x0;
  facebook::react::Props::initializeDynamicProps(unaff_x24,(RawProps *)*param_4,(function *)param_5)
  ;
                    /* try { // try from 002ca684 to 002ca697 has its CatchHandler @ 002ca964 */
  do {
    if (local_b0 == local_d0) {
      lVar8 = 4;
      pdVar7 = local_d0;
LAB_002ca6f0:
      (**(code **)(*(long *)pdVar7 + lVar8 * 8))();
    }
    else if (local_b0 != (dynamic *)0x0) {
      lVar8 = 5;
      pdVar7 = local_b0;
      goto LAB_002ca6f0;
    }
    if ((plVar9 != (long *)0x0) && (lVar8 = FUN_00255510(0xffffffffffffffff,plVar9 + 1), lVar8 == 0)
       ) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar9 = (long *)0x1;
LAB_002ca72c:
                    /* try { // try from 002ca72c to 002ca72f has its CatchHandler @ 002ca9a4 */
    uVar6 = facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter();
    if ((uVar6 & 1) == 0) {
LAB_002ca828:
      param_1[1] = plStack_e8;
      *param_1 = local_f0;
      goto LAB_002ca830;
    }
    if ((int)plVar9 == 0) {
      facebook::react::RawProps::operator_cast_to_dynamic((RawProps *)param_5);
    }
    else {
                    /* try { // try from 002ca73c to 002ca757 has its CatchHandler @ 002ca960 */
      folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(local_f0 + 0x20));
    }
    pPVar2 = local_f0;
    pPVar4 = local_80;
    if (local_98[0] == 5) {
      while( true ) {
        unaff_x24 = pPVar4;
        local_f0 = pPVar2;
        if (unaff_x24 == (Props *)0x0) {
          folly::dynamic::destroy();
          goto LAB_002ca828;
        }
        if (*(int *)(unaff_x24 + 0x10) != 6) break;
        plVar9 = (long *)0x811c9dc5;
        uVar6 = (ulong)((byte)unaff_x24[0x18] >> 1);
        pRVar3 = (RawValue *)(unaff_x24 + 0x19);
        param_5 = (RawValue *)(unaff_x24 + 0x19);
        if (((byte)unaff_x24[0x18] & 1) != 0) {
          uVar6 = *(ulong *)(unaff_x24 + 0x20);
          pRVar3 = *(RawValue **)(unaff_x24 + 0x28);
          param_5 = *(RawValue **)(unaff_x24 + 0x28);
        }
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          plVar9 = (long *)(ulong)(((uint)plVar9 ^ (int)(char)*pRVar3) * 0x1000193);
          pRVar3 = pRVar3 + 1;
        }
                    /* try { // try from 002ca7d8 to 002ca7e3 has its CatchHandler @ 002ca9b8 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(unaff_x24 + 0x40));
        local_a0 = 0;
                    /* try { // try from 002ca7e8 to 002ca7ff has its CatchHandler @ 002ca9bc */
        facebook::react::HostPlatformViewProps::setProp(pPVar2,(uint)param_3,(char *)plVar9,param_5)
        ;
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 002ca810 to 002ca81b has its CatchHandler @ 002ca9ac */
          (*(code *)(&PTR_FUN_00380418)[local_a0])(&uStack_d1,local_d0);
        }
        pPVar2 = local_f0;
        pPVar4 = *(Props **)unaff_x24;
      }
      if (*(long *)(lVar1 + 0x28) != local_68) goto LAB_002ca9f0;
                    /* try { // try from 002ca878 to 002ca887 has its CatchHandler @ 002ca9b0 */
      FUN_002caa2c(*(undefined8 *)PTR_name_00395400);
    }
    if (*(long *)(lVar1 + 0x28) != local_68) goto LAB_002ca9f0;
                    /* try { // try from 002ca898 to 002ca8a7 has its CatchHandler @ 002ca958 */
    FUN_002caa2c(*(undefined8 *)PTR_name_003953f8);
LAB_002ca8a8:
    iVar5 = __cxa_guard_acquire(
                               PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZN7margelo5nitro4rive5views27HybridRiveViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS6_19HybridRiveViewPropsENS0_20BaseViewEventEmitterENS6_19HybridRiveViewStateEE18defaultSharedPropsEvE18defaultSharedProps_003953c0
                               );
    if (iVar5 != 0) {
                    /* try { // try from 002ca8b8 to 002ca8bb has its CatchHandler @ 002ca93c */
      FUN_002c970c();
      __cxa_atexit(FUN_002c9bdc,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZN7margelo5nitro4rive5views27HybridRiveViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS6_19HybridRiveViewPropsENS0_20BaseViewEventEmitterENS6_19HybridRiveViewStateEE18defaultSharedPropsEvE18defaultSharedProps_003953b8
                   ,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZN7margelo5nitro4rive5views27HybridRiveViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS6_19HybridRiveViewPropsENS0_20BaseViewEventEmitterENS6_19HybridRiveViewStateEE18defaultSharedPropsEvE18defaultSharedProps_003953c0
                         );
    }
LAB_002ca6ac:
    local_b0 = (dynamic *)0x0;
                    /* try { // try from 002ca6bc to 002ca6cf has its CatchHandler @ 002ca954 */
    facebook::react::Props::initializeDynamicProps
              (unaff_x24,
               *(RawProps **)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZN7margelo5nitro4rive5views27HybridRiveViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS6_19HybridRiveViewPropsENS0_20BaseViewEventEmitterENS6_19HybridRiveViewStateEE18defaultSharedPropsEvE18defaultSharedProps_003953b8
               ,(function *)param_5);
  } while( true );
}


// ===== 002ca9f4  FUN_002ca9f4 =====

void FUN_002ca9f4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002caa2c  FUN_002caa2c =====

void FUN_002caa2c(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  byte local_50 [16];
  void *local_40;
  TypeError aTStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc
            (local_50,param_1);
                    /* try { // try from 002caa58 to 002caa67 has its CatchHandler @ 002caa90 */
  folly::TypeError::TypeError(aTStack_38,local_50,param_2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 002caa78 to 002caa7f has its CatchHandler @ 002caa80 */
    uVar2 = FUN_002cab34(aTStack_38);
                    /* catch() { ... } // from try @ 002caa78 with catch @ 002caa80 */
    std::runtime_error::~runtime_error((runtime_error *)aTStack_38);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    if (*(long *)(lVar1 + 0x28) == local_28) {
      FUN_00255d34(uVar2);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002caac0  FUN_002caac0 =====

void FUN_002caac0(long param_1)

{
  long lVar1;
  undefined1 uStack_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
                    /* try { // try from 002caaf8 to 002cab03 has its CatchHandler @ 002cab30 */
    (*(code *)(&PTR_FUN_00380418)[*(uint *)(param_1 + 0x30)])(&uStack_29,param_1);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002cab34  FUN_002cab34 =====

void FUN_002cab34(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar2 = __cxa_allocate_exception(0x10);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    FUN_002cab94(uVar2,param_1);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(uVar2,PTR_typeinfo_003953c8,PTR__runtime_error_003953f0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002cab94  FUN_002cab94 =====

void FUN_002cab94(runtime_error *param_1,runtime_error *param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    std::runtime_error::runtime_error(param_1,param_2);
    *(undefined ***)param_1 = &PTR__runtime_error_003804a0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002cabe8  FUN_002cabe8 =====

void FUN_002cabe8(runtime_error *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  std::runtime_error::~runtime_error(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002cac34  margelo::nitro::rive::HybridViewModelSpec::loadHybridMethods =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* margelo::nitro::rive::HybridViewModelSpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridViewModelSpec::loadHybridMethods(HybridViewModelSpec *this)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long **pplVar6;
  runtime_error *prVar7;
  long lVar8;
  long *plVar9;
  undefined *puVar10;
  long *plVar11;
  long *plVar12;
  ulong local_200;
  ulong uStack_1f8;
  long *local_1f0;
  byte local_1e8;
  char local_1e7 [6];
  char acStack_1e1 [2];
  char acStack_1df [6];
  undefined1 local_1d9;
  void *local_1d8;
  byte local_1d0;
  char local_1cf [8];
  char acStack_1c7 [5];
  undefined2 uStack_1c2;
  char cStack_1c0;
  char acStack_1bf [5];
  undefined1 uStack_1ba;
  undefined1 uStack_1b9;
  basic_string local_1b8;
  undefined7 uStack_1b7;
  char cStack_1b0;
  undefined7 uStack_1af;
  char cStack_1a8;
  undefined4 uStack_1a7;
  undefined1 uStack_1a3;
  undefined2 uStack_1a2;
  basic_string local_1a0;
  undefined7 uStack_19f;
  char cStack_198;
  char acStack_197 [5];
  undefined2 uStack_192;
  char cStack_190;
  char acStack_18f [5];
  undefined1 uStack_18a;
  undefined1 uStack_189;
  byte local_188;
  char local_187 [8];
  char acStack_17f [5];
  undefined2 uStack_17a;
  char cStack_178;
  char acStack_177 [5];
  undefined1 uStack_172;
  undefined1 uStack_171;
  byte local_170;
  char local_16f [8];
  char acStack_167 [5];
  undefined2 uStack_162;
  char cStack_160;
  char acStack_15f [5];
  undefined1 uStack_15a;
  undefined1 uStack_159;
  basic_string local_158;
  undefined7 uStack_157;
  char cStack_150;
  undefined2 uStack_14f;
  undefined5 uStack_14d;
  long *local_148;
  byte local_140;
  char local_13f [5];
  char acStack_13a [3];
  char acStack_137 [5];
  undefined1 local_132;
  void *local_130;
  byte local_128;
  char local_127 [5];
  char acStack_122 [3];
  char acStack_11f [5];
  undefined1 local_11a;
  void *local_118;
  undefined *local_110;
  long *plStack_108;
  long *local_100;
  long *local_f8;
  long *plStack_f0;
  undefined4 local_e8;
  long *local_e0;
  long *plStack_d8;
  char *local_d0;
  long **local_c0;
  undefined8 local_b0;
  ulong local_a8;
  ulong uStack_a0;
  long *local_98;
  long *local_90;
  long *plStack_88;
  char *local_80;
  long **local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  margelo::nitro::HybridObject::loadHybridMethods();
  lVar8 = *(long *)(*(long *)this + -0x20);
  plVar9 = *(long **)(this + lVar8 + 8);
  if (plVar9 == (long *)0x0) {
    local_90 = (long *)0x0;
    plStack_88 = (long *)0x0;
    local_110 = PTR_typeinfo_00394b28;
                    /* try { // try from 002cac94 to 002caca3 has its CatchHandler @ 002cbe74 */
    FUN_00264f84(&local_e0,&local_110,&local_90);
    plVar12 = plStack_d8;
    plVar9 = local_e0;
    plVar11 = *(long **)(this + lVar8 + 0x10);
    local_e0 = (long *)0x0;
    plStack_d8 = (long *)0x0;
    *(long **)(this + lVar8 + 0x10) = plVar12;
    *(long **)(this + lVar8 + 8) = plVar9;
    if ((plVar11 != (long *)0x0) &&
       (lVar5 = FUN_00255510(0xffffffffffffffff,plVar11 + 1), lVar5 == 0)) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar9 = plStack_d8;
    if ((plStack_d8 != (long *)0x0) &&
       (lVar5 = FUN_00255510(0xffffffffffffffff,plStack_d8 + 1), lVar5 == 0)) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar9 = plStack_88;
    if ((plStack_88 != (long *)0x0) &&
       (lVar5 = FUN_00255510(0xffffffffffffffff,plStack_88 + 1), lVar5 == 0)) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar9 = *(long **)(this + lVar8 + 8);
  }
  puVar10 = *(undefined **)(*plVar9 + 8);
  plVar12 = plVar9;
  while (puVar10 != PTR_typeinfo_name_00395428) {
    plVar12 = (long *)plVar12[1];
    if (plVar12 == (long *)0x0) {
      plStack_d8 = *(long **)(this + lVar8 + 0x10);
      local_e0 = plVar9;
      if (plStack_d8 != (long *)0x0) {
        FUN_00259a00(1,plStack_d8 + 1);
      }
      local_110 = PTR_typeinfo_00394b28;
                    /* try { // try from 002cadb0 to 002cadbf has its CatchHandler @ 002cbe68 */
      FUN_00264f84(&local_90,&local_110,&local_e0);
      plVar12 = plStack_88;
      plVar9 = local_90;
      plVar11 = *(long **)(this + lVar8 + 0x10);
      local_90 = (long *)0x0;
      plStack_88 = (long *)0x0;
      *(long **)(this + lVar8 + 0x10) = plVar12;
      *(long **)(this + lVar8 + 8) = plVar9;
      if ((plVar11 != (long *)0x0) &&
         (lVar5 = FUN_00255510(0xffffffffffffffff,plVar11 + 1), lVar5 == 0)) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar9 = plStack_88;
      if ((plStack_88 != (long *)0x0) &&
         (lVar5 = FUN_00255510(0xffffffffffffffff,plStack_88 + 1), lVar5 == 0)) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar9 = plStack_d8;
      if ((plStack_d8 != (long *)0x0) &&
         (lVar5 = FUN_00255510(0xffffffffffffffff,plStack_d8 + 1), lVar5 == 0)) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar12 = *(long **)(this + lVar8 + 8);
      lVar8 = plVar12[6];
      goto joined_r0x002cae64;
    }
    puVar10 = *(undefined **)(*plVar12 + 8);
  }
  lVar8 = plVar12[6];
joined_r0x002cae64:
  if (((lVar8 == 0) && (plVar12[0xb] == 0)) && (plVar12[0x10] == 0)) {
    local_128 = 0x1a;
    local_11a = 0;
                    /* try { // try from 002caea0 to 002caeb3 has its CatchHandler @ 002cbfa8 */
    local_127 = (char  [5])s_propertyCount_001d519b._0_5_;
    acStack_122 = (char  [3])s_propertyCount_001d519b._5_3_;
    acStack_11f = (char  [5])s_propertyCount_001d519b._8_5_;
    FUN_002cc210(plVar12,&local_128,0x10,1);
    if ((local_128 & 1) != 0) {
      operator_delete(local_118);
    }
    local_140 = 0x1a;
    local_132 = 0;
    local_13f[0] = s_instanceCount_001d59f4[0];
    local_13f[1] = s_instanceCount_001d59f4[1];
    local_13f[2] = s_instanceCount_001d59f4[2];
    local_13f[3] = s_instanceCount_001d59f4[3];
    local_13f[4] = s_instanceCount_001d59f4[4];
    acStack_13a[0] = s_instanceCount_001d59f4[5];
    acStack_13a[1] = s_instanceCount_001d59f4[6];
    acStack_13a[2] = s_instanceCount_001d59f4[7];
    acStack_137[0] = s_instanceCount_001d59f4[8];
    acStack_137[1] = s_instanceCount_001d59f4[9];
    acStack_137[2] = s_instanceCount_001d59f4[10];
    acStack_137[3] = s_instanceCount_001d59f4[0xb];
    acStack_137[4] = s_instanceCount_001d59f4[0xc];
                    /* try { // try from 002caee8 to 002caefb has its CatchHandler @ 002cbf94 */
    FUN_002cc210(plVar12,&local_140,0x18,1);
    if ((local_140 & 1) != 0) {
      operator_delete(local_130);
    }
    local_158 = (basic_string)0x12;
    uStack_14f = 0x65;
    uStack_157 = (undefined7)s_modelName_001d5eaf._0_8_;
    cStack_150 = SUB81(s_modelName_001d5eaf._0_8_,7);
    lVar8 = FUN_002632b8(plVar12[8],plVar12[9],&local_158);
    if (lVar8 != 0) {
      prVar7 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002cba40 to 002cba53 has its CatchHandler @ 002cc17c */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_158);
                    /* try { // try from 002cba54 to 002cba67 has its CatchHandler @ 002cc0a0 */
      FUN_00263450(&local_e0,&local_90,"\" - a getter with that name already exists!");
                    /* try { // try from 002cba6c to 002cbaa3 has its CatchHandler @ 002cc07c */
      std::runtime_error::runtime_error(prVar7,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar7,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002cc20c;
    }
    plVar9 = plVar12 + 3;
    lVar8 = FUN_002632b8(*plVar9,plVar12[4],&local_158);
    if (lVar8 != 0) {
      prVar7 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002cbab4 to 002cbac7 has its CatchHandler @ 002cc178 */
      std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",&local_158);
                    /* try { // try from 002cbac8 to 002cbadb has its CatchHandler @ 002cc078 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002cbae0 to 002cbb17 has its CatchHandler @ 002cc04c */
      std::runtime_error::runtime_error(prVar7,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar7,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002cc20c;
    }
    plStack_108 = (long *)CONCAT53(uStack_14d,CONCAT21(uStack_14f,cStack_150));
    local_110 = (undefined *)CONCAT71(uStack_157,local_158);
    local_100 = local_148;
    plStack_f0 = _UNK_001d7f68;
    local_f8 = _DAT_001d7f60;
    local_e8 = 1;
                    /* try { // try from 002caf78 to 002caf7f has its CatchHandler @ 002cbf7c */
    local_70 = (long **)operator_new(0x38);
    *local_70 = (long *)&PTR_FUN_00380e90;
    if (((ulong)local_110 & 1) == 0) {
      local_70[2] = plStack_108;
      *(undefined **)(local_70 + 1) = local_110;
      local_70[3] = local_100;
    }
    else {
                    /* try { // try from 002cafb0 to 002cafb3 has its CatchHandler @ 002cbe58 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (local_70 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70[5] = plStack_f0;
    local_70[4] = local_f8;
    *(undefined4 *)(local_70 + 6) = local_e8;
    if (((byte)local_110._0_1_ & 1) == 0) {
LAB_002caff0:
      lVar8 = -0x40;
      local_c0 = local_70;
LAB_002cb000:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar8) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar8 = -0x90;
        goto LAB_002cb000;
      }
      if (local_70 != &local_90) goto LAB_002caff0;
      local_c0 = &local_e0;
                    /* try { // try from 002cb868 to 002cb873 has its CatchHandler @ 002cbc74 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 0;
    if (((byte)local_158 & 1) == 0) {
      uStack_a0 = CONCAT53(uStack_14d,CONCAT21(uStack_14f,cStack_150));
      local_a8 = CONCAT71(uStack_157,local_158);
      local_98 = local_148;
    }
    else {
                    /* try { // try from 002cb030 to 002cb037 has its CatchHandler @ 002cbdec */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_148,CONCAT53(uStack_14d,CONCAT21(uStack_14f,cStack_150)));
    }
    if (local_70 == &local_90) {
      lVar8 = 4;
      pplVar6 = &local_90;
LAB_002cb05c:
      (*(code *)(*pplVar6)[lVar8])();
    }
    else if (local_70 != (long **)0x0) {
      lVar8 = 5;
      pplVar6 = local_70;
      goto LAB_002cb05c;
    }
                    /* try { // try from 002cb068 to 002cb07b has its CatchHandler @ 002cbf6c */
    FUN_002634d4(plVar12 + 8,&local_158,&local_158,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar8 = 4;
      pplVar6 = &local_e0;
LAB_002cb0b0:
      (*(code *)(*pplVar6)[lVar8])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar8 = 5;
      pplVar6 = local_c0;
      goto LAB_002cb0b0;
    }
    if (((byte)local_158 & 1) != 0) {
      operator_delete(local_148);
    }
    local_170 = 0x2a;
    uStack_15a = 0;
    acStack_167[0] = s_getPropertyCountAsync_001d7708[8];
    acStack_167[1] = s_getPropertyCountAsync_001d7708[9];
    acStack_167[2] = s_getPropertyCountAsync_001d7708[10];
    acStack_167[3] = s_getPropertyCountAsync_001d7708[0xb];
    acStack_167[4] = s_getPropertyCountAsync_001d7708[0xc];
    local_16f[0] = s_getPropertyCountAsync_001d7708[0];
    local_16f[1] = s_getPropertyCountAsync_001d7708[1];
    local_16f[2] = s_getPropertyCountAsync_001d7708[2];
    local_16f[3] = s_getPropertyCountAsync_001d7708[3];
    local_16f[4] = s_getPropertyCountAsync_001d7708[4];
    local_16f[5] = s_getPropertyCountAsync_001d7708[5];
    local_16f[6] = s_getPropertyCountAsync_001d7708[6];
    local_16f[7] = s_getPropertyCountAsync_001d7708[7];
    uStack_162 = (undefined2)s_getPropertyCountAsync_001d7708._13_3_;
    cStack_160 = SUB31(s_getPropertyCountAsync_001d7708._13_3_,2);
    acStack_15f[0] = s_getPropertyCountAsync_001d7708[0x10];
    acStack_15f[1] = s_getPropertyCountAsync_001d7708[0x11];
    acStack_15f[2] = s_getPropertyCountAsync_001d7708[0x12];
    acStack_15f[3] = s_getPropertyCountAsync_001d7708[0x13];
    acStack_15f[4] = s_getPropertyCountAsync_001d7708[0x14];
                    /* try { // try from 002cb0f0 to 002cb103 has its CatchHandler @ 002cbf58 */
    FUN_002cc650(plVar12,&local_170,0x28,1);
    if ((local_170 & 1) != 0) {
      operator_delete((void *)CONCAT17(uStack_159,
                                       CONCAT16(uStack_15a,CONCAT51(acStack_15f,cStack_160))));
    }
    local_188 = 0x2a;
    uStack_172 = 0;
    acStack_17f[0] = s_getInstanceCountAsync_001d7a87[8];
    acStack_17f[1] = s_getInstanceCountAsync_001d7a87[9];
    acStack_17f[2] = s_getInstanceCountAsync_001d7a87[10];
    acStack_17f[3] = s_getInstanceCountAsync_001d7a87[0xb];
    acStack_17f[4] = s_getInstanceCountAsync_001d7a87[0xc];
    local_187[0] = s_getInstanceCountAsync_001d7a87[0];
    local_187[1] = s_getInstanceCountAsync_001d7a87[1];
    local_187[2] = s_getInstanceCountAsync_001d7a87[2];
    local_187[3] = s_getInstanceCountAsync_001d7a87[3];
    local_187[4] = s_getInstanceCountAsync_001d7a87[4];
    local_187[5] = s_getInstanceCountAsync_001d7a87[5];
    local_187[6] = s_getInstanceCountAsync_001d7a87[6];
    local_187[7] = s_getInstanceCountAsync_001d7a87[7];
    uStack_17a = (undefined2)s_getInstanceCountAsync_001d7a87._13_3_;
    cStack_178 = SUB31(s_getInstanceCountAsync_001d7a87._13_3_,2);
    acStack_177[0] = s_getInstanceCountAsync_001d7a87[0x10];
    acStack_177[1] = s_getInstanceCountAsync_001d7a87[0x11];
    acStack_177[2] = s_getInstanceCountAsync_001d7a87[0x12];
    acStack_177[3] = s_getInstanceCountAsync_001d7a87[0x13];
    acStack_177[4] = s_getInstanceCountAsync_001d7a87[0x14];
                    /* try { // try from 002cb138 to 002cb14b has its CatchHandler @ 002cbf44 */
    FUN_002cc650(plVar12,&local_188,0x30,1);
    if ((local_188 & 1) != 0) {
      operator_delete((void *)CONCAT17(uStack_171,
                                       CONCAT16(uStack_172,CONCAT51(acStack_177,cStack_178))));
    }
    local_1a0 = (basic_string)0x2a;
    uStack_18a = 0;
    acStack_197[0] = s_createInstanceByIndex_001d5c07[8];
    acStack_197[1] = s_createInstanceByIndex_001d5c07[9];
    acStack_197[2] = s_createInstanceByIndex_001d5c07[10];
    acStack_197[3] = s_createInstanceByIndex_001d5c07[0xb];
    acStack_197[4] = s_createInstanceByIndex_001d5c07[0xc];
    uStack_19f = (undefined7)s_createInstanceByIndex_001d5c07._0_8_;
    cStack_198 = SUB81(s_createInstanceByIndex_001d5c07._0_8_,7);
    uStack_192 = (undefined2)s_createInstanceByIndex_001d5c07._13_3_;
    cStack_190 = SUB31(s_createInstanceByIndex_001d5c07._13_3_,2);
    acStack_18f[0] = s_createInstanceByIndex_001d5c07[0x10];
    acStack_18f[1] = s_createInstanceByIndex_001d5c07[0x11];
    acStack_18f[2] = s_createInstanceByIndex_001d5c07[0x12];
    acStack_18f[3] = s_createInstanceByIndex_001d5c07[0x13];
    acStack_18f[4] = s_createInstanceByIndex_001d5c07[0x14];
    lVar8 = FUN_002632b8(plVar12[8],plVar12[9],&local_1a0);
    if ((lVar8 != 0) || (lVar8 = FUN_002632b8(plVar12[0xd],plVar12[0xe],&local_1a0), lVar8 != 0)) {
      prVar7 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002cb8e4 to 002cb8f7 has its CatchHandler @ 002cc1d0 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_1a0);
                    /* try { // try from 002cb8f8 to 002cb90b has its CatchHandler @ 002cc160 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 002cb910 to 002cb947 has its CatchHandler @ 002cc13c */
      std::runtime_error::runtime_error(prVar7,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar7,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002cc20c;
    }
    lVar8 = FUN_002632b8(plVar12[3],plVar12[4],&local_1a0);
    if (lVar8 != 0) {
      prVar7 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002cbb24 to 002cbb37 has its CatchHandler @ 002cc138 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_1a0);
                    /* try { // try from 002cbb38 to 002cbb4b has its CatchHandler @ 002cc048 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002cbb50 to 002cbb87 has its CatchHandler @ 002cc01c */
      std::runtime_error::runtime_error(prVar7,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar7,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002cc20c;
    }
    plStack_108 = (long *)CONCAT26(uStack_192,CONCAT51(acStack_197,cStack_198));
    local_110 = (undefined *)CONCAT71(uStack_19f,local_1a0);
    local_100 = (long *)CONCAT17(uStack_189,CONCAT16(uStack_18a,CONCAT51(acStack_18f,cStack_190)));
    local_e8 = 0;
    plStack_f0 = _UNK_001d7f48;
    local_f8 = _DAT_001d7f40;
                    /* try { // try from 002cb1d0 to 002cb1d7 has its CatchHandler @ 002cbf2c */
    pplVar6 = (long **)operator_new(0x38);
    *pplVar6 = (long *)&PTR_FUN_00380f90;
    if (((ulong)local_110 & 1) == 0) {
      pplVar6[2] = plStack_108;
      *(undefined **)(pplVar6 + 1) = local_110;
      pplVar6[3] = local_100;
    }
    else {
                    /* try { // try from 002cb208 to 002cb20b has its CatchHandler @ 002cbddc */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar6 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar6;
    pplVar6[5] = plStack_f0;
    pplVar6[4] = local_f8;
    *(undefined4 *)(pplVar6 + 6) = local_e8;
    if (((byte)local_110._0_1_ & 1) == 0) {
LAB_002cb248:
      lVar8 = -0x40;
      local_c0 = local_70;
LAB_002cb258:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar8) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar8 = -0x90;
        goto LAB_002cb258;
      }
      if (local_70 != &local_90) goto LAB_002cb248;
      local_c0 = &local_e0;
                    /* try { // try from 002cb888 to 002cb893 has its CatchHandler @ 002cbc70 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 1;
    if (((byte)local_1a0 & 1) == 0) {
      uStack_a0 = CONCAT26(uStack_192,CONCAT51(acStack_197,cStack_198));
      local_a8 = CONCAT71(uStack_19f,local_1a0);
      local_98 = (long *)CONCAT17(uStack_189,CONCAT16(uStack_18a,CONCAT51(acStack_18f,cStack_190)));
    }
    else {
                    /* try { // try from 002cb28c to 002cb293 has its CatchHandler @ 002cbd70 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,
                 (char *)CONCAT17(uStack_189,CONCAT16(uStack_18a,CONCAT51(acStack_18f,cStack_190))),
                 CONCAT26(uStack_192,CONCAT51(acStack_197,cStack_198)));
    }
    if (local_70 == &local_90) {
      lVar8 = 4;
      pplVar6 = &local_90;
LAB_002cb2b8:
      (*(code *)(*pplVar6)[lVar8])();
    }
    else if (local_70 != (long **)0x0) {
      lVar8 = 5;
      pplVar6 = local_70;
      goto LAB_002cb2b8;
    }
                    /* try { // try from 002cb2c4 to 002cb2d7 has its CatchHandler @ 002cbf1c */
    FUN_002634d4(plVar9,&local_1a0,&local_1a0,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar8 = 4;
      pplVar6 = &local_e0;
LAB_002cb30c:
      (*(code *)(*pplVar6)[lVar8])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar8 = 5;
      pplVar6 = local_c0;
      goto LAB_002cb30c;
    }
    if (((byte)local_1a0 & 1) != 0) {
      operator_delete((void *)CONCAT17(uStack_189,
                                       CONCAT16(uStack_18a,CONCAT51(acStack_18f,cStack_190))));
    }
    local_1b8 = (basic_string)0x28;
    uStack_1a7 = 0x656d614e;
    uStack_1af = (undefined7)s_createInstanceByName_001d5243._8_8_;
    cStack_1a8 = SUB81(s_createInstanceByName_001d5243._8_8_,7);
    uStack_1b7 = (undefined7)s_createInstanceByName_001d5243._0_8_;
    cStack_1b0 = SUB81(s_createInstanceByName_001d5243._0_8_,7);
    uStack_1a3 = 0;
    lVar8 = FUN_002632b8(plVar12[8],plVar12[9],&local_1b8);
    if ((lVar8 != 0) || (lVar8 = FUN_002632b8(plVar12[0xd],plVar12[0xe],&local_1b8), lVar8 != 0)) {
      prVar7 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002cb958 to 002cb96b has its CatchHandler @ 002cc1b4 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_1b8);
                    /* try { // try from 002cb96c to 002cb97f has its CatchHandler @ 002cc120 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 002cb984 to 002cb9bb has its CatchHandler @ 002cc0fc */
      std::runtime_error::runtime_error(prVar7,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar7,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002cc20c;
    }
    lVar8 = FUN_002632b8(plVar12[3],plVar12[4],&local_1b8);
    if (lVar8 != 0) {
      prVar7 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002cbb94 to 002cbba7 has its CatchHandler @ 002cc0f8 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_1b8);
                    /* try { // try from 002cbba8 to 002cbbbb has its CatchHandler @ 002cc018 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002cbbc0 to 002cbbf7 has its CatchHandler @ 002cbfec */
      std::runtime_error::runtime_error(prVar7,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar7,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002cc20c;
    }
    plStack_108 = (long *)CONCAT71(uStack_1af,cStack_1b0);
    local_110 = (undefined *)CONCAT71(uStack_1b7,local_1b8);
    local_100 = (long *)CONCAT26(uStack_1a2,CONCAT15(uStack_1a3,CONCAT41(uStack_1a7,cStack_1a8)));
    local_e8 = 0;
    plStack_f0 = _UNK_001d7f78;
    local_f8 = _DAT_001d7f70;
                    /* try { // try from 002cb3a0 to 002cb3a7 has its CatchHandler @ 002cbf04 */
    pplVar6 = (long **)operator_new(0x38);
    *pplVar6 = (long *)&PTR_FUN_00381010;
    if (((ulong)local_110 & 1) == 0) {
      pplVar6[2] = plStack_108;
      *(undefined **)(pplVar6 + 1) = local_110;
      pplVar6[3] = local_100;
    }
    else {
                    /* try { // try from 002cb3d8 to 002cb3db has its CatchHandler @ 002cbd60 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar6 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar6;
    pplVar6[5] = plStack_f0;
    pplVar6[4] = local_f8;
    *(undefined4 *)(pplVar6 + 6) = local_e8;
    if (((byte)local_110._0_1_ & 1) == 0) {
LAB_002cb418:
      lVar8 = -0x40;
      local_c0 = local_70;
LAB_002cb428:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar8) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar8 = -0x90;
        goto LAB_002cb428;
      }
      if (local_70 != &local_90) goto LAB_002cb418;
      local_c0 = &local_e0;
                    /* try { // try from 002cb8a8 to 002cb8b3 has its CatchHandler @ 002cbc6c */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 1;
    if (((byte)local_1b8 & 1) == 0) {
      uStack_a0 = CONCAT71(uStack_1af,cStack_1b0);
      local_a8 = CONCAT71(uStack_1b7,local_1b8);
      local_98 = (long *)CONCAT26(uStack_1a2,CONCAT15(uStack_1a3,CONCAT41(uStack_1a7,cStack_1a8)));
    }
    else {
                    /* try { // try from 002cb45c to 002cb463 has its CatchHandler @ 002cbcf4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,
                 (char *)CONCAT26(uStack_1a2,CONCAT15(uStack_1a3,CONCAT41(uStack_1a7,cStack_1a8))),
                 CONCAT71(uStack_1af,cStack_1b0));
    }
    if (local_70 == &local_90) {
      lVar8 = 4;
      pplVar6 = &local_90;
LAB_002cb488:
      (*(code *)(*pplVar6)[lVar8])();
    }
    else if (local_70 != (long **)0x0) {
      lVar8 = 5;
      pplVar6 = local_70;
      goto LAB_002cb488;
    }
                    /* try { // try from 002cb494 to 002cb4a7 has its CatchHandler @ 002cbef4 */
    FUN_002634d4(plVar9,&local_1b8,&local_1b8,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar8 = 4;
      pplVar6 = &local_e0;
LAB_002cb4dc:
      (*(code *)(*pplVar6)[lVar8])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar8 = 5;
      pplVar6 = local_c0;
      goto LAB_002cb4dc;
    }
    if (((byte)local_1b8 & 1) != 0) {
      operator_delete((void *)CONCAT26(uStack_1a2,
                                       CONCAT15(uStack_1a3,CONCAT41(uStack_1a7,cStack_1a8))));
    }
    local_1d0 = 0x2a;
    uStack_1ba = 0;
    acStack_1c7[0] = s_createDefaultInstance_001d6484[8];
    acStack_1c7[1] = s_createDefaultInstance_001d6484[9];
    acStack_1c7[2] = s_createDefaultInstance_001d6484[10];
    acStack_1c7[3] = s_createDefaultInstance_001d6484[0xb];
    acStack_1c7[4] = s_createDefaultInstance_001d6484[0xc];
    local_1cf[0] = s_createDefaultInstance_001d6484[0];
    local_1cf[1] = s_createDefaultInstance_001d6484[1];
    local_1cf[2] = s_createDefaultInstance_001d6484[2];
    local_1cf[3] = s_createDefaultInstance_001d6484[3];
    local_1cf[4] = s_createDefaultInstance_001d6484[4];
    local_1cf[5] = s_createDefaultInstance_001d6484[5];
    local_1cf[6] = s_createDefaultInstance_001d6484[6];
    local_1cf[7] = s_createDefaultInstance_001d6484[7];
    uStack_1c2 = (undefined2)s_createDefaultInstance_001d6484._13_3_;
    cStack_1c0 = SUB31(s_createDefaultInstance_001d6484._13_3_,2);
    acStack_1bf[0] = s_createDefaultInstance_001d6484[0x10];
    acStack_1bf[1] = s_createDefaultInstance_001d6484[0x11];
    acStack_1bf[2] = s_createDefaultInstance_001d6484[0x12];
    acStack_1bf[3] = s_createDefaultInstance_001d6484[0x13];
    acStack_1bf[4] = s_createDefaultInstance_001d6484[0x14];
                    /* try { // try from 002cb51c to 002cb52f has its CatchHandler @ 002cbee0 */
    FUN_002cca9c(plVar12,&local_1d0,0x48,1);
    if ((local_1d0 & 1) != 0) {
      operator_delete((void *)CONCAT17(uStack_1b9,
                                       CONCAT16(uStack_1ba,CONCAT51(acStack_1bf,cStack_1c0))));
    }
    local_1e8 = 0x1c;
    local_1d9 = 0;
    local_1e7[0] = s_createInstance_001d7a9d[0];
    local_1e7[1] = s_createInstance_001d7a9d[1];
    local_1e7[2] = s_createInstance_001d7a9d[2];
    local_1e7[3] = s_createInstance_001d7a9d[3];
    local_1e7[4] = s_createInstance_001d7a9d[4];
    local_1e7[5] = s_createInstance_001d7a9d[5];
    acStack_1e1[0] = s_createInstance_001d7a9d[6];
    acStack_1e1[1] = s_createInstance_001d7a9d[7];
    acStack_1df[0] = s_createInstance_001d7a9d[8];
    acStack_1df[1] = s_createInstance_001d7a9d[9];
    acStack_1df[2] = s_createInstance_001d7a9d[10];
    acStack_1df[3] = s_createInstance_001d7a9d[0xb];
    acStack_1df[4] = s_createInstance_001d7a9d[0xc];
    acStack_1df[5] = s_createInstance_001d7a9d[0xd];
                    /* try { // try from 002cb564 to 002cb577 has its CatchHandler @ 002cbecc */
    FUN_002cca9c(plVar12,&local_1e8,0x50,1);
    if ((local_1e8 & 1) != 0) {
      operator_delete(local_1d8);
    }
    plVar11 = (long *)operator_new(0x20);
    uStack_1f8 = _UNK_001d8008;
    local_200 = _DAT_001d8000;
    uVar4 = s_createInstanceByNameAsync_001d61a6._17_8_;
    uVar3 = s_createInstanceByNameAsync_001d61a6._0_8_;
    uVar2 = CONCAT17(s_createInstanceByNameAsync_001d61a6[0x10],
                     s_createInstanceByNameAsync_001d61a6._9_7_);
    plVar11[1] = CONCAT71(s_createInstanceByNameAsync_001d61a6._9_7_,
                          s_createInstanceByNameAsync_001d61a6[8]);
    *plVar11 = uVar3;
    *(undefined8 *)((long)plVar11 + 0x11) = uVar4;
    *(undefined8 *)((long)plVar11 + 9) = uVar2;
    *(undefined1 *)((long)plVar11 + 0x19) = 0;
    local_1f0 = plVar11;
    lVar8 = FUN_002632b8(plVar12[8],plVar12[9],&local_200);
    if ((lVar8 != 0) || (lVar8 = FUN_002632b8(plVar12[0xd],plVar12[0xe],&local_200), lVar8 != 0)) {
      prVar7 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002cb9cc to 002cb9df has its CatchHandler @ 002cc198 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",(basic_string *)&local_200);
                    /* try { // try from 002cb9e0 to 002cb9f3 has its CatchHandler @ 002cc0e0 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 002cb9f8 to 002cba2f has its CatchHandler @ 002cc0bc */
      std::runtime_error::runtime_error(prVar7,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar7,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002cc20c;
    }
    lVar8 = FUN_002632b8(plVar12[3],plVar12[4],&local_200);
    if (lVar8 != 0) {
      prVar7 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002cbc04 to 002cbc17 has its CatchHandler @ 002cc0b8 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",(basic_string *)&local_200);
                    /* try { // try from 002cbc18 to 002cbc2b has its CatchHandler @ 002cbfe8 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 002cbc30 to 002cbc67 has its CatchHandler @ 002cbfbc */
      std::runtime_error::runtime_error(prVar7,(basic_string *)&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar7,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002cc20c;
    }
                    /* try { // try from 002cb5f4 to 002cb607 has its CatchHandler @ 002cbec4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_110,(char *)plVar11,0x19);
    local_e8 = 0;
    plStack_f0 = _UNK_001d80e8;
    local_f8 = _DAT_001d80e0;
                    /* try { // try from 002cb618 to 002cb61f has its CatchHandler @ 002cbeac */
    pplVar6 = (long **)operator_new(0x38);
    *pplVar6 = (long *)&PTR_FUN_00381110;
    if (((ulong)local_110 & 1) == 0) {
      pplVar6[2] = plStack_108;
      *(undefined **)(pplVar6 + 1) = local_110;
      pplVar6[3] = local_100;
    }
    else {
                    /* try { // try from 002cb650 to 002cb653 has its CatchHandler @ 002cbce4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pplVar6 + 1),(char *)local_100,(ulong)plStack_108);
    }
    local_70 = pplVar6;
    pplVar6[5] = plStack_f0;
    pplVar6[4] = local_f8;
    *(undefined4 *)(pplVar6 + 6) = local_e8;
    if (((byte)local_110._0_1_ & 1) == 0) {
LAB_002cb68c:
      lVar8 = -0x40;
      local_c0 = local_70;
LAB_002cb69c:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar8) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (long **)0x0) {
        lVar8 = -0x90;
        goto LAB_002cb69c;
      }
      if (local_70 != &local_90) goto LAB_002cb68c;
      local_c0 = &local_e0;
                    /* try { // try from 002cb8c8 to 002cb8d3 has its CatchHandler @ 002cbc68 */
      (*(code *)local_90[3])(&local_90,&local_e0);
    }
    local_b0 = 1;
    if ((local_200 & 1) == 0) {
      uStack_a0 = uStack_1f8;
      local_a8 = local_200;
      local_98 = local_1f0;
    }
    else {
                    /* try { // try from 002cb6d0 to 002cb6d7 has its CatchHandler @ 002cbc78 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)local_1f0,uStack_1f8);
    }
    if (local_70 == &local_90) {
      lVar8 = 4;
      pplVar6 = &local_90;
LAB_002cb6fc:
      (*(code *)(*pplVar6)[lVar8])();
    }
    else if (local_70 != (long **)0x0) {
      lVar8 = 5;
      pplVar6 = local_70;
      goto LAB_002cb6fc;
    }
                    /* try { // try from 002cb708 to 002cb71b has its CatchHandler @ 002cbe9c */
    FUN_002634d4(plVar9,&local_200,&local_200,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar8 = 4;
      pplVar6 = &local_e0;
LAB_002cb750:
      (*(code *)(*pplVar6)[lVar8])();
    }
    else if (local_c0 != (long **)0x0) {
      lVar8 = 5;
      pplVar6 = local_c0;
      goto LAB_002cb750;
    }
    if ((local_200 & 1) != 0) {
      operator_delete(local_1f0);
    }
    local_d0 = (char *)operator_new(0x20);
    plStack_d8 = _UNK_001d80b8;
    local_e0 = _DAT_001d80b0;
    uVar4 = s_createDefaultInstanceAsync_001d6ec6._18_8_;
    uVar3 = s_createDefaultInstanceAsync_001d6ec6._0_8_;
    uVar2 = CONCAT26(s_createDefaultInstanceAsync_001d6ec6._16_2_,
                     s_createDefaultInstanceAsync_001d6ec6._10_6_);
    *(ulong *)(local_d0 + 8) =
         CONCAT62(s_createDefaultInstanceAsync_001d6ec6._10_6_,
                  s_createDefaultInstanceAsync_001d6ec6._8_2_);
    *(undefined8 *)local_d0 = uVar3;
    *(undefined8 *)(local_d0 + 0x12) = uVar4;
    *(undefined8 *)(local_d0 + 10) = uVar2;
    local_d0[0x1a] = '\0';
                    /* try { // try from 002cb7a8 to 002cb7bb has its CatchHandler @ 002cbe8c */
    FUN_002ccee8(&local_e0,plVar12,&local_e0,0x60,1);
    if (((ulong)local_e0 & 1) != 0) {
      operator_delete(local_d0);
    }
    local_80 = (char *)operator_new(0x20);
    plStack_88 = _UNK_001d7ef8;
    local_90 = _DAT_001d7ef0;
    uVar3 = s_createBlankInstanceAsync_001d4dcf._8_8_;
    uVar2 = s_createBlankInstanceAsync_001d4dcf._0_8_;
    *(undefined8 *)(local_80 + 0x10) = s_createBlankInstanceAsync_001d4dcf._16_8_;
    *(undefined8 *)(local_80 + 8) = uVar3;
    *(undefined8 *)local_80 = uVar2;
    local_80[0x18] = '\0';
                    /* try { // try from 002cb808 to 002cb81b has its CatchHandler @ 002cbe84 */
    FUN_002ccee8(&local_90,plVar12,&local_90,0x68,1);
    if (((ulong)local_90 & 1) != 0) {
      operator_delete(local_80);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_002cc20c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002cc210  FUN_002cc210 =====

void FUN_002cc210(long param_1,basic_string *param_2,long param_3,long param_4)

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
  if (lVar2 != 0) {
    prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002cc438 to 002cc44b has its CatchHandler @ 002cc628 */
    std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",param_2);
                    /* try { // try from 002cc44c to 002cc45f has its CatchHandler @ 002cc60c */
    FUN_00263450(local_d0,local_80,"\" - a getter with that name already exists!");
                    /* try { // try from 002cc464 to 002cc49b has its CatchHandler @ 002cc5e8 */
    std::runtime_error::runtime_error(prVar4,local_d0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_002cc64c;
  }
  lVar2 = FUN_002632b8(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),param_2);
  if (lVar2 != 0) {
    prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002cc4ac to 002cc4bf has its CatchHandler @ 002cc624 */
    std::__ndk1::operator+("Cannot add Hybrid Property Getter \"",param_2);
                    /* try { // try from 002cc4c0 to 002cc4d3 has its CatchHandler @ 002cc5e4 */
    FUN_00263450(local_d0,local_80,"\" - a method with that name already exists!");
                    /* try { // try from 002cc4d8 to 002cc50f has its CatchHandler @ 002cc5b8 */
    std::runtime_error::runtime_error(prVar4,local_d0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_002cc64c;
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
  local_d8 = 1;
  local_e8 = param_3;
  lStack_e0 = param_4;
                    /* try { // try from 002cc2a0 to 002cc2a7 has its CatchHandler @ 002cc5a0 */
  local_60 = (basic_string *)operator_new(0x38);
  *(undefined ***)local_60 = &PTR_FUN_00380e10;
  if ((local_100 & 1) == 0) {
    *(ulong *)(local_60 + 0x10) = uStack_f8;
    *(ulong *)(local_60 + 8) = local_100;
    *(char **)(local_60 + 0x18) = local_f0;
  }
  else {
                    /* try { // try from 002cc2d8 to 002cc2db has its CatchHandler @ 002cc580 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (local_60 + 8),local_f0,uStack_f8);
  }
  *(long *)(local_60 + 0x28) = lStack_e0;
  *(long *)(local_60 + 0x20) = local_e8;
  *(undefined4 *)(local_60 + 0x30) = local_d8;
  if (((byte)local_100._0_1_ & 1) == 0) {
LAB_002cc318:
    pbVar3 = (basic_string *)local_80;
    local_b0 = local_60;
LAB_002cc328:
    *(long *)(pbVar3 + 0x20) = 0;
  }
  else {
    operator_delete(local_f0);
    if (local_60 == (basic_string *)0x0) {
      pbVar3 = local_d0;
      goto LAB_002cc328;
    }
    if (local_60 != (basic_string *)local_80) goto LAB_002cc318;
    local_b0 = local_d0;
                    /* try { // try from 002cc41c to 002cc427 has its CatchHandler @ 002cc510 */
    (**(code **)(local_80[0] + 0x18))(local_80,local_d0);
  }
  local_a0 = 0;
  if (((byte)*param_2 & 1) == 0) {
    uStack_90 = *(undefined8 *)(param_2 + 8);
    local_98 = *(ulong *)param_2;
    local_88 = *(void **)(param_2 + 0x10);
  }
  else {
                    /* try { // try from 002cc358 to 002cc35f has its CatchHandler @ 002cc514 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_98,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  if (local_60 == (basic_string *)local_80) {
    lVar2 = 4;
    pbVar3 = (basic_string *)local_80;
LAB_002cc384:
    (**(code **)(*(long *)pbVar3 + lVar2 * 8))();
  }
  else if (local_60 != (basic_string *)0x0) {
    lVar2 = 5;
    pbVar3 = local_60;
    goto LAB_002cc384;
  }
                    /* try { // try from 002cc390 to 002cc3a3 has its CatchHandler @ 002cc590 */
  FUN_002634d4((undefined8 *)(param_1 + 0x40),param_2,param_2,local_d0);
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (local_b0 == local_d0) {
    lVar2 = 4;
    pbVar3 = local_d0;
LAB_002cc3d8:
    (**(code **)(*(long *)pbVar3 + lVar2 * 8))();
  }
  else if (local_b0 != (basic_string *)0x0) {
    lVar2 = 5;
    pbVar3 = local_b0;
    goto LAB_002cc3d8;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_002cc64c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002cc650  FUN_002cc650 =====

void FUN_002cc650(long param_1,basic_string *param_2,long param_3,long param_4)

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
                    /* try { // try from 002cc884 to 002cc897 has its CatchHandler @ 002cca74 */
    std::__ndk1::operator+("Cannot add Hybrid Method \"",param_2);
                    /* try { // try from 002cc898 to 002cc8ab has its CatchHandler @ 002cca5c */
    FUN_00263450(local_d0,local_80,"\" - a property with that name already exists!");
                    /* try { // try from 002cc8b0 to 002cc8e7 has its CatchHandler @ 002cca38 */
    std::runtime_error::runtime_error(prVar4,local_d0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_002cca98;
  }
  lVar2 = FUN_002632b8(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),param_2);
  if (lVar2 != 0) {
    prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002cc8f8 to 002cc90b has its CatchHandler @ 002cca34 */
    std::__ndk1::operator+("Cannot add Hybrid Method \"",param_2);
                    /* try { // try from 002cc90c to 002cc91f has its CatchHandler @ 002cca30 */
    FUN_00263450(local_d0,local_80,"\" - a method with that name already exists!");
                    /* try { // try from 002cc924 to 002cc95b has its CatchHandler @ 002cca04 */
    std::runtime_error::runtime_error(prVar4,local_d0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_002cca98;
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
                    /* try { // try from 002cc6ec to 002cc6f3 has its CatchHandler @ 002cc9ec */
  local_60 = (basic_string *)operator_new(0x38);
  *(undefined ***)local_60 = &PTR_FUN_00380f10;
  if ((local_100 & 1) == 0) {
    *(ulong *)(local_60 + 0x10) = uStack_f8;
    *(ulong *)(local_60 + 8) = local_100;
    *(char **)(local_60 + 0x18) = local_f0;
  }
  else {
                    /* try { // try from 002cc724 to 002cc727 has its CatchHandler @ 002cc9cc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (local_60 + 8),local_f0,uStack_f8);
  }
  *(long *)(local_60 + 0x28) = lStack_e0;
  *(long *)(local_60 + 0x20) = local_e8;
  *(undefined4 *)(local_60 + 0x30) = local_d8;
  if (((byte)local_100._0_1_ & 1) == 0) {
LAB_002cc764:
    pbVar3 = (basic_string *)local_80;
    local_b0 = local_60;
LAB_002cc774:
    *(long *)(pbVar3 + 0x20) = 0;
  }
  else {
    operator_delete(local_f0);
    if (local_60 == (basic_string *)0x0) {
      pbVar3 = local_d0;
      goto LAB_002cc774;
    }
    if (local_60 != (basic_string *)local_80) goto LAB_002cc764;
    local_b0 = local_d0;
                    /* try { // try from 002cc868 to 002cc873 has its CatchHandler @ 002cc95c */
    (**(code **)(local_80[0] + 0x18))(local_80,local_d0);
  }
  local_a0 = 0;
  if (((byte)*param_2 & 1) == 0) {
    uStack_90 = *(undefined8 *)(param_2 + 8);
    local_98 = *(ulong *)param_2;
    local_88 = *(void **)(param_2 + 0x10);
  }
  else {
                    /* try { // try from 002cc7a4 to 002cc7ab has its CatchHandler @ 002cc960 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_98,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  if (local_60 == (basic_string *)local_80) {
    lVar2 = 4;
    pbVar3 = (basic_string *)local_80;
LAB_002cc7d0:
    (**(code **)(*(long *)pbVar3 + lVar2 * 8))();
  }
  else if (local_60 != (basic_string *)0x0) {
    lVar2 = 5;
    pbVar3 = local_60;
    goto LAB_002cc7d0;
  }
                    /* try { // try from 002cc7dc to 002cc7ef has its CatchHandler @ 002cc9dc */
  FUN_002634d4((undefined8 *)(param_1 + 0x18),param_2,param_2,local_d0);
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (local_b0 == local_d0) {
    lVar2 = 4;
    pbVar3 = local_d0;
LAB_002cc824:
    (**(code **)(*(long *)pbVar3 + lVar2 * 8))();
  }
  else if (local_b0 != (basic_string *)0x0) {
    lVar2 = 5;
    pbVar3 = local_b0;
    goto LAB_002cc824;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_002cca98:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002cca9c  FUN_002cca9c =====

void FUN_002cca9c(long param_1,basic_string *param_2,long param_3,long param_4)

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
                    /* try { // try from 002cccd0 to 002ccce3 has its CatchHandler @ 002ccec0 */
    std::__ndk1::operator+("Cannot add Hybrid Method \"",param_2);
                    /* try { // try from 002ccce4 to 002cccf7 has its CatchHandler @ 002ccea8 */
    FUN_00263450(local_d0,local_80,"\" - a property with that name already exists!");
                    /* try { // try from 002cccfc to 002ccd33 has its CatchHandler @ 002cce84 */
    std::runtime_error::runtime_error(prVar4,local_d0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_002ccee4;
  }
  lVar2 = FUN_002632b8(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),param_2);
  if (lVar2 != 0) {
    prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002ccd44 to 002ccd57 has its CatchHandler @ 002cce80 */
    std::__ndk1::operator+("Cannot add Hybrid Method \"",param_2);
                    /* try { // try from 002ccd58 to 002ccd6b has its CatchHandler @ 002cce7c */
    FUN_00263450(local_d0,local_80,"\" - a method with that name already exists!");
                    /* try { // try from 002ccd70 to 002ccda7 has its CatchHandler @ 002cce50 */
    std::runtime_error::runtime_error(prVar4,local_d0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_002ccee4;
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
                    /* try { // try from 002ccb38 to 002ccb3f has its CatchHandler @ 002cce38 */
  local_60 = (basic_string *)operator_new(0x38);
  *(undefined ***)local_60 = &PTR_FUN_00381090;
  if ((local_100 & 1) == 0) {
    *(ulong *)(local_60 + 0x10) = uStack_f8;
    *(ulong *)(local_60 + 8) = local_100;
    *(char **)(local_60 + 0x18) = local_f0;
  }
  else {
                    /* try { // try from 002ccb70 to 002ccb73 has its CatchHandler @ 002cce18 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (local_60 + 8),local_f0,uStack_f8);
  }
  *(long *)(local_60 + 0x28) = lStack_e0;
  *(long *)(local_60 + 0x20) = local_e8;
  *(undefined4 *)(local_60 + 0x30) = local_d8;
  if (((byte)local_100._0_1_ & 1) == 0) {
LAB_002ccbb0:
    pbVar3 = (basic_string *)local_80;
    local_b0 = local_60;
LAB_002ccbc0:
    *(long *)(pbVar3 + 0x20) = 0;
  }
  else {
    operator_delete(local_f0);
    if (local_60 == (basic_string *)0x0) {
      pbVar3 = local_d0;
      goto LAB_002ccbc0;
    }
    if (local_60 != (basic_string *)local_80) goto LAB_002ccbb0;
    local_b0 = local_d0;
                    /* try { // try from 002cccb4 to 002cccbf has its CatchHandler @ 002ccda8 */
    (**(code **)(local_80[0] + 0x18))(local_80,local_d0);
  }
  local_a0 = 0;
  if (((byte)*param_2 & 1) == 0) {
    uStack_90 = *(undefined8 *)(param_2 + 8);
    local_98 = *(ulong *)param_2;
    local_88 = *(void **)(param_2 + 0x10);
  }
  else {
                    /* try { // try from 002ccbf0 to 002ccbf7 has its CatchHandler @ 002ccdac */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_98,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  if (local_60 == (basic_string *)local_80) {
    lVar2 = 4;
    pbVar3 = (basic_string *)local_80;
LAB_002ccc1c:
    (**(code **)(*(long *)pbVar3 + lVar2 * 8))();
  }
  else if (local_60 != (basic_string *)0x0) {
    lVar2 = 5;
    pbVar3 = local_60;
    goto LAB_002ccc1c;
  }
                    /* try { // try from 002ccc28 to 002ccc3b has its CatchHandler @ 002cce28 */
  FUN_002634d4((undefined8 *)(param_1 + 0x18),param_2,param_2,local_d0);
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (local_b0 == local_d0) {
    lVar2 = 4;
    pbVar3 = local_d0;
LAB_002ccc70:
    (**(code **)(*(long *)pbVar3 + lVar2 * 8))();
  }
  else if (local_b0 != (basic_string *)0x0) {
    lVar2 = 5;
    pbVar3 = local_b0;
    goto LAB_002ccc70;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_002ccee4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ccee8  FUN_002ccee8 =====

void FUN_002ccee8(long param_1,basic_string *param_2,long param_3,long param_4)

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
                    /* try { // try from 002cd11c to 002cd12f has its CatchHandler @ 002cd30c */
    std::__ndk1::operator+("Cannot add Hybrid Method \"",param_2);
                    /* try { // try from 002cd130 to 002cd143 has its CatchHandler @ 002cd2f4 */
    FUN_00263450(local_d0,local_80,"\" - a property with that name already exists!");
                    /* try { // try from 002cd148 to 002cd17f has its CatchHandler @ 002cd2d0 */
    std::runtime_error::runtime_error(prVar4,local_d0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_002cd330;
  }
  lVar2 = FUN_002632b8(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),param_2);
  if (lVar2 != 0) {
    prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002cd190 to 002cd1a3 has its CatchHandler @ 002cd2cc */
    std::__ndk1::operator+("Cannot add Hybrid Method \"",param_2);
                    /* try { // try from 002cd1a4 to 002cd1b7 has its CatchHandler @ 002cd2c8 */
    FUN_00263450(local_d0,local_80,"\" - a method with that name already exists!");
                    /* try { // try from 002cd1bc to 002cd1f3 has its CatchHandler @ 002cd29c */
    std::runtime_error::runtime_error(prVar4,local_d0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_002cd330;
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
                    /* try { // try from 002ccf84 to 002ccf8b has its CatchHandler @ 002cd284 */
  local_60 = (basic_string *)operator_new(0x38);
  *(undefined ***)local_60 = &PTR_FUN_00381190;
  if ((local_100 & 1) == 0) {
    *(ulong *)(local_60 + 0x10) = uStack_f8;
    *(ulong *)(local_60 + 8) = local_100;
    *(char **)(local_60 + 0x18) = local_f0;
  }
  else {
                    /* try { // try from 002ccfbc to 002ccfbf has its CatchHandler @ 002cd264 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (local_60 + 8),local_f0,uStack_f8);
  }
  *(long *)(local_60 + 0x28) = lStack_e0;
  *(long *)(local_60 + 0x20) = local_e8;
  *(undefined4 *)(local_60 + 0x30) = local_d8;
  if (((byte)local_100._0_1_ & 1) == 0) {
LAB_002ccffc:
    pbVar3 = (basic_string *)local_80;
    local_b0 = local_60;
LAB_002cd00c:
    *(long *)(pbVar3 + 0x20) = 0;
  }
  else {
    operator_delete(local_f0);
    if (local_60 == (basic_string *)0x0) {
      pbVar3 = local_d0;
      goto LAB_002cd00c;
    }
    if (local_60 != (basic_string *)local_80) goto LAB_002ccffc;
    local_b0 = local_d0;
                    /* try { // try from 002cd100 to 002cd10b has its CatchHandler @ 002cd1f4 */
    (**(code **)(local_80[0] + 0x18))(local_80,local_d0);
  }
  local_a0 = 0;
  if (((byte)*param_2 & 1) == 0) {
    uStack_90 = *(undefined8 *)(param_2 + 8);
    local_98 = *(ulong *)param_2;
    local_88 = *(void **)(param_2 + 0x10);
  }
  else {
                    /* try { // try from 002cd03c to 002cd043 has its CatchHandler @ 002cd1f8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_98,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  if (local_60 == (basic_string *)local_80) {
    lVar2 = 4;
    pbVar3 = (basic_string *)local_80;
LAB_002cd068:
    (**(code **)(*(long *)pbVar3 + lVar2 * 8))();
  }
  else if (local_60 != (basic_string *)0x0) {
    lVar2 = 5;
    pbVar3 = local_60;
    goto LAB_002cd068;
  }
                    /* try { // try from 002cd074 to 002cd087 has its CatchHandler @ 002cd274 */
  FUN_002634d4((undefined8 *)(param_1 + 0x18),param_2,param_2,local_d0);
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (local_b0 == local_d0) {
    lVar2 = 4;
    pbVar3 = local_d0;
LAB_002cd0bc:
    (**(code **)(*(long *)pbVar3 + lVar2 * 8))();
  }
  else if (local_b0 != (basic_string *)0x0) {
    lVar2 = 5;
    pbVar3 = local_b0;
    goto LAB_002cd0bc;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_002cd330:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002cd334  FUN_002cd334 =====

void FUN_002cd334(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00381190;
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


// ===== 002cd3a0  FUN_002cd3a0 =====

void FUN_002cd3a0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00381190;
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


// ===== 002cd408  FUN_002cd408 =====

undefined8 * FUN_002cd408(long param_1)

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
  *puVar4 = &PTR_FUN_00381190;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002cd468 to 002cd46b has its CatchHandler @ 002cd4a4 */
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


// ===== 002cd4cc  FUN_002cd4cc =====

void FUN_002cd4cc(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00381190;
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


// ===== 002cd564  FUN_002cd564 =====

void FUN_002cd564(long param_1)

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


// ===== 002cd5c4  FUN_002cd5c4 =====

void FUN_002cd5c4(void *param_1)

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


// ===== 002cd620  FUN_002cd620 =====

void FUN_002cd620(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
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
                    /* try { // try from 002cd67c to 002cd68b has its CatchHandler @ 002cdc2c */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar4 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00394b28,0xffffffffffffffff
                            ), lVar4 == 0)) {
    lVar4 = 0;
    plVar7 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x002cd704;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto joined_r0x002cd704;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar7 = plStack_78;
  }
  lVar5 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar5 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002cd704:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar8 == 0) {
    pcVar9 = *(code **)(param_2 + 0x20);
    uVar8 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive19HybridViewModelSpecENSt6__ndk110shared_ptrINS0_7PromiseINS5_8optionalINS6_INS3_27HybridViewModelInstanceSpecEEEEEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSH_FT0_DpT1_ERNSF_7RuntimeEPKSG_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395568
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive19HybridViewModelSpecENSt6__ndk110shared_ptrINS0_7PromiseINS5_8optionalINS6_INS3_27HybridViewModelInstanceSpecEEEEEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSH_FT0_DpT1_ERNSF_7RuntimeEPKSG_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395568
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive19HybridViewModelSpecENSt6__ndk110shared_ptrINS0_7PromiseINS5_8optionalINS6_INS3_27HybridViewModelInstanceSpecEEEEEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSH_FT0_DpT1_ERNSF_7RuntimeEPKSG_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395560
       , iVar3 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive19HybridViewModelSpecENSt6__ndk110shared_ptrINS0_7PromiseINS5_8optionalINS6_INS3_27HybridViewModelInstanceSpecEEEEEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSH_FT0_DpT1_ERNSF_7RuntimeEPKSG_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395560
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive19HybridViewModelSpecENSt6__ndk110shared_ptrINS0_7PromiseINS5_8optionalINS6_INS3_27HybridViewModelInstanceSpecEEEEEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSH_FT0_DpT1_ERNSF_7RuntimeEPKSG_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00395568
                         );
    }
    if ((uVar8 & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(lVar4 + ((long)uVar8 >> 1)));
    }
                    /* try { // try from 002cd73c to 002cd743 has its CatchHandler @ 002cd934 */
    (*pcVar9)(&local_110);
                    /* try { // try from 002cd748 to 002cd753 has its CatchHandler @ 002cd91c */
    FUN_002ce204(param_1,param_3,local_110,local_108);
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
                    /* try { // try from 002cd7f4 to 002cd803 has its CatchHandler @ 002cddc8 */
    FUN_002cde80(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar4);
    pJVar6 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002cd810 to 002cd823 has its CatchHandler @ 002cdda8 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 002cd824 to 002cd837 has its CatchHandler @ 002cdd90 */
    FUN_00263450(auStack_f8,&local_110,"` expected ");
                    /* try { // try from 002cd838 to 002cd843 has its CatchHandler @ 002cdd60 */
    std::__ndk1::to_string(0);
                    /* try { // try from 002cd844 to 002cd853 has its CatchHandler @ 002cdd3c */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002cd854 to 002cd867 has its CatchHandler @ 002cdd18 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002cd868 to 002cd873 has its CatchHandler @ 002cdcf4 */
    std::__ndk1::to_string(uVar8);
                    /* try { // try from 002cd874 to 002cd883 has its CatchHandler @ 002cdcd0 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 002cd884 to 002cd897 has its CatchHandler @ 002cdcac */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002cd89c to 002cd8d7 has its CatchHandler @ 002cdc4c */
    facebook::jsi::JSError::JSError(pJVar6,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar6,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002cddf0  FUN_002cddf0 =====

void FUN_002cddf0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395570) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002cde40  FUN_002cde40 =====

undefined * FUN_002cde40(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395578;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002cde80  FUN_002cde80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002cde80(undefined8 *param_1,int param_2,byte *param_3,long param_4)

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
    local_60 = (undefined8 *)operator_new(0x30);
    puVar7 = PTR_typeinfo_name_00395428;
    uStack_68 = _UNK_001d7ea8;
    local_70 = _DAT_001d7ea0;
    *(undefined1 *)((long)local_60 + 0x2a) = 0;
    uVar13 = *(undefined8 *)puVar7;
    uVar15 = *(undefined8 *)(puVar7 + 0x18);
    uVar14 = *(undefined8 *)(puVar7 + 0x10);
    uVar12 = *(undefined8 *)(puVar7 + 0x22);
    uVar10 = *(undefined8 *)(puVar7 + 0x1a);
    local_60[1] = *(undefined8 *)(puVar7 + 8);
    *local_60 = uVar13;
    local_60[3] = uVar15;
    local_60[2] = uVar14;
    *(undefined8 *)((long)local_60 + 0x22) = uVar12;
    *(undefined8 *)((long)local_60 + 0x1a) = uVar10;
                    /* try { // try from 002cdf04 to 002cdf13 has its CatchHandler @ 002ce1a4 */
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
    if (0xffffffffffffffef < uVar1) goto LAB_002ce164;
    if (uVar1 < 0x17) {
      local_98 = 0;
      puVar11 = (undefined8 *)((ulong)&local_a0 | 1);
      local_90 = (undefined8 *)0x0;
      local_a0 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_002ce068;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 002ce050 to 002ce057 has its CatchHandler @ 002ce1b8 */
      puVar11 = (undefined8 *)operator_new(uVar2);
      local_a0 = uVar2 | 1;
      local_98 = uVar1;
      local_90 = puVar11;
LAB_002ce068:
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
                    /* try { // try from 002ce0a8 to 002ce0af has its CatchHandler @ 002ce190 */
    puVar9 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_a0,(ulong)pbVar5);
    local_60 = (undefined8 *)puVar9[2];
    uStack_68 = puVar9[1];
    local_70 = *puVar9;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
                    /* try { // try from 002ce0c8 to 002ce0db has its CatchHandler @ 002ce178 */
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
      if (*(long *)(lVar6 + 0x28) != local_58) goto LAB_002ce200;
                    /* try { // try from 002ce160 to 002ce163 has its CatchHandler @ 002ce1d4 */
      FUN_00260a84();
LAB_002ce164:
      if (*(long *)(lVar6 + 0x28) == local_58) {
                    /* try { // try from 002ce174 to 002ce177 has its CatchHandler @ 002ce1b8 */
        uVar10 = FUN_00260a84();
                    /* catch() { ... } // from try @ 002ce0c8 with catch @ 002ce178 */
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
      goto LAB_002ce200;
    }
    if (uVar1 < 0x17) {
      uStack_68 = 0;
      puVar11 = (undefined8 *)((ulong)&local_70 | 1);
      local_60 = (undefined8 *)0x0;
      local_70 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_002cdfd8;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 002cdfc0 to 002cdfc7 has its CatchHandler @ 002ce1d4 */
      puVar11 = (undefined8 *)operator_new(uVar2);
      local_70 = uVar2 | 1;
      uStack_68 = uVar1;
      local_60 = puVar11;
LAB_002cdfd8:
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
                    /* try { // try from 002ce018 to 002ce01f has its CatchHandler @ 002ce1bc */
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
LAB_002ce200:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ce204  FUN_002ce204 =====

void FUN_002ce204(undefined8 param_1,Runtime *param_2,long param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined ***pppuVar4;
  runtime_error *this;
  undefined1 auStack_b0 [24];
  basic_string abStack_98 [24];
  undefined **local_80;
  long lStack_78;
  long *local_70;
  undefined ***local_60;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(param_3 + 0x20);
  if (iVar1 == 2) {
    FUN_0026aee4(&local_80,param_2,param_3 + 8);
                    /* try { // try from 002ce2e0 to 002ce2ef has its CatchHandler @ 002ce4bc */
    margelo::nitro::CommonGlobals::Promise::rejected(param_2,(Value *)&local_80);
LAB_002ce308:
    facebook::jsi::Value::~Value((Value *)&local_80);
  }
  else {
    if (iVar1 == 1) {
      if (*(char *)(param_3 + 0x18) == '\0') {
        local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      }
      else {
        FUN_002abf6c(&local_80,param_2,*(undefined8 *)(param_3 + 8));
      }
                    /* try { // try from 002ce2f8 to 002ce307 has its CatchHandler @ 002ce4c0 */
      margelo::nitro::CommonGlobals::Promise::resolved(param_2,(Value *)&local_80);
      goto LAB_002ce308;
    }
    if (iVar1 != 0) {
      FUN_00264e5c(&local_80,PTR_typeinfo_name_00395548,1);
      this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002ce3b4 to 002ce3c7 has its CatchHandler @ 002ce464 */
      std::__ndk1::operator+("Promise<",(basic_string *)&local_80);
                    /* try { // try from 002ce3c8 to 002ce3db has its CatchHandler @ 002ce44c */
      FUN_00263450(abStack_98,auStack_b0,"> has invalid state!");
                    /* try { // try from 002ce3e0 to 002ce417 has its CatchHandler @ 002ce418 */
      std::runtime_error::runtime_error(this,abStack_98);
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002ce4e4;
    }
    lStack_78 = param_3;
    if (param_4 == (long *)0x0) {
      local_70 = (long *)0x0;
      local_80 = &PTR_FUN_00384ec0;
      local_60 = &local_80;
    }
    else {
      FUN_00259a00(1,param_4 + 1);
      local_80 = &PTR_FUN_00384ec0;
      local_70 = param_4;
      FUN_00259a00(1,param_4 + 1);
      local_60 = &local_80;
      lVar3 = FUN_00255510(0xffffffffffffffff,param_4 + 1);
      if (lVar3 == 0) {
        (**(code **)(*param_4 + 0x10))(param_4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
                    /* try { // try from 002ce32c to 002ce33f has its CatchHandler @ 002ce484 */
    margelo::nitro::CommonGlobals::Promise::callConstructor(param_2,(function *)&local_80);
    if (local_60 == &local_80) {
      lVar3 = 4;
      pppuVar4 = &local_80;
LAB_002ce360:
      (*(code *)(*pppuVar4)[lVar3])();
    }
    else if (local_60 != (undefined ***)0x0) {
      lVar3 = 5;
      pppuVar4 = local_60;
      goto LAB_002ce360;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_002ce4e4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ce4e8  FUN_002ce4e8 =====

void FUN_002ce4e8(long *param_1)

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


// ===== 002ce574  FUN_002ce574 =====

void FUN_002ce574(long *param_1)

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


// ===== 002ce600  FUN_002ce600 =====

void FUN_002ce600(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00384ec0;
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ce698  FUN_002ce698 =====

void FUN_002ce698(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00384ec0;
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ce724  FUN_002ce724 =====

void FUN_002ce724(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x18);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_00384ec0;
  puVar4[1] = uVar1;
  puVar4[2] = lVar2;
  if (lVar2 != 0) {
    FUN_00259a00(1,lVar2 + 8);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


// ===== 002ce79c  FUN_002ce79c =====

void FUN_002ce79c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00384ec0;
  param_2[1] = uVar1;
  param_2[2] = lVar2;
  if (lVar2 != 0) {
    FUN_00259a00(1,lVar2 + 8);
  }
  if (*(long *)(lVar3 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ce800  FUN_002ce800 =====

void FUN_002ce800(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x10);
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ce88c  FUN_002ce88c =====

void FUN_002ce88c(void *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)((long)param_1 + 0x10);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002ce90c  FUN_002ce90c =====

void FUN_002ce90c(undefined4 *param_1,long param_2,Runtime *param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  Runtime *pRVar4;
  ulong uVar5;
  Runtime **ppRVar6;
  void *pvVar7;
  long *plVar8;
  long lVar9;
  Runtime *pRVar10;
  long lVar11;
  long lVar12;
  void *pvVar13;
  Runtime ***pppRVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  IRuntime *pIVar19;
  ulong uVar20;
  void *pvVar21;
  Runtime *local_148;
  Runtime *local_140;
  undefined8 *local_138;
  Runtime *local_130;
  Runtime *local_128;
  Runtime *local_110 [2];
  Runtime *local_100;
  Runtime *local_f8;
  Runtime *local_f0;
  Runtime *local_e0 [2];
  Runtime *local_d0;
  Runtime *local_c8;
  Runtime *local_c0;
  undefined8 local_b8;
  Runtime **local_b0 [2];
  long local_a0 [4];
  Runtime *local_80 [2];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  pIVar19 = (IRuntime *)*param_5;
  facebook::jsi::Value::asObject(pIVar19);
                    /* try { // try from 002ce958 to 002ce967 has its CatchHandler @ 002cf358 */
  facebook::jsi::Object::asFunction((IRuntime *)&local_d0);
  if (local_d0 != (Runtime *)0x0) {
    (*(code *)**(undefined8 **)local_d0)();
  }
  local_130 = (Runtime *)0x0;
  local_128 = (Runtime *)0x0;
                    /* try { // try from 002ce980 to 002ce98b has its CatchHandler @ 002cf338 */
  margelo::nitro::JSICache::getOrCreateCache(param_3);
                    /* try { // try from 002ce990 to 002ce99b has its CatchHandler @ 002cf328 */
  FUN_0026ce4c(&local_100,local_d0,&local_138);
                    /* try { // try from 002ce99c to 002ce9a7 has its CatchHandler @ 002cf318 */
  FUN_0026d090(&local_130,&local_100);
  if (local_f8 != (Runtime *)0x0) {
    uVar5 = FUN_00255510(0xffffffffffffffff);
    if (uVar5 < 2) {
      if ((*(byte *)((long)local_f8 + 0x10) & 1) == 0) {
        if (local_100 != (Runtime *)0x0) {
          if (*(undefined8 **)local_100 != (undefined8 *)0x0) {
            (**(code **)**(undefined8 **)local_100)();
          }
          operator_delete(local_100);
        }
        local_100 = (Runtime *)0x0;
        *(undefined4 *)((long)local_f8 + 0x10) = 1;
        goto LAB_002cea08;
      }
      lVar11 = *(long *)local_f8;
      pRVar10 = local_f8;
    }
    else {
LAB_002cea08:
      lVar11 = *(long *)local_f8;
      pRVar10 = local_f8;
    }
    if (((lVar11 == 0) && (*(long *)((long)pRVar10 + 8) == 0)) && (pRVar10 != (Runtime *)0x0)) {
      std::__ndk1::mutex::~mutex((mutex *)((long)pRVar10 + 0x14));
      operator_delete(pRVar10);
    }
  }
  std::__ndk1::mutex::unlock();
  if ((local_c8 != (Runtime *)0x0) &&
     (lVar11 = FUN_00255510(0xffffffffffffffff,(long *)((long)local_c8 + 8)), lVar11 == 0)) {
    (**(code **)(*(long *)local_c8 + 0x10))(local_c8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pRVar4 = local_128;
  pRVar10 = local_130;
  local_130 = (Runtime *)0x0;
  local_128 = (Runtime *)0x0;
  local_f8 = pRVar10;
  local_f0 = pRVar4;
  local_100 = param_3;
                    /* try { // try from 002cea88 to 002cea93 has its CatchHandler @ 002cf308 */
  margelo::nitro::Dispatcher::getRuntimeGlobalDispatcher(param_3);
  if (local_140 != (Runtime *)0x0) {
    FUN_00259a00(1,local_140 + 0x10);
  }
  local_c8 = pRVar10;
  local_f8 = (Runtime *)0x0;
  local_f0 = (Runtime *)0x0;
  local_c0 = pRVar4;
  local_d0 = param_3;
  if (local_140 != (Runtime *)0x0) {
    FUN_00259a00(1,local_140 + 0x10);
  }
  local_80[0] = (Runtime *)0x0;
                    /* try { // try from 002ceacc to 002cead3 has its CatchHandler @ 002cf2e4 */
  local_80[0] = (Runtime *)operator_new(0x30);
  *(Runtime **)(local_80[0] + 0x10) = pRVar10;
  *(Runtime **)(local_80[0] + 0x18) = pRVar4;
  *(undefined ***)local_80[0] = &PTR_FUN_00384f30;
  *(Runtime **)(local_80[0] + 8) = param_3;
  local_c8 = (Runtime *)0x0;
  local_c0 = (Runtime *)0x0;
  *(Runtime **)(local_80[0] + 0x20) = local_148;
  *(Runtime **)(local_80[0] + 0x28) = local_140;
  local_b8 = 0;
  local_b0[0] = (Runtime **)0x0;
  if (((local_140 != (Runtime *)0x0) &&
      (std::__ndk1::__shared_weak_count::__release_weak(), local_140 != (Runtime *)0x0)) &&
     (lVar11 = FUN_00255510(0xffffffffffffffff,local_140 + 8), lVar11 == 0)) {
    (**(code **)(*(long *)local_140 + 0x10))(local_140);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (local_f0 != (Runtime *)0x0) {
    uVar5 = FUN_00255510(0xffffffffffffffff);
    pRVar10 = local_f8;
    if (uVar5 < 2) {
      if ((*(byte *)((long)local_f0 + 0x10) & 1) == 0) {
        if (local_f8 != (Runtime *)0x0) {
          if (*(undefined8 **)local_f8 != (undefined8 *)0x0) {
            (**(code **)**(undefined8 **)local_f8)();
          }
          operator_delete(pRVar10);
        }
        local_f8 = (Runtime *)0x0;
        *(undefined4 *)((long)local_f0 + 0x10) = 1;
        goto LAB_002ceb94;
      }
      lVar11 = *(long *)local_f0;
      pRVar10 = local_f0;
    }
    else {
LAB_002ceb94:
      lVar11 = *(long *)local_f0;
      pRVar10 = local_f0;
    }
    local_f0 = pRVar10;
    if (((lVar11 == 0) && (*(long *)((long)pRVar10 + 8) == 0)) && (pRVar10 != (Runtime *)0x0)) {
      std::__ndk1::mutex::~mutex((mutex *)((long)pRVar10 + 0x14));
      operator_delete(pRVar10);
    }
  }
  if (local_128 != (Runtime *)0x0) {
    uVar5 = FUN_00255510(0xffffffffffffffff);
    pRVar10 = local_130;
    if (uVar5 < 2) {
      if ((*(byte *)((long)local_128 + 0x10) & 1) == 0) {
        if (local_130 != (Runtime *)0x0) {
          if (*(undefined8 **)local_130 != (undefined8 *)0x0) {
            (**(code **)**(undefined8 **)local_130)();
          }
          operator_delete(pRVar10);
        }
        local_130 = (Runtime *)0x0;
        *(undefined4 *)((long)local_128 + 0x10) = 1;
        goto LAB_002cec24;
      }
      lVar11 = *(long *)local_128;
      pRVar10 = local_128;
    }
    else {
LAB_002cec24:
      lVar11 = *(long *)local_128;
      pRVar10 = local_128;
    }
    local_128 = pRVar10;
    if (((lVar11 == 0) && (*(long *)((long)pRVar10 + 8) == 0)) && (pRVar10 != (Runtime *)0x0)) {
      std::__ndk1::mutex::~mutex((mutex *)((long)pRVar10 + 0x14));
      operator_delete(pRVar10);
    }
  }
  if (local_138 != (undefined8 *)0x0) {
    (**(code **)*local_138)();
  }
  lVar11 = *(long *)(param_2 + 8);
  if (local_80[0] == (Runtime *)0x0) {
    ppRVar6 = local_e0;
LAB_002cec94:
    *ppRVar6 = (Runtime *)0x0;
  }
  else {
    if (local_80[0] != (Runtime *)local_a0) {
      ppRVar6 = local_80;
      local_e0[0] = local_80[0];
      goto LAB_002cec94;
    }
    local_e0[0] = (Runtime *)&local_100;
                    /* try { // try from 002cecac to 002cecb7 has its CatchHandler @ 002cf2c0 */
    (**(code **)(local_a0[0] + 0x18))(local_a0,&local_100);
  }
  pRVar10 = local_e0[0];
  local_b0[0] = (Runtime **)0x0;
  if (local_e0[0] != (Runtime *)0x0) {
                    /* try { // try from 002cecc4 to 002ceccb has its CatchHandler @ 002cf2cc */
    ppRVar6 = (Runtime **)operator_new(0x40);
    *ppRVar6 = (Runtime *)&PTR_FUN_00385050;
    if (pRVar10 == (Runtime *)&local_100) {
      ppRVar6[6] = (Runtime *)(ppRVar6 + 2);
                    /* try { // try from 002ced00 to 002ced0f has its CatchHandler @ 002cf2bc */
      (**(code **)(local_100 + 0x18))(&local_100);
      local_b0[0] = ppRVar6;
    }
    else {
      ppRVar6[6] = pRVar10;
      local_e0[0] = (Runtime *)0x0;
      local_b0[0] = ppRVar6;
    }
  }
                    /* try { // try from 002ced14 to 002ced1b has its CatchHandler @ 002cf2dc */
  std::__ndk1::mutex::lock();
  if (*(int *)(lVar11 + 0x20) == 1) {
    if (local_b0[0] != (Runtime **)0x0) {
                    /* try { // try from 002ced3c to 002ceddf has its CatchHandler @ 002cf3e8 */
      (**(code **)(*local_b0[0] + 0x30))(local_b0[0],lVar11 + 8);
LAB_002cef18:
      std::__ndk1::mutex::unlock();
      if (local_b0[0] == &local_d0) {
        lVar11 = 4;
        ppRVar6 = &local_d0;
LAB_002cef7c:
        (**(code **)(*ppRVar6 + lVar11 * 8))();
      }
      else if (local_b0[0] != (Runtime **)0x0) {
        lVar11 = 5;
        ppRVar6 = local_b0[0];
        goto LAB_002cef7c;
      }
      if (local_e0[0] == (Runtime *)&local_100) {
        lVar11 = 4;
        pRVar10 = (Runtime *)&local_100;
LAB_002cefac:
        (**(code **)(*(Runtime **)pRVar10 + lVar11 * 8))();
      }
      else if (local_e0[0] != (Runtime *)0x0) {
        lVar11 = 5;
        pRVar10 = local_e0[0];
        goto LAB_002cefac;
      }
      if (local_80[0] == (Runtime *)local_a0) {
        lVar11 = 4;
        pRVar10 = (Runtime *)local_a0;
LAB_002cefdc:
        (**(code **)(*(Runtime **)pRVar10 + lVar11 * 8))();
      }
      else if (local_80[0] != (Runtime *)0x0) {
        lVar11 = 5;
        pRVar10 = local_80[0];
        goto LAB_002cefdc;
      }
      FUN_0026c2bc(local_a0,param_3,pIVar19 + 0x10);
      lVar11 = *(long *)(param_2 + 8);
      if (local_80[0] == (Runtime *)0x0) {
        ppRVar6 = local_110;
LAB_002cf024:
        *ppRVar6 = (Runtime *)0x0;
      }
      else {
        if (local_80[0] != (Runtime *)local_a0) {
          ppRVar6 = local_80;
          local_110[0] = local_80[0];
          goto LAB_002cf024;
        }
        local_110[0] = (Runtime *)&local_130;
                    /* try { // try from 002cf03c to 002cf047 has its CatchHandler @ 002cf2b8 */
        (**(code **)(local_a0[0] + 0x18))(local_a0,&local_130);
      }
      pRVar10 = local_110[0];
      local_b0[0] = (Runtime **)0x0;
      if (local_110[0] != (Runtime *)0x0) {
                    /* try { // try from 002cf054 to 002cf05b has its CatchHandler @ 002cf2c4 */
        ppRVar6 = (Runtime **)operator_new(0x40);
        *ppRVar6 = (Runtime *)&PTR_FUN_00384d40;
        if (pRVar10 == (Runtime *)&local_130) {
          ppRVar6[6] = (Runtime *)(ppRVar6 + 2);
                    /* try { // try from 002cf090 to 002cf09f has its CatchHandler @ 002cf2b4 */
          (**(code **)(local_130 + 0x18))(&local_130);
          local_b0[0] = ppRVar6;
        }
        else {
          ppRVar6[6] = pRVar10;
          local_110[0] = (Runtime *)0x0;
          local_b0[0] = ppRVar6;
        }
      }
                    /* try { // try from 002cf0a4 to 002cf0ab has its CatchHandler @ 002cf2d4 */
      std::__ndk1::mutex::lock();
      if (*(int *)(lVar11 + 0x20) == 2) {
        if (local_b0[0] == (Runtime **)0x0) goto LAB_002cf260;
                    /* try { // try from 002cf0cc to 002cf10f has its CatchHandler @ 002cf37c */
        (**(code **)(*local_b0[0] + 0x30))(local_b0[0],lVar11 + 8);
      }
      else {
        uVar5 = *(ulong *)(lVar11 + 0x48);
        if (uVar5 < *(ulong *)(lVar11 + 0x50)) {
          if (local_b0[0] == (Runtime **)0x0) {
            pppRVar14 = (Runtime ***)(uVar5 + 0x20);
LAB_002cf11c:
            *pppRVar14 = (Runtime **)0x0;
          }
          else {
            if (local_b0[0] != &local_d0) {
              pppRVar14 = local_b0;
              *(Runtime ***)(uVar5 + 0x20) = local_b0[0];
              goto LAB_002cf11c;
            }
            *(ulong *)(uVar5 + 0x20) = uVar5;
                    /* try { // try from 002cf134 to 002cf13b has its CatchHandler @ 002cf2a8 */
            (**(code **)(*local_b0[0] + 0x18))(local_b0[0],uVar5);
          }
          lVar9 = uVar5 + 0x30;
        }
        else {
          lVar9 = FUN_0026c714(lVar11 + 0x40,&local_d0);
        }
        *(long *)(lVar11 + 0x48) = lVar9;
      }
      std::__ndk1::mutex::unlock();
      if (local_b0[0] == &local_d0) {
        lVar11 = 4;
        ppRVar6 = &local_d0;
LAB_002cf174:
        (**(code **)(*ppRVar6 + lVar11 * 8))();
      }
      else if (local_b0[0] != (Runtime **)0x0) {
        lVar11 = 5;
        ppRVar6 = local_b0[0];
        goto LAB_002cf174;
      }
      if (local_110[0] == (Runtime *)&local_130) {
        lVar11 = 4;
        pRVar10 = (Runtime *)&local_130;
LAB_002cf1a4:
        (**(code **)(*(Runtime **)pRVar10 + lVar11 * 8))();
      }
      else if (local_110[0] != (Runtime *)0x0) {
        lVar11 = 5;
        pRVar10 = local_110[0];
        goto LAB_002cf1a4;
      }
      *param_1 = 0;
      if (local_80[0] == (Runtime *)local_a0) {
        lVar11 = 4;
        pRVar10 = (Runtime *)local_a0;
LAB_002cf1d8:
        (**(code **)(*(Runtime **)pRVar10 + lVar11 * 8))();
      }
      else if (local_80[0] != (Runtime *)0x0) {
        lVar11 = 5;
        pRVar10 = local_80[0];
        goto LAB_002cf1d8;
      }
      if (*(long *)(lVar3 + 0x28) == local_70) {
        return;
      }
      goto LAB_002cf4a4;
    }
    if (*(long *)(lVar3 + 0x28) != local_70) goto LAB_002cf4a4;
                    /* try { // try from 002cf25c to 002cf25f has its CatchHandler @ 002cf3e8 */
    FUN_0025cd00();
LAB_002cf260:
    if (*(long *)(lVar3 + 0x28) != local_70) goto LAB_002cf4a4;
                    /* try { // try from 002cf274 to 002cf277 has its CatchHandler @ 002cf37c */
    FUN_0025cd00();
LAB_002cf278:
    if (*(long *)(lVar3 + 0x28) != local_70) goto LAB_002cf4a4;
                    /* try { // try from 002cf28c to 002cf2a7 has its CatchHandler @ 002cf3e8 */
    FUN_002cf538();
  }
  else {
    uVar5 = *(ulong *)(lVar11 + 0x30);
    pppRVar14 = local_b0;
    if (uVar5 < *(ulong *)(lVar11 + 0x38)) {
      if (local_b0[0] == (Runtime **)0x0) {
        pppRVar14 = (Runtime ***)(uVar5 + 0x20);
LAB_002cede8:
        *pppRVar14 = (Runtime **)0x0;
      }
      else {
        if (local_b0[0] != &local_d0) {
          *(Runtime ***)(uVar5 + 0x20) = local_b0[0];
          goto LAB_002cede8;
        }
        *(ulong *)(uVar5 + 0x20) = uVar5;
                    /* try { // try from 002cee3c to 002cee43 has its CatchHandler @ 002cf2b0 */
        (**(code **)(*local_b0[0] + 0x18))(local_b0[0],uVar5);
      }
      lVar9 = uVar5 + 0x30;
LAB_002cef14:
      *(long *)(lVar11 + 0x30) = lVar9;
      goto LAB_002cef18;
    }
    uVar17 = *(ulong *)(lVar11 + 0x28);
    lVar9 = (long)(uVar5 - uVar17) >> 4;
    uVar20 = lVar9 * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar20) goto LAB_002cf278;
    lVar12 = (long)(*(ulong *)(lVar11 + 0x38) - uVar17) >> 4;
    uVar16 = lVar12 * 0x5555555555555556;
    if (uVar16 < uVar20 || uVar16 - uVar20 == 0) {
      uVar16 = uVar20;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar12 * -0x5555555555555555)) {
      uVar16 = 0x555555555555555;
    }
    if (uVar16 == 0) {
      pvVar7 = (void *)0x0;
LAB_002cedf4:
      pvVar21 = (void *)((long)pvVar7 + lVar9 * 0x10);
      if (local_b0[0] == (Runtime **)0x0) {
        pppRVar14 = (Runtime ***)((long)pvVar21 + 0x20);
LAB_002cee24:
        *pppRVar14 = (Runtime **)0x0;
      }
      else {
        if (local_b0[0] != &local_d0) {
          *(Runtime ***)((long)pvVar21 + 0x20) = local_b0[0];
          goto LAB_002cee24;
        }
        *(void **)((long)pvVar21 + 0x20) = pvVar21;
                    /* try { // try from 002cee58 to 002cee63 has its CatchHandler @ 002cf2ac */
        (**(code **)(local_d0 + 0x18))(&local_d0,pvVar21);
        uVar17 = *(ulong *)(lVar11 + 0x28);
        uVar5 = *(ulong *)(lVar11 + 0x30);
      }
      pvVar13 = pvVar21;
      if (uVar5 != uVar17) {
        lVar9 = 0;
        uVar20 = uVar5;
        do {
          lVar12 = uVar5 + lVar9;
          uVar1 = (long)pvVar21 + lVar9;
          lVar15 = *(long *)(lVar12 + -0x10);
          if (lVar15 == 0) {
LAB_002cee84:
            *(undefined8 *)(uVar1 - 0x10) = 0;
          }
          else {
            if (lVar12 + -0x30 != lVar15) {
              *(long *)(uVar1 - 0x10) = lVar15;
              uVar1 = uVar20;
              goto LAB_002cee84;
            }
            *(ulong *)(uVar1 - 0x10) = uVar1 - 0x30;
                    /* try { // try from 002ceed8 to 002ceedb has its CatchHandler @ 002cf378 */
            (**(code **)(**(long **)(lVar12 + -0x10) + 0x18))();
          }
          lVar9 = lVar9 + -0x30;
          uVar20 = uVar20 - 0x30;
        } while (uVar5 + lVar9 != uVar17);
        pvVar13 = (void *)((long)pvVar21 + lVar9);
      }
      lVar9 = (long)pvVar21 + 0x30;
      plVar2 = *(long **)(lVar11 + 0x28);
      plVar18 = *(long **)(lVar11 + 0x30);
      *(void **)(lVar11 + 0x28) = pvVar13;
      *(long *)(lVar11 + 0x30) = lVar9;
      *(void **)(lVar11 + 0x38) = (void *)((long)pvVar7 + uVar16 * 0x30);
joined_r0x002cef04:
      if (plVar18 != plVar2) {
        plVar8 = (long *)plVar18[-2];
        plVar18 = plVar18 + -6;
        if (plVar18 != plVar8) goto code_r0x002cef68;
        lVar12 = 4;
        plVar8 = plVar18;
        goto LAB_002cef44;
      }
      if (plVar2 != (long *)0x0) {
        operator_delete(plVar2);
      }
      goto LAB_002cef14;
    }
    if (uVar16 < 0x555555555555556) {
      pvVar7 = operator_new(uVar16 * 0x30);
      goto LAB_002cedf4;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    FUN_00260a2c();
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 002cf134 with catch @ 002cf2a8 */
    FUN_0025ad9c();
  }
LAB_002cf4a4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x002cef68:
  if (plVar8 != (long *)0x0) {
    lVar12 = 5;
LAB_002cef44:
    (**(code **)(*plVar8 + lVar12 * 8))();
  }
  goto joined_r0x002cef04;
}


// ===== 002cf4a8  FUN_002cf4a8 =====

void FUN_002cf4a8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395538) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002cf4f8  FUN_002cf4f8 =====

undefined * FUN_002cf4f8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395540;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002cf538  FUN_002cf538 =====

void FUN_002cf538(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_00260abc("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002cf570  FUN_002cf570 =====

void FUN_002cf570(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  plVar3 = param_1 + 2;
  plVar2 = (long *)param_1[6];
  *param_1 = &PTR_FUN_00385050;
  if (plVar2 == plVar3) {
    lVar4 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == lVar5) {
        return;
      }
      goto LAB_002cf5fc;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x002cf5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar4 * 8))();
    return;
  }
LAB_002cf5fc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002cf600  FUN_002cf600 =====

void FUN_002cf600(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar3 = param_1 + 2;
  plVar2 = (long *)param_1[6];
  *param_1 = &PTR_FUN_00385050;
  if (plVar2 == plVar3) {
    lVar5 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_002cf65c;
    lVar5 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_002cf65c:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002cf684  FUN_002cf684 =====

undefined8 * FUN_002cf684(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x40);
  plVar3 = *(long **)(param_1 + 0x30);
  *puVar2 = &PTR_FUN_00385050;
  if (plVar3 != (long *)0x0) {
    if (plVar3 == (long *)(param_1 + 0x10)) {
      lVar5 = *plVar3;
      puVar2[6] = puVar2 + 2;
      (**(code **)(lVar5 + 0x18))();
      goto LAB_002cf6fc;
    }
                    /* try { // try from 002cf6e0 to 002cf6fb has its CatchHandler @ 002cf724 */
    plVar3 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
  puVar2[6] = plVar3;
LAB_002cf6fc:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002cf74c  FUN_002cf74c =====

void FUN_002cf74c(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x30);
  *param_2 = &PTR_FUN_00385050;
  if (plVar4 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if (plVar4 == (long *)(param_1 + 0x10)) {
      param_2[6] = param_2 + 2;
      if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x002cf7f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
        return;
      }
      goto LAB_002cf7f8;
    }
    uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
    param_2[6] = uVar2;
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
LAB_002cf7f8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002cf7fc  FUN_002cf7fc =====

void FUN_002cf7fc(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  plVar3 = (long *)(param_1 + 0x10);
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 == plVar3) {
    lVar4 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
        return;
      }
      goto LAB_002cf87c;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x002cf85c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar4 * 8))();
    return;
  }
LAB_002cf87c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002cf880  FUN_002cf880 =====

void FUN_002cf880(void *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)((long)param_1 + 0x10);
  plVar2 = *(long **)((long)param_1 + 0x30);
  if (plVar2 == plVar3) {
    lVar5 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_002cf8d0;
    lVar5 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_002cf8d0:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002cf8f8  FUN_002cf8f8 =====

void FUN_002cf8f8(long param_1,ulong *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong local_40;
  long *local_38;
  char local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = local_40 & 0xffffffffffffff00;
  local_30 = '\0';
  if ((char)param_2[2] != '\0') {
    local_40 = *param_2;
    local_38 = (long *)param_2[1];
    if (local_38 != (long *)0x0) {
      FUN_00259a00(1,local_38 + 1);
    }
    local_30 = '\x01';
  }
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 002cf9c8 to 002cf9cb has its CatchHandler @ 002cf9cc */
      uVar4 = FUN_0025cd00();
                    /* catch() { ... } // from try @ 002cf958 with catch @ 002cf9cc
                       catch() { ... } // from try @ 002cf9c8 with catch @ 002cf9cc */
      FUN_002ac0d4(local_38,local_30);
      if (*(long *)(lVar1 + 0x28) == local_28) {
        FUN_00255d34(uVar4);
      }
    }
  }
  else {
                    /* try { // try from 002cf958 to 002cf95f has its CatchHandler @ 002cf9cc */
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_40);
    plVar2 = local_38;
    if (((local_30 != '\0') && (local_38 != (long *)0x0)) &&
       (lVar3 = FUN_00255510(0xffffffffffffffff,local_38 + 1), lVar3 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002cf9fc  FUN_002cf9fc =====

void FUN_002cf9fc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 0x10;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395528) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002cfa4c  FUN_002cfa4c =====

undefined * FUN_002cfa4c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395530;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002cfa8c  FUN_002cfa8c =====

void FUN_002cfa8c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_0026d198(param_1 + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002cfae0  FUN_002cfae0 =====

void FUN_002cfae0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00384f30;
  if (param_1[5] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_0026d198(param_1 + 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002cfb40  FUN_002cfb40 =====

void FUN_002cfb40(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00384f30;
  if (param_1[5] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0026d198(param_1 + 2);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002cfba8  FUN_002cfba8 =====

undefined8 * FUN_002cfba8(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x18);
  *puVar2 = &PTR_FUN_00384f30;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  puVar2[3] = lVar3;
  if (lVar3 != 0) {
    FUN_00255510(1);
  }
  lVar3 = *(long *)(param_1 + 0x28);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = lVar3;
  if (lVar3 != 0) {
    FUN_00259a00(1,lVar3 + 0x10);
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002cfc44  FUN_002cfc44 =====

void FUN_002cfc44(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00384f30;
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[2] = uVar4;
  param_2[3] = lVar2;
  if (lVar2 != 0) {
    FUN_00255510(1);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[5] = lVar2;
  if (lVar2 != 0) {
    FUN_00259a00(1,lVar2 + 0x10);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002cfcd8  FUN_002cfcd8 =====

void FUN_002cfcd8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x28) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_0026d198(param_1 + 0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002cfd2c  FUN_002cfd2c =====

void FUN_002cfd2c(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)((long)param_1 + 0x28) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0026d198((long)param_1 + 0x10);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002cfd88  FUN_002cfd88 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002cfd88(long param_1,ulong *param_2)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *unaff_x19;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong local_d0;
  long *plStack_c8;
  ulong local_c0;
  long *plStack_b8;
  long *local_b0;
  ulong local_a8;
  long *plStack_a0;
  undefined1 local_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  ulong *local_70;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  cVar1 = (char)param_2[2];
  if (cVar1 == '\0') {
    local_d0 = local_d0 & 0xffffffffffffff00;
    lVar7 = *(long *)(param_1 + 0x28);
joined_r0x002cfdf4:
    if (lVar7 != 0) goto LAB_002cfdf8;
LAB_002cfedc:
    plVar9 = (long *)0x0;
LAB_002cfee0:
                    /* try { // try from 002cfee0 to 002cfee7 has its CatchHandler @ 002d0178 */
    local_80 = (undefined8 *)operator_new(0x80);
    puVar4 = PTR_typeinfo_name_00395500;
    uStack_88 = _UNK_001d7f38;
    local_90 = _DAT_001d7f30;
    *(undefined1 *)((long)local_80 + 0x76) = 0;
    uVar13 = *(undefined8 *)(puVar4 + 0x40);
    uVar15 = *(undefined8 *)(puVar4 + 0x58);
    uVar14 = *(undefined8 *)(puVar4 + 0x50);
    uVar12 = *(undefined8 *)(puVar4 + 0x68);
    uVar11 = *(undefined8 *)(puVar4 + 0x60);
    uVar8 = *(undefined8 *)(puVar4 + 0x6e);
    local_80[9] = *(undefined8 *)(puVar4 + 0x48);
    local_80[8] = uVar13;
    local_80[0xb] = uVar15;
    local_80[10] = uVar14;
    local_80[0xd] = uVar12;
    local_80[0xc] = uVar11;
    uVar12 = *(undefined8 *)(puVar4 + 8);
    uVar11 = *(undefined8 *)puVar4;
    uVar14 = *(undefined8 *)(puVar4 + 0x18);
    uVar13 = *(undefined8 *)(puVar4 + 0x10);
    *(undefined8 *)((long)local_80 + 0x6e) = uVar8;
    local_80[1] = uVar12;
    *local_80 = uVar11;
    local_80[3] = uVar14;
    local_80[2] = uVar13;
    uVar12 = *(undefined8 *)(puVar4 + 0x20);
    uVar11 = *(undefined8 *)(puVar4 + 0x38);
    uVar8 = *(undefined8 *)(puVar4 + 0x30);
    local_80[5] = *(undefined8 *)(puVar4 + 0x28);
    local_80[4] = uVar12;
    local_80[7] = uVar11;
    local_80[6] = uVar8;
                    /* try { // try from 002cff2c to 002cff3b has its CatchHandler @ 002d0160 */
    margelo::nitro::TypeInfo::demangleName((basic_string *)&local_90,true);
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
    if (plVar9 == (long *)0x0) goto LAB_002d0078;
  }
  else {
    local_d0 = *param_2;
    unaff_x19 = (long *)param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    plStack_c8 = unaff_x19;
    if (unaff_x19 == (long *)0x0) {
      lVar7 = *(long *)(param_1 + 0x28);
      goto joined_r0x002cfdf4;
    }
    FUN_00259a00(1,unaff_x19 + 1);
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_002cfedc;
LAB_002cfdf8:
    plVar3 = plStack_c8;
    plVar9 = (long *)std::__ndk1::__shared_weak_count::lock();
    if ((plVar9 == (long *)0x0) || (plVar10 = *(long **)(param_1 + 0x20), plVar10 == (long *)0x0))
    goto LAB_002cfee0;
    plStack_b8 = *(long **)(param_1 + 0x10);
    local_c0 = *(ulong *)(param_1 + 8);
    local_b0 = *(long **)(param_1 + 0x18);
    if (local_b0 != (long *)0x0) {
      FUN_00255510(1);
    }
    local_a8 = local_a8 & 0xffffffffffffff00;
    local_98 = cVar1 != '\0';
    if ((bool)local_98) {
      plStack_c8 = (long *)0x0;
      plStack_a0 = plVar3;
      local_a8 = local_d0;
    }
    local_70 = (ulong *)0x0;
                    /* try { // try from 002cfe4c to 002cfe53 has its CatchHandler @ 002d0150 */
    local_70 = (ulong *)operator_new(0x38);
    plVar3 = plStack_a0;
    uVar6 = local_a8;
    *local_70 = (ulong)&PTR_FUN_00384fc0;
    local_70[2] = (ulong)plStack_b8;
    local_70[1] = local_c0;
    local_70[3] = (ulong)local_b0;
    *(undefined8 *)((ulong)&local_c0 | 8) = 0;
    ((undefined8 *)((ulong)&local_c0 | 8))[1] = 0;
    *(undefined1 *)(local_70 + 4) = 0;
    *(undefined1 *)(local_70 + 6) = 0;
    if (cVar1 != '\0') {
      local_a8 = 0;
      plStack_a0 = (long *)0x0;
      *(undefined1 *)(local_70 + 6) = 1;
      local_70[5] = (ulong)plVar3;
      local_70[4] = uVar6;
    }
                    /* try { // try from 002cfea8 to 002cfeb7 has its CatchHandler @ 002d0118 */
    (**(code **)(*plVar10 + 0x18))(plVar10,&local_90);
    if (local_70 == &local_90) {
      lVar7 = 4;
      puVar5 = &local_90;
LAB_002cff7c:
      (**(code **)(*puVar5 + lVar7 * 8))();
    }
    else if (local_70 != (ulong *)0x0) {
      lVar7 = 5;
      puVar5 = local_70;
      goto LAB_002cff7c;
    }
    plVar3 = plStack_a0;
    if (((cVar1 != '\0') && (plStack_a0 != (long *)0x0)) &&
       (lVar7 = FUN_00255510(0xffffffffffffffff,plStack_a0 + 1), lVar7 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (local_b0 != (long *)0x0) {
      uVar6 = FUN_00255510(0xffffffffffffffff);
      plVar3 = plStack_b8;
      if (uVar6 < 2) {
        if ((*(byte *)(local_b0 + 2) & 1) == 0) {
          if (plStack_b8 != (long *)0x0) {
            if ((undefined8 *)*plStack_b8 != (undefined8 *)0x0) {
              (*(code *)**(undefined8 **)*plStack_b8)();
            }
            operator_delete(plVar3);
          }
          plStack_b8 = (long *)0x0;
          *(undefined4 *)(local_b0 + 2) = 1;
          goto LAB_002d001c;
        }
        lVar7 = *local_b0;
        plVar3 = local_b0;
      }
      else {
LAB_002d001c:
        lVar7 = *local_b0;
        plVar3 = local_b0;
      }
      local_b0 = plVar3;
      if ((lVar7 == 0) && (plVar3[1] == 0)) {
        if (plVar3 != (long *)0x0) {
          std::__ndk1::mutex::~mutex((mutex *)((long)plVar3 + 0x14));
          operator_delete(plVar3);
        }
        local_b0 = (long *)0x0;
      }
    }
  }
  lVar7 = FUN_00255510(0xffffffffffffffff,plVar9 + 1);
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
LAB_002d0078:
  if (cVar1 != '\0') {
    if ((plStack_c8 != (long *)0x0) &&
       (lVar7 = FUN_00255510(0xffffffffffffffff,plStack_c8 + 1), lVar7 == 0)) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (((cVar1 != '\0') && (unaff_x19 != (long *)0x0)) &&
       (lVar7 = FUN_00255510(0xffffffffffffffff,unaff_x19 + 1), lVar7 == 0)) {
      (**(code **)(*unaff_x19 + 0x10))(unaff_x19);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002d01b8  FUN_002d01b8 =====

void FUN_002d01b8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395500) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002d0208  FUN_002d0208 =====

undefined * FUN_002d0208(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395508;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002d0248  FUN_002d0248 =====

void FUN_002d0248(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*(char *)(param_1 + 0x28) != '\0') &&
      (plVar4 = *(long **)(param_1 + 0x20), plVar4 != (long *)0x0)) &&
     (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    FUN_0026d198(param_1 + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002d02d0  FUN_002d02d0 =====

void FUN_002d02d0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00384fc0;
  if (((*(char *)(param_1 + 6) != '\0') && (plVar4 = (long *)param_1[5], plVar4 != (long *)0x0)) &&
     (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    FUN_0026d198(param_1 + 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002d0364  FUN_002d0364 =====

void FUN_002d0364(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00384fc0;
  if (((*(char *)(param_1 + 6) != '\0') && (plVar4 = (long *)param_1[5], plVar4 != (long *)0x0)) &&
     (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0026d198(param_1 + 2);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002d0400  FUN_002d0400 =====

undefined8 * FUN_002d0400(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined8 *)operator_new(0x38);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x18);
  *puVar3 = &PTR_FUN_00384fc0;
  puVar3[2] = uVar7;
  puVar3[1] = uVar6;
  puVar3[3] = lVar4;
  if (lVar4 != 0) {
    FUN_00255510(1);
  }
  cVar1 = *(char *)(param_1 + 0x30);
  *(undefined1 *)(puVar3 + 4) = 0;
  *(undefined1 *)(puVar3 + 6) = 0;
  if (cVar1 != '\0') {
    lVar4 = *(long *)(param_1 + 0x28);
    puVar3[4] = *(undefined8 *)(param_1 + 0x20);
    puVar3[5] = lVar4;
    if (lVar4 != 0) {
      FUN_00259a00(1,lVar4 + 8);
    }
    *(undefined1 *)(puVar3 + 6) = 1;
  }
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002d04b4  FUN_002d04b4 =====

void FUN_002d04b4(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00384fc0;
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[2] = uVar4;
  param_2[3] = lVar2;
  if (lVar2 != 0) {
    FUN_00255510(1);
  }
  *(undefined1 *)(param_2 + 4) = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  if (*(char *)(param_1 + 0x30) != '\0') {
    lVar2 = *(long *)(param_1 + 0x28);
    param_2[4] = *(undefined8 *)(param_1 + 0x20);
    param_2[5] = lVar2;
    if (lVar2 != 0) {
      FUN_00259a00(1,lVar2 + 8);
    }
    *(undefined1 *)(param_2 + 6) = 1;
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002d0560  FUN_002d0560 =====

void FUN_002d0560(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*(char *)(param_1 + 0x30) != '\0') &&
      (plVar4 = *(long **)(param_1 + 0x28), plVar4 != (long *)0x0)) &&
     (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    FUN_0026d198(param_1 + 0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002d05e8  FUN_002d05e8 =====

void FUN_002d05e8(void *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*(char *)((long)param_1 + 0x30) != '\0') &&
      (plVar4 = *(long **)((long)param_1 + 0x28), plVar4 != (long *)0x0)) &&
     (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0026d198((long)param_1 + 0x10);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002d0678  FUN_002d0678 =====

void FUN_002d0678(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  runtime_error *this;
  long lVar5;
  ulong local_b0;
  long *plStack_a8;
  undefined4 local_a0 [4];
  Value aVStack_90 [24];
  undefined4 local_78 [6];
  Value aVStack_60 [24];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  cVar3 = *(char *)(param_1 + 0x30);
  local_b0 = local_b0 & 0xffffffffffffff00;
  if (cVar3 == '\0') {
    lVar5 = *(long *)(param_1 + 0x10);
  }
  else {
    plStack_a8 = *(long **)(param_1 + 0x28);
    local_b0 = *(ulong *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    lVar5 = *(long *)(param_1 + 0x10);
  }
  if ((lVar5 == 0) || ((*(byte *)(*(long *)(param_1 + 0x18) + 0x10) & 1) != 0)) {
                    /* try { // try from 002d07b0 to 002d07c3 has its CatchHandler @ 002d08c0 */
    FUN_00264e5c(local_78,PTR_typeinfo_name_00395510,1);
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002d07d0 to 002d07e3 has its CatchHandler @ 002d08a0 */
    std::__ndk1::operator+("Cannot call ",(basic_string *)local_78);
                    /* try { // try from 002d07e4 to 002d07f7 has its CatchHandler @ 002d0888 */
    FUN_00263450(aVStack_60,aVStack_90," - the underlying `jsi::Function` has already been deleted!"
                );
                    /* try { // try from 002d07fc to 002d0833 has its CatchHandler @ 002d0854 */
    std::runtime_error::runtime_error(this,(basic_string *)aVStack_60);
    if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
  }
  else {
    plVar1 = *(long **)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    if (cVar3 == '\0') {
      local_a0[0] = 0;
    }
    else {
                    /* try { // try from 002d06ec to 002d06f7 has its CatchHandler @ 002d08c0 */
      FUN_002abf6c(local_a0,plVar1,local_b0);
    }
    facebook::jsi::Value::Value(aVStack_60,(Value *)local_a0);
    local_78[0] = 0;
                    /* try { // try from 002d0718 to 002d0733 has its CatchHandler @ 002d0834 */
    (**(code **)(*plVar1 + 0x280))(aVStack_90,plVar1,uVar2,local_78,aVStack_60,1);
    facebook::jsi::Value::~Value((Value *)local_78);
    facebook::jsi::Value::~Value(aVStack_60);
    facebook::jsi::Value::~Value((Value *)local_a0);
    facebook::jsi::Value::~Value(aVStack_90);
    if (((cVar3 != '\0') && (plStack_a8 != (long *)0x0)) &&
       (lVar5 = FUN_00255510(0xffffffffffffffff,plStack_a8 + 1), lVar5 == 0)) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar4 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002d08ec  FUN_002d08ec =====

void FUN_002d08ec(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395518) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002d093c  FUN_002d093c =====

undefined * FUN_002d093c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395520;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002d097c  FUN_002d097c =====

void FUN_002d097c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00381110;
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


// ===== 002d09e8  FUN_002d09e8 =====

void FUN_002d09e8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00381110;
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


// ===== 002d0a50  FUN_002d0a50 =====

undefined8 * FUN_002d0a50(long param_1)

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
  *puVar4 = &PTR_FUN_00381110;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002d0ab0 to 002d0ab3 has its CatchHandler @ 002d0aec */
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


// ===== 002d0b14  FUN_002d0b14 =====

void FUN_002d0b14(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00381110;
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


// ===== 002d0bac  FUN_002d0bac =====

void FUN_002d0bac(long param_1)

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


// ===== 002d0c0c  FUN_002d0c0c =====

void FUN_002d0c0c(void *param_1)

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


// ===== 002d0c68  FUN_002d0c68 =====

void FUN_002d0c68(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
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
                    /* try { // try from 002d0cc8 to 002d0cd7 has its CatchHandler @ 002d1318 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((CONCAT71(uStack_7f,local_80) == 0) ||
     (lVar5 = __dynamic_cast(CONCAT71(uStack_7f,local_80),PTR_typeinfo_00394860,
                             PTR_typeinfo_00394b28,0xffffffffffffffff), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x002d0d50;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar8 = (long *)0x0;
      goto joined_r0x002d0d50;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar8 = plStack_78;
  }
  lVar6 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002d0d50:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar9 == 1) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_003954f8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_defaultValue_003954f8), puVar3 = PTR_defaultValue_003954f0,
       iVar4 != 0)) {
      *(undefined4 *)PTR_defaultValue_003954f0 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_003954f8);
    }
    plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
    if ((uVar9 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *plVar1);
    }
                    /* try { // try from 002d0d8c to 002d0d9b has its CatchHandler @ 002d1024 */
    facebook::jsi::Value::asString(pIVar10);
                    /* try { // try from 002d0da4 to 002d0db3 has its CatchHandler @ 002d1000 */
    (**(code **)(*param_3 + 0x120))(&local_80,param_3,local_140);
    if (local_140[0] != (undefined8 *)0x0) {
      (**(code **)*local_140[0])();
    }
                    /* try { // try from 002d0dc8 to 002d0dd7 has its CatchHandler @ 002d0fe4 */
    (*pcVar11)(&local_128,plVar1,&local_80);
    if (((byte)local_80 & 1) != 0) {
      operator_delete(local_70);
    }
                    /* try { // try from 002d0dec to 002d0df7 has its CatchHandler @ 002d0fcc */
    FUN_002ce204(param_1,param_3,local_128,local_120);
    if ((local_120 != (long *)0x0) &&
       (lVar5 = FUN_00255510(0xffffffffffffffff,local_120 + 1), lVar5 == 0)) {
      (**(code **)(*local_120 + 0x10))(local_120);
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
                    /* try { // try from 002d0e98 to 002d0ea7 has its CatchHandler @ 002d14b8 */
    FUN_002cde80(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002d0eb4 to 002d0ec7 has its CatchHandler @ 002d1498 */
    std::__ndk1::operator+("`",&local_80);
                    /* try { // try from 002d0ec8 to 002d0edb has its CatchHandler @ 002d1480 */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002d0edc to 002d0ee7 has its CatchHandler @ 002d1450 */
    std::__ndk1::to_string(1);
                    /* try { // try from 002d0ee8 to 002d0ef7 has its CatchHandler @ 002d142c */
    FUN_00264adc(auStack_e0,auStack_f8,&local_128);
                    /* try { // try from 002d0ef8 to 002d0f0b has its CatchHandler @ 002d1408 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002d0f0c to 002d0f17 has its CatchHandler @ 002d13e4 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 002d0f18 to 002d0f27 has its CatchHandler @ 002d13c0 */
    FUN_00264adc(auStack_b0,auStack_c8,local_140);
                    /* try { // try from 002d0f28 to 002d0f3b has its CatchHandler @ 002d1398 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002d0f40 to 002d0f7b has its CatchHandler @ 002d1338 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002d14e0  FUN_002d14e0 =====

void FUN_002d14e0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00395550) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002d1530  FUN_002d1530 =====

undefined * FUN_002d1530(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00395558;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002d1570  FUN_002d1570 =====

void FUN_002d1570(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00381090;
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


// ===== 002d15dc  FUN_002d15dc =====

void FUN_002d15dc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00381090;
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


// ===== 002d1644  FUN_002d1644 =====

undefined8 * FUN_002d1644(long param_1)

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
  *puVar4 = &PTR_FUN_00381090;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002d16a4 to 002d16a7 has its CatchHandler @ 002d16e0 */
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


// ===== 002d1708  FUN_002d1708 =====

void FUN_002d1708(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00381090;
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


// ===== 002d17a0  FUN_002d17a0 =====

void FUN_002d17a0(long param_1)

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


// ===== 002d1800  FUN_002d1800 =====

void FUN_002d1800(void *param_1)

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


// ===== 002d185c  FUN_002d185c =====

void FUN_002d185c(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 ulong *param_6)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
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
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar9 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002d18b8 to 002d18c7 has its CatchHandler @ 002d1e84 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  plVar3 = local_78;
  if ((local_80 == 0) ||
     (lVar5 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00394b28,0xffffffffffffffff
                            ), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plVar3 == (long *)0x0) goto joined_r0x002d1940;
  }
  else {
    if (plVar3 == (long *)0x0) {
      plVar8 = (long *)0x0;
      goto joined_r0x002d1940;
    }
    FUN_00259a00(1,plVar3 + 1);
    plVar8 = plVar3;
  }
  lVar6 = FUN_00255510(0xffffffffffffffff,plVar3 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002d1940:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar9 == 0) {
    pcVar10 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive19HybridViewModelSpecENSt6__ndk18optionalINS5_10shared_ptrINS3_27HybridViewModelInstanceSpecEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003954d8
         & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive19HybridViewModelSpecENSt6__ndk18optionalINS5_10shared_ptrINS3_27HybridViewModelInstanceSpecEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003954d8
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive19HybridViewModelSpecENSt6__ndk18optionalINS5_10shared_ptrINS3_27HybridViewModelInstanceSpecEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003954d0
       , iVar4 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive19HybridViewModelSpecENSt6__ndk18optionalINS5_10shared_ptrINS3_27HybridViewModelInstanceSpecEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003954d0
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive19HybridViewModelSpecENSt6__ndk18optionalINS5_10shared_ptrINS3_27HybridViewModelInstanceSpecEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSE_FT0_DpT1_ERNSC_7RuntimeEPKSD_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003954d8
                         );
    }
    if ((uVar9 & 1) != 0) {
      pcVar10 = *(code **)(pcVar10 + *(long *)(lVar5 + ((long)uVar9 >> 1)));
    }
                    /* try { // try from 002d1978 to 002d197f has its CatchHandler @ 002d1b8c */
    (*pcVar10)(&local_80);
    if (local_70 == '\0') {
      *param_1 = 0;
    }
    else {
                    /* try { // try from 002d198c to 002d1997 has its CatchHandler @ 002d1b70 */
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
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 002d1a48 to 002d1a57 has its CatchHandler @ 002d2020 */
    FUN_002cde80(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002d1a64 to 002d1a77 has its CatchHandler @ 002d2000 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 002d1a78 to 002d1a8b has its CatchHandler @ 002d1fe8 */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002d1a8c to 002d1a97 has its CatchHandler @ 002d1fb8 */
    std::__ndk1::to_string(0);
                    /* try { // try from 002d1a98 to 002d1aa7 has its CatchHandler @ 002d1f94 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002d1aa8 to 002d1abb has its CatchHandler @ 002d1f70 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002d1abc to 002d1ac7 has its CatchHandler @ 002d1f4c */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 002d1ac8 to 002d1ad7 has its CatchHandler @ 002d1f28 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 002d1ad8 to 002d1aeb has its CatchHandler @ 002d1f04 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002d1af0 to 002d1b2b has its CatchHandler @ 002d1ea4 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002d2048  FUN_002d2048 =====

void FUN_002d2048(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003954e0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002d2098  FUN_002d2098 =====

undefined * FUN_002d2098(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003954e8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002d20d8  FUN_002d20d8 =====

void FUN_002d20d8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00381010;
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


// ===== 002d2144  FUN_002d2144 =====

void FUN_002d2144(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00381010;
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


// ===== 002d21ac  FUN_002d21ac =====

undefined8 * FUN_002d21ac(long param_1)

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
  *puVar4 = &PTR_FUN_00381010;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002d220c to 002d220f has its CatchHandler @ 002d2248 */
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


// ===== 002d2270  FUN_002d2270 =====

void FUN_002d2270(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00381010;
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


// ===== 002d2308  FUN_002d2308 =====

void FUN_002d2308(long param_1)

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


// ===== 002d2368  FUN_002d2368 =====

void FUN_002d2368(void *param_1)

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


// ===== 002d23c4  FUN_002d23c4 =====

void FUN_002d23c4(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
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
  undefined8 *local_140 [3];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [2];
  void *local_88;
  long local_80;
  long *local_78;
  char local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pIVar10 = (IRuntime *)*param_5;
  uVar9 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 002d2424 to 002d2433 has its CatchHandler @ 002d2a90 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  plVar1 = local_78;
  if ((local_80 == 0) ||
     (lVar5 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00394b28,0xffffffffffffffff
                            ), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plVar1 == (long *)0x0) goto joined_r0x002d24ac;
  }
  else {
    if (plVar1 == (long *)0x0) {
      plVar8 = (long *)0x0;
      goto joined_r0x002d24ac;
    }
    FUN_00259a00(1,plVar1 + 1);
    plVar8 = plVar1;
  }
  lVar6 = FUN_00255510(0xffffffffffffffff,plVar1 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002d24ac:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar9 == 1) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_003954b8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_defaultValue_003954b8), puVar3 = PTR_defaultValue_003954b0,
       iVar4 != 0)) {
      *(undefined4 *)PTR_defaultValue_003954b0 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_003954b8);
    }
    plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
    if ((uVar9 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *plVar1);
    }
                    /* try { // try from 002d24e8 to 002d24f7 has its CatchHandler @ 002d279c */
    facebook::jsi::Value::asString(pIVar10);
                    /* try { // try from 002d2500 to 002d250f has its CatchHandler @ 002d2778 */
    (**(code **)(*param_3 + 0x120))(local_98,param_3,local_140);
    if (local_140[0] != (undefined8 *)0x0) {
      (**(code **)*local_140[0])();
    }
                    /* try { // try from 002d2524 to 002d2533 has its CatchHandler @ 002d275c */
    (*pcVar11)(&local_80,plVar1,local_98);
    if (((ulong)local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
    if (local_70 == '\0') {
      *param_1 = 0;
    }
    else {
                    /* try { // try from 002d2550 to 002d255b has its CatchHandler @ 002d2740 */
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
                    /* try { // try from 002d260c to 002d261b has its CatchHandler @ 002d2c30 */
    FUN_002cde80(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002d2628 to 002d263b has its CatchHandler @ 002d2c10 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 002d263c to 002d264f has its CatchHandler @ 002d2bf8 */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 002d2650 to 002d265b has its CatchHandler @ 002d2bc8 */
    std::__ndk1::to_string(1);
                    /* try { // try from 002d265c to 002d266b has its CatchHandler @ 002d2ba4 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 002d266c to 002d267f has its CatchHandler @ 002d2b80 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 002d2680 to 002d268b has its CatchHandler @ 002d2b5c */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 002d268c to 002d269b has its CatchHandler @ 002d2b38 */
    FUN_00264adc(auStack_b0,auStack_c8,local_140);
                    /* try { // try from 002d269c to 002d26af has its CatchHandler @ 002d2b10 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 002d26b4 to 002d26ef has its CatchHandler @ 002d2ab0 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002d2c58  FUN_002d2c58 =====

void FUN_002d2c58(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003954c0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002d2ca8  FUN_002d2ca8 =====

undefined * FUN_002d2ca8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003954c8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002d2ce8  FUN_002d2ce8 =====

void FUN_002d2ce8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00380f90;
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


// ===== 002d2d54  FUN_002d2d54 =====

void FUN_002d2d54(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00380f90;
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


// ===== 002d2dbc  FUN_002d2dbc =====

undefined8 * FUN_002d2dbc(long param_1)

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
  *puVar4 = &PTR_FUN_00380f90;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 002d2e1c to 002d2e1f has its CatchHandler @ 002d2e58 */
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


