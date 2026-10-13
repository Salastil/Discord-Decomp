// ===== 001ae01c  margelo::nitro::JHybridObject::toString =====

/* margelo::nitro::JHybridObject::toString() */

void __thiscall margelo::nitro::JHybridObject::toString(JHybridObject *this)

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
  if (((DAT_001c0448 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_001c0448), iVar2 != 0)) {
                    /* try { // try from 001ae0d4 to 001ae0e3 has its CatchHandler @ 001ae0f8 */
    FUN_001ad1b0(&local_40);
    DAT_001c0440 = FUN_001ae66c(&local_40);
    __cxa_guard_release(&DAT_001c0448);
  }
  p_Var6 = *(_jmethodID **)(this + 8);
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  lVar4 = _JNIEnv::CallObjectMethod(p_Var3,p_Var6,DAT_001c0440);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_40 = lVar4;
                    /* try { // try from 001ae078 to 001ae083 has its CatchHandler @ 001ae10c */
  facebook::jni::JString::toStdString();
  lVar4 = local_40;
  if (local_40 != 0) {
                    /* try { // try from 001ae08c to 001ae09f has its CatchHandler @ 001ae134 */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ae138  margelo::nitro::JHybridObject::~JHybridObject =====

/* virtual thunk to margelo::nitro::JHybridObject::~JHybridObject() */

void __thiscall margelo::nitro::JHybridObject::~JHybridObject(JHybridObject *this)

{
  JHybridObject *this_00;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this_00 = this + *(long *)(*(long *)this + -0x28);
  ~JHybridObject(this_00);
  HybridObject::~HybridObject((HybridObject *)(this_00 + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState((NativeState *)this_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ae1b0  margelo::nitro::JHybridObject::~JHybridObject =====

/* virtual thunk to margelo::nitro::JHybridObject::~JHybridObject() */

void __thiscall margelo::nitro::JHybridObject::~JHybridObject(JHybridObject *this)

{
  JHybridObject *this_00;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this_00 = this + *(long *)(*(long *)this + -0x28);
  ~JHybridObject(this_00);
  HybridObject::~HybridObject((HybridObject *)(this_00 + 0x10));
  facebook::jsi::NativeState::~NativeState((NativeState *)this_00);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(this_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ae230  margelo::nitro::JHybridObject::equals =====

/* virtual thunk to
   margelo::nitro::JHybridObject::equals(std::__ndk1::shared_ptr<margelo::nitro::HybridObject>
   const&) */

void __thiscall margelo::nitro::JHybridObject::equals(JHybridObject *this,shared_ptr *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    equals(this + *(long *)(*(long *)this + -0x38),param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ae274  margelo::nitro::JHybridObject::toString =====

/* virtual thunk to margelo::nitro::JHybridObject::toString() */

void __thiscall margelo::nitro::JHybridObject::toString(JHybridObject *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    toString(this + *(long *)(*(long *)this + -0x40));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ae2b8  margelo::nitro::JHybridObject::dispose =====

/* virtual thunk to margelo::nitro::JHybridObject::dispose() */

void __thiscall margelo::nitro::JHybridObject::dispose(JHybridObject *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    dispose(this + *(long *)(*(long *)this + -0x48));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ae2fc  margelo::nitro::JHybridObject::getExternalMemorySize =====

/* virtual thunk to margelo::nitro::JHybridObject::getExternalMemorySize() */

void __thiscall margelo::nitro::JHybridObject::getExternalMemorySize(JHybridObject *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getExternalMemorySize(this + *(long *)(*(long *)this + -0x50));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ae340  margelo::nitro::JHybridObject::~JHybridObject =====

/* margelo::nitro::JHybridObject::~JHybridObject() */

void __thiscall margelo::nitro::JHybridObject::~JHybridObject(JHybridObject *this)

{
  long lVar1;
  undefined ***pppuVar2;
  long *plVar3;
  long *in_x1;
  long lVar4;
  undefined **local_70;
  JHybridObject *pJStack_68;
  long *local_50;
  long local_38;
  
  local_50 = (long *)&local_70;
  pppuVar2 = &local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar4 = *in_x1;
  *(long *)this = lVar4;
  *(long *)(this + *(long *)(lVar4 + -0x20)) = in_x1[1];
  local_70 = &PTR_FUN_001b98d0;
  *(long *)(this + *(long *)(*(long *)this + -0x28)) = in_x1[2];
  pJStack_68 = this;
                    /* try { // try from 001ae39c to 001ae3a3 has its CatchHandler @ 001ae418 */
  facebook::jni::ThreadScope::WithClassLoader((function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_001ae3d0;
    lVar4 = 5;
    pppuVar2 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar2 + lVar4 * 8))();
LAB_001ae3d0:
  lVar4 = *(long *)(this + 8);
  if (lVar4 != 0) {
                    /* try { // try from 001ae3d8 to 001ae3eb has its CatchHandler @ 001ae41c */
    plVar3 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb0))(plVar3,lVar4);
  }
  *(undefined8 *)(this + 8) = 0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ae420  FUN_001ae420 =====

void FUN_001ae420(void *param_1)

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


// ===== 001ae458  FUN_001ae458 =====

void FUN_001ae458(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_001b98d0;
  puVar2[1] = uVar4;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ae4b4  FUN_001ae4b4 =====

void FUN_001ae4b4(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_001b98d0;
  param_2[1] = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ae4fc  FUN_001ae4fc =====

void FUN_001ae4fc(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ae534  FUN_001ae534 =====

void FUN_001ae534(void *param_1)

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


// ===== 001ae56c  FUN_001ae56c =====

void FUN_001ae56c(long param_1)

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
                    /* try { // try from 001ae598 to 001ae5ab has its CatchHandler @ 001ae5d8 */
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


// ===== 001ae5dc  FUN_001ae5dc =====

void FUN_001ae5dc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) != "ZN7margelo5nitro13JHybridObjectD1EvE3$_0") {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 001ae62c  FUN_001ae62c =====

pointer_____offset_0x10___ * FUN_001ae62c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_001b9930;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ae66c  FUN_001ae66c =====

long FUN_001ae66c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,"toString",PTR_kDescriptor_001ba958);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ae6e8  FUN_001ae6e8 =====

long FUN_001ae6e8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,"dispose",PTR_kDescriptor_001ba310);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ae764  FUN_001ae764 =====

void FUN_001ae764(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_001b9880;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ae7a8  FUN_001ae7a8 =====

void FUN_001ae7a8(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_001b9880;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ae800  FUN_001ae800 =====

void FUN_001ae800(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001ae838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(param_1 + 0x18))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ae840  FUN_001ae840 =====

void FUN_001ae840(void *param_1)

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


// ===== 001ae878  margelo::nitro::JHybridObject::CxxPart::initHybrid =====

/* margelo::nitro::JHybridObject::CxxPart::initHybrid(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>)
    */

void __thiscall
margelo::nitro::JHybridObject::CxxPart::initHybrid(undefined8 *param_1,CxxPart *this)

{
  long lVar1;
  undefined8 uVar2;
  CxxPart *pCVar3;
  long *plVar4;
  long lVar5;
  CxxPart *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pCVar3 = (CxxPart *)operator_new(0x20);
  local_48 = *(undefined8 *)this;
                    /* try { // try from 001ae8b4 to 001ae8bb has its CatchHandler @ 001ae990 */
  CxxPart(pCVar3,&local_48);
                    /* try { // try from 001ae8bc to 001ae8c3 has its CatchHandler @ 001ae988 */
  facebook::jni::detail::HybridData::create();
  uVar2 = local_50;
                    /* try { // try from 001ae8c8 to 001ae8e3 has its CatchHandler @ 001ae9a4 */
  plVar4 = (long *)facebook::jni::Environment::current();
  lVar5 = (**(code **)(*plVar4 + 200))(plVar4,uVar2);
  facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 001ae8ec to 001ae8f7 has its CatchHandler @ 001ae958 */
  local_58 = pCVar3;
  local_40 = lVar5;
  FUN_0019ad1c(&local_40,&local_58);
  pCVar3 = local_58;
  local_58 = (CxxPart *)0x0;
  if (pCVar3 != (CxxPart *)0x0) {
    (**(code **)(*(long *)pCVar3 + 8))();
  }
  lVar5 = local_40;
  if (local_40 != 0) {
                    /* try { // try from 001ae918 to 001ae92b has its CatchHandler @ 001ae9a0 */
    plVar4 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar4 + 0xb8))(plVar4,lVar5);
  }
  *param_1 = local_50;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ae9dc  margelo::nitro::JHybridObject::CxxPart::registerNatives =====

/* margelo::nitro::JHybridObject::CxxPart::registerNatives() */

void margelo::nitro::JHybridObject::CxxPart::registerNatives(void)

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
  puStack_58 = PTR_kDescriptor_001b95d0;
  local_60 = PTR_s_initHybrid_001b95c8;
  local_50 = PTR_call_001b95d8;
  pcVar9 = (char *)operator_new(0x30);
  uVar7 = s_Lcom_margelo_nitro_core_HybridOb_00137b30._36_8_;
  uVar6 = s_Lcom_margelo_nitro_core_HybridOb_00137b30._17_8_;
  uVar5 = s_Lcom_margelo_nitro_core_HybridOb_00137b30._9_8_;
  uVar4 = s_Lcom_margelo_nitro_core_HybridOb_00137b30._1_8_;
  uVar2 = CONCAT53(s_Lcom_margelo_nitro_core_HybridOb_00137b30._28_5_,
                   s_Lcom_margelo_nitro_core_HybridOb_00137b30._25_3_);
  uVar3 = CONCAT35(s_Lcom_margelo_nitro_core_HybridOb_00137b30._33_3_,
                   s_Lcom_margelo_nitro_core_HybridOb_00137b30._28_5_);
  pcVar9[0x2b] = '\0';
  *(undefined8 *)(pcVar9 + 8) = uVar5;
  *(undefined8 *)pcVar9 = uVar4;
  *(undefined8 *)(pcVar9 + 0x18) = uVar2;
  *(undefined8 *)(pcVar9 + 0x10) = uVar6;
  *(undefined8 *)(pcVar9 + 0x23) = uVar7;
  *(undefined8 *)(pcVar9 + 0x1b) = uVar3;
                    /* try { // try from 001aea3c to 001aea43 has its CatchHandler @ 001aeab4 */
  facebook::jni::findClassLocal(pcVar9);
  operator_delete(pcVar9);
                    /* try { // try from 001aea4c to 001aea73 has its CatchHandler @ 001aeac8 */
  plVar10 = (long *)facebook::jni::Environment::current();
  iVar8 = (**(code **)(*plVar10 + 0x6b8))(plVar10,local_40,&local_60,1);
  facebook::jni::throwCppExceptionIf(iVar8 != 0);
  if (local_40 != 0) {
                    /* try { // try from 001aea7c to 001aea8f has its CatchHandler @ 001aeac4 */
    plVar10 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar10 + 0xb8))(plVar10,local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001aeaf0  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>),&margelo::nitro::JHybridObject::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   (*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>),
   &margelo::nitro::JHybridObject::CxxPart::initHybrid,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>>::call(_JNIEnv*, _jobject*) */

undefined8
facebook::jni::detail::
FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>),&margelo::nitro::JHybridObject::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>
::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  JniEnvCacher aJStack_50 [24];
  _jobject *local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_50,param_1);
                    /* try { // try from 001aeb20 to 001aeb2b has its CatchHandler @ 001aeb5c */
  local_38 = param_2;
  margelo::nitro::JHybridObject::CxxPart::initHybrid((CxxPart *)&local_30,&local_38);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001aeba8  margelo::nitro::JHybridObject::JHybridObject =====

/* margelo::nitro::JHybridObject::JHybridObject(facebook::jni::basic_strong_ref<margelo::nitro::JHybridObject::JavaPart,
   facebook::jni::LocalReferenceAllocator> const&) */

void __thiscall
margelo::nitro::JHybridObject::JHybridObject(JHybridObject *this,basic_strong_ref *param_1)

{
  long lVar1;
  long *plVar2;
  bad_alloc *this_00;
  long *in_x2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)param_1;
  lVar5 = *in_x2;
  *(long *)this = lVar4;
  *(undefined8 *)(this + *(long *)(lVar4 + -0x20)) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + *(long *)(*(long *)this + -0x28)) = *(undefined8 *)(param_1 + 0x10);
  if (lVar5 != 0) {
    plVar2 = (long *)facebook::jni::Environment::current();
    lVar5 = (**(code **)(*plVar2 + 0xa8))(plVar2,lVar5);
    facebook::jni::throwPendingJniExceptionAsCppException();
    if (lVar5 == 0) {
      this_00 = (bad_alloc *)__cxa_allocate_exception(8);
      if (*(long *)(lVar1 + 0x28) == lVar3) {
        std::bad_alloc::bad_alloc(this_00);
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this_00,PTR_typeinfo_001ba598,PTR__bad_alloc_001ba590);
      }
      goto LAB_001aec78;
    }
  }
  *(long *)(this + 8) = lVar5;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
LAB_001aec78:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001aec7c  margelo::nitro::JHybridObject::~JHybridObject =====

/* virtual thunk to margelo::nitro::JHybridObject::~JHybridObject() */

void __thiscall margelo::nitro::JHybridObject::~JHybridObject(JHybridObject *this)

{
  JHybridObject *this_00;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this_00 = this + *(long *)(*(long *)this + -0x18);
  ~JHybridObject(this_00);
  HybridObject::~HybridObject((HybridObject *)(this_00 + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState((NativeState *)this_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001aecf4  margelo::nitro::JHybridObject::~JHybridObject =====

/* virtual thunk to margelo::nitro::JHybridObject::~JHybridObject() */

void __thiscall margelo::nitro::JHybridObject::~JHybridObject(JHybridObject *this)

{
  JHybridObject *this_00;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this_00 = this + *(long *)(*(long *)this + -0x18);
  ~JHybridObject(this_00);
  HybridObject::~HybridObject((HybridObject *)(this_00 + 0x10));
  facebook::jsi::NativeState::~NativeState((NativeState *)this_00);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(this_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001aed74  margelo::nitro::levelToAndroidLevel =====

/* margelo::nitro::levelToAndroidLevel(margelo::nitro::LogLevel) */

int margelo::nitro::levelToAndroidLevel(uint param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (param_1 < 4) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return param_1 + 3;
    }
  }
  else {
    uVar2 = __cxa_allocate_exception(0x10);
                    /* try { // try from 001aedc8 to 001aedd3 has its CatchHandler @ 001aedfc */
    FUN_001aee24(uVar2,"Invalid LogLevel!");
    if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(uVar2,PTR_typeinfo_001ba968,PTR__invalid_argument_001ba960);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001aee24  FUN_001aee24 =====

void FUN_001aee24(logic_error *param_1,char *param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    std::logic_error::logic_error(param_1,param_2);
    *(undefined **)param_1 = PTR_vtable_001ba970 + 0x10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001aee7c  margelo::nitro::Logger::nativeLog =====

/* margelo::nitro::Logger::nativeLog(margelo::nitro::LogLevel, char const*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void margelo::nitro::Logger::nativeLog(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001aeeb4  margelo::nitro::ThreadUtils::getThreadName =====

/* margelo::nitro::ThreadUtils::getThreadName() */

void margelo::nitro::ThreadUtils::getThreadName(void)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  _jclass *p_Var4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  _jmethodID *p_Var8;
  undefined1 auStack_40 [8];
  long local_38;
  
  puVar2 = PTR_method_001ba978;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_method_001ba980 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_method_001ba980), iVar3 != 0)) {
                    /* try { // try from 001aef84 to 001aef93 has its CatchHandler @ 001aefe8 */
    FUN_001af02c(auStack_40);
    uVar7 = FUN_001af0ec(auStack_40);
    *(undefined8 *)puVar2 = uVar7;
    __cxa_guard_release(PTR_method_001ba980);
  }
  if (((*PTR_cls_001ba990 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_cls_001ba990), iVar3 != 0))
  {
                    /* try { // try from 001aefb8 to 001aefcb has its CatchHandler @ 001aefdc */
    facebook::jni::findClassStatic(PTR_kBaseName_001ba998);
    __cxa_guard_release(PTR_cls_001ba990);
  }
  p_Var8 = *(_jmethodID **)PTR_cls_001ba988;
  p_Var4 = (_jclass *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::CallStaticObjectMethod(p_Var4,p_Var8,*(undefined8 *)puVar2);
  facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 001aef28 to 001aef33 has its CatchHandler @ 001af000 */
  facebook::jni::JString::toStdString();
  if (lVar5 != 0) {
                    /* try { // try from 001aef3c to 001aef4f has its CatchHandler @ 001af028 */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,lVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001af02c  FUN_001af02c =====

void FUN_001af02c(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_001ba990 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_001ba990), iVar2 != 0))
  {
                    /* try { // try from 001af09c to 001af0af has its CatchHandler @ 001af0c0 */
    facebook::jni::findClassStatic(PTR_kBaseName_001ba998);
    __cxa_guard_release(PTR_cls_001ba990);
  }
  *param_1 = *(undefined8 *)PTR_cls_001ba988;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001af0ec  FUN_001af0ec =====

long FUN_001af0ec(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x388))
                    (plVar2,*param_1,"getCurrentThreadName",PTR_kDescriptor_001ba358);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001af168  margelo::nitro::ThreadUtils::setThreadName =====

/* margelo::nitro::ThreadUtils::setThreadName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void margelo::nitro::ThreadUtils::setThreadName(basic_string *param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  undefined **local_60;
  basic_string *pbStack_58;
  long *local_40;
  long local_28;
  
  local_40 = (long *)&local_60;
  pppuVar2 = &local_60;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60 = &PTR_FUN_001b9950;
  pbStack_58 = param_1;
                    /* try { // try from 001af198 to 001af19f has its CatchHandler @ 001af1ec */
  facebook::jni::ThreadScope::WithClassLoader((function *)&local_60);
  if ((undefined ***)local_40 == &local_60) {
    lVar3 = 4;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_001af1cc;
    lVar3 = 5;
    pppuVar2 = (undefined ***)local_40;
  }
  (**(code **)((long)*pppuVar2 + lVar3 * 8))();
LAB_001af1cc:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001af23c  FUN_001af23c =====

void FUN_001af23c(void *param_1)

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


// ===== 001af274  FUN_001af274 =====

void FUN_001af274(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_001b9950;
  puVar2[1] = uVar4;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001af2d0  FUN_001af2d0 =====

void FUN_001af2d0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_001b9950;
  param_2[1] = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001af318  FUN_001af318 =====

void FUN_001af318(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001af350  FUN_001af350 =====

void FUN_001af350(void *param_1)

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


// ===== 001af388  FUN_001af388 =====

void FUN_001af388(long param_1)

{
  long lVar1;
  int iVar2;
  _jclass *p_Var3;
  long *plVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  _jmethodID *p_Var8;
  long local_48;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pbVar6 = *(byte **)(param_1 + 8);
  pbVar7 = *(byte **)(pbVar6 + 0x10);
  if ((*pbVar6 & 1) == 0) {
    pbVar7 = pbVar6 + 1;
  }
  facebook::jni::make_jstring((char *)pbVar7);
  if (((*PTR_method_001ba9b8 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_method_001ba9b8), iVar2 != 0)) {
                    /* try { // try from 001af464 to 001af473 has its CatchHandler @ 001af4d0 */
    FUN_001af02c(auStack_40);
    uVar5 = FUN_001af5a4(auStack_40);
    *(undefined8 *)PTR_method_001ba9b0 = uVar5;
    __cxa_guard_release(PTR_method_001ba9b8);
  }
  if (((*PTR_cls_001ba990 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_001ba990), iVar2 != 0))
  {
                    /* try { // try from 001af4a0 to 001af4b3 has its CatchHandler @ 001af4c4 */
    facebook::jni::findClassStatic(PTR_kBaseName_001ba998);
    __cxa_guard_release(PTR_cls_001ba990);
  }
  p_Var8 = *(_jmethodID **)PTR_cls_001ba988;
                    /* try { // try from 001af3f4 to 001af413 has its CatchHandler @ 001af4ec */
  p_Var3 = (_jclass *)facebook::jni::Environment::current();
  _JNIEnv::CallStaticVoidMethod(p_Var3,p_Var8,*(undefined8 *)PTR_method_001ba9b0,local_48);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (local_48 != 0) {
                    /* try { // try from 001af41c to 001af42f has its CatchHandler @ 001af4e8 */
    plVar4 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar4 + 0xb8))(plVar4,local_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001af514  FUN_001af514 =====

void FUN_001af514(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZN7margelo5nitro11ThreadUtils13setThreadNameERKNSt6__ndk112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEE3$_0"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 001af564  FUN_001af564 =====

pointer_____offset_0x10___ * FUN_001af564(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_001b99c0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001af5a4  FUN_001af5a4 =====

long FUN_001af5a4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x388))
                    (plVar2,*param_1,"setCurrentThreadName",PTR_kDescriptor_001ba308);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001af620  _JNIEnv::CallStaticVoidMethod =====

/* _JNIEnv::CallStaticVoidMethod(_jclass*, _jmethodID*, ...) */

void _JNIEnv::CallStaticVoidMethod(_jclass *param_1,_jmethodID *param_2,...)

{
  long lVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar2;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  puStack_60 = auStack_a0;
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  ppuStack_68 = &local_70;
  uStack_58 = 0xffffff80ffffffd8;
  local_98 = in_x3;
  uStack_90 = in_x4;
  local_88 = in_x5;
  uStack_80 = in_x6;
  local_78 = in_x7;
  local_70 = (undefined1 *)register0x00000008;
  (**(code **)(*(long *)param_1 + 0x470))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001af6bc  margelo::nitro::ThreadUtils::isUIThread =====

/* margelo::nitro::ThreadUtils::isUIThread() */

bool margelo::nitro::ThreadUtils::isUIThread(void)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_40 [8];
  long local_38;
  
  puVar2 = PTR_method_001ba9a0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_method_001ba9a8 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_method_001ba9a8), iVar4 != 0)) {
                    /* try { // try from 001af764 to 001af773 has its CatchHandler @ 001af7c8 */
    FUN_001af02c(auStack_40);
    uVar5 = FUN_001af7f8(auStack_40);
    *(undefined8 *)puVar2 = uVar5;
    __cxa_guard_release(PTR_method_001ba9a8);
  }
  if (((*PTR_cls_001ba990 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_cls_001ba990), iVar4 != 0))
  {
                    /* try { // try from 001af798 to 001af7ab has its CatchHandler @ 001af7bc */
    facebook::jni::findClassStatic(PTR_kBaseName_001ba998);
    __cxa_guard_release(PTR_cls_001ba990);
  }
  uVar6 = *(undefined8 *)PTR_cls_001ba988;
  uVar5 = facebook::jni::Environment::current();
  cVar3 = FUN_001af874(uVar5,uVar6,*(undefined8 *)puVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    facebook::jni::throwPendingJniExceptionAsCppException();
    return cVar3 != '\0';
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001af7f8  FUN_001af7f8 =====

long FUN_001af7f8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x388))(plVar2,*param_1,"isOnUIThread",PTR_kDescriptor_001ba278);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001af874  FUN_001af874 =====

void FUN_001af874(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  puStack_60 = auStack_a0;
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  ppuStack_68 = &local_70;
  uStack_58 = 0xffffff80ffffffd8;
  local_98 = param_4;
  uStack_90 = param_5;
  local_88 = param_6;
  uStack_80 = param_7;
  local_78 = param_8;
  local_70 = (undefined1 *)register0x00000008;
  (**(code **)(*param_1 + 0x3b0))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001af910  margelo::nitro::ThreadUtils::createUIThreadDispatcher =====

/* margelo::nitro::ThreadUtils::createUIThreadDispatcher() */

void __thiscall margelo::nitro::ThreadUtils::createUIThreadDispatcher(ThreadUtils *this)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *in_x8;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar3 = (undefined8 *)operator_new(0x20);
  puVar3[2] = 0;
  puVar2 = PTR_vtable_001ba9c0;
  in_x8[1] = puVar3;
  *puVar3 = &PTR_FUN_001b99e0;
  puVar3[1] = 0;
  puVar3[3] = puVar2 + 0x10;
  *in_x8 = puVar3 + 3;
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001af984  FUN_001af984 =====

void FUN_001af984(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_001b99e0;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001af9c8  FUN_001af9c8 =====

void FUN_001af9c8(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_001b99e0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001afa20  FUN_001afa20 =====

void FUN_001afa20(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001afa58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(param_1 + 0x18))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001afa60  FUN_001afa60 =====

void FUN_001afa60(void *param_1)

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


// ===== 001afa98  margelo::nitro::UIThreadDispatcher::runAsync =====

/* WARNING: Removing unreachable block (ram,0x001afb94) */
/* WARNING: Removing unreachable block (ram,0x001afe08) */
/* margelo::nitro::UIThreadDispatcher::runAsync(std::__ndk1::function<void ()>&&) */

void __thiscall
margelo::nitro::UIThreadDispatcher::runAsync(UIThreadDispatcher *this,function *param_1)

{
  long lVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  _jclass *p_Var6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  function *pfVar11;
  function *pfVar12;
  undefined8 uVar13;
  _jmethodID *p_Var14;
  long local_98;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  long *local_68;
  long *local_60;
  long local_58;
  
  puVar2 = PTR_isHybrid_001ba9e0;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((*PTR_isHybrid_001ba9e8 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_isHybrid_001ba9e8), iVar4 != 0)) {
                    /* try { // try from 001aff04 to 001aff1b has its CatchHandler @ 001b012c */
    FUN_001b0378(&local_80);
    local_78 = local_80;
    bVar3 = facebook::jni::detail::HybridClassBase::isHybridClassBase(&local_78);
    *puVar2 = bVar3 & 1;
    __cxa_guard_release(PTR_isHybrid_001ba9e8);
  }
  plVar5 = (long *)operator_new(0x40);
  pfVar11 = param_1 + 0x20;
  pfVar12 = *(function **)pfVar11;
  *plVar5 = (long)&PTR_FUN_001b9a78;
  if (pfVar12 == (function *)0x0) {
    pfVar11 = (function *)(plVar5 + 6);
  }
  else {
    if (pfVar12 == param_1) {
      lVar8 = *(long *)param_1;
      plVar5[6] = (long)(plVar5 + 2);
                    /* try { // try from 001afb2c to 001afb33 has its CatchHandler @ 001b0140 */
      (**(code **)(lVar8 + 0x18))(param_1);
      goto LAB_001afb34;
    }
    plVar5[6] = (long)pfVar12;
  }
  *(undefined8 *)pfVar11 = 0;
LAB_001afb34:
  if (*puVar2 == '\0') {
                    /* try { // try from 001afc68 to 001afc6f has its CatchHandler @ 001b0178 */
    facebook::jni::detail::HybridData::create();
                    /* try { // try from 001afc74 to 001afc8f has its CatchHandler @ 001b01f0 */
    plVar7 = (long *)facebook::jni::Environment::current();
    plVar7 = (long *)(**(code **)(*plVar7 + 200))(plVar7,local_88);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 001afc94 to 001afc9f has its CatchHandler @ 001b0154 */
    local_68 = plVar5;
    local_60 = plVar7;
    FUN_0019ad1c(&local_60,&local_68);
    plVar5 = local_68;
    local_68 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_60;
    if (local_60 != (long *)0x0) {
                    /* try { // try from 001afcc0 to 001afcd3 has its CatchHandler @ 001b0198 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,plVar5);
    }
                    /* try { // try from 001afcd8 to 001afcf3 has its CatchHandler @ 001b01e8 */
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar8 = (**(code **)(*plVar5 + 200))(plVar5,local_88);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 001afcf8 to 001afd13 has its CatchHandler @ 001b01e0 */
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar9 = (**(code **)(*plVar5 + 200))(plVar5,lVar8);
    facebook::jni::throwPendingJniExceptionAsCppException();
    local_70 = lVar9;
    if (((DAT_001c0528 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_001c0528), iVar4 != 0)) {
      FUN_001b0438(&DAT_001c0520);
      __cxa_guard_release(&DAT_001c0528);
    }
    if (((DAT_001c0538 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_001c0538), iVar4 != 0)) {
                    /* try { // try from 001b0074 to 001b0077 has its CatchHandler @ 001b008c */
      DAT_001c0530 = FUN_001b04f8();
      __cxa_guard_release(&DAT_001c0538);
    }
    lVar9 = local_70;
    uVar13 = DAT_001c0530;
                    /* try { // try from 001afd44 to 001afd5f has its CatchHandler @ 001b01d8 */
    plVar5 = (long *)facebook::jni::Environment::current();
    plVar5 = (long *)(**(code **)(*plVar5 + 200))(plVar5,lVar9);
    facebook::jni::throwPendingJniExceptionAsCppException();
    local_68 = plVar5;
                    /* try { // try from 001afd64 to 001afd8f has its CatchHandler @ 001b0218 */
    p_Var6 = (_jclass *)facebook::jni::Environment::current();
    p_Var14 = DAT_001c0520;
    plVar7 = (long *)facebook::jni::Environment::current();
    plVar7 = (long *)(**(code **)(*plVar7 + 200))(plVar7,plVar5);
    facebook::jni::throwPendingJniExceptionAsCppException();
    local_60 = plVar7;
                    /* try { // try from 001afd94 to 001afda7 has its CatchHandler @ 001b0144 */
    local_98 = _JNIEnv::NewObject(p_Var6,p_Var14,uVar13,plVar7);
    if (plVar7 != (long *)0x0) {
                    /* try { // try from 001afdb0 to 001afdc3 has its CatchHandler @ 001b0194 */
      plVar10 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar10 + 0xb8))(plVar10,plVar7);
    }
                    /* try { // try from 001afdcc to 001afdcf has its CatchHandler @ 001b0218 */
    facebook::jni::throwCppExceptionIf(local_98 == 0);
    if (plVar5 != (long *)0x0) {
                    /* try { // try from 001afdd4 to 001afde7 has its CatchHandler @ 001b0190 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,plVar5);
    }
    if (lVar9 != 0) {
                    /* try { // try from 001afdec to 001afdff has its CatchHandler @ 001b018c */
      plVar5 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar5 + 0xb8))(plVar5,lVar9);
    }
    if (lVar8 != 0) {
                    /* try { // try from 001afe28 to 001afe3b has its CatchHandler @ 001b0184 */
      plVar5 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar5 + 0xb8))(plVar5,lVar8);
    }
    if (local_88 != 0) {
                    /* try { // try from 001afe48 to 001afe5b has its CatchHandler @ 001b0180 */
      plVar5 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar5 + 0xb8))(plVar5,local_88);
    }
  }
  else {
    if (((DAT_001c04f8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_001c04f8), iVar4 != 0)) {
      FUN_001b0438(&DAT_001c04f0);
      __cxa_guard_release(&DAT_001c04f8);
    }
    if (((DAT_001c0508 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_001c0508), iVar4 != 0)) {
                    /* try { // try from 001affe0 to 001affe3 has its CatchHandler @ 001b00e0 */
      DAT_001c0500 = FUN_001b0574();
      __cxa_guard_release(&DAT_001c0508);
    }
    uVar13 = DAT_001c0500;
                    /* try { // try from 001afb68 to 001afb8b has its CatchHandler @ 001b0244 */
    p_Var6 = (_jclass *)facebook::jni::Environment::current();
    local_98 = _JNIEnv::NewObject(p_Var6,DAT_001c04f0,uVar13);
    facebook::jni::throwCppExceptionIf(local_98 == 0);
                    /* try { // try from 001afbac to 001afbc7 has its CatchHandler @ 001b0240 */
    plVar7 = (long *)facebook::jni::Environment::current();
    lVar8 = (**(code **)(*plVar7 + 200))(plVar7,local_98);
    facebook::jni::throwPendingJniExceptionAsCppException();
    puVar2 = PTR_holderField_001ba9f8;
    local_70 = lVar8;
    if (((*PTR_holderField_001baa00 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_holderField_001baa00), iVar4 != 0)) {
      facebook::jni::JObject::getClass();
                    /* try { // try from 001b0014 to 001b001b has its CatchHandler @ 001b00b4 */
      uVar13 = facebook::jni::detail::getDestructorField((basic_strong_ref *)&local_60);
      *(undefined8 *)puVar2 = uVar13;
      facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
      ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
                       *)&local_60);
      __cxa_guard_release(PTR_holderField_001baa00);
    }
    lVar8 = local_70;
    uVar13 = *(undefined8 *)puVar2;
                    /* try { // try from 001afbec to 001afc03 has its CatchHandler @ 001b0214 */
    plVar7 = (long *)facebook::jni::Environment::current();
    local_68 = (long *)(**(code **)(*plVar7 + 0x2f8))(plVar7,lVar8,uVar13);
                    /* try { // try from 001afc08 to 001afc13 has its CatchHandler @ 001b019c */
    local_60 = plVar5;
    facebook::jni::detail::HybridDestructor::setNativePointer(&local_68,&local_60);
    plVar5 = local_60;
    local_60 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_68;
    if (local_68 != (long *)0x0) {
                    /* try { // try from 001afc34 to 001afc47 has its CatchHandler @ 001b01d0 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,plVar5);
    }
    lVar8 = local_70;
    if (local_70 != 0) {
                    /* try { // try from 001afc50 to 001afc63 has its CatchHandler @ 001b01cc */
      plVar5 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar5 + 0xb8))(plVar5,lVar8);
    }
  }
  if (((*PTR_method_001ba9d0 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_method_001ba9d0), iVar4 != 0)) {
                    /* try { // try from 001aff44 to 001aff53 has its CatchHandler @ 001b0114 */
    FUN_001af02c(&local_60);
    uVar13 = FUN_001b02fc(&local_60);
    *(undefined8 *)PTR_method_001ba9c8 = uVar13;
    __cxa_guard_release(PTR_method_001ba9d0);
  }
  if (((*PTR_cls_001ba990 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_cls_001ba990), iVar4 != 0))
  {
                    /* try { // try from 001aff80 to 001aff93 has its CatchHandler @ 001b0108 */
    facebook::jni::findClassStatic(PTR_kBaseName_001ba998);
    __cxa_guard_release(PTR_cls_001ba990);
  }
  p_Var14 = *(_jmethodID **)PTR_cls_001ba988;
                    /* try { // try from 001afe8c to 001afeab has its CatchHandler @ 001b0264 */
  p_Var6 = (_jclass *)facebook::jni::Environment::current();
  _JNIEnv::CallStaticVoidMethod(p_Var6,p_Var14,*(undefined8 *)PTR_method_001ba9c8,local_98);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (local_98 != 0) {
                    /* try { // try from 001afeb4 to 001afec7 has its CatchHandler @ 001b0210 */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,local_98);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001b028c  FUN_001b028c =====

void FUN_001b028c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 001b02b8 to 001b02cb has its CatchHandler @ 001b02f8 */
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


// ===== 001b02fc  FUN_001b02fc =====

long FUN_001b02fc(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x388))(plVar2,*param_1,"runOnUIThread",PTR_kDescriptor_001ba9d8);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b0378  FUN_001b0378 =====

void FUN_001b0378(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_001ba580 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_001ba580), iVar2 != 0))
  {
                    /* try { // try from 001b03e8 to 001b03fb has its CatchHandler @ 001b040c */
    facebook::jni::findClassStatic(PTR_kBaseName_001ba588);
    __cxa_guard_release(PTR_cls_001ba580);
  }
  *param_1 = *(undefined8 *)PTR_cls_001ba578;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b0438  FUN_001b0438 =====

