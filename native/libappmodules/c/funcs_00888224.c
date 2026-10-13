// ===== 00888224  FUN_00888224 =====

void FUN_00888224(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  lVar7 = *(long *)(lVar4 + 0x28);
  uVar5 = (**(code **)(*param_2 + 0x20))();
  puVar6 = (undefined8 *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_00995cd8;
                    /* try { // try from 00888290 to 0088829f has its CatchHandler @ 00888384 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar8 = puVar6[4];
  puVar6[3] = &PTR_FUN_00995e08;
  uVar3 = *(uint *)((long)puVar6 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar8 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar8 + 0x50) & 0x30000000) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    if (*(char *)(lVar8 + 0x5b4) != '\0') {
      uVar5 = *(undefined4 *)(lVar8 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar5;
  lVar9 = *param_2;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar8 + 0x6b0) != '\0' || *(char *)(lVar8 + 0x6b1) != '\0') ||
             *(char *)(lVar8 + 0x1e8) != '\0') << 0xb;
  puVar6[3] = &PTR_FUN_00995d28;
                    /* try { // try from 00888338 to 00888343 has its CatchHandler @ 00888374 */
  (**(code **)(lVar9 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 008883b4  FUN_008883b4 =====

void FUN_008883b4(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined4 uVar10;
  YogaLayoutableShadowNode *local_78;
  long *local_70;
  YogaLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar7 = tpidr_el0;
  local_58 = *(long *)(lVar7 + 0x28);
  plVar8 = (long *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(plVar8 + 3);
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_00995cd8;
                    /* try { // try from 0088840c to 0088841b has its CatchHandler @ 00888568 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4);
  lVar9 = plVar8[4];
  plVar8[3] = (long)&PTR_FUN_00995e08;
  uVar3 = *(uint *)((long)plVar8 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar9 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)plVar8 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar9 + 0x50) & 0x30000000) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    if (*(char *)(lVar9 + 0x5b4) != '\0') {
      uVar10 = *(undefined4 *)(lVar9 + 0x5b0);
    }
  }
  *(undefined4 *)(plVar8 + 10) = uVar10;
  cVar4 = *(char *)(lVar9 + 0x6b0);
  cVar5 = *(char *)(lVar9 + 0x6b1);
  cVar6 = *(char *)(lVar9 + 0x1e8);
  plVar8[3] = (long)&PTR_FUN_00995d28;
  *(uint *)((long)plVar8 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 | (uint)((cVar4 != '\0' || cVar5 != '\0') || cVar6 != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar8;
                    /* try { // try from 008884ac to 008884bb has its CatchHandler @ 00888580 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pYVar1,param_3,param_4);
  local_78 = pYVar1;
  local_70 = plVar8;
  FUN_00757d00(1,plVar8 + 1);
                    /* try { // try from 008884cc to 008884db has its CatchHandler @ 00888558 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar8 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar9 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar9 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 00888518 to 00888523 has its CatchHandler @ 00888580 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar7 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 008885a8  FUN_008885a8 =====

void FUN_008885a8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::appendChild
            (*param_2,param_3);
  return;
}


// ===== 008885b4  FUN_008885b4 =====

void FUN_008885b4(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNSSafeAreaViewProps *this;
  uint uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  char *pcVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  char *pcVar9;
  dynamic *pdVar10;
  long lVar11;
  RNSSafeAreaViewProps *pRVar12;
  undefined1 uStack_d1;
  dynamic local_d0 [32];
  dynamic *local_b0;
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar7 = facebook::react::RawProps::isEmpty(), (uVar7 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNSSafeAreaViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNSSafeAreaViewPropsENS0_20BaseViewEventEmitterENS0_20RNSSafeAreaViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ea80
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNSSafeAreaViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNSSafeAreaViewPropsENS0_20BaseViewEventEmitterENS0_20RNSSafeAreaViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ea80
                                   ), iVar6 != 0)) {
                    /* try { // try from 008889e8 to 008889eb has its CatchHandler @ 00888a18 */
      FUN_00889590();
      __cxa_atexit(FUN_00889540,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNSSafeAreaViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNSSafeAreaViewPropsENS0_20BaseViewEventEmitterENS0_20RNSSafeAreaViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ea78
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNSSafeAreaViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNSSafeAreaViewPropsENS0_20BaseViewEventEmitterENS0_20RNSSafeAreaViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ea80
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNSSafeAreaViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNSSafeAreaViewPropsENS0_20BaseViewEventEmitterENS0_20RNSSafeAreaViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ea78
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNSSafeAreaViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNSSafeAreaViewPropsENS0_20BaseViewEventEmitterENS0_20RNSSafeAreaViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ea78
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNSSafeAreaViewProps *)*param_4;
    if (pRVar12 == (RNSSafeAreaViewProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNSSafeAreaViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNSSafeAreaViewPropsENS0_20BaseViewEventEmitterENS0_20RNSSafeAreaViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ea80
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNSSafeAreaViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNSSafeAreaViewPropsENS0_20BaseViewEventEmitterENS0_20RNSSafeAreaViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ea80
                                     ), iVar6 != 0)) {
                    /* try { // try from 00888968 to 0088896b has its CatchHandler @ 00888a30 */
        FUN_00889590();
        __cxa_atexit(FUN_00889540,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNSSafeAreaViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNSSafeAreaViewPropsENS0_20BaseViewEventEmitterENS0_20RNSSafeAreaViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ea78
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNSSafeAreaViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNSSafeAreaViewPropsENS0_20BaseViewEventEmitterENS0_20RNSSafeAreaViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ea80
                           );
      }
      pRVar12 = *(RNSSafeAreaViewProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNSSafeAreaViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNSSafeAreaViewPropsENS0_20BaseViewEventEmitterENS0_20RNSSafeAreaViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ea78
      ;
    }
    plVar8 = (long *)operator_new(0x700);
    this = (RNSSafeAreaViewProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_00995ef0;
                    /* try { // try from 00888694 to 008886a7 has its CatchHandler @ 00888aa4 */
    facebook::react::RNSSafeAreaViewProps::RNSSafeAreaViewProps(this,param_3,pRVar12,param_5);
                    /* try { // try from 008886ac to 008886bf has its CatchHandler @ 00888abc */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_008886e8:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNSSafeAreaViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNSSafeAreaViewPropsENS0_20BaseViewEventEmitterENS0_20RNSSafeAreaViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ea80
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNSSafeAreaViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNSSafeAreaViewPropsENS0_20BaseViewEventEmitterENS0_20RNSSafeAreaViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ea80
                                       ), iVar6 != 0)) {
                    /* try { // try from 008889a8 to 008889ab has its CatchHandler @ 00888a1c */
          FUN_00889590();
          __cxa_atexit(FUN_00889540,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNSSafeAreaViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNSSafeAreaViewPropsENS0_20BaseViewEventEmitterENS0_20RNSSafeAreaViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ea78
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNSSafeAreaViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNSSafeAreaViewPropsENS0_20BaseViewEventEmitterENS0_20RNSSafeAreaViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ea80
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00888750 to 00888763 has its CatchHandler @ 00888a48 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNSSafeAreaViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNSSafeAreaViewPropsENS0_20BaseViewEventEmitterENS0_20RNSSafeAreaViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ea78
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_0088879c:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_0088879c;
        }
        if (plVar8 != (long *)0x0) goto LAB_008887b0;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00888704 to 00888717 has its CatchHandler @ 00888a70 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_008887b0;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_008887b0:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 008886cc to 008886d7 has its CatchHandler @ 00888a44 */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNSSafeAreaViewComponentName_0099efa8,pcVar9);
      if (iVar6 != 0) goto LAB_008886e8;
      bVar3 = false;
    }
                    /* try { // try from 008887dc to 008887df has its CatchHandler @ 00888abc */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 008887ec to 00888807 has its CatchHandler @ 00888a6c */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00888948 to 00888957 has its CatchHandler @ 00888a64 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_00888b08;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00888928 to 00888937 has its CatchHandler @ 00888ac8 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_00888b08;
        }
        uVar1 = 0x811c9dc5;
        uVar7 = (ulong)(*(byte *)(plVar4 + 3) >> 1);
        pcVar5 = (char *)((long)plVar4 + 0x19);
        pcVar9 = (char *)((long)plVar4 + 0x19);
        if ((*(byte *)(plVar4 + 3) & 1) != 0) {
          uVar7 = plVar4[4];
          pcVar5 = (char *)plVar4[5];
          pcVar9 = (char *)plVar4[5];
        }
        for (; uVar7 != 0; uVar7 = uVar7 - 1) {
          uVar1 = (uVar1 ^ (int)*pcVar5) * 0x1000193;
          pcVar5 = pcVar5 + 1;
        }
                    /* try { // try from 00888888 to 00888893 has its CatchHandler @ 00888ad0 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 00888898 to 008888af has its CatchHandler @ 00888ad4 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 008888c0 to 008888cb has its CatchHandler @ 00888ac4 */
          (*(code *)(&PTR_FUN_0098f088)[local_a0])(&uStack_d1,local_d0);
        }
      }
      folly::dynamic::folly::dynamic::destroy(local_98);
    }
    param_1[1] = plVar8;
    *param_1 = this;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_00888b08:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00888b0c  FUN_00888b0c =====

/* WARNING: Removing unreachable block (ram,0x00888c0c) */
/* WARNING: Removing unreachable block (ram,0x00888c1c) */
/* WARNING: Removing unreachable block (ram,0x00888c40) */
/* WARNING: Removing unreachable block (ram,0x00888c50) */

