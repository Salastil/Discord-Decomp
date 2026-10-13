// ===== 00354304  FUN_00354304 =====

void FUN_00354304(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00396b98) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00354354  FUN_00354354 =====

undefined * FUN_00354354(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00396ba0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00354394  FUN_00354394 =====

void FUN_00354394(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00396bc8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00396bc8), iVar2 != 0))
  {
                    /* try { // try from 00354404 to 00354417 has its CatchHandler @ 00354428 */
    facebook::jni::findClassStatic(PTR_kBaseName_00396bd0);
    __cxa_guard_release(PTR_cls_00396bc8);
  }
  *param_1 = *(undefined8 *)PTR_cls_00396bc0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00354454  FUN_00354454 =====

long FUN_00354454(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*param_1,"replaceViewModel",PTR_kDescriptor_00396c20);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003544d0  FUN_003544d0 =====

void FUN_003544d0(long *param_1)

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


// ===== 0035455c  FUN_0035455c =====

void FUN_0035455c(long *param_1)

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


// ===== 003545e8  FUN_003545e8 =====

void FUN_003545e8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038c960;
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


// ===== 00354680  FUN_00354680 =====

void FUN_00354680(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038c960;
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


// ===== 0035470c  FUN_0035470c =====

void FUN_0035470c(long param_1)

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
  *puVar4 = &PTR_FUN_0038c960;
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


// ===== 00354784  FUN_00354784 =====

void FUN_00354784(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0038c960;
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


// ===== 003547e8  FUN_003547e8 =====

void FUN_003547e8(long param_1)

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


// ===== 00354874  FUN_00354874 =====

void FUN_00354874(void *param_1)

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


// ===== 003548f4  FUN_003548f4 =====

void FUN_003548f4(long param_1,undefined8 *param_2)

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
                    /* try { // try from 0035492c to 00354937 has its CatchHandler @ 003549a0 */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_0031ef0c(aeStack_98,aJStack_90);
                    /* try { // try from 00354944 to 0035494f has its CatchHandler @ 00354988 */
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


// ===== 003549c8  FUN_003549c8 =====

void FUN_003549c8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive28JHybridViewModelInstanceSpec14viewModelAsyncERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEENK3$_0clEvEUlRKN8facebook3jni9alias_refINSE_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00354a18  FUN_00354a18 =====

pointer_____offset_0x10___ * FUN_00354a18(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0038c9c0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00354a58  FUN_00354a58 =====

void FUN_00354a58(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038c8e0;
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


// ===== 00354af0  FUN_00354af0 =====

void FUN_00354af0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038c8e0;
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


// ===== 00354b7c  FUN_00354b7c =====

void FUN_00354b7c(long param_1)

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
  *puVar4 = &PTR_FUN_0038c8e0;
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


// ===== 00354bf4  FUN_00354bf4 =====

void FUN_00354bf4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0038c8e0;
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


// ===== 00354c58  FUN_00354c58 =====

void FUN_00354c58(long param_1)

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


// ===== 00354ce4  FUN_00354ce4 =====

void FUN_00354ce4(void *param_1)

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


// ===== 00354d64  FUN_00354d64 =====

void FUN_00354d64(long param_1,long *param_2)

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
                    /* try { // try from 00354dd4 to 00354ddf has its CatchHandler @ 00354e70 */
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


// ===== 00354eb8  FUN_00354eb8 =====

void FUN_00354eb8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive28JHybridViewModelInstanceSpec14viewModelAsyncERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEENK3$_0clEvEUlRKN8facebook3jni9alias_refINSE_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00354f08  FUN_00354f08 =====

pointer_____offset_0x10___ * FUN_00354f08(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0038c940;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00354f48  FUN_00354f48 =====

long FUN_00354f48(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*param_1,"artboardProperty",PTR_kDescriptor_00396c18);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00354fc4  FUN_00354fc4 =====

void FUN_00354fc4(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00354ff0 to 00355003 has its CatchHandler @ 00355030 */
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


// ===== 00355034  FUN_00355034 =====

long FUN_00355034(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,"listProperty",PTR_kDescriptor_00396c10);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003550b0  FUN_003550b0 =====

void FUN_003550b0(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 003550dc to 003550ef has its CatchHandler @ 0035511c */
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


// ===== 00355120  FUN_00355120 =====

long FUN_00355120(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,"imageProperty",PTR_kDescriptor_00396c08);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035519c  FUN_0035519c =====

void FUN_0035519c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 003551c8 to 003551db has its CatchHandler @ 00355208 */
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


// ===== 0035520c  FUN_0035520c =====

long FUN_0035520c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,"triggerProperty",PTR_kDescriptor_00396c00)
  ;
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00355288  FUN_00355288 =====

void FUN_00355288(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 003552b4 to 003552c7 has its CatchHandler @ 003552f4 */
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


// ===== 003552f8  FUN_003552f8 =====

long FUN_003552f8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,"enumProperty",PTR_kDescriptor_00396bf8);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00355374  FUN_00355374 =====

void FUN_00355374(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 003553a0 to 003553b3 has its CatchHandler @ 003553e0 */
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


// ===== 003553e4  FUN_003553e4 =====

long FUN_003553e4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,"colorProperty",PTR_kDescriptor_00396bf0);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00355460  FUN_00355460 =====

void FUN_00355460(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 0035548c to 0035549f has its CatchHandler @ 003554cc */
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


// ===== 003554d0  FUN_003554d0 =====

long FUN_003554d0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,"booleanProperty",PTR_kDescriptor_00396be8)
  ;
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035554c  FUN_0035554c =====

void FUN_0035554c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00355578 to 0035558b has its CatchHandler @ 003555b8 */
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


// ===== 003555bc  FUN_003555bc =====

long FUN_003555bc(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,"stringProperty",PTR_kDescriptor_00396be0);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00355638  FUN_00355638 =====

void FUN_00355638(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00355664 to 00355677 has its CatchHandler @ 003556a4 */
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


// ===== 003556a8  FUN_003556a8 =====

long FUN_003556a8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,"numberProperty",PTR_kDescriptor_00396bd8);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00355724  FUN_00355724 =====

void FUN_00355724(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00355750 to 00355763 has its CatchHandler @ 00355790 */
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


// ===== 00355794  FUN_00355794 =====

void FUN_00355794(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_0038ca60;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003557d8  FUN_003557d8 =====

void FUN_003557d8(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_0038ca60;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00355830  FUN_00355830 =====

void FUN_00355830(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00355868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(param_1 + 0x18))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00355870  FUN_00355870 =====

void FUN_00355870(void *param_1)

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


// ===== 003558a8  margelo::nitro::rive::JHybridViewModelInstanceSpec::CxxPart::registerNatives =====

/* margelo::nitro::rive::JHybridViewModelInstanceSpec::CxxPart::registerNatives() */

void margelo::nitro::rive::JHybridViewModelInstanceSpec::CxxPart::registerNatives(void)

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
  puStack_58 = PTR_kDescriptor_0038c240;
  local_60 = PTR_s_initHybrid_0038c238;
  local_50 = PTR_call_0038c248;
  pcVar9 = (char *)operator_new(0x40);
  uVar7 = s_Lcom_margelo_nitro_rive_HybridVi_001d6609._33_8_;
  uVar6 = s_Lcom_margelo_nitro_rive_HybridVi_001d6609._25_8_;
  uVar5 = s_Lcom_margelo_nitro_rive_HybridVi_001d6609._17_8_;
  uVar4 = s_Lcom_margelo_nitro_rive_HybridVi_001d6609._9_8_;
  uVar3 = s_Lcom_margelo_nitro_rive_HybridVi_001d6609._1_8_;
  uVar2 = CONCAT62(s_Lcom_margelo_nitro_rive_HybridVi_001d6609._43_6_,
                   s_Lcom_margelo_nitro_rive_HybridVi_001d6609._41_2_);
  pcVar9[0x3a] = '\0';
  *(undefined8 *)(pcVar9 + 0x28) = uVar2;
  *(undefined8 *)(pcVar9 + 0x20) = uVar7;
  *(undefined8 *)(pcVar9 + 8) = uVar4;
  *(undefined8 *)pcVar9 = uVar3;
  *(undefined8 *)(pcVar9 + 0x18) = uVar6;
  *(undefined8 *)(pcVar9 + 0x10) = uVar5;
  uVar2 = CONCAT26(s_Lcom_margelo_nitro_rive_HybridVi_001d6609._49_2_,
                   s_Lcom_margelo_nitro_rive_HybridVi_001d6609._43_6_);
  *(undefined8 *)(pcVar9 + 0x32) = s_Lcom_margelo_nitro_rive_HybridVi_001d6609._51_8_;
  *(undefined8 *)(pcVar9 + 0x2a) = uVar2;
                    /* try { // try from 00355910 to 00355917 has its CatchHandler @ 00355988 */
  facebook::jni::findClassLocal(pcVar9);
  operator_delete(pcVar9);
                    /* try { // try from 00355920 to 00355947 has its CatchHandler @ 0035599c */
  plVar10 = (long *)facebook::jni::Environment::current();
  iVar8 = (**(code **)(*plVar10 + 0x6b8))(plVar10,local_40,&local_60,1);
  facebook::jni::throwCppExceptionIf(iVar8 != 0);
  if (local_40 != 0) {
                    /* try { // try from 00355950 to 00355963 has its CatchHandler @ 00355998 */
    plVar10 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar10 + 0xb8))(plVar10,local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003559c4  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelInstanceSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridViewModelInstanceSpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelInstanceSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   (*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelInstanceSpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, void>::_javaobject*>),
   &margelo::nitro::rive::JHybridViewModelInstanceSpec::CxxPart::initHybrid,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelInstanceSpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, void>::_javaobject*,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>>::call(_JNIEnv*, _jobject*) */

undefined8
facebook::jni::detail::
FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelInstanceSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridViewModelInstanceSpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelInstanceSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>
::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  JniEnvCacher aJStack_48 [24];
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_48,param_1);
                    /* try { // try from 003559f0 to 003559fb has its CatchHandler @ 00355a2c */
  FUN_00351e84(&local_30,param_2);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00355a78  margelo::nitro::rive::JHybridViewModelInstanceSpec::getInstanceName =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelInstanceSpec::getInstanceName() */

void __thiscall
margelo::nitro::rive::JHybridViewModelInstanceSpec::getInstanceName
          (JHybridViewModelInstanceSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getInstanceName(this + *(long *)(*(long *)this + -0x30));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00355abc  margelo::nitro::rive::JHybridViewModelInstanceSpec::numberProperty =====

/* virtual thunk to
   margelo::nitro::rive::JHybridViewModelInstanceSpec::numberProperty(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelInstanceSpec::numberProperty
          (JHybridViewModelInstanceSpec *this,basic_string *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    numberProperty((basic_string *)(this + *(long *)(*(long *)this + -0x38)));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00355b00  margelo::nitro::rive::JHybridViewModelInstanceSpec::stringProperty =====

/* virtual thunk to
   margelo::nitro::rive::JHybridViewModelInstanceSpec::stringProperty(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelInstanceSpec::stringProperty
          (JHybridViewModelInstanceSpec *this,basic_string *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    stringProperty((basic_string *)(this + *(long *)(*(long *)this + -0x40)));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00355b44  margelo::nitro::rive::JHybridViewModelInstanceSpec::booleanProperty =====

/* virtual thunk to
   margelo::nitro::rive::JHybridViewModelInstanceSpec::booleanProperty(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelInstanceSpec::booleanProperty
          (JHybridViewModelInstanceSpec *this,basic_string *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    booleanProperty((basic_string *)(this + *(long *)(*(long *)this + -0x48)));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00355b88  margelo::nitro::rive::JHybridViewModelInstanceSpec::colorProperty =====

/* virtual thunk to
   margelo::nitro::rive::JHybridViewModelInstanceSpec::colorProperty(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelInstanceSpec::colorProperty
          (JHybridViewModelInstanceSpec *this,basic_string *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    colorProperty((basic_string *)(this + *(long *)(*(long *)this + -0x50)));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00355bcc  margelo::nitro::rive::JHybridViewModelInstanceSpec::enumProperty =====

/* virtual thunk to
   margelo::nitro::rive::JHybridViewModelInstanceSpec::enumProperty(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelInstanceSpec::enumProperty
          (JHybridViewModelInstanceSpec *this,basic_string *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    enumProperty((basic_string *)(this + *(long *)(*(long *)this + -0x58)));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00355c10  margelo::nitro::rive::JHybridViewModelInstanceSpec::triggerProperty =====

/* virtual thunk to
   margelo::nitro::rive::JHybridViewModelInstanceSpec::triggerProperty(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelInstanceSpec::triggerProperty
          (JHybridViewModelInstanceSpec *this,basic_string *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    triggerProperty((basic_string *)(this + *(long *)(*(long *)this + -0x60)));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00355c54  margelo::nitro::rive::JHybridViewModelInstanceSpec::imageProperty =====

/* virtual thunk to
   margelo::nitro::rive::JHybridViewModelInstanceSpec::imageProperty(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelInstanceSpec::imageProperty
          (JHybridViewModelInstanceSpec *this,basic_string *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    imageProperty((basic_string *)(this + *(long *)(*(long *)this + -0x68)));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00355c98  margelo::nitro::rive::JHybridViewModelInstanceSpec::listProperty =====

/* virtual thunk to
   margelo::nitro::rive::JHybridViewModelInstanceSpec::listProperty(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelInstanceSpec::listProperty
          (JHybridViewModelInstanceSpec *this,basic_string *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    listProperty((basic_string *)(this + *(long *)(*(long *)this + -0x70)));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00355cdc  margelo::nitro::rive::JHybridViewModelInstanceSpec::artboardProperty =====

/* virtual thunk to
   margelo::nitro::rive::JHybridViewModelInstanceSpec::artboardProperty(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelInstanceSpec::artboardProperty
          (JHybridViewModelInstanceSpec *this,basic_string *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    artboardProperty((basic_string *)(this + *(long *)(*(long *)this + -0x78)));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00355d20  margelo::nitro::rive::JHybridViewModelInstanceSpec::viewModel =====

/* virtual thunk to
   margelo::nitro::rive::JHybridViewModelInstanceSpec::viewModel(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelInstanceSpec::viewModel
          (JHybridViewModelInstanceSpec *this,basic_string *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    viewModel((basic_string *)(this + *(long *)(*(long *)this + -0x80)));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00355d64  margelo::nitro::rive::JHybridViewModelInstanceSpec::viewModelAsync =====

/* virtual thunk to
   margelo::nitro::rive::JHybridViewModelInstanceSpec::viewModelAsync(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelInstanceSpec::viewModelAsync
          (JHybridViewModelInstanceSpec *this,basic_string *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    viewModelAsync((basic_string *)(this + *(long *)(*(long *)this + -0x88)));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00355da8  margelo::nitro::rive::JHybridViewModelInstanceSpec::replaceViewModel =====

/* virtual thunk to
   margelo::nitro::rive::JHybridViewModelInstanceSpec::replaceViewModel(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec> const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelInstanceSpec::replaceViewModel
          (JHybridViewModelInstanceSpec *this,basic_string *param_1,shared_ptr *param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    replaceViewModel(this + *(long *)(*(long *)this + -0x90),param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00355dec  margelo::nitro::rive::JHybridViewModelPropertySpec::JavaPart::getJHybridViewModelPropertySpec =====

/* margelo::nitro::rive::JHybridViewModelPropertySpec::JavaPart::getJHybridViewModelPropertySpec()
    */

void __thiscall
margelo::nitro::rive::JHybridViewModelPropertySpec::JavaPart::getJHybridViewModelPropertySpec
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
     (lVar2 = __dynamic_cast(local_38,PTR_typeinfo_00395e60,PTR_typeinfo_00396c30,0xffffffffffffffff
                            ), lVar2 == 0)) {
    *in_x8 = 0;
    in_x8[1] = 0;
    this_00 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00355eb4 to 00355ebf has its CatchHandler @ 00355ef4 */
    std::runtime_error::runtime_error
              (this_00,"Failed to downcast JHybridObject to JHybridViewModelPropertySpec!");
    if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* try { // try from 00355ed4 to 00355eeb has its CatchHandler @ 00355eec */
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


// ===== 00355f30  FUN_00355f30 =====

void FUN_00355f30(long *param_1)

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


// ===== 00355fbc  margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart::initHybrid =====

/* margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart::initHybrid(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, void>::_javaobject*>) */

void __thiscall
margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart::initHybrid
          (undefined8 *param_1,CxxPart *this)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00356014(&local_30,*(undefined8 *)this);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00356014  FUN_00356014 =====

void FUN_00356014(undefined8 *param_1,undefined8 param_2)

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
                    /* try { // try from 0035604c to 00356053 has its CatchHandler @ 00356130 */
  local_48 = param_2;
  margelo::nitro::JHybridObject::CxxPart::CxxPart(pCVar2,&local_48);
  *(undefined **)pCVar2 = PTR_vtable_00396c28 + 0x10;
                    /* try { // try from 00356064 to 0035606b has its CatchHandler @ 00356128 */
  facebook::jni::detail::HybridData::create();
  uVar5 = *param_1;
                    /* try { // try from 00356070 to 0035608b has its CatchHandler @ 00356144 */
  plVar3 = (long *)facebook::jni::Environment::current();
  lVar4 = (**(code **)(*plVar3 + 200))(plVar3,uVar5);
  facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 00356094 to 0035609f has its CatchHandler @ 003560f8 */
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
                    /* try { // try from 003560c0 to 003560d3 has its CatchHandler @ 00356140 */
    plVar3 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb8))(plVar3,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035617c  FUN_0035617c =====

void FUN_0035617c(long *param_1)

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
                    /* try { // try from 003561b8 to 003561cb has its CatchHandler @ 00356208 */
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


// ===== 0035620c  margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart::createHybridObject =====

/* margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart::createHybridObject(facebook::jni::basic_strong_ref<margelo::nitro::JHybridObject::JavaPart,
   facebook::jni::LocalReferenceAllocator> const&) */

void margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart::createHybridObject
               (basic_strong_ref *param_1)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  runtime_error *this;
  bad_alloc *pbVar8;
  long *in_x1;
  long *in_x8;
  long lVar9;
  long *plVar10;
  long local_88;
  ulong local_80 [2];
  ulong local_70;
  long local_68;
  undefined8 local_60;
  long local_58;
  
  puVar2 = PTR_target_class_00396c38;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*in_x1 == 0) {
LAB_003564c0:
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 003564cc to 003564d7 has its CatchHandler @ 00356664 */
    param_1 = (basic_strong_ref *)
              std::runtime_error::runtime_error
                        (this,
                         "Failed to cast JHybridObject::JavaPart to JHybridViewModelPropertySpec::JavaPart!"
                        );
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 003564e8 to 003564ff has its CatchHandler @ 00356660 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_00356710;
  }
  if (((*PTR_target_class_00396c40 & 1) == 0) &&
     (param_1 = (basic_strong_ref *)__cxa_guard_acquire(PTR_target_class_00396c40),
     (int)param_1 != 0)) {
                    /* try { // try from 00356510 to 0035651f has its CatchHandler @ 00356624 */
    facebook::jni::findClassStatic(PTR_kBaseName_00396c48);
    *(undefined8 *)puVar2 = local_60;
    param_1 = (basic_strong_ref *)__cxa_guard_release(PTR_target_class_00396c40);
  }
  if (*(long *)puVar2 == 0) {
    if (*(long *)(lVar1 + 0x28) != local_58) goto LAB_00356710;
    FUN_00261580("java/lang/ClassCastException","Could not find class %s.",PTR_kBaseName_00396c48);
LAB_00356564:
                    /* try { // try from 00356564 to 00356573 has its CatchHandler @ 00356650 */
    param_1 = (basic_strong_ref *)FUN_002615d4(local_80,&local_68);
    uVar7 = (ulong)local_80 | 1;
    if ((local_80[0] & 1) != 0) {
      uVar7 = local_70;
    }
    if (*(long *)(lVar1 + 0x28) != local_58) goto LAB_00356710;
                    /* try { // try from 00356598 to 003565b3 has its CatchHandler @ 00356638 */
    FUN_0026171c("java/lang/ClassCastException","Tried to cast from %s to %s.",uVar7,
                 PTR_kBaseName_00396c48);
  }
  else {
                    /* try { // try from 00356264 to 00356277 has its CatchHandler @ 003566a4 */
    plVar4 = (long *)facebook::jni::Environment::current();
    lVar5 = (**(code **)(*plVar4 + 0xf8))(plVar4,*in_x1);
    local_68 = lVar5;
                    /* try { // try from 00356280 to 00356297 has its CatchHandler @ 003566a0 */
    plVar4 = (long *)facebook::jni::Environment::current();
    cVar3 = (**(code **)(*plVar4 + 0x58))(plVar4,lVar5,*(undefined8 *)puVar2);
    if (cVar3 == '\0') goto LAB_00356564;
    lVar9 = *in_x1;
    if (lVar9 == 0) {
      local_88 = 0;
    }
    else {
                    /* try { // try from 003562a8 to 003562c3 has its CatchHandler @ 003566a8 */
      plVar4 = (long *)facebook::jni::Environment::current();
      local_88 = (**(code **)(*plVar4 + 200))(plVar4,lVar9);
      facebook::jni::throwPendingJniExceptionAsCppException();
      if (local_88 == 0) {
        pbVar8 = (bad_alloc *)__cxa_allocate_exception(8);
        param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar8);
        if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 0035660c to 00356623 has its CatchHandler @ 003566a8 */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(pbVar8,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
        }
        goto LAB_00356710;
      }
    }
    if (lVar5 != 0) {
                    /* try { // try from 003562e0 to 003562f3 has its CatchHandler @ 0035669c */
      plVar4 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar4 + 0xb8))(plVar4,lVar5);
    }
    if (local_88 == 0) goto LAB_003564c0;
                    /* try { // try from 003562f8 to 003562ff has its CatchHandler @ 0035668c */
    plVar4 = (long *)operator_new(0x98);
    puVar2 = PTR_vtable_00395e70;
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_FUN_0038cb08;
    plVar10 = plVar4 + 3;
    *plVar10 = (long)(puVar2 + 0x10);
                    /* try { // try from 00356330 to 00356347 has its CatchHandler @ 00356684 */
    margelo::nitro::HybridObject::HybridObject
              ((HybridObject *)(plVar4 + 5),(char *)&PTR_PTR_loadHybridMethods_00393b70);
    plVar4[3] = (long)&PTR_FUN_00393bc8;
    plVar4[5] = (long)&PTR_loadHybridMethods_00393c30;
                    /* try { // try from 0035635c to 00356377 has its CatchHandler @ 003566ac */
    plVar6 = (long *)facebook::jni::Environment::current();
    uVar7 = (**(code **)(*plVar6 + 200))(plVar6,local_88);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 0035637c to 0035638f has its CatchHandler @ 00356674 */
    local_80[0] = uVar7;
    margelo::nitro::JHybridObject::JHybridObject
              ((JHybridObject *)(plVar4 + 0x11),(basic_strong_ref *)&PTR_PTR__JHybridObject_00393b80
              );
    uVar7 = local_80[0];
    if (local_80[0] != 0) {
                    /* try { // try from 00356398 to 003563ab has its CatchHandler @ 00356698 */
      plVar6 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,uVar7);
    }
    *plVar10 = (long)&PTR_FUN_00393a10;
    plVar4[5] = (long)&PTR_loadHybridMethods_00393a78;
    plVar4[0x11] = (long)&PTR_FUN_00393b00;
                    /* try { // try from 003563c8 to 003563e3 has its CatchHandler @ 003566b4 */
    plVar6 = (long *)facebook::jni::Environment::current();
    lVar5 = (**(code **)(*plVar6 + 0xa8))(plVar6,local_88);
    param_1 = (basic_strong_ref *)facebook::jni::throwPendingJniExceptionAsCppException();
    if (lVar5 != 0) {
      plVar4[4] = lVar5;
      lVar5 = (long)plVar10 + *(long *)(plVar4[3] + -0x20);
      if ((lVar5 != -0x20) &&
         ((*(long *)(lVar5 + 0x28) == 0 || (*(long *)(*(long *)(lVar5 + 0x28) + 8) == -1)))) {
        FUN_00259a00(1,plVar4 + 1);
        FUN_00259a00(1,plVar4 + 2);
        lVar9 = *(long *)(lVar5 + 0x28);
        *(long *)(lVar5 + 0x20) = lVar5;
        *(long **)(lVar5 + 0x28) = plVar4;
        if (lVar9 != 0) {
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        param_1 = (basic_strong_ref *)FUN_00255510(0xffffffffffffffff,plVar4 + 1);
        if (param_1 == (basic_strong_ref *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          param_1 = (basic_strong_ref *)std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      *in_x8 = (long)plVar10 + *(long *)(plVar4[3] + -0x40);
      in_x8[1] = (long)plVar4;
      if (local_88 != 0) {
                    /* try { // try from 0035647c to 0035648f has its CatchHandler @ 00356694 */
        plVar4 = (long *)facebook::jni::Environment::current();
        param_1 = (basic_strong_ref *)(**(code **)(*plVar4 + 0xb8))(plVar4,local_88);
      }
      if (*(long *)(lVar1 + 0x28) == local_58) {
        return;
      }
      goto LAB_00356710;
    }
  }
  pbVar8 = (bad_alloc *)__cxa_allocate_exception(8);
  param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar8);
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 003565d4 to 003565eb has its CatchHandler @ 003566b4 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pbVar8,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
  }
LAB_00356710:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00356714  FUN_00356714 =====

void FUN_00356714(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00356740 to 00356753 has its CatchHandler @ 00356780 */
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


// ===== 00356784  FUN_00356784 =====

void FUN_00356784(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00356a9c(param_1,&PTR_PTR_FUN_00393b30);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(param_1 + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(param_1 + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003567fc  FUN_003567fc =====

void FUN_003567fc(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00356a9c(param_1,&PTR_PTR_FUN_00393b30);
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


// ===== 0035687c  FUN_0035687c =====

void FUN_0035687c(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_00356a9c(this,&PTR_PTR_FUN_00393b30);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00356900  FUN_00356900 =====

void FUN_00356900(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_00356a9c(this,&PTR_PTR_FUN_00393b30);
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


// ===== 0035698c  FUN_0035698c =====

void FUN_0035698c(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_00356a9c(this,&PTR_PTR_FUN_00393b30);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00356a10  FUN_00356a10 =====

void FUN_00356a10(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_00356a9c(this,&PTR_PTR_FUN_00393b30);
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


// ===== 00356a9c  FUN_00356a9c =====

void FUN_00356a9c(long *param_1,long *param_2)

{
  long lVar1;
  undefined ***pppuVar2;
  long *plVar3;
  long lVar4;
  undefined **local_70;
  long *plStack_68;
  long *local_50;
  long local_38;
  
  local_50 = (long *)&local_70;
  pppuVar2 = &local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_2;
  *param_1 = lVar4;
  *(long *)((long)param_1 + *(long *)(lVar4 + -0x38)) = param_2[1];
  *(long *)((long)param_1 + *(long *)(*param_1 + -0x20)) = param_2[2];
  *(long *)((long)param_1 + *(long *)(*param_1 + -0x28)) = param_2[3];
  local_70 = &PTR_FUN_00393e68;
  *(long *)((long)param_1 + *(long *)(*param_1 + -0x40)) = param_2[4];
  plStack_68 = param_1;
                    /* try { // try from 00356b18 to 00356b1f has its CatchHandler @ 00356b94 */
  facebook::jni::ThreadScope::WithClassLoader((function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00356b4c;
    lVar4 = 5;
    pppuVar2 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar2 + lVar4 * 8))();
LAB_00356b4c:
  lVar4 = param_1[1];
  if (lVar4 != 0) {
                    /* try { // try from 00356b54 to 00356b67 has its CatchHandler @ 00356b98 */
    plVar3 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb0))(plVar3,lVar4);
  }
  param_1[1] = 0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00356b9c  FUN_00356b9c =====

void FUN_00356b9c(void *param_1)

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


// ===== 00356bd4  FUN_00356bd4 =====

void FUN_00356bd4(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00393e68;
  puVar2[1] = uVar4;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00356c30  FUN_00356c30 =====

void FUN_00356c30(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00393e68;
  param_2[1] = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00356c78  FUN_00356c78 =====

void FUN_00356c78(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00356cb0  FUN_00356cb0 =====

void FUN_00356cb0(void *param_1)

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


// ===== 00356ce8  FUN_00356ce8 =====

void FUN_00356ce8(long param_1)

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
                    /* try { // try from 00356d14 to 00356d27 has its CatchHandler @ 00356d54 */
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


// ===== 00356d58  FUN_00356d58 =====

void FUN_00356d58(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00396c50) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00356da8  FUN_00356da8 =====

undefined * FUN_00356da8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00396c58;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00356de8  FUN_00356de8 =====

void FUN_00356de8(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_0038cb08;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00356e2c  FUN_00356e2c =====

void FUN_00356e2c(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_0038cb08;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00356e84  FUN_00356e84 =====

void FUN_00356e84(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00356ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(param_1 + 0x18))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00356ec4  FUN_00356ec4 =====

void FUN_00356ec4(void *param_1)

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


// ===== 00356efc  margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart::registerNatives =====

/* margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart::registerNatives() */

void margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart::registerNatives(void)

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
  puStack_58 = PTR_kDescriptor_0038caa8;
  local_60 = PTR_s_initHybrid_0038caa0;
  local_50 = PTR_call_0038cab0;
  pcVar9 = (char *)operator_new(0x40);
  uVar7 = s_Lcom_margelo_nitro_rive_HybridVi_001d5de0._33_8_;
  uVar6 = s_Lcom_margelo_nitro_rive_HybridVi_001d5de0._25_8_;
  uVar5 = s_Lcom_margelo_nitro_rive_HybridVi_001d5de0._17_8_;
  uVar4 = s_Lcom_margelo_nitro_rive_HybridVi_001d5de0._9_8_;
  uVar3 = s_Lcom_margelo_nitro_rive_HybridVi_001d5de0._1_8_;
  uVar2 = CONCAT62(s_Lcom_margelo_nitro_rive_HybridVi_001d5de0._43_6_,
                   s_Lcom_margelo_nitro_rive_HybridVi_001d5de0._41_2_);
  pcVar9[0x3a] = '\0';
  *(undefined8 *)(pcVar9 + 0x28) = uVar2;
  *(undefined8 *)(pcVar9 + 0x20) = uVar7;
  *(undefined8 *)(pcVar9 + 8) = uVar4;
  *(undefined8 *)pcVar9 = uVar3;
  *(undefined8 *)(pcVar9 + 0x18) = uVar6;
  *(undefined8 *)(pcVar9 + 0x10) = uVar5;
  uVar2 = CONCAT26(s_Lcom_margelo_nitro_rive_HybridVi_001d5de0._49_2_,
                   s_Lcom_margelo_nitro_rive_HybridVi_001d5de0._43_6_);
  *(undefined8 *)(pcVar9 + 0x32) = s_Lcom_margelo_nitro_rive_HybridVi_001d5de0._51_8_;
  *(undefined8 *)(pcVar9 + 0x2a) = uVar2;
                    /* try { // try from 00356f64 to 00356f6b has its CatchHandler @ 00356fdc */
  facebook::jni::findClassLocal(pcVar9);
  operator_delete(pcVar9);
                    /* try { // try from 00356f74 to 00356f9b has its CatchHandler @ 00356ff0 */
  plVar10 = (long *)facebook::jni::Environment::current();
  iVar8 = (**(code **)(*plVar10 + 0x6b8))(plVar10,local_40,&local_60,1);
  facebook::jni::throwCppExceptionIf(iVar8 != 0);
  if (local_40 != 0) {
                    /* try { // try from 00356fa4 to 00356fb7 has its CatchHandler @ 00356fec */
    plVar10 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar10 + 0xb8))(plVar10,local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00357018  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   (*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, void>::_javaobject*>),
   &margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart::initHybrid,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, void>::_javaobject*,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>>::call(_JNIEnv*, _jobject*) */

undefined8
facebook::jni::detail::
FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>
::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  JniEnvCacher aJStack_48 [24];
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_48,param_1);
                    /* try { // try from 00357044 to 0035704f has its CatchHandler @ 00357080 */
  FUN_00356014(&local_30,param_2);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003570cc  margelo::nitro::rive::JHybridViewModelNumberPropertySpec::JavaPart::getJHybridViewModelNumberPropertySpec =====

/* margelo::nitro::rive::JHybridViewModelNumberPropertySpec::JavaPart::getJHybridViewModelNumberPropertySpec()
    */

void __thiscall
margelo::nitro::rive::JHybridViewModelNumberPropertySpec::JavaPart::
getJHybridViewModelNumberPropertySpec(JavaPart *this)

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
     (lVar2 = __dynamic_cast(local_38,PTR_typeinfo_00395e60,PTR_typeinfo_00396c78,0xffffffffffffffff
                            ), lVar2 == 0)) {
    *in_x8 = 0;
    in_x8[1] = 0;
    this_00 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00357194 to 0035719f has its CatchHandler @ 003571d4 */
    std::runtime_error::runtime_error
              (this_00,"Failed to downcast JHybridObject to JHybridViewModelNumberPropertySpec!");
    if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* try { // try from 003571b4 to 003571cb has its CatchHandler @ 003571cc */
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


// ===== 00357210  FUN_00357210 =====

void FUN_00357210(long *param_1)

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


// ===== 0035729c  margelo::nitro::rive::JHybridViewModelNumberPropertySpec::CxxPart::initHybrid =====

/* margelo::nitro::rive::JHybridViewModelNumberPropertySpec::CxxPart::initHybrid(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelNumberPropertySpec::CxxPart,
   margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart, void>::_javaobject*>) */

void __thiscall
margelo::nitro::rive::JHybridViewModelNumberPropertySpec::CxxPart::initHybrid
          (undefined8 *param_1,CxxPart *this)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_003572f4(&local_30,*(undefined8 *)this);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003572f4  FUN_003572f4 =====

void FUN_003572f4(undefined8 *param_1,undefined8 param_2)

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
                    /* try { // try from 0035732c to 00357333 has its CatchHandler @ 00357410 */
  local_48 = param_2;
  margelo::nitro::JHybridObject::CxxPart::CxxPart(pCVar2,&local_48);
  *(undefined **)pCVar2 = PTR_vtable_00396c80 + 0x10;
                    /* try { // try from 00357344 to 0035734b has its CatchHandler @ 00357408 */
  facebook::jni::detail::HybridData::create();
  uVar5 = *param_1;
                    /* try { // try from 00357350 to 0035736b has its CatchHandler @ 00357424 */
  plVar3 = (long *)facebook::jni::Environment::current();
  lVar4 = (**(code **)(*plVar3 + 200))(plVar3,uVar5);
  facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 00357374 to 0035737f has its CatchHandler @ 003573d8 */
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
                    /* try { // try from 003573a0 to 003573b3 has its CatchHandler @ 00357420 */
    plVar3 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb8))(plVar3,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035745c  FUN_0035745c =====

void FUN_0035745c(long *param_1)

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
                    /* try { // try from 00357498 to 003574ab has its CatchHandler @ 003574e8 */
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


// ===== 003574ec  margelo::nitro::rive::JHybridViewModelNumberPropertySpec::CxxPart::createHybridObject =====

/* margelo::nitro::rive::JHybridViewModelNumberPropertySpec::CxxPart::createHybridObject(facebook::jni::basic_strong_ref<margelo::nitro::JHybridObject::JavaPart,
   facebook::jni::LocalReferenceAllocator> const&) */

void margelo::nitro::rive::JHybridViewModelNumberPropertySpec::CxxPart::createHybridObject
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
  
  puVar1 = PTR_target_class_00396d10;
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*in_x1 == 0) {
LAB_003577f8:
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00357804 to 0035780f has its CatchHandler @ 0035799c */
    param_1 = (basic_strong_ref *)
              std::runtime_error::runtime_error
                        (this,
                         "Failed to cast JHybridObject::JavaPart to JHybridViewModelNumberPropertySpec::JavaPart!"
                        );
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 00357820 to 00357837 has its CatchHandler @ 00357998 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_00357a68;
  }
  if (((*PTR_target_class_00396d18 & 1) == 0) &&
     (param_1 = (basic_strong_ref *)__cxa_guard_acquire(PTR_target_class_00396d18),
     (int)param_1 != 0)) {
                    /* try { // try from 00357848 to 00357857 has its CatchHandler @ 0035795c */
    facebook::jni::findClassStatic(PTR_kBaseName_00396d20);
    *(undefined8 *)puVar1 = local_60;
    param_1 = (basic_strong_ref *)__cxa_guard_release(PTR_target_class_00396d18);
  }
  if (*(long *)puVar1 == 0) {
    if (*(long *)(lVar2 + 0x28) != local_58) goto LAB_00357a68;
    FUN_00261580("java/lang/ClassCastException","Could not find class %s.",PTR_kBaseName_00396d20);
LAB_0035789c:
                    /* try { // try from 0035789c to 003578ab has its CatchHandler @ 00357988 */
    param_1 = (basic_strong_ref *)FUN_002615d4(local_80,&local_68);
    uVar8 = (ulong)local_80 | 1;
    if ((local_80[0] & 1) != 0) {
      uVar8 = local_70;
    }
    if (*(long *)(lVar2 + 0x28) != local_58) goto LAB_00357a68;
                    /* try { // try from 003578d0 to 003578eb has its CatchHandler @ 00357970 */
    FUN_0026171c("java/lang/ClassCastException","Tried to cast from %s to %s.",uVar8,
                 PTR_kBaseName_00396d20);
  }
  else {
                    /* try { // try from 00357544 to 00357557 has its CatchHandler @ 003579f0 */
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5,*in_x1);
    local_68 = lVar6;
                    /* try { // try from 00357560 to 00357577 has its CatchHandler @ 003579ec */
    plVar5 = (long *)facebook::jni::Environment::current();
    cVar4 = (**(code **)(*plVar5 + 0x58))(plVar5,lVar6,*(undefined8 *)puVar1);
    if (cVar4 == '\0') goto LAB_0035789c;
    lVar10 = *in_x1;
    if (lVar10 == 0) {
      local_88 = 0;
    }
    else {
                    /* try { // try from 00357588 to 003575a3 has its CatchHandler @ 003579f4 */
      plVar5 = (long *)facebook::jni::Environment::current();
      local_88 = (**(code **)(*plVar5 + 200))(plVar5,lVar10);
      facebook::jni::throwPendingJniExceptionAsCppException();
      if (local_88 == 0) {
        pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
        param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar9);
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 00357944 to 0035795b has its CatchHandler @ 003579f4 */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(pbVar9,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
        }
        goto LAB_00357a68;
      }
    }
    if (lVar6 != 0) {
                    /* try { // try from 003575c0 to 003575d3 has its CatchHandler @ 003579e8 */
      plVar5 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar5 + 0xb8))(plVar5,lVar6);
    }
    if (local_88 == 0) goto LAB_003577f8;
                    /* try { // try from 003575d8 to 003575df has its CatchHandler @ 003579d4 */
    plVar5 = (long *)operator_new(0xa8);
    puVar1 = PTR_vtable_00395e70;
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_0038d648;
    plVar11 = plVar5 + 3;
    *plVar11 = (long)(puVar1 + 0x10);
    puVar3 = PTR_PTR_00396c68;
                    /* try { // try from 00357610 to 0035762b has its CatchHandler @ 003579cc */
    margelo::nitro::HybridObject::HybridObject((HybridObject *)(plVar5 + 5),PTR_PTR_00396c68 + 0x58)
    ;
    puVar1 = PTR_construction_vtable_00396c70 + 0x68;
    plVar5[5] = (long)(PTR_construction_vtable_00396c70 + 0x100);
    plVar5[3] = (long)puVar1;
                    /* try { // try from 00357644 to 0035765f has its CatchHandler @ 00357a00 */
    plVar7 = (long *)facebook::jni::Environment::current();
    uVar8 = (**(code **)(*plVar7 + 200))(plVar7,local_88);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 00357664 to 00357673 has its CatchHandler @ 003579bc */
    local_80[0] = uVar8;
    margelo::nitro::JHybridObject::JHybridObject((JHybridObject *)(plVar5 + 0x13),puVar3 + 0xa8);
    uVar8 = local_80[0];
    if (local_80[0] != 0) {
                    /* try { // try from 0035767c to 0035768f has its CatchHandler @ 003579e4 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,uVar8);
    }
                    /* try { // try from 00357690 to 003576ab has its CatchHandler @ 003579f8 */
    plVar7 = (long *)facebook::jni::Environment::current();
    uVar8 = (**(code **)(*plVar7 + 200))(plVar7,local_88);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 003576b0 to 003576bf has its CatchHandler @ 003579ac */
    local_80[0] = uVar8;
    FUN_00357adc(plVar5 + 0x11,puVar3 + 0x80,uVar8);
    if (uVar8 != 0) {
                    /* try { // try from 003576c4 to 003576d7 has its CatchHandler @ 003579e0 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,uVar8);
    }
    puVar3 = PTR_vtable_00396c60;
    puVar1 = PTR_vtable_00396c60 + 0x80;
    plVar5[5] = (long)(PTR_vtable_00396c60 + 0x118);
    *plVar11 = (long)puVar1;
    plVar5[0x11] = (long)(puVar3 + 0x198);
    plVar5[0x13] = (long)(puVar3 + 0x1f8);
                    /* try { // try from 00357700 to 0035771b has its CatchHandler @ 00357a08 */
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
                    /* try { // try from 003577b4 to 003577c7 has its CatchHandler @ 003579dc */
        plVar5 = (long *)facebook::jni::Environment::current();
        param_1 = (basic_strong_ref *)(**(code **)(*plVar5 + 0xb8))(plVar5,local_88);
      }
      if (*(long *)(lVar2 + 0x28) == local_58) {
        return;
      }
      goto LAB_00357a68;
    }
  }
  pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
  param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar9);
  if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0035790c to 00357923 has its CatchHandler @ 00357a08 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pbVar9,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
  }
LAB_00357a68:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00357a6c  FUN_00357a6c =====

void FUN_00357a6c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00357a98 to 00357aab has its CatchHandler @ 00357ad8 */
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


// ===== 00357adc  FUN_00357adc =====

void FUN_00357adc(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  bad_alloc *this;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_2;
  *param_1 = lVar4;
  *(long *)((long)param_1 + *(long *)(lVar4 + -0x38)) = param_2[1];
  *(long *)((long)param_1 + *(long *)(*param_1 + -0x20)) = param_2[2];
  *(long *)((long)param_1 + *(long *)(*param_1 + -0x28)) = param_2[3];
  *(long *)((long)param_1 + *(long *)(*param_1 + -0x40)) = param_2[4];
  if (param_3 != 0) {
    plVar2 = (long *)facebook::jni::Environment::current();
    param_3 = (**(code **)(*plVar2 + 0xa8))(plVar2,param_3);
    facebook::jni::throwPendingJniExceptionAsCppException();
    if (param_3 == 0) {
      this = (bad_alloc *)__cxa_allocate_exception(8);
      if (*(long *)(lVar1 + 0x28) == lVar3) {
        std::bad_alloc::bad_alloc(this);
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
      }
      goto LAB_00357bcc;
    }
  }
  param_1[1] = param_3;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
LAB_00357bcc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00357bd0  FUN_00357bd0 =====

void FUN_00357bd0(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00358a18();
  FUN_00356a9c(param_1 + 0x70,PTR_PTR_00396c68 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(param_1 + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(param_1 + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00357c50  FUN_00357c50 =====

void FUN_00357c50(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00358a18();
  FUN_00356a9c(param_1 + 0x70,PTR_PTR_00396c68 + 0x80);
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


// ===== 00357cd8  margelo::nitro::rive::JHybridViewModelNumberPropertySpec::getValue =====

/* margelo::nitro::rive::JHybridViewModelNumberPropertySpec::getValue() */

undefined1  [16] __thiscall
margelo::nitro::rive::JHybridViewModelNumberPropertySpec::getValue
          (JHybridViewModelNumberPropertySpec *this)

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
  if (((DAT_0039e3c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039e3c8), iVar2 != 0)) {
                    /* try { // try from 00357d6c to 00357d83 has its CatchHandler @ 00357d98 */
    FUN_00358d48(auStack_40);
    DAT_0039e3c0 = FUN_002620fc(auStack_40,"getValue");
    __cxa_guard_release(&DAT_0039e3c8);
  }
  uVar4 = *(undefined8 *)(this + 8);
  uVar3 = facebook::jni::Environment::current();
  auVar5._0_8_ = FUN_00262180(uVar3,uVar4,DAT_0039e3c0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    facebook::jni::throwPendingJniExceptionAsCppException();
    auVar5._8_8_ = 0;
    return auVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00357dc4  margelo::nitro::rive::JHybridViewModelNumberPropertySpec::setValue =====

/* margelo::nitro::rive::JHybridViewModelNumberPropertySpec::setValue(double) */

void __thiscall
margelo::nitro::rive::JHybridViewModelNumberPropertySpec::setValue
          (JHybridViewModelNumberPropertySpec *this,double param_1)

{
  long lVar1;
  int iVar2;
  _jobject *p_Var3;
  _jmethodID *p_Var4;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039e3d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039e3d8), iVar2 != 0)) {
                    /* try { // try from 00357e54 to 00357e6b has its CatchHandler @ 00357e80 */
    FUN_00358d48(auStack_40);
    DAT_0039e3d0 = FUN_0035a6d8(auStack_40,"setValue");
    __cxa_guard_release(&DAT_0039e3d8);
  }
  p_Var4 = *(_jmethodID **)(this + 8);
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var3,p_Var4,param_1,DAT_0039e3d0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    facebook::jni::throwPendingJniExceptionAsCppException();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00357eac  margelo::nitro::rive::JHybridViewModelNumberPropertySpec::getValueAsync =====

/* margelo::nitro::rive::JHybridViewModelNumberPropertySpec::getValueAsync() */

void margelo::nitro::rive::JHybridViewModelNumberPropertySpec::getValueAsync(void)

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
  if (((DAT_0039e3e8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039e3e8), iVar4 != 0)) {
                    /* try { // try from 003580bc to 003580d3 has its CatchHandler @ 00358190 */
    FUN_00358d48(&local_90);
    DAT_0039e3e0 = FUN_0031e0a0(&local_90,"getValueAsync");
    __cxa_guard_release(&DAT_0039e3e8);
  }
  p_Var13 = *(_jmethodID **)(in_x0 + 8);
  p_Var5 = (_jobject *)facebook::jni::Environment::current();
  lVar6 = _JNIEnv::CallObjectMethod(p_Var5,p_Var13,DAT_0039e3e0);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_98 = lVar6;
                    /* try { // try from 00357f10 to 00357f17 has its CatchHandler @ 00358234 */
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
                    /* try { // try from 00357f38 to 00357f3f has its CatchHandler @ 00358224 */
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
                    /* try { // try from 00358108 to 0035810b has its CatchHandler @ 00358174 */
    uVar9 = FUN_0031e19c(local_90);
    *(undefined8 *)PTR_hybridDataField_00396030 = uVar9;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 00357f68 to 00357f7b has its CatchHandler @ 00358240 */
  puVar2 = PTR_hybridDataField_00396030;
  uVar9 = facebook::jni::getHybridDataFromField
                    ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uStack_88 = *in_x8;
  local_80 = in_x8[1];
  if (local_80 != 0) {
    FUN_00259a00(1,local_80 + 8);
  }
  local_90 = &PTR_FUN_0038d4c8;
                    /* try { // try from 00357fb0 to 00357fb7 has its CatchHandler @ 003581e4 */
  local_70 = &local_90;
  FUN_0031e2bc(uVar9,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar11 = &local_90;
LAB_00357fd8:
    (*(code *)(*pppuVar11)[lVar6])();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar6 = 5;
    pppuVar11 = local_70;
    goto LAB_00357fd8;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 00358150 to 00358153 has its CatchHandler @ 00358170 */
    uVar9 = FUN_0031e19c(local_90);
    *(undefined8 *)puVar2 = uVar9;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 00357fec to 00357ffb has its CatchHandler @ 00358240 */
  uVar10 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uVar9 = *in_x8;
  lVar6 = in_x8[1];
  if (lVar6 != 0) {
    FUN_00259a00(1,lVar6 + 8);
  }
  local_90 = &PTR_FUN_0038d548;
                    /* try { // try from 00358030 to 00358037 has its CatchHandler @ 003581a4 */
  uStack_88 = uVar9;
  local_80 = lVar6;
  local_70 = &local_90;
  FUN_0031e5cc(uVar10,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar11 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_00358064;
    lVar6 = 5;
    pppuVar11 = local_70;
  }
  (*(code *)(*pppuVar11)[lVar6])();
LAB_00358064:
  lVar6 = local_98;
  if (local_98 != 0) {
                    /* try { // try from 0035806c to 0035807f has its CatchHandler @ 0035823c */
    plVar12 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar12 + 0xb8))(plVar12,lVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00358270  margelo::nitro::rive::JHybridViewModelNumberPropertySpec::set =====

/* margelo::nitro::rive::JHybridViewModelNumberPropertySpec::set(double) */

void __thiscall
margelo::nitro::rive::JHybridViewModelNumberPropertySpec::set
          (JHybridViewModelNumberPropertySpec *this,double param_1)

{
  long lVar1;
  int iVar2;
  _jobject *p_Var3;
  _jmethodID *p_Var4;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039e3f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039e3f8), iVar2 != 0)) {
                    /* try { // try from 00358300 to 00358317 has its CatchHandler @ 0035832c */
    FUN_00358d48(auStack_40);
    DAT_0039e3f0 = FUN_0035a6d8(auStack_40,&DAT_001d4cc6);
    __cxa_guard_release(&DAT_0039e3f8);
  }
  p_Var4 = *(_jmethodID **)(this + 8);
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var3,p_Var4,param_1,DAT_0039e3f0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    facebook::jni::throwPendingJniExceptionAsCppException();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00358358  margelo::nitro::rive::JHybridViewModelNumberPropertySpec::addListener =====

/* margelo::nitro::rive::JHybridViewModelNumberPropertySpec::addListener(std::__ndk1::function<void
   (double)> const&) */

void margelo::nitro::rive::JHybridViewModelNumberPropertySpec::addListener(function *param_1)

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
  if (((DAT_0039e408 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039e408), iVar3 != 0)) {
                    /* try { // try from 0035855c to 00358573 has its CatchHandler @ 00358670 */
    FUN_00358d48(&local_40);
    DAT_0039e400 = FUN_00358e08(&local_40,"addListener_cxx");
    __cxa_guard_release(&DAT_0039e408);
  }
  p_Var8 = *(_jmethodID **)(param_1 + 8);
  FUN_00358e8c(&local_40);
  lVar7 = local_40;
  local_48 = local_40;
                    /* try { // try from 003583ac to 003583cb has its CatchHandler @ 003586d8 */
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::CallObjectMethod(p_Var4,p_Var8,DAT_0039e400,lVar7);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (lVar7 != 0) {
                    /* try { // try from 003583d4 to 003583e7 has its CatchHandler @ 003586b4 */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,lVar7);
  }
  if (((*PTR_cls_003945e8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_cls_003945e8), iVar3 != 0))
  {
                    /* try { // try from 0035859c to 003585af has its CatchHandler @ 0035865c */
    facebook::jni::findClassStatic(PTR_kBaseName_003945f0);
    __cxa_guard_release(PTR_cls_003945e8);
  }
  uVar9 = *(undefined8 *)PTR_cls_003945e0;
                    /* try { // try from 00358404 to 0035841f has its CatchHandler @ 003586d0 */
  plVar6 = (long *)facebook::jni::Environment::current();
  cVar2 = (**(code **)(*plVar6 + 0x100))(plVar6,lVar5,uVar9);
  if (cVar2 == '\0') {
                    /* try { // try from 0035850c to 00358517 has its CatchHandler @ 003586a4 */
    FUN_003595b8(&local_40,lVar5);
    local_48 = local_40;
    local_40 = 0;
    local_50 = 0;
                    /* try { // try from 00358524 to 0035852b has its CatchHandler @ 00358684 */
    FUN_00359668();
    FUN_0035971c(&local_48);
    FUN_003597d8(&local_50);
    FUN_00359848(&local_40);
  }
  else {
    lVar7 = lVar5;
    if (lVar5 != 0) {
                    /* try { // try from 0035842c to 00358447 has its CatchHandler @ 003586d4 */
      plVar6 = (long *)facebook::jni::Environment::current();
      lVar7 = (**(code **)(*plVar6 + 200))(plVar6,lVar5);
      facebook::jni::throwPendingJniExceptionAsCppException();
      if (lVar7 == 0) {
        this = (bad_alloc *)__cxa_allocate_exception(8);
        if (*(long *)(lVar1 + 0x28) == local_38) {
          std::bad_alloc::bad_alloc(this);
                    /* try { // try from 00358628 to 0035863f has its CatchHandler @ 003586d4 */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(this,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
        }
        goto LAB_003586fc;
      }
    }
    local_48 = lVar7;
    if (((*PTR_hybridDataField_003945d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_hybridDataField_003945d8), iVar3 != 0)) {
      facebook::jni::JObject::getClass();
                    /* try { // try from 003585e0 to 003585e3 has its CatchHandler @ 00358640 */
      uVar9 = FUN_0025dae8(local_40);
      *(undefined8 *)PTR_hybridDataField_003945d0 = uVar9;
      facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
      ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
                       *)&local_40);
      __cxa_guard_release(PTR_hybridDataField_003945d8);
    }
                    /* try { // try from 00358460 to 003584af has its CatchHandler @ 003586b8 */
    lVar7 = facebook::jni::getHybridDataFromField
                      ((JObject *)&local_48,(JField *)PTR_hybridDataField_003945d0);
    plVar6 = *(long **)(lVar7 + 0x30);
    if (plVar6 == (long *)0x0) {
LAB_00358494:
      *(long **)(in_x8 + 0x20) = plVar6;
    }
    else {
      if (plVar6 != (long *)(lVar7 + 0x10)) {
        plVar6 = (long *)(**(code **)(*plVar6 + 0x10))();
        goto LAB_00358494;
      }
      *(long *)(in_x8 + 0x20) = in_x8;
      (**(code **)(*plVar6 + 0x18))();
    }
    lVar7 = local_48;
    if (local_48 != 0) {
                    /* try { // try from 003584b8 to 003584cb has its CatchHandler @ 003586ac */
      plVar6 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,lVar7);
    }
  }
  if (lVar5 != 0) {
                    /* try { // try from 003584d4 to 003584e7 has its CatchHandler @ 003586b0 */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,lVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_003586fc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00358700  margelo::nitro::rive::JHybridViewModelNumberPropertySpec::removeListeners =====

/* margelo::nitro::rive::JHybridViewModelNumberPropertySpec::removeListeners() */

void __thiscall
margelo::nitro::rive::JHybridViewModelNumberPropertySpec::removeListeners
          (JHybridViewModelNumberPropertySpec *this)

{
  long lVar1;
  int iVar2;
  _jobject *p_Var3;
  _jmethodID *p_Var4;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039e418 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039e418), iVar2 != 0)) {
                    /* try { // try from 00358780 to 00358797 has its CatchHandler @ 003587ac */
    FUN_00358d48(auStack_40);
    DAT_0039e410 = FUN_0034236c(auStack_40,"removeListeners");
    __cxa_guard_release(&DAT_0039e418);
  }
  p_Var4 = *(_jmethodID **)(this + 8);
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var3,p_Var4,DAT_0039e410);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    facebook::jni::throwPendingJniExceptionAsCppException();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003587d8  FUN_003587d8 =====

void FUN_003587d8(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_00358a18(this);
  FUN_00356a9c(this + 0x70,PTR_PTR_00396c68 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00358864  FUN_00358864 =====

void FUN_00358864(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_00358a18(this);
  FUN_00356a9c(this + 0x70,PTR_PTR_00396c68 + 0x80);
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


// ===== 003588f8  FUN_003588f8 =====

void FUN_003588f8(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_00358a18(this);
  FUN_00356a9c(this + 0x70,PTR_PTR_00396c68 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00358984  FUN_00358984 =====

void FUN_00358984(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_00358a18(this);
  FUN_00356a9c(this + 0x70,PTR_PTR_00396c68 + 0x80);
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


// ===== 00358a18  FUN_00358a18 =====

void FUN_00358a18(long *param_1)

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
  
  puVar2 = PTR_vtable_00396c60;
  local_50 = (long *)&local_70;
  pppuVar3 = &local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1[2] = (long)(PTR_vtable_00396c60 + 0x118);
  *param_1 = (long)(puVar2 + 0x80);
  param_1[0x10] = (long)(puVar2 + 0x1f8);
  param_1[0xe] = (long)(puVar2 + 0x198);
  local_70 = &PTR_FUN_0038d5c8;
  plStack_68 = param_1;
                    /* try { // try from 00358a78 to 00358a7f has its CatchHandler @ 00358af4 */
  facebook::jni::ThreadScope::WithClassLoader((function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar5 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00358aac;
    lVar5 = 5;
    pppuVar3 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar3 + lVar5 * 8))();
LAB_00358aac:
  lVar5 = param_1[1];
  if (lVar5 != 0) {
                    /* try { // try from 00358ab4 to 00358ac7 has its CatchHandler @ 00358af8 */
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


// ===== 00358afc  FUN_00358afc =====

void FUN_00358afc(void *param_1)

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


// ===== 00358b34  FUN_00358b34 =====

void FUN_00358b34(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_0038d5c8;
  puVar2[1] = uVar4;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00358b90  FUN_00358b90 =====

void FUN_00358b90(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_0038d5c8;
  param_2[1] = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00358bd8  FUN_00358bd8 =====

void FUN_00358bd8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00358c10  FUN_00358c10 =====

void FUN_00358c10(void *param_1)

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


// ===== 00358c48  FUN_00358c48 =====

void FUN_00358c48(long param_1)

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
                    /* try { // try from 00358c74 to 00358c87 has its CatchHandler @ 00358cb4 */
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


// ===== 00358cb8  FUN_00358cb8 =====

void FUN_00358cb8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00396d00) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00358d08  FUN_00358d08 =====

undefined * FUN_00358d08(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00396d08;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00358d48  FUN_00358d48 =====

void FUN_00358d48(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00396d30 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00396d30), iVar2 != 0))
  {
                    /* try { // try from 00358db8 to 00358dcb has its CatchHandler @ 00358ddc */
    facebook::jni::findClassStatic(PTR_kBaseName_00396d38);
    __cxa_guard_release(PTR_cls_00396d30);
  }
  *param_1 = *(undefined8 *)PTR_cls_00396d28;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00358e08  FUN_00358e08 =====

long FUN_00358e08(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,param_2,PTR_kDescriptor_00396d40);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00358e8c  FUN_00358e8c =====

void FUN_00358e8c(long *param_1,long *param_2)

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
  if (((*PTR_isHybrid_00396c90 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_isHybrid_00396c90), iVar5 != 0)) {
                    /* try { // try from 00359268 to 0035927f has its CatchHandler @ 00359404 */
    FUN_0035a254(&local_80);
    local_78 = local_80;
    bVar4 = facebook::jni::detail::HybridClassBase::isHybridClassBase(&local_78);
    *PTR_isHybrid_00396c88 = bVar4 & 1;
    __cxa_guard_release(PTR_isHybrid_00396c90);
  }
  plVar6 = (long *)operator_new(0x40);
  plVar7 = (long *)param_2[4];
  *plVar6 = (long)&PTR_FUN_0038f840;
  if (plVar7 != (long *)0x0) {
    if (plVar7 == param_2) {
      lVar9 = *param_2;
      plVar6[6] = (long)(plVar6 + 2);
      (**(code **)(lVar9 + 0x18))(param_2);
      goto LAB_00358f20;
    }
                    /* try { // try from 00358f00 to 00358f1f has its CatchHandler @ 003594a0 */
    plVar7 = (long *)(**(code **)(*plVar7 + 0x10))();
  }
  plVar6[6] = (long)plVar7;
LAB_00358f20:
  puVar2 = PTR_isHybrid_00396c88;
  *param_1 = 0;
  if (*puVar2 == '\0') {
                    /* try { // try from 0035904c to 00359053 has its CatchHandler @ 00359450 */
    facebook::jni::detail::HybridData::create();
                    /* try { // try from 00359058 to 00359073 has its CatchHandler @ 003594d0 */
    plVar7 = (long *)facebook::jni::Environment::current();
    plVar7 = (long *)(**(code **)(*plVar7 + 200))(plVar7,local_90);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 0035907c to 00359087 has its CatchHandler @ 00359428 */
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
                    /* try { // try from 003590a8 to 003590bb has its CatchHandler @ 0035946c */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,plVar6);
    }
                    /* try { // try from 003590c4 to 003590df has its CatchHandler @ 003594c8 */
    plVar6 = (long *)facebook::jni::Environment::current();
    lVar9 = (**(code **)(*plVar6 + 200))(plVar6,local_90);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 003590e4 to 003590ff has its CatchHandler @ 003594c0 */
    plVar6 = (long *)facebook::jni::Environment::current();
    lVar10 = (**(code **)(*plVar6 + 200))(plVar6,lVar9);
    facebook::jni::throwPendingJniExceptionAsCppException();
    local_70 = lVar10;
    if (((DAT_0039e448 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0039e448), iVar5 != 0)) {
      FUN_0035a424(&DAT_0039e440);
      __cxa_guard_release(&DAT_0039e448);
    }
    if (((DAT_0039e458 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0039e458), iVar5 != 0)) {
                    /* try { // try from 00359370 to 00359373 has its CatchHandler @ 00359388 */
      DAT_0039e450 = FUN_0035a4e4();
      __cxa_guard_release(&DAT_0039e458);
    }
    lVar10 = local_70;
    uVar13 = DAT_0039e450;
                    /* try { // try from 00359130 to 0035914b has its CatchHandler @ 003594b8 */
    plVar6 = (long *)facebook::jni::Environment::current();
    plVar6 = (long *)(**(code **)(*plVar6 + 200))(plVar6,lVar10);
    facebook::jni::throwPendingJniExceptionAsCppException();
    local_68 = plVar6;
                    /* try { // try from 00359150 to 0035917b has its CatchHandler @ 003594ec */
    p_Var8 = (_jclass *)facebook::jni::Environment::current();
    p_Var3 = DAT_0039e440;
    plVar7 = (long *)facebook::jni::Environment::current();
    plVar7 = (long *)(**(code **)(*plVar7 + 200))(plVar7,plVar6);
    facebook::jni::throwPendingJniExceptionAsCppException();
    local_60 = plVar7;
                    /* try { // try from 00359180 to 00359193 has its CatchHandler @ 00359418 */
    lVar11 = _JNIEnv::NewObject(p_Var8,p_Var3,uVar13,plVar7);
    if (plVar7 != (long *)0x0) {
                    /* try { // try from 0035919c to 003591af has its CatchHandler @ 00359468 */
      plVar12 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar12 + 0xb8))(plVar12,plVar7);
    }
                    /* try { // try from 003591b8 to 003591bb has its CatchHandler @ 003594ec */
    facebook::jni::throwCppExceptionIf(lVar11 == 0);
    if (plVar6 != (long *)0x0) {
                    /* try { // try from 003591c0 to 003591d3 has its CatchHandler @ 00359464 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,plVar6);
    }
    if (lVar10 != 0) {
                    /* try { // try from 003591d8 to 003591eb has its CatchHandler @ 00359460 */
      plVar6 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,lVar10);
    }
    *param_1 = lVar11;
    if (lVar9 != 0) {
                    /* try { // try from 003591f8 to 0035920b has its CatchHandler @ 0035945c */
      plVar6 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,lVar9);
    }
    if (local_90 != 0) {
                    /* try { // try from 00359218 to 0035922b has its CatchHandler @ 00359458 */
      plVar6 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,local_90);
    }
  }
  else {
    if (((DAT_0039e428 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0039e428), iVar5 != 0)) {
      FUN_0035a424(&DAT_0039e420);
      __cxa_guard_release(&DAT_0039e428);
    }
    if (((DAT_0039e438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0039e438), iVar5 != 0)) {
                    /* try { // try from 003592dc to 003592df has its CatchHandler @ 003593dc */
      DAT_0039e430 = FUN_0035a560();
      __cxa_guard_release(&DAT_0039e438);
    }
    uVar13 = DAT_0039e430;
                    /* try { // try from 00358f60 to 00358f83 has its CatchHandler @ 00359518 */
    p_Var8 = (_jclass *)facebook::jni::Environment::current();
    lVar9 = _JNIEnv::NewObject(p_Var8,DAT_0039e420,uVar13);
    facebook::jni::throwCppExceptionIf(lVar9 == 0);
    *param_1 = lVar9;
                    /* try { // try from 00358f88 to 00358fa3 has its CatchHandler @ 00359514 */
    plVar7 = (long *)facebook::jni::Environment::current();
    lVar9 = (**(code **)(*plVar7 + 200))(plVar7,lVar9);
    facebook::jni::throwPendingJniExceptionAsCppException();
    puVar2 = PTR_holderField_00396ca0;
    if (((*PTR_holderField_00396ca8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_holderField_00396ca8), iVar5 != 0)) {
      facebook::jni::JObject::getClass();
                    /* try { // try from 00359310 to 00359317 has its CatchHandler @ 003593b0 */
      uVar13 = facebook::jni::detail::getDestructorField((basic_strong_ref *)&local_60);
      *(undefined8 *)puVar2 = uVar13;
      facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
      ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
                       *)&local_60);
      __cxa_guard_release(PTR_holderField_00396ca8);
    }
    uVar13 = *(undefined8 *)puVar2;
                    /* try { // try from 00358fcc to 00358fe3 has its CatchHandler @ 003594e8 */
    plVar7 = (long *)facebook::jni::Environment::current();
    local_68 = (long *)(**(code **)(*plVar7 + 0x2f8))(plVar7,lVar9,uVar13);
                    /* try { // try from 00358fe8 to 00358ff3 has its CatchHandler @ 00359470 */
    local_60 = plVar6;
    facebook::jni::detail::HybridDestructor::setNativePointer(&local_68,&local_60);
    plVar6 = local_60;
    local_60 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    plVar6 = local_68;
    if (local_68 != (long *)0x0) {
                    /* try { // try from 00359014 to 00359027 has its CatchHandler @ 003594b4 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,plVar6);
    }
    if (lVar9 != 0) {
                    /* try { // try from 00359030 to 00359043 has its CatchHandler @ 003594b0 */
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


// ===== 00359548  FUN_00359548 =====

void FUN_00359548(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00359574 to 00359587 has its CatchHandler @ 003595b4 */
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


// ===== 003595b8  FUN_003595b8 =====

void FUN_003595b8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  bad_alloc *this;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (param_2 != 0) {
    plVar2 = (long *)facebook::jni::Environment::current();
    param_2 = (**(code **)(*plVar2 + 0xa8))(plVar2,param_2);
    facebook::jni::throwPendingJniExceptionAsCppException();
    if (param_2 == 0) {
      this = (bad_alloc *)__cxa_allocate_exception(8);
      if (*(long *)(lVar1 + 0x28) == lVar3) {
        std::bad_alloc::bad_alloc(this);
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
      }
      goto LAB_00359664;
    }
  }
  *param_1 = param_2;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
LAB_00359664:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00359668  FUN_00359668 =====

void FUN_00359668(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = 0;
  puVar2 = (undefined8 *)operator_new(0x10);
  *puVar2 = &PTR_FUN_00392d70;
                    /* try { // try from 003596ac to 003596c7 has its CatchHandler @ 003596f4 */
  plVar3 = (long *)facebook::jni::Environment::current();
  uVar4 = (**(code **)(*plVar3 + 0xa8))(plVar3,param_2);
  facebook::jni::throwPendingJniExceptionAsCppException();
  puVar2[1] = uVar4;
  *(undefined8 **)(param_1 + 0x20) = puVar2;
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035971c  FUN_0035971c =====

void FUN_0035971c(long *param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long *plVar3;
  long lVar4;
  undefined **local_70;
  long *plStack_68;
  long *local_50;
  long local_38;
  
  local_50 = (long *)&local_70;
  pppuVar2 = &local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_70 = &PTR_FUN_00392df0;
  plStack_68 = param_1;
                    /* try { // try from 00359754 to 0035975b has its CatchHandler @ 003597d0 */
  facebook::jni::ThreadScope::WithClassLoader((function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00359788;
    lVar4 = 5;
    pppuVar2 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar2 + lVar4 * 8))();
LAB_00359788:
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00359790 to 003597a3 has its CatchHandler @ 003597d4 */
    plVar3 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb0))(plVar3,lVar4);
  }
  *param_1 = 0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003597d8  FUN_003597d8 =====

void FUN_003597d8(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00359804 to 00359817 has its CatchHandler @ 00359844 */
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


// ===== 00359848  FUN_00359848 =====

void FUN_00359848(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00359874 to 00359887 has its CatchHandler @ 003598b4 */
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


// ===== 003598b8  FUN_003598b8 =====

void FUN_003598b8(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 003598e4 to 003598f7 has its CatchHandler @ 00359924 */
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


// ===== 00359928  FUN_00359928 =====

void FUN_00359928(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00359954 to 00359967 has its CatchHandler @ 00359994 */
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


// ===== 00359998  FUN_00359998 =====

void FUN_00359998(void *param_1)

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


// ===== 003599d0  FUN_003599d0 =====

void FUN_003599d0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00392df0;
  puVar2[1] = uVar4;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00359a2c  FUN_00359a2c =====

void FUN_00359a2c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00392df0;
  param_2[1] = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00359a74  FUN_00359a74 =====

void FUN_00359a74(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00359aac  FUN_00359aac =====

void FUN_00359aac(void *param_1)

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


// ===== 00359ae4  FUN_00359ae4 =====

void FUN_00359ae4(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar5 = *(long **)(param_1 + 8);
  lVar4 = *plVar5;
  if (lVar4 != 0) {
                    /* try { // try from 00359b10 to 00359b23 has its CatchHandler @ 00359b50 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb0))(plVar2,lVar4);
  }
  *plVar5 = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00359b54  FUN_00359b54 =====

void FUN_00359b54(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00396cf0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00359ba4  FUN_00359ba4 =====

undefined * FUN_00359ba4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00396cf8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00359be4  FUN_00359be4 =====

void FUN_00359be4(undefined8 *param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined **local_70;
  long *plStack_68;
  long *local_50;
  long local_38;
  
  local_50 = (long *)&local_70;
  pppuVar2 = &local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar5 = param_1 + 1;
  *param_1 = &PTR_FUN_00392d70;
  local_70 = &PTR_FUN_00392df0;
  plStack_68 = plVar5;
                    /* try { // try from 00359c28 to 00359c2f has its CatchHandler @ 00359ca4 */
  facebook::jni::ThreadScope::WithClassLoader((function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00359c5c;
    lVar4 = 5;
    pppuVar2 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar2 + lVar4 * 8))();
LAB_00359c5c:
  lVar4 = *plVar5;
  if (lVar4 != 0) {
                    /* try { // try from 00359c64 to 00359c77 has its CatchHandler @ 00359ca8 */
    plVar3 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb0))(plVar3,lVar4);
  }
  *plVar5 = 0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00359cac  FUN_00359cac =====

void FUN_00359cac(undefined8 *param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long *plVar3;
  long lVar4;
  undefined **local_70;
  long *plStack_68;
  long *local_50;
  long local_38;
  
  local_50 = (long *)&local_70;
  pppuVar2 = &local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00392d70;
  local_70 = &PTR_FUN_00392df0;
  plStack_68 = param_1 + 1;
                    /* try { // try from 00359cf4 to 00359cfb has its CatchHandler @ 00359d74 */
  facebook::jni::ThreadScope::WithClassLoader((function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00359d28;
    lVar4 = 5;
    pppuVar2 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar2 + lVar4 * 8))();
LAB_00359d28:
  lVar4 = param_1[1];
  if (lVar4 != 0) {
                    /* try { // try from 00359d30 to 00359d43 has its CatchHandler @ 00359d78 */
    plVar3 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb0))(plVar3,lVar4);
  }
  operator_delete(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00359d7c  FUN_00359d7c =====

undefined8 * FUN_00359d7c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00392d70;
                    /* try { // try from 00359dbc to 00359dd7 has its CatchHandler @ 00359e04 */
  plVar3 = (long *)facebook::jni::Environment::current();
  uVar5 = (**(code **)(*plVar3 + 0xa8))(plVar3,uVar5);
  facebook::jni::throwPendingJniExceptionAsCppException();
  puVar2[1] = uVar5;
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00359e2c  FUN_00359e2c =====

void FUN_00359e2c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00392d70;
  plVar2 = (long *)facebook::jni::Environment::current();
  uVar4 = (**(code **)(*plVar2 + 0xa8))(plVar2,uVar4);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    facebook::jni::throwPendingJniExceptionAsCppException();
    param_2[1] = uVar4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00359ea8  FUN_00359ea8 =====

void FUN_00359ea8(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined ***pppuVar3;
  long *plVar4;
  long lVar5;
  undefined **local_70;
  long *plStack_68;
  long *local_50;
  long local_38;
  
  local_50 = (long *)&local_70;
  pppuVar3 = &local_70;
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar1 = (long *)(param_1 + 8);
  local_70 = &PTR_FUN_00392df0;
  plStack_68 = plVar1;
                    /* try { // try from 00359ee0 to 00359ee7 has its CatchHandler @ 00359f5c */
  facebook::jni::ThreadScope::WithClassLoader((function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar5 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00359f14;
    lVar5 = 5;
    pppuVar3 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar3 + lVar5 * 8))();
LAB_00359f14:
  lVar5 = *plVar1;
  if (lVar5 != 0) {
                    /* try { // try from 00359f1c to 00359f2f has its CatchHandler @ 00359f60 */
    plVar4 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar4 + 0xb0))(plVar4,lVar5);
  }
  *plVar1 = 0;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00359f64  FUN_00359f64 =====

void FUN_00359f64(void *param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long *plVar3;
  long lVar4;
  undefined **local_70;
  long *plStack_68;
  long *local_50;
  long local_38;
  
  local_50 = (long *)&local_70;
  pppuVar2 = &local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_70 = &PTR_FUN_00392df0;
  plStack_68 = (long *)((long)param_1 + 8);
                    /* try { // try from 00359fa0 to 00359fa7 has its CatchHandler @ 0035a020 */
  facebook::jni::ThreadScope::WithClassLoader((function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00359fd4;
    lVar4 = 5;
    pppuVar2 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar2 + lVar4 * 8))();
LAB_00359fd4:
  lVar4 = *(long *)((long)param_1 + 8);
  if (lVar4 != 0) {
                    /* try { // try from 00359fdc to 00359fef has its CatchHandler @ 0035a024 */
    plVar3 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb0))(plVar3,lVar4);
  }
  operator_delete(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035a028  FUN_0035a028 =====

void FUN_0035a028(long param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  _jobject *p_Var4;
  undefined8 uVar5;
  _jmethodID *p_Var6;
  undefined1 auStack_40 [8];
  long local_38;
  
  puVar2 = PTR_method_00396cb8;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_method_00396cc0 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_method_00396cc0), iVar3 != 0)) {
                    /* try { // try from 0035a0ac to 0035a0c3 has its CatchHandler @ 0035a0d8 */
    FUN_0035a194(auStack_40);
    uVar5 = FUN_0034236c(auStack_40,"invoke");
    *(undefined8 *)puVar2 = uVar5;
    __cxa_guard_release(PTR_method_00396cc0);
  }
  p_Var6 = *(_jmethodID **)(param_1 + 8);
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var4,p_Var6,*(undefined8 *)puVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    facebook::jni::throwPendingJniExceptionAsCppException();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035a104  FUN_0035a104 =====

void FUN_0035a104(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00396ce0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0035a154  FUN_0035a154 =====

undefined * FUN_0035a154(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00396ce8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035a194  FUN_0035a194 =====

void FUN_0035a194(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00396cd0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00396cd0), iVar2 != 0))
  {
                    /* try { // try from 0035a204 to 0035a217 has its CatchHandler @ 0035a228 */
    facebook::jni::findClassStatic(PTR_kBaseName_00396cd8);
    __cxa_guard_release(PTR_cls_00396cd0);
  }
  *param_1 = *(undefined8 *)PTR_cls_00396cc8;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035a254  FUN_0035a254 =====

void FUN_0035a254(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00394618 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00394618), iVar2 != 0))
  {
                    /* try { // try from 0035a2c4 to 0035a2d7 has its CatchHandler @ 0035a2e8 */
    facebook::jni::findClassStatic(PTR_kBaseName_00394620);
    __cxa_guard_release(PTR_cls_00394618);
  }
  *param_1 = *(undefined8 *)PTR_cls_00394610;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035a314  FUN_0035a314 =====

void FUN_0035a314(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 0035a340 to 0035a353 has its CatchHandler @ 0035a380 */
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


// ===== 0035a384  FUN_0035a384 =====

void FUN_0035a384(undefined8 *param_1)

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
    goto LAB_0035a420;
  }
  plVar2 = *(long **)((long)pvVar6 + 0x30);
  plVar3 = (long *)((long)pvVar6 + 0x10);
  if (plVar2 == plVar3) {
    lVar5 = 4;
LAB_0035a3f0:
    (**(code **)(*plVar3 + lVar5 * 8))();
  }
  else if (plVar2 != (long *)0x0) {
    lVar5 = 5;
    plVar3 = plVar2;
    goto LAB_0035a3f0;
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(pvVar6);
    return;
  }
LAB_0035a420:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035a424  FUN_0035a424 =====

void FUN_0035a424(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00394618 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00394618), iVar2 != 0))
  {
                    /* try { // try from 0035a494 to 0035a4a7 has its CatchHandler @ 0035a4b8 */
    facebook::jni::findClassStatic(PTR_kBaseName_00394620);
    __cxa_guard_release(PTR_cls_00394618);
  }
  *param_1 = *(undefined8 *)PTR_cls_00394610;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035a4e4  FUN_0035a4e4 =====

long FUN_0035a4e4(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,DAT_0039e440,"<init>",PTR_kConstructorDescriptor_00396cb0);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035a560  FUN_0035a560 =====

long FUN_0035a560(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,DAT_0039e420,"<init>",PTR_kConstructorDescriptor_00396c98);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035a5dc  FUN_0035a5dc =====

void FUN_0035a5dc(long param_1)

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
      goto LAB_0035a65c;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0035a63c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar4 * 8))();
    return;
  }
LAB_0035a65c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035a660  FUN_0035a660 =====

void FUN_0035a660(void *param_1)

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
    if (plVar2 == (long *)0x0) goto LAB_0035a6b0;
    lVar5 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_0035a6b0:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035a6d8  FUN_0035a6d8 =====

long FUN_0035a6d8(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,param_2,PTR_kDescriptor_003945f8);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035a75c  FUN_0035a75c =====

void FUN_0035a75c(long *param_1)

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


// ===== 0035a7e8  FUN_0035a7e8 =====

void FUN_0035a7e8(long *param_1)

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


// ===== 0035a874  FUN_0035a874 =====

void FUN_0035a874(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038d548;
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


// ===== 0035a90c  FUN_0035a90c =====

void FUN_0035a90c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038d548;
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


// ===== 0035a998  FUN_0035a998 =====

void FUN_0035a998(long param_1)

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
  *puVar4 = &PTR_FUN_0038d548;
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


// ===== 0035aa10  FUN_0035aa10 =====

void FUN_0035aa10(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0038d548;
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


// ===== 0035aa74  FUN_0035aa74 =====

void FUN_0035aa74(long param_1)

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


// ===== 0035ab00  FUN_0035ab00 =====

void FUN_0035ab00(void *param_1)

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


// ===== 0035ab80  FUN_0035ab80 =====

void FUN_0035ab80(long param_1,undefined8 *param_2)

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
                    /* try { // try from 0035abb8 to 0035abc3 has its CatchHandler @ 0035ac2c */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_0031ef0c(aeStack_98,aJStack_90);
                    /* try { // try from 0035abd0 to 0035abdb has its CatchHandler @ 0035ac14 */
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


// ===== 0035ac54  FUN_0035ac54 =====

void FUN_0035ac54(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive34JHybridViewModelNumberPropertySpec13getValueAsyncEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0035aca4  FUN_0035aca4 =====

pointer_____offset_0x10___ * FUN_0035aca4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0038d5a8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035ace4  FUN_0035ace4 =====

void FUN_0035ace4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038d4c8;
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


// ===== 0035ad7c  FUN_0035ad7c =====

void FUN_0035ad7c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038d4c8;
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


// ===== 0035ae08  FUN_0035ae08 =====

void FUN_0035ae08(long param_1)

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
  *puVar4 = &PTR_FUN_0038d4c8;
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


// ===== 0035ae80  FUN_0035ae80 =====

void FUN_0035ae80(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0038d4c8;
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


// ===== 0035aee4  FUN_0035aee4 =====

void FUN_0035aee4(long param_1)

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


// ===== 0035af70  FUN_0035af70 =====

void FUN_0035af70(void *param_1)

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


// ===== 0035aff0  FUN_0035aff0 =====

void FUN_0035aff0(long param_1,undefined8 *param_2)

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


// ===== 0035b054  FUN_0035b054 =====

void FUN_0035b054(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive34JHybridViewModelNumberPropertySpec13getValueAsyncEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0035b0a4  FUN_0035b0a4 =====

pointer_____offset_0x10___ * FUN_0035b0a4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0038d528;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035b0e4  FUN_0035b0e4 =====

void FUN_0035b0e4(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_0038d648;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035b128  FUN_0035b128 =====

void FUN_0035b128(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_0038d648;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035b180  FUN_0035b180 =====

void FUN_0035b180(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0035b1b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(param_1 + 0x18))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035b1c0  FUN_0035b1c0 =====

void FUN_0035b1c0(void *param_1)

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


// ===== 0035b1f8  margelo::nitro::rive::JHybridViewModelNumberPropertySpec::CxxPart::registerNatives =====

/* margelo::nitro::rive::JHybridViewModelNumberPropertySpec::CxxPart::registerNatives() */

void margelo::nitro::rive::JHybridViewModelNumberPropertySpec::CxxPart::registerNatives(void)

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
  puStack_58 = PTR_kDescriptor_0038cb50;
  local_60 = PTR_s_initHybrid_0038cb48;
  local_50 = PTR_call_0038cb58;
  pcVar7 = (char *)operator_new(0x50);
  uVar5 = s_Lcom_margelo_nitro_rive_HybridVi_001d6841._25_8_;
  uVar4 = s_Lcom_margelo_nitro_rive_HybridVi_001d6841._17_8_;
  uVar3 = s_Lcom_margelo_nitro_rive_HybridVi_001d6841._9_8_;
  uVar2 = s_Lcom_margelo_nitro_rive_HybridVi_001d6841._1_8_;
  pcVar7[0x40] = '\0';
  *(undefined8 *)(pcVar7 + 8) = uVar3;
  *(undefined8 *)pcVar7 = uVar2;
  *(undefined8 *)(pcVar7 + 0x18) = uVar5;
  *(undefined8 *)(pcVar7 + 0x10) = uVar4;
  uVar4 = s_Lcom_margelo_nitro_rive_HybridVi_001d6841._57_8_;
  uVar3 = s_Lcom_margelo_nitro_rive_HybridVi_001d6841._49_8_;
  uVar2 = s_Lcom_margelo_nitro_rive_HybridVi_001d6841._33_8_;
  *(undefined8 *)(pcVar7 + 0x28) = s_Lcom_margelo_nitro_rive_HybridVi_001d6841._41_8_;
  *(undefined8 *)(pcVar7 + 0x20) = uVar2;
  *(undefined8 *)(pcVar7 + 0x38) = uVar4;
  *(undefined8 *)(pcVar7 + 0x30) = uVar3;
                    /* try { // try from 0035b258 to 0035b25f has its CatchHandler @ 0035b2d0 */
  facebook::jni::findClassLocal(pcVar7);
  operator_delete(pcVar7);
                    /* try { // try from 0035b268 to 0035b28f has its CatchHandler @ 0035b2e4 */
  plVar8 = (long *)facebook::jni::Environment::current();
  iVar6 = (**(code **)(*plVar8 + 0x6b8))(plVar8,local_40,&local_60,1);
  facebook::jni::throwCppExceptionIf(iVar6 != 0);
  if (local_40 != 0) {
                    /* try { // try from 0035b298 to 0035b2ab has its CatchHandler @ 0035b2e0 */
    plVar8 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar8 + 0xb8))(plVar8,local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035b30c  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelNumberPropertySpec::CxxPart,margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridViewModelNumberPropertySpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelNumberPropertySpec::CxxPart,margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   (*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelNumberPropertySpec::CxxPart,
   margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart, void>::_javaobject*>),
   &margelo::nitro::rive::JHybridViewModelNumberPropertySpec::CxxPart::initHybrid,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelNumberPropertySpec::CxxPart,
   margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart, void>::_javaobject*,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>>::call(_JNIEnv*, _jobject*) */

undefined8
facebook::jni::detail::
FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelNumberPropertySpec::CxxPart,margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridViewModelNumberPropertySpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelNumberPropertySpec::CxxPart,margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>
::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  JniEnvCacher aJStack_48 [24];
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_48,param_1);
                    /* try { // try from 0035b338 to 0035b343 has its CatchHandler @ 0035b374 */
  FUN_003572f4(&local_30,param_2);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035b3c0  margelo::nitro::rive::JHybridViewModelNumberPropertySpec::getValue =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelNumberPropertySpec::getValue() */

void __thiscall
margelo::nitro::rive::JHybridViewModelNumberPropertySpec::getValue
          (JHybridViewModelNumberPropertySpec *this)

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


// ===== 0035b404  margelo::nitro::rive::JHybridViewModelNumberPropertySpec::setValue =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelNumberPropertySpec::setValue(double) */

void __thiscall
margelo::nitro::rive::JHybridViewModelNumberPropertySpec::setValue
          (JHybridViewModelNumberPropertySpec *this,double param_1)

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


// ===== 0035b448  margelo::nitro::rive::JHybridViewModelNumberPropertySpec::getValueAsync =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelNumberPropertySpec::getValueAsync() */

void __thiscall
margelo::nitro::rive::JHybridViewModelNumberPropertySpec::getValueAsync
          (JHybridViewModelNumberPropertySpec *this)

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


// ===== 0035b48c  margelo::nitro::rive::JHybridViewModelNumberPropertySpec::set =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelNumberPropertySpec::set(double) */

void __thiscall
margelo::nitro::rive::JHybridViewModelNumberPropertySpec::set
          (JHybridViewModelNumberPropertySpec *this,double param_1)

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


// ===== 0035b4d0  margelo::nitro::rive::JHybridViewModelNumberPropertySpec::addListener =====

/* virtual thunk to
   margelo::nitro::rive::JHybridViewModelNumberPropertySpec::addListener(std::__ndk1::function<void
   (double)> const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelNumberPropertySpec::addListener
          (JHybridViewModelNumberPropertySpec *this,function *param_1)

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


// ===== 0035b514  margelo::nitro::rive::JHybridViewModelNumberPropertySpec::removeListeners =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelNumberPropertySpec::removeListeners() */

void __thiscall
margelo::nitro::rive::JHybridViewModelNumberPropertySpec::removeListeners
          (JHybridViewModelNumberPropertySpec *this)

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


// ===== 0035b558  margelo::nitro::rive::JHybridViewModelStringPropertySpec::JavaPart::getJHybridViewModelStringPropertySpec =====

/* margelo::nitro::rive::JHybridViewModelStringPropertySpec::JavaPart::getJHybridViewModelStringPropertySpec()
    */

void __thiscall
margelo::nitro::rive::JHybridViewModelStringPropertySpec::JavaPart::
getJHybridViewModelStringPropertySpec(JavaPart *this)

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
     (lVar2 = __dynamic_cast(local_38,PTR_typeinfo_00395e60,PTR_typeinfo_00396d60,0xffffffffffffffff
                            ), lVar2 == 0)) {
    *in_x8 = 0;
    in_x8[1] = 0;
    this_00 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0035b620 to 0035b62b has its CatchHandler @ 0035b660 */
    std::runtime_error::runtime_error
              (this_00,"Failed to downcast JHybridObject to JHybridViewModelStringPropertySpec!");
    if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* try { // try from 0035b640 to 0035b657 has its CatchHandler @ 0035b658 */
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


// ===== 0035b69c  FUN_0035b69c =====

void FUN_0035b69c(long *param_1)

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


// ===== 0035b728  margelo::nitro::rive::JHybridViewModelStringPropertySpec::CxxPart::initHybrid =====

/* margelo::nitro::rive::JHybridViewModelStringPropertySpec::CxxPart::initHybrid(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelStringPropertySpec::CxxPart,
   margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart, void>::_javaobject*>) */

void __thiscall
margelo::nitro::rive::JHybridViewModelStringPropertySpec::CxxPart::initHybrid
          (undefined8 *param_1,CxxPart *this)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_0035b780(&local_30,*(undefined8 *)this);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035b780  FUN_0035b780 =====

void FUN_0035b780(undefined8 *param_1,undefined8 param_2)

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
                    /* try { // try from 0035b7b8 to 0035b7bf has its CatchHandler @ 0035b89c */
  local_48 = param_2;
  margelo::nitro::JHybridObject::CxxPart::CxxPart(pCVar2,&local_48);
  *(undefined **)pCVar2 = PTR_vtable_00396d68 + 0x10;
                    /* try { // try from 0035b7d0 to 0035b7d7 has its CatchHandler @ 0035b894 */
  facebook::jni::detail::HybridData::create();
  uVar5 = *param_1;
                    /* try { // try from 0035b7dc to 0035b7f7 has its CatchHandler @ 0035b8b0 */
  plVar3 = (long *)facebook::jni::Environment::current();
  lVar4 = (**(code **)(*plVar3 + 200))(plVar3,uVar5);
  facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 0035b800 to 0035b80b has its CatchHandler @ 0035b864 */
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
                    /* try { // try from 0035b82c to 0035b83f has its CatchHandler @ 0035b8ac */
    plVar3 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb8))(plVar3,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035b8e8  FUN_0035b8e8 =====

void FUN_0035b8e8(long *param_1)

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
                    /* try { // try from 0035b924 to 0035b937 has its CatchHandler @ 0035b974 */
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


// ===== 0035b978  margelo::nitro::rive::JHybridViewModelStringPropertySpec::CxxPart::createHybridObject =====

/* margelo::nitro::rive::JHybridViewModelStringPropertySpec::CxxPart::createHybridObject(facebook::jni::basic_strong_ref<margelo::nitro::JHybridObject::JavaPart,
   facebook::jni::LocalReferenceAllocator> const&) */

void margelo::nitro::rive::JHybridViewModelStringPropertySpec::CxxPart::createHybridObject
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
  
  puVar1 = PTR_target_class_00396db8;
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*in_x1 == 0) {
LAB_0035bc84:
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0035bc90 to 0035bc9b has its CatchHandler @ 0035be28 */
    param_1 = (basic_strong_ref *)
              std::runtime_error::runtime_error
                        (this,
                         "Failed to cast JHybridObject::JavaPart to JHybridViewModelStringPropertySpec::JavaPart!"
                        );
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0035bcac to 0035bcc3 has its CatchHandler @ 0035be24 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_0035bef4;
  }
  if (((*PTR_target_class_00396dc0 & 1) == 0) &&
     (param_1 = (basic_strong_ref *)__cxa_guard_acquire(PTR_target_class_00396dc0),
     (int)param_1 != 0)) {
                    /* try { // try from 0035bcd4 to 0035bce3 has its CatchHandler @ 0035bde8 */
    facebook::jni::findClassStatic(PTR_kBaseName_00396dc8);
    *(undefined8 *)puVar1 = local_60;
    param_1 = (basic_strong_ref *)__cxa_guard_release(PTR_target_class_00396dc0);
  }
  if (*(long *)puVar1 == 0) {
    if (*(long *)(lVar2 + 0x28) != local_58) goto LAB_0035bef4;
    FUN_00261580("java/lang/ClassCastException","Could not find class %s.",PTR_kBaseName_00396dc8);
LAB_0035bd28:
                    /* try { // try from 0035bd28 to 0035bd37 has its CatchHandler @ 0035be14 */
    param_1 = (basic_strong_ref *)FUN_002615d4(local_80,&local_68);
    uVar8 = (ulong)local_80 | 1;
    if ((local_80[0] & 1) != 0) {
      uVar8 = local_70;
    }
    if (*(long *)(lVar2 + 0x28) != local_58) goto LAB_0035bef4;
                    /* try { // try from 0035bd5c to 0035bd77 has its CatchHandler @ 0035bdfc */
    FUN_0026171c("java/lang/ClassCastException","Tried to cast from %s to %s.",uVar8,
                 PTR_kBaseName_00396dc8);
  }
  else {
                    /* try { // try from 0035b9d0 to 0035b9e3 has its CatchHandler @ 0035be7c */
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5,*in_x1);
    local_68 = lVar6;
                    /* try { // try from 0035b9ec to 0035ba03 has its CatchHandler @ 0035be78 */
    plVar5 = (long *)facebook::jni::Environment::current();
    cVar4 = (**(code **)(*plVar5 + 0x58))(plVar5,lVar6,*(undefined8 *)puVar1);
    if (cVar4 == '\0') goto LAB_0035bd28;
    lVar10 = *in_x1;
    if (lVar10 == 0) {
      local_88 = 0;
    }
    else {
                    /* try { // try from 0035ba14 to 0035ba2f has its CatchHandler @ 0035be80 */
      plVar5 = (long *)facebook::jni::Environment::current();
      local_88 = (**(code **)(*plVar5 + 200))(plVar5,lVar10);
      facebook::jni::throwPendingJniExceptionAsCppException();
      if (local_88 == 0) {
        pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
        param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar9);
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0035bdd0 to 0035bde7 has its CatchHandler @ 0035be80 */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(pbVar9,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
        }
        goto LAB_0035bef4;
      }
    }
    if (lVar6 != 0) {
                    /* try { // try from 0035ba4c to 0035ba5f has its CatchHandler @ 0035be74 */
      plVar5 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar5 + 0xb8))(plVar5,lVar6);
    }
    if (local_88 == 0) goto LAB_0035bc84;
                    /* try { // try from 0035ba64 to 0035ba6b has its CatchHandler @ 0035be60 */
    plVar5 = (long *)operator_new(0xa8);
    puVar1 = PTR_vtable_00395e70;
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_0038e1a0;
    plVar11 = plVar5 + 3;
    *plVar11 = (long)(puVar1 + 0x10);
    puVar3 = PTR_PTR_00396d50;
                    /* try { // try from 0035ba9c to 0035bab7 has its CatchHandler @ 0035be58 */
    margelo::nitro::HybridObject::HybridObject((HybridObject *)(plVar5 + 5),PTR_PTR_00396d50 + 0x58)
    ;
    puVar1 = PTR_construction_vtable_00396d58 + 0x68;
    plVar5[5] = (long)(PTR_construction_vtable_00396d58 + 0x100);
    plVar5[3] = (long)puVar1;
                    /* try { // try from 0035bad0 to 0035baeb has its CatchHandler @ 0035be8c */
    plVar7 = (long *)facebook::jni::Environment::current();
    uVar8 = (**(code **)(*plVar7 + 200))(plVar7,local_88);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 0035baf0 to 0035baff has its CatchHandler @ 0035be48 */
    local_80[0] = uVar8;
    margelo::nitro::JHybridObject::JHybridObject((JHybridObject *)(plVar5 + 0x13),puVar3 + 0xa8);
    uVar8 = local_80[0];
    if (local_80[0] != 0) {
                    /* try { // try from 0035bb08 to 0035bb1b has its CatchHandler @ 0035be70 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,uVar8);
    }
                    /* try { // try from 0035bb1c to 0035bb37 has its CatchHandler @ 0035be84 */
    plVar7 = (long *)facebook::jni::Environment::current();
    uVar8 = (**(code **)(*plVar7 + 200))(plVar7,local_88);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 0035bb3c to 0035bb4b has its CatchHandler @ 0035be38 */
    local_80[0] = uVar8;
    FUN_00357adc(plVar5 + 0x11,puVar3 + 0x80,uVar8);
    if (uVar8 != 0) {
                    /* try { // try from 0035bb50 to 0035bb63 has its CatchHandler @ 0035be6c */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,uVar8);
    }
    puVar3 = PTR_vtable_00396d48;
    puVar1 = PTR_vtable_00396d48 + 0x80;
    plVar5[5] = (long)(PTR_vtable_00396d48 + 0x118);
    *plVar11 = (long)puVar1;
    plVar5[0x11] = (long)(puVar3 + 0x198);
    plVar5[0x13] = (long)(puVar3 + 0x1f8);
                    /* try { // try from 0035bb8c to 0035bba7 has its CatchHandler @ 0035be94 */
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
                    /* try { // try from 0035bc40 to 0035bc53 has its CatchHandler @ 0035be68 */
        plVar5 = (long *)facebook::jni::Environment::current();
        param_1 = (basic_strong_ref *)(**(code **)(*plVar5 + 0xb8))(plVar5,local_88);
      }
      if (*(long *)(lVar2 + 0x28) == local_58) {
        return;
      }
      goto LAB_0035bef4;
    }
  }
  pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
  param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar9);
  if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0035bd98 to 0035bdaf has its CatchHandler @ 0035be94 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pbVar9,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
  }
LAB_0035bef4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0035bef8  FUN_0035bef8 =====

void FUN_0035bef8(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 0035bf24 to 0035bf37 has its CatchHandler @ 0035bf64 */
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


// ===== 0035bf68  FUN_0035bf68 =====

void FUN_0035bf68(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_0035ce84();
  FUN_00356a9c(param_1 + 0x70,PTR_PTR_00396d50 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(param_1 + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(param_1 + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035bfe8  FUN_0035bfe8 =====

void FUN_0035bfe8(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_0035ce84();
  FUN_00356a9c(param_1 + 0x70,PTR_PTR_00396d50 + 0x80);
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


// ===== 0035c070  margelo::nitro::rive::JHybridViewModelStringPropertySpec::getValue =====

/* margelo::nitro::rive::JHybridViewModelStringPropertySpec::getValue() */

void __thiscall
margelo::nitro::rive::JHybridViewModelStringPropertySpec::getValue
          (JHybridViewModelStringPropertySpec *this)

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
  if (((DAT_0039e488 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039e488), iVar2 != 0)) {
                    /* try { // try from 0035c128 to 0035c13f has its CatchHandler @ 0035c154 */
    FUN_0035d1b4(&local_40);
    DAT_0039e480 = facebook::jni::JClass::
                   getMethod<facebook::jni::basic_strong_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>()>
                             ((JClass *)&local_40,"getValue");
    __cxa_guard_release(&DAT_0039e488);
  }
  p_Var6 = *(_jmethodID **)(this + 8);
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  lVar4 = _JNIEnv::CallObjectMethod(p_Var3,p_Var6,DAT_0039e480);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_40 = lVar4;
                    /* try { // try from 0035c0cc to 0035c0d7 has its CatchHandler @ 0035c168 */
  facebook::jni::JString::toStdString();
  lVar4 = local_40;
  if (local_40 != 0) {
                    /* try { // try from 0035c0e0 to 0035c0f3 has its CatchHandler @ 0035c190 */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035c194  margelo::nitro::rive::JHybridViewModelStringPropertySpec::setValue =====

/* margelo::nitro::rive::JHybridViewModelStringPropertySpec::setValue(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelStringPropertySpec::setValue
          (JHybridViewModelStringPropertySpec *this,basic_string *param_1)

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
  if (((DAT_0039e498 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039e498), iVar3 != 0)) {
                    /* try { // try from 0035c258 to 0035c26f has its CatchHandler @ 0035c288 */
    FUN_0035d1b4(&local_40);
    DAT_0039e490 = FUN_00348580(&local_40,"setValue");
    __cxa_guard_release(&DAT_0039e498);
  }
  pbVar6 = *(basic_string **)(param_1 + 0x10);
  p_Var7 = *(_jmethodID **)(this + 8);
  if (((byte)*param_1 & 1) == 0) {
    pbVar6 = param_1 + 1;
  }
  facebook::jni::make_jstring((char *)pbVar6);
  lVar2 = local_40;
                    /* try { // try from 0035c1ec to 0035c207 has its CatchHandler @ 0035c2a0 */
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var4,p_Var7,DAT_0039e490,lVar2);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (local_40 != 0) {
                    /* try { // try from 0035c210 to 0035c223 has its CatchHandler @ 0035c29c */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035c2c8  margelo::nitro::rive::JHybridViewModelStringPropertySpec::getValueAsync =====

/* margelo::nitro::rive::JHybridViewModelStringPropertySpec::getValueAsync() */

void margelo::nitro::rive::JHybridViewModelStringPropertySpec::getValueAsync(void)

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
  if (((DAT_0039e4a8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039e4a8), iVar4 != 0)) {
                    /* try { // try from 0035c4dc to 0035c4f3 has its CatchHandler @ 0035c5b0 */
    FUN_0035d1b4(&local_90);
    DAT_0039e4a0 = FUN_0031e0a0(&local_90,"getValueAsync");
    __cxa_guard_release(&DAT_0039e4a8);
  }
  p_Var13 = *(_jmethodID **)(in_x0 + 8);
  p_Var5 = (_jobject *)facebook::jni::Environment::current();
  lVar6 = _JNIEnv::CallObjectMethod(p_Var5,p_Var13,DAT_0039e4a0);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_98 = lVar6;
                    /* try { // try from 0035c32c to 0035c333 has its CatchHandler @ 0035c654 */
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
                    /* try { // try from 0035c358 to 0035c35f has its CatchHandler @ 0035c644 */
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
                    /* try { // try from 0035c528 to 0035c52b has its CatchHandler @ 0035c594 */
    uVar9 = FUN_0031e19c(local_90);
    *(undefined8 *)PTR_hybridDataField_00396030 = uVar9;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0035c388 to 0035c39b has its CatchHandler @ 0035c660 */
  puVar2 = PTR_hybridDataField_00396030;
  uVar9 = facebook::jni::getHybridDataFromField
                    ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uStack_88 = *in_x8;
  local_80 = in_x8[1];
  if (local_80 != 0) {
    FUN_00259a00(1,local_80 + 8);
  }
  local_90 = &PTR_FUN_0038e020;
                    /* try { // try from 0035c3d0 to 0035c3d7 has its CatchHandler @ 0035c604 */
  local_70 = &local_90;
  FUN_0031e2bc(uVar9,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar11 = &local_90;
LAB_0035c3f8:
    (*(code *)(*pppuVar11)[lVar6])();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar6 = 5;
    pppuVar11 = local_70;
    goto LAB_0035c3f8;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0035c570 to 0035c573 has its CatchHandler @ 0035c590 */
    uVar9 = FUN_0031e19c(local_90);
    *(undefined8 *)puVar2 = uVar9;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0035c40c to 0035c41b has its CatchHandler @ 0035c660 */
  uVar10 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uVar9 = *in_x8;
  lVar6 = in_x8[1];
  if (lVar6 != 0) {
    FUN_00259a00(1,lVar6 + 8);
  }
  local_90 = &PTR_FUN_0038e0a0;
                    /* try { // try from 0035c450 to 0035c457 has its CatchHandler @ 0035c5c4 */
  uStack_88 = uVar9;
  local_80 = lVar6;
  local_70 = &local_90;
  FUN_0031e5cc(uVar10,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar11 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_0035c484;
    lVar6 = 5;
    pppuVar11 = local_70;
  }
  (*(code *)(*pppuVar11)[lVar6])();
LAB_0035c484:
  lVar6 = local_98;
  if (local_98 != 0) {
                    /* try { // try from 0035c48c to 0035c49f has its CatchHandler @ 0035c65c */
    plVar12 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar12 + 0xb8))(plVar12,lVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035c690  margelo::nitro::rive::JHybridViewModelStringPropertySpec::set =====

/* margelo::nitro::rive::JHybridViewModelStringPropertySpec::set(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelStringPropertySpec::set
          (JHybridViewModelStringPropertySpec *this,basic_string *param_1)

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
  if (((DAT_0039e4b8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039e4b8), iVar3 != 0)) {
                    /* try { // try from 0035c754 to 0035c76b has its CatchHandler @ 0035c784 */
    FUN_0035d1b4(&local_40);
    DAT_0039e4b0 = FUN_00348580(&local_40,&DAT_001d4cc6);
    __cxa_guard_release(&DAT_0039e4b8);
  }
  pbVar6 = *(basic_string **)(param_1 + 0x10);
  p_Var7 = *(_jmethodID **)(this + 8);
  if (((byte)*param_1 & 1) == 0) {
    pbVar6 = param_1 + 1;
  }
  facebook::jni::make_jstring((char *)pbVar6);
  lVar2 = local_40;
                    /* try { // try from 0035c6e8 to 0035c703 has its CatchHandler @ 0035c79c */
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var4,p_Var7,DAT_0039e4b0,lVar2);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (local_40 != 0) {
                    /* try { // try from 0035c70c to 0035c71f has its CatchHandler @ 0035c798 */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035c7c4  margelo::nitro::rive::JHybridViewModelStringPropertySpec::addListener =====

/* margelo::nitro::rive::JHybridViewModelStringPropertySpec::addListener(std::__ndk1::function<void
   (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&)> const&) */

void margelo::nitro::rive::JHybridViewModelStringPropertySpec::addListener(function *param_1)

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
  if (((DAT_0039e4c8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039e4c8), iVar3 != 0)) {
                    /* try { // try from 0035c9c8 to 0035c9df has its CatchHandler @ 0035cadc */
    FUN_0035d1b4(&local_40);
    DAT_0039e4c0 = FUN_0035d274(&local_40,"addListener_cxx");
    __cxa_guard_release(&DAT_0039e4c8);
  }
  p_Var8 = *(_jmethodID **)(param_1 + 8);
  FUN_0035d2f8(&local_40);
  lVar7 = local_40;
  local_48 = local_40;
                    /* try { // try from 0035c818 to 0035c837 has its CatchHandler @ 0035cb44 */
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::CallObjectMethod(p_Var4,p_Var8,DAT_0039e4c0,lVar7);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (lVar7 != 0) {
                    /* try { // try from 0035c840 to 0035c853 has its CatchHandler @ 0035cb20 */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,lVar7);
  }
  if (((*PTR_cls_003945e8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_cls_003945e8), iVar3 != 0))
  {
                    /* try { // try from 0035ca08 to 0035ca1b has its CatchHandler @ 0035cac8 */
    facebook::jni::findClassStatic(PTR_kBaseName_003945f0);
    __cxa_guard_release(PTR_cls_003945e8);
  }
  uVar9 = *(undefined8 *)PTR_cls_003945e0;
                    /* try { // try from 0035c870 to 0035c88b has its CatchHandler @ 0035cb3c */
  plVar6 = (long *)facebook::jni::Environment::current();
  cVar2 = (**(code **)(*plVar6 + 0x100))(plVar6,lVar5,uVar9);
  if (cVar2 == '\0') {
                    /* try { // try from 0035c978 to 0035c983 has its CatchHandler @ 0035cb10 */
    FUN_003595b8(&local_40,lVar5);
    local_48 = local_40;
    local_40 = 0;
    local_50 = 0;
                    /* try { // try from 0035c990 to 0035c997 has its CatchHandler @ 0035caf0 */
    FUN_00359668();
    FUN_0035971c(&local_48);
    FUN_003597d8(&local_50);
    FUN_00359848(&local_40);
  }
  else {
    lVar7 = lVar5;
    if (lVar5 != 0) {
                    /* try { // try from 0035c898 to 0035c8b3 has its CatchHandler @ 0035cb40 */
      plVar6 = (long *)facebook::jni::Environment::current();
      lVar7 = (**(code **)(*plVar6 + 200))(plVar6,lVar5);
      facebook::jni::throwPendingJniExceptionAsCppException();
      if (lVar7 == 0) {
        this = (bad_alloc *)__cxa_allocate_exception(8);
        if (*(long *)(lVar1 + 0x28) == local_38) {
          std::bad_alloc::bad_alloc(this);
                    /* try { // try from 0035ca94 to 0035caab has its CatchHandler @ 0035cb40 */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(this,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
        }
        goto LAB_0035cb68;
      }
    }
    local_48 = lVar7;
    if (((*PTR_hybridDataField_003945d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_hybridDataField_003945d8), iVar3 != 0)) {
      facebook::jni::JObject::getClass();
                    /* try { // try from 0035ca4c to 0035ca4f has its CatchHandler @ 0035caac */
      uVar9 = FUN_0025dae8(local_40);
      *(undefined8 *)PTR_hybridDataField_003945d0 = uVar9;
      facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
      ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
                       *)&local_40);
      __cxa_guard_release(PTR_hybridDataField_003945d8);
    }
                    /* try { // try from 0035c8cc to 0035c91b has its CatchHandler @ 0035cb24 */
    lVar7 = facebook::jni::getHybridDataFromField
                      ((JObject *)&local_48,(JField *)PTR_hybridDataField_003945d0);
    plVar6 = *(long **)(lVar7 + 0x30);
    if (plVar6 == (long *)0x0) {
LAB_0035c900:
      *(long **)(in_x8 + 0x20) = plVar6;
    }
    else {
      if (plVar6 != (long *)(lVar7 + 0x10)) {
        plVar6 = (long *)(**(code **)(*plVar6 + 0x10))();
        goto LAB_0035c900;
      }
      *(long *)(in_x8 + 0x20) = in_x8;
      (**(code **)(*plVar6 + 0x18))();
    }
    lVar7 = local_48;
    if (local_48 != 0) {
                    /* try { // try from 0035c924 to 0035c937 has its CatchHandler @ 0035cb18 */
      plVar6 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,lVar7);
    }
  }
  if (lVar5 != 0) {
                    /* try { // try from 0035c940 to 0035c953 has its CatchHandler @ 0035cb1c */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,lVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_0035cb68:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035cb6c  margelo::nitro::rive::JHybridViewModelStringPropertySpec::removeListeners =====

/* margelo::nitro::rive::JHybridViewModelStringPropertySpec::removeListeners() */

void __thiscall
margelo::nitro::rive::JHybridViewModelStringPropertySpec::removeListeners
          (JHybridViewModelStringPropertySpec *this)

{
  long lVar1;
  int iVar2;
  _jobject *p_Var3;
  _jmethodID *p_Var4;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039e4d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039e4d8), iVar2 != 0)) {
                    /* try { // try from 0035cbec to 0035cc03 has its CatchHandler @ 0035cc18 */
    FUN_0035d1b4(auStack_40);
    DAT_0039e4d0 = FUN_0034236c(auStack_40,"removeListeners");
    __cxa_guard_release(&DAT_0039e4d8);
  }
  p_Var4 = *(_jmethodID **)(this + 8);
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var3,p_Var4,DAT_0039e4d0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    facebook::jni::throwPendingJniExceptionAsCppException();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035cc44  FUN_0035cc44 =====

void FUN_0035cc44(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_0035ce84(this);
  FUN_00356a9c(this + 0x70,PTR_PTR_00396d50 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035ccd0  FUN_0035ccd0 =====

void FUN_0035ccd0(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_0035ce84(this);
  FUN_00356a9c(this + 0x70,PTR_PTR_00396d50 + 0x80);
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


// ===== 0035cd64  FUN_0035cd64 =====

void FUN_0035cd64(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_0035ce84(this);
  FUN_00356a9c(this + 0x70,PTR_PTR_00396d50 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035cdf0  FUN_0035cdf0 =====

void FUN_0035cdf0(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_0035ce84(this);
  FUN_00356a9c(this + 0x70,PTR_PTR_00396d50 + 0x80);
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


// ===== 0035ce84  FUN_0035ce84 =====

void FUN_0035ce84(long *param_1)

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
  
  puVar2 = PTR_vtable_00396d48;
  local_50 = (long *)&local_70;
  pppuVar3 = &local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1[2] = (long)(PTR_vtable_00396d48 + 0x118);
  *param_1 = (long)(puVar2 + 0x80);
  param_1[0x10] = (long)(puVar2 + 0x1f8);
  param_1[0xe] = (long)(puVar2 + 0x198);
  local_70 = &PTR_FUN_0038e120;
  plStack_68 = param_1;
                    /* try { // try from 0035cee4 to 0035ceeb has its CatchHandler @ 0035cf60 */
  facebook::jni::ThreadScope::WithClassLoader((function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar5 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_0035cf18;
    lVar5 = 5;
    pppuVar3 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar3 + lVar5 * 8))();
LAB_0035cf18:
  lVar5 = param_1[1];
  if (lVar5 != 0) {
                    /* try { // try from 0035cf20 to 0035cf33 has its CatchHandler @ 0035cf64 */
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


// ===== 0035cf68  FUN_0035cf68 =====

void FUN_0035cf68(void *param_1)

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


// ===== 0035cfa0  FUN_0035cfa0 =====

void FUN_0035cfa0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_0038e120;
  puVar2[1] = uVar4;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035cffc  FUN_0035cffc =====

void FUN_0035cffc(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_0038e120;
  param_2[1] = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035d044  FUN_0035d044 =====

void FUN_0035d044(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035d07c  FUN_0035d07c =====

void FUN_0035d07c(void *param_1)

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


// ===== 0035d0b4  FUN_0035d0b4 =====

void FUN_0035d0b4(long param_1)

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
                    /* try { // try from 0035d0e0 to 0035d0f3 has its CatchHandler @ 0035d120 */
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


// ===== 0035d124  FUN_0035d124 =====

void FUN_0035d124(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00396da8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0035d174  FUN_0035d174 =====

undefined * FUN_0035d174(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00396db0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035d1b4  FUN_0035d1b4 =====

void FUN_0035d1b4(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00396dd8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00396dd8), iVar2 != 0))
  {
                    /* try { // try from 0035d224 to 0035d237 has its CatchHandler @ 0035d248 */
    facebook::jni::findClassStatic(PTR_kBaseName_00396de0);
    __cxa_guard_release(PTR_cls_00396dd8);
  }
  *param_1 = *(undefined8 *)PTR_cls_00396dd0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035d274  FUN_0035d274 =====

long FUN_0035d274(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,param_2,PTR_kDescriptor_00396de8);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035d2f8  FUN_0035d2f8 =====

void FUN_0035d2f8(long *param_1,long *param_2)

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
  if (((*PTR_isHybrid_00396d80 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_isHybrid_00396d80), iVar5 != 0)) {
                    /* try { // try from 0035d6d4 to 0035d6eb has its CatchHandler @ 0035d870 */
    FUN_0035da24(&local_80);
    local_78 = local_80;
    bVar4 = facebook::jni::detail::HybridClassBase::isHybridClassBase(&local_78);
    *PTR_isHybrid_00396d78 = bVar4 & 1;
    __cxa_guard_release(PTR_isHybrid_00396d80);
  }
  plVar6 = (long *)operator_new(0x40);
  plVar7 = (long *)param_2[4];
  *plVar6 = (long)&PTR_FUN_00390430;
  if (plVar7 != (long *)0x0) {
    if (plVar7 == param_2) {
      lVar9 = *param_2;
      plVar6[6] = (long)(plVar6 + 2);
      (**(code **)(lVar9 + 0x18))(param_2);
      goto LAB_0035d38c;
    }
                    /* try { // try from 0035d36c to 0035d38b has its CatchHandler @ 0035d90c */
    plVar7 = (long *)(**(code **)(*plVar7 + 0x10))();
  }
  plVar6[6] = (long)plVar7;
LAB_0035d38c:
  puVar2 = PTR_isHybrid_00396d78;
  *param_1 = 0;
  if (*puVar2 == '\0') {
                    /* try { // try from 0035d4b8 to 0035d4bf has its CatchHandler @ 0035d8bc */
    facebook::jni::detail::HybridData::create();
                    /* try { // try from 0035d4c4 to 0035d4df has its CatchHandler @ 0035d93c */
    plVar7 = (long *)facebook::jni::Environment::current();
    plVar7 = (long *)(**(code **)(*plVar7 + 200))(plVar7,local_90);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 0035d4e8 to 0035d4f3 has its CatchHandler @ 0035d894 */
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
                    /* try { // try from 0035d514 to 0035d527 has its CatchHandler @ 0035d8d8 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,plVar6);
    }
                    /* try { // try from 0035d530 to 0035d54b has its CatchHandler @ 0035d934 */
    plVar6 = (long *)facebook::jni::Environment::current();
    lVar9 = (**(code **)(*plVar6 + 200))(plVar6,local_90);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 0035d550 to 0035d56b has its CatchHandler @ 0035d92c */
    plVar6 = (long *)facebook::jni::Environment::current();
    lVar10 = (**(code **)(*plVar6 + 200))(plVar6,lVar9);
    facebook::jni::throwPendingJniExceptionAsCppException();
    local_70 = lVar10;
    if (((DAT_0039e508 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0039e508), iVar5 != 0)) {
      FUN_0035dbf4(&DAT_0039e500);
      __cxa_guard_release(&DAT_0039e508);
    }
    if (((DAT_0039e518 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0039e518), iVar5 != 0)) {
                    /* try { // try from 0035d7dc to 0035d7df has its CatchHandler @ 0035d7f4 */
      DAT_0039e510 = FUN_0035dcb4();
      __cxa_guard_release(&DAT_0039e518);
    }
    lVar10 = local_70;
    uVar13 = DAT_0039e510;
                    /* try { // try from 0035d59c to 0035d5b7 has its CatchHandler @ 0035d924 */
    plVar6 = (long *)facebook::jni::Environment::current();
    plVar6 = (long *)(**(code **)(*plVar6 + 200))(plVar6,lVar10);
    facebook::jni::throwPendingJniExceptionAsCppException();
    local_68 = plVar6;
                    /* try { // try from 0035d5bc to 0035d5e7 has its CatchHandler @ 0035d958 */
    p_Var8 = (_jclass *)facebook::jni::Environment::current();
    p_Var3 = DAT_0039e500;
    plVar7 = (long *)facebook::jni::Environment::current();
    plVar7 = (long *)(**(code **)(*plVar7 + 200))(plVar7,plVar6);
    facebook::jni::throwPendingJniExceptionAsCppException();
    local_60 = plVar7;
                    /* try { // try from 0035d5ec to 0035d5ff has its CatchHandler @ 0035d884 */
    lVar11 = _JNIEnv::NewObject(p_Var8,p_Var3,uVar13,plVar7);
    if (plVar7 != (long *)0x0) {
                    /* try { // try from 0035d608 to 0035d61b has its CatchHandler @ 0035d8d4 */
      plVar12 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar12 + 0xb8))(plVar12,plVar7);
    }
                    /* try { // try from 0035d624 to 0035d627 has its CatchHandler @ 0035d958 */
    facebook::jni::throwCppExceptionIf(lVar11 == 0);
    if (plVar6 != (long *)0x0) {
                    /* try { // try from 0035d62c to 0035d63f has its CatchHandler @ 0035d8d0 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,plVar6);
    }
    if (lVar10 != 0) {
                    /* try { // try from 0035d644 to 0035d657 has its CatchHandler @ 0035d8cc */
      plVar6 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,lVar10);
    }
    *param_1 = lVar11;
    if (lVar9 != 0) {
                    /* try { // try from 0035d664 to 0035d677 has its CatchHandler @ 0035d8c8 */
      plVar6 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,lVar9);
    }
    if (local_90 != 0) {
                    /* try { // try from 0035d684 to 0035d697 has its CatchHandler @ 0035d8c4 */
      plVar6 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,local_90);
    }
  }
  else {
    if (((DAT_0039e4e8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0039e4e8), iVar5 != 0)) {
      FUN_0035dbf4(&DAT_0039e4e0);
      __cxa_guard_release(&DAT_0039e4e8);
    }
    if (((DAT_0039e4f8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0039e4f8), iVar5 != 0)) {
                    /* try { // try from 0035d748 to 0035d74b has its CatchHandler @ 0035d848 */
      DAT_0039e4f0 = FUN_0035dd30();
      __cxa_guard_release(&DAT_0039e4f8);
    }
    uVar13 = DAT_0039e4f0;
                    /* try { // try from 0035d3cc to 0035d3ef has its CatchHandler @ 0035d984 */
    p_Var8 = (_jclass *)facebook::jni::Environment::current();
    lVar9 = _JNIEnv::NewObject(p_Var8,DAT_0039e4e0,uVar13);
    facebook::jni::throwCppExceptionIf(lVar9 == 0);
    *param_1 = lVar9;
                    /* try { // try from 0035d3f4 to 0035d40f has its CatchHandler @ 0035d980 */
    plVar7 = (long *)facebook::jni::Environment::current();
    lVar9 = (**(code **)(*plVar7 + 200))(plVar7,lVar9);
    facebook::jni::throwPendingJniExceptionAsCppException();
    puVar2 = PTR_holderField_00396d90;
    if (((*PTR_holderField_00396d98 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_holderField_00396d98), iVar5 != 0)) {
      facebook::jni::JObject::getClass();
                    /* try { // try from 0035d77c to 0035d783 has its CatchHandler @ 0035d81c */
      uVar13 = facebook::jni::detail::getDestructorField((basic_strong_ref *)&local_60);
      *(undefined8 *)puVar2 = uVar13;
      facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
      ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
                       *)&local_60);
      __cxa_guard_release(PTR_holderField_00396d98);
    }
    uVar13 = *(undefined8 *)puVar2;
                    /* try { // try from 0035d438 to 0035d44f has its CatchHandler @ 0035d954 */
    plVar7 = (long *)facebook::jni::Environment::current();
    local_68 = (long *)(**(code **)(*plVar7 + 0x2f8))(plVar7,lVar9,uVar13);
                    /* try { // try from 0035d454 to 0035d45f has its CatchHandler @ 0035d8dc */
    local_60 = plVar6;
    facebook::jni::detail::HybridDestructor::setNativePointer(&local_68,&local_60);
    plVar6 = local_60;
    local_60 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    plVar6 = local_68;
    if (local_68 != (long *)0x0) {
                    /* try { // try from 0035d480 to 0035d493 has its CatchHandler @ 0035d920 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,plVar6);
    }
    if (lVar9 != 0) {
                    /* try { // try from 0035d49c to 0035d4af has its CatchHandler @ 0035d91c */
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


// ===== 0035d9b4  FUN_0035d9b4 =====

void FUN_0035d9b4(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 0035d9e0 to 0035d9f3 has its CatchHandler @ 0035da20 */
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


// ===== 0035da24  FUN_0035da24 =====

void FUN_0035da24(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00394648 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00394648), iVar2 != 0))
  {
                    /* try { // try from 0035da94 to 0035daa7 has its CatchHandler @ 0035dab8 */
    facebook::jni::findClassStatic(PTR_kBaseName_00394650);
    __cxa_guard_release(PTR_cls_00394648);
  }
  *param_1 = *(undefined8 *)PTR_cls_00394640;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035dae4  FUN_0035dae4 =====

void FUN_0035dae4(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 0035db10 to 0035db23 has its CatchHandler @ 0035db50 */
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


// ===== 0035db54  FUN_0035db54 =====

void FUN_0035db54(undefined8 *param_1)

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
    goto LAB_0035dbf0;
  }
  plVar2 = *(long **)((long)pvVar6 + 0x30);
  plVar3 = (long *)((long)pvVar6 + 0x10);
  if (plVar2 == plVar3) {
    lVar5 = 4;
LAB_0035dbc0:
    (**(code **)(*plVar3 + lVar5 * 8))();
  }
  else if (plVar2 != (long *)0x0) {
    lVar5 = 5;
    plVar3 = plVar2;
    goto LAB_0035dbc0;
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(pvVar6);
    return;
  }
LAB_0035dbf0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035dbf4  FUN_0035dbf4 =====

void FUN_0035dbf4(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00394648 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00394648), iVar2 != 0))
  {
                    /* try { // try from 0035dc64 to 0035dc77 has its CatchHandler @ 0035dc88 */
    facebook::jni::findClassStatic(PTR_kBaseName_00394650);
    __cxa_guard_release(PTR_cls_00394648);
  }
  *param_1 = *(undefined8 *)PTR_cls_00394640;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035dcb4  FUN_0035dcb4 =====

long FUN_0035dcb4(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,DAT_0039e500,"<init>",PTR_kConstructorDescriptor_00396da0);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035dd30  FUN_0035dd30 =====

long FUN_0035dd30(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,DAT_0039e4e0,"<init>",PTR_kConstructorDescriptor_00396d88);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035ddac  FUN_0035ddac =====

void FUN_0035ddac(long param_1)

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
      goto LAB_0035de2c;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0035de0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar4 * 8))();
    return;
  }
LAB_0035de2c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035de30  FUN_0035de30 =====

void FUN_0035de30(void *param_1)

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
    if (plVar2 == (long *)0x0) goto LAB_0035de80;
    lVar5 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_0035de80:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035dea8  FUN_0035dea8 =====

void FUN_0035dea8(undefined8 *param_1)

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
    FUN_0035efcc(pvVar3);
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      operator_delete(pvVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035df20  FUN_0035df20 =====

void FUN_0035df20(long *param_1)

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


// ===== 0035dfac  FUN_0035dfac =====

void FUN_0035dfac(long *param_1)

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


// ===== 0035e038  FUN_0035e038 =====

void FUN_0035e038(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038e0a0;
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


// ===== 0035e0d0  FUN_0035e0d0 =====

void FUN_0035e0d0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038e0a0;
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


// ===== 0035e15c  FUN_0035e15c =====

void FUN_0035e15c(long param_1)

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
  *puVar4 = &PTR_FUN_0038e0a0;
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


// ===== 0035e1d4  FUN_0035e1d4 =====

void FUN_0035e1d4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0038e0a0;
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


// ===== 0035e238  FUN_0035e238 =====

void FUN_0035e238(long param_1)

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


// ===== 0035e2c4  FUN_0035e2c4 =====

void FUN_0035e2c4(void *param_1)

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


// ===== 0035e344  FUN_0035e344 =====

void FUN_0035e344(long param_1,undefined8 *param_2)

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
                    /* try { // try from 0035e37c to 0035e387 has its CatchHandler @ 0035e3f0 */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_0031ef0c(aeStack_98,aJStack_90);
                    /* try { // try from 0035e394 to 0035e39f has its CatchHandler @ 0035e3d8 */
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


// ===== 0035e418  FUN_0035e418 =====

void FUN_0035e418(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive34JHybridViewModelStringPropertySpec13getValueAsyncEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0035e468  FUN_0035e468 =====

pointer_____offset_0x10___ * FUN_0035e468(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0038e100;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035e4a8  FUN_0035e4a8 =====

void FUN_0035e4a8(exception_ptr *param_1,exception_ptr *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  runtime_error *this;
  long lVar6;
  long *plVar7;
  undefined1 auStack_90 [24];
  basic_string abStack_78 [24];
  undefined8 local_60 [3];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)param_2;
  local_60[0] = 0;
  std::exception_ptr::~exception_ptr((exception_ptr *)local_60);
  if (lVar6 == 0) {
    FUN_00264e5c(local_60,PTR_typeinfo_name_003958e0,1);
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0035e658 to 0035e66b has its CatchHandler @ 0035e734 */
    std::__ndk1::operator+("Cannot reject Promise<",(basic_string *)local_60);
                    /* try { // try from 0035e66c to 0035e67f has its CatchHandler @ 0035e71c */
    FUN_00263450(abStack_78,auStack_90,"> with a null exception_ptr!");
                    /* try { // try from 0035e684 to 0035e6bb has its CatchHandler @ 0035e6e8 */
    std::runtime_error::runtime_error(this,abStack_78);
    if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_0035e768;
  }
  std::__ndk1::mutex::lock();
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 == 0xffffffff) {
LAB_0035e52c:
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
    std::exception_ptr::exception_ptr(param_1,param_2);
    *(undefined4 *)(param_1 + 0x18) = 2;
  }
  else {
    if (uVar2 != 2) {
                    /* try { // try from 0035e520 to 0035e52b has its CatchHandler @ 0035e6d0 */
      (*(code *)(&PTR_FUN_0038dff8)[uVar2])(local_60,param_1);
      goto LAB_0035e52c;
    }
    std::exception_ptr::operator=(param_1,param_2);
  }
  lVar1 = *(long *)(param_1 + 0x40);
  for (lVar6 = *(long *)(param_1 + 0x38); lVar6 != lVar1; lVar6 = lVar6 + 0x30) {
    plVar4 = *(long **)(lVar6 + 0x20);
    if (plVar4 == (long *)0x0) {
      if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 0035e6cc to 0035e6cf has its CatchHandler @ 0035e6d8 */
        FUN_0025cd00();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0035e520 with catch @ 0035e6d0
                        */
        FUN_0025ad9c();
      }
      goto LAB_0035e768;
    }
                    /* try { // try from 0035e564 to 0035e56b has its CatchHandler @ 0035e6d4 */
    (**(code **)(*plVar4 + 0x30))(plVar4,param_2);
  }
  plVar4 = *(long **)(param_1 + 0x20);
  plVar7 = *(long **)(param_1 + 0x28);
LAB_0035e594:
  if (plVar7 != plVar4) {
    plVar5 = (long *)plVar7[-2];
    plVar7 = plVar7 + -6;
    if (plVar7 != plVar5) goto code_r0x0035e5ac;
    lVar6 = 4;
    plVar5 = plVar7;
    goto LAB_0035e588;
  }
  plVar7 = *(long **)(param_1 + 0x38);
  plVar5 = *(long **)(param_1 + 0x40);
  *(long **)(param_1 + 0x28) = plVar4;
joined_r0x0035e5c4:
  if (plVar5 != plVar7) {
    plVar4 = (long *)plVar5[-2];
    plVar5 = plVar5 + -6;
    if (plVar5 != plVar4) goto code_r0x0035e62c;
    lVar6 = 4;
    plVar4 = plVar5;
    goto LAB_0035e604;
  }
  *(long **)(param_1 + 0x40) = plVar7;
  std::__ndk1::mutex::unlock();
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
LAB_0035e768:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0035e5ac:
  if (plVar5 != (long *)0x0) {
    lVar6 = 5;
LAB_0035e588:
    (**(code **)(*plVar5 + lVar6 * 8))();
  }
  goto LAB_0035e594;
code_r0x0035e62c:
  if (plVar4 != (long *)0x0) {
    lVar6 = 5;
LAB_0035e604:
    (**(code **)(*plVar4 + lVar6 * 8))();
  }
  goto joined_r0x0035e5c4;
}


// ===== 0035e76c  FUN_0035e76c =====

void FUN_0035e76c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035e7a4  FUN_0035e7a4 =====

void FUN_0035e7a4(undefined8 param_1,byte *param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if ((*param_2 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(*(void **)(param_2 + 0x10));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035e804  FUN_0035e804 =====

void FUN_0035e804(undefined8 param_1,exception_ptr *param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    std::exception_ptr::~exception_ptr(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035e840  FUN_0035e840 =====

void FUN_0035e840(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038e020;
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


// ===== 0035e8d8  FUN_0035e8d8 =====

void FUN_0035e8d8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038e020;
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


// ===== 0035e964  FUN_0035e964 =====

void FUN_0035e964(long param_1)

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
  *puVar4 = &PTR_FUN_0038e020;
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


// ===== 0035e9dc  FUN_0035e9dc =====

void FUN_0035e9dc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0038e020;
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


// ===== 0035ea40  FUN_0035ea40 =====

void FUN_0035ea40(long param_1)

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


// ===== 0035eacc  FUN_0035eacc =====

void FUN_0035eacc(void *param_1)

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


// ===== 0035eb4c  FUN_0035eb4c =====

void FUN_0035eb4c(long param_1,undefined8 *param_2)

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
                    /* try { // try from 0035eb80 to 0035eb8b has its CatchHandler @ 0035ebbc */
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


// ===== 0035ebec  FUN_0035ebec =====

void FUN_0035ebec(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive34JHybridViewModelStringPropertySpec13getValueAsyncEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0035ec3c  FUN_0035ec3c =====

pointer_____offset_0x10___ * FUN_0035ec3c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0038e080;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035ec7c  FUN_0035ec7c =====

void FUN_0035ec7c(byte *param_1,undefined8 *param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 uStack_39;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  std::__ndk1::mutex::lock();
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 != 0xffffffff) {
    if (uVar2 == 1) {
      if ((*param_1 & 1) != 0) {
        operator_delete(*(void **)(param_1 + 0x10));
      }
      uVar9 = param_2[1];
      uVar8 = *param_2;
      *(undefined8 *)(param_1 + 0x10) = param_2[2];
      *(undefined8 *)(param_1 + 8) = uVar9;
      *(undefined8 *)param_1 = uVar8;
      *(undefined2 *)param_2 = 0;
      goto LAB_0035ed28;
    }
                    /* try { // try from 0035ecf4 to 0035ecff has its CatchHandler @ 0035ee54 */
    (*(code *)(&PTR_FUN_0038dff8)[uVar2])(&uStack_39,param_1);
  }
  param_1[0x18] = 0xff;
  param_1[0x19] = 0xff;
  param_1[0x1a] = 0xff;
  param_1[0x1b] = 0xff;
  uVar9 = param_2[1];
  uVar8 = *param_2;
  *(undefined8 *)(param_1 + 0x10) = param_2[2];
  *(undefined8 *)(param_1 + 8) = uVar9;
  *(undefined8 *)param_1 = uVar8;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_1[0x18] = 1;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
LAB_0035ed28:
  plVar6 = *(long **)(param_1 + 0x20);
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar6 != plVar1) {
    do {
      if (*(int *)(param_1 + 0x18) != 1) {
LAB_0035ee40:
        if (*(long *)(lVar3 + 0x28) == local_38) {
          FUN_002a9bc8();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0035ecf4 with catch @ 0035ee54
                        */
          FUN_0025ad9c();
        }
        goto LAB_0035ee80;
      }
      plVar4 = (long *)plVar6[4];
      if (plVar4 == (long *)0x0) {
        if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 0035ee3c to 0035ee53 has its CatchHandler @ 0035ee5c */
          FUN_0025cd00();
          goto LAB_0035ee40;
        }
        goto LAB_0035ee80;
      }
                    /* try { // try from 0035ed50 to 0035ed57 has its CatchHandler @ 0035ee58 */
      (**(code **)(*plVar4 + 0x30))(plVar4,param_1);
      plVar6 = plVar6 + 6;
    } while (plVar6 != plVar1);
    plVar1 = *(long **)(param_1 + 0x20);
    plVar4 = *(long **)(param_1 + 0x28);
    plVar6 = plVar4;
joined_r0x0035ed6c:
    if (plVar4 != plVar1) {
      plVar5 = (long *)plVar4[-2];
      plVar4 = plVar4 + -6;
      plVar6 = plVar1;
      if (plVar4 != plVar5) goto code_r0x0035eda0;
      lVar7 = 4;
      plVar5 = plVar4;
      goto LAB_0035ed7c;
    }
  }
  plVar1 = *(long **)(param_1 + 0x38);
  plVar4 = *(long **)(param_1 + 0x40);
  *(long **)(param_1 + 0x28) = plVar6;
joined_r0x0035edbc:
  if (plVar4 == plVar1) {
    *(long **)(param_1 + 0x40) = plVar1;
    std::__ndk1::mutex::unlock();
    if (*(long *)(lVar3 + 0x28) == local_38) {
      return;
    }
LAB_0035ee80:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  plVar6 = (long *)plVar4[-2];
  plVar4 = plVar4 + -6;
  if (plVar4 != plVar6) goto code_r0x0035ee20;
  lVar7 = 4;
  plVar6 = plVar4;
  goto LAB_0035edf8;
code_r0x0035eda0:
  if (plVar5 != (long *)0x0) {
    lVar7 = 5;
LAB_0035ed7c:
    (**(code **)(*plVar5 + lVar7 * 8))();
  }
  goto joined_r0x0035ed6c;
code_r0x0035ee20:
  if (plVar6 != (long *)0x0) {
    lVar7 = 5;
LAB_0035edf8:
    (**(code **)(*plVar6 + lVar7 * 8))();
  }
  goto joined_r0x0035edbc;
}


// ===== 0035ee84  FUN_0035ee84 =====

void FUN_0035ee84(__shared_weak_count *param_1)

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


// ===== 0035eed0  FUN_0035eed0 =====

void FUN_0035eed0(long param_1)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  pvVar3 = *(void **)(param_1 + 0x18);
  if (pvVar3 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else {
    FUN_0035efcc(pvVar3);
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      operator_delete(pvVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035ef44  FUN_0035ef44 =====

void FUN_0035ef44(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00396d70) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0035ef94  FUN_0035ef94 =====

void FUN_0035ef94(void *param_1)

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


// ===== 0035efcc  FUN_0035efcc =====

void FUN_0035efcc(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  runtime_error arStack_a8 [16];
  byte local_98 [16];
  void *local_88;
  byte local_80 [16];
  void *local_70;
  exception_ptr local_68 [16];
  void *local_58;
  basic_string local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* try { // try from 0035f110 to 0035f19b has its CatchHandler @ 0035f1e8 */
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc
              (local_80,"Timeouted: Promise<");
    FUN_00264e5c(local_98,PTR_typeinfo_name_003958e0,0);
    FUN_00264adc(local_68,local_80,local_98);
    FUN_00263450(local_50,local_68,"> was destroyed!");
    if (((byte)local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
    if ((local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    std::runtime_error::runtime_error(arStack_a8,local_50);
    FUN_003201f8(local_68,arStack_a8);
    FUN_0035e4a8(param_1,local_68);
    std::exception_ptr::~exception_ptr(local_68);
    std::runtime_error::~runtime_error(arStack_a8);
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  std::__ndk1::mutex::~mutex((mutex *)(param_1 + 0x50));
  plVar4 = *(long **)(param_1 + 0x38);
  if (plVar4 != (long *)0x0) {
    plVar5 = *(long **)(param_1 + 0x40);
    plVar2 = plVar4;
    if (plVar5 != plVar4) {
      do {
        plVar2 = (long *)plVar5[-2];
        plVar5 = plVar5 + -6;
        if (plVar5 == plVar2) {
          lVar3 = 4;
          plVar2 = plVar5;
LAB_0035f024:
          (**(code **)(*plVar2 + lVar3 * 8))();
        }
        else if (plVar2 != (long *)0x0) {
          lVar3 = 5;
          goto LAB_0035f024;
        }
      } while (plVar5 != plVar4);
      plVar2 = *(long **)(param_1 + 0x38);
    }
    *(long **)(param_1 + 0x40) = plVar4;
    operator_delete(plVar2);
  }
  plVar4 = *(long **)(param_1 + 0x20);
  if (plVar4 != (long *)0x0) {
    plVar5 = *(long **)(param_1 + 0x28);
    plVar2 = plVar4;
    if (plVar5 != plVar4) {
      do {
        plVar2 = (long *)plVar5[-2];
        plVar5 = plVar5 + -6;
        if (plVar5 == plVar2) {
          lVar3 = 4;
          plVar2 = plVar5;
LAB_0035f084:
          (**(code **)(*plVar2 + lVar3 * 8))();
        }
        else if (plVar2 != (long *)0x0) {
          lVar3 = 5;
          goto LAB_0035f084;
        }
      } while (plVar5 != plVar4);
      plVar2 = *(long **)(param_1 + 0x20);
    }
    *(long **)(param_1 + 0x28) = plVar4;
    operator_delete(plVar2);
  }
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
                    /* try { // try from 0035f0d8 to 0035f0e3 has its CatchHandler @ 0035f1ec */
    (*(code *)(&PTR_FUN_0038dff8)[*(uint *)(param_1 + 0x18)])(local_50,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0035f1f0  FUN_0035f1f0 =====

void FUN_0035f1f0(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_0038e1a0;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035f234  FUN_0035f234 =====

void FUN_0035f234(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_0038e1a0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035f28c  FUN_0035f28c =====

void FUN_0035f28c(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0035f2c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(param_1 + 0x18))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035f2cc  FUN_0035f2cc =====

void FUN_0035f2cc(void *param_1)

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


// ===== 0035f304  margelo::nitro::rive::JHybridViewModelStringPropertySpec::CxxPart::registerNatives =====

/* margelo::nitro::rive::JHybridViewModelStringPropertySpec::CxxPart::registerNatives() */

void margelo::nitro::rive::JHybridViewModelStringPropertySpec::CxxPart::registerNatives(void)

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
  puStack_58 = PTR_kDescriptor_0038d690;
  local_60 = PTR_s_initHybrid_0038d688;
  local_50 = PTR_call_0038d698;
  pcVar7 = (char *)operator_new(0x50);
  uVar5 = s_Lcom_margelo_nitro_rive_HybridVi_001d5a64._25_8_;
  uVar4 = s_Lcom_margelo_nitro_rive_HybridVi_001d5a64._17_8_;
  uVar3 = s_Lcom_margelo_nitro_rive_HybridVi_001d5a64._9_8_;
  uVar2 = s_Lcom_margelo_nitro_rive_HybridVi_001d5a64._1_8_;
  pcVar7[0x40] = '\0';
  *(undefined8 *)(pcVar7 + 8) = uVar3;
  *(undefined8 *)pcVar7 = uVar2;
  *(undefined8 *)(pcVar7 + 0x18) = uVar5;
  *(undefined8 *)(pcVar7 + 0x10) = uVar4;
  uVar4 = s_Lcom_margelo_nitro_rive_HybridVi_001d5a64._57_8_;
  uVar3 = s_Lcom_margelo_nitro_rive_HybridVi_001d5a64._49_8_;
  uVar2 = s_Lcom_margelo_nitro_rive_HybridVi_001d5a64._33_8_;
  *(undefined8 *)(pcVar7 + 0x28) = s_Lcom_margelo_nitro_rive_HybridVi_001d5a64._41_8_;
  *(undefined8 *)(pcVar7 + 0x20) = uVar2;
  *(undefined8 *)(pcVar7 + 0x38) = uVar4;
  *(undefined8 *)(pcVar7 + 0x30) = uVar3;
                    /* try { // try from 0035f364 to 0035f36b has its CatchHandler @ 0035f3dc */
  facebook::jni::findClassLocal(pcVar7);
  operator_delete(pcVar7);
                    /* try { // try from 0035f374 to 0035f39b has its CatchHandler @ 0035f3f0 */
  plVar8 = (long *)facebook::jni::Environment::current();
  iVar6 = (**(code **)(*plVar8 + 0x6b8))(plVar8,local_40,&local_60,1);
  facebook::jni::throwCppExceptionIf(iVar6 != 0);
  if (local_40 != 0) {
                    /* try { // try from 0035f3a4 to 0035f3b7 has its CatchHandler @ 0035f3ec */
    plVar8 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar8 + 0xb8))(plVar8,local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035f418  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelStringPropertySpec::CxxPart,margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridViewModelStringPropertySpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelStringPropertySpec::CxxPart,margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   (*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelStringPropertySpec::CxxPart,
   margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart, void>::_javaobject*>),
   &margelo::nitro::rive::JHybridViewModelStringPropertySpec::CxxPart::initHybrid,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelStringPropertySpec::CxxPart,
   margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart, void>::_javaobject*,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>>::call(_JNIEnv*, _jobject*) */

undefined8
facebook::jni::detail::
FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelStringPropertySpec::CxxPart,margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridViewModelStringPropertySpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelStringPropertySpec::CxxPart,margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>
::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  JniEnvCacher aJStack_48 [24];
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_48,param_1);
                    /* try { // try from 0035f444 to 0035f44f has its CatchHandler @ 0035f480 */
  FUN_0035b780(&local_30,param_2);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035f4cc  margelo::nitro::rive::JHybridViewModelStringPropertySpec::getValue =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelStringPropertySpec::getValue() */

void __thiscall
margelo::nitro::rive::JHybridViewModelStringPropertySpec::getValue
          (JHybridViewModelStringPropertySpec *this)

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


// ===== 0035f510  margelo::nitro::rive::JHybridViewModelStringPropertySpec::setValue =====

/* virtual thunk to
   margelo::nitro::rive::JHybridViewModelStringPropertySpec::setValue(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelStringPropertySpec::setValue
          (JHybridViewModelStringPropertySpec *this,basic_string *param_1)

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


// ===== 0035f554  margelo::nitro::rive::JHybridViewModelStringPropertySpec::getValueAsync =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelStringPropertySpec::getValueAsync() */

void __thiscall
margelo::nitro::rive::JHybridViewModelStringPropertySpec::getValueAsync
          (JHybridViewModelStringPropertySpec *this)

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


// ===== 0035f598  margelo::nitro::rive::JHybridViewModelStringPropertySpec::set =====

/* virtual thunk to
   margelo::nitro::rive::JHybridViewModelStringPropertySpec::set(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelStringPropertySpec::set
          (JHybridViewModelStringPropertySpec *this,basic_string *param_1)

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


// ===== 0035f5dc  margelo::nitro::rive::JHybridViewModelStringPropertySpec::addListener =====

/* virtual thunk to
   margelo::nitro::rive::JHybridViewModelStringPropertySpec::addListener(std::__ndk1::function<void
   (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&)> const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelStringPropertySpec::addListener
          (JHybridViewModelStringPropertySpec *this,function *param_1)

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


// ===== 0035f620  margelo::nitro::rive::JHybridViewModelStringPropertySpec::removeListeners =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelStringPropertySpec::removeListeners() */

void __thiscall
margelo::nitro::rive::JHybridViewModelStringPropertySpec::removeListeners
          (JHybridViewModelStringPropertySpec *this)

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


// ===== 0035f664  margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::JavaPart::getJHybridViewModelBooleanPropertySpec =====

/* margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::JavaPart::getJHybridViewModelBooleanPropertySpec()
    */

void __thiscall
margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::JavaPart::
getJHybridViewModelBooleanPropertySpec(JavaPart *this)

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
     (lVar2 = __dynamic_cast(local_38,PTR_typeinfo_00395e60,PTR_typeinfo_00396e08,0xffffffffffffffff
                            ), lVar2 == 0)) {
    *in_x8 = 0;
    in_x8[1] = 0;
    this_00 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0035f72c to 0035f737 has its CatchHandler @ 0035f76c */
    std::runtime_error::runtime_error
              (this_00,"Failed to downcast JHybridObject to JHybridViewModelBooleanPropertySpec!");
    if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* try { // try from 0035f74c to 0035f763 has its CatchHandler @ 0035f764 */
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


// ===== 0035f7a8  FUN_0035f7a8 =====

void FUN_0035f7a8(long *param_1)

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


// ===== 0035f834  margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::CxxPart::initHybrid =====

/* margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::CxxPart::initHybrid(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::CxxPart,
   margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart, void>::_javaobject*>) */

void __thiscall
margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::CxxPart::initHybrid
          (undefined8 *param_1,CxxPart *this)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_0035f88c(&local_30,*(undefined8 *)this);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035f88c  FUN_0035f88c =====

void FUN_0035f88c(undefined8 *param_1,undefined8 param_2)

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
                    /* try { // try from 0035f8c4 to 0035f8cb has its CatchHandler @ 0035f9a8 */
  local_48 = param_2;
  margelo::nitro::JHybridObject::CxxPart::CxxPart(pCVar2,&local_48);
  *(undefined **)pCVar2 = PTR_vtable_00396e10 + 0x10;
                    /* try { // try from 0035f8dc to 0035f8e3 has its CatchHandler @ 0035f9a0 */
  facebook::jni::detail::HybridData::create();
  uVar5 = *param_1;
                    /* try { // try from 0035f8e8 to 0035f903 has its CatchHandler @ 0035f9bc */
  plVar3 = (long *)facebook::jni::Environment::current();
  lVar4 = (**(code **)(*plVar3 + 200))(plVar3,uVar5);
  facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 0035f90c to 0035f917 has its CatchHandler @ 0035f970 */
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
                    /* try { // try from 0035f938 to 0035f94b has its CatchHandler @ 0035f9b8 */
    plVar3 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb8))(plVar3,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035f9f4  FUN_0035f9f4 =====

void FUN_0035f9f4(long *param_1)

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
                    /* try { // try from 0035fa30 to 0035fa43 has its CatchHandler @ 0035fa80 */
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


// ===== 0035fa84  margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::CxxPart::createHybridObject =====

/* margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::CxxPart::createHybridObject(facebook::jni::basic_strong_ref<margelo::nitro::JHybridObject::JavaPart,
   facebook::jni::LocalReferenceAllocator> const&) */

void margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::CxxPart::createHybridObject
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
  
  puVar1 = PTR_target_class_00396e58;
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*in_x1 == 0) {
LAB_0035fd90:
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0035fd9c to 0035fda7 has its CatchHandler @ 0035ff34 */
    param_1 = (basic_strong_ref *)
              std::runtime_error::runtime_error
                        (this,
                         "Failed to cast JHybridObject::JavaPart to JHybridViewModelBooleanPropertySpec::JavaPart!"
                        );
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0035fdb8 to 0035fdcf has its CatchHandler @ 0035ff30 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_00360000;
  }
  if (((*PTR_target_class_00396e60 & 1) == 0) &&
     (param_1 = (basic_strong_ref *)__cxa_guard_acquire(PTR_target_class_00396e60),
     (int)param_1 != 0)) {
                    /* try { // try from 0035fde0 to 0035fdef has its CatchHandler @ 0035fef4 */
    facebook::jni::findClassStatic(PTR_kBaseName_00396e68);
    *(undefined8 *)puVar1 = local_60;
    param_1 = (basic_strong_ref *)__cxa_guard_release(PTR_target_class_00396e60);
  }
  if (*(long *)puVar1 == 0) {
    if (*(long *)(lVar2 + 0x28) != local_58) goto LAB_00360000;
    FUN_00261580("java/lang/ClassCastException","Could not find class %s.",PTR_kBaseName_00396e68);
LAB_0035fe34:
                    /* try { // try from 0035fe34 to 0035fe43 has its CatchHandler @ 0035ff20 */
    param_1 = (basic_strong_ref *)FUN_002615d4(local_80,&local_68);
    uVar8 = (ulong)local_80 | 1;
    if ((local_80[0] & 1) != 0) {
      uVar8 = local_70;
    }
    if (*(long *)(lVar2 + 0x28) != local_58) goto LAB_00360000;
                    /* try { // try from 0035fe68 to 0035fe83 has its CatchHandler @ 0035ff08 */
    FUN_0026171c("java/lang/ClassCastException","Tried to cast from %s to %s.",uVar8,
                 PTR_kBaseName_00396e68);
  }
  else {
                    /* try { // try from 0035fadc to 0035faef has its CatchHandler @ 0035ff88 */
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5,*in_x1);
    local_68 = lVar6;
                    /* try { // try from 0035faf8 to 0035fb0f has its CatchHandler @ 0035ff84 */
    plVar5 = (long *)facebook::jni::Environment::current();
    cVar4 = (**(code **)(*plVar5 + 0x58))(plVar5,lVar6,*(undefined8 *)puVar1);
    if (cVar4 == '\0') goto LAB_0035fe34;
    lVar10 = *in_x1;
    if (lVar10 == 0) {
      local_88 = 0;
    }
    else {
                    /* try { // try from 0035fb20 to 0035fb3b has its CatchHandler @ 0035ff8c */
      plVar5 = (long *)facebook::jni::Environment::current();
      local_88 = (**(code **)(*plVar5 + 200))(plVar5,lVar10);
      facebook::jni::throwPendingJniExceptionAsCppException();
      if (local_88 == 0) {
        pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
        param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar9);
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0035fedc to 0035fef3 has its CatchHandler @ 0035ff8c */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(pbVar9,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
        }
        goto LAB_00360000;
      }
    }
    if (lVar6 != 0) {
                    /* try { // try from 0035fb58 to 0035fb6b has its CatchHandler @ 0035ff80 */
      plVar5 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar5 + 0xb8))(plVar5,lVar6);
    }
    if (local_88 == 0) goto LAB_0035fd90;
                    /* try { // try from 0035fb70 to 0035fb77 has its CatchHandler @ 0035ff6c */
    plVar5 = (long *)operator_new(0xa8);
    puVar1 = PTR_vtable_00395e70;
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_0038ed80;
    plVar11 = plVar5 + 3;
    *plVar11 = (long)(puVar1 + 0x10);
    puVar3 = PTR_PTR_00396df8;
                    /* try { // try from 0035fba8 to 0035fbc3 has its CatchHandler @ 0035ff64 */
    margelo::nitro::HybridObject::HybridObject((HybridObject *)(plVar5 + 5),PTR_PTR_00396df8 + 0x58)
    ;
    puVar1 = PTR_construction_vtable_00396e00 + 0x68;
    plVar5[5] = (long)(PTR_construction_vtable_00396e00 + 0x100);
    plVar5[3] = (long)puVar1;
                    /* try { // try from 0035fbdc to 0035fbf7 has its CatchHandler @ 0035ff98 */
    plVar7 = (long *)facebook::jni::Environment::current();
    uVar8 = (**(code **)(*plVar7 + 200))(plVar7,local_88);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 0035fbfc to 0035fc0b has its CatchHandler @ 0035ff54 */
    local_80[0] = uVar8;
    margelo::nitro::JHybridObject::JHybridObject((JHybridObject *)(plVar5 + 0x13),puVar3 + 0xa8);
    uVar8 = local_80[0];
    if (local_80[0] != 0) {
                    /* try { // try from 0035fc14 to 0035fc27 has its CatchHandler @ 0035ff7c */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,uVar8);
    }
                    /* try { // try from 0035fc28 to 0035fc43 has its CatchHandler @ 0035ff90 */
    plVar7 = (long *)facebook::jni::Environment::current();
    uVar8 = (**(code **)(*plVar7 + 200))(plVar7,local_88);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 0035fc48 to 0035fc57 has its CatchHandler @ 0035ff44 */
    local_80[0] = uVar8;
    FUN_00357adc(plVar5 + 0x11,puVar3 + 0x80,uVar8);
    if (uVar8 != 0) {
                    /* try { // try from 0035fc5c to 0035fc6f has its CatchHandler @ 0035ff78 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,uVar8);
    }
    puVar3 = PTR_vtable_00396df0;
    puVar1 = PTR_vtable_00396df0 + 0x80;
    plVar5[5] = (long)(PTR_vtable_00396df0 + 0x118);
    *plVar11 = (long)puVar1;
    plVar5[0x11] = (long)(puVar3 + 0x198);
    plVar5[0x13] = (long)(puVar3 + 0x1f8);
                    /* try { // try from 0035fc98 to 0035fcb3 has its CatchHandler @ 0035ffa0 */
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
                    /* try { // try from 0035fd4c to 0035fd5f has its CatchHandler @ 0035ff74 */
        plVar5 = (long *)facebook::jni::Environment::current();
        param_1 = (basic_strong_ref *)(**(code **)(*plVar5 + 0xb8))(plVar5,local_88);
      }
      if (*(long *)(lVar2 + 0x28) == local_58) {
        return;
      }
      goto LAB_00360000;
    }
  }
  pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
  param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar9);
  if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0035fea4 to 0035febb has its CatchHandler @ 0035ffa0 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pbVar9,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
  }
LAB_00360000:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00360004  FUN_00360004 =====

void FUN_00360004(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00360030 to 00360043 has its CatchHandler @ 00360070 */
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


// ===== 00360074  FUN_00360074 =====

void FUN_00360074(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_003614f4();
  FUN_00356a9c(param_1 + 0x70,PTR_PTR_00396df8 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(param_1 + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(param_1 + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003600f4  FUN_003600f4 =====

void FUN_003600f4(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_003614f4();
  FUN_00356a9c(param_1 + 0x70,PTR_PTR_00396df8 + 0x80);
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


// ===== 0036017c  margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::getValue =====

/* margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::getValue() */

void __thiscall
margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::getValue
          (JHybridViewModelBooleanPropertySpec *this)

{
  long lVar1;
  char cVar2;
  int iVar3;
  _jobject *p_Var4;
  _jmethodID *p_Var5;
  JClass aJStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039e548 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039e548), iVar3 != 0)) {
                    /* try { // try from 0036020c to 00360223 has its CatchHandler @ 00360238 */
    FUN_00361824(aJStack_40);
    DAT_0039e540 = facebook::jni::JClass::getMethod<unsigned_char()>(aJStack_40,"getValue");
    __cxa_guard_release(&DAT_0039e548);
  }
  p_Var5 = *(_jmethodID **)(this + 8);
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  cVar2 = _JNIEnv::CallBooleanMethod(p_Var4,p_Var5,DAT_0039e540);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2 != '\0');
}


// ===== 00360264  margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::setValue =====

/* margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::setValue(bool) */

void __thiscall
margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::setValue
          (JHybridViewModelBooleanPropertySpec *this,bool param_1)

{
  long lVar1;
  int iVar2;
  _jobject *p_Var3;
  _jmethodID *p_Var4;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039e558 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039e558), iVar2 != 0)) {
                    /* try { // try from 003602ec to 00360303 has its CatchHandler @ 00360318 */
    FUN_00361824(auStack_40);
    DAT_0039e550 = FUN_00361e54(auStack_40,"setValue");
    __cxa_guard_release(&DAT_0039e558);
  }
  p_Var4 = *(_jmethodID **)(this + 8);
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var3,p_Var4,DAT_0039e550,(ulong)(param_1 & 1));
  if (*(long *)(lVar1 + 0x28) == local_38) {
    facebook::jni::throwPendingJniExceptionAsCppException();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00360344  margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::getValueAsync =====

/* margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::getValueAsync() */

void margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::getValueAsync(void)

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
  if (((DAT_0039e568 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039e568), iVar4 != 0)) {
                    /* try { // try from 00360554 to 0036056b has its CatchHandler @ 00360628 */
    FUN_00361824(&local_90);
    DAT_0039e560 = FUN_0031e0a0(&local_90,"getValueAsync");
    __cxa_guard_release(&DAT_0039e568);
  }
  p_Var13 = *(_jmethodID **)(in_x0 + 8);
  p_Var5 = (_jobject *)facebook::jni::Environment::current();
  lVar6 = _JNIEnv::CallObjectMethod(p_Var5,p_Var13,DAT_0039e560);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_98 = lVar6;
                    /* try { // try from 003603a8 to 003603af has its CatchHandler @ 003606cc */
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
                    /* try { // try from 003603d0 to 003603d7 has its CatchHandler @ 003606bc */
  puVar8 = (undefined8 *)operator_new(0x20);
  puVar8[2] = 0;
  *puVar8 = &PTR____shared_weak_count_0038eb60;
  puVar8[1] = 0;
  puVar3 = PTR_hybridDataField_00396038;
  puVar8[3] = ppuVar7;
  in_x8[1] = puVar8;
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 003605a0 to 003605a3 has its CatchHandler @ 0036060c */
    uVar9 = FUN_0031e19c(local_90);
    *(undefined8 *)PTR_hybridDataField_00396030 = uVar9;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 00360400 to 00360413 has its CatchHandler @ 003606d8 */
  puVar2 = PTR_hybridDataField_00396030;
  uVar9 = facebook::jni::getHybridDataFromField
                    ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uStack_88 = *in_x8;
  local_80 = in_x8[1];
  if (local_80 != 0) {
    FUN_00259a00(1,local_80 + 8);
  }
  local_90 = &PTR_FUN_0038ebb0;
                    /* try { // try from 00360448 to 0036044f has its CatchHandler @ 0036067c */
  local_70 = &local_90;
  FUN_0031e2bc(uVar9,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar11 = &local_90;
LAB_00360470:
    (*(code *)(*pppuVar11)[lVar6])();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar6 = 5;
    pppuVar11 = local_70;
    goto LAB_00360470;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 003605e8 to 003605eb has its CatchHandler @ 00360608 */
    uVar9 = FUN_0031e19c(local_90);
    *(undefined8 *)puVar2 = uVar9;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 00360484 to 00360493 has its CatchHandler @ 003606d8 */
  uVar10 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uVar9 = *in_x8;
  lVar6 = in_x8[1];
  if (lVar6 != 0) {
    FUN_00259a00(1,lVar6 + 8);
  }
  local_90 = &PTR_FUN_0038ec30;
                    /* try { // try from 003604c8 to 003604cf has its CatchHandler @ 0036063c */
  uStack_88 = uVar9;
  local_80 = lVar6;
  local_70 = &local_90;
  FUN_0031e5cc(uVar10,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar11 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_003604fc;
    lVar6 = 5;
    pppuVar11 = local_70;
  }
  (*(code *)(*pppuVar11)[lVar6])();
LAB_003604fc:
  lVar6 = local_98;
  if (local_98 != 0) {
                    /* try { // try from 00360504 to 00360517 has its CatchHandler @ 003606d4 */
    plVar12 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar12 + 0xb8))(plVar12,lVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00360708  margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::set =====

/* margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::set(bool) */

void __thiscall
margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::set
          (JHybridViewModelBooleanPropertySpec *this,bool param_1)

{
  long lVar1;
  int iVar2;
  _jobject *p_Var3;
  _jmethodID *p_Var4;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039e578 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039e578), iVar2 != 0)) {
                    /* try { // try from 00360790 to 003607a7 has its CatchHandler @ 003607bc */
    FUN_00361824(auStack_40);
    DAT_0039e570 = FUN_00361e54(auStack_40,&DAT_001d4cc6);
    __cxa_guard_release(&DAT_0039e578);
  }
  p_Var4 = *(_jmethodID **)(this + 8);
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var3,p_Var4,DAT_0039e570,(ulong)(param_1 & 1));
  if (*(long *)(lVar1 + 0x28) == local_38) {
    facebook::jni::throwPendingJniExceptionAsCppException();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003607e8  margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::addListener =====

/* margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::addListener(std::__ndk1::function<void
   (bool)> const&) */

void margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::addListener(function *param_1)

{
  long lVar1;
  undefined *puVar2;
  _jmethodID *p_Var3;
  char cVar4;
  byte bVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  _jclass *p_Var9;
  long lVar10;
  long lVar11;
  _jobject *p_Var12;
  long *plVar13;
  bad_alloc *this;
  long *in_x1;
  long in_x8;
  _jmethodID *p_Var14;
  undefined8 uVar15;
  long local_a8;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  long *local_78;
  long *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039e588 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0039e588), iVar6 != 0)) {
                    /* try { // try from 00360d68 to 00360d77 has its CatchHandler @ 00361034 */
    FUN_00361824(&local_70);
    DAT_0039e580 = FUN_003618e4(&local_70);
    __cxa_guard_release(&DAT_0039e588);
  }
  p_Var14 = *(_jmethodID **)(param_1 + 8);
  if (((*PTR_isHybrid_00396e20 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_isHybrid_00396e20), iVar6 != 0)) {
                    /* try { // try from 00360da0 to 00360db7 has its CatchHandler @ 00361020 */
    FUN_003619d0(&local_90);
    local_88 = local_90;
    bVar5 = facebook::jni::detail::HybridClassBase::isHybridClassBase(&local_88);
    *PTR_isHybrid_00396e18 = bVar5 & 1;
    __cxa_guard_release(PTR_isHybrid_00396e20);
  }
  plVar7 = (long *)operator_new(0x40);
  plVar8 = (long *)in_x1[4];
  *plVar7 = (long)&PTR_FUN_0038ecb0;
  if (plVar8 == (long *)0x0) {
LAB_0036087c:
    plVar7[6] = (long)plVar8;
  }
  else {
    if (plVar8 != in_x1) {
                    /* try { // try from 00360878 to 00360897 has its CatchHandler @ 003610f8 */
      plVar8 = (long *)(**(code **)(*plVar8 + 0x10))();
      goto LAB_0036087c;
    }
    lVar10 = *in_x1;
    plVar7[6] = (long)(plVar7 + 2);
    (**(code **)(lVar10 + 0x18))();
  }
  if (*PTR_isHybrid_00396e18 == '\0') {
                    /* try { // try from 003609c4 to 003609cb has its CatchHandler @ 003610a8 */
    facebook::jni::detail::HybridData::create();
                    /* try { // try from 003609d0 to 003609eb has its CatchHandler @ 00361128 */
    plVar8 = (long *)facebook::jni::Environment::current();
    plVar8 = (long *)(**(code **)(*plVar8 + 200))(plVar8,local_98);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 003609f4 to 003609ff has its CatchHandler @ 00361080 */
    local_78 = plVar7;
    local_70 = plVar8;
    FUN_00319a60(&local_70,&local_78);
    plVar7 = local_78;
    local_78 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    plVar7 = local_70;
    if (local_70 != (long *)0x0) {
                    /* try { // try from 00360a20 to 00360a33 has its CatchHandler @ 003610c4 */
      plVar8 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar8 + 0xb8))(plVar8,plVar7);
    }
                    /* try { // try from 00360a3c to 00360a57 has its CatchHandler @ 00361120 */
    plVar7 = (long *)facebook::jni::Environment::current();
    lVar10 = (**(code **)(*plVar7 + 200))(plVar7,local_98);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 00360a5c to 00360a77 has its CatchHandler @ 00361118 */
    plVar7 = (long *)facebook::jni::Environment::current();
    lVar11 = (**(code **)(*plVar7 + 200))(plVar7,lVar10);
    facebook::jni::throwPendingJniExceptionAsCppException();
    local_80 = lVar11;
    if (((DAT_0039e618 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0039e618), iVar6 != 0)) {
      FUN_00361ba0(&DAT_0039e610);
      __cxa_guard_release(&DAT_0039e618);
    }
    if (((DAT_0039e628 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0039e628), iVar6 != 0)) {
                    /* try { // try from 00360f5c to 00360f5f has its CatchHandler @ 00360f74 */
      DAT_0039e620 = FUN_00361c60();
      __cxa_guard_release(&DAT_0039e628);
    }
    lVar11 = local_80;
    uVar15 = DAT_0039e620;
                    /* try { // try from 00360aa8 to 00360ac3 has its CatchHandler @ 00361110 */
    plVar7 = (long *)facebook::jni::Environment::current();
    plVar7 = (long *)(**(code **)(*plVar7 + 200))(plVar7,lVar11);
    facebook::jni::throwPendingJniExceptionAsCppException();
    local_78 = plVar7;
                    /* try { // try from 00360ac8 to 00360af3 has its CatchHandler @ 00361168 */
    p_Var9 = (_jclass *)facebook::jni::Environment::current();
    p_Var3 = DAT_0039e610;
    plVar8 = (long *)facebook::jni::Environment::current();
    plVar8 = (long *)(**(code **)(*plVar8 + 200))(plVar8,plVar7);
    facebook::jni::throwPendingJniExceptionAsCppException();
    local_70 = plVar8;
                    /* try { // try from 00360af8 to 00360b0b has its CatchHandler @ 00361070 */
    local_a8 = _JNIEnv::NewObject(p_Var9,p_Var3,uVar15,plVar8);
    if (plVar8 != (long *)0x0) {
                    /* try { // try from 00360b14 to 00360b27 has its CatchHandler @ 003610c0 */
      plVar13 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar13 + 0xb8))(plVar13,plVar8);
    }
                    /* try { // try from 00360b30 to 00360b33 has its CatchHandler @ 00361168 */
    facebook::jni::throwCppExceptionIf(local_a8 == 0);
    if (plVar7 != (long *)0x0) {
                    /* try { // try from 00360b38 to 00360b4b has its CatchHandler @ 003610bc */
      plVar8 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar8 + 0xb8))(plVar8,plVar7);
    }
    if (lVar11 != 0) {
                    /* try { // try from 00360b50 to 00360b63 has its CatchHandler @ 003610b8 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,lVar11);
    }
    if (lVar10 != 0) {
                    /* try { // try from 00360b70 to 00360b83 has its CatchHandler @ 003610b4 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,lVar10);
    }
    if (local_98 != 0) {
                    /* try { // try from 00360b90 to 00360ba3 has its CatchHandler @ 003610b0 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,local_98);
    }
  }
  else {
    if (((DAT_0039e5e8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0039e5e8), iVar6 != 0)) {
      FUN_00361ba0(&DAT_0039e5e0);
      __cxa_guard_release(&DAT_0039e5e8);
    }
    if (((DAT_0039e5f8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0039e5f8), iVar6 != 0)) {
                    /* try { // try from 00360e90 to 00360e93 has its CatchHandler @ 00360fc8 */
      DAT_0039e5f0 = FUN_00361cdc();
      __cxa_guard_release(&DAT_0039e5f8);
    }
    uVar15 = DAT_0039e5f0;
                    /* try { // try from 003608d8 to 003608fb has its CatchHandler @ 00361194 */
    p_Var9 = (_jclass *)facebook::jni::Environment::current();
    local_a8 = _JNIEnv::NewObject(p_Var9,DAT_0039e5e0,uVar15);
    facebook::jni::throwCppExceptionIf(local_a8 == 0);
                    /* try { // try from 00360900 to 0036091b has its CatchHandler @ 00361190 */
    plVar8 = (long *)facebook::jni::Environment::current();
    lVar10 = (**(code **)(*plVar8 + 200))(plVar8,local_a8);
    facebook::jni::throwPendingJniExceptionAsCppException();
    puVar2 = PTR_holderField_00396e30;
    local_80 = lVar10;
    if (((*PTR_holderField_00396e38 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_holderField_00396e38), iVar6 != 0)) {
      facebook::jni::JObject::getClass();
                    /* try { // try from 00360ec4 to 00360ecb has its CatchHandler @ 00360f9c */
      uVar15 = facebook::jni::detail::getDestructorField((basic_strong_ref *)&local_70);
      *(undefined8 *)puVar2 = uVar15;
      facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
      ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
                       *)&local_70);
      __cxa_guard_release(PTR_holderField_00396e38);
    }
    lVar10 = local_80;
    uVar15 = *(undefined8 *)puVar2;
                    /* try { // try from 00360944 to 0036095b has its CatchHandler @ 0036114c */
    plVar8 = (long *)facebook::jni::Environment::current();
    local_78 = (long *)(**(code **)(*plVar8 + 0x2f8))(plVar8,lVar10,uVar15);
                    /* try { // try from 00360960 to 0036096b has its CatchHandler @ 003610c8 */
    local_70 = plVar7;
    facebook::jni::detail::HybridDestructor::setNativePointer(&local_78,&local_70);
    plVar7 = local_70;
    local_70 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    plVar7 = local_78;
    if (local_78 != (long *)0x0) {
                    /* try { // try from 0036098c to 0036099f has its CatchHandler @ 0036110c */
      plVar8 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar8 + 0xb8))(plVar8,plVar7);
    }
    lVar10 = local_80;
    if (local_80 != 0) {
                    /* try { // try from 003609a8 to 003609bb has its CatchHandler @ 00361108 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,lVar10);
    }
  }
                    /* try { // try from 00360bac to 00360bcb has its CatchHandler @ 003611b4 */
  p_Var12 = (_jobject *)facebook::jni::Environment::current();
  plVar7 = (long *)_JNIEnv::CallObjectMethod(p_Var12,p_Var14,DAT_0039e580,local_a8);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (local_a8 != 0) {
                    /* try { // try from 00360bd4 to 00360be7 has its CatchHandler @ 00361148 */
    plVar8 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar8 + 0xb8))(plVar8,local_a8);
  }
  if (((*PTR_cls_003945e8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_cls_003945e8), iVar6 != 0))
  {
                    /* try { // try from 00360de8 to 00360dfb has its CatchHandler @ 0036100c */
    facebook::jni::findClassStatic(PTR_kBaseName_003945f0);
    __cxa_guard_release(PTR_cls_003945e8);
  }
  uVar15 = *(undefined8 *)PTR_cls_003945e0;
                    /* try { // try from 00360c04 to 00360c1f has its CatchHandler @ 003611ac */
  plVar8 = (long *)facebook::jni::Environment::current();
  cVar4 = (**(code **)(*plVar8 + 0x100))(plVar8,plVar7,uVar15);
  if (cVar4 == '\0') {
                    /* try { // try from 00360d18 to 00360d23 has its CatchHandler @ 00361068 */
    FUN_003595b8(&local_70,plVar7);
    local_80 = 0;
    local_78 = local_70;
    local_70 = (long *)0x0;
                    /* try { // try from 00360d30 to 00360d37 has its CatchHandler @ 00361048 */
    FUN_00359668();
    FUN_0035971c(&local_78);
    FUN_003597d8(&local_80);
    FUN_00359848(&local_70);
  }
  else {
    plVar8 = plVar7;
    if (plVar7 != (long *)0x0) {
                    /* try { // try from 00360c2c to 00360c47 has its CatchHandler @ 003611b0 */
      plVar8 = (long *)facebook::jni::Environment::current();
      plVar8 = (long *)(**(code **)(*plVar8 + 200))(plVar8,plVar7);
      facebook::jni::throwPendingJniExceptionAsCppException();
      if (plVar8 == (long *)0x0) {
        this = (bad_alloc *)__cxa_allocate_exception(8);
        std::bad_alloc::bad_alloc(this);
        if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 00360f08 to 00360f1f has its CatchHandler @ 003611b0 */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(this,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
        }
        goto LAB_003611d8;
      }
    }
    local_78 = plVar8;
    if (((*PTR_hybridDataField_003945d8 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_hybridDataField_003945d8), iVar6 != 0)) {
      facebook::jni::JObject::getClass();
                    /* try { // try from 00360e2c to 00360e2f has its CatchHandler @ 00360ff0 */
      uVar15 = FUN_0025dae8(local_70);
      *(undefined8 *)PTR_hybridDataField_003945d0 = uVar15;
      facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
      ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
                       *)&local_70);
      __cxa_guard_release(PTR_hybridDataField_003945d8);
    }
                    /* try { // try from 00360c60 to 00360caf has its CatchHandler @ 00361150 */
    lVar10 = facebook::jni::getHybridDataFromField
                       ((JObject *)&local_78,(JField *)PTR_hybridDataField_003945d0);
    plVar8 = *(long **)(lVar10 + 0x30);
    if (plVar8 == (long *)0x0) {
LAB_00360c94:
      *(long **)(in_x8 + 0x20) = plVar8;
    }
    else {
      if (plVar8 != (long *)(lVar10 + 0x10)) {
        plVar8 = (long *)(**(code **)(*plVar8 + 0x10))();
        goto LAB_00360c94;
      }
      *(long *)(in_x8 + 0x20) = in_x8;
      (**(code **)(*plVar8 + 0x18))();
    }
    plVar8 = local_78;
    if (local_78 != (long *)0x0) {
                    /* try { // try from 00360cb8 to 00360ccb has its CatchHandler @ 00361140 */
      plVar13 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar13 + 0xb8))(plVar13,plVar8);
    }
  }
  if (plVar7 != (long *)0x0) {
                    /* try { // try from 00360cd4 to 00360ce7 has its CatchHandler @ 00361144 */
    plVar8 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar8 + 0xb8))(plVar8,plVar7);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
