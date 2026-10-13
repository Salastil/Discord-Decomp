// ===== 001373ec  FUN_001373ec =====

void FUN_001373ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  char acStack_228 [512];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00137658(acStack_228,param_2,param_3,"Could not find class %s.",PTR_kBaseName_0013dfe0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    facebook::jni::throwNewJavaException("java/lang/ClassCastException",acStack_228);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00137444  FUN_00137444 =====

void FUN_00137444(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  _jobject *p_Var4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  _jmethodID *p_Var8;
  long local_40;
  long local_38;
  
  puVar2 = PTR_method_0013dfe8;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_method_0013dff0 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_method_0013dff0), iVar3 != 0)) {
                    /* try { // try from 00137500 to 0013750f has its CatchHandler @ 0013754c */
    facebook::jni::findClassLocal("java/lang/Object");
                    /* try { // try from 00137510 to 0013751f has its CatchHandler @ 0013753c */
    uVar7 = facebook::jni::JClass::getMethod<_jstring*()>((JClass *)&local_40,"toString");
    *(undefined8 *)puVar2 = uVar7;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_40);
    __cxa_guard_release(PTR_method_0013dff0);
  }
  p_Var8 = (_jmethodID *)*param_2;
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::CallObjectMethod(p_Var4,p_Var8,*(undefined8 *)puVar2);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_40 = lVar5;
                    /* try { // try from 001374a4 to 001374af has its CatchHandler @ 00137560 */
  facebook::jni::JString::toStdString();
  lVar5 = local_40;
  if (local_40 != 0) {
                    /* try { // try from 001374b8 to 001374cb has its CatchHandler @ 00137588 */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,lVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013758c  FUN_0013758c =====

void FUN_0013758c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  char acStack_228 [512];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00137658(acStack_228,param_2,param_3,"Tried to cast from %s to %s.",param_1,
               PTR_kBaseName_0013dfe0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    facebook::jni::throwNewJavaException("java/lang/ClassCastException",acStack_228);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001375e8  facebook::jni::base_owned_ref<_jclass*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

/* facebook::jni::base_owned_ref<_jclass*,
   facebook::jni::LocalReferenceAllocator>::~base_owned_ref() */

void __thiscall
facebook::jni::base_owned_ref<_jclass*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
          (base_owned_ref<_jclass*,facebook::jni::LocalReferenceAllocator> *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)this;
  if (lVar4 != 0) {
                    /* try { // try from 00137614 to 00137627 has its CatchHandler @ 00137654 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar4);
  }
  *(undefined8 *)this = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00137658  FUN_00137658 =====

void FUN_00137658(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  ppuStack_68 = &local_70;
  puStack_60 = &local_90;
  uStack_58 = 0xffffff80ffffffe0;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  local_70 = (undefined1 *)register0x00000008;
  iVar2 = vsnprintf(param_1,0x200,param_4,&local_70);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


// ===== 001376f0  facebook::jni::JClass::getMethod<_jstring*()> =====

/* facebook::jni::JMethod<_jstring* ()> facebook::jni::JClass::getMethod<_jstring* ()>(char const*)
   const */

long __thiscall facebook::jni::JClass::getMethod<_jstring*()>(JClass *this,char *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*(undefined8 *)this,param_1,PTR_kDescriptor_0013dff8);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00137774  facebook::jni::base_owned_ref<_jstring*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

/* facebook::jni::base_owned_ref<_jstring*,
   facebook::jni::LocalReferenceAllocator>::~base_owned_ref() */

void __thiscall
facebook::jni::base_owned_ref<_jstring*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
          (base_owned_ref<_jstring*,facebook::jni::LocalReferenceAllocator> *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)this;
  if (lVar4 != 0) {
                    /* try { // try from 001377a0 to 001377b3 has its CatchHandler @ 001377e0 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar4);
  }
  *(undefined8 *)this = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001377e4  margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::CxxPart::registerNatives =====

/* margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::CxxPart::registerNatives()
    */

void margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::CxxPart::
     registerNatives(void)

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
  puStack_58 = PTR_kDescriptor_0013cef8;
  local_60 = PTR_s_initHybrid_0013cef0;
  local_50 = PTR_call_0013cf00;
  pcVar9 = (char *)operator_new(0x60);
  uVar7 = s_Lcom_margelo_nitro_playageranged_00113bfb._73_8_;
  uVar6 = s_Lcom_margelo_nitro_playageranged_00113bfb._65_8_;
  uVar5 = s_Lcom_margelo_nitro_playageranged_00113bfb._57_8_;
  uVar4 = s_Lcom_margelo_nitro_playageranged_00113bfb._49_8_;
  uVar3 = s_Lcom_margelo_nitro_playageranged_00113bfb._41_8_;
  uVar2 = s_Lcom_margelo_nitro_playageranged_00113bfb._33_8_;
  pcVar9[0x53] = '\0';
  pcVar9[0x4f] = 'P';
  pcVar9[0x50] = 'a';
  pcVar9[0x51] = 'r';
  pcVar9[0x52] = 't';
  *(undefined8 *)(pcVar9 + 0x28) = uVar3;
  *(undefined8 *)(pcVar9 + 0x20) = uVar2;
  *(undefined8 *)(pcVar9 + 0x38) = uVar5;
  *(undefined8 *)(pcVar9 + 0x30) = uVar4;
  uVar5 = s_Lcom_margelo_nitro_playageranged_00113bfb._25_8_;
  uVar4 = s_Lcom_margelo_nitro_playageranged_00113bfb._17_8_;
  uVar3 = s_Lcom_margelo_nitro_playageranged_00113bfb._9_8_;
  uVar2 = s_Lcom_margelo_nitro_playageranged_00113bfb._1_8_;
  *(undefined8 *)(pcVar9 + 0x48) = uVar7;
  *(undefined8 *)(pcVar9 + 0x40) = uVar6;
  *(undefined8 *)(pcVar9 + 8) = uVar3;
  *(undefined8 *)pcVar9 = uVar2;
  *(undefined8 *)(pcVar9 + 0x18) = uVar5;
  *(undefined8 *)(pcVar9 + 0x10) = uVar4;
                    /* try { // try from 00137858 to 0013785f has its CatchHandler @ 001378d0 */
  facebook::jni::findClassLocal(pcVar9);
  operator_delete(pcVar9);
                    /* try { // try from 00137868 to 0013788f has its CatchHandler @ 001378e4 */
  plVar10 = (long *)facebook::jni::Environment::current();
  iVar8 = (**(code **)(*plVar10 + 0x6b8))(plVar10,local_40,&local_60,1);
  facebook::jni::throwCppExceptionIf(iVar8 != 0);
  if (local_40 != 0) {
                    /* try { // try from 00137898 to 001378ab has its CatchHandler @ 001378e0 */
    plVar10 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar10 + 0xb8))(plVar10,local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013790c  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*>),&margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   (*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, void>::_javaobject*>),
   &margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::CxxPart::initHybrid,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, void>::_javaobject*,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>>::call(_JNIEnv*, _jobject*) */

undefined8
facebook::jni::detail::
FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*>),&margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>
::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  JniEnvCacher aJStack_48 [24];
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_48,param_1);
                    /* try { // try from 00137938 to 00137943 has its CatchHandler @ 00137974 */
  FUN_001301e0(&local_30,param_2);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001379c0  margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::getPlayAgeRangeDeclaration =====

/* virtual thunk to
   margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::getPlayAgeRangeDeclaration()
    */

void __thiscall
margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::
getPlayAgeRangeDeclaration(JHybridPlayAgeRangeDeclarationSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getPlayAgeRangeDeclaration();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00137a04  margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::requestDeclaredAgeRange =====

/* virtual thunk to
   margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::requestDeclaredAgeRange(double,
   std::__ndk1::optional<double>, std::__ndk1::optional<double>) */

void __thiscall
margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::requestDeclaredAgeRange
          (JHybridPlayAgeRangeDeclarationSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    requestDeclaredAgeRange(this + *(long *)(*(long *)this + -0x38));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00137a48  FUN_00137a48 =====

void FUN_00137a48(long param_1)

{
  FUN_00126004(*(undefined8 *)(param_1 + 0x260));
  return;
}


// ===== 00137a50  FUN_00137a50 =====

void FUN_00137a50(void)

{
  (*(code *)PTR_0013e088)();
  return;
}


// ===== 00137a70  <EXTERNAL>::__cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_0013e090)();
  return;
}


// ===== 00137a80  <EXTERNAL>::__cxa_atexit =====

void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_0013e098)();
  return;
}


