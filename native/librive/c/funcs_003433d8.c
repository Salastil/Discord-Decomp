// ===== 003433d8  FUN_003433d8 =====

void FUN_003433d8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038b288;
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


// ===== 00343470  FUN_00343470 =====

void FUN_00343470(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038b288;
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


// ===== 003434fc  FUN_003434fc =====

void FUN_003434fc(long param_1)

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
  *puVar4 = &PTR_FUN_0038b288;
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


// ===== 00343574  FUN_00343574 =====

void FUN_00343574(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0038b288;
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


// ===== 003435d8  FUN_003435d8 =====

void FUN_003435d8(long param_1)

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


// ===== 00343664  FUN_00343664 =====

void FUN_00343664(void *param_1)

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


// ===== 003436e4  FUN_003436e4 =====

void FUN_003436e4(long param_1,undefined8 *param_2)

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
                    /* try { // try from 0034371c to 00343727 has its CatchHandler @ 00343790 */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_0031ef0c(aeStack_98,aJStack_90);
                    /* try { // try from 00343734 to 0034373f has its CatchHandler @ 00343778 */
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


// ===== 003437b8  FUN_003437b8 =====

void FUN_003437b8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive19JHybridRiveViewSpec5pauseEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00343808  FUN_00343808 =====

pointer_____offset_0x10___ * FUN_00343808(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0038b2e8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00343848  FUN_00343848 =====

void FUN_00343848(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038b208;
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


// ===== 003438e0  FUN_003438e0 =====

void FUN_003438e0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038b208;
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


// ===== 0034396c  FUN_0034396c =====

void FUN_0034396c(long param_1)

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
  *puVar4 = &PTR_FUN_0038b208;
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


// ===== 003439e4  FUN_003439e4 =====

void FUN_003439e4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0038b208;
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


// ===== 00343a48  FUN_00343a48 =====

void FUN_00343a48(long param_1)

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


// ===== 00343ad4  FUN_00343ad4 =====

void FUN_00343ad4(void *param_1)

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


// ===== 00343b54  FUN_00343b54 =====

void FUN_00343b54(long param_1)

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


// ===== 00343b90  FUN_00343b90 =====

void FUN_00343b90(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive19JHybridRiveViewSpec5pauseEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00343be0  FUN_00343be0 =====

pointer_____offset_0x10___ * FUN_00343be0(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0038b268;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00343c20  FUN_00343c20 =====

void FUN_00343c20(long *param_1)

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


// ===== 00343cac  FUN_00343cac =====

void FUN_00343cac(long *param_1)

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


// ===== 00343d38  FUN_00343d38 =====

void FUN_00343d38(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038b188;
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


// ===== 00343dd0  FUN_00343dd0 =====

void FUN_00343dd0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038b188;
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


// ===== 00343e5c  FUN_00343e5c =====

void FUN_00343e5c(long param_1)

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
  *puVar4 = &PTR_FUN_0038b188;
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


// ===== 00343ed4  FUN_00343ed4 =====

void FUN_00343ed4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0038b188;
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


// ===== 00343f38  FUN_00343f38 =====

void FUN_00343f38(long param_1)

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


// ===== 00343fc4  FUN_00343fc4 =====

void FUN_00343fc4(void *param_1)

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


// ===== 00344044  FUN_00344044 =====

void FUN_00344044(long param_1,undefined8 *param_2)

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
                    /* try { // try from 0034407c to 00344087 has its CatchHandler @ 003440f0 */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_0031ef0c(aeStack_98,aJStack_90);
                    /* try { // try from 00344094 to 0034409f has its CatchHandler @ 003440d8 */
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


// ===== 00344118  FUN_00344118 =====

void FUN_00344118(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive19JHybridRiveViewSpec4playEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00344168  FUN_00344168 =====

pointer_____offset_0x10___ * FUN_00344168(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0038b1e8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003441a8  FUN_003441a8 =====

void FUN_003441a8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038b108;
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


// ===== 00344240  FUN_00344240 =====

void FUN_00344240(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038b108;
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


// ===== 003442cc  FUN_003442cc =====

void FUN_003442cc(long param_1)

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
  *puVar4 = &PTR_FUN_0038b108;
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


// ===== 00344344  FUN_00344344 =====

void FUN_00344344(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0038b108;
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


// ===== 003443a8  FUN_003443a8 =====

void FUN_003443a8(long param_1)

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


// ===== 00344434  FUN_00344434 =====

void FUN_00344434(void *param_1)

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


// ===== 003444b4  FUN_003444b4 =====

void FUN_003444b4(long param_1)

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


// ===== 003444f0  FUN_003444f0 =====

void FUN_003444f0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive19JHybridRiveViewSpec4playEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00344540  FUN_00344540 =====

pointer_____offset_0x10___ * FUN_00344540(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0038b168;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00344580  FUN_00344580 =====

long FUN_00344580(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,param_2,PTR_kDescriptor_00396930);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00344604  FUN_00344604 =====

void FUN_00344604(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00344630 to 00344643 has its CatchHandler @ 00344670 */
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


// ===== 00344674  FUN_00344674 =====

long FUN_00344674(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,param_2,PTR_kDescriptor_00396928);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003446f8  FUN_003446f8 =====

void FUN_003446f8(long *param_1)

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


// ===== 00344784  FUN_00344784 =====

void FUN_00344784(undefined8 *param_1)

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
    FUN_00345900(pvVar3);
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      operator_delete(pvVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003447fc  FUN_003447fc =====

void FUN_003447fc(long *param_1)

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


// ===== 00344888  FUN_00344888 =====

void FUN_00344888(long *param_1)

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


// ===== 00344914  FUN_00344914 =====

void FUN_00344914(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038b088;
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


// ===== 003449ac  FUN_003449ac =====

void FUN_003449ac(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038b088;
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


// ===== 00344a38  FUN_00344a38 =====

void FUN_00344a38(long param_1)

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
  *puVar4 = &PTR_FUN_0038b088;
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


// ===== 00344ab0  FUN_00344ab0 =====

void FUN_00344ab0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0038b088;
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


// ===== 00344b14  FUN_00344b14 =====

void FUN_00344b14(long param_1)

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


// ===== 00344ba0  FUN_00344ba0 =====

void FUN_00344ba0(void *param_1)

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


// ===== 00344c20  FUN_00344c20 =====

void FUN_00344c20(long param_1,undefined8 *param_2)

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
                    /* try { // try from 00344c58 to 00344c63 has its CatchHandler @ 00344ccc */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_0031ef0c(aeStack_98,aJStack_90);
                    /* try { // try from 00344c70 to 00344c7b has its CatchHandler @ 00344cb4 */
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


// ===== 00344cf4  FUN_00344cf4 =====

void FUN_00344cf4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive19JHybridRiveViewSpec14awaitViewReadyEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00344d44  FUN_00344d44 =====

pointer_____offset_0x10___ * FUN_00344d44(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0038b0e8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00344d84  FUN_00344d84 =====

void FUN_00344d84(exception_ptr *param_1,exception_ptr *param_2)

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
    FUN_00264e5c(local_60,*(undefined8 *)(PTR_typeinfo_00395360 + 8),1);
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00344f38 to 00344f4b has its CatchHandler @ 00345014 */
    std::__ndk1::operator+("Cannot reject Promise<",(basic_string *)local_60);
                    /* try { // try from 00344f4c to 00344f5f has its CatchHandler @ 00344ffc */
    FUN_00263450(abStack_78,auStack_90,"> with a null exception_ptr!");
                    /* try { // try from 00344f64 to 00344f9b has its CatchHandler @ 00344fc8 */
    std::runtime_error::runtime_error(this,abStack_78);
    if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_00345048;
  }
  std::__ndk1::mutex::lock();
  uVar2 = *(uint *)(param_1 + 8);
  if (uVar2 == 0xffffffff) {
LAB_00344e08:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    std::exception_ptr::exception_ptr(param_1,param_2);
    *(undefined4 *)(param_1 + 8) = 2;
  }
  else {
    if (uVar2 != 2) {
                    /* try { // try from 00344dfc to 00344e07 has its CatchHandler @ 00344fb0 */
      (*(code *)(&PTR_FUN_0038afe0)[uVar2])(local_60,param_1);
      goto LAB_00344e08;
    }
    std::exception_ptr::operator=(param_1,param_2);
  }
  lVar1 = *(long *)(param_1 + 0x30);
  for (lVar6 = *(long *)(param_1 + 0x28); lVar6 != lVar1; lVar6 = lVar6 + 0x30) {
    plVar4 = *(long **)(lVar6 + 0x20);
    if (plVar4 == (long *)0x0) {
      if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 00344fac to 00344faf has its CatchHandler @ 00344fb8 */
        FUN_0025cd00();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00344dfc with catch @ 00344fb0
                        */
        FUN_0025ad9c();
      }
      goto LAB_00345048;
    }
                    /* try { // try from 00344e40 to 00344e47 has its CatchHandler @ 00344fb4 */
    (**(code **)(*plVar4 + 0x30))(plVar4,param_2);
  }
  plVar4 = *(long **)(param_1 + 0x10);
  plVar7 = *(long **)(param_1 + 0x18);
LAB_00344e70:
  if (plVar7 != plVar4) {
    plVar5 = (long *)plVar7[-2];
    plVar7 = plVar7 + -6;
    if (plVar7 != plVar5) goto code_r0x00344e88;
    lVar6 = 4;
    plVar5 = plVar7;
    goto LAB_00344e64;
  }
  plVar7 = *(long **)(param_1 + 0x28);
  plVar5 = *(long **)(param_1 + 0x30);
  *(long **)(param_1 + 0x18) = plVar4;
joined_r0x00344ea0:
  if (plVar5 != plVar7) {
    plVar4 = (long *)plVar5[-2];
    plVar5 = plVar5 + -6;
    if (plVar5 != plVar4) goto code_r0x00344f08;
    lVar6 = 4;
    plVar4 = plVar5;
    goto LAB_00344ee0;
  }
  *(long **)(param_1 + 0x30) = plVar7;
  std::__ndk1::mutex::unlock();
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
LAB_00345048:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00344e88:
  if (plVar5 != (long *)0x0) {
    lVar6 = 5;
LAB_00344e64:
    (**(code **)(*plVar5 + lVar6 * 8))();
  }
  goto LAB_00344e70;
code_r0x00344f08:
  if (plVar4 != (long *)0x0) {
    lVar6 = 5;
LAB_00344ee0:
    (**(code **)(*plVar4 + lVar6 * 8))();
  }
  goto joined_r0x00344ea0;
}


// ===== 0034504c  FUN_0034504c =====

void FUN_0034504c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00345084  FUN_00345084 =====

void FUN_00345084(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003450bc  FUN_003450bc =====

void FUN_003450bc(undefined8 param_1,exception_ptr *param_2)

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


// ===== 003450f8  FUN_003450f8 =====

void FUN_003450f8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038b008;
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


// ===== 00345190  FUN_00345190 =====

void FUN_00345190(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038b008;
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


// ===== 0034521c  FUN_0034521c =====

void FUN_0034521c(long param_1)

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
  *puVar4 = &PTR_FUN_0038b008;
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


// ===== 00345294  FUN_00345294 =====

void FUN_00345294(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0038b008;
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


// ===== 003452f8  FUN_003452f8 =====

void FUN_003452f8(long param_1)

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


// ===== 00345384  FUN_00345384 =====

void FUN_00345384(void *param_1)

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


// ===== 00345404  FUN_00345404 =====

void FUN_00345404(long param_1,undefined8 *param_2)

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


// ===== 00345470  FUN_00345470 =====

void FUN_00345470(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive19JHybridRiveViewSpec14awaitViewReadyEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 003454c0  FUN_003454c0 =====

pointer_____offset_0x10___ * FUN_003454c0(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0038b068;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00345500  FUN_00345500 =====

undefined4 FUN_00345500(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  _jobject *p_Var5;
  undefined8 uVar6;
  _jmethodID *p_Var7;
  JClass aJStack_40 [8];
  long local_38;
  
  puVar2 = PTR_method_00396880;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_method_00396888 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_method_00396888), iVar4 != 0)) {
                    /* try { // try from 00345590 to 003455a7 has its CatchHandler @ 003455bc */
    FUN_00324258(aJStack_40);
    uVar6 = facebook::jni::JClass::getMethod<unsigned_char()>(aJStack_40,"booleanValue");
    *(undefined8 *)puVar2 = uVar6;
    __cxa_guard_release(PTR_method_00396888);
  }
  p_Var7 = (_jmethodID *)*param_1;
  p_Var5 = (_jobject *)facebook::jni::Environment::current();
  uVar3 = _JNIEnv::CallBooleanMethod(p_Var5,p_Var7,*(undefined8 *)puVar2);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003455e8  FUN_003455e8 =====

void FUN_003455e8(undefined1 *param_1,undefined1 *param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined1 uVar7;
  long lVar8;
  undefined1 uStack_39;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  std::__ndk1::mutex::lock();
  uVar2 = *(uint *)(param_1 + 8);
  if (uVar2 != 0xffffffff) {
    if (uVar2 == 1) {
      uVar7 = *param_2;
      goto LAB_00345658;
    }
                    /* try { // try from 00345640 to 0034564b has its CatchHandler @ 00345788 */
    (*(code *)(&PTR_FUN_0038afe0)[uVar2])(&uStack_39,param_1);
  }
  uVar7 = *param_2;
  *(undefined4 *)(param_1 + 8) = 1;
LAB_00345658:
  *param_1 = uVar7;
  plVar6 = *(long **)(param_1 + 0x10);
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar6 != plVar1) {
    do {
      if (*(int *)(param_1 + 8) != 1) {
LAB_00345774:
        if (*(long *)(lVar3 + 0x28) == local_38) {
          FUN_002a9bc8();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00345640 with catch @ 00345788
                        */
          FUN_0025ad9c();
        }
        goto LAB_003457b4;
      }
      plVar4 = (long *)plVar6[4];
      if (plVar4 == (long *)0x0) {
        if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 00345770 to 00345787 has its CatchHandler @ 00345790 */
          FUN_0025cd00();
          goto LAB_00345774;
        }
        goto LAB_003457b4;
      }
                    /* try { // try from 00345684 to 0034568b has its CatchHandler @ 0034578c */
      (**(code **)(*plVar4 + 0x30))(plVar4,param_1);
      plVar6 = plVar6 + 6;
    } while (plVar6 != plVar1);
    plVar1 = *(long **)(param_1 + 0x10);
    plVar4 = *(long **)(param_1 + 0x18);
    plVar6 = plVar4;
joined_r0x003456a0:
    if (plVar4 != plVar1) {
      plVar5 = (long *)plVar4[-2];
      plVar4 = plVar4 + -6;
      plVar6 = plVar1;
      if (plVar4 != plVar5) goto code_r0x003456d4;
      lVar8 = 4;
      plVar5 = plVar4;
      goto LAB_003456b0;
    }
  }
  plVar1 = *(long **)(param_1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x30);
  *(long **)(param_1 + 0x18) = plVar6;
joined_r0x003456f0:
  if (plVar4 == plVar1) {
    *(long **)(param_1 + 0x30) = plVar1;
    std::__ndk1::mutex::unlock();
    if (*(long *)(lVar3 + 0x28) == local_38) {
      return;
    }
LAB_003457b4:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  plVar6 = (long *)plVar4[-2];
  plVar4 = plVar4 + -6;
  if (plVar4 != plVar6) goto code_r0x00345754;
  lVar8 = 4;
  plVar6 = plVar4;
  goto LAB_0034572c;
code_r0x003456d4:
  if (plVar5 != (long *)0x0) {
    lVar8 = 5;
LAB_003456b0:
    (**(code **)(*plVar5 + lVar8 * 8))();
  }
  goto joined_r0x003456a0;
code_r0x00345754:
  if (plVar6 != (long *)0x0) {
    lVar8 = 5;
LAB_0034572c:
    (**(code **)(*plVar6 + lVar8 * 8))();
  }
  goto joined_r0x003456f0;
}


// ===== 003457b8  FUN_003457b8 =====

void FUN_003457b8(__shared_weak_count *param_1)

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


// ===== 00345804  FUN_00345804 =====

void FUN_00345804(long param_1)

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
    FUN_00345900(pvVar3);
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      operator_delete(pvVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00345878  FUN_00345878 =====

void FUN_00345878(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00396838) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 003458c8  FUN_003458c8 =====

void FUN_003458c8(void *param_1)

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


// ===== 00345900  FUN_00345900 =====

void FUN_00345900(long param_1)

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
  if (*(int *)(param_1 + 8) == 0) {
                    /* try { // try from 00345a44 to 00345ad3 has its CatchHandler @ 00345b20 */
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc
              (local_80,"Timeouted: Promise<");
    FUN_00264e5c(local_98,*(undefined8 *)(PTR_typeinfo_00395360 + 8),0);
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
    FUN_00344d84(param_1,local_68);
    std::exception_ptr::~exception_ptr(local_68);
    std::runtime_error::~runtime_error(arStack_a8);
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  std::__ndk1::mutex::~mutex((mutex *)(param_1 + 0x40));
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 != (long *)0x0) {
    plVar5 = *(long **)(param_1 + 0x30);
    plVar2 = plVar4;
    if (plVar5 != plVar4) {
      do {
        plVar2 = (long *)plVar5[-2];
        plVar5 = plVar5 + -6;
        if (plVar5 == plVar2) {
          lVar3 = 4;
          plVar2 = plVar5;
LAB_00345958:
          (**(code **)(*plVar2 + lVar3 * 8))();
        }
        else if (plVar2 != (long *)0x0) {
          lVar3 = 5;
          goto LAB_00345958;
        }
      } while (plVar5 != plVar4);
      plVar2 = *(long **)(param_1 + 0x28);
    }
    *(long **)(param_1 + 0x30) = plVar4;
    operator_delete(plVar2);
  }
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 != (long *)0x0) {
    plVar5 = *(long **)(param_1 + 0x18);
    plVar2 = plVar4;
    if (plVar5 != plVar4) {
      do {
        plVar2 = (long *)plVar5[-2];
        plVar5 = plVar5 + -6;
        if (plVar5 == plVar2) {
          lVar3 = 4;
          plVar2 = plVar5;
LAB_003459b8:
          (**(code **)(*plVar2 + lVar3 * 8))();
        }
        else if (plVar2 != (long *)0x0) {
          lVar3 = 5;
          goto LAB_003459b8;
        }
      } while (plVar5 != plVar4);
      plVar2 = *(long **)(param_1 + 0x10);
    }
    *(long **)(param_1 + 0x18) = plVar4;
    operator_delete(plVar2);
  }
  if (*(uint *)(param_1 + 8) != 0xffffffff) {
                    /* try { // try from 00345a0c to 00345a17 has its CatchHandler @ 00345b24 */
    (*(code *)(&PTR_FUN_0038afe0)[*(uint *)(param_1 + 8)])(local_50,param_1);
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00345b28  FUN_00345b28 =====

long FUN_00345b28(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,"setOnError_cxx",PTR_kDescriptor_00396920);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00345ba4  FUN_00345ba4 =====

void FUN_00345ba4(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00345bd0 to 00345be3 has its CatchHandler @ 00345c10 */
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


// ===== 00345c14  FUN_00345c14 =====

void FUN_00345c14(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00394358 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00394358), iVar2 != 0))
  {
                    /* try { // try from 00345c84 to 00345c97 has its CatchHandler @ 00345ca8 */
    facebook::jni::findClassStatic(PTR_kBaseName_00394360);
    __cxa_guard_release(PTR_cls_00394358);
  }
  *param_1 = *(undefined8 *)PTR_cls_00394350;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00345cd4  FUN_00345cd4 =====

void FUN_00345cd4(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00345d00 to 00345d13 has its CatchHandler @ 00345d40 */
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


// ===== 00345d44  FUN_00345d44 =====

void FUN_00345d44(undefined8 *param_1)

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
    goto LAB_00345de0;
  }
  plVar2 = *(long **)((long)pvVar6 + 0x30);
  plVar3 = (long *)((long)pvVar6 + 0x10);
  if (plVar2 == plVar3) {
    lVar5 = 4;
LAB_00345db0:
    (**(code **)(*plVar3 + lVar5 * 8))();
  }
  else if (plVar2 != (long *)0x0) {
    lVar5 = 5;
    plVar3 = plVar2;
    goto LAB_00345db0;
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(pvVar6);
    return;
  }
LAB_00345de0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00345de4  FUN_00345de4 =====

void FUN_00345de4(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00394358 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00394358), iVar2 != 0))
  {
                    /* try { // try from 00345e54 to 00345e67 has its CatchHandler @ 00345e78 */
    facebook::jni::findClassStatic(PTR_kBaseName_00394360);
    __cxa_guard_release(PTR_cls_00394358);
  }
  *param_1 = *(undefined8 *)PTR_cls_00394350;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00345ea4  FUN_00345ea4 =====

long FUN_00345ea4(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,DAT_0039dfb0,"<init>",PTR_kConstructorDescriptor_00396830);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00345f20  FUN_00345f20 =====

long FUN_00345f20(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,DAT_0039df80,"<init>",PTR_kConstructorDescriptor_00396818);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00345f9c  FUN_00345f9c =====

void FUN_00345f9c(long param_1)

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
      goto LAB_0034601c;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00345ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar4 * 8))();
    return;
  }
LAB_0034601c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00346020  FUN_00346020 =====

void FUN_00346020(void *param_1)

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
    if (plVar2 == (long *)0x0) goto LAB_00346070;
    lVar5 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_00346070:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00346098  FUN_00346098 =====

long FUN_00346098(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,"getOnError_cxx",PTR_kDescriptor_00396918);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00346114  FUN_00346114 =====

void FUN_00346114(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00346140 to 00346153 has its CatchHandler @ 00346180 */
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


// ===== 00346184  FUN_00346184 =====

void FUN_00346184(long *param_1,long param_2)

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
      goto LAB_00346230;
    }
  }
  *param_1 = param_2;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
LAB_00346230:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00346234  FUN_00346234 =====

void FUN_00346234(long param_1,undefined8 param_2)

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
  *puVar2 = &PTR_FUN_0038ae90;
                    /* try { // try from 00346278 to 00346293 has its CatchHandler @ 003462c0 */
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


// ===== 003462e8  FUN_003462e8 =====

void FUN_003462e8(long *param_1)

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
  local_70 = &PTR_FUN_0038af20;
  plStack_68 = param_1;
                    /* try { // try from 00346320 to 00346327 has its CatchHandler @ 0034639c */
  facebook::jni::ThreadScope::WithClassLoader((function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00346354;
    lVar4 = 5;
    pppuVar2 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar2 + lVar4 * 8))();
LAB_00346354:
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 0034635c to 0034636f has its CatchHandler @ 003463a0 */
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


// ===== 003463a4  FUN_003463a4 =====

void FUN_003463a4(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 003463d0 to 003463e3 has its CatchHandler @ 00346410 */
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


// ===== 00346414  FUN_00346414 =====

void FUN_00346414(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00346440 to 00346453 has its CatchHandler @ 00346480 */
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


// ===== 00346484  FUN_00346484 =====

void FUN_00346484(void *param_1)

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


// ===== 003464bc  FUN_003464bc =====

void FUN_003464bc(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_0038af20;
  puVar2[1] = uVar4;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00346518  FUN_00346518 =====

void FUN_00346518(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_0038af20;
  param_2[1] = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00346560  FUN_00346560 =====

void FUN_00346560(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00346598  FUN_00346598 =====

void FUN_00346598(void *param_1)

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


// ===== 003465d0  FUN_003465d0 =====

void FUN_003465d0(long param_1)

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
                    /* try { // try from 003465fc to 0034660f has its CatchHandler @ 0034663c */
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


// ===== 00346640  FUN_00346640 =====

void FUN_00346640(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003967f8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00346690  FUN_00346690 =====

undefined * FUN_00346690(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00396800;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003466d0  FUN_003466d0 =====

void FUN_003466d0(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_0038ae90;
  local_70 = &PTR_FUN_0038af20;
  plStack_68 = plVar5;
                    /* try { // try from 00346714 to 0034671b has its CatchHandler @ 00346790 */
  facebook::jni::ThreadScope::WithClassLoader((function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00346748;
    lVar4 = 5;
    pppuVar2 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar2 + lVar4 * 8))();
LAB_00346748:
  lVar4 = *plVar5;
  if (lVar4 != 0) {
                    /* try { // try from 00346750 to 00346763 has its CatchHandler @ 00346794 */
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


// ===== 00346798  FUN_00346798 =====

void FUN_00346798(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_0038ae90;
  local_70 = &PTR_FUN_0038af20;
  plStack_68 = param_1 + 1;
                    /* try { // try from 003467e0 to 003467e7 has its CatchHandler @ 00346860 */
  facebook::jni::ThreadScope::WithClassLoader((function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00346814;
    lVar4 = 5;
    pppuVar2 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar2 + lVar4 * 8))();
LAB_00346814:
  lVar4 = param_1[1];
  if (lVar4 != 0) {
                    /* try { // try from 0034681c to 0034682f has its CatchHandler @ 00346864 */
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


// ===== 00346868  FUN_00346868 =====

undefined8 * FUN_00346868(long param_1)

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
  *puVar2 = &PTR_FUN_0038ae90;
                    /* try { // try from 003468a8 to 003468c3 has its CatchHandler @ 003468f0 */
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


// ===== 00346918  FUN_00346918 =====

void FUN_00346918(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_0038ae90;
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


// ===== 00346994  FUN_00346994 =====

void FUN_00346994(long param_1)

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
  local_70 = &PTR_FUN_0038af20;
  plStack_68 = plVar1;
                    /* try { // try from 003469cc to 003469d3 has its CatchHandler @ 00346a48 */
  facebook::jni::ThreadScope::WithClassLoader((function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar5 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00346a00;
    lVar5 = 5;
    pppuVar3 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar3 + lVar5 * 8))();
LAB_00346a00:
  lVar5 = *plVar1;
  if (lVar5 != 0) {
                    /* try { // try from 00346a08 to 00346a1b has its CatchHandler @ 00346a4c */
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


// ===== 00346a50  FUN_00346a50 =====

void FUN_00346a50(void *param_1)

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
  local_70 = &PTR_FUN_0038af20;
  plStack_68 = (long *)((long)param_1 + 8);
                    /* try { // try from 00346a8c to 00346a93 has its CatchHandler @ 00346b0c */
  facebook::jni::ThreadScope::WithClassLoader((function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00346ac0;
    lVar4 = 5;
    pppuVar2 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar2 + lVar4 * 8))();
LAB_00346ac0:
  lVar4 = *(long *)((long)param_1 + 8);
  if (lVar4 != 0) {
                    /* try { // try from 00346ac8 to 00346adb has its CatchHandler @ 00346b10 */
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


// ===== 00346b14  FUN_00346b14 =====

void FUN_00346b14(long param_1,ulong *param_2)

{
  char *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  _jclass *p_Var13;
  long lVar14;
  _jobject *p_Var15;
  logic_error *this;
  _jmethodID *p_Var16;
  _jmethodID *p_Var17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auStack_c0 [24];
  basic_string abStack_a8 [24];
  ulong local_90;
  ulong uStack_88;
  char *local_80;
  int local_78;
  long local_70;
  long local_68;
  basic_string abStack_60 [24];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((*param_2 & 1) == 0) {
    uStack_88 = param_2[1];
    local_90 = *param_2;
    local_80 = (char *)param_2[2];
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_90,(char *)param_2[2],param_2[1]);
  }
  local_78 = (int)param_2[3];
  if (((*PTR_method_00396720 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_method_00396720), iVar11 != 0)) {
                    /* try { // try from 00346ed0 to 00346edf has its CatchHandler @ 00347228 */
    FUN_003473ac(abStack_60);
    uVar18 = FUN_0034746c(abStack_60);
    *(undefined8 *)PTR_method_00396718 = uVar18;
    __cxa_guard_release(PTR_method_00396720);
  }
  p_Var16 = *(_jmethodID **)(param_1 + 8);
  if (((*PTR_clazz_00396748 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_clazz_00396748), iVar11 != 0)) {
                    /* try { // try from 00346f0c to 00346f17 has its CatchHandler @ 00347214 */
    FUN_002629ac(PTR_clazz_00396740);
    __cxa_guard_release(PTR_clazz_00396748);
  }
  if (((*PTR_create_00396758 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_create_00396758), iVar11 != 0)) {
                    /* try { // try from 00346f38 to 00346f3b has its CatchHandler @ 00347200 */
    uVar18 = FUN_00347558();
    *(undefined8 *)PTR_create_00396750 = uVar18;
    __cxa_guard_release(PTR_create_00396758);
  }
  p_Var17 = *(_jmethodID **)PTR_clazz_00396740;
  pcVar1 = (char *)((ulong)&local_90 | 1);
  if ((local_90 & 1) != 0) {
    pcVar1 = local_80;
  }
                    /* try { // try from 00346bc8 to 00346bcf has its CatchHandler @ 003472c4 */
  facebook::jni::make_jstring(pcVar1);
  lVar14 = local_68;
  iVar11 = local_78;
  if (((*PTR_clazz_00396770 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_clazz_00396770), iVar10 != 0)) {
                    /* try { // try from 00346f68 to 00346f73 has its CatchHandler @ 003471ec */
    FUN_00262b5c(PTR_clazz_00396768);
    __cxa_guard_release(PTR_clazz_00396770);
  }
  puVar9 = PTR_fieldINCORRECTSTATEMACHINEINPUTNAME_003967d8;
  puVar8 = PTR_fieldVIEWMODELINSTANCENOTFOUND_003967c8;
  puVar7 = PTR_fieldINCORRECTSTATEMACHINENAME_003967b8;
  puVar6 = PTR_fieldINCORRECTARTBOARDNAME_003967a8;
  puVar5 = PTR_fieldMALFORMEDFILE_00396798;
  puVar4 = PTR_fieldFILENOTFOUND_00396788;
  puVar3 = PTR_fieldUNKNOWN_00396778;
  if (iVar11 < 3) {
    if (iVar11 == 0) {
      if (((*PTR_fieldUNKNOWN_00396780 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_fieldUNKNOWN_00396780), iVar11 != 0)) {
                    /* try { // try from 00346fc4 to 00346fcf has its CatchHandler @ 003471c4 */
        uVar18 = FUN_003475d8("UNKNOWN");
        *(undefined8 *)puVar3 = uVar18;
        __cxa_guard_release(PTR_fieldUNKNOWN_00396780);
      }
      uVar18 = *(undefined8 *)puVar3;
      uVar19 = *(undefined8 *)PTR_clazz_00396768;
                    /* try { // try from 00346d64 to 00346d7b has its CatchHandler @ 003472bc */
      plVar12 = (long *)facebook::jni::Environment::current();
      uVar18 = (**(code **)(*plVar12 + 0x488))(plVar12,uVar19,uVar18);
    }
    else if (iVar11 == 1) {
      if (((*PTR_fieldFILENOTFOUND_00396790 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_fieldFILENOTFOUND_00396790), iVar11 != 0)) {
                    /* try { // try from 00346f94 to 00346f9f has its CatchHandler @ 003471d8 */
        uVar18 = FUN_003475d8("FILENOTFOUND");
        *(undefined8 *)puVar4 = uVar18;
        __cxa_guard_release(PTR_fieldFILENOTFOUND_00396790);
      }
      uVar18 = *(undefined8 *)puVar4;
      uVar19 = *(undefined8 *)PTR_clazz_00396768;
                    /* try { // try from 00346d20 to 00346d37 has its CatchHandler @ 003472c0 */
      plVar12 = (long *)facebook::jni::Environment::current();
      uVar18 = (**(code **)(*plVar12 + 0x488))(plVar12,uVar19,uVar18);
    }
    else {
      if (iVar11 != 2) goto LAB_003470d4;
      if (((*PTR_fieldMALFORMEDFILE_003967a0 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_fieldMALFORMEDFILE_003967a0), iVar11 != 0)) {
                    /* try { // try from 00347024 to 0034702f has its CatchHandler @ 0034719c */
        uVar18 = FUN_003475d8("MALFORMEDFILE");
        *(undefined8 *)puVar5 = uVar18;
        __cxa_guard_release(PTR_fieldMALFORMEDFILE_003967a0);
      }
      uVar18 = *(undefined8 *)puVar5;
      uVar19 = *(undefined8 *)PTR_clazz_00396768;
                    /* try { // try from 00346c88 to 00346c9f has its CatchHandler @ 003472b4 */
      plVar12 = (long *)facebook::jni::Environment::current();
      uVar18 = (**(code **)(*plVar12 + 0x488))(plVar12,uVar19,uVar18);
    }
  }
  else if (iVar11 < 6) {
    if (iVar11 == 3) {
      if (((*PTR_fieldINCORRECTARTBOARDNAME_003967b0 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_fieldINCORRECTARTBOARDNAME_003967b0), iVar11 != 0)) {
                    /* try { // try from 00347084 to 0034708f has its CatchHandler @ 00347174 */
        uVar18 = FUN_003475d8("INCORRECTARTBOARDNAME");
        *(undefined8 *)puVar6 = uVar18;
        __cxa_guard_release(PTR_fieldINCORRECTARTBOARDNAME_003967b0);
      }
      uVar18 = *(undefined8 *)puVar6;
      uVar19 = *(undefined8 *)PTR_clazz_00396768;
                    /* try { // try from 00346da8 to 00346dbf has its CatchHandler @ 003472ac */
      plVar12 = (long *)facebook::jni::Environment::current();
      uVar18 = (**(code **)(*plVar12 + 0x488))(plVar12,uVar19,uVar18);
    }
    else {
      if (iVar11 != 4) {
LAB_003470d4:
                    /* try { // try from 003470d4 to 003470df has its CatchHandler @ 003472e4 */
        std::__ndk1::to_string(iVar11);
        this = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 003470ec to 003470ff has its CatchHandler @ 00347288 */
        std::__ndk1::operator+("Invalid enum value (",abStack_60);
                    /* try { // try from 00347100 to 00347113 has its CatchHandler @ 00347270 */
        FUN_00263450(abStack_a8,auStack_c0,&DAT_001d5be0);
                    /* try { // try from 00347118 to 0034715f has its CatchHandler @ 0034723c */
        std::logic_error::logic_error(this,abStack_a8);
        *(undefined **)this = PTR_vtable_00394b38 + 0x10;
        if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          __cxa_throw(this,PTR_typeinfo_00394b30,PTR__invalid_argument_00394b20);
        }
        goto LAB_00347318;
      }
      if (((*PTR_fieldINCORRECTSTATEMACHINENAME_003967c0 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_fieldINCORRECTSTATEMACHINENAME_003967c0), iVar11 != 0)) {
                    /* try { // try from 00346ff4 to 00346fff has its CatchHandler @ 003471b0 */
        uVar18 = FUN_003475d8("INCORRECTSTATEMACHINENAME");
        *(undefined8 *)puVar7 = uVar18;
        __cxa_guard_release(PTR_fieldINCORRECTSTATEMACHINENAME_003967c0);
      }
      uVar18 = *(undefined8 *)puVar7;
      uVar19 = *(undefined8 *)PTR_clazz_00396768;
                    /* try { // try from 00346c30 to 00346c47 has its CatchHandler @ 003472b8 */
      plVar12 = (long *)facebook::jni::Environment::current();
      uVar18 = (**(code **)(*plVar12 + 0x488))(plVar12,uVar19,uVar18);
    }
  }
  else if (iVar11 == 6) {
    if (((*PTR_fieldVIEWMODELINSTANCENOTFOUND_003967d0 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_fieldVIEWMODELINSTANCENOTFOUND_003967d0), iVar11 != 0)) {
                    /* try { // try from 003470b4 to 003470bf has its CatchHandler @ 00347160 */
      uVar18 = FUN_003475d8("VIEWMODELINSTANCENOTFOUND");
      *(undefined8 *)puVar8 = uVar18;
      __cxa_guard_release(PTR_fieldVIEWMODELINSTANCENOTFOUND_003967d0);
    }
    uVar18 = *(undefined8 *)puVar8;
    uVar19 = *(undefined8 *)PTR_clazz_00396768;
                    /* try { // try from 00346dec to 00346e03 has its CatchHandler @ 003472a8 */
    plVar12 = (long *)facebook::jni::Environment::current();
    uVar18 = (**(code **)(*plVar12 + 0x488))(plVar12,uVar19,uVar18);
  }
  else {
    if (iVar11 != 8) goto LAB_003470d4;
    if (((*PTR_fieldINCORRECTSTATEMACHINEINPUTNAME_003967e0 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_fieldINCORRECTSTATEMACHINEINPUTNAME_003967e0), iVar11 != 0)
       ) {
                    /* try { // try from 00347054 to 0034705f has its CatchHandler @ 00347188 */
      uVar18 = FUN_003475d8("INCORRECTSTATEMACHINEINPUTNAME");
      *(undefined8 *)puVar9 = uVar18;
      __cxa_guard_release(PTR_fieldINCORRECTSTATEMACHINEINPUTNAME_003967e0);
    }
    uVar18 = *(undefined8 *)puVar9;
    uVar19 = *(undefined8 *)PTR_clazz_00396768;
                    /* try { // try from 00346cdc to 00346cf3 has its CatchHandler @ 003472b0 */
    plVar12 = (long *)facebook::jni::Environment::current();
    uVar18 = (**(code **)(*plVar12 + 0x488))(plVar12,uVar19,uVar18);
  }
                    /* try { // try from 00346e08 to 00346e2f has its CatchHandler @ 003472e4 */
  p_Var13 = (_jclass *)facebook::jni::Environment::current();
  lVar14 = _JNIEnv::CallStaticObjectMethod
                     (p_Var13,p_Var17,*(undefined8 *)PTR_create_00396750,lVar14,uVar18);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_70 = lVar14;
  if (local_68 != 0) {
                    /* try { // try from 00346e3c to 00346e4f has its CatchHandler @ 003472d0 */
    plVar12 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar12 + 0xb8))(plVar12,local_68);
  }
                    /* try { // try from 00346e50 to 00346e6f has its CatchHandler @ 003472d4 */
  p_Var15 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var15,p_Var16,*(undefined8 *)PTR_method_00396718,lVar14);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (lVar14 != 0) {
                    /* try { // try from 00346e74 to 00346e87 has its CatchHandler @ 003472cc */
    plVar12 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar12 + 0xb8))(plVar12,lVar14);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_00347318:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034731c  FUN_0034731c =====

void FUN_0034731c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003967e8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0034736c  FUN_0034736c =====

undefined * FUN_0034736c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003967f0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003473ac  FUN_003473ac =====

void FUN_003473ac(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00396730 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00396730), iVar2 != 0))
  {
                    /* try { // try from 0034741c to 0034742f has its CatchHandler @ 00347440 */
    facebook::jni::findClassStatic(PTR_kBaseName_00396738);
    __cxa_guard_release(PTR_cls_00396730);
  }
  *param_1 = *(undefined8 *)PTR_cls_00396728;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034746c  FUN_0034746c =====

long FUN_0034746c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,"invoke",PTR_kDescriptor_00394278);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003474e8  FUN_003474e8 =====

void FUN_003474e8(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00347514 to 00347527 has its CatchHandler @ 00347554 */
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


// ===== 00347558  FUN_00347558 =====

long FUN_00347558(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x388))
                    (plVar2,*(undefined8 *)PTR_clazz_00396740,"fromCpp",PTR_kDescriptor_00396760);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003475d8  FUN_003475d8 =====

long FUN_003475d8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x480))
                    (plVar2,*(undefined8 *)PTR_clazz_00396768,param_1,PTR_kDescriptor_003942e0);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00347658  FUN_00347658 =====

long FUN_00347658(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,"setDataBind",PTR_kDescriptor_00396910);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003476d4  FUN_003476d4 =====

void FUN_003476d4(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00347700 to 00347713 has its CatchHandler @ 00347740 */
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


// ===== 00347744  FUN_00347744 =====

void FUN_00347744(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00347770 to 00347783 has its CatchHandler @ 003477b0 */
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


// ===== 003477b4  FUN_003477b4 =====

void FUN_003477b4(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00396640 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00396640), iVar2 != 0))
  {
                    /* try { // try from 00347824 to 00347837 has its CatchHandler @ 00347848 */
    facebook::jni::findClassStatic(PTR_kBaseName_00396648);
    __cxa_guard_release(PTR_cls_00396640);
  }
  *param_1 = *(undefined8 *)PTR_cls_00396638;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00347874  FUN_00347874 =====

long FUN_00347874(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x388))(plVar2,*param_1,"create",PTR_kDescriptor_003966d0);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003478f0  FUN_003478f0 =====

void FUN_003478f0(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00396700 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00396700), iVar2 != 0))
  {
                    /* try { // try from 00347960 to 00347973 has its CatchHandler @ 00347984 */
    facebook::jni::findClassStatic(PTR_kBaseName_00396708);
    __cxa_guard_release(PTR_cls_00396700);
  }
  *param_1 = *(undefined8 *)PTR_cls_003966f8;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003479b0  FUN_003479b0 =====

long FUN_003479b0(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x388))
                    (plVar2,*(undefined8 *)PTR_clazz_003966d8,"fromCpp",PTR_kDescriptor_00396710);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00347a30  FUN_00347a30 =====

long FUN_00347a30(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x388))(plVar2,*param_1,"create",PTR_kDescriptor_00396668);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00347aac  FUN_00347aac =====

void FUN_00347aac(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_003966a8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_003966a8), iVar2 != 0))
  {
                    /* try { // try from 00347b1c to 00347b2f has its CatchHandler @ 00347b40 */
    facebook::jni::findClassStatic(PTR_kBaseName_003966b0);
    __cxa_guard_release(PTR_cls_003966a8);
  }
  *param_1 = *(undefined8 *)PTR_cls_003966a0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00347b6c  FUN_00347b6c =====

long FUN_00347b6c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x480))
                    (plVar2,*(undefined8 *)PTR_clazz_00396670,param_1,PTR_kDescriptor_003966b8);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00347bec  FUN_00347bec =====

long FUN_00347bec(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x388))(plVar2,*param_1,"create",PTR_kDescriptor_00396650);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00347c68  FUN_00347c68 =====

long FUN_00347c68(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,"getDataBind",PTR_kDescriptor_00396908);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00347ce4  FUN_00347ce4 =====

void FUN_00347ce4(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00347d10 to 00347d23 has its CatchHandler @ 00347d50 */
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


// ===== 00347d54  FUN_00347d54 =====

long FUN_00347d54(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*param_1,"setLayoutScaleFactor",PTR_kDescriptor_00396900);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00347dd0  FUN_00347dd0 =====

long FUN_00347dd0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,"setFit",PTR_kDescriptor_003968f8);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00347e4c  FUN_00347e4c =====

void FUN_00347e4c(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00396580 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00396580), iVar2 != 0))
  {
                    /* try { // try from 00347ebc to 00347ecf has its CatchHandler @ 00347ee0 */
    facebook::jni::findClassStatic(PTR_kBaseName_00396588);
    __cxa_guard_release(PTR_cls_00396580);
  }
  *param_1 = *(undefined8 *)PTR_cls_00396578;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00347f0c  FUN_00347f0c =====

long FUN_00347f0c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x480))
                    (plVar2,*(undefined8 *)PTR_clazz_00396590,param_1,PTR_kDescriptor_00396620);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00347f8c  FUN_00347f8c =====