void FUN_001b0438(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_001ba580 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_001ba580), iVar2 != 0))
  {
                    /* try { // try from 001b04a8 to 001b04bb has its CatchHandler @ 001b04cc */
    facebook::jni::findClassStatic(PTR_kBaseName_001ba588);
    __cxa_guard_release(PTR_cls_001ba580);
  }
  *param_1 = *(undefined8 *)PTR_cls_001ba578;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b04f8  FUN_001b04f8 =====

long FUN_001b04f8(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,DAT_001c0520,"<init>",PTR_kConstructorDescriptor_001baa08);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b0574  FUN_001b0574 =====

long FUN_001b0574(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,DAT_001c04f0,"<init>",PTR_kConstructorDescriptor_001ba9f0);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b05f0  FUN_001b05f0 =====

void FUN_001b05f0(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_001b9a78;
  if (plVar2 == plVar3) {
    lVar4 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == lVar5) {
        return;
      }
      goto LAB_001b067c;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x001b065c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar4 * 8))();
    return;
  }
LAB_001b067c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b0680  FUN_001b0680 =====

void FUN_001b0680(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_001b9a78;
  if (plVar2 == plVar3) {
    lVar5 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_001b06dc;
    lVar5 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_001b06dc:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b0704  margelo::nitro::UIThreadDispatcher::runSync =====

/* margelo::nitro::UIThreadDispatcher::runSync(std::__ndk1::function<void ()>&&) */

void margelo::nitro::UIThreadDispatcher::runSync(function *param_1)

{
  long lVar1;
  runtime_error *this;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001b072c to 001b0737 has its CatchHandler @ 001b0760 */
  std::runtime_error::runtime_error(this,"UIThreadDispatcher::runSync() is not implemented!");
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b0788  FUN_001b0788 =====

void FUN_001b0788(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  facebook::jsi::NativeState::~NativeState(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b07d4  margelo::nitro::JNitroModules::initHybrid =====

/* margelo::nitro::JNitroModules::initHybrid(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JNitroModules,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>)
    */

void margelo::nitro::JNitroModules::initHybrid(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *local_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)operator_new(8);
  *plVar3 = (long)&PTR_FUN_001b9af8;
                    /* try { // try from 001b0810 to 001b0817 has its CatchHandler @ 001b08dc */
  facebook::jni::detail::HybridData::create();
  uVar2 = local_48;
                    /* try { // try from 001b081c to 001b0837 has its CatchHandler @ 001b08e8 */
  plVar4 = (long *)facebook::jni::Environment::current();
  lVar5 = (**(code **)(*plVar4 + 200))(plVar4,uVar2);
  facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 001b0840 to 001b084b has its CatchHandler @ 001b08ac */
  local_50 = plVar3;
  local_40 = lVar5;
  FUN_0019ad1c(&local_40,&local_50);
  plVar3 = local_50;
  local_50 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  lVar5 = local_40;
  if (local_40 != 0) {
                    /* try { // try from 001b086c to 001b087f has its CatchHandler @ 001b08e4 */
    plVar3 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb8))(plVar3,lVar5);
  }
  *param_1 = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b0918  FUN_001b0918 =====

void FUN_001b0918(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b0950  FUN_001b0950 =====

void FUN_001b0950(void *param_1)

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


// ===== 001b0988  margelo::nitro::JNitroModules::install =====

/* margelo::nitro::JNitroModules::install(long,
   facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<facebook::react::CallInvokerHolder,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>)
    */

void __thiscall
margelo::nitro::JNitroModules::install(undefined8 param_1_00,Runtime *param_1,JObject *param_3)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  logic_error *this;
  long *plVar8;
  long *local_68;
  long *plStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_1 == (Runtime *)0x0) {
    uVar7 = __cxa_allocate_exception(0x10);
                    /* try { // try from 001b0b94 to 001b0b9f has its CatchHandler @ 001b0cbc */
    FUN_001aee24(uVar7,"jsi::Runtime was null!");
  }
  else {
    if (*(long *)param_3 != 0) {
      if (((*PTR_hybridDataField_001baa18 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_hybridDataField_001baa18), iVar3 != 0)) {
        facebook::jni::JObject::getClass();
                    /* try { // try from 001b0c0c to 001b0c0f has its CatchHandler @ 001b0c88 */
        uVar7 = FUN_001b0d1c(local_68);
        *(undefined8 *)PTR_hybridDataField_001baa10 = uVar7;
        facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
        ::~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
                           *)&local_68);
        __cxa_guard_release(PTR_hybridDataField_001baa18);
      }
      lVar4 = facebook::jni::getHybridDataFromField(param_3,(JField *)PTR_hybridDataField_001baa10);
      lVar6 = *(long *)(lVar4 + 8);
      plVar1 = *(long **)(lVar4 + 0x10);
      if (plVar1 != (long *)0x0) {
        FUN_0015c230(1,plVar1 + 1);
      }
      if (lVar6 == 0) {
        this = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001b0c44 to 001b0c4f has its CatchHandler @ 001b0ca8 */
        std::logic_error::logic_error(this,"CallInvoker was null!");
        *(undefined **)this = PTR_vtable_001ba970 + 0x10;
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 001b0c70 to 001b0c87 has its CatchHandler @ 001b0ca4 */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(this,PTR_typeinfo_001ba968,PTR__invalid_argument_001ba960);
        }
      }
      else {
                    /* try { // try from 001b09f8 to 001b09ff has its CatchHandler @ 001b0cf4 */
        plVar5 = (long *)operator_new(0x30);
        plVar5[2] = 0;
        plVar8 = plVar5 + 1;
        *plVar8 = 0;
        *plVar5 = (long)&PTR_FUN_001b9b58;
        if (plVar1 == (long *)0x0) {
          plVar5[5] = 0;
          plVar5[3] = (long)&PTR_FUN_001b9ba8;
          plVar5[4] = lVar6;
        }
        else {
          FUN_0015c230(1,plVar1 + 1);
          plVar5[3] = (long)&PTR_FUN_001b9ba8;
          plVar5[4] = lVar6;
          plVar5[5] = (long)plVar1;
          FUN_0015c230(1,plVar1 + 1);
          lVar6 = FUN_0015bb40(0xffffffffffffffff,plVar1 + 1);
          if (lVar6 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
            std::__ndk1::__shared_weak_count::__release_weak();
          }
        }
        FUN_0015c230(1,plVar5 + 1);
        local_68 = plVar5 + 3;
        plStack_60 = plVar5;
        FUN_0015c230(1,plVar5 + 1);
                    /* try { // try from 001b0aa4 to 001b0aaf has its CatchHandler @ 001b0cd4 */
        Dispatcher::installRuntimeGlobalDispatcher(param_1,&local_68);
        lVar6 = FUN_0015bb40(0xffffffffffffffff,plVar8);
        if (lVar6 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
                    /* try { // try from 001b0ad8 to 001b0adf has its CatchHandler @ 001b0ccc */
        nitro::install(param_1);
        lVar6 = FUN_0015bb40(0xffffffffffffffff,plVar8);
        if (lVar6 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        lVar6 = FUN_0015bb40(0xffffffffffffffff,plVar8);
        if (lVar6 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        if ((plVar1 != (long *)0x0) &&
           (lVar6 = FUN_0015bb40(0xffffffffffffffff,plVar1 + 1), lVar6 == 0)) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        if (*(long *)(lVar2 + 0x28) == local_58) {
          return;
        }
      }
      goto LAB_001b0d18;
    }
    uVar7 = __cxa_allocate_exception(0x10);
                    /* try { // try from 001b0bb0 to 001b0bbb has its CatchHandler @ 001b0cb8 */
    FUN_001aee24(uVar7,"CallInvokerHolder was null!");
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
    __cxa_throw(uVar7,PTR_typeinfo_001ba968,PTR__invalid_argument_001ba960);
  }
LAB_001b0d18:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b0d1c  FUN_001b0d1c =====

void FUN_001b0d1c(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_1;
  uVar3 = facebook::jni::detail::HybridClassBase::isHybridClassBase(&local_30);
  if ((uVar3 & 1) == 0) {
    if (((*PTR_cls_001baa28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_cls_001baa28), iVar2 != 0)) {
                    /* try { // try from 001b0dd8 to 001b0deb has its CatchHandler @ 001b0e10 */
      facebook::jni::findClassStatic(PTR_kBaseName_001baa30);
      __cxa_guard_release(PTR_cls_001baa28);
    }
    uVar6 = *(undefined8 *)PTR_cls_001baa20;
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar4 = (**(code **)(*plVar5 + 0x2f0))(plVar5,uVar6,"mHybridData",PTR_kDescriptor_001ba2f0);
    facebook::jni::throwCppExceptionIf(lVar4 == 0);
    if (lVar4 == 0) {
      if (*(long *)(lVar1 + 0x28) == local_28) {
        uVar6 = facebook::jni::throwNPE();
                    /* catch() { ... } // from try @ 001b0dd8 with catch @ 001b0e10 */
        lVar4 = __cxa_guard_abort(PTR_cls_001baa28);
        if (*(long *)(lVar1 + 0x28) == local_28) {
          lVar4 = FUN_00157e74(uVar6);
        }
      }
      goto LAB_001b0e38;
    }
  }
  else {
    lVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
LAB_001b0e38:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


// ===== 001b0e3c  FUN_001b0e3c =====

void FUN_001b0e3c(long *param_1)

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


// ===== 001b0ec8  FUN_001b0ec8 =====

void FUN_001b0ec8(long *param_1)

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


// ===== 001b0f54  FUN_001b0f54 =====

void FUN_001b0f54(NativeState *param_1)

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
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    facebook::jsi::NativeState::~NativeState(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b0fd4  FUN_001b0fd4 =====

void FUN_001b0fd4(NativeState *param_1)

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


// ===== 001b105c  FUN_001b105c =====

void FUN_001b105c(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001b1098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 8) + 0x20))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b10a0  FUN_001b10a0 =====

void FUN_001b10a0(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001b10dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 8) + 0x18))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b10e4  FUN_001b10e4 =====

void FUN_001b10e4(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_001b9b58;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b1128  FUN_001b1128 =====

void FUN_001b1128(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_001b9b58;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b1180  FUN_001b1180 =====

void FUN_001b1180(long param_1)

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


// ===== 001b1200  FUN_001b1200 =====

void FUN_001b1200(void *param_1)

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


// ===== 001b1238  margelo::nitro::JNitroModules::registerNatives =====

/* margelo::nitro::JNitroModules::registerNatives() */

void margelo::nitro::JNitroModules::registerNatives(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  char *pcVar7;
  long *plVar8;
  undefined *local_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puStack_68 = PTR_kDescriptor_001b9ac0;
  local_70 = PTR_s_initHybrid_001b9ab8;
  puStack_58 = PTR_s_install_001b9ad0;
  puStack_60 = PTR_call_001b9ac8;
  puStack_48 = PTR_call_001b9ae0;
  local_50 = PTR_kDescriptor_001b9ad8;
  pcVar7 = (char *)operator_new(0x20);
  uVar5 = s_Lcom_margelo_nitro_NitroModules__0013734c._23_8_;
  uVar4 = s_Lcom_margelo_nitro_NitroModules__0013734c._1_8_;
  uVar2 = CONCAT26(s_Lcom_margelo_nitro_NitroModules__0013734c._15_2_,
                   s_Lcom_margelo_nitro_NitroModules__0013734c._9_6_);
  uVar3 = CONCAT62(s_Lcom_margelo_nitro_NitroModules__0013734c._17_6_,
                   s_Lcom_margelo_nitro_NitroModules__0013734c._15_2_);
  pcVar7[0x1e] = '\0';
  *(undefined8 *)(pcVar7 + 8) = uVar2;
  *(undefined8 *)pcVar7 = uVar4;
  *(undefined8 *)(pcVar7 + 0x16) = uVar5;
  *(undefined8 *)(pcVar7 + 0xe) = uVar3;
                    /* try { // try from 001b1298 to 001b129f has its CatchHandler @ 001b1310 */
  facebook::jni::findClassLocal(pcVar7);
  operator_delete(pcVar7);
                    /* try { // try from 001b12a8 to 001b12cf has its CatchHandler @ 001b1324 */
  plVar8 = (long *)facebook::jni::Environment::current();
  iVar6 = (**(code **)(*plVar8 + 0x6b8))(plVar8,local_40,&local_70,2);
  facebook::jni::throwCppExceptionIf(iVar6 != 0);
  if (local_40 != 0) {
                    /* try { // try from 001b12d8 to 001b12eb has its CatchHandler @ 001b1320 */
    plVar8 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar8 + 0xb8))(plVar8,local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b134c  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JNitroModules,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>),&margelo::nitro::JNitroModules::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JNitroModules,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   (*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JNitroModules,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>),
   &margelo::nitro::JNitroModules::initHybrid,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JNitroModules,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>>::call(_JNIEnv*, _jobject*) */

undefined8
facebook::jni::detail::
FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JNitroModules,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>),&margelo::nitro::JNitroModules::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JNitroModules,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>
::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  JniEnvCacher aJStack_48 [24];
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_48,param_1);
                    /* try { // try from 001b1374 to 001b137b has its CatchHandler @ 001b13ac */
  margelo::nitro::JNitroModules::initHybrid(&local_30);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b13f8  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JNitroModules::*)(long,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<facebook::react::CallInvokerHolder,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>),&margelo::nitro::JNitroModules::install,margelo::nitro::JNitroModules,void,long,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<facebook::react::CallInvokerHolder,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>::call =====

/* facebook::jni::detail::MethodWrapper<void (margelo::nitro::JNitroModules::*)(long,
   facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<facebook::react::CallInvokerHolder,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>),
   &margelo::nitro::JNitroModules::install, margelo::nitro::JNitroModules, void, long,
   facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<facebook::react::CallInvokerHolder,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>
   >::call(_JNIEnv*, _jobject*, long,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<facebook::react::CallInvokerHolder,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*)
    */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JNitroModules::*)(long,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<facebook::react::CallInvokerHolder,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>),&margelo::nitro::JNitroModules::install,margelo::nitro::JNitroModules,void,long,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<facebook::react::CallInvokerHolder,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>
     ::call(_JNIEnv *param_1,_jobject *param_2,long param_3,_javaobject *param_4)

