// ===== 00365624  margelo::nitro::rive::JHybridViewModelColorPropertySpec::getValueAsync =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelColorPropertySpec::getValueAsync() */

void __thiscall
margelo::nitro::rive::JHybridViewModelColorPropertySpec::getValueAsync
          (JHybridViewModelColorPropertySpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getValueAsync();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00365668  margelo::nitro::rive::JHybridViewModelColorPropertySpec::set =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelColorPropertySpec::set(double) */

void __thiscall
margelo::nitro::rive::JHybridViewModelColorPropertySpec::set
          (JHybridViewModelColorPropertySpec *this,double param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    set(this + *(long *)(*(long *)this + -0x58),param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003656ac  margelo::nitro::rive::JHybridViewModelColorPropertySpec::addListener =====

/* virtual thunk to
   margelo::nitro::rive::JHybridViewModelColorPropertySpec::addListener(std::__ndk1::function<void
   (double)> const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelColorPropertySpec::addListener
          (JHybridViewModelColorPropertySpec *this,function *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    addListener((function *)(this + *(long *)(*(long *)this + -0x60)));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003656f0  margelo::nitro::rive::JHybridViewModelColorPropertySpec::removeListeners =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelColorPropertySpec::removeListeners() */

void __thiscall
margelo::nitro::rive::JHybridViewModelColorPropertySpec::removeListeners
          (JHybridViewModelColorPropertySpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    removeListeners(this + *(long *)(*(long *)this + -0x68));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00365734  margelo::nitro::rive::JHybridViewModelEnumPropertySpec::JavaPart::getJHybridViewModelEnumPropertySpec =====

/* margelo::nitro::rive::JHybridViewModelEnumPropertySpec::JavaPart::getJHybridViewModelEnumPropertySpec()
    */

void __thiscall
margelo::nitro::rive::JHybridViewModelEnumPropertySpec::JavaPart::
getJHybridViewModelEnumPropertySpec(JavaPart *this)

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
     (lVar2 = __dynamic_cast(local_38,PTR_typeinfo_00395e60,PTR_typeinfo_00396f10,0xffffffffffffffff
                            ), lVar2 == 0)) {
    *in_x8 = 0;
    in_x8[1] = 0;
    this_00 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 003657fc to 00365807 has its CatchHandler @ 0036583c */
    std::runtime_error::runtime_error
              (this_00,"Failed to downcast JHybridObject to JHybridViewModelEnumPropertySpec!");
    if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* try { // try from 0036581c to 00365833 has its CatchHandler @ 00365834 */
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


// ===== 00365878  FUN_00365878 =====

void FUN_00365878(long *param_1)

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


// ===== 00365904  margelo::nitro::rive::JHybridViewModelEnumPropertySpec::CxxPart::initHybrid =====

/* margelo::nitro::rive::JHybridViewModelEnumPropertySpec::CxxPart::initHybrid(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelEnumPropertySpec::CxxPart,
   margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart, void>::_javaobject*>) */

void __thiscall
margelo::nitro::rive::JHybridViewModelEnumPropertySpec::CxxPart::initHybrid
          (undefined8 *param_1,CxxPart *this)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_0036595c(&local_30,*(undefined8 *)this);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036595c  FUN_0036595c =====

void FUN_0036595c(undefined8 *param_1,undefined8 param_2)

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
                    /* try { // try from 00365994 to 0036599b has its CatchHandler @ 00365a78 */
  local_48 = param_2;
  margelo::nitro::JHybridObject::CxxPart::CxxPart(pCVar2,&local_48);
  *(undefined **)pCVar2 = PTR_vtable_00396f18 + 0x10;
                    /* try { // try from 003659ac to 003659b3 has its CatchHandler @ 00365a70 */
  facebook::jni::detail::HybridData::create();
  uVar5 = *param_1;
                    /* try { // try from 003659b8 to 003659d3 has its CatchHandler @ 00365a8c */
  plVar3 = (long *)facebook::jni::Environment::current();
  lVar4 = (**(code **)(*plVar3 + 200))(plVar3,uVar5);
  facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 003659dc to 003659e7 has its CatchHandler @ 00365a40 */
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
                    /* try { // try from 00365a08 to 00365a1b has its CatchHandler @ 00365a88 */
    plVar3 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb8))(plVar3,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00365ac4  FUN_00365ac4 =====

void FUN_00365ac4(long *param_1)

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
                    /* try { // try from 00365b00 to 00365b13 has its CatchHandler @ 00365b50 */
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


// ===== 00365b54  margelo::nitro::rive::JHybridViewModelEnumPropertySpec::CxxPart::createHybridObject =====

/* margelo::nitro::rive::JHybridViewModelEnumPropertySpec::CxxPart::createHybridObject(facebook::jni::basic_strong_ref<margelo::nitro::JHybridObject::JavaPart,
   facebook::jni::LocalReferenceAllocator> const&) */

void margelo::nitro::rive::JHybridViewModelEnumPropertySpec::CxxPart::createHybridObject
               (basic_strong_ref *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
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
  
  puVar1 = PTR_target_class_00396f30;
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*in_x1 == 0) {
LAB_00365e60:
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00365e6c to 00365e77 has its CatchHandler @ 00366004 */
    param_1 = (basic_strong_ref *)
              std::runtime_error::runtime_error
                        (this,
                         "Failed to cast JHybridObject::JavaPart to JHybridViewModelEnumPropertySpec::JavaPart!"
                        );
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 00365e88 to 00365e9f has its CatchHandler @ 00366000 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_003660d0;
  }
  if (((*PTR_target_class_00396f38 & 1) == 0) &&
     (param_1 = (basic_strong_ref *)__cxa_guard_acquire(PTR_target_class_00396f38),
     (int)param_1 != 0)) {
                    /* try { // try from 00365eb0 to 00365ebf has its CatchHandler @ 00365fc4 */
    facebook::jni::findClassStatic(PTR_kBaseName_00396f40);
    *(undefined8 *)puVar1 = local_60;
    param_1 = (basic_strong_ref *)__cxa_guard_release(PTR_target_class_00396f38);
  }
  if (*(long *)puVar1 == 0) {
    if (*(long *)(lVar2 + 0x28) != local_58) goto LAB_003660d0;
    FUN_00261580("java/lang/ClassCastException","Could not find class %s.",PTR_kBaseName_00396f40);
LAB_00365f04:
                    /* try { // try from 00365f04 to 00365f13 has its CatchHandler @ 00365ff0 */
    param_1 = (basic_strong_ref *)FUN_002615d4(local_80,&local_68);
    uVar8 = (ulong)local_80 | 1;
    if ((local_80[0] & 1) != 0) {
      uVar8 = local_70;
    }
    if (*(long *)(lVar2 + 0x28) != local_58) goto LAB_003660d0;
                    /* try { // try from 00365f38 to 00365f53 has its CatchHandler @ 00365fd8 */
    FUN_0026171c("java/lang/ClassCastException","Tried to cast from %s to %s.",uVar8,
                 PTR_kBaseName_00396f40);
  }
  else {
                    /* try { // try from 00365bac to 00365bbf has its CatchHandler @ 00366058 */
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5,*in_x1);
    local_68 = lVar6;
                    /* try { // try from 00365bc8 to 00365bdf has its CatchHandler @ 00366054 */
    plVar5 = (long *)facebook::jni::Environment::current();
    cVar4 = (**(code **)(*plVar5 + 0x58))(plVar5,lVar6,*(undefined8 *)puVar1);
    if (cVar4 == '\0') goto LAB_00365f04;
    lVar10 = *in_x1;
    if (lVar10 == 0) {
      local_88 = 0;
    }
    else {
                    /* try { // try from 00365bf0 to 00365c0b has its CatchHandler @ 0036605c */
      plVar5 = (long *)facebook::jni::Environment::current();
      local_88 = (**(code **)(*plVar5 + 200))(plVar5,lVar10);
      facebook::jni::throwPendingJniExceptionAsCppException();
      if (local_88 == 0) {
        pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
        param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar9);
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 00365fac to 00365fc3 has its CatchHandler @ 0036605c */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(pbVar9,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
        }
        goto LAB_003660d0;
      }
    }
    if (lVar6 != 0) {
                    /* try { // try from 00365c28 to 00365c3b has its CatchHandler @ 00366050 */
      plVar5 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar5 + 0xb8))(plVar5,lVar6);
    }
    if (local_88 == 0) goto LAB_00365e60;
                    /* try { // try from 00365c40 to 00365c47 has its CatchHandler @ 0036603c */
    plVar5 = (long *)operator_new(0xa8);
    puVar1 = PTR_vtable_00395e70;
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_00390500;
    plVar11 = plVar5 + 3;
    *plVar11 = (long)(puVar1 + 0x10);
    puVar3 = PTR_PTR_00396f00;
                    /* try { // try from 00365c78 to 00365c93 has its CatchHandler @ 00366034 */
    margelo::nitro::HybridObject::HybridObject((HybridObject *)(plVar5 + 5),PTR_PTR_00396f00 + 0x58)
    ;
    puVar1 = PTR_construction_vtable_00396f08 + 0x68;
    plVar5[5] = (long)(PTR_construction_vtable_00396f08 + 0x100);
    plVar5[3] = (long)puVar1;
                    /* try { // try from 00365cac to 00365cc7 has its CatchHandler @ 00366068 */
    plVar7 = (long *)facebook::jni::Environment::current();
    uVar8 = (**(code **)(*plVar7 + 200))(plVar7,local_88);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 00365ccc to 00365cdb has its CatchHandler @ 00366024 */
    local_80[0] = uVar8;
    margelo::nitro::JHybridObject::JHybridObject((JHybridObject *)(plVar5 + 0x13),puVar3 + 0xa8);
    uVar8 = local_80[0];
    if (local_80[0] != 0) {
                    /* try { // try from 00365ce4 to 00365cf7 has its CatchHandler @ 0036604c */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,uVar8);
    }
                    /* try { // try from 00365cf8 to 00365d13 has its CatchHandler @ 00366060 */
    plVar7 = (long *)facebook::jni::Environment::current();
    uVar8 = (**(code **)(*plVar7 + 200))(plVar7,local_88);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 00365d18 to 00365d27 has its CatchHandler @ 00366014 */
    local_80[0] = uVar8;
    FUN_00357adc(plVar5 + 0x11,puVar3 + 0x80,uVar8);
    if (uVar8 != 0) {
                    /* try { // try from 00365d2c to 00365d3f has its CatchHandler @ 00366048 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,uVar8);
    }
    puVar3 = PTR_vtable_00396ef8;
    puVar1 = PTR_vtable_00396ef8 + 0x80;
    plVar5[5] = (long)(PTR_vtable_00396ef8 + 0x118);
    *plVar11 = (long)puVar1;
    plVar5[0x11] = (long)(puVar3 + 0x198);
    plVar5[0x13] = (long)(puVar3 + 0x1f8);
                    /* try { // try from 00365d68 to 00365d83 has its CatchHandler @ 00366070 */
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
      *in_x8 = (long)plVar11 + *(long *)(plVar5[3] + -0x80);
      in_x8[1] = (long)plVar5;
      if (local_88 != 0) {
                    /* try { // try from 00365e1c to 00365e2f has its CatchHandler @ 00366044 */
        plVar5 = (long *)facebook::jni::Environment::current();
        param_1 = (basic_strong_ref *)(**(code **)(*plVar5 + 0xb8))(plVar5,local_88);
      }
      if (*(long *)(lVar2 + 0x28) == local_58) {
        return;
      }
      goto LAB_003660d0;
    }
  }
  pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
  param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar9);
  if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 00365f74 to 00365f8b has its CatchHandler @ 00366070 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pbVar9,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
  }
LAB_003660d0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 003660d4  FUN_003660d4 =====