// ===== 00137a90  <EXTERNAL>::__register_atfork =====

void __register_atfork(void)

{
  (*(code *)PTR___register_atfork_0013e0a0)();
  return;
}


// ===== 00137aa0  margelo::nitro::playagerangedeclaration::registerAllNatives =====

void margelo::nitro::playagerangedeclaration::registerAllNatives(void)

{
  (*(code *)PTR_registerAllNatives_0013e0a8)();
  return;
}


// ===== 00137ab0  _JNIEnv::NewObject =====

void _JNIEnv::NewObject(_jclass *param_1,_jmethodID *param_2,...)

{
  (*(code *)PTR_NewObject_0013e0b0)();
  return;
}


// ===== 00137ac0  <EXTERNAL>::__cxa_guard_acquire =====

void __cxa_guard_acquire(void)

{
  (*(code *)PTR___cxa_guard_acquire_0013e0b8)();
  return;
}


// ===== 00137ad0  <EXTERNAL>::__cxa_guard_release =====

void __cxa_guard_release(void)

{
  (*(code *)PTR___cxa_guard_release_0013e0c0)();
  return;
}


// ===== 00137ae0  <EXTERNAL>::facebook::jni::initialize =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::initialize(_JavaVM *param_1,function *param_2)

{
  (*(code *)PTR_initialize_0013e0c8)();
  return;
}


// ===== 00137af0  margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::CxxPart::registerNatives =====

void margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::CxxPart::
     registerNatives(void)

{
  (*(code *)PTR_registerNatives_0013e0d0)();
  return;
}


// ===== 00137b00  <EXTERNAL>::margelo::nitro::HybridObjectRegistry::registerHybridObjectConstructor =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::HybridObjectRegistry::registerHybridObjectConstructor
               (basic_string *param_1,function *param_2)

{
  (*(code *)PTR_registerHybridObjectConstructor_0013e0d8)();
  return;
}


// ===== 00137b10  <EXTERNAL>::operator.new =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_0013e0e0)();
  return pvVar1;
}


// ===== 00137b20  <EXTERNAL>::__cxa_begin_catch =====

void __cxa_begin_catch(void)

{
  (*(code *)PTR___cxa_begin_catch_0013e0e8)();
  return;
}


// ===== 00137b30  <EXTERNAL>::std::terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
  (*(code *)PTR_terminate_0013e0f0)();
  return;
}


// ===== 00137b40  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0013e0f8)();
  return;
}


// ===== 00137b50  <EXTERNAL>::std::__ndk1::__shared_weak_count::__release_weak =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::__release_weak(void)

{
  (*(code *)PTR___release_weak_0013e100)();
  return;
}


// ===== 00137b60  <EXTERNAL>::__cxa_guard_abort =====

void __cxa_guard_abort(void)

{
  (*(code *)PTR___cxa_guard_abort_0013e108)();
  return;
}


// ===== 00137b70  margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::JavaPart::getJHybridPlayAgeRangeDeclarationSpec =====

void __thiscall
margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::JavaPart::
getJHybridPlayAgeRangeDeclarationSpec(JavaPart *this)

{
  (*(code *)PTR_getJHybridPlayAgeRangeDeclarationSpec_0013e110)();
  return;
}


// ===== 00137b80  <EXTERNAL>::facebook::jni::findClassStatic =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::findClassStatic(char *param_1)

{
  (*(code *)PTR_findClassStatic_0013e118)();
  return;
}


// ===== 00137b90  <EXTERNAL>::facebook::jni::Environment::current =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::Environment::current(void)

{
  (*(code *)PTR_current_0013e120)();
  return;
}


// ===== 00137ba0  <EXTERNAL>::facebook::jni::throwCppExceptionIf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwCppExceptionIf(bool param_1)

{
  (*(code *)PTR_throwCppExceptionIf_0013e128)(param_1);
  return;
}


// ===== 00137bb0  margelo::nitro::playagerangedeclaration::HybridPlayAgeRangeDeclarationSpec::loadHybridMethods =====

void __thiscall
margelo::nitro::playagerangedeclaration::HybridPlayAgeRangeDeclarationSpec::loadHybridMethods
          (HybridPlayAgeRangeDeclarationSpec *this)

{
  (*(code *)PTR_loadHybridMethods_0013e130)();
  return;
}


// ===== 00137bc0  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc =====

void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc(void)

{
  (*(code *)
    PTR__ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc_0013e138
  )();
  return;
}


// ===== 00137bd0  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init_copy_ctor_external =====

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
__init_copy_ctor_external
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2)

{
  (*(code *)PTR___init_copy_ctor_external_0013e140)();
  return;
}


// ===== 00137be0  <EXTERNAL>::margelo::nitro::HybridObject::loadHybridMethods =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::HybridObject::loadHybridMethods(void)