long FUN_00347f8c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,"getFit",PTR_kDescriptor_003968f0);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00348008  FUN_00348008 =====

void FUN_00348008(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00348034 to 00348047 has its CatchHandler @ 00348074 */
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


// ===== 00348078  FUN_00348078 =====

long FUN_00348078(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,"setAlignment",PTR_kDescriptor_003968e8);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003480f4  FUN_003480f4 =====

void FUN_003480f4(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_003964a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_003964a0), iVar2 != 0))
  {
                    /* try { // try from 00348164 to 00348177 has its CatchHandler @ 00348188 */
    facebook::jni::findClassStatic(PTR_kBaseName_003964a8);
    __cxa_guard_release(PTR_cls_003964a0);
  }
  *param_1 = *(undefined8 *)PTR_cls_00396498;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003481b4  FUN_003481b4 =====

long FUN_003481b4(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x480))
                    (plVar2,*(undefined8 *)PTR_clazz_003964b0,param_1,PTR_kDescriptor_00396550);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00348234  FUN_00348234 =====

long FUN_00348234(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,"getAlignment",PTR_kDescriptor_003968e0);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003482b0  FUN_003482b0 =====

void FUN_003482b0(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 003482dc to 003482ef has its CatchHandler @ 0034831c */
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


// ===== 00348320  FUN_00348320 =====

long FUN_00348320(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,"setFile",PTR_kDescriptor_003968d8);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034839c  FUN_0034839c =====

long FUN_0034839c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,"getFile",PTR_kDescriptor_003968d0);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00348418  FUN_00348418 =====

