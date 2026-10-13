// ===== 00836ec0  FUN_00836ec0 =====

undefined * FUN_00836ec0(void)

{
  return PTR_RNSentryReplayMaskComponentName_0099e3c0;
}


// ===== 00836ecc  FUN_00836ecc =====

undefined * FUN_00836ecc(void)

{
  return PTR_RNSentryReplayMaskComponentName_0099e3c0;
}


// ===== 00836ed8  FUN_00836ed8 =====

undefined8 FUN_00836ed8(void)

{
  return 0x61;
}


// ===== 00836ee0  FUN_00836ee0 =====

void FUN_00836ee0(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 uStack_49;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_64 = (**(code **)(*param_2 + 0x20))();
  FUN_008376d4(&local_60,&uStack_49,param_3,param_4,&local_64);
                    /* try { // try from 00836f48 to 00836f4f has its CatchHandler @ 00836f80 */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00836fa8  FUN_00836fa8 =====

void FUN_00836fa8(undefined8 *param_1,long *param_2,shared_ptr *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *local_70;
  long *local_68;
  long *local_60;
  long *plStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00837988(&local_60,&local_70);
                    /* try { // try from 00836ff4 to 00836fff has its CatchHandler @ 008370ac */
  (**(code **)(*local_60 + 0x10))(local_60,param_3,param_4);
  local_70 = local_60;
  local_68 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    FUN_00757d00(1,plStack_58 + 1);
  }
                    /* try { // try from 00837018 to 00837027 has its CatchHandler @ 0083709c */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_70);
  plVar2 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 00837064 to 0083706b has its CatchHandler @ 008370ac */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = plStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008370d4  FUN_008370d4 =====

void FUN_008370d4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x008370e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 008370e8  FUN_008370e8 =====

void FUN_008370e8(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
                 RawProps *param_5)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  int iVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  long *local_100;
  long *local_f8;
  long *local_f0;
  long *plStack_e8;
  undefined1 uStack_d1;
  dynamic adStack_d0 [48];
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar8 = facebook::react::RawProps::isEmpty(), (uVar8 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSentryReplayMaskComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSentryReplayMaskPropsENS0_30RNSentryReplayMaskEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e3a8
         & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSentryReplayMaskComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSentryReplayMaskPropsENS0_30RNSentryReplayMaskEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e3a8
                                   ), iVar7 != 0)) {
                    /* try { // try from 008373b4 to 008373c3 has its CatchHandler @ 008373f0 */
      FUN_00837e84(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSentryReplayMaskComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSentryReplayMaskPropsENS0_30RNSentryReplayMaskEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e3a0
                   ,adStack_d0);
      __cxa_atexit(FUN_00837e34,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSentryReplayMaskComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSentryReplayMaskPropsENS0_30RNSentryReplayMaskEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e3a0
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSentryReplayMaskComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSentryReplayMaskPropsENS0_30RNSentryReplayMaskEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e3a8
                         );
    }
    lVar10 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSentryReplayMaskComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSentryReplayMaskPropsENS0_30RNSentryReplayMaskEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e3a0
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSentryReplayMaskComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSentryReplayMaskPropsENS0_30RNSentryReplayMaskEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e3a0
    ;
    param_1[1] = lVar10;
    if (lVar10 != 0) {
      FUN_00757d00(1,lVar10 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    FUN_00837a8c(&local_f0,param_3,param_5,param_4);
                    /* try { // try from 00837190 to 008371a3 has its CatchHandler @ 00837424 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if (((uVar8 & 1) == 0) ||
       ((uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar8 & 1) == 0 ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enablePropsUpdateReconciliationAndroid(), (uVar8 & 1) == 0)))) {
LAB_008371cc:
      local_100 = local_f0;
      local_f8 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        FUN_00757d00(1,plStack_e8 + 1);
      }
                    /* try { // try from 008371e4 to 008371f3 has its CatchHandler @ 00837414 */
      FUN_00837c5c(&local_100,param_5,param_4);
      plVar4 = local_f8;
      if ((local_f8 != (long *)0x0) &&
         (lVar10 = FUN_00757990(0xffffffffffffffff,local_f8 + 1), lVar10 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 008371b4 to 008371bb has its CatchHandler @ 00837404 */
      pcVar9 = (char *)(**(code **)(*local_f0 + 0x10))();
      iVar7 = strcmp(PTR_RNSentryReplayMaskComponentName_0099e3c0,pcVar9);
      if (iVar7 != 0) goto LAB_008371cc;
      bVar3 = false;
    }
                    /* try { // try from 00837228 to 0083722b has its CatchHandler @ 00837424 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar8 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 00837238 to 00837253 has its CatchHandler @ 00837410 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(local_f0 + 4));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_f0;
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00837394 to 008373a3 has its CatchHandler @ 00837408 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_00837470;
      }
      for (; local_f0 = plVar4, plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00837374 to 00837383 has its CatchHandler @ 00837430 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_00837470;
        }
        uVar1 = 0x811c9dc5;
        uVar8 = (ulong)(*(byte *)(plVar5 + 3) >> 1);
        pcVar6 = (char *)((long)plVar5 + 0x19);
        pcVar9 = (char *)((long)plVar5 + 0x19);
        if ((*(byte *)(plVar5 + 3) & 1) != 0) {
          uVar8 = plVar5[4];
          pcVar6 = (char *)plVar5[5];
          pcVar9 = (char *)plVar5[5];
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          uVar1 = (uVar1 ^ (int)*pcVar6) * 0x1000193;
          pcVar6 = pcVar6 + 1;
        }
                    /* try { // try from 008372d4 to 008372df has its CatchHandler @ 00837438 */
        folly::dynamic::dynamic(adStack_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 008372e4 to 008372fb has its CatchHandler @ 0083743c */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (plVar4,param_3,uVar1,pcVar9,adStack_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 0083730c to 00837317 has its CatchHandler @ 0083742c */
          (*(code *)(&PTR_FUN_0098ccb8)[local_a0])(&uStack_d1,adStack_d0);
        }
        plVar4 = local_f0;
      }
      folly::dynamic::folly::dynamic::destroy(local_98);
    }
    param_1[1] = plStack_e8;
    *param_1 = local_f0;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_00837470:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00837474  FUN_00837474 =====

void FUN_00837474(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0083747c  FUN_0083747c =====

void FUN_0083747c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00837484  FUN_00837484 =====

void FUN_00837484(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *local_90;
  long *local_88;
  undefined1 auStack_80 [8];
  long *local_78;
  long *local_70;
  long *local_68;
  undefined1 uStack_59;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_0078a610(auStack_80,&uStack_59,param_3 + 8,param_3 + 4);
                    /* try { // try from 008374cc to 008374d3 has its CatchHandler @ 00837658 */
  plVar4 = (long *)operator_new(0x68);
  plVar1 = plVar4 + 3;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_0098ce90;
                    /* try { // try from 008374ec to 008374fb has its CatchHandler @ 00837640 */
  FUN_008380b0(plVar1,auStack_80,param_2 + 8);
  local_70 = plVar1;
  local_68 = plVar4;
  if ((local_78 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_78 + 1), lVar5 == 0)) {
    (**(code **)(*local_78 + 0x10))(local_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 00837530 to 00837537 has its CatchHandler @ 00837630 */
  plVar6 = (long *)operator_new(0x1a0);
  puVar3 = PTR_DAT_0099dca0;
  plVar1 = plVar6 + 4;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)(puVar3 + 0x10);
                    /* try { // try from 00837554 to 0083756b has its CatchHandler @ 00837618 */
  FUN_008382c0(plVar1,param_3,&local_70,param_2 + 8,param_2);
  plVar4 = local_70;
  *param_1 = (long)plVar1;
  param_1[1] = (long)plVar6;
  local_90 = plVar1;
  local_88 = plVar6;
  FUN_00757d00(1,plVar6 + 2);
                    /* try { // try from 00837584 to 0083758f has its CatchHandler @ 008375f8 */
  facebook::react::EventEmitter::facebook::react::EventEmitter::setShadowNodeFamily
            (plVar4,&local_90);
  if (local_88 != (long *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar1 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar5 == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00837680  FUN_00837680 =====

void FUN_00837680(void)

{
  return;
}


// ===== 00837684  FUN_00837684 =====

void FUN_00837684(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 008376d4  FUN_008376d4 =====

void FUN_008376d4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 uVar8;
  
  puVar6 = (undefined8 *)operator_new(0x400);
  uVar8 = *param_5;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_0098ccd8;
                    /* try { // try from 0083771c to 0083772b has its CatchHandler @ 008377c4 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4,uVar8);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_0098cd28;
  uVar2 = *(uint *)((long)puVar6 + 0x6c);
  uVar1 = uVar2 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar2 & 0xfffffff8 | uVar1;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar8 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar8;
  cVar3 = *(char *)(lVar7 + 0x6b0);
  cVar4 = *(char *)(lVar7 + 0x6b1);
  cVar5 = *(char *)(lVar7 + 0x1e8);
  *param_1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  param_1[1] = puVar6;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar2 & 0xfffff000 |
       uVar2 & 0x7f8 | uVar1 | (uint)((cVar3 != '\0' || cVar4 != '\0') || cVar5 != '\0') << 0xb;
  return;
}


// ===== 008377e0  FUN_008377e0 =====

void FUN_008377e0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098ccd8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008377f0  FUN_008377f0 =====

void FUN_008377f0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098ccd8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00837820  FUN_00837820 =====

void FUN_00837820(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00837828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0083782c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00837830  FUN_00837830 =====

void FUN_00837830(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_0099de98 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00757990(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x79];
    }
    param_1[0x7a] = (long)pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = (void *)param_1[0x73];
  if (pvVar4 != (void *)0x0) {
    param_1[0x74] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  FUN_007890e8(param_1 + 0x23);
  FUN_00789784(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008378f0  FUN_008378f0 =====

void FUN_008378f0(long param_1)

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


// ===== 00837958  FUN_00837958 =====

bool FUN_00837958(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 00837970  FUN_00837970 =====

bool FUN_00837970(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 00837988  FUN_00837988 =====

void FUN_00837988(undefined8 *param_1,undefined8 param_2,ShadowNode *param_3,
                 ShadowNodeFragment *param_4)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 uVar8;
  
  puVar6 = (undefined8 *)operator_new(0x400);
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_0098ccd8;
                    /* try { // try from 008379c8 to 008379d7 has its CatchHandler @ 00837a70 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_0098cd28;
  uVar2 = *(uint *)((long)puVar6 + 0x6c);
  uVar1 = uVar2 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar2 & 0xfffffff8 | uVar1;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar8 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar8;
  cVar3 = *(char *)(lVar7 + 0x6b0);
  cVar4 = *(char *)(lVar7 + 0x6b1);
  cVar5 = *(char *)(lVar7 + 0x1e8);
  *param_1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  param_1[1] = puVar6;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar2 & 0xfffff000 |
       uVar2 & 0x7f8 | uVar1 | (uint)((cVar3 != '\0' || cVar4 != '\0') || cVar5 != '\0') << 0xb;
  return;
}


// ===== 00837a8c  FUN_00837a8c =====

void FUN_00837a8c(undefined8 *param_1,HostPlatformViewProps *param_2,function *param_3,long *param_4
                 )

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  RawProps *pRVar7;
  long local_90 [4];
  long *local_70;
  long local_58;
  
  plVar5 = local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pRVar7 = (RawProps *)*param_4;
  if (pRVar7 == (RawProps *)0x0) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSentryReplayMaskComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSentryReplayMaskPropsENS0_30RNSentryReplayMaskEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e3a8
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSentryReplayMaskComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSentryReplayMaskPropsENS0_30RNSentryReplayMaskEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e3a8
                                   ), iVar3 != 0)) {
                    /* try { // try from 00837bac to 00837bbb has its CatchHandler @ 00837be8 */
      FUN_00837e84(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSentryReplayMaskComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSentryReplayMaskPropsENS0_30RNSentryReplayMaskEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e3a0
                   ,local_90);
      __cxa_atexit(FUN_00837e34,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSentryReplayMaskComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSentryReplayMaskPropsENS0_30RNSentryReplayMaskEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e3a0
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSentryReplayMaskComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSentryReplayMaskPropsENS0_30RNSentryReplayMaskEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e3a8
                         );
    }
    pRVar7 = *(RawProps **)
              PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSentryReplayMaskComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSentryReplayMaskPropsENS0_30RNSentryReplayMaskEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e3a0
    ;
  }
  puVar4 = (undefined8 *)operator_new(0x6f8);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_0098ce40;
  local_70 = (long *)0x0;
                    /* try { // try from 00837b08 to 00837b2f has its CatchHandler @ 00837bfc */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)(puVar4 + 3),(PropsParserContext *)(PTR_PTR_0099e3d0 + 8),
             param_2,pRVar7,param_3);
  if (local_70 == local_90) {
    lVar6 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_00837b5c;
    lVar6 = 5;
    plVar5 = local_70;
  }
  (**(code **)(*plVar5 + lVar6 * 8))();
LAB_00837b5c:
  puVar2 = PTR_vtable_0099e3c8;
  *param_1 = (HostPlatformViewProps *)(puVar4 + 3);
  param_1[1] = puVar4;
  puVar4[3] = puVar2 + 0x20;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00837c5c  FUN_00837c5c =====

void FUN_00837c5c(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  plVar3 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = *param_1;
  if (*param_3 == 0) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSentryReplayMaskComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSentryReplayMaskPropsENS0_30RNSentryReplayMaskEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e3a8
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSentryReplayMaskComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSentryReplayMaskPropsENS0_30RNSentryReplayMaskEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e3a8
                                   ), iVar2 != 0)) {
                    /* try { // try from 00837d40 to 00837d4f has its CatchHandler @ 00837d7c */
      FUN_00837e84(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSentryReplayMaskComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSentryReplayMaskPropsENS0_30RNSentryReplayMaskEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e3a0
                   ,local_70);
      __cxa_atexit(FUN_00837e34,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSentryReplayMaskComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSentryReplayMaskPropsENS0_30RNSentryReplayMaskEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e3a0
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSentryReplayMaskComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSentryReplayMaskPropsENS0_30RNSentryReplayMaskEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e3a8
                         );
    }
    local_50 = (long *)0x0;
                    /* try { // try from 00837ccc to 00837cdf has its CatchHandler @ 00837d90 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*(undefined8 *)
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSentryReplayMaskComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSentryReplayMaskPropsENS0_30RNSentryReplayMaskEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e3a0
               ,param_2,local_70);
  }
  else {
    local_50 = (long *)0x0;
                    /* try { // try from 00837c90 to 00837ca7 has its CatchHandler @ 00837d94 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*param_3,param_2,local_70);
  }
  if (local_50 == local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00837d0c;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_00837d0c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00837de4  FUN_00837de4 =====

void FUN_00837de4(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00837e34  FUN_00837e34 =====

void FUN_00837e34(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00837e84  FUN_00837e84 =====

void FUN_00837e84(undefined8 *param_1)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x6f8);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_0098cdf0;
  memset(__s,0,0x6e0);
                    /* try { // try from 00837ec8 to 00837edb has its CatchHandler @ 00837f44 */
  FUN_00788b10(__s,PTR_PTR_0099e3d0 + 0x10);
  *(undefined4 *)((long)puVar2 + 0x5f4) = 0;
  *(undefined1 *)(puVar2 + 0xbf) = 0;
  *(undefined1 *)(puVar2 + 0xcb) = 0;
  *(undefined1 *)(puVar2 + 0xcc) = 0;
  *(undefined1 *)(puVar2 + 0xd8) = 0;
  *(undefined1 *)(puVar2 + 0xda) = 0;
  *(undefined1 *)((long)puVar2 + 0x6d4) = 0;
  *(undefined1 *)(puVar2 + 0xdb) = 0;
  *(undefined1 *)((long)puVar2 + 0x6dc) = 0;
  *(undefined1 *)(puVar2 + 0xdc) = 0;
  *(undefined1 *)((long)puVar2 + 0x6e4) = 0;
  *(undefined1 *)(puVar2 + 0xdd) = 0;
  *(undefined1 *)((long)puVar2 + 0x6ec) = 0;
  *(undefined1 *)(puVar2 + 0xde) = 0;
  *(undefined1 *)((long)puVar2 + 0x6f4) = 0;
  puVar1 = PTR_vtable_0099e3c8;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *param_1 = __s;
  param_1[1] = puVar2;
  puVar2[3] = puVar1 + 0x20;
  return;
}


// ===== 00837f60  FUN_00837f60 =====

void FUN_00837f60(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098cdf0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00837f70  FUN_00837f70 =====

void FUN_00837f70(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098cdf0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00837fa0  FUN_00837fa0 =====

void FUN_00837fa0(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e3d0 + 8);
  return;
}


// ===== 00837fb4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00837fb8  FUN_00837fb8 =====

void FUN_00837fb8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098ce40;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00837fc8  FUN_00837fc8 =====

void FUN_00837fc8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098ce40;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00837ff8  FUN_00837ff8 =====

void FUN_00837ff8(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e3d0 + 8);
  return;
}


// ===== 0083800c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00838010  FUN_00838010 =====

void FUN_00838010(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00838060  FUN_00838060 =====

void FUN_00838060(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098ce90;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00838070  FUN_00838070 =====

void FUN_00838070(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098ce90;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008380a0  FUN_008380a0 =====

void FUN_008380a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008380a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008380ac  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008380b0  FUN_008380b0 =====

EventEmitter * FUN_008380b0(EventEmitter *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long *plStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plStack_48 = (long *)param_2[1];
  local_50 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  local_60 = *param_3;
  local_58 = param_3[1];
  if (local_58 != 0) {
    FUN_00757d00(1,local_58 + 0x10);
  }
                    /* try { // try from 008380f8 to 00838107 has its CatchHandler @ 008381d4 */
  facebook::react::EventEmitter::EventEmitter(param_1,&local_50,&local_60);
  *(undefined ***)param_1 = &PTR_FUN_0097ff10;
                    /* try { // try from 00838118 to 0083811f has its CatchHandler @ 008381c4 */
  plVar3 = (long *)operator_new(0x58);
  puVar2 = PTR_DAT_0099dc90;
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[4] = 0;
  plVar3[3] = 0;
  *(long **)(param_1 + 0x40) = plVar3 + 3;
  *(long **)(param_1 + 0x48) = plVar3;
  plVar3[6] = 0;
  plVar3[5] = 0;
  plVar3[8] = 0;
  plVar3[7] = 0;
  *(undefined8 *)((long)plVar3 + 0x4c) = 0;
  *(undefined8 *)((long)plVar3 + 0x44) = 0;
  *(undefined ***)param_1 = &PTR_FUN_0098cee0;
  if (local_58 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar3 = plStack_48;
  if ((plStack_48 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,plStack_48 + 1), lVar4 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00838208  FUN_00838208 =====

void FUN_00838208(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = (long)(PTR_DAT_0099dc88 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = (long)&PTR_FUN_0097ff80;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 008382c0  FUN_008382c0 =====

ShadowNodeFamily *
FUN_008382c0(ShadowNodeFamily *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = *param_3;
  local_50 = (long *)param_3[1];
  if (local_50 != (long *)0x0) {
    FUN_00757d00(1,local_50 + 1);
  }
  local_68 = *param_4;
  local_60 = param_4[1];
  if (local_60 != 0) {
    FUN_00757d00(1,local_60 + 0x10);
  }
                    /* try { // try from 00838324 to 0083833b has its CatchHandler @ 008383a4 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(param_1,param_2,&local_58,&local_68,param_5);
  if (local_60 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008383dc  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_33RNSentryReplayUnmaskComponentNameEEEENS0_25RNSentryReplayUnmaskPropsENS0_32RNSentryReplayUnmaskEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_33RNSentryReplayUnmaskComponentNameEEEENS0_25RNSentryReplayUnmaskPropsENS0_32RNSentryReplayUnmaskEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00838430(&local_30);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00838430  FUN_00838430 =====

void FUN_00838430(undefined8 *param_1,ComponentDescriptorParameters *param_2)

{
  long lVar1;
  ComponentDescriptor *this;
  void *local_90;
  void *pvStack_88;
  undefined8 local_80;
  void *pvStack_78;
  void *local_70;
  undefined8 uStack_68;
  void *local_60;
  void *pvStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ComponentDescriptor *)operator_new(0x88);
  pvStack_78 = (void *)0x0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = (void *)0x0;
  pvStack_58 = (void *)0x0;
  local_60 = (void *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  pvStack_88 = (void *)0x0;
  local_90 = (void *)0x0;
                    /* try { // try from 00838474 to 0083847f has its CatchHandler @ 008384ec */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_90);
  *(undefined ***)this = &PTR_FUN_0098cf18;
  FUN_0083851c(this + 0x38);
  *param_1 = this;
  if (local_60 != (void *)0x0) {
    pvStack_58 = local_60;
    operator_delete(local_60);
  }
  if (pvStack_78 != (void *)0x0) {
    local_70 = pvStack_78;
    operator_delete(pvStack_78);
  }
  if (local_90 != (void *)0x0) {
    pvStack_88 = local_90;
    operator_delete(local_90);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0083851c  FUN_0083851c =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0083851c(undefined8 param_1)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  undefined4 local_fb0 [2];
  undefined8 *local_fa8;
  undefined *local_fa0;
  undefined8 uStack_f98;
  undefined8 local_f90;
  undefined8 uStack_f88;
  undefined4 local_f80 [2];
  undefined8 local_f78;
  undefined8 uStack_f70;
  undefined8 local_f68;
  undefined8 uStack_f60;
  undefined4 local_f58;
  undefined4 local_f50;
  undefined1 local_f4c;
  undefined8 local_f4b;
  undefined8 local_f43;
  undefined8 uStack_f3b;
  undefined8 local_f33;
  undefined8 uStack_f2b;
  undefined8 local_f23;
  undefined8 uStack_f1b;
  undefined8 local_f13;
  undefined6 uStack_f0b;
  undefined2 uStack_f05;
  undefined6 uStack_f03;
  undefined8 uStack_efd;
  undefined4 local_ef5;
  undefined8 local_ef1;
  undefined1 local_ee9;
  undefined1 uStack_ee8;
  undefined7 uStack_ee7;
  undefined8 uStack_ee0;
  undefined8 uStack_ed8;
  undefined8 uStack_ed0;
  undefined8 local_ec8;
  undefined8 uStack_ec0;
  undefined8 local_eb8;
  undefined8 uStack_eb0;
  undefined8 local_ea8;
  undefined8 uStack_ea0;
  undefined8 local_e98;
  undefined8 uStack_e90;
  undefined8 uStack_e88;
  undefined8 local_e80;
  undefined8 local_e78;
  undefined8 uStack_e70;
  undefined8 local_e68;
  undefined4 uStack_e60;
  undefined4 uStack_e5c;
  undefined4 uStack_e58;
  undefined4 uStack_e54;
  undefined4 uStack_e50;
  undefined4 uStack_e4c;
  undefined8 local_e48;
  undefined8 uStack_e40;
  undefined4 local_e38;
  undefined1 local_e34;
  undefined4 local_e30;
  undefined1 local_e2c;
  undefined4 local_e28;
  undefined1 local_e24;
  undefined4 local_e20;
  undefined1 local_e1c;
  undefined4 local_e18;
  undefined1 local_e14;
  undefined4 local_e10;
  undefined1 local_e0c;
  undefined4 local_e08;
  undefined1 local_e04;
  undefined4 local_e00;
  undefined1 local_dfc;
  undefined4 local_df8;
  undefined1 local_df4;
  undefined4 local_df0;
  undefined1 local_dec;
  undefined4 local_de8;
  undefined1 local_de4;
  undefined4 local_de0;
  undefined1 local_ddc;
  undefined4 local_dd8;
  undefined1 local_dd4;
  undefined4 local_dd0;
  undefined1 local_dcc;
  undefined4 local_dc8;
  undefined1 local_dc4;
  undefined4 local_dc0;
  undefined1 local_dbc;
  undefined1 local_db8;
  undefined1 local_db4;
  undefined1 local_da8;
  undefined8 local_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 local_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined1 uStack_d68;
  undefined7 local_d67;
  undefined1 uStack_d60;
  undefined8 uStack_d5f;
  undefined8 local_d54;
  undefined8 uStack_d4c;
  undefined8 uStack_d44;
  undefined8 uStack_d3c;
  undefined8 local_d34;
  undefined8 uStack_d2c;
  undefined8 uStack_d24;
  undefined8 uStack_d1c;
  undefined8 local_d14;
  undefined8 uStack_d0c;
  undefined8 uStack_d04;
  undefined5 uStack_cfc;
  undefined3 local_cf7;
  undefined5 uStack_cf4;
  undefined1 local_cec;
  undefined1 local_ce8;
  undefined1 local_ce4;
  undefined1 local_ce0;
  undefined1 local_cdc;
  undefined1 local_cd8;
  undefined1 local_cc0;
  undefined8 local_cb8;
  undefined8 uStack_cb0;
  undefined8 local_ca8;
  undefined4 local_ca0;
  undefined1 local_c9c;
  undefined4 local_c9b;
  undefined1 local_c97;
  undefined1 local_c96;
  undefined8 local_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 local_c70;
  undefined7 uStack_c68;
  undefined4 uStack_c61;
  undefined8 local_c5c;
  undefined1 local_c54;
  undefined1 local_c4c;
  undefined1 local_c48;
  undefined1 local_c40;
  undefined1 local_c3c;
  undefined1 local_c34;
  undefined1 local_c30;
  undefined1 local_c28;
  undefined1 local_c24;
  undefined1 local_c1c;
  undefined1 local_c18;
  undefined1 local_c10;
  undefined1 local_c0c;
  undefined1 local_c04;
  undefined1 local_c00;
  undefined1 local_bf8;
  undefined1 local_bf4;
  undefined1 local_bec;
  undefined1 local_be8;
  undefined1 local_be0;
  undefined1 local_bdc;
  undefined1 local_bd4;
  undefined1 local_bd0;
  undefined1 local_bc8;
  undefined1 local_bc4;
  undefined1 local_bbc;
  undefined1 local_bb8;
  undefined1 local_bb4;
  undefined1 local_bb0;
  undefined1 local_bac;
  undefined1 local_ba8;
  undefined1 local_ba4;
  undefined1 local_ba0;
  undefined1 local_b9c;
  undefined1 local_b98;
  undefined1 local_b94;
  undefined1 local_b90;
  undefined1 local_b8c;
  undefined1 local_b88;
  undefined1 local_b84;
  undefined1 local_b80;
  undefined1 local_b7c;
  undefined1 local_b78;
  undefined1 local_b74;
  undefined1 local_b70;
  undefined1 local_b6c;
  undefined1 local_b68;
  undefined1 local_b64;
  undefined1 local_b60;
  undefined1 local_b5c;
  undefined8 local_b58;
  undefined8 uStack_b50;
  undefined8 local_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined2 local_b28;
  undefined8 local_b24;
  undefined1 local_b1c;
  undefined8 local_b18;
  undefined8 local_b10;
  undefined8 uStack_b08;
  undefined1 local_b00;
  undefined8 local_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined8 uStack_ae0;
  undefined8 local_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 local_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 local_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined8 local_a58;
  undefined8 uStack_a50;
  undefined8 local_a48;
  undefined8 uStack_a40;
  undefined8 local_a38;
  undefined8 uStack_a30;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined8 local_a18;
  undefined8 uStack_a10;
  undefined8 local_a08;
  undefined6 uStack_a00;
  undefined2 uStack_9fa;
  undefined6 uStack_9f8;
  undefined1 local_9f0;
  undefined1 local_9ec;
  undefined1 local_9e8;
  undefined8 local_9e4;
  undefined8 uStack_9dc;
  undefined1 local_9d4;
  undefined8 local_9d0;
  undefined2 local_9c8;
  undefined1 local_9c6;
  undefined4 local_9c4;
  undefined1 local_9c0;
  undefined1 local_960;
  undefined1 local_958;
  undefined1 local_8f8;
  undefined4 local_8f0;
  undefined2 local_8ec;
  undefined1 local_8e8;
  undefined1 local_8e4;
  undefined1 local_8e0;
  undefined1 local_8dc;
  undefined1 local_8d8;
  undefined1 local_8d4;
  undefined1 local_8d0;
  undefined1 local_8cc;
  undefined1 local_8c8;
  undefined1 local_8c4;
  undefined *local_8c0 [220];
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
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
  void *local_150;
  undefined8 uStack_148;
  void *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108 [4];
  undefined4 local_f8 [2];
  undefined8 local_f0;
  undefined4 local_c8;
  void *local_c0;
  void *pvStack_b8;
  undefined8 uStack_b0;
  void *local_a8;
  void *local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long *local_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108[0] = 0;
  local_f8[0] = 0;
  local_f0 = 0;
  local_c8 = 0;
  pvStack_b8 = (void *)0x0;
  local_c0 = (void *)0x0;
  local_a8 = (void *)0x0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = (void *)0x0;
  local_130 = 0;
  uStack_138 = 0;
  local_140 = (void *)0x0;
  uStack_148 = 0;
  local_150 = (void *)0x0;
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
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1d8 = 0;
  local_1e0 = 0;
                    /* try { // try from 008385a0 to 008385ab has its CatchHandler @ 00838ba0 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1e0);
  local_130 = CONCAT44(local_130._4_4_,0x3f800000);
  local_fb0[0] = 0xffffffff;
  uStack_138 = 0;
  local_140 = (void *)0x0;
  uStack_148 = 0;
  local_150 = (void *)0x0;
  local_fa8 = &local_1e0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_120,param_1);
  memset(local_f80,0,0x6c0);
  local_90._0_4_ = 5;
  local_78 = 0;
  local_fa0 = PTR_construction_vtable_0099e3f8 + 0x20;
  local_f80[0] = 5;
  uStack_f88 = 0;
  local_f90 = 0;
  uStack_f98 = 0;
  local_70 = (long *)0x0;
  uStack_68 = 0x3f800000;
  uStack_80 = 0;
  local_88 = 0;
  uStack_f70 = 0;
  local_f78 = 0;
  uStack_f60 = 0;
  local_f68 = 0;
  local_f58 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(&local_90);
  puVar6 = PTR_PTR_0099e3e8;
  puVar5 = PTR_vtable_0099e3e0;
  local_f4c = 0;
  local_ef1 = 0;
  uStack_a10 = _UNK_00485f7c;
  local_a18 = _DAT_00485f74;
  local_f4b = _s__00375408;
  uStack_b08 = _UNK_00371598;
  local_b10 = _DAT_00371590;
  uStack_a20 = _UNK_00485f6c;
  local_a28 = _DAT_00485f64;
  local_e34 = 0;
  uStack_a30 = _UNK_00485f5c;
  local_a38 = _DAT_00485f54;
  uStack_a40 = _UNK_00485f4c;
  local_a48 = _DAT_00485f44;
  uStack_9f8 = 0;
  local_e2c = 0;
  uStack_e60 = 0;
  local_e68 = 0;
  uStack_e4c = 0;
  uStack_e70 = 0;
  local_e78 = 0;
  uStack_a00 = 0;
  uStack_9fa = 0;
  local_a08 = 0;
  local_f50 = 0x10410710;
  local_ef5 = 0x40004;
  uStack_e54 = 0;
  uStack_e50 = 0;
  uStack_e5c = 0;
  uStack_e58 = 0;
  uStack_e40 = 0;
  local_e48 = 0;
  local_e38 = 0x7fc00000;
  local_e30 = 0x7fc00000;
  local_e28 = 0x7fc00000;
  local_e20 = 0x7fc00000;
  local_e18 = 0x7fc00000;
  local_e10 = 0x7fc00000;
  local_e08 = 0x7fc00000;
  local_e00 = 0x7fc00000;
  local_df8 = 0x7fc00000;
  local_df0 = 0x7fc00000;
  local_de8 = 0x7fc00000;
  local_de0 = 0x7fc00000;
  local_dd8 = 0x7fc00000;
  local_dd0 = 0x7fc00000;
  local_dc8 = 0x7fc00000;
  local_dc0 = 0x7fc00000;
  uStack_d5f = 0;
  uStack_d60 = 0;
  uStack_d4c = 0;
  local_d54 = 0;
  uStack_d3c = 0;
  uStack_d44 = 0;
  uStack_d2c = 0;
  local_d34 = 0;
  uStack_d1c = 0;
  uStack_d24 = 0;
  uStack_d0c = 0;
  local_d14 = 0;
  uStack_cfc = 0;
  uStack_d04 = 0;
  local_cf7 = 0;
  uStack_cf4 = 0;
  local_c9c = 1;
  local_c9b = 0;
  local_c96 = 0x23;
  local_c5c = 0x3f800000;
  uStack_b40 = 0;
  local_b48 = 0;
  uStack_b30 = 0;
  uStack_b38 = 0;
  uStack_b50 = 0;
  local_b58 = 0;
  local_b24 = 0;
  uStack_af0 = 0;
  local_af8 = 0;
  uStack_ae0 = 0;
  uStack_ae8 = 0;
  uStack_ad0 = 0;
  local_ad8 = 0;
  uStack_ac0 = 0;
  uStack_ac8 = 0;
  uStack_ab0 = 0;
  local_ab8 = 0;
  uStack_aa0 = 0;
  uStack_aa8 = 0;
  uStack_a90 = 0;
  local_a98 = 0;
  uStack_a80 = 0;
  uStack_a88 = 0;
  uStack_a70 = 0;
  local_a78 = 0;
  uStack_a60 = 0;
  uStack_a68 = 0;
  uStack_a50 = 0;
  local_a58 = 0;
  uStack_ee7 = 0;
  uStack_f3b = 0;
  local_f43 = 0;
  uStack_f2b = 0;
  local_f33 = 0;
  uStack_f1b = 0;
  local_f23 = 0;
  uStack_f0b = 0;
  local_f13 = 0;
  uStack_efd = 0;
  uStack_f05 = 0;
  uStack_f03 = 0;
  local_ee9 = 0;
  uStack_ee8 = 0;
  uStack_ed8 = 0;
  uStack_ee0 = 0;
  local_ec8 = 0;
  uStack_ed0 = 0;
  local_eb8 = 0;
  uStack_ec0 = 0;
  local_ea8 = 0;
  uStack_eb0 = 0;
  local_e98 = 0;
  uStack_ea0 = 0;
  uStack_e88 = 0;
  uStack_e90 = 0;
  local_e80 = 0;
  local_e24 = 0;
  local_e1c = 0;
  local_e14 = 0;
  local_e0c = 0;
  local_e04 = 0;
  local_dfc = 0;
  local_df4 = 0;
  local_dec = 0;
  local_de4 = 0;
  local_ddc = 0;
  local_dd4 = 0;
  local_dcc = 0;
  local_dc4 = 0;
  local_dbc = 0;
  local_db8 = 0;
  local_db4 = 0;
  local_da8 = 0;
  local_cec = 0;
  local_ce8 = 0;
  local_ce4 = 0;
  local_ce0 = 0;
  local_cdc = 0;
  local_cd8 = 0;
  local_cc0 = 0;
  uStack_d98 = 0;
  local_da0 = 0;
  uStack_d88 = 0;
  uStack_d90 = 0;
  uStack_d78 = 0;
  local_d80 = 0;
  uStack_d68 = 0;
  local_d67 = 0;
  uStack_d70 = 0;
  uStack_cb0 = 0;
  local_cb8 = 0;
  local_ca8 = 0;
  local_ca0 = 0;
  local_c97 = 0;
  uStack_c88 = 0;
  local_c90 = 0;
  uStack_c78 = 0;
  uStack_c80 = 0;
  uStack_c68 = 0;
  uStack_c61 = 0;
  local_c70 = 0;
  local_c54 = 0;
  local_c4c = 0;
  local_c48 = 0;
  local_c40 = 0;
  local_c3c = 0;
  local_c34 = 0;
  local_c30 = 0;
  local_c28 = 0;
  local_c24 = 0;
  local_c1c = 0;
  local_c18 = 0;
  local_c10 = 0;
  local_c0c = 0;
  local_c04 = 0;
  local_c00 = 0;
  local_bf8 = 0;
  local_bf4 = 0;
  local_bec = 0;
  local_be8 = 0;
  local_be0 = 0;
  local_bdc = 0;
  local_bd4 = 0;
  local_bd0 = 0;
  local_bc8 = 0;
  local_bc4 = 0;
  local_bbc = 0;
  local_bb8 = 0;
  local_bb4 = 0;
  local_bb0 = 0;
  local_bac = 0;
  local_ba8 = 0;
  local_ba4 = 0;
  local_ba0 = 0;
  local_b9c = 0;
  local_b98 = 0;
  local_b94 = 0;
  local_b90 = 0;
  local_b8c = 0;
  local_b88 = 0;
  local_b84 = 0;
  local_b80 = 0;
  local_b7c = 0;
  local_b78 = 0;
  local_b74 = 0;
  local_b70 = 0;
  local_b6c = 0;
  local_b68 = 0;
  local_b64 = 0;
  local_b60 = 0;
  local_b5c = 0;
  local_b18 = 0;
  local_b28 = 0;
  local_b1c = 0;
  local_b00 = 0;
  local_9f0 = 0;
  local_9ec = 0;
  local_9e8 = 0;
  local_9d0 = 0;
  uStack_9dc = 0;
  local_9e4 = 0;
  local_9d4 = 0;
  local_9c8 = 0x101;
  local_9c6 = 0;
  local_9c4 = 0;
  local_9c0 = 0;
  local_960 = 0;
  local_958 = 0;
  local_8f8 = 0;
  local_8e8 = 0;
  local_8e4 = 0;
  local_8e0 = 0;
  local_8dc = 0;
  local_8d8 = 0;
  local_8d4 = 0;
  local_8d0 = 0;
  local_8cc = 0;
  local_8c8 = 0;
  local_8c4 = 0;
  local_8ec = 0;
  local_8f0 = 0;
  local_fa0 = PTR_vtable_0099e3e0 + 0x20;
  local_70 = (long *)0x0;
                    /* try { // try from 00838994 to 008389bb has its CatchHandler @ 00838b64 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)local_8c0,(PropsParserContext *)(PTR_PTR_0099e3e8 + 8),
             (HostPlatformViewProps *)local_fb0,(RawProps *)&local_fa0,(function *)&local_120);
  if (local_70 == &local_90) {
    lVar7 = 4;
    plVar8 = &local_90;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_008389e8;
    lVar7 = 5;
    plVar8 = local_70;
  }
  (**(code **)(*plVar8 + lVar7 * 8))();
LAB_008389e8:
  local_8c0[0] = puVar5 + 0x20;
  FUN_0078917c(local_8c0,puVar6 + 8);
  FUN_0078917c(&local_fa0,puVar6 + 8);
  facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(param_1);
  pvVar3 = local_150;
  puVar4 = (undefined8 *)local_140;
  while (puVar4 != (undefined8 *)0x0) {
    plVar8 = (long *)puVar4[6];
    pvVar9 = (void *)*puVar4;
    local_150 = pvVar3;
    if ((plVar8 == (long *)0x0) || (lVar7 = FUN_00757990(0xffffffffffffffff,plVar8 + 1), lVar7 != 0)
       ) {
      bVar1 = *(byte *)(puVar4 + 2);
    }
    else {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
      bVar1 = *(byte *)(puVar4 + 2);
    }
    if ((bVar1 & 1) != 0) {
      operator_delete((void *)puVar4[4]);
    }
    operator_delete(puVar4);
    pvVar3 = local_150;
    puVar4 = (undefined8 *)pvVar9;
  }
  local_150 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_188);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_1b8);
  std::__ndk1::mutex::~mutex((mutex *)&local_1e0);
  pvVar9 = local_a8;
  pvVar3 = local_a0;
  if (local_a8 != (void *)0x0) {
    while (pvVar3 != pvVar9) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 00838af4 to 00838aff has its CatchHandler @ 00838bac */
        (*(code *)(&PTR_FUN_0098ccb8)[*(uint *)((long)pvVar3 + -8)])
                  (&local_fa0,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_a0 = pvVar9;
    operator_delete(local_a8);
  }
  if (local_c0 != (void *)0x0) {
    pvStack_b8 = local_c0;
    operator_delete(local_c0);
  }
  folly::dynamic::folly::dynamic::destroy(local_f8);
  facebook::jsi::Value::~Value((Value *)local_108);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00838bb0  FUN_00838bb0 =====

void FUN_00838bb0(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 00838bd4  FUN_00838bd4 =====

undefined * FUN_00838bd4(void)

{
  return PTR_RNSentryReplayUnmaskComponentName_0099e3d8;
}


// ===== 00838be0  FUN_00838be0 =====

undefined * FUN_00838be0(void)

{
  return PTR_RNSentryReplayUnmaskComponentName_0099e3d8;
}


// ===== 00838bec  FUN_00838bec =====

undefined8 FUN_00838bec(void)

{
  return 0x61;
}


// ===== 00838bf4  FUN_00838bf4 =====

void FUN_00838bf4(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 uStack_49;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_64 = (**(code **)(*param_2 + 0x20))();
  FUN_008393e8(&local_60,&uStack_49,param_3,param_4,&local_64);
                    /* try { // try from 00838c5c to 00838c63 has its CatchHandler @ 00838c94 */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00838cbc  FUN_00838cbc =====

void FUN_00838cbc(undefined8 *param_1,long *param_2,shared_ptr *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *local_70;
  long *local_68;
  long *local_60;
  long *plStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_0083969c(&local_60,&local_70);
                    /* try { // try from 00838d08 to 00838d13 has its CatchHandler @ 00838dc0 */
  (**(code **)(*local_60 + 0x10))(local_60,param_3,param_4);
  local_70 = local_60;
  local_68 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    FUN_00757d00(1,plStack_58 + 1);
  }
                    /* try { // try from 00838d2c to 00838d3b has its CatchHandler @ 00838db0 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_70);
  plVar2 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 00838d78 to 00838d7f has its CatchHandler @ 00838dc0 */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = plStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00838de8  FUN_00838de8 =====

void FUN_00838de8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00838df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 00838dfc  FUN_00838dfc =====

void FUN_00838dfc(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
                 RawProps *param_5)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  int iVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  long *local_100;
  long *local_f8;
  long *local_f0;
  long *plStack_e8;
  undefined1 uStack_d1;
  dynamic adStack_d0 [48];
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar8 = facebook::react::RawProps::isEmpty(), (uVar8 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSentryReplayUnmaskComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSentryReplayUnmaskPropsENS0_32RNSentryReplayUnmaskEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e3b8
         & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSentryReplayUnmaskComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSentryReplayUnmaskPropsENS0_32RNSentryReplayUnmaskEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e3b8
                                   ), iVar7 != 0)) {
                    /* try { // try from 008390c8 to 008390d7 has its CatchHandler @ 00839104 */
      FUN_00839b98(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSentryReplayUnmaskComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSentryReplayUnmaskPropsENS0_32RNSentryReplayUnmaskEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e3b0
                   ,adStack_d0);
      __cxa_atexit(FUN_00839b48,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSentryReplayUnmaskComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSentryReplayUnmaskPropsENS0_32RNSentryReplayUnmaskEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e3b0
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSentryReplayUnmaskComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSentryReplayUnmaskPropsENS0_32RNSentryReplayUnmaskEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e3b8
                         );
    }
    lVar10 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSentryReplayUnmaskComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSentryReplayUnmaskPropsENS0_32RNSentryReplayUnmaskEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e3b0
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSentryReplayUnmaskComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSentryReplayUnmaskPropsENS0_32RNSentryReplayUnmaskEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e3b0
    ;
    param_1[1] = lVar10;
    if (lVar10 != 0) {
      FUN_00757d00(1,lVar10 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    FUN_008397a0(&local_f0,param_3,param_5,param_4);
                    /* try { // try from 00838ea4 to 00838eb7 has its CatchHandler @ 00839138 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if (((uVar8 & 1) == 0) ||
       ((uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar8 & 1) == 0 ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enablePropsUpdateReconciliationAndroid(), (uVar8 & 1) == 0)))) {
LAB_00838ee0:
      local_100 = local_f0;
      local_f8 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        FUN_00757d00(1,plStack_e8 + 1);
      }
                    /* try { // try from 00838ef8 to 00838f07 has its CatchHandler @ 00839128 */
      FUN_00839970(&local_100,param_5,param_4);
      plVar4 = local_f8;
      if ((local_f8 != (long *)0x0) &&
         (lVar10 = FUN_00757990(0xffffffffffffffff,local_f8 + 1), lVar10 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 00838ec8 to 00838ecf has its CatchHandler @ 00839118 */
      pcVar9 = (char *)(**(code **)(*local_f0 + 0x10))();
      iVar7 = strcmp(PTR_RNSentryReplayUnmaskComponentName_0099e3d8,pcVar9);
      if (iVar7 != 0) goto LAB_00838ee0;
      bVar3 = false;
    }
                    /* try { // try from 00838f3c to 00838f3f has its CatchHandler @ 00839138 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar8 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 00838f4c to 00838f67 has its CatchHandler @ 00839124 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(local_f0 + 4));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_f0;
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008390a8 to 008390b7 has its CatchHandler @ 0083911c */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_00839184;
      }
      for (; local_f0 = plVar4, plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00839088 to 00839097 has its CatchHandler @ 00839144 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_00839184;
        }
        uVar1 = 0x811c9dc5;
        uVar8 = (ulong)(*(byte *)(plVar5 + 3) >> 1);
        pcVar6 = (char *)((long)plVar5 + 0x19);
        pcVar9 = (char *)((long)plVar5 + 0x19);
        if ((*(byte *)(plVar5 + 3) & 1) != 0) {
          uVar8 = plVar5[4];
          pcVar6 = (char *)plVar5[5];
          pcVar9 = (char *)plVar5[5];
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          uVar1 = (uVar1 ^ (int)*pcVar6) * 0x1000193;
          pcVar6 = pcVar6 + 1;
        }
                    /* try { // try from 00838fe8 to 00838ff3 has its CatchHandler @ 0083914c */
        folly::dynamic::dynamic(adStack_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 00838ff8 to 0083900f has its CatchHandler @ 00839150 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (plVar4,param_3,uVar1,pcVar9,adStack_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 00839020 to 0083902b has its CatchHandler @ 00839140 */
          (*(code *)(&PTR_FUN_0098ccb8)[local_a0])(&uStack_d1,adStack_d0);
        }
        plVar4 = local_f0;
      }
      folly::dynamic::folly::dynamic::destroy(local_98);
    }
    param_1[1] = plStack_e8;
    *param_1 = local_f0;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_00839184:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00839188  FUN_00839188 =====

void FUN_00839188(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00839190  FUN_00839190 =====

void FUN_00839190(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00839198  FUN_00839198 =====

void FUN_00839198(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *local_90;
  long *local_88;
  undefined1 auStack_80 [8];
  long *local_78;
  long *local_70;
  long *local_68;
  undefined1 uStack_59;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_0078a610(auStack_80,&uStack_59,param_3 + 8,param_3 + 4);
                    /* try { // try from 008391e0 to 008391e7 has its CatchHandler @ 0083936c */
  plVar4 = (long *)operator_new(0x68);
  plVar1 = plVar4 + 3;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_0098d160;
                    /* try { // try from 00839200 to 0083920f has its CatchHandler @ 00839354 */
  FUN_00839dc4(plVar1,auStack_80,param_2 + 8);
  local_70 = plVar1;
  local_68 = plVar4;
  if ((local_78 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_78 + 1), lVar5 == 0)) {
    (**(code **)(*local_78 + 0x10))(local_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 00839244 to 0083924b has its CatchHandler @ 00839344 */
  plVar6 = (long *)operator_new(0x1a0);
  puVar3 = PTR_DAT_0099dca0;
  plVar1 = plVar6 + 4;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)(puVar3 + 0x10);
                    /* try { // try from 00839268 to 0083927f has its CatchHandler @ 0083932c */
  FUN_00839fd4(plVar1,param_3,&local_70,param_2 + 8,param_2);
  plVar4 = local_70;
  *param_1 = (long)plVar1;
  param_1[1] = (long)plVar6;
  local_90 = plVar1;
  local_88 = plVar6;
  FUN_00757d00(1,plVar6 + 2);
                    /* try { // try from 00839298 to 008392a3 has its CatchHandler @ 0083930c */
  facebook::react::EventEmitter::facebook::react::EventEmitter::setShadowNodeFamily
            (plVar4,&local_90);
  if (local_88 != (long *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar1 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar5 == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00839394  FUN_00839394 =====

void FUN_00839394(void)

{
  return;
}


// ===== 00839398  FUN_00839398 =====

void FUN_00839398(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 008393e8  FUN_008393e8 =====

void FUN_008393e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 uVar8;
  
  puVar6 = (undefined8 *)operator_new(0x400);
  uVar8 = *param_5;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_0098cfa8;
                    /* try { // try from 00839430 to 0083943f has its CatchHandler @ 008394d8 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4,uVar8);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_0098cff8;
  uVar2 = *(uint *)((long)puVar6 + 0x6c);
  uVar1 = uVar2 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar2 & 0xfffffff8 | uVar1;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar8 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar8;
  cVar3 = *(char *)(lVar7 + 0x6b0);
  cVar4 = *(char *)(lVar7 + 0x6b1);
  cVar5 = *(char *)(lVar7 + 0x1e8);
  *param_1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  param_1[1] = puVar6;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar2 & 0xfffff000 |
       uVar2 & 0x7f8 | uVar1 | (uint)((cVar3 != '\0' || cVar4 != '\0') || cVar5 != '\0') << 0xb;
  return;
}


// ===== 008394f4  FUN_008394f4 =====

void FUN_008394f4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098cfa8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00839504  FUN_00839504 =====

void FUN_00839504(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098cfa8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00839534  FUN_00839534 =====

void FUN_00839534(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0083953c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00839540  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00839544  FUN_00839544 =====

void FUN_00839544(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_0099de98 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00757990(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x79];
    }
    param_1[0x7a] = (long)pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = (void *)param_1[0x73];
  if (pvVar4 != (void *)0x0) {
    param_1[0x74] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  FUN_007890e8(param_1 + 0x23);
  FUN_00789784(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00839604  FUN_00839604 =====

void FUN_00839604(long param_1)

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


// ===== 0083966c  FUN_0083966c =====

bool FUN_0083966c(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 00839684  FUN_00839684 =====

bool FUN_00839684(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 0083969c  FUN_0083969c =====

void FUN_0083969c(undefined8 *param_1,undefined8 param_2,ShadowNode *param_3,
                 ShadowNodeFragment *param_4)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 uVar8;
  
  puVar6 = (undefined8 *)operator_new(0x400);
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_0098cfa8;
                    /* try { // try from 008396dc to 008396eb has its CatchHandler @ 00839784 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_0098cff8;
  uVar2 = *(uint *)((long)puVar6 + 0x6c);
  uVar1 = uVar2 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar2 & 0xfffffff8 | uVar1;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar8 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar8;
  cVar3 = *(char *)(lVar7 + 0x6b0);
  cVar4 = *(char *)(lVar7 + 0x6b1);
  cVar5 = *(char *)(lVar7 + 0x1e8);
  *param_1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  param_1[1] = puVar6;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar2 & 0xfffff000 |
       uVar2 & 0x7f8 | uVar1 | (uint)((cVar3 != '\0' || cVar4 != '\0') || cVar5 != '\0') << 0xb;
  return;
}


// ===== 008397a0  FUN_008397a0 =====

void FUN_008397a0(undefined8 *param_1,HostPlatformViewProps *param_2,function *param_3,long *param_4
                 )

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  RawProps *pRVar7;
  long local_90 [4];
  long *local_70;
  long local_58;
  
  plVar5 = local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pRVar7 = (RawProps *)*param_4;
  if (pRVar7 == (RawProps *)0x0) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSentryReplayUnmaskComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSentryReplayUnmaskPropsENS0_32RNSentryReplayUnmaskEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e3b8
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSentryReplayUnmaskComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSentryReplayUnmaskPropsENS0_32RNSentryReplayUnmaskEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e3b8
                                   ), iVar3 != 0)) {
                    /* try { // try from 008398c0 to 008398cf has its CatchHandler @ 008398fc */
      FUN_00839b98(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSentryReplayUnmaskComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSentryReplayUnmaskPropsENS0_32RNSentryReplayUnmaskEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e3b0
                   ,local_90);
      __cxa_atexit(FUN_00839b48,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSentryReplayUnmaskComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSentryReplayUnmaskPropsENS0_32RNSentryReplayUnmaskEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e3b0
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSentryReplayUnmaskComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSentryReplayUnmaskPropsENS0_32RNSentryReplayUnmaskEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e3b8
                         );
    }
    pRVar7 = *(RawProps **)
              PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSentryReplayUnmaskComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSentryReplayUnmaskPropsENS0_32RNSentryReplayUnmaskEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e3b0
    ;
  }
  puVar4 = (undefined8 *)operator_new(0x6f8);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_0098d110;
  local_70 = (long *)0x0;
                    /* try { // try from 0083981c to 00839843 has its CatchHandler @ 00839910 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)(puVar4 + 3),(PropsParserContext *)(PTR_PTR_0099e3e8 + 8),
             param_2,pRVar7,param_3);
  if (local_70 == local_90) {
    lVar6 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_00839870;
    lVar6 = 5;
    plVar5 = local_70;
  }
  (**(code **)(*plVar5 + lVar6 * 8))();
LAB_00839870:
  puVar2 = PTR_vtable_0099e3e0;
  *param_1 = (HostPlatformViewProps *)(puVar4 + 3);
  param_1[1] = puVar4;
  puVar4[3] = puVar2 + 0x20;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00839970  FUN_00839970 =====

void FUN_00839970(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  plVar3 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = *param_1;
  if (*param_3 == 0) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSentryReplayUnmaskComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSentryReplayUnmaskPropsENS0_32RNSentryReplayUnmaskEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e3b8
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSentryReplayUnmaskComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSentryReplayUnmaskPropsENS0_32RNSentryReplayUnmaskEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e3b8
                                   ), iVar2 != 0)) {
                    /* try { // try from 00839a54 to 00839a63 has its CatchHandler @ 00839a90 */
      FUN_00839b98(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSentryReplayUnmaskComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSentryReplayUnmaskPropsENS0_32RNSentryReplayUnmaskEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e3b0
                   ,local_70);
      __cxa_atexit(FUN_00839b48,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSentryReplayUnmaskComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSentryReplayUnmaskPropsENS0_32RNSentryReplayUnmaskEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e3b0
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSentryReplayUnmaskComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSentryReplayUnmaskPropsENS0_32RNSentryReplayUnmaskEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e3b8
                         );
    }
    local_50 = (long *)0x0;
                    /* try { // try from 008399e0 to 008399f3 has its CatchHandler @ 00839aa4 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*(undefined8 *)
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSentryReplayUnmaskComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSentryReplayUnmaskPropsENS0_32RNSentryReplayUnmaskEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e3b0
               ,param_2,local_70);
  }
  else {
    local_50 = (long *)0x0;
                    /* try { // try from 008399a4 to 008399bb has its CatchHandler @ 00839aa8 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*param_3,param_2,local_70);
  }
  if (local_50 == local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00839a20;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_00839a20:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00839af8  FUN_00839af8 =====

void FUN_00839af8(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00839b48  FUN_00839b48 =====

void FUN_00839b48(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00839b98  FUN_00839b98 =====

void FUN_00839b98(undefined8 *param_1)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x6f8);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_0098d0c0;
  memset(__s,0,0x6e0);
                    /* try { // try from 00839bdc to 00839bef has its CatchHandler @ 00839c58 */
  FUN_00788b10(__s,PTR_PTR_0099e3e8 + 0x10);
  *(undefined4 *)((long)puVar2 + 0x5f4) = 0;
  *(undefined1 *)(puVar2 + 0xbf) = 0;
  *(undefined1 *)(puVar2 + 0xcb) = 0;
  *(undefined1 *)(puVar2 + 0xcc) = 0;
  *(undefined1 *)(puVar2 + 0xd8) = 0;
  *(undefined1 *)(puVar2 + 0xda) = 0;
  *(undefined1 *)((long)puVar2 + 0x6d4) = 0;
  *(undefined1 *)(puVar2 + 0xdb) = 0;
  *(undefined1 *)((long)puVar2 + 0x6dc) = 0;
  *(undefined1 *)(puVar2 + 0xdc) = 0;
  *(undefined1 *)((long)puVar2 + 0x6e4) = 0;
  *(undefined1 *)(puVar2 + 0xdd) = 0;
  *(undefined1 *)((long)puVar2 + 0x6ec) = 0;
  *(undefined1 *)(puVar2 + 0xde) = 0;
  *(undefined1 *)((long)puVar2 + 0x6f4) = 0;
  puVar1 = PTR_vtable_0099e3e0;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *param_1 = __s;
  param_1[1] = puVar2;
  puVar2[3] = puVar1 + 0x20;
  return;
}


// ===== 00839c74  FUN_00839c74 =====

void FUN_00839c74(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098d0c0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00839c84  FUN_00839c84 =====

void FUN_00839c84(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098d0c0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00839cb4  FUN_00839cb4 =====

void FUN_00839cb4(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e3e8 + 8);
  return;
}


// ===== 00839cc8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00839ccc  FUN_00839ccc =====

void FUN_00839ccc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098d110;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00839cdc  FUN_00839cdc =====

void FUN_00839cdc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098d110;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00839d0c  FUN_00839d0c =====

void FUN_00839d0c(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e3e8 + 8);
  return;
}


// ===== 00839d20  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00839d24  FUN_00839d24 =====

void FUN_00839d24(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00839d74  FUN_00839d74 =====

void FUN_00839d74(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098d160;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00839d84  FUN_00839d84 =====

void FUN_00839d84(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098d160;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00839db4  FUN_00839db4 =====

void FUN_00839db4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00839dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00839dc0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00839dc4  FUN_00839dc4 =====

EventEmitter * FUN_00839dc4(EventEmitter *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long *plStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plStack_48 = (long *)param_2[1];
  local_50 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  local_60 = *param_3;
  local_58 = param_3[1];
  if (local_58 != 0) {
    FUN_00757d00(1,local_58 + 0x10);
  }
                    /* try { // try from 00839e0c to 00839e1b has its CatchHandler @ 00839ee8 */
  facebook::react::EventEmitter::EventEmitter(param_1,&local_50,&local_60);
  *(undefined ***)param_1 = &PTR_FUN_0097ff10;
                    /* try { // try from 00839e2c to 00839e33 has its CatchHandler @ 00839ed8 */
  plVar3 = (long *)operator_new(0x58);
  puVar2 = PTR_DAT_0099dc90;
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[4] = 0;
  plVar3[3] = 0;
  *(long **)(param_1 + 0x40) = plVar3 + 3;
  *(long **)(param_1 + 0x48) = plVar3;
  plVar3[6] = 0;
  plVar3[5] = 0;
  plVar3[8] = 0;
  plVar3[7] = 0;
  *(undefined8 *)((long)plVar3 + 0x4c) = 0;
  *(undefined8 *)((long)plVar3 + 0x44) = 0;
  *(undefined ***)param_1 = &PTR_FUN_0098d1b0;
  if (local_58 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar3 = plStack_48;
  if ((plStack_48 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,plStack_48 + 1), lVar4 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00839f1c  FUN_00839f1c =====

void FUN_00839f1c(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = (long)(PTR_DAT_0099dc88 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = (long)&PTR_FUN_0097ff80;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 00839fd4  FUN_00839fd4 =====

ShadowNodeFamily *
FUN_00839fd4(ShadowNodeFamily *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = *param_3;
  local_50 = (long *)param_3[1];
  if (local_50 != (long *)0x0) {
    FUN_00757d00(1,local_50 + 1);
  }
  local_68 = *param_4;
  local_60 = param_4[1];
  if (local_60 != 0) {
    FUN_00757d00(1,local_60 + 0x10);
  }
                    /* try { // try from 0083a038 to 0083a04f has its CatchHandler @ 0083a0b8 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(param_1,param_2,&local_58,&local_68,param_5);
  if (local_60 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0083a0f0  facebook::react::RNSentryReplayMaskProps::RNSentryReplayMaskProps =====

/* facebook::react::RNSentryReplayMaskProps::RNSentryReplayMaskProps(facebook::react::PropsParserContext
   const&, facebook::react::RNSentryReplayMaskProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::RNSentryReplayMaskProps::RNSentryReplayMaskProps
          (RNSentryReplayMaskProps *this,PropsParserContext *param_1,
          RNSentryReplayMaskProps *param_2,RawProps *param_3)

{
  long lVar1;
  long *plVar2;
  function *in_x4;
  long lVar3;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  plVar2 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = (long *)0x0;
                    /* try { // try from 0083a11c to 0083a12b has its CatchHandler @ 0083a184 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if (local_50 == local_70) {
    lVar3 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_0083a158;
    lVar3 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_0083a158:
  *(undefined8 *)this = *(undefined8 *)param_1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0083a1d4  facebook::react::RNSentryReplayMaskProps::RNSentryReplayMaskProps =====

/* facebook::react::RNSentryReplayMaskProps::RNSentryReplayMaskProps(facebook::react::PropsParserContext
   const&, facebook::react::RNSentryReplayMaskProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::RNSentryReplayMaskProps::RNSentryReplayMaskProps
          (RNSentryReplayMaskProps *this,PropsParserContext *param_1,
          RNSentryReplayMaskProps *param_2,RawProps *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  plVar2 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = (long *)0x0;
                    /* try { // try from 0083a208 to 0083a21f has its CatchHandler @ 0083a280 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_0099e3d0 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if (local_50 == local_70) {
    lVar3 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_0083a24c;
    lVar3 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_0083a24c:
  *(undefined **)this = PTR_vtable_0099e3c8 + 0x20;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0083a2d0  facebook::react::RNSentryReplayMaskProps::getDiffPropsImplementationTarget =====

/* facebook::react::RNSentryReplayMaskProps::getDiffPropsImplementationTarget() const */

char * facebook::react::RNSentryReplayMaskProps::getDiffPropsImplementationTarget(void)

{
  return "RNSentryReplayMask";
}


// ===== 0083a2dc  facebook::react::RNSentryReplayMaskProps::getDiffProps =====

/* facebook::react::RNSentryReplayMaskProps::getDiffProps(facebook::react::Props const*) const */

void facebook::react::RNSentryReplayMaskProps::getDiffProps(Props *param_1)

{
  Props *pPVar1;
  long lVar2;
  int iVar3;
  Props *in_x1;
  undefined4 *in_x8;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if ((DAT_009b7a28 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_009b7a28);
    if (iVar3 != 0) {
      memset(&DAT_009b7348,0,0x6e0);
                    /* try { // try from 0083a3d0 to 0083a3d3 has its CatchHandler @ 0083a408 */
      FUN_0083a434();
      __cxa_atexit(FUN_0083a4bc,&DAT_009b7348,&PTR_LOOP_008d5d30);
      __cxa_guard_release(&DAT_009b7a28);
    }
  }
  pPVar1 = (Props *)&DAT_009b7348;
  if (in_x1 != (Props *)0x0) {
    pPVar1 = in_x1;
  }
  if (pPVar1 == param_1) {
    local_38 = 0;
    local_58[0] = 5;
    local_48 = 0;
    uStack_40 = 0;
    local_30 = 0x3f800000;
    *in_x8 = 5;
    local_50 = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
    folly::dynamic::folly::dynamic::destroy(local_58);
    if (*(long *)(lVar2 + 0x28) == local_28) {
      return;
    }
  }
  else if (*(long *)(lVar2 + 0x28) == local_28) {
    ::facebook::react::HostPlatformViewProps::getDiffProps(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0083a434  FUN_0083a434 =====

void FUN_0083a434(void)

{
  FUN_00788b10(&DAT_009b7348,PTR_PTR_0099e3d0 + 0x10);
  DAT_009b7924 = 0;
  DAT_009b7928 = 0;
  DAT_009b7988 = 0;
  DAT_009b7990 = 0;
  DAT_009b79f0 = 0;
  DAT_009b7a00 = 0;
  DAT_009b7a04 = 0;
  DAT_009b7a08 = 0;
  DAT_009b7a0c = 0;
  DAT_009b7a10 = 0;
  DAT_009b7a14 = 0;
  DAT_009b7a18 = 0;
  DAT_009b7a1c = 0;
  DAT_009b7a20 = 0;
  DAT_009b7a24 = 0;
  DAT_009b79f8 = 0;
  DAT_009b79fc = 0;
  DAT_009b7348 = PTR_vtable_0099e3c8 + 0x20;
  return;
}


// ===== 0083a4bc  FUN_0083a4bc =====

void FUN_0083a4bc(undefined8 param_1)

{
  FUN_0078917c(param_1,PTR_PTR_0099e3d0 + 8);
  return;
}


// ===== 0083a4cc  facebook::react::RNSentryReplayUnmaskProps::RNSentryReplayUnmaskProps =====

/* facebook::react::RNSentryReplayUnmaskProps::RNSentryReplayUnmaskProps(facebook::react::PropsParserContext
   const&, facebook::react::RNSentryReplayUnmaskProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::RNSentryReplayUnmaskProps::RNSentryReplayUnmaskProps
          (RNSentryReplayUnmaskProps *this,PropsParserContext *param_1,
          RNSentryReplayUnmaskProps *param_2,RawProps *param_3)

{
  long lVar1;
  long *plVar2;
  function *in_x4;
  long lVar3;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  plVar2 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = (long *)0x0;
                    /* try { // try from 0083a4f8 to 0083a507 has its CatchHandler @ 0083a560 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if (local_50 == local_70) {
    lVar3 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_0083a534;
    lVar3 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_0083a534:
  *(undefined8 *)this = *(undefined8 *)param_1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0083a5b0  facebook::react::RNSentryReplayUnmaskProps::RNSentryReplayUnmaskProps =====

/* facebook::react::RNSentryReplayUnmaskProps::RNSentryReplayUnmaskProps(facebook::react::PropsParserContext
   const&, facebook::react::RNSentryReplayUnmaskProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::RNSentryReplayUnmaskProps::RNSentryReplayUnmaskProps
          (RNSentryReplayUnmaskProps *this,PropsParserContext *param_1,
          RNSentryReplayUnmaskProps *param_2,RawProps *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  plVar2 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = (long *)0x0;
                    /* try { // try from 0083a5e4 to 0083a5fb has its CatchHandler @ 0083a65c */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_0099e3e8 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if (local_50 == local_70) {
    lVar3 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_0083a628;
    lVar3 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_0083a628:
  *(undefined **)this = PTR_vtable_0099e3e0 + 0x20;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0083a6ac  facebook::react::RNSentryReplayUnmaskProps::getDiffPropsImplementationTarget =====

/* facebook::react::RNSentryReplayUnmaskProps::getDiffPropsImplementationTarget() const */

char * facebook::react::RNSentryReplayUnmaskProps::getDiffPropsImplementationTarget(void)

{
  return "RNSentryReplayUnmask";
}


// ===== 0083a6b8  facebook::react::RNSentryReplayUnmaskProps::getDiffProps =====

/* facebook::react::RNSentryReplayUnmaskProps::getDiffProps(facebook::react::Props const*) const */

void facebook::react::RNSentryReplayUnmaskProps::getDiffProps(Props *param_1)

{
  Props *pPVar1;
  long lVar2;
  int iVar3;
  Props *in_x1;
  undefined4 *in_x8;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if ((DAT_009b8110 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_009b8110);
    if (iVar3 != 0) {
      memset(&DAT_009b7a30,0,0x6e0);
                    /* try { // try from 0083a7ac to 0083a7af has its CatchHandler @ 0083a7e4 */
      FUN_0083a810();
      __cxa_atexit(FUN_0083a898,&DAT_009b7a30,&PTR_LOOP_008d5d30);
      __cxa_guard_release(&DAT_009b8110);
    }
  }
  pPVar1 = (Props *)&DAT_009b7a30;
  if (in_x1 != (Props *)0x0) {
    pPVar1 = in_x1;
  }
  if (pPVar1 == param_1) {
    local_38 = 0;
    local_58[0] = 5;
    local_48 = 0;
    uStack_40 = 0;
    local_30 = 0x3f800000;
    *in_x8 = 5;
    local_50 = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
    folly::dynamic::folly::dynamic::destroy(local_58);
    if (*(long *)(lVar2 + 0x28) == local_28) {
      return;
    }
  }
  else if (*(long *)(lVar2 + 0x28) == local_28) {
    ::facebook::react::HostPlatformViewProps::getDiffProps(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0083a810  FUN_0083a810 =====

void FUN_0083a810(void)

{
  FUN_00788b10(&DAT_009b7a30,PTR_PTR_0099e3e8 + 0x10);
  DAT_009b800c = 0;
  DAT_009b8010 = 0;
  DAT_009b8070 = 0;
  DAT_009b8078 = 0;
  DAT_009b80d8 = 0;
  DAT_009b80e8 = 0;
  DAT_009b80ec = 0;
  DAT_009b80f0 = 0;
  DAT_009b80f4 = 0;
  DAT_009b80f8 = 0;
  DAT_009b80fc = 0;
  DAT_009b8100 = 0;
  DAT_009b8104 = 0;
  DAT_009b8108 = 0;
  DAT_009b810c = 0;
  DAT_009b80e0 = 0;
  DAT_009b80e4 = 0;
  DAT_009b7a30 = PTR_vtable_0099e3e0 + 0x20;
  return;
}


// ===== 0083a898  FUN_0083a898 =====

void FUN_0083a898(undefined8 param_1)

{
  FUN_0078917c(param_1,PTR_PTR_0099e3e8 + 8);
  return;
}


// ===== 0083a8a8  FUN_0083a8a8 =====

void FUN_0083a8a8(void *param_1)

{
  FUN_0078917c(param_1,PTR_PTR_0099e3d0 + 8);
  operator_delete(param_1);
  return;
}


// ===== 0083a8d8  FUN_0083a8d8 =====

void FUN_0083a8d8(void *param_1)

{
  FUN_0078917c(param_1,PTR_PTR_0099e3e8 + 8);
  operator_delete(param_1);
  return;
}


// ===== 0083a908  facebook::react::lottiereactnative_ModuleProvider =====

/* WARNING: Unknown calling convention: __rustcall */
/* facebook::react::lottiereactnative_ModuleProvider */

void __rustcall facebook::react::lottiereactnative_ModuleProvider(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0083a910  facebook::react::lottiereactnative_registerComponentDescriptorsFromCodegen =====

/* WARNING: Removing unreachable block (ram,0x0083a95c) */
/* WARNING: Removing unreachable block (ram,0x0083a96c) */
/* WARNING: Unknown calling convention: __rustcall */
/* facebook::react::lottiereactnative_registerComponentDescriptorsFromCodegen */

void __rustcall
facebook::react::lottiereactnative_registerComponentDescriptorsFromCodegen(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0083a94c to 0083a953 has its CatchHandler @ 0083a9a4 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0083a9cc  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_32LottieAnimationViewComponentNameEEEENS0_24LottieAnimationViewPropsENS0_31LottieAnimationViewEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_32LottieAnimationViewComponentNameEEEENS0_24LottieAnimationViewPropsENS0_31LottieAnimationViewEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_0083aa20(&local_30);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0083aa20  FUN_0083aa20 =====

void FUN_0083aa20(undefined8 *param_1,ComponentDescriptorParameters *param_2)

{
  long lVar1;
  ComponentDescriptor *this;
  void *local_90;
  void *pvStack_88;
  undefined8 local_80;
  void *pvStack_78;
  void *local_70;
  undefined8 uStack_68;
  void *local_60;
  void *pvStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ComponentDescriptor *)operator_new(0x88);
  pvStack_78 = (void *)0x0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = (void *)0x0;
  pvStack_58 = (void *)0x0;
  local_60 = (void *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  pvStack_88 = (void *)0x0;
  local_90 = (void *)0x0;
                    /* try { // try from 0083aa64 to 0083aa6f has its CatchHandler @ 0083aadc */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_90);
  *(undefined ***)this = &PTR_FUN_0098d4e8;
  FUN_0083ab0c(this + 0x38);
  *param_1 = this;
  if (local_60 != (void *)0x0) {
    pvStack_58 = local_60;
    operator_delete(local_60);
  }
  if (pvStack_78 != (void *)0x0) {
    local_70 = pvStack_78;
    operator_delete(pvStack_78);
  }
  if (local_90 != (void *)0x0) {
    pvStack_88 = local_90;
    operator_delete(local_90);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0083ab0c  FUN_0083ab0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0083ab0c(undefined8 param_1)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  undefined4 local_11c0 [2];
  undefined8 *local_11b8;
  undefined *local_11b0;
  undefined8 uStack_11a8;
  undefined8 local_11a0;
  undefined8 uStack_1198;
  undefined4 local_1190 [2];
  undefined8 local_1188;
  undefined8 uStack_1180;
  undefined8 local_1178;
  undefined8 uStack_1170;
  undefined4 local_1168;
  undefined4 local_1160;
  undefined1 local_115c;
  undefined8 local_115b;
  undefined8 local_1153;
  undefined8 uStack_114b;
  undefined8 local_1143;
  undefined8 uStack_113b;
  undefined8 local_1133;
  undefined8 uStack_112b;
  undefined8 local_1123;
  undefined6 uStack_111b;
  undefined2 uStack_1115;
  undefined6 uStack_1113;
  undefined8 uStack_110d;
  undefined4 local_1105;
  undefined8 local_1101;
  undefined1 local_10f9;
  undefined1 uStack_10f8;
  undefined7 uStack_10f7;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  undefined8 uStack_10e0;
  undefined8 local_10d8;
  undefined8 uStack_10d0;
  undefined8 local_10c8;
  undefined8 uStack_10c0;
  undefined8 local_10b8;
  undefined8 uStack_10b0;
  undefined8 local_10a8;
  undefined8 uStack_10a0;
  undefined8 uStack_1098;
  undefined8 local_1090;
  undefined8 local_1088;
  undefined8 uStack_1080;
  undefined8 local_1078;
  undefined4 uStack_1070;
  undefined4 uStack_106c;
  undefined4 uStack_1068;
  undefined4 uStack_1064;
  undefined4 uStack_1060;
  undefined4 uStack_105c;
  undefined8 local_1058;
  undefined8 uStack_1050;
  undefined4 local_1048;
  undefined1 local_1044;
  undefined4 local_1040;
  undefined1 local_103c;
  undefined4 local_1038;
  undefined1 local_1034;
  undefined4 local_1030;
  undefined1 local_102c;
  undefined4 local_1028;
  undefined1 local_1024;
  undefined4 local_1020;
  undefined1 local_101c;
  undefined4 local_1018;
  undefined1 local_1014;
  undefined4 local_1010;
  undefined1 local_100c;
  undefined4 local_1008;
  undefined1 local_1004;
  undefined4 local_1000;
  undefined1 local_ffc;
  undefined4 local_ff8;
  undefined1 local_ff4;
  undefined4 local_ff0;
  undefined1 local_fec;
  undefined4 local_fe8;
  undefined1 local_fe4;
  undefined4 local_fe0;
  undefined1 local_fdc;
  undefined4 local_fd8;
  undefined1 local_fd4;
  undefined4 local_fd0;
  undefined1 local_fcc;
  undefined1 local_fc8;
  undefined1 local_fc4;
  undefined1 local_fb8;
  undefined8 local_fb0;
  undefined8 uStack_fa8;
  undefined8 uStack_fa0;
  undefined8 uStack_f98;
  undefined8 local_f90;
  undefined8 uStack_f88;
  undefined8 uStack_f80;
  undefined1 uStack_f78;
  undefined7 local_f77;
  undefined1 uStack_f70;
  undefined8 uStack_f6f;
  undefined8 local_f64;
  undefined8 uStack_f5c;
  undefined8 uStack_f54;
  undefined8 uStack_f4c;
  undefined8 local_f44;
  undefined8 uStack_f3c;
  undefined8 uStack_f34;
  undefined8 uStack_f2c;
  undefined8 local_f24;
  undefined8 uStack_f1c;
  undefined8 uStack_f14;
  undefined5 uStack_f0c;
  undefined3 local_f07;
  undefined5 uStack_f04;
  undefined1 local_efc;
  undefined1 local_ef8;
  undefined1 local_ef4;
  undefined1 local_ef0;
  undefined1 local_eec;
  undefined1 local_ee8;
  undefined1 local_ed0;
  undefined8 local_ec8;
  undefined8 uStack_ec0;
  undefined8 local_eb8;
  undefined4 local_eb0;
  undefined1 local_eac;
  undefined4 local_eab;
  undefined1 local_ea7;
  undefined1 local_ea6;
  undefined8 local_ea0;
  undefined8 uStack_e98;
  undefined8 uStack_e90;
  undefined8 uStack_e88;
  undefined8 local_e80;
  undefined7 uStack_e78;
  undefined4 uStack_e71;
  undefined8 local_e6c;
  undefined1 local_e64;
  undefined1 local_e5c;
  undefined1 local_e58;
  undefined1 local_e50;
  undefined1 local_e4c;
  undefined1 local_e44;
  undefined1 local_e40;
  undefined1 local_e38;
  undefined1 local_e34;
  undefined1 local_e2c;
  undefined1 local_e28;
  undefined1 local_e20;
  undefined1 local_e1c;
  undefined1 local_e14;
  undefined1 local_e10;
  undefined1 local_e08;
  undefined1 local_e04;
  undefined1 local_dfc;
  undefined1 local_df8;
  undefined1 local_df0;
  undefined1 local_dec;
  undefined1 local_de4;
  undefined1 local_de0;
  undefined1 local_dd8;
  undefined1 local_dd4;
  undefined1 local_dcc;
  undefined1 local_dc8;
  undefined1 local_dc4;
  undefined1 local_dc0;
  undefined1 local_dbc;
  undefined1 local_db8;
  undefined1 local_db4;
  undefined1 local_db0;
  undefined1 local_dac;
  undefined1 local_da8;
  undefined1 local_da4;
  undefined1 local_da0;
  undefined1 local_d9c;
  undefined1 local_d98;
  undefined1 local_d94;
  undefined1 local_d90;
  undefined1 local_d8c;
  undefined1 local_d88;
  undefined1 local_d84;
  undefined1 local_d80;
  undefined1 local_d7c;
  undefined1 local_d78;
  undefined1 local_d74;
  undefined1 local_d70;
  undefined1 local_d6c;
  undefined8 local_d68;
  undefined8 uStack_d60;
  undefined8 local_d58;
  undefined8 uStack_d50;
  undefined8 uStack_d48;
  undefined8 uStack_d40;
  undefined2 local_d38;
  undefined8 local_d34;
  undefined1 local_d2c;
  undefined8 local_d28;
  undefined8 local_d20;
  undefined8 uStack_d18;
  undefined1 local_d10;
  undefined8 local_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 local_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined8 local_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 local_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 local_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 local_c68;
  undefined8 uStack_c60;
  undefined8 local_c58;
  undefined8 uStack_c50;
  undefined8 local_c48;
  undefined8 uStack_c40;
  undefined8 local_c38;
  undefined8 uStack_c30;
  undefined8 local_c28;
  undefined8 uStack_c20;
  undefined8 local_c18;
  undefined6 uStack_c10;
  undefined2 uStack_c0a;
  undefined6 uStack_c08;
  undefined1 local_c00;
  undefined1 local_bfc;
  undefined1 local_bf8;
  undefined8 local_bf4;
  undefined8 uStack_bec;
  undefined1 local_be4;
  undefined8 local_be0;
  undefined2 local_bd8;
  undefined1 local_bd6;
  undefined4 local_bd4;
  undefined1 local_bd0;
  undefined1 local_b70;
  undefined1 local_b68;
  undefined1 local_b08;
  undefined4 local_b00;
  undefined2 local_afc;
  undefined1 local_af8;
  undefined1 local_af4;
  undefined1 local_af0;
  undefined1 local_aec;
  undefined1 local_ae8;
  undefined1 local_ae4;
  undefined1 local_ae0;
  undefined1 local_adc;
  undefined1 local_ad8;
  undefined1 local_ad4;
  undefined8 local_ad0;
  undefined8 uStack_ac8;
  undefined8 local_ac0;
  undefined8 uStack_ab8;
  undefined8 local_ab0;
  undefined8 uStack_aa8;
  undefined8 local_aa0;
  undefined8 uStack_a98;
  undefined8 local_a90;
  undefined8 uStack_a88;
  undefined8 local_a80;
  undefined8 uStack_a78;
  undefined8 local_a70;
  undefined8 uStack_a68;
  undefined8 local_a60;
  undefined8 uStack_a58;
  undefined8 local_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined4 uStack_a38;
  undefined4 local_a34;
  undefined4 uStack_a30;
  undefined8 uStack_a2c;
  undefined6 uStack_a20;
  undefined2 local_a1a;
  undefined6 uStack_a18;
  undefined8 local_a10;
  undefined8 uStack_a08;
  undefined8 local_a00;
  undefined1 local_9f8;
  undefined8 local_9f0;
  undefined8 uStack_9e8;
  undefined8 local_9e0;
  undefined8 uStack_9d8;
  undefined8 local_9d0;
  undefined8 uStack_9c8;
  LottieAnimationViewProps aLStack_9c0 [2032];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
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
  void *local_140;
  undefined8 uStack_138;
  void *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100 [4];
  undefined4 local_f0 [2];
  undefined8 local_e8;
  undefined4 local_c0;
  void *local_b8;
  void *pvStack_b0;
  undefined8 uStack_a8;
  void *local_a0;
  void *local_98;
  undefined8 uStack_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100[0] = 0;
  local_f0[0] = 0;
  local_e8 = 0;
  local_c0 = 0;
  pvStack_b0 = (void *)0x0;
  local_b8 = (void *)0x0;
  local_a0 = (void *)0x0;
  uStack_a8 = 0;
  uStack_90 = 0;
  local_98 = (void *)0x0;
  local_120 = 0;
  uStack_128 = 0;
  local_130 = (void *)0x0;
  uStack_138 = 0;
  local_140 = (void *)0x0;
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
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
                    /* try { // try from 0083ab98 to 0083aba3 has its CatchHandler @ 0083b16c */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1d0);
  local_120 = CONCAT44(local_120._4_4_,0x3f800000);
  local_11c0[0] = 0xffffffff;
  uStack_128 = 0;
  local_130 = (void *)0x0;
  uStack_138 = 0;
  local_140 = (void *)0x0;
  local_11b8 = &local_1d0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_118,param_1);
  memset(local_1190,0,2000);
  local_88[0] = 5;
  local_70 = 0;
  local_11b0 = PTR_construction_vtable_0099e430 + 0x20;
  local_1190[0] = 5;
  uStack_1198 = 0;
  local_11a0 = 0;
  uStack_11a8 = 0;
  local_68 = 0;
  uStack_60 = 0x3f800000;
  uStack_78 = 0;
  local_80 = 0;
  uStack_1180 = 0;
  local_1188 = 0;
  uStack_1170 = 0;
  local_1178 = 0;
  local_1168 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_88);
  local_115c = 0;
  local_1101 = 0;
  uStack_c20 = _UNK_0048698c;
  local_c28 = _DAT_00486984;
  local_115b = _s__00375408;
  uStack_d18 = _UNK_00371598;
  local_d20 = _DAT_00371590;
  uStack_c30 = _UNK_0048697c;
  local_c38 = _DAT_00486974;
  local_1044 = 0;
  uStack_c40 = _UNK_0048696c;
  local_c48 = _DAT_00486964;
  uStack_c50 = _UNK_0048695c;
  local_c58 = _DAT_00486954;
  uStack_c08 = 0;
  local_103c = 0;
  uStack_1070 = 0;
  local_1078 = 0;
  uStack_105c = 0;
  uStack_1080 = 0;
  local_1088 = 0;
  uStack_c10 = 0;
  uStack_c0a = 0;
  local_c18 = 0;
  local_1160 = 0x10410710;
  local_1105 = 0x40004;
  uStack_1064 = 0;
  uStack_1060 = 0;
  uStack_106c = 0;
  uStack_1068 = 0;
  uStack_1050 = 0;
  local_1058 = 0;
  local_1048 = 0x7fc00000;
  local_1040 = 0x7fc00000;
  local_1038 = 0x7fc00000;
  local_1030 = 0x7fc00000;
  local_1028 = 0x7fc00000;
  local_1020 = 0x7fc00000;
  local_1018 = 0x7fc00000;
  local_1010 = 0x7fc00000;
  local_1008 = 0x7fc00000;
  local_1000 = 0x7fc00000;
  local_ff8 = 0x7fc00000;
  local_ff0 = 0x7fc00000;
  local_fe8 = 0x7fc00000;
  local_fe0 = 0x7fc00000;
  local_fd8 = 0x7fc00000;
  local_fd0 = 0x7fc00000;
  uStack_f6f = 0;
  uStack_f70 = 0;
  uStack_f5c = 0;
  local_f64 = 0;
  uStack_f4c = 0;
  uStack_f54 = 0;
  uStack_f3c = 0;
  local_f44 = 0;
  uStack_f2c = 0;
  uStack_f34 = 0;
  uStack_f1c = 0;
  local_f24 = 0;
  uStack_f0c = 0;
  uStack_f14 = 0;
  local_f07 = 0;
  uStack_f04 = 0;
  local_eac = 1;
  local_eab = 0;
  local_ea6 = 0x23;
  local_e6c = 0x3f800000;
  uStack_d50 = 0;
  local_d58 = 0;
  uStack_d40 = 0;
  uStack_d48 = 0;
  uStack_d60 = 0;
  local_d68 = 0;
  local_d34 = 0;
  uStack_d00 = 0;
  local_d08 = 0;
  uStack_cf0 = 0;
  uStack_cf8 = 0;
  uStack_ce0 = 0;
  local_ce8 = 0;
  uStack_cd0 = 0;
  uStack_cd8 = 0;
  uStack_cc0 = 0;
  local_cc8 = 0;
  uStack_cb0 = 0;
  uStack_cb8 = 0;
  uStack_ca0 = 0;
  local_ca8 = 0;
  uStack_c90 = 0;
  uStack_c98 = 0;
  uStack_c80 = 0;
  local_c88 = 0;
  uStack_c70 = 0;
  uStack_c78 = 0;
  uStack_c60 = 0;
  local_c68 = 0;
  uStack_10f7 = 0;
  uStack_114b = 0;
  local_1153 = 0;
  uStack_113b = 0;
  local_1143 = 0;
  uStack_112b = 0;
  local_1133 = 0;
  uStack_111b = 0;
  local_1123 = 0;
  uStack_110d = 0;
  uStack_1115 = 0;
  uStack_1113 = 0;
  local_10f9 = 0;
  uStack_10f8 = 0;
  uStack_10e8 = 0;
  uStack_10f0 = 0;
  local_10d8 = 0;
  uStack_10e0 = 0;
  local_10c8 = 0;
  uStack_10d0 = 0;
  local_10b8 = 0;
  uStack_10c0 = 0;
  local_10a8 = 0;
  uStack_10b0 = 0;
  uStack_1098 = 0;
  uStack_10a0 = 0;
  local_1090 = 0;
  local_1034 = 0;
  local_102c = 0;
  local_1024 = 0;
  local_101c = 0;
  local_1014 = 0;
  local_100c = 0;
  local_1004 = 0;
  local_ffc = 0;
  local_ff4 = 0;
  local_fec = 0;
  local_fe4 = 0;
  local_fdc = 0;
  local_fd4 = 0;
  local_fcc = 0;
  local_fc8 = 0;
  local_fc4 = 0;
  local_fb8 = 0;
  local_efc = 0;
  local_ef8 = 0;
  local_ef4 = 0;
  local_ef0 = 0;
  local_eec = 0;
  local_ee8 = 0;
  local_ed0 = 0;
  uStack_fa8 = 0;
  local_fb0 = 0;
  uStack_f98 = 0;
  uStack_fa0 = 0;
  uStack_f88 = 0;
  local_f90 = 0;
  uStack_f78 = 0;
  local_f77 = 0;
  uStack_f80 = 0;
  uStack_ec0 = 0;
  local_ec8 = 0;
  local_eb8 = 0;
  local_eb0 = 0;
  local_ea7 = 0;
  uStack_e98 = 0;
  local_ea0 = 0;
  uStack_e88 = 0;
  uStack_e90 = 0;
  uStack_e78 = 0;
  uStack_e71 = 0;
  local_e80 = 0;
  local_e64 = 0;
  local_e5c = 0;
  local_e58 = 0;
  local_e50 = 0;
  local_e4c = 0;
  local_e44 = 0;
  local_e40 = 0;
  local_e38 = 0;
  local_e34 = 0;
  local_e2c = 0;
  local_e28 = 0;
  local_e20 = 0;
  local_e1c = 0;
  local_e14 = 0;
  local_e10 = 0;
  local_e08 = 0;
  local_e04 = 0;
  local_dfc = 0;
  local_df8 = 0;
  local_df0 = 0;
  local_dec = 0;
  local_de4 = 0;
  local_de0 = 0;
  local_dd8 = 0;
  local_dd4 = 0;
  local_dcc = 0;
  local_dc8 = 0;
  local_dc4 = 0;
  local_dc0 = 0;
  local_dbc = 0;
  local_db8 = 0;
  local_db4 = 0;
  local_db0 = 0;
  local_dac = 0;
  local_da8 = 0;
  local_da4 = 0;
  local_da0 = 0;
  local_d9c = 0;
  local_d98 = 0;
  local_d94 = 0;
  local_d90 = 0;
  local_d8c = 0;
  local_d88 = 0;
  local_d84 = 0;
  local_d80 = 0;
  local_d7c = 0;
  local_d78 = 0;
  local_d74 = 0;
  local_d70 = 0;
  local_d6c = 0;
  local_d28 = 0;
  local_d38 = 0;
  local_d2c = 0;
  local_d10 = 0;
  local_c00 = 0;
  local_bfc = 0;
  local_bf8 = 0;
  local_be0 = 0;
  uStack_bec = 0;
  local_bf4 = 0;
  local_be4 = 0;
  local_bd8 = 0x101;
  local_bd6 = 0;
  local_bd4 = 0;
  local_bd0 = 0;
  local_b70 = 0;
  local_b68 = 0;
  local_b08 = 0;
  local_af8 = 0;
  local_af4 = 0;
  local_af0 = 0;
  local_aec = 0;
  local_ae8 = 0;
  local_ae4 = 0;
  local_ae0 = 0;
  local_adc = 0;
  local_ad8 = 0;
  local_ad4 = 0;
  local_afc = 0;
  local_b00 = 0;
  local_11b0 = PTR_vtable_0099e420 + 0x20;
  uStack_ac8 = 0;
  local_ad0 = 0;
  uStack_a2c = 0;
  uStack_a30 = 0;
  uStack_ab8 = 0;
  local_ac0 = 0;
  uStack_aa8 = 0;
  local_ab0 = 0;
  uStack_a98 = 0;
  local_aa0 = 0;
  uStack_a88 = 0;
  local_a90 = 0;
  uStack_a78 = 0;
  local_a80 = 0;
  uStack_a68 = 0;
  local_a70 = 0;
  uStack_a58 = 0;
  local_a60 = 0;
  uStack_a48 = 0;
  local_a50 = 0;
  uStack_a38 = 0;
  local_a34 = 0;
  uStack_a40 = 0;
  uStack_a18 = 0;
  uStack_a20 = 0;
  local_a1a = 0;
  local_a00 = 0;
  uStack_a08 = 0;
  local_a10 = 0;
  local_9f8 = 0;
  uStack_9c8 = 0;
  local_9d0 = 0;
  uStack_9d8 = 0;
  local_9e0 = 0;
  uStack_9e8 = 0;
  local_9f0 = 0;
                    /* try { // try from 0083afdc to 0083afef has its CatchHandler @ 0083b16c */
  facebook::react::LottieAnimationViewProps::LottieAnimationViewProps
            (aLStack_9c0,(PropsParserContext *)local_11c0,(LottieAnimationViewProps *)&local_11b0,
             (RawProps *)&local_118);
  puVar5 = PTR_PTR_0099e428;
  FUN_0083b95c(aLStack_9c0,PTR_PTR_0099e428);
  FUN_0083b95c(&local_11b0,puVar5);
  facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(param_1);
  pvVar3 = local_140;
  puVar4 = (undefined8 *)local_130;
  while (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar4[6];
    pvVar8 = (void *)*puVar4;
    local_140 = pvVar3;
    if ((plVar7 == (long *)0x0) || (lVar6 = FUN_00757990(0xffffffffffffffff,plVar7 + 1), lVar6 != 0)
       ) {
      bVar1 = *(byte *)(puVar4 + 2);
    }
    else {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
      bVar1 = *(byte *)(puVar4 + 2);
    }
    if ((bVar1 & 1) != 0) {
      operator_delete((void *)puVar4[4]);
    }
    operator_delete(puVar4);
    pvVar3 = local_140;
    puVar4 = (undefined8 *)pvVar8;
  }
  local_140 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_178);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_1a8);
  std::__ndk1::mutex::~mutex((mutex *)&local_1d0);
  pvVar8 = local_a0;
  pvVar3 = local_98;
  if (local_a0 != (void *)0x0) {
    while (pvVar3 != pvVar8) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 0083b0fc to 0083b107 has its CatchHandler @ 0083b170 */
        (*(code *)(&PTR_FUN_0098d568)[*(uint *)((long)pvVar3 + -8)])
                  (&local_11b0,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_98 = pvVar8;
    operator_delete(local_a0);
  }
  if (local_b8 != (void *)0x0) {
    pvStack_b0 = local_b8;
    operator_delete(local_b8);
  }
  folly::dynamic::folly::dynamic::destroy(local_f0);
  facebook::jsi::Value::~Value((Value *)local_100);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0083b174  FUN_0083b174 =====

void FUN_0083b174(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 0083b198  FUN_0083b198 =====

undefined * FUN_0083b198(void)

{
  return PTR_LottieAnimationViewComponentName_0099e418;
}


// ===== 0083b1a4  FUN_0083b1a4 =====

undefined * FUN_0083b1a4(void)

{
  return PTR_LottieAnimationViewComponentName_0099e418;
}


// ===== 0083b1b0  FUN_0083b1b0 =====

undefined8 FUN_0083b1b0(void)

{
  return 0x61;
}


// ===== 0083b1b8  FUN_0083b1b8 =====

void FUN_0083b1b8(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 uStack_49;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_64 = (**(code **)(*param_2 + 0x20))();
  FUN_0083bb7c(&local_60,&uStack_49,param_3,param_4,&local_64);
                    /* try { // try from 0083b220 to 0083b227 has its CatchHandler @ 0083b258 */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0083b280  FUN_0083b280 =====

void FUN_0083b280(undefined8 *param_1,long *param_2,shared_ptr *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *local_70;
  long *local_68;
  long *local_60;
  long *plStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_0083be30(&local_60,&local_70);
                    /* try { // try from 0083b2cc to 0083b2d7 has its CatchHandler @ 0083b384 */
  (**(code **)(*local_60 + 0x10))(local_60,param_3,param_4);
  local_70 = local_60;
  local_68 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    FUN_00757d00(1,plStack_58 + 1);
  }
                    /* try { // try from 0083b2f0 to 0083b2ff has its CatchHandler @ 0083b374 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_70);
  plVar2 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0083b33c to 0083b343 has its CatchHandler @ 0083b384 */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = plStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0083b3ac  FUN_0083b3ac =====

void FUN_0083b3ac(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0083b3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 0083b3c0  FUN_0083b3c0 =====

void FUN_0083b3c0(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
                 RawProps *param_5)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  int iVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  long *local_100;
  long *local_f8;
  long *local_f0;
  long *plStack_e8;
  undefined1 uStack_d1;
  dynamic adStack_d0 [48];
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar8 = facebook::react::RawProps::isEmpty(), (uVar8 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32LottieAnimationViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24LottieAnimationViewPropsENS0_31LottieAnimationViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e410
         & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32LottieAnimationViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24LottieAnimationViewPropsENS0_31LottieAnimationViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e410
                                   ), iVar7 != 0)) {
                    /* try { // try from 0083b68c to 0083b69b has its CatchHandler @ 0083b6c8 */
      FUN_0083c2a8(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32LottieAnimationViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24LottieAnimationViewPropsENS0_31LottieAnimationViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e408
                   ,adStack_d0);
      __cxa_atexit(FUN_0083c258,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32LottieAnimationViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24LottieAnimationViewPropsENS0_31LottieAnimationViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e408
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32LottieAnimationViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24LottieAnimationViewPropsENS0_31LottieAnimationViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e410
                         );
    }
    lVar10 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32LottieAnimationViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24LottieAnimationViewPropsENS0_31LottieAnimationViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e408
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32LottieAnimationViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24LottieAnimationViewPropsENS0_31LottieAnimationViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e408
    ;
    param_1[1] = lVar10;
    if (lVar10 != 0) {
      FUN_00757d00(1,lVar10 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    FUN_0083bf34(&local_f0,param_3,param_5,param_4);
                    /* try { // try from 0083b468 to 0083b47b has its CatchHandler @ 0083b6fc */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if (((uVar8 & 1) == 0) ||
       ((uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar8 & 1) == 0 ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enablePropsUpdateReconciliationAndroid(), (uVar8 & 1) == 0)))) {
LAB_0083b4a4:
      local_100 = local_f0;
      local_f8 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        FUN_00757d00(1,plStack_e8 + 1);
      }
                    /* try { // try from 0083b4bc to 0083b4cb has its CatchHandler @ 0083b6ec */
      FUN_0083c080(&local_100,param_5,param_4);
      plVar4 = local_f8;
      if ((local_f8 != (long *)0x0) &&
         (lVar10 = FUN_00757990(0xffffffffffffffff,local_f8 + 1), lVar10 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 0083b48c to 0083b493 has its CatchHandler @ 0083b6dc */
      pcVar9 = (char *)(**(code **)(*local_f0 + 0x10))();
      iVar7 = strcmp(PTR_LottieAnimationViewComponentName_0099e418,pcVar9);
      if (iVar7 != 0) goto LAB_0083b4a4;
      bVar3 = false;
    }
                    /* try { // try from 0083b500 to 0083b503 has its CatchHandler @ 0083b6fc */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar8 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 0083b510 to 0083b52b has its CatchHandler @ 0083b6e8 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(local_f0 + 4));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_f0;
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0083b66c to 0083b67b has its CatchHandler @ 0083b6e0 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_0083b748;
      }
      for (; local_f0 = plVar4, plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0083b64c to 0083b65b has its CatchHandler @ 0083b708 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_0083b748;
        }
        uVar1 = 0x811c9dc5;
        uVar8 = (ulong)(*(byte *)(plVar5 + 3) >> 1);
        pcVar6 = (char *)((long)plVar5 + 0x19);
        pcVar9 = (char *)((long)plVar5 + 0x19);
        if ((*(byte *)(plVar5 + 3) & 1) != 0) {
          uVar8 = plVar5[4];
          pcVar6 = (char *)plVar5[5];
          pcVar9 = (char *)plVar5[5];
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          uVar1 = (uVar1 ^ (int)*pcVar6) * 0x1000193;
          pcVar6 = pcVar6 + 1;
        }
                    /* try { // try from 0083b5ac to 0083b5b7 has its CatchHandler @ 0083b710 */
        folly::dynamic::dynamic(adStack_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 0083b5bc to 0083b5d3 has its CatchHandler @ 0083b714 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (plVar4,param_3,uVar1,pcVar9,adStack_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 0083b5e4 to 0083b5ef has its CatchHandler @ 0083b704 */
          (*(code *)(&PTR_FUN_0098d568)[local_a0])(&uStack_d1,adStack_d0);
        }
        plVar4 = local_f0;
      }
      folly::dynamic::folly::dynamic::destroy(local_98);
    }
    param_1[1] = plStack_e8;
    *param_1 = local_f0;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_0083b748:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0083b74c  FUN_0083b74c =====

void FUN_0083b74c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0083b754  FUN_0083b754 =====

void FUN_0083b754(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0083b75c  FUN_0083b75c =====

void FUN_0083b75c(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *local_90;
  long *local_88;
  undefined1 auStack_80 [8];
  long *local_78;
  long *local_70;
  long *local_68;
  undefined1 uStack_59;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_0078a610(auStack_80,&uStack_59,param_3 + 8,param_3 + 4);
                    /* try { // try from 0083b7a4 to 0083b7ab has its CatchHandler @ 0083b930 */
  plVar4 = (long *)operator_new(0x68);
  plVar1 = plVar4 + 3;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_0098d740;
                    /* try { // try from 0083b7c4 to 0083b7d3 has its CatchHandler @ 0083b918 */
  FUN_0083c528(plVar1,auStack_80,param_2 + 8);
  local_70 = plVar1;
  local_68 = plVar4;
  if ((local_78 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_78 + 1), lVar5 == 0)) {
    (**(code **)(*local_78 + 0x10))(local_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0083b808 to 0083b80f has its CatchHandler @ 0083b908 */
  plVar6 = (long *)operator_new(0x1a0);
  puVar3 = PTR_DAT_0099dca0;
  plVar1 = plVar6 + 4;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)(puVar3 + 0x10);
                    /* try { // try from 0083b82c to 0083b843 has its CatchHandler @ 0083b8f0 */
  FUN_0083c738(plVar1,param_3,&local_70,param_2 + 8,param_2);
  plVar4 = local_70;
  *param_1 = (long)plVar1;
  param_1[1] = (long)plVar6;
  local_90 = plVar1;
  local_88 = plVar6;
  FUN_00757d00(1,plVar6 + 2);
                    /* try { // try from 0083b85c to 0083b867 has its CatchHandler @ 0083b8d0 */
  facebook::react::EventEmitter::facebook::react::EventEmitter::setShadowNodeFamily
            (plVar4,&local_90);
  if (local_88 != (long *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar1 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar5 == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0083b958  FUN_0083b958 =====

void FUN_0083b958(void)

{
  return;
}


// ===== 0083b95c  FUN_0083b95c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0083b95c(long param_1,long param_2)

{
  byte bVar1;
  void *pvVar2;
  byte *pbVar3;
  void *pvVar4;
  byte *pbVar5;
  void *pvVar6;
  byte *pbVar7;
  
  pvVar4 = *(void **)(param_1 + 0x7d8);
  if (pvVar4 != (void *)0x0) {
    pvVar6 = *(void **)(param_1 + 0x7e0);
    pvVar2 = pvVar4;
    if (pvVar6 != pvVar4) {
      do {
        if ((*(byte *)((long)pvVar6 + -0x18) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar6 + -8));
        }
        if ((*(byte *)((long)pvVar6 + -0x30) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar6 + -0x20));
        }
        pvVar6 = (void *)((long)pvVar6 + -0x30);
      } while (pvVar6 != pvVar4);
      pvVar2 = *(void **)(param_1 + 0x7d8);
    }
    *(void **)(param_1 + 0x7e0) = pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = *(void **)(param_1 + 0x7c0);
  if (pvVar4 != (void *)0x0) {
    pvVar6 = *(void **)(param_1 + 0x7c8);
    pvVar2 = pvVar4;
    if (pvVar6 != pvVar4) {
      do {
        if ((*(byte *)((long)pvVar6 + -0x18) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar6 + -8));
        }
        if ((*(byte *)((long)pvVar6 + -0x30) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar6 + -0x20));
        }
        pvVar6 = (void *)((long)pvVar6 + -0x30);
      } while (pvVar6 != pvVar4);
      pvVar2 = *(void **)(param_1 + 0x7c0);
    }
    *(void **)(param_1 + 0x7c8) = pvVar4;
    operator_delete(pvVar2);
  }
  pbVar5 = *(byte **)(param_1 + 0x7a0);
  if (pbVar5 != (byte *)0x0) {
    pbVar3 = *(byte **)(param_1 + 0x7a8);
    pbVar7 = pbVar5;
    if (pbVar3 != pbVar5) {
      do {
        pbVar7 = pbVar3 + -0x20;
        if ((*pbVar7 & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + -0x10));
        }
        pbVar3 = pbVar7;
      } while (pbVar7 != pbVar5);
      pbVar7 = *(byte **)(param_1 + 0x7a0);
    }
    *(byte **)(param_1 + 0x7a8) = pbVar5;
    operator_delete(pbVar7);
  }
  if ((*(byte *)(param_1 + 0x770) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x758);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x780));
    bVar1 = *(byte *)(param_1 + 0x758);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x740);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x768));
    bVar1 = *(byte *)(param_1 + 0x740);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x728);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x750));
    bVar1 = *(byte *)(param_1 + 0x728);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x710);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x738));
    bVar1 = *(byte *)(param_1 + 0x710);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x6f8);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x720));
    bVar1 = *(byte *)(param_1 + 0x6f8);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x6e0);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x708));
    bVar1 = *(byte *)(param_1 + 0x6e0);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x6f0));
  }
  FUN_0078917c(param_1,param_2 + 8);
  return;
}


// ===== 0083bb2c  FUN_0083bb2c =====

void FUN_0083bb2c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0083bb7c  FUN_0083bb7c =====

void FUN_0083bb7c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 uVar8;
  
  puVar6 = (undefined8 *)operator_new(0x400);
  uVar8 = *param_5;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_0098d588;
                    /* try { // try from 0083bbc4 to 0083bbd3 has its CatchHandler @ 0083bc6c */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4,uVar8);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_0098d5d8;
  uVar2 = *(uint *)((long)puVar6 + 0x6c);
  uVar1 = uVar2 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar2 & 0xfffffff8 | uVar1;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar8 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar8;
  cVar3 = *(char *)(lVar7 + 0x6b0);
  cVar4 = *(char *)(lVar7 + 0x6b1);
  cVar5 = *(char *)(lVar7 + 0x1e8);
  *param_1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  param_1[1] = puVar6;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar2 & 0xfffff000 |
       uVar2 & 0x7f8 | uVar1 | (uint)((cVar3 != '\0' || cVar4 != '\0') || cVar5 != '\0') << 0xb;
  return;
}


// ===== 0083bc88  FUN_0083bc88 =====

void FUN_0083bc88(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098d588;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0083bc98  FUN_0083bc98 =====

void FUN_0083bc98(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098d588;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0083bcc8  FUN_0083bcc8 =====

void FUN_0083bcc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0083bcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0083bcd4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0083bcd8  FUN_0083bcd8 =====

void FUN_0083bcd8(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_0099de98 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00757990(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x79];
    }
    param_1[0x7a] = (long)pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = (void *)param_1[0x73];
  if (pvVar4 != (void *)0x0) {
    param_1[0x74] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  FUN_007890e8(param_1 + 0x23);
  FUN_00789784(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0083bd98  FUN_0083bd98 =====

void FUN_0083bd98(long param_1)

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


// ===== 0083be00  FUN_0083be00 =====

bool FUN_0083be00(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 0083be18  FUN_0083be18 =====

bool FUN_0083be18(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 0083be30  FUN_0083be30 =====

void FUN_0083be30(undefined8 *param_1,undefined8 param_2,ShadowNode *param_3,
                 ShadowNodeFragment *param_4)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 uVar8;
  
  puVar6 = (undefined8 *)operator_new(0x400);
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_0098d588;
                    /* try { // try from 0083be70 to 0083be7f has its CatchHandler @ 0083bf18 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_0098d5d8;
  uVar2 = *(uint *)((long)puVar6 + 0x6c);
  uVar1 = uVar2 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar2 & 0xfffffff8 | uVar1;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar8 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar8;
  cVar3 = *(char *)(lVar7 + 0x6b0);
  cVar4 = *(char *)(lVar7 + 0x6b1);
  cVar5 = *(char *)(lVar7 + 0x1e8);
  *param_1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  param_1[1] = puVar6;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar2 & 0xfffff000 |
       uVar2 & 0x7f8 | uVar1 | (uint)((cVar3 != '\0' || cVar4 != '\0') || cVar5 != '\0') << 0xb;
  return;
}


// ===== 0083bf34  FUN_0083bf34 =====

void FUN_0083bf34(undefined8 *param_1,PropsParserContext *param_2,RawProps *param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  LottieAnimationViewProps *pLVar4;
  undefined1 uStack_59;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pLVar4 = (LottieAnimationViewProps *)*param_4;
  if (pLVar4 == (LottieAnimationViewProps *)0x0) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32LottieAnimationViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24LottieAnimationViewPropsENS0_31LottieAnimationViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e410
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32LottieAnimationViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24LottieAnimationViewPropsENS0_31LottieAnimationViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e410
                                   ), iVar2 != 0)) {
                    /* try { // try from 0083c000 to 0083c00f has its CatchHandler @ 0083c03c */
      FUN_0083c2a8(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32LottieAnimationViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24LottieAnimationViewPropsENS0_31LottieAnimationViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e408
                   ,&uStack_59);
      __cxa_atexit(FUN_0083c258,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32LottieAnimationViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24LottieAnimationViewPropsENS0_31LottieAnimationViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e408
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32LottieAnimationViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24LottieAnimationViewPropsENS0_31LottieAnimationViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e410
                         );
    }
    pLVar4 = *(LottieAnimationViewProps **)
              PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32LottieAnimationViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24LottieAnimationViewPropsENS0_31LottieAnimationViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e408
    ;
  }
  puVar3 = (undefined8 *)operator_new(0x808);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_0098d6f0;
                    /* try { // try from 0083bfac to 0083bfbf has its CatchHandler @ 0083c050 */
  facebook::react::LottieAnimationViewProps::LottieAnimationViewProps
            ((LottieAnimationViewProps *)(puVar3 + 3),param_2,pLVar4,param_3);
  *param_1 = (LottieAnimationViewProps *)(puVar3 + 3);
  param_1[1] = puVar3;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0083c080  FUN_0083c080 =====

void FUN_0083c080(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  plVar3 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = *param_1;
  if (*param_3 == 0) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32LottieAnimationViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24LottieAnimationViewPropsENS0_31LottieAnimationViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e410
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32LottieAnimationViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24LottieAnimationViewPropsENS0_31LottieAnimationViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e410
                                   ), iVar2 != 0)) {
                    /* try { // try from 0083c164 to 0083c173 has its CatchHandler @ 0083c1a0 */
      FUN_0083c2a8(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32LottieAnimationViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24LottieAnimationViewPropsENS0_31LottieAnimationViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e408
                   ,local_70);
      __cxa_atexit(FUN_0083c258,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32LottieAnimationViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24LottieAnimationViewPropsENS0_31LottieAnimationViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e408
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32LottieAnimationViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24LottieAnimationViewPropsENS0_31LottieAnimationViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e410
                         );
    }
    local_50 = (long *)0x0;
                    /* try { // try from 0083c0f0 to 0083c103 has its CatchHandler @ 0083c1b4 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*(undefined8 *)
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32LottieAnimationViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24LottieAnimationViewPropsENS0_31LottieAnimationViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e408
               ,param_2,local_70);
  }
  else {
    local_50 = (long *)0x0;
                    /* try { // try from 0083c0b4 to 0083c0cb has its CatchHandler @ 0083c1b8 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*param_3,param_2,local_70);
  }
  if (local_50 == local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_0083c130;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_0083c130:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0083c208  FUN_0083c208 =====

void FUN_0083c208(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0083c258  FUN_0083c258 =====

void FUN_0083c258(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0083c2a8  FUN_0083c2a8 =====

void FUN_0083c2a8(undefined8 *param_1)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x808);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_0098d6a0;
  memset(__s,0,0x7f0);
                    /* try { // try from 0083c2ec to 0083c2ff has its CatchHandler @ 0083c3c4 */
  FUN_00788b10(__s,PTR_PTR_0099e428 + 0x10);
  *(undefined4 *)((long)puVar2 + 0x5f4) = 0;
  *(undefined1 *)(puVar2 + 0xbf) = 0;
  *(undefined1 *)(puVar2 + 0xcb) = 0;
  *(undefined1 *)(puVar2 + 0xcc) = 0;
  *(undefined1 *)(puVar2 + 0xd8) = 0;
  *(undefined1 *)(puVar2 + 0xda) = 0;
  *(undefined1 *)((long)puVar2 + 0x6d4) = 0;
  *(undefined1 *)(puVar2 + 0xdb) = 0;
  *(undefined1 *)((long)puVar2 + 0x6dc) = 0;
  *(undefined1 *)(puVar2 + 0xdc) = 0;
  *(undefined1 *)((long)puVar2 + 0x6e4) = 0;
  *(undefined1 *)(puVar2 + 0xdd) = 0;
  *(undefined1 *)((long)puVar2 + 0x6ec) = 0;
  *(undefined1 *)(puVar2 + 0xde) = 0;
  *(undefined1 *)((long)puVar2 + 0x6f4) = 0;
  puVar1 = PTR_vtable_0099e420;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  puVar2[0xf5] = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar2[0xf2] = 0;
  puVar2[0xf1] = 0;
  *(undefined8 *)((long)puVar2 + 0x79c) = 0;
  *(undefined8 *)((long)puVar2 + 0x794) = 0;
  puVar2[0xf0] = 0;
  puVar2[0xef] = 0;
  puVar2[0xee] = 0;
  puVar2[0xed] = 0;
  puVar2[0xec] = 0;
  puVar2[0xeb] = 0;
  puVar2[0xea] = 0;
  puVar2[0xe9] = 0;
  puVar2[0xe8] = 0;
  puVar2[0xe7] = 0;
  puVar2[0xe6] = 0;
  puVar2[0xe5] = 0;
  puVar2[0xe4] = 0;
  puVar2[0xe3] = 0;
  puVar2[0xe2] = 0;
  puVar2[0xe1] = 0;
  puVar2[0xe0] = 0;
  puVar2[0xdf] = 0;
  *(undefined8 *)((long)puVar2 + 0x7ae) = 0;
  puVar2[0xf9] = 0;
  puVar2[0xf8] = 0;
  puVar2[0xf7] = 0;
  *(undefined1 *)(puVar2 + 0xfa) = 0;
  puVar2[0xfc] = 0;
  puVar2[0xfb] = 0;
  puVar2[0xfe] = 0;
  puVar2[0xfd] = 0;
  puVar2[0x100] = 0;
  puVar2[0xff] = 0;
  *param_1 = __s;
  param_1[1] = puVar2;
  return;
}


// ===== 0083c3e0  FUN_0083c3e0 =====

void FUN_0083c3e0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098d6a0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0083c3f0  FUN_0083c3f0 =====

void FUN_0083c3f0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098d6a0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0083c420  FUN_0083c420 =====

void FUN_0083c420(long param_1)

{
  FUN_0083b95c(param_1 + 0x18,PTR_PTR_0099e428);
  return;
}


// ===== 0083c430  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0083c434  FUN_0083c434 =====

void FUN_0083c434(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098d6f0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0083c444  FUN_0083c444 =====

void FUN_0083c444(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098d6f0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0083c474  FUN_0083c474 =====

void FUN_0083c474(long param_1)

{
  FUN_0083b95c(param_1 + 0x18,PTR_PTR_0099e428);
  return;
}


// ===== 0083c484  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0083c488  FUN_0083c488 =====

void FUN_0083c488(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0083c4d8  FUN_0083c4d8 =====

void FUN_0083c4d8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098d740;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0083c4e8  FUN_0083c4e8 =====

void FUN_0083c4e8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098d740;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0083c518  FUN_0083c518 =====

void FUN_0083c518(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0083c520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0083c524  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0083c528  FUN_0083c528 =====

EventEmitter * FUN_0083c528(EventEmitter *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long *plStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plStack_48 = (long *)param_2[1];
  local_50 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  local_60 = *param_3;
  local_58 = param_3[1];
  if (local_58 != 0) {
    FUN_00757d00(1,local_58 + 0x10);
  }
                    /* try { // try from 0083c570 to 0083c57f has its CatchHandler @ 0083c64c */
  facebook::react::EventEmitter::EventEmitter(param_1,&local_50,&local_60);
  *(undefined ***)param_1 = &PTR_FUN_0097ff10;
                    /* try { // try from 0083c590 to 0083c597 has its CatchHandler @ 0083c63c */
  plVar3 = (long *)operator_new(0x58);
  puVar2 = PTR_DAT_0099dc90;
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[4] = 0;
  plVar3[3] = 0;
  *(long **)(param_1 + 0x40) = plVar3 + 3;
  *(long **)(param_1 + 0x48) = plVar3;
  plVar3[6] = 0;
  plVar3[5] = 0;
  plVar3[8] = 0;
  plVar3[7] = 0;
  *(undefined8 *)((long)plVar3 + 0x4c) = 0;
  *(undefined8 *)((long)plVar3 + 0x44) = 0;
  *(undefined ***)param_1 = &PTR_FUN_0098d790;
  if (local_58 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar3 = plStack_48;
  if ((plStack_48 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,plStack_48 + 1), lVar4 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0083c680  FUN_0083c680 =====

void FUN_0083c680(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = (long)(PTR_DAT_0099dc88 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = (long)&PTR_FUN_0097ff80;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 0083c738  FUN_0083c738 =====

ShadowNodeFamily *
FUN_0083c738(ShadowNodeFamily *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = *param_3;
  local_50 = (long *)param_3[1];
  if (local_50 != (long *)0x0) {
    FUN_00757d00(1,local_50 + 1);
  }
  local_68 = *param_4;
  local_60 = param_4[1];
  if (local_60 != 0) {
    FUN_00757d00(1,local_60 + 0x10);
  }
                    /* try { // try from 0083c79c to 0083c7b3 has its CatchHandler @ 0083c81c */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(param_1,param_2,&local_58,&local_68,param_5);
  if (local_60 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0083c854  facebook::react::LottieAnimationViewEventEmitter::onAnimationFinish =====

/* facebook::react::LottieAnimationViewEventEmitter::onAnimationFinish(facebook::react::LottieAnimationViewEventEmitter::OnAnimationFinish)
   const */

void __thiscall
facebook::react::LottieAnimationViewEventEmitter::onAnimationFinish
          (LottieAnimationViewEventEmitter *this,undefined1 param_2)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined7 uStack_6f;
  char cStack_68;
  undefined2 uStack_67;
  undefined5 uStack_65;
  undefined **local_60;
  undefined1 local_58;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x22;
  uStack_67 = 0x68;
  uStack_6f = (undefined7)s_onAnimationFinish_00369906._8_8_;
  cStack_68 = SUB81(s_onAnimationFinish_00369906._8_8_,7);
  local_77 = (char  [8])s_onAnimationFinish_00369906._0_8_;
  local_60 = &PTR_FUN_0098d7c8;
                    /* try { // try from 0083c8a8 to 0083c8b7 has its CatchHandler @ 0083c914 */
  local_58 = param_2;
  local_40 = &local_60;
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_0083c8e4;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_0083c8e4:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_65,CONCAT21(uStack_67,cStack_68)));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0083c974  facebook::react::LottieAnimationViewEventEmitter::onAnimationFailure =====

/* facebook::react::LottieAnimationViewEventEmitter::onAnimationFailure(facebook::react::LottieAnimationViewEventEmitter::OnAnimationFailure)
   const */

void __thiscall
facebook::react::LottieAnimationViewEventEmitter::onAnimationFailure
          (LottieAnimationViewEventEmitter *this,undefined8 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  byte local_98;
  char local_97 [8];
  undefined7 uStack_8f;
  char cStack_88;
  undefined2 uStack_87;
  undefined1 uStack_85;
  undefined4 uStack_84;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_98 = 0x24;
  lVar4 = param_2[2];
  uStack_87 = 0x6572;
  uVar1 = *(undefined1 *)param_2;
  uStack_8f = (undefined7)s_onAnimationFailure_0036634b._8_8_;
  cStack_88 = SUB81(s_onAnimationFailure_0036634b._8_8_,7);
  local_97 = (char  [8])s_onAnimationFailure_0036634b._0_8_;
  uStack_85 = 0;
  local_80 = (undefined7)*(undefined8 *)((long)param_2 + 1);
  uStack_79 = (undefined1)param_2[1];
  uStack_78 = (undefined7)((ulong)param_2[1] >> 8);
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
                    /* try { // try from 0083c9d8 to 0083c9df has its CatchHandler @ 0083cab4 */
  local_50 = (long *)operator_new(0x20);
  *local_50 = (long)&PTR_FUN_0098d848;
  *(undefined1 *)(local_50 + 1) = uVar1;
  *(ulong *)((long)local_50 + 9) = CONCAT17(uStack_79,local_80);
  local_50[2] = CONCAT71(uStack_78,uStack_79);
  local_50[3] = lVar4;
                    /* try { // try from 0083ca04 to 0083ca1b has its CatchHandler @ 0083ca7c */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_98,local_70,2);
  if (local_50 == local_70) {
    lVar4 = 4;
    plVar3 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_0083ca48;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_0083ca48:
  if ((local_98 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_84,CONCAT13(uStack_85,CONCAT21(uStack_87,cStack_88))));
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0083caf0  facebook::react::LottieAnimationViewEventEmitter::onAnimationLoaded =====

/* facebook::react::LottieAnimationViewEventEmitter::onAnimationLoaded(facebook::react::LottieAnimationViewEventEmitter::OnAnimationLoaded)
   const */

void facebook::react::LottieAnimationViewEventEmitter::onAnimationLoaded(undefined8 param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined7 uStack_6f;
  char cStack_68;
  undefined2 uStack_67;
  undefined5 uStack_65;
  undefined **local_60 [4];
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x22;
  uStack_67 = 100;
  uStack_6f = (undefined7)s_onAnimationLoaded_00365731._8_8_;
  cStack_68 = SUB81(s_onAnimationLoaded_00365731._8_8_,7);
  local_77 = (char  [8])s_onAnimationLoaded_00365731._0_8_;
  local_60[0] = &PTR_FUN_0098d8c8;
                    /* try { // try from 0083cb40 to 0083cb4f has its CatchHandler @ 0083cbac */
  local_40 = local_60;
  ::facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_0083cb7c;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_0083cb7c:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_65,CONCAT21(uStack_67,cStack_68)));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0083cc0c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0083cc10  FUN_0083cc10 =====

void FUN_0083cc10(long param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar1 = *(undefined1 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_0098d7c8;
  *(undefined1 *)(puVar2 + 1) = uVar1;
  return;
}


// ===== 0083cc48  FUN_0083cc48 =====

void FUN_0083cc48(long param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  *param_2 = &PTR_FUN_0098d7c8;
  *(undefined1 *)(param_2 + 1) = uVar1;
  return;
}


// ===== 0083cc60  FUN_0083cc60 =====

void FUN_0083cc60(void)

{
  return;
}


// ===== 0083cc64  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0083cc68  FUN_0083cc68 =====

void FUN_0083cc68(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 0083cca8 to 0083ccbf has its CatchHandler @ 0083ccf4 */
  FUN_007cef18(&local_40,param_3,"isCancelled",param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0083cd2c  FUN_0083cd2c =====

long FUN_0083cd2c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react31LottieAnimationViewEventEmitter17onAnimationFinishENS1_17OnAnimationFinishEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0083cd48  FUN_0083cd48 =====

pointer_____offset_0x10___ * FUN_0083cd48(void)

{
  return &PTR_vtable_0098d828;
}


// ===== 0083cd54  FUN_0083cd54 =====

void FUN_0083cd54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0098d848;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 0083cd74  FUN_0083cd74 =====

void FUN_0083cd74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0098d848;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0083cdb4  FUN_0083cdb4 =====

undefined8 * FUN_0083cdb4(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_0098d848;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 0083ce00 to 0083ce03 has its CatchHandler @ 0083ce14 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  return puVar2;
}


// ===== 0083ce28  FUN_0083ce28 =====

void FUN_0083ce28(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_0098d848;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar2;
    param_2[1] = uVar1;
    return;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  __init_copy_ctor_external
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  return;
}


// ===== 0083ce64  FUN_0083ce64 =====

void FUN_0083ce64(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 0083ce78  FUN_0083ce78 =====

void FUN_0083ce78(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 0083ceac  FUN_0083ceac =====

void FUN_0083ceac(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 0083ceec to 0083cf03 has its CatchHandler @ 0083cf38 */
  FUN_007ccecc(&local_40,param_3,"error",param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0083cf70  FUN_0083cf70 =====

long FUN_0083cf70(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react31LottieAnimationViewEventEmitter18onAnimationFailureENS1_18OnAnimationFailureEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0083cf8c  FUN_0083cf8c =====

pointer_____offset_0x10___ * FUN_0083cf8c(void)

{
  return &PTR_vtable_0098d8a8;
}


// ===== 0083cf98  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0083cf9c  FUN_0083cf9c =====

void FUN_0083cf9c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_0098d8c8;
  return;
}


// ===== 0083cfc0  FUN_0083cfc0 =====

void FUN_0083cfc0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_0098d8c8;
  return;
}


// ===== 0083cfd0  FUN_0083cfd0 =====

void FUN_0083cfd0(void)

{
  return;
}


// ===== 0083cfd4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0083cfd8  FUN_0083cfd8 =====

void FUN_0083cfd8(undefined4 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_30,param_3);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0083d040  FUN_0083d040 =====

long FUN_0083d040(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react31LottieAnimationViewEventEmitter17onAnimationLoadedENS1_17OnAnimationLoadedEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0083d05c  FUN_0083d05c =====

pointer_____offset_0x10___ * FUN_0083d05c(void)

{
  return &PTR_vtable_0098d928;
}


// ===== 0083d068  facebook::react::LottieAnimationViewProps::LottieAnimationViewProps =====

/* facebook::react::LottieAnimationViewProps::LottieAnimationViewProps(facebook::react::PropsParserContext
   const&, facebook::react::LottieAnimationViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::LottieAnimationViewProps::LottieAnimationViewProps
          (LottieAnimationViewProps *this,PropsParserContext *param_1,
          LottieAnimationViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  LottieAnimationViewProps LVar4;
  ulong *puVar5;
  function *in_x4;
  long lVar6;
  undefined4 uVar7;
  ulong local_90 [2];
  void *local_80;
  long *local_70;
  long local_58;
  
  puVar5 = local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 0083d0a8 to 0083d0b7 has its CatchHandler @ 0083d644 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if ((ulong *)local_70 == local_90) {
    lVar6 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_0083d0e4;
    lVar6 = 5;
    puVar5 = (ulong *)local_70;
  }
  (**(code **)(*puVar5 + lVar6 * 8))();
LAB_0083d0e4:
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
  *(undefined8 *)this = *(undefined8 *)param_1;
                    /* try { // try from 0083d0f4 to 0083d11b has its CatchHandler @ 0083d630 */
  FUN_007ea274(this + 0x6e0,param_2);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 0083d134 to 0083d15b has its CatchHandler @ 0083d61c */
  FUN_007ea274(this + 0x6f8,param_2);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 0083d174 to 0083d19b has its CatchHandler @ 0083d608 */
  FUN_007ea274(this + 0x710,param_2);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 0083d1b4 to 0083d1db has its CatchHandler @ 0083d5f4 */
  FUN_007ea274(this + 0x728,param_2);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 0083d1f4 to 0083d21b has its CatchHandler @ 0083d5e0 */
  FUN_007ea274(this + 0x740,param_2);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 0083d234 to 0083d25b has its CatchHandler @ 0083d5cc */
  FUN_007ea274(this + 0x758,param_2);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 0083d274 to 0083d29b has its CatchHandler @ 0083d5b8 */
  FUN_007ea274(this + 0x770,param_2);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = local_90[0] & 0xffffffff00000000;
                    /* try { // try from 0083d2b0 to 0083d2d3 has its CatchHandler @ 0083d51c */
  uVar7 = FUN_007f0fe0(param_2);
  *(undefined4 *)(this + 0x788) = uVar7;
  local_90[0] = 0;
                    /* try { // try from 0083d2dc to 0083d2ff has its CatchHandler @ 0083d518 */
  uVar2 = FUN_007fb40c(param_2);
  *(undefined8 *)(this + 0x790) = uVar2;
  local_90[0] = local_90[0] & 0xffffffffffffff00;
                    /* try { // try from 0083d308 to 0083d32b has its CatchHandler @ 0083d514 */
  bVar3 = FUN_007ea510(param_2);
  local_90[0] = local_90[0] & 0xffffffffffffff00;
  this[0x798] = (LottieAnimationViewProps)(bVar3 & 1);
                    /* try { // try from 0083d338 to 0083d35b has its CatchHandler @ 0083d510 */
  bVar3 = FUN_007ea510(param_2);
  local_90[0] = local_90[0] & 0xffffffffffffff00;
  this[0x799] = (LottieAnimationViewProps)(bVar3 & 1);
                    /* try { // try from 0083d368 to 0083d38b has its CatchHandler @ 0083d50c */
  bVar3 = FUN_007ea510(param_2);
  local_90[0] = local_90[0] & 0xffffffffffffff00;
  this[0x79a] = (LottieAnimationViewProps)(bVar3 & 1);
                    /* try { // try from 0083d398 to 0083d3bb has its CatchHandler @ 0083d508 */
  bVar3 = FUN_007ea510(param_2);
  local_90[0] = local_90[0] & 0xffffffffffffff00;
  this[0x79b] = (LottieAnimationViewProps)(bVar3 & 1);
                    /* try { // try from 0083d3c8 to 0083d3eb has its CatchHandler @ 0083d504 */
  bVar3 = FUN_007ea510(param_2);
  local_90[0] = local_90[0] & 0xffffffffffffff00;
  this[0x79c] = (LottieAnimationViewProps)(bVar3 & 1);
                    /* try { // try from 0083d3f8 to 0083d41b has its CatchHandler @ 0083d500 */
  bVar3 = FUN_007ea510(param_2);
  local_90[0] = 0;
  local_90[1] = 0;
  this[0x79d] = (LottieAnimationViewProps)(bVar3 & 1);
  local_80 = (void *)0x0;
                    /* try { // try from 0083d42c to 0083d443 has its CatchHandler @ 0083d4f0 */
  FUN_0083d67c(this + 0x7a0,param_2);
  local_90[0] = local_90[0] & 0xffffffffffffff00;
                    /* try { // try from 0083d448 to 0083d457 has its CatchHandler @ 0083d4e4 */
  LVar4 = (LottieAnimationViewProps)FUN_0083d924();
  this[0x7b8] = LVar4;
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 0083d464 to 0083d477 has its CatchHandler @ 0083d4d4 */
  FUN_0083dadc(this + 0x7c0);
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 0083d480 to 0083d493 has its CatchHandler @ 0083d4c0 */
  FUN_0083de10(this + 0x7d8);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0083d67c  FUN_0083d67c =====

void FUN_0083d67c(undefined8 *param_1,undefined8 param_2,char *param_3,long *param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  lVar2 = facebook::react::RawProps::at(param_3,"colorFilters",(char *)0x0);
  if (lVar2 == 0) {
    lVar2 = *param_4;
    lVar4 = param_4[1];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    uVar3 = FUN_00807970();
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    if ((uVar3 & 1) != 0) {
                    /* try { // try from 0083d724 to 0083d733 has its CatchHandler @ 0083d764 */
      FUN_0083ffdc(param_2,lVar2,param_1);
      if (*(long *)(lVar1 + 0x28) == lVar5) {
        return;
      }
      goto LAB_0083d8a0;
    }
    lVar2 = *param_5;
    lVar4 = param_5[1];
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    FUN_0084053c(param_1,lVar2,lVar4,lVar4 - lVar2 >> 5);
    return;
  }
LAB_0083d8a0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0083d8a8  FUN_0083d8a8 =====

void FUN_0083d8a8(undefined8 *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = (byte *)*param_1;
  if (pbVar2 == (byte *)0x0) {
    return;
  }
  pbVar1 = (byte *)param_1[1];
  pbVar3 = pbVar2;
  if (pbVar1 != pbVar2) {
    do {
      pbVar3 = pbVar1 + -0x20;
      if ((*pbVar3 & 1) != 0) {
        operator_delete(*(void **)(pbVar1 + -0x10));
      }
      pbVar1 = pbVar3;
    } while (pbVar3 != pbVar2);
    pbVar3 = (byte *)*param_1;
  }
  param_1[1] = pbVar2;
  operator_delete(pbVar3);
  return;
}


// ===== 0083d924  FUN_0083d924 =====

void FUN_0083d924(char *param_1,undefined1 *param_2,undefined1 *param_3)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = facebook::react::RawProps::at(param_1,"dummy",(char *)0x0);
  if (lVar3 == 0) {
    uVar2 = *param_2;
  }
  else {
    uVar4 = FUN_00807970();
    if ((uVar4 & 1) == 0) {
      uVar2 = *param_3;
    }
    else {
      local_3c[0] = 0;
                    /* try { // try from 0083d9a0 to 0083d9ab has its CatchHandler @ 0083d9bc */
      FUN_008407fc(lVar3,local_3c);
      uVar2 = local_3c[0];
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 0083dadc  FUN_0083dadc =====

void FUN_0083dadc(undefined8 *param_1,char *param_2,long *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar2 = tpidr_el0;
  lVar7 = *(long *)(lVar2 + 0x28);
  lVar3 = facebook::react::RawProps::at(param_2,"textFiltersAndroid",(char *)0x0);
  if (lVar3 == 0) {
    lVar3 = *param_3;
    lVar1 = param_3[1];
    param_4 = param_1 + 2;
    *param_4 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    uVar6 = lVar1 - lVar3;
    if (uVar6 != 0) {
      if (0x555555555555555 < (ulong)(((long)uVar6 >> 4) * -0x5555555555555555)) {
        if (*(long *)(lVar2 + 0x28) != lVar7) goto LAB_0083dd84;
                    /* try { // try from 0083dc00 to 0083dc03 has its CatchHandler @ 0083dd60 */
        FUN_008411e0();
        goto LAB_0083dc04;
      }
                    /* try { // try from 0083db70 to 0083db77 has its CatchHandler @ 0083dd60 */
      pvVar4 = operator_new(uVar6);
      *param_1 = pvVar4;
      param_1[1] = pvVar4;
      param_1[2] = (long)pvVar4 + uVar6;
                    /* try { // try from 0083db88 to 0083db9b has its CatchHandler @ 0083dd54 */
      uVar5 = FUN_008411f4(param_4,lVar3,lVar1,pvVar4);
      param_1[1] = uVar5;
    }
  }
  else {
    uVar6 = FUN_00807970();
    if ((uVar6 & 1) == 0) {
LAB_0083dc04:
      if (*(long *)(lVar2 + 0x28) == lVar7) {
        FUN_008409fc(param_1,param_4);
        return;
      }
      goto LAB_0083dd84;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
                    /* try { // try from 0083dbe0 to 0083dbeb has its CatchHandler @ 0083dc38 */
    FUN_00840b10(lVar3,param_1);
  }
  if (*(long *)(lVar2 + 0x28) == lVar7) {
    return;
  }
LAB_0083dd84:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0083dd88  FUN_0083dd88 =====

void FUN_0083dd88(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar2 = (void *)*param_1;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  pvVar3 = (void *)param_1[1];
  pvVar1 = pvVar2;
  if (pvVar3 != pvVar2) {
    do {
      if ((*(byte *)((long)pvVar3 + -0x18) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar3 + -8));
      }
      if ((*(byte *)((long)pvVar3 + -0x30) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar3 + -0x20));
      }
      pvVar3 = (void *)((long)pvVar3 + -0x30);
    } while (pvVar3 != pvVar2);
    pvVar1 = (void *)*param_1;
  }
  param_1[1] = pvVar2;
  operator_delete(pvVar1);
  return;
}


// ===== 0083de10  FUN_0083de10 =====

void FUN_0083de10(undefined8 *param_1,char *param_2,long *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar2 = tpidr_el0;
  lVar7 = *(long *)(lVar2 + 0x28);
  lVar3 = facebook::react::RawProps::at(param_2,"textFiltersIOS",(char *)0x0);
  if (lVar3 == 0) {
    lVar3 = *param_3;
    lVar1 = param_3[1];
    param_4 = param_1 + 2;
    *param_4 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    uVar6 = lVar1 - lVar3;
    if (uVar6 != 0) {
      if (0x555555555555555 < (ulong)(((long)uVar6 >> 4) * -0x5555555555555555)) {
        if (*(long *)(lVar2 + 0x28) != lVar7) goto LAB_0083e0b8;
                    /* try { // try from 0083df34 to 0083df37 has its CatchHandler @ 0083e094 */
        FUN_00841bdc();
        goto LAB_0083df38;
      }
                    /* try { // try from 0083dea4 to 0083deab has its CatchHandler @ 0083e094 */
      pvVar4 = operator_new(uVar6);
      *param_1 = pvVar4;
      param_1[1] = pvVar4;
      param_1[2] = (long)pvVar4 + uVar6;
                    /* try { // try from 0083debc to 0083decf has its CatchHandler @ 0083e088 */
      uVar5 = FUN_00841bf0(param_4,lVar3,lVar1,pvVar4);
      param_1[1] = uVar5;
    }
  }
  else {
    uVar6 = FUN_00807970();
    if ((uVar6 & 1) == 0) {
LAB_0083df38:
      if (*(long *)(lVar2 + 0x28) == lVar7) {
        FUN_008413f8(param_1,param_4);
        return;
      }
      goto LAB_0083e0b8;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
                    /* try { // try from 0083df14 to 0083df1f has its CatchHandler @ 0083df6c */
    FUN_0084150c(lVar3,param_1);
  }
  if (*(long *)(lVar2 + 0x28) == lVar7) {
    return;
  }
LAB_0083e0b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0083e0bc  FUN_0083e0bc =====

void FUN_0083e0bc(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar2 = (void *)*param_1;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  pvVar3 = (void *)param_1[1];
  pvVar1 = pvVar2;
  if (pvVar3 != pvVar2) {
    do {
      if ((*(byte *)((long)pvVar3 + -0x18) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar3 + -8));
      }
      if ((*(byte *)((long)pvVar3 + -0x30) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar3 + -0x20));
      }
      pvVar3 = (void *)((long)pvVar3 + -0x30);
    } while (pvVar3 != pvVar2);
    pvVar1 = (void *)*param_1;
  }
  param_1[1] = pvVar2;
  operator_delete(pvVar1);
  return;
}


// ===== 0083e144  facebook::react::LottieAnimationViewProps::LottieAnimationViewProps =====

/* facebook::react::LottieAnimationViewProps::LottieAnimationViewProps(facebook::react::PropsParserContext
   const&, facebook::react::LottieAnimationViewProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::LottieAnimationViewProps::LottieAnimationViewProps
          (LottieAnimationViewProps *this,PropsParserContext *param_1,
          LottieAnimationViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  LottieAnimationViewProps LVar4;
  ulong *puVar5;
  long lVar6;
  undefined4 uVar7;
  ulong local_90 [2];
  void *local_80;
  long *local_70;
  long local_58;
  
  puVar5 = local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 0083e180 to 0083e1a3 has its CatchHandler @ 0083e738 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_0099e428 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if ((ulong *)local_70 == local_90) {
    lVar6 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_0083e1d0;
    lVar6 = 5;
    puVar5 = (ulong *)local_70;
  }
  (**(code **)(*puVar5 + lVar6 * 8))();
LAB_0083e1d0:
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
  *(undefined **)this = PTR_vtable_0099e420 + 0x20;
                    /* try { // try from 0083e1e8 to 0083e20f has its CatchHandler @ 0083e724 */
  FUN_007ea274(this + 0x6e0,param_1,param_3,"resizeMode",param_2 + 0x6e0,local_90,0,0);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 0083e228 to 0083e24f has its CatchHandler @ 0083e710 */
  FUN_007ea274(this + 0x6f8,param_1,param_3,"renderMode",param_2 + 0x6f8,local_90,0,0);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 0083e268 to 0083e28f has its CatchHandler @ 0083e6fc */
  FUN_007ea274(this + 0x710,param_1,param_3,"sourceName",param_2 + 0x710,local_90,0,0);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 0083e2a8 to 0083e2cf has its CatchHandler @ 0083e6e8 */
  FUN_007ea274(this + 0x728,param_1,param_3,"sourceJson",param_2 + 0x728,local_90,0,0);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 0083e2e8 to 0083e30f has its CatchHandler @ 0083e6d4 */
  FUN_007ea274(this + 0x740,param_1,param_3,"sourceURL",param_2 + 0x740,local_90,0,0);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 0083e328 to 0083e34f has its CatchHandler @ 0083e6c0 */
  FUN_007ea274(this + 0x758,param_1,param_3,"sourceDotLottieURI",param_2 + 0x758,local_90,0,0);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 0083e368 to 0083e38f has its CatchHandler @ 0083e6ac */
  FUN_007ea274(this + 0x770,param_1,param_3,"imageAssetsFolder",param_2 + 0x770,local_90,0,0);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = local_90[0] & 0xffffffff00000000;
                    /* try { // try from 0083e3a4 to 0083e3c7 has its CatchHandler @ 0083e610 */
  uVar7 = FUN_007f0fe0(param_1,param_3,"progress",param_2 + 0x788,local_90,0,0);
  *(undefined4 *)(this + 0x788) = uVar7;
  local_90[0] = 0;
                    /* try { // try from 0083e3d0 to 0083e3f3 has its CatchHandler @ 0083e60c */
  uVar2 = FUN_007fb40c(param_1,param_3,"speed",param_2 + 0x790,local_90,0,0);
  *(undefined8 *)(this + 0x790) = uVar2;
  local_90[0] = local_90[0] & 0xffffffffffffff00;
                    /* try { // try from 0083e3fc to 0083e41f has its CatchHandler @ 0083e608 */
  bVar3 = FUN_007ea510(param_1,param_3,&DAT_00367aaa,param_2 + 0x798,local_90,0,0);
  local_90[0] = local_90[0] & 0xffffffffffffff00;
  this[0x798] = (LottieAnimationViewProps)(bVar3 & 1);
                    /* try { // try from 0083e42c to 0083e44f has its CatchHandler @ 0083e604 */
  bVar3 = FUN_007ea510(param_1,param_3,"autoPlay",param_2 + 0x799,local_90,0,0);
  local_90[0] = local_90[0] & 0xffffffffffffff00;
  this[0x799] = (LottieAnimationViewProps)(bVar3 & 1);
                    /* try { // try from 0083e45c to 0083e47f has its CatchHandler @ 0083e600 */
  bVar3 = FUN_007ea510(param_1,param_3,"enableMergePathsAndroidForKitKatAndAbove",param_2 + 0x79a,
                       local_90,0,0);
  local_90[0] = local_90[0] & 0xffffffffffffff00;
  this[0x79a] = (LottieAnimationViewProps)(bVar3 & 1);
                    /* try { // try from 0083e48c to 0083e4af has its CatchHandler @ 0083e5fc */
  bVar3 = FUN_007ea510(param_1,param_3,"enableSafeModeAndroid",param_2 + 0x79b,local_90,0,0);
  local_90[0] = local_90[0] & 0xffffffffffffff00;
  this[0x79b] = (LottieAnimationViewProps)(bVar3 & 1);
                    /* try { // try from 0083e4bc to 0083e4df has its CatchHandler @ 0083e5f8 */
  bVar3 = FUN_007ea510(param_1,param_3,"hardwareAccelerationAndroid",param_2 + 0x79c,local_90,0,0);
  local_90[0] = local_90[0] & 0xffffffffffffff00;
  this[0x79c] = (LottieAnimationViewProps)(bVar3 & 1);
                    /* try { // try from 0083e4ec to 0083e50f has its CatchHandler @ 0083e5f4 */
  bVar3 = FUN_007ea510(param_1,param_3,"cacheComposition",param_2 + 0x79d,local_90,0,0);
  local_90[0] = 0;
  local_90[1] = 0;
  this[0x79d] = (LottieAnimationViewProps)(bVar3 & 1);
  local_80 = (void *)0x0;
                    /* try { // try from 0083e520 to 0083e537 has its CatchHandler @ 0083e5e4 */
  FUN_0083d67c(this + 0x7a0,param_1,param_3,param_2 + 0x7a0,local_90);
  local_90[0] = local_90[0] & 0xffffffffffffff00;
                    /* try { // try from 0083e53c to 0083e54b has its CatchHandler @ 0083e5d8 */
  LVar4 = (LottieAnimationViewProps)FUN_0083d924(param_3,param_2 + 0x7b8,local_90);
  this[0x7b8] = LVar4;
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 0083e558 to 0083e56b has its CatchHandler @ 0083e5c8 */
  FUN_0083dadc(this + 0x7c0,param_3,param_2 + 0x7c0,local_90);
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 0083e574 to 0083e587 has its CatchHandler @ 0083e5b4 */
  FUN_0083de10(this + 0x7d8,param_3,param_2 + 0x7d8,local_90);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0083e770  facebook::react::LottieAnimationViewProps::getDiffPropsImplementationTarget =====

/* facebook::react::LottieAnimationViewProps::getDiffPropsImplementationTarget() const */

char * facebook::react::LottieAnimationViewProps::getDiffPropsImplementationTarget(void)

{
  return "LottieAnimationView";
}


// ===== 0083e77c  facebook::react::LottieAnimationViewProps::getDiffProps =====

/* facebook::react::LottieAnimationViewProps::getDiffProps(facebook::react::Props const*) const */

void facebook::react::LottieAnimationViewProps::getDiffProps(Props *param_1)

{
  Props *pPVar1;
  ulong uVar2;
  size_t sVar3;
  Props PVar4;
  Props PVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  ulong *puVar10;
  int iVar11;
  int *piVar12;
  dynamic *pdVar13;
  Props *in_x1;
  Props *pPVar14;
  undefined4 *in_x8;
  ulong uVar15;
  ulong uVar16;
  Props *pPVar17;
  byte *pbVar18;
  byte *pbVar19;
  size_t sVar20;
  char *pcVar21;
  ulong *puVar22;
  ulong *puVar23;
  float fVar24;
  double dVar25;
  ulong local_230;
  ulong uStack_228;
  void *local_220;
  ulong local_210;
  ulong uStack_208;
  void *local_200;
  ulong local_1f0;
  ulong uStack_1e8;
  void *local_1e0;
  ulong local_1d0;
  ulong uStack_1c8;
  void *local_1c0;
  ulong local_1b0;
  ulong uStack_1a8;
  void *local_1a0;
  ulong local_190;
  ulong uStack_188;
  void *local_180;
  ulong local_170;
  ulong uStack_168;
  void *local_160;
  ulong local_150;
  ulong uStack_148;
  void *local_140;
  ulong local_130;
  ulong uStack_128;
  void *local_120;
  int local_118 [2];
  undefined8 local_110;
  dynamic *local_108;
  dynamic *pdStack_100;
  undefined4 local_e8 [2];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 local_b8 [2];
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  
  lVar8 = tpidr_el0;
  local_88 = *(long *)(lVar8 + 0x28);
  if (((DAT_009b8920 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_009b8920), iVar11 != 0)) {
    memset(&DAT_009b8130,0,0x7f0);
                    /* try { // try from 0083fbec to 0083fbef has its CatchHandler @ 0083fc24 */
    FUN_0083fe3c();
    __cxa_atexit(FUN_0083ff1c,&DAT_009b8130,&PTR_LOOP_008d5d30);
    __cxa_guard_release(&DAT_009b8920);
  }
  pPVar1 = (Props *)&DAT_009b8130;
  if (in_x1 != (Props *)0x0) {
    pPVar1 = in_x1;
  }
  if (pPVar1 == param_1) {
    local_98 = 0;
    local_b8[0] = 5;
    lVar9 = -0x58;
    uStack_a8 = 0;
    local_a0 = (void *)0x0;
    local_90 = 0x3f800000;
    *in_x8 = 5;
    local_b0 = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
  }
  else {
    ::facebook::react::HostPlatformViewProps::getDiffProps(param_1);
    PVar4 = param_1[0x6e0];
    PVar5 = pPVar1[0x6e0];
    sVar20 = *(size_t *)(param_1 + 0x6e8);
    uVar15 = (ulong)((byte)PVar4 >> 1);
    uVar16 = uVar15;
    if (((byte)PVar4 & 1) != 0) {
      uVar16 = sVar20;
    }
    uVar2 = (ulong)((byte)PVar5 >> 1);
    if (((byte)PVar5 & 1) != 0) {
      uVar2 = *(ulong *)(pPVar1 + 0x6e8);
    }
    if (uVar16 == uVar2) {
      pPVar14 = pPVar1 + 0x6e1;
      if (((byte)PVar5 & 1) != 0) {
        pPVar14 = *(Props **)(pPVar1 + 0x6f0);
      }
      if (((byte)PVar4 & 1) == 0) {
        if (1 < (byte)PVar4) {
          pPVar17 = param_1 + 0x6e1;
          do {
            if (*pPVar17 != *pPVar14) goto LAB_0083e89c;
            uVar15 = uVar15 - 1;
            pPVar17 = pPVar17 + 1;
            pPVar14 = pPVar14 + 1;
          } while (uVar15 != 0);
        }
      }
      else {
        pcVar21 = *(char **)(param_1 + 0x6f0);
        iVar11 = memcmp(pcVar21,pPVar14,sVar20);
        if (iVar11 != 0) goto LAB_0083e8d4;
      }
    }
    else {
LAB_0083e89c:
      if (((byte)PVar4 & 1) == 0) {
        uStack_168 = *(ulong *)(param_1 + 0x6e8);
        local_170 = *(ulong *)(param_1 + 0x6e0);
        local_160 = *(void **)(param_1 + 0x6f0);
      }
      else {
        pcVar21 = *(char **)(param_1 + 0x6f0);
LAB_0083e8d4:
                    /* try { // try from 0083e8d4 to 0083e8e3 has its CatchHandler @ 0083fc68 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_170,pcVar21,sVar20);
      }
      local_b8[0] = 6;
      uStack_a8 = uStack_168;
      local_b0 = local_170;
      local_a0 = local_160;
      local_170 = 0;
      uStack_168 = 0;
      local_160 = (void *)0x0;
                    /* try { // try from 0083e904 to 0083e917 has its CatchHandler @ 0083fd40 */
      pdVar13 = (dynamic *)folly::dynamic::operator[](in_x8,"resizeMode","");
      folly::dynamic::operator=(pdVar13,(dynamic *)local_b8);
      folly::dynamic::folly::dynamic::destroy(local_b8);
      if ((local_170 & 1) != 0) {
        operator_delete(local_160);
      }
    }
    PVar4 = param_1[0x6f8];
    PVar5 = pPVar1[0x6f8];
    sVar20 = *(size_t *)(param_1 + 0x700);
    uVar15 = (ulong)((byte)PVar4 >> 1);
    uVar16 = uVar15;
    if (((byte)PVar4 & 1) != 0) {
      uVar16 = sVar20;
    }
    uVar2 = (ulong)((byte)PVar5 >> 1);
    if (((byte)PVar5 & 1) != 0) {
      uVar2 = *(ulong *)(pPVar1 + 0x700);
    }
    if (uVar16 == uVar2) {
      pPVar14 = pPVar1 + 0x6f9;
      if (((byte)PVar5 & 1) != 0) {
        pPVar14 = *(Props **)(pPVar1 + 0x708);
      }
      if (((byte)PVar4 & 1) == 0) {
        if (1 < (byte)PVar4) {
          pPVar17 = param_1 + 0x6f9;
          do {
            if (*pPVar17 != *pPVar14) goto LAB_0083e9ac;
            uVar15 = uVar15 - 1;
            pPVar17 = pPVar17 + 1;
            pPVar14 = pPVar14 + 1;
          } while (uVar15 != 0);
        }
      }
      else {
        pcVar21 = *(char **)(param_1 + 0x708);
        iVar11 = memcmp(pcVar21,pPVar14,sVar20);
        if (iVar11 != 0) goto LAB_0083e9e4;
      }
    }
    else {
LAB_0083e9ac:
      if (((byte)PVar4 & 1) == 0) {
        uStack_188 = *(ulong *)(param_1 + 0x700);
        local_190 = *(ulong *)(param_1 + 0x6f8);
        local_180 = *(void **)(param_1 + 0x708);
      }
      else {
        pcVar21 = *(char **)(param_1 + 0x708);
LAB_0083e9e4:
                    /* try { // try from 0083e9e4 to 0083e9f3 has its CatchHandler @ 0083fc60 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_190,pcVar21,sVar20);
      }
      local_b8[0] = 6;
      uStack_a8 = uStack_188;
      local_b0 = local_190;
      local_a0 = local_180;
      local_190 = 0;
      uStack_188 = 0;
      local_180 = (void *)0x0;
                    /* try { // try from 0083ea14 to 0083ea27 has its CatchHandler @ 0083fd20 */
      pdVar13 = (dynamic *)folly::dynamic::operator[](in_x8,"renderMode","");
      folly::dynamic::operator=(pdVar13,(dynamic *)local_b8);
      folly::dynamic::folly::dynamic::destroy(local_b8);
      if ((local_190 & 1) != 0) {
        operator_delete(local_180);
      }
    }
    PVar4 = param_1[0x710];
    PVar5 = pPVar1[0x710];
    sVar20 = *(size_t *)(param_1 + 0x718);
    uVar15 = (ulong)((byte)PVar4 >> 1);
    uVar16 = uVar15;
    if (((byte)PVar4 & 1) != 0) {
      uVar16 = sVar20;
    }
    uVar2 = (ulong)((byte)PVar5 >> 1);
    if (((byte)PVar5 & 1) != 0) {
      uVar2 = *(ulong *)(pPVar1 + 0x718);
    }
    if (uVar16 == uVar2) {
      pPVar14 = pPVar1 + 0x711;
      if (((byte)PVar5 & 1) != 0) {
        pPVar14 = *(Props **)(pPVar1 + 0x720);
      }
      if (((byte)PVar4 & 1) == 0) {
        if (1 < (byte)PVar4) {
          pPVar17 = param_1 + 0x711;
          do {
            if (*pPVar17 != *pPVar14) goto LAB_0083eabc;
            uVar15 = uVar15 - 1;
            pPVar17 = pPVar17 + 1;
            pPVar14 = pPVar14 + 1;
          } while (uVar15 != 0);
        }
      }
      else {
        pcVar21 = *(char **)(param_1 + 0x720);
        iVar11 = memcmp(pcVar21,pPVar14,sVar20);
        if (iVar11 != 0) goto LAB_0083eaf4;
      }
    }
    else {
LAB_0083eabc:
      if (((byte)PVar4 & 1) == 0) {
        uStack_1a8 = *(ulong *)(param_1 + 0x718);
        local_1b0 = *(ulong *)(param_1 + 0x710);
        local_1a0 = *(void **)(param_1 + 0x720);
      }
      else {
        pcVar21 = *(char **)(param_1 + 0x720);
LAB_0083eaf4:
                    /* try { // try from 0083eaf4 to 0083eb03 has its CatchHandler @ 0083fc58 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_1b0,pcVar21,sVar20);
      }
      local_b8[0] = 6;
      uStack_a8 = uStack_1a8;
      local_b0 = local_1b0;
      local_a0 = local_1a0;
      local_1b0 = 0;
      uStack_1a8 = 0;
      local_1a0 = (void *)0x0;
                    /* try { // try from 0083eb24 to 0083eb37 has its CatchHandler @ 0083fd00 */
      pdVar13 = (dynamic *)folly::dynamic::operator[](in_x8,"sourceName","");
      folly::dynamic::operator=(pdVar13,(dynamic *)local_b8);
      folly::dynamic::folly::dynamic::destroy(local_b8);
      if ((local_1b0 & 1) != 0) {
        operator_delete(local_1a0);
      }
    }
    PVar4 = param_1[0x728];
    PVar5 = pPVar1[0x728];
    sVar20 = *(size_t *)(param_1 + 0x730);
    uVar15 = (ulong)((byte)PVar4 >> 1);
    uVar16 = uVar15;
    if (((byte)PVar4 & 1) != 0) {
      uVar16 = sVar20;
    }
    uVar2 = (ulong)((byte)PVar5 >> 1);
    if (((byte)PVar5 & 1) != 0) {
      uVar2 = *(ulong *)(pPVar1 + 0x730);
    }
    if (uVar16 == uVar2) {
      pPVar14 = pPVar1 + 0x729;
      if (((byte)PVar5 & 1) != 0) {
        pPVar14 = *(Props **)(pPVar1 + 0x738);
      }
      if (((byte)PVar4 & 1) == 0) {
        if (1 < (byte)PVar4) {
          pPVar17 = param_1 + 0x729;
          do {
            if (*pPVar17 != *pPVar14) goto LAB_0083ebcc;
            uVar15 = uVar15 - 1;
            pPVar17 = pPVar17 + 1;
            pPVar14 = pPVar14 + 1;
          } while (uVar15 != 0);
        }
      }
      else {
        pcVar21 = *(char **)(param_1 + 0x738);
        iVar11 = memcmp(pcVar21,pPVar14,sVar20);
        if (iVar11 != 0) goto LAB_0083ec04;
      }
    }
    else {
LAB_0083ebcc:
      if (((byte)PVar4 & 1) == 0) {
        uStack_1c8 = *(ulong *)(param_1 + 0x730);
        local_1d0 = *(ulong *)(param_1 + 0x728);
        local_1c0 = *(void **)(param_1 + 0x738);
      }
      else {
        pcVar21 = *(char **)(param_1 + 0x738);
LAB_0083ec04:
                    /* try { // try from 0083ec04 to 0083ec13 has its CatchHandler @ 0083fc50 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_1d0,pcVar21,sVar20);
      }
      local_b8[0] = 6;
      uStack_a8 = uStack_1c8;
      local_b0 = local_1d0;
      local_a0 = local_1c0;
      local_1d0 = 0;
      uStack_1c8 = 0;
      local_1c0 = (void *)0x0;
                    /* try { // try from 0083ec34 to 0083ec47 has its CatchHandler @ 0083fce0 */
      pdVar13 = (dynamic *)folly::dynamic::operator[](in_x8,"sourceJson","");
      folly::dynamic::operator=(pdVar13,(dynamic *)local_b8);
      folly::dynamic::folly::dynamic::destroy(local_b8);
      if ((local_1d0 & 1) != 0) {
        operator_delete(local_1c0);
      }
    }
    PVar4 = param_1[0x740];
    PVar5 = pPVar1[0x740];
    sVar20 = *(size_t *)(param_1 + 0x748);
    uVar15 = (ulong)((byte)PVar4 >> 1);
    uVar16 = uVar15;
    if (((byte)PVar4 & 1) != 0) {
      uVar16 = sVar20;
    }
    uVar2 = (ulong)((byte)PVar5 >> 1);
    if (((byte)PVar5 & 1) != 0) {
      uVar2 = *(ulong *)(pPVar1 + 0x748);
    }
    if (uVar16 == uVar2) {
      pPVar14 = pPVar1 + 0x741;
      if (((byte)PVar5 & 1) != 0) {
        pPVar14 = *(Props **)(pPVar1 + 0x750);
      }
      if (((byte)PVar4 & 1) == 0) {
        if (1 < (byte)PVar4) {
          pPVar17 = param_1 + 0x741;
          do {
            if (*pPVar17 != *pPVar14) goto LAB_0083ecdc;
            uVar15 = uVar15 - 1;
            pPVar17 = pPVar17 + 1;
            pPVar14 = pPVar14 + 1;
          } while (uVar15 != 0);
        }
      }
      else {
        pcVar21 = *(char **)(param_1 + 0x750);
        iVar11 = memcmp(pcVar21,pPVar14,sVar20);
        if (iVar11 != 0) goto LAB_0083ed14;
      }
    }
    else {
LAB_0083ecdc:
      if (((byte)PVar4 & 1) == 0) {
        uStack_1e8 = *(ulong *)(param_1 + 0x748);
        local_1f0 = *(ulong *)(param_1 + 0x740);
        local_1e0 = *(void **)(param_1 + 0x750);
      }
      else {
        pcVar21 = *(char **)(param_1 + 0x750);
LAB_0083ed14:
                    /* try { // try from 0083ed14 to 0083ed23 has its CatchHandler @ 0083fc48 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_1f0,pcVar21,sVar20);
      }
      local_b8[0] = 6;
      uStack_a8 = uStack_1e8;
      local_b0 = local_1f0;
      local_a0 = local_1e0;
      local_1f0 = 0;
      uStack_1e8 = 0;
      local_1e0 = (void *)0x0;
                    /* try { // try from 0083ed44 to 0083ed57 has its CatchHandler @ 0083fcc0 */
      pdVar13 = (dynamic *)folly::dynamic::operator[](in_x8,"sourceURL","");
      folly::dynamic::operator=(pdVar13,(dynamic *)local_b8);
      folly::dynamic::folly::dynamic::destroy(local_b8);
      if ((local_1f0 & 1) != 0) {
        operator_delete(local_1e0);
      }
    }
    PVar4 = param_1[0x758];
    PVar5 = pPVar1[0x758];
    sVar20 = *(size_t *)(param_1 + 0x760);
    uVar15 = (ulong)((byte)PVar4 >> 1);
    uVar16 = uVar15;
    if (((byte)PVar4 & 1) != 0) {
      uVar16 = sVar20;
    }
    uVar2 = (ulong)((byte)PVar5 >> 1);
    if (((byte)PVar5 & 1) != 0) {
      uVar2 = *(ulong *)(pPVar1 + 0x760);
    }
    if (uVar16 == uVar2) {
      pPVar14 = pPVar1 + 0x759;
      if (((byte)PVar5 & 1) != 0) {
        pPVar14 = *(Props **)(pPVar1 + 0x768);
      }
      if (((byte)PVar4 & 1) == 0) {
        if (1 < (byte)PVar4) {
          pPVar17 = param_1 + 0x759;
          do {
            if (*pPVar17 != *pPVar14) goto LAB_0083edec;
            uVar15 = uVar15 - 1;
            pPVar17 = pPVar17 + 1;
            pPVar14 = pPVar14 + 1;
          } while (uVar15 != 0);
        }
      }
      else {
        pcVar21 = *(char **)(param_1 + 0x768);
        iVar11 = memcmp(pcVar21,pPVar14,sVar20);
        if (iVar11 != 0) goto LAB_0083ee24;
      }
    }
    else {
LAB_0083edec:
      if (((byte)PVar4 & 1) == 0) {
        uStack_208 = *(ulong *)(param_1 + 0x760);
        local_210 = *(ulong *)(param_1 + 0x758);
        local_200 = *(void **)(param_1 + 0x768);
      }
      else {
        pcVar21 = *(char **)(param_1 + 0x768);
LAB_0083ee24:
                    /* try { // try from 0083ee24 to 0083ee33 has its CatchHandler @ 0083fc40 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_210,pcVar21,sVar20);
      }
      local_b8[0] = 6;
      uStack_a8 = uStack_208;
      local_b0 = local_210;
      local_a0 = local_200;
      local_210 = 0;
      uStack_208 = 0;
      local_200 = (void *)0x0;
                    /* try { // try from 0083ee54 to 0083ee67 has its CatchHandler @ 0083fca0 */
      pdVar13 = (dynamic *)folly::dynamic::operator[](in_x8,"sourceDotLottieURI","");
      folly::dynamic::operator=(pdVar13,(dynamic *)local_b8);
      folly::dynamic::folly::dynamic::destroy(local_b8);
      if ((local_210 & 1) != 0) {
        operator_delete(local_200);
      }
    }
    PVar4 = param_1[0x770];
    PVar5 = pPVar1[0x770];
    sVar20 = *(size_t *)(param_1 + 0x778);
    uVar15 = (ulong)((byte)PVar4 >> 1);
    uVar16 = uVar15;
    if (((byte)PVar4 & 1) != 0) {
      uVar16 = sVar20;
    }
    uVar2 = (ulong)((byte)PVar5 >> 1);
    if (((byte)PVar5 & 1) != 0) {
      uVar2 = *(ulong *)(pPVar1 + 0x778);
    }
    if (uVar16 == uVar2) {
      pPVar14 = pPVar1 + 0x771;
      if (((byte)PVar5 & 1) != 0) {
        pPVar14 = *(Props **)(pPVar1 + 0x780);
      }
      if (((byte)PVar4 & 1) == 0) {
        if (1 < (byte)PVar4) {
          pPVar17 = param_1 + 0x771;
          do {
            if (*pPVar17 != *pPVar14) goto LAB_0083eefc;
            uVar15 = uVar15 - 1;
            pPVar17 = pPVar17 + 1;
            pPVar14 = pPVar14 + 1;
          } while (uVar15 != 0);
        }
      }
      else {
        pcVar21 = *(char **)(param_1 + 0x780);
        iVar11 = memcmp(pcVar21,pPVar14,sVar20);
        if (iVar11 != 0) goto LAB_0083ef34;
      }
    }
    else {
LAB_0083eefc:
      if (((byte)PVar4 & 1) == 0) {
        uStack_228 = *(ulong *)(param_1 + 0x778);
        local_230 = *(ulong *)(param_1 + 0x770);
        local_220 = *(void **)(param_1 + 0x780);
      }
      else {
        pcVar21 = *(char **)(param_1 + 0x780);
LAB_0083ef34:
                    /* try { // try from 0083ef34 to 0083ef43 has its CatchHandler @ 0083fc38 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_230,pcVar21,sVar20);
      }
      local_b8[0] = 6;
      uStack_a8 = uStack_228;
      local_b0 = local_230;
      local_a0 = local_220;
      local_230 = 0;
      uStack_228 = 0;
      local_220 = (void *)0x0;
                    /* try { // try from 0083ef64 to 0083ef77 has its CatchHandler @ 0083fc80 */
      pdVar13 = (dynamic *)folly::dynamic::operator[](in_x8,"imageAssetsFolder","");
      folly::dynamic::operator=(pdVar13,(dynamic *)local_b8);
      folly::dynamic::folly::dynamic::destroy(local_b8);
      if ((local_230 & 1) != 0) {
        operator_delete(local_220);
      }
    }
    fVar24 = *(float *)(param_1 + 0x788);
    if ((fVar24 != *(float *)(pPVar1 + 0x788)) &&
       ((!NAN(fVar24) || (!NAN(*(float *)(pPVar1 + 0x788)))))) {
                    /* try { // try from 0083efb8 to 0083f1d7 has its CatchHandler @ 0083fd70 */
      piVar12 = (int *)folly::dynamic::operator[](in_x8,"progress","");
      if (*piVar12 != 3) {
        folly::dynamic::folly::dynamic::destroy(piVar12);
        *piVar12 = 3;
      }
      *(double *)(piVar12 + 2) = (double)fVar24;
    }
    dVar25 = *(double *)(param_1 + 0x790);
    if ((dVar25 != *(double *)(pPVar1 + 0x790)) &&
       ((!NAN(dVar25) || (!NAN(*(double *)(pPVar1 + 0x790)))))) {
      piVar12 = (int *)folly::dynamic::operator[](in_x8,"speed","");
      if (*piVar12 != 3) {
        folly::dynamic::folly::dynamic::destroy(piVar12);
        *piVar12 = 3;
      }
      *(double *)(piVar12 + 2) = dVar25;
    }
    PVar4 = param_1[0x798];
    if (PVar4 != pPVar1[0x798]) {
      piVar12 = (int *)folly::dynamic::operator[](in_x8,&DAT_00367aaa,&DAT_00367aae);
      if (*piVar12 != 2) {
        folly::dynamic::folly::dynamic::destroy(piVar12);
        *piVar12 = 2;
      }
      *(Props *)(piVar12 + 2) = PVar4;
    }
    PVar4 = param_1[0x799];
    if (PVar4 != pPVar1[0x799]) {
      piVar12 = (int *)folly::dynamic::operator[](in_x8,"autoPlay","");
      if (*piVar12 != 2) {
        folly::dynamic::folly::dynamic::destroy(piVar12);
        *piVar12 = 2;
      }
      *(Props *)(piVar12 + 2) = PVar4;
    }
    PVar4 = param_1[0x79a];
    if (PVar4 != pPVar1[0x79a]) {
      piVar12 = (int *)folly::dynamic::operator[]
                                 (in_x8,"enableMergePathsAndroidForKitKatAndAbove","");
      if (*piVar12 != 2) {
        folly::dynamic::folly::dynamic::destroy(piVar12);
        *piVar12 = 2;
      }
      *(Props *)(piVar12 + 2) = PVar4;
    }
    PVar4 = param_1[0x79b];
    if (PVar4 != pPVar1[0x79b]) {
      piVar12 = (int *)folly::dynamic::operator[](in_x8,"enableSafeModeAndroid","");
      if (*piVar12 != 2) {
        folly::dynamic::folly::dynamic::destroy(piVar12);
        *piVar12 = 2;
      }
      *(Props *)(piVar12 + 2) = PVar4;
    }
    PVar4 = param_1[0x79c];
    if (PVar4 != pPVar1[0x79c]) {
      piVar12 = (int *)folly::dynamic::operator[](in_x8,"hardwareAccelerationAndroid","");
      if (*piVar12 != 2) {
        folly::dynamic::folly::dynamic::destroy(piVar12);
        *piVar12 = 2;
      }
      *(Props *)(piVar12 + 2) = PVar4;
    }
    PVar4 = param_1[0x79d];
    if (PVar4 != pPVar1[0x79d]) {
      piVar12 = (int *)folly::dynamic::operator[](in_x8,"cacheComposition","");
      if (*piVar12 != 2) {
        folly::dynamic::folly::dynamic::destroy(piVar12);
        *piVar12 = 2;
      }
      *(Props *)(piVar12 + 2) = PVar4;
    }
    puVar22 = *(ulong **)(param_1 + 0x7a8);
    puVar23 = *(ulong **)(param_1 + 0x7a0);
    pbVar19 = *(byte **)(pPVar1 + 0x7a0);
    puVar10 = puVar23;
    if ((long)puVar22 - (long)puVar23 == *(long *)(pPVar1 + 0x7a8) - (long)pbVar19) {
      for (; puVar10 != puVar22; puVar10 = puVar10 + 4) {
        bVar6 = (byte)*puVar10;
        bVar7 = *pbVar19;
        sVar20 = (ulong)(bVar6 >> 1);
        if ((bVar6 & 1) != 0) {
          sVar20 = puVar10[1];
        }
        sVar3 = (ulong)(bVar7 >> 1);
        if ((bVar7 & 1) != 0) {
          sVar3 = *(size_t *)(pbVar19 + 8);
        }
        if (sVar20 != sVar3) goto LAB_0083f2cc;
        pbVar18 = *(byte **)(pbVar19 + 0x10);
        if ((bVar7 & 1) == 0) {
          pbVar18 = pbVar19 + 1;
        }
        if ((bVar6 & 1) == 0) {
          if (1 < bVar6) {
            uVar16 = 0;
            do {
              if (*(byte *)((long)puVar10 + uVar16 + 1) != pbVar18[uVar16]) goto LAB_0083f2cc;
              uVar16 = uVar16 + 1;
            } while (bVar6 >> 1 != uVar16);
          }
        }
        else {
          iVar11 = memcmp((void *)puVar10[2],pbVar18,puVar10[1]);
          if (iVar11 != 0) goto LAB_0083f2cc;
        }
        if ((int)puVar10[3] != *(int *)(pbVar19 + 0x18)) goto LAB_0083f2cc;
        pbVar19 = pbVar19 + 0x20;
      }
    }
    else {
LAB_0083f2cc:
      local_108 = (dynamic *)0x0;
      pdStack_100 = (dynamic *)0x0;
      local_118[0] = 1;
      local_110 = 0;
      for (; puVar23 != puVar22; puVar23 = puVar23 + 4) {
        local_b8[0] = 5;
        local_98 = 0;
        local_a0 = (void *)0x0;
        local_90 = 0x3f800000;
        local_b0 = 0;
        uStack_a8 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        local_d0 = 0;
        uStack_c8 = 0;
        local_e8[0] = 5;
        local_c0 = 0x3f800000;
        folly::dynamic::folly::dynamic::destroy(local_b8);
        if ((*puVar23 & 1) == 0) {
          local_120 = (void *)puVar23[2];
          uStack_128 = puVar23[1];
          local_130 = *puVar23;
        }
        else {
                    /* try { // try from 0083f380 to 0083f387 has its CatchHandler @ 0083fd78 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_130,(char *)puVar23[2],puVar23[1]);
        }
        uStack_a8 = uStack_128;
        local_b0 = local_130;
        local_130 = 0;
        uStack_128 = 0;
        local_b8[0] = 6;
        local_a0 = local_120;
        local_120 = (void *)0x0;
                    /* try { // try from 0083f3a8 to 0083f3b7 has its CatchHandler @ 0083fd9c */
        pdVar13 = (dynamic *)folly::dynamic::operator[](local_e8,"keypath","");
        folly::dynamic::operator=(pdVar13,(dynamic *)local_b8);
        folly::dynamic::folly::dynamic::destroy(local_b8);
        if ((local_130 & 1) != 0) {
          operator_delete(local_120);
        }
        local_b0 = (ulong)(int)puVar23[3];
        local_b8[0] = 4;
                    /* try { // try from 0083f3e4 to 0083f3f3 has its CatchHandler @ 0083fda0 */
        pdVar13 = (dynamic *)folly::dynamic::operator[](local_e8,"color","");
        folly::dynamic::operator=(pdVar13,(dynamic *)local_b8);
        folly::dynamic::folly::dynamic::destroy(local_b8);
        pdVar13 = local_108;
        if (local_118[0] != 1) {
          if (*(long *)(lVar8 + 0x28) == local_88) {
                    /* try { // try from 0083fbb0 to 0083fbbf has its CatchHandler @ 0083fd98 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099e338);
          }
          goto LAB_0083fdf8;
        }
        if (local_108 < pdStack_100) {
          folly::dynamic::dynamic(local_108,(dynamic *)local_e8);
          local_108 = pdVar13 + 0x30;
        }
        else {
                    /* try { // try from 0083f41c to 0083f42b has its CatchHandler @ 0083fd7c */
          local_108 = (dynamic *)FUN_00801fe4(&local_110,local_e8);
        }
        folly::dynamic::folly::dynamic::destroy(local_e8);
      }
                    /* try { // try from 0083f430 to 0083f447 has its CatchHandler @ 0083fd60 */
      pdVar13 = (dynamic *)folly::dynamic::operator[](in_x8,"colorFilters","");
      folly::dynamic::operator=(pdVar13,(dynamic *)local_118);
      folly::dynamic::folly::dynamic::destroy(local_118);
    }
    if (param_1[0x7b8] != pPVar1[0x7b8]) {
      local_98 = 0;
      local_b8[0] = 5;
      uStack_a8 = 0;
      local_a0 = (void *)0x0;
      local_90 = 0x3f800000;
      local_e8[0] = 5;
      local_b0 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0x3f800000;
      folly::dynamic::folly::dynamic::destroy(local_b8);
      PVar4 = param_1[0x7b8];
                    /* try { // try from 0083f4a4 to 0083f4bb has its CatchHandler @ 0083fc74 */
      piVar12 = (int *)folly::dynamic::operator[](local_e8,&DAT_0036737e,&DAT_00367383);
      if (*piVar12 != 2) {
        folly::dynamic::folly::dynamic::destroy(piVar12);
        *piVar12 = 2;
      }
      *(Props *)(piVar12 + 2) = PVar4;
                    /* try { // try from 0083f4e0 to 0083f4ef has its CatchHandler @ 0083fc70 */
      pdVar13 = (dynamic *)folly::dynamic::operator[](in_x8,&DAT_0036737e,&DAT_00367383);
      folly::dynamic::operator=(pdVar13,(dynamic *)local_e8);
      folly::dynamic::folly::dynamic::destroy(local_e8);
    }
    puVar22 = *(ulong **)(param_1 + 0x7c8);
    puVar23 = *(ulong **)(param_1 + 0x7c0);
    pbVar19 = *(byte **)(pPVar1 + 0x7c0);
    puVar10 = puVar23;
    if ((long)puVar22 - (long)puVar23 == *(long *)(pPVar1 + 0x7c8) - (long)pbVar19) {
      for (; puVar10 != puVar22; puVar10 = puVar10 + 6) {
        bVar6 = (byte)*puVar10;
        bVar7 = *pbVar19;
        sVar20 = (ulong)(bVar6 >> 1);
        if ((bVar6 & 1) != 0) {
          sVar20 = puVar10[1];
        }
        sVar3 = (ulong)(bVar7 >> 1);
        if ((bVar7 & 1) != 0) {
          sVar3 = *(size_t *)(pbVar19 + 8);
        }
        if (sVar20 != sVar3) goto LAB_0083f63c;
        pbVar18 = *(byte **)(pbVar19 + 0x10);
        if ((bVar7 & 1) == 0) {
          pbVar18 = pbVar19 + 1;
        }
        if ((bVar6 & 1) == 0) {
          if (1 < bVar6) {
            uVar16 = 0;
            do {
              if (*(byte *)((long)puVar10 + uVar16 + 1) != pbVar18[uVar16]) goto LAB_0083f63c;
              uVar16 = uVar16 + 1;
            } while (bVar6 >> 1 != uVar16);
          }
        }
        else {
          iVar11 = memcmp((void *)puVar10[2],pbVar18,puVar10[1]);
          if (iVar11 != 0) goto LAB_0083f63c;
        }
        bVar6 = (byte)puVar10[3];
        bVar7 = pbVar19[0x18];
        sVar20 = (ulong)(bVar6 >> 1);
        if ((bVar6 & 1) != 0) {
          sVar20 = puVar10[4];
        }
        sVar3 = (ulong)(bVar7 >> 1);
        if ((bVar7 & 1) != 0) {
          sVar3 = *(size_t *)(pbVar19 + 0x20);
        }
        if (sVar20 != sVar3) goto LAB_0083f63c;
        pbVar18 = pbVar19 + 0x19;
        if ((bVar7 & 1) != 0) {
          pbVar18 = *(byte **)(pbVar19 + 0x28);
        }
        if ((bVar6 & 1) == 0) {
          if (1 < bVar6) {
            uVar16 = 0;
            do {
              if (*(byte *)((long)puVar10 + uVar16 + 0x19) != pbVar18[uVar16]) goto LAB_0083f63c;
              uVar16 = uVar16 + 1;
            } while (bVar6 >> 1 != uVar16);
          }
        }
        else {
          iVar11 = memcmp((void *)puVar10[5],pbVar18,puVar10[4]);
          if (iVar11 != 0) goto LAB_0083f63c;
        }
        pbVar19 = pbVar19 + 0x30;
      }
    }
    else {
LAB_0083f63c:
      local_108 = (dynamic *)0x0;
      pdStack_100 = (dynamic *)0x0;
      local_118[0] = 1;
      local_110 = 0;
      for (; puVar23 != puVar22; puVar23 = puVar23 + 6) {
        local_b8[0] = 5;
        local_98 = 0;
        local_a0 = (void *)0x0;
        local_90 = 0x3f800000;
        local_b0 = 0;
        uStack_a8 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        local_d0 = 0;
        uStack_c8 = 0;
        local_e8[0] = 5;
        local_c0 = 0x3f800000;
        folly::dynamic::folly::dynamic::destroy(local_b8);
        if ((*puVar23 & 1) == 0) {
          local_120 = (void *)puVar23[2];
          uStack_128 = puVar23[1];
          local_130 = *puVar23;
        }
        else {
                    /* try { // try from 0083f6f0 to 0083f6f7 has its CatchHandler @ 0083fd90 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_130,(char *)puVar23[2],puVar23[1]);
        }
        uStack_a8 = uStack_128;
        local_b0 = local_130;
        local_b8[0] = 6;
        local_130 = 0;
        uStack_128 = 0;
        local_a0 = local_120;
        local_120 = (void *)0x0;
                    /* try { // try from 0083f714 to 0083f723 has its CatchHandler @ 0083fdfc */
        pdVar13 = (dynamic *)folly::dynamic::operator[](local_e8,&DAT_0036807a,&DAT_0036807e);
        folly::dynamic::operator=(pdVar13,(dynamic *)local_b8);
        folly::dynamic::folly::dynamic::destroy(local_b8);
        if ((local_130 & 1) != 0) {
          operator_delete(local_120);
        }
        if ((puVar23[3] & 1) == 0) {
          local_140 = (void *)puVar23[5];
          uStack_148 = puVar23[4];
          local_150 = puVar23[3];
        }
        else {
                    /* try { // try from 0083f768 to 0083f76f has its CatchHandler @ 0083fd8c */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_150,(char *)puVar23[5],puVar23[4]);
        }
        uStack_a8 = uStack_148;
        local_b0 = local_150;
        local_b8[0] = 6;
        local_150 = 0;
        uStack_148 = 0;
        local_a0 = local_140;
        local_140 = (void *)0x0;
                    /* try { // try from 0083f78c to 0083f79b has its CatchHandler @ 0083fe1c */
        pdVar13 = (dynamic *)folly::dynamic::operator[](local_e8,"replace","");
        folly::dynamic::operator=(pdVar13,(dynamic *)local_b8);
        folly::dynamic::folly::dynamic::destroy(local_b8);
        if ((local_150 & 1) != 0) {
          operator_delete(local_140);
        }
        pdVar13 = local_108;
        if (local_118[0] != 1) {
          if (*(long *)(lVar8 + 0x28) == local_88) {
                    /* try { // try from 0083fb68 to 0083fb77 has its CatchHandler @ 0083fdbc */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099e338);
          }
          goto LAB_0083fdf8;
        }
        if (local_108 < pdStack_100) {
          folly::dynamic::dynamic(local_108,(dynamic *)local_e8);
          local_108 = pdVar13 + 0x30;
        }
        else {
                    /* try { // try from 0083f7d4 to 0083f7e3 has its CatchHandler @ 0083fd94 */
          local_108 = (dynamic *)FUN_00801fe4(&local_110,local_e8);
        }
        folly::dynamic::folly::dynamic::destroy(local_e8);
      }
                    /* try { // try from 0083f7e8 to 0083f7fb has its CatchHandler @ 0083fd68 */
      pdVar13 = (dynamic *)folly::dynamic::operator[](in_x8,"textFiltersAndroid","");
      folly::dynamic::operator=(pdVar13,(dynamic *)local_118);
      folly::dynamic::folly::dynamic::destroy(local_118);
    }
    puVar22 = *(ulong **)(param_1 + 0x7e0);
    puVar23 = *(ulong **)(param_1 + 0x7d8);
    pbVar19 = *(byte **)(pPVar1 + 0x7d8);
    puVar10 = puVar23;
    if ((long)puVar22 - (long)puVar23 == *(long *)(pPVar1 + 0x7e0) - (long)pbVar19) {
      for (; puVar10 != puVar22; puVar10 = puVar10 + 6) {
        bVar6 = (byte)*puVar10;
        bVar7 = *pbVar19;
        sVar20 = (ulong)(bVar6 >> 1);
        if ((bVar6 & 1) != 0) {
          sVar20 = puVar10[1];
        }
        sVar3 = (ulong)(bVar7 >> 1);
        if ((bVar7 & 1) != 0) {
          sVar3 = *(size_t *)(pbVar19 + 8);
        }
        if (sVar20 != sVar3) goto LAB_0083f94c;
        pbVar18 = *(byte **)(pbVar19 + 0x10);
        if ((bVar7 & 1) == 0) {
          pbVar18 = pbVar19 + 1;
        }
        if ((bVar6 & 1) == 0) {
          if (1 < bVar6) {
            uVar16 = 0;
            do {
              if (*(byte *)((long)puVar10 + uVar16 + 1) != pbVar18[uVar16]) goto LAB_0083f94c;
              uVar16 = uVar16 + 1;
            } while (bVar6 >> 1 != uVar16);
          }
        }
        else {
          iVar11 = memcmp((void *)puVar10[2],pbVar18,puVar10[1]);
          if (iVar11 != 0) goto LAB_0083f94c;
        }
        bVar6 = (byte)puVar10[3];
        bVar7 = pbVar19[0x18];
        sVar20 = (ulong)(bVar6 >> 1);
        if ((bVar6 & 1) != 0) {
          sVar20 = puVar10[4];
        }
        sVar3 = (ulong)(bVar7 >> 1);
        if ((bVar7 & 1) != 0) {
          sVar3 = *(size_t *)(pbVar19 + 0x20);
        }
        if (sVar20 != sVar3) goto LAB_0083f94c;
        pbVar18 = pbVar19 + 0x19;
        if ((bVar7 & 1) != 0) {
          pbVar18 = *(byte **)(pbVar19 + 0x28);
        }
        if ((bVar6 & 1) == 0) {
          if (1 < bVar6) {
            uVar16 = 0;
            do {
              if (*(byte *)((long)puVar10 + uVar16 + 0x19) != pbVar18[uVar16]) goto LAB_0083f94c;
              uVar16 = uVar16 + 1;
            } while (bVar6 >> 1 != uVar16);
          }
        }
        else {
          iVar11 = memcmp((void *)puVar10[5],pbVar18,puVar10[4]);
          if (iVar11 != 0) goto LAB_0083f94c;
        }
        pbVar19 = pbVar19 + 0x30;
      }
      goto LAB_0083fb1c;
    }
LAB_0083f94c:
    local_108 = (dynamic *)0x0;
    pdStack_100 = (dynamic *)0x0;
    local_118[0] = 1;
    local_110 = 0;
    for (; puVar23 != puVar22; puVar23 = puVar23 + 6) {
      local_b8[0] = 5;
      local_98 = 0;
      local_a0 = (void *)0x0;
      local_90 = 0x3f800000;
      local_b0 = 0;
      uStack_a8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e8[0] = 5;
      local_c0 = 0x3f800000;
      folly::dynamic::folly::dynamic::destroy(local_b8);
      if ((*puVar23 & 1) == 0) {
        local_120 = (void *)puVar23[2];
        uStack_128 = puVar23[1];
        local_130 = *puVar23;
      }
      else {
                    /* try { // try from 0083fa00 to 0083fa07 has its CatchHandler @ 0083fd84 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_130,(char *)puVar23[2],puVar23[1]);
      }
      uStack_a8 = uStack_128;
      local_b0 = local_130;
      local_b8[0] = 6;
      local_130 = 0;
      uStack_128 = 0;
      local_a0 = local_120;
      local_120 = (void *)0x0;
                    /* try { // try from 0083fa24 to 0083fa33 has its CatchHandler @ 0083fdb4 */
      pdVar13 = (dynamic *)folly::dynamic::operator[](local_e8,"keypath","");
      folly::dynamic::operator=(pdVar13,(dynamic *)local_b8);
      folly::dynamic::folly::dynamic::destroy(local_b8);
      if ((local_130 & 1) != 0) {
        operator_delete(local_120);
      }
      if ((puVar23[3] & 1) == 0) {
        local_140 = (void *)puVar23[5];
        uStack_148 = puVar23[4];
        local_150 = puVar23[3];
      }
      else {
                    /* try { // try from 0083fa78 to 0083fa7f has its CatchHandler @ 0083fd80 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_150,(char *)puVar23[5],puVar23[4]);
      }
      uStack_a8 = uStack_148;
      local_b0 = local_150;
      local_b8[0] = 6;
      local_150 = 0;
      uStack_148 = 0;
      local_a0 = local_140;
      local_140 = (void *)0x0;
                    /* try { // try from 0083fa9c to 0083faab has its CatchHandler @ 0083fdb8 */
      pdVar13 = (dynamic *)folly::dynamic::operator[](local_e8,&DAT_003697cb,&DAT_003697cf);
      folly::dynamic::operator=(pdVar13,(dynamic *)local_b8);
      folly::dynamic::folly::dynamic::destroy(local_b8);
      if ((local_150 & 1) != 0) {
        operator_delete(local_140);
      }
      pdVar13 = local_108;
      if (local_118[0] != 1) {
        if (*(long *)(lVar8 + 0x28) == local_88) {
                    /* try { // try from 0083fb8c to 0083fb9b has its CatchHandler @ 0083fdb0 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099e338);
        }
        goto LAB_0083fdf8;
      }
      if (local_108 < pdStack_100) {
        folly::dynamic::dynamic(local_108,(dynamic *)local_e8);
        local_108 = pdVar13 + 0x30;
      }
      else {
                    /* try { // try from 0083fae4 to 0083faf3 has its CatchHandler @ 0083fd88 */
        local_108 = (dynamic *)FUN_00801fe4(&local_110,local_e8);
      }
      folly::dynamic::folly::dynamic::destroy(local_e8);
    }
                    /* try { // try from 0083faf8 to 0083fb0b has its CatchHandler @ 0083fd64 */
    pdVar13 = (dynamic *)folly::dynamic::operator[](in_x8,"textFiltersIOS","");
    folly::dynamic::operator=(pdVar13,(dynamic *)local_118);
    lVar9 = -0xb8;
  }
  folly::dynamic::folly::dynamic::destroy(&stack0xffffffffffffffa0 + lVar9);
LAB_0083fb1c:
  if (*(long *)(lVar8 + 0x28) == local_88) {
    return;
  }
LAB_0083fdf8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0083fe3c  FUN_0083fe3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0083fe3c(void)

{
  FUN_00788b10(&DAT_009b8130,PTR_PTR_0099e428 + 0x10);
  DAT_009b870c = 0;
  DAT_009b8710 = 0;
  DAT_009b8770 = 0;
  DAT_009b8778 = 0;
  DAT_009b87d8 = 0;
  DAT_009b87e8 = 0;
  DAT_009b87ec = 0;
  DAT_009b87f0 = 0;
  DAT_009b87f4 = 0;
  DAT_009b87f8 = 0;
  DAT_009b87fc = 0;
  DAT_009b8800 = 0;
  DAT_009b8804 = 0;
  DAT_009b8808 = 0;
  DAT_009b880c = 0;
  uRam00000000009b88a8 = 0;
  _DAT_009b88a0 = 0;
  DAT_009b87e0 = 0;
  DAT_009b87e4 = 0;
  DAT_009b8130 = PTR_vtable_0099e420 + 0x20;
  uRam00000000009b88b4 = 0;
  _DAT_009b88ac = 0;
  uRam00000000009b88b0 = 0;
  uRam00000000009b8818 = 0;
  _DAT_009b8810 = 0;
  uRam00000000009b8828 = 0;
  _DAT_009b8820 = 0;
  uRam00000000009b8838 = 0;
  _DAT_009b8830 = 0;
  uRam00000000009b8848 = 0;
  _DAT_009b8840 = 0;
  uRam00000000009b8858 = 0;
  _DAT_009b8850 = 0;
  uRam00000000009b8868 = 0;
  _DAT_009b8860 = 0;
  uRam00000000009b8878 = 0;
  _DAT_009b8870 = 0;
  uRam00000000009b8888 = 0;
  _DAT_009b8880 = 0;
  uRam00000000009b8898 = 0;
  _DAT_009b8890 = 0;
  uRam00000000009b88c8 = 0;
  DAT_009b88c0._0_6_ = 0;
  DAT_009b88c0._6_2_ = 0;
  DAT_009b88e0 = 0;
  uRam00000000009b88d8 = 0;
  _DAT_009b88d0 = 0;
  DAT_009b88e8 = 0;
  uRam00000000009b88f8 = 0;
  _DAT_009b88f0 = 0;
  uRam00000000009b8908 = 0;
  _DAT_009b8900 = 0;
  uRam00000000009b8918 = 0;
  _DAT_009b8910 = 0;
  return;
}


// ===== 0083ff1c  FUN_0083ff1c =====

void FUN_0083ff1c(undefined8 param_1)

{
  FUN_0083b95c(param_1,PTR_PTR_0099e428);
  return;
}


// ===== 0083ff28  FUN_0083ff28 =====

void FUN_0083ff28(void *param_1)

{
  FUN_0083b95c(param_1,PTR_PTR_0099e428);
  operator_delete(param_1);
  return;
}


// ===== 0083ff54  FUN_0083ff54 =====

void FUN_0083ff54(byte *param_1)

{
  if ((param_1[0x18] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  if ((*param_1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 0083ff98  FUN_0083ff98 =====

void FUN_0083ff98(byte *param_1)

{
  if ((param_1[0x18] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  if ((*param_1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 0083ffdc  FUN_0083ffdc =====

void FUN_0083ffdc(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar13;
  undefined8 unaff_x24;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar14;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar15;
  undefined8 uVar16;
  long local_f8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  byte local_c8;
  undefined5 uStack_c7;
  undefined1 uStack_c2;
  undefined1 uStack_c1;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  char *local_b8;
  ulong local_b0;
  ulong uStack_a8;
  char *local_a0;
  undefined4 local_98 [2];
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_90;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_80;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_78;
  undefined8 *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (*(int *)(param_2 + 6) == 1) {
    FUN_00817594(&local_e0,*param_2,param_2 + 1,0);
  }
  else {
    if (*(int *)(param_2 + 6) != 0) {
      if (*(long *)(lVar3 + 0x28) == local_68) {
        uVar8 = FUN_00807a38();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00840284 with catch @ 008404a4
                        */
        param_3[1] = unaff_x24;
        if ((local_b0 & 1) != 0) {
          operator_delete(local_a0);
        }
        FUN_00817320(&local_e0);
        if (*(long *)(local_f8 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_00751c7c(uVar8);
        }
      }
      goto LAB_00840534;
    }
    FUN_008173e8(&local_e0,param_2,0);
  }
  puVar5 = local_d8;
  if (local_e0 != local_d8) {
    puVar1 = param_3 + 2;
    puVar12 = (undefined4 *)((ulong)&local_c8 | 1);
    puVar11 = local_e0;
    do {
      local_b0 = 0;
      uStack_a8 = 0;
      local_98[0] = 0;
      local_a0 = (char *)0x0;
      if (*(int *)(puVar11 + 6) != 1) {
        if (*(int *)(puVar11 + 6) == 0) {
                    /* try { // try from 008400a0 to 008400c7 has its CatchHandler @ 008404fc */
          FUN_008118bc(&local_90,puVar11,0);
          goto LAB_008400c8;
        }
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 0084045c to 0084045f has its CatchHandler @ 008404c4 */
          FUN_00807a38();
LAB_00840460:
          if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 00840474 to 0084048f has its CatchHandler @ 008404d4 */
            FUN_00840720();
LAB_00840478:
            if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_00756920();
            }
          }
        }
        goto LAB_00840534;
      }
      FUN_00811aa8(&local_90,*puVar11,puVar11 + 1,0);
LAB_008400c8:
      uStack_c0 = 0;
      local_c8 = 0xe;
      *puVar12 = 0x7079656b;
      *(undefined4 *)((long)puVar12 + 3) = 0x68746170;
                    /* try { // try from 008400ec to 008400f7 has its CatchHandler @ 008404d8 */
      lVar6 = FUN_00817c7c(&local_90,&local_c8);
      if ((local_c8 & 1) != 0) {
        operator_delete(local_b8);
      }
      if (lVar6 != 0) {
                    /* try { // try from 00840110 to 0084011b has its CatchHandler @ 008404cc */
        FUN_00807a6c(&local_c8,lVar6 + 0x28);
        if ((local_b0 & 1) != 0) {
          operator_delete(local_a0);
        }
        uStack_a8 = CONCAT71(uStack_bf,uStack_c0);
        local_b0 = CONCAT17(uStack_c1,CONCAT16(uStack_c2,CONCAT51(uStack_c7,local_c8)));
        local_a0 = local_b8;
      }
      uStack_c2 = 0;
      local_c8 = 10;
      *puVar12 = 0x6f6c6f63;
      *(undefined1 *)(puVar12 + 1) = 0x72;
                    /* try { // try from 0084015c to 00840167 has its CatchHandler @ 008404dc */
      lVar6 = FUN_00817c7c(&local_90,&local_c8);
      if ((local_c8 & 1) != 0) {
        operator_delete(local_b8);
      }
      pbVar14 = local_90;
      pbVar13 = local_80;
      if (lVar6 != 0) {
                    /* try { // try from 00840188 to 0084019f has its CatchHandler @ 008404c8 */
        FUN_00807f90(*(undefined8 *)(param_1 + 2),*param_1,lVar6 + 0x28,local_98,
                     PTR_parsePlatformColor_0099e140);
        pbVar14 = local_90;
        pbVar13 = local_80;
      }
      while (pbVar13 !=
             (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0)
      {
        pbVar10 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                    **)pbVar13;
        local_90 = pbVar14;
        if (*(uint *)(pbVar13 + 0x58) != 0xffffffff) {
                    /* try { // try from 00840204 to 0084020f has its CatchHandler @ 00840538 */
          (*(code *)(&PTR_FUN_0098dab8)[*(uint *)(pbVar13 + 0x58)])(&local_c8,pbVar13 + 0x28);
        }
        *(undefined4 *)(pbVar13 + 0x58) = 0xffffffff;
        if (((byte)pbVar13[0x10] & 1) != 0) {
          operator_delete(*(void **)(pbVar13 + 0x20));
        }
        operator_delete(pbVar13);
        pbVar14 = local_90;
        pbVar13 = pbVar10;
      }
      local_90 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 0x0;
      if (pbVar14 !=
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0) {
        operator_delete(pbVar14);
      }
      pbVar14 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                param_3[1];
      if (pbVar14 < (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)param_3[2]) {
        if ((local_b0 & 1) == 0) {
          *(char **)(pbVar14 + 0x10) = local_a0;
          *(ulong *)(pbVar14 + 8) = uStack_a8;
          *(ulong *)pbVar14 = local_b0;
        }
        else {
                    /* try { // try from 00840284 to 0084028b has its CatchHandler @ 008404a4 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external(pbVar14,local_a0,uStack_a8);
        }
        pbVar15 = pbVar14 + 0x20;
        *(undefined4 *)(pbVar14 + 0x18) = local_98[0];
        param_3[1] = pbVar15;
      }
      else {
        pbVar13 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  *param_3;
        lVar6 = (long)pbVar14 - (long)pbVar13 >> 5;
        uVar2 = lVar6 + 1;
        if (uVar2 >> 0x3b != 0) goto LAB_00840460;
        uVar7 = (long)param_3[2] - (long)pbVar13;
        uVar9 = (long)uVar7 >> 4;
        if (uVar9 <= uVar2) {
          uVar9 = uVar2;
        }
        if (0x7fffffffffffffdf < uVar7) {
          uVar9 = 0x7ffffffffffffff;
        }
        local_70 = puVar1;
        if (uVar9 == 0) {
          local_90 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)0x0;
        }
        else {
          if (uVar9 >> 0x3b != 0) goto LAB_00840478;
                    /* try { // try from 00840278 to 0084027b has its CatchHandler @ 008404fc */
          local_90 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)operator_new(uVar9 << 5);
        }
        pbVar10 = local_90 + lVar6 * 0x20;
        local_78 = local_90 + uVar9 * 0x20;
        local_88 = pbVar10;
        local_80 = pbVar10;
        if ((local_b0 & 1) == 0) {
          *(ulong *)(pbVar10 + 8) = uStack_a8;
          *(ulong *)pbVar10 = local_b0;
          *(char **)(pbVar10 + 0x10) = local_a0;
        }
        else {
                    /* try { // try from 008402dc to 008402e3 has its CatchHandler @ 008404b0 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external(pbVar10,local_a0,uStack_a8);
          pbVar13 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)*param_3;
          pbVar14 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)param_3[1];
        }
        *(undefined4 *)(pbVar10 + 0x18) = local_98[0];
        pbVar10 = pbVar13;
        if (pbVar14 != pbVar13) {
          do {
            uVar16 = *(undefined8 *)(pbVar14 + -0x18);
            uVar8 = *(undefined8 *)(pbVar14 + -0x20);
            pbVar10 = pbVar14 + -0x20;
            *(undefined8 *)(local_88 + -0x10) = *(undefined8 *)(pbVar14 + -0x10);
            *(undefined8 *)(local_88 + -0x18) = uVar16;
            *(undefined8 *)(local_88 + -0x20) = uVar8;
            *(undefined8 *)(pbVar14 + -0x18) = 0;
            *(undefined8 *)(pbVar14 + -0x10) = 0;
            *(undefined8 *)(pbVar14 + -0x20) = 0;
            *(undefined4 *)(local_88 + -8) = *(undefined4 *)(pbVar14 + -8);
            local_88 = local_88 + -0x20;
            pbVar14 = pbVar10;
          } while (pbVar10 != pbVar13);
          pbVar13 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)param_3[1];
          pbVar10 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)*param_3;
        }
        pbVar15 = local_80 + 0x20;
        *param_3 = local_88;
        param_3[1] = pbVar15;
        uVar8 = param_3[2];
        param_3[2] = local_78;
        local_78 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )uVar8;
        pbVar14 = pbVar13;
        local_90 = pbVar10;
        local_88 = pbVar10;
        while (pbVar4 = pbVar13, pbVar4 != pbVar10) {
          pbVar13 = pbVar4 + -0x20;
          pbVar14 = pbVar10;
          local_80 = pbVar13;
          if (((byte)*pbVar13 & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + -0x10));
          }
        }
        if (pbVar14 !=
            (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0) {
          operator_delete(pbVar14);
        }
      }
      param_3[1] = pbVar15;
      if ((local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
      puVar11 = puVar11 + 7;
    } while (puVar11 != puVar5);
  }
  puVar1 = local_e0;
  puVar5 = local_d8;
  if (local_e0 != (undefined8 *)0x0) {
    while (puVar5 != puVar1) {
      if (*(uint *)(puVar5 + -1) != 0xffffffff) {
                    /* try { // try from 008403fc to 00840407 has its CatchHandler @ 008404c0 */
        (*(code *)(&PTR_FUN_0098dab8)[*(uint *)(puVar5 + -1)])(&local_90,puVar5 + -7);
      }
      *(undefined4 *)(puVar5 + -1) = 0xffffffff;
      puVar5 = puVar5 + -7;
    }
    local_d8 = puVar1;
    operator_delete(local_e0);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
LAB_00840534:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0084053c  FUN_0084053c =====

void FUN_0084053c(undefined8 *param_1,byte *param_2,byte *param_3,ulong param_4)

{
  byte *pbVar1;
  long lVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  undefined8 uVar3;
  undefined8 uVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_80;
  undefined8 *local_78;
  undefined1 local_70;
  long *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **ppbStack_60;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **local_58;
  undefined1 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_70 = 0;
  local_78 = param_1;
  if (param_4 != 0) {
    if (param_4 >> 0x3b != 0) {
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 00840654 to 00840657 has its CatchHandler @ 00840658 */
        uVar3 = FUN_00840720();
                    /* catch() { ... } // from try @ 00840588 with catch @ 00840658
                       catch() { ... } // from try @ 00840654 with catch @ 00840658 */
        FUN_00840694(&local_78);
        if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_00751c7c(uVar3);
        }
      }
      goto LAB_00840690;
    }
                    /* try { // try from 00840588 to 0084058b has its CatchHandler @ 00840658 */
    this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           operator_new(param_4 << 5);
    *param_1 = this;
    param_1[1] = this;
    local_68 = param_1 + 2;
    *local_68 = (long)(this + param_4 * 0x20);
    ppbStack_60 = &local_88;
    local_58 = &local_80;
    local_50 = 0;
    local_88 = this;
    if (param_2 != param_3) {
      do {
        local_80 = this;
        if ((*param_2 & 1) == 0) {
          uVar4 = *(undefined8 *)(param_2 + 8);
          uVar3 = *(undefined8 *)param_2;
          *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_2 + 0x10);
          *(undefined8 *)(this + 8) = uVar4;
          *(undefined8 *)this = uVar3;
        }
        else {
                    /* try { // try from 00840604 to 0084060b has its CatchHandler @ 00840660 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external(this,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
        }
        pbVar1 = param_2 + 0x18;
        param_2 = param_2 + 0x20;
        *(undefined4 *)(this + 0x18) = *(undefined4 *)pbVar1;
        this = local_80 + 0x20;
      } while (param_2 != param_3);
    }
    param_1[1] = this;
    local_80 = this;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_00840690:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00840694  FUN_00840694 =====

void FUN_00840694(undefined8 *param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (*(char *)(param_1 + 1) == '\0') {
    puVar2 = (undefined8 *)*param_1;
    pbVar3 = (byte *)*puVar2;
    if (pbVar3 != (byte *)0x0) {
      pbVar1 = (byte *)puVar2[1];
      pbVar4 = pbVar3;
      if (pbVar1 != pbVar3) {
        do {
          pbVar4 = pbVar1 + -0x20;
          if ((*pbVar4 & 1) != 0) {
            operator_delete(*(void **)(pbVar1 + -0x10));
          }
          pbVar1 = pbVar4;
        } while (pbVar4 != pbVar3);
        pbVar4 = *(byte **)*param_1;
      }
      puVar2[1] = pbVar3;
      operator_delete(pbVar4);
      return;
    }
  }
  return;
}


// ===== 00840720  FUN_00840720 =====

void FUN_00840720(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_007568a0("vector");
}


// ===== 00840734  FUN_00840734 =====

void FUN_00840734(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    pbVar2 = (byte *)**(undefined8 **)(param_1 + 8);
    pbVar3 = (byte *)**(undefined8 **)(param_1 + 0x10);
    while (pbVar1 = pbVar3, pbVar1 != pbVar2) {
      pbVar3 = pbVar1 + -0x20;
      if ((*pbVar3 & 1) != 0) {
        operator_delete(*(void **)(pbVar1 + -0x10));
      }
    }
    return;
  }
  return;
}


// ===== 00840794  FUN_00840794 =====

void FUN_00840794(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  while (lVar2 = lVar3, lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x20;
    lVar3 = lVar2 + -0x20;
    if ((*(byte *)(lVar2 + -0x20) & 1) != 0) {
      operator_delete(*(void **)(lVar2 + -0x10));
      lVar3 = param_1[2];
    }
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 008407fc  FUN_008407fc =====

void FUN_008407fc(undefined8 *param_1,byte *param_2)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  byte bVar4;
  long lVar5;
  void *pvVar6;
  byte local_88;
  undefined4 local_87;
  undefined2 local_83;
  void *local_78;
  void *local_70 [2];
  void *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 6) == 1) {
    FUN_00811aa8(local_70,*param_1,param_1 + 1,0);
LAB_0084085c:
    local_88 = 10;
    local_87 = 0x6d6d7564;
    local_83 = 0x79;
                    /* try { // try from 00840878 to 00840883 has its CatchHandler @ 008409c0 */
    lVar5 = FUN_00817c7c(local_70,&local_88);
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
    pvVar2 = local_70[0];
    puVar3 = (undefined8 *)local_60;
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x58) == 1) {
                    /* try { // try from 008408c8 to 008408cf has its CatchHandler @ 008409b8 */
        bVar4 = facebook::jsi::Value::asBool();
      }
      else {
        if (*(int *)(lVar5 + 0x58) != 0) goto LAB_00840984;
        if (*(int *)(lVar5 + 0x28) != 2) goto LAB_00840998;
        bVar4 = *(char *)(lVar5 + 0x30) != '\0';
      }
      *param_2 = bVar4 & 1;
      pvVar2 = local_70[0];
      puVar3 = (undefined8 *)local_60;
    }
    while (puVar3 != (undefined8 *)0x0) {
      pvVar6 = (void *)*puVar3;
      local_70[0] = pvVar2;
      if (*(uint *)(puVar3 + 0xb) != 0xffffffff) {
                    /* try { // try from 00840914 to 0084091f has its CatchHandler @ 008409f8 */
        (*(code *)(&PTR_FUN_0098dab8)[*(uint *)(puVar3 + 0xb)])(&local_88,puVar3 + 5);
      }
      *(undefined4 *)(puVar3 + 0xb) = 0xffffffff;
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        operator_delete((void *)puVar3[4]);
      }
      operator_delete(puVar3);
      pvVar2 = local_70[0];
      puVar3 = (undefined8 *)pvVar6;
    }
    local_70[0] = (void *)0x0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else {
    if (*(int *)(param_1 + 6) == 0) {
      FUN_008118bc(local_70,param_1,0);
      goto LAB_0084085c;
    }
    if (*(long *)(lVar1 + 0x28) != local_48) goto LAB_008409f4;
    FUN_00807a38();
LAB_00840984:
    if (*(long *)(lVar1 + 0x28) != local_48) goto LAB_008409f4;
                    /* try { // try from 00840994 to 008409b7 has its CatchHandler @ 008409b8 */
    FUN_00807a38();
LAB_00840998:
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00789f8c(*(undefined8 *)PTR_name_0099e368);
    }
  }
LAB_008409f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008409fc  FUN_008409fc =====

void FUN_008409fc(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  undefined8 uVar6;
  long unaff_x19;
  undefined8 unaff_x24;
  undefined8 *local_68;
  undefined1 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = *param_2;
  lVar2 = param_2[1];
  local_60 = 0;
  uVar3 = lVar2 - lVar1;
  local_68 = param_1;
  if (uVar3 != 0) {
    if (0x555555555555555 < (ulong)(((long)uVar3 >> 4) * -0x5555555555555555)) {
      if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* try { // try from 00840ad8 to 00840adb has its CatchHandler @ 00840ae8 */
        uVar6 = FUN_008411e0();
                    /* catch() { ... } // from try @ 00840a84 with catch @ 00840adc */
        *(undefined8 *)(unaff_x19 + 8) = unaff_x24;
        FUN_00841148(&local_68);
        if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_00751c7c(uVar6);
        }
      }
      goto LAB_00840b0c;
    }
                    /* try { // try from 00840a68 to 00840a73 has its CatchHandler @ 00840ae8 */
    pvVar5 = operator_new(uVar3);
    *param_1 = pvVar5;
    param_1[1] = pvVar5;
    param_1[2] = (long)pvVar5 + uVar3;
                    /* try { // try from 00840a84 to 00840a97 has its CatchHandler @ 00840adc */
    uVar6 = FUN_008411f4(param_1 + 2,lVar1,lVar2,pvVar5);
    param_1[1] = uVar6;
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
LAB_00840b0c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00840b10  FUN_00840b10 =====

void FUN_00840b10(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  void *pvVar7;
  undefined8 uVar8;
  long lVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar10;
  ulong uVar11;
  void *pvVar12;
  undefined8 *puVar13;
  byte *unaff_x21;
  void *pvVar14;
  undefined8 uVar15;
  long local_118;
  ulong local_100;
  ulong uStack_f8;
  char *local_f0;
  ulong uStack_e8;
  ulong local_e0;
  char *local_d8;
  undefined8 *local_c8;
  undefined8 *local_c0;
  byte local_b0;
  undefined4 uStack_af;
  undefined1 uStack_ab;
  undefined2 uStack_aa;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  char *local_a0;
  void *local_98;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_90;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_88;
  void *local_80;
  long *local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  if (*(int *)(param_1 + 6) == 1) {
    FUN_00817594(&local_c8,*param_1,param_1 + 1,0);
  }
  else {
    if (*(int *)(param_1 + 6) != 0) {
      if (*(long *)(lVar4 + 0x28) == local_70) {
        uVar8 = FUN_00807a38();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00840e14 with catch @ 00841084
                        */
        if ((*unaff_x21 & 1) == 0) {
          param_2[1] = (long)unaff_x21;
        }
        else {
          operator_delete(*(void **)(unaff_x21 + 0x10));
          param_2[1] = (long)unaff_x21;
        }
        FUN_0083ff54(&local_100);
        FUN_00817320(&local_c8);
        if (*(long *)(local_118 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
          FUN_00751c7c(uVar8);
        }
      }
      goto LAB_00841140;
    }
    FUN_008173e8(&local_c8,param_1,0);
  }
  puVar5 = local_c0;
  if (local_c8 != local_c0) {
    plVar1 = param_2 + 2;
    puVar13 = local_c8;
    do {
      uStack_e8 = 0;
      local_f0 = (char *)0x0;
      local_d8 = (char *)0x0;
      local_e0 = 0;
      uStack_f8 = 0;
      local_100 = 0;
      if (*(int *)(puVar13 + 6) != 1) {
        if (*(int *)(puVar13 + 6) == 0) {
                    /* try { // try from 00840bd8 to 00840bff has its CatchHandler @ 00841110 */
          FUN_008118bc(&local_98,puVar13,0);
          goto LAB_00840c00;
        }
LAB_00841040:
        if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 00841054 to 00841057 has its CatchHandler @ 008410d8 */
          FUN_00807a38();
LAB_00841058:
          if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0084106c to 0084106f has its CatchHandler @ 008410e8 */
            FUN_00756920();
          }
        }
        goto LAB_00841140;
      }
      FUN_00811aa8(&local_98,*puVar13,puVar13 + 1,0);
LAB_00840c00:
      uStack_ab = 0;
      local_b0 = 8;
      uStack_af = 0x646e6966;
                    /* try { // try from 00840c18 to 00840c23 has its CatchHandler @ 008410ec */
      lVar6 = FUN_00817c7c(&local_98,&local_b0);
      if ((local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
      if (lVar6 != 0) {
                    /* try { // try from 00840c3c to 00840c47 has its CatchHandler @ 008410e0 */
        FUN_00807a6c(&local_b0,lVar6 + 0x28);
        if ((local_100 & 1) != 0) {
          operator_delete(local_f0);
        }
        uStack_f8 = CONCAT71(uStack_a7,uStack_a8);
        local_100 = CONCAT26(uStack_aa,CONCAT15(uStack_ab,CONCAT41(uStack_af,local_b0)));
        local_f0 = local_a0;
      }
      uStack_a8 = 0;
      local_b0 = 0xe;
      *(undefined4 *)((ulong)&local_b0 | 1) = 0x6c706572;
      *(undefined4 *)((long)((ulong)&local_b0 | 1) + 3) = 0x6563616c;
                    /* try { // try from 00840c8c to 00840c97 has its CatchHandler @ 008410f0 */
      lVar6 = FUN_00817c7c(&local_98,&local_b0);
      if ((local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
      pvVar7 = local_98;
      pbVar3 = local_88;
      if (lVar6 != 0) {
                    /* try { // try from 00840cb0 to 00840cbb has its CatchHandler @ 008410dc */
        FUN_00807a6c(&local_b0,lVar6 + 0x28);
        if ((uStack_e8 & 1) != 0) {
          operator_delete(local_d8);
        }
        local_e0 = CONCAT71(uStack_a7,uStack_a8);
        uStack_e8 = CONCAT26(uStack_aa,CONCAT15(uStack_ab,CONCAT41(uStack_af,local_b0)));
        local_d8 = local_a0;
        pvVar7 = local_98;
        pbVar3 = local_88;
      }
      while (pbVar3 != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)0x0) {
        pbVar10 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                    **)pbVar3;
        local_98 = pvVar7;
        if (*(uint *)(pbVar3 + 0x58) != 0xffffffff) {
                    /* try { // try from 00840d40 to 00840d4b has its CatchHandler @ 00841144 */
          (*(code *)(&PTR_FUN_0098dab8)[*(uint *)(pbVar3 + 0x58)])(&local_b0,pbVar3 + 0x28);
        }
        *(undefined4 *)(pbVar3 + 0x58) = 0xffffffff;
        if (((byte)pbVar3[0x10] & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + 0x20));
        }
        operator_delete(pbVar3);
        pvVar7 = local_98;
        pbVar3 = pbVar10;
      }
      local_98 = (void *)0x0;
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
      }
      pbVar3 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               param_2[1];
      if (pbVar3 < (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )param_2[2]) {
        if ((local_100 & 1) == 0) {
          *(ulong *)(pbVar3 + 8) = uStack_f8;
          *(ulong *)pbVar3 = local_100;
          *(char **)(pbVar3 + 0x10) = local_f0;
        }
        else {
                    /* try { // try from 00840dec to 00840df3 has its CatchHandler @ 008410a0 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external(pbVar3,local_f0,uStack_f8);
        }
        uVar2 = uStack_e8;
        if ((uStack_e8 & 1) == 0) {
          *(ulong *)(pbVar3 + 0x20) = local_e0;
          *(ulong *)(pbVar3 + 0x18) = uStack_e8;
          *(char **)(pbVar3 + 0x28) = local_d8;
        }
        else {
                    /* try { // try from 00840e14 to 00840e1b has its CatchHandler @ 00841084 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external(pbVar3 + 0x18,local_d8,local_e0);
        }
        param_2[1] = (long)(pbVar3 + 0x30);
        param_2[1] = (long)(pbVar3 + 0x30);
      }
      else {
        lVar6 = (long)pbVar3 - *param_2 >> 4;
        uVar2 = lVar6 * -0x5555555555555555 + 1;
        if (0x555555555555555 < uVar2) {
          if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 0084103c to 0084103f has its CatchHandler @ 008410e8 */
            FUN_008411e0();
            goto LAB_00841040;
          }
          goto LAB_00841140;
        }
        lVar9 = param_2[2] - *param_2 >> 4;
        uVar11 = lVar9 * 0x5555555555555556;
        if (uVar11 < uVar2 || uVar11 - uVar2 == 0) {
          uVar11 = uVar2;
        }
        if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar9 * -0x5555555555555555)) {
          uVar11 = 0x555555555555555;
        }
        local_78 = plVar1;
        if (uVar11 == 0) {
          pvVar7 = (void *)0x0;
        }
        else {
          if (0x555555555555555 < uVar11) goto LAB_00841058;
                    /* try { // try from 00840ddc to 00840ddf has its CatchHandler @ 00841110 */
          pvVar7 = operator_new(uVar11 * 0x30);
        }
        local_90 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )((long)pvVar7 + lVar6 * 0x10);
        local_80 = (void *)((long)pvVar7 + uVar11 * 0x30);
        local_98 = pvVar7;
        local_88 = local_90;
        if ((local_100 & 1) == 0) {
          *(ulong *)(local_90 + 8) = uStack_f8;
          *(ulong *)local_90 = local_100;
          *(char **)(local_90 + 0x10) = local_f0;
        }
        else {
                    /* try { // try from 00840e88 to 00840e8f has its CatchHandler @ 008410c4 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external(local_90,local_f0,uStack_f8);
        }
        if ((uStack_e8 & 1) == 0) {
          *(ulong *)((long)pvVar7 + lVar6 * 0x10 + 0x20) = local_e0;
          *(ulong *)((long)pvVar7 + lVar6 * 0x10 + 0x18) = uStack_e8;
          *(char **)((long)pvVar7 + lVar6 * 0x10 + 0x28) = local_d8;
        }
        else {
                    /* try { // try from 00840eb8 to 00840ebf has its CatchHandler @ 008410ac */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)((long)pvVar7 + lVar6 * 0x10 + 0x18),local_d8,local_e0);
        }
        pvVar7 = (void *)*param_2;
        pvVar14 = (void *)param_2[1];
        pbVar3 = local_88 + 0x30;
        pbVar10 = local_90;
        if (pvVar14 == pvVar7) {
          *param_2 = (long)local_90;
          param_2[1] = (long)pbVar3;
          param_2[2] = (long)local_80;
        }
        else {
          do {
            uVar15 = *(undefined8 *)((long)pvVar14 + -0x28);
            uVar8 = *(undefined8 *)((long)pvVar14 + -0x30);
            *(undefined8 *)(pbVar10 + -0x20) = *(undefined8 *)((long)pvVar14 + -0x20);
            *(undefined8 *)(pbVar10 + -0x28) = uVar15;
            *(undefined8 *)(pbVar10 + -0x30) = uVar8;
            uVar15 = *(undefined8 *)((long)pvVar14 + -0x10);
            uVar8 = *(undefined8 *)((long)pvVar14 + -0x18);
            *(undefined8 *)((long)pvVar14 + -0x28) = 0;
            *(undefined8 *)((long)pvVar14 + -0x20) = 0;
            *(undefined8 *)((long)pvVar14 + -0x30) = 0;
            *(undefined8 *)(pbVar10 + -8) = *(undefined8 *)((long)pvVar14 + -8);
            pvVar12 = (void *)((long)pvVar14 + -0x30);
            *(undefined8 *)(pbVar10 + -0x10) = uVar15;
            *(undefined8 *)(pbVar10 + -0x18) = uVar8;
            pbVar10 = pbVar10 + -0x30;
            *(undefined8 *)((long)pvVar14 + -0x10) = 0;
            *(undefined8 *)((long)pvVar14 + -8) = 0;
            *(undefined8 *)((long)pvVar14 + -0x18) = 0;
            pvVar14 = pvVar12;
          } while (pvVar12 != pvVar7);
          pvVar14 = (void *)*param_2;
          pvVar7 = (void *)param_2[1];
          *param_2 = (long)pbVar10;
          param_2[1] = (long)pbVar3;
          param_2[2] = (long)local_80;
          for (; pvVar7 != pvVar14; pvVar7 = (void *)((long)pvVar7 + -0x30)) {
            if ((*(byte *)((long)pvVar7 + -0x18) & 1) != 0) {
              operator_delete(*(void **)((long)pvVar7 + -8));
            }
            if ((*(byte *)((long)pvVar7 + -0x30) & 1) != 0) {
              operator_delete(*(void **)((long)pvVar7 + -0x20));
            }
          }
        }
        if (pvVar14 != (void *)0x0) {
          operator_delete(pvVar14);
        }
        param_2[1] = (long)pbVar3;
        uVar2 = uStack_e8;
      }
      if ((uVar2 & 1) != 0) {
        operator_delete(local_d8);
      }
      if ((local_100 & 1) != 0) {
        operator_delete(local_f0);
      }
      puVar13 = puVar13 + 7;
    } while (puVar13 != puVar5);
  }
  puVar13 = local_c8;
  puVar5 = local_c0;
  if (local_c8 != (undefined8 *)0x0) {
    while (puVar5 != puVar13) {
      if (*(uint *)(puVar5 + -1) != 0xffffffff) {
                    /* try { // try from 00840fdc to 00840fe7 has its CatchHandler @ 008410d4 */
        (*(code *)(&PTR_FUN_0098dab8)[*(uint *)(puVar5 + -1)])(&local_100,puVar5 + -7);
      }
      *(undefined4 *)(puVar5 + -1) = 0xffffffff;
      puVar5 = puVar5 + -7;
    }
    local_c0 = puVar13;
    operator_delete(local_c8);
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
LAB_00841140:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00841148  FUN_00841148 =====

void FUN_00841148(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  
  if (*(char *)(param_1 + 1) == '\0') {
    puVar2 = (undefined8 *)*param_1;
    pvVar3 = (void *)*puVar2;
    if (pvVar3 != (void *)0x0) {
      pvVar4 = (void *)puVar2[1];
      pvVar1 = pvVar3;
      if (pvVar4 != pvVar3) {
        do {
          if ((*(byte *)((long)pvVar4 + -0x18) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar4 + -8));
          }
          if ((*(byte *)((long)pvVar4 + -0x30) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar4 + -0x20));
          }
          pvVar4 = (void *)((long)pvVar4 + -0x30);
        } while (pvVar4 != pvVar3);
        pvVar1 = *(void **)*param_1;
      }
      puVar2[1] = pvVar3;
      operator_delete(pvVar1);
      return;
    }
  }
  return;
}


// ===== 008411e0  FUN_008411e0 =====

void FUN_008411e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_007568a0("vector");
}


// ===== 008411f4  FUN_008411f4 =====

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
FUN_008411f4(undefined8 param_1,byte *param_2,byte *param_3,
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_4)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_60;
  undefined8 local_58;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **ppbStack_50;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **local_48;
  undefined1 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ppbStack_50 = &local_68;
  local_48 = &local_60;
  local_40 = 0;
  local_68 = param_4;
  local_60 = param_4;
  local_58 = param_1;
  if (param_2 != param_3) {
    do {
      pbVar2 = local_60;
      if ((*param_2 & 1) == 0) {
        uVar4 = *(undefined8 *)(param_2 + 8);
        uVar3 = *(undefined8 *)param_2;
        *(undefined8 *)(local_60 + 0x10) = *(undefined8 *)(param_2 + 0x10);
        *(undefined8 *)(local_60 + 8) = uVar4;
        *(undefined8 *)local_60 = uVar3;
      }
      else {
                    /* try { // try from 0084128c to 00841293 has its CatchHandler @ 008412d8 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external(local_60,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
      }
      if ((param_2[0x18] & 1) == 0) {
        uVar4 = *(undefined8 *)(param_2 + 0x20);
        uVar3 = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(pbVar2 + 0x28) = *(undefined8 *)(param_2 + 0x28);
        *(undefined8 *)(pbVar2 + 0x20) = uVar4;
        *(undefined8 *)(pbVar2 + 0x18) = uVar3;
      }
      else {
                    /* try { // try from 008412a4 to 008412ab has its CatchHandler @ 008412e0 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  (pbVar2 + 0x18,*(char **)(param_2 + 0x28),*(ulong *)(param_2 + 0x20));
      }
      param_2 = param_2 + 0x30;
      local_60 = local_60 + 0x30;
    } while (param_2 != param_3);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_60;
}


// ===== 00841318  FUN_00841318 =====

void FUN_00841318(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    return;
  }
  lVar2 = **(long **)(param_1 + 8);
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -0x30) {
    if ((*(byte *)(lVar1 + -0x18) & 1) != 0) {
      operator_delete(*(void **)(lVar1 + -8));
    }
    if ((*(byte *)(lVar1 + -0x30) & 1) != 0) {
      operator_delete(*(void **)(lVar1 + -0x20));
    }
  }
  return;
}


// ===== 0084137c  FUN_0084137c =====

void FUN_0084137c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = (byte *)(lVar2 + -0x30);
    if ((*(byte *)(lVar2 + -0x18) & 1) != 0) {
      operator_delete(*(void **)(lVar2 + -8));
    }
    if ((*(byte *)(lVar2 + -0x30) & 1) != 0) {
      operator_delete(*(void **)(lVar2 + -0x20));
    }
    lVar2 = param_1[2];
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 008413f8  FUN_008413f8 =====

void FUN_008413f8(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  undefined8 uVar6;
  long unaff_x19;
  undefined8 unaff_x24;
  undefined8 *local_68;
  undefined1 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = *param_2;
  lVar2 = param_2[1];
  local_60 = 0;
  uVar3 = lVar2 - lVar1;
  local_68 = param_1;
  if (uVar3 != 0) {
    if (0x555555555555555 < (ulong)(((long)uVar3 >> 4) * -0x5555555555555555)) {
      if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* try { // try from 008414d4 to 008414d7 has its CatchHandler @ 008414e4 */
        uVar6 = FUN_00841bdc();
                    /* catch() { ... } // from try @ 00841480 with catch @ 008414d8 */
        *(undefined8 *)(unaff_x19 + 8) = unaff_x24;
        FUN_00841b44(&local_68);
        if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_00751c7c(uVar6);
        }
      }
      goto LAB_00841508;
    }
                    /* try { // try from 00841464 to 0084146f has its CatchHandler @ 008414e4 */
    pvVar5 = operator_new(uVar3);
    *param_1 = pvVar5;
    param_1[1] = pvVar5;
    param_1[2] = (long)pvVar5 + uVar3;
                    /* try { // try from 00841480 to 00841493 has its CatchHandler @ 008414d8 */
    uVar6 = FUN_00841bf0(param_1 + 2,lVar1,lVar2,pvVar5);
    param_1[1] = uVar6;
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
LAB_00841508:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0084150c  FUN_0084150c =====

void FUN_0084150c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  void *pvVar7;
  undefined8 uVar8;
  long lVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar10;
  ulong uVar11;
  void *pvVar12;
  undefined8 *puVar13;
  byte *unaff_x21;
  void *pvVar14;
  undefined8 uVar15;
  long local_118;
  ulong local_100;
  ulong uStack_f8;
  char *local_f0;
  ulong uStack_e8;
  ulong local_e0;
  char *local_d8;
  undefined8 *local_c8;
  undefined8 *local_c0;
  byte local_b0;
  undefined4 uStack_af;
  undefined1 uStack_ab;
  undefined2 uStack_aa;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  char *local_a0;
  void *local_98;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_90;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_88;
  void *local_80;
  long *local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  if (*(int *)(param_1 + 6) == 1) {
    FUN_00817594(&local_c8,*param_1,param_1 + 1,0);
  }
  else {
    if (*(int *)(param_1 + 6) != 0) {
      if (*(long *)(lVar4 + 0x28) == local_70) {
        uVar8 = FUN_00807a38();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00841810 with catch @ 00841a80
                        */
        if ((*unaff_x21 & 1) == 0) {
          param_2[1] = (long)unaff_x21;
        }
        else {
          operator_delete(*(void **)(unaff_x21 + 0x10));
          param_2[1] = (long)unaff_x21;
        }
        FUN_0083ff98(&local_100);
        FUN_00817320(&local_c8);
        if (*(long *)(local_118 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
          FUN_00751c7c(uVar8);
        }
      }
      goto LAB_00841b3c;
    }
    FUN_008173e8(&local_c8,param_1,0);
  }
  puVar5 = local_c0;
  if (local_c8 != local_c0) {
    plVar1 = param_2 + 2;
    puVar13 = local_c8;
    do {
      uStack_e8 = 0;
      local_f0 = (char *)0x0;
      local_d8 = (char *)0x0;
      local_e0 = 0;
      uStack_f8 = 0;
      local_100 = 0;
      if (*(int *)(puVar13 + 6) != 1) {
        if (*(int *)(puVar13 + 6) == 0) {
                    /* try { // try from 008415d4 to 008415fb has its CatchHandler @ 00841b0c */
          FUN_008118bc(&local_98,puVar13,0);
          goto LAB_008415fc;
        }
LAB_00841a3c:
        if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 00841a50 to 00841a53 has its CatchHandler @ 00841ad4 */
          FUN_00807a38();
LAB_00841a54:
          if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00841a68 to 00841a6b has its CatchHandler @ 00841ae4 */
            FUN_00756920();
          }
        }
        goto LAB_00841b3c;
      }
      FUN_00811aa8(&local_98,*puVar13,puVar13 + 1,0);
LAB_008415fc:
      uStack_a8 = 0;
      local_b0 = 0xe;
      *(undefined4 *)((ulong)&local_b0 | 1) = 0x7079656b;
      *(undefined4 *)((long)((ulong)&local_b0 | 1) + 3) = 0x68746170;
                    /* try { // try from 00841620 to 0084162b has its CatchHandler @ 00841ae8 */
      lVar6 = FUN_00817c7c(&local_98,&local_b0);
      if ((local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
      if (lVar6 != 0) {
                    /* try { // try from 00841644 to 0084164f has its CatchHandler @ 00841adc */
        FUN_00807a6c(&local_b0,lVar6 + 0x28);
        if ((local_100 & 1) != 0) {
          operator_delete(local_f0);
        }
        uStack_f8 = CONCAT71(uStack_a7,uStack_a8);
        local_100 = CONCAT26(uStack_aa,CONCAT15(uStack_ab,CONCAT41(uStack_af,local_b0)));
        local_f0 = local_a0;
      }
      uStack_ab = 0;
      local_b0 = 8;
      uStack_af = 0x74786574;
                    /* try { // try from 00841688 to 00841693 has its CatchHandler @ 00841aec */
      lVar6 = FUN_00817c7c(&local_98,&local_b0);
      if ((local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
      pvVar7 = local_98;
      pbVar3 = local_88;
      if (lVar6 != 0) {
                    /* try { // try from 008416ac to 008416b7 has its CatchHandler @ 00841ad8 */
        FUN_00807a6c(&local_b0,lVar6 + 0x28);
        if ((uStack_e8 & 1) != 0) {
          operator_delete(local_d8);
        }
        local_e0 = CONCAT71(uStack_a7,uStack_a8);
        uStack_e8 = CONCAT26(uStack_aa,CONCAT15(uStack_ab,CONCAT41(uStack_af,local_b0)));
        local_d8 = local_a0;
        pvVar7 = local_98;
        pbVar3 = local_88;
      }
      while (pbVar3 != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)0x0) {
        pbVar10 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                    **)pbVar3;
        local_98 = pvVar7;
        if (*(uint *)(pbVar3 + 0x58) != 0xffffffff) {
                    /* try { // try from 0084173c to 00841747 has its CatchHandler @ 00841b40 */
          (*(code *)(&PTR_FUN_0098dab8)[*(uint *)(pbVar3 + 0x58)])(&local_b0,pbVar3 + 0x28);
        }
        *(undefined4 *)(pbVar3 + 0x58) = 0xffffffff;
        if (((byte)pbVar3[0x10] & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + 0x20));
        }
        operator_delete(pbVar3);
        pvVar7 = local_98;
        pbVar3 = pbVar10;
      }
      local_98 = (void *)0x0;
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
      }
      pbVar3 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               param_2[1];
      if (pbVar3 < (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )param_2[2]) {
        if ((local_100 & 1) == 0) {
          *(ulong *)(pbVar3 + 8) = uStack_f8;
          *(ulong *)pbVar3 = local_100;
          *(char **)(pbVar3 + 0x10) = local_f0;
        }
        else {
                    /* try { // try from 008417e8 to 008417ef has its CatchHandler @ 00841a9c */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external(pbVar3,local_f0,uStack_f8);
        }
        uVar2 = uStack_e8;
        if ((uStack_e8 & 1) == 0) {
          *(ulong *)(pbVar3 + 0x20) = local_e0;
          *(ulong *)(pbVar3 + 0x18) = uStack_e8;
          *(char **)(pbVar3 + 0x28) = local_d8;
        }
        else {
                    /* try { // try from 00841810 to 00841817 has its CatchHandler @ 00841a80 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external(pbVar3 + 0x18,local_d8,local_e0);
        }
        param_2[1] = (long)(pbVar3 + 0x30);
        param_2[1] = (long)(pbVar3 + 0x30);
      }
      else {
        lVar6 = (long)pbVar3 - *param_2 >> 4;
        uVar2 = lVar6 * -0x5555555555555555 + 1;
        if (0x555555555555555 < uVar2) {
          if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 00841a38 to 00841a3b has its CatchHandler @ 00841ae4 */
            FUN_00841bdc();
            goto LAB_00841a3c;
          }
          goto LAB_00841b3c;
        }
        lVar9 = param_2[2] - *param_2 >> 4;
        uVar11 = lVar9 * 0x5555555555555556;
        if (uVar11 < uVar2 || uVar11 - uVar2 == 0) {
          uVar11 = uVar2;
        }
        if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar9 * -0x5555555555555555)) {
          uVar11 = 0x555555555555555;
        }
        local_78 = plVar1;
        if (uVar11 == 0) {
          pvVar7 = (void *)0x0;
        }
        else {
          if (0x555555555555555 < uVar11) goto LAB_00841a54;
                    /* try { // try from 008417d8 to 008417db has its CatchHandler @ 00841b0c */
          pvVar7 = operator_new(uVar11 * 0x30);
        }
        local_90 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )((long)pvVar7 + lVar6 * 0x10);
        local_80 = (void *)((long)pvVar7 + uVar11 * 0x30);
        local_98 = pvVar7;
        local_88 = local_90;
        if ((local_100 & 1) == 0) {
          *(ulong *)(local_90 + 8) = uStack_f8;
          *(ulong *)local_90 = local_100;
          *(char **)(local_90 + 0x10) = local_f0;
        }
        else {
                    /* try { // try from 00841884 to 0084188b has its CatchHandler @ 00841ac0 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external(local_90,local_f0,uStack_f8);
        }
        if ((uStack_e8 & 1) == 0) {
          *(ulong *)((long)pvVar7 + lVar6 * 0x10 + 0x20) = local_e0;
          *(ulong *)((long)pvVar7 + lVar6 * 0x10 + 0x18) = uStack_e8;
          *(char **)((long)pvVar7 + lVar6 * 0x10 + 0x28) = local_d8;
        }
        else {
                    /* try { // try from 008418b4 to 008418bb has its CatchHandler @ 00841aa8 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)((long)pvVar7 + lVar6 * 0x10 + 0x18),local_d8,local_e0);
        }
        pvVar7 = (void *)*param_2;
        pvVar14 = (void *)param_2[1];
        pbVar3 = local_88 + 0x30;
        pbVar10 = local_90;
        if (pvVar14 == pvVar7) {
          *param_2 = (long)local_90;
          param_2[1] = (long)pbVar3;
          param_2[2] = (long)local_80;
        }
        else {
          do {
            uVar15 = *(undefined8 *)((long)pvVar14 + -0x28);
            uVar8 = *(undefined8 *)((long)pvVar14 + -0x30);
            *(undefined8 *)(pbVar10 + -0x20) = *(undefined8 *)((long)pvVar14 + -0x20);
            *(undefined8 *)(pbVar10 + -0x28) = uVar15;
            *(undefined8 *)(pbVar10 + -0x30) = uVar8;
            uVar15 = *(undefined8 *)((long)pvVar14 + -0x10);
            uVar8 = *(undefined8 *)((long)pvVar14 + -0x18);
            *(undefined8 *)((long)pvVar14 + -0x28) = 0;
            *(undefined8 *)((long)pvVar14 + -0x20) = 0;
            *(undefined8 *)((long)pvVar14 + -0x30) = 0;
            *(undefined8 *)(pbVar10 + -8) = *(undefined8 *)((long)pvVar14 + -8);
            pvVar12 = (void *)((long)pvVar14 + -0x30);
            *(undefined8 *)(pbVar10 + -0x10) = uVar15;
            *(undefined8 *)(pbVar10 + -0x18) = uVar8;
            pbVar10 = pbVar10 + -0x30;
            *(undefined8 *)((long)pvVar14 + -0x10) = 0;
            *(undefined8 *)((long)pvVar14 + -8) = 0;
            *(undefined8 *)((long)pvVar14 + -0x18) = 0;
            pvVar14 = pvVar12;
          } while (pvVar12 != pvVar7);
          pvVar14 = (void *)*param_2;
          pvVar7 = (void *)param_2[1];
          *param_2 = (long)pbVar10;
          param_2[1] = (long)pbVar3;
          param_2[2] = (long)local_80;
          for (; pvVar7 != pvVar14; pvVar7 = (void *)((long)pvVar7 + -0x30)) {
            if ((*(byte *)((long)pvVar7 + -0x18) & 1) != 0) {
              operator_delete(*(void **)((long)pvVar7 + -8));
            }
            if ((*(byte *)((long)pvVar7 + -0x30) & 1) != 0) {
              operator_delete(*(void **)((long)pvVar7 + -0x20));
            }
          }
        }
        if (pvVar14 != (void *)0x0) {
          operator_delete(pvVar14);
        }
        param_2[1] = (long)pbVar3;
        uVar2 = uStack_e8;
      }
      if ((uVar2 & 1) != 0) {
        operator_delete(local_d8);
      }
      if ((local_100 & 1) != 0) {
        operator_delete(local_f0);
      }
      puVar13 = puVar13 + 7;
    } while (puVar13 != puVar5);
  }
  puVar13 = local_c8;
  puVar5 = local_c0;
  if (local_c8 != (undefined8 *)0x0) {
    while (puVar5 != puVar13) {
      if (*(uint *)(puVar5 + -1) != 0xffffffff) {
                    /* try { // try from 008419d8 to 008419e3 has its CatchHandler @ 00841ad0 */
        (*(code *)(&PTR_FUN_0098dab8)[*(uint *)(puVar5 + -1)])(&local_100,puVar5 + -7);
      }
      *(undefined4 *)(puVar5 + -1) = 0xffffffff;
      puVar5 = puVar5 + -7;
    }
    local_c0 = puVar13;
    operator_delete(local_c8);
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
LAB_00841b3c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00841b44  FUN_00841b44 =====

void FUN_00841b44(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  
  if (*(char *)(param_1 + 1) == '\0') {
    puVar2 = (undefined8 *)*param_1;
    pvVar3 = (void *)*puVar2;
    if (pvVar3 != (void *)0x0) {
      pvVar4 = (void *)puVar2[1];
      pvVar1 = pvVar3;
      if (pvVar4 != pvVar3) {
        do {
          if ((*(byte *)((long)pvVar4 + -0x18) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar4 + -8));
          }
          if ((*(byte *)((long)pvVar4 + -0x30) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar4 + -0x20));
          }
          pvVar4 = (void *)((long)pvVar4 + -0x30);
        } while (pvVar4 != pvVar3);
        pvVar1 = *(void **)*param_1;
      }
      puVar2[1] = pvVar3;
      operator_delete(pvVar1);
      return;
    }
  }
  return;
}


// ===== 00841bdc  FUN_00841bdc =====

void FUN_00841bdc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_007568a0("vector");
}


// ===== 00841bf0  FUN_00841bf0 =====

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
FUN_00841bf0(undefined8 param_1,byte *param_2,byte *param_3,
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_4)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_60;
  undefined8 local_58;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **ppbStack_50;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **local_48;
  undefined1 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ppbStack_50 = &local_68;
  local_48 = &local_60;
  local_40 = 0;
  local_68 = param_4;
  local_60 = param_4;
  local_58 = param_1;
  if (param_2 != param_3) {
    do {
      pbVar2 = local_60;
      if ((*param_2 & 1) == 0) {
        uVar4 = *(undefined8 *)(param_2 + 8);
        uVar3 = *(undefined8 *)param_2;
        *(undefined8 *)(local_60 + 0x10) = *(undefined8 *)(param_2 + 0x10);
        *(undefined8 *)(local_60 + 8) = uVar4;
        *(undefined8 *)local_60 = uVar3;
      }
      else {
                    /* try { // try from 00841c88 to 00841c8f has its CatchHandler @ 00841cd4 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external(local_60,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
      }
      if ((param_2[0x18] & 1) == 0) {
        uVar4 = *(undefined8 *)(param_2 + 0x20);
        uVar3 = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(pbVar2 + 0x28) = *(undefined8 *)(param_2 + 0x28);
        *(undefined8 *)(pbVar2 + 0x20) = uVar4;
        *(undefined8 *)(pbVar2 + 0x18) = uVar3;
      }
      else {
                    /* try { // try from 00841ca0 to 00841ca7 has its CatchHandler @ 00841cdc */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  (pbVar2 + 0x18,*(char **)(param_2 + 0x28),*(ulong *)(param_2 + 0x20));
      }
      param_2 = param_2 + 0x30;
      local_60 = local_60 + 0x30;
    } while (param_2 != param_3);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_60;
}


// ===== 00841d14  FUN_00841d14 =====

void FUN_00841d14(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    return;
  }
  lVar2 = **(long **)(param_1 + 8);
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -0x30) {
    if ((*(byte *)(lVar1 + -0x18) & 1) != 0) {
      operator_delete(*(void **)(lVar1 + -8));
    }
    if ((*(byte *)(lVar1 + -0x30) & 1) != 0) {
      operator_delete(*(void **)(lVar1 + -0x20));
    }
  }
  return;
}


// ===== 00841d78  FUN_00841d78 =====

void FUN_00841d78(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = (byte *)(lVar2 + -0x30);
    if ((*(byte *)(lVar2 + -0x18) & 1) != 0) {
      operator_delete(*(void **)(lVar2 + -8));
    }
    if ((*(byte *)(lVar2 + -0x30) & 1) != 0) {
      operator_delete(*(void **)(lVar2 + -0x20));
    }
    lVar2 = param_1[2];
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 00841df4  facebook::react::NativeRNDatePickerSpecJSI::NativeRNDatePickerSpecJSI =====

/* facebook::react::NativeRNDatePickerSpecJSI::NativeRNDatePickerSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeRNDatePickerSpecJSI::NativeRNDatePickerSpecJSI
          (NativeRNDatePickerSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  long lVar2;
  NativeRNDatePickerSpecJSI *pNVar3;
  byte local_60;
  char local_5f [7];
  char cStack_58;
  undefined2 uStack_57;
  char cStack_55;
  uint uStack_54;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined1 uStack_41;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ::facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  pNVar3 = this + 0x30;
  *(undefined ***)this = &PTR__JavaTurboModule_0098dad8;
  local_60 = 0x16;
  uStack_54 = uStack_54 & 0xffffff00;
  uStack_57 = 0x656b;
  cStack_55 = 0x72;
  local_5f = SUB87(s_closePicker_00370b22._0_8_,0);
  cStack_58 = SUB81(s_closePicker_00370b22._0_8_,7);
                    /* try { // try from 00841e5c to 00841e77 has its CatchHandler @ 00842000 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(pNVar3,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(code **)(lVar2 + 0x30) = FUN_00842038;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_4f,local_50));
  }
  local_60 = 0x14;
  uStack_57 = 0x7265;
  local_5f = SUB87(s_openPicker_0036a8e9._0_8_,0);
  cStack_58 = SUB81(s_openPicker_0036a8e9._0_8_,7);
  cStack_55 = 0;
                    /* try { // try from 00841ec0 to 00841edb has its CatchHandler @ 00841ffc */
  local_40 = &local_60;
  lVar2 = FUN_00756964(pNVar3,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 3;
  *(code **)(lVar2 + 0x30) = FUN_0084213c;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_4f,local_50));
  }
  local_60 = 0x1e;
  local_50 = 0;
  local_5f[0] = s_removeL_0037044f[0];
  local_5f[1] = s_removeL_0037044f[1];
  local_5f[2] = s_removeL_0037044f[2];
  local_5f[3] = s_removeL_0037044f[3];
  local_5f[4] = s_removeL_0037044f[4];
  local_5f[5] = s_removeL_0037044f[5];
  local_5f[6] = s_removeL_0037044f[6];
  cStack_58 = s_isteners_00370456[0];
  uStack_57 = (undefined2)s_isteners_00370456._1_7_;
  cStack_55 = SUB71(s_isteners_00370456._1_7_,2);
  uStack_54 = SUB74(s_isteners_00370456._1_7_,3);
                    /* try { // try from 00841f28 to 00841f43 has its CatchHandler @ 00841ff8 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(pNVar3,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x30) = FUN_008422a0;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_4f,local_50));
  }
  local_60 = 0x16;
  uStack_54 = uStack_54 & 0xffffff00;
  uStack_57 = 0x656e;
  cStack_55 = 0x72;
  local_5f = SUB87(s_addListener_0036dd70._0_8_,0);
  cStack_58 = SUB81(s_addListener_0036dd70._0_8_,7);
                    /* try { // try from 00841f94 to 00841faf has its CatchHandler @ 00841ff4 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(pNVar3,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x30) = FUN_008423a4;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_4f,local_50));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00842038  FUN_00842038 =====

void FUN_00842038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58 [16];
  void *local_48;
  byte local_40;
  undefined7 local_3f;
  char cStack_38;
  undefined3 uStack_37;
  undefined1 local_34;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x16;
  local_58[0] = 6;
  local_34 = 0;
  local_3f = (undefined7)s_closePicker_00370b22._0_8_;
  _cStack_38 = CONCAT31(0x72656b,SUB81(s_closePicker_00370b22._0_8_,7));
  local_58[1] = 0x28;
  local_58[2] = 0x29;
  local_58[3] = 0x56;
  local_58[4] = 0;
                    /* try { // try from 0084209c to 008420bb has its CatchHandler @ 008420fc */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,&local_40,local_58,param_3,param_4,&DAT_009b8928);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0084213c  FUN_0084213c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0084213c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  char local_5f [8];
  undefined2 local_57;
  undefined1 local_55;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0x14;
  local_57 = 0x7265;
  local_55 = 0;
  local_5f = (char  [8])s_openPicker_0036a8e9._0_8_;
                    /* try { // try from 00842198 to 0084219f has its CatchHandler @ 00842270 */
  local_70 = (char *)operator_new(0x80);
  uStack_78 = _UNK_00371148;
  local_80 = _DAT_00371140;
  uVar5 = s__facebook_react__00368e29._8_8_;
  uVar4 = s__facebook_react__00368e29._0_8_;
  uVar3 = s_ge_Callback_Lcom_00368e19._8_8_;
  uVar2 = s_ge_Callback_Lcom_00368e19._0_8_;
  local_70[0x70] = ')';
  uVar7 = s_bridge_Callback__V_00368e39._8_8_;
  uVar6 = s_bridge_Callback__V_00368e39._0_8_;
  local_70[0x71] = 'V';
  local_70[0x72] = '\0';
  *(undefined8 *)(local_70 + 0x48) = uVar3;
  *(undefined8 *)(local_70 + 0x40) = uVar2;
  *(undefined8 *)(local_70 + 0x58) = uVar5;
  *(undefined8 *)(local_70 + 0x50) = uVar4;
  *(undefined8 *)(local_70 + 0x68) = uVar7;
  *(undefined8 *)(local_70 + 0x60) = uVar6;
  uVar4 = s_eact_bridge_Read_00368de9._8_8_;
  uVar3 = s_eact_bridge_Read_00368de9._0_8_;
  uVar2 = s__Lcom_facebook_r_00368dd9._0_8_;
  *(undefined8 *)(local_70 + 8) = s__Lcom_facebook_r_00368dd9._8_8_;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar4;
  *(undefined8 *)(local_70 + 0x10) = uVar3;
  uVar4 = s_ebook_react_brid_00368e09._8_8_;
  uVar3 = s_ebook_react_brid_00368e09._0_8_;
  uVar2 = s_ableMap_Lcom_fac_00368df9._0_8_;
  *(undefined8 *)(local_70 + 0x28) = s_ableMap_Lcom_fac_00368df9._8_8_;
  *(undefined8 *)(local_70 + 0x20) = uVar2;
  *(undefined8 *)(local_70 + 0x38) = uVar4;
  *(undefined8 *)(local_70 + 0x30) = uVar3;
                    /* try { // try from 008421e4 to 0084220f has its CatchHandler @ 00842258 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,0,&local_60,&local_80,param_4,param_5,&DAT_009b8930);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008422a0  FUN_008422a0 =====

void FUN_008422a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58 [16];
  void *local_48;
  byte local_40;
  char local_3f [7];
  char cStack_38;
  char acStack_37 [7];
  undefined1 local_30;
  undefined7 uStack_2f;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x1e;
  local_3f = s_removeL_0037044f;
  local_58[0] = 8;
  cStack_38 = s_isteners_00370456[0];
  acStack_37 = (char  [7])s_isteners_00370456._1_7_;
  local_30 = 0;
  local_58[1] = 0x28;
  local_58[2] = 0x44;
  local_58[3] = 0x29;
  local_58[4] = 0x56;
  local_58[5] = 0;
                    /* try { // try from 00842304 to 00842323 has its CatchHandler @ 00842364 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,&local_40,local_58,param_3,param_4,&DAT_009b8938);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_2f,local_30));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008423a4  FUN_008423a4 =====

void FUN_008423a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58;
  char local_57 [8];
  char acStack_4f [5];
  undefined2 uStack_4a;
  char cStack_48;
  char acStack_47 [5];
  undefined1 uStack_42;
  undefined1 uStack_41;
  byte local_40;
  undefined7 local_3f;
  char cStack_38;
  undefined3 uStack_37;
  undefined1 local_34;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x16;
  local_58 = 0x2a;
  local_34 = 0;
  local_3f = (undefined7)s_addListener_0036dd70._0_8_;
  _cStack_38 = CONCAT31(0x72656e,SUB81(s_addListener_0036dd70._0_8_,7));
  acStack_4f = (char  [5])s__Ljava_lang_S_0036ec45._8_5_;
  local_57 = (char  [8])s__Ljava_lang_S_0036ec45._0_8_;
  uStack_4a = (undefined2)s_tring__V_0036ec52._0_3_;
  cStack_48 = SUB31(s_tring__V_0036ec52._0_3_,2);
  acStack_47 = (char  [5])s_tring__V_0036ec52._3_5_;
  uStack_42 = 0;
                    /* try { // try from 00842418 to 00842437 has its CatchHandler @ 00842478 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,&local_40,&local_58,param_3,param_4,&DAT_009b8940);
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_41,CONCAT16(uStack_42,CONCAT51(acStack_47,cStack_48))));
  }
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008424b8  facebook::react::RNDatePickerSpecs_ModuleProvider =====

/* WARNING: Unknown calling convention: __rustcall */
/* facebook::react::RNDatePickerSpecs_ModuleProvider */

void __rustcall
facebook::react::RNDatePickerSpecs_ModuleProvider
          (undefined8 *param_1,byte *param_2,InitParams *param_3)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  
  bVar2 = *param_2;
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  if (uVar1 == 0xc) {
    pbVar4 = *(byte **)(param_2 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar4 = param_2 + 1;
    }
    if (*(long *)pbVar4 == 0x6950657461444e52 && *(int *)(pbVar4 + 8) == 0x72656b63) {
      puVar3 = (undefined8 *)operator_new(0xb8);
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = &PTR_FUN_0098db30;
                    /* try { // try from 00842558 to 00842563 has its CatchHandler @ 0084256c */
      NativeRNDatePickerSpecJSI::NativeRNDatePickerSpecJSI
                ((NativeRNDatePickerSpecJSI *)(puVar3 + 3),param_3);
      *param_1 = (NativeRNDatePickerSpecJSI *)(puVar3 + 3);
      param_1[1] = puVar3;
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00842588  FUN_00842588 =====

void FUN_00842588(JavaTurboModule *param_1)

{
  facebook::react::JavaTurboModule::~JavaTurboModule(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008425ac  FUN_008425ac =====

void FUN_008425ac(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098db30;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008425bc  FUN_008425bc =====

void FUN_008425bc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098db30;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008425ec  FUN_008425ec =====

void FUN_008425ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008425f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008425f8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008425fc  facebook::react::RNDatePickerSpecs_registerComponentDescriptorsFromCodegen =====

/* WARNING: Removing unreachable block (ram,0x00842648) */
/* WARNING: Removing unreachable block (ram,0x00842658) */
/* WARNING: Unknown calling convention: __rustcall */
/* facebook::react::RNDatePickerSpecs_registerComponentDescriptorsFromCodegen */

void __rustcall
facebook::react::RNDatePickerSpecs_registerComponentDescriptorsFromCodegen(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00842638 to 0084263f has its CatchHandler @ 00842690 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 008426b8  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_25RNDatePickerComponentNameEEEENS0_17RNDatePickerPropsENS0_24RNDatePickerEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_25RNDatePickerComponentNameEEEENS0_17RNDatePickerPropsENS0_24RNDatePickerEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_0084270c(&local_30);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0084270c  FUN_0084270c =====

void FUN_0084270c(undefined8 *param_1,ComponentDescriptorParameters *param_2)

{
  long lVar1;
  ComponentDescriptor *this;
  void *local_90;
  void *pvStack_88;
  undefined8 local_80;
  void *pvStack_78;
  void *local_70;
  undefined8 uStack_68;
  void *local_60;
  void *pvStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ComponentDescriptor *)operator_new(0x88);
  pvStack_78 = (void *)0x0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = (void *)0x0;
  pvStack_58 = (void *)0x0;
  local_60 = (void *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  pvStack_88 = (void *)0x0;
  local_90 = (void *)0x0;
                    /* try { // try from 00842750 to 0084275b has its CatchHandler @ 008427c8 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_90);
  *(undefined ***)this = &PTR_FUN_0098db80;
  FUN_008427f8(this + 0x38);
  *param_1 = this;
  if (local_60 != (void *)0x0) {
    pvStack_58 = local_60;
    operator_delete(local_60);
  }
  if (pvStack_78 != (void *)0x0) {
    local_70 = pvStack_78;
    operator_delete(pvStack_78);
  }
  if (local_90 != (void *)0x0) {
    pvStack_88 = local_90;
    operator_delete(local_90);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008427f8  FUN_008427f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008427f8(undefined8 param_1)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  undefined4 local_11e0 [2];
  undefined8 *local_11d8;
  undefined *local_11d0;
  undefined8 uStack_11c8;
  undefined8 local_11c0;
  undefined8 uStack_11b8;
  undefined4 local_11b0 [2];
  undefined8 local_11a8;
  undefined8 uStack_11a0;
  undefined8 local_1198;
  undefined8 uStack_1190;
  undefined4 local_1188;
  undefined4 local_1180;
  undefined1 local_117c;
  undefined8 local_117b;
  undefined8 local_1173;
  undefined8 uStack_116b;
  undefined8 local_1163;
  undefined8 uStack_115b;
  undefined8 local_1153;
  undefined8 uStack_114b;
  undefined8 local_1143;
  undefined6 uStack_113b;
  undefined2 uStack_1135;
  undefined6 uStack_1133;
  undefined8 uStack_112d;
  undefined4 local_1125;
  undefined8 local_1121;
  undefined1 local_1119;
  undefined1 uStack_1118;
  undefined7 uStack_1117;
  undefined8 uStack_1110;
  undefined8 uStack_1108;
  undefined8 uStack_1100;
  undefined8 local_10f8;
  undefined8 uStack_10f0;
  undefined8 local_10e8;
  undefined8 uStack_10e0;
  undefined8 local_10d8;
  undefined8 uStack_10d0;
  undefined8 local_10c8;
  undefined8 uStack_10c0;
  undefined8 uStack_10b8;
  undefined8 local_10b0;
  undefined8 local_10a8;
  undefined8 uStack_10a0;
  undefined8 local_1098;
  undefined4 uStack_1090;
  undefined4 uStack_108c;
  undefined4 uStack_1088;
  undefined4 uStack_1084;
  undefined4 uStack_1080;
  undefined4 uStack_107c;
  undefined8 local_1078;
  undefined8 uStack_1070;
  undefined4 local_1068;
  undefined1 local_1064;
  undefined4 local_1060;
  undefined1 local_105c;
  undefined4 local_1058;
  undefined1 local_1054;
  undefined4 local_1050;
  undefined1 local_104c;
  undefined4 local_1048;
  undefined1 local_1044;
  undefined4 local_1040;
  undefined1 local_103c;
  undefined4 local_1038;
  undefined1 local_1034;
  undefined4 local_1030;
  undefined1 local_102c;
  undefined4 local_1028;
  undefined1 local_1024;
  undefined4 local_1020;
  undefined1 local_101c;
  undefined4 local_1018;
  undefined1 local_1014;
  undefined4 local_1010;
  undefined1 local_100c;
  undefined4 local_1008;
  undefined1 local_1004;
  undefined4 local_1000;
  undefined1 local_ffc;
  undefined4 local_ff8;
  undefined1 local_ff4;
  undefined4 local_ff0;
  undefined1 local_fec;
  undefined1 local_fe8;
  undefined1 local_fe4;
  undefined1 local_fd8;
  undefined8 local_fd0;
  undefined8 uStack_fc8;
  undefined8 uStack_fc0;
  undefined8 uStack_fb8;
  undefined8 local_fb0;
  undefined8 uStack_fa8;
  undefined8 uStack_fa0;
  undefined1 uStack_f98;
  undefined7 local_f97;
  undefined1 uStack_f90;
  undefined8 uStack_f8f;
  undefined8 local_f84;
  undefined8 uStack_f7c;
  undefined8 uStack_f74;
  undefined8 uStack_f6c;
  undefined8 local_f64;
  undefined8 uStack_f5c;
  undefined8 uStack_f54;
  undefined8 uStack_f4c;
  undefined8 local_f44;
  undefined8 uStack_f3c;
  undefined8 uStack_f34;
  undefined5 uStack_f2c;
  undefined3 local_f27;
  undefined5 uStack_f24;
  undefined1 local_f1c;
  undefined1 local_f18;
  undefined1 local_f14;
  undefined1 local_f10;
  undefined1 local_f0c;
  undefined1 local_f08;
  undefined1 local_ef0;
  undefined8 local_ee8;
  undefined8 uStack_ee0;
  undefined8 local_ed8;
  undefined4 local_ed0;
  undefined1 local_ecc;
  undefined4 local_ecb;
  undefined1 local_ec7;
  undefined1 local_ec6;
  undefined8 local_ec0;
  undefined8 uStack_eb8;
  undefined8 uStack_eb0;
  undefined8 uStack_ea8;
  undefined8 local_ea0;
  undefined7 uStack_e98;
  undefined4 uStack_e91;
  undefined8 local_e8c;
  undefined1 local_e84;
  undefined1 local_e7c;
  undefined1 local_e78;
  undefined1 local_e70;
  undefined1 local_e6c;
  undefined1 local_e64;
  undefined1 local_e60;
  undefined1 local_e58;
  undefined1 local_e54;
  undefined1 local_e4c;
  undefined1 local_e48;
  undefined1 local_e40;
  undefined1 local_e3c;
  undefined1 local_e34;
  undefined1 local_e30;
  undefined1 local_e28;
  undefined1 local_e24;
  undefined1 local_e1c;
  undefined1 local_e18;
  undefined1 local_e10;
  undefined1 local_e0c;
  undefined1 local_e04;
  undefined1 local_e00;
  undefined1 local_df8;
  undefined1 local_df4;
  undefined1 local_dec;
  undefined1 local_de8;
  undefined1 local_de4;
  undefined1 local_de0;
  undefined1 local_ddc;
  undefined1 local_dd8;
  undefined1 local_dd4;
  undefined1 local_dd0;
  undefined1 local_dcc;
  undefined1 local_dc8;
  undefined1 local_dc4;
  undefined1 local_dc0;
  undefined1 local_dbc;
  undefined1 local_db8;
  undefined1 local_db4;
  undefined1 local_db0;
  undefined1 local_dac;
  undefined1 local_da8;
  undefined1 local_da4;
  undefined1 local_da0;
  undefined1 local_d9c;
  undefined1 local_d98;
  undefined1 local_d94;
  undefined1 local_d90;
  undefined1 local_d8c;
  undefined8 local_d88;
  undefined8 uStack_d80;
  undefined8 local_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined2 local_d58;
  undefined8 local_d54;
  undefined1 local_d4c;
  undefined8 local_d48;
  undefined8 local_d40;
  undefined8 uStack_d38;
  undefined1 local_d30;
  undefined8 local_d28;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  undefined8 local_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 local_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined8 local_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 local_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 local_c88;
  undefined8 uStack_c80;
  undefined8 local_c78;
  undefined8 uStack_c70;
  undefined8 local_c68;
  undefined8 uStack_c60;
  undefined8 local_c58;
  undefined8 uStack_c50;
  undefined8 local_c48;
  undefined8 uStack_c40;
  undefined8 local_c38;
  undefined6 uStack_c30;
  undefined2 uStack_c2a;
  undefined6 uStack_c28;
  undefined1 local_c20;
  undefined1 local_c1c;
  undefined1 local_c18;
  undefined8 local_c14;
  undefined8 uStack_c0c;
  undefined1 local_c04;
  undefined8 local_c00;
  undefined2 local_bf8;
  undefined1 local_bf6;
  undefined4 local_bf4;
  undefined1 local_bf0;
  undefined1 local_b90;
  undefined1 local_b88;
  undefined1 local_b28;
  undefined4 local_b20;
  undefined2 local_b1c;
  undefined1 local_b18;
  undefined1 local_b14;
  undefined1 local_b10;
  undefined1 local_b0c;
  undefined1 local_b08;
  undefined1 local_b04;
  undefined1 local_b00;
  undefined1 local_afc;
  undefined1 local_af8;
  undefined1 local_af4;
  undefined8 local_af0;
  undefined8 uStack_ae8;
  undefined8 local_ae0;
  undefined8 uStack_ad8;
  undefined8 local_ad0;
  undefined8 uStack_ac8;
  undefined8 local_ac0;
  undefined8 uStack_ab8;
  undefined8 local_ab0;
  undefined8 uStack_aa8;
  undefined8 local_aa0;
  undefined8 uStack_a98;
  undefined8 local_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 local_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 local_a28;
  undefined2 local_a20;
  undefined8 local_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 local_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 local_9d8;
  RNDatePickerProps aRStack_9d0 [2048];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
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
  void *local_140;
  undefined8 uStack_138;
  void *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100 [4];
  undefined4 local_f0 [2];
  undefined8 local_e8;
  undefined4 local_c0;
  void *local_b8;
  void *pvStack_b0;
  undefined8 uStack_a8;
  void *local_a0;
  void *local_98;
  undefined8 uStack_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100[0] = 0;
  local_f0[0] = 0;
  local_e8 = 0;
  local_c0 = 0;
  pvStack_b0 = (void *)0x0;
  local_b8 = (void *)0x0;
  local_a0 = (void *)0x0;
  uStack_a8 = 0;
  uStack_90 = 0;
  local_98 = (void *)0x0;
  local_120 = 0;
  uStack_128 = 0;
  local_130 = (void *)0x0;
  uStack_138 = 0;
  local_140 = (void *)0x0;
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
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
                    /* try { // try from 00842884 to 00842897 has its CatchHandler @ 00842e64 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1d0);
  local_120 = CONCAT44(local_120._4_4_,0x3f800000);
  local_11e0[0] = 0xffffffff;
  uStack_128 = 0;
  local_130 = (void *)0x0;
  uStack_138 = 0;
  local_140 = (void *)0x0;
  local_11d8 = &local_1d0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_118,param_1);
  memset(local_11b0,0,0x7e0);
  local_88[0] = 5;
  local_70 = 0;
  local_11d0 = PTR_construction_vtable_0099e468 + 0x20;
  local_11b0[0] = 5;
  uStack_11b8 = 0;
  local_11c0 = 0;
  uStack_11c8 = 0;
  local_68 = 0;
  uStack_60 = 0x3f800000;
  uStack_78 = 0;
  local_80 = 0;
  uStack_11a0 = 0;
  local_11a8 = 0;
  uStack_1190 = 0;
  local_1198 = 0;
  local_1188 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_88);
  local_117c = 0;
  local_1121 = 0;
  uStack_c40 = _UNK_00487288;
  local_c48 = _DAT_00487280;
  local_117b = _s__00375408;
  uStack_d38 = _UNK_00371598;
  local_d40 = _DAT_00371590;
  uStack_c50 = _UNK_00487278;
  local_c58 = _DAT_00487270;
  local_1064 = 0;
  uStack_c60 = _UNK_00487268;
  local_c68 = _DAT_00487260;
  uStack_c70 = _UNK_00487258;
  local_c78 = _DAT_00487250;
  uStack_c28 = 0;
  local_105c = 0;
  uStack_1090 = 0;
  local_1098 = 0;
  uStack_107c = 0;
  uStack_10a0 = 0;
  local_10a8 = 0;
  uStack_c30 = 0;
  uStack_c2a = 0;
  local_c38 = 0;
  local_1180 = 0x10410710;
  local_1125 = 0x40004;
  uStack_1084 = 0;
  uStack_1080 = 0;
  uStack_108c = 0;
  uStack_1088 = 0;
  uStack_1070 = 0;
  local_1078 = 0;
  local_1068 = 0x7fc00000;
  local_1060 = 0x7fc00000;
  local_1058 = 0x7fc00000;
  local_1050 = 0x7fc00000;
  local_1048 = 0x7fc00000;
  local_1040 = 0x7fc00000;
  local_1038 = 0x7fc00000;
  local_1030 = 0x7fc00000;
  local_1028 = 0x7fc00000;
  local_1020 = 0x7fc00000;
  local_1018 = 0x7fc00000;
  local_1010 = 0x7fc00000;
  local_1008 = 0x7fc00000;
  local_1000 = 0x7fc00000;
  local_ff8 = 0x7fc00000;
  local_ff0 = 0x7fc00000;
  uStack_f8f = 0;
  uStack_f90 = 0;
  uStack_f7c = 0;
  local_f84 = 0;
  uStack_f6c = 0;
  uStack_f74 = 0;
  uStack_f5c = 0;
  local_f64 = 0;
  uStack_f4c = 0;
  uStack_f54 = 0;
  uStack_f3c = 0;
  local_f44 = 0;
  uStack_f2c = 0;
  uStack_f34 = 0;
  local_f27 = 0;
  uStack_f24 = 0;
  local_ecc = 1;
  local_ecb = 0;
  local_ec6 = 0x23;
  local_e8c = 0x3f800000;
  uStack_d70 = 0;
  local_d78 = 0;
  uStack_d60 = 0;
  uStack_d68 = 0;
  uStack_d80 = 0;
  local_d88 = 0;
  local_d54 = 0;
  uStack_d20 = 0;
  local_d28 = 0;
  uStack_d10 = 0;
  uStack_d18 = 0;
  uStack_d00 = 0;
  local_d08 = 0;
  uStack_cf0 = 0;
  uStack_cf8 = 0;
  uStack_ce0 = 0;
  local_ce8 = 0;
  uStack_cd0 = 0;
  uStack_cd8 = 0;
  uStack_cc0 = 0;
  local_cc8 = 0;
  uStack_cb0 = 0;
  uStack_cb8 = 0;
  uStack_ca0 = 0;
  local_ca8 = 0;
  uStack_c90 = 0;
  uStack_c98 = 0;
  uStack_c80 = 0;
  local_c88 = 0;
  uStack_1117 = 0;
  uStack_116b = 0;
  local_1173 = 0;
  uStack_115b = 0;
  local_1163 = 0;
  uStack_114b = 0;
  local_1153 = 0;
  uStack_113b = 0;
  local_1143 = 0;
  uStack_112d = 0;
  uStack_1135 = 0;
  uStack_1133 = 0;
  local_1119 = 0;
  uStack_1118 = 0;
  uStack_1108 = 0;
  uStack_1110 = 0;
  local_10f8 = 0;
  uStack_1100 = 0;
  local_10e8 = 0;
  uStack_10f0 = 0;
  local_10d8 = 0;
  uStack_10e0 = 0;
  local_10c8 = 0;
  uStack_10d0 = 0;
  uStack_10b8 = 0;
  uStack_10c0 = 0;
  local_10b0 = 0;
  local_1054 = 0;
  local_104c = 0;
  local_1044 = 0;
  local_103c = 0;
  local_1034 = 0;
  local_102c = 0;
  local_1024 = 0;
  local_101c = 0;
  local_1014 = 0;
  local_100c = 0;
  local_1004 = 0;
  local_ffc = 0;
  local_ff4 = 0;
  local_fec = 0;
  local_fe8 = 0;
  local_fe4 = 0;
  local_fd8 = 0;
  local_f1c = 0;
  local_f18 = 0;
  local_f14 = 0;
  local_f10 = 0;
  local_f0c = 0;
  local_f08 = 0;
  local_ef0 = 0;
  uStack_fc8 = 0;
  local_fd0 = 0;
  uStack_fb8 = 0;
  uStack_fc0 = 0;
  uStack_fa8 = 0;
  local_fb0 = 0;
  uStack_f98 = 0;
  local_f97 = 0;
  uStack_fa0 = 0;
  uStack_ee0 = 0;
  local_ee8 = 0;
  local_ed8 = 0;
  local_ed0 = 0;
  local_ec7 = 0;
  uStack_eb8 = 0;
  local_ec0 = 0;
  uStack_ea8 = 0;
  uStack_eb0 = 0;
  uStack_e98 = 0;
  uStack_e91 = 0;
  local_ea0 = 0;
  local_e84 = 0;
  local_e7c = 0;
  local_e78 = 0;
  local_e70 = 0;
  local_e6c = 0;
  local_e64 = 0;
  local_e60 = 0;
  local_e58 = 0;
  local_e54 = 0;
  local_e4c = 0;
  local_e48 = 0;
  local_e40 = 0;
  local_e3c = 0;
  local_e34 = 0;
  local_e30 = 0;
  local_e28 = 0;
  local_e24 = 0;
  local_e1c = 0;
  local_e18 = 0;
  local_e10 = 0;
  local_e0c = 0;
  local_e04 = 0;
  local_e00 = 0;
  local_df8 = 0;
  local_df4 = 0;
  local_dec = 0;
  local_de8 = 0;
  local_de4 = 0;
  local_de0 = 0;
  local_ddc = 0;
  local_dd8 = 0;
  local_dd4 = 0;
  local_dd0 = 0;
  local_dcc = 0;
  local_dc8 = 0;
  local_dc4 = 0;
  local_dc0 = 0;
  local_dbc = 0;
  local_db8 = 0;
  local_db4 = 0;
  local_db0 = 0;
  local_dac = 0;
  local_da8 = 0;
  local_da4 = 0;
  local_da0 = 0;
  local_d9c = 0;
  local_d98 = 0;
  local_d94 = 0;
  local_d90 = 0;
  local_d8c = 0;
  local_d48 = 0;
  local_d58 = 0;
  local_d4c = 0;
  local_d30 = 0;
  local_c20 = 0;
  local_c1c = 0;
  local_c18 = 0;
  local_c00 = 0;
  uStack_c0c = 0;
  local_c14 = 0;
  local_c04 = 0;
  local_bf8 = 0x101;
  local_bf6 = 0;
  local_bf4 = 0;
  local_bf0 = 0;
  local_b90 = 0;
  local_b88 = 0;
  local_b28 = 0;
  local_b18 = 0;
  local_b14 = 0;
  local_b10 = 0;
  local_b0c = 0;
  local_b08 = 0;
  local_b04 = 0;
  local_b00 = 0;
  local_afc = 0;
  local_af8 = 0;
  local_af4 = 0;
  local_b1c = 0;
  local_b20 = 0;
  local_11d0 = PTR_vtable_0099e458 + 0x20;
  uStack_ae8 = 0;
  local_af0 = 0;
  local_a90 = 0x200000000;
  uStack_a80 = 0;
  local_a88 = 0;
  uStack_a70 = 0;
  uStack_a78 = 0;
  uStack_a60 = 0;
  local_a68 = 0;
  uStack_a50 = 0;
  uStack_a58 = 0;
  uStack_a40 = 0;
  local_a48 = 0;
  uStack_a30 = 0;
  uStack_a38 = 0;
  uStack_ad8 = 0;
  local_ae0 = 0;
  uStack_ac8 = 0;
  local_ad0 = 0;
  uStack_ab8 = 0;
  local_ac0 = 0;
  uStack_aa8 = 0;
  local_ab0 = 0;
  uStack_a98 = 0;
  local_aa0 = 0;
  local_a28 = DAT_00374d58;
  local_a20 = 0;
  uStack_a10 = 0;
  local_a18 = 0;
  uStack_a00 = 0;
  uStack_a08 = 0;
  uStack_9f0 = 0;
  local_9f8 = 0;
  uStack_9e0 = 0;
  uStack_9e8 = 0;
  local_9d8 = 0;
                    /* try { // try from 00842ccc to 00842cdf has its CatchHandler @ 00842e64 */
  facebook::react::RNDatePickerProps::RNDatePickerProps
            (aRStack_9d0,(PropsParserContext *)local_11e0,(RNDatePickerProps *)&local_11d0,
             (RawProps *)&local_118);
  puVar5 = PTR_PTR_0099e460;
  FUN_00843654(aRStack_9d0,PTR_PTR_0099e460);
  FUN_00843654(&local_11d0,puVar5);
  facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(param_1);
  pvVar3 = local_140;
  puVar4 = (undefined8 *)local_130;
  while (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar4[6];
    pvVar8 = (void *)*puVar4;
    local_140 = pvVar3;
    if ((plVar7 == (long *)0x0) || (lVar6 = FUN_00757990(0xffffffffffffffff,plVar7 + 1), lVar6 != 0)
       ) {
      bVar1 = *(byte *)(puVar4 + 2);
    }
    else {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
      bVar1 = *(byte *)(puVar4 + 2);
    }
    if ((bVar1 & 1) != 0) {
      operator_delete((void *)puVar4[4]);
    }
    operator_delete(puVar4);
    pvVar3 = local_140;
    puVar4 = (undefined8 *)pvVar8;
  }
  local_140 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_178);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_1a8);
  std::__ndk1::mutex::~mutex((mutex *)&local_1d0);
  pvVar8 = local_a0;
  pvVar3 = local_98;
  if (local_a0 != (void *)0x0) {
    while (pvVar3 != pvVar8) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 00842df4 to 00842dff has its CatchHandler @ 00842e68 */
        (*(code *)(&PTR_FUN_0098dc00)[*(uint *)((long)pvVar3 + -8)])
                  (&local_11d0,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_98 = pvVar8;
    operator_delete(local_a0);
  }
  if (local_b8 != (void *)0x0) {
    pvStack_b0 = local_b8;
    operator_delete(local_b8);
  }
  folly::dynamic::folly::dynamic::destroy(local_f0);
  facebook::jsi::Value::~Value((Value *)local_100);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00842e6c  FUN_00842e6c =====

void FUN_00842e6c(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 00842e90  FUN_00842e90 =====

undefined * FUN_00842e90(void)

{
  return PTR_RNDatePickerComponentName_0099e450;
}


// ===== 00842e9c  FUN_00842e9c =====

undefined * FUN_00842e9c(void)

{
  return PTR_RNDatePickerComponentName_0099e450;
}


// ===== 00842ea8  FUN_00842ea8 =====

undefined8 FUN_00842ea8(void)

{
  return 0x61;
}


// ===== 00842eb0  FUN_00842eb0 =====

void FUN_00842eb0(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 uStack_49;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_64 = (**(code **)(*param_2 + 0x20))();
  FUN_008437d0(&local_60,&uStack_49,param_3,param_4,&local_64);
                    /* try { // try from 00842f18 to 00842f1f has its CatchHandler @ 00842f50 */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00842f78  FUN_00842f78 =====

void FUN_00842f78(undefined8 *param_1,long *param_2,shared_ptr *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *local_70;
  long *local_68;
  long *local_60;
  long *plStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00843a84(&local_60,&local_70);
                    /* try { // try from 00842fc4 to 00842fcf has its CatchHandler @ 0084307c */
  (**(code **)(*local_60 + 0x10))(local_60,param_3,param_4);
  local_70 = local_60;
  local_68 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    FUN_00757d00(1,plStack_58 + 1);
  }
                    /* try { // try from 00842fe8 to 00842ff7 has its CatchHandler @ 0084306c */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_70);
  plVar2 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 00843034 to 0084303b has its CatchHandler @ 0084307c */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = plStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008430a4  FUN_008430a4 =====

void FUN_008430a4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x008430b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 008430b8  FUN_008430b8 =====

void FUN_008430b8(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
                 RawProps *param_5)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  int iVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  long *local_100;
  long *local_f8;
  long *local_f0;
  long *plStack_e8;
  undefined1 uStack_d1;
  dynamic adStack_d0 [48];
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar8 = facebook::react::RawProps::isEmpty(), (uVar8 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNDatePickerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNDatePickerPropsENS0_24RNDatePickerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e448
         & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNDatePickerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNDatePickerPropsENS0_24RNDatePickerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e448
                                   ), iVar7 != 0)) {
                    /* try { // try from 00843384 to 00843393 has its CatchHandler @ 008433c0 */
      FUN_00843efc(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNDatePickerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNDatePickerPropsENS0_24RNDatePickerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e440
                   ,adStack_d0);
      __cxa_atexit(FUN_00843eac,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNDatePickerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNDatePickerPropsENS0_24RNDatePickerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e440
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNDatePickerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNDatePickerPropsENS0_24RNDatePickerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e448
                         );
    }
    lVar10 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNDatePickerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNDatePickerPropsENS0_24RNDatePickerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e440
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNDatePickerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNDatePickerPropsENS0_24RNDatePickerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e440
    ;
    param_1[1] = lVar10;
    if (lVar10 != 0) {
      FUN_00757d00(1,lVar10 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    FUN_00843b88(&local_f0,param_3,param_5,param_4);
                    /* try { // try from 00843160 to 00843173 has its CatchHandler @ 008433f4 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if (((uVar8 & 1) == 0) ||
       ((uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar8 & 1) == 0 ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enablePropsUpdateReconciliationAndroid(), (uVar8 & 1) == 0)))) {
LAB_0084319c:
      local_100 = local_f0;
      local_f8 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        FUN_00757d00(1,plStack_e8 + 1);
      }
                    /* try { // try from 008431b4 to 008431c3 has its CatchHandler @ 008433e4 */
      FUN_00843cd4(&local_100,param_5,param_4);
      plVar4 = local_f8;
      if ((local_f8 != (long *)0x0) &&
         (lVar10 = FUN_00757990(0xffffffffffffffff,local_f8 + 1), lVar10 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 00843184 to 0084318b has its CatchHandler @ 008433d4 */
      pcVar9 = (char *)(**(code **)(*local_f0 + 0x10))();
      iVar7 = strcmp(PTR_RNDatePickerComponentName_0099e450,pcVar9);
      if (iVar7 != 0) goto LAB_0084319c;
      bVar3 = false;
    }
                    /* try { // try from 008431f8 to 008431fb has its CatchHandler @ 008433f4 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar8 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 00843208 to 00843223 has its CatchHandler @ 008433e0 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(local_f0 + 4));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_f0;
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00843364 to 00843373 has its CatchHandler @ 008433d8 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_00843440;
      }
      for (; local_f0 = plVar4, plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00843344 to 00843353 has its CatchHandler @ 00843400 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_00843440;
        }
        uVar1 = 0x811c9dc5;
        uVar8 = (ulong)(*(byte *)(plVar5 + 3) >> 1);
        pcVar6 = (char *)((long)plVar5 + 0x19);
        pcVar9 = (char *)((long)plVar5 + 0x19);
        if ((*(byte *)(plVar5 + 3) & 1) != 0) {
          uVar8 = plVar5[4];
          pcVar6 = (char *)plVar5[5];
          pcVar9 = (char *)plVar5[5];
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          uVar1 = (uVar1 ^ (int)*pcVar6) * 0x1000193;
          pcVar6 = pcVar6 + 1;
        }
                    /* try { // try from 008432a4 to 008432af has its CatchHandler @ 00843408 */
        folly::dynamic::dynamic(adStack_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 008432b4 to 008432cb has its CatchHandler @ 0084340c */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (plVar4,param_3,uVar1,pcVar9,adStack_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 008432dc to 008432e7 has its CatchHandler @ 008433fc */
          (*(code *)(&PTR_FUN_0098dc00)[local_a0])(&uStack_d1,adStack_d0);
        }
        plVar4 = local_f0;
      }
      folly::dynamic::folly::dynamic::destroy(local_98);
    }
    param_1[1] = plStack_e8;
    *param_1 = local_f0;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_00843440:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00843444  FUN_00843444 =====

void FUN_00843444(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0084344c  FUN_0084344c =====

void FUN_0084344c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00843454  FUN_00843454 =====

void FUN_00843454(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *local_90;
  long *local_88;
  undefined1 auStack_80 [8];
  long *local_78;
  long *local_70;
  long *local_68;
  undefined1 uStack_59;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_0078a610(auStack_80,&uStack_59,param_3 + 8,param_3 + 4);
                    /* try { // try from 0084349c to 008434a3 has its CatchHandler @ 00843628 */
  plVar4 = (long *)operator_new(0x68);
  plVar1 = plVar4 + 3;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_0098ddd8;
                    /* try { // try from 008434bc to 008434cb has its CatchHandler @ 00843610 */
  FUN_00844184(plVar1,auStack_80,param_2 + 8);
  local_70 = plVar1;
  local_68 = plVar4;
  if ((local_78 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_78 + 1), lVar5 == 0)) {
    (**(code **)(*local_78 + 0x10))(local_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 00843500 to 00843507 has its CatchHandler @ 00843600 */
  plVar6 = (long *)operator_new(0x1a0);
  puVar3 = PTR_DAT_0099dca0;
  plVar1 = plVar6 + 4;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)(puVar3 + 0x10);
                    /* try { // try from 00843524 to 0084353b has its CatchHandler @ 008435e8 */
  FUN_00844394(plVar1,param_3,&local_70,param_2 + 8,param_2);
  plVar4 = local_70;
  *param_1 = (long)plVar1;
  param_1[1] = (long)plVar6;
  local_90 = plVar1;
  local_88 = plVar6;
  FUN_00757d00(1,plVar6 + 2);
                    /* try { // try from 00843554 to 0084355f has its CatchHandler @ 008435c8 */
  facebook::react::EventEmitter::facebook::react::EventEmitter::setShadowNodeFamily
            (plVar4,&local_90);
  if (local_88 != (long *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar1 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar5 == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00843650  FUN_00843650 =====

void FUN_00843650(void)

{
  return;
}


// ===== 00843654  FUN_00843654 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00843654(long param_1,long param_2)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x7e8) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 2000);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x7f8));
    bVar1 = *(byte *)(param_1 + 2000);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x7b8);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x7e0));
    bVar1 = *(byte *)(param_1 + 0x7b8);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x790);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x7c8));
    bVar1 = *(byte *)(param_1 + 0x790);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x778);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x7a0));
    bVar1 = *(byte *)(param_1 + 0x778);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x760);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x788));
    bVar1 = *(byte *)(param_1 + 0x760);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x748);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x770));
    bVar1 = *(byte *)(param_1 + 0x748);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x728);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x758));
    bVar1 = *(byte *)(param_1 + 0x728);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x710);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x738));
    bVar1 = *(byte *)(param_1 + 0x710);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x6f8);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x720));
    bVar1 = *(byte *)(param_1 + 0x6f8);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x6e0);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x708));
    bVar1 = *(byte *)(param_1 + 0x6e0);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x6f0));
  }
  FUN_0078917c(param_1,param_2 + 8);
  return;
}


// ===== 00843780  FUN_00843780 =====

void FUN_00843780(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 008437d0  FUN_008437d0 =====

void FUN_008437d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 uVar8;
  
  puVar6 = (undefined8 *)operator_new(0x400);
  uVar8 = *param_5;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_0098dc20;
                    /* try { // try from 00843818 to 00843827 has its CatchHandler @ 008438c0 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4,uVar8);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_0098dc70;
  uVar2 = *(uint *)((long)puVar6 + 0x6c);
  uVar1 = uVar2 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar2 & 0xfffffff8 | uVar1;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar8 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar8;
  cVar3 = *(char *)(lVar7 + 0x6b0);
  cVar4 = *(char *)(lVar7 + 0x6b1);
  cVar5 = *(char *)(lVar7 + 0x1e8);
  *param_1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  param_1[1] = puVar6;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar2 & 0xfffff000 |
       uVar2 & 0x7f8 | uVar1 | (uint)((cVar3 != '\0' || cVar4 != '\0') || cVar5 != '\0') << 0xb;
  return;
}


// ===== 008438dc  FUN_008438dc =====

void FUN_008438dc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098dc20;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008438ec  FUN_008438ec =====

void FUN_008438ec(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098dc20;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0084391c  FUN_0084391c =====

void FUN_0084391c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00843924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00843928  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0084392c  FUN_0084392c =====

void FUN_0084392c(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_0099de98 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00757990(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x79];
    }
    param_1[0x7a] = (long)pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = (void *)param_1[0x73];
  if (pvVar4 != (void *)0x0) {
    param_1[0x74] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  FUN_007890e8(param_1 + 0x23);
  FUN_00789784(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008439ec  FUN_008439ec =====

void FUN_008439ec(long param_1)

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


// ===== 00843a54  FUN_00843a54 =====

bool FUN_00843a54(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 00843a6c  FUN_00843a6c =====

bool FUN_00843a6c(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 00843a84  FUN_00843a84 =====

void FUN_00843a84(undefined8 *param_1,undefined8 param_2,ShadowNode *param_3,
                 ShadowNodeFragment *param_4)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 uVar8;
  
  puVar6 = (undefined8 *)operator_new(0x400);
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_0098dc20;
                    /* try { // try from 00843ac4 to 00843ad3 has its CatchHandler @ 00843b6c */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_0098dc70;
  uVar2 = *(uint *)((long)puVar6 + 0x6c);
  uVar1 = uVar2 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar2 & 0xfffffff8 | uVar1;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar8 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar8;
  cVar3 = *(char *)(lVar7 + 0x6b0);
  cVar4 = *(char *)(lVar7 + 0x6b1);
  cVar5 = *(char *)(lVar7 + 0x1e8);
  *param_1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  param_1[1] = puVar6;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar2 & 0xfffff000 |
       uVar2 & 0x7f8 | uVar1 | (uint)((cVar3 != '\0' || cVar4 != '\0') || cVar5 != '\0') << 0xb;
  return;
}


// ===== 00843b88  FUN_00843b88 =====

void FUN_00843b88(undefined8 *param_1,PropsParserContext *param_2,RawProps *param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  RNDatePickerProps *pRVar4;
  undefined1 uStack_59;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pRVar4 = (RNDatePickerProps *)*param_4;
  if (pRVar4 == (RNDatePickerProps *)0x0) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNDatePickerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNDatePickerPropsENS0_24RNDatePickerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e448
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNDatePickerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNDatePickerPropsENS0_24RNDatePickerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e448
                                   ), iVar2 != 0)) {
                    /* try { // try from 00843c54 to 00843c63 has its CatchHandler @ 00843c90 */
      FUN_00843efc(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNDatePickerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNDatePickerPropsENS0_24RNDatePickerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e440
                   ,&uStack_59);
      __cxa_atexit(FUN_00843eac,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNDatePickerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNDatePickerPropsENS0_24RNDatePickerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e440
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNDatePickerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNDatePickerPropsENS0_24RNDatePickerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e448
                         );
    }
    pRVar4 = *(RNDatePickerProps **)
              PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNDatePickerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNDatePickerPropsENS0_24RNDatePickerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e440
    ;
  }
  puVar3 = (undefined8 *)operator_new(0x818);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_0098dd88;
                    /* try { // try from 00843c00 to 00843c13 has its CatchHandler @ 00843ca4 */
  facebook::react::RNDatePickerProps::RNDatePickerProps
            ((RNDatePickerProps *)(puVar3 + 3),param_2,pRVar4,param_3);
  *param_1 = (RNDatePickerProps *)(puVar3 + 3);
  param_1[1] = puVar3;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00843cd4  FUN_00843cd4 =====

void FUN_00843cd4(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  plVar3 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = *param_1;
  if (*param_3 == 0) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNDatePickerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNDatePickerPropsENS0_24RNDatePickerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e448
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNDatePickerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNDatePickerPropsENS0_24RNDatePickerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e448
                                   ), iVar2 != 0)) {
                    /* try { // try from 00843db8 to 00843dc7 has its CatchHandler @ 00843df4 */
      FUN_00843efc(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNDatePickerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNDatePickerPropsENS0_24RNDatePickerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e440
                   ,local_70);
      __cxa_atexit(FUN_00843eac,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNDatePickerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNDatePickerPropsENS0_24RNDatePickerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e440
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNDatePickerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNDatePickerPropsENS0_24RNDatePickerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e448
                         );
    }
    local_50 = (long *)0x0;
                    /* try { // try from 00843d44 to 00843d57 has its CatchHandler @ 00843e08 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*(undefined8 *)
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNDatePickerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNDatePickerPropsENS0_24RNDatePickerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e440
               ,param_2,local_70);
  }
  else {
    local_50 = (long *)0x0;
                    /* try { // try from 00843d08 to 00843d1f has its CatchHandler @ 00843e0c */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*param_3,param_2,local_70);
  }
  if (local_50 == local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00843d84;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_00843d84:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00843e5c  FUN_00843e5c =====

void FUN_00843e5c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00843eac  FUN_00843eac =====

void FUN_00843eac(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00843efc  FUN_00843efc =====

void FUN_00843efc(undefined8 *param_1)

{
  undefined8 *__s;
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x818);
  __s = puVar3 + 3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_0098dd38;
  memset(__s,0,0x800);
                    /* try { // try from 00843f40 to 00843f53 has its CatchHandler @ 00844020 */
  FUN_00788b10(__s,PTR_PTR_0099e460 + 0x10);
  *(undefined4 *)((long)puVar3 + 0x5f4) = 0;
  *(undefined1 *)(puVar3 + 0xbf) = 0;
  *(undefined1 *)(puVar3 + 0xcb) = 0;
  *(undefined1 *)(puVar3 + 0xcc) = 0;
  *(undefined1 *)(puVar3 + 0xd8) = 0;
  *(undefined1 *)(puVar3 + 0xda) = 0;
  *(undefined1 *)((long)puVar3 + 0x6d4) = 0;
  *(undefined1 *)(puVar3 + 0xdb) = 0;
  *(undefined1 *)((long)puVar3 + 0x6dc) = 0;
  *(undefined1 *)(puVar3 + 0xdc) = 0;
  *(undefined1 *)((long)puVar3 + 0x6e4) = 0;
  *(undefined1 *)(puVar3 + 0xdd) = 0;
  *(undefined1 *)((long)puVar3 + 0x6ec) = 0;
  *(undefined1 *)(puVar3 + 0xde) = 0;
  *(undefined1 *)((long)puVar3 + 0x6f4) = 0;
  puVar2 = PTR_vtable_0099e458;
  *(undefined4 *)(puVar3 + 0xd9) = 0;
  *(undefined2 *)((long)puVar3 + 0x6cc) = 0;
  puVar3[0xed] = 0;
  puVar3[0xec] = 0;
  puVar3[3] = puVar2 + 0x20;
  puVar3[0xeb] = 0x200000000;
  uVar1 = DAT_00374d58;
  puVar3[0xea] = 0;
  puVar3[0xe9] = 0;
  puVar3[0xe8] = 0;
  puVar3[0xe7] = 0;
  puVar3[0xe6] = 0;
  puVar3[0xe5] = 0;
  puVar3[0xe4] = 0;
  puVar3[0xe3] = 0;
  puVar3[0xe2] = 0;
  puVar3[0xe1] = 0;
  puVar3[0xe0] = 0;
  puVar3[0xdf] = 0;
  puVar3[0xef] = 0;
  puVar3[0xee] = 0;
  puVar3[0xf1] = 0;
  puVar3[0xf0] = 0;
  puVar3[0xf3] = 0;
  puVar3[0xf2] = 0;
  puVar3[0xf5] = 0;
  puVar3[0xf4] = 0;
  puVar3[0xf7] = 0;
  puVar3[0xf6] = 0;
  puVar3[0xf8] = uVar1;
  *(undefined2 *)(puVar3 + 0xf9) = 0;
  puVar3[0xfb] = 0;
  puVar3[0xfa] = 0;
  puVar3[0xfd] = 0;
  puVar3[0xfc] = 0;
  puVar3[0xff] = 0;
  puVar3[0xfe] = 0;
  puVar3[0x101] = 0;
  puVar3[0x100] = 0;
  puVar3[0x102] = 0;
  *param_1 = __s;
  param_1[1] = puVar3;
  return;
}


// ===== 0084403c  FUN_0084403c =====

void FUN_0084403c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098dd38;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0084404c  FUN_0084404c =====

void FUN_0084404c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098dd38;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0084407c  FUN_0084407c =====

void FUN_0084407c(long param_1)

{
  FUN_00843654(param_1 + 0x18,PTR_PTR_0099e460);
  return;
}


// ===== 0084408c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00844090  FUN_00844090 =====

void FUN_00844090(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098dd88;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008440a0  FUN_008440a0 =====

void FUN_008440a0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098dd88;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008440d0  FUN_008440d0 =====

void FUN_008440d0(long param_1)

{
  FUN_00843654(param_1 + 0x18,PTR_PTR_0099e460);
  return;
}


// ===== 008440e0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008440e4  FUN_008440e4 =====

void FUN_008440e4(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00844134  FUN_00844134 =====

void FUN_00844134(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098ddd8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00844144  FUN_00844144 =====

void FUN_00844144(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098ddd8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00844174  FUN_00844174 =====

void FUN_00844174(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0084417c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00844180  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00844184  FUN_00844184 =====

EventEmitter * FUN_00844184(EventEmitter *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long *plStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plStack_48 = (long *)param_2[1];
  local_50 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  local_60 = *param_3;
  local_58 = param_3[1];
  if (local_58 != 0) {
    FUN_00757d00(1,local_58 + 0x10);
  }
                    /* try { // try from 008441cc to 008441db has its CatchHandler @ 008442a8 */
  facebook::react::EventEmitter::EventEmitter(param_1,&local_50,&local_60);
  *(undefined ***)param_1 = &PTR_FUN_0097ff10;
                    /* try { // try from 008441ec to 008441f3 has its CatchHandler @ 00844298 */
  plVar3 = (long *)operator_new(0x58);
  puVar2 = PTR_DAT_0099dc90;
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[4] = 0;
  plVar3[3] = 0;
  *(long **)(param_1 + 0x40) = plVar3 + 3;
  *(long **)(param_1 + 0x48) = plVar3;
  plVar3[6] = 0;
  plVar3[5] = 0;
  plVar3[8] = 0;
  plVar3[7] = 0;
  *(undefined8 *)((long)plVar3 + 0x4c) = 0;
  *(undefined8 *)((long)plVar3 + 0x44) = 0;
  *(undefined ***)param_1 = &PTR_FUN_0098de28;
  if (local_58 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar3 = plStack_48;
  if ((plStack_48 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,plStack_48 + 1), lVar4 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008442dc  FUN_008442dc =====

void FUN_008442dc(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = (long)(PTR_DAT_0099dc88 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = (long)&PTR_FUN_0097ff80;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 00844394  FUN_00844394 =====

ShadowNodeFamily *
FUN_00844394(ShadowNodeFamily *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = *param_3;
  local_50 = (long *)param_3[1];
  if (local_50 != (long *)0x0) {
    FUN_00757d00(1,local_50 + 1);
  }
  local_68 = *param_4;
  local_60 = param_4[1];
  if (local_60 != 0) {
    FUN_00757d00(1,local_60 + 0x10);
  }
                    /* try { // try from 008443f8 to 0084440f has its CatchHandler @ 00844478 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(param_1,param_2,&local_58,&local_68,param_5);
  if (local_60 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008444b0  facebook::react::RNDatePickerEventEmitter::onChange =====

/* facebook::react::RNDatePickerEventEmitter::onChange(facebook::react::RNDatePickerEventEmitter::OnChange)
   const */

void __thiscall
facebook::react::RNDatePickerEventEmitter::onChange
          (undefined8 param_1,RNDatePickerEventEmitter *this)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78 [16];
  void *local_68;
  undefined **local_60;
  undefined8 local_58;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78[0] = 0xc;
  local_78[7] = 0;
  local_78[1] = 99;
  local_78[2] = 0x68;
  local_78[3] = 0x61;
  local_78[4] = 0x6e;
  local_78[5] = 0x67;
  local_78[6] = 0x65;
  local_60 = &PTR_FUN_0098de60;
                    /* try { // try from 00844504 to 00844513 has its CatchHandler @ 00844570 */
  local_58 = param_1;
  local_40 = &local_60;
  ::facebook::react::EventEmitter::dispatchEvent(this,local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00844540;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00844540:
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008445d0  facebook::react::RNDatePickerEventEmitter::onConfirm =====

/* facebook::react::RNDatePickerEventEmitter::onConfirm(facebook::react::RNDatePickerEventEmitter::OnConfirm)
   const */

void __thiscall
facebook::react::RNDatePickerEventEmitter::onConfirm
          (undefined8 param_1,RNDatePickerEventEmitter *this)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78 [16];
  void *local_68;
  undefined **local_60;
  undefined8 local_58;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78[0] = 0xe;
  local_78[8] = 0;
  local_78[1] = 99;
  local_78[2] = 0x6f;
  local_78[3] = 0x6e;
  local_78[4] = 0x66;
  local_78[5] = 0x69;
  local_78[6] = 0x72;
  local_78[7] = 0x6d;
  local_60 = &PTR_FUN_0098dee0;
                    /* try { // try from 00844628 to 00844637 has its CatchHandler @ 00844694 */
  local_58 = param_1;
  local_40 = &local_60;
  ::facebook::react::EventEmitter::dispatchEvent(this,local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00844664;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00844664:
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008446f4  facebook::react::RNDatePickerEventEmitter::onCancel =====

/* facebook::react::RNDatePickerEventEmitter::onCancel(facebook::react::RNDatePickerEventEmitter::OnCancel)
   const */

void facebook::react::RNDatePickerEventEmitter::onCancel(undefined8 param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78 [16];
  void *local_68;
  undefined **local_60 [4];
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78[0] = 0xc;
  local_78[1] = 99;
  local_78[2] = 0x61;
  local_78[3] = 0x6e;
  local_78[4] = 99;
  local_78[5] = 0x65;
  local_78[6] = 0x6c;
  local_78[7] = 0;
  local_60[0] = &PTR_FUN_0098df60;
                    /* try { // try from 00844744 to 00844753 has its CatchHandler @ 008447b0 */
  local_40 = local_60;
  ::facebook::react::EventEmitter::dispatchEvent(param_1,local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00844780;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00844780:
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00844810  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00844814  FUN_00844814 =====

void FUN_00844814(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_0098de60;
  puVar1[1] = uVar2;
  return;
}


// ===== 00844848  FUN_00844848 =====

void FUN_00844848(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_0098de60;
  param_2[1] = uVar1;
  return;
}


// ===== 0084485c  FUN_0084485c =====

void FUN_0084485c(void)

{
  return;
}


// ===== 00844860  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00844864  FUN_00844864 =====

void FUN_00844864(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 008448a4 to 008448bb has its CatchHandler @ 008448f0 */
  FUN_007ce2f8(&local_40,param_3,"timestamp",param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00844928  FUN_00844928 =====

long FUN_00844928(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react24RNDatePickerEventEmitter8onChangeENS1_8OnChangeEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00844944  FUN_00844944 =====

pointer_____offset_0x10___ * FUN_00844944(void)

{
  return &PTR_vtable_0098dec0;
}


// ===== 00844950  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00844954  FUN_00844954 =====

void FUN_00844954(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_0098dee0;
  puVar1[1] = uVar2;
  return;
}


// ===== 00844988  FUN_00844988 =====

void FUN_00844988(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_0098dee0;
  param_2[1] = uVar1;
  return;
}


// ===== 0084499c  FUN_0084499c =====

void FUN_0084499c(void)

{
  return;
}


// ===== 008449a0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008449a4  FUN_008449a4 =====

void FUN_008449a4(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 008449e4 to 008449fb has its CatchHandler @ 00844a30 */
  FUN_007ce2f8(&local_40,param_3,"timestamp",param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00844a68  FUN_00844a68 =====

long FUN_00844a68(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react24RNDatePickerEventEmitter9onConfirmENS1_9OnConfirmEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00844a84  FUN_00844a84 =====

pointer_____offset_0x10___ * FUN_00844a84(void)

{
  return &PTR_vtable_0098df40;
}


// ===== 00844a90  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00844a94  FUN_00844a94 =====

void FUN_00844a94(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_0098df60;
  return;
}


// ===== 00844ab8  FUN_00844ab8 =====

void FUN_00844ab8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_0098df60;
  return;
}


// ===== 00844ac8  FUN_00844ac8 =====

void FUN_00844ac8(void)

{
  return;
}


// ===== 00844acc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00844ad0  FUN_00844ad0 =====

void FUN_00844ad0(undefined4 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_30,param_3);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00844b38  FUN_00844b38 =====

long FUN_00844b38(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react24RNDatePickerEventEmitter8onCancelENS1_8OnCancelEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00844b54  FUN_00844b54 =====

pointer_____offset_0x10___ * FUN_00844b54(void)

{
  return &PTR_vtable_0098dfc0;
}


// ===== 00844b60  facebook::react::RNDatePickerProps::RNDatePickerProps =====

/* facebook::react::RNDatePickerProps::RNDatePickerProps(facebook::react::PropsParserContext const&,
   facebook::react::RNDatePickerProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::RNDatePickerProps::RNDatePickerProps
          (RNDatePickerProps *this,PropsParserContext *param_1,RNDatePickerProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  undefined4 uVar3;
  ulong *puVar4;
  function *in_x4;
  long lVar5;
  ulong local_90 [2];
  void *local_80;
  long *local_70;
  long local_58;
  
  puVar4 = local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 00844ba0 to 00844baf has its CatchHandler @ 00845178 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if ((ulong *)local_70 == local_90) {
    lVar5 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_00844bdc;
    lVar5 = 5;
    puVar4 = (ulong *)local_70;
  }
  (**(code **)(*puVar4 + lVar5 * 8))();
LAB_00844bdc:
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
  *(undefined8 *)this = *(undefined8 *)param_1;
                    /* try { // try from 00844bec to 00844c13 has its CatchHandler @ 00845164 */
  FUN_007ea274(this + 0x6e0,param_2);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 00844c2c to 00844c53 has its CatchHandler @ 00845150 */
  FUN_007ea274(this + 0x6f8,param_2);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 00844c6c to 00844c93 has its CatchHandler @ 0084513c */
  FUN_007ea274(this + 0x710,param_2);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 00844cac to 00844cd3 has its CatchHandler @ 00845128 */
  FUN_007ea274(this + 0x728,param_2);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = local_90[0] & 0xffffffff00000000;
                    /* try { // try from 00844ce8 to 00844d0b has its CatchHandler @ 00845120 */
  uVar3 = FUN_007ece34(param_2);
  *(undefined4 *)(this + 0x740) = uVar3;
  local_90[0] = CONCAT44(local_90[0]._4_4_,2);
                    /* try { // try from 00844d18 to 00844d27 has its CatchHandler @ 00845118 */
  uVar3 = FUN_008451b0();
  *(undefined4 *)(this + 0x744) = uVar3;
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 00844d34 to 00844d5b has its CatchHandler @ 00845104 */
  FUN_007ea274(this + 0x748,param_2);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 00844d74 to 00844d9b has its CatchHandler @ 008450f0 */
  FUN_007ea274(this + 0x760,param_2);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 00844db4 to 00844ddb has its CatchHandler @ 008450dc */
  FUN_007ea274(this + 0x778,param_2);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 00844df4 to 00844e1b has its CatchHandler @ 008450c8 */
  FUN_007ea274(this + 0x790,param_2);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0]._0_4_ = 1;
                    /* try { // try from 00844e34 to 00844e43 has its CatchHandler @ 0084501c */
  uVar3 = FUN_00845364();
  *(undefined4 *)(this + 0x7a8) = uVar3;
  local_90[0] = CONCAT44(local_90[0]._4_4_,2);
                    /* try { // try from 00844e50 to 00844e5f has its CatchHandler @ 00845018 */
  uVar3 = FUN_00845518();
  *(undefined4 *)(this + 0x7ac) = uVar3;
  local_90[0] = local_90[0] & 0xffffffffffffff00;
                    /* try { // try from 00844e68 to 00844e8b has its CatchHandler @ 00845014 */
  bVar2 = FUN_007ea510(param_2);
  local_90[0] = local_90[0] & 0xffffffffffffff00;
  this[0x7b0] = (RNDatePickerProps)(bVar2 & 1);
                    /* try { // try from 00844e98 to 00844ebb has its CatchHandler @ 00845010 */
  bVar2 = FUN_007ea510(param_2);
  local_90[0] = 0;
  local_90[1] = 0;
  this[0x7b1] = (RNDatePickerProps)(bVar2 & 1);
  local_80 = (void *)0x0;
                    /* try { // try from 00844ecc to 00844ef3 has its CatchHandler @ 00844ff8 */
  FUN_007ea274(this + 0x7b8,param_2);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 00844f0c to 00844f33 has its CatchHandler @ 00844fd4 */
  FUN_007ea274(this + 2000,param_2);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 00844f4c to 00844f73 has its CatchHandler @ 00844fb0 */
  FUN_007ea274(this + 0x7e8,param_2);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008451b0  FUN_008451b0 =====

void FUN_008451b0(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined4 local_50 [6];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = facebook::react::RawProps::at(param_1,"mode",(char *)0x0);
  if (lVar2 == 0) {
    local_50[0] = *param_2;
  }
  else {
    uVar3 = FUN_00807970();
    if ((uVar3 & 1) == 0) {
      local_50[0] = *param_3;
    }
    else {
                    /* try { // try from 00845228 to 00845233 has its CatchHandler @ 00845244 */
      FUN_00847008(lVar2,local_50);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_50[0]);
}


// ===== 00845364  FUN_00845364 =====

void FUN_00845364(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined4 local_50 [6];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = facebook::react::RawProps::at(param_1,"is24hourSource",(char *)0x0);
  if (lVar2 == 0) {
    local_50[0] = *param_2;
  }
  else {
    uVar3 = FUN_00807970();
    if ((uVar3 & 1) == 0) {
      local_50[0] = *param_3;
    }
    else {
                    /* try { // try from 008453dc to 008453e7 has its CatchHandler @ 008453f8 */
      FUN_0084715c(lVar2,local_50);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_50[0]);
}


// ===== 00845518  FUN_00845518 =====

void FUN_00845518(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined4 local_50 [6];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = facebook::react::RawProps::at(param_1,"theme",(char *)0x0);
  if (lVar2 == 0) {
    local_50[0] = *param_2;
  }
  else {
    uVar3 = FUN_00807970();
    if ((uVar3 & 1) == 0) {
      local_50[0] = *param_3;
    }
    else {
                    /* try { // try from 00845590 to 0084559b has its CatchHandler @ 008455ac */
      FUN_00847280(lVar2,local_50);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_50[0]);
}


// ===== 008456cc  facebook::react::RNDatePickerProps::RNDatePickerProps =====

/* facebook::react::RNDatePickerProps::RNDatePickerProps(facebook::react::PropsParserContext const&,
   facebook::react::RNDatePickerProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::RNDatePickerProps::RNDatePickerProps
          (RNDatePickerProps *this,PropsParserContext *param_1,RNDatePickerProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  undefined4 uVar3;
  ulong *puVar4;
  long lVar5;
  ulong local_90 [2];
  void *local_80;
  long *local_70;
  long local_58;
  
  puVar4 = local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 00845708 to 0084572b has its CatchHandler @ 00845cfc */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_0099e460 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if ((ulong *)local_70 == local_90) {
    lVar5 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_00845758;
    lVar5 = 5;
    puVar4 = (ulong *)local_70;
  }
  (**(code **)(*puVar4 + lVar5 * 8))();
LAB_00845758:
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
  *(undefined **)this = PTR_vtable_0099e458 + 0x20;
                    /* try { // try from 00845770 to 00845797 has its CatchHandler @ 00845ce8 */
  FUN_007ea274(this + 0x6e0,param_1,param_3,"locale",param_2 + 0x6e0,local_90,0,0);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 008457b0 to 008457d7 has its CatchHandler @ 00845cd4 */
  FUN_007ea274(this + 0x6f8,param_1,param_3,&DAT_00368e4c,param_2 + 0x6f8,local_90,0,0);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 008457f0 to 00845817 has its CatchHandler @ 00845cc0 */
  FUN_007ea274(this + 0x710,param_1,param_3,"maximumDate",param_2 + 0x710,local_90,0,0);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 00845830 to 00845857 has its CatchHandler @ 00845cac */
  FUN_007ea274(this + 0x728,param_1,param_3,"minimumDate",param_2 + 0x728,local_90,0,0);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = local_90[0] & 0xffffffff00000000;
                    /* try { // try from 0084586c to 0084588f has its CatchHandler @ 00845ca4 */
  uVar3 = FUN_007ece34(param_1,param_3,"minuteInterval",param_2 + 0x740,local_90,0,0);
  *(undefined4 *)(this + 0x740) = uVar3;
  local_90[0] = CONCAT44(local_90[0]._4_4_,2);
                    /* try { // try from 0084589c to 008458ab has its CatchHandler @ 00845c9c */
  uVar3 = FUN_008451b0(param_3,param_2 + 0x744,local_90);
  *(undefined4 *)(this + 0x744) = uVar3;
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 008458b8 to 008458df has its CatchHandler @ 00845c88 */
  FUN_007ea274(this + 0x748,param_1,param_3,"timeZoneOffsetInMinutes",param_2 + 0x748,local_90,0,0);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 008458f8 to 0084591f has its CatchHandler @ 00845c74 */
  FUN_007ea274(this + 0x760,param_1,param_3,"textColor",param_2 + 0x760,local_90,0,0);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 00845938 to 0084595f has its CatchHandler @ 00845c60 */
  FUN_007ea274(this + 0x778,param_1,param_3,"dividerColor",param_2 + 0x778,local_90,0,0);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 00845978 to 0084599f has its CatchHandler @ 00845c4c */
  FUN_007ea274(this + 0x790,param_1,param_3,"buttonColor",param_2 + 0x790,local_90,0,0);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0]._0_4_ = 1;
                    /* try { // try from 008459b8 to 008459c7 has its CatchHandler @ 00845ba0 */
  uVar3 = FUN_00845364(param_3,param_2 + 0x7a8,local_90);
  *(undefined4 *)(this + 0x7a8) = uVar3;
  local_90[0] = CONCAT44(local_90[0]._4_4_,2);
                    /* try { // try from 008459d4 to 008459e3 has its CatchHandler @ 00845b9c */
  uVar3 = FUN_00845518(param_3,param_2 + 0x7ac,local_90);
  *(undefined4 *)(this + 0x7ac) = uVar3;
  local_90[0] = local_90[0] & 0xffffffffffffff00;
                    /* try { // try from 008459ec to 00845a0f has its CatchHandler @ 00845b98 */
  bVar2 = FUN_007ea510(param_1,param_3,"modal",param_2 + 0x7b0,local_90,0,0);
  local_90[0] = local_90[0] & 0xffffffffffffff00;
  this[0x7b0] = (RNDatePickerProps)(bVar2 & 1);
                    /* try { // try from 00845a1c to 00845a3f has its CatchHandler @ 00845b94 */
  bVar2 = FUN_007ea510(param_1,param_3,&DAT_00366a86,param_2 + 0x7b1,local_90,0,0);
  local_90[0] = 0;
  local_90[1] = 0;
  this[0x7b1] = (RNDatePickerProps)(bVar2 & 1);
  local_80 = (void *)0x0;
                    /* try { // try from 00845a50 to 00845a77 has its CatchHandler @ 00845b7c */
  FUN_007ea274(this + 0x7b8,param_1,param_3,"confirmText",param_2 + 0x7b8,local_90,0,0);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 00845a90 to 00845ab7 has its CatchHandler @ 00845b58 */
  FUN_007ea274(this + 2000,param_1,param_3,"cancelText",param_2 + 2000,local_90,0,0);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 00845ad0 to 00845af7 has its CatchHandler @ 00845b34 */
  FUN_007ea274(this + 0x7e8,param_1,param_3,"title",param_2 + 0x7e8,local_90,0,0);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00845d34  facebook::react::RNDatePickerProps::getDiffPropsImplementationTarget =====

/* facebook::react::RNDatePickerProps::getDiffPropsImplementationTarget() const */

char * facebook::react::RNDatePickerProps::getDiffPropsImplementationTarget(void)

{
  return "RNDatePicker";
}


// ===== 00845d40  facebook::react::RNDatePickerProps::getDiffProps =====

/* facebook::react::RNDatePickerProps::getDiffProps(facebook::react::Props const*) const */

void facebook::react::RNDatePickerProps::getDiffProps(Props *param_1)

{
  ulong uVar1;
  ulong uVar2;
  Props PVar3;
  Props PVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  dynamic *pdVar8;
  Props *in_x1;
  Props *pPVar9;
  undefined4 *in_x8;
  undefined4 *puVar10;
  ulong uVar11;
  Props *pPVar12;
  Props *pPVar13;
  char *pcVar14;
  ulong uVar15;
  size_t sVar16;
  undefined4 local_1f4;
  ulong local_1f0;
  undefined8 uStack_1e8;
  void *local_1e0;
  ulong local_1d0;
  undefined8 uStack_1c8;
  void *local_1c0;
  ulong local_1b0;
  undefined8 uStack_1a8;
  void *local_1a0;
  ulong local_190;
  undefined8 uStack_188;
  void *local_180;
  ulong local_170;
  undefined8 uStack_168;
  void *local_160;
  ulong local_150;
  undefined8 uStack_148;
  void *local_140;
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  ulong local_110;
  undefined8 uStack_108;
  void *local_100;
  ulong local_f0;
  undefined8 uStack_e8;
  void *local_e0;
  ulong local_d0;
  undefined8 uStack_c8;
  void *local_c0;
  ulong local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  undefined4 local_90;
  undefined2 local_8c;
  undefined4 local_88 [2];
  undefined1 local_80;
  undefined4 uStack_7f;
  undefined1 uStack_7b;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined5 uStack_76;
  undefined1 uStack_71;
  undefined7 local_70;
  undefined1 uStack_69;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  if (((DAT_009b9160 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_009b9160), iVar6 != 0)) {
    memset(&DAT_009b8960,0,0x800);
                    /* try { // try from 00846cbc to 00846cbf has its CatchHandler @ 00846d2c */
    FUN_00846ef0();
    __cxa_atexit(FUN_00846fd0,&DAT_009b8960,&PTR_LOOP_008d5d30);
    __cxa_guard_release(&DAT_009b9160);
  }
  pPVar13 = (Props *)&DAT_009b8960;
  if (in_x1 != (Props *)0x0) {
    pPVar13 = in_x1;
  }
  if (pPVar13 == param_1) {
    local_68 = 0;
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_76 = 0;
    uStack_71 = 0;
    local_70 = 0;
    uStack_69 = 0;
    local_88[0] = 5;
    local_60 = 0x3f800000;
    *in_x8 = 5;
    local_80 = 0;
    uStack_7f = 0;
    uStack_7b = 0;
    uStack_7a = 0;
    uStack_79 = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
    folly::dynamic::folly::dynamic::destroy(local_88);
  }
  else {
    ::facebook::react::HostPlatformViewProps::getDiffProps(param_1);
    PVar3 = param_1[0x6e0];
    PVar4 = pPVar13[0x6e0];
    uVar15 = *(ulong *)(param_1 + 0x6e8);
    uVar11 = (ulong)((byte)PVar3 >> 1);
    uVar2 = uVar11;
    if (((byte)PVar3 & 1) != 0) {
      uVar2 = uVar15;
    }
    uVar1 = (ulong)((byte)PVar4 >> 1);
    if (((byte)PVar4 & 1) != 0) {
      uVar1 = *(ulong *)(pPVar13 + 0x6e8);
    }
    if (uVar2 == uVar1) {
      pPVar9 = pPVar13 + 0x6e1;
      if (((byte)PVar4 & 1) != 0) {
        pPVar9 = *(Props **)(pPVar13 + 0x6f0);
      }
      if (((byte)PVar3 & 1) == 0) {
        if (1 < (byte)PVar3) {
          pPVar12 = param_1 + 0x6e1;
          do {
            if (*pPVar12 != *pPVar9) goto LAB_00845e54;
            uVar11 = uVar11 - 1;
            pPVar12 = pPVar12 + 1;
            pPVar9 = pPVar9 + 1;
          } while (uVar11 != 0);
        }
      }
      else {
        pcVar14 = *(char **)(param_1 + 0x6f0);
        iVar6 = memcmp(pcVar14,pPVar9,uVar15);
        if (iVar6 != 0) goto LAB_00845e8c;
      }
    }
    else {
LAB_00845e54:
      if (((byte)PVar3 & 1) == 0) {
        uStack_a8 = *(undefined8 *)(param_1 + 0x6e8);
        local_b0 = *(ulong *)(param_1 + 0x6e0);
        local_a0 = *(void **)(param_1 + 0x6f0);
      }
      else {
        pcVar14 = *(char **)(param_1 + 0x6f0);
LAB_00845e8c:
                    /* try { // try from 00845e8c to 00845e9b has its CatchHandler @ 00846d74 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_b0,pcVar14,uVar15);
      }
      local_88[0] = 6;
      uStack_78 = (undefined1)uStack_a8;
      uStack_77 = (undefined1)((ulong)uStack_a8 >> 8);
      uStack_76 = (undefined5)((ulong)uStack_a8 >> 0x10);
      uStack_71 = (undefined1)((ulong)uStack_a8 >> 0x38);
      local_80 = (undefined1)local_b0;
      uStack_7f = (undefined4)(local_b0 >> 8);
      uStack_7b = (undefined1)(local_b0 >> 0x28);
      uStack_7a = (undefined1)(local_b0 >> 0x30);
      uStack_79 = (undefined1)(local_b0 >> 0x38);
      local_70 = SUB87(local_a0,0);
      uStack_69 = (undefined1)((ulong)local_a0 >> 0x38);
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = (void *)0x0;
                    /* try { // try from 00845ebc to 00845ecf has its CatchHandler @ 00846ea8 */
      pdVar8 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar8,(dynamic *)local_88);
      folly::dynamic::folly::dynamic::destroy(local_88);
      if ((local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
    }
    PVar3 = param_1[0x6f8];
    PVar4 = pPVar13[0x6f8];
    uVar15 = *(ulong *)(param_1 + 0x700);
    uVar11 = (ulong)((byte)PVar3 >> 1);
    uVar2 = uVar11;
    if (((byte)PVar3 & 1) != 0) {
      uVar2 = uVar15;
    }
    uVar1 = (ulong)((byte)PVar4 >> 1);
    if (((byte)PVar4 & 1) != 0) {
      uVar1 = *(ulong *)(pPVar13 + 0x700);
    }
    if (uVar2 == uVar1) {
      pPVar9 = pPVar13 + 0x6f9;
      if (((byte)PVar4 & 1) != 0) {
        pPVar9 = *(Props **)(pPVar13 + 0x708);
      }
      if (((byte)PVar3 & 1) == 0) {
        if (1 < (byte)PVar3) {
          pPVar12 = param_1 + 0x6f9;
          do {
            if (*pPVar12 != *pPVar9) goto LAB_00845f64;
            uVar11 = uVar11 - 1;
            pPVar12 = pPVar12 + 1;
            pPVar9 = pPVar9 + 1;
          } while (uVar11 != 0);
        }
      }
      else {
        pcVar14 = *(char **)(param_1 + 0x708);
        iVar6 = memcmp(pcVar14,pPVar9,uVar15);
        if (iVar6 != 0) goto LAB_00845f9c;
      }
    }
    else {
LAB_00845f64:
      if (((byte)PVar3 & 1) == 0) {
        uStack_c8 = *(undefined8 *)(param_1 + 0x700);
        local_d0 = *(ulong *)(param_1 + 0x6f8);
        local_c0 = *(void **)(param_1 + 0x708);
      }
      else {
        pcVar14 = *(char **)(param_1 + 0x708);
LAB_00845f9c:
                    /* try { // try from 00845f9c to 00845fab has its CatchHandler @ 00846d70 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_d0,pcVar14,uVar15);
      }
      local_88[0] = 6;
      uStack_78 = (undefined1)uStack_c8;
      uStack_77 = (undefined1)((ulong)uStack_c8 >> 8);
      uStack_76 = (undefined5)((ulong)uStack_c8 >> 0x10);
      uStack_71 = (undefined1)((ulong)uStack_c8 >> 0x38);
      local_80 = (undefined1)local_d0;
      uStack_7f = (undefined4)(local_d0 >> 8);
      uStack_7b = (undefined1)(local_d0 >> 0x28);
      uStack_7a = (undefined1)(local_d0 >> 0x30);
      uStack_79 = (undefined1)(local_d0 >> 0x38);
      local_70 = SUB87(local_c0,0);
      uStack_69 = (undefined1)((ulong)local_c0 >> 0x38);
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = (void *)0x0;
                    /* try { // try from 00845fcc to 00845fdf has its CatchHandler @ 00846e8c */
      pdVar8 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar8,(dynamic *)local_88);
      folly::dynamic::folly::dynamic::destroy(local_88);
      if ((local_d0 & 1) != 0) {
        operator_delete(local_c0);
      }
    }
    PVar3 = param_1[0x710];
    PVar4 = pPVar13[0x710];
    uVar15 = *(ulong *)(param_1 + 0x718);
    uVar11 = (ulong)((byte)PVar3 >> 1);
    uVar2 = uVar11;
    if (((byte)PVar3 & 1) != 0) {
      uVar2 = uVar15;
    }
    uVar1 = (ulong)((byte)PVar4 >> 1);
    if (((byte)PVar4 & 1) != 0) {
      uVar1 = *(ulong *)(pPVar13 + 0x718);
    }
    if (uVar2 == uVar1) {
      pPVar9 = pPVar13 + 0x711;
      if (((byte)PVar4 & 1) != 0) {
        pPVar9 = *(Props **)(pPVar13 + 0x720);
      }
      if (((byte)PVar3 & 1) == 0) {
        if (1 < (byte)PVar3) {
          pPVar12 = param_1 + 0x711;
          do {
            if (*pPVar12 != *pPVar9) goto LAB_00846074;
            uVar11 = uVar11 - 1;
            pPVar12 = pPVar12 + 1;
            pPVar9 = pPVar9 + 1;
          } while (uVar11 != 0);
        }
      }
      else {
        pcVar14 = *(char **)(param_1 + 0x720);
        iVar6 = memcmp(pcVar14,pPVar9,uVar15);
        if (iVar6 != 0) goto LAB_008460ac;
      }
    }
    else {
LAB_00846074:
      if (((byte)PVar3 & 1) == 0) {
        uStack_e8 = *(undefined8 *)(param_1 + 0x718);
        local_f0 = *(ulong *)(param_1 + 0x710);
        local_e0 = *(void **)(param_1 + 0x720);
      }
      else {
        pcVar14 = *(char **)(param_1 + 0x720);
LAB_008460ac:
                    /* try { // try from 008460ac to 008460bb has its CatchHandler @ 00846d6c */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_f0,pcVar14,uVar15);
      }
      local_88[0] = 6;
      uStack_78 = (undefined1)uStack_e8;
      uStack_77 = (undefined1)((ulong)uStack_e8 >> 8);
      uStack_76 = (undefined5)((ulong)uStack_e8 >> 0x10);
      uStack_71 = (undefined1)((ulong)uStack_e8 >> 0x38);
      local_80 = (undefined1)local_f0;
      uStack_7f = (undefined4)(local_f0 >> 8);
      uStack_7b = (undefined1)(local_f0 >> 0x28);
      uStack_7a = (undefined1)(local_f0 >> 0x30);
      uStack_79 = (undefined1)(local_f0 >> 0x38);
      local_70 = SUB87(local_e0,0);
      uStack_69 = (undefined1)((ulong)local_e0 >> 0x38);
      local_f0 = 0;
      uStack_e8 = 0;
      local_e0 = (void *)0x0;
                    /* try { // try from 008460dc to 008460ef has its CatchHandler @ 00846e70 */
      pdVar8 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar8,(dynamic *)local_88);
      folly::dynamic::folly::dynamic::destroy(local_88);
      if ((local_f0 & 1) != 0) {
        operator_delete(local_e0);
      }
    }
    PVar3 = param_1[0x728];
    PVar4 = pPVar13[0x728];
    uVar15 = *(ulong *)(param_1 + 0x730);
    uVar11 = (ulong)((byte)PVar3 >> 1);
    uVar2 = uVar11;
    if (((byte)PVar3 & 1) != 0) {
      uVar2 = uVar15;
    }
    uVar1 = (ulong)((byte)PVar4 >> 1);
    if (((byte)PVar4 & 1) != 0) {
      uVar1 = *(ulong *)(pPVar13 + 0x730);
    }
    if (uVar2 == uVar1) {
      pPVar9 = pPVar13 + 0x729;
      if (((byte)PVar4 & 1) != 0) {
        pPVar9 = *(Props **)(pPVar13 + 0x738);
      }
      if (((byte)PVar3 & 1) == 0) {
        if (1 < (byte)PVar3) {
          pPVar12 = param_1 + 0x729;
          do {
            if (*pPVar12 != *pPVar9) goto LAB_00846184;
            uVar11 = uVar11 - 1;
            pPVar12 = pPVar12 + 1;
            pPVar9 = pPVar9 + 1;
          } while (uVar11 != 0);
        }
      }
      else {
        pcVar14 = *(char **)(param_1 + 0x738);
        iVar6 = memcmp(pcVar14,pPVar9,uVar15);
        if (iVar6 != 0) goto LAB_008461bc;
      }
    }
    else {
LAB_00846184:
      if (((byte)PVar3 & 1) == 0) {
        uStack_108 = *(undefined8 *)(param_1 + 0x730);
        local_110 = *(ulong *)(param_1 + 0x728);
        local_100 = *(void **)(param_1 + 0x738);
      }
      else {
        pcVar14 = *(char **)(param_1 + 0x738);
LAB_008461bc:
                    /* try { // try from 008461bc to 008461cb has its CatchHandler @ 00846d68 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_110,pcVar14,uVar15);
      }
      local_88[0] = 6;
      uStack_78 = (undefined1)uStack_108;
      uStack_77 = (undefined1)((ulong)uStack_108 >> 8);
      uStack_76 = (undefined5)((ulong)uStack_108 >> 0x10);
      uStack_71 = (undefined1)((ulong)uStack_108 >> 0x38);
      local_80 = (undefined1)local_110;
      uStack_7f = (undefined4)(local_110 >> 8);
      uStack_7b = (undefined1)(local_110 >> 0x28);
      uStack_7a = (undefined1)(local_110 >> 0x30);
      uStack_79 = (undefined1)(local_110 >> 0x38);
      local_70 = SUB87(local_100,0);
      uStack_69 = (undefined1)((ulong)local_100 >> 0x38);
      local_110 = 0;
      uStack_108 = 0;
      local_100 = (void *)0x0;
                    /* try { // try from 008461ec to 008461ff has its CatchHandler @ 00846e54 */
      pdVar8 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar8,(dynamic *)local_88);
      folly::dynamic::folly::dynamic::destroy(local_88);
      if ((local_110 & 1) != 0) {
        operator_delete(local_100);
      }
    }
    iVar6 = *(int *)(param_1 + 0x740);
    if (iVar6 != *(int *)(pPVar13 + 0x740)) {
                    /* try { // try from 00846230 to 00846243 has its CatchHandler @ 00846ec8 */
      piVar7 = (int *)folly::dynamic::operator[]();
      if (*piVar7 != 4) {
        folly::dynamic::folly::dynamic::destroy(piVar7);
        *piVar7 = 4;
      }
      *(long *)(piVar7 + 2) = (long)iVar6;
    }
    iVar6 = *(int *)(param_1 + 0x744);
    if (iVar6 != *(int *)(pPVar13 + 0x744)) {
      if (iVar6 == 0) {
        puVar10 = &local_90;
        local_80 = 8;
LAB_008462bc:
        uStack_7f = 0x65746164;
      }
      else {
        if (iVar6 == 2) {
          local_80 = 0x10;
          local_90 = CONCAT31(local_90._1_3_,0x74);
          puVar10 = &local_1f4;
          goto LAB_008462bc;
        }
        if (iVar6 != 1) {
          if (*(long *)(lVar5 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00846d14 to 00846d17 has its CatchHandler @ 00846d44 */
            abort();
          }
          goto LAB_00846eec;
        }
        puVar10 = &local_90;
        local_80 = 8;
        uStack_7f = 0x656d6974;
      }
      *(undefined1 *)puVar10 = 0;
      local_88[0] = 6;
      uStack_7b = (undefined1)local_90;
      uStack_78 = 0x65;
      uStack_7a = 0x69;
      uStack_79 = 0x6d;
      uStack_77 = (undefined1)local_1f4;
      local_70 = 0;
      uStack_69 = 0;
                    /* try { // try from 008462fc to 0084630f has its CatchHandler @ 00846d80 */
      pdVar8 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar8,(dynamic *)local_88);
      folly::dynamic::folly::dynamic::destroy(local_88);
    }
    PVar3 = param_1[0x748];
    PVar4 = pPVar13[0x748];
    sVar16 = *(size_t *)(param_1 + 0x750);
    uVar11 = (ulong)((byte)PVar3 >> 1);
    uVar2 = uVar11;
    if (((byte)PVar3 & 1) != 0) {
      uVar2 = sVar16;
    }
    uVar15 = (ulong)((byte)PVar4 >> 1);
    if (((byte)PVar4 & 1) != 0) {
      uVar15 = *(ulong *)(pPVar13 + 0x750);
    }
    if (uVar2 == uVar15) {
      pPVar9 = pPVar13 + 0x749;
      if (((byte)PVar4 & 1) != 0) {
        pPVar9 = *(Props **)(pPVar13 + 0x758);
      }
      if (((byte)PVar3 & 1) == 0) {
        if (1 < (byte)PVar3) {
          pPVar12 = param_1 + 0x749;
          do {
            if (*pPVar12 != *pPVar9) goto LAB_00846394;
            uVar11 = uVar11 - 1;
            pPVar12 = pPVar12 + 1;
            pPVar9 = pPVar9 + 1;
          } while (uVar11 != 0);
        }
      }
      else {
        pcVar14 = *(char **)(param_1 + 0x758);
        iVar6 = memcmp(pcVar14,pPVar9,sVar16);
        if (iVar6 != 0) goto LAB_008463cc;
      }
    }
    else {
LAB_00846394:
      if (((byte)PVar3 & 1) == 0) {
        uStack_128 = *(undefined8 *)(param_1 + 0x750);
        local_130 = *(ulong *)(param_1 + 0x748);
        local_120 = *(void **)(param_1 + 0x758);
      }
      else {
        pcVar14 = *(char **)(param_1 + 0x758);
LAB_008463cc:
                    /* try { // try from 008463cc to 008463db has its CatchHandler @ 00846d64 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_130,pcVar14,sVar16);
      }
      local_88[0] = 6;
      uStack_78 = (undefined1)uStack_128;
      uStack_77 = (undefined1)((ulong)uStack_128 >> 8);
      uStack_76 = (undefined5)((ulong)uStack_128 >> 0x10);
      uStack_71 = (undefined1)((ulong)uStack_128 >> 0x38);
      local_80 = (undefined1)local_130;
      uStack_7f = (undefined4)(local_130 >> 8);
      uStack_7b = (undefined1)(local_130 >> 0x28);
      uStack_7a = (undefined1)(local_130 >> 0x30);
      uStack_79 = (undefined1)(local_130 >> 0x38);
      local_70 = SUB87(local_120,0);
      uStack_69 = (undefined1)((ulong)local_120 >> 0x38);
      local_130 = 0;
      uStack_128 = 0;
      local_120 = (void *)0x0;
                    /* try { // try from 008463fc to 0084640f has its CatchHandler @ 00846e38 */
      pdVar8 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar8,(dynamic *)local_88);
      folly::dynamic::folly::dynamic::destroy(local_88);
      if ((local_130 & 1) != 0) {
        operator_delete(local_120);
      }
    }
    PVar3 = param_1[0x760];
    PVar4 = pPVar13[0x760];
    sVar16 = *(size_t *)(param_1 + 0x768);
    uVar11 = (ulong)((byte)PVar3 >> 1);
    uVar2 = uVar11;
    if (((byte)PVar3 & 1) != 0) {
      uVar2 = sVar16;
    }
    uVar15 = (ulong)((byte)PVar4 >> 1);
    if (((byte)PVar4 & 1) != 0) {
      uVar15 = *(ulong *)(pPVar13 + 0x768);
    }
    if (uVar2 == uVar15) {
      pPVar9 = pPVar13 + 0x761;
      if (((byte)PVar4 & 1) != 0) {
        pPVar9 = *(Props **)(pPVar13 + 0x770);
      }
      if (((byte)PVar3 & 1) == 0) {
        if (1 < (byte)PVar3) {
          pPVar12 = param_1 + 0x761;
          do {
            if (*pPVar12 != *pPVar9) goto LAB_008464a4;
            uVar11 = uVar11 - 1;
            pPVar12 = pPVar12 + 1;
            pPVar9 = pPVar9 + 1;
          } while (uVar11 != 0);
        }
      }
      else {
        pcVar14 = *(char **)(param_1 + 0x770);
        iVar6 = memcmp(pcVar14,pPVar9,sVar16);
        if (iVar6 != 0) goto LAB_008464dc;
      }
    }
    else {
LAB_008464a4:
      if (((byte)PVar3 & 1) == 0) {
        uStack_148 = *(undefined8 *)(param_1 + 0x768);
        local_150 = *(ulong *)(param_1 + 0x760);
        local_140 = *(void **)(param_1 + 0x770);
      }
      else {
        pcVar14 = *(char **)(param_1 + 0x770);
LAB_008464dc:
                    /* try { // try from 008464dc to 008464eb has its CatchHandler @ 00846d60 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_150,pcVar14,sVar16);
      }
      local_88[0] = 6;
      uStack_78 = (undefined1)uStack_148;
      uStack_77 = (undefined1)((ulong)uStack_148 >> 8);
      uStack_76 = (undefined5)((ulong)uStack_148 >> 0x10);
      uStack_71 = (undefined1)((ulong)uStack_148 >> 0x38);
      local_80 = (undefined1)local_150;
      uStack_7f = (undefined4)(local_150 >> 8);
      uStack_7b = (undefined1)(local_150 >> 0x28);
      uStack_7a = (undefined1)(local_150 >> 0x30);
      uStack_79 = (undefined1)(local_150 >> 0x38);
      local_70 = SUB87(local_140,0);
      uStack_69 = (undefined1)((ulong)local_140 >> 0x38);
      local_150 = 0;
      uStack_148 = 0;
      local_140 = (void *)0x0;
                    /* try { // try from 0084650c to 0084651f has its CatchHandler @ 00846e1c */
      pdVar8 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar8,(dynamic *)local_88);
      folly::dynamic::folly::dynamic::destroy(local_88);
      if ((local_150 & 1) != 0) {
        operator_delete(local_140);
      }
    }
    PVar3 = param_1[0x778];
    PVar4 = pPVar13[0x778];
    sVar16 = *(size_t *)(param_1 + 0x780);
    uVar11 = (ulong)((byte)PVar3 >> 1);
    uVar2 = uVar11;
    if (((byte)PVar3 & 1) != 0) {
      uVar2 = sVar16;
    }
    uVar15 = (ulong)((byte)PVar4 >> 1);
    if (((byte)PVar4 & 1) != 0) {
      uVar15 = *(ulong *)(pPVar13 + 0x780);
    }
    if (uVar2 == uVar15) {
      pPVar9 = pPVar13 + 0x779;
      if (((byte)PVar4 & 1) != 0) {
        pPVar9 = *(Props **)(pPVar13 + 0x788);
      }
      if (((byte)PVar3 & 1) == 0) {
        if (1 < (byte)PVar3) {
          pPVar12 = param_1 + 0x779;
          do {
            if (*pPVar12 != *pPVar9) goto LAB_008465b4;
            uVar11 = uVar11 - 1;
            pPVar12 = pPVar12 + 1;
            pPVar9 = pPVar9 + 1;
          } while (uVar11 != 0);
        }
      }
      else {
        pcVar14 = *(char **)(param_1 + 0x788);
        iVar6 = memcmp(pcVar14,pPVar9,sVar16);
        if (iVar6 != 0) goto LAB_008465ec;
      }
    }
    else {
LAB_008465b4:
      if (((byte)PVar3 & 1) == 0) {
        uStack_168 = *(undefined8 *)(param_1 + 0x780);
        local_170 = *(ulong *)(param_1 + 0x778);
        local_160 = *(void **)(param_1 + 0x788);
      }
      else {
        pcVar14 = *(char **)(param_1 + 0x788);
LAB_008465ec:
                    /* try { // try from 008465ec to 008465fb has its CatchHandler @ 00846d5c */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_170,pcVar14,sVar16);
      }
      local_88[0] = 6;
      uStack_78 = (undefined1)uStack_168;
      uStack_77 = (undefined1)((ulong)uStack_168 >> 8);
      uStack_76 = (undefined5)((ulong)uStack_168 >> 0x10);
      uStack_71 = (undefined1)((ulong)uStack_168 >> 0x38);
      local_80 = (undefined1)local_170;
      uStack_7f = (undefined4)(local_170 >> 8);
      uStack_7b = (undefined1)(local_170 >> 0x28);
      uStack_7a = (undefined1)(local_170 >> 0x30);
      uStack_79 = (undefined1)(local_170 >> 0x38);
      local_70 = SUB87(local_160,0);
      uStack_69 = (undefined1)((ulong)local_160 >> 0x38);
      local_170 = 0;
      uStack_168 = 0;
      local_160 = (void *)0x0;
                    /* try { // try from 0084661c to 0084662f has its CatchHandler @ 00846e00 */
      pdVar8 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar8,(dynamic *)local_88);
      folly::dynamic::folly::dynamic::destroy(local_88);
      if ((local_170 & 1) != 0) {
        operator_delete(local_160);
      }
    }
    PVar3 = param_1[0x790];
    PVar4 = pPVar13[0x790];
    sVar16 = *(size_t *)(param_1 + 0x798);
    uVar11 = (ulong)((byte)PVar3 >> 1);
    uVar2 = uVar11;
    if (((byte)PVar3 & 1) != 0) {
      uVar2 = sVar16;
    }
    uVar15 = (ulong)((byte)PVar4 >> 1);
    if (((byte)PVar4 & 1) != 0) {
      uVar15 = *(ulong *)(pPVar13 + 0x798);
    }
    if (uVar2 == uVar15) {
      pPVar9 = pPVar13 + 0x791;
      if (((byte)PVar4 & 1) != 0) {
        pPVar9 = *(Props **)(pPVar13 + 0x7a0);
      }
      if (((byte)PVar3 & 1) == 0) {
        if (1 < (byte)PVar3) {
          pPVar12 = param_1 + 0x791;
          do {
            if (*pPVar12 != *pPVar9) goto LAB_008466c4;
            uVar11 = uVar11 - 1;
            pPVar12 = pPVar12 + 1;
            pPVar9 = pPVar9 + 1;
          } while (uVar11 != 0);
        }
      }
      else {
        pcVar14 = *(char **)(param_1 + 0x7a0);
        iVar6 = memcmp(pcVar14,pPVar9,sVar16);
        if (iVar6 != 0) goto LAB_008466fc;
      }
    }
    else {
LAB_008466c4:
      if (((byte)PVar3 & 1) == 0) {
        uStack_188 = *(undefined8 *)(param_1 + 0x798);
        local_190 = *(ulong *)(param_1 + 0x790);
        local_180 = *(void **)(param_1 + 0x7a0);
      }
      else {
        pcVar14 = *(char **)(param_1 + 0x7a0);
LAB_008466fc:
                    /* try { // try from 008466fc to 0084670b has its CatchHandler @ 00846d58 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_190,pcVar14,sVar16);
      }
      local_88[0] = 6;
      uStack_78 = (undefined1)uStack_188;
      uStack_77 = (undefined1)((ulong)uStack_188 >> 8);
      uStack_76 = (undefined5)((ulong)uStack_188 >> 0x10);
      uStack_71 = (undefined1)((ulong)uStack_188 >> 0x38);
      local_80 = (undefined1)local_190;
      uStack_7f = (undefined4)(local_190 >> 8);
      uStack_7b = (undefined1)(local_190 >> 0x28);
      uStack_7a = (undefined1)(local_190 >> 0x30);
      uStack_79 = (undefined1)(local_190 >> 0x38);
      local_70 = SUB87(local_180,0);
      uStack_69 = (undefined1)((ulong)local_180 >> 0x38);
      local_190 = 0;
      uStack_188 = 0;
      local_180 = (void *)0x0;
                    /* try { // try from 0084672c to 0084673f has its CatchHandler @ 00846de4 */
      pdVar8 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar8,(dynamic *)local_88);
      folly::dynamic::folly::dynamic::destroy(local_88);
      if ((local_190 & 1) != 0) {
        operator_delete(local_180);
      }
    }
    iVar6 = *(int *)(param_1 + 0x7a8);
    if (iVar6 != *(int *)(pPVar13 + 0x7a8)) {
      if (iVar6 == 1) {
        local_8c = 0x6563;
        local_90 = 0x69766564;
      }
      else {
        if (iVar6 != 0) {
          if (*(long *)(lVar5 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00846d00 to 00846d03 has its CatchHandler @ 00846d48 */
            abort();
          }
          goto LAB_00846eec;
        }
        local_8c = 0x656c;
        local_90 = 0x61636f6c;
      }
      local_88[0] = 6;
      local_80 = 0xc;
      uStack_7b = (undefined1)local_8c;
      uStack_7a = (undefined1)((ushort)local_8c >> 8);
      uStack_71 = 0;
      local_70 = 0;
      uStack_79 = 0;
      uStack_78 = 0;
      uStack_77 = 0;
      uStack_76 = 0;
      uStack_69 = 0;
      uStack_7f = local_90;
                    /* try { // try from 008467cc to 008467df has its CatchHandler @ 00846d7c */
      pdVar8 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar8,(dynamic *)local_88);
      folly::dynamic::folly::dynamic::destroy(local_88);
    }
    iVar6 = *(int *)(param_1 + 0x7ac);
    if (iVar6 != *(int *)(pPVar13 + 0x7ac)) {
      if (iVar6 == 2) {
        puVar10 = &local_90;
        local_80 = 8;
        uStack_7f = 0x6f747561;
      }
      else if (iVar6 == 1) {
        puVar10 = &local_90;
        local_80 = 8;
        uStack_7f = 0x6b726164;
      }
      else {
        if (iVar6 != 0) {
          if (*(long *)(lVar5 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00846d28 to 00846d2b has its CatchHandler @ 00846d40 */
            abort();
          }
          goto LAB_00846eec;
        }
        local_80 = 10;
        local_90 = CONCAT31(local_90._1_3_,0x74);
        puVar10 = &local_1f4;
        uStack_7f = 0x6867696c;
      }
      *(undefined1 *)puVar10 = 0;
      local_88[0] = 6;
      uStack_79 = 0;
      uStack_7b = (undefined1)local_90;
      uStack_7a = (undefined1)local_1f4;
      local_70 = 0;
      uStack_69 = 0;
                    /* try { // try from 00846880 to 00846893 has its CatchHandler @ 00846d78 */
      pdVar8 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar8,(dynamic *)local_88);
      folly::dynamic::folly::dynamic::destroy(local_88);
    }
    PVar3 = param_1[0x7b0];
    if (PVar3 != pPVar13[0x7b0]) {
                    /* try { // try from 008468b4 to 0084690f has its CatchHandler @ 00846ec8 */
      piVar7 = (int *)folly::dynamic::operator[]();
      if (*piVar7 != 2) {
        folly::dynamic::folly::dynamic::destroy(piVar7);
        *piVar7 = 2;
      }
      *(Props *)(piVar7 + 2) = PVar3;
    }
    PVar3 = param_1[0x7b1];
    if (PVar3 != pPVar13[0x7b1]) {
      piVar7 = (int *)folly::dynamic::operator[]();
      if (*piVar7 != 2) {
        folly::dynamic::folly::dynamic::destroy(piVar7);
        *piVar7 = 2;
      }
      *(Props *)(piVar7 + 2) = PVar3;
    }
    PVar3 = param_1[0x7b8];
    PVar4 = pPVar13[0x7b8];
    sVar16 = *(size_t *)(param_1 + 0x7c0);
    uVar11 = (ulong)((byte)PVar3 >> 1);
    uVar2 = uVar11;
    if (((byte)PVar3 & 1) != 0) {
      uVar2 = sVar16;
    }
    uVar15 = (ulong)((byte)PVar4 >> 1);
    if (((byte)PVar4 & 1) != 0) {
      uVar15 = *(ulong *)(pPVar13 + 0x7c0);
    }
    if (uVar2 == uVar15) {
      pPVar9 = pPVar13 + 0x7b9;
      if (((byte)PVar4 & 1) != 0) {
        pPVar9 = *(Props **)(pPVar13 + 0x7c8);
      }
      if (((byte)PVar3 & 1) == 0) {
        if (1 < (byte)PVar3) {
          pPVar12 = param_1 + 0x7b9;
          do {
            if (*pPVar12 != *pPVar9) goto LAB_008469a8;
            uVar11 = uVar11 - 1;
            pPVar12 = pPVar12 + 1;
            pPVar9 = pPVar9 + 1;
          } while (uVar11 != 0);
        }
      }
      else {
        pcVar14 = *(char **)(param_1 + 0x7c8);
        iVar6 = memcmp(pcVar14,pPVar9,sVar16);
        if (iVar6 != 0) goto LAB_008469e0;
      }
    }
    else {
LAB_008469a8:
      if (((byte)PVar3 & 1) == 0) {
        uStack_1a8 = *(undefined8 *)(param_1 + 0x7c0);
        local_1b0 = *(ulong *)(param_1 + 0x7b8);
        local_1a0 = *(void **)(param_1 + 0x7c8);
      }
      else {
        pcVar14 = *(char **)(param_1 + 0x7c8);
LAB_008469e0:
                    /* try { // try from 008469e0 to 008469ef has its CatchHandler @ 00846d54 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_1b0,pcVar14,sVar16);
      }
      local_88[0] = 6;
      uStack_78 = (undefined1)uStack_1a8;
      uStack_77 = (undefined1)((ulong)uStack_1a8 >> 8);
      uStack_76 = (undefined5)((ulong)uStack_1a8 >> 0x10);
      uStack_71 = (undefined1)((ulong)uStack_1a8 >> 0x38);
      local_80 = (undefined1)local_1b0;
      uStack_7f = (undefined4)(local_1b0 >> 8);
      uStack_7b = (undefined1)(local_1b0 >> 0x28);
      uStack_7a = (undefined1)(local_1b0 >> 0x30);
      uStack_79 = (undefined1)(local_1b0 >> 0x38);
      local_70 = SUB87(local_1a0,0);
      uStack_69 = (undefined1)((ulong)local_1a0 >> 0x38);
      local_1b0 = 0;
      uStack_1a8 = 0;
      local_1a0 = (void *)0x0;
                    /* try { // try from 00846a10 to 00846a23 has its CatchHandler @ 00846dc8 */
      pdVar8 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar8,(dynamic *)local_88);
      folly::dynamic::folly::dynamic::destroy(local_88);
      if ((local_1b0 & 1) != 0) {
        operator_delete(local_1a0);
      }
    }
    PVar3 = param_1[2000];
    PVar4 = pPVar13[2000];
    sVar16 = *(size_t *)(param_1 + 0x7d8);
    uVar11 = (ulong)((byte)PVar3 >> 1);
    uVar2 = uVar11;
    if (((byte)PVar3 & 1) != 0) {
      uVar2 = sVar16;
    }
    uVar15 = (ulong)((byte)PVar4 >> 1);
    if (((byte)PVar4 & 1) != 0) {
      uVar15 = *(ulong *)(pPVar13 + 0x7d8);
    }
    if (uVar2 == uVar15) {
      pPVar9 = pPVar13 + 0x7d1;
      if (((byte)PVar4 & 1) != 0) {
        pPVar9 = *(Props **)(pPVar13 + 0x7e0);
      }
      if (((byte)PVar3 & 1) == 0) {
        if (1 < (byte)PVar3) {
          pPVar12 = param_1 + 0x7d1;
          do {
            if (*pPVar12 != *pPVar9) goto LAB_00846ab8;
            uVar11 = uVar11 - 1;
            pPVar12 = pPVar12 + 1;
            pPVar9 = pPVar9 + 1;
          } while (uVar11 != 0);
        }
      }
      else {
        pcVar14 = *(char **)(param_1 + 0x7e0);
        iVar6 = memcmp(pcVar14,pPVar9,sVar16);
        if (iVar6 != 0) goto LAB_00846af0;
      }
    }
    else {
LAB_00846ab8:
      if (((byte)PVar3 & 1) == 0) {
        uStack_1c8 = *(undefined8 *)(param_1 + 0x7d8);
        local_1d0 = *(ulong *)(param_1 + 2000);
        local_1c0 = *(void **)(param_1 + 0x7e0);
      }
      else {
        pcVar14 = *(char **)(param_1 + 0x7e0);
LAB_00846af0:
                    /* try { // try from 00846af0 to 00846aff has its CatchHandler @ 00846d50 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_1d0,pcVar14,sVar16);
      }
      local_88[0] = 6;
      uStack_78 = (undefined1)uStack_1c8;
      uStack_77 = (undefined1)((ulong)uStack_1c8 >> 8);
      uStack_76 = (undefined5)((ulong)uStack_1c8 >> 0x10);
      uStack_71 = (undefined1)((ulong)uStack_1c8 >> 0x38);
      local_80 = (undefined1)local_1d0;
      uStack_7f = (undefined4)(local_1d0 >> 8);
      uStack_7b = (undefined1)(local_1d0 >> 0x28);
      uStack_7a = (undefined1)(local_1d0 >> 0x30);
      uStack_79 = (undefined1)(local_1d0 >> 0x38);
      local_70 = SUB87(local_1c0,0);
      uStack_69 = (undefined1)((ulong)local_1c0 >> 0x38);
      local_1d0 = 0;
      uStack_1c8 = 0;
      local_1c0 = (void *)0x0;
                    /* try { // try from 00846b20 to 00846b33 has its CatchHandler @ 00846dac */
      pdVar8 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar8,(dynamic *)local_88);
      folly::dynamic::folly::dynamic::destroy(local_88);
      if ((local_1d0 & 1) != 0) {
        operator_delete(local_1c0);
      }
    }
    PVar3 = param_1[0x7e8];
    PVar4 = pPVar13[0x7e8];
    sVar16 = *(size_t *)(param_1 + 0x7f0);
    uVar11 = (ulong)((byte)PVar3 >> 1);
    uVar2 = uVar11;
    if (((byte)PVar3 & 1) != 0) {
      uVar2 = sVar16;
    }
    uVar15 = (ulong)((byte)PVar4 >> 1);
    if (((byte)PVar4 & 1) != 0) {
      uVar15 = *(ulong *)(pPVar13 + 0x7f0);
    }
    if (uVar2 == uVar15) {
      pPVar9 = pPVar13 + 0x7e9;
      if (((byte)PVar4 & 1) != 0) {
        pPVar9 = *(Props **)(pPVar13 + 0x7f8);
      }
      if (((byte)PVar3 & 1) == 0) {
        if (1 < (byte)PVar3) {
          pPVar13 = param_1 + 0x7e9;
          do {
            if (*pPVar13 != *pPVar9) goto LAB_00846bc8;
            uVar11 = uVar11 - 1;
            pPVar13 = pPVar13 + 1;
            pPVar9 = pPVar9 + 1;
          } while (uVar11 != 0);
        }
      }
      else {
        pcVar14 = *(char **)(param_1 + 0x7f8);
        iVar6 = memcmp(pcVar14,pPVar9,sVar16);
        if (iVar6 != 0) goto LAB_00846c00;
      }
    }
    else {
LAB_00846bc8:
      if (((byte)PVar3 & 1) == 0) {
        uStack_1e8 = *(undefined8 *)(param_1 + 0x7f0);
        local_1f0 = *(ulong *)(param_1 + 0x7e8);
        local_1e0 = *(void **)(param_1 + 0x7f8);
      }
      else {
        pcVar14 = *(char **)(param_1 + 0x7f8);
LAB_00846c00:
                    /* try { // try from 00846c00 to 00846c0f has its CatchHandler @ 00846d4c */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_1f0,pcVar14,sVar16);
      }
      local_88[0] = 6;
      uStack_78 = (undefined1)uStack_1e8;
      uStack_77 = (undefined1)((ulong)uStack_1e8 >> 8);
      uStack_76 = (undefined5)((ulong)uStack_1e8 >> 0x10);
      uStack_71 = (undefined1)((ulong)uStack_1e8 >> 0x38);
      local_80 = (undefined1)local_1f0;
      uStack_7f = (undefined4)(local_1f0 >> 8);
      uStack_7b = (undefined1)(local_1f0 >> 0x28);
      uStack_7a = (undefined1)(local_1f0 >> 0x30);
      uStack_79 = (undefined1)(local_1f0 >> 0x38);
      local_70 = SUB87(local_1e0,0);
      uStack_69 = (undefined1)((ulong)local_1e0 >> 0x38);
      local_1f0 = 0;
      uStack_1e8 = 0;
      local_1e0 = (void *)0x0;
                    /* try { // try from 00846c30 to 00846c43 has its CatchHandler @ 00846d90 */
      pdVar8 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar8,(dynamic *)local_88);
      folly::dynamic::folly::dynamic::destroy(local_88);
      if ((local_1f0 & 1) != 0) {
        operator_delete(local_1e0);
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
LAB_00846eec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00846ef0  FUN_00846ef0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00846ef0(void)

{
  FUN_00788b10(&DAT_009b8960,PTR_PTR_0099e460 + 0x10);
  DAT_009b8f3c = 0;
  DAT_009b8f40 = 0;
  DAT_009b8fa0 = 0;
  DAT_009b8fa8 = 0;
  DAT_009b9008 = 0;
  DAT_009b9018 = 0;
  DAT_009b901c = 0;
  DAT_009b9020 = 0;
  DAT_009b9024 = 0;
  DAT_009b9028 = 0;
  DAT_009b902c = 0;
  DAT_009b9030 = 0;
  DAT_009b9034 = 0;
  DAT_009b9038 = 0;
  DAT_009b903c = 0;
  DAT_009b9010 = 0;
  DAT_009b9014 = 0;
  uRam00000000009b9048 = 0;
  _DAT_009b9040 = 0;
  DAT_009b8960 = PTR_vtable_0099e458 + 0x20;
  DAT_009b90a4 = 2;
  uRam00000000009b90b0 = 0;
  _DAT_009b90a8 = 0;
  uRam00000000009b90c0 = 0;
  _DAT_009b90b8 = 0;
  uRam00000000009b90d0 = 0;
  _DAT_009b90c8 = 0;
  uRam00000000009b90e0 = 0;
  _DAT_009b90d8 = 0;
  uRam00000000009b90f0 = 0;
  _DAT_009b90e8 = 0;
  uRam00000000009b9100 = 0;
  _DAT_009b90f8 = 0;
  uRam00000000009b9058 = 0;
  _DAT_009b9050 = 0;
  uRam00000000009b9068 = 0;
  _DAT_009b9060 = 0;
  uRam00000000009b9078 = 0;
  _DAT_009b9070 = 0;
  uRam00000000009b9088 = 0;
  _DAT_009b9080 = 0;
  uRam00000000009b9098 = 0;
  _DAT_009b9090 = 0;
  DAT_009b90a0 = 0;
  DAT_009b9108 = DAT_00374d58;
  DAT_009b9110 = 0;
  uRam00000000009b9120 = 0;
  _DAT_009b9118 = 0;
  uRam00000000009b9130 = 0;
  _DAT_009b9128 = 0;
  uRam00000000009b9140 = 0;
  _DAT_009b9138 = 0;
  uRam00000000009b9150 = 0;
  _DAT_009b9148 = 0;
  DAT_009b9158 = 0;
  return;
}


// ===== 00846fd0  FUN_00846fd0 =====

void FUN_00846fd0(undefined8 param_1)

{
  FUN_00843654(param_1,PTR_PTR_0099e460);
  return;
}


// ===== 00846fdc  FUN_00846fdc =====

void FUN_00846fdc(void *param_1)

{
  FUN_00843654(param_1,PTR_PTR_0099e460);
  operator_delete(param_1);
  return;
}


// ===== 00847008  FUN_00847008 =====

void FUN_00847008(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  byte local_50 [8];
  ulong local_48;
  long *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00807a6c(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 8) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if (*plVar2 == 0x656d697465746164) {
      *param_2 = 2;
      goto joined_r0x00847110;
    }
  }
  else if (uVar1 == 4) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if ((int)*plVar2 == 0x65746164) {
      *param_2 = 0;
    }
    else {
      if ((int)*plVar2 != 0x656d6974) goto LAB_00847118;
      *param_2 = 1;
    }
joined_r0x00847110:
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    if (*(long *)(lVar3 + 0x28) == local_38) {
      return;
    }
    goto LAB_00847158;
  }
LAB_00847118:
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00847128 to 0084712b has its CatchHandler @ 0084712c */
    abort();
  }
LAB_00847158:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0084715c  FUN_0084715c =====

void FUN_0084715c(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  byte local_50 [8];
  ulong local_48;
  int *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00807a6c(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 6) {
    piVar2 = (int *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      piVar2 = local_40;
    }
    if (*piVar2 == 0x61636f6c && (short)piVar2[1] == 0x656c) {
      *param_2 = 0;
    }
    else {
      if (*piVar2 != 0x69766564 || (short)piVar2[1] != 0x6563) goto LAB_0084723c;
      *param_2 = 1;
    }
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    if (*(long *)(lVar3 + 0x28) == local_38) {
      return;
    }
  }
  else {
LAB_0084723c:
    if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0084724c to 0084724f has its CatchHandler @ 00847250 */
      abort();
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00847280  FUN_00847280 =====

void FUN_00847280(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  byte local_50 [8];
  ulong local_48;
  int *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00807a6c(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 4) {
    piVar2 = (int *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      piVar2 = local_40;
    }
    if (*piVar2 == 0x6b726164) {
      *param_2 = 1;
    }
    else {
      if (*piVar2 != 0x6f747561) goto LAB_00847394;
      *param_2 = 2;
    }
joined_r0x00847358:
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    if (*(long *)(lVar3 + 0x28) == local_38) {
      return;
    }
  }
  else {
    if (uVar1 == 5) {
      piVar2 = (int *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        piVar2 = local_40;
      }
      if (*piVar2 == 0x6867696c && (char)piVar2[1] == 't') {
        *param_2 = 0;
        goto joined_r0x00847358;
      }
    }
LAB_00847394:
    if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 008473a4 to 008473a7 has its CatchHandler @ 008473a8 */
      abort();
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008473d8  facebook::react::NativeHapticFeedbackSpecJSI::NativeHapticFeedbackSpecJSI =====

/* facebook::react::NativeHapticFeedbackSpecJSI::NativeHapticFeedbackSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeHapticFeedbackSpecJSI::NativeHapticFeedbackSpecJSI
          (NativeHapticFeedbackSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  long lVar2;
  NativeHapticFeedbackSpecJSI *pNVar3;
  byte local_60;
  undefined4 local_5f;
  char cStack_5b;
  char cStack_5a;
  char cStack_59;
  char cStack_58;
  char cStack_57;
  undefined2 uStack_56;
  char cStack_54;
  char cStack_53;
  char cStack_52;
  char cStack_51;
  char cStack_50;
  undefined5 uStack_4f;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined1 uStack_41;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ::facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  pNVar3 = this + 0x30;
  *(undefined ***)this = &PTR__JavaTurboModule_0098e160;
  cStack_58 = 0;
  local_60 = 0xe;
  local_5f = 0x67697274;
  cStack_5b = 0x67;
  cStack_5a = 0x65;
  cStack_59 = 0x72;
                    /* try { // try from 0084743c to 00847457 has its CatchHandler @ 008476a0 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(pNVar3,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 2;
  *(code **)(lVar2 + 0x30) = FUN_008476d8;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,CONCAT16(uStack_4a,CONCAT51(uStack_4f,cStack_50))));
  }
  cStack_5b = 0;
  local_60 = 8;
  local_5f = 0x706f7473;
                    /* try { // try from 00847498 to 008474b3 has its CatchHandler @ 0084769c */
  local_40 = &local_60;
  lVar2 = FUN_00756964(pNVar3,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(code **)(lVar2 + 0x30) = FUN_0084782c;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,CONCAT16(uStack_4a,CONCAT51(uStack_4f,cStack_50))));
  }
  local_60 = 0x16;
  cStack_54 = 0;
  cStack_57 = 0x74;
  uStack_56 = 0x6465;
  local_5f = (undefined4)s_isSupported_0036e467._0_8_;
  cStack_5b = SUB81(s_isSupported_0036e467._0_8_,4);
  cStack_5a = SUB81(s_isSupported_0036e467._0_8_,5);
  cStack_59 = SUB81(s_isSupported_0036e467._0_8_,6);
  cStack_58 = SUB81(s_isSupported_0036e467._0_8_,7);
                    /* try { // try from 00847500 to 0084751b has its CatchHandler @ 00847698 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(pNVar3,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(code **)(lVar2 + 0x30) = FUN_00847920;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,CONCAT16(uStack_4a,CONCAT51(uStack_4f,cStack_50))));
  }
  local_60 = 0x1c;
  cStack_51 = 0;
  local_5f = s_trigge_00368699._0_4_;
  cStack_5b = s_trigge_00368699[4];
  cStack_5a = s_trigge_00368699[5];
  cStack_59 = (char)s_rPattern_0036869f._0_2_;
  cStack_58 = SUB21(s_rPattern_0036869f._0_2_,1);
  cStack_57 = (char)s_rPattern_0036869f._2_6_;
  uStack_56 = SUB62(s_rPattern_0036869f._2_6_,1);
  cStack_54 = SUB61(s_rPattern_0036869f._2_6_,3);
  cStack_53 = SUB61(s_rPattern_0036869f._2_6_,4);
  cStack_52 = SUB61(s_rPattern_0036869f._2_6_,5);
                    /* try { // try from 00847564 to 0084757f has its CatchHandler @ 00847694 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(pNVar3,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 2;
  *(code **)(lVar2 + 0x30) = FUN_00847a24;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,CONCAT16(uStack_4a,CONCAT51(uStack_4f,cStack_50))));
  }
  cStack_57 = 0;
  local_60 = 0x10;
  local_5f = 0x79616c70;
  cStack_5b = 0x41;
  cStack_5a = 0x48;
  cStack_59 = 0x41;
  cStack_58 = 0x50;
                    /* try { // try from 008475c8 to 008475e3 has its CatchHandler @ 00847690 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(pNVar3,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x30) = FUN_00847b84;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,CONCAT16(uStack_4a,CONCAT51(uStack_4f,cStack_50))));
  }
  local_60 = 0x2a;
  uStack_4a = 0;
  cStack_57 = (char)s_getSystemHapt_00369918._8_5_;
  uStack_56 = SUB52(s_getSystemHapt_00369918._8_5_,1);
  cStack_54 = SUB51(s_getSystemHapt_00369918._8_5_,3);
  cStack_53 = SUB51(s_getSystemHapt_00369918._8_5_,4);
  local_5f = (undefined4)s_getSystemHapt_00369918._0_8_;
  cStack_5b = SUB81(s_getSystemHapt_00369918._0_8_,4);
  cStack_5a = SUB81(s_getSystemHapt_00369918._0_8_,5);
  cStack_59 = SUB81(s_getSystemHapt_00369918._0_8_,6);
  cStack_58 = SUB81(s_getSystemHapt_00369918._0_8_,7);
  cStack_52 = (char)s_icStatus_00369925._0_3_;
  cStack_51 = SUB31(s_icStatus_00369925._0_3_,1);
  cStack_50 = SUB31(s_icStatus_00369925._0_3_,2);
  uStack_4f._0_1_ = s_icStatus_00369925[3];
  uStack_4f._1_1_ = s_icStatus_00369925[4];
  uStack_4f._2_1_ = s_icStatus_00369925[5];
  uStack_4f._3_1_ = s_icStatus_00369925[6];
  uStack_4f._4_1_ = s_icStatus_00369925[7];
                    /* try { // try from 00847630 to 0084764b has its CatchHandler @ 0084768c */
  local_40 = &local_60;
  lVar2 = FUN_00756964(pNVar3,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(code **)(lVar2 + 0x30) = FUN_00847cd4;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,CONCAT16(uStack_4a,CONCAT51(uStack_4f,cStack_50))));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008476d8  FUN_008476d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008476d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60[0] = 0xe;
  local_60[8] = 0;
  local_60[1] = 0x74;
  local_60[2] = 0x72;
  local_60[3] = 0x69;
  local_60[4] = 0x67;
  local_60[5] = 0x67;
  local_60[6] = 0x65;
  local_60[7] = 0x72;
                    /* try { // try from 00847734 to 0084773b has its CatchHandler @ 008477fc */
  local_70 = (char *)operator_new(0x40);
  uVar4 = s_ng_Lcom_facebook_0036c548._8_8_;
  uVar3 = s_ng_Lcom_facebook_0036c548._0_8_;
  uVar2 = s__Ljava_lang_Stri_0036c538._0_8_;
  uStack_78 = _UNK_003726c8;
  local_80 = _DAT_003726c0;
  *(undefined8 *)(local_70 + 8) = s__Ljava_lang_Stri_0036c538._8_8_;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar4;
  *(undefined8 *)(local_70 + 0x10) = uVar3;
  uVar5 = s_e_ReadableMap__V_0036c564._8_8_;
  uVar4 = s__react_bridg_0036c558._0_8_;
  uVar2 = CONCAT44(s_e_ReadableMap__V_0036c564._0_4_,s__react_bridg_0036c558._8_4_);
  uVar3 = CONCAT44(s_e_ReadableMap__V_0036c564._4_4_,s_e_ReadableMap__V_0036c564._0_4_);
  local_70[0x3c] = '\0';
  *(undefined8 *)(local_70 + 0x28) = uVar2;
  *(undefined8 *)(local_70 + 0x20) = uVar4;
  *(undefined8 *)(local_70 + 0x34) = uVar5;
  *(undefined8 *)(local_70 + 0x2c) = uVar3;
                    /* try { // try from 00847770 to 0084779b has its CatchHandler @ 008477e4 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,0,local_60,&local_80,param_4,param_5,&DAT_009b9168);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0084782c  FUN_0084782c =====

void FUN_0084782c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58 [16];
  void *local_48;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40[0] = 8;
  local_40[5] = 0;
  local_40[1] = 0x73;
  local_40[2] = 0x74;
  local_40[3] = 0x6f;
  local_40[4] = 0x70;
  local_58[0] = 6;
  local_58[1] = 0x28;
  local_58[2] = 0x29;
  local_58[3] = 0x56;
  local_58[4] = 0;
                    /* try { // try from 00847880 to 0084789f has its CatchHandler @ 008478e0 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,0,local_40,local_58,param_3,param_4,&DAT_009b9170);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00847920  FUN_00847920 =====

void FUN_00847920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58 [16];
  void *local_48;
  byte local_40;
  undefined7 local_3f;
  char cStack_38;
  undefined3 uStack_37;
  undefined1 local_34;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x16;
  local_58[0] = 6;
  local_34 = 0;
  local_3f = (undefined7)s_isSupported_0036e467._0_8_;
  _cStack_38 = CONCAT31(0x646574,SUB81(s_isSupported_0036e467._0_8_,7));
  local_58[1] = 0x28;
  local_58[2] = 0x29;
  local_58[3] = 0x5a;
  local_58[4] = 0;
                    /* try { // try from 00847984 to 008479a3 has its CatchHandler @ 008479e4 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,1,&local_40,local_58,param_3,param_4,&DAT_009b9178);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00847a24  FUN_00847a24 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00847a24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  char local_5f [6];
  char acStack_59 [2];
  char acStack_57 [6];
  undefined1 local_51;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_51 = 0;
  local_60 = 0x1c;
  local_5f = s_trigge_00368699;
  acStack_59 = (char  [2])s_rPattern_0036869f._0_2_;
  acStack_57 = (char  [6])s_rPattern_0036869f._2_6_;
                    /* try { // try from 00847a80 to 00847a87 has its CatchHandler @ 00847b54 */
  local_70 = (char *)operator_new(0x60);
  uVar7 = s_idge_ReadableMap__V_00366acb._8_8_;
  uVar6 = s_idge_ReadableMap__V_00366acb._0_8_;
  uVar5 = s_acebook_react_br_00366abb._8_8_;
  uVar4 = s_acebook_react_br_00366abb._0_8_;
  uVar3 = s_ableArray_Lcom_f_00366aab._8_8_;
  uVar2 = s_ableArray_Lcom_f_00366aab._0_8_;
  uStack_78 = _UNK_003718a8;
  local_80 = _s_a_003718a0;
  local_70[0x4f] = 'p';
  local_70[0x50] = ';';
  local_70[0x51] = ')';
  local_70[0x52] = 'V';
  *(undefined8 *)(local_70 + 0x28) = uVar3;
  *(undefined8 *)(local_70 + 0x20) = uVar2;
  *(undefined8 *)(local_70 + 0x38) = uVar5;
  *(undefined8 *)(local_70 + 0x30) = uVar4;
  *(undefined8 *)(local_70 + 0x48) = uVar7;
  *(undefined8 *)(local_70 + 0x40) = uVar6;
  uVar5 = s_eact_bridge_Read_00366a9b._8_8_;
  uVar4 = s_eact_bridge_Read_00366a9b._0_8_;
  uVar3 = s__Lcom_facebook_r_00366a8b._8_8_;
  uVar2 = s__Lcom_facebook_r_00366a8b._0_8_;
  local_70[0x53] = '\0';
  *(undefined8 *)(local_70 + 8) = uVar3;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar5;
  *(undefined8 *)(local_70 + 0x10) = uVar4;
                    /* try { // try from 00847ac8 to 00847af3 has its CatchHandler @ 00847b3c */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,0,&local_60,&local_80,param_4,param_5,&DAT_009b9180);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00847b84  FUN_00847b84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00847b84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60[0] = 0x10;
  local_60[9] = 0;
  local_60[1] = 0x70;
  local_60[2] = 0x6c;
  local_60[3] = 0x61;
  local_60[4] = 0x79;
  local_60[5] = 0x41;
  local_60[6] = 0x48;
  local_60[7] = 0x41;
  local_60[8] = 0x50;
                    /* try { // try from 00847bdc to 00847be3 has its CatchHandler @ 00847ca4 */
  local_70 = (char *)operator_new(0x40);
  uVar4 = s_ng_Lcom_facebook_0036f24e._8_8_;
  uVar3 = s_ng_Lcom_facebook_0036f24e._0_8_;
  uVar2 = s__Ljava_lang_Stri_0036f23e._0_8_;
  uStack_78 = _UNK_00372428;
  local_80 = _s_A_00372420;
  *(undefined8 *)(local_70 + 8) = s__Ljava_lang_Stri_0036f23e._8_8_;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar4;
  *(undefined8 *)(local_70 + 0x10) = uVar3;
  uVar4 = s_omise__V_0036f26e._0_8_;
  uVar3 = s__react_bridge_Pr_0036f25e._8_8_;
  uVar2 = s__react_bridge_Pr_0036f25e._0_8_;
  local_70[0x38] = '\0';
  *(undefined8 *)(local_70 + 0x28) = uVar3;
  *(undefined8 *)(local_70 + 0x20) = uVar2;
  *(undefined8 *)(local_70 + 0x30) = uVar4;
                    /* try { // try from 00847c18 to 00847c43 has its CatchHandler @ 00847c8c */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,7,local_60,&local_80,param_4,param_5,&DAT_009b9188);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00847cd4  FUN_00847cd4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00847cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  char local_5f [8];
  char acStack_57 [5];
  undefined2 uStack_52;
  char cStack_50;
  char acStack_4f [5];
  undefined1 uStack_4a;
  undefined1 uStack_49;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0x2a;
  uStack_4a = 0;
  acStack_57 = (char  [5])s_getSystemHapt_00369918._8_5_;
  local_5f = (char  [8])s_getSystemHapt_00369918._0_8_;
  uStack_52 = (undefined2)s_icStatus_00369925._0_3_;
  cStack_50 = SUB31(s_icStatus_00369925._0_3_,2);
  acStack_4f = (char  [5])s_icStatus_00369925._3_5_;
                    /* try { // try from 00847d30 to 00847d37 has its CatchHandler @ 00847df0 */
  local_70 = (char *)operator_new(0x30);
  uVar5 = s_eact_bridge_Pr_00368c03._0_8_;
  uVar4 = s__Lcom_facebook_r_00368bf3._0_8_;
  uVar2 = CONCAT26(s_omise__V_00368c11._0_2_,s_eact_bridge_Pr_00368c03._8_6_);
  uVar3 = CONCAT62(s_omise__V_00368c11._2_6_,s_omise__V_00368c11._0_2_);
  uStack_78 = _UNK_003720d8;
  local_80 = _s_1_003720d0;
  *(undefined8 *)(local_70 + 8) = s__Lcom_facebook_r_00368bf3._8_8_;
  *(undefined8 *)local_70 = uVar4;
  *(undefined8 *)(local_70 + 0x18) = uVar2;
  *(undefined8 *)(local_70 + 0x10) = uVar5;
  *(undefined8 *)(local_70 + 0x1e) = uVar3;
  local_70[0x26] = '\0';
                    /* try { // try from 00847d64 to 00847d8f has its CatchHandler @ 00847dd8 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,7,&local_60,&local_80,param_4,param_5,&DAT_009b9190);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_49,CONCAT16(uStack_4a,CONCAT51(acStack_4f,cStack_50))));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00847e20  facebook::react::RNHapticFeedbackSpec_ModuleProvider =====

/* WARNING: Unknown calling convention: __rustcall */
/* facebook::react::RNHapticFeedbackSpec_ModuleProvider */

void __rustcall
facebook::react::RNHapticFeedbackSpec_ModuleProvider
          (undefined8 *param_1,byte *param_2,InitParams *param_3)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  
  bVar2 = *param_2;
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  if (uVar1 == 0x10) {
    pbVar4 = *(byte **)(param_2 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar4 = param_2 + 1;
    }
    if (*(long *)pbVar4 == 0x6369747061484e52 && *(long *)(pbVar4 + 8) == 0x6b63616264656546) {
      puVar3 = (undefined8 *)operator_new(0xb8);
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = &PTR_FUN_0098e1b8;
                    /* try { // try from 00847ec4 to 00847ecf has its CatchHandler @ 00847ed8 */
      NativeHapticFeedbackSpecJSI::NativeHapticFeedbackSpecJSI
                ((NativeHapticFeedbackSpecJSI *)(puVar3 + 3),param_3);
      *param_1 = (NativeHapticFeedbackSpecJSI *)(puVar3 + 3);
      param_1[1] = puVar3;
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00847ef4  FUN_00847ef4 =====

void FUN_00847ef4(JavaTurboModule *param_1)

{
  facebook::react::JavaTurboModule::~JavaTurboModule(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00847f18  FUN_00847f18 =====

void FUN_00847f18(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098e1b8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00847f28  FUN_00847f28 =====

void FUN_00847f28(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098e1b8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00847f58  FUN_00847f58 =====

void FUN_00847f58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00847f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00847f64  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00847f68  facebook::react::RNHapticFeedbackSpec_registerComponentDescriptorsFromCodegen =====

/* WARNING: Unknown calling convention: __rustcall */
/* facebook::react::RNHapticFeedbackSpec_registerComponentDescriptorsFromCodegen */

void __rustcall facebook::react::RNHapticFeedbackSpec_registerComponentDescriptorsFromCodegen(void)

{
  return;
}


// ===== 00847f6c  facebook::react::NativeImageCropPickerSpecJSI::NativeImageCropPickerSpecJSI =====

/* facebook::react::NativeImageCropPickerSpecJSI::NativeImageCropPickerSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeImageCropPickerSpecJSI::NativeImageCropPickerSpecJSI
          (NativeImageCropPickerSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  long lVar2;
  NativeImageCropPickerSpecJSI *pNVar3;
  byte local_60;
  undefined4 local_5f;
  undefined2 uStack_5b;
  char cStack_59;
  char cStack_58;
  undefined2 uStack_57;
  undefined1 uStack_55;
  undefined1 local_54;
  void *local_50;
  undefined1 uStack_41;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ::facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  local_60 = 0x14;
  pNVar3 = this + 0x30;
  *(undefined ***)this = &PTR__JavaTurboModule_0098e208;
  uStack_55 = 0;
  uStack_57 = 0x7265;
  local_5f = (undefined4)s_openPicker_0036a8e9._0_8_;
  uStack_5b = SUB82(s_openPicker_0036a8e9._0_8_,4);
  cStack_59 = SUB81(s_openPicker_0036a8e9._0_8_,6);
  cStack_58 = SUB81(s_openPicker_0036a8e9._0_8_,7);
                    /* try { // try from 00847fd0 to 00847feb has its CatchHandler @ 008481dc */
  local_40 = &local_60;
  lVar2 = FUN_00756964(pNVar3,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x30) = FUN_00848214;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  local_60 = 0x14;
  uStack_57 = 0x6172;
  local_5f = (undefined4)s_openCamera_0036f45f._0_8_;
  uStack_5b = SUB82(s_openCamera_0036f45f._0_8_,4);
  cStack_59 = SUB81(s_openCamera_0036f45f._0_8_,6);
  cStack_58 = SUB81(s_openCamera_0036f45f._0_8_,7);
  uStack_55 = 0;
                    /* try { // try from 00848038 to 00848053 has its CatchHandler @ 008481d8 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(pNVar3,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x30) = FUN_00848368;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  local_60 = 0x16;
  local_54 = 0;
  uStack_57 = 0x6570;
  uStack_55 = 0x72;
  local_5f = (undefined4)s_openCropper_0036a8f4._0_8_;
  uStack_5b = SUB82(s_openCropper_0036a8f4._0_8_,4);
  cStack_59 = SUB81(s_openCropper_0036a8f4._0_8_,6);
  cStack_58 = SUB81(s_openCropper_0036a8f4._0_8_,7);
                    /* try { // try from 008480a4 to 008480bf has its CatchHandler @ 008481d4 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(pNVar3,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x30) = FUN_008484bc;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  local_60 = 10;
  uStack_5b = 0x6e;
  local_5f = 0x61656c63;
                    /* try { // try from 00848104 to 0084811f has its CatchHandler @ 008481d0 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(pNVar3,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(code **)(lVar2 + 0x30) = FUN_00848614;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  local_60 = 0x16;
  local_54 = 0;
  uStack_57 = 0x6c67;
  uStack_55 = 0x65;
  local_5f = (undefined4)s_cleanSingle_00365743._0_8_;
  uStack_5b = SUB82(s_cleanSingle_00365743._0_8_,4);
  cStack_59 = SUB81(s_cleanSingle_00365743._0_8_,6);
  cStack_58 = SUB81(s_cleanSingle_00365743._0_8_,7);
                    /* try { // try from 0084816c to 00848187 has its CatchHandler @ 008481cc */
  local_40 = &local_60;
  lVar2 = FUN_00756964(pNVar3,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x30) = FUN_00848758;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00848214  FUN_00848214 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00848214(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  char local_5f [8];
  undefined2 local_57;
  undefined1 local_55;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0x14;
  local_57 = 0x7265;
  local_55 = 0;
  local_5f = (char  [8])s_openPicker_0036a8e9._0_8_;
                    /* try { // try from 00848270 to 00848277 has its CatchHandler @ 00848338 */
  local_70 = (char *)operator_new(0x50);
  uVar4 = s_ebook_react_b_0036f2e8._0_8_;
  uVar3 = s_ableMap_Lcom_fac_0036f2d8._0_8_;
  uVar2 = CONCAT35(s_ridge_Promise__V_0036f2f5._0_3_,s_ebook_react_b_0036f2e8._8_5_);
  uStack_78 = _UNK_00371478;
  local_80 = _DAT_00371470;
  *(undefined8 *)(local_70 + 0x28) = s_ableMap_Lcom_fac_0036f2d8._8_8_;
  *(undefined8 *)(local_70 + 0x20) = uVar3;
  *(undefined8 *)(local_70 + 0x38) = uVar2;
  *(undefined8 *)(local_70 + 0x30) = uVar4;
  uVar3 = s_ridge_Promise__V_0036f2f5._8_8_;
  uVar2 = CONCAT53(s_ridge_Promise__V_0036f2f5._3_5_,s_ridge_Promise__V_0036f2f5._0_3_);
  local_70[0x4d] = '\0';
  *(undefined8 *)(local_70 + 0x45) = uVar3;
  *(undefined8 *)(local_70 + 0x3d) = uVar2;
  uVar4 = s_eact_bridge_Read_0036f2c8._8_8_;
  uVar3 = s_eact_bridge_Read_0036f2c8._0_8_;
  uVar2 = s__Lcom_facebook_r_0036f2b8._0_8_;
  *(undefined8 *)(local_70 + 8) = s__Lcom_facebook_r_0036f2b8._8_8_;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar4;
  *(undefined8 *)(local_70 + 0x10) = uVar3;
                    /* try { // try from 008482ac to 008482d7 has its CatchHandler @ 00848320 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,7,&local_60,&local_80,param_4,param_5,&DAT_009b9198);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00848368  FUN_00848368 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00848368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  char local_5f [8];
  undefined2 local_57;
  undefined1 local_55;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0x14;
  local_57 = 0x6172;
  local_55 = 0;
  local_5f = (char  [8])s_openCamera_0036f45f._0_8_;
                    /* try { // try from 008483c4 to 008483cb has its CatchHandler @ 0084848c */
  local_70 = (char *)operator_new(0x50);
  uVar4 = s_ebook_react_b_0036f2e8._0_8_;
  uVar3 = s_ableMap_Lcom_fac_0036f2d8._0_8_;
  uVar2 = CONCAT35(s_ridge_Promise__V_0036f2f5._0_3_,s_ebook_react_b_0036f2e8._8_5_);
  uStack_78 = _UNK_00371478;
  local_80 = _DAT_00371470;
  *(undefined8 *)(local_70 + 0x28) = s_ableMap_Lcom_fac_0036f2d8._8_8_;
  *(undefined8 *)(local_70 + 0x20) = uVar3;
  *(undefined8 *)(local_70 + 0x38) = uVar2;
  *(undefined8 *)(local_70 + 0x30) = uVar4;
  uVar3 = s_ridge_Promise__V_0036f2f5._8_8_;
  uVar2 = CONCAT53(s_ridge_Promise__V_0036f2f5._3_5_,s_ridge_Promise__V_0036f2f5._0_3_);
  local_70[0x4d] = '\0';
  *(undefined8 *)(local_70 + 0x45) = uVar3;
  *(undefined8 *)(local_70 + 0x3d) = uVar2;
  uVar4 = s_eact_bridge_Read_0036f2c8._8_8_;
  uVar3 = s_eact_bridge_Read_0036f2c8._0_8_;
  uVar2 = s__Lcom_facebook_r_0036f2b8._0_8_;
  *(undefined8 *)(local_70 + 8) = s__Lcom_facebook_r_0036f2b8._8_8_;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar4;
  *(undefined8 *)(local_70 + 0x10) = uVar3;
                    /* try { // try from 00848400 to 0084842b has its CatchHandler @ 00848474 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,7,&local_60,&local_80,param_4,param_5,&DAT_009b91a0);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008484bc  FUN_008484bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008484bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  undefined7 local_5f;
  char cStack_58;
  undefined3 uStack_57;
  undefined1 local_54;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0x16;
  local_54 = 0;
  local_5f = (undefined7)s_openCropper_0036a8f4._0_8_;
  _cStack_58 = CONCAT31(0x726570,SUB81(s_openCropper_0036a8f4._0_8_,7));
                    /* try { // try from 0084851c to 00848523 has its CatchHandler @ 008485e4 */
  local_70 = (char *)operator_new(0x50);
  uVar4 = s_ebook_react_b_0036f2e8._0_8_;
  uVar3 = s_ableMap_Lcom_fac_0036f2d8._0_8_;
  uVar2 = CONCAT35(s_ridge_Promise__V_0036f2f5._0_3_,s_ebook_react_b_0036f2e8._8_5_);
  uStack_78 = _UNK_00371478;
  local_80 = _DAT_00371470;
  *(undefined8 *)(local_70 + 0x28) = s_ableMap_Lcom_fac_0036f2d8._8_8_;
  *(undefined8 *)(local_70 + 0x20) = uVar3;
  *(undefined8 *)(local_70 + 0x38) = uVar2;
  *(undefined8 *)(local_70 + 0x30) = uVar4;
  uVar3 = s_ridge_Promise__V_0036f2f5._8_8_;
  uVar2 = CONCAT53(s_ridge_Promise__V_0036f2f5._3_5_,s_ridge_Promise__V_0036f2f5._0_3_);
  local_70[0x4d] = '\0';
  *(undefined8 *)(local_70 + 0x45) = uVar3;
  *(undefined8 *)(local_70 + 0x3d) = uVar2;
  uVar4 = s_eact_bridge_Read_0036f2c8._8_8_;
  uVar3 = s_eact_bridge_Read_0036f2c8._0_8_;
  uVar2 = s__Lcom_facebook_r_0036f2b8._0_8_;
  *(undefined8 *)(local_70 + 8) = s__Lcom_facebook_r_0036f2b8._8_8_;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar4;
  *(undefined8 *)(local_70 + 0x10) = uVar3;
                    /* try { // try from 00848558 to 00848583 has its CatchHandler @ 008485cc */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,7,&local_60,&local_80,param_4,param_5,&DAT_009b91a8);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00848614  FUN_00848614 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00848614(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60[0] = 10;
  local_60[1] = 99;
  local_60[2] = 0x6c;
  local_60[3] = 0x65;
  local_60[4] = 0x61;
  local_60[5] = 0x6e;
  local_60[6] = 0;
                    /* try { // try from 00848668 to 0084866f has its CatchHandler @ 00848728 */
  local_70 = (char *)operator_new(0x30);
  uVar5 = s_eact_bridge_Pr_00368c03._0_8_;
  uVar4 = s__Lcom_facebook_r_00368bf3._0_8_;
  uVar2 = CONCAT26(s_omise__V_00368c11._0_2_,s_eact_bridge_Pr_00368c03._8_6_);
  uVar3 = CONCAT62(s_omise__V_00368c11._2_6_,s_omise__V_00368c11._0_2_);
  uStack_78 = _UNK_003720d8;
  local_80 = _s_1_003720d0;
  *(undefined8 *)(local_70 + 8) = s__Lcom_facebook_r_00368bf3._8_8_;
  *(undefined8 *)local_70 = uVar4;
  *(undefined8 *)(local_70 + 0x18) = uVar2;
  *(undefined8 *)(local_70 + 0x10) = uVar5;
  *(undefined8 *)(local_70 + 0x1e) = uVar3;
  local_70[0x26] = '\0';
                    /* try { // try from 0084869c to 008486c7 has its CatchHandler @ 00848710 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,7,local_60,&local_80,param_4,param_5,&DAT_009b91b0);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00848758  FUN_00848758 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00848758(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  byte local_60;
  undefined7 local_5f;
  char cStack_58;
  undefined3 uStack_57;
  undefined1 local_54;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0x16;
  local_54 = 0;
  local_5f = (undefined7)s_cleanSingle_00365743._0_8_;
  _cStack_58 = CONCAT31(0x656c67,SUB81(s_cleanSingle_00365743._0_8_,7));
                    /* try { // try from 008487b8 to 008487bf has its CatchHandler @ 00848880 */
  local_70 = (char *)operator_new(0x40);
  uVar4 = s_ng_Lcom_facebook_0036f24e._8_8_;
  uVar3 = s_ng_Lcom_facebook_0036f24e._0_8_;
  uVar2 = s__Ljava_lang_Stri_0036f23e._0_8_;
  uStack_78 = _UNK_00372428;
  local_80 = _s_A_00372420;
  *(undefined8 *)(local_70 + 8) = s__Ljava_lang_Stri_0036f23e._8_8_;
  *(undefined8 *)local_70 = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar4;
  *(undefined8 *)(local_70 + 0x10) = uVar3;
  uVar4 = s_omise__V_0036f26e._0_8_;
  uVar3 = s__react_bridge_Pr_0036f25e._8_8_;
  uVar2 = s__react_bridge_Pr_0036f25e._0_8_;
  local_70[0x38] = '\0';
  *(undefined8 *)(local_70 + 0x28) = uVar3;
  *(undefined8 *)(local_70 + 0x20) = uVar2;
  *(undefined8 *)(local_70 + 0x30) = uVar4;
                    /* try { // try from 008487f4 to 0084881f has its CatchHandler @ 00848868 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_1,param_3,param_2,7,&local_60,&local_80,param_4,param_5,&DAT_009b91b8);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008488b0  facebook::react::RNCImageCropPickerSpec_ModuleProvider =====

/* WARNING: Unknown calling convention: __rustcall */
/* facebook::react::RNCImageCropPickerSpec_ModuleProvider */

void __rustcall
facebook::react::RNCImageCropPickerSpec_ModuleProvider
          (undefined8 *param_1,byte *param_2,InitParams *param_3)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  
  bVar2 = *param_2;
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  if (uVar1 == 0x12) {
    pbVar4 = *(byte **)(param_2 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar4 = param_2 + 1;
    }
    if ((*(long *)pbVar4 == 0x6567616d49434e52 && *(long *)(pbVar4 + 8) == 0x6b636950706f7243) &&
        *(short *)(pbVar4 + 0x10) == 0x7265) {
      puVar3 = (undefined8 *)operator_new(0xb8);
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = &PTR_FUN_0098e260;
                    /* try { // try from 00848960 to 0084896b has its CatchHandler @ 00848974 */
      NativeImageCropPickerSpecJSI::NativeImageCropPickerSpecJSI
                ((NativeImageCropPickerSpecJSI *)(puVar3 + 3),param_3);
      *param_1 = (NativeImageCropPickerSpecJSI *)(puVar3 + 3);
      param_1[1] = puVar3;
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00848990  FUN_00848990 =====

void FUN_00848990(JavaTurboModule *param_1)

{
  facebook::react::JavaTurboModule::~JavaTurboModule(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008489b4  FUN_008489b4 =====

void FUN_008489b4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098e260;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008489c4  FUN_008489c4 =====

void FUN_008489c4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098e260;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008489f4  FUN_008489f4 =====

void FUN_008489f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008489fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00848a00  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00848a04  facebook::react::RNCImageCropPickerSpec_registerComponentDescriptorsFromCodegen =====

/* WARNING: Unknown calling convention: __rustcall */
/* facebook::react::RNCImageCropPickerSpec_registerComponentDescriptorsFromCodegen */

void __rustcall
facebook::react::RNCImageCropPickerSpec_registerComponentDescriptorsFromCodegen(void)

{
  return;
}


// ===== 00848a08  facebook::react::RNLinearGradientSpec_ModuleProvider =====

/* WARNING: Unknown calling convention: __rustcall */
/* facebook::react::RNLinearGradientSpec_ModuleProvider */

void __rustcall facebook::react::RNLinearGradientSpec_ModuleProvider(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00848a10  facebook::react::RNLinearGradientSpec_registerComponentDescriptorsFromCodegen =====

/* WARNING: Removing unreachable block (ram,0x00848a5c) */
/* WARNING: Removing unreachable block (ram,0x00848a6c) */
/* WARNING: Unknown calling convention: __rustcall */
/* facebook::react::RNLinearGradientSpec_registerComponentDescriptorsFromCodegen */

void __rustcall
facebook::react::RNLinearGradientSpec_registerComponentDescriptorsFromCodegen(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00848a4c to 00848a53 has its CatchHandler @ 00848aa4 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00848acc  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_29RNLinearGradientComponentNameEEEENS0_21RNLinearGradientPropsENS0_28RNLinearGradientEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_29RNLinearGradientComponentNameEEEENS0_21RNLinearGradientPropsENS0_28RNLinearGradientEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00848b20(&local_30);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00848b20  FUN_00848b20 =====

void FUN_00848b20(undefined8 *param_1,ComponentDescriptorParameters *param_2)

{
  long lVar1;
  ComponentDescriptor *this;
  void *local_90;
  void *pvStack_88;
  undefined8 local_80;
  void *pvStack_78;
  void *local_70;
  undefined8 uStack_68;
  void *local_60;
  void *pvStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ComponentDescriptor *)operator_new(0x88);
  pvStack_78 = (void *)0x0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = (void *)0x0;
  pvStack_58 = (void *)0x0;
  local_60 = (void *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  pvStack_88 = (void *)0x0;
  local_90 = (void *)0x0;
                    /* try { // try from 00848b64 to 00848b6f has its CatchHandler @ 00848bdc */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_90);
  *(undefined ***)this = &PTR_FUN_0098e2b0;
  FUN_00848c0c(this + 0x38);
  *param_1 = this;
  if (local_60 != (void *)0x0) {
    pvStack_58 = local_60;
    operator_delete(local_60);
  }
  if (pvStack_78 != (void *)0x0) {
    local_70 = pvStack_78;
    operator_delete(pvStack_78);
  }
  if (local_90 != (void *)0x0) {
    pvStack_88 = local_90;
    operator_delete(local_90);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00848c0c  FUN_00848c0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00848c0c(undefined8 param_1)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  undefined4 local_1070 [2];
  undefined8 *local_1068;
  undefined *local_1060;
  undefined8 uStack_1058;
  undefined8 local_1050;
  undefined8 uStack_1048;
  undefined4 local_1040 [2];
  undefined8 local_1038;
  undefined8 uStack_1030;
  undefined8 local_1028;
  undefined8 uStack_1020;
  undefined4 local_1018;
  undefined4 local_1010;
  undefined1 local_100c;
  undefined8 local_100b;
  undefined8 local_1003;
  undefined8 uStack_ffb;
  undefined8 local_ff3;
  undefined8 uStack_feb;
  undefined8 local_fe3;
  undefined8 uStack_fdb;
  undefined8 local_fd3;
  undefined6 uStack_fcb;
  undefined2 uStack_fc5;
  undefined6 uStack_fc3;
  undefined8 uStack_fbd;
  undefined4 local_fb5;
  undefined8 local_fb1;
  undefined1 local_fa9;
  undefined1 uStack_fa8;
  undefined7 uStack_fa7;
  undefined8 uStack_fa0;
  undefined8 uStack_f98;
  undefined8 uStack_f90;
  undefined8 local_f88;
  undefined8 uStack_f80;
  undefined8 local_f78;
  undefined8 uStack_f70;
  undefined8 local_f68;
  undefined8 uStack_f60;
  undefined8 local_f58;
  undefined8 uStack_f50;
  undefined8 uStack_f48;
  undefined8 local_f40;
  undefined8 local_f38;
  undefined8 uStack_f30;
  undefined8 local_f28;
  undefined4 uStack_f20;
  undefined4 uStack_f1c;
  undefined4 uStack_f18;
  undefined4 uStack_f14;
  undefined4 uStack_f10;
  undefined4 uStack_f0c;
  undefined8 local_f08;
  undefined8 uStack_f00;
  undefined4 local_ef8;
  undefined1 local_ef4;
  undefined4 local_ef0;
  undefined1 local_eec;
  undefined4 local_ee8;
  undefined1 local_ee4;
  undefined4 local_ee0;
  undefined1 local_edc;
  undefined4 local_ed8;
  undefined1 local_ed4;
  undefined4 local_ed0;
  undefined1 local_ecc;
  undefined4 local_ec8;
  undefined1 local_ec4;
  undefined4 local_ec0;
  undefined1 local_ebc;
  undefined4 local_eb8;
  undefined1 local_eb4;
  undefined4 local_eb0;
  undefined1 local_eac;
  undefined4 local_ea8;
  undefined1 local_ea4;
  undefined4 local_ea0;
  undefined1 local_e9c;
  undefined4 local_e98;
  undefined1 local_e94;
  undefined4 local_e90;
  undefined1 local_e8c;
  undefined4 local_e88;
  undefined1 local_e84;
  undefined4 local_e80;
  undefined1 local_e7c;
  undefined1 local_e78;
  undefined1 local_e74;
  undefined1 local_e68;
  undefined8 local_e60;
  undefined8 uStack_e58;
  undefined8 uStack_e50;
  undefined8 uStack_e48;
  undefined8 local_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  undefined1 uStack_e28;
  undefined7 local_e27;
  undefined1 uStack_e20;
  undefined8 uStack_e1f;
  undefined8 local_e14;
  undefined8 uStack_e0c;
  undefined8 uStack_e04;
  undefined8 uStack_dfc;
  undefined8 local_df4;
  undefined8 uStack_dec;
  undefined8 uStack_de4;
  undefined8 uStack_ddc;
  undefined8 local_dd4;
  undefined8 uStack_dcc;
  undefined8 uStack_dc4;
  undefined5 uStack_dbc;
  undefined3 local_db7;
  undefined5 uStack_db4;
  undefined1 local_dac;
  undefined1 local_da8;
  undefined1 local_da4;
  undefined1 local_da0;
  undefined1 local_d9c;
  undefined1 local_d98;
  undefined1 local_d80;
  undefined8 local_d78;
  undefined8 uStack_d70;
  undefined8 local_d68;
  undefined4 local_d60;
  undefined1 local_d5c;
  undefined4 local_d5b;
  undefined1 local_d57;
  undefined1 local_d56;
  undefined8 local_d50;
  undefined8 uStack_d48;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  undefined8 local_d30;
  undefined7 uStack_d28;
  undefined4 uStack_d21;
  undefined8 local_d1c;
  undefined1 local_d14;
  undefined1 local_d0c;
  undefined1 local_d08;
  undefined1 local_d00;
  undefined1 local_cfc;
  undefined1 local_cf4;
  undefined1 local_cf0;
  undefined1 local_ce8;
  undefined1 local_ce4;
  undefined1 local_cdc;
  undefined1 local_cd8;
  undefined1 local_cd0;
  undefined1 local_ccc;
  undefined1 local_cc4;
  undefined1 local_cc0;
  undefined1 local_cb8;
  undefined1 local_cb4;
  undefined1 local_cac;
  undefined1 local_ca8;
  undefined1 local_ca0;
  undefined1 local_c9c;
  undefined1 local_c94;
  undefined1 local_c90;
  undefined1 local_c88;
  undefined1 local_c84;
  undefined1 local_c7c;
  undefined1 local_c78;
  undefined1 local_c74;
  undefined1 local_c70;
  undefined1 local_c6c;
  undefined1 local_c68;
  undefined1 local_c64;
  undefined1 local_c60;
  undefined1 local_c5c;
  undefined1 local_c58;
  undefined1 local_c54;
  undefined1 local_c50;
  undefined1 local_c4c;
  undefined1 local_c48;
  undefined1 local_c44;
  undefined1 local_c40;
  undefined1 local_c3c;
  undefined1 local_c38;
  undefined1 local_c34;
  undefined1 local_c30;
  undefined1 local_c2c;
  undefined1 local_c28;
  undefined1 local_c24;
  undefined1 local_c20;
  undefined1 local_c1c;
  undefined8 local_c18;
  undefined8 uStack_c10;
  undefined8 local_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined2 local_be8;
  undefined8 local_be4;
  undefined1 local_bdc;
  undefined8 local_bd8;
  undefined8 local_bd0;
  undefined8 uStack_bc8;
  undefined1 local_bc0;
  undefined8 local_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 local_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 local_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 local_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 local_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 local_b18;
  undefined8 uStack_b10;
  undefined8 local_b08;
  undefined8 uStack_b00;
  undefined8 local_af8;
  undefined8 uStack_af0;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  undefined8 local_ad8;
  undefined8 uStack_ad0;
  undefined8 local_ac8;
  undefined6 uStack_ac0;
  undefined2 uStack_aba;
  undefined6 uStack_ab8;
  undefined1 local_ab0;
  undefined1 local_aac;
  undefined1 local_aa8;
  undefined8 local_aa4;
  undefined8 uStack_a9c;
  undefined1 local_a94;
  undefined8 local_a90;
  undefined2 local_a88;
  undefined1 local_a86;
  undefined4 local_a84;
  undefined1 local_a80;
  undefined1 local_a20;
  undefined1 local_a18;
  undefined1 local_9b8;
  undefined4 local_9b0;
  undefined2 local_9ac;
  undefined1 local_9a8;
  undefined1 local_9a4;
  undefined1 local_9a0;
  undefined1 local_99c;
  undefined1 local_998;
  undefined1 local_994;
  undefined1 local_990;
  undefined1 local_98c;
  undefined1 local_988;
  undefined1 local_984;
  undefined8 local_980;
  undefined8 uStack_978;
  void *local_970;
  void *pvStack_968;
  undefined8 local_960;
  void *pvStack_958;
  void *local_950;
  undefined8 uStack_948;
  undefined1 local_940;
  undefined8 local_93c;
  undefined4 uStack_934;
  undefined4 uStack_930;
  undefined4 uStack_92c;
  undefined4 local_928;
  undefined4 uStack_924;
  undefined4 uStack_920;
  undefined4 local_91c;
  RNLinearGradientProps aRStack_918 [1776];
  void *local_228;
  void *local_220;
  void *local_210;
  void *local_208;
  void *local_1e8;
  void *local_1e0;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
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
  void *local_140;
  undefined8 uStack_138;
  void *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100 [4];
  undefined4 local_f0 [2];
  undefined8 local_e8;
  undefined4 local_c0;
  void *local_b8;
  void *pvStack_b0;
  undefined8 uStack_a8;
  void *local_a0;
  void *local_98;
  undefined8 uStack_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100[0] = 0;
  local_f0[0] = 0;
  local_e8 = 0;
  local_c0 = 0;
  pvStack_b0 = (void *)0x0;
  local_b8 = (void *)0x0;
  local_a0 = (void *)0x0;
  uStack_a8 = 0;
  uStack_90 = 0;
  local_98 = (void *)0x0;
  local_120 = 0;
  uStack_128 = 0;
  local_130 = (void *)0x0;
  uStack_138 = 0;
  local_140 = (void *)0x0;
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
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
                    /* try { // try from 00848c98 to 00848ca3 has its CatchHandler @ 00849298 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1d0);
  local_120 = CONCAT44(local_120._4_4_,0x3f800000);
  local_1070[0] = 0xffffffff;
  uStack_128 = 0;
  local_130 = (void *)0x0;
  uStack_138 = 0;
  local_140 = (void *)0x0;
  local_1068 = &local_1d0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_118,param_1);
  memset(local_1040,0,0x728);
  local_88[0] = 5;
  local_70 = 0;
  local_1060 = PTR_construction_vtable_0099e4a0 + 0x20;
  local_1040[0] = 5;
  uStack_1048 = 0;
  local_1050 = 0;
  uStack_1058 = 0;
  local_68 = 0;
  uStack_60 = 0x3f800000;
  uStack_78 = 0;
  local_80 = 0;
  uStack_1030 = 0;
  local_1038 = 0;
  uStack_1020 = 0;
  local_1028 = 0;
  local_1018 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_88);
  local_100c = 0;
  local_fb1 = 0;
  uStack_ad0 = _UNK_00487b1c;
  local_ad8 = _DAT_00487b14;
  local_100b = _s__00375408;
  uStack_bc8 = _UNK_00371598;
  local_bd0 = _DAT_00371590;
  uStack_ae0 = _UNK_00487b0c;
  local_ae8 = _DAT_00487b04;
  local_ef4 = 0;
  uStack_af0 = _UNK_00487afc;
  local_af8 = _DAT_00487af4;
  uStack_b00 = _UNK_00487aec;
  local_b08 = _DAT_00487ae4;
  uStack_ab8 = 0;
  local_eec = 0;
  uStack_f20 = 0;
  local_f28 = 0;
  uStack_f0c = 0;
  uStack_f30 = 0;
  local_f38 = 0;
  uStack_ac0 = 0;
  uStack_aba = 0;
  local_ac8 = 0;
  local_1010 = 0x10410710;
  local_fb5 = 0x40004;
  uStack_f14 = 0;
  uStack_f10 = 0;
  uStack_f1c = 0;
  uStack_f18 = 0;
  uStack_f00 = 0;
  local_f08 = 0;
  local_ef8 = 0x7fc00000;
  local_ef0 = 0x7fc00000;
  local_ee8 = 0x7fc00000;
  local_ee0 = 0x7fc00000;
  local_ed8 = 0x7fc00000;
  local_ed0 = 0x7fc00000;
  local_ec8 = 0x7fc00000;
  local_ec0 = 0x7fc00000;
  local_eb8 = 0x7fc00000;
  local_eb0 = 0x7fc00000;
  local_ea8 = 0x7fc00000;
  local_ea0 = 0x7fc00000;
  local_e98 = 0x7fc00000;
  local_e90 = 0x7fc00000;
  local_e88 = 0x7fc00000;
  local_e80 = 0x7fc00000;
  uStack_e1f = 0;
  uStack_e20 = 0;
  uStack_e0c = 0;
  local_e14 = 0;
  uStack_dfc = 0;
  uStack_e04 = 0;
  uStack_dec = 0;
  local_df4 = 0;
  uStack_ddc = 0;
  uStack_de4 = 0;
  uStack_dcc = 0;
  local_dd4 = 0;
  uStack_dbc = 0;
  uStack_dc4 = 0;
  local_db7 = 0;
  uStack_db4 = 0;
  local_d5c = 1;
  local_d5b = 0;
  local_d56 = 0x23;
  local_d1c = 0x3f800000;
  uStack_c00 = 0;
  local_c08 = 0;
  uStack_bf0 = 0;
  uStack_bf8 = 0;
  uStack_c10 = 0;
  local_c18 = 0;
  local_be4 = 0;
  uStack_bb0 = 0;
  local_bb8 = 0;
  uStack_ba0 = 0;
  uStack_ba8 = 0;
  uStack_b90 = 0;
  local_b98 = 0;
  uStack_b80 = 0;
  uStack_b88 = 0;
  uStack_b70 = 0;
  local_b78 = 0;
  uStack_b60 = 0;
  uStack_b68 = 0;
  uStack_b50 = 0;
  local_b58 = 0;
  uStack_b40 = 0;
  uStack_b48 = 0;
  uStack_b30 = 0;
  local_b38 = 0;
  uStack_b20 = 0;
  uStack_b28 = 0;
  uStack_b10 = 0;
  local_b18 = 0;
  uStack_fa7 = 0;
  uStack_ffb = 0;
  local_1003 = 0;
  uStack_feb = 0;
  local_ff3 = 0;
  uStack_fdb = 0;
  local_fe3 = 0;
  uStack_fcb = 0;
  local_fd3 = 0;
  uStack_fbd = 0;
  uStack_fc5 = 0;
  uStack_fc3 = 0;
  local_fa9 = 0;
  uStack_fa8 = 0;
  uStack_f98 = 0;
  uStack_fa0 = 0;
  local_f88 = 0;
  uStack_f90 = 0;
  local_f78 = 0;
  uStack_f80 = 0;
  local_f68 = 0;
  uStack_f70 = 0;
  local_f58 = 0;
  uStack_f60 = 0;
  uStack_f48 = 0;
  uStack_f50 = 0;
  local_f40 = 0;
  local_ee4 = 0;
  local_edc = 0;
  local_ed4 = 0;
  local_ecc = 0;
  local_ec4 = 0;
  local_ebc = 0;
  local_eb4 = 0;
  local_eac = 0;
  local_ea4 = 0;
  local_e9c = 0;
  local_e94 = 0;
  local_e8c = 0;
  local_e84 = 0;
  local_e7c = 0;
  local_e78 = 0;
  local_e74 = 0;
  local_e68 = 0;
  local_dac = 0;
  local_da8 = 0;
  local_da4 = 0;
  local_da0 = 0;
  local_d9c = 0;
  local_d98 = 0;
  local_d80 = 0;
  uStack_e58 = 0;
  local_e60 = 0;
  uStack_e48 = 0;
  uStack_e50 = 0;
  uStack_e38 = 0;
  local_e40 = 0;
  uStack_e28 = 0;
  local_e27 = 0;
  uStack_e30 = 0;
  uStack_d70 = 0;
  local_d78 = 0;
  local_d68 = 0;
  local_d60 = 0;
  local_d57 = 0;
  uStack_d48 = 0;
  local_d50 = 0;
  uStack_d38 = 0;
  uStack_d40 = 0;
  uStack_d28 = 0;
  uStack_d21 = 0;
  local_d30 = 0;
  local_d14 = 0;
  local_d0c = 0;
  local_d08 = 0;
  local_d00 = 0;
  local_cfc = 0;
  local_cf4 = 0;
  local_cf0 = 0;
  local_ce8 = 0;
  local_ce4 = 0;
  local_cdc = 0;
  local_cd8 = 0;
  local_cd0 = 0;
  local_ccc = 0;
  local_cc4 = 0;
  local_cc0 = 0;
  local_cb8 = 0;
  local_cb4 = 0;
  local_cac = 0;
  local_ca8 = 0;
  local_ca0 = 0;
  local_c9c = 0;
  local_c94 = 0;
  local_c90 = 0;
  local_c88 = 0;
  local_c84 = 0;
  local_c7c = 0;
  local_c78 = 0;
  local_c74 = 0;
  local_c70 = 0;
  local_c6c = 0;
  local_c68 = 0;
  local_c64 = 0;
  local_c60 = 0;
  local_c5c = 0;
  local_c58 = 0;
  local_c54 = 0;
  local_c50 = 0;
  local_c4c = 0;
  local_c48 = 0;
  local_c44 = 0;
  local_c40 = 0;
  local_c3c = 0;
  local_c38 = 0;
  local_c34 = 0;
  local_c30 = 0;
  local_c2c = 0;
  local_c28 = 0;
  local_c24 = 0;
  local_c20 = 0;
  local_c1c = 0;
  local_bd8 = 0;
  local_be8 = 0;
  local_bdc = 0;
  local_bc0 = 0;
  local_ab0 = 0;
  local_aac = 0;
  local_aa8 = 0;
  local_a90 = 0;
  uStack_a9c = 0;
  local_aa4 = 0;
  local_a94 = 0;
  local_a88 = 0x101;
  local_a86 = 0;
  local_a84 = 0;
  local_a80 = 0;
  local_a20 = 0;
  local_a18 = 0;
  local_9b8 = 0;
  local_9a8 = 0;
  local_9a4 = 0;
  local_9a0 = 0;
  local_99c = 0;
  local_998 = 0;
  local_994 = 0;
  local_990 = 0;
  local_98c = 0;
  local_988 = 0;
  local_984 = 0;
  local_9ac = 0;
  local_9b0 = 0;
  local_1060 = PTR_vtable_0099e490 + 0x20;
  uStack_978 = 0;
  local_980 = 0;
  pvStack_968 = (void *)0x0;
  local_970 = (void *)0x0;
  pvStack_958 = (void *)0x0;
  local_960 = 0;
  uStack_948 = 0;
  local_950 = (void *)0x0;
  local_940 = 0;
  uStack_934 = 0;
  uStack_930 = 0;
  local_93c = 0;
  uStack_924 = 0;
  uStack_920 = 0;
  uStack_92c = 0;
  local_928 = 0;
  local_91c = 0;
                    /* try { // try from 008490a8 to 008490bb has its CatchHandler @ 00849298 */
  facebook::react::RNLinearGradientProps::RNLinearGradientProps
            (aRStack_918,(PropsParserContext *)local_1070,(RNLinearGradientProps *)&local_1060,
             (RawProps *)&local_118);
  if (local_1e8 != (void *)0x0) {
    local_1e0 = local_1e8;
    operator_delete(local_1e8);
  }
  if (local_210 != (void *)0x0) {
    local_208 = local_210;
    operator_delete(local_210);
  }
  if (local_228 != (void *)0x0) {
    local_220 = local_228;
    operator_delete(local_228);
  }
  puVar5 = PTR_PTR_0099e498;
  FUN_0078917c(aRStack_918,PTR_PTR_0099e498 + 8);
  if ((void *)CONCAT44(uStack_92c,uStack_930) != (void *)0x0) {
    local_928 = uStack_930;
    uStack_924 = uStack_92c;
    operator_delete((void *)CONCAT44(uStack_92c,uStack_930));
  }
  if (pvStack_958 != (void *)0x0) {
    local_950 = pvStack_958;
    operator_delete(pvStack_958);
  }
  if (local_970 != (void *)0x0) {
    pvStack_968 = local_970;
    operator_delete(local_970);
  }
  FUN_0078917c(&local_1060,puVar5 + 8);
  facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(param_1);
  pvVar3 = local_140;
  puVar4 = (undefined8 *)local_130;
  while (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar4[6];
    pvVar8 = (void *)*puVar4;
    local_140 = pvVar3;
    if ((plVar7 == (long *)0x0) || (lVar6 = FUN_00757990(0xffffffffffffffff,plVar7 + 1), lVar6 != 0)
       ) {
      bVar1 = *(byte *)(puVar4 + 2);
    }
    else {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
      bVar1 = *(byte *)(puVar4 + 2);
    }
    if ((bVar1 & 1) != 0) {
      operator_delete((void *)puVar4[4]);
    }
    operator_delete(puVar4);
    pvVar3 = local_140;
    puVar4 = (undefined8 *)pvVar8;
  }
  local_140 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_178);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_1a8);
  std::__ndk1::mutex::~mutex((mutex *)&local_1d0);
  pvVar8 = local_a0;
  pvVar3 = local_98;
  if (local_a0 != (void *)0x0) {
    while (pvVar3 != pvVar8) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 00849228 to 00849233 has its CatchHandler @ 0084929c */
        (*(code *)(&PTR_FUN_0098e330)[*(uint *)((long)pvVar3 + -8)])
                  (&local_1060,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_98 = pvVar8;
    operator_delete(local_a0);
  }
  if (local_b8 != (void *)0x0) {
    pvStack_b0 = local_b8;
    operator_delete(local_b8);
  }
  folly::dynamic::folly::dynamic::destroy(local_f0);
  facebook::jsi::Value::~Value((Value *)local_100);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008492a0  FUN_008492a0 =====

void FUN_008492a0(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 008492c4  FUN_008492c4 =====

undefined * FUN_008492c4(void)

{
  return PTR_RNLinearGradientComponentName_0099e488;
}


// ===== 008492d0  FUN_008492d0 =====

undefined * FUN_008492d0(void)

{
  return PTR_RNLinearGradientComponentName_0099e488;
}


// ===== 008492dc  FUN_008492dc =====

undefined8 FUN_008492dc(void)

{
  return 0x61;
}


// ===== 008492e4  FUN_008492e4 =====

void FUN_008492e4(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 uStack_49;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_64 = (**(code **)(*param_2 + 0x20))();
  FUN_00849ad8(&local_60,&uStack_49,param_3,param_4,&local_64);
                    /* try { // try from 0084934c to 00849353 has its CatchHandler @ 00849384 */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008493ac  FUN_008493ac =====

void FUN_008493ac(undefined8 *param_1,long *param_2,shared_ptr *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *local_70;
  long *local_68;
  long *local_60;
  long *plStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00849d8c(&local_60,&local_70);
                    /* try { // try from 008493f8 to 00849403 has its CatchHandler @ 008494b0 */
  (**(code **)(*local_60 + 0x10))(local_60,param_3,param_4);
  local_70 = local_60;
  local_68 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    FUN_00757d00(1,plStack_58 + 1);
  }
                    /* try { // try from 0084941c to 0084942b has its CatchHandler @ 008494a0 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_70);
  plVar2 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 00849468 to 0084946f has its CatchHandler @ 008494b0 */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = plStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008494d8  FUN_008494d8 =====

void FUN_008494d8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x008494e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 008494ec  FUN_008494ec =====

void FUN_008494ec(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
                 RawProps *param_5)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  int iVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  long *local_100;
  long *local_f8;
  long *local_f0;
  long *plStack_e8;
  undefined1 uStack_d1;
  dynamic adStack_d0 [48];
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar8 = facebook::react::RawProps::isEmpty(), (uVar8 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNLinearGradientComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNLinearGradientPropsENS0_28RNLinearGradientEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e480
         & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNLinearGradientComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNLinearGradientPropsENS0_28RNLinearGradientEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e480
                                   ), iVar7 != 0)) {
                    /* try { // try from 008497b8 to 008497c7 has its CatchHandler @ 008497f4 */
      FUN_0084a204(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNLinearGradientComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNLinearGradientPropsENS0_28RNLinearGradientEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e478
                   ,adStack_d0);
      __cxa_atexit(FUN_0084a1b4,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNLinearGradientComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNLinearGradientPropsENS0_28RNLinearGradientEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e478
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNLinearGradientComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNLinearGradientPropsENS0_28RNLinearGradientEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e480
                         );
    }
    lVar10 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNLinearGradientComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNLinearGradientPropsENS0_28RNLinearGradientEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e478
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNLinearGradientComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNLinearGradientPropsENS0_28RNLinearGradientEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e478
    ;
    param_1[1] = lVar10;
    if (lVar10 != 0) {
      FUN_00757d00(1,lVar10 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    FUN_00849e90(&local_f0,param_3,param_5,param_4);
                    /* try { // try from 00849594 to 008495a7 has its CatchHandler @ 00849828 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if (((uVar8 & 1) == 0) ||
       ((uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar8 & 1) == 0 ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enablePropsUpdateReconciliationAndroid(), (uVar8 & 1) == 0)))) {
LAB_008495d0:
      local_100 = local_f0;
      local_f8 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        FUN_00757d00(1,plStack_e8 + 1);
      }
                    /* try { // try from 008495e8 to 008495f7 has its CatchHandler @ 00849818 */
      FUN_00849fdc(&local_100,param_5,param_4);
      plVar4 = local_f8;
      if ((local_f8 != (long *)0x0) &&
         (lVar10 = FUN_00757990(0xffffffffffffffff,local_f8 + 1), lVar10 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 008495b8 to 008495bf has its CatchHandler @ 00849808 */
      pcVar9 = (char *)(**(code **)(*local_f0 + 0x10))();
      iVar7 = strcmp(PTR_RNLinearGradientComponentName_0099e488,pcVar9);
      if (iVar7 != 0) goto LAB_008495d0;
      bVar3 = false;
    }
                    /* try { // try from 0084962c to 0084962f has its CatchHandler @ 00849828 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar8 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 0084963c to 00849657 has its CatchHandler @ 00849814 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(local_f0 + 4));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_f0;
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00849798 to 008497a7 has its CatchHandler @ 0084980c */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_00849874;
      }
      for (; local_f0 = plVar4, plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00849778 to 00849787 has its CatchHandler @ 00849834 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_00849874;
        }
        uVar1 = 0x811c9dc5;
        uVar8 = (ulong)(*(byte *)(plVar5 + 3) >> 1);
        pcVar6 = (char *)((long)plVar5 + 0x19);
        pcVar9 = (char *)((long)plVar5 + 0x19);
        if ((*(byte *)(plVar5 + 3) & 1) != 0) {
          uVar8 = plVar5[4];
          pcVar6 = (char *)plVar5[5];
          pcVar9 = (char *)plVar5[5];
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          uVar1 = (uVar1 ^ (int)*pcVar6) * 0x1000193;
          pcVar6 = pcVar6 + 1;
        }
                    /* try { // try from 008496d8 to 008496e3 has its CatchHandler @ 0084983c */
        folly::dynamic::dynamic(adStack_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 008496e8 to 008496ff has its CatchHandler @ 00849840 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (plVar4,param_3,uVar1,pcVar9,adStack_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 00849710 to 0084971b has its CatchHandler @ 00849830 */
          (*(code *)(&PTR_FUN_0098e330)[local_a0])(&uStack_d1,adStack_d0);
        }
        plVar4 = local_f0;
      }
      folly::dynamic::folly::dynamic::destroy(local_98);
    }
    param_1[1] = plStack_e8;
    *param_1 = local_f0;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_00849874:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00849878  FUN_00849878 =====

void FUN_00849878(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00849880  FUN_00849880 =====

void FUN_00849880(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00849888  FUN_00849888 =====

void FUN_00849888(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *local_90;
  long *local_88;
  undefined1 auStack_80 [8];
  long *local_78;
  long *local_70;
  long *local_68;
  undefined1 uStack_59;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_0078a610(auStack_80,&uStack_59,param_3 + 8,param_3 + 4);
                    /* try { // try from 008498d0 to 008498d7 has its CatchHandler @ 00849a5c */
  plVar4 = (long *)operator_new(0x68);
  plVar1 = plVar4 + 3;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_0098e508;
                    /* try { // try from 008498f0 to 008498ff has its CatchHandler @ 00849a44 */
  FUN_0084a4e8(plVar1,auStack_80,param_2 + 8);
  local_70 = plVar1;
  local_68 = plVar4;
  if ((local_78 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_78 + 1), lVar5 == 0)) {
    (**(code **)(*local_78 + 0x10))(local_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 00849934 to 0084993b has its CatchHandler @ 00849a34 */
  plVar6 = (long *)operator_new(0x1a0);
  puVar3 = PTR_DAT_0099dca0;
  plVar1 = plVar6 + 4;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)(puVar3 + 0x10);
                    /* try { // try from 00849958 to 0084996f has its CatchHandler @ 00849a1c */
  FUN_0084a6f8(plVar1,param_3,&local_70,param_2 + 8,param_2);
  plVar4 = local_70;
  *param_1 = (long)plVar1;
  param_1[1] = (long)plVar6;
  local_90 = plVar1;
  local_88 = plVar6;
  FUN_00757d00(1,plVar6 + 2);
                    /* try { // try from 00849988 to 00849993 has its CatchHandler @ 008499fc */
  facebook::react::EventEmitter::facebook::react::EventEmitter::setShadowNodeFamily
            (plVar4,&local_90);
  if (local_88 != (long *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar1 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar5 == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00849a84  FUN_00849a84 =====

void FUN_00849a84(void)

{
  return;
}


// ===== 00849a88  FUN_00849a88 =====

void FUN_00849a88(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00849ad8  FUN_00849ad8 =====

void FUN_00849ad8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 uVar8;
  
  puVar6 = (undefined8 *)operator_new(0x400);
  uVar8 = *param_5;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_0098e350;
                    /* try { // try from 00849b20 to 00849b2f has its CatchHandler @ 00849bc8 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4,uVar8);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_0098e3a0;
  uVar2 = *(uint *)((long)puVar6 + 0x6c);
  uVar1 = uVar2 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar2 & 0xfffffff8 | uVar1;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar8 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar8;
  cVar3 = *(char *)(lVar7 + 0x6b0);
  cVar4 = *(char *)(lVar7 + 0x6b1);
  cVar5 = *(char *)(lVar7 + 0x1e8);
  *param_1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  param_1[1] = puVar6;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar2 & 0xfffff000 |
       uVar2 & 0x7f8 | uVar1 | (uint)((cVar3 != '\0' || cVar4 != '\0') || cVar5 != '\0') << 0xb;
  return;
}


// ===== 00849be4  FUN_00849be4 =====

void FUN_00849be4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098e350;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00849bf4  FUN_00849bf4 =====

void FUN_00849bf4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098e350;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00849c24  FUN_00849c24 =====

void FUN_00849c24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00849c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00849c30  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00849c34  FUN_00849c34 =====

void FUN_00849c34(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_0099de98 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00757990(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x79];
    }
    param_1[0x7a] = (long)pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = (void *)param_1[0x73];
  if (pvVar4 != (void *)0x0) {
    param_1[0x74] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  FUN_007890e8(param_1 + 0x23);
  FUN_00789784(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00849cf4  FUN_00849cf4 =====

void FUN_00849cf4(long param_1)

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


// ===== 00849d5c  FUN_00849d5c =====

bool FUN_00849d5c(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 00849d74  FUN_00849d74 =====

bool FUN_00849d74(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 00849d8c  FUN_00849d8c =====

void FUN_00849d8c(undefined8 *param_1,undefined8 param_2,ShadowNode *param_3,
                 ShadowNodeFragment *param_4)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 uVar8;
  
  puVar6 = (undefined8 *)operator_new(0x400);
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_0098e350;
                    /* try { // try from 00849dcc to 00849ddb has its CatchHandler @ 00849e74 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_0098e3a0;
  uVar2 = *(uint *)((long)puVar6 + 0x6c);
  uVar1 = uVar2 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar2 & 0xfffffff8 | uVar1;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar8 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar8;
  cVar3 = *(char *)(lVar7 + 0x6b0);
  cVar4 = *(char *)(lVar7 + 0x6b1);
  cVar5 = *(char *)(lVar7 + 0x1e8);
  *param_1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  param_1[1] = puVar6;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar2 & 0xfffff000 |
       uVar2 & 0x7f8 | uVar1 | (uint)((cVar3 != '\0' || cVar4 != '\0') || cVar5 != '\0') << 0xb;
  return;
}


// ===== 00849e90  FUN_00849e90 =====

void FUN_00849e90(undefined8 *param_1,PropsParserContext *param_2,RawProps *param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  RNLinearGradientProps *pRVar4;
  undefined1 uStack_59;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pRVar4 = (RNLinearGradientProps *)*param_4;
  if (pRVar4 == (RNLinearGradientProps *)0x0) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNLinearGradientComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNLinearGradientPropsENS0_28RNLinearGradientEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e480
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNLinearGradientComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNLinearGradientPropsENS0_28RNLinearGradientEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e480
                                   ), iVar2 != 0)) {
                    /* try { // try from 00849f5c to 00849f6b has its CatchHandler @ 00849f98 */
      FUN_0084a204(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNLinearGradientComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNLinearGradientPropsENS0_28RNLinearGradientEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e478
                   ,&uStack_59);
      __cxa_atexit(FUN_0084a1b4,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNLinearGradientComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNLinearGradientPropsENS0_28RNLinearGradientEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e478
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNLinearGradientComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNLinearGradientPropsENS0_28RNLinearGradientEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e480
                         );
    }
    pRVar4 = *(RNLinearGradientProps **)
              PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNLinearGradientComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNLinearGradientPropsENS0_28RNLinearGradientEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e478
    ;
  }
  puVar3 = (undefined8 *)operator_new(0x760);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_0098e4b8;
                    /* try { // try from 00849f08 to 00849f1b has its CatchHandler @ 00849fac */
  facebook::react::RNLinearGradientProps::RNLinearGradientProps
            ((RNLinearGradientProps *)(puVar3 + 3),param_2,pRVar4,param_3);
  *param_1 = (RNLinearGradientProps *)(puVar3 + 3);
  param_1[1] = puVar3;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00849fdc  FUN_00849fdc =====

void FUN_00849fdc(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  plVar3 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = *param_1;
  if (*param_3 == 0) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNLinearGradientComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNLinearGradientPropsENS0_28RNLinearGradientEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e480
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNLinearGradientComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNLinearGradientPropsENS0_28RNLinearGradientEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e480
                                   ), iVar2 != 0)) {
                    /* try { // try from 0084a0c0 to 0084a0cf has its CatchHandler @ 0084a0fc */
      FUN_0084a204(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNLinearGradientComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNLinearGradientPropsENS0_28RNLinearGradientEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e478
                   ,local_70);
      __cxa_atexit(FUN_0084a1b4,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNLinearGradientComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNLinearGradientPropsENS0_28RNLinearGradientEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e478
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNLinearGradientComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNLinearGradientPropsENS0_28RNLinearGradientEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e480
                         );
    }
    local_50 = (long *)0x0;
                    /* try { // try from 0084a04c to 0084a05f has its CatchHandler @ 0084a110 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*(undefined8 *)
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNLinearGradientComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNLinearGradientPropsENS0_28RNLinearGradientEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e478
               ,param_2,local_70);
  }
  else {
    local_50 = (long *)0x0;
                    /* try { // try from 0084a010 to 0084a027 has its CatchHandler @ 0084a114 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*param_3,param_2,local_70);
  }
  if (local_50 == local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_0084a08c;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_0084a08c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0084a164  FUN_0084a164 =====

void FUN_0084a164(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0084a1b4  FUN_0084a1b4 =====

void FUN_0084a1b4(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0084a204  FUN_0084a204 =====

void FUN_0084a204(undefined8 *param_1)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x760);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_0098e468;
  memset(__s,0,0x748);
                    /* try { // try from 0084a248 to 0084a25b has its CatchHandler @ 0084a2ec */
  FUN_00788b10(__s,PTR_PTR_0099e498 + 0x10);
  *(undefined4 *)((long)puVar2 + 0x5f4) = 0;
  *(undefined1 *)(puVar2 + 0xbf) = 0;
  *(undefined1 *)(puVar2 + 0xcb) = 0;
  *(undefined1 *)(puVar2 + 0xcc) = 0;
  *(undefined1 *)(puVar2 + 0xd8) = 0;
  *(undefined1 *)(puVar2 + 0xda) = 0;
  *(undefined1 *)((long)puVar2 + 0x6d4) = 0;
  *(undefined1 *)(puVar2 + 0xdb) = 0;
  *(undefined1 *)((long)puVar2 + 0x6dc) = 0;
  *(undefined1 *)(puVar2 + 0xdc) = 0;
  *(undefined1 *)((long)puVar2 + 0x6e4) = 0;
  *(undefined1 *)(puVar2 + 0xdd) = 0;
  *(undefined1 *)((long)puVar2 + 0x6ec) = 0;
  *(undefined1 *)(puVar2 + 0xde) = 0;
  *(undefined1 *)((long)puVar2 + 0x6f4) = 0;
  puVar1 = PTR_vtable_0099e490;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *(undefined1 *)(puVar2 + 0xe7) = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar2[0xe6] = 0;
  puVar2[0xe5] = 0;
  puVar2[0xe4] = 0;
  puVar2[0xe3] = 0;
  puVar2[0xe2] = 0;
  puVar2[0xe1] = 0;
  puVar2[0xe0] = 0;
  puVar2[0xdf] = 0;
  *(undefined8 *)((long)puVar2 + 0x744) = 0;
  *(undefined8 *)((long)puVar2 + 0x73c) = 0;
  *(undefined8 *)((long)puVar2 + 0x754) = 0;
  *(undefined8 *)((long)puVar2 + 0x74c) = 0;
  *(undefined4 *)((long)puVar2 + 0x75c) = 0;
  *param_1 = __s;
  param_1[1] = puVar2;
  return;
}


// ===== 0084a308  FUN_0084a308 =====

void FUN_0084a308(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098e468;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0084a318  FUN_0084a318 =====

void FUN_0084a318(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098e468;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0084a348  FUN_0084a348 =====

void FUN_0084a348(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x748);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x750) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x720);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x728) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x708);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x710) = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e498 + 8);
  return;
}


// ===== 0084a3a4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0084a3a8  FUN_0084a3a8 =====

void FUN_0084a3a8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098e4b8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0084a3b8  FUN_0084a3b8 =====

void FUN_0084a3b8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098e4b8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0084a3e8  FUN_0084a3e8 =====

void FUN_0084a3e8(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x748);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x750) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x720);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x728) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x708);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x710) = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e498 + 8);
  return;
}


// ===== 0084a444  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0084a448  FUN_0084a448 =====

void FUN_0084a448(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0084a498  FUN_0084a498 =====

void FUN_0084a498(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098e508;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0084a4a8  FUN_0084a4a8 =====

void FUN_0084a4a8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098e508;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0084a4d8  FUN_0084a4d8 =====

void FUN_0084a4d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0084a4e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0084a4e4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0084a4e8  FUN_0084a4e8 =====

EventEmitter * FUN_0084a4e8(EventEmitter *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long *plStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plStack_48 = (long *)param_2[1];
  local_50 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  local_60 = *param_3;
  local_58 = param_3[1];
  if (local_58 != 0) {
    FUN_00757d00(1,local_58 + 0x10);
  }
                    /* try { // try from 0084a530 to 0084a53f has its CatchHandler @ 0084a60c */
  facebook::react::EventEmitter::EventEmitter(param_1,&local_50,&local_60);
  *(undefined ***)param_1 = &PTR_FUN_0097ff10;
                    /* try { // try from 0084a550 to 0084a557 has its CatchHandler @ 0084a5fc */
  plVar3 = (long *)operator_new(0x58);
  puVar2 = PTR_DAT_0099dc90;
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[4] = 0;
  plVar3[3] = 0;
  *(long **)(param_1 + 0x40) = plVar3 + 3;
  *(long **)(param_1 + 0x48) = plVar3;
  plVar3[6] = 0;
  plVar3[5] = 0;
  plVar3[8] = 0;
  plVar3[7] = 0;
  *(undefined8 *)((long)plVar3 + 0x4c) = 0;
  *(undefined8 *)((long)plVar3 + 0x44) = 0;
  *(undefined ***)param_1 = &PTR_FUN_0098e558;
  if (local_58 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar3 = plStack_48;
  if ((plStack_48 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,plStack_48 + 1), lVar4 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0084a640  FUN_0084a640 =====

void FUN_0084a640(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = (long)(PTR_DAT_0099dc88 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = (long)&PTR_FUN_0097ff80;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 0084a6f8  FUN_0084a6f8 =====

ShadowNodeFamily *
FUN_0084a6f8(ShadowNodeFamily *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = *param_3;
  local_50 = (long *)param_3[1];
  if (local_50 != (long *)0x0) {
    FUN_00757d00(1,local_50 + 1);
  }
  local_68 = *param_4;
  local_60 = param_4[1];
  if (local_60 != 0) {
    FUN_00757d00(1,local_60 + 0x10);
  }
                    /* try { // try from 0084a75c to 0084a773 has its CatchHandler @ 0084a7dc */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(param_1,param_2,&local_58,&local_68,param_5);
  if (local_60 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0084a814  facebook::react::RNLinearGradientProps::RNLinearGradientProps =====

/* facebook::react::RNLinearGradientProps::RNLinearGradientProps(facebook::react::PropsParserContext
   const&, facebook::react::RNLinearGradientProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::RNLinearGradientProps::RNLinearGradientProps
          (RNLinearGradientProps *this,PropsParserContext *param_1,RNLinearGradientProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  ulong *puVar3;
  function *in_x4;
  long lVar4;
  undefined4 uVar5;
  undefined4 in_s1;
  ulong local_90 [4];
  long *local_70;
  long local_58;
  
  puVar3 = local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 0084a854 to 0084a863 has its CatchHandler @ 0084aa74 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if ((ulong *)local_70 == local_90) {
    lVar4 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_0084a890;
    lVar4 = 5;
    puVar3 = (ulong *)local_70;
  }
  (**(code **)(*puVar3 + lVar4 * 8))();
LAB_0084a890:
  local_90[0] = 0;
  *(undefined8 *)this = *(undefined8 *)param_1;
                    /* try { // try from 0084a89c to 0084a8b3 has its CatchHandler @ 0084aa48 */
  uVar5 = FUN_0084aaac();
  *(undefined4 *)(this + 0x6e0) = uVar5;
  *(undefined4 *)(this + 0x6e4) = in_s1;
  local_90[0] = 0;
                    /* try { // try from 0084a8c0 to 0084a8d7 has its CatchHandler @ 0084aa44 */
  uVar5 = FUN_0084aaac();
  *(undefined4 *)(this + 0x6e8) = uVar5;
  *(undefined4 *)(this + 0x6ec) = in_s1;
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
                    /* try { // try from 0084a8ec to 0084a903 has its CatchHandler @ 0084aa40 */
  FUN_0084ac6c(this + 0x6f0,param_2);
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
                    /* try { // try from 0084a910 to 0084a92f has its CatchHandler @ 0084aa28 */
  FUN_0084aed0(this + 0x708,param_2);
  local_90[0] = local_90[0] & 0xffffffffffffff00;
                    /* try { // try from 0084a934 to 0084a957 has its CatchHandler @ 0084aa10 */
  bVar2 = FUN_007ea510(param_2);
  local_90[0] = 0;
  this[0x720] = (RNLinearGradientProps)(bVar2 & 1);
                    /* try { // try from 0084a964 to 0084a97b has its CatchHandler @ 0084aa0c */
  uVar5 = FUN_0084aaac();
  *(undefined4 *)(this + 0x724) = uVar5;
  *(undefined4 *)(this + 0x728) = in_s1;
  local_90[0] = local_90[0] & 0xffffffff00000000;
                    /* try { // try from 0084a988 to 0084a9ab has its CatchHandler @ 0084aa08 */
  uVar5 = FUN_007f0fe0(param_2);
  *(undefined4 *)(this + 0x72c) = uVar5;
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
                    /* try { // try from 0084a9b8 to 0084a9d7 has its CatchHandler @ 0084aa04 */
  FUN_0084aed0(this + 0x730,param_2);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0084aaac  FUN_0084aaac =====

void FUN_0084aaac(char *param_1,char *param_2,undefined4 *param_3,undefined4 *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = facebook::react::RawProps::at(param_1,param_2,(char *)0x0);
  if (lVar2 == 0) {
    uVar4 = *param_3;
    uVar5 = param_3[1];
  }
  else {
    uVar3 = FUN_00807970();
    if ((uVar3 & 1) == 0) {
      uVar4 = *param_4;
      uVar5 = param_4[1];
    }
    else {
      local_50 = 0;
                    /* try { // try from 0084ab28 to 0084ab33 has its CatchHandler @ 0084ab44 */
      FUN_0084be0c(lVar2,&local_50);
      uVar4 = (undefined4)local_50;
      uVar5 = local_50._4_4_;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4,uVar5);
}


// ===== 0084ac6c  FUN_0084ac6c =====

void FUN_0084ac6c(undefined8 *param_1,undefined8 param_2,char *param_3,undefined8 *param_4,
                 void *param_5)

{
  long lVar1;
  long lVar2;
  void *__dest;
  ulong uVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  lVar2 = facebook::react::RawProps::at(param_3,"colors",(char *)0x0);
  if (lVar2 == 0) {
    param_5 = (void *)*param_4;
    lVar2 = param_4[1];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar3 = lVar2 - (long)param_5;
    if (uVar3 != 0) {
      if ((long)uVar3 < 0) {
        if (*(long *)(lVar1 + 0x28) != lVar4) goto LAB_0084aec8;
        FUN_0084d48c();
        goto LAB_0084ad60;
      }
      __dest = operator_new(uVar3);
      *param_1 = __dest;
      param_1[2] = (long)__dest + uVar3;
      memcpy(__dest,param_5,uVar3);
      param_1[1] = (long)__dest + uVar3;
    }
  }
  else {
    uVar3 = FUN_00807970();
    if ((uVar3 & 1) == 0) {
LAB_0084ad60:
      if (*(long *)(lVar1 + 0x28) == lVar4) {
        FUN_0084cebc(param_1,param_5);
        return;
      }
      goto LAB_0084aec8;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
                    /* try { // try from 0084ad38 to 0084ad47 has its CatchHandler @ 0084ad90 */
    FUN_0084cf40(param_2,lVar2,param_1);
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
LAB_0084aec8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0084aed0  FUN_0084aed0 =====

void FUN_0084aed0(undefined8 *param_1,undefined8 param_2,char *param_3,char *param_4,
                 undefined8 *param_5,void *param_6)

{
  long lVar1;
  long lVar2;
  void *__dest;
  ulong uVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  lVar2 = facebook::react::RawProps::at(param_3,param_4,(char *)0x0);
  if (lVar2 == 0) {
    param_6 = (void *)*param_5;
    lVar2 = param_5[1];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar3 = lVar2 - (long)param_6;
    if (uVar3 != 0) {
      if ((long)uVar3 < 0) {
        if (*(long *)(lVar1 + 0x28) != lVar4) goto LAB_0084b14c;
                    /* try { // try from 0084afbc to 0084afc3 has its CatchHandler @ 0084b11c */
        FUN_0081108c(param_1);
        goto LAB_0084afc4;
      }
                    /* try { // try from 0084af38 to 0084af3f has its CatchHandler @ 0084b11c */
      __dest = operator_new(uVar3);
      *param_1 = __dest;
      param_1[1] = __dest;
      param_1[2] = (long)__dest + uVar3;
      memcpy(__dest,param_6,uVar3);
      param_1[1] = (long)__dest + uVar3;
    }
  }
  else {
    uVar3 = FUN_00807970();
    if ((uVar3 & 1) == 0) {
LAB_0084afc4:
      if (*(long *)(lVar1 + 0x28) == lVar4) {
        FUN_0084d4a0(param_1,param_6);
        return;
      }
      goto LAB_0084b14c;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
                    /* try { // try from 0084af98 to 0084afa7 has its CatchHandler @ 0084aff4 */
    FUN_0082d94c(param_2,lVar2,param_1);
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
LAB_0084b14c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0084b150  facebook::react::RNLinearGradientProps::RNLinearGradientProps =====

/* facebook::react::RNLinearGradientProps::RNLinearGradientProps(facebook::react::PropsParserContext
   const&, facebook::react::RNLinearGradientProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::RNLinearGradientProps::RNLinearGradientProps
          (RNLinearGradientProps *this,PropsParserContext *param_1,RNLinearGradientProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  ulong *puVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 in_s1;
  ulong local_90 [4];
  long *local_70;
  long local_58;
  
  puVar3 = local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 0084b18c to 0084b1af has its CatchHandler @ 0084b3c8 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_0099e498 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if ((ulong *)local_70 == local_90) {
    lVar4 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_0084b1dc;
    lVar4 = 5;
    puVar3 = (ulong *)local_70;
  }
  (**(code **)(*puVar3 + lVar4 * 8))();
LAB_0084b1dc:
  local_90[0] = 0;
  *(undefined **)this = PTR_vtable_0099e490 + 0x20;
                    /* try { // try from 0084b1f0 to 0084b207 has its CatchHandler @ 0084b39c */
  uVar5 = FUN_0084aaac(param_3,"startPoint",param_2 + 0x6e0,local_90);
  *(undefined4 *)(this + 0x6e0) = uVar5;
  *(undefined4 *)(this + 0x6e4) = in_s1;
  local_90[0] = 0;
                    /* try { // try from 0084b214 to 0084b22b has its CatchHandler @ 0084b398 */
  uVar5 = FUN_0084aaac(param_3,"endPoint",param_2 + 0x6e8,local_90);
  *(undefined4 *)(this + 0x6e8) = uVar5;
  *(undefined4 *)(this + 0x6ec) = in_s1;
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
                    /* try { // try from 0084b240 to 0084b257 has its CatchHandler @ 0084b394 */
  FUN_0084ac6c(this + 0x6f0,param_1,param_3,param_2 + 0x6f0,local_90);
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
                    /* try { // try from 0084b264 to 0084b283 has its CatchHandler @ 0084b37c */
  FUN_0084aed0(this + 0x708,param_1,param_3,"locations",param_2 + 0x708,local_90);
  local_90[0] = local_90[0] & 0xffffffffffffff00;
                    /* try { // try from 0084b288 to 0084b2ab has its CatchHandler @ 0084b364 */
  bVar2 = FUN_007ea510(param_1,param_3,"useAngle",param_2 + 0x720,local_90,0,0);
  local_90[0] = 0;
  this[0x720] = (RNLinearGradientProps)(bVar2 & 1);
                    /* try { // try from 0084b2b8 to 0084b2cf has its CatchHandler @ 0084b360 */
  uVar5 = FUN_0084aaac(param_3,"angleCenter",param_2 + 0x724,local_90);
  *(undefined4 *)(this + 0x724) = uVar5;
  *(undefined4 *)(this + 0x728) = in_s1;
  local_90[0] = local_90[0] & 0xffffffff00000000;
                    /* try { // try from 0084b2dc to 0084b2ff has its CatchHandler @ 0084b35c */
  uVar5 = FUN_007f0fe0(param_1,param_3,"angle",param_2 + 0x72c,local_90,0,0);
  *(undefined4 *)(this + 0x72c) = uVar5;
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
                    /* try { // try from 0084b30c to 0084b32b has its CatchHandler @ 0084b358 */
  FUN_0084aed0(this + 0x730,param_1,param_3,"borderRadii",param_2 + 0x730,local_90);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