{
  long lVar1;
  JniEnvCacher aJStack_68 [24];
  long local_50;
  _javaobject *local_48;
  _jobject *p_Stack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_68,param_1);
                    /* try { // try from 001b1438 to 001b1447 has its CatchHandler @ 001b1474 */
  local_50 = param_3;
  local_48 = param_4;
  p_Stack_40 = param_2;
  dispatch(&p_Stack_40,&local_50,&local_48);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b14bc  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JNitroModules::*)(long,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<facebook::react::CallInvokerHolder,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>),&margelo::nitro::JNitroModules::install,margelo::nitro::JNitroModules,void,long,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<facebook::react::CallInvokerHolder,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>::dispatch =====

/* facebook::jni::detail::MethodWrapper<void (margelo::nitro::JNitroModules::*)(long,
   facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<facebook::react::CallInvokerHolder,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>),
   &margelo::nitro::JNitroModules::install, margelo::nitro::JNitroModules, void, long,
   facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<facebook::react::CallInvokerHolder,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>
   >::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JNitroModules,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   long&&,
   facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<facebook::react::CallInvokerHolder,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject,
   void>::_javaobject*>&&) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JNitroModules::*)(long,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<facebook::react::CallInvokerHolder,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>),&margelo::nitro::JNitroModules::install,margelo::nitro::JNitroModules,void,long,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<facebook::react::CallInvokerHolder,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>
     ::dispatch(JObject *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  JNitroModules *pJVar3;
  undefined8 uVar4;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*PTR_hybridDataField_001baa40 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001baa40);
    if (iVar2 != 0) {
      JObject::getClass();
                    /* try { // try from 001b1564 to 001b1567 has its CatchHandler @ 001b1590 */
      uVar4 = FUN_001b1604(local_40);
      *(undefined8 *)PTR_hybridDataField_001baa38 = uVar4;
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                 &local_40);
      __cxa_guard_release(PTR_hybridDataField_001baa40);
    }
  }
                    /* try { // try from 001b14f4 to 001b1513 has its CatchHandler @ 001b15ac */
  pJVar3 = (JNitroModules *)getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001baa38);
  local_48 = *param_3;
  margelo::nitro::JNitroModules::install(pJVar3,*param_2,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b1604  FUN_001b1604 =====

void FUN_001b1604(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_1;
  uVar3 = facebook::jni::detail::HybridClassBase::isHybridClassBase(&local_30);
  if ((uVar3 & 1) == 0) {
    if (((*PTR_cls_001baa50 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_cls_001baa50), iVar2 != 0)) {
                    /* try { // try from 001b16c0 to 001b16d3 has its CatchHandler @ 001b16f8 */
      facebook::jni::findClassStatic(PTR_kBaseName_001baa58);
      __cxa_guard_release(PTR_cls_001baa50);
    }
    uVar6 = *(undefined8 *)PTR_cls_001baa48;
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar4 = (**(code **)(*plVar5 + 0x2f0))(plVar5,uVar6,"mHybridData",PTR_kDescriptor_001ba2f0);
    facebook::jni::throwCppExceptionIf(lVar4 == 0);
    if (lVar4 == 0) {
      if (*(long *)(lVar1 + 0x28) == local_28) {
        uVar6 = facebook::jni::throwNPE();
                    /* catch() { ... } // from try @ 001b16c0 with catch @ 001b16f8 */
        lVar4 = __cxa_guard_abort(PTR_cls_001baa50);
        if (*(long *)(lVar1 + 0x28) == local_28) {
          lVar4 = FUN_00157e74(uVar6);
        }
      }
      goto LAB_001b1720;
    }
  }
  else {
    lVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
LAB_001b1720:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


// ===== 001b1724  margelo::nitro::JHardwareBufferUtils::getHardwareBufferSize =====

/* margelo::nitro::JHardwareBufferUtils::getHardwareBufferSize(AHardwareBuffer*) */

void margelo::nitro::JHardwareBufferUtils::getHardwareBufferSize(AHardwareBuffer *param_1)

{
  long lVar1;
  runtime_error *this;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001b174c to 001b1757 has its CatchHandler @ 001b1780 */
  std::runtime_error::runtime_error
            (this,"ArrayBuffer(HardwareBuffer) requires NDK API 26 or above! (minSdk >= 26)");
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b17a8  margelo::nitro::JHardwareBufferUtils::copyHardwareBufferBoxedNew =====

/* margelo::nitro::JHardwareBufferUtils::copyHardwareBufferBoxedNew(facebook::jni::alias_ref<facebook::jni::JClass>,
   facebook::jni::alias_ref<facebook::jni::JObject>) */

void margelo::nitro::JHardwareBufferUtils::copyHardwareBufferBoxedNew(void)

{
  long lVar1;
  runtime_error *this;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001b17d0 to 001b17db has its CatchHandler @ 001b1804 */
  std::runtime_error::runtime_error
            (this,"ArrayBuffer(HardwareBuffer) requires NDK API 26 or above! (minSdk >= 26)");
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b182c  margelo::nitro::JHardwareBufferUtils::copyHardwareBufferBoxed =====

/* margelo::nitro::JHardwareBufferUtils::copyHardwareBufferBoxed(facebook::jni::alias_ref<facebook::jni::JClass>,
   facebook::jni::alias_ref<facebook::jni::JObject>,
   facebook::jni::alias_ref<facebook::jni::JObject>) */

void margelo::nitro::JHardwareBufferUtils::copyHardwareBufferBoxed(void)

{
  long lVar1;
  runtime_error *this;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001b1854 to 001b185f has its CatchHandler @ 001b1888 */
  std::runtime_error::runtime_error
            (this,"ArrayBuffer(HardwareBuffer) requires NDK API 26 or above! (minSdk >= 26)");
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b18b0  margelo::nitro::JHardwareBufferUtils::copyHardwareBuffer =====

/* margelo::nitro::JHardwareBufferUtils::copyHardwareBuffer(AHardwareBuffer*, AHardwareBuffer*) */

void margelo::nitro::JHardwareBufferUtils::copyHardwareBuffer
               (AHardwareBuffer *param_1,AHardwareBuffer *param_2)

{
  long lVar1;
  runtime_error *this;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001b18d8 to 001b18e3 has its CatchHandler @ 001b190c */
  std::runtime_error::runtime_error
            (this,"ArrayBuffer(HardwareBuffer) requires NDK API 26 or above! (minSdk >= 26)");
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001b1940  FUN_001b1940 =====

void FUN_001b1940(void)

{
  (*(code *)PTR_001baa78)();
  return;
}


// ===== 001b1960  <EXTERNAL>::__cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_001baa80)();
  return;
}


// ===== 001b1970  <EXTERNAL>::__cxa_atexit =====

void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_001baa88)();
  return;
}


// ===== 001b1980  <EXTERNAL>::__register_atfork =====

void __register_atfork(void)

{
  (*(code *)PTR___register_atfork_001baa90)();
  return;
}


// ===== 001b1990  margelo::nitro::AnyMap::remove =====

void __thiscall margelo::nitro::AnyMap::remove(AnyMap *this,basic_string *param_1)

{
  (*(code *)PTR_remove_001baa98)();
  return;
}


// ===== 001b19a0  margelo::nitro::AnyMap::getDouble =====

void __thiscall margelo::nitro::AnyMap::getDouble(AnyMap *this,basic_string *param_1)

{
  (*(code *)PTR_getDouble_001baaa0)();
  return;
}


// ===== 001b19b0  margelo::nitro::AnyMap::getBoolean =====

void __thiscall margelo::nitro::AnyMap::getBoolean(AnyMap *this,basic_string *param_1)

{
  (*(code *)PTR_getBoolean_001baaa8)();
  return;
}


// ===== 001b19c0  margelo::nitro::AnyMap::getInt64 =====

void __thiscall margelo::nitro::AnyMap::getInt64(AnyMap *this,basic_string *param_1)

{
  (*(code *)PTR_getInt64_001baab0)();
  return;
}


// ===== 001b19d0  margelo::nitro::AnyMap::getString =====

void margelo::nitro::AnyMap::getString(basic_string *param_1)

{
  (*(code *)PTR_getString_001baab8)();
  return;
}


// ===== 001b19e0  margelo::nitro::AnyMap::getArray =====

void margelo::nitro::AnyMap::getArray(basic_string *param_1)

{
  (*(code *)PTR_getArray_001baac0)();
  return;
}


// ===== 001b19f0  margelo::nitro::AnyMap::getObject =====

void margelo::nitro::AnyMap::getObject(basic_string *param_1)

{
  (*(code *)PTR_getObject_001baac8)();
  return;
}


// ===== 001b1a00  margelo::nitro::AnyMap::getAny =====

void margelo::nitro::AnyMap::getAny(basic_string *param_1)

{
  (*(code *)PTR_getAny_001baad0)();
  return;
}


// ===== 001b1a10  margelo::nitro::AnyMap::setNull =====

void __thiscall margelo::nitro::AnyMap::setNull(AnyMap *this,basic_string *param_1)

{
  (*(code *)PTR_setNull_001baad8)();
  return;
}


// ===== 001b1a20  margelo::nitro::AnyMap::setDouble =====

void __thiscall margelo::nitro::AnyMap::setDouble(AnyMap *this,basic_string *param_1,double param_2)

{
  (*(code *)PTR_setDouble_001baae0)();
  return;
}


// ===== 001b1a30  margelo::nitro::AnyMap::setBoolean =====

void __thiscall margelo::nitro::AnyMap::setBoolean(AnyMap *this,basic_string *param_1,bool param_2)

{
  (*(code *)PTR_setBoolean_001baae8)(this,param_1,param_2);
  return;
}


// ===== 001b1a40  margelo::nitro::AnyMap::setInt64 =====

void __thiscall margelo::nitro::AnyMap::setInt64(AnyMap *this,basic_string *param_1,long param_2)

{
  (*(code *)PTR_setInt64_001baaf0)();
  return;
}


// ===== 001b1a50  margelo::nitro::AnyMap::setString =====

void __thiscall
margelo::nitro::AnyMap::setString(AnyMap *this,basic_string *param_1,basic_string *param_2)

{
  (*(code *)PTR_setString_001baaf8)();
  return;
}


// ===== 001b1a60  margelo::nitro::AnyMap::setArray =====

void __thiscall margelo::nitro::AnyMap::setArray(AnyMap *this,basic_string *param_1,vector *param_2)

{
  (*(code *)PTR_setArray_001bab00)();
  return;
}


// ===== 001b1a70  margelo::nitro::AnyMap::setObject =====

void __thiscall
margelo::nitro::AnyMap::setObject(AnyMap *this,basic_string *param_1,unordered_map *param_2)

{
  (*(code *)PTR_setObject_001bab08)();
  return;
}


// ===== 001b1a80  margelo::nitro::AnyMap::setAny =====

void __thiscall margelo::nitro::AnyMap::setAny(AnyMap *this,basic_string *param_1,AnyValue *param_2)

{
  (*(code *)PTR_setAny_001bab10)();
  return;
}


// ===== 001b1a90  margelo::nitro::AnyMap::merge =====

void __thiscall margelo::nitro::AnyMap::merge(AnyMap *this,shared_ptr *param_1)

{
  (*(code *)PTR_merge_001bab18)();
  return;
}


// ===== 001b1aa0  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init_copy_ctor_external =====

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
__init_copy_ctor_external
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2)

{
  (*(code *)PTR___init_copy_ctor_external_001bab20)();
  return;
}


// ===== 001b1ab0  <EXTERNAL>::__cxa_allocate_exception =====

void __cxa_allocate_exception(void)

{
  (*(code *)PTR___cxa_allocate_exception_001bab28)();
  return;
}


// ===== 001b1ac0  <EXTERNAL>::std::__ndk1::operator+ =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::operator+(char *param_1,basic_string *param_2)

{
  (*(code *)PTR_operator__001bab30)();
  return;
}


// ===== 001b1ad0  <EXTERNAL>::std::runtime_error::runtime_error =====

void __thiscall std::runtime_error::runtime_error(runtime_error *this,basic_string *param_1)

{
  (*(code *)PTR_runtime_error_001bab38)();
  return;
}


// ===== 001b1ae0  <EXTERNAL>::std::runtime_error::~runtime_error =====

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
  (*(code *)PTR__runtime_error_001bab40)();
  return;
}


// ===== 001b1af0  <EXTERNAL>::__cxa_throw =====

void __cxa_throw(void)

{
  (*(code *)PTR___cxa_throw_001bab48)();
  return;
}


// ===== 001b1b00  <EXTERNAL>::__cxa_free_exception =====

void __cxa_free_exception(void)

{
  (*(code *)PTR___cxa_free_exception_001bab50)();
  return;
}


// ===== 001b1b10  <EXTERNAL>::__cxa_begin_catch =====

void __cxa_begin_catch(void)

{
  (*(code *)PTR___cxa_begin_catch_001bab58)();
  return;
}


// ===== 001b1b20  <EXTERNAL>::std::terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
  (*(code *)PTR_terminate_001bab60)();
  return;
}


// ===== 001b1b30  <EXTERNAL>::std::logic_error::logic_error =====

void __thiscall std::logic_error::logic_error(logic_error *this,char *param_1)

{
  (*(code *)PTR_logic_error_001bab68)();
  return;
}


// ===== 001b1b40  <EXTERNAL>::std::bad_array_new_length::bad_array_new_length =====

void __thiscall std::bad_array_new_length::bad_array_new_length(bad_array_new_length *this)

{
  (*(code *)PTR_bad_array_new_length_001bab70)();
  return;
}


// ===== 001b1b50  <EXTERNAL>::operator.new =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_001bab78)();
  return pvVar1;
}