void FUN_00348418(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00348444 to 00348457 has its CatchHandler @ 00348484 */
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


// ===== 00348488  FUN_00348488 =====

long FUN_00348488(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,"setAutoPlay",PTR_kDescriptor_003968c8);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00348504  FUN_00348504 =====

long FUN_00348504(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,"getAutoPlay",PTR_kDescriptor_003968c0);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00348580  FUN_00348580 =====

long FUN_00348580(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,param_2,PTR_kDescriptor_00394628);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00348604  FUN_00348604 =====

void FUN_00348604(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_0038b4d8;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00348648  FUN_00348648 =====

void FUN_00348648(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_0038b4d8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003486a0  FUN_003486a0 =====

void FUN_003486a0(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x003486d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(param_1 + 0x18))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003486e0  FUN_003486e0 =====

void FUN_003486e0(void *param_1)

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


// ===== 00348718  margelo::nitro::rive::JHybridRiveViewSpec::CxxPart::registerNatives =====

/* margelo::nitro::rive::JHybridRiveViewSpec::CxxPart::registerNatives() */

void margelo::nitro::rive::JHybridRiveViewSpec::CxxPart::registerNatives(void)

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
  puStack_58 = PTR_kDescriptor_0038a4c0;
  local_60 = PTR_s_initHybrid_0038a4b8;
  local_50 = PTR_call_0038a4c8;
  pcVar9 = (char *)operator_new(0x40);
  uVar7 = s_Lcom_margelo_nitro_rive_HybridRi_001d74e3._41_8_;
  uVar6 = s_Lcom_margelo_nitro_rive_HybridRi_001d74e3._33_8_;
  uVar5 = s_Lcom_margelo_nitro_rive_HybridRi_001d74e3._25_8_;
  uVar4 = s_Lcom_margelo_nitro_rive_HybridRi_001d74e3._17_8_;
  uVar3 = s_Lcom_margelo_nitro_rive_HybridRi_001d74e3._9_8_;
  uVar2 = s_Lcom_margelo_nitro_rive_HybridRi_001d74e3._1_8_;
  pcVar9[0x30] = 't';
  pcVar9[0x31] = '\0';
  *(undefined8 *)(pcVar9 + 8) = uVar3;
  *(undefined8 *)pcVar9 = uVar2;
  *(undefined8 *)(pcVar9 + 0x18) = uVar5;
  *(undefined8 *)(pcVar9 + 0x10) = uVar4;
  *(undefined8 *)(pcVar9 + 0x28) = uVar7;
  *(undefined8 *)(pcVar9 + 0x20) = uVar6;
                    /* try { // try from 0034877c to 00348783 has its CatchHandler @ 003487f4 */
  facebook::jni::findClassLocal(pcVar9);
  operator_delete(pcVar9);
                    /* try { // try from 0034878c to 003487b3 has its CatchHandler @ 00348808 */
  plVar10 = (long *)facebook::jni::Environment::current();
  iVar8 = (**(code **)(*plVar10 + 0x6b8))(plVar10,local_40,&local_60,1);
  facebook::jni::throwCppExceptionIf(iVar8 != 0);
  if (local_40 != 0) {
                    /* try { // try from 003487bc to 003487cf has its CatchHandler @ 00348804 */
    plVar10 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar10 + 0xb8))(plVar10,local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00348830  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveViewSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridRiveViewSpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveViewSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   (*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveViewSpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, void>::_javaobject*>),
   &margelo::nitro::rive::JHybridRiveViewSpec::CxxPart::initHybrid,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveViewSpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, void>::_javaobject*,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>>::call(_JNIEnv*, _jobject*) */

undefined8
facebook::jni::detail::
FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveViewSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridRiveViewSpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridRiveViewSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>
::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  JniEnvCacher aJStack_48 [24];
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_48,param_1);
                    /* try { // try from 0034885c to 00348867 has its CatchHandler @ 00348898 */
  FUN_0033b6e4(&local_30,param_2);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003488e4  margelo::nitro::rive::JHybridRiveViewSpec::getArtboardName =====

/* virtual thunk to margelo::nitro::rive::JHybridRiveViewSpec::getArtboardName() */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::getArtboardName(JHybridRiveViewSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getArtboardName();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00348928  margelo::nitro::rive::JHybridRiveViewSpec::setArtboardName =====

/* virtual thunk to
   margelo::nitro::rive::JHybridRiveViewSpec::setArtboardName(std::__ndk1::optional<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::setArtboardName
          (JHybridRiveViewSpec *this,optional *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    setArtboardName(this + *(long *)(*(long *)this + -0x38),param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034896c  margelo::nitro::rive::JHybridRiveViewSpec::getStateMachineName =====

/* virtual thunk to margelo::nitro::rive::JHybridRiveViewSpec::getStateMachineName() */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::getStateMachineName(JHybridRiveViewSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getStateMachineName();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003489b0  margelo::nitro::rive::JHybridRiveViewSpec::setStateMachineName =====

/* virtual thunk to
   margelo::nitro::rive::JHybridRiveViewSpec::setStateMachineName(std::__ndk1::optional<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::setStateMachineName
          (JHybridRiveViewSpec *this,optional *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    setStateMachineName(this + *(long *)(*(long *)this + -0x48),param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003489f4  margelo::nitro::rive::JHybridRiveViewSpec::getAutoPlay =====

/* virtual thunk to margelo::nitro::rive::JHybridRiveViewSpec::getAutoPlay() */

void __thiscall margelo::nitro::rive::JHybridRiveViewSpec::getAutoPlay(JHybridRiveViewSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getAutoPlay(this + *(long *)(*(long *)this + -0x50));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00348a38  margelo::nitro::rive::JHybridRiveViewSpec::setAutoPlay =====

/* virtual thunk to
   margelo::nitro::rive::JHybridRiveViewSpec::setAutoPlay(std::__ndk1::optional<bool>) */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::setAutoPlay(JHybridRiveViewSpec *this,undefined2 param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    setAutoPlay(this + *(long *)(*(long *)this + -0x58),param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00348a80  margelo::nitro::rive::JHybridRiveViewSpec::getFile =====

/* virtual thunk to margelo::nitro::rive::JHybridRiveViewSpec::getFile() */

void __thiscall margelo::nitro::rive::JHybridRiveViewSpec::getFile(JHybridRiveViewSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getFile();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00348ac4  margelo::nitro::rive::JHybridRiveViewSpec::setFile =====

/* virtual thunk to
   margelo::nitro::rive::JHybridRiveViewSpec::setFile(std::__ndk1::shared_ptr<margelo::nitro::rive::HybridRiveFileSpec>
   const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::setFile(JHybridRiveViewSpec *this,shared_ptr *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    setFile(this + *(long *)(*(long *)this + -0x68),param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00348b08  margelo::nitro::rive::JHybridRiveViewSpec::getAlignment =====

/* virtual thunk to margelo::nitro::rive::JHybridRiveViewSpec::getAlignment() */

void __thiscall margelo::nitro::rive::JHybridRiveViewSpec::getAlignment(JHybridRiveViewSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getAlignment(this + *(long *)(*(long *)this + -0x70));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00348b4c  margelo::nitro::rive::JHybridRiveViewSpec::setAlignment =====

/* virtual thunk to
   margelo::nitro::rive::JHybridRiveViewSpec::setAlignment(std::__ndk1::optional<margelo::nitro::rive::Alignment>)
    */

void __thiscall margelo::nitro::rive::JHybridRiveViewSpec::setAlignment(JHybridRiveViewSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    setAlignment(this + *(long *)(*(long *)this + -0x78));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00348b90  margelo::nitro::rive::JHybridRiveViewSpec::getFit =====

/* virtual thunk to margelo::nitro::rive::JHybridRiveViewSpec::getFit() */

void __thiscall margelo::nitro::rive::JHybridRiveViewSpec::getFit(JHybridRiveViewSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getFit(this + *(long *)(*(long *)this + -0x80));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00348bd4  margelo::nitro::rive::JHybridRiveViewSpec::setFit =====

/* virtual thunk to
   margelo::nitro::rive::JHybridRiveViewSpec::setFit(std::__ndk1::optional<margelo::nitro::rive::Fit>)
    */

void __thiscall margelo::nitro::rive::JHybridRiveViewSpec::setFit(JHybridRiveViewSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    setFit(this + *(long *)(*(long *)this + -0x88));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00348c18  margelo::nitro::rive::JHybridRiveViewSpec::getLayoutScaleFactor =====

/* virtual thunk to margelo::nitro::rive::JHybridRiveViewSpec::getLayoutScaleFactor() */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::getLayoutScaleFactor(JHybridRiveViewSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getLayoutScaleFactor(this + *(long *)(*(long *)this + -0x90));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00348c5c  margelo::nitro::rive::JHybridRiveViewSpec::setLayoutScaleFactor =====

/* virtual thunk to
   margelo::nitro::rive::JHybridRiveViewSpec::setLayoutScaleFactor(std::__ndk1::optional<double>) */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::setLayoutScaleFactor(JHybridRiveViewSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    setLayoutScaleFactor(this + *(long *)(*(long *)this + -0x98));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00348ca0  margelo::nitro::rive::JHybridRiveViewSpec::getDataBind =====

/* virtual thunk to margelo::nitro::rive::JHybridRiveViewSpec::getDataBind() */

void __thiscall margelo::nitro::rive::JHybridRiveViewSpec::getDataBind(JHybridRiveViewSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getDataBind();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00348ce4  margelo::nitro::rive::JHybridRiveViewSpec::setDataBind =====

/* virtual thunk to
   margelo::nitro::rive::JHybridRiveViewSpec::setDataBind(std::__ndk1::optional<std::__ndk1::variant<std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>,
   margelo::nitro::rive::DataBindMode, margelo::nitro::rive::DataBindByName> > const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::setDataBind(JHybridRiveViewSpec *this,optional *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    setDataBind(this + *(long *)(*(long *)this + -0xa8),param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00348d28  margelo::nitro::rive::JHybridRiveViewSpec::getOnError =====

/* virtual thunk to margelo::nitro::rive::JHybridRiveViewSpec::getOnError() */

void __thiscall margelo::nitro::rive::JHybridRiveViewSpec::getOnError(JHybridRiveViewSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getOnError();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00348d6c  margelo::nitro::rive::JHybridRiveViewSpec::setOnError =====

/* virtual thunk to margelo::nitro::rive::JHybridRiveViewSpec::setOnError(std::__ndk1::function<void
   (margelo::nitro::rive::RiveError const&)> const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::setOnError(JHybridRiveViewSpec *this,function *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    setOnError(this + *(long *)(*(long *)this + -0xb8),param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00348db0  margelo::nitro::rive::JHybridRiveViewSpec::awaitViewReady =====

/* virtual thunk to margelo::nitro::rive::JHybridRiveViewSpec::awaitViewReady() */

void __thiscall margelo::nitro::rive::JHybridRiveViewSpec::awaitViewReady(JHybridRiveViewSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    awaitViewReady();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00348df4  margelo::nitro::rive::JHybridRiveViewSpec::bindViewModelInstance =====

/* virtual thunk to
   margelo::nitro::rive::JHybridRiveViewSpec::bindViewModelInstance(std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec>
   const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::bindViewModelInstance
          (JHybridRiveViewSpec *this,shared_ptr *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    bindViewModelInstance(this + *(long *)(*(long *)this + -200),param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00348e38  margelo::nitro::rive::JHybridRiveViewSpec::getViewModelInstance =====

/* virtual thunk to margelo::nitro::rive::JHybridRiveViewSpec::getViewModelInstance() */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::getViewModelInstance(JHybridRiveViewSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getViewModelInstance();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00348e7c  margelo::nitro::rive::JHybridRiveViewSpec::play =====

/* virtual thunk to margelo::nitro::rive::JHybridRiveViewSpec::play() */

void __thiscall margelo::nitro::rive::JHybridRiveViewSpec::play(JHybridRiveViewSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    play();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00348ec0  margelo::nitro::rive::JHybridRiveViewSpec::pause =====

/* virtual thunk to margelo::nitro::rive::JHybridRiveViewSpec::pause() */

void __thiscall margelo::nitro::rive::JHybridRiveViewSpec::pause(JHybridRiveViewSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    pause();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00348f04  margelo::nitro::rive::JHybridRiveViewSpec::reset =====

/* virtual thunk to margelo::nitro::rive::JHybridRiveViewSpec::reset() */

void __thiscall margelo::nitro::rive::JHybridRiveViewSpec::reset(JHybridRiveViewSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    reset();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00348f48  margelo::nitro::rive::JHybridRiveViewSpec::playIfNeeded =====

/* virtual thunk to margelo::nitro::rive::JHybridRiveViewSpec::playIfNeeded() */

void __thiscall margelo::nitro::rive::JHybridRiveViewSpec::playIfNeeded(JHybridRiveViewSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    playIfNeeded(this + *(long *)(*(long *)this + -0xf0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00348f8c  margelo::nitro::rive::JHybridRiveViewSpec::onEventListener =====

/* virtual thunk to
   margelo::nitro::rive::JHybridRiveViewSpec::onEventListener(std::__ndk1::function<void
   (margelo::nitro::rive::UnifiedRiveEvent const&)> const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::onEventListener
          (JHybridRiveViewSpec *this,function *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    onEventListener(this + *(long *)(*(long *)this + -0xf8),param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00348fd0  margelo::nitro::rive::JHybridRiveViewSpec::removeEventListeners =====

/* virtual thunk to margelo::nitro::rive::JHybridRiveViewSpec::removeEventListeners() */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::removeEventListeners(JHybridRiveViewSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    removeEventListeners(this + *(long *)(*(long *)this + -0x100));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00349014  margelo::nitro::rive::JHybridRiveViewSpec::setNumberInputValue =====

/* virtual thunk to
   margelo::nitro::rive::JHybridRiveViewSpec::setNumberInputValue(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, double,
   std::__ndk1::optional<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::setNumberInputValue
          (JHybridRiveViewSpec *this,basic_string *param_1,double param_2,optional *param_3)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    setNumberInputValue(this + *(long *)(*(long *)this + -0x108),param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034905c  margelo::nitro::rive::JHybridRiveViewSpec::getNumberInputValue =====

/* virtual thunk to
   margelo::nitro::rive::JHybridRiveViewSpec::getNumberInputValue(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::optional<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::getNumberInputValue
          (JHybridRiveViewSpec *this,basic_string *param_1,optional *param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getNumberInputValue(this + *(long *)(*(long *)this + -0x110),param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003490a4  margelo::nitro::rive::JHybridRiveViewSpec::setBooleanInputValue =====

/* virtual thunk to
   margelo::nitro::rive::JHybridRiveViewSpec::setBooleanInputValue(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool,
   std::__ndk1::optional<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::setBooleanInputValue
          (JHybridRiveViewSpec *this,basic_string *param_1,bool param_2,optional *param_3)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    setBooleanInputValue(this + *(long *)(*(long *)this + -0x118),param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003490f0  margelo::nitro::rive::JHybridRiveViewSpec::getBooleanInputValue =====

/* virtual thunk to
   margelo::nitro::rive::JHybridRiveViewSpec::getBooleanInputValue(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::optional<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::getBooleanInputValue
          (JHybridRiveViewSpec *this,basic_string *param_1,optional *param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getBooleanInputValue(this + *(long *)(*(long *)this + -0x120),param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00349138  margelo::nitro::rive::JHybridRiveViewSpec::triggerInput =====

/* virtual thunk to
   margelo::nitro::rive::JHybridRiveViewSpec::triggerInput(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::optional<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::triggerInput
          (JHybridRiveViewSpec *this,basic_string *param_1,optional *param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    triggerInput(this + *(long *)(*(long *)this + -0x128),param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00349180  margelo::nitro::rive::JHybridRiveViewSpec::setTextRunValue =====

/* virtual thunk to
   margelo::nitro::rive::JHybridRiveViewSpec::setTextRunValue(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::optional<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::setTextRunValue
          (JHybridRiveViewSpec *this,basic_string *param_1,basic_string *param_2,optional *param_3)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    setTextRunValue(this + *(long *)(*(long *)this + -0x130),param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003491c8  margelo::nitro::rive::JHybridRiveViewSpec::getTextRunValue =====

/* virtual thunk to
   margelo::nitro::rive::JHybridRiveViewSpec::getTextRunValue(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::optional<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > const&) */

void __thiscall
margelo::nitro::rive::JHybridRiveViewSpec::getTextRunValue
          (JHybridRiveViewSpec *this,basic_string *param_1,optional *param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getTextRunValue(this + *(long *)(*(long *)this + -0x138),param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00349210  margelo::nitro::rive::JVariant_HybridViewModelInstanceSpec_DataBindMode_DataBindByName::toCpp =====

/* margelo::nitro::rive::JVariant_HybridViewModelInstanceSpec_DataBindMode_DataBindByName::toCpp()
   const */

void margelo::nitro::rive::JVariant_HybridViewModelInstanceSpec_DataBindMode_DataBindByName::toCpp
               (void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *in_x0;
  long *plVar8;
  long *in_x8;
  undefined8 uVar9;
  undefined8 uVar10;
  long local_80;
  ulong uStack_78;
  char *local_70;
  long local_60;
  byte local_58;
  undefined7 uStack_57;
  ulong uStack_50;
  char *local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00396a08 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_cls_00396a08), iVar7 != 0))
  {
                    /* try { // try from 0034956c to 0034957f has its CatchHandler @ 0034982c */
    facebook::jni::findClassStatic(PTR_kBaseName_00396a10);
    __cxa_guard_release(PTR_cls_00396a08);
  }
  uVar9 = *(undefined8 *)PTR_cls_00396a00;
                    /* try { // try from 00349254 to 0034926b has its CatchHandler @ 003498e4 */
  plVar8 = (long *)facebook::jni::Environment::current();
  cVar5 = (**(code **)(*plVar8 + 0x100))(plVar8,*in_x0,uVar9);
  puVar2 = PTR_field_00396980;
  if (cVar5 == '\0') {
    if (((*PTR_cls_00396a20 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_cls_00396a20), iVar7 != 0)) {
                    /* try { // try from 003495d4 to 003495e7 has its CatchHandler @ 0034980c */
      facebook::jni::findClassStatic(PTR_kBaseName_00396a28);
      __cxa_guard_release(PTR_cls_00396a20);
    }
    uVar9 = *(undefined8 *)PTR_cls_00396a18;
                    /* try { // try from 00349318 to 0034932f has its CatchHandler @ 003498d8 */
    plVar8 = (long *)facebook::jni::Environment::current();
    cVar5 = (**(code **)(*plVar8 + 0x100))(plVar8,*in_x0,uVar9);
    puVar2 = PTR_field_00396998;
    if (cVar5 == '\0') {
      if (((*PTR_cls_00396a38 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_cls_00396a38), iVar7 != 0)) {
                    /* try { // try from 003496a0 to 003496b3 has its CatchHandler @ 003497c0 */
        facebook::jni::findClassStatic(PTR_kBaseName_00396a40);
        __cxa_guard_release(PTR_cls_00396a38);
      }
      uVar9 = *(undefined8 *)PTR_cls_00396a30;
                    /* try { // try from 00349400 to 00349417 has its CatchHandler @ 003498a0 */
      plVar8 = (long *)facebook::jni::Environment::current();
      cVar5 = (**(code **)(*plVar8 + 0x100))(plVar8,*in_x0,uVar9);
      puVar2 = PTR_field_003969c8;
      if (cVar5 == '\0') {
        uVar9 = __cxa_allocate_exception(0x10);
                    /* try { // try from 003496d0 to 003496db has its CatchHandler @ 00349868 */
        FUN_00349a38(uVar9,"Variant is unknown Kotlin instance!");
        if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          __cxa_throw(uVar9,PTR_typeinfo_00394b30,PTR__invalid_argument_00394b20);
        }
        goto LAB_003498d4;
      }
      if (((*PTR_field_003969d0 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_field_003969d0), iVar7 != 0)) {
                    /* try { // try from 00349714 to 00349723 has its CatchHandler @ 003497fc */
        FUN_00349a90(&local_58);
        uVar9 = FUN_00349b50(&local_58);
        *(undefined8 *)puVar2 = uVar9;
        __cxa_guard_release(PTR_field_003969d0);
      }
      uVar10 = *(undefined8 *)puVar2;
      uVar9 = *in_x0;
                    /* try { // try from 00349440 to 00349457 has its CatchHandler @ 0034989c */
      plVar8 = (long *)facebook::jni::Environment::current();
      local_60 = (**(code **)(*plVar8 + 0x2f8))(plVar8,uVar9,uVar10);
      if (((*PTR_clazz_003969e8 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_clazz_003969e8), iVar7 != 0)) {
                    /* try { // try from 00349748 to 00349753 has its CatchHandler @ 003497ac */
        FUN_003478f0(PTR_clazz_003969e0);
        __cxa_guard_release(PTR_clazz_003969e8);
      }
      puVar2 = PTR_fieldByName_003969f0;
      if (((*PTR_fieldByName_003969f8 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_fieldByName_003969f8), iVar7 != 0)) {
                    /* try { // try from 00349774 to 00349787 has its CatchHandler @ 0034979c */
        uVar9 = FUN_0025f784(PTR_clazz_003969e0,"byName");
        *(undefined8 *)puVar2 = uVar9;
        __cxa_guard_release(PTR_fieldByName_003969f8);
      }
      lVar3 = local_60;
      uVar9 = *(undefined8 *)puVar2;
                    /* try { // try from 0034948c to 003494a3 has its CatchHandler @ 00349898 */
      plVar8 = (long *)facebook::jni::Environment::current();
      local_40 = (**(code **)(*plVar8 + 0x2f8))(plVar8,lVar3,uVar9);
                    /* try { // try from 003494a8 to 003494b3 has its CatchHandler @ 00349878 */
      facebook::jni::JString::toStdString();
      if ((local_58 & 1) == 0) {
        local_80 = CONCAT71(uStack_57,local_58);
        uStack_78 = uStack_50;
        local_70 = local_48;
      }
      else {
                    /* try { // try from 003494d4 to 003494db has its CatchHandler @ 00349850 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_80,local_48,uStack_50);
        if ((local_58 & 1) != 0) {
          operator_delete(local_48);
        }
      }
      lVar4 = local_40;
      if (local_40 != 0) {
                    /* try { // try from 003494f4 to 00349507 has its CatchHandler @ 00349894 */
        plVar8 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar8 + 0xb8))(plVar8,lVar4);
      }
      *(undefined4 *)(in_x8 + 3) = 2;
      in_x8[1] = uStack_78;
      *in_x8 = local_80;
      in_x8[2] = (long)local_70;
      if (lVar3 != 0) {
                    /* try { // try from 00349524 to 00349537 has its CatchHandler @ 00349890 */
        plVar8 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar8 + 0xb8))(plVar8,lVar3);
      }
    }
    else {
      if (((*PTR_field_003969a0 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_field_003969a0), iVar7 != 0)) {
                    /* try { // try from 00349608 to 00349617 has its CatchHandler @ 0034981c */
        FUN_00349bcc(&local_58);
        uVar9 = FUN_00349c8c(&local_58);
        *(undefined8 *)puVar2 = uVar9;
        __cxa_guard_release(PTR_field_003969a0);
      }
      uVar10 = *(undefined8 *)puVar2;
      uVar9 = *in_x0;
                    /* try { // try from 00349358 to 0034936f has its CatchHandler @ 003498ac */
      plVar8 = (long *)facebook::jni::Environment::current();
      local_80 = (**(code **)(*plVar8 + 0x2f8))(plVar8,uVar9,uVar10);
      if (((*PTR_clazz_003969b0 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_clazz_003969b0), iVar7 != 0)) {
                    /* try { // try from 0034963c to 00349647 has its CatchHandler @ 003497dc */
        FUN_00347aac(PTR_clazz_003969a8);
        __cxa_guard_release(PTR_clazz_003969b0);
      }
      puVar2 = PTR_fieldOrdinal_003969b8;
      if (((*PTR_fieldOrdinal_003969c0 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_fieldOrdinal_003969c0), iVar7 != 0)) {
                    /* try { // try from 00349668 to 0034967b has its CatchHandler @ 003497d0 */
        uVar9 = FUN_002622e0(PTR_clazz_003969a8,"value");
        *(undefined8 *)puVar2 = uVar9;
        __cxa_guard_release(PTR_fieldOrdinal_003969c0);
      }
      lVar3 = local_80;
      uVar9 = *(undefined8 *)puVar2;
                    /* try { // try from 003493a4 to 003493bb has its CatchHandler @ 003498a8 */
      plVar8 = (long *)facebook::jni::Environment::current();
      uVar6 = (**(code **)(*plVar8 + 800))(plVar8,lVar3,uVar9);
      *(undefined4 *)in_x8 = uVar6;
      *(undefined4 *)(in_x8 + 3) = 1;
      if (lVar3 != 0) {
                    /* try { // try from 003493cc to 003493df has its CatchHandler @ 003498a4 */
        plVar8 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar8 + 0xb8))(plVar8,lVar3);
      }
    }
  }
  else {
    if (((*PTR_field_00396988 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_field_00396988), iVar7 != 0)) {
                    /* try { // try from 003495a0 to 003495af has its CatchHandler @ 0034983c */
      FUN_00349d08(&local_58);
      uVar9 = FUN_00349dc8(&local_58);
      *(undefined8 *)puVar2 = uVar9;
      __cxa_guard_release(PTR_field_00396988);
    }
    uVar10 = *(undefined8 *)puVar2;
    uVar9 = *in_x0;
                    /* try { // try from 00349294 to 003492ab has its CatchHandler @ 003498e0 */
    plVar8 = (long *)facebook::jni::Environment::current();
    local_80 = (**(code **)(*plVar8 + 0x2f8))(plVar8,uVar9,uVar10);
                    /* try { // try from 003492b0 to 003492bb has its CatchHandler @ 003498b0 */
    JHybridViewModelInstanceSpec::JavaPart::getJHybridViewModelInstanceSpec((JavaPart *)&local_80);
    lVar3 = local_80;
    plVar8 = (long *)CONCAT71(uStack_57,local_58);
    if (plVar8 != (long *)0x0) {
      plVar8 = (long *)((long)plVar8 + *(long *)(*plVar8 + -0xa0));
    }
    *(undefined4 *)(in_x8 + 3) = 0;
    *in_x8 = (long)plVar8;
    in_x8[1] = uStack_50;
    if (local_80 != 0) {
                    /* try { // try from 003492e4 to 003492f7 has its CatchHandler @ 003498dc */
      plVar8 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar8 + 0xb8))(plVar8,lVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_003498d4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003498e8  FUN_003498e8 =====

void FUN_003498e8(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00349914 to 00349927 has its CatchHandler @ 00349954 */
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


// ===== 00349958  FUN_00349958 =====

void FUN_00349958(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00349984 to 00349997 has its CatchHandler @ 003499c4 */
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


// ===== 003499c8  FUN_003499c8 =====

void FUN_003499c8(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 003499f4 to 00349a07 has its CatchHandler @ 00349a34 */
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


// ===== 00349a38  FUN_00349a38 =====

void FUN_00349a38(logic_error *param_1,char *param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    std::logic_error::logic_error(param_1,param_2);
    *(undefined **)param_1 = PTR_vtable_00394b38 + 0x10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00349a90  FUN_00349a90 =====

void FUN_00349a90(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00396a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00396a38), iVar2 != 0))
  {
                    /* try { // try from 00349b00 to 00349b13 has its CatchHandler @ 00349b24 */
    facebook::jni::findClassStatic(PTR_kBaseName_00396a40);
    __cxa_guard_release(PTR_cls_00396a38);
  }
  *param_1 = *(undefined8 *)PTR_cls_00396a30;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00349b50  FUN_00349b50 =====

long FUN_00349b50(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x2f0))(plVar2,*param_1,"value",PTR_kDescriptor_003969d8);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00349bcc  FUN_00349bcc =====

void FUN_00349bcc(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00396a20 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00396a20), iVar2 != 0))
  {
                    /* try { // try from 00349c3c to 00349c4f has its CatchHandler @ 00349c60 */
    facebook::jni::findClassStatic(PTR_kBaseName_00396a28);
    __cxa_guard_release(PTR_cls_00396a20);
  }
  *param_1 = *(undefined8 *)PTR_cls_00396a18;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00349c8c  FUN_00349c8c =====

long FUN_00349c8c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x2f0))(plVar2,*param_1,"value",PTR_kDescriptor_003966b8);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00349d08  FUN_00349d08 =====

void FUN_00349d08(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00396a08 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00396a08), iVar2 != 0))
  {
                    /* try { // try from 00349d78 to 00349d8b has its CatchHandler @ 00349d9c */
    facebook::jni::findClassStatic(PTR_kBaseName_00396a10);
    __cxa_guard_release(PTR_cls_00396a08);
  }
  *param_1 = *(undefined8 *)PTR_cls_00396a00;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00349dc8  FUN_00349dc8 =====

long FUN_00349dc8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x2f0))(plVar2,*param_1,"value",PTR_kDescriptor_00396990);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00349e44  margelo::nitro::rive::JEventPropertiesOutput::toCpp =====

/* margelo::nitro::rive::JEventPropertiesOutput::toCpp() const */

void margelo::nitro::rive::JEventPropertiesOutput::toCpp(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined8 *in_x0;
  long *plVar6;
  undefined8 *in_x8;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00396a90 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_cls_00396a90), iVar5 != 0))
  {
                    /* try { // try from 0034a064 to 0034a077 has its CatchHandler @ 0034a214 */
    facebook::jni::findClassStatic(PTR_kBaseName_00396a98);
    __cxa_guard_release(PTR_cls_00396a90);
  }
  uVar7 = *(undefined8 *)PTR_cls_00396a88;
                    /* try { // try from 00349e88 to 00349e9f has its CatchHandler @ 0034a288 */
  plVar6 = (long *)facebook::jni::Environment::current();
  cVar4 = (**(code **)(*plVar6 + 0x100))(plVar6,*in_x0,uVar7);
  puVar2 = PTR_field_00396a48;
  if (cVar4 == '\0') {
    if (((*PTR_cls_00396aa8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_cls_00396aa8), iVar5 != 0)) {
                    /* try { // try from 0034a0cc to 0034a0df has its CatchHandler @ 0034a1f4 */
      facebook::jni::findClassStatic(PTR_kBaseName_00396ab0);
      __cxa_guard_release(PTR_cls_00396aa8);
    }
    uVar7 = *(undefined8 *)PTR_cls_00396aa0;
                    /* try { // try from 00349f30 to 00349f47 has its CatchHandler @ 0034a280 */
    plVar6 = (long *)facebook::jni::Environment::current();
    cVar4 = (**(code **)(*plVar6 + 0x100))(plVar6,*in_x0,uVar7);
    puVar2 = PTR_field_00396a60;
    if (cVar4 == '\0') {
      if (((*PTR_cls_00396ac0 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_cls_00396ac0), iVar5 != 0)) {
                    /* try { // try from 0034a13c to 0034a14f has its CatchHandler @ 0034a1d4 */
        facebook::jni::findClassStatic(PTR_kBaseName_00396ac8);
        __cxa_guard_release(PTR_cls_00396ac0);
      }
      uVar7 = *(undefined8 *)PTR_cls_00396ab8;
                    /* try { // try from 00349fec to 0034a003 has its CatchHandler @ 0034a274 */
      plVar6 = (long *)facebook::jni::Environment::current();
      cVar4 = (**(code **)(*plVar6 + 0x100))(plVar6,*in_x0,uVar7);
      puVar2 = PTR_field_00396a70;
      if (cVar4 == '\0') {
        uVar7 = __cxa_allocate_exception(0x10);
                    /* try { // try from 0034a16c to 0034a177 has its CatchHandler @ 0034a238 */
        FUN_00349a38(uVar7,"Variant is unknown Kotlin instance!");
        if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          __cxa_throw(uVar7,PTR_typeinfo_00394b30,PTR__invalid_argument_00394b20);
        }
        goto LAB_0034a26c;
      }
      if (((*PTR_field_00396a78 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_field_00396a78), iVar5 != 0)) {
                    /* try { // try from 0034a1b0 to 0034a1bf has its CatchHandler @ 0034a1e4 */
        FUN_0034a28c(&local_58);
        uVar7 = FUN_0034a34c(&local_58);
        *(undefined8 *)puVar2 = uVar7;
        __cxa_guard_release(PTR_field_00396a78);
      }
      uVar8 = *(undefined8 *)puVar2;
      uVar7 = *in_x0;
                    /* try { // try from 0034a02c to 0034a043 has its CatchHandler @ 0034a270 */
      plVar6 = (long *)facebook::jni::Environment::current();
      uVar7 = (**(code **)(*plVar6 + 0x338))(plVar6,uVar7,uVar8);
      *in_x8 = uVar7;
      *(undefined4 *)(in_x8 + 3) = 2;
    }
    else {
      if (((*PTR_field_00396a68 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_field_00396a68), iVar5 != 0)) {
                    /* try { // try from 0034a100 to 0034a117 has its CatchHandler @ 0034a204 */
        FUN_0034a3c8(&local_58);
        uVar7 = FUN_0025f784(&local_58,"value");
        *(undefined8 *)puVar2 = uVar7;
        __cxa_guard_release(PTR_field_00396a68);
      }
      uVar8 = *(undefined8 *)puVar2;
      uVar7 = *in_x0;
                    /* try { // try from 00349f70 to 00349f87 has its CatchHandler @ 0034a27c */
      plVar6 = (long *)facebook::jni::Environment::current();
      local_40 = (**(code **)(*plVar6 + 0x2f8))(plVar6,uVar7,uVar8);
                    /* try { // try from 00349f8c to 00349f97 has its CatchHandler @ 0034a248 */
      facebook::jni::JString::toStdString();
      lVar3 = local_40;
      *(undefined4 *)(in_x8 + 3) = 1;
      in_x8[1] = uStack_50;
      *in_x8 = local_58;
      in_x8[2] = local_48;
      if (local_40 != 0) {
                    /* try { // try from 00349fb8 to 00349fcb has its CatchHandler @ 0034a278 */
        plVar6 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar6 + 0xb8))(plVar6,lVar3);
      }
    }
  }
  else {
    if (((*PTR_field_00396a50 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_field_00396a50), iVar5 != 0)) {
                    /* try { // try from 0034a098 to 0034a0a7 has its CatchHandler @ 0034a224 */
      FUN_0034a488(&local_58);
      uVar7 = FUN_0034a548(&local_58);
      *(undefined8 *)puVar2 = uVar7;
      __cxa_guard_release(PTR_field_00396a50);
    }
    uVar8 = *(undefined8 *)puVar2;
    uVar7 = *in_x0;
                    /* try { // try from 00349ec8 to 00349edf has its CatchHandler @ 0034a284 */
    plVar6 = (long *)facebook::jni::Environment::current();
    cVar4 = (**(code **)(*plVar6 + 0x300))(plVar6,uVar7,uVar8);
    *(undefined4 *)(in_x8 + 3) = 0;
    *(bool *)in_x8 = cVar4 != '\0';
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_0034a26c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034a28c  FUN_0034a28c =====

void FUN_0034a28c(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00396ac0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00396ac0), iVar2 != 0))
  {
                    /* try { // try from 0034a2fc to 0034a30f has its CatchHandler @ 0034a320 */
    facebook::jni::findClassStatic(PTR_kBaseName_00396ac8);
    __cxa_guard_release(PTR_cls_00396ac0);
  }
  *param_1 = *(undefined8 *)PTR_cls_00396ab8;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034a34c  FUN_0034a34c =====

long FUN_0034a34c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x2f0))(plVar2,*param_1,"value",PTR_kDescriptor_00396a80);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034a3c8  FUN_0034a3c8 =====

void FUN_0034a3c8(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00396aa8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00396aa8), iVar2 != 0))
  {
                    /* try { // try from 0034a438 to 0034a44b has its CatchHandler @ 0034a45c */
    facebook::jni::findClassStatic(PTR_kBaseName_00396ab0);
    __cxa_guard_release(PTR_cls_00396aa8);
  }
  *param_1 = *(undefined8 *)PTR_cls_00396aa0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034a488  FUN_0034a488 =====

void FUN_0034a488(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00396a90 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00396a90), iVar2 != 0))
  {
                    /* try { // try from 0034a4f8 to 0034a50b has its CatchHandler @ 0034a51c */
    facebook::jni::findClassStatic(PTR_kBaseName_00396a98);
    __cxa_guard_release(PTR_cls_00396a90);
  }
  *param_1 = *(undefined8 *)PTR_cls_00396a88;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034a548  FUN_0034a548 =====