LAB_003611d8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003611dc  margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::removeListeners =====

/* margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::removeListeners() */

void __thiscall
margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::removeListeners
          (JHybridViewModelBooleanPropertySpec *this)

{
  long lVar1;
  int iVar2;
  _jobject *p_Var3;
  _jmethodID *p_Var4;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039e598 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039e598), iVar2 != 0)) {
                    /* try { // try from 0036125c to 00361273 has its CatchHandler @ 00361288 */
    FUN_00361824(auStack_40);
    DAT_0039e590 = FUN_0034236c(auStack_40,"removeListeners");
    __cxa_guard_release(&DAT_0039e598);
  }
  p_Var4 = *(_jmethodID **)(this + 8);
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var3,p_Var4,DAT_0039e590);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    facebook::jni::throwPendingJniExceptionAsCppException();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003612b4  FUN_003612b4 =====

void FUN_003612b4(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_003614f4(this);
  FUN_00356a9c(this + 0x70,PTR_PTR_00396df8 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00361340  FUN_00361340 =====

void FUN_00361340(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_003614f4(this);
  FUN_00356a9c(this + 0x70,PTR_PTR_00396df8 + 0x80);
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


// ===== 003613d4  FUN_003613d4 =====

void FUN_003613d4(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_003614f4(this);
  FUN_00356a9c(this + 0x70,PTR_PTR_00396df8 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00361460  FUN_00361460 =====

void FUN_00361460(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_003614f4(this);
  FUN_00356a9c(this + 0x70,PTR_PTR_00396df8 + 0x80);
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


// ===== 003614f4  FUN_003614f4 =====

void FUN_003614f4(long *param_1)

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
  
  puVar2 = PTR_vtable_00396df0;
  local_50 = (long *)&local_70;
  pppuVar3 = &local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1[2] = (long)(PTR_vtable_00396df0 + 0x118);
  *param_1 = (long)(puVar2 + 0x80);
  param_1[0x10] = (long)(puVar2 + 0x1f8);
  param_1[0xe] = (long)(puVar2 + 0x198);
  local_70 = &PTR_FUN_0038ed00;
  plStack_68 = param_1;
                    /* try { // try from 00361554 to 0036155b has its CatchHandler @ 003615d0 */
  facebook::jni::ThreadScope::WithClassLoader((function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar5 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00361588;
    lVar5 = 5;
    pppuVar3 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar3 + lVar5 * 8))();
LAB_00361588:
  lVar5 = param_1[1];
  if (lVar5 != 0) {
                    /* try { // try from 00361590 to 003615a3 has its CatchHandler @ 003615d4 */
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


// ===== 003615d8  FUN_003615d8 =====

void FUN_003615d8(void *param_1)

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


// ===== 00361610  FUN_00361610 =====

void FUN_00361610(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_0038ed00;
  puVar2[1] = uVar4;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036166c  FUN_0036166c =====

void FUN_0036166c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_0038ed00;
  param_2[1] = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003616b4  FUN_003616b4 =====

void FUN_003616b4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003616ec  FUN_003616ec =====

void FUN_003616ec(void *param_1)

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


// ===== 00361724  FUN_00361724 =====

void FUN_00361724(long param_1)

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
                    /* try { // try from 00361750 to 00361763 has its CatchHandler @ 00361790 */
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


// ===== 00361794  FUN_00361794 =====

void FUN_00361794(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00396e48) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 003617e4  FUN_003617e4 =====

undefined * FUN_003617e4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00396e50;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00361824  FUN_00361824 =====

void FUN_00361824(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00396e78 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00396e78), iVar2 != 0))
  {
                    /* try { // try from 00361894 to 003618a7 has its CatchHandler @ 003618b8 */
    facebook::jni::findClassStatic(PTR_kBaseName_00396e80);
    __cxa_guard_release(PTR_cls_00396e78);
  }
  *param_1 = *(undefined8 *)PTR_cls_00396e70;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003618e4  FUN_003618e4 =====

long FUN_003618e4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,"addListener_cxx",PTR_kDescriptor_00396e88)
  ;
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00361960  FUN_00361960 =====

void FUN_00361960(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 0036198c to 0036199f has its CatchHandler @ 003619cc */
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


// ===== 003619d0  FUN_003619d0 =====

void FUN_003619d0(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00394678 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00394678), iVar2 != 0))
  {
                    /* try { // try from 00361a40 to 00361a53 has its CatchHandler @ 00361a64 */
    facebook::jni::findClassStatic(PTR_kBaseName_00394680);
    __cxa_guard_release(PTR_cls_00394678);
  }
  *param_1 = *(undefined8 *)PTR_cls_00394670;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00361a90  FUN_00361a90 =====

void FUN_00361a90(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00361abc to 00361acf has its CatchHandler @ 00361afc */
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


// ===== 00361b00  FUN_00361b00 =====

void FUN_00361b00(undefined8 *param_1)

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
    goto LAB_00361b9c;
  }
  plVar2 = *(long **)((long)pvVar6 + 0x30);
  plVar3 = (long *)((long)pvVar6 + 0x10);
  if (plVar2 == plVar3) {
    lVar5 = 4;
LAB_00361b6c:
    (**(code **)(*plVar3 + lVar5 * 8))();
  }
  else if (plVar2 != (long *)0x0) {
    lVar5 = 5;
    plVar3 = plVar2;
    goto LAB_00361b6c;
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(pvVar6);
    return;
  }
LAB_00361b9c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00361ba0  FUN_00361ba0 =====

void FUN_00361ba0(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00394678 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00394678), iVar2 != 0))
  {
                    /* try { // try from 00361c10 to 00361c23 has its CatchHandler @ 00361c34 */
    facebook::jni::findClassStatic(PTR_kBaseName_00394680);
    __cxa_guard_release(PTR_cls_00394678);
  }
  *param_1 = *(undefined8 *)PTR_cls_00394670;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00361c60  FUN_00361c60 =====

long FUN_00361c60(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,DAT_0039e610,"<init>",PTR_kConstructorDescriptor_00396e40);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00361cdc  FUN_00361cdc =====

long FUN_00361cdc(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,DAT_0039e5e0,"<init>",PTR_kConstructorDescriptor_00396e28);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00361d58  FUN_00361d58 =====

void FUN_00361d58(long param_1)

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
      goto LAB_00361dd8;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00361db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar4 * 8))();
    return;
  }