{
  (*(code *)PTR_loadHybridMethods_0013e148)();
  return;
}


// ===== 00137bf0  <EXTERNAL>::__cxa_allocate_exception =====

void __cxa_allocate_exception(void)

{
  (*(code *)PTR___cxa_allocate_exception_0013e150)();
  return;
}


// ===== 00137c00  <EXTERNAL>::std::__ndk1::operator+ =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::operator+(char *param_1,basic_string *param_2)

{
  (*(code *)PTR_operator__0013e158)();
  return;
}


// ===== 00137c10  <EXTERNAL>::std::runtime_error::runtime_error =====

void __thiscall std::runtime_error::runtime_error(runtime_error *this,basic_string *param_1)

{
  (*(code *)PTR_runtime_error_0013e160)();
  return;
}


// ===== 00137c20  <EXTERNAL>::std::runtime_error::~runtime_error =====

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
  (*(code *)PTR__runtime_error_0013e168)();
  return;
}


// ===== 00137c30  <EXTERNAL>::__cxa_throw =====

void __cxa_throw(void)

{
  (*(code *)PTR___cxa_throw_0013e170)();
  return;
}


// ===== 00137c40  <EXTERNAL>::__cxa_free_exception =====

void __cxa_free_exception(void)

{
  (*(code *)PTR___cxa_free_exception_0013e178)();
  return;
}


// ===== 00137c50  <EXTERNAL>::memcmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_0013e180)((int)__s1);
  return iVar1;
}


// ===== 00137c60  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     append(char *param_1,ulong param_2)

{
  (*(code *)PTR_append_0013e188)();
  return;
}


// ===== 00137c70  <EXTERNAL>::std::logic_error::logic_error =====

void __thiscall std::logic_error::logic_error(logic_error *this,char *param_1)

{
  (*(code *)PTR_logic_error_0013e190)();
  return;
}


// ===== 00137c80  <EXTERNAL>::std::bad_array_new_length::bad_array_new_length =====

void __thiscall std::bad_array_new_length::bad_array_new_length(bad_array_new_length *this)

{
  (*(code *)PTR_bad_array_new_length_0013e198)();
  return;
}


// ===== 00137c90  <EXTERNAL>::strlen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0013e1a0)();
  return sVar1;
}


// ===== 00137ca0  <EXTERNAL>::std::__ndk1::__next_prime =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__next_prime(ulong param_1)

{
  (*(code *)PTR___next_prime_0013e1a8)();
  return;
}


// ===== 00137cb0  <EXTERNAL>::std::__ndk1::to_string =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::to_string(ulong param_1)

{
  (*(code *)PTR_to_string_0013e1b0)();
  return;
}


// ===== 00137cc0  <EXTERNAL>::facebook::jsi::JSError::JSError =====

void __thiscall facebook::jsi::JSError::JSError(void)

{
  (*(code *)PTR_JSError_0013e1b8)();
  return;
}


// ===== 00137cd0  <EXTERNAL>::facebook::jsi::JSError::~JSError =====

void __thiscall facebook::jsi::JSError::~JSError(JSError *this)

{
  (*(code *)PTR__JSError_0013e1c0)();
  return;
}


// ===== 00137ce0  <EXTERNAL>::margelo::nitro::TypeInfo::getCurrentExceptionName =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::TypeInfo::getCurrentExceptionName(void)

{
  (*(code *)PTR_getCurrentExceptionName_0013e1c8)();
  return;
}


// ===== 00137cf0  <EXTERNAL>::__cxa_end_catch =====

void __cxa_end_catch(void)

{
  (*(code *)PTR___cxa_end_catch_0013e1d0)();
  return;
}


// ===== 00137d00  <EXTERNAL>::__dynamic_cast =====

void __dynamic_cast(void)

{
  (*(code *)PTR___dynamic_cast_0013e1d8)();
  return;
}


// ===== 00137d10  <EXTERNAL>::margelo::nitro::HybridObject::getName =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::HybridObject::getName(void)

{
  (*(code *)PTR_getName_0013e1e0)();
  return;
}


// ===== 00137d20  <EXTERNAL>::margelo::nitro::TypeInfo::demangleName =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::TypeInfo::demangleName(basic_string *param_1,bool param_2)

{
  (*(code *)PTR_demangleName_0013e1e8)(param_1,param_2);
  return;
}


// ===== 00137d30  <EXTERNAL>::facebook::jsi::Value::~Value =====

void __thiscall facebook::jsi::Value::~Value(Value *this)

{
  (*(code *)PTR__Value_0013e1f0)();
  return;
}


// ===== 00137d40  <EXTERNAL>::margelo::nitro::CommonGlobals::Promise::callConstructor =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::CommonGlobals::Promise::callConstructor(Runtime *param_1,function *param_2)

{
  (*(code *)PTR_callConstructor_0013e1f8)();
  return;
}


// ===== 00137d50  <EXTERNAL>::margelo::nitro::CommonGlobals::Promise::resolved =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::CommonGlobals::Promise::resolved(Runtime *param_1,Value *param_2)

{
  (*(code *)PTR_resolved_0013e200)();
  return;
}


// ===== 00137d60  <EXTERNAL>::margelo::nitro::CommonGlobals::Promise::rejected =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::CommonGlobals::Promise::rejected(Runtime *param_1,Value *param_2)

{
  (*(code *)PTR_rejected_0013e208)();
  return;
}


// ===== 00137d70  <EXTERNAL>::facebook::jsi::Value::asObject =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asObject(IRuntime *param_1)

{
  (*(code *)PTR_asObject_0013e210)();
  return;
}


// ===== 00137d80  <EXTERNAL>::facebook::jsi::Object::asFunction =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Object::asFunction(IRuntime *param_1)

{
  (*(code *)PTR_asFunction_0013e218)();
  return;
}


// ===== 00137d90  <EXTERNAL>::margelo::nitro::JSICache::getOrCreateCache =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::JSICache::getOrCreateCache(Runtime *param_1)

{
  (*(code *)PTR_getOrCreateCache_0013e220)();
  return;
}


// ===== 00137da0  <EXTERNAL>::margelo::nitro::Dispatcher::getRuntimeGlobalDispatcher =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::Dispatcher::getRuntimeGlobalDispatcher(Runtime *param_1)

{
  (*(code *)PTR_getRuntimeGlobalDispatcher_0013e228)();
  return;
}


// ===== 00137db0  <EXTERNAL>::std::__ndk1::mutex::~mutex =====

void __thiscall std::__ndk1::mutex::~mutex(mutex *this)

{
  (*(code *)PTR__mutex_0013e230)();
  return;
}


// ===== 00137dc0  <EXTERNAL>::std::__ndk1::mutex::unlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::mutex::unlock(void)