void FUN_003660d4(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00366100 to 00366113 has its CatchHandler @ 00366140 */
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


// ===== 00366144  FUN_00366144 =====

void FUN_00366144(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00367060();
  FUN_00356a9c(param_1 + 0x70,PTR_PTR_00396f00 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(param_1 + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(param_1 + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003661c4  FUN_003661c4 =====

void FUN_003661c4(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00367060();
  FUN_00356a9c(param_1 + 0x70,PTR_PTR_00396f00 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(param_1 + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(param_1 + 0x10));
  facebook::jsi::NativeState::~NativeState(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036624c  margelo::nitro::rive::JHybridViewModelEnumPropertySpec::getValue =====

/* margelo::nitro::rive::JHybridViewModelEnumPropertySpec::getValue() */

void __thiscall
margelo::nitro::rive::JHybridViewModelEnumPropertySpec::getValue
          (JHybridViewModelEnumPropertySpec *this)

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
  if (((DAT_0039e708 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039e708), iVar2 != 0)) {
                    /* try { // try from 00366304 to 0036631b has its CatchHandler @ 00366330 */
    FUN_00367390(&local_40);
    DAT_0039e700 = facebook::jni::JClass::
                   getMethod<facebook::jni::basic_strong_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>()>
                             ((JClass *)&local_40,"getValue");
    __cxa_guard_release(&DAT_0039e708);
  }
  p_Var6 = *(_jmethodID **)(this + 8);
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  lVar4 = _JNIEnv::CallObjectMethod(p_Var3,p_Var6,DAT_0039e700);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_40 = lVar4;
                    /* try { // try from 003662a8 to 003662b3 has its CatchHandler @ 00366344 */
  facebook::jni::JString::toStdString();
  lVar4 = local_40;
  if (local_40 != 0) {
                    /* try { // try from 003662bc to 003662cf has its CatchHandler @ 0036636c */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00366370  margelo::nitro::rive::JHybridViewModelEnumPropertySpec::setValue =====

/* margelo::nitro::rive::JHybridViewModelEnumPropertySpec::setValue(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelEnumPropertySpec::setValue
          (JHybridViewModelEnumPropertySpec *this,basic_string *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  _jobject *p_Var4;
  long *plVar5;
  basic_string *pbVar6;
  _jmethodID *p_Var7;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039e718 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039e718), iVar3 != 0)) {
                    /* try { // try from 00366434 to 0036644b has its CatchHandler @ 00366464 */
    FUN_00367390(&local_40);
    DAT_0039e710 = FUN_00348580(&local_40,"setValue");
    __cxa_guard_release(&DAT_0039e718);
  }
  pbVar6 = *(basic_string **)(param_1 + 0x10);
  p_Var7 = *(_jmethodID **)(this + 8);
  if (((byte)*param_1 & 1) == 0) {
    pbVar6 = param_1 + 1;
  }
  facebook::jni::make_jstring((char *)pbVar6);
  lVar2 = local_40;
                    /* try { // try from 003663c8 to 003663e3 has its CatchHandler @ 0036647c */
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var4,p_Var7,DAT_0039e710,lVar2);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (local_40 != 0) {
                    /* try { // try from 003663ec to 003663ff has its CatchHandler @ 00366478 */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003664a4  margelo::nitro::rive::JHybridViewModelEnumPropertySpec::getValueAsync =====

/* margelo::nitro::rive::JHybridViewModelEnumPropertySpec::getValueAsync() */

void margelo::nitro::rive::JHybridViewModelEnumPropertySpec::getValueAsync(void)

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
  if (((DAT_0039e728 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039e728), iVar4 != 0)) {
                    /* try { // try from 003666b8 to 003666cf has its CatchHandler @ 0036678c */
    FUN_00367390(&local_90);
    DAT_0039e720 = FUN_0031e0a0(&local_90,"getValueAsync");
    __cxa_guard_release(&DAT_0039e728);
  }
  p_Var13 = *(_jmethodID **)(in_x0 + 8);
  p_Var5 = (_jobject *)facebook::jni::Environment::current();
  lVar6 = _JNIEnv::CallObjectMethod(p_Var5,p_Var13,DAT_0039e720);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_98 = lVar6;
                    /* try { // try from 00366508 to 0036650f has its CatchHandler @ 00366830 */
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
                    /* try { // try from 00366534 to 0036653b has its CatchHandler @ 00366820 */
  puVar8 = (undefined8 *)operator_new(0x20);
  puVar8[2] = 0;
  *puVar8 = &PTR____shared_weak_count_003902d0;
  puVar8[1] = 0;
  puVar3 = PTR_hybridDataField_00396038;
  puVar8[3] = ppuVar7;
  in_x8[1] = puVar8;
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 00366704 to 00366707 has its CatchHandler @ 00366770 */
    uVar9 = FUN_0031e19c(local_90);
    *(undefined8 *)PTR_hybridDataField_00396030 = uVar9;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 00366564 to 00366577 has its CatchHandler @ 0036683c */
  puVar2 = PTR_hybridDataField_00396030;
  uVar9 = facebook::jni::getHybridDataFromField
                    ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uStack_88 = *in_x8;
  local_80 = in_x8[1];
  if (local_80 != 0) {
    FUN_00259a00(1,local_80 + 8);
  }
  local_90 = &PTR_FUN_00390330;
                    /* try { // try from 003665ac to 003665b3 has its CatchHandler @ 003667e0 */
  local_70 = &local_90;
  FUN_0031e2bc(uVar9,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar11 = &local_90;
LAB_003665d4:
    (*(code *)(*pppuVar11)[lVar6])();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar6 = 5;
    pppuVar11 = local_70;
    goto LAB_003665d4;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0036674c to 0036674f has its CatchHandler @ 0036676c */
    uVar9 = FUN_0031e19c(local_90);
    *(undefined8 *)puVar2 = uVar9;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 003665e8 to 003665f7 has its CatchHandler @ 0036683c */
  uVar10 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uVar9 = *in_x8;
  lVar6 = in_x8[1];
  if (lVar6 != 0) {
    FUN_00259a00(1,lVar6 + 8);
  }
  local_90 = &PTR_FUN_003903b0;
                    /* try { // try from 0036662c to 00366633 has its CatchHandler @ 003667a0 */
  uStack_88 = uVar9;
  local_80 = lVar6;
  local_70 = &local_90;
  FUN_0031e5cc(uVar10,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar11 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_00366660;
    lVar6 = 5;
    pppuVar11 = local_70;
  }
  (*(code *)(*pppuVar11)[lVar6])();
LAB_00366660:
  lVar6 = local_98;
  if (local_98 != 0) {
                    /* try { // try from 00366668 to 0036667b has its CatchHandler @ 00366838 */
    plVar12 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar12 + 0xb8))(plVar12,lVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036686c  margelo::nitro::rive::JHybridViewModelEnumPropertySpec::set =====

/* margelo::nitro::rive::JHybridViewModelEnumPropertySpec::set(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelEnumPropertySpec::set
          (JHybridViewModelEnumPropertySpec *this,basic_string *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  _jobject *p_Var4;
  long *plVar5;
  basic_string *pbVar6;
  _jmethodID *p_Var7;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039e738 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039e738), iVar3 != 0)) {
                    /* try { // try from 00366930 to 00366947 has its CatchHandler @ 00366960 */
    FUN_00367390(&local_40);
    DAT_0039e730 = FUN_00348580(&local_40,&DAT_001d4cc6);
    __cxa_guard_release(&DAT_0039e738);
  }
  pbVar6 = *(basic_string **)(param_1 + 0x10);
  p_Var7 = *(_jmethodID **)(this + 8);
  if (((byte)*param_1 & 1) == 0) {
    pbVar6 = param_1 + 1;
  }
  facebook::jni::make_jstring((char *)pbVar6);
  lVar2 = local_40;
                    /* try { // try from 003668c4 to 003668df has its CatchHandler @ 00366978 */
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var4,p_Var7,DAT_0039e730,lVar2);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (local_40 != 0) {
                    /* try { // try from 003668e8 to 003668fb has its CatchHandler @ 00366974 */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003669a0  margelo::nitro::rive::JHybridViewModelEnumPropertySpec::addListener =====

/* margelo::nitro::rive::JHybridViewModelEnumPropertySpec::addListener(std::__ndk1::function<void
   (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&)> const&) */

void margelo::nitro::rive::JHybridViewModelEnumPropertySpec::addListener(function *param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  _jobject *p_Var4;
  long lVar5;
  long *plVar6;
  long lVar7;
  bad_alloc *this;
  long in_x8;
  _jmethodID *p_Var8;
  undefined8 uVar9;
  undefined8 local_50;
  long local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039e748 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039e748), iVar3 != 0)) {
                    /* try { // try from 00366ba4 to 00366bbb has its CatchHandler @ 00366cb8 */
    FUN_00367390(&local_40);
    DAT_0039e740 = FUN_0035d274(&local_40,"addListener_cxx");
    __cxa_guard_release(&DAT_0039e748);
  }
  p_Var8 = *(_jmethodID **)(param_1 + 8);
  FUN_0035d2f8(&local_40);
  lVar7 = local_40;
  local_48 = local_40;
                    /* try { // try from 003669f4 to 00366a13 has its CatchHandler @ 00366d20 */
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::CallObjectMethod(p_Var4,p_Var8,DAT_0039e740,lVar7);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (lVar7 != 0) {
                    /* try { // try from 00366a1c to 00366a2f has its CatchHandler @ 00366cfc */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,lVar7);
  }
  if (((*PTR_cls_003945e8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_cls_003945e8), iVar3 != 0))
  {
                    /* try { // try from 00366be4 to 00366bf7 has its CatchHandler @ 00366ca4 */
    facebook::jni::findClassStatic(PTR_kBaseName_003945f0);
    __cxa_guard_release(PTR_cls_003945e8);
  }
  uVar9 = *(undefined8 *)PTR_cls_003945e0;
                    /* try { // try from 00366a4c to 00366a67 has its CatchHandler @ 00366d18 */
  plVar6 = (long *)facebook::jni::Environment::current();
  cVar2 = (**(code **)(*plVar6 + 0x100))(plVar6,lVar5,uVar9);
  if (cVar2 == '\0') {
                    /* try { // try from 00366b54 to 00366b5f has its CatchHandler @ 00366cec */
    FUN_003595b8(&local_40,lVar5);
    local_48 = local_40;
    local_40 = 0;
    local_50 = 0;
                    /* try { // try from 00366b6c to 00366b73 has its CatchHandler @ 00366ccc */
    FUN_00359668();
    FUN_0035971c(&local_48);
    FUN_003597d8(&local_50);
    FUN_00359848(&local_40);
  }
  else {
    lVar7 = lVar5;
    if (lVar5 != 0) {
                    /* try { // try from 00366a74 to 00366a8f has its CatchHandler @ 00366d1c */
      plVar6 = (long *)facebook::jni::Environment::current();
      lVar7 = (**(code **)(*plVar6 + 200))(plVar6,lVar5);
      facebook::jni::throwPendingJniExceptionAsCppException();
      if (lVar7 == 0) {
        this = (bad_alloc *)__cxa_allocate_exception(8);
        if (*(long *)(lVar1 + 0x28) == local_38) {
          std::bad_alloc::bad_alloc(this);
                    /* try { // try from 00366c70 to 00366c87 has its CatchHandler @ 00366d1c */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(this,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
        }
        goto LAB_00366d44;
      }
    }
    local_48 = lVar7;
    if (((*PTR_hybridDataField_003945d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_hybridDataField_003945d8), iVar3 != 0)) {
      facebook::jni::JObject::getClass();
                    /* try { // try from 00366c28 to 00366c2b has its CatchHandler @ 00366c88 */
      uVar9 = FUN_0025dae8(local_40);
      *(undefined8 *)PTR_hybridDataField_003945d0 = uVar9;
      facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
      ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
                       *)&local_40);
      __cxa_guard_release(PTR_hybridDataField_003945d8);
    }
                    /* try { // try from 00366aa8 to 00366af7 has its CatchHandler @ 00366d00 */
    lVar7 = facebook::jni::getHybridDataFromField
                      ((JObject *)&local_48,(JField *)PTR_hybridDataField_003945d0);
    plVar6 = *(long **)(lVar7 + 0x30);
    if (plVar6 == (long *)0x0) {
LAB_00366adc:
      *(long **)(in_x8 + 0x20) = plVar6;
    }
    else {
      if (plVar6 != (long *)(lVar7 + 0x10)) {
        plVar6 = (long *)(**(code **)(*plVar6 + 0x10))();
        goto LAB_00366adc;
      }
      *(long *)(in_x8 + 0x20) = in_x8;
      (**(code **)(*plVar6 + 0x18))();
    }
    lVar7 = local_48;
    if (local_48 != 0) {
                    /* try { // try from 00366b00 to 00366b13 has its CatchHandler @ 00366cf4 */
      plVar6 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,lVar7);
    }
  }
  if (lVar5 != 0) {
                    /* try { // try from 00366b1c to 00366b2f has its CatchHandler @ 00366cf8 */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,lVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_00366d44:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00366d48  margelo::nitro::rive::JHybridViewModelEnumPropertySpec::removeListeners =====

/* margelo::nitro::rive::JHybridViewModelEnumPropertySpec::removeListeners() */

void __thiscall
margelo::nitro::rive::JHybridViewModelEnumPropertySpec::removeListeners
          (JHybridViewModelEnumPropertySpec *this)

{
  long lVar1;
  int iVar2;
  _jobject *p_Var3;
  _jmethodID *p_Var4;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039e758 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039e758), iVar2 != 0)) {
                    /* try { // try from 00366dc8 to 00366ddf has its CatchHandler @ 00366df4 */
    FUN_00367390(auStack_40);
    DAT_0039e750 = FUN_0034236c(auStack_40,"removeListeners");
    __cxa_guard_release(&DAT_0039e758);
  }
  p_Var4 = *(_jmethodID **)(this + 8);
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var3,p_Var4,DAT_0039e750);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    facebook::jni::throwPendingJniExceptionAsCppException();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00366e20  FUN_00366e20 =====

void FUN_00366e20(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_00367060(this);
  FUN_00356a9c(this + 0x70,PTR_PTR_00396f00 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00366eac  FUN_00366eac =====

void FUN_00366eac(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_00367060(this);
  FUN_00356a9c(this + 0x70,PTR_PTR_00396f00 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  facebook::jsi::NativeState::~NativeState(this);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00366f40  FUN_00366f40 =====

void FUN_00366f40(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_00367060(this);
  FUN_00356a9c(this + 0x70,PTR_PTR_00396f00 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00366fcc  FUN_00366fcc =====

void FUN_00366fcc(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_00367060(this);
  FUN_00356a9c(this + 0x70,PTR_PTR_00396f00 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  facebook::jsi::NativeState::~NativeState(this);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00367060  FUN_00367060 =====

void FUN_00367060(long *param_1)

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
  
  puVar2 = PTR_vtable_00396ef8;
  local_50 = (long *)&local_70;
  pppuVar3 = &local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1[2] = (long)(PTR_vtable_00396ef8 + 0x118);
  *param_1 = (long)(puVar2 + 0x80);
  param_1[0x10] = (long)(puVar2 + 0x1f8);
  param_1[0xe] = (long)(puVar2 + 0x198);
  local_70 = &PTR_FUN_00390480;
  plStack_68 = param_1;
                    /* try { // try from 003670c0 to 003670c7 has its CatchHandler @ 0036713c */
  facebook::jni::ThreadScope::WithClassLoader((function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar5 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_003670f4;
    lVar5 = 5;
    pppuVar3 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar3 + lVar5 * 8))();
LAB_003670f4:
  lVar5 = param_1[1];
  if (lVar5 != 0) {
                    /* try { // try from 003670fc to 0036710f has its CatchHandler @ 00367140 */
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


// ===== 00367144  FUN_00367144 =====

void FUN_00367144(void *param_1)

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


// ===== 0036717c  FUN_0036717c =====

void FUN_0036717c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00390480;
  puVar2[1] = uVar4;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003671d8  FUN_003671d8 =====

void FUN_003671d8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00390480;
  param_2[1] = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00367220  FUN_00367220 =====

void FUN_00367220(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00367258  FUN_00367258 =====

void FUN_00367258(void *param_1)

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


// ===== 00367290  FUN_00367290 =====

void FUN_00367290(long param_1)

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
                    /* try { // try from 003672bc to 003672cf has its CatchHandler @ 003672fc */
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


// ===== 00367300  FUN_00367300 =====

void FUN_00367300(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00396f20) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00367350  FUN_00367350 =====

undefined * FUN_00367350(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00396f28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00367390  FUN_00367390 =====

void FUN_00367390(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00396f50 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00396f50), iVar2 != 0))
  {
                    /* try { // try from 00367400 to 00367413 has its CatchHandler @ 00367424 */
    facebook::jni::findClassStatic(PTR_kBaseName_00396f58);
    __cxa_guard_release(PTR_cls_00396f50);
  }
  *param_1 = *(undefined8 *)PTR_cls_00396f48;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00367450  FUN_00367450 =====

void FUN_00367450(long *param_1)

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


// ===== 003674dc  FUN_003674dc =====

void FUN_003674dc(long *param_1)

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


// ===== 00367568  FUN_00367568 =====

void FUN_00367568(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_003903b0;
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


// ===== 00367600  FUN_00367600 =====

void FUN_00367600(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_003903b0;
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


// ===== 0036768c  FUN_0036768c =====

void FUN_0036768c(long param_1)

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
  *puVar4 = &PTR_FUN_003903b0;
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


// ===== 00367704  FUN_00367704 =====

void FUN_00367704(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_003903b0;
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


// ===== 00367768  FUN_00367768 =====

void FUN_00367768(long param_1)

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


// ===== 003677f4  FUN_003677f4 =====

void FUN_003677f4(void *param_1)

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


// ===== 00367874  FUN_00367874 =====

void FUN_00367874(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  exception_ptr aeStack_98 [8];
  JniException aJStack_90 [48];
  undefined8 local_60;
  JniException aJStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60 = *param_2;
  facebook::jni::JniException::JniException(aJStack_58,&local_60);
  uVar2 = *(undefined8 *)(param_1 + 8);
                    /* try { // try from 003678ac to 003678b7 has its CatchHandler @ 00367920 */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_0031ef0c(aeStack_98,aJStack_90);
                    /* try { // try from 003678c4 to 003678cf has its CatchHandler @ 00367908 */
  FUN_0035e4a8(uVar2,aeStack_98);
  std::exception_ptr::~exception_ptr(aeStack_98);
  facebook::jni::JniException::~JniException(aJStack_90);
  facebook::jni::JniException::~JniException(aJStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00367948  FUN_00367948 =====

void FUN_00367948(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive32JHybridViewModelEnumPropertySpec13getValueAsyncEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00367998  FUN_00367998 =====

pointer_____offset_0x10___ * FUN_00367998(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_00390410;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003679d8  FUN_003679d8 =====

void FUN_003679d8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00390330;
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


// ===== 00367a70  FUN_00367a70 =====

void FUN_00367a70(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00390330;
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


// ===== 00367afc  FUN_00367afc =====

void FUN_00367afc(long param_1)

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
  *puVar4 = &PTR_FUN_00390330;
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


// ===== 00367b74  FUN_00367b74 =====

void FUN_00367b74(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00390330;
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


// ===== 00367bd8  FUN_00367bd8 =====

void FUN_00367bd8(long param_1)

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


// ===== 00367c64  FUN_00367c64 =====

void FUN_00367c64(void *param_1)

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


// ===== 00367ce4  FUN_00367ce4 =====

void FUN_00367ce4(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  byte local_48 [16];
  void *local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = *param_2;
  uVar2 = *(undefined8 *)(param_1 + 8);
  facebook::jni::JString::toStdString();
                    /* try { // try from 00367d18 to 00367d23 has its CatchHandler @ 00367d54 */
  FUN_0035ec7c(uVar2,local_48);
  if ((local_48[0] & 1) != 0) {
    operator_delete(local_38);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00367d84  FUN_00367d84 =====

void FUN_00367d84(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive32JHybridViewModelEnumPropertySpec13getValueAsyncEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00367dd4  FUN_00367dd4 =====

pointer_____offset_0x10___ * FUN_00367dd4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_00390390;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00367e14  FUN_00367e14 =====

void FUN_00367e14(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_00390500;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00367e58  FUN_00367e58 =====

void FUN_00367e58(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_00390500;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00367eb0  FUN_00367eb0 =====

void FUN_00367eb0(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00367ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(param_1 + 0x18))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00367ef0  FUN_00367ef0 =====

void FUN_00367ef0(void *param_1)

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


// ===== 00367f28  margelo::nitro::rive::JHybridViewModelEnumPropertySpec::CxxPart::registerNatives =====

/* margelo::nitro::rive::JHybridViewModelEnumPropertySpec::CxxPart::registerNatives() */

void margelo::nitro::rive::JHybridViewModelEnumPropertySpec::CxxPart::registerNatives(void)

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
  puStack_58 = PTR_kDescriptor_0038f958;
  local_60 = PTR_s_initHybrid_0038f950;
  local_50 = PTR_call_0038f960;
  pcVar9 = (char *)operator_new(0x40);
  uVar7 = s_Lcom_margelo_nitro_rive_HybridVi_001d7775._33_8_;
  uVar6 = s_Lcom_margelo_nitro_rive_HybridVi_001d7775._25_8_;
  uVar5 = s_Lcom_margelo_nitro_rive_HybridVi_001d7775._17_8_;
  uVar4 = s_Lcom_margelo_nitro_rive_HybridVi_001d7775._9_8_;
  uVar3 = s_Lcom_margelo_nitro_rive_HybridVi_001d7775._1_8_;
  uVar2 = CONCAT26(s_Lcom_margelo_nitro_rive_HybridVi_001d7775._47_2_,
                   s_Lcom_margelo_nitro_rive_HybridVi_001d7775._41_6_);
  pcVar9[0x3e] = '\0';
  *(undefined8 *)(pcVar9 + 0x28) = uVar2;
  *(undefined8 *)(pcVar9 + 0x20) = uVar7;
  *(undefined8 *)(pcVar9 + 8) = uVar4;
  *(undefined8 *)pcVar9 = uVar3;
  *(undefined8 *)(pcVar9 + 0x18) = uVar6;
  *(undefined8 *)(pcVar9 + 0x10) = uVar5;
  uVar2 = CONCAT62(s_Lcom_margelo_nitro_rive_HybridVi_001d7775._49_6_,
                   s_Lcom_margelo_nitro_rive_HybridVi_001d7775._47_2_);
  *(undefined8 *)(pcVar9 + 0x36) = s_Lcom_margelo_nitro_rive_HybridVi_001d7775._55_8_;
  *(undefined8 *)(pcVar9 + 0x2e) = uVar2;
                    /* try { // try from 00367f90 to 00367f97 has its CatchHandler @ 00368008 */
  facebook::jni::findClassLocal(pcVar9);
  operator_delete(pcVar9);
                    /* try { // try from 00367fa0 to 00367fc7 has its CatchHandler @ 0036801c */
  plVar10 = (long *)facebook::jni::Environment::current();
  iVar8 = (**(code **)(*plVar10 + 0x6b8))(plVar10,local_40,&local_60,1);
  facebook::jni::throwCppExceptionIf(iVar8 != 0);
  if (local_40 != 0) {
                    /* try { // try from 00367fd0 to 00367fe3 has its CatchHandler @ 00368018 */
    plVar10 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar10 + 0xb8))(plVar10,local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00368044  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelEnumPropertySpec::CxxPart,margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridViewModelEnumPropertySpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelEnumPropertySpec::CxxPart,margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   (*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelEnumPropertySpec::CxxPart,
   margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart, void>::_javaobject*>),
   &margelo::nitro::rive::JHybridViewModelEnumPropertySpec::CxxPart::initHybrid,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelEnumPropertySpec::CxxPart,
   margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart, void>::_javaobject*,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>>::call(_JNIEnv*, _jobject*) */

undefined8
facebook::jni::detail::
FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelEnumPropertySpec::CxxPart,margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridViewModelEnumPropertySpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelEnumPropertySpec::CxxPart,margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>
::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  JniEnvCacher aJStack_48 [24];
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_48,param_1);
                    /* try { // try from 00368070 to 0036807b has its CatchHandler @ 003680ac */
  FUN_0036595c(&local_30,param_2);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003680f8  margelo::nitro::rive::JHybridViewModelEnumPropertySpec::getValue =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelEnumPropertySpec::getValue() */

void __thiscall
margelo::nitro::rive::JHybridViewModelEnumPropertySpec::getValue
          (JHybridViewModelEnumPropertySpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getValue(this + *(long *)(*(long *)this + -0x40));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036813c  margelo::nitro::rive::JHybridViewModelEnumPropertySpec::setValue =====

/* virtual thunk to
   margelo::nitro::rive::JHybridViewModelEnumPropertySpec::setValue(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelEnumPropertySpec::setValue
          (JHybridViewModelEnumPropertySpec *this,basic_string *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    setValue(this + *(long *)(*(long *)this + -0x48),param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00368180  margelo::nitro::rive::JHybridViewModelEnumPropertySpec::getValueAsync =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelEnumPropertySpec::getValueAsync() */

void __thiscall
margelo::nitro::rive::JHybridViewModelEnumPropertySpec::getValueAsync
          (JHybridViewModelEnumPropertySpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getValueAsync();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003681c4  margelo::nitro::rive::JHybridViewModelEnumPropertySpec::set =====

/* virtual thunk to
   margelo::nitro::rive::JHybridViewModelEnumPropertySpec::set(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelEnumPropertySpec::set
          (JHybridViewModelEnumPropertySpec *this,basic_string *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    set(this + *(long *)(*(long *)this + -0x58),param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00368208  margelo::nitro::rive::JHybridViewModelEnumPropertySpec::addListener =====

/* virtual thunk to
   margelo::nitro::rive::JHybridViewModelEnumPropertySpec::addListener(std::__ndk1::function<void
   (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&)> const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelEnumPropertySpec::addListener
          (JHybridViewModelEnumPropertySpec *this,function *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    addListener((function *)(this + *(long *)(*(long *)this + -0x60)));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036824c  margelo::nitro::rive::JHybridViewModelEnumPropertySpec::removeListeners =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelEnumPropertySpec::removeListeners() */

void __thiscall
margelo::nitro::rive::JHybridViewModelEnumPropertySpec::removeListeners
          (JHybridViewModelEnumPropertySpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    removeListeners(this + *(long *)(*(long *)this + -0x68));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00368290  margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::JavaPart::getJHybridViewModelTriggerPropertySpec =====

/* margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::JavaPart::getJHybridViewModelTriggerPropertySpec()
    */

void __thiscall
margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::JavaPart::
getJHybridViewModelTriggerPropertySpec(JavaPart *this)

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
     (lVar2 = __dynamic_cast(local_38,PTR_typeinfo_00395e60,PTR_typeinfo_00396f78,0xffffffffffffffff
                            ), lVar2 == 0)) {
    *in_x8 = 0;
    in_x8[1] = 0;
    this_00 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00368358 to 00368363 has its CatchHandler @ 00368398 */
    std::runtime_error::runtime_error
              (this_00,"Failed to downcast JHybridObject to JHybridViewModelTriggerPropertySpec!");
    if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* try { // try from 00368378 to 0036838f has its CatchHandler @ 00368390 */
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


// ===== 003683d4  FUN_003683d4 =====

void FUN_003683d4(long *param_1)

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


// ===== 00368460  margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::CxxPart::initHybrid =====

/* margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::CxxPart::initHybrid(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::CxxPart,
   margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart, void>::_javaobject*>) */

void __thiscall
margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::CxxPart::initHybrid
          (undefined8 *param_1,CxxPart *this)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_003684b8(&local_30,*(undefined8 *)this);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003684b8  FUN_003684b8 =====

void FUN_003684b8(undefined8 *param_1,undefined8 param_2)

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
                    /* try { // try from 003684f0 to 003684f7 has its CatchHandler @ 003685d4 */
  local_48 = param_2;
  margelo::nitro::JHybridObject::CxxPart::CxxPart(pCVar2,&local_48);
  *(undefined **)pCVar2 = PTR_vtable_00396f80 + 0x10;
                    /* try { // try from 00368508 to 0036850f has its CatchHandler @ 003685cc */
  facebook::jni::detail::HybridData::create();
  uVar5 = *param_1;
                    /* try { // try from 00368514 to 0036852f has its CatchHandler @ 003685e8 */
  plVar3 = (long *)facebook::jni::Environment::current();
  lVar4 = (**(code **)(*plVar3 + 200))(plVar3,uVar5);
  facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 00368538 to 00368543 has its CatchHandler @ 0036859c */
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
                    /* try { // try from 00368564 to 00368577 has its CatchHandler @ 003685e4 */
    plVar3 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb8))(plVar3,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00368620  FUN_00368620 =====

void FUN_00368620(long *param_1)

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
                    /* try { // try from 0036865c to 0036866f has its CatchHandler @ 003686ac */
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


// ===== 003686b0  margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::CxxPart::createHybridObject =====

/* margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::CxxPart::createHybridObject(facebook::jni::basic_strong_ref<margelo::nitro::JHybridObject::JavaPart,
   facebook::jni::LocalReferenceAllocator> const&) */

void margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::CxxPart::createHybridObject
               (basic_strong_ref *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
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
  
  puVar1 = PTR_target_class_00396fc8;
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*in_x1 == 0) {
LAB_003689bc:
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 003689c8 to 003689d3 has its CatchHandler @ 00368b60 */
    param_1 = (basic_strong_ref *)
              std::runtime_error::runtime_error
                        (this,
                         "Failed to cast JHybridObject::JavaPart to JHybridViewModelTriggerPropertySpec::JavaPart!"
                        );
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 003689e4 to 003689fb has its CatchHandler @ 00368b5c */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_00368c2c;
  }
  if (((*PTR_target_class_00396fd0 & 1) == 0) &&
     (param_1 = (basic_strong_ref *)__cxa_guard_acquire(PTR_target_class_00396fd0),
     (int)param_1 != 0)) {
                    /* try { // try from 00368a0c to 00368a1b has its CatchHandler @ 00368b20 */
    facebook::jni::findClassStatic(PTR_kBaseName_00396fd8);
    *(undefined8 *)puVar1 = local_60;
    param_1 = (basic_strong_ref *)__cxa_guard_release(PTR_target_class_00396fd0);
  }
  if (*(long *)puVar1 == 0) {
    if (*(long *)(lVar2 + 0x28) != local_58) goto LAB_00368c2c;
    FUN_00261580("java/lang/ClassCastException","Could not find class %s.",PTR_kBaseName_00396fd8);
LAB_00368a60:
                    /* try { // try from 00368a60 to 00368a6f has its CatchHandler @ 00368b4c */
    param_1 = (basic_strong_ref *)FUN_002615d4(local_80,&local_68);
    uVar8 = (ulong)local_80 | 1;
    if ((local_80[0] & 1) != 0) {
      uVar8 = local_70;
    }
    if (*(long *)(lVar2 + 0x28) != local_58) goto LAB_00368c2c;
                    /* try { // try from 00368a94 to 00368aaf has its CatchHandler @ 00368b34 */
    FUN_0026171c("java/lang/ClassCastException","Tried to cast from %s to %s.",uVar8,
                 PTR_kBaseName_00396fd8);
  }
  else {
                    /* try { // try from 00368708 to 0036871b has its CatchHandler @ 00368bb4 */
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5,*in_x1);
    local_68 = lVar6;
                    /* try { // try from 00368724 to 0036873b has its CatchHandler @ 00368bb0 */
    plVar5 = (long *)facebook::jni::Environment::current();
    cVar4 = (**(code **)(*plVar5 + 0x58))(plVar5,lVar6,*(undefined8 *)puVar1);
    if (cVar4 == '\0') goto LAB_00368a60;
    lVar10 = *in_x1;
    if (lVar10 == 0) {
      local_88 = 0;
    }
    else {
                    /* try { // try from 0036874c to 00368767 has its CatchHandler @ 00368bb8 */
      plVar5 = (long *)facebook::jni::Environment::current();
      local_88 = (**(code **)(*plVar5 + 200))(plVar5,lVar10);
      facebook::jni::throwPendingJniExceptionAsCppException();
      if (local_88 == 0) {
        pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
        param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar9);
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 00368b08 to 00368b1f has its CatchHandler @ 00368bb8 */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(pbVar9,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
        }
        goto LAB_00368c2c;
      }
    }
    if (lVar6 != 0) {
                    /* try { // try from 00368784 to 00368797 has its CatchHandler @ 00368bac */
      plVar5 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar5 + 0xb8))(plVar5,lVar6);
    }
    if (local_88 == 0) goto LAB_003689bc;
                    /* try { // try from 0036879c to 003687a3 has its CatchHandler @ 00368b98 */
    plVar5 = (long *)operator_new(0xa8);
    puVar1 = PTR_vtable_00395e70;
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_00390ee0;
    plVar11 = plVar5 + 3;
    *plVar11 = (long)(puVar1 + 0x10);
    puVar3 = PTR_PTR_00396f68;
                    /* try { // try from 003687d4 to 003687ef has its CatchHandler @ 00368b90 */
    margelo::nitro::HybridObject::HybridObject((HybridObject *)(plVar5 + 5),PTR_PTR_00396f68 + 0x58)
    ;
    puVar1 = PTR_construction_vtable_00396f70 + 0x50;
    plVar5[5] = (long)(PTR_construction_vtable_00396f70 + 0xd0);
    plVar5[3] = (long)puVar1;
                    /* try { // try from 00368808 to 00368823 has its CatchHandler @ 00368bc4 */
    plVar7 = (long *)facebook::jni::Environment::current();
    uVar8 = (**(code **)(*plVar7 + 200))(plVar7,local_88);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 00368828 to 00368837 has its CatchHandler @ 00368b80 */
    local_80[0] = uVar8;
    margelo::nitro::JHybridObject::JHybridObject((JHybridObject *)(plVar5 + 0x13),puVar3 + 0xa8);
    uVar8 = local_80[0];
    if (local_80[0] != 0) {
                    /* try { // try from 00368840 to 00368853 has its CatchHandler @ 00368ba8 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,uVar8);
    }
                    /* try { // try from 00368854 to 0036886f has its CatchHandler @ 00368bbc */
    plVar7 = (long *)facebook::jni::Environment::current();
    uVar8 = (**(code **)(*plVar7 + 200))(plVar7,local_88);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 00368874 to 00368883 has its CatchHandler @ 00368b70 */
    local_80[0] = uVar8;
    FUN_00357adc(plVar5 + 0x11,puVar3 + 0x80,uVar8);
    if (uVar8 != 0) {
                    /* try { // try from 00368888 to 0036889b has its CatchHandler @ 00368ba4 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,uVar8);
    }
    puVar3 = PTR_vtable_00396f60;
    puVar1 = PTR_vtable_00396f60 + 0x68;
    plVar5[5] = (long)(PTR_vtable_00396f60 + 0xe8);
    *plVar11 = (long)puVar1;
    plVar5[0x11] = (long)(puVar3 + 0x168);
    plVar5[0x13] = (long)(puVar3 + 0x1c8);
                    /* try { // try from 003688c4 to 003688df has its CatchHandler @ 00368bcc */
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
      *in_x8 = (long)plVar11 + *(long *)(plVar5[3] + -0x68);
      in_x8[1] = (long)plVar5;
      if (local_88 != 0) {
                    /* try { // try from 00368978 to 0036898b has its CatchHandler @ 00368ba0 */
        plVar5 = (long *)facebook::jni::Environment::current();
        param_1 = (basic_strong_ref *)(**(code **)(*plVar5 + 0xb8))(plVar5,local_88);
      }
      if (*(long *)(lVar2 + 0x28) == local_58) {
        return;
      }
      goto LAB_00368c2c;
    }
  }
  pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
  param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar9);
  if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 00368ad0 to 00368ae7 has its CatchHandler @ 00368bcc */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pbVar9,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
  }
LAB_00368c2c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00368c30  FUN_00368c30 =====

void FUN_00368c30(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00368c5c to 00368c6f has its CatchHandler @ 00368c9c */
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


// ===== 00368ca0  FUN_00368ca0 =====

void FUN_00368ca0(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_0036953c();
  FUN_00356a9c(param_1 + 0x70,PTR_PTR_00396f68 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(param_1 + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(param_1 + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00368d20  FUN_00368d20 =====

void FUN_00368d20(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_0036953c();
  FUN_00356a9c(param_1 + 0x70,PTR_PTR_00396f68 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(param_1 + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(param_1 + 0x10));
  facebook::jsi::NativeState::~NativeState(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00368da8  margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::addListener =====

/* margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::addListener(std::__ndk1::function<void
   ()> const&) */

void margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::addListener(function *param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  _jobject *p_Var4;
  long lVar5;
  long *plVar6;
  long lVar7;
  bad_alloc *this;
  long in_x8;
  _jmethodID *p_Var8;
  undefined8 uVar9;
  undefined8 local_50;
  long local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039e7b8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039e7b8), iVar3 != 0)) {
                    /* try { // try from 00368fac to 00368fc3 has its CatchHandler @ 003690c0 */
    FUN_0036986c(&local_40);
    DAT_0039e7b0 = FUN_0036992c(&local_40,"addListener_cxx");
    __cxa_guard_release(&DAT_0039e7b8);
  }
  p_Var8 = *(_jmethodID **)(param_1 + 8);
  FUN_003699b0(&local_40);
  lVar7 = local_40;
  local_48 = local_40;
                    /* try { // try from 00368dfc to 00368e1b has its CatchHandler @ 00369124 */
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::CallObjectMethod(p_Var4,p_Var8,DAT_0039e7b0,lVar7);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (lVar7 != 0) {
                    /* try { // try from 00368e24 to 00368e37 has its CatchHandler @ 00369104 */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,lVar7);
  }
  if (((*PTR_cls_003945e8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_cls_003945e8), iVar3 != 0))
  {
                    /* try { // try from 00368fec to 00368fff has its CatchHandler @ 003690ac */
    facebook::jni::findClassStatic(PTR_kBaseName_003945f0);
    __cxa_guard_release(PTR_cls_003945e8);
  }
  uVar9 = *(undefined8 *)PTR_cls_003945e0;
                    /* try { // try from 00368e54 to 00368e6f has its CatchHandler @ 0036911c */
  plVar6 = (long *)facebook::jni::Environment::current();
  cVar2 = (**(code **)(*plVar6 + 0x100))(plVar6,lVar5,uVar9);
  if (cVar2 == '\0') {
                    /* try { // try from 00368f5c to 00368f67 has its CatchHandler @ 003690f4 */
    FUN_003595b8(&local_40,lVar5);
    local_48 = local_40;
    local_40 = 0;
    local_50 = 0;
                    /* try { // try from 00368f74 to 00368f7b has its CatchHandler @ 003690d4 */
    FUN_00359668();
    FUN_0035971c(&local_48);
    FUN_003597d8(&local_50);
    FUN_00359848(&local_40);
  }
  else {
    lVar7 = lVar5;
    if (lVar5 != 0) {
                    /* try { // try from 00368e7c to 00368e97 has its CatchHandler @ 00369120 */
      plVar6 = (long *)facebook::jni::Environment::current();
      lVar7 = (**(code **)(*plVar6 + 200))(plVar6,lVar5);
      facebook::jni::throwPendingJniExceptionAsCppException();
      if (lVar7 == 0) {
        this = (bad_alloc *)__cxa_allocate_exception(8);
        if (*(long *)(lVar1 + 0x28) == local_38) {
          std::bad_alloc::bad_alloc(this);
                    /* try { // try from 00369078 to 0036908f has its CatchHandler @ 00369120 */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(this,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
        }
        goto LAB_00369148;
      }
    }
    local_48 = lVar7;
    if (((*PTR_hybridDataField_003945d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_hybridDataField_003945d8), iVar3 != 0)) {
      facebook::jni::JObject::getClass();
                    /* try { // try from 00369030 to 00369033 has its CatchHandler @ 00369090 */
      uVar9 = FUN_0025dae8(local_40);
      *(undefined8 *)PTR_hybridDataField_003945d0 = uVar9;
      facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
      ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
                       *)&local_40);
      __cxa_guard_release(PTR_hybridDataField_003945d8);
    }
                    /* try { // try from 00368eb0 to 00368eff has its CatchHandler @ 00369108 */
    lVar7 = facebook::jni::getHybridDataFromField
                      ((JObject *)&local_48,(JField *)PTR_hybridDataField_003945d0);
    plVar6 = *(long **)(lVar7 + 0x30);
    if (plVar6 == (long *)0x0) {
LAB_00368ee4:
      *(long **)(in_x8 + 0x20) = plVar6;
    }
    else {
      if (plVar6 != (long *)(lVar7 + 0x10)) {
        plVar6 = (long *)(**(code **)(*plVar6 + 0x10))();
        goto LAB_00368ee4;
      }
      *(long *)(in_x8 + 0x20) = in_x8;
      (**(code **)(*plVar6 + 0x18))();
    }
    lVar7 = local_48;
    if (local_48 != 0) {
                    /* try { // try from 00368f08 to 00368f1b has its CatchHandler @ 003690fc */
      plVar6 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,lVar7);
    }
  }
  if (lVar5 != 0) {
                    /* try { // try from 00368f24 to 00368f37 has its CatchHandler @ 00369100 */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,lVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_00369148:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036914c  margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::trigger =====

/* margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::trigger() */

void __thiscall
margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::trigger
          (JHybridViewModelTriggerPropertySpec *this)

{
  long lVar1;
  int iVar2;
  _jobject *p_Var3;
  _jmethodID *p_Var4;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039e7c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039e7c8), iVar2 != 0)) {
                    /* try { // try from 003691cc to 003691e3 has its CatchHandler @ 003691f8 */
    FUN_0036986c(auStack_40);
    DAT_0039e7c0 = FUN_0034236c(auStack_40,"trigger");
    __cxa_guard_release(&DAT_0039e7c8);
  }
  p_Var4 = *(_jmethodID **)(this + 8);
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var3,p_Var4,DAT_0039e7c0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    facebook::jni::throwPendingJniExceptionAsCppException();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00369224  margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::removeListeners =====

/* margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::removeListeners() */

void __thiscall
margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::removeListeners
          (JHybridViewModelTriggerPropertySpec *this)

{
  long lVar1;
  int iVar2;
  _jobject *p_Var3;
  _jmethodID *p_Var4;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039e7d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039e7d8), iVar2 != 0)) {
                    /* try { // try from 003692a4 to 003692bb has its CatchHandler @ 003692d0 */
    FUN_0036986c(auStack_40);
    DAT_0039e7d0 = FUN_0034236c(auStack_40,"removeListeners");
    __cxa_guard_release(&DAT_0039e7d8);
  }
  p_Var4 = *(_jmethodID **)(this + 8);
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var3,p_Var4,DAT_0039e7d0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    facebook::jni::throwPendingJniExceptionAsCppException();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003692fc  FUN_003692fc =====

void FUN_003692fc(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_0036953c(this);
  FUN_00356a9c(this + 0x70,PTR_PTR_00396f68 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00369388  FUN_00369388 =====

void FUN_00369388(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_0036953c(this);
  FUN_00356a9c(this + 0x70,PTR_PTR_00396f68 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  facebook::jsi::NativeState::~NativeState(this);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036941c  FUN_0036941c =====

void FUN_0036941c(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_0036953c(this);
  FUN_00356a9c(this + 0x70,PTR_PTR_00396f68 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003694a8  FUN_003694a8 =====

void FUN_003694a8(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_0036953c(this);
  FUN_00356a9c(this + 0x70,PTR_PTR_00396f68 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  facebook::jsi::NativeState::~NativeState(this);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036953c  FUN_0036953c =====

void FUN_0036953c(long *param_1)

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
  
  puVar2 = PTR_vtable_00396f60;
  local_50 = (long *)&local_70;
  pppuVar3 = &local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1[2] = (long)(PTR_vtable_00396f60 + 0xe8);
  *param_1 = (long)(puVar2 + 0x68);
  param_1[0x10] = (long)(puVar2 + 0x1c8);
  param_1[0xe] = (long)(puVar2 + 0x168);
  local_70 = &PTR_FUN_00390e60;
  plStack_68 = param_1;
                    /* try { // try from 0036959c to 003695a3 has its CatchHandler @ 00369618 */
  facebook::jni::ThreadScope::WithClassLoader((function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar5 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_003695d0;
    lVar5 = 5;
    pppuVar3 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar3 + lVar5 * 8))();
LAB_003695d0:
  lVar5 = param_1[1];
  if (lVar5 != 0) {
                    /* try { // try from 003695d8 to 003695eb has its CatchHandler @ 0036961c */
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


// ===== 00369620  FUN_00369620 =====

void FUN_00369620(void *param_1)

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


// ===== 00369658  FUN_00369658 =====

void FUN_00369658(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00390e60;
  puVar2[1] = uVar4;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003696b4  FUN_003696b4 =====

void FUN_003696b4(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00390e60;
  param_2[1] = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003696fc  FUN_003696fc =====

void FUN_003696fc(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00369734  FUN_00369734 =====

void FUN_00369734(void *param_1)

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


// ===== 0036976c  FUN_0036976c =====

void FUN_0036976c(long param_1)

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
                    /* try { // try from 00369798 to 003697ab has its CatchHandler @ 003697d8 */
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


// ===== 003697dc  FUN_003697dc =====

void FUN_003697dc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00396fb8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0036982c  FUN_0036982c =====

undefined * FUN_0036982c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00396fc0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036986c  FUN_0036986c =====

void FUN_0036986c(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00396fe8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00396fe8), iVar2 != 0))
  {
                    /* try { // try from 003698dc to 003698ef has its CatchHandler @ 00369900 */
    facebook::jni::findClassStatic(PTR_kBaseName_00396ff0);
    __cxa_guard_release(PTR_cls_00396fe8);
  }
  *param_1 = *(undefined8 *)PTR_cls_00396fe0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036992c  FUN_0036992c =====

long FUN_0036992c(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,param_2,PTR_kDescriptor_00396ff8);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003699b0  FUN_003699b0 =====

void FUN_003699b0(long *param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  _jmethodID *p_Var3;
  byte bVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  _jclass *p_Var8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long local_90;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  long *local_68;
  long *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((*PTR_isHybrid_00396f90 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_isHybrid_00396f90), iVar5 != 0)) {
                    /* try { // try from 00369d8c to 00369da3 has its CatchHandler @ 00369f28 */
    FUN_0036a06c(&local_80);
    local_78 = local_80;
    bVar4 = facebook::jni::detail::HybridClassBase::isHybridClassBase(&local_78);
    *PTR_isHybrid_00396f88 = bVar4 & 1;
    __cxa_guard_release(PTR_isHybrid_00396f90);
  }
  plVar6 = (long *)operator_new(0x40);
  plVar7 = (long *)param_2[4];
  *plVar6 = (long)&PTR_FUN_00392d10;
  if (plVar7 != (long *)0x0) {
    if (plVar7 == param_2) {
      lVar9 = *param_2;
      plVar6[6] = (long)(plVar6 + 2);
      (**(code **)(lVar9 + 0x18))(param_2);
      goto LAB_00369a44;
    }
                    /* try { // try from 00369a24 to 00369a43 has its CatchHandler @ 00369fc4 */
    plVar7 = (long *)(**(code **)(*plVar7 + 0x10))();
  }
  plVar6[6] = (long)plVar7;
LAB_00369a44:
  puVar2 = PTR_isHybrid_00396f88;
  *param_1 = 0;
  if (*puVar2 == '\0') {
                    /* try { // try from 00369b70 to 00369b77 has its CatchHandler @ 00369f74 */
    facebook::jni::detail::HybridData::create();
                    /* try { // try from 00369b7c to 00369b97 has its CatchHandler @ 00369ff4 */
    plVar7 = (long *)facebook::jni::Environment::current();
    plVar7 = (long *)(**(code **)(*plVar7 + 200))(plVar7,local_90);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 00369ba0 to 00369bab has its CatchHandler @ 00369f4c */
    local_68 = plVar6;
    local_60 = plVar7;
    FUN_00319a60(&local_60,&local_68);
    plVar6 = local_68;
    local_68 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    plVar6 = local_60;
    if (local_60 != (long *)0x0) {
                    /* try { // try from 00369bcc to 00369bdf has its CatchHandler @ 00369f90 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,plVar6);
    }
                    /* try { // try from 00369be8 to 00369c03 has its CatchHandler @ 00369fec */
    plVar6 = (long *)facebook::jni::Environment::current();
    lVar9 = (**(code **)(*plVar6 + 200))(plVar6,local_90);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 00369c08 to 00369c23 has its CatchHandler @ 00369fe4 */
    plVar6 = (long *)facebook::jni::Environment::current();
    lVar10 = (**(code **)(*plVar6 + 200))(plVar6,lVar9);
    facebook::jni::throwPendingJniExceptionAsCppException();
    local_70 = lVar10;
    if (((DAT_0039e808 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0039e808), iVar5 != 0)) {
      FUN_0036a23c(&DAT_0039e800);
      __cxa_guard_release(&DAT_0039e808);
    }
    if (((DAT_0039e818 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0039e818), iVar5 != 0)) {
                    /* try { // try from 00369e94 to 00369e97 has its CatchHandler @ 00369eac */
      DAT_0039e810 = FUN_0036a2fc();
      __cxa_guard_release(&DAT_0039e818);
    }
    lVar10 = local_70;
    uVar13 = DAT_0039e810;
                    /* try { // try from 00369c54 to 00369c6f has its CatchHandler @ 00369fdc */
    plVar6 = (long *)facebook::jni::Environment::current();
    plVar6 = (long *)(**(code **)(*plVar6 + 200))(plVar6,lVar10);
    facebook::jni::throwPendingJniExceptionAsCppException();
    local_68 = plVar6;
                    /* try { // try from 00369c74 to 00369c9f has its CatchHandler @ 0036a010 */
    p_Var8 = (_jclass *)facebook::jni::Environment::current();
    p_Var3 = DAT_0039e800;
    plVar7 = (long *)facebook::jni::Environment::current();
    plVar7 = (long *)(**(code **)(*plVar7 + 200))(plVar7,plVar6);
    facebook::jni::throwPendingJniExceptionAsCppException();
    local_60 = plVar7;
                    /* try { // try from 00369ca4 to 00369cb7 has its CatchHandler @ 00369f3c */
    lVar11 = _JNIEnv::NewObject(p_Var8,p_Var3,uVar13,plVar7);
    if (plVar7 != (long *)0x0) {
                    /* try { // try from 00369cc0 to 00369cd3 has its CatchHandler @ 00369f8c */
      plVar12 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar12 + 0xb8))(plVar12,plVar7);
    }
                    /* try { // try from 00369cdc to 00369cdf has its CatchHandler @ 0036a010 */
    facebook::jni::throwCppExceptionIf(lVar11 == 0);
    if (plVar6 != (long *)0x0) {
                    /* try { // try from 00369ce4 to 00369cf7 has its CatchHandler @ 00369f88 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,plVar6);
    }
    if (lVar10 != 0) {
                    /* try { // try from 00369cfc to 00369d0f has its CatchHandler @ 00369f84 */
      plVar6 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,lVar10);
    }
    *param_1 = lVar11;
    if (lVar9 != 0) {
                    /* try { // try from 00369d1c to 00369d2f has its CatchHandler @ 00369f80 */
      plVar6 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,lVar9);
    }
    if (local_90 != 0) {
                    /* try { // try from 00369d3c to 00369d4f has its CatchHandler @ 00369f7c */
      plVar6 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,local_90);
    }
  }
  else {
    if (((DAT_0039e7e8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0039e7e8), iVar5 != 0)) {
      FUN_0036a23c(&DAT_0039e7e0);
      __cxa_guard_release(&DAT_0039e7e8);
    }
    if (((DAT_0039e7f8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0039e7f8), iVar5 != 0)) {
                    /* try { // try from 00369e00 to 00369e03 has its CatchHandler @ 00369f00 */
      DAT_0039e7f0 = FUN_0036a378();
      __cxa_guard_release(&DAT_0039e7f8);
    }
    uVar13 = DAT_0039e7f0;
                    /* try { // try from 00369a84 to 00369aa7 has its CatchHandler @ 0036a03c */
    p_Var8 = (_jclass *)facebook::jni::Environment::current();
    lVar9 = _JNIEnv::NewObject(p_Var8,DAT_0039e7e0,uVar13);
    facebook::jni::throwCppExceptionIf(lVar9 == 0);
    *param_1 = lVar9;
                    /* try { // try from 00369aac to 00369ac7 has its CatchHandler @ 0036a038 */
    plVar7 = (long *)facebook::jni::Environment::current();
    lVar9 = (**(code **)(*plVar7 + 200))(plVar7,lVar9);
    facebook::jni::throwPendingJniExceptionAsCppException();
    puVar2 = PTR_holderField_00396fa0;
    if (((*PTR_holderField_00396fa8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_holderField_00396fa8), iVar5 != 0)) {
      facebook::jni::JObject::getClass();
                    /* try { // try from 00369e34 to 00369e3b has its CatchHandler @ 00369ed4 */
      uVar13 = facebook::jni::detail::getDestructorField((basic_strong_ref *)&local_60);
      *(undefined8 *)puVar2 = uVar13;
      facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
      ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
                       *)&local_60);
      __cxa_guard_release(PTR_holderField_00396fa8);
    }
    uVar13 = *(undefined8 *)puVar2;
                    /* try { // try from 00369af0 to 00369b07 has its CatchHandler @ 0036a00c */
    plVar7 = (long *)facebook::jni::Environment::current();
    local_68 = (long *)(**(code **)(*plVar7 + 0x2f8))(plVar7,lVar9,uVar13);
                    /* try { // try from 00369b0c to 00369b17 has its CatchHandler @ 00369f94 */
    local_60 = plVar6;
    facebook::jni::detail::HybridDestructor::setNativePointer(&local_68,&local_60);
    plVar6 = local_60;
    local_60 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    plVar6 = local_68;
    if (local_68 != (long *)0x0) {
                    /* try { // try from 00369b38 to 00369b4b has its CatchHandler @ 00369fd8 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,plVar6);
    }
    if (lVar9 != 0) {
                    /* try { // try from 00369b54 to 00369b67 has its CatchHandler @ 00369fd4 */
      plVar6 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,lVar9);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036a06c  FUN_0036a06c =====

void FUN_0036a06c(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_003945e8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_003945e8), iVar2 != 0))
  {
                    /* try { // try from 0036a0dc to 0036a0ef has its CatchHandler @ 0036a100 */
    facebook::jni::findClassStatic(PTR_kBaseName_003945f0);
    __cxa_guard_release(PTR_cls_003945e8);
  }
  *param_1 = *(undefined8 *)PTR_cls_003945e0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036a12c  FUN_0036a12c =====

void FUN_0036a12c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 0036a158 to 0036a16b has its CatchHandler @ 0036a198 */
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


// ===== 0036a19c  FUN_0036a19c =====

void FUN_0036a19c(undefined8 *param_1)

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
    goto LAB_0036a238;
  }
  plVar2 = *(long **)((long)pvVar6 + 0x30);
  plVar3 = (long *)((long)pvVar6 + 0x10);
  if (plVar2 == plVar3) {
    lVar5 = 4;
LAB_0036a208:
    (**(code **)(*plVar3 + lVar5 * 8))();
  }
  else if (plVar2 != (long *)0x0) {
    lVar5 = 5;
    plVar3 = plVar2;
    goto LAB_0036a208;
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(pvVar6);
    return;
  }
LAB_0036a238:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036a23c  FUN_0036a23c =====

void FUN_0036a23c(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_003945e8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_003945e8), iVar2 != 0))
  {
                    /* try { // try from 0036a2ac to 0036a2bf has its CatchHandler @ 0036a2d0 */
    facebook::jni::findClassStatic(PTR_kBaseName_003945f0);
    __cxa_guard_release(PTR_cls_003945e8);
  }
  *param_1 = *(undefined8 *)PTR_cls_003945e0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036a2fc  FUN_0036a2fc =====

long FUN_0036a2fc(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,DAT_0039e800,"<init>",PTR_kConstructorDescriptor_00396fb0);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036a378  FUN_0036a378 =====

long FUN_0036a378(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,DAT_0039e7e0,"<init>",PTR_kConstructorDescriptor_00396f98);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036a3f4  FUN_0036a3f4 =====

void FUN_0036a3f4(long param_1)

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
      goto LAB_0036a474;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0036a454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar4 * 8))();
    return;
  }
LAB_0036a474:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036a478  FUN_0036a478 =====

void FUN_0036a478(void *param_1)

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
    if (plVar2 == (long *)0x0) goto LAB_0036a4c8;
    lVar5 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_0036a4c8:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036a4f0  FUN_0036a4f0 =====

void FUN_0036a4f0(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_00390ee0;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036a534  FUN_0036a534 =====

void FUN_0036a534(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_00390ee0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036a58c  FUN_0036a58c =====

void FUN_0036a58c(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0036a5c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(param_1 + 0x18))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036a5cc  FUN_0036a5cc =====

void FUN_0036a5cc(void *param_1)

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


// ===== 0036a604  margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::CxxPart::registerNatives =====

/* margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::CxxPart::registerNatives() */

void margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::CxxPart::registerNatives(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  char *pcVar7;
  long *plVar8;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puStack_58 = PTR_kDescriptor_00390548;
  local_60 = PTR_s_initHybrid_00390540;
  local_50 = PTR_call_00390550;
  pcVar7 = (char *)operator_new(0x50);
  uVar5 = s_Lcom_margelo_nitro_rive_HybridVi_001d6a75._25_8_;
  uVar4 = s_Lcom_margelo_nitro_rive_HybridVi_001d6a75._17_8_;
  uVar3 = s_Lcom_margelo_nitro_rive_HybridVi_001d6a75._9_8_;
  uVar2 = s_Lcom_margelo_nitro_rive_HybridVi_001d6a75._1_8_;
  pcVar7[0x40] = 't';
  pcVar7[0x41] = '\0';
  *(undefined8 *)(pcVar7 + 8) = uVar3;
  *(undefined8 *)pcVar7 = uVar2;
  *(undefined8 *)(pcVar7 + 0x18) = uVar5;
  *(undefined8 *)(pcVar7 + 0x10) = uVar4;
  uVar4 = s_Lcom_margelo_nitro_rive_HybridVi_001d6a75._57_8_;
  uVar3 = s_Lcom_margelo_nitro_rive_HybridVi_001d6a75._49_8_;
  uVar2 = s_Lcom_margelo_nitro_rive_HybridVi_001d6a75._33_8_;
  *(undefined8 *)(pcVar7 + 0x28) = s_Lcom_margelo_nitro_rive_HybridVi_001d6a75._41_8_;
  *(undefined8 *)(pcVar7 + 0x20) = uVar2;
  *(undefined8 *)(pcVar7 + 0x38) = uVar4;
  *(undefined8 *)(pcVar7 + 0x30) = uVar3;
                    /* try { // try from 0036a668 to 0036a66f has its CatchHandler @ 0036a6e0 */
  facebook::jni::findClassLocal(pcVar7);
  operator_delete(pcVar7);
                    /* try { // try from 0036a678 to 0036a69f has its CatchHandler @ 0036a6f4 */
  plVar8 = (long *)facebook::jni::Environment::current();
  iVar6 = (**(code **)(*plVar8 + 0x6b8))(plVar8,local_40,&local_60,1);
  facebook::jni::throwCppExceptionIf(iVar6 != 0);
  if (local_40 != 0) {
                    /* try { // try from 0036a6a8 to 0036a6bb has its CatchHandler @ 0036a6f0 */
    plVar8 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar8 + 0xb8))(plVar8,local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036a71c  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::CxxPart,margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::CxxPart,margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   (*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::CxxPart,
   margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart, void>::_javaobject*>),
   &margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::CxxPart::initHybrid,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::CxxPart,
   margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart, void>::_javaobject*,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>>::call(_JNIEnv*, _jobject*) */

undefined8
facebook::jni::detail::
FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::CxxPart,margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::CxxPart,margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>
::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  JniEnvCacher aJStack_48 [24];
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_48,param_1);
                    /* try { // try from 0036a748 to 0036a753 has its CatchHandler @ 0036a784 */
  FUN_003684b8(&local_30,param_2);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036a7d0  margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::addListener =====

/* virtual thunk to
   margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::addListener(std::__ndk1::function<void
   ()> const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::addListener
          (JHybridViewModelTriggerPropertySpec *this,function *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    addListener((function *)(this + *(long *)(*(long *)this + -0x40)));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036a814  margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::trigger =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::trigger() */

void __thiscall
margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::trigger
          (JHybridViewModelTriggerPropertySpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    trigger(this + *(long *)(*(long *)this + -0x48));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036a858  margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::removeListeners =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::removeListeners() */

void __thiscall
margelo::nitro::rive::JHybridViewModelTriggerPropertySpec::removeListeners
          (JHybridViewModelTriggerPropertySpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    removeListeners(this + *(long *)(*(long *)this + -0x50));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036a89c  margelo::nitro::rive::JHybridViewModelImagePropertySpec::JavaPart::getJHybridViewModelImagePropertySpec =====

/* margelo::nitro::rive::JHybridViewModelImagePropertySpec::JavaPart::getJHybridViewModelImagePropertySpec()
    */

void __thiscall
margelo::nitro::rive::JHybridViewModelImagePropertySpec::JavaPart::
getJHybridViewModelImagePropertySpec(JavaPart *this)

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
     (lVar2 = __dynamic_cast(local_38,PTR_typeinfo_00395e60,PTR_typeinfo_00397018,0xffffffffffffffff
                            ), lVar2 == 0)) {
    *in_x8 = 0;
    in_x8[1] = 0;
    this_00 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0036a964 to 0036a96f has its CatchHandler @ 0036a9a4 */
    std::runtime_error::runtime_error
              (this_00,"Failed to downcast JHybridObject to JHybridViewModelImagePropertySpec!");
    if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* try { // try from 0036a984 to 0036a99b has its CatchHandler @ 0036a99c */
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


// ===== 0036a9e0  FUN_0036a9e0 =====

void FUN_0036a9e0(long *param_1)

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


// ===== 0036aa6c  margelo::nitro::rive::JHybridViewModelImagePropertySpec::CxxPart::initHybrid =====

/* margelo::nitro::rive::JHybridViewModelImagePropertySpec::CxxPart::initHybrid(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelImagePropertySpec::CxxPart,
   margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart, void>::_javaobject*>) */

void __thiscall
margelo::nitro::rive::JHybridViewModelImagePropertySpec::CxxPart::initHybrid
          (undefined8 *param_1,CxxPart *this)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_0036aac4(&local_30,*(undefined8 *)this);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036aac4  FUN_0036aac4 =====

void FUN_0036aac4(undefined8 *param_1,undefined8 param_2)

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
                    /* try { // try from 0036aafc to 0036ab03 has its CatchHandler @ 0036abe0 */
  local_48 = param_2;
  margelo::nitro::JHybridObject::CxxPart::CxxPart(pCVar2,&local_48);
  *(undefined **)pCVar2 = PTR_vtable_00397020 + 0x10;
                    /* try { // try from 0036ab14 to 0036ab1b has its CatchHandler @ 0036abd8 */
  facebook::jni::detail::HybridData::create();
  uVar5 = *param_1;
                    /* try { // try from 0036ab20 to 0036ab3b has its CatchHandler @ 0036abf4 */
  plVar3 = (long *)facebook::jni::Environment::current();
  lVar4 = (**(code **)(*plVar3 + 200))(plVar3,uVar5);
  facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 0036ab44 to 0036ab4f has its CatchHandler @ 0036aba8 */
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
                    /* try { // try from 0036ab70 to 0036ab83 has its CatchHandler @ 0036abf0 */
    plVar3 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb8))(plVar3,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036ac2c  FUN_0036ac2c =====

void FUN_0036ac2c(long *param_1)

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
                    /* try { // try from 0036ac68 to 0036ac7b has its CatchHandler @ 0036acb8 */
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


// ===== 0036acbc  margelo::nitro::rive::JHybridViewModelImagePropertySpec::CxxPart::createHybridObject =====

/* margelo::nitro::rive::JHybridViewModelImagePropertySpec::CxxPart::createHybridObject(facebook::jni::basic_strong_ref<margelo::nitro::JHybridObject::JavaPart,
   facebook::jni::LocalReferenceAllocator> const&) */

void margelo::nitro::rive::JHybridViewModelImagePropertySpec::CxxPart::createHybridObject
               (basic_strong_ref *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
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
  
  puVar1 = PTR_target_class_00397038;
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*in_x1 == 0) {
LAB_0036afc8:
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0036afd4 to 0036afdf has its CatchHandler @ 0036b16c */
    param_1 = (basic_strong_ref *)
              std::runtime_error::runtime_error
                        (this,
                         "Failed to cast JHybridObject::JavaPart to JHybridViewModelImagePropertySpec::JavaPart!"
                        );
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0036aff0 to 0036b007 has its CatchHandler @ 0036b168 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_0036b238;
  }
  if (((*PTR_target_class_00397040 & 1) == 0) &&
     (param_1 = (basic_strong_ref *)__cxa_guard_acquire(PTR_target_class_00397040),
     (int)param_1 != 0)) {
                    /* try { // try from 0036b018 to 0036b027 has its CatchHandler @ 0036b12c */
    facebook::jni::findClassStatic(PTR_kBaseName_00397048);
    *(undefined8 *)puVar1 = local_60;
    param_1 = (basic_strong_ref *)__cxa_guard_release(PTR_target_class_00397040);
  }
  if (*(long *)puVar1 == 0) {
    if (*(long *)(lVar2 + 0x28) != local_58) goto LAB_0036b238;
    FUN_00261580("java/lang/ClassCastException","Could not find class %s.",PTR_kBaseName_00397048);
LAB_0036b06c:
                    /* try { // try from 0036b06c to 0036b07b has its CatchHandler @ 0036b158 */
    param_1 = (basic_strong_ref *)FUN_002615d4(local_80,&local_68);
    uVar8 = (ulong)local_80 | 1;
    if ((local_80[0] & 1) != 0) {
      uVar8 = local_70;
    }
    if (*(long *)(lVar2 + 0x28) != local_58) goto LAB_0036b238;
                    /* try { // try from 0036b0a0 to 0036b0bb has its CatchHandler @ 0036b140 */
    FUN_0026171c("java/lang/ClassCastException","Tried to cast from %s to %s.",uVar8,
                 PTR_kBaseName_00397048);
  }
  else {
                    /* try { // try from 0036ad14 to 0036ad27 has its CatchHandler @ 0036b1c0 */
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5,*in_x1);
    local_68 = lVar6;
                    /* try { // try from 0036ad30 to 0036ad47 has its CatchHandler @ 0036b1bc */
    plVar5 = (long *)facebook::jni::Environment::current();
    cVar4 = (**(code **)(*plVar5 + 0x58))(plVar5,lVar6,*(undefined8 *)puVar1);
    if (cVar4 == '\0') goto LAB_0036b06c;
    lVar10 = *in_x1;
    if (lVar10 == 0) {
      local_88 = 0;
    }
    else {
                    /* try { // try from 0036ad58 to 0036ad73 has its CatchHandler @ 0036b1c4 */
      plVar5 = (long *)facebook::jni::Environment::current();
      local_88 = (**(code **)(*plVar5 + 200))(plVar5,lVar10);
      facebook::jni::throwPendingJniExceptionAsCppException();
      if (local_88 == 0) {
        pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
        param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar9);
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0036b114 to 0036b12b has its CatchHandler @ 0036b1c4 */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(pbVar9,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
        }
        goto LAB_0036b238;
      }
    }
    if (lVar6 != 0) {
                    /* try { // try from 0036ad90 to 0036ada3 has its CatchHandler @ 0036b1b8 */
      plVar5 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar5 + 0xb8))(plVar5,lVar6);
    }
    if (local_88 == 0) goto LAB_0036afc8;
                    /* try { // try from 0036ada8 to 0036adaf has its CatchHandler @ 0036b1a4 */
    plVar5 = (long *)operator_new(0xa8);
    puVar1 = PTR_vtable_00395e70;
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_003918c0;
    plVar11 = plVar5 + 3;
    *plVar11 = (long)(puVar1 + 0x10);
    puVar3 = PTR_PTR_00397008;
                    /* try { // try from 0036ade0 to 0036adfb has its CatchHandler @ 0036b19c */
    margelo::nitro::HybridObject::HybridObject((HybridObject *)(plVar5 + 5),PTR_PTR_00397008 + 0x58)
    ;
    puVar1 = PTR_construction_vtable_00397010 + 0x50;
    plVar5[5] = (long)(PTR_construction_vtable_00397010 + 0xd0);
    plVar5[3] = (long)puVar1;
                    /* try { // try from 0036ae14 to 0036ae2f has its CatchHandler @ 0036b1d0 */
    plVar7 = (long *)facebook::jni::Environment::current();
    uVar8 = (**(code **)(*plVar7 + 200))(plVar7,local_88);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 0036ae34 to 0036ae43 has its CatchHandler @ 0036b18c */
    local_80[0] = uVar8;
    margelo::nitro::JHybridObject::JHybridObject((JHybridObject *)(plVar5 + 0x13),puVar3 + 0xa8);
    uVar8 = local_80[0];
    if (local_80[0] != 0) {
                    /* try { // try from 0036ae4c to 0036ae5f has its CatchHandler @ 0036b1b4 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,uVar8);
    }
                    /* try { // try from 0036ae60 to 0036ae7b has its CatchHandler @ 0036b1c8 */
    plVar7 = (long *)facebook::jni::Environment::current();
    uVar8 = (**(code **)(*plVar7 + 200))(plVar7,local_88);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 0036ae80 to 0036ae8f has its CatchHandler @ 0036b17c */
    local_80[0] = uVar8;
    FUN_00357adc(plVar5 + 0x11,puVar3 + 0x80,uVar8);
    if (uVar8 != 0) {
                    /* try { // try from 0036ae94 to 0036aea7 has its CatchHandler @ 0036b1b0 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,uVar8);
    }
    puVar3 = PTR_vtable_00397000;
    puVar1 = PTR_vtable_00397000 + 0x68;
    plVar5[5] = (long)(PTR_vtable_00397000 + 0xe8);
    *plVar11 = (long)puVar1;
    plVar5[0x11] = (long)(puVar3 + 0x168);
    plVar5[0x13] = (long)(puVar3 + 0x1c8);
                    /* try { // try from 0036aed0 to 0036aeeb has its CatchHandler @ 0036b1d8 */
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
      *in_x8 = (long)plVar11 + *(long *)(plVar5[3] + -0x68);
      in_x8[1] = (long)plVar5;
      if (local_88 != 0) {
                    /* try { // try from 0036af84 to 0036af97 has its CatchHandler @ 0036b1ac */
        plVar5 = (long *)facebook::jni::Environment::current();
        param_1 = (basic_strong_ref *)(**(code **)(*plVar5 + 0xb8))(plVar5,local_88);
      }
      if (*(long *)(lVar2 + 0x28) == local_58) {
        return;
      }
      goto LAB_0036b238;
    }
  }
  pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
  param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar9);
  if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0036b0dc to 0036b0f3 has its CatchHandler @ 0036b1d8 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pbVar9,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
  }
LAB_0036b238:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0036b23c  FUN_0036b23c =====

void FUN_0036b23c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 0036b268 to 0036b27b has its CatchHandler @ 0036b2a8 */
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


// ===== 0036b2ac  FUN_0036b2ac =====

void FUN_0036b2ac(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_0036bc58();
  FUN_00356a9c(param_1 + 0x70,PTR_PTR_00397008 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(param_1 + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(param_1 + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036b32c  FUN_0036b32c =====

void FUN_0036b32c(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_0036bc58();
  FUN_00356a9c(param_1 + 0x70,PTR_PTR_00397008 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(param_1 + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(param_1 + 0x10));
  facebook::jsi::NativeState::~NativeState(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036b3b4  margelo::nitro::rive::JHybridViewModelImagePropertySpec::set =====

/* margelo::nitro::rive::JHybridViewModelImagePropertySpec::set(std::__ndk1::optional<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridRiveImageSpec>
   > const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelImagePropertySpec::set
          (JHybridViewModelImagePropertySpec *this,optional *param_1)

{
  optional oVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  _jobject *p_Var6;
  _jmethodID *p_Var7;
  undefined8 uVar8;
  long local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (((DAT_0039e848 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039e848), iVar3 != 0)) {
                    /* try { // try from 0036b520 to 0036b52f has its CatchHandler @ 0036b548 */
    FUN_0036bf88(&local_50);
    DAT_0039e840 = FUN_0036c048(&local_50);
    __cxa_guard_release(&DAT_0039e848);
  }
  oVar1 = param_1[0x10];
  p_Var7 = *(_jmethodID **)(this + 8);
  if (oVar1 == (optional)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = __dynamic_cast(*(undefined8 *)param_1,PTR_typeinfo_00394b40,PTR_typeinfo_00396158,
                           0xffffffffffffffff);
    param_1 = *(optional **)(param_1 + 8);
    if (param_1 != (optional *)0x0) {
      FUN_00259a00(1,param_1 + 8);
    }
    uVar8 = *(undefined8 *)(lVar4 + 8);
                    /* try { // try from 0036b434 to 0036b44f has its CatchHandler @ 0036b560 */
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar4 = (**(code **)(*plVar5 + 0xa8))(plVar5,uVar8);
    facebook::jni::throwPendingJniExceptionAsCppException();
  }
  local_50 = lVar4;
                    /* try { // try from 0036b45c to 0036b477 has its CatchHandler @ 0036b568 */
  p_Var6 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var6,p_Var7,DAT_0039e840,lVar4);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (lVar4 != 0) {
                    /* try { // try from 0036b47c to 0036b48f has its CatchHandler @ 0036b55c */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb0))(plVar5,lVar4);
  }
  local_50 = 0;
  if (((oVar1 == (optional)0x0) || (param_1 == (optional *)0x0)) ||
     (lVar4 = FUN_00255510(0xffffffffffffffff,param_1 + 8), lVar4 != 0)) {
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return;
    }
  }
  else {
    (**(code **)(*(long *)param_1 + 0x10))(param_1);
    if (*(long *)(lVar2 + 0x28) == local_48) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036b59c  margelo::nitro::rive::JHybridViewModelImagePropertySpec::addListener =====

/* margelo::nitro::rive::JHybridViewModelImagePropertySpec::addListener(std::__ndk1::function<void
   ()> const&) */

void margelo::nitro::rive::JHybridViewModelImagePropertySpec::addListener(function *param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  _jobject *p_Var4;
  long lVar5;
  long *plVar6;
  long lVar7;
  bad_alloc *this;
  long in_x8;
  _jmethodID *p_Var8;
  undefined8 uVar9;
  undefined8 local_50;
  long local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039e858 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039e858), iVar3 != 0)) {
                    /* try { // try from 0036b7a0 to 0036b7b7 has its CatchHandler @ 0036b8b4 */
    FUN_0036bf88(&local_40);
    DAT_0039e850 = FUN_0036992c(&local_40,"addListener_cxx");
    __cxa_guard_release(&DAT_0039e858);
  }
  p_Var8 = *(_jmethodID **)(param_1 + 8);
  FUN_003699b0(&local_40);
  lVar7 = local_40;
  local_48 = local_40;
                    /* try { // try from 0036b5f0 to 0036b60f has its CatchHandler @ 0036b918 */
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::CallObjectMethod(p_Var4,p_Var8,DAT_0039e850,lVar7);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (lVar7 != 0) {
                    /* try { // try from 0036b618 to 0036b62b has its CatchHandler @ 0036b8f8 */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,lVar7);
  }
  if (((*PTR_cls_003945e8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_cls_003945e8), iVar3 != 0))
  {
                    /* try { // try from 0036b7e0 to 0036b7f3 has its CatchHandler @ 0036b8a0 */
    facebook::jni::findClassStatic(PTR_kBaseName_003945f0);
    __cxa_guard_release(PTR_cls_003945e8);
  }
  uVar9 = *(undefined8 *)PTR_cls_003945e0;
                    /* try { // try from 0036b648 to 0036b663 has its CatchHandler @ 0036b910 */
  plVar6 = (long *)facebook::jni::Environment::current();
  cVar2 = (**(code **)(*plVar6 + 0x100))(plVar6,lVar5,uVar9);
  if (cVar2 == '\0') {
                    /* try { // try from 0036b750 to 0036b75b has its CatchHandler @ 0036b8e8 */
    FUN_003595b8(&local_40,lVar5);
    local_48 = local_40;
    local_40 = 0;
    local_50 = 0;
                    /* try { // try from 0036b768 to 0036b76f has its CatchHandler @ 0036b8c8 */
    FUN_00359668();
    FUN_0035971c(&local_48);
    FUN_003597d8(&local_50);
    FUN_00359848(&local_40);
  }
  else {
    lVar7 = lVar5;
    if (lVar5 != 0) {
                    /* try { // try from 0036b670 to 0036b68b has its CatchHandler @ 0036b914 */
      plVar6 = (long *)facebook::jni::Environment::current();
      lVar7 = (**(code **)(*plVar6 + 200))(plVar6,lVar5);
      facebook::jni::throwPendingJniExceptionAsCppException();
      if (lVar7 == 0) {
        this = (bad_alloc *)__cxa_allocate_exception(8);
        if (*(long *)(lVar1 + 0x28) == local_38) {
          std::bad_alloc::bad_alloc(this);
                    /* try { // try from 0036b86c to 0036b883 has its CatchHandler @ 0036b914 */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(this,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
        }
        goto LAB_0036b93c;
      }
    }
    local_48 = lVar7;
    if (((*PTR_hybridDataField_003945d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_hybridDataField_003945d8), iVar3 != 0)) {
      facebook::jni::JObject::getClass();
                    /* try { // try from 0036b824 to 0036b827 has its CatchHandler @ 0036b884 */
      uVar9 = FUN_0025dae8(local_40);
      *(undefined8 *)PTR_hybridDataField_003945d0 = uVar9;
      facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
      ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
                       *)&local_40);
      __cxa_guard_release(PTR_hybridDataField_003945d8);
    }
                    /* try { // try from 0036b6a4 to 0036b6f3 has its CatchHandler @ 0036b8fc */
    lVar7 = facebook::jni::getHybridDataFromField
                      ((JObject *)&local_48,(JField *)PTR_hybridDataField_003945d0);
    plVar6 = *(long **)(lVar7 + 0x30);
    if (plVar6 == (long *)0x0) {
LAB_0036b6d8:
      *(long **)(in_x8 + 0x20) = plVar6;
    }
    else {
      if (plVar6 != (long *)(lVar7 + 0x10)) {
        plVar6 = (long *)(**(code **)(*plVar6 + 0x10))();
        goto LAB_0036b6d8;
      }
      *(long *)(in_x8 + 0x20) = in_x8;
      (**(code **)(*plVar6 + 0x18))();
    }
    lVar7 = local_48;
    if (local_48 != 0) {
                    /* try { // try from 0036b6fc to 0036b70f has its CatchHandler @ 0036b8f0 */
      plVar6 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,lVar7);
    }
  }
  if (lVar5 != 0) {
                    /* try { // try from 0036b718 to 0036b72b has its CatchHandler @ 0036b8f4 */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,lVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_0036b93c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036b940  margelo::nitro::rive::JHybridViewModelImagePropertySpec::removeListeners =====

/* margelo::nitro::rive::JHybridViewModelImagePropertySpec::removeListeners() */

void __thiscall
margelo::nitro::rive::JHybridViewModelImagePropertySpec::removeListeners
          (JHybridViewModelImagePropertySpec *this)

{
  long lVar1;
  int iVar2;
  _jobject *p_Var3;
  _jmethodID *p_Var4;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039e868 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039e868), iVar2 != 0)) {
                    /* try { // try from 0036b9c0 to 0036b9d7 has its CatchHandler @ 0036b9ec */
    FUN_0036bf88(auStack_40);
    DAT_0039e860 = FUN_0034236c(auStack_40,"removeListeners");
    __cxa_guard_release(&DAT_0039e868);
  }
  p_Var4 = *(_jmethodID **)(this + 8);
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var3,p_Var4,DAT_0039e860);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    facebook::jni::throwPendingJniExceptionAsCppException();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036ba18  FUN_0036ba18 =====

void FUN_0036ba18(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_0036bc58(this);
  FUN_00356a9c(this + 0x70,PTR_PTR_00397008 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036baa4  FUN_0036baa4 =====

void FUN_0036baa4(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_0036bc58(this);
  FUN_00356a9c(this + 0x70,PTR_PTR_00397008 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  facebook::jsi::NativeState::~NativeState(this);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036bb38  FUN_0036bb38 =====

void FUN_0036bb38(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_0036bc58(this);
  FUN_00356a9c(this + 0x70,PTR_PTR_00397008 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036bbc4  FUN_0036bbc4 =====

void FUN_0036bbc4(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_0036bc58(this);
  FUN_00356a9c(this + 0x70,PTR_PTR_00397008 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  facebook::jsi::NativeState::~NativeState(this);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036bc58  FUN_0036bc58 =====

void FUN_0036bc58(long *param_1)

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
  
  puVar2 = PTR_vtable_00397000;
  local_50 = (long *)&local_70;
  pppuVar3 = &local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1[2] = (long)(PTR_vtable_00397000 + 0xe8);
  *param_1 = (long)(puVar2 + 0x68);
  param_1[0x10] = (long)(puVar2 + 0x1c8);
  param_1[0xe] = (long)(puVar2 + 0x168);
  local_70 = &PTR_FUN_00391840;
  plStack_68 = param_1;
                    /* try { // try from 0036bcb8 to 0036bcbf has its CatchHandler @ 0036bd34 */
  facebook::jni::ThreadScope::WithClassLoader((function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar5 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_0036bcec;
    lVar5 = 5;
    pppuVar3 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar3 + lVar5 * 8))();
LAB_0036bcec:
  lVar5 = param_1[1];
  if (lVar5 != 0) {
                    /* try { // try from 0036bcf4 to 0036bd07 has its CatchHandler @ 0036bd38 */
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


// ===== 0036bd3c  FUN_0036bd3c =====

void FUN_0036bd3c(void *param_1)

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


// ===== 0036bd74  FUN_0036bd74 =====

void FUN_0036bd74(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00391840;
  puVar2[1] = uVar4;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036bdd0  FUN_0036bdd0 =====

void FUN_0036bdd0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00391840;
  param_2[1] = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036be18  FUN_0036be18 =====

void FUN_0036be18(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036be50  FUN_0036be50 =====

void FUN_0036be50(void *param_1)

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


// ===== 0036be88  FUN_0036be88 =====

void FUN_0036be88(long param_1)

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
                    /* try { // try from 0036beb4 to 0036bec7 has its CatchHandler @ 0036bef4 */
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


// ===== 0036bef8  FUN_0036bef8 =====

void FUN_0036bef8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00397028) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0036bf48  FUN_0036bf48 =====

undefined * FUN_0036bf48(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00397030;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036bf88  FUN_0036bf88 =====

void FUN_0036bf88(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00397058 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00397058), iVar2 != 0))
  {
                    /* try { // try from 0036bff8 to 0036c00b has its CatchHandler @ 0036c01c */
    FUN_00376210(PTR_cls_00397050,&PTR_vtable_00397000);
    return;
  }
  *param_1 = *(undefined8 *)PTR_cls_00397050;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036c008  FUN_0036c008 =====

void FUN_0036c008(char *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  long in_stack_00000008;
  
  facebook::jni::findClassStatic(param_1);
  __cxa_guard_release(PTR_cls_00397058);
  *unaff_x19 = *(undefined8 *)PTR_cls_00397050;
  if (*(long *)(unaff_x20 + 0x28) == in_stack_00000008) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036c048  FUN_0036c048 =====

long FUN_0036c048(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,&DAT_001d4cc6,PTR_kDescriptor_00397068);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036c0c4  FUN_0036c0c4 =====

void FUN_0036c0c4(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_003918c0;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036c108  FUN_0036c108 =====

void FUN_0036c108(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_003918c0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036c160  FUN_0036c160 =====

void FUN_0036c160(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0036c198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(param_1 + 0x18))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036c1a0  FUN_0036c1a0 =====

void FUN_0036c1a0(void *param_1)

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


// ===== 0036c1d8  margelo::nitro::rive::JHybridViewModelImagePropertySpec::CxxPart::registerNatives =====

/* margelo::nitro::rive::JHybridViewModelImagePropertySpec::CxxPart::registerNatives() */

void margelo::nitro::rive::JHybridViewModelImagePropertySpec::CxxPart::registerNatives(void)

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
  puStack_58 = PTR_kDescriptor_00390f28;
  local_60 = PTR_s_initHybrid_00390f20;
  local_50 = PTR_call_00390f30;
  pcVar9 = (char *)operator_new(0x40);
  uVar7 = s_Lcom_margelo_nitro_rive_HybridVi_001d7841._33_8_;
  uVar6 = s_Lcom_margelo_nitro_rive_HybridVi_001d7841._25_8_;
  uVar5 = s_Lcom_margelo_nitro_rive_HybridVi_001d7841._17_8_;
  uVar4 = s_Lcom_margelo_nitro_rive_HybridVi_001d7841._9_8_;
  uVar3 = s_Lcom_margelo_nitro_rive_HybridVi_001d7841._1_8_;
  uVar2 = CONCAT17(s_Lcom_margelo_nitro_rive_HybridVi_001d7841[0x30],
                   s_Lcom_margelo_nitro_rive_HybridVi_001d7841._41_7_);
  pcVar9[0x3f] = '\0';
  *(undefined8 *)(pcVar9 + 0x28) = uVar2;
  *(undefined8 *)(pcVar9 + 0x20) = uVar7;
  *(undefined8 *)(pcVar9 + 8) = uVar4;
  *(undefined8 *)pcVar9 = uVar3;
  *(undefined8 *)(pcVar9 + 0x18) = uVar6;
  *(undefined8 *)(pcVar9 + 0x10) = uVar5;
  uVar2 = CONCAT71(s_Lcom_margelo_nitro_rive_HybridVi_001d7841._49_7_,
                   s_Lcom_margelo_nitro_rive_HybridVi_001d7841[0x30]);
  *(undefined8 *)(pcVar9 + 0x37) = s_Lcom_margelo_nitro_rive_HybridVi_001d7841._56_8_;
  *(undefined8 *)(pcVar9 + 0x2f) = uVar2;
                    /* try { // try from 0036c240 to 0036c247 has its CatchHandler @ 0036c2b8 */
  facebook::jni::findClassLocal(pcVar9);
  operator_delete(pcVar9);
                    /* try { // try from 0036c250 to 0036c277 has its CatchHandler @ 0036c2cc */
  plVar10 = (long *)facebook::jni::Environment::current();
  iVar8 = (**(code **)(*plVar10 + 0x6b8))(plVar10,local_40,&local_60,1);
  facebook::jni::throwCppExceptionIf(iVar8 != 0);
  if (local_40 != 0) {
                    /* try { // try from 0036c280 to 0036c293 has its CatchHandler @ 0036c2c8 */
    plVar10 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar10 + 0xb8))(plVar10,local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036c2f4  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelImagePropertySpec::CxxPart,margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridViewModelImagePropertySpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelImagePropertySpec::CxxPart,margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   (*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelImagePropertySpec::CxxPart,
   margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart, void>::_javaobject*>),
   &margelo::nitro::rive::JHybridViewModelImagePropertySpec::CxxPart::initHybrid,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelImagePropertySpec::CxxPart,
   margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart, void>::_javaobject*,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>>::call(_JNIEnv*, _jobject*) */

undefined8
facebook::jni::detail::
FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelImagePropertySpec::CxxPart,margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridViewModelImagePropertySpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelImagePropertySpec::CxxPart,margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>
::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  JniEnvCacher aJStack_48 [24];
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_48,param_1);
                    /* try { // try from 0036c320 to 0036c32b has its CatchHandler @ 0036c35c */
  FUN_0036aac4(&local_30,param_2);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036c3a8  margelo::nitro::rive::JHybridViewModelImagePropertySpec::set =====

/* virtual thunk to
   margelo::nitro::rive::JHybridViewModelImagePropertySpec::set(std::__ndk1::optional<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridRiveImageSpec>
   > const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelImagePropertySpec::set
          (JHybridViewModelImagePropertySpec *this,optional *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    set(this + *(long *)(*(long *)this + -0x40),param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036c3ec  margelo::nitro::rive::JHybridViewModelImagePropertySpec::addListener =====

/* virtual thunk to
   margelo::nitro::rive::JHybridViewModelImagePropertySpec::addListener(std::__ndk1::function<void
   ()> const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelImagePropertySpec::addListener
          (JHybridViewModelImagePropertySpec *this,function *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    addListener((function *)(this + *(long *)(*(long *)this + -0x48)));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036c430  margelo::nitro::rive::JHybridViewModelImagePropertySpec::removeListeners =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelImagePropertySpec::removeListeners() */

void __thiscall
margelo::nitro::rive::JHybridViewModelImagePropertySpec::removeListeners
          (JHybridViewModelImagePropertySpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    removeListeners(this + *(long *)(*(long *)this + -0x50));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036c474  margelo::nitro::rive::JHybridViewModelListPropertySpec::JavaPart::getJHybridViewModelListPropertySpec =====

/* margelo::nitro::rive::JHybridViewModelListPropertySpec::JavaPart::getJHybridViewModelListPropertySpec()
    */

void __thiscall
margelo::nitro::rive::JHybridViewModelListPropertySpec::JavaPart::
getJHybridViewModelListPropertySpec(JavaPart *this)

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
     (lVar2 = __dynamic_cast(local_38,PTR_typeinfo_00395e60,PTR_typeinfo_00397088,0xffffffffffffffff
                            ), lVar2 == 0)) {
    *in_x8 = 0;
    in_x8[1] = 0;
    this_00 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0036c53c to 0036c547 has its CatchHandler @ 0036c57c */
    std::runtime_error::runtime_error
              (this_00,"Failed to downcast JHybridObject to JHybridViewModelListPropertySpec!");
    if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* try { // try from 0036c55c to 0036c573 has its CatchHandler @ 0036c574 */
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


// ===== 0036c5b8  FUN_0036c5b8 =====

void FUN_0036c5b8(long *param_1)

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


// ===== 0036c644  margelo::nitro::rive::JHybridViewModelListPropertySpec::CxxPart::initHybrid =====

/* margelo::nitro::rive::JHybridViewModelListPropertySpec::CxxPart::initHybrid(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelListPropertySpec::CxxPart,
   margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart, void>::_javaobject*>) */

void __thiscall
margelo::nitro::rive::JHybridViewModelListPropertySpec::CxxPart::initHybrid
          (undefined8 *param_1,CxxPart *this)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_0036c69c(&local_30,*(undefined8 *)this);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036c69c  FUN_0036c69c =====

void FUN_0036c69c(undefined8 *param_1,undefined8 param_2)

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
                    /* try { // try from 0036c6d4 to 0036c6db has its CatchHandler @ 0036c7b8 */
  local_48 = param_2;
  margelo::nitro::JHybridObject::CxxPart::CxxPart(pCVar2,&local_48);
  *(undefined **)pCVar2 = PTR_vtable_00397090 + 0x10;
                    /* try { // try from 0036c6ec to 0036c6f3 has its CatchHandler @ 0036c7b0 */
  facebook::jni::detail::HybridData::create();
  uVar5 = *param_1;
                    /* try { // try from 0036c6f8 to 0036c713 has its CatchHandler @ 0036c7cc */
  plVar3 = (long *)facebook::jni::Environment::current();
  lVar4 = (**(code **)(*plVar3 + 200))(plVar3,uVar5);
  facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 0036c71c to 0036c727 has its CatchHandler @ 0036c780 */
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
                    /* try { // try from 0036c748 to 0036c75b has its CatchHandler @ 0036c7c8 */
    plVar3 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb8))(plVar3,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036c804  FUN_0036c804 =====

void FUN_0036c804(long *param_1)

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
                    /* try { // try from 0036c840 to 0036c853 has its CatchHandler @ 0036c890 */
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


// ===== 0036c894  margelo::nitro::rive::JHybridViewModelListPropertySpec::CxxPart::createHybridObject =====

/* margelo::nitro::rive::JHybridViewModelListPropertySpec::CxxPart::createHybridObject(facebook::jni::basic_strong_ref<margelo::nitro::JHybridObject::JavaPart,
   facebook::jni::LocalReferenceAllocator> const&) */

void margelo::nitro::rive::JHybridViewModelListPropertySpec::CxxPart::createHybridObject
               (basic_strong_ref *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
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
  
  puVar1 = PTR_target_class_003970a8;
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*in_x1 == 0) {
LAB_0036cba0:
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0036cbac to 0036cbb7 has its CatchHandler @ 0036cd44 */
    param_1 = (basic_strong_ref *)
              std::runtime_error::runtime_error
                        (this,
                         "Failed to cast JHybridObject::JavaPart to JHybridViewModelListPropertySpec::JavaPart!"
                        );
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0036cbc8 to 0036cbdf has its CatchHandler @ 0036cd40 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_0036ce10;
  }
  if (((*PTR_target_class_003970b0 & 1) == 0) &&
     (param_1 = (basic_strong_ref *)__cxa_guard_acquire(PTR_target_class_003970b0),
     (int)param_1 != 0)) {
                    /* try { // try from 0036cbf0 to 0036cbff has its CatchHandler @ 0036cd04 */
    facebook::jni::findClassStatic(PTR_kBaseName_003970b8);
    *(undefined8 *)puVar1 = local_60;
    param_1 = (basic_strong_ref *)__cxa_guard_release(PTR_target_class_003970b0);
  }
  if (*(long *)puVar1 == 0) {
    if (*(long *)(lVar2 + 0x28) != local_58) goto LAB_0036ce10;
    FUN_00261580("java/lang/ClassCastException","Could not find class %s.",PTR_kBaseName_003970b8);
LAB_0036cc44:
                    /* try { // try from 0036cc44 to 0036cc53 has its CatchHandler @ 0036cd30 */
    param_1 = (basic_strong_ref *)FUN_002615d4(local_80,&local_68);
    uVar8 = (ulong)local_80 | 1;
    if ((local_80[0] & 1) != 0) {
      uVar8 = local_70;
    }
    if (*(long *)(lVar2 + 0x28) != local_58) goto LAB_0036ce10;
                    /* try { // try from 0036cc78 to 0036cc93 has its CatchHandler @ 0036cd18 */
    FUN_0026171c("java/lang/ClassCastException","Tried to cast from %s to %s.",uVar8,
                 PTR_kBaseName_003970b8);
  }
  else {
                    /* try { // try from 0036c8ec to 0036c8ff has its CatchHandler @ 0036cd98 */
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5,*in_x1);
    local_68 = lVar6;
                    /* try { // try from 0036c908 to 0036c91f has its CatchHandler @ 0036cd94 */
    plVar5 = (long *)facebook::jni::Environment::current();
    cVar4 = (**(code **)(*plVar5 + 0x58))(plVar5,lVar6,*(undefined8 *)puVar1);
    if (cVar4 == '\0') goto LAB_0036cc44;
    lVar10 = *in_x1;
    if (lVar10 == 0) {
      local_88 = 0;
    }
    else {
                    /* try { // try from 0036c930 to 0036c94b has its CatchHandler @ 0036cd9c */
      plVar5 = (long *)facebook::jni::Environment::current();
      local_88 = (**(code **)(*plVar5 + 200))(plVar5,lVar10);
      facebook::jni::throwPendingJniExceptionAsCppException();
      if (local_88 == 0) {
        pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
        param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar9);
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0036ccec to 0036cd03 has its CatchHandler @ 0036cd9c */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(pbVar9,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
        }
        goto LAB_0036ce10;
      }
    }
    if (lVar6 != 0) {
                    /* try { // try from 0036c968 to 0036c97b has its CatchHandler @ 0036cd90 */
      plVar5 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar5 + 0xb8))(plVar5,lVar6);
    }
    if (local_88 == 0) goto LAB_0036cba0;
                    /* try { // try from 0036c980 to 0036c987 has its CatchHandler @ 0036cd7c */
    plVar5 = (long *)operator_new(0xa8);
    puVar1 = PTR_vtable_00395e70;
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_00392ef0;
    plVar11 = plVar5 + 3;
    *plVar11 = (long)(puVar1 + 0x10);
    puVar3 = PTR_PTR_00397078;
                    /* try { // try from 0036c9b8 to 0036c9d3 has its CatchHandler @ 0036cd74 */
    margelo::nitro::HybridObject::HybridObject((HybridObject *)(plVar5 + 5),PTR_PTR_00397078 + 0x58)
    ;
    puVar1 = PTR_construction_vtable_00397080 + 0xb8;
    plVar5[5] = (long)(PTR_construction_vtable_00397080 + 0x1a0);
    plVar5[3] = (long)puVar1;
                    /* try { // try from 0036c9ec to 0036ca07 has its CatchHandler @ 0036cda8 */
    plVar7 = (long *)facebook::jni::Environment::current();
    uVar8 = (**(code **)(*plVar7 + 200))(plVar7,local_88);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 0036ca0c to 0036ca1b has its CatchHandler @ 0036cd64 */
    local_80[0] = uVar8;
    margelo::nitro::JHybridObject::JHybridObject((JHybridObject *)(plVar5 + 0x13),puVar3 + 0xa8);
    uVar8 = local_80[0];
    if (local_80[0] != 0) {
                    /* try { // try from 0036ca24 to 0036ca37 has its CatchHandler @ 0036cd8c */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,uVar8);
    }
                    /* try { // try from 0036ca38 to 0036ca53 has its CatchHandler @ 0036cda0 */
    plVar7 = (long *)facebook::jni::Environment::current();
    uVar8 = (**(code **)(*plVar7 + 200))(plVar7,local_88);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 0036ca58 to 0036ca67 has its CatchHandler @ 0036cd54 */
    local_80[0] = uVar8;
    FUN_00357adc(plVar5 + 0x11,puVar3 + 0x80,uVar8);
    if (uVar8 != 0) {
                    /* try { // try from 0036ca6c to 0036ca7f has its CatchHandler @ 0036cd88 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,uVar8);
    }
    puVar3 = PTR_vtable_00397070;
    puVar1 = PTR_vtable_00397070 + 0xd0;
    plVar5[5] = (long)(PTR_vtable_00397070 + 0x1b8);
    *plVar11 = (long)puVar1;
    plVar5[0x11] = (long)(puVar3 + 0x238);
    plVar5[0x13] = (long)(puVar3 + 0x298);
                    /* try { // try from 0036caa8 to 0036cac3 has its CatchHandler @ 0036cdb0 */
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
      *in_x8 = (long)plVar11 + *(long *)(plVar5[3] + -0xd0);
      in_x8[1] = (long)plVar5;
      if (local_88 != 0) {
                    /* try { // try from 0036cb5c to 0036cb6f has its CatchHandler @ 0036cd84 */
        plVar5 = (long *)facebook::jni::Environment::current();
        param_1 = (basic_strong_ref *)(**(code **)(*plVar5 + 0xb8))(plVar5,local_88);
      }
      if (*(long *)(lVar2 + 0x28) == local_58) {
        return;
      }
      goto LAB_0036ce10;
    }
  }
  pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
  param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar9);
  if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0036ccb4 to 0036cccb has its CatchHandler @ 0036cdb0 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pbVar9,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
  }
LAB_0036ce10:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0036ce14  FUN_0036ce14 =====

void FUN_0036ce14(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 0036ce40 to 0036ce53 has its CatchHandler @ 0036ce80 */
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


// ===== 0036ce84  FUN_0036ce84 =====

void FUN_0036ce84(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_0036f9d8();
  FUN_00356a9c(param_1 + 0x70,PTR_PTR_00397078 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(param_1 + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(param_1 + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036cf04  FUN_0036cf04 =====

void FUN_0036cf04(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_0036f9d8();
  FUN_00356a9c(param_1 + 0x70,PTR_PTR_00397078 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(param_1 + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(param_1 + 0x10));
  facebook::jsi::NativeState::~NativeState(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036cf8c  margelo::nitro::rive::JHybridViewModelListPropertySpec::getLength =====

/* margelo::nitro::rive::JHybridViewModelListPropertySpec::getLength() */

undefined1  [16] __thiscall
margelo::nitro::rive::JHybridViewModelListPropertySpec::getLength
          (JHybridViewModelListPropertySpec *this)

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
  if (((DAT_0039e898 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039e898), iVar2 != 0)) {
                    /* try { // try from 0036d020 to 0036d037 has its CatchHandler @ 0036d04c */
    FUN_0036fd08(auStack_40);
    DAT_0039e890 = FUN_002620fc(auStack_40,"getLength");
    __cxa_guard_release(&DAT_0039e898);
  }
  uVar4 = *(undefined8 *)(this + 8);
  uVar3 = facebook::jni::Environment::current();
  auVar5._0_8_ = FUN_00262180(uVar3,uVar4,DAT_0039e890);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    facebook::jni::throwPendingJniExceptionAsCppException();
    auVar5._8_8_ = 0;
    return auVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036d078  margelo::nitro::rive::JHybridViewModelListPropertySpec::getInstanceAt =====

/* margelo::nitro::rive::JHybridViewModelListPropertySpec::getInstanceAt(double) */

void margelo::nitro::rive::JHybridViewModelListPropertySpec::getInstanceAt(double param_1)

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
  if (((DAT_0039e8a8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039e8a8), iVar3 != 0)) {
                    /* try { // try from 0036d17c to 0036d193 has its CatchHandler @ 0036d1a8 */
    FUN_0036fd08(&local_60);
    DAT_0039e8a0 = FUN_00350340(&local_60,"getInstanceAt");
    __cxa_guard_release(&DAT_0039e8a8);
  }
  p_Var7 = *(_jmethodID **)(in_x0 + 8);
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::CallObjectMethod(p_Var4,p_Var7,param_1,DAT_0039e8a0);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_50 = lVar5;
  if (lVar5 == 0) {
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 2) = 0;
  }
  else {
                    /* try { // try from 0036d0e4 to 0036d0ef has its CatchHandler @ 0036d1bc */
    JHybridViewModelInstanceSpec::JavaPart::getJHybridViewModelInstanceSpec((JavaPart *)&local_50);
    lVar2 = local_50;
    lVar5 = lStack_58;
    plVar6 = local_60;
    local_60 = (long *)0x0;
    lStack_58 = 0;
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 2) = 0;
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)((long)plVar6 + *(long *)(*plVar6 + -0xa0));
    }
    *in_x8 = (long)plVar6;
    in_x8[1] = lVar5;
    *(undefined1 *)(in_x8 + 2) = 1;
    if (local_50 != 0) {
                    /* try { // try from 0036d124 to 0036d137 has its CatchHandler @ 0036d1e4 */
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


// ===== 0036d1e8  margelo::nitro::rive::JHybridViewModelListPropertySpec::getLengthAsync =====

/* margelo::nitro::rive::JHybridViewModelListPropertySpec::getLengthAsync() */

void margelo::nitro::rive::JHybridViewModelListPropertySpec::getLengthAsync(void)

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
  if (((DAT_0039e8b8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039e8b8), iVar4 != 0)) {
                    /* try { // try from 0036d3f8 to 0036d40f has its CatchHandler @ 0036d4cc */
    FUN_0036fd08(&local_90);
    DAT_0039e8b0 = FUN_0031e0a0(&local_90,"getLengthAsync");
    __cxa_guard_release(&DAT_0039e8b8);
  }
  p_Var13 = *(_jmethodID **)(in_x0 + 8);
  p_Var5 = (_jobject *)facebook::jni::Environment::current();
  lVar6 = _JNIEnv::CallObjectMethod(p_Var5,p_Var13,DAT_0039e8b0);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_98 = lVar6;
                    /* try { // try from 0036d24c to 0036d253 has its CatchHandler @ 0036d570 */
  ppuVar7 = (undefined **)operator_new(0x68);
  ppuVar7[0xc] = (undefined *)0x0;
  *in_x8 = ppuVar7;
  ppuVar7[1] = (undefined *)0x0;
  *ppuVar7 = (undefined *)0x0;
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
  local_90 = ppuVar7;
                    /* try { // try from 0036d274 to 0036d27b has its CatchHandler @ 0036d560 */
  puVar8 = (undefined8 *)operator_new(0x20);
  puVar8[2] = 0;
  *puVar8 = &PTR____shared_weak_count_00392420;
  puVar8[1] = 0;
  puVar3 = PTR_hybridDataField_00396038;
  puVar8[3] = ppuVar7;
  in_x8[1] = puVar8;
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0036d444 to 0036d447 has its CatchHandler @ 0036d4b0 */
    uVar9 = FUN_0031e19c(local_90);
    *(undefined8 *)PTR_hybridDataField_00396030 = uVar9;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0036d2a4 to 0036d2b7 has its CatchHandler @ 0036d57c */
  puVar2 = PTR_hybridDataField_00396030;
  uVar9 = facebook::jni::getHybridDataFromField
                    ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uStack_88 = *in_x8;
  local_80 = in_x8[1];
  if (local_80 != 0) {
    FUN_00259a00(1,local_80 + 8);
  }
  local_90 = &PTR_FUN_003924b0;
                    /* try { // try from 0036d2ec to 0036d2f3 has its CatchHandler @ 0036d520 */
  local_70 = &local_90;
  FUN_0031e2bc(uVar9,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar11 = &local_90;
LAB_0036d314:
    (*(code *)(*pppuVar11)[lVar6])();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar6 = 5;
    pppuVar11 = local_70;
    goto LAB_0036d314;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0036d48c to 0036d48f has its CatchHandler @ 0036d4ac */
    uVar9 = FUN_0031e19c(local_90);
    *(undefined8 *)puVar2 = uVar9;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0036d328 to 0036d337 has its CatchHandler @ 0036d57c */
  uVar10 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uVar9 = *in_x8;
  lVar6 = in_x8[1];
  if (lVar6 != 0) {
    FUN_00259a00(1,lVar6 + 8);
  }
  local_90 = &PTR_FUN_00392540;
                    /* try { // try from 0036d36c to 0036d373 has its CatchHandler @ 0036d4e0 */
  uStack_88 = uVar9;
  local_80 = lVar6;
  local_70 = &local_90;
  FUN_0031e5cc(uVar10,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar11 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_0036d3a0;
    lVar6 = 5;
    pppuVar11 = local_70;
  }
  (*(code *)(*pppuVar11)[lVar6])();
LAB_0036d3a0:
  lVar6 = local_98;
  if (local_98 != 0) {
                    /* try { // try from 0036d3a8 to 0036d3bb has its CatchHandler @ 0036d578 */
    plVar12 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar12 + 0xb8))(plVar12,lVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036d5ac  margelo::nitro::rive::JHybridViewModelListPropertySpec::getInstanceAtAsync =====

/* margelo::nitro::rive::JHybridViewModelListPropertySpec::getInstanceAtAsync(double) */

void margelo::nitro::rive::JHybridViewModelListPropertySpec::getInstanceAtAsync(double param_1)

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
  if (((DAT_0039e8c8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039e8c8), iVar4 != 0)) {
                    /* try { // try from 0036d7cc to 0036d7e3 has its CatchHandler @ 0036d8a0 */
    FUN_0036fd08(&local_90);
    DAT_0039e8c0 = FUN_003707a4(&local_90,"getInstanceAtAsync");
    __cxa_guard_release(&DAT_0039e8c8);
  }
  p_Var13 = *(_jmethodID **)(in_x0 + 8);
  p_Var5 = (_jobject *)facebook::jni::Environment::current();
  lVar6 = _JNIEnv::CallObjectMethod(p_Var5,p_Var13,param_1,DAT_0039e8c0);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_98 = lVar6;
                    /* try { // try from 0036d61c to 0036d623 has its CatchHandler @ 0036d944 */
  ppuVar7 = (undefined **)operator_new(0x80);
  *in_x8 = ppuVar7;
  ppuVar7[1] = (undefined *)0x0;
  *ppuVar7 = (undefined *)0x0;
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
  ppuVar7[0xf] = (undefined *)0x0;
  ppuVar7[0xe] = (undefined *)0x0;
  local_90 = ppuVar7;
                    /* try { // try from 0036d644 to 0036d64b has its CatchHandler @ 0036d934 */
  puVar8 = (undefined8 *)operator_new(0x20);
  puVar8[2] = 0;
  *puVar8 = &PTR____shared_weak_count_003925d0;
  puVar8[1] = 0;
  puVar3 = PTR_hybridDataField_00396038;
  puVar8[3] = ppuVar7;
  in_x8[1] = puVar8;
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0036d818 to 0036d81b has its CatchHandler @ 0036d884 */
    uVar9 = FUN_0031e19c(local_90);
    *(undefined8 *)PTR_hybridDataField_00396030 = uVar9;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0036d674 to 0036d687 has its CatchHandler @ 0036d950 */
  puVar2 = PTR_hybridDataField_00396030;
  uVar9 = facebook::jni::getHybridDataFromField
                    ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uStack_88 = *in_x8;
  local_80 = in_x8[1];
  if (local_80 != 0) {
    FUN_00259a00(1,local_80 + 8);
  }
  local_90 = &PTR_FUN_00392710;
                    /* try { // try from 0036d6bc to 0036d6c3 has its CatchHandler @ 0036d8f4 */
  local_70 = &local_90;
  FUN_0031e2bc(uVar9,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar11 = &local_90;
LAB_0036d6e4:
    (*(code *)(*pppuVar11)[lVar6])();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar6 = 5;
    pppuVar11 = local_70;
    goto LAB_0036d6e4;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0036d860 to 0036d863 has its CatchHandler @ 0036d880 */
    uVar9 = FUN_0031e19c(local_90);
    *(undefined8 *)puVar2 = uVar9;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0036d6f8 to 0036d707 has its CatchHandler @ 0036d950 */
  uVar10 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uVar9 = *in_x8;
  lVar6 = in_x8[1];
  if (lVar6 != 0) {
    FUN_00259a00(1,lVar6 + 8);
  }
  local_90 = &PTR_FUN_00392790;
                    /* try { // try from 0036d73c to 0036d743 has its CatchHandler @ 0036d8b4 */
  uStack_88 = uVar9;
  local_80 = lVar6;
  local_70 = &local_90;
  FUN_0031e5cc(uVar10,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar11 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_0036d770;
    lVar6 = 5;
    pppuVar11 = local_70;
  }
  (*(code *)(*pppuVar11)[lVar6])();
LAB_0036d770:
  lVar6 = local_98;
  if (local_98 != 0) {
                    /* try { // try from 0036d778 to 0036d78b has its CatchHandler @ 0036d94c */
    plVar12 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar12 + 0xb8))(plVar12,lVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036d980  margelo::nitro::rive::JHybridViewModelListPropertySpec::addInstance =====

/* margelo::nitro::rive::JHybridViewModelListPropertySpec::addInstance(std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>
   const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelListPropertySpec::addInstance
          (JHybridViewModelListPropertySpec *this,shared_ptr *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  _jobject *p_Var4;
  long *plVar5;
  _jmethodID *p_Var6;
  undefined8 uVar7;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039e8d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039e8d8), iVar2 != 0)) {
                    /* try { // try from 0036daa8 to 0036dabf has its CatchHandler @ 0036dad8 */
    FUN_0036fd08(auStack_50);
    DAT_0039e8d0 = FUN_00344674(auStack_50,"addInstance");
    __cxa_guard_release(&DAT_0039e8d8);
  }
  p_Var6 = *(_jmethodID **)(this + 8);
  lVar3 = __dynamic_cast(*(undefined8 *)param_1,PTR_typeinfo_00395338,PTR_typeinfo_00396978,
                         0xffffffffffffffff);
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    FUN_00259a00(1,plVar5 + 1);
  }
  uVar7 = *(undefined8 *)(lVar3 + 8);
                    /* try { // try from 0036da04 to 0036da1f has its CatchHandler @ 0036daec */
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var4,p_Var6,DAT_0039e8d0,uVar7);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if ((plVar5 == (long *)0x0) || (lVar3 = FUN_00255510(0xffffffffffffffff,plVar5 + 1), lVar3 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    if (*(long *)(lVar1 + 0x28) == local_48) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036db14  margelo::nitro::rive::JHybridViewModelListPropertySpec::addInstanceAt =====

/* margelo::nitro::rive::JHybridViewModelListPropertySpec::addInstanceAt(std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>
   const&, double) */

void __thiscall
margelo::nitro::rive::JHybridViewModelListPropertySpec::addInstanceAt
          (JHybridViewModelListPropertySpec *this,shared_ptr *param_1,double param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  _jobject *p_Var5;
  long *plVar6;
  _jmethodID *p_Var7;
  undefined8 uVar8;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039e8e8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039e8e8), iVar3 != 0)) {
                    /* try { // try from 0036dc34 to 0036dc43 has its CatchHandler @ 0036dc5c */
    FUN_0036fd08(auStack_50);
    DAT_0039e8e0 = FUN_00372f24(auStack_50);
    __cxa_guard_release(&DAT_0039e8e8);
  }
  p_Var7 = *(_jmethodID **)(this + 8);
  lVar4 = __dynamic_cast(*(undefined8 *)param_1,PTR_typeinfo_00395338,PTR_typeinfo_00396978,
                         0xffffffffffffffff);
  plVar6 = *(long **)(param_1 + 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    FUN_00259a00(1,plVar6 + 1);
  }
  uVar8 = *(undefined8 *)(lVar4 + 8);
                    /* try { // try from 0036dba0 to 0036dbc3 has its CatchHandler @ 0036dc70 */
  p_Var5 = (_jobject *)facebook::jni::Environment::current();
  cVar2 = _JNIEnv::CallBooleanMethod(p_Var5,p_Var7,param_2,DAT_0039e8e0,uVar8);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if ((plVar6 != (long *)0x0) && (lVar4 = FUN_00255510(0xffffffffffffffff,plVar6 + 1), lVar4 == 0))
  {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2 != '\0');
}


// ===== 0036dc98  margelo::nitro::rive::JHybridViewModelListPropertySpec::removeInstance =====

/* margelo::nitro::rive::JHybridViewModelListPropertySpec::removeInstance(std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>
   const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelListPropertySpec::removeInstance
          (JHybridViewModelListPropertySpec *this,shared_ptr *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  _jobject *p_Var4;
  long *plVar5;
  _jmethodID *p_Var6;
  undefined8 uVar7;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039e8f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039e8f8), iVar2 != 0)) {
                    /* try { // try from 0036ddc0 to 0036ddd7 has its CatchHandler @ 0036ddf0 */
    FUN_0036fd08(auStack_50);
    DAT_0039e8f0 = FUN_00344674(auStack_50,"removeInstance");
    __cxa_guard_release(&DAT_0039e8f8);
  }
  p_Var6 = *(_jmethodID **)(this + 8);
  lVar3 = __dynamic_cast(*(undefined8 *)param_1,PTR_typeinfo_00395338,PTR_typeinfo_00396978,
                         0xffffffffffffffff);
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    FUN_00259a00(1,plVar5 + 1);
  }
  uVar7 = *(undefined8 *)(lVar3 + 8);
                    /* try { // try from 0036dd1c to 0036dd37 has its CatchHandler @ 0036de04 */
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var4,p_Var6,DAT_0039e8f0,uVar7);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if ((plVar5 == (long *)0x0) || (lVar3 = FUN_00255510(0xffffffffffffffff,plVar5 + 1), lVar3 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    if (*(long *)(lVar1 + 0x28) == local_48) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036de2c  margelo::nitro::rive::JHybridViewModelListPropertySpec::removeInstanceAt =====

/* margelo::nitro::rive::JHybridViewModelListPropertySpec::removeInstanceAt(double) */

void __thiscall
margelo::nitro::rive::JHybridViewModelListPropertySpec::removeInstanceAt
          (JHybridViewModelListPropertySpec *this,double param_1)

{
  long lVar1;
  int iVar2;
  _jobject *p_Var3;
  _jmethodID *p_Var4;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039e908 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039e908), iVar2 != 0)) {
                    /* try { // try from 0036debc to 0036ded3 has its CatchHandler @ 0036dee8 */
    FUN_0036fd08(auStack_40);
    DAT_0039e900 = FUN_0035a6d8(auStack_40,"removeInstanceAt");
    __cxa_guard_release(&DAT_0039e908);
  }
  p_Var4 = *(_jmethodID **)(this + 8);
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var3,p_Var4,param_1,DAT_0039e900);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    facebook::jni::throwPendingJniExceptionAsCppException();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036df14  margelo::nitro::rive::JHybridViewModelListPropertySpec::swap =====

/* margelo::nitro::rive::JHybridViewModelListPropertySpec::swap(double, double) */

bool __thiscall
margelo::nitro::rive::JHybridViewModelListPropertySpec::swap
          (JHybridViewModelListPropertySpec *this,double param_1,double param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  _jobject *p_Var4;
  _jmethodID *p_Var5;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039e918 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039e918), iVar3 != 0)) {
                    /* try { // try from 0036dfbc to 0036dfcb has its CatchHandler @ 0036dfe0 */
    FUN_0036fd08(auStack_50);
    DAT_0039e910 = FUN_00372ea8(auStack_50);
    __cxa_guard_release(&DAT_0039e918);
  }
  p_Var5 = *(_jmethodID **)(this + 8);
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  cVar2 = _JNIEnv::CallBooleanMethod(p_Var4,p_Var5,param_1,param_2,DAT_0039e910);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    facebook::jni::throwPendingJniExceptionAsCppException();
    return cVar2 != '\0';
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036e00c  margelo::nitro::rive::JHybridViewModelListPropertySpec::addInstanceAsync =====

/* margelo::nitro::rive::JHybridViewModelListPropertySpec::addInstanceAsync(std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>
   const&) */

void margelo::nitro::rive::JHybridViewModelListPropertySpec::addInstanceAsync(shared_ptr *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  _jobject *p_Var6;
  undefined8 uVar7;
  undefined ***pppuVar8;
  undefined8 *in_x1;
  undefined8 *in_x8;
  long *plVar9;
  _jmethodID *p_Var10;
  undefined8 uVar11;
  long local_98;
  undefined **local_90;
  undefined8 uStack_88;
  long local_80;
  undefined ***local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039e928 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039e928), iVar4 != 0)) {
                    /* try { // try from 0036e254 to 0036e26b has its CatchHandler @ 0036e32c */
    FUN_0036fd08(&local_90);
    DAT_0039e920 = FUN_00371188(&local_90,"addInstanceAsync");
    __cxa_guard_release(&DAT_0039e928);
  }
  p_Var10 = *(_jmethodID **)(param_1 + 8);
  lVar5 = __dynamic_cast(*in_x1,PTR_typeinfo_00395338,PTR_typeinfo_00396978,0xffffffffffffffff);
  plVar9 = (long *)in_x1[1];
  if (plVar9 == (long *)0x0) {
    plVar9 = (long *)0x0;
  }
  else {
    FUN_00259a00(1,plVar9 + 1);
  }
  uVar11 = *(undefined8 *)(lVar5 + 8);
                    /* try { // try from 0036e098 to 0036e0b7 has its CatchHandler @ 0036e3e4 */
  p_Var6 = (_jobject *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::CallObjectMethod(p_Var6,p_Var10,DAT_0039e920,uVar11);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_98 = lVar5;
  if ((plVar9 != (long *)0x0) && (lVar5 = FUN_00255510(0xffffffffffffffff,plVar9 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0036e0e8 to 0036e0ef has its CatchHandler @ 0036e3c0 */
  margelo::nitro::Promise<void>::create();
  puVar3 = PTR_hybridDataField_00396038;
  if (((*PTR_hybridDataField_00396038 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0036e2a4 to 0036e2a7 has its CatchHandler @ 0036e310 */
    uVar11 = FUN_0031e19c(local_90);
    *(undefined8 *)PTR_hybridDataField_00396030 = uVar11;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0036e100 to 0036e113 has its CatchHandler @ 0036e3cc */
  puVar2 = PTR_hybridDataField_00396030;
  uVar11 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uStack_88 = *in_x8;
  local_80 = in_x8[1];
  if (local_80 != 0) {
    FUN_00259a00(1,local_80 + 8);
  }
  local_90 = &PTR_FUN_00392810;
                    /* try { // try from 0036e148 to 0036e14f has its CatchHandler @ 0036e380 */
  local_70 = &local_90;
  FUN_0031e2bc(uVar11,&local_90);
  if (local_70 == &local_90) {
    lVar5 = 4;
    pppuVar8 = &local_90;
LAB_0036e170:
    (*(code *)(*pppuVar8)[lVar5])();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar5 = 5;
    pppuVar8 = local_70;
    goto LAB_0036e170;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0036e2ec to 0036e2ef has its CatchHandler @ 0036e30c */
    uVar11 = FUN_0031e19c(local_90);
    *(undefined8 *)puVar2 = uVar11;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0036e184 to 0036e193 has its CatchHandler @ 0036e3cc */
  uVar7 = facebook::jni::getHybridDataFromField
                    ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uVar11 = *in_x8;
  lVar5 = in_x8[1];
  if (lVar5 != 0) {
    FUN_00259a00(1,lVar5 + 8);
  }
  local_90 = &PTR_FUN_00392890;
                    /* try { // try from 0036e1c8 to 0036e1cf has its CatchHandler @ 0036e340 */
  uStack_88 = uVar11;
  local_80 = lVar5;
  local_70 = &local_90;
  FUN_0031e5cc(uVar7,&local_90);
  if (local_70 == &local_90) {
    lVar5 = 4;
    pppuVar8 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_0036e1fc;
    lVar5 = 5;
    pppuVar8 = local_70;
  }
  (*(code *)(*pppuVar8)[lVar5])();
LAB_0036e1fc:
  lVar5 = local_98;
  if (local_98 != 0) {
                    /* try { // try from 0036e204 to 0036e217 has its CatchHandler @ 0036e3c8 */
    plVar9 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar9 + 0xb8))(plVar9,lVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036e40c  margelo::nitro::rive::JHybridViewModelListPropertySpec::addInstanceAtAsync =====

/* margelo::nitro::rive::JHybridViewModelListPropertySpec::addInstanceAtAsync(std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>
   const&, double) */

void margelo::nitro::rive::JHybridViewModelListPropertySpec::addInstanceAtAsync
               (shared_ptr *param_1,double param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  _jobject *p_Var6;
  undefined8 uVar7;
  undefined ***pppuVar8;
  undefined8 *in_x1;
  undefined8 *in_x8;
  long *plVar9;
  _jmethodID *p_Var10;
  undefined8 uVar11;
  long local_98;
  undefined **local_90;
  undefined8 uStack_88;
  long local_80;
  undefined ***local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039e938 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039e938), iVar4 != 0)) {
                    /* try { // try from 0036e664 to 0036e673 has its CatchHandler @ 0036e734 */
    FUN_0036fd08(&local_90);
    DAT_0039e930 = FUN_00371b6c(&local_90);
    __cxa_guard_release(&DAT_0039e938);
  }
  p_Var10 = *(_jmethodID **)(param_1 + 8);
  lVar5 = __dynamic_cast(*in_x1,PTR_typeinfo_00395338,PTR_typeinfo_00396978,0xffffffffffffffff);
  plVar9 = (long *)in_x1[1];
  if (plVar9 == (long *)0x0) {
    plVar9 = (long *)0x0;
  }
  else {
    FUN_00259a00(1,plVar9 + 1);
  }
  uVar11 = *(undefined8 *)(lVar5 + 8);
                    /* try { // try from 0036e4a0 to 0036e4c3 has its CatchHandler @ 0036e7ec */
  p_Var6 = (_jobject *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::CallObjectMethod(p_Var6,p_Var10,param_2,DAT_0039e930,uVar11);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_98 = lVar5;
  if ((plVar9 != (long *)0x0) && (lVar5 = FUN_00255510(0xffffffffffffffff,plVar9 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0036e4f4 to 0036e4fb has its CatchHandler @ 0036e7c8 */
  margelo::nitro::Promise<void>::create();
  puVar3 = PTR_hybridDataField_00396038;
  if (((*PTR_hybridDataField_00396038 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0036e6ac to 0036e6af has its CatchHandler @ 0036e718 */
    uVar11 = FUN_0031e19c(local_90);
    *(undefined8 *)PTR_hybridDataField_00396030 = uVar11;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0036e50c to 0036e51f has its CatchHandler @ 0036e7d4 */
  puVar2 = PTR_hybridDataField_00396030;
  uVar11 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uStack_88 = *in_x8;
  local_80 = in_x8[1];
  if (local_80 != 0) {
    FUN_00259a00(1,local_80 + 8);
  }
  local_90 = &PTR_FUN_00392910;
                    /* try { // try from 0036e554 to 0036e55b has its CatchHandler @ 0036e788 */
  local_70 = &local_90;
  FUN_0031e2bc(uVar11,&local_90);
  if (local_70 == &local_90) {
    lVar5 = 4;
    pppuVar8 = &local_90;
LAB_0036e57c:
    (*(code *)(*pppuVar8)[lVar5])();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar5 = 5;
    pppuVar8 = local_70;
    goto LAB_0036e57c;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0036e6f4 to 0036e6f7 has its CatchHandler @ 0036e714 */
    uVar11 = FUN_0031e19c(local_90);
    *(undefined8 *)puVar2 = uVar11;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0036e590 to 0036e59f has its CatchHandler @ 0036e7d4 */
  uVar7 = facebook::jni::getHybridDataFromField
                    ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uVar11 = *in_x8;
  lVar5 = in_x8[1];
  if (lVar5 != 0) {
    FUN_00259a00(1,lVar5 + 8);
  }
  local_90 = &PTR_FUN_00392990;
                    /* try { // try from 0036e5d4 to 0036e5db has its CatchHandler @ 0036e748 */
  uStack_88 = uVar11;
  local_80 = lVar5;
  local_70 = &local_90;
  FUN_0031e5cc(uVar7,&local_90);
  if (local_70 == &local_90) {
    lVar5 = 4;
    pppuVar8 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_0036e608;
    lVar5 = 5;
    pppuVar8 = local_70;
  }
  (*(code *)(*pppuVar8)[lVar5])();
LAB_0036e608:
  lVar5 = local_98;
  if (local_98 != 0) {
                    /* try { // try from 0036e610 to 0036e623 has its CatchHandler @ 0036e7d0 */
    plVar9 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar9 + 0xb8))(plVar9,lVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036e814  margelo::nitro::rive::JHybridViewModelListPropertySpec::removeInstanceAsync =====

/* margelo::nitro::rive::JHybridViewModelListPropertySpec::removeInstanceAsync(std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>
   const&) */

void margelo::nitro::rive::JHybridViewModelListPropertySpec::removeInstanceAsync
               (shared_ptr *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  _jobject *p_Var6;
  undefined8 uVar7;
  undefined ***pppuVar8;
  undefined8 *in_x1;
  undefined8 *in_x8;
  long *plVar9;
  _jmethodID *p_Var10;
  undefined8 uVar11;
  long local_98;
  undefined **local_90;
  undefined8 uStack_88;
  long local_80;
  undefined ***local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039e948 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039e948), iVar4 != 0)) {
                    /* try { // try from 0036ea5c to 0036ea73 has its CatchHandler @ 0036eb34 */
    FUN_0036fd08(&local_90);
    DAT_0039e940 = FUN_00371188(&local_90,"removeInstanceAsync");
    __cxa_guard_release(&DAT_0039e948);
  }
  p_Var10 = *(_jmethodID **)(param_1 + 8);
  lVar5 = __dynamic_cast(*in_x1,PTR_typeinfo_00395338,PTR_typeinfo_00396978,0xffffffffffffffff);
  plVar9 = (long *)in_x1[1];
  if (plVar9 == (long *)0x0) {
    plVar9 = (long *)0x0;
  }
  else {
    FUN_00259a00(1,plVar9 + 1);
  }
  uVar11 = *(undefined8 *)(lVar5 + 8);
                    /* try { // try from 0036e8a0 to 0036e8bf has its CatchHandler @ 0036ebec */
  p_Var6 = (_jobject *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::CallObjectMethod(p_Var6,p_Var10,DAT_0039e940,uVar11);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_98 = lVar5;
  if ((plVar9 != (long *)0x0) && (lVar5 = FUN_00255510(0xffffffffffffffff,plVar9 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0036e8f0 to 0036e8f7 has its CatchHandler @ 0036ebc8 */
  margelo::nitro::Promise<void>::create();
  puVar3 = PTR_hybridDataField_00396038;
  if (((*PTR_hybridDataField_00396038 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0036eaac to 0036eaaf has its CatchHandler @ 0036eb18 */
    uVar11 = FUN_0031e19c(local_90);
    *(undefined8 *)PTR_hybridDataField_00396030 = uVar11;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0036e908 to 0036e91b has its CatchHandler @ 0036ebd4 */
  puVar2 = PTR_hybridDataField_00396030;
  uVar11 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uStack_88 = *in_x8;
  local_80 = in_x8[1];
  if (local_80 != 0) {
    FUN_00259a00(1,local_80 + 8);
  }
  local_90 = &PTR_FUN_00392a10;
                    /* try { // try from 0036e950 to 0036e957 has its CatchHandler @ 0036eb88 */
  local_70 = &local_90;
  FUN_0031e2bc(uVar11,&local_90);
  if (local_70 == &local_90) {
    lVar5 = 4;
    pppuVar8 = &local_90;
LAB_0036e978:
    (*(code *)(*pppuVar8)[lVar5])();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar5 = 5;
    pppuVar8 = local_70;
    goto LAB_0036e978;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0036eaf4 to 0036eaf7 has its CatchHandler @ 0036eb14 */
    uVar11 = FUN_0031e19c(local_90);
    *(undefined8 *)puVar2 = uVar11;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0036e98c to 0036e99b has its CatchHandler @ 0036ebd4 */
  uVar7 = facebook::jni::getHybridDataFromField
                    ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uVar11 = *in_x8;
  lVar5 = in_x8[1];
  if (lVar5 != 0) {
    FUN_00259a00(1,lVar5 + 8);
  }
  local_90 = &PTR_FUN_00392a90;
                    /* try { // try from 0036e9d0 to 0036e9d7 has its CatchHandler @ 0036eb48 */
  uStack_88 = uVar11;
  local_80 = lVar5;
  local_70 = &local_90;
  FUN_0031e5cc(uVar7,&local_90);
  if (local_70 == &local_90) {
    lVar5 = 4;
    pppuVar8 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_0036ea04;
    lVar5 = 5;
    pppuVar8 = local_70;
  }
  (*(code *)(*pppuVar8)[lVar5])();
LAB_0036ea04:
  lVar5 = local_98;
  if (local_98 != 0) {
                    /* try { // try from 0036ea0c to 0036ea1f has its CatchHandler @ 0036ebd0 */
    plVar9 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar9 + 0xb8))(plVar9,lVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036ec14  margelo::nitro::rive::JHybridViewModelListPropertySpec::removeInstanceAtAsync =====

/* margelo::nitro::rive::JHybridViewModelListPropertySpec::removeInstanceAtAsync(double) */

void margelo::nitro::rive::JHybridViewModelListPropertySpec::removeInstanceAtAsync(double param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long in_x0;
  _jobject *p_Var5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined ***pppuVar9;
  long *plVar10;
  undefined8 *in_x8;
  _jmethodID *p_Var11;
  long local_98;
  undefined **local_90;
  undefined8 uStack_88;
  long local_80;
  undefined ***local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039e958 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039e958), iVar4 != 0)) {
                    /* try { // try from 0036edf4 to 0036ee0b has its CatchHandler @ 0036eec8 */
    FUN_0036fd08(&local_90);
    DAT_0039e950 = FUN_003707a4(&local_90,"removeInstanceAtAsync");
    __cxa_guard_release(&DAT_0039e958);
  }
  p_Var11 = *(_jmethodID **)(in_x0 + 8);
  p_Var5 = (_jobject *)facebook::jni::Environment::current();
  lVar6 = _JNIEnv::CallObjectMethod(p_Var5,p_Var11,param_1,DAT_0039e950);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_98 = lVar6;
                    /* try { // try from 0036ec84 to 0036ec8b has its CatchHandler @ 0036ef5c */
  margelo::nitro::Promise<void>::create();
  puVar3 = PTR_hybridDataField_00396038;
  if (((*PTR_hybridDataField_00396038 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0036ee40 to 0036ee43 has its CatchHandler @ 0036eeac */
    uVar7 = FUN_0031e19c(local_90);
    *(undefined8 *)PTR_hybridDataField_00396030 = uVar7;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0036ec9c to 0036ecaf has its CatchHandler @ 0036ef68 */
  puVar2 = PTR_hybridDataField_00396030;
  uVar7 = facebook::jni::getHybridDataFromField
                    ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uStack_88 = *in_x8;
  local_80 = in_x8[1];
  if (local_80 != 0) {
    FUN_00259a00(1,local_80 + 8);
  }
  local_90 = &PTR_FUN_00392b10;
                    /* try { // try from 0036ece4 to 0036eceb has its CatchHandler @ 0036ef1c */
  local_70 = &local_90;
  FUN_0031e2bc(uVar7,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar9 = &local_90;
LAB_0036ed0c:
    (*(code *)(*pppuVar9)[lVar6])();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar6 = 5;
    pppuVar9 = local_70;
    goto LAB_0036ed0c;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0036ee88 to 0036ee8b has its CatchHandler @ 0036eea8 */
    uVar7 = FUN_0031e19c(local_90);
    *(undefined8 *)puVar2 = uVar7;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0036ed20 to 0036ed2f has its CatchHandler @ 0036ef68 */
  uVar8 = facebook::jni::getHybridDataFromField
                    ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uVar7 = *in_x8;
  lVar6 = in_x8[1];
  if (lVar6 != 0) {
    FUN_00259a00(1,lVar6 + 8);
  }
  local_90 = &PTR_FUN_00392b90;
                    /* try { // try from 0036ed64 to 0036ed6b has its CatchHandler @ 0036eedc */
  uStack_88 = uVar7;
  local_80 = lVar6;
  local_70 = &local_90;
  FUN_0031e5cc(uVar8,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar9 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_0036ed98;
    lVar6 = 5;
    pppuVar9 = local_70;
  }
  (*(code *)(*pppuVar9)[lVar6])();
LAB_0036ed98:
  lVar6 = local_98;
  if (local_98 != 0) {
                    /* try { // try from 0036eda0 to 0036edb3 has its CatchHandler @ 0036ef64 */
    plVar10 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar10 + 0xb8))(plVar10,lVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036ef98  margelo::nitro::rive::JHybridViewModelListPropertySpec::swapAsync =====

/* margelo::nitro::rive::JHybridViewModelListPropertySpec::swapAsync(double, double) */

void margelo::nitro::rive::JHybridViewModelListPropertySpec::swapAsync
               (double param_1,double param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long in_x0;
  _jobject *p_Var5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined ***pppuVar9;
  long *plVar10;
  undefined8 *in_x8;
  _jmethodID *p_Var11;
  long local_a8;
  undefined **local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined ***local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039e968 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039e968), iVar4 != 0)) {
                    /* try { // try from 0036f180 to 0036f18f has its CatchHandler @ 0036f24c */
    FUN_0036fd08(&local_a0);
    DAT_0039e960 = FUN_0036fdc8(&local_a0);
    __cxa_guard_release(&DAT_0039e968);
  }
  p_Var11 = *(_jmethodID **)(in_x0 + 8);
  p_Var5 = (_jobject *)facebook::jni::Environment::current();
  lVar6 = _JNIEnv::CallObjectMethod(p_Var5,p_Var11,param_1,param_2,DAT_0039e960);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_a8 = lVar6;
                    /* try { // try from 0036f010 to 0036f017 has its CatchHandler @ 0036f2e0 */
  margelo::nitro::Promise<void>::create();
  puVar3 = PTR_hybridDataField_00396038;
  if (((*PTR_hybridDataField_00396038 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0036f1c4 to 0036f1c7 has its CatchHandler @ 0036f230 */
    uVar7 = FUN_0031e19c(local_a0);
    *(undefined8 *)PTR_hybridDataField_00396030 = uVar7;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_a0);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0036f028 to 0036f03b has its CatchHandler @ 0036f2ec */
  puVar2 = PTR_hybridDataField_00396030;
  uVar7 = facebook::jni::getHybridDataFromField
                    ((JObject *)&local_a8,(JField *)PTR_hybridDataField_00396030);
  uStack_98 = *in_x8;
  local_90 = in_x8[1];
  if (local_90 != 0) {
    FUN_00259a00(1,local_90 + 8);
  }
  local_a0 = &PTR_FUN_00392c10;
                    /* try { // try from 0036f070 to 0036f077 has its CatchHandler @ 0036f2a0 */
  local_80 = &local_a0;
  FUN_0031e2bc(uVar7,&local_a0);
  if (local_80 == &local_a0) {
    lVar6 = 4;
    pppuVar9 = &local_a0;
LAB_0036f098:
    (*(code *)(*pppuVar9)[lVar6])();
  }
  else if (local_80 != (undefined ***)0x0) {
    lVar6 = 5;
    pppuVar9 = local_80;
    goto LAB_0036f098;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0036f20c to 0036f20f has its CatchHandler @ 0036f22c */
    uVar7 = FUN_0031e19c(local_a0);
    *(undefined8 *)puVar2 = uVar7;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_a0);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0036f0ac to 0036f0bb has its CatchHandler @ 0036f2ec */
  uVar8 = facebook::jni::getHybridDataFromField
                    ((JObject *)&local_a8,(JField *)PTR_hybridDataField_00396030);
  uVar7 = *in_x8;
  lVar6 = in_x8[1];
  if (lVar6 != 0) {
    FUN_00259a00(1,lVar6 + 8);
  }
  local_a0 = &PTR_FUN_00392c90;
                    /* try { // try from 0036f0f0 to 0036f0f7 has its CatchHandler @ 0036f260 */
  uStack_98 = uVar7;
  local_90 = lVar6;
  local_80 = &local_a0;
  FUN_0031e5cc(uVar8,&local_a0);
  if (local_80 == &local_a0) {
    lVar6 = 4;
    pppuVar9 = &local_a0;
  }
  else {
    if (local_80 == (undefined ***)0x0) goto LAB_0036f124;
    lVar6 = 5;
    pppuVar9 = local_80;
  }
  (*(code *)(*pppuVar9)[lVar6])();
LAB_0036f124:
  lVar6 = local_a8;
  if (local_a8 != 0) {
                    /* try { // try from 0036f12c to 0036f13f has its CatchHandler @ 0036f2e8 */
    plVar10 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar10 + 0xb8))(plVar10,lVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036f31c  margelo::nitro::rive::JHybridViewModelListPropertySpec::addListener =====

/* margelo::nitro::rive::JHybridViewModelListPropertySpec::addListener(std::__ndk1::function<void
   ()> const&) */

void margelo::nitro::rive::JHybridViewModelListPropertySpec::addListener(function *param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  _jobject *p_Var4;
  long lVar5;
  long *plVar6;
  long lVar7;
  bad_alloc *this;
  long in_x8;
  _jmethodID *p_Var8;
  undefined8 uVar9;
  undefined8 local_50;
  long local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039e978 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039e978), iVar3 != 0)) {
                    /* try { // try from 0036f520 to 0036f537 has its CatchHandler @ 0036f634 */
    FUN_0036fd08(&local_40);
    DAT_0039e970 = FUN_0036992c(&local_40,"addListener_cxx");
    __cxa_guard_release(&DAT_0039e978);
  }
  p_Var8 = *(_jmethodID **)(param_1 + 8);
  FUN_003699b0(&local_40);
  lVar7 = local_40;
  local_48 = local_40;
                    /* try { // try from 0036f370 to 0036f38f has its CatchHandler @ 0036f698 */
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::CallObjectMethod(p_Var4,p_Var8,DAT_0039e970,lVar7);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (lVar7 != 0) {
                    /* try { // try from 0036f398 to 0036f3ab has its CatchHandler @ 0036f678 */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,lVar7);
  }
  if (((*PTR_cls_003945e8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_cls_003945e8), iVar3 != 0))
  {
                    /* try { // try from 0036f560 to 0036f573 has its CatchHandler @ 0036f620 */
    facebook::jni::findClassStatic(PTR_kBaseName_003945f0);
    __cxa_guard_release(PTR_cls_003945e8);
  }
  uVar9 = *(undefined8 *)PTR_cls_003945e0;
                    /* try { // try from 0036f3c8 to 0036f3e3 has its CatchHandler @ 0036f690 */
  plVar6 = (long *)facebook::jni::Environment::current();
  cVar2 = (**(code **)(*plVar6 + 0x100))(plVar6,lVar5,uVar9);
  if (cVar2 == '\0') {
                    /* try { // try from 0036f4d0 to 0036f4db has its CatchHandler @ 0036f668 */
    FUN_003595b8(&local_40,lVar5);
    local_48 = local_40;
    local_40 = 0;
    local_50 = 0;
                    /* try { // try from 0036f4e8 to 0036f4ef has its CatchHandler @ 0036f648 */
    FUN_00359668();
    FUN_0035971c(&local_48);
    FUN_003597d8(&local_50);
    FUN_00359848(&local_40);
  }
  else {
    lVar7 = lVar5;
    if (lVar5 != 0) {
                    /* try { // try from 0036f3f0 to 0036f40b has its CatchHandler @ 0036f694 */
      plVar6 = (long *)facebook::jni::Environment::current();
      lVar7 = (**(code **)(*plVar6 + 200))(plVar6,lVar5);
      facebook::jni::throwPendingJniExceptionAsCppException();
      if (lVar7 == 0) {
        this = (bad_alloc *)__cxa_allocate_exception(8);
        if (*(long *)(lVar1 + 0x28) == local_38) {
          std::bad_alloc::bad_alloc(this);
                    /* try { // try from 0036f5ec to 0036f603 has its CatchHandler @ 0036f694 */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(this,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
        }
        goto LAB_0036f6bc;
      }
    }
    local_48 = lVar7;
    if (((*PTR_hybridDataField_003945d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_hybridDataField_003945d8), iVar3 != 0)) {
      facebook::jni::JObject::getClass();
                    /* try { // try from 0036f5a4 to 0036f5a7 has its CatchHandler @ 0036f604 */
      uVar9 = FUN_0025dae8(local_40);
      *(undefined8 *)PTR_hybridDataField_003945d0 = uVar9;
      facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
      ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
                       *)&local_40);
      __cxa_guard_release(PTR_hybridDataField_003945d8);
    }
                    /* try { // try from 0036f424 to 0036f473 has its CatchHandler @ 0036f67c */
    lVar7 = facebook::jni::getHybridDataFromField
                      ((JObject *)&local_48,(JField *)PTR_hybridDataField_003945d0);
    plVar6 = *(long **)(lVar7 + 0x30);
    if (plVar6 == (long *)0x0) {
LAB_0036f458:
      *(long **)(in_x8 + 0x20) = plVar6;
    }
    else {
      if (plVar6 != (long *)(lVar7 + 0x10)) {
        plVar6 = (long *)(**(code **)(*plVar6 + 0x10))();
        goto LAB_0036f458;
      }
      *(long *)(in_x8 + 0x20) = in_x8;
      (**(code **)(*plVar6 + 0x18))();
    }
    lVar7 = local_48;
    if (local_48 != 0) {
                    /* try { // try from 0036f47c to 0036f48f has its CatchHandler @ 0036f670 */
      plVar6 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,lVar7);
    }
  }
  if (lVar5 != 0) {
                    /* try { // try from 0036f498 to 0036f4ab has its CatchHandler @ 0036f674 */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,lVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_0036f6bc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036f6c0  margelo::nitro::rive::JHybridViewModelListPropertySpec::removeListeners =====

/* margelo::nitro::rive::JHybridViewModelListPropertySpec::removeListeners() */

void __thiscall
margelo::nitro::rive::JHybridViewModelListPropertySpec::removeListeners
          (JHybridViewModelListPropertySpec *this)

{
  long lVar1;
  int iVar2;
  _jobject *p_Var3;
  _jmethodID *p_Var4;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039e988 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039e988), iVar2 != 0)) {
                    /* try { // try from 0036f740 to 0036f757 has its CatchHandler @ 0036f76c */
    FUN_0036fd08(auStack_40);
    DAT_0039e980 = FUN_0034236c(auStack_40,"removeListeners");
    __cxa_guard_release(&DAT_0039e988);
  }
  p_Var4 = *(_jmethodID **)(this + 8);
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var3,p_Var4,DAT_0039e980);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    facebook::jni::throwPendingJniExceptionAsCppException();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036f798  FUN_0036f798 =====

void FUN_0036f798(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_0036f9d8(this);
  FUN_00356a9c(this + 0x70,PTR_PTR_00397078 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036f824  FUN_0036f824 =====

void FUN_0036f824(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_0036f9d8(this);
  FUN_00356a9c(this + 0x70,PTR_PTR_00397078 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  facebook::jsi::NativeState::~NativeState(this);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036f8b8  FUN_0036f8b8 =====

void FUN_0036f8b8(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_0036f9d8(this);
  FUN_00356a9c(this + 0x70,PTR_PTR_00397078 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036f944  FUN_0036f944 =====

void FUN_0036f944(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_0036f9d8(this);
  FUN_00356a9c(this + 0x70,PTR_PTR_00397078 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  facebook::jsi::NativeState::~NativeState(this);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036f9d8  FUN_0036f9d8 =====

void FUN_0036f9d8(long *param_1)

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
  
  puVar2 = PTR_vtable_00397070;
  local_50 = (long *)&local_70;
  pppuVar3 = &local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1[2] = (long)(PTR_vtable_00397070 + 0x1b8);
  *param_1 = (long)(puVar2 + 0xd0);
  param_1[0x10] = (long)(puVar2 + 0x298);
  param_1[0xe] = (long)(puVar2 + 0x238);
  local_70 = &PTR_FUN_00392e70;
  plStack_68 = param_1;
                    /* try { // try from 0036fa38 to 0036fa3f has its CatchHandler @ 0036fab4 */
  facebook::jni::ThreadScope::WithClassLoader((function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar5 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_0036fa6c;
    lVar5 = 5;
    pppuVar3 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar3 + lVar5 * 8))();
LAB_0036fa6c:
  lVar5 = param_1[1];
  if (lVar5 != 0) {
                    /* try { // try from 0036fa74 to 0036fa87 has its CatchHandler @ 0036fab8 */
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


// ===== 0036fabc  FUN_0036fabc =====

void FUN_0036fabc(void *param_1)

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


// ===== 0036faf4  FUN_0036faf4 =====

void FUN_0036faf4(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00392e70;
  puVar2[1] = uVar4;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036fb50  FUN_0036fb50 =====

void FUN_0036fb50(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00392e70;
  param_2[1] = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036fb98  FUN_0036fb98 =====

void FUN_0036fb98(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036fbd0  FUN_0036fbd0 =====

void FUN_0036fbd0(void *param_1)

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


// ===== 0036fc08  FUN_0036fc08 =====

void FUN_0036fc08(long param_1)

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
                    /* try { // try from 0036fc34 to 0036fc47 has its CatchHandler @ 0036fc74 */
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


// ===== 0036fc78  FUN_0036fc78 =====

void FUN_0036fc78(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00397098) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0036fcc8  FUN_0036fcc8 =====

undefined * FUN_0036fcc8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003970a0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036fd08  FUN_0036fd08 =====

void FUN_0036fd08(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_003970c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_003970c8), iVar2 != 0))
  {
                    /* try { // try from 0036fd78 to 0036fd8b has its CatchHandler @ 0036fd9c */
    facebook::jni::findClassStatic(PTR_kBaseName_003970d0);
    __cxa_guard_release(PTR_cls_003970c8);
  }
  *param_1 = *(undefined8 *)PTR_cls_003970c0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036fdc8  FUN_0036fdc8 =====

long FUN_0036fdc8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,"swapAsync",PTR_kDescriptor_00397100);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036fe44  FUN_0036fe44 =====

void FUN_0036fe44(long *param_1)

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


// ===== 0036fed0  FUN_0036fed0 =====

void FUN_0036fed0(long *param_1)

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


// ===== 0036ff5c  FUN_0036ff5c =====

void FUN_0036ff5c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00392c90;
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


// ===== 0036fff4  FUN_0036fff4 =====

void FUN_0036fff4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00392c90;
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


// ===== 00370080  FUN_00370080 =====

void FUN_00370080(long param_1)

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
  *puVar4 = &PTR_FUN_00392c90;
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


// ===== 003700f8  FUN_003700f8 =====

void FUN_003700f8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00392c90;
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


// ===== 0037015c  FUN_0037015c =====

void FUN_0037015c(long param_1)

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


// ===== 003701e8  FUN_003701e8 =====

void FUN_003701e8(void *param_1)

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


// ===== 00370268  FUN_00370268 =====

void FUN_00370268(long param_1,undefined8 *param_2)

{
  long lVar1;
  exception_ptr *peVar2;
  exception_ptr aeStack_98 [8];
  JniException aJStack_90 [48];
  undefined8 local_60;
  JniException aJStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60 = *param_2;
  facebook::jni::JniException::JniException(aJStack_58,&local_60);
  peVar2 = *(exception_ptr **)(param_1 + 8);
                    /* try { // try from 003702a0 to 003702ab has its CatchHandler @ 00370314 */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_0031ef0c(aeStack_98,aJStack_90);
                    /* try { // try from 003702b8 to 003702c3 has its CatchHandler @ 003702fc */
  margelo::nitro::Promise<void>::reject(peVar2);
  std::exception_ptr::~exception_ptr(aeStack_98);
  facebook::jni::JniException::~JniException(aJStack_90);
  facebook::jni::JniException::~JniException(aJStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0037033c  FUN_0037033c =====

void FUN_0037033c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive32JHybridViewModelListPropertySpec9swapAsyncEddENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0037038c  FUN_0037038c =====

pointer_____offset_0x10___ * FUN_0037038c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_00392cf0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003703cc  FUN_003703cc =====

void FUN_003703cc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00392c10;
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


// ===== 00370464  FUN_00370464 =====

void FUN_00370464(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00392c10;
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


// ===== 003704f0  FUN_003704f0 =====

void FUN_003704f0(long param_1)

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
  *puVar4 = &PTR_FUN_00392c10;
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


// ===== 00370568  FUN_00370568 =====

void FUN_00370568(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00392c10;
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


// ===== 003705cc  FUN_003705cc =====

void FUN_003705cc(long param_1)

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


// ===== 00370658  FUN_00370658 =====

void FUN_00370658(void *param_1)

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


// ===== 003706d8  FUN_003706d8 =====

void FUN_003706d8(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    margelo::nitro::Promise<void>::resolve();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(param_1 + 8));
}


// ===== 00370714  FUN_00370714 =====

void FUN_00370714(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive32JHybridViewModelListPropertySpec9swapAsyncEddENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00370764  FUN_00370764 =====

pointer_____offset_0x10___ * FUN_00370764(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_00392c70;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003707a4  FUN_003707a4 =====

long FUN_003707a4(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,param_2,PTR_kDescriptor_003970d8);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00370828  FUN_00370828 =====

void FUN_00370828(long *param_1)

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


// ===== 003708b4  FUN_003708b4 =====

void FUN_003708b4(long *param_1)

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


// ===== 00370940  FUN_00370940 =====

void FUN_00370940(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00392b90;
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


// ===== 003709d8  FUN_003709d8 =====

void FUN_003709d8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00392b90;
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


// ===== 00370a64  FUN_00370a64 =====

void FUN_00370a64(long param_1)

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
  *puVar4 = &PTR_FUN_00392b90;
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


// ===== 00370adc  FUN_00370adc =====

void FUN_00370adc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00392b90;
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


// ===== 00370b40  FUN_00370b40 =====

void FUN_00370b40(long param_1)

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


// ===== 00370bcc  FUN_00370bcc =====

void FUN_00370bcc(void *param_1)

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


// ===== 00370c4c  FUN_00370c4c =====

void FUN_00370c4c(long param_1,undefined8 *param_2)

{
  long lVar1;
  exception_ptr *peVar2;
  exception_ptr aeStack_98 [8];
  JniException aJStack_90 [48];
  undefined8 local_60;
  JniException aJStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60 = *param_2;
  facebook::jni::JniException::JniException(aJStack_58,&local_60);
  peVar2 = *(exception_ptr **)(param_1 + 8);
                    /* try { // try from 00370c84 to 00370c8f has its CatchHandler @ 00370cf8 */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_0031ef0c(aeStack_98,aJStack_90);
                    /* try { // try from 00370c9c to 00370ca7 has its CatchHandler @ 00370ce0 */
  margelo::nitro::Promise<void>::reject(peVar2);
  std::exception_ptr::~exception_ptr(aeStack_98);
  facebook::jni::JniException::~JniException(aJStack_90);
  facebook::jni::JniException::~JniException(aJStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00370d20  FUN_00370d20 =====

void FUN_00370d20(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive32JHybridViewModelListPropertySpec21removeInstanceAtAsyncEdENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00370d70  FUN_00370d70 =====

pointer_____offset_0x10___ * FUN_00370d70(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_00392bf0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00370db0  FUN_00370db0 =====

void FUN_00370db0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00392b10;
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


// ===== 00370e48  FUN_00370e48 =====

void FUN_00370e48(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00392b10;
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


// ===== 00370ed4  FUN_00370ed4 =====

void FUN_00370ed4(long param_1)

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
  *puVar4 = &PTR_FUN_00392b10;
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


// ===== 00370f4c  FUN_00370f4c =====

void FUN_00370f4c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00392b10;
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


// ===== 00370fb0  FUN_00370fb0 =====

void FUN_00370fb0(long param_1)

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


// ===== 0037103c  FUN_0037103c =====

void FUN_0037103c(void *param_1)

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


// ===== 003710bc  FUN_003710bc =====

void FUN_003710bc(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    margelo::nitro::Promise<void>::resolve();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(param_1 + 8));
}


// ===== 003710f8  FUN_003710f8 =====

void FUN_003710f8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive32JHybridViewModelListPropertySpec21removeInstanceAtAsyncEdENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00371148  FUN_00371148 =====

pointer_____offset_0x10___ * FUN_00371148(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_00392b70;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00371188  FUN_00371188 =====

long FUN_00371188(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,param_2,PTR_kDescriptor_003970f0);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0037120c  FUN_0037120c =====

void FUN_0037120c(long *param_1)

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


// ===== 00371298  FUN_00371298 =====

void FUN_00371298(long *param_1)

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


// ===== 00371324  FUN_00371324 =====

void FUN_00371324(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00392a90;
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


// ===== 003713bc  FUN_003713bc =====

void FUN_003713bc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00392a90;
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


// ===== 00371448  FUN_00371448 =====

void FUN_00371448(long param_1)

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
  *puVar4 = &PTR_FUN_00392a90;
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


// ===== 003714c0  FUN_003714c0 =====

void FUN_003714c0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00392a90;
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


// ===== 00371524  FUN_00371524 =====

void FUN_00371524(long param_1)

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


// ===== 003715b0  FUN_003715b0 =====

void FUN_003715b0(void *param_1)

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


// ===== 00371630  FUN_00371630 =====

void FUN_00371630(long param_1,undefined8 *param_2)

{
  long lVar1;
  exception_ptr *peVar2;
  exception_ptr aeStack_98 [8];
  JniException aJStack_90 [48];
  undefined8 local_60;
  JniException aJStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60 = *param_2;
  facebook::jni::JniException::JniException(aJStack_58,&local_60);
  peVar2 = *(exception_ptr **)(param_1 + 8);
                    /* try { // try from 00371668 to 00371673 has its CatchHandler @ 003716dc */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_0031ef0c(aeStack_98,aJStack_90);
                    /* try { // try from 00371680 to 0037168b has its CatchHandler @ 003716c4 */
  margelo::nitro::Promise<void>::reject(peVar2);
  std::exception_ptr::~exception_ptr(aeStack_98);
  facebook::jni::JniException::~JniException(aJStack_90);
  facebook::jni::JniException::~JniException(aJStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00371704  FUN_00371704 =====

void FUN_00371704(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive32JHybridViewModelListPropertySpec19removeInstanceAsyncERKNSt6__ndk110shared_ptrINS1_27HybridViewModelInstanceSpecEEEENK3$_0clEvEUlRKN8facebook3jni9alias_refINSB_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00371754  FUN_00371754 =====

pointer_____offset_0x10___ * FUN_00371754(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_00392af0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00371794  FUN_00371794 =====

void FUN_00371794(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00392a10;
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


// ===== 0037182c  FUN_0037182c =====

void FUN_0037182c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00392a10;
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


// ===== 003718b8  FUN_003718b8 =====

void FUN_003718b8(long param_1)

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
  *puVar4 = &PTR_FUN_00392a10;
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


// ===== 00371930  FUN_00371930 =====

void FUN_00371930(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00392a10;
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


// ===== 00371994  FUN_00371994 =====

void FUN_00371994(long param_1)

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


// ===== 00371a20  FUN_00371a20 =====

void FUN_00371a20(void *param_1)

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


// ===== 00371aa0  FUN_00371aa0 =====

void FUN_00371aa0(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    margelo::nitro::Promise<void>::resolve();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(param_1 + 8));
}


// ===== 00371adc  FUN_00371adc =====

void FUN_00371adc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive32JHybridViewModelListPropertySpec19removeInstanceAsyncERKNSt6__ndk110shared_ptrINS1_27HybridViewModelInstanceSpecEEEENK3$_0clEvEUlRKN8facebook3jni9alias_refINSB_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00371b2c  FUN_00371b2c =====

pointer_____offset_0x10___ * FUN_00371b2c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_00392a70;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00371b6c  FUN_00371b6c =====

long FUN_00371b6c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*param_1,"addInstanceAtAsync",PTR_kDescriptor_003970f8);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00371be8  FUN_00371be8 =====

void FUN_00371be8(long *param_1)

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


// ===== 00371c74  FUN_00371c74 =====

void FUN_00371c74(long *param_1)

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


// ===== 00371d00  FUN_00371d00 =====

void FUN_00371d00(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00392990;
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


// ===== 00371d98  FUN_00371d98 =====

void FUN_00371d98(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00392990;
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


// ===== 00371e24  FUN_00371e24 =====

void FUN_00371e24(long param_1)

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
  *puVar4 = &PTR_FUN_00392990;
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


// ===== 00371e9c  FUN_00371e9c =====

void FUN_00371e9c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00392990;
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


// ===== 00371f00  FUN_00371f00 =====

void FUN_00371f00(long param_1)

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


// ===== 00371f8c  FUN_00371f8c =====

void FUN_00371f8c(void *param_1)

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


// ===== 0037200c  FUN_0037200c =====

void FUN_0037200c(long param_1,undefined8 *param_2)

{
  long lVar1;
  exception_ptr *peVar2;
  exception_ptr aeStack_98 [8];
  JniException aJStack_90 [48];
  undefined8 local_60;
  JniException aJStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60 = *param_2;
  facebook::jni::JniException::JniException(aJStack_58,&local_60);
  peVar2 = *(exception_ptr **)(param_1 + 8);
                    /* try { // try from 00372044 to 0037204f has its CatchHandler @ 003720b8 */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_0031ef0c(aeStack_98,aJStack_90);
                    /* try { // try from 0037205c to 00372067 has its CatchHandler @ 003720a0 */
  margelo::nitro::Promise<void>::reject(peVar2);
  std::exception_ptr::~exception_ptr(aeStack_98);
  facebook::jni::JniException::~JniException(aJStack_90);
  facebook::jni::JniException::~JniException(aJStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003720e0  FUN_003720e0 =====

void FUN_003720e0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive32JHybridViewModelListPropertySpec18addInstanceAtAsyncERKNSt6__ndk110shared_ptrINS1_27HybridViewModelInstanceSpecEEEdENK3$_0clEvEUlRKN8facebook3jni9alias_refINSB_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00372130  FUN_00372130 =====

pointer_____offset_0x10___ * FUN_00372130(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_003929f0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00372170  FUN_00372170 =====

void FUN_00372170(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00392910;
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


// ===== 00372208  FUN_00372208 =====

void FUN_00372208(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00392910;
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


// ===== 00372294  FUN_00372294 =====

void FUN_00372294(long param_1)

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
  *puVar4 = &PTR_FUN_00392910;
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


// ===== 0037230c  FUN_0037230c =====

void FUN_0037230c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00392910;
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


// ===== 00372370  FUN_00372370 =====

void FUN_00372370(long param_1)

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


// ===== 003723fc  FUN_003723fc =====

void FUN_003723fc(void *param_1)

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


// ===== 0037247c  FUN_0037247c =====

void FUN_0037247c(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    margelo::nitro::Promise<void>::resolve();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(param_1 + 8));
}


// ===== 003724b8  FUN_003724b8 =====

void FUN_003724b8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive32JHybridViewModelListPropertySpec18addInstanceAtAsyncERKNSt6__ndk110shared_ptrINS1_27HybridViewModelInstanceSpecEEEdENK3$_0clEvEUlRKN8facebook3jni9alias_refINSB_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00372508  FUN_00372508 =====

pointer_____offset_0x10___ * FUN_00372508(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_00392970;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00372548  FUN_00372548 =====

void FUN_00372548(long *param_1)

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


// ===== 003725d4  FUN_003725d4 =====

void FUN_003725d4(long *param_1)

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


// ===== 00372660  FUN_00372660 =====

void FUN_00372660(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00392890;
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


// ===== 003726f8  FUN_003726f8 =====

void FUN_003726f8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00392890;
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


// ===== 00372784  FUN_00372784 =====

void FUN_00372784(long param_1)

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
  *puVar4 = &PTR_FUN_00392890;
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


// ===== 003727fc  FUN_003727fc =====

void FUN_003727fc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00392890;
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


// ===== 00372860  FUN_00372860 =====

void FUN_00372860(long param_1)

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


// ===== 003728ec  FUN_003728ec =====

void FUN_003728ec(void *param_1)

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


// ===== 0037296c  FUN_0037296c =====

void FUN_0037296c(long param_1,undefined8 *param_2)

{
  long lVar1;
  exception_ptr *peVar2;
  exception_ptr aeStack_98 [8];
  JniException aJStack_90 [48];
  undefined8 local_60;
  JniException aJStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60 = *param_2;
  facebook::jni::JniException::JniException(aJStack_58,&local_60);
  peVar2 = *(exception_ptr **)(param_1 + 8);
                    /* try { // try from 003729a4 to 003729af has its CatchHandler @ 00372a18 */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_0031ef0c(aeStack_98,aJStack_90);
                    /* try { // try from 003729bc to 003729c7 has its CatchHandler @ 00372a00 */
  margelo::nitro::Promise<void>::reject(peVar2);
  std::exception_ptr::~exception_ptr(aeStack_98);
  facebook::jni::JniException::~JniException(aJStack_90);
  facebook::jni::JniException::~JniException(aJStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00372a40  FUN_00372a40 =====

void FUN_00372a40(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive32JHybridViewModelListPropertySpec16addInstanceAsyncERKNSt6__ndk110shared_ptrINS1_27HybridViewModelInstanceSpecEEEENK3$_0clEvEUlRKN8facebook3jni9alias_refINSB_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00372a90  FUN_00372a90 =====

pointer_____offset_0x10___ * FUN_00372a90(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_003928f0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00372ad0  FUN_00372ad0 =====

void FUN_00372ad0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00392810;
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


// ===== 00372b68  FUN_00372b68 =====

void FUN_00372b68(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00392810;
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


// ===== 00372bf4  FUN_00372bf4 =====

void FUN_00372bf4(long param_1)

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
  *puVar4 = &PTR_FUN_00392810;
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


// ===== 00372c6c  FUN_00372c6c =====

void FUN_00372c6c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00392810;
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


// ===== 00372cd0  FUN_00372cd0 =====

void FUN_00372cd0(long param_1)

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


// ===== 00372d5c  FUN_00372d5c =====

void FUN_00372d5c(void *param_1)

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


// ===== 00372ddc  FUN_00372ddc =====

void FUN_00372ddc(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    margelo::nitro::Promise<void>::resolve();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(param_1 + 8));
}


// ===== 00372e18  FUN_00372e18 =====

void FUN_00372e18(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive32JHybridViewModelListPropertySpec16addInstanceAsyncERKNSt6__ndk110shared_ptrINS1_27HybridViewModelInstanceSpecEEEENK3$_0clEvEUlRKN8facebook3jni9alias_refINSB_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00372e68  FUN_00372e68 =====

pointer_____offset_0x10___ * FUN_00372e68(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_00392870;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00372ea8  FUN_00372ea8 =====

long FUN_00372ea8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,&DAT_001d582a,PTR_kDescriptor_003970e8);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00372f24  FUN_00372f24 =====

long FUN_00372f24(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,"addInstanceAt",PTR_kDescriptor_003970e0);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00372fa0  FUN_00372fa0 =====

void FUN_00372fa0(long *param_1)

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


// ===== 0037302c  FUN_0037302c =====

void FUN_0037302c(long *param_1)

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


// ===== 003730b8  FUN_003730b8 =====

void FUN_003730b8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00392790;
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


// ===== 00373150  FUN_00373150 =====

void FUN_00373150(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00392790;
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


// ===== 003731dc  FUN_003731dc =====

void FUN_003731dc(long param_1)

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
  *puVar4 = &PTR_FUN_00392790;
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


// ===== 00373254  FUN_00373254 =====

void FUN_00373254(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00392790;
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


// ===== 003732b8  FUN_003732b8 =====

void FUN_003732b8(long param_1)

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


// ===== 00373344  FUN_00373344 =====

void FUN_00373344(void *param_1)

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


// ===== 003733c4  FUN_003733c4 =====

void FUN_003733c4(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  exception_ptr aeStack_98 [8];
  JniException aJStack_90 [48];
  undefined8 local_60;
  JniException aJStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60 = *param_2;
  facebook::jni::JniException::JniException(aJStack_58,&local_60);
  uVar2 = *(undefined8 *)(param_1 + 8);
                    /* try { // try from 003733fc to 00373407 has its CatchHandler @ 00373470 */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_0031ef0c(aeStack_98,aJStack_90);
                    /* try { // try from 00373414 to 0037341f has its CatchHandler @ 00373458 */
  FUN_0034de84(uVar2,aeStack_98);
  std::exception_ptr::~exception_ptr(aeStack_98);
  facebook::jni::JniException::~JniException(aJStack_90);
  facebook::jni::JniException::~JniException(aJStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00373498  FUN_00373498 =====

void FUN_00373498(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive32JHybridViewModelListPropertySpec18getInstanceAtAsyncEdENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 003734e8  FUN_003734e8 =====

pointer_____offset_0x10___ * FUN_003734e8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_003927f0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00373528  FUN_00373528 =====

void FUN_00373528(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00392710;
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


// ===== 003735c0  FUN_003735c0 =====

void FUN_003735c0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00392710;
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


// ===== 0037364c  FUN_0037364c =====

void FUN_0037364c(long param_1)

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
  *puVar4 = &PTR_FUN_00392710;
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


// ===== 003736c4  FUN_003736c4 =====

void FUN_003736c4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00392710;
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


// ===== 00373728  FUN_00373728 =====

void FUN_00373728(long param_1)

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


// ===== 003737b4  FUN_003737b4 =====

void FUN_003737b4(void *param_1)

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


// ===== 00373834  FUN_00373834 =====

void FUN_00373834(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  char local_48;
  long local_40;
  long local_38;
  
  plVar2 = local_60;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar5 = *param_2;
  uVar4 = *(undefined8 *)(param_1 + 8);
  local_40 = lVar5;
  if (lVar5 == 0) {
    local_58 = (long *)((ulong)local_58 & 0xffffffffffffff00);
    local_48 = '\0';
  }
  else {
    margelo::nitro::rive::JHybridViewModelInstanceSpec::JavaPart::getJHybridViewModelInstanceSpec
              ((JavaPart *)&local_40);
    local_60 = (long *)0x0;
    if (local_68 != (long *)0x0) {
      local_68 = (long *)((long)local_68 + *(long *)(*local_68 + -0xa0));
    }
    local_50 = plVar2;
    local_48 = '\x01';
    local_58 = local_68;
  }
                    /* try { // try from 003738a4 to 003738af has its CatchHandler @ 00373940 */
  FUN_0034e740(uVar4,&local_58);
  if (((local_48 != '\0') && (local_50 != (long *)0x0)) &&
     (lVar3 = FUN_00255510(0xffffffffffffffff,local_50 + 1), lVar3 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (((lVar5 != 0) && (local_60 != (long *)0x0)) &&
     (lVar5 = FUN_00255510(0xffffffffffffffff,local_60 + 1), lVar5 == 0)) {
    (**(code **)(*local_60 + 0x10))(local_60);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00373988  FUN_00373988 =====

void FUN_00373988(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive32JHybridViewModelListPropertySpec18getInstanceAtAsyncEdENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 003739d8  FUN_003739d8 =====

pointer_____offset_0x10___ * FUN_003739d8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_00392770;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00373a18  FUN_00373a18 =====

void FUN_00373a18(long *param_1)

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


// ===== 00373aa4  FUN_00373aa4 =====

void FUN_00373aa4(long *param_1)

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


// ===== 00373b30  FUN_00373b30 =====

void FUN_00373b30(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00392540;
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


// ===== 00373bc8  FUN_00373bc8 =====

void FUN_00373bc8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00392540;
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


// ===== 00373c54  FUN_00373c54 =====

void FUN_00373c54(long param_1)

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
  *puVar4 = &PTR_FUN_00392540;
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


// ===== 00373ccc  FUN_00373ccc =====

void FUN_00373ccc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00392540;
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


// ===== 00373d30  FUN_00373d30 =====

void FUN_00373d30(long param_1)

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


// ===== 00373dbc  FUN_00373dbc =====

void FUN_00373dbc(void *param_1)

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


// ===== 00373e3c  FUN_00373e3c =====

void FUN_00373e3c(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  exception_ptr aeStack_98 [8];
  JniException aJStack_90 [48];
  undefined8 local_60;
  JniException aJStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60 = *param_2;
  facebook::jni::JniException::JniException(aJStack_58,&local_60);
  uVar2 = *(undefined8 *)(param_1 + 8);
                    /* try { // try from 00373e74 to 00373e7f has its CatchHandler @ 00373ee8 */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_0031ef0c(aeStack_98,aJStack_90);
                    /* try { // try from 00373e8c to 00373e97 has its CatchHandler @ 00373ed0 */
  FUN_00320898(uVar2,aeStack_98);
  std::exception_ptr::~exception_ptr(aeStack_98);
  facebook::jni::JniException::~JniException(aJStack_90);
  facebook::jni::JniException::~JniException(aJStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00373f10  FUN_00373f10 =====

void FUN_00373f10(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive32JHybridViewModelListPropertySpec14getLengthAsyncEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00373f60  FUN_00373f60 =====

pointer_____offset_0x10___ * FUN_00373f60(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_003925b0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00373fa0  FUN_00373fa0 =====

void FUN_00373fa0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_003924b0;
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


// ===== 00374038  FUN_00374038 =====

void FUN_00374038(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_003924b0;
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


// ===== 003740c4  FUN_003740c4 =====

void FUN_003740c4(long param_1)

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
  *puVar4 = &PTR_FUN_003924b0;
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


// ===== 0037413c  FUN_0037413c =====

void FUN_0037413c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_003924b0;
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


// ===== 003741a0  FUN_003741a0 =====

void FUN_003741a0(long param_1)

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


// ===== 0037422c  FUN_0037422c =====

void FUN_0037422c(void *param_1)

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


// ===== 003742ac  FUN_003742ac =====

void FUN_003742ac(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = *param_2;
  uVar2 = *(undefined8 *)(param_1 + 8);
  local_38 = FUN_0025f988(&local_30);
  FUN_0032100c(uVar2,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00374310  FUN_00374310 =====

void FUN_00374310(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive32JHybridViewModelListPropertySpec14getLengthAsyncEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00374360  FUN_00374360 =====

pointer_____offset_0x10___ * FUN_00374360(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_00392520;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003743a0  FUN_003743a0 =====

void FUN_003743a0(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_00392ef0;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003743e4  FUN_003743e4 =====

void FUN_003743e4(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_00392ef0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0037443c  FUN_0037443c =====

void FUN_0037443c(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00374474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(param_1 + 0x18))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0037447c  FUN_0037447c =====

void FUN_0037447c(void *param_1)

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


// ===== 003744b4  margelo::nitro::rive::JHybridViewModelListPropertySpec::CxxPart::registerNatives =====

/* margelo::nitro::rive::JHybridViewModelListPropertySpec::CxxPart::registerNatives() */

void margelo::nitro::rive::JHybridViewModelListPropertySpec::CxxPart::registerNatives(void)

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
  puStack_58 = PTR_kDescriptor_00391968;
  local_60 = PTR_s_initHybrid_00391960;
  local_50 = PTR_call_00391970;
  pcVar9 = (char *)operator_new(0x40);
  uVar7 = s_Lcom_margelo_nitro_rive_HybridVi_001d730c._33_8_;
  uVar6 = s_Lcom_margelo_nitro_rive_HybridVi_001d730c._25_8_;
  uVar5 = s_Lcom_margelo_nitro_rive_HybridVi_001d730c._17_8_;
  uVar4 = s_Lcom_margelo_nitro_rive_HybridVi_001d730c._9_8_;
  uVar3 = s_Lcom_margelo_nitro_rive_HybridVi_001d730c._1_8_;
  uVar2 = CONCAT26(s_Lcom_margelo_nitro_rive_HybridVi_001d730c._47_2_,
                   s_Lcom_margelo_nitro_rive_HybridVi_001d730c._41_6_);
  pcVar9[0x3e] = '\0';
  *(undefined8 *)(pcVar9 + 0x28) = uVar2;
  *(undefined8 *)(pcVar9 + 0x20) = uVar7;
  *(undefined8 *)(pcVar9 + 8) = uVar4;
  *(undefined8 *)pcVar9 = uVar3;
  *(undefined8 *)(pcVar9 + 0x18) = uVar6;
  *(undefined8 *)(pcVar9 + 0x10) = uVar5;
  uVar2 = CONCAT62(s_Lcom_margelo_nitro_rive_HybridVi_001d730c._49_6_,
                   s_Lcom_margelo_nitro_rive_HybridVi_001d730c._47_2_);
  *(undefined8 *)(pcVar9 + 0x36) = s_Lcom_margelo_nitro_rive_HybridVi_001d730c._55_8_;
  *(undefined8 *)(pcVar9 + 0x2e) = uVar2;
                    /* try { // try from 0037451c to 00374523 has its CatchHandler @ 00374594 */
  facebook::jni::findClassLocal(pcVar9);
  operator_delete(pcVar9);
                    /* try { // try from 0037452c to 00374553 has its CatchHandler @ 003745a8 */
  plVar10 = (long *)facebook::jni::Environment::current();
  iVar8 = (**(code **)(*plVar10 + 0x6b8))(plVar10,local_40,&local_60,1);
  facebook::jni::throwCppExceptionIf(iVar8 != 0);
  if (local_40 != 0) {
                    /* try { // try from 0037455c to 0037456f has its CatchHandler @ 003745a4 */
    plVar10 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar10 + 0xb8))(plVar10,local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003745d0  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelListPropertySpec::CxxPart,margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridViewModelListPropertySpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelListPropertySpec::CxxPart,margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   (*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelListPropertySpec::CxxPart,
   margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart, void>::_javaobject*>),
   &margelo::nitro::rive::JHybridViewModelListPropertySpec::CxxPart::initHybrid,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelListPropertySpec::CxxPart,
   margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart, void>::_javaobject*,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>>::call(_JNIEnv*, _jobject*) */

undefined8
facebook::jni::detail::
FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelListPropertySpec::CxxPart,margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridViewModelListPropertySpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelListPropertySpec::CxxPart,margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>
::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  JniEnvCacher aJStack_48 [24];
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_48,param_1);
                    /* try { // try from 003745fc to 00374607 has its CatchHandler @ 00374638 */
  FUN_0036c69c(&local_30,param_2);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00374684  margelo::nitro::rive::JHybridViewModelListPropertySpec::getLength =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelListPropertySpec::getLength() */

void __thiscall
margelo::nitro::rive::JHybridViewModelListPropertySpec::getLength
          (JHybridViewModelListPropertySpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getLength(this + *(long *)(*(long *)this + -0x40));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003746c8  margelo::nitro::rive::JHybridViewModelListPropertySpec::getInstanceAt =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelListPropertySpec::getInstanceAt(double) */

void __thiscall
margelo::nitro::rive::JHybridViewModelListPropertySpec::getInstanceAt
          (JHybridViewModelListPropertySpec *this,double param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getInstanceAt(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0037470c  margelo::nitro::rive::JHybridViewModelListPropertySpec::getLengthAsync =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelListPropertySpec::getLengthAsync() */

void __thiscall
margelo::nitro::rive::JHybridViewModelListPropertySpec::getLengthAsync
          (JHybridViewModelListPropertySpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getLengthAsync();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00374750  margelo::nitro::rive::JHybridViewModelListPropertySpec::getInstanceAtAsync =====

/* virtual thunk to
   margelo::nitro::rive::JHybridViewModelListPropertySpec::getInstanceAtAsync(double) */

void __thiscall
margelo::nitro::rive::JHybridViewModelListPropertySpec::getInstanceAtAsync
          (JHybridViewModelListPropertySpec *this,double param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getInstanceAtAsync(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00374794  margelo::nitro::rive::JHybridViewModelListPropertySpec::addInstance =====

/* virtual thunk to
   margelo::nitro::rive::JHybridViewModelListPropertySpec::addInstance(std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>
   const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelListPropertySpec::addInstance
          (JHybridViewModelListPropertySpec *this,shared_ptr *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    addInstance(this + *(long *)(*(long *)this + -0x60),param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003747d8  margelo::nitro::rive::JHybridViewModelListPropertySpec::addInstanceAt =====

/* virtual thunk to
   margelo::nitro::rive::JHybridViewModelListPropertySpec::addInstanceAt(std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>
   const&, double) */

void __thiscall
margelo::nitro::rive::JHybridViewModelListPropertySpec::addInstanceAt
          (JHybridViewModelListPropertySpec *this,shared_ptr *param_1,double param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    addInstanceAt(this + *(long *)(*(long *)this + -0x68),param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0037481c  margelo::nitro::rive::JHybridViewModelListPropertySpec::removeInstance =====

/* virtual thunk to
   margelo::nitro::rive::JHybridViewModelListPropertySpec::removeInstance(std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>
   const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelListPropertySpec::removeInstance
          (JHybridViewModelListPropertySpec *this,shared_ptr *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    removeInstance(this + *(long *)(*(long *)this + -0x70),param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00374860  margelo::nitro::rive::JHybridViewModelListPropertySpec::removeInstanceAt =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelListPropertySpec::removeInstanceAt(double)
    */

void __thiscall
margelo::nitro::rive::JHybridViewModelListPropertySpec::removeInstanceAt
          (JHybridViewModelListPropertySpec *this,double param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    removeInstanceAt(this + *(long *)(*(long *)this + -0x78),param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003748a4  margelo::nitro::rive::JHybridViewModelListPropertySpec::swap =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelListPropertySpec::swap(double, double) */

void __thiscall
margelo::nitro::rive::JHybridViewModelListPropertySpec::swap
          (JHybridViewModelListPropertySpec *this,double param_1,double param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    swap(this + *(long *)(*(long *)this + -0x80),param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003748e8  margelo::nitro::rive::JHybridViewModelListPropertySpec::addInstanceAsync =====

/* virtual thunk to
   margelo::nitro::rive::JHybridViewModelListPropertySpec::addInstanceAsync(std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>
   const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelListPropertySpec::addInstanceAsync
          (JHybridViewModelListPropertySpec *this,shared_ptr *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    addInstanceAsync((shared_ptr *)(this + *(long *)(*(long *)this + -0x88)));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0037492c  margelo::nitro::rive::JHybridViewModelListPropertySpec::addInstanceAtAsync =====

/* virtual thunk to
   margelo::nitro::rive::JHybridViewModelListPropertySpec::addInstanceAtAsync(std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>
   const&, double) */

void __thiscall
margelo::nitro::rive::JHybridViewModelListPropertySpec::addInstanceAtAsync
          (JHybridViewModelListPropertySpec *this,shared_ptr *param_1,double param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    addInstanceAtAsync((shared_ptr *)(this + *(long *)(*(long *)this + -0x90)),param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00374970  margelo::nitro::rive::JHybridViewModelListPropertySpec::removeInstanceAsync =====

/* virtual thunk to
   margelo::nitro::rive::JHybridViewModelListPropertySpec::removeInstanceAsync(std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>
   const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelListPropertySpec::removeInstanceAsync
          (JHybridViewModelListPropertySpec *this,shared_ptr *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    removeInstanceAsync((shared_ptr *)(this + *(long *)(*(long *)this + -0x98)));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003749b4  margelo::nitro::rive::JHybridViewModelListPropertySpec::removeInstanceAtAsync =====

/* virtual thunk to
   margelo::nitro::rive::JHybridViewModelListPropertySpec::removeInstanceAtAsync(double) */

void __thiscall
margelo::nitro::rive::JHybridViewModelListPropertySpec::removeInstanceAtAsync
          (JHybridViewModelListPropertySpec *this,double param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    removeInstanceAtAsync(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003749f8  margelo::nitro::rive::JHybridViewModelListPropertySpec::swapAsync =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelListPropertySpec::swapAsync(double,
   double) */

void __thiscall
margelo::nitro::rive::JHybridViewModelListPropertySpec::swapAsync
          (JHybridViewModelListPropertySpec *this,double param_1,double param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    swapAsync(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00374a3c  margelo::nitro::rive::JHybridViewModelListPropertySpec::addListener =====

/* virtual thunk to
   margelo::nitro::rive::JHybridViewModelListPropertySpec::addListener(std::__ndk1::function<void
   ()> const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelListPropertySpec::addListener
          (JHybridViewModelListPropertySpec *this,function *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    addListener((function *)(this + *(long *)(*(long *)this + -0xb0)));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00374a80  margelo::nitro::rive::JHybridViewModelListPropertySpec::removeListeners =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelListPropertySpec::removeListeners() */

void __thiscall
margelo::nitro::rive::JHybridViewModelListPropertySpec::removeListeners
          (JHybridViewModelListPropertySpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    removeListeners(this + *(long *)(*(long *)this + -0xb8));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00374ac4  margelo::nitro::rive::JHybridViewModelArtboardPropertySpec::JavaPart::getJHybridViewModelArtboardPropertySpec =====

/* margelo::nitro::rive::JHybridViewModelArtboardPropertySpec::JavaPart::getJHybridViewModelArtboardPropertySpec()
    */

void __thiscall
margelo::nitro::rive::JHybridViewModelArtboardPropertySpec::JavaPart::
getJHybridViewModelArtboardPropertySpec(JavaPart *this)

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
     (lVar2 = __dynamic_cast(local_38,PTR_typeinfo_00395e60,PTR_typeinfo_00397120,0xffffffffffffffff
                            ), lVar2 == 0)) {
    *in_x8 = 0;
    in_x8[1] = 0;
    this_00 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00374b8c to 00374b97 has its CatchHandler @ 00374bcc */
    std::runtime_error::runtime_error
              (this_00,"Failed to downcast JHybridObject to JHybridViewModelArtboardPropertySpec!");
    if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* try { // try from 00374bac to 00374bc3 has its CatchHandler @ 00374bc4 */
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


// ===== 00374c08  FUN_00374c08 =====

void FUN_00374c08(long *param_1)

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


// ===== 00374c94  margelo::nitro::rive::JHybridViewModelArtboardPropertySpec::CxxPart::initHybrid =====

/* margelo::nitro::rive::JHybridViewModelArtboardPropertySpec::CxxPart::initHybrid(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelArtboardPropertySpec::CxxPart,
   margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart, void>::_javaobject*>) */

void __thiscall
margelo::nitro::rive::JHybridViewModelArtboardPropertySpec::CxxPart::initHybrid
          (undefined8 *param_1,CxxPart *this)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00374cec(&local_30,*(undefined8 *)this);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00374cec  FUN_00374cec =====

void FUN_00374cec(undefined8 *param_1,undefined8 param_2)

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
                    /* try { // try from 00374d24 to 00374d2b has its CatchHandler @ 00374e08 */
  local_48 = param_2;
  margelo::nitro::JHybridObject::CxxPart::CxxPart(pCVar2,&local_48);
  *(undefined **)pCVar2 = PTR_vtable_00397128 + 0x10;
                    /* try { // try from 00374d3c to 00374d43 has its CatchHandler @ 00374e00 */
  facebook::jni::detail::HybridData::create();
  uVar5 = *param_1;
                    /* try { // try from 00374d48 to 00374d63 has its CatchHandler @ 00374e1c */
  plVar3 = (long *)facebook::jni::Environment::current();
  lVar4 = (**(code **)(*plVar3 + 200))(plVar3,uVar5);
  facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 00374d6c to 00374d77 has its CatchHandler @ 00374dd0 */
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
                    /* try { // try from 00374d98 to 00374dab has its CatchHandler @ 00374e18 */
    plVar3 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb8))(plVar3,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00374e54  FUN_00374e54 =====

void FUN_00374e54(long *param_1)

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
                    /* try { // try from 00374e90 to 00374ea3 has its CatchHandler @ 00374ee0 */
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


// ===== 00374ee4  margelo::nitro::rive::JHybridViewModelArtboardPropertySpec::CxxPart::createHybridObject =====

/* margelo::nitro::rive::JHybridViewModelArtboardPropertySpec::CxxPart::createHybridObject(facebook::jni::basic_strong_ref<margelo::nitro::JHybridObject::JavaPart,
   facebook::jni::LocalReferenceAllocator> const&) */

void margelo::nitro::rive::JHybridViewModelArtboardPropertySpec::CxxPart::createHybridObject
               (basic_strong_ref *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
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
  
  puVar1 = PTR_target_class_00397140;
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*in_x1 == 0) {
LAB_003751f0:
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 003751fc to 00375207 has its CatchHandler @ 00375394 */
    param_1 = (basic_strong_ref *)
              std::runtime_error::runtime_error
                        (this,
                         "Failed to cast JHybridObject::JavaPart to JHybridViewModelArtboardPropertySpec::JavaPart!"
                        );
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 00375218 to 0037522f has its CatchHandler @ 00375390 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_00375460;
  }
  if (((*PTR_target_class_00397148 & 1) == 0) &&
     (param_1 = (basic_strong_ref *)__cxa_guard_acquire(PTR_target_class_00397148),
     (int)param_1 != 0)) {
                    /* try { // try from 00375240 to 0037524f has its CatchHandler @ 00375354 */
    facebook::jni::findClassStatic(PTR_kBaseName_00397150);
    *(undefined8 *)puVar1 = local_60;
    param_1 = (basic_strong_ref *)__cxa_guard_release(PTR_target_class_00397148);
  }
  if (*(long *)puVar1 == 0) {
    if (*(long *)(lVar2 + 0x28) != local_58) goto LAB_00375460;
    FUN_00261580("java/lang/ClassCastException","Could not find class %s.",PTR_kBaseName_00397150);
LAB_00375294:
                    /* try { // try from 00375294 to 003752a3 has its CatchHandler @ 00375380 */
    param_1 = (basic_strong_ref *)FUN_002615d4(local_80,&local_68);
    uVar8 = (ulong)local_80 | 1;
    if ((local_80[0] & 1) != 0) {
      uVar8 = local_70;
    }
    if (*(long *)(lVar2 + 0x28) != local_58) goto LAB_00375460;
                    /* try { // try from 003752c8 to 003752e3 has its CatchHandler @ 00375368 */
    FUN_0026171c("java/lang/ClassCastException","Tried to cast from %s to %s.",uVar8,
                 PTR_kBaseName_00397150);
  }
  else {
                    /* try { // try from 00374f3c to 00374f4f has its CatchHandler @ 003753e8 */
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5,*in_x1);
    local_68 = lVar6;
                    /* try { // try from 00374f58 to 00374f6f has its CatchHandler @ 003753e4 */
    plVar5 = (long *)facebook::jni::Environment::current();
    cVar4 = (**(code **)(*plVar5 + 0x58))(plVar5,lVar6,*(undefined8 *)puVar1);
    if (cVar4 == '\0') goto LAB_00375294;
    lVar10 = *in_x1;
    if (lVar10 == 0) {
      local_88 = 0;
    }
    else {
                    /* try { // try from 00374f80 to 00374f9b has its CatchHandler @ 003753ec */
      plVar5 = (long *)facebook::jni::Environment::current();
      local_88 = (**(code **)(*plVar5 + 200))(plVar5,lVar10);
      facebook::jni::throwPendingJniExceptionAsCppException();
      if (local_88 == 0) {
        pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
        param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar9);
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0037533c to 00375353 has its CatchHandler @ 003753ec */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(pbVar9,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
        }
        goto LAB_00375460;
      }
    }
    if (lVar6 != 0) {
                    /* try { // try from 00374fb8 to 00374fcb has its CatchHandler @ 003753e0 */
      plVar5 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar5 + 0xb8))(plVar5,lVar6);
    }
    if (local_88 == 0) goto LAB_003751f0;
                    /* try { // try from 00374fd0 to 00374fd7 has its CatchHandler @ 003753cc */
    plVar5 = (long *)operator_new(0xa8);
    puVar1 = PTR_vtable_00395e70;
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_00393f78;
    plVar11 = plVar5 + 3;
    *plVar11 = (long)(puVar1 + 0x10);
    puVar3 = PTR_PTR_00397110;
                    /* try { // try from 00375008 to 00375023 has its CatchHandler @ 003753c4 */
    margelo::nitro::HybridObject::HybridObject((HybridObject *)(plVar5 + 5),PTR_PTR_00397110 + 0x58)
    ;
    puVar1 = PTR_construction_vtable_00397118 + 0x40;
    plVar5[5] = (long)(PTR_construction_vtable_00397118 + 0xb0);
    plVar5[3] = (long)puVar1;
                    /* try { // try from 0037503c to 00375057 has its CatchHandler @ 003753f8 */
    plVar7 = (long *)facebook::jni::Environment::current();
    uVar8 = (**(code **)(*plVar7 + 200))(plVar7,local_88);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 0037505c to 0037506b has its CatchHandler @ 003753b4 */
    local_80[0] = uVar8;
    margelo::nitro::JHybridObject::JHybridObject((JHybridObject *)(plVar5 + 0x13),puVar3 + 0xa8);
    uVar8 = local_80[0];
    if (local_80[0] != 0) {
                    /* try { // try from 00375074 to 00375087 has its CatchHandler @ 003753dc */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,uVar8);
    }
                    /* try { // try from 00375088 to 003750a3 has its CatchHandler @ 003753f0 */
    plVar7 = (long *)facebook::jni::Environment::current();
    uVar8 = (**(code **)(*plVar7 + 200))(plVar7,local_88);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 003750a8 to 003750b7 has its CatchHandler @ 003753a4 */
    local_80[0] = uVar8;
    FUN_00357adc(plVar5 + 0x11,puVar3 + 0x80,uVar8);
    if (uVar8 != 0) {
                    /* try { // try from 003750bc to 003750cf has its CatchHandler @ 003753d8 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,uVar8);
    }
    puVar3 = PTR_vtable_00397108;
    puVar1 = PTR_vtable_00397108 + 0x58;
    plVar5[5] = (long)(PTR_vtable_00397108 + 200);
    *plVar11 = (long)puVar1;
    plVar5[0x11] = (long)(puVar3 + 0x148);
    plVar5[0x13] = (long)(puVar3 + 0x1a8);
                    /* try { // try from 003750f8 to 00375113 has its CatchHandler @ 00375400 */
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
      *in_x8 = (long)plVar11 + *(long *)(plVar5[3] + -0x58);
      in_x8[1] = (long)plVar5;
      if (local_88 != 0) {
                    /* try { // try from 003751ac to 003751bf has its CatchHandler @ 003753d4 */
        plVar5 = (long *)facebook::jni::Environment::current();
        param_1 = (basic_strong_ref *)(**(code **)(*plVar5 + 0xb8))(plVar5,local_88);
      }
      if (*(long *)(lVar2 + 0x28) == local_58) {
        return;
      }
      goto LAB_00375460;
    }
  }
  pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
  param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar9);
  if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 00375304 to 0037531b has its CatchHandler @ 00375400 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pbVar9,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
  }
LAB_00375460:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00375464  FUN_00375464 =====

void FUN_00375464(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00375490 to 003754a3 has its CatchHandler @ 003754d0 */
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


// ===== 003754d4  FUN_003754d4 =====

void FUN_003754d4(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00375a04();
  FUN_00356a9c(param_1 + 0x70,PTR_PTR_00397110 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(param_1 + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(param_1 + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00375554  FUN_00375554 =====

void FUN_00375554(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00375a04();
  FUN_00356a9c(param_1 + 0x70,PTR_PTR_00397110 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(param_1 + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(param_1 + 0x10));
  facebook::jsi::NativeState::~NativeState(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003755dc  margelo::nitro::rive::JHybridViewModelArtboardPropertySpec::set =====

/* margelo::nitro::rive::JHybridViewModelArtboardPropertySpec::set(std::__ndk1::optional<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridBindableArtboardSpec>
   > const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelArtboardPropertySpec::set
          (JHybridViewModelArtboardPropertySpec *this,optional *param_1)

{
  optional oVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  _jobject *p_Var6;
  _jmethodID *p_Var7;
  undefined8 uVar8;
  long local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (((DAT_0039eaa8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039eaa8), iVar3 != 0)) {
                    /* try { // try from 00375748 to 00375757 has its CatchHandler @ 00375770 */
    FUN_00375d34(&local_50);
    DAT_0039eaa0 = FUN_00375df4(&local_50);
    __cxa_guard_release(&DAT_0039eaa8);
  }
  oVar1 = param_1[0x10];
  p_Var7 = *(_jmethodID **)(this + 8);
  if (oVar1 == (optional)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = __dynamic_cast(*(undefined8 *)param_1,PTR_typeinfo_003947f8,PTR_typeinfo_00395e10,
                           0xffffffffffffffff);
    param_1 = *(optional **)(param_1 + 8);
    if (param_1 != (optional *)0x0) {
      FUN_00259a00(1,param_1 + 8);
    }
    uVar8 = *(undefined8 *)(lVar4 + 8);
                    /* try { // try from 0037565c to 00375677 has its CatchHandler @ 00375788 */
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar4 = (**(code **)(*plVar5 + 0xa8))(plVar5,uVar8);
    facebook::jni::throwPendingJniExceptionAsCppException();
  }
  local_50 = lVar4;
                    /* try { // try from 00375684 to 0037569f has its CatchHandler @ 00375790 */
  p_Var6 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var6,p_Var7,DAT_0039eaa0,lVar4);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (lVar4 != 0) {
                    /* try { // try from 003756a4 to 003756b7 has its CatchHandler @ 00375784 */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb0))(plVar5,lVar4);
  }
  local_50 = 0;
  if (((oVar1 == (optional)0x0) || (param_1 == (optional *)0x0)) ||
     (lVar4 = FUN_00255510(0xffffffffffffffff,param_1 + 8), lVar4 != 0)) {
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return;
    }
  }
  else {
    (**(code **)(*(long *)param_1 + 0x10))(param_1);
    if (*(long *)(lVar2 + 0x28) == local_48) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003757c4  FUN_003757c4 =====

void FUN_003757c4(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_00375a04(this);
  FUN_00356a9c(this + 0x70,PTR_PTR_00397110 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00375850  FUN_00375850 =====

void FUN_00375850(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_00375a04(this);
  FUN_00356a9c(this + 0x70,PTR_PTR_00397110 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  facebook::jsi::NativeState::~NativeState(this);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003758e4  FUN_003758e4 =====

void FUN_003758e4(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_00375a04(this);
  FUN_00356a9c(this + 0x70,PTR_PTR_00397110 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00375970  FUN_00375970 =====

void FUN_00375970(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_00375a04(this);
  FUN_00356a9c(this + 0x70,PTR_PTR_00397110 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  facebook::jsi::NativeState::~NativeState(this);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00375a04  FUN_00375a04 =====

void FUN_00375a04(long *param_1)

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
  
  puVar2 = PTR_vtable_00397108;
  local_50 = (long *)&local_70;
  pppuVar3 = &local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1[2] = (long)(PTR_vtable_00397108 + 200);
  *param_1 = (long)(puVar2 + 0x58);
  param_1[0x10] = (long)(puVar2 + 0x1a8);
  param_1[0xe] = (long)(puVar2 + 0x148);
  local_70 = &PTR_FUN_00393ef8;
  plStack_68 = param_1;
                    /* try { // try from 00375a64 to 00375a6b has its CatchHandler @ 00375ae0 */
  facebook::jni::ThreadScope::WithClassLoader((function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar5 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00375a98;
    lVar5 = 5;
    pppuVar3 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar3 + lVar5 * 8))();
LAB_00375a98:
  lVar5 = param_1[1];
  if (lVar5 != 0) {
                    /* try { // try from 00375aa0 to 00375ab3 has its CatchHandler @ 00375ae4 */
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


// ===== 00375ae8  FUN_00375ae8 =====

void FUN_00375ae8(void *param_1)

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


// ===== 00375b20  FUN_00375b20 =====

void FUN_00375b20(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00393ef8;
  puVar2[1] = uVar4;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00375b7c  FUN_00375b7c =====

void FUN_00375b7c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00393ef8;
  param_2[1] = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00375bc4  FUN_00375bc4 =====

void FUN_00375bc4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00375bfc  FUN_00375bfc =====

void FUN_00375bfc(void *param_1)

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


// ===== 00375c34  FUN_00375c34 =====

void FUN_00375c34(long param_1)

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
                    /* try { // try from 00375c60 to 00375c73 has its CatchHandler @ 00375ca0 */
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


// ===== 00375ca4  FUN_00375ca4 =====

void FUN_00375ca4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00397130) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00375cf4  FUN_00375cf4 =====

undefined * FUN_00375cf4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00397138;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00375d34  FUN_00375d34 =====

void FUN_00375d34(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00397160 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00397160), iVar2 != 0))
  {
                    /* try { // try from 00375da4 to 00375db7 has its CatchHandler @ 00375dc8 */
    facebook::jni::findClassStatic(PTR_kBaseName_00397168);
    __cxa_guard_release(PTR_cls_00397160);
  }
  *param_1 = *(undefined8 *)PTR_cls_00397158;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00375df4  FUN_00375df4 =====

long FUN_00375df4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,&DAT_001d4cc6,PTR_kDescriptor_00397170);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00375e70  FUN_00375e70 =====

void FUN_00375e70(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00375e9c to 00375eaf has its CatchHandler @ 00375edc */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb0))(plVar2,lVar4);
  }
  *param_1 = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00375ee0  FUN_00375ee0 =====

void FUN_00375ee0(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_00393f78;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00375f24  FUN_00375f24 =====

void FUN_00375f24(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_00393f78;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00375f7c  FUN_00375f7c =====

void FUN_00375f7c(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00375fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(param_1 + 0x18))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00375fbc  FUN_00375fbc =====

void FUN_00375fbc(void *param_1)

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


// ===== 00375ff4  margelo::nitro::rive::JHybridViewModelArtboardPropertySpec::CxxPart::registerNatives =====

/* margelo::nitro::rive::JHybridViewModelArtboardPropertySpec::CxxPart::registerNatives() */

void margelo::nitro::rive::JHybridViewModelArtboardPropertySpec::CxxPart::registerNatives(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  char *pcVar7;
  long *plVar8;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puStack_58 = PTR_kDescriptor_00392f98;
  local_60 = PTR_s_initHybrid_00392f90;
  local_50 = PTR_call_00392fa0;
  pcVar7 = (char *)operator_new(0x50);
  uVar5 = s_Lcom_margelo_nitro_rive_HybridVi_001d50d1._25_8_;
  uVar4 = s_Lcom_margelo_nitro_rive_HybridVi_001d50d1._17_8_;
  uVar3 = s_Lcom_margelo_nitro_rive_HybridVi_001d50d1._9_8_;
  uVar2 = s_Lcom_margelo_nitro_rive_HybridVi_001d50d1._1_8_;
  pcVar7[0x40] = 'r';
  pcVar7[0x41] = 't';
  pcVar7[0x42] = '\0';
  *(undefined8 *)(pcVar7 + 8) = uVar3;
  *(undefined8 *)pcVar7 = uVar2;
  *(undefined8 *)(pcVar7 + 0x18) = uVar5;
  *(undefined8 *)(pcVar7 + 0x10) = uVar4;
  uVar4 = s_Lcom_margelo_nitro_rive_HybridVi_001d50d1._57_8_;
  uVar3 = s_Lcom_margelo_nitro_rive_HybridVi_001d50d1._49_8_;
  uVar2 = s_Lcom_margelo_nitro_rive_HybridVi_001d50d1._33_8_;
  *(undefined8 *)(pcVar7 + 0x28) = s_Lcom_margelo_nitro_rive_HybridVi_001d50d1._41_8_;
  *(undefined8 *)(pcVar7 + 0x20) = uVar2;
  *(undefined8 *)(pcVar7 + 0x38) = uVar4;
  *(undefined8 *)(pcVar7 + 0x30) = uVar3;
                    /* try { // try from 0037605c to 00376063 has its CatchHandler @ 003760d4 */
  facebook::jni::findClassLocal(pcVar7);
  operator_delete(pcVar7);
                    /* try { // try from 0037606c to 00376093 has its CatchHandler @ 003760e8 */
  plVar8 = (long *)facebook::jni::Environment::current();
  iVar6 = (**(code **)(*plVar8 + 0x6b8))(plVar8,local_40,&local_60,1);
  facebook::jni::throwCppExceptionIf(iVar6 != 0);
  if (local_40 != 0) {
                    /* try { // try from 0037609c to 003760af has its CatchHandler @ 003760e4 */
    plVar8 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar8 + 0xb8))(plVar8,local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00376110  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelArtboardPropertySpec::CxxPart,margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridViewModelArtboardPropertySpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelArtboardPropertySpec::CxxPart,margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   (*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelArtboardPropertySpec::CxxPart,
   margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart, void>::_javaobject*>),
   &margelo::nitro::rive::JHybridViewModelArtboardPropertySpec::CxxPart::initHybrid,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelArtboardPropertySpec::CxxPart,
   margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart, void>::_javaobject*,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>>::call(_JNIEnv*, _jobject*) */

undefined8
facebook::jni::detail::
FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelArtboardPropertySpec::CxxPart,margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridViewModelArtboardPropertySpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelArtboardPropertySpec::CxxPart,margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>
::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  JniEnvCacher aJStack_48 [24];
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_48,param_1);
                    /* try { // try from 0037613c to 00376147 has its CatchHandler @ 00376178 */
  FUN_00374cec(&local_30,param_2);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003761c4  margelo::nitro::rive::JHybridViewModelArtboardPropertySpec::set =====

/* virtual thunk to
   margelo::nitro::rive::JHybridViewModelArtboardPropertySpec::set(std::__ndk1::optional<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridBindableArtboardSpec>
   > const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelArtboardPropertySpec::set
          (JHybridViewModelArtboardPropertySpec *this,optional *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    set(this + *(long *)(*(long *)this + -0x40),param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00376208  FUN_00376208 =====

void FUN_00376208(long param_1)

{
  FUN_002bc004(*(undefined8 *)(param_1 + 0xf90));
  return;
}


// ===== 00376210  FUN_00376210 =====

void FUN_00376210(long param_1)

{
  FUN_0036c008(*(undefined8 *)(param_1 + 0x60));
  return;
}


// ===== 00376220  FUN_00376220 =====

void FUN_00376220(void)

{
  (*(code *)PTR_00397190)();
  return;
}


// ===== 00376240  <EXTERNAL>::__cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00397198)();
  return;
}


// ===== 00376250  <EXTERNAL>::__cxa_atexit =====

void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_003971a0)();
  return;
}


// ===== 00376260  <EXTERNAL>::__register_atfork =====

void __register_atfork(void)

{
  (*(code *)PTR___register_atfork_003971a8)();
  return;
}


// ===== 00376270  margelo::nitro::rive::registerAllNatives =====

void margelo::nitro::rive::registerAllNatives(void)

{
  (*(code *)PTR_registerAllNatives_003971b0)();
  return;
}


// ===== 00376280  facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
~base_owned_ref(base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *this)

{
  (*(code *)PTR__base_owned_ref_003971b8)();
  return;
}


// ===== 00376290  facebook::jni::detail::MethodWrapper<void(margelo::nitro::rive::JFunc_void_RiveError_cxx::*)(facebook::jni::alias_ref<margelo::nitro::rive::JRiveError>),&margelo::nitro::rive::JFunc_void_RiveError_cxx::invoke_cxx,margelo::nitro::rive::JFunc_void_RiveError_cxx,void,facebook::jni::alias_ref<margelo::nitro::rive::JRiveError>>::dispatch =====

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::rive::JFunc_void_RiveError_cxx::*)(facebook::jni::alias_ref<margelo::nitro::rive::JRiveError>),&margelo::nitro::rive::JFunc_void_RiveError_cxx::invoke_cxx,margelo::nitro::rive::JFunc_void_RiveError_cxx,void,facebook::jni::alias_ref<margelo::nitro::rive::JRiveError>>
     ::dispatch(void)

{
  (*(code *)PTR_dispatch_003971c0)();
  return;
}


// ===== 003762a0  facebook::jni::base_owned_ref<_jstring*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::base_owned_ref<_jstring*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
          (base_owned_ref<_jstring*,facebook::jni::LocalReferenceAllocator> *this)

{
  (*(code *)PTR__base_owned_ref_003971c8)();
  return;
}


// ===== 003762b0  facebook::jni::base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>::
~base_owned_ref(base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator> *this)

{
  (*(code *)PTR__base_owned_ref_003971d0)();
  return;
}


// ===== 003762c0  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init_copy_ctor_external =====

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
__init_copy_ctor_external
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2)

{
  (*(code *)PTR___init_copy_ctor_external_003971d8)();
  return;
}


// ===== 003762d0  facebook::jni::JObject::getClass =====

void facebook::jni::JObject::getClass(void)

{
  (*(code *)PTR_getClass_003971e0)();
  return;
}