// ===== 001b1b60  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001bab80)();
  return;
}


// ===== 001b1b70  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     append(char *param_1,ulong param_2)

{
  (*(code *)PTR_append_001bab88)();
  return;
}


// ===== 001b1b80  <EXTERNAL>::strlen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_001bab90)();
  return sVar1;
}


// ===== 001b1b90  <EXTERNAL>::__cxa_rethrow =====

void __cxa_rethrow(void)

{
  (*(code *)PTR___cxa_rethrow_001bab98)();
  return;
}


// ===== 001b1ba0  <EXTERNAL>::__cxa_end_catch =====

void __cxa_end_catch(void)

{
  (*(code *)PTR___cxa_end_catch_001baba0)();
  return;
}


// ===== 001b1bb0  <EXTERNAL>::std::__ndk1::__next_prime =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__next_prime(ulong param_1)

{
  (*(code *)PTR___next_prime_001baba8)();
  return;
}


// ===== 001b1bc0  <EXTERNAL>::memcmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_001babb0)((int)__s1);
  return iVar1;
}


// ===== 001b1bd0  margelo::nitro::ArrayBuffer::copy =====

void __thiscall margelo::nitro::ArrayBuffer::copy(ArrayBuffer *this,uchar *param_1,ulong param_2)

{
  (*(code *)PTR_copy_001babb8)();
  return;
}


// ===== 001b1be0  margelo::nitro::ArrayBuffer::allocate =====

void __thiscall margelo::nitro::ArrayBuffer::allocate(ArrayBuffer *this,ulong param_1)

{
  (*(code *)PTR_allocate_001babc0)();
  return;
}


// ===== 001b1bf0  margelo::nitro::NativeArrayBuffer::NativeArrayBuffer =====

void __thiscall
margelo::nitro::NativeArrayBuffer::NativeArrayBuffer
          (NativeArrayBuffer *this,uchar *param_1,ulong param_2,function *param_3)

{
  (*(code *)PTR_NativeArrayBuffer_001babc8)();
  return;
}