{
  (*(code *)PTR_unlock_0013e238)();
  return;
}


// ===== 00137dd0  <EXTERNAL>::std::__ndk1::__shared_weak_count::lock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::lock(void)

{
  (*(code *)PTR_lock_0013e240)();
  return;
}


// ===== 00137de0  <EXTERNAL>::facebook::jsi::Value::Value =====

void __thiscall facebook::jsi::Value::Value(Value *this,Value *param_1)

{
  (*(code *)PTR_Value_0013e248)();
  return;
}


// ===== 00137df0  <EXTERNAL>::std::__ndk1::mutex::lock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::mutex::lock(void)

{
  (*(code *)PTR_lock_0013e250)();
  return;
}


// ===== 00137e00  <EXTERNAL>::std::exception::~exception =====

void __thiscall std::exception::~exception(exception *this)

{
  (*(code *)PTR__exception_0013e258)();
  return;
}


// ===== 00137e10  <EXTERNAL>::std::exception_ptr::exception_ptr =====

void __thiscall std::exception_ptr::exception_ptr(exception_ptr *this,exception_ptr *param_1)

{
  (*(code *)PTR_exception_ptr_0013e260)();
  return;
}


// ===== 00137e20  <EXTERNAL>::std::exception_ptr::~exception_ptr =====

void __thiscall std::exception_ptr::~exception_ptr(exception_ptr *this)

{
  (*(code *)PTR__exception_ptr_0013e268)();
  return;
}


// ===== 00137e30  <EXTERNAL>::margelo::nitro::PropNameIDCache::get =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::PropNameIDCache::get(Runtime *param_1,basic_string *param_2)

{
  (*(code *)PTR_get_0013e270)();
  return;
}


// ===== 00137e40  <EXTERNAL>::std::runtime_error::runtime_error =====

void __thiscall std::runtime_error::runtime_error(runtime_error *this,char *param_1)

{
  (*(code *)PTR_runtime_error_0013e278)();
  return;
}


// ===== 00137e50  <EXTERNAL>::std::rethrow_exception =====

void std::rethrow_exception(void)

{
  (*(code *)PTR_rethrow_exception_0013e280)();
  return;
}


// ===== 00137e60  <EXTERNAL>::facebook::jsi::Value::Value =====

void __thiscall facebook::jsi::Value::Value(Value *this,IRuntime *param_1,Value *param_2)

{
  (*(code *)PTR_Value_0013e288)();
  return;
}


// ===== 00137e70  <EXTERNAL>::facebook::jsi::JSError::JSError =====

void __thiscall facebook::jsi::JSError::JSError(void)

{
  (*(code *)PTR_JSError_0013e290)();
  return;
}


// ===== 00137e80  <EXTERNAL>::facebook::jsi::Value::asNumber =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asNumber(void)

{
  (*(code *)PTR_asNumber_0013e298)();
  return;
}


// ===== 00137e90  <EXTERNAL>::std::__ndk1::to_string =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::to_string(int param_1)

{
  (*(code *)PTR_to_string_0013e2a0)(param_1);
  return;
}


// ===== 00137ea0  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     insert(ulong param_1,char *param_2,ulong param_3)

{
  (*(code *)PTR_insert_0013e2a8)();
  return;
}


// ===== 00137eb0  <EXTERNAL>::std::logic_error::logic_error =====

void __thiscall std::logic_error::logic_error(logic_error *this,basic_string *param_1)

{
  (*(code *)PTR_logic_error_0013e2b0)();
  return;
}


// ===== 00137ec0  <EXTERNAL>::std::__ndk1::__shared_weak_count::~__shared_weak_count =====

void __thiscall std::__ndk1::__shared_weak_count::~__shared_weak_count(__shared_weak_count *this)

{
  (*(code *)PTR____shared_weak_count_0013e2b8)();
  return;
}


// ===== 00137ed0  margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::getPlayAgeRangeDeclaration =====

void margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::
     getPlayAgeRangeDeclaration(void)

{
  (*(code *)PTR_getPlayAgeRangeDeclaration_0013e2c0)();
  return;
}


// ===== 00137ee0  margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::requestDeclaredAgeRange =====

void margelo::nitro::playagerangedeclaration::JHybridPlayAgeRangeDeclarationSpec::
     requestDeclaredAgeRange(void)

{
  (*(code *)PTR_requestDeclaredAgeRange_0013e2c8)();
  return;
}


// ===== 00137ef0  facebook::jni::JObject::getClass =====

void facebook::jni::JObject::getClass(void)

{
  (*(code *)PTR_getClass_0013e2d0)();
  return;
}


// ===== 00137f00  facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
~base_owned_ref(base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *this)

{
  (*(code *)PTR__base_owned_ref_0013e2d8)();
  return;
}


// ===== 00137f10  facebook::jni::getHybridDataFromField =====

void facebook::jni::getHybridDataFromField(JObject *param_1,JField *param_2)

{
  (*(code *)PTR_getHybridDataFromField_0013e2e0)();
  return;
}


// ===== 00137f20  facebook::jni::detail::HybridClassBase::isHybridClassBase =====

void facebook::jni::detail::HybridClassBase::isHybridClassBase(void)

{
  (*(code *)PTR_isHybridClassBase_0013e2e8)();
  return;
}


// ===== 00137f30  facebook::jni::throwNPE =====

void facebook::jni::throwNPE(void)

{
  (*(code *)PTR_throwNPE_0013e2f0)();
  return;
}


// ===== 00137f40  facebook::jni::base_owned_ref<_jclass*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::base_owned_ref<_jclass*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
          (base_owned_ref<_jclass*,facebook::jni::LocalReferenceAllocator> *this)

{
  (*(code *)PTR__base_owned_ref_0013e2f8)();
  return;
}


// ===== 00137f50  facebook::jni::base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::
base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
::~base_owned_ref(base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
                  *this)

{
  (*(code *)PTR__base_owned_ref_0013e300)();
  return;
}


// ===== 00137f60  facebook::jni::detail::getHolder<facebook::jni::JObject> =====

void __thiscall
facebook::jni::detail::getHolder<facebook::jni::JObject>(detail *this,JObject *param_1)

{
  (*(code *)PTR_getHolder<facebook_jni_JObject>_0013e308)();
  return;
}


// ===== 00137f70  facebook::jni::base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::
base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
::~base_owned_ref(base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
                  *this)

{
  (*(code *)PTR__base_owned_ref_0013e310)();
  return;
}


// ===== 00137f80  facebook::jni::detail::getDestructorField =====

void facebook::jni::detail::getDestructorField(basic_strong_ref *param_1)

{
  (*(code *)PTR_getDestructorField_0013e318)();
  return;
}


