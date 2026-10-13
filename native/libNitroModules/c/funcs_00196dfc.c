// ===== 00196dfc  FUN_00196dfc =====

void FUN_00196dfc(undefined8 *param_1)

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
       (FUN_0017bb4c((long)pvVar3 + 0x28), (*(byte *)((long)pvVar3 + 0x10) & 1) != 0)) {
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


// ===== 00196e8c  FUN_00196e8c =====

void FUN_00196e8c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_0015bb40(0xffffffffffffffff,*(long *)(param_1 + 8) + 8);
                    /* try { // try from 00196ec0 to 00196ec7 has its CatchHandler @ 00196eec */
    FUN_0017b4c8(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00196ef0  FUN_00196ef0 =====

void FUN_00196ef0(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_0015d71c("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00196f28  FUN_00196f28 =====

void FUN_00196f28(char param_1,void *param_2)

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
      goto LAB_00196ff0;
    }
  }
  else {
    puVar2 = (undefined8 *)*(void **)((long)param_2 + 0x28);
    while (puVar2 != (undefined8 *)0x0) {
      pvVar3 = (void *)*puVar2;
      FUN_0017bb4c(puVar2 + 5);
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
LAB_00196ff0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00196ff4  JNI_OnLoad =====

undefined4 JNI_OnLoad(_JavaVM *param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined ***pppuVar3;
  long lVar4;
  undefined **local_60 [4];
  long *local_40;
  long local_28;
  
  local_40 = (long *)local_60;
  pppuVar3 = local_60;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60[0] = &PTR_FUN_001b8980;
  uVar2 = facebook::jni::initialize(param_1,(function *)local_60);
  if ((undefined ***)local_40 == local_60) {
    lVar4 = 4;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_00197060;
    lVar4 = 5;
    pppuVar3 = (undefined ***)local_40;
  }
  (**(code **)((long)*pppuVar3 + lVar4 * 8))(pppuVar3);
LAB_00197060:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00197088  FUN_00197088 =====

void FUN_00197088(void *param_1)

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


// ===== 001970c0  FUN_001970c0 =====

void FUN_001970c0(void)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    puVar2 = (undefined8 *)operator_new(0x10);
    *puVar2 = &PTR_FUN_001b8980;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019710c  FUN_0019710c =====

void FUN_0019710c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_001b8980;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00197150  FUN_00197150 =====

void FUN_00197150(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00197188  FUN_00197188 =====

void FUN_00197188(void *param_1)

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


// ===== 001971c0  FUN_001971c0 =====

void FUN_001971c0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  char *pcVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined *local_330;
  undefined *puStack_328;
  undefined *local_320;
  undefined *puStack_318;
  undefined *local_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *local_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *local_2d0;
  undefined *puStack_2c8;
  undefined *local_2c0;
  undefined *puStack_2b8;
  undefined *local_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *local_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puStack_2a8 = PTR_call_001b8a68;
  local_2b0 = PTR_kDescriptor_001b8a60;
  puStack_298 = PTR_kDescriptor_001b8a78;
  puStack_2a0 = PTR_s_getIsOwner_001b8a70;
  puStack_288 = PTR_s_getBufferSize_001b8a88;
  local_290 = PTR_call_001b8a80;
  puStack_278 = PTR_call_001b8a98;
  puStack_280 = PTR_kDescriptor_001b8a90;
  puStack_2e8 = PTR_s_getIsByteBuffer_001b8a28;
  local_2f0 = PTR_call_001b8a20;
  puStack_2d8 = PTR_call_001b8a38;
  puStack_2e0 = PTR_kDescriptor_001b8a30;
  puStack_2c8 = PTR_kDescriptor_001b8a48;
  local_2d0 = PTR_s_getHardwareBufferBoxed_001b8a40;
  puStack_2b8 = PTR_s_getIsHardwareBuffer_001b8a58;
  local_2c0 = PTR_call_001b8a50;
  puStack_328 = PTR_kDescriptor_001b89e8;
  local_330 = PTR_s_initHybrid_001b89e0;
  puStack_318 = PTR_s_initHybridBoxedHardwareBuffer_001b89f8;
  local_320 = PTR_call_001b89f0;
  puStack_308 = PTR_call_001b8a08;
  local_310 = PTR_kDescriptor_001b8a00;
  puStack_2f8 = PTR_kDescriptor_001b8a18;
  puStack_300 = PTR_s_getByteBuffer_001b8a10;
  pcVar8 = (char *)operator_new(0x30);
  uVar4 = s_Lcom_margelo_nitro_core_ArrayBuf_00138358._25_8_;
  uVar3 = s_Lcom_margelo_nitro_core_ArrayBuf_00138358._17_8_;
  uVar2 = s_Lcom_margelo_nitro_core_ArrayBuf_00138358._9_8_;
  uVar10 = s_Lcom_margelo_nitro_core_ArrayBuf_00138358._1_8_;
  pcVar8[0x20] = 'e';
  pcVar8[0x21] = 'r';
  pcVar8[0x22] = '\0';
  *(undefined8 *)(pcVar8 + 8) = uVar2;
  *(undefined8 *)pcVar8 = uVar10;
  *(undefined8 *)(pcVar8 + 0x18) = uVar4;
  *(undefined8 *)(pcVar8 + 0x10) = uVar3;
                    /* try { // try from 00197244 to 0019724b has its CatchHandler @ 001975d8 */
  facebook::jni::findClassLocal(pcVar8);
  operator_delete(pcVar8);
                    /* try { // try from 00197254 to 0019727b has its CatchHandler @ 00197610 */
  plVar9 = (long *)facebook::jni::Environment::current();
  iVar7 = (**(code **)(*plVar9 + 0x6b8))(plVar9,local_40,&local_330,8);
  facebook::jni::throwCppExceptionIf(iVar7 != 0);
  lVar6 = local_40;
  if (local_40 != 0) {
                    /* try { // try from 00197284 to 00197297 has its CatchHandler @ 001975fc */
    plVar9 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar9 + 0xb8))(plVar9,lVar6);
  }
  memcpy(&local_330,&PTR_s_initHybrid_001b8c28,0x2e8);
  pcVar8 = (char *)operator_new(0x20);
  uVar4 = s_Lcom_margelo_nitro_core_AnyMap__001377f5._22_8_;
  uVar3 = s_Lcom_margelo_nitro_core_AnyMap__001377f5._1_8_;
  uVar10 = CONCAT35(s_Lcom_margelo_nitro_core_AnyMap__001377f5._14_3_,
                    s_Lcom_margelo_nitro_core_AnyMap__001377f5._9_5_);
  uVar2 = CONCAT53(s_Lcom_margelo_nitro_core_AnyMap__001377f5._17_5_,
                   s_Lcom_margelo_nitro_core_AnyMap__001377f5._14_3_);
  pcVar8[0x1d] = '\0';
  *(undefined8 *)(pcVar8 + 8) = uVar10;
  *(undefined8 *)pcVar8 = uVar3;
  *(undefined8 *)(pcVar8 + 0x15) = uVar4;
  *(undefined8 *)(pcVar8 + 0xd) = uVar2;
                    /* try { // try from 001972d4 to 001972db has its CatchHandler @ 001975d4 */
  facebook::jni::findClassLocal(pcVar8);
  operator_delete(pcVar8);
                    /* try { // try from 001972e4 to 0019730b has its CatchHandler @ 0019760c */
  plVar9 = (long *)facebook::jni::Environment::current();
  iVar7 = (**(code **)(*plVar9 + 0x6b8))(plVar9,local_40,&local_330,0x1f);
  facebook::jni::throwCppExceptionIf(iVar7 != 0);
  lVar6 = local_40;
  if (local_40 != 0) {
                    /* try { // try from 00197314 to 00197327 has its CatchHandler @ 001975f8 */
    plVar9 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar9 + 0xb8))(plVar9,lVar6);
  }
  memcpy(&local_330,&PTR_s_initHybrid_001b8f10,0x1e0);
  pcVar8 = (char *)operator_new(0x20);
  uVar4 = s_Lcom_margelo_nitro_core_AnyValue_00137fd1._24_8_;
  uVar3 = s_Lcom_margelo_nitro_core_AnyValue_00137fd1._1_8_;
  uVar10 = CONCAT17(s_Lcom_margelo_nitro_core_AnyValue_00137fd1[0x10],
                    s_Lcom_margelo_nitro_core_AnyValue_00137fd1._9_7_);
  uVar2 = CONCAT71(s_Lcom_margelo_nitro_core_AnyValue_00137fd1._17_7_,
                   s_Lcom_margelo_nitro_core_AnyValue_00137fd1[0x10]);
  pcVar8[0x1f] = '\0';
  *(undefined8 *)(pcVar8 + 8) = uVar10;
  *(undefined8 *)pcVar8 = uVar3;
  *(undefined8 *)(pcVar8 + 0x17) = uVar4;
  *(undefined8 *)(pcVar8 + 0xf) = uVar2;
                    /* try { // try from 00197364 to 0019736b has its CatchHandler @ 001975d0 */
  facebook::jni::findClassLocal(pcVar8);
  operator_delete(pcVar8);
                    /* try { // try from 00197374 to 0019739b has its CatchHandler @ 00197608 */
  plVar9 = (long *)facebook::jni::Environment::current();
  iVar7 = (**(code **)(*plVar9 + 0x6b8))(plVar9,local_40,&local_330,0x14);
  facebook::jni::throwCppExceptionIf(iVar7 != 0);
  lVar6 = local_40;
  if (local_40 != 0) {
                    /* try { // try from 001973a4 to 001973b7 has its CatchHandler @ 001975f4 */
    plVar9 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar9 + 0xb8))(plVar9,lVar6);
  }
  if (((*PTR_cls_001ba4d0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_cls_001ba4d0), iVar7 != 0))
  {
                    /* try { // try from 00197590 to 001975a3 has its CatchHandler @ 001975b4 */
    facebook::jni::findClassStatic(PTR_kBaseName_001ba4d8);
    __cxa_guard_release(PTR_cls_001ba4d0);
  }
  uVar10 = *(undefined8 *)PTR_cls_001ba4c8;
  puStack_328 = PTR_kDescriptor_001b90f8;
  local_330 = PTR_s_copyHardwareBuffer_001b90f0;
  puStack_318 = PTR_s_copyHardwareBuffer_001b9108;
  local_320 = PTR_call_001b9100;
  puStack_308 = PTR_call_001b9118;
  local_310 = PTR_kDescriptor_001b9110;
  plVar9 = (long *)facebook::jni::Environment::current();
  iVar7 = (**(code **)(*plVar9 + 0x6b8))(plVar9,uVar10,&local_330,2);
  facebook::jni::throwCppExceptionIf(iVar7 != 0);
  puStack_2c8 = PTR_kDescriptor_001b9188;
  local_2d0 = PTR_s_addOnRejectedListener_001b9180;
  puStack_2e8 = PTR_s_addOnResolvedListener_001b9168;
  local_2f0 = PTR_call_001b9160;
  puStack_2d8 = PTR_call_001b9178;
  puStack_2e0 = PTR_kDescriptor_001b9170;
  local_2c0 = PTR_call_001b9190;
  puStack_328 = PTR_kDescriptor_001b9128;
  local_330 = PTR_s_initHybrid_001b9120;
  puStack_318 = PTR_s_nativeResolve_001b9138;
  local_320 = PTR_call_001b9130;
  puStack_308 = PTR_call_001b9148;
  local_310 = PTR_kDescriptor_001b9140;
  puStack_2f8 = PTR_kDescriptor_001b9158;
  puStack_300 = PTR_s_nativeReject_001b9150;
  pcVar8 = (char *)operator_new(0x20);
  uVar4 = s_Lcom_margelo_nitro_core_Promise__001376fc._23_8_;
  uVar3 = s_Lcom_margelo_nitro_core_Promise__001376fc._1_8_;
  uVar10 = CONCAT26(s_Lcom_margelo_nitro_core_Promise__001376fc._15_2_,
                    s_Lcom_margelo_nitro_core_Promise__001376fc._9_6_);
  uVar2 = CONCAT62(s_Lcom_margelo_nitro_core_Promise__001376fc._17_6_,
                   s_Lcom_margelo_nitro_core_Promise__001376fc._15_2_);
  pcVar8[0x1e] = '\0';
  *(undefined8 *)(pcVar8 + 8) = uVar10;
  *(undefined8 *)pcVar8 = uVar3;
  *(undefined8 *)(pcVar8 + 0x16) = uVar4;
  *(undefined8 *)(pcVar8 + 0xe) = uVar2;
                    /* try { // try from 0019746c to 00197473 has its CatchHandler @ 001975cc */
  facebook::jni::findClassLocal(pcVar8);
  operator_delete(pcVar8);
                    /* try { // try from 0019747c to 001974a3 has its CatchHandler @ 00197604 */
  plVar9 = (long *)facebook::jni::Environment::current();
  iVar7 = (**(code **)(*plVar9 + 0x6b8))(plVar9,local_40,&local_330,5);
  facebook::jni::throwCppExceptionIf(iVar7 != 0);
  lVar6 = local_40;
  if (local_40 != 0) {
                    /* try { // try from 001974ac to 001974bf has its CatchHandler @ 001975f0 */
    plVar9 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar9 + 0xb8))(plVar9,lVar6);
  }
  puStack_328 = PTR_kDescriptor_001b93e8;
  local_330 = PTR_DAT_001b93e0;
  local_320 = PTR_call_001b93f0;
  pcVar8 = (char *)operator_new(0x30);
  uVar5 = s_Lcom_margelo_nitro_utils_NativeR_0013888c._17_8_;
  uVar4 = s_Lcom_margelo_nitro_utils_NativeR_0013888c._9_8_;
  uVar3 = s_Lcom_margelo_nitro_utils_NativeR_0013888c._1_8_;
  uVar10 = CONCAT26(s_Lcom_margelo_nitro_utils_NativeR_0013888c._31_2_,
                    s_Lcom_margelo_nitro_utils_NativeR_0013888c._25_6_);
  uVar2 = CONCAT62(s_Lcom_margelo_nitro_utils_NativeR_0013888c._33_6_,
                   s_Lcom_margelo_nitro_utils_NativeR_0013888c._31_2_);
  pcVar8[0x26] = '\0';
  *(undefined8 *)(pcVar8 + 8) = uVar4;
  *(undefined8 *)pcVar8 = uVar3;
  *(undefined8 *)(pcVar8 + 0x18) = uVar10;
  *(undefined8 *)(pcVar8 + 0x10) = uVar5;
  *(undefined8 *)(pcVar8 + 0x1e) = uVar2;
                    /* try { // try from 00197500 to 00197507 has its CatchHandler @ 001975c8 */
  facebook::jni::findClassLocal(pcVar8);
  operator_delete(pcVar8);
                    /* try { // try from 00197510 to 00197537 has its CatchHandler @ 00197600 */
  plVar9 = (long *)facebook::jni::Environment::current();
  iVar7 = (**(code **)(*plVar9 + 0x6b8))(plVar9,local_40,&local_330,1);
  facebook::jni::throwCppExceptionIf(iVar7 != 0);
  if (local_40 != 0) {
                    /* try { // try from 00197540 to 00197553 has its CatchHandler @ 001975ec */
    plVar9 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar9 + 0xb8))(plVar9,local_40);
  }
  margelo::nitro::JHybridObject::CxxPart::registerNatives();
  margelo::nitro::JNitroModules::registerNatives();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00197638  FUN_00197638 =====

void FUN_00197638(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) != "Z10JNI_OnLoadE3$_0") {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00197688  FUN_00197688 =====

pointer_____offset_0x10___ * FUN_00197688(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_001b93f8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001976c8  facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

/* facebook::jni::base_owned_ref<facebook::jni::JClass,
   facebook::jni::LocalReferenceAllocator>::~base_owned_ref() */

void __thiscall
facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
~base_owned_ref(base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)this;
  if (lVar4 != 0) {
                    /* try { // try from 001976f4 to 00197707 has its CatchHandler @ 00197734 */
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


// ===== 00197738  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JNativeRunnable::*)(),&margelo::nitro::JNativeRunnable::run,margelo::nitro::JNativeRunnable,void>::call =====

/* facebook::jni::detail::MethodWrapper<void (margelo::nitro::JNativeRunnable::*)(),
   &margelo::nitro::JNativeRunnable::run, margelo::nitro::JNativeRunnable, void>::call(_JNIEnv*,
   _jobject*) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JNativeRunnable::*)(),&margelo::nitro::JNativeRunnable::run,margelo::nitro::JNativeRunnable,void>
     ::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  JniEnvCacher aJStack_48 [24];
  _jobject *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_48,param_1);
                    /* try { // try from 00197768 to 0019776f has its CatchHandler @ 00197798 */
  local_30 = param_2;
  dispatch(&local_30);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001977e0  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JNativeRunnable::*)(),&margelo::nitro::JNativeRunnable::run,margelo::nitro::JNativeRunnable,void>::dispatch =====

/* facebook::jni::detail::MethodWrapper<void (margelo::nitro::JNativeRunnable::*)(),
   &margelo::nitro::JNativeRunnable::run, margelo::nitro::JNativeRunnable,
   void>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JNativeRunnable,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>)
    */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JNativeRunnable::*)(),&margelo::nitro::JNativeRunnable::run,margelo::nitro::JNativeRunnable,void>
     ::dispatch(JObject *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  exception_ptr aeStack_38 [8];
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((*PTR_hybridDataField_001ba570 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba570), iVar2 != 0)) {
    JObject::getClass();
                    /* try { // try from 00197878 to 0019787b has its CatchHandler @ 001978b8 */
    uVar4 = FUN_00197998(local_30);
    *(undefined8 *)PTR_hybridDataField_001ba568 = uVar4;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
               &local_30);
    __cxa_guard_release(PTR_hybridDataField_001ba570);
  }
                    /* try { // try from 0019780c to 0019782b has its CatchHandler @ 001978d4 */
  lVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba568);
  if (*(long **)(lVar3 + 0x30) == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 001978b4 to 001978b7 has its CatchHandler @ 001978d4 */
      uVar4 = FUN_0016c8f4();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00197878 with catch @ 001978b8
                        */
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                 &local_30);
      __cxa_guard_abort(PTR_hybridDataField_001ba570);
      __cxa_begin_catch(uVar4);
      std::current_exception();
      std::exception_ptr::~exception_ptr(aeStack_38);
      if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00197900 to 00197903 has its CatchHandler @ 00197904 */
        uVar4 = __cxa_rethrow();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00197900 with catch @ 00197904
                        */
                    /* try { // try from 00197908 to 0019790b has its CatchHandler @ 00197928 */
        __cxa_end_catch();
        if (*(long *)(lVar1 + 0x28) == local_28) {
          FUN_00157e74(uVar4);
        }
      }
    }
  }
  else {
    (**(code **)(**(long **)(lVar3 + 0x30) + 0x30))();
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019792c  facebook::jni::JObject::getClass =====

/* facebook::jni::JObject::getClass() const */

void facebook::jni::JObject::getClass(void)

{
  long lVar1;
  undefined8 *in_x0;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *in_x8;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00197954 to 00197967 has its CatchHandler @ 00197994 */
  plVar2 = (long *)facebook::jni::Environment::current();
  uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2,*in_x0);
  *in_x8 = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00197998  FUN_00197998 =====

void FUN_00197998(undefined8 param_1)

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
    if (((*PTR_cls_001ba580 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_cls_001ba580), iVar2 != 0)) {
                    /* try { // try from 00197a54 to 00197a67 has its CatchHandler @ 00197a8c */
      facebook::jni::findClassStatic(PTR_kBaseName_001ba588);
      __cxa_guard_release(PTR_cls_001ba580);
    }
    uVar6 = *(undefined8 *)PTR_cls_001ba578;
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar4 = (**(code **)(*plVar5 + 0x2f0))(plVar5,uVar6,"mHybridData",PTR_kDescriptor_001ba2f0);
    facebook::jni::throwCppExceptionIf(lVar4 == 0);
    if (lVar4 == 0) {
      if (*(long *)(lVar1 + 0x28) == local_28) {
        uVar6 = facebook::jni::throwNPE();
                    /* catch() { ... } // from try @ 00197a54 with catch @ 00197a8c */
        lVar4 = __cxa_guard_abort(PTR_cls_001ba580);
        if (*(long *)(lVar1 + 0x28) == local_28) {
          lVar4 = FUN_00157e74(uVar6);
        }
      }
      goto LAB_00197ab4;
    }
  }
  else {
    lVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
LAB_00197ab4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


// ===== 00197ab8  facebook::jni::getHybridDataFromField =====

/* facebook::jni::getHybridDataFromField(facebook::jni::JObject const*,
   facebook::jni::JField<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*> const&) */

undefined8 facebook::jni::getHybridDataFromField(JObject *param_1,JField *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  long local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)param_2;
  if (lVar3 == 0) {
    detail::getHolder<facebook::jni::JObject>((detail *)param_1,(JObject *)param_2);
                    /* try { // try from 00197b60 to 00197b67 has its CatchHandler @ 00197bc4 */
    uVar4 = facebook::jni::detail::HybridDestructor::getNativePointer();
    if (local_40 != 0) {
                    /* try { // try from 00197b74 to 00197b87 has its CatchHandler @ 00197bd4 */
      plVar2 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar2 + 0xb8))(plVar2,local_40);
    }
  }
  else {
    uVar4 = *(undefined8 *)param_1;
                    /* try { // try from 00197ae4 to 00197afb has its CatchHandler @ 00197c18 */
    plVar2 = (long *)facebook::jni::Environment::current();
    auVar5 = (**(code **)(*plVar2 + 0x2f8))(plVar2,uVar4,lVar3);
    local_48 = auVar5._0_8_;
    if (local_48 == 0) {
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00197bc0 to 00197bc3 has its CatchHandler @ 00197bf0 */
        uVar4 = throwNPE();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00197b60 with catch @ 00197bc4
                        */
        base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
        ::~base_owned_ref((base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
                           *)&local_40);
        if (*(long *)(lVar1 + 0x28) == local_38) {
          FUN_00157e74(uVar4);
        }
      }
      goto LAB_00197c14;
    }
                    /* try { // try from 00197b04 to 00197b0f has its CatchHandler @ 00197bf0 */
    detail::getHolder<facebook::jni::detail::HybridData>((detail *)&local_48,auVar5._8_8_);
                    /* try { // try from 00197b10 to 00197b17 has its CatchHandler @ 00197bd8 */
    uVar4 = facebook::jni::detail::HybridDestructor::getNativePointer();
    if (local_40 != 0) {
                    /* try { // try from 00197b24 to 00197b37 has its CatchHandler @ 00197bec */
      plVar2 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar2 + 0xb8))(plVar2,local_40);
    }
    lVar3 = local_48;
    if (local_48 != 0) {
                    /* try { // try from 00197b40 to 00197b53 has its CatchHandler @ 00197be8 */
      plVar2 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar2 + 0xb8))(plVar2,lVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
LAB_00197c14:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00197c1c  facebook::jni::detail::getHolder<facebook::jni::JObject> =====

/* facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   facebook::jni::detail::getHolder<facebook::jni::JObject>(facebook::jni::JObject const*) */

void __thiscall
facebook::jni::detail::getHolder<facebook::jni::JObject>(detail *this,JObject *param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *in_x8;
  undefined8 uVar5;
  undefined8 uVar6;
  base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> abStack_40 [8];
  long local_38;
  
  puVar2 = PTR_holderField_001ba2f8;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_holderField_001ba300 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_holderField_001ba300), iVar3 != 0)) {
    JObject::getClass();
                    /* try { // try from 00197cc8 to 00197ccf has its CatchHandler @ 00197cf0 */
    uVar5 = getDestructorField(abStack_40);
    *(undefined8 *)puVar2 = uVar5;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              (abStack_40);
    __cxa_guard_release(PTR_holderField_001ba300);
  }
  uVar5 = *(undefined8 *)puVar2;
  uVar6 = *(undefined8 *)this;
                    /* try { // try from 00197c60 to 00197c77 has its CatchHandler @ 00197d24 */
  plVar4 = (long *)facebook::jni::Environment::current();
  uVar5 = (**(code **)(*plVar4 + 0x2f8))(plVar4,uVar6,uVar5);
  *in_x8 = uVar5;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00197d28  facebook::jni::base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

/* facebook::jni::base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,
   facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>::~base_owned_ref() */

void __thiscall
facebook::jni::
base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
::~base_owned_ref(base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
                  *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)this;
  if (lVar4 != 0) {
                    /* try { // try from 00197d54 to 00197d67 has its CatchHandler @ 00197d94 */
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


// ===== 00197d98  facebook::jni::throwNPE =====

/* facebook::jni::throwNPE() */

void facebook::jni::throwNPE(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    facebook::jni::throwNewJavaException
              ("java/lang/NullPointerException","java.lang.NullPointerException");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00197dd8  facebook::jni::base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

/* facebook::jni::base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>::~base_owned_ref() */

void __thiscall
facebook::jni::
base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
::~base_owned_ref(base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
                  *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)this;
  if (lVar4 != 0) {
                    /* try { // try from 00197e04 to 00197e17 has its CatchHandler @ 00197e44 */
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


// ===== 00197e48  facebook::jni::detail::getHolder<facebook::jni::detail::HybridData> =====

/* facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   facebook::jni::detail::getHolder<facebook::jni::detail::HybridData>(facebook::jni::detail::HybridData
   const*) */

void __thiscall
facebook::jni::detail::getHolder<facebook::jni::detail::HybridData>
          (detail *this,HybridData *param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *in_x8;
  undefined8 uVar5;
  undefined8 uVar6;
  base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> abStack_40 [8];
  long local_38;
  
  puVar2 = PTR_holderField_001ba288;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_holderField_001ba290 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_holderField_001ba290), iVar3 != 0)) {
    JObject::getClass();
                    /* try { // try from 00197ef4 to 00197efb has its CatchHandler @ 00197f1c */
    uVar5 = getDestructorField(abStack_40);
    *(undefined8 *)puVar2 = uVar5;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              (abStack_40);
    __cxa_guard_release(PTR_holderField_001ba290);
  }
  uVar5 = *(undefined8 *)puVar2;
  uVar6 = *(undefined8 *)this;
                    /* try { // try from 00197e8c to 00197ea3 has its CatchHandler @ 00197f50 */
  plVar4 = (long *)facebook::jni::Environment::current();
  uVar5 = (**(code **)(*plVar4 + 0x2f8))(plVar4,uVar6,uVar5);
  *in_x8 = uVar5;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00197f54  facebook::jni::detail::getDestructorField =====

/* facebook::jni::detail::getDestructorField(facebook::jni::basic_strong_ref<facebook::jni::JClass,
   facebook::jni::LocalReferenceAllocator> const&) */

long facebook::jni::detail::getDestructorField(basic_strong_ref *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x2f0))
                    (plVar2,*(undefined8 *)param_1,"mDestructor",PTR_kDescriptor_001ba298);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00197fd0  facebook::jni::detail::HybridClassBase::isHybridClassBase =====

/* facebook::jni::detail::HybridClassBase::isHybridClassBase(facebook::jni::alias_ref<_jclass*>) */

void facebook::jni::detail::HybridClassBase::isHybridClassBase(undefined8 *param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_001ba2c8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_cls_001ba2c8), iVar3 != 0))
  {
                    /* try { // try from 00198068 to 0019807b has its CatchHandler @ 0019808c */
    facebook::jni::findClassStatic(PTR_kBaseName_001ba2d0);
    __cxa_guard_release(PTR_cls_001ba2c8);
  }
  uVar6 = *param_1;
  uVar7 = *(undefined8 *)PTR_cls_001ba2c0;
                    /* try { // try from 00198014 to 0019802b has its CatchHandler @ 001980b8 */
  plVar4 = (long *)facebook::jni::Environment::current();
  cVar2 = (**(code **)(*plVar4 + 0x58))(plVar4,uVar6,uVar7);
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2 != '\0');
}


// ===== 001980bc  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JPromise,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>),&margelo::nitro::JPromise::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JPromise,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   (*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JPromise,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>),
   &margelo::nitro::JPromise::initHybrid,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JPromise,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>>::call(_JNIEnv*, _jobject*) */

undefined8
facebook::jni::detail::
FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JPromise,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>),&margelo::nitro::JPromise::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JPromise,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>
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
                    /* try { // try from 001980ec to 001980f7 has its CatchHandler @ 00198128 */
  local_38 = param_2;
  margelo::nitro::JPromise::initHybrid(&local_30,&local_38);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00198174  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JPromise::*)(facebook::jni::alias_ref<facebook::jni::JObject>),&margelo::nitro::JPromise::resolve,margelo::nitro::JPromise,void,facebook::jni::alias_ref<facebook::jni::JObject>>::call =====

/* facebook::jni::detail::MethodWrapper<void
   (margelo::nitro::JPromise::*)(facebook::jni::alias_ref<facebook::jni::JObject>),
   &margelo::nitro::JPromise::resolve, margelo::nitro::JPromise, void,
   facebook::jni::alias_ref<facebook::jni::JObject> >::call(_JNIEnv*, _jobject*, _jobject*) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JPromise::*)(facebook::jni::alias_ref<facebook::jni::JObject>),&margelo::nitro::JPromise::resolve,margelo::nitro::JPromise,void,facebook::jni::alias_ref<facebook::jni::JObject>>
     ::call(_JNIEnv *param_1,_jobject *param_2,_jobject *param_3)

{
  long lVar1;
  JniEnvCacher aJStack_60 [24];
  _jobject *local_48;
  _jobject *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_60,param_1);
                    /* try { // try from 001981b0 to 001981bb has its CatchHandler @ 001981e8 */
  local_48 = param_3;
  local_40 = param_2;
  dispatch(&local_40,&local_48);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00198230  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JPromise::*)(facebook::jni::alias_ref<facebook::jni::JThrowable>),&margelo::nitro::JPromise::reject,margelo::nitro::JPromise,void,facebook::jni::alias_ref<facebook::jni::JThrowable>>::call =====

/* facebook::jni::detail::MethodWrapper<void
   (margelo::nitro::JPromise::*)(facebook::jni::alias_ref<facebook::jni::JThrowable>),
   &margelo::nitro::JPromise::reject, margelo::nitro::JPromise, void,
   facebook::jni::alias_ref<facebook::jni::JThrowable> >::call(_JNIEnv*, _jobject*, _jthrowable*) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JPromise::*)(facebook::jni::alias_ref<facebook::jni::JThrowable>),&margelo::nitro::JPromise::reject,margelo::nitro::JPromise,void,facebook::jni::alias_ref<facebook::jni::JThrowable>>
     ::call(_JNIEnv *param_1,_jobject *param_2,_jthrowable *param_3)

{
  long lVar1;
  JniEnvCacher aJStack_60 [24];
  _jthrowable *local_48;
  _jobject *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_60,param_1);
                    /* try { // try from 0019826c to 00198277 has its CatchHandler @ 001982a4 */
  local_48 = param_3;
  local_40 = param_2;
  dispatch(&local_40,&local_48);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001982ec  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JPromise::*)(facebook::jni::alias_ref<margelo::nitro::JOnResolvedCallback>),&margelo::nitro::JPromise::addOnResolvedListenerJava,margelo::nitro::JPromise,void,facebook::jni::alias_ref<margelo::nitro::JOnResolvedCallback>>::call =====

/* facebook::jni::detail::MethodWrapper<void
   (margelo::nitro::JPromise::*)(facebook::jni::alias_ref<margelo::nitro::JOnResolvedCallback>),
   &margelo::nitro::JPromise::addOnResolvedListenerJava, margelo::nitro::JPromise, void,
   facebook::jni::alias_ref<margelo::nitro::JOnResolvedCallback> >::call(_JNIEnv*, _jobject*,
   facebook::jni::detail::JTypeFor<margelo::nitro::JOnResolvedCallback, facebook::jni::JObject,
   void>::_javaobject*) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JPromise::*)(facebook::jni::alias_ref<margelo::nitro::JOnResolvedCallback>),&margelo::nitro::JPromise::addOnResolvedListenerJava,margelo::nitro::JPromise,void,facebook::jni::alias_ref<margelo::nitro::JOnResolvedCallback>>
     ::call(_JNIEnv *param_1,_jobject *param_2,_javaobject *param_3)

{
  long lVar1;
  JniEnvCacher aJStack_60 [24];
  _javaobject *local_48;
  _jobject *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_60,param_1);
                    /* try { // try from 00198328 to 00198333 has its CatchHandler @ 00198360 */
  local_48 = param_3;
  local_40 = param_2;
  dispatch(&local_40,&local_48);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001983a8  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JPromise::*)(facebook::jni::alias_ref<margelo::nitro::JOnRejectedCallback>),&margelo::nitro::JPromise::addOnRejectedListenerJava,margelo::nitro::JPromise,void,facebook::jni::alias_ref<margelo::nitro::JOnRejectedCallback>>::call =====

/* facebook::jni::detail::MethodWrapper<void
   (margelo::nitro::JPromise::*)(facebook::jni::alias_ref<margelo::nitro::JOnRejectedCallback>),
   &margelo::nitro::JPromise::addOnRejectedListenerJava, margelo::nitro::JPromise, void,
   facebook::jni::alias_ref<margelo::nitro::JOnRejectedCallback> >::call(_JNIEnv*, _jobject*,
   facebook::jni::detail::JTypeFor<margelo::nitro::JOnRejectedCallback, facebook::jni::JObject,
   void>::_javaobject*) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JPromise::*)(facebook::jni::alias_ref<margelo::nitro::JOnRejectedCallback>),&margelo::nitro::JPromise::addOnRejectedListenerJava,margelo::nitro::JPromise,void,facebook::jni::alias_ref<margelo::nitro::JOnRejectedCallback>>
     ::call(_JNIEnv *param_1,_jobject *param_2,_javaobject *param_3)

{
  long lVar1;
  JniEnvCacher aJStack_60 [24];
  _javaobject *local_48;
  _jobject *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_60,param_1);
                    /* try { // try from 001983e4 to 001983ef has its CatchHandler @ 0019841c */
  local_48 = param_3;
  local_40 = param_2;
  dispatch(&local_40,&local_48);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00198464  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JPromise::*)(facebook::jni::alias_ref<margelo::nitro::JOnRejectedCallback>),&margelo::nitro::JPromise::addOnRejectedListenerJava,margelo::nitro::JPromise,void,facebook::jni::alias_ref<margelo::nitro::JOnRejectedCallback>>::dispatch =====

/* facebook::jni::detail::MethodWrapper<void
   (margelo::nitro::JPromise::*)(facebook::jni::alias_ref<margelo::nitro::JOnRejectedCallback>),
   &margelo::nitro::JPromise::addOnRejectedListenerJava, margelo::nitro::JPromise, void,
   facebook::jni::alias_ref<margelo::nitro::JOnRejectedCallback>
   >::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JPromise,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   facebook::jni::alias_ref<margelo::nitro::JOnRejectedCallback>&&) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JPromise::*)(facebook::jni::alias_ref<margelo::nitro::JOnRejectedCallback>),&margelo::nitro::JPromise::addOnRejectedListenerJava,margelo::nitro::JPromise,void,facebook::jni::alias_ref<margelo::nitro::JOnRejectedCallback>>
     ::dispatch(JObject *param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  bad_alloc *this;
  undefined8 uVar8;
  ulong *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  void *pvVar13;
  ulong uVar14;
  ulong uVar15;
  void *pvVar16;
  ulong uVar17;
  void *pvVar18;
  exception_ptr aeStack_a8 [8];
  void *local_a0;
  void *local_98;
  undefined8 uStack_90;
  void *local_88;
  void *pvStack_80;
  void *local_78;
  void *pvStack_70;
  ulong *local_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((*PTR_hybridDataField_001ba508 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba508), iVar2 != 0)) {
    JObject::getClass();
                    /* try { // try from 00198760 to 00198763 has its CatchHandler @ 001987ec */
    uVar8 = FUN_001988c0(local_88);
    *(undefined8 *)PTR_hybridDataField_001ba500 = uVar8;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
               &local_88);
    __cxa_guard_release(PTR_hybridDataField_001ba508);
  }
                    /* try { // try from 001984a0 to 001984bf has its CatchHandler @ 00198868 */
  lVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba500);
  pvVar13 = (void *)*param_2;
  local_a0 = pvVar13;
  std::__ndk1::mutex::lock();
  if (*(int *)(lVar3 + 0x10) == 2) {
    local_88 = *(void **)(lVar3 + 8);
                    /* try { // try from 001984d4 to 001984df has its CatchHandler @ 00198838 */
    FUN_001989e0(&local_a0,&local_88);
  }
  else {
    if (pvVar13 != (void *)0x0) {
                    /* try { // try from 001984e8 to 00198503 has its CatchHandler @ 00198858 */
      plVar4 = (long *)facebook::jni::Environment::current();
      pvVar13 = (void *)(**(code **)(*plVar4 + 0xa8))(plVar4,pvVar13);
      facebook::jni::throwPendingJniExceptionAsCppException();
      if (pvVar13 == (void *)0x0) {
        this = (bad_alloc *)__cxa_allocate_exception(8);
        std::bad_alloc::bad_alloc(this);
        if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 001987ac to 001987c3 has its CatchHandler @ 00198858 */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(this,PTR_typeinfo_001ba598,PTR__bad_alloc_001ba590);
        }
        goto LAB_001988b8;
      }
    }
    uStack_90 = 0;
    puVar9 = (ulong *)(lVar3 + 0x40);
    uVar14 = *(ulong *)(lVar3 + 0x38);
    if (uVar14 < *puVar9) {
      local_98 = (void *)0x0;
      *(undefined8 *)(uVar14 + 0x20) = 0;
      local_88 = pvVar13;
                    /* try { // try from 0019852c to 00198533 has its CatchHandler @ 00198820 */
      puVar5 = (undefined8 *)operator_new(0x10);
      *puVar5 = &PTR_FUN_001b9360;
      puVar5[1] = pvVar13;
      *(undefined8 **)(uVar14 + 0x20) = puVar5;
      *(ulong *)(lVar3 + 0x38) = uVar14 + 0x30;
    }
    else {
      uVar15 = *(ulong *)(lVar3 + 0x30);
      lVar11 = (long)(uVar14 - uVar15) >> 4;
      uVar17 = lVar11 * -0x5555555555555555 + 1;
      local_98 = pvVar13;
      if (0x555555555555555 < uVar17) {
        if (*(long *)(lVar1 + 0x28) != local_58) goto LAB_001988b8;
                    /* try { // try from 001987d4 to 001987eb has its CatchHandler @ 0019883c */
        FUN_00198bbc();
LAB_001987d8:
        if (*(long *)(lVar1 + 0x28) == local_58) {
          uVar8 = FUN_0015d614();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00198760 with catch @ 001987ec
                        */
          base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
          ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
                           *)&local_88);
          __cxa_guard_abort(PTR_hybridDataField_001ba508);
          __cxa_begin_catch(uVar8);
          std::current_exception();
          std::exception_ptr::~exception_ptr(aeStack_a8);
          if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 00198894 to 00198897 has its CatchHandler @ 00198898 */
            uVar8 = __cxa_rethrow();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00198894 with catch @ 00198898
                        */
                    /* try { // try from 0019889c to 0019889f has its CatchHandler @ 001988bc */
            __cxa_end_catch();
            if (*(long *)(lVar1 + 0x28) == local_58) {
              FUN_00157e74(uVar8);
            }
          }
        }
        goto LAB_001988b8;
      }
      lVar10 = (long)(*puVar9 - uVar15) >> 4;
      uVar12 = lVar10 * 0x5555555555555556;
      if (uVar12 < uVar17 || uVar12 - uVar17 == 0) {
        uVar12 = uVar17;
      }
      if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar10 * -0x5555555555555555)) {
        uVar12 = 0x555555555555555;
      }
      local_68 = puVar9;
      if (uVar12 == 0) {
        local_88 = (void *)0x0;
      }
      else {
        if (0x555555555555555 < uVar12) goto LAB_001987d8;
                    /* try { // try from 001985bc to 001985bf has its CatchHandler @ 0019883c */
        local_88 = operator_new(uVar12 * 0x30);
      }
      pvVar16 = (void *)((long)local_88 + lVar11 * 0x10);
      local_98 = (void *)0x0;
      pvVar18 = (void *)((long)local_88 + uVar12 * 0x30);
      *(undefined8 *)((long)pvVar16 + 0x20) = 0;
      pvStack_80 = pvVar16;
      local_78 = pvVar16;
      pvStack_70 = pvVar18;
      local_60 = pvVar13;
                    /* try { // try from 001985f0 to 001985f7 has its CatchHandler @ 00198808 */
      puVar5 = (undefined8 *)operator_new(0x10);
      local_78 = (void *)((long)pvVar16 + 0x30);
      *puVar5 = &PTR_FUN_001b9360;
      puVar5[1] = pvVar13;
      *(undefined8 **)((long)pvVar16 + 0x20) = puVar5;
      if (uVar14 != uVar15) {
        lVar11 = 0;
        uVar17 = uVar14;
        do {
          uVar12 = (long)pvVar16 + lVar11;
          plVar4 = *(long **)(uVar14 + lVar11 + -0x10);
          if (plVar4 == (long *)0x0) {
LAB_00198628:
            *(undefined8 *)(uVar12 - 0x10) = 0;
          }
          else {
            plVar6 = (long *)(uVar14 + lVar11 + -0x30);
            if (plVar6 != plVar4) {
              *(long **)(uVar12 - 0x10) = plVar4;
              uVar12 = uVar17;
              goto LAB_00198628;
            }
            *(ulong *)(uVar12 - 0x10) = uVar12 - 0x30;
                    /* try { // try from 00198678 to 0019867b has its CatchHandler @ 00198854 */
            (**(code **)(*plVar6 + 0x18))();
          }
          lVar11 = lVar11 + -0x30;
          uVar17 = uVar17 - 0x30;
        } while (uVar14 + lVar11 != uVar15);
        pvVar16 = (void *)((long)pvVar16 + lVar11);
        pvVar18 = pvStack_70;
      }
      pvVar13 = local_78;
      plVar4 = *(long **)(lVar3 + 0x30);
      plVar6 = *(long **)(lVar3 + 0x38);
      *(void **)(lVar3 + 0x30) = pvVar16;
      *(void **)(lVar3 + 0x38) = local_78;
      *(void **)(lVar3 + 0x40) = pvVar18;
joined_r0x00198698:
      if (plVar6 != plVar4) {
        plVar7 = (long *)plVar6[-2];
        plVar6 = plVar6 + -6;
        if (plVar6 != plVar7) goto code_r0x00198728;
        lVar11 = 4;
        plVar7 = plVar6;
        goto LAB_00198704;
      }
      if (plVar4 != (long *)0x0) {
        operator_delete(plVar4);
      }
      pvVar16 = local_98;
      *(void **)(lVar3 + 0x38) = pvVar13;
      if (local_98 != (void *)0x0) {
                    /* try { // try from 001986b4 to 001986c7 has its CatchHandler @ 00198834 */
        plVar4 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar4 + 0xb0))(plVar4,pvVar16);
      }
    }
  }
  std::__ndk1::mutex::unlock();
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_001988b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00198728:
  if (plVar7 != (long *)0x0) {
    lVar11 = 5;
LAB_00198704:
    (**(code **)(*plVar7 + lVar11 * 8))();
  }
  goto joined_r0x00198698;
}


// ===== 001988c0  FUN_001988c0 =====

void FUN_001988c0(undefined8 param_1)

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
    if (((*PTR_cls_001ba518 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_cls_001ba518), iVar2 != 0)) {
                    /* try { // try from 0019897c to 0019898f has its CatchHandler @ 001989b4 */
      facebook::jni::findClassStatic(PTR_kBaseName_001ba520);
      __cxa_guard_release(PTR_cls_001ba518);
    }
    uVar6 = *(undefined8 *)PTR_cls_001ba510;
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar4 = (**(code **)(*plVar5 + 0x2f0))(plVar5,uVar6,"mHybridData",PTR_kDescriptor_001ba2f0);
    facebook::jni::throwCppExceptionIf(lVar4 == 0);
    if (lVar4 == 0) {
      if (*(long *)(lVar1 + 0x28) == local_28) {
        uVar6 = facebook::jni::throwNPE();
                    /* catch() { ... } // from try @ 0019897c with catch @ 001989b4 */
        lVar4 = __cxa_guard_abort(PTR_cls_001ba518);
        if (*(long *)(lVar1 + 0x28) == local_28) {
          lVar4 = FUN_00157e74(uVar6);
        }
      }
      goto LAB_001989dc;
    }
  }
  else {
    lVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
LAB_001989dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


// ===== 001989e0  FUN_001989e0 =====

void FUN_001989e0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  _jobject *p_Var4;
  undefined8 uVar5;
  _jmethodID *p_Var6;
  base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> abStack_40 [8];
  long local_38;
  
  puVar2 = PTR_method_001ba548;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_method_001ba550 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_method_001ba550), iVar3 != 0)) {
                    /* try { // try from 00198a74 to 00198a7b has its CatchHandler @ 00198ab0 */
    FUN_00199084(abStack_40);
                    /* try { // try from 00198a7c to 00198a83 has its CatchHandler @ 00198aa0 */
    uVar5 = FUN_0019912c(abStack_40);
    *(undefined8 *)puVar2 = uVar5;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref(abStack_40);
    __cxa_guard_release(PTR_method_001ba550);
  }
  p_Var6 = (_jmethodID *)*param_1;
  uVar5 = *param_2;
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var4,p_Var6,*(undefined8 *)puVar2,uVar5);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00198adc  FUN_00198adc =====

void FUN_00198adc(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00198b08 to 00198b1b has its CatchHandler @ 00198b48 */
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


// ===== 00198b4c  FUN_00198b4c =====

void FUN_00198b4c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00198b78 to 00198b8b has its CatchHandler @ 00198bb8 */
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


// ===== 00198bbc  FUN_00198bbc =====

void FUN_00198bbc(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_0015d71c("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00198bf4  FUN_00198bf4 =====

void FUN_00198bf4(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  plVar1 = (long *)param_1[1];
  plVar3 = (long *)param_1[2];
LAB_00198c34:
  if (plVar3 == plVar1) {
    if ((void *)*param_1 == (void *)0x0) {
      if (*(long *)(lVar2 + 0x28) == lVar4) {
        return;
      }
    }
    else if (*(long *)(lVar2 + 0x28) == lVar4) {
      operator_delete((void *)*param_1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  plVar5 = (long *)plVar3[-2];
  plVar3 = plVar3 + -6;
  param_1[2] = plVar3;
  if (plVar5 != plVar3) goto code_r0x00198c50;
  lVar6 = 4;
  goto LAB_00198c24;
code_r0x00198c50:
  if (plVar5 != (long *)0x0) {
    lVar6 = 5;
    plVar3 = plVar5;
LAB_00198c24:
    (**(code **)(*plVar3 + lVar6 * 8))();
    plVar3 = (long *)param_1[2];
  }
  goto LAB_00198c34;
}


// ===== 00198cb4  FUN_00198cb4 =====

void FUN_00198cb4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = param_1[1];
  *param_1 = &PTR_FUN_001b9360;
  if (lVar4 != 0) {
                    /* try { // try from 00198cec to 00198cff has its CatchHandler @ 00198d2c */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb0))(plVar2,lVar4);
  }
  param_1[1] = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00198d30  FUN_00198d30 =====

void FUN_00198d30(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = param_1[1];
  *param_1 = &PTR_FUN_001b9360;
  if (lVar4 != 0) {
                    /* try { // try from 00198d68 to 00198d7b has its CatchHandler @ 00198da8 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb0))(plVar2,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00198dac  FUN_00198dac =====

undefined8 * FUN_00198dac(long param_1)

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
  *puVar2 = &PTR_FUN_001b9360;
                    /* try { // try from 00198dec to 00198e07 has its CatchHandler @ 00198e34 */
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


// ===== 00198e5c  FUN_00198e5c =====

void FUN_00198e5c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_001b9360;
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


// ===== 00198ed8  FUN_00198ed8 =====

void FUN_00198ed8(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 != 0) {
                    /* try { // try from 00198f04 to 00198f17 has its CatchHandler @ 00198f44 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb0))(plVar2,lVar4);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00198f48  FUN_00198f48 =====

void FUN_00198f48(void *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)((long)param_1 + 8);
  if (lVar4 != 0) {
                    /* try { // try from 00198f74 to 00198f87 has its CatchHandler @ 00198fb4 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb0))(plVar2,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00198fb8  FUN_00198fb8 =====

void FUN_00198fb8(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_001989e0(param_1 + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00198ff4  FUN_00198ff4 =====

void FUN_00198ff4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_001ba558) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00199044  FUN_00199044 =====

undefined * FUN_00199044(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_001ba560;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00199084  FUN_00199084 =====

void FUN_00199084(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  
  lVar1 = tpidr_el0;
  lVar9 = *(long *)(lVar1 + 0x28);
  pcVar8 = (char *)operator_new(0x40);
  uVar7 = s_com_margelo_nitro_core_Promise_O_0013d1d0._40_8_;
  uVar6 = s_com_margelo_nitro_core_Promise_O_0013d1d0._32_8_;
  uVar5 = s_com_margelo_nitro_core_Promise_O_0013d1d0._24_8_;
  uVar4 = s_com_margelo_nitro_core_Promise_O_0013d1d0._16_8_;
  uVar3 = s_com_margelo_nitro_core_Promise_O_0013d1d0._8_8_;
  uVar2 = s_com_margelo_nitro_core_Promise_O_0013d1d0._0_8_;
  pcVar8[0x30] = 'k';
  pcVar8[0x31] = '\0';
  *(undefined8 *)(pcVar8 + 8) = uVar3;
  *(undefined8 *)pcVar8 = uVar2;
  *(undefined8 *)(pcVar8 + 0x18) = uVar5;
  *(undefined8 *)(pcVar8 + 0x10) = uVar4;
  *(undefined8 *)(pcVar8 + 0x28) = uVar7;
  *(undefined8 *)(pcVar8 + 0x20) = uVar6;
                    /* try { // try from 001990d4 to 001990db has its CatchHandler @ 00199104 */
  facebook::jni::findClassLocal(pcVar8);
  if (*(long *)(lVar1 + 0x28) == lVar9) {
    operator_delete(pcVar8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019912c  FUN_0019912c =====

long FUN_0019912c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,"onRejected",PTR_kDescriptor_001ba4e8);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001991a8  _JNIEnv::CallVoidMethod =====

/* _JNIEnv::CallVoidMethod(_jobject*, _jmethodID*, ...) */

void _JNIEnv::CallVoidMethod(_jobject *param_1,_jmethodID *param_2,...)

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
  (**(code **)(*(long *)param_1 + 0x1f0))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00199244  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JPromise::*)(facebook::jni::alias_ref<margelo::nitro::JOnResolvedCallback>),&margelo::nitro::JPromise::addOnResolvedListenerJava,margelo::nitro::JPromise,void,facebook::jni::alias_ref<margelo::nitro::JOnResolvedCallback>>::dispatch =====

/* facebook::jni::detail::MethodWrapper<void
   (margelo::nitro::JPromise::*)(facebook::jni::alias_ref<margelo::nitro::JOnResolvedCallback>),
   &margelo::nitro::JPromise::addOnResolvedListenerJava, margelo::nitro::JPromise, void,
   facebook::jni::alias_ref<margelo::nitro::JOnResolvedCallback>
   >::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JPromise,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   facebook::jni::alias_ref<margelo::nitro::JOnResolvedCallback>&&) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JPromise::*)(facebook::jni::alias_ref<margelo::nitro::JOnResolvedCallback>),&margelo::nitro::JPromise::addOnResolvedListenerJava,margelo::nitro::JPromise,void,facebook::jni::alias_ref<margelo::nitro::JOnResolvedCallback>>
     ::dispatch(JObject *param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  bad_alloc *this;
  undefined8 uVar8;
  ulong *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  void *pvVar13;
  ulong uVar14;
  ulong uVar15;
  void *pvVar16;
  ulong uVar17;
  void *pvVar18;
  exception_ptr aeStack_a8 [8];
  void *local_a0;
  void *local_98;
  undefined8 uStack_90;
  void *local_88;
  void *pvStack_80;
  void *local_78;
  void *pvStack_70;
  ulong *local_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((*PTR_hybridDataField_001ba508 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba508), iVar2 != 0)) {
    JObject::getClass();
                    /* try { // try from 00199540 to 00199543 has its CatchHandler @ 001995cc */
    uVar8 = FUN_001988c0(local_88);
    *(undefined8 *)PTR_hybridDataField_001ba500 = uVar8;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
               &local_88);
    __cxa_guard_release(PTR_hybridDataField_001ba508);
  }
                    /* try { // try from 00199280 to 0019929f has its CatchHandler @ 00199648 */
  lVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba500);
  pvVar13 = (void *)*param_2;
  local_a0 = pvVar13;
  std::__ndk1::mutex::lock();
  if (*(int *)(lVar3 + 0x10) == 1) {
    local_88 = *(void **)(lVar3 + 8);
                    /* try { // try from 001992b4 to 001992bf has its CatchHandler @ 00199618 */
    FUN_001996a0(&local_a0,&local_88);
  }
  else {
    if (pvVar13 != (void *)0x0) {
                    /* try { // try from 001992c8 to 001992e3 has its CatchHandler @ 00199638 */
      plVar4 = (long *)facebook::jni::Environment::current();
      pvVar13 = (void *)(**(code **)(*plVar4 + 0xa8))(plVar4,pvVar13);
      facebook::jni::throwPendingJniExceptionAsCppException();
      if (pvVar13 == (void *)0x0) {
        this = (bad_alloc *)__cxa_allocate_exception(8);
        std::bad_alloc::bad_alloc(this);
        if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 0019958c to 001995a3 has its CatchHandler @ 00199638 */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(this,PTR_typeinfo_001ba598,PTR__bad_alloc_001ba590);
        }
        goto LAB_00199698;
      }
    }
    uStack_90 = 0;
    puVar9 = (ulong *)(lVar3 + 0x28);
    uVar14 = *(ulong *)(lVar3 + 0x20);
    if (uVar14 < *puVar9) {
      local_98 = (void *)0x0;
      *(undefined8 *)(uVar14 + 0x20) = 0;
      local_88 = pvVar13;
                    /* try { // try from 0019930c to 00199313 has its CatchHandler @ 00199600 */
      puVar5 = (undefined8 *)operator_new(0x10);
      *puVar5 = &PTR_FUN_001b92d0;
      puVar5[1] = pvVar13;
      *(undefined8 **)(uVar14 + 0x20) = puVar5;
      *(ulong *)(lVar3 + 0x20) = uVar14 + 0x30;
    }
    else {
      uVar15 = *(ulong *)(lVar3 + 0x18);
      lVar11 = (long)(uVar14 - uVar15) >> 4;
      uVar17 = lVar11 * -0x5555555555555555 + 1;
      local_98 = pvVar13;
      if (0x555555555555555 < uVar17) {
        if (*(long *)(lVar1 + 0x28) != local_58) goto LAB_00199698;
                    /* try { // try from 001995b4 to 001995cb has its CatchHandler @ 0019961c */
        FUN_0019987c();
LAB_001995b8:
        if (*(long *)(lVar1 + 0x28) == local_58) {
          uVar8 = FUN_0015d614();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00199540 with catch @ 001995cc
                        */
          base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
          ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
                           *)&local_88);
          __cxa_guard_abort(PTR_hybridDataField_001ba508);
          __cxa_begin_catch(uVar8);
          std::current_exception();
          std::exception_ptr::~exception_ptr(aeStack_a8);
          if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 00199674 to 00199677 has its CatchHandler @ 00199678 */
            uVar8 = __cxa_rethrow();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00199674 with catch @ 00199678
                        */
                    /* try { // try from 0019967c to 0019967f has its CatchHandler @ 0019969c */
            __cxa_end_catch();
            if (*(long *)(lVar1 + 0x28) == local_58) {
              FUN_00157e74(uVar8);
            }
          }
        }
        goto LAB_00199698;
      }
      lVar10 = (long)(*puVar9 - uVar15) >> 4;
      uVar12 = lVar10 * 0x5555555555555556;
      if (uVar12 < uVar17 || uVar12 - uVar17 == 0) {
        uVar12 = uVar17;
      }
      if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar10 * -0x5555555555555555)) {
        uVar12 = 0x555555555555555;
      }
      local_68 = puVar9;
      if (uVar12 == 0) {
        local_88 = (void *)0x0;
      }
      else {
        if (0x555555555555555 < uVar12) goto LAB_001995b8;
                    /* try { // try from 0019939c to 0019939f has its CatchHandler @ 0019961c */
        local_88 = operator_new(uVar12 * 0x30);
      }
      pvVar16 = (void *)((long)local_88 + lVar11 * 0x10);
      local_98 = (void *)0x0;
      pvVar18 = (void *)((long)local_88 + uVar12 * 0x30);
      *(undefined8 *)((long)pvVar16 + 0x20) = 0;
      pvStack_80 = pvVar16;
      local_78 = pvVar16;
      pvStack_70 = pvVar18;
      local_60 = pvVar13;
                    /* try { // try from 001993d0 to 001993d7 has its CatchHandler @ 001995e8 */
      puVar5 = (undefined8 *)operator_new(0x10);
      local_78 = (void *)((long)pvVar16 + 0x30);
      *puVar5 = &PTR_FUN_001b92d0;
      puVar5[1] = pvVar13;
      *(undefined8 **)((long)pvVar16 + 0x20) = puVar5;
      if (uVar14 != uVar15) {
        lVar11 = 0;
        uVar17 = uVar14;
        do {
          uVar12 = (long)pvVar16 + lVar11;
          plVar4 = *(long **)(uVar14 + lVar11 + -0x10);
          if (plVar4 == (long *)0x0) {
LAB_00199408:
            *(undefined8 *)(uVar12 - 0x10) = 0;
          }
          else {
            plVar6 = (long *)(uVar14 + lVar11 + -0x30);
            if (plVar6 != plVar4) {
              *(long **)(uVar12 - 0x10) = plVar4;
              uVar12 = uVar17;
              goto LAB_00199408;
            }
            *(ulong *)(uVar12 - 0x10) = uVar12 - 0x30;
                    /* try { // try from 00199458 to 0019945b has its CatchHandler @ 00199634 */
            (**(code **)(*plVar6 + 0x18))();
          }
          lVar11 = lVar11 + -0x30;
          uVar17 = uVar17 - 0x30;
        } while (uVar14 + lVar11 != uVar15);
        pvVar16 = (void *)((long)pvVar16 + lVar11);
        pvVar18 = pvStack_70;
      }
      pvVar13 = local_78;
      plVar4 = *(long **)(lVar3 + 0x18);
      plVar6 = *(long **)(lVar3 + 0x20);
      *(void **)(lVar3 + 0x18) = pvVar16;
      *(void **)(lVar3 + 0x20) = local_78;
      *(void **)(lVar3 + 0x28) = pvVar18;
joined_r0x00199478:
      if (plVar6 != plVar4) {
        plVar7 = (long *)plVar6[-2];
        plVar6 = plVar6 + -6;
        if (plVar6 != plVar7) goto code_r0x00199508;
        lVar11 = 4;
        plVar7 = plVar6;
        goto LAB_001994e4;
      }
      if (plVar4 != (long *)0x0) {
        operator_delete(plVar4);
      }
      pvVar16 = local_98;
      *(void **)(lVar3 + 0x20) = pvVar13;
      if (local_98 != (void *)0x0) {
                    /* try { // try from 00199494 to 001994a7 has its CatchHandler @ 00199614 */
        plVar4 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar4 + 0xb0))(plVar4,pvVar16);
      }
    }
  }
  std::__ndk1::mutex::unlock();
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_00199698:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00199508:
  if (plVar7 != (long *)0x0) {
    lVar11 = 5;
LAB_001994e4:
    (**(code **)(*plVar7 + lVar11 * 8))();
  }
  goto joined_r0x00199478;
}


// ===== 001996a0  FUN_001996a0 =====

void FUN_001996a0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  _jobject *p_Var4;
  undefined8 uVar5;
  _jmethodID *p_Var6;
  base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> abStack_40 [8];
  long local_38;
  
  puVar2 = PTR_method_001ba528;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_method_001ba530 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_method_001ba530), iVar3 != 0)) {
                    /* try { // try from 00199734 to 0019973b has its CatchHandler @ 00199770 */
    FUN_00199d44(abStack_40);
                    /* try { // try from 0019973c to 00199743 has its CatchHandler @ 00199760 */
    uVar5 = FUN_00199dec(abStack_40);
    *(undefined8 *)puVar2 = uVar5;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref(abStack_40);
    __cxa_guard_release(PTR_method_001ba530);
  }
  p_Var6 = (_jmethodID *)*param_1;
  uVar5 = *param_2;
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var4,p_Var6,*(undefined8 *)puVar2,uVar5);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019979c  FUN_0019979c =====

void FUN_0019979c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 001997c8 to 001997db has its CatchHandler @ 00199808 */
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


// ===== 0019980c  FUN_0019980c =====

void FUN_0019980c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00199838 to 0019984b has its CatchHandler @ 00199878 */
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


// ===== 0019987c  FUN_0019987c =====

void FUN_0019987c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_0015d71c("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001998b4  FUN_001998b4 =====

void FUN_001998b4(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  plVar1 = (long *)param_1[1];
  plVar3 = (long *)param_1[2];
LAB_001998f4:
  if (plVar3 == plVar1) {
    if ((void *)*param_1 == (void *)0x0) {
      if (*(long *)(lVar2 + 0x28) == lVar4) {
        return;
      }
    }
    else if (*(long *)(lVar2 + 0x28) == lVar4) {
      operator_delete((void *)*param_1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  plVar5 = (long *)plVar3[-2];
  plVar3 = plVar3 + -6;
  param_1[2] = plVar3;
  if (plVar5 != plVar3) goto code_r0x00199910;
  lVar6 = 4;
  goto LAB_001998e4;
code_r0x00199910:
  if (plVar5 != (long *)0x0) {
    lVar6 = 5;
    plVar3 = plVar5;
LAB_001998e4:
    (**(code **)(*plVar3 + lVar6 * 8))();
    plVar3 = (long *)param_1[2];
  }
  goto LAB_001998f4;
}


// ===== 00199974  FUN_00199974 =====

void FUN_00199974(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = param_1[1];
  *param_1 = &PTR_FUN_001b92d0;
  if (lVar4 != 0) {
                    /* try { // try from 001999ac to 001999bf has its CatchHandler @ 001999ec */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb0))(plVar2,lVar4);
  }
  param_1[1] = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001999f0  FUN_001999f0 =====

void FUN_001999f0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = param_1[1];
  *param_1 = &PTR_FUN_001b92d0;
  if (lVar4 != 0) {
                    /* try { // try from 00199a28 to 00199a3b has its CatchHandler @ 00199a68 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb0))(plVar2,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00199a6c  FUN_00199a6c =====

undefined8 * FUN_00199a6c(long param_1)

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
  *puVar2 = &PTR_FUN_001b92d0;
                    /* try { // try from 00199aac to 00199ac7 has its CatchHandler @ 00199af4 */
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


// ===== 00199b1c  FUN_00199b1c =====

void FUN_00199b1c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_001b92d0;
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


// ===== 00199b98  FUN_00199b98 =====

void FUN_00199b98(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 != 0) {
                    /* try { // try from 00199bc4 to 00199bd7 has its CatchHandler @ 00199c04 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb0))(plVar2,lVar4);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00199c08  FUN_00199c08 =====

void FUN_00199c08(void *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)((long)param_1 + 8);
  if (lVar4 != 0) {
                    /* try { // try from 00199c34 to 00199c47 has its CatchHandler @ 00199c74 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb0))(plVar2,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00199c78  FUN_00199c78 =====

void FUN_00199c78(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_001996a0(param_1 + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00199cb4  FUN_00199cb4 =====

void FUN_00199cb4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_001ba538) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00199d04  FUN_00199d04 =====

undefined * FUN_00199d04(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_001ba540;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00199d44  FUN_00199d44 =====

void FUN_00199d44(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  
  lVar1 = tpidr_el0;
  lVar9 = *(long *)(lVar1 + 0x28);
  pcVar8 = (char *)operator_new(0x40);
  uVar7 = s_com_margelo_nitro_core_Promise_O_0013d010._40_8_;
  uVar6 = s_com_margelo_nitro_core_Promise_O_0013d010._32_8_;
  uVar5 = s_com_margelo_nitro_core_Promise_O_0013d010._24_8_;
  uVar4 = s_com_margelo_nitro_core_Promise_O_0013d010._16_8_;
  uVar3 = s_com_margelo_nitro_core_Promise_O_0013d010._8_8_;
  uVar2 = s_com_margelo_nitro_core_Promise_O_0013d010._0_8_;
  pcVar8[0x30] = 'k';
  pcVar8[0x31] = '\0';
  *(undefined8 *)(pcVar8 + 8) = uVar3;
  *(undefined8 *)pcVar8 = uVar2;
  *(undefined8 *)(pcVar8 + 0x18) = uVar5;
  *(undefined8 *)(pcVar8 + 0x10) = uVar4;
  *(undefined8 *)(pcVar8 + 0x28) = uVar7;
  *(undefined8 *)(pcVar8 + 0x20) = uVar6;
                    /* try { // try from 00199d94 to 00199d9b has its CatchHandler @ 00199dc4 */
  facebook::jni::findClassLocal(pcVar8);
  if (*(long *)(lVar1 + 0x28) == lVar9) {
    operator_delete(pcVar8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00199dec  FUN_00199dec =====

long FUN_00199dec(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,"onResolved",PTR_kDescriptor_001ba4e0);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00199e68  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JPromise::*)(facebook::jni::alias_ref<facebook::jni::JThrowable>),&margelo::nitro::JPromise::reject,margelo::nitro::JPromise,void,facebook::jni::alias_ref<facebook::jni::JThrowable>>::dispatch =====

/* facebook::jni::detail::MethodWrapper<void
   (margelo::nitro::JPromise::*)(facebook::jni::alias_ref<facebook::jni::JThrowable>),
   &margelo::nitro::JPromise::reject, margelo::nitro::JPromise, void,
   facebook::jni::alias_ref<facebook::jni::JThrowable>
   >::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JPromise,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   facebook::jni::alias_ref<facebook::jni::JThrowable>&&) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JPromise::*)(facebook::jni::alias_ref<facebook::jni::JThrowable>),&margelo::nitro::JPromise::reject,margelo::nitro::JPromise,void,facebook::jni::alias_ref<facebook::jni::JThrowable>>
     ::dispatch(JObject *param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*PTR_hybridDataField_001ba508 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba508);
    if (iVar2 != 0) {
      JObject::getClass();
                    /* try { // try from 00199f00 to 00199f03 has its CatchHandler @ 00199f2c */
      uVar3 = FUN_001988c0(local_30);
      *(undefined8 *)PTR_hybridDataField_001ba500 = uVar3;
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                 &local_30);
      __cxa_guard_release(PTR_hybridDataField_001ba508);
    }
  }
                    /* try { // try from 00199e98 to 00199eb3 has its CatchHandler @ 00199f48 */
  uVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba500);
  local_38 = *param_2;
  FUN_00199fa0(uVar3,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00199fa0  FUN_00199fa0 =====

void FUN_00199fa0(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  bad_alloc *this;
  long lVar6;
  long lVar7;
  undefined1 uStack_59;
  long local_58;
  long local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  std::__ndk1::mutex::lock();
  lVar6 = *param_2;
  if (lVar6 != 0) {
                    /* try { // try from 00199fdc to 00199ff7 has its CatchHandler @ 0019a154 */
    plVar4 = (long *)facebook::jni::Environment::current();
    lVar6 = (**(code **)(*plVar4 + 0xa8))(plVar4,lVar6);
    facebook::jni::throwPendingJniExceptionAsCppException();
    if (lVar6 == 0) {
LAB_0019a110:
      this = (bad_alloc *)__cxa_allocate_exception(8);
      if (*(long *)(lVar3 + 0x28) == local_48) {
        std::bad_alloc::bad_alloc(this);
                    /* try { // try from 0019a130 to 0019a147 has its CatchHandler @ 0019a154 */
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this,PTR_typeinfo_001ba598,PTR__bad_alloc_001ba590);
      }
      goto LAB_0019a190;
    }
  }
  iVar2 = *(int *)(param_1 + 0x10);
  local_50 = lVar6;
                    /* try { // try from 0019a004 to 0019a01f has its CatchHandler @ 0019a15c */
  plVar4 = (long *)facebook::jni::Environment::current();
  uVar5 = (**(code **)(*plVar4 + 0xa8))(plVar4,lVar6);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (iVar2 == 2) {
    lVar7 = *(long *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar5;
    if (lVar7 != 0) {
                    /* try { // try from 0019a034 to 0019a047 has its CatchHandler @ 0019a14c */
      plVar4 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar4 + 0xb0))(plVar4,lVar7);
    }
  }
  else {
    if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
                    /* try { // try from 0019a064 to 0019a06f has its CatchHandler @ 0019a148 */
      (*(code *)(&PTR_FUN_001b9258)[*(uint *)(param_1 + 0x10)])(&uStack_59,param_1 + 8);
    }
    *(undefined8 *)(param_1 + 8) = uVar5;
    *(undefined4 *)(param_1 + 0x10) = 2;
  }
  lVar1 = *(long *)(param_1 + 0x38);
  for (lVar7 = *(long *)(param_1 + 0x30); lVar7 != lVar1; lVar7 = lVar7 + 0x30) {
    local_58 = *param_2;
    plVar4 = *(long **)(lVar7 + 0x20);
    if (plVar4 == (long *)0x0) {
      if (*(long *)(lVar3 + 0x28) != local_48) goto LAB_0019a190;
                    /* try { // try from 0019a10c to 0019a10f has its CatchHandler @ 0019a164 */
      FUN_0016c8f4();
      goto LAB_0019a110;
    }
                    /* try { // try from 0019a0a0 to 0019a0a7 has its CatchHandler @ 0019a160 */
    (**(code **)(*plVar4 + 0x30))(plVar4,&local_58);
  }
  if (lVar6 != 0) {
                    /* try { // try from 0019a0b8 to 0019a0cb has its CatchHandler @ 0019a150 */
    plVar4 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar4 + 0xb0))(plVar4,lVar6);
  }
  std::__ndk1::mutex::unlock();
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
LAB_0019a190:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019a194  facebook::jni::base_owned_ref<facebook::jni::JThrowable,facebook::jni::GlobalReferenceAllocator>::~base_owned_ref =====

/* facebook::jni::base_owned_ref<facebook::jni::JThrowable,
   facebook::jni::GlobalReferenceAllocator>::~base_owned_ref() */

void __thiscall
facebook::jni::base_owned_ref<facebook::jni::JThrowable,facebook::jni::GlobalReferenceAllocator>::
~base_owned_ref(base_owned_ref<facebook::jni::JThrowable,facebook::jni::GlobalReferenceAllocator>
                *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)this;
  if (lVar4 != 0) {
                    /* try { // try from 0019a1c0 to 0019a1d3 has its CatchHandler @ 0019a200 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb0))(plVar2,lVar4);
  }
  *(undefined8 *)this = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019a204  FUN_0019a204 =====

void FUN_0019a204(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019a23c  FUN_0019a23c =====

void FUN_0019a23c(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_2;
  if (lVar4 != 0) {
                    /* try { // try from 0019a268 to 0019a27b has its CatchHandler @ 0019a2a8 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb0))(plVar2,lVar4);
  }
  *param_2 = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019a2ac  FUN_0019a2ac =====

void FUN_0019a2ac(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_2;
  if (lVar4 != 0) {
                    /* try { // try from 0019a2d8 to 0019a2eb has its CatchHandler @ 0019a318 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb0))(plVar2,lVar4);
  }
  *param_2 = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019a31c  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JPromise::*)(facebook::jni::alias_ref<facebook::jni::JObject>),&margelo::nitro::JPromise::resolve,margelo::nitro::JPromise,void,facebook::jni::alias_ref<facebook::jni::JObject>>::dispatch =====

/* facebook::jni::detail::MethodWrapper<void
   (margelo::nitro::JPromise::*)(facebook::jni::alias_ref<facebook::jni::JObject>),
   &margelo::nitro::JPromise::resolve, margelo::nitro::JPromise, void,
   facebook::jni::alias_ref<facebook::jni::JObject>
   >::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JPromise,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   facebook::jni::alias_ref<facebook::jni::JObject>&&) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JPromise::*)(facebook::jni::alias_ref<facebook::jni::JObject>),&margelo::nitro::JPromise::resolve,margelo::nitro::JPromise,void,facebook::jni::alias_ref<facebook::jni::JObject>>
     ::dispatch(JObject *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  bad_alloc *this;
  undefined8 uVar6;
  long lVar7;
  long local_58;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*PTR_hybridDataField_001ba508 & 1) == 0) goto LAB_0019a4e0;
  do {
                    /* try { // try from 0019a354 to 0019a36f has its CatchHandler @ 0019a560 */
    lVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba500);
    param_2 = (long *)*param_2;
    std::__ndk1::mutex::lock();
    if (param_2 == (long *)0x0) {
      lVar5 = 0;
    }
    else {
                    /* try { // try from 0019a374 to 0019a38f has its CatchHandler @ 0019a568 */
      plVar4 = (long *)facebook::jni::Environment::current();
      lVar5 = (**(code **)(*plVar4 + 0xa8))(plVar4,param_2);
      facebook::jni::throwPendingJniExceptionAsCppException();
      if (lVar5 == 0) {
        this = (bad_alloc *)__cxa_allocate_exception(8);
        std::bad_alloc::bad_alloc(this);
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 0019a3b4 to 0019a3cb has its CatchHandler @ 0019a568 */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(this,PTR_typeinfo_001ba598,PTR__bad_alloc_001ba590);
        }
LAB_0019a5d8:
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
    iVar2 = *(int *)(lVar3 + 0x10);
    local_50 = lVar5;
                    /* try { // try from 0019a3d8 to 0019a3f3 has its CatchHandler @ 0019a570 */
    plVar4 = (long *)facebook::jni::Environment::current();
    uVar6 = (**(code **)(*plVar4 + 0xa8))(plVar4,lVar5);
    facebook::jni::throwPendingJniExceptionAsCppException();
    if (iVar2 == 1) {
      lVar7 = *(long *)(lVar3 + 8);
      *(undefined8 *)(lVar3 + 8) = uVar6;
      if (lVar7 != 0) {
                    /* try { // try from 0019a408 to 0019a41b has its CatchHandler @ 0019a558 */
        plVar4 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar4 + 0xb0))(plVar4,lVar7);
      }
    }
    else {
      if (*(uint *)(lVar3 + 0x10) != 0xffffffff) {
                    /* try { // try from 0019a438 to 0019a443 has its CatchHandler @ 0019a554 */
        (*(code *)(&PTR_FUN_001b9258)[*(uint *)(lVar3 + 0x10)])(&local_58,lVar3 + 8);
      }
      *(undefined8 *)(lVar3 + 8) = uVar6;
      *(undefined4 *)(lVar3 + 0x10) = 1;
    }
    lVar7 = *(long *)(lVar3 + 0x18);
    lVar3 = *(long *)(lVar3 + 0x20);
    while( true ) {
      if (lVar7 == lVar3) {
        if (lVar5 != 0) {
                    /* try { // try from 0019a488 to 0019a49b has its CatchHandler @ 0019a55c */
          plVar4 = (long *)facebook::jni::Environment::current();
          (**(code **)(*plVar4 + 0xb0))(plVar4,lVar5);
        }
        std::__ndk1::mutex::unlock();
        if (*(long *)(lVar1 + 0x28) == local_48) {
          return;
        }
        goto LAB_0019a5d8;
      }
      plVar4 = *(long **)(lVar7 + 0x20);
      local_58 = (long)param_2;
      if (plVar4 == (long *)0x0) break;
                    /* try { // try from 0019a470 to 0019a477 has its CatchHandler @ 0019a574 */
      (**(code **)(*plVar4 + 0x30))(plVar4,&local_58);
      lVar7 = lVar7 + 0x30;
    }
    if (*(long *)(lVar1 + 0x28) != local_48) goto LAB_0019a5d8;
                    /* try { // try from 0019a4dc to 0019a4df has its CatchHandler @ 0019a578 */
    param_1 = (JObject *)FUN_0016c8f4();
LAB_0019a4e0:
    iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba508);
    if (iVar2 != 0) {
      JObject::getClass();
                    /* try { // try from 0019a50c to 0019a50f has its CatchHandler @ 0019a538 */
      uVar6 = FUN_001988c0(local_50);
      *(undefined8 *)PTR_hybridDataField_001ba500 = uVar6;
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                 &local_50);
      __cxa_guard_release(PTR_hybridDataField_001ba508);
    }
  } while( true );
}


// ===== 0019a5e0  FUN_0019a5e0 =====

void FUN_0019a5e0(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 0019a60c to 0019a61f has its CatchHandler @ 0019a64c */
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


// ===== 0019a650  margelo::nitro::JPromise::initHybrid =====

/* margelo::nitro::JPromise::initHybrid(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JPromise,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>)
    */

void margelo::nitro::JPromise::initHybrid(undefined8 *param_1)

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
  plVar3 = (long *)operator_new(0x70);
  plVar3[0xd] = 0;
  plVar3[1] = 0;
  *plVar3 = 0;
  plVar3[3] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_001b91a8;
  plVar3[6] = 0;
  plVar3[5] = 0;
  plVar3[8] = 0;
  plVar3[7] = 0;
  plVar3[10] = 0;
  plVar3[9] = 0;
  plVar3[0xc] = 0;
  plVar3[0xb] = 0;
  plVar3[4] = 0;
  plVar3[3] = 0;
                    /* try { // try from 0019a6b0 to 0019a6b7 has its CatchHandler @ 0019a774 */
  facebook::jni::detail::HybridData::create();
  uVar2 = local_48;
                    /* try { // try from 0019a6bc to 0019a6d7 has its CatchHandler @ 0019a780 */
  plVar4 = (long *)facebook::jni::Environment::current();
  lVar5 = (**(code **)(*plVar4 + 200))(plVar4,uVar2);
  facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 0019a6e0 to 0019a6eb has its CatchHandler @ 0019a74c */
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
                    /* try { // try from 0019a70c to 0019a71f has its CatchHandler @ 0019a77c */
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


// ===== 0019a7b0  FUN_0019a7b0 =====

void FUN_0019a7b0(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined ***pppuVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined **local_70;
  long lStack_68;
  long *local_50;
  long local_38;
  
  pppuVar3 = &local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0x10) == 0) {
    local_70 = &PTR_FUN_001b91f8;
    lStack_68 = param_1;
    local_50 = (long *)&local_70;
                    /* try { // try from 0019a908 to 0019a90f has its CatchHandler @ 0019a944 */
    facebook::jni::ThreadScope::WithClassLoader((function *)&local_70);
    if ((undefined ***)local_50 == &local_70) {
      lVar4 = 4;
    }
    else {
      if (local_50 == (long *)0x0) goto LAB_0019a7dc;
      lVar4 = 5;
      pppuVar3 = (undefined ***)local_50;
    }
    (**(code **)((long)*pppuVar3 + lVar4 * 8))();
  }
LAB_0019a7dc:
  std::__ndk1::mutex::~mutex((mutex *)(param_1 + 0x48));
  plVar5 = *(long **)(param_1 + 0x30);
  if (plVar5 != (long *)0x0) {
    plVar6 = *(long **)(param_1 + 0x38);
    plVar2 = plVar5;
    if (plVar6 != plVar5) {
      do {
        plVar2 = (long *)plVar6[-2];
        plVar6 = plVar6 + -6;
        if (plVar6 == plVar2) {
          lVar4 = 4;
          plVar2 = plVar6;
LAB_0019a808:
          (**(code **)(*plVar2 + lVar4 * 8))();
        }
        else if (plVar2 != (long *)0x0) {
          lVar4 = 5;
          goto LAB_0019a808;
        }
      } while (plVar6 != plVar5);
      plVar2 = *(long **)(param_1 + 0x30);
    }
    *(long **)(param_1 + 0x38) = plVar5;
    operator_delete(plVar2);
  }
  plVar5 = *(long **)(param_1 + 0x18);
  if (plVar5 != (long *)0x0) {
    plVar6 = *(long **)(param_1 + 0x20);
    plVar2 = plVar5;
    if (plVar6 != plVar5) {
      do {
        plVar2 = (long *)plVar6[-2];
        plVar6 = plVar6 + -6;
        if (plVar6 == plVar2) {
          lVar4 = 4;
          plVar2 = plVar6;
LAB_0019a868:
          (**(code **)(*plVar2 + lVar4 * 8))();
        }
        else if (plVar2 != (long *)0x0) {
          lVar4 = 5;
          goto LAB_0019a868;
        }
      } while (plVar6 != plVar5);
      plVar2 = *(long **)(param_1 + 0x18);
    }
    *(long **)(param_1 + 0x20) = plVar5;
    operator_delete(plVar2);
  }
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
                    /* try { // try from 0019a8bc to 0019a8c7 has its CatchHandler @ 0019a948 */
    (*(code *)(&PTR_FUN_001b9258)[*(uint *)(param_1 + 0x10)])(&local_70,param_1 + 8);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0019a94c  FUN_0019a94c =====

void FUN_0019a94c(undefined8 *param_1)

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
    FUN_0019a7b0(pvVar3);
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      operator_delete(pvVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019a9c4  FUN_0019a9c4 =====

void FUN_0019a9c4(void *param_1)

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


// ===== 0019a9fc  FUN_0019a9fc =====

void FUN_0019a9fc(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_001b91f8;
  puVar2[1] = uVar4;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019aa58  FUN_0019aa58 =====

void FUN_0019aa58(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_001b91f8;
  param_2[1] = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019aaa0  FUN_0019aaa0 =====

void FUN_0019aaa0(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019aad8  FUN_0019aad8 =====

void FUN_0019aad8(void *param_1)

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


// ===== 0019ab10  FUN_0019ab10 =====

void FUN_0019ab10(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  runtime_error arStack_60 [16];
  exception_ptr aeStack_50 [8];
  runtime_error arStack_48 [16];
  long local_38;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  std::runtime_error::runtime_error(arStack_48,"Timeouted: JPromise was destroyed!");
  std::runtime_error::runtime_error(arStack_60,arStack_48);
  FUN_0016c680(aeStack_50,arStack_60);
                    /* try { // try from 0019ab58 to 0019ab63 has its CatchHandler @ 0019abe0 */
  facebook::jni::getJavaExceptionForCppException(&local_38,aeStack_50);
  local_30 = local_38;
                    /* try { // try from 0019ab6c to 0019ab77 has its CatchHandler @ 0019abd0 */
  FUN_00199fa0(uVar3,&local_30);
  if (local_38 != 0) {
                    /* try { // try from 0019ab80 to 0019ab93 has its CatchHandler @ 0019ac18 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,local_38);
  }
  local_38 = 0;
  std::exception_ptr::~exception_ptr(aeStack_50);
  std::runtime_error::~runtime_error(arStack_60);
  std::runtime_error::~runtime_error(arStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019ac1c  FUN_0019ac1c =====

void FUN_0019ac1c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_001ba4f0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0019ac6c  FUN_0019ac6c =====

undefined * FUN_0019ac6c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_001ba4f8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019acac  facebook::jni::base_owned_ref<facebook::jni::JThrowable,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

/* facebook::jni::base_owned_ref<facebook::jni::JThrowable,
   facebook::jni::LocalReferenceAllocator>::~base_owned_ref() */

void __thiscall
facebook::jni::base_owned_ref<facebook::jni::JThrowable,facebook::jni::LocalReferenceAllocator>::
~base_owned_ref(base_owned_ref<facebook::jni::JThrowable,facebook::jni::LocalReferenceAllocator>
                *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)this;
  if (lVar4 != 0) {
                    /* try { // try from 0019acd8 to 0019aceb has its CatchHandler @ 0019ad18 */
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


// ===== 0019ad1c  FUN_0019ad1c =====

void FUN_0019ad1c(detail *param_1,HybridData *param_2)

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
                    /* try { // try from 0019ad50 to 0019ad5b has its CatchHandler @ 0019adb0 */
  facebook::jni::detail::HybridDestructor::setNativePointer(&local_30,&local_38);
  plVar2 = local_38;
  local_38 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (local_30 != 0) {
                    /* try { // try from 0019ad7c to 0019ad8f has its CatchHandler @ 0019adf0 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019adf4  FUN_0019adf4 =====

void FUN_0019adf4(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 0019ae20 to 0019ae33 has its CatchHandler @ 0019ae60 */
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


// ===== 0019ae64  FUN_0019ae64 =====

void FUN_0019ae64(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_0019a7b0();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019aeb0  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<void(*)(facebook::jni::alias_ref<facebook::jni::JClass>,facebook::jni::alias_ref<facebook::jni::JObject>,facebook::jni::alias_ref<facebook::jni::JObject>),&margelo::nitro::JHardwareBufferUtils::copyHardwareBufferBoxed,facebook::jni::JClass,void,facebook::jni::alias_ref<facebook::jni::JObject>,facebook::jni::alias_ref<facebook::jni::JObject>>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<void
   (*)(facebook::jni::alias_ref<facebook::jni::JClass>,
   facebook::jni::alias_ref<facebook::jni::JObject>,
   facebook::jni::alias_ref<facebook::jni::JObject>),
   &margelo::nitro::JHardwareBufferUtils::copyHardwareBufferBoxed, facebook::jni::JClass, void,
   facebook::jni::alias_ref<facebook::jni::JObject>,
   facebook::jni::alias_ref<facebook::jni::JObject> >::call(_JNIEnv*, _jobject*, _jobject*,
   _jobject*) */

void facebook::jni::detail::
     FunctionWrapperWithJniEntryPoint<void(*)(facebook::jni::alias_ref<facebook::jni::JClass>,facebook::jni::alias_ref<facebook::jni::JObject>,facebook::jni::alias_ref<facebook::jni::JObject>),&margelo::nitro::JHardwareBufferUtils::copyHardwareBufferBoxed,facebook::jni::JClass,void,facebook::jni::alias_ref<facebook::jni::JObject>,facebook::jni::alias_ref<facebook::jni::JObject>>
     ::call(_JNIEnv *param_1,_jobject *param_2,_jobject *param_3,_jobject *param_4)

{
  long lVar1;
  JniEnvCacher aJStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_40,param_1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 0019aee8 to 0019aeeb has its CatchHandler @ 0019aeec */
    margelo::nitro::JHardwareBufferUtils::copyHardwareBufferBoxed();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0019aee8 with catch @ 0019aeec
                        */
    __cxa_begin_catch();
                    /* try { // try from 0019aef0 to 0019aef3 has its CatchHandler @ 0019af28 */
    facebook::jni::translatePendingCppExceptionToJavaException();
                    /* try { // try from 0019aef4 to 0019aef7 has its CatchHandler @ 0019af20 */
    __cxa_end_catch();
    facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_40);
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019af58  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::JObject,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::JClass>,facebook::jni::alias_ref<facebook::jni::JObject>),&margelo::nitro::JHardwareBufferUtils::copyHardwareBufferBoxedNew,facebook::jni::JClass,facebook::jni::basic_strong_ref<facebook::jni::JObject,facebook::jni::LocalReferenceAllocator>,facebook::jni::alias_ref<facebook::jni::JObject>>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::JObject,
   facebook::jni::LocalReferenceAllocator> (*)(facebook::jni::alias_ref<facebook::jni::JClass>,
   facebook::jni::alias_ref<facebook::jni::JObject>),
   &margelo::nitro::JHardwareBufferUtils::copyHardwareBufferBoxedNew, facebook::jni::JClass,
   facebook::jni::basic_strong_ref<facebook::jni::JObject, facebook::jni::LocalReferenceAllocator>,
   facebook::jni::alias_ref<facebook::jni::JObject> >::call(_JNIEnv*, _jobject*, _jobject*) */

undefined8
facebook::jni::detail::
FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::JObject,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::JClass>,facebook::jni::alias_ref<facebook::jni::JObject>),&margelo::nitro::JHardwareBufferUtils::copyHardwareBufferBoxedNew,facebook::jni::JClass,facebook::jni::basic_strong_ref<facebook::jni::JObject,facebook::jni::LocalReferenceAllocator>,facebook::jni::alias_ref<facebook::jni::JObject>>
::call(_JNIEnv *param_1,_jobject *param_2,_jobject *param_3)

{
  long lVar1;
  JniEnvCacher aJStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_40,param_1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 0019af90 to 0019af93 has its CatchHandler @ 0019af94 */
    margelo::nitro::JHardwareBufferUtils::copyHardwareBufferBoxedNew();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0019af90 with catch @ 0019af94
                        */
    __cxa_begin_catch();
                    /* try { // try from 0019af98 to 0019af9b has its CatchHandler @ 0019afd4 */
    facebook::jni::translatePendingCppExceptionToJavaException();
                    /* try { // try from 0019af9c to 0019af9f has its CatchHandler @ 0019afcc */
    __cxa_end_catch();
    facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_40);
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019b004  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>),&margelo::nitro::JAnyValue::initHybridNull,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   (*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>),
   &margelo::nitro::JAnyValue::initHybridNull,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>>::call(_JNIEnv*, _jobject*) */

undefined8
facebook::jni::detail::
FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>),&margelo::nitro::JAnyValue::initHybridNull,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>
::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  JniEnvCacher aJStack_58 [24];
  undefined8 *local_40;
  undefined1 uStack_31;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_58,param_1);
                    /* try { // try from 0019b02c to 0019b033 has its CatchHandler @ 0019b0dc */
  local_40 = (undefined8 *)operator_new(0x38);
  local_40[6] = 0;
  local_40[3] = 0;
  local_40[2] = 0;
  local_40[5] = 0;
  local_40[4] = 0;
  local_40[1] = 0;
  *local_40 = 0;
  *local_40 = &PTR_FUN_001b9418;
                    /* try { // try from 0019b054 to 0019b05f has its CatchHandler @ 0019b0cc */
  FUN_0019ceb0(&local_30,&local_40);
  puVar2 = local_40;
  local_40 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    if (*(uint *)(puVar2 + 6) != 0xffffffff) {
                    /* try { // try from 0019b084 to 0019b08f has its CatchHandler @ 0019b0c8 */
      (*(code *)(&PTR_FUN_001b9458)[*(uint *)(puVar2 + 6)])(&uStack_31,puVar2 + 1);
    }
    operator_delete(puVar2);
  }
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019b130  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,double),&margelo::nitro::JAnyValue::initHybridDouble,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>,double>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   (*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   double), &margelo::nitro::JAnyValue::initHybridDouble,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>,
   double>::call(_JNIEnv*, _jobject*, double) */

undefined8
facebook::jni::detail::
FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,double),&margelo::nitro::JAnyValue::initHybridDouble,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>,double>
::call(_JNIEnv *param_1,_jobject *param_2,double param_3)

{
  long lVar1;
  undefined8 *puVar2;
  JniEnvCacher aJStack_68 [24];
  undefined8 *local_50;
  undefined1 uStack_41;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_68,param_1);
                    /* try { // try from 0019b160 to 0019b167 has its CatchHandler @ 0019b210 */
  local_50 = (undefined8 *)operator_new(0x38);
  local_50[1] = param_3;
  *local_50 = &PTR_FUN_001b9418;
  *(undefined4 *)(local_50 + 6) = 2;
                    /* try { // try from 0019b184 to 0019b18f has its CatchHandler @ 0019b200 */
  FUN_0019ceb0(&local_40,&local_50);
  puVar2 = local_50;
  local_50 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    if (*(uint *)(puVar2 + 6) != 0xffffffff) {
                    /* try { // try from 0019b1b4 to 0019b1bf has its CatchHandler @ 0019b1fc */
      (*(code *)(&PTR_FUN_001b9458)[*(uint *)(puVar2 + 6)])(&uStack_41,puVar2 + 1);
    }
    operator_delete(puVar2);
  }
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return local_40;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019b264  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,bool),&margelo::nitro::JAnyValue::initHybridBoolean,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>,bool>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   (*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   bool), &margelo::nitro::JAnyValue::initHybridBoolean,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>,
   bool>::call(_JNIEnv*, _jobject*, unsigned char) */

undefined8
facebook::jni::detail::
FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,bool),&margelo::nitro::JAnyValue::initHybridBoolean,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>,bool>
::call(_JNIEnv *param_1,_jobject *param_2,uchar param_3)

{
  long lVar1;
  undefined8 *puVar2;
  JniEnvCacher aJStack_58 [24];
  undefined8 *local_40;
  undefined1 uStack_31;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_58,param_1);
                    /* try { // try from 0019b290 to 0019b297 has its CatchHandler @ 0019b344 */
  local_40 = (undefined8 *)operator_new(0x38);
  *local_40 = &PTR_FUN_001b9418;
  *(undefined4 *)(local_40 + 6) = 1;
  *(bool *)(local_40 + 1) = param_3 != '\0';
                    /* try { // try from 0019b2bc to 0019b2c7 has its CatchHandler @ 0019b334 */
  FUN_0019ceb0(&local_30,&local_40);
  puVar2 = local_40;
  local_40 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    if (*(uint *)(puVar2 + 6) != 0xffffffff) {
                    /* try { // try from 0019b2ec to 0019b2f7 has its CatchHandler @ 0019b330 */
      (*(code *)(&PTR_FUN_001b9458)[*(uint *)(puVar2 + 6)])(&uStack_31,puVar2 + 1);
    }
    operator_delete(puVar2);
  }
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019b398  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,long),&margelo::nitro::JAnyValue::initHybridLong,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>,long>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   (*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   long), &margelo::nitro::JAnyValue::initHybridLong,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>,
   long>::call(_JNIEnv*, _jobject*, long) */

undefined8
facebook::jni::detail::
FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,long),&margelo::nitro::JAnyValue::initHybridLong,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>,long>
::call(_JNIEnv *param_1,_jobject *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  JniEnvCacher aJStack_58 [24];
  undefined8 *local_40;
  undefined1 uStack_31;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_58,param_1);
                    /* try { // try from 0019b3c4 to 0019b3cb has its CatchHandler @ 0019b46c */
  local_40 = (undefined8 *)operator_new(0x38);
  *local_40 = &PTR_FUN_001b9418;
  local_40[1] = param_3;
  *(undefined4 *)(local_40 + 6) = 3;
                    /* try { // try from 0019b3e4 to 0019b3ef has its CatchHandler @ 0019b45c */
  FUN_0019ceb0(&local_30,&local_40);
  puVar2 = local_40;
  local_40 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    if (*(uint *)(puVar2 + 6) != 0xffffffff) {
                    /* try { // try from 0019b414 to 0019b41f has its CatchHandler @ 0019b458 */
      (*(code *)(&PTR_FUN_001b9458)[*(uint *)(puVar2 + 6)])(&uStack_31,puVar2 + 1);
    }
    operator_delete(puVar2);
  }
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019b4c0  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyValue::initHybridString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   (*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&), &margelo::nitro::JAnyValue::initHybridString,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&>::call(_JNIEnv*, _jobject*, _jstring*) */

_jstring *
facebook::jni::detail::
FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyValue::initHybridString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
::call(_JNIEnv *param_1,_jobject *param_2,_jstring *param_3)

{
  long lVar1;
  _jstring *p_Var2;
  JniEnvCacher aJStack_78 [24];
  byte local_60 [16];
  void *local_50;
  _jobject *local_48;
  _jstring *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_78,param_1);
  local_48 = param_2;
  local_40 = param_3;
                    /* try { // try from 0019b4f8 to 0019b503 has its CatchHandler @ 0019b574 */
  facebook::jni::JString::toStdString();
                    /* try { // try from 0019b504 to 0019b513 has its CatchHandler @ 0019b55c */
  margelo::nitro::JAnyValue::initHybridString((JAnyValue *)&local_40,&local_48,local_60);
  p_Var2 = local_40;
  local_40 = (_jstring *)0x0;
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return p_Var2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019b5c8  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::alias_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>),&margelo::nitro::JAnyValue::initHybridAnyArray,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>,facebook::jni::alias_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   (*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   facebook::jni::alias_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>
   >), &margelo::nitro::JAnyValue::initHybridAnyArray,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>,
   facebook::jni::alias_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*> >
   >::call(_JNIEnv*, _jobject*,
   facebook::jni::detail::JTypeFor<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   facebook::jni::detail::JTypeArray, void>::_javaobject*) */

undefined8
facebook::jni::detail::
FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::alias_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>),&margelo::nitro::JAnyValue::initHybridAnyArray,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>,facebook::jni::alias_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>>
::call(_JNIEnv *param_1,_jobject *param_2,_javaobject *param_3)

{
  long lVar1;
  JniEnvCacher aJStack_68 [24];
  _javaobject *local_50;
  _jobject *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_68,param_1);
                    /* try { // try from 0019b604 to 0019b613 has its CatchHandler @ 0019b648 */
  local_50 = param_3;
  local_48 = param_2;
  margelo::nitro::JAnyValue::initHybridAnyArray((JAnyValue *)&local_40,&local_48,&local_50);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return local_40;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019b694  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::alias_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>),&margelo::nitro::JAnyValue::initHybridAnyObject,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>,facebook::jni::alias_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   (*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   facebook::jni::alias_ref<facebook::jni::JMap<facebook::jni::JString,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>
   >), &margelo::nitro::JAnyValue::initHybridAnyObject,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>,
   facebook::jni::alias_ref<facebook::jni::JMap<facebook::jni::JString,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*> >
   >::call(_JNIEnv*, _jobject*,
   facebook::jni::detail::JTypeFor<facebook::jni::JMap<facebook::jni::JString,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   facebook::jni::JObject, void>::_javaobject*) */

undefined8
facebook::jni::detail::
FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::alias_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>),&margelo::nitro::JAnyValue::initHybridAnyObject,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>,facebook::jni::alias_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>>
::call(_JNIEnv *param_1,_jobject *param_2,_javaobject *param_3)

{
  long lVar1;
  JniEnvCacher aJStack_68 [24];
  _javaobject *local_50;
  _jobject *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_68,param_1);
                    /* try { // try from 0019b6d0 to 0019b6df has its CatchHandler @ 0019b714 */
  local_50 = param_3;
  local_48 = param_2;
  margelo::nitro::JAnyValue::initHybridAnyObject((JAnyValue *)&local_40,&local_48,&local_50);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return local_40;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019b760  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::isNull,margelo::nitro::JAnyValue,bool>::call =====

/* facebook::jni::detail::MethodWrapper<bool (margelo::nitro::JAnyValue::*)(),
   &margelo::nitro::JAnyValue::isNull, margelo::nitro::JAnyValue, bool>::call(_JNIEnv*, _jobject*)
    */

void facebook::jni::detail::
     MethodWrapper<bool(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::isNull,margelo::nitro::JAnyValue,bool>
     ::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_0019ddc0(param_1,param_2,PTR_dispatch_001ba238);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019b7a0  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::isDouble,margelo::nitro::JAnyValue,bool>::call =====

/* facebook::jni::detail::MethodWrapper<bool (margelo::nitro::JAnyValue::*)(),
   &margelo::nitro::JAnyValue::isDouble, margelo::nitro::JAnyValue, bool>::call(_JNIEnv*, _jobject*)
    */

void facebook::jni::detail::
     MethodWrapper<bool(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::isDouble,margelo::nitro::JAnyValue,bool>
     ::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_0019ddc0(param_1,param_2,PTR_dispatch_001ba240);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019b7e0  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::isBoolean,margelo::nitro::JAnyValue,bool>::call =====

/* facebook::jni::detail::MethodWrapper<bool (margelo::nitro::JAnyValue::*)(),
   &margelo::nitro::JAnyValue::isBoolean, margelo::nitro::JAnyValue, bool>::call(_JNIEnv*,
   _jobject*) */

void facebook::jni::detail::
     MethodWrapper<bool(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::isBoolean,margelo::nitro::JAnyValue,bool>
     ::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_0019ddc0(param_1,param_2,PTR_dispatch_001ba248);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019b820  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::isInt64,margelo::nitro::JAnyValue,bool>::call =====

/* facebook::jni::detail::MethodWrapper<bool (margelo::nitro::JAnyValue::*)(),
   &margelo::nitro::JAnyValue::isInt64, margelo::nitro::JAnyValue, bool>::call(_JNIEnv*, _jobject*)
    */

void facebook::jni::detail::
     MethodWrapper<bool(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::isInt64,margelo::nitro::JAnyValue,bool>
     ::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_0019ddc0(param_1,param_2,PTR_dispatch_001ba250);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019b860  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::isString,margelo::nitro::JAnyValue,bool>::call =====

/* facebook::jni::detail::MethodWrapper<bool (margelo::nitro::JAnyValue::*)(),
   &margelo::nitro::JAnyValue::isString, margelo::nitro::JAnyValue, bool>::call(_JNIEnv*, _jobject*)
    */

void facebook::jni::detail::
     MethodWrapper<bool(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::isString,margelo::nitro::JAnyValue,bool>
     ::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_0019ddc0(param_1,param_2,PTR_dispatch_001ba258);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019b8a0  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::isAnyArray,margelo::nitro::JAnyValue,bool>::call =====

/* facebook::jni::detail::MethodWrapper<bool (margelo::nitro::JAnyValue::*)(),
   &margelo::nitro::JAnyValue::isAnyArray, margelo::nitro::JAnyValue, bool>::call(_JNIEnv*,
   _jobject*) */

void facebook::jni::detail::
     MethodWrapper<bool(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::isAnyArray,margelo::nitro::JAnyValue,bool>
     ::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_0019ddc0(param_1,param_2,PTR_dispatch_001ba260);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019b8e0  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::isAnyObject,margelo::nitro::JAnyValue,bool>::call =====

/* facebook::jni::detail::MethodWrapper<bool (margelo::nitro::JAnyValue::*)(),
   &margelo::nitro::JAnyValue::isAnyObject, margelo::nitro::JAnyValue, bool>::call(_JNIEnv*,
   _jobject*) */

void facebook::jni::detail::
     MethodWrapper<bool(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::isAnyObject,margelo::nitro::JAnyValue,bool>
     ::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_0019ddc0(param_1,param_2,PTR_dispatch_001ba268);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019b920  facebook::jni::detail::MethodWrapper<double(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asDouble,margelo::nitro::JAnyValue,double>::call =====

/* facebook::jni::detail::MethodWrapper<double (margelo::nitro::JAnyValue::*)(),
   &margelo::nitro::JAnyValue::asDouble, margelo::nitro::JAnyValue, double>::call(_JNIEnv*,
   _jobject*) */

undefined1  [16]
facebook::jni::detail::
MethodWrapper<double(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asDouble,margelo::nitro::JAnyValue,double>
::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  JniEnvCacher aJStack_58 [24];
  _jobject *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_58,param_1);
                    /* try { // try from 0019b954 to 0019b95b has its CatchHandler @ 0019b990 */
  local_40 = param_2;
  auVar2._0_8_ = dispatch(&local_40);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    auVar2._8_8_ = 0;
    return auVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019b9dc  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asBoolean,margelo::nitro::JAnyValue,bool>::call =====

/* facebook::jni::detail::MethodWrapper<bool (margelo::nitro::JAnyValue::*)(),
   &margelo::nitro::JAnyValue::asBoolean, margelo::nitro::JAnyValue, bool>::call(_JNIEnv*,
   _jobject*) */

void facebook::jni::detail::
     MethodWrapper<bool(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asBoolean,margelo::nitro::JAnyValue,bool>
     ::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_0019ddc0(param_1,param_2,PTR_dispatch_001ba270);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019ba1c  facebook::jni::detail::MethodWrapper<long(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asInt64,margelo::nitro::JAnyValue,long>::call =====

/* facebook::jni::detail::MethodWrapper<long (margelo::nitro::JAnyValue::*)(),
   &margelo::nitro::JAnyValue::asInt64, margelo::nitro::JAnyValue, long>::call(_JNIEnv*, _jobject*)
    */

undefined8
facebook::jni::detail::
MethodWrapper<long(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asInt64,margelo::nitro::JAnyValue,long>
::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  undefined8 uVar2;
  JniEnvCacher aJStack_48 [24];
  _jobject *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_48,param_1);
                    /* try { // try from 0019ba4c to 0019ba53 has its CatchHandler @ 0019ba84 */
  local_30 = param_2;
  uVar2 = dispatch(&local_30);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019bad0  facebook::jni::detail::MethodWrapper<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asString,margelo::nitro::JAnyValue,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>::call =====

/* facebook::jni::detail::MethodWrapper<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > (margelo::nitro::JAnyValue::*)(),
   &margelo::nitro::JAnyValue::asString, margelo::nitro::JAnyValue, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >>::call(_JNIEnv*, _jobject*) */

undefined8
facebook::jni::detail::
MethodWrapper<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asString,margelo::nitro::JAnyValue,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
::call(_JNIEnv *param_1,_jobject *param_2)

{
  char *pcVar1;
  long lVar2;
  JniEnvCacher aJStack_68 [24];
  MethodWrapper<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asString,margelo::nitro::JAnyValue,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
  local_50 [16];
  char *local_40;
  _jobject *local_38;
  undefined8 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_68,param_1);
                    /* try { // try from 0019bb00 to 0019bb0f has its CatchHandler @ 0019bb84 */
  local_38 = param_2;
  dispatch(local_50,&local_38);
  pcVar1 = (char *)((ulong)local_50 | 1);
  if (((byte)local_50[0] & 1) != 0) {
    pcVar1 = local_40;
  }
                    /* try { // try from 0019bb24 to 0019bb2b has its CatchHandler @ 0019bb6c */
  facebook::jni::make_jstring(pcVar1);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_68);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019bbd8  facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asAnyArray,margelo::nitro::JAnyValue,facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>>::call =====

/* facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   facebook::jni::LocalReferenceAllocator> (margelo::nitro::JAnyValue::*)(),
   &margelo::nitro::JAnyValue::asAnyArray, margelo::nitro::JAnyValue,
   facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   facebook::jni::LocalReferenceAllocator>>::call(_JNIEnv*, _jobject*) */

undefined8
facebook::jni::detail::
MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asAnyArray,margelo::nitro::JAnyValue,facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>>
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
                    /* try { // try from 0019bc08 to 0019bc13 has its CatchHandler @ 0019bc44 */
  local_38 = param_2;
  dispatch((MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asAnyArray,margelo::nitro::JAnyValue,facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>>
            *)&local_30,&local_38);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019bc90  facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asAnyObject,margelo::nitro::JAnyValue,facebook::jni::basic_strong_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>>::call =====

/* facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JMap<facebook::jni::JString,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   facebook::jni::LocalReferenceAllocator> (margelo::nitro::JAnyValue::*)(),
   &margelo::nitro::JAnyValue::asAnyObject, margelo::nitro::JAnyValue,
   facebook::jni::basic_strong_ref<facebook::jni::JMap<facebook::jni::JString,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   facebook::jni::LocalReferenceAllocator>>::call(_JNIEnv*, _jobject*) */

undefined8
facebook::jni::detail::
MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asAnyObject,margelo::nitro::JAnyValue,facebook::jni::basic_strong_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>>
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
                    /* try { // try from 0019bcc0 to 0019bccb has its CatchHandler @ 0019bcfc */
  local_38 = param_2;
  dispatch((MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asAnyObject,margelo::nitro::JAnyValue,facebook::jni::basic_strong_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>>
            *)&local_30,&local_38);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019bd48  facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asAnyObject,margelo::nitro::JAnyValue,facebook::jni::basic_strong_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>>::dispatch =====

/* facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JMap<facebook::jni::JString,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   facebook::jni::LocalReferenceAllocator> (margelo::nitro::JAnyValue::*)(),
   &margelo::nitro::JAnyValue::asAnyObject, margelo::nitro::JAnyValue,
   facebook::jni::basic_strong_ref<facebook::jni::JMap<facebook::jni::JString,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   facebook::jni::LocalReferenceAllocator>>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>)
    */

void __thiscall
facebook::jni::detail::
MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asAnyObject,margelo::nitro::JAnyValue,facebook::jni::basic_strong_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>>
::dispatch(undefined8 *param_1,
          MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asAnyObject,margelo::nitro::JAnyValue,facebook::jni::basic_strong_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>>
          *this)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  void *pvVar9;
  exception_ptr aeStack_b0 [8];
  long local_a8;
  long lStack_a0;
  long local_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  void *local_78 [2];
  undefined8 *local_68;
  undefined4 local_60;
  long local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (((*PTR_hybridDataField_001ba368 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_001ba368), iVar4 != 0)) {
    JObject::getClass();
                    /* try { // try from 0019bf40 to 0019bf43 has its CatchHandler @ 0019bf80 */
    uVar7 = FUN_0019c044(local_78[0]);
    *(undefined8 *)PTR_hybridDataField_001ba360 = uVar7;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
               local_78);
    __cxa_guard_release(PTR_hybridDataField_001ba368);
  }
                    /* try { // try from 0019bd80 to 0019bda7 has its CatchHandler @ 0019bfa4 */
  lVar5 = getHybridDataFromField((JObject *)this,(JField *)PTR_hybridDataField_001ba360);
  if (*(int *)(lVar5 + 0x30) == 6) {
    FUN_0015ede8(local_78,lVar5 + 8);
                    /* try { // try from 0019bdac to 0019bdb3 has its CatchHandler @ 0019bf9c */
    FUN_0019c1bc(&local_80,local_60);
    puVar8 = local_68;
    if (local_68 == (undefined8 *)0x0) {
      *param_1 = local_80;
    }
    else {
      do {
        pcVar1 = (char *)((long)puVar8 + 0x11);
        if ((*(byte *)(puVar8 + 2) & 1) != 0) {
          pcVar1 = (char *)puVar8[4];
        }
                    /* try { // try from 0019bde4 to 0019bdeb has its CatchHandler @ 0019bfb0 */
        facebook::jni::make_jstring(pcVar1);
                    /* try { // try from 0019bdec to 0019bdf7 has its CatchHandler @ 0019bfb8 */
        FUN_0019c2e4(&local_50,puVar8 + 5);
        lVar3 = local_50;
        local_90 = local_50;
        local_a8 = local_50;
        lStack_a0 = local_88;
                    /* try { // try from 0019be08 to 0019be1b has its CatchHandler @ 0019bfc0 */
        FUN_0019c944(&local_98,&local_80,&lStack_a0,&local_a8);
        lVar5 = local_98;
        if (local_98 != 0) {
                    /* try { // try from 0019be24 to 0019be37 has its CatchHandler @ 0019c018 */
          plVar6 = (long *)facebook::jni::Environment::current();
          (**(code **)(*plVar6 + 0xb8))(plVar6,lVar5);
        }
        local_98 = 0;
        if (lVar3 != 0) {
                    /* try { // try from 0019be40 to 0019be53 has its CatchHandler @ 0019c014 */
          plVar6 = (long *)facebook::jni::Environment::current();
          (**(code **)(*plVar6 + 0xb8))(plVar6,lVar3);
        }
        lVar5 = local_88;
        if (local_88 != 0) {
                    /* try { // try from 0019be5c to 0019be6f has its CatchHandler @ 0019c010 */
          plVar6 = (long *)facebook::jni::Environment::current();
          (**(code **)(*plVar6 + 0xb8))(plVar6,lVar5);
        }
        puVar8 = (undefined8 *)*puVar8;
      } while (puVar8 != (undefined8 *)0x0);
      *param_1 = local_80;
      puVar8 = local_68;
      while (puVar8 != (undefined8 *)0x0) {
        pvVar9 = (void *)*puVar8;
        if (*(uint *)(puVar8 + 10) != 0xffffffff) {
                    /* try { // try from 0019beb8 to 0019bec3 has its CatchHandler @ 0019bfac */
          (*(code *)(&PTR_FUN_001b9458)[*(uint *)(puVar8 + 10)])(&local_50,puVar8 + 5);
        }
        *(undefined4 *)(puVar8 + 10) = 0xffffffff;
        if ((*(byte *)(puVar8 + 2) & 1) != 0) {
          operator_delete((void *)puVar8[4]);
        }
        operator_delete(puVar8);
        puVar8 = (undefined8 *)pvVar9;
      }
    }
    pvVar9 = local_78[0];
    local_78[0] = (void *)0x0;
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
    }
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return;
    }
  }
  else if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 0019bf7c to 0019bf7f has its CatchHandler @ 0019bfa4 */
    uVar7 = FUN_0019c164();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0019bf40 with catch @ 0019bf80
                        */
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
               local_78);
    __cxa_guard_abort(PTR_hybridDataField_001ba368);
    __cxa_begin_catch(uVar7);
    std::current_exception();
    std::exception_ptr::~exception_ptr(aeStack_b0);
    if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 0019c00c to 0019c00f has its CatchHandler @ 0019c01c */
      __cxa_rethrow();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0019be5c with catch @ 0019c010
                        */
      FUN_0015c8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019c044  FUN_0019c044 =====

void FUN_0019c044(undefined8 param_1)

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
    if (((*PTR_cls_001ba378 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_cls_001ba378), iVar2 != 0)) {
                    /* try { // try from 0019c100 to 0019c113 has its CatchHandler @ 0019c138 */
      facebook::jni::findClassStatic(PTR_kBaseName_001ba380);
      __cxa_guard_release(PTR_cls_001ba378);
    }
    uVar6 = *(undefined8 *)PTR_cls_001ba370;
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar4 = (**(code **)(*plVar5 + 0x2f0))(plVar5,uVar6,"mHybridData",PTR_kDescriptor_001ba2f0);
    facebook::jni::throwCppExceptionIf(lVar4 == 0);
    if (lVar4 == 0) {
      if (*(long *)(lVar1 + 0x28) == local_28) {
        uVar6 = facebook::jni::throwNPE();
                    /* catch() { ... } // from try @ 0019c100 with catch @ 0019c138 */
        lVar4 = __cxa_guard_abort(PTR_cls_001ba378);
        if (*(long *)(lVar1 + 0x28) == local_28) {
          lVar4 = FUN_00157e74(uVar6);
        }
      }
      goto LAB_0019c160;
    }
  }
  else {
    lVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
LAB_0019c160:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


// ===== 0019c164  FUN_0019c164 =====

void FUN_0019c164(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    plVar2 = (long *)__cxa_allocate_exception(8);
    *plVar2 = (long)(PTR_vtable_001ba5a8 + 0x10);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar2,PTR_typeinfo_001ba5a0,PTR__exception_001b9f98);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019c1bc  FUN_0019c1bc =====

void FUN_0019c1bc(long *param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  _jclass *p_Var4;
  long lVar5;
  long lVar6;
  
  lVar1 = tpidr_el0;
  lVar6 = *(long *)(lVar1 + 0x28);
  if (((DAT_001bff38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_001bff38), iVar3 != 0)) {
                    /* try { // try from 0019c26c to 0019c26f has its CatchHandler @ 0019c2b8 */
    FUN_0019d37c();
    __cxa_guard_release(&DAT_001bff38);
  }
  if (((DAT_001bff48 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_001bff48), iVar3 != 0)) {
                    /* try { // try from 0019c290 to 0019c293 has its CatchHandler @ 0019c2a8 */
    DAT_001bff40 = FUN_0019d43c();
    __cxa_guard_release(&DAT_001bff48);
  }
  uVar2 = DAT_001bff40;
  p_Var4 = (_jclass *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::NewObject(p_Var4,DAT_001bff30,uVar2,param_2 & 0xffffffff);
  if (*(long *)(lVar1 + 0x28) == lVar6) {
    facebook::jni::throwCppExceptionIf(lVar5 == 0);
    *param_1 = lVar5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019c2e4  FUN_0019c2e4 =====

void FUN_0019c2e4(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  _jmethodID *p_Var4;
  byte bVar5;
  int iVar6;
  long *plVar7;
  _jclass *p_Var8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long *local_a8;
  long *local_a0;
  long local_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (((*PTR_isHybrid_001ba468 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_isHybrid_001ba468), iVar6 != 0)) {
                    /* try { // try from 0019c694 to 0019c6ab has its CatchHandler @ 0019c830 */
    FUN_0019cd80(&local_80);
    local_78 = local_80;
    bVar5 = facebook::jni::detail::HybridClassBase::isHybridClassBase(&local_78);
    *PTR_isHybrid_001ba460 = bVar5 & 1;
    __cxa_guard_release(PTR_isHybrid_001ba468);
  }
  plVar7 = (long *)operator_new(0x38);
  uVar1 = *(uint *)(param_2 + 0x28);
  *plVar7 = (long)&PTR_FUN_001b9418;
  *(undefined1 *)(plVar7 + 1) = 0;
  *(undefined4 *)(plVar7 + 6) = 0xffffffff;
  if (uVar1 != 0xffffffff) {
                    /* try { // try from 0019c364 to 0019c373 has its CatchHandler @ 0019c8ac */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<margelo_nitro_NullType,bool,double,long,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<margelo_nitro_AnyValue,std___ndk1_allocator<margelo_nitro_AnyValue>>,std___ndk1_unordered_map<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,margelo_nitro_AnyValue,std___ndk1_hash<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_equal_to<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_allocator<std___ndk1_pair<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___copy_constructor<std___ndk1___variant_detail___traits<marge___td___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>const_>_001b9490
              )[uVar1])(&local_60,plVar7 + 1,param_2);
    *(undefined4 *)(plVar7 + 6) = *(undefined4 *)(param_2 + 0x28);
  }
  puVar3 = PTR_isHybrid_001ba460;
  *param_1 = 0;
  if (*puVar3 == '\0') {
    local_a0 = (long *)0x0;
                    /* try { // try from 0019c4a8 to 0019c4b3 has its CatchHandler @ 0019c858 */
    local_a8 = plVar7;
    FUN_0019ceb0(&local_90,&local_a8);
    plVar7 = local_a8;
    local_a8 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      if (*(uint *)(plVar7 + 6) != 0xffffffff) {
                    /* try { // try from 0019c4d8 to 0019c4e3 has its CatchHandler @ 0019c844 */
        (*(code *)(&PTR_FUN_001b9458)[*(uint *)(plVar7 + 6)])(&local_60,plVar7 + 1);
      }
      operator_delete(plVar7);
    }
    lVar9 = local_90;
                    /* try { // try from 0019c4f0 to 0019c50b has its CatchHandler @ 0019c8dc */
    plVar7 = (long *)facebook::jni::Environment::current();
    lVar9 = (**(code **)(*plVar7 + 200))(plVar7,lVar9);
    facebook::jni::throwPendingJniExceptionAsCppException();
    local_98 = lVar9;
                    /* try { // try from 0019c510 to 0019c52b has its CatchHandler @ 0019c8d4 */
    plVar7 = (long *)facebook::jni::Environment::current();
    lVar9 = (**(code **)(*plVar7 + 200))(plVar7,lVar9);
    facebook::jni::throwPendingJniExceptionAsCppException();
    local_70 = lVar9;
    if (((DAT_001bff18 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_001bff18), iVar6 != 0)) {
      FUN_0019d040(&DAT_001bff10);
      __cxa_guard_release(&DAT_001bff18);
    }
    if (((DAT_001bff28 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_001bff28), iVar6 != 0)) {
                    /* try { // try from 0019c79c to 0019c79f has its CatchHandler @ 0019c7b4 */
      DAT_001bff20 = FUN_0019d100();
      __cxa_guard_release(&DAT_001bff28);
    }
    lVar9 = local_70;
    uVar13 = DAT_001bff20;
                    /* try { // try from 0019c55c to 0019c577 has its CatchHandler @ 0019c8cc */
    plVar7 = (long *)facebook::jni::Environment::current();
    lVar11 = (**(code **)(*plVar7 + 200))(plVar7,lVar9);
    facebook::jni::throwPendingJniExceptionAsCppException();
    local_68 = lVar11;
                    /* try { // try from 0019c57c to 0019c5a7 has its CatchHandler @ 0019c8e8 */
    p_Var8 = (_jclass *)facebook::jni::Environment::current();
    p_Var4 = DAT_001bff10;
    plVar7 = (long *)facebook::jni::Environment::current();
    plVar7 = (long *)(**(code **)(*plVar7 + 200))(plVar7,lVar11);
    facebook::jni::throwPendingJniExceptionAsCppException();
    local_60 = plVar7;
                    /* try { // try from 0019c5ac to 0019c5bf has its CatchHandler @ 0019c848 */
    lVar12 = _JNIEnv::NewObject(p_Var8,p_Var4,uVar13,plVar7);
    if (plVar7 != (long *)0x0) {
                    /* try { // try from 0019c5c8 to 0019c5db has its CatchHandler @ 0019c878 */
      plVar10 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar10 + 0xb8))(plVar10,plVar7);
    }
                    /* try { // try from 0019c5e4 to 0019c5e7 has its CatchHandler @ 0019c8e8 */
    facebook::jni::throwCppExceptionIf(lVar12 == 0);
    if (lVar11 != 0) {
                    /* try { // try from 0019c5ec to 0019c5ff has its CatchHandler @ 0019c874 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,lVar11);
    }
    if (lVar9 != 0) {
                    /* try { // try from 0019c604 to 0019c617 has its CatchHandler @ 0019c870 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,lVar9);
    }
    lVar9 = local_98;
    *param_1 = lVar12;
    if (local_98 != 0) {
                    /* try { // try from 0019c624 to 0019c637 has its CatchHandler @ 0019c86c */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,lVar9);
    }
    local_98 = 0;
    if (local_90 != 0) {
                    /* try { // try from 0019c644 to 0019c657 has its CatchHandler @ 0019c868 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,local_90);
    }
  }
  else {
    local_a0 = plVar7;
    if (((DAT_001bfef8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_001bfef8), iVar6 != 0)) {
      FUN_0019d040(&DAT_001bfef0);
      __cxa_guard_release(&DAT_001bfef8);
    }
    if (((DAT_001bff08 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_001bff08), iVar6 != 0)) {
                    /* try { // try from 0019c708 to 0019c70b has its CatchHandler @ 0019c808 */
      DAT_001bff00 = FUN_0019d218();
      __cxa_guard_release(&DAT_001bff08);
    }
    uVar13 = DAT_001bff00;
                    /* try { // try from 0019c3bc to 0019c3df has its CatchHandler @ 0019c914 */
    p_Var8 = (_jclass *)facebook::jni::Environment::current();
    lVar9 = _JNIEnv::NewObject(p_Var8,DAT_001bfef0,uVar13);
    facebook::jni::throwCppExceptionIf(lVar9 == 0);
    *param_1 = lVar9;
                    /* try { // try from 0019c3e4 to 0019c3ff has its CatchHandler @ 0019c910 */
    plVar10 = (long *)facebook::jni::Environment::current();
    lVar9 = (**(code **)(*plVar10 + 200))(plVar10,lVar9);
    facebook::jni::throwPendingJniExceptionAsCppException();
    puVar3 = PTR_holderField_001ba478;
    local_a0 = (long *)0x0;
    local_88 = lVar9;
    if (((*PTR_holderField_001ba480 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_holderField_001ba480), iVar6 != 0)) {
      facebook::jni::JObject::getClass();
                    /* try { // try from 0019c73c to 0019c743 has its CatchHandler @ 0019c7dc */
      uVar13 = facebook::jni::detail::getDestructorField((basic_strong_ref *)&local_60);
      *(undefined8 *)puVar3 = uVar13;
      facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
      ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
                       *)&local_60);
      __cxa_guard_release(PTR_holderField_001ba480);
    }
    lVar9 = local_88;
    uVar13 = *(undefined8 *)puVar3;
                    /* try { // try from 0019c428 to 0019c43f has its CatchHandler @ 0019c8e4 */
    plVar10 = (long *)facebook::jni::Environment::current();
    local_68 = (**(code **)(*plVar10 + 0x2f8))(plVar10,lVar9,uVar13);
                    /* try { // try from 0019c444 to 0019c44f has its CatchHandler @ 0019c87c */
    local_60 = plVar7;
    facebook::jni::detail::HybridDestructor::setNativePointer(&local_68,&local_60);
    plVar7 = local_60;
    local_60 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    lVar9 = local_68;
    if (local_68 != 0) {
                    /* try { // try from 0019c470 to 0019c483 has its CatchHandler @ 0019c8c8 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,lVar9);
    }
    lVar9 = local_88;
    if (local_88 != 0) {
                    /* try { // try from 0019c48c to 0019c49f has its CatchHandler @ 0019c8c4 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,lVar9);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019c944  FUN_0019c944 =====

void FUN_0019c944(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  _jobject *p_Var4;
  undefined8 uVar5;
  undefined8 uVar6;
  _jmethodID *p_Var7;
  undefined1 auStack_50 [8];
  long local_48;
  
  puVar2 = PTR_putMethod_001ba4b0;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((*PTR_putMethod_001ba4b8 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_putMethod_001ba4b8), iVar3 != 0)) {
                    /* try { // try from 0019c9f8 to 0019ca0f has its CatchHandler @ 0019ca24 */
    FUN_0019cba0(auStack_50);
    uVar5 = FUN_0019cc60(auStack_50,&DAT_00137a8d);
    *(undefined8 *)puVar2 = uVar5;
    __cxa_guard_release(PTR_putMethod_001ba4b8);
  }
  p_Var7 = (_jmethodID *)*param_2;
  uVar6 = *param_3;
  uVar5 = *param_4;
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  uVar5 = _JNIEnv::CallObjectMethod(p_Var4,p_Var7,*(undefined8 *)puVar2,uVar6,uVar5);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    facebook::jni::throwPendingJniExceptionAsCppException();
    *param_1 = uVar5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019ca50  FUN_0019ca50 =====

void FUN_0019ca50(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 0019ca7c to 0019ca8f has its CatchHandler @ 0019cabc */
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


// ===== 0019cac0  facebook::jni::base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

/* facebook::jni::base_owned_ref<facebook::jni::JString,
   facebook::jni::LocalReferenceAllocator>::~base_owned_ref() */

void __thiscall
facebook::jni::base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>::
~base_owned_ref(base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator> *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)this;
  if (lVar4 != 0) {
                    /* try { // try from 0019caec to 0019caff has its CatchHandler @ 0019cb2c */
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


// ===== 0019cb30  FUN_0019cb30 =====

void FUN_0019cb30(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 0019cb5c to 0019cb6f has its CatchHandler @ 0019cb9c */
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


// ===== 0019cba0  FUN_0019cba0 =====

void FUN_0019cba0(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_001ba3a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_001ba3a0), iVar2 != 0))
  {
                    /* try { // try from 0019cc10 to 0019cc23 has its CatchHandler @ 0019cc34 */
    facebook::jni::findClassStatic(PTR_kBaseName_001ba3a8);
    __cxa_guard_release(PTR_cls_001ba3a0);
  }
  *param_1 = *(undefined8 *)PTR_cls_001ba398;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019cc60  FUN_0019cc60 =====

long FUN_0019cc60(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,param_2,PTR_kDescriptor_001ba4c0);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019cce4  _JNIEnv::CallObjectMethod =====

/* _JNIEnv::CallObjectMethod(_jobject*, _jmethodID*, ...) */

void _JNIEnv::CallObjectMethod(_jobject *param_1,_jmethodID *param_2,...)

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
  (**(code **)(*(long *)param_1 + 0x118))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019cd80  FUN_0019cd80 =====

void FUN_0019cd80(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_001ba378 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_001ba378), iVar2 != 0))
  {
                    /* try { // try from 0019cdf0 to 0019ce03 has its CatchHandler @ 0019ce14 */
    facebook::jni::findClassStatic(PTR_kBaseName_001ba380);
    __cxa_guard_release(PTR_cls_001ba378);
  }
  *param_1 = *(undefined8 *)PTR_cls_001ba370;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019ce40  FUN_0019ce40 =====

void FUN_0019ce40(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 0019ce6c to 0019ce7f has its CatchHandler @ 0019ceac */
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


// ===== 0019ceb0  FUN_0019ceb0 =====

void FUN_0019ceb0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long *local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::HybridData::create();
  uVar4 = *param_1;
                    /* try { // try from 0019cee4 to 0019ceff has its CatchHandler @ 0019cf9c */
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 200))(plVar2,uVar4);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_48 = (long *)*param_2;
  *param_2 = 0;
                    /* try { // try from 0019cf0c to 0019cf17 has its CatchHandler @ 0019cf70 */
  local_40 = lVar3;
  FUN_0019ad1c(&local_40,&local_48);
  plVar2 = local_48;
  local_48 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  lVar3 = local_40;
  if (local_40 != 0) {
                    /* try { // try from 0019cf38 to 0019cf4b has its CatchHandler @ 0019cf98 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019cfc4  FUN_0019cfc4 =====

void FUN_0019cfc4(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  undefined1 uStack_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pvVar2 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar2 != (void *)0x0) {
    if (*(uint *)((long)pvVar2 + 0x30) != 0xffffffff) {
                    /* try { // try from 0019d004 to 0019d00f has its CatchHandler @ 0019d03c */
      (*(code *)(&PTR_FUN_001b9458)[*(uint *)((long)pvVar2 + 0x30)])(&uStack_29,(long)pvVar2 + 8);
    }
    operator_delete(pvVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019d040  FUN_0019d040 =====

void FUN_0019d040(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_001ba378 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_001ba378), iVar2 != 0))
  {
                    /* try { // try from 0019d0b0 to 0019d0c3 has its CatchHandler @ 0019d0d4 */
    facebook::jni::findClassStatic(PTR_kBaseName_001ba380);
    __cxa_guard_release(PTR_cls_001ba378);
  }
  *param_1 = *(undefined8 *)PTR_cls_001ba370;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019d100  FUN_0019d100 =====

long FUN_0019d100(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,DAT_001bff10,"<init>",PTR_kConstructorDescriptor_001ba488);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019d17c  _JNIEnv::NewObject =====

/* _JNIEnv::NewObject(_jclass*, _jmethodID*, ...) */

void _JNIEnv::NewObject(_jclass *param_1,_jmethodID *param_2,...)

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
  (**(code **)(*(long *)param_1 + 0xe8))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019d218  FUN_0019d218 =====

long FUN_0019d218(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,DAT_001bfef0,"<init>",PTR_kConstructorDescriptor_001ba470);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019d294  FUN_0019d294 =====

void FUN_0019d294(long param_1)

{
  long lVar1;
  undefined1 uStack_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
                    /* try { // try from 0019d2cc to 0019d2d7 has its CatchHandler @ 0019d304 */
    (*(code *)(&PTR_FUN_001b9458)[*(uint *)(param_1 + 0x30)])(&uStack_29,param_1 + 8);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019d308  FUN_0019d308 =====

void FUN_0019d308(void *param_1)

{
  long lVar1;
  undefined1 uStack_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(uint *)((long)param_1 + 0x30) != 0xffffffff) {
                    /* try { // try from 0019d340 to 0019d34b has its CatchHandler @ 0019d378 */
    (*(code *)(&PTR_FUN_001b9458)[*(uint *)((long)param_1 + 0x30)])(&uStack_29,(long)param_1 + 8);
  }
  operator_delete(param_1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019d37c  FUN_0019d37c =====

void FUN_0019d37c(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_001ba498 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_001ba498), iVar2 != 0))
  {
                    /* try { // try from 0019d3ec to 0019d3ff has its CatchHandler @ 0019d410 */
    facebook::jni::findClassStatic(PTR_kBaseName_001ba4a0);
    __cxa_guard_release(PTR_cls_001ba498);
  }
  DAT_001bff30 = *(undefined8 *)PTR_cls_001ba490;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019d43c  FUN_0019d43c =====

long FUN_0019d43c(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,DAT_001bff30,"<init>",PTR_kConstructorDescriptor_001ba4a8);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019d4b8  facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asAnyArray,margelo::nitro::JAnyValue,facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>>::dispatch =====

/* facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   facebook::jni::LocalReferenceAllocator> (margelo::nitro::JAnyValue::*)(),
   &margelo::nitro::JAnyValue::asAnyArray, margelo::nitro::JAnyValue,
   facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   facebook::jni::LocalReferenceAllocator>>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>)
    */

void __thiscall
facebook::jni::detail::
MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asAnyArray,margelo::nitro::JAnyValue,facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>>
::dispatch(undefined8 *param_1,
          MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asAnyArray,margelo::nitro::JAnyValue,facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>>
          *this)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  void *pvVar10;
  exception_ptr aeStack_90 [8];
  long local_88;
  undefined8 local_80;
  void *local_78;
  void *local_70;
  undefined8 uStack_68;
  long local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((*PTR_hybridDataField_001ba368 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_hybridDataField_001ba368), iVar5 != 0)) {
    JObject::getClass();
                    /* try { // try from 0019d6a0 to 0019d6a3 has its CatchHandler @ 0019d6e0 */
    uVar8 = FUN_0019c044(local_78);
    *(undefined8 *)PTR_hybridDataField_001ba360 = uVar8;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
               &local_78);
    __cxa_guard_release(PTR_hybridDataField_001ba368);
  }
                    /* try { // try from 0019d4f4 to 0019d533 has its CatchHandler @ 0019d704 */
  lVar6 = getHybridDataFromField((JObject *)this,(JField *)PTR_hybridDataField_001ba360);
  if (*(int *)(lVar6 + 0x30) == 5) {
    local_70 = (void *)0x0;
    uStack_68 = 0;
    local_78 = (void *)0x0;
    FUN_0015e810(&local_78,*(long *)(lVar6 + 8),*(long *)(lVar6 + 0x10),
                 (*(long *)(lVar6 + 0x10) - *(long *)(lVar6 + 8) >> 4) * -0x5555555555555555);
                    /* try { // try from 0019d544 to 0019d54b has its CatchHandler @ 0019d6fc */
    FUN_0019d78c(&local_80,((long)local_70 - (long)local_78 >> 4) * -0x5555555555555555);
    uVar8 = local_80;
    pvVar10 = local_70;
    if (local_70 != local_78) {
      lVar6 = 0;
      uVar9 = 0;
      do {
                    /* try { // try from 0019d58c to 0019d597 has its CatchHandler @ 0019d710 */
        FUN_0019c2e4(&local_60,(long)local_78 + lVar6);
        lVar4 = local_60;
        local_88 = local_60;
                    /* try { // try from 0019d5a0 to 0019d5bf has its CatchHandler @ 0019d71c */
        plVar7 = (long *)facebook::jni::Environment::current();
        uVar8 = local_80;
        (**(code **)(*plVar7 + 0x570))(plVar7,local_80,uVar9 & 0xffffffff,lVar4);
        if (lVar4 != 0) {
                    /* try { // try from 0019d5c4 to 0019d5d7 has its CatchHandler @ 0019d718 */
          plVar7 = (long *)facebook::jni::Environment::current();
          (**(code **)(*plVar7 + 0xb8))(plVar7,lVar4);
        }
        uVar9 = uVar9 + 1;
        lVar6 = lVar6 + 0x30;
        pvVar10 = local_78;
      } while (uVar9 < (ulong)(((long)local_70 - (long)local_78 >> 4) * -0x5555555555555555));
    }
    *param_1 = uVar8;
    pvVar2 = local_70;
    pvVar3 = local_70;
    if (pvVar10 != (void *)0x0) {
      while (pvVar2 != pvVar10) {
        if (*(uint *)((long)pvVar2 + -8) != 0xffffffff) {
                    /* try { // try from 0019d628 to 0019d633 has its CatchHandler @ 0019d70c */
          (*(code *)(&PTR_FUN_001b9458)[*(uint *)((long)pvVar2 + -8)])
                    (&local_60,(void *)((long)pvVar2 + -0x30));
        }
        *(undefined4 *)((long)pvVar2 + -8) = 0xffffffff;
        pvVar2 = (void *)((long)pvVar2 + -0x30);
        pvVar3 = local_78;
      }
      local_70 = pvVar10;
      operator_delete(pvVar3);
    }
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 0019d6dc to 0019d6df has its CatchHandler @ 0019d704 */
    uVar8 = FUN_0019c164();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0019d6a0 with catch @ 0019d6e0
                        */
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
               &local_78);
    __cxa_guard_abort(PTR_hybridDataField_001ba368);
    __cxa_begin_catch(uVar8);
    std::current_exception();
    std::exception_ptr::~exception_ptr(aeStack_90);
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 0019d760 to 0019d763 has its CatchHandler @ 0019d764 */
      uVar8 = __cxa_rethrow();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0019d760 with catch @ 0019d764
                        */
                    /* try { // try from 0019d768 to 0019d76b has its CatchHandler @ 0019d788 */
      __cxa_end_catch();
      if (*(long *)(lVar1 + 0x28) == local_58) {
        FUN_00157e74(uVar8);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019d78c  FUN_0019d78c =====

void FUN_0019d78c(long *param_1,undefined4 param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  if (((*PTR_elementClass_001ba458 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_elementClass_001ba458), iVar2 != 0)) {
                    /* try { // try from 0019d830 to 0019d843 has its CatchHandler @ 0019d854 */
    facebook::jni::findClassStatic(PTR_kBaseName_001ba380);
    __cxa_guard_release(PTR_elementClass_001ba458);
  }
  plVar3 = (long *)facebook::jni::Environment::current();
  lVar4 = (**(code **)(*plVar3 + 0x560))(plVar3,param_2,*(undefined8 *)PTR_elementClass_001ba450,0);
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    facebook::jni::throwCppExceptionIf(lVar4 == 0);
    *param_1 = lVar4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019d880  FUN_0019d880 =====

void FUN_0019d880(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 0019d8ac to 0019d8bf has its CatchHandler @ 0019d8ec */
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


// ===== 0019d8f0  FUN_0019d8f0 =====

void FUN_0019d8f0(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  undefined1 uStack_59;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pvVar3 = (void *)*param_1;
  if (pvVar3 != (void *)0x0) {
    pvVar4 = (void *)param_1[1];
    pvVar2 = pvVar3;
    if (pvVar4 != pvVar3) {
      do {
        pvVar2 = (void *)((long)pvVar4 + -0x30);
        if (*(uint *)((long)pvVar4 + -8) != 0xffffffff) {
                    /* try { // try from 0019d968 to 0019d973 has its CatchHandler @ 0019d9b4 */
          (*(code *)(&PTR_FUN_001b9458)[*(uint *)((long)pvVar4 + -8)])(&uStack_59,pvVar2);
        }
        *(undefined4 *)((long)pvVar4 + -8) = 0xffffffff;
        pvVar4 = pvVar2;
      } while (pvVar2 != pvVar3);
      pvVar2 = (void *)*param_1;
    }
    param_1[1] = pvVar3;
    operator_delete(pvVar2);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0019d9b8  facebook::jni::detail::MethodWrapper<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asString,margelo::nitro::JAnyValue,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>::dispatch =====

/* facebook::jni::detail::MethodWrapper<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > (margelo::nitro::JAnyValue::*)(),
   &margelo::nitro::JAnyValue::asString, margelo::nitro::JAnyValue, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>)
    */

void __thiscall
facebook::jni::detail::
MethodWrapper<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asString,margelo::nitro::JAnyValue,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
::dispatch(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_1,
          MethodWrapper<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asString,margelo::nitro::JAnyValue,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
          *this)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  exception_ptr aeStack_38 [8];
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*PTR_hybridDataField_001ba368 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba368);
    if (iVar2 != 0) {
      JObject::getClass();
                    /* try { // try from 0019da74 to 0019da77 has its CatchHandler @ 0019dab4 */
      uVar4 = FUN_0019c044(local_30);
      *(undefined8 *)PTR_hybridDataField_001ba360 = uVar4;
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                 &local_30);
      __cxa_guard_release(PTR_hybridDataField_001ba368);
    }
  }
                    /* try { // try from 0019d9e8 to 0019da27 has its CatchHandler @ 0019dad0 */
  lVar3 = getHybridDataFromField((JObject *)this,(JField *)PTR_hybridDataField_001ba360);
  if (*(int *)(lVar3 + 0x30) == 4) {
    if ((*(byte *)(lVar3 + 8) & 1) == 0) {
      uVar5 = *(undefined8 *)(lVar3 + 0x10);
      uVar4 = *(undefined8 *)(lVar3 + 8);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar3 + 0x18);
      *(undefined8 *)(param_1 + 8) = uVar5;
      *(undefined8 *)param_1 = uVar4;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external(param_1,*(char **)(lVar3 + 0x18),*(ulong *)(lVar3 + 0x10));
    }
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 0019dab0 to 0019dab3 has its CatchHandler @ 0019dad0 */
    uVar4 = FUN_0019c164();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0019da74 with catch @ 0019dab4
                        */
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
               &local_30);
    __cxa_guard_abort(PTR_hybridDataField_001ba368);
    __cxa_begin_catch(uVar4);
    std::current_exception();
    std::exception_ptr::~exception_ptr(aeStack_38);
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 0019dafc to 0019daff has its CatchHandler @ 0019db00 */
      uVar4 = __cxa_rethrow();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0019dafc with catch @ 0019db00
                        */
                    /* try { // try from 0019db04 to 0019db07 has its CatchHandler @ 0019db24 */
      __cxa_end_catch();
      if (*(long *)(lVar1 + 0x28) == local_28) {
        FUN_00157e74(uVar4);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019db28  facebook::jni::detail::MethodWrapper<long(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asInt64,margelo::nitro::JAnyValue,long>::dispatch =====

/* facebook::jni::detail::MethodWrapper<long (margelo::nitro::JAnyValue::*)(),
   &margelo::nitro::JAnyValue::asInt64, margelo::nitro::JAnyValue,
   long>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>)
    */

void facebook::jni::detail::
     MethodWrapper<long(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asInt64,margelo::nitro::JAnyValue,long>
     ::dispatch(JObject *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  exception_ptr aeStack_38 [8];
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((*PTR_hybridDataField_001ba368 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba368), iVar2 != 0)) {
    JObject::getClass();
                    /* try { // try from 0019dbbc to 0019dbbf has its CatchHandler @ 0019dbfc */
    uVar4 = FUN_0019c044(local_30);
    *(undefined8 *)PTR_hybridDataField_001ba360 = uVar4;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
               &local_30);
    __cxa_guard_release(PTR_hybridDataField_001ba368);
  }
                    /* try { // try from 0019db54 to 0019db5f has its CatchHandler @ 0019dc18 */
  lVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba360);
  if (*(int *)(lVar3 + 0x30) == 3) {
    lVar3 = *(long *)(lVar3 + 8);
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 0019dbf8 to 0019dbfb has its CatchHandler @ 0019dc18 */
    uVar4 = FUN_0019c164();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0019dbbc with catch @ 0019dbfc
                        */
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
               &local_30);
    __cxa_guard_abort(PTR_hybridDataField_001ba368);
    __cxa_begin_catch(uVar4);
    std::current_exception();
    lVar3 = std::exception_ptr::~exception_ptr(aeStack_38);
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 0019dc44 to 0019dc47 has its CatchHandler @ 0019dc48 */
      uVar4 = __cxa_rethrow();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0019dc44 with catch @ 0019dc48
                        */
                    /* try { // try from 0019dc4c to 0019dc4f has its CatchHandler @ 0019dc6c */
      lVar3 = __cxa_end_catch();
      if (*(long *)(lVar1 + 0x28) == local_28) {
        lVar3 = FUN_00157e74(uVar4);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


// ===== 0019dc70  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asBoolean,margelo::nitro::JAnyValue,bool>::dispatch =====

/* facebook::jni::detail::MethodWrapper<bool (margelo::nitro::JAnyValue::*)(),
   &margelo::nitro::JAnyValue::asBoolean, margelo::nitro::JAnyValue,
   bool>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>)
    */

void facebook::jni::detail::
     MethodWrapper<bool(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asBoolean,margelo::nitro::JAnyValue,bool>
     ::dispatch(JObject *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  exception_ptr aeStack_38 [8];
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((*PTR_hybridDataField_001ba368 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba368), iVar2 != 0)) {
    JObject::getClass();
                    /* try { // try from 0019dd0c to 0019dd0f has its CatchHandler @ 0019dd4c */
    uVar4 = FUN_0019c044(local_30);
    *(undefined8 *)PTR_hybridDataField_001ba360 = uVar4;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
               &local_30);
    __cxa_guard_release(PTR_hybridDataField_001ba368);
  }
                    /* try { // try from 0019dc9c to 0019dca7 has its CatchHandler @ 0019dd68 */
  uVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba360);
  if (*(int *)(uVar3 + 0x30) == 1) {
    uVar3 = (ulong)(*(char *)(uVar3 + 8) != '\0');
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 0019dd48 to 0019dd4b has its CatchHandler @ 0019dd68 */
    uVar4 = FUN_0019c164();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0019dd0c with catch @ 0019dd4c
                        */
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
               &local_30);
    __cxa_guard_abort(PTR_hybridDataField_001ba368);
    __cxa_begin_catch(uVar4);
    std::current_exception();
    uVar3 = std::exception_ptr::~exception_ptr(aeStack_38);
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 0019dd94 to 0019dd97 has its CatchHandler @ 0019dd98 */
      uVar4 = __cxa_rethrow();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0019dd94 with catch @ 0019dd98
                        */
                    /* try { // try from 0019dd9c to 0019dd9f has its CatchHandler @ 0019ddbc */
      uVar3 = __cxa_end_catch();
      if (*(long *)(lVar1 + 0x28) == local_28) {
        uVar3 = FUN_00157e74(uVar4);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 0019ddc0  FUN_0019ddc0 =====

uint FUN_0019ddc0(_JNIEnv *param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  uint uVar2;
  JniEnvCacher aJStack_58 [24];
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_58,param_1);
                    /* try { // try from 0019ddf8 to 0019ddff has its CatchHandler @ 0019de34 */
  local_40 = param_2;
  uVar2 = (*param_3)(&local_40);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019de80  facebook::jni::detail::MethodWrapper<double(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asDouble,margelo::nitro::JAnyValue,double>::dispatch =====

/* facebook::jni::detail::MethodWrapper<double (margelo::nitro::JAnyValue::*)(),
   &margelo::nitro::JAnyValue::asDouble, margelo::nitro::JAnyValue,
   double>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>)
    */

void facebook::jni::detail::
     MethodWrapper<double(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::asDouble,margelo::nitro::JAnyValue,double>
     ::dispatch(JObject *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 extraout_d0;
  undefined8 uVar5;
  exception_ptr aeStack_38 [8];
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((*PTR_hybridDataField_001ba368 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba368), iVar2 != 0)) {
    JObject::getClass();
                    /* try { // try from 0019df14 to 0019df17 has its CatchHandler @ 0019df54 */
    uVar5 = FUN_0019c044(local_30);
    *(undefined8 *)PTR_hybridDataField_001ba360 = uVar5;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
               &local_30);
    __cxa_guard_release(PTR_hybridDataField_001ba368);
  }
                    /* try { // try from 0019deac to 0019deb7 has its CatchHandler @ 0019df70 */
  lVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba360);
  if (*(int *)(lVar3 + 0x30) == 2) {
    uVar5 = *(undefined8 *)(lVar3 + 8);
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
  else {
    uVar5 = extraout_d0;
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 0019df50 to 0019df53 has its CatchHandler @ 0019df70 */
      uVar5 = FUN_0019c164();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0019df14 with catch @ 0019df54
                        */
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                 &local_30);
      __cxa_guard_abort(PTR_hybridDataField_001ba368);
      __cxa_begin_catch(uVar5);
      std::current_exception();
      uVar5 = std::exception_ptr::~exception_ptr(aeStack_38);
      if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 0019df9c to 0019df9f has its CatchHandler @ 0019dfa0 */
        uVar4 = __cxa_rethrow();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0019df9c with catch @ 0019dfa0
                        */
                    /* try { // try from 0019dfa4 to 0019dfa7 has its CatchHandler @ 0019dfc4 */
        uVar5 = __cxa_end_catch();
        if (*(long *)(lVar1 + 0x28) == local_28) {
          uVar5 = FUN_00157e74(uVar4);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 0019dfc8  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::isAnyObject,margelo::nitro::JAnyValue,bool>::dispatch =====

/* facebook::jni::detail::MethodWrapper<bool (margelo::nitro::JAnyValue::*)(),
   &margelo::nitro::JAnyValue::isAnyObject, margelo::nitro::JAnyValue,
   bool>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>)
    */

void facebook::jni::detail::
     MethodWrapper<bool(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::isAnyObject,margelo::nitro::JAnyValue,bool>
     ::dispatch(JObject *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((*PTR_hybridDataField_001ba368 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba368), iVar2 != 0)) {
    JObject::getClass();
                    /* try { // try from 0019e058 to 0019e05b has its CatchHandler @ 0019e084 */
    uVar4 = FUN_0019c044(local_30);
    *(undefined8 *)PTR_hybridDataField_001ba360 = uVar4;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
               &local_30);
    __cxa_guard_release(PTR_hybridDataField_001ba368);
  }
                    /* try { // try from 0019dff4 to 0019dfff has its CatchHandler @ 0019e0a0 */
  lVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba360);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(int *)(lVar3 + 0x30) == 6);
}


// ===== 0019e0f8  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::isAnyArray,margelo::nitro::JAnyValue,bool>::dispatch =====

/* facebook::jni::detail::MethodWrapper<bool (margelo::nitro::JAnyValue::*)(),
   &margelo::nitro::JAnyValue::isAnyArray, margelo::nitro::JAnyValue,
   bool>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>)
    */

void facebook::jni::detail::
     MethodWrapper<bool(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::isAnyArray,margelo::nitro::JAnyValue,bool>
     ::dispatch(JObject *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((*PTR_hybridDataField_001ba368 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba368), iVar2 != 0)) {
    JObject::getClass();
                    /* try { // try from 0019e188 to 0019e18b has its CatchHandler @ 0019e1b4 */
    uVar4 = FUN_0019c044(local_30);
    *(undefined8 *)PTR_hybridDataField_001ba360 = uVar4;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
               &local_30);
    __cxa_guard_release(PTR_hybridDataField_001ba368);
  }
                    /* try { // try from 0019e124 to 0019e12f has its CatchHandler @ 0019e1d0 */
  lVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba360);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(int *)(lVar3 + 0x30) == 5);
}


// ===== 0019e228  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::isString,margelo::nitro::JAnyValue,bool>::dispatch =====

/* facebook::jni::detail::MethodWrapper<bool (margelo::nitro::JAnyValue::*)(),
   &margelo::nitro::JAnyValue::isString, margelo::nitro::JAnyValue,
   bool>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>)
    */

void facebook::jni::detail::
     MethodWrapper<bool(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::isString,margelo::nitro::JAnyValue,bool>
     ::dispatch(JObject *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((*PTR_hybridDataField_001ba368 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba368), iVar2 != 0)) {
    JObject::getClass();
                    /* try { // try from 0019e2b8 to 0019e2bb has its CatchHandler @ 0019e2e4 */
    uVar4 = FUN_0019c044(local_30);
    *(undefined8 *)PTR_hybridDataField_001ba360 = uVar4;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
               &local_30);
    __cxa_guard_release(PTR_hybridDataField_001ba368);
  }
                    /* try { // try from 0019e254 to 0019e25f has its CatchHandler @ 0019e300 */
  lVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba360);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(int *)(lVar3 + 0x30) == 4);
}


// ===== 0019e358  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::isInt64,margelo::nitro::JAnyValue,bool>::dispatch =====

/* facebook::jni::detail::MethodWrapper<bool (margelo::nitro::JAnyValue::*)(),
   &margelo::nitro::JAnyValue::isInt64, margelo::nitro::JAnyValue,
   bool>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>)
    */

void facebook::jni::detail::
     MethodWrapper<bool(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::isInt64,margelo::nitro::JAnyValue,bool>
     ::dispatch(JObject *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((*PTR_hybridDataField_001ba368 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba368), iVar2 != 0)) {
    JObject::getClass();
                    /* try { // try from 0019e3e8 to 0019e3eb has its CatchHandler @ 0019e414 */
    uVar4 = FUN_0019c044(local_30);
    *(undefined8 *)PTR_hybridDataField_001ba360 = uVar4;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
               &local_30);
    __cxa_guard_release(PTR_hybridDataField_001ba368);
  }
                    /* try { // try from 0019e384 to 0019e38f has its CatchHandler @ 0019e430 */
  lVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba360);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(int *)(lVar3 + 0x30) == 3);
}


// ===== 0019e488  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::isBoolean,margelo::nitro::JAnyValue,bool>::dispatch =====

/* facebook::jni::detail::MethodWrapper<bool (margelo::nitro::JAnyValue::*)(),
   &margelo::nitro::JAnyValue::isBoolean, margelo::nitro::JAnyValue,
   bool>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>)
    */

void facebook::jni::detail::
     MethodWrapper<bool(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::isBoolean,margelo::nitro::JAnyValue,bool>
     ::dispatch(JObject *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((*PTR_hybridDataField_001ba368 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba368), iVar2 != 0)) {
    JObject::getClass();
                    /* try { // try from 0019e518 to 0019e51b has its CatchHandler @ 0019e544 */
    uVar4 = FUN_0019c044(local_30);
    *(undefined8 *)PTR_hybridDataField_001ba360 = uVar4;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
               &local_30);
    __cxa_guard_release(PTR_hybridDataField_001ba368);
  }
                    /* try { // try from 0019e4b4 to 0019e4bf has its CatchHandler @ 0019e560 */
  lVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba360);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(int *)(lVar3 + 0x30) == 1);
}


// ===== 0019e5b8  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::isDouble,margelo::nitro::JAnyValue,bool>::dispatch =====

/* facebook::jni::detail::MethodWrapper<bool (margelo::nitro::JAnyValue::*)(),
   &margelo::nitro::JAnyValue::isDouble, margelo::nitro::JAnyValue,
   bool>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>)
    */

void facebook::jni::detail::
     MethodWrapper<bool(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::isDouble,margelo::nitro::JAnyValue,bool>
     ::dispatch(JObject *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((*PTR_hybridDataField_001ba368 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba368), iVar2 != 0)) {
    JObject::getClass();
                    /* try { // try from 0019e648 to 0019e64b has its CatchHandler @ 0019e674 */
    uVar4 = FUN_0019c044(local_30);
    *(undefined8 *)PTR_hybridDataField_001ba360 = uVar4;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
               &local_30);
    __cxa_guard_release(PTR_hybridDataField_001ba368);
  }
                    /* try { // try from 0019e5e4 to 0019e5ef has its CatchHandler @ 0019e690 */
  lVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba360);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(int *)(lVar3 + 0x30) == 2);
}


// ===== 0019e6e8  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::isNull,margelo::nitro::JAnyValue,bool>::dispatch =====

/* facebook::jni::detail::MethodWrapper<bool (margelo::nitro::JAnyValue::*)(),
   &margelo::nitro::JAnyValue::isNull, margelo::nitro::JAnyValue,
   bool>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>)
    */

void facebook::jni::detail::
     MethodWrapper<bool(margelo::nitro::JAnyValue::*)(),&margelo::nitro::JAnyValue::isNull,margelo::nitro::JAnyValue,bool>
     ::dispatch(JObject *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((*PTR_hybridDataField_001ba368 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba368), iVar2 != 0)) {
    JObject::getClass();
                    /* try { // try from 0019e778 to 0019e77b has its CatchHandler @ 0019e7a4 */
    uVar4 = FUN_0019c044(local_30);
    *(undefined8 *)PTR_hybridDataField_001ba360 = uVar4;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
               &local_30);
    __cxa_guard_release(PTR_hybridDataField_001ba368);
  }
                    /* try { // try from 0019e714 to 0019e71f has its CatchHandler @ 0019e7c0 */
  lVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba360);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(int *)(lVar3 + 0x30) == 0);
}


// ===== 0019e818  margelo::nitro::JAnyValue::initHybridAnyObject =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* margelo::nitro::JAnyValue::initHybridAnyObject(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   facebook::jni::alias_ref<facebook::jni::JMap<facebook::jni::JString,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>
   >) */

void __thiscall
margelo::nitro::JAnyValue::initHybridAnyObject(long *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  void *pvVar13;
  byte local_d8 [16];
  void *local_c8;
  void *local_c0;
  ulong uStack_b8;
  void *local_b0;
  long lStack_a8;
  undefined4 local_a0;
  long local_90;
  long lStack_88;
  long local_80;
  long local_78;
  undefined8 *local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uStack_b8 = 0;
  local_c0 = (void *)0x0;
  lStack_a8 = 0;
  local_b0 = (void *)0x0;
  local_a0 = 0x3f800000;
                    /* try { // try from 0019e854 to 0019e867 has its CatchHandler @ 0019eb98 */
  uVar9 = FUN_0019ebfc(param_3);
  FUN_0019ece4(&local_c0,uVar9);
                    /* try { // try from 0019e868 to 0019e877 has its CatchHandler @ 0019eb7c */
  FUN_0019ee1c(&local_70,param_3);
  puVar6 = PTR_hybridDataField_001ba368;
  puVar5 = PTR_hybridDataField_001ba360;
  lStack_88 = _UNK_00138be8;
  local_90 = _DAT_00138be0;
  local_80 = 0;
  local_78 = 0;
  while (lVar10 = local_78, local_68 != lStack_88) {
                    /* try { // try from 0019e8b4 to 0019e8bf has its CatchHandler @ 0019eba4 */
    facebook::jni::JString::toStdString();
    if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
      facebook::jni::JObject::getClass();
                    /* try { // try from 0019e91c to 0019e91f has its CatchHandler @ 0019eb48 */
      uVar9 = FUN_0019c044(local_50);
      *(undefined8 *)puVar5 = uVar9;
      facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
      ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
                       *)&local_50);
      __cxa_guard_release(puVar6);
    }
                    /* try { // try from 0019e8c8 to 0019e8eb has its CatchHandler @ 0019ebb4 */
    lVar10 = facebook::jni::getHybridDataFromField((JObject *)&local_58,(JField *)puVar5);
    FUN_0019f044(&local_c0,local_d8,local_d8,lVar10 + 8);
    if ((local_d8[0] & 1) != 0) {
      operator_delete(local_c8);
    }
                    /* try { // try from 0019e89c to 0019e8a3 has its CatchHandler @ 0019ebac */
    FUN_0019f47c(&local_70);
  }
  if (local_78 != 0) {
                    /* try { // try from 0019e940 to 0019e953 has its CatchHandler @ 0019eb94 */
    plVar11 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar11 + 0xb8))(plVar11,lVar10);
  }
  lVar10 = local_80;
  local_78 = 0;
  if (local_80 != 0) {
                    /* try { // try from 0019e960 to 0019e973 has its CatchHandler @ 0019eb90 */
    plVar11 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar11 + 0xb8))(plVar11,lVar10);
  }
  lVar10 = local_90;
  local_80 = 0;
  if (local_90 != 0) {
                    /* try { // try from 0019e980 to 0019e993 has its CatchHandler @ 0019eb8c */
    plVar11 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar11 + 0xb0))(plVar11,lVar10);
  }
  if (local_58 != 0) {
                    /* try { // try from 0019e99c to 0019e9af has its CatchHandler @ 0019eb88 */
    plVar11 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar11 + 0xb8))(plVar11,local_58);
  }
  local_58 = 0;
  if (local_60 != 0) {
                    /* try { // try from 0019e9bc to 0019e9cf has its CatchHandler @ 0019eb84 */
    plVar11 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar11 + 0xb8))(plVar11,local_60);
  }
  local_60 = 0;
  if (local_70 != (undefined8 *)0x0) {
                    /* try { // try from 0019e9dc to 0019e9ef has its CatchHandler @ 0019eb80 */
    plVar11 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar11 + 0xb0))(plVar11,local_70);
  }
                    /* try { // try from 0019e9f0 to 0019e9f7 has its CatchHandler @ 0019eb78 */
  local_70 = (undefined8 *)operator_new(0x38);
  uVar7 = uStack_b8;
  pvVar3 = local_c0;
  local_c0 = (void *)0x0;
  uStack_b8 = 0;
  *local_70 = &PTR_FUN_001b9418;
  local_70[1] = pvVar3;
  local_70[2] = uVar7;
  local_70[3] = local_b0;
  local_70[4] = lStack_a8;
  *(undefined4 *)(local_70 + 5) = local_a0;
  if (lStack_a8 != 0) {
    uVar12 = *(ulong *)((long)local_b0 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar12 = uVar12 & uVar7 - 1;
    }
    else if (uVar7 <= uVar12) {
      uVar1 = 0;
      if (uVar7 != 0) {
        uVar1 = uVar12 / uVar7;
      }
      uVar12 = uVar12 - uVar1 * uVar7;
    }
    *(undefined8 **)((long)pvVar3 + uVar12 * 8) = local_70 + 3;
    local_b0 = (void *)0x0;
    lStack_a8 = 0;
  }
  *(undefined4 *)(local_70 + 6) = 6;
                    /* try { // try from 0019ea6c to 0019ea77 has its CatchHandler @ 0019eb68 */
  FUN_0019ceb0(&local_90,&local_70);
  puVar4 = local_70;
  local_70 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    if (*(uint *)(puVar4 + 6) != 0xffffffff) {
                    /* try { // try from 0019ea9c to 0019eaa7 has its CatchHandler @ 0019eb64 */
      (*(code *)(&PTR_FUN_001b9458)[*(uint *)(puVar4 + 6)])(local_d8,puVar4 + 1);
    }
    operator_delete(puVar4);
  }
  *param_1 = local_90;
  pvVar3 = local_c0;
  puVar4 = (undefined8 *)local_b0;
  while (puVar4 != (undefined8 *)0x0) {
    pvVar13 = (void *)*puVar4;
    local_c0 = pvVar3;
    if (*(uint *)(puVar4 + 10) != 0xffffffff) {
                    /* try { // try from 0019eaec to 0019eaf7 has its CatchHandler @ 0019eba0 */
      (*(code *)(&PTR_FUN_001b9458)[*(uint *)(puVar4 + 10)])(&local_70,puVar4 + 5);
    }
    *(undefined4 *)(puVar4 + 10) = 0xffffffff;
    if ((*(byte *)(puVar4 + 2) & 1) != 0) {
      operator_delete((void *)puVar4[4]);
    }
    operator_delete(puVar4);
    pvVar3 = local_c0;
    puVar4 = (undefined8 *)pvVar13;
  }
  local_c0 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019ebfc  FUN_0019ebfc =====

long FUN_0019ebfc(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  _jobject *p_Var4;
  undefined8 uVar5;
  _jmethodID *p_Var6;
  JClass aJStack_40 [8];
  long local_38;
  
  puVar2 = PTR_sizeMethod_001ba388;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_sizeMethod_001ba390 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_sizeMethod_001ba390), iVar3 != 0)) {
                    /* try { // try from 0019ec8c to 0019eca3 has its CatchHandler @ 0019ecb8 */
    FUN_0019cba0(aJStack_40);
    uVar5 = facebook::jni::JClass::getMethod<int()>(aJStack_40,"size");
    *(undefined8 *)puVar2 = uVar5;
    __cxa_guard_release(PTR_sizeMethod_001ba390);
  }
  p_Var6 = (_jmethodID *)*param_1;
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  iVar3 = _JNIEnv::CallIntMethod(p_Var4,p_Var6,*(undefined8 *)puVar2);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return (long)iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019ece4  FUN_0019ece4 =====

void FUN_0019ece4(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar2 = (ulong)((float)param_2 / *(float *)(param_1 + 0x20));
  if (uVar2 - 1 == 0) {
    uVar2 = 2;
  }
  else if ((uVar2 & uVar2 - 1) != 0) {
    uVar2 = std::__ndk1::__next_prime(uVar2);
  }
  uVar5 = *(ulong *)(param_1 + 8);
  if (uVar5 < uVar2) {
LAB_0019ed4c:
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      FUN_0015f314();
      return;
    }
  }
  else {
    if (uVar2 < uVar5) {
      uVar4 = (ulong)((float)*(ulong *)(param_1 + 0x18) / *(float *)(param_1 + 0x20));
      if (uVar5 < 3) {
LAB_0019edc8:
        uVar4 = std::__ndk1::__next_prime(uVar4);
      }
      else {
        uVar7 = NEON_cnt(uVar5,1);
        uVar6 = NEON_uaddlv(uVar7,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar7 >> 0x10),uVar6)) goto LAB_0019edc8;
        if (1 < uVar4) {
          uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
        }
      }
      if (uVar2 <= uVar4) {
        uVar2 = uVar4;
      }
      if (uVar2 < uVar5) goto LAB_0019ed4c;
    }
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0019ee1c  FUN_0019ee1c =====

void FUN_0019ee1c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  _jclass *p_Var4;
  long lVar5;
  long *plVar6;
  long lVar7;
  bad_alloc *this;
  undefined8 uVar8;
  _jmethodID *p_Var9;
  undefined8 uVar10;
  undefined8 local_50;
  long local_48;
  
  puVar2 = PTR_ctor_001ba3b0;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((*PTR_ctor_001ba3b8 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_ctor_001ba3b8), iVar3 != 0)) {
                    /* try { // try from 0019ef7c to 0019ef8b has its CatchHandler @ 0019efe4 */
    FUN_0019fa60(&local_50);
    uVar8 = FUN_001a0378(&local_50);
    *(undefined8 *)puVar2 = uVar8;
    __cxa_guard_release(PTR_ctor_001ba3b8);
  }
  if (((*PTR_cls_001ba3c8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_cls_001ba3c8), iVar3 != 0))
  {
                    /* try { // try from 0019efb0 to 0019efc3 has its CatchHandler @ 0019efd4 */
    facebook::jni::findClassStatic(PTR_kBaseName_001ba3d0);
    __cxa_guard_release(PTR_cls_001ba3c8);
  }
  uVar10 = *(undefined8 *)puVar2;
  uVar8 = *param_2;
  p_Var9 = *(_jmethodID **)PTR_cls_001ba3c0;
  p_Var4 = (_jclass *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::NewObject(p_Var4,p_Var9,uVar10,uVar8);
  facebook::jni::throwCppExceptionIf(lVar5 == 0);
  if (lVar5 == 0) {
    lVar7 = 0;
  }
  else {
                    /* try { // try from 0019eeb0 to 0019eecb has its CatchHandler @ 0019f01c */
    plVar6 = (long *)facebook::jni::Environment::current();
    lVar7 = (**(code **)(*plVar6 + 0xa8))(plVar6,lVar5);
    facebook::jni::throwPendingJniExceptionAsCppException();
    if (lVar7 == 0) {
      this = (bad_alloc *)__cxa_allocate_exception(8);
      if (*(long *)(lVar1 + 0x28) == local_48) {
        std::bad_alloc::bad_alloc(this);
                    /* try { // try from 0019eef0 to 0019ef07 has its CatchHandler @ 0019f01c */
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this,PTR_typeinfo_001ba598,PTR__bad_alloc_001ba590);
      }
      goto LAB_0019f040;
    }
  }
  local_50 = 0;
  *param_1 = lVar7;
  param_1[1] = -1;
  param_1[2] = 0;
  param_1[3] = 0;
                    /* try { // try from 0019ef24 to 0019ef2b has its CatchHandler @ 0019eff8 */
  FUN_0019f47c(param_1);
  if (lVar5 != 0) {
                    /* try { // try from 0019ef30 to 0019ef43 has its CatchHandler @ 0019f018 */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,lVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_0019f040:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019f044  FUN_0019f044 =====

void FUN_0019f044(long *param_1,byte *param_2,long *param_3,long param_4)

{
  size_t sVar1;
  size_t sVar2;
  byte *__s2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  byte *pbVar14;
  long lVar15;
  ulong uVar16;
  byte *pbVar17;
  ulong uVar18;
  ulong unaff_x27;
  undefined2 uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined1 uStack_81;
  long *local_80;
  long *plStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  sVar2 = *(size_t *)(param_2 + 8);
  __s2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    __s2 = param_2 + 1;
    sVar2 = (ulong)(*param_2 >> 1);
  }
  uVar8 = FUN_0015c450(__s2,sVar2);
  uVar18 = param_1[1];
  if (uVar18 != 0) {
    uVar20 = NEON_cnt(uVar18,1);
    uVar19 = NEON_uaddlv(uVar20,1);
    uVar16 = CONCAT62((int6)((ulong)uVar20 >> 0x10),uVar19) & 0xffffffff;
    if (uVar16 < 2) {
      unaff_x27 = uVar18 - 1 & uVar8;
    }
    else {
      unaff_x27 = uVar8;
      if (uVar18 <= uVar8) {
        uVar11 = 0;
        if (uVar18 != 0) {
          uVar11 = uVar8 / uVar18;
        }
        unaff_x27 = uVar8 - uVar11 * uVar18;
      }
    }
    plVar10 = *(long **)(*param_1 + unaff_x27 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      do {
        uVar11 = plVar10[1];
        if (uVar11 == uVar8) {
          bVar4 = *(byte *)(plVar10 + 2);
          uVar11 = (ulong)(bVar4 >> 1);
          sVar1 = uVar11;
          if ((bVar4 & 1) != 0) {
            sVar1 = plVar10[3];
          }
          if (sVar1 == sVar2) {
            if ((bVar4 & 1) == 0) {
              if (bVar4 < 2) goto LAB_0019f3fc;
              pbVar14 = (byte *)((long)plVar10 + 0x11);
              pbVar17 = __s2;
              while (*pbVar14 == *pbVar17) {
                uVar11 = uVar11 - 1;
                pbVar14 = pbVar14 + 1;
                pbVar17 = pbVar17 + 1;
                if (uVar11 == 0) goto LAB_0019f3fc;
              }
            }
            else {
              iVar7 = memcmp((void *)plVar10[4],__s2,plVar10[3]);
              if (iVar7 == 0) goto LAB_0019f3fc;
            }
          }
        }
        else {
          if (uVar16 < 2) {
            uVar11 = uVar11 & uVar18 - 1;
          }
          else if (uVar18 <= uVar11) {
            uVar5 = 0;
            if (uVar18 != 0) {
              uVar5 = uVar11 / uVar18;
            }
            uVar11 = uVar11 - uVar5 * uVar18;
          }
          if (uVar11 != unaff_x27) break;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  plVar10 = param_1 + 2;
  plVar9 = (long *)operator_new(0x58);
  lVar21 = param_3[1];
  lVar13 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  lVar15 = param_3[2];
  param_3[2] = 0;
  uVar3 = *(uint *)(param_4 + 0x28);
  plVar9[4] = lVar15;
  local_70 = 0;
  *plVar9 = 0;
  plVar9[1] = uVar8;
  plVar9[3] = lVar21;
  plVar9[2] = lVar13;
  *(undefined4 *)(plVar9 + 10) = 0xffffffff;
  *(undefined1 *)(plVar9 + 5) = 0;
  local_80 = plVar9;
  plStack_78 = plVar10;
  if (uVar3 != 0xffffffff) {
                    /* try { // try from 0019f238 to 0019f247 has its CatchHandler @ 0019f438 */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<margelo_nitro_NullType,bool,double,long,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<margelo_nitro_AnyValue,std___ndk1_allocator<margelo_nitro_AnyValue>>,std___ndk1_unordered_map<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,margelo_nitro_AnyValue,std___ndk1_hash<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_equal_to<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_allocator<std___ndk1_pair<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___copy_constructor<std___ndk1___variant_detail___traits<marge___td___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>const_>_001b9490
              )[uVar3])(&uStack_81,plVar9 + 5,param_4);
    *(undefined4 *)(plVar9 + 10) = *(undefined4 *)(param_4 + 0x28);
  }
  local_70 = 1;
  if ((uVar18 == 0) || (*(float *)(param_1 + 4) * (float)uVar18 < (float)(param_1[3] + 1))) {
    if (uVar18 < 3) {
      uVar16 = 1;
    }
    else {
      uVar16 = (ulong)((uVar18 & uVar18 - 1) != 0);
    }
    uVar16 = uVar16 | uVar18 << 1;
    uVar18 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar16 <= uVar18) {
      uVar16 = uVar18;
    }
    if (uVar16 - 1 == 0) {
      uVar16 = 2;
    }
    else if ((uVar16 & uVar16 - 1) != 0) {
                    /* try { // try from 0019f2c8 to 0019f34b has its CatchHandler @ 0019f430 */
      uVar16 = std::__ndk1::__next_prime(uVar16);
    }
    uVar18 = param_1[1];
    if (uVar18 < uVar16) {
LAB_0019f2e0:
      FUN_0015f314(param_1,uVar16);
    }
    else if (uVar16 < uVar18) {
      uVar11 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar18 < 3) {
LAB_0019f348:
        uVar11 = std::__ndk1::__next_prime(uVar11);
      }
      else {
        uVar20 = NEON_cnt(uVar18,1);
        uVar19 = NEON_uaddlv(uVar20,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar20 >> 0x10),uVar19)) goto LAB_0019f348;
        if (1 < uVar11) {
          uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
        }
      }
      if (uVar16 <= uVar11) {
        uVar16 = uVar11;
      }
      if (uVar16 < uVar18) goto LAB_0019f2e0;
    }
    uVar18 = param_1[1];
    if ((uVar18 & uVar18 - 1) == 0) {
      unaff_x27 = uVar18 - 1 & uVar8;
    }
    else {
      unaff_x27 = uVar8;
      if (uVar18 <= uVar8) {
        uVar16 = 0;
        if (uVar18 != 0) {
          uVar16 = uVar8 / uVar18;
        }
        unaff_x27 = uVar8 - uVar16 * uVar18;
      }
    }
  }
  lVar15 = *param_1;
  plVar12 = *(long **)(lVar15 + unaff_x27 * 8);
  if (plVar12 == (long *)0x0) {
    lVar13 = *plVar10;
    *plVar10 = (long)plVar9;
    *plVar9 = lVar13;
    *(long **)(lVar15 + unaff_x27 * 8) = plVar10;
    if (*plVar9 == 0) goto LAB_0019f3f0;
    uVar8 = *(ulong *)(*plVar9 + 8);
    if ((uVar18 & uVar18 - 1) == 0) {
      uVar8 = uVar8 & uVar18 - 1;
    }
    else if (uVar18 <= uVar8) {
      uVar16 = 0;
      if (uVar18 != 0) {
        uVar16 = uVar8 / uVar18;
      }
      uVar8 = uVar8 - uVar16 * uVar18;
    }
    plVar12 = (long *)(*param_1 + uVar8 * 8);
  }
  else {
    *plVar9 = *plVar12;
  }
  *plVar12 = (long)plVar9;
LAB_0019f3f0:
  param_1[3] = param_1[3] + 1;
LAB_0019f3fc:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0019f47c  FUN_0019f47c =====

undefined8 * FUN_0019f47c(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  _jobject *p_Var7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  bad_alloc *this;
  _jmethodID *p_Var12;
  undefined8 uVar13;
  undefined8 uVar14;
  long local_80;
  undefined8 local_78;
  JClass local_70 [16];
  ulong local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  
  puVar3 = PTR_hasNextMethod_001ba3e0;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (((*PTR_hasNextMethod_001ba3e8 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_hasNextMethod_001ba3e8), iVar6 != 0)) {
                    /* try { // try from 0019f730 to 0019f747 has its CatchHandler @ 0019f8fc */
    FUN_0019fa60(local_70);
    uVar13 = facebook::jni::JClass::getMethod<unsigned_char()>(local_70,"hasNext");
    *(undefined8 *)puVar3 = uVar13;
    __cxa_guard_release(PTR_hasNextMethod_001ba3e8);
  }
  p_Var12 = (_jmethodID *)*param_1;
  p_Var7 = (_jobject *)facebook::jni::Environment::current();
  cVar5 = _JNIEnv::CallBooleanMethod(p_Var7,p_Var12,*(undefined8 *)puVar3);
  facebook::jni::throwPendingJniExceptionAsCppException();
  puVar3 = PTR_keyField_001ba3f8;
  if (cVar5 == '\0') {
    lVar9 = param_1[2];
    param_1[1] = 0xffffffffffffffff;
    if (lVar9 != 0) {
                    /* try { // try from 0019f60c to 0019f61f has its CatchHandler @ 0019f954 */
      plVar8 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar8 + 0xb8))(plVar8,lVar9);
    }
    lVar9 = param_1[3];
    param_1[2] = 0;
    if (lVar9 != 0) {
                    /* try { // try from 0019f62c to 0019f63f has its CatchHandler @ 0019f950 */
      plVar8 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar8 + 0xb8))(plVar8,lVar9);
    }
    param_1[3] = 0;
  }
  else {
    param_1[1] = param_1[1] + 1;
    puVar4 = PTR_keyField_001ba3f0;
    if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_keyField_001ba3f8), iVar6 != 0)) {
                    /* try { // try from 0019f76c to 0019f783 has its CatchHandler @ 0019f8ec */
      FUN_0019fa60(local_70);
      uVar13 = FUN_0019fb20(local_70,&DAT_00137ff3);
      *(undefined8 *)puVar4 = uVar13;
      __cxa_guard_release(PTR_keyField_001ba3f8);
    }
    if (((*PTR_valueField_001ba408 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_valueField_001ba408), iVar6 != 0)) {
                    /* try { // try from 0019f7a8 to 0019f7bf has its CatchHandler @ 0019f8dc */
      FUN_0019fa60(local_70);
      uVar13 = FUN_0019fb20(local_70,"mValue");
      *(undefined8 *)PTR_valueField_001ba400 = uVar13;
      __cxa_guard_release(PTR_valueField_001ba408);
    }
    uVar13 = *(undefined8 *)puVar4;
    uVar14 = *param_1;
                    /* try { // try from 0019f518 to 0019f52f has its CatchHandler @ 0019f9a4 */
    plVar8 = (long *)facebook::jni::Environment::current();
    local_80 = (**(code **)(*plVar8 + 0x2f8))(plVar8,uVar14,uVar13);
                    /* try { // try from 0019f534 to 0019f53f has its CatchHandler @ 0019f960 */
    FUN_0019fba4(&local_78,&local_80);
    uVar14 = *param_1;
    uVar13 = *(undefined8 *)PTR_valueField_001ba400;
                    /* try { // try from 0019f550 to 0019f567 has its CatchHandler @ 0019f9a0 */
    plVar8 = (long *)facebook::jni::Environment::current();
    lVar9 = (**(code **)(*plVar8 + 0x2f8))(plVar8,uVar14,uVar13);
    puVar3 = PTR_target_class_001ba440;
    if (lVar9 != 0) {
      if (((*PTR_target_class_001ba448 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_target_class_001ba448), iVar6 != 0)) {
                    /* try { // try from 0019f7ec to 0019f7fb has its CatchHandler @ 0019f8c8 */
        facebook::jni::findClassStatic(PTR_kBaseName_001ba380);
        *(undefined8 *)puVar3 = local_50;
        __cxa_guard_release(PTR_target_class_001ba448);
      }
      if (*(long *)puVar3 == 0) {
        if (*(long *)(lVar2 + 0x28) != local_48) goto LAB_0019f984;
                    /* try { // try from 0019f824 to 0019f83f has its CatchHandler @ 0019f938 */
        FUN_0019fe68("java/lang/ClassCastException","Could not find class %s.",
                     PTR_kBaseName_001ba380);
LAB_0019f840:
                    /* try { // try from 0019f840 to 0019f84f has its CatchHandler @ 0019f928 */
        FUN_0019febc(local_70,&local_58);
        uVar1 = (ulong)local_70 | 1;
        if (((byte)local_70[0] & 1) != 0) {
          uVar1 = local_60;
        }
        if (*(long *)(lVar2 + 0x28) != local_48) goto LAB_0019f984;
                    /* try { // try from 0019f874 to 0019f88f has its CatchHandler @ 0019f910 */
        FUN_001a0004("java/lang/ClassCastException","Tried to cast from %s to %s.",uVar1,
                     PTR_kBaseName_001ba380);
      }
      else {
                    /* try { // try from 0019f590 to 0019f5a7 has its CatchHandler @ 0019f998 */
        plVar8 = (long *)facebook::jni::Environment::current();
        lVar10 = (**(code **)(*plVar8 + 0xf8))(plVar8,lVar9);
        local_58 = lVar10;
                    /* try { // try from 0019f5b0 to 0019f5c7 has its CatchHandler @ 0019f994 */
        plVar8 = (long *)facebook::jni::Environment::current();
        cVar5 = (**(code **)(*plVar8 + 0x58))(plVar8,lVar10,*(undefined8 *)puVar3);
        if (cVar5 == '\0') goto LAB_0019f840;
        if (lVar9 == 0) {
          lVar11 = 0;
joined_r0x0019f65c:
          if (lVar10 != 0) {
                    /* try { // try from 0019f660 to 0019f673 has its CatchHandler @ 0019f95c */
            plVar8 = (long *)facebook::jni::Environment::current();
            (**(code **)(*plVar8 + 0xb8))(plVar8,lVar10);
          }
          uVar13 = local_78;
          local_78 = 0;
          if (lVar9 != 0) {
                    /* try { // try from 0019f680 to 0019f693 has its CatchHandler @ 0019f958 */
            plVar8 = (long *)facebook::jni::Environment::current();
            (**(code **)(*plVar8 + 0xb8))(plVar8,lVar9);
          }
          goto LAB_0019f694;
        }
                    /* try { // try from 0019f5d4 to 0019f5ef has its CatchHandler @ 0019f99c */
        plVar8 = (long *)facebook::jni::Environment::current();
        lVar11 = (**(code **)(*plVar8 + 200))(plVar8,lVar9);
        facebook::jni::throwPendingJniExceptionAsCppException();
        if (lVar11 != 0) goto joined_r0x0019f65c;
      }
      this = (bad_alloc *)__cxa_allocate_exception(8);
      std::bad_alloc::bad_alloc(this);
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 0019f8b0 to 0019f8c7 has its CatchHandler @ 0019f99c */
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this,PTR_typeinfo_001ba598,PTR__bad_alloc_001ba590);
      }
      goto LAB_0019f984;
    }
    lVar11 = 0;
    uVar13 = local_78;
LAB_0019f694:
    lVar9 = local_80;
    local_78 = 0;
    if (local_80 != 0) {
                    /* try { // try from 0019f6a0 to 0019f6b3 has its CatchHandler @ 0019f990 */
      plVar8 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar8 + 0xb8))(plVar8,lVar9);
    }
    lVar9 = param_1[2];
    if (lVar9 != 0) {
                    /* try { // try from 0019f6bc to 0019f6cf has its CatchHandler @ 0019f98c */
      plVar8 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar8 + 0xb8))(plVar8,lVar9);
    }
    lVar9 = param_1[3];
    param_1[2] = uVar13;
    if (lVar9 != 0) {
                    /* try { // try from 0019f6dc to 0019f6ef has its CatchHandler @ 0019f988 */
      plVar8 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar8 + 0xb8))(plVar8,lVar9);
    }
    param_1[3] = lVar11;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return param_1;
  }
LAB_0019f984:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019f9a8  FUN_0019f9a8 =====

void FUN_0019f9a8(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = param_1[3];
  if (lVar4 != 0) {
                    /* try { // try from 0019f9d4 to 0019f9e7 has its CatchHandler @ 0019fa5c */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar4);
  }
  lVar4 = param_1[2];
  param_1[3] = 0;
  if (lVar4 != 0) {
                    /* try { // try from 0019f9f4 to 0019fa07 has its CatchHandler @ 0019fa58 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar4);
  }
  lVar4 = *param_1;
  param_1[2] = 0;
  if (lVar4 != 0) {
                    /* try { // try from 0019fa14 to 0019fa27 has its CatchHandler @ 0019fa54 */
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


// ===== 0019fa60  FUN_0019fa60 =====

void FUN_0019fa60(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_001ba3c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_001ba3c8), iVar2 != 0))
  {
                    /* try { // try from 0019fad0 to 0019fae3 has its CatchHandler @ 0019faf4 */
    facebook::jni::findClassStatic(PTR_kBaseName_001ba3d0);
    __cxa_guard_release(PTR_cls_001ba3c8);
  }
  *param_1 = *(undefined8 *)PTR_cls_001ba3c0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019fb20  FUN_0019fb20 =====

long FUN_0019fb20(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x2f0))(plVar2,*param_1,param_2,PTR_kDescriptor_001ba410);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019fba4  FUN_0019fba4 =====

void FUN_0019fba4(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  bad_alloc *this;
  long lVar8;
  byte local_70 [16];
  ulong local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  
  puVar3 = PTR_target_class_001ba418;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*param_2 == 0) {
    *param_1 = 0;
LAB_0019fc80:
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return;
    }
    goto LAB_0019fde4;
  }
  if (((*PTR_target_class_001ba420 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_target_class_001ba420), iVar5 != 0)) {
                    /* try { // try from 0019fcb8 to 0019fcc7 has its CatchHandler @ 0019fd94 */
    facebook::jni::findClassStatic(PTR_kBaseName_001ba428);
    *(undefined8 *)puVar3 = local_50;
    __cxa_guard_release(PTR_target_class_001ba420);
  }
  if (*(long *)puVar3 == 0) {
    if (*(long *)(lVar2 + 0x28) != local_48) goto LAB_0019fde4;
    FUN_0019fe68("java/lang/ClassCastException","Could not find class %s.",PTR_kBaseName_001ba428);
LAB_0019fd0c:
                    /* try { // try from 0019fd0c to 0019fd1b has its CatchHandler @ 0019fdc0 */
    FUN_0019febc(local_70,&local_58);
    uVar1 = (ulong)local_70 | 1;
    if ((local_70[0] & 1) != 0) {
      uVar1 = local_60;
    }
    if (*(long *)(lVar2 + 0x28) != local_48) goto LAB_0019fde4;
                    /* try { // try from 0019fd40 to 0019fd5b has its CatchHandler @ 0019fda8 */
    FUN_001a0004("java/lang/ClassCastException","Tried to cast from %s to %s.",uVar1,
                 PTR_kBaseName_001ba428);
  }
  else {
                    /* try { // try from 0019fbf8 to 0019fc0b has its CatchHandler @ 0019fdf0 */
    plVar6 = (long *)facebook::jni::Environment::current();
    lVar7 = (**(code **)(*plVar6 + 0xf8))(plVar6,*param_2);
    local_58 = lVar7;
                    /* try { // try from 0019fc14 to 0019fc2b has its CatchHandler @ 0019fdec */
    plVar6 = (long *)facebook::jni::Environment::current();
    cVar4 = (**(code **)(*plVar6 + 0x58))(plVar6,lVar7,*(undefined8 *)puVar3);
    if (cVar4 == '\0') goto LAB_0019fd0c;
    lVar8 = *param_2;
    if (lVar8 == 0) {
LAB_0019fc5c:
      *param_1 = lVar8;
      if (lVar7 != 0) {
                    /* try { // try from 0019fc64 to 0019fc77 has its CatchHandler @ 0019fde8 */
        plVar6 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar6 + 0xb8))(plVar6,lVar7);
      }
      goto LAB_0019fc80;
    }
                    /* try { // try from 0019fc3c to 0019fc57 has its CatchHandler @ 0019fdf4 */
    plVar6 = (long *)facebook::jni::Environment::current();
    lVar8 = (**(code **)(*plVar6 + 200))(plVar6,lVar8);
    facebook::jni::throwPendingJniExceptionAsCppException();
    if (lVar8 != 0) goto LAB_0019fc5c;
  }
  this = (bad_alloc *)__cxa_allocate_exception(8);
  std::bad_alloc::bad_alloc(this);
  if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 0019fd7c to 0019fd93 has its CatchHandler @ 0019fdf4 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,PTR_typeinfo_001ba598,PTR__bad_alloc_001ba590);
  }
LAB_0019fde4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019fdf8  FUN_0019fdf8 =====

void FUN_0019fdf8(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 0019fe24 to 0019fe37 has its CatchHandler @ 0019fe64 */
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


// ===== 0019fe68  FUN_0019fe68 =====

void FUN_0019fe68(char *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  char acStack_238 [512];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_001a00cc(acStack_238,param_2,param_3,param_2,param_3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    facebook::jni::throwNewJavaException(param_1,acStack_238);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019febc  FUN_0019febc =====

void FUN_0019febc(undefined8 param_1,undefined8 *param_2)

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
  
  puVar2 = PTR_method_001ba430;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_method_001ba438 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_method_001ba438), iVar3 != 0)) {
                    /* try { // try from 0019ff78 to 0019ff87 has its CatchHandler @ 0019ffc4 */
    facebook::jni::findClassLocal("java/lang/Object");
                    /* try { // try from 0019ff88 to 0019ff97 has its CatchHandler @ 0019ffb4 */
    uVar7 = facebook::jni::JClass::getMethod<_jstring*()>((JClass *)&local_40,"toString");
    *(undefined8 *)puVar2 = uVar7;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_40);
    __cxa_guard_release(PTR_method_001ba438);
  }
  p_Var8 = (_jmethodID *)*param_2;
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::CallObjectMethod(p_Var4,p_Var8,*(undefined8 *)puVar2);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_40 = lVar5;
                    /* try { // try from 0019ff1c to 0019ff27 has its CatchHandler @ 0019ffd8 */
  facebook::jni::JString::toStdString();
  lVar5 = local_40;
  if (local_40 != 0) {
                    /* try { // try from 0019ff30 to 0019ff43 has its CatchHandler @ 001a0000 */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,lVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a0004  FUN_001a0004 =====

void FUN_001a0004(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  char acStack_238 [512];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_001a00cc(acStack_238,param_2,param_3,param_2,param_3,param_4);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    facebook::jni::throwNewJavaException(param_1,acStack_238);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a005c  facebook::jni::base_owned_ref<_jclass*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

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
                    /* try { // try from 001a0088 to 001a009b has its CatchHandler @ 001a00c8 */
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


// ===== 001a00cc  FUN_001a00cc =====

void FUN_001a00cc(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
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


// ===== 001a0164  facebook::jni::JClass::getMethod<_jstring*()> =====

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
                    (plVar2,*(undefined8 *)this,param_1,PTR_kDescriptor_001ba358);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a01e8  facebook::jni::base_owned_ref<_jstring*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

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
                    /* try { // try from 001a0214 to 001a0227 has its CatchHandler @ 001a0254 */
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


// ===== 001a0258  facebook::jni::JClass::getMethod<unsigned_char()> =====

/* facebook::jni::JMethod<unsigned char ()> facebook::jni::JClass::getMethod<unsigned char ()>(char
   const*) const */

long __thiscall facebook::jni::JClass::getMethod<unsigned_char()>(JClass *this,char *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*(undefined8 *)this,param_1,PTR_kDescriptor_001ba278);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a02dc  _JNIEnv::CallBooleanMethod =====

/* _JNIEnv::CallBooleanMethod(_jobject*, _jmethodID*, ...) */

void _JNIEnv::CallBooleanMethod(_jobject *param_1,_jmethodID *param_2,...)

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
  (**(code **)(*(long *)param_1 + 0x130))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a0378  FUN_001a0378 =====

long FUN_001a0378(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*param_1,"<init>",PTR_kConstructorDescriptor_001ba3d8);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a03f4  FUN_001a03f4 =====

void FUN_001a03f4(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = param_1[1];
  if (lVar4 != 0) {
                    /* try { // try from 001a0420 to 001a0433 has its CatchHandler @ 001a0484 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar4);
  }
  lVar4 = *param_1;
  param_1[1] = 0;
  if (lVar4 != 0) {
                    /* try { // try from 001a0440 to 001a0453 has its CatchHandler @ 001a0480 */
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


// ===== 001a0488  FUN_001a0488 =====

void FUN_001a0488(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 001a04b4 to 001a04c7 has its CatchHandler @ 001a04f4 */
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


// ===== 001a04f8  FUN_001a04f8 =====

void FUN_001a04f8(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 001a0524 to 001a0537 has its CatchHandler @ 001a0564 */
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


// ===== 001a0568  FUN_001a0568 =====

void FUN_001a0568(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 001a0594 to 001a05a7 has its CatchHandler @ 001a05d4 */
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


// ===== 001a05d8  facebook::jni::JClass::getMethod<int()> =====

/* facebook::jni::JMethod<int ()> facebook::jni::JClass::getMethod<int ()>(char const*) const */

long __thiscall facebook::jni::JClass::getMethod<int()>(JClass *this,char *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*(undefined8 *)this,param_1,PTR_kDescriptor_001ba280);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a065c  _JNIEnv::CallIntMethod =====

/* _JNIEnv::CallIntMethod(_jobject*, _jmethodID*, ...) */

void _JNIEnv::CallIntMethod(_jobject *param_1,_jmethodID *param_2,...)

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
  (**(code **)(*(long *)param_1 + 400))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a06f8  margelo::nitro::JAnyValue::initHybridAnyArray =====

/* margelo::nitro::JAnyValue::initHybridAnyArray(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   facebook::jni::alias_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>
   >) */

void __thiscall
margelo::nitro::JAnyValue::initHybridAnyArray(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *pvVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  void *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 uStack_79;
  long local_78;
  undefined8 *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_a0 = (void *)0x0;
  puStack_98 = (undefined1 *)0x0;
  local_90 = (undefined1 *)0x0;
                    /* try { // try from 001a0734 to 001a0747 has its CatchHandler @ 001a09c4 */
  plVar9 = (long *)facebook::jni::Environment::current();
  iVar7 = (**(code **)(*plVar9 + 0x558))(plVar9,*param_3);
                    /* try { // try from 001a0750 to 001a075b has its CatchHandler @ 001a09c0 */
  FUN_001a0a1c(&local_a0,(long)iVar7);
  puVar4 = PTR_hybridDataField_001ba368;
  puVar3 = PTR_hybridDataField_001ba360;
  if (iVar7 != 0) {
    uVar12 = 0;
    do {
                    /* try { // try from 001a0790 to 001a07a7 has its CatchHandler @ 001a09f4 */
      plVar9 = (long *)facebook::jni::Environment::current();
      local_78 = (**(code **)(*plVar9 + 0x568))(plVar9,*param_3,uVar12 & 0xffffffff);
      if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
        facebook::jni::JObject::getClass();
                    /* try { // try from 001a0854 to 001a0857 has its CatchHandler @ 001a098c */
        uVar11 = FUN_0019c044(local_70);
        *(undefined8 *)puVar3 = uVar11;
        facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
        ::~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
                           *)&local_70);
        __cxa_guard_release(puVar4);
      }
                    /* try { // try from 001a07b4 to 001a07bf has its CatchHandler @ 001a09e4 */
      lVar10 = facebook::jni::getHybridDataFromField((JObject *)&local_78,(JField *)puVar3);
      puVar2 = puStack_98;
      if (puStack_98 < local_90) {
        *puStack_98 = 0;
        *(undefined4 *)(puStack_98 + 0x28) = 0xffffffff;
        if (*(uint *)(lVar10 + 0x30) != 0xffffffff) {
                    /* try { // try from 001a07e8 to 001a07f7 has its CatchHandler @ 001a09c8 */
          (*(code *)(&
                    PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<margelo_nitro_NullType,bool,double,long,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<margelo_nitro_AnyValue,std___ndk1_allocator<margelo_nitro_AnyValue>>,std___ndk1_unordered_map<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,margelo_nitro_AnyValue,std___ndk1_hash<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_equal_to<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_allocator<std___ndk1_pair<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___copy_constructor<std___ndk1___variant_detail___traits<marge___td___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>const_>_001b9490
                    )[*(uint *)(lVar10 + 0x30)])(&local_70,puStack_98,lVar10 + 8);
          *(undefined4 *)(puVar2 + 0x28) = *(undefined4 *)(lVar10 + 0x30);
        }
        puStack_98 = puVar2 + 0x30;
      }
      else {
                    /* try { // try from 001a0808 to 001a0813 has its CatchHandler @ 001a09e4 */
        puStack_98 = (undefined1 *)FUN_001a0bd0(&local_a0,lVar10 + 8);
      }
      lVar10 = local_78;
      if (local_78 != 0) {
                    /* try { // try from 001a0820 to 001a0833 has its CatchHandler @ 001a09e0 */
        plVar9 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar9 + 0xb8))(plVar9,lVar10);
      }
      uVar12 = uVar12 + 1;
    } while ((long)iVar7 != uVar12);
  }
                    /* try { // try from 001a0870 to 001a0877 has its CatchHandler @ 001a09bc */
  local_70 = (undefined8 *)operator_new(0x38);
  *local_70 = &PTR_FUN_001b9418;
  local_70[2] = puStack_98;
  local_70[1] = local_a0;
  local_70[3] = local_90;
  local_a0 = (void *)0x0;
  puStack_98 = (undefined1 *)0x0;
  local_90 = (undefined1 *)0x0;
  *(undefined4 *)(local_70 + 6) = 5;
                    /* try { // try from 001a08a8 to 001a08b3 has its CatchHandler @ 001a09ac */
  FUN_0019ceb0(&local_78,&local_70);
  puVar6 = local_70;
  local_70 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    if (*(uint *)(puVar6 + 6) != 0xffffffff) {
                    /* try { // try from 001a08d8 to 001a08e3 has its CatchHandler @ 001a09a8 */
      (*(code *)(&PTR_FUN_001b9458)[*(uint *)(puVar6 + 6)])(&uStack_79,puVar6 + 1);
    }
    operator_delete(puVar6);
  }
  pvVar5 = local_a0;
  *param_1 = local_78;
  puVar2 = puStack_98;
  if (local_a0 != (void *)0x0) {
    while (puVar2 != (undefined1 *)pvVar5) {
      if (*(uint *)((long)puVar2 + -8) != 0xffffffff) {
                    /* try { // try from 001a0940 to 001a094b has its CatchHandler @ 001a09dc */
        (*(code *)(&PTR_FUN_001b9458)[*(uint *)((long)puVar2 + -8)])
                  (&local_70,(void *)((long)puVar2 + -0x30));
      }
      *(undefined4 *)((long)puVar2 + -8) = 0xffffffff;
      puVar2 = (undefined1 *)((long)puVar2 + -0x30);
    }
    puStack_98 = (undefined1 *)pvVar5;
    operator_delete(local_a0);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001a0a1c  FUN_001a0a1c =====

void FUN_001a0a1c(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  pvVar7 = (void *)*param_1;
  if ((ulong)((param_1[2] - (long)pvVar7 >> 4) * -0x5555555555555555) < param_2) {
    if (0x555555555555555 < param_2) {
      if (*(long *)(lVar5 + 0x28) == local_68) {
        FUN_0015e998();
      }
      goto LAB_001a0bc4;
    }
    lVar8 = param_1[1];
    pvVar6 = operator_new(param_2 * 0x30);
    lVar1 = (long)pvVar6 + (lVar8 - (long)pvVar7);
    pvVar6 = (void *)((long)pvVar6 + param_2 * 0x30);
    if (lVar8 - (long)pvVar7 == 0) {
      *param_1 = lVar1;
      param_1[1] = lVar1;
      param_1[2] = (long)pvVar6;
    }
    else {
      lVar9 = 0;
      do {
        lVar2 = lVar1 + lVar9;
        lVar3 = lVar8 + lVar9;
        *(undefined4 *)(lVar2 + -8) = 0xffffffff;
        *(undefined1 *)(lVar2 + -0x30) = 0;
        if (*(uint *)(lVar3 + -8) != 0xffffffff) {
                    /* try { // try from 001a0af8 to 001a0aff has its CatchHandler @ 001a0bcc */
          (*(code *)(&
                    PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<margelo_nitro_NullType,bool,double,long,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<margelo_nitro_AnyValue,std___ndk1_allocator<margelo_nitro_AnyValue>>,std___ndk1_unordered_map<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,margelo_nitro_AnyValue,std___ndk1_hash<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_equal_to<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_allocator<std___ndk1_pair<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<marge___ar,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>__>_001b94c8
                    )[*(uint *)(lVar3 + -8)])
                    (&uStack_6a,(undefined1 *)(lVar2 + -0x30),lVar3 + -0x30);
          *(undefined4 *)(lVar2 + -8) = *(undefined4 *)(lVar3 + -8);
        }
        lVar9 = lVar9 + -0x30;
      } while ((void *)(lVar8 + lVar9) != pvVar7);
      pvVar7 = (void *)*param_1;
      pvVar4 = (void *)param_1[1];
      *param_1 = lVar1 + lVar9;
      param_1[1] = lVar1;
      param_1[2] = (long)pvVar6;
      while (pvVar4 != pvVar7) {
        if (*(uint *)((long)pvVar4 + -8) != 0xffffffff) {
                    /* try { // try from 001a0b5c to 001a0b67 has its CatchHandler @ 001a0bc8 */
          (*(code *)(&PTR_FUN_001b9458)[*(uint *)((long)pvVar4 + -8)])
                    (&uStack_69,(void *)((long)pvVar4 + -0x30));
        }
        *(undefined4 *)((long)pvVar4 + -8) = 0xffffffff;
        pvVar4 = (void *)((long)pvVar4 + -0x30);
      }
    }
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
LAB_001a0bc4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a0bd0  FUN_001a0bd0 =====

undefined1 * FUN_001a0bd0(long *param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  void *pvVar9;
  long lVar10;
  undefined1 *puVar11;
  void *pvVar12;
  void *pvVar13;
  void *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  void *local_70;
  long *local_68;
  undefined1 uStack_59;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pvVar9 = (void *)*param_1;
  pvVar13 = (void *)param_1[1];
  lVar6 = (long)pvVar13 - (long)pvVar9 >> 4;
  lVar10 = lVar6 * -0x5555555555555555;
  uVar1 = lVar10 + 1;
  if (uVar1 < 0x555555555555556) {
    local_68 = param_1 + 2;
    lVar7 = *local_68 - (long)pvVar9 >> 4;
    uVar8 = lVar7 * 0x5555555555555556;
    if (uVar8 < uVar1 || uVar8 - uVar1 == 0) {
      uVar8 = uVar1;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar7 * -0x5555555555555555)) {
      uVar8 = 0x555555555555555;
    }
    if (uVar8 == 0) {
      local_88 = (void *)0x0;
    }
    else {
      if (0x555555555555555 < uVar8) goto LAB_001a0e1c;
      local_88 = operator_new(uVar8 * 0x30);
    }
    puVar11 = (undefined1 *)((long)local_88 + lVar6 * 0x10);
    local_70 = (void *)((long)local_88 + uVar8 * 0x30);
    uVar2 = *(uint *)(param_2 + 0x28);
    *puVar11 = 0;
    *(undefined4 *)(puVar11 + 0x28) = 0xffffffff;
    local_80 = puVar11;
    if (uVar2 != 0xffffffff) {
                    /* try { // try from 001a0cb8 to 001a0cc7 has its CatchHandler @ 001a0e30 */
      local_78 = puVar11;
      (*(code *)(&
                PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<margelo_nitro_NullType,bool,double,long,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<margelo_nitro_AnyValue,std___ndk1_allocator<margelo_nitro_AnyValue>>,std___ndk1_unordered_map<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,margelo_nitro_AnyValue,std___ndk1_hash<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_equal_to<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_allocator<std___ndk1_pair<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___copy_constructor<std___ndk1___variant_detail___traits<marge___td___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>const_>_001b9490
                )[uVar2])(&uStack_59,puVar11,param_2);
      pvVar9 = (void *)*param_1;
      pvVar13 = (void *)param_1[1];
      *(undefined4 *)(puVar11 + 0x28) = *(undefined4 *)(param_2 + 0x28);
      puVar11 = local_78;
    }
    puVar11 = puVar11 + 0x30;
    pvVar12 = pvVar9;
    puVar4 = local_80;
    local_78 = puVar11;
    if (pvVar13 != pvVar9) {
      do {
        puVar11 = puVar4 + -0x30;
        *puVar11 = 0;
        pvVar12 = (void *)((long)pvVar13 + -0x30);
        *(undefined4 *)(puVar4 + -8) = 0xffffffff;
        if (*(uint *)((long)pvVar13 + -8) != 0xffffffff) {
                    /* try { // try from 001a0d34 to 001a0d43 has its CatchHandler @ 001a0e64 */
          (*(code *)(&
                    PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<margelo_nitro_NullType,bool,double,long,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<margelo_nitro_AnyValue,std___ndk1_allocator<margelo_nitro_AnyValue>>,std___ndk1_unordered_map<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,margelo_nitro_AnyValue,std___ndk1_hash<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_equal_to<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_allocator<std___ndk1_pair<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<marge___ar,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>__>_001b94c8
                    )[*(uint *)((long)pvVar13 + -8)])(&uStack_59,puVar11,pvVar12);
          *(undefined4 *)(puVar4 + -8) = *(undefined4 *)((long)pvVar13 + -8);
        }
        pvVar13 = pvVar12;
        puVar4 = puVar11;
      } while (pvVar12 != pvVar9);
      pvVar9 = (void *)param_1[1];
      local_80 = puVar11;
      puVar11 = local_78;
      pvVar12 = (void *)*param_1;
    }
    lVar6 = param_1[2];
    *param_1 = (long)local_80;
    param_1[1] = (long)puVar11;
    param_1[2] = (long)local_70;
    local_70 = (void *)lVar6;
    puVar4 = (undefined1 *)pvVar9;
    local_88 = pvVar12;
    local_80 = (undefined1 *)pvVar12;
    while (puVar4 != (undefined1 *)pvVar12) {
      local_78 = (undefined1 *)((long)puVar4 + -0x30);
      if (*(uint *)((long)puVar4 + -8) != 0xffffffff) {
                    /* try { // try from 001a0db8 to 001a0dbf has its CatchHandler @ 001a0e60 */
        (*(code *)(&PTR_FUN_001b9458)[*(uint *)((long)puVar4 + -8)])(&uStack_59);
      }
      *(undefined4 *)((long)puVar4 + -8) = 0xffffffff;
      pvVar9 = local_88;
      puVar4 = local_78;
    }
    local_78 = puVar4;
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
    }
    if (*(long *)(lVar3 + 0x28) == local_58) {
      return puVar11;
    }
  }
  else {
    if (*(long *)(lVar3 + 0x28) != local_58) goto LAB_001a0e5c;
    FUN_0015e998();
LAB_001a0e1c:
    if (*(long *)(lVar3 + 0x28) == local_58) {
      uVar5 = FUN_0015d614();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 001a0cb8 with catch @ 001a0e30
                        */
      FUN_0015e9d0(lVar10);
      FUN_001a0e68(&local_88);
      if (*(long *)(lVar3 + 0x28) == local_58) {
        FUN_00157e74(uVar5);
      }
    }
  }
LAB_001a0e5c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a0e68  FUN_001a0e68 =====

void FUN_001a0e68(undefined8 *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 uStack_49;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar1 = param_1[1];
  lVar4 = param_1[2];
  while (lVar4 != lVar1) {
    uVar2 = *(uint *)(lVar4 + -8);
    lVar5 = lVar4 + -0x30;
    param_1[2] = lVar5;
    if (uVar2 != 0xffffffff) {
                    /* try { // try from 001a0ed4 to 001a0edb has its CatchHandler @ 001a0f1c */
      (*(code *)(&PTR_FUN_001b9458)[uVar2])(&uStack_49);
      lVar5 = param_1[2];
    }
    *(undefined4 *)(lVar4 + -8) = 0xffffffff;
    lVar4 = lVar5;
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a0f20  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<marge...ar,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>&&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,
   0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > 
   >&&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,0ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<marge___ar,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>__>
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


// ===== 001a0f60  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<marge...ar,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>&&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,
   1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > 
   >&&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,1ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<marge___ar,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>__>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = *param_3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return (_func_decltype_auto *)param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a0fa0  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul,2ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<marge...ar,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>&&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul,
   2ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > 
   >&&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<2ul,2ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<marge___ar,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>__>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return (_func_decltype_auto *)param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a0fe0  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<3ul,3ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<marge...ar,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>&&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<3ul,
   3ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > 
   >&&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<3ul,3ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<marge___ar,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>__>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return (_func_decltype_auto *)param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a1020  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<4ul,4ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<marge...ar,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>&&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<4ul,
   4ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > 
   >&&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<4ul,4ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<marge___ar,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>__>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 8);
  uVar3 = *(undefined8 *)param_3;
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(param_2 + 8) = uVar4;
  *(undefined8 *)param_2 = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)(param_3 + 8) = 0;
    *(undefined8 *)(param_3 + 0x10) = 0;
    return (_func_decltype_auto *)param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a1070  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<5ul,5ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<marge...ar,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>&&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<5ul,
   5ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > 
   >&&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<5ul,5ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<marge___ar,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>__>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar3 = *(undefined8 *)param_3;
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)param_2 = uVar3;
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)(param_3 + 8) = 0;
    *(undefined8 *)(param_3 + 0x10) = 0;
    return (_func_decltype_auto *)param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a10c8  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<6ul,6ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<marge...ar,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>&&> =====

/* decltype(auto) std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<6ul,
   6ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > 
   >&&>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > 
   >::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>
   >(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > > >&,
   std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,
   bool, double, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >, (std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&, auto:2&&)#1}&&,
   std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&, std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,
   margelo::nitro::NullType, bool, double, long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<margelo::nitro::AnyValue, std::__ndk1::allocator<margelo::nitro::AnyValue> >,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > >&&) */

_func_decltype_auto *
std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<6ul,6ul>::
__dispatch_abi_ne180000_<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<margelo::nitro::NullType,bool,double,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<margelo::nitro::AnyValue,std::__ndk1::allocator<margelo::nitro::AnyValue>>,std::__ndk1::unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,margelo::nitro::AnyValue,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<marge___ar,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,margelo::nitro::AnyValue>>>>__>
          (_lambda_auto_1__auto_2____1_ *param_1,__base *param_2,__base *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)param_3;
  *(undefined8 *)param_3 = 0;
  *(long *)param_2 = lVar4;
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(param_3 + 8) = 0;
  lVar5 = *(long *)(param_3 + 0x10);
  *(long *)(param_2 + 0x10) = lVar5;
  lVar7 = *(long *)(param_3 + 0x18);
  *(long *)(param_2 + 0x18) = lVar7;
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
  if (lVar7 == 0) {
    if (*(long *)(lVar2 + 0x28) != lVar3) goto LAB_001a117c;
  }
  else {
    uVar8 = *(ulong *)(param_2 + 8);
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
    *(__base **)(lVar4 + uVar6 * 8) = param_2 + 0x10;
    if (*(long *)(lVar2 + 0x28) != lVar3) {
LAB_001a117c:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    *(undefined8 *)(param_3 + 0x10) = 0;
    *(undefined8 *)(param_3 + 0x18) = 0;
  }
  return (_func_decltype_auto *)param_1;
}


// ===== 001a1180  margelo::nitro::JAnyValue::initHybridString =====

/* margelo::nitro::JAnyValue::initHybridString(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
margelo::nitro::JAnyValue::initHybridString(undefined8 *param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *local_50;
  undefined1 uStack_41;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_50 = (undefined8 *)operator_new(0x38);
  bVar1 = *param_3;
  *local_50 = &PTR_FUN_001b9418;
  if ((bVar1 & 1) == 0) {
    uVar5 = *(undefined8 *)param_3;
    uVar4 = *(undefined8 *)(param_3 + 0x10);
    local_50[2] = *(undefined8 *)(param_3 + 8);
    local_50[1] = uVar5;
    local_50[3] = uVar4;
  }
  else {
                    /* try { // try from 001a11e0 to 001a11e3 has its CatchHandler @ 001a1264 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (local_50 + 1),*(char **)(param_3 + 0x10),*(ulong *)(param_3 + 8));
  }
  *(undefined4 *)(local_50 + 6) = 4;
                    /* try { // try from 001a11f0 to 001a11fb has its CatchHandler @ 001a1274 */
  FUN_0019ceb0(&local_40,&local_50);
  puVar3 = local_50;
  local_50 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    if (*(uint *)(puVar3 + 6) != 0xffffffff) {
                    /* try { // try from 001a1220 to 001a122b has its CatchHandler @ 001a1260 */
      (*(code *)(&PTR_FUN_001b9458)[*(uint *)(puVar3 + 6)])(&uStack_41,puVar3 + 1);
    }
    operator_delete(puVar3);
  }
  *param_1 = local_40;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a129c  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>),&margelo::nitro::JAnyMap::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   (*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>),
   &margelo::nitro::JAnyMap::initHybrid,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>>::call(_JNIEnv*, _jobject*) */

undefined8
facebook::jni::detail::
FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>),&margelo::nitro::JAnyMap::initHybrid,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>>
::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  JniEnvCacher aJStack_60 [24];
  undefined8 *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_60,param_1);
                    /* try { // try from 001a12c8 to 001a12cf has its CatchHandler @ 001a13e8 */
  puVar2 = (undefined8 *)operator_new(0x18);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_001b9510;
                    /* try { // try from 001a12e4 to 001a12eb has its CatchHandler @ 001a13d0 */
  puVar3 = (undefined8 *)operator_new(0x28);
  puVar3[4] = 0;
  *(undefined4 *)(puVar3 + 4) = 0x3f800000;
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  local_48 = puVar3;
                    /* try { // try from 001a1308 to 001a130f has its CatchHandler @ 001a13bc */
  puVar4 = (undefined8 *)operator_new(0x20);
  puVar4[2] = 0;
  puVar4[3] = puVar3;
  *puVar4 = &PTR____shared_weak_count_001b9560;
  puVar4[1] = 0;
  puVar2[1] = puVar3;
  puVar2[2] = puVar4;
                    /* try { // try from 001a1328 to 001a1333 has its CatchHandler @ 001a13ac */
  local_48 = puVar2;
  FUN_001a51a0(&local_40,&local_48);
  puVar2 = local_48;
  local_48 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    plVar6 = (long *)puVar2[2];
    if ((plVar6 != (long *)0x0) && (lVar5 = FUN_0015bb40(0xffffffffffffffff,plVar6 + 1), lVar5 == 0)
       ) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    operator_delete(puVar2);
  }
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return local_40;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a143c  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,int),&margelo::nitro::JAnyMap::initHybridPreallocatedSize,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>,int>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   (*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   int), &margelo::nitro::JAnyMap::initHybridPreallocatedSize,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>,
   int>::call(_JNIEnv*, _jobject*, int) */

undefined8
facebook::jni::detail::
FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,int),&margelo::nitro::JAnyMap::initHybridPreallocatedSize,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>,int>
::call(_JNIEnv *param_1,_jobject *param_2,int param_3)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long *plVar4;
  JniEnvCacher aJStack_60 [24];
  void *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_60,param_1);
                    /* try { // try from 001a146c to 001a1473 has its CatchHandler @ 001a1528 */
  pvVar2 = operator_new(0x18);
                    /* try { // try from 001a1474 to 001a147f has its CatchHandler @ 001a1518 */
  FUN_001a5058(pvVar2,param_3);
                    /* try { // try from 001a1484 to 001a148f has its CatchHandler @ 001a1508 */
  local_48 = pvVar2;
  FUN_001a51a0(&local_40,&local_48);
  pvVar2 = local_48;
  local_48 = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    plVar4 = *(long **)((long)pvVar2 + 0x10);
    if ((plVar4 != (long *)0x0) && (lVar3 = FUN_0015bb40(0xffffffffffffffff,plVar4 + 1), lVar3 == 0)
       ) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    operator_delete(pvVar2);
  }
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return local_40;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a157c  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::contains,margelo::nitro::JAnyMap,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::call =====

/* facebook::jni::detail::MethodWrapper<bool
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), &margelo::nitro::JAnyMap::contains,
   margelo::nitro::JAnyMap, bool, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&>::call(_JNIEnv*, _jobject*, _jstring*) */

void facebook::jni::detail::
     MethodWrapper<bool(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::contains,margelo::nitro::JAnyMap,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
     ::call(_JNIEnv *param_1,_jobject *param_2,_jstring *param_3)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_001a4054();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a15bc  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::remove,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::call =====

/* facebook::jni::detail::MethodWrapper<void
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), &margelo::nitro::JAnyMap::remove,
   margelo::nitro::JAnyMap, void, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&>::call(_JNIEnv*, _jobject*, _jstring*) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::remove,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
     ::call(_JNIEnv *param_1,_jobject *param_2,_jstring *param_3)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_001a379c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a15fc  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JAnyMap::*)(),&margelo::nitro::JAnyMap::clear,margelo::nitro::JAnyMap,void>::call =====

/* facebook::jni::detail::MethodWrapper<void (margelo::nitro::JAnyMap::*)(),
   &margelo::nitro::JAnyMap::clear, margelo::nitro::JAnyMap, void>::call(_JNIEnv*, _jobject*) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JAnyMap::*)(),&margelo::nitro::JAnyMap::clear,margelo::nitro::JAnyMap,void>
     ::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  JniEnvCacher aJStack_48 [24];
  _jobject *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_48,param_1);
                    /* try { // try from 001a162c to 001a1633 has its CatchHandler @ 001a165c */
  local_30 = param_2;
  dispatch(&local_30);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a16a4  facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::JString>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyMap::*)(),&margelo::nitro::JAnyMap::getAllKeys,margelo::nitro::JAnyMap,facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::JString>,facebook::jni::LocalReferenceAllocator>>::call =====

/* facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::JString>,
   facebook::jni::LocalReferenceAllocator> (margelo::nitro::JAnyMap::*)(),
   &margelo::nitro::JAnyMap::getAllKeys, margelo::nitro::JAnyMap,
   facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::JString>,
   facebook::jni::LocalReferenceAllocator>>::call(_JNIEnv*, _jobject*) */

undefined8
facebook::jni::detail::
MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::JString>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyMap::*)(),&margelo::nitro::JAnyMap::getAllKeys,margelo::nitro::JAnyMap,facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::JString>,facebook::jni::LocalReferenceAllocator>>
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
                    /* try { // try from 001a16d4 to 001a16df has its CatchHandler @ 001a1710 */
  local_38 = param_2;
  dispatch(&local_30,&local_38);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a175c  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::isNull,margelo::nitro::JAnyMap,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::call =====

/* facebook::jni::detail::MethodWrapper<bool
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), &margelo::nitro::JAnyMap::isNull,
   margelo::nitro::JAnyMap, bool, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&>::call(_JNIEnv*, _jobject*, _jstring*) */

void facebook::jni::detail::
     MethodWrapper<bool(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::isNull,margelo::nitro::JAnyMap,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
     ::call(_JNIEnv *param_1,_jobject *param_2,_jstring *param_3)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_001a4054();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a179c  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::isDouble,margelo::nitro::JAnyMap,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::call =====

/* facebook::jni::detail::MethodWrapper<bool
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), &margelo::nitro::JAnyMap::isDouble,
   margelo::nitro::JAnyMap, bool, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&>::call(_JNIEnv*, _jobject*, _jstring*) */

void facebook::jni::detail::
     MethodWrapper<bool(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::isDouble,margelo::nitro::JAnyMap,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
     ::call(_JNIEnv *param_1,_jobject *param_2,_jstring *param_3)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_001a4054();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a17dc  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::isBoolean,margelo::nitro::JAnyMap,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::call =====

/* facebook::jni::detail::MethodWrapper<bool
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), &margelo::nitro::JAnyMap::isBoolean,
   margelo::nitro::JAnyMap, bool, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&>::call(_JNIEnv*, _jobject*, _jstring*) */

void facebook::jni::detail::
     MethodWrapper<bool(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::isBoolean,margelo::nitro::JAnyMap,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
     ::call(_JNIEnv *param_1,_jobject *param_2,_jstring *param_3)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_001a4054();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a181c  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::isInt64,margelo::nitro::JAnyMap,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::call =====

/* facebook::jni::detail::MethodWrapper<bool
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), &margelo::nitro::JAnyMap::isInt64,
   margelo::nitro::JAnyMap, bool, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&>::call(_JNIEnv*, _jobject*, _jstring*) */

void facebook::jni::detail::
     MethodWrapper<bool(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::isInt64,margelo::nitro::JAnyMap,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
     ::call(_JNIEnv *param_1,_jobject *param_2,_jstring *param_3)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_001a4054();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a185c  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::isString,margelo::nitro::JAnyMap,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::call =====

/* facebook::jni::detail::MethodWrapper<bool
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), &margelo::nitro::JAnyMap::isString,
   margelo::nitro::JAnyMap, bool, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&>::call(_JNIEnv*, _jobject*, _jstring*) */

void facebook::jni::detail::
     MethodWrapper<bool(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::isString,margelo::nitro::JAnyMap,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
     ::call(_JNIEnv *param_1,_jobject *param_2,_jstring *param_3)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_001a4054();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a189c  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::isArray,margelo::nitro::JAnyMap,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::call =====

/* facebook::jni::detail::MethodWrapper<bool
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), &margelo::nitro::JAnyMap::isArray,
   margelo::nitro::JAnyMap, bool, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&>::call(_JNIEnv*, _jobject*, _jstring*) */

void facebook::jni::detail::
     MethodWrapper<bool(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::isArray,margelo::nitro::JAnyMap,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
     ::call(_JNIEnv *param_1,_jobject *param_2,_jstring *param_3)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_001a4054();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a18dc  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::isObject,margelo::nitro::JAnyMap,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::call =====

/* facebook::jni::detail::MethodWrapper<bool
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), &margelo::nitro::JAnyMap::isObject,
   margelo::nitro::JAnyMap, bool, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&>::call(_JNIEnv*, _jobject*, _jstring*) */

void facebook::jni::detail::
     MethodWrapper<bool(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::isObject,margelo::nitro::JAnyMap,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
     ::call(_JNIEnv *param_1,_jobject *param_2,_jstring *param_3)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_001a4054();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a191c  facebook::jni::detail::MethodWrapper<double(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getDouble,margelo::nitro::JAnyMap,double,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::call =====

/* facebook::jni::detail::MethodWrapper<double
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), &margelo::nitro::JAnyMap::getDouble,
   margelo::nitro::JAnyMap, double, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&>::call(_JNIEnv*, _jobject*, _jstring*) */

undefined1  [16]
facebook::jni::detail::
MethodWrapper<double(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getDouble,margelo::nitro::JAnyMap,double,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
::call(_JNIEnv *param_1,_jobject *param_2,_jstring *param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  JniEnvCacher aJStack_78 [24];
  byte local_60 [16];
  void *local_50;
  _jobject *local_48;
  _jstring *p_Stack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_78,param_1);
  local_48 = param_2;
  p_Stack_40 = param_3;
                    /* try { // try from 001a1958 to 001a1963 has its CatchHandler @ 001a19d0 */
  facebook::jni::JString::toStdString();
                    /* try { // try from 001a1964 to 001a196f has its CatchHandler @ 001a19b8 */
  auVar2._0_8_ = dispatch(&local_48,local_60);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    auVar2._8_8_ = 0;
    return auVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a1a24  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getBoolean,margelo::nitro::JAnyMap,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::call =====

/* facebook::jni::detail::MethodWrapper<bool
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), &margelo::nitro::JAnyMap::getBoolean,
   margelo::nitro::JAnyMap, bool, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&>::call(_JNIEnv*, _jobject*, _jstring*) */

void facebook::jni::detail::
     MethodWrapper<bool(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getBoolean,margelo::nitro::JAnyMap,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
     ::call(_JNIEnv *param_1,_jobject *param_2,_jstring *param_3)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_001a4054();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a1a64  facebook::jni::detail::MethodWrapper<long(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getInt64,margelo::nitro::JAnyMap,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::call =====

/* facebook::jni::detail::MethodWrapper<long
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), &margelo::nitro::JAnyMap::getInt64,
   margelo::nitro::JAnyMap, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&>::call(_JNIEnv*, _jobject*, _jstring*) */

undefined8
facebook::jni::detail::
MethodWrapper<long(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getInt64,margelo::nitro::JAnyMap,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
::call(_JNIEnv *param_1,_jobject *param_2,_jstring *param_3)

{
  long lVar1;
  undefined8 uVar2;
  JniEnvCacher aJStack_78 [24];
  byte local_60 [16];
  void *local_50;
  _jobject *local_48;
  _jstring *p_Stack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_78,param_1);
  local_48 = param_2;
  p_Stack_40 = param_3;
                    /* try { // try from 001a1a9c to 001a1aa7 has its CatchHandler @ 001a1b10 */
  facebook::jni::JString::toStdString();
                    /* try { // try from 001a1aa8 to 001a1ab3 has its CatchHandler @ 001a1af8 */
  uVar2 = dispatch(&local_48,local_60);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a1b64  facebook::jni::detail::MethodWrapper<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getString,margelo::nitro::JAnyMap,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::call =====

/* facebook::jni::detail::MethodWrapper<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), &margelo::nitro::JAnyMap::getString,
   margelo::nitro::JAnyMap, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&>::call(_JNIEnv*, _jobject*, _jstring*) */

_jstring *
facebook::jni::detail::
MethodWrapper<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getString,margelo::nitro::JAnyMap,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
::call(_JNIEnv *param_1,_jobject *param_2,_jstring *param_3)

{
  char *pcVar1;
  long lVar2;
  _jstring *p_Var3;
  JniEnvCacher aJStack_90 [24];
  byte local_78 [16];
  void *local_68;
  byte local_60 [16];
  char *local_50;
  _jobject *local_48;
  _jstring *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_90,param_1);
  local_48 = param_2;
  local_40 = param_3;
                    /* try { // try from 001a1b9c to 001a1ba7 has its CatchHandler @ 001a1c5c */
  facebook::jni::JString::toStdString();
                    /* try { // try from 001a1ba8 to 001a1bbb has its CatchHandler @ 001a1c44 */
  dispatch(local_60,&local_48,local_78);
  pcVar1 = (char *)((ulong)local_60 | 1);
  if ((local_60[0] & 1) != 0) {
    pcVar1 = local_50;
  }
                    /* try { // try from 001a1bd0 to 001a1bd7 has its CatchHandler @ 001a1c2c */
  facebook::jni::make_jstring(pcVar1);
  p_Var3 = local_40;
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_90);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return p_Var3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a1cb0  facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getAnyArray,margelo::nitro::JAnyMap,facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::call =====

/* facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   facebook::jni::LocalReferenceAllocator>
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), &margelo::nitro::JAnyMap::getAnyArray,
   margelo::nitro::JAnyMap,
   facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   facebook::jni::LocalReferenceAllocator>, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>::call(_JNIEnv*, _jobject*,
   _jstring*) */

undefined8
facebook::jni::detail::
MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getAnyArray,margelo::nitro::JAnyMap,facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
::call(_JNIEnv *param_1,_jobject *param_2,_jstring *param_3)

{
  long lVar1;
  undefined8 uVar2;
  JniEnvCacher aJStack_80 [24];
  byte local_68 [16];
  void *local_58;
  _jobject *local_50;
  undefined8 local_48;
  _jstring *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_80,param_1);
  local_50 = param_2;
  local_40 = param_3;
                    /* try { // try from 001a1cec to 001a1cf7 has its CatchHandler @ 001a1d68 */
  facebook::jni::JString::toStdString();
                    /* try { // try from 001a1cf8 to 001a1d07 has its CatchHandler @ 001a1d50 */
  dispatch(&local_48,&local_50,local_68);
  uVar2 = local_48;
  local_48 = 0;
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_80);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a1dbc  facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getAnyObject,margelo::nitro::JAnyMap,facebook::jni::basic_strong_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::call =====

/* facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JMap<facebook::jni::JString,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   facebook::jni::LocalReferenceAllocator>
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), &margelo::nitro::JAnyMap::getAnyObject,
   margelo::nitro::JAnyMap,
   facebook::jni::basic_strong_ref<facebook::jni::JMap<facebook::jni::JString,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   facebook::jni::LocalReferenceAllocator>, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>::call(_JNIEnv*, _jobject*,
   _jstring*) */

undefined8
facebook::jni::detail::
MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getAnyObject,margelo::nitro::JAnyMap,facebook::jni::basic_strong_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
::call(_JNIEnv *param_1,_jobject *param_2,_jstring *param_3)

{
  long lVar1;
  undefined8 uVar2;
  JniEnvCacher aJStack_80 [24];
  byte local_68 [16];
  void *local_58;
  _jobject *local_50;
  undefined8 local_48;
  _jstring *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_80,param_1);
  local_50 = param_2;
  local_40 = param_3;
                    /* try { // try from 001a1df8 to 001a1e03 has its CatchHandler @ 001a1e74 */
  facebook::jni::JString::toStdString();
                    /* try { // try from 001a1e04 to 001a1e13 has its CatchHandler @ 001a1e5c */
  dispatch(&local_48,&local_50,local_68);
  uVar2 = local_48;
  local_48 = 0;
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_80);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a1ec8  facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getAnyValue,margelo::nitro::JAnyMap,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::call =====

/* facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), &margelo::nitro::JAnyMap::getAnyValue,
   margelo::nitro::JAnyMap,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>::call(_JNIEnv*, _jobject*,
   _jstring*) */

_jstring *
facebook::jni::detail::
MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getAnyValue,margelo::nitro::JAnyMap,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
::call(_JNIEnv *param_1,_jobject *param_2,_jstring *param_3)

{
  long lVar1;
  _jstring *p_Var2;
  JniEnvCacher aJStack_78 [24];
  byte local_60 [16];
  void *local_50;
  _jobject *local_48;
  _jstring *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_78,param_1);
  local_48 = param_2;
  local_40 = param_3;
                    /* try { // try from 001a1f00 to 001a1f0b has its CatchHandler @ 001a1f7c */
  facebook::jni::JString::toStdString();
                    /* try { // try from 001a1f0c to 001a1f1b has its CatchHandler @ 001a1f64 */
  dispatch(&local_40,&local_48,local_60);
  p_Var2 = local_40;
  local_40 = (_jstring *)0x0;
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return p_Var2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a1fd0  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::setNull,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::call =====

/* facebook::jni::detail::MethodWrapper<void
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), &margelo::nitro::JAnyMap::setNull,
   margelo::nitro::JAnyMap, void, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&>::call(_JNIEnv*, _jobject*, _jstring*) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::setNull,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
     ::call(_JNIEnv *param_1,_jobject *param_2,_jstring *param_3)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_001a379c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a2010  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,double),&margelo::nitro::JAnyMap::setDouble,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,double>::call =====

/* facebook::jni::detail::MethodWrapper<void
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, double), &margelo::nitro::JAnyMap::setDouble,
   margelo::nitro::JAnyMap, void, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, double>::call(_JNIEnv*, _jobject*, _jstring*, double) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,double),&margelo::nitro::JAnyMap::setDouble,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,double>
     ::call(_JNIEnv *param_1,_jobject *param_2,_jstring *param_3,double param_4)

{
  long lVar1;
  JniEnvCacher aJStack_78 [24];
  byte local_60 [16];
  void *local_50;
  _jobject *local_48;
  _jstring *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_78,param_1);
  local_48 = param_2;
  local_40 = param_3;
                    /* try { // try from 001a2050 to 001a205b has its CatchHandler @ 001a20c8 */
  facebook::jni::JString::toStdString();
                    /* try { // try from 001a2060 to 001a206f has its CatchHandler @ 001a20b0 */
  local_40 = (_jstring *)param_4;
  dispatch(&local_48,local_60,&local_40);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a2118  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool),&margelo::nitro::JAnyMap::setBoolean,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool>::call =====

/* facebook::jni::detail::MethodWrapper<void
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, bool), &margelo::nitro::JAnyMap::setBoolean,
   margelo::nitro::JAnyMap, void, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, bool>::call(_JNIEnv*, _jobject*, _jstring*, unsigned char)
    */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool),&margelo::nitro::JAnyMap::setBoolean,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool>
     ::call(_JNIEnv *param_1,_jobject *param_2,_jstring *param_3,uchar param_4)

{
  long lVar1;
  JniEnvCacher aJStack_78 [24];
  byte local_60 [16];
  void *local_50;
  _jobject *local_48;
  _jstring *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_78,param_1);
  local_48 = param_2;
  local_40 = param_3;
                    /* try { // try from 001a2154 to 001a215f has its CatchHandler @ 001a21d0 */
  facebook::jni::JString::toStdString();
  local_40 = (_jstring *)CONCAT71(local_40._1_7_,param_4 != '\0');
                    /* try { // try from 001a216c to 001a217b has its CatchHandler @ 001a21b8 */
  dispatch(&local_48,local_60,&local_40);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a2220  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,long),&margelo::nitro::JAnyMap::setInt64,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,long>::call =====

/* facebook::jni::detail::MethodWrapper<void
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, long), &margelo::nitro::JAnyMap::setInt64,
   margelo::nitro::JAnyMap, void, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, long>::call(_JNIEnv*, _jobject*, _jstring*, long) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,long),&margelo::nitro::JAnyMap::setInt64,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,long>
     ::call(_JNIEnv *param_1,_jobject *param_2,_jstring *param_3,long param_4)

{
  long lVar1;
  JniEnvCacher aJStack_78 [24];
  byte local_60 [16];
  void *local_50;
  _jobject *local_48;
  _jstring *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_78,param_1);
  local_48 = param_2;
  local_40 = param_3;
                    /* try { // try from 001a225c to 001a2267 has its CatchHandler @ 001a22d0 */
  facebook::jni::JString::toStdString();
                    /* try { // try from 001a226c to 001a227b has its CatchHandler @ 001a22b8 */
  local_40 = (_jstring *)param_4;
  dispatch(&local_48,local_60,&local_40);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a2320  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::setString,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::call =====

/* facebook::jni::detail::MethodWrapper<void
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&),
   &margelo::nitro::JAnyMap::setString, margelo::nitro::JAnyMap, void,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&>::call(_JNIEnv*, _jobject*, _jstring*, _jstring*) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::setString,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
     ::call(_JNIEnv *param_1,_jobject *param_2,_jstring *param_3,_jstring *param_4)

{
  long lVar1;
  JniEnvCacher aJStack_90 [24];
  byte local_78 [16];
  void *local_68;
  _jstring *local_60 [2];
  void *local_50;
  _jobject *local_48;
  _jstring *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_90,param_1);
  local_60[0] = param_3;
  local_48 = param_2;
                    /* try { // try from 001a2360 to 001a236b has its CatchHandler @ 001a2408 */
  facebook::jni::JString::toStdString();
  local_40 = param_4;
                    /* try { // try from 001a2370 to 001a237b has its CatchHandler @ 001a23f0 */
  facebook::jni::JString::toStdString();
                    /* try { // try from 001a237c to 001a238b has its CatchHandler @ 001a23d8 */
  dispatch(&local_48,local_78,local_60);
  if (((ulong)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_90);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a2458  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,facebook::jni::alias_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>),&margelo::nitro::JAnyMap::setAnyArray,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,facebook::jni::alias_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>>::call =====

/* facebook::jni::detail::MethodWrapper<void
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&,
   facebook::jni::alias_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>
   >), &margelo::nitro::JAnyMap::setAnyArray, margelo::nitro::JAnyMap, void,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&,
   facebook::jni::alias_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*> >
   >::call(_JNIEnv*, _jobject*, _jstring*,
   facebook::jni::detail::JTypeFor<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   facebook::jni::detail::JTypeArray, void>::_javaobject*) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,facebook::jni::alias_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>),&margelo::nitro::JAnyMap::setAnyArray,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,facebook::jni::alias_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>>
     ::call(_JNIEnv *param_1,_jobject *param_2,_jstring *param_3,_javaobject *param_4)

{
  long lVar1;
  JniEnvCacher aJStack_78 [24];
  byte local_60 [16];
  void *local_50;
  _jobject *local_48;
  _jstring *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_78,param_1);
  local_48 = param_2;
  local_40 = param_3;
                    /* try { // try from 001a2494 to 001a249f has its CatchHandler @ 001a2508 */
  facebook::jni::JString::toStdString();
                    /* try { // try from 001a24a4 to 001a24b3 has its CatchHandler @ 001a24f0 */
  local_40 = (_jstring *)param_4;
  dispatch(&local_48,local_60,&local_40);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a2558  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,facebook::jni::alias_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>const&),&margelo::nitro::JAnyMap::setAnyObject,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,facebook::jni::alias_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>const&>::call =====

/* facebook::jni::detail::MethodWrapper<void
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&,
   facebook::jni::alias_ref<facebook::jni::JMap<facebook::jni::JString,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*> >
   const&), &margelo::nitro::JAnyMap::setAnyObject, margelo::nitro::JAnyMap, void,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, facebook::jni::alias_ref<facebook::jni::JMap<facebook::jni::JString,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*> >
   const&>::call(_JNIEnv*, _jobject*, _jstring*,
   facebook::jni::detail::JTypeFor<facebook::jni::JMap<facebook::jni::JString,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   facebook::jni::JObject, void>::_javaobject*) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,facebook::jni::alias_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>const&),&margelo::nitro::JAnyMap::setAnyObject,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,facebook::jni::alias_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>const&>
     ::call(_JNIEnv *param_1,_jobject *param_2,_jstring *param_3,_javaobject *param_4)

{
  long lVar1;
  JniEnvCacher aJStack_78 [24];
  byte local_60 [16];
  void *local_50;
  _jobject *local_48;
  _jstring *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_78,param_1);
  local_48 = param_2;
  local_40 = param_3;
                    /* try { // try from 001a2594 to 001a259f has its CatchHandler @ 001a2608 */
  facebook::jni::JString::toStdString();
                    /* try { // try from 001a25a4 to 001a25b3 has its CatchHandler @ 001a25f0 */
  local_40 = (_jstring *)param_4;
  dispatch(&local_48,local_60,&local_40);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a2658  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>const&),&margelo::nitro::JAnyMap::setAnyValue,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>const&>::call =====

/* facebook::jni::detail::MethodWrapper<void
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&,
   facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>
   const&), &margelo::nitro::JAnyMap::setAnyValue, margelo::nitro::JAnyMap, void,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&,
   facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>
   const&>::call(_JNIEnv*, _jobject*, _jstring*,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*)
    */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>const&),&margelo::nitro::JAnyMap::setAnyValue,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>const&>
     ::call(_JNIEnv *param_1,_jobject *param_2,_jstring *param_3,_javaobject *param_4)

{
  long lVar1;
  JniEnvCacher aJStack_78 [24];
  byte local_60 [16];
  void *local_50;
  _jobject *local_48;
  _jstring *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_78,param_1);
  local_48 = param_2;
  local_40 = param_3;
                    /* try { // try from 001a2694 to 001a269f has its CatchHandler @ 001a2708 */
  facebook::jni::JString::toStdString();
                    /* try { // try from 001a26a4 to 001a26b3 has its CatchHandler @ 001a26f0 */
  local_40 = (_jstring *)param_4;
  dispatch(&local_48,local_60,&local_40);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a2758  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JAnyMap::*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>),&margelo::nitro::JAnyMap::merge,margelo::nitro::JAnyMap,void,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>::call =====

/* facebook::jni::detail::MethodWrapper<void
   (margelo::nitro::JAnyMap::*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>),
   &margelo::nitro::JAnyMap::merge, margelo::nitro::JAnyMap, void,
   facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>
   >::call(_JNIEnv*, _jobject*,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*)
    */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JAnyMap::*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>),&margelo::nitro::JAnyMap::merge,margelo::nitro::JAnyMap,void,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>
     ::call(_JNIEnv *param_1,_jobject *param_2,_javaobject *param_3)

{
  long lVar1;
  JniEnvCacher aJStack_60 [24];
  _javaobject *local_48;
  _jobject *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_60,param_1);
                    /* try { // try from 001a2794 to 001a279f has its CatchHandler @ 001a27cc */
  local_48 = param_3;
  local_40 = param_2;
  dispatch(&local_40,&local_48);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a2814  facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JHashMap<facebook::jni::JString,facebook::jni::JObject>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyMap::*)(),&margelo::nitro::JAnyMap::toHashMap,margelo::nitro::JAnyMap,facebook::jni::basic_strong_ref<facebook::jni::JHashMap<facebook::jni::JString,facebook::jni::JObject>,facebook::jni::LocalReferenceAllocator>>::call =====

/* facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JHashMap<facebook::jni::JString,
   facebook::jni::JObject>, facebook::jni::LocalReferenceAllocator> (margelo::nitro::JAnyMap::*)(),
   &margelo::nitro::JAnyMap::toHashMap, margelo::nitro::JAnyMap,
   facebook::jni::basic_strong_ref<facebook::jni::JHashMap<facebook::jni::JString,
   facebook::jni::JObject>, facebook::jni::LocalReferenceAllocator>>::call(_JNIEnv*, _jobject*) */

undefined8
facebook::jni::detail::
MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JHashMap<facebook::jni::JString,facebook::jni::JObject>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyMap::*)(),&margelo::nitro::JAnyMap::toHashMap,margelo::nitro::JAnyMap,facebook::jni::basic_strong_ref<facebook::jni::JHashMap<facebook::jni::JString,facebook::jni::JObject>,facebook::jni::LocalReferenceAllocator>>
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
                    /* try { // try from 001a2844 to 001a284f has its CatchHandler @ 001a2880 */
  local_38 = param_2;
  dispatch(&local_30,&local_38);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a28cc  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<_jclass*>,facebook::jni::alias_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::JObject>>,bool),&margelo::nitro::JAnyMap::fromMap,_jclass*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>,facebook::jni::alias_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::JObject>>,bool>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator> (*)(facebook::jni::alias_ref<_jclass*>,
   facebook::jni::alias_ref<facebook::jni::JMap<facebook::jni::JString, facebook::jni::JObject> >,
   bool), &margelo::nitro::JAnyMap::fromMap, _jclass*,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>,
   facebook::jni::alias_ref<facebook::jni::JMap<facebook::jni::JString, facebook::jni::JObject> >,
   bool>::call(_JNIEnv*, _jobject*,
   facebook::jni::detail::JTypeFor<facebook::jni::JMap<facebook::jni::JString,
   facebook::jni::JObject>, facebook::jni::JObject, void>::_javaobject*, unsigned char) */

undefined8
facebook::jni::detail::
FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<_jclass*>,facebook::jni::alias_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::JObject>>,bool),&margelo::nitro::JAnyMap::fromMap,_jclass*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>,facebook::jni::alias_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::JObject>>,bool>
::call(_JNIEnv *param_1,_jobject *param_2,_javaobject *param_3,uchar param_4)

{
  long lVar1;
  undefined8 uVar2;
  JniEnvCacher aJStack_60 [24];
  _javaobject *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_60,param_1);
                    /* try { // try from 001a290c to 001a2917 has its CatchHandler @ 001a294c */
  local_48 = param_3;
  margelo::nitro::JAnyMap::fromMap(&local_40,uVar2,&local_48,param_4 != '\0');
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return local_40;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a2998  facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JHashMap<facebook::jni::JString,facebook::jni::JObject>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyMap::*)(),&margelo::nitro::JAnyMap::toHashMap,margelo::nitro::JAnyMap,facebook::jni::basic_strong_ref<facebook::jni::JHashMap<facebook::jni::JString,facebook::jni::JObject>,facebook::jni::LocalReferenceAllocator>>::dispatch =====

/* facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JHashMap<facebook::jni::JString,
   facebook::jni::JObject>, facebook::jni::LocalReferenceAllocator> (margelo::nitro::JAnyMap::*)(),
   &margelo::nitro::JAnyMap::toHashMap, margelo::nitro::JAnyMap,
   facebook::jni::basic_strong_ref<facebook::jni::JHashMap<facebook::jni::JString,
   facebook::jni::JObject>,
   facebook::jni::LocalReferenceAllocator>>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>)
    */

void facebook::jni::detail::
     MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JHashMap<facebook::jni::JString,facebook::jni::JObject>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyMap::*)(),&margelo::nitro::JAnyMap::toHashMap,margelo::nitro::JAnyMap,facebook::jni::basic_strong_ref<facebook::jni::JHashMap<facebook::jni::JString,facebook::jni::JObject>,facebook::jni::LocalReferenceAllocator>>
     ::dispatch(JObject *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*PTR_hybridDataField_001ba328 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba328);
    if (iVar2 != 0) {
      JObject::getClass();
                    /* try { // try from 001a2a28 to 001a2a2b has its CatchHandler @ 001a2a54 */
      uVar3 = FUN_001a2ac8(local_30);
      *(undefined8 *)PTR_hybridDataField_001ba320 = uVar3;
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                 &local_30);
      __cxa_guard_release(PTR_hybridDataField_001ba328);
    }
  }
                    /* try { // try from 001a29c8 to 001a29db has its CatchHandler @ 001a2a70 */
  getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba320);
  margelo::nitro::JAnyMap::toHashMap();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a2ac8  FUN_001a2ac8 =====

void FUN_001a2ac8(undefined8 param_1)

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
    if (((*PTR_cls_001ba338 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_cls_001ba338), iVar2 != 0)) {
                    /* try { // try from 001a2b84 to 001a2b97 has its CatchHandler @ 001a2bbc */
      facebook::jni::findClassStatic(PTR_kBaseName_001ba340);
      __cxa_guard_release(PTR_cls_001ba338);
    }
    uVar6 = *(undefined8 *)PTR_cls_001ba330;
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar4 = (**(code **)(*plVar5 + 0x2f0))(plVar5,uVar6,"mHybridData",PTR_kDescriptor_001ba2f0);
    facebook::jni::throwCppExceptionIf(lVar4 == 0);
    if (lVar4 == 0) {
      if (*(long *)(lVar1 + 0x28) == local_28) {
        uVar6 = facebook::jni::throwNPE();
                    /* catch() { ... } // from try @ 001a2b84 with catch @ 001a2bbc */
        lVar4 = __cxa_guard_abort(PTR_cls_001ba338);
        if (*(long *)(lVar1 + 0x28) == local_28) {
          lVar4 = FUN_00157e74(uVar6);
        }
      }
      goto LAB_001a2be4;
    }
  }
  else {
    lVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
LAB_001a2be4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


// ===== 001a2be8  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JAnyMap::*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>),&margelo::nitro::JAnyMap::merge,margelo::nitro::JAnyMap,void,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>::dispatch =====

/* facebook::jni::detail::MethodWrapper<void
   (margelo::nitro::JAnyMap::*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>),
   &margelo::nitro::JAnyMap::merge, margelo::nitro::JAnyMap, void,
   facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>
   >::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject,
   void>::_javaobject*>&&) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JAnyMap::*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>),&margelo::nitro::JAnyMap::merge,margelo::nitro::JAnyMap,void,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>
     ::dispatch(JObject *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  AnyMap *this;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  puVar3 = PTR_hybridDataField_001ba328;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_hybridDataField_001ba328 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_001ba328), iVar4 != 0)) {
    JObject::getClass();
                    /* try { // try from 001a2cac to 001a2caf has its CatchHandler @ 001a2d1c */
    uVar6 = FUN_001a2ac8(local_40);
    *(undefined8 *)PTR_hybridDataField_001ba320 = uVar6;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
               &local_40);
    __cxa_guard_release(PTR_hybridDataField_001ba328);
  }
                    /* try { // try from 001a2c1c to 001a2c5b has its CatchHandler @ 001a2d38 */
  puVar2 = PTR_hybridDataField_001ba320;
  lVar5 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba320);
  local_48 = *param_2;
  this = *(AnyMap **)(lVar5 + 8);
  if (((*puVar3 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_hybridDataField_001ba328), iVar4 != 0)) {
    JObject::getClass();
                    /* try { // try from 001a2cf8 to 001a2cfb has its CatchHandler @ 001a2d18 */
    uVar6 = FUN_001a2ac8(local_40);
    *(undefined8 *)puVar2 = uVar6;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
               &local_40);
    __cxa_guard_release(PTR_hybridDataField_001ba328);
  }
  lVar5 = getHybridDataFromField((JObject *)&local_48,(JField *)PTR_hybridDataField_001ba320);
  margelo::nitro::AnyMap::merge(this,(shared_ptr *)(lVar5 + 8));
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a2d90  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>const&),&margelo::nitro::JAnyMap::setAnyValue,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>const&>::dispatch =====

/* facebook::jni::detail::MethodWrapper<void
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&,
   facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>
   const&), &margelo::nitro::JAnyMap::setAnyValue, margelo::nitro::JAnyMap, void,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&,
   facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>
   const&>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&,
   facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>
   const&) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>const&),&margelo::nitro::JAnyMap::setAnyValue,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>const&>
     ::dispatch(JObject *param_1,basic_string *param_2,alias_ref *param_3)

{
  long lVar1;
  int iVar2;
  JAnyMap *this;
  undefined8 uVar3;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*PTR_hybridDataField_001ba328 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba328);
    if (iVar2 != 0) {
      JObject::getClass();
                    /* try { // try from 001a2e30 to 001a2e33 has its CatchHandler @ 001a2e5c */
      uVar3 = FUN_001a2ac8(local_40);
      *(undefined8 *)PTR_hybridDataField_001ba320 = uVar3;
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                 &local_40);
      __cxa_guard_release(PTR_hybridDataField_001ba328);
    }
  }
                    /* try { // try from 001a2dc8 to 001a2ddf has its CatchHandler @ 001a2e78 */
  this = (JAnyMap *)getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba320);
  margelo::nitro::JAnyMap::setAnyValue(this,param_2,param_3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a2ed0  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,facebook::jni::alias_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>const&),&margelo::nitro::JAnyMap::setAnyObject,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,facebook::jni::alias_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>const&>::dispatch =====

/* facebook::jni::detail::MethodWrapper<void
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&,
   facebook::jni::alias_ref<facebook::jni::JMap<facebook::jni::JString,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*> >
   const&), &margelo::nitro::JAnyMap::setAnyObject, margelo::nitro::JAnyMap, void,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, facebook::jni::alias_ref<facebook::jni::JMap<facebook::jni::JString,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*> >
   const&>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, facebook::jni::alias_ref<facebook::jni::JMap<facebook::jni::JString,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*> >
   const&) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,facebook::jni::alias_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>const&),&margelo::nitro::JAnyMap::setAnyObject,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,facebook::jni::alias_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>const&>
     ::dispatch(JObject *param_1,basic_string *param_2,alias_ref *param_3)

{
  long lVar1;
  int iVar2;
  JAnyMap *this;
  undefined8 uVar3;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*PTR_hybridDataField_001ba328 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba328);
    if (iVar2 != 0) {
      JObject::getClass();
                    /* try { // try from 001a2f70 to 001a2f73 has its CatchHandler @ 001a2f9c */
      uVar3 = FUN_001a2ac8(local_40);
      *(undefined8 *)PTR_hybridDataField_001ba320 = uVar3;
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                 &local_40);
      __cxa_guard_release(PTR_hybridDataField_001ba328);
    }
  }
                    /* try { // try from 001a2f08 to 001a2f1f has its CatchHandler @ 001a2fb8 */
  this = (JAnyMap *)getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba320);
  margelo::nitro::JAnyMap::setAnyObject(this,param_2,param_3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a3010  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,facebook::jni::alias_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>),&margelo::nitro::JAnyMap::setAnyArray,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,facebook::jni::alias_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>>::dispatch =====

/* facebook::jni::detail::MethodWrapper<void
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&,
   facebook::jni::alias_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>
   >), &margelo::nitro::JAnyMap::setAnyArray, margelo::nitro::JAnyMap, void,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&,
   facebook::jni::alias_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*> >
   >::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&,
   facebook::jni::alias_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>
   >&&) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,facebook::jni::alias_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>),&margelo::nitro::JAnyMap::setAnyArray,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,facebook::jni::alias_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>>>
     ::dispatch(JObject *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  JAnyMap *pJVar3;
  undefined8 uVar4;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*PTR_hybridDataField_001ba328 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba328);
    if (iVar2 != 0) {
      JObject::getClass();
                    /* try { // try from 001a30b8 to 001a30bb has its CatchHandler @ 001a30e4 */
      uVar4 = FUN_001a2ac8(local_40);
      *(undefined8 *)PTR_hybridDataField_001ba320 = uVar4;
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                 &local_40);
      __cxa_guard_release(PTR_hybridDataField_001ba328);
    }
  }
                    /* try { // try from 001a3048 to 001a3067 has its CatchHandler @ 001a3100 */
  pJVar3 = (JAnyMap *)getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba320);
  local_48 = *param_3;
  margelo::nitro::JAnyMap::setAnyArray(pJVar3,param_2,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a3158  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::setString,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::dispatch =====

/* facebook::jni::detail::MethodWrapper<void
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&),
   &margelo::nitro::JAnyMap::setString, margelo::nitro::JAnyMap, void,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >
   const&>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::setString,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
     ::dispatch(JObject *param_1,basic_string *param_2,basic_string *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*PTR_hybridDataField_001ba328 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba328);
    if (iVar2 != 0) {
      JObject::getClass();
                    /* try { // try from 001a31fc to 001a31ff has its CatchHandler @ 001a3228 */
      uVar4 = FUN_001a2ac8(local_40);
      *(undefined8 *)PTR_hybridDataField_001ba320 = uVar4;
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                 &local_40);
      __cxa_guard_release(PTR_hybridDataField_001ba328);
    }
  }
                    /* try { // try from 001a3190 to 001a31ab has its CatchHandler @ 001a3244 */
  lVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba320);
  margelo::nitro::AnyMap::setString(*(AnyMap **)(lVar3 + 8),param_2,param_3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a329c  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,long),&margelo::nitro::JAnyMap::setInt64,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,long>::dispatch =====

/* facebook::jni::detail::MethodWrapper<void
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, long), &margelo::nitro::JAnyMap::setInt64,
   margelo::nitro::JAnyMap, void, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&,
   long>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, long&&) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,long),&margelo::nitro::JAnyMap::setInt64,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,long>
     ::dispatch(JObject *param_1,basic_string *param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*PTR_hybridDataField_001ba328 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba328);
    if (iVar2 != 0) {
      JObject::getClass();
                    /* try { // try from 001a3340 to 001a3343 has its CatchHandler @ 001a336c */
      uVar4 = FUN_001a2ac8(local_40);
      *(undefined8 *)PTR_hybridDataField_001ba320 = uVar4;
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                 &local_40);
      __cxa_guard_release(PTR_hybridDataField_001ba328);
    }
  }
                    /* try { // try from 001a32d4 to 001a32ef has its CatchHandler @ 001a3388 */
  lVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba320);
  margelo::nitro::AnyMap::setInt64(*(AnyMap **)(lVar3 + 8),param_2,*param_3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a33e0  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool),&margelo::nitro::JAnyMap::setBoolean,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool>::dispatch =====

/* facebook::jni::detail::MethodWrapper<void
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, bool), &margelo::nitro::JAnyMap::setBoolean,
   margelo::nitro::JAnyMap, void, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&,
   bool>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, bool&&) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool),&margelo::nitro::JAnyMap::setBoolean,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,bool>
     ::dispatch(JObject *param_1,basic_string *param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*PTR_hybridDataField_001ba328 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba328);
    if (iVar2 != 0) {
      JObject::getClass();
                    /* try { // try from 001a3484 to 001a3487 has its CatchHandler @ 001a34b0 */
      uVar4 = FUN_001a2ac8(local_40);
      *(undefined8 *)PTR_hybridDataField_001ba320 = uVar4;
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                 &local_40);
      __cxa_guard_release(PTR_hybridDataField_001ba328);
    }
  }
                    /* try { // try from 001a3418 to 001a3433 has its CatchHandler @ 001a34cc */
  lVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba320);
  margelo::nitro::AnyMap::setBoolean(*(AnyMap **)(lVar3 + 8),param_2,*(bool *)param_3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a3524  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,double),&margelo::nitro::JAnyMap::setDouble,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,double>::dispatch =====

/* facebook::jni::detail::MethodWrapper<void
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, double), &margelo::nitro::JAnyMap::setDouble,
   margelo::nitro::JAnyMap, void, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&,
   double>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, double&&) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,double),&margelo::nitro::JAnyMap::setDouble,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,double>
     ::dispatch(JObject *param_1,basic_string *param_2,double *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*PTR_hybridDataField_001ba328 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba328);
    if (iVar2 != 0) {
      JObject::getClass();
                    /* try { // try from 001a35c8 to 001a35cb has its CatchHandler @ 001a35f4 */
      uVar4 = FUN_001a2ac8(local_40);
      *(undefined8 *)PTR_hybridDataField_001ba320 = uVar4;
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                 &local_40);
      __cxa_guard_release(PTR_hybridDataField_001ba328);
    }
  }
                    /* try { // try from 001a355c to 001a3577 has its CatchHandler @ 001a3610 */
  lVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba320);
  margelo::nitro::AnyMap::setDouble(*(AnyMap **)(lVar3 + 8),param_2,*param_3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a3668  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::setNull,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::dispatch =====

/* facebook::jni::detail::MethodWrapper<void
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), &margelo::nitro::JAnyMap::setNull,
   margelo::nitro::JAnyMap, void, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >
   const&>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::setNull,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
     ::dispatch(JObject *param_1,basic_string *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*PTR_hybridDataField_001ba328 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba328);
    if (iVar2 != 0) {
      JObject::getClass();
                    /* try { // try from 001a36fc to 001a36ff has its CatchHandler @ 001a3728 */
      uVar4 = FUN_001a2ac8(local_30);
      *(undefined8 *)PTR_hybridDataField_001ba320 = uVar4;
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                 &local_30);
      __cxa_guard_release(PTR_hybridDataField_001ba328);
    }
  }
                    /* try { // try from 001a3698 to 001a36af has its CatchHandler @ 001a3744 */
  lVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba320);
  margelo::nitro::AnyMap::setNull(*(AnyMap **)(lVar3 + 8),param_2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a379c  FUN_001a379c =====

void FUN_001a379c(_JNIEnv *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  long lVar1;
  JniEnvCacher aJStack_78 [24];
  byte local_60 [16];
  void *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_78,param_1);
  local_48 = param_2;
  uStack_40 = param_3;
                    /* try { // try from 001a37d8 to 001a37e3 has its CatchHandler @ 001a3844 */
  facebook::jni::JString::toStdString();
                    /* try { // try from 001a37e4 to 001a37ef has its CatchHandler @ 001a382c */
  (*param_4)(&local_48,local_60);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a3894  facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getAnyValue,margelo::nitro::JAnyMap,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::dispatch =====

/* facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), &margelo::nitro::JAnyMap::getAnyValue,
   margelo::nitro::JAnyMap,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void facebook::jni::detail::
     MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getAnyValue,margelo::nitro::JAnyMap,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
     ::dispatch(undefined8 *param_1,JObject *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_70 [5];
  uint local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*PTR_hybridDataField_001ba328 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba328);
    if (iVar2 != 0) {
      JObject::getClass();
                    /* try { // try from 001a3970 to 001a3973 has its CatchHandler @ 001a399c */
      uVar4 = FUN_001a2ac8(local_70[0]);
      *(undefined8 *)PTR_hybridDataField_001ba320 = uVar4;
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                 local_70);
      __cxa_guard_release(PTR_hybridDataField_001ba328);
    }
  }
                    /* try { // try from 001a38cc to 001a38e7 has its CatchHandler @ 001a39cc */
  lVar3 = getHybridDataFromField(param_2,(JField *)PTR_hybridDataField_001ba320);
  margelo::nitro::AnyMap::getAny(*(basic_string **)(lVar3 + 8));
                    /* try { // try from 001a38e8 to 001a38f3 has its CatchHandler @ 001a39bc */
  FUN_0019c2e4(&local_40,local_70);
  *param_1 = local_40;
  if (local_48 != 0xffffffff) {
                    /* try { // try from 001a3914 to 001a391f has its CatchHandler @ 001a39b8 */
    (*(code *)(&PTR_FUN_001b9458)[local_48])(&local_40,local_70);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a3a24  facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getAnyObject,margelo::nitro::JAnyMap,facebook::jni::basic_strong_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::dispatch =====

/* facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JMap<facebook::jni::JString,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   facebook::jni::LocalReferenceAllocator>
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), &margelo::nitro::JAnyMap::getAnyObject,
   margelo::nitro::JAnyMap,
   facebook::jni::basic_strong_ref<facebook::jni::JMap<facebook::jni::JString,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   facebook::jni::LocalReferenceAllocator>, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void facebook::jni::detail::
     MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getAnyObject,margelo::nitro::JAnyMap,facebook::jni::basic_strong_ref<facebook::jni::JMap<facebook::jni::JString,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
     ::dispatch(JObject *param_1,basic_string *param_2)

{
  long lVar1;
  int iVar2;
  JAnyMap *this;
  undefined8 uVar3;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*PTR_hybridDataField_001ba328 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba328);
    if (iVar2 != 0) {
      JObject::getClass();
                    /* try { // try from 001a3ac4 to 001a3ac7 has its CatchHandler @ 001a3af0 */
      uVar3 = FUN_001a2ac8(local_40);
      *(undefined8 *)PTR_hybridDataField_001ba320 = uVar3;
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                 &local_40);
      __cxa_guard_release(PTR_hybridDataField_001ba328);
    }
  }
                    /* try { // try from 001a3a5c to 001a3a73 has its CatchHandler @ 001a3b0c */
  this = (JAnyMap *)getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba320);
  margelo::nitro::JAnyMap::getAnyObject(this,param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a3b64  facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getAnyArray,margelo::nitro::JAnyMap,facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::dispatch =====

/* facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   facebook::jni::LocalReferenceAllocator>
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), &margelo::nitro::JAnyMap::getAnyArray,
   margelo::nitro::JAnyMap,
   facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   facebook::jni::LocalReferenceAllocator>, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void facebook::jni::detail::
     MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getAnyArray,margelo::nitro::JAnyMap,facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::LocalReferenceAllocator>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
     ::dispatch(JObject *param_1,basic_string *param_2)

{
  long lVar1;
  int iVar2;
  JAnyMap *this;
  undefined8 uVar3;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*PTR_hybridDataField_001ba328 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba328);
    if (iVar2 != 0) {
      JObject::getClass();
                    /* try { // try from 001a3c04 to 001a3c07 has its CatchHandler @ 001a3c30 */
      uVar3 = FUN_001a2ac8(local_40);
      *(undefined8 *)PTR_hybridDataField_001ba320 = uVar3;
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                 &local_40);
      __cxa_guard_release(PTR_hybridDataField_001ba328);
    }
  }
                    /* try { // try from 001a3b9c to 001a3bb3 has its CatchHandler @ 001a3c4c */
  this = (JAnyMap *)getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba320);
  margelo::nitro::JAnyMap::getAnyArray(this,param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a3ca4  facebook::jni::detail::MethodWrapper<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getString,margelo::nitro::JAnyMap,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::dispatch =====

/* facebook::jni::detail::MethodWrapper<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), &margelo::nitro::JAnyMap::getString,
   margelo::nitro::JAnyMap, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >
   const&>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void facebook::jni::detail::
     MethodWrapper<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getString,margelo::nitro::JAnyMap,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
     ::dispatch(JObject *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*PTR_hybridDataField_001ba328 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba328);
    if (iVar2 != 0) {
      JObject::getClass();
                    /* try { // try from 001a3d48 to 001a3d4b has its CatchHandler @ 001a3d74 */
      uVar4 = FUN_001a2ac8(local_40);
      *(undefined8 *)PTR_hybridDataField_001ba320 = uVar4;
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                 &local_40);
      __cxa_guard_release(PTR_hybridDataField_001ba328);
    }
  }
                    /* try { // try from 001a3cdc to 001a3cf7 has its CatchHandler @ 001a3d90 */
  lVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba320);
  margelo::nitro::AnyMap::getString(*(basic_string **)(lVar3 + 8));
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a3de8  facebook::jni::detail::MethodWrapper<long(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getInt64,margelo::nitro::JAnyMap,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::dispatch =====

/* facebook::jni::detail::MethodWrapper<long
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), &margelo::nitro::JAnyMap::getInt64,
   margelo::nitro::JAnyMap, long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >
   const&>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void facebook::jni::detail::
     MethodWrapper<long(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getInt64,margelo::nitro::JAnyMap,long,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
     ::dispatch(JObject *param_1,basic_string *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*PTR_hybridDataField_001ba328 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba328);
    if (iVar2 != 0) {
      JObject::getClass();
                    /* try { // try from 001a3e7c to 001a3e7f has its CatchHandler @ 001a3ea8 */
      uVar4 = FUN_001a2ac8(local_30);
      *(undefined8 *)PTR_hybridDataField_001ba320 = uVar4;
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                 &local_30);
      __cxa_guard_release(PTR_hybridDataField_001ba328);
    }
  }
                    /* try { // try from 001a3e18 to 001a3e2f has its CatchHandler @ 001a3ec4 */
  lVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba320);
  margelo::nitro::AnyMap::getInt64(*(AnyMap **)(lVar3 + 8),param_2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a3f1c  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getBoolean,margelo::nitro::JAnyMap,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::dispatch =====

/* facebook::jni::detail::MethodWrapper<bool
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), &margelo::nitro::JAnyMap::getBoolean,
   margelo::nitro::JAnyMap, bool, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >
   const&>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

uint facebook::jni::detail::
     MethodWrapper<bool(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getBoolean,margelo::nitro::JAnyMap,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
     ::dispatch(JObject *param_1,basic_string *param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*PTR_hybridDataField_001ba328 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_hybridDataField_001ba328);
    if (iVar3 != 0) {
      JObject::getClass();
                    /* try { // try from 001a3fb4 to 001a3fb7 has its CatchHandler @ 001a3fe0 */
      uVar5 = FUN_001a2ac8(local_30);
      *(undefined8 *)PTR_hybridDataField_001ba320 = uVar5;
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                 &local_30);
      __cxa_guard_release(PTR_hybridDataField_001ba328);
    }
  }
                    /* try { // try from 001a3f4c to 001a3f63 has its CatchHandler @ 001a3ffc */
  lVar4 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba320);
  uVar2 = margelo::nitro::AnyMap::getBoolean(*(AnyMap **)(lVar4 + 8),param_2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a4054  FUN_001a4054 =====

uint FUN_001a4054(_JNIEnv *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  long lVar1;
  uint uVar2;
  JniEnvCacher aJStack_78 [24];
  byte local_60 [16];
  void *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_78,param_1);
  local_48 = param_2;
  uStack_40 = param_3;
                    /* try { // try from 001a4090 to 001a409b has its CatchHandler @ 001a4108 */
  facebook::jni::JString::toStdString();
                    /* try { // try from 001a409c to 001a40a7 has its CatchHandler @ 001a40f0 */
  uVar2 = (*param_4)(&local_48,local_60);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a415c  facebook::jni::detail::MethodWrapper<double(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getDouble,margelo::nitro::JAnyMap,double,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::dispatch =====

/* facebook::jni::detail::MethodWrapper<double
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), &margelo::nitro::JAnyMap::getDouble,
   margelo::nitro::JAnyMap, double, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >
   const&>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void facebook::jni::detail::
     MethodWrapper<double(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::getDouble,margelo::nitro::JAnyMap,double,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
     ::dispatch(JObject *param_1,basic_string *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*PTR_hybridDataField_001ba328 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba328);
    if (iVar2 != 0) {
      JObject::getClass();
                    /* try { // try from 001a41f0 to 001a41f3 has its CatchHandler @ 001a421c */
      uVar4 = FUN_001a2ac8(local_30);
      *(undefined8 *)PTR_hybridDataField_001ba320 = uVar4;
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                 &local_30);
      __cxa_guard_release(PTR_hybridDataField_001ba328);
    }
  }
                    /* try { // try from 001a418c to 001a41a3 has its CatchHandler @ 001a4238 */
  lVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba320);
  margelo::nitro::AnyMap::getDouble(*(AnyMap **)(lVar3 + 8),param_2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a4290  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::isObject,margelo::nitro::JAnyMap,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::dispatch =====

/* facebook::jni::detail::MethodWrapper<bool
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), &margelo::nitro::JAnyMap::isObject,
   margelo::nitro::JAnyMap, bool, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >
   const&>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void facebook::jni::detail::
     MethodWrapper<bool(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::isObject,margelo::nitro::JAnyMap,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
     ::dispatch(JObject *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*PTR_hybridDataField_001ba328 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba328);
    if (iVar2 != 0) {
      JObject::getClass();
                    /* try { // try from 001a4338 to 001a433b has its CatchHandler @ 001a4364 */
      uVar5 = FUN_001a2ac8(local_30);
      *(undefined8 *)PTR_hybridDataField_001ba320 = uVar5;
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                 &local_30);
      __cxa_guard_release(PTR_hybridDataField_001ba328);
    }
  }
                    /* try { // try from 001a42c0 to 001a42cb has its CatchHandler @ 001a4380 */
  lVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba320);
  uVar4 = FUN_0015c2b8(**(undefined8 **)(lVar3 + 8),(*(undefined8 **)(lVar3 + 8))[1],param_2);
  if (uVar4 != 0) {
    uVar4 = (ulong)(*(int *)(uVar4 + 0x50) == 6);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 001a43d8  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::isArray,margelo::nitro::JAnyMap,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::dispatch =====

/* facebook::jni::detail::MethodWrapper<bool
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), &margelo::nitro::JAnyMap::isArray,
   margelo::nitro::JAnyMap, bool, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >
   const&>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void facebook::jni::detail::
     MethodWrapper<bool(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::isArray,margelo::nitro::JAnyMap,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
     ::dispatch(JObject *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*PTR_hybridDataField_001ba328 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba328);
    if (iVar2 != 0) {
      JObject::getClass();
                    /* try { // try from 001a4480 to 001a4483 has its CatchHandler @ 001a44ac */
      uVar5 = FUN_001a2ac8(local_30);
      *(undefined8 *)PTR_hybridDataField_001ba320 = uVar5;
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                 &local_30);
      __cxa_guard_release(PTR_hybridDataField_001ba328);
    }
  }
                    /* try { // try from 001a4408 to 001a4413 has its CatchHandler @ 001a44c8 */
  lVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba320);
  uVar4 = FUN_0015c2b8(**(undefined8 **)(lVar3 + 8),(*(undefined8 **)(lVar3 + 8))[1],param_2);
  if (uVar4 != 0) {
    uVar4 = (ulong)(*(int *)(uVar4 + 0x50) == 5);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 001a4520  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::isString,margelo::nitro::JAnyMap,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::dispatch =====

/* facebook::jni::detail::MethodWrapper<bool
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), &margelo::nitro::JAnyMap::isString,
   margelo::nitro::JAnyMap, bool, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >
   const&>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void facebook::jni::detail::
     MethodWrapper<bool(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::isString,margelo::nitro::JAnyMap,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
     ::dispatch(JObject *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*PTR_hybridDataField_001ba328 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba328);
    if (iVar2 != 0) {
      JObject::getClass();
                    /* try { // try from 001a45c8 to 001a45cb has its CatchHandler @ 001a45f4 */
      uVar5 = FUN_001a2ac8(local_30);
      *(undefined8 *)PTR_hybridDataField_001ba320 = uVar5;
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                 &local_30);
      __cxa_guard_release(PTR_hybridDataField_001ba328);
    }
  }
                    /* try { // try from 001a4550 to 001a455b has its CatchHandler @ 001a4610 */
  lVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba320);
  uVar4 = FUN_0015c2b8(**(undefined8 **)(lVar3 + 8),(*(undefined8 **)(lVar3 + 8))[1],param_2);
  if (uVar4 != 0) {
    uVar4 = (ulong)(*(int *)(uVar4 + 0x50) == 4);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 001a4668  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::isInt64,margelo::nitro::JAnyMap,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::dispatch =====

/* facebook::jni::detail::MethodWrapper<bool
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), &margelo::nitro::JAnyMap::isInt64,
   margelo::nitro::JAnyMap, bool, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >
   const&>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void facebook::jni::detail::
     MethodWrapper<bool(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::isInt64,margelo::nitro::JAnyMap,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
     ::dispatch(JObject *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*PTR_hybridDataField_001ba328 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba328);
    if (iVar2 != 0) {
      JObject::getClass();
                    /* try { // try from 001a4710 to 001a4713 has its CatchHandler @ 001a473c */
      uVar5 = FUN_001a2ac8(local_30);
      *(undefined8 *)PTR_hybridDataField_001ba320 = uVar5;
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                 &local_30);
      __cxa_guard_release(PTR_hybridDataField_001ba328);
    }
  }
                    /* try { // try from 001a4698 to 001a46a3 has its CatchHandler @ 001a4758 */
  lVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba320);
  uVar4 = FUN_0015c2b8(**(undefined8 **)(lVar3 + 8),(*(undefined8 **)(lVar3 + 8))[1],param_2);
  if (uVar4 != 0) {
    uVar4 = (ulong)(*(int *)(uVar4 + 0x50) == 3);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 001a47b0  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::isBoolean,margelo::nitro::JAnyMap,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::dispatch =====

/* facebook::jni::detail::MethodWrapper<bool
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), &margelo::nitro::JAnyMap::isBoolean,
   margelo::nitro::JAnyMap, bool, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >
   const&>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void facebook::jni::detail::
     MethodWrapper<bool(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::isBoolean,margelo::nitro::JAnyMap,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
     ::dispatch(JObject *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*PTR_hybridDataField_001ba328 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba328);
    if (iVar2 != 0) {
      JObject::getClass();
                    /* try { // try from 001a4858 to 001a485b has its CatchHandler @ 001a4884 */
      uVar5 = FUN_001a2ac8(local_30);
      *(undefined8 *)PTR_hybridDataField_001ba320 = uVar5;
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                 &local_30);
      __cxa_guard_release(PTR_hybridDataField_001ba328);
    }
  }
                    /* try { // try from 001a47e0 to 001a47eb has its CatchHandler @ 001a48a0 */
  lVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba320);
  uVar4 = FUN_0015c2b8(**(undefined8 **)(lVar3 + 8),(*(undefined8 **)(lVar3 + 8))[1],param_2);
  if (uVar4 != 0) {
    uVar4 = (ulong)(*(int *)(uVar4 + 0x50) == 1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 001a48f8  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::isDouble,margelo::nitro::JAnyMap,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::dispatch =====

/* facebook::jni::detail::MethodWrapper<bool
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), &margelo::nitro::JAnyMap::isDouble,
   margelo::nitro::JAnyMap, bool, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >
   const&>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void facebook::jni::detail::
     MethodWrapper<bool(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::isDouble,margelo::nitro::JAnyMap,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
     ::dispatch(JObject *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*PTR_hybridDataField_001ba328 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba328);
    if (iVar2 != 0) {
      JObject::getClass();
                    /* try { // try from 001a49a0 to 001a49a3 has its CatchHandler @ 001a49cc */
      uVar5 = FUN_001a2ac8(local_30);
      *(undefined8 *)PTR_hybridDataField_001ba320 = uVar5;
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                 &local_30);
      __cxa_guard_release(PTR_hybridDataField_001ba328);
    }
  }
                    /* try { // try from 001a4928 to 001a4933 has its CatchHandler @ 001a49e8 */
  lVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba320);
  uVar4 = FUN_0015c2b8(**(undefined8 **)(lVar3 + 8),(*(undefined8 **)(lVar3 + 8))[1],param_2);
  if (uVar4 != 0) {
    uVar4 = (ulong)(*(int *)(uVar4 + 0x50) == 2);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 001a4a40  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::isNull,margelo::nitro::JAnyMap,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::dispatch =====

/* facebook::jni::detail::MethodWrapper<bool
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), &margelo::nitro::JAnyMap::isNull,
   margelo::nitro::JAnyMap, bool, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >
   const&>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void facebook::jni::detail::
     MethodWrapper<bool(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::isNull,margelo::nitro::JAnyMap,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
     ::dispatch(JObject *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*PTR_hybridDataField_001ba328 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba328);
    if (iVar2 != 0) {
      JObject::getClass();
                    /* try { // try from 001a4ae8 to 001a4aeb has its CatchHandler @ 001a4b14 */
      uVar5 = FUN_001a2ac8(local_30);
      *(undefined8 *)PTR_hybridDataField_001ba320 = uVar5;
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                 &local_30);
      __cxa_guard_release(PTR_hybridDataField_001ba328);
    }
  }
                    /* try { // try from 001a4a70 to 001a4a7b has its CatchHandler @ 001a4b30 */
  lVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba320);
  uVar4 = FUN_0015c2b8(**(undefined8 **)(lVar3 + 8),(*(undefined8 **)(lVar3 + 8))[1],param_2);
  if (uVar4 != 0) {
    uVar4 = (ulong)(*(int *)(uVar4 + 0x50) == 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 001a4b88  facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::JString>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyMap::*)(),&margelo::nitro::JAnyMap::getAllKeys,margelo::nitro::JAnyMap,facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::JString>,facebook::jni::LocalReferenceAllocator>>::dispatch =====

/* facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::JString>,
   facebook::jni::LocalReferenceAllocator> (margelo::nitro::JAnyMap::*)(),
   &margelo::nitro::JAnyMap::getAllKeys, margelo::nitro::JAnyMap,
   facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::JString>,
   facebook::jni::LocalReferenceAllocator>>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>)
    */

void facebook::jni::detail::
     MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::JString>,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JAnyMap::*)(),&margelo::nitro::JAnyMap::getAllKeys,margelo::nitro::JAnyMap,facebook::jni::basic_strong_ref<facebook::jni::JArrayClass<facebook::jni::JString>,facebook::jni::LocalReferenceAllocator>>
     ::dispatch(JObject *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*PTR_hybridDataField_001ba328 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba328);
    if (iVar2 != 0) {
      JObject::getClass();
                    /* try { // try from 001a4c18 to 001a4c1b has its CatchHandler @ 001a4c44 */
      uVar3 = FUN_001a2ac8(local_30);
      *(undefined8 *)PTR_hybridDataField_001ba320 = uVar3;
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                 &local_30);
      __cxa_guard_release(PTR_hybridDataField_001ba328);
    }
  }
                    /* try { // try from 001a4bb8 to 001a4bcb has its CatchHandler @ 001a4c60 */
  getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba320);
  margelo::nitro::JAnyMap::getAllKeys();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a4cb8  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JAnyMap::*)(),&margelo::nitro::JAnyMap::clear,margelo::nitro::JAnyMap,void>::dispatch =====

/* facebook::jni::detail::MethodWrapper<void (margelo::nitro::JAnyMap::*)(),
   &margelo::nitro::JAnyMap::clear, margelo::nitro::JAnyMap,
   void>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>)
    */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JAnyMap::*)(),&margelo::nitro::JAnyMap::clear,margelo::nitro::JAnyMap,void>
     ::dispatch(JObject *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((*PTR_hybridDataField_001ba328 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba328), iVar2 != 0)) {
    JObject::getClass();
                    /* try { // try from 001a4d44 to 001a4d47 has its CatchHandler @ 001a4d70 */
    uVar4 = FUN_001a2ac8(local_30);
    *(undefined8 *)PTR_hybridDataField_001ba320 = uVar4;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
               &local_30);
    __cxa_guard_release(PTR_hybridDataField_001ba328);
  }
                    /* try { // try from 001a4ce4 to 001a4cef has its CatchHandler @ 001a4d8c */
  lVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba320);
  FUN_0015cf0c(*(undefined8 *)(lVar3 + 8));
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a4de4  facebook::jni::detail::MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::remove,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::dispatch =====

/* facebook::jni::detail::MethodWrapper<void
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), &margelo::nitro::JAnyMap::remove,
   margelo::nitro::JAnyMap, void, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >
   const&>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void facebook::jni::detail::
     MethodWrapper<void(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::remove,margelo::nitro::JAnyMap,void,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
     ::dispatch(JObject *param_1,basic_string *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*PTR_hybridDataField_001ba328 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba328);
    if (iVar2 != 0) {
      JObject::getClass();
                    /* try { // try from 001a4e78 to 001a4e7b has its CatchHandler @ 001a4ea4 */
      uVar4 = FUN_001a2ac8(local_30);
      *(undefined8 *)PTR_hybridDataField_001ba320 = uVar4;
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                 &local_30);
      __cxa_guard_release(PTR_hybridDataField_001ba328);
    }
  }
                    /* try { // try from 001a4e14 to 001a4e2b has its CatchHandler @ 001a4ec0 */
  lVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba320);
  margelo::nitro::AnyMap::remove(*(AnyMap **)(lVar3 + 8),param_2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a4f18  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::contains,margelo::nitro::JAnyMap,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>::dispatch =====

/* facebook::jni::detail::MethodWrapper<bool
   (margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&), &margelo::nitro::JAnyMap::contains,
   margelo::nitro::JAnyMap, bool, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >
   const&>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyMap,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void facebook::jni::detail::
     MethodWrapper<bool(margelo::nitro::JAnyMap::*)(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&),&margelo::nitro::JAnyMap::contains,margelo::nitro::JAnyMap,bool,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
     ::dispatch(JObject *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*PTR_hybridDataField_001ba328 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba328);
    if (iVar2 != 0) {
      JObject::getClass();
                    /* try { // try from 001a4fb8 to 001a4fbb has its CatchHandler @ 001a4fe4 */
      uVar4 = FUN_001a2ac8(local_30);
      *(undefined8 *)PTR_hybridDataField_001ba320 = uVar4;
      base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
                ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                 &local_30);
      __cxa_guard_release(PTR_hybridDataField_001ba328);
    }
  }
                    /* try { // try from 001a4f48 to 001a4f53 has its CatchHandler @ 001a5000 */
  lVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba320);
  lVar3 = FUN_0015c2b8(**(undefined8 **)(lVar3 + 8),(*(undefined8 **)(lVar3 + 8))[1],param_2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3 != 0);
}


// ===== 001a5058  FUN_001a5058 =====

void FUN_001a5058(undefined8 *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_001b9510;
                    /* try { // try from 001a5090 to 001a5097 has its CatchHandler @ 001a5178 */
  puVar2 = (undefined8 *)operator_new(0x28);
  *(undefined4 *)(puVar2 + 4) = 0x3f800000;
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
                    /* try { // try from 001a50b0 to 001a50b3 has its CatchHandler @ 001a5160 */
  FUN_0019ece4(puVar2,(long)param_2);
                    /* try { // try from 001a50b8 to 001a50bf has its CatchHandler @ 001a5150 */
  puVar3 = (undefined8 *)operator_new(0x20);
  plVar6 = (long *)param_1[2];
  puVar3[2] = 0;
  puVar3[3] = puVar2;
  *puVar3 = &PTR____shared_weak_count_001b9560;
  puVar3[1] = 0;
  param_1[2] = puVar3;
  param_1[1] = puVar2;
  if ((plVar6 == (long *)0x0) || (lVar4 = FUN_0015bb40(0xffffffffffffffff,plVar6 + 1), lVar4 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == lVar5) {
      return;
    }
  }
  else {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    if (*(long *)(lVar1 + 0x28) == lVar5) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a51a0  FUN_001a51a0 =====

void FUN_001a51a0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long *local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::HybridData::create();
  uVar4 = *param_1;
                    /* try { // try from 001a51d4 to 001a51ef has its CatchHandler @ 001a528c */
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 200))(plVar2,uVar4);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_48 = (long *)*param_2;
  *param_2 = 0;
                    /* try { // try from 001a51fc to 001a5207 has its CatchHandler @ 001a5260 */
  local_40 = lVar3;
  FUN_0019ad1c(&local_40,&local_48);
  plVar2 = local_48;
  local_48 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  lVar3 = local_40;
  if (local_40 != 0) {
                    /* try { // try from 001a5228 to 001a523b has its CatchHandler @ 001a5288 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a52b4  FUN_001a52b4 =====

void FUN_001a52b4(undefined8 *param_1)

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
    plVar5 = *(long **)((long)pvVar4 + 0x10);
    if ((plVar5 != (long *)0x0) && (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar5 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      operator_delete(pvVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a5360  FUN_001a5360 =====

void FUN_001a5360(long *param_1)

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


// ===== 001a53ec  FUN_001a53ec =====

void FUN_001a53ec(undefined8 *param_1)

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
    FUN_0015ce0c(pvVar3);
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      operator_delete(pvVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a5464  FUN_001a5464 =====

void FUN_001a5464(__shared_weak_count *param_1)

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


// ===== 001a54b0  FUN_001a54b0 =====

void FUN_001a54b0(long param_1)

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
    FUN_0015ce0c(pvVar3);
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      operator_delete(pvVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a5524  FUN_001a5524 =====

void FUN_001a5524(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_001ba318) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 001a5574  FUN_001a5574 =====

void FUN_001a5574(void *param_1)

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


// ===== 001a55ac  FUN_001a55ac =====

void FUN_001a55ac(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x10);
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
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


// ===== 001a5638  FUN_001a5638 =====

void FUN_001a5638(void *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)((long)param_1 + 0x10);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
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


// ===== 001a56b8  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JArrayBuffer,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::alias_ref<facebook::jni::JByteBuffer>),&margelo::nitro::JArrayBuffer::initHybridByteBuffer,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JArrayBuffer,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>,facebook::jni::alias_ref<facebook::jni::JByteBuffer>>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   (*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JArrayBuffer,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   facebook::jni::alias_ref<facebook::jni::JByteBuffer>),
   &margelo::nitro::JArrayBuffer::initHybridByteBuffer,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JArrayBuffer,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>,
   facebook::jni::alias_ref<facebook::jni::JByteBuffer> >::call(_JNIEnv*, _jobject*,
   facebook::jni::detail::JTypeFor<facebook::jni::JByteBuffer, facebook::jni::JBuffer,
   void>::_javaobject*) */

undefined8
facebook::jni::detail::
FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JArrayBuffer,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::alias_ref<facebook::jni::JByteBuffer>),&margelo::nitro::JArrayBuffer::initHybridByteBuffer,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JArrayBuffer,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>,facebook::jni::alias_ref<facebook::jni::JByteBuffer>>
::call(_JNIEnv *param_1,_jobject *param_2,_javaobject *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  bad_alloc *this;
  JniEnvCacher aJStack_80 [24];
  undefined8 local_68;
  long *local_60;
  long *local_58;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_80,param_1);
                    /* try { // try from 001a56ec to 001a56f3 has its CatchHandler @ 001a592c */
  plVar3 = (long *)operator_new(0x18);
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_001b8ab0;
                    /* try { // try from 001a5708 to 001a570f has its CatchHandler @ 001a5920 */
  puVar4 = (undefined8 *)operator_new(0x28);
  *puVar4 = &PTR_FUN_001b8b00;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = &PTR_FUN_001b8b50;
  if (param_3 != (_javaobject *)0x0) {
                    /* try { // try from 001a5738 to 001a5753 has its CatchHandler @ 001a5940 */
    plVar5 = (long *)facebook::jni::Environment::current();
    param_3 = (_javaobject *)(**(code **)(*plVar5 + 0xa8))(plVar5,param_3);
    facebook::jni::throwPendingJniExceptionAsCppException();
    if (param_3 == (_javaobject *)0x0) {
      this = (bad_alloc *)__cxa_allocate_exception(8);
      std::bad_alloc::bad_alloc(this);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 001a58b8 to 001a58cf has its CatchHandler @ 001a5940 */
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this,PTR_typeinfo_001ba598,PTR__bad_alloc_001ba590);
      }
      goto LAB_001a59cc;
    }
  }
  puVar4[4] = param_3;
                    /* try { // try from 001a575c to 001a5763 has its CatchHandler @ 001a5910 */
  facebook::jni::JByteOrder::nativeOrder();
  local_58 = local_60;
                    /* try { // try from 001a576c to 001a577b has its CatchHandler @ 001a5900 */
  facebook::jni::JByteBuffer::order(&local_50,puVar4 + 4,&local_58);
  if (local_50 != 0) {
                    /* try { // try from 001a5784 to 001a5797 has its CatchHandler @ 001a593c */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,local_50);
  }
  local_50 = 0;
  if (local_60 != (long *)0x0) {
                    /* try { // try from 001a57a4 to 001a57b7 has its CatchHandler @ 001a5938 */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,local_60);
  }
  plVar5 = (long *)plVar3[2];
  plVar3[1] = (long)(puVar4 + 3);
  plVar3[2] = (long)puVar4;
  if ((plVar5 != (long *)0x0) && (lVar6 = FUN_0015bb40(0xffffffffffffffff,plVar5 + 1), lVar6 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  local_60 = plVar3;
                    /* try { // try from 001a57f0 to 001a57f7 has its CatchHandler @ 001a58f8 */
  facebook::jni::detail::HybridData::create();
  uVar2 = local_68;
                    /* try { // try from 001a57fc to 001a5817 has its CatchHandler @ 001a5970 */
  plVar5 = (long *)facebook::jni::Environment::current();
  lVar6 = (**(code **)(*plVar5 + 200))(plVar5,uVar2);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_60 = (long *)0x0;
                    /* try { // try from 001a5820 to 001a582b has its CatchHandler @ 001a58d0 */
  local_58 = plVar3;
  local_50 = lVar6;
  FUN_0019ad1c(&local_50,&local_58);
  plVar3 = local_58;
  local_58 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  lVar6 = local_50;
  if (local_50 != 0) {
                    /* try { // try from 001a584c to 001a585f has its CatchHandler @ 001a5934 */
    plVar3 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb8))(plVar3,lVar6);
  }
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_80);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return local_68;
  }
LAB_001a59cc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a59d4  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JArrayBuffer,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::alias_ref<facebook::jni::JObject>),&margelo::nitro::JArrayBuffer::initHybridHardwareBuffer,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JArrayBuffer,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>,facebook::jni::alias_ref<facebook::jni::JObject>>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>
   (*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JArrayBuffer,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   facebook::jni::alias_ref<facebook::jni::JObject>),
   &margelo::nitro::JArrayBuffer::initHybridHardwareBuffer,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JArrayBuffer,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,
   facebook::jni::JObject, void>::_javaobject*, facebook::jni::LocalReferenceAllocator>,
   facebook::jni::alias_ref<facebook::jni::JObject> >::call(_JNIEnv*, _jobject*, _jobject*) */

void facebook::jni::detail::
     FunctionWrapperWithJniEntryPoint<facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>(*)(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JArrayBuffer,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*>,facebook::jni::alias_ref<facebook::jni::JObject>),&margelo::nitro::JArrayBuffer::initHybridHardwareBuffer,facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JArrayBuffer,facebook::jni::detail::BaseHybridClass>::JavaPart,facebook::jni::JObject,void>::_javaobject*,facebook::jni::basic_strong_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>,facebook::jni::alias_ref<facebook::jni::JObject>>
     ::call(_JNIEnv *param_1,_jobject *param_2,_jobject *param_3)

{
  long lVar1;
  runtime_error *this;
  JniEnvCacher aJStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_50,param_1);
  this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001a5a0c to 001a5a17 has its CatchHandler @ 001a5a44 */
  std::runtime_error::runtime_error
            (this,"ArrayBuffer(HardwareBuffer) requires NDK API 26 or above! (minSdk >= 26)");
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 001a5a28 to 001a5a3f has its CatchHandler @ 001a5a40 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a5ac8  facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JByteBuffer,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JArrayBuffer::*)(bool),&margelo::nitro::JArrayBuffer::getByteBuffer,margelo::nitro::JArrayBuffer,facebook::jni::basic_strong_ref<facebook::jni::JByteBuffer,facebook::jni::LocalReferenceAllocator>,bool>::call =====

/* facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JByteBuffer,
   facebook::jni::LocalReferenceAllocator> (margelo::nitro::JArrayBuffer::*)(bool),
   &margelo::nitro::JArrayBuffer::getByteBuffer, margelo::nitro::JArrayBuffer,
   facebook::jni::basic_strong_ref<facebook::jni::JByteBuffer,
   facebook::jni::LocalReferenceAllocator>, bool>::call(_JNIEnv*, _jobject*, unsigned char) */

undefined8
facebook::jni::detail::
MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JByteBuffer,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JArrayBuffer::*)(bool),&margelo::nitro::JArrayBuffer::getByteBuffer,margelo::nitro::JArrayBuffer,facebook::jni::basic_strong_ref<facebook::jni::JByteBuffer,facebook::jni::LocalReferenceAllocator>,bool>
::call(_JNIEnv *param_1,_jobject *param_2,uchar param_3)

{
  long lVar1;
  JniEnvCacher aJStack_68 [28];
  undefined1 local_4c [4];
  _jobject *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_68,param_1);
  local_4c[0] = param_3 != '\0';
                    /* try { // try from 001a5b0c to 001a5b1b has its CatchHandler @ 001a5b50 */
  local_48 = param_2;
  dispatch((MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JByteBuffer,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JArrayBuffer::*)(bool),&margelo::nitro::JArrayBuffer::getByteBuffer,margelo::nitro::JArrayBuffer,facebook::jni::basic_strong_ref<facebook::jni::JByteBuffer,facebook::jni::LocalReferenceAllocator>,bool>
            *)&local_40,&local_48,local_4c);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return local_40;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a5b9c  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JArrayBuffer::*)(),&margelo::nitro::JArrayBuffer::getIsByteBuffer,margelo::nitro::JArrayBuffer,bool>::call =====

/* facebook::jni::detail::MethodWrapper<bool (margelo::nitro::JArrayBuffer::*)(),
   &margelo::nitro::JArrayBuffer::getIsByteBuffer, margelo::nitro::JArrayBuffer,
   bool>::call(_JNIEnv*, _jobject*) */

void facebook::jni::detail::
     MethodWrapper<bool(margelo::nitro::JArrayBuffer::*)(),&margelo::nitro::JArrayBuffer::getIsByteBuffer,margelo::nitro::JArrayBuffer,bool>
     ::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_001a6154(param_1,param_2,PTR_dispatch_001ba1c8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a5bdc  facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JObject,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JArrayBuffer::*)(),&margelo::nitro::JArrayBuffer::getHardwareBufferBoxed,margelo::nitro::JArrayBuffer,facebook::jni::basic_strong_ref<facebook::jni::JObject,facebook::jni::LocalReferenceAllocator>>::call =====

/* facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JObject,
   facebook::jni::LocalReferenceAllocator> (margelo::nitro::JArrayBuffer::*)(),
   &margelo::nitro::JArrayBuffer::getHardwareBufferBoxed, margelo::nitro::JArrayBuffer,
   facebook::jni::basic_strong_ref<facebook::jni::JObject,
   facebook::jni::LocalReferenceAllocator>>::call(_JNIEnv*, _jobject*) */

undefined8
facebook::jni::detail::
MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JObject,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JArrayBuffer::*)(),&margelo::nitro::JArrayBuffer::getHardwareBufferBoxed,margelo::nitro::JArrayBuffer,facebook::jni::basic_strong_ref<facebook::jni::JObject,facebook::jni::LocalReferenceAllocator>>
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
                    /* try { // try from 001a5c0c to 001a5c17 has its CatchHandler @ 001a5c48 */
  local_38 = param_2;
  dispatch(&local_30,&local_38);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a5c94  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JArrayBuffer::*)(),&margelo::nitro::JArrayBuffer::getIsHardwareBuffer,margelo::nitro::JArrayBuffer,bool>::call =====

/* facebook::jni::detail::MethodWrapper<bool (margelo::nitro::JArrayBuffer::*)(),
   &margelo::nitro::JArrayBuffer::getIsHardwareBuffer, margelo::nitro::JArrayBuffer,
   bool>::call(_JNIEnv*, _jobject*) */

void facebook::jni::detail::
     MethodWrapper<bool(margelo::nitro::JArrayBuffer::*)(),&margelo::nitro::JArrayBuffer::getIsHardwareBuffer,margelo::nitro::JArrayBuffer,bool>
     ::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_001a6154(param_1,param_2,PTR_dispatch_001ba1d0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a5cd4  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JArrayBuffer::*)(),&margelo::nitro::JArrayBuffer::getIsOwner,margelo::nitro::JArrayBuffer,bool>::call =====

/* facebook::jni::detail::MethodWrapper<bool (margelo::nitro::JArrayBuffer::*)(),
   &margelo::nitro::JArrayBuffer::getIsOwner, margelo::nitro::JArrayBuffer, bool>::call(_JNIEnv*,
   _jobject*) */

void facebook::jni::detail::
     MethodWrapper<bool(margelo::nitro::JArrayBuffer::*)(),&margelo::nitro::JArrayBuffer::getIsOwner,margelo::nitro::JArrayBuffer,bool>
     ::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_001a6154(param_1,param_2,PTR_dispatch_001ba1d8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a5d14  facebook::jni::detail::MethodWrapper<int(margelo::nitro::JArrayBuffer::*)(),&margelo::nitro::JArrayBuffer::getBufferSize,margelo::nitro::JArrayBuffer,int>::call =====

/* facebook::jni::detail::MethodWrapper<int (margelo::nitro::JArrayBuffer::*)(),
   &margelo::nitro::JArrayBuffer::getBufferSize, margelo::nitro::JArrayBuffer, int>::call(_JNIEnv*,
   _jobject*) */

undefined4
facebook::jni::detail::
MethodWrapper<int(margelo::nitro::JArrayBuffer::*)(),&margelo::nitro::JArrayBuffer::getBufferSize,margelo::nitro::JArrayBuffer,int>
::call(_JNIEnv *param_1,_jobject *param_2)

{
  long lVar1;
  undefined4 uVar2;
  JniEnvCacher aJStack_48 [24];
  _jobject *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_48,param_1);
                    /* try { // try from 001a5d44 to 001a5d4b has its CatchHandler @ 001a5d7c */
  local_30 = param_2;
  uVar2 = dispatch(&local_30);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a5dc8  facebook::jni::detail::MethodWrapper<int(margelo::nitro::JArrayBuffer::*)(),&margelo::nitro::JArrayBuffer::getBufferSize,margelo::nitro::JArrayBuffer,int>::dispatch =====

/* facebook::jni::detail::MethodWrapper<int (margelo::nitro::JArrayBuffer::*)(),
   &margelo::nitro::JArrayBuffer::getBufferSize, margelo::nitro::JArrayBuffer,
   int>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JArrayBuffer,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>)
    */

void facebook::jni::detail::
     MethodWrapper<int(margelo::nitro::JArrayBuffer::*)(),&margelo::nitro::JArrayBuffer::getBufferSize,margelo::nitro::JArrayBuffer,int>
     ::dispatch(JObject *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((*PTR_hybridDataField_001ba2b8 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba2b8), iVar2 != 0)) {
    JObject::getClass();
                    /* try { // try from 001a5e5c to 001a5e5f has its CatchHandler @ 001a5e88 */
    uVar4 = FUN_001a5efc(local_30);
    *(undefined8 *)PTR_hybridDataField_001ba2b0 = uVar4;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
               &local_30);
    __cxa_guard_release(PTR_hybridDataField_001ba2b8);
  }
                    /* try { // try from 001a5df4 to 001a5e0f has its CatchHandler @ 001a5ea4 */
  lVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba2b0);
  (**(code **)(**(long **)(lVar3 + 8) + 0x10))();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a5efc  FUN_001a5efc =====

void FUN_001a5efc(undefined8 param_1)

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
    if (((*PTR_cls_001ba2e0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_cls_001ba2e0), iVar2 != 0)) {
                    /* try { // try from 001a5fb8 to 001a5fcb has its CatchHandler @ 001a5ff0 */
      facebook::jni::findClassStatic(PTR_kBaseName_001ba2e8);
      __cxa_guard_release(PTR_cls_001ba2e0);
    }
    uVar6 = *(undefined8 *)PTR_cls_001ba2d8;
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar4 = (**(code **)(*plVar5 + 0x2f0))(plVar5,uVar6,"mHybridData",PTR_kDescriptor_001ba2f0);
    facebook::jni::throwCppExceptionIf(lVar4 == 0);
    if (lVar4 == 0) {
      if (*(long *)(lVar1 + 0x28) == local_28) {
        uVar6 = facebook::jni::throwNPE();
                    /* catch() { ... } // from try @ 001a5fb8 with catch @ 001a5ff0 */
        lVar4 = __cxa_guard_abort(PTR_cls_001ba2e0);
        if (*(long *)(lVar1 + 0x28) == local_28) {
          lVar4 = FUN_00157e74(uVar6);
        }
      }
      goto LAB_001a6018;
    }
  }
  else {
    lVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
LAB_001a6018:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


// ===== 001a601c  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JArrayBuffer::*)(),&margelo::nitro::JArrayBuffer::getIsOwner,margelo::nitro::JArrayBuffer,bool>::dispatch =====

/* facebook::jni::detail::MethodWrapper<bool (margelo::nitro::JArrayBuffer::*)(),
   &margelo::nitro::JArrayBuffer::getIsOwner, margelo::nitro::JArrayBuffer,
   bool>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JArrayBuffer,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>)
    */

uint facebook::jni::detail::
     MethodWrapper<bool(margelo::nitro::JArrayBuffer::*)(),&margelo::nitro::JArrayBuffer::getIsOwner,margelo::nitro::JArrayBuffer,bool>
     ::dispatch(JObject *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((*PTR_hybridDataField_001ba2b8 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_hybridDataField_001ba2b8), iVar3 != 0)) {
    JObject::getClass();
                    /* try { // try from 001a60b4 to 001a60b7 has its CatchHandler @ 001a60e0 */
    uVar5 = FUN_001a5efc(local_30);
    *(undefined8 *)PTR_hybridDataField_001ba2b0 = uVar5;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
               &local_30);
    __cxa_guard_release(PTR_hybridDataField_001ba2b8);
  }
                    /* try { // try from 001a6048 to 001a6053 has its CatchHandler @ 001a60fc */
  lVar4 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba2b0);
  uVar2 = (**(code **)(**(long **)(lVar4 + 8) + 0x20))();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a6154  FUN_001a6154 =====

uint FUN_001a6154(_JNIEnv *param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  uint uVar2;
  JniEnvCacher aJStack_58 [24];
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_58,param_1);
                    /* try { // try from 001a618c to 001a6193 has its CatchHandler @ 001a61c8 */
  local_40 = param_2;
  uVar2 = (*param_3)(&local_40);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a6214  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JArrayBuffer::*)(),&margelo::nitro::JArrayBuffer::getIsHardwareBuffer,margelo::nitro::JArrayBuffer,bool>::dispatch =====

/* facebook::jni::detail::MethodWrapper<bool (margelo::nitro::JArrayBuffer::*)(),
   &margelo::nitro::JArrayBuffer::getIsHardwareBuffer, margelo::nitro::JArrayBuffer,
   bool>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JArrayBuffer,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>)
    */

undefined8
facebook::jni::detail::
MethodWrapper<bool(margelo::nitro::JArrayBuffer::*)(),&margelo::nitro::JArrayBuffer::getIsHardwareBuffer,margelo::nitro::JArrayBuffer,bool>
::dispatch(JObject *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((*PTR_hybridDataField_001ba2b8 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba2b8), iVar2 != 0)) {
    JObject::getClass();
                    /* try { // try from 001a629c to 001a629f has its CatchHandler @ 001a62c8 */
    uVar3 = FUN_001a5efc(local_30);
    *(undefined8 *)PTR_hybridDataField_001ba2b0 = uVar3;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
               &local_30);
    __cxa_guard_release(PTR_hybridDataField_001ba2b8);
  }
                    /* try { // try from 001a6240 to 001a624b has its CatchHandler @ 001a62e4 */
  getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba2b0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a633c  facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JObject,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JArrayBuffer::*)(),&margelo::nitro::JArrayBuffer::getHardwareBufferBoxed,margelo::nitro::JArrayBuffer,facebook::jni::basic_strong_ref<facebook::jni::JObject,facebook::jni::LocalReferenceAllocator>>::dispatch =====

/* facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JObject,
   facebook::jni::LocalReferenceAllocator> (margelo::nitro::JArrayBuffer::*)(),
   &margelo::nitro::JArrayBuffer::getHardwareBufferBoxed, margelo::nitro::JArrayBuffer,
   facebook::jni::basic_strong_ref<facebook::jni::JObject,
   facebook::jni::LocalReferenceAllocator>>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JArrayBuffer,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>)
    */

void facebook::jni::detail::
     MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JObject,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JArrayBuffer::*)(),&margelo::nitro::JArrayBuffer::getHardwareBufferBoxed,margelo::nitro::JArrayBuffer,facebook::jni::basic_strong_ref<facebook::jni::JObject,facebook::jni::LocalReferenceAllocator>>
     ::dispatch(JObject *param_1)

{
  long lVar1;
  int iVar2;
  runtime_error *this;
  undefined8 uVar3;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_hybridDataField_001ba2b8 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba2b8), iVar2 != 0)) {
    JObject::getClass();
                    /* try { // try from 001a63e4 to 001a63e7 has its CatchHandler @ 001a6410 */
    uVar3 = FUN_001a5efc(local_40);
    *(undefined8 *)PTR_hybridDataField_001ba2b0 = uVar3;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
               &local_40);
    __cxa_guard_release(PTR_hybridDataField_001ba2b8);
  }
                    /* try { // try from 001a636c to 001a6377 has its CatchHandler @ 001a6444 */
  getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba2b0);
  this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001a6384 to 001a638f has its CatchHandler @ 001a6430 */
  std::runtime_error::runtime_error
            (this,"ArrayBuffer(HardwareBuffer) requires NDK API 26 or above! (minSdk >= 26)");
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 001a63a0 to 001a63b7 has its CatchHandler @ 001a6444 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a6494  facebook::jni::detail::MethodWrapper<bool(margelo::nitro::JArrayBuffer::*)(),&margelo::nitro::JArrayBuffer::getIsByteBuffer,margelo::nitro::JArrayBuffer,bool>::dispatch =====

/* facebook::jni::detail::MethodWrapper<bool (margelo::nitro::JArrayBuffer::*)(),
   &margelo::nitro::JArrayBuffer::getIsByteBuffer, margelo::nitro::JArrayBuffer,
   bool>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JArrayBuffer,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>)
    */

undefined4
facebook::jni::detail::
MethodWrapper<bool(margelo::nitro::JArrayBuffer::*)(),&margelo::nitro::JArrayBuffer::getIsByteBuffer,margelo::nitro::JArrayBuffer,bool>
::dispatch(JObject *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_hybridDataField_001ba2b8 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba2b8), iVar2 != 0)) {
    JObject::getClass();
                    /* try { // try from 001a658c to 001a658f has its CatchHandler @ 001a65b8 */
    uVar4 = FUN_001a5efc(local_40);
    *(undefined8 *)PTR_hybridDataField_001ba2b0 = uVar4;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
               &local_40);
    __cxa_guard_release(PTR_hybridDataField_001ba2b8);
  }
                    /* try { // try from 001a64c4 to 001a64cf has its CatchHandler @ 001a65d4 */
  lVar3 = getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba2b0);
  if ((*(undefined8 **)(lVar3 + 8) == (undefined8 *)0x0) ||
     ((undefined **)**(undefined8 **)(lVar3 + 8) != &PTR_FUN_001b8b50)) {
    uVar5 = 0;
  }
  else {
    plVar6 = *(long **)(lVar3 + 0x10);
    if (plVar6 != (long *)0x0) {
      uVar5 = 1;
      FUN_0015c230(1,plVar6 + 1);
      lVar3 = FUN_0015bb40(0xffffffffffffffff,plVar6 + 1);
      if (lVar3 != 0) goto LAB_001a64f0;
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    uVar5 = 1;
  }
LAB_001a64f0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a662c  FUN_001a662c =====

void FUN_001a662c(MutableBuffer *param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long *plVar3;
  long lVar4;
  undefined **local_70;
  MutableBuffer *pMStack_68;
  long *local_50;
  long local_38;
  
  local_50 = (long *)&local_70;
  pppuVar2 = &local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_70 = &PTR_FUN_001b8bb8;
  pMStack_68 = param_1;
                    /* try { // try from 001a6664 to 001a666b has its CatchHandler @ 001a66e8 */
  facebook::jni::ThreadScope::WithClassLoader((function *)&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_001a6698;
    lVar4 = 5;
    pppuVar2 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar2 + lVar4 * 8))();
LAB_001a6698:
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 != 0) {
                    /* try { // try from 001a66a0 to 001a66b3 has its CatchHandler @ 001a66ec */
    plVar3 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb0))(plVar3,lVar4);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  facebook::jsi::MutableBuffer::~MutableBuffer(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a66f0  FUN_001a66f0 =====

void FUN_001a66f0(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_001a662c();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a673c  FUN_001a673c =====

void FUN_001a673c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    facebook::jni::JBuffer::getDirectCapacity();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a6778  FUN_001a6778 =====

void FUN_001a6778(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    facebook::jni::JBuffer::getDirectAddress();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a67b4  FUN_001a67b4 =====

uint FUN_001a67b4(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 8) == 0) {
    uVar2 = 0;
  }
  else {
                    /* try { // try from 001a67d8 to 001a67db has its CatchHandler @ 001a680c */
    uVar2 = facebook::jni::JBuffer::isDirect();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a6810  FUN_001a6810 =====

void FUN_001a6810(void *param_1)

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


// ===== 001a6848  FUN_001a6848 =====

void FUN_001a6848(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_001b8bb8;
  puVar2[1] = uVar4;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a68a4  FUN_001a68a4 =====

void FUN_001a68a4(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_001b8bb8;
  param_2[1] = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a68ec  FUN_001a68ec =====

void FUN_001a68ec(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a6924  FUN_001a6924 =====

void FUN_001a6924(void *param_1)

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


// ===== 001a695c  FUN_001a695c =====

void FUN_001a695c(long param_1)

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
                    /* try { // try from 001a6988 to 001a699b has its CatchHandler @ 001a69c8 */
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


// ===== 001a69cc  FUN_001a69cc =====

void FUN_001a69cc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_001ba2a0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 001a6a1c  FUN_001a6a1c =====

undefined * FUN_001a6a1c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_001ba2a8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a6a5c  facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JByteBuffer,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JArrayBuffer::*)(bool),&margelo::nitro::JArrayBuffer::getByteBuffer,margelo::nitro::JArrayBuffer,facebook::jni::basic_strong_ref<facebook::jni::JByteBuffer,facebook::jni::LocalReferenceAllocator>,bool>::dispatch =====

/* facebook::jni::detail::MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JByteBuffer,
   facebook::jni::LocalReferenceAllocator> (margelo::nitro::JArrayBuffer::*)(bool),
   &margelo::nitro::JArrayBuffer::getByteBuffer, margelo::nitro::JArrayBuffer,
   facebook::jni::basic_strong_ref<facebook::jni::JByteBuffer,
   facebook::jni::LocalReferenceAllocator>,
   bool>::dispatch(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JArrayBuffer,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   bool&&) */

void __thiscall
facebook::jni::detail::
MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JByteBuffer,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JArrayBuffer::*)(bool),&margelo::nitro::JArrayBuffer::getByteBuffer,margelo::nitro::JArrayBuffer,facebook::jni::basic_strong_ref<facebook::jni::JByteBuffer,facebook::jni::LocalReferenceAllocator>,bool>
::dispatch(long *param_1,
          MethodWrapper<facebook::jni::basic_strong_ref<facebook::jni::JByteBuffer,facebook::jni::LocalReferenceAllocator>(margelo::nitro::JArrayBuffer::*)(bool),&margelo::nitro::JArrayBuffer::getByteBuffer,margelo::nitro::JArrayBuffer,facebook::jni::basic_strong_ref<facebook::jni::JByteBuffer,facebook::jni::LocalReferenceAllocator>,bool>
          *this,char *param_3)

{
  char cVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong __n;
  void *__dest;
  void *__src;
  uchar *puVar6;
  undefined8 uVar7;
  bad_alloc *this_00;
  long *plVar8;
  undefined8 *puVar9;
  long local_60;
  undefined1 local_58 [8];
  long local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (((*PTR_hybridDataField_001ba2b8 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_hybridDataField_001ba2b8), iVar3 != 0)) {
    JObject::getClass();
                    /* try { // try from 001a6cb0 to 001a6cb3 has its CatchHandler @ 001a6d14 */
    uVar7 = FUN_001a5efc(local_50);
    *(undefined8 *)PTR_hybridDataField_001ba2b0 = uVar7;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              ((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
               &local_50);
    __cxa_guard_release(PTR_hybridDataField_001ba2b8);
  }
                    /* try { // try from 001a6a98 to 001a6aa3 has its CatchHandler @ 001a6d70 */
  lVar4 = getHybridDataFromField((JObject *)this,(JField *)PTR_hybridDataField_001ba2b0);
  puVar9 = *(undefined8 **)(lVar4 + 8);
  cVar1 = *param_3;
  if ((puVar9 == (undefined8 *)0x0) || ((undefined **)*puVar9 != &PTR_FUN_001b8b50)) {
                    /* try { // try from 001a6b3c to 001a6b57 has its CatchHandler @ 001a6d78 */
    __n = (*(code *)((undefined **)*puVar9)[2])(puVar9);
    if (cVar1 == '\0') {
                    /* try { // try from 001a6bf0 to 001a6bff has its CatchHandler @ 001a6d78 */
      puVar6 = (uchar *)(**(code **)(**(long **)(lVar4 + 8) + 0x18))();
      facebook::jni::JByteBuffer::wrapBytes(puVar6,__n);
                    /* try { // try from 001a6c00 to 001a6c07 has its CatchHandler @ 001a6d34 */
      facebook::jni::JByteOrder::nativeOrder();
                    /* try { // try from 001a6c10 to 001a6c1f has its CatchHandler @ 001a6d30 */
      facebook::jni::JByteBuffer::order(&local_50,param_1,local_58);
      if (local_50 != 0) {
                    /* try { // try from 001a6c28 to 001a6c3b has its CatchHandler @ 001a6d3c */
        plVar8 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar8 + 0xb8))(plVar8,local_50);
      }
      local_50 = 0;
      if (local_60 != 0) {
                    /* try { // try from 001a6c48 to 001a6c5b has its CatchHandler @ 001a6d38 */
        plVar8 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar8 + 0xb8))(plVar8,local_60);
      }
    }
    else {
      facebook::jni::JByteBuffer::allocateDirect((int)__n);
                    /* try { // try from 001a6b58 to 001a6b5f has its CatchHandler @ 001a6d50 */
      facebook::jni::JByteOrder::nativeOrder();
                    /* try { // try from 001a6b68 to 001a6b77 has its CatchHandler @ 001a6d40 */
      facebook::jni::JByteBuffer::order(&local_50,param_1,local_58);
      if (local_50 != 0) {
                    /* try { // try from 001a6b80 to 001a6b93 has its CatchHandler @ 001a6d58 */
        plVar8 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar8 + 0xb8))(plVar8,local_50);
      }
      local_50 = 0;
      if (local_60 != 0) {
                    /* try { // try from 001a6ba0 to 001a6bb3 has its CatchHandler @ 001a6d54 */
        plVar8 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar8 + 0xb8))(plVar8,local_60);
      }
                    /* try { // try from 001a6bb4 to 001a6bd3 has its CatchHandler @ 001a6d5c */
      __dest = (void *)facebook::jni::JBuffer::getDirectAddress();
      __src = (void *)(**(code **)(**(long **)(lVar4 + 8) + 0x18))();
      memcpy(__dest,__src,__n);
    }
  }
  else {
    plVar8 = *(long **)(lVar4 + 0x10);
    if (plVar8 != (long *)0x0) {
      FUN_0015c230(1,plVar8 + 1);
    }
    lVar4 = puVar9[1];
    if (lVar4 != 0) {
                    /* try { // try from 001a6ae4 to 001a6aff has its CatchHandler @ 001a6d84 */
      plVar5 = (long *)facebook::jni::Environment::current();
      lVar4 = (**(code **)(*plVar5 + 200))(plVar5,lVar4);
      facebook::jni::throwPendingJniExceptionAsCppException();
      if (lVar4 == 0) {
        this_00 = (bad_alloc *)__cxa_allocate_exception(8);
        std::bad_alloc::bad_alloc(this_00);
        if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 001a6cfc to 001a6d13 has its CatchHandler @ 001a6d84 */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(this_00,PTR_typeinfo_001ba598,PTR__bad_alloc_001ba590);
        }
        goto LAB_001a6ddc;
      }
    }
    *param_1 = lVar4;
    if ((plVar8 != (long *)0x0) && (lVar4 = FUN_0015bb40(0xffffffffffffffff,plVar8 + 1), lVar4 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_001a6ddc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a6de4  FUN_001a6de4 =====

void FUN_001a6de4(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 001a6e10 to 001a6e23 has its CatchHandler @ 001a6e50 */
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


// ===== 001a6e54  FUN_001a6e54 =====

void FUN_001a6e54(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 001a6e80 to 001a6e93 has its CatchHandler @ 001a6ec0 */
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


// ===== 001a6ec4  FUN_001a6ec4 =====

void FUN_001a6ec4(long *param_1)

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


// ===== 001a6f50  margelo::nitro::JArrayBuffer::initHybridHardwareBuffer =====

/* margelo::nitro::JArrayBuffer::initHybridHardwareBuffer(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JArrayBuffer,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>,
   facebook::jni::alias_ref<facebook::jni::JObject>) */

void margelo::nitro::JArrayBuffer::initHybridHardwareBuffer(void)

{
  long lVar1;
  runtime_error *this;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001a6f78 to 001a6f83 has its CatchHandler @ 001a6fac */
  std::runtime_error::runtime_error
            (this,"ArrayBuffer(HardwareBuffer) requires NDK API 26 or above! (minSdk >= 26)");
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a6fd4  FUN_001a6fd4 =====

void FUN_001a6fd4(undefined8 *param_1)

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
    plVar5 = *(long **)((long)pvVar4 + 0x10);
    if ((plVar5 != (long *)0x0) && (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar5 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      operator_delete(pvVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a7080  FUN_001a7080 =====

void FUN_001a7080(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 001a70ac to 001a70bf has its CatchHandler @ 001a70ec */
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


// ===== 001a70f0  FUN_001a70f0 =====

void FUN_001a70f0(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_001b8b00;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a7134  FUN_001a7134 =====

void FUN_001a7134(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_001b8b00;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a718c  FUN_001a718c =====

void FUN_001a718c(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_001a662c(param_1 + 0x18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a71c8  FUN_001a71c8 =====

void FUN_001a71c8(void *param_1)

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


// ===== 001a7200  FUN_001a7200 =====

void FUN_001a7200(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x10);
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
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


// ===== 001a728c  FUN_001a728c =====

void FUN_001a728c(void *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)((long)param_1 + 0x10);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_0015bb40(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
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


// ===== 001a730c  margelo::nitro::JAnyMap::getAllKeys =====

/* margelo::nitro::JAnyMap::getAllKeys() */

void margelo::nitro::JAnyMap::getAllKeys(void)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  long in_x0;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *in_x8;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long local_58;
  
  lVar2 = tpidr_el0;
  lVar7 = *(long *)(lVar2 + 0x28);
  lVar9 = *(long *)(in_x0 + 8);
  uVar8 = *(ulong *)(lVar9 + 0x18);
  if (((*PTR_elementClass_001ba6b8 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_elementClass_001ba6b8), iVar3 != 0)) {
                    /* try { // try from 001a743c to 001a744f has its CatchHandler @ 001a7460 */
    facebook::jni::findClassStatic(PTR_kBaseName_001ba428);
    __cxa_guard_release(PTR_elementClass_001ba6b8);
  }
  plVar4 = (long *)facebook::jni::Environment::current();
  lVar5 = (**(code **)(*plVar4 + 0x560))
                    (plVar4,uVar8 & 0xffffffff,*(undefined8 *)PTR_elementClass_001ba6b0,0);
  facebook::jni::throwCppExceptionIf(lVar5 == 0);
  plVar4 = *(long **)(lVar9 + 0x10);
  if (plVar4 != (long *)0x0) {
    iVar3 = 0;
    do {
      pcVar1 = (char *)((long)plVar4 + 0x11);
      if ((*(byte *)(plVar4 + 2) & 1) != 0) {
        pcVar1 = (char *)plVar4[4];
      }
                    /* try { // try from 001a73b4 to 001a73bb has its CatchHandler @ 001a7474 */
      facebook::jni::make_jstring(pcVar1);
                    /* try { // try from 001a73c0 to 001a73df has its CatchHandler @ 001a7480 */
      plVar6 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0x570))(plVar6,lVar5,iVar3,local_58);
      if (local_58 != 0) {
                    /* try { // try from 001a73e8 to 001a73fb has its CatchHandler @ 001a747c */
        plVar6 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar6 + 0xb8))(plVar6,local_58);
      }
      plVar4 = (long *)*plVar4;
      iVar3 = iVar3 + 1;
    } while (plVar4 != (long *)0x0);
  }
  *in_x8 = lVar5;
  if (*(long *)(lVar2 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a74b0  FUN_001a74b0 =====

void FUN_001a74b0(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 001a74dc to 001a74ef has its CatchHandler @ 001a751c */
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


// ===== 001a7520  margelo::nitro::JAnyMap::getAnyArray =====

/* margelo::nitro::JAnyMap::getAnyArray(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall margelo::nitro::JAnyMap::getAnyArray(JAnyMap *this,basic_string *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *in_x8;
  void *pvVar4;
  ulong uVar5;
  void *pvVar6;
  undefined8 uVar7;
  void *pvVar8;
  long lVar9;
  void *local_88;
  void *local_80;
  undefined8 local_68;
  long local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  AnyMap::getArray(*(basic_string **)(this + 8));
                    /* try { // try from 001a7570 to 001a7577 has its CatchHandler @ 001a76a0 */
  FUN_0019d78c(&local_68,((long)local_80 - (long)local_88 >> 4) * -0x5555555555555555);
  uVar7 = local_68;
  pvVar8 = local_80;
  if (local_80 != local_88) {
    lVar9 = 0;
    uVar5 = 0;
    do {
                    /* try { // try from 001a75b8 to 001a75c3 has its CatchHandler @ 001a76ac */
      FUN_0019c2e4(&local_60,(long)local_88 + lVar9);
      lVar2 = local_60;
                    /* try { // try from 001a75cc to 001a75eb has its CatchHandler @ 001a76b8 */
      plVar3 = (long *)facebook::jni::Environment::current();
      uVar7 = local_68;
      (**(code **)(*plVar3 + 0x570))(plVar3,local_68,uVar5 & 0xffffffff,lVar2);
      if (lVar2 != 0) {
                    /* try { // try from 001a75f0 to 001a7603 has its CatchHandler @ 001a76b4 */
        plVar3 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar3 + 0xb8))(plVar3,lVar2);
      }
      uVar5 = uVar5 + 1;
      lVar9 = lVar9 + 0x30;
      pvVar8 = local_88;
    } while (uVar5 < (ulong)(((long)local_80 - (long)local_88 >> 4) * -0x5555555555555555));
  }
  *in_x8 = uVar7;
  if (pvVar8 != (void *)0x0) {
    pvVar6 = local_80;
    if (local_80 != pvVar8) {
      do {
        pvVar4 = (void *)((long)pvVar6 + -0x30);
        if (*(uint *)((long)pvVar6 + -8) != 0xffffffff) {
                    /* try { // try from 001a7654 to 001a765f has its CatchHandler @ 001a76a8 */
          (*(code *)(&PTR_FUN_001b9458)[*(uint *)((long)pvVar6 + -8)])(&local_60,pvVar4);
        }
        *(undefined4 *)((long)pvVar6 + -8) = 0xffffffff;
        local_80 = local_88;
        pvVar6 = pvVar4;
      } while (pvVar4 != pvVar8);
    }
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001a76f0  margelo::nitro::JAnyMap::getAnyObject =====

/* margelo::nitro::JAnyMap::getAnyObject(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall margelo::nitro::JAnyMap::getAnyObject(JAnyMap *this,basic_string *param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *in_x8;
  undefined8 *puVar6;
  void *pvVar7;
  void *local_a8;
  undefined8 *local_98;
  undefined4 local_90;
  long local_80;
  long lStack_78;
  long local_70;
  long local_68;
  long local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  AnyMap::getObject(*(basic_string **)(this + 8));
                    /* try { // try from 001a7728 to 001a772f has its CatchHandler @ 001a7890 */
  FUN_0019c1bc(&local_58,local_90);
  puVar6 = local_98;
  if (local_98 == (undefined8 *)0x0) {
    *in_x8 = local_58;
  }
  else {
    do {
      pcVar1 = (char *)((long)puVar6 + 0x11);
      if ((*(byte *)(puVar6 + 2) & 1) != 0) {
        pcVar1 = (char *)puVar6[4];
      }
                    /* try { // try from 001a7760 to 001a7767 has its CatchHandler @ 001a789c */
      facebook::jni::make_jstring(pcVar1);
                    /* try { // try from 001a7768 to 001a7773 has its CatchHandler @ 001a78a4 */
      FUN_0019c2e4(&local_50,puVar6 + 5);
      lVar4 = local_50;
      local_68 = local_50;
      local_80 = local_50;
      lStack_78 = local_60;
                    /* try { // try from 001a7784 to 001a7797 has its CatchHandler @ 001a78ac */
      FUN_0019c944(&local_70,&local_58,&lStack_78,&local_80);
      lVar3 = local_70;
      if (local_70 != 0) {
                    /* try { // try from 001a77a0 to 001a77b3 has its CatchHandler @ 001a78f4 */
        plVar5 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar5 + 0xb8))(plVar5,lVar3);
      }
      local_70 = 0;
      if (lVar4 != 0) {
                    /* try { // try from 001a77bc to 001a77cf has its CatchHandler @ 001a78f0 */
        plVar5 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar5 + 0xb8))(plVar5,lVar4);
      }
      lVar3 = local_60;
      if (local_60 != 0) {
                    /* try { // try from 001a77d8 to 001a77eb has its CatchHandler @ 001a78ec */
        plVar5 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar5 + 0xb8))(plVar5,lVar3);
      }
      puVar6 = (undefined8 *)*puVar6;
    } while (puVar6 != (undefined8 *)0x0);
    *in_x8 = local_58;
    if (local_98 != (undefined8 *)0x0) {
      do {
        pvVar7 = (void *)*local_98;
        if (*(uint *)(local_98 + 10) != 0xffffffff) {
                    /* try { // try from 001a7834 to 001a783f has its CatchHandler @ 001a7898 */
          (*(code *)(&PTR_FUN_001b9458)[*(uint *)(local_98 + 10)])(&local_50,local_98 + 5);
        }
        *(undefined4 *)(local_98 + 10) = 0xffffffff;
        if ((*(byte *)(local_98 + 2) & 1) != 0) {
          operator_delete((void *)local_98[4]);
        }
        operator_delete(local_98);
        local_98 = (undefined8 *)pvVar7;
      } while (pvVar7 != (void *)0x0);
    }
  }
  if (local_a8 != (void *)0x0) {
    operator_delete(local_a8);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001a78f8  FUN_001a78f8 =====

void FUN_001a78f8(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 001a7924 to 001a7937 has its CatchHandler @ 001a7964 */
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


// ===== 001a7968  margelo::nitro::JAnyMap::getAnyValue =====

/* margelo::nitro::JAnyMap::getAnyValue(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall margelo::nitro::JAnyMap::getAnyValue(JAnyMap *this,basic_string *param_1)

{
  long lVar1;
  undefined8 *in_x8;
  undefined1 auStack_60 [40];
  uint local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  AnyMap::getAny(*(basic_string **)(this + 8));
                    /* try { // try from 001a7994 to 001a799f has its CatchHandler @ 001a79f0 */
  FUN_0019c2e4(&local_30,auStack_60);
  *in_x8 = local_30;
  if (local_38 != 0xffffffff) {
                    /* try { // try from 001a79c0 to 001a79cb has its CatchHandler @ 001a79ec */
    (*(code *)(&PTR_FUN_001b9458)[local_38])(&local_30,auStack_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a7a18  FUN_001a7a18 =====

void FUN_001a7a18(long param_1)

{
  long lVar1;
  undefined1 uStack_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(uint *)(param_1 + 0x28) != 0xffffffff) {
                    /* try { // try from 001a7a50 to 001a7a5b has its CatchHandler @ 001a7a88 */
    (*(code *)(&PTR_FUN_001b9458)[*(uint *)(param_1 + 0x28)])(&uStack_29,param_1);
  }
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a7a8c  margelo::nitro::JAnyMap::setAnyArray =====

/* margelo::nitro::JAnyMap::setAnyArray(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   facebook::jni::alias_ref<facebook::jni::JArrayClass<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>
   >) */

void __thiscall
margelo::nitro::JAnyMap::setAnyArray(JAnyMap *this,basic_string *param_1,undefined8 *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  long local_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_90 = (undefined1 *)0x0;
  local_88 = (undefined1 *)0x0;
  local_80 = (undefined1 *)0x0;
                    /* try { // try from 001a7acc to 001a7adf has its CatchHandler @ 001a7cd4 */
  plVar8 = (long *)facebook::jni::Environment::current();
  iVar6 = (**(code **)(*plVar8 + 0x558))(plVar8,*param_3);
                    /* try { // try from 001a7ae8 to 001a7af3 has its CatchHandler @ 001a7cd0 */
  FUN_001a0a1c(&local_90,(long)iVar6);
  puVar4 = PTR_hybridDataField_001ba368;
  puVar3 = PTR_hybridDataField_001ba360;
  if (iVar6 != 0) {
    uVar11 = 0;
    do {
                    /* try { // try from 001a7b28 to 001a7b3f has its CatchHandler @ 001a7d04 */
      plVar8 = (long *)facebook::jni::Environment::current();
      local_78 = (**(code **)(*plVar8 + 0x568))(plVar8,*param_3,uVar11 & 0xffffffff);
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
        facebook::jni::JObject::getClass();
                    /* try { // try from 001a7bec to 001a7bef has its CatchHandler @ 001a7cb4 */
        uVar10 = FUN_0019c044(local_70);
        *(undefined8 *)puVar3 = uVar10;
        facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
        ::~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
                           *)&local_70);
        __cxa_guard_release(puVar4);
      }
                    /* try { // try from 001a7b4c to 001a7b57 has its CatchHandler @ 001a7cf4 */
      lVar9 = facebook::jni::getHybridDataFromField((JObject *)&local_78,(JField *)puVar3);
      puVar2 = local_88;
      if (local_88 < local_80) {
        *local_88 = 0;
        *(undefined4 *)(local_88 + 0x28) = 0xffffffff;
        if (*(uint *)(lVar9 + 0x30) != 0xffffffff) {
                    /* try { // try from 001a7b80 to 001a7b8f has its CatchHandler @ 001a7cd8 */
          (*(code *)(&
                    PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<margelo_nitro_NullType,bool,double,long,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<margelo_nitro_AnyValue,std___ndk1_allocator<margelo_nitro_AnyValue>>,std___ndk1_unordered_map<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,margelo_nitro_AnyValue,std___ndk1_hash<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_equal_to<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_allocator<std___ndk1_pair<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___copy_constructor<std___ndk1___variant_detail___traits<marge___td___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>const_>_001b9490
                    )[*(uint *)(lVar9 + 0x30)])(&local_70,local_88,lVar9 + 8);
          *(undefined4 *)(puVar2 + 0x28) = *(undefined4 *)(lVar9 + 0x30);
        }
        local_88 = puVar2 + 0x30;
      }
      else {
                    /* try { // try from 001a7ba0 to 001a7bab has its CatchHandler @ 001a7cf4 */
        local_88 = (undefined1 *)FUN_001a0bd0(&local_90,lVar9 + 8);
      }
      lVar9 = local_78;
      if (local_78 != 0) {
                    /* try { // try from 001a7bb8 to 001a7bcb has its CatchHandler @ 001a7cf0 */
        plVar8 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar8 + 0xb8))(plVar8,lVar9);
      }
      uVar11 = uVar11 + 1;
    } while ((long)iVar6 != uVar11);
  }
                    /* try { // try from 001a7c0c to 001a7c17 has its CatchHandler @ 001a7cd0 */
  AnyMap::setArray(*(AnyMap **)(this + 8),param_1,(vector *)&local_90);
  puVar5 = local_90;
  puVar2 = local_88;
  if (local_90 != (undefined1 *)0x0) {
    while (puVar2 != puVar5) {
      if (*(uint *)(puVar2 + -8) != 0xffffffff) {
                    /* try { // try from 001a7c64 to 001a7c6f has its CatchHandler @ 001a7cec */
        (*(code *)(&PTR_FUN_001b9458)[*(uint *)(puVar2 + -8)])(&local_70,puVar2 + -0x30);
      }
      *(undefined4 *)(puVar2 + -8) = 0xffffffff;
      puVar2 = puVar2 + -0x30;
    }
    local_88 = puVar5;
    operator_delete(local_90);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001a7d30  margelo::nitro::JAnyMap::setAnyObject =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* margelo::nitro::JAnyMap::setAnyObject(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   facebook::jni::alias_ref<facebook::jni::JMap<facebook::jni::JString,
   facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*> >
   const&) */

void __thiscall
margelo::nitro::JAnyMap::setAnyObject(JAnyMap *this,basic_string *param_1,alias_ref *param_2)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  void *pvVar10;
  byte local_d8 [16];
  void *local_c8;
  void *local_c0;
  undefined8 uStack_b8;
  void *local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  long local_90;
  long lStack_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uStack_b8 = 0;
  local_c0 = (void *)0x0;
  uStack_a8 = 0;
  local_b0 = (void *)0x0;
  local_a0 = 0x3f800000;
                    /* try { // try from 001a7d70 to 001a7d83 has its CatchHandler @ 001a7fec */
  uVar7 = FUN_0019ebfc(param_2);
  FUN_0019ece4(&local_c0,uVar7);
                    /* try { // try from 001a7d84 to 001a7d93 has its CatchHandler @ 001a7fd0 */
  FUN_0019ee1c(&local_70,param_2);
  puVar5 = PTR_hybridDataField_001ba368;
  puVar4 = PTR_hybridDataField_001ba360;
  lStack_88 = _UNK_00138be8;
  local_90 = _DAT_00138be0;
  local_80 = 0;
  local_78 = 0;
  while (lVar8 = local_78, local_68 != lStack_88) {
                    /* try { // try from 001a7dd0 to 001a7ddb has its CatchHandler @ 001a7ff8 */
    facebook::jni::JString::toStdString();
    if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar5), iVar6 != 0)) {
      facebook::jni::JObject::getClass();
                    /* try { // try from 001a7e38 to 001a7e3b has its CatchHandler @ 001a7fb4 */
      uVar7 = FUN_0019c044(local_50);
      *(undefined8 *)puVar4 = uVar7;
      facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
      ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
                       *)&local_50);
      __cxa_guard_release(puVar5);
    }
                    /* try { // try from 001a7de4 to 001a7e07 has its CatchHandler @ 001a8008 */
    lVar8 = facebook::jni::getHybridDataFromField((JObject *)&local_58,(JField *)puVar4);
    FUN_0019f044(&local_c0,local_d8,local_d8,lVar8 + 8);
    if ((local_d8[0] & 1) != 0) {
      operator_delete(local_c8);
    }
                    /* try { // try from 001a7db8 to 001a7dbf has its CatchHandler @ 001a8000 */
    FUN_0019f47c(&local_70);
  }
  if (local_78 != 0) {
                    /* try { // try from 001a7e5c to 001a7e6f has its CatchHandler @ 001a7fe8 */
    plVar9 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar9 + 0xb8))(plVar9,lVar8);
  }
  lVar8 = local_80;
  local_78 = 0;
  if (local_80 != 0) {
                    /* try { // try from 001a7e7c to 001a7e8f has its CatchHandler @ 001a7fe4 */
    plVar9 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar9 + 0xb8))(plVar9,lVar8);
  }
  lVar8 = local_90;
  local_80 = 0;
  if (local_90 != 0) {
                    /* try { // try from 001a7e9c to 001a7eaf has its CatchHandler @ 001a7fe0 */
    plVar9 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar9 + 0xb0))(plVar9,lVar8);
  }
  if (local_58 != 0) {
                    /* try { // try from 001a7eb8 to 001a7ecb has its CatchHandler @ 001a7fdc */
    plVar9 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar9 + 0xb8))(plVar9,local_58);
  }
  local_58 = 0;
  if (local_60 != 0) {
                    /* try { // try from 001a7ed8 to 001a7eeb has its CatchHandler @ 001a7fd8 */
    plVar9 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar9 + 0xb8))(plVar9,local_60);
  }
  local_60 = 0;
  if (local_70 != 0) {
                    /* try { // try from 001a7ef8 to 001a7f0b has its CatchHandler @ 001a7fd4 */
    plVar9 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar9 + 0xb0))(plVar9,local_70);
  }
                    /* try { // try from 001a7f10 to 001a7f1b has its CatchHandler @ 001a7fec */
  AnyMap::setObject(*(AnyMap **)(this + 8),param_1,(unordered_map *)&local_c0);
  pvVar2 = local_c0;
  puVar3 = (undefined8 *)local_b0;
  while (puVar3 != (undefined8 *)0x0) {
    pvVar10 = (void *)*puVar3;
    local_c0 = pvVar2;
    if (*(uint *)(puVar3 + 10) != 0xffffffff) {
                    /* try { // try from 001a7f58 to 001a7f63 has its CatchHandler @ 001a7ff4 */
      (*(code *)(&PTR_FUN_001b9458)[*(uint *)(puVar3 + 10)])(&local_70,puVar3 + 5);
    }
    *(undefined4 *)(puVar3 + 10) = 0xffffffff;
    if ((*(byte *)(puVar3 + 2) & 1) != 0) {
      operator_delete((void *)puVar3[4]);
    }
    operator_delete(puVar3);
    pvVar2 = local_c0;
    puVar3 = (undefined8 *)pvVar10;
  }
  local_c0 = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a8050  margelo::nitro::JAnyMap::setAnyValue =====

/* margelo::nitro::JAnyMap::setAnyValue(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JAnyValue,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>
   const&) */

void __thiscall
margelo::nitro::JAnyMap::setAnyValue(JAnyMap *this,basic_string *param_1,alias_ref *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  AnyMap *this_00;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this_00 = *(AnyMap **)(this + 8);
  if ((*PTR_hybridDataField_001ba368 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba368);
    if (iVar2 != 0) {
      facebook::jni::JObject::getClass();
                    /* try { // try from 001a80f4 to 001a80f7 has its CatchHandler @ 001a8120 */
      uVar4 = FUN_0019c044(local_40);
      *(undefined8 *)PTR_hybridDataField_001ba360 = uVar4;
      facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
      ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
                       *)&local_40);
      __cxa_guard_release(PTR_hybridDataField_001ba368);
    }
  }
  lVar3 = facebook::jni::getHybridDataFromField
                    ((JObject *)param_2,(JField *)PTR_hybridDataField_001ba360);
  AnyMap::setAny(this_00,param_1,(AnyValue *)(lVar3 + 8));
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a8154  margelo::nitro::JAnyMap::toHashMap =====

/* margelo::nitro::JAnyMap::toHashMap() */

void margelo::nitro::JAnyMap::toHashMap(void)

{
  char *pcVar1;
  long lVar2;
  long in_x0;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long local_70;
  long local_60;
  long local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)(in_x0 + 8);
  FUN_001a82bc();
  for (plVar5 = *(long **)(lVar4 + 0x10); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
    pcVar1 = (char *)((long)plVar5 + 0x11);
    if ((*(byte *)(plVar5 + 2) & 1) != 0) {
      pcVar1 = (char *)plVar5[4];
    }
                    /* try { // try from 001a81d8 to 001a81df has its CatchHandler @ 001a8268 */
    facebook::jni::make_jstring(pcVar1);
                    /* try { // try from 001a81e8 to 001a81f3 has its CatchHandler @ 001a8270 */
    anyValueToJObject((AnyValue *)(plVar5 + 5));
                    /* try { // try from 001a81fc to 001a820f has its CatchHandler @ 001a8278 */
    FUN_001a8828(&local_50);
    lVar4 = local_50;
    if (local_50 != 0) {
                    /* try { // try from 001a8218 to 001a822b has its CatchHandler @ 001a82b8 */
      plVar3 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar3 + 0xb8))(plVar3,lVar4);
    }
    local_50 = 0;
    if (local_70 != 0) {
                    /* try { // try from 001a8234 to 001a8247 has its CatchHandler @ 001a82b4 */
      plVar3 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar3 + 0xb8))(plVar3,local_70);
    }
    if (local_60 != 0) {
                    /* try { // try from 001a8250 to 001a8263 has its CatchHandler @ 001a82b0 */
      plVar3 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar3 + 0xb8))(plVar3,local_60);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001a82bc  FUN_001a82bc =====

void FUN_001a82bc(long *param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  _jclass *p_Var4;
  long lVar5;
  long lVar6;
  
  lVar1 = tpidr_el0;
  lVar6 = *(long *)(lVar1 + 0x28);
  if (((DAT_001c0208 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_001c0208), iVar3 != 0)) {
                    /* try { // try from 001a836c to 001a836f has its CatchHandler @ 001a83b8 */
    FUN_001a9548();
    __cxa_guard_release(&DAT_001c0208);
  }
  if (((DAT_001c0218 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_001c0218), iVar3 != 0)) {
                    /* try { // try from 001a8390 to 001a8393 has its CatchHandler @ 001a83a8 */
    DAT_001c0210 = FUN_001a9608();
    __cxa_guard_release(&DAT_001c0218);
  }
  uVar2 = DAT_001c0210;
  p_Var4 = (_jclass *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::NewObject(p_Var4,DAT_001c0200,uVar2,param_2 & 0xffffffff);
  if (*(long *)(lVar1 + 0x28) == lVar6) {
    facebook::jni::throwCppExceptionIf(lVar5 == 0);
    *param_1 = lVar5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a83e4  margelo::nitro::JAnyMap::anyValueToJObject =====

/* margelo::nitro::JAnyMap::anyValueToJObject(margelo::nitro::AnyValue const&) */

void margelo::nitro::JAnyMap::anyValueToJObject(AnyValue *param_1)

{
  AnyValue AVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  _jclass *p_Var6;
  long lVar7;
  undefined8 uVar8;
  bad_alloc *pbVar9;
  vector *in_x1;
  long *in_x8;
  long lVar10;
  AnyValue *pAVar11;
  undefined8 uVar12;
  _jmethodID *p_Var13;
  long local_50;
  
  lVar2 = tpidr_el0;
  lVar10 = *(long *)(lVar2 + 0x28);
  iVar4 = *(int *)(param_1 + 0x28);
  if (iVar4 < 3) {
    if (iVar4 == 0) goto LAB_001a85b4;
    if (iVar4 == 1) {
      AVar1 = *param_1;
      if (((*PTR_cls_001ba640 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_cls_001ba640), iVar4 != 0)) {
                    /* try { // try from 001a86f8 to 001a8703 has its CatchHandler @ 001a87b8 */
        FUN_001a92c8(PTR_cls_001ba638);
        __cxa_guard_release(PTR_cls_001ba640);
      }
      puVar3 = PTR_method_001ba648;
      if (((*PTR_method_001ba650 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_method_001ba650), iVar4 != 0)) {
                    /* try { // try from 001a8724 to 001a8727 has its CatchHandler @ 001a87ac */
        uVar12 = FUN_001a9388();
        *(undefined8 *)puVar3 = uVar12;
        __cxa_guard_release(PTR_method_001ba650);
      }
      p_Var13 = *(_jmethodID **)PTR_cls_001ba638;
      p_Var6 = (_jclass *)facebook::jni::Environment::current();
      lVar7 = _JNIEnv::CallStaticObjectMethod
                        (p_Var6,p_Var13,*(undefined8 *)puVar3,(ulong)(byte)AVar1);
    }
    else {
      if (iVar4 != 2) goto LAB_001a85b4;
      uVar12 = *(undefined8 *)param_1;
      if (((*PTR_cls_001ba690 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_cls_001ba690), iVar4 != 0)) {
                    /* try { // try from 001a86a4 to 001a86af has its CatchHandler @ 001a87d0 */
        FUN_001a9408(PTR_cls_001ba688);
        __cxa_guard_release(PTR_cls_001ba690);
      }
      puVar3 = PTR_method_001ba698;
      if (((*PTR_method_001ba6a0 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_method_001ba6a0), iVar4 != 0)) {
                    /* try { // try from 001a86d0 to 001a86d3 has its CatchHandler @ 001a87c4 */
        uVar8 = FUN_001a94c8();
        *(undefined8 *)puVar3 = uVar8;
        __cxa_guard_release(PTR_method_001ba6a0);
      }
      p_Var13 = *(_jmethodID **)PTR_cls_001ba688;
      p_Var6 = (_jclass *)facebook::jni::Environment::current();
      lVar7 = _JNIEnv::CallStaticObjectMethod(p_Var6,p_Var13,uVar12,*(undefined8 *)puVar3);
    }
LAB_001a8608:
    facebook::jni::throwPendingJniExceptionAsCppException();
    *in_x8 = lVar7;
  }
  else if (iVar4 < 5) {
    if (iVar4 == 3) {
      uVar12 = *(undefined8 *)param_1;
      if (((*PTR_cls_001ba668 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_cls_001ba668), iVar4 != 0)) {
                    /* try { // try from 001a8650 to 001a865b has its CatchHandler @ 001a87e8 */
        FUN_001a90ec(PTR_cls_001ba660);
        __cxa_guard_release(PTR_cls_001ba668);
      }
      puVar3 = PTR_method_001ba670;
      if (((*PTR_method_001ba678 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_method_001ba678), iVar4 != 0)) {
                    /* try { // try from 001a867c to 001a867f has its CatchHandler @ 001a87dc */
        uVar8 = FUN_001a91ac();
        *(undefined8 *)puVar3 = uVar8;
        __cxa_guard_release(PTR_method_001ba678);
      }
      p_Var13 = *(_jmethodID **)PTR_cls_001ba660;
      p_Var6 = (_jclass *)facebook::jni::Environment::current();
      lVar7 = _JNIEnv::CallStaticObjectMethod(p_Var6,p_Var13,*(undefined8 *)puVar3,uVar12);
      goto LAB_001a8608;
    }
    if (iVar4 != 4) goto LAB_001a85b4;
    pAVar11 = *(AnyValue **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pAVar11 = param_1 + 1;
    }
    facebook::jni::make_jstring((char *)pAVar11);
    *in_x8 = local_50;
  }
  else {
    if (iVar4 == 5) {
      anyArrayToJList((JAnyMap *)param_1,in_x1);
      if (local_50 != 0) {
                    /* try { // try from 001a8578 to 001a8593 has its CatchHandler @ 001a8824 */
        plVar5 = (long *)facebook::jni::Environment::current();
        lVar7 = (**(code **)(*plVar5 + 200))(plVar5,local_50);
        facebook::jni::throwPendingJniExceptionAsCppException();
        if (lVar7 == 0) {
          pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
          if (*(long *)(lVar2 + 0x28) == lVar10) {
            std::bad_alloc::bad_alloc(pbVar9);
                    /* try { // try from 001a875c to 001a8773 has its CatchHandler @ 001a8824 */
                    /* WARNING: Subroutine does not return */
            __cxa_throw(pbVar9,PTR_typeinfo_001ba598,PTR__bad_alloc_001ba590);
          }
          goto LAB_001a8814;
        }
        *in_x8 = lVar7;
                    /* try { // try from 001a859c to 001a85af has its CatchHandler @ 001a881c */
        plVar5 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar5 + 0xb8))(plVar5,local_50);
        goto LAB_001a8614;
      }
    }
    else if (iVar4 == 6) {
      anyObjectToJHashMap((JAnyMap *)param_1,(unordered_map *)in_x1);
      if (local_50 != 0) {
                    /* try { // try from 001a84dc to 001a84f7 has its CatchHandler @ 001a8820 */
        plVar5 = (long *)facebook::jni::Environment::current();
        lVar7 = (**(code **)(*plVar5 + 200))(plVar5,local_50);
        facebook::jni::throwPendingJniExceptionAsCppException();
        if (lVar7 == 0) {
          pbVar9 = (bad_alloc *)__cxa_allocate_exception(8);
          if (*(long *)(lVar2 + 0x28) == lVar10) {
            std::bad_alloc::bad_alloc(pbVar9);
                    /* try { // try from 001a8794 to 001a87ab has its CatchHandler @ 001a8820 */
                    /* WARNING: Subroutine does not return */
            __cxa_throw(pbVar9,PTR_typeinfo_001ba598,PTR__bad_alloc_001ba590);
          }
          goto LAB_001a8814;
        }
        *in_x8 = lVar7;
                    /* try { // try from 001a8500 to 001a8513 has its CatchHandler @ 001a8818 */
        plVar5 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar5 + 0xb8))(plVar5,local_50);
        goto LAB_001a8614;
      }
    }
LAB_001a85b4:
    *in_x8 = 0;
  }
LAB_001a8614:
  if (*(long *)(lVar2 + 0x28) == lVar10) {
    return;
  }
LAB_001a8814:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a8828  FUN_001a8828 =====

void FUN_001a8828(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  _jobject *p_Var4;
  undefined8 uVar5;
  undefined8 uVar6;
  _jmethodID *p_Var7;
  undefined1 auStack_50 [8];
  long local_48;
  
  puVar2 = PTR_putMethod_001ba6e0;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((*PTR_putMethod_001ba6e8 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_putMethod_001ba6e8), iVar3 != 0)) {
                    /* try { // try from 001a88dc to 001a88f3 has its CatchHandler @ 001a8908 */
    FUN_001a89a4(auStack_50);
    uVar5 = FUN_0019cc60(auStack_50,&DAT_00137a8d);
    *(undefined8 *)puVar2 = uVar5;
    __cxa_guard_release(PTR_putMethod_001ba6e8);
  }
  p_Var7 = (_jmethodID *)*param_2;
  uVar6 = *param_3;
  uVar5 = *param_4;
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  uVar5 = _JNIEnv::CallObjectMethod(p_Var4,p_Var7,*(undefined8 *)puVar2,uVar6,uVar5);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    facebook::jni::throwPendingJniExceptionAsCppException();
    *param_1 = uVar5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a8934  FUN_001a8934 =====

void FUN_001a8934(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 001a8960 to 001a8973 has its CatchHandler @ 001a89a0 */
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


// ===== 001a89a4  FUN_001a89a4 =====

void FUN_001a89a4(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_001ba7f0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_001ba7f0), iVar2 != 0))
  {
                    /* try { // try from 001a8a14 to 001a8a27 has its CatchHandler @ 001a8a38 */
    facebook::jni::findClassStatic(PTR_kBaseName_001ba7f8);
    __cxa_guard_release(PTR_cls_001ba7f0);
  }
  *param_1 = *(undefined8 *)PTR_cls_001ba7e8;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a8a64  margelo::nitro::JAnyMap::anyArrayToJList =====

/* margelo::nitro::JAnyMap::anyArrayToJList(std::__ndk1::vector<margelo::nitro::AnyValue,
   std::__ndk1::allocator<margelo::nitro::AnyValue> > const&) */

void __thiscall margelo::nitro::JAnyMap::anyArrayToJList(JAnyMap *this,vector *param_1)

{
  AnyValue *pAVar1;
  long lVar2;
  AnyValue *pAVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  _jclass *p_Var8;
  long lVar9;
  _jobject *p_Var10;
  long *plVar11;
  undefined8 uVar12;
  vector *extraout_x1;
  vector *extraout_x1_00;
  long *in_x8;
  _jmethodID *p_Var13;
  long local_68;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lVar9 = *(long *)this;
  lVar2 = *(long *)(this + 8);
  if (((DAT_001c0248 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(&DAT_001c0248), param_1 = extraout_x1, iVar7 != 0)) {
                    /* try { // try from 001a8be8 to 001a8beb has its CatchHandler @ 001a8c38 */
    FUN_001a8fb0();
    __cxa_guard_release(&DAT_001c0248);
    param_1 = extraout_x1_00;
  }
  if (((DAT_001c0258 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_001c0258,param_1), iVar7 != 0))
  {
                    /* try { // try from 001a8c0c to 001a8c0f has its CatchHandler @ 001a8c24 */
    DAT_001c0250 = FUN_001a9070();
    __cxa_guard_release(&DAT_001c0258);
  }
  uVar12 = DAT_001c0250;
  p_Var8 = (_jclass *)facebook::jni::Environment::current();
  lVar9 = _JNIEnv::NewObject(p_Var8,DAT_001c0240,uVar12,
                             (ulong)(uint)((int)((ulong)(lVar2 - lVar9) >> 4) * -0x55555555));
  facebook::jni::throwCppExceptionIf(lVar9 == 0);
  pAVar1 = *(AnyValue **)this;
  pAVar3 = *(AnyValue **)(this + 8);
  *in_x8 = lVar9;
  puVar6 = PTR_addMethod_001ba718;
  puVar5 = PTR_addMethod_001ba710;
  for (; pAVar1 != pAVar3; pAVar1 = pAVar1 + 0x30) {
                    /* try { // try from 001a8b2c to 001a8b37 has its CatchHandler @ 001a8c60 */
    anyValueToJObject(pAVar1);
    if (((*puVar6 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar6), iVar7 != 0)) {
                    /* try { // try from 001a8b8c to 001a8b9b has its CatchHandler @ 001a8c4c */
      FUN_001a8e74(auStack_60);
      uVar12 = FUN_001a8f34(auStack_60);
      *(undefined8 *)puVar5 = uVar12;
      __cxa_guard_release(puVar6);
    }
    p_Var13 = (_jmethodID *)*in_x8;
                    /* try { // try from 001a8b48 to 001a8b5f has its CatchHandler @ 001a8c6c */
    p_Var10 = (_jobject *)facebook::jni::Environment::current();
    _JNIEnv::CallBooleanMethod(p_Var10,p_Var13,*(undefined8 *)puVar5,local_68);
    facebook::jni::throwPendingJniExceptionAsCppException();
    if (local_68 != 0) {
                    /* try { // try from 001a8b68 to 001a8b7b has its CatchHandler @ 001a8c68 */
      plVar11 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar11 + 0xb8))(plVar11,local_68);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a8c9c  FUN_001a8c9c =====

void FUN_001a8c9c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 001a8cc8 to 001a8cdb has its CatchHandler @ 001a8d08 */
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


// ===== 001a8d0c  margelo::nitro::JAnyMap::anyObjectToJHashMap =====

/* margelo::nitro::JAnyMap::anyObjectToJHashMap(std::__ndk1::unordered_map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, margelo::nitro::AnyValue,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, margelo::nitro::AnyValue> >
   > const&) */

void __thiscall margelo::nitro::JAnyMap::anyObjectToJHashMap(JAnyMap *this,unordered_map *param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long local_70;
  long local_60;
  long local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_001a82bc();
  for (plVar5 = *(long **)(this + 0x10); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
    pcVar1 = (char *)((long)plVar5 + 0x11);
    if ((*(byte *)(plVar5 + 2) & 1) != 0) {
      pcVar1 = (char *)plVar5[4];
    }
                    /* try { // try from 001a8d90 to 001a8d97 has its CatchHandler @ 001a8e20 */
    facebook::jni::make_jstring(pcVar1);
                    /* try { // try from 001a8da0 to 001a8dab has its CatchHandler @ 001a8e28 */
    anyValueToJObject((AnyValue *)(plVar5 + 5));
                    /* try { // try from 001a8db4 to 001a8dc7 has its CatchHandler @ 001a8e30 */
    FUN_001a8828(&local_50);
    lVar3 = local_50;
    if (local_50 != 0) {
                    /* try { // try from 001a8dd0 to 001a8de3 has its CatchHandler @ 001a8e70 */
      plVar4 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar4 + 0xb8))(plVar4,lVar3);
    }
    local_50 = 0;
    if (local_70 != 0) {
                    /* try { // try from 001a8dec to 001a8dff has its CatchHandler @ 001a8e6c */
      plVar4 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar4 + 0xb8))(plVar4,local_70);
    }
    if (local_60 != 0) {
                    /* try { // try from 001a8e08 to 001a8e1b has its CatchHandler @ 001a8e68 */
      plVar4 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar4 + 0xb8))(plVar4,local_60);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001a8e74  FUN_001a8e74 =====

void FUN_001a8e74(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_001ba728 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_001ba728), iVar2 != 0))
  {
                    /* try { // try from 001a8ee4 to 001a8ef7 has its CatchHandler @ 001a8f08 */
    facebook::jni::findClassStatic(PTR_kBaseName_001ba730);
    __cxa_guard_release(PTR_cls_001ba728);
  }
  *param_1 = *(undefined8 *)PTR_cls_001ba720;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a8f34  FUN_001a8f34 =====

long FUN_001a8f34(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,&DAT_00137279,PTR_kDescriptor_001ba738);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a8fb0  FUN_001a8fb0 =====

void FUN_001a8fb0(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_001ba6f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_001ba6f8), iVar2 != 0))
  {
                    /* try { // try from 001a9020 to 001a9033 has its CatchHandler @ 001a9044 */
    facebook::jni::findClassStatic(PTR_kBaseName_001ba700);
    __cxa_guard_release(PTR_cls_001ba6f8);
  }
  DAT_001c0240 = *(undefined8 *)PTR_cls_001ba6f0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a9070  FUN_001a9070 =====

long FUN_001a9070(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,DAT_001c0240,"<init>",PTR_kConstructorDescriptor_001ba708);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a90ec  FUN_001a90ec =====

void FUN_001a90ec(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_001ba7a8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_001ba7a8), iVar2 != 0))
  {
                    /* try { // try from 001a915c to 001a916f has its CatchHandler @ 001a9180 */
    facebook::jni::findClassStatic(PTR_kBaseName_001ba7b0);
    __cxa_guard_release(PTR_cls_001ba7a8);
  }
  *param_1 = *(undefined8 *)PTR_cls_001ba7a0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a91ac  FUN_001a91ac =====

long FUN_001a91ac(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x388))
                    (plVar2,*(undefined8 *)PTR_cls_001ba660,"valueOf",PTR_kDescriptor_001ba680);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a922c  _JNIEnv::CallStaticObjectMethod =====

/* _JNIEnv::CallStaticObjectMethod(_jclass*, _jmethodID*, ...) */

void _JNIEnv::CallStaticObjectMethod(_jclass *param_1,_jmethodID *param_2,...)

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
  (**(code **)(*(long *)param_1 + 0x398))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a92c8  FUN_001a92c8 =====

void FUN_001a92c8(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_001ba790 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_001ba790), iVar2 != 0))
  {
                    /* try { // try from 001a9338 to 001a934b has its CatchHandler @ 001a935c */
    facebook::jni::findClassStatic(PTR_kBaseName_001ba798);
    __cxa_guard_release(PTR_cls_001ba790);
  }
  *param_1 = *(undefined8 *)PTR_cls_001ba788;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a9388  FUN_001a9388 =====

long FUN_001a9388(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x388))
                    (plVar2,*(undefined8 *)PTR_cls_001ba638,"valueOf",PTR_kDescriptor_001ba658);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a9408  FUN_001a9408 =====

void FUN_001a9408(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_001ba748 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_001ba748), iVar2 != 0))
  {
                    /* try { // try from 001a9478 to 001a948b has its CatchHandler @ 001a949c */
    facebook::jni::findClassStatic(PTR_kBaseName_001ba750);
    __cxa_guard_release(PTR_cls_001ba748);
  }
  *param_1 = *(undefined8 *)PTR_cls_001ba740;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a94c8  FUN_001a94c8 =====

long FUN_001a94c8(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x388))
                    (plVar2,*(undefined8 *)PTR_cls_001ba688,"valueOf",PTR_kDescriptor_001ba6a8);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a9548  FUN_001a9548 =====

void FUN_001a9548(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_001ba6c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_001ba6c8), iVar2 != 0))
  {
                    /* try { // try from 001a95b8 to 001a95cb has its CatchHandler @ 001a95dc */
    facebook::jni::findClassStatic(PTR_kBaseName_001ba6d0);
    __cxa_guard_release(PTR_cls_001ba6c8);
  }
  DAT_001c0200 = *(undefined8 *)PTR_cls_001ba6c0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a9608  FUN_001a9608 =====

long FUN_001a9608(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,DAT_001c0200,"<init>",PTR_kConstructorDescriptor_001ba6d8);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a9684  margelo::nitro::JAnyMap::jObjectToAnyValue =====

/* margelo::nitro::JAnyMap::jObjectToAnyValue(facebook::jni::alias_ref<facebook::jni::JObject>) */

void __thiscall margelo::nitro::JAnyMap::jObjectToAnyValue(double *param_1,JAnyMap *this)

{
  long lVar1;
  undefined *puVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  _jobject *p_Var8;
  ulong uVar9;
  runtime_error *this_00;
  undefined4 uVar10;
  _jmethodID *p_Var11;
  undefined8 uVar12;
  float fVar13;
  double dVar14;
  undefined8 local_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)this == 0) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 5) = 0;
  }
  else {
    if (((*PTR_cls_001ba748 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_cls_001ba748), iVar5 != 0)) {
                    /* try { // try from 001a9a34 to 001a9a47 has its CatchHandler @ 001a9cb8 */
      facebook::jni::findClassStatic(PTR_kBaseName_001ba750);
      __cxa_guard_release(PTR_cls_001ba748);
    }
    uVar12 = *(undefined8 *)PTR_cls_001ba740;
                    /* try { // try from 001a96d4 to 001a96eb has its CatchHandler @ 001a9d14 */
    plVar6 = (long *)facebook::jni::Environment::current();
    cVar4 = (**(code **)(*plVar6 + 0x100))(plVar6,*(undefined8 *)this,uVar12);
    puVar2 = PTR_method_001ba5b0;
    if (cVar4 == '\0') {
      if (((*PTR_cls_001ba760 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_cls_001ba760), iVar5 != 0)) {
                    /* try { // try from 001a9a9c to 001a9aaf has its CatchHandler @ 001a9c98 */
        facebook::jni::findClassStatic(PTR_kBaseName_001ba768);
        __cxa_guard_release(PTR_cls_001ba760);
      }
      uVar12 = *(undefined8 *)PTR_cls_001ba758;
                    /* try { // try from 001a975c to 001a9773 has its CatchHandler @ 001a9d10 */
      plVar6 = (long *)facebook::jni::Environment::current();
      cVar4 = (**(code **)(*plVar6 + 0x100))(plVar6,*(undefined8 *)this,uVar12);
      puVar2 = PTR_method_001ba5c0;
      if (cVar4 == '\0') {
        if (((*PTR_cls_001ba778 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_cls_001ba778), iVar5 != 0)) {
                    /* try { // try from 001a9b04 to 001a9b17 has its CatchHandler @ 001a9c78 */
          facebook::jni::findClassStatic(PTR_kBaseName_001ba780);
          __cxa_guard_release(PTR_cls_001ba778);
        }
        uVar12 = *(undefined8 *)PTR_cls_001ba770;
                    /* try { // try from 001a97d4 to 001a97eb has its CatchHandler @ 001a9d0c */
        plVar6 = (long *)facebook::jni::Environment::current();
        cVar4 = (**(code **)(*plVar6 + 0x100))(plVar6,*(undefined8 *)this,uVar12);
        puVar2 = PTR_method_001ba5d8;
        if (cVar4 == '\0') {
          if (((*PTR_cls_001ba790 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_cls_001ba790), iVar5 != 0)) {
                    /* try { // try from 001a9b74 to 001a9b87 has its CatchHandler @ 001a9c58 */
            facebook::jni::findClassStatic(PTR_kBaseName_001ba798);
            __cxa_guard_release(PTR_cls_001ba790);
          }
          uVar12 = *(undefined8 *)PTR_cls_001ba788;
                    /* try { // try from 001a987c to 001a9893 has its CatchHandler @ 001a9d08 */
          plVar6 = (long *)facebook::jni::Environment::current();
          cVar4 = (**(code **)(*plVar6 + 0x100))(plVar6,*(undefined8 *)this,uVar12);
          puVar2 = PTR_method_001ba5e8;
          if (cVar4 == '\0') {
            if (((*PTR_cls_001ba7a8 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(PTR_cls_001ba7a8), iVar5 != 0)) {
                    /* try { // try from 001a9be4 to 001a9bf7 has its CatchHandler @ 001a9c48 */
              facebook::jni::findClassStatic(PTR_kBaseName_001ba7b0);
              __cxa_guard_release(PTR_cls_001ba7a8);
            }
            uVar12 = *(undefined8 *)PTR_cls_001ba7a0;
                    /* try { // try from 001a9904 to 001a991b has its CatchHandler @ 001a9d04 */
            plVar6 = (long *)facebook::jni::Environment::current();
            cVar4 = (**(code **)(*plVar6 + 0x100))(plVar6,*(undefined8 *)this,uVar12);
            if (cVar4 != '\0') {
              local_a0 = *(double *)this;
              dVar14 = (double)FUN_001a9d18(&local_a0);
              uVar10 = 3;
              *param_1 = dVar14;
              goto LAB_001a9834;
            }
            FUN_001a9e00(auStack_50);
            uVar9 = FUN_001a9ec0(this,auStack_50);
            if ((uVar9 & 1) == 0) {
              FUN_001a9f34(auStack_60);
              uVar9 = FUN_001a9ec0(this,auStack_60);
              if ((uVar9 & 1) == 0) {
                FUN_001a89a4(auStack_70);
                uVar9 = FUN_001a9ec0(this,auStack_70);
                if ((uVar9 & 1) == 0) {
                  this_00 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001a9c14 to 001a9c1f has its CatchHandler @ 001a9cdc */
                  std::runtime_error::runtime_error
                            (this_00,"Cannot convert JObject to AnyValue - unsupported type!");
                  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
                    __cxa_throw(this_00,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
                  }
                  goto LAB_001a9d00;
                }
                local_a8 = *(undefined8 *)this;
                jHashMapToAnyObject((JAnyMap *)&local_a0,&local_a8);
                FUN_001aa820(param_1,&local_a0);
                FUN_0015ce0c(&local_a0);
              }
              else {
                local_68 = *(undefined8 *)this;
                jListToAnyArray((JAnyMap *)&local_a0,&local_68);
                dVar3 = local_90;
                dVar14 = dStack_98;
                dStack_98 = 0.0;
                local_90 = 0.0;
                param_1[2] = dVar3;
                param_1[1] = dVar14;
                *param_1 = local_a0;
                local_a0 = 0.0;
                *(undefined4 *)(param_1 + 5) = 5;
                FUN_0019d8f0(&local_a0);
              }
            }
            else {
              local_58 = *(undefined8 *)this;
              facebook::jni::JString::toStdString();
              *(undefined4 *)(param_1 + 5) = 4;
              param_1[1] = dStack_98;
              *param_1 = local_a0;
              param_1[2] = local_90;
            }
          }
          else {
            p_Var11 = *(_jmethodID **)this;
            if (((*PTR_method_001ba5f0 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(PTR_method_001ba5f0), iVar5 != 0)) {
                    /* try { // try from 001a9ba8 to 001a9bbf has its CatchHandler @ 001a9c68 */
              FUN_001a92c8(&local_a0);
              uVar12 = facebook::jni::JClass::getMethod<unsigned_char()>
                                 ((JClass *)&local_a0,"booleanValue");
              *(undefined8 *)puVar2 = uVar12;
              __cxa_guard_release(PTR_method_001ba5f0);
            }
            p_Var8 = (_jobject *)facebook::jni::Environment::current();
            cVar4 = _JNIEnv::CallBooleanMethod(p_Var8,p_Var11,*(undefined8 *)puVar2);
            facebook::jni::throwPendingJniExceptionAsCppException();
            *(undefined4 *)(param_1 + 5) = 1;
            *(bool *)param_1 = cVar4 != '\0';
          }
          goto LAB_001a9838;
        }
        p_Var11 = *(_jmethodID **)this;
        if (((*PTR_method_001ba5e0 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_method_001ba5e0), iVar5 != 0)) {
                    /* try { // try from 001a9b38 to 001a9b4f has its CatchHandler @ 001a9c88 */
          FUN_001abfcc(&local_a0);
          uVar12 = facebook::jni::JClass::getMethod<int()>((JClass *)&local_a0,"intValue");
          *(undefined8 *)puVar2 = uVar12;
          __cxa_guard_release(PTR_method_001ba5e0);
        }
        p_Var8 = (_jobject *)facebook::jni::Environment::current();
        iVar5 = _JNIEnv::CallIntMethod(p_Var8,p_Var11,*(undefined8 *)puVar2);
        facebook::jni::throwPendingJniExceptionAsCppException();
        dVar14 = (double)iVar5;
      }
      else {
        uVar12 = *(undefined8 *)this;
        if (((*PTR_method_001ba5c8 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_method_001ba5c8), iVar5 != 0)) {
                    /* try { // try from 001a9ad0 to 001a9adf has its CatchHandler @ 001a9ca8 */
          FUN_001ac08c(&local_a0);
          uVar7 = FUN_001ac14c(&local_a0);
          *(undefined8 *)puVar2 = uVar7;
          __cxa_guard_release(PTR_method_001ba5c8);
        }
        uVar7 = facebook::jni::Environment::current();
        fVar13 = (float)FUN_001ac1c8(uVar7,uVar12,*(undefined8 *)puVar2);
        facebook::jni::throwPendingJniExceptionAsCppException();
        dVar14 = (double)fVar13;
      }
      uVar10 = 2;
      *param_1 = dVar14;
    }
    else {
      uVar12 = *(undefined8 *)this;
      if (((*PTR_method_001ba5b8 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_method_001ba5b8), iVar5 != 0)) {
                    /* try { // try from 001a9a68 to 001a9a77 has its CatchHandler @ 001a9cc8 */
        FUN_001a9408(&local_a0);
        uVar7 = FUN_001ac264(&local_a0);
        *(undefined8 *)puVar2 = uVar7;
        __cxa_guard_release(PTR_method_001ba5b8);
      }
      uVar7 = facebook::jni::Environment::current();
      dVar14 = (double)FUN_001ac2e0(uVar7,uVar12,*(undefined8 *)puVar2);
      facebook::jni::throwPendingJniExceptionAsCppException();
      uVar10 = 2;
      *param_1 = dVar14;
    }
LAB_001a9834:
    *(undefined4 *)(param_1 + 5) = uVar10;
  }
LAB_001a9838:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_001a9d00:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a9d18  FUN_001a9d18 =====

undefined8 FUN_001a9d18(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_40 [8];
  long local_38;
  
  puVar2 = PTR_method_001ba5f8;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_method_001ba600 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_method_001ba600), iVar3 != 0)) {
                    /* try { // try from 001a9da8 to 001a9dbf has its CatchHandler @ 001a9dd4 */
    FUN_001a90ec(auStack_40);
    uVar4 = FUN_001abeac(auStack_40,"longValue");
    *(undefined8 *)puVar2 = uVar4;
    __cxa_guard_release(PTR_method_001ba600);
  }
  uVar5 = *param_1;
  uVar4 = facebook::jni::Environment::current();
  uVar4 = FUN_001abf30(uVar4,uVar5,*(undefined8 *)puVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    facebook::jni::throwPendingJniExceptionAsCppException();
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a9e00  FUN_001a9e00 =====

void FUN_001a9e00(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_001ba7c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_001ba7c0), iVar2 != 0))
  {
                    /* try { // try from 001a9e70 to 001a9e83 has its CatchHandler @ 001a9e94 */
    facebook::jni::findClassStatic(PTR_kBaseName_001ba7c8);
    __cxa_guard_release(PTR_cls_001ba7c0);
  }
  *param_1 = *(undefined8 *)PTR_cls_001ba7b8;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a9ec0  FUN_001a9ec0 =====

void FUN_001a9ec0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 001a9ee8 to 001a9eff has its CatchHandler @ 001a9f30 */
  plVar3 = (long *)facebook::jni::Environment::current();
  cVar2 = (**(code **)(*plVar3 + 0x100))(plVar3,*param_1,*param_2);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2 != '\0');
}


// ===== 001a9f34  FUN_001a9f34 =====

void FUN_001a9f34(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_001ba7d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_001ba7d8), iVar2 != 0))
  {
                    /* try { // try from 001a9fa4 to 001a9fb7 has its CatchHandler @ 001a9fc8 */
    facebook::jni::findClassStatic(PTR_kBaseName_001ba7e0);
    __cxa_guard_release(PTR_cls_001ba7d8);
  }
  *param_1 = *(undefined8 *)PTR_cls_001ba7d0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a9ff4  margelo::nitro::JAnyMap::jListToAnyArray =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* margelo::nitro::JAnyMap::jListToAnyArray(facebook::jni::alias_ref<facebook::jni::JList<facebook::jni::JObject>
   >) */

void __thiscall margelo::nitro::JAnyMap::jListToAnyArray(undefined8 *param_1,JAnyMap *this)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  _jobject *p_Var4;
  _jclass *p_Var5;
  long lVar6;
  long *plVar7;
  long lVar8;
  bad_alloc *this_00;
  void *pvVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  _jmethodID *p_Var13;
  JAnyMap *pJVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  JAnyMap *pJVar17;
  undefined1 uStack_d9;
  long local_d8;
  undefined8 local_d0 [5];
  uint local_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  param_1[1] = 0;
  puVar2 = PTR_sizeMethod_001ba808;
  *param_1 = 0;
  param_1[2] = 0;
  if ((*puVar2 & 1) == 0) goto LAB_001aa484;
  do {
    p_Var13 = *(_jmethodID **)this;
                    /* try { // try from 001aa050 to 001aa07b has its CatchHandler @ 001aa5bc */
    p_Var4 = (_jobject *)facebook::jni::Environment::current();
    iVar3 = _JNIEnv::CallIntMethod(p_Var4,p_Var13,*(undefined8 *)PTR_sizeMethod_001ba800);
    facebook::jni::throwPendingJniExceptionAsCppException();
    FUN_001a0a1c(param_1,(long)iVar3);
    puVar2 = PTR_ctor_001ba810;
    if (((*PTR_ctor_001ba818 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_ctor_001ba818), iVar3 != 0)) {
                    /* try { // try from 001aa4dc to 001aa4eb has its CatchHandler @ 001aa550 */
      FUN_001abc20(local_d0);
      uVar12 = FUN_001abce0(local_d0);
      *(undefined8 *)puVar2 = uVar12;
      __cxa_guard_release(PTR_ctor_001ba818);
    }
    if (((*PTR_cls_001ba828 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_cls_001ba828), iVar3 != 0)) {
                    /* try { // try from 001aa514 to 001aa527 has its CatchHandler @ 001aa53c */
      facebook::jni::findClassStatic(PTR_kBaseName_001ba830);
      __cxa_guard_release(PTR_cls_001ba828);
    }
    uVar15 = *(undefined8 *)puVar2;
    uVar12 = *(undefined8 *)this;
    p_Var13 = *(_jmethodID **)PTR_cls_001ba820;
                    /* try { // try from 001aa0b8 to 001aa0db has its CatchHandler @ 001aa5b4 */
    p_Var5 = (_jclass *)facebook::jni::Environment::current();
    lVar6 = _JNIEnv::NewObject(p_Var5,p_Var13,uVar15,uVar12);
    facebook::jni::throwCppExceptionIf(lVar6 == 0);
    local_a0 = lVar6;
    if (lVar6 == 0) {
      lVar8 = 0;
    }
    else {
                    /* try { // try from 001aa0e4 to 001aa0ff has its CatchHandler @ 001aa5a4 */
      plVar7 = (long *)facebook::jni::Environment::current();
      lVar8 = (**(code **)(*plVar7 + 0xa8))(plVar7,lVar6);
      facebook::jni::throwPendingJniExceptionAsCppException();
      if (lVar8 == 0) {
        this_00 = (bad_alloc *)__cxa_allocate_exception(8);
        std::bad_alloc::bad_alloc(this_00);
        if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 001aa128 to 001aa13f has its CatchHandler @ 001aa5a4 */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(this_00,PTR_typeinfo_001ba598,PTR__bad_alloc_001ba590);
        }
LAB_001aa620:
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
    local_d0[0] = 0;
    local_78 = -1;
    local_70 = 0;
                    /* try { // try from 001aa158 to 001aa15f has its CatchHandler @ 001aa578 */
    local_80 = lVar8;
    FUN_001ab970(&local_80);
    local_d0[0] = 0;
    if (lVar6 != 0) {
                    /* try { // try from 001aa168 to 001aa17b has its CatchHandler @ 001aa5a0 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,lVar6);
    }
    local_90 = 0;
    uStack_98 = _UNK_00138be8;
    local_a0 = _DAT_00138be0;
LAB_001aa1bc:
    lVar6 = local_70;
    if (local_78 == -1) {
      if (local_70 != 0) {
                    /* try { // try from 001aa3ec to 001aa3ff has its CatchHandler @ 001aa59c */
        plVar7 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar7 + 0xb8))(plVar7,lVar6);
      }
      lVar6 = local_80;
      local_70 = 0;
      if (local_80 != 0) {
                    /* try { // try from 001aa40c to 001aa41f has its CatchHandler @ 001aa598 */
        plVar7 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar7 + 0xb0))(plVar7,lVar6);
      }
      if (*(long *)(lVar1 + 0x28) == local_68) {
        return;
      }
      goto LAB_001aa620;
    }
    local_d8 = local_70;
                    /* try { // try from 001aa1d0 to 001aa1db has its CatchHandler @ 001aa5e8 */
    jObjectToAnyValue((JAnyMap *)local_d0,&local_d8);
    pJVar14 = (JAnyMap *)param_1[1];
    if (pJVar14 < (JAnyMap *)param_1[2]) {
      *pJVar14 = (JAnyMap)0x0;
      *(undefined4 *)(pJVar14 + 0x28) = 0xffffffff;
      if (local_a8 == 0xffffffff) {
        uVar10 = 0xffffffff;
        pJVar17 = pJVar14 + 0x30;
      }
      else {
                    /* try { // try from 001aa200 to 001aa20f has its CatchHandler @ 001aa5c8 */
        (*(code *)(&
                  PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<margelo_nitro_NullType,bool,double,long,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<margelo_nitro_AnyValue,std___ndk1_allocator<margelo_nitro_AnyValue>>,std___ndk1_unordered_map<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,margelo_nitro_AnyValue,std___ndk1_hash<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_equal_to<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_allocator<std___ndk1_pair<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<marge___ar,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>__>_001b94c8
                  )[local_a8])(&uStack_d9,pJVar14,local_d0);
        uVar10 = (ulong)local_a8;
        pJVar17 = pJVar14 + 0x30;
        *(uint *)(pJVar14 + 0x28) = local_a8;
      }
LAB_001aa3c4:
      param_1[1] = pJVar17;
      if (uVar10 != 0xffffffff) {
                    /* try { // try from 001aa3d4 to 001aa3df has its CatchHandler @ 001aa5d0 */
        (*(code *)(&PTR_FUN_001b9458)[uVar10])(&uStack_d9,local_d0);
      }
                    /* try { // try from 001aa1b4 to 001aa1bb has its CatchHandler @ 001aa5e4 */
      FUN_001ab970(&local_80);
      goto LAB_001aa1bc;
    }
    this = (JAnyMap *)*param_1;
    lVar6 = (long)pJVar14 - (long)this >> 4;
    uVar10 = lVar6 * -0x5555555555555555 + 1;
    if (uVar10 < 0x555555555555556) {
      lVar8 = (long)param_1[2] - (long)this >> 4;
      uVar11 = lVar8 * 0x5555555555555556;
      if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
        uVar11 = uVar10;
      }
      if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar8 * -0x5555555555555555)) {
        uVar11 = 0x555555555555555;
      }
      if (uVar11 == 0) {
        pvVar9 = (void *)0x0;
      }
      else {
        if (0x555555555555555 < uVar11) goto LAB_001aa46c;
                    /* try { // try from 001aa278 to 001aa27b has its CatchHandler @ 001aa5c4 */
        pvVar9 = operator_new(uVar11 * 0x30);
      }
      puVar16 = (undefined1 *)((long)pvVar9 + lVar6 * 0x10);
      *puVar16 = 0;
      *(undefined4 *)(puVar16 + 0x28) = 0xffffffff;
      if (local_a8 != 0xffffffff) {
                    /* try { // try from 001aa2b4 to 001aa2c3 has its CatchHandler @ 001aa5cc */
        (*(code *)(&
                  PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<margelo_nitro_NullType,bool,double,long,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<margelo_nitro_AnyValue,std___ndk1_allocator<margelo_nitro_AnyValue>>,std___ndk1_unordered_map<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,margelo_nitro_AnyValue,std___ndk1_hash<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_equal_to<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_allocator<std___ndk1_pair<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<marge___ar,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>__>_001b94c8
                  )[local_a8])(&uStack_d9,puVar16,local_d0);
        this = (JAnyMap *)*param_1;
        pJVar14 = (JAnyMap *)param_1[1];
        *(uint *)(puVar16 + 0x28) = local_a8;
      }
      pvVar9 = (void *)((long)pvVar9 + uVar11 * 0x30);
      pJVar17 = (JAnyMap *)(puVar16 + 0x30);
      if (pJVar14 == this) {
        param_1[2] = pvVar9;
        *param_1 = puVar16;
        param_1[1] = pJVar17;
      }
      else {
        lVar6 = 0;
        do {
          *(undefined4 *)(puVar16 + lVar6 + -8) = 0xffffffff;
          puVar16[lVar6 + -0x30] = 0;
          if (*(uint *)(pJVar14 + lVar6 + -8) != 0xffffffff) {
                    /* try { // try from 001aa324 to 001aa32b has its CatchHandler @ 001aa628 */
            (*(code *)(&
                      PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<margelo_nitro_NullType,bool,double,long,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<margelo_nitro_AnyValue,std___ndk1_allocator<margelo_nitro_AnyValue>>,std___ndk1_unordered_map<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,margelo_nitro_AnyValue,std___ndk1_hash<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_equal_to<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_allocator<std___ndk1_pair<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<marge___ar,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>__>_001b94c8
                      )[*(uint *)(pJVar14 + lVar6 + -8)])
                      (&uStack_d9,puVar16 + lVar6 + -0x30,pJVar14 + lVar6 + -0x30);
            *(undefined4 *)(puVar16 + lVar6 + -8) = *(undefined4 *)(pJVar14 + lVar6 + -8);
          }
          lVar6 = lVar6 + -0x30;
        } while (pJVar14 + lVar6 != this);
        this = (JAnyMap *)*param_1;
        pJVar14 = (JAnyMap *)param_1[1];
        param_1[2] = pvVar9;
        *param_1 = puVar16 + lVar6;
        param_1[1] = pJVar17;
        while (pJVar14 != this) {
          if (*(uint *)(pJVar14 + -8) != 0xffffffff) {
                    /* try { // try from 001aa394 to 001aa39f has its CatchHandler @ 001aa624 */
            (*(code *)(&PTR_FUN_001b9458)[*(uint *)(pJVar14 + -8)])(&uStack_d9,pJVar14 + -0x30);
          }
          *(undefined4 *)(pJVar14 + -8) = 0xffffffff;
          pJVar14 = pJVar14 + -0x30;
        }
      }
      if (this != (JAnyMap *)0x0) {
        operator_delete(this);
      }
      uVar10 = (ulong)local_a8;
      goto LAB_001aa3c4;
    }
    if (*(long *)(lVar1 + 0x28) != local_68) goto LAB_001aa620;
                    /* try { // try from 001aa468 to 001aa483 has its CatchHandler @ 001aa5d4 */
    FUN_0015e998();
LAB_001aa46c:
    if (*(long *)(lVar1 + 0x28) != local_68) goto LAB_001aa620;
    FUN_0015d614();
LAB_001aa484:
    iVar3 = __cxa_guard_acquire(PTR_sizeMethod_001ba808);
    if (iVar3 != 0) {
                    /* try { // try from 001aa494 to 001aa4ab has its CatchHandler @ 001aa564 */
      FUN_001a8e74(local_d0);
      uVar12 = facebook::jni::JClass::getMethod<int()>((JClass *)local_d0,"size");
      *(undefined8 *)PTR_sizeMethod_001ba800 = uVar12;
      __cxa_guard_release(PTR_sizeMethod_001ba808);
    }
  } while( true );
}


// ===== 001aa62c  margelo::nitro::JAnyMap::jHashMapToAnyObject =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* margelo::nitro::JAnyMap::jHashMapToAnyObject(facebook::jni::alias_ref<facebook::jni::JMap<facebook::jni::JString,
   facebook::jni::JObject> >) */

void __thiscall margelo::nitro::JAnyMap::jHashMapToAnyObject(undefined8 *param_1,JAnyMap *this)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  byte local_d8 [16];
  void *local_c8;
  undefined1 uStack_b9;
  long local_b8;
  JAnyMap aJStack_b0 [40];
  uint local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
                    /* try { // try from 001aa664 to 001aa673 has its CatchHandler @ 001aa7ac */
  uVar2 = FUN_001aa8cc();
  FUN_0019ece4(param_1,uVar2);
                    /* try { // try from 001aa674 to 001aa683 has its CatchHandler @ 001aa798 */
  FUN_001aa9b4(&local_58,this);
  local_70 = 0;
  uStack_68 = 0;
  uStack_78 = _UNK_00138be8;
  local_80 = _DAT_00138be0;
  while (local_50 != -1) {
                    /* try { // try from 001aa6b4 to 001aa6bf has its CatchHandler @ 001aa7b8 */
    facebook::jni::JString::toStdString();
    local_b8 = local_40;
                    /* try { // try from 001aa6c8 to 001aa6d3 has its CatchHandler @ 001aa7c0 */
    jObjectToAnyValue(aJStack_b0,&local_b8);
                    /* try { // try from 001aa6d4 to 001aa6e7 has its CatchHandler @ 001aa7d0 */
    FUN_001aabdc(param_1,local_d8,local_d8,aJStack_b0);
    if (local_88 != 0xffffffff) {
                    /* try { // try from 001aa6f8 to 001aa703 has its CatchHandler @ 001aa7b4 */
      (*(code *)(&PTR_FUN_001b9458)[local_88])(&uStack_b9,aJStack_b0);
    }
    if ((local_d8[0] & 1) != 0) {
      operator_delete(local_c8);
    }
                    /* try { // try from 001aa6a0 to 001aa6a7 has its CatchHandler @ 001aa7c8 */
    FUN_001aaff4(&local_58);
  }
  if (local_40 != 0) {
                    /* try { // try from 001aa720 to 001aa733 has its CatchHandler @ 001aa7a8 */
    plVar3 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb8))(plVar3,local_40);
  }
  local_40 = 0;
  if (local_48 != 0) {
                    /* try { // try from 001aa740 to 001aa753 has its CatchHandler @ 001aa7a4 */
    plVar3 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb8))(plVar3,local_48);
  }
  local_48 = 0;
  if (local_58 != 0) {
                    /* try { // try from 001aa760 to 001aa773 has its CatchHandler @ 001aa7a0 */
    plVar3 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb0))(plVar3,local_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001aa820  FUN_001aa820 =====

void FUN_001aa820(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  lVar4 = *param_2;
  *param_2 = 0;
  *param_1 = lVar4;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  lVar5 = param_2[2];
  param_1[2] = lVar5;
  lVar7 = param_2[3];
  param_1[3] = lVar7;
  *(int *)(param_1 + 4) = (int)param_2[4];
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
    *(long **)(lVar4 + uVar6 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  *(undefined4 *)(param_1 + 5) = 6;
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001aa8cc  FUN_001aa8cc =====

long FUN_001aa8cc(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  _jobject *p_Var4;
  undefined8 uVar5;
  _jmethodID *p_Var6;
  JClass aJStack_40 [8];
  long local_38;
  
  puVar2 = PTR_sizeMethod_001ba878;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_sizeMethod_001ba880 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_sizeMethod_001ba880), iVar3 != 0)) {
                    /* try { // try from 001aa95c to 001aa973 has its CatchHandler @ 001aa988 */
    FUN_001a89a4(aJStack_40);
    uVar5 = facebook::jni::JClass::getMethod<int()>(aJStack_40,"size");
    *(undefined8 *)puVar2 = uVar5;
    __cxa_guard_release(PTR_sizeMethod_001ba880);
  }
  p_Var6 = (_jmethodID *)*param_1;
  p_Var4 = (_jobject *)facebook::jni::Environment::current();
  iVar3 = _JNIEnv::CallIntMethod(p_Var4,p_Var6,*(undefined8 *)puVar2);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return (long)iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001aa9b4  FUN_001aa9b4 =====

void FUN_001aa9b4(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  _jclass *p_Var4;
  long lVar5;
  long *plVar6;
  long lVar7;
  bad_alloc *this;
  undefined8 uVar8;
  _jmethodID *p_Var9;
  undefined8 uVar10;
  undefined8 local_50;
  long local_48;
  
  puVar2 = PTR_ctor_001ba888;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((*PTR_ctor_001ba890 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_ctor_001ba890), iVar3 != 0)) {
                    /* try { // try from 001aab14 to 001aab23 has its CatchHandler @ 001aab7c */
    FUN_001ab3fc(&local_50);
    uVar8 = FUN_001ab710(&local_50);
    *(undefined8 *)puVar2 = uVar8;
    __cxa_guard_release(PTR_ctor_001ba890);
  }
  if (((*PTR_cls_001ba8a0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_cls_001ba8a0), iVar3 != 0))
  {
                    /* try { // try from 001aab48 to 001aab5b has its CatchHandler @ 001aab6c */
    facebook::jni::findClassStatic(PTR_kBaseName_001ba8a8);
    __cxa_guard_release(PTR_cls_001ba8a0);
  }
  uVar10 = *(undefined8 *)puVar2;
  uVar8 = *param_2;
  p_Var9 = *(_jmethodID **)PTR_cls_001ba898;
  p_Var4 = (_jclass *)facebook::jni::Environment::current();
  lVar5 = _JNIEnv::NewObject(p_Var4,p_Var9,uVar10,uVar8);
  facebook::jni::throwCppExceptionIf(lVar5 == 0);
  if (lVar5 == 0) {
    lVar7 = 0;
  }
  else {
                    /* try { // try from 001aaa48 to 001aaa63 has its CatchHandler @ 001aabb4 */
    plVar6 = (long *)facebook::jni::Environment::current();
    lVar7 = (**(code **)(*plVar6 + 0xa8))(plVar6,lVar5);
    facebook::jni::throwPendingJniExceptionAsCppException();
    if (lVar7 == 0) {
      this = (bad_alloc *)__cxa_allocate_exception(8);
      if (*(long *)(lVar1 + 0x28) == local_48) {
        std::bad_alloc::bad_alloc(this);
                    /* try { // try from 001aaa88 to 001aaa9f has its CatchHandler @ 001aabb4 */
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this,PTR_typeinfo_001ba598,PTR__bad_alloc_001ba590);
      }
      goto LAB_001aabd8;
    }
  }
  local_50 = 0;
  *param_1 = lVar7;
  param_1[1] = -1;
  param_1[2] = 0;
  param_1[3] = 0;
                    /* try { // try from 001aaabc to 001aaac3 has its CatchHandler @ 001aab90 */
  FUN_001aaff4(param_1);
  if (lVar5 != 0) {
                    /* try { // try from 001aaac8 to 001aaadb has its CatchHandler @ 001aabb0 */
    plVar6 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,lVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_001aabd8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001aabdc  FUN_001aabdc =====

void FUN_001aabdc(long *param_1,byte *param_2,long *param_3,long param_4)

{
  size_t sVar1;
  size_t sVar2;
  byte *__s2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  byte *pbVar14;
  long lVar15;
  ulong uVar16;
  byte *pbVar17;
  ulong uVar18;
  ulong unaff_x27;
  undefined2 uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined1 uStack_81;
  long *local_80;
  long *plStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  sVar2 = *(size_t *)(param_2 + 8);
  __s2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    __s2 = param_2 + 1;
    sVar2 = (ulong)(*param_2 >> 1);
  }
  uVar8 = FUN_0015c450(__s2,sVar2);
  uVar18 = param_1[1];
  if (uVar18 != 0) {
    uVar20 = NEON_cnt(uVar18,1);
    uVar19 = NEON_uaddlv(uVar20,1);
    uVar16 = CONCAT62((int6)((ulong)uVar20 >> 0x10),uVar19) & 0xffffffff;
    if (uVar16 < 2) {
      unaff_x27 = uVar18 - 1 & uVar8;
    }
    else {
      unaff_x27 = uVar8;
      if (uVar18 <= uVar8) {
        uVar11 = 0;
        if (uVar18 != 0) {
          uVar11 = uVar8 / uVar18;
        }
        unaff_x27 = uVar8 - uVar11 * uVar18;
      }
    }
    plVar10 = *(long **)(*param_1 + unaff_x27 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      do {
        uVar11 = plVar10[1];
        if (uVar11 == uVar8) {
          bVar4 = *(byte *)(plVar10 + 2);
          uVar11 = (ulong)(bVar4 >> 1);
          sVar1 = uVar11;
          if ((bVar4 & 1) != 0) {
            sVar1 = plVar10[3];
          }
          if (sVar1 == sVar2) {
            if ((bVar4 & 1) == 0) {
              if (bVar4 < 2) goto LAB_001aaf90;
              pbVar14 = (byte *)((long)plVar10 + 0x11);
              pbVar17 = __s2;
              while (*pbVar14 == *pbVar17) {
                uVar11 = uVar11 - 1;
                pbVar14 = pbVar14 + 1;
                pbVar17 = pbVar17 + 1;
                if (uVar11 == 0) goto LAB_001aaf90;
              }
            }
            else {
              iVar7 = memcmp((void *)plVar10[4],__s2,plVar10[3]);
              if (iVar7 == 0) goto LAB_001aaf90;
            }
          }
        }
        else {
          if (uVar16 < 2) {
            uVar11 = uVar11 & uVar18 - 1;
          }
          else if (uVar18 <= uVar11) {
            uVar5 = 0;
            if (uVar18 != 0) {
              uVar5 = uVar11 / uVar18;
            }
            uVar11 = uVar11 - uVar5 * uVar18;
          }
          if (uVar11 != unaff_x27) break;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  plVar10 = param_1 + 2;
  plVar9 = (long *)operator_new(0x58);
  lVar21 = param_3[1];
  lVar13 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  lVar15 = param_3[2];
  param_3[2] = 0;
  uVar3 = *(uint *)(param_4 + 0x28);
  plVar9[4] = lVar15;
  local_70 = 0;
  *plVar9 = 0;
  plVar9[1] = uVar8;
  plVar9[3] = lVar21;
  plVar9[2] = lVar13;
  *(undefined4 *)(plVar9 + 10) = 0xffffffff;
  *(undefined1 *)(plVar9 + 5) = 0;
  local_80 = plVar9;
  plStack_78 = plVar10;
  if (uVar3 != 0xffffffff) {
                    /* try { // try from 001aadd0 to 001aaddb has its CatchHandler @ 001aaff0 */
    (*(code *)(&
              PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<margelo_nitro_NullType,bool,double,long,std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,std___ndk1_vector<margelo_nitro_AnyValue,std___ndk1_allocator<margelo_nitro_AnyValue>>,std___ndk1_unordered_map<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>,margelo_nitro_AnyValue,std___ndk1_hash<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_equal_to<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>>,std___ndk1_allocator<std___ndk1_pair<std___ndk1_basic_string<char,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<marge___ar,std___ndk1_char_traits<char>,std___ndk1_allocator<char>>const,margelo_nitro_AnyValue>>>>__>_001b94c8
              )[uVar3])(&uStack_81,plVar9 + 5,param_4);
    *(undefined4 *)(plVar9 + 10) = *(undefined4 *)(param_4 + 0x28);
  }
  local_70 = 1;
  if ((uVar18 == 0) || (*(float *)(param_1 + 4) * (float)uVar18 < (float)(param_1[3] + 1))) {
    if (uVar18 < 3) {
      uVar16 = 1;
    }
    else {
      uVar16 = (ulong)((uVar18 & uVar18 - 1) != 0);
    }
    uVar16 = uVar16 | uVar18 << 1;
    uVar18 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar16 <= uVar18) {
      uVar16 = uVar18;
    }
    if (uVar16 - 1 == 0) {
      uVar16 = 2;
    }
    else if ((uVar16 & uVar16 - 1) != 0) {
                    /* try { // try from 001aae5c to 001aaedf has its CatchHandler @ 001aafc4 */
      uVar16 = std::__ndk1::__next_prime(uVar16);
    }
    uVar18 = param_1[1];
    if (uVar18 < uVar16) {
LAB_001aae74:
      FUN_0015f314(param_1,uVar16);
    }
    else if (uVar16 < uVar18) {
      uVar11 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar18 < 3) {
LAB_001aaedc:
        uVar11 = std::__ndk1::__next_prime(uVar11);
      }
      else {
        uVar20 = NEON_cnt(uVar18,1);
        uVar19 = NEON_uaddlv(uVar20,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar20 >> 0x10),uVar19)) goto LAB_001aaedc;
        if (1 < uVar11) {
          uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
        }
      }
      if (uVar16 <= uVar11) {
        uVar16 = uVar11;
      }
      if (uVar16 < uVar18) goto LAB_001aae74;
    }
    uVar18 = param_1[1];
    if ((uVar18 & uVar18 - 1) == 0) {
      unaff_x27 = uVar18 - 1 & uVar8;
    }
    else {
      unaff_x27 = uVar8;
      if (uVar18 <= uVar8) {
        uVar16 = 0;
        if (uVar18 != 0) {
          uVar16 = uVar8 / uVar18;
        }
        unaff_x27 = uVar8 - uVar16 * uVar18;
      }
    }
  }
  lVar15 = *param_1;
  plVar12 = *(long **)(lVar15 + unaff_x27 * 8);
  if (plVar12 == (long *)0x0) {
    lVar13 = *plVar10;
    *plVar10 = (long)plVar9;
    *plVar9 = lVar13;
    *(long **)(lVar15 + unaff_x27 * 8) = plVar10;
    if (*plVar9 == 0) goto LAB_001aaf84;
    uVar8 = *(ulong *)(*plVar9 + 8);
    if ((uVar18 & uVar18 - 1) == 0) {
      uVar8 = uVar8 & uVar18 - 1;
    }
    else if (uVar18 <= uVar8) {
      uVar16 = 0;
      if (uVar18 != 0) {
        uVar16 = uVar8 / uVar18;
      }
      uVar8 = uVar8 - uVar16 * uVar18;
    }
    plVar12 = (long *)(*param_1 + uVar8 * 8);
  }
  else {
    *plVar9 = *plVar12;
  }
  *plVar12 = (long)plVar9;
LAB_001aaf84:
  param_1[3] = param_1[3] + 1;
LAB_001aaf90:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001aaff4  FUN_001aaff4 =====

undefined8 * FUN_001aaff4(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  _jobject *p_Var6;
  long *plVar7;
  long lVar8;
  long lVar9;
  _jmethodID *p_Var10;
  undefined8 uVar11;
  undefined8 uVar12;
  long local_68;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  
  puVar2 = PTR_hasNextMethod_001ba8b8;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((*PTR_hasNextMethod_001ba8c0 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_hasNextMethod_001ba8c0), iVar5 != 0)) {
                    /* try { // try from 001ab204 to 001ab21b has its CatchHandler @ 001ab2d0 */
    FUN_001ab3fc(&local_50);
    uVar11 = facebook::jni::JClass::getMethod<unsigned_char()>((JClass *)&local_50,"hasNext");
    *(undefined8 *)puVar2 = uVar11;
    __cxa_guard_release(PTR_hasNextMethod_001ba8c0);
  }
  p_Var10 = (_jmethodID *)*param_1;
  p_Var6 = (_jobject *)facebook::jni::Environment::current();
  cVar4 = _JNIEnv::CallBooleanMethod(p_Var6,p_Var10,*(undefined8 *)puVar2);
  facebook::jni::throwPendingJniExceptionAsCppException();
  puVar2 = PTR_keyField_001ba8d0;
  if (cVar4 == '\0') {
    lVar8 = param_1[2];
    param_1[1] = 0xffffffffffffffff;
    if (lVar8 != 0) {
                    /* try { // try from 001ab190 to 001ab1a3 has its CatchHandler @ 001ab2e8 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,lVar8);
    }
    lVar8 = param_1[3];
    param_1[2] = 0;
    if (lVar8 != 0) {
                    /* try { // try from 001ab1b0 to 001ab1c3 has its CatchHandler @ 001ab2e4 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,lVar8);
    }
    param_1[3] = 0;
  }
  else {
    param_1[1] = param_1[1] + 1;
    puVar3 = PTR_keyField_001ba8c8;
    if (((*puVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_keyField_001ba8d0), iVar5 != 0)) {
                    /* try { // try from 001ab240 to 001ab257 has its CatchHandler @ 001ab2c0 */
      FUN_001ab3fc(&local_50);
      uVar11 = FUN_0019fb20(&local_50,&DAT_00137ff3);
      *(undefined8 *)puVar3 = uVar11;
      __cxa_guard_release(PTR_keyField_001ba8d0);
    }
    if (((*PTR_valueField_001ba8e0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_valueField_001ba8e0), iVar5 != 0)) {
                    /* try { // try from 001ab27c to 001ab293 has its CatchHandler @ 001ab2b0 */
      FUN_001ab3fc(&local_50);
      uVar11 = FUN_0019fb20(&local_50,"mValue");
      *(undefined8 *)PTR_valueField_001ba8d8 = uVar11;
      __cxa_guard_release(PTR_valueField_001ba8e0);
    }
    uVar11 = *(undefined8 *)puVar3;
    uVar12 = *param_1;
                    /* try { // try from 001ab090 to 001ab0a7 has its CatchHandler @ 001ab340 */
    plVar7 = (long *)facebook::jni::Environment::current();
    lVar8 = (**(code **)(*plVar7 + 0x2f8))(plVar7,uVar12,uVar11);
                    /* try { // try from 001ab0b0 to 001ab0bb has its CatchHandler @ 001ab304 */
    local_58 = lVar8;
    FUN_0019fba4(&local_50,&local_58);
    uVar12 = *param_1;
    uVar11 = *(undefined8 *)PTR_valueField_001ba8d8;
                    /* try { // try from 001ab0cc to 001ab0e3 has its CatchHandler @ 001ab33c */
    plVar7 = (long *)facebook::jni::Environment::current();
    lVar9 = (**(code **)(*plVar7 + 0x2f8))(plVar7,uVar12,uVar11);
                    /* try { // try from 001ab0ec to 001ab0f7 has its CatchHandler @ 001ab2ec */
    local_68 = lVar9;
    FUN_001ab4bc(&local_60,&local_68);
    uVar12 = local_50;
    uVar11 = local_60;
    local_50 = 0;
    local_60 = 0;
    if (lVar9 != 0) {
                    /* try { // try from 001ab10c to 001ab11f has its CatchHandler @ 001ab338 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,lVar9);
    }
    local_50 = 0;
    if (lVar8 != 0) {
                    /* try { // try from 001ab128 to 001ab13b has its CatchHandler @ 001ab334 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,lVar8);
    }
    lVar8 = param_1[2];
    if (lVar8 != 0) {
                    /* try { // try from 001ab144 to 001ab157 has its CatchHandler @ 001ab330 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,lVar8);
    }
    lVar8 = param_1[3];
    param_1[2] = uVar12;
    if (lVar8 != 0) {
                    /* try { // try from 001ab164 to 001ab177 has its CatchHandler @ 001ab32c */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,lVar8);
    }
    param_1[3] = uVar11;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ab344  FUN_001ab344 =====

void FUN_001ab344(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = param_1[3];
  if (lVar4 != 0) {
                    /* try { // try from 001ab370 to 001ab383 has its CatchHandler @ 001ab3f8 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar4);
  }
  lVar4 = param_1[2];
  param_1[3] = 0;
  if (lVar4 != 0) {
                    /* try { // try from 001ab390 to 001ab3a3 has its CatchHandler @ 001ab3f4 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar4);
  }
  lVar4 = *param_1;
  param_1[2] = 0;
  if (lVar4 != 0) {
                    /* try { // try from 001ab3b0 to 001ab3c3 has its CatchHandler @ 001ab3f0 */
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


// ===== 001ab3fc  FUN_001ab3fc =====

void FUN_001ab3fc(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_001ba8a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_001ba8a0), iVar2 != 0))
  {
                    /* try { // try from 001ab46c to 001ab47f has its CatchHandler @ 001ab490 */
    facebook::jni::findClassStatic(PTR_kBaseName_001ba8a8);
    __cxa_guard_release(PTR_cls_001ba8a0);
  }
  *param_1 = *(undefined8 *)PTR_cls_001ba898;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ab4bc  FUN_001ab4bc =====

void FUN_001ab4bc(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  bad_alloc *this;
  long lVar8;
  byte local_70 [16];
  ulong local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  
  puVar3 = PTR_target_class_001ba860;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*param_2 == 0) {
    *param_1 = 0;
LAB_001ab598:
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return;
    }
    goto LAB_001ab6fc;
  }
  if (((*PTR_target_class_001ba868 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_target_class_001ba868), iVar5 != 0)) {
                    /* try { // try from 001ab5d0 to 001ab5df has its CatchHandler @ 001ab6ac */
    facebook::jni::findClassStatic(PTR_kBaseName_001ba870);
    *(undefined8 *)puVar3 = local_50;
    __cxa_guard_release(PTR_target_class_001ba868);
  }
  if (*(long *)puVar3 == 0) {
    if (*(long *)(lVar2 + 0x28) != local_48) goto LAB_001ab6fc;
    FUN_0019fe68("java/lang/ClassCastException","Could not find class %s.",PTR_kBaseName_001ba870);
LAB_001ab624:
                    /* try { // try from 001ab624 to 001ab633 has its CatchHandler @ 001ab6d8 */
    FUN_0019febc(local_70,&local_58);
    uVar1 = (ulong)local_70 | 1;
    if ((local_70[0] & 1) != 0) {
      uVar1 = local_60;
    }
    if (*(long *)(lVar2 + 0x28) != local_48) goto LAB_001ab6fc;
                    /* try { // try from 001ab658 to 001ab673 has its CatchHandler @ 001ab6c0 */
    FUN_001a0004("java/lang/ClassCastException","Tried to cast from %s to %s.",uVar1,
                 PTR_kBaseName_001ba870);
  }
  else {
                    /* try { // try from 001ab510 to 001ab523 has its CatchHandler @ 001ab708 */
    plVar6 = (long *)facebook::jni::Environment::current();
    lVar7 = (**(code **)(*plVar6 + 0xf8))(plVar6,*param_2);
    local_58 = lVar7;
                    /* try { // try from 001ab52c to 001ab543 has its CatchHandler @ 001ab704 */
    plVar6 = (long *)facebook::jni::Environment::current();
    cVar4 = (**(code **)(*plVar6 + 0x58))(plVar6,lVar7,*(undefined8 *)puVar3);
    if (cVar4 == '\0') goto LAB_001ab624;
    lVar8 = *param_2;
    if (lVar8 == 0) {
LAB_001ab574:
      *param_1 = lVar8;
      if (lVar7 != 0) {
                    /* try { // try from 001ab57c to 001ab58f has its CatchHandler @ 001ab700 */
        plVar6 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar6 + 0xb8))(plVar6,lVar7);
      }
      goto LAB_001ab598;
    }
                    /* try { // try from 001ab554 to 001ab56f has its CatchHandler @ 001ab70c */
    plVar6 = (long *)facebook::jni::Environment::current();
    lVar8 = (**(code **)(*plVar6 + 200))(plVar6,lVar8);
    facebook::jni::throwPendingJniExceptionAsCppException();
    if (lVar8 != 0) goto LAB_001ab574;
  }
  this = (bad_alloc *)__cxa_allocate_exception(8);
  std::bad_alloc::bad_alloc(this);
  if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 001ab694 to 001ab6ab has its CatchHandler @ 001ab70c */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,PTR_typeinfo_001ba598,PTR__bad_alloc_001ba590);
  }
LAB_001ab6fc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ab710  FUN_001ab710 =====

long FUN_001ab710(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*param_1,"<init>",PTR_kConstructorDescriptor_001ba8b0);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ab78c  FUN_001ab78c =====

void FUN_001ab78c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = param_1[1];
  if (lVar4 != 0) {
                    /* try { // try from 001ab7b8 to 001ab7cb has its CatchHandler @ 001ab81c */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar4);
  }
  lVar4 = *param_1;
  param_1[1] = 0;
  if (lVar4 != 0) {
                    /* try { // try from 001ab7d8 to 001ab7eb has its CatchHandler @ 001ab818 */
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


// ===== 001ab820  FUN_001ab820 =====

void FUN_001ab820(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 001ab84c to 001ab85f has its CatchHandler @ 001ab88c */
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


// ===== 001ab890  FUN_001ab890 =====

void FUN_001ab890(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 001ab8bc to 001ab8cf has its CatchHandler @ 001ab8fc */
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


// ===== 001ab900  FUN_001ab900 =====

void FUN_001ab900(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 001ab92c to 001ab93f has its CatchHandler @ 001ab96c */
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


// ===== 001ab970  FUN_001ab970 =====

undefined8 * FUN_001ab970(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  _jobject *p_Var6;
  long *plVar7;
  long lVar8;
  _jmethodID *p_Var9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  puVar2 = PTR_hasNextMethod_001ba840;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_hasNextMethod_001ba848 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_hasNextMethod_001ba848), iVar5 != 0)) {
                    /* try { // try from 001abac8 to 001abadf has its CatchHandler @ 001abb40 */
    FUN_001abc20(&local_40);
    uVar10 = facebook::jni::JClass::getMethod<unsigned_char()>((JClass *)&local_40,"hasNext");
    *(undefined8 *)puVar2 = uVar10;
    __cxa_guard_release(PTR_hasNextMethod_001ba848);
  }
  p_Var9 = (_jmethodID *)*param_1;
  p_Var6 = (_jobject *)facebook::jni::Environment::current();
  cVar4 = _JNIEnv::CallBooleanMethod(p_Var6,p_Var9,*(undefined8 *)puVar2);
  facebook::jni::throwPendingJniExceptionAsCppException();
  puVar2 = PTR_elementField_001ba858;
  if (cVar4 == '\0') {
    lVar8 = param_1[2];
    param_1[1] = 0xffffffffffffffff;
    if (lVar8 != 0) {
                    /* try { // try from 001aba78 to 001aba8b has its CatchHandler @ 001abb54 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,lVar8);
    }
    param_1[2] = 0;
  }
  else {
    param_1[1] = param_1[1] + 1;
    puVar3 = PTR_elementField_001ba850;
    if (((*puVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_elementField_001ba858), iVar5 != 0)
       ) {
                    /* try { // try from 001abb04 to 001abb1b has its CatchHandler @ 001abb30 */
      FUN_001abc20(&local_40);
      uVar10 = FUN_0019fb20(&local_40,"mElement");
      *(undefined8 *)puVar3 = uVar10;
      __cxa_guard_release(PTR_elementField_001ba858);
    }
    uVar10 = *(undefined8 *)puVar3;
    uVar11 = *param_1;
                    /* try { // try from 001ab9f8 to 001aba0f has its CatchHandler @ 001abb88 */
    plVar7 = (long *)facebook::jni::Environment::current();
    lVar8 = (**(code **)(*plVar7 + 0x2f8))(plVar7,uVar11,uVar10);
                    /* try { // try from 001aba18 to 001aba23 has its CatchHandler @ 001abb58 */
    local_40 = lVar8;
    FUN_001ab4bc(&local_48,&local_40);
    if (lVar8 != 0) {
                    /* try { // try from 001aba28 to 001aba3b has its CatchHandler @ 001abb84 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,lVar8);
    }
    uVar10 = local_48;
    lVar8 = param_1[2];
    local_48 = 0;
    if (lVar8 != 0) {
                    /* try { // try from 001aba4c to 001aba5f has its CatchHandler @ 001abb80 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,lVar8);
    }
    param_1[2] = uVar10;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001abb8c  FUN_001abb8c =====

void FUN_001abb8c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = param_1[2];
  if (lVar4 != 0) {
                    /* try { // try from 001abbb8 to 001abbcb has its CatchHandler @ 001abc1c */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar4);
  }
  lVar4 = *param_1;
  param_1[2] = 0;
  if (lVar4 != 0) {
                    /* try { // try from 001abbd8 to 001abbeb has its CatchHandler @ 001abc18 */
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


// ===== 001abc20  FUN_001abc20 =====

void FUN_001abc20(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_001ba828 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_001ba828), iVar2 != 0))
  {
                    /* try { // try from 001abc90 to 001abca3 has its CatchHandler @ 001abcb4 */
    facebook::jni::findClassStatic(PTR_kBaseName_001ba830);
    __cxa_guard_release(PTR_cls_001ba828);
  }
  *param_1 = *(undefined8 *)PTR_cls_001ba820;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001abce0  FUN_001abce0 =====

long FUN_001abce0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,*param_1,"<init>",PTR_kConstructorDescriptor_001ba838);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001abd5c  FUN_001abd5c =====

void FUN_001abd5c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 001abd88 to 001abd9b has its CatchHandler @ 001abdc8 */
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


// ===== 001abdcc  FUN_001abdcc =====

void FUN_001abdcc(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 001abdf8 to 001abe0b has its CatchHandler @ 001abe38 */
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


// ===== 001abe3c  FUN_001abe3c =====

void FUN_001abe3c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 001abe68 to 001abe7b has its CatchHandler @ 001abea8 */
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


// ===== 001abeac  FUN_001abeac =====

long FUN_001abeac(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,param_2,PTR_kDescriptor_001ba350);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001abf30  FUN_001abf30 =====

void FUN_001abf30(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  (**(code **)(*param_1 + 0x1a8))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001abfcc  FUN_001abfcc =====

void FUN_001abfcc(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_001ba778 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_001ba778), iVar2 != 0))
  {
                    /* try { // try from 001ac03c to 001ac04f has its CatchHandler @ 001ac060 */
    facebook::jni::findClassStatic(PTR_kBaseName_001ba780);
    __cxa_guard_release(PTR_cls_001ba778);
  }
  *param_1 = *(undefined8 *)PTR_cls_001ba770;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ac08c  FUN_001ac08c =====

void FUN_001ac08c(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_001ba760 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_001ba760), iVar2 != 0))
  {
                    /* try { // try from 001ac0fc to 001ac10f has its CatchHandler @ 001ac120 */
    facebook::jni::findClassStatic(PTR_kBaseName_001ba768);
    __cxa_guard_release(PTR_cls_001ba760);
  }
  *param_1 = *(undefined8 *)PTR_cls_001ba758;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ac14c  FUN_001ac14c =====

long FUN_001ac14c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,"floatValue",PTR_kDescriptor_001ba5d0);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ac1c8  FUN_001ac1c8 =====

void FUN_001ac1c8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  (**(code **)(*param_1 + 0x1c0))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ac264  FUN_001ac264 =====

long FUN_001ac264(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,"doubleValue",PTR_kDescriptor_001ba348);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ac2e0  FUN_001ac2e0 =====

void FUN_001ac2e0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  (**(code **)(*param_1 + 0x1d8))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ac37c  margelo::nitro::JAnyMap::fromMap =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* margelo::nitro::JAnyMap::fromMap(facebook::jni::alias_ref<_jclass*>,
   facebook::jni::alias_ref<facebook::jni::JMap<facebook::jni::JString, facebook::jni::JObject> >,
   bool) */

void margelo::nitro::JAnyMap::fromMap(JObject *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  _jmethodID *p_Var3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  _jclass *p_Var8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long *local_130;
  long *local_128;
  long local_120;
  long *local_118 [5];
  uint local_f0;
  ulong local_e8 [2];
  void *local_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  ulong local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  uVar5 = FUN_001aa8cc(param_3);
  if (((*PTR_isHybrid_001ba610 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_isHybrid_001ba610), iVar6 != 0)) {
                    /* try { // try from 001ac93c to 001ac953 has its CatchHandler @ 001acb50 */
    FUN_001acd2c(&local_78);
    local_e8[0] = local_78;
    bVar4 = facebook::jni::detail::HybridClassBase::isHybridClassBase(local_e8);
    *PTR_isHybrid_001ba608 = bVar4 & 1;
    __cxa_guard_release(PTR_isHybrid_001ba610);
  }
  plVar7 = (long *)operator_new(0x18);
                    /* try { // try from 001ac3dc to 001ac3e3 has its CatchHandler @ 001acbf8 */
  FUN_001a5058(plVar7,uVar5);
  local_90 = 0;
  if (*PTR_isHybrid_001ba608 == '\0') {
    local_128 = (long *)0x0;
                    /* try { // try from 001ac514 to 001ac51f has its CatchHandler @ 001acb88 */
    local_130 = plVar7;
    FUN_001a51a0(&local_80,&local_130);
    plVar7 = local_130;
    local_130 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      plVar10 = (long *)plVar7[2];
      if ((plVar10 != (long *)0x0) &&
         (lVar9 = FUN_0015bb40(0xffffffffffffffff,plVar10 + 1), lVar9 == 0)) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      operator_delete(plVar7);
    }
    lVar9 = local_80;
                    /* try { // try from 001ac568 to 001ac583 has its CatchHandler @ 001acc18 */
    plVar7 = (long *)facebook::jni::Environment::current();
    lVar9 = (**(code **)(*plVar7 + 200))(plVar7,lVar9);
    facebook::jni::throwPendingJniExceptionAsCppException();
    local_88 = lVar9;
                    /* try { // try from 001ac588 to 001ac5a3 has its CatchHandler @ 001acc10 */
    plVar7 = (long *)facebook::jni::Environment::current();
    lVar9 = (**(code **)(*plVar7 + 200))(plVar7,lVar9);
    facebook::jni::throwPendingJniExceptionAsCppException();
    local_d0 = lVar9;
    if (((DAT_001c0088 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_001c0088), iVar6 != 0)) {
      FUN_001ace5c(&DAT_001c0080);
      __cxa_guard_release(&DAT_001c0088);
    }
    if (((DAT_001c0098 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_001c0098), iVar6 != 0)) {
                    /* try { // try from 001aca8c to 001aca8f has its CatchHandler @ 001acab8 */
      DAT_001c0090 = FUN_001acf1c();
      __cxa_guard_release(&DAT_001c0098);
    }
    lVar9 = local_d0;
    uVar13 = DAT_001c0090;
                    /* try { // try from 001ac5d4 to 001ac5ef has its CatchHandler @ 001acc08 */
    plVar7 = (long *)facebook::jni::Environment::current();
    lVar11 = (**(code **)(*plVar7 + 200))(plVar7,lVar9);
    facebook::jni::throwPendingJniExceptionAsCppException();
    local_b0 = lVar11;
                    /* try { // try from 001ac5f4 to 001ac61f has its CatchHandler @ 001acc3c */
    p_Var8 = (_jclass *)facebook::jni::Environment::current();
    p_Var3 = DAT_001c0080;
    plVar7 = (long *)facebook::jni::Environment::current();
    plVar7 = (long *)(**(code **)(*plVar7 + 200))(plVar7,lVar11);
    facebook::jni::throwPendingJniExceptionAsCppException();
    local_118[0] = plVar7;
                    /* try { // try from 001ac624 to 001ac637 has its CatchHandler @ 001acb78 */
    lVar12 = _JNIEnv::NewObject(p_Var8,p_Var3,uVar13,plVar7);
    if (plVar7 != (long *)0x0) {
                    /* try { // try from 001ac640 to 001ac653 has its CatchHandler @ 001acbac */
      plVar10 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar10 + 0xb8))(plVar10,plVar7);
    }
                    /* try { // try from 001ac65c to 001ac65f has its CatchHandler @ 001acc3c */
    facebook::jni::throwCppExceptionIf(lVar12 == 0);
    if (lVar11 != 0) {
                    /* try { // try from 001ac664 to 001ac677 has its CatchHandler @ 001acba8 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,lVar11);
    }
    if (lVar9 != 0) {
                    /* try { // try from 001ac67c to 001ac68f has its CatchHandler @ 001acba4 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,lVar9);
    }
    lVar9 = local_90;
    if (local_90 != 0) {
                    /* try { // try from 001ac698 to 001ac6ab has its CatchHandler @ 001acba0 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,lVar9);
    }
    lVar9 = local_88;
    local_90 = lVar12;
    if (local_88 != 0) {
                    /* try { // try from 001ac6b8 to 001ac6cb has its CatchHandler @ 001acb9c */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,lVar9);
    }
    local_88 = 0;
    if (local_80 != 0) {
                    /* try { // try from 001ac6d8 to 001ac6eb has its CatchHandler @ 001acb98 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,local_80);
    }
    plVar7 = local_128;
    local_128 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      plVar10 = *(long **)((long)plVar7 + 0x10);
      if ((plVar10 != (long *)0x0) &&
         (lVar9 = FUN_0015bb40(0xffffffffffffffff,plVar10 + 1), lVar9 == 0)) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      operator_delete(plVar7);
    }
  }
  else {
    local_128 = plVar7;
    if (((DAT_001c0058 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_001c0058), iVar6 != 0)) {
      FUN_001ace5c(&DAT_001c0050);
      __cxa_guard_release(&DAT_001c0058);
    }
    if (((DAT_001c0068 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_001c0068), iVar6 != 0)) {
                    /* try { // try from 001ac9f8 to 001ac9fb has its CatchHandler @ 001acb0c */
      DAT_001c0060 = FUN_001acf98();
      __cxa_guard_release(&DAT_001c0068);
    }
    uVar13 = DAT_001c0060;
                    /* try { // try from 001ac424 to 001ac447 has its CatchHandler @ 001acc68 */
    p_Var8 = (_jclass *)facebook::jni::Environment::current();
    lVar9 = _JNIEnv::NewObject(p_Var8,DAT_001c0050,uVar13);
    facebook::jni::throwCppExceptionIf(lVar9 == 0);
    local_90 = lVar9;
                    /* try { // try from 001ac44c to 001ac467 has its CatchHandler @ 001acc64 */
    plVar10 = (long *)facebook::jni::Environment::current();
    lVar9 = (**(code **)(*plVar10 + 200))(plVar10,lVar9);
    facebook::jni::throwPendingJniExceptionAsCppException();
    puVar2 = PTR_holderField_001ba620;
    local_128 = (long *)0x0;
    local_d0 = lVar9;
    if (((*PTR_holderField_001ba628 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_holderField_001ba628), iVar6 != 0)) {
      facebook::jni::JObject::getClass();
                    /* try { // try from 001aca2c to 001aca33 has its CatchHandler @ 001acae0 */
      uVar13 = facebook::jni::detail::getDestructorField((basic_strong_ref *)local_118);
      *(undefined8 *)puVar2 = uVar13;
      facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
      ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
                       *)local_118);
      __cxa_guard_release(PTR_holderField_001ba628);
    }
    lVar9 = local_d0;
    uVar13 = *(undefined8 *)puVar2;
                    /* try { // try from 001ac490 to 001ac4a7 has its CatchHandler @ 001acc38 */
    plVar10 = (long *)facebook::jni::Environment::current();
    local_b0 = (**(code **)(*plVar10 + 0x2f8))(plVar10,lVar9,uVar13);
                    /* try { // try from 001ac4b0 to 001ac4bb has its CatchHandler @ 001acbb0 */
    local_118[0] = plVar7;
    facebook::jni::detail::HybridDestructor::setNativePointer(&local_b0,local_118);
    plVar7 = local_118[0];
    local_118[0] = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    lVar9 = local_b0;
    if (local_b0 != 0) {
                    /* try { // try from 001ac4dc to 001ac4ef has its CatchHandler @ 001acbe4 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,lVar9);
    }
    lVar9 = local_d0;
    if (local_d0 != 0) {
                    /* try { // try from 001ac4f8 to 001ac50b has its CatchHandler @ 001acbe0 */
      plVar7 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar7 + 0xb8))(plVar7,lVar9);
    }
  }
  puVar2 = PTR_hybridDataField_001ba328;
  *(long *)param_1 = local_90;
  if (((*puVar2 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_hybridDataField_001ba328), iVar6 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 001ac994 to 001ac997 has its CatchHandler @ 001acb34 */
    uVar13 = FUN_001a2ac8(local_118[0]);
    *(undefined8 *)PTR_hybridDataField_001ba320 = uVar13;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    local_118);
    __cxa_guard_release(PTR_hybridDataField_001ba328);
  }
                    /* try { // try from 001ac748 to 001ac757 has its CatchHandler @ 001acbf0 */
  lVar9 = facebook::jni::getHybridDataFromField(param_1,(JField *)PTR_hybridDataField_001ba320);
  uVar13 = *(undefined8 *)(lVar9 + 8);
                    /* try { // try from 001ac75c to 001ac76b has its CatchHandler @ 001acbe8 */
  FUN_001aa9b4(&local_b0,param_3);
  local_c0 = 0;
  local_b8 = 0;
  lStack_c8 = _UNK_00138be8;
  local_d0 = _DAT_00138be0;
  while (lVar9 = local_b8, local_a8 != lStack_c8) {
                    /* try { // try from 001ac7a0 to 001ac7ab has its CatchHandler @ 001ac82c */
    facebook::jni::JString::toStdString();
    local_120 = local_98;
                    /* try { // try from 001ac7b4 to 001ac7bf has its CatchHandler @ 001ac814 */
    jObjectToAnyValue((JAnyMap *)local_118,&local_120);
                    /* try { // try from 001ac7c0 to 001ac7d3 has its CatchHandler @ 001ac804 */
    FUN_001aabdc(uVar13,local_e8,local_e8,local_118);
    if (local_f0 != 0xffffffff) {
                    /* try { // try from 001ac7e4 to 001ac7ef has its CatchHandler @ 001acc80 */
      (*(code *)(&PTR_FUN_001b9458)[local_f0])(&local_78,local_118);
    }
    if ((local_e8[0] & 1) != 0) {
      operator_delete(local_d8);
    }
                    /* try { // try from 001ac788 to 001ac78f has its CatchHandler @ 001acc84 */
    FUN_001aaff4(&local_b0);
  }
  if (local_b8 != 0) {
                    /* try { // try from 001ac84c to 001ac85f has its CatchHandler @ 001acc34 */
    plVar7 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb8))(plVar7,lVar9);
  }
  lVar9 = local_c0;
  local_b8 = 0;
  if (local_c0 != 0) {
                    /* try { // try from 001ac86c to 001ac87f has its CatchHandler @ 001acc30 */
    plVar7 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb8))(plVar7,lVar9);
  }
  lVar9 = local_d0;
  local_c0 = 0;
  if (local_d0 != 0) {
                    /* try { // try from 001ac88c to 001ac89f has its CatchHandler @ 001acc2c */
    plVar7 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb0))(plVar7,lVar9);
  }
  if (local_98 != 0) {
                    /* try { // try from 001ac8a8 to 001ac8bb has its CatchHandler @ 001acc28 */
    plVar7 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb8))(plVar7,local_98);
  }
  local_98 = 0;
  if (local_a0 != 0) {
                    /* try { // try from 001ac8c8 to 001ac8db has its CatchHandler @ 001acc24 */
    plVar7 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb8))(plVar7,local_a0);
  }
  lVar9 = local_b0;
  local_a0 = 0;
  if (local_b0 != 0) {
                    /* try { // try from 001ac8e8 to 001ac8fb has its CatchHandler @ 001acc20 */
    plVar7 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb0))(plVar7,lVar9);
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001accbc  FUN_001accbc =====

void FUN_001accbc(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 001acce8 to 001accfb has its CatchHandler @ 001acd28 */
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


// ===== 001acd2c  FUN_001acd2c =====

void FUN_001acd2c(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_001ba338 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_001ba338), iVar2 != 0))
  {
                    /* try { // try from 001acd9c to 001acdaf has its CatchHandler @ 001acdc0 */
    facebook::jni::findClassStatic(PTR_kBaseName_001ba340);
    __cxa_guard_release(PTR_cls_001ba338);
  }
  *param_1 = *(undefined8 *)PTR_cls_001ba330;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001acdec  FUN_001acdec =====

void FUN_001acdec(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 001ace18 to 001ace2b has its CatchHandler @ 001ace58 */
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


// ===== 001ace5c  FUN_001ace5c =====

void FUN_001ace5c(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_001ba338 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_001ba338), iVar2 != 0))
  {
                    /* try { // try from 001acecc to 001acedf has its CatchHandler @ 001acef0 */
    facebook::jni::findClassStatic(PTR_kBaseName_001ba340);
    __cxa_guard_release(PTR_cls_001ba338);
  }
  *param_1 = *(undefined8 *)PTR_cls_001ba330;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001acf1c  FUN_001acf1c =====

long FUN_001acf1c(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,DAT_001c0080,"<init>",PTR_kConstructorDescriptor_001ba630);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001acf98  FUN_001acf98 =====

long FUN_001acf98(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))
                    (plVar2,DAT_001c0050,"<init>",PTR_kConstructorDescriptor_001ba618);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ad014  margelo::nitro::JHybridObject::JavaPart::getJHybridObject =====

/* margelo::nitro::JHybridObject::JavaPart::getJHybridObject() */

void __thiscall margelo::nitro::JHybridObject::JavaPart::getJHybridObject(JavaPart *this)

{
  long lVar1;
  int iVar2;
  _jobject *p_Var3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  _jmethodID *p_Var7;
  long local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_001c0408 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_001c0408), iVar2 != 0)) {
                    /* try { // try from 001ad0e8 to 001ad0f7 has its CatchHandler @ 001ad170 */
    FUN_001ad1b0(&local_40);
    DAT_001c0400 = FUN_001ad270(&local_40);
    __cxa_guard_release(&DAT_001c0408);
  }
  p_Var7 = *(_jmethodID **)this;
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  lVar4 = _JNIEnv::CallObjectMethod(p_Var3,p_Var7,DAT_001c0400);
  facebook::jni::throwPendingJniExceptionAsCppException();
  local_48 = lVar4;
  if (((*PTR_hybridDataField_001ba930 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_hybridDataField_001ba930), iVar2 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 001ad12c to 001ad12f has its CatchHandler @ 001ad154 */
    uVar6 = FUN_001ad2ec(local_40);
    *(undefined8 *)PTR_hybridDataField_001ba928 = uVar6;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    &local_40);
    __cxa_guard_release(PTR_hybridDataField_001ba930);
  }
                    /* try { // try from 001ad080 to 001ad097 has its CatchHandler @ 001ad188 */
  facebook::jni::getHybridDataFromField((JObject *)&local_48,(JField *)PTR_hybridDataField_001ba928)
  ;
  CxxPart::getOrCreateHybridObject();
  lVar4 = local_48;
  if (local_48 != 0) {
                    /* try { // try from 001ad0a0 to 001ad0b3 has its CatchHandler @ 001ad184 */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ad1b0  FUN_001ad1b0 =====

void FUN_001ad1b0(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_001ba910 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_001ba910), iVar2 != 0))
  {
                    /* try { // try from 001ad220 to 001ad233 has its CatchHandler @ 001ad244 */
    facebook::jni::findClassStatic(PTR_kBaseName_001ba918);
    __cxa_guard_release(PTR_cls_001ba910);
  }
  *param_1 = *(undefined8 *)PTR_cls_001ba908;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ad270  FUN_001ad270 =====

long FUN_001ad270(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,*param_1,"getCxxPart",PTR_kDescriptor_001ba920);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ad2ec  FUN_001ad2ec =====

void FUN_001ad2ec(undefined8 param_1)

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
    if (((*PTR_cls_001ba940 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_cls_001ba940), iVar2 != 0)) {
                    /* try { // try from 001ad3a8 to 001ad3bb has its CatchHandler @ 001ad3e0 */
      facebook::jni::findClassStatic(PTR_kBaseName_001ba948);
      __cxa_guard_release(PTR_cls_001ba940);
    }
    uVar6 = *(undefined8 *)PTR_cls_001ba938;
    plVar5 = (long *)facebook::jni::Environment::current();
    lVar4 = (**(code **)(*plVar5 + 0x2f0))(plVar5,uVar6,"mHybridData",PTR_kDescriptor_001ba2f0);
    facebook::jni::throwCppExceptionIf(lVar4 == 0);
    if (lVar4 == 0) {
      if (*(long *)(lVar1 + 0x28) == local_28) {
        uVar6 = facebook::jni::throwNPE();
                    /* catch() { ... } // from try @ 001ad3a8 with catch @ 001ad3e0 */
        lVar4 = __cxa_guard_abort(PTR_cls_001ba940);
        if (*(long *)(lVar1 + 0x28) == local_28) {
          lVar4 = FUN_00157e74(uVar6);
        }
      }
      goto LAB_001ad408;
    }
  }
  else {
    lVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
LAB_001ad408:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


// ===== 001ad40c  margelo::nitro::JHybridObject::CxxPart::getOrCreateHybridObject =====

/* margelo::nitro::JHybridObject::CxxPart::getOrCreateHybridObject() */

void margelo::nitro::JHybridObject::CxxPart::getOrCreateHybridObject(void)

{
  long lVar1;
  long lVar2;
  long *in_x0;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *in_x8;
  long lVar6;
  long local_40;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  lVar3 = in_x0[2];
  *in_x8 = 0;
  in_x8[1] = 0;
  if (lVar3 != 0) {
    plVar4 = (long *)std::__ndk1::__shared_weak_count::lock();
    in_x8[1] = (long)plVar4;
    if (plVar4 != (long *)0x0) {
      lVar3 = in_x0[1];
      *in_x8 = lVar3;
      if (lVar3 != 0) goto LAB_001ad4e8;
      lVar3 = FUN_0015bb40(0xffffffffffffffff,plVar4 + 1);
      if (lVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
  }
  getJavaPart();
                    /* try { // try from 001ad498 to 001ad4a7 has its CatchHandler @ 001ad50c */
  (**(code **)(*in_x0 + 0x10))();
  lVar3 = *in_x8;
  lVar1 = in_x8[1];
  if (lVar1 != 0) {
    FUN_0015c230(1,lVar1 + 0x10);
  }
  lVar5 = in_x0[2];
  in_x0[1] = lVar3;
  in_x0[2] = lVar1;
  if (lVar5 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (local_40 != 0) {
                    /* try { // try from 001ad4d4 to 001ad4e7 has its CatchHandler @ 001ad534 */
    plVar4 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar4 + 0xb8))(plVar4,local_40);
  }
LAB_001ad4e8:
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ad538  FUN_001ad538 =====

void FUN_001ad538(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 001ad564 to 001ad577 has its CatchHandler @ 001ad5a4 */
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


// ===== 001ad5a8  margelo::nitro::JHybridObject::CxxPart::getJavaPart =====

/* margelo::nitro::JHybridObject::CxxPart::getJavaPart() */

void margelo::nitro::JHybridObject::CxxPart::getJavaPart(void)

{
  long lVar1;
  int iVar2;
  long in_x0;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *in_x8;
  undefined8 uVar5;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_001c0418 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_001c0418), iVar2 != 0)) {
                    /* try { // try from 001ad63c to 001ad64b has its CatchHandler @ 001ad660 */
    FUN_001ad700(auStack_40);
    DAT_001c0410 = FUN_001ad7c0(auStack_40);
    __cxa_guard_release(&DAT_001c0418);
  }
  uVar4 = DAT_001c0410;
  uVar5 = *(undefined8 *)(in_x0 + 0x18);
                    /* try { // try from 001ad5ec to 001ad603 has its CatchHandler @ 001ad68c */
  plVar3 = (long *)facebook::jni::Environment::current();
  uVar4 = (**(code **)(*plVar3 + 0x2f8))(plVar3,uVar5,uVar4);
  *in_x8 = uVar4;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ad690  FUN_001ad690 =====

void FUN_001ad690(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 001ad6bc to 001ad6cf has its CatchHandler @ 001ad6fc */
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


// ===== 001ad700  FUN_001ad700 =====

void FUN_001ad700(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_001ba940 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_001ba940), iVar2 != 0))
  {
                    /* try { // try from 001ad770 to 001ad783 has its CatchHandler @ 001ad794 */
    facebook::jni::findClassStatic(PTR_kBaseName_001ba948);
    __cxa_guard_release(PTR_cls_001ba940);
  }
  *param_1 = *(undefined8 *)PTR_cls_001ba938;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ad7c0  FUN_001ad7c0 =====

long FUN_001ad7c0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x2f0))(plVar2,*param_1,"javaPart",PTR_kDescriptor_001ba950);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::throwCppExceptionIf(lVar3 == 0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ad83c  margelo::nitro::JHybridObject::CxxPart::CxxPart =====

/* margelo::nitro::JHybridObject::CxxPart::CxxPart(facebook::jni::alias_ref<facebook::jni::detail::JTypeFor<facebook::jni::HybridClass<margelo::nitro::JHybridObject::CxxPart,
   facebook::jni::detail::BaseHybridClass>::JavaPart, facebook::jni::JObject, void>::_javaobject*>)
    */

void __thiscall margelo::nitro::JHybridObject::CxxPart::CxxPart(CxxPart *this,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  bad_alloc *this_00;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(this + 0x10) = 0;
  puVar2 = PTR_vtable_001ba8e8;
  *(undefined8 *)(this + 8) = 0;
  lVar5 = *param_2;
  *(undefined **)this = puVar2 + 0x10;
  if (lVar5 != 0) {
                    /* try { // try from 001ad880 to 001ad89b has its CatchHandler @ 001ad900 */
    plVar3 = (long *)facebook::jni::Environment::current();
    lVar5 = (**(code **)(*plVar3 + 0xa8))(plVar3,lVar5);
    facebook::jni::throwPendingJniExceptionAsCppException();
    if (lVar5 == 0) {
      this_00 = (bad_alloc *)__cxa_allocate_exception(8);
      if (*(long *)(lVar1 + 0x28) == lVar4) {
        std::bad_alloc::bad_alloc(this_00);
                    /* try { // try from 001ad8e8 to 001ad8ff has its CatchHandler @ 001ad900 */
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this_00,PTR_typeinfo_001ba598,PTR__bad_alloc_001ba590);
      }
      goto LAB_001ad92c;
    }
  }
  *(long *)(this + 0x18) = lVar5;
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
LAB_001ad92c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ad930  FUN_001ad930 =====

void FUN_001ad930(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = param_1[3];
  *param_1 = (long)(PTR_vtable_001ba8e8 + 0x10);
  if (lVar4 != 0) {
                    /* try { // try from 001ad96c to 001ad97f has its CatchHandler @ 001ad9d8 */
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


// ===== 001ad9dc  FUN_001ad9dc =====

void FUN_001ad9dc(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = param_1[3];
  *param_1 = (long)(PTR_vtable_001ba8e8 + 0x10);
  if (lVar4 != 0) {
                    /* try { // try from 001ada18 to 001ada2b has its CatchHandler @ 001ada68 */
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


// ===== 001ada6c  margelo::nitro::JHybridObject::CxxPart::createHybridObject =====

/* margelo::nitro::JHybridObject::CxxPart::createHybridObject(facebook::jni::basic_strong_ref<margelo::nitro::JHybridObject::JavaPart,
   facebook::jni::LocalReferenceAllocator> const&) */

void margelo::nitro::JHybridObject::CxxPart::createHybridObject(basic_strong_ref *param_1)

{
  long lVar1;
  undefined *puVar2;
  __shared_weak_count *this;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  this = (__shared_weak_count *)operator_new(0x88);
  puVar2 = PTR_vtable_001ba128;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR_FUN_001b9880;
  *(undefined **)(this + 0x18) = puVar2 + 0x10;
  if (*(long *)(lVar1 + 0x28) == lVar4) {
                    /* try { // try from 001adac8 to 001adad3 has its CatchHandler @ 001adad4 */
    uVar3 = FUN_001adb78(this + 0x28);
                    /* catch() { ... } // from try @ 001adac8 with catch @ 001adad4 */
    facebook::jsi::NativeState::~NativeState((NativeState *)(this + 0x18));
    std::__ndk1::__shared_weak_count::~__shared_weak_count(this);
    if (*(long *)(lVar1 + 0x28) == lVar4) {
      operator_delete(this);
      FUN_00157e74(uVar3);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001adb0c  margelo::nitro::JHybridObject::JHybridObject =====

/* margelo::nitro::JHybridObject::JHybridObject(facebook::jni::basic_strong_ref<margelo::nitro::JHybridObject::JavaPart,
   facebook::jni::LocalReferenceAllocator> const&) */

void __thiscall
margelo::nitro::JHybridObject::JHybridObject(JHybridObject *this,basic_strong_ref *param_1)

{
  long lVar1;
  JHybridObject *pJVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  pJVar2 = this + 0x10;
  *(undefined **)this = PTR_vtable_001ba128 + 0x10;
                    /* try { // try from 001adb4c to 001adb4f has its CatchHandler @ 001adb50 */
                    /* catch() { ... } // from try @ 001adb4c with catch @ 001adb50 */
  if ((*(long *)(lVar1 + 0x28) == lVar3) &&
     (auVar4 = FUN_001adb78(pJVar2), param_1 = auVar4._8_8_, pJVar2 = auVar4._0_8_,
     *(long *)(lVar1 + 0x28) == lVar3)) {
    facebook::jsi::NativeState::~NativeState((NativeState *)this);
    auVar4 = FUN_00157e74(pJVar2);
    param_1 = auVar4._8_8_;
    pJVar2 = auVar4._0_8_;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pJVar2,param_1);
}


// ===== 001adb78  FUN_001adb78 =====

void FUN_001adb78(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  runtime_error *this;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  param_1[1] = 0;
  param_1[2] = 0;
  puVar2 = PTR_construction_vtable_001ba8f8;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[-2] = (long)(puVar2 + 0xa8);
  param_1[6] = (long)"HybridObject";
  *param_1 = (long)(puVar2 + 0x50);
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  param_1[8] = 0;
  param_1[7] = 0;
  this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001adbf4 to 001adbff has its CatchHandler @ 001adc38 */
  std::runtime_error::runtime_error
            (this,
             "Cannot default-construct HybridObject! Did you forget to add the `HybridObject(TAG)` base-constructor call to your Hybrid Object\'s constructor?"
            );
  if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* try { // try from 001adc10 to 001adc27 has its CatchHandler @ 001adc28 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,PTR_typeinfo_001b9e68,PTR__runtime_error_001b9e50);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001adcdc  margelo::nitro::JHybridObject::~JHybridObject =====

/* margelo::nitro::JHybridObject::~JHybridObject() */

void __thiscall margelo::nitro::JHybridObject::~JHybridObject(JHybridObject *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  ~JHybridObject(this);
  HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState((NativeState *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001add48  margelo::nitro::JHybridObject::~JHybridObject =====

/* margelo::nitro::JHybridObject::~JHybridObject() */

void __thiscall margelo::nitro::JHybridObject::~JHybridObject(JHybridObject *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  ~JHybridObject(this);
  HybridObject::~HybridObject((HybridObject *)(this + 0x10));
  facebook::jsi::NativeState::~NativeState((NativeState *)this);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001addbc  margelo::nitro::JHybridObject::dispose =====

/* margelo::nitro::JHybridObject::dispose() */

void __thiscall margelo::nitro::JHybridObject::dispose(JHybridObject *this)

{
  long lVar1;
  int iVar2;
  _jobject *p_Var3;
  _jmethodID *p_Var4;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((DAT_001c0438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_001c0438), iVar2 != 0)) {
    FUN_001ad1b0(auStack_30);
    DAT_001c0430 = FUN_001ae6e8(auStack_30);
    __cxa_guard_release(&DAT_001c0438);
  }
  p_Var4 = *(_jmethodID **)(this + 8);
                    /* try { // try from 001addf0 to 001ade47 has its CatchHandler @ 001ade64 */
  p_Var3 = (_jobject *)facebook::jni::Environment::current();
  _JNIEnv::CallVoidMethod(p_Var3,p_Var4,DAT_001c0430);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ade68  margelo::nitro::JHybridObject::equals =====

/* margelo::nitro::JHybridObject::equals(std::__ndk1::shared_ptr<margelo::nitro::HybridObject>
   const&) */

void __thiscall margelo::nitro::JHybridObject::equals(JHybridObject *this,shared_ptr *param_1)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar1 = tpidr_el0;
  lVar6 = *(long *)(lVar1 + 0x28);
  if (*(long *)param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = __dynamic_cast(*(long *)param_1,PTR_typeinfo_001b9ee8,PTR_typeinfo_001ba900,
                           0xffffffffffffffff);
    if (uVar3 != 0) {
      plVar7 = *(long **)(param_1 + 8);
      if (plVar7 != (long *)0x0) {
        FUN_0015c230(1,plVar7 + 1);
      }
      uVar8 = *(undefined8 *)(this + 8);
      uVar9 = *(undefined8 *)(uVar3 + 8);
                    /* try { // try from 001aded8 to 001adeef has its CatchHandler @ 001adf5c */
      plVar4 = (long *)facebook::jni::Environment::current();
      cVar2 = (**(code **)(*plVar4 + 0xc0))(plVar4,uVar8,uVar9);
      uVar3 = (ulong)(cVar2 != '\0');
      if ((plVar7 != (long *)0x0) &&
         (lVar5 = FUN_0015bb40(0xffffffffffffffff,plVar7 + 1), lVar5 == 0)) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


// ===== 001adf60  margelo::nitro::JHybridObject::getExternalMemorySize =====

/* margelo::nitro::JHybridObject::getExternalMemorySize() */

undefined8 __thiscall margelo::nitro::JHybridObject::getExternalMemorySize(JHybridObject *this)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((DAT_001c0428 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_001c0428), iVar2 != 0)) {
    FUN_001ad1b0(auStack_30);
    DAT_001c0420 = FUN_001abeac(auStack_30,"getMemorySize");
    __cxa_guard_release(&DAT_001c0428);
  }
  uVar4 = *(undefined8 *)(this + 8);
                    /* try { // try from 001adf94 to 001adffb has its CatchHandler @ 001ae018 */
  uVar3 = facebook::jni::Environment::current();
  uVar3 = FUN_001abf30(uVar3,uVar4,DAT_001c0420);
  facebook::jni::throwPendingJniExceptionAsCppException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