long FUN_0034a548(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x2f0))(plVar2,*param_1,"value",PTR_kDescriptor_00396a58);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034a5c4  margelo::nitro::rive::views::JHybridRiveViewStateUpdater::updateViewProps =====

/* margelo::nitro::rive::views::JHybridRiveViewStateUpdater::updateViewProps(facebook::jni::alias_ref<facebook::jni::JClass>,
   facebook::jni::alias_ref<margelo::nitro::rive::JHybridRiveViewSpec::JavaPart>,
   facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<margelo::nitro::JStateWrapper,
   facebook::jni::JObject, void>::_javaobject*>) */

void margelo::nitro::rive::views::JHybridRiveViewStateUpdater::updateViewProps
               (undefined8 param_1,JavaPart *param_2,undefined8 *param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  runtime_error *prVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  long local_50;
  long *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  JHybridRiveViewSpec::JavaPart::getJHybridRiveViewSpec(param_2);
  uVar9 = *param_3;
  if (((*PTR_cls_00396ad8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_cls_00396ad8), iVar3 != 0))
  {
                    /* try { // try from 0034a9a4 to 0034a9b7 has its CatchHandler @ 0034aa40 */
    facebook::jni::findClassStatic(PTR_kBaseName_00396ae0);
    __cxa_guard_release(PTR_cls_00396ad8);
  }
  uVar7 = *(undefined8 *)PTR_cls_00396ad0;
                    /* try { // try from 0034a614 to 0034a62b has its CatchHandler @ 0034aa70 */
  plVar4 = (long *)facebook::jni::Environment::current();
  cVar2 = (**(code **)(*plVar4 + 0x100))(plVar4,*param_3,uVar7);
  if (cVar2 == '\0') {
    prVar6 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0034a91c to 0034a927 has its CatchHandler @ 0034aa8c */
    std::runtime_error::runtime_error(prVar6,"StateWrapper is not a StateWrapperImpl");
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0034a938 to 0034a94f has its CatchHandler @ 0034aa84 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar6,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
  }
  else {
    local_40 = uVar9;
    if (((*PTR_hybridDataField_00396af0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_hybridDataField_00396af0), iVar3 != 0)) {
      facebook::jni::JObject::getClass();
                    /* try { // try from 0034a9e8 to 0034a9eb has its CatchHandler @ 0034aa24 */
      uVar9 = FUN_0034aad4(local_50);
      *(undefined8 *)PTR_hybridDataField_00396ae8 = uVar9;
      facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
      ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
                       *)&local_50);
      __cxa_guard_release(PTR_hybridDataField_00396af0);
    }
                    /* try { // try from 0034a648 to 0034a65f has its CatchHandler @ 0034aa68 */
    facebook::jni::getHybridDataFromField
              ((JObject *)&local_40,(JField *)PTR_hybridDataField_00396ae8);
    facebook::react::StateWrapperImpl::getState();
    if (local_68 != (long *)0x0) {
      FUN_00259a00(1,local_68 + 1);
    }
    plVar4 = *(long **)(local_70 + 0x18);
    lVar8 = *plVar4;
    if (lVar8 == 0) {
      prVar6 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0034a960 to 0034a96b has its CatchHandler @ 0034aa74 */
      std::runtime_error::runtime_error
                (prVar6,"HybridRiveViewState\'s data doesn\'t contain any props!");
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0034a97c to 0034a993 has its CatchHandler @ 0034aa9c */
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar6,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
    }
    else {
      if (*(char *)(lVar8 + 0x700) != '\0') {
                    /* try { // try from 0034a694 to 0034a7bf has its CatchHandler @ 0034aa9c */
        (**(code **)(*local_60 + 0x18))(local_60,lVar8 + 0x6e0);
        lVar8 = *plVar4;
        *(undefined1 *)(lVar8 + 0x700) = 0;
      }
      if (*(char *)(lVar8 + 0x738) != '\0') {
        (**(code **)(*local_60 + 0x28))(local_60,lVar8 + 0x718);
        lVar8 = *plVar4;
        *(undefined1 *)(lVar8 + 0x738) = 0;
      }
      if (*(char *)(lVar8 + 0x752) != '\0') {
        (**(code **)(*local_60 + 0x38))(local_60,*(undefined2 *)(lVar8 + 0x750));
        lVar8 = *plVar4;
        *(undefined1 *)(lVar8 + 0x752) = 0;
      }
      if (*(char *)(lVar8 + 0x778) != '\0') {
        (**(code **)(*local_60 + 0x48))(local_60,lVar8 + 0x768);
        lVar8 = *plVar4;
        *(undefined1 *)(lVar8 + 0x778) = 0;
      }
      if (*(char *)(lVar8 + 0x798) != '\0') {
        (**(code **)(*local_60 + 0x58))(local_60,*(undefined8 *)(lVar8 + 0x790));
        lVar8 = *plVar4;
        *(undefined1 *)(lVar8 + 0x798) = 0;
      }
      if (*(char *)(lVar8 + 0x7b8) != '\0') {
        (**(code **)(*local_60 + 0x68))(local_60,*(undefined8 *)(lVar8 + 0x7b0));
        lVar8 = *plVar4;
        *(undefined1 *)(lVar8 + 0x7b8) = 0;
      }
      if (*(char *)(lVar8 + 0x7e0) != '\0') {
        (**(code **)(*local_60 + 0x78))
                  (local_60,*(undefined8 *)(lVar8 + 2000),*(undefined8 *)(lVar8 + 0x7d8));
        lVar8 = *plVar4;
        *(undefined1 *)(lVar8 + 0x7e0) = 0;
      }
      if (*(char *)(lVar8 + 0x820) != '\0') {
        (**(code **)(*local_60 + 0x88))(local_60,lVar8 + 0x7f8);
        lVar8 = *plVar4;
        *(undefined1 *)(lVar8 + 0x820) = 0;
      }
      if (*(char *)(lVar8 + 0x870) != '\0') {
        (**(code **)(*local_60 + 0x98))(local_60,lVar8 + 0x840);
        lVar8 = *plVar4;
        *(undefined1 *)(lVar8 + 0x870) = 0;
      }
      if (*(char *)(lVar8 + 0x8d0) != '\0') {
        if (*(char *)(lVar8 + 0x8c0) != '\0') {
          if (local_60 == (long *)0x0) {
            local_50 = 0;
          }
          else {
            local_50 = (long)local_60 + *(long *)(*local_60 + -0x148);
          }
          local_48 = local_58;
          if (local_58 != (long *)0x0) {
            FUN_00259a00(1,local_58 + 1);
          }
          plVar5 = *(long **)(lVar8 + 0x8b0);
          if (plVar5 == (long *)0x0) {
            if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0034aa20 to 0034aa23 has its CatchHandler @ 0034aa54 */
              uVar9 = FUN_0025cd00();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0034a9e8 with catch @ 0034aa24
                        */
              facebook::jni::
              base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
              ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
                               *)&local_50);
              __cxa_guard_abort(PTR_hybridDataField_00396af0);
              FUN_0033b600(local_58);
              if (*(long *)(lVar1 + 0x28) == local_38) {
                FUN_00255d34(uVar9);
              }
            }
            goto LAB_0034aad0;
          }
                    /* try { // try from 0034a820 to 0034a827 has its CatchHandler @ 0034aa54 */
          (**(code **)(*plVar5 + 0x30))(plVar5,&local_50);
          if ((local_48 != (long *)0x0) &&
             (lVar8 = FUN_00255510(0xffffffffffffffff,local_48 + 1), lVar8 == 0)) {
            (**(code **)(*local_48 + 0x10))(local_48);
            std::__ndk1::__shared_weak_count::__release_weak();
          }
          lVar8 = *plVar4;
        }
        *(undefined1 *)(lVar8 + 0x8d0) = 0;
      }
      if ((local_68 != (long *)0x0) &&
         (lVar8 = FUN_00255510(0xffffffffffffffff,local_68 + 1), lVar8 == 0)) {
        (**(code **)(*local_68 + 0x10))(local_68);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      if ((local_68 != (long *)0x0) &&
         (lVar8 = FUN_00255510(0xffffffffffffffff,local_68 + 1), lVar8 == 0)) {
        (**(code **)(*local_68 + 0x10))(local_68);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      if ((local_58 != (long *)0x0) &&
         (lVar8 = FUN_00255510(0xffffffffffffffff,local_58 + 1), lVar8 == 0)) {
        (**(code **)(*local_58 + 0x10))(local_58);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
    }
  }
LAB_0034aad0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034aad4  FUN_0034aad4 =====

void FUN_0034aad4(undefined8 param_1)

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
    if (((*PTR_cls_00396ad8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_cls_00396ad8), iVar2 != 0)) {
                    /* try { // try from 0034ab90 to 0034aba3 has its CatchHandler @ 0034abc8 */
      facebook::jni::findClassStatic(PTR_kBaseName_00396ae0);
      __cxa_guard_release(PTR_cls_00396ad8);
    }
    uVar6 = *(undefined8 *)PTR_cls_00396ad0;
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar4 = (**(code **)(*plVar5 + 0x2f0))(plVar5,uVar6,"mHybridData",PTR_kDescriptor_00394368);
    facebook::jni::throwCppExceptionIf(lVar4 == 0);
    if (lVar4 == 0) {
      if (*(long *)(lVar1 + 0x28) == local_28) {
        uVar6 = facebook::jni::throwNPE();
                    /* catch() { ... } // from try @ 0034ab90 with catch @ 0034abc8 */
        lVar4 = __cxa_guard_abort(PTR_cls_00396ad8);
        if (*(long *)(lVar1 + 0x28) == local_28) {
          lVar4 = FUN_00255d34(uVar6);
        }
      }
      goto LAB_0034abf0;
    }
  }
  else {
    lVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
LAB_0034abf0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


// ===== 0034abf4  FUN_0034abf4 =====

void FUN_0034abf4(long *param_1)

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


// ===== 0034ac80  margelo::nitro::rive::JHybridViewModelSpec::JavaPart::getJHybridViewModelSpec =====

/* margelo::nitro::rive::JHybridViewModelSpec::JavaPart::getJHybridViewModelSpec() */

void __thiscall
margelo::nitro::rive::JHybridViewModelSpec::JavaPart::getJHybridViewModelSpec(JavaPart *this)

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
     (lVar2 = __dynamic_cast(local_38,PTR_typeinfo_00395e60,PTR_typeinfo_00396b10,0xffffffffffffffff
                            ), lVar2 == 0)) {
    *in_x8 = 0;
    in_x8[1] = 0;
    this_00 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0034ad48 to 0034ad53 has its CatchHandler @ 0034ad88 */
    std::runtime_error::runtime_error
              (this_00,"Failed to downcast JHybridObject to JHybridViewModelSpec!");
    if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* try { // try from 0034ad68 to 0034ad7f has its CatchHandler @ 0034ad80 */
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


// ===== 0034adc4  margelo::nitro::rive::JHybridViewModelSpec::CxxPart::initHybrid =====

/* margelo::nitro::rive::JHybridViewModelSpec::CxxPart::initHybrid(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelSpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, void>::_javaobject*>) */

void __thiscall
margelo::nitro::rive::JHybridViewModelSpec::CxxPart::initHybrid(undefined8 *param_1,CxxPart *this)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_0034ae1c(&local_30,*(undefined8 *)this);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034ae1c  FUN_0034ae1c =====

void FUN_0034ae1c(undefined8 *param_1,undefined8 param_2)

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
                    /* try { // try from 0034ae54 to 0034ae5b has its CatchHandler @ 0034af38 */
  local_48 = param_2;
  margelo::nitro::JHybridObject::CxxPart::CxxPart(pCVar2,&local_48);
  *(undefined **)pCVar2 = PTR_vtable_00396b18 + 0x10;
                    /* try { // try from 0034ae6c to 0034ae73 has its CatchHandler @ 0034af30 */
  facebook::jni::detail::HybridData::create();
  uVar5 = *param_1;
                    /* try { // try from 0034ae78 to 0034ae93 has its CatchHandler @ 0034af4c */
  plVar3 = (long *)facebook::jni::Environment::current();
  lVar4 = (**(code **)(*plVar3 + 200))(plVar3,uVar5);
  facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 0034ae9c to 0034aea7 has its CatchHandler @ 0034af00 */
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
                    /* try { // try from 0034aec8 to 0034aedb has its CatchHandler @ 0034af48 */
    plVar3 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb8))(plVar3,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034af84  FUN_0034af84 =====

void FUN_0034af84(long *param_1)

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
                    /* try { // try from 0034afc0 to 0034afd3 has its CatchHandler @ 0034b010 */
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


// ===== 0034b014  margelo::nitro::rive::JHybridViewModelSpec::CxxPart::createHybridObject =====

/* margelo::nitro::rive::JHybridViewModelSpec::CxxPart::createHybridObject(facebook::jni::basic_strong_ref<margelo::nitro::JHybridObject::JavaPart,
   facebook::jni::LocalReferenceAllocator> const&) */

void margelo::nitro::rive::JHybridViewModelSpec::CxxPart::createHybridObject
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
  
  puVar1 = PTR_target_class_00396b38;
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (*in_x1 == 0) {
LAB_0034b2d0:
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0034b2dc to 0034b2e7 has its CatchHandler @ 0034b474 */
    param_1 = (basic_strong_ref *)
              std::runtime_error::runtime_error
                        (this,
                         "Failed to cast JHybridObject::JavaPart to JHybridViewModelSpec::JavaPart!"
                        );
    if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 0034b2f8 to 0034b30f has its CatchHandler @ 0034b470 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_0034b518;
  }
  if (((*PTR_target_class_00396b40 & 1) == 0) &&
     (param_1 = (basic_strong_ref *)__cxa_guard_acquire(PTR_target_class_00396b40),
     (int)param_1 != 0)) {
                    /* try { // try from 0034b320 to 0034b32f has its CatchHandler @ 0034b434 */
    facebook::jni::findClassStatic(PTR_kBaseName_00396b48);
    *(undefined8 *)puVar1 = local_60;
    param_1 = (basic_strong_ref *)__cxa_guard_release(PTR_target_class_00396b40);
  }
  if (*(long *)puVar1 == 0) {
    if (*(long *)(lVar3 + 0x28) != local_58) goto LAB_0034b518;
    FUN_00261580("java/lang/ClassCastException","Could not find class %s.",PTR_kBaseName_00396b48);
LAB_0034b374:
                    /* try { // try from 0034b374 to 0034b383 has its CatchHandler @ 0034b460 */
    param_1 = (basic_strong_ref *)FUN_002615d4(local_80,&local_68);
    uVar8 = (ulong)local_80 | 1;
    if ((local_80[0] & 1) != 0) {
      uVar8 = local_70;
    }
    if (*(long *)(lVar3 + 0x28) != local_58) goto LAB_0034b518;
                    /* try { // try from 0034b3a8 to 0034b3c3 has its CatchHandler @ 0034b448 */
    FUN_0026171c("java/lang/ClassCastException","Tried to cast from %s to %s.",uVar8,
                 PTR_kBaseName_00396b48);
  }
  else {
                    /* try { // try from 0034b06c to 0034b07f has its CatchHandler @ 0034b4b4 */
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5,*in_x1);
    local_68 = lVar6;
                    /* try { // try from 0034b088 to 0034b09f has its CatchHandler @ 0034b4b0 */
    plVar5 = (long *)facebook::jni::Environment::current();
    cVar4 = (**(code **)(*plVar5 + 0x58))(plVar5,lVar6,*(undefined8 *)puVar1);
    if (cVar4 == '\0') goto LAB_0034b374;
    lVar10 = *in_x1;
    if (lVar10 == 0) {
      local_88 = 0;
    }
    else {
                    /* try { // try from 0034b0b0 to 0034b0cb has its CatchHandler @ 0034b4b8 */
      plVar5 = (long *)facebook::jni::Environment::current();
      local_88 = (**(code **)(*plVar5 + 200))(plVar5,lVar10);
      facebook::jni::throwPendingJniExceptionAsCppException();
      if (local_88 == 0) {
        pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
        param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar9);
        if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 0034b41c to 0034b433 has its CatchHandler @ 0034b4b8 */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(pbVar9,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
        }
        goto LAB_0034b518;
      }
    }
    if (lVar6 != 0) {
                    /* try { // try from 0034b0e8 to 0034b0fb has its CatchHandler @ 0034b4ac */
      plVar5 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar5 + 0xb8))(plVar5,lVar6);
    }
    if (local_88 == 0) goto LAB_0034b2d0;
                    /* try { // try from 0034b100 to 0034b107 has its CatchHandler @ 0034b49c */
    plVar5 = (long *)operator_new(0x98);
    puVar1 = PTR_vtable_00395e70;
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_0038c1f8;
    plVar11 = plVar5 + 3;
    *plVar11 = (long)(puVar1 + 0x10);
    puVar2 = PTR_PTR_00396b00;
                    /* try { // try from 0034b138 to 0034b153 has its CatchHandler @ 0034b494 */
    margelo::nitro::HybridObject::HybridObject((HybridObject *)(plVar5 + 5),PTR_PTR_00396b00 + 0x40)
    ;
    puVar1 = PTR_construction_vtable_00396b08 + 0x90;
    plVar5[5] = (long)(PTR_construction_vtable_00396b08 + 0x158);
    plVar5[3] = (long)puVar1;
                    /* try { // try from 0034b16c to 0034b187 has its CatchHandler @ 0034b4bc */
    plVar7 = (long *)facebook::jni::Environment::current();
    uVar8 = (**(code **)(*plVar7 + 200))(plVar7,local_88);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 0034b18c to 0034b19b has its CatchHandler @ 0034b484 */
    local_80[0] = uVar8;
    margelo::nitro::JHybridObject::JHybridObject((JHybridObject *)(plVar5 + 0x11),puVar2 + 0x50);
    uVar8 = local_80[0];
    if (local_80[0] != 0) {
                    /* try { // try from 0034b1a4 to 0034b1b7 has its CatchHandler @ 0034b4a8 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,uVar8);
    }
    puVar1 = PTR_vtable_00396af8 + 0xa0;
    puVar2 = PTR_vtable_00396af8 + 0x1f0;
    plVar5[5] = (long)(PTR_vtable_00396af8 + 0x168);
    *plVar11 = (long)puVar1;
    plVar5[0x11] = (long)puVar2;
                    /* try { // try from 0034b1d8 to 0034b1f3 has its CatchHandler @ 0034b4c4 */
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
      *in_x8 = (long)plVar11 + *(long *)(plVar5[3] + -0xa0);
      in_x8[1] = (long)plVar5;
      if (local_88 != 0) {
                    /* try { // try from 0034b28c to 0034b29f has its CatchHandler @ 0034b4a4 */
        plVar5 = (long *)facebook::jni::Environment::current();
        param_1 = (basic_strong_ref *)(**(code **)(*plVar5 + 0xb8))(plVar5,local_88);
      }
      if (*(long *)(lVar3 + 0x28) == local_58) {
        return;
      }
      goto LAB_0034b518;
    }
  }
  pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
  param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar9);
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 0034b3e4 to 0034b3fb has its CatchHandler @ 0034b4c4 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pbVar9,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
  }
LAB_0034b518:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0034b51c  FUN_0034b51c =====

void FUN_0034b51c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 0034b548 to 0034b55b has its CatchHandler @ 0034b588 */
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


// ===== 0034b58c  FUN_0034b58c =====