// ===== 00137f90  facebook::jni::detail::getHolder<facebook::jni::detail::HybridData> =====

void __thiscall
facebook::jni::detail::getHolder<facebook::jni::detail::HybridData>
          (detail *this,HybridData *param_1)

{
  (*(code *)PTR_getHolder<facebook_jni_detail_HybridData>_0013e320)();
  return;
}


// ===== 00137fa0  facebook::jni::base_owned_ref<_jstring*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::base_owned_ref<_jstring*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
          (base_owned_ref<_jstring*,facebook::jni::LocalReferenceAllocator> *this)

{
  (*(code *)PTR__base_owned_ref_0013e328)();
  return;
}


// ===== 00137fb0  facebook::jni::base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>::
~base_owned_ref(base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator> *this)

{
  (*(code *)PTR__base_owned_ref_0013e330)();
  return;
}


// ===== 00137fc0  _JNIEnv::CallStaticObjectMethod =====

void _JNIEnv::CallStaticObjectMethod(_jclass *param_1,_jmethodID *param_2,...)

{
  (*(code *)PTR_CallStaticObjectMethod_0013e338)();
  return;
}


// ===== 00137fd0  facebook::jni::JClass::getMethod<_jstring*()> =====

void __thiscall facebook::jni::JClass::getMethod<_jstring*()>(JClass *this,char *param_1)

{
  (*(code *)PTR_getMethod<_jstring*()>_0013e340)();
  return;
}


// ===== 00137fe0  _JNIEnv::CallObjectMethod =====

void _JNIEnv::CallObjectMethod(_jobject *param_1,_jmethodID *param_2,...)

{
  (*(code *)PTR_CallObjectMethod_0013e348)();
  return;
}


// ===== 00137ff0  <EXTERNAL>::margelo::nitro::JHybridObject::JavaPart::getJHybridObject =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::JHybridObject::JavaPart::getJHybridObject(void)

{
  (*(code *)PTR_getJHybridObject_0013e350)();
  return;
}


// ===== 00138000  <EXTERNAL>::std::exception_ptr::operator= =====

void __thiscall std::exception_ptr::operator=(exception_ptr *this,exception_ptr *param_1)

{
  (*(code *)PTR_operator__0013e358)();
  return;
}


// ===== 00138010  <EXTERNAL>::std::runtime_error::runtime_error =====

void __thiscall std::runtime_error::runtime_error(runtime_error *this,runtime_error *param_1)

{
  (*(code *)PTR_runtime_error_0013e360)();
  return;
}


// ===== 00138020  <EXTERNAL>::std::current_exception =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::current_exception(void)

{
  (*(code *)PTR_current_exception_0013e368)();
  return;
}


// ===== 00138030  <EXTERNAL>::facebook::jni::throwNewJavaException =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwNewJavaException(char *param_1,char *param_2)

{
  (*(code *)PTR_throwNewJavaException_0013e370)();
  return;
}


// ===== 00138040  <EXTERNAL>::facebook::jni::detail::HybridDestructor::getNativePointer =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::detail::HybridDestructor::getNativePointer(void)

{
  (*(code *)PTR_getNativePointer_0013e378)();
  return;
}


// ===== 00138050  <EXTERNAL>::facebook::jni::JString::toStdString =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::JString::toStdString(void)

{
  (*(code *)PTR_toStdString_0013e380)();
  return;
}


// ===== 00138060  <EXTERNAL>::facebook::jni::throwPendingJniExceptionAsCppException =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwPendingJniExceptionAsCppException(void)

{
  (*(code *)PTR_throwPendingJniExceptionAsCppException_0013e388)();
  return;
}


// ===== 00138070  <EXTERNAL>::facebook::jni::JniException::JniException =====

void __thiscall facebook::jni::JniException::JniException(void)

{
  (*(code *)PTR_JniException_0013e390)();
  return;
}


// ===== 00138080  <EXTERNAL>::facebook::jni::JniException::JniException =====

void __thiscall facebook::jni::JniException::JniException(JniException *this,JniException *param_1)

{
  (*(code *)PTR_JniException_0013e398)();
  return;
}


// ===== 00138090  <EXTERNAL>::facebook::jni::JniException::~JniException =====

void __thiscall facebook::jni::JniException::~JniException(JniException *this)

{
  (*(code *)PTR__JniException_0013e3a0)();
  return;
}


// ===== 001380a0  <EXTERNAL>::margelo::nitro::JHybridObject::~JHybridObject =====

void __thiscall margelo::nitro::JHybridObject::~JHybridObject(JHybridObject *this)

{
  (*(code *)PTR__JHybridObject_0013e3a8)();
  return;
}


// ===== 001380b0  <EXTERNAL>::margelo::nitro::HybridObject::~HybridObject =====

void __thiscall margelo::nitro::HybridObject::~HybridObject(HybridObject *this)

{
  (*(code *)PTR__HybridObject_0013e3b0)();
  return;
}


// ===== 001380c0  <EXTERNAL>::facebook::jsi::NativeState::~NativeState =====

void __thiscall facebook::jsi::NativeState::~NativeState(NativeState *this)

{
  (*(code *)PTR__NativeState_0013e3b8)();
  return;
}


// ===== 001380d0  <EXTERNAL>::facebook::jni::ThreadScope::WithClassLoader =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::ThreadScope::WithClassLoader(function *param_1)

{
  (*(code *)PTR_WithClassLoader_0013e3c0)();
  return;
}


// ===== 001380e0  <EXTERNAL>::facebook::jni::detail::HybridData::create =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::detail::HybridData::create(void)

{
  (*(code *)PTR_create_0013e3c8)();
  return;
}


// ===== 001380f0  <EXTERNAL>::facebook::jni::detail::HybridDestructor::setNativePointer =====

void facebook::jni::detail::HybridDestructor::setNativePointer(void)

{
  (*(code *)PTR_setNativePointer_0013e3d0)();
  return;
}


// ===== 00138100  <EXTERNAL>::margelo::nitro::JHybridObject::CxxPart::CxxPart =====

void __thiscall margelo::nitro::JHybridObject::CxxPart::CxxPart(void)

{
  (*(code *)PTR_CxxPart_0013e3d8)();
  return;
}


// ===== 00138110  <EXTERNAL>::facebook::jni::findClassLocal =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::findClassLocal(char *param_1)

{
  (*(code *)PTR_findClassLocal_0013e3e0)();
  return;
}


// ===== 00138120  <EXTERNAL>::std::bad_alloc::bad_alloc =====

void __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
  (*(code *)PTR_bad_alloc_0013e3e8)();
  return;
}


// ===== 00138130  <EXTERNAL>::margelo::nitro::HybridObject::HybridObject =====