// ===== 001b1c00  margelo::nitro::NativeArrayBuffer::~NativeArrayBuffer =====

void __thiscall margelo::nitro::NativeArrayBuffer::~NativeArrayBuffer(NativeArrayBuffer *this)

{
  (*(code *)PTR__NativeArrayBuffer_001babd0)();
  return;
}


// ===== 001b1c10  margelo::nitro::JSArrayBuffer::~JSArrayBuffer =====

void __thiscall margelo::nitro::JSArrayBuffer::~JSArrayBuffer(JSArrayBuffer *this)

{
  (*(code *)PTR__JSArrayBuffer_001babd8)();
  return;
}


// ===== 001b1c20  <EXTERNAL>::operator.new[] =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new__(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new___001babe0)();
  return pvVar1;
}


// ===== 001b1c30  <EXTERNAL>::std::runtime_error::runtime_error =====

void __thiscall std::runtime_error::runtime_error(runtime_error *this,char *param_1)

{
  (*(code *)PTR_runtime_error_001babe8)();
  return;
}


// ===== 001b1c40  <EXTERNAL>::facebook::jsi::MutableBuffer::~MutableBuffer =====

void __thiscall facebook::jsi::MutableBuffer::~MutableBuffer(MutableBuffer *this)

{
  (*(code *)PTR__MutableBuffer_001babf0)();
  return;
}


// ===== 001b1c50  <EXTERNAL>::pthread_self =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

pthread_t pthread_self(void)

{
  pthread_t pVar1;
  
  pVar1 = (*(code *)PTR_pthread_self_001babf8)();
  return pVar1;
}


// ===== 001b1c60  <EXTERNAL>::std::__ndk1::__shared_weak_count::~__shared_weak_count =====

void __thiscall std::__ndk1::__shared_weak_count::~__shared_weak_count(__shared_weak_count *this)

{
  (*(code *)PTR____shared_weak_count_001bac00)();
  return;
}


// ===== 001b1c70  <EXTERNAL>::operator.delete[] =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete__(void *param_1)

{
  (*(code *)PTR_operator_delete___001bac08)();
  return;
}


// ===== 001b1c80  <EXTERNAL>::std::__ndk1::mutex::~mutex =====

void __thiscall std::__ndk1::mutex::~mutex(mutex *this)

{
  (*(code *)PTR__mutex_001bac10)();
  return;
}


// ===== 001b1c90  <EXTERNAL>::__cxa_guard_acquire =====

void __cxa_guard_acquire(void)

{
  (*(code *)PTR___cxa_guard_acquire_001bac18)();
  return;
}


// ===== 001b1ca0  <EXTERNAL>::__cxa_guard_release =====

void __cxa_guard_release(void)

{
  (*(code *)PTR___cxa_guard_release_001bac20)();
  return;
}


// ===== 001b1cb0  margelo::nitro::PropNameIDCache::get =====

void margelo::nitro::PropNameIDCache::get(Runtime *param_1,basic_string *param_2)

{
  (*(code *)PTR_get_001bac28)();
  return;
}


// ===== 001b1cc0  <EXTERNAL>::std::__ndk1::__shared_weak_count::__release_weak =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::__release_weak(void)

{
  (*(code *)PTR___release_weak_001bac30)();
  return;
}


// ===== 001b1cd0  <EXTERNAL>::facebook::jsi::HostObject::~HostObject =====

void __thiscall facebook::jsi::HostObject::~HostObject(HostObject *this)

{
  (*(code *)PTR__HostObject_001bac38)();
  return;
}


// ===== 001b1ce0  margelo::nitro::HybridObject::toObject =====

void margelo::nitro::HybridObject::toObject(Runtime *param_1)

{
  (*(code *)PTR_toObject_001bac40)();
  return;
}


// ===== 001b1cf0  margelo::nitro::HybridObject::~HybridObject =====

void __thiscall margelo::nitro::HybridObject::~HybridObject(HybridObject *this)

{
  (*(code *)PTR__HybridObject_001bac48)();
  return;
}


// ===== 001b1d00  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc =====

void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc(void)

{
  (*(code *)
    PTR__ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc_001bac50
  )();
  return;
}


// ===== 001b1d10  margelo::nitro::HybridObject::getName =====

void margelo::nitro::HybridObject::getName(void)

{
  (*(code *)PTR_getName_001bac58)();
  return;
}


// ===== 001b1d20  margelo::nitro::HybridObject::loadHybridMethods =====

void __thiscall margelo::nitro::HybridObject::loadHybridMethods(HybridObject *this)

{
  (*(code *)PTR_loadHybridMethods_001bac60)();
  return;
}


// ===== 001b1d30  <EXTERNAL>::facebook::jsi::NativeState::~NativeState =====

void __thiscall facebook::jsi::NativeState::~NativeState(NativeState *this)

{
  (*(code *)PTR__NativeState_001bac68)();
  return;
}


// ===== 001b1d40  <EXTERNAL>::facebook::jsi::Value::asObject =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asObject(IRuntime *param_1)

{
  (*(code *)PTR_asObject_001bac70)();
  return;
}


// ===== 001b1d50  <EXTERNAL>::facebook::jsi::Value::~Value =====

void __thiscall facebook::jsi::Value::~Value(Value *this)

{
  (*(code *)PTR__Value_001bac78)();
  return;
}


// ===== 001b1d60  margelo::nitro::JSICache::getOrCreateCache =====

void __thiscall margelo::nitro::JSICache::getOrCreateCache(JSICache *this,Runtime *param_1)

{
  (*(code *)PTR_getOrCreateCache_001bac80)();
  return;
}


// ===== 001b1d70  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     insert(ulong param_1,char *param_2,ulong param_3)

{
  (*(code *)PTR_insert_001bac88)();
  return;
}


// ===== 001b1d80  <EXTERNAL>::std::__ndk1::to_string =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::to_string(ulong param_1)

{
  (*(code *)PTR_to_string_001bac90)();
  return;
}


// ===== 001b1d90  <EXTERNAL>::facebook::jsi::JSError::JSError =====

void __thiscall facebook::jsi::JSError::JSError(void)

{
  (*(code *)PTR_JSError_001bac98)();
  return;
}


// ===== 001b1da0  margelo::nitro::TypeInfo::getCurrentExceptionName =====

void __thiscall margelo::nitro::TypeInfo::getCurrentExceptionName(TypeInfo *this)

{
  (*(code *)PTR_getCurrentExceptionName_001baca0)();
  return;
}


// ===== 001b1db0  <EXTERNAL>::__dynamic_cast =====

void __dynamic_cast(void)

{
  (*(code *)PTR___dynamic_cast_001baca8)();
  return;
}


// ===== 001b1dc0  <EXTERNAL>::facebook::jsi::Value::toString =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::toString(IRuntime *param_1)

{
  (*(code *)PTR_toString_001bacb0)();
  return;
}


// ===== 001b1dd0  <EXTERNAL>::std::__ndk1::mutex::unlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::mutex::unlock(void)

{
  (*(code *)PTR_unlock_001bacb8)();
  return;
}


// ===== 001b1de0  <EXTERNAL>::std::__ndk1::__shared_weak_count::lock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::lock(void)

{
  (*(code *)PTR_lock_001bacc0)();
  return;
}


// ===== 001b1df0  margelo::nitro::Promise<void>::reject =====

void __thiscall margelo::nitro::Promise<void>::reject(Promise<void> *this,exception_ptr *param_1)

{
  (*(code *)PTR_reject_001bacc8)();
  return;
}


// ===== 001b1e00  margelo::nitro::Promise<void>::async =====

void __thiscall margelo::nitro::Promise<void>::async(Promise<void> *this,function *param_1)

{
  (*(code *)PTR_async_001bacd0)();
  return;
}


// ===== 001b1e10  margelo::nitro::Promise<void>::resolve =====

void __thiscall margelo::nitro::Promise<void>::resolve(Promise<void> *this)

{
  (*(code *)PTR_resolve_001bacd8)();
  return;
}


// ===== 001b1e20  margelo::nitro::Promise<void>::addOnResolvedListener =====

void __thiscall
margelo::nitro::Promise<void>::addOnResolvedListener(Promise<void> *this,function *param_1)

{
  (*(code *)PTR_addOnResolvedListener_001bace0)();
  return;
}


// ===== 001b1e30  margelo::nitro::Promise<void>::addOnRejectedListener =====

void __thiscall
margelo::nitro::Promise<void>::addOnRejectedListener(Promise<void> *this,function *param_1)

{
  (*(code *)PTR_addOnRejectedListener_001bace8)();
  return;
}


// ===== 001b1e40  margelo::nitro::Promise<void>::~Promise =====

void __thiscall margelo::nitro::Promise<void>::~Promise(Promise<void> *this)

{
  (*(code *)PTR__Promise_001bacf0)();
  return;
}


// ===== 001b1e50  <EXTERNAL>::std::runtime_error::runtime_error =====

void __thiscall std::runtime_error::runtime_error(runtime_error *this,runtime_error *param_1)

{
  (*(code *)PTR_runtime_error_001bacf8)();
  return;
}


// ===== 001b1e60  <EXTERNAL>::std::exception_ptr::~exception_ptr =====

void __thiscall std::exception_ptr::~exception_ptr(exception_ptr *this)

{
  (*(code *)PTR__exception_ptr_001bad00)();
  return;
}


// ===== 001b1e70  margelo::nitro::ThreadPool::run =====

void __thiscall margelo::nitro::ThreadPool::run(ThreadPool *this,function *param_1)

{
  (*(code *)PTR_run_001bad08)();
  return;
}


// ===== 001b1e80  <EXTERNAL>::std::exception_ptr::operator= =====

void __thiscall std::exception_ptr::operator=(exception_ptr *this,exception_ptr *param_1)

{
  (*(code *)PTR_operator__001bad10)();
  return;
}


// ===== 001b1e90  <EXTERNAL>::std::__ndk1::promise<void>::get_future =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::promise<void>::get_future(void)

{
  (*(code *)PTR_get_future_001bad18)();
  return;
}


// ===== 001b1ea0  <EXTERNAL>::std::current_exception =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::current_exception(void)

{
  (*(code *)PTR_current_exception_001bad20)();
  return;
}


// ===== 001b1eb0  <EXTERNAL>::std::exception::~exception =====

void __thiscall std::exception::~exception(exception *this)

{
  (*(code *)PTR__exception_001bad28)();
  return;
}


// ===== 001b1ec0  <EXTERNAL>::std::__ndk1::future<void>::~future =====

void __thiscall std::__ndk1::future<void>::~future(future<void> *this)

{
  (*(code *)PTR__future_001bad30)();
  return;
}


// ===== 001b1ed0  <EXTERNAL>::std::__ndk1::future<void>::get =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::future<void>::get(void)

{
  (*(code *)PTR_get_001bad38)();
  return;
}


// ===== 001b1ee0  <EXTERNAL>::std::__ndk1::mutex::lock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::mutex::lock(void)

{
  (*(code *)PTR_lock_001bad40)();
  return;
}


// ===== 001b1ef0  <EXTERNAL>::std::__ndk1::promise<void>::promise =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::promise<void>::promise(void)

{
  (*(code *)PTR_promise_001bad48)();
  return;
}


// ===== 001b1f00  <EXTERNAL>::std::__ndk1::promise<void>::~promise =====

void __thiscall std::__ndk1::promise<void>::~promise(promise<void> *this)

{
  (*(code *)PTR__promise_001bad50)();
  return;
}


// ===== 001b1f10  <EXTERNAL>::std::__ndk1::promise<void>::set_value =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::promise<void>::set_value(void)

{
  (*(code *)PTR_set_value_001bad58)();
  return;
}


// ===== 001b1f20  <EXTERNAL>::std::__ndk1::promise<void>::set_exception =====

void std::__ndk1::promise<void>::set_exception(void)

{
  (*(code *)PTR_set_exception_001bad60)();
  return;
}


// ===== 001b1f30  <EXTERNAL>::std::exception_ptr::exception_ptr =====

void __thiscall std::exception_ptr::exception_ptr(exception_ptr *this,exception_ptr *param_1)

{
  (*(code *)PTR_exception_ptr_001bad68)();
  return;
}


// ===== 001b1f40  margelo::nitro::HybridObjectRegistry::createHybridObject =====

void __thiscall
margelo::nitro::HybridObjectRegistry::createHybridObject
          (HybridObjectRegistry *this,basic_string *param_1)

{
  (*(code *)PTR_createHybridObject_001bad70)();
  return;
}


// ===== 001b1f50  margelo::nitro::HybridObjectRegistry::hasHybridObject =====

void margelo::nitro::HybridObjectRegistry::hasHybridObject(basic_string *param_1)

{
  (*(code *)PTR_hasHybridObject_001bad78)();
  return;
}


// ===== 001b1f60  margelo::nitro::HybridObjectRegistry::getAllHybridObjectNames =====

void __thiscall
margelo::nitro::HybridObjectRegistry::getAllHybridObjectNames(HybridObjectRegistry *this)

{
  (*(code *)PTR_getAllHybridObjectNames_001bad80)();
  return;
}


// ===== 001b1f70  <EXTERNAL>::facebook::jsi::Value::asString =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asString(IRuntime *param_1)

{
  (*(code *)PTR_asString_001bad88)();
  return;
}


// ===== 001b1f80  <EXTERNAL>::facebook::jsi::Value::asNumber =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asNumber(void)

{
  (*(code *)PTR_asNumber_001bad90)();
  return;
}


// ===== 001b1f90  <EXTERNAL>::facebook::jsi::Value::~Value =====

void __thiscall facebook::jsi::Value::~Value(Value *this)

{
  (*(code *)PTR__Value_001bad98)();
  return;
}


// ===== 001b1fa0  margelo::nitro::install =====

void margelo::nitro::install(Runtime *param_1)

{
  (*(code *)PTR_install_001bada0)();
  return;
}


// ===== 001b1fb0  margelo::nitro::Dispatcher::installRuntimeGlobalDispatcher =====

void margelo::nitro::Dispatcher::installRuntimeGlobalDispatcher(void)

{
  (*(code *)PTR_installRuntimeGlobalDispatcher_001bada8)();
  return;
}


// ===== 001b1fc0  margelo::nitro::CommonGlobals::defineGlobal =====

void margelo::nitro::CommonGlobals::defineGlobal(void)

{
  (*(code *)PTR_defineGlobal_001badb0)();
  return;
}


// ===== 001b1fd0  margelo::nitro::JSICache::~JSICache =====

void __thiscall margelo::nitro::JSICache::~JSICache(JSICache *this)

{
  (*(code *)PTR__JSICache_001badb8)();
  return;
}


// ===== 001b1fe0  margelo::nitro::ThreadUtils::getThreadName =====

void margelo::nitro::ThreadUtils::getThreadName(void)

{
  (*(code *)PTR_getThreadName_001badc0)();
  return;
}


// ===== 001b1ff0  margelo::nitro::HybridObjectPrototype::createPrototype =====

void __thiscall
margelo::nitro::HybridObjectPrototype::createPrototype
          (HybridObjectPrototype *this,Runtime *param_1,shared_ptr *param_2)

{
  (*(code *)PTR_createPrototype_001badc8)();
  return;
}


// ===== 001b2000  margelo::nitro::HybridObjectPrototype::ensureInitialized =====

void __thiscall
margelo::nitro::HybridObjectPrototype::ensureInitialized(HybridObjectPrototype *this)

{
  (*(code *)PTR_ensureInitialized_001badd0)();
  return;
}


// ===== 001b2010  margelo::nitro::CommonGlobals::Object::defineProperty =====

void margelo::nitro::CommonGlobals::Object::defineProperty
               (Runtime *param_1,Object *param_2,char *param_3,PlainPropertyDescriptor *param_4)

{
  (*(code *)PTR_defineProperty_001badd8)();
  return;
}


// ===== 001b2020  margelo::nitro::CommonGlobals::Object::defineProperty =====

void margelo::nitro::CommonGlobals::Object::defineProperty
               (Runtime *param_1,Object *param_2,char *param_3,ComputedPropertyDescriptor *param_4)

{
  (*(code *)PTR_defineProperty_001bade0)();
  return;
}


// ===== 001b2030  margelo::nitro::CommonGlobals::Object::defineProperty =====

void margelo::nitro::CommonGlobals::Object::defineProperty
               (Runtime *param_1,Object *param_2,char *param_3,
               ComputedReadonlyPropertyDescriptor *param_4)