void FUN_0034b58c(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_0034d49c();
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(param_1 + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(param_1 + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034b600  FUN_0034b600 =====

void FUN_0034b600(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_0034d49c();
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


// ===== 0034b67c  margelo::nitro::rive::JHybridViewModelSpec::getPropertyCount =====

/* margelo::nitro::rive::JHybridViewModelSpec::getPropertyCount() */

undefined1  [16] __thiscall
margelo::nitro::rive::JHybridViewModelSpec::getPropertyCount(JHybridViewModelSpec *this)

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
  if (((DAT_0039e1e8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039e1e8), iVar2 != 0)) {
                    /* try { // try from 0034b710 to 0034b727 has its CatchHandler @ 0034b73c */
    FUN_0034d7c4(auStack_40);
    DAT_0039e1e0 = FUN_002620fc(auStack_40,"getPropertyCount");
    __cxa_guard_release(&DAT_0039e1e8);
  }
  uVar4 = *(undefined8 *)(this + 8);
  uVar3 = facebook::jni::Environment::current();
  auVar5._0_8_ = FUN_00262180(uVar3,uVar4,DAT_0039e1e0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    facebook::jni::throwPendingJniExceptionAsCppException();
    auVar5._8_8_ = 0;
    return auVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034b768  margelo::nitro::rive::JHybridViewModelSpec::getInstanceCount =====

/* margelo::nitro::rive::JHybridViewModelSpec::getInstanceCount() */

undefined1  [16] __thiscall
margelo::nitro::rive::JHybridViewModelSpec::getInstanceCount(JHybridViewModelSpec *this)

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
  if (((DAT_0039e1f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039e1f8), iVar2 != 0)) {
                    /* try { // try from 0034b7fc to 0034b813 has its CatchHandler @ 0034b828 */
    FUN_0034d7c4(auStack_40);
    DAT_0039e1f0 = FUN_002620fc(auStack_40,"getInstanceCount");
    __cxa_guard_release(&DAT_0039e1f8);
  }
  uVar4 = *(undefined8 *)(this + 8);
  uVar3 = facebook::jni::Environment::current();
  auVar5._0_8_ = FUN_00262180(uVar3,uVar4,DAT_0039e1f0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    facebook::jni::throwPendingJniExceptionAsCppException();
    auVar5._8_8_ = 0;
    return auVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034b854  margelo::nitro::rive::JHybridViewModelSpec::getModelName =====

/* margelo::nitro::rive::JHybridViewModelSpec::getModelName() */

void __thiscall margelo::nitro::rive::JHybridViewModelSpec::getModelName(JHybridViewModelSpec *this)

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
  if (((DAT_0039e208 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039e208), iVar2 != 0)) {
                    /* try { // try from 0034b90c to 0034b923 has its CatchHandler @ 0034b938 */
    FUN_0034d7c4(&local_40);
    DAT_0039e200 = facebook::jni::JClass::
                   getMethod<facebook::jni::basic_strong_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>()>
                             ((JClass *)&local_40,"getModelName");
    __cxa_guard_release(&DAT_0039e208);
  }
  p_Var6 = *(_jmethodID **)(this + 8);
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  lVar4 = _JNIEnv::CallObjectMethod(p_Var3,p_Var6,DAT_0039e200);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_40 = lVar4;
                    /* try { // try from 0034b8b0 to 0034b8bb has its CatchHandler @ 0034b94c */
  facebook::jni::JString::toStdString();
  lVar4 = local_40;
  if (local_40 != 0) {
                    /* try { // try from 0034b8c4 to 0034b8d7 has its CatchHandler @ 0034b974 */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034b978  margelo::nitro::rive::JHybridViewModelSpec::getPropertyCountAsync =====

/* margelo::nitro::rive::JHybridViewModelSpec::getPropertyCountAsync() */

void margelo::nitro::rive::JHybridViewModelSpec::getPropertyCountAsync(void)

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
  if (((DAT_0039e218 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039e218), iVar4 != 0)) {
                    /* try { // try from 0034bb88 to 0034bb9f has its CatchHandler @ 0034bc5c */
    FUN_0034d7c4(&local_90);
    DAT_0039e210 = FUN_0031e0a0(&local_90,"getPropertyCountAsync");
    __cxa_guard_release(&DAT_0039e218);
  }
  p_Var13 = *(_jmethodID **)(in_x0 + 8);
  p_Var5 = (_jobject *)facebook::jni::Environment::current();
  lVar6 = _JNIEnv::CallObjectMethod(p_Var5,p_Var13,DAT_0039e210);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_98 = lVar6;
                    /* try { // try from 0034b9dc to 0034b9e3 has its CatchHandler @ 0034bd00 */
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
                    /* try { // try from 0034ba04 to 0034ba0b has its CatchHandler @ 0034bcf0 */
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
                    /* try { // try from 0034bbd4 to 0034bbd7 has its CatchHandler @ 0034bc40 */
    uVar9 = FUN_0031e19c(local_90);
    *(undefined8 *)PTR_hybridDataField_00396030 = uVar9;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0034ba34 to 0034ba47 has its CatchHandler @ 0034bd0c */
  puVar2 = PTR_hybridDataField_00396030;
  uVar9 = facebook::jni::getHybridDataFromField
                    ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uStack_88 = *in_x8;
  local_80 = in_x8[1];
  if (local_80 != 0) {
    FUN_00259a00(1,local_80 + 8);
  }
  local_90 = &PTR_FUN_0038bc60;
                    /* try { // try from 0034ba7c to 0034ba83 has its CatchHandler @ 0034bcb0 */
  local_70 = &local_90;
  FUN_0031e2bc(uVar9,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar11 = &local_90;
LAB_0034baa4:
    (*(code *)(*pppuVar11)[lVar6])();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar6 = 5;
    pppuVar11 = local_70;
    goto LAB_0034baa4;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0034bc1c to 0034bc1f has its CatchHandler @ 0034bc3c */
    uVar9 = FUN_0031e19c(local_90);
    *(undefined8 *)puVar2 = uVar9;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0034bab8 to 0034bac7 has its CatchHandler @ 0034bd0c */
  uVar10 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uVar9 = *in_x8;
  lVar6 = in_x8[1];
  if (lVar6 != 0) {
    FUN_00259a00(1,lVar6 + 8);
  }
  local_90 = &PTR_FUN_0038bce0;
                    /* try { // try from 0034bafc to 0034bb03 has its CatchHandler @ 0034bc70 */
  uStack_88 = uVar9;
  local_80 = lVar6;
  local_70 = &local_90;
  FUN_0031e5cc(uVar10,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar11 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_0034bb30;
    lVar6 = 5;
    pppuVar11 = local_70;
  }
  (*(code *)(*pppuVar11)[lVar6])();
LAB_0034bb30:
  lVar6 = local_98;
  if (local_98 != 0) {
                    /* try { // try from 0034bb38 to 0034bb4b has its CatchHandler @ 0034bd08 */
    plVar12 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar12 + 0xb8))(plVar12,lVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034bd3c  margelo::nitro::rive::JHybridViewModelSpec::getInstanceCountAsync =====

/* margelo::nitro::rive::JHybridViewModelSpec::getInstanceCountAsync() */

void margelo::nitro::rive::JHybridViewModelSpec::getInstanceCountAsync(void)

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
  if (((DAT_0039e228 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039e228), iVar4 != 0)) {
                    /* try { // try from 0034bf4c to 0034bf63 has its CatchHandler @ 0034c020 */
    FUN_0034d7c4(&local_90);
    DAT_0039e220 = FUN_0031e0a0(&local_90,"getInstanceCountAsync");
    __cxa_guard_release(&DAT_0039e228);
  }
  p_Var13 = *(_jmethodID **)(in_x0 + 8);
  p_Var5 = (_jobject *)facebook::jni::Environment::current();
  lVar6 = _JNIEnv::CallObjectMethod(p_Var5,p_Var13,DAT_0039e220);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_98 = lVar6;
                    /* try { // try from 0034bda0 to 0034bda7 has its CatchHandler @ 0034c0c4 */
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
                    /* try { // try from 0034bdc8 to 0034bdcf has its CatchHandler @ 0034c0b4 */
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
                    /* try { // try from 0034bf98 to 0034bf9b has its CatchHandler @ 0034c004 */
    uVar9 = FUN_0031e19c(local_90);
    *(undefined8 *)PTR_hybridDataField_00396030 = uVar9;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0034bdf8 to 0034be0b has its CatchHandler @ 0034c0d0 */
  puVar2 = PTR_hybridDataField_00396030;
  uVar9 = facebook::jni::getHybridDataFromField
                    ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uStack_88 = *in_x8;
  local_80 = in_x8[1];
  if (local_80 != 0) {
    FUN_00259a00(1,local_80 + 8);
  }
  local_90 = &PTR_FUN_0038bd60;
                    /* try { // try from 0034be40 to 0034be47 has its CatchHandler @ 0034c074 */
  local_70 = &local_90;
  FUN_0031e2bc(uVar9,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar11 = &local_90;
LAB_0034be68:
    (*(code *)(*pppuVar11)[lVar6])();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar6 = 5;
    pppuVar11 = local_70;
    goto LAB_0034be68;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0034bfe0 to 0034bfe3 has its CatchHandler @ 0034c000 */
    uVar9 = FUN_0031e19c(local_90);
    *(undefined8 *)puVar2 = uVar9;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0034be7c to 0034be8b has its CatchHandler @ 0034c0d0 */
  uVar10 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uVar9 = *in_x8;
  lVar6 = in_x8[1];
  if (lVar6 != 0) {
    FUN_00259a00(1,lVar6 + 8);
  }
  local_90 = &PTR_FUN_0038bde0;
                    /* try { // try from 0034bec0 to 0034bec7 has its CatchHandler @ 0034c034 */
  uStack_88 = uVar9;
  local_80 = lVar6;
  local_70 = &local_90;
  FUN_0031e5cc(uVar10,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar11 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_0034bef4;
    lVar6 = 5;
    pppuVar11 = local_70;
  }
  (*(code *)(*pppuVar11)[lVar6])();
LAB_0034bef4:
  lVar6 = local_98;
  if (local_98 != 0) {
                    /* try { // try from 0034befc to 0034bf0f has its CatchHandler @ 0034c0cc */
    plVar12 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar12 + 0xb8))(plVar12,lVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034c100  margelo::nitro::rive::JHybridViewModelSpec::createInstanceByIndex =====

/* margelo::nitro::rive::JHybridViewModelSpec::createInstanceByIndex(double) */

void margelo::nitro::rive::JHybridViewModelSpec::createInstanceByIndex(double param_1)

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
  if (((DAT_0039e238 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039e238), iVar3 != 0)) {
                    /* try { // try from 0034c204 to 0034c21b has its CatchHandler @ 0034c230 */
    FUN_0034d7c4(&local_60);
    DAT_0039e230 = FUN_00350340(&local_60,"createInstanceByIndex");
    __cxa_guard_release(&DAT_0039e238);
  }
  p_Var7 = *(_jmethodID **)(in_x0 + 8);
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::CallObjectMethod(p_Var4,p_Var7,param_1,DAT_0039e230);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_50 = lVar5;
  if (lVar5 == 0) {
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 2) = 0;
  }
  else {
                    /* try { // try from 0034c16c to 0034c177 has its CatchHandler @ 0034c244 */
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
                    /* try { // try from 0034c1ac to 0034c1bf has its CatchHandler @ 0034c26c */
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


// ===== 0034c270  margelo::nitro::rive::JHybridViewModelSpec::createInstanceByName =====

/* margelo::nitro::rive::JHybridViewModelSpec::createInstanceByName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void margelo::nitro::rive::JHybridViewModelSpec::createInstanceByName(basic_string *param_1)

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
  if (((DAT_0039e248 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039e248), iVar3 != 0)) {
                    /* try { // try from 0034c3a4 to 0034c3bb has its CatchHandler @ 0034c3d4 */
    FUN_0034d7c4(&local_50);
    DAT_0039e240 = FUN_003502bc(&local_50,"createInstanceByName");
    __cxa_guard_release(&DAT_0039e248);
  }
  pbVar8 = *(byte **)(in_x1 + 0x10);
  p_Var9 = *(_jmethodID **)(param_1 + 8);
  if ((*in_x1 & 1) == 0) {
    pbVar8 = in_x1 + 1;
  }
  facebook::jni::make_jstring((char *)pbVar8);
  plVar7 = local_50;
                    /* try { // try from 0034c2cc to 0034c2eb has its CatchHandler @ 0034c400 */
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::CallObjectMethod(p_Var4,p_Var9,DAT_0039e240,plVar7);
  facebook::jni::throwPendingJniExceptionAsCppException();
  plVar7 = local_50;
  local_40 = lVar5;
  if (local_50 != (long *)0x0) {
                    /* try { // try from 0034c2f8 to 0034c30b has its CatchHandler @ 0034c3fc */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,plVar7);
  }
  if (lVar5 == 0) {
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 2) = 0;
  }
  else {
                    /* try { // try from 0034c310 to 0034c31b has its CatchHandler @ 0034c3e8 */
    JHybridViewModelInstanceSpec::JavaPart::getJHybridViewModelInstanceSpec((JavaPart *)&local_40);
    lVar2 = local_40;
    lVar5 = lStack_48;
    plVar7 = local_50;
    local_50 = (long *)0x0;
    lStack_48 = 0;
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 2) = 0;
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)((long)plVar7 + *(long *)(*plVar7 + -0xa0));
    }
    *in_x8 = (long)plVar7;
    in_x8[1] = lVar5;
    *(undefined1 *)(in_x8 + 2) = 1;
    if (local_40 != 0) {
                    /* try { // try from 0034c350 to 0034c363 has its CatchHandler @ 0034c3f8 */
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


// ===== 0034c428  margelo::nitro::rive::JHybridViewModelSpec::createDefaultInstance =====

/* margelo::nitro::rive::JHybridViewModelSpec::createDefaultInstance() */

void margelo::nitro::rive::JHybridViewModelSpec::createDefaultInstance(void)

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
  long *local_50;
  long lStack_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039e258 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039e258), iVar3 != 0)) {
                    /* try { // try from 0034c51c to 0034c533 has its CatchHandler @ 0034c548 */
    FUN_0034d7c4(&local_50);
    DAT_0039e250 = FUN_00344580(&local_50,"createDefaultInstance");
    __cxa_guard_release(&DAT_0039e258);
  }
  p_Var7 = *(_jmethodID **)(in_x0 + 8);
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::CallObjectMethod(p_Var4,p_Var7,DAT_0039e250);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_40 = lVar5;
  if (lVar5 == 0) {
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 2) = 0;
  }
  else {
                    /* try { // try from 0034c488 to 0034c493 has its CatchHandler @ 0034c55c */
    JHybridViewModelInstanceSpec::JavaPart::getJHybridViewModelInstanceSpec((JavaPart *)&local_40);
    lVar2 = local_40;
    lVar5 = lStack_48;
    plVar6 = local_50;
    local_50 = (long *)0x0;
    lStack_48 = 0;
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 2) = 0;
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)((long)plVar6 + *(long *)(*plVar6 + -0xa0));
    }
    *in_x8 = (long)plVar6;
    in_x8[1] = lVar5;
    *(undefined1 *)(in_x8 + 2) = 1;
    if (local_40 != 0) {
                    /* try { // try from 0034c4c8 to 0034c4db has its CatchHandler @ 0034c584 */
      plVar6 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,lVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034c588  margelo::nitro::rive::JHybridViewModelSpec::createInstance =====

/* margelo::nitro::rive::JHybridViewModelSpec::createInstance() */

void margelo::nitro::rive::JHybridViewModelSpec::createInstance(void)

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
  long *local_50;
  long lStack_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039e268 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039e268), iVar3 != 0)) {
                    /* try { // try from 0034c67c to 0034c693 has its CatchHandler @ 0034c6a8 */
    FUN_0034d7c4(&local_50);
    DAT_0039e260 = FUN_00344580(&local_50,"createInstance");
    __cxa_guard_release(&DAT_0039e268);
  }
  p_Var7 = *(_jmethodID **)(in_x0 + 8);
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::CallObjectMethod(p_Var4,p_Var7,DAT_0039e260);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_40 = lVar5;
  if (lVar5 == 0) {
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 2) = 0;
  }
  else {
                    /* try { // try from 0034c5e8 to 0034c5f3 has its CatchHandler @ 0034c6bc */
    JHybridViewModelInstanceSpec::JavaPart::getJHybridViewModelInstanceSpec((JavaPart *)&local_40);
    lVar2 = local_40;
    lVar5 = lStack_48;
    plVar6 = local_50;
    local_50 = (long *)0x0;
    lStack_48 = 0;
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 2) = 0;
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)((long)plVar6 + *(long *)(*plVar6 + -0xa0));
    }
    *in_x8 = (long)plVar6;
    in_x8[1] = lVar5;
    *(undefined1 *)(in_x8 + 2) = 1;
    if (local_40 != 0) {
                    /* try { // try from 0034c628 to 0034c63b has its CatchHandler @ 0034c6e4 */
      plVar6 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,lVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034c6e8  margelo::nitro::rive::JHybridViewModelSpec::createInstanceByNameAsync =====

/* margelo::nitro::rive::JHybridViewModelSpec::createInstanceByNameAsync(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void margelo::nitro::rive::JHybridViewModelSpec::createInstanceByNameAsync(basic_string *param_1)

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
  byte *in_x1;
  undefined8 *in_x8;
  byte *pbVar13;
  _jmethodID *p_Var14;
  long local_98;
  undefined **local_90;
  undefined8 uStack_88;
  long local_80;
  undefined ***local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039e278 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039e278), iVar4 != 0)) {
                    /* try { // try from 0034c938 to 0034c94f has its CatchHandler @ 0034ca10 */
    FUN_0034d7c4(&local_90);
    DAT_0039e270 = FUN_00331c28(&local_90,"createInstanceByNameAsync");
    __cxa_guard_release(&DAT_0039e278);
  }
  pbVar13 = *(byte **)(in_x1 + 0x10);
  p_Var14 = *(_jmethodID **)(param_1 + 8);
  if ((*in_x1 & 1) == 0) {
    pbVar13 = in_x1 + 1;
  }
  facebook::jni::make_jstring((char *)pbVar13);
  ppuVar8 = local_90;
                    /* try { // try from 0034c74c to 0034c76b has its CatchHandler @ 0034cadc */
  p_Var5 = (_jobject *)facebook::jni::Environment::current();
  lVar6 = _JNIEnv::CallObjectMethod(p_Var5,p_Var14,DAT_0039e270,ppuVar8);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_98 = lVar6;
  if (local_90 != (undefined **)0x0) {
                    /* try { // try from 0034c778 to 0034c78b has its CatchHandler @ 0034cac0 */
    plVar7 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb8))(plVar7,local_90);
  }
                    /* try { // try from 0034c78c to 0034c793 has its CatchHandler @ 0034cab4 */
  ppuVar8 = (undefined **)operator_new(0x80);
  *in_x8 = ppuVar8;
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
                    /* try { // try from 0034c7b4 to 0034c7bb has its CatchHandler @ 0034caa4 */
  puVar9 = (undefined8 *)operator_new(0x20);
  puVar9[2] = 0;
  *puVar9 = &PTR____shared_weak_count_003925d0;
  puVar9[1] = 0;
  puVar3 = PTR_hybridDataField_00396038;
  puVar9[3] = ppuVar8;
  in_x8[1] = puVar9;
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0034c988 to 0034c98b has its CatchHandler @ 0034c9f4 */
    uVar10 = FUN_0031e19c(local_90);
    *(undefined8 *)PTR_hybridDataField_00396030 = uVar10;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0034c7e4 to 0034c7f7 has its CatchHandler @ 0034cac4 */
  puVar2 = PTR_hybridDataField_00396030;
  uVar10 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uStack_88 = *in_x8;
  local_80 = in_x8[1];
  if (local_80 != 0) {
    FUN_00259a00(1,local_80 + 8);
  }
  local_90 = &PTR_FUN_0038be78;
                    /* try { // try from 0034c82c to 0034c833 has its CatchHandler @ 0034ca64 */
  local_70 = &local_90;
  FUN_0031e2bc(uVar10,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar12 = &local_90;
LAB_0034c854:
    (*(code *)(*pppuVar12)[lVar6])();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar6 = 5;
    pppuVar12 = local_70;
    goto LAB_0034c854;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0034c9d0 to 0034c9d3 has its CatchHandler @ 0034c9f0 */
    uVar10 = FUN_0031e19c(local_90);
    *(undefined8 *)puVar2 = uVar10;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0034c868 to 0034c877 has its CatchHandler @ 0034cac4 */
  uVar11 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uVar10 = *in_x8;
  lVar6 = in_x8[1];
  if (lVar6 != 0) {
    FUN_00259a00(1,lVar6 + 8);
  }
  local_90 = &PTR_FUN_0038bef8;
                    /* try { // try from 0034c8ac to 0034c8b3 has its CatchHandler @ 0034ca24 */
  uStack_88 = uVar10;
  local_80 = lVar6;
  local_70 = &local_90;
  FUN_0031e5cc(uVar11,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar12 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_0034c8e0;
    lVar6 = 5;
    pppuVar12 = local_70;
  }
  (*(code *)(*pppuVar12)[lVar6])();
LAB_0034c8e0:
  lVar6 = local_98;
  if (local_98 != 0) {
                    /* try { // try from 0034c8e8 to 0034c8fb has its CatchHandler @ 0034cabc */
    plVar7 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb8))(plVar7,lVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034cb04  margelo::nitro::rive::JHybridViewModelSpec::createDefaultInstanceAsync =====

/* margelo::nitro::rive::JHybridViewModelSpec::createDefaultInstanceAsync() */

void margelo::nitro::rive::JHybridViewModelSpec::createDefaultInstanceAsync(void)

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
  if (((DAT_0039e288 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039e288), iVar4 != 0)) {
                    /* try { // try from 0034cd14 to 0034cd2b has its CatchHandler @ 0034cde8 */
    FUN_0034d7c4(&local_90);
    DAT_0039e280 = FUN_0031e0a0(&local_90,"createDefaultInstanceAsync");
    __cxa_guard_release(&DAT_0039e288);
  }
  p_Var13 = *(_jmethodID **)(in_x0 + 8);
  p_Var5 = (_jobject *)facebook::jni::Environment::current();
  lVar6 = _JNIEnv::CallObjectMethod(p_Var5,p_Var13,DAT_0039e280);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_98 = lVar6;
                    /* try { // try from 0034cb68 to 0034cb6f has its CatchHandler @ 0034ce8c */
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
                    /* try { // try from 0034cb90 to 0034cb97 has its CatchHandler @ 0034ce7c */
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
                    /* try { // try from 0034cd60 to 0034cd63 has its CatchHandler @ 0034cdcc */
    uVar9 = FUN_0031e19c(local_90);
    *(undefined8 *)PTR_hybridDataField_00396030 = uVar9;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0034cbc0 to 0034cbd3 has its CatchHandler @ 0034ce98 */
  puVar2 = PTR_hybridDataField_00396030;
  uVar9 = facebook::jni::getHybridDataFromField
                    ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uStack_88 = *in_x8;
  local_80 = in_x8[1];
  if (local_80 != 0) {
    FUN_00259a00(1,local_80 + 8);
  }
  local_90 = &PTR_FUN_0038bf78;
                    /* try { // try from 0034cc08 to 0034cc0f has its CatchHandler @ 0034ce3c */
  local_70 = &local_90;
  FUN_0031e2bc(uVar9,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar11 = &local_90;
LAB_0034cc30:
    (*(code *)(*pppuVar11)[lVar6])();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar6 = 5;
    pppuVar11 = local_70;
    goto LAB_0034cc30;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0034cda8 to 0034cdab has its CatchHandler @ 0034cdc8 */
    uVar9 = FUN_0031e19c(local_90);
    *(undefined8 *)puVar2 = uVar9;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0034cc44 to 0034cc53 has its CatchHandler @ 0034ce98 */
  uVar10 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uVar9 = *in_x8;
  lVar6 = in_x8[1];
  if (lVar6 != 0) {
    FUN_00259a00(1,lVar6 + 8);
  }
  local_90 = &PTR_FUN_0038bff8;
                    /* try { // try from 0034cc88 to 0034cc8f has its CatchHandler @ 0034cdfc */
  uStack_88 = uVar9;
  local_80 = lVar6;
  local_70 = &local_90;
  FUN_0031e5cc(uVar10,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar11 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_0034ccbc;
    lVar6 = 5;
    pppuVar11 = local_70;
  }
  (*(code *)(*pppuVar11)[lVar6])();
LAB_0034ccbc:
  lVar6 = local_98;
  if (local_98 != 0) {
                    /* try { // try from 0034ccc4 to 0034ccd7 has its CatchHandler @ 0034ce94 */
    plVar12 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar12 + 0xb8))(plVar12,lVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034cec8  margelo::nitro::rive::JHybridViewModelSpec::createBlankInstanceAsync =====

/* margelo::nitro::rive::JHybridViewModelSpec::createBlankInstanceAsync() */

void margelo::nitro::rive::JHybridViewModelSpec::createBlankInstanceAsync(void)

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
  if (((DAT_0039e298 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039e298), iVar4 != 0)) {
                    /* try { // try from 0034d0d8 to 0034d0ef has its CatchHandler @ 0034d1ac */
    FUN_0034d7c4(&local_90);
    DAT_0039e290 = FUN_0031e0a0(&local_90,"createBlankInstanceAsync");
    __cxa_guard_release(&DAT_0039e298);
  }
  p_Var13 = *(_jmethodID **)(in_x0 + 8);
  p_Var5 = (_jobject *)facebook::jni::Environment::current();
  lVar6 = _JNIEnv::CallObjectMethod(p_Var5,p_Var13,DAT_0039e290);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_98 = lVar6;
                    /* try { // try from 0034cf2c to 0034cf33 has its CatchHandler @ 0034d250 */
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
                    /* try { // try from 0034cf54 to 0034cf5b has its CatchHandler @ 0034d240 */
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
                    /* try { // try from 0034d124 to 0034d127 has its CatchHandler @ 0034d190 */
    uVar9 = FUN_0031e19c(local_90);
    *(undefined8 *)PTR_hybridDataField_00396030 = uVar9;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0034cf84 to 0034cf97 has its CatchHandler @ 0034d25c */
  puVar2 = PTR_hybridDataField_00396030;
  uVar9 = facebook::jni::getHybridDataFromField
                    ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uStack_88 = *in_x8;
  local_80 = in_x8[1];
  if (local_80 != 0) {
    FUN_00259a00(1,local_80 + 8);
  }
  local_90 = &PTR_FUN_0038c078;
                    /* try { // try from 0034cfcc to 0034cfd3 has its CatchHandler @ 0034d200 */
  local_70 = &local_90;
  FUN_0031e2bc(uVar9,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar11 = &local_90;
LAB_0034cff4:
    (*(code *)(*pppuVar11)[lVar6])();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar6 = 5;
    pppuVar11 = local_70;
    goto LAB_0034cff4;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 0034d16c to 0034d16f has its CatchHandler @ 0034d18c */
    uVar9 = FUN_0031e19c(local_90);
    *(undefined8 *)puVar2 = uVar9;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0034d008 to 0034d017 has its CatchHandler @ 0034d25c */
  uVar10 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uVar9 = *in_x8;
  lVar6 = in_x8[1];
  if (lVar6 != 0) {
    FUN_00259a00(1,lVar6 + 8);
  }
  local_90 = &PTR_FUN_0038c0f8;
                    /* try { // try from 0034d04c to 0034d053 has its CatchHandler @ 0034d1c0 */
  uStack_88 = uVar9;
  local_80 = lVar6;
  local_70 = &local_90;
  FUN_0031e5cc(uVar10,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar11 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_0034d080;
    lVar6 = 5;
    pppuVar11 = local_70;
  }
  (*(code *)(*pppuVar11)[lVar6])();
LAB_0034d080:
  lVar6 = local_98;
  if (local_98 != 0) {
                    /* try { // try from 0034d088 to 0034d09b has its CatchHandler @ 0034d258 */
    plVar12 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar12 + 0xb8))(plVar12,lVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034d28c  FUN_0034d28c =====

void FUN_0034d28c(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_0034d49c(this);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034d30c  FUN_0034d30c =====

void FUN_0034d30c(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_0034d49c(this);
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


// ===== 0034d394  FUN_0034d394 =====

void FUN_0034d394(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_0034d49c(this);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034d414  FUN_0034d414 =====

void FUN_0034d414(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_0034d49c(this);
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


// ===== 0034d49c  FUN_0034d49c =====

void FUN_0034d49c(long *param_1)

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
  
  puVar2 = PTR_vtable_00396af8;
  local_50 = (long *)&local_70;
  pppuVar3 = &local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1[2] = (long)(PTR_vtable_00396af8 + 0x168);
  param_1[0xe] = (long)(puVar2 + 0x1f0);
  *param_1 = (long)(puVar2 + 0xa0);
  local_70 = &PTR_FUN_0038c178;
  plStack_68 = param_1;
                    /* try { // try from 0034d4f4 to 0034d4fb has its CatchHandler @ 0034d570 */
  facebook::jni::ThreadScope::WithClassLoader((function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar5 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_0034d528;
    lVar5 = 5;
    pppuVar3 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar3 + lVar5 * 8))();
LAB_0034d528:
  lVar5 = param_1[1];
  if (lVar5 != 0) {
                    /* try { // try from 0034d530 to 0034d543 has its CatchHandler @ 0034d574 */
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


// ===== 0034d578  FUN_0034d578 =====

void FUN_0034d578(void *param_1)

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


// ===== 0034d5b0  FUN_0034d5b0 =====

void FUN_0034d5b0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_0038c178;
  puVar2[1] = uVar4;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034d60c  FUN_0034d60c =====

void FUN_0034d60c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_0038c178;
  param_2[1] = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034d654  FUN_0034d654 =====

void FUN_0034d654(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034d68c  FUN_0034d68c =====

void FUN_0034d68c(void *param_1)

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


// ===== 0034d6c4  FUN_0034d6c4 =====

void FUN_0034d6c4(long param_1)

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
                    /* try { // try from 0034d6f0 to 0034d703 has its CatchHandler @ 0034d730 */
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


// ===== 0034d734  FUN_0034d734 =====

void FUN_0034d734(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00396b28) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0034d784  FUN_0034d784 =====

undefined * FUN_0034d784(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00396b30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034d7c4  FUN_0034d7c4 =====

void FUN_0034d7c4(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00396b58 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00396b58), iVar2 != 0))
  {
                    /* try { // try from 0034d834 to 0034d847 has its CatchHandler @ 0034d858 */
    facebook::jni::findClassStatic(PTR_kBaseName_00396b60);
    __cxa_guard_release(PTR_cls_00396b58);
  }
  *param_1 = *(undefined8 *)PTR_cls_00396b50;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034d884  FUN_0034d884 =====

void FUN_0034d884(undefined8 *param_1)

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
    FUN_0034eba8(pvVar3);
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      operator_delete(pvVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034d8fc  FUN_0034d8fc =====

void FUN_0034d8fc(long *param_1)

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


// ===== 0034d988  FUN_0034d988 =====

void FUN_0034d988(long *param_1)

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


// ===== 0034da14  FUN_0034da14 =====

void FUN_0034da14(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038c0f8;
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


// ===== 0034daac  FUN_0034daac =====

void FUN_0034daac(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038c0f8;
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


// ===== 0034db38  FUN_0034db38 =====

void FUN_0034db38(long param_1)

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
  *puVar4 = &PTR_FUN_0038c0f8;
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


// ===== 0034dbb0  FUN_0034dbb0 =====

void FUN_0034dbb0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0038c0f8;
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


// ===== 0034dc14  FUN_0034dc14 =====

void FUN_0034dc14(long param_1)

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


// ===== 0034dca0  FUN_0034dca0 =====

void FUN_0034dca0(void *param_1)

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


// ===== 0034dd20  FUN_0034dd20 =====

void FUN_0034dd20(long param_1,undefined8 *param_2)

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
                    /* try { // try from 0034dd58 to 0034dd63 has its CatchHandler @ 0034ddcc */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_0031ef0c(aeStack_98,aJStack_90);
                    /* try { // try from 0034dd70 to 0034dd7b has its CatchHandler @ 0034ddb4 */
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


// ===== 0034ddf4  FUN_0034ddf4 =====

void FUN_0034ddf4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive20JHybridViewModelSpec24createBlankInstanceAsyncEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0034de44  FUN_0034de44 =====

pointer_____offset_0x10___ * FUN_0034de44(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0038c158;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034de84  FUN_0034de84 =====

void FUN_0034de84(long param_1,exception_ptr *param_2)

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
    FUN_00264e5c(local_60,PTR_typeinfo_name_00395548,1);
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0034e034 to 0034e047 has its CatchHandler @ 0034e110 */
    std::__ndk1::operator+("Cannot reject Promise<",(basic_string *)local_60);
                    /* try { // try from 0034e048 to 0034e05b has its CatchHandler @ 0034e0f8 */
    FUN_00263450(abStack_78,auStack_90,"> with a null exception_ptr!");
                    /* try { // try from 0034e060 to 0034e097 has its CatchHandler @ 0034e0c4 */
    std::runtime_error::runtime_error(this,abStack_78);
    if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_0034e144;
  }
  std::__ndk1::mutex::lock();
  uVar2 = *(uint *)(param_1 + 0x20);
  if (uVar2 == 0xffffffff) {
LAB_0034df08:
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    std::exception_ptr::exception_ptr((exception_ptr *)(param_1 + 8),param_2);
    *(undefined4 *)(param_1 + 0x20) = 2;
  }
  else {
    if (uVar2 != 2) {
                    /* try { // try from 0034defc to 0034df07 has its CatchHandler @ 0034e0ac */
      (*(code *)(&PTR_FUN_0038be50)[uVar2])(local_60,param_1 + 8);
      goto LAB_0034df08;
    }
    std::exception_ptr::operator=((exception_ptr *)(param_1 + 8),param_2);
  }
  lVar1 = *(long *)(param_1 + 0x48);
  for (lVar6 = *(long *)(param_1 + 0x40); lVar6 != lVar1; lVar6 = lVar6 + 0x30) {
    plVar4 = *(long **)(lVar6 + 0x20);
    if (plVar4 == (long *)0x0) {
      if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 0034e0a8 to 0034e0ab has its CatchHandler @ 0034e0b4 */
        FUN_0025cd00();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0034defc with catch @ 0034e0ac
                        */
        FUN_0025ad9c();
      }
      goto LAB_0034e144;
    }
                    /* try { // try from 0034df40 to 0034df47 has its CatchHandler @ 0034e0b0 */
    (**(code **)(*plVar4 + 0x30))(plVar4,param_2);
  }
  plVar4 = *(long **)(param_1 + 0x28);
  plVar7 = *(long **)(param_1 + 0x30);
LAB_0034df70:
  if (plVar7 != plVar4) {
    plVar5 = (long *)plVar7[-2];
    plVar7 = plVar7 + -6;
    if (plVar7 != plVar5) goto code_r0x0034df88;
    lVar6 = 4;
    plVar5 = plVar7;
    goto LAB_0034df64;
  }
  plVar7 = *(long **)(param_1 + 0x40);
  plVar5 = *(long **)(param_1 + 0x48);
  *(long **)(param_1 + 0x30) = plVar4;
joined_r0x0034dfa0:
  if (plVar5 != plVar7) {
    plVar4 = (long *)plVar5[-2];
    plVar5 = plVar5 + -6;
    if (plVar5 != plVar4) goto code_r0x0034e008;
    lVar6 = 4;
    plVar4 = plVar5;
    goto LAB_0034dfe0;
  }
  *(long **)(param_1 + 0x48) = plVar7;
  std::__ndk1::mutex::unlock();
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
LAB_0034e144:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0034df88:
  if (plVar5 != (long *)0x0) {
    lVar6 = 5;
LAB_0034df64:
    (**(code **)(*plVar5 + lVar6 * 8))();
  }
  goto LAB_0034df70;
code_r0x0034e008:
  if (plVar4 != (long *)0x0) {
    lVar6 = 5;
LAB_0034dfe0:
    (**(code **)(*plVar4 + lVar6 * 8))();
  }
  goto joined_r0x0034dfa0;
}


// ===== 0034e148  FUN_0034e148 =====

void FUN_0034e148(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034e180  FUN_0034e180 =====

void FUN_0034e180(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*(char *)(param_2 + 0x10) == '\0') ||
      (plVar4 = *(long **)(param_2 + 8), plVar4 == (long *)0x0)) ||
     (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 != 0)) {
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


// ===== 0034e214  FUN_0034e214 =====

void FUN_0034e214(undefined8 param_1,exception_ptr *param_2)

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


// ===== 0034e250  FUN_0034e250 =====

void FUN_0034e250(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038c078;
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


// ===== 0034e2e8  FUN_0034e2e8 =====

void FUN_0034e2e8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038c078;
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


// ===== 0034e374  FUN_0034e374 =====

void FUN_0034e374(long param_1)

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
  *puVar4 = &PTR_FUN_0038c078;
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


// ===== 0034e3ec  FUN_0034e3ec =====

void FUN_0034e3ec(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0038c078;
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


// ===== 0034e450  FUN_0034e450 =====

void FUN_0034e450(long param_1)

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


// ===== 0034e4dc  FUN_0034e4dc =====

void FUN_0034e4dc(void *param_1)

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


// ===== 0034e55c  FUN_0034e55c =====

void FUN_0034e55c(long param_1,long *param_2)

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
                    /* try { // try from 0034e5cc to 0034e5d7 has its CatchHandler @ 0034e668 */
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


// ===== 0034e6b0  FUN_0034e6b0 =====

void FUN_0034e6b0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive20JHybridViewModelSpec24createBlankInstanceAsyncEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0034e700  FUN_0034e700 =====

pointer_____offset_0x10___ * FUN_0034e700(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0038c0d8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034e740  FUN_0034e740 =====

void FUN_0034e740(long param_1,undefined8 *param_2)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 uStack_39;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  std::__ndk1::mutex::lock();
  uVar2 = *(uint *)(param_1 + 0x20);
  if (uVar2 != 0xffffffff) {
    if (uVar2 == 1) {
      cVar3 = *(char *)(param_1 + 0x18);
      if (cVar3 == *(char *)(param_2 + 2)) {
        if (cVar3 != '\0') {
          uVar10 = param_2[1];
          uVar9 = *param_2;
          *param_2 = 0;
          param_2[1] = 0;
          plVar8 = *(long **)(param_1 + 0x10);
          *(undefined8 *)(param_1 + 0x10) = uVar10;
          *(undefined8 *)(param_1 + 8) = uVar9;
          if ((plVar8 != (long *)0x0) &&
             (lVar5 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar5 == 0)) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            std::__ndk1::__shared_weak_count::__release_weak();
          }
        }
      }
      else if (cVar3 == '\0') {
        uVar9 = *param_2;
        *(undefined8 *)(param_1 + 0x10) = param_2[1];
        *(undefined8 *)(param_1 + 8) = uVar9;
        *param_2 = 0;
        param_2[1] = 0;
        *(undefined1 *)(param_1 + 0x18) = 1;
      }
      else {
        plVar8 = *(long **)(param_1 + 0x10);
        if ((plVar8 != (long *)0x0) &&
           (lVar5 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar5 == 0)) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        *(undefined1 *)(param_1 + 0x18) = 0;
      }
      goto LAB_0034e81c;
    }
                    /* try { // try from 0034e7e4 to 0034e7ef has its CatchHandler @ 0034e99c */
    (*(code *)(&PTR_FUN_0038be50)[uVar2])(&uStack_39,param_1 + 8);
  }
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (*(char *)(param_2 + 2) != '\0') {
    uVar9 = *param_2;
    *(undefined8 *)(param_1 + 0x10) = param_2[1];
    *(undefined8 *)(param_1 + 8) = uVar9;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  *(undefined4 *)(param_1 + 0x20) = 1;
LAB_0034e81c:
  plVar8 = *(long **)(param_1 + 0x28);
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar8 != plVar1) {
    do {
      if (*(int *)(param_1 + 0x20) != 1) {
LAB_0034e988:
        if (*(long *)(lVar4 + 0x28) == local_38) {
          FUN_002a9bc8();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0034e7e4 with catch @ 0034e99c
                        */
          FUN_0025ad9c();
        }
        goto LAB_0034e9c8;
      }
      plVar6 = (long *)plVar8[4];
      if (plVar6 == (long *)0x0) {
        if (*(long *)(lVar4 + 0x28) == local_38) {
                    /* try { // try from 0034e984 to 0034e99b has its CatchHandler @ 0034e9a4 */
          FUN_0025cd00();
          goto LAB_0034e988;
        }
        goto LAB_0034e9c8;
      }
                    /* try { // try from 0034e844 to 0034e84b has its CatchHandler @ 0034e9a0 */
      (**(code **)(*plVar6 + 0x30))(plVar6,param_1 + 8);
      plVar8 = plVar8 + 6;
    } while (plVar8 != plVar1);
    plVar1 = *(long **)(param_1 + 0x28);
    plVar6 = *(long **)(param_1 + 0x30);
    plVar8 = plVar6;
joined_r0x0034e860:
    if (plVar6 != plVar1) {
      plVar7 = (long *)plVar6[-2];
      plVar6 = plVar6 + -6;
      plVar8 = plVar1;
      if (plVar6 != plVar7) goto code_r0x0034e894;
      lVar5 = 4;
      plVar7 = plVar6;
      goto LAB_0034e870;
    }
  }
  plVar1 = *(long **)(param_1 + 0x40);
  plVar6 = *(long **)(param_1 + 0x48);
  *(long **)(param_1 + 0x30) = plVar8;
joined_r0x0034e8b0:
  if (plVar6 == plVar1) {
    *(long **)(param_1 + 0x48) = plVar1;
    std::__ndk1::mutex::unlock();
    if (*(long *)(lVar4 + 0x28) == local_38) {
      return;
    }
LAB_0034e9c8:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  plVar8 = (long *)plVar6[-2];
  plVar6 = plVar6 + -6;
  if (plVar6 != plVar8) goto code_r0x0034e914;
  lVar5 = 4;
  plVar8 = plVar6;
  goto LAB_0034e8ec;
code_r0x0034e894:
  if (plVar7 != (long *)0x0) {
    lVar5 = 5;
LAB_0034e870:
    (**(code **)(*plVar7 + lVar5 * 8))();
  }
  goto joined_r0x0034e860;
code_r0x0034e914:
  if (plVar8 != (long *)0x0) {
    lVar5 = 5;
LAB_0034e8ec:
    (**(code **)(*plVar8 + lVar5 * 8))();
  }
  goto joined_r0x0034e8b0;
}


// ===== 0034e9cc  FUN_0034e9cc =====

void FUN_0034e9cc(long *param_1,char param_2)

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


// ===== 0034ea60  FUN_0034ea60 =====

void FUN_0034ea60(__shared_weak_count *param_1)

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


// ===== 0034eaac  FUN_0034eaac =====

void FUN_0034eaac(long param_1)

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
    FUN_0034eba8(pvVar3);
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      operator_delete(pvVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034eb20  FUN_0034eb20 =====

void FUN_0034eb20(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00396b20) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0034eb70  FUN_0034eb70 =====

void FUN_0034eb70(void *param_1)

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


// ===== 0034eba8  FUN_0034eba8 =====

void FUN_0034eba8(long param_1)

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
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* try { // try from 0034ecec to 0034ed77 has its CatchHandler @ 0034edc4 */
    _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc
              (local_80,"Timeouted: Promise<");
    FUN_00264e5c(local_98,PTR_typeinfo_name_00395548,0);
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
    FUN_0034de84(param_1,local_68);
    std::exception_ptr::~exception_ptr(local_68);
    std::runtime_error::~runtime_error(arStack_a8);
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  std::__ndk1::mutex::~mutex((mutex *)(param_1 + 0x58));
  plVar4 = *(long **)(param_1 + 0x40);
  if (plVar4 != (long *)0x0) {
    plVar5 = *(long **)(param_1 + 0x48);
    plVar2 = plVar4;
    if (plVar5 != plVar4) {
      do {
        plVar2 = (long *)plVar5[-2];
        plVar5 = plVar5 + -6;
        if (plVar5 == plVar2) {
          lVar3 = 4;
          plVar2 = plVar5;
LAB_0034ec00:
          (**(code **)(*plVar2 + lVar3 * 8))();
        }
        else if (plVar2 != (long *)0x0) {
          lVar3 = 5;
          goto LAB_0034ec00;
        }
      } while (plVar5 != plVar4);
      plVar2 = *(long **)(param_1 + 0x40);
    }
    *(long **)(param_1 + 0x48) = plVar4;
    operator_delete(plVar2);
  }
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 != (long *)0x0) {
    plVar5 = *(long **)(param_1 + 0x30);
    plVar2 = plVar4;
    if (plVar5 != plVar4) {
      do {
        plVar2 = (long *)plVar5[-2];
        plVar5 = plVar5 + -6;
        if (plVar5 == plVar2) {
          lVar3 = 4;
          plVar2 = plVar5;
LAB_0034ec60:
          (**(code **)(*plVar2 + lVar3 * 8))();
        }
        else if (plVar2 != (long *)0x0) {
          lVar3 = 5;
          goto LAB_0034ec60;
        }
      } while (plVar5 != plVar4);
      plVar2 = *(long **)(param_1 + 0x28);
    }
    *(long **)(param_1 + 0x30) = plVar4;
    operator_delete(plVar2);
  }
  if (*(uint *)(param_1 + 0x20) != 0xffffffff) {
                    /* try { // try from 0034ecb4 to 0034ecbf has its CatchHandler @ 0034edc8 */
    (*(code *)(&PTR_FUN_0038be50)[*(uint *)(param_1 + 0x20)])(local_50,param_1 + 8);
  }
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0034edcc  FUN_0034edcc =====

void FUN_0034edcc(long *param_1)

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


// ===== 0034ee58  FUN_0034ee58 =====

void FUN_0034ee58(long *param_1)

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


// ===== 0034eee4  FUN_0034eee4 =====

void FUN_0034eee4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038bff8;
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


// ===== 0034ef7c  FUN_0034ef7c =====

void FUN_0034ef7c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038bff8;
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


// ===== 0034f008  FUN_0034f008 =====

void FUN_0034f008(long param_1)

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
  *puVar4 = &PTR_FUN_0038bff8;
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


// ===== 0034f080  FUN_0034f080 =====

void FUN_0034f080(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0038bff8;
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


// ===== 0034f0e4  FUN_0034f0e4 =====

void FUN_0034f0e4(long param_1)

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


// ===== 0034f170  FUN_0034f170 =====

void FUN_0034f170(void *param_1)

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


// ===== 0034f1f0  FUN_0034f1f0 =====

void FUN_0034f1f0(long param_1,undefined8 *param_2)

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
                    /* try { // try from 0034f228 to 0034f233 has its CatchHandler @ 0034f29c */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_0031ef0c(aeStack_98,aJStack_90);
                    /* try { // try from 0034f240 to 0034f24b has its CatchHandler @ 0034f284 */
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


// ===== 0034f2c4  FUN_0034f2c4 =====

void FUN_0034f2c4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive20JHybridViewModelSpec26createDefaultInstanceAsyncEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0034f314  FUN_0034f314 =====

pointer_____offset_0x10___ * FUN_0034f314(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0038c058;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034f354  FUN_0034f354 =====

void FUN_0034f354(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038bf78;
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


// ===== 0034f3ec  FUN_0034f3ec =====

void FUN_0034f3ec(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038bf78;
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


// ===== 0034f478  FUN_0034f478 =====

void FUN_0034f478(long param_1)

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
  *puVar4 = &PTR_FUN_0038bf78;
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


// ===== 0034f4f0  FUN_0034f4f0 =====

void FUN_0034f4f0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0038bf78;
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


// ===== 0034f554  FUN_0034f554 =====

void FUN_0034f554(long param_1)

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


// ===== 0034f5e0  FUN_0034f5e0 =====

void FUN_0034f5e0(void *param_1)

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


// ===== 0034f660  FUN_0034f660 =====

void FUN_0034f660(long param_1,long *param_2)

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
                    /* try { // try from 0034f6d0 to 0034f6db has its CatchHandler @ 0034f76c */
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


// ===== 0034f7b4  FUN_0034f7b4 =====

void FUN_0034f7b4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive20JHybridViewModelSpec26createDefaultInstanceAsyncEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0034f804  FUN_0034f804 =====

pointer_____offset_0x10___ * FUN_0034f804(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0038bfd8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034f844  FUN_0034f844 =====

void FUN_0034f844(long *param_1)

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


// ===== 0034f8d0  FUN_0034f8d0 =====

void FUN_0034f8d0(long *param_1)

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


// ===== 0034f95c  FUN_0034f95c =====

void FUN_0034f95c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038bef8;
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


// ===== 0034f9f4  FUN_0034f9f4 =====

void FUN_0034f9f4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038bef8;
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


// ===== 0034fa80  FUN_0034fa80 =====

void FUN_0034fa80(long param_1)

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
  *puVar4 = &PTR_FUN_0038bef8;
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


// ===== 0034faf8  FUN_0034faf8 =====

void FUN_0034faf8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0038bef8;
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


// ===== 0034fb5c  FUN_0034fb5c =====

void FUN_0034fb5c(long param_1)

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


// ===== 0034fbe8  FUN_0034fbe8 =====

void FUN_0034fbe8(void *param_1)

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


// ===== 0034fc68  FUN_0034fc68 =====

void FUN_0034fc68(long param_1,undefined8 *param_2)

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
                    /* try { // try from 0034fca0 to 0034fcab has its CatchHandler @ 0034fd14 */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_0031ef0c(aeStack_98,aJStack_90);
                    /* try { // try from 0034fcb8 to 0034fcc3 has its CatchHandler @ 0034fcfc */
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


// ===== 0034fd3c  FUN_0034fd3c =====

void FUN_0034fd3c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive20JHybridViewModelSpec25createInstanceByNameAsyncERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEENK3$_0clEvEUlRKN8facebook3jni9alias_refINSE_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0034fd8c  FUN_0034fd8c =====

pointer_____offset_0x10___ * FUN_0034fd8c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0038bf58;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034fdcc  FUN_0034fdcc =====

void FUN_0034fdcc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038be78;
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


// ===== 0034fe64  FUN_0034fe64 =====

void FUN_0034fe64(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038be78;
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


// ===== 0034fef0  FUN_0034fef0 =====

void FUN_0034fef0(long param_1)

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
  *puVar4 = &PTR_FUN_0038be78;
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


// ===== 0034ff68  FUN_0034ff68 =====

void FUN_0034ff68(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0038be78;
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


// ===== 0034ffcc  FUN_0034ffcc =====

void FUN_0034ffcc(long param_1)

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


// ===== 00350058  FUN_00350058 =====

void FUN_00350058(void *param_1)

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


// ===== 003500d8  FUN_003500d8 =====

void FUN_003500d8(long param_1,long *param_2)

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
                    /* try { // try from 00350148 to 00350153 has its CatchHandler @ 003501e4 */
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


// ===== 0035022c  FUN_0035022c =====

void FUN_0035022c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive20JHybridViewModelSpec25createInstanceByNameAsyncERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEENK3$_0clEvEUlRKN8facebook3jni9alias_refINSE_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0035027c  FUN_0035027c =====

pointer_____offset_0x10___ * FUN_0035027c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0038bed8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003502bc  FUN_003502bc =====

long FUN_003502bc(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,param_2,PTR_kDescriptor_00396b70);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00350340  FUN_00350340 =====

long FUN_00350340(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,param_2,PTR_kDescriptor_00396b68);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003503c4  FUN_003503c4 =====

void FUN_003503c4(long *param_1)

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


// ===== 00350450  FUN_00350450 =====

void FUN_00350450(long *param_1)

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


// ===== 003504dc  FUN_003504dc =====

void FUN_003504dc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038bde0;
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


// ===== 00350574  FUN_00350574 =====

void FUN_00350574(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038bde0;
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


// ===== 00350600  FUN_00350600 =====

void FUN_00350600(long param_1)

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
  *puVar4 = &PTR_FUN_0038bde0;
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


// ===== 00350678  FUN_00350678 =====

void FUN_00350678(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0038bde0;
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


// ===== 003506dc  FUN_003506dc =====

void FUN_003506dc(long param_1)

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


// ===== 00350768  FUN_00350768 =====

void FUN_00350768(void *param_1)

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


// ===== 003507e8  FUN_003507e8 =====

void FUN_003507e8(long param_1,undefined8 *param_2)

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
                    /* try { // try from 00350820 to 0035082b has its CatchHandler @ 00350894 */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_0031ef0c(aeStack_98,aJStack_90);
                    /* try { // try from 00350838 to 00350843 has its CatchHandler @ 0035087c */
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


// ===== 003508bc  FUN_003508bc =====

void FUN_003508bc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive20JHybridViewModelSpec21getInstanceCountAsyncEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0035090c  FUN_0035090c =====

pointer_____offset_0x10___ * FUN_0035090c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0038be40;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035094c  FUN_0035094c =====

void FUN_0035094c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038bd60;
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


// ===== 003509e4  FUN_003509e4 =====

void FUN_003509e4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038bd60;
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


// ===== 00350a70  FUN_00350a70 =====

void FUN_00350a70(long param_1)

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
  *puVar4 = &PTR_FUN_0038bd60;
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


// ===== 00350ae8  FUN_00350ae8 =====

void FUN_00350ae8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0038bd60;
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


// ===== 00350b4c  FUN_00350b4c =====

void FUN_00350b4c(long param_1)

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


// ===== 00350bd8  FUN_00350bd8 =====

void FUN_00350bd8(void *param_1)

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


// ===== 00350c58  FUN_00350c58 =====

void FUN_00350c58(long param_1,undefined8 *param_2)

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


// ===== 00350cbc  FUN_00350cbc =====

void FUN_00350cbc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive20JHybridViewModelSpec21getInstanceCountAsyncEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00350d0c  FUN_00350d0c =====

pointer_____offset_0x10___ * FUN_00350d0c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0038bdc0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00350d4c  FUN_00350d4c =====

void FUN_00350d4c(long *param_1)

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


// ===== 00350dd8  FUN_00350dd8 =====

void FUN_00350dd8(long *param_1)

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


// ===== 00350e64  FUN_00350e64 =====

void FUN_00350e64(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038bce0;
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


// ===== 00350efc  FUN_00350efc =====

void FUN_00350efc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038bce0;
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


// ===== 00350f88  FUN_00350f88 =====

void FUN_00350f88(long param_1)

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
  *puVar4 = &PTR_FUN_0038bce0;
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


// ===== 00351000  FUN_00351000 =====

void FUN_00351000(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0038bce0;
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


// ===== 00351064  FUN_00351064 =====

void FUN_00351064(long param_1)

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


// ===== 003510f0  FUN_003510f0 =====

void FUN_003510f0(void *param_1)

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


// ===== 00351170  FUN_00351170 =====

void FUN_00351170(long param_1,undefined8 *param_2)

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
                    /* try { // try from 003511a8 to 003511b3 has its CatchHandler @ 0035121c */
  facebook::jni::JniException::JniException(aJStack_90,aJStack_58);
  FUN_0031ef0c(aeStack_98,aJStack_90);
                    /* try { // try from 003511c0 to 003511cb has its CatchHandler @ 00351204 */
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


// ===== 00351244  FUN_00351244 =====

void FUN_00351244(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive20JHybridViewModelSpec21getPropertyCountAsyncEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_10JThrowableEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00351294  FUN_00351294 =====

pointer_____offset_0x10___ * FUN_00351294(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0038bd40;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003512d4  FUN_003512d4 =====

void FUN_003512d4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038bc60;
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


// ===== 0035136c  FUN_0035136c =====

void FUN_0035136c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0038bc60;
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


// ===== 003513f8  FUN_003513f8 =====

void FUN_003513f8(long param_1)

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
  *puVar4 = &PTR_FUN_0038bc60;
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


// ===== 00351470  FUN_00351470 =====

void FUN_00351470(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0038bc60;
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


// ===== 003514d4  FUN_003514d4 =====

void FUN_003514d4(long param_1)

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


// ===== 00351560  FUN_00351560 =====

void FUN_00351560(void *param_1)

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


// ===== 003515e0  FUN_003515e0 =====

void FUN_003515e0(long param_1,undefined8 *param_2)

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


// ===== 00351644  FUN_00351644 =====

void FUN_00351644(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZZN7margelo5nitro4rive20JHybridViewModelSpec21getPropertyCountAsyncEvENK3$_0clEvEUlRKN8facebook3jni9alias_refINS5_7JObjectEEEE_"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00351694  FUN_00351694 =====

pointer_____offset_0x10___ * FUN_00351694(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_0038bcc0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003516d4  FUN_003516d4 =====

void FUN_003516d4(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_0038c1f8;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00351718  FUN_00351718 =====

void FUN_00351718(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_0038c1f8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00351770  FUN_00351770 =====

void FUN_00351770(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x003517a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(param_1 + 0x18))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003517b0  FUN_003517b0 =====

void FUN_003517b0(void *param_1)

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


// ===== 003517e8  margelo::nitro::rive::JHybridViewModelSpec::CxxPart::registerNatives =====

/* margelo::nitro::rive::JHybridViewModelSpec::CxxPart::registerNatives() */

void margelo::nitro::rive::JHybridViewModelSpec::CxxPart::registerNatives(void)

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
  puStack_58 = PTR_kDescriptor_0038b580;
  local_60 = PTR_s_initHybrid_0038b578;
  local_50 = PTR_call_0038b588;
  pcVar9 = (char *)operator_new(0x40);
  uVar7 = s_Lcom_margelo_nitro_rive_HybridVi_001d57e6._41_8_;
  uVar6 = s_Lcom_margelo_nitro_rive_HybridVi_001d57e6._33_8_;
  uVar5 = s_Lcom_margelo_nitro_rive_HybridVi_001d57e6._25_8_;
  uVar4 = s_Lcom_margelo_nitro_rive_HybridVi_001d57e6._17_8_;
  uVar3 = s_Lcom_margelo_nitro_rive_HybridVi_001d57e6._9_8_;
  uVar2 = s_Lcom_margelo_nitro_rive_HybridVi_001d57e6._1_8_;
  pcVar9[0x32] = '\0';
  pcVar9[0x30] = 'r';
  pcVar9[0x31] = 't';
  *(undefined8 *)(pcVar9 + 8) = uVar3;
  *(undefined8 *)pcVar9 = uVar2;
  *(undefined8 *)(pcVar9 + 0x18) = uVar5;
  *(undefined8 *)(pcVar9 + 0x10) = uVar4;
  *(undefined8 *)(pcVar9 + 0x28) = uVar7;
  *(undefined8 *)(pcVar9 + 0x20) = uVar6;
                    /* try { // try from 00351850 to 00351857 has its CatchHandler @ 003518c8 */
  facebook::jni::findClassLocal(pcVar9);
  operator_delete(pcVar9);
                    /* try { // try from 00351860 to 00351887 has its CatchHandler @ 003518dc */
  plVar10 = (long *)facebook::jni::Environment::current();
  iVar8 = (**(code **)(*plVar10 + 0x6b8))(plVar10,local_40,&local_60,1);
  facebook::jni::throwCppExceptionIf(iVar8 != 0);
  if (local_40 != 0) {
                    /* try { // try from 00351890 to 003518a3 has its CatchHandler @ 003518d8 */
    plVar10 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar10 + 0xb8))(plVar10,local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00351904  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridViewModelSpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   (*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelSpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, void>::_javaobject*>),
   &margelo::nitro::rive::JHybridViewModelSpec::CxxPart::initHybrid,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelSpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, void>::_javaobject*,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>>::call(_JNIEnv*, _jobject*) */

undefined8
facebook::jni::detail::
FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*>),&margelo::nitro::rive::JHybridViewModelSpec::CxxPart::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelSpec::CxxPart,margelo::nitro::JHybridObject::CxxPart>::JavaPart,facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,facebook::jni::detail::BaseHybridClass>::JavaPart,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>
::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  JniEnvCacher aJStack_48 [24];
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_48,param_1);
                    /* try { // try from 00351930 to 0035193b has its CatchHandler @ 0035196c */
  FUN_0034ae1c(&local_30,param_2);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003519b8  margelo::nitro::rive::JHybridViewModelSpec::getPropertyCount =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelSpec::getPropertyCount() */

void __thiscall
margelo::nitro::rive::JHybridViewModelSpec::getPropertyCount(JHybridViewModelSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getPropertyCount(this + *(long *)(*(long *)this + -0x30));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003519fc  margelo::nitro::rive::JHybridViewModelSpec::getInstanceCount =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelSpec::getInstanceCount() */

void __thiscall
margelo::nitro::rive::JHybridViewModelSpec::getInstanceCount(JHybridViewModelSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getInstanceCount(this + *(long *)(*(long *)this + -0x38));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00351a40  margelo::nitro::rive::JHybridViewModelSpec::getModelName =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelSpec::getModelName() */

void __thiscall margelo::nitro::rive::JHybridViewModelSpec::getModelName(JHybridViewModelSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getModelName(this + *(long *)(*(long *)this + -0x40));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00351a84  margelo::nitro::rive::JHybridViewModelSpec::getPropertyCountAsync =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelSpec::getPropertyCountAsync() */

void __thiscall
margelo::nitro::rive::JHybridViewModelSpec::getPropertyCountAsync(JHybridViewModelSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getPropertyCountAsync();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00351ac8  margelo::nitro::rive::JHybridViewModelSpec::getInstanceCountAsync =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelSpec::getInstanceCountAsync() */

void __thiscall
margelo::nitro::rive::JHybridViewModelSpec::getInstanceCountAsync(JHybridViewModelSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    getInstanceCountAsync();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00351b0c  margelo::nitro::rive::JHybridViewModelSpec::createInstanceByIndex =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelSpec::createInstanceByIndex(double) */

void __thiscall
margelo::nitro::rive::JHybridViewModelSpec::createInstanceByIndex
          (JHybridViewModelSpec *this,double param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    createInstanceByIndex(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00351b50  margelo::nitro::rive::JHybridViewModelSpec::createInstanceByName =====

/* virtual thunk to
   margelo::nitro::rive::JHybridViewModelSpec::createInstanceByName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelSpec::createInstanceByName
          (JHybridViewModelSpec *this,basic_string *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    createInstanceByName((basic_string *)(this + *(long *)(*(long *)this + -0x60)));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00351b94  margelo::nitro::rive::JHybridViewModelSpec::createDefaultInstance =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelSpec::createDefaultInstance() */

void __thiscall
margelo::nitro::rive::JHybridViewModelSpec::createDefaultInstance(JHybridViewModelSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    createDefaultInstance();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00351bd8  margelo::nitro::rive::JHybridViewModelSpec::createInstance =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelSpec::createInstance() */

void __thiscall
margelo::nitro::rive::JHybridViewModelSpec::createInstance(JHybridViewModelSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    createInstance();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00351c1c  margelo::nitro::rive::JHybridViewModelSpec::createInstanceByNameAsync =====

/* virtual thunk to
   margelo::nitro::rive::JHybridViewModelSpec::createInstanceByNameAsync(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelSpec::createInstanceByNameAsync
          (JHybridViewModelSpec *this,basic_string *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    createInstanceByNameAsync((basic_string *)(this + *(long *)(*(long *)this + -0x78)));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00351c60  margelo::nitro::rive::JHybridViewModelSpec::createDefaultInstanceAsync =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelSpec::createDefaultInstanceAsync() */

void __thiscall
margelo::nitro::rive::JHybridViewModelSpec::createDefaultInstanceAsync(JHybridViewModelSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    createDefaultInstanceAsync();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00351ca4  margelo::nitro::rive::JHybridViewModelSpec::createBlankInstanceAsync =====

/* virtual thunk to margelo::nitro::rive::JHybridViewModelSpec::createBlankInstanceAsync() */

void __thiscall
margelo::nitro::rive::JHybridViewModelSpec::createBlankInstanceAsync(JHybridViewModelSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    createBlankInstanceAsync();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00351ce8  margelo::nitro::rive::JHybridViewModelInstanceSpec::JavaPart::getJHybridViewModelInstanceSpec =====

/* margelo::nitro::rive::JHybridViewModelInstanceSpec::JavaPart::getJHybridViewModelInstanceSpec()
    */

void __thiscall
margelo::nitro::rive::JHybridViewModelInstanceSpec::JavaPart::getJHybridViewModelInstanceSpec
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
     (lVar2 = __dynamic_cast(local_38,PTR_typeinfo_00395e60,PTR_typeinfo_00396978,0xffffffffffffffff
                            ), lVar2 == 0)) {
    *in_x8 = 0;
    in_x8[1] = 0;
    this_00 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00351db0 to 00351dbb has its CatchHandler @ 00351df0 */
    std::runtime_error::runtime_error
              (this_00,"Failed to downcast JHybridObject to JHybridViewModelInstanceSpec!");
    if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* try { // try from 00351dd0 to 00351de7 has its CatchHandler @ 00351de8 */
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


// ===== 00351e2c  margelo::nitro::rive::JHybridViewModelInstanceSpec::CxxPart::initHybrid =====

/* margelo::nitro::rive::JHybridViewModelInstanceSpec::CxxPart::initHybrid(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::rive::JHybridViewModelInstanceSpec::CxxPart,
   margelo::nitro::JHybridObject::CxxPart>::JavaPart,
   facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, void>::_javaobject*>) */

void __thiscall
margelo::nitro::rive::JHybridViewModelInstanceSpec::CxxPart::initHybrid
          (undefined8 *param_1,CxxPart *this)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00351e84(&local_30,*(undefined8 *)this);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00351e84  FUN_00351e84 =====

void FUN_00351e84(undefined8 *param_1,undefined8 param_2)

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
                    /* try { // try from 00351ebc to 00351ec3 has its CatchHandler @ 00351fa0 */
  local_48 = param_2;
  margelo::nitro::JHybridObject::CxxPart::CxxPart(pCVar2,&local_48);
  *(undefined **)pCVar2 = PTR_vtable_00396b90 + 0x10;
                    /* try { // try from 00351ed4 to 00351edb has its CatchHandler @ 00351f98 */
  facebook::jni::detail::HybridData::create();
  uVar5 = *param_1;
                    /* try { // try from 00351ee0 to 00351efb has its CatchHandler @ 00351fb4 */
  plVar3 = (long *)facebook::jni::Environment::current();
  lVar4 = (**(code **)(*plVar3 + 200))(plVar3,uVar5);
  facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 00351f04 to 00351f0f has its CatchHandler @ 00351f68 */
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
                    /* try { // try from 00351f30 to 00351f43 has its CatchHandler @ 00351fb0 */
    plVar3 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb8))(plVar3,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00351fec  FUN_00351fec =====

void FUN_00351fec(long *param_1)

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
                    /* try { // try from 00352028 to 0035203b has its CatchHandler @ 00352078 */
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


// ===== 0035207c  margelo::nitro::rive::JHybridViewModelInstanceSpec::CxxPart::createHybridObject =====

/* margelo::nitro::rive::JHybridViewModelInstanceSpec::CxxPart::createHybridObject(facebook::jni::basic_strong_ref<margelo::nitro::JHybridObject::JavaPart,
   facebook::jni::LocalReferenceAllocator> const&) */

void margelo::nitro::rive::JHybridViewModelInstanceSpec::CxxPart::createHybridObject
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
  
  puVar1 = PTR_target_class_00396ba8;
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (*in_x1 == 0) {
LAB_00352338:
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00352344 to 0035234f has its CatchHandler @ 003524dc */
    param_1 = (basic_strong_ref *)
              std::runtime_error::runtime_error
                        (this,
                         "Failed to cast JHybridObject::JavaPart to JHybridViewModelInstanceSpec::JavaPart!"
                        );
    if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 00352360 to 00352377 has its CatchHandler @ 003524d8 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_00352580;
  }
  if (((*PTR_target_class_00396bb0 & 1) == 0) &&
     (param_1 = (basic_strong_ref *)__cxa_guard_acquire(PTR_target_class_00396bb0),
     (int)param_1 != 0)) {
                    /* try { // try from 00352388 to 00352397 has its CatchHandler @ 0035249c */
    facebook::jni::findClassStatic(PTR_kBaseName_00396bb8);
    *(undefined8 *)puVar1 = local_60;
    param_1 = (basic_strong_ref *)__cxa_guard_release(PTR_target_class_00396bb0);
  }
  if (*(long *)puVar1 == 0) {
    if (*(long *)(lVar3 + 0x28) != local_58) goto LAB_00352580;
    FUN_00261580("java/lang/ClassCastException","Could not find class %s.",PTR_kBaseName_00396bb8);
LAB_003523dc:
                    /* try { // try from 003523dc to 003523eb has its CatchHandler @ 003524c8 */
    param_1 = (basic_strong_ref *)FUN_002615d4(local_80,&local_68);
    uVar8 = (ulong)local_80 | 1;
    if ((local_80[0] & 1) != 0) {
      uVar8 = local_70;
    }
    if (*(long *)(lVar3 + 0x28) != local_58) goto LAB_00352580;
                    /* try { // try from 00352410 to 0035242b has its CatchHandler @ 003524b0 */
    FUN_0026171c("java/lang/ClassCastException","Tried to cast from %s to %s.",uVar8,
                 PTR_kBaseName_00396bb8);
  }
  else {
                    /* try { // try from 003520d4 to 003520e7 has its CatchHandler @ 0035251c */
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5,*in_x1);
    local_68 = lVar6;
                    /* try { // try from 003520f0 to 00352107 has its CatchHandler @ 00352518 */
    plVar5 = (long *)facebook::jni::Environment::current();
    cVar4 = (**(code **)(*plVar5 + 0x58))(plVar5,lVar6,*(undefined8 *)puVar1);
    if (cVar4 == '\0') goto LAB_003523dc;
    lVar10 = *in_x1;
    if (lVar10 == 0) {
      local_88 = 0;
    }
    else {
                    /* try { // try from 00352118 to 00352133 has its CatchHandler @ 00352520 */
      plVar5 = (long *)facebook::jni::Environment::current();
      local_88 = (**(code **)(*plVar5 + 200))(plVar5,lVar10);
      facebook::jni::throwPendingJniExceptionAsCppException();
      if (local_88 == 0) {
        pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
        param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar9);
        if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 00352484 to 0035249b has its CatchHandler @ 00352520 */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(pbVar9,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
        }
        goto LAB_00352580;
      }
    }
    if (lVar6 != 0) {
                    /* try { // try from 00352150 to 00352163 has its CatchHandler @ 00352514 */
      plVar5 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar5 + 0xb8))(plVar5,lVar6);
    }
    if (local_88 == 0) goto LAB_00352338;
                    /* try { // try from 00352168 to 0035216f has its CatchHandler @ 00352504 */
    plVar5 = (long *)operator_new(0x98);
    puVar1 = PTR_vtable_00395e70;
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_0038ca60;
    plVar11 = plVar5 + 3;
    *plVar11 = (long)(puVar1 + 0x10);
    puVar2 = PTR_PTR_00396b80;
                    /* try { // try from 003521a0 to 003521bb has its CatchHandler @ 003524fc */
    margelo::nitro::HybridObject::HybridObject((HybridObject *)(plVar5 + 5),PTR_PTR_00396b80 + 0x40)
    ;
    puVar1 = PTR_construction_vtable_00396b88 + 0x98;
    plVar5[5] = (long)(PTR_construction_vtable_00396b88 + 0x168);
    plVar5[3] = (long)puVar1;
                    /* try { // try from 003521d4 to 003521ef has its CatchHandler @ 00352524 */
    plVar7 = (long *)facebook::jni::Environment::current();
    uVar8 = (**(code **)(*plVar7 + 200))(plVar7,local_88);
    facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 003521f4 to 00352203 has its CatchHandler @ 003524ec */
    local_80[0] = uVar8;
    margelo::nitro::JHybridObject::JHybridObject((JHybridObject *)(plVar5 + 0x11),puVar2 + 0x50);
    uVar8 = local_80[0];
    if (local_80[0] != 0) {
                    /* try { // try from 0035220c to 0035221f has its CatchHandler @ 00352510 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,uVar8);
    }
    puVar1 = PTR_vtable_00396b78 + 0xa8;
    puVar2 = PTR_vtable_00396b78 + 0x200;
    plVar5[5] = (long)(PTR_vtable_00396b78 + 0x178);
    *plVar11 = (long)puVar1;
    plVar5[0x11] = (long)puVar2;
                    /* try { // try from 00352240 to 0035225b has its CatchHandler @ 0035252c */
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
                    /* try { // try from 003522f4 to 00352307 has its CatchHandler @ 0035250c */
        plVar5 = (long *)facebook::jni::Environment::current();
        param_1 = (basic_strong_ref *)(**(code **)(*plVar5 + 0xb8))(plVar5,local_88);
      }
      if (*(long *)(lVar3 + 0x28) == local_58) {
        return;
      }
      goto LAB_00352580;
    }
  }
  pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
  param_1 = (basic_strong_ref *)std::bad_alloc::bad_alloc(pbVar9);
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 0035244c to 00352463 has its CatchHandler @ 0035252c */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pbVar9,PTR_typeinfo_003947e0,PTR__bad_alloc_003947c0);
  }
LAB_00352580:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00352584  FUN_00352584 =====

void FUN_00352584(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_0035406c();
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(param_1 + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(param_1 + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003525f8  FUN_003525f8 =====

void FUN_003525f8(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_0035406c();
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


// ===== 00352674  margelo::nitro::rive::JHybridViewModelInstanceSpec::getInstanceName =====

/* margelo::nitro::rive::JHybridViewModelInstanceSpec::getInstanceName() */

void __thiscall
margelo::nitro::rive::JHybridViewModelInstanceSpec::getInstanceName
          (JHybridViewModelInstanceSpec *this)

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
  if (((DAT_0039e2c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039e2c8), iVar2 != 0)) {
                    /* try { // try from 0035272c to 00352743 has its CatchHandler @ 00352758 */
    FUN_00354394(&local_40);
    DAT_0039e2c0 = facebook::jni::JClass::
                   getMethod<facebook::jni::basic_strong_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>()>
                             ((JClass *)&local_40,"getInstanceName");
    __cxa_guard_release(&DAT_0039e2c8);
  }
  p_Var6 = *(_jmethodID **)(this + 8);
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  lVar4 = _JNIEnv::CallObjectMethod(p_Var3,p_Var6,DAT_0039e2c0);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_40 = lVar4;
                    /* try { // try from 003526d0 to 003526db has its CatchHandler @ 0035276c */
  facebook::jni::JString::toStdString();
  lVar4 = local_40;
  if (local_40 != 0) {
                    /* try { // try from 003526e4 to 003526f7 has its CatchHandler @ 00352794 */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00352798  margelo::nitro::rive::JHybridViewModelInstanceSpec::numberProperty =====

/* margelo::nitro::rive::JHybridViewModelInstanceSpec::numberProperty(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void margelo::nitro::rive::JHybridViewModelInstanceSpec::numberProperty(basic_string *param_1)

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
  if (((DAT_0039e2d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039e2d8), iVar3 != 0)) {
                    /* try { // try from 003528cc to 003528db has its CatchHandler @ 003528f4 */
    FUN_00354394(&local_50);
    DAT_0039e2d0 = FUN_003556a8(&local_50);
    __cxa_guard_release(&DAT_0039e2d8);
  }
  pbVar8 = *(byte **)(in_x1 + 0x10);
  p_Var9 = *(_jmethodID **)(param_1 + 8);
  if ((*in_x1 & 1) == 0) {
    pbVar8 = in_x1 + 1;
  }
  facebook::jni::make_jstring((char *)pbVar8);
  plVar7 = local_50;
                    /* try { // try from 003527f4 to 00352813 has its CatchHandler @ 00352920 */
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::CallObjectMethod(p_Var4,p_Var9,DAT_0039e2d0,plVar7);
  facebook::jni::throwPendingJniExceptionAsCppException();
  plVar7 = local_50;
  local_40 = lVar5;
  if (local_50 != (long *)0x0) {
                    /* try { // try from 00352820 to 00352833 has its CatchHandler @ 0035291c */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,plVar7);
  }
  if (lVar5 == 0) {
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 2) = 0;
  }
  else {
                    /* try { // try from 00352838 to 00352843 has its CatchHandler @ 00352908 */
    JHybridViewModelNumberPropertySpec::JavaPart::getJHybridViewModelNumberPropertySpec
              ((JavaPart *)&local_40);
    lVar2 = local_40;
    lVar5 = lStack_48;
    plVar7 = local_50;
    local_50 = (long *)0x0;
    lStack_48 = 0;
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 2) = 0;
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)((long)plVar7 + *(long *)(*plVar7 + -0x70));
    }
    *in_x8 = (long)plVar7;
    in_x8[1] = lVar5;
    *(undefined1 *)(in_x8 + 2) = 1;
    if (local_40 != 0) {
                    /* try { // try from 00352878 to 0035288b has its CatchHandler @ 00352918 */
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


// ===== 00352948  margelo::nitro::rive::JHybridViewModelInstanceSpec::stringProperty =====

/* margelo::nitro::rive::JHybridViewModelInstanceSpec::stringProperty(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void margelo::nitro::rive::JHybridViewModelInstanceSpec::stringProperty(basic_string *param_1)

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
  if (((DAT_0039e2e8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039e2e8), iVar3 != 0)) {
                    /* try { // try from 00352a7c to 00352a8b has its CatchHandler @ 00352aa4 */
    FUN_00354394(&local_50);
    DAT_0039e2e0 = FUN_003555bc(&local_50);
    __cxa_guard_release(&DAT_0039e2e8);
  }
  pbVar8 = *(byte **)(in_x1 + 0x10);
  p_Var9 = *(_jmethodID **)(param_1 + 8);
  if ((*in_x1 & 1) == 0) {
    pbVar8 = in_x1 + 1;
  }
  facebook::jni::make_jstring((char *)pbVar8);
  plVar7 = local_50;
                    /* try { // try from 003529a4 to 003529c3 has its CatchHandler @ 00352ad0 */
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::CallObjectMethod(p_Var4,p_Var9,DAT_0039e2e0,plVar7);
  facebook::jni::throwPendingJniExceptionAsCppException();
  plVar7 = local_50;
  local_40 = lVar5;
  if (local_50 != (long *)0x0) {
                    /* try { // try from 003529d0 to 003529e3 has its CatchHandler @ 00352acc */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,plVar7);
  }
  if (lVar5 == 0) {
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 2) = 0;
  }
  else {
                    /* try { // try from 003529e8 to 003529f3 has its CatchHandler @ 00352ab8 */
    JHybridViewModelStringPropertySpec::JavaPart::getJHybridViewModelStringPropertySpec
              ((JavaPart *)&local_40);
    lVar2 = local_40;
    lVar5 = lStack_48;
    plVar7 = local_50;
    local_50 = (long *)0x0;
    lStack_48 = 0;
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 2) = 0;
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)((long)plVar7 + *(long *)(*plVar7 + -0x70));
    }
    *in_x8 = (long)plVar7;
    in_x8[1] = lVar5;
    *(undefined1 *)(in_x8 + 2) = 1;
    if (local_40 != 0) {
                    /* try { // try from 00352a28 to 00352a3b has its CatchHandler @ 00352ac8 */
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


// ===== 00352af8  margelo::nitro::rive::JHybridViewModelInstanceSpec::booleanProperty =====

/* margelo::nitro::rive::JHybridViewModelInstanceSpec::booleanProperty(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void margelo::nitro::rive::JHybridViewModelInstanceSpec::booleanProperty(basic_string *param_1)

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
  if (((DAT_0039e2f8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039e2f8), iVar3 != 0)) {
                    /* try { // try from 00352c2c to 00352c3b has its CatchHandler @ 00352c54 */
    FUN_00354394(&local_50);
    DAT_0039e2f0 = FUN_003554d0(&local_50);
    __cxa_guard_release(&DAT_0039e2f8);
  }
  pbVar8 = *(byte **)(in_x1 + 0x10);
  p_Var9 = *(_jmethodID **)(param_1 + 8);
  if ((*in_x1 & 1) == 0) {
    pbVar8 = in_x1 + 1;
  }
  facebook::jni::make_jstring((char *)pbVar8);
  plVar7 = local_50;
                    /* try { // try from 00352b54 to 00352b73 has its CatchHandler @ 00352c80 */
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::CallObjectMethod(p_Var4,p_Var9,DAT_0039e2f0,plVar7);
  facebook::jni::throwPendingJniExceptionAsCppException();
  plVar7 = local_50;
  local_40 = lVar5;
  if (local_50 != (long *)0x0) {
                    /* try { // try from 00352b80 to 00352b93 has its CatchHandler @ 00352c7c */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,plVar7);
  }
  if (lVar5 == 0) {
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 2) = 0;
  }
  else {
                    /* try { // try from 00352b98 to 00352ba3 has its CatchHandler @ 00352c68 */
    JHybridViewModelBooleanPropertySpec::JavaPart::getJHybridViewModelBooleanPropertySpec
              ((JavaPart *)&local_40);
    lVar2 = local_40;
    lVar5 = lStack_48;
    plVar7 = local_50;
    local_50 = (long *)0x0;
    lStack_48 = 0;
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 2) = 0;
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)((long)plVar7 + *(long *)(*plVar7 + -0x70));
    }
    *in_x8 = (long)plVar7;
    in_x8[1] = lVar5;
    *(undefined1 *)(in_x8 + 2) = 1;
    if (local_40 != 0) {
                    /* try { // try from 00352bd8 to 00352beb has its CatchHandler @ 00352c78 */
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


// ===== 00352ca8  margelo::nitro::rive::JHybridViewModelInstanceSpec::colorProperty =====

/* margelo::nitro::rive::JHybridViewModelInstanceSpec::colorProperty(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void margelo::nitro::rive::JHybridViewModelInstanceSpec::colorProperty(basic_string *param_1)

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
  if (((DAT_0039e308 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039e308), iVar3 != 0)) {
                    /* try { // try from 00352ddc to 00352deb has its CatchHandler @ 00352e04 */
    FUN_00354394(&local_50);
    DAT_0039e300 = FUN_003553e4(&local_50);
    __cxa_guard_release(&DAT_0039e308);
  }
  pbVar8 = *(byte **)(in_x1 + 0x10);
  p_Var9 = *(_jmethodID **)(param_1 + 8);
  if ((*in_x1 & 1) == 0) {
    pbVar8 = in_x1 + 1;
  }
  facebook::jni::make_jstring((char *)pbVar8);
  plVar7 = local_50;
                    /* try { // try from 00352d04 to 00352d23 has its CatchHandler @ 00352e30 */
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::CallObjectMethod(p_Var4,p_Var9,DAT_0039e300,plVar7);
  facebook::jni::throwPendingJniExceptionAsCppException();
  plVar7 = local_50;
  local_40 = lVar5;
  if (local_50 != (long *)0x0) {
                    /* try { // try from 00352d30 to 00352d43 has its CatchHandler @ 00352e2c */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,plVar7);
  }
  if (lVar5 == 0) {
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 2) = 0;
  }
  else {
                    /* try { // try from 00352d48 to 00352d53 has its CatchHandler @ 00352e18 */
    JHybridViewModelColorPropertySpec::JavaPart::getJHybridViewModelColorPropertySpec
              ((JavaPart *)&local_40);
    lVar2 = local_40;
    lVar5 = lStack_48;
    plVar7 = local_50;
    local_50 = (long *)0x0;
    lStack_48 = 0;
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 2) = 0;
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)((long)plVar7 + *(long *)(*plVar7 + -0x70));
    }
    *in_x8 = (long)plVar7;
    in_x8[1] = lVar5;
    *(undefined1 *)(in_x8 + 2) = 1;
    if (local_40 != 0) {
                    /* try { // try from 00352d88 to 00352d9b has its CatchHandler @ 00352e28 */
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


// ===== 00352e58  margelo::nitro::rive::JHybridViewModelInstanceSpec::enumProperty =====

/* margelo::nitro::rive::JHybridViewModelInstanceSpec::enumProperty(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void margelo::nitro::rive::JHybridViewModelInstanceSpec::enumProperty(basic_string *param_1)

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
  if (((DAT_0039e318 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039e318), iVar3 != 0)) {
                    /* try { // try from 00352f8c to 00352f9b has its CatchHandler @ 00352fb4 */
    FUN_00354394(&local_50);
    DAT_0039e310 = FUN_003552f8(&local_50);
    __cxa_guard_release(&DAT_0039e318);
  }
  pbVar8 = *(byte **)(in_x1 + 0x10);
  p_Var9 = *(_jmethodID **)(param_1 + 8);
  if ((*in_x1 & 1) == 0) {
    pbVar8 = in_x1 + 1;
  }
  facebook::jni::make_jstring((char *)pbVar8);
  plVar7 = local_50;
                    /* try { // try from 00352eb4 to 00352ed3 has its CatchHandler @ 00352fe0 */
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::CallObjectMethod(p_Var4,p_Var9,DAT_0039e310,plVar7);
  facebook::jni::throwPendingJniExceptionAsCppException();
  plVar7 = local_50;
  local_40 = lVar5;
  if (local_50 != (long *)0x0) {
                    /* try { // try from 00352ee0 to 00352ef3 has its CatchHandler @ 00352fdc */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,plVar7);
  }
  if (lVar5 == 0) {
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 2) = 0;
  }
  else {
                    /* try { // try from 00352ef8 to 00352f03 has its CatchHandler @ 00352fc8 */
    JHybridViewModelEnumPropertySpec::JavaPart::getJHybridViewModelEnumPropertySpec
              ((JavaPart *)&local_40);
    lVar2 = local_40;
    lVar5 = lStack_48;
    plVar7 = local_50;
    local_50 = (long *)0x0;
    lStack_48 = 0;
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 2) = 0;
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)((long)plVar7 + *(long *)(*plVar7 + -0x70));
    }
    *in_x8 = (long)plVar7;
    in_x8[1] = lVar5;
    *(undefined1 *)(in_x8 + 2) = 1;
    if (local_40 != 0) {
                    /* try { // try from 00352f38 to 00352f4b has its CatchHandler @ 00352fd8 */
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


// ===== 00353008  margelo::nitro::rive::JHybridViewModelInstanceSpec::triggerProperty =====

/* margelo::nitro::rive::JHybridViewModelInstanceSpec::triggerProperty(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void margelo::nitro::rive::JHybridViewModelInstanceSpec::triggerProperty(basic_string *param_1)

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
  if (((DAT_0039e328 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039e328), iVar3 != 0)) {
                    /* try { // try from 0035313c to 0035314b has its CatchHandler @ 00353164 */
    FUN_00354394(&local_50);
    DAT_0039e320 = FUN_0035520c(&local_50);
    __cxa_guard_release(&DAT_0039e328);
  }
  pbVar8 = *(byte **)(in_x1 + 0x10);
  p_Var9 = *(_jmethodID **)(param_1 + 8);
  if ((*in_x1 & 1) == 0) {
    pbVar8 = in_x1 + 1;
  }
  facebook::jni::make_jstring((char *)pbVar8);
  plVar7 = local_50;
                    /* try { // try from 00353064 to 00353083 has its CatchHandler @ 00353190 */
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::CallObjectMethod(p_Var4,p_Var9,DAT_0039e320,plVar7);
  facebook::jni::throwPendingJniExceptionAsCppException();
  plVar7 = local_50;
  local_40 = lVar5;
  if (local_50 != (long *)0x0) {
                    /* try { // try from 00353090 to 003530a3 has its CatchHandler @ 0035318c */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,plVar7);
  }
  if (lVar5 == 0) {
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 2) = 0;
  }
  else {
                    /* try { // try from 003530a8 to 003530b3 has its CatchHandler @ 00353178 */
    JHybridViewModelTriggerPropertySpec::JavaPart::getJHybridViewModelTriggerPropertySpec
              ((JavaPart *)&local_40);
    lVar2 = local_40;
    lVar5 = lStack_48;
    plVar7 = local_50;
    local_50 = (long *)0x0;
    lStack_48 = 0;
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 2) = 0;
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)((long)plVar7 + *(long *)(*plVar7 + -0x58));
    }
    *in_x8 = (long)plVar7;
    in_x8[1] = lVar5;
    *(undefined1 *)(in_x8 + 2) = 1;
    if (local_40 != 0) {
                    /* try { // try from 003530e8 to 003530fb has its CatchHandler @ 00353188 */
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


// ===== 003531b8  margelo::nitro::rive::JHybridViewModelInstanceSpec::imageProperty =====

/* margelo::nitro::rive::JHybridViewModelInstanceSpec::imageProperty(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void margelo::nitro::rive::JHybridViewModelInstanceSpec::imageProperty(basic_string *param_1)

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
  if (((DAT_0039e338 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039e338), iVar3 != 0)) {
                    /* try { // try from 003532ec to 003532fb has its CatchHandler @ 00353314 */
    FUN_00354394(&local_50);
    DAT_0039e330 = FUN_00355120(&local_50);
    __cxa_guard_release(&DAT_0039e338);
  }
  pbVar8 = *(byte **)(in_x1 + 0x10);
  p_Var9 = *(_jmethodID **)(param_1 + 8);
  if ((*in_x1 & 1) == 0) {
    pbVar8 = in_x1 + 1;
  }
  facebook::jni::make_jstring((char *)pbVar8);
  plVar7 = local_50;
                    /* try { // try from 00353214 to 00353233 has its CatchHandler @ 00353340 */
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::CallObjectMethod(p_Var4,p_Var9,DAT_0039e330,plVar7);
  facebook::jni::throwPendingJniExceptionAsCppException();
  plVar7 = local_50;
  local_40 = lVar5;
  if (local_50 != (long *)0x0) {
                    /* try { // try from 00353240 to 00353253 has its CatchHandler @ 0035333c */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,plVar7);
  }
  if (lVar5 == 0) {
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 2) = 0;
  }
  else {
                    /* try { // try from 00353258 to 00353263 has its CatchHandler @ 00353328 */
    JHybridViewModelImagePropertySpec::JavaPart::getJHybridViewModelImagePropertySpec
              ((JavaPart *)&local_40);
    lVar2 = local_40;
    lVar5 = lStack_48;
    plVar7 = local_50;
    local_50 = (long *)0x0;
    lStack_48 = 0;
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 2) = 0;
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)((long)plVar7 + *(long *)(*plVar7 + -0x58));
    }
    *in_x8 = (long)plVar7;
    in_x8[1] = lVar5;
    *(undefined1 *)(in_x8 + 2) = 1;
    if (local_40 != 0) {
                    /* try { // try from 00353298 to 003532ab has its CatchHandler @ 00353338 */
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


// ===== 00353368  margelo::nitro::rive::JHybridViewModelInstanceSpec::listProperty =====

/* margelo::nitro::rive::JHybridViewModelInstanceSpec::listProperty(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void margelo::nitro::rive::JHybridViewModelInstanceSpec::listProperty(basic_string *param_1)

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
  if (((DAT_0039e348 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039e348), iVar3 != 0)) {
                    /* try { // try from 0035349c to 003534ab has its CatchHandler @ 003534c4 */
    FUN_00354394(&local_50);
    DAT_0039e340 = FUN_00355034(&local_50);
    __cxa_guard_release(&DAT_0039e348);
  }
  pbVar8 = *(byte **)(in_x1 + 0x10);
  p_Var9 = *(_jmethodID **)(param_1 + 8);
  if ((*in_x1 & 1) == 0) {
    pbVar8 = in_x1 + 1;
  }
  facebook::jni::make_jstring((char *)pbVar8);
  plVar7 = local_50;
                    /* try { // try from 003533c4 to 003533e3 has its CatchHandler @ 003534f0 */
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::CallObjectMethod(p_Var4,p_Var9,DAT_0039e340,plVar7);
  facebook::jni::throwPendingJniExceptionAsCppException();
  plVar7 = local_50;
  local_40 = lVar5;
  if (local_50 != (long *)0x0) {
                    /* try { // try from 003533f0 to 00353403 has its CatchHandler @ 003534ec */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,plVar7);
  }
  if (lVar5 == 0) {
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 2) = 0;
  }
  else {
                    /* try { // try from 00353408 to 00353413 has its CatchHandler @ 003534d8 */
    JHybridViewModelListPropertySpec::JavaPart::getJHybridViewModelListPropertySpec
              ((JavaPart *)&local_40);
    lVar2 = local_40;
    lVar5 = lStack_48;
    plVar7 = local_50;
    local_50 = (long *)0x0;
    lStack_48 = 0;
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 2) = 0;
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)((long)plVar7 + *(long *)(*plVar7 + -0xc0));
    }
    *in_x8 = (long)plVar7;
    in_x8[1] = lVar5;
    *(undefined1 *)(in_x8 + 2) = 1;
    if (local_40 != 0) {
                    /* try { // try from 00353448 to 0035345b has its CatchHandler @ 003534e8 */
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


// ===== 00353518  margelo::nitro::rive::JHybridViewModelInstanceSpec::artboardProperty =====

/* margelo::nitro::rive::JHybridViewModelInstanceSpec::artboardProperty(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void margelo::nitro::rive::JHybridViewModelInstanceSpec::artboardProperty(basic_string *param_1)

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
  if (((DAT_0039e358 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039e358), iVar3 != 0)) {
                    /* try { // try from 0035364c to 0035365b has its CatchHandler @ 00353674 */
    FUN_00354394(&local_50);
    DAT_0039e350 = FUN_00354f48(&local_50);
    __cxa_guard_release(&DAT_0039e358);
  }
  pbVar8 = *(byte **)(in_x1 + 0x10);
  p_Var9 = *(_jmethodID **)(param_1 + 8);
  if ((*in_x1 & 1) == 0) {
    pbVar8 = in_x1 + 1;
  }
  facebook::jni::make_jstring((char *)pbVar8);
  plVar7 = local_50;
                    /* try { // try from 00353574 to 00353593 has its CatchHandler @ 003536a0 */
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::CallObjectMethod(p_Var4,p_Var9,DAT_0039e350,plVar7);
  facebook::jni::throwPendingJniExceptionAsCppException();
  plVar7 = local_50;
  local_40 = lVar5;
  if (local_50 != (long *)0x0) {
                    /* try { // try from 003535a0 to 003535b3 has its CatchHandler @ 0035369c */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,plVar7);
  }
  if (lVar5 == 0) {
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 2) = 0;
  }
  else {
                    /* try { // try from 003535b8 to 003535c3 has its CatchHandler @ 00353688 */
    JHybridViewModelArtboardPropertySpec::JavaPart::getJHybridViewModelArtboardPropertySpec
              ((JavaPart *)&local_40);
    lVar2 = local_40;
    lVar5 = lStack_48;
    plVar7 = local_50;
    local_50 = (long *)0x0;
    lStack_48 = 0;
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 2) = 0;
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)((long)plVar7 + *(long *)(*plVar7 + -0x48));
    }
    *in_x8 = (long)plVar7;
    in_x8[1] = lVar5;
    *(undefined1 *)(in_x8 + 2) = 1;
    if (local_40 != 0) {
                    /* try { // try from 003535f8 to 0035360b has its CatchHandler @ 00353698 */
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


// ===== 003536c8  margelo::nitro::rive::JHybridViewModelInstanceSpec::viewModel =====

/* margelo::nitro::rive::JHybridViewModelInstanceSpec::viewModel(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void margelo::nitro::rive::JHybridViewModelInstanceSpec::viewModel(basic_string *param_1)

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
  if (((DAT_0039e368 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0039e368), iVar3 != 0)) {
                    /* try { // try from 003537fc to 00353813 has its CatchHandler @ 0035382c */
    FUN_00354394(&local_50);
    DAT_0039e360 = FUN_003502bc(&local_50,"viewModel");
    __cxa_guard_release(&DAT_0039e368);
  }
  pbVar8 = *(byte **)(in_x1 + 0x10);
  p_Var9 = *(_jmethodID **)(param_1 + 8);
  if ((*in_x1 & 1) == 0) {
    pbVar8 = in_x1 + 1;
  }
  facebook::jni::make_jstring((char *)pbVar8);
  plVar7 = local_50;
                    /* try { // try from 00353724 to 00353743 has its CatchHandler @ 00353858 */
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::CallObjectMethod(p_Var4,p_Var9,DAT_0039e360,plVar7);
  facebook::jni::throwPendingJniExceptionAsCppException();
  plVar7 = local_50;
  local_40 = lVar5;
  if (local_50 != (long *)0x0) {
                    /* try { // try from 00353750 to 00353763 has its CatchHandler @ 00353854 */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,plVar7);
  }
  if (lVar5 == 0) {
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 2) = 0;
  }
  else {
                    /* try { // try from 00353768 to 00353773 has its CatchHandler @ 00353840 */
    JavaPart::getJHybridViewModelInstanceSpec((JavaPart *)&local_40);
    lVar2 = local_40;
    lVar5 = lStack_48;
    plVar7 = local_50;
    local_50 = (long *)0x0;
    lStack_48 = 0;
    *(undefined1 *)in_x8 = 0;
    *(undefined1 *)(in_x8 + 2) = 0;
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)((long)plVar7 + *(long *)(*plVar7 + -0xa0));
    }
    *in_x8 = (long)plVar7;
    in_x8[1] = lVar5;
    *(undefined1 *)(in_x8 + 2) = 1;
    if (local_40 != 0) {
                    /* try { // try from 003537a8 to 003537bb has its CatchHandler @ 00353850 */
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


// ===== 00353880  margelo::nitro::rive::JHybridViewModelInstanceSpec::viewModelAsync =====

/* margelo::nitro::rive::JHybridViewModelInstanceSpec::viewModelAsync(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void margelo::nitro::rive::JHybridViewModelInstanceSpec::viewModelAsync(basic_string *param_1)

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
  byte *in_x1;
  undefined8 *in_x8;
  byte *pbVar13;
  _jmethodID *p_Var14;
  long local_98;
  undefined **local_90;
  undefined8 uStack_88;
  long local_80;
  undefined ***local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039e378 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0039e378), iVar4 != 0)) {
                    /* try { // try from 00353ad0 to 00353ae7 has its CatchHandler @ 00353ba8 */
    FUN_00354394(&local_90);
    DAT_0039e370 = FUN_00331c28(&local_90,"viewModelAsync");
    __cxa_guard_release(&DAT_0039e378);
  }
  pbVar13 = *(byte **)(in_x1 + 0x10);
  p_Var14 = *(_jmethodID **)(param_1 + 8);
  if ((*in_x1 & 1) == 0) {
    pbVar13 = in_x1 + 1;
  }
  facebook::jni::make_jstring((char *)pbVar13);
  ppuVar8 = local_90;
                    /* try { // try from 003538e4 to 00353903 has its CatchHandler @ 00353c74 */
  p_Var5 = (_jobject *)facebook::jni::Environment::current();
  lVar6 = _JNIEnv::CallObjectMethod(p_Var5,p_Var14,DAT_0039e370,ppuVar8);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_98 = lVar6;
  if (local_90 != (undefined **)0x0) {
                    /* try { // try from 00353910 to 00353923 has its CatchHandler @ 00353c58 */
    plVar7 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb8))(plVar7,local_90);
  }
                    /* try { // try from 00353924 to 0035392b has its CatchHandler @ 00353c4c */
  ppuVar8 = (undefined **)operator_new(0x80);
  *in_x8 = ppuVar8;
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
                    /* try { // try from 0035394c to 00353953 has its CatchHandler @ 00353c3c */
  puVar9 = (undefined8 *)operator_new(0x20);
  puVar9[2] = 0;
  *puVar9 = &PTR____shared_weak_count_003925d0;
  puVar9[1] = 0;
  puVar3 = PTR_hybridDataField_00396038;
  puVar9[3] = ppuVar8;
  in_x8[1] = puVar9;
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 00353b20 to 00353b23 has its CatchHandler @ 00353b8c */
    uVar10 = FUN_0031e19c(local_90);
    *(undefined8 *)PTR_hybridDataField_00396030 = uVar10;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 0035397c to 0035398f has its CatchHandler @ 00353c5c */
  puVar2 = PTR_hybridDataField_00396030;
  uVar10 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uStack_88 = *in_x8;
  local_80 = in_x8[1];
  if (local_80 != 0) {
    FUN_00259a00(1,local_80 + 8);
  }
  local_90 = &PTR_FUN_0038c8e0;
                    /* try { // try from 003539c4 to 003539cb has its CatchHandler @ 00353bfc */
  local_70 = &local_90;
  FUN_0031e2bc(uVar10,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar12 = &local_90;
LAB_003539ec:
    (*(code *)(*pppuVar12)[lVar6])();
  }
  else if (local_70 != (undefined ***)0x0) {
    lVar6 = 5;
    pppuVar12 = local_70;
    goto LAB_003539ec;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_00396038), iVar4 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 00353b68 to 00353b6b has its CatchHandler @ 00353b88 */
    uVar10 = FUN_0031e19c(local_90);
    *(undefined8 *)puVar2 = uVar10;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_90);
    __cxa_guard_release(PTR_hybridDataField_00396038);
  }
                    /* try { // try from 00353a00 to 00353a0f has its CatchHandler @ 00353c5c */
  uVar11 = facebook::jni::getHybridDataFromField
                     ((JObject *)&local_98,(JField *)PTR_hybridDataField_00396030);
  uVar10 = *in_x8;
  lVar6 = in_x8[1];
  if (lVar6 != 0) {
    FUN_00259a00(1,lVar6 + 8);
  }
  local_90 = &PTR_FUN_0038c960;
                    /* try { // try from 00353a44 to 00353a4b has its CatchHandler @ 00353bbc */
  uStack_88 = uVar10;
  local_80 = lVar6;
  local_70 = &local_90;
  FUN_0031e5cc(uVar11,&local_90);
  if (local_70 == &local_90) {
    lVar6 = 4;
    pppuVar12 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_00353a78;
    lVar6 = 5;
    pppuVar12 = local_70;
  }
  (*(code *)(*pppuVar12)[lVar6])();