void __thiscall margelo::nitro::HybridObject::HybridObject(HybridObject *this,char *param_1)

{
  (*(code *)PTR_HybridObject_0013e3f0)();
  return;
}


// ===== 00138140  <EXTERNAL>::margelo::nitro::JHybridObject::JHybridObject =====

void __thiscall
margelo::nitro::JHybridObject::JHybridObject(JHybridObject *this,basic_strong_ref *param_1)

{
  (*(code *)PTR_JHybridObject_0013e3f8)();
  return;
}


// ===== 00138150  <EXTERNAL>::facebook::jni::detail::JniEnvCacher::JniEnvCacher =====

void __thiscall
facebook::jni::detail::JniEnvCacher::JniEnvCacher(JniEnvCacher *this,_JNIEnv *param_1)

{
  (*(code *)PTR_JniEnvCacher_0013e400)();
  return;
}


// ===== 00138160  <EXTERNAL>::facebook::jni::translatePendingCppExceptionToJavaException =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::translatePendingCppExceptionToJavaException(void)

{
  (*(code *)PTR_translatePendingCppExceptionToJavaException_0013e408)();
  return;
}


// ===== 00138170  <EXTERNAL>::facebook::jni::detail::JniEnvCacher::~JniEnvCacher =====

void __thiscall facebook::jni::detail::JniEnvCacher::~JniEnvCacher(JniEnvCacher *this)

{
  (*(code *)PTR__JniEnvCacher_0013e410)();
  return;
}


// ===== 00138180  <EXTERNAL>::vsnprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vsnprintf_0013e418)((int)__s);
  return iVar1;
}


// ===== 00138190  <EXTERNAL>::dl_iterate_phdr =====

void dl_iterate_phdr(void)

{
  (*(code *)PTR_dl_iterate_phdr_0013e420)();
  return;
}


// ===== 001381a0  <EXTERNAL>::fwrite =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0013e428)();
  return sVar1;
}


// ===== 001381b0  <EXTERNAL>::memmove =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_0013e430)();
  return pvVar1;
}


// ===== 001381c0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0013e438)();
  return;
}


// ===== 001381d0  <EXTERNAL>::malloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0013e440)();
  return pvVar1;
}


// ===== 001381e0  <EXTERNAL>::strncmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0013e448)((int)__s1);
  return iVar1;
}


// ===== 001381f0  <EXTERNAL>::fprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0013e450)((int)__stream);
  return iVar1;
}


// ===== 00138200  <EXTERNAL>::__stack_chk_fail =====

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_0013e458)();
  return;
}


// ===== 00138210  <EXTERNAL>::pthread_rwlock_wrlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_wrlock_0013e460)((int)__rwlock);
  return iVar1;
}


// ===== 00138220  <EXTERNAL>::syscall =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_syscall_0013e468)();
  return lVar1;
}


// ===== 00138230  <EXTERNAL>::pthread_rwlock_unlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_unlock_0013e470)((int)__rwlock);
  return iVar1;
}


// ===== 00138240  <EXTERNAL>::memcpy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0013e478)();
  return pvVar1;
}


// ===== 00138250  <EXTERNAL>::getauxval =====

void getauxval(void)

{
  (*(code *)PTR_getauxval_0013e480)();
  return;
}


// ===== 00138260  <EXTERNAL>::abort =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0013e488)();
  return;
}


// ===== 00138270  <EXTERNAL>::__system_property_get =====

void __system_property_get(void)

{
  (*(code *)PTR___system_property_get_0013e490)();
  return;
}


// ===== 00138280  <EXTERNAL>::getpid =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_0013e498)();
  return _Var1;
}


// ===== 00138290  <EXTERNAL>::pthread_rwlock_rdlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_rdlock_0013e4a0)((int)__rwlock);
  return iVar1;
}


// ===== 001382a0  <EXTERNAL>::memset =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0013e4a8)(__s,__c);
  return pvVar1;
}


// ===== 001382b0  <EXTERNAL>::fflush =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_0013e4b0)((int)__stream);
  return iVar1;
}


// ===== 00144000  <EXTERNAL>::__cxa_finalize =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144008  <EXTERNAL>::__cxa_atexit =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_atexit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144010  <EXTERNAL>::__register_atfork =====

/* WARNING: Control flow encountered bad instruction data */