{
  (*(code *)PTR_defineProperty_001bade8)();
  return;
}


// ===== 001b2040  margelo::nitro::HybridObjectRegistry::getAllRegisteredHybridObjectNamesToString =====

void margelo::nitro::HybridObjectRegistry::getAllRegisteredHybridObjectNamesToString(void)

{
  (*(code *)PTR_getAllRegisteredHybridObjectNamesToString_001badf0)();
  return;
}


// ===== 001b2050  margelo::nitro::Dispatcher::getRuntimeGlobalDispatcherHolder =====

void __thiscall
margelo::nitro::Dispatcher::getRuntimeGlobalDispatcherHolder(Dispatcher *this,Runtime *param_1)

{
  (*(code *)PTR_getRuntimeGlobalDispatcherHolder_001badf8)();
  return;
}


// ===== 001b2060  margelo::nitro::ThreadUtils::isUIThread =====

void margelo::nitro::ThreadUtils::isUIThread(void)

{
  (*(code *)PTR_isUIThread_001bae00)();
  return;
}


// ===== 001b2070  margelo::nitro::CommonGlobals::getKnownGlobalPropertyName =====

void margelo::nitro::CommonGlobals::getKnownGlobalPropertyName(void)

{
  (*(code *)PTR_getKnownGlobalPropertyName_001bae08)();
  return;
}


// ===== 001b2080  margelo::nitro::ThreadPool::addThread =====

void __thiscall margelo::nitro::ThreadPool::addThread(ThreadPool *this)

{
  (*(code *)PTR_addThread_001bae10)();
  return;
}


// ===== 001b2090  margelo::nitro::ThreadPool::ThreadPool =====

void __thiscall
margelo::nitro::ThreadPool::ThreadPool(ThreadPool *this,char *param_1,ulong param_2,ulong param_3)

{
  (*(code *)PTR_ThreadPool_001bae18)();
  return;
}


// ===== 001b20a0  <EXTERNAL>::std::__ndk1::condition_variable::~condition_variable =====

void __thiscall std::__ndk1::condition_variable::~condition_variable(condition_variable *this)

{
  (*(code *)PTR__condition_variable_001bae20)();
  return;
}


// ===== 001b20b0  <EXTERNAL>::std::__ndk1::condition_variable::notify_all =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::condition_variable::notify_all(void)

{
  (*(code *)PTR_notify_all_001bae28)();
  return;
}


// ===== 001b20c0  <EXTERNAL>::std::__ndk1::condition_variable::notify_one =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::condition_variable::notify_one(void)

{
  (*(code *)PTR_notify_one_001bae30)();
  return;
}


// ===== 001b20d0  <EXTERNAL>::std::__ndk1::thread::join =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::thread::join(void)

{
  (*(code *)PTR_join_001bae38)();
  return;
}


// ===== 001b20e0  <EXTERNAL>::__cxa_guard_abort =====

void __cxa_guard_abort(void)

{
  (*(code *)PTR___cxa_guard_abort_001bae40)();
  return;
}


// ===== 001b20f0  <EXTERNAL>::std::__ndk1::thread::~thread =====

void __thiscall std::__ndk1::thread::~thread(thread *this)

{
  (*(code *)PTR__thread_001bae48)();
  return;
}


// ===== 001b2100  <EXTERNAL>::std::__ndk1::__thread_struct::__thread_struct =====

void __thiscall std::__ndk1::__thread_struct::__thread_struct(__thread_struct *this)

{
  (*(code *)PTR___thread_struct_001bae50)();
  return;
}


// ===== 001b2110  <EXTERNAL>::std::__ndk1::__throw_system_error =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__throw_system_error(int param_1,char *param_2)

{
  (*(code *)PTR___throw_system_error_001bae58)(param_1);
  return;
}


// ===== 001b2120  <EXTERNAL>::pthread_create =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_001bae60)((int)__newthread);
  return iVar1;
}


// ===== 001b2130  <EXTERNAL>::std::__ndk1::__thread_local_data =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__thread_local_data(void)

{
  (*(code *)PTR___thread_local_data_001bae68)();
  return;
}


// ===== 001b2140  <EXTERNAL>::pthread_setspecific =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_setspecific(pthread_key_t __key,void *__pointer)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_setspecific_001bae70)(__key);
  return iVar1;
}


// ===== 001b2150  <EXTERNAL>::std::__ndk1::condition_variable::wait =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::condition_variable::wait(unique_lock *param_1)

{
  (*(code *)PTR_wait_001bae78)();
  return;
}


// ===== 001b2160  <EXTERNAL>::std::__ndk1::__thread_struct::~__thread_struct =====

void __thiscall std::__ndk1::__thread_struct::~__thread_struct(__thread_struct *this)

{
  (*(code *)PTR____thread_struct_001bae80)();
  return;
}


// ===== 001b2170  margelo::nitro::CommonGlobals::getGlobalFunction =====

void margelo::nitro::CommonGlobals::getGlobalFunction(void)

{
  (*(code *)PTR_getGlobalFunction_001bae88)();
  return;
}


// ===== 001b2180  <EXTERNAL>::facebook::jsi::Value::Value =====

void __thiscall facebook::jsi::Value::Value(Value *this,Value *param_1)

{
  (*(code *)PTR_Value_001bae90)();
  return;
}


// ===== 001b2190  <EXTERNAL>::__strlen_chk =====

void __strlen_chk(void)

{
  (*(code *)PTR___strlen_chk_001bae98)();
  return;
}


// ===== 001b21a0  <EXTERNAL>::facebook::jsi::Object::getPropertyAsObject =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Object::getPropertyAsObject(IRuntime *param_1,char *param_2)

{
  (*(code *)PTR_getPropertyAsObject_001baea0)();
  return;
}


// ===== 001b21b0  <EXTERNAL>::facebook::jsi::Object::getPropertyAsFunction =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Object::getPropertyAsFunction(IRuntime *param_1,char *param_2)

{
  (*(code *)PTR_getPropertyAsFunction_001baea8)();
  return;
}


// ===== 001b21c0  <EXTERNAL>::__cxa_current_exception_type =====

void __cxa_current_exception_type(void)

{
  (*(code *)PTR___cxa_current_exception_type_001baeb0)();
  return;
}


// ===== 001b21d0  <EXTERNAL>::std::__ndk1::locale::~locale =====

void __thiscall std::__ndk1::locale::~locale(locale *this)

{
  (*(code *)PTR__locale_001baeb8)();
  return;
}


// ===== 001b21e0  <EXTERNAL>::std::__ndk1::regex_error::regex_error =====

void __thiscall std::__ndk1::regex_error::regex_error(void)

{
  (*(code *)PTR_regex_error_001baec0)();
  return;
}


// ===== 001b21f0  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     push_back(char param_1)

{
  (*(code *)PTR_push_back_001baec8)(param_1);
  return;
}


// ===== 001b2200  <EXTERNAL>::std::__ndk1::locale::locale =====

void __thiscall std::__ndk1::locale::locale(locale *this)

{
  (*(code *)PTR_locale_001baed0)();
  return;
}


// ===== 001b2210  <EXTERNAL>::std::__ndk1::locale::use_facet =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::locale::use_facet(id *param_1)

{
  (*(code *)PTR_use_facet_001baed8)();
  return;
}


// ===== 001b2220  <EXTERNAL>::std::__ndk1::locale::locale =====

void __thiscall std::__ndk1::locale::locale(locale *this,locale *param_1)

{
  (*(code *)PTR_locale_001baee0)();
  return;
}


// ===== 001b2230  <EXTERNAL>::std::__ndk1::locale::name =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::locale::name(void)

{
  (*(code *)PTR_name_001baee8)();
  return;
}


// ===== 001b2240  <EXTERNAL>::std::__ndk1::__get_collation_name =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__get_collation_name(char *param_1)

{
  (*(code *)PTR___get_collation_name_001baef0)();
  return;
}


// ===== 001b2250  <EXTERNAL>::memchr =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memchr(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memchr_001baef8)(__s,__c);
  return pvVar1;
}


// ===== 001b2260  <EXTERNAL>::std::__ndk1::__get_classname =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__get_classname(char *param_1,bool param_2)

{
  (*(code *)PTR___get_classname_001baf00)(param_1,param_2);
  return;
}


// ===== 001b2270  facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
~base_owned_ref(base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *this)

{
  (*(code *)PTR__base_owned_ref_001baf08)();
  return;
}


// ===== 001b2280  facebook::jni::detail::getHolder<facebook::jni::detail::HybridData> =====

void __thiscall
facebook::jni::detail::getHolder<facebook::jni::detail::HybridData>
          (detail *this,HybridData *param_1)

{
  (*(code *)PTR_getHolder<facebook_jni_detail_HybridData>_001baf10)();
  return;
}


// ===== 001b2290  facebook::jni::base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::
base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
::~base_owned_ref(base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
                  *this)

{
  (*(code *)PTR__base_owned_ref_001baf18)();
  return;
}


// ===== 001b22a0  facebook::jni::detail::getDestructorField =====

void facebook::jni::detail::getDestructorField(basic_strong_ref *param_1)

{
  (*(code *)PTR_getDestructorField_001baf20)();
  return;
}


// ===== 001b22b0  facebook::jni::JObject::getClass =====

void facebook::jni::JObject::getClass(void)

{
  (*(code *)PTR_getClass_001baf28)();
  return;
}


// ===== 001b22c0  facebook::jni::base_owned_ref<_jclass*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::base_owned_ref<_jclass*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
          (base_owned_ref<_jclass*,facebook::jni::LocalReferenceAllocator> *this)

{
  (*(code *)PTR__base_owned_ref_001baf30)();
  return;
}


// ===== 001b22d0  facebook::jni::base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::
base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
::~base_owned_ref(base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
                  *this)

{
  (*(code *)PTR__base_owned_ref_001baf38)();
  return;
}


// ===== 001b22e0  facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JByteBuffer,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JArrayBuffer::*)(bool),&margelo::nitro::JArrayBuffer::getByteBuffer,margelo::nitro::JArrayBuffer,facebook::jni::basic_strong_ref<facebook::jni::JByteBuffer,facebook::jni::LocalReferenceAllocator>,bool>::dispatch =====

void __thiscall
facebook::jni::detail::
MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JByteBuffer,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JArrayBuffer::*)(bool),&margelo::nitro::JArrayBuffer::getByteBuffer,margelo::nitro::JArrayBuffer,facebook::jni::basic_strong_ref<facebook::jni::JByteBuffer,facebook::jni::LocalReferenceAllocator>,bool>
::dispatch(void)

{
  (*(code *)PTR_dispatch_001baf40)();
  return;
}


// ===== 001b22f0  facebook::jni::getHybridDataFromField =====

void facebook::jni::getHybridDataFromField(JObject *param_1,JField *param_2)

{
  (*(code *)PTR_getHybridDataFromField_001baf48)();
  return;
}


// ===== 001b2300  facebook::jni::detail::HybridClassBase::isHybridClassBase =====

void facebook::jni::detail::HybridClassBase::isHybridClassBase(void)

{
  (*(code *)PTR_isHybridClassBase_001baf50)();
  return;
}


// ===== 001b2310  facebook::jni::throwNPE =====

void facebook::jni::throwNPE(void)

{
  (*(code *)PTR_throwNPE_001baf58)();
  return;
}


// ===== 001b2320  facebook::jni::detail::getHolder<facebook::jni::JObject> =====

void __thiscall
facebook::jni::detail::getHolder<facebook::jni::JObject>(detail *this,JObject *param_1)

{
  (*(code *)PTR_getHolder<facebook_jni_JObject>_001baf60)();
  return;
}


// ===== 001b2330  facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JObject,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JArrayBuffer::*)(),&margelo::nitro::JArrayBuffer::getHardwareBufferBoxed,margelo::nitro::JArrayBuffer,facebook::jni::basic_strong_ref<facebook::jni::JObject,facebook::jni::LocalReferenceAllocator>>::dispatch =====

void facebook::jni::detail::
     MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JObject,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JArrayBuffer::*)(),&margelo::nitro::JArrayBuffer::getHardwareBufferBoxed,margelo::nitro::JArrayBuffer,facebook::jni::basic_strong_ref<facebook::jni::JObject,facebook::jni::LocalReferenceAllocator>>
     ::dispatch(void)

{
  (*(code *)PTR_dispatch_001baf68)();
  return;
}


// ===== 001b2340  facebook::jni::detail::MethodWrapper<int(margelo::nitro::JArrayBuffer::*)(),&margelo::nitro::JArrayBuffer::getBufferSize,margelo::nitro::JArrayBuffer,int>::dispatch =====

void facebook::jni::detail::
     MethodWrapper<int(margelo::nitro::JArrayBuffer::*)(),&margelo::nitro::JArrayBuffer::getBufferSize,margelo::nitro::JArrayBuffer,int>
     ::dispatch(void)

{
  (*(code *)PTR_dispatch_001baf70)();
  return;
}


// ===== 001b2350  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JAnyMap::*)(),&margelo::nitro::JAnyMap::clear,margelo::nitro::JAnyMap,void>::dispatch =====

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JAnyMap::*)(),&margelo::nitro::JAnyMap::clear,margelo::nitro::JAnyMap,void>
     ::dispatch(void)

{
  (*(code *)PTR_dispatch_001baf78)();
  return;
}


// ===== 001b2360  facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::JString>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyMap::*)(),&margelo::nitro::JAnyMap::getAllKeys,margelo::nitro::JAnyMap,facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::JString>,facebook::jni::LocalReferenceAllocator>>::dispatch =====

void facebook::jni::detail::
     MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::JString>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyMap::*)(),&margelo::nitro::JAnyMap::getAllKeys,margelo::nitro::JAnyMap,facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::JString>,facebook::jni::LocalReferenceAllocator>>
     ::dispatch(void)

{
  (*(code *)PTR_dispatch_001baf80)();
  return;
}


// ===== 001b2370  facebook::jni::detail::MethodWrapper<double(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getDouble,margelo::nitro::JAnyMap,double,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::dispatch =====

void facebook::jni::detail::
     MethodWrapper<double(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getDouble,margelo::nitro::JAnyMap,double,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
     ::dispatch(void)

{
  (*(code *)PTR_dispatch_001baf88)();
  return;
}


// ===== 001b2380  facebook::jni::detail::MethodWrapper<long(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getInt64,margelo::nitro::JAnyMap,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::dispatch =====

void facebook::jni::detail::
     MethodWrapper<long(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getInt64,margelo::nitro::JAnyMap,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
     ::dispatch(void)

{
  (*(code *)PTR_dispatch_001baf90)();
  return;
}


// ===== 001b2390  facebook::jni::detail::MethodWrapper<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getString,margelo::nitro::JAnyMap,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::dispatch =====

void facebook::jni::detail::
     MethodWrapper<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getString,margelo::nitro::JAnyMap,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
     ::dispatch(void)

{
  (*(code *)PTR_dispatch_001baf98)();
  return;
}


// ===== 001b23a0  facebook::jni::base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>::
~base_owned_ref(base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator> *this)

{
  (*(code *)PTR__base_owned_ref_001bafa0)();
  return;
}


// ===== 001b23b0  facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getAnyArray,margelo::nitro::JAnyMap,facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::dispatch =====

void facebook::jni::detail::
     MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getAnyArray,margelo::nitro::JAnyMap,facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
     ::dispatch(void)

{
  (*(code *)PTR_dispatch_001bafa8)();
  return;
}


// ===== 001b23c0  facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getAnyObject,margelo::nitro::JAnyMap,facebook::jni::basic_strong_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::dispatch =====

void facebook::jni::detail::
     MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getAnyObject,margelo::nitro::JAnyMap,facebook::jni::basic_strong_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
     ::dispatch(void)

{
  (*(code *)PTR_dispatch_001bafb0)();
  return;
}


// ===== 001b23d0  facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getAnyValue,margelo::nitro::JAnyMap,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::dispatch =====

void facebook::jni::detail::
     MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getAnyValue,margelo::nitro::JAnyMap,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
     ::dispatch(void)

{
  (*(code *)PTR_dispatch_001bafb8)();
  return;
}


// ===== 001b23e0  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,double),&margelo::nitro::JAnyMap::setDouble,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,double>::dispatch =====

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,double),&margelo::nitro::JAnyMap::setDouble,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,double>
     ::dispatch(void)

{
  (*(code *)PTR_dispatch_001bafc0)();
  return;
}


// ===== 001b23f0  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool),&margelo::nitro::JAnyMap::setBoolean,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool>::dispatch =====

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool),&margelo::nitro::JAnyMap::setBoolean,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool>
     ::dispatch(void)