void FUN_00888b0c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  State *pSVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_78;
  long local_70;
  long *local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)operator_new(0x28);
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_009960e8;
  plVar3[3] = 0;
  plVar3[4] = 0;
                    /* try { // try from 00888b68 to 00888b6f has its CatchHandler @ 00888ccc */
  puVar4 = (undefined8 *)operator_new(0x50);
  local_78 = *param_4;
  local_70 = param_4[1];
  pSVar1 = (State *)(puVar4 + 3);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_00995f40;
  if (local_70 != 0) {
    FUN_00757d00(1,local_70 + 0x10);
  }
                    /* try { // try from 00888bac to 00888bbb has its CatchHandler @ 00888c94 */
  local_68 = plVar3 + 3;
  local_60 = plVar3;
  facebook::react::State::State(pSVar1,&local_68,&local_78);
  if (local_70 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar3 = local_60;
  if ((local_60 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_60 + 1), lVar5 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined ***)pSVar1 = &PTR_FUN_00995f90;
  *param_1 = pSVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00888cf4  FUN_00888cf4 =====

/* WARNING: Removing unreachable block (ram,0x00888dc8) */
/* WARNING: Removing unreachable block (ram,0x00888dd8) */
/* WARNING: Removing unreachable block (ram,0x00888e2c) */
/* WARNING: Removing unreachable block (ram,0x00888e3c) */

void FUN_00888cf4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  State *pSVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_88;
  long *local_80;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar2 = *param_4;
  plVar3 = (long *)param_4[1];
  if (plVar3 != (long *)0x0) {
    FUN_00757d00(1,plVar3 + 1);
  }
                    /* try { // try from 00888d38 to 00888d43 has its CatchHandler @ 00888eb4 */
  facebook::react::ShadowNodeFamily::getMostRecentState();
                    /* try { // try from 00888d48 to 00888d4f has its CatchHandler @ 00888ea4 */
  puVar5 = (undefined8 *)operator_new(0x50);
  pSVar1 = (State *)(puVar5 + 3);
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_00996148;
                    /* try { // try from 00888d74 to 00888d83 has its CatchHandler @ 00888e7c */
  local_58 = uVar2;
  local_50 = plVar3;
  facebook::react::State::State(pSVar1,&local_58,local_88);
  plVar3 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar6 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined ***)pSVar1 = &PTR_FUN_00995f90;
  *param_1 = pSVar1;
  param_1[1] = puVar5;
  if ((local_80 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_80 + 1), lVar6 == 0)) {
    (**(code **)(*local_80 + 0x10))(local_80);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00888edc  FUN_00888edc =====

void FUN_00888edc(undefined8 *param_1,long param_2,long param_3)

{
  ShadowNodeFamily *pSVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ShadowNodeFamily *local_88;
  long *local_80;
  undefined8 local_78;
  long *local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_0078a610(&local_58,&local_68,param_3 + 8,param_3 + 4);
                    /* try { // try from 00888f20 to 00888f27 has its CatchHandler @ 00889128 */
  plVar6 = (long *)operator_new(0x68);
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_00992a08;
                    /* try { // try from 00888f40 to 00888f4b has its CatchHandler @ 00889110 */
  local_78 = FUN_008707fc(plVar6 + 3,&local_58,param_2 + 8);
  local_70 = plVar6;
  if ((local_50 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar7 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 00888f80 to 00888f87 has its CatchHandler @ 00889100 */
  plVar6 = (long *)operator_new(0x1a0);
  puVar3 = PTR_DAT_0099dca0;
  pSVar1 = (ShadowNodeFamily *)(plVar6 + 4);
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)(puVar3 + 0x10);
  local_58 = local_78;
  local_50 = local_70;
  if (local_70 != (long *)0x0) {
    FUN_00757d00(1,local_70 + 1);
  }
  local_68 = *(undefined8 *)(param_2 + 8);
  local_60 = *(long *)(param_2 + 0x10);
  if (local_60 != 0) {
    FUN_00757d00(1,local_60 + 0x10);
  }
                    /* try { // try from 00888fd4 to 00888feb has its CatchHandler @ 008890d0 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar1,param_3,&local_58,&local_68,param_2);
  if (local_60 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  uVar4 = local_78;
  *param_1 = pSVar1;
  param_1[1] = plVar6;
  local_88 = pSVar1;
  local_80 = plVar6;
  FUN_00757d00(1,plVar6 + 2);
                    /* try { // try from 00889040 to 0088904b has its CatchHandler @ 008890b0 */
  facebook::react::EventEmitter::facebook::react::EventEmitter::setShadowNodeFamily(uVar4,&local_88)
  ;
  if (local_80 != (long *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00889150  FUN_00889150 =====

void FUN_00889150(undefined8 param_1,undefined8 param_2)

{
  facebook::react::RNSSafeAreaViewShadowNode::facebook::react::RNSSafeAreaViewShadowNode::
  adjustLayoutWithState(param_2);
  return;
}


// ===== 00889158  FUN_00889158 =====

void FUN_00889158(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 0088917c  FUN_0088917c =====

void FUN_0088917c(void)

{
  return;
}


// ===== 00889180  FUN_00889180 =====

void FUN_00889180(long param_1)

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


// ===== 008891d0  FUN_008891d0 =====

void FUN_008891d0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00995cd8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008891e0  FUN_008891e0 =====

void FUN_008891e0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00995cd8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00889210  FUN_00889210 =====

void FUN_00889210(long param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  *(long *)(param_1 + 0x18) = (long)(PTR_vtable_0099de98 + 0x10);
  pvVar4 = *(void **)(param_1 + 0x3e0);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = *(void **)(param_1 + 1000);
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
      pvVar2 = *(void **)(param_1 + 0x3e0);
    }
    *(void **)(param_1 + 1000) = pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = *(void **)(param_1 + 0x3b0);
  if (pvVar4 != (void *)0x0) {
    *(void **)(param_1 + 0x3b8) = pvVar4;
    operator_delete(pvVar4);
  }
  FUN_007890e8(param_1 + 0x130);
  FUN_00789784((long *)(param_1 + 0x18));
  return;
}


// ===== 008892d4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008892d8  FUN_008892d8 =====

void FUN_008892d8(long *param_1)

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


// ===== 00889398  FUN_00889398 =====

void FUN_00889398(long param_1)

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


// ===== 00889400  FUN_00889400 =====

bool FUN_00889400(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 00889418  FUN_00889418 =====

bool FUN_00889418(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 00889430  FUN_00889430 =====

void FUN_00889430(long *param_1)

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


// ===== 008894f0  FUN_008894f0 =====

void FUN_008894f0(long param_1)

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


// ===== 00889540  FUN_00889540 =====

void FUN_00889540(long param_1)

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


// ===== 00889590  FUN_00889590 =====

void FUN_00889590(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x700);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00995ea0;
  memset(__s,0,0x6e8);
                    /* try { // try from 008895cc to 008895df has its CatchHandler @ 00889650 */
  FUN_00788b10(__s,PTR_VTT_0099efb8 + 0x10);
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
  puVar1 = PTR_vtable_0099efb0;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNSSafeAreaViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNSSafeAreaViewPropsENS0_20BaseViewEventEmitterENS0_20RNSSafeAreaViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ea78
  ;
  puVar2[0xdf] = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 0088966c  FUN_0088966c =====

void FUN_0088966c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00995ea0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0088967c  FUN_0088967c =====

void FUN_0088967c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00995ea0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008896ac  FUN_008896ac =====

void FUN_008896ac(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099efb8 + 8);
  return;
}


// ===== 008896c0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008896c4  FUN_008896c4 =====

void FUN_008896c4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00995ef0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008896d4  FUN_008896d4 =====

void FUN_008896d4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00995ef0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00889704  FUN_00889704 =====

void FUN_00889704(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099efb8 + 8);
  return;
}


// ===== 00889718  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0088971c  FUN_0088971c =====

void FUN_0088971c(long param_1)

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


// ===== 0088976c  FUN_0088976c =====

void FUN_0088976c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00995f40;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0088977c  FUN_0088977c =====

void FUN_0088977c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00995f40;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008897ac  FUN_008897ac =====

void FUN_008897ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008897b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008897b8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008897bc  FUN_008897bc =====

void FUN_008897bc(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[4];
  *param_1 = &PTR_FUN_0098f6c8;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[2] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 00889824  FUN_00889824 =====

void FUN_00889824(void)

{
  facebook::react::RNSSafeAreaViewState::getDynamic();
  return;
}


// ===== 0088982c  <EXTERNAL>::facebook::react::MapBufferBuilder::facebook::react::MapBufferBuilder::EMPTY =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::MapBufferBuilder::facebook::react::MapBufferBuilder::EMPTY(void)

{
  (*(code *)PTR_EMPTY_009a0138)();
  return;
}


// ===== 00889830  FUN_00889830 =====

void FUN_00889830(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 00889838  FUN_00889838 =====

void FUN_00889838(long param_1,dynamic *param_2)

{
  long lVar1;
  undefined8 uVar2;
  int *piVar3;
  long *plVar4;
  long *plVar5;
  undefined ***pppuVar6;
  undefined ****ppppuVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  dynamic adStack_130 [48];
  undefined **local_100;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  undefined ***local_e0;
  undefined **local_d0 [4];
  undefined ***local_b0 [2];
  long local_a0;
  long *local_98;
  long local_90 [4];
  long *local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  folly::dynamic::dynamic(adStack_130,param_2);
                    /* try { // try from 00889870 to 00889903 has its CatchHandler @ 00889c14 */
  uVar2 = folly::dynamic::operator[](adStack_130,"insets","");
  piVar3 = (int *)folly::dynamic::at(uVar2,&DAT_0036b8e4,&DAT_0036b8e8);
  if (*piVar3 == 3) {
    dVar10 = *(double *)(piVar3 + 2);
    piVar3 = (int *)folly::dynamic::at(uVar2,&DAT_0036d96a,&DAT_0036d96d);
    if (*piVar3 == 3) {
      dVar11 = *(double *)(piVar3 + 2);
      piVar3 = (int *)folly::dynamic::at(uVar2,"right","");
      if (*piVar3 == 3) {
        dVar12 = *(double *)(piVar3 + 2);
        piVar3 = (int *)folly::dynamic::at(uVar2,"bottom","");
        if (*piVar3 == 3) {
          local_100 = &PTR_FUN_00996068;
          local_f8 = (float)dVar10;
          fStack_f4 = (float)dVar11;
          local_e0 = &local_100;
          local_f0 = (float)dVar12;
          fStack_ec = (float)*(double *)(piVar3 + 2);
          if ((*(long *)(param_1 + 0x10) != 0) &&
             (plVar4 = (long *)std::__ndk1::__shared_weak_count::lock(), plVar4 != (long *)0x0)) {
            lVar9 = *(long *)(param_1 + 8);
            if (lVar9 != 0) {
              local_a0 = lVar9;
              local_98 = plVar4;
              FUN_00757d00(1,plVar4 + 1);
              local_b0[0] = local_e0;
              if (local_e0 != (undefined ***)0x0) {
                if (local_e0 == &local_100) {
                  local_b0[0] = local_d0;
                  (*(code *)local_100[3])(&local_100,local_d0);
                }
                else {
                    /* try { // try from 00889990 to 008899b7 has its CatchHandler @ 00889b80 */
                  local_b0[0] = (undefined ***)(*(code *)(*local_e0)[2])();
                }
              }
              local_70 = (long *)0x0;
                    /* try { // try from 008899bc to 008899c3 has its CatchHandler @ 00889b98 */
              plVar5 = (long *)operator_new(0x40);
              *plVar5 = (long)&PTR_FUN_00995fe8;
              if (local_b0[0] == (undefined ***)0x0) {
                ppppuVar7 = (undefined ****)(plVar5 + 6);
LAB_008899f8:
                *ppppuVar7 = (undefined ***)0x0;
              }
              else {
                if (local_b0[0] != local_d0) {
                  ppppuVar7 = local_b0;
                  plVar5[6] = (long)local_b0[0];
                  goto LAB_008899f8;
                }
                plVar5[6] = (long)(plVar5 + 2);
                    /* try { // try from 00889a0c to 00889a1b has its CatchHandler @ 00889b7c */
                (*(code *)local_d0[0][3])(local_d0);
              }
              local_70 = plVar5;
              if (local_b0[0] == local_d0) {
                lVar8 = 4;
                pppuVar6 = local_d0;
LAB_00889a44:
                (*(code *)(*pppuVar6)[lVar8])(pppuVar6);
              }
              else if (local_b0[0] != (undefined ***)0x0) {
                lVar8 = 5;
                pppuVar6 = local_b0[0];
                goto LAB_00889a44;
              }
                    /* try { // try from 00889a54 to 00889a63 has its CatchHandler @ 00889b88 */
              facebook::react::ShadowNodeFamily::facebook::react::ShadowNodeFamily::dispatchRawState
                        (lVar9,&local_a0,0);
              plVar5 = local_90;
              if (local_70 == plVar5) {
                lVar9 = 4;
LAB_00889a8c:
                (**(code **)(*plVar5 + lVar9 * 8))();
              }
              else if (local_70 != (long *)0x0) {
                lVar9 = 5;
                plVar5 = local_70;
                goto LAB_00889a8c;
              }
              plVar5 = local_98;
              if ((local_98 != (long *)0x0) &&
                 (lVar9 = FUN_00757990(0xffffffffffffffff,local_98 + 1), lVar9 == 0)) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
                std::__ndk1::__shared_weak_count::__release_weak();
              }
              if (plVar4 == (long *)0x0) goto LAB_00889af8;
            }
            lVar9 = FUN_00757990(0xffffffffffffffff,plVar4 + 1);
            if (lVar9 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
              std::__ndk1::__shared_weak_count::__release_weak();
            }
          }
LAB_00889af8:
          if (local_e0 == &local_100) {
            lVar9 = 4;
            pppuVar6 = &local_100;
LAB_00889b18:
            (*(code *)(*pppuVar6)[lVar9])();
          }
          else if (local_e0 != (undefined ***)0x0) {
            lVar9 = 5;
            pppuVar6 = local_e0;
            goto LAB_00889b18;
          }
          folly::dynamic::folly::dynamic::destroy(adStack_130);
          if (*(long *)(lVar1 + 0x28) == local_58) {
            return;
          }
          goto LAB_00889c38;
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 00889b6c to 00889b7b has its CatchHandler @ 00889c14 */
                    /* WARNING: Subroutine does not return */
    FUN_00789f8c(*(undefined8 *)PTR_name_0099edf8);
  }
LAB_00889c38:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00889c3c  FUN_00889c3c =====

void FUN_00889c3c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_00995fe8;
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = 5;
    plVar2 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00889c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 00889c80  FUN_00889c80 =====

void FUN_00889c80(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_00995fe8;
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00889ccc;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_00889ccc:
  operator_delete(param_1);
  return;
}


// ===== 00889cdc  FUN_00889cdc =====

undefined8 * FUN_00889cdc(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  plVar2 = *(long **)(param_1 + 0x30);
  *puVar1 = &PTR_FUN_00995fe8;
  if (plVar2 != (long *)0x0) {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      lVar3 = *plVar2;
      puVar1[6] = puVar1 + 2;
      (**(code **)(lVar3 + 0x18))();
      return puVar1;
    }
                    /* try { // try from 00889d24 to 00889d3f has its CatchHandler @ 00889d50 */
    plVar2 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  puVar1[6] = plVar2;
  return puVar1;
}


// ===== 00889d64  FUN_00889d64 =====

void FUN_00889d64(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x30);
  *param_2 = &PTR_FUN_00995fe8;
  if (plVar2 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      param_2[6] = param_2 + 2;
                    /* WARNING: Could not recover jumptable at 0x00889dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
      return;
    }
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    param_2[6] = uVar1;
  }
  return;
}


// ===== 00889dd8  FUN_00889dd8 =====

void FUN_00889dd8(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x30);
  plVar2 = (long *)(param_1 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = 5;
    plVar2 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00889e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 00889e10  FUN_00889e10 =====

void FUN_00889e10(void *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)((long)param_1 + 0x30);
  plVar2 = (long *)((long)param_1 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00889e50;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_00889e50:
  operator_delete(param_1);
  return;
}


// ===== 00889e60  FUN_00889e60 =====

void FUN_00889e60(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00889e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,*param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00785754();
}


// ===== 00889e84  FUN_00889e84 =====

long FUN_00889e84(long param_1,long param_2)

{
  param_1 = param_1 + 0x10;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099ea88) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00889ea0  FUN_00889ea0 =====

undefined * FUN_00889ea0(void)

{
  return PTR_typeinfo_0099ea90;
}


// ===== 00889eac  FUN_00889eac =====

void FUN_00889eac(void)

{
  return;
}


// ===== 00889eb0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00889eb4  FUN_00889eb4 =====

void FUN_00889eb4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00996068;
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  return;
}


// ===== 00889eec  FUN_00889eec =====

void FUN_00889eec(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_00996068;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}


// ===== 00889f04  FUN_00889f04 =====

void FUN_00889f04(void)

{
  return;
}


// ===== 00889f08  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00889f0c  FUN_00889f0c =====

void FUN_00889f0c(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *puVar1 = &PTR_FUN_009960e8;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[4] = uVar3;
  puVar1[3] = uVar2;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  return;
}


// ===== 00889f54  FUN_00889f54 =====

long FUN_00889f54(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099ea98) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00889f70  FUN_00889f70 =====

undefined * FUN_00889f70(void)

{
  return PTR_typeinfo_0099eaa0;
}


// ===== 00889f7c  FUN_00889f7c =====

void FUN_00889f7c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009960e8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00889f8c  FUN_00889f8c =====

void FUN_00889f8c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009960e8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00889fbc  FUN_00889fbc =====

void FUN_00889fbc(void)

{
  return;
}


// ===== 00889fc0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00889fc4  FUN_00889fc4 =====

void FUN_00889fc4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00996148;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00889fd4  FUN_00889fd4 =====

void FUN_00889fd4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00996148;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0088a004  FUN_0088a004 =====

void FUN_0088a004(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0088a00c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0088a010  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0088a014  facebook::react::concreteComponentDescriptorConstructor<facebook::react::RNSStackScreenComponentDescriptor> =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::unique_ptr<facebook::react::ComponentDescriptor const,
   std::__ndk1::default_delete<facebook::react::ComponentDescriptor const> >
   facebook::react::concreteComponentDescriptorConstructor<facebook::react::RNSStackScreenComponentDescriptor>(facebook::react::ComponentDescriptorParameters
   const&) */

void __thiscall
facebook::react::
concreteComponentDescriptorConstructor<facebook::react::RNSStackScreenComponentDescriptor>
          (react *this,ComponentDescriptorParameters *param_1)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ComponentDescriptor *this_00;
  long lVar6;
  undefined8 *in_x8;
  long *plVar7;
  void *pvVar8;
  undefined4 local_1020 [2];
  undefined8 *local_1018;
  void *local_1010;
  void *pvStack_1008;
  undefined8 local_1000;
  void *pvStack_ff8;
  void *local_ff0;
  undefined8 uStack_fe8;
  void *local_fe0;
  void *pvStack_fd8;
  undefined8 uStack_fd0;
  undefined8 uStack_fc8;
  undefined *local_fc0;
  undefined8 uStack_fb8;
  undefined8 local_fb0;
  undefined8 uStack_fa8;
  undefined4 local_fa0 [2];
  undefined8 local_f98;
  undefined8 uStack_f90;
  undefined8 local_f88;
  undefined8 uStack_f80;
  undefined4 local_f78;
  undefined4 local_f70;
  undefined1 local_f6c;
  undefined8 local_f6b;
  undefined8 local_f63;
  undefined8 uStack_f5b;
  undefined8 local_f53;
  undefined8 uStack_f4b;
  undefined8 local_f43;
  undefined8 uStack_f3b;
  undefined8 local_f33;
  undefined6 uStack_f2b;
  undefined2 uStack_f25;
  undefined6 uStack_f23;
  undefined8 uStack_f1d;
  undefined4 local_f15;
  undefined8 local_f11;
  undefined1 local_f09;
  undefined1 uStack_f08;
  undefined7 uStack_f07;
  undefined8 uStack_f00;
  undefined8 uStack_ef8;
  undefined8 uStack_ef0;
  undefined8 local_ee8;
  undefined8 uStack_ee0;
  undefined8 local_ed8;
  undefined8 uStack_ed0;
  undefined8 local_ec8;
  undefined8 uStack_ec0;
  undefined8 local_eb8;
  undefined8 uStack_eb0;
  undefined8 uStack_ea8;
  undefined8 local_ea0;
  undefined8 local_e98;
  undefined8 uStack_e90;
  undefined8 local_e88;
  undefined4 uStack_e80;
  undefined4 uStack_e7c;
  undefined4 uStack_e78;
  undefined4 uStack_e74;
  undefined4 uStack_e70;
  undefined4 uStack_e6c;
  undefined8 local_e68;
  undefined8 uStack_e60;
  undefined4 local_e58;
  undefined1 local_e54;
  undefined4 local_e50;
  undefined1 local_e4c;
  undefined4 local_e48;
  undefined1 local_e44;
  undefined4 local_e40;
  undefined1 local_e3c;
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
  undefined1 local_dd8;
  undefined1 local_dd4;
  undefined1 local_dc8;
  undefined8 local_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined8 local_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined1 uStack_d88;
  undefined7 local_d87;
  undefined1 uStack_d80;
  undefined8 uStack_d7f;
  undefined8 local_d74;
  undefined8 uStack_d6c;
  undefined8 uStack_d64;
  undefined8 uStack_d5c;
  undefined8 local_d54;
  undefined8 uStack_d4c;
  undefined8 uStack_d44;
  undefined8 uStack_d3c;
  undefined8 local_d34;
  undefined8 uStack_d2c;
  undefined8 uStack_d24;
  undefined5 uStack_d1c;
  undefined3 local_d17;
  undefined5 uStack_d14;
  undefined1 local_d0c;
  undefined1 local_d08;
  undefined1 local_d04;
  undefined1 local_d00;
  undefined1 local_cfc;
  undefined1 local_cf8;
  undefined1 local_ce0;
  undefined8 local_cd8;
  undefined8 uStack_cd0;
  undefined8 local_cc8;
  undefined4 local_cc0;
  undefined1 local_cbc;
  undefined4 local_cbb;
  undefined1 local_cb7;
  undefined1 local_cb6;
  undefined8 local_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 local_c90;
  undefined7 uStack_c88;
  undefined4 uStack_c81;
  undefined8 local_c7c;
  undefined1 local_c74;
  undefined1 local_c6c;
  undefined1 local_c68;
  undefined1 local_c60;
  undefined1 local_c5c;
  undefined1 local_c54;
  undefined1 local_c50;
  undefined1 local_c48;
  undefined1 local_c44;
  undefined1 local_c3c;
  undefined1 local_c38;
  undefined1 local_c30;
  undefined1 local_c2c;
  undefined1 local_c24;
  undefined1 local_c20;
  undefined1 local_c18;
  undefined1 local_c14;
  undefined1 local_c0c;
  undefined1 local_c08;
  undefined1 local_c00;
  undefined1 local_bfc;
  undefined1 local_bf4;
  undefined1 local_bf0;
  undefined1 local_be8;
  undefined1 local_be4;
  undefined1 local_bdc;
  undefined1 local_bd8;
  undefined1 local_bd4;
  undefined1 local_bd0;
  undefined1 local_bcc;
  undefined1 local_bc8;
  undefined1 local_bc4;
  undefined1 local_bc0;
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
  undefined8 local_b78;
  undefined8 uStack_b70;
  undefined8 local_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined2 local_b48;
  undefined8 local_b44;
  undefined1 local_b3c;
  undefined8 local_b38;
  undefined8 local_b30;
  undefined8 uStack_b28;
  undefined1 local_b20;
  undefined8 local_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
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
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined8 local_a58;
  undefined8 uStack_a50;
  undefined8 local_a48;
  undefined8 uStack_a40;
  undefined8 local_a38;
  undefined8 uStack_a30;
  undefined8 local_a28;
  undefined6 uStack_a20;
  undefined2 uStack_a1a;
  undefined6 uStack_a18;
  undefined1 local_a10;
  undefined1 local_a0c;
  undefined1 local_a08;
  undefined8 local_a04;
  undefined8 uStack_9fc;
  undefined1 local_9f4;
  undefined8 local_9f0;
  undefined2 local_9e8;
  undefined1 local_9e6;
  undefined4 local_9e4;
  undefined1 local_9e0;
  undefined1 local_980;
  undefined1 local_978;
  undefined1 local_918;
  undefined4 local_910;
  undefined2 local_90c;
  undefined1 local_908;
  undefined1 local_904;
  undefined1 local_900;
  undefined1 local_8fc;
  undefined1 local_8f8;
  undefined1 local_8f4;
  undefined1 local_8f0;
  undefined1 local_8ec;
  undefined1 local_8e8;
  undefined1 local_8e4;
  undefined4 local_8e0;
  ulong local_8d8;
  undefined8 uStack_8d0;
  void *local_8c8;
  undefined1 local_8c0;
  undefined4 local_8b8 [2];
  undefined8 local_8b0;
  undefined8 uStack_8a8;
  undefined8 local_8a0;
  undefined8 local_898;
  undefined8 uStack_890;
  byte local_1d0;
  void *local_1c0;
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
  undefined4 local_d0 [2];
  undefined8 local_c8;
  undefined4 local_a0;
  void *local_98;
  void *pvStack_90;
  undefined8 local_88;
  void *pvStack_80;
  void *local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this_00 = (ComponentDescriptor *)operator_new(0x88);
  pvStack_ff8 = (void *)0x0;
  local_1000 = 0;
  uStack_fe8 = 0;
  local_ff0 = (void *)0x0;
  pvStack_fd8 = (void *)0x0;
  local_fe0 = (void *)0x0;
  uStack_fc8 = 0;
  uStack_fd0 = 0;
  pvStack_1008 = (void *)0x0;
  local_1010 = (void *)0x0;
                    /* try { // try from 0088a064 to 0088a06f has its CatchHandler @ 0088a6d0 */
  ::facebook::react::ComponentDescriptor::ComponentDescriptor
            (this_00,(ComponentDescriptorParameters *)this,(RawPropsParser *)&local_1010);
  local_f8 = 0;
  *(undefined ***)this_00 = &PTR_FUN_00996240;
  local_f0 = 0;
  local_e8 = 0;
  local_e0[0] = 0;
  local_d0[0] = 0;
  local_c8 = 0;
  local_a0 = 0;
  pvStack_90 = (void *)0x0;
  local_98 = (void *)0x0;
  pvStack_80 = (void *)0x0;
  local_88 = 0;
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
                    /* try { // try from 0088a0e0 to 0088a0eb has its CatchHandler @ 0088a700 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_1020[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_1018 = &local_1b0;
  ::facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this_00 + 0x38);
  memset(local_fa0,0,0x6e8);
  puVar5 = PTR_VTT_0099efd0;
  local_8b8[0] = 5;
  local_8a0 = 0;
  local_fc0 = *(undefined **)(PTR_VTT_0099efd0 + 0x20);
  local_fa0[0] = 5;
  uStack_fa8 = 0;
  local_fb0 = 0;
  local_898 = 0;
  uStack_fb8 = 0;
  uStack_890 = 0x3f800000;
  uStack_8a8 = 0;
  local_8b0 = 0;
  uStack_f90 = 0;
  local_f98 = 0;
  uStack_f80 = 0;
  local_f88 = 0;
  local_f78 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_8b8);
  local_f6c = 0;
  local_f11 = 0;
  uStack_a30 = _UNK_00488920;
  local_a38 = _DAT_00488918;
  local_f6b = _s__00375408;
  uStack_b28 = _UNK_00371598;
  local_b30 = _DAT_00371590;
  uStack_a40 = _UNK_00488910;
  local_a48 = _DAT_00488908;
  local_e54 = 0;
  uStack_a50 = _UNK_00488900;
  local_a58 = _DAT_004888f8;
  uStack_a60 = _UNK_004888f0;
  local_a68 = _DAT_004888e8;
  uStack_a18 = 0;
  local_e4c = 0;
  uStack_e80 = 0;
  local_e88 = 0;
  uStack_e6c = 0;
  uStack_e90 = 0;
  local_e98 = 0;
  uStack_a20 = 0;
  uStack_a1a = 0;
  local_a28 = 0;
  local_f70 = 0x10410710;
  local_f15 = 0x40004;
  uStack_e74 = 0;
  uStack_e70 = 0;
  uStack_e7c = 0;
  uStack_e78 = 0;
  uStack_e60 = 0;
  local_e68 = 0;
  local_e58 = 0x7fc00000;
  local_e50 = 0x7fc00000;
  local_e48 = 0x7fc00000;
  local_e40 = 0x7fc00000;
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
  uStack_d7f = 0;
  uStack_d80 = 0;
  uStack_d6c = 0;
  local_d74 = 0;
  uStack_d5c = 0;
  uStack_d64 = 0;
  uStack_d4c = 0;
  local_d54 = 0;
  uStack_d3c = 0;
  uStack_d44 = 0;
  uStack_d2c = 0;
  local_d34 = 0;
  uStack_d1c = 0;
  uStack_d24 = 0;
  local_d17 = 0;
  uStack_d14 = 0;
  local_cbc = 1;
  local_cbb = 0;
  local_cb6 = 0x23;
  local_c7c = 0x3f800000;
  uStack_b60 = 0;
  local_b68 = 0;
  uStack_b50 = 0;
  uStack_b58 = 0;
  uStack_b70 = 0;
  local_b78 = 0;
  local_b44 = 0;
  uStack_b10 = 0;
  local_b18 = 0;
  uStack_b00 = 0;
  uStack_b08 = 0;
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
  uStack_f07 = 0;
  uStack_f5b = 0;
  local_f63 = 0;
  uStack_f4b = 0;
  local_f53 = 0;
  uStack_f3b = 0;
  local_f43 = 0;
  uStack_f2b = 0;
  local_f33 = 0;
  uStack_f1d = 0;
  uStack_f25 = 0;
  uStack_f23 = 0;
  local_f09 = 0;
  uStack_f08 = 0;
  uStack_ef8 = 0;
  uStack_f00 = 0;
  local_ee8 = 0;
  uStack_ef0 = 0;
  local_ed8 = 0;
  uStack_ee0 = 0;
  local_ec8 = 0;
  uStack_ed0 = 0;
  local_eb8 = 0;
  uStack_ec0 = 0;
  uStack_ea8 = 0;
  uStack_eb0 = 0;
  local_ea0 = 0;
  local_e44 = 0;
  local_e3c = 0;
  local_e34 = 0;
  local_e2c = 0;
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
  local_dd8 = 0;
  local_dd4 = 0;
  local_dc8 = 0;
  local_d0c = 0;
  local_d08 = 0;
  local_d04 = 0;
  local_d00 = 0;
  local_cfc = 0;
  local_cf8 = 0;
  local_ce0 = 0;
  uStack_db8 = 0;
  local_dc0 = 0;
  uStack_da8 = 0;
  uStack_db0 = 0;
  uStack_d98 = 0;
  local_da0 = 0;
  uStack_d88 = 0;
  local_d87 = 0;
  uStack_d90 = 0;
  uStack_cd0 = 0;
  local_cd8 = 0;
  local_cc8 = 0;
  local_cc0 = 0;
  local_cb7 = 0;
  uStack_ca8 = 0;
  local_cb0 = 0;
  uStack_c98 = 0;
  uStack_ca0 = 0;
  uStack_c88 = 0;
  uStack_c81 = 0;
  local_c90 = 0;
  local_c74 = 0;
  local_c6c = 0;
  local_c68 = 0;
  local_c60 = 0;
  local_c5c = 0;
  local_c54 = 0;
  local_c50 = 0;
  local_c48 = 0;
  local_c44 = 0;
  local_c3c = 0;
  local_c38 = 0;
  local_c30 = 0;
  local_c2c = 0;
  local_c24 = 0;
  local_c20 = 0;
  local_c18 = 0;
  local_c14 = 0;
  local_c0c = 0;
  local_c08 = 0;
  local_c00 = 0;
  local_bfc = 0;
  local_bf4 = 0;
  local_bf0 = 0;
  local_be8 = 0;
  local_be4 = 0;
  local_bdc = 0;
  local_bd8 = 0;
  local_bd4 = 0;
  local_bd0 = 0;
  local_bcc = 0;
  local_bc8 = 0;
  local_bc4 = 0;
  local_bc0 = 0;
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
  local_b38 = 0;
  local_b48 = 0;
  local_b3c = 0;
  local_b20 = 0;
  local_a10 = 0;
  local_a0c = 0;
  local_a08 = 0;
  local_9f0 = 0;
  uStack_9fc = 0;
  local_a04 = 0;
  local_9f4 = 0;
  local_9e8 = 0x101;
  local_9e6 = 0;
  local_9e4 = 0;
  local_9e0 = 0;
  local_980 = 0;
  local_978 = 0;
  local_918 = 0;
  local_908 = 0;
  local_904 = 0;
  local_900 = 0;
  local_8fc = 0;
  local_8f8 = 0;
  local_8f4 = 0;
  local_8f0 = 0;
  local_8ec = 0;
  local_8e8 = 0;
  local_8e4 = 0;
  local_90c = 0;
  local_910 = 0;
  local_fc0 = PTR_vtable_0099efc8 + 0x20;
  local_8e0 = 0;
  uStack_8d0 = 0;
  local_8d8 = 0;
  local_8c8 = (void *)0x0;
  local_8c0 = 0;
                    /* try { // try from 0088a4e8 to 0088a4fb has its CatchHandler @ 0088a700 */
  ::facebook::react::RNSStackScreenProps::RNSStackScreenProps
            ((RNSStackScreenProps *)local_8b8,(PropsParserContext *)local_1020,
             (RNSStackScreenProps *)&local_fc0,(RawProps *)&local_f8);
  if ((local_1d0 & 1) != 0) {
    operator_delete(local_1c0);
  }
  FUN_0078917c(local_8b8,puVar5 + 8);
  if ((local_8d8 & 1) != 0) {
    operator_delete(local_8c8);
  }
  FUN_0078917c(&local_fc0,puVar5 + 8);
  ::facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(this_00 + 0x38);
  pvVar3 = local_120;
  puVar4 = (undefined8 *)local_110;
  while (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar4[6];
    pvVar8 = (void *)*puVar4;
    local_120 = pvVar3;
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
    pvVar3 = local_120;
    puVar4 = (undefined8 *)pvVar8;
  }
  local_120 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_158);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_188);
  std::__ndk1::mutex::~mutex((mutex *)&local_1b0);
  pvVar8 = pvStack_80;
  pvVar3 = local_78;
  if (pvStack_80 != (void *)0x0) {
    while (pvVar3 != pvVar8) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 0088a620 to 0088a62b has its CatchHandler @ 0088a704 */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_fc0,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_78 = pvVar8;
    operator_delete(pvStack_80);
  }
  if (local_98 != (void *)0x0) {
    pvStack_90 = local_98;
    operator_delete(local_98);
  }
  folly::dynamic::folly::dynamic::destroy(local_d0);
  ::facebook::jsi::Value::~Value((Value *)local_e0);
  *(undefined ***)this_00 = &PTR_FUN_00996198;
  if (local_fe0 != (void *)0x0) {
    pvStack_fd8 = local_fe0;
    operator_delete(local_fe0);
  }
  if (pvStack_ff8 != (void *)0x0) {
    local_ff0 = pvStack_ff8;
    operator_delete(pvStack_ff8);
  }
  if (local_1010 != (void *)0x0) {
    pvStack_1008 = local_1010;
    operator_delete(local_1010);
  }
  *in_x8 = this_00;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0088a708  FUN_0088a708 =====

void FUN_0088a708(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 0088a72c  FUN_0088a72c =====

undefined * FUN_0088a72c(void)

{
  return PTR_RNSStackScreenComponentName_0099efc0;
}


// ===== 0088a738  FUN_0088a738 =====

undefined * FUN_0088a738(void)

{
  return PTR_RNSStackScreenComponentName_0099efc0;
}


// ===== 0088a744  FUN_0088a744 =====

undefined8 FUN_0088a744(void)

{
  return 0x61;
}


// ===== 0088a74c  FUN_0088a74c =====

void FUN_0088a74c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  
  lVar7 = tpidr_el0;
  lVar10 = *(long *)(lVar7 + 0x28);
  uVar8 = (**(code **)(*param_2 + 0x20))();
  puVar9 = (undefined8 *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(puVar9 + 3);
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &PTR_FUN_009962b8;
                    /* try { // try from 0088a7b8 to 0088a7c7 has its CatchHandler @ 0088a8b0 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar8);
  lVar11 = puVar9[4];
  puVar9[3] = &PTR_FUN_00996308;
  uVar3 = *(uint *)((long)puVar9 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar11 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar9 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar11 + 0x50) & 0x30000000) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if (*(char *)(lVar11 + 0x5b4) != '\0') {
      uVar8 = *(undefined4 *)(lVar11 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar9 + 10) = uVar8;
  cVar4 = *(char *)(lVar11 + 0x6b0);
  cVar5 = *(char *)(lVar11 + 0x6b1);
  cVar6 = *(char *)(lVar11 + 0x1e8);
  lVar11 = *param_2;
  puVar9[3] = PTR_vtable_0099efd8 + 0x10;
  *(uint *)((long)puVar9 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 | (uint)((cVar4 != '\0' || cVar5 != '\0') || cVar6 != '\0') << 0xb;
                    /* try { // try from 0088a864 to 0088a86f has its CatchHandler @ 0088a8a0 */
  (**(code **)(lVar11 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar9;
  if (*(long *)(lVar7 + 0x28) != lVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0088a8e0  FUN_0088a8e0 =====

void FUN_0088a8e0(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined4 uVar10;
  YogaLayoutableShadowNode *local_78;
  long *local_70;
  YogaLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar7 = tpidr_el0;
  local_58 = *(long *)(lVar7 + 0x28);
  plVar8 = (long *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(plVar8 + 3);
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_009962b8;
                    /* try { // try from 0088a938 to 0088a947 has its CatchHandler @ 0088aa98 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4);
  lVar9 = plVar8[4];
  plVar8[3] = (long)&PTR_FUN_00996308;
  uVar3 = *(uint *)((long)plVar8 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar9 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)plVar8 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar9 + 0x50) & 0x30000000) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    if (*(char *)(lVar9 + 0x5b4) != '\0') {
      uVar10 = *(undefined4 *)(lVar9 + 0x5b0);
    }
  }
  *(undefined4 *)(plVar8 + 10) = uVar10;
  cVar4 = *(char *)(lVar9 + 0x6b0);
  cVar5 = *(char *)(lVar9 + 0x6b1);
  cVar6 = *(char *)(lVar9 + 0x1e8);
  plVar8[3] = (long)(PTR_vtable_0099efd8 + 0x10);
  *(uint *)((long)plVar8 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 | (uint)((cVar4 != '\0' || cVar5 != '\0') || cVar6 != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar8;
                    /* try { // try from 0088a9dc to 0088a9eb has its CatchHandler @ 0088aab0 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pYVar1,param_3,param_4);
  local_78 = pYVar1;
  local_70 = plVar8;
  FUN_00757d00(1,plVar8 + 1);
                    /* try { // try from 0088a9fc to 0088aa0b has its CatchHandler @ 0088aa88 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar8 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar9 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar9 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 0088aa48 to 0088aa53 has its CatchHandler @ 0088aab0 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar7 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0088aad8  FUN_0088aad8 =====

void FUN_0088aad8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::appendChild
            (*param_2,param_3);
  return;
}


// ===== 0088aae4  FUN_0088aae4 =====

void FUN_0088aae4(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNSStackScreenProps *this;
  uint uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  char *pcVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  char *pcVar9;
  dynamic *pdVar10;
  long lVar11;
  RNSStackScreenProps *pRVar12;
  undefined1 uStack_d1;
  dynamic local_d0 [32];
  dynamic *local_b0;
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar7 = facebook::react::RawProps::isEmpty(), (uVar7 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27RNSStackScreenComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19RNSStackScreenPropsENS0_26RNSStackScreenEventEmitterENS0_19RNSStackScreenStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eab0
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27RNSStackScreenComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19RNSStackScreenPropsENS0_26RNSStackScreenEventEmitterENS0_19RNSStackScreenStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eab0
                                   ), iVar6 != 0)) {
                    /* try { // try from 0088af18 to 0088af1b has its CatchHandler @ 0088af48 */
      FUN_0088bbe0();
      __cxa_atexit(FUN_0088bb90,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27RNSStackScreenComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19RNSStackScreenPropsENS0_26RNSStackScreenEventEmitterENS0_19RNSStackScreenStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eaa8
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27RNSStackScreenComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19RNSStackScreenPropsENS0_26RNSStackScreenEventEmitterENS0_19RNSStackScreenStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eab0
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27RNSStackScreenComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19RNSStackScreenPropsENS0_26RNSStackScreenEventEmitterENS0_19RNSStackScreenStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eaa8
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27RNSStackScreenComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19RNSStackScreenPropsENS0_26RNSStackScreenEventEmitterENS0_19RNSStackScreenStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eaa8
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNSStackScreenProps *)*param_4;
    if (pRVar12 == (RNSStackScreenProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27RNSStackScreenComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19RNSStackScreenPropsENS0_26RNSStackScreenEventEmitterENS0_19RNSStackScreenStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eab0
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27RNSStackScreenComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19RNSStackScreenPropsENS0_26RNSStackScreenEventEmitterENS0_19RNSStackScreenStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eab0
                                     ), iVar6 != 0)) {
                    /* try { // try from 0088ae98 to 0088ae9b has its CatchHandler @ 0088af60 */
        FUN_0088bbe0();
        __cxa_atexit(FUN_0088bb90,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27RNSStackScreenComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19RNSStackScreenPropsENS0_26RNSStackScreenEventEmitterENS0_19RNSStackScreenStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eaa8
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27RNSStackScreenComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19RNSStackScreenPropsENS0_26RNSStackScreenEventEmitterENS0_19RNSStackScreenStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eab0
                           );
      }
      pRVar12 = *(RNSStackScreenProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27RNSStackScreenComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19RNSStackScreenPropsENS0_26RNSStackScreenEventEmitterENS0_19RNSStackScreenStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eaa8
      ;
    }
    plVar8 = (long *)operator_new(0x720);
    this = (RNSStackScreenProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_00996420;
                    /* try { // try from 0088abc4 to 0088abd7 has its CatchHandler @ 0088afd4 */
    facebook::react::RNSStackScreenProps::RNSStackScreenProps(this,param_3,pRVar12,param_5);
                    /* try { // try from 0088abdc to 0088abef has its CatchHandler @ 0088afec */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_0088ac18:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27RNSStackScreenComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19RNSStackScreenPropsENS0_26RNSStackScreenEventEmitterENS0_19RNSStackScreenStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eab0
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27RNSStackScreenComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19RNSStackScreenPropsENS0_26RNSStackScreenEventEmitterENS0_19RNSStackScreenStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eab0
                                       ), iVar6 != 0)) {
                    /* try { // try from 0088aed8 to 0088aedb has its CatchHandler @ 0088af4c */
          FUN_0088bbe0();
          __cxa_atexit(FUN_0088bb90,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27RNSStackScreenComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19RNSStackScreenPropsENS0_26RNSStackScreenEventEmitterENS0_19RNSStackScreenStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eaa8
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27RNSStackScreenComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19RNSStackScreenPropsENS0_26RNSStackScreenEventEmitterENS0_19RNSStackScreenStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eab0
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0088ac80 to 0088ac93 has its CatchHandler @ 0088af78 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27RNSStackScreenComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19RNSStackScreenPropsENS0_26RNSStackScreenEventEmitterENS0_19RNSStackScreenStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eaa8
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_0088accc:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_0088accc;
        }
        if (plVar8 != (long *)0x0) goto LAB_0088ace0;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0088ac34 to 0088ac47 has its CatchHandler @ 0088afa0 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_0088ace0;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_0088ace0:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 0088abfc to 0088ac07 has its CatchHandler @ 0088af74 */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNSStackScreenComponentName_0099efc0,pcVar9);
      if (iVar6 != 0) goto LAB_0088ac18;
      bVar3 = false;
    }
                    /* try { // try from 0088ad0c to 0088ad0f has its CatchHandler @ 0088afec */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 0088ad1c to 0088ad37 has its CatchHandler @ 0088af9c */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0088ae78 to 0088ae87 has its CatchHandler @ 0088af94 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_0088b038;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0088ae58 to 0088ae67 has its CatchHandler @ 0088aff8 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_0088b038;
        }
        uVar1 = 0x811c9dc5;
        uVar7 = (ulong)(*(byte *)(plVar4 + 3) >> 1);
        pcVar5 = (char *)((long)plVar4 + 0x19);
        pcVar9 = (char *)((long)plVar4 + 0x19);
        if ((*(byte *)(plVar4 + 3) & 1) != 0) {
          uVar7 = plVar4[4];
          pcVar5 = (char *)plVar4[5];
          pcVar9 = (char *)plVar4[5];
        }
        for (; uVar7 != 0; uVar7 = uVar7 - 1) {
          uVar1 = (uVar1 ^ (int)*pcVar5) * 0x1000193;
          pcVar5 = pcVar5 + 1;
        }
                    /* try { // try from 0088adb8 to 0088adc3 has its CatchHandler @ 0088b000 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 0088adc8 to 0088addf has its CatchHandler @ 0088b004 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 0088adf0 to 0088adfb has its CatchHandler @ 0088aff4 */
          (*(code *)(&PTR_FUN_0098f088)[local_a0])(&uStack_d1,local_d0);
        }
      }
      folly::dynamic::folly::dynamic::destroy(local_98);
    }
    param_1[1] = plVar8;
    *param_1 = this;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_0088b038:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0088b03c  FUN_0088b03c =====

/* WARNING: Removing unreachable block (ram,0x0088b13c) */
/* WARNING: Removing unreachable block (ram,0x0088b14c) */
/* WARNING: Removing unreachable block (ram,0x0088b170) */
/* WARNING: Removing unreachable block (ram,0x0088b180) */

void FUN_0088b03c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  State *pSVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_78;
  long local_70;
  long *local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)operator_new(0x28);
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_00996618;
  plVar3[3] = 0;
  plVar3[4] = 0;
                    /* try { // try from 0088b098 to 0088b09f has its CatchHandler @ 0088b1fc */
  puVar4 = (undefined8 *)operator_new(0x50);
  local_78 = *param_4;
  local_70 = param_4[1];
  pSVar1 = (State *)(puVar4 + 3);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_00996470;
  if (local_70 != 0) {
    FUN_00757d00(1,local_70 + 0x10);
  }
                    /* try { // try from 0088b0dc to 0088b0eb has its CatchHandler @ 0088b1c4 */
  local_68 = plVar3 + 3;
  local_60 = plVar3;
  facebook::react::State::State(pSVar1,&local_68,&local_78);
  if (local_70 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar3 = local_60;
  if ((local_60 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_60 + 1), lVar5 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined ***)pSVar1 = &PTR_FUN_009964c0;
  *param_1 = pSVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0088b224  FUN_0088b224 =====

/* WARNING: Removing unreachable block (ram,0x0088b2f8) */
/* WARNING: Removing unreachable block (ram,0x0088b308) */
/* WARNING: Removing unreachable block (ram,0x0088b35c) */
/* WARNING: Removing unreachable block (ram,0x0088b36c) */

void FUN_0088b224(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  State *pSVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_88;
  long *local_80;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar2 = *param_4;
  plVar3 = (long *)param_4[1];
  if (plVar3 != (long *)0x0) {
    FUN_00757d00(1,plVar3 + 1);
  }
                    /* try { // try from 0088b268 to 0088b273 has its CatchHandler @ 0088b3e4 */
  facebook::react::ShadowNodeFamily::getMostRecentState();
                    /* try { // try from 0088b278 to 0088b27f has its CatchHandler @ 0088b3d4 */
  puVar5 = (undefined8 *)operator_new(0x50);
  pSVar1 = (State *)(puVar5 + 3);
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_00996678;
                    /* try { // try from 0088b2a4 to 0088b2b3 has its CatchHandler @ 0088b3ac */
  local_58 = uVar2;
  local_50 = plVar3;
  facebook::react::State::State(pSVar1,&local_58,local_88);
  plVar3 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar6 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined ***)pSVar1 = &PTR_FUN_009964c0;
  *param_1 = pSVar1;
  param_1[1] = puVar5;
  if ((local_80 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_80 + 1), lVar6 == 0)) {
    (**(code **)(*local_80 + 0x10))(local_80);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0088b40c  FUN_0088b40c =====

void FUN_0088b40c(undefined8 *param_1,long param_2,long param_3)

{
  EventEmitter *pEVar1;
  ShadowNodeFamily *pSVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ShadowNodeFamily *local_b0;
  long *local_a8;
  EventEmitter *local_a0;
  long *plStack_98;
  EventEmitter *local_90;
  long *local_88;
  undefined8 local_80;
  long local_78;
  EventEmitter *local_70;
  long *plStack_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_0078a610(&local_a0,&local_70,param_3 + 8,param_3 + 4);
                    /* try { // try from 0088b454 to 0088b45b has its CatchHandler @ 0088b740 */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_009966c8;
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  pEVar1 = (EventEmitter *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  plStack_68 = plStack_98;
  local_70 = local_a0;
  local_a0 = (EventEmitter *)0x0;
  plStack_98 = (long *)0x0;
  if (local_78 != 0) {
    FUN_00757d00(1,local_78 + 0x10);
  }
                    /* try { // try from 0088b498 to 0088b4a7 has its CatchHandler @ 0088b714 */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_0097ff10;
                    /* try { // try from 0088b4b8 to 0088b4bf has its CatchHandler @ 0088b704 */
  plVar6 = (long *)operator_new(0x58);
  puVar4 = PTR_DAT_0099dc90;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)(puVar4 + 0x10);
  plVar6[4] = 0;
  plVar6[3] = 0;
  plVar5[0xb] = (long)(plVar6 + 3);
  plVar5[0xc] = (long)plVar6;
  plVar6[6] = 0;
  plVar6[5] = 0;
  plVar6[8] = 0;
  plVar6[7] = 0;
  *(undefined8 *)((long)plVar6 + 0x4c) = 0;
  *(undefined8 *)((long)plVar6 + 0x44) = 0;
  plVar5[3] = (long)&PTR_FUN_00996718;
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_98;
  local_90 = pEVar1;
  local_88 = plVar5;
  if ((plStack_98 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_98 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0088b570 to 0088b577 has its CatchHandler @ 0088b6f4 */
  plVar5 = (long *)operator_new(0x1a0);
  puVar4 = PTR_DAT_0099dca0;
  pSVar2 = (ShadowNodeFamily *)(plVar5 + 4);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)(puVar4 + 0x10);
  local_70 = local_90;
  plStack_68 = local_88;
  if (local_88 != (long *)0x0) {
    FUN_00757d00(1,local_88 + 1);
  }
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  if (local_78 != 0) {
    FUN_00757d00(1,local_78 + 0x10);
  }
                    /* try { // try from 0088b5c4 to 0088b5db has its CatchHandler @ 0088b6c4 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar2,param_3,&local_70,&local_80,param_2);
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pEVar1 = local_90;
  *param_1 = pSVar2;
  param_1[1] = plVar5;
  local_b0 = pSVar2;
  local_a8 = plVar5;
  FUN_00757d00(1,plVar5 + 2);
                    /* try { // try from 0088b630 to 0088b63b has its CatchHandler @ 0088b6a4 */
  facebook::react::EventEmitter::facebook::react::EventEmitter::setShadowNodeFamily
            (pEVar1,&local_b0);
  if (local_a8 != (long *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0088b768  FUN_0088b768 =====

void FUN_0088b768(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::react::ShadowNode::getState();
  lVar3 = *plVar2;
  plVar2 = (long *)plVar2[1];
  if (plVar2 != (long *)0x0) {
    FUN_00757d00(1,plVar2 + 1);
  }
  if ((**(float **)(lVar3 + 0x18) != 0.0) && ((*(float **)(lVar3 + 0x18))[1] != 0.0)) {
                    /* try { // try from 0088b7c8 to 0088b7cf has its CatchHandler @ 0088b840 */
    facebook::react::YogaLayoutableShadowNode::setSize(param_2);
  }
  if ((plVar2 == (long *)0x0) || (lVar3 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar3 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == lVar4) {
      return;
    }
  }
  else {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    if (*(long *)(lVar1 + 0x28) == lVar4) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0088b868  FUN_0088b868 =====

void FUN_0088b868(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 0088b88c  FUN_0088b88c =====

void FUN_0088b88c(void)

{
  return;
}


// ===== 0088b890  FUN_0088b890 =====

void FUN_0088b890(long param_1)

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


// ===== 0088b8e0  FUN_0088b8e0 =====

void FUN_0088b8e0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009962b8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0088b8f0  FUN_0088b8f0 =====

void FUN_0088b8f0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009962b8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0088b920  FUN_0088b920 =====

void FUN_0088b920(long param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  *(long *)(param_1 + 0x18) = (long)(PTR_vtable_0099de98 + 0x10);
  pvVar4 = *(void **)(param_1 + 0x3e0);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = *(void **)(param_1 + 1000);
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
      pvVar2 = *(void **)(param_1 + 0x3e0);
    }
    *(void **)(param_1 + 1000) = pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = *(void **)(param_1 + 0x3b0);
  if (pvVar4 != (void *)0x0) {
    *(void **)(param_1 + 0x3b8) = pvVar4;
    operator_delete(pvVar4);
  }
  FUN_007890e8(param_1 + 0x130);
  FUN_00789784((long *)(param_1 + 0x18));
  return;
}


// ===== 0088b9e4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0088b9e8  FUN_0088b9e8 =====

void FUN_0088b9e8(long *param_1)

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


// ===== 0088baa8  FUN_0088baa8 =====

void FUN_0088baa8(long param_1)

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


// ===== 0088bb10  FUN_0088bb10 =====

bool FUN_0088bb10(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 0088bb28  FUN_0088bb28 =====

bool FUN_0088bb28(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 0088bb40  FUN_0088bb40 =====

void FUN_0088bb40(long param_1)

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


// ===== 0088bb90  FUN_0088bb90 =====

void FUN_0088bb90(long param_1)

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


// ===== 0088bbe0  FUN_0088bbe0 =====

void FUN_0088bbe0(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x720);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_009963d0;
  memset(__s,0,0x708);
                    /* try { // try from 0088bc1c to 0088bc2f has its CatchHandler @ 0088bcb0 */
  FUN_00788b10(__s,PTR_VTT_0099efd0 + 0x10);
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
  puVar1 = PTR_vtable_0099efc8;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *(undefined4 *)(puVar2 + 0xdf) = 0;
  puVar2[3] = puVar1 + 0x20;
  *(undefined1 *)(puVar2 + 0xe3) = 0;
  puVar2[0xe2] = 0;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27RNSStackScreenComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19RNSStackScreenPropsENS0_26RNSStackScreenEventEmitterENS0_19RNSStackScreenStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eaa8
  ;
  puVar2[0xe1] = 0;
  puVar2[0xe0] = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 0088bccc  FUN_0088bccc =====

void FUN_0088bccc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009963d0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0088bcdc  FUN_0088bcdc =====

void FUN_0088bcdc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009963d0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0088bd0c  FUN_0088bd0c =====

void FUN_0088bd0c(long param_1)

{
  if ((*(byte *)(param_1 + 0x700) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x710));
  }
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099efd0 + 8);
  return;
}


// ===== 0088bd48  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0088bd4c  FUN_0088bd4c =====

void FUN_0088bd4c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00996420;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0088bd5c  FUN_0088bd5c =====

void FUN_0088bd5c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00996420;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0088bd8c  FUN_0088bd8c =====

void FUN_0088bd8c(long param_1)

{
  if ((*(byte *)(param_1 + 0x700) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x710));
  }
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099efd0 + 8);
  return;
}


// ===== 0088bdc8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0088bdcc  FUN_0088bdcc =====

void FUN_0088bdcc(long param_1)

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


// ===== 0088be1c  FUN_0088be1c =====

void FUN_0088be1c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00996470;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0088be2c  FUN_0088be2c =====

void FUN_0088be2c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00996470;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0088be5c  FUN_0088be5c =====

void FUN_0088be5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0088be64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0088be68  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0088be6c  FUN_0088be6c =====

void FUN_0088be6c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[4];
  *param_1 = &PTR_FUN_0098f6c8;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[2] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 0088bed4  FUN_0088bed4 =====

void FUN_0088bed4(void)

{
  facebook::react::RNSStackScreenState::getDynamic();
  return;
}


// ===== 0088bedc  <EXTERNAL>::facebook::react::MapBufferBuilder::facebook::react::MapBufferBuilder::EMPTY =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::MapBufferBuilder::facebook::react::MapBufferBuilder::EMPTY(void)

{
  (*(code *)PTR_EMPTY_009a0138)();
  return;
}


// ===== 0088bee0  FUN_0088bee0 =====

void FUN_0088bee0(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 0088bee8  FUN_0088bee8 =====

void FUN_0088bee8(long param_1,dynamic *param_2)

{
  long lVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  undefined ***pppuVar5;
  undefined ****ppppuVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  dynamic adStack_130 [48];
  undefined **local_100;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  undefined ***local_e0;
  undefined **local_d0 [4];
  undefined ***local_b0 [2];
  long local_a0;
  long *local_98;
  long local_90 [4];
  long *local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  folly::dynamic::dynamic(adStack_130,param_2);
                    /* try { // try from 0088bf20 to 0088bf9f has its CatchHandler @ 0088c2b0 */
  piVar2 = (int *)folly::dynamic::operator[](adStack_130,"frameWidth","");
  if (*piVar2 == 3) {
    dVar9 = *(double *)(piVar2 + 2);
    piVar2 = (int *)folly::dynamic::operator[](adStack_130,"frameHeight","");
    if (*piVar2 == 3) {
      dVar10 = *(double *)(piVar2 + 2);
      piVar2 = (int *)folly::dynamic::operator[](adStack_130,"contentOffsetX","");
      if (*piVar2 == 3) {
        dVar11 = *(double *)(piVar2 + 2);
        piVar2 = (int *)folly::dynamic::operator[](adStack_130,"contentOffsetY","");
        if (*piVar2 == 3) {
          local_100 = &PTR_FUN_00996598;
          local_f8 = (float)dVar9;
          fStack_f4 = (float)dVar10;
          local_e0 = &local_100;
          local_f0 = (float)dVar11;
          fStack_ec = (float)*(double *)(piVar2 + 2);
          if ((*(long *)(param_1 + 0x10) != 0) &&
             (plVar3 = (long *)std::__ndk1::__shared_weak_count::lock(), plVar3 != (long *)0x0)) {
            lVar8 = *(long *)(param_1 + 8);
            if (lVar8 != 0) {
              local_a0 = lVar8;
              local_98 = plVar3;
              FUN_00757d00(1,plVar3 + 1);
              local_b0[0] = local_e0;
              if (local_e0 != (undefined ***)0x0) {
                if (local_e0 == &local_100) {
                  local_b0[0] = local_d0;
                  (*(code *)local_100[3])(&local_100,local_d0);
                }
                else {
                    /* try { // try from 0088c02c to 0088c053 has its CatchHandler @ 0088c21c */
                  local_b0[0] = (undefined ***)(*(code *)(*local_e0)[2])();
                }
              }
              local_70 = (long *)0x0;
                    /* try { // try from 0088c058 to 0088c05f has its CatchHandler @ 0088c234 */
              plVar4 = (long *)operator_new(0x40);
              *plVar4 = (long)&PTR_FUN_00996518;
              if (local_b0[0] == (undefined ***)0x0) {
                ppppuVar6 = (undefined ****)(plVar4 + 6);
LAB_0088c094:
                *ppppuVar6 = (undefined ***)0x0;
              }
              else {
                if (local_b0[0] != local_d0) {
                  ppppuVar6 = local_b0;
                  plVar4[6] = (long)local_b0[0];
                  goto LAB_0088c094;
                }
                plVar4[6] = (long)(plVar4 + 2);
                    /* try { // try from 0088c0a8 to 0088c0b7 has its CatchHandler @ 0088c218 */
                (*(code *)local_d0[0][3])(local_d0);
              }
              local_70 = plVar4;
              if (local_b0[0] == local_d0) {
                lVar7 = 4;
                pppuVar5 = local_d0;
LAB_0088c0e0:
                (*(code *)(*pppuVar5)[lVar7])(pppuVar5);
              }
              else if (local_b0[0] != (undefined ***)0x0) {
                lVar7 = 5;
                pppuVar5 = local_b0[0];
                goto LAB_0088c0e0;
              }
                    /* try { // try from 0088c0f0 to 0088c0ff has its CatchHandler @ 0088c224 */
              facebook::react::ShadowNodeFamily::facebook::react::ShadowNodeFamily::dispatchRawState
                        (lVar8,&local_a0,0);
              plVar4 = local_90;
              if (local_70 == plVar4) {
                lVar8 = 4;
LAB_0088c128:
                (**(code **)(*plVar4 + lVar8 * 8))();
              }
              else if (local_70 != (long *)0x0) {
                lVar8 = 5;
                plVar4 = local_70;
                goto LAB_0088c128;
              }
              plVar4 = local_98;
              if ((local_98 != (long *)0x0) &&
                 (lVar8 = FUN_00757990(0xffffffffffffffff,local_98 + 1), lVar8 == 0)) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
                std::__ndk1::__shared_weak_count::__release_weak();
              }
              if (plVar3 == (long *)0x0) goto LAB_0088c194;
            }
            lVar8 = FUN_00757990(0xffffffffffffffff,plVar3 + 1);
            if (lVar8 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
              std::__ndk1::__shared_weak_count::__release_weak();
            }
          }
LAB_0088c194:
          if (local_e0 == &local_100) {
            lVar8 = 4;
            pppuVar5 = &local_100;
LAB_0088c1b4:
            (*(code *)(*pppuVar5)[lVar8])();
          }
          else if (local_e0 != (undefined ***)0x0) {
            lVar8 = 5;
            pppuVar5 = local_e0;
            goto LAB_0088c1b4;
          }
          folly::dynamic::folly::dynamic::destroy(adStack_130);
          if (*(long *)(lVar1 + 0x28) == local_58) {
            return;
          }
          goto LAB_0088c2d4;
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 0088c208 to 0088c217 has its CatchHandler @ 0088c2b0 */
                    /* WARNING: Subroutine does not return */
    FUN_00789f8c(*(undefined8 *)PTR_name_0099edf8);
  }
LAB_0088c2d4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0088c2d8  FUN_0088c2d8 =====

void FUN_0088c2d8(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_00996518;
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = 5;
    plVar2 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0088c314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 0088c31c  FUN_0088c31c =====

void FUN_0088c31c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_00996518;
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0088c368;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_0088c368:
  operator_delete(param_1);
  return;
}


// ===== 0088c378  FUN_0088c378 =====

undefined8 * FUN_0088c378(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  plVar2 = *(long **)(param_1 + 0x30);
  *puVar1 = &PTR_FUN_00996518;
  if (plVar2 != (long *)0x0) {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      lVar3 = *plVar2;
      puVar1[6] = puVar1 + 2;
      (**(code **)(lVar3 + 0x18))();
      return puVar1;
    }
                    /* try { // try from 0088c3c0 to 0088c3db has its CatchHandler @ 0088c3ec */
    plVar2 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  puVar1[6] = plVar2;
  return puVar1;
}


// ===== 0088c400  FUN_0088c400 =====

void FUN_0088c400(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x30);
  *param_2 = &PTR_FUN_00996518;
  if (plVar2 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      param_2[6] = param_2 + 2;
                    /* WARNING: Could not recover jumptable at 0x0088c470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
      return;
    }
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    param_2[6] = uVar1;
  }
  return;
}


// ===== 0088c474  FUN_0088c474 =====

void FUN_0088c474(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x30);
  plVar2 = (long *)(param_1 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = 5;
    plVar2 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0088c4a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 0088c4ac  FUN_0088c4ac =====

void FUN_0088c4ac(void *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)((long)param_1 + 0x30);
  plVar2 = (long *)((long)param_1 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0088c4ec;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_0088c4ec:
  operator_delete(param_1);
  return;
}


// ===== 0088c4fc  FUN_0088c4fc =====

void FUN_0088c4fc(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0088c510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,*param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00785754();
}


// ===== 0088c520  FUN_0088c520 =====

long FUN_0088c520(long param_1,long param_2)

{
  param_1 = param_1 + 0x10;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099eab8) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0088c53c  FUN_0088c53c =====

undefined * FUN_0088c53c(void)

{
  return PTR_typeinfo_0099eac0;
}


// ===== 0088c548  FUN_0088c548 =====

void FUN_0088c548(void)

{
  return;
}


// ===== 0088c54c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0088c550  FUN_0088c550 =====

void FUN_0088c550(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00996598;
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  return;
}


// ===== 0088c588  FUN_0088c588 =====

void FUN_0088c588(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_00996598;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}


// ===== 0088c5a0  FUN_0088c5a0 =====

void FUN_0088c5a0(void)

{
  return;
}


// ===== 0088c5a4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0088c5a8  FUN_0088c5a8 =====

void FUN_0088c5a8(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *puVar1 = &PTR_FUN_00996618;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[4] = uVar3;
  puVar1[3] = uVar2;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  return;
}


// ===== 0088c5f0  FUN_0088c5f0 =====

long FUN_0088c5f0(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099eac8) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0088c60c  FUN_0088c60c =====

undefined * FUN_0088c60c(void)

{
  return PTR_typeinfo_0099ead0;
}


// ===== 0088c618  FUN_0088c618 =====

void FUN_0088c618(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00996618;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0088c628  FUN_0088c628 =====

void FUN_0088c628(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00996618;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0088c658  FUN_0088c658 =====

void FUN_0088c658(void)

{
  return;
}


// ===== 0088c65c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0088c660  FUN_0088c660 =====

void FUN_0088c660(long param_1)

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


// ===== 0088c6b0  FUN_0088c6b0 =====

void FUN_0088c6b0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00996678;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0088c6c0  FUN_0088c6c0 =====

void FUN_0088c6c0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00996678;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0088c6f0  FUN_0088c6f0 =====

void FUN_0088c6f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0088c6f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0088c6fc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0088c700  FUN_0088c700 =====

void FUN_0088c700(long param_1)

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


// ===== 0088c750  FUN_0088c750 =====

void FUN_0088c750(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009966c8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0088c760  FUN_0088c760 =====

void FUN_0088c760(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009966c8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0088c790  FUN_0088c790 =====

void FUN_0088c790(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0088c798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0088c79c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0088c7a0  FUN_0088c7a0 =====

void FUN_0088c7a0(long *param_1)

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


// ===== 0088c858  facebook::react::concreteComponentDescriptorConstructor<facebook::react::RNSStackHeaderConfigComponentDescriptor> =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::unique_ptr<facebook::react::ComponentDescriptor const,
   std::__ndk1::default_delete<facebook::react::ComponentDescriptor const> >
   facebook::react::concreteComponentDescriptorConstructor<facebook::react::RNSStackHeaderConfigComponentDescriptor>(facebook::react::ComponentDescriptorParameters
   const&) */

void __thiscall
facebook::react::
concreteComponentDescriptorConstructor<facebook::react::RNSStackHeaderConfigComponentDescriptor>
          (react *this,ComponentDescriptorParameters *param_1)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ComponentDescriptor *this_00;
  long lVar6;
  undefined8 *in_x8;
  long *plVar7;
  void *pvVar8;
  undefined4 local_1220 [2];
  undefined8 *local_1218;
  void *local_1210;
  void *pvStack_1208;
  undefined8 local_1200;
  void *pvStack_11f8;
  void *local_11f0;
  undefined8 uStack_11e8;
  void *local_11e0;
  void *pvStack_11d8;
  undefined8 uStack_11d0;
  undefined8 uStack_11c8;
  undefined *local_11c0;
  undefined8 uStack_11b8;
  undefined8 local_11b0;
  undefined8 uStack_11a8;
  undefined4 local_11a0 [2];
  undefined8 local_1198;
  undefined8 uStack_1190;
  undefined8 local_1188;
  undefined8 uStack_1180;
  undefined4 local_1178;
  undefined4 local_1170;
  undefined1 local_116c;
  undefined8 local_116b;
  undefined8 local_1163;
  undefined8 uStack_115b;
  undefined8 local_1153;
  undefined8 uStack_114b;
  undefined8 local_1143;
  undefined8 uStack_113b;
  undefined8 local_1133;
  undefined6 uStack_112b;
  undefined2 uStack_1125;
  undefined6 uStack_1123;
  undefined8 uStack_111d;
  undefined4 local_1115;
  undefined8 local_1111;
  undefined1 local_1109;
  undefined1 uStack_1108;
  undefined7 uStack_1107;
  undefined8 uStack_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_10f0;
  undefined8 local_10e8;
  undefined8 uStack_10e0;
  undefined8 local_10d8;
  undefined8 uStack_10d0;
  undefined8 local_10c8;
  undefined8 uStack_10c0;
  undefined8 local_10b8;
  undefined8 uStack_10b0;
  undefined8 uStack_10a8;
  undefined8 local_10a0;
  undefined8 local_1098;
  undefined8 uStack_1090;
  undefined8 local_1088;
  undefined4 uStack_1080;
  undefined4 uStack_107c;
  undefined4 uStack_1078;
  undefined4 uStack_1074;
  undefined4 uStack_1070;
  undefined4 uStack_106c;
  undefined8 local_1068;
  undefined8 uStack_1060;
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
  undefined4 local_fe8;
  undefined1 local_fe4;
  undefined4 local_fe0;
  undefined1 local_fdc;
  undefined1 local_fd8;
  undefined1 local_fd4;
  undefined1 local_fc8;
  undefined8 local_fc0;
  undefined8 uStack_fb8;
  undefined8 uStack_fb0;
  undefined8 uStack_fa8;
  undefined8 local_fa0;
  undefined8 uStack_f98;
  undefined8 uStack_f90;
  undefined1 uStack_f88;
  undefined7 local_f87;
  undefined1 uStack_f80;
  undefined8 uStack_f7f;
  undefined8 local_f74;
  undefined8 uStack_f6c;
  undefined8 uStack_f64;
  undefined8 uStack_f5c;
  undefined8 local_f54;
  undefined8 uStack_f4c;
  undefined8 uStack_f44;
  undefined8 uStack_f3c;
  undefined8 local_f34;
  undefined8 uStack_f2c;
  undefined8 uStack_f24;
  undefined5 uStack_f1c;
  undefined3 local_f17;
  undefined5 uStack_f14;
  undefined1 local_f0c;
  undefined1 local_f08;
  undefined1 local_f04;
  undefined1 local_f00;
  undefined1 local_efc;
  undefined1 local_ef8;
  undefined1 local_ee0;
  undefined8 local_ed8;
  undefined8 uStack_ed0;
  undefined8 local_ec8;
  undefined4 local_ec0;
  undefined1 local_ebc;
  undefined4 local_ebb;
  undefined1 local_eb7;
  undefined1 local_eb6;
  undefined8 local_eb0;
  undefined8 uStack_ea8;
  undefined8 uStack_ea0;
  undefined8 uStack_e98;
  undefined8 local_e90;
  undefined7 uStack_e88;
  undefined4 uStack_e81;
  undefined8 local_e7c;
  undefined1 local_e74;
  undefined1 local_e6c;
  undefined1 local_e68;
  undefined1 local_e60;
  undefined1 local_e5c;
  undefined1 local_e54;
  undefined1 local_e50;
  undefined1 local_e48;
  undefined1 local_e44;
  undefined1 local_e3c;
  undefined1 local_e38;
  undefined1 local_e30;
  undefined1 local_e2c;
  undefined1 local_e24;
  undefined1 local_e20;
  undefined1 local_e18;
  undefined1 local_e14;
  undefined1 local_e0c;
  undefined1 local_e08;
  undefined1 local_e00;
  undefined1 local_dfc;
  undefined1 local_df4;
  undefined1 local_df0;
  undefined1 local_de8;
  undefined1 local_de4;
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
  undefined1 local_d88;
  undefined1 local_d84;
  undefined1 local_d80;
  undefined1 local_d7c;
  undefined8 local_d78;
  undefined8 uStack_d70;
  undefined8 local_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined2 local_d48;
  undefined8 local_d44;
  undefined1 local_d3c;
  undefined8 local_d38;
  undefined8 local_d30;
  undefined8 uStack_d28;
  undefined1 local_d20;
  undefined8 local_d18;
  undefined8 uStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 local_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 local_cd8;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 local_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 local_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
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
  undefined8 uStack_c30;
  undefined8 local_c28;
  undefined6 uStack_c20;
  undefined2 uStack_c1a;
  undefined6 uStack_c18;
  undefined1 local_c10;
  undefined1 local_c0c;
  undefined1 local_c08;
  undefined8 local_c04;
  undefined8 uStack_bfc;
  undefined1 local_bf4;
  undefined8 local_bf0;
  undefined2 local_be8;
  undefined1 local_be6;
  undefined4 local_be4;
  undefined1 local_be0;
  undefined1 local_b80;
  undefined1 local_b78;
  undefined1 local_b18;
  undefined4 local_b10;
  undefined2 local_b0c;
  undefined1 local_b08;
  undefined1 local_b04;
  undefined1 local_b00;
  undefined1 local_afc;
  undefined1 local_af8;
  undefined1 local_af4;
  undefined1 local_af0;
  undefined1 local_aec;
  undefined1 local_ae8;
  undefined1 local_ae4;
  ulong local_ae0;
  undefined8 uStack_ad8;
  undefined7 local_ad0;
  undefined4 uStack_ac9;
  undefined8 local_ac4;
  undefined8 uStack_abc;
  ulong local_ab0;
  undefined8 uStack_aa8;
  void *local_aa0;
  undefined4 local_a98 [2];
  undefined8 local_a90;
  undefined8 local_a88;
  undefined8 local_a80;
  undefined1 local_a78;
  undefined8 local_a70;
  undefined8 uStack_a68;
  undefined8 local_a60;
  undefined8 local_a58;
  undefined4 local_a50;
  undefined8 local_a48;
  undefined8 uStack_a40;
  undefined8 local_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined4 local_a18;
  undefined8 local_a10;
  undefined8 local_a08;
  undefined5 uStack_a00;
  undefined3 local_9fb;
  undefined5 uStack_9f8;
  undefined4 local_9f0 [2];
  undefined8 local_9e8;
  undefined1 local_9c0;
  undefined4 local_9b8 [2];
  undefined8 local_9b0;
  undefined8 uStack_9a8;
  undefined8 local_9a0;
  undefined8 local_998;
  undefined8 uStack_990;
  byte local_2d8;
  void *local_2c8;
  byte local_2a8;
  void *local_298;
  undefined1 auStack_290 [168];
  undefined1 auStack_1e8 [56];
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
  undefined4 local_d0 [2];
  undefined8 local_c8;
  undefined4 local_a0;
  void *local_98;
  void *pvStack_90;
  undefined8 local_88;
  void *pvStack_80;
  void *local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this_00 = (ComponentDescriptor *)operator_new(0x88);
  pvStack_11f8 = (void *)0x0;
  local_1200 = 0;
  uStack_11e8 = 0;
  local_11f0 = (void *)0x0;
  pvStack_11d8 = (void *)0x0;
  local_11e0 = (void *)0x0;
  uStack_11c8 = 0;
  uStack_11d0 = 0;
  pvStack_1208 = (void *)0x0;
  local_1210 = (void *)0x0;
                    /* try { // try from 0088c8ac to 0088c8b7 has its CatchHandler @ 0088cfd8 */
  ::facebook::react::ComponentDescriptor::ComponentDescriptor
            (this_00,(ComponentDescriptorParameters *)this,(RawPropsParser *)&local_1210);
  local_f8 = 0;
  *(undefined ***)this_00 = &PTR_FUN_009967f8;
  local_f0 = 0;
  local_e8 = 0;
  local_e0[0] = 0;
  local_d0[0] = 0;
  local_c8 = 0;
  local_a0 = 0;
  pvStack_90 = (void *)0x0;
  local_98 = (void *)0x0;
  pvStack_80 = (void *)0x0;
  local_88 = 0;
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
                    /* try { // try from 0088c928 to 0088c93b has its CatchHandler @ 0088d008 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_1220[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_1218 = &local_1b0;
  ::facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this_00 + 0x38);
  memset(local_11a0,0,0x7e8);
  puVar5 = PTR_VTT_0099eff0;
  local_9b8[0] = 5;
  local_9a0 = 0;
  local_11c0 = *(undefined **)(PTR_VTT_0099eff0 + 0x20);
  local_11a0[0] = 5;
  uStack_11a8 = 0;
  local_11b0 = 0;
  local_998 = 0;
  uStack_11b8 = 0;
  uStack_990 = 0x3f800000;
  uStack_9a8 = 0;
  local_9b0 = 0;
  uStack_1190 = 0;
  local_1198 = 0;
  uStack_1180 = 0;
  local_1188 = 0;
  local_1178 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_9b8);
  local_116c = 0;
  local_1111 = 0;
  uStack_c30 = _UNK_00488920;
  local_c38 = _DAT_00488918;
  local_116b = _s__00375408;
  uStack_d28 = _UNK_00371598;
  local_d30 = _DAT_00371590;
  uStack_c40 = _UNK_00488910;
  local_c48 = _DAT_00488908;
  local_1054 = 0;
  uStack_c50 = _UNK_00488900;
  local_c58 = _DAT_004888f8;
  uStack_c60 = _UNK_004888f0;
  local_c68 = _DAT_004888e8;
  uStack_c18 = 0;
  local_104c = 0;
  uStack_1080 = 0;
  local_1088 = 0;
  uStack_106c = 0;
  uStack_1090 = 0;
  local_1098 = 0;
  uStack_c20 = 0;
  uStack_c1a = 0;
  local_c28 = 0;
  local_1170 = 0x10410710;
  local_1115 = 0x40004;
  uStack_1074 = 0;
  uStack_1070 = 0;
  uStack_107c = 0;
  uStack_1078 = 0;
  uStack_1060 = 0;
  local_1068 = 0;
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
  local_fe8 = 0x7fc00000;
  local_fe0 = 0x7fc00000;
  uStack_f7f = 0;
  uStack_f80 = 0;
  uStack_f6c = 0;
  local_f74 = 0;
  uStack_f5c = 0;
  uStack_f64 = 0;
  uStack_f4c = 0;
  local_f54 = 0;
  uStack_f3c = 0;
  uStack_f44 = 0;
  uStack_f2c = 0;
  local_f34 = 0;
  uStack_f1c = 0;
  uStack_f24 = 0;
  local_f17 = 0;
  uStack_f14 = 0;
  local_ebc = 1;
  local_ebb = 0;
  local_eb6 = 0x23;
  local_e7c = 0x3f800000;
  uStack_d60 = 0;
  local_d68 = 0;
  uStack_d50 = 0;
  uStack_d58 = 0;
  uStack_d70 = 0;
  local_d78 = 0;
  local_d44 = 0;
  uStack_d10 = 0;
  local_d18 = 0;
  uStack_d00 = 0;
  uStack_d08 = 0;
  uStack_cf0 = 0;
  local_cf8 = 0;
  uStack_ce0 = 0;
  uStack_ce8 = 0;
  uStack_cd0 = 0;
  local_cd8 = 0;
  uStack_cc0 = 0;
  uStack_cc8 = 0;
  uStack_cb0 = 0;
  local_cb8 = 0;
  uStack_ca0 = 0;
  uStack_ca8 = 0;
  uStack_c90 = 0;
  local_c98 = 0;
  uStack_c80 = 0;
  uStack_c88 = 0;
  uStack_c70 = 0;
  local_c78 = 0;
  uStack_1107 = 0;
  uStack_115b = 0;
  local_1163 = 0;
  uStack_114b = 0;
  local_1153 = 0;
  uStack_113b = 0;
  local_1143 = 0;
  uStack_112b = 0;
  local_1133 = 0;
  uStack_111d = 0;
  uStack_1125 = 0;
  uStack_1123 = 0;
  local_1109 = 0;
  uStack_1108 = 0;
  uStack_10f8 = 0;
  uStack_1100 = 0;
  local_10e8 = 0;
  uStack_10f0 = 0;
  local_10d8 = 0;
  uStack_10e0 = 0;
  local_10c8 = 0;
  uStack_10d0 = 0;
  local_10b8 = 0;
  uStack_10c0 = 0;
  uStack_10a8 = 0;
  uStack_10b0 = 0;
  local_10a0 = 0;
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
  local_fe4 = 0;
  local_fdc = 0;
  local_fd8 = 0;
  local_fd4 = 0;
  local_fc8 = 0;
  local_f0c = 0;
  local_f08 = 0;
  local_f04 = 0;
  local_f00 = 0;
  local_efc = 0;
  local_ef8 = 0;
  local_ee0 = 0;
  uStack_fb8 = 0;
  local_fc0 = 0;
  uStack_fa8 = 0;
  uStack_fb0 = 0;
  uStack_f98 = 0;
  local_fa0 = 0;
  uStack_f88 = 0;
  local_f87 = 0;
  uStack_f90 = 0;
  uStack_ed0 = 0;
  local_ed8 = 0;
  local_ec8 = 0;
  local_ec0 = 0;
  local_eb7 = 0;
  uStack_ea8 = 0;
  local_eb0 = 0;
  uStack_e98 = 0;
  uStack_ea0 = 0;
  uStack_e88 = 0;
  uStack_e81 = 0;
  local_e90 = 0;
  local_e74 = 0;
  local_e6c = 0;
  local_e68 = 0;
  local_e60 = 0;
  local_e5c = 0;
  local_e54 = 0;
  local_e50 = 0;
  local_e48 = 0;
  local_e44 = 0;
  local_e3c = 0;
  local_e38 = 0;
  local_e30 = 0;
  local_e2c = 0;
  local_e24 = 0;
  local_e20 = 0;
  local_e18 = 0;
  local_e14 = 0;
  local_e0c = 0;
  local_e08 = 0;
  local_e00 = 0;
  local_dfc = 0;
  local_df4 = 0;
  local_df0 = 0;
  local_de8 = 0;
  local_de4 = 0;
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
  local_d88 = 0;
  local_d84 = 0;
  local_d80 = 0;
  local_d7c = 0;
  local_d38 = 0;
  local_d48 = 0;
  local_d3c = 0;
  local_d20 = 0;
  local_c10 = 0;
  local_c0c = 0;
  local_c08 = 0;
  local_bf0 = 0;
  uStack_bfc = 0;
  local_c04 = 0;
  local_bf4 = 0;
  local_be8 = 0x101;
  local_be6 = 0;
  local_be4 = 0;
  local_be0 = 0;
  local_b80 = 0;
  local_b78 = 0;
  local_b18 = 0;
  local_b08 = 0;
  local_b04 = 0;
  local_b00 = 0;
  local_afc = 0;
  local_af8 = 0;
  local_af4 = 0;
  local_af0 = 0;
  local_aec = 0;
  local_ae8 = 0;
  local_ae4 = 0;
  local_b0c = 0;
  local_b10 = 0;
  local_11c0 = PTR_vtable_0099efe8 + 0x20;
  local_a60 = 0;
  uStack_abc = 0;
  local_ac4 = 0;
  uStack_a68 = 0;
  local_a70 = 0;
  local_ad0 = 0;
  uStack_ac9 = 0;
  uStack_ad8 = 0;
  local_ae0 = 0;
  local_aa0 = (void *)0x0;
  local_a98[0] = 0;
  uStack_aa8 = 0;
  local_ab0 = 0;
  local_a80 = 0;
  local_a90 = 0;
  local_a88 = 0;
  local_a78 = 0;
  local_a58 = _s__003752b8;
  local_a50 = 0;
  local_9f0[0] = 0;
  local_9e8 = 0;
  local_9c0 = 0;
  uStack_a30 = 0;
  local_a38 = 0;
  uStack_a20 = 0;
  uStack_a28 = 0;
  uStack_a40 = 0;
  local_a48 = 0;
  local_a18 = 0;
  uStack_9f8 = 0;
  local_a08 = 0;
  local_a10 = 0;
  uStack_a00 = 0;
  local_9fb = 0;
                    /* try { // try from 0088cd9c to 0088cdb3 has its CatchHandler @ 0088d008 */
  ::facebook::react::RNSStackHeaderConfigAndroidProps::RNSStackHeaderConfigAndroidProps
            ((RNSStackHeaderConfigAndroidProps *)local_9b8,(PropsParserContext *)local_1220,
             (RNSStackHeaderConfigAndroidProps *)&local_11c0,(RawProps *)&local_f8);
  folly::dynamic::folly::dynamic::destroy(auStack_1e8);
  FUN_0079dd90(auStack_290);
  if ((local_2a8 & 1) != 0) {
    operator_delete(local_298);
  }
  if ((local_2d8 & 1) != 0) {
    operator_delete(local_2c8);
  }
  FUN_0078917c(local_9b8,puVar5 + 8);
  folly::dynamic::folly::dynamic::destroy(local_9f0);
  FUN_0079dd90(local_a98);
  if ((local_ab0 & 1) != 0) {
    operator_delete(local_aa0);
  }
  if ((local_ae0 & 1) != 0) {
    operator_delete((void *)CONCAT17((undefined1)uStack_ac9,local_ad0));
  }
  FUN_0078917c(&local_11c0,puVar5 + 8);
  ::facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(this_00 + 0x38);
  pvVar3 = local_120;
  puVar4 = (undefined8 *)local_110;
  while (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar4[6];
    pvVar8 = (void *)*puVar4;
    local_120 = pvVar3;
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
    pvVar3 = local_120;
    puVar4 = (undefined8 *)pvVar8;
  }
  local_120 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_158);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_188);
  std::__ndk1::mutex::~mutex((mutex *)&local_1b0);
  pvVar8 = pvStack_80;
  pvVar3 = local_78;
  if (pvStack_80 != (void *)0x0) {
    while (pvVar3 != pvVar8) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 0088cf24 to 0088cf2f has its CatchHandler @ 0088d00c */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_11c0,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_78 = pvVar8;
    operator_delete(pvStack_80);
  }
  if (local_98 != (void *)0x0) {
    pvStack_90 = local_98;
    operator_delete(local_98);
  }
  folly::dynamic::folly::dynamic::destroy(local_d0);
  ::facebook::jsi::Value::~Value((Value *)local_e0);
  *(undefined ***)this_00 = &PTR_FUN_00996750;
  if (local_11e0 != (void *)0x0) {
    pvStack_11d8 = local_11e0;
    operator_delete(local_11e0);
  }
  if (pvStack_11f8 != (void *)0x0) {
    local_11f0 = pvStack_11f8;
    operator_delete(pvStack_11f8);
  }
  if (local_1210 != (void *)0x0) {
    pvStack_1208 = local_1210;
    operator_delete(local_1210);
  }
  *in_x8 = this_00;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0088d010  FUN_0088d010 =====

void FUN_0088d010(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 0088d034  FUN_0088d034 =====

undefined * FUN_0088d034(void)

{
  return PTR_RNSStackHeaderConfigComponentName_0099efe0;
}


// ===== 0088d040  FUN_0088d040 =====

undefined * FUN_0088d040(void)

{
  return PTR_RNSStackHeaderConfigComponentName_0099efe0;
}


// ===== 0088d04c  FUN_0088d04c =====

undefined8 FUN_0088d04c(void)

{
  return 0x61;
}


// ===== 0088d054  FUN_0088d054 =====

void FUN_0088d054(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  
  lVar7 = tpidr_el0;
  lVar10 = *(long *)(lVar7 + 0x28);
  uVar8 = (**(code **)(*param_2 + 0x20))();
  puVar9 = (undefined8 *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(puVar9 + 3);
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &PTR_FUN_00996870;
                    /* try { // try from 0088d0c0 to 0088d0cf has its CatchHandler @ 0088d1b8 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar8);
  lVar11 = puVar9[4];
  puVar9[3] = &PTR_FUN_009968c0;
  uVar3 = *(uint *)((long)puVar9 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar11 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar9 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar11 + 0x50) & 0x30000000) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if (*(char *)(lVar11 + 0x5b4) != '\0') {
      uVar8 = *(undefined4 *)(lVar11 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar9 + 10) = uVar8;
  cVar4 = *(char *)(lVar11 + 0x6b0);
  cVar5 = *(char *)(lVar11 + 0x6b1);
  cVar6 = *(char *)(lVar11 + 0x1e8);
  lVar11 = *param_2;
  puVar9[3] = PTR_vtable_0099eff8 + 0x10;
  *(uint *)((long)puVar9 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 | (uint)((cVar4 != '\0' || cVar5 != '\0') || cVar6 != '\0') << 0xb;
                    /* try { // try from 0088d16c to 0088d177 has its CatchHandler @ 0088d1a8 */
  (**(code **)(lVar11 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar9;
  if (*(long *)(lVar7 + 0x28) != lVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0088d1e8  FUN_0088d1e8 =====

void FUN_0088d1e8(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined4 uVar10;
  YogaLayoutableShadowNode *local_78;
  long *local_70;
  YogaLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar7 = tpidr_el0;
  local_58 = *(long *)(lVar7 + 0x28);
  plVar8 = (long *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(plVar8 + 3);
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_00996870;
                    /* try { // try from 0088d240 to 0088d24f has its CatchHandler @ 0088d3a0 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4);
  lVar9 = plVar8[4];
  plVar8[3] = (long)&PTR_FUN_009968c0;
  uVar3 = *(uint *)((long)plVar8 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar9 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)plVar8 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar9 + 0x50) & 0x30000000) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    if (*(char *)(lVar9 + 0x5b4) != '\0') {
      uVar10 = *(undefined4 *)(lVar9 + 0x5b0);
    }
  }
  *(undefined4 *)(plVar8 + 10) = uVar10;
  cVar4 = *(char *)(lVar9 + 0x6b0);
  cVar5 = *(char *)(lVar9 + 0x6b1);
  cVar6 = *(char *)(lVar9 + 0x1e8);
  plVar8[3] = (long)(PTR_vtable_0099eff8 + 0x10);
  *(uint *)((long)plVar8 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 | (uint)((cVar4 != '\0' || cVar5 != '\0') || cVar6 != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar8;
                    /* try { // try from 0088d2e4 to 0088d2f3 has its CatchHandler @ 0088d3b8 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pYVar1,param_3,param_4);
  local_78 = pYVar1;
  local_70 = plVar8;
  FUN_00757d00(1,plVar8 + 1);
                    /* try { // try from 0088d304 to 0088d313 has its CatchHandler @ 0088d390 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar8 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar9 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar9 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 0088d350 to 0088d35b has its CatchHandler @ 0088d3b8 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar7 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0088d3e0  FUN_0088d3e0 =====

void FUN_0088d3e0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::appendChild
            (*param_2,param_3);
  return;
}


// ===== 0088d3ec  FUN_0088d3ec =====

void FUN_0088d3ec(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNSStackHeaderConfigAndroidProps *this;
  uint uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  char *pcVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  char *pcVar9;
  dynamic *pdVar10;
  long lVar11;
  RNSStackHeaderConfigAndroidProps *pRVar12;
  undefined1 uStack_d1;
  dynamic local_d0 [32];
  dynamic *local_b0;
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar7 = facebook::react::RawProps::isEmpty(), (uVar7 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSStackHeaderConfigComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSStackHeaderConfigAndroidPropsENS0_39RNSStackHeaderConfigAndroidEventEmitterENS0_25RNSStackHeaderConfigStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eae0
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSStackHeaderConfigComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSStackHeaderConfigAndroidPropsENS0_39RNSStackHeaderConfigAndroidEventEmitterENS0_25RNSStackHeaderConfigStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eae0
                                   ), iVar6 != 0)) {
                    /* try { // try from 0088d820 to 0088d823 has its CatchHandler @ 0088d850 */
      FUN_0088e528();
      __cxa_atexit(FUN_0088e4d8,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSStackHeaderConfigComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSStackHeaderConfigAndroidPropsENS0_39RNSStackHeaderConfigAndroidEventEmitterENS0_25RNSStackHeaderConfigStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ead8
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSStackHeaderConfigComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSStackHeaderConfigAndroidPropsENS0_39RNSStackHeaderConfigAndroidEventEmitterENS0_25RNSStackHeaderConfigStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eae0
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSStackHeaderConfigComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSStackHeaderConfigAndroidPropsENS0_39RNSStackHeaderConfigAndroidEventEmitterENS0_25RNSStackHeaderConfigStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ead8
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSStackHeaderConfigComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSStackHeaderConfigAndroidPropsENS0_39RNSStackHeaderConfigAndroidEventEmitterENS0_25RNSStackHeaderConfigStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ead8
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNSStackHeaderConfigAndroidProps *)*param_4;
    if (pRVar12 == (RNSStackHeaderConfigAndroidProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSStackHeaderConfigComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSStackHeaderConfigAndroidPropsENS0_39RNSStackHeaderConfigAndroidEventEmitterENS0_25RNSStackHeaderConfigStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eae0
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSStackHeaderConfigComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSStackHeaderConfigAndroidPropsENS0_39RNSStackHeaderConfigAndroidEventEmitterENS0_25RNSStackHeaderConfigStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eae0
                                     ), iVar6 != 0)) {
                    /* try { // try from 0088d7a0 to 0088d7a3 has its CatchHandler @ 0088d868 */
        FUN_0088e528();
        __cxa_atexit(FUN_0088e4d8,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSStackHeaderConfigComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSStackHeaderConfigAndroidPropsENS0_39RNSStackHeaderConfigAndroidEventEmitterENS0_25RNSStackHeaderConfigStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ead8
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSStackHeaderConfigComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSStackHeaderConfigAndroidPropsENS0_39RNSStackHeaderConfigAndroidEventEmitterENS0_25RNSStackHeaderConfigStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eae0
                           );
      }
      pRVar12 = *(RNSStackHeaderConfigAndroidProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSStackHeaderConfigComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSStackHeaderConfigAndroidPropsENS0_39RNSStackHeaderConfigAndroidEventEmitterENS0_25RNSStackHeaderConfigStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ead8
      ;
    }
    plVar8 = (long *)operator_new(0x820);
    this = (RNSStackHeaderConfigAndroidProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_009969d8;
                    /* try { // try from 0088d4cc to 0088d4df has its CatchHandler @ 0088d8dc */
    facebook::react::RNSStackHeaderConfigAndroidProps::RNSStackHeaderConfigAndroidProps
              (this,param_3,pRVar12,param_5);
                    /* try { // try from 0088d4e4 to 0088d4f7 has its CatchHandler @ 0088d8f4 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_0088d520:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSStackHeaderConfigComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSStackHeaderConfigAndroidPropsENS0_39RNSStackHeaderConfigAndroidEventEmitterENS0_25RNSStackHeaderConfigStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eae0
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSStackHeaderConfigComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSStackHeaderConfigAndroidPropsENS0_39RNSStackHeaderConfigAndroidEventEmitterENS0_25RNSStackHeaderConfigStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eae0
                                       ), iVar6 != 0)) {
                    /* try { // try from 0088d7e0 to 0088d7e3 has its CatchHandler @ 0088d854 */
          FUN_0088e528();
          __cxa_atexit(FUN_0088e4d8,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSStackHeaderConfigComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSStackHeaderConfigAndroidPropsENS0_39RNSStackHeaderConfigAndroidEventEmitterENS0_25RNSStackHeaderConfigStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ead8
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSStackHeaderConfigComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSStackHeaderConfigAndroidPropsENS0_39RNSStackHeaderConfigAndroidEventEmitterENS0_25RNSStackHeaderConfigStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eae0
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0088d588 to 0088d59b has its CatchHandler @ 0088d880 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSStackHeaderConfigComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSStackHeaderConfigAndroidPropsENS0_39RNSStackHeaderConfigAndroidEventEmitterENS0_25RNSStackHeaderConfigStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ead8
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_0088d5d4:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_0088d5d4;
        }
        if (plVar8 != (long *)0x0) goto LAB_0088d5e8;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0088d53c to 0088d54f has its CatchHandler @ 0088d8a8 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_0088d5e8;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_0088d5e8:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 0088d504 to 0088d50f has its CatchHandler @ 0088d87c */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNSStackHeaderConfigComponentName_0099efe0,pcVar9);
      if (iVar6 != 0) goto LAB_0088d520;
      bVar3 = false;
    }
                    /* try { // try from 0088d614 to 0088d617 has its CatchHandler @ 0088d8f4 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 0088d624 to 0088d63f has its CatchHandler @ 0088d8a4 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0088d780 to 0088d78f has its CatchHandler @ 0088d89c */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_0088d940;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0088d760 to 0088d76f has its CatchHandler @ 0088d900 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_0088d940;
        }
        uVar1 = 0x811c9dc5;
        uVar7 = (ulong)(*(byte *)(plVar4 + 3) >> 1);
        pcVar5 = (char *)((long)plVar4 + 0x19);
        pcVar9 = (char *)((long)plVar4 + 0x19);
        if ((*(byte *)(plVar4 + 3) & 1) != 0) {
          uVar7 = plVar4[4];
          pcVar5 = (char *)plVar4[5];
          pcVar9 = (char *)plVar4[5];
        }
        for (; uVar7 != 0; uVar7 = uVar7 - 1) {
          uVar1 = (uVar1 ^ (int)*pcVar5) * 0x1000193;
          pcVar5 = pcVar5 + 1;
        }
                    /* try { // try from 0088d6c0 to 0088d6cb has its CatchHandler @ 0088d908 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 0088d6d0 to 0088d6e7 has its CatchHandler @ 0088d90c */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 0088d6f8 to 0088d703 has its CatchHandler @ 0088d8fc */
          (*(code *)(&PTR_FUN_0098f088)[local_a0])(&uStack_d1,local_d0);
        }
      }
      folly::dynamic::folly::dynamic::destroy(local_98);
    }
    param_1[1] = plVar8;
    *param_1 = this;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_0088d940:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0088d944  FUN_0088d944 =====

/* WARNING: Removing unreachable block (ram,0x0088da48) */
/* WARNING: Removing unreachable block (ram,0x0088da58) */
/* WARNING: Removing unreachable block (ram,0x0088da7c) */
/* WARNING: Removing unreachable block (ram,0x0088da8c) */

void FUN_0088d944(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  State *pSVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_78;
  long local_70;
  long *local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)operator_new(0x38);
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_00996bd0;
  plVar3[4] = 0;
  plVar3[3] = 0;
  plVar3[6] = 0;
  plVar3[5] = 0;
                    /* try { // try from 0088d9a4 to 0088d9ab has its CatchHandler @ 0088db08 */
  puVar4 = (undefined8 *)operator_new(0x50);
  local_78 = *param_4;
  local_70 = param_4[1];
  pSVar1 = (State *)(puVar4 + 3);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_00996a28;
  if (local_70 != 0) {
    FUN_00757d00(1,local_70 + 0x10);
  }
                    /* try { // try from 0088d9e8 to 0088d9f7 has its CatchHandler @ 0088dad0 */
  local_68 = plVar3 + 3;
  local_60 = plVar3;
  facebook::react::State::State(pSVar1,&local_68,&local_78);
  if (local_70 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar3 = local_60;
  if ((local_60 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_60 + 1), lVar5 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined ***)pSVar1 = &PTR_FUN_00996a78;
  *param_1 = pSVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0088db30  FUN_0088db30 =====

/* WARNING: Removing unreachable block (ram,0x0088dc04) */
/* WARNING: Removing unreachable block (ram,0x0088dc14) */
/* WARNING: Removing unreachable block (ram,0x0088dc68) */
/* WARNING: Removing unreachable block (ram,0x0088dc78) */

void FUN_0088db30(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  State *pSVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_88;
  long *local_80;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar2 = *param_4;
  plVar3 = (long *)param_4[1];
  if (plVar3 != (long *)0x0) {
    FUN_00757d00(1,plVar3 + 1);
  }
                    /* try { // try from 0088db74 to 0088db7f has its CatchHandler @ 0088dcf0 */
  facebook::react::ShadowNodeFamily::getMostRecentState();
                    /* try { // try from 0088db84 to 0088db8b has its CatchHandler @ 0088dce0 */
  puVar5 = (undefined8 *)operator_new(0x50);
  pSVar1 = (State *)(puVar5 + 3);
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_00996c30;
                    /* try { // try from 0088dbb0 to 0088dbbf has its CatchHandler @ 0088dcb8 */
  local_58 = uVar2;
  local_50 = plVar3;
  facebook::react::State::State(pSVar1,&local_58,local_88);
  plVar3 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar6 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined ***)pSVar1 = &PTR_FUN_00996a78;
  *param_1 = pSVar1;
  param_1[1] = puVar5;
  if ((local_80 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_80 + 1), lVar6 == 0)) {
    (**(code **)(*local_80 + 0x10))(local_80);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0088dd18  FUN_0088dd18 =====

void FUN_0088dd18(undefined8 *param_1,long param_2,long param_3)

{
  EventEmitter *pEVar1;
  ShadowNodeFamily *pSVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ShadowNodeFamily *local_b0;
  long *local_a8;
  EventEmitter *local_a0;
  long *plStack_98;
  EventEmitter *local_90;
  long *local_88;
  undefined8 local_80;
  long local_78;
  EventEmitter *local_70;
  long *plStack_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_0078a610(&local_a0,&local_70,param_3 + 8,param_3 + 4);
                    /* try { // try from 0088dd60 to 0088dd67 has its CatchHandler @ 0088e04c */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_00996c80;
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  pEVar1 = (EventEmitter *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  plStack_68 = plStack_98;
  local_70 = local_a0;
  local_a0 = (EventEmitter *)0x0;
  plStack_98 = (long *)0x0;
  if (local_78 != 0) {
    FUN_00757d00(1,local_78 + 0x10);
  }
                    /* try { // try from 0088dda4 to 0088ddb3 has its CatchHandler @ 0088e020 */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_0097ff10;
                    /* try { // try from 0088ddc4 to 0088ddcb has its CatchHandler @ 0088e010 */
  plVar6 = (long *)operator_new(0x58);
  puVar4 = PTR_DAT_0099dc90;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)(puVar4 + 0x10);
  plVar6[4] = 0;
  plVar6[3] = 0;
  plVar5[0xb] = (long)(plVar6 + 3);
  plVar5[0xc] = (long)plVar6;
  plVar6[6] = 0;
  plVar6[5] = 0;
  plVar6[8] = 0;
  plVar6[7] = 0;
  *(undefined8 *)((long)plVar6 + 0x4c) = 0;
  *(undefined8 *)((long)plVar6 + 0x44) = 0;
  plVar5[3] = (long)&PTR_FUN_00996cd0;
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_98;
  local_90 = pEVar1;
  local_88 = plVar5;
  if ((plStack_98 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_98 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0088de7c to 0088de83 has its CatchHandler @ 0088e000 */
  plVar5 = (long *)operator_new(0x1a0);
  puVar4 = PTR_DAT_0099dca0;
  pSVar2 = (ShadowNodeFamily *)(plVar5 + 4);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)(puVar4 + 0x10);
  local_70 = local_90;
  plStack_68 = local_88;
  if (local_88 != (long *)0x0) {
    FUN_00757d00(1,local_88 + 1);
  }
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  if (local_78 != 0) {
    FUN_00757d00(1,local_78 + 0x10);
  }
                    /* try { // try from 0088ded0 to 0088dee7 has its CatchHandler @ 0088dfd0 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar2,param_3,&local_70,&local_80,param_2);
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pEVar1 = local_90;
  *param_1 = pSVar2;
  param_1[1] = plVar5;
  local_b0 = pSVar2;
  local_a8 = plVar5;
  FUN_00757d00(1,plVar5 + 2);
                    /* try { // try from 0088df3c to 0088df47 has its CatchHandler @ 0088dfb0 */
  facebook::react::EventEmitter::facebook::react::EventEmitter::setShadowNodeFamily
            (pEVar1,&local_b0);
  if (local_a8 != (long *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0088e074  FUN_0088e074 =====

void FUN_0088e074(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  float *pfVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::react::ShadowNode::getState();
  lVar5 = *plVar2;
  plVar2 = (long *)plVar2[1];
  if (plVar2 != (long *)0x0) {
    FUN_00757d00(1,plVar2 + 1);
  }
  pfVar4 = *(float **)(lVar5 + 0x18);
  fVar6 = *pfVar4;
  fVar7 = pfVar4[1];
  lVar5 = *(long *)(pfVar4 + 6);
  if (lVar5 != 0) {
    FUN_00757d00(1,lVar5 + 0x10);
  }
  if ((fVar6 != 0.0) && (fVar7 != 0.0)) {
                    /* try { // try from 0088e0e8 to 0088e0f7 has its CatchHandler @ 0088e17c */
    facebook::react::YogaLayoutableShadowNode::setSize(fVar6,fVar7,param_2);
  }
  if (lVar5 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if ((plVar2 == (long *)0x0) || (lVar5 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar5 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0088e1b0  FUN_0088e1b0 =====

void FUN_0088e1b0(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 0088e1d4  FUN_0088e1d4 =====

void FUN_0088e1d4(void)

{
  return;
}


// ===== 0088e1d8  FUN_0088e1d8 =====

void FUN_0088e1d8(long param_1)

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


// ===== 0088e228  FUN_0088e228 =====

void FUN_0088e228(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00996870;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0088e238  FUN_0088e238 =====

void FUN_0088e238(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00996870;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0088e268  FUN_0088e268 =====

void FUN_0088e268(long param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  *(long *)(param_1 + 0x18) = (long)(PTR_vtable_0099de98 + 0x10);
  pvVar4 = *(void **)(param_1 + 0x3e0);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = *(void **)(param_1 + 1000);
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
      pvVar2 = *(void **)(param_1 + 0x3e0);
    }
    *(void **)(param_1 + 1000) = pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = *(void **)(param_1 + 0x3b0);
  if (pvVar4 != (void *)0x0) {
    *(void **)(param_1 + 0x3b8) = pvVar4;
    operator_delete(pvVar4);
  }
  FUN_007890e8(param_1 + 0x130);
  FUN_00789784((long *)(param_1 + 0x18));
  return;
}


// ===== 0088e32c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0088e330  FUN_0088e330 =====

void FUN_0088e330(long *param_1)

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


// ===== 0088e3f0  FUN_0088e3f0 =====

void FUN_0088e3f0(long param_1)

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


// ===== 0088e458  FUN_0088e458 =====

bool FUN_0088e458(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 0088e470  FUN_0088e470 =====

bool FUN_0088e470(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 0088e488  FUN_0088e488 =====

void FUN_0088e488(long param_1)

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


// ===== 0088e4d8  FUN_0088e4d8 =====

void FUN_0088e4d8(long param_1)

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


// ===== 0088e528  FUN_0088e528 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0088e528(void)

{
  undefined8 *__s;
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x820);
  __s = puVar3 + 3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_00996988;
  memset(__s,0,0x808);
                    /* try { // try from 0088e564 to 0088e577 has its CatchHandler @ 0088e660 */
  FUN_00788b10(__s,PTR_VTT_0099eff0 + 0x10);
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
  puVar2 = PTR_vtable_0099efe8;
  puVar3[0xe1] = 0;
  *(undefined4 *)(puVar3 + 0xd9) = 0;
  *(undefined2 *)((long)puVar3 + 0x6cc) = 0;
  puVar3[3] = puVar2 + 0x20;
  *(undefined4 *)((long)puVar3 + 0x70f) = 0;
  uVar1 = _s__003752b8;
  puVar3[0xef] = 0;
  puVar3[0xee] = 0;
  puVar3[0xed] = 0;
  puVar3[0xe0] = 0;
  puVar3[0xdf] = 0;
  *(undefined8 *)((long)puVar3 + 0x71c) = 0;
  *(undefined8 *)((long)puVar3 + 0x714) = 0;
  puVar3[0xe7] = 0;
  *(undefined4 *)(puVar3 + 0xe8) = 0;
  puVar3[0xe6] = 0;
  puVar3[0xe5] = 0;
  puVar3[0xeb] = 0;
  puVar3[0xea] = 0;
  puVar3[0xe9] = 0;
  *(undefined1 *)(puVar3 + 0xec) = 0;
  puVar3[0xf0] = uVar1;
  *(undefined4 *)(puVar3 + 0xf1) = 0;
  *(undefined4 *)(puVar3 + 0xfd) = 0;
  puVar3[0xfe] = 0;
  *(undefined1 *)(puVar3 + 0x103) = 0;
  *(undefined4 *)(puVar3 + 0xf8) = 0;
  puVar3[0xf7] = 0;
  puVar3[0xf6] = 0;
  puVar3[0xf5] = 0;
  puVar3[0xf4] = 0;
  puVar3[0xf3] = 0;
  puVar3[0xf2] = 0;
  *(undefined8 *)((long)puVar3 + 0x7dd) = 0;
  puVar3[0xfb] = 0;
  puVar2 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSStackHeaderConfigComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSStackHeaderConfigAndroidPropsENS0_39RNSStackHeaderConfigAndroidEventEmitterENS0_25RNSStackHeaderConfigStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ead8
  ;
  puVar3[0xfa] = 0;
  puVar3[0xf9] = 0;
  *(undefined8 **)puVar2 = __s;
  *(undefined8 **)(puVar2 + 8) = puVar3;
  return;
}


// ===== 0088e67c  FUN_0088e67c =====

void FUN_0088e67c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00996988;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0088e68c  FUN_0088e68c =====

void FUN_0088e68c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00996988;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0088e6bc  FUN_0088e6bc =====

void FUN_0088e6bc(long param_1)

{
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x7e8);
  FUN_0079dd90(param_1 + 0x740);
  if ((*(byte *)(param_1 + 0x728) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x738));
  }
  if ((*(byte *)(param_1 + 0x6f8) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x708));
  }
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099eff0 + 8);
  return;
}


// ===== 0088e718  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0088e71c  FUN_0088e71c =====

void FUN_0088e71c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009969d8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0088e72c  FUN_0088e72c =====

void FUN_0088e72c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009969d8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0088e75c  FUN_0088e75c =====

void FUN_0088e75c(long param_1)

{
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x7e8);
  FUN_0079dd90(param_1 + 0x740);
  if ((*(byte *)(param_1 + 0x728) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x738));
  }
  if ((*(byte *)(param_1 + 0x6f8) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x708));
  }
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099eff0 + 8);
  return;
}


// ===== 0088e7b8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0088e7bc  FUN_0088e7bc =====

void FUN_0088e7bc(long param_1)

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


// ===== 0088e80c  FUN_0088e80c =====

void FUN_0088e80c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00996a28;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0088e81c  FUN_0088e81c =====

void FUN_0088e81c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00996a28;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0088e84c  FUN_0088e84c =====

void FUN_0088e84c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0088e854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0088e858  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0088e85c  FUN_0088e85c =====

void FUN_0088e85c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[4];
  *param_1 = &PTR_FUN_0098f6c8;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[2] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 0088e8c4  FUN_0088e8c4 =====

void FUN_0088e8c4(void)

{
  facebook::react::RNSStackHeaderConfigState::getDynamic();
  return;
}


// ===== 0088e8cc  <EXTERNAL>::facebook::react::MapBufferBuilder::facebook::react::MapBufferBuilder::EMPTY =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::MapBufferBuilder::facebook::react::MapBufferBuilder::EMPTY(void)

{
  (*(code *)PTR_EMPTY_009a0138)();
  return;
}


// ===== 0088e8d0  FUN_0088e8d0 =====

void FUN_0088e8d0(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 0088e8d8  FUN_0088e8d8 =====

void FUN_0088e8d8(long param_1,dynamic *param_2)

{
  long lVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long **pplVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  dynamic adStack_130 [48];
  long local_100 [4];
  long *local_e0;
  long local_d0 [4];
  long *local_b0 [2];
  long local_a0;
  long *local_98;
  long local_90 [4];
  long *local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  folly::dynamic::dynamic(adStack_130,param_2);
                    /* try { // try from 0088e90c to 0088e98b has its CatchHandler @ 0088ecac */
  piVar2 = (int *)folly::dynamic::operator[](adStack_130,"frameWidth","");
  if (*piVar2 == 3) {
    dVar8 = *(double *)(piVar2 + 2);
    piVar2 = (int *)folly::dynamic::operator[](adStack_130,"frameHeight","");
    if (*piVar2 == 3) {
      dVar9 = *(double *)(piVar2 + 2);
      piVar2 = (int *)folly::dynamic::operator[](adStack_130,"contentOffsetX","");
      if (*piVar2 == 3) {
        dVar10 = *(double *)(piVar2 + 2);
        piVar2 = (int *)folly::dynamic::operator[](adStack_130,"contentOffsetY","");
        if (*piVar2 == 3) {
          dVar11 = *(double *)(piVar2 + 2);
                    /* try { // try from 0088e99c to 0088e9a3 has its CatchHandler @ 0088eca8 */
          local_e0 = (long *)operator_new(0x28);
          *local_e0 = (long)&PTR_FUN_00996b50;
          lVar5 = *(long *)(param_1 + 0x10);
          local_e0[3] = 0;
          local_e0[4] = 0;
          *(float *)(local_e0 + 1) = (float)dVar8;
          *(float *)((long)local_e0 + 0xc) = (float)dVar9;
          *(float *)(local_e0 + 2) = (float)dVar10;
          *(float *)((long)local_e0 + 0x14) = (float)dVar11;
          if ((lVar5 != 0) &&
             (plVar3 = (long *)std::__ndk1::__shared_weak_count::lock(), plVar3 != (long *)0x0)) {
            lVar5 = *(long *)(param_1 + 8);
            if (lVar5 != 0) {
              local_a0 = lVar5;
              local_98 = plVar3;
              FUN_00757d00(1,plVar3 + 1);
              local_b0[0] = local_e0;
              if (local_e0 != (long *)0x0) {
                if (local_e0 == local_100) {
                  local_b0[0] = local_d0;
                  (**(code **)(local_100[0] + 0x18))(local_100,local_d0);
                }
                else {
                    /* try { // try from 0088ea24 to 0088ea4b has its CatchHandler @ 0088ec14 */
                  local_b0[0] = (long *)(**(code **)(*local_e0 + 0x10))();
                }
              }
              local_70 = (long *)0x0;
                    /* try { // try from 0088ea50 to 0088ea57 has its CatchHandler @ 0088ec2c */
              plVar4 = (long *)operator_new(0x40);
              *plVar4 = (long)&PTR_FUN_00996ad0;
              if (local_b0[0] == (long *)0x0) {
                pplVar6 = (long **)(plVar4 + 6);
LAB_0088ea8c:
                *pplVar6 = (long *)0x0;
              }
              else {
                if (local_b0[0] != local_d0) {
                  pplVar6 = local_b0;
                  plVar4[6] = (long)local_b0[0];
                  goto LAB_0088ea8c;
                }
                plVar4[6] = (long)(plVar4 + 2);
                    /* try { // try from 0088eaa0 to 0088eaaf has its CatchHandler @ 0088ec10 */
                (**(code **)(local_d0[0] + 0x18))(local_d0);
              }
              local_70 = plVar4;
              if (local_b0[0] == local_d0) {
                lVar7 = 4;
                plVar4 = local_d0;
LAB_0088ead8:
                (**(code **)(*plVar4 + lVar7 * 8))(plVar4);
              }
              else if (local_b0[0] != (long *)0x0) {
                lVar7 = 5;
                plVar4 = local_b0[0];
                goto LAB_0088ead8;
              }
                    /* try { // try from 0088eae8 to 0088eaf7 has its CatchHandler @ 0088ec1c */
              facebook::react::ShadowNodeFamily::facebook::react::ShadowNodeFamily::dispatchRawState
                        (lVar5,&local_a0,0);
              plVar4 = local_90;
              if (local_70 == plVar4) {
                lVar5 = 4;
LAB_0088eb20:
                (**(code **)(*plVar4 + lVar5 * 8))();
              }
              else if (local_70 != (long *)0x0) {
                lVar5 = 5;
                plVar4 = local_70;
                goto LAB_0088eb20;
              }
              plVar4 = local_98;
              if ((local_98 != (long *)0x0) &&
                 (lVar5 = FUN_00757990(0xffffffffffffffff,local_98 + 1), lVar5 == 0)) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
                std::__ndk1::__shared_weak_count::__release_weak();
              }
              if (plVar3 == (long *)0x0) goto LAB_0088eb8c;
            }
            lVar5 = FUN_00757990(0xffffffffffffffff,plVar3 + 1);
            if (lVar5 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
              std::__ndk1::__shared_weak_count::__release_weak();
            }
          }
LAB_0088eb8c:
          if (local_e0 == local_100) {
            lVar5 = 4;
            plVar3 = local_100;
LAB_0088ebb0:
            (**(code **)(*plVar3 + lVar5 * 8))();
          }
          else if (local_e0 != (long *)0x0) {
            lVar5 = 5;
            plVar3 = local_e0;
            goto LAB_0088ebb0;
          }
          folly::dynamic::folly::dynamic::destroy(adStack_130);
          if (*(long *)(lVar1 + 0x28) == local_58) {
            return;
          }
          goto LAB_0088ecd0;
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 0088ec00 to 0088ec0f has its CatchHandler @ 0088ecac */
                    /* WARNING: Subroutine does not return */
    FUN_00789f8c(*(undefined8 *)PTR_name_0099edf8);
  }
LAB_0088ecd0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0088ecd4  FUN_0088ecd4 =====

void FUN_0088ecd4(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_00996ad0;
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = 5;
    plVar2 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0088ed10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 0088ed18  FUN_0088ed18 =====

void FUN_0088ed18(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_00996ad0;
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0088ed64;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_0088ed64:
  operator_delete(param_1);
  return;
}


// ===== 0088ed74  FUN_0088ed74 =====

undefined8 * FUN_0088ed74(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  plVar2 = *(long **)(param_1 + 0x30);
  *puVar1 = &PTR_FUN_00996ad0;
  if (plVar2 != (long *)0x0) {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      lVar3 = *plVar2;
      puVar1[6] = puVar1 + 2;
      (**(code **)(lVar3 + 0x18))();
      return puVar1;
    }
                    /* try { // try from 0088edbc to 0088edd7 has its CatchHandler @ 0088ede8 */
    plVar2 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  puVar1[6] = plVar2;
  return puVar1;
}


// ===== 0088edfc  FUN_0088edfc =====

void FUN_0088edfc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x30);
  *param_2 = &PTR_FUN_00996ad0;
  if (plVar2 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      param_2[6] = param_2 + 2;
                    /* WARNING: Could not recover jumptable at 0x0088ee6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
      return;
    }
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    param_2[6] = uVar1;
  }
  return;
}


// ===== 0088ee70  FUN_0088ee70 =====

void FUN_0088ee70(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x30);
  plVar2 = (long *)(param_1 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = 5;
    plVar2 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0088eea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 0088eea8  FUN_0088eea8 =====

void FUN_0088eea8(void *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)((long)param_1 + 0x30);
  plVar2 = (long *)((long)param_1 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0088eee8;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_0088eee8:
  operator_delete(param_1);
  return;
}


// ===== 0088eef8  FUN_0088eef8 =====

void FUN_0088eef8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0088ef0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,*param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00785754();
}


// ===== 0088ef1c  FUN_0088ef1c =====

long FUN_0088ef1c(long param_1,long param_2)

{
  param_1 = param_1 + 0x10;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099eae8) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0088ef38  FUN_0088ef38 =====

undefined * FUN_0088ef38(void)

{
  return PTR_typeinfo_0099eaf0;
}


// ===== 0088ef44  FUN_0088ef44 =====

void FUN_0088ef44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00996b50;
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0088ef64  FUN_0088ef64 =====

void FUN_0088ef64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00996b50;
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 0088efa0  FUN_0088efa0 =====

undefined8 * FUN_0088efa0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar3 = (undefined8 *)operator_new(0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *puVar3 = &PTR_FUN_00996b50;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x20);
  puVar3[2] = uVar5;
  puVar3[1] = uVar4;
  puVar3[3] = uVar1;
  puVar3[4] = lVar2;
  if (lVar2 != 0) {
    FUN_00757d00(1,lVar2 + 0x10);
  }
  return puVar3;
}


// ===== 0088eff8  FUN_0088eff8 =====

void FUN_0088eff8(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00996b50;
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  lVar1 = *(long *)(param_1 + 0x20);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = lVar1;
  if (lVar1 != 0) {
    FUN_00757d00(1,lVar1 + 0x10);
  }
  return;
}


// ===== 0088f034  FUN_0088f034 =====

void FUN_0088f034(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0088f044  FUN_0088f044 =====

void FUN_0088f044(void *param_1)

{
  if (*(long *)((long)param_1 + 0x20) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 0088f074  FUN_0088f074 =====

void FUN_0088f074(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar3 = (undefined8 *)operator_new(0x38);
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 8);
  *puVar3 = &PTR_FUN_00996bd0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  lVar2 = *(long *)(param_2 + 0x20);
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[4] = uVar5;
  puVar3[3] = uVar4;
  puVar3[5] = uVar1;
  puVar3[6] = lVar2;
  if (lVar2 != 0) {
    FUN_00757d00(1,lVar2 + 0x10);
  }
  *param_1 = (long)(puVar3 + 3);
  param_1[1] = (long)puVar3;
  return;
}


// ===== 0088f0e0  FUN_0088f0e0 =====

long FUN_0088f0e0(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099eaf8) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0088f0fc  FUN_0088f0fc =====

undefined * FUN_0088f0fc(void)

{
  return PTR_typeinfo_0099eb00;
}


// ===== 0088f108  FUN_0088f108 =====

void FUN_0088f108(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00996bd0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0088f118  FUN_0088f118 =====

void FUN_0088f118(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00996bd0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0088f148  FUN_0088f148 =====

void FUN_0088f148(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0088f158  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0088f15c  FUN_0088f15c =====

void FUN_0088f15c(long param_1)

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


// ===== 0088f1ac  FUN_0088f1ac =====

void FUN_0088f1ac(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00996c30;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0088f1bc  FUN_0088f1bc =====

void FUN_0088f1bc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00996c30;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0088f1ec  FUN_0088f1ec =====

void FUN_0088f1ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0088f1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0088f1f8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0088f1fc  FUN_0088f1fc =====

void FUN_0088f1fc(long param_1)

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


// ===== 0088f24c  FUN_0088f24c =====

void FUN_0088f24c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00996c80;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0088f25c  FUN_0088f25c =====

void FUN_0088f25c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00996c80;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0088f28c  FUN_0088f28c =====

void FUN_0088f28c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0088f294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0088f298  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0088f29c  FUN_0088f29c =====

void FUN_0088f29c(long *param_1)

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


// ===== 0088f354  facebook::react::concreteComponentDescriptorConstructor<facebook::react::RNSStackHeaderSubviewComponentDescriptor> =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::unique_ptr<facebook::react::ComponentDescriptor const,
   std::__ndk1::default_delete<facebook::react::ComponentDescriptor const> >
   facebook::react::concreteComponentDescriptorConstructor<facebook::react::RNSStackHeaderSubviewComponentDescriptor>(facebook::react::ComponentDescriptorParameters
   const&) */

void __thiscall
facebook::react::
concreteComponentDescriptorConstructor<facebook::react::RNSStackHeaderSubviewComponentDescriptor>
          (react *this,ComponentDescriptorParameters *param_1)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ComponentDescriptor *this_00;
  long lVar6;
  undefined8 *in_x8;
  long *plVar7;
  void *pvVar8;
  undefined4 local_fe0 [2];
  undefined8 *local_fd8;
  void *local_fd0;
  void *pvStack_fc8;
  undefined8 local_fc0;
  void *pvStack_fb8;
  void *local_fb0;
  undefined8 uStack_fa8;
  void *local_fa0;
  void *pvStack_f98;
  undefined8 uStack_f90;
  undefined8 uStack_f88;
  undefined *local_f80;
  undefined8 uStack_f78;
  undefined8 local_f70;
  undefined8 uStack_f68;
  undefined4 local_f60 [2];
  undefined8 local_f58;
  undefined8 uStack_f50;
  undefined8 local_f48;
  undefined8 uStack_f40;
  undefined4 local_f38;
  undefined4 local_f30;
  undefined1 local_f2c;
  undefined8 local_f2b;
  undefined8 local_f23;
  undefined8 uStack_f1b;
  undefined8 local_f13;
  undefined8 uStack_f0b;
  undefined8 local_f03;
  undefined8 uStack_efb;
  undefined8 local_ef3;
  undefined6 uStack_eeb;
  undefined2 uStack_ee5;
  undefined6 uStack_ee3;
  undefined8 uStack_edd;
  undefined4 local_ed5;
  undefined8 local_ed1;
  undefined1 local_ec9;
  undefined1 uStack_ec8;
  undefined7 uStack_ec7;
  undefined8 uStack_ec0;
  undefined8 uStack_eb8;
  undefined8 uStack_eb0;
  undefined8 local_ea8;
  undefined8 uStack_ea0;
  undefined8 local_e98;
  undefined8 uStack_e90;
  undefined8 local_e88;
  undefined8 uStack_e80;
  undefined8 local_e78;
  undefined8 uStack_e70;
  undefined8 uStack_e68;
  undefined8 local_e60;
  undefined8 local_e58;
  undefined8 uStack_e50;
  undefined8 local_e48;
  undefined4 uStack_e40;
  undefined4 uStack_e3c;
  undefined4 uStack_e38;
  undefined4 uStack_e34;
  undefined4 uStack_e30;
  undefined4 uStack_e2c;
  undefined8 local_e28;
  undefined8 uStack_e20;
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
  undefined4 local_db8;
  undefined1 local_db4;
  undefined4 local_db0;
  undefined1 local_dac;
  undefined4 local_da8;
  undefined1 local_da4;
  undefined4 local_da0;
  undefined1 local_d9c;
  undefined1 local_d98;
  undefined1 local_d94;
  undefined1 local_d88;
  undefined8 local_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined8 local_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined1 uStack_d48;
  undefined7 local_d47;
  undefined1 uStack_d40;
  undefined8 uStack_d3f;
  undefined8 local_d34;
  undefined8 uStack_d2c;
  undefined8 uStack_d24;
  undefined8 uStack_d1c;
  undefined8 local_d14;
  undefined8 uStack_d0c;
  undefined8 uStack_d04;
  undefined8 uStack_cfc;
  undefined8 local_cf4;
  undefined8 uStack_cec;
  undefined8 uStack_ce4;
  undefined5 uStack_cdc;
  undefined3 local_cd7;
  undefined5 uStack_cd4;
  undefined1 local_ccc;
  undefined1 local_cc8;
  undefined1 local_cc4;
  undefined1 local_cc0;
  undefined1 local_cbc;
  undefined1 local_cb8;
  undefined1 local_ca0;
  undefined8 local_c98;
  undefined8 uStack_c90;
  undefined8 local_c88;
  undefined4 local_c80;
  undefined1 local_c7c;
  undefined4 local_c7b;
  undefined1 local_c77;
  undefined1 local_c76;
  undefined8 local_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 local_c50;
  undefined7 uStack_c48;
  undefined4 uStack_c41;
  undefined8 local_c3c;
  undefined1 local_c34;
  undefined1 local_c2c;
  undefined1 local_c28;
  undefined1 local_c20;
  undefined1 local_c1c;
  undefined1 local_c14;
  undefined1 local_c10;
  undefined1 local_c08;
  undefined1 local_c04;
  undefined1 local_bfc;
  undefined1 local_bf8;
  undefined1 local_bf0;
  undefined1 local_bec;
  undefined1 local_be4;
  undefined1 local_be0;
  undefined1 local_bd8;
  undefined1 local_bd4;
  undefined1 local_bcc;
  undefined1 local_bc8;
  undefined1 local_bc0;
  undefined1 local_bbc;
  undefined1 local_bb4;
  undefined1 local_bb0;
  undefined1 local_ba8;
  undefined1 local_ba4;
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
  undefined1 local_b58;
  undefined1 local_b54;
  undefined1 local_b50;
  undefined1 local_b4c;
  undefined1 local_b48;
  undefined1 local_b44;
  undefined1 local_b40;
  undefined1 local_b3c;
  undefined8 local_b38;
  undefined8 uStack_b30;
  undefined8 local_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined2 local_b08;
  undefined8 local_b04;
  undefined1 local_afc;
  undefined8 local_af8;
  undefined8 local_af0;
  undefined8 uStack_ae8;
  undefined1 local_ae0;
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
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 local_a38;
  undefined8 uStack_a30;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined8 local_a18;
  undefined8 uStack_a10;
  undefined8 local_a08;
  undefined8 uStack_a00;
  undefined8 local_9f8;
  undefined8 uStack_9f0;
  undefined8 local_9e8;
  undefined6 uStack_9e0;
  undefined2 uStack_9da;
  undefined6 uStack_9d8;
  undefined1 local_9d0;
  undefined1 local_9cc;
  undefined1 local_9c8;
  undefined8 local_9c4;
  undefined8 uStack_9bc;
  undefined1 local_9b4;
  undefined8 local_9b0;
  undefined2 local_9a8;
  undefined1 local_9a6;
  undefined4 local_9a4;
  undefined1 local_9a0;
  undefined1 local_940;
  undefined1 local_938;
  undefined1 local_8d8;
  undefined4 local_8d0;
  undefined2 local_8cc;
  undefined1 local_8c8;
  undefined1 local_8c4;
  undefined1 local_8c0;
  undefined1 local_8bc;
  undefined1 local_8b8;
  undefined1 local_8b4;
  undefined1 local_8b0;
  undefined1 local_8ac;
  undefined1 local_8a8;
  undefined1 local_8a4;
  undefined8 local_8a0;
  undefined4 local_898 [2];
  undefined8 local_890;
  undefined8 uStack_888;
  undefined8 local_880;
  undefined8 local_878;
  undefined8 uStack_870;
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
  undefined4 local_d0 [2];
  undefined8 local_c8;
  undefined4 local_a0;
  void *local_98;
  void *pvStack_90;
  undefined8 local_88;
  void *pvStack_80;
  void *local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this_00 = (ComponentDescriptor *)operator_new(0x88);
  pvStack_fb8 = (void *)0x0;
  local_fc0 = 0;
  uStack_fa8 = 0;
  local_fb0 = (void *)0x0;
  pvStack_f98 = (void *)0x0;
  local_fa0 = (void *)0x0;
  uStack_f88 = 0;
  uStack_f90 = 0;
  pvStack_fc8 = (void *)0x0;
  local_fd0 = (void *)0x0;
                    /* try { // try from 0088f3a4 to 0088f3af has its CatchHandler @ 0088f9e8 */
  ::facebook::react::ComponentDescriptor::ComponentDescriptor
            (this_00,(ComponentDescriptorParameters *)this,(RawPropsParser *)&local_fd0);
  local_f8 = 0;
  *(undefined ***)this_00 = &PTR_FUN_00996db0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0[0] = 0;
  local_d0[0] = 0;
  local_c8 = 0;
  local_a0 = 0;
  pvStack_90 = (void *)0x0;
  local_98 = (void *)0x0;
  pvStack_80 = (void *)0x0;
  local_88 = 0;
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
                    /* try { // try from 0088f420 to 0088f42b has its CatchHandler @ 0088fa18 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_fe0[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_fd8 = &local_1b0;
  ::facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this_00 + 0x38);
  memset(local_f60,0,0x6c8);
  puVar5 = PTR_VTT_0099f010;
  local_898[0] = 5;
  local_880 = 0;
  local_f80 = *(undefined **)(PTR_VTT_0099f010 + 0x20);
  local_f60[0] = 5;
  uStack_f68 = 0;
  local_f70 = 0;
  local_878 = 0;
  uStack_f78 = 0;
  uStack_870 = 0x3f800000;
  uStack_888 = 0;
  local_890 = 0;
  uStack_f50 = 0;
  local_f58 = 0;
  uStack_f40 = 0;
  local_f48 = 0;
  local_f38 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_898);
  local_f2c = 0;
  local_ed1 = 0;
  uStack_9f0 = _UNK_00488920;
  local_9f8 = _DAT_00488918;
  local_f2b = _s__00375408;
  uStack_ae8 = _UNK_00371598;
  local_af0 = _DAT_00371590;
  uStack_a00 = _UNK_00488910;
  local_a08 = _DAT_00488908;
  local_e14 = 0;
  uStack_a10 = _UNK_00488900;
  local_a18 = _DAT_004888f8;
  uStack_a20 = _UNK_004888f0;
  local_a28 = _DAT_004888e8;
  uStack_9d8 = 0;
  local_e0c = 0;
  uStack_e40 = 0;
  local_e48 = 0;
  uStack_e2c = 0;
  uStack_e50 = 0;
  local_e58 = 0;
  uStack_9e0 = 0;
  uStack_9da = 0;
  local_9e8 = 0;
  local_f30 = 0x10410710;
  local_ed5 = 0x40004;
  uStack_e34 = 0;
  uStack_e30 = 0;
  uStack_e3c = 0;
  uStack_e38 = 0;
  uStack_e20 = 0;
  local_e28 = 0;
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
  local_db8 = 0x7fc00000;
  local_db0 = 0x7fc00000;
  local_da8 = 0x7fc00000;
  local_da0 = 0x7fc00000;
  uStack_d3f = 0;
  uStack_d40 = 0;
  uStack_d2c = 0;
  local_d34 = 0;
  uStack_d1c = 0;
  uStack_d24 = 0;
  uStack_d0c = 0;
  local_d14 = 0;
  uStack_cfc = 0;
  uStack_d04 = 0;
  uStack_cec = 0;
  local_cf4 = 0;
  uStack_cdc = 0;
  uStack_ce4 = 0;
  local_cd7 = 0;
  uStack_cd4 = 0;
  local_c7c = 1;
  local_c7b = 0;
  local_c76 = 0x23;
  local_c3c = 0x3f800000;
  uStack_b20 = 0;
  local_b28 = 0;
  uStack_b10 = 0;
  uStack_b18 = 0;
  uStack_b30 = 0;
  local_b38 = 0;
  local_b04 = 0;
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
  uStack_a40 = 0;
  uStack_a48 = 0;
  uStack_a30 = 0;
  local_a38 = 0;
  uStack_ec7 = 0;
  uStack_f1b = 0;
  local_f23 = 0;
  uStack_f0b = 0;
  local_f13 = 0;
  uStack_efb = 0;
  local_f03 = 0;
  uStack_eeb = 0;
  local_ef3 = 0;
  uStack_edd = 0;
  uStack_ee5 = 0;
  uStack_ee3 = 0;
  local_ec9 = 0;
  uStack_ec8 = 0;
  uStack_eb8 = 0;
  uStack_ec0 = 0;
  local_ea8 = 0;
  uStack_eb0 = 0;
  local_e98 = 0;
  uStack_ea0 = 0;
  local_e88 = 0;
  uStack_e90 = 0;
  local_e78 = 0;
  uStack_e80 = 0;
  uStack_e68 = 0;
  uStack_e70 = 0;
  local_e60 = 0;
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
  local_db4 = 0;
  local_dac = 0;
  local_da4 = 0;
  local_d9c = 0;
  local_d98 = 0;
  local_d94 = 0;
  local_d88 = 0;
  local_ccc = 0;
  local_cc8 = 0;
  local_cc4 = 0;
  local_cc0 = 0;
  local_cbc = 0;
  local_cb8 = 0;
  local_ca0 = 0;
  uStack_d78 = 0;
  local_d80 = 0;
  uStack_d68 = 0;
  uStack_d70 = 0;
  uStack_d58 = 0;
  local_d60 = 0;
  uStack_d48 = 0;
  local_d47 = 0;
  uStack_d50 = 0;
  uStack_c90 = 0;
  local_c98 = 0;
  local_c88 = 0;
  local_c80 = 0;
  local_c77 = 0;
  uStack_c68 = 0;
  local_c70 = 0;
  uStack_c58 = 0;
  uStack_c60 = 0;
  uStack_c48 = 0;
  uStack_c41 = 0;
  local_c50 = 0;
  local_c34 = 0;
  local_c2c = 0;
  local_c28 = 0;
  local_c20 = 0;
  local_c1c = 0;
  local_c14 = 0;
  local_c10 = 0;
  local_c08 = 0;
  local_c04 = 0;
  local_bfc = 0;
  local_bf8 = 0;
  local_bf0 = 0;
  local_bec = 0;
  local_be4 = 0;
  local_be0 = 0;
  local_bd8 = 0;
  local_bd4 = 0;
  local_bcc = 0;
  local_bc8 = 0;
  local_bc0 = 0;
  local_bbc = 0;
  local_bb4 = 0;
  local_bb0 = 0;
  local_ba8 = 0;
  local_ba4 = 0;
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
  local_b58 = 0;
  local_b54 = 0;
  local_b50 = 0;
  local_b4c = 0;
  local_b48 = 0;
  local_b44 = 0;
  local_b40 = 0;
  local_b3c = 0;
  local_af8 = 0;
  local_b08 = 0;
  local_afc = 0;
  local_ae0 = 0;
  local_9d0 = 0;
  local_9cc = 0;
  local_9c8 = 0;
  local_9b0 = 0;
  uStack_9bc = 0;
  local_9c4 = 0;
  local_9b4 = 0;
  local_9a8 = 0x101;
  local_9a6 = 0;
  local_9a4 = 0;
  local_9a0 = 0;
  local_940 = 0;
  local_938 = 0;
  local_8d8 = 0;
  local_8c8 = 0;
  local_8c4 = 0;
  local_8c0 = 0;
  local_8bc = 0;
  local_8b8 = 0;
  local_8b4 = 0;
  local_8b0 = 0;
  local_8ac = 0;
  local_8a8 = 0;
  local_8a4 = 0;
  local_8cc = 0;
  local_8d0 = 0;
  local_f80 = PTR_vtable_0099f008 + 0x20;
  local_8a0 = DAT_003743c8;
                    /* try { // try from 0088f820 to 0088f833 has its CatchHandler @ 0088fa18 */
  ::facebook::react::RNSStackHeaderSubviewAndroidProps::RNSStackHeaderSubviewAndroidProps
            ((RNSStackHeaderSubviewAndroidProps *)local_898,(PropsParserContext *)local_fe0,
             (RNSStackHeaderSubviewAndroidProps *)&local_f80,(RawProps *)&local_f8);
  FUN_0078917c(local_898,puVar5 + 8);
  FUN_0078917c(&local_f80,puVar5 + 8);
  ::facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(this_00 + 0x38);
  pvVar3 = local_120;
  puVar4 = (undefined8 *)local_110;
  while (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar4[6];
    pvVar8 = (void *)*puVar4;
    local_120 = pvVar3;
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
    pvVar3 = local_120;
    puVar4 = (undefined8 *)pvVar8;
  }
  local_120 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_158);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_188);
  std::__ndk1::mutex::~mutex((mutex *)&local_1b0);
  pvVar8 = pvStack_80;
  pvVar3 = local_78;
  if (pvStack_80 != (void *)0x0) {
    while (pvVar3 != pvVar8) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 0088f938 to 0088f943 has its CatchHandler @ 0088fa1c */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_f80,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_78 = pvVar8;
    operator_delete(pvStack_80);
  }
  if (local_98 != (void *)0x0) {
    pvStack_90 = local_98;
    operator_delete(local_98);
  }
  folly::dynamic::folly::dynamic::destroy(local_d0);
  ::facebook::jsi::Value::~Value((Value *)local_e0);
  *(undefined ***)this_00 = &PTR_FUN_00996d08;
  if (local_fa0 != (void *)0x0) {
    pvStack_f98 = local_fa0;
    operator_delete(local_fa0);
  }
  if (pvStack_fb8 != (void *)0x0) {
    local_fb0 = pvStack_fb8;
    operator_delete(pvStack_fb8);
  }
  if (local_fd0 != (void *)0x0) {
    pvStack_fc8 = local_fd0;
    operator_delete(local_fd0);
  }
  *in_x8 = this_00;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0088fa20  FUN_0088fa20 =====

void FUN_0088fa20(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 0088fa44  FUN_0088fa44 =====

undefined * FUN_0088fa44(void)

{
  return PTR_RNSStackHeaderSubviewComponentName_0099f000;
}


// ===== 0088fa50  FUN_0088fa50 =====

undefined * FUN_0088fa50(void)

{
  return PTR_RNSStackHeaderSubviewComponentName_0099f000;
}


// ===== 0088fa5c  FUN_0088fa5c =====

undefined8 FUN_0088fa5c(void)

{
  return 0x61;
}


// ===== 0088fa64  FUN_0088fa64 =====

void FUN_0088fa64(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  
  lVar7 = tpidr_el0;
  lVar10 = *(long *)(lVar7 + 0x28);
  uVar8 = (**(code **)(*param_2 + 0x20))();
  puVar9 = (undefined8 *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(puVar9 + 3);
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &PTR_FUN_00996e28;
                    /* try { // try from 0088fad0 to 0088fadf has its CatchHandler @ 0088fbc8 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar8);
  lVar11 = puVar9[4];
  puVar9[3] = &PTR_FUN_00996e78;
  uVar3 = *(uint *)((long)puVar9 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar11 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar9 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar11 + 0x50) & 0x30000000) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if (*(char *)(lVar11 + 0x5b4) != '\0') {
      uVar8 = *(undefined4 *)(lVar11 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar9 + 10) = uVar8;
  cVar4 = *(char *)(lVar11 + 0x6b0);
  cVar5 = *(char *)(lVar11 + 0x6b1);
  cVar6 = *(char *)(lVar11 + 0x1e8);
  lVar11 = *param_2;
  puVar9[3] = PTR_vtable_0099f018 + 0x10;
  *(uint *)((long)puVar9 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 | (uint)((cVar4 != '\0' || cVar5 != '\0') || cVar6 != '\0') << 0xb;
                    /* try { // try from 0088fb7c to 0088fb87 has its CatchHandler @ 0088fbb8 */
  (**(code **)(lVar11 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar9;
  if (*(long *)(lVar7 + 0x28) != lVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0088fbf8  FUN_0088fbf8 =====

void FUN_0088fbf8(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined4 uVar10;
  YogaLayoutableShadowNode *local_78;
  long *local_70;
  YogaLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar7 = tpidr_el0;
  local_58 = *(long *)(lVar7 + 0x28);
  plVar8 = (long *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(plVar8 + 3);
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_00996e28;
                    /* try { // try from 0088fc50 to 0088fc5f has its CatchHandler @ 0088fdb0 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4);
  lVar9 = plVar8[4];
  plVar8[3] = (long)&PTR_FUN_00996e78;
  uVar3 = *(uint *)((long)plVar8 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar9 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)plVar8 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar9 + 0x50) & 0x30000000) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    if (*(char *)(lVar9 + 0x5b4) != '\0') {
      uVar10 = *(undefined4 *)(lVar9 + 0x5b0);
    }
  }
  *(undefined4 *)(plVar8 + 10) = uVar10;
  cVar4 = *(char *)(lVar9 + 0x6b0);
  cVar5 = *(char *)(lVar9 + 0x6b1);
  cVar6 = *(char *)(lVar9 + 0x1e8);
  plVar8[3] = (long)(PTR_vtable_0099f018 + 0x10);
  *(uint *)((long)plVar8 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 | (uint)((cVar4 != '\0' || cVar5 != '\0') || cVar6 != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar8;
                    /* try { // try from 0088fcf4 to 0088fd03 has its CatchHandler @ 0088fdc8 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pYVar1,param_3,param_4);
  local_78 = pYVar1;
  local_70 = plVar8;
  FUN_00757d00(1,plVar8 + 1);
                    /* try { // try from 0088fd14 to 0088fd23 has its CatchHandler @ 0088fda0 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar8 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar9 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar9 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 0088fd60 to 0088fd6b has its CatchHandler @ 0088fdc8 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar7 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0088fdf0  FUN_0088fdf0 =====

void FUN_0088fdf0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::appendChild
            (*param_2,param_3);
  return;
}


// ===== 0088fdfc  FUN_0088fdfc =====

void FUN_0088fdfc(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNSStackHeaderSubviewAndroidProps *this;
  uint uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  char *pcVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  char *pcVar9;
  dynamic *pdVar10;
  long lVar11;
  RNSStackHeaderSubviewAndroidProps *pRVar12;
  undefined1 uStack_d1;
  dynamic local_d0 [32];
  dynamic *local_b0;
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar7 = facebook::react::RawProps::isEmpty(), (uVar7 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_34RNSStackHeaderSubviewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSStackHeaderSubviewAndroidPropsENS0_40RNSStackHeaderSubviewAndroidEventEmitterENS0_26RNSStackHeaderSubviewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eb10
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_34RNSStackHeaderSubviewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSStackHeaderSubviewAndroidPropsENS0_40RNSStackHeaderSubviewAndroidEventEmitterENS0_26RNSStackHeaderSubviewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eb10
                                   ), iVar6 != 0)) {
                    /* try { // try from 00890230 to 00890233 has its CatchHandler @ 00890260 */
      FUN_00890df8();
      __cxa_atexit(FUN_00890da8,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_34RNSStackHeaderSubviewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSStackHeaderSubviewAndroidPropsENS0_40RNSStackHeaderSubviewAndroidEventEmitterENS0_26RNSStackHeaderSubviewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eb08
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_34RNSStackHeaderSubviewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSStackHeaderSubviewAndroidPropsENS0_40RNSStackHeaderSubviewAndroidEventEmitterENS0_26RNSStackHeaderSubviewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eb10
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_34RNSStackHeaderSubviewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSStackHeaderSubviewAndroidPropsENS0_40RNSStackHeaderSubviewAndroidEventEmitterENS0_26RNSStackHeaderSubviewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eb08
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_34RNSStackHeaderSubviewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSStackHeaderSubviewAndroidPropsENS0_40RNSStackHeaderSubviewAndroidEventEmitterENS0_26RNSStackHeaderSubviewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eb08
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNSStackHeaderSubviewAndroidProps *)*param_4;
    if (pRVar12 == (RNSStackHeaderSubviewAndroidProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_34RNSStackHeaderSubviewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSStackHeaderSubviewAndroidPropsENS0_40RNSStackHeaderSubviewAndroidEventEmitterENS0_26RNSStackHeaderSubviewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eb10
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_34RNSStackHeaderSubviewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSStackHeaderSubviewAndroidPropsENS0_40RNSStackHeaderSubviewAndroidEventEmitterENS0_26RNSStackHeaderSubviewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eb10
                                     ), iVar6 != 0)) {
                    /* try { // try from 008901b0 to 008901b3 has its CatchHandler @ 00890278 */
        FUN_00890df8();
        __cxa_atexit(FUN_00890da8,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_34RNSStackHeaderSubviewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSStackHeaderSubviewAndroidPropsENS0_40RNSStackHeaderSubviewAndroidEventEmitterENS0_26RNSStackHeaderSubviewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eb08
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_34RNSStackHeaderSubviewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSStackHeaderSubviewAndroidPropsENS0_40RNSStackHeaderSubviewAndroidEventEmitterENS0_26RNSStackHeaderSubviewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eb10
                           );
      }
      pRVar12 = *(RNSStackHeaderSubviewAndroidProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_34RNSStackHeaderSubviewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSStackHeaderSubviewAndroidPropsENS0_40RNSStackHeaderSubviewAndroidEventEmitterENS0_26RNSStackHeaderSubviewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eb08
      ;
    }
    plVar8 = (long *)operator_new(0x700);
    this = (RNSStackHeaderSubviewAndroidProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_00996f90;
                    /* try { // try from 0088fedc to 0088feef has its CatchHandler @ 008902ec */
    facebook::react::RNSStackHeaderSubviewAndroidProps::RNSStackHeaderSubviewAndroidProps
              (this,param_3,pRVar12,param_5);
                    /* try { // try from 0088fef4 to 0088ff07 has its CatchHandler @ 00890304 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_0088ff30:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_34RNSStackHeaderSubviewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSStackHeaderSubviewAndroidPropsENS0_40RNSStackHeaderSubviewAndroidEventEmitterENS0_26RNSStackHeaderSubviewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eb10
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_34RNSStackHeaderSubviewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSStackHeaderSubviewAndroidPropsENS0_40RNSStackHeaderSubviewAndroidEventEmitterENS0_26RNSStackHeaderSubviewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eb10
                                       ), iVar6 != 0)) {
                    /* try { // try from 008901f0 to 008901f3 has its CatchHandler @ 00890264 */
          FUN_00890df8();
          __cxa_atexit(FUN_00890da8,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_34RNSStackHeaderSubviewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSStackHeaderSubviewAndroidPropsENS0_40RNSStackHeaderSubviewAndroidEventEmitterENS0_26RNSStackHeaderSubviewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eb08
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_34RNSStackHeaderSubviewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSStackHeaderSubviewAndroidPropsENS0_40RNSStackHeaderSubviewAndroidEventEmitterENS0_26RNSStackHeaderSubviewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eb10
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0088ff98 to 0088ffab has its CatchHandler @ 00890290 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_34RNSStackHeaderSubviewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSStackHeaderSubviewAndroidPropsENS0_40RNSStackHeaderSubviewAndroidEventEmitterENS0_26RNSStackHeaderSubviewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eb08
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_0088ffe4:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_0088ffe4;
        }
        if (plVar8 != (long *)0x0) goto LAB_0088fff8;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0088ff4c to 0088ff5f has its CatchHandler @ 008902b8 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_0088fff8;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_0088fff8:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 0088ff14 to 0088ff1f has its CatchHandler @ 0089028c */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNSStackHeaderSubviewComponentName_0099f000,pcVar9);
      if (iVar6 != 0) goto LAB_0088ff30;
      bVar3 = false;
    }
                    /* try { // try from 00890024 to 00890027 has its CatchHandler @ 00890304 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 00890034 to 0089004f has its CatchHandler @ 008902b4 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00890190 to 0089019f has its CatchHandler @ 008902ac */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_00890350;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00890170 to 0089017f has its CatchHandler @ 00890310 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_00890350;
        }
        uVar1 = 0x811c9dc5;
        uVar7 = (ulong)(*(byte *)(plVar4 + 3) >> 1);
        pcVar5 = (char *)((long)plVar4 + 0x19);
        pcVar9 = (char *)((long)plVar4 + 0x19);
        if ((*(byte *)(plVar4 + 3) & 1) != 0) {
          uVar7 = plVar4[4];
          pcVar5 = (char *)plVar4[5];
          pcVar9 = (char *)plVar4[5];
        }
        for (; uVar7 != 0; uVar7 = uVar7 - 1) {
          uVar1 = (uVar1 ^ (int)*pcVar5) * 0x1000193;
          pcVar5 = pcVar5 + 1;
        }
                    /* try { // try from 008900d0 to 008900db has its CatchHandler @ 00890318 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 008900e0 to 008900f7 has its CatchHandler @ 0089031c */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 00890108 to 00890113 has its CatchHandler @ 0089030c */
          (*(code *)(&PTR_FUN_0098f088)[local_a0])(&uStack_d1,local_d0);
        }
      }
      folly::dynamic::folly::dynamic::destroy(local_98);
    }
    param_1[1] = plVar8;
    *param_1 = this;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_00890350:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00890354  FUN_00890354 =====

/* WARNING: Removing unreachable block (ram,0x00890454) */
/* WARNING: Removing unreachable block (ram,0x00890464) */
/* WARNING: Removing unreachable block (ram,0x00890488) */
/* WARNING: Removing unreachable block (ram,0x00890498) */

void FUN_00890354(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  State *pSVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_78;
  long local_70;
  long *local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)operator_new(0x20);
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_00997188;
  *(undefined4 *)(plVar3 + 3) = 0;
  *(undefined4 *)((long)plVar3 + 0x1c) = 0;
                    /* try { // try from 008903b0 to 008903b7 has its CatchHandler @ 00890514 */
  puVar4 = (undefined8 *)operator_new(0x50);
  local_78 = *param_4;
  local_70 = param_4[1];
  pSVar1 = (State *)(puVar4 + 3);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_00996fe0;
  if (local_70 != 0) {
    FUN_00757d00(1,local_70 + 0x10);
  }
                    /* try { // try from 008903f4 to 00890403 has its CatchHandler @ 008904dc */
  local_68 = plVar3 + 3;
  local_60 = plVar3;
  facebook::react::State::State(pSVar1,&local_68,&local_78);
  if (local_70 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar3 = local_60;
  if ((local_60 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_60 + 1), lVar5 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined ***)pSVar1 = &PTR_FUN_00997030;
  *param_1 = pSVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0089053c  FUN_0089053c =====

/* WARNING: Removing unreachable block (ram,0x00890610) */
/* WARNING: Removing unreachable block (ram,0x00890620) */
/* WARNING: Removing unreachable block (ram,0x00890674) */
/* WARNING: Removing unreachable block (ram,0x00890684) */

void FUN_0089053c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  State *pSVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_88;
  long *local_80;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar2 = *param_4;
  plVar3 = (long *)param_4[1];
  if (plVar3 != (long *)0x0) {
    FUN_00757d00(1,plVar3 + 1);
  }
                    /* try { // try from 00890580 to 0089058b has its CatchHandler @ 008906fc */
  facebook::react::ShadowNodeFamily::getMostRecentState();
                    /* try { // try from 00890590 to 00890597 has its CatchHandler @ 008906ec */
  puVar5 = (undefined8 *)operator_new(0x50);
  pSVar1 = (State *)(puVar5 + 3);
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_009971e8;
                    /* try { // try from 008905bc to 008905cb has its CatchHandler @ 008906c4 */
  local_58 = uVar2;
  local_50 = plVar3;
  facebook::react::State::State(pSVar1,&local_58,local_88);
  plVar3 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar6 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined ***)pSVar1 = &PTR_FUN_00997030;
  *param_1 = pSVar1;
  param_1[1] = puVar5;
  if ((local_80 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_80 + 1), lVar6 == 0)) {
    (**(code **)(*local_80 + 0x10))(local_80);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00890724  FUN_00890724 =====

void FUN_00890724(undefined8 *param_1,long param_2,long param_3)

{
  EventEmitter *pEVar1;
  ShadowNodeFamily *pSVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ShadowNodeFamily *local_b0;
  long *local_a8;
  EventEmitter *local_a0;
  long *plStack_98;
  EventEmitter *local_90;
  long *local_88;
  undefined8 local_80;
  long local_78;
  EventEmitter *local_70;
  long *plStack_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_0078a610(&local_a0,&local_70,param_3 + 8,param_3 + 4);
                    /* try { // try from 0089076c to 00890773 has its CatchHandler @ 00890a58 */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_00997238;
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  pEVar1 = (EventEmitter *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  plStack_68 = plStack_98;
  local_70 = local_a0;
  local_a0 = (EventEmitter *)0x0;
  plStack_98 = (long *)0x0;
  if (local_78 != 0) {
    FUN_00757d00(1,local_78 + 0x10);
  }
                    /* try { // try from 008907b0 to 008907bf has its CatchHandler @ 00890a2c */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_0097ff10;
                    /* try { // try from 008907d0 to 008907d7 has its CatchHandler @ 00890a1c */
  plVar6 = (long *)operator_new(0x58);
  puVar4 = PTR_DAT_0099dc90;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)(puVar4 + 0x10);
  plVar6[4] = 0;
  plVar6[3] = 0;
  plVar5[0xb] = (long)(plVar6 + 3);
  plVar5[0xc] = (long)plVar6;
  plVar6[6] = 0;
  plVar6[5] = 0;
  plVar6[8] = 0;
  plVar6[7] = 0;
  *(undefined8 *)((long)plVar6 + 0x4c) = 0;
  *(undefined8 *)((long)plVar6 + 0x44) = 0;
  plVar5[3] = (long)&PTR_FUN_00997288;
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_98;
  local_90 = pEVar1;
  local_88 = plVar5;
  if ((plStack_98 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_98 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 00890888 to 0089088f has its CatchHandler @ 00890a0c */
  plVar5 = (long *)operator_new(0x1a0);
  puVar4 = PTR_DAT_0099dca0;
  pSVar2 = (ShadowNodeFamily *)(plVar5 + 4);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)(puVar4 + 0x10);
  local_70 = local_90;
  plStack_68 = local_88;
  if (local_88 != (long *)0x0) {
    FUN_00757d00(1,local_88 + 1);
  }
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  if (local_78 != 0) {
    FUN_00757d00(1,local_78 + 0x10);
  }
                    /* try { // try from 008908dc to 008908f3 has its CatchHandler @ 008909dc */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar2,param_3,&local_70,&local_80,param_2);
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pEVar1 = local_90;
  *param_1 = pSVar2;
  param_1[1] = plVar5;
  local_b0 = pSVar2;
  local_a8 = plVar5;
  FUN_00757d00(1,plVar5 + 2);
                    /* try { // try from 00890948 to 00890953 has its CatchHandler @ 008909bc */
  facebook::react::EventEmitter::facebook::react::EventEmitter::setShadowNodeFamily
            (pEVar1,&local_b0);
  if (local_a8 != (long *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00890a80  FUN_00890a80 =====

void FUN_00890a80(void)

{
  return;
}


// ===== 00890a84  FUN_00890a84 =====

void FUN_00890a84(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 00890aa8  FUN_00890aa8 =====

void FUN_00890aa8(long param_1)

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


// ===== 00890af8  FUN_00890af8 =====

void FUN_00890af8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00996e28;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00890b08  FUN_00890b08 =====

void FUN_00890b08(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00996e28;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00890b38  FUN_00890b38 =====

void FUN_00890b38(long param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  *(long *)(param_1 + 0x18) = (long)(PTR_vtable_0099de98 + 0x10);
  pvVar4 = *(void **)(param_1 + 0x3e0);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = *(void **)(param_1 + 1000);
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
      pvVar2 = *(void **)(param_1 + 0x3e0);
    }
    *(void **)(param_1 + 1000) = pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = *(void **)(param_1 + 0x3b0);
  if (pvVar4 != (void *)0x0) {
    *(void **)(param_1 + 0x3b8) = pvVar4;
    operator_delete(pvVar4);
  }
  FUN_007890e8(param_1 + 0x130);
  FUN_00789784((long *)(param_1 + 0x18));
  return;
}


// ===== 00890bfc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00890c00  FUN_00890c00 =====

void FUN_00890c00(long *param_1)

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


// ===== 00890cc0  FUN_00890cc0 =====

void FUN_00890cc0(long param_1)

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


// ===== 00890d28  FUN_00890d28 =====

bool FUN_00890d28(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 00890d40  FUN_00890d40 =====

bool FUN_00890d40(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 00890d58  FUN_00890d58 =====

void FUN_00890d58(long param_1)

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


// ===== 00890da8  FUN_00890da8 =====

void FUN_00890da8(long param_1)

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


// ===== 00890df8  FUN_00890df8 =====

void FUN_00890df8(void)

{
  undefined8 *__s;
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x700);
  __s = puVar3 + 3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_00996f40;
  memset(__s,0,0x6e8);
                    /* try { // try from 00890e34 to 00890e47 has its CatchHandler @ 00890ec0 */
  FUN_00788b10(__s,PTR_VTT_0099f010 + 0x10);
  *(undefined4 *)((long)puVar3 + 0x5f4) = 0;
  *(undefined1 *)(puVar3 + 0xbf) = 0;
  uVar1 = DAT_003743c8;
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
  puVar2 = PTR_vtable_0099f008;
  *(undefined4 *)(puVar3 + 0xd9) = 0;
  *(undefined2 *)((long)puVar3 + 0x6cc) = 0;
  puVar3[3] = puVar2 + 0x20;
  puVar2 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_34RNSStackHeaderSubviewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSStackHeaderSubviewAndroidPropsENS0_40RNSStackHeaderSubviewAndroidEventEmitterENS0_26RNSStackHeaderSubviewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eb08
  ;
  puVar3[0xdf] = uVar1;
  *(undefined8 **)puVar2 = __s;
  *(undefined8 **)(puVar2 + 8) = puVar3;
  return;
}


// ===== 00890edc  FUN_00890edc =====

void FUN_00890edc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00996f40;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00890eec  FUN_00890eec =====

void FUN_00890eec(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00996f40;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00890f1c  FUN_00890f1c =====

void FUN_00890f1c(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099f010 + 8);
  return;
}


// ===== 00890f30  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00890f34  FUN_00890f34 =====

void FUN_00890f34(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00996f90;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00890f44  FUN_00890f44 =====

void FUN_00890f44(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00996f90;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00890f74  FUN_00890f74 =====

void FUN_00890f74(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099f010 + 8);
  return;
}


// ===== 00890f88  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00890f8c  FUN_00890f8c =====

void FUN_00890f8c(long param_1)

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


// ===== 00890fdc  FUN_00890fdc =====

void FUN_00890fdc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00996fe0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00890fec  FUN_00890fec =====

void FUN_00890fec(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00996fe0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0089101c  FUN_0089101c =====

void FUN_0089101c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00891024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00891028  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0089102c  FUN_0089102c =====

void FUN_0089102c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[4];
  *param_1 = &PTR_FUN_0098f6c8;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[2] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 00891094  FUN_00891094 =====

void FUN_00891094(void)

{
  facebook::react::RNSStackHeaderSubviewState::getDynamic();
  return;
}


// ===== 0089109c  <EXTERNAL>::facebook::react::MapBufferBuilder::facebook::react::MapBufferBuilder::EMPTY =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::MapBufferBuilder::facebook::react::MapBufferBuilder::EMPTY(void)

{
  (*(code *)PTR_EMPTY_009a0138)();
  return;
}


// ===== 008910a0  FUN_008910a0 =====

void FUN_008910a0(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 008910a8  FUN_008910a8 =====

void FUN_008910a8(long param_1,dynamic *param_2)

{
  long lVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  undefined ***pppuVar5;
  undefined ****ppppuVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  dynamic adStack_120 [48];
  undefined **local_f0;
  float local_e8;
  float fStack_e4;
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
                    /* try { // try from 008910dc to 00891113 has its CatchHandler @ 00891414 */
  piVar2 = (int *)folly::dynamic::operator[](adStack_120,"contentOffsetX","");
  if (*piVar2 == 3) {
    dVar9 = *(double *)(piVar2 + 2);
    piVar2 = (int *)folly::dynamic::operator[](adStack_120,"contentOffsetY","");
    if (*piVar2 == 3) {
      local_f0 = &PTR_FUN_00997108;
      local_d0 = &local_f0;
      local_e8 = (float)dVar9;
      fStack_e4 = (float)*(double *)(piVar2 + 2);
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (plVar3 = (long *)std::__ndk1::__shared_weak_count::lock(), plVar3 != (long *)0x0)) {
        lVar8 = *(long *)(param_1 + 8);
        if (lVar8 != 0) {
          local_90 = lVar8;
          local_88 = plVar3;
          FUN_00757d00(1,plVar3 + 1);
          local_a0[0] = local_d0;
          if (local_d0 != (undefined ***)0x0) {
            if (local_d0 == &local_f0) {
              local_a0[0] = local_c0;
              (*(code *)local_f0[3])(&local_f0,local_c0);
            }
            else {
                    /* try { // try from 00891194 to 008911bb has its CatchHandler @ 00891380 */
              local_a0[0] = (undefined ***)(*(code *)(*local_d0)[2])();
            }
          }
          local_60 = (long *)0x0;
                    /* try { // try from 008911c0 to 008911c7 has its CatchHandler @ 00891398 */
          plVar4 = (long *)operator_new(0x40);
          *plVar4 = (long)&PTR_FUN_00997088;
          if (local_a0[0] == (undefined ***)0x0) {
            ppppuVar6 = (undefined ****)(plVar4 + 6);
LAB_008911fc:
            *ppppuVar6 = (undefined ***)0x0;
          }
          else {
            if (local_a0[0] != local_c0) {
              ppppuVar6 = local_a0;
              plVar4[6] = (long)local_a0[0];
              goto LAB_008911fc;
            }
            plVar4[6] = (long)(plVar4 + 2);
                    /* try { // try from 00891210 to 0089121f has its CatchHandler @ 0089137c */
            (*(code *)local_c0[0][3])(local_c0);
          }
          local_60 = plVar4;
          if (local_a0[0] == local_c0) {
            lVar7 = 4;
            pppuVar5 = local_c0;
LAB_00891248:
            (*(code *)(*pppuVar5)[lVar7])(pppuVar5);
          }
          else if (local_a0[0] != (undefined ***)0x0) {
            lVar7 = 5;
            pppuVar5 = local_a0[0];
            goto LAB_00891248;
          }
                    /* try { // try from 00891258 to 00891267 has its CatchHandler @ 00891388 */
          facebook::react::ShadowNodeFamily::facebook::react::ShadowNodeFamily::dispatchRawState
                    (lVar8,&local_90,0);
          plVar4 = local_80;
          if (local_60 == plVar4) {
            lVar8 = 4;
LAB_00891290:
            (**(code **)(*plVar4 + lVar8 * 8))();
          }
          else if (local_60 != (long *)0x0) {
            lVar8 = 5;
            plVar4 = local_60;
            goto LAB_00891290;
          }
          plVar4 = local_88;
          if ((local_88 != (long *)0x0) &&
             (lVar8 = FUN_00757990(0xffffffffffffffff,local_88 + 1), lVar8 == 0)) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
            std::__ndk1::__shared_weak_count::__release_weak();
          }
          if (plVar3 == (long *)0x0) goto LAB_008912fc;
        }
        lVar8 = FUN_00757990(0xffffffffffffffff,plVar3 + 1);
        if (lVar8 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
LAB_008912fc:
      if (local_d0 == &local_f0) {
        lVar8 = 4;
        pppuVar5 = &local_f0;
LAB_0089131c:
        (*(code *)(*pppuVar5)[lVar8])();
      }
      else if (local_d0 != (undefined ***)0x0) {
        lVar8 = 5;
        pppuVar5 = local_d0;
        goto LAB_0089131c;
      }
      folly::dynamic::folly::dynamic::destroy(adStack_120);
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
      goto LAB_00891438;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 0089136c to 0089137b has its CatchHandler @ 00891414 */
                    /* WARNING: Subroutine does not return */
    FUN_00789f8c(*(undefined8 *)PTR_name_0099edf8);
  }
LAB_00891438:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0089143c  FUN_0089143c =====

void FUN_0089143c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_00997088;
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = 5;
    plVar2 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00891478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 00891480  FUN_00891480 =====

void FUN_00891480(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_00997088;
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_008914cc;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_008914cc:
  operator_delete(param_1);
  return;
}


// ===== 008914dc  FUN_008914dc =====

undefined8 * FUN_008914dc(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  plVar2 = *(long **)(param_1 + 0x30);
  *puVar1 = &PTR_FUN_00997088;
  if (plVar2 != (long *)0x0) {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      lVar3 = *plVar2;
      puVar1[6] = puVar1 + 2;
      (**(code **)(lVar3 + 0x18))();
      return puVar1;
    }
                    /* try { // try from 00891524 to 0089153f has its CatchHandler @ 00891550 */
    plVar2 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  puVar1[6] = plVar2;
  return puVar1;
}


// ===== 00891564  FUN_00891564 =====

void FUN_00891564(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x30);
  *param_2 = &PTR_FUN_00997088;
  if (plVar2 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      param_2[6] = param_2 + 2;
                    /* WARNING: Could not recover jumptable at 0x008915d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
      return;
    }
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    param_2[6] = uVar1;
  }
  return;
}


// ===== 008915d8  FUN_008915d8 =====

void FUN_008915d8(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x30);
  plVar2 = (long *)(param_1 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = 5;
    plVar2 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00891608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 00891610  FUN_00891610 =====

void FUN_00891610(void *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)((long)param_1 + 0x30);
  plVar2 = (long *)((long)param_1 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00891650;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_00891650:
  operator_delete(param_1);
  return;
}


// ===== 00891660  FUN_00891660 =====

void FUN_00891660(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00891674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,*param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00785754();
}


// ===== 00891684  FUN_00891684 =====

long FUN_00891684(long param_1,long param_2)

{
  param_1 = param_1 + 0x10;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099eb18) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 008916a0  FUN_008916a0 =====

undefined * FUN_008916a0(void)

{
  return PTR_typeinfo_0099eb20;
}


// ===== 008916ac  FUN_008916ac =====

void FUN_008916ac(void)

{
  return;
}


// ===== 008916b0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008916b4  FUN_008916b4 =====

void FUN_008916b4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00997108;
  puVar1[1] = uVar2;
  return;
}


// ===== 008916e8  FUN_008916e8 =====

void FUN_008916e8(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00997108;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return;
}


// ===== 00891700  FUN_00891700 =====

void FUN_00891700(void)

{
  return;
}


// ===== 00891704  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00891708  FUN_00891708 =====

void FUN_00891708(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_00997188;
  uVar2 = *(undefined8 *)(param_2 + 8);
  param_1[1] = puVar1;
  puVar1[3] = uVar2;
  *param_1 = puVar1 + 3;
  return;
}


// ===== 00891750  FUN_00891750 =====

long FUN_00891750(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099eb28) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0089176c  FUN_0089176c =====

undefined * FUN_0089176c(void)

{
  return PTR_typeinfo_0099eb30;
}


// ===== 00891778  FUN_00891778 =====

void FUN_00891778(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00997188;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00891788  FUN_00891788 =====

void FUN_00891788(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00997188;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008917b8  FUN_008917b8 =====

void FUN_008917b8(void)

{
  return;
}


// ===== 008917bc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008917c0  FUN_008917c0 =====

void FUN_008917c0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009971e8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008917d0  FUN_008917d0 =====

void FUN_008917d0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009971e8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00891800  FUN_00891800 =====

void FUN_00891800(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00891808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0089180c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00891810  FUN_00891810 =====

void FUN_00891810(long param_1)

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


// ===== 00891860  FUN_00891860 =====

void FUN_00891860(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00997238;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00891870  FUN_00891870 =====

void FUN_00891870(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00997238;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008918a0  FUN_008918a0 =====

void FUN_008918a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008918a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008918ac  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008918b0  FUN_008918b0 =====

void FUN_008918b0(long *param_1)

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


// ===== 00891968  facebook::react::concreteComponentDescriptorConstructor<facebook::react::RNSFormSheetHostComponentDescriptor> =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::unique_ptr<facebook::react::ComponentDescriptor const,
   std::__ndk1::default_delete<facebook::react::ComponentDescriptor const> >
   facebook::react::concreteComponentDescriptorConstructor<facebook::react::RNSFormSheetHostComponentDescriptor>(facebook::react::ComponentDescriptorParameters
   const&) */

void __thiscall
facebook::react::
concreteComponentDescriptorConstructor<facebook::react::RNSFormSheetHostComponentDescriptor>
          (react *this,ComponentDescriptorParameters *param_1)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ComponentDescriptor *this_00;
  long lVar6;
  undefined8 *in_x8;
  long *plVar7;
  void *pvVar8;
  undefined4 local_1040 [2];
  undefined8 *local_1038;
  void *local_1030;
  void *pvStack_1028;
  undefined8 local_1020;
  void *pvStack_1018;
  void *local_1010;
  undefined8 uStack_1008;
  void *local_1000;
  void *pvStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined *local_fe0;
  undefined8 uStack_fd8;
  undefined8 local_fd0;
  undefined8 uStack_fc8;
  undefined4 local_fc0 [2];
  undefined8 local_fb8;
  undefined8 uStack_fb0;
  undefined8 local_fa8;
  undefined8 uStack_fa0;
  undefined4 local_f98;
  undefined4 local_f90;
  undefined1 local_f8c;
  undefined8 local_f8b;
  undefined8 local_f83;
  undefined8 uStack_f7b;
  undefined8 local_f73;
  undefined8 uStack_f6b;
  undefined8 local_f63;
  undefined8 uStack_f5b;
  undefined8 local_f53;
  undefined6 uStack_f4b;
  undefined2 uStack_f45;
  undefined6 uStack_f43;
  undefined8 uStack_f3d;
  undefined4 local_f35;
  undefined8 local_f31;
  undefined1 local_f29;
  undefined1 uStack_f28;
  undefined7 uStack_f27;
  undefined8 uStack_f20;
  undefined8 uStack_f18;
  undefined8 uStack_f10;
  undefined8 local_f08;
  undefined8 uStack_f00;
  undefined8 local_ef8;
  undefined8 uStack_ef0;
  undefined8 local_ee8;
  undefined8 uStack_ee0;
  undefined8 local_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  undefined8 local_ec0;
  undefined8 local_eb8;
  undefined8 uStack_eb0;
  undefined8 local_ea8;
  undefined4 uStack_ea0;
  undefined4 uStack_e9c;
  undefined4 uStack_e98;
  undefined4 uStack_e94;
  undefined4 uStack_e90;
  undefined4 uStack_e8c;
  undefined8 local_e88;
  undefined8 uStack_e80;
  undefined4 local_e78;
  undefined1 local_e74;
  undefined4 local_e70;
  undefined1 local_e6c;
  undefined4 local_e68;
  undefined1 local_e64;
  undefined4 local_e60;
  undefined1 local_e5c;
  undefined4 local_e58;
  undefined1 local_e54;
  undefined4 local_e50;
  undefined1 local_e4c;
  undefined4 local_e48;
  undefined1 local_e44;
  undefined4 local_e40;
  undefined1 local_e3c;
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
  undefined1 local_df8;
  undefined1 local_df4;
  undefined1 local_de8;
  undefined8 local_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  undefined8 local_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined1 uStack_da8;
  undefined7 local_da7;
  undefined1 uStack_da0;
  undefined8 uStack_d9f;
  undefined8 local_d94;
  undefined8 uStack_d8c;
  undefined8 uStack_d84;
  undefined8 uStack_d7c;
  undefined8 local_d74;
  undefined8 uStack_d6c;
  undefined8 uStack_d64;
  undefined8 uStack_d5c;
  undefined8 local_d54;
  undefined8 uStack_d4c;
  undefined8 uStack_d44;
  undefined5 uStack_d3c;
  undefined3 local_d37;
  undefined5 uStack_d34;
  undefined1 local_d2c;
  undefined1 local_d28;
  undefined1 local_d24;
  undefined1 local_d20;
  undefined1 local_d1c;
  undefined1 local_d18;
  undefined1 local_d00;
  undefined8 local_cf8;
  undefined8 uStack_cf0;
  undefined8 local_ce8;
  undefined4 local_ce0;
  undefined1 local_cdc;
  undefined4 local_cdb;
  undefined1 local_cd7;
  undefined1 local_cd6;
  undefined8 local_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 local_cb0;
  undefined7 uStack_ca8;
  undefined4 uStack_ca1;
  undefined8 local_c9c;
  undefined1 local_c94;
  undefined1 local_c8c;
  undefined1 local_c88;
  undefined1 local_c80;
  undefined1 local_c7c;
  undefined1 local_c74;
  undefined1 local_c70;
  undefined1 local_c68;
  undefined1 local_c64;
  undefined1 local_c5c;
  undefined1 local_c58;
  undefined1 local_c50;
  undefined1 local_c4c;
  undefined1 local_c44;
  undefined1 local_c40;
  undefined1 local_c38;
  undefined1 local_c34;
  undefined1 local_c2c;
  undefined1 local_c28;
  undefined1 local_c20;
  undefined1 local_c1c;
  undefined1 local_c14;
  undefined1 local_c10;
  undefined1 local_c08;
  undefined1 local_c04;
  undefined1 local_bfc;
  undefined1 local_bf8;
  undefined1 local_bf4;
  undefined1 local_bf0;
  undefined1 local_bec;
  undefined1 local_be8;
  undefined1 local_be4;
  undefined1 local_be0;
  undefined1 local_bdc;
  undefined1 local_bd8;
  undefined1 local_bd4;
  undefined1 local_bd0;
  undefined1 local_bcc;
  undefined1 local_bc8;
  undefined1 local_bc4;
  undefined1 local_bc0;
  undefined1 local_bbc;
  undefined1 local_bb8;
  undefined1 local_bb4;
  undefined1 local_bb0;
  undefined1 local_bac;
  undefined1 local_ba8;
  undefined1 local_ba4;
  undefined1 local_ba0;
  undefined1 local_b9c;
  undefined8 local_b98;
  undefined8 uStack_b90;
  undefined8 local_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined2 local_b68;
  undefined8 local_b64;
  undefined1 local_b5c;
  undefined8 local_b58;
  undefined8 local_b50;
  undefined8 uStack_b48;
  undefined1 local_b40;
  undefined8 local_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 local_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
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
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 local_a78;
  undefined8 uStack_a70;
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined8 local_a58;
  undefined8 uStack_a50;
  undefined8 local_a48;
  undefined6 uStack_a40;
  undefined2 uStack_a3a;
  undefined6 uStack_a38;
  undefined1 local_a30;
  undefined1 local_a2c;
  undefined1 local_a28;
  undefined8 local_a24;
  undefined8 uStack_a1c;
  undefined1 local_a14;
  undefined8 local_a10;
  undefined2 local_a08;
  undefined1 local_a06;
  undefined4 local_a04;
  undefined1 local_a00;
  undefined1 local_9a0;
  undefined1 local_998;
  undefined1 local_938;
  undefined4 local_930;
  undefined2 local_92c;
  undefined1 local_928;
  undefined1 local_924;
  undefined1 local_920;
  undefined1 local_91c;
  undefined1 local_918;
  undefined1 local_914;
  undefined1 local_910;
  undefined1 local_90c;
  undefined1 local_908;
  undefined1 local_904;
  undefined1 local_900;
  void *local_8f8;
  void *pvStack_8f0;
  undefined8 local_8e8;
  undefined1 local_8e0;
  undefined4 local_8dc;
  undefined8 local_8d8;
  undefined2 local_8d0;
  undefined4 local_8cc;
  undefined4 local_8c8 [2];
  undefined8 local_8c0;
  undefined8 uStack_8b8;
  undefined8 local_8b0;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  void *local_1e0;
  void *local_1d8;
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
  undefined4 local_d0 [2];
  undefined8 local_c8;
  undefined4 local_a0;
  void *local_98;
  void *pvStack_90;
  undefined8 local_88;
  void *pvStack_80;
  void *local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this_00 = (ComponentDescriptor *)operator_new(0x88);
  pvStack_1018 = (void *)0x0;
  local_1020 = 0;
  uStack_1008 = 0;
  local_1010 = (void *)0x0;
  pvStack_ff8 = (void *)0x0;
  local_1000 = (void *)0x0;
  uStack_fe8 = 0;
  uStack_ff0 = 0;
  pvStack_1028 = (void *)0x0;
  local_1030 = (void *)0x0;
                    /* try { // try from 008919b8 to 008919c3 has its CatchHandler @ 0089203c */
  ::facebook::react::ComponentDescriptor::ComponentDescriptor
            (this_00,(ComponentDescriptorParameters *)this,(RawPropsParser *)&local_1030);
  local_f8 = 0;
  *(undefined ***)this_00 = &PTR_FUN_00997368;
  local_f0 = 0;
  local_e8 = 0;
  local_e0[0] = 0;
  local_d0[0] = 0;
  local_c8 = 0;
  local_a0 = 0;
  pvStack_90 = (void *)0x0;
  local_98 = (void *)0x0;
  pvStack_80 = (void *)0x0;
  local_88 = 0;
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
                    /* try { // try from 00891a34 to 00891a3f has its CatchHandler @ 0089206c */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_1040[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_1038 = &local_1b0;
  ::facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this_00 + 0x38);
  memset(local_fc0,0,0x6f8);
  puVar5 = PTR_VTT_0099f030;
  local_8c8[0] = 5;
  local_8b0 = 0;
  local_fe0 = *(undefined **)(PTR_VTT_0099f030 + 0x20);
  local_fc0[0] = 5;
  uStack_fc8 = 0;
  local_fd0 = 0;
  local_8a8 = 0;
  uStack_fd8 = 0;
  uStack_8a0 = 0x3f800000;
  uStack_8b8 = 0;
  local_8c0 = 0;
  uStack_fb0 = 0;
  local_fb8 = 0;
  uStack_fa0 = 0;
  local_fa8 = 0;
  local_f98 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_8c8);
  local_f8c = 0;
  local_f31 = 0;
  uStack_a50 = _UNK_00488920;
  local_a58 = _DAT_00488918;
  local_f8b = _s__00375408;
  uStack_b48 = _UNK_00371598;
  local_b50 = _DAT_00371590;
  uStack_a60 = _UNK_00488910;
  local_a68 = _DAT_00488908;
  local_e74 = 0;
  uStack_a70 = _UNK_00488900;
  local_a78 = _DAT_004888f8;
  uStack_a80 = _UNK_004888f0;
  local_a88 = _DAT_004888e8;
  uStack_a38 = 0;
  local_e6c = 0;
  uStack_ea0 = 0;
  local_ea8 = 0;
  uStack_e8c = 0;
  uStack_eb0 = 0;
  local_eb8 = 0;
  uStack_cf0 = 0;
  local_cf8 = 0;
  local_f90 = 0x10410710;
  local_cdb = 0;
  local_f35 = 0x40004;
  local_cd6 = 0x23;
  uStack_e94 = 0;
  uStack_e90 = 0;
  uStack_e9c = 0;
  uStack_e98 = 0;
  uStack_e80 = 0;
  local_e88 = 0;
  local_c9c = 0x3f800000;
  local_e78 = 0x7fc00000;
  local_e70 = 0x7fc00000;
  local_e68 = 0x7fc00000;
  local_e60 = 0x7fc00000;
  local_e58 = 0x7fc00000;
  local_e50 = 0x7fc00000;
  local_e48 = 0x7fc00000;
  local_e40 = 0x7fc00000;
  local_e38 = 0x7fc00000;
  local_e30 = 0x7fc00000;
  local_e28 = 0x7fc00000;
  local_e20 = 0x7fc00000;
  local_e18 = 0x7fc00000;
  local_e10 = 0x7fc00000;
  local_e08 = 0x7fc00000;
  local_e00 = 0x7fc00000;
  uStack_b80 = 0;
  local_b88 = 0;
  uStack_b70 = 0;
  uStack_b78 = 0;
  uStack_b90 = 0;
  local_b98 = 0;
  uStack_d9f = 0;
  uStack_da0 = 0;
  local_b64 = 0;
  uStack_d8c = 0;
  local_d94 = 0;
  uStack_d7c = 0;
  uStack_d84 = 0;
  uStack_d6c = 0;
  local_d74 = 0;
  uStack_d5c = 0;
  uStack_d64 = 0;
  uStack_d4c = 0;
  local_d54 = 0;
  uStack_d3c = 0;
  uStack_d44 = 0;
  local_d37 = 0;
  uStack_d34 = 0;
  uStack_b30 = 0;
  local_b38 = 0;
  uStack_b20 = 0;
  uStack_b28 = 0;
  uStack_b10 = 0;
  local_b18 = 0;
  uStack_b00 = 0;
  uStack_b08 = 0;
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
  uStack_a40 = 0;
  uStack_a3a = 0;
  local_a48 = 0;
  uStack_f27 = 0;
  uStack_f7b = 0;
  local_f83 = 0;
  uStack_f6b = 0;
  local_f73 = 0;
  uStack_f5b = 0;
  local_f63 = 0;
  uStack_f4b = 0;
  local_f53 = 0;
  uStack_f3d = 0;
  uStack_f45 = 0;
  uStack_f43 = 0;
  local_f29 = 0;
  uStack_f28 = 0;
  uStack_f18 = 0;
  uStack_f20 = 0;
  local_f08 = 0;
  uStack_f10 = 0;
  local_ef8 = 0;
  uStack_f00 = 0;
  local_ee8 = 0;
  uStack_ef0 = 0;
  local_ed8 = 0;
  uStack_ee0 = 0;
  uStack_ec8 = 0;
  uStack_ed0 = 0;
  local_ec0 = 0;
  local_e64 = 0;
  local_e5c = 0;
  local_e54 = 0;
  local_e4c = 0;
  local_e44 = 0;
  local_e3c = 0;
  local_e34 = 0;
  local_e2c = 0;
  local_e24 = 0;
  local_e1c = 0;
  local_e14 = 0;
  local_e0c = 0;
  local_e04 = 0;
  local_dfc = 0;
  local_df8 = 0;
  local_df4 = 0;
  local_de8 = 0;
  local_d2c = 0;
  local_d28 = 0;
  local_d24 = 0;
  local_d20 = 0;
  local_d1c = 0;
  local_d18 = 0;
  local_d00 = 0;
  uStack_dd8 = 0;
  local_de0 = 0;
  uStack_dc8 = 0;
  uStack_dd0 = 0;
  uStack_db8 = 0;
  local_dc0 = 0;
  uStack_da8 = 0;
  local_da7 = 0;
  uStack_db0 = 0;
  local_ce8 = 0;
  local_ce0 = 0;
  local_cdc = 1;
  local_cd7 = 0;
  uStack_cc8 = 0;
  local_cd0 = 0;
  uStack_cb8 = 0;
  uStack_cc0 = 0;
  uStack_ca8 = 0;
  uStack_ca1 = 0;
  local_cb0 = 0;
  local_c94 = 0;
  local_c8c = 0;
  local_c88 = 0;
  local_c80 = 0;
  local_c7c = 0;
  local_c74 = 0;
  local_c70 = 0;
  local_c68 = 0;
  local_c64 = 0;
  local_c5c = 0;
  local_c58 = 0;
  local_c50 = 0;
  local_c4c = 0;
  local_c44 = 0;
  local_c40 = 0;
  local_c38 = 0;
  local_c34 = 0;
  local_c2c = 0;
  local_c28 = 0;
  local_c20 = 0;
  local_c1c = 0;
  local_c14 = 0;
  local_c10 = 0;
  local_c08 = 0;
  local_c04 = 0;
  local_bfc = 0;
  local_bf8 = 0;
  local_bf4 = 0;
  local_bf0 = 0;
  local_bec = 0;
  local_be8 = 0;
  local_be4 = 0;
  local_be0 = 0;
  local_bdc = 0;
  local_bd8 = 0;
  local_bd4 = 0;
  local_bd0 = 0;
  local_bcc = 0;
  local_bc8 = 0;
  local_bc4 = 0;
  local_bc0 = 0;
  local_bbc = 0;
  local_bb8 = 0;
  local_bb4 = 0;
  local_bb0 = 0;
  local_bac = 0;
  local_ba8 = 0;
  local_ba4 = 0;
  local_ba0 = 0;
  local_b9c = 0;
  local_b58 = 0;
  local_b68 = 0;
  local_b5c = 0;
  local_b40 = 0;
  local_a30 = 0;
  local_a2c = 0;
  local_a28 = 0;
  local_a10 = 0;
  uStack_a1c = 0;
  local_a24 = 0;
  local_a14 = 0;
  local_a08 = 0x101;
  local_a06 = 0;
  local_a04 = 0;
  local_a00 = 0;
  local_9a0 = 0;
  local_998 = 0;
  local_938 = 0;
  local_928 = 0;
  local_924 = 0;
  local_920 = 0;
  local_91c = 0;
  local_918 = 0;
  local_914 = 0;
  local_910 = 0;
  local_90c = 0;
  local_908 = 0;
  local_904 = 0;
  local_92c = 0;
  local_930 = 0;
  local_fe0 = PTR_vtable_0099f028 + 0x20;
  local_900 = 0;
  pvStack_8f0 = (void *)0x0;
  local_8f8 = (void *)0x0;
  local_8e8 = 0;
  local_8e0 = 0;
  local_8dc = 0xbf800000;
  local_8d8 = 0xffffffff;
  local_8d0 = 1;
  local_8cc = 0;
                    /* try { // try from 00891e54 to 00891e67 has its CatchHandler @ 0089206c */
  ::facebook::react::RNSFormSheetHostProps::RNSFormSheetHostProps
            ((RNSFormSheetHostProps *)local_8c8,(PropsParserContext *)local_1040,
             (RNSFormSheetHostProps *)&local_fe0,(RawProps *)&local_f8);
  if (local_1e0 != (void *)0x0) {
    local_1d8 = local_1e0;
    operator_delete(local_1e0);
  }
  FUN_0078917c(local_8c8,puVar5 + 8);
  if (local_8f8 != (void *)0x0) {
    pvStack_8f0 = local_8f8;
    operator_delete(local_8f8);
  }
  FUN_0078917c(&local_fe0,puVar5 + 8);
  ::facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(this_00 + 0x38);
  pvVar3 = local_120;
  puVar4 = (undefined8 *)local_110;
  while (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar4[6];
    pvVar8 = (void *)*puVar4;
    local_120 = pvVar3;
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
    pvVar3 = local_120;
    puVar4 = (undefined8 *)pvVar8;
  }
  local_120 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_158);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_188);
  std::__ndk1::mutex::~mutex((mutex *)&local_1b0);
  pvVar8 = pvStack_80;
  pvVar3 = local_78;
  if (pvStack_80 != (void *)0x0) {
    while (pvVar3 != pvVar8) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 00891f8c to 00891f97 has its CatchHandler @ 00892070 */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_fe0,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_78 = pvVar8;
    operator_delete(pvStack_80);
  }
  if (local_98 != (void *)0x0) {
    pvStack_90 = local_98;
    operator_delete(local_98);
  }
  folly::dynamic::folly::dynamic::destroy(local_d0);
  ::facebook::jsi::Value::~Value((Value *)local_e0);
  *(undefined ***)this_00 = &PTR_FUN_009972c0;
  if (local_1000 != (void *)0x0) {
    pvStack_ff8 = local_1000;
    operator_delete(local_1000);
  }
  if (pvStack_1018 != (void *)0x0) {
    local_1010 = pvStack_1018;
    operator_delete(pvStack_1018);
  }
  if (local_1030 != (void *)0x0) {
    pvStack_1028 = local_1030;
    operator_delete(local_1030);
  }
  *in_x8 = this_00;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00892074  FUN_00892074 =====

void FUN_00892074(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 00892098  FUN_00892098 =====

undefined * FUN_00892098(void)

{
  return PTR_RNSFormSheetHostComponentName_0099f020;
}


// ===== 008920a4  FUN_008920a4 =====

undefined * FUN_008920a4(void)

{
  return PTR_RNSFormSheetHostComponentName_0099f020;
}


// ===== 008920b0  FUN_008920b0 =====

undefined8 FUN_008920b0(void)

{
  return 99;
}


// ===== 008920b8  FUN_008920b8 =====

void FUN_008920b8(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  lVar7 = *(long *)(lVar4 + 0x28);
  uVar5 = (**(code **)(*param_2 + 0x20))();
  puVar6 = (undefined8 *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_009973e0;
                    /* try { // try from 00892124 to 00892133 has its CatchHandler @ 00892218 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar8 = puVar6[4];
  puVar6[3] = &PTR_FUN_00997510;
  uVar3 = *(uint *)((long)puVar6 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar8 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar8 + 0x50) & 0x30000000) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    if (*(char *)(lVar8 + 0x5b4) != '\0') {
      uVar5 = *(undefined4 *)(lVar8 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar5;
  lVar9 = *param_2;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar8 + 0x6b0) != '\0' || *(char *)(lVar8 + 0x6b1) != '\0') ||
             *(char *)(lVar8 + 0x1e8) != '\0') << 0xb;
  puVar6[3] = &PTR_FUN_00997430;
                    /* try { // try from 008921cc to 008921d7 has its CatchHandler @ 00892208 */
  (**(code **)(lVar9 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00892248  FUN_00892248 =====

void FUN_00892248(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined4 uVar10;
  YogaLayoutableShadowNode *local_78;
  long *local_70;
  YogaLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar7 = tpidr_el0;
  local_58 = *(long *)(lVar7 + 0x28);
  plVar8 = (long *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(plVar8 + 3);
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_009973e0;
                    /* try { // try from 008922a0 to 008922af has its CatchHandler @ 008923fc */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4);
  lVar9 = plVar8[4];
  plVar8[3] = (long)&PTR_FUN_00997510;
  uVar3 = *(uint *)((long)plVar8 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar9 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)plVar8 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar9 + 0x50) & 0x30000000) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    if (*(char *)(lVar9 + 0x5b4) != '\0') {
      uVar10 = *(undefined4 *)(lVar9 + 0x5b0);
    }
  }
  *(undefined4 *)(plVar8 + 10) = uVar10;
  cVar4 = *(char *)(lVar9 + 0x6b0);
  cVar5 = *(char *)(lVar9 + 0x6b1);
  cVar6 = *(char *)(lVar9 + 0x1e8);
  plVar8[3] = (long)&PTR_FUN_00997430;
  *(uint *)((long)plVar8 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 | (uint)((cVar4 != '\0' || cVar5 != '\0') || cVar6 != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar8;
                    /* try { // try from 00892340 to 0089234f has its CatchHandler @ 00892414 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pYVar1,param_3,param_4);
  local_78 = pYVar1;
  local_70 = plVar8;
  FUN_00757d00(1,plVar8 + 1);
                    /* try { // try from 00892360 to 0089236f has its CatchHandler @ 008923ec */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar8 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar9 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar9 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 008923ac to 008923b7 has its CatchHandler @ 00892414 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar7 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0089243c  FUN_0089243c =====

void FUN_0089243c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::appendChild
            (*param_2,param_3);
  return;
}


// ===== 00892448  FUN_00892448 =====

void FUN_00892448(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNSFormSheetHostProps *this;
  uint uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  char *pcVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  char *pcVar9;
  dynamic *pdVar10;
  long lVar11;
  RNSFormSheetHostProps *pRVar12;
  undefined1 uStack_d1;
  dynamic local_d0 [32];
  dynamic *local_b0;
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar7 = facebook::react::RawProps::isEmpty(), (uVar7 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSFormSheetHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNSFormSheetHostPropsENS0_28RNSFormSheetHostEventEmitterENS0_21RNSFormSheetHostStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eb40
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSFormSheetHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNSFormSheetHostPropsENS0_28RNSFormSheetHostEventEmitterENS0_21RNSFormSheetHostStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eb40
                                   ), iVar6 != 0)) {
                    /* try { // try from 0089287c to 0089287f has its CatchHandler @ 008928ac */
      FUN_00893604();
      __cxa_atexit(FUN_008935b4,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSFormSheetHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNSFormSheetHostPropsENS0_28RNSFormSheetHostEventEmitterENS0_21RNSFormSheetHostStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eb38
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSFormSheetHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNSFormSheetHostPropsENS0_28RNSFormSheetHostEventEmitterENS0_21RNSFormSheetHostStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eb40
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSFormSheetHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNSFormSheetHostPropsENS0_28RNSFormSheetHostEventEmitterENS0_21RNSFormSheetHostStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eb38
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSFormSheetHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNSFormSheetHostPropsENS0_28RNSFormSheetHostEventEmitterENS0_21RNSFormSheetHostStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eb38
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNSFormSheetHostProps *)*param_4;
    if (pRVar12 == (RNSFormSheetHostProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSFormSheetHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNSFormSheetHostPropsENS0_28RNSFormSheetHostEventEmitterENS0_21RNSFormSheetHostStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eb40
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSFormSheetHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNSFormSheetHostPropsENS0_28RNSFormSheetHostEventEmitterENS0_21RNSFormSheetHostStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eb40
                                     ), iVar6 != 0)) {
                    /* try { // try from 008927fc to 008927ff has its CatchHandler @ 008928c4 */
        FUN_00893604();
        __cxa_atexit(FUN_008935b4,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSFormSheetHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNSFormSheetHostPropsENS0_28RNSFormSheetHostEventEmitterENS0_21RNSFormSheetHostStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eb38
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSFormSheetHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNSFormSheetHostPropsENS0_28RNSFormSheetHostEventEmitterENS0_21RNSFormSheetHostStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eb40
                           );
      }
      pRVar12 = *(RNSFormSheetHostProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSFormSheetHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNSFormSheetHostPropsENS0_28RNSFormSheetHostEventEmitterENS0_21RNSFormSheetHostStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eb38
      ;
    }
    plVar8 = (long *)operator_new(0x730);
    this = (RNSFormSheetHostProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_009975f8;
                    /* try { // try from 00892528 to 0089253b has its CatchHandler @ 00892938 */
    facebook::react::RNSFormSheetHostProps::RNSFormSheetHostProps(this,param_3,pRVar12,param_5);
                    /* try { // try from 00892540 to 00892553 has its CatchHandler @ 00892950 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_0089257c:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSFormSheetHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNSFormSheetHostPropsENS0_28RNSFormSheetHostEventEmitterENS0_21RNSFormSheetHostStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eb40
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSFormSheetHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNSFormSheetHostPropsENS0_28RNSFormSheetHostEventEmitterENS0_21RNSFormSheetHostStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eb40
                                       ), iVar6 != 0)) {
                    /* try { // try from 0089283c to 0089283f has its CatchHandler @ 008928b0 */
          FUN_00893604();
          __cxa_atexit(FUN_008935b4,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSFormSheetHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNSFormSheetHostPropsENS0_28RNSFormSheetHostEventEmitterENS0_21RNSFormSheetHostStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eb38
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSFormSheetHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNSFormSheetHostPropsENS0_28RNSFormSheetHostEventEmitterENS0_21RNSFormSheetHostStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eb40
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008925e4 to 008925f7 has its CatchHandler @ 008928dc */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSFormSheetHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNSFormSheetHostPropsENS0_28RNSFormSheetHostEventEmitterENS0_21RNSFormSheetHostStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eb38
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_00892630:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_00892630;
        }
        if (plVar8 != (long *)0x0) goto LAB_00892644;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00892598 to 008925ab has its CatchHandler @ 00892904 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_00892644;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_00892644:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 00892560 to 0089256b has its CatchHandler @ 008928d8 */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNSFormSheetHostComponentName_0099f020,pcVar9);
      if (iVar6 != 0) goto LAB_0089257c;
      bVar3 = false;
    }
                    /* try { // try from 00892670 to 00892673 has its CatchHandler @ 00892950 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 00892680 to 0089269b has its CatchHandler @ 00892900 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008927dc to 008927eb has its CatchHandler @ 008928f8 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_0089299c;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008927bc to 008927cb has its CatchHandler @ 0089295c */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_0089299c;
        }
        uVar1 = 0x811c9dc5;
        uVar7 = (ulong)(*(byte *)(plVar4 + 3) >> 1);
        pcVar5 = (char *)((long)plVar4 + 0x19);
        pcVar9 = (char *)((long)plVar4 + 0x19);
        if ((*(byte *)(plVar4 + 3) & 1) != 0) {
          uVar7 = plVar4[4];
          pcVar5 = (char *)plVar4[5];
          pcVar9 = (char *)plVar4[5];
        }
        for (; uVar7 != 0; uVar7 = uVar7 - 1) {
          uVar1 = (uVar1 ^ (int)*pcVar5) * 0x1000193;
          pcVar5 = pcVar5 + 1;
        }
                    /* try { // try from 0089271c to 00892727 has its CatchHandler @ 00892964 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 0089272c to 00892743 has its CatchHandler @ 00892968 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 00892754 to 0089275f has its CatchHandler @ 00892958 */
          (*(code *)(&PTR_FUN_0098f088)[local_a0])(&uStack_d1,local_d0);
        }
      }
      folly::dynamic::folly::dynamic::destroy(local_98);
    }
    param_1[1] = plVar8;
    *param_1 = this;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_0089299c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008929a0  FUN_008929a0 =====

/* WARNING: Removing unreachable block (ram,0x00892aa0) */
/* WARNING: Removing unreachable block (ram,0x00892ab0) */
/* WARNING: Removing unreachable block (ram,0x00892ad4) */
/* WARNING: Removing unreachable block (ram,0x00892ae4) */

void FUN_008929a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  State *pSVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_78;
  long local_70;
  long *local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)operator_new(0x20);
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_009977f0;
  *(undefined4 *)(plVar3 + 3) = 0;
  *(undefined4 *)((long)plVar3 + 0x1c) = 0;
                    /* try { // try from 008929fc to 00892a03 has its CatchHandler @ 00892b60 */
  puVar4 = (undefined8 *)operator_new(0x50);
  local_78 = *param_4;
  local_70 = param_4[1];
  pSVar1 = (State *)(puVar4 + 3);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_00997648;
  if (local_70 != 0) {
    FUN_00757d00(1,local_70 + 0x10);
  }
                    /* try { // try from 00892a40 to 00892a4f has its CatchHandler @ 00892b28 */
  local_68 = plVar3 + 3;
  local_60 = plVar3;
  facebook::react::State::State(pSVar1,&local_68,&local_78);
  if (local_70 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar3 = local_60;
  if ((local_60 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_60 + 1), lVar5 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined ***)pSVar1 = &PTR_FUN_00997698;
  *param_1 = pSVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00892b88  FUN_00892b88 =====

/* WARNING: Removing unreachable block (ram,0x00892c5c) */
/* WARNING: Removing unreachable block (ram,0x00892c6c) */
/* WARNING: Removing unreachable block (ram,0x00892cc0) */
/* WARNING: Removing unreachable block (ram,0x00892cd0) */

void FUN_00892b88(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  State *pSVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_88;
  long *local_80;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar2 = *param_4;
  plVar3 = (long *)param_4[1];
  if (plVar3 != (long *)0x0) {
    FUN_00757d00(1,plVar3 + 1);
  }
                    /* try { // try from 00892bcc to 00892bd7 has its CatchHandler @ 00892d48 */
  facebook::react::ShadowNodeFamily::getMostRecentState();
                    /* try { // try from 00892bdc to 00892be3 has its CatchHandler @ 00892d38 */
  puVar5 = (undefined8 *)operator_new(0x50);
  pSVar1 = (State *)(puVar5 + 3);
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_00997850;
                    /* try { // try from 00892c08 to 00892c17 has its CatchHandler @ 00892d10 */
  local_58 = uVar2;
  local_50 = plVar3;
  facebook::react::State::State(pSVar1,&local_58,local_88);
  plVar3 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar6 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined ***)pSVar1 = &PTR_FUN_00997698;
  *param_1 = pSVar1;
  param_1[1] = puVar5;
  if ((local_80 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_80 + 1), lVar6 == 0)) {
    (**(code **)(*local_80 + 0x10))(local_80);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00892d70  FUN_00892d70 =====

void FUN_00892d70(undefined8 *param_1,long param_2,long param_3)

{
  EventEmitter *pEVar1;
  ShadowNodeFamily *pSVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ShadowNodeFamily *local_b0;
  long *local_a8;
  EventEmitter *local_a0;
  long *plStack_98;
  EventEmitter *local_90;
  long *local_88;
  undefined8 local_80;
  long local_78;
  EventEmitter *local_70;
  long *plStack_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_0078a610(&local_a0,&local_70,param_3 + 8,param_3 + 4);
                    /* try { // try from 00892db8 to 00892dbf has its CatchHandler @ 008930a4 */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_009978a0;
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  pEVar1 = (EventEmitter *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  plStack_68 = plStack_98;
  local_70 = local_a0;
  local_a0 = (EventEmitter *)0x0;
  plStack_98 = (long *)0x0;
  if (local_78 != 0) {
    FUN_00757d00(1,local_78 + 0x10);
  }
                    /* try { // try from 00892dfc to 00892e0b has its CatchHandler @ 00893078 */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_0097ff10;
                    /* try { // try from 00892e1c to 00892e23 has its CatchHandler @ 00893068 */
  plVar6 = (long *)operator_new(0x58);
  puVar4 = PTR_DAT_0099dc90;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)(puVar4 + 0x10);
  plVar6[4] = 0;
  plVar6[3] = 0;
  plVar5[0xb] = (long)(plVar6 + 3);
  plVar5[0xc] = (long)plVar6;
  plVar6[6] = 0;
  plVar6[5] = 0;
  plVar6[8] = 0;
  plVar6[7] = 0;
  *(undefined8 *)((long)plVar6 + 0x4c) = 0;
  *(undefined8 *)((long)plVar6 + 0x44) = 0;
  plVar5[3] = (long)&PTR_FUN_009978f0;
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_98;
  local_90 = pEVar1;
  local_88 = plVar5;
  if ((plStack_98 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_98 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 00892ed4 to 00892edb has its CatchHandler @ 00893058 */
  plVar5 = (long *)operator_new(0x1a0);
  puVar4 = PTR_DAT_0099dca0;
  pSVar2 = (ShadowNodeFamily *)(plVar5 + 4);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)(puVar4 + 0x10);
  local_70 = local_90;
  plStack_68 = local_88;
  if (local_88 != (long *)0x0) {
    FUN_00757d00(1,local_88 + 1);
  }
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  if (local_78 != 0) {
    FUN_00757d00(1,local_78 + 0x10);
  }
                    /* try { // try from 00892f28 to 00892f3f has its CatchHandler @ 00893028 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar2,param_3,&local_70,&local_80,param_2);
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pEVar1 = local_90;
  *param_1 = pSVar2;
  param_1[1] = plVar5;
  local_b0 = pSVar2;
  local_a8 = plVar5;
  FUN_00757d00(1,plVar5 + 2);
                    /* try { // try from 00892f94 to 00892f9f has its CatchHandler @ 00893008 */
  facebook::react::EventEmitter::facebook::react::EventEmitter::setShadowNodeFamily
            (pEVar1,&local_b0);
  if (local_a8 != (long *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008930cc  FUN_008930cc =====

void FUN_008930cc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::react::ShadowNode::getState();
  lVar3 = *plVar2;
  plVar2 = (long *)plVar2[1];
  if (plVar2 != (long *)0x0) {
    FUN_00757d00(1,plVar2 + 1);
  }
  fVar5 = **(float **)(lVar3 + 0x18);
  if ((fVar5 != 0.0 && fVar5 < 0.0 == NAN(fVar5)) &&
     (fVar5 = (*(float **)(lVar3 + 0x18))[1], fVar5 != 0.0 && fVar5 < 0.0 == NAN(fVar5))) {
                    /* try { // try from 0089312c to 00893133 has its CatchHandler @ 008931a4 */
    facebook::react::YogaLayoutableShadowNode::setSize(param_2);
  }
  if ((plVar2 == (long *)0x0) || (lVar3 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar3 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == lVar4) {
      return;
    }
  }
  else {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    if (*(long *)(lVar1 + 0x28) == lVar4) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008931cc  FUN_008931cc =====

void FUN_008931cc(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 008931f0  FUN_008931f0 =====

void FUN_008931f0(void)

{
  return;
}


// ===== 008931f4  FUN_008931f4 =====

void FUN_008931f4(long param_1)

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


// ===== 00893244  FUN_00893244 =====

void FUN_00893244(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009973e0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00893254  FUN_00893254 =====

void FUN_00893254(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009973e0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00893284  FUN_00893284 =====

void FUN_00893284(long param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  *(long *)(param_1 + 0x18) = (long)(PTR_vtable_0099de98 + 0x10);
  pvVar4 = *(void **)(param_1 + 0x3e0);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = *(void **)(param_1 + 1000);
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
      pvVar2 = *(void **)(param_1 + 0x3e0);
    }
    *(void **)(param_1 + 1000) = pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = *(void **)(param_1 + 0x3b0);
  if (pvVar4 != (void *)0x0) {
    *(void **)(param_1 + 0x3b8) = pvVar4;
    operator_delete(pvVar4);
  }
  FUN_007890e8(param_1 + 0x130);
  FUN_00789784((long *)(param_1 + 0x18));
  return;
}


// ===== 00893348  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0089334c  FUN_0089334c =====

void FUN_0089334c(long *param_1)

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


// ===== 0089340c  FUN_0089340c =====

void FUN_0089340c(long param_1)

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


// ===== 00893474  FUN_00893474 =====

bool FUN_00893474(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 0089348c  FUN_0089348c =====

bool FUN_0089348c(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 008934a4  FUN_008934a4 =====

void FUN_008934a4(long *param_1)

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


// ===== 00893564  FUN_00893564 =====

void FUN_00893564(long param_1)

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


// ===== 008935b4  FUN_008935b4 =====

void FUN_008935b4(long param_1)

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


// ===== 00893604  FUN_00893604 =====

void FUN_00893604(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x730);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_009975a8;
  memset(__s,0,0x718);
                    /* try { // try from 00893640 to 00893653 has its CatchHandler @ 008936f0 */
  FUN_00788b10(__s,PTR_VTT_0099f030 + 0x10);
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
  puVar1 = PTR_vtable_0099f028;
  puVar2[0xe1] = 0;
  puVar2[0xe0] = 0;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  puVar2[3] = puVar1 + 0x20;
  *(undefined4 *)((long)puVar2 + 0x71c) = 0xbf800000;
  *(undefined1 *)(puVar2 + 0xdf) = 0;
  *(undefined1 *)(puVar2 + 0xe3) = 0;
  puVar2[0xe2] = 0;
  puVar2[0xe4] = 0xffffffff;
  *(undefined2 *)(puVar2 + 0xe5) = 1;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSFormSheetHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNSFormSheetHostPropsENS0_28RNSFormSheetHostEventEmitterENS0_21RNSFormSheetHostStateEE18defaultSharedPropsEvE18defaultSharedProps_0099eb38
  ;
  *(undefined4 *)((long)puVar2 + 0x72c) = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 0089370c  FUN_0089370c =====

void FUN_0089370c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009975a8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0089371c  FUN_0089371c =====

void FUN_0089371c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009975a8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0089374c  FUN_0089374c =====

void FUN_0089374c(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x700);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x708) = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099f030 + 8);
  return;
}


// ===== 00893788  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0089378c  FUN_0089378c =====

void FUN_0089378c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009975f8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0089379c  FUN_0089379c =====

void FUN_0089379c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009975f8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008937cc  FUN_008937cc =====

void FUN_008937cc(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x700);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x708) = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099f030 + 8);
  return;
}


// ===== 00893808  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0089380c  FUN_0089380c =====

void FUN_0089380c(long param_1)

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


// ===== 0089385c  FUN_0089385c =====

void FUN_0089385c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00997648;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0089386c  FUN_0089386c =====

void FUN_0089386c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00997648;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0089389c  FUN_0089389c =====

void FUN_0089389c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008938a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008938a8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008938ac  FUN_008938ac =====

void FUN_008938ac(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[4];
  *param_1 = &PTR_FUN_0098f6c8;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[2] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 00893914  FUN_00893914 =====

void FUN_00893914(void)

{
  facebook::react::RNSFormSheetHostState::getDynamic();
  return;
}


// ===== 0089391c  <EXTERNAL>::facebook::react::MapBufferBuilder::facebook::react::MapBufferBuilder::EMPTY =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::MapBufferBuilder::facebook::react::MapBufferBuilder::EMPTY(void)

{
  (*(code *)PTR_EMPTY_009a0138)();
  return;
}


// ===== 00893920  FUN_00893920 =====

void FUN_00893920(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 00893928  FUN_00893928 =====

void FUN_00893928(long param_1,undefined8 param_2)

{
  long lVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  undefined ***pppuVar5;
  undefined ****ppppuVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  undefined **local_f0;
  float local_e8;
  float fStack_e4;
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
  piVar2 = (int *)folly::dynamic::at(param_2,"frameWidth","");
  if (*piVar2 == 3) {
    dVar9 = *(double *)(piVar2 + 2);
    piVar2 = (int *)folly::dynamic::at(param_2,"frameHeight","");
    if (*piVar2 == 3) {
      local_f0 = &PTR_FUN_00997770;
      local_d0 = &local_f0;
      local_e8 = (float)dVar9;
      fStack_e4 = (float)*(double *)(piVar2 + 2);
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (plVar3 = (long *)std::__ndk1::__shared_weak_count::lock(), plVar3 != (long *)0x0)) {
        lVar8 = *(long *)(param_1 + 8);
        if (lVar8 != 0) {
          local_90 = lVar8;
          local_88 = plVar3;
          FUN_00757d00(1,plVar3 + 1);
          local_a0[0] = local_d0;
          if (local_d0 != (undefined ***)0x0) {
            if (local_d0 == &local_f0) {
              local_a0[0] = local_c0;
              (*(code *)local_f0[3])(&local_f0,local_c0);
            }
            else {
                    /* try { // try from 00893a0c to 00893a33 has its CatchHandler @ 00893bec */
              local_a0[0] = (undefined ***)(*(code *)(*local_d0)[2])();
            }
          }
          local_60 = (long *)0x0;
                    /* try { // try from 00893a38 to 00893a3f has its CatchHandler @ 00893c04 */
          plVar4 = (long *)operator_new(0x40);
          *plVar4 = (long)&PTR_FUN_009976f0;
          if (local_a0[0] == (undefined ***)0x0) {
            ppppuVar6 = (undefined ****)(plVar4 + 6);
LAB_00893a74:
            *ppppuVar6 = (undefined ***)0x0;
          }
          else {
            if (local_a0[0] != local_c0) {
              ppppuVar6 = local_a0;
              plVar4[6] = (long)local_a0[0];
              goto LAB_00893a74;
            }
            plVar4[6] = (long)(plVar4 + 2);
                    /* try { // try from 00893a88 to 00893a97 has its CatchHandler @ 00893be8 */
            (*(code *)local_c0[0][3])(local_c0);
          }
          local_60 = plVar4;
          if (local_a0[0] == local_c0) {
            lVar7 = 4;
            pppuVar5 = local_c0;
LAB_00893ac0:
            (*(code *)(*pppuVar5)[lVar7])(pppuVar5);
          }
          else if (local_a0[0] != (undefined ***)0x0) {
            lVar7 = 5;
            pppuVar5 = local_a0[0];
            goto LAB_00893ac0;
          }
                    /* try { // try from 00893ad0 to 00893adf has its CatchHandler @ 00893bf4 */
          facebook::react::ShadowNodeFamily::facebook::react::ShadowNodeFamily::dispatchRawState
                    (lVar8,&local_90,0);
          plVar4 = local_80;
          if (local_60 == plVar4) {
            lVar8 = 4;
LAB_00893b08:
            (**(code **)(*plVar4 + lVar8 * 8))();
          }
          else if (local_60 != (long *)0x0) {
            lVar8 = 5;
            plVar4 = local_60;
            goto LAB_00893b08;
          }
          plVar4 = local_88;
          if ((local_88 != (long *)0x0) &&
             (lVar8 = FUN_00757990(0xffffffffffffffff,local_88 + 1), lVar8 == 0)) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
            std::__ndk1::__shared_weak_count::__release_weak();
          }
          if (plVar3 == (long *)0x0) goto LAB_00893b74;
        }
        lVar8 = FUN_00757990(0xffffffffffffffff,plVar3 + 1);
        if (lVar8 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
LAB_00893b74:
      if (local_d0 == &local_f0) {
        lVar8 = 4;
        pppuVar5 = &local_f0;
LAB_00893b94:
        (*(code *)(*pppuVar5)[lVar8])();
      }
      else if (local_d0 != (undefined ***)0x0) {
        lVar8 = 5;
        pppuVar5 = local_d0;
        goto LAB_00893b94;
      }
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
      goto LAB_00893c94;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00789f8c(*(undefined8 *)PTR_name_0099edf8);
  }
LAB_00893c94:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00893c98  FUN_00893c98 =====

void FUN_00893c98(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_009976f0;
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = 5;
    plVar2 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00893cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 00893cdc  FUN_00893cdc =====

void FUN_00893cdc(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_009976f0;
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00893d28;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_00893d28:
  operator_delete(param_1);
  return;
}


// ===== 00893d38  FUN_00893d38 =====

undefined8 * FUN_00893d38(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  plVar2 = *(long **)(param_1 + 0x30);
  *puVar1 = &PTR_FUN_009976f0;
  if (plVar2 != (long *)0x0) {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      lVar3 = *plVar2;
      puVar1[6] = puVar1 + 2;
      (**(code **)(lVar3 + 0x18))();
      return puVar1;
    }
                    /* try { // try from 00893d80 to 00893d9b has its CatchHandler @ 00893dac */
    plVar2 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  puVar1[6] = plVar2;
  return puVar1;
}


// ===== 00893dc0  FUN_00893dc0 =====

void FUN_00893dc0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x30);
  *param_2 = &PTR_FUN_009976f0;
  if (plVar2 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      param_2[6] = param_2 + 2;
                    /* WARNING: Could not recover jumptable at 0x00893e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
      return;
    }
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    param_2[6] = uVar1;
  }
  return;
}


// ===== 00893e34  FUN_00893e34 =====

void FUN_00893e34(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x30);
  plVar2 = (long *)(param_1 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = 5;
    plVar2 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00893e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 00893e6c  FUN_00893e6c =====

void FUN_00893e6c(void *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)((long)param_1 + 0x30);
  plVar2 = (long *)((long)param_1 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00893eac;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_00893eac:
  operator_delete(param_1);
  return;
}


// ===== 00893ebc  FUN_00893ebc =====

void FUN_00893ebc(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00893ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,*param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00785754();
}


// ===== 00893ee0  FUN_00893ee0 =====

long FUN_00893ee0(long param_1,long param_2)

{
  param_1 = param_1 + 0x10;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099eb48) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00893efc  FUN_00893efc =====

undefined * FUN_00893efc(void)

{
  return PTR_typeinfo_0099eb50;
}


// ===== 00893f08  FUN_00893f08 =====

void FUN_00893f08(void)

{
  return;
}


// ===== 00893f0c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00893f10  FUN_00893f10 =====

void FUN_00893f10(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00997770;
  puVar1[1] = uVar2;
  return;
}


// ===== 00893f44  FUN_00893f44 =====

void FUN_00893f44(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00997770;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return;
}


// ===== 00893f5c  FUN_00893f5c =====

void FUN_00893f5c(void)

{
  return;
}


// ===== 00893f60  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00893f64  FUN_00893f64 =====

void FUN_00893f64(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_009977f0;
  uVar2 = *(undefined8 *)(param_2 + 8);
  param_1[1] = puVar1;
  puVar1[3] = uVar2;
  *param_1 = puVar1 + 3;
  return;
}


// ===== 00893fac  FUN_00893fac =====

long FUN_00893fac(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099eb58) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00893fc8  FUN_00893fc8 =====

undefined * FUN_00893fc8(void)

{
  return PTR_typeinfo_0099eb60;
}


// ===== 00893fd4  FUN_00893fd4 =====

void FUN_00893fd4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009977f0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00893fe4  FUN_00893fe4 =====

void FUN_00893fe4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009977f0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00894014  FUN_00894014 =====

void FUN_00894014(void)

{
  return;
}


// ===== 00894018  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0089401c  FUN_0089401c =====

void FUN_0089401c(long param_1)

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


// ===== 0089406c  FUN_0089406c =====

void FUN_0089406c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00997850;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0089407c  FUN_0089407c =====

void FUN_0089407c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00997850;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008940ac  FUN_008940ac =====

void FUN_008940ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008940b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008940b8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008940bc  FUN_008940bc =====

void FUN_008940bc(long param_1)

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


// ===== 0089410c  FUN_0089410c =====

void FUN_0089410c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009978a0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0089411c  FUN_0089411c =====

void FUN_0089411c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009978a0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0089414c  FUN_0089414c =====

void FUN_0089414c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00894154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00894158  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0089415c  FUN_0089415c =====

void FUN_0089415c(long *param_1)

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


// ===== 00894214  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGCircleComponentNameEEEENS0_16RNSVGCirclePropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGCircleComponentNameEEEENS0_16RNSVGCirclePropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1,ComponentDescriptorParameters *param_2)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ComponentDescriptor *this;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  undefined4 local_1500 [2];
  undefined8 *local_14f8;
  void *local_14f0;
  void *pvStack_14e8;
  undefined8 local_14e0;
  void *pvStack_14d8;
  void *local_14d0;
  undefined8 uStack_14c8;
  void *local_14c0;
  void *pvStack_14b8;
  undefined8 uStack_14b0;
  undefined8 uStack_14a8;
  undefined *local_14a0;
  undefined8 uStack_1498;
  undefined8 local_1490;
  undefined8 uStack_1488;
  undefined4 local_1480 [2];
  undefined8 local_1478;
  undefined8 uStack_1470;
  undefined8 local_1468;
  undefined8 uStack_1460;
  undefined4 local_1458;
  undefined4 local_1450;
  undefined1 local_144c;
  undefined8 local_144b;
  undefined8 local_1443;
  undefined8 uStack_143b;
  undefined8 local_1433;
  undefined8 uStack_142b;
  undefined8 local_1423;
  undefined8 uStack_141b;
  undefined8 local_1413;
  undefined6 uStack_140b;
  undefined2 uStack_1405;
  undefined6 uStack_1403;
  undefined8 uStack_13fd;
  undefined4 local_13f5;
  undefined8 local_13f1;
  undefined1 local_13e9;
  undefined1 uStack_13e8;
  undefined7 uStack_13e7;
  undefined8 uStack_13e0;
  undefined8 uStack_13d8;
  undefined8 uStack_13d0;
  undefined8 local_13c8;
  undefined8 uStack_13c0;
  undefined8 local_13b8;
  undefined8 uStack_13b0;
  undefined8 local_13a8;
  undefined8 uStack_13a0;
  undefined8 local_1398;
  undefined8 uStack_1390;
  undefined8 uStack_1388;
  undefined8 local_1380;
  undefined8 local_1378;
  undefined8 uStack_1370;
  undefined8 local_1368;
  undefined4 uStack_1360;
  undefined4 uStack_135c;
  undefined4 uStack_1358;
  undefined4 uStack_1354;
  undefined4 uStack_1350;
  undefined4 uStack_134c;
  undefined8 local_1348;
  undefined8 uStack_1340;
  undefined4 local_1338;
  undefined1 local_1334;
  undefined4 local_1330;
  undefined1 local_132c;
  undefined4 local_1328;
  undefined1 local_1324;
  undefined4 local_1320;
  undefined1 local_131c;
  undefined4 local_1318;
  undefined1 local_1314;
  undefined4 local_1310;
  undefined1 local_130c;
  undefined4 local_1308;
  undefined1 local_1304;
  undefined4 local_1300;
  undefined1 local_12fc;
  undefined4 local_12f8;
  undefined1 local_12f4;
  undefined4 local_12f0;
  undefined1 local_12ec;
  undefined4 local_12e8;
  undefined1 local_12e4;
  undefined4 local_12e0;
  undefined1 local_12dc;
  undefined4 local_12d8;
  undefined1 local_12d4;
  undefined4 local_12d0;
  undefined1 local_12cc;
  undefined4 local_12c8;
  undefined1 local_12c4;
  undefined4 local_12c0;
  undefined1 local_12bc;
  undefined1 local_12b8;
  undefined1 local_12b4;
  undefined1 local_12a8;
  undefined8 local_12a0;
  undefined8 uStack_1298;
  undefined8 uStack_1290;
  undefined8 uStack_1288;
  undefined8 local_1280;
  undefined8 uStack_1278;
  undefined8 uStack_1270;
  undefined1 uStack_1268;
  undefined7 local_1267;
  undefined1 uStack_1260;
  undefined8 uStack_125f;
  undefined8 local_1254;
  undefined8 uStack_124c;
  undefined8 uStack_1244;
  undefined8 uStack_123c;
  undefined8 local_1234;
  undefined8 uStack_122c;
  undefined8 uStack_1224;
  undefined8 uStack_121c;
  undefined8 local_1214;
  undefined8 uStack_120c;
  undefined8 uStack_1204;
  undefined5 uStack_11fc;
  undefined3 local_11f7;
  undefined5 uStack_11f4;
  undefined1 local_11ec;
  undefined1 local_11e8;
  undefined1 local_11e4;
  undefined1 local_11e0;
  undefined1 local_11dc;
  undefined1 local_11d8;
  undefined1 local_11c0;
  undefined8 local_11b8;
  undefined8 uStack_11b0;
  undefined8 local_11a8;
  undefined4 local_11a0;
  undefined1 local_119c;
  undefined4 local_119b;
  undefined1 local_1197;
  undefined1 local_1196;
  undefined8 local_1190;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
  undefined8 uStack_1178;
  undefined8 local_1170;
  undefined7 uStack_1168;
  undefined4 uStack_1161;
  undefined8 local_115c;
  undefined1 local_1154;
  undefined1 local_114c;
  undefined1 local_1148;
  undefined1 local_1140;
  undefined1 local_113c;
  undefined1 local_1134;
  undefined1 local_1130;
  undefined1 local_1128;
  undefined1 local_1124;
  undefined1 local_111c;
  undefined1 local_1118;
  undefined1 local_1110;
  undefined1 local_110c;
  undefined1 local_1104;
  undefined1 local_1100;
  undefined1 local_10f8;
  undefined1 local_10f4;
  undefined1 local_10ec;
  undefined1 local_10e8;
  undefined1 local_10e0;
  undefined1 local_10dc;
  undefined1 local_10d4;
  undefined1 local_10d0;
  undefined1 local_10c8;
  undefined1 local_10c4;
  undefined1 local_10bc;
  undefined1 local_10b8;
  undefined1 local_10b4;
  undefined1 local_10b0;
  undefined1 local_10ac;
  undefined1 local_10a8;
  undefined1 local_10a4;
  undefined1 local_10a0;
  undefined1 local_109c;
  undefined1 local_1098;
  undefined1 local_1094;
  undefined1 local_1090;
  undefined1 local_108c;
  undefined1 local_1088;
  undefined1 local_1084;
  undefined1 local_1080;
  undefined1 local_107c;
  undefined1 local_1078;
  undefined1 local_1074;
  undefined1 local_1070;
  undefined1 local_106c;
  undefined1 local_1068;
  undefined1 local_1064;
  undefined1 local_1060;
  undefined1 local_105c;
  undefined8 local_1058;
  undefined8 uStack_1050;
  undefined8 local_1048;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  undefined8 uStack_1030;
  undefined2 local_1028;
  undefined8 local_1024;
  undefined1 local_101c;
  undefined8 local_1018;
  undefined8 local_1010;
  undefined8 uStack_1008;
  undefined1 local_1000;
  undefined8 local_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined8 local_fd8;
  undefined8 uStack_fd0;
  undefined8 uStack_fc8;
  undefined8 uStack_fc0;
  undefined8 local_fb8;
  undefined8 uStack_fb0;
  undefined8 uStack_fa8;
  undefined8 uStack_fa0;
  undefined8 local_f98;
  undefined8 uStack_f90;
  undefined8 uStack_f88;
  undefined8 uStack_f80;
  undefined8 local_f78;
  undefined8 uStack_f70;
  undefined8 uStack_f68;
  undefined8 uStack_f60;
  undefined8 local_f58;
  undefined8 uStack_f50;
  undefined8 local_f48;
  undefined8 uStack_f40;
  undefined8 local_f38;
  undefined8 uStack_f30;
  undefined8 local_f28;
  undefined8 uStack_f20;
  undefined8 local_f18;
  undefined8 uStack_f10;
  undefined8 local_f08;
  undefined6 uStack_f00;
  undefined2 uStack_efa;
  undefined6 uStack_ef8;
  undefined1 local_ef0;
  undefined1 local_eec;
  undefined1 local_ee8;
  undefined8 local_ee4;
  undefined8 uStack_edc;
  undefined1 local_ed4;
  undefined8 local_ed0;
  undefined2 local_ec8;
  undefined1 local_ec6;
  undefined4 local_ec4;
  undefined1 local_ec0;
  undefined1 local_e60;
  undefined1 local_e58;
  undefined1 local_df8;
  undefined4 local_df0;
  undefined2 local_dec;
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
  undefined8 local_dc0;
  undefined8 uStack_db8;
  undefined8 local_db0;
  undefined4 local_da8;
  undefined8 local_da0;
  undefined8 uStack_d98;
  undefined8 local_d90;
  undefined8 uStack_d88;
  undefined8 local_d80;
  undefined8 uStack_d78;
  undefined8 local_d70;
  undefined8 uStack_d68;
  undefined8 local_d60;
  undefined8 uStack_d58;
  undefined8 local_d50;
  undefined8 uStack_d48;
  undefined8 local_d40;
  undefined8 uStack_d38;
  undefined8 local_d30;
  undefined8 uStack_d28;
  undefined8 local_d20;
  undefined5 uStack_d18;
  undefined3 uStack_d13;
  undefined5 uStack_d10;
  undefined8 local_d08;
  undefined8 uStack_d00;
  undefined8 local_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined4 local_cd8;
  undefined4 local_cd0;
  undefined8 local_cc8;
  undefined8 local_ca0;
  undefined4 local_c98;
  undefined8 local_c90;
  undefined4 local_c68;
  undefined4 local_c60;
  undefined8 local_c58;
  undefined8 local_c30;
  undefined4 local_c28;
  undefined8 local_c20;
  undefined8 local_bf8;
  undefined4 local_bf0;
  undefined8 local_be8;
  undefined8 uStack_be0;
  undefined8 local_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined4 local_bb8;
  undefined8 local_bb0;
  undefined4 local_b88;
  undefined8 local_b80;
  undefined4 local_b58;
  undefined8 local_b50;
  undefined4 local_b28 [2];
  undefined8 local_b20;
  undefined8 uStack_b18;
  undefined8 local_b10;
  undefined8 local_b08;
  undefined8 uStack_b00;
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
  undefined4 local_d0 [2];
  undefined8 local_c8;
  undefined4 local_a0;
  void *local_98;
  void *pvStack_90;
  undefined8 local_88;
  void *pvStack_80;
  void *local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this = (ComponentDescriptor *)operator_new(0x88);
  pvStack_14d8 = (void *)0x0;
  local_14e0 = 0;
  uStack_14c8 = 0;
  local_14d0 = (void *)0x0;
  pvStack_14b8 = (void *)0x0;
  local_14c0 = (void *)0x0;
  uStack_14a8 = 0;
  uStack_14b0 = 0;
  pvStack_14e8 = (void *)0x0;
  local_14f0 = (void *)0x0;
                    /* try { // try from 00894268 to 00894273 has its CatchHandler @ 00894954 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_14f0);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_00997928;
  local_f0 = 0;
  local_e8 = 0;
  local_e0[0] = 0;
  local_d0[0] = 0;
  local_c8 = 0;
  local_a0 = 0;
  pvStack_90 = (void *)0x0;
  local_98 = (void *)0x0;
  pvStack_80 = (void *)0x0;
  local_88 = 0;
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
                    /* try { // try from 008942e4 to 008942f7 has its CatchHandler @ 00894984 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_1500[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_14f8 = &local_1b0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this + 0x38);
  memset(local_1480,0,0x958);
  local_b28[0] = 5;
  local_b10 = 0;
  local_14a0 = *(undefined **)(PTR_VTT_0099f048 + 0x20);
  local_1480[0] = 5;
  uStack_1488 = 0;
  local_1490 = 0;
  local_b08 = 0;
  uStack_1498 = 0;
  uStack_b00 = 0x3f800000;
  uStack_b18 = 0;
  local_b20 = 0;
  uStack_1470 = 0;
  local_1478 = 0;
  uStack_1460 = 0;
  local_1468 = 0;
  local_1458 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_b28);
  local_1450 = 0x10410710;
  local_144c = 0;
  uStack_1360 = 0;
  local_1368 = 0;
  uStack_134c = 0;
  uStack_1370 = 0;
  local_1378 = 0;
  uStack_13e7 = 0;
  uStack_143b = 0;
  local_1443 = 0;
  local_144b = _s__00375408;
  uStack_142b = 0;
  local_1433 = 0;
  uStack_1008 = _UNK_00371598;
  local_1010 = _DAT_00371590;
  uStack_141b = 0;
  local_1423 = 0;
  uStack_140b = 0;
  local_1413 = 0;
  uStack_f10 = _UNK_00488920;
  local_f18 = _DAT_00488918;
  uStack_f20 = _UNK_00488910;
  local_f28 = _DAT_00488908;
  local_13f5 = 0x40004;
  uStack_1354 = 0;
  uStack_1350 = 0;
  uStack_135c = 0;
  uStack_1358 = 0;
  uStack_1340 = 0;
  local_1348 = 0;
  local_1338 = 0x7fc00000;
  local_1330 = 0x7fc00000;
  local_1328 = 0x7fc00000;
  local_1320 = 0x7fc00000;
  local_1318 = 0x7fc00000;
  local_1310 = 0x7fc00000;
  local_1308 = 0x7fc00000;
  local_1300 = 0x7fc00000;
  local_12f8 = 0x7fc00000;
  local_12f0 = 0x7fc00000;
  local_12e8 = 0x7fc00000;
  local_12e0 = 0x7fc00000;
  local_12d8 = 0x7fc00000;
  local_12d0 = 0x7fc00000;
  local_12c8 = 0x7fc00000;
  local_12c0 = 0x7fc00000;
  uStack_125f = 0;
  uStack_1260 = 0;
  uStack_124c = 0;
  local_1254 = 0;
  uStack_123c = 0;
  uStack_1244 = 0;
  uStack_122c = 0;
  local_1234 = 0;
  uStack_121c = 0;
  uStack_1224 = 0;
  uStack_120c = 0;
  local_1214 = 0;
  uStack_11fc = 0;
  uStack_1204 = 0;
  local_11f7 = 0;
  uStack_11f4 = 0;
  local_119c = 1;
  local_119b = 0;
  local_1196 = 0x23;
  local_115c = 0x3f800000;
  uStack_1040 = 0;
  local_1048 = 0;
  uStack_1030 = 0;
  uStack_1038 = 0;
  uStack_1050 = 0;
  local_1058 = 0;
  uStack_f30 = _UNK_00488900;
  local_f38 = _DAT_004888f8;
  local_1024 = 0;
  uStack_f40 = _UNK_004888f0;
  local_f48 = _DAT_004888e8;
  uStack_ff0 = 0;
  local_ff8 = 0;
  uStack_fe0 = 0;
  uStack_fe8 = 0;
  uStack_fd0 = 0;
  local_fd8 = 0;
  uStack_fc0 = 0;
  uStack_fc8 = 0;
  uStack_fb0 = 0;
  local_fb8 = 0;
  uStack_fa0 = 0;
  uStack_fa8 = 0;
  uStack_f90 = 0;
  local_f98 = 0;
  uStack_f80 = 0;
  uStack_f88 = 0;
  uStack_f70 = 0;
  local_f78 = 0;
  uStack_f60 = 0;
  uStack_f68 = 0;
  uStack_f50 = 0;
  local_f58 = 0;
  uStack_ef8 = 0;
  uStack_f00 = 0;
  uStack_efa = 0;
  local_f08 = 0;
  uStack_13fd = 0;
  uStack_1405 = 0;
  uStack_1403 = 0;
  local_13f1 = 0;
  local_13e9 = 0;
  uStack_13e8 = 0;
  uStack_13d8 = 0;
  uStack_13e0 = 0;
  local_13c8 = 0;
  uStack_13d0 = 0;
  local_13b8 = 0;
  uStack_13c0 = 0;
  local_13a8 = 0;
  uStack_13b0 = 0;
  local_1398 = 0;
  uStack_13a0 = 0;
  uStack_1388 = 0;
  uStack_1390 = 0;
  local_1380 = 0;
  local_1334 = 0;
  local_132c = 0;
  local_1324 = 0;
  local_131c = 0;
  local_1314 = 0;
  local_130c = 0;
  local_1304 = 0;
  local_12fc = 0;
  local_12f4 = 0;
  local_12ec = 0;
  local_12e4 = 0;
  local_12dc = 0;
  local_12d4 = 0;
  local_12cc = 0;
  local_12c4 = 0;
  local_12bc = 0;
  local_12b8 = 0;
  local_12b4 = 0;
  local_12a8 = 0;
  local_11ec = 0;
  local_11e8 = 0;
  local_11e4 = 0;
  local_11e0 = 0;
  local_11dc = 0;
  local_11d8 = 0;
  local_11c0 = 0;
  uStack_1298 = 0;
  local_12a0 = 0;
  uStack_1288 = 0;
  uStack_1290 = 0;
  uStack_1278 = 0;
  local_1280 = 0;
  uStack_1268 = 0;
  local_1267 = 0;
  uStack_1270 = 0;
  uStack_11b0 = 0;
  local_11b8 = 0;
  local_11a8 = 0;
  local_11a0 = 0;
  local_1197 = 0;
  uStack_1188 = 0;
  local_1190 = 0;
  uStack_1178 = 0;
  uStack_1180 = 0;
  uStack_1168 = 0;
  uStack_1161 = 0;
  local_1170 = 0;
  local_1154 = 0;
  local_114c = 0;
  local_1148 = 0;
  local_1140 = 0;
  local_113c = 0;
  local_1134 = 0;
  local_1130 = 0;
  local_1128 = 0;
  local_1124 = 0;
  local_111c = 0;
  local_1118 = 0;
  local_1110 = 0;
  local_110c = 0;
  local_1104 = 0;
  local_1100 = 0;
  local_10f8 = 0;
  local_10f4 = 0;
  local_10ec = 0;
  local_10e8 = 0;
  local_10e0 = 0;
  local_10dc = 0;
  local_10d4 = 0;
  local_10d0 = 0;
  local_10c8 = 0;
  local_10c4 = 0;
  local_10bc = 0;
  local_10b8 = 0;
  local_10b4 = 0;
  local_10b0 = 0;
  local_10ac = 0;
  local_10a8 = 0;
  local_10a4 = 0;
  local_10a0 = 0;
  local_109c = 0;
  local_1098 = 0;
  local_1094 = 0;
  local_1090 = 0;
  local_108c = 0;
  local_1088 = 0;
  local_1084 = 0;
  local_1080 = 0;
  local_107c = 0;
  local_1078 = 0;
  local_1074 = 0;
  local_1070 = 0;
  local_106c = 0;
  local_1068 = 0;
  local_1064 = 0;
  local_1060 = 0;
  local_105c = 0;
  local_1018 = 0;
  local_1028 = 0;
  local_101c = 0;
  local_1000 = 0;
  local_ef0 = 0;
  local_eec = 0;
  local_ee8 = 0;
  local_ed0 = 0;
  uStack_edc = 0;
  local_ee4 = 0;
  local_ed4 = 0;
  local_ec8 = 0x101;
  local_ec6 = 0;
  local_ec4 = 0;
  local_ec0 = 0;
  local_e60 = 0;
  local_e58 = 0;
  local_df8 = 0;
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
  local_dec = 0;
  local_df0 = 0;
  local_14a0 = PTR_vtable_0099f040 + 0x20;
  local_db0 = 0;
  uStack_d10 = 0;
  uStack_cf0 = 0;
  local_cf8 = 0;
  uStack_ce0 = 0;
  uStack_ce8 = 0;
  uStack_d00 = 0;
  local_d08 = 0;
  uStack_db8 = 0;
  local_dc0 = 0;
  local_ca0 = 0x13f800000;
  local_da8 = 0x3f800000;
  local_cd0 = 0;
  local_cc8 = 0;
  uStack_d98 = 0;
  local_da0 = 0;
  uStack_d88 = 0;
  local_d90 = 0;
  uStack_d78 = 0;
  local_d80 = 0;
  uStack_d68 = 0;
  local_d70 = 0;
  uStack_d58 = 0;
  local_d60 = 0;
  uStack_d48 = 0;
  local_d50 = 0;
  uStack_d38 = 0;
  local_d40 = 0;
  uStack_d28 = 0;
  local_d30 = 0;
  uStack_d18 = 0;
  uStack_d13 = 0;
  local_d20 = 0;
  local_cd8 = 0;
  local_c98 = 0;
  local_c90 = 0;
  local_c68 = 0x3f800000;
  local_c60 = 0;
  local_c58 = 0;
  local_c30 = 0;
  local_c28 = 0;
  local_c20 = 0;
  local_bf8 = 0;
  local_bf0 = 0;
  local_bb0 = 0;
  local_b88 = 0;
  local_b80 = 0;
  local_b58 = 0;
  local_b50 = 0;
  uStack_bd0 = 0;
  local_bd8 = 0;
  uStack_bc0 = 0;
  uStack_bc8 = 0;
  uStack_be0 = 0;
  local_be8 = 0;
  local_bb8 = 0;
                    /* try { // try from 00894794 to 008947a7 has its CatchHandler @ 00894984 */
  facebook::react::RNSVGCircleProps::RNSVGCircleProps
            ((RNSVGCircleProps *)local_b28,(PropsParserContext *)local_1500,
             (RNSVGCircleProps *)&local_14a0,(RawProps *)&local_f8);
  FUN_00895448(local_b28);
  FUN_00895448(&local_14a0);
  facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(this + 0x38);
  pvVar3 = local_120;
  puVar4 = (undefined8 *)local_110;
  while (puVar4 != (undefined8 *)0x0) {
    plVar6 = (long *)puVar4[6];
    pvVar7 = (void *)*puVar4;
    local_120 = pvVar3;
    if ((plVar6 == (long *)0x0) || (lVar5 = FUN_00757990(0xffffffffffffffff,plVar6 + 1), lVar5 != 0)
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
  pvVar7 = pvStack_80;
  pvVar3 = local_78;
  if (pvStack_80 != (void *)0x0) {
    while (pvVar3 != pvVar7) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 008948ac to 008948b7 has its CatchHandler @ 00894988 */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_14a0,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_78 = pvVar7;
    operator_delete(pvStack_80);
  }
  if (local_98 != (void *)0x0) {
    pvStack_90 = local_98;
    operator_delete(local_98);
  }
  folly::dynamic::folly::dynamic::destroy(local_d0);
  facebook::jsi::Value::~Value((Value *)local_e0);
  if (local_14c0 != (void *)0x0) {
    pvStack_14b8 = local_14c0;
    operator_delete(local_14c0);
  }
  if (pvStack_14d8 != (void *)0x0) {
    local_14d0 = pvStack_14d8;
    operator_delete(pvStack_14d8);
  }
  if (local_14f0 != (void *)0x0) {
    pvStack_14e8 = local_14f0;
    operator_delete(local_14f0);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0089498c  FUN_0089498c =====

void FUN_0089498c(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 008949b0  FUN_008949b0 =====

undefined * FUN_008949b0(void)

{
  return PTR_RNSVGCircleComponentName_0099f038;
}


// ===== 008949bc  FUN_008949bc =====

undefined * FUN_008949bc(void)

{
  return PTR_RNSVGCircleComponentName_0099f038;
}


// ===== 008949c8  FUN_008949c8 =====

undefined8 FUN_008949c8(void)

{
  return 0x61;
}


// ===== 008949d0  FUN_008949d0 =====

void FUN_008949d0(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  RNSVGLayoutableShadowNode *pRVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  uVar3 = (**(code **)(*param_2 + 0x20))();
  puVar4 = (undefined8 *)operator_new(0x400);
  pRVar1 = (RNSVGLayoutableShadowNode *)(puVar4 + 3);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_009979b8;
                    /* try { // try from 00894a3c to 00894a4b has its CatchHandler @ 00894ab0 */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode
            (pRVar1,param_3,param_4,uVar3);
  lVar5 = *param_2;
  puVar4[3] = &PTR_FUN_00997a08;
                    /* try { // try from 00894a64 to 00894a6f has its CatchHandler @ 00894aa0 */
  (**(code **)(lVar5 + 0x60))(param_2,pRVar1);
  *param_1 = pRVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00894ae0  FUN_00894ae0 =====

void FUN_00894ae0(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

{
  RNSVGLayoutableShadowNode *pRVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  RNSVGLayoutableShadowNode *local_78;
  long *local_70;
  RNSVGLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)operator_new(0x400);
  pRVar1 = (RNSVGLayoutableShadowNode *)(plVar3 + 3);
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_009979b8;
                    /* try { // try from 00894b38 to 00894b47 has its CatchHandler @ 00894c14 */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode(pRVar1,param_3,param_4);
  plVar3[3] = (long)&PTR_FUN_00997a08;
  local_68 = pRVar1;
  local_60 = plVar3;
                    /* try { // try from 00894b58 to 00894b67 has its CatchHandler @ 00894c2c */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pRVar1,param_3,param_4);
  local_78 = pRVar1;
  local_70 = plVar3;
  FUN_00757d00(1,plVar3 + 1);
                    /* try { // try from 00894b78 to 00894b87 has its CatchHandler @ 00894c04 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar3 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar4 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pRVar1 = local_68;
                    /* try { // try from 00894bc4 to 00894bcf has its CatchHandler @ 00894c2c */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pRVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00894c54  FUN_00894c54 =====

void FUN_00894c54(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00894c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 00894c68  FUN_00894c68 =====

void FUN_00894c68(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNSVGCircleProps *this;
  uint uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  char *pcVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  char *pcVar9;
  dynamic *pdVar10;
  long lVar11;
  RNSVGCircleProps *pRVar12;
  undefined1 uStack_d1;
  dynamic local_d0 [32];
  dynamic *local_b0;
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar7 = facebook::react::RawProps::isEmpty(), (uVar7 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGCircleComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGCirclePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb70
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGCircleComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGCirclePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb70
                                   ), iVar6 != 0)) {
                    /* try { // try from 0089509c to 0089509f has its CatchHandler @ 008950cc */
      FUN_00895824();
      __cxa_atexit(FUN_008959b8,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGCircleComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGCirclePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb68
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGCircleComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGCirclePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb70
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGCircleComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGCirclePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb68
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGCircleComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGCirclePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb68
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNSVGCircleProps *)*param_4;
    if (pRVar12 == (RNSVGCircleProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGCircleComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGCirclePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb70
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGCircleComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGCirclePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb70
                                     ), iVar6 != 0)) {
                    /* try { // try from 0089501c to 0089501f has its CatchHandler @ 008950e4 */
        FUN_00895824();
        __cxa_atexit(FUN_008959b8,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGCircleComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGCirclePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb68
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGCircleComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGCirclePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb70
                           );
      }
      pRVar12 = *(RNSVGCircleProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGCircleComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGCirclePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb68
      ;
    }
    plVar8 = (long *)operator_new(0x990);
    this = (RNSVGCircleProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_00997b20;
                    /* try { // try from 00894d48 to 00894d5b has its CatchHandler @ 00895158 */
    facebook::react::RNSVGCircleProps::RNSVGCircleProps(this,param_3,pRVar12,param_5);
                    /* try { // try from 00894d60 to 00894d73 has its CatchHandler @ 00895170 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_00894d9c:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGCircleComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGCirclePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb70
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGCircleComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGCirclePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb70
                                       ), iVar6 != 0)) {
                    /* try { // try from 0089505c to 0089505f has its CatchHandler @ 008950d0 */
          FUN_00895824();
          __cxa_atexit(FUN_008959b8,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGCircleComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGCirclePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb68
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGCircleComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGCirclePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb70
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00894e04 to 00894e17 has its CatchHandler @ 008950fc */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGCircleComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGCirclePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb68
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_00894e50:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_00894e50;
        }
        if (plVar8 != (long *)0x0) goto LAB_00894e64;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00894db8 to 00894dcb has its CatchHandler @ 00895124 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_00894e64;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_00894e64:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 00894d80 to 00894d8b has its CatchHandler @ 008950f8 */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNSVGCircleComponentName_0099f038,pcVar9);
      if (iVar6 != 0) goto LAB_00894d9c;
      bVar3 = false;
    }
                    /* try { // try from 00894e90 to 00894e93 has its CatchHandler @ 00895170 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 00894ea0 to 00894ebb has its CatchHandler @ 00895120 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00894ffc to 0089500b has its CatchHandler @ 00895118 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_008951bc;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00894fdc to 00894feb has its CatchHandler @ 0089517c */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_008951bc;
        }
        uVar1 = 0x811c9dc5;
        uVar7 = (ulong)(*(byte *)(plVar4 + 3) >> 1);
        pcVar5 = (char *)((long)plVar4 + 0x19);
        pcVar9 = (char *)((long)plVar4 + 0x19);
        if ((*(byte *)(plVar4 + 3) & 1) != 0) {
          uVar7 = plVar4[4];
          pcVar5 = (char *)plVar4[5];
          pcVar9 = (char *)plVar4[5];
        }
        for (; uVar7 != 0; uVar7 = uVar7 - 1) {
          uVar1 = (uVar1 ^ (int)*pcVar5) * 0x1000193;
          pcVar5 = pcVar5 + 1;
        }
                    /* try { // try from 00894f3c to 00894f47 has its CatchHandler @ 00895184 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 00894f4c to 00894f63 has its CatchHandler @ 00895188 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 00894f74 to 00894f7f has its CatchHandler @ 00895178 */
          (*(code *)(&PTR_FUN_0098f088)[local_a0])(&uStack_d1,local_d0);
        }
      }
      folly::dynamic::folly::dynamic::destroy(local_98);
    }
    param_1[1] = plVar8;
    *param_1 = this;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_008951bc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008951c0  FUN_008951c0 =====

void FUN_008951c0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008951c8  FUN_008951c8 =====

void FUN_008951c8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008951d0  FUN_008951d0 =====

void FUN_008951d0(undefined8 *param_1,long param_2,long param_3)

{
  ShadowNodeFamily *pSVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ShadowNodeFamily *local_88;
  long *local_80;
  undefined8 local_78;
  long *local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_0078a610(&local_58,&local_68,param_3 + 8,param_3 + 4);
                    /* try { // try from 00895214 to 0089521b has its CatchHandler @ 0089541c */
  plVar6 = (long *)operator_new(0x68);
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_00992a08;
                    /* try { // try from 00895234 to 0089523f has its CatchHandler @ 00895404 */
  local_78 = FUN_008707fc(plVar6 + 3,&local_58,param_2 + 8);
  local_70 = plVar6;
  if ((local_50 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar7 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 00895274 to 0089527b has its CatchHandler @ 008953f4 */
  plVar6 = (long *)operator_new(0x1a0);
  puVar3 = PTR_DAT_0099dca0;
  pSVar1 = (ShadowNodeFamily *)(plVar6 + 4);
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)(puVar3 + 0x10);
  local_58 = local_78;
  local_50 = local_70;
  if (local_70 != (long *)0x0) {
    FUN_00757d00(1,local_70 + 1);
  }
  local_68 = *(undefined8 *)(param_2 + 8);
  local_60 = *(long *)(param_2 + 0x10);
  if (local_60 != 0) {
    FUN_00757d00(1,local_60 + 0x10);
  }
                    /* try { // try from 008952c8 to 008952df has its CatchHandler @ 008953c4 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar1,param_3,&local_58,&local_68,param_2);
  if (local_60 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  uVar4 = local_78;
  *param_1 = pSVar1;
  param_1[1] = plVar6;
  local_88 = pSVar1;
  local_80 = plVar6;
  FUN_00757d00(1,plVar6 + 2);
                    /* try { // try from 00895334 to 0089533f has its CatchHandler @ 008953a4 */
  facebook::react::EventEmitter::facebook::react::EventEmitter::setShadowNodeFamily(uVar4,&local_88)
  ;
  if (local_80 != (long *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00895444  FUN_00895444 =====

void FUN_00895444(void)

{
  return;
}


// ===== 00895448  FUN_00895448 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00895448(long param_1)

{
  byte bVar1;
  void *pvVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x948);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x918);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x8e8);
  if ((*(byte *)(param_1 + 0x8d0) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x8e0));
  }
  pbVar4 = *(byte **)(param_1 + 0x8b8);
  if (pbVar4 != (byte *)0x0) {
    pbVar3 = *(byte **)(param_1 + 0x8c0);
    pbVar5 = pbVar4;
    if (pbVar3 != pbVar4) {
      do {
        pbVar5 = pbVar3 + -0x18;
        if ((*pbVar5 & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + -8));
        }
        pbVar3 = pbVar5;
      } while (pbVar5 != pbVar4);
      pbVar5 = *(byte **)(param_1 + 0x8b8);
    }
    *(byte **)(param_1 + 0x8c0) = pbVar4;
    operator_delete(pbVar5);
  }
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x878);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x840);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x808);
  folly::dynamic::folly::dynamic::destroy(param_1 + 2000);
  if ((*(byte *)(param_1 + 0x7b0) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x798);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x7c0));
    bVar1 = *(byte *)(param_1 + 0x798);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x778);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x7a8));
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
    bVar1 = *(byte *)(param_1 + 0x730);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x758));
    bVar1 = *(byte *)(param_1 + 0x730);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x718);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x740));
    bVar1 = *(byte *)(param_1 + 0x718);
  }
  if ((bVar1 & 1) == 0) {
    pvVar2 = *(void **)(param_1 + 0x700);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x728));
    pvVar2 = *(void **)(param_1 + 0x700);
  }
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x708) = pvVar2;
    operator_delete(pvVar2);
  }
  if ((*(byte *)(param_1 + 0x6e0) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x6f0));
  }
  FUN_0078917c(param_1,PTR_VTT_0099f048 + 8);
  return;
}


// ===== 008955dc  FUN_008955dc =====

void FUN_008955dc(long param_1)

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


// ===== 0089562c  FUN_0089562c =====

void FUN_0089562c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009979b8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0089563c  FUN_0089563c =====

void FUN_0089563c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009979b8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0089566c  FUN_0089566c =====

void FUN_0089566c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00895674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00895678  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0089567c  FUN_0089567c =====

void FUN_0089567c(long *param_1)

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


// ===== 0089573c  FUN_0089573c =====

void FUN_0089573c(long param_1)

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


// ===== 008957a4  FUN_008957a4 =====

bool FUN_008957a4(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