LAB_00361dd8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00361ddc  FUN_00361ddc =====

void FUN_00361ddc(void *param_1)

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
    if (plVar2 == (long *)0x0) goto LAB_00361e2c;
    lVar5 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_00361e2c:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00361e54  FUN_00361e54 =====

long FUN_00361e54(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,param_2,PTR_kDescriptor_00394658);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00361ed8  FUN_00361ed8 =====

void FUN_00361ed8(long *param_1)

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


// ===== 00361f64  FUN_00361f64 =====

void FUN_00361f64(long *param_1)

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


// ===== 00361ff0  FUN_00361ff0 =====

void FUN_00361ff0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038ec30;
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


// ===== 00362088  FUN_00362088 =====

void FUN_00362088(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038ec30;
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


// ===== 00362114  FUN_00362114 =====

void FUN_00362114(long param_1)

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
  *puVar4 = &PTR_FUN_0038ec30;
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


// ===== 0036218c  FUN_0036218c =====

void FUN_0036218c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0038ec30;
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


// ===== 003621f0  FUN_003621f0 =====

void FUN_003621f0(long param_1)

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


// ===== 0036227c  FUN_0036227c =====

void FUN_0036227c(void *param_1)

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


// ===== 003622fc  FUN_003622fc =====

void FUN_003622fc(long param_1,undefined8 *param_2)

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
                    /* try { // try from 00362334 to 0036233f has its CatchHandler @ 003623a8 */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_0031ef0c(aeStack_98,aJStack_90);
                    /* try { // try from 0036234c to 00362357 has its CatchHandler @ 00362390 */
  FUN_00344d84(uVar2,aeStack_98);
  std::exception_ptr::~exception_ptr(aeStack_98);
  facebook::jni::JniException::~JniException(aJStack_90);
  facebook::jni::JniException::~JniException(aJStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003623d0  FUN_003623d0 =====

void FUN_003623d0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive35JHybridViewModelBooleanPropertySpec13getValueAsyncEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00362420  FUN_00362420 =====

pointer_____offset_0x10___ * FUN_00362420(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0038ec90;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00362460  FUN_00362460 =====

void FUN_00362460(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038ebb0;
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


// ===== 003624f8  FUN_003624f8 =====

void FUN_003624f8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038ebb0;
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


// ===== 00362584  FUN_00362584 =====

void FUN_00362584(long param_1)

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
  *puVar4 = &PTR_FUN_0038ebb0;
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


// ===== 003625fc  FUN_003625fc =====

void FUN_003625fc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0038ebb0;
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


// ===== 00362660  FUN_00362660 =====

void FUN_00362660(long param_1)

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


// ===== 003626ec  FUN_003626ec =====

void FUN_003626ec(void *param_1)

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


// ===== 0036276c  FUN_0036276c =====

void FUN_0036276c(long param_1,undefined8 *param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 local_34 [4];
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = *param_2;
  uVar3 = *(undefined8 *)(param_1 + 8);
  cVar2 = FUN_00345500(&local_30);
  local_34[0] = cVar2 != '\0';
  FUN_003455e8(uVar3,local_34);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003627d8  FUN_003627d8 =====

void FUN_003627d8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive35JHybridViewModelBooleanPropertySpec13getValueAsyncEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00362828  FUN_00362828 =====

pointer_____offset_0x10___ * FUN_00362828(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0038ec10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00362868  FUN_00362868 =====

void FUN_00362868(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_0038ed80;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003628ac  FUN_003628ac =====

void FUN_003628ac(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_0038ed80;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00362904  FUN_00362904 =====

void FUN_00362904(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0036293c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(param_1 + 0x18))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00362944  FUN_00362944 =====

void FUN_00362944(void *param_1)

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


// ===== 0036297c  margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::CxxPart::registerNatives =====

/* margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::CxxPart::registerNatives() */

void margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::CxxPart::registerNatives(void)

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
  puStack_58 = PTR_kDescriptor_0038e1e8;
  local_60 = PTR_s_initHybrid_0038e1e0;
  local_50 = PTR_call_0038e1f0;
  pcVar7 = (char *)operator_new(0x50);
  uVar5 = s_Lcom_margelo_nitro_rive_HybridVi_001d61c0._25_8_;
  uVar4 = s_Lcom_margelo_nitro_rive_HybridVi_001d61c0._17_8_;
  uVar3 = s_Lcom_margelo_nitro_rive_HybridVi_001d61c0._9_8_;
  uVar2 = s_Lcom_margelo_nitro_rive_HybridVi_001d61c0._1_8_;
  pcVar7[0x40] = 't';
  pcVar7[0x41] = '\0';
  *(undefined8 *)(pcVar7 + 8) = uVar3;
  *(undefined8 *)pcVar7 = uVar2;
  *(undefined8 *)(pcVar7 + 0x18) = uVar5;
  *(undefined8 *)(pcVar7 + 0x10) = uVar4;
  uVar4 = s_Lcom_margelo_nitro_rive_HybridVi_001d61c0._57_8_;
  uVar3 = s_Lcom_margelo_nitro_rive_HybridVi_001d61c0._49_8_;
  uVar2 = s_Lcom_margelo_nitro_rive_HybridVi_001d61c0._33_8_;
  *(undefined8 *)(pcVar7 + 0x28) = s_Lcom_margelo_nitro_rive_HybridVi_001d61c0._41_8_;
  *(undefined8 *)(pcVar7 + 0x20) = uVar2;
  *(undefined8 *)(pcVar7 + 0x38) = uVar4;
  *(undefined8 *)(pcVar7 + 0x30) = uVar3;
                    /* try { // try from 003629e0 to 003629e7 has its CatchHandler @ 00362a58 */
  facebook::jni::findClassLocal(pcVar7);
  operator_delete(pcVar7);
                    /* try { // try from 003629f0 to 00362a17 has its CatchHandler @ 00362a6c */
  plVar8 = (long *)facebook::jni::Environment::current();
  iVar6 = (**(code **)(*plVar8 + 0x6b8))(plVar8,local_40,&local_60,1);
  facebook::jni::throwCppExceptionIf(iVar6 != 0);
  if (local_40 != 0) {
                    /* try { // try from 00362a20 to 00362a33 has its CatchHandler @ 00362a68 */
    plVar8 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar8 + 0xb8))(plVar8,local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00362a94  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::CxxPart,margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::CxxPart,margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   (*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::CxxPart,
   margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart, void>::_javaobject*>),
   &margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::CxxPart::initHybrid,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::CxxPart,
   margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart, void>::_javaobject*,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>>::call(_JNIEnv*, _jobject*) */

undefined8
facebook::jni::detail::
FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::CxxPart,margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::CxxPart,margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>
::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  JniEnvCacher aJStack_48 [24];
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_48,param_1);
                    /* try { // try from 00362ac0 to 00362acb has its CatchHandler @ 00362afc */
  FUN_0035f88c(&local_30,param_2);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00362b48  margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::getValue =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::getValue() */

void __thiscall
margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::getValue
          (JHybridViewModelBooleanPropertySpec *this)

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


// ===== 00362b8c  margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::setValue =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::setValue(bool) */

void __thiscall
margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::setValue
          (JHybridViewModelBooleanPropertySpec *this,bool param_1)

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


// ===== 00362bd4  margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::getValueAsync =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::getValueAsync() */

void __thiscall
margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::getValueAsync
          (JHybridViewModelBooleanPropertySpec *this)

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


// ===== 00362c18  margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::set =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::set(bool) */

void __thiscall
margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::set
          (JHybridViewModelBooleanPropertySpec *this,bool param_1)

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


// ===== 00362c60  margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::addListener =====

/* virtual thunk to
   margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::addListener(std::__ndk1::function<void
   (bool)> const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::addListener
          (JHybridViewModelBooleanPropertySpec *this,function *param_1)

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


// ===== 00362ca4  margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::removeListeners =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::removeListeners() */

void __thiscall
margelo::nitro::rive::JHybridViewModelBooleanPropertySpec::removeListeners
          (JHybridViewModelBooleanPropertySpec *this)

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


// ===== 00362ce8  margelo::nitro::rive::JHybridViewModelColorPropertySpec::JavaPart::getJHybridViewModelColorPropertySpec =====

/* margelo::nitro::rive::JHybridViewModelColorPropertySpec::JavaPart::getJHybridViewModelColorPropertySpec()
    */

void __thiscall
margelo::nitro::rive::JHybridViewModelColorPropertySpec::JavaPart::
getJHybridViewModelColorPropertySpec(JavaPart *this)

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
     (lVar2 = __dynamic_cast(local_38,PTR_typeinfo_00395e60,PTR_typeinfo_00396ea8,0xffffffffffffffff
                            ), lVar2 == 0)) {
    *in_x8 = 0;
    in_x8[1] = 0;
    this_00 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00362db0 to 00362dbb has its CatchHandler @ 00362df0 */
    std::runtime_error::runtime_error
              (this_00,"Failed to downcast JHybridObject to JHybridViewModelColorPropertySpec!");
    if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* try { // try from 00362dd0 to 00362de7 has its CatchHandler @ 00362de8 */
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


// ===== 00362e2c  FUN_00362e2c =====

void FUN_00362e2c(long *param_1)

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


// ===== 00362eb8  margelo::nitro::rive::JHybridViewModelColorPropertySpec::CxxPart::initHybrid =====

/* margelo::nitro::rive::JHybridViewModelColorPropertySpec::CxxPart::initHybrid(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelColorPropertySpec::CxxPart,
   margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart, void>::_javaobject*>) */

void __thiscall
margelo::nitro::rive::JHybridViewModelColorPropertySpec::CxxPart::initHybrid
          (undefined8 *param_1,CxxPart *this)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00362f10(&local_30,*(undefined8 *)this);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00362f10  FUN_00362f10 =====

void FUN_00362f10(undefined8 *param_1,undefined8 param_2)

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
                    /* try { // try from 00362f48 to 00362f4f has its CatchHandler @ 0036302c */
  local_48 = param_2;
  margelo::nitro::JHybridObject::CxxPart::CxxPart(pCVar2,&local_48);
  *(undefined **)pCVar2 = PTR_vtable_00396eb0 + 0x10;
                    /* try { // try from 00362f60 to 00362f67 has its CatchHandler @ 00363024 */
  facebook::jni::detail::HybridData::create();
  uVar5 = *param_1;
                    /* try { // try from 00362f6c to 00362f87 has its CatchHandler @ 00363040 */
  plVar3 = (long *)facebook::jni::Environment::current();
  lVar4 = (**(code **)(*plVar3 + 200))(plVar3,uVar5);
  facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 00362f90 to 00362f9b has its CatchHandler @ 00362ff4 */
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
                    /* try { // try from 00362fbc to 00362fcf has its CatchHandler @ 0036303c */
    plVar3 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb8))(plVar3,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00363078  FUN_00363078 =====

void FUN_00363078(long *param_1)

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
                    /* try { // try from 003630b4 to 003630c7 has its CatchHandler @ 00363104 */
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


// ===== 00363108  margelo::nitro::rive::JHybridViewModelColorPropertySpec::CxxPart::createHybridObject =====

/* margelo::nitro::rive::JHybridViewModelColorPropertySpec::CxxPart::createHybridObject(facebook::jni::basic_strong_ref<margelo::nitro::JHybridObject::JavaPart,
   facebook::jni::LocalReferenceAllocator> const&) */

void margelo::nitro::rive::JHybridViewModelColorPropertySpec::CxxPart::createHybridObject
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
  
  puVar1 = PTR_target_class_00396ec8;
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*in_x1 == 0) {
LAB_00363414:
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00363420 to 0036342b has its CatchHandler @ 003635b8 */
    param_1 = (basic_strong_ref *)
              std::runtime_error::runtime_error
                        (this,
                         "Failed to cast JHybridObject::JavaPart to JHybridViewModelColorPropertySpec::JavaPart!"
                        );
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0036343c to 00363453 has its CatchHandler @ 003635b4 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_00363684;
  }
  if (((*PTR_target_class_00396ed0 & 1) == 0) &&
     (param_1 = (basic_strong_ref *)__cxa_guard_acquire(PTR_target_class_00396ed0),
     (int)param_1 != 0)) {
                    /* try { // try from 00363464 to 00363473 has its CatchHandler @ 00363578 */
    facebook::jni::findClassStatic(PTR_kBaseName_00396ed8);
    *(undefined8 *)puVar1 = local_60;
    param_1 = (basic_strong_ref *)__cxa_guard_release(PTR_target_class_00396ed0);
  }
  if (*(long *)puVar1 == 0) {
    if (*(long *)(lVar2 + 0x28) != local_58) goto LAB_00363684;
    FUN_00261580("java/lang/ClassCastException","Could not find class %s.",PTR_kBaseName_00396ed8);
LAB_003634b8:
                    /* try { // try from 003634b8 to 003634c7 has its CatchHandler @ 003635a4 */
    param_1 = (basic_strong_ref *)FUN_002615d4(local_80,&local_68);
    uVar8 = (ulong)local_80 | 1;
    if ((local_80[0] & 1) != 0) {
      uVar8 = local_70;
    }
    if (*(long *)(lVar2 + 0x28) != local_58) goto LAB_00363684;
                    /* try { // try from 003634ec to 00363507 has its CatchHandler @ 0036358c */
    FUN_0026171c("java/lang/ClassCastException","Tried to cast from %s to %s.",uVar8,
                 PTR_kBaseName_00396ed8);
  }
  else {
                    /* try { // try from 00363160 to 00363173 has its CatchHandler @ 0036360c */
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5,*in_x1);
    local_68 = lVar6;
                    /* try { // try from 0036317c to 00363193 has its CatchHandler @ 00363608 */
    plVar5 = (long *)facebook::jni::Environment::current();
    cVar4 = (**(code **)(*plVar5 + 0x58))(plVar5,lVar6,*(undefined8 *)puVar1);
    if (cVar4 == '\0') goto LAB_003634b8;
    lVar10 = *in_x1;
    if (lVar10 == 0) {
      local_88 = 0;
    }
    else {
                    /* try { // try from 003631a4 to 003631bf has its CatchHandler @ 00363610 */
      plVar5 = (long *)facebook::jni::Environment::current();
      local_88 = (**(code **)(*plVar5 + 200))(plVar5,lVar10);
      facebook::jni::throwPendingJniExceptionAsCppException();
      if (local_88 == 0) {
        pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
        param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar9);
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 00363560 to 00363577 has its CatchHandler @ 00363610 */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(pbVar9,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
        }
        goto LAB_00363684;
      }
    }
    if (lVar6 != 0) {
                    /* try { // try from 003631dc to 003631ef has its CatchHandler @ 00363604 */
      plVar5 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar5 + 0xb8))(plVar5,lVar6);
    }
    if (local_88 == 0) goto LAB_00363414;
                    /* try { // try from 003631f4 to 003631fb has its CatchHandler @ 003635f0 */
    plVar5 = (long *)operator_new(0xa8);
    puVar1 = PTR_vtable_00395e70;
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_0038f910;
    plVar11 = plVar5 + 3;
    *plVar11 = (long)(puVar1 + 0x10);
    puVar3 = PTR_PTR_00396e98;
                    /* try { // try from 0036322c to 00363247 has its CatchHandler @ 003635e8 */
    margelo::nitro::HybridObject::HybridObject((HybridObject *)(plVar5 + 5),PTR_PTR_00396e98 + 0x58)
    ;
    puVar1 = PTR_construction_vtable_00396ea0 + 0x68;
    plVar5[5] = (long)(PTR_construction_vtable_00396ea0 + 0x100);
    plVar5[3] = (long)puVar1;
                    /* try { // try from 00363260 to 0036327b has its CatchHandler @ 0036361c */
    plVar7 = (long *)facebook::jni::Environment::current();
    uVar8 = (**(code **)(*plVar7 + 200))(plVar7,local_88);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 00363280 to 0036328f has its CatchHandler @ 003635d8 */
    local_80[0] = uVar8;
    margelo::nitro::JHybridObject::JHybridObject((JHybridObject *)(plVar5 + 0x13),puVar3 + 0xa8);
    uVar8 = local_80[0];
    if (local_80[0] != 0) {
                    /* try { // try from 00363298 to 003632ab has its CatchHandler @ 00363600 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,uVar8);
    }
                    /* try { // try from 003632ac to 003632c7 has its CatchHandler @ 00363614 */
    plVar7 = (long *)facebook::jni::Environment::current();
    uVar8 = (**(code **)(*plVar7 + 200))(plVar7,local_88);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 003632cc to 003632db has its CatchHandler @ 003635c8 */
    local_80[0] = uVar8;
    FUN_00357adc(plVar5 + 0x11,puVar3 + 0x80,uVar8);
    if (uVar8 != 0) {
                    /* try { // try from 003632e0 to 003632f3 has its CatchHandler @ 003635fc */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,uVar8);
    }
    puVar3 = PTR_vtable_00396e90;
    puVar1 = PTR_vtable_00396e90 + 0x80;
    plVar5[5] = (long)(PTR_vtable_00396e90 + 0x118);
    *plVar11 = (long)puVar1;
    plVar5[0x11] = (long)(puVar3 + 0x198);
    plVar5[0x13] = (long)(puVar3 + 0x1f8);
                    /* try { // try from 0036331c to 00363337 has its CatchHandler @ 00363624 */
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
                    /* try { // try from 003633d0 to 003633e3 has its CatchHandler @ 003635f8 */
        plVar5 = (long *)facebook::jni::Environment::current();
        param_1 = (basic_strong_ref *)(**(code **)(*plVar5 + 0xb8))(plVar5,local_88);
      }
      if (*(long *)(lVar2 + 0x28) == local_58) {
        return;
      }
      goto LAB_00363684;
    }
  }
  pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
  param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar9);
  if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 00363528 to 0036353f has its CatchHandler @ 00363624 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pbVar9,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
  }