{
  (*(code *)PTR_dispatch_001bafc8)();
  return;
}


// ===== 001b2400  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,long),&margelo::nitro::JAnyMap::setInt64,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,long>::dispatch =====

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,long),&margelo::nitro::JAnyMap::setInt64,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,long>
     ::dispatch(void)

{
  (*(code *)PTR_dispatch_001bafd0)();
  return;
}


// ===== 001b2410  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::setString,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::dispatch =====

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::setString,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
     ::dispatch(void)

{
  (*(code *)PTR_dispatch_001bafd8)();
  return;
}


// ===== 001b2420  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,facebook::jni::alias_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>),&margelo::nitro::JAnyMap::setAnyArray,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,facebook::jni::alias_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>>::dispatch =====

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,facebook::jni::alias_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>),&margelo::nitro::JAnyMap::setAnyArray,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,facebook::jni::alias_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>>
     ::dispatch(void)

{
  (*(code *)PTR_dispatch_001bafe0)();
  return;
}


// ===== 001b2430  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,facebook::jni::alias_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>const&),&margelo::nitro::JAnyMap::setAnyObject,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,facebook::jni::alias_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>const&>::dispatch =====

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,facebook::jni::alias_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>const&),&margelo::nitro::JAnyMap::setAnyObject,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,facebook::jni::alias_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>const&>
     ::dispatch(void)

{
  (*(code *)PTR_dispatch_001bafe8)();
  return;
}


// ===== 001b2440  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>const&),&margelo::nitro::JAnyMap::setAnyValue,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>const&>::dispatch =====

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>const&),&margelo::nitro::JAnyMap::setAnyValue,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>const&>
     ::dispatch(void)

{
  (*(code *)PTR_dispatch_001baff0)();
  return;
}


// ===== 001b2450  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JAnyMap::*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>),&margelo::nitro::JAnyMap::merge,margelo::nitro::JAnyMap,void,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>::dispatch =====

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JAnyMap::*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>),&margelo::nitro::JAnyMap::merge,margelo::nitro::JAnyMap,void,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>
     ::dispatch(void)

{
  (*(code *)PTR_dispatch_001baff8)();
  return;
}


// ===== 001b2460  facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JHashMap<facebook::jni::JString,facebook::jni::JObject>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyMap::*)(),&margelo::nitro::JAnyMap::toHashMap,margelo::nitro::JAnyMap,facebook::jni::basic_strong_ref<facebook::jni::JHashMap<facebook::jni::JString,facebook::jni::JObject>,facebook::jni::LocalReferenceAllocator>>::dispatch =====

void facebook::jni::detail::
     MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JHashMap<facebook::jni::JString,facebook::jni::JObject>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyMap::*)(),&margelo::nitro::JAnyMap::toHashMap,margelo::nitro::JAnyMap,facebook::jni::basic_strong_ref<facebook::jni::JHashMap<facebook::jni::JString,facebook::jni::JObject>,facebook::jni::LocalReferenceAllocator>>
     ::dispatch(void)

{
  (*(code *)PTR_dispatch_001bb000)();
  return;
}


// ===== 001b2470  margelo::nitro::JAnyValue::initHybridString =====

void __thiscall margelo::nitro::JAnyValue::initHybridString(void)

{
  (*(code *)PTR_initHybridString_001bb008)();
  return;
}


// ===== 001b2480  margelo::nitro::JAnyValue::initHybridAnyArray =====

void __thiscall margelo::nitro::JAnyValue::initHybridAnyArray(void)

{
  (*(code *)PTR_initHybridAnyArray_001bb010)();
  return;
}


// ===== 001b2490  margelo::nitro::JAnyValue::initHybridAnyObject =====

void __thiscall margelo::nitro::JAnyValue::initHybridAnyObject(void)

{
  (*(code *)PTR_initHybridAnyObject_001bb018)();
  return;
}


// ===== 001b24a0  facebook::jni::JClass::getMethod<int()> =====

void __thiscall facebook::jni::JClass::getMethod<int()>(JClass *this,char *param_1)

{
  (*(code *)PTR_getMethod<int()>_001bb020)();
  return;
}


// ===== 001b24b0  _JNIEnv::CallIntMethod =====

void _JNIEnv::CallIntMethod(_jobject *param_1,_jmethodID *param_2,...)

{
  (*(code *)PTR_CallIntMethod_001bb028)();
  return;
}


// ===== 001b24c0  _JNIEnv::NewObject =====

void _JNIEnv::NewObject(_jclass *param_1,_jmethodID *param_2,...)

{
  (*(code *)PTR_NewObject_001bb030)();
  return;
}


// ===== 001b24d0  facebook::jni::JClass::getMethod<unsigned_char()> =====

void __thiscall facebook::jni::JClass::getMethod<unsigned_char()>(JClass *this,char *param_1)

{
  (*(code *)PTR_getMethod<unsigned_char()>_001bb038)();
  return;
}


// ===== 001b24e0  _JNIEnv::CallBooleanMethod =====

void _JNIEnv::CallBooleanMethod(_jobject *param_1,_jmethodID *param_2,...)

{
  (*(code *)PTR_CallBooleanMethod_001bb040)();
  return;
}


// ===== 001b24f0  facebook::jni::JClass::getMethod<_jstring*()> =====

void __thiscall facebook::jni::JClass::getMethod<_jstring*()>(JClass *this,char *param_1)

{
  (*(code *)PTR_getMethod<_jstring*()>_001bb048)();
  return;
}


// ===== 001b2500  facebook::jni::base_owned_ref<_jstring*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::base_owned_ref<_jstring*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
          (base_owned_ref<_jstring*,facebook::jni::LocalReferenceAllocator> *this)

{
  (*(code *)PTR__base_owned_ref_001bb050)();
  return;
}


// ===== 001b2510  _JNIEnv::CallObjectMethod =====

void _JNIEnv::CallObjectMethod(_jobject *param_1,_jmethodID *param_2,...)

{
  (*(code *)PTR_CallObjectMethod_001bb058)();
  return;
}


// ===== 001b2520  facebook::jni::detail::MethodWrapper<double(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asDouble,margelo::nitro::JAnyValue,double>::dispatch =====

void facebook::jni::detail::
     MethodWrapper<double(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asDouble,margelo::nitro::JAnyValue,double>
     ::dispatch(void)

{
  (*(code *)PTR_dispatch_001bb060)();
  return;
}


// ===== 001b2530  facebook::jni::detail::MethodWrapper<long(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asInt64,margelo::nitro::JAnyValue,long>::dispatch =====

void facebook::jni::detail::
     MethodWrapper<long(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asInt64,margelo::nitro::JAnyValue,long>
     ::dispatch(void)

{
  (*(code *)PTR_dispatch_001bb068)();
  return;
}


// ===== 001b2540  facebook::jni::detail::MethodWrapper<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asString,margelo::nitro::JAnyValue,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>::dispatch =====

void __thiscall
facebook::jni::detail::
MethodWrapper<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asString,margelo::nitro::JAnyValue,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
::dispatch(void)

{
  (*(code *)PTR_dispatch_001bb070)();
  return;
}


// ===== 001b2550  facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asAnyArray,margelo::nitro::JAnyValue,facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>>::dispatch =====

void __thiscall
facebook::jni::detail::
MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asAnyArray,margelo::nitro::JAnyValue,facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>>
::dispatch(void)

{
  (*(code *)PTR_dispatch_001bb078)();
  return;
}


// ===== 001b2560  facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asAnyObject,margelo::nitro::JAnyValue,facebook::jni::basic_strong_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>>::dispatch =====

void __thiscall
facebook::jni::detail::
MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asAnyObject,margelo::nitro::JAnyValue,facebook::jni::basic_strong_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>>
::dispatch(void)

{
  (*(code *)PTR_dispatch_001bb080)();
  return;
}


// ===== 001b2570  margelo::nitro::JPromise::initHybrid =====

void margelo::nitro::JPromise::initHybrid(void)

{
  (*(code *)PTR_initHybrid_001bb088)();
  return;
}


// ===== 001b2580  facebook::jni::base_owned_ref<facebook::jni::JThrowable,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::base_owned_ref<facebook::jni::JThrowable,facebook::jni::LocalReferenceAllocator>::
~base_owned_ref(base_owned_ref<facebook::jni::JThrowable,facebook::jni::LocalReferenceAllocator>
                *this)

{
  (*(code *)PTR__base_owned_ref_001bb090)();
  return;
}


// ===== 001b2590  facebook::jni::base_owned_ref<facebook::jni::JThrowable,facebook::jni::GlobalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::base_owned_ref<facebook::jni::JThrowable,facebook::jni::GlobalReferenceAllocator>::
~base_owned_ref(base_owned_ref<facebook::jni::JThrowable,facebook::jni::GlobalReferenceAllocator>
                *this)

{
  (*(code *)PTR__base_owned_ref_001bb098)();
  return;
}


// ===== 001b25a0  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JPromise::*)(facebook::jni::alias_ref<facebook::jni::JObject>),&margelo::nitro::JPromise::resolve,margelo::nitro::JPromise,void,facebook::jni::alias_ref<facebook::jni::JObject>>::dispatch =====

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JPromise::*)(facebook::jni::alias_ref<facebook::jni::JObject>),&margelo::nitro::JPromise::resolve,margelo::nitro::JPromise,void,facebook::jni::alias_ref<facebook::jni::JObject>>
     ::dispatch(void)

{
  (*(code *)PTR_dispatch_001bb0a0)();
  return;
}


// ===== 001b25b0  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JPromise::*)(facebook::jni::alias_ref<facebook::jni::JThrowable>),&margelo::nitro::JPromise::reject,margelo::nitro::JPromise,void,facebook::jni::alias_ref<facebook::jni::JThrowable>>::dispatch =====

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JPromise::*)(facebook::jni::alias_ref<facebook::jni::JThrowable>),&margelo::nitro::JPromise::reject,margelo::nitro::JPromise,void,facebook::jni::alias_ref<facebook::jni::JThrowable>>
     ::dispatch(void)

{
  (*(code *)PTR_dispatch_001bb0a8)();
  return;
}


// ===== 001b25c0  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JPromise::*)(facebook::jni::alias_ref<margelo::nitro::JOnResolvedCallback>),&margelo::nitro::JPromise::addOnResolvedListenerJava,margelo::nitro::JPromise,void,facebook::jni::alias_ref<margelo::nitro::JOnResolvedCallback>>::dispatch =====

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JPromise::*)(facebook::jni::alias_ref<margelo::nitro::JOnResolvedCallback>),&margelo::nitro::JPromise::addOnResolvedListenerJava,margelo::nitro::JPromise,void,facebook::jni::alias_ref<margelo::nitro::JOnResolvedCallback>>
     ::dispatch(void)

{
  (*(code *)PTR_dispatch_001bb0b0)();
  return;
}


// ===== 001b25d0  _JNIEnv::CallVoidMethod =====

void _JNIEnv::CallVoidMethod(_jobject *param_1,_jmethodID *param_2,...)

{
  (*(code *)PTR_CallVoidMethod_001bb0b8)();
  return;
}


// ===== 001b25e0  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JPromise::*)(facebook::jni::alias_ref<margelo::nitro::JOnRejectedCallback>),&margelo::nitro::JPromise::addOnRejectedListenerJava,margelo::nitro::JPromise,void,facebook::jni::alias_ref<margelo::nitro::JOnRejectedCallback>>::dispatch =====

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JPromise::*)(facebook::jni::alias_ref<margelo::nitro::JOnRejectedCallback>),&margelo::nitro::JPromise::addOnRejectedListenerJava,margelo::nitro::JPromise,void,facebook::jni::alias_ref<margelo::nitro::JOnRejectedCallback>>
     ::dispatch(void)

{
  (*(code *)PTR_dispatch_001bb0c0)();
  return;
}


// ===== 001b25f0  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JNativeRunnable::*)(),&margelo::nitro::JNativeRunnable::run,margelo::nitro::JNativeRunnable,void>::dispatch =====

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JNativeRunnable::*)(),&margelo::nitro::JNativeRunnable::run,margelo::nitro::JNativeRunnable,void>
     ::dispatch(void)

{
  (*(code *)PTR_dispatch_001bb0c8)();
  return;
}


// ===== 001b2600  <EXTERNAL>::facebook::jni::initialize =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::initialize(_JavaVM *param_1,function *param_2)

{
  (*(code *)PTR_initialize_001bb0d0)();
  return;
}


// ===== 001b2610  margelo::nitro::JHybridObject::CxxPart::registerNatives =====

void margelo::nitro::JHybridObject::CxxPart::registerNatives(void)

{
  (*(code *)PTR_registerNatives_001bb0d8)();
  return;
}


// ===== 001b2620  margelo::nitro::JNitroModules::registerNatives =====

void margelo::nitro::JNitroModules::registerNatives(void)

{
  (*(code *)PTR_registerNatives_001bb0e0)();
  return;
}


// ===== 001b2630  <EXTERNAL>::facebook::jni::findClassLocal =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::findClassLocal(char *param_1)

{
  (*(code *)PTR_findClassLocal_001bb0e8)();
  return;
}


// ===== 001b2640  <EXTERNAL>::facebook::jni::Environment::current =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::Environment::current(void)

{
  (*(code *)PTR_current_001bb0f0)();
  return;
}


// ===== 001b2650  <EXTERNAL>::facebook::jni::throwCppExceptionIf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwCppExceptionIf(bool param_1)

{
  (*(code *)PTR_throwCppExceptionIf_001bb0f8)(param_1);
  return;
}


// ===== 001b2660  <EXTERNAL>::facebook::jni::detail::HybridData::create =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::detail::HybridData::create(void)

{
  (*(code *)PTR_create_001bb100)();
  return;
}


// ===== 001b2670  <EXTERNAL>::facebook::jni::detail::HybridDestructor::setNativePointer =====

void facebook::jni::detail::HybridDestructor::setNativePointer(void)

{
  (*(code *)PTR_setNativePointer_001bb108)();
  return;
}


// ===== 001b2680  <EXTERNAL>::facebook::jni::throwPendingJniExceptionAsCppException =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwPendingJniExceptionAsCppException(void)

{
  (*(code *)PTR_throwPendingJniExceptionAsCppException_001bb110)();
  return;
}


// ===== 001b2690  <EXTERNAL>::facebook::jni::JByteBuffer::order =====

void facebook::jni::JByteBuffer::order(void)

{
  (*(code *)PTR_order_001bb118)();
  return;
}


// ===== 001b26a0  <EXTERNAL>::facebook::jni::JByteOrder::nativeOrder =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::JByteOrder::nativeOrder(void)

{
  (*(code *)PTR_nativeOrder_001bb120)();
  return;
}


// ===== 001b26b0  <EXTERNAL>::std::bad_alloc::bad_alloc =====

void __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
  (*(code *)PTR_bad_alloc_001bb128)();
  return;
}


// ===== 001b26c0  <EXTERNAL>::facebook::jni::ThreadScope::WithClassLoader =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::ThreadScope::WithClassLoader(function *param_1)

{
  (*(code *)PTR_WithClassLoader_001bb130)();
  return;
}


// ===== 001b26d0  <EXTERNAL>::facebook::jni::JBuffer::getDirectCapacity =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::JBuffer::getDirectCapacity(void)

{
  (*(code *)PTR_getDirectCapacity_001bb138)();
  return;
}


// ===== 001b26e0  <EXTERNAL>::facebook::jni::JBuffer::getDirectAddress =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::JBuffer::getDirectAddress(void)

{
  (*(code *)PTR_getDirectAddress_001bb140)();
  return;
}


// ===== 001b26f0  <EXTERNAL>::facebook::jni::JBuffer::isDirect =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::JBuffer::isDirect(void)

{
  (*(code *)PTR_isDirect_001bb148)();
  return;
}


// ===== 001b2700  <EXTERNAL>::facebook::jni::detail::JniEnvCacher::JniEnvCacher =====

void __thiscall
facebook::jni::detail::JniEnvCacher::JniEnvCacher(JniEnvCacher *this,_JNIEnv *param_1)

{
  (*(code *)PTR_JniEnvCacher_001bb150)();
  return;
}


// ===== 001b2710  <EXTERNAL>::facebook::jni::translatePendingCppExceptionToJavaException =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::translatePendingCppExceptionToJavaException(void)