void __register_atfork(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144018  <EXTERNAL>::__cxa_guard_acquire =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_acquire(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144020  <EXTERNAL>::__cxa_guard_release =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_release(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144028  <EXTERNAL>::facebook::jni::initialize =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::initialize(_JavaVM *param_1,function *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144030  <EXTERNAL>::margelo::nitro::HybridObjectRegistry::registerHybridObjectConstructor =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::HybridObjectRegistry::registerHybridObjectConstructor
               (basic_string *param_1,function *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144038  <EXTERNAL>::__gxx_personality_v0 =====

/* WARNING: Control flow encountered bad instruction data */

void __gxx_personality_v0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144040  <EXTERNAL>::operator.new =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144048  <EXTERNAL>::__cxa_begin_catch =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_begin_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144050  <EXTERNAL>::std::terminate =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144058  <EXTERNAL>::operator.delete =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144060  <EXTERNAL>::std::__ndk1::__shared_weak_count::__release_weak =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::__release_weak(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144068  <EXTERNAL>::__cxa_guard_abort =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144070  <EXTERNAL>::facebook::jni::findClassStatic =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::findClassStatic(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144078  <EXTERNAL>::facebook::jni::Environment::current =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::Environment::current(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144080  <EXTERNAL>::facebook::jni::throwCppExceptionIf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwCppExceptionIf(bool param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144098  <EXTERNAL>::margelo::nitro::HybridObject::loadHybridMethods =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::HybridObject::loadHybridMethods(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001440a0  <EXTERNAL>::margelo::nitro::HybridObject::~HybridObject =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall margelo::nitro::HybridObject::~HybridObject(HybridObject *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001440a8  <EXTERNAL>::margelo::nitro::HybridObject::~HybridObject =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall margelo::nitro::HybridObject::~HybridObject(HybridObject *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001440b0  <EXTERNAL>::margelo::nitro::HybridObject::shared =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::HybridObject::shared(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001440b8  <EXTERNAL>::margelo::nitro::HybridObject::equals =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::HybridObject::equals(shared_ptr *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001440c0  <EXTERNAL>::margelo::nitro::HybridObject::toString =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::HybridObject::toString(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001440c8  <EXTERNAL>::margelo::nitro::HybridObject::~HybridObject =====

/* WARNING: Control flow encountered bad instruction data */

void margelo::nitro::HybridObject::~HybridObject(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001440d0  <EXTERNAL>::margelo::nitro::HybridObject::~HybridObject =====

/* WARNING: Control flow encountered bad instruction data */

void margelo::nitro::HybridObject::~HybridObject(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001440d8  <EXTERNAL>::__cxa_pure_virtual =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_pure_virtual(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001440e0  <EXTERNAL>::__cxa_allocate_exception =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_allocate_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001440e8  <EXTERNAL>::std::__ndk1::operator+ =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::operator+(char *param_1,basic_string *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001440f0  <EXTERNAL>::std::runtime_error::runtime_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::runtime_error::runtime_error(runtime_error *this,basic_string *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001440f8  <EXTERNAL>::std::runtime_error::~runtime_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144100  <EXTERNAL>::__cxa_throw =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_throw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144108  <EXTERNAL>::__cxa_free_exception =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_free_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144110  <EXTERNAL>::memcmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144118  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     append(char *param_1,ulong param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144120  <EXTERNAL>::std::length_error::~length_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::length_error::~length_error(length_error *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144128  <EXTERNAL>::std::logic_error::logic_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::logic_error::logic_error(logic_error *this,char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144130  <EXTERNAL>::std::bad_array_new_length::bad_array_new_length =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::bad_array_new_length::bad_array_new_length(bad_array_new_length *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144138  <EXTERNAL>::std::bad_array_new_length::~bad_array_new_length =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::bad_array_new_length::~bad_array_new_length(bad_array_new_length *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144140  <EXTERNAL>::strlen =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144148  <EXTERNAL>::std::__ndk1::__next_prime =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__next_prime(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144150  <EXTERNAL>::std::__ndk1::to_string =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::to_string(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144158  <EXTERNAL>::facebook::jsi::JSError::JSError =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::JSError::JSError(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144160  <EXTERNAL>::facebook::jsi::JSError::~JSError =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::JSError::~JSError(JSError *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144168  <EXTERNAL>::margelo::nitro::TypeInfo::getCurrentExceptionName =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::TypeInfo::getCurrentExceptionName(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144170  <EXTERNAL>::__cxa_end_catch =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_end_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144178  <EXTERNAL>::__dynamic_cast =====

/* WARNING: Control flow encountered bad instruction data */

void __dynamic_cast(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144180  <EXTERNAL>::margelo::nitro::HybridObject::getName =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::HybridObject::getName(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144188  <EXTERNAL>::margelo::nitro::TypeInfo::demangleName =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::TypeInfo::demangleName(basic_string *param_1,bool param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144190  <EXTERNAL>::facebook::jsi::Value::~Value =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::Value::~Value(Value *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144198  <EXTERNAL>::margelo::nitro::CommonGlobals::Promise::callConstructor =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::CommonGlobals::Promise::callConstructor(Runtime *param_1,function *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001441a0  <EXTERNAL>::margelo::nitro::CommonGlobals::Promise::resolved =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::CommonGlobals::Promise::resolved(Runtime *param_1,Value *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001441a8  <EXTERNAL>::margelo::nitro::CommonGlobals::Promise::rejected =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::CommonGlobals::Promise::rejected(Runtime *param_1,Value *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001441b0  <EXTERNAL>::facebook::jsi::Value::asObject =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asObject(IRuntime *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001441b8  <EXTERNAL>::facebook::jsi::Object::asFunction =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Object::asFunction(IRuntime *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001441c0  <EXTERNAL>::margelo::nitro::JSICache::getOrCreateCache =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::JSICache::getOrCreateCache(Runtime *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001441c8  <EXTERNAL>::margelo::nitro::Dispatcher::getRuntimeGlobalDispatcher =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::Dispatcher::getRuntimeGlobalDispatcher(Runtime *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001441d0  <EXTERNAL>::std::__ndk1::mutex::~mutex =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::mutex::~mutex(mutex *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001441d8  <EXTERNAL>::std::__ndk1::mutex::unlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::mutex::unlock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001441e0  <EXTERNAL>::std::__ndk1::__shared_weak_count::lock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::lock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001441e8  <EXTERNAL>::facebook::jsi::Value::Value =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::Value::Value(Value *this,Value *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001441f0  <EXTERNAL>::std::__ndk1::mutex::lock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::mutex::lock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001441f8  <EXTERNAL>::std::exception::what =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::exception::what(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144200  <EXTERNAL>::std::exception::~exception =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::exception::~exception(exception *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144208  <EXTERNAL>::std::exception_ptr::exception_ptr =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::exception_ptr::exception_ptr(exception_ptr *this,exception_ptr *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144210  <EXTERNAL>::std::exception_ptr::~exception_ptr =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::exception_ptr::~exception_ptr(exception_ptr *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144218  <EXTERNAL>::margelo::nitro::PropNameIDCache::get =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::PropNameIDCache::get(Runtime *param_1,basic_string *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144220  <EXTERNAL>::std::runtime_error::runtime_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::runtime_error::runtime_error(runtime_error *this,char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144228  <EXTERNAL>::std::rethrow_exception =====

/* WARNING: Control flow encountered bad instruction data */

void std::rethrow_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144230  <EXTERNAL>::facebook::jsi::Value::Value =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::Value::Value(Value *this,IRuntime *param_1,Value *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144238  <EXTERNAL>::facebook::jsi::JSError::JSError =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::JSError::JSError(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144240  <EXTERNAL>::facebook::jsi::Value::asNumber =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asNumber(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144248  <EXTERNAL>::std::__ndk1::to_string =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::to_string(int param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144250  <EXTERNAL>::std::invalid_argument::~invalid_argument =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::invalid_argument::~invalid_argument(invalid_argument *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144258  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     insert(ulong param_1,char *param_2,ulong param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144260  <EXTERNAL>::std::logic_error::logic_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::logic_error::logic_error(logic_error *this,basic_string *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144268  <EXTERNAL>::std::__ndk1::__shared_weak_count::~__shared_weak_count =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::__shared_weak_count::~__shared_weak_count(__shared_weak_count *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001442d0  <EXTERNAL>::margelo::nitro::JHybridObject::JavaPart::getJHybridObject =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::JHybridObject::JavaPart::getJHybridObject(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001442d8  <EXTERNAL>::margelo::nitro::JHybridObject::~JHybridObject =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall margelo::nitro::JHybridObject::~JHybridObject(JHybridObject *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001442e0  <EXTERNAL>::margelo::nitro::JHybridObject::~JHybridObject =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall margelo::nitro::JHybridObject::~JHybridObject(JHybridObject *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001442e8  <EXTERNAL>::margelo::nitro::JHybridObject::dispose =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::JHybridObject::dispose(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001442f0  <EXTERNAL>::margelo::nitro::JHybridObject::equals =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::JHybridObject::equals(shared_ptr *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001442f8  <EXTERNAL>::margelo::nitro::JHybridObject::getExternalMemorySize =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::JHybridObject::getExternalMemorySize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144300  <EXTERNAL>::margelo::nitro::JHybridObject::toString =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::JHybridObject::toString(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144308  <EXTERNAL>::margelo::nitro::JHybridObject::~JHybridObject =====

/* WARNING: Control flow encountered bad instruction data */

void margelo::nitro::JHybridObject::~JHybridObject(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144310  <EXTERNAL>::margelo::nitro::JHybridObject::~JHybridObject =====

/* WARNING: Control flow encountered bad instruction data */

void margelo::nitro::JHybridObject::~JHybridObject(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144318  <EXTERNAL>::margelo::nitro::JHybridObject::equals =====

/* WARNING: Control flow encountered bad instruction data */

void margelo::nitro::JHybridObject::equals(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144320  <EXTERNAL>::margelo::nitro::JHybridObject::toString =====

/* WARNING: Control flow encountered bad instruction data */

void margelo::nitro::JHybridObject::toString(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144328  <EXTERNAL>::margelo::nitro::JHybridObject::dispose =====

/* WARNING: Control flow encountered bad instruction data */

void margelo::nitro::JHybridObject::dispose(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144330  <EXTERNAL>::margelo::nitro::JHybridObject::getExternalMemorySize =====

/* WARNING: Control flow encountered bad instruction data */

void margelo::nitro::JHybridObject::getExternalMemorySize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144338  <EXTERNAL>::margelo::nitro::JHybridObject::~JHybridObject =====

/* WARNING: Control flow encountered bad instruction data */

void margelo::nitro::JHybridObject::~JHybridObject(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144340  <EXTERNAL>::margelo::nitro::JHybridObject::~JHybridObject =====

/* WARNING: Control flow encountered bad instruction data */

void margelo::nitro::JHybridObject::~JHybridObject(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144348  <EXTERNAL>::std::__ndk1::__shared_weak_count::__get_deleter =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::__get_deleter(type_info *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144350  <EXTERNAL>::std::exception_ptr::operator= =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::exception_ptr::operator=(exception_ptr *this,exception_ptr *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144358  <EXTERNAL>::std::runtime_error::runtime_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::runtime_error::runtime_error(runtime_error *this,runtime_error *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144360  <EXTERNAL>::std::current_exception =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::current_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144368  <EXTERNAL>::facebook::jni::throwNewJavaException =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwNewJavaException(char *param_1,char *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144370  <EXTERNAL>::facebook::jni::detail::HybridDestructor::getNativePointer =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::detail::HybridDestructor::getNativePointer(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144378  <EXTERNAL>::facebook::jni::JString::toStdString =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::JString::toStdString(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144380  <EXTERNAL>::facebook::jni::throwPendingJniExceptionAsCppException =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwPendingJniExceptionAsCppException(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144388  <EXTERNAL>::facebook::jni::JniException::JniException =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jni::JniException::JniException(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144390  <EXTERNAL>::facebook::jni::JniException::JniException =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jni::JniException::JniException(JniException *this,JniException *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144398  <EXTERNAL>::facebook::jni::JniException::~JniException =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jni::JniException::~JniException(JniException *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001443a0  <EXTERNAL>::margelo::nitro::JHybridObject::~JHybridObject =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall margelo::nitro::JHybridObject::~JHybridObject(JHybridObject *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001443a8  <EXTERNAL>::margelo::nitro::HybridObject::~HybridObject =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall margelo::nitro::HybridObject::~HybridObject(HybridObject *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001443b0  <EXTERNAL>::facebook::jsi::NativeState::~NativeState =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::NativeState::~NativeState(NativeState *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001443b8  <EXTERNAL>::facebook::jni::ThreadScope::WithClassLoader =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::ThreadScope::WithClassLoader(function *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001443c0  <EXTERNAL>::facebook::jni::detail::HybridData::create =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::detail::HybridData::create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001443c8  <EXTERNAL>::facebook::jni::detail::HybridDestructor::setNativePointer =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::jni::detail::HybridDestructor::setNativePointer(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001443d0  <EXTERNAL>::margelo::nitro::JHybridObject::CxxPart::CxxPart =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall margelo::nitro::JHybridObject::CxxPart::CxxPart(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001443d8  <EXTERNAL>::facebook::jni::findClassLocal =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::findClassLocal(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001443e0  <EXTERNAL>::std::bad_alloc::bad_alloc =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001443e8  <EXTERNAL>::std::bad_alloc::~bad_alloc =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001443f0  <EXTERNAL>::margelo::nitro::HybridObject::HybridObject =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall margelo::nitro::HybridObject::HybridObject(HybridObject *this,char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001443f8  <EXTERNAL>::margelo::nitro::JHybridObject::JHybridObject =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
margelo::nitro::JHybridObject::JHybridObject(JHybridObject *this,basic_strong_ref *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144400  <EXTERNAL>::facebook::jni::detail::JniEnvCacher::JniEnvCacher =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
facebook::jni::detail::JniEnvCacher::JniEnvCacher(JniEnvCacher *this,_JNIEnv *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144408  <EXTERNAL>::facebook::jni::translatePendingCppExceptionToJavaException =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::translatePendingCppExceptionToJavaException(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144410  <EXTERNAL>::facebook::jni::detail::JniEnvCacher::~JniEnvCacher =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jni::detail::JniEnvCacher::~JniEnvCacher(JniEnvCacher *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144418  <EXTERNAL>::vsnprintf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144460  <EXTERNAL>::dl_iterate_phdr =====

/* WARNING: Control flow encountered bad instruction data */

void dl_iterate_phdr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144468  <EXTERNAL>::fwrite =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144470  <EXTERNAL>::memmove =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144478  <EXTERNAL>::free =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144480  <EXTERNAL>::malloc =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144488  <EXTERNAL>::strncmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144490  <EXTERNAL>::fprintf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00144498  <EXTERNAL>::__stack_chk_fail =====

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001444a0  <EXTERNAL>::pthread_rwlock_wrlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001444b0  <EXTERNAL>::syscall =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001444b8  <EXTERNAL>::pthread_rwlock_unlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001444c0  <EXTERNAL>::memcpy =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001444c8  <EXTERNAL>::getauxval =====

/* WARNING: Control flow encountered bad instruction data */

void getauxval(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001444d0  <EXTERNAL>::abort =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001444d8  <EXTERNAL>::__system_property_get =====

/* WARNING: Control flow encountered bad instruction data */

void __system_property_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001444e0  <EXTERNAL>::getpid =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001444e8  <EXTERNAL>::pthread_rwlock_rdlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001444f0  <EXTERNAL>::memset =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001444f8  <EXTERNAL>::fflush =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