LAB_00363684:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00363688  FUN_00363688 =====

void FUN_00363688(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 003636b4 to 003636c7 has its CatchHandler @ 003636f4 */
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


// ===== 003636f8  FUN_003636f8 =====

void FUN_003636f8(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00364540();
  FUN_00356a9c(param_1 + 0x70,PTR_PTR_00396e98 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(param_1 + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(param_1 + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00363778  FUN_00363778 =====

void FUN_00363778(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00364540();
  FUN_00356a9c(param_1 + 0x70,PTR_PTR_00396e98 + 0x80);
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


// ===== 00363800  margelo::nitro::rive::JHybridViewModelColorPropertySpec::getValue =====

/* margelo::nitro::rive::JHybridViewModelColorPropertySpec::getValue() */

undefined1  [16] __thiscall
margelo::nitro::rive::JHybridViewModelColorPropertySpec::getValue
          (JHybridViewModelColorPropertySpec *this)

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
  if (((DAT_0039e658 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039e658), iVar2 != 0)) {
                    /* try { // try from 00363894 to 003638ab has its CatchHandler @ 003638c0 */
    FUN_00364870(auStack_40);
    DAT_0039e650 = FUN_002620fc(auStack_40,"getValue");
    __cxa_guard_release(&DAT_0039e658);
  }
  uVar4 = *(undefined8 *)(this + 8);
  uVar3 = facebook::jni::Environment::current();
  auVar5._0_8_ = FUN_00262180(uVar3,uVar4,DAT_0039e650);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    facebook::jni::throwPendingJniExceptionAsCppException();
    auVar5._8_8_ = 0;
    return auVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003638ec  margelo::nitro::rive::JHybridViewModelColorPropertySpec::setValue =====

/* margelo::nitro::rive::JHybridViewModelColorPropertySpec::setValue(double) */

void __thiscall
margelo::nitro::rive::JHybridViewModelColorPropertySpec::setValue
          (JHybridViewModelColorPropertySpec *this,double param_1)

{
  long lVar1;
  int iVar2;
  _jobject *p_Var3;
  _jmethodID *p_Var4;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039e668 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039e668), iVar2 != 0)) {
                    /* try { // try from 0036397c to 00363993 has its CatchHandler @ 003639a8 */
    FUN_00364870(auStack_40);
    DAT_0039e660 = FUN_0035a6d8(auStack_40,"setValue");
    __cxa_guard_release(&DAT_0039e668);
  }
  p_Var4 = *(_jmethodID **)(this + 8);
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var3,p_Var4,param_1,DAT_0039e660);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    facebook::jni::throwPendingJniExceptionAsCppException();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003639d4  margelo::nitro::rive::JHybridViewModelColorPropertySpec::getValueAsync =====

/* margelo::nitro::rive::JHybridViewModelColorPropertySpec::getValueAsync() */

void margelo::nitro::rive::JHybridViewModelColorPropertySpec::getValueAsync(void)

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
  if (((DAT_0039e678 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039e678), iVar4 != 0)) {
                    /* try { // try from 00363be4 to 00363bfb has its CatchHandler @ 00363cb8 */
    FUN_00364870(&local_90);
    DAT_0039e670 = FUN_0031e0a0(&local_90,"getValueAsync");
    __cxa_guard_release(&DAT_0039e678);
  }
  p_Var13 = *(_jmethodID **)(in_x0 + 8);
  p_Var5 = (_jobject *)facebook::jni::Environment::current();
  lVar6 = _JNIEnv::CallObjectMethod(p_Var5,p_Var13,DAT_0039e670);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_98 = lVar6;
                    /* try { // try from 00363a38 to 00363a3f has its CatchHandler @ 00363d5c */
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
                    /* try { // try from 00363a60 to 00363a67 has its CatchHandler @ 00363d4c */
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
                    /* try { // try from 00363c30 to 00363c33 has its CatchHandler @ 00363c9c */
    uVar9 = FUN_0031e19c(local_90);
    *(undefined8 *)PTR_hybridDataField_00396030 = uVar9;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 00363a90 to 00363aa3 has its CatchHandler @ 00363d68 */
  puVar2 = PTR_hybridDataField_00396030;
  uVar9 = facebook::jni::getHybridDataFromField
                    ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uStack_88 = *in_x8;
  local_80 = in_x8[1];
  if (local_80 != 0) {
    FUN_00259a00(1,local_80 + 8);
  }
  local_90 = &PTR_FUN_0038f740;
                    /* try { // try from 00363ad8 to 00363adf has its CatchHandler @ 00363d0c */
  local_70 = &local_90;
  FUN_0031e2bc(uVar9,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar11 = &local_90;
LAB_00363b00:
    (*(code *)(*pppuVar11)[lVar6])();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar6 = 5;
    pppuVar11 = local_70;
    goto LAB_00363b00;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 00363c78 to 00363c7b has its CatchHandler @ 00363c98 */
    uVar9 = FUN_0031e19c(local_90);
    *(undefined8 *)puVar2 = uVar9;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 00363b14 to 00363b23 has its CatchHandler @ 00363d68 */
  uVar10 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uVar9 = *in_x8;
  lVar6 = in_x8[1];
  if (lVar6 != 0) {
    FUN_00259a00(1,lVar6 + 8);
  }
  local_90 = &PTR_FUN_0038f7c0;
                    /* try { // try from 00363b58 to 00363b5f has its CatchHandler @ 00363ccc */
  uStack_88 = uVar9;
  local_80 = lVar6;
  local_70 = &local_90;
  FUN_0031e5cc(uVar10,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar11 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_00363b8c;
    lVar6 = 5;
    pppuVar11 = local_70;
  }
  (*(code *)(*pppuVar11)[lVar6])();
LAB_00363b8c:
  lVar6 = local_98;
  if (local_98 != 0) {
                    /* try { // try from 00363b94 to 00363ba7 has its CatchHandler @ 00363d64 */
    plVar12 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar12 + 0xb8))(plVar12,lVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00363d98  margelo::nitro::rive::JHybridViewModelColorPropertySpec::set =====

/* margelo::nitro::rive::JHybridViewModelColorPropertySpec::set(double) */

void __thiscall
margelo::nitro::rive::JHybridViewModelColorPropertySpec::set
          (JHybridViewModelColorPropertySpec *this,double param_1)

{
  long lVar1;
  int iVar2;
  _jobject *p_Var3;
  _jmethodID *p_Var4;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039e688 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039e688), iVar2 != 0)) {
                    /* try { // try from 00363e28 to 00363e3f has its CatchHandler @ 00363e54 */
    FUN_00364870(auStack_40);
    DAT_0039e680 = FUN_0035a6d8(auStack_40,&DAT_001d4cc6);
    __cxa_guard_release(&DAT_0039e688);
  }
  p_Var4 = *(_jmethodID **)(this + 8);
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var3,p_Var4,param_1,DAT_0039e680);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    facebook::jni::throwPendingJniExceptionAsCppException();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00363e80  margelo::nitro::rive::JHybridViewModelColorPropertySpec::addListener =====

/* margelo::nitro::rive::JHybridViewModelColorPropertySpec::addListener(std::__ndk1::function<void
   (double)> const&) */

void margelo::nitro::rive::JHybridViewModelColorPropertySpec::addListener(function *param_1)

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
  if (((DAT_0039e698 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039e698), iVar3 != 0)) {
                    /* try { // try from 00364084 to 0036409b has its CatchHandler @ 00364198 */
    FUN_00364870(&local_40);
    DAT_0039e690 = FUN_00358e08(&local_40,"addListener_cxx");
    __cxa_guard_release(&DAT_0039e698);
  }
  p_Var8 = *(_jmethodID **)(param_1 + 8);
  FUN_00358e8c(&local_40);
  lVar7 = local_40;
  local_48 = local_40;
                    /* try { // try from 00363ed4 to 00363ef3 has its CatchHandler @ 00364200 */
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::CallObjectMethod(p_Var4,p_Var8,DAT_0039e690,lVar7);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (lVar7 != 0) {
                    /* try { // try from 00363efc to 00363f0f has its CatchHandler @ 003641dc */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,lVar7);
  }
  if (((*PTR_cls_003945e8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_cls_003945e8), iVar3 != 0))
  {
                    /* try { // try from 003640c4 to 003640d7 has its CatchHandler @ 00364184 */
    facebook::jni::findClassStatic(PTR_kBaseName_003945f0);
    __cxa_guard_release(PTR_cls_003945e8);
  }
  uVar9 = *(undefined8 *)PTR_cls_003945e0;
                    /* try { // try from 00363f2c to 00363f47 has its CatchHandler @ 003641f8 */
  plVar6 = (long *)facebook::jni::Environment::current();
  cVar2 = (**(code **)(*plVar6 + 0x100))(plVar6,lVar5,uVar9);
  if (cVar2 == '\0') {
                    /* try { // try from 00364034 to 0036403f has its CatchHandler @ 003641cc */
    FUN_003595b8(&local_40,lVar5);
    local_48 = local_40;
    local_40 = 0;
    local_50 = 0;
                    /* try { // try from 0036404c to 00364053 has its CatchHandler @ 003641ac */
    FUN_00359668();
    FUN_0035971c(&local_48);
    FUN_003597d8(&local_50);
    FUN_00359848(&local_40);
  }
  else {
    lVar7 = lVar5;
    if (lVar5 != 0) {
                    /* try { // try from 00363f54 to 00363f6f has its CatchHandler @ 003641fc */
      plVar6 = (long *)facebook::jni::Environment::current();
      lVar7 = (**(code **)(*plVar6 + 200))(plVar6,lVar5);
      facebook::jni::throwPendingJniExceptionAsCppException();
      if (lVar7 == 0) {
        this = (bad_alloc *)__cxa_allocate_exception(8);
        if (*(long *)(lVar1 + 0x28) == local_38) {
          std::bad_alloc::bad_alloc(this);
                    /* try { // try from 00364150 to 00364167 has its CatchHandler @ 003641fc */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(this,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
        }
        goto LAB_00364224;
      }
    }
    local_48 = lVar7;
    if (((*PTR_hybridDataField_003945d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_hybridDataField_003945d8), iVar3 != 0)) {
      facebook::jni::JObject::getClass();
                    /* try { // try from 00364108 to 0036410b has its CatchHandler @ 00364168 */
      uVar9 = FUN_0025dae8(local_40);
      *(undefined8 *)PTR_hybridDataField_003945d0 = uVar9;
      facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
      ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
                       *)&local_40);
      __cxa_guard_release(PTR_hybridDataField_003945d8);
    }
                    /* try { // try from 00363f88 to 00363fd7 has its CatchHandler @ 003641e0 */
    lVar7 = facebook::jni::getHybridDataFromField
                      ((JObject *)&local_48,(JField *)PTR_hybridDataField_003945d0);
    plVar6 = *(long **)(lVar7 + 0x30);
    if (plVar6 == (long *)0x0) {
LAB_00363fbc:
      *(long **)(in_x8 + 0x20) = plVar6;
    }
    else {
      if (plVar6 != (long *)(lVar7 + 0x10)) {
        plVar6 = (long *)(**(code **)(*plVar6 + 0x10))();
        goto LAB_00363fbc;
      }
      *(long *)(in_x8 + 0x20) = in_x8;
      (**(code **)(*plVar6 + 0x18))();
    }
    lVar7 = local_48;
    if (local_48 != 0) {
                    /* try { // try from 00363fe0 to 00363ff3 has its CatchHandler @ 003641d4 */
      plVar6 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,lVar7);
    }
  }
  if (lVar5 != 0) {
                    /* try { // try from 00363ffc to 0036400f has its CatchHandler @ 003641d8 */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,lVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_00364224:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00364228  margelo::nitro::rive::JHybridViewModelColorPropertySpec::removeListeners =====

/* margelo::nitro::rive::JHybridViewModelColorPropertySpec::removeListeners() */

void __thiscall
margelo::nitro::rive::JHybridViewModelColorPropertySpec::removeListeners
          (JHybridViewModelColorPropertySpec *this)

{
  long lVar1;
  int iVar2;
  _jobject *p_Var3;
  _jmethodID *p_Var4;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039e6a8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039e6a8), iVar2 != 0)) {
                    /* try { // try from 003642a8 to 003642bf has its CatchHandler @ 003642d4 */
    FUN_00364870(auStack_40);
    DAT_0039e6a0 = FUN_0034236c(auStack_40,"removeListeners");
    __cxa_guard_release(&DAT_0039e6a8);
  }
  p_Var4 = *(_jmethodID **)(this + 8);
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var3,p_Var4,DAT_0039e6a0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    facebook::jni::throwPendingJniExceptionAsCppException();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00364300  FUN_00364300 =====