{
  (*(code *)PTR_translatePendingCppExceptionToJavaException_001bb158)();
  return;
}


// ===== 001b2720  <EXTERNAL>::facebook::jni::detail::JniEnvCacher::~JniEnvCacher =====

void __thiscall facebook::jni::detail::JniEnvCacher::~JniEnvCacher(JniEnvCacher *this)

{
  (*(code *)PTR__JniEnvCacher_001bb160)();
  return;
}


// ===== 001b2730  <EXTERNAL>::facebook::jni::JByteBuffer::allocateDirect =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::JByteBuffer::allocateDirect(int param_1)

{
  (*(code *)PTR_allocateDirect_001bb168)(param_1);
  return;
}


// ===== 001b2740  <EXTERNAL>::facebook::jni::JByteBuffer::wrapBytes =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::JByteBuffer::wrapBytes(uchar *param_1,ulong param_2)

{
  (*(code *)PTR_wrapBytes_001bb170)();
  return;
}


// ===== 001b2750  <EXTERNAL>::facebook::jni::findClassStatic =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::findClassStatic(char *param_1)

{
  (*(code *)PTR_findClassStatic_001bb178)();
  return;
}


// ===== 001b2760  <EXTERNAL>::facebook::jni::throwNewJavaException =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwNewJavaException(char *param_1,char *param_2)

{
  (*(code *)PTR_throwNewJavaException_001bb180)();
  return;
}


// ===== 001b2770  <EXTERNAL>::facebook::jni::detail::HybridDestructor::getNativePointer =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::detail::HybridDestructor::getNativePointer(void)

{
  (*(code *)PTR_getNativePointer_001bb188)();
  return;
}


// ===== 001b2780  <EXTERNAL>::facebook::jni::JString::toStdString =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::JString::toStdString(void)

{
  (*(code *)PTR_toStdString_001bb190)();
  return;
}


// ===== 001b2790  margelo::nitro::JAnyMap::getAllKeys =====

void margelo::nitro::JAnyMap::getAllKeys(void)

{
  (*(code *)PTR_getAllKeys_001bb198)();
  return;
}


// ===== 001b27a0  <EXTERNAL>::facebook::jni::make_jstring =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::make_jstring(char *param_1)

{
  (*(code *)PTR_make_jstring_001bb1a0)();
  return;
}


// ===== 001b27b0  margelo::nitro::JAnyMap::getAnyArray =====

void __thiscall margelo::nitro::JAnyMap::getAnyArray(JAnyMap *this,basic_string *param_1)

{
  (*(code *)PTR_getAnyArray_001bb1a8)();
  return;
}


// ===== 001b27c0  margelo::nitro::JAnyMap::getAnyObject =====

void __thiscall margelo::nitro::JAnyMap::getAnyObject(JAnyMap *this,basic_string *param_1)

{
  (*(code *)PTR_getAnyObject_001bb1b0)();
  return;
}


// ===== 001b27d0  margelo::nitro::JAnyMap::setAnyArray =====

void __thiscall margelo::nitro::JAnyMap::setAnyArray(void)

{
  (*(code *)PTR_setAnyArray_001bb1b8)();
  return;
}


// ===== 001b27e0  margelo::nitro::JAnyMap::setAnyObject =====

void __thiscall
margelo::nitro::JAnyMap::setAnyObject(JAnyMap *this,basic_string *param_1,alias_ref *param_2)

{
  (*(code *)PTR_setAnyObject_001bb1c0)();
  return;
}


// ===== 001b27f0  margelo::nitro::JAnyMap::setAnyValue =====

void __thiscall
margelo::nitro::JAnyMap::setAnyValue(JAnyMap *this,basic_string *param_1,alias_ref *param_2)

{
  (*(code *)PTR_setAnyValue_001bb1c8)();
  return;
}


// ===== 001b2800  margelo::nitro::JAnyMap::toHashMap =====

void margelo::nitro::JAnyMap::toHashMap(void)

{
  (*(code *)PTR_toHashMap_001bb1d0)();
  return;
}


// ===== 001b2810  margelo::nitro::JAnyMap::fromMap =====

void margelo::nitro::JAnyMap::fromMap(void)

{
  (*(code *)PTR_fromMap_001bb1d8)();
  return;
}


// ===== 001b2820  margelo::nitro::JHardwareBufferUtils::copyHardwareBufferBoxed =====

void margelo::nitro::JHardwareBufferUtils::copyHardwareBufferBoxed(void)

{
  (*(code *)PTR_copyHardwareBufferBoxed_001bb1e0)();
  return;
}


// ===== 001b2830  margelo::nitro::JHardwareBufferUtils::copyHardwareBufferBoxedNew =====

void margelo::nitro::JHardwareBufferUtils::copyHardwareBufferBoxedNew(void)

{
  (*(code *)PTR_copyHardwareBufferBoxedNew_001bb1e8)();
  return;
}


// ===== 001b2840  <EXTERNAL>::facebook::jni::getJavaExceptionForCppException =====

void facebook::jni::getJavaExceptionForCppException(void)

{
  (*(code *)PTR_getJavaExceptionForCppException_001bb1f0)();
  return;
}


// ===== 001b2850  <EXTERNAL>::vsnprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vsnprintf_001bb1f8)((int)__s);
  return iVar1;
}


// ===== 001b2860  margelo::nitro::JAnyMap::anyValueToJObject =====

void margelo::nitro::JAnyMap::anyValueToJObject(AnyValue *param_1)

{
  (*(code *)PTR_anyValueToJObject_001bb200)();
  return;
}


// ===== 001b2870  margelo::nitro::JAnyMap::anyArrayToJList =====

void __thiscall margelo::nitro::JAnyMap::anyArrayToJList(JAnyMap *this,vector *param_1)

{
  (*(code *)PTR_anyArrayToJList_001bb208)();
  return;
}


// ===== 001b2880  margelo::nitro::JAnyMap::anyObjectToJHashMap =====

void __thiscall margelo::nitro::JAnyMap::anyObjectToJHashMap(JAnyMap *this,unordered_map *param_1)

{
  (*(code *)PTR_anyObjectToJHashMap_001bb210)();
  return;
}


// ===== 001b2890  margelo::nitro::JAnyMap::jObjectToAnyValue =====

void __thiscall margelo::nitro::JAnyMap::jObjectToAnyValue(void)

{
  (*(code *)PTR_jObjectToAnyValue_001bb218)();
  return;
}


// ===== 001b28a0  margelo::nitro::JAnyMap::jListToAnyArray =====

void __thiscall margelo::nitro::JAnyMap::jListToAnyArray(void)

{
  (*(code *)PTR_jListToAnyArray_001bb220)();
  return;
}


// ===== 001b28b0  margelo::nitro::JAnyMap::jHashMapToAnyObject =====

void __thiscall margelo::nitro::JAnyMap::jHashMapToAnyObject(void)

{
  (*(code *)PTR_jHashMapToAnyObject_001bb228)();
  return;
}


// ===== 001b28c0  _JNIEnv::CallStaticObjectMethod =====

void _JNIEnv::CallStaticObjectMethod(_jclass *param_1,_jmethodID *param_2,...)

{
  (*(code *)PTR_CallStaticObjectMethod_001bb230)();
  return;
}


// ===== 001b28d0  margelo::nitro::JHybridObject::CxxPart::getOrCreateHybridObject =====

void margelo::nitro::JHybridObject::CxxPart::getOrCreateHybridObject(void)

{
  (*(code *)PTR_getOrCreateHybridObject_001bb238)();
  return;
}


// ===== 001b28e0  margelo::nitro::JHybridObject::CxxPart::getJavaPart =====

void margelo::nitro::JHybridObject::CxxPart::getJavaPart(void)

{
  (*(code *)PTR_getJavaPart_001bb240)();
  return;
}


// ===== 001b28f0  margelo::nitro::JHybridObject::CxxPart::initHybrid =====

void __thiscall margelo::nitro::JHybridObject::CxxPart::initHybrid(void)

{
  (*(code *)PTR_initHybrid_001bb248)();
  return;
}


// ===== 001b2900  margelo::nitro::JHybridObject::~JHybridObject =====

void __thiscall margelo::nitro::JHybridObject::~JHybridObject(JHybridObject *this)

{
  (*(code *)PTR__JHybridObject_001bb250)();
  return;
}


// ===== 001b2910  margelo::nitro::JHybridObject::getExternalMemorySize =====

void __thiscall margelo::nitro::JHybridObject::getExternalMemorySize(JHybridObject *this)

{
  (*(code *)PTR_getExternalMemorySize_001bb258)();
  return;
}


// ===== 001b2920  margelo::nitro::JHybridObject::equals =====

void __thiscall margelo::nitro::JHybridObject::equals(JHybridObject *this,shared_ptr *param_1)

{
  (*(code *)PTR_equals_001bb260)();
  return;
}


// ===== 001b2930  margelo::nitro::JHybridObject::dispose =====

void __thiscall margelo::nitro::JHybridObject::dispose(JHybridObject *this)

{
  (*(code *)PTR_dispose_001bb268)();
  return;
}


// ===== 001b2940  margelo::nitro::JHybridObject::toString =====

void __thiscall margelo::nitro::JHybridObject::toString(JHybridObject *this)

{
  (*(code *)PTR_toString_001bb270)();
  return;
}


// ===== 001b2950  margelo::nitro::JHybridObject::CxxPart::CxxPart =====

void __thiscall margelo::nitro::JHybridObject::CxxPart::CxxPart(void)

{
  (*(code *)PTR_CxxPart_001bb278)();
  return;
}


// ===== 001b2960  _JNIEnv::CallStaticVoidMethod =====

void _JNIEnv::CallStaticVoidMethod(_jclass *param_1,_jmethodID *param_2,...)

{
  (*(code *)PTR_CallStaticVoidMethod_001bb280)();
  return;
}


// ===== 001b2970  margelo::nitro::JNitroModules::initHybrid =====

void margelo::nitro::JNitroModules::initHybrid(void)

{
  (*(code *)PTR_initHybrid_001bb288)();
  return;
}


// ===== 001b2980  margelo::nitro::JNitroModules::install =====

void __thiscall margelo::nitro::JNitroModules::install(void)

{
  (*(code *)PTR_install_001bb290)();
  return;
}


// ===== 001b2990  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JNitroModules::*)(long,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<facebook::react::CallInvokerHolder,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>),&margelo::nitro::JNitroModules::install,margelo::nitro::JNitroModules,void,long,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<facebook::react::CallInvokerHolder,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>::dispatch =====

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JNitroModules::*)(long,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<facebook::react::CallInvokerHolder,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>),&margelo::nitro::JNitroModules::install,margelo::nitro::JNitroModules,void,long,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<facebook::react::CallInvokerHolder,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>
     ::dispatch(void)

{
  (*(code *)PTR_dispatch_001bb298)();
  return;
}


// ===== 001b29a0  <EXTERNAL>::dl_iterate_phdr =====

void dl_iterate_phdr(void)

{
  (*(code *)PTR_dl_iterate_phdr_001bb2a0)();
  return;
}


// ===== 001b29b0  <EXTERNAL>::fwrite =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_001bb2a8)();
  return sVar1;
}


// ===== 001b29c0  <EXTERNAL>::memmove =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_001bb2b0)();
  return pvVar1;
}


// ===== 001b29d0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_001bb2b8)();
  return;
}


// ===== 001b29e0  <EXTERNAL>::malloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_001bb2c0)();
  return pvVar1;
}


// ===== 001b29f0  <EXTERNAL>::strncmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_001bb2c8)((int)__s1);
  return iVar1;
}


// ===== 001b2a00  <EXTERNAL>::fprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_001bb2d0)((int)__stream);
  return iVar1;
}


// ===== 001b2a10  <EXTERNAL>::__stack_chk_fail =====

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_001bb2d8)();
  return;
}


// ===== 001b2a20  <EXTERNAL>::pthread_rwlock_wrlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_wrlock_001bb2e0)((int)__rwlock);
  return iVar1;
}


// ===== 001b2a30  <EXTERNAL>::syscall =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_syscall_001bb2e8)();
  return lVar1;
}


// ===== 001b2a40  <EXTERNAL>::pthread_rwlock_unlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_unlock_001bb2f0)((int)__rwlock);
  return iVar1;
}


// ===== 001b2a50  <EXTERNAL>::memcpy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_001bb2f8)();
  return pvVar1;
}


// ===== 001b2a60  <EXTERNAL>::getauxval =====

void getauxval(void)

{
  (*(code *)PTR_getauxval_001bb300)();
  return;
}


// ===== 001b2a70  <EXTERNAL>::abort =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_001bb308)();
  return;
}


// ===== 001b2a80  <EXTERNAL>::__system_property_get =====

void __system_property_get(void)

{
  (*(code *)PTR___system_property_get_001bb310)();
  return;
}


// ===== 001b2a90  <EXTERNAL>::getpid =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_001bb318)();
  return _Var1;
}


// ===== 001b2aa0  <EXTERNAL>::pthread_rwlock_rdlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_rdlock_001bb320)((int)__rwlock);
  return iVar1;
}


// ===== 001b2ab0  <EXTERNAL>::memset =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_001bb328)(__s,__c);
  return pvVar1;
}


// ===== 001b2ac0  <EXTERNAL>::fflush =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_001bb330)((int)__stream);
  return iVar1;
}


// ===== 001c1000  <EXTERNAL>::__cxa_finalize =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001c1008  <EXTERNAL>::__cxa_atexit =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_atexit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001c1010  <EXTERNAL>::__register_atfork =====

/* WARNING: Control flow encountered bad instruction data */

void __register_atfork(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001c1018  <EXTERNAL>::__gxx_personality_v0 =====

/* WARNING: Control flow encountered bad instruction data */

void __gxx_personality_v0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001c1020  <EXTERNAL>::__cxa_allocate_exception =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_allocate_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001c1028  <EXTERNAL>::std::__ndk1::operator+ =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::operator+(char *param_1,basic_string *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001c1030  <EXTERNAL>::std::runtime_error::runtime_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::runtime_error::runtime_error(runtime_error *this,basic_string *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001c1038  <EXTERNAL>::std::runtime_error::~runtime_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001c1040  <EXTERNAL>::__cxa_throw =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_throw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001c1048  <EXTERNAL>::__cxa_free_exception =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_free_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001c1050  <EXTERNAL>::__cxa_begin_catch =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_begin_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001c1058  <EXTERNAL>::std::terminate =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001c1060  <EXTERNAL>::std::length_error::~length_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::length_error::~length_error(length_error *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001c1068  <EXTERNAL>::std::logic_error::logic_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::logic_error::logic_error(logic_error *this,char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001c1070  <EXTERNAL>::std::bad_array_new_length::bad_array_new_length =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::bad_array_new_length::bad_array_new_length(bad_array_new_length *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001c1078  <EXTERNAL>::std::bad_array_new_length::~bad_array_new_length =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::bad_array_new_length::~bad_array_new_length(bad_array_new_length *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001c1080  <EXTERNAL>::operator.new =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001c1088  <EXTERNAL>::operator.delete =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001c1090  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     append(char *param_1,ulong param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001c1098  <EXTERNAL>::strlen =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001c10a0  <EXTERNAL>::__cxa_rethrow =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_rethrow(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001c10a8  <EXTERNAL>::__cxa_end_catch =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_end_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001c10b0  <EXTERNAL>::std::__ndk1::__next_prime =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__next_prime(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001c10b8  <EXTERNAL>::memcmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001c10e0  <EXTERNAL>::operator.new[] =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new__(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001c10e8  <EXTERNAL>::std::runtime_error::runtime_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::runtime_error::runtime_error(runtime_error *this,char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001c10f0  <EXTERNAL>::facebook::jsi::MutableBuffer::~MutableBuffer =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::MutableBuffer::~MutableBuffer(MutableBuffer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001c10f8  <EXTERNAL>::pthread_self =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

pthread_t pthread_self(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001c1100  <EXTERNAL>::std::__ndk1::__shared_weak_count::~__shared_weak_count =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::__shared_weak_count::~__shared_weak_count(__shared_weak_count *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001c1108  <EXTERNAL>::std::__ndk1::__shared_weak_count::__get_deleter =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::__get_deleter(type_info *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001c1110  <EXTERNAL>::operator.delete[] =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete__(void *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001c1118  <EXTERNAL>::std::__ndk1::mutex::~mutex =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::mutex::~mutex(mutex *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