LAB_00353a78:
  lVar6 = local_98;
  if (local_98 != 0) {
                    /* try { // try from 00353a80 to 00353a93 has its CatchHandler @ 00353c54 */
    plVar7 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb8))(plVar7,lVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00353c9c  margelo::nitro::rive::JHybridViewModelInstanceSpec::replaceViewModel =====

/* margelo::nitro::rive::JHybridViewModelInstanceSpec::replaceViewModel(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::shared_ptr<margelo::nitro::rive::HybridViewModelInstanceSpec> const&) */

void __thiscall
margelo::nitro::rive::JHybridViewModelInstanceSpec::replaceViewModel
          (JHybridViewModelInstanceSpec *this,basic_string *param_1,shared_ptr *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  _jobject *p_Var4;
  long lVar5;
  basic_string *pbVar6;
  long *plVar7;
  _jmethodID *p_Var8;
  undefined8 uVar9;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((DAT_0039e388 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0039e388), iVar2 != 0)) {
                    /* try { // try from 00353dec to 00353dfb has its CatchHandler @ 00353e14 */
    FUN_00354394(&local_50);
    DAT_0039e380 = FUN_00354454(&local_50);
    __cxa_guard_release(&DAT_0039e388);
  }
  pbVar6 = *(basic_string **)(param_1 + 0x10);
  p_Var8 = *(_jmethodID **)(this + 8);
  if (((byte)*param_1 & 1) == 0) {
    pbVar6 = param_1 + 1;
  }
  facebook::jni::make_jstring((char *)pbVar6);
  lVar5 = local_50;
  lVar3 = __dynamic_cast(*(undefined8 *)param_2,PTR_typeinfo_00395338,PTR_typeinfo_00396978,
                         0xffffffffffffffff);
  plVar7 = *(long **)(param_2 + 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = (long *)0x0;
  }
  else {
    FUN_00259a00(1,plVar7 + 1);
  }
  uVar9 = *(undefined8 *)(lVar3 + 8);
                    /* try { // try from 00353d40 to 00353d5f has its CatchHandler @ 00353e2c */
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var4,p_Var8,DAT_0039e380,lVar5,uVar9);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if ((plVar7 != (long *)0x0) && (lVar5 = FUN_00255510(0xffffffffffffffff,plVar7 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (local_50 != 0) {
                    /* try { // try from 00353d7c to 00353d8f has its CatchHandler @ 00353e28 */
    plVar7 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb8))(plVar7,local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00353e5c  FUN_00353e5c =====

void FUN_00353e5c(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_0035406c(this);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00353edc  FUN_00353edc =====

void FUN_00353edc(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  FUN_0035406c(this);
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


// ===== 00353f64  FUN_00353f64 =====

void FUN_00353f64(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_0035406c(this);
  margelo::nitro::JHybridObject::~JHybridObject((JHybridObject *)(this + 0x70));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00353fe4  FUN_00353fe4 =====

void FUN_00353fe4(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_0035406c(this);
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


// ===== 0035406c  FUN_0035406c =====

void FUN_0035406c(long *param_1)

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
  
  puVar2 = PTR_vtable_00396b78;
  local_50 = (long *)&local_70;
  pppuVar3 = &local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1[2] = (long)(PTR_vtable_00396b78 + 0x178);
  param_1[0xe] = (long)(puVar2 + 0x200);
  *param_1 = (long)(puVar2 + 0xa8);
  local_70 = &PTR_FUN_0038c9e0;
  plStack_68 = param_1;
                    /* try { // try from 003540c4 to 003540cb has its CatchHandler @ 00354140 */
  facebook::jni::ThreadScope::WithClassLoader((function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar5 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_003540f8;
    lVar5 = 5;
    pppuVar3 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar3 + lVar5 * 8))();
LAB_003540f8:
  lVar5 = param_1[1];
  if (lVar5 != 0) {
                    /* try { // try from 00354100 to 00354113 has its CatchHandler @ 00354144 */
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


// ===== 00354148  FUN_00354148 =====

void FUN_00354148(void *param_1)

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


// ===== 00354180  FUN_00354180 =====

void FUN_00354180(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_0038c9e0;
  puVar2[1] = uVar4;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003541dc  FUN_003541dc =====

void FUN_003541dc(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_0038c9e0;
  param_2[1] = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00354224  FUN_00354224 =====

void FUN_00354224(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0035425c  FUN_0035425c =====

void FUN_0035425c(void *param_1)

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


// ===== 00354294  FUN_00354294 =====

void FUN_00354294(long param_1)

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
                    /* try { // try from 003542c0 to 003542d3 has its CatchHandler @ 00354300 */
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


