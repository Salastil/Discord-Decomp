// ===== 00183610  FUN_00183610 =====

void FUN_00183610(undefined8 *param_1,ulong param_2,PropsParserContext *param_3,long *param_4,
                 RawPropsParser *param_5)

{
  RNSScreenStackProps *this;
  uint uVar1;
  long lVar2;
  bool bVar3;
  RawValue *pRVar4;
  long *plVar5;
  RawValue *pRVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  char *__s2;
  dynamic *pdVar10;
  long lVar11;
  RNSScreenStackProps *pRVar12;
  undefined1 uStack_d1;
  dynamic local_d0 [32];
  dynamic *local_b0;
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar8 = facebook::react::RawProps::isEmpty(), (uVar8 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27RNSScreenStackComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19RNSScreenStackPropsENS0_26RNSScreenStackEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ae8
         & 1) == 0) &&
       (param_2 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27RNSScreenStackComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19RNSScreenStackPropsENS0_26RNSScreenStackEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ae8
                                     ), (int)param_2 != 0)) {
                    /* try { // try from 00183a44 to 00183a47 has its CatchHandler @ 00183a74 */
      FUN_00184160();
      __cxa_atexit(FUN_00184110,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27RNSScreenStackComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19RNSScreenStackPropsENS0_26RNSScreenStackEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ae0
                   ,&PTR_LOOP_001e77b0);
      param_2 = __cxa_guard_release(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27RNSScreenStackComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19RNSScreenStackPropsENS0_26RNSScreenStackEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ae8
                                   );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27RNSScreenStackComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19RNSScreenStackPropsENS0_26RNSScreenStackEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ae0
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27RNSScreenStackComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19RNSScreenStackPropsENS0_26RNSScreenStackEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ae0
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      param_2 = FUN_00174090(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::parse(param_5);
    pRVar12 = (RNSScreenStackProps *)*param_4;
    if (pRVar12 == (RNSScreenStackProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27RNSScreenStackComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19RNSScreenStackPropsENS0_26RNSScreenStackEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ae8
           & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27RNSScreenStackComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19RNSScreenStackPropsENS0_26RNSScreenStackEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ae8
                                     ), iVar7 != 0)) {
                    /* try { // try from 001839c4 to 001839c7 has its CatchHandler @ 00183a8c */
        FUN_00184160();
        __cxa_atexit(FUN_00184110,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27RNSScreenStackComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19RNSScreenStackPropsENS0_26RNSScreenStackEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ae0
                     ,&PTR_LOOP_001e77b0);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27RNSScreenStackComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19RNSScreenStackPropsENS0_26RNSScreenStackEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ae8
                           );
      }
      pRVar12 = *(RNSScreenStackProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27RNSScreenStackComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19RNSScreenStackPropsENS0_26RNSScreenStackEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ae0
      ;
    }
    plVar9 = (long *)operator_new(0x700);
    this = (RNSScreenStackProps *)(plVar9 + 3);
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_FUN_001e91a8;
                    /* try { // try from 001836f0 to 00183703 has its CatchHandler @ 00183b00 */
    facebook::react::RNSScreenStackProps::RNSScreenStackProps
              (this,param_3,pRVar12,(RawProps *)param_5);
                    /* try { // try from 00183708 to 0018371b has its CatchHandler @ 00183b18 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid();
    if ((((uVar8 & 1) == 0) ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid
                           (), (uVar8 & 1) == 0)) ||
       (uVar8 = facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid(),
       (uVar8 & 1) == 0)) {
LAB_00183744:
      FUN_00174090(1,plVar9 + 1);
      if ((RawProps *)*param_4 == (RawProps *)0x0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27RNSScreenStackComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19RNSScreenStackPropsENS0_26RNSScreenStackEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ae8
             & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27RNSScreenStackComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19RNSScreenStackPropsENS0_26RNSScreenStackEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ae8
                                       ), iVar7 != 0)) {
                    /* try { // try from 00183a04 to 00183a07 has its CatchHandler @ 00183a78 */
          FUN_00184160();
          __cxa_atexit(FUN_00184110,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27RNSScreenStackComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19RNSScreenStackPropsENS0_26RNSScreenStackEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ae0
                       ,&PTR_LOOP_001e77b0);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27RNSScreenStackComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19RNSScreenStackPropsENS0_26RNSScreenStackEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ae8
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 001837ac to 001837bf has its CatchHandler @ 00183aa4 */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,
                   *(RawProps **)
                    PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27RNSScreenStackComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19RNSScreenStackPropsENS0_26RNSScreenStackEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ae0
                   ,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_001837f8:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_001837f8;
        }
        if (plVar9 != (long *)0x0) goto LAB_0018380c;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00183760 to 00183773 has its CatchHandler @ 00183acc */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,(RawProps *)*param_4,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_0018380c;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_0018380c:
        lVar11 = FUN_001735f0(0xffffffffffffffff,plVar9 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 00183728 to 00183733 has its CatchHandler @ 00183aa0 */
      __s2 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar7 = strcmp(PTR_RNSScreenStackComponentName_001f0c00,__s2);
      if (iVar7 != 0) goto LAB_00183744;
      bVar3 = false;
    }
                    /* try { // try from 00183838 to 0018383b has its CatchHandler @ 00183b18 */
    param_2 = facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter();
    if ((param_2 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 00183848 to 00183863 has its CatchHandler @ 00183ac8 */
        param_2 = folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar9 + 7));
      }
      else {
        param_2 = facebook::react::RawProps::operator_cast_to_dynamic((RawProps *)param_5);
      }
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 001839a4 to 001839b3 has its CatchHandler @ 00183ac0 */
                    /* WARNING: Subroutine does not return */
          FUN_00172ea4(*(undefined8 *)PTR_name_001f09c8);
        }
        goto LAB_00183b64;
      }
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00183984 to 00183993 has its CatchHandler @ 00183b24 */
                    /* WARNING: Subroutine does not return */
            FUN_00172ea4(*(undefined8 *)PTR_name_001f0bb0);
          }
          goto LAB_00183b64;
        }
        uVar1 = 0x811c9dc5;
        uVar8 = (ulong)(*(byte *)(plVar5 + 3) >> 1);
        pRVar6 = (RawValue *)((long)plVar5 + 0x19);
        pRVar4 = (RawValue *)((long)plVar5 + 0x19);
        if ((*(byte *)(plVar5 + 3) & 1) != 0) {
          uVar8 = plVar5[4];
          pRVar6 = (RawValue *)plVar5[5];
          pRVar4 = (RawValue *)plVar5[5];
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          uVar1 = (uVar1 ^ (int)(char)*pRVar6) * 0x1000193;
          pRVar6 = pRVar6 + 1;
        }
                    /* try { // try from 001838e4 to 001838ef has its CatchHandler @ 00183b2c */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 001838f4 to 0018390b has its CatchHandler @ 00183b30 */
        param_2 = facebook::react::HostPlatformViewProps::setProp
                            ((PropsParserContext *)this,(uint)param_3,(char *)(ulong)uVar1,pRVar4);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 0018391c to 00183927 has its CatchHandler @ 00183b20 */
          param_2 = (*(code *)(&PTR_FUN_001e82f8)[local_a0])(&uStack_d1,local_d0);
        }
      }
      param_2 = folly::dynamic::destroy();
    }
    param_1[1] = plVar9;
    *param_1 = this;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_00183b64:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}


// ===== 00183b68  FUN_00183b68 =====

void FUN_00183b68(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00183b70  FUN_00183b70 =====

void FUN_00183b70(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00183b78  FUN_00183b78 =====

void FUN_00183b78(undefined8 *param_1,long param_2,long param_3)

{
  EventEmitter *pEVar1;
  ShadowNodeFamily *pSVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ShadowNodeFamily *local_b0;
  undefined8 *local_a8;
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
  FUN_0017dbe4(&local_a0,param_3 + 8,param_3 + 4);
                    /* try { // try from 00183bbc to 00183bc3 has its CatchHandler @ 00183e9c */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_001e91f8;
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
    FUN_00174090(1,local_78 + 0x10);
  }
                    /* try { // try from 00183c00 to 00183c0f has its CatchHandler @ 00183e70 */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_001e8610;
                    /* try { // try from 00183c1c to 00183c23 has its CatchHandler @ 00183e60 */
  puVar6 = (undefined8 *)operator_new(0x58);
  *puVar6 = &PTR_FUN_001e8630;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[4] = 0;
  puVar6[3] = 0;
  plVar5[0xb] = (long)(puVar6 + 3);
  plVar5[0xc] = (long)puVar6;
  puVar6[6] = 0;
  puVar6[5] = 0;
  puVar6[8] = 0;
  puVar6[7] = 0;
  *(undefined8 *)((long)puVar6 + 0x4c) = 0;
  *(undefined8 *)((long)puVar6 + 0x44) = 0;
  plVar5[3] = (long)&PTR_FUN_001e9248;
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = plStack_98;
  local_90 = pEVar1;
  local_88 = plVar5;
  if ((plStack_98 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_98 + 1), lVar7 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 00183cd0 to 00183cd7 has its CatchHandler @ 00183e50 */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  *puVar6 = &PTR_FUN_001e86f0;
  pSVar2 = (ShadowNodeFamily *)(puVar6 + 4);
  puVar6[1] = 0;
  puVar6[2] = 0;
  local_70 = local_90;
  plStack_68 = local_88;
  if (local_88 != (long *)0x0) {
    FUN_00174090(1,local_88 + 1);
  }
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  if (local_78 != 0) {
    FUN_00174090(1,local_78 + 0x10);
  }
                    /* try { // try from 00183d20 to 00183d37 has its CatchHandler @ 00183e20 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar2,param_3,&local_70,&local_80,param_2);
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pEVar1 = local_90;
  *param_1 = pSVar2;
  param_1[1] = puVar6;
  local_b0 = pSVar2;
  local_a8 = puVar6;
  FUN_00174090(1,puVar6 + 2);
                    /* try { // try from 00183d8c to 00183d97 has its CatchHandler @ 00183e00 */
  facebook::react::EventEmitter::setShadowNodeFamily(pEVar1,&local_b0);
  if (local_a8 != (undefined8 *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00183ec4  FUN_00183ec4 =====

void FUN_00183ec4(void)

{
  return;
}


// ===== 00183ec8  FUN_00183ec8 =====

void FUN_00183ec8(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00183f18  FUN_00183f18 =====

void FUN_00183f18(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e9040;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00183f28  FUN_00183f28 =====

void FUN_00183f28(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e9040;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00183f58  FUN_00183f58 =====

void FUN_00183f58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00183f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00183f64  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 00183f68  FUN_00183f68 =====

void FUN_00183f68(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_001f09e8 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
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
  FUN_00173ffc(param_1 + 0x23);
  FUN_00173f00(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00184028  FUN_00184028 =====

void FUN_00184028(long param_1)

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


// ===== 00184090  FUN_00184090 =====

bool FUN_00184090(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 001840a8  FUN_001840a8 =====

bool FUN_001840a8(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 001840c0  FUN_001840c0 =====

void FUN_001840c0(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00184110  FUN_00184110 =====

void FUN_00184110(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00184160  FUN_00184160 =====

void FUN_00184160(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x700);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_001e9158;
  memset(__s,0,0x6e8);
                    /* try { // try from 0018419c to 001841af has its CatchHandler @ 00184220 */
  FUN_0017cb10(__s,PTR_PTR_001f0c10 + 0x10);
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
  puVar1 = PTR_vtable_001f0c08;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27RNSScreenStackComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19RNSScreenStackPropsENS0_26RNSScreenStackEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0ae0
  ;
  *(undefined4 *)(puVar2 + 0xdf) = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 0018423c  FUN_0018423c =====

void FUN_0018423c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e9158;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0018424c  FUN_0018424c =====

void FUN_0018424c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e9158;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0018427c  FUN_0018427c =====

void FUN_0018427c(long param_1)

{
  FUN_0017d0e8(param_1 + 0x18,PTR_PTR_001f0c10 + 8);
  return;
}


// ===== 00184290  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 00184294  FUN_00184294 =====

void FUN_00184294(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e91a8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 001842a4  FUN_001842a4 =====

void FUN_001842a4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e91a8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001842d4  FUN_001842d4 =====

void FUN_001842d4(long param_1)

{
  FUN_0017d0e8(param_1 + 0x18,PTR_PTR_001f0c10 + 8);
  return;
}


// ===== 001842e8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 001842ec  FUN_001842ec =====

void FUN_001842ec(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0018433c  FUN_0018433c =====

void FUN_0018433c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e91f8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0018434c  FUN_0018434c =====

void FUN_0018434c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e91f8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0018437c  FUN_0018437c =====

void FUN_0018437c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00184384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00184388  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0018438c  FUN_0018438c =====

void FUN_0018438c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_001e8610;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_001e8680;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 0018443c  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_25RNSSearchBarComponentNameEEEENS0_17RNSSearchBarPropsENS0_24RNSSearchBarEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_25RNSSearchBarComponentNameEEEENS0_17RNSSearchBarPropsENS0_24RNSSearchBarEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1,ComponentDescriptorParameters *param_2)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ComponentDescriptor *this;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  undefined4 local_10d0 [2];
  undefined8 *local_10c8;
  void *local_10c0;
  void *pvStack_10b8;
  undefined8 local_10b0;
  void *pvStack_10a8;
  void *local_10a0;
  undefined8 uStack_1098;
  void *local_1090;
  void *pvStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined *local_1070;
  undefined8 uStack_1068;
  undefined8 local_1060;
  undefined8 uStack_1058;
  undefined4 local_1050 [2];
  undefined8 local_1048;
  undefined8 uStack_1040;
  undefined8 local_1038;
  undefined8 uStack_1030;
  undefined4 local_1028;
  undefined4 local_1020;
  undefined1 local_101c;
  undefined8 local_101b;
  undefined8 local_1013;
  undefined8 uStack_100b;
  undefined8 local_1003;
  undefined8 uStack_ffb;
  undefined8 local_ff3;
  undefined8 uStack_feb;
  undefined8 local_fe3;
  undefined6 uStack_fdb;
  undefined2 uStack_fd5;
  undefined6 uStack_fd3;
  undefined8 uStack_fcd;
  undefined4 local_fc5;
  undefined8 local_fc1;
  undefined1 local_fb9;
  undefined1 uStack_fb8;
  undefined7 uStack_fb7;
  undefined8 uStack_fb0;
  undefined8 uStack_fa8;
  undefined8 uStack_fa0;
  undefined8 local_f98;
  undefined8 uStack_f90;
  undefined8 local_f88;
  undefined8 uStack_f80;
  undefined8 local_f78;
  undefined8 uStack_f70;
  undefined8 local_f68;
  undefined8 uStack_f60;
  undefined8 uStack_f58;
  undefined8 local_f50;
  undefined8 local_f48;
  undefined8 uStack_f40;
  undefined8 local_f38;
  undefined4 uStack_f30;
  undefined4 uStack_f2c;
  undefined4 uStack_f28;
  undefined4 uStack_f24;
  undefined4 uStack_f20;
  undefined4 uStack_f1c;
  undefined8 local_f18;
  undefined8 uStack_f10;
  undefined4 local_f08;
  undefined1 local_f04;
  undefined4 local_f00;
  undefined1 local_efc;
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
  undefined1 local_e88;
  undefined1 local_e84;
  undefined1 local_e78;
  undefined8 local_e70;
  undefined8 uStack_e68;
  undefined8 uStack_e60;
  undefined8 uStack_e58;
  undefined8 local_e50;
  undefined8 uStack_e48;
  undefined8 uStack_e40;
  undefined1 uStack_e38;
  undefined7 local_e37;
  undefined1 uStack_e30;
  undefined8 uStack_e2f;
  undefined8 local_e24;
  undefined8 uStack_e1c;
  undefined8 uStack_e14;
  undefined8 uStack_e0c;
  undefined8 local_e04;
  undefined8 uStack_dfc;
  undefined8 uStack_df4;
  undefined8 uStack_dec;
  undefined8 local_de4;
  undefined8 uStack_ddc;
  undefined8 uStack_dd4;
  undefined5 uStack_dcc;
  undefined3 local_dc7;
  undefined5 uStack_dc4;
  undefined1 local_dbc;
  undefined1 local_db8;
  undefined1 local_db4;
  undefined1 local_db0;
  undefined1 local_dac;
  undefined1 local_da8;
  undefined1 local_d90;
  undefined8 local_d88;
  undefined8 uStack_d80;
  undefined8 local_d78;
  undefined4 local_d70;
  undefined1 local_d6c;
  undefined4 local_d6b;
  undefined1 local_d67;
  undefined1 local_d66;
  undefined8 local_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined8 uStack_d48;
  undefined8 local_d40;
  undefined7 uStack_d38;
  undefined4 uStack_d31;
  undefined8 local_d2c;
  undefined1 local_d24;
  undefined1 local_d1c;
  undefined1 local_d18;
  undefined1 local_d10;
  undefined1 local_d0c;
  undefined1 local_d04;
  undefined1 local_d00;
  undefined1 local_cf8;
  undefined1 local_cf4;
  undefined1 local_cec;
  undefined1 local_ce8;
  undefined1 local_ce0;
  undefined1 local_cdc;
  undefined1 local_cd4;
  undefined1 local_cd0;
  undefined1 local_cc8;
  undefined1 local_cc4;
  undefined1 local_cbc;
  undefined1 local_cb8;
  undefined1 local_cb0;
  undefined1 local_cac;
  undefined1 local_ca4;
  undefined1 local_ca0;
  undefined1 local_c98;
  undefined1 local_c94;
  undefined1 local_c8c;
  undefined1 local_c88;
  undefined1 local_c84;
  undefined1 local_c80;
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
  undefined8 local_c28;
  undefined8 uStack_c20;
  undefined8 local_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined2 local_bf8;
  undefined8 local_bf4;
  undefined1 local_bec;
  undefined8 local_be8;
  undefined8 local_be0;
  undefined8 uStack_bd8;
  undefined1 local_bd0;
  undefined8 local_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 local_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 local_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 local_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 local_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 local_b28;
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
  undefined6 uStack_ad0;
  undefined2 uStack_aca;
  undefined6 uStack_ac8;
  undefined1 local_ac0;
  undefined1 local_abc;
  undefined1 local_ab8;
  undefined8 local_ab4;
  undefined8 uStack_aac;
  undefined1 local_aa4;
  undefined8 local_aa0;
  undefined2 local_a98;
  undefined1 local_a96;
  undefined4 local_a94;
  undefined1 local_a90;
  undefined1 local_a30;
  undefined1 local_a28;
  undefined1 local_9c8;
  undefined4 local_9c0;
  undefined2 local_9bc;
  undefined1 local_9b8;
  undefined1 local_9b4;
  undefined1 local_9b0;
  undefined1 local_9ac;
  undefined1 local_9a8;
  undefined1 local_9a4;
  undefined1 local_9a0;
  undefined1 local_99c;
  undefined1 local_998;
  undefined1 local_994;
  undefined1 local_990;
  ulong local_98c;
  undefined8 uStack_984;
  undefined4 uStack_97c;
  undefined4 local_978;
  undefined4 uStack_974;
  undefined4 uStack_970;
  undefined1 local_96c;
  undefined8 local_968;
  ulong uStack_960;
  undefined8 uStack_958;
  undefined6 local_950;
  undefined2 uStack_94a;
  undefined6 uStack_948;
  undefined8 uStack_942;
  ulong local_938;
  undefined8 uStack_930;
  void *local_928;
  undefined8 uStack_920;
  undefined1 local_918;
  undefined4 local_910 [2];
  undefined8 local_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  undefined8 local_8f0;
  undefined8 uStack_8e8;
  byte local_228;
  void *local_218;
  byte local_200;
  void *local_1f0;
  byte local_1d8;
  void *local_1c8;
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
  this = (ComponentDescriptor *)operator_new(0x88);
  pvStack_10a8 = (void *)0x0;
  local_10b0 = 0;
  uStack_1098 = 0;
  local_10a0 = (void *)0x0;
  pvStack_1088 = (void *)0x0;
  local_1090 = (void *)0x0;
  uStack_1078 = 0;
  uStack_1080 = 0;
  pvStack_10b8 = (void *)0x0;
  local_10c0 = (void *)0x0;
                    /* try { // try from 00184490 to 0018449b has its CatchHandler @ 00184b74 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_10c0);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_001e9280;
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
                    /* try { // try from 00184508 to 00184513 has its CatchHandler @ 00184ba4 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_10d0[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_10c8 = &local_1b0;
  facebook::react::RawProps::parse((RawPropsParser *)&local_f8);
  memset(local_1050,0,0x740);
  local_910[0] = 5;
  local_8f8 = 0;
  local_1070 = PTR_construction_vtable_001f0e30 + 0x20;
  local_1050[0] = 5;
  uStack_1068 = 0;
  uStack_1058 = 0;
  local_1060 = 0;
  local_8f0 = 0;
  uStack_8e8 = 0x3f800000;
  uStack_900 = 0;
  local_908 = 0;
  uStack_1040 = 0;
  local_1048 = 0;
  uStack_1030 = 0;
  local_1038 = 0;
  local_1028 = 0x3f800000;
  folly::dynamic::destroy();
  local_101c = 0;
  local_fc1 = 0;
  uStack_ae0 = _UNK_00142624;
  local_ae8 = _DAT_0014261c;
  local_101b = DAT_001423b8;
  uStack_bd8 = _UNK_001423f8;
  local_be0 = _DAT_001423f0;
  uStack_af0 = _UNK_00142614;
  local_af8 = _DAT_0014260c;
  local_f04 = 0;
  uStack_b00 = _UNK_00142604;
  local_b08 = _DAT_001425fc;
  uStack_b10 = _UNK_001425f4;
  local_b18 = _DAT_001425ec;
  uStack_ac8 = 0;
  local_efc = 0;
  uStack_f30 = 0;
  local_f38 = 0;
  uStack_f1c = 0;
  uStack_f40 = 0;
  local_f48 = 0;
  uStack_d80 = 0;
  local_d88 = 0;
  local_1020 = 0x10410710;
  local_d6b = 0;
  local_fc5 = 0x40004;
  local_d66 = 0x23;
  uStack_f24 = 0;
  uStack_f20 = 0;
  uStack_f2c = 0;
  uStack_f28 = 0;
  uStack_f10 = 0;
  local_f18 = 0;
  local_d2c = 0x3f800000;
  local_f08 = 0x7fc00000;
  local_f00 = 0x7fc00000;
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
  uStack_c10 = 0;
  local_c18 = 0;
  uStack_c00 = 0;
  uStack_c08 = 0;
  uStack_c20 = 0;
  local_c28 = 0;
  uStack_e2f = 0;
  uStack_e30 = 0;
  local_bf4 = 0;
  uStack_e1c = 0;
  local_e24 = 0;
  uStack_e0c = 0;
  uStack_e14 = 0;
  uStack_dfc = 0;
  local_e04 = 0;
  uStack_dec = 0;
  uStack_df4 = 0;
  uStack_ddc = 0;
  local_de4 = 0;
  uStack_dcc = 0;
  uStack_dd4 = 0;
  local_dc7 = 0;
  uStack_dc4 = 0;
  uStack_bc0 = 0;
  local_bc8 = 0;
  uStack_bb0 = 0;
  uStack_bb8 = 0;
  uStack_ba0 = 0;
  local_ba8 = 0;
  uStack_b90 = 0;
  uStack_b98 = 0;
  uStack_b80 = 0;
  local_b88 = 0;
  uStack_b70 = 0;
  uStack_b78 = 0;
  uStack_b60 = 0;
  local_b68 = 0;
  uStack_b50 = 0;
  uStack_b58 = 0;
  uStack_b40 = 0;
  local_b48 = 0;
  uStack_b30 = 0;
  uStack_b38 = 0;
  uStack_b20 = 0;
  local_b28 = 0;
  uStack_ad0 = 0;
  uStack_aca = 0;
  local_ad8 = 0;
  uStack_fb7 = 0;
  uStack_100b = 0;
  local_1013 = 0;
  uStack_ffb = 0;
  local_1003 = 0;
  uStack_feb = 0;
  local_ff3 = 0;
  uStack_fdb = 0;
  local_fe3 = 0;
  uStack_fcd = 0;
  uStack_fd5 = 0;
  uStack_fd3 = 0;
  local_fb9 = 0;
  uStack_fb8 = 0;
  uStack_fa8 = 0;
  uStack_fb0 = 0;
  local_f98 = 0;
  uStack_fa0 = 0;
  local_f88 = 0;
  uStack_f90 = 0;
  local_f78 = 0;
  uStack_f80 = 0;
  local_f68 = 0;
  uStack_f70 = 0;
  uStack_f58 = 0;
  uStack_f60 = 0;
  local_f50 = 0;
  local_ef4 = 0;
  local_eec = 0;
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
  local_e88 = 0;
  local_e84 = 0;
  local_e78 = 0;
  local_dbc = 0;
  local_db8 = 0;
  local_db4 = 0;
  local_db0 = 0;
  local_dac = 0;
  local_da8 = 0;
  local_d90 = 0;
  uStack_e68 = 0;
  local_e70 = 0;
  uStack_e58 = 0;
  uStack_e60 = 0;
  uStack_e48 = 0;
  local_e50 = 0;
  uStack_e38 = 0;
  local_e37 = 0;
  uStack_e40 = 0;
  local_d78 = 0;
  local_d70 = 0;
  local_d6c = 1;
  local_d67 = 0;
  uStack_d58 = 0;
  local_d60 = 0;
  uStack_d48 = 0;
  uStack_d50 = 0;
  uStack_d38 = 0;
  uStack_d31 = 0;
  local_d40 = 0;
  local_d24 = 0;
  local_d1c = 0;
  local_d18 = 0;
  local_d10 = 0;
  local_d0c = 0;
  local_d04 = 0;
  local_d00 = 0;
  local_cf8 = 0;
  local_cf4 = 0;
  local_cec = 0;
  local_ce8 = 0;
  local_ce0 = 0;
  local_cdc = 0;
  local_cd4 = 0;
  local_cd0 = 0;
  local_cc8 = 0;
  local_cc4 = 0;
  local_cbc = 0;
  local_cb8 = 0;
  local_cb0 = 0;
  local_cac = 0;
  local_ca4 = 0;
  local_ca0 = 0;
  local_c98 = 0;
  local_c94 = 0;
  local_c8c = 0;
  local_c88 = 0;
  local_c84 = 0;
  local_c80 = 0;
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
  local_be8 = 0;
  local_bf8 = 0;
  local_bec = 0;
  local_bd0 = 0;
  local_ac0 = 0;
  local_abc = 0;
  local_ab8 = 0;
  local_aa0 = 0;
  uStack_aac = 0;
  local_ab4 = 0;
  local_aa4 = 0;
  local_a98 = 0x101;
  local_a96 = 0;
  local_a94 = 0;
  local_a90 = 0;
  local_a30 = 0;
  local_a28 = 0;
  local_9c8 = 0;
  local_9b8 = 0;
  local_9b4 = 0;
  local_9b0 = 0;
  local_9ac = 0;
  local_9a8 = 0;
  local_9a4 = 0;
  local_9a0 = 0;
  local_99c = 0;
  local_998 = 0;
  local_994 = 0;
  local_9bc = 0;
  local_9c0 = 0;
  local_1070 = PTR_vtable_001f0c20 + 0x20;
  local_990 = 1;
  uStack_984 = 0;
  local_98c = 0;
  uStack_974 = 0;
  uStack_970 = 0;
  uStack_97c = 0;
  local_978 = 0;
  local_96c = 1;
  uStack_960 = 0;
  local_968 = 0;
  local_950 = 0;
  uStack_958 = 0;
  uStack_942 = 0;
  uStack_94a = 0;
  uStack_948 = 0;
  uStack_930 = 0;
  local_938 = 0;
  uStack_920 = 0;
  local_928 = (void *)0x0;
  local_918 = 1;
                    /* try { // try from 00184928 to 0018493b has its CatchHandler @ 00184ba4 */
  facebook::react::RNSSearchBarProps::RNSSearchBarProps
            ((RNSSearchBarProps *)local_910,(PropsParserContext *)local_10d0,
             (RNSSearchBarProps *)&local_1070,(RawProps *)&local_f8);
  if ((local_1d8 & 1) != 0) {
    operator_delete(local_1c8);
  }
  if ((local_200 & 1) != 0) {
    operator_delete(local_1f0);
  }
  if ((local_228 & 1) != 0) {
    operator_delete(local_218);
  }
  puVar5 = PTR_PTR_001f0c28;
  FUN_0017d0e8(local_910,PTR_PTR_001f0c28 + 8);
  if ((local_938 & 1) != 0) {
    operator_delete(local_928);
  }
  if ((uStack_960 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_94a,local_950));
  }
  if ((local_98c & 0x100000000) != 0) {
    operator_delete((void *)CONCAT44(uStack_974,local_978));
  }
  FUN_0017d0e8(&local_1070,puVar5 + 8);
  facebook::react::RawPropsParser::postPrepare();
  pvVar3 = local_120;
  puVar4 = (undefined8 *)local_110;
  while (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar4[6];
    pvVar8 = (void *)*puVar4;
    local_120 = pvVar3;
    if ((plVar7 == (long *)0x0) || (lVar6 = FUN_001735f0(0xffffffffffffffff,plVar7 + 1), lVar6 != 0)
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
  pvVar8 = local_80;
  pvVar3 = local_78;
  if (local_80 != (void *)0x0) {
    while (pvVar3 != pvVar8) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 00184a88 to 00184a93 has its CatchHandler @ 00184ba8 */
        (*(code *)(&PTR_FUN_001e82f8)[*(uint *)((long)pvVar3 + -8)])
                  (&local_1070,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_78 = pvVar8;
    operator_delete(local_80);
  }
  if (local_98 != (void *)0x0) {
    pvStack_90 = local_98;
    operator_delete(local_98);
  }
  folly::dynamic::destroy();
  facebook::jsi::Value::~Value((Value *)local_e0);
  if (local_1090 != (void *)0x0) {
    pvStack_1088 = local_1090;
    operator_delete(local_1090);
  }
  if (pvStack_10a8 != (void *)0x0) {
    local_10a0 = pvStack_10a8;
    operator_delete(pvStack_10a8);
  }
  if (local_10c0 != (void *)0x0) {
    pvStack_10b8 = local_10c0;
    operator_delete(local_10c0);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00184bac  FUN_00184bac =====

void FUN_00184bac(void *param_1)

{
  FUN_0019330c();
  operator_delete(param_1);
  return;
}


// ===== 00184bd0  FUN_00184bd0 =====

undefined * FUN_00184bd0(void)

{
  return PTR_RNSSearchBarComponentName_001f0c18;
}


// ===== 00184bdc  FUN_00184bdc =====

undefined * FUN_00184bdc(void)

{
  return PTR_RNSSearchBarComponentName_001f0c18;
}


// ===== 00184be8  FUN_00184be8 =====

undefined8 FUN_00184be8(void)

{
  return 0x61;
}


// ===== 00184bf0  FUN_00184bf0 =====

void FUN_00184bf0(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  *puVar6 = &PTR_FUN_001e9310;
                    /* try { // try from 00184c5c to 00184c6b has its CatchHandler @ 00184d44 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_001e9360;
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
                    /* try { // try from 00184cf8 to 00184d03 has its CatchHandler @ 00184d34 */
  (**(code **)(lVar8 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00184d74  FUN_00184d74 =====

void FUN_00184d74(undefined8 *param_1,long *param_2,shared_ptr *param_3,ShadowNodeFragment *param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  YogaLayoutableShadowNode *local_78;
  long *local_70;
  YogaLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar5 = (long *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_001e9310;
                    /* try { // try from 00184dcc to 00184ddb has its CatchHandler @ 00184f1c */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            (pYVar1,(ShadowNode *)param_3,param_4);
  lVar6 = plVar5[4];
  plVar5[3] = (long)&PTR_FUN_001e9360;
  uVar3 = *(uint *)((long)plVar5 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar6 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)plVar5 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
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
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar6 + 0x6b0) != '\0' || *(char *)(lVar6 + 0x6b1) != '\0') ||
             *(char *)(lVar6 + 0x1e8) != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar5;
                    /* try { // try from 00184e60 to 00184e6f has its CatchHandler @ 00184f34 */
  facebook::react::YogaLayoutableShadowNode::completeClone
            ((ShadowNode *)pYVar1,(ShadowNodeFragment *)param_3);
  local_78 = pYVar1;
  local_70 = plVar5;
  FUN_00174090(1,plVar5 + 1);
                    /* try { // try from 00184e80 to 00184e8f has its CatchHandler @ 00184f0c */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar5 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar6 = FUN_001735f0(0xffffffffffffffff,local_70 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 00184ecc to 00184ed7 has its CatchHandler @ 00184f34 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00184f5c  FUN_00184f5c =====

void FUN_00184f5c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00184f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 00184f70  FUN_00184f70 =====

void FUN_00184f70(undefined8 *param_1,ulong param_2,PropsParserContext *param_3,long *param_4,
                 RawPropsParser *param_5)

{
  RNSSearchBarProps *this;
  uint uVar1;
  long lVar2;
  bool bVar3;
  RawValue *pRVar4;
  long *plVar5;
  RawValue *pRVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  char *__s2;
  dynamic *pdVar10;
  long lVar11;
  RNSSearchBarProps *pRVar12;
  undefined1 uStack_d1;
  dynamic local_d0 [32];
  dynamic *local_b0;
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar8 = facebook::react::RawProps::isEmpty(), (uVar8 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSSearchBarComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSSearchBarPropsENS0_24RNSSearchBarEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0af8
         & 1) == 0) &&
       (param_2 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSSearchBarComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSSearchBarPropsENS0_24RNSSearchBarEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0af8
                                     ), (int)param_2 != 0)) {
                    /* try { // try from 001853a4 to 001853a7 has its CatchHandler @ 001853d4 */
      FUN_00185ac0();
      __cxa_atexit(FUN_00185a70,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSSearchBarComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSSearchBarPropsENS0_24RNSSearchBarEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0af0
                   ,&PTR_LOOP_001e77b0);
      param_2 = __cxa_guard_release(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSSearchBarComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSSearchBarPropsENS0_24RNSSearchBarEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0af8
                                   );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSSearchBarComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSSearchBarPropsENS0_24RNSSearchBarEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0af0
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSSearchBarComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSSearchBarPropsENS0_24RNSSearchBarEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0af0
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      param_2 = FUN_00174090(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::parse(param_5);
    pRVar12 = (RNSSearchBarProps *)*param_4;
    if (pRVar12 == (RNSSearchBarProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSSearchBarComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSSearchBarPropsENS0_24RNSSearchBarEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0af8
           & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSSearchBarComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSSearchBarPropsENS0_24RNSSearchBarEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0af8
                                     ), iVar7 != 0)) {
                    /* try { // try from 00185324 to 00185327 has its CatchHandler @ 001853ec */
        FUN_00185ac0();
        __cxa_atexit(FUN_00185a70,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSSearchBarComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSSearchBarPropsENS0_24RNSSearchBarEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0af0
                     ,&PTR_LOOP_001e77b0);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSSearchBarComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSSearchBarPropsENS0_24RNSSearchBarEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0af8
                           );
      }
      pRVar12 = *(RNSSearchBarProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSSearchBarComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSSearchBarPropsENS0_24RNSSearchBarEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0af0
      ;
    }
    plVar9 = (long *)operator_new(0x778);
    this = (RNSSearchBarProps *)(plVar9 + 3);
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_FUN_001e9478;
                    /* try { // try from 00185050 to 00185063 has its CatchHandler @ 00185460 */
    facebook::react::RNSSearchBarProps::RNSSearchBarProps(this,param_3,pRVar12,(RawProps *)param_5);
                    /* try { // try from 00185068 to 0018507b has its CatchHandler @ 00185478 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid();
    if ((((uVar8 & 1) == 0) ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid
                           (), (uVar8 & 1) == 0)) ||
       (uVar8 = facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid(),
       (uVar8 & 1) == 0)) {
LAB_001850a4:
      FUN_00174090(1,plVar9 + 1);
      if ((RawProps *)*param_4 == (RawProps *)0x0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSSearchBarComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSSearchBarPropsENS0_24RNSSearchBarEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0af8
             & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSSearchBarComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSSearchBarPropsENS0_24RNSSearchBarEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0af8
                                       ), iVar7 != 0)) {
                    /* try { // try from 00185364 to 00185367 has its CatchHandler @ 001853d8 */
          FUN_00185ac0();
          __cxa_atexit(FUN_00185a70,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSSearchBarComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSSearchBarPropsENS0_24RNSSearchBarEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0af0
                       ,&PTR_LOOP_001e77b0);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSSearchBarComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSSearchBarPropsENS0_24RNSSearchBarEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0af8
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0018510c to 0018511f has its CatchHandler @ 00185404 */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,
                   *(RawProps **)
                    PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSSearchBarComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSSearchBarPropsENS0_24RNSSearchBarEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0af0
                   ,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_00185158:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_00185158;
        }
        if (plVar9 != (long *)0x0) goto LAB_0018516c;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 001850c0 to 001850d3 has its CatchHandler @ 0018542c */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,(RawProps *)*param_4,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_0018516c;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_0018516c:
        lVar11 = FUN_001735f0(0xffffffffffffffff,plVar9 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 00185088 to 00185093 has its CatchHandler @ 00185400 */
      __s2 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar7 = strcmp(PTR_RNSSearchBarComponentName_001f0c18,__s2);
      if (iVar7 != 0) goto LAB_001850a4;
      bVar3 = false;
    }
                    /* try { // try from 00185198 to 0018519b has its CatchHandler @ 00185478 */
    param_2 = facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter();
    if ((param_2 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 001851a8 to 001851c3 has its CatchHandler @ 00185428 */
        param_2 = folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar9 + 7));
      }
      else {
        param_2 = facebook::react::RawProps::operator_cast_to_dynamic((RawProps *)param_5);
      }
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00185304 to 00185313 has its CatchHandler @ 00185420 */
                    /* WARNING: Subroutine does not return */
          FUN_00172ea4(*(undefined8 *)PTR_name_001f09c8);
        }
        goto LAB_001854c4;
      }
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 001852e4 to 001852f3 has its CatchHandler @ 00185484 */
                    /* WARNING: Subroutine does not return */
            FUN_00172ea4(*(undefined8 *)PTR_name_001f0bb0);
          }
          goto LAB_001854c4;
        }
        uVar1 = 0x811c9dc5;
        uVar8 = (ulong)(*(byte *)(plVar5 + 3) >> 1);
        pRVar6 = (RawValue *)((long)plVar5 + 0x19);
        pRVar4 = (RawValue *)((long)plVar5 + 0x19);
        if ((*(byte *)(plVar5 + 3) & 1) != 0) {
          uVar8 = plVar5[4];
          pRVar6 = (RawValue *)plVar5[5];
          pRVar4 = (RawValue *)plVar5[5];
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          uVar1 = (uVar1 ^ (int)(char)*pRVar6) * 0x1000193;
          pRVar6 = pRVar6 + 1;
        }
                    /* try { // try from 00185244 to 0018524f has its CatchHandler @ 0018548c */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 00185254 to 0018526b has its CatchHandler @ 00185490 */
        param_2 = facebook::react::HostPlatformViewProps::setProp
                            ((PropsParserContext *)this,(uint)param_3,(char *)(ulong)uVar1,pRVar4);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 0018527c to 00185287 has its CatchHandler @ 00185480 */
          param_2 = (*(code *)(&PTR_FUN_001e82f8)[local_a0])(&uStack_d1,local_d0);
        }
      }
      param_2 = folly::dynamic::destroy();
    }
    param_1[1] = plVar9;
    *param_1 = this;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_001854c4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}


// ===== 001854c8  FUN_001854c8 =====

void FUN_001854c8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 001854d0  FUN_001854d0 =====

void FUN_001854d0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 001854d8  FUN_001854d8 =====

void FUN_001854d8(undefined8 *param_1,long param_2,long param_3)

{
  EventEmitter *pEVar1;
  ShadowNodeFamily *pSVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ShadowNodeFamily *local_b0;
  undefined8 *local_a8;
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
  FUN_0017dbe4(&local_a0,param_3 + 8,param_3 + 4);
                    /* try { // try from 0018551c to 00185523 has its CatchHandler @ 001857fc */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_001e94c8;
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
    FUN_00174090(1,local_78 + 0x10);
  }
                    /* try { // try from 00185560 to 0018556f has its CatchHandler @ 001857d0 */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_001e8610;
                    /* try { // try from 0018557c to 00185583 has its CatchHandler @ 001857c0 */
  puVar6 = (undefined8 *)operator_new(0x58);
  *puVar6 = &PTR_FUN_001e8630;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[4] = 0;
  puVar6[3] = 0;
  plVar5[0xb] = (long)(puVar6 + 3);
  plVar5[0xc] = (long)puVar6;
  puVar6[6] = 0;
  puVar6[5] = 0;
  puVar6[8] = 0;
  puVar6[7] = 0;
  *(undefined8 *)((long)puVar6 + 0x4c) = 0;
  *(undefined8 *)((long)puVar6 + 0x44) = 0;
  plVar5[3] = (long)&PTR_FUN_001e9518;
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = plStack_98;
  local_90 = pEVar1;
  local_88 = plVar5;
  if ((plStack_98 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_98 + 1), lVar7 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 00185630 to 00185637 has its CatchHandler @ 001857b0 */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  *puVar6 = &PTR_FUN_001e86f0;
  pSVar2 = (ShadowNodeFamily *)(puVar6 + 4);
  puVar6[1] = 0;
  puVar6[2] = 0;
  local_70 = local_90;
  plStack_68 = local_88;
  if (local_88 != (long *)0x0) {
    FUN_00174090(1,local_88 + 1);
  }
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  if (local_78 != 0) {
    FUN_00174090(1,local_78 + 0x10);
  }
                    /* try { // try from 00185680 to 00185697 has its CatchHandler @ 00185780 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar2,param_3,&local_70,&local_80,param_2);
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pEVar1 = local_90;
  *param_1 = pSVar2;
  param_1[1] = puVar6;
  local_b0 = pSVar2;
  local_a8 = puVar6;
  FUN_00174090(1,puVar6 + 2);
                    /* try { // try from 001856ec to 001856f7 has its CatchHandler @ 00185760 */
  facebook::react::EventEmitter::setShadowNodeFamily(pEVar1,&local_b0);
  if (local_a8 != (undefined8 *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00185824  FUN_00185824 =====

void FUN_00185824(void)

{
  return;
}


// ===== 00185828  FUN_00185828 =====

void FUN_00185828(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00185878  FUN_00185878 =====

void FUN_00185878(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e9310;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00185888  FUN_00185888 =====

void FUN_00185888(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e9310;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001858b8  FUN_001858b8 =====

void FUN_001858b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001858c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 001858c4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 001858c8  FUN_001858c8 =====

void FUN_001858c8(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_001f09e8 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
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
  FUN_00173ffc(param_1 + 0x23);
  FUN_00173f00(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00185988  FUN_00185988 =====

void FUN_00185988(long param_1)

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


// ===== 001859f0  FUN_001859f0 =====

bool FUN_001859f0(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 00185a08  FUN_00185a08 =====

bool FUN_00185a08(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 00185a20  FUN_00185a20 =====

void FUN_00185a20(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00185a70  FUN_00185a70 =====

void FUN_00185a70(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00185ac0  FUN_00185ac0 =====

void FUN_00185ac0(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x778);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_001e9428;
  memset(__s,0,0x760);
                    /* try { // try from 00185afc to 00185b0f has its CatchHandler @ 00185bb0 */
  FUN_0017cb10(__s,PTR_PTR_001f0c28 + 0x10);
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
  puVar1 = PTR_vtable_001f0c20;
  *(undefined8 *)((long)puVar2 + 0x704) = 0;
  *(undefined8 *)((long)puVar2 + 0x6fc) = 0;
  *(undefined8 *)((long)puVar2 + 0x714) = 0;
  *(undefined8 *)((long)puVar2 + 0x70c) = 0;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  puVar2[3] = puVar1 + 0x20;
  *(undefined1 *)(puVar2 + 0xdf) = 1;
  *(undefined1 *)((long)puVar2 + 0x71c) = 1;
  puVar2[0xe5] = 0;
  puVar2[0xe4] = 0;
  puVar2[0xe7] = 0;
  puVar2[0xe6] = 0;
  *(undefined8 *)((long)puVar2 + 0x746) = 0;
  *(undefined8 *)((long)puVar2 + 0x73e) = 0;
  puVar2[0xeb] = 0;
  puVar2[0xea] = 0;
  puVar2[0xed] = 0;
  puVar2[0xec] = 0;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSSearchBarComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSSearchBarPropsENS0_24RNSSearchBarEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0af0
  ;
  *(undefined1 *)(puVar2 + 0xee) = 1;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 00185bcc  FUN_00185bcc =====

void FUN_00185bcc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e9428;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00185bdc  FUN_00185bdc =====

void FUN_00185bdc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e9428;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00185c0c  FUN_00185c0c =====

void FUN_00185c0c(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x750) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x728);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x760));
    bVar1 = *(byte *)(param_1 + 0x728);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x700);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x738));
    bVar1 = *(byte *)(param_1 + 0x700);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x710));
  }
  FUN_0017d0e8(param_1 + 0x18,PTR_PTR_001f0c28 + 8);
  return;
}


// ===== 00185c7c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 00185c80  FUN_00185c80 =====

void FUN_00185c80(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e9478;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00185c90  FUN_00185c90 =====

void FUN_00185c90(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e9478;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00185cc0  FUN_00185cc0 =====

void FUN_00185cc0(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x750) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x728);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x760));
    bVar1 = *(byte *)(param_1 + 0x728);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x700);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x738));
    bVar1 = *(byte *)(param_1 + 0x700);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x710));
  }
  FUN_0017d0e8(param_1 + 0x18,PTR_PTR_001f0c28 + 8);
  return;
}


// ===== 00185d30  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 00185d34  FUN_00185d34 =====

void FUN_00185d34(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00185d84  FUN_00185d84 =====

void FUN_00185d84(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e94c8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00185d94  FUN_00185d94 =====

void FUN_00185d94(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e94c8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00185dc4  FUN_00185dc4 =====

void FUN_00185dc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00185dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00185dd0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 00185dd4  FUN_00185dd4 =====

void FUN_00185dd4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_001e8610;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_001e8680;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 00185e84  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_32RNSScrollViewMarkerComponentNameEEEENS0_24RNSScrollViewMarkerPropsENS0_31RNSScrollViewMarkerEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_32RNSScrollViewMarkerComponentNameEEEENS0_24RNSScrollViewMarkerPropsENS0_31RNSScrollViewMarkerEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1,ComponentDescriptorParameters *param_2)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ComponentDescriptor *this;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  undefined4 local_ff0 [2];
  undefined8 *local_fe8;
  void *local_fe0;
  void *pvStack_fd8;
  undefined8 local_fd0;
  void *pvStack_fc8;
  void *local_fc0;
  undefined8 uStack_fb8;
  void *local_fb0;
  void *pvStack_fa8;
  undefined8 uStack_fa0;
  undefined8 uStack_f98;
  undefined *local_f90;
  undefined8 uStack_f88;
  undefined8 local_f80;
  undefined8 uStack_f78;
  undefined4 local_f70 [2];
  undefined8 local_f68;
  undefined8 uStack_f60;
  undefined8 local_f58;
  undefined8 uStack_f50;
  undefined4 local_f48;
  undefined4 local_f40;
  undefined1 local_f3c;
  undefined8 local_f3b;
  undefined8 local_f33;
  undefined8 uStack_f2b;
  undefined8 local_f23;
  undefined8 uStack_f1b;
  undefined8 local_f13;
  undefined8 uStack_f0b;
  undefined8 local_f03;
  undefined6 uStack_efb;
  undefined2 uStack_ef5;
  undefined6 uStack_ef3;
  undefined8 uStack_eed;
  undefined4 local_ee5;
  undefined8 local_ee1;
  undefined1 local_ed9;
  undefined1 uStack_ed8;
  undefined7 uStack_ed7;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  undefined8 uStack_ec0;
  undefined8 local_eb8;
  undefined8 uStack_eb0;
  undefined8 local_ea8;
  undefined8 uStack_ea0;
  undefined8 local_e98;
  undefined8 uStack_e90;
  undefined8 local_e88;
  undefined8 uStack_e80;
  undefined8 uStack_e78;
  undefined8 local_e70;
  undefined8 local_e68;
  undefined8 uStack_e60;
  undefined8 local_e58;
  undefined4 uStack_e50;
  undefined4 uStack_e4c;
  undefined4 uStack_e48;
  undefined4 uStack_e44;
  undefined4 uStack_e40;
  undefined4 uStack_e3c;
  undefined8 local_e38;
  undefined8 uStack_e30;
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
  undefined4 local_db8;
  undefined1 local_db4;
  undefined4 local_db0;
  undefined1 local_dac;
  undefined1 local_da8;
  undefined1 local_da4;
  undefined1 local_d98;
  undefined8 local_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined8 local_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined1 uStack_d58;
  undefined7 local_d57;
  undefined1 uStack_d50;
  undefined8 uStack_d4f;
  undefined8 local_d44;
  undefined8 uStack_d3c;
  undefined8 uStack_d34;
  undefined8 uStack_d2c;
  undefined8 local_d24;
  undefined8 uStack_d1c;
  undefined8 uStack_d14;
  undefined8 uStack_d0c;
  undefined8 local_d04;
  undefined8 uStack_cfc;
  undefined8 uStack_cf4;
  undefined5 uStack_cec;
  undefined3 local_ce7;
  undefined5 uStack_ce4;
  undefined1 local_cdc;
  undefined1 local_cd8;
  undefined1 local_cd4;
  undefined1 local_cd0;
  undefined1 local_ccc;
  undefined1 local_cc8;
  undefined1 local_cb0;
  undefined8 local_ca8;
  undefined8 uStack_ca0;
  undefined8 local_c98;
  undefined4 local_c90;
  undefined1 local_c8c;
  undefined4 local_c8b;
  undefined1 local_c87;
  undefined1 local_c86;
  undefined8 local_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 local_c60;
  undefined7 uStack_c58;
  undefined4 uStack_c51;
  undefined8 local_c4c;
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
  undefined1 local_bd0;
  undefined1 local_bcc;
  undefined1 local_bc4;
  undefined1 local_bc0;
  undefined1 local_bb8;
  undefined1 local_bb4;
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
  undefined1 local_b58;
  undefined1 local_b54;
  undefined1 local_b50;
  undefined1 local_b4c;
  undefined8 local_b48;
  undefined8 uStack_b40;
  undefined8 local_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined2 local_b18;
  undefined8 local_b14;
  undefined1 local_b0c;
  undefined8 local_b08;
  undefined8 local_b00;
  undefined8 uStack_af8;
  undefined1 local_af0;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 local_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
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
  undefined8 local_a38;
  undefined8 uStack_a30;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined8 local_a18;
  undefined8 uStack_a10;
  undefined8 local_a08;
  undefined8 uStack_a00;
  undefined8 local_9f8;
  undefined6 uStack_9f0;
  undefined2 uStack_9ea;
  undefined6 uStack_9e8;
  undefined1 local_9e0;
  undefined1 local_9dc;
  undefined1 local_9d8;
  undefined8 local_9d4;
  undefined8 uStack_9cc;
  undefined1 local_9c4;
  undefined8 local_9c0;
  undefined2 local_9b8;
  undefined1 local_9b6;
  undefined4 local_9b4;
  undefined1 local_9b0;
  undefined1 local_950;
  undefined1 local_948;
  undefined1 local_8e8;
  undefined4 local_8e0;
  undefined2 local_8dc;
  undefined1 local_8d8;
  undefined1 local_8d4;
  undefined1 local_8d0;
  undefined1 local_8cc;
  undefined1 local_8c8;
  undefined1 local_8c4;
  undefined1 local_8c0;
  undefined1 local_8bc;
  undefined1 local_8b8;
  undefined1 local_8b4;
  undefined8 local_8b0;
  undefined8 uStack_8a8;
  undefined4 local_8a0 [2];
  undefined8 local_898;
  undefined8 uStack_890;
  undefined8 local_888;
  undefined8 local_880;
  undefined8 uStack_878;
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
  this = (ComponentDescriptor *)operator_new(0x88);
  pvStack_fc8 = (void *)0x0;
  local_fd0 = 0;
  uStack_fb8 = 0;
  local_fc0 = (void *)0x0;
  pvStack_fa8 = (void *)0x0;
  local_fb0 = (void *)0x0;
  uStack_f98 = 0;
  uStack_fa0 = 0;
  pvStack_fd8 = (void *)0x0;
  local_fe0 = (void *)0x0;
                    /* try { // try from 00185ed4 to 00185edf has its CatchHandler @ 00186508 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_fe0);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_001e9550;
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
                    /* try { // try from 00185f4c to 00185f57 has its CatchHandler @ 00186538 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_ff0[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_fe8 = &local_1b0;
  facebook::react::RawProps::parse((RawPropsParser *)&local_f8);
  memset(local_f70,0,0x6d0);
  local_8a0[0] = 5;
  local_888 = 0;
  local_f90 = PTR_construction_vtable_001f0e38 + 0x20;
  local_f70[0] = 5;
  uStack_f88 = 0;
  uStack_f78 = 0;
  local_f80 = 0;
  local_880 = 0;
  uStack_878 = 0x3f800000;
  uStack_890 = 0;
  local_898 = 0;
  uStack_f60 = 0;
  local_f68 = 0;
  uStack_f50 = 0;
  local_f58 = 0;
  local_f48 = 0x3f800000;
  folly::dynamic::destroy();
  local_f3c = 0;
  local_ee1 = 0;
  uStack_a00 = _UNK_00142624;
  local_a08 = _DAT_0014261c;
  local_f3b = DAT_001423b8;
  uStack_af8 = _UNK_001423f8;
  local_b00 = _DAT_001423f0;
  uStack_a10 = _UNK_00142614;
  local_a18 = _DAT_0014260c;
  local_e24 = 0;
  uStack_a20 = _UNK_00142604;
  local_a28 = _DAT_001425fc;
  uStack_a30 = _UNK_001425f4;
  local_a38 = _DAT_001425ec;
  uStack_9e8 = 0;
  local_e1c = 0;
  uStack_e50 = 0;
  local_e58 = 0;
  uStack_e3c = 0;
  uStack_e60 = 0;
  local_e68 = 0;
  uStack_9f0 = 0;
  uStack_9ea = 0;
  local_9f8 = 0;
  local_f40 = 0x10410710;
  local_ee5 = 0x40004;
  uStack_e44 = 0;
  uStack_e40 = 0;
  uStack_e4c = 0;
  uStack_e48 = 0;
  uStack_e30 = 0;
  local_e38 = 0;
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
  local_db8 = 0x7fc00000;
  local_db0 = 0x7fc00000;
  uStack_d4f = 0;
  uStack_d50 = 0;
  uStack_d3c = 0;
  local_d44 = 0;
  uStack_d2c = 0;
  uStack_d34 = 0;
  uStack_d1c = 0;
  local_d24 = 0;
  uStack_d0c = 0;
  uStack_d14 = 0;
  uStack_cfc = 0;
  local_d04 = 0;
  uStack_cec = 0;
  uStack_cf4 = 0;
  local_ce7 = 0;
  uStack_ce4 = 0;
  local_c8c = 1;
  local_c8b = 0;
  local_c86 = 0x23;
  local_c4c = 0x3f800000;
  uStack_b30 = 0;
  local_b38 = 0;
  uStack_b20 = 0;
  uStack_b28 = 0;
  uStack_b40 = 0;
  local_b48 = 0;
  local_b14 = 0;
  uStack_ae0 = 0;
  local_ae8 = 0;
  uStack_ad0 = 0;
  uStack_ad8 = 0;
  uStack_ac0 = 0;
  local_ac8 = 0;
  uStack_ab0 = 0;
  uStack_ab8 = 0;
  uStack_aa0 = 0;
  local_aa8 = 0;
  uStack_a90 = 0;
  uStack_a98 = 0;
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
  uStack_ed7 = 0;
  uStack_f2b = 0;
  local_f33 = 0;
  uStack_f1b = 0;
  local_f23 = 0;
  uStack_f0b = 0;
  local_f13 = 0;
  uStack_efb = 0;
  local_f03 = 0;
  uStack_eed = 0;
  uStack_ef5 = 0;
  uStack_ef3 = 0;
  local_ed9 = 0;
  uStack_ed8 = 0;
  uStack_ec8 = 0;
  uStack_ed0 = 0;
  local_eb8 = 0;
  uStack_ec0 = 0;
  local_ea8 = 0;
  uStack_eb0 = 0;
  local_e98 = 0;
  uStack_ea0 = 0;
  local_e88 = 0;
  uStack_e90 = 0;
  uStack_e78 = 0;
  uStack_e80 = 0;
  local_e70 = 0;
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
  local_db4 = 0;
  local_dac = 0;
  local_da8 = 0;
  local_da4 = 0;
  local_d98 = 0;
  local_cdc = 0;
  local_cd8 = 0;
  local_cd4 = 0;
  local_cd0 = 0;
  local_ccc = 0;
  local_cc8 = 0;
  local_cb0 = 0;
  uStack_d88 = 0;
  local_d90 = 0;
  uStack_d78 = 0;
  uStack_d80 = 0;
  uStack_d68 = 0;
  local_d70 = 0;
  uStack_d58 = 0;
  local_d57 = 0;
  uStack_d60 = 0;
  uStack_ca0 = 0;
  local_ca8 = 0;
  local_c98 = 0;
  local_c90 = 0;
  local_c87 = 0;
  uStack_c78 = 0;
  local_c80 = 0;
  uStack_c68 = 0;
  uStack_c70 = 0;
  uStack_c58 = 0;
  uStack_c51 = 0;
  local_c60 = 0;
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
  local_bd0 = 0;
  local_bcc = 0;
  local_bc4 = 0;
  local_bc0 = 0;
  local_bb8 = 0;
  local_bb4 = 0;
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
  local_b58 = 0;
  local_b54 = 0;
  local_b50 = 0;
  local_b4c = 0;
  local_b08 = 0;
  local_b18 = 0;
  local_b0c = 0;
  local_af0 = 0;
  local_9e0 = 0;
  local_9dc = 0;
  local_9d8 = 0;
  local_9c0 = 0;
  uStack_9cc = 0;
  local_9d4 = 0;
  local_9c4 = 0;
  local_9b8 = 0x101;
  local_9b6 = 0;
  local_9b4 = 0;
  local_9b0 = 0;
  local_950 = 0;
  local_948 = 0;
  local_8e8 = 0;
  local_8d8 = 0;
  local_8d4 = 0;
  local_8d0 = 0;
  local_8cc = 0;
  local_8c8 = 0;
  local_8c4 = 0;
  local_8c0 = 0;
  local_8bc = 0;
  local_8b8 = 0;
  local_8b4 = 0;
  local_8dc = 0;
  local_8e0 = 0;
  local_f90 = PTR_vtable_001f0c38 + 0x20;
  uStack_8a8 = 0;
  local_8b0 = 0;
                    /* try { // try from 00186348 to 0018635b has its CatchHandler @ 00186538 */
  facebook::react::RNSScrollViewMarkerProps::RNSScrollViewMarkerProps
            ((RNSScrollViewMarkerProps *)local_8a0,(PropsParserContext *)local_ff0,
             (RNSScrollViewMarkerProps *)&local_f90,(RawProps *)&local_f8);
  puVar5 = PTR_PTR_001f0c40;
  FUN_0017d0e8(local_8a0,PTR_PTR_001f0c40 + 8);
  FUN_0017d0e8(&local_f90,puVar5 + 8);
  facebook::react::RawPropsParser::postPrepare();
  pvVar3 = local_120;
  puVar4 = (undefined8 *)local_110;
  while (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar4[6];
    pvVar8 = (void *)*puVar4;
    local_120 = pvVar3;
    if ((plVar7 == (long *)0x0) || (lVar6 = FUN_001735f0(0xffffffffffffffff,plVar7 + 1), lVar6 != 0)
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
  pvVar8 = local_80;
  pvVar3 = local_78;
  if (local_80 != (void *)0x0) {
    while (pvVar3 != pvVar8) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 00186468 to 00186473 has its CatchHandler @ 0018653c */
        (*(code *)(&PTR_FUN_001e82f8)[*(uint *)((long)pvVar3 + -8)])
                  (&local_f90,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_78 = pvVar8;
    operator_delete(local_80);
  }
  if (local_98 != (void *)0x0) {
    pvStack_90 = local_98;
    operator_delete(local_98);
  }
  folly::dynamic::destroy();
  facebook::jsi::Value::~Value((Value *)local_e0);
  if (local_fb0 != (void *)0x0) {
    pvStack_fa8 = local_fb0;
    operator_delete(local_fb0);
  }
  if (pvStack_fc8 != (void *)0x0) {
    local_fc0 = pvStack_fc8;
    operator_delete(pvStack_fc8);
  }
  if (local_fe0 != (void *)0x0) {
    pvStack_fd8 = local_fe0;
    operator_delete(local_fe0);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00186540  FUN_00186540 =====

void FUN_00186540(void *param_1)

{
  FUN_0019330c();
  operator_delete(param_1);
  return;
}


// ===== 00186564  FUN_00186564 =====

undefined * FUN_00186564(void)

{
  return PTR_RNSScrollViewMarkerComponentName_001f0c30;
}


// ===== 00186570  FUN_00186570 =====

undefined * FUN_00186570(void)

{
  return PTR_RNSScrollViewMarkerComponentName_001f0c30;
}


// ===== 0018657c  FUN_0018657c =====

undefined8 FUN_0018657c(void)

{
  return 0x61;
}


// ===== 00186584  FUN_00186584 =====

void FUN_00186584(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  *puVar6 = &PTR_FUN_001e95e0;
                    /* try { // try from 001865f0 to 001865ff has its CatchHandler @ 001866d8 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_001e9630;
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
                    /* try { // try from 0018668c to 00186697 has its CatchHandler @ 001866c8 */
  (**(code **)(lVar8 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00186708  FUN_00186708 =====

void FUN_00186708(undefined8 *param_1,long *param_2,shared_ptr *param_3,ShadowNodeFragment *param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  YogaLayoutableShadowNode *local_78;
  long *local_70;
  YogaLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar5 = (long *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_001e95e0;
                    /* try { // try from 00186760 to 0018676f has its CatchHandler @ 001868b0 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            (pYVar1,(ShadowNode *)param_3,param_4);
  lVar6 = plVar5[4];
  plVar5[3] = (long)&PTR_FUN_001e9630;
  uVar3 = *(uint *)((long)plVar5 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar6 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)plVar5 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
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
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar6 + 0x6b0) != '\0' || *(char *)(lVar6 + 0x6b1) != '\0') ||
             *(char *)(lVar6 + 0x1e8) != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar5;
                    /* try { // try from 001867f4 to 00186803 has its CatchHandler @ 001868c8 */
  facebook::react::YogaLayoutableShadowNode::completeClone
            ((ShadowNode *)pYVar1,(ShadowNodeFragment *)param_3);
  local_78 = pYVar1;
  local_70 = plVar5;
  FUN_00174090(1,plVar5 + 1);
                    /* try { // try from 00186814 to 00186823 has its CatchHandler @ 001868a0 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar5 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar6 = FUN_001735f0(0xffffffffffffffff,local_70 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 00186860 to 0018686b has its CatchHandler @ 001868c8 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001868f0  FUN_001868f0 =====

void FUN_001868f0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00186900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 00186904  FUN_00186904 =====

void FUN_00186904(undefined8 *param_1,ulong param_2,PropsParserContext *param_3,long *param_4,
                 RawPropsParser *param_5)

{
  RNSScrollViewMarkerProps *this;
  uint uVar1;
  long lVar2;
  bool bVar3;
  RawValue *pRVar4;
  long *plVar5;
  RawValue *pRVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  char *__s2;
  dynamic *pdVar10;
  long lVar11;
  RNSScrollViewMarkerProps *pRVar12;
  undefined1 uStack_d1;
  dynamic local_d0 [32];
  dynamic *local_b0;
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar8 = facebook::react::RawProps::isEmpty(), (uVar8 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSScrollViewMarkerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSScrollViewMarkerPropsENS0_31RNSScrollViewMarkerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b08
         & 1) == 0) &&
       (param_2 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSScrollViewMarkerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSScrollViewMarkerPropsENS0_31RNSScrollViewMarkerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b08
                                     ), (int)param_2 != 0)) {
                    /* try { // try from 00186d38 to 00186d3b has its CatchHandler @ 00186d68 */
      FUN_00187454();
      __cxa_atexit(FUN_00187404,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSScrollViewMarkerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSScrollViewMarkerPropsENS0_31RNSScrollViewMarkerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b00
                   ,&PTR_LOOP_001e77b0);
      param_2 = __cxa_guard_release(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSScrollViewMarkerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSScrollViewMarkerPropsENS0_31RNSScrollViewMarkerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b08
                                   );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSScrollViewMarkerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSScrollViewMarkerPropsENS0_31RNSScrollViewMarkerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b00
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSScrollViewMarkerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSScrollViewMarkerPropsENS0_31RNSScrollViewMarkerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b00
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      param_2 = FUN_00174090(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::parse(param_5);
    pRVar12 = (RNSScrollViewMarkerProps *)*param_4;
    if (pRVar12 == (RNSScrollViewMarkerProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSScrollViewMarkerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSScrollViewMarkerPropsENS0_31RNSScrollViewMarkerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b08
           & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSScrollViewMarkerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSScrollViewMarkerPropsENS0_31RNSScrollViewMarkerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b08
                                     ), iVar7 != 0)) {
                    /* try { // try from 00186cb8 to 00186cbb has its CatchHandler @ 00186d80 */
        FUN_00187454();
        __cxa_atexit(FUN_00187404,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSScrollViewMarkerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSScrollViewMarkerPropsENS0_31RNSScrollViewMarkerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b00
                     ,&PTR_LOOP_001e77b0);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSScrollViewMarkerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSScrollViewMarkerPropsENS0_31RNSScrollViewMarkerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b08
                           );
      }
      pRVar12 = *(RNSScrollViewMarkerProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSScrollViewMarkerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSScrollViewMarkerPropsENS0_31RNSScrollViewMarkerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b00
      ;
    }
    plVar9 = (long *)operator_new(0x708);
    this = (RNSScrollViewMarkerProps *)(plVar9 + 3);
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_FUN_001e9748;
                    /* try { // try from 001869e4 to 001869f7 has its CatchHandler @ 00186df4 */
    facebook::react::RNSScrollViewMarkerProps::RNSScrollViewMarkerProps
              (this,param_3,pRVar12,(RawProps *)param_5);
                    /* try { // try from 001869fc to 00186a0f has its CatchHandler @ 00186e0c */
    uVar8 = facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid();
    if ((((uVar8 & 1) == 0) ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid
                           (), (uVar8 & 1) == 0)) ||
       (uVar8 = facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid(),
       (uVar8 & 1) == 0)) {
LAB_00186a38:
      FUN_00174090(1,plVar9 + 1);
      if ((RawProps *)*param_4 == (RawProps *)0x0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSScrollViewMarkerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSScrollViewMarkerPropsENS0_31RNSScrollViewMarkerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b08
             & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSScrollViewMarkerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSScrollViewMarkerPropsENS0_31RNSScrollViewMarkerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b08
                                       ), iVar7 != 0)) {
                    /* try { // try from 00186cf8 to 00186cfb has its CatchHandler @ 00186d6c */
          FUN_00187454();
          __cxa_atexit(FUN_00187404,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSScrollViewMarkerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSScrollViewMarkerPropsENS0_31RNSScrollViewMarkerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b00
                       ,&PTR_LOOP_001e77b0);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSScrollViewMarkerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSScrollViewMarkerPropsENS0_31RNSScrollViewMarkerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b08
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00186aa0 to 00186ab3 has its CatchHandler @ 00186d98 */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,
                   *(RawProps **)
                    PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSScrollViewMarkerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSScrollViewMarkerPropsENS0_31RNSScrollViewMarkerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b00
                   ,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_00186aec:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_00186aec;
        }
        if (plVar9 != (long *)0x0) goto LAB_00186b00;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00186a54 to 00186a67 has its CatchHandler @ 00186dc0 */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,(RawProps *)*param_4,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_00186b00;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_00186b00:
        lVar11 = FUN_001735f0(0xffffffffffffffff,plVar9 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 00186a1c to 00186a27 has its CatchHandler @ 00186d94 */
      __s2 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar7 = strcmp(PTR_RNSScrollViewMarkerComponentName_001f0c30,__s2);
      if (iVar7 != 0) goto LAB_00186a38;
      bVar3 = false;
    }
                    /* try { // try from 00186b2c to 00186b2f has its CatchHandler @ 00186e0c */
    param_2 = facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter();
    if ((param_2 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 00186b3c to 00186b57 has its CatchHandler @ 00186dbc */
        param_2 = folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar9 + 7));
      }
      else {
        param_2 = facebook::react::RawProps::operator_cast_to_dynamic((RawProps *)param_5);
      }
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00186c98 to 00186ca7 has its CatchHandler @ 00186db4 */
                    /* WARNING: Subroutine does not return */
          FUN_00172ea4(*(undefined8 *)PTR_name_001f09c8);
        }
        goto LAB_00186e58;
      }
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00186c78 to 00186c87 has its CatchHandler @ 00186e18 */
                    /* WARNING: Subroutine does not return */
            FUN_00172ea4(*(undefined8 *)PTR_name_001f0bb0);
          }
          goto LAB_00186e58;
        }
        uVar1 = 0x811c9dc5;
        uVar8 = (ulong)(*(byte *)(plVar5 + 3) >> 1);
        pRVar6 = (RawValue *)((long)plVar5 + 0x19);
        pRVar4 = (RawValue *)((long)plVar5 + 0x19);
        if ((*(byte *)(plVar5 + 3) & 1) != 0) {
          uVar8 = plVar5[4];
          pRVar6 = (RawValue *)plVar5[5];
          pRVar4 = (RawValue *)plVar5[5];
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          uVar1 = (uVar1 ^ (int)(char)*pRVar6) * 0x1000193;
          pRVar6 = pRVar6 + 1;
        }
                    /* try { // try from 00186bd8 to 00186be3 has its CatchHandler @ 00186e20 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 00186be8 to 00186bff has its CatchHandler @ 00186e24 */
        param_2 = facebook::react::HostPlatformViewProps::setProp
                            ((PropsParserContext *)this,(uint)param_3,(char *)(ulong)uVar1,pRVar4);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 00186c10 to 00186c1b has its CatchHandler @ 00186e14 */
          param_2 = (*(code *)(&PTR_FUN_001e82f8)[local_a0])(&uStack_d1,local_d0);
        }
      }
      param_2 = folly::dynamic::destroy();
    }
    param_1[1] = plVar9;
    *param_1 = this;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_00186e58:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}


// ===== 00186e5c  FUN_00186e5c =====

void FUN_00186e5c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00186e64  FUN_00186e64 =====

void FUN_00186e64(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00186e6c  FUN_00186e6c =====

void FUN_00186e6c(undefined8 *param_1,long param_2,long param_3)

{
  EventEmitter *pEVar1;
  ShadowNodeFamily *pSVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ShadowNodeFamily *local_b0;
  undefined8 *local_a8;
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
  FUN_0017dbe4(&local_a0,param_3 + 8,param_3 + 4);
                    /* try { // try from 00186eb0 to 00186eb7 has its CatchHandler @ 00187190 */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_001e9798;
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
    FUN_00174090(1,local_78 + 0x10);
  }
                    /* try { // try from 00186ef4 to 00186f03 has its CatchHandler @ 00187164 */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_001e8610;
                    /* try { // try from 00186f10 to 00186f17 has its CatchHandler @ 00187154 */
  puVar6 = (undefined8 *)operator_new(0x58);
  *puVar6 = &PTR_FUN_001e8630;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[4] = 0;
  puVar6[3] = 0;
  plVar5[0xb] = (long)(puVar6 + 3);
  plVar5[0xc] = (long)puVar6;
  puVar6[6] = 0;
  puVar6[5] = 0;
  puVar6[8] = 0;
  puVar6[7] = 0;
  *(undefined8 *)((long)puVar6 + 0x4c) = 0;
  *(undefined8 *)((long)puVar6 + 0x44) = 0;
  plVar5[3] = (long)&PTR_FUN_001e97e8;
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = plStack_98;
  local_90 = pEVar1;
  local_88 = plVar5;
  if ((plStack_98 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_98 + 1), lVar7 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 00186fc4 to 00186fcb has its CatchHandler @ 00187144 */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  *puVar6 = &PTR_FUN_001e86f0;
  pSVar2 = (ShadowNodeFamily *)(puVar6 + 4);
  puVar6[1] = 0;
  puVar6[2] = 0;
  local_70 = local_90;
  plStack_68 = local_88;
  if (local_88 != (long *)0x0) {
    FUN_00174090(1,local_88 + 1);
  }
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  if (local_78 != 0) {
    FUN_00174090(1,local_78 + 0x10);
  }
                    /* try { // try from 00187014 to 0018702b has its CatchHandler @ 00187114 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar2,param_3,&local_70,&local_80,param_2);
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pEVar1 = local_90;
  *param_1 = pSVar2;
  param_1[1] = puVar6;
  local_b0 = pSVar2;
  local_a8 = puVar6;
  FUN_00174090(1,puVar6 + 2);
                    /* try { // try from 00187080 to 0018708b has its CatchHandler @ 001870f4 */
  facebook::react::EventEmitter::setShadowNodeFamily(pEVar1,&local_b0);
  if (local_a8 != (undefined8 *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001871b8  FUN_001871b8 =====

void FUN_001871b8(void)

{
  return;
}


// ===== 001871bc  FUN_001871bc =====

void FUN_001871bc(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0018720c  FUN_0018720c =====

void FUN_0018720c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e95e0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0018721c  FUN_0018721c =====

void FUN_0018721c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e95e0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0018724c  FUN_0018724c =====

void FUN_0018724c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00187254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00187258  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0018725c  FUN_0018725c =====

void FUN_0018725c(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_001f09e8 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
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
  FUN_00173ffc(param_1 + 0x23);
  FUN_00173f00(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0018731c  FUN_0018731c =====

void FUN_0018731c(long param_1)

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


// ===== 00187384  FUN_00187384 =====

bool FUN_00187384(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 0018739c  FUN_0018739c =====

bool FUN_0018739c(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 001873b4  FUN_001873b4 =====

void FUN_001873b4(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00187404  FUN_00187404 =====

void FUN_00187404(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00187454  FUN_00187454 =====

void FUN_00187454(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x708);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_001e96f8;
  memset(__s,0,0x6f0);
                    /* try { // try from 00187490 to 001874a3 has its CatchHandler @ 0018751c */
  FUN_0017cb10(__s,PTR_PTR_001f0c40 + 0x10);
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
  puVar1 = PTR_vtable_001f0c38;
  *(undefined1 *)((long)puVar2 + 0x6f4) = 0;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSScrollViewMarkerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSScrollViewMarkerPropsENS0_31RNSScrollViewMarkerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b00
  ;
  puVar2[0xe0] = 0;
  puVar2[0xdf] = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 00187538  FUN_00187538 =====

void FUN_00187538(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e96f8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00187548  FUN_00187548 =====

void FUN_00187548(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e96f8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00187578  FUN_00187578 =====

void FUN_00187578(long param_1)

{
  FUN_0017d0e8(param_1 + 0x18,PTR_PTR_001f0c40 + 8);
  return;
}


// ===== 0018758c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 00187590  FUN_00187590 =====

void FUN_00187590(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e9748;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 001875a0  FUN_001875a0 =====

void FUN_001875a0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e9748;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001875d0  FUN_001875d0 =====

void FUN_001875d0(long param_1)

{
  FUN_0017d0e8(param_1 + 0x18,PTR_PTR_001f0c40 + 8);
  return;
}


// ===== 001875e4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 001875e8  FUN_001875e8 =====

void FUN_001875e8(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00187638  FUN_00187638 =====

void FUN_00187638(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e9798;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00187648  FUN_00187648 =====

void FUN_00187648(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e9798;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00187678  FUN_00187678 =====

void FUN_00187678(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00187680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00187684  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 00187688  FUN_00187688 =====

void FUN_00187688(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_001e8610;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_001e8680;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 00187738  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_39RNSFormSheetContentWrapperComponentNameEEEENS0_31RNSFormSheetContentWrapperPropsENS0_38RNSFormSheetContentWrapperEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_39RNSFormSheetContentWrapperComponentNameEEEENS0_31RNSFormSheetContentWrapperPropsENS0_38RNSFormSheetContentWrapperEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1,ComponentDescriptorParameters *param_2)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ComponentDescriptor *this;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  undefined4 local_1010 [2];
  undefined8 *local_1008;
  void *local_1000;
  void *pvStack_ff8;
  undefined8 local_ff0;
  void *pvStack_fe8;
  void *local_fe0;
  undefined8 uStack_fd8;
  void *local_fd0;
  void *pvStack_fc8;
  undefined8 uStack_fc0;
  undefined8 uStack_fb8;
  undefined *local_fb0;
  undefined8 uStack_fa8;
  undefined8 local_fa0;
  undefined8 uStack_f98;
  undefined4 local_f90 [2];
  undefined8 local_f88;
  undefined8 uStack_f80;
  undefined8 local_f78;
  undefined8 uStack_f70;
  undefined4 local_f68;
  undefined4 local_f60;
  undefined1 local_f5c;
  undefined8 local_f5b;
  undefined8 local_f53;
  undefined8 uStack_f4b;
  undefined8 local_f43;
  undefined8 uStack_f3b;
  undefined8 local_f33;
  undefined8 uStack_f2b;
  undefined8 local_f23;
  undefined6 uStack_f1b;
  undefined2 uStack_f15;
  undefined6 uStack_f13;
  undefined8 uStack_f0d;
  undefined4 local_f05;
  undefined8 local_f01;
  undefined1 local_ef9;
  undefined1 uStack_ef8;
  undefined7 uStack_ef7;
  undefined8 uStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  undefined8 local_ed8;
  undefined8 uStack_ed0;
  undefined8 local_ec8;
  undefined8 uStack_ec0;
  undefined8 local_eb8;
  undefined8 uStack_eb0;
  undefined8 local_ea8;
  undefined8 uStack_ea0;
  undefined8 uStack_e98;
  undefined8 local_e90;
  undefined8 local_e88;
  undefined8 uStack_e80;
  undefined8 local_e78;
  undefined4 uStack_e70;
  undefined4 uStack_e6c;
  undefined4 uStack_e68;
  undefined4 uStack_e64;
  undefined4 uStack_e60;
  undefined4 uStack_e5c;
  undefined8 local_e58;
  undefined8 uStack_e50;
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
  undefined4 local_dd8;
  undefined1 local_dd4;
  undefined4 local_dd0;
  undefined1 local_dcc;
  undefined1 local_dc8;
  undefined1 local_dc4;
  undefined1 local_db8;
  undefined8 local_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 local_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined1 uStack_d78;
  undefined7 local_d77;
  undefined1 uStack_d70;
  undefined8 uStack_d6f;
  undefined8 local_d64;
  undefined8 uStack_d5c;
  undefined8 uStack_d54;
  undefined8 uStack_d4c;
  undefined8 local_d44;
  undefined8 uStack_d3c;
  undefined8 uStack_d34;
  undefined8 uStack_d2c;
  undefined8 local_d24;
  undefined8 uStack_d1c;
  undefined8 uStack_d14;
  undefined5 uStack_d0c;
  undefined3 local_d07;
  undefined5 uStack_d04;
  undefined1 local_cfc;
  undefined1 local_cf8;
  undefined1 local_cf4;
  undefined1 local_cf0;
  undefined1 local_cec;
  undefined1 local_ce8;
  undefined1 local_cd0;
  undefined8 local_cc8;
  undefined8 uStack_cc0;
  undefined8 local_cb8;
  undefined4 local_cb0;
  undefined1 local_cac;
  undefined4 local_cab;
  undefined1 local_ca7;
  undefined1 local_ca6;
  undefined8 local_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 local_c80;
  undefined7 uStack_c78;
  undefined4 uStack_c71;
  undefined8 local_c6c;
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
  undefined1 local_bf0;
  undefined1 local_bec;
  undefined1 local_be4;
  undefined1 local_be0;
  undefined1 local_bd8;
  undefined1 local_bd4;
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
  undefined1 local_b78;
  undefined1 local_b74;
  undefined1 local_b70;
  undefined1 local_b6c;
  undefined8 local_b68;
  undefined8 uStack_b60;
  undefined8 local_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined2 local_b38;
  undefined8 local_b34;
  undefined1 local_b2c;
  undefined8 local_b28;
  undefined8 local_b20;
  undefined8 uStack_b18;
  undefined1 local_b10;
  undefined8 local_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 local_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
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
  undefined8 uStack_a20;
  undefined8 local_a18;
  undefined6 uStack_a10;
  undefined2 uStack_a0a;
  undefined6 uStack_a08;
  undefined1 local_a00;
  undefined1 local_9fc;
  undefined1 local_9f8;
  undefined8 local_9f4;
  undefined8 uStack_9ec;
  undefined1 local_9e4;
  undefined8 local_9e0;
  undefined2 local_9d8;
  undefined1 local_9d6;
  undefined4 local_9d4;
  undefined1 local_9d0;
  undefined1 local_970;
  undefined1 local_968;
  undefined1 local_908;
  undefined4 local_900;
  undefined2 local_8fc;
  undefined1 local_8f8;
  undefined1 local_8f4;
  undefined1 local_8f0;
  undefined1 local_8ec;
  undefined1 local_8e8;
  undefined1 local_8e4;
  undefined1 local_8e0;
  undefined1 local_8dc;
  undefined1 local_8d8;
  undefined1 local_8d4;
  undefined *local_8d0;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined8 local_8b8;
  undefined8 local_8b0;
  undefined8 uStack_8a8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
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
  void *local_160;
  undefined8 uStack_158;
  void *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118 [4];
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_d8;
  void *local_d0;
  void *pvStack_c8;
  undefined8 uStack_c0;
  void *local_b8;
  void *local_b0;
  undefined8 uStack_a8;
  long local_a0 [4];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this = (ComponentDescriptor *)operator_new(0x88);
  pvStack_fe8 = (void *)0x0;
  local_ff0 = 0;
  uStack_fd8 = 0;
  local_fe0 = (void *)0x0;
  pvStack_fc8 = (void *)0x0;
  local_fd0 = (void *)0x0;
  uStack_fb8 = 0;
  uStack_fc0 = 0;
  pvStack_ff8 = (void *)0x0;
  local_1000 = (void *)0x0;
                    /* try { // try from 00187788 to 00187793 has its CatchHandler @ 00187e44 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_1000);
  local_130 = 0;
  *(undefined ***)this = &PTR_FUN_001e9820;
  local_128 = 0;
  local_120 = 0;
  local_118[0] = 0;
  local_108 = 0;
  local_100 = 0;
  local_d8 = 0;
  pvStack_c8 = (void *)0x0;
  local_d0 = (void *)0x0;
  local_b8 = (void *)0x0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = (void *)0x0;
  local_140 = 0;
  uStack_148 = 0;
  local_150 = (void *)0x0;
  uStack_158 = 0;
  local_160 = (void *)0x0;
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
  uStack_1e8 = 0;
  local_1f0 = 0;
                    /* try { // try from 001877fc to 00187807 has its CatchHandler @ 00187e38 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1f0);
  local_140 = CONCAT44(local_140._4_4_,0x3f800000);
  local_1010[0] = 0xffffffff;
  uStack_148 = 0;
  local_150 = (void *)0x0;
  uStack_158 = 0;
  local_160 = (void *)0x0;
  local_1008 = &local_1f0;
  facebook::react::RawProps::parse((RawPropsParser *)&local_130);
  memset(local_f90,0,0x6c0);
  local_8d0 = (undefined *)CONCAT44(local_8d0._4_4_,5);
  local_8b8 = 0;
  local_fb0 = PTR_construction_vtable_001f0e40 + 0x20;
  local_f90[0] = 5;
  uStack_fa8 = 0;
  uStack_f98 = 0;
  local_fa0 = 0;
  local_8b0 = 0;
  uStack_8a8 = 0x3f800000;
  uStack_8c0 = 0;
  local_8c8 = 0;
  uStack_f80 = 0;
  local_f88 = 0;
  uStack_f70 = 0;
  local_f78 = 0;
  local_f68 = 0x3f800000;
  folly::dynamic::destroy();
  puVar6 = PTR_PTR_001f0c58;
  puVar5 = PTR_vtable_001f0c50;
  local_f5c = 0;
  local_f01 = 0;
  uStack_a20 = _UNK_00142624;
  local_a28 = _DAT_0014261c;
  local_f5b = DAT_001423b8;
  uStack_b18 = _UNK_001423f8;
  local_b20 = _DAT_001423f0;
  uStack_a30 = _UNK_00142614;
  local_a38 = _DAT_0014260c;
  local_e44 = 0;
  uStack_a40 = _UNK_00142604;
  local_a48 = _DAT_001425fc;
  uStack_a50 = _UNK_001425f4;
  local_a58 = _DAT_001425ec;
  uStack_a08 = 0;
  local_e3c = 0;
  uStack_e70 = 0;
  local_e78 = 0;
  uStack_e5c = 0;
  uStack_e80 = 0;
  local_e88 = 0;
  uStack_a10 = 0;
  uStack_a0a = 0;
  local_a18 = 0;
  local_f60 = 0x10410710;
  local_f05 = 0x40004;
  uStack_e64 = 0;
  uStack_e60 = 0;
  uStack_e6c = 0;
  uStack_e68 = 0;
  uStack_e50 = 0;
  local_e58 = 0;
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
  local_dd8 = 0x7fc00000;
  local_dd0 = 0x7fc00000;
  uStack_d6f = 0;
  uStack_d70 = 0;
  uStack_d5c = 0;
  local_d64 = 0;
  uStack_d4c = 0;
  uStack_d54 = 0;
  uStack_d3c = 0;
  local_d44 = 0;
  uStack_d2c = 0;
  uStack_d34 = 0;
  uStack_d1c = 0;
  local_d24 = 0;
  uStack_d0c = 0;
  uStack_d14 = 0;
  local_d07 = 0;
  uStack_d04 = 0;
  local_cac = 1;
  local_cab = 0;
  local_ca6 = 0x23;
  local_c6c = 0x3f800000;
  uStack_b50 = 0;
  local_b58 = 0;
  uStack_b40 = 0;
  uStack_b48 = 0;
  uStack_b60 = 0;
  local_b68 = 0;
  local_b34 = 0;
  uStack_b00 = 0;
  local_b08 = 0;
  uStack_af0 = 0;
  uStack_af8 = 0;
  uStack_ae0 = 0;
  local_ae8 = 0;
  uStack_ad0 = 0;
  uStack_ad8 = 0;
  uStack_ac0 = 0;
  local_ac8 = 0;
  uStack_ab0 = 0;
  uStack_ab8 = 0;
  uStack_aa0 = 0;
  local_aa8 = 0;
  uStack_a90 = 0;
  uStack_a98 = 0;
  uStack_a80 = 0;
  local_a88 = 0;
  uStack_a70 = 0;
  uStack_a78 = 0;
  uStack_a60 = 0;
  local_a68 = 0;
  uStack_ef7 = 0;
  uStack_f4b = 0;
  local_f53 = 0;
  uStack_f3b = 0;
  local_f43 = 0;
  uStack_f2b = 0;
  local_f33 = 0;
  uStack_f1b = 0;
  local_f23 = 0;
  uStack_f0d = 0;
  uStack_f15 = 0;
  uStack_f13 = 0;
  local_ef9 = 0;
  uStack_ef8 = 0;
  uStack_ee8 = 0;
  uStack_ef0 = 0;
  local_ed8 = 0;
  uStack_ee0 = 0;
  local_ec8 = 0;
  uStack_ed0 = 0;
  local_eb8 = 0;
  uStack_ec0 = 0;
  local_ea8 = 0;
  uStack_eb0 = 0;
  uStack_e98 = 0;
  uStack_ea0 = 0;
  local_e90 = 0;
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
  local_dd4 = 0;
  local_dcc = 0;
  local_dc8 = 0;
  local_dc4 = 0;
  local_db8 = 0;
  local_cfc = 0;
  local_cf8 = 0;
  local_cf4 = 0;
  local_cf0 = 0;
  local_cec = 0;
  local_ce8 = 0;
  local_cd0 = 0;
  uStack_da8 = 0;
  local_db0 = 0;
  uStack_d98 = 0;
  uStack_da0 = 0;
  uStack_d88 = 0;
  local_d90 = 0;
  uStack_d78 = 0;
  local_d77 = 0;
  uStack_d80 = 0;
  uStack_cc0 = 0;
  local_cc8 = 0;
  local_cb8 = 0;
  local_cb0 = 0;
  local_ca7 = 0;
  uStack_c98 = 0;
  local_ca0 = 0;
  uStack_c88 = 0;
  uStack_c90 = 0;
  uStack_c78 = 0;
  uStack_c71 = 0;
  local_c80 = 0;
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
  local_bf0 = 0;
  local_bec = 0;
  local_be4 = 0;
  local_be0 = 0;
  local_bd8 = 0;
  local_bd4 = 0;
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
  local_b78 = 0;
  local_b74 = 0;
  local_b70 = 0;
  local_b6c = 0;
  local_b28 = 0;
  local_b38 = 0;
  local_b2c = 0;
  local_b10 = 0;
  local_a00 = 0;
  local_9fc = 0;
  local_9f8 = 0;
  local_9e0 = 0;
  uStack_9ec = 0;
  local_9f4 = 0;
  local_9e4 = 0;
  local_9d8 = 0x101;
  local_9d6 = 0;
  local_9d4 = 0;
  local_9d0 = 0;
  local_970 = 0;
  local_968 = 0;
  local_908 = 0;
  local_8f8 = 0;
  local_8f4 = 0;
  local_8f0 = 0;
  local_8ec = 0;
  local_8e8 = 0;
  local_8e4 = 0;
  local_8e0 = 0;
  local_8dc = 0;
  local_8d8 = 0;
  local_8d4 = 0;
  local_8fc = 0;
  local_900 = 0;
  local_fb0 = PTR_vtable_001f0c50 + 0x20;
  local_80 = (long *)0x0;
                    /* try { // try from 00187bf8 to 00187c1f has its CatchHandler @ 00187dfc */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)&local_8d0,(PropsParserContext *)(PTR_PTR_001f0c58 + 8),
             (HostPlatformViewProps *)local_1010,(RawProps *)&local_fb0,(function *)&local_130);
  if (local_80 == local_a0) {
    lVar7 = 4;
    plVar8 = local_a0;
  }
  else {
    if (local_80 == (long *)0x0) goto LAB_00187c4c;
    lVar7 = 5;
    plVar8 = local_80;
  }
  (**(code **)(*plVar8 + lVar7 * 8))();
LAB_00187c4c:
  local_8d0 = puVar5 + 0x20;
  FUN_0017d0e8(&local_8d0,puVar6 + 8);
  FUN_0017d0e8(&local_fb0,puVar6 + 8);
  facebook::react::RawPropsParser::postPrepare();
  pvVar3 = local_160;
  puVar4 = (undefined8 *)local_150;
  while (puVar4 != (undefined8 *)0x0) {
    plVar8 = (long *)puVar4[6];
    pvVar9 = (void *)*puVar4;
    local_160 = pvVar3;
    if ((plVar8 == (long *)0x0) || (lVar7 = FUN_001735f0(0xffffffffffffffff,plVar8 + 1), lVar7 != 0)
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
    pvVar3 = local_160;
    puVar4 = (undefined8 *)pvVar9;
  }
  local_160 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_198);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_1c8);
  std::__ndk1::mutex::~mutex((mutex *)&local_1f0);
  pvVar9 = local_b8;
  pvVar3 = local_b0;
  if (local_b8 != (void *)0x0) {
    while (pvVar3 != pvVar9) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 00187d58 to 00187d63 has its CatchHandler @ 00187e74 */
        (*(code *)(&PTR_FUN_001e82f8)[*(uint *)((long)pvVar3 + -8)])
                  (&local_fb0,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_b0 = pvVar9;
    operator_delete(local_b8);
  }
  if (local_d0 != (void *)0x0) {
    pvStack_c8 = local_d0;
    operator_delete(local_d0);
  }
  folly::dynamic::destroy();
  facebook::jsi::Value::~Value((Value *)local_118);
  if (local_fd0 != (void *)0x0) {
    pvStack_fc8 = local_fd0;
    operator_delete(local_fd0);
  }
  if (pvStack_fe8 != (void *)0x0) {
    local_fe0 = pvStack_fe8;
    operator_delete(pvStack_fe8);
  }
  if (local_1000 != (void *)0x0) {
    pvStack_ff8 = local_1000;
    operator_delete(local_1000);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00187e78  FUN_00187e78 =====

void FUN_00187e78(void *param_1)

{
  FUN_0019330c();
  operator_delete(param_1);
  return;
}


// ===== 00187e9c  FUN_00187e9c =====

undefined * FUN_00187e9c(void)

{
  return PTR_RNSFormSheetContentWrapperComponentName_001f0c48;
}


// ===== 00187ea8  FUN_00187ea8 =====

undefined * FUN_00187ea8(void)

{
  return PTR_RNSFormSheetContentWrapperComponentName_001f0c48;
}


// ===== 00187eb4  FUN_00187eb4 =====

undefined8 FUN_00187eb4(void)

{
  return 0x61;
}


// ===== 00187ebc  FUN_00187ebc =====

void FUN_00187ebc(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  *puVar6 = &PTR_FUN_001e98b0;
                    /* try { // try from 00187f28 to 00187f37 has its CatchHandler @ 00188010 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_001e9900;
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
                    /* try { // try from 00187fc4 to 00187fcf has its CatchHandler @ 00188000 */
  (**(code **)(lVar8 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00188040  FUN_00188040 =====

void FUN_00188040(undefined8 *param_1,long *param_2,shared_ptr *param_3,ShadowNodeFragment *param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  YogaLayoutableShadowNode *local_78;
  long *local_70;
  YogaLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar5 = (long *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_001e98b0;
                    /* try { // try from 00188098 to 001880a7 has its CatchHandler @ 001881e8 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            (pYVar1,(ShadowNode *)param_3,param_4);
  lVar6 = plVar5[4];
  plVar5[3] = (long)&PTR_FUN_001e9900;
  uVar3 = *(uint *)((long)plVar5 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar6 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)plVar5 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
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
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar6 + 0x6b0) != '\0' || *(char *)(lVar6 + 0x6b1) != '\0') ||
             *(char *)(lVar6 + 0x1e8) != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar5;
                    /* try { // try from 0018812c to 0018813b has its CatchHandler @ 00188200 */
  facebook::react::YogaLayoutableShadowNode::completeClone
            ((ShadowNode *)pYVar1,(ShadowNodeFragment *)param_3);
  local_78 = pYVar1;
  local_70 = plVar5;
  FUN_00174090(1,plVar5 + 1);
                    /* try { // try from 0018814c to 0018815b has its CatchHandler @ 001881d8 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar5 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar6 = FUN_001735f0(0xffffffffffffffff,local_70 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 00188198 to 001881a3 has its CatchHandler @ 00188200 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00188228  FUN_00188228 =====

void FUN_00188228(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00188238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 0018823c  FUN_0018823c =====

void FUN_0018823c(undefined8 *param_1,ulong param_2,HostPlatformViewProps *param_3,long *param_4,
                 RawPropsParser *param_5)

{
  HostPlatformViewProps *this;
  uint uVar1;
  long lVar2;
  bool bVar3;
  RawValue *pRVar4;
  long *plVar5;
  RawValue *pRVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  char *__s2;
  dynamic *pdVar10;
  long lVar11;
  RawProps *pRVar12;
  undefined1 uStack_d1;
  dynamic local_d0 [32];
  dynamic *local_b0;
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar8 = facebook::react::RawProps::isEmpty(), (uVar8 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_39RNSFormSheetContentWrapperComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_31RNSFormSheetContentWrapperPropsENS0_38RNSFormSheetContentWrapperEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b18
         & 1) == 0) &&
       (param_2 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_39RNSFormSheetContentWrapperComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_31RNSFormSheetContentWrapperPropsENS0_38RNSFormSheetContentWrapperEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b18
                                     ), (int)param_2 != 0)) {
                    /* try { // try from 001886c4 to 001886c7 has its CatchHandler @ 001886f4 */
      FUN_00188e10();
      __cxa_atexit(FUN_00188dc0,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_39RNSFormSheetContentWrapperComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_31RNSFormSheetContentWrapperPropsENS0_38RNSFormSheetContentWrapperEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b10
                   ,&PTR_LOOP_001e77b0);
      param_2 = __cxa_guard_release(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_39RNSFormSheetContentWrapperComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_31RNSFormSheetContentWrapperPropsENS0_38RNSFormSheetContentWrapperEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b18
                                   );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_39RNSFormSheetContentWrapperComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_31RNSFormSheetContentWrapperPropsENS0_38RNSFormSheetContentWrapperEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b10
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_39RNSFormSheetContentWrapperComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_31RNSFormSheetContentWrapperPropsENS0_38RNSFormSheetContentWrapperEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b10
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      param_2 = FUN_00174090(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::parse(param_5);
    pRVar12 = (RawProps *)*param_4;
    if (pRVar12 == (RawProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_39RNSFormSheetContentWrapperComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_31RNSFormSheetContentWrapperPropsENS0_38RNSFormSheetContentWrapperEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b18
           & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_39RNSFormSheetContentWrapperComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_31RNSFormSheetContentWrapperPropsENS0_38RNSFormSheetContentWrapperEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b18
                                     ), iVar7 != 0)) {
                    /* try { // try from 00188644 to 00188647 has its CatchHandler @ 0018870c */
        FUN_00188e10();
        __cxa_atexit(FUN_00188dc0,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_39RNSFormSheetContentWrapperComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_31RNSFormSheetContentWrapperPropsENS0_38RNSFormSheetContentWrapperEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b10
                     ,&PTR_LOOP_001e77b0);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_39RNSFormSheetContentWrapperComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_31RNSFormSheetContentWrapperPropsENS0_38RNSFormSheetContentWrapperEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b18
                           );
      }
      pRVar12 = *(RawProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_39RNSFormSheetContentWrapperComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_31RNSFormSheetContentWrapperPropsENS0_38RNSFormSheetContentWrapperEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b10
      ;
    }
    plVar9 = (long *)operator_new(0x6f8);
    this = (HostPlatformViewProps *)(plVar9 + 3);
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_FUN_001e9a18;
    local_b0 = (dynamic *)0x0;
                    /* try { // try from 00188320 to 00188347 has its CatchHandler @ 00188780 */
    facebook::react::HostPlatformViewProps::HostPlatformViewProps
              (this,(PropsParserContext *)(PTR_PTR_001f0c58 + 8),param_3,pRVar12,(function *)param_5
              );
    if (local_b0 == local_d0) {
      lVar11 = 4;
      pdVar10 = local_d0;
LAB_00188368:
      (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
    }
    else if (local_b0 != (dynamic *)0x0) {
      lVar11 = 5;
      pdVar10 = local_b0;
      goto LAB_00188368;
    }
    plVar9[3] = (long)(PTR_vtable_001f0c50 + 0x20);
                    /* try { // try from 00188388 to 0018839b has its CatchHandler @ 001887c8 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid();
    if ((((uVar8 & 1) == 0) ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid
                           (), (uVar8 & 1) == 0)) ||
       (uVar8 = facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid(),
       (uVar8 & 1) == 0)) {
LAB_001883c4:
      FUN_00174090(1,plVar9 + 1);
      if ((RawProps *)*param_4 == (RawProps *)0x0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_39RNSFormSheetContentWrapperComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_31RNSFormSheetContentWrapperPropsENS0_38RNSFormSheetContentWrapperEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b18
             & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_39RNSFormSheetContentWrapperComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_31RNSFormSheetContentWrapperPropsENS0_38RNSFormSheetContentWrapperEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b18
                                       ), iVar7 != 0)) {
                    /* try { // try from 00188684 to 00188687 has its CatchHandler @ 001886f8 */
          FUN_00188e10();
          __cxa_atexit(FUN_00188dc0,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_39RNSFormSheetContentWrapperComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_31RNSFormSheetContentWrapperPropsENS0_38RNSFormSheetContentWrapperEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b10
                       ,&PTR_LOOP_001e77b0);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_39RNSFormSheetContentWrapperComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_31RNSFormSheetContentWrapperPropsENS0_38RNSFormSheetContentWrapperEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b18
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0018842c to 0018843f has its CatchHandler @ 00188724 */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,
                   *(RawProps **)
                    PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_39RNSFormSheetContentWrapperComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_31RNSFormSheetContentWrapperPropsENS0_38RNSFormSheetContentWrapperEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b10
                   ,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_00188478:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_00188478;
        }
        if (plVar9 != (long *)0x0) goto LAB_0018848c;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 001883e0 to 001883f3 has its CatchHandler @ 0018874c */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,(RawProps *)*param_4,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_0018848c;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_0018848c:
        lVar11 = FUN_001735f0(0xffffffffffffffff,plVar9 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 001883a8 to 001883b3 has its CatchHandler @ 00188720 */
      __s2 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar7 = strcmp(PTR_RNSFormSheetContentWrapperComponentName_001f0c48,__s2);
      if (iVar7 != 0) goto LAB_001883c4;
      bVar3 = false;
    }
                    /* try { // try from 001884b8 to 001884bb has its CatchHandler @ 001887c8 */
    param_2 = facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter();
    if ((param_2 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 001884c8 to 001884e3 has its CatchHandler @ 00188748 */
        param_2 = folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar9 + 7));
      }
      else {
        param_2 = facebook::react::RawProps::operator_cast_to_dynamic((RawProps *)param_5);
      }
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00188624 to 00188633 has its CatchHandler @ 00188740 */
                    /* WARNING: Subroutine does not return */
          FUN_00172ea4(*(undefined8 *)PTR_name_001f09c8);
        }
        goto LAB_00188814;
      }
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00188604 to 00188613 has its CatchHandler @ 001887d4 */
                    /* WARNING: Subroutine does not return */
            FUN_00172ea4(*(undefined8 *)PTR_name_001f0bb0);
          }
          goto LAB_00188814;
        }
        uVar1 = 0x811c9dc5;
        uVar8 = (ulong)(*(byte *)(plVar5 + 3) >> 1);
        pRVar6 = (RawValue *)((long)plVar5 + 0x19);
        pRVar4 = (RawValue *)((long)plVar5 + 0x19);
        if ((*(byte *)(plVar5 + 3) & 1) != 0) {
          uVar8 = plVar5[4];
          pRVar6 = (RawValue *)plVar5[5];
          pRVar4 = (RawValue *)plVar5[5];
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          uVar1 = (uVar1 ^ (int)(char)*pRVar6) * 0x1000193;
          pRVar6 = pRVar6 + 1;
        }
                    /* try { // try from 00188564 to 0018856f has its CatchHandler @ 001887dc */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 00188574 to 0018858b has its CatchHandler @ 001887e0 */
        param_2 = facebook::react::HostPlatformViewProps::setProp
                            ((PropsParserContext *)this,(uint)param_3,(char *)(ulong)uVar1,pRVar4);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 0018859c to 001885a7 has its CatchHandler @ 001887d0 */
          param_2 = (*(code *)(&PTR_FUN_001e82f8)[local_a0])(&uStack_d1,local_d0);
        }
      }
      param_2 = folly::dynamic::destroy();
    }
    param_1[1] = plVar9;
    *param_1 = this;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_00188814:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}


// ===== 00188818  FUN_00188818 =====

void FUN_00188818(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00188820  FUN_00188820 =====

void FUN_00188820(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00188828  FUN_00188828 =====

void FUN_00188828(undefined8 *param_1,long param_2,long param_3)

{
  EventEmitter *pEVar1;
  ShadowNodeFamily *pSVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ShadowNodeFamily *local_b0;
  undefined8 *local_a8;
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
  FUN_0017dbe4(&local_a0,param_3 + 8,param_3 + 4);
                    /* try { // try from 0018886c to 00188873 has its CatchHandler @ 00188b4c */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_001e9a68;
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
    FUN_00174090(1,local_78 + 0x10);
  }
                    /* try { // try from 001888b0 to 001888bf has its CatchHandler @ 00188b20 */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_001e8610;
                    /* try { // try from 001888cc to 001888d3 has its CatchHandler @ 00188b10 */
  puVar6 = (undefined8 *)operator_new(0x58);
  *puVar6 = &PTR_FUN_001e8630;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[4] = 0;
  puVar6[3] = 0;
  plVar5[0xb] = (long)(puVar6 + 3);
  plVar5[0xc] = (long)puVar6;
  puVar6[6] = 0;
  puVar6[5] = 0;
  puVar6[8] = 0;
  puVar6[7] = 0;
  *(undefined8 *)((long)puVar6 + 0x4c) = 0;
  *(undefined8 *)((long)puVar6 + 0x44) = 0;
  plVar5[3] = (long)&PTR_FUN_001e9ab8;
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = plStack_98;
  local_90 = pEVar1;
  local_88 = plVar5;
  if ((plStack_98 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_98 + 1), lVar7 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 00188980 to 00188987 has its CatchHandler @ 00188b00 */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  *puVar6 = &PTR_FUN_001e86f0;
  pSVar2 = (ShadowNodeFamily *)(puVar6 + 4);
  puVar6[1] = 0;
  puVar6[2] = 0;
  local_70 = local_90;
  plStack_68 = local_88;
  if (local_88 != (long *)0x0) {
    FUN_00174090(1,local_88 + 1);
  }
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  if (local_78 != 0) {
    FUN_00174090(1,local_78 + 0x10);
  }
                    /* try { // try from 001889d0 to 001889e7 has its CatchHandler @ 00188ad0 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar2,param_3,&local_70,&local_80,param_2);
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pEVar1 = local_90;
  *param_1 = pSVar2;
  param_1[1] = puVar6;
  local_b0 = pSVar2;
  local_a8 = puVar6;
  FUN_00174090(1,puVar6 + 2);
                    /* try { // try from 00188a3c to 00188a47 has its CatchHandler @ 00188ab0 */
  facebook::react::EventEmitter::setShadowNodeFamily(pEVar1,&local_b0);
  if (local_a8 != (undefined8 *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00188b74  FUN_00188b74 =====

void FUN_00188b74(void)

{
  return;
}


// ===== 00188b78  FUN_00188b78 =====

void FUN_00188b78(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00188bc8  FUN_00188bc8 =====

void FUN_00188bc8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e98b0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00188bd8  FUN_00188bd8 =====

void FUN_00188bd8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e98b0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00188c08  FUN_00188c08 =====

void FUN_00188c08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00188c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00188c14  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 00188c18  FUN_00188c18 =====

void FUN_00188c18(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_001f09e8 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
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
  FUN_00173ffc(param_1 + 0x23);
  FUN_00173f00(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00188cd8  FUN_00188cd8 =====

void FUN_00188cd8(long param_1)

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


// ===== 00188d40  FUN_00188d40 =====

bool FUN_00188d40(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 00188d58  FUN_00188d58 =====

bool FUN_00188d58(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 00188d70  FUN_00188d70 =====

void FUN_00188d70(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00188dc0  FUN_00188dc0 =====

void FUN_00188dc0(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00188e10  FUN_00188e10 =====

void FUN_00188e10(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x6f8);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_001e99c8;
  memset(__s,0,0x6e0);
                    /* try { // try from 00188e4c to 00188e5f has its CatchHandler @ 00188ecc */
  FUN_0017cb10(__s,PTR_PTR_001f0c58 + 0x10);
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
  puVar1 = PTR_vtable_001f0c50;
  *(undefined1 *)((long)puVar2 + 0x6f4) = 0;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_39RNSFormSheetContentWrapperComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_31RNSFormSheetContentWrapperPropsENS0_38RNSFormSheetContentWrapperEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b10
  ;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 00188ee8  FUN_00188ee8 =====

void FUN_00188ee8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e99c8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00188ef8  FUN_00188ef8 =====

void FUN_00188ef8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e99c8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00188f28  FUN_00188f28 =====

void FUN_00188f28(long param_1)

{
  FUN_0017d0e8(param_1 + 0x18,PTR_PTR_001f0c58 + 8);
  return;
}


// ===== 00188f3c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 00188f40  FUN_00188f40 =====

void FUN_00188f40(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e9a18;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00188f50  FUN_00188f50 =====

void FUN_00188f50(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e9a18;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00188f80  FUN_00188f80 =====

void FUN_00188f80(long param_1)

{
  FUN_0017d0e8(param_1 + 0x18,PTR_PTR_001f0c58 + 8);
  return;
}


// ===== 00188f94  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 00188f98  FUN_00188f98 =====

void FUN_00188f98(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00188fe8  FUN_00188fe8 =====

void FUN_00188fe8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e9a68;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00188ff8  FUN_00188ff8 =====

void FUN_00188ff8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e9a68;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00189028  FUN_00189028 =====

void FUN_00189028(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00189030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00189034  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 00189038  FUN_00189038 =====

void FUN_00189038(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_001e8610;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_001e8680;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 001890e8  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_32RNSScrollToTopGuardComponentNameEEEENS0_24RNSScrollToTopGuardPropsENS0_31RNSScrollToTopGuardEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_32RNSScrollToTopGuardComponentNameEEEENS0_24RNSScrollToTopGuardPropsENS0_31RNSScrollToTopGuardEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1,ComponentDescriptorParameters *param_2)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ComponentDescriptor *this;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  undefined4 local_1010 [2];
  undefined8 *local_1008;
  void *local_1000;
  void *pvStack_ff8;
  undefined8 local_ff0;
  void *pvStack_fe8;
  void *local_fe0;
  undefined8 uStack_fd8;
  void *local_fd0;
  void *pvStack_fc8;
  undefined8 uStack_fc0;
  undefined8 uStack_fb8;
  undefined *local_fb0;
  undefined8 uStack_fa8;
  undefined8 local_fa0;
  undefined8 uStack_f98;
  undefined4 local_f90 [2];
  undefined8 local_f88;
  undefined8 uStack_f80;
  undefined8 local_f78;
  undefined8 uStack_f70;
  undefined4 local_f68;
  undefined4 local_f60;
  undefined1 local_f5c;
  undefined8 local_f5b;
  undefined8 local_f53;
  undefined8 uStack_f4b;
  undefined8 local_f43;
  undefined8 uStack_f3b;
  undefined8 local_f33;
  undefined8 uStack_f2b;
  undefined8 local_f23;
  undefined6 uStack_f1b;
  undefined2 uStack_f15;
  undefined6 uStack_f13;
  undefined8 uStack_f0d;
  undefined4 local_f05;
  undefined8 local_f01;
  undefined1 local_ef9;
  undefined1 uStack_ef8;
  undefined7 uStack_ef7;
  undefined8 uStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  undefined8 local_ed8;
  undefined8 uStack_ed0;
  undefined8 local_ec8;
  undefined8 uStack_ec0;
  undefined8 local_eb8;
  undefined8 uStack_eb0;
  undefined8 local_ea8;
  undefined8 uStack_ea0;
  undefined8 uStack_e98;
  undefined8 local_e90;
  undefined8 local_e88;
  undefined8 uStack_e80;
  undefined8 local_e78;
  undefined4 uStack_e70;
  undefined4 uStack_e6c;
  undefined4 uStack_e68;
  undefined4 uStack_e64;
  undefined4 uStack_e60;
  undefined4 uStack_e5c;
  undefined8 local_e58;
  undefined8 uStack_e50;
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
  undefined4 local_dd8;
  undefined1 local_dd4;
  undefined4 local_dd0;
  undefined1 local_dcc;
  undefined1 local_dc8;
  undefined1 local_dc4;
  undefined1 local_db8;
  undefined8 local_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 local_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined1 uStack_d78;
  undefined7 local_d77;
  undefined1 uStack_d70;
  undefined8 uStack_d6f;
  undefined8 local_d64;
  undefined8 uStack_d5c;
  undefined8 uStack_d54;
  undefined8 uStack_d4c;
  undefined8 local_d44;
  undefined8 uStack_d3c;
  undefined8 uStack_d34;
  undefined8 uStack_d2c;
  undefined8 local_d24;
  undefined8 uStack_d1c;
  undefined8 uStack_d14;
  undefined5 uStack_d0c;
  undefined3 local_d07;
  undefined5 uStack_d04;
  undefined1 local_cfc;
  undefined1 local_cf8;
  undefined1 local_cf4;
  undefined1 local_cf0;
  undefined1 local_cec;
  undefined1 local_ce8;
  undefined1 local_cd0;
  undefined8 local_cc8;
  undefined8 uStack_cc0;
  undefined8 local_cb8;
  undefined4 local_cb0;
  undefined1 local_cac;
  undefined4 local_cab;
  undefined1 local_ca7;
  undefined1 local_ca6;
  undefined8 local_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 local_c80;
  undefined7 uStack_c78;
  undefined4 uStack_c71;
  undefined8 local_c6c;
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
  undefined1 local_bf0;
  undefined1 local_bec;
  undefined1 local_be4;
  undefined1 local_be0;
  undefined1 local_bd8;
  undefined1 local_bd4;
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
  undefined1 local_b78;
  undefined1 local_b74;
  undefined1 local_b70;
  undefined1 local_b6c;
  undefined8 local_b68;
  undefined8 uStack_b60;
  undefined8 local_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined2 local_b38;
  undefined8 local_b34;
  undefined1 local_b2c;
  undefined8 local_b28;
  undefined8 local_b20;
  undefined8 uStack_b18;
  undefined1 local_b10;
  undefined8 local_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 local_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
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
  undefined8 uStack_a20;
  undefined8 local_a18;
  undefined6 uStack_a10;
  undefined2 uStack_a0a;
  undefined6 uStack_a08;
  undefined1 local_a00;
  undefined1 local_9fc;
  undefined1 local_9f8;
  undefined8 local_9f4;
  undefined8 uStack_9ec;
  undefined1 local_9e4;
  undefined8 local_9e0;
  undefined2 local_9d8;
  undefined1 local_9d6;
  undefined4 local_9d4;
  undefined1 local_9d0;
  undefined1 local_970;
  undefined1 local_968;
  undefined1 local_908;
  undefined4 local_900;
  undefined2 local_8fc;
  undefined1 local_8f8;
  undefined1 local_8f4;
  undefined1 local_8f0;
  undefined1 local_8ec;
  undefined1 local_8e8;
  undefined1 local_8e4;
  undefined1 local_8e0;
  undefined1 local_8dc;
  undefined1 local_8d8;
  undefined1 local_8d4;
  undefined *local_8d0;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined8 local_8b8;
  undefined8 local_8b0;
  undefined8 uStack_8a8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
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
  void *local_160;
  undefined8 uStack_158;
  void *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118 [4];
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_d8;
  void *local_d0;
  void *pvStack_c8;
  undefined8 uStack_c0;
  void *local_b8;
  void *local_b0;
  undefined8 uStack_a8;
  long local_a0 [4];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this = (ComponentDescriptor *)operator_new(0x88);
  pvStack_fe8 = (void *)0x0;
  local_ff0 = 0;
  uStack_fd8 = 0;
  local_fe0 = (void *)0x0;
  pvStack_fc8 = (void *)0x0;
  local_fd0 = (void *)0x0;
  uStack_fb8 = 0;
  uStack_fc0 = 0;
  pvStack_ff8 = (void *)0x0;
  local_1000 = (void *)0x0;
                    /* try { // try from 00189138 to 00189143 has its CatchHandler @ 001897f4 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_1000);
  local_130 = 0;
  *(undefined ***)this = &PTR_FUN_001e9af0;
  local_128 = 0;
  local_120 = 0;
  local_118[0] = 0;
  local_108 = 0;
  local_100 = 0;
  local_d8 = 0;
  pvStack_c8 = (void *)0x0;
  local_d0 = (void *)0x0;
  local_b8 = (void *)0x0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = (void *)0x0;
  local_140 = 0;
  uStack_148 = 0;
  local_150 = (void *)0x0;
  uStack_158 = 0;
  local_160 = (void *)0x0;
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
  uStack_1e8 = 0;
  local_1f0 = 0;
                    /* try { // try from 001891ac to 001891b7 has its CatchHandler @ 001897e8 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1f0);
  local_140 = CONCAT44(local_140._4_4_,0x3f800000);
  local_1010[0] = 0xffffffff;
  uStack_148 = 0;
  local_150 = (void *)0x0;
  uStack_158 = 0;
  local_160 = (void *)0x0;
  local_1008 = &local_1f0;
  facebook::react::RawProps::parse((RawPropsParser *)&local_130);
  memset(local_f90,0,0x6c0);
  local_8d0 = (undefined *)CONCAT44(local_8d0._4_4_,5);
  local_8b8 = 0;
  local_fb0 = PTR_construction_vtable_001f0e48 + 0x20;
  local_f90[0] = 5;
  uStack_fa8 = 0;
  uStack_f98 = 0;
  local_fa0 = 0;
  local_8b0 = 0;
  uStack_8a8 = 0x3f800000;
  uStack_8c0 = 0;
  local_8c8 = 0;
  uStack_f80 = 0;
  local_f88 = 0;
  uStack_f70 = 0;
  local_f78 = 0;
  local_f68 = 0x3f800000;
  folly::dynamic::destroy();
  puVar6 = PTR_PTR_001f0c70;
  puVar5 = PTR_vtable_001f0c68;
  local_f5c = 0;
  local_f01 = 0;
  uStack_a20 = _UNK_00142624;
  local_a28 = _DAT_0014261c;
  local_f5b = DAT_001423b8;
  uStack_b18 = _UNK_001423f8;
  local_b20 = _DAT_001423f0;
  uStack_a30 = _UNK_00142614;
  local_a38 = _DAT_0014260c;
  local_e44 = 0;
  uStack_a40 = _UNK_00142604;
  local_a48 = _DAT_001425fc;
  uStack_a50 = _UNK_001425f4;
  local_a58 = _DAT_001425ec;
  uStack_a08 = 0;
  local_e3c = 0;
  uStack_e70 = 0;
  local_e78 = 0;
  uStack_e5c = 0;
  uStack_e80 = 0;
  local_e88 = 0;
  uStack_a10 = 0;
  uStack_a0a = 0;
  local_a18 = 0;
  local_f60 = 0x10410710;
  local_f05 = 0x40004;
  uStack_e64 = 0;
  uStack_e60 = 0;
  uStack_e6c = 0;
  uStack_e68 = 0;
  uStack_e50 = 0;
  local_e58 = 0;
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
  local_dd8 = 0x7fc00000;
  local_dd0 = 0x7fc00000;
  uStack_d6f = 0;
  uStack_d70 = 0;
  uStack_d5c = 0;
  local_d64 = 0;
  uStack_d4c = 0;
  uStack_d54 = 0;
  uStack_d3c = 0;
  local_d44 = 0;
  uStack_d2c = 0;
  uStack_d34 = 0;
  uStack_d1c = 0;
  local_d24 = 0;
  uStack_d0c = 0;
  uStack_d14 = 0;
  local_d07 = 0;
  uStack_d04 = 0;
  local_cac = 1;
  local_cab = 0;
  local_ca6 = 0x23;
  local_c6c = 0x3f800000;
  uStack_b50 = 0;
  local_b58 = 0;
  uStack_b40 = 0;
  uStack_b48 = 0;
  uStack_b60 = 0;
  local_b68 = 0;
  local_b34 = 0;
  uStack_b00 = 0;
  local_b08 = 0;
  uStack_af0 = 0;
  uStack_af8 = 0;
  uStack_ae0 = 0;
  local_ae8 = 0;
  uStack_ad0 = 0;
  uStack_ad8 = 0;
  uStack_ac0 = 0;
  local_ac8 = 0;
  uStack_ab0 = 0;
  uStack_ab8 = 0;
  uStack_aa0 = 0;
  local_aa8 = 0;
  uStack_a90 = 0;
  uStack_a98 = 0;
  uStack_a80 = 0;
  local_a88 = 0;
  uStack_a70 = 0;
  uStack_a78 = 0;
  uStack_a60 = 0;
  local_a68 = 0;
  uStack_ef7 = 0;
  uStack_f4b = 0;
  local_f53 = 0;
  uStack_f3b = 0;
  local_f43 = 0;
  uStack_f2b = 0;
  local_f33 = 0;
  uStack_f1b = 0;
  local_f23 = 0;
  uStack_f0d = 0;
  uStack_f15 = 0;
  uStack_f13 = 0;
  local_ef9 = 0;
  uStack_ef8 = 0;
  uStack_ee8 = 0;
  uStack_ef0 = 0;
  local_ed8 = 0;
  uStack_ee0 = 0;
  local_ec8 = 0;
  uStack_ed0 = 0;
  local_eb8 = 0;
  uStack_ec0 = 0;
  local_ea8 = 0;
  uStack_eb0 = 0;
  uStack_e98 = 0;
  uStack_ea0 = 0;
  local_e90 = 0;
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
  local_dd4 = 0;
  local_dcc = 0;
  local_dc8 = 0;
  local_dc4 = 0;
  local_db8 = 0;
  local_cfc = 0;
  local_cf8 = 0;
  local_cf4 = 0;
  local_cf0 = 0;
  local_cec = 0;
  local_ce8 = 0;
  local_cd0 = 0;
  uStack_da8 = 0;
  local_db0 = 0;
  uStack_d98 = 0;
  uStack_da0 = 0;
  uStack_d88 = 0;
  local_d90 = 0;
  uStack_d78 = 0;
  local_d77 = 0;
  uStack_d80 = 0;
  uStack_cc0 = 0;
  local_cc8 = 0;
  local_cb8 = 0;
  local_cb0 = 0;
  local_ca7 = 0;
  uStack_c98 = 0;
  local_ca0 = 0;
  uStack_c88 = 0;
  uStack_c90 = 0;
  uStack_c78 = 0;
  uStack_c71 = 0;
  local_c80 = 0;
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
  local_bf0 = 0;
  local_bec = 0;
  local_be4 = 0;
  local_be0 = 0;
  local_bd8 = 0;
  local_bd4 = 0;
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
  local_b78 = 0;
  local_b74 = 0;
  local_b70 = 0;
  local_b6c = 0;
  local_b28 = 0;
  local_b38 = 0;
  local_b2c = 0;
  local_b10 = 0;
  local_a00 = 0;
  local_9fc = 0;
  local_9f8 = 0;
  local_9e0 = 0;
  uStack_9ec = 0;
  local_9f4 = 0;
  local_9e4 = 0;
  local_9d8 = 0x101;
  local_9d6 = 0;
  local_9d4 = 0;
  local_9d0 = 0;
  local_970 = 0;
  local_968 = 0;
  local_908 = 0;
  local_8f8 = 0;
  local_8f4 = 0;
  local_8f0 = 0;
  local_8ec = 0;
  local_8e8 = 0;
  local_8e4 = 0;
  local_8e0 = 0;
  local_8dc = 0;
  local_8d8 = 0;
  local_8d4 = 0;
  local_8fc = 0;
  local_900 = 0;
  local_fb0 = PTR_vtable_001f0c68 + 0x20;
  local_80 = (long *)0x0;
                    /* try { // try from 001895a8 to 001895cf has its CatchHandler @ 001897ac */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)&local_8d0,(PropsParserContext *)(PTR_PTR_001f0c70 + 8),
             (HostPlatformViewProps *)local_1010,(RawProps *)&local_fb0,(function *)&local_130);
  if (local_80 == local_a0) {
    lVar7 = 4;
    plVar8 = local_a0;
  }
  else {
    if (local_80 == (long *)0x0) goto LAB_001895fc;
    lVar7 = 5;
    plVar8 = local_80;
  }
  (**(code **)(*plVar8 + lVar7 * 8))();
LAB_001895fc:
  local_8d0 = puVar5 + 0x20;
  FUN_0017d0e8(&local_8d0,puVar6 + 8);
  FUN_0017d0e8(&local_fb0,puVar6 + 8);
  facebook::react::RawPropsParser::postPrepare();
  pvVar3 = local_160;
  puVar4 = (undefined8 *)local_150;
  while (puVar4 != (undefined8 *)0x0) {
    plVar8 = (long *)puVar4[6];
    pvVar9 = (void *)*puVar4;
    local_160 = pvVar3;
    if ((plVar8 == (long *)0x0) || (lVar7 = FUN_001735f0(0xffffffffffffffff,plVar8 + 1), lVar7 != 0)
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
    pvVar3 = local_160;
    puVar4 = (undefined8 *)pvVar9;
  }
  local_160 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_198);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_1c8);
  std::__ndk1::mutex::~mutex((mutex *)&local_1f0);
  pvVar9 = local_b8;
  pvVar3 = local_b0;
  if (local_b8 != (void *)0x0) {
    while (pvVar3 != pvVar9) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 00189708 to 00189713 has its CatchHandler @ 00189824 */
        (*(code *)(&PTR_FUN_001e82f8)[*(uint *)((long)pvVar3 + -8)])
                  (&local_fb0,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_b0 = pvVar9;
    operator_delete(local_b8);
  }
  if (local_d0 != (void *)0x0) {
    pvStack_c8 = local_d0;
    operator_delete(local_d0);
  }
  folly::dynamic::destroy();
  facebook::jsi::Value::~Value((Value *)local_118);
  if (local_fd0 != (void *)0x0) {
    pvStack_fc8 = local_fd0;
    operator_delete(local_fd0);
  }
  if (pvStack_fe8 != (void *)0x0) {
    local_fe0 = pvStack_fe8;
    operator_delete(pvStack_fe8);
  }
  if (local_1000 != (void *)0x0) {
    pvStack_ff8 = local_1000;
    operator_delete(local_1000);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00189828  FUN_00189828 =====

void FUN_00189828(void *param_1)

{
  FUN_0019330c();
  operator_delete(param_1);
  return;
}


// ===== 0018984c  FUN_0018984c =====

undefined * FUN_0018984c(void)

{
  return PTR_RNSScrollToTopGuardComponentName_001f0c60;
}


// ===== 00189858  FUN_00189858 =====

undefined * FUN_00189858(void)

{
  return PTR_RNSScrollToTopGuardComponentName_001f0c60;
}


// ===== 00189864  FUN_00189864 =====

undefined8 FUN_00189864(void)

{
  return 0x61;
}


// ===== 0018986c  FUN_0018986c =====

void FUN_0018986c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  *puVar6 = &PTR_FUN_001e9b80;
                    /* try { // try from 001898d8 to 001898e7 has its CatchHandler @ 001899c0 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_001e9bd0;
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
                    /* try { // try from 00189974 to 0018997f has its CatchHandler @ 001899b0 */
  (**(code **)(lVar8 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001899f0  FUN_001899f0 =====

void FUN_001899f0(undefined8 *param_1,long *param_2,shared_ptr *param_3,ShadowNodeFragment *param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  YogaLayoutableShadowNode *local_78;
  long *local_70;
  YogaLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar5 = (long *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_001e9b80;
                    /* try { // try from 00189a48 to 00189a57 has its CatchHandler @ 00189b98 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            (pYVar1,(ShadowNode *)param_3,param_4);
  lVar6 = plVar5[4];
  plVar5[3] = (long)&PTR_FUN_001e9bd0;
  uVar3 = *(uint *)((long)plVar5 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar6 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)plVar5 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
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
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar6 + 0x6b0) != '\0' || *(char *)(lVar6 + 0x6b1) != '\0') ||
             *(char *)(lVar6 + 0x1e8) != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar5;
                    /* try { // try from 00189adc to 00189aeb has its CatchHandler @ 00189bb0 */
  facebook::react::YogaLayoutableShadowNode::completeClone
            ((ShadowNode *)pYVar1,(ShadowNodeFragment *)param_3);
  local_78 = pYVar1;
  local_70 = plVar5;
  FUN_00174090(1,plVar5 + 1);
                    /* try { // try from 00189afc to 00189b0b has its CatchHandler @ 00189b88 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar5 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar6 = FUN_001735f0(0xffffffffffffffff,local_70 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 00189b48 to 00189b53 has its CatchHandler @ 00189bb0 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00189bd8  FUN_00189bd8 =====

void FUN_00189bd8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00189be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 00189bec  FUN_00189bec =====

void FUN_00189bec(undefined8 *param_1,ulong param_2,HostPlatformViewProps *param_3,long *param_4,
                 RawPropsParser *param_5)

{
  HostPlatformViewProps *this;
  uint uVar1;
  long lVar2;
  bool bVar3;
  RawValue *pRVar4;
  long *plVar5;
  RawValue *pRVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  char *__s2;
  dynamic *pdVar10;
  long lVar11;
  RawProps *pRVar12;
  undefined1 uStack_d1;
  dynamic local_d0 [32];
  dynamic *local_b0;
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar8 = facebook::react::RawProps::isEmpty(), (uVar8 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSScrollToTopGuardComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSScrollToTopGuardPropsENS0_31RNSScrollToTopGuardEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b28
         & 1) == 0) &&
       (param_2 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSScrollToTopGuardComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSScrollToTopGuardPropsENS0_31RNSScrollToTopGuardEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b28
                                     ), (int)param_2 != 0)) {
                    /* try { // try from 0018a074 to 0018a077 has its CatchHandler @ 0018a0a4 */
      FUN_0018a7c0();
      __cxa_atexit(FUN_0018a770,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSScrollToTopGuardComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSScrollToTopGuardPropsENS0_31RNSScrollToTopGuardEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b20
                   ,&PTR_LOOP_001e77b0);
      param_2 = __cxa_guard_release(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSScrollToTopGuardComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSScrollToTopGuardPropsENS0_31RNSScrollToTopGuardEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b28
                                   );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSScrollToTopGuardComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSScrollToTopGuardPropsENS0_31RNSScrollToTopGuardEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b20
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSScrollToTopGuardComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSScrollToTopGuardPropsENS0_31RNSScrollToTopGuardEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b20
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      param_2 = FUN_00174090(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::parse(param_5);
    pRVar12 = (RawProps *)*param_4;
    if (pRVar12 == (RawProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSScrollToTopGuardComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSScrollToTopGuardPropsENS0_31RNSScrollToTopGuardEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b28
           & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSScrollToTopGuardComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSScrollToTopGuardPropsENS0_31RNSScrollToTopGuardEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b28
                                     ), iVar7 != 0)) {
                    /* try { // try from 00189ff4 to 00189ff7 has its CatchHandler @ 0018a0bc */
        FUN_0018a7c0();
        __cxa_atexit(FUN_0018a770,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSScrollToTopGuardComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSScrollToTopGuardPropsENS0_31RNSScrollToTopGuardEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b20
                     ,&PTR_LOOP_001e77b0);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSScrollToTopGuardComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSScrollToTopGuardPropsENS0_31RNSScrollToTopGuardEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b28
                           );
      }
      pRVar12 = *(RawProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSScrollToTopGuardComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSScrollToTopGuardPropsENS0_31RNSScrollToTopGuardEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b20
      ;
    }
    plVar9 = (long *)operator_new(0x6f8);
    this = (HostPlatformViewProps *)(plVar9 + 3);
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_FUN_001e9ce8;
    local_b0 = (dynamic *)0x0;
                    /* try { // try from 00189cd0 to 00189cf7 has its CatchHandler @ 0018a130 */
    facebook::react::HostPlatformViewProps::HostPlatformViewProps
              (this,(PropsParserContext *)(PTR_PTR_001f0c70 + 8),param_3,pRVar12,(function *)param_5
              );
    if (local_b0 == local_d0) {
      lVar11 = 4;
      pdVar10 = local_d0;
LAB_00189d18:
      (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
    }
    else if (local_b0 != (dynamic *)0x0) {
      lVar11 = 5;
      pdVar10 = local_b0;
      goto LAB_00189d18;
    }
    plVar9[3] = (long)(PTR_vtable_001f0c68 + 0x20);
                    /* try { // try from 00189d38 to 00189d4b has its CatchHandler @ 0018a178 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid();
    if ((((uVar8 & 1) == 0) ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid
                           (), (uVar8 & 1) == 0)) ||
       (uVar8 = facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid(),
       (uVar8 & 1) == 0)) {
LAB_00189d74:
      FUN_00174090(1,plVar9 + 1);
      if ((RawProps *)*param_4 == (RawProps *)0x0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSScrollToTopGuardComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSScrollToTopGuardPropsENS0_31RNSScrollToTopGuardEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b28
             & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSScrollToTopGuardComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSScrollToTopGuardPropsENS0_31RNSScrollToTopGuardEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b28
                                       ), iVar7 != 0)) {
                    /* try { // try from 0018a034 to 0018a037 has its CatchHandler @ 0018a0a8 */
          FUN_0018a7c0();
          __cxa_atexit(FUN_0018a770,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSScrollToTopGuardComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSScrollToTopGuardPropsENS0_31RNSScrollToTopGuardEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b20
                       ,&PTR_LOOP_001e77b0);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSScrollToTopGuardComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSScrollToTopGuardPropsENS0_31RNSScrollToTopGuardEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b28
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00189ddc to 00189def has its CatchHandler @ 0018a0d4 */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,
                   *(RawProps **)
                    PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSScrollToTopGuardComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSScrollToTopGuardPropsENS0_31RNSScrollToTopGuardEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b20
                   ,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_00189e28:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_00189e28;
        }
        if (plVar9 != (long *)0x0) goto LAB_00189e3c;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00189d90 to 00189da3 has its CatchHandler @ 0018a0fc */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,(RawProps *)*param_4,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_00189e3c;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_00189e3c:
        lVar11 = FUN_001735f0(0xffffffffffffffff,plVar9 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 00189d58 to 00189d63 has its CatchHandler @ 0018a0d0 */
      __s2 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar7 = strcmp(PTR_RNSScrollToTopGuardComponentName_001f0c60,__s2);
      if (iVar7 != 0) goto LAB_00189d74;
      bVar3 = false;
    }
                    /* try { // try from 00189e68 to 00189e6b has its CatchHandler @ 0018a178 */
    param_2 = facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter();
    if ((param_2 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 00189e78 to 00189e93 has its CatchHandler @ 0018a0f8 */
        param_2 = folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar9 + 7));
      }
      else {
        param_2 = facebook::react::RawProps::operator_cast_to_dynamic((RawProps *)param_5);
      }
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00189fd4 to 00189fe3 has its CatchHandler @ 0018a0f0 */
                    /* WARNING: Subroutine does not return */
          FUN_00172ea4(*(undefined8 *)PTR_name_001f09c8);
        }
        goto LAB_0018a1c4;
      }
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00189fb4 to 00189fc3 has its CatchHandler @ 0018a184 */
                    /* WARNING: Subroutine does not return */
            FUN_00172ea4(*(undefined8 *)PTR_name_001f0bb0);
          }
          goto LAB_0018a1c4;
        }
        uVar1 = 0x811c9dc5;
        uVar8 = (ulong)(*(byte *)(plVar5 + 3) >> 1);
        pRVar6 = (RawValue *)((long)plVar5 + 0x19);
        pRVar4 = (RawValue *)((long)plVar5 + 0x19);
        if ((*(byte *)(plVar5 + 3) & 1) != 0) {
          uVar8 = plVar5[4];
          pRVar6 = (RawValue *)plVar5[5];
          pRVar4 = (RawValue *)plVar5[5];
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          uVar1 = (uVar1 ^ (int)(char)*pRVar6) * 0x1000193;
          pRVar6 = pRVar6 + 1;
        }
                    /* try { // try from 00189f14 to 00189f1f has its CatchHandler @ 0018a18c */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 00189f24 to 00189f3b has its CatchHandler @ 0018a190 */
        param_2 = facebook::react::HostPlatformViewProps::setProp
                            ((PropsParserContext *)this,(uint)param_3,(char *)(ulong)uVar1,pRVar4);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 00189f4c to 00189f57 has its CatchHandler @ 0018a180 */
          param_2 = (*(code *)(&PTR_FUN_001e82f8)[local_a0])(&uStack_d1,local_d0);
        }
      }
      param_2 = folly::dynamic::destroy();
    }
    param_1[1] = plVar9;
    *param_1 = this;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_0018a1c4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}


// ===== 0018a1c8  FUN_0018a1c8 =====

void FUN_0018a1c8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0018a1d0  FUN_0018a1d0 =====

void FUN_0018a1d0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0018a1d8  FUN_0018a1d8 =====

void FUN_0018a1d8(undefined8 *param_1,long param_2,long param_3)

{
  EventEmitter *pEVar1;
  ShadowNodeFamily *pSVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ShadowNodeFamily *local_b0;
  undefined8 *local_a8;
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
  FUN_0017dbe4(&local_a0,param_3 + 8,param_3 + 4);
                    /* try { // try from 0018a21c to 0018a223 has its CatchHandler @ 0018a4fc */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_001e9d38;
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
    FUN_00174090(1,local_78 + 0x10);
  }
                    /* try { // try from 0018a260 to 0018a26f has its CatchHandler @ 0018a4d0 */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_001e8610;
                    /* try { // try from 0018a27c to 0018a283 has its CatchHandler @ 0018a4c0 */
  puVar6 = (undefined8 *)operator_new(0x58);
  *puVar6 = &PTR_FUN_001e8630;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[4] = 0;
  puVar6[3] = 0;
  plVar5[0xb] = (long)(puVar6 + 3);
  plVar5[0xc] = (long)puVar6;
  puVar6[6] = 0;
  puVar6[5] = 0;
  puVar6[8] = 0;
  puVar6[7] = 0;
  *(undefined8 *)((long)puVar6 + 0x4c) = 0;
  *(undefined8 *)((long)puVar6 + 0x44) = 0;
  plVar5[3] = (long)&PTR_FUN_001e9d88;
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = plStack_98;
  local_90 = pEVar1;
  local_88 = plVar5;
  if ((plStack_98 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_98 + 1), lVar7 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0018a330 to 0018a337 has its CatchHandler @ 0018a4b0 */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  *puVar6 = &PTR_FUN_001e86f0;
  pSVar2 = (ShadowNodeFamily *)(puVar6 + 4);
  puVar6[1] = 0;
  puVar6[2] = 0;
  local_70 = local_90;
  plStack_68 = local_88;
  if (local_88 != (long *)0x0) {
    FUN_00174090(1,local_88 + 1);
  }
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  if (local_78 != 0) {
    FUN_00174090(1,local_78 + 0x10);
  }
                    /* try { // try from 0018a380 to 0018a397 has its CatchHandler @ 0018a480 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar2,param_3,&local_70,&local_80,param_2);
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pEVar1 = local_90;
  *param_1 = pSVar2;
  param_1[1] = puVar6;
  local_b0 = pSVar2;
  local_a8 = puVar6;
  FUN_00174090(1,puVar6 + 2);
                    /* try { // try from 0018a3ec to 0018a3f7 has its CatchHandler @ 0018a460 */
  facebook::react::EventEmitter::setShadowNodeFamily(pEVar1,&local_b0);
  if (local_a8 != (undefined8 *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018a524  FUN_0018a524 =====

void FUN_0018a524(void)

{
  return;
}


// ===== 0018a528  FUN_0018a528 =====

void FUN_0018a528(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0018a578  FUN_0018a578 =====

void FUN_0018a578(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e9b80;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0018a588  FUN_0018a588 =====

void FUN_0018a588(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e9b80;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0018a5b8  FUN_0018a5b8 =====

void FUN_0018a5b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0018a5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0018a5c4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0018a5c8  FUN_0018a5c8 =====

void FUN_0018a5c8(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_001f09e8 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
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
  FUN_00173ffc(param_1 + 0x23);
  FUN_00173f00(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0018a688  FUN_0018a688 =====

void FUN_0018a688(long param_1)

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


// ===== 0018a6f0  FUN_0018a6f0 =====

bool FUN_0018a6f0(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 0018a708  FUN_0018a708 =====

bool FUN_0018a708(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 0018a720  FUN_0018a720 =====

void FUN_0018a720(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0018a770  FUN_0018a770 =====

void FUN_0018a770(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0018a7c0  FUN_0018a7c0 =====

void FUN_0018a7c0(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x6f8);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_001e9c98;
  memset(__s,0,0x6e0);
                    /* try { // try from 0018a7fc to 0018a80f has its CatchHandler @ 0018a87c */
  FUN_0017cb10(__s,PTR_PTR_001f0c70 + 0x10);
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
  puVar1 = PTR_vtable_001f0c68;
  *(undefined1 *)((long)puVar2 + 0x6f4) = 0;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSScrollToTopGuardComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSScrollToTopGuardPropsENS0_31RNSScrollToTopGuardEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b20
  ;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 0018a898  FUN_0018a898 =====

void FUN_0018a898(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e9c98;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0018a8a8  FUN_0018a8a8 =====

void FUN_0018a8a8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e9c98;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0018a8d8  FUN_0018a8d8 =====

void FUN_0018a8d8(long param_1)

{
  FUN_0017d0e8(param_1 + 0x18,PTR_PTR_001f0c70 + 8);
  return;
}


// ===== 0018a8ec  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0018a8f0  FUN_0018a8f0 =====

void FUN_0018a8f0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e9ce8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0018a900  FUN_0018a900 =====

void FUN_0018a900(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e9ce8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0018a930  FUN_0018a930 =====

void FUN_0018a930(long param_1)

{
  FUN_0017d0e8(param_1 + 0x18,PTR_PTR_001f0c70 + 8);
  return;
}


// ===== 0018a944  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0018a948  FUN_0018a948 =====

void FUN_0018a948(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0018a998  FUN_0018a998 =====

void FUN_0018a998(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e9d38;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0018a9a8  FUN_0018a9a8 =====

void FUN_0018a9a8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e9d38;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0018a9d8  FUN_0018a9d8 =====

void FUN_0018a9d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0018a9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0018a9e4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0018a9e8  FUN_0018a9e8 =====

void FUN_0018a9e8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_001e8610;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_001e8680;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 0018aa98  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_25RNSSplitHostComponentNameEEEENS0_17RNSSplitHostPropsENS0_24RNSSplitHostEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_25RNSSplitHostComponentNameEEEENS0_17RNSSplitHostPropsENS0_24RNSSplitHostEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1,ComponentDescriptorParameters *param_2)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ComponentDescriptor *this;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  undefined1 auVar9 [16];
  undefined4 local_1080 [2];
  undefined8 *local_1078;
  void *local_1070;
  void *pvStack_1068;
  undefined8 local_1060;
  void *pvStack_1058;
  void *local_1050;
  undefined8 uStack_1048;
  void *local_1040;
  void *pvStack_1038;
  undefined8 uStack_1030;
  undefined8 uStack_1028;
  undefined *local_1020;
  undefined8 uStack_1018;
  undefined8 local_1010;
  undefined8 uStack_1008;
  undefined4 local_1000 [2];
  undefined8 local_ff8;
  undefined8 uStack_ff0;
  undefined8 local_fe8;
  undefined8 uStack_fe0;
  undefined4 local_fd8;
  undefined4 local_fd0;
  undefined1 local_fcc;
  undefined8 local_fcb;
  undefined8 local_fc3;
  undefined8 uStack_fbb;
  undefined8 local_fb3;
  undefined8 uStack_fab;
  undefined8 local_fa3;
  undefined8 uStack_f9b;
  undefined8 local_f93;
  undefined6 uStack_f8b;
  undefined2 uStack_f85;
  undefined6 uStack_f83;
  undefined8 uStack_f7d;
  undefined4 local_f75;
  undefined8 local_f71;
  undefined1 local_f69;
  undefined1 uStack_f68;
  undefined7 uStack_f67;
  undefined8 uStack_f60;
  undefined8 uStack_f58;
  undefined8 uStack_f50;
  undefined8 local_f48;
  undefined8 uStack_f40;
  undefined8 local_f38;
  undefined8 uStack_f30;
  undefined8 local_f28;
  undefined8 uStack_f20;
  undefined8 local_f18;
  undefined8 uStack_f10;
  undefined8 uStack_f08;
  undefined8 local_f00;
  undefined8 local_ef8;
  undefined8 uStack_ef0;
  undefined8 local_ee8;
  undefined4 uStack_ee0;
  undefined4 uStack_edc;
  undefined4 uStack_ed8;
  undefined4 uStack_ed4;
  undefined4 uStack_ed0;
  undefined4 uStack_ecc;
  undefined8 local_ec8;
  undefined8 uStack_ec0;
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
  undefined1 local_e38;
  undefined1 local_e34;
  undefined1 local_e28;
  undefined8 local_e20;
  undefined8 uStack_e18;
  undefined8 uStack_e10;
  undefined8 uStack_e08;
  undefined8 local_e00;
  undefined8 uStack_df8;
  undefined8 uStack_df0;
  undefined1 uStack_de8;
  undefined7 local_de7;
  undefined1 uStack_de0;
  undefined8 uStack_ddf;
  undefined8 local_dd4;
  undefined8 uStack_dcc;
  undefined8 uStack_dc4;
  undefined8 uStack_dbc;
  undefined8 local_db4;
  undefined8 uStack_dac;
  undefined8 uStack_da4;
  undefined8 uStack_d9c;
  undefined8 local_d94;
  undefined8 uStack_d8c;
  undefined8 uStack_d84;
  undefined5 uStack_d7c;
  undefined3 local_d77;
  undefined5 uStack_d74;
  undefined1 local_d6c;
  undefined1 local_d68;
  undefined1 local_d64;
  undefined1 local_d60;
  undefined1 local_d5c;
  undefined1 local_d58;
  undefined1 local_d40;
  undefined8 local_d38;
  undefined8 uStack_d30;
  undefined8 local_d28;
  undefined4 local_d20;
  undefined1 local_d1c;
  undefined4 local_d1b;
  undefined1 local_d17;
  undefined1 local_d16;
  undefined8 local_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 local_cf0;
  undefined7 uStack_ce8;
  undefined4 uStack_ce1;
  undefined8 local_cdc;
  undefined1 local_cd4;
  undefined1 local_ccc;
  undefined1 local_cc8;
  undefined1 local_cc0;
  undefined1 local_cbc;
  undefined1 local_cb4;
  undefined1 local_cb0;
  undefined1 local_ca8;
  undefined1 local_ca4;
  undefined1 local_c9c;
  undefined1 local_c98;
  undefined1 local_c90;
  undefined1 local_c8c;
  undefined1 local_c84;
  undefined1 local_c80;
  undefined1 local_c78;
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
  undefined1 local_c34;
  undefined1 local_c30;
  undefined1 local_c2c;
  undefined1 local_c28;
  undefined1 local_c24;
  undefined1 local_c20;
  undefined1 local_c1c;
  undefined1 local_c18;
  undefined1 local_c14;
  undefined1 local_c10;
  undefined1 local_c0c;
  undefined1 local_c08;
  undefined1 local_c04;
  undefined1 local_c00;
  undefined1 local_bfc;
  undefined1 local_bf8;
  undefined1 local_bf4;
  undefined1 local_bf0;
  undefined1 local_bec;
  undefined1 local_be8;
  undefined1 local_be4;
  undefined1 local_be0;
  undefined1 local_bdc;
  undefined8 local_bd8;
  undefined8 uStack_bd0;
  undefined8 local_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined2 local_ba8;
  undefined8 local_ba4;
  undefined1 local_b9c;
  undefined8 local_b98;
  undefined8 local_b90;
  undefined8 uStack_b88;
  undefined1 local_b80;
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
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined8 local_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined8 uStack_ae0;
  undefined8 local_ad8;
  undefined8 uStack_ad0;
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  undefined8 local_ab8;
  undefined8 uStack_ab0;
  undefined8 local_aa8;
  undefined8 uStack_aa0;
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined6 uStack_a80;
  undefined2 uStack_a7a;
  undefined6 uStack_a78;
  undefined1 local_a70;
  undefined1 local_a6c;
  undefined1 local_a68;
  undefined8 local_a64;
  undefined8 uStack_a5c;
  undefined1 local_a54;
  undefined8 local_a50;
  undefined2 local_a48;
  undefined1 local_a46;
  undefined4 local_a44;
  undefined1 local_a40;
  undefined1 local_9e0;
  undefined1 local_9d8;
  undefined1 local_978;
  undefined4 local_970;
  undefined2 local_96c;
  undefined1 local_968;
  undefined1 local_964;
  undefined1 local_960;
  undefined1 local_95c;
  undefined1 local_958;
  undefined1 local_954;
  undefined1 local_950;
  undefined1 local_94c;
  undefined1 local_948;
  undefined1 local_944;
  undefined5 uStack_940;
  undefined3 local_93b;
  undefined5 uStack_938;
  undefined4 local_930;
  undefined8 local_92c;
  undefined8 uStack_924;
  undefined8 uStack_91c;
  undefined8 uStack_914;
  undefined4 local_90c;
  undefined8 local_908;
  undefined8 local_900;
  undefined8 uStack_8f8;
  undefined2 local_8f0;
  undefined4 local_8e8 [2];
  undefined8 local_8e0;
  undefined8 uStack_8d8;
  undefined8 local_8d0;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
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
  undefined8 local_88;
  void *pvStack_80;
  void *local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this = (ComponentDescriptor *)operator_new(0x88);
  pvStack_1058 = (void *)0x0;
  local_1060 = 0;
  uStack_1048 = 0;
  local_1050 = (void *)0x0;
  pvStack_1038 = (void *)0x0;
  local_1040 = (void *)0x0;
  uStack_1028 = 0;
  uStack_1030 = 0;
  pvStack_1068 = (void *)0x0;
  local_1070 = (void *)0x0;
                    /* try { // try from 0018aaec to 0018aaf7 has its CatchHandler @ 0018b158 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_1070);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_001e9dc0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0[0] = 0;
  local_d0 = 0;
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
                    /* try { // try from 0018ab68 to 0018ab73 has its CatchHandler @ 0018b188 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_1080[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_1078 = &local_1b0;
  facebook::react::RawProps::parse((RawPropsParser *)&local_f8);
  memset(local_1000,0,0x718);
  local_8e8[0] = 5;
  local_8d0 = 0;
  local_1020 = PTR_construction_vtable_001f0e50 + 0x20;
  local_1000[0] = 5;
  uStack_1008 = 0;
  local_1010 = 0;
  uStack_1018 = 0;
  local_8c8 = 0;
  uStack_8c0 = 0x3f800000;
  uStack_8d8 = 0;
  local_8e0 = 0;
  uStack_ff0 = 0;
  local_ff8 = 0;
  uStack_fe0 = 0;
  local_fe8 = 0;
  local_fd8 = 0x3f800000;
  folly::dynamic::destroy();
  local_fcc = 0;
  local_f71 = 0;
  uStack_a90 = _UNK_00142624;
  local_a98 = _DAT_0014261c;
  local_fcb = DAT_001423b8;
  uStack_b88 = _UNK_001423f8;
  local_b90 = _DAT_001423f0;
  uStack_aa0 = _UNK_00142614;
  local_aa8 = _DAT_0014260c;
  local_eb4 = 0;
  uStack_ab0 = _UNK_00142604;
  local_ab8 = _DAT_001425fc;
  uStack_ac0 = _UNK_001425f4;
  local_ac8 = _DAT_001425ec;
  auVar9 = NEON_fmov(0xbf800000,4);
  uStack_a78 = 0;
  local_eac = 0;
  uStack_ee0 = 0;
  local_ee8 = 0;
  uStack_ecc = 0;
  uStack_ef0 = 0;
  local_ef8 = 0;
  uStack_d30 = 0;
  local_d38 = 0;
  local_fd0 = 0x10410710;
  local_d1b = 0;
  local_f75 = 0x40004;
  local_d16 = 0x23;
  uStack_ed4 = 0;
  uStack_ed0 = 0;
  uStack_edc = 0;
  uStack_ed8 = 0;
  uStack_ec0 = 0;
  local_ec8 = 0;
  local_cdc = 0x3f800000;
  local_eb8 = 0x7fc00000;
  local_eb0 = 0x7fc00000;
  local_ea8 = 0x7fc00000;
  local_ea0 = 0x7fc00000;
  local_e98 = 0x7fc00000;
  local_e90 = 0x7fc00000;
  local_e88 = 0x7fc00000;
  local_e80 = 0x7fc00000;
  local_e78 = 0x7fc00000;
  local_e70 = 0x7fc00000;
  local_e68 = 0x7fc00000;
  local_e60 = 0x7fc00000;
  local_e58 = 0x7fc00000;
  local_e50 = 0x7fc00000;
  local_e48 = 0x7fc00000;
  local_e40 = 0x7fc00000;
  uStack_bc0 = 0;
  local_bc8 = 0;
  uStack_bb0 = 0;
  uStack_bb8 = 0;
  uStack_bd0 = 0;
  local_bd8 = 0;
  uStack_ddf = 0;
  uStack_de0 = 0;
  local_ba4 = 0;
  uStack_dcc = 0;
  local_dd4 = 0;
  uStack_dbc = 0;
  uStack_dc4 = 0;
  uStack_dac = 0;
  local_db4 = 0;
  uStack_d9c = 0;
  uStack_da4 = 0;
  uStack_d8c = 0;
  local_d94 = 0;
  uStack_d7c = 0;
  uStack_d84 = 0;
  local_d77 = 0;
  uStack_d74 = 0;
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
  uStack_b00 = 0;
  uStack_b08 = 0;
  uStack_af0 = 0;
  local_af8 = 0;
  uStack_ae0 = 0;
  uStack_ae8 = 0;
  uStack_ad0 = 0;
  local_ad8 = 0;
  uStack_a80 = 0;
  uStack_a7a = 0;
  local_a88 = 0;
  uStack_f67 = 0;
  uStack_fbb = 0;
  local_fc3 = 0;
  uStack_fab = 0;
  local_fb3 = 0;
  uStack_f9b = 0;
  local_fa3 = 0;
  uStack_f8b = 0;
  local_f93 = 0;
  uStack_f7d = 0;
  uStack_f85 = 0;
  uStack_f83 = 0;
  local_f69 = 0;
  uStack_f68 = 0;
  uStack_f58 = 0;
  uStack_f60 = 0;
  local_f48 = 0;
  uStack_f50 = 0;
  local_f38 = 0;
  uStack_f40 = 0;
  local_f28 = 0;
  uStack_f30 = 0;
  local_f18 = 0;
  uStack_f20 = 0;
  uStack_f08 = 0;
  uStack_f10 = 0;
  local_f00 = 0;
  local_ea4 = 0;
  local_e9c = 0;
  local_e94 = 0;
  local_e8c = 0;
  local_e84 = 0;
  local_e7c = 0;
  local_e74 = 0;
  local_e6c = 0;
  local_e64 = 0;
  local_e5c = 0;
  local_e54 = 0;
  local_e4c = 0;
  local_e44 = 0;
  local_e3c = 0;
  local_e38 = 0;
  local_e34 = 0;
  local_e28 = 0;
  local_d6c = 0;
  local_d68 = 0;
  local_d64 = 0;
  local_d60 = 0;
  local_d5c = 0;
  local_d58 = 0;
  local_d40 = 0;
  uStack_e18 = 0;
  local_e20 = 0;
  uStack_e08 = 0;
  uStack_e10 = 0;
  uStack_df8 = 0;
  local_e00 = 0;
  uStack_de8 = 0;
  local_de7 = 0;
  uStack_df0 = 0;
  local_d28 = 0;
  local_d20 = 0;
  local_d1c = 1;
  local_d17 = 0;
  uStack_d08 = 0;
  local_d10 = 0;
  uStack_cf8 = 0;
  uStack_d00 = 0;
  uStack_ce8 = 0;
  uStack_ce1 = 0;
  local_cf0 = 0;
  local_cd4 = 0;
  local_ccc = 0;
  local_cc8 = 0;
  local_cc0 = 0;
  local_cbc = 0;
  local_cb4 = 0;
  local_cb0 = 0;
  local_ca8 = 0;
  local_ca4 = 0;
  local_c9c = 0;
  local_c98 = 0;
  local_c90 = 0;
  local_c8c = 0;
  local_c84 = 0;
  local_c80 = 0;
  local_c78 = 0;
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
  local_c34 = 0;
  local_c30 = 0;
  local_c2c = 0;
  local_c28 = 0;
  local_c24 = 0;
  local_c20 = 0;
  local_c1c = 0;
  local_c18 = 0;
  local_c14 = 0;
  local_c10 = 0;
  local_c0c = 0;
  local_c08 = 0;
  local_c04 = 0;
  local_c00 = 0;
  local_bfc = 0;
  local_bf8 = 0;
  local_bf4 = 0;
  local_bf0 = 0;
  local_bec = 0;
  local_be8 = 0;
  local_be4 = 0;
  local_be0 = 0;
  local_bdc = 0;
  local_b98 = 0;
  local_ba8 = 0;
  local_b9c = 0;
  local_b80 = 0;
  local_a70 = 0;
  local_a6c = 0;
  local_a68 = 0;
  local_a50 = 0;
  uStack_a5c = 0;
  local_a64 = 0;
  local_a54 = 0;
  local_a48 = 0x101;
  local_a46 = 0;
  local_a44 = 0;
  local_a40 = 0;
  local_9e0 = 0;
  local_9d8 = 0;
  local_978 = 0;
  local_968 = 0;
  local_964 = 0;
  local_960 = 0;
  local_95c = 0;
  local_958 = 0;
  local_954 = 0;
  local_950 = 0;
  local_94c = 0;
  local_948 = 0;
  local_944 = 0;
  uStack_924 = auVar9._8_8_;
  local_92c = auVar9._0_8_;
  local_908 = NEON_fmov(0xbf800000,4);
  local_96c = 0;
  local_1020 = PTR_vtable_001f0c80 + 0x20;
  local_970 = 0;
  uStack_938 = 0;
  uStack_940 = 0;
  local_93b = 0;
  local_930 = 1;
  local_90c = 0xbf800000;
  uStack_8f8 = 0;
  local_900 = 0;
  local_8f0 = 1;
                    /* try { // try from 0018af90 to 0018afa3 has its CatchHandler @ 0018b188 */
  uStack_91c = local_92c;
  uStack_914 = uStack_924;
  facebook::react::RNSSplitHostProps::RNSSplitHostProps
            ((RNSSplitHostProps *)local_8e8,(PropsParserContext *)local_1080,
             (RNSSplitHostProps *)&local_1020,(RawProps *)&local_f8);
  puVar5 = PTR_PTR_001f0c88;
  FUN_0017d0e8(local_8e8,PTR_PTR_001f0c88 + 8);
  FUN_0017d0e8(&local_1020,puVar5 + 8);
  facebook::react::RawPropsParser::postPrepare();
  pvVar3 = local_120;
  puVar4 = (undefined8 *)local_110;
  while (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar4[6];
    pvVar8 = (void *)*puVar4;
    local_120 = pvVar3;
    if ((plVar7 == (long *)0x0) || (lVar6 = FUN_001735f0(0xffffffffffffffff,plVar7 + 1), lVar6 != 0)
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
                    /* try { // try from 0018b0b0 to 0018b0bb has its CatchHandler @ 0018b18c */
        (*(code *)(&PTR_FUN_001e82f8)[*(uint *)((long)pvVar3 + -8)])
                  (&local_1020,(void *)((long)pvVar3 + -0x38));
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
  folly::dynamic::destroy();
  facebook::jsi::Value::~Value((Value *)local_e0);
  if (local_1040 != (void *)0x0) {
    pvStack_1038 = local_1040;
    operator_delete(local_1040);
  }
  if (pvStack_1058 != (void *)0x0) {
    local_1050 = pvStack_1058;
    operator_delete(pvStack_1058);
  }
  if (local_1070 != (void *)0x0) {
    pvStack_1068 = local_1070;
    operator_delete(local_1070);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018b190  FUN_0018b190 =====

void FUN_0018b190(void *param_1)

{
  FUN_0019330c();
  operator_delete(param_1);
  return;
}


// ===== 0018b1b4  FUN_0018b1b4 =====

undefined * FUN_0018b1b4(void)

{
  return PTR_RNSSplitHostComponentName_001f0c78;
}


// ===== 0018b1c0  FUN_0018b1c0 =====

undefined * FUN_0018b1c0(void)

{
  return PTR_RNSSplitHostComponentName_001f0c78;
}


// ===== 0018b1cc  FUN_0018b1cc =====

undefined8 FUN_0018b1cc(void)

{
  return 0x61;
}


// ===== 0018b1d4  FUN_0018b1d4 =====

void FUN_0018b1d4(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  *puVar6 = &PTR_FUN_001e9e50;
                    /* try { // try from 0018b240 to 0018b24f has its CatchHandler @ 0018b328 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_001e9ea0;
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
                    /* try { // try from 0018b2dc to 0018b2e7 has its CatchHandler @ 0018b318 */
  (**(code **)(lVar8 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0018b358  FUN_0018b358 =====

void FUN_0018b358(undefined8 *param_1,long *param_2,shared_ptr *param_3,ShadowNodeFragment *param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  YogaLayoutableShadowNode *local_78;
  long *local_70;
  YogaLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar5 = (long *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_001e9e50;
                    /* try { // try from 0018b3b0 to 0018b3bf has its CatchHandler @ 0018b500 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            (pYVar1,(ShadowNode *)param_3,param_4);
  lVar6 = plVar5[4];
  plVar5[3] = (long)&PTR_FUN_001e9ea0;
  uVar3 = *(uint *)((long)plVar5 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar6 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)plVar5 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
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
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar6 + 0x6b0) != '\0' || *(char *)(lVar6 + 0x6b1) != '\0') ||
             *(char *)(lVar6 + 0x1e8) != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar5;
                    /* try { // try from 0018b444 to 0018b453 has its CatchHandler @ 0018b518 */
  facebook::react::YogaLayoutableShadowNode::completeClone
            ((ShadowNode *)pYVar1,(ShadowNodeFragment *)param_3);
  local_78 = pYVar1;
  local_70 = plVar5;
  FUN_00174090(1,plVar5 + 1);
                    /* try { // try from 0018b464 to 0018b473 has its CatchHandler @ 0018b4f0 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar5 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar6 = FUN_001735f0(0xffffffffffffffff,local_70 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 0018b4b0 to 0018b4bb has its CatchHandler @ 0018b518 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0018b540  FUN_0018b540 =====

void FUN_0018b540(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0018b550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 0018b554  FUN_0018b554 =====

void FUN_0018b554(undefined8 *param_1,ulong param_2,PropsParserContext *param_3,long *param_4,
                 RawPropsParser *param_5)

{
  RNSSplitHostProps *this;
  uint uVar1;
  long lVar2;
  bool bVar3;
  RawValue *pRVar4;
  long *plVar5;
  RawValue *pRVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  char *__s2;
  dynamic *pdVar10;
  long lVar11;
  RNSSplitHostProps *pRVar12;
  undefined1 uStack_d1;
  dynamic local_d0 [32];
  dynamic *local_b0;
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar8 = facebook::react::RawProps::isEmpty(), (uVar8 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSSplitHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSSplitHostPropsENS0_24RNSSplitHostEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b38
         & 1) == 0) &&
       (param_2 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSSplitHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSSplitHostPropsENS0_24RNSSplitHostEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b38
                                     ), (int)param_2 != 0)) {
                    /* try { // try from 0018b988 to 0018b98b has its CatchHandler @ 0018b9b8 */
      FUN_0018c054();
      __cxa_atexit(FUN_0018c16c,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSSplitHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSSplitHostPropsENS0_24RNSSplitHostEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b30
                   ,&PTR_LOOP_001e77b0);
      param_2 = __cxa_guard_release(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSSplitHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSSplitHostPropsENS0_24RNSSplitHostEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b38
                                   );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSSplitHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSSplitHostPropsENS0_24RNSSplitHostEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b30
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSSplitHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSSplitHostPropsENS0_24RNSSplitHostEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b30
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      param_2 = FUN_00174090(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::parse(param_5);
    pRVar12 = (RNSSplitHostProps *)*param_4;
    if (pRVar12 == (RNSSplitHostProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSSplitHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSSplitHostPropsENS0_24RNSSplitHostEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b38
           & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSSplitHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSSplitHostPropsENS0_24RNSSplitHostEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b38
                                     ), iVar7 != 0)) {
                    /* try { // try from 0018b908 to 0018b90b has its CatchHandler @ 0018b9d0 */
        FUN_0018c054();
        __cxa_atexit(FUN_0018c16c,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSSplitHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSSplitHostPropsENS0_24RNSSplitHostEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b30
                     ,&PTR_LOOP_001e77b0);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSSplitHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSSplitHostPropsENS0_24RNSSplitHostEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b38
                           );
      }
      pRVar12 = *(RNSSplitHostProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSSplitHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSSplitHostPropsENS0_24RNSSplitHostEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b30
      ;
    }
    plVar9 = (long *)operator_new(0x750);
    this = (RNSSplitHostProps *)(plVar9 + 3);
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_FUN_001e9fb8;
                    /* try { // try from 0018b634 to 0018b647 has its CatchHandler @ 0018ba44 */
    facebook::react::RNSSplitHostProps::RNSSplitHostProps(this,param_3,pRVar12,(RawProps *)param_5);
                    /* try { // try from 0018b64c to 0018b65f has its CatchHandler @ 0018ba5c */
    uVar8 = facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid();
    if ((((uVar8 & 1) == 0) ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid
                           (), (uVar8 & 1) == 0)) ||
       (uVar8 = facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid(),
       (uVar8 & 1) == 0)) {
LAB_0018b688:
      FUN_00174090(1,plVar9 + 1);
      if ((RawProps *)*param_4 == (RawProps *)0x0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSSplitHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSSplitHostPropsENS0_24RNSSplitHostEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b38
             & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSSplitHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSSplitHostPropsENS0_24RNSSplitHostEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b38
                                       ), iVar7 != 0)) {
                    /* try { // try from 0018b948 to 0018b94b has its CatchHandler @ 0018b9bc */
          FUN_0018c054();
          __cxa_atexit(FUN_0018c16c,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSSplitHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSSplitHostPropsENS0_24RNSSplitHostEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b30
                       ,&PTR_LOOP_001e77b0);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSSplitHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSSplitHostPropsENS0_24RNSSplitHostEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b38
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0018b6f0 to 0018b703 has its CatchHandler @ 0018b9e8 */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,
                   *(RawProps **)
                    PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSSplitHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSSplitHostPropsENS0_24RNSSplitHostEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b30
                   ,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_0018b73c:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_0018b73c;
        }
        if (plVar9 != (long *)0x0) goto LAB_0018b750;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0018b6a4 to 0018b6b7 has its CatchHandler @ 0018ba10 */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,(RawProps *)*param_4,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_0018b750;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_0018b750:
        lVar11 = FUN_001735f0(0xffffffffffffffff,plVar9 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 0018b66c to 0018b677 has its CatchHandler @ 0018b9e4 */
      __s2 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar7 = strcmp(PTR_RNSSplitHostComponentName_001f0c78,__s2);
      if (iVar7 != 0) goto LAB_0018b688;
      bVar3 = false;
    }
                    /* try { // try from 0018b77c to 0018b77f has its CatchHandler @ 0018ba5c */
    param_2 = facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter();
    if ((param_2 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 0018b78c to 0018b7a7 has its CatchHandler @ 0018ba0c */
        param_2 = folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar9 + 7));
      }
      else {
        param_2 = facebook::react::RawProps::operator_cast_to_dynamic((RawProps *)param_5);
      }
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0018b8e8 to 0018b8f7 has its CatchHandler @ 0018ba04 */
                    /* WARNING: Subroutine does not return */
          FUN_00172ea4(*(undefined8 *)PTR_name_001f09c8);
        }
        goto LAB_0018baa8;
      }
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0018b8c8 to 0018b8d7 has its CatchHandler @ 0018ba68 */
                    /* WARNING: Subroutine does not return */
            FUN_00172ea4(*(undefined8 *)PTR_name_001f0bb0);
          }
          goto LAB_0018baa8;
        }
        uVar1 = 0x811c9dc5;
        uVar8 = (ulong)(*(byte *)(plVar5 + 3) >> 1);
        pRVar6 = (RawValue *)((long)plVar5 + 0x19);
        pRVar4 = (RawValue *)((long)plVar5 + 0x19);
        if ((*(byte *)(plVar5 + 3) & 1) != 0) {
          uVar8 = plVar5[4];
          pRVar6 = (RawValue *)plVar5[5];
          pRVar4 = (RawValue *)plVar5[5];
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          uVar1 = (uVar1 ^ (int)(char)*pRVar6) * 0x1000193;
          pRVar6 = pRVar6 + 1;
        }
                    /* try { // try from 0018b828 to 0018b833 has its CatchHandler @ 0018ba70 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 0018b838 to 0018b84f has its CatchHandler @ 0018ba74 */
        param_2 = facebook::react::HostPlatformViewProps::setProp
                            ((PropsParserContext *)this,(uint)param_3,(char *)(ulong)uVar1,pRVar4);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 0018b860 to 0018b86b has its CatchHandler @ 0018ba64 */
          param_2 = (*(code *)(&PTR_FUN_001e82f8)[local_a0])(&uStack_d1,local_d0);
        }
      }
      param_2 = folly::dynamic::destroy();
    }
    param_1[1] = plVar9;
    *param_1 = this;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_0018baa8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}


// ===== 0018baac  FUN_0018baac =====

void FUN_0018baac(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0018bab4  FUN_0018bab4 =====

void FUN_0018bab4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0018babc  FUN_0018babc =====

void FUN_0018babc(undefined8 *param_1,long param_2,long param_3)

{
  EventEmitter *pEVar1;
  ShadowNodeFamily *pSVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ShadowNodeFamily *local_b0;
  undefined8 *local_a8;
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
  FUN_0017dbe4(&local_a0,param_3 + 8,param_3 + 4);
                    /* try { // try from 0018bb00 to 0018bb07 has its CatchHandler @ 0018bde0 */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_001ea008;
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
    FUN_00174090(1,local_78 + 0x10);
  }
                    /* try { // try from 0018bb44 to 0018bb53 has its CatchHandler @ 0018bdb4 */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_001e8610;
                    /* try { // try from 0018bb60 to 0018bb67 has its CatchHandler @ 0018bda4 */
  puVar6 = (undefined8 *)operator_new(0x58);
  *puVar6 = &PTR_FUN_001e8630;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[4] = 0;
  puVar6[3] = 0;
  plVar5[0xb] = (long)(puVar6 + 3);
  plVar5[0xc] = (long)puVar6;
  puVar6[6] = 0;
  puVar6[5] = 0;
  puVar6[8] = 0;
  puVar6[7] = 0;
  *(undefined8 *)((long)puVar6 + 0x4c) = 0;
  *(undefined8 *)((long)puVar6 + 0x44) = 0;
  plVar5[3] = (long)&PTR_FUN_001ea058;
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = plStack_98;
  local_90 = pEVar1;
  local_88 = plVar5;
  if ((plStack_98 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_98 + 1), lVar7 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0018bc14 to 0018bc1b has its CatchHandler @ 0018bd94 */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  *puVar6 = &PTR_FUN_001e86f0;
  pSVar2 = (ShadowNodeFamily *)(puVar6 + 4);
  puVar6[1] = 0;
  puVar6[2] = 0;
  local_70 = local_90;
  plStack_68 = local_88;
  if (local_88 != (long *)0x0) {
    FUN_00174090(1,local_88 + 1);
  }
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  if (local_78 != 0) {
    FUN_00174090(1,local_78 + 0x10);
  }
                    /* try { // try from 0018bc64 to 0018bc7b has its CatchHandler @ 0018bd64 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar2,param_3,&local_70,&local_80,param_2);
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pEVar1 = local_90;
  *param_1 = pSVar2;
  param_1[1] = puVar6;
  local_b0 = pSVar2;
  local_a8 = puVar6;
  FUN_00174090(1,puVar6 + 2);
                    /* try { // try from 0018bcd0 to 0018bcdb has its CatchHandler @ 0018bd44 */
  facebook::react::EventEmitter::setShadowNodeFamily(pEVar1,&local_b0);
  if (local_a8 != (undefined8 *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018be08  FUN_0018be08 =====

void FUN_0018be08(void)

{
  return;
}


// ===== 0018be0c  FUN_0018be0c =====

void FUN_0018be0c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0018be5c  FUN_0018be5c =====

void FUN_0018be5c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e9e50;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0018be6c  FUN_0018be6c =====

void FUN_0018be6c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e9e50;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0018be9c  FUN_0018be9c =====

void FUN_0018be9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0018bea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0018bea8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0018beac  FUN_0018beac =====

void FUN_0018beac(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_001f09e8 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
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
  FUN_00173ffc(param_1 + 0x23);
  FUN_00173f00(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0018bf6c  FUN_0018bf6c =====

void FUN_0018bf6c(long param_1)

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


// ===== 0018bfd4  FUN_0018bfd4 =====

bool FUN_0018bfd4(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 0018bfec  FUN_0018bfec =====

bool FUN_0018bfec(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 0018c004  FUN_0018c004 =====

void FUN_0018c004(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0018c054  FUN_0018c054 =====

void FUN_0018c054(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar2 = (undefined8 *)operator_new(0x750);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_001e9f68;
  memset(__s,0,0x738);
                    /* try { // try from 0018c090 to 0018c0a3 has its CatchHandler @ 0018c150 */
  FUN_0017cb10(__s,PTR_PTR_001f0c88 + 0x10);
  auVar4 = NEON_fmov(0xbf800000,4);
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
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  puVar1 = PTR_vtable_001f0c80;
  *(long *)((long)puVar2 + 0x714) = auVar4._8_8_;
  *(long *)((long)puVar2 + 0x70c) = auVar4._0_8_;
  *(long *)((long)puVar2 + 0x724) = auVar4._8_8_;
  *(long *)((long)puVar2 + 0x71c) = auVar4._0_8_;
  uVar3 = NEON_fmov(0xbf800000,4);
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *(undefined4 *)((long)puVar2 + 0x72c) = 0xbf800000;
  puVar2[3] = puVar1 + 0x20;
  puVar2[0xe6] = uVar3;
  *(undefined8 *)((long)puVar2 + 0x6fd) = 0;
  puVar2[0xdf] = 0;
  *(undefined4 *)(puVar2 + 0xe1) = 1;
  puVar2[0xe8] = 0;
  puVar2[0xe7] = 0;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSSplitHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSSplitHostPropsENS0_24RNSSplitHostEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b30
  ;
  *(undefined2 *)(puVar2 + 0xe9) = 1;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 0018c16c  FUN_0018c16c =====

void FUN_0018c16c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0018c1bc  FUN_0018c1bc =====

void FUN_0018c1bc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e9f68;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0018c1cc  FUN_0018c1cc =====

void FUN_0018c1cc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e9f68;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0018c1fc  FUN_0018c1fc =====

void FUN_0018c1fc(long param_1)

{
  FUN_0017d0e8(param_1 + 0x18,PTR_PTR_001f0c88 + 8);
  return;
}


// ===== 0018c210  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0018c214  FUN_0018c214 =====

void FUN_0018c214(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e9fb8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0018c224  FUN_0018c224 =====

void FUN_0018c224(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001e9fb8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0018c254  FUN_0018c254 =====

void FUN_0018c254(long param_1)

{
  FUN_0017d0e8(param_1 + 0x18,PTR_PTR_001f0c88 + 8);
  return;
}


// ===== 0018c268  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0018c26c  FUN_0018c26c =====

void FUN_0018c26c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0018c2bc  FUN_0018c2bc =====

void FUN_0018c2bc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001ea008;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0018c2cc  FUN_0018c2cc =====

void FUN_0018c2cc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001ea008;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0018c2fc  FUN_0018c2fc =====

void FUN_0018c2fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0018c304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0018c308  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0018c30c  FUN_0018c30c =====

void FUN_0018c30c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_001e8610;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_001e8680;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 0018c3bc  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_40RNSStackHeaderItemSpacerIOSComponentNameEEEENS0_32RNSStackHeaderItemSpacerIOSPropsENS0_39RNSStackHeaderItemSpacerIOSEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_40RNSStackHeaderItemSpacerIOSComponentNameEEEENS0_32RNSStackHeaderItemSpacerIOSPropsENS0_39RNSStackHeaderItemSpacerIOSEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1,ComponentDescriptorParameters *param_2)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ComponentDescriptor *this;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  undefined4 local_ff0 [2];
  undefined8 *local_fe8;
  void *local_fe0;
  void *pvStack_fd8;
  undefined8 local_fd0;
  void *pvStack_fc8;
  void *local_fc0;
  undefined8 uStack_fb8;
  void *local_fb0;
  void *pvStack_fa8;
  undefined8 uStack_fa0;
  undefined8 uStack_f98;
  undefined *local_f90;
  undefined8 uStack_f88;
  undefined8 local_f80;
  undefined8 uStack_f78;
  undefined4 local_f70 [2];
  undefined8 local_f68;
  undefined8 uStack_f60;
  undefined8 local_f58;
  undefined8 uStack_f50;
  undefined4 local_f48;
  undefined4 local_f40;
  undefined1 local_f3c;
  undefined8 local_f3b;
  undefined8 local_f33;
  undefined8 uStack_f2b;
  undefined8 local_f23;
  undefined8 uStack_f1b;
  undefined8 local_f13;
  undefined8 uStack_f0b;
  undefined8 local_f03;
  undefined6 uStack_efb;
  undefined2 uStack_ef5;
  undefined6 uStack_ef3;
  undefined8 uStack_eed;
  undefined4 local_ee5;
  undefined8 local_ee1;
  undefined1 local_ed9;
  undefined1 uStack_ed8;
  undefined7 uStack_ed7;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  undefined8 uStack_ec0;
  undefined8 local_eb8;
  undefined8 uStack_eb0;
  undefined8 local_ea8;
  undefined8 uStack_ea0;
  undefined8 local_e98;
  undefined8 uStack_e90;
  undefined8 local_e88;
  undefined8 uStack_e80;
  undefined8 uStack_e78;
  undefined8 local_e70;
  undefined8 local_e68;
  undefined8 uStack_e60;
  undefined8 local_e58;
  undefined4 uStack_e50;
  undefined4 uStack_e4c;
  undefined4 uStack_e48;
  undefined4 uStack_e44;
  undefined4 uStack_e40;
  undefined4 uStack_e3c;
  undefined8 local_e38;
  undefined8 uStack_e30;
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
  undefined4 local_db8;
  undefined1 local_db4;
  undefined4 local_db0;
  undefined1 local_dac;
  undefined1 local_da8;
  undefined1 local_da4;
  undefined1 local_d98;
  undefined8 local_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined8 local_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined1 uStack_d58;
  undefined7 local_d57;
  undefined1 uStack_d50;
  undefined8 uStack_d4f;
  undefined8 local_d44;
  undefined8 uStack_d3c;
  undefined8 uStack_d34;
  undefined8 uStack_d2c;
  undefined8 local_d24;
  undefined8 uStack_d1c;
  undefined8 uStack_d14;
  undefined8 uStack_d0c;
  undefined8 local_d04;
  undefined8 uStack_cfc;
  undefined8 uStack_cf4;
  undefined5 uStack_cec;
  undefined3 local_ce7;
  undefined5 uStack_ce4;
  undefined1 local_cdc;
  undefined1 local_cd8;
  undefined1 local_cd4;
  undefined1 local_cd0;
  undefined1 local_ccc;
  undefined1 local_cc8;
  undefined1 local_cb0;
  undefined8 local_ca8;
  undefined8 uStack_ca0;
  undefined8 local_c98;
  undefined4 local_c90;
  undefined1 local_c8c;
  undefined4 local_c8b;
  undefined1 local_c87;
  undefined1 local_c86;
  undefined8 local_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 local_c60;
  undefined7 uStack_c58;
  undefined4 uStack_c51;
  undefined8 local_c4c;
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
  undefined1 local_bd0;
  undefined1 local_bcc;
  undefined1 local_bc4;
  undefined1 local_bc0;
  undefined1 local_bb8;
  undefined1 local_bb4;
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
  undefined1 local_b58;
  undefined1 local_b54;
  undefined1 local_b50;
  undefined1 local_b4c;
  undefined8 local_b48;
  undefined8 uStack_b40;
  undefined8 local_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined2 local_b18;
  undefined8 local_b14;
  undefined1 local_b0c;
  undefined8 local_b08;
  undefined8 local_b00;
  undefined8 uStack_af8;
  undefined1 local_af0;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 local_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
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
  undefined8 local_a38;
  undefined8 uStack_a30;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined8 local_a18;
  undefined8 uStack_a10;
  undefined8 local_a08;
  undefined8 uStack_a00;
  undefined8 local_9f8;
  undefined6 uStack_9f0;
  undefined2 uStack_9ea;
  undefined6 uStack_9e8;
  undefined1 local_9e0;
  undefined1 local_9dc;
  undefined1 local_9d8;
  undefined8 local_9d4;
  undefined8 uStack_9cc;
  undefined1 local_9c4;
  undefined8 local_9c0;
  undefined2 local_9b8;
  undefined1 local_9b6;
  undefined4 local_9b4;
  undefined1 local_9b0;
  undefined1 local_950;
  undefined1 local_948;
  undefined1 local_8e8;
  undefined4 local_8e0;
  undefined2 local_8dc;
  undefined1 local_8d8;
  undefined1 local_8d4;
  undefined1 local_8d0;
  undefined1 local_8cc;
  undefined1 local_8c8;
  undefined1 local_8c4;
  undefined1 local_8c0;
  undefined1 local_8bc;
  undefined1 local_8b8;
  undefined1 local_8b4;
  undefined8 local_8b0;
  undefined4 local_8a8;
  undefined4 local_8a0 [2];
  undefined8 local_898;
  undefined8 uStack_890;
  undefined8 local_888;
  undefined8 local_880;
  undefined8 uStack_878;
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
  this = (ComponentDescriptor *)operator_new(0x88);
  pvStack_fc8 = (void *)0x0;
  local_fd0 = 0;
  uStack_fb8 = 0;
  local_fc0 = (void *)0x0;
  pvStack_fa8 = (void *)0x0;
  local_fb0 = (void *)0x0;
  uStack_f98 = 0;
  uStack_fa0 = 0;
  pvStack_fd8 = (void *)0x0;
  local_fe0 = (void *)0x0;
                    /* try { // try from 0018c40c to 0018c417 has its CatchHandler @ 0018ca48 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_fe0);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_001ea090;
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
                    /* try { // try from 0018c484 to 0018c48f has its CatchHandler @ 0018ca78 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_ff0[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_fe8 = &local_1b0;
  facebook::react::RawProps::parse((RawPropsParser *)&local_f8);
  memset(local_f70,0,0x6d0);
  local_8a0[0] = 5;
  local_888 = 0;
  local_f90 = PTR_construction_vtable_001f0e58 + 0x20;
  local_f70[0] = 5;
  uStack_f88 = 0;
  uStack_f78 = 0;
  local_f80 = 0;
  local_880 = 0;
  uStack_878 = 0x3f800000;
  uStack_890 = 0;
  local_898 = 0;
  uStack_f60 = 0;
  local_f68 = 0;
  uStack_f50 = 0;
  local_f58 = 0;
  local_f48 = 0x3f800000;
  folly::dynamic::destroy();
  local_f3c = 0;
  local_ee1 = 0;
  uStack_a00 = _UNK_00142624;
  local_a08 = _DAT_0014261c;
  local_f3b = DAT_001423b8;
  uStack_af8 = _UNK_001423f8;
  local_b00 = _DAT_001423f0;
  uStack_a10 = _UNK_00142614;
  local_a18 = _DAT_0014260c;
  local_e24 = 0;
  uStack_a20 = _UNK_00142604;
  local_a28 = _DAT_001425fc;
  uStack_a30 = _UNK_001425f4;
  local_a38 = _DAT_001425ec;
  uStack_9e8 = 0;
  local_e1c = 0;
  uStack_e50 = 0;
  local_e58 = 0;
  uStack_e3c = 0;
  uStack_e60 = 0;
  local_e68 = 0;
  uStack_9f0 = 0;
  uStack_9ea = 0;
  local_9f8 = 0;
  local_f40 = 0x10410710;
  local_ee5 = 0x40004;
  uStack_e44 = 0;
  uStack_e40 = 0;
  uStack_e4c = 0;
  uStack_e48 = 0;
  uStack_e30 = 0;
  local_e38 = 0;
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
  local_db8 = 0x7fc00000;
  local_db0 = 0x7fc00000;
  uStack_d4f = 0;
  uStack_d50 = 0;
  uStack_d3c = 0;
  local_d44 = 0;
  uStack_d2c = 0;
  uStack_d34 = 0;
  uStack_d1c = 0;
  local_d24 = 0;
  uStack_d0c = 0;
  uStack_d14 = 0;
  uStack_cfc = 0;
  local_d04 = 0;
  uStack_cec = 0;
  uStack_cf4 = 0;
  local_ce7 = 0;
  uStack_ce4 = 0;
  local_c8c = 1;
  local_c8b = 0;
  local_c86 = 0x23;
  local_c4c = 0x3f800000;
  uStack_b30 = 0;
  local_b38 = 0;
  uStack_b20 = 0;
  uStack_b28 = 0;
  uStack_b40 = 0;
  local_b48 = 0;
  local_b14 = 0;
  uStack_ae0 = 0;
  local_ae8 = 0;
  uStack_ad0 = 0;
  uStack_ad8 = 0;
  uStack_ac0 = 0;
  local_ac8 = 0;
  uStack_ab0 = 0;
  uStack_ab8 = 0;
  uStack_aa0 = 0;
  local_aa8 = 0;
  uStack_a90 = 0;
  uStack_a98 = 0;
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
  uStack_ed7 = 0;
  uStack_f2b = 0;
  local_f33 = 0;
  uStack_f1b = 0;
  local_f23 = 0;
  uStack_f0b = 0;
  local_f13 = 0;
  uStack_efb = 0;
  local_f03 = 0;
  uStack_eed = 0;
  uStack_ef5 = 0;
  uStack_ef3 = 0;
  local_ed9 = 0;
  uStack_ed8 = 0;
  uStack_ec8 = 0;
  uStack_ed0 = 0;
  local_eb8 = 0;
  uStack_ec0 = 0;
  local_ea8 = 0;
  uStack_eb0 = 0;
  local_e98 = 0;
  uStack_ea0 = 0;
  local_e88 = 0;
  uStack_e90 = 0;
  uStack_e78 = 0;
  uStack_e80 = 0;
  local_e70 = 0;
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
  local_db4 = 0;
  local_dac = 0;
  local_da8 = 0;
  local_da4 = 0;
  local_d98 = 0;
  local_cdc = 0;
  local_cd8 = 0;
  local_cd4 = 0;
  local_cd0 = 0;
  local_ccc = 0;
  local_cc8 = 0;
  local_cb0 = 0;
  uStack_d88 = 0;
  local_d90 = 0;
  uStack_d78 = 0;
  uStack_d80 = 0;
  uStack_d68 = 0;
  local_d70 = 0;
  uStack_d58 = 0;
  local_d57 = 0;
  uStack_d60 = 0;
  uStack_ca0 = 0;
  local_ca8 = 0;
  local_c98 = 0;
  local_c90 = 0;
  local_c87 = 0;
  uStack_c78 = 0;
  local_c80 = 0;
  uStack_c68 = 0;
  uStack_c70 = 0;
  uStack_c58 = 0;
  uStack_c51 = 0;
  local_c60 = 0;
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
  local_bd0 = 0;
  local_bcc = 0;
  local_bc4 = 0;
  local_bc0 = 0;
  local_bb8 = 0;
  local_bb4 = 0;
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
  local_b58 = 0;
  local_b54 = 0;
  local_b50 = 0;
  local_b4c = 0;
  local_b08 = 0;
  local_b18 = 0;
  local_b0c = 0;
  local_af0 = 0;
  local_9e0 = 0;
  local_9dc = 0;
  local_9d8 = 0;
  local_9c0 = 0;
  uStack_9cc = 0;
  local_9d4 = 0;
  local_9c4 = 0;
  local_9b8 = 0x101;
  local_9b6 = 0;
  local_9b4 = 0;
  local_9b0 = 0;
  local_950 = 0;
  local_948 = 0;
  local_8e8 = 0;
  local_8d8 = 0;
  local_8d4 = 0;
  local_8d0 = 0;
  local_8cc = 0;
  local_8c8 = 0;
  local_8c4 = 0;
  local_8c0 = 0;
  local_8bc = 0;
  local_8b8 = 0;
  local_8b4 = 0;
  local_8dc = 0;
  local_8e0 = 0;
  local_f90 = PTR_vtable_001f0c98 + 0x20;
  local_8b0 = 0x100000001;
  local_8a8 = 0;
                    /* try { // try from 0018c888 to 0018c89b has its CatchHandler @ 0018ca78 */
  facebook::react::RNSStackHeaderItemSpacerIOSProps::RNSStackHeaderItemSpacerIOSProps
            ((RNSStackHeaderItemSpacerIOSProps *)local_8a0,(PropsParserContext *)local_ff0,
             (RNSStackHeaderItemSpacerIOSProps *)&local_f90,(RawProps *)&local_f8);
  puVar5 = PTR_PTR_001f0ca0;
  FUN_0017d0e8(local_8a0,PTR_PTR_001f0ca0 + 8);
  FUN_0017d0e8(&local_f90,puVar5 + 8);
  facebook::react::RawPropsParser::postPrepare();
  pvVar3 = local_120;
  puVar4 = (undefined8 *)local_110;
  while (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar4[6];
    pvVar8 = (void *)*puVar4;
    local_120 = pvVar3;
    if ((plVar7 == (long *)0x0) || (lVar6 = FUN_001735f0(0xffffffffffffffff,plVar7 + 1), lVar6 != 0)
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
  pvVar8 = local_80;
  pvVar3 = local_78;
  if (local_80 != (void *)0x0) {
    while (pvVar3 != pvVar8) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 0018c9a8 to 0018c9b3 has its CatchHandler @ 0018ca7c */
        (*(code *)(&PTR_FUN_001e82f8)[*(uint *)((long)pvVar3 + -8)])
                  (&local_f90,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_78 = pvVar8;
    operator_delete(local_80);
  }
  if (local_98 != (void *)0x0) {
    pvStack_90 = local_98;
    operator_delete(local_98);
  }
  folly::dynamic::destroy();
  facebook::jsi::Value::~Value((Value *)local_e0);
  if (local_fb0 != (void *)0x0) {
    pvStack_fa8 = local_fb0;
    operator_delete(local_fb0);
  }
  if (pvStack_fc8 != (void *)0x0) {
    local_fc0 = pvStack_fc8;
    operator_delete(pvStack_fc8);
  }
  if (local_fe0 != (void *)0x0) {
    pvStack_fd8 = local_fe0;
    operator_delete(local_fe0);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018ca80  FUN_0018ca80 =====

void FUN_0018ca80(void *param_1)

{
  FUN_0019330c();
  operator_delete(param_1);
  return;
}


// ===== 0018caa4  FUN_0018caa4 =====

undefined * FUN_0018caa4(void)

{
  return PTR_RNSStackHeaderItemSpacerIOSComponentName_001f0c90;
}


// ===== 0018cab0  FUN_0018cab0 =====

undefined * FUN_0018cab0(void)

{
  return PTR_RNSStackHeaderItemSpacerIOSComponentName_001f0c90;
}


// ===== 0018cabc  FUN_0018cabc =====

undefined8 FUN_0018cabc(void)

{
  return 0x61;
}


// ===== 0018cac4  FUN_0018cac4 =====

void FUN_0018cac4(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  *puVar6 = &PTR_FUN_001ea120;
                    /* try { // try from 0018cb30 to 0018cb3f has its CatchHandler @ 0018cc18 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_001ea170;
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
                    /* try { // try from 0018cbcc to 0018cbd7 has its CatchHandler @ 0018cc08 */
  (**(code **)(lVar8 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0018cc48  FUN_0018cc48 =====

void FUN_0018cc48(undefined8 *param_1,long *param_2,shared_ptr *param_3,ShadowNodeFragment *param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  YogaLayoutableShadowNode *local_78;
  long *local_70;
  YogaLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar5 = (long *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_001ea120;
                    /* try { // try from 0018cca0 to 0018ccaf has its CatchHandler @ 0018cdf0 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            (pYVar1,(ShadowNode *)param_3,param_4);
  lVar6 = plVar5[4];
  plVar5[3] = (long)&PTR_FUN_001ea170;
  uVar3 = *(uint *)((long)plVar5 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar6 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)plVar5 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
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
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar6 + 0x6b0) != '\0' || *(char *)(lVar6 + 0x6b1) != '\0') ||
             *(char *)(lVar6 + 0x1e8) != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar5;
                    /* try { // try from 0018cd34 to 0018cd43 has its CatchHandler @ 0018ce08 */
  facebook::react::YogaLayoutableShadowNode::completeClone
            ((ShadowNode *)pYVar1,(ShadowNodeFragment *)param_3);
  local_78 = pYVar1;
  local_70 = plVar5;
  FUN_00174090(1,plVar5 + 1);
                    /* try { // try from 0018cd54 to 0018cd63 has its CatchHandler @ 0018cde0 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar5 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar6 = FUN_001735f0(0xffffffffffffffff,local_70 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 0018cda0 to 0018cdab has its CatchHandler @ 0018ce08 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0018ce30  FUN_0018ce30 =====

void FUN_0018ce30(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0018ce40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 0018ce44  FUN_0018ce44 =====

void FUN_0018ce44(undefined8 *param_1,ulong param_2,PropsParserContext *param_3,long *param_4,
                 RawPropsParser *param_5)

{
  RNSStackHeaderItemSpacerIOSProps *this;
  uint uVar1;
  long lVar2;
  bool bVar3;
  RawValue *pRVar4;
  long *plVar5;
  RawValue *pRVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  char *__s2;
  dynamic *pdVar10;
  long lVar11;
  RNSStackHeaderItemSpacerIOSProps *pRVar12;
  undefined1 uStack_d1;
  dynamic local_d0 [32];
  dynamic *local_b0;
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar8 = facebook::react::RawProps::isEmpty(), (uVar8 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_40RNSStackHeaderItemSpacerIOSComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSStackHeaderItemSpacerIOSPropsENS0_39RNSStackHeaderItemSpacerIOSEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b48
         & 1) == 0) &&
       (param_2 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_40RNSStackHeaderItemSpacerIOSComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSStackHeaderItemSpacerIOSPropsENS0_39RNSStackHeaderItemSpacerIOSEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b48
                                     ), (int)param_2 != 0)) {
                    /* try { // try from 0018d278 to 0018d27b has its CatchHandler @ 0018d2a8 */
      FUN_0018d994();
      __cxa_atexit(FUN_0018d944,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_40RNSStackHeaderItemSpacerIOSComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSStackHeaderItemSpacerIOSPropsENS0_39RNSStackHeaderItemSpacerIOSEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b40
                   ,&PTR_LOOP_001e77b0);
      param_2 = __cxa_guard_release(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_40RNSStackHeaderItemSpacerIOSComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSStackHeaderItemSpacerIOSPropsENS0_39RNSStackHeaderItemSpacerIOSEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b48
                                   );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_40RNSStackHeaderItemSpacerIOSComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSStackHeaderItemSpacerIOSPropsENS0_39RNSStackHeaderItemSpacerIOSEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b40
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_40RNSStackHeaderItemSpacerIOSComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSStackHeaderItemSpacerIOSPropsENS0_39RNSStackHeaderItemSpacerIOSEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b40
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      param_2 = FUN_00174090(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::parse(param_5);
    pRVar12 = (RNSStackHeaderItemSpacerIOSProps *)*param_4;
    if (pRVar12 == (RNSStackHeaderItemSpacerIOSProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_40RNSStackHeaderItemSpacerIOSComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSStackHeaderItemSpacerIOSPropsENS0_39RNSStackHeaderItemSpacerIOSEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b48
           & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_40RNSStackHeaderItemSpacerIOSComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSStackHeaderItemSpacerIOSPropsENS0_39RNSStackHeaderItemSpacerIOSEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b48
                                     ), iVar7 != 0)) {
                    /* try { // try from 0018d1f8 to 0018d1fb has its CatchHandler @ 0018d2c0 */
        FUN_0018d994();
        __cxa_atexit(FUN_0018d944,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_40RNSStackHeaderItemSpacerIOSComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSStackHeaderItemSpacerIOSPropsENS0_39RNSStackHeaderItemSpacerIOSEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b40
                     ,&PTR_LOOP_001e77b0);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_40RNSStackHeaderItemSpacerIOSComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSStackHeaderItemSpacerIOSPropsENS0_39RNSStackHeaderItemSpacerIOSEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b48
                           );
      }
      pRVar12 = *(RNSStackHeaderItemSpacerIOSProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_40RNSStackHeaderItemSpacerIOSComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSStackHeaderItemSpacerIOSPropsENS0_39RNSStackHeaderItemSpacerIOSEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b40
      ;
    }
    plVar9 = (long *)operator_new(0x708);
    this = (RNSStackHeaderItemSpacerIOSProps *)(plVar9 + 3);
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_FUN_001ea288;
                    /* try { // try from 0018cf24 to 0018cf37 has its CatchHandler @ 0018d334 */
    facebook::react::RNSStackHeaderItemSpacerIOSProps::RNSStackHeaderItemSpacerIOSProps
              (this,param_3,pRVar12,(RawProps *)param_5);
                    /* try { // try from 0018cf3c to 0018cf4f has its CatchHandler @ 0018d34c */
    uVar8 = facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid();
    if ((((uVar8 & 1) == 0) ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid
                           (), (uVar8 & 1) == 0)) ||
       (uVar8 = facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid(),
       (uVar8 & 1) == 0)) {
LAB_0018cf78:
      FUN_00174090(1,plVar9 + 1);
      if ((RawProps *)*param_4 == (RawProps *)0x0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_40RNSStackHeaderItemSpacerIOSComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSStackHeaderItemSpacerIOSPropsENS0_39RNSStackHeaderItemSpacerIOSEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b48
             & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_40RNSStackHeaderItemSpacerIOSComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSStackHeaderItemSpacerIOSPropsENS0_39RNSStackHeaderItemSpacerIOSEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b48
                                       ), iVar7 != 0)) {
                    /* try { // try from 0018d238 to 0018d23b has its CatchHandler @ 0018d2ac */
          FUN_0018d994();
          __cxa_atexit(FUN_0018d944,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_40RNSStackHeaderItemSpacerIOSComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSStackHeaderItemSpacerIOSPropsENS0_39RNSStackHeaderItemSpacerIOSEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b40
                       ,&PTR_LOOP_001e77b0);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_40RNSStackHeaderItemSpacerIOSComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSStackHeaderItemSpacerIOSPropsENS0_39RNSStackHeaderItemSpacerIOSEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b48
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0018cfe0 to 0018cff3 has its CatchHandler @ 0018d2d8 */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,
                   *(RawProps **)
                    PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_40RNSStackHeaderItemSpacerIOSComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSStackHeaderItemSpacerIOSPropsENS0_39RNSStackHeaderItemSpacerIOSEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b40
                   ,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_0018d02c:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_0018d02c;
        }
        if (plVar9 != (long *)0x0) goto LAB_0018d040;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0018cf94 to 0018cfa7 has its CatchHandler @ 0018d300 */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,(RawProps *)*param_4,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_0018d040;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_0018d040:
        lVar11 = FUN_001735f0(0xffffffffffffffff,plVar9 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 0018cf5c to 0018cf67 has its CatchHandler @ 0018d2d4 */
      __s2 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar7 = strcmp(PTR_RNSStackHeaderItemSpacerIOSComponentName_001f0c90,__s2);
      if (iVar7 != 0) goto LAB_0018cf78;
      bVar3 = false;
    }
                    /* try { // try from 0018d06c to 0018d06f has its CatchHandler @ 0018d34c */
    param_2 = facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter();
    if ((param_2 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 0018d07c to 0018d097 has its CatchHandler @ 0018d2fc */
        param_2 = folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar9 + 7));
      }
      else {
        param_2 = facebook::react::RawProps::operator_cast_to_dynamic((RawProps *)param_5);
      }
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0018d1d8 to 0018d1e7 has its CatchHandler @ 0018d2f4 */
                    /* WARNING: Subroutine does not return */
          FUN_00172ea4(*(undefined8 *)PTR_name_001f09c8);
        }
        goto LAB_0018d398;
      }
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0018d1b8 to 0018d1c7 has its CatchHandler @ 0018d358 */
                    /* WARNING: Subroutine does not return */
            FUN_00172ea4(*(undefined8 *)PTR_name_001f0bb0);
          }
          goto LAB_0018d398;
        }
        uVar1 = 0x811c9dc5;
        uVar8 = (ulong)(*(byte *)(plVar5 + 3) >> 1);
        pRVar6 = (RawValue *)((long)plVar5 + 0x19);
        pRVar4 = (RawValue *)((long)plVar5 + 0x19);
        if ((*(byte *)(plVar5 + 3) & 1) != 0) {
          uVar8 = plVar5[4];
          pRVar6 = (RawValue *)plVar5[5];
          pRVar4 = (RawValue *)plVar5[5];
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          uVar1 = (uVar1 ^ (int)(char)*pRVar6) * 0x1000193;
          pRVar6 = pRVar6 + 1;
        }
                    /* try { // try from 0018d118 to 0018d123 has its CatchHandler @ 0018d360 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 0018d128 to 0018d13f has its CatchHandler @ 0018d364 */
        param_2 = facebook::react::HostPlatformViewProps::setProp
                            ((PropsParserContext *)this,(uint)param_3,(char *)(ulong)uVar1,pRVar4);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 0018d150 to 0018d15b has its CatchHandler @ 0018d354 */
          param_2 = (*(code *)(&PTR_FUN_001e82f8)[local_a0])(&uStack_d1,local_d0);
        }
      }
      param_2 = folly::dynamic::destroy();
    }
    param_1[1] = plVar9;
    *param_1 = this;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_0018d398:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}


// ===== 0018d39c  FUN_0018d39c =====

void FUN_0018d39c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0018d3a4  FUN_0018d3a4 =====

void FUN_0018d3a4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0018d3ac  FUN_0018d3ac =====

void FUN_0018d3ac(undefined8 *param_1,long param_2,long param_3)

{
  EventEmitter *pEVar1;
  ShadowNodeFamily *pSVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ShadowNodeFamily *local_b0;
  undefined8 *local_a8;
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
  FUN_0017dbe4(&local_a0,param_3 + 8,param_3 + 4);
                    /* try { // try from 0018d3f0 to 0018d3f7 has its CatchHandler @ 0018d6d0 */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_001ea2d8;
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
    FUN_00174090(1,local_78 + 0x10);
  }
                    /* try { // try from 0018d434 to 0018d443 has its CatchHandler @ 0018d6a4 */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_001e8610;
                    /* try { // try from 0018d450 to 0018d457 has its CatchHandler @ 0018d694 */
  puVar6 = (undefined8 *)operator_new(0x58);
  *puVar6 = &PTR_FUN_001e8630;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[4] = 0;
  puVar6[3] = 0;
  plVar5[0xb] = (long)(puVar6 + 3);
  plVar5[0xc] = (long)puVar6;
  puVar6[6] = 0;
  puVar6[5] = 0;
  puVar6[8] = 0;
  puVar6[7] = 0;
  *(undefined8 *)((long)puVar6 + 0x4c) = 0;
  *(undefined8 *)((long)puVar6 + 0x44) = 0;
  plVar5[3] = (long)&PTR_FUN_001ea328;
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = plStack_98;
  local_90 = pEVar1;
  local_88 = plVar5;
  if ((plStack_98 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_98 + 1), lVar7 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0018d504 to 0018d50b has its CatchHandler @ 0018d684 */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  *puVar6 = &PTR_FUN_001e86f0;
  pSVar2 = (ShadowNodeFamily *)(puVar6 + 4);
  puVar6[1] = 0;
  puVar6[2] = 0;
  local_70 = local_90;
  plStack_68 = local_88;
  if (local_88 != (long *)0x0) {
    FUN_00174090(1,local_88 + 1);
  }
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  if (local_78 != 0) {
    FUN_00174090(1,local_78 + 0x10);
  }
                    /* try { // try from 0018d554 to 0018d56b has its CatchHandler @ 0018d654 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar2,param_3,&local_70,&local_80,param_2);
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pEVar1 = local_90;
  *param_1 = pSVar2;
  param_1[1] = puVar6;
  local_b0 = pSVar2;
  local_a8 = puVar6;
  FUN_00174090(1,puVar6 + 2);
                    /* try { // try from 0018d5c0 to 0018d5cb has its CatchHandler @ 0018d634 */
  facebook::react::EventEmitter::setShadowNodeFamily(pEVar1,&local_b0);
  if (local_a8 != (undefined8 *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018d6f8  FUN_0018d6f8 =====

void FUN_0018d6f8(void)

{
  return;
}


// ===== 0018d6fc  FUN_0018d6fc =====

void FUN_0018d6fc(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0018d74c  FUN_0018d74c =====

void FUN_0018d74c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001ea120;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0018d75c  FUN_0018d75c =====

void FUN_0018d75c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001ea120;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0018d78c  FUN_0018d78c =====

void FUN_0018d78c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0018d794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0018d798  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0018d79c  FUN_0018d79c =====

void FUN_0018d79c(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_001f09e8 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
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
  FUN_00173ffc(param_1 + 0x23);
  FUN_00173f00(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0018d85c  FUN_0018d85c =====

void FUN_0018d85c(long param_1)

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


// ===== 0018d8c4  FUN_0018d8c4 =====

bool FUN_0018d8c4(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 0018d8dc  FUN_0018d8dc =====

bool FUN_0018d8dc(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 0018d8f4  FUN_0018d8f4 =====

void FUN_0018d8f4(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0018d944  FUN_0018d944 =====

void FUN_0018d944(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0018d994  FUN_0018d994 =====

void FUN_0018d994(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x708);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_001ea238;
  memset(__s,0,0x6f0);
                    /* try { // try from 0018d9d0 to 0018d9e3 has its CatchHandler @ 0018da5c */
  FUN_0017cb10(__s,PTR_PTR_001f0ca0 + 0x10);
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
  puVar1 = PTR_vtable_001f0c98;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  puVar2[0xdf] = 0x100000001;
  puVar2[3] = puVar1 + 0x20;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_40RNSStackHeaderItemSpacerIOSComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSStackHeaderItemSpacerIOSPropsENS0_39RNSStackHeaderItemSpacerIOSEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b40
  ;
  *(undefined4 *)(puVar2 + 0xe0) = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 0018da78  FUN_0018da78 =====

void FUN_0018da78(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001ea238;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0018da88  FUN_0018da88 =====

void FUN_0018da88(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001ea238;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0018dab8  FUN_0018dab8 =====

void FUN_0018dab8(long param_1)

{
  FUN_0017d0e8(param_1 + 0x18,PTR_PTR_001f0ca0 + 8);
  return;
}


// ===== 0018dacc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0018dad0  FUN_0018dad0 =====

void FUN_0018dad0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001ea288;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0018dae0  FUN_0018dae0 =====

void FUN_0018dae0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001ea288;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0018db10  FUN_0018db10 =====

void FUN_0018db10(long param_1)

{
  FUN_0017d0e8(param_1 + 0x18,PTR_PTR_001f0ca0 + 8);
  return;
}


// ===== 0018db24  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0018db28  FUN_0018db28 =====

void FUN_0018db28(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0018db78  FUN_0018db78 =====

void FUN_0018db78(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001ea2d8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0018db88  FUN_0018db88 =====

void FUN_0018db88(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001ea2d8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0018dbb8  FUN_0018dbb8 =====

void FUN_0018dbb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0018dbc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0018dbc4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0018dbc8  FUN_0018dbc8 =====

void FUN_0018dbc8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_001e8610;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_001e8680;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 0018dc78  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_25RNSStackHostComponentNameEEEENS0_17RNSStackHostPropsENS0_24RNSStackHostEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_25RNSStackHostComponentNameEEEENS0_17RNSStackHostPropsENS0_24RNSStackHostEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1,ComponentDescriptorParameters *param_2)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ComponentDescriptor *this;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  undefined4 local_1010 [2];
  undefined8 *local_1008;
  void *local_1000;
  void *pvStack_ff8;
  undefined8 local_ff0;
  void *pvStack_fe8;
  void *local_fe0;
  undefined8 uStack_fd8;
  void *local_fd0;
  void *pvStack_fc8;
  undefined8 uStack_fc0;
  undefined8 uStack_fb8;
  undefined *local_fb0;
  undefined8 uStack_fa8;
  undefined8 local_fa0;
  undefined8 uStack_f98;
  undefined4 local_f90 [2];
  undefined8 local_f88;
  undefined8 uStack_f80;
  undefined8 local_f78;
  undefined8 uStack_f70;
  undefined4 local_f68;
  undefined4 local_f60;
  undefined1 local_f5c;
  undefined8 local_f5b;
  undefined8 local_f53;
  undefined8 uStack_f4b;
  undefined8 local_f43;
  undefined8 uStack_f3b;
  undefined8 local_f33;
  undefined8 uStack_f2b;
  undefined8 local_f23;
  undefined6 uStack_f1b;
  undefined2 uStack_f15;
  undefined6 uStack_f13;
  undefined8 uStack_f0d;
  undefined4 local_f05;
  undefined8 local_f01;
  undefined1 local_ef9;
  undefined1 uStack_ef8;
  undefined7 uStack_ef7;
  undefined8 uStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  undefined8 local_ed8;
  undefined8 uStack_ed0;
  undefined8 local_ec8;
  undefined8 uStack_ec0;
  undefined8 local_eb8;
  undefined8 uStack_eb0;
  undefined8 local_ea8;
  undefined8 uStack_ea0;
  undefined8 uStack_e98;
  undefined8 local_e90;
  undefined8 local_e88;
  undefined8 uStack_e80;
  undefined8 local_e78;
  undefined4 uStack_e70;
  undefined4 uStack_e6c;
  undefined4 uStack_e68;
  undefined4 uStack_e64;
  undefined4 uStack_e60;
  undefined4 uStack_e5c;
  undefined8 local_e58;
  undefined8 uStack_e50;
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
  undefined4 local_dd8;
  undefined1 local_dd4;
  undefined4 local_dd0;
  undefined1 local_dcc;
  undefined1 local_dc8;
  undefined1 local_dc4;
  undefined1 local_db8;
  undefined8 local_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 local_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined1 uStack_d78;
  undefined7 local_d77;
  undefined1 uStack_d70;
  undefined8 uStack_d6f;
  undefined8 local_d64;
  undefined8 uStack_d5c;
  undefined8 uStack_d54;
  undefined8 uStack_d4c;
  undefined8 local_d44;
  undefined8 uStack_d3c;
  undefined8 uStack_d34;
  undefined8 uStack_d2c;
  undefined8 local_d24;
  undefined8 uStack_d1c;
  undefined8 uStack_d14;
  undefined5 uStack_d0c;
  undefined3 local_d07;
  undefined5 uStack_d04;
  undefined1 local_cfc;
  undefined1 local_cf8;
  undefined1 local_cf4;
  undefined1 local_cf0;
  undefined1 local_cec;
  undefined1 local_ce8;
  undefined1 local_cd0;
  undefined8 local_cc8;
  undefined8 uStack_cc0;
  undefined8 local_cb8;
  undefined4 local_cb0;
  undefined1 local_cac;
  undefined4 local_cab;
  undefined1 local_ca7;
  undefined1 local_ca6;
  undefined8 local_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 local_c80;
  undefined7 uStack_c78;
  undefined4 uStack_c71;
  undefined8 local_c6c;
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
  undefined1 local_bf0;
  undefined1 local_bec;
  undefined1 local_be4;
  undefined1 local_be0;
  undefined1 local_bd8;
  undefined1 local_bd4;
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
  undefined1 local_b78;
  undefined1 local_b74;
  undefined1 local_b70;
  undefined1 local_b6c;
  undefined8 local_b68;
  undefined8 uStack_b60;
  undefined8 local_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined2 local_b38;
  undefined8 local_b34;
  undefined1 local_b2c;
  undefined8 local_b28;
  undefined8 local_b20;
  undefined8 uStack_b18;
  undefined1 local_b10;
  undefined8 local_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 local_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
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
  undefined8 uStack_a20;
  undefined8 local_a18;
  undefined6 uStack_a10;
  undefined2 uStack_a0a;
  undefined6 uStack_a08;
  undefined1 local_a00;
  undefined1 local_9fc;
  undefined1 local_9f8;
  undefined8 local_9f4;
  undefined8 uStack_9ec;
  undefined1 local_9e4;
  undefined8 local_9e0;
  undefined2 local_9d8;
  undefined1 local_9d6;
  undefined4 local_9d4;
  undefined1 local_9d0;
  undefined1 local_970;
  undefined1 local_968;
  undefined1 local_908;
  undefined4 local_900;
  undefined2 local_8fc;
  undefined1 local_8f8;
  undefined1 local_8f4;
  undefined1 local_8f0;
  undefined1 local_8ec;
  undefined1 local_8e8;
  undefined1 local_8e4;
  undefined1 local_8e0;
  undefined1 local_8dc;
  undefined1 local_8d8;
  undefined1 local_8d4;
  undefined *local_8d0;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined8 local_8b8;
  undefined8 local_8b0;
  undefined8 uStack_8a8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
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
  void *local_160;
  undefined8 uStack_158;
  void *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118 [4];
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_d8;
  void *local_d0;
  void *pvStack_c8;
  undefined8 uStack_c0;
  void *local_b8;
  void *local_b0;
  undefined8 uStack_a8;
  long local_a0 [4];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this = (ComponentDescriptor *)operator_new(0x88);
  pvStack_fe8 = (void *)0x0;
  local_ff0 = 0;
  uStack_fd8 = 0;
  local_fe0 = (void *)0x0;
  pvStack_fc8 = (void *)0x0;
  local_fd0 = (void *)0x0;
  uStack_fb8 = 0;
  uStack_fc0 = 0;
  pvStack_ff8 = (void *)0x0;
  local_1000 = (void *)0x0;
                    /* try { // try from 0018dcc8 to 0018dcd3 has its CatchHandler @ 0018e384 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_1000);
  local_130 = 0;
  *(undefined ***)this = &PTR_FUN_001ea360;
  local_128 = 0;
  local_120 = 0;
  local_118[0] = 0;
  local_108 = 0;
  local_100 = 0;
  local_d8 = 0;
  pvStack_c8 = (void *)0x0;
  local_d0 = (void *)0x0;
  local_b8 = (void *)0x0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = (void *)0x0;
  local_140 = 0;
  uStack_148 = 0;
  local_150 = (void *)0x0;
  uStack_158 = 0;
  local_160 = (void *)0x0;
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
  uStack_1e8 = 0;
  local_1f0 = 0;
                    /* try { // try from 0018dd3c to 0018dd47 has its CatchHandler @ 0018e378 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1f0);
  local_140 = CONCAT44(local_140._4_4_,0x3f800000);
  local_1010[0] = 0xffffffff;
  uStack_148 = 0;
  local_150 = (void *)0x0;
  uStack_158 = 0;
  local_160 = (void *)0x0;
  local_1008 = &local_1f0;
  facebook::react::RawProps::parse((RawPropsParser *)&local_130);
  memset(local_f90,0,0x6c0);
  local_8d0 = (undefined *)CONCAT44(local_8d0._4_4_,5);
  local_8b8 = 0;
  local_fb0 = PTR_construction_vtable_001f0e60 + 0x20;
  local_f90[0] = 5;
  uStack_fa8 = 0;
  uStack_f98 = 0;
  local_fa0 = 0;
  local_8b0 = 0;
  uStack_8a8 = 0x3f800000;
  uStack_8c0 = 0;
  local_8c8 = 0;
  uStack_f80 = 0;
  local_f88 = 0;
  uStack_f70 = 0;
  local_f78 = 0;
  local_f68 = 0x3f800000;
  folly::dynamic::destroy();
  puVar6 = PTR_PTR_001f0cb8;
  puVar5 = PTR_vtable_001f0cb0;
  local_f5c = 0;
  local_f01 = 0;
  uStack_a20 = _UNK_00142624;
  local_a28 = _DAT_0014261c;
  local_f5b = DAT_001423b8;
  uStack_b18 = _UNK_001423f8;
  local_b20 = _DAT_001423f0;
  uStack_a30 = _UNK_00142614;
  local_a38 = _DAT_0014260c;
  local_e44 = 0;
  uStack_a40 = _UNK_00142604;
  local_a48 = _DAT_001425fc;
  uStack_a50 = _UNK_001425f4;
  local_a58 = _DAT_001425ec;
  uStack_a08 = 0;
  local_e3c = 0;
  uStack_e70 = 0;
  local_e78 = 0;
  uStack_e5c = 0;
  uStack_e80 = 0;
  local_e88 = 0;
  uStack_a10 = 0;
  uStack_a0a = 0;
  local_a18 = 0;
  local_f60 = 0x10410710;
  local_f05 = 0x40004;
  uStack_e64 = 0;
  uStack_e60 = 0;
  uStack_e6c = 0;
  uStack_e68 = 0;
  uStack_e50 = 0;
  local_e58 = 0;
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
  local_dd8 = 0x7fc00000;
  local_dd0 = 0x7fc00000;
  uStack_d6f = 0;
  uStack_d70 = 0;
  uStack_d5c = 0;
  local_d64 = 0;
  uStack_d4c = 0;
  uStack_d54 = 0;
  uStack_d3c = 0;
  local_d44 = 0;
  uStack_d2c = 0;
  uStack_d34 = 0;
  uStack_d1c = 0;
  local_d24 = 0;
  uStack_d0c = 0;
  uStack_d14 = 0;
  local_d07 = 0;
  uStack_d04 = 0;
  local_cac = 1;
  local_cab = 0;
  local_ca6 = 0x23;
  local_c6c = 0x3f800000;
  uStack_b50 = 0;
  local_b58 = 0;
  uStack_b40 = 0;
  uStack_b48 = 0;
  uStack_b60 = 0;
  local_b68 = 0;
  local_b34 = 0;
  uStack_b00 = 0;
  local_b08 = 0;
  uStack_af0 = 0;
  uStack_af8 = 0;
  uStack_ae0 = 0;
  local_ae8 = 0;
  uStack_ad0 = 0;
  uStack_ad8 = 0;
  uStack_ac0 = 0;
  local_ac8 = 0;
  uStack_ab0 = 0;
  uStack_ab8 = 0;
  uStack_aa0 = 0;
  local_aa8 = 0;
  uStack_a90 = 0;
  uStack_a98 = 0;
  uStack_a80 = 0;
  local_a88 = 0;
  uStack_a70 = 0;
  uStack_a78 = 0;
  uStack_a60 = 0;
  local_a68 = 0;
  uStack_ef7 = 0;
  uStack_f4b = 0;
  local_f53 = 0;
  uStack_f3b = 0;
  local_f43 = 0;
  uStack_f2b = 0;
  local_f33 = 0;
  uStack_f1b = 0;
  local_f23 = 0;
  uStack_f0d = 0;
  uStack_f15 = 0;
  uStack_f13 = 0;
  local_ef9 = 0;
  uStack_ef8 = 0;
  uStack_ee8 = 0;
  uStack_ef0 = 0;
  local_ed8 = 0;
  uStack_ee0 = 0;
  local_ec8 = 0;
  uStack_ed0 = 0;
  local_eb8 = 0;
  uStack_ec0 = 0;
  local_ea8 = 0;
  uStack_eb0 = 0;
  uStack_e98 = 0;
  uStack_ea0 = 0;
  local_e90 = 0;
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
  local_dd4 = 0;
  local_dcc = 0;
  local_dc8 = 0;
  local_dc4 = 0;
  local_db8 = 0;
  local_cfc = 0;
  local_cf8 = 0;
  local_cf4 = 0;
  local_cf0 = 0;
  local_cec = 0;
  local_ce8 = 0;
  local_cd0 = 0;
  uStack_da8 = 0;
  local_db0 = 0;
  uStack_d98 = 0;
  uStack_da0 = 0;
  uStack_d88 = 0;
  local_d90 = 0;
  uStack_d78 = 0;
  local_d77 = 0;
  uStack_d80 = 0;
  uStack_cc0 = 0;
  local_cc8 = 0;
  local_cb8 = 0;
  local_cb0 = 0;
  local_ca7 = 0;
  uStack_c98 = 0;
  local_ca0 = 0;
  uStack_c88 = 0;
  uStack_c90 = 0;
  uStack_c78 = 0;
  uStack_c71 = 0;
  local_c80 = 0;
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
  local_bf0 = 0;
  local_bec = 0;
  local_be4 = 0;
  local_be0 = 0;
  local_bd8 = 0;
  local_bd4 = 0;
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
  local_b78 = 0;
  local_b74 = 0;
  local_b70 = 0;
  local_b6c = 0;
  local_b28 = 0;
  local_b38 = 0;
  local_b2c = 0;
  local_b10 = 0;
  local_a00 = 0;
  local_9fc = 0;
  local_9f8 = 0;
  local_9e0 = 0;
  uStack_9ec = 0;
  local_9f4 = 0;
  local_9e4 = 0;
  local_9d8 = 0x101;
  local_9d6 = 0;
  local_9d4 = 0;
  local_9d0 = 0;
  local_970 = 0;
  local_968 = 0;
  local_908 = 0;
  local_8f8 = 0;
  local_8f4 = 0;
  local_8f0 = 0;
  local_8ec = 0;
  local_8e8 = 0;
  local_8e4 = 0;
  local_8e0 = 0;
  local_8dc = 0;
  local_8d8 = 0;
  local_8d4 = 0;
  local_8fc = 0;
  local_900 = 0;
  local_fb0 = PTR_vtable_001f0cb0 + 0x20;
  local_80 = (long *)0x0;
                    /* try { // try from 0018e138 to 0018e15f has its CatchHandler @ 0018e33c */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)&local_8d0,(PropsParserContext *)(PTR_PTR_001f0cb8 + 8),
             (HostPlatformViewProps *)local_1010,(RawProps *)&local_fb0,(function *)&local_130);
  if (local_80 == local_a0) {
    lVar7 = 4;
    plVar8 = local_a0;
  }
  else {
    if (local_80 == (long *)0x0) goto LAB_0018e18c;
    lVar7 = 5;
    plVar8 = local_80;
  }
  (**(code **)(*plVar8 + lVar7 * 8))();
LAB_0018e18c:
  local_8d0 = puVar5 + 0x20;
  FUN_0017d0e8(&local_8d0,puVar6 + 8);
  FUN_0017d0e8(&local_fb0,puVar6 + 8);
  facebook::react::RawPropsParser::postPrepare();
  pvVar3 = local_160;
  puVar4 = (undefined8 *)local_150;
  while (puVar4 != (undefined8 *)0x0) {
    plVar8 = (long *)puVar4[6];
    pvVar9 = (void *)*puVar4;
    local_160 = pvVar3;
    if ((plVar8 == (long *)0x0) || (lVar7 = FUN_001735f0(0xffffffffffffffff,plVar8 + 1), lVar7 != 0)
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
    pvVar3 = local_160;
    puVar4 = (undefined8 *)pvVar9;
  }
  local_160 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_198);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_1c8);
  std::__ndk1::mutex::~mutex((mutex *)&local_1f0);
  pvVar9 = local_b8;
  pvVar3 = local_b0;
  if (local_b8 != (void *)0x0) {
    while (pvVar3 != pvVar9) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 0018e298 to 0018e2a3 has its CatchHandler @ 0018e3b4 */
        (*(code *)(&PTR_FUN_001e82f8)[*(uint *)((long)pvVar3 + -8)])
                  (&local_fb0,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_b0 = pvVar9;
    operator_delete(local_b8);
  }
  if (local_d0 != (void *)0x0) {
    pvStack_c8 = local_d0;
    operator_delete(local_d0);
  }
  folly::dynamic::destroy();
  facebook::jsi::Value::~Value((Value *)local_118);
  if (local_fd0 != (void *)0x0) {
    pvStack_fc8 = local_fd0;
    operator_delete(local_fd0);
  }
  if (pvStack_fe8 != (void *)0x0) {
    local_fe0 = pvStack_fe8;
    operator_delete(pvStack_fe8);
  }
  if (local_1000 != (void *)0x0) {
    pvStack_ff8 = local_1000;
    operator_delete(local_1000);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018e3b8  FUN_0018e3b8 =====

void FUN_0018e3b8(void *param_1)

{
  FUN_0019330c();
  operator_delete(param_1);
  return;
}


// ===== 0018e3dc  FUN_0018e3dc =====

undefined * FUN_0018e3dc(void)

{
  return PTR_RNSStackHostComponentName_001f0ca8;
}


// ===== 0018e3e8  FUN_0018e3e8 =====

undefined * FUN_0018e3e8(void)

{
  return PTR_RNSStackHostComponentName_001f0ca8;
}


// ===== 0018e3f4  FUN_0018e3f4 =====

undefined8 FUN_0018e3f4(void)

{
  return 0x61;
}


// ===== 0018e3fc  FUN_0018e3fc =====

void FUN_0018e3fc(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  *puVar6 = &PTR_FUN_001ea3f0;
                    /* try { // try from 0018e468 to 0018e477 has its CatchHandler @ 0018e550 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_001ea440;
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
                    /* try { // try from 0018e504 to 0018e50f has its CatchHandler @ 0018e540 */
  (**(code **)(lVar8 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0018e580  FUN_0018e580 =====

void FUN_0018e580(undefined8 *param_1,long *param_2,shared_ptr *param_3,ShadowNodeFragment *param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  YogaLayoutableShadowNode *local_78;
  long *local_70;
  YogaLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar5 = (long *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_001ea3f0;
                    /* try { // try from 0018e5d8 to 0018e5e7 has its CatchHandler @ 0018e728 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            (pYVar1,(ShadowNode *)param_3,param_4);
  lVar6 = plVar5[4];
  plVar5[3] = (long)&PTR_FUN_001ea440;
  uVar3 = *(uint *)((long)plVar5 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar6 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)plVar5 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
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
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar6 + 0x6b0) != '\0' || *(char *)(lVar6 + 0x6b1) != '\0') ||
             *(char *)(lVar6 + 0x1e8) != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar5;
                    /* try { // try from 0018e66c to 0018e67b has its CatchHandler @ 0018e740 */
  facebook::react::YogaLayoutableShadowNode::completeClone
            ((ShadowNode *)pYVar1,(ShadowNodeFragment *)param_3);
  local_78 = pYVar1;
  local_70 = plVar5;
  FUN_00174090(1,plVar5 + 1);
                    /* try { // try from 0018e68c to 0018e69b has its CatchHandler @ 0018e718 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar5 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar6 = FUN_001735f0(0xffffffffffffffff,local_70 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 0018e6d8 to 0018e6e3 has its CatchHandler @ 0018e740 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0018e768  FUN_0018e768 =====

void FUN_0018e768(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0018e778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 0018e77c  FUN_0018e77c =====

void FUN_0018e77c(undefined8 *param_1,ulong param_2,HostPlatformViewProps *param_3,long *param_4,
                 RawPropsParser *param_5)

{
  HostPlatformViewProps *this;
  uint uVar1;
  long lVar2;
  bool bVar3;
  RawValue *pRVar4;
  long *plVar5;
  RawValue *pRVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  char *__s2;
  dynamic *pdVar10;
  long lVar11;
  RawProps *pRVar12;
  undefined1 uStack_d1;
  dynamic local_d0 [32];
  dynamic *local_b0;
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar8 = facebook::react::RawProps::isEmpty(), (uVar8 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSStackHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSStackHostPropsENS0_24RNSStackHostEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b58
         & 1) == 0) &&
       (param_2 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSStackHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSStackHostPropsENS0_24RNSStackHostEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b58
                                     ), (int)param_2 != 0)) {
                    /* try { // try from 0018ec04 to 0018ec07 has its CatchHandler @ 0018ec34 */
      FUN_0018f350();
      __cxa_atexit(FUN_0018f300,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSStackHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSStackHostPropsENS0_24RNSStackHostEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b50
                   ,&PTR_LOOP_001e77b0);
      param_2 = __cxa_guard_release(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSStackHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSStackHostPropsENS0_24RNSStackHostEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b58
                                   );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSStackHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSStackHostPropsENS0_24RNSStackHostEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b50
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSStackHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSStackHostPropsENS0_24RNSStackHostEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b50
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      param_2 = FUN_00174090(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::parse(param_5);
    pRVar12 = (RawProps *)*param_4;
    if (pRVar12 == (RawProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSStackHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSStackHostPropsENS0_24RNSStackHostEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b58
           & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSStackHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSStackHostPropsENS0_24RNSStackHostEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b58
                                     ), iVar7 != 0)) {
                    /* try { // try from 0018eb84 to 0018eb87 has its CatchHandler @ 0018ec4c */
        FUN_0018f350();
        __cxa_atexit(FUN_0018f300,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSStackHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSStackHostPropsENS0_24RNSStackHostEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b50
                     ,&PTR_LOOP_001e77b0);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSStackHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSStackHostPropsENS0_24RNSStackHostEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b58
                           );
      }
      pRVar12 = *(RawProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSStackHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSStackHostPropsENS0_24RNSStackHostEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b50
      ;
    }
    plVar9 = (long *)operator_new(0x6f8);
    this = (HostPlatformViewProps *)(plVar9 + 3);
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_FUN_001ea558;
    local_b0 = (dynamic *)0x0;
                    /* try { // try from 0018e860 to 0018e887 has its CatchHandler @ 0018ecc0 */
    facebook::react::HostPlatformViewProps::HostPlatformViewProps
              (this,(PropsParserContext *)(PTR_PTR_001f0cb8 + 8),param_3,pRVar12,(function *)param_5
              );
    if (local_b0 == local_d0) {
      lVar11 = 4;
      pdVar10 = local_d0;
LAB_0018e8a8:
      (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
    }
    else if (local_b0 != (dynamic *)0x0) {
      lVar11 = 5;
      pdVar10 = local_b0;
      goto LAB_0018e8a8;
    }
    plVar9[3] = (long)(PTR_vtable_001f0cb0 + 0x20);
                    /* try { // try from 0018e8c8 to 0018e8db has its CatchHandler @ 0018ed08 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid();
    if ((((uVar8 & 1) == 0) ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid
                           (), (uVar8 & 1) == 0)) ||
       (uVar8 = facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid(),
       (uVar8 & 1) == 0)) {
LAB_0018e904:
      FUN_00174090(1,plVar9 + 1);
      if ((RawProps *)*param_4 == (RawProps *)0x0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSStackHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSStackHostPropsENS0_24RNSStackHostEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b58
             & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSStackHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSStackHostPropsENS0_24RNSStackHostEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b58
                                       ), iVar7 != 0)) {
                    /* try { // try from 0018ebc4 to 0018ebc7 has its CatchHandler @ 0018ec38 */
          FUN_0018f350();
          __cxa_atexit(FUN_0018f300,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSStackHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSStackHostPropsENS0_24RNSStackHostEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b50
                       ,&PTR_LOOP_001e77b0);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSStackHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSStackHostPropsENS0_24RNSStackHostEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b58
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0018e96c to 0018e97f has its CatchHandler @ 0018ec64 */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,
                   *(RawProps **)
                    PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSStackHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSStackHostPropsENS0_24RNSStackHostEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b50
                   ,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_0018e9b8:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_0018e9b8;
        }
        if (plVar9 != (long *)0x0) goto LAB_0018e9cc;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0018e920 to 0018e933 has its CatchHandler @ 0018ec8c */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,(RawProps *)*param_4,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_0018e9cc;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_0018e9cc:
        lVar11 = FUN_001735f0(0xffffffffffffffff,plVar9 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 0018e8e8 to 0018e8f3 has its CatchHandler @ 0018ec60 */
      __s2 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar7 = strcmp(PTR_RNSStackHostComponentName_001f0ca8,__s2);
      if (iVar7 != 0) goto LAB_0018e904;
      bVar3 = false;
    }
                    /* try { // try from 0018e9f8 to 0018e9fb has its CatchHandler @ 0018ed08 */
    param_2 = facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter();
    if ((param_2 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 0018ea08 to 0018ea23 has its CatchHandler @ 0018ec88 */
        param_2 = folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar9 + 7));
      }
      else {
        param_2 = facebook::react::RawProps::operator_cast_to_dynamic((RawProps *)param_5);
      }
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0018eb64 to 0018eb73 has its CatchHandler @ 0018ec80 */
                    /* WARNING: Subroutine does not return */
          FUN_00172ea4(*(undefined8 *)PTR_name_001f09c8);
        }
        goto LAB_0018ed54;
      }
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0018eb44 to 0018eb53 has its CatchHandler @ 0018ed14 */
                    /* WARNING: Subroutine does not return */
            FUN_00172ea4(*(undefined8 *)PTR_name_001f0bb0);
          }
          goto LAB_0018ed54;
        }
        uVar1 = 0x811c9dc5;
        uVar8 = (ulong)(*(byte *)(plVar5 + 3) >> 1);
        pRVar6 = (RawValue *)((long)plVar5 + 0x19);
        pRVar4 = (RawValue *)((long)plVar5 + 0x19);
        if ((*(byte *)(plVar5 + 3) & 1) != 0) {
          uVar8 = plVar5[4];
          pRVar6 = (RawValue *)plVar5[5];
          pRVar4 = (RawValue *)plVar5[5];
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          uVar1 = (uVar1 ^ (int)(char)*pRVar6) * 0x1000193;
          pRVar6 = pRVar6 + 1;
        }
                    /* try { // try from 0018eaa4 to 0018eaaf has its CatchHandler @ 0018ed1c */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 0018eab4 to 0018eacb has its CatchHandler @ 0018ed20 */
        param_2 = facebook::react::HostPlatformViewProps::setProp
                            ((PropsParserContext *)this,(uint)param_3,(char *)(ulong)uVar1,pRVar4);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 0018eadc to 0018eae7 has its CatchHandler @ 0018ed10 */
          param_2 = (*(code *)(&PTR_FUN_001e82f8)[local_a0])(&uStack_d1,local_d0);
        }
      }
      param_2 = folly::dynamic::destroy();
    }
    param_1[1] = plVar9;
    *param_1 = this;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_0018ed54:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}


// ===== 0018ed58  FUN_0018ed58 =====

void FUN_0018ed58(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0018ed60  FUN_0018ed60 =====

void FUN_0018ed60(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0018ed68  FUN_0018ed68 =====

void FUN_0018ed68(undefined8 *param_1,long param_2,long param_3)

{
  EventEmitter *pEVar1;
  ShadowNodeFamily *pSVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ShadowNodeFamily *local_b0;
  undefined8 *local_a8;
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
  FUN_0017dbe4(&local_a0,param_3 + 8,param_3 + 4);
                    /* try { // try from 0018edac to 0018edb3 has its CatchHandler @ 0018f08c */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_001ea5a8;
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
    FUN_00174090(1,local_78 + 0x10);
  }
                    /* try { // try from 0018edf0 to 0018edff has its CatchHandler @ 0018f060 */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_001e8610;
                    /* try { // try from 0018ee0c to 0018ee13 has its CatchHandler @ 0018f050 */
  puVar6 = (undefined8 *)operator_new(0x58);
  *puVar6 = &PTR_FUN_001e8630;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[4] = 0;
  puVar6[3] = 0;
  plVar5[0xb] = (long)(puVar6 + 3);
  plVar5[0xc] = (long)puVar6;
  puVar6[6] = 0;
  puVar6[5] = 0;
  puVar6[8] = 0;
  puVar6[7] = 0;
  *(undefined8 *)((long)puVar6 + 0x4c) = 0;
  *(undefined8 *)((long)puVar6 + 0x44) = 0;
  plVar5[3] = (long)&PTR_FUN_001ea5f8;
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = plStack_98;
  local_90 = pEVar1;
  local_88 = plVar5;
  if ((plStack_98 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_98 + 1), lVar7 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0018eec0 to 0018eec7 has its CatchHandler @ 0018f040 */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  *puVar6 = &PTR_FUN_001e86f0;
  pSVar2 = (ShadowNodeFamily *)(puVar6 + 4);
  puVar6[1] = 0;
  puVar6[2] = 0;
  local_70 = local_90;
  plStack_68 = local_88;
  if (local_88 != (long *)0x0) {
    FUN_00174090(1,local_88 + 1);
  }
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  if (local_78 != 0) {
    FUN_00174090(1,local_78 + 0x10);
  }
                    /* try { // try from 0018ef10 to 0018ef27 has its CatchHandler @ 0018f010 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar2,param_3,&local_70,&local_80,param_2);
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pEVar1 = local_90;
  *param_1 = pSVar2;
  param_1[1] = puVar6;
  local_b0 = pSVar2;
  local_a8 = puVar6;
  FUN_00174090(1,puVar6 + 2);
                    /* try { // try from 0018ef7c to 0018ef87 has its CatchHandler @ 0018eff0 */
  facebook::react::EventEmitter::setShadowNodeFamily(pEVar1,&local_b0);
  if (local_a8 != (undefined8 *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018f0b4  FUN_0018f0b4 =====

void FUN_0018f0b4(void)

{
  return;
}


// ===== 0018f0b8  FUN_0018f0b8 =====

void FUN_0018f0b8(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0018f108  FUN_0018f108 =====

void FUN_0018f108(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001ea3f0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0018f118  FUN_0018f118 =====

void FUN_0018f118(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001ea3f0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0018f148  FUN_0018f148 =====

void FUN_0018f148(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0018f150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0018f154  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0018f158  FUN_0018f158 =====

void FUN_0018f158(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_001f09e8 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
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
  FUN_00173ffc(param_1 + 0x23);
  FUN_00173f00(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0018f218  FUN_0018f218 =====

void FUN_0018f218(long param_1)

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


// ===== 0018f280  FUN_0018f280 =====

bool FUN_0018f280(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 0018f298  FUN_0018f298 =====

bool FUN_0018f298(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 0018f2b0  FUN_0018f2b0 =====

void FUN_0018f2b0(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0018f300  FUN_0018f300 =====

void FUN_0018f300(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0018f350  FUN_0018f350 =====

void FUN_0018f350(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x6f8);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_001ea508;
  memset(__s,0,0x6e0);
                    /* try { // try from 0018f38c to 0018f39f has its CatchHandler @ 0018f40c */
  FUN_0017cb10(__s,PTR_PTR_001f0cb8 + 0x10);
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
  puVar1 = PTR_vtable_001f0cb0;
  *(undefined1 *)((long)puVar2 + 0x6f4) = 0;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSStackHostComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17RNSStackHostPropsENS0_24RNSStackHostEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b50
  ;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 0018f428  FUN_0018f428 =====

void FUN_0018f428(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001ea508;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0018f438  FUN_0018f438 =====

void FUN_0018f438(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001ea508;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0018f468  FUN_0018f468 =====

void FUN_0018f468(long param_1)

{
  FUN_0017d0e8(param_1 + 0x18,PTR_PTR_001f0cb8 + 8);
  return;
}


// ===== 0018f47c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0018f480  FUN_0018f480 =====

void FUN_0018f480(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001ea558;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0018f490  FUN_0018f490 =====

void FUN_0018f490(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001ea558;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0018f4c0  FUN_0018f4c0 =====

void FUN_0018f4c0(long param_1)

{
  FUN_0017d0e8(param_1 + 0x18,PTR_PTR_001f0cb8 + 8);
  return;
}


// ===== 0018f4d4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0018f4d8  FUN_0018f4d8 =====

void FUN_0018f4d8(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0018f528  FUN_0018f528 =====

void FUN_0018f528(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001ea5a8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0018f538  FUN_0018f538 =====

void FUN_0018f538(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001ea5a8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0018f568  FUN_0018f568 =====

void FUN_0018f568(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0018f570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0018f574  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0018f578  FUN_0018f578 =====

void FUN_0018f578(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_001e8610;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_001e8680;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 0018f628  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_42RNSTabsBottomAccessoryContentComponentNameEEEENS0_34RNSTabsBottomAccessoryContentPropsENS0_41RNSTabsBottomAccessoryContentEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_42RNSTabsBottomAccessoryContentComponentNameEEEENS0_34RNSTabsBottomAccessoryContentPropsENS0_41RNSTabsBottomAccessoryContentEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1,ComponentDescriptorParameters *param_2)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ComponentDescriptor *this;
  long lVar6;
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
  undefined4 local_8a0;
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
  undefined4 local_d0;
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
                    /* try { // try from 0018f678 to 0018f683 has its CatchHandler @ 0018fcb0 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_fd0);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_001ea630;
  local_f0 = 0;
  local_e8 = 0;
  local_e0[0] = 0;
  local_d0 = 0;
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
                    /* try { // try from 0018f6f4 to 0018f6ff has its CatchHandler @ 0018fce0 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_fe0[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_fd8 = &local_1b0;
  facebook::react::RawProps::parse((RawPropsParser *)&local_f8);
  memset(local_f60,0,0x6c8);
  local_898[0] = 5;
  local_880 = 0;
  local_f80 = PTR_construction_vtable_001f0e68 + 0x20;
  local_f60[0] = 5;
  uStack_f68 = 0;
  local_f70 = 0;
  uStack_f78 = 0;
  local_878 = 0;
  uStack_870 = 0x3f800000;
  uStack_888 = 0;
  local_890 = 0;
  uStack_f50 = 0;
  local_f58 = 0;
  uStack_f40 = 0;
  local_f48 = 0;
  local_f38 = 0x3f800000;
  folly::dynamic::destroy();
  local_f2c = 0;
  local_ed1 = 0;
  uStack_9f0 = _UNK_00142624;
  local_9f8 = _DAT_0014261c;
  local_f2b = DAT_001423b8;
  uStack_ae8 = _UNK_001423f8;
  local_af0 = _DAT_001423f0;
  uStack_a00 = _UNK_00142614;
  local_a08 = _DAT_0014260c;
  local_e14 = 0;
  uStack_a10 = _UNK_00142604;
  local_a18 = _DAT_001425fc;
  uStack_a20 = _UNK_001425f4;
  local_a28 = _DAT_001425ec;
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
  local_f80 = PTR_vtable_001f0cc8 + 0x20;
  local_8a0 = 0;
                    /* try { // try from 0018faec to 0018faff has its CatchHandler @ 0018fce0 */
  facebook::react::RNSTabsBottomAccessoryContentProps::RNSTabsBottomAccessoryContentProps
            ((RNSTabsBottomAccessoryContentProps *)local_898,(PropsParserContext *)local_fe0,
             (RNSTabsBottomAccessoryContentProps *)&local_f80,(RawProps *)&local_f8);
  puVar5 = PTR_PTR_001f0cd0;
  FUN_0017d0e8(local_898,PTR_PTR_001f0cd0 + 8);
  FUN_0017d0e8(&local_f80,puVar5 + 8);
  facebook::react::RawPropsParser::postPrepare();
  pvVar3 = local_120;
  puVar4 = (undefined8 *)local_110;
  while (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar4[6];
    pvVar8 = (void *)*puVar4;
    local_120 = pvVar3;
    if ((plVar7 == (long *)0x0) || (lVar6 = FUN_001735f0(0xffffffffffffffff,plVar7 + 1), lVar6 != 0)
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
                    /* try { // try from 0018fc0c to 0018fc17 has its CatchHandler @ 0018fce4 */
        (*(code *)(&PTR_FUN_001e82f8)[*(uint *)((long)pvVar3 + -8)])
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
  folly::dynamic::destroy();
  facebook::jsi::Value::~Value((Value *)local_e0);
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
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0018fce8  FUN_0018fce8 =====

void FUN_0018fce8(void *param_1)

{
  FUN_0019330c();
  operator_delete(param_1);
  return;
}


// ===== 0018fd0c  FUN_0018fd0c =====

undefined * FUN_0018fd0c(void)

{
  return PTR_RNSTabsBottomAccessoryContentComponentName_001f0cc0;
}


// ===== 0018fd18  FUN_0018fd18 =====

undefined * FUN_0018fd18(void)

{
  return PTR_RNSTabsBottomAccessoryContentComponentName_001f0cc0;
}


// ===== 0018fd24  FUN_0018fd24 =====

undefined8 FUN_0018fd24(void)

{
  return 0x61;
}


// ===== 0018fd2c  FUN_0018fd2c =====

void FUN_0018fd2c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  *puVar6 = &PTR_FUN_001ea6c0;
                    /* try { // try from 0018fd98 to 0018fda7 has its CatchHandler @ 0018fe80 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_001ea710;
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
                    /* try { // try from 0018fe34 to 0018fe3f has its CatchHandler @ 0018fe70 */
  (**(code **)(lVar8 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0018feb0  FUN_0018feb0 =====

void FUN_0018feb0(undefined8 *param_1,long *param_2,shared_ptr *param_3,ShadowNodeFragment *param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  YogaLayoutableShadowNode *local_78;
  long *local_70;
  YogaLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar5 = (long *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_001ea6c0;
                    /* try { // try from 0018ff08 to 0018ff17 has its CatchHandler @ 00190058 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            (pYVar1,(ShadowNode *)param_3,param_4);
  lVar6 = plVar5[4];
  plVar5[3] = (long)&PTR_FUN_001ea710;
  uVar3 = *(uint *)((long)plVar5 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar6 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)plVar5 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
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
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar6 + 0x6b0) != '\0' || *(char *)(lVar6 + 0x6b1) != '\0') ||
             *(char *)(lVar6 + 0x1e8) != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar5;
                    /* try { // try from 0018ff9c to 0018ffab has its CatchHandler @ 00190070 */
  facebook::react::YogaLayoutableShadowNode::completeClone
            ((ShadowNode *)pYVar1,(ShadowNodeFragment *)param_3);
  local_78 = pYVar1;
  local_70 = plVar5;
  FUN_00174090(1,plVar5 + 1);
                    /* try { // try from 0018ffbc to 0018ffcb has its CatchHandler @ 00190048 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar5 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar6 = FUN_001735f0(0xffffffffffffffff,local_70 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 00190008 to 00190013 has its CatchHandler @ 00190070 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00190098  FUN_00190098 =====

void FUN_00190098(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x001900a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 001900ac  FUN_001900ac =====

void FUN_001900ac(undefined8 *param_1,ulong param_2,PropsParserContext *param_3,long *param_4,
                 RawPropsParser *param_5)

{
  RNSTabsBottomAccessoryContentProps *this;
  uint uVar1;
  long lVar2;
  bool bVar3;
  RawValue *pRVar4;
  long *plVar5;
  RawValue *pRVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  char *__s2;
  dynamic *pdVar10;
  long lVar11;
  RNSTabsBottomAccessoryContentProps *pRVar12;
  undefined1 uStack_d1;
  dynamic local_d0 [32];
  dynamic *local_b0;
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar8 = facebook::react::RawProps::isEmpty(), (uVar8 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_42RNSTabsBottomAccessoryContentComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_34RNSTabsBottomAccessoryContentPropsENS0_41RNSTabsBottomAccessoryContentEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b68
         & 1) == 0) &&
       (param_2 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_42RNSTabsBottomAccessoryContentComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_34RNSTabsBottomAccessoryContentPropsENS0_41RNSTabsBottomAccessoryContentEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b68
                                     ), (int)param_2 != 0)) {
                    /* try { // try from 001904e0 to 001904e3 has its CatchHandler @ 00190510 */
      FUN_00190bfc();
      __cxa_atexit(FUN_00190bac,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_42RNSTabsBottomAccessoryContentComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_34RNSTabsBottomAccessoryContentPropsENS0_41RNSTabsBottomAccessoryContentEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b60
                   ,&PTR_LOOP_001e77b0);
      param_2 = __cxa_guard_release(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_42RNSTabsBottomAccessoryContentComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_34RNSTabsBottomAccessoryContentPropsENS0_41RNSTabsBottomAccessoryContentEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b68
                                   );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_42RNSTabsBottomAccessoryContentComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_34RNSTabsBottomAccessoryContentPropsENS0_41RNSTabsBottomAccessoryContentEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b60
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_42RNSTabsBottomAccessoryContentComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_34RNSTabsBottomAccessoryContentPropsENS0_41RNSTabsBottomAccessoryContentEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b60
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      param_2 = FUN_00174090(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::parse(param_5);
    pRVar12 = (RNSTabsBottomAccessoryContentProps *)*param_4;
    if (pRVar12 == (RNSTabsBottomAccessoryContentProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_42RNSTabsBottomAccessoryContentComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_34RNSTabsBottomAccessoryContentPropsENS0_41RNSTabsBottomAccessoryContentEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b68
           & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_42RNSTabsBottomAccessoryContentComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_34RNSTabsBottomAccessoryContentPropsENS0_41RNSTabsBottomAccessoryContentEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b68
                                     ), iVar7 != 0)) {
                    /* try { // try from 00190460 to 00190463 has its CatchHandler @ 00190528 */
        FUN_00190bfc();
        __cxa_atexit(FUN_00190bac,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_42RNSTabsBottomAccessoryContentComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_34RNSTabsBottomAccessoryContentPropsENS0_41RNSTabsBottomAccessoryContentEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b60
                     ,&PTR_LOOP_001e77b0);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_42RNSTabsBottomAccessoryContentComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_34RNSTabsBottomAccessoryContentPropsENS0_41RNSTabsBottomAccessoryContentEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b68
                           );
      }
      pRVar12 = *(RNSTabsBottomAccessoryContentProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_42RNSTabsBottomAccessoryContentComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_34RNSTabsBottomAccessoryContentPropsENS0_41RNSTabsBottomAccessoryContentEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b60
      ;
    }
    plVar9 = (long *)operator_new(0x700);
    this = (RNSTabsBottomAccessoryContentProps *)(plVar9 + 3);
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_FUN_001ea828;
                    /* try { // try from 0019018c to 0019019f has its CatchHandler @ 0019059c */
    facebook::react::RNSTabsBottomAccessoryContentProps::RNSTabsBottomAccessoryContentProps
              (this,param_3,pRVar12,(RawProps *)param_5);
                    /* try { // try from 001901a4 to 001901b7 has its CatchHandler @ 001905b4 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid();
    if ((((uVar8 & 1) == 0) ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid
                           (), (uVar8 & 1) == 0)) ||
       (uVar8 = facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid(),
       (uVar8 & 1) == 0)) {
LAB_001901e0:
      FUN_00174090(1,plVar9 + 1);
      if ((RawProps *)*param_4 == (RawProps *)0x0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_42RNSTabsBottomAccessoryContentComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_34RNSTabsBottomAccessoryContentPropsENS0_41RNSTabsBottomAccessoryContentEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b68
             & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_42RNSTabsBottomAccessoryContentComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_34RNSTabsBottomAccessoryContentPropsENS0_41RNSTabsBottomAccessoryContentEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b68
                                       ), iVar7 != 0)) {
                    /* try { // try from 001904a0 to 001904a3 has its CatchHandler @ 00190514 */
          FUN_00190bfc();
          __cxa_atexit(FUN_00190bac,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_42RNSTabsBottomAccessoryContentComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_34RNSTabsBottomAccessoryContentPropsENS0_41RNSTabsBottomAccessoryContentEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b60
                       ,&PTR_LOOP_001e77b0);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_42RNSTabsBottomAccessoryContentComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_34RNSTabsBottomAccessoryContentPropsENS0_41RNSTabsBottomAccessoryContentEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b68
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00190248 to 0019025b has its CatchHandler @ 00190540 */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,
                   *(RawProps **)
                    PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_42RNSTabsBottomAccessoryContentComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_34RNSTabsBottomAccessoryContentPropsENS0_41RNSTabsBottomAccessoryContentEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b60
                   ,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_00190294:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_00190294;
        }
        if (plVar9 != (long *)0x0) goto LAB_001902a8;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 001901fc to 0019020f has its CatchHandler @ 00190568 */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,(RawProps *)*param_4,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_001902a8;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_001902a8:
        lVar11 = FUN_001735f0(0xffffffffffffffff,plVar9 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 001901c4 to 001901cf has its CatchHandler @ 0019053c */
      __s2 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar7 = strcmp(PTR_RNSTabsBottomAccessoryContentComponentName_001f0cc0,__s2);
      if (iVar7 != 0) goto LAB_001901e0;
      bVar3 = false;
    }
                    /* try { // try from 001902d4 to 001902d7 has its CatchHandler @ 001905b4 */
    param_2 = facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter();
    if ((param_2 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 001902e4 to 001902ff has its CatchHandler @ 00190564 */
        param_2 = folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar9 + 7));
      }
      else {
        param_2 = facebook::react::RawProps::operator_cast_to_dynamic((RawProps *)param_5);
      }
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00190440 to 0019044f has its CatchHandler @ 0019055c */
                    /* WARNING: Subroutine does not return */
          FUN_00172ea4(*(undefined8 *)PTR_name_001f09c8);
        }
        goto LAB_00190600;
      }
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00190420 to 0019042f has its CatchHandler @ 001905c0 */
                    /* WARNING: Subroutine does not return */
            FUN_00172ea4(*(undefined8 *)PTR_name_001f0bb0);
          }
          goto LAB_00190600;
        }
        uVar1 = 0x811c9dc5;
        uVar8 = (ulong)(*(byte *)(plVar5 + 3) >> 1);
        pRVar6 = (RawValue *)((long)plVar5 + 0x19);
        pRVar4 = (RawValue *)((long)plVar5 + 0x19);
        if ((*(byte *)(plVar5 + 3) & 1) != 0) {
          uVar8 = plVar5[4];
          pRVar6 = (RawValue *)plVar5[5];
          pRVar4 = (RawValue *)plVar5[5];
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          uVar1 = (uVar1 ^ (int)(char)*pRVar6) * 0x1000193;
          pRVar6 = pRVar6 + 1;
        }
                    /* try { // try from 00190380 to 0019038b has its CatchHandler @ 001905c8 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 00190390 to 001903a7 has its CatchHandler @ 001905cc */
        param_2 = facebook::react::HostPlatformViewProps::setProp
                            ((PropsParserContext *)this,(uint)param_3,(char *)(ulong)uVar1,pRVar4);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 001903b8 to 001903c3 has its CatchHandler @ 001905bc */
          param_2 = (*(code *)(&PTR_FUN_001e82f8)[local_a0])(&uStack_d1,local_d0);
        }
      }
      param_2 = folly::dynamic::destroy();
    }
    param_1[1] = plVar9;
    *param_1 = this;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_00190600:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}


// ===== 00190604  FUN_00190604 =====

void FUN_00190604(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0019060c  FUN_0019060c =====

void FUN_0019060c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00190614  FUN_00190614 =====

void FUN_00190614(undefined8 *param_1,long param_2,long param_3)

{
  EventEmitter *pEVar1;
  ShadowNodeFamily *pSVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ShadowNodeFamily *local_b0;
  undefined8 *local_a8;
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
  FUN_0017dbe4(&local_a0,param_3 + 8,param_3 + 4);
                    /* try { // try from 00190658 to 0019065f has its CatchHandler @ 00190938 */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_001ea878;
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
    FUN_00174090(1,local_78 + 0x10);
  }
                    /* try { // try from 0019069c to 001906ab has its CatchHandler @ 0019090c */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_001e8610;
                    /* try { // try from 001906b8 to 001906bf has its CatchHandler @ 001908fc */
  puVar6 = (undefined8 *)operator_new(0x58);
  *puVar6 = &PTR_FUN_001e8630;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[4] = 0;
  puVar6[3] = 0;
  plVar5[0xb] = (long)(puVar6 + 3);
  plVar5[0xc] = (long)puVar6;
  puVar6[6] = 0;
  puVar6[5] = 0;
  puVar6[8] = 0;
  puVar6[7] = 0;
  *(undefined8 *)((long)puVar6 + 0x4c) = 0;
  *(undefined8 *)((long)puVar6 + 0x44) = 0;
  plVar5[3] = (long)&PTR_FUN_001ea8c8;
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = plStack_98;
  local_90 = pEVar1;
  local_88 = plVar5;
  if ((plStack_98 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_98 + 1), lVar7 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0019076c to 00190773 has its CatchHandler @ 001908ec */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  *puVar6 = &PTR_FUN_001e86f0;
  pSVar2 = (ShadowNodeFamily *)(puVar6 + 4);
  puVar6[1] = 0;
  puVar6[2] = 0;
  local_70 = local_90;
  plStack_68 = local_88;
  if (local_88 != (long *)0x0) {
    FUN_00174090(1,local_88 + 1);
  }
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  if (local_78 != 0) {
    FUN_00174090(1,local_78 + 0x10);
  }
                    /* try { // try from 001907bc to 001907d3 has its CatchHandler @ 001908bc */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar2,param_3,&local_70,&local_80,param_2);
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pEVar1 = local_90;
  *param_1 = pSVar2;
  param_1[1] = puVar6;
  local_b0 = pSVar2;
  local_a8 = puVar6;
  FUN_00174090(1,puVar6 + 2);
                    /* try { // try from 00190828 to 00190833 has its CatchHandler @ 0019089c */
  facebook::react::EventEmitter::setShadowNodeFamily(pEVar1,&local_b0);
  if (local_a8 != (undefined8 *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00190960  FUN_00190960 =====

void FUN_00190960(void)

{
  return;
}


// ===== 00190964  FUN_00190964 =====

void FUN_00190964(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 001909b4  FUN_001909b4 =====

void FUN_001909b4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001ea6c0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 001909c4  FUN_001909c4 =====

void FUN_001909c4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001ea6c0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001909f4  FUN_001909f4 =====

void FUN_001909f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001909fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00190a00  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 00190a04  FUN_00190a04 =====

void FUN_00190a04(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_001f09e8 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
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
  FUN_00173ffc(param_1 + 0x23);
  FUN_00173f00(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00190ac4  FUN_00190ac4 =====

void FUN_00190ac4(long param_1)

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


// ===== 00190b2c  FUN_00190b2c =====

bool FUN_00190b2c(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 00190b44  FUN_00190b44 =====

bool FUN_00190b44(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 00190b5c  FUN_00190b5c =====

void FUN_00190b5c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00190bac  FUN_00190bac =====

void FUN_00190bac(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00190bfc  FUN_00190bfc =====

void FUN_00190bfc(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x700);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_001ea7d8;
  memset(__s,0,0x6e8);
                    /* try { // try from 00190c38 to 00190c4b has its CatchHandler @ 00190cbc */
  FUN_0017cb10(__s,PTR_PTR_001f0cd0 + 0x10);
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
  puVar1 = PTR_vtable_001f0cc8;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_42RNSTabsBottomAccessoryContentComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_34RNSTabsBottomAccessoryContentPropsENS0_41RNSTabsBottomAccessoryContentEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b60
  ;
  *(undefined4 *)(puVar2 + 0xdf) = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 00190cd8  FUN_00190cd8 =====

void FUN_00190cd8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001ea7d8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00190ce8  FUN_00190ce8 =====

void FUN_00190ce8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001ea7d8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00190d18  FUN_00190d18 =====

void FUN_00190d18(long param_1)

{
  FUN_0017d0e8(param_1 + 0x18,PTR_PTR_001f0cd0 + 8);
  return;
}


// ===== 00190d2c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 00190d30  FUN_00190d30 =====

void FUN_00190d30(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001ea828;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00190d40  FUN_00190d40 =====

void FUN_00190d40(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001ea828;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00190d70  FUN_00190d70 =====

void FUN_00190d70(long param_1)

{
  FUN_0017d0e8(param_1 + 0x18,PTR_PTR_001f0cd0 + 8);
  return;
}


// ===== 00190d84  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 00190d88  FUN_00190d88 =====

void FUN_00190d88(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00190dd8  FUN_00190dd8 =====

void FUN_00190dd8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001ea878;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00190de8  FUN_00190de8 =====

void FUN_00190de8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001ea878;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00190e18  FUN_00190e18 =====

void FUN_00190e18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00190e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00190e24  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 00190e28  FUN_00190e28 =====

void FUN_00190e28(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_001e8610;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_001e8680;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 00190ed8  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_33RNSTabsScreenAndroidComponentNameEEEENS0_25RNSTabsScreenAndroidPropsENS0_32RNSTabsScreenAndroidEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_33RNSTabsScreenAndroidComponentNameEEEENS0_25RNSTabsScreenAndroidPropsENS0_32RNSTabsScreenAndroidEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1,ComponentDescriptorParameters *param_2)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ComponentDescriptor *this;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  undefined4 local_14e0 [2];
  undefined8 *local_14d8;
  void *local_14d0;
  void *pvStack_14c8;
  undefined8 local_14c0;
  void *pvStack_14b8;
  void *local_14b0;
  undefined8 uStack_14a8;
  void *local_14a0;
  void *pvStack_1498;
  undefined8 uStack_1490;
  undefined8 uStack_1488;
  undefined *local_1480;
  undefined8 uStack_1478;
  undefined8 local_1470;
  undefined8 uStack_1468;
  undefined4 local_1460 [2];
  undefined8 local_1458;
  undefined8 uStack_1450;
  undefined8 local_1448;
  undefined8 uStack_1440;
  undefined4 local_1438;
  undefined4 local_1430;
  undefined1 local_142c;
  undefined8 local_142b;
  undefined8 local_1423;
  undefined8 uStack_141b;
  undefined8 local_1413;
  undefined8 uStack_140b;
  undefined8 local_1403;
  undefined8 uStack_13fb;
  undefined8 local_13f3;
  undefined6 uStack_13eb;
  undefined2 uStack_13e5;
  undefined6 uStack_13e3;
  undefined8 uStack_13dd;
  undefined4 local_13d5;
  undefined8 local_13d1;
  undefined1 local_13c9;
  undefined1 uStack_13c8;
  undefined7 uStack_13c7;
  undefined8 uStack_13c0;
  undefined8 uStack_13b8;
  undefined8 uStack_13b0;
  undefined8 local_13a8;
  undefined8 uStack_13a0;
  undefined8 local_1398;
  undefined8 uStack_1390;
  undefined8 local_1388;
  undefined8 uStack_1380;
  undefined8 local_1378;
  undefined8 uStack_1370;
  undefined8 uStack_1368;
  undefined8 local_1360;
  undefined8 local_1358;
  undefined8 uStack_1350;
  undefined8 local_1348;
  undefined4 uStack_1340;
  undefined4 uStack_133c;
  undefined4 uStack_1338;
  undefined4 uStack_1334;
  undefined4 uStack_1330;
  undefined4 uStack_132c;
  undefined8 local_1328;
  undefined8 uStack_1320;
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
  undefined4 local_12b8;
  undefined1 local_12b4;
  undefined4 local_12b0;
  undefined1 local_12ac;
  undefined4 local_12a8;
  undefined1 local_12a4;
  undefined4 local_12a0;
  undefined1 local_129c;
  undefined1 local_1298;
  undefined1 local_1294;
  undefined1 local_1288;
  undefined8 local_1280;
  undefined8 uStack_1278;
  undefined8 uStack_1270;
  undefined8 uStack_1268;
  undefined8 local_1260;
  undefined8 uStack_1258;
  undefined8 uStack_1250;
  undefined1 uStack_1248;
  undefined7 local_1247;
  undefined1 uStack_1240;
  undefined8 uStack_123f;
  undefined8 local_1234;
  undefined8 uStack_122c;
  undefined8 uStack_1224;
  undefined8 uStack_121c;
  undefined8 local_1214;
  undefined8 uStack_120c;
  undefined8 uStack_1204;
  undefined8 uStack_11fc;
  undefined8 local_11f4;
  undefined8 uStack_11ec;
  undefined8 uStack_11e4;
  undefined5 uStack_11dc;
  undefined3 local_11d7;
  undefined5 uStack_11d4;
  undefined1 local_11cc;
  undefined1 local_11c8;
  undefined1 local_11c4;
  undefined1 local_11c0;
  undefined1 local_11bc;
  undefined1 local_11b8;
  undefined1 local_11a0;
  undefined8 local_1198;
  undefined8 uStack_1190;
  undefined8 local_1188;
  undefined4 local_1180;
  undefined1 local_117c;
  undefined4 local_117b;
  undefined1 local_1177;
  undefined1 local_1176;
  undefined8 local_1170;
  undefined8 uStack_1168;
  undefined8 uStack_1160;
  undefined8 uStack_1158;
  undefined8 local_1150;
  undefined7 uStack_1148;
  undefined4 uStack_1141;
  undefined8 local_113c;
  undefined1 local_1134;
  undefined1 local_112c;
  undefined1 local_1128;
  undefined1 local_1120;
  undefined1 local_111c;
  undefined1 local_1114;
  undefined1 local_1110;
  undefined1 local_1108;
  undefined1 local_1104;
  undefined1 local_10fc;
  undefined1 local_10f8;
  undefined1 local_10f0;
  undefined1 local_10ec;
  undefined1 local_10e4;
  undefined1 local_10e0;
  undefined1 local_10d8;
  undefined1 local_10d4;
  undefined1 local_10cc;
  undefined1 local_10c8;
  undefined1 local_10c0;
  undefined1 local_10bc;
  undefined1 local_10b4;
  undefined1 local_10b0;
  undefined1 local_10a8;
  undefined1 local_10a4;
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
  undefined1 local_1058;
  undefined1 local_1054;
  undefined1 local_1050;
  undefined1 local_104c;
  undefined1 local_1048;
  undefined1 local_1044;
  undefined1 local_1040;
  undefined1 local_103c;
  undefined8 local_1038;
  undefined8 uStack_1030;
  undefined8 local_1028;
  undefined8 uStack_1020;
  undefined8 uStack_1018;
  undefined8 uStack_1010;
  undefined2 local_1008;
  undefined8 local_1004;
  undefined1 local_ffc;
  undefined8 local_ff8;
  undefined8 local_ff0;
  undefined8 uStack_fe8;
  undefined1 local_fe0;
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
  undefined8 uStack_f48;
  undefined8 uStack_f40;
  undefined8 local_f38;
  undefined8 uStack_f30;
  undefined8 local_f28;
  undefined8 uStack_f20;
  undefined8 local_f18;
  undefined8 uStack_f10;
  undefined8 local_f08;
  undefined8 uStack_f00;
  undefined8 local_ef8;
  undefined8 uStack_ef0;
  undefined8 local_ee8;
  undefined6 uStack_ee0;
  undefined2 uStack_eda;
  undefined6 uStack_ed8;
  undefined1 local_ed0;
  undefined1 local_ecc;
  undefined1 local_ec8;
  undefined8 local_ec4;
  undefined8 uStack_ebc;
  undefined1 local_eb4;
  undefined8 local_eb0;
  undefined2 local_ea8;
  undefined1 local_ea6;
  undefined4 local_ea4;
  undefined1 local_ea0;
  undefined1 local_e40;
  undefined1 local_e38;
  undefined1 local_dd8;
  undefined4 local_dd0;
  undefined2 local_dcc;
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
  undefined8 local_da0;
  undefined8 uStack_d98;
  undefined8 local_d90;
  undefined1 local_d88;
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
  undefined2 local_d20;
  undefined8 local_d18;
  undefined8 uStack_d10;
  undefined8 local_d08;
  undefined4 local_d00;
  undefined8 local_cf8;
  undefined8 local_cf0;
  undefined8 local_ce8;
  undefined1 local_ce0;
  undefined8 local_cd8;
  undefined8 uStack_cd0;
  undefined8 local_cc8;
  undefined8 local_cc0;
  undefined4 local_cb8;
  undefined8 local_cb0;
  undefined8 uStack_ca8;
  undefined8 local_ca0;
  undefined8 uStack_c98;
  undefined8 local_c90;
  undefined8 uStack_c88;
  undefined4 local_c80;
  undefined8 local_c78;
  undefined8 uStack_c70;
  undefined8 local_c68;
  undefined8 uStack_c60;
  undefined8 local_c58;
  undefined8 uStack_c50;
  undefined4 local_c48;
  undefined8 local_c40;
  undefined8 local_c38;
  undefined8 local_c30;
  undefined1 local_c28;
  undefined8 local_c20;
  undefined8 local_c18;
  undefined8 local_c10;
  undefined8 local_c08;
  undefined4 local_c00;
  undefined8 local_bf8;
  undefined8 uStack_bf0;
  undefined8 local_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined4 local_bc8;
  undefined8 local_bc0;
  undefined8 uStack_bb8;
  undefined8 local_bb0;
  undefined8 uStack_ba8;
  undefined8 local_ba0;
  undefined8 uStack_b98;
  undefined8 local_b90;
  undefined8 uStack_b88;
  undefined8 local_b80;
  undefined1 local_b78;
  undefined8 local_b70;
  undefined8 uStack_b68;
  undefined8 local_b60;
  undefined8 uStack_b58;
  undefined8 local_b50;
  undefined8 uStack_b48;
  undefined8 local_b40;
  undefined8 uStack_b38;
  undefined8 local_b30;
  undefined8 uStack_b28;
  undefined8 local_b20;
  undefined4 local_b18 [2];
  undefined8 local_b10;
  undefined8 uStack_b08;
  undefined8 local_b00;
  undefined8 local_af8;
  undefined8 uStack_af0;
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
  undefined8 local_88;
  void *pvStack_80;
  void *local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this = (ComponentDescriptor *)operator_new(0x88);
  pvStack_14b8 = (void *)0x0;
  local_14c0 = 0;
  uStack_14a8 = 0;
  local_14b0 = (void *)0x0;
  pvStack_1498 = (void *)0x0;
  local_14a0 = (void *)0x0;
  uStack_1488 = 0;
  uStack_1490 = 0;
  pvStack_14c8 = (void *)0x0;
  local_14d0 = (void *)0x0;
                    /* try { // try from 00190f2c to 00190f37 has its CatchHandler @ 0019165c */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_14d0);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_001ea900;
  local_f0 = 0;
  local_e8 = 0;
  local_e0[0] = 0;
  local_d0 = 0;
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
                    /* try { // try from 00190fa8 to 00190fbb has its CatchHandler @ 0019168c */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_14e0[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_14d8 = &local_1b0;
  facebook::react::RawProps::parse((RawPropsParser *)&local_f8);
  memset(local_1460,0,0x948);
  local_b18[0] = 5;
  local_b00 = 0;
  local_1480 = PTR_construction_vtable_001f0e70 + 0x20;
  local_1460[0] = 5;
  uStack_1468 = 0;
  local_1470 = 0;
  uStack_1478 = 0;
  local_af8 = 0;
  uStack_af0 = 0x3f800000;
  uStack_b08 = 0;
  local_b10 = 0;
  uStack_1450 = 0;
  local_1458 = 0;
  uStack_1440 = 0;
  local_1448 = 0;
  local_1438 = 0x3f800000;
  folly::dynamic::destroy();
  local_142c = 0;
  local_13d1 = 0;
  uStack_ef0 = _UNK_00142624;
  local_ef8 = _DAT_0014261c;
  local_142b = DAT_001423b8;
  uStack_fe8 = _UNK_001423f8;
  local_ff0 = _DAT_001423f0;
  uStack_f00 = _UNK_00142614;
  local_f08 = _DAT_0014260c;
  local_1314 = 0;
  uStack_f10 = _UNK_00142604;
  local_f18 = _DAT_001425fc;
  uStack_f20 = _UNK_001425f4;
  local_f28 = _DAT_001425ec;
  uStack_ed8 = 0;
  local_130c = 0;
  uStack_1340 = 0;
  local_1348 = 0;
  uStack_132c = 0;
  uStack_1350 = 0;
  local_1358 = 0;
  uStack_1190 = 0;
  local_1198 = 0;
  local_1430 = 0x10410710;
  local_117b = 0;
  local_13d5 = 0x40004;
  local_1176 = 0x23;
  uStack_1334 = 0;
  uStack_1330 = 0;
  uStack_133c = 0;
  uStack_1338 = 0;
  uStack_1320 = 0;
  local_1328 = 0;
  local_113c = 0x3f800000;
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
  local_12b8 = 0x7fc00000;
  local_12b0 = 0x7fc00000;
  local_12a8 = 0x7fc00000;
  local_12a0 = 0x7fc00000;
  uStack_1020 = 0;
  local_1028 = 0;
  uStack_1010 = 0;
  uStack_1018 = 0;
  uStack_1030 = 0;
  local_1038 = 0;
  uStack_123f = 0;
  uStack_1240 = 0;
  local_1004 = 0;
  uStack_122c = 0;
  local_1234 = 0;
  uStack_121c = 0;
  uStack_1224 = 0;
  uStack_120c = 0;
  local_1214 = 0;
  uStack_11fc = 0;
  uStack_1204 = 0;
  uStack_11ec = 0;
  local_11f4 = 0;
  uStack_11dc = 0;
  uStack_11e4 = 0;
  local_11d7 = 0;
  uStack_11d4 = 0;
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
  uStack_f40 = 0;
  uStack_f48 = 0;
  uStack_f30 = 0;
  local_f38 = 0;
  uStack_ee0 = 0;
  uStack_eda = 0;
  local_ee8 = 0;
  uStack_13c7 = 0;
  uStack_141b = 0;
  local_1423 = 0;
  uStack_140b = 0;
  local_1413 = 0;
  uStack_13fb = 0;
  local_1403 = 0;
  uStack_13eb = 0;
  local_13f3 = 0;
  uStack_13dd = 0;
  uStack_13e5 = 0;
  uStack_13e3 = 0;
  local_13c9 = 0;
  uStack_13c8 = 0;
  uStack_13b8 = 0;
  uStack_13c0 = 0;
  local_13a8 = 0;
  uStack_13b0 = 0;
  local_1398 = 0;
  uStack_13a0 = 0;
  local_1388 = 0;
  uStack_1390 = 0;
  local_1378 = 0;
  uStack_1380 = 0;
  uStack_1368 = 0;
  uStack_1370 = 0;
  local_1360 = 0;
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
  local_12b4 = 0;
  local_12ac = 0;
  local_12a4 = 0;
  local_129c = 0;
  local_1298 = 0;
  local_1294 = 0;
  local_1288 = 0;
  local_11cc = 0;
  local_11c8 = 0;
  local_11c4 = 0;
  local_11c0 = 0;
  local_11bc = 0;
  local_11b8 = 0;
  local_11a0 = 0;
  uStack_1278 = 0;
  local_1280 = 0;
  uStack_1268 = 0;
  uStack_1270 = 0;
  uStack_1258 = 0;
  local_1260 = 0;
  uStack_1248 = 0;
  local_1247 = 0;
  uStack_1250 = 0;
  local_1188 = 0;
  local_1180 = 0;
  local_117c = 1;
  local_1177 = 0;
  uStack_1168 = 0;
  local_1170 = 0;
  uStack_1158 = 0;
  uStack_1160 = 0;
  uStack_1148 = 0;
  uStack_1141 = 0;
  local_1150 = 0;
  local_1134 = 0;
  local_112c = 0;
  local_1128 = 0;
  local_1120 = 0;
  local_111c = 0;
  local_1114 = 0;
  local_1110 = 0;
  local_1108 = 0;
  local_1104 = 0;
  local_10fc = 0;
  local_10f8 = 0;
  local_10f0 = 0;
  local_10ec = 0;
  local_10e4 = 0;
  local_10e0 = 0;
  local_10d8 = 0;
  local_10d4 = 0;
  local_10cc = 0;
  local_10c8 = 0;
  local_10c0 = 0;
  local_10bc = 0;
  local_10b4 = 0;
  local_10b0 = 0;
  local_10a8 = 0;
  local_10a4 = 0;
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
  local_1058 = 0;
  local_1054 = 0;
  local_1050 = 0;
  local_104c = 0;
  local_1048 = 0;
  local_1044 = 0;
  local_1040 = 0;
  local_103c = 0;
  local_ff8 = 0;
  local_1008 = 0;
  local_ffc = 0;
  local_fe0 = 0;
  local_ed0 = 0;
  local_ecc = 0;
  local_ec8 = 0;
  local_eb0 = 0;
  uStack_ebc = 0;
  local_ec4 = 0;
  local_eb4 = 0;
  local_ea8 = 0x101;
  local_ea6 = 0;
  local_ea4 = 0;
  local_ea0 = 0;
  local_e40 = 0;
  local_e38 = 0;
  local_dd8 = 0;
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
  local_d20 = 0x101;
  uStack_cd0 = 0;
  local_cd8 = 0;
  local_1480 = PTR_vtable_001f0ce0 + 0x20;
  uStack_c50 = 0;
  local_c58 = 0;
  uStack_d10 = 0;
  local_d18 = 0;
  uStack_c60 = 0;
  local_c68 = 0;
  uStack_c70 = 0;
  local_c78 = 0;
  local_dcc = 0;
  local_dd0 = 0;
  local_d90 = 0;
  uStack_d98 = 0;
  local_da0 = 0;
  local_d88 = 0;
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
  local_cc8 = 0;
  local_d08 = 0;
  local_d00 = 0;
  local_cf0 = 0;
  local_cf8 = 0;
  local_ce0 = 0;
  local_ce8 = 0;
  local_cc0 = DAT_001423a8;
  local_cb8 = 0;
  local_c10 = 0;
  local_c20 = 0;
  local_c18 = 0;
  local_c80 = 0;
  uStack_c88 = 0;
  local_c90 = 0;
  uStack_c98 = 0;
  local_ca0 = 0;
  uStack_ca8 = 0;
  local_cb0 = 0;
  local_c48 = 0;
  local_c30 = 0;
  local_c40 = 0;
  local_c38 = 0;
  local_c28 = 0;
  local_c08 = DAT_001423a8;
  local_c00 = 0;
  uStack_be0 = 0;
  local_be8 = 0;
  uStack_bd0 = 0;
  uStack_bd8 = 0;
  uStack_bf0 = 0;
  local_bf8 = 0;
  local_bc8 = 0;
  local_b80 = 0;
  uStack_b88 = 0;
  local_b90 = 0;
  uStack_b98 = 0;
  local_ba0 = 0;
  uStack_ba8 = 0;
  local_bb0 = 0;
  uStack_bb8 = 0;
  local_bc0 = 0;
  local_b78 = 1;
  local_b20 = 0;
  uStack_b28 = 0;
  local_b30 = 0;
  uStack_b38 = 0;
  local_b40 = 0;
  uStack_b48 = 0;
  local_b50 = 0;
  uStack_b58 = 0;
  local_b60 = 0;
  uStack_b68 = 0;
  local_b70 = 0;
                    /* try { // try from 0019148c to 0019149f has its CatchHandler @ 0019168c */
  facebook::react::RNSTabsScreenAndroidProps::RNSTabsScreenAndroidProps
            ((RNSTabsScreenAndroidProps *)local_b18,(PropsParserContext *)local_14e0,
             (RNSTabsScreenAndroidProps *)&local_1480,(RawProps *)&local_f8);
  puVar5 = PTR_PTR_001f0ce8;
  FUN_001923f0(local_b18,PTR_PTR_001f0ce8);
  FUN_001923f0(&local_1480,puVar5);
  facebook::react::RawPropsParser::postPrepare();
  pvVar3 = local_120;
  puVar4 = (undefined8 *)local_110;
  while (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar4[6];
    pvVar8 = (void *)*puVar4;
    local_120 = pvVar3;
    if ((plVar7 == (long *)0x0) || (lVar6 = FUN_001735f0(0xffffffffffffffff,plVar7 + 1), lVar6 != 0)
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
                    /* try { // try from 001915b4 to 001915bf has its CatchHandler @ 00191690 */
        (*(code *)(&PTR_FUN_001e82f8)[*(uint *)((long)pvVar3 + -8)])
                  (&local_1480,(void *)((long)pvVar3 + -0x38));
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
  folly::dynamic::destroy();
  facebook::jsi::Value::~Value((Value *)local_e0);
  if (local_14a0 != (void *)0x0) {
    pvStack_1498 = local_14a0;
    operator_delete(local_14a0);
  }
  if (pvStack_14b8 != (void *)0x0) {
    local_14b0 = pvStack_14b8;
    operator_delete(pvStack_14b8);
  }
  if (local_14d0 != (void *)0x0) {
    pvStack_14c8 = local_14d0;
    operator_delete(local_14d0);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00191694  FUN_00191694 =====

void FUN_00191694(void *param_1)

{
  FUN_0019330c();
  operator_delete(param_1);
  return;
}


// ===== 001916b8  FUN_001916b8 =====

undefined * FUN_001916b8(void)

{
  return PTR_RNSTabsScreenAndroidComponentName_001f0cd8;
}


// ===== 001916c4  FUN_001916c4 =====

undefined * FUN_001916c4(void)

{
  return PTR_RNSTabsScreenAndroidComponentName_001f0cd8;
}


// ===== 001916d0  FUN_001916d0 =====

undefined8 FUN_001916d0(void)

{
  return 0x61;
}


// ===== 001916d8  FUN_001916d8 =====

void FUN_001916d8(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  *puVar6 = &PTR_FUN_001ea990;
                    /* try { // try from 00191744 to 00191753 has its CatchHandler @ 0019182c */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_001ea9e0;
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
                    /* try { // try from 001917e0 to 001917eb has its CatchHandler @ 0019181c */
  (**(code **)(lVar8 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0019185c  FUN_0019185c =====

void FUN_0019185c(undefined8 *param_1,long *param_2,shared_ptr *param_3,ShadowNodeFragment *param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  YogaLayoutableShadowNode *local_78;
  long *local_70;
  YogaLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar5 = (long *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_001ea990;
                    /* try { // try from 001918b4 to 001918c3 has its CatchHandler @ 00191a04 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            (pYVar1,(ShadowNode *)param_3,param_4);
  lVar6 = plVar5[4];
  plVar5[3] = (long)&PTR_FUN_001ea9e0;
  uVar3 = *(uint *)((long)plVar5 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar6 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)plVar5 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
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
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar6 + 0x6b0) != '\0' || *(char *)(lVar6 + 0x6b1) != '\0') ||
             *(char *)(lVar6 + 0x1e8) != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar5;
                    /* try { // try from 00191948 to 00191957 has its CatchHandler @ 00191a1c */
  facebook::react::YogaLayoutableShadowNode::completeClone
            ((ShadowNode *)pYVar1,(ShadowNodeFragment *)param_3);
  local_78 = pYVar1;
  local_70 = plVar5;
  FUN_00174090(1,plVar5 + 1);
                    /* try { // try from 00191968 to 00191977 has its CatchHandler @ 001919f4 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar5 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar6 = FUN_001735f0(0xffffffffffffffff,local_70 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 001919b4 to 001919bf has its CatchHandler @ 00191a1c */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00191a44  FUN_00191a44 =====

void FUN_00191a44(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00191a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 00191a58  FUN_00191a58 =====

void FUN_00191a58(undefined8 *param_1,ulong param_2,PropsParserContext *param_3,long *param_4,
                 RawPropsParser *param_5)

{
  RNSTabsScreenAndroidProps *this;
  uint uVar1;
  long lVar2;
  bool bVar3;
  RawValue *pRVar4;
  long *plVar5;
  RawValue *pRVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  char *__s2;
  dynamic *pdVar10;
  long lVar11;
  RNSTabsScreenAndroidProps *pRVar12;
  undefined1 uStack_d1;
  dynamic local_d0 [32];
  dynamic *local_b0;
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar8 = facebook::react::RawProps::isEmpty(), (uVar8 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSTabsScreenAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSTabsScreenAndroidPropsENS0_32RNSTabsScreenAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b78
         & 1) == 0) &&
       (param_2 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSTabsScreenAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSTabsScreenAndroidPropsENS0_32RNSTabsScreenAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b78
                                     ), (int)param_2 != 0)) {
                    /* try { // try from 00191e8c to 00191e8f has its CatchHandler @ 00191ebc */
      FUN_00192750();
      __cxa_atexit(FUN_0019290c,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSTabsScreenAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSTabsScreenAndroidPropsENS0_32RNSTabsScreenAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b70
                   ,&PTR_LOOP_001e77b0);
      param_2 = __cxa_guard_release(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSTabsScreenAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSTabsScreenAndroidPropsENS0_32RNSTabsScreenAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b78
                                   );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSTabsScreenAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSTabsScreenAndroidPropsENS0_32RNSTabsScreenAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b70
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSTabsScreenAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSTabsScreenAndroidPropsENS0_32RNSTabsScreenAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b70
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      param_2 = FUN_00174090(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::parse(param_5);
    pRVar12 = (RNSTabsScreenAndroidProps *)*param_4;
    if (pRVar12 == (RNSTabsScreenAndroidProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSTabsScreenAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSTabsScreenAndroidPropsENS0_32RNSTabsScreenAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b78
           & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSTabsScreenAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSTabsScreenAndroidPropsENS0_32RNSTabsScreenAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b78
                                     ), iVar7 != 0)) {
                    /* try { // try from 00191e0c to 00191e0f has its CatchHandler @ 00191ed4 */
        FUN_00192750();
        __cxa_atexit(FUN_0019290c,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSTabsScreenAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSTabsScreenAndroidPropsENS0_32RNSTabsScreenAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b70
                     ,&PTR_LOOP_001e77b0);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSTabsScreenAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSTabsScreenAndroidPropsENS0_32RNSTabsScreenAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b78
                           );
      }
      pRVar12 = *(RNSTabsScreenAndroidProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSTabsScreenAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSTabsScreenAndroidPropsENS0_32RNSTabsScreenAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b70
      ;
    }
    plVar9 = (long *)operator_new(0x980);
    this = (RNSTabsScreenAndroidProps *)(plVar9 + 3);
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_FUN_001eaaf8;
                    /* try { // try from 00191b38 to 00191b4b has its CatchHandler @ 00191f48 */
    facebook::react::RNSTabsScreenAndroidProps::RNSTabsScreenAndroidProps
              (this,param_3,pRVar12,(RawProps *)param_5);
                    /* try { // try from 00191b50 to 00191b63 has its CatchHandler @ 00191f60 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid();
    if ((((uVar8 & 1) == 0) ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid
                           (), (uVar8 & 1) == 0)) ||
       (uVar8 = facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid(),
       (uVar8 & 1) == 0)) {
LAB_00191b8c:
      FUN_00174090(1,plVar9 + 1);
      if ((RawProps *)*param_4 == (RawProps *)0x0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSTabsScreenAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSTabsScreenAndroidPropsENS0_32RNSTabsScreenAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b78
             & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSTabsScreenAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSTabsScreenAndroidPropsENS0_32RNSTabsScreenAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b78
                                       ), iVar7 != 0)) {
                    /* try { // try from 00191e4c to 00191e4f has its CatchHandler @ 00191ec0 */
          FUN_00192750();
          __cxa_atexit(FUN_0019290c,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSTabsScreenAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSTabsScreenAndroidPropsENS0_32RNSTabsScreenAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b70
                       ,&PTR_LOOP_001e77b0);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSTabsScreenAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSTabsScreenAndroidPropsENS0_32RNSTabsScreenAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b78
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00191bf4 to 00191c07 has its CatchHandler @ 00191eec */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,
                   *(RawProps **)
                    PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSTabsScreenAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSTabsScreenAndroidPropsENS0_32RNSTabsScreenAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b70
                   ,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_00191c40:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_00191c40;
        }
        if (plVar9 != (long *)0x0) goto LAB_00191c54;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00191ba8 to 00191bbb has its CatchHandler @ 00191f14 */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,(RawProps *)*param_4,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_00191c54;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_00191c54:
        lVar11 = FUN_001735f0(0xffffffffffffffff,plVar9 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 00191b70 to 00191b7b has its CatchHandler @ 00191ee8 */
      __s2 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar7 = strcmp(PTR_RNSTabsScreenAndroidComponentName_001f0cd8,__s2);
      if (iVar7 != 0) goto LAB_00191b8c;
      bVar3 = false;
    }
                    /* try { // try from 00191c80 to 00191c83 has its CatchHandler @ 00191f60 */
    param_2 = facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter();
    if ((param_2 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 00191c90 to 00191cab has its CatchHandler @ 00191f10 */
        param_2 = folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar9 + 7));
      }
      else {
        param_2 = facebook::react::RawProps::operator_cast_to_dynamic((RawProps *)param_5);
      }
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00191dec to 00191dfb has its CatchHandler @ 00191f08 */
                    /* WARNING: Subroutine does not return */
          FUN_00172ea4(*(undefined8 *)PTR_name_001f09c8);
        }
        goto LAB_00191fac;
      }
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00191dcc to 00191ddb has its CatchHandler @ 00191f6c */
                    /* WARNING: Subroutine does not return */
            FUN_00172ea4(*(undefined8 *)PTR_name_001f0bb0);
          }
          goto LAB_00191fac;
        }
        uVar1 = 0x811c9dc5;
        uVar8 = (ulong)(*(byte *)(plVar5 + 3) >> 1);
        pRVar6 = (RawValue *)((long)plVar5 + 0x19);
        pRVar4 = (RawValue *)((long)plVar5 + 0x19);
        if ((*(byte *)(plVar5 + 3) & 1) != 0) {
          uVar8 = plVar5[4];
          pRVar6 = (RawValue *)plVar5[5];
          pRVar4 = (RawValue *)plVar5[5];
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          uVar1 = (uVar1 ^ (int)(char)*pRVar6) * 0x1000193;
          pRVar6 = pRVar6 + 1;
        }
                    /* try { // try from 00191d2c to 00191d37 has its CatchHandler @ 00191f74 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 00191d3c to 00191d53 has its CatchHandler @ 00191f78 */
        param_2 = facebook::react::HostPlatformViewProps::setProp
                            ((PropsParserContext *)this,(uint)param_3,(char *)(ulong)uVar1,pRVar4);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 00191d64 to 00191d6f has its CatchHandler @ 00191f68 */
          param_2 = (*(code *)(&PTR_FUN_001e82f8)[local_a0])(&uStack_d1,local_d0);
        }
      }
      param_2 = folly::dynamic::destroy();
    }
    param_1[1] = plVar9;
    *param_1 = this;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_00191fac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}


// ===== 00191fb0  FUN_00191fb0 =====

void FUN_00191fb0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00191fb8  FUN_00191fb8 =====

void FUN_00191fb8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00191fc0  FUN_00191fc0 =====

void FUN_00191fc0(undefined8 *param_1,long param_2,long param_3)

{
  EventEmitter *pEVar1;
  ShadowNodeFamily *pSVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ShadowNodeFamily *local_b0;
  undefined8 *local_a8;
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
  FUN_0017dbe4(&local_a0,param_3 + 8,param_3 + 4);
                    /* try { // try from 00192004 to 0019200b has its CatchHandler @ 001922e4 */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_001eab48;
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
    FUN_00174090(1,local_78 + 0x10);
  }
                    /* try { // try from 00192048 to 00192057 has its CatchHandler @ 001922b8 */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_001e8610;
                    /* try { // try from 00192064 to 0019206b has its CatchHandler @ 001922a8 */
  puVar6 = (undefined8 *)operator_new(0x58);
  *puVar6 = &PTR_FUN_001e8630;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[4] = 0;
  puVar6[3] = 0;
  plVar5[0xb] = (long)(puVar6 + 3);
  plVar5[0xc] = (long)puVar6;
  puVar6[6] = 0;
  puVar6[5] = 0;
  puVar6[8] = 0;
  puVar6[7] = 0;
  *(undefined8 *)((long)puVar6 + 0x4c) = 0;
  *(undefined8 *)((long)puVar6 + 0x44) = 0;
  plVar5[3] = (long)&PTR_FUN_001eab98;
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = plStack_98;
  local_90 = pEVar1;
  local_88 = plVar5;
  if ((plStack_98 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_98 + 1), lVar7 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 00192118 to 0019211f has its CatchHandler @ 00192298 */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  *puVar6 = &PTR_FUN_001e86f0;
  pSVar2 = (ShadowNodeFamily *)(puVar6 + 4);
  puVar6[1] = 0;
  puVar6[2] = 0;
  local_70 = local_90;
  plStack_68 = local_88;
  if (local_88 != (long *)0x0) {
    FUN_00174090(1,local_88 + 1);
  }
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  if (local_78 != 0) {
    FUN_00174090(1,local_78 + 0x10);
  }
                    /* try { // try from 00192168 to 0019217f has its CatchHandler @ 00192268 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar2,param_3,&local_70,&local_80,param_2);
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pEVar1 = local_90;
  *param_1 = pSVar2;
  param_1[1] = puVar6;
  local_b0 = pSVar2;
  local_a8 = puVar6;
  FUN_00174090(1,puVar6 + 2);
                    /* try { // try from 001921d4 to 001921df has its CatchHandler @ 00192248 */
  facebook::react::EventEmitter::setShadowNodeFamily(pEVar1,&local_b0);
  if (local_a8 != (undefined8 *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019230c  FUN_0019230c =====

void FUN_0019230c(void)

{
  return;
}


// ===== 00192310  FUN_00192310 =====

void FUN_00192310(long param_1)

{
  byte bVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar3 = *(void **)(param_1 + 0x88);
  if (pvVar3 != (void *)0x0) {
    pvVar4 = *(void **)(param_1 + 0x90);
    pvVar2 = pvVar3;
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
      pvVar2 = *(void **)(param_1 + 0x88);
    }
    *(void **)(param_1 + 0x90) = pvVar3;
    operator_delete(pvVar2);
  }
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x50);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x78));
    bVar1 = *(byte *)(param_1 + 0x50);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x28);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x60));
    bVar1 = *(byte *)(param_1 + 0x28);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 8);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x38));
    bVar1 = *(byte *)(param_1 + 8);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 001923f0  FUN_001923f0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_001923f0(long param_1,long param_2)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x948) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x930);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x958));
    bVar1 = *(byte *)(param_1 + 0x930);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x910);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x940));
    bVar1 = *(byte *)(param_1 + 0x910);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x920));
  }
  FUN_00192310(param_1 + 0x838);
  if ((*(byte *)(param_1 + 0x820) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x830));
  }
  FUN_00192310(param_1 + 0x780);
  if ((*(byte *)(param_1 + 0x768) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x748);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x778));
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
    bVar1 = *(byte *)(param_1 + 0x700);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x728));
    bVar1 = *(byte *)(param_1 + 0x700);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x6e0);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x710));
    bVar1 = *(byte *)(param_1 + 0x6e0);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x6f0));
  }
  FUN_0017d0e8(param_1,param_2 + 8);
  return;
}


// ===== 00192508  FUN_00192508 =====

void FUN_00192508(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00192558  FUN_00192558 =====

void FUN_00192558(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001ea990;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00192568  FUN_00192568 =====

void FUN_00192568(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001ea990;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00192598  FUN_00192598 =====

void FUN_00192598(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001925a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 001925a4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 001925a8  FUN_001925a8 =====

void FUN_001925a8(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_001f09e8 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
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
  FUN_00173ffc(param_1 + 0x23);
  FUN_00173f00(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00192668  FUN_00192668 =====

void FUN_00192668(long param_1)

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


// ===== 001926d0  FUN_001926d0 =====

bool FUN_001926d0(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 001926e8  FUN_001926e8 =====

bool FUN_001926e8(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 00192700  FUN_00192700 =====

void FUN_00192700(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00192750  FUN_00192750 =====

void FUN_00192750(void)

{
  undefined8 *__s;
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x980);
  __s = puVar3 + 3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_001eaaa8;
  memset(__s,0,0x968);
                    /* try { // try from 0019278c to 0019279f has its CatchHandler @ 001928f0 */
  FUN_0017cb10(__s,PTR_PTR_001f0ce8 + 0x10);
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
  *(undefined4 *)(puVar3 + 0xd9) = 0;
  puVar2 = PTR_vtable_001f0ce0;
  *(undefined2 *)((long)puVar3 + 0x6cc) = 0;
  *(undefined1 *)(puVar3 + 0xe2) = 0;
  puVar3[0xe1] = 0;
  puVar3[3] = puVar2 + 0x20;
  *(undefined2 *)(puVar3 + 0xef) = 0x101;
  uVar1 = DAT_001423a8;
  puVar3[0xe0] = 0;
  puVar3[0xdf] = 0;
  puVar3[0xe4] = 0;
  puVar3[0xe3] = 0;
  puVar3[0xe6] = 0;
  puVar3[0xe5] = 0;
  puVar3[0xe8] = 0;
  puVar3[0xe7] = 0;
  puVar3[0xea] = 0;
  puVar3[0xe9] = 0;
  puVar3[0xec] = 0;
  puVar3[0xeb] = 0;
  puVar3[0xee] = 0;
  puVar3[0xed] = 0;
  puVar3[0xfa] = 0;
  puVar3[0xf9] = 0;
  puVar3[0xf8] = 0;
  puVar3[0xf2] = 0;
  *(undefined4 *)(puVar3 + 0xf3) = 0;
  puVar3[0xf1] = 0;
  puVar3[0xf0] = 0;
  puVar3[0xf6] = 0;
  puVar3[0xf5] = 0;
  puVar3[0xf4] = 0;
  *(undefined1 *)(puVar3 + 0xf7) = 0;
  puVar3[0xfb] = uVar1;
  *(undefined4 *)(puVar3 + 0xfc) = 0;
  puVar3[0x111] = 0;
  puVar3[0x110] = 0;
  puVar3[0x10f] = 0;
  puVar3[0xfe] = 0;
  puVar3[0xfd] = 0;
  puVar3[0x100] = 0;
  puVar3[0xff] = 0;
  puVar3[0x102] = 0;
  puVar3[0x101] = 0;
  *(undefined4 *)(puVar3 + 0x103) = 0;
  *(undefined4 *)(puVar3 + 0x10a) = 0;
  puVar3[0x109] = 0;
  puVar3[0x108] = 0;
  puVar3[0x107] = 0;
  puVar3[0x106] = 0;
  puVar3[0x105] = 0;
  puVar3[0x104] = 0;
  *(undefined1 *)(puVar3 + 0x10e) = 0;
  puVar3[0x10c] = 0;
  puVar3[0x10b] = 0;
  puVar3[0x10d] = 0;
  puVar3[0x112] = uVar1;
  *(undefined4 *)(puVar3 + 0x113) = 0;
  puVar3[0x115] = 0;
  puVar3[0x114] = 0;
  puVar3[0x117] = 0;
  puVar3[0x116] = 0;
  puVar3[0x119] = 0;
  puVar3[0x118] = 0;
  *(undefined4 *)(puVar3 + 0x11a) = 0;
  puVar3[0x123] = 0;
  puVar3[0x122] = 0;
  puVar3[0x121] = 0;
  puVar3[0x120] = 0;
  puVar3[0x11f] = 0;
  puVar3[0x11e] = 0;
  puVar3[0x11d] = 0;
  puVar3[0x11c] = 0;
  puVar3[0x11b] = 0;
  *(undefined1 *)(puVar3 + 0x124) = 1;
  puVar3[0x12f] = 0;
  puVar3[0x12e] = 0;
  puVar3[0x12d] = 0;
  puVar3[300] = 0;
  puVar3[299] = 0;
  puVar3[0x12a] = 0;
  puVar3[0x129] = 0;
  puVar3[0x128] = 0;
  puVar3[0x127] = 0;
  puVar2 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSTabsScreenAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSTabsScreenAndroidPropsENS0_32RNSTabsScreenAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b70
  ;
  puVar3[0x126] = 0;
  puVar3[0x125] = 0;
  *(undefined8 **)puVar2 = __s;
  *(undefined8 **)(puVar2 + 8) = puVar3;
  return;
}


// ===== 0019290c  FUN_0019290c =====

void FUN_0019290c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0019295c  FUN_0019295c =====

void FUN_0019295c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001eaaa8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0019296c  FUN_0019296c =====

void FUN_0019296c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001eaaa8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0019299c  FUN_0019299c =====

void FUN_0019299c(long param_1)

{
  FUN_001923f0(param_1 + 0x18,PTR_PTR_001f0ce8);
  return;
}


// ===== 001929ac  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 001929b0  FUN_001929b0 =====

void FUN_001929b0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001eaaf8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 001929c0  FUN_001929c0 =====

void FUN_001929c0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001eaaf8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001929f0  FUN_001929f0 =====

void FUN_001929f0(long param_1)

{
  FUN_001923f0(param_1 + 0x18,PTR_PTR_001f0ce8);
  return;
}


// ===== 00192a00  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 00192a04  FUN_00192a04 =====

void FUN_00192a04(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00192a54  FUN_00192a54 =====

void FUN_00192a54(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001eab48;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00192a64  FUN_00192a64 =====

void FUN_00192a64(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001eab48;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00192a94  FUN_00192a94 =====

void FUN_00192a94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00192a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00192aa0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 00192aa4  FUN_00192aa4 =====

void FUN_00192aa4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_001e8610;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_001e8680;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 00192b54  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_29RNSTabsScreenIOSComponentNameEEEENS0_21RNSTabsScreenIOSPropsENS0_28RNSTabsScreenIOSEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_29RNSTabsScreenIOSComponentNameEEEENS0_21RNSTabsScreenIOSPropsENS0_28RNSTabsScreenIOSEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1,ComponentDescriptorParameters *param_2)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ComponentDescriptor *this;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  undefined4 local_14b0 [2];
  undefined8 *local_14a8;
  void *local_14a0;
  void *pvStack_1498;
  undefined8 local_1490;
  void *pvStack_1488;
  void *local_1480;
  undefined8 uStack_1478;
  void *local_1470;
  void *pvStack_1468;
  undefined8 uStack_1460;
  undefined8 uStack_1458;
  undefined *local_1450;
  undefined8 uStack_1448;
  undefined8 local_1440;
  undefined8 uStack_1438;
  undefined4 local_1430 [2];
  undefined8 local_1428;
  undefined8 uStack_1420;
  undefined8 local_1418;
  undefined8 uStack_1410;
  undefined4 local_1408;
  undefined4 local_1400;
  undefined1 local_13fc;
  undefined8 local_13fb;
  undefined8 local_13f3;
  undefined8 uStack_13eb;
  undefined8 local_13e3;
  undefined8 uStack_13db;
  undefined8 local_13d3;
  undefined8 uStack_13cb;
  undefined8 local_13c3;
  undefined6 uStack_13bb;
  undefined2 uStack_13b5;
  undefined6 uStack_13b3;
  undefined8 uStack_13ad;
  undefined4 local_13a5;
  undefined8 local_13a1;
  undefined1 local_1399;
  undefined1 uStack_1398;
  undefined7 uStack_1397;
  undefined8 uStack_1390;
  undefined8 uStack_1388;
  undefined8 uStack_1380;
  undefined8 local_1378;
  undefined8 uStack_1370;
  undefined8 local_1368;
  undefined8 uStack_1360;
  undefined8 local_1358;
  undefined8 uStack_1350;
  undefined8 local_1348;
  undefined8 uStack_1340;
  undefined8 uStack_1338;
  undefined8 local_1330;
  undefined8 local_1328;
  undefined8 uStack_1320;
  undefined8 local_1318;
  undefined4 uStack_1310;
  undefined4 uStack_130c;
  undefined4 uStack_1308;
  undefined4 uStack_1304;
  undefined4 uStack_1300;
  undefined4 uStack_12fc;
  undefined8 local_12f8;
  undefined8 uStack_12f0;
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
  undefined4 local_12b8;
  undefined1 local_12b4;
  undefined4 local_12b0;
  undefined1 local_12ac;
  undefined4 local_12a8;
  undefined1 local_12a4;
  undefined4 local_12a0;
  undefined1 local_129c;
  undefined4 local_1298;
  undefined1 local_1294;
  undefined4 local_1290;
  undefined1 local_128c;
  undefined4 local_1288;
  undefined1 local_1284;
  undefined4 local_1280;
  undefined1 local_127c;
  undefined4 local_1278;
  undefined1 local_1274;
  undefined4 local_1270;
  undefined1 local_126c;
  undefined1 local_1268;
  undefined1 local_1264;
  undefined1 local_1258;
  undefined8 local_1250;
  undefined8 uStack_1248;
  undefined8 uStack_1240;
  undefined8 uStack_1238;
  undefined8 local_1230;
  undefined8 uStack_1228;
  undefined8 uStack_1220;
  undefined1 uStack_1218;
  undefined7 local_1217;
  undefined1 uStack_1210;
  undefined8 uStack_120f;
  undefined8 local_1204;
  undefined8 uStack_11fc;
  undefined8 uStack_11f4;
  undefined8 uStack_11ec;
  undefined8 local_11e4;
  undefined8 uStack_11dc;
  undefined8 uStack_11d4;
  undefined8 uStack_11cc;
  undefined8 local_11c4;
  undefined8 uStack_11bc;
  undefined8 uStack_11b4;
  undefined5 uStack_11ac;
  undefined3 local_11a7;
  undefined5 uStack_11a4;
  undefined1 local_119c;
  undefined1 local_1198;
  undefined1 local_1194;
  undefined1 local_1190;
  undefined1 local_118c;
  undefined1 local_1188;
  undefined1 local_1170;
  undefined8 local_1168;
  undefined8 uStack_1160;
  undefined8 local_1158;
  undefined4 local_1150;
  undefined1 local_114c;
  undefined4 local_114b;
  undefined1 local_1147;
  undefined1 local_1146;
  undefined8 local_1140;
  undefined8 uStack_1138;
  undefined8 uStack_1130;
  undefined8 uStack_1128;
  undefined8 local_1120;
  undefined7 uStack_1118;
  undefined4 uStack_1111;
  undefined8 local_110c;
  undefined1 local_1104;
  undefined1 local_10fc;
  undefined1 local_10f8;
  undefined1 local_10f0;
  undefined1 local_10ec;
  undefined1 local_10e4;
  undefined1 local_10e0;
  undefined1 local_10d8;
  undefined1 local_10d4;
  undefined1 local_10cc;
  undefined1 local_10c8;
  undefined1 local_10c0;
  undefined1 local_10bc;
  undefined1 local_10b4;
  undefined1 local_10b0;
  undefined1 local_10a8;
  undefined1 local_10a4;
  undefined1 local_109c;
  undefined1 local_1098;
  undefined1 local_1090;
  undefined1 local_108c;
  undefined1 local_1084;
  undefined1 local_1080;
  undefined1 local_1078;
  undefined1 local_1074;
  undefined1 local_106c;
  undefined1 local_1068;
  undefined1 local_1064;
  undefined1 local_1060;
  undefined1 local_105c;
  undefined1 local_1058;
  undefined1 local_1054;
  undefined1 local_1050;
  undefined1 local_104c;
  undefined1 local_1048;
  undefined1 local_1044;
  undefined1 local_1040;
  undefined1 local_103c;
  undefined1 local_1038;
  undefined1 local_1034;
  undefined1 local_1030;
  undefined1 local_102c;
  undefined1 local_1028;
  undefined1 local_1024;
  undefined1 local_1020;
  undefined1 local_101c;
  undefined1 local_1018;
  undefined1 local_1014;
  undefined1 local_1010;
  undefined1 local_100c;
  undefined8 local_1008;
  undefined8 uStack_1000;
  undefined8 local_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined2 local_fd8;
  undefined8 local_fd4;
  undefined1 local_fcc;
  undefined8 local_fc8;
  undefined8 local_fc0;
  undefined8 uStack_fb8;
  undefined1 local_fb0;
  undefined8 local_fa8;
  undefined8 uStack_fa0;
  undefined8 uStack_f98;
  undefined8 uStack_f90;
  undefined8 local_f88;
  undefined8 uStack_f80;
  undefined8 uStack_f78;
  undefined8 uStack_f70;
  undefined8 local_f68;
  undefined8 uStack_f60;
  undefined8 uStack_f58;
  undefined8 uStack_f50;
  undefined8 local_f48;
  undefined8 uStack_f40;
  undefined8 uStack_f38;
  undefined8 uStack_f30;
  undefined8 local_f28;
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
  undefined8 local_ec8;
  undefined8 uStack_ec0;
  undefined8 local_eb8;
  undefined6 uStack_eb0;
  undefined2 uStack_eaa;
  undefined6 uStack_ea8;
  undefined1 local_ea0;
  undefined1 local_e9c;
  undefined1 local_e98;
  undefined8 local_e94;
  undefined8 uStack_e8c;
  undefined1 local_e84;
  undefined8 local_e80;
  undefined2 local_e78;
  undefined1 local_e76;
  undefined4 local_e74;
  undefined1 local_e70;
  undefined1 local_e10;
  undefined1 local_e08;
  undefined1 local_da8;
  undefined4 local_da0;
  undefined2 local_d9c;
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
  undefined8 local_d70;
  undefined8 uStack_d68;
  undefined8 local_d60;
  undefined1 local_d58;
  undefined8 local_d50;
  undefined8 uStack_d48;
  undefined8 local_d40;
  undefined8 uStack_d38;
  undefined8 local_d30;
  undefined8 uStack_d28;
  undefined4 local_d20;
  undefined8 local_d18;
  undefined8 uStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 local_cf8;
  undefined8 uStack_cf0;
  undefined2 local_ce8;
  undefined1 local_ce6;
  undefined8 local_ce4;
  undefined8 local_cd8;
  undefined4 local_cb0;
  undefined8 local_ca8;
  undefined4 local_c80;
  undefined4 local_c78;
  undefined8 local_c70;
  undefined8 local_c68;
  undefined8 local_c60;
  undefined1 local_c58;
  undefined8 local_c50;
  undefined8 local_c48;
  undefined8 local_c40;
  undefined8 local_c38;
  undefined4 local_c30;
  undefined8 local_c28;
  undefined8 uStack_c20;
  undefined8 local_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined4 local_bf8;
  undefined8 local_bf0;
  undefined8 uStack_be8;
  undefined8 local_be0;
  undefined8 uStack_bd8;
  undefined8 local_bd0;
  undefined8 uStack_bc8;
  undefined4 local_bc0;
  undefined8 local_bb8;
  undefined8 local_bb0;
  undefined8 local_ba8;
  undefined1 local_ba0;
  undefined8 local_b98;
  undefined8 local_b90;
  undefined8 local_b88;
  undefined8 local_b80;
  undefined4 local_b78;
  undefined8 local_b70;
  undefined8 uStack_b68;
  undefined8 local_b60;
  undefined8 uStack_b58;
  undefined8 local_b50;
  undefined8 uStack_b48;
  undefined4 local_b40;
  undefined8 local_b38;
  undefined8 uStack_b30;
  undefined8 local_b28;
  undefined8 uStack_b20;
  undefined8 local_b18;
  undefined8 uStack_b10;
  undefined1 local_b08;
  undefined4 local_b04;
  undefined4 local_b00 [2];
  undefined8 local_af8;
  undefined8 uStack_af0;
  undefined8 local_ae8;
  undefined8 local_ae0;
  undefined8 uStack_ad8;
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
  this = (ComponentDescriptor *)operator_new(0x88);
  pvStack_1488 = (void *)0x0;
  local_1490 = 0;
  uStack_1478 = 0;
  local_1480 = (void *)0x0;
  pvStack_1468 = (void *)0x0;
  local_1470 = (void *)0x0;
  uStack_1458 = 0;
  uStack_1460 = 0;
  pvStack_1498 = (void *)0x0;
  local_14a0 = (void *)0x0;
                    /* try { // try from 00192ba8 to 00192bb3 has its CatchHandler @ 001932d4 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_14a0);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_001eabd0;
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
                    /* try { // try from 00192c20 to 00192c33 has its CatchHandler @ 00193304 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_14b0[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_14a8 = &local_1b0;
  facebook::react::RawProps::parse((RawPropsParser *)&local_f8);
  memset(local_1430,0,0x930);
  local_b00[0] = 5;
  local_ae8 = 0;
  local_1450 = PTR_construction_vtable_001f0e78 + 0x20;
  local_1430[0] = 5;
  uStack_1448 = 0;
  uStack_1438 = 0;
  local_1440 = 0;
  local_ae0 = 0;
  uStack_ad8 = 0x3f800000;
  uStack_af0 = 0;
  local_af8 = 0;
  uStack_1420 = 0;
  local_1428 = 0;
  uStack_1410 = 0;
  local_1418 = 0;
  local_1408 = 0x3f800000;
  folly::dynamic::destroy();
  local_13fc = 0;
  local_13a1 = 0;
  uStack_ec0 = _UNK_00142624;
  local_ec8 = _DAT_0014261c;
  local_13fb = DAT_001423b8;
  uStack_fb8 = _UNK_001423f8;
  local_fc0 = _DAT_001423f0;
  uStack_ed0 = _UNK_00142614;
  local_ed8 = _DAT_0014260c;
  local_12e4 = 0;
  uStack_ee0 = _UNK_00142604;
  local_ee8 = _DAT_001425fc;
  uStack_ef0 = _UNK_001425f4;
  local_ef8 = _DAT_001425ec;
  uStack_ea8 = 0;
  local_12dc = 0;
  uStack_1310 = 0;
  local_1318 = 0;
  uStack_12fc = 0;
  uStack_1320 = 0;
  local_1328 = 0;
  uStack_1160 = 0;
  local_1168 = 0;
  local_1400 = 0x10410710;
  local_114b = 0;
  local_13a5 = 0x40004;
  local_1146 = 0x23;
  uStack_1304 = 0;
  uStack_1300 = 0;
  uStack_130c = 0;
  uStack_1308 = 0;
  uStack_12f0 = 0;
  local_12f8 = 0;
  local_110c = 0x3f800000;
  local_12e8 = 0x7fc00000;
  local_12e0 = 0x7fc00000;
  local_12d8 = 0x7fc00000;
  local_12d0 = 0x7fc00000;
  local_12c8 = 0x7fc00000;
  local_12c0 = 0x7fc00000;
  local_12b8 = 0x7fc00000;
  local_12b0 = 0x7fc00000;
  local_12a8 = 0x7fc00000;
  local_12a0 = 0x7fc00000;
  local_1298 = 0x7fc00000;
  local_1290 = 0x7fc00000;
  local_1288 = 0x7fc00000;
  local_1280 = 0x7fc00000;
  local_1278 = 0x7fc00000;
  local_1270 = 0x7fc00000;
  uStack_ff0 = 0;
  local_ff8 = 0;
  uStack_fe0 = 0;
  uStack_fe8 = 0;
  uStack_1000 = 0;
  local_1008 = 0;
  uStack_120f = 0;
  uStack_1210 = 0;
  local_fd4 = 0;
  uStack_11fc = 0;
  local_1204 = 0;
  uStack_11ec = 0;
  uStack_11f4 = 0;
  uStack_11dc = 0;
  local_11e4 = 0;
  uStack_11cc = 0;
  uStack_11d4 = 0;
  uStack_11bc = 0;
  local_11c4 = 0;
  uStack_11ac = 0;
  uStack_11b4 = 0;
  local_11a7 = 0;
  uStack_11a4 = 0;
  uStack_fa0 = 0;
  local_fa8 = 0;
  uStack_f90 = 0;
  uStack_f98 = 0;
  uStack_f80 = 0;
  local_f88 = 0;
  uStack_f70 = 0;
  uStack_f78 = 0;
  uStack_f60 = 0;
  local_f68 = 0;
  uStack_f50 = 0;
  uStack_f58 = 0;
  uStack_f40 = 0;
  local_f48 = 0;
  uStack_f30 = 0;
  uStack_f38 = 0;
  uStack_f20 = 0;
  local_f28 = 0;
  uStack_f10 = 0;
  uStack_f18 = 0;
  uStack_f00 = 0;
  local_f08 = 0;
  uStack_eb0 = 0;
  uStack_eaa = 0;
  local_eb8 = 0;
  uStack_1397 = 0;
  uStack_13eb = 0;
  local_13f3 = 0;
  uStack_13db = 0;
  local_13e3 = 0;
  uStack_13cb = 0;
  local_13d3 = 0;
  uStack_13bb = 0;
  local_13c3 = 0;
  uStack_13ad = 0;
  uStack_13b5 = 0;
  uStack_13b3 = 0;
  local_1399 = 0;
  uStack_1398 = 0;
  uStack_1388 = 0;
  uStack_1390 = 0;
  local_1378 = 0;
  uStack_1380 = 0;
  local_1368 = 0;
  uStack_1370 = 0;
  local_1358 = 0;
  uStack_1360 = 0;
  local_1348 = 0;
  uStack_1350 = 0;
  uStack_1338 = 0;
  uStack_1340 = 0;
  local_1330 = 0;
  local_12d4 = 0;
  local_12cc = 0;
  local_12c4 = 0;
  local_12bc = 0;
  local_12b4 = 0;
  local_12ac = 0;
  local_12a4 = 0;
  local_129c = 0;
  local_1294 = 0;
  local_128c = 0;
  local_1284 = 0;
  local_127c = 0;
  local_1274 = 0;
  local_126c = 0;
  local_1268 = 0;
  local_1264 = 0;
  local_1258 = 0;
  local_119c = 0;
  local_1198 = 0;
  local_1194 = 0;
  local_1190 = 0;
  local_118c = 0;
  local_1188 = 0;
  local_1170 = 0;
  uStack_1248 = 0;
  local_1250 = 0;
  uStack_1238 = 0;
  uStack_1240 = 0;
  uStack_1228 = 0;
  local_1230 = 0;
  uStack_1218 = 0;
  local_1217 = 0;
  uStack_1220 = 0;
  local_1158 = 0;
  local_1150 = 0;
  local_114c = 1;
  local_1147 = 0;
  uStack_1138 = 0;
  local_1140 = 0;
  uStack_1128 = 0;
  uStack_1130 = 0;
  uStack_1118 = 0;
  uStack_1111 = 0;
  local_1120 = 0;
  local_1104 = 0;
  local_10fc = 0;
  local_10f8 = 0;
  local_10f0 = 0;
  local_10ec = 0;
  local_10e4 = 0;
  local_10e0 = 0;
  local_10d8 = 0;
  local_10d4 = 0;
  local_10cc = 0;
  local_10c8 = 0;
  local_10c0 = 0;
  local_10bc = 0;
  local_10b4 = 0;
  local_10b0 = 0;
  local_10a8 = 0;
  local_10a4 = 0;
  local_109c = 0;
  local_1098 = 0;
  local_1090 = 0;
  local_108c = 0;
  local_1084 = 0;
  local_1080 = 0;
  local_1078 = 0;
  local_1074 = 0;
  local_106c = 0;
  local_1068 = 0;
  local_1064 = 0;
  local_1060 = 0;
  local_105c = 0;
  local_1058 = 0;
  local_1054 = 0;
  local_1050 = 0;
  local_104c = 0;
  local_1048 = 0;
  local_1044 = 0;
  local_1040 = 0;
  local_103c = 0;
  local_1038 = 0;
  local_1034 = 0;
  local_1030 = 0;
  local_102c = 0;
  local_1028 = 0;
  local_1024 = 0;
  local_1020 = 0;
  local_101c = 0;
  local_1018 = 0;
  local_1014 = 0;
  local_1010 = 0;
  local_100c = 0;
  local_fc8 = 0;
  local_fd8 = 0;
  local_fcc = 0;
  local_fb0 = 0;
  local_ea0 = 0;
  local_e9c = 0;
  local_e98 = 0;
  local_e80 = 0;
  uStack_e8c = 0;
  local_e94 = 0;
  local_e84 = 0;
  local_e78 = 0x101;
  local_e76 = 0;
  local_e74 = 0;
  local_e70 = 0;
  local_e10 = 0;
  local_e08 = 0;
  local_da8 = 0;
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
  local_ce8 = 0x101;
  local_ce4 = 0;
  local_c80 = 2;
  local_1450 = PTR_vtable_001f0cf8 + 0x20;
  uStack_c10 = 0;
  local_c18 = 0;
  uStack_c00 = 0;
  uStack_c08 = 0;
  uStack_c20 = 0;
  local_c28 = 0;
  local_d9c = 0;
  local_da0 = 0;
  local_d60 = 0;
  uStack_d68 = 0;
  local_d70 = 0;
  local_d58 = 0;
  uStack_d48 = 0;
  local_d50 = 0;
  uStack_d38 = 0;
  local_d40 = 0;
  uStack_d28 = 0;
  local_d30 = 0;
  local_d20 = 0;
  uStack_d10 = 0;
  local_d18 = 0;
  uStack_d00 = 0;
  uStack_d08 = 0;
  uStack_cf0 = 0;
  local_cf8 = 0;
  local_ce6 = 1;
  local_cd8 = 0;
  local_cb0 = 0;
  local_ca8 = 0;
  local_c78 = 0;
  local_c48 = 0;
  local_c50 = 0;
  local_c40 = 0;
  local_c58 = 0;
  local_c68 = 0;
  local_c70 = 0;
  local_c60 = 0;
  local_c38 = DAT_001423a8;
  local_c30 = 0;
  local_b88 = 0;
  local_b98 = 0;
  local_b90 = 0;
  local_bf8 = 0;
  uStack_be8 = 0;
  local_bf0 = 0;
  uStack_bd8 = 0;
  local_be0 = 0;
  uStack_bc8 = 0;
  local_bd0 = 0;
  local_bc0 = 0;
  local_bb0 = 0;
  local_bb8 = 0;
  local_ba0 = 0;
  local_ba8 = 0;
  local_b80 = DAT_001423a8;
  local_b78 = 0;
  local_b40 = 0;
  uStack_b48 = 0;
  local_b50 = 0;
  uStack_b58 = 0;
  local_b60 = 0;
  uStack_b68 = 0;
  local_b70 = 0;
  uStack_b10 = 0;
  local_b18 = 0;
  uStack_b20 = 0;
  local_b28 = 0;
  uStack_b30 = 0;
  local_b38 = 0;
  local_b08 = 1;
  local_b04 = 0;
                    /* try { // try from 00193108 to 0019311b has its CatchHandler @ 00193304 */
  facebook::react::RNSTabsScreenIOSProps::RNSTabsScreenIOSProps
            ((RNSTabsScreenIOSProps *)local_b00,(PropsParserContext *)local_14b0,
             (RNSTabsScreenIOSProps *)&local_1450,(RawProps *)&local_f8);
  puVar5 = PTR_PTR_001f0d00;
  FUN_0019405c(local_b00,PTR_PTR_001f0d00);
  FUN_0019405c(&local_1450,puVar5);
  facebook::react::RawPropsParser::postPrepare();
  pvVar3 = local_120;
  puVar4 = (undefined8 *)local_110;
  while (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar4[6];
    pvVar8 = (void *)*puVar4;
    local_120 = pvVar3;
    if ((plVar7 == (long *)0x0) || (lVar6 = FUN_001735f0(0xffffffffffffffff,plVar7 + 1), lVar6 != 0)
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
  pvVar8 = local_80;
  pvVar3 = local_78;
  if (local_80 != (void *)0x0) {
    while (pvVar3 != pvVar8) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 00193230 to 0019323b has its CatchHandler @ 00193308 */
        (*(code *)(&PTR_FUN_001e82f8)[*(uint *)((long)pvVar3 + -8)])
                  (&local_1450,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_78 = pvVar8;
    operator_delete(local_80);
  }
  if (local_98 != (void *)0x0) {
    pvStack_90 = local_98;
    operator_delete(local_98);
  }
  folly::dynamic::destroy();
  facebook::jsi::Value::~Value((Value *)local_e0);
  if (local_1470 != (void *)0x0) {
    pvStack_1468 = local_1470;
    operator_delete(local_1470);
  }
  if (pvStack_1488 != (void *)0x0) {
    local_1480 = pvStack_1488;
    operator_delete(pvStack_1488);
  }
  if (local_14a0 != (void *)0x0) {
    pvStack_1498 = local_14a0;
    operator_delete(local_14a0);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019330c  FUN_0019330c =====

void FUN_0019330c(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  long *plVar3;
  
  pvVar1 = (void *)param_1[0xd];
  *param_1 = &PTR_FUN_001e8318;
  if (pvVar1 != (void *)0x0) {
    param_1[0xe] = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[10];
  if (pvVar1 != (void *)0x0) {
    param_1[0xb] = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[7];
  if (pvVar1 != (void *)0x0) {
    param_1[8] = pvVar1;
    operator_delete(pvVar1);
  }
  plVar3 = (long *)param_1[6];
  if ((plVar3 != (long *)0x0) && (lVar2 = FUN_001735f0(0xffffffffffffffff,plVar3 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar3 = (long *)param_1[4];
  if ((plVar3 == (long *)0x0) || (lVar2 = FUN_001735f0(0xffffffffffffffff,plVar3 + 1), lVar2 != 0))
  {
    lVar2 = param_1[2];
  }
  else {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
    lVar2 = param_1[2];
  }
  if (lVar2 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 001933e0  FUN_001933e0 =====

void FUN_001933e0(void *param_1)

{
  FUN_0019330c();
  operator_delete(param_1);
  return;
}


// ===== 00193404  FUN_00193404 =====

undefined * FUN_00193404(void)

{
  return PTR_RNSTabsScreenIOSComponentName_001f0cf0;
}


// ===== 00193410  FUN_00193410 =====

undefined * FUN_00193410(void)

{
  return PTR_RNSTabsScreenIOSComponentName_001f0cf0;
}


// ===== 0019341c  FUN_0019341c =====

undefined8 FUN_0019341c(void)

{
  return 0x61;
}


// ===== 00193424  FUN_00193424 =====

void FUN_00193424(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  *puVar6 = &PTR_FUN_001eac60;
                    /* try { // try from 00193490 to 0019349f has its CatchHandler @ 00193578 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_001eacb0;
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
                    /* try { // try from 0019352c to 00193537 has its CatchHandler @ 00193568 */
  (**(code **)(lVar8 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001935a8  FUN_001935a8 =====

void FUN_001935a8(undefined8 *param_1,long *param_2,shared_ptr *param_3,ShadowNodeFragment *param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  YogaLayoutableShadowNode *local_78;
  long *local_70;
  YogaLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar5 = (long *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_001eac60;
                    /* try { // try from 00193600 to 0019360f has its CatchHandler @ 00193750 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            (pYVar1,(ShadowNode *)param_3,param_4);
  lVar6 = plVar5[4];
  plVar5[3] = (long)&PTR_FUN_001eacb0;
  uVar3 = *(uint *)((long)plVar5 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar6 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)plVar5 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
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
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar6 + 0x6b0) != '\0' || *(char *)(lVar6 + 0x6b1) != '\0') ||
             *(char *)(lVar6 + 0x1e8) != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar5;
                    /* try { // try from 00193694 to 001936a3 has its CatchHandler @ 00193768 */
  facebook::react::YogaLayoutableShadowNode::completeClone
            ((ShadowNode *)pYVar1,(ShadowNodeFragment *)param_3);
  local_78 = pYVar1;
  local_70 = plVar5;
  FUN_00174090(1,plVar5 + 1);
                    /* try { // try from 001936b4 to 001936c3 has its CatchHandler @ 00193740 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar5 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar6 = FUN_001735f0(0xffffffffffffffff,local_70 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 00193700 to 0019370b has its CatchHandler @ 00193768 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00193790  FUN_00193790 =====

void FUN_00193790(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x001937a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 001937a4  FUN_001937a4 =====

void FUN_001937a4(undefined8 *param_1,ulong param_2,PropsParserContext *param_3,long *param_4,
                 RawPropsParser *param_5)

{
  RNSTabsScreenIOSProps *this;
  uint uVar1;
  long lVar2;
  bool bVar3;
  RawValue *pRVar4;
  long *plVar5;
  RawValue *pRVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  char *__s2;
  dynamic *pdVar10;
  long lVar11;
  RNSTabsScreenIOSProps *pRVar12;
  undefined1 uStack_d1;
  dynamic local_d0 [32];
  dynamic *local_b0;
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar8 = facebook::react::RawProps::isEmpty(), (uVar8 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSTabsScreenIOSComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNSTabsScreenIOSPropsENS0_28RNSTabsScreenIOSEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b88
         & 1) == 0) &&
       (param_2 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSTabsScreenIOSComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNSTabsScreenIOSPropsENS0_28RNSTabsScreenIOSEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b88
                                     ), (int)param_2 != 0)) {
                    /* try { // try from 00193bd8 to 00193bdb has its CatchHandler @ 00193c08 */
      FUN_00194380();
      __cxa_atexit(FUN_0019453c,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSTabsScreenIOSComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNSTabsScreenIOSPropsENS0_28RNSTabsScreenIOSEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b80
                   ,&PTR_LOOP_001e77b0);
      param_2 = __cxa_guard_release(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSTabsScreenIOSComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNSTabsScreenIOSPropsENS0_28RNSTabsScreenIOSEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b88
                                   );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSTabsScreenIOSComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNSTabsScreenIOSPropsENS0_28RNSTabsScreenIOSEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b80
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSTabsScreenIOSComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNSTabsScreenIOSPropsENS0_28RNSTabsScreenIOSEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b80
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      param_2 = FUN_00174090(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::parse(param_5);
    pRVar12 = (RNSTabsScreenIOSProps *)*param_4;
    if (pRVar12 == (RNSTabsScreenIOSProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSTabsScreenIOSComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNSTabsScreenIOSPropsENS0_28RNSTabsScreenIOSEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b88
           & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSTabsScreenIOSComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNSTabsScreenIOSPropsENS0_28RNSTabsScreenIOSEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b88
                                     ), iVar7 != 0)) {
                    /* try { // try from 00193b58 to 00193b5b has its CatchHandler @ 00193c20 */
        FUN_00194380();
        __cxa_atexit(FUN_0019453c,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSTabsScreenIOSComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNSTabsScreenIOSPropsENS0_28RNSTabsScreenIOSEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b80
                     ,&PTR_LOOP_001e77b0);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSTabsScreenIOSComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNSTabsScreenIOSPropsENS0_28RNSTabsScreenIOSEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b88
                           );
      }
      pRVar12 = *(RNSTabsScreenIOSProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSTabsScreenIOSComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNSTabsScreenIOSPropsENS0_28RNSTabsScreenIOSEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b80
      ;
    }
    plVar9 = (long *)operator_new(0x968);
    this = (RNSTabsScreenIOSProps *)(plVar9 + 3);
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_FUN_001eadc8;
                    /* try { // try from 00193884 to 00193897 has its CatchHandler @ 00193c94 */
    facebook::react::RNSTabsScreenIOSProps::RNSTabsScreenIOSProps
              (this,param_3,pRVar12,(RawProps *)param_5);
                    /* try { // try from 0019389c to 001938af has its CatchHandler @ 00193cac */
    uVar8 = facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid();
    if ((((uVar8 & 1) == 0) ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid
                           (), (uVar8 & 1) == 0)) ||
       (uVar8 = facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid(),
       (uVar8 & 1) == 0)) {
LAB_001938d8:
      FUN_00174090(1,plVar9 + 1);
      if ((RawProps *)*param_4 == (RawProps *)0x0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSTabsScreenIOSComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNSTabsScreenIOSPropsENS0_28RNSTabsScreenIOSEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b88
             & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSTabsScreenIOSComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNSTabsScreenIOSPropsENS0_28RNSTabsScreenIOSEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b88
                                       ), iVar7 != 0)) {
                    /* try { // try from 00193b98 to 00193b9b has its CatchHandler @ 00193c0c */
          FUN_00194380();
          __cxa_atexit(FUN_0019453c,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSTabsScreenIOSComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNSTabsScreenIOSPropsENS0_28RNSTabsScreenIOSEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b80
                       ,&PTR_LOOP_001e77b0);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSTabsScreenIOSComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNSTabsScreenIOSPropsENS0_28RNSTabsScreenIOSEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b88
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00193940 to 00193953 has its CatchHandler @ 00193c38 */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,
                   *(RawProps **)
                    PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSTabsScreenIOSComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNSTabsScreenIOSPropsENS0_28RNSTabsScreenIOSEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b80
                   ,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_0019398c:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_0019398c;
        }
        if (plVar9 != (long *)0x0) goto LAB_001939a0;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 001938f4 to 00193907 has its CatchHandler @ 00193c60 */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,(RawProps *)*param_4,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_001939a0;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_001939a0:
        lVar11 = FUN_001735f0(0xffffffffffffffff,plVar9 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 001938bc to 001938c7 has its CatchHandler @ 00193c34 */
      __s2 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar7 = strcmp(PTR_RNSTabsScreenIOSComponentName_001f0cf0,__s2);
      if (iVar7 != 0) goto LAB_001938d8;
      bVar3 = false;
    }
                    /* try { // try from 001939cc to 001939cf has its CatchHandler @ 00193cac */
    param_2 = facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter();
    if ((param_2 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 001939dc to 001939f7 has its CatchHandler @ 00193c5c */
        param_2 = folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar9 + 7));
      }
      else {
        param_2 = facebook::react::RawProps::operator_cast_to_dynamic((RawProps *)param_5);
      }
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00193b38 to 00193b47 has its CatchHandler @ 00193c54 */
                    /* WARNING: Subroutine does not return */
          FUN_00172ea4(*(undefined8 *)PTR_name_001f09c8);
        }
        goto LAB_00193cf8;
      }
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00193b18 to 00193b27 has its CatchHandler @ 00193cb8 */
                    /* WARNING: Subroutine does not return */
            FUN_00172ea4(*(undefined8 *)PTR_name_001f0bb0);
          }
          goto LAB_00193cf8;
        }
        uVar1 = 0x811c9dc5;
        uVar8 = (ulong)(*(byte *)(plVar5 + 3) >> 1);
        pRVar6 = (RawValue *)((long)plVar5 + 0x19);
        pRVar4 = (RawValue *)((long)plVar5 + 0x19);
        if ((*(byte *)(plVar5 + 3) & 1) != 0) {
          uVar8 = plVar5[4];
          pRVar6 = (RawValue *)plVar5[5];
          pRVar4 = (RawValue *)plVar5[5];
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          uVar1 = (uVar1 ^ (int)(char)*pRVar6) * 0x1000193;
          pRVar6 = pRVar6 + 1;
        }
                    /* try { // try from 00193a78 to 00193a83 has its CatchHandler @ 00193cc0 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 00193a88 to 00193a9f has its CatchHandler @ 00193cc4 */
        param_2 = facebook::react::HostPlatformViewProps::setProp
                            ((PropsParserContext *)this,(uint)param_3,(char *)(ulong)uVar1,pRVar4);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 00193ab0 to 00193abb has its CatchHandler @ 00193cb4 */
          param_2 = (*(code *)(&PTR_FUN_001e82f8)[local_a0])(&uStack_d1,local_d0);
        }
      }
      param_2 = folly::dynamic::destroy();
    }
    param_1[1] = plVar9;
    *param_1 = this;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_00193cf8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}


// ===== 00193cfc  FUN_00193cfc =====

void FUN_00193cfc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00193d04  FUN_00193d04 =====

void FUN_00193d04(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00193d0c  FUN_00193d0c =====

void FUN_00193d0c(undefined8 *param_1,long param_2,long param_3)

{
  EventEmitter *pEVar1;
  ShadowNodeFamily *pSVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ShadowNodeFamily *local_b0;
  undefined8 *local_a8;
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
  FUN_0017dbe4(&local_a0,param_3 + 8,param_3 + 4);
                    /* try { // try from 00193d50 to 00193d57 has its CatchHandler @ 00194030 */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_001eae18;
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
    FUN_00174090(1,local_78 + 0x10);
  }
                    /* try { // try from 00193d94 to 00193da3 has its CatchHandler @ 00194004 */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_001e8610;
                    /* try { // try from 00193db0 to 00193db7 has its CatchHandler @ 00193ff4 */
  puVar6 = (undefined8 *)operator_new(0x58);
  *puVar6 = &PTR_FUN_001e8630;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[4] = 0;
  puVar6[3] = 0;
  plVar5[0xb] = (long)(puVar6 + 3);
  plVar5[0xc] = (long)puVar6;
  puVar6[6] = 0;
  puVar6[5] = 0;
  puVar6[8] = 0;
  puVar6[7] = 0;
  *(undefined8 *)((long)puVar6 + 0x4c) = 0;
  *(undefined8 *)((long)puVar6 + 0x44) = 0;
  plVar5[3] = (long)&PTR_FUN_001eae68;
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = plStack_98;
  local_90 = pEVar1;
  local_88 = plVar5;
  if ((plStack_98 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_98 + 1), lVar7 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 00193e64 to 00193e6b has its CatchHandler @ 00193fe4 */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  *puVar6 = &PTR_FUN_001e86f0;
  pSVar2 = (ShadowNodeFamily *)(puVar6 + 4);
  puVar6[1] = 0;
  puVar6[2] = 0;
  local_70 = local_90;
  plStack_68 = local_88;
  if (local_88 != (long *)0x0) {
    FUN_00174090(1,local_88 + 1);
  }
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  if (local_78 != 0) {
    FUN_00174090(1,local_78 + 0x10);
  }
                    /* try { // try from 00193eb4 to 00193ecb has its CatchHandler @ 00193fb4 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar2,param_3,&local_70,&local_80,param_2);
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pEVar1 = local_90;
  *param_1 = pSVar2;
  param_1[1] = puVar6;
  local_b0 = pSVar2;
  local_a8 = puVar6;
  FUN_00174090(1,puVar6 + 2);
                    /* try { // try from 00193f20 to 00193f2b has its CatchHandler @ 00193f94 */
  facebook::react::EventEmitter::setShadowNodeFamily(pEVar1,&local_b0);
  if (local_a8 != (undefined8 *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar7 = FUN_001735f0(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00194058  FUN_00194058 =====

void FUN_00194058(void)

{
  return;
}


// ===== 0019405c  FUN_0019405c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0019405c(long param_1,long param_2)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x930) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x940));
  }
  FUN_00192310(param_1 + 0x890);
  if ((*(byte *)(param_1 + 0x878) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x888));
  }
  FUN_00192310(param_1 + 0x7d8);
  folly::dynamic::destroy();
  folly::dynamic::destroy();
  if ((*(byte *)(param_1 + 0x750) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x738);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x760));
    bVar1 = *(byte *)(param_1 + 0x738);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x718);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x748));
    bVar1 = *(byte *)(param_1 + 0x718);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x700);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x728));
    bVar1 = *(byte *)(param_1 + 0x700);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x6e0);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x710));
    bVar1 = *(byte *)(param_1 + 0x6e0);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x6f0));
  }
  FUN_0017d0e8(param_1,param_2 + 8);
  return;
}


// ===== 00194138  FUN_00194138 =====

void FUN_00194138(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_001735f0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