void FUN_00364300(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_00364540(this);
  FUN_00356a9c(this + 0x70,PTR_PTR_00396e98 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036438c  FUN_0036438c =====

void FUN_0036438c(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_00364540(this);
  FUN_00356a9c(this + 0x70,PTR_PTR_00396e98 + 0x80);
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


// ===== 00364420  FUN_00364420 =====

void FUN_00364420(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_00364540(this);
  FUN_00356a9c(this + 0x70,PTR_PTR_00396e98 + 0x80);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x80));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003644ac  FUN_003644ac =====

void FUN_003644ac(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_00364540(this);
  FUN_00356a9c(this + 0x70,PTR_PTR_00396e98 + 0x80);
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


// ===== 00364540  FUN_00364540 =====

void FUN_00364540(long *param_1)

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
  
  puVar2 = PTR_vtable_00396e90;
  local_50 = (long *)&local_70;
  pppuVar3 = &local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1[2] = (long)(PTR_vtable_00396e90 + 0x118);
  *param_1 = (long)(puVar2 + 0x80);
  param_1[0x10] = (long)(puVar2 + 0x1f8);
  param_1[0xe] = (long)(puVar2 + 0x198);
  local_70 = &PTR_FUN_0038f890;
  plStack_68 = param_1;
                    /* try { // try from 003645a0 to 003645a7 has its CatchHandler @ 0036461c */
  facebook::jni::ThreadScope::WithClassLoader((function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar5 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_003645d4;
    lVar5 = 5;
    pppuVar3 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar3 + lVar5 * 8))();
LAB_003645d4:
  lVar5 = param_1[1];
  if (lVar5 != 0) {
                    /* try { // try from 003645dc to 003645ef has its CatchHandler @ 00364620 */
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


// ===== 00364624  FUN_00364624 =====

void FUN_00364624(void *param_1)

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


// ===== 0036465c  FUN_0036465c =====

void FUN_0036465c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_0038f890;
  puVar2[1] = uVar4;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003646b8  FUN_003646b8 =====

void FUN_003646b8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_0038f890;
  param_2[1] = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00364700  FUN_00364700 =====

void FUN_00364700(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00364738  FUN_00364738 =====

void FUN_00364738(void *param_1)

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


// ===== 00364770  FUN_00364770 =====

void FUN_00364770(long param_1)

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
                    /* try { // try from 0036479c to 003647af has its CatchHandler @ 003647dc */
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


// ===== 003647e0  FUN_003647e0 =====

void FUN_003647e0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00396eb8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00364830  FUN_00364830 =====

undefined * FUN_00364830(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00396ec0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00364870  FUN_00364870 =====

void FUN_00364870(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00396ee8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00396ee8), iVar2 != 0))
  {
                    /* try { // try from 003648e0 to 003648f3 has its CatchHandler @ 00364904 */
    facebook::jni::findClassStatic(PTR_kBaseName_00396ef0);
    __cxa_guard_release(PTR_cls_00396ee8);
  }
  *param_1 = *(undefined8 *)PTR_cls_00396ee0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00364930  FUN_00364930 =====

void FUN_00364930(long *param_1)

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


// ===== 003649bc  FUN_003649bc =====

void FUN_003649bc(long *param_1)

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


// ===== 00364a48  FUN_00364a48 =====

void FUN_00364a48(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038f7c0;
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


// ===== 00364ae0  FUN_00364ae0 =====

void FUN_00364ae0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038f7c0;
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


// ===== 00364b6c  FUN_00364b6c =====

void FUN_00364b6c(long param_1)

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
  *puVar4 = &PTR_FUN_0038f7c0;
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


// ===== 00364be4  FUN_00364be4 =====

void FUN_00364be4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0038f7c0;
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


// ===== 00364c48  FUN_00364c48 =====

void FUN_00364c48(long param_1)

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


// ===== 00364cd4  FUN_00364cd4 =====

void FUN_00364cd4(void *param_1)

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


// ===== 00364d54  FUN_00364d54 =====

void FUN_00364d54(long param_1,undefined8 *param_2)

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
                    /* try { // try from 00364d8c to 00364d97 has its CatchHandler @ 00364e00 */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_0031ef0c(aeStack_98,aJStack_90);
                    /* try { // try from 00364da4 to 00364daf has its CatchHandler @ 00364de8 */
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


// ===== 00364e28  FUN_00364e28 =====

void FUN_00364e28(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive33JHybridViewModelColorPropertySpec13getValueAsyncEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00364e78  FUN_00364e78 =====

pointer_____offset_0x10___ * FUN_00364e78(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0038f820;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00364eb8  FUN_00364eb8 =====

void FUN_00364eb8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038f740;
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


// ===== 00364f50  FUN_00364f50 =====

void FUN_00364f50(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038f740;
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


// ===== 00364fdc  FUN_00364fdc =====

void FUN_00364fdc(long param_1)

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
  *puVar4 = &PTR_FUN_0038f740;
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


// ===== 00365054  FUN_00365054 =====

void FUN_00365054(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0038f740;
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


// ===== 003650b8  FUN_003650b8 =====

void FUN_003650b8(long param_1)

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


// ===== 00365144  FUN_00365144 =====

void FUN_00365144(void *param_1)

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


// ===== 003651c4  FUN_003651c4 =====

void FUN_003651c4(long param_1,undefined8 *param_2)

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


// ===== 00365228  FUN_00365228 =====

void FUN_00365228(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive33JHybridViewModelColorPropertySpec13getValueAsyncEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00365278  FUN_00365278 =====

pointer_____offset_0x10___ * FUN_00365278(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0038f7a0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003652b8  FUN_003652b8 =====

void FUN_003652b8(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_0038f910;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003652fc  FUN_003652fc =====

void FUN_003652fc(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_0038f910;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00365354  FUN_00365354 =====

void FUN_00365354(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0036538c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(param_1 + 0x18))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00365394  FUN_00365394 =====

void FUN_00365394(void *param_1)

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


// ===== 003653cc  margelo::nitro::rive::JHybridViewModelColorPropertySpec::CxxPart::registerNatives =====

/* margelo::nitro::rive::JHybridViewModelColorPropertySpec::CxxPart::registerNatives() */

void margelo::nitro::rive::JHybridViewModelColorPropertySpec::CxxPart::registerNatives(void)

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
  puStack_58 = PTR_kDescriptor_0038edc8;
  local_60 = PTR_s_initHybrid_0038edc0;
  local_50 = PTR_call_0038edd0;
  pcVar9 = (char *)operator_new(0x40);
  uVar7 = s_Lcom_margelo_nitro_rive_HybridVi_001d4de8._33_8_;
  uVar6 = s_Lcom_margelo_nitro_rive_HybridVi_001d4de8._25_8_;
  uVar5 = s_Lcom_margelo_nitro_rive_HybridVi_001d4de8._17_8_;
  uVar4 = s_Lcom_margelo_nitro_rive_HybridVi_001d4de8._9_8_;
  uVar3 = s_Lcom_margelo_nitro_rive_HybridVi_001d4de8._1_8_;
  uVar2 = CONCAT17(s_Lcom_margelo_nitro_rive_HybridVi_001d4de8[0x30],
                   s_Lcom_margelo_nitro_rive_HybridVi_001d4de8._41_7_);
  pcVar9[0x3f] = '\0';
  *(undefined8 *)(pcVar9 + 0x28) = uVar2;
  *(undefined8 *)(pcVar9 + 0x20) = uVar7;
  *(undefined8 *)(pcVar9 + 8) = uVar4;
  *(undefined8 *)pcVar9 = uVar3;
  *(undefined8 *)(pcVar9 + 0x18) = uVar6;
  *(undefined8 *)(pcVar9 + 0x10) = uVar5;
  uVar2 = CONCAT71(s_Lcom_margelo_nitro_rive_HybridVi_001d4de8._49_7_,
                   s_Lcom_margelo_nitro_rive_HybridVi_001d4de8[0x30]);
  *(undefined8 *)(pcVar9 + 0x37) = s_Lcom_margelo_nitro_rive_HybridVi_001d4de8._56_8_;
  *(undefined8 *)(pcVar9 + 0x2f) = uVar2;
                    /* try { // try from 00365434 to 0036543b has its CatchHandler @ 003654ac */
  facebook::jni::findClassLocal(pcVar9);
  operator_delete(pcVar9);
                    /* try { // try from 00365444 to 0036546b has its CatchHandler @ 003654c0 */
  plVar10 = (long *)facebook::jni::Environment::current();
  iVar8 = (**(code **)(*plVar10 + 0x6b8))(plVar10,local_40,&local_60,1);
  facebook::jni::throwCppExceptionIf(iVar8 != 0);
  if (local_40 != 0) {
                    /* try { // try from 00365474 to 00365487 has its CatchHandler @ 003654bc */
    plVar10 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar10 + 0xb8))(plVar10,local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003654e8  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelColorPropertySpec::CxxPart,margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridViewModelColorPropertySpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelColorPropertySpec::CxxPart,margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   (*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelColorPropertySpec::CxxPart,
   margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart, void>::_javaobject*>),
   &margelo::nitro::rive::JHybridViewModelColorPropertySpec::CxxPart::initHybrid,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelColorPropertySpec::CxxPart,
   margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart, void>::_javaobject*,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>>::call(_JNIEnv*, _jobject*) */

undefined8
facebook::jni::detail::
FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelColorPropertySpec::CxxPart,margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridViewModelColorPropertySpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelColorPropertySpec::CxxPart,margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelPropertySpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>
::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  JniEnvCacher aJStack_48 [24];
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_48,param_1);
                    /* try { // try from 00365514 to 0036551f has its CatchHandler @ 00365550 */
  FUN_00362f10(&local_30,param_2);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036559c  margelo::nitro::rive::JHybridViewModelColorPropertySpec::getValue =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelColorPropertySpec::getValue() */

void __thiscall
margelo::nitro::rive::JHybridViewModelColorPropertySpec::getValue
          (JHybridViewModelColorPropertySpec *this)

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


// ===== 003655e0  margelo::nitro::rive::JHybridViewModelColorPropertySpec::setValue =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelColorPropertySpec::setValue(double) */

void __thiscall
margelo::nitro::rive::JHybridViewModelColorPropertySpec::setValue
          (JHybridViewModelColorPropertySpec *this,double param_1)

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


