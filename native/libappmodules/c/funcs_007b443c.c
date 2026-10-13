// ===== 007b443c  FUN_007b443c =====

void FUN_007b443c(long *param_1)

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


// ===== 007b44fc  FUN_007b44fc =====

void FUN_007b44fc(long param_1)

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


// ===== 007b4564  FUN_007b4564 =====

bool FUN_007b4564(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 007b457c  FUN_007b457c =====

bool FUN_007b457c(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 007b4594  FUN_007b4594 =====

void FUN_007b4594(undefined8 *param_1,undefined8 param_2,ShadowNode *param_3,
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
  *puVar6 = &PTR_FUN_00983eb0;
                    /* try { // try from 007b45d4 to 007b45e3 has its CatchHandler @ 007b467c */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_00983f00;
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


// ===== 007b4698  FUN_007b4698 =====

void FUN_007b4698(undefined8 *param_1,PropsParserContext *param_2,RawProps *param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  TextDisplayComponentViewProps *pTVar4;
  undefined1 uStack_59;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pTVar4 = (TextDisplayComponentViewProps *)*param_4;
  if (pTVar4 == (TextDisplayComponentViewProps *)0x0) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de20
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de20
                                   ), iVar2 != 0)) {
                    /* try { // try from 007b4764 to 007b4773 has its CatchHandler @ 007b47a0 */
      FUN_007b4a0c(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de18
                   ,&uStack_59);
      __cxa_atexit(FUN_007b49bc,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de18
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de20
                         );
    }
    pTVar4 = *(TextDisplayComponentViewProps **)
              PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de18
    ;
  }
  puVar3 = (undefined8 *)operator_new(0x730);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_00984018;
                    /* try { // try from 007b4710 to 007b4723 has its CatchHandler @ 007b47b4 */
  facebook::react::TextDisplayComponentViewProps::TextDisplayComponentViewProps
            ((TextDisplayComponentViewProps *)(puVar3 + 3),param_2,pTVar4,param_3);
  *param_1 = (TextDisplayComponentViewProps *)(puVar3 + 3);
  param_1[1] = puVar3;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b47e4  FUN_007b47e4 =====

void FUN_007b47e4(undefined8 *param_1,undefined8 param_2,long *param_3)

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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de20
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de20
                                   ), iVar2 != 0)) {
                    /* try { // try from 007b48c8 to 007b48d7 has its CatchHandler @ 007b4904 */
      FUN_007b4a0c(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de18
                   ,local_70);
      __cxa_atexit(FUN_007b49bc,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de18
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de20
                         );
    }
    local_50 = (long *)0x0;
                    /* try { // try from 007b4854 to 007b4867 has its CatchHandler @ 007b4918 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*(undefined8 *)
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de18
               ,param_2,local_70);
  }
  else {
    local_50 = (long *)0x0;
                    /* try { // try from 007b4818 to 007b482f has its CatchHandler @ 007b491c */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*param_3,param_2,local_70);
  }
  if (local_50 == local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007b4894;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007b4894:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b496c  FUN_007b496c =====

void FUN_007b496c(long param_1)

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


// ===== 007b49bc  FUN_007b49bc =====

void FUN_007b49bc(long param_1)

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


// ===== 007b4a0c  FUN_007b4a0c =====

void FUN_007b4a0c(undefined8 *param_1)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x730);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00983fc8;
  memset(__s,0,0x718);
                    /* try { // try from 007b4a50 to 007b4a63 has its CatchHandler @ 007b4ae8 */
  FUN_00788b10(__s,PTR_PTR_0099e0d8 + 0x10);
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
  puVar1 = PTR_vtable_0099e0d0;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *param_1 = __s;
  param_1[1] = puVar2;
  puVar2[3] = puVar1 + 0x20;
  puVar2[0xe4] = 0;
  puVar2[0xe3] = 0;
  puVar2[0xe2] = 0;
  puVar2[0xe1] = 0;
  puVar2[0xe0] = 0;
  puVar2[0xdf] = 0;
  *(undefined8 *)((long)puVar2 + 0x725) = 0;
  return;
}


// ===== 007b4b04  FUN_007b4b04 =====

void FUN_007b4b04(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00983fc8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007b4b14  FUN_007b4b14 =====

void FUN_007b4b14(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00983fc8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007b4b44  FUN_007b4b44 =====

void FUN_007b4b44(long param_1)

{
  if ((*(byte *)(param_1 + 0x710) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x720));
  }
  if ((*(byte *)(param_1 + 0x6f8) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x708));
  }
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e0d8 + 8);
  return;
}


// ===== 007b4b90  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007b4b94  FUN_007b4b94 =====

void FUN_007b4b94(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00984018;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007b4ba4  FUN_007b4ba4 =====

void FUN_007b4ba4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00984018;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007b4bd4  FUN_007b4bd4 =====

void FUN_007b4bd4(long param_1)

{
  if ((*(byte *)(param_1 + 0x710) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x720));
  }
  if ((*(byte *)(param_1 + 0x6f8) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x708));
  }
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e0d8 + 8);
  return;
}


// ===== 007b4c20  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007b4c24  FUN_007b4c24 =====

void FUN_007b4c24(long param_1)

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


// ===== 007b4c74  FUN_007b4c74 =====

void FUN_007b4c74(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00984068;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007b4c84  FUN_007b4c84 =====

void FUN_007b4c84(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00984068;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007b4cb4  FUN_007b4cb4 =====

void FUN_007b4cb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007b4cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 007b4cc0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007b4cc4  FUN_007b4cc4 =====

EventEmitter * FUN_007b4cc4(EventEmitter *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
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
                    /* try { // try from 007b4d0c to 007b4d1b has its CatchHandler @ 007b4de0 */
  facebook::react::EventEmitter::EventEmitter(param_1,&local_50,&local_60);
  *(undefined ***)param_1 = &PTR_FUN_0097ff10;
                    /* try { // try from 007b4d28 to 007b4d2f has its CatchHandler @ 007b4dd0 */
  puVar3 = (undefined8 *)operator_new(0x58);
  *puVar3 = &PTR_FUN_0097ff30;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[4] = 0;
  puVar3[3] = 0;
  *(undefined8 **)(param_1 + 0x40) = puVar3 + 3;
  *(undefined8 **)(param_1 + 0x48) = puVar3;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[8] = 0;
  puVar3[7] = 0;
  *(undefined8 *)((long)puVar3 + 0x4c) = 0;
  *(undefined8 *)((long)puVar3 + 0x44) = 0;
  *(undefined ***)param_1 = &PTR_FUN_009840b8;
  if (local_58 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = plStack_48;
  if ((plStack_48 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,plStack_48 + 1), lVar4 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b4e14  FUN_007b4e14 =====

void FUN_007b4e14(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_0097ff10;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_0097ff80;
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


// ===== 007b4ec4  FUN_007b4ec4 =====

ShadowNodeFamily *
FUN_007b4ec4(ShadowNodeFamily *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
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
                    /* try { // try from 007b4f28 to 007b4f3f has its CatchHandler @ 007b4fa8 */
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


// ===== 007b4fe0  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_29DCDVideoRendererComponentNameEEEENS0_21DCDVideoRendererPropsENS0_28DCDVideoRendererEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_29DCDVideoRendererComponentNameEEEENS0_21DCDVideoRendererPropsENS0_28DCDVideoRendererEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_007b5034(&local_30);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b5034  FUN_007b5034 =====

void FUN_007b5034(undefined8 *param_1,ComponentDescriptorParameters *param_2)

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
                    /* try { // try from 007b5078 to 007b5083 has its CatchHandler @ 007b50f0 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_90);
  *(undefined ***)this = &PTR_FUN_009840f0;
  FUN_007b5120(this + 0x38);
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


// ===== 007b5120  FUN_007b5120 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007b5120(undefined8 param_1)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  undefined4 local_ff0 [2];
  undefined8 *local_fe8;
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
  byte local_8f8;
  void *local_8e8;
  char local_8e0;
  DCDVideoRendererProps aDStack_8d8 [1768];
  byte local_1f0;
  void *local_1e0;
  char local_1d8;
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
                    /* try { // try from 007b51a8 to 007b51b3 has its CatchHandler @ 007b5760 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1d0);
  local_120 = CONCAT44(local_120._4_4_,0x3f800000);
  local_ff0[0] = 0xffffffff;
  uStack_128 = 0;
  local_130 = (void *)0x0;
  uStack_138 = 0;
  local_140 = (void *)0x0;
  local_fe8 = &local_1d0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_118,param_1);
  memset(local_fc0,0,0x6e8);
  local_88[0] = 5;
  local_70 = 0;
  local_fe0 = PTR_construction_vtable_0099e260 + 0x20;
  local_fc0[0] = 5;
  uStack_fc8 = 0;
  local_fd0 = 0;
  uStack_fd8 = 0;
  local_68 = 0;
  uStack_60 = 0x3f800000;
  uStack_78 = 0;
  local_80 = 0;
  uStack_fb0 = 0;
  local_fb8 = 0;
  uStack_fa0 = 0;
  local_fa8 = 0;
  local_f98 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_88);
  local_f8c = 0;
  local_f31 = 0;
  uStack_a50 = _UNK_00470a7c;
  local_a58 = _DAT_00470a74;
  local_f8b = _s__00375408;
  uStack_b48 = _UNK_00371598;
  local_b50 = _DAT_00371590;
  uStack_a60 = _UNK_00470a6c;
  local_a68 = _DAT_00470a64;
  local_e74 = 0;
  uStack_a70 = _UNK_00470a5c;
  local_a78 = _DAT_00470a54;
  uStack_a80 = _UNK_00470a4c;
  local_a88 = _DAT_00470a44;
  uStack_a38 = 0;
  local_e6c = 0;
  uStack_ea0 = 0;
  local_ea8 = 0;
  uStack_e8c = 0;
  uStack_eb0 = 0;
  local_eb8 = 0;
  uStack_a40 = 0;
  uStack_a3a = 0;
  local_a48 = 0;
  local_f90 = 0x10410710;
  local_f35 = 0x40004;
  uStack_e94 = 0;
  uStack_e90 = 0;
  uStack_e9c = 0;
  uStack_e98 = 0;
  uStack_e80 = 0;
  local_e88 = 0;
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
  uStack_d9f = 0;
  uStack_da0 = 0;
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
  local_cdc = 1;
  local_cdb = 0;
  local_cd6 = 0x23;
  local_c9c = 0x3f800000;
  uStack_b80 = 0;
  local_b88 = 0;
  uStack_b70 = 0;
  uStack_b78 = 0;
  uStack_b90 = 0;
  local_b98 = 0;
  local_b64 = 0;
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
  uStack_cf0 = 0;
  local_cf8 = 0;
  local_ce8 = 0;
  local_ce0 = 0;
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
  local_fe0 = PTR_vtable_0099e0e8 + 0x20;
  local_900 = 0;
  local_8f8 = 0;
  local_8e0 = '\0';
                    /* try { // try from 007b55a4 to 007b55b7 has its CatchHandler @ 007b5760 */
  facebook::react::DCDVideoRendererProps::DCDVideoRendererProps
            (aDStack_8d8,(PropsParserContext *)local_ff0,(DCDVideoRendererProps *)&local_fe0,
             (RawProps *)&local_118);
  if ((local_1d8 != '\0') && ((local_1f0 & 1) != 0)) {
    operator_delete(local_1e0);
  }
  puVar5 = PTR_PTR_0099e0f0;
  FUN_0078917c(aDStack_8d8,PTR_PTR_0099e0f0 + 8);
  if ((local_8e0 != '\0') && ((local_8f8 & 1) != 0)) {
    operator_delete(local_8e8);
  }
  FUN_0078917c(&local_fe0,puVar5 + 8);
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
                    /* try { // try from 007b56f4 to 007b56ff has its CatchHandler @ 007b5764 */
        (*(code *)(&PTR_FUN_0097fbf8)[*(uint *)((long)pvVar3 + -8)])
                  (&local_fe0,(void *)((long)pvVar3 + -0x38));
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


// ===== 007b5768  FUN_007b5768 =====

void FUN_007b5768(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 007b578c  FUN_007b578c =====

undefined * FUN_007b578c(void)

{
  return PTR_DCDVideoRendererComponentName_0099e0e0;
}


// ===== 007b5798  FUN_007b5798 =====

undefined * FUN_007b5798(void)

{
  return PTR_DCDVideoRendererComponentName_0099e0e0;
}


// ===== 007b57a4  FUN_007b57a4 =====

undefined8 FUN_007b57a4(void)

{
  return 0x61;
}


// ===== 007b57ac  FUN_007b57ac =====

void FUN_007b57ac(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_007b5f9c(&local_60,&uStack_49,param_3,param_4,&local_64);
                    /* try { // try from 007b5814 to 007b581b has its CatchHandler @ 007b584c */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b5874  FUN_007b5874 =====

void FUN_007b5874(undefined8 *param_1,long *param_2,shared_ptr *param_3,undefined8 param_4)

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
  FUN_007b6250(&local_60,&local_70);
                    /* try { // try from 007b58c0 to 007b58cb has its CatchHandler @ 007b5978 */
  (**(code **)(*local_60 + 0x10))(local_60,param_3,param_4);
  local_70 = local_60;
  local_68 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    FUN_00757d00(1,plStack_58 + 1);
  }
                    /* try { // try from 007b58e4 to 007b58f3 has its CatchHandler @ 007b5968 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_70);
  plVar2 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 007b5930 to 007b5937 has its CatchHandler @ 007b5978 */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = plStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b59a0  FUN_007b59a0 =====

void FUN_007b59a0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x007b59b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 007b59b4  FUN_007b59b4 =====

void FUN_007b59b4(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29DCDVideoRendererComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21DCDVideoRendererPropsENS0_28DCDVideoRendererEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de40
         & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29DCDVideoRendererComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21DCDVideoRendererPropsENS0_28DCDVideoRendererEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de40
                                   ), iVar7 != 0)) {
                    /* try { // try from 007b5c80 to 007b5c8f has its CatchHandler @ 007b5cbc */
      FUN_007b66c8(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29DCDVideoRendererComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21DCDVideoRendererPropsENS0_28DCDVideoRendererEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de38
                   ,adStack_d0);
      __cxa_atexit(FUN_007b6678,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29DCDVideoRendererComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21DCDVideoRendererPropsENS0_28DCDVideoRendererEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de38
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29DCDVideoRendererComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21DCDVideoRendererPropsENS0_28DCDVideoRendererEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de40
                         );
    }
    lVar10 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29DCDVideoRendererComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21DCDVideoRendererPropsENS0_28DCDVideoRendererEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de38
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29DCDVideoRendererComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21DCDVideoRendererPropsENS0_28DCDVideoRendererEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de38
    ;
    param_1[1] = lVar10;
    if (lVar10 != 0) {
      FUN_00757d00(1,lVar10 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    FUN_007b6354(&local_f0,param_3,param_5,param_4);
                    /* try { // try from 007b5a5c to 007b5a6f has its CatchHandler @ 007b5cf0 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if (((uVar8 & 1) == 0) ||
       ((uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar8 & 1) == 0 ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enablePropsUpdateReconciliationAndroid(), (uVar8 & 1) == 0)))) {
LAB_007b5a98:
      local_100 = local_f0;
      local_f8 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        FUN_00757d00(1,plStack_e8 + 1);
      }
                    /* try { // try from 007b5ab0 to 007b5abf has its CatchHandler @ 007b5ce0 */
      FUN_007b64a0(&local_100,param_5,param_4);
      plVar4 = local_f8;
      if ((local_f8 != (long *)0x0) &&
         (lVar10 = FUN_00757990(0xffffffffffffffff,local_f8 + 1), lVar10 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 007b5a80 to 007b5a87 has its CatchHandler @ 007b5cd0 */
      pcVar9 = (char *)(**(code **)(*local_f0 + 0x10))();
      iVar7 = strcmp(PTR_DCDVideoRendererComponentName_0099e0e0,pcVar9);
      if (iVar7 != 0) goto LAB_007b5a98;
      bVar3 = false;
    }
                    /* try { // try from 007b5af4 to 007b5af7 has its CatchHandler @ 007b5cf0 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar8 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 007b5b04 to 007b5b1f has its CatchHandler @ 007b5cdc */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(local_f0 + 4));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_f0;
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 007b5c60 to 007b5c6f has its CatchHandler @ 007b5cd4 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_007b5d3c;
      }
      for (; local_f0 = plVar4, plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 007b5c40 to 007b5c4f has its CatchHandler @ 007b5cfc */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_007b5d3c;
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
                    /* try { // try from 007b5ba0 to 007b5bab has its CatchHandler @ 007b5d04 */
        folly::dynamic::dynamic(adStack_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 007b5bb0 to 007b5bc7 has its CatchHandler @ 007b5d08 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (plVar4,param_3,uVar1,pcVar9,adStack_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 007b5bd8 to 007b5be3 has its CatchHandler @ 007b5cf8 */
          (*(code *)(&PTR_FUN_0097fbf8)[local_a0])(&uStack_d1,adStack_d0);
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
LAB_007b5d3c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b5d40  FUN_007b5d40 =====

void FUN_007b5d40(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 007b5d48  FUN_007b5d48 =====

void FUN_007b5d48(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 007b5d50  FUN_007b5d50 =====

void FUN_007b5d50(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined1 auStack_80 [8];
  long *local_78;
  long *local_70;
  long *local_68;
  undefined1 uStack_59;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_0078a610(auStack_80,&uStack_59,param_3 + 8,param_3 + 4);
                    /* try { // try from 007b5d98 to 007b5d9f has its CatchHandler @ 007b5f20 */
  plVar4 = (long *)operator_new(0x68);
  plVar1 = plVar4 + 3;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_00984338;
                    /* try { // try from 007b5db8 to 007b5dc7 has its CatchHandler @ 007b5f08 */
  FUN_007b6970(plVar1,auStack_80,param_2 + 8);
  local_70 = plVar1;
  local_68 = plVar4;
  if ((local_78 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_78 + 1), lVar5 == 0)) {
    (**(code **)(*local_78 + 0x10))(local_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 007b5dfc to 007b5e03 has its CatchHandler @ 007b5ef8 */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  puVar2 = puVar6 + 4;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_0097fff0;
                    /* try { // try from 007b5e1c to 007b5e33 has its CatchHandler @ 007b5ee0 */
  FUN_007b6b70(puVar2,param_3,&local_70,param_2 + 8,param_2);
  plVar1 = local_70;
  *param_1 = (long)puVar2;
  param_1[1] = (long)puVar6;
  local_90 = puVar2;
  local_88 = puVar6;
  FUN_00757d00(1,puVar6 + 2);
                    /* try { // try from 007b5e4c to 007b5e57 has its CatchHandler @ 007b5ec0 */
  facebook::react::EventEmitter::facebook::react::EventEmitter::setShadowNodeFamily
            (plVar1,&local_90);
  if (local_88 != (undefined8 *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar1 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar5 == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b5f48  FUN_007b5f48 =====

void FUN_007b5f48(void)

{
  return;
}


// ===== 007b5f4c  FUN_007b5f4c =====

void FUN_007b5f4c(long param_1)

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


// ===== 007b5f9c  FUN_007b5f9c =====

void FUN_007b5f9c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  *puVar6 = &PTR_FUN_00984180;
                    /* try { // try from 007b5fe4 to 007b5ff3 has its CatchHandler @ 007b608c */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4,uVar8);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_009841d0;
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


// ===== 007b60a8  FUN_007b60a8 =====

void FUN_007b60a8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00984180;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007b60b8  FUN_007b60b8 =====

void FUN_007b60b8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00984180;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007b60e8  FUN_007b60e8 =====

void FUN_007b60e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007b60f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 007b60f4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007b60f8  FUN_007b60f8 =====

void FUN_007b60f8(long *param_1)

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


// ===== 007b61b8  FUN_007b61b8 =====

void FUN_007b61b8(long param_1)

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


// ===== 007b6220  FUN_007b6220 =====

bool FUN_007b6220(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 007b6238  FUN_007b6238 =====

bool FUN_007b6238(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 007b6250  FUN_007b6250 =====

void FUN_007b6250(undefined8 *param_1,undefined8 param_2,ShadowNode *param_3,
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
  *puVar6 = &PTR_FUN_00984180;
                    /* try { // try from 007b6290 to 007b629f has its CatchHandler @ 007b6338 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_009841d0;
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


// ===== 007b6354  FUN_007b6354 =====

void FUN_007b6354(undefined8 *param_1,PropsParserContext *param_2,RawProps *param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  DCDVideoRendererProps *pDVar4;
  undefined1 uStack_59;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pDVar4 = (DCDVideoRendererProps *)*param_4;
  if (pDVar4 == (DCDVideoRendererProps *)0x0) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29DCDVideoRendererComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21DCDVideoRendererPropsENS0_28DCDVideoRendererEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de40
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29DCDVideoRendererComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21DCDVideoRendererPropsENS0_28DCDVideoRendererEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de40
                                   ), iVar2 != 0)) {
                    /* try { // try from 007b6420 to 007b642f has its CatchHandler @ 007b645c */
      FUN_007b66c8(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29DCDVideoRendererComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21DCDVideoRendererPropsENS0_28DCDVideoRendererEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de38
                   ,&uStack_59);
      __cxa_atexit(FUN_007b6678,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29DCDVideoRendererComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21DCDVideoRendererPropsENS0_28DCDVideoRendererEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de38
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29DCDVideoRendererComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21DCDVideoRendererPropsENS0_28DCDVideoRendererEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de40
                         );
    }
    pDVar4 = *(DCDVideoRendererProps **)
              PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29DCDVideoRendererComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21DCDVideoRendererPropsENS0_28DCDVideoRendererEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de38
    ;
  }
  puVar3 = (undefined8 *)operator_new(0x720);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_009842e8;
                    /* try { // try from 007b63cc to 007b63df has its CatchHandler @ 007b6470 */
  facebook::react::DCDVideoRendererProps::DCDVideoRendererProps
            ((DCDVideoRendererProps *)(puVar3 + 3),param_2,pDVar4,param_3);
  *param_1 = (DCDVideoRendererProps *)(puVar3 + 3);
  param_1[1] = puVar3;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b64a0  FUN_007b64a0 =====

void FUN_007b64a0(undefined8 *param_1,undefined8 param_2,long *param_3)

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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29DCDVideoRendererComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21DCDVideoRendererPropsENS0_28DCDVideoRendererEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de40
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29DCDVideoRendererComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21DCDVideoRendererPropsENS0_28DCDVideoRendererEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de40
                                   ), iVar2 != 0)) {
                    /* try { // try from 007b6584 to 007b6593 has its CatchHandler @ 007b65c0 */
      FUN_007b66c8(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29DCDVideoRendererComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21DCDVideoRendererPropsENS0_28DCDVideoRendererEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de38
                   ,local_70);
      __cxa_atexit(FUN_007b6678,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29DCDVideoRendererComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21DCDVideoRendererPropsENS0_28DCDVideoRendererEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de38
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29DCDVideoRendererComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21DCDVideoRendererPropsENS0_28DCDVideoRendererEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de40
                         );
    }
    local_50 = (long *)0x0;
                    /* try { // try from 007b6510 to 007b6523 has its CatchHandler @ 007b65d4 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*(undefined8 *)
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29DCDVideoRendererComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21DCDVideoRendererPropsENS0_28DCDVideoRendererEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de38
               ,param_2,local_70);
  }
  else {
    local_50 = (long *)0x0;
                    /* try { // try from 007b64d4 to 007b64eb has its CatchHandler @ 007b65d8 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*param_3,param_2,local_70);
  }
  if (local_50 == local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007b6550;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007b6550:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b6628  FUN_007b6628 =====

void FUN_007b6628(long param_1)

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


// ===== 007b6678  FUN_007b6678 =====

void FUN_007b6678(long param_1)

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


// ===== 007b66c8  FUN_007b66c8 =====

void FUN_007b66c8(undefined8 *param_1)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x720);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00984298;
  memset(__s,0,0x708);
                    /* try { // try from 007b670c to 007b671f has its CatchHandler @ 007b6794 */
  FUN_00788b10(__s,PTR_PTR_0099e0f0 + 0x10);
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
  puVar1 = PTR_vtable_0099e0e8;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *(undefined1 *)(puVar2 + 0xdf) = 0;
  puVar2[3] = puVar1 + 0x20;
  *(undefined1 *)(puVar2 + 0xe0) = 0;
  *(undefined1 *)(puVar2 + 0xe3) = 0;
  *param_1 = __s;
  param_1[1] = puVar2;
  return;
}


// ===== 007b67b0  FUN_007b67b0 =====

void FUN_007b67b0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00984298;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007b67c0  FUN_007b67c0 =====

void FUN_007b67c0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00984298;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007b67f0  FUN_007b67f0 =====

void FUN_007b67f0(long param_1)

{
  if ((*(char *)(param_1 + 0x718) != '\0') && ((*(byte *)(param_1 + 0x700) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x710));
  }
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e0f0 + 8);
  return;
}


// ===== 007b683c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007b6840  FUN_007b6840 =====

void FUN_007b6840(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009842e8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007b6850  FUN_007b6850 =====

void FUN_007b6850(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009842e8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007b6880  FUN_007b6880 =====

void FUN_007b6880(long param_1)

{
  if ((*(char *)(param_1 + 0x718) != '\0') && ((*(byte *)(param_1 + 0x700) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x710));
  }
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e0f0 + 8);
  return;
}


// ===== 007b68cc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007b68d0  FUN_007b68d0 =====

void FUN_007b68d0(long param_1)

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


// ===== 007b6920  FUN_007b6920 =====

void FUN_007b6920(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00984338;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007b6930  FUN_007b6930 =====

void FUN_007b6930(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00984338;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007b6960  FUN_007b6960 =====

void FUN_007b6960(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007b6968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 007b696c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007b6970  FUN_007b6970 =====

EventEmitter * FUN_007b6970(EventEmitter *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
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
                    /* try { // try from 007b69b8 to 007b69c7 has its CatchHandler @ 007b6a8c */
  facebook::react::EventEmitter::EventEmitter(param_1,&local_50,&local_60);
  *(undefined ***)param_1 = &PTR_FUN_0097ff10;
                    /* try { // try from 007b69d4 to 007b69db has its CatchHandler @ 007b6a7c */
  puVar3 = (undefined8 *)operator_new(0x58);
  *puVar3 = &PTR_FUN_0097ff30;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[4] = 0;
  puVar3[3] = 0;
  *(undefined8 **)(param_1 + 0x40) = puVar3 + 3;
  *(undefined8 **)(param_1 + 0x48) = puVar3;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[8] = 0;
  puVar3[7] = 0;
  *(undefined8 *)((long)puVar3 + 0x4c) = 0;
  *(undefined8 *)((long)puVar3 + 0x44) = 0;
  *(undefined ***)param_1 = &PTR_FUN_00984388;
  if (local_58 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = plStack_48;
  if ((plStack_48 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,plStack_48 + 1), lVar4 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b6ac0  FUN_007b6ac0 =====

void FUN_007b6ac0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_0097ff10;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_0097ff80;
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


// ===== 007b6b70  FUN_007b6b70 =====

ShadowNodeFamily *
FUN_007b6b70(ShadowNodeFamily *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
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
                    /* try { // try from 007b6bd4 to 007b6beb has its CatchHandler @ 007b6c54 */
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


// ===== 007b6c8c  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_32DCDVisualEffectViewComponentNameEEEENS0_24DCDVisualEffectViewPropsENS0_31DCDVisualEffectViewEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_32DCDVisualEffectViewComponentNameEEEENS0_24DCDVisualEffectViewPropsENS0_31DCDVisualEffectViewEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_007b6ce0(&local_30);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b6ce0  FUN_007b6ce0 =====

void FUN_007b6ce0(undefined8 *param_1,ComponentDescriptorParameters *param_2)

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
                    /* try { // try from 007b6d24 to 007b6d2f has its CatchHandler @ 007b6d9c */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_90);
  *(undefined ***)this = &PTR_FUN_009843c0;
  FUN_007b6dcc(this + 0x38);
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


// ===== 007b6dcc  FUN_007b6dcc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007b6dcc(undefined8 param_1)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  undefined4 local_1050 [2];
  undefined8 *local_1048;
  undefined *local_1040;
  undefined8 uStack_1038;
  undefined8 local_1030;
  undefined8 uStack_1028;
  undefined4 local_1020 [2];
  undefined8 local_1018;
  undefined8 uStack_1010;
  undefined8 local_1008;
  undefined8 uStack_1000;
  undefined4 local_ff8;
  undefined4 local_ff0;
  undefined1 local_fec;
  undefined8 local_feb;
  undefined8 local_fe3;
  undefined8 uStack_fdb;
  undefined8 local_fd3;
  undefined8 uStack_fcb;
  undefined8 local_fc3;
  undefined8 uStack_fbb;
  undefined8 local_fb3;
  undefined6 uStack_fab;
  undefined2 uStack_fa5;
  undefined6 uStack_fa3;
  undefined8 uStack_f9d;
  undefined4 local_f95;
  undefined8 local_f91;
  undefined1 local_f89;
  undefined1 uStack_f88;
  undefined7 uStack_f87;
  undefined8 uStack_f80;
  undefined8 uStack_f78;
  undefined8 uStack_f70;
  undefined8 local_f68;
  undefined8 uStack_f60;
  undefined8 local_f58;
  undefined8 uStack_f50;
  undefined8 local_f48;
  undefined8 uStack_f40;
  undefined8 local_f38;
  undefined8 uStack_f30;
  undefined8 uStack_f28;
  undefined8 local_f20;
  undefined8 local_f18;
  undefined8 uStack_f10;
  undefined8 local_f08;
  undefined4 uStack_f00;
  undefined4 uStack_efc;
  undefined4 uStack_ef8;
  undefined4 uStack_ef4;
  undefined4 uStack_ef0;
  undefined4 uStack_eec;
  undefined8 local_ee8;
  undefined8 uStack_ee0;
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
  undefined4 local_e78;
  undefined1 local_e74;
  undefined4 local_e70;
  undefined1 local_e6c;
  undefined4 local_e68;
  undefined1 local_e64;
  undefined4 local_e60;
  undefined1 local_e5c;
  undefined1 local_e58;
  undefined1 local_e54;
  undefined1 local_e48;
  undefined8 local_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  undefined8 uStack_e28;
  undefined8 local_e20;
  undefined8 uStack_e18;
  undefined8 uStack_e10;
  undefined1 uStack_e08;
  undefined7 local_e07;
  undefined1 uStack_e00;
  undefined8 uStack_dff;
  undefined8 local_df4;
  undefined8 uStack_dec;
  undefined8 uStack_de4;
  undefined8 uStack_ddc;
  undefined8 local_dd4;
  undefined8 uStack_dcc;
  undefined8 uStack_dc4;
  undefined8 uStack_dbc;
  undefined8 local_db4;
  undefined8 uStack_dac;
  undefined8 uStack_da4;
  undefined5 uStack_d9c;
  undefined3 local_d97;
  undefined5 uStack_d94;
  undefined1 local_d8c;
  undefined1 local_d88;
  undefined1 local_d84;
  undefined1 local_d80;
  undefined1 local_d7c;
  undefined1 local_d78;
  undefined1 local_d60;
  undefined8 local_d58;
  undefined8 uStack_d50;
  undefined8 local_d48;
  undefined4 local_d40;
  undefined1 local_d3c;
  undefined4 local_d3b;
  undefined1 local_d37;
  undefined1 local_d36;
  undefined8 local_d30;
  undefined8 uStack_d28;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 local_d10;
  undefined7 uStack_d08;
  undefined4 uStack_d01;
  undefined8 local_cfc;
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
  undefined1 local_c80;
  undefined1 local_c7c;
  undefined1 local_c74;
  undefined1 local_c70;
  undefined1 local_c68;
  undefined1 local_c64;
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
  undefined1 local_c18;
  undefined1 local_c14;
  undefined1 local_c10;
  undefined1 local_c0c;
  undefined1 local_c08;
  undefined1 local_c04;
  undefined1 local_c00;
  undefined1 local_bfc;
  undefined8 local_bf8;
  undefined8 uStack_bf0;
  undefined8 local_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined2 local_bc8;
  undefined8 local_bc4;
  undefined1 local_bbc;
  undefined8 local_bb8;
  undefined8 local_bb0;
  undefined8 uStack_ba8;
  undefined1 local_ba0;
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
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined8 local_af8;
  undefined8 uStack_af0;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  undefined8 local_ad8;
  undefined8 uStack_ad0;
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  undefined8 local_ab8;
  undefined8 uStack_ab0;
  undefined8 local_aa8;
  undefined6 uStack_aa0;
  undefined2 uStack_a9a;
  undefined6 uStack_a98;
  undefined1 local_a90;
  undefined1 local_a8c;
  undefined1 local_a88;
  undefined8 local_a84;
  undefined8 uStack_a7c;
  undefined1 local_a74;
  undefined8 local_a70;
  undefined2 local_a68;
  undefined1 local_a66;
  undefined4 local_a64;
  undefined1 local_a60;
  undefined1 local_a00;
  undefined1 local_9f8;
  undefined1 local_998;
  undefined4 local_990;
  undefined2 local_98c;
  undefined1 local_988;
  undefined1 local_984;
  undefined1 local_980;
  undefined1 local_97c;
  undefined1 local_978;
  undefined1 local_974;
  undefined1 local_970;
  undefined1 local_96c;
  undefined1 local_968;
  undefined1 local_964;
  undefined4 local_960;
  byte local_958;
  void *local_948;
  char local_940;
  undefined1 local_938;
  undefined1 local_934;
  undefined1 local_930;
  undefined1 local_92c;
  byte local_928;
  void *local_918;
  char local_910;
  DCDVisualEffectViewProps aDStack_908 [1768];
  byte local_220;
  void *local_210;
  char local_208;
  byte local_1f0;
  void *local_1e0;
  char local_1d8;
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
                    /* try { // try from 007b6e54 to 007b6e5f has its CatchHandler @ 007b7454 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1d0);
  local_120 = CONCAT44(local_120._4_4_,0x3f800000);
  local_1050[0] = 0xffffffff;
  uStack_128 = 0;
  local_130 = (void *)0x0;
  uStack_138 = 0;
  local_140 = (void *)0x0;
  local_1048 = &local_1d0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_118,param_1);
  memset(local_1020,0,0x718);
  local_88[0] = 5;
  local_70 = 0;
  local_1040 = PTR_construction_vtable_0099e268 + 0x20;
  local_1020[0] = 5;
  uStack_1028 = 0;
  local_1030 = 0;
  uStack_1038 = 0;
  local_68 = 0;
  uStack_60 = 0x3f800000;
  uStack_78 = 0;
  local_80 = 0;
  uStack_1010 = 0;
  local_1018 = 0;
  uStack_1000 = 0;
  local_1008 = 0;
  local_ff8 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_88);
  local_fec = 0;
  local_f91 = 0;
  uStack_ab0 = _UNK_00470a7c;
  local_ab8 = _DAT_00470a74;
  local_feb = _s__00375408;
  uStack_ba8 = _UNK_00371598;
  local_bb0 = _DAT_00371590;
  uStack_ac0 = _UNK_00470a6c;
  local_ac8 = _DAT_00470a64;
  local_ed4 = 0;
  uStack_ad0 = _UNK_00470a5c;
  local_ad8 = _DAT_00470a54;
  uStack_ae0 = _UNK_00470a4c;
  local_ae8 = _DAT_00470a44;
  uStack_a98 = 0;
  local_ecc = 0;
  uStack_f00 = 0;
  local_f08 = 0;
  uStack_eec = 0;
  uStack_f10 = 0;
  local_f18 = 0;
  uStack_aa0 = 0;
  uStack_a9a = 0;
  local_aa8 = 0;
  local_ff0 = 0x10410710;
  local_f95 = 0x40004;
  uStack_ef4 = 0;
  uStack_ef0 = 0;
  uStack_efc = 0;
  uStack_ef8 = 0;
  uStack_ee0 = 0;
  local_ee8 = 0;
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
  local_e78 = 0x7fc00000;
  local_e70 = 0x7fc00000;
  local_e68 = 0x7fc00000;
  local_e60 = 0x7fc00000;
  uStack_dff = 0;
  uStack_e00 = 0;
  uStack_dec = 0;
  local_df4 = 0;
  uStack_ddc = 0;
  uStack_de4 = 0;
  uStack_dcc = 0;
  local_dd4 = 0;
  uStack_dbc = 0;
  uStack_dc4 = 0;
  uStack_dac = 0;
  local_db4 = 0;
  uStack_d9c = 0;
  uStack_da4 = 0;
  local_d97 = 0;
  uStack_d94 = 0;
  local_d3c = 1;
  local_d3b = 0;
  local_d36 = 0x23;
  local_cfc = 0x3f800000;
  uStack_be0 = 0;
  local_be8 = 0;
  uStack_bd0 = 0;
  uStack_bd8 = 0;
  uStack_bf0 = 0;
  local_bf8 = 0;
  local_bc4 = 0;
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
  uStack_b00 = 0;
  uStack_b08 = 0;
  uStack_af0 = 0;
  local_af8 = 0;
  uStack_f87 = 0;
  uStack_fdb = 0;
  local_fe3 = 0;
  uStack_fcb = 0;
  local_fd3 = 0;
  uStack_fbb = 0;
  local_fc3 = 0;
  uStack_fab = 0;
  local_fb3 = 0;
  uStack_f9d = 0;
  uStack_fa5 = 0;
  uStack_fa3 = 0;
  local_f89 = 0;
  uStack_f88 = 0;
  uStack_f78 = 0;
  uStack_f80 = 0;
  local_f68 = 0;
  uStack_f70 = 0;
  local_f58 = 0;
  uStack_f60 = 0;
  local_f48 = 0;
  uStack_f50 = 0;
  local_f38 = 0;
  uStack_f40 = 0;
  uStack_f28 = 0;
  uStack_f30 = 0;
  local_f20 = 0;
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
  local_e74 = 0;
  local_e6c = 0;
  local_e64 = 0;
  local_e5c = 0;
  local_e58 = 0;
  local_e54 = 0;
  local_e48 = 0;
  local_d8c = 0;
  local_d88 = 0;
  local_d84 = 0;
  local_d80 = 0;
  local_d7c = 0;
  local_d78 = 0;
  local_d60 = 0;
  uStack_e38 = 0;
  local_e40 = 0;
  uStack_e28 = 0;
  uStack_e30 = 0;
  uStack_e18 = 0;
  local_e20 = 0;
  uStack_e08 = 0;
  local_e07 = 0;
  uStack_e10 = 0;
  uStack_d50 = 0;
  local_d58 = 0;
  local_d48 = 0;
  local_d40 = 0;
  local_d37 = 0;
  uStack_d28 = 0;
  local_d30 = 0;
  uStack_d18 = 0;
  uStack_d20 = 0;
  uStack_d08 = 0;
  uStack_d01 = 0;
  local_d10 = 0;
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
  local_c80 = 0;
  local_c7c = 0;
  local_c74 = 0;
  local_c70 = 0;
  local_c68 = 0;
  local_c64 = 0;
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
  local_c18 = 0;
  local_c14 = 0;
  local_c10 = 0;
  local_c0c = 0;
  local_c08 = 0;
  local_c04 = 0;
  local_c00 = 0;
  local_bfc = 0;
  local_bb8 = 0;
  local_bc8 = 0;
  local_bbc = 0;
  local_ba0 = 0;
  local_a90 = 0;
  local_a8c = 0;
  local_a88 = 0;
  local_a70 = 0;
  uStack_a7c = 0;
  local_a84 = 0;
  local_a74 = 0;
  local_a68 = 0x101;
  local_a66 = 0;
  local_a64 = 0;
  local_a60 = 0;
  local_a00 = 0;
  local_9f8 = 0;
  local_998 = 0;
  local_988 = 0;
  local_984 = 0;
  local_980 = 0;
  local_97c = 0;
  local_978 = 0;
  local_974 = 0;
  local_970 = 0;
  local_96c = 0;
  local_968 = 0;
  local_964 = 0;
  local_98c = 0;
  local_990 = 0;
  local_1040 = PTR_vtable_0099e100 + 0x20;
  local_960 = 0;
  local_958 = 0;
  local_940 = '\0';
  local_938 = 0;
  local_934 = 0;
  local_930 = 0;
  local_92c = 0;
  local_928 = 0;
  local_910 = '\0';
                    /* try { // try from 007b7268 to 007b727b has its CatchHandler @ 007b7454 */
  facebook::react::DCDVisualEffectViewProps::DCDVisualEffectViewProps
            (aDStack_908,(PropsParserContext *)local_1050,(DCDVisualEffectViewProps *)&local_1040,
             (RawProps *)&local_118);
  if ((local_1d8 != '\0') && ((local_1f0 & 1) != 0)) {
    operator_delete(local_1e0);
  }
  if ((local_208 != '\0') && ((local_220 & 1) != 0)) {
    operator_delete(local_210);
  }
  puVar5 = PTR_PTR_0099e108;
  FUN_0078917c(aDStack_908,PTR_PTR_0099e108 + 8);
  if ((local_910 != '\0') && ((local_928 & 1) != 0)) {
    operator_delete(local_918);
  }
  if ((local_940 != '\0') && ((local_958 & 1) != 0)) {
    operator_delete(local_948);
  }
  FUN_0078917c(&local_1040,puVar5 + 8);
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
                    /* try { // try from 007b73e8 to 007b73f3 has its CatchHandler @ 007b7458 */
        (*(code *)(&PTR_FUN_0097fbf8)[*(uint *)((long)pvVar3 + -8)])
                  (&local_1040,(void *)((long)pvVar3 + -0x38));
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


// ===== 007b745c  FUN_007b745c =====

void FUN_007b745c(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 007b7480  FUN_007b7480 =====

undefined * FUN_007b7480(void)

{
  return PTR_DCDVisualEffectViewComponentName_0099e0f8;
}


// ===== 007b748c  FUN_007b748c =====

undefined * FUN_007b748c(void)

{
  return PTR_DCDVisualEffectViewComponentName_0099e0f8;
}


// ===== 007b7498  FUN_007b7498 =====

undefined8 FUN_007b7498(void)

{
  return 0x61;
}


// ===== 007b74a0  FUN_007b74a0 =====

void FUN_007b74a0(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_007b7c90(&local_60,&uStack_49,param_3,param_4,&local_64);
                    /* try { // try from 007b7508 to 007b750f has its CatchHandler @ 007b7540 */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b7568  FUN_007b7568 =====

void FUN_007b7568(undefined8 *param_1,long *param_2,shared_ptr *param_3,undefined8 param_4)

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
  FUN_007b7f44(&local_60,&local_70);
                    /* try { // try from 007b75b4 to 007b75bf has its CatchHandler @ 007b766c */
  (**(code **)(*local_60 + 0x10))(local_60,param_3,param_4);
  local_70 = local_60;
  local_68 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    FUN_00757d00(1,plStack_58 + 1);
  }
                    /* try { // try from 007b75d8 to 007b75e7 has its CatchHandler @ 007b765c */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_70);
  plVar2 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 007b7624 to 007b762b has its CatchHandler @ 007b766c */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = plStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b7694  FUN_007b7694 =====

void FUN_007b7694(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x007b76a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 007b76a8  FUN_007b76a8 =====

void FUN_007b76a8(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32DCDVisualEffectViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24DCDVisualEffectViewPropsENS0_31DCDVisualEffectViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de50
         & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32DCDVisualEffectViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24DCDVisualEffectViewPropsENS0_31DCDVisualEffectViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de50
                                   ), iVar7 != 0)) {
                    /* try { // try from 007b7974 to 007b7983 has its CatchHandler @ 007b79b0 */
      FUN_007b83bc(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32DCDVisualEffectViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24DCDVisualEffectViewPropsENS0_31DCDVisualEffectViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de48
                   ,adStack_d0);
      __cxa_atexit(FUN_007b836c,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32DCDVisualEffectViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24DCDVisualEffectViewPropsENS0_31DCDVisualEffectViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de48
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32DCDVisualEffectViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24DCDVisualEffectViewPropsENS0_31DCDVisualEffectViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de50
                         );
    }
    lVar10 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32DCDVisualEffectViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24DCDVisualEffectViewPropsENS0_31DCDVisualEffectViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de48
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32DCDVisualEffectViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24DCDVisualEffectViewPropsENS0_31DCDVisualEffectViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de48
    ;
    param_1[1] = lVar10;
    if (lVar10 != 0) {
      FUN_00757d00(1,lVar10 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    FUN_007b8048(&local_f0,param_3,param_5,param_4);
                    /* try { // try from 007b7750 to 007b7763 has its CatchHandler @ 007b79e4 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if (((uVar8 & 1) == 0) ||
       ((uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar8 & 1) == 0 ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enablePropsUpdateReconciliationAndroid(), (uVar8 & 1) == 0)))) {
LAB_007b778c:
      local_100 = local_f0;
      local_f8 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        FUN_00757d00(1,plStack_e8 + 1);
      }
                    /* try { // try from 007b77a4 to 007b77b3 has its CatchHandler @ 007b79d4 */
      FUN_007b8194(&local_100,param_5,param_4);
      plVar4 = local_f8;
      if ((local_f8 != (long *)0x0) &&
         (lVar10 = FUN_00757990(0xffffffffffffffff,local_f8 + 1), lVar10 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 007b7774 to 007b777b has its CatchHandler @ 007b79c4 */
      pcVar9 = (char *)(**(code **)(*local_f0 + 0x10))();
      iVar7 = strcmp(PTR_DCDVisualEffectViewComponentName_0099e0f8,pcVar9);
      if (iVar7 != 0) goto LAB_007b778c;
      bVar3 = false;
    }
                    /* try { // try from 007b77e8 to 007b77eb has its CatchHandler @ 007b79e4 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar8 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 007b77f8 to 007b7813 has its CatchHandler @ 007b79d0 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(local_f0 + 4));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_f0;
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 007b7954 to 007b7963 has its CatchHandler @ 007b79c8 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_007b7a30;
      }
      for (; local_f0 = plVar4, plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 007b7934 to 007b7943 has its CatchHandler @ 007b79f0 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_007b7a30;
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
                    /* try { // try from 007b7894 to 007b789f has its CatchHandler @ 007b79f8 */
        folly::dynamic::dynamic(adStack_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 007b78a4 to 007b78bb has its CatchHandler @ 007b79fc */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (plVar4,param_3,uVar1,pcVar9,adStack_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 007b78cc to 007b78d7 has its CatchHandler @ 007b79ec */
          (*(code *)(&PTR_FUN_0097fbf8)[local_a0])(&uStack_d1,adStack_d0);
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
LAB_007b7a30:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b7a34  FUN_007b7a34 =====

void FUN_007b7a34(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 007b7a3c  FUN_007b7a3c =====

void FUN_007b7a3c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 007b7a44  FUN_007b7a44 =====

void FUN_007b7a44(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined1 auStack_80 [8];
  long *local_78;
  long *local_70;
  long *local_68;
  undefined1 uStack_59;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_0078a610(auStack_80,&uStack_59,param_3 + 8,param_3 + 4);
                    /* try { // try from 007b7a8c to 007b7a93 has its CatchHandler @ 007b7c14 */
  plVar4 = (long *)operator_new(0x68);
  plVar1 = plVar4 + 3;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_00984608;
                    /* try { // try from 007b7aac to 007b7abb has its CatchHandler @ 007b7bfc */
  FUN_007b869c(plVar1,auStack_80,param_2 + 8);
  local_70 = plVar1;
  local_68 = plVar4;
  if ((local_78 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_78 + 1), lVar5 == 0)) {
    (**(code **)(*local_78 + 0x10))(local_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 007b7af0 to 007b7af7 has its CatchHandler @ 007b7bec */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  puVar2 = puVar6 + 4;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_0097fff0;
                    /* try { // try from 007b7b10 to 007b7b27 has its CatchHandler @ 007b7bd4 */
  FUN_007b889c(puVar2,param_3,&local_70,param_2 + 8,param_2);
  plVar1 = local_70;
  *param_1 = (long)puVar2;
  param_1[1] = (long)puVar6;
  local_90 = puVar2;
  local_88 = puVar6;
  FUN_00757d00(1,puVar6 + 2);
                    /* try { // try from 007b7b40 to 007b7b4b has its CatchHandler @ 007b7bb4 */
  facebook::react::EventEmitter::facebook::react::EventEmitter::setShadowNodeFamily
            (plVar1,&local_90);
  if (local_88 != (undefined8 *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar1 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar5 == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b7c3c  FUN_007b7c3c =====

void FUN_007b7c3c(void)

{
  return;
}


// ===== 007b7c40  FUN_007b7c40 =====

void FUN_007b7c40(long param_1)

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


// ===== 007b7c90  FUN_007b7c90 =====

void FUN_007b7c90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  *puVar6 = &PTR_FUN_00984450;
                    /* try { // try from 007b7cd8 to 007b7ce7 has its CatchHandler @ 007b7d80 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4,uVar8);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_009844a0;
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


// ===== 007b7d9c  FUN_007b7d9c =====

void FUN_007b7d9c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00984450;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007b7dac  FUN_007b7dac =====

void FUN_007b7dac(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00984450;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007b7ddc  FUN_007b7ddc =====

void FUN_007b7ddc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007b7de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 007b7de8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007b7dec  FUN_007b7dec =====

void FUN_007b7dec(long *param_1)

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


// ===== 007b7eac  FUN_007b7eac =====

void FUN_007b7eac(long param_1)

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


// ===== 007b7f14  FUN_007b7f14 =====

bool FUN_007b7f14(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 007b7f2c  FUN_007b7f2c =====

bool FUN_007b7f2c(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 007b7f44  FUN_007b7f44 =====

void FUN_007b7f44(undefined8 *param_1,undefined8 param_2,ShadowNode *param_3,
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
  *puVar6 = &PTR_FUN_00984450;
                    /* try { // try from 007b7f84 to 007b7f93 has its CatchHandler @ 007b802c */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_009844a0;
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


// ===== 007b8048  FUN_007b8048 =====

void FUN_007b8048(undefined8 *param_1,PropsParserContext *param_2,RawProps *param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  DCDVisualEffectViewProps *pDVar4;
  undefined1 uStack_59;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pDVar4 = (DCDVisualEffectViewProps *)*param_4;
  if (pDVar4 == (DCDVisualEffectViewProps *)0x0) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32DCDVisualEffectViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24DCDVisualEffectViewPropsENS0_31DCDVisualEffectViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de50
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32DCDVisualEffectViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24DCDVisualEffectViewPropsENS0_31DCDVisualEffectViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de50
                                   ), iVar2 != 0)) {
                    /* try { // try from 007b8114 to 007b8123 has its CatchHandler @ 007b8150 */
      FUN_007b83bc(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32DCDVisualEffectViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24DCDVisualEffectViewPropsENS0_31DCDVisualEffectViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de48
                   ,&uStack_59);
      __cxa_atexit(FUN_007b836c,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32DCDVisualEffectViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24DCDVisualEffectViewPropsENS0_31DCDVisualEffectViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de48
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32DCDVisualEffectViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24DCDVisualEffectViewPropsENS0_31DCDVisualEffectViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de50
                         );
    }
    pDVar4 = *(DCDVisualEffectViewProps **)
              PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32DCDVisualEffectViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24DCDVisualEffectViewPropsENS0_31DCDVisualEffectViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de48
    ;
  }
  puVar3 = (undefined8 *)operator_new(0x750);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_009845b8;
                    /* try { // try from 007b80c0 to 007b80d3 has its CatchHandler @ 007b8164 */
  facebook::react::DCDVisualEffectViewProps::DCDVisualEffectViewProps
            ((DCDVisualEffectViewProps *)(puVar3 + 3),param_2,pDVar4,param_3);
  *param_1 = (DCDVisualEffectViewProps *)(puVar3 + 3);
  param_1[1] = puVar3;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b8194  FUN_007b8194 =====

void FUN_007b8194(undefined8 *param_1,undefined8 param_2,long *param_3)

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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32DCDVisualEffectViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24DCDVisualEffectViewPropsENS0_31DCDVisualEffectViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de50
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32DCDVisualEffectViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24DCDVisualEffectViewPropsENS0_31DCDVisualEffectViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de50
                                   ), iVar2 != 0)) {
                    /* try { // try from 007b8278 to 007b8287 has its CatchHandler @ 007b82b4 */
      FUN_007b83bc(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32DCDVisualEffectViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24DCDVisualEffectViewPropsENS0_31DCDVisualEffectViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de48
                   ,local_70);
      __cxa_atexit(FUN_007b836c,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32DCDVisualEffectViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24DCDVisualEffectViewPropsENS0_31DCDVisualEffectViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de48
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32DCDVisualEffectViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24DCDVisualEffectViewPropsENS0_31DCDVisualEffectViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de50
                         );
    }
    local_50 = (long *)0x0;
                    /* try { // try from 007b8204 to 007b8217 has its CatchHandler @ 007b82c8 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*(undefined8 *)
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32DCDVisualEffectViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24DCDVisualEffectViewPropsENS0_31DCDVisualEffectViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de48
               ,param_2,local_70);
  }
  else {
    local_50 = (long *)0x0;
                    /* try { // try from 007b81c8 to 007b81df has its CatchHandler @ 007b82cc */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*param_3,param_2,local_70);
  }
  if (local_50 == local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007b8244;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007b8244:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b831c  FUN_007b831c =====

void FUN_007b831c(long param_1)

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


// ===== 007b836c  FUN_007b836c =====

void FUN_007b836c(long param_1)

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


// ===== 007b83bc  FUN_007b83bc =====

void FUN_007b83bc(undefined8 *param_1)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x750);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00984568;
  memset(__s,0,0x738);
                    /* try { // try from 007b8400 to 007b8413 has its CatchHandler @ 007b84a0 */
  FUN_00788b10(__s,PTR_PTR_0099e108 + 0x10);
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
  puVar1 = PTR_vtable_0099e100;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *(undefined4 *)(puVar2 + 0xdf) = 0;
  puVar2[3] = puVar1 + 0x20;
  *(undefined1 *)(puVar2 + 0xe0) = 0;
  *(undefined1 *)(puVar2 + 0xe3) = 0;
  *(undefined1 *)(puVar2 + 0xe4) = 0;
  *(undefined1 *)((long)puVar2 + 0x724) = 0;
  *(undefined1 *)(puVar2 + 0xe5) = 0;
  *(undefined1 *)((long)puVar2 + 0x72c) = 0;
  *(undefined1 *)(puVar2 + 0xe6) = 0;
  *(undefined1 *)(puVar2 + 0xe9) = 0;
  *param_1 = __s;
  param_1[1] = puVar2;
  return;
}


// ===== 007b84bc  FUN_007b84bc =====

void FUN_007b84bc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00984568;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007b84cc  FUN_007b84cc =====

void FUN_007b84cc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00984568;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007b84fc  FUN_007b84fc =====

void FUN_007b84fc(long param_1)

{
  if ((*(char *)(param_1 + 0x748) != '\0') && ((*(byte *)(param_1 + 0x730) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x740));
  }
  if ((*(char *)(param_1 + 0x718) != '\0') && ((*(byte *)(param_1 + 0x700) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x710));
  }
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e108 + 8);
  return;
}


// ===== 007b8558  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007b855c  FUN_007b855c =====

void FUN_007b855c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009845b8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007b856c  FUN_007b856c =====

void FUN_007b856c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009845b8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007b859c  FUN_007b859c =====

void FUN_007b859c(long param_1)

{
  if ((*(char *)(param_1 + 0x748) != '\0') && ((*(byte *)(param_1 + 0x730) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x740));
  }
  if ((*(char *)(param_1 + 0x718) != '\0') && ((*(byte *)(param_1 + 0x700) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x710));
  }
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e108 + 8);
  return;
}


// ===== 007b85f8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007b85fc  FUN_007b85fc =====

void FUN_007b85fc(long param_1)

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


// ===== 007b864c  FUN_007b864c =====

void FUN_007b864c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00984608;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007b865c  FUN_007b865c =====

void FUN_007b865c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00984608;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007b868c  FUN_007b868c =====

void FUN_007b868c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007b8694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 007b8698  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007b869c  FUN_007b869c =====

EventEmitter * FUN_007b869c(EventEmitter *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
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
                    /* try { // try from 007b86e4 to 007b86f3 has its CatchHandler @ 007b87b8 */
  facebook::react::EventEmitter::EventEmitter(param_1,&local_50,&local_60);
  *(undefined ***)param_1 = &PTR_FUN_0097ff10;
                    /* try { // try from 007b8700 to 007b8707 has its CatchHandler @ 007b87a8 */
  puVar3 = (undefined8 *)operator_new(0x58);
  *puVar3 = &PTR_FUN_0097ff30;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[4] = 0;
  puVar3[3] = 0;
  *(undefined8 **)(param_1 + 0x40) = puVar3 + 3;
  *(undefined8 **)(param_1 + 0x48) = puVar3;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[8] = 0;
  puVar3[7] = 0;
  *(undefined8 *)((long)puVar3 + 0x4c) = 0;
  *(undefined8 *)((long)puVar3 + 0x44) = 0;
  *(undefined ***)param_1 = &PTR_FUN_00984658;
  if (local_58 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = plStack_48;
  if ((plStack_48 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,plStack_48 + 1), lVar4 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b87ec  FUN_007b87ec =====

void FUN_007b87ec(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_0097ff10;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_0097ff80;
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


// ===== 007b889c  FUN_007b889c =====

ShadowNodeFamily *
FUN_007b889c(ShadowNodeFamily *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
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
                    /* try { // try from 007b8900 to 007b8917 has its CatchHandler @ 007b8980 */
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


// ===== 007b89b8  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_38DCDVisualEffectViewTargetComponentNameEEEENS0_30DCDVisualEffectViewTargetPropsENS0_37DCDVisualEffectViewTargetEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_38DCDVisualEffectViewTargetComponentNameEEEENS0_30DCDVisualEffectViewTargetPropsENS0_37DCDVisualEffectViewTargetEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_007b8a0c(&local_30);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b8a0c  FUN_007b8a0c =====

void FUN_007b8a0c(undefined8 *param_1,ComponentDescriptorParameters *param_2)

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
                    /* try { // try from 007b8a50 to 007b8a5b has its CatchHandler @ 007b8ac8 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_90);
  *(undefined ***)this = &PTR_FUN_00984690;
  FUN_007b8af8(this + 0x38);
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


// ===== 007b8af8  FUN_007b8af8 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007b8af8(undefined8 param_1)

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
                    /* try { // try from 007b8b7c to 007b8b87 has its CatchHandler @ 007b917c */
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
  local_fa0 = PTR_construction_vtable_0099e270 + 0x20;
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
  puVar6 = PTR_PTR_0099e120;
  puVar5 = PTR_vtable_0099e118;
  local_f4c = 0;
  local_ef1 = 0;
  uStack_a10 = _UNK_00470a7c;
  local_a18 = _DAT_00470a74;
  local_f4b = _s__00375408;
  uStack_b08 = _UNK_00371598;
  local_b10 = _DAT_00371590;
  uStack_a20 = _UNK_00470a6c;
  local_a28 = _DAT_00470a64;
  local_e34 = 0;
  uStack_a30 = _UNK_00470a5c;
  local_a38 = _DAT_00470a54;
  uStack_a40 = _UNK_00470a4c;
  local_a48 = _DAT_00470a44;
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
  local_fa0 = PTR_vtable_0099e118 + 0x20;
  local_70 = (long *)0x0;
                    /* try { // try from 007b8f70 to 007b8f97 has its CatchHandler @ 007b9140 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)local_8c0,(PropsParserContext *)(PTR_PTR_0099e120 + 8),
             (HostPlatformViewProps *)local_fb0,(RawProps *)&local_fa0,(function *)&local_120);
  if (local_70 == &local_90) {
    lVar7 = 4;
    plVar8 = &local_90;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007b8fc4;
    lVar7 = 5;
    plVar8 = local_70;
  }
  (**(code **)(*plVar8 + lVar7 * 8))();
LAB_007b8fc4:
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
                    /* try { // try from 007b90d0 to 007b90db has its CatchHandler @ 007b9188 */
        (*(code *)(&PTR_FUN_0097fbf8)[*(uint *)((long)pvVar3 + -8)])
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


// ===== 007b918c  FUN_007b918c =====

void FUN_007b918c(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 007b91b0  FUN_007b91b0 =====

undefined * FUN_007b91b0(void)

{
  return PTR_DCDVisualEffectViewTargetComponentName_0099e110;
}


// ===== 007b91bc  FUN_007b91bc =====

undefined * FUN_007b91bc(void)

{
  return PTR_DCDVisualEffectViewTargetComponentName_0099e110;
}


// ===== 007b91c8  FUN_007b91c8 =====

undefined8 FUN_007b91c8(void)

{
  return 0x61;
}


// ===== 007b91d0  FUN_007b91d0 =====

void FUN_007b91d0(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_007b99c0(&local_60,&uStack_49,param_3,param_4,&local_64);
                    /* try { // try from 007b9238 to 007b923f has its CatchHandler @ 007b9270 */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b9298  FUN_007b9298 =====

void FUN_007b9298(undefined8 *param_1,long *param_2,shared_ptr *param_3,undefined8 param_4)

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
  FUN_007b9c74(&local_60,&local_70);
                    /* try { // try from 007b92e4 to 007b92ef has its CatchHandler @ 007b939c */
  (**(code **)(*local_60 + 0x10))(local_60,param_3,param_4);
  local_70 = local_60;
  local_68 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    FUN_00757d00(1,plStack_58 + 1);
  }
                    /* try { // try from 007b9308 to 007b9317 has its CatchHandler @ 007b938c */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_70);
  plVar2 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 007b9354 to 007b935b has its CatchHandler @ 007b939c */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = plStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b93c4  FUN_007b93c4 =====

void FUN_007b93c4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x007b93d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 007b93d8  FUN_007b93d8 =====

void FUN_007b93d8(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38DCDVisualEffectViewTargetComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30DCDVisualEffectViewTargetPropsENS0_37DCDVisualEffectViewTargetEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de60
         & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38DCDVisualEffectViewTargetComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30DCDVisualEffectViewTargetPropsENS0_37DCDVisualEffectViewTargetEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de60
                                   ), iVar7 != 0)) {
                    /* try { // try from 007b96a4 to 007b96b3 has its CatchHandler @ 007b96e0 */
      FUN_007ba170(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38DCDVisualEffectViewTargetComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30DCDVisualEffectViewTargetPropsENS0_37DCDVisualEffectViewTargetEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de58
                   ,adStack_d0);
      __cxa_atexit(FUN_007ba120,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38DCDVisualEffectViewTargetComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30DCDVisualEffectViewTargetPropsENS0_37DCDVisualEffectViewTargetEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de58
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38DCDVisualEffectViewTargetComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30DCDVisualEffectViewTargetPropsENS0_37DCDVisualEffectViewTargetEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de60
                         );
    }
    lVar10 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38DCDVisualEffectViewTargetComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30DCDVisualEffectViewTargetPropsENS0_37DCDVisualEffectViewTargetEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de58
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38DCDVisualEffectViewTargetComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30DCDVisualEffectViewTargetPropsENS0_37DCDVisualEffectViewTargetEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de58
    ;
    param_1[1] = lVar10;
    if (lVar10 != 0) {
      FUN_00757d00(1,lVar10 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    FUN_007b9d78(&local_f0,param_3,param_5,param_4);
                    /* try { // try from 007b9480 to 007b9493 has its CatchHandler @ 007b9714 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if (((uVar8 & 1) == 0) ||
       ((uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar8 & 1) == 0 ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enablePropsUpdateReconciliationAndroid(), (uVar8 & 1) == 0)))) {
LAB_007b94bc:
      local_100 = local_f0;
      local_f8 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        FUN_00757d00(1,plStack_e8 + 1);
      }
                    /* try { // try from 007b94d4 to 007b94e3 has its CatchHandler @ 007b9704 */
      FUN_007b9f48(&local_100,param_5,param_4);
      plVar4 = local_f8;
      if ((local_f8 != (long *)0x0) &&
         (lVar10 = FUN_00757990(0xffffffffffffffff,local_f8 + 1), lVar10 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 007b94a4 to 007b94ab has its CatchHandler @ 007b96f4 */
      pcVar9 = (char *)(**(code **)(*local_f0 + 0x10))();
      iVar7 = strcmp(PTR_DCDVisualEffectViewTargetComponentName_0099e110,pcVar9);
      if (iVar7 != 0) goto LAB_007b94bc;
      bVar3 = false;
    }
                    /* try { // try from 007b9518 to 007b951b has its CatchHandler @ 007b9714 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar8 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 007b9528 to 007b9543 has its CatchHandler @ 007b9700 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(local_f0 + 4));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_f0;
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 007b9684 to 007b9693 has its CatchHandler @ 007b96f8 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_007b9760;
      }
      for (; local_f0 = plVar4, plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 007b9664 to 007b9673 has its CatchHandler @ 007b9720 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_007b9760;
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
                    /* try { // try from 007b95c4 to 007b95cf has its CatchHandler @ 007b9728 */
        folly::dynamic::dynamic(adStack_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 007b95d4 to 007b95eb has its CatchHandler @ 007b972c */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (plVar4,param_3,uVar1,pcVar9,adStack_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 007b95fc to 007b9607 has its CatchHandler @ 007b971c */
          (*(code *)(&PTR_FUN_0097fbf8)[local_a0])(&uStack_d1,adStack_d0);
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
LAB_007b9760:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b9764  FUN_007b9764 =====

void FUN_007b9764(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 007b976c  FUN_007b976c =====

void FUN_007b976c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 007b9774  FUN_007b9774 =====

void FUN_007b9774(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined1 auStack_80 [8];
  long *local_78;
  long *local_70;
  long *local_68;
  undefined1 uStack_59;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_0078a610(auStack_80,&uStack_59,param_3 + 8,param_3 + 4);
                    /* try { // try from 007b97bc to 007b97c3 has its CatchHandler @ 007b9944 */
  plVar4 = (long *)operator_new(0x68);
  plVar1 = plVar4 + 3;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_009848d8;
                    /* try { // try from 007b97dc to 007b97eb has its CatchHandler @ 007b992c */
  FUN_007ba39c(plVar1,auStack_80,param_2 + 8);
  local_70 = plVar1;
  local_68 = plVar4;
  if ((local_78 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_78 + 1), lVar5 == 0)) {
    (**(code **)(*local_78 + 0x10))(local_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 007b9820 to 007b9827 has its CatchHandler @ 007b991c */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  puVar2 = puVar6 + 4;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_0097fff0;
                    /* try { // try from 007b9840 to 007b9857 has its CatchHandler @ 007b9904 */
  FUN_007ba59c(puVar2,param_3,&local_70,param_2 + 8,param_2);
  plVar1 = local_70;
  *param_1 = (long)puVar2;
  param_1[1] = (long)puVar6;
  local_90 = puVar2;
  local_88 = puVar6;
  FUN_00757d00(1,puVar6 + 2);
                    /* try { // try from 007b9870 to 007b987b has its CatchHandler @ 007b98e4 */
  facebook::react::EventEmitter::facebook::react::EventEmitter::setShadowNodeFamily
            (plVar1,&local_90);
  if (local_88 != (undefined8 *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar1 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar5 == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b996c  FUN_007b996c =====

void FUN_007b996c(void)

{
  return;
}


// ===== 007b9970  FUN_007b9970 =====

void FUN_007b9970(long param_1)

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


// ===== 007b99c0  FUN_007b99c0 =====

void FUN_007b99c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  *puVar6 = &PTR_FUN_00984720;
                    /* try { // try from 007b9a08 to 007b9a17 has its CatchHandler @ 007b9ab0 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4,uVar8);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_00984770;
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


// ===== 007b9acc  FUN_007b9acc =====

void FUN_007b9acc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00984720;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007b9adc  FUN_007b9adc =====

void FUN_007b9adc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00984720;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007b9b0c  FUN_007b9b0c =====

void FUN_007b9b0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007b9b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 007b9b18  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007b9b1c  FUN_007b9b1c =====

void FUN_007b9b1c(long *param_1)

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


// ===== 007b9bdc  FUN_007b9bdc =====

void FUN_007b9bdc(long param_1)

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


// ===== 007b9c44  FUN_007b9c44 =====

bool FUN_007b9c44(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 007b9c5c  FUN_007b9c5c =====

bool FUN_007b9c5c(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 007b9c74  FUN_007b9c74 =====

void FUN_007b9c74(undefined8 *param_1,undefined8 param_2,ShadowNode *param_3,
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
  *puVar6 = &PTR_FUN_00984720;
                    /* try { // try from 007b9cb4 to 007b9cc3 has its CatchHandler @ 007b9d5c */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_00984770;
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


// ===== 007b9d78  FUN_007b9d78 =====

void FUN_007b9d78(undefined8 *param_1,HostPlatformViewProps *param_2,function *param_3,long *param_4
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38DCDVisualEffectViewTargetComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30DCDVisualEffectViewTargetPropsENS0_37DCDVisualEffectViewTargetEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de60
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38DCDVisualEffectViewTargetComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30DCDVisualEffectViewTargetPropsENS0_37DCDVisualEffectViewTargetEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de60
                                   ), iVar3 != 0)) {
                    /* try { // try from 007b9e98 to 007b9ea7 has its CatchHandler @ 007b9ed4 */
      FUN_007ba170(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38DCDVisualEffectViewTargetComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30DCDVisualEffectViewTargetPropsENS0_37DCDVisualEffectViewTargetEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de58
                   ,local_90);
      __cxa_atexit(FUN_007ba120,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38DCDVisualEffectViewTargetComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30DCDVisualEffectViewTargetPropsENS0_37DCDVisualEffectViewTargetEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de58
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38DCDVisualEffectViewTargetComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30DCDVisualEffectViewTargetPropsENS0_37DCDVisualEffectViewTargetEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de60
                         );
    }
    pRVar7 = *(RawProps **)
              PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38DCDVisualEffectViewTargetComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30DCDVisualEffectViewTargetPropsENS0_37DCDVisualEffectViewTargetEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de58
    ;
  }
  puVar4 = (undefined8 *)operator_new(0x6f8);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_00984888;
  local_70 = (long *)0x0;
                    /* try { // try from 007b9df4 to 007b9e1b has its CatchHandler @ 007b9ee8 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)(puVar4 + 3),(PropsParserContext *)(PTR_PTR_0099e120 + 8),
             param_2,pRVar7,param_3);
  if (local_70 == local_90) {
    lVar6 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007b9e48;
    lVar6 = 5;
    plVar5 = local_70;
  }
  (**(code **)(*plVar5 + lVar6 * 8))();
LAB_007b9e48:
  puVar2 = PTR_vtable_0099e118;
  *param_1 = (HostPlatformViewProps *)(puVar4 + 3);
  param_1[1] = puVar4;
  puVar4[3] = puVar2 + 0x20;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b9f48  FUN_007b9f48 =====

void FUN_007b9f48(undefined8 *param_1,undefined8 param_2,long *param_3)

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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38DCDVisualEffectViewTargetComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30DCDVisualEffectViewTargetPropsENS0_37DCDVisualEffectViewTargetEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de60
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38DCDVisualEffectViewTargetComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30DCDVisualEffectViewTargetPropsENS0_37DCDVisualEffectViewTargetEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de60
                                   ), iVar2 != 0)) {
                    /* try { // try from 007ba02c to 007ba03b has its CatchHandler @ 007ba068 */
      FUN_007ba170(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38DCDVisualEffectViewTargetComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30DCDVisualEffectViewTargetPropsENS0_37DCDVisualEffectViewTargetEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de58
                   ,local_70);
      __cxa_atexit(FUN_007ba120,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38DCDVisualEffectViewTargetComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30DCDVisualEffectViewTargetPropsENS0_37DCDVisualEffectViewTargetEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de58
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38DCDVisualEffectViewTargetComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30DCDVisualEffectViewTargetPropsENS0_37DCDVisualEffectViewTargetEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de60
                         );
    }
    local_50 = (long *)0x0;
                    /* try { // try from 007b9fb8 to 007b9fcb has its CatchHandler @ 007ba07c */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*(undefined8 *)
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38DCDVisualEffectViewTargetComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30DCDVisualEffectViewTargetPropsENS0_37DCDVisualEffectViewTargetEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de58
               ,param_2,local_70);
  }
  else {
    local_50 = (long *)0x0;
                    /* try { // try from 007b9f7c to 007b9f93 has its CatchHandler @ 007ba080 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*param_3,param_2,local_70);
  }
  if (local_50 == local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007b9ff8;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007b9ff8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ba0d0  FUN_007ba0d0 =====

void FUN_007ba0d0(long param_1)

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


// ===== 007ba120  FUN_007ba120 =====

void FUN_007ba120(long param_1)

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


// ===== 007ba170  FUN_007ba170 =====

void FUN_007ba170(undefined8 *param_1)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x6f8);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00984838;
  memset(__s,0,0x6e0);
                    /* try { // try from 007ba1b4 to 007ba1c7 has its CatchHandler @ 007ba230 */
  FUN_00788b10(__s,PTR_PTR_0099e120 + 0x10);
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
  puVar1 = PTR_vtable_0099e118;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *param_1 = __s;
  param_1[1] = puVar2;
  puVar2[3] = puVar1 + 0x20;
  return;
}


// ===== 007ba24c  FUN_007ba24c =====

void FUN_007ba24c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00984838;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007ba25c  FUN_007ba25c =====

void FUN_007ba25c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00984838;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007ba28c  FUN_007ba28c =====

void FUN_007ba28c(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e120 + 8);
  return;
}


// ===== 007ba2a0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007ba2a4  FUN_007ba2a4 =====

void FUN_007ba2a4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00984888;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007ba2b4  FUN_007ba2b4 =====

void FUN_007ba2b4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00984888;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007ba2e4  FUN_007ba2e4 =====

void FUN_007ba2e4(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e120 + 8);
  return;
}


// ===== 007ba2f8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007ba2fc  FUN_007ba2fc =====

void FUN_007ba2fc(long param_1)

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


// ===== 007ba34c  FUN_007ba34c =====

void FUN_007ba34c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009848d8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007ba35c  FUN_007ba35c =====

void FUN_007ba35c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009848d8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007ba38c  FUN_007ba38c =====

void FUN_007ba38c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007ba394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 007ba398  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007ba39c  FUN_007ba39c =====

EventEmitter * FUN_007ba39c(EventEmitter *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
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
                    /* try { // try from 007ba3e4 to 007ba3f3 has its CatchHandler @ 007ba4b8 */
  facebook::react::EventEmitter::EventEmitter(param_1,&local_50,&local_60);
  *(undefined ***)param_1 = &PTR_FUN_0097ff10;
                    /* try { // try from 007ba400 to 007ba407 has its CatchHandler @ 007ba4a8 */
  puVar3 = (undefined8 *)operator_new(0x58);
  *puVar3 = &PTR_FUN_0097ff30;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[4] = 0;
  puVar3[3] = 0;
  *(undefined8 **)(param_1 + 0x40) = puVar3 + 3;
  *(undefined8 **)(param_1 + 0x48) = puVar3;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[8] = 0;
  puVar3[7] = 0;
  *(undefined8 *)((long)puVar3 + 0x4c) = 0;
  *(undefined8 *)((long)puVar3 + 0x44) = 0;
  *(undefined ***)param_1 = &PTR_FUN_00984928;
  if (local_58 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = plStack_48;
  if ((plStack_48 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,plStack_48 + 1), lVar4 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ba4ec  FUN_007ba4ec =====

void FUN_007ba4ec(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_0097ff10;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_0097ff80;
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


// ===== 007ba59c  FUN_007ba59c =====

ShadowNodeFamily *
FUN_007ba59c(ShadowNodeFamily *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
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
                    /* try { // try from 007ba600 to 007ba617 has its CatchHandler @ 007ba680 */
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


// ===== 007ba6b8  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_33DCDZoomLayoutAndroidComponentNameEEEENS0_25DCDZoomLayoutAndroidPropsENS0_32DCDZoomLayoutAndroidEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_33DCDZoomLayoutAndroidComponentNameEEEENS0_25DCDZoomLayoutAndroidPropsENS0_32DCDZoomLayoutAndroidEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_007ba70c(&local_30);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ba70c  FUN_007ba70c =====

void FUN_007ba70c(undefined8 *param_1,ComponentDescriptorParameters *param_2)

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
                    /* try { // try from 007ba750 to 007ba75b has its CatchHandler @ 007ba7c8 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_90);
  *(undefined ***)this = &PTR_FUN_00984960;
  FUN_007ba7f8(this + 0x38);
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


// ===== 007ba7f8  FUN_007ba7f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007ba7f8(undefined8 param_1)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  undefined4 local_fd0 [2];
  undefined8 *local_fc8;
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
  undefined1 local_8e0;
  undefined1 local_8dc;
  undefined1 local_8d8;
  undefined1 local_8d4;
  undefined1 local_8d0;
  DCDZoomLayoutAndroidProps aDStack_8c8 [1784];
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
                    /* try { // try from 007ba880 to 007ba88b has its CatchHandler @ 007bae10 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1d0);
  local_120 = CONCAT44(local_120._4_4_,0x3f800000);
  local_fd0[0] = 0xffffffff;
  uStack_128 = 0;
  local_130 = (void *)0x0;
  uStack_138 = 0;
  local_140 = (void *)0x0;
  local_fc8 = &local_1d0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_118,param_1);
  memset(local_fa0,0,0x6d8);
  local_88[0] = 5;
  local_70 = 0;
  local_fc0 = PTR_construction_vtable_0099e278 + 0x20;
  local_fa0[0] = 5;
  uStack_fa8 = 0;
  local_fb0 = 0;
  uStack_fb8 = 0;
  local_68 = 0;
  uStack_60 = 0x3f800000;
  uStack_78 = 0;
  local_80 = 0;
  uStack_f90 = 0;
  local_f98 = 0;
  uStack_f80 = 0;
  local_f88 = 0;
  local_f78 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_88);
  local_f6c = 0;
  local_f11 = 0;
  uStack_a30 = _UNK_00470a7c;
  local_a38 = _DAT_00470a74;
  local_f6b = _s__00375408;
  uStack_b28 = _UNK_00371598;
  local_b30 = _DAT_00371590;
  uStack_a40 = _UNK_00470a6c;
  local_a48 = _DAT_00470a64;
  local_e54 = 0;
  uStack_a50 = _UNK_00470a5c;
  local_a58 = _DAT_00470a54;
  uStack_a60 = _UNK_00470a4c;
  local_a68 = _DAT_00470a44;
  uStack_a18 = 0;
  local_e4c = 0;
  uStack_e80 = 0;
  local_e88 = 0;
  uStack_e6c = 0;
  uStack_e90 = 0;
  local_e98 = 0;
  uStack_cd0 = 0;
  local_cd8 = 0;
  local_f70 = 0x10410710;
  local_cbb = 0;
  local_f15 = 0x40004;
  local_cb6 = 0x23;
  uStack_e74 = 0;
  uStack_e70 = 0;
  uStack_e7c = 0;
  uStack_e78 = 0;
  uStack_e60 = 0;
  local_e68 = 0;
  local_c7c = 0x3f800000;
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
  uStack_b60 = 0;
  local_b68 = 0;
  uStack_b50 = 0;
  uStack_b58 = 0;
  uStack_b70 = 0;
  local_b78 = 0;
  uStack_d7f = 0;
  uStack_d80 = 0;
  local_b44 = 0;
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
  uStack_a20 = 0;
  uStack_a1a = 0;
  local_a28 = 0;
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
  local_cc8 = 0;
  local_cc0 = 0;
  local_cbc = 1;
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
  local_fc0 = PTR_vtable_0099e130 + 0x20;
  local_8e0 = 1;
  local_8dc = 0;
  local_8d8 = 0;
  local_8d4 = 0;
  local_8d0 = 0;
                    /* try { // try from 007bac84 to 007bac97 has its CatchHandler @ 007bae10 */
  facebook::react::DCDZoomLayoutAndroidProps::DCDZoomLayoutAndroidProps
            (aDStack_8c8,(PropsParserContext *)local_fd0,(DCDZoomLayoutAndroidProps *)&local_fc0,
             (RawProps *)&local_118);
  puVar5 = PTR_PTR_0099e138;
  FUN_0078917c(aDStack_8c8,PTR_PTR_0099e138 + 8);
  FUN_0078917c(&local_fc0,puVar5 + 8);
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
                    /* try { // try from 007bada4 to 007badaf has its CatchHandler @ 007bae14 */
        (*(code *)(&PTR_FUN_0097fbf8)[*(uint *)((long)pvVar3 + -8)])
                  (&local_fc0,(void *)((long)pvVar3 + -0x38));
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


// ===== 007bae18  FUN_007bae18 =====

void FUN_007bae18(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  long *plVar3;
  
  pvVar1 = (void *)param_1[0xd];
  *param_1 = &PTR_FUN_0097fc18;
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
  if ((plVar3 != (long *)0x0) && (lVar2 = FUN_00757990(0xffffffffffffffff,plVar3 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar3 = (long *)param_1[4];
  if ((plVar3 == (long *)0x0) || (lVar2 = FUN_00757990(0xffffffffffffffff,plVar3 + 1), lVar2 != 0))
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


// ===== 007baeec  FUN_007baeec =====

void FUN_007baeec(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 007baf10  FUN_007baf10 =====

undefined * FUN_007baf10(void)

{
  return PTR_DCDZoomLayoutAndroidComponentName_0099e128;
}


// ===== 007baf1c  FUN_007baf1c =====

undefined * FUN_007baf1c(void)

{
  return PTR_DCDZoomLayoutAndroidComponentName_0099e128;
}


// ===== 007baf28  FUN_007baf28 =====

undefined8 FUN_007baf28(void)

{
  return 0x61;
}


// ===== 007baf30  FUN_007baf30 =====

void FUN_007baf30(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_007bb720(&local_60,&uStack_49,param_3,param_4,&local_64);
                    /* try { // try from 007baf98 to 007baf9f has its CatchHandler @ 007bafd0 */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007baff8  FUN_007baff8 =====

void FUN_007baff8(undefined8 *param_1,long *param_2,shared_ptr *param_3,undefined8 param_4)

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
  FUN_007bba8c(&local_60,&local_70);
                    /* try { // try from 007bb044 to 007bb04f has its CatchHandler @ 007bb0fc */
  (**(code **)(*local_60 + 0x10))(local_60,param_3,param_4);
  local_70 = local_60;
  local_68 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    FUN_00757d00(1,plStack_58 + 1);
  }
                    /* try { // try from 007bb068 to 007bb077 has its CatchHandler @ 007bb0ec */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_70);
  plVar2 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 007bb0b4 to 007bb0bb has its CatchHandler @ 007bb0fc */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = plStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007bb124  FUN_007bb124 =====

void FUN_007bb124(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x007bb134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 007bb138  FUN_007bb138 =====

void FUN_007bb138(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33DCDZoomLayoutAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25DCDZoomLayoutAndroidPropsENS0_32DCDZoomLayoutAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de70
         & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33DCDZoomLayoutAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25DCDZoomLayoutAndroidPropsENS0_32DCDZoomLayoutAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de70
                                   ), iVar7 != 0)) {
                    /* try { // try from 007bb404 to 007bb413 has its CatchHandler @ 007bb440 */
      FUN_007bbf04(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33DCDZoomLayoutAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25DCDZoomLayoutAndroidPropsENS0_32DCDZoomLayoutAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de68
                   ,adStack_d0);
      __cxa_atexit(FUN_007bbeb4,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33DCDZoomLayoutAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25DCDZoomLayoutAndroidPropsENS0_32DCDZoomLayoutAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de68
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33DCDZoomLayoutAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25DCDZoomLayoutAndroidPropsENS0_32DCDZoomLayoutAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de70
                         );
    }
    lVar10 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33DCDZoomLayoutAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25DCDZoomLayoutAndroidPropsENS0_32DCDZoomLayoutAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de68
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33DCDZoomLayoutAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25DCDZoomLayoutAndroidPropsENS0_32DCDZoomLayoutAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de68
    ;
    param_1[1] = lVar10;
    if (lVar10 != 0) {
      FUN_00757d00(1,lVar10 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    FUN_007bbb90(&local_f0,param_3,param_5,param_4);
                    /* try { // try from 007bb1e0 to 007bb1f3 has its CatchHandler @ 007bb474 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if (((uVar8 & 1) == 0) ||
       ((uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar8 & 1) == 0 ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enablePropsUpdateReconciliationAndroid(), (uVar8 & 1) == 0)))) {
LAB_007bb21c:
      local_100 = local_f0;
      local_f8 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        FUN_00757d00(1,plStack_e8 + 1);
      }
                    /* try { // try from 007bb234 to 007bb243 has its CatchHandler @ 007bb464 */
      FUN_007bbcdc(&local_100,param_5,param_4);
      plVar4 = local_f8;
      if ((local_f8 != (long *)0x0) &&
         (lVar10 = FUN_00757990(0xffffffffffffffff,local_f8 + 1), lVar10 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 007bb204 to 007bb20b has its CatchHandler @ 007bb454 */
      pcVar9 = (char *)(**(code **)(*local_f0 + 0x10))();
      iVar7 = strcmp(PTR_DCDZoomLayoutAndroidComponentName_0099e128,pcVar9);
      if (iVar7 != 0) goto LAB_007bb21c;
      bVar3 = false;
    }
                    /* try { // try from 007bb278 to 007bb27b has its CatchHandler @ 007bb474 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar8 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 007bb288 to 007bb2a3 has its CatchHandler @ 007bb460 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(local_f0 + 4));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_f0;
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 007bb3e4 to 007bb3f3 has its CatchHandler @ 007bb458 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_007bb4c0;
      }
      for (; local_f0 = plVar4, plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 007bb3c4 to 007bb3d3 has its CatchHandler @ 007bb480 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_007bb4c0;
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
                    /* try { // try from 007bb324 to 007bb32f has its CatchHandler @ 007bb488 */
        folly::dynamic::dynamic(adStack_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 007bb334 to 007bb34b has its CatchHandler @ 007bb48c */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (plVar4,param_3,uVar1,pcVar9,adStack_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 007bb35c to 007bb367 has its CatchHandler @ 007bb47c */
          (*(code *)(&PTR_FUN_0097fbf8)[local_a0])(&uStack_d1,adStack_d0);
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
LAB_007bb4c0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007bb4c4  FUN_007bb4c4 =====

void FUN_007bb4c4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 007bb4cc  FUN_007bb4cc =====

void FUN_007bb4cc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 007bb4d4  FUN_007bb4d4 =====

void FUN_007bb4d4(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined1 auStack_80 [8];
  long *local_78;
  long *local_70;
  long *local_68;
  undefined1 uStack_59;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_0078a610(auStack_80,&uStack_59,param_3 + 8,param_3 + 4);
                    /* try { // try from 007bb51c to 007bb523 has its CatchHandler @ 007bb6a4 */
  plVar4 = (long *)operator_new(0x68);
  plVar1 = plVar4 + 3;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_00984ba8;
                    /* try { // try from 007bb53c to 007bb54b has its CatchHandler @ 007bb68c */
  FUN_007bc148(plVar1,auStack_80,param_2 + 8);
  local_70 = plVar1;
  local_68 = plVar4;
  if ((local_78 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_78 + 1), lVar5 == 0)) {
    (**(code **)(*local_78 + 0x10))(local_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 007bb580 to 007bb587 has its CatchHandler @ 007bb67c */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  puVar2 = puVar6 + 4;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_0097fff0;
                    /* try { // try from 007bb5a0 to 007bb5b7 has its CatchHandler @ 007bb664 */
  FUN_007bc3fc(puVar2,param_3,&local_70,param_2 + 8,param_2);
  plVar1 = local_70;
  *param_1 = (long)puVar2;
  param_1[1] = (long)puVar6;
  local_90 = puVar2;
  local_88 = puVar6;
  FUN_00757d00(1,puVar6 + 2);
                    /* try { // try from 007bb5d0 to 007bb5db has its CatchHandler @ 007bb644 */
  facebook::react::EventEmitter::facebook::react::EventEmitter::setShadowNodeFamily
            (plVar1,&local_90);
  if (local_88 != (undefined8 *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar1 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar5 == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007bb6cc  FUN_007bb6cc =====

void FUN_007bb6cc(void)

{
  return;
}


// ===== 007bb6d0  FUN_007bb6d0 =====

void FUN_007bb6d0(long param_1)

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


// ===== 007bb720  FUN_007bb720 =====

void FUN_007bb720(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  *puVar6 = &PTR_FUN_009849f0;
                    /* try { // try from 007bb768 to 007bb777 has its CatchHandler @ 007bb810 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4,uVar8);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_00984a40;
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


// ===== 007bb82c  FUN_007bb82c =====

void FUN_007bb82c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009849f0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007bb83c  FUN_007bb83c =====

void FUN_007bb83c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009849f0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007bb86c  FUN_007bb86c =====

void FUN_007bb86c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007bb874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 007bb878  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007bb87c  FUN_007bb87c =====

void FUN_007bb87c(long *param_1)

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
  return;
}


// ===== 007bb934  FUN_007bb934 =====

void FUN_007bb934(long *param_1)

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


// ===== 007bb9f4  FUN_007bb9f4 =====

void FUN_007bb9f4(long param_1)

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


// ===== 007bba5c  FUN_007bba5c =====

bool FUN_007bba5c(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 007bba74  FUN_007bba74 =====

bool FUN_007bba74(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 007bba8c  FUN_007bba8c =====

void FUN_007bba8c(undefined8 *param_1,undefined8 param_2,ShadowNode *param_3,
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
  *puVar6 = &PTR_FUN_009849f0;
                    /* try { // try from 007bbacc to 007bbadb has its CatchHandler @ 007bbb74 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_00984a40;
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


// ===== 007bbb90  FUN_007bbb90 =====

void FUN_007bbb90(undefined8 *param_1,PropsParserContext *param_2,RawProps *param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  DCDZoomLayoutAndroidProps *pDVar4;
  undefined1 uStack_59;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pDVar4 = (DCDZoomLayoutAndroidProps *)*param_4;
  if (pDVar4 == (DCDZoomLayoutAndroidProps *)0x0) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33DCDZoomLayoutAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25DCDZoomLayoutAndroidPropsENS0_32DCDZoomLayoutAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de70
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33DCDZoomLayoutAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25DCDZoomLayoutAndroidPropsENS0_32DCDZoomLayoutAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de70
                                   ), iVar2 != 0)) {
                    /* try { // try from 007bbc5c to 007bbc6b has its CatchHandler @ 007bbc98 */
      FUN_007bbf04(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33DCDZoomLayoutAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25DCDZoomLayoutAndroidPropsENS0_32DCDZoomLayoutAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de68
                   ,&uStack_59);
      __cxa_atexit(FUN_007bbeb4,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33DCDZoomLayoutAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25DCDZoomLayoutAndroidPropsENS0_32DCDZoomLayoutAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de68
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33DCDZoomLayoutAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25DCDZoomLayoutAndroidPropsENS0_32DCDZoomLayoutAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de70
                         );
    }
    pDVar4 = *(DCDZoomLayoutAndroidProps **)
              PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33DCDZoomLayoutAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25DCDZoomLayoutAndroidPropsENS0_32DCDZoomLayoutAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de68
    ;
  }
  puVar3 = (undefined8 *)operator_new(0x710);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_00984b58;
                    /* try { // try from 007bbc08 to 007bbc1b has its CatchHandler @ 007bbcac */
  facebook::react::DCDZoomLayoutAndroidProps::DCDZoomLayoutAndroidProps
            ((DCDZoomLayoutAndroidProps *)(puVar3 + 3),param_2,pDVar4,param_3);
  *param_1 = (DCDZoomLayoutAndroidProps *)(puVar3 + 3);
  param_1[1] = puVar3;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007bbcdc  FUN_007bbcdc =====

void FUN_007bbcdc(undefined8 *param_1,undefined8 param_2,long *param_3)

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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33DCDZoomLayoutAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25DCDZoomLayoutAndroidPropsENS0_32DCDZoomLayoutAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de70
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33DCDZoomLayoutAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25DCDZoomLayoutAndroidPropsENS0_32DCDZoomLayoutAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de70
                                   ), iVar2 != 0)) {
                    /* try { // try from 007bbdc0 to 007bbdcf has its CatchHandler @ 007bbdfc */
      FUN_007bbf04(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33DCDZoomLayoutAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25DCDZoomLayoutAndroidPropsENS0_32DCDZoomLayoutAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de68
                   ,local_70);
      __cxa_atexit(FUN_007bbeb4,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33DCDZoomLayoutAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25DCDZoomLayoutAndroidPropsENS0_32DCDZoomLayoutAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de68
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33DCDZoomLayoutAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25DCDZoomLayoutAndroidPropsENS0_32DCDZoomLayoutAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de70
                         );
    }
    local_50 = (long *)0x0;
                    /* try { // try from 007bbd4c to 007bbd5f has its CatchHandler @ 007bbe10 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*(undefined8 *)
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33DCDZoomLayoutAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25DCDZoomLayoutAndroidPropsENS0_32DCDZoomLayoutAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de68
               ,param_2,local_70);
  }
  else {
    local_50 = (long *)0x0;
                    /* try { // try from 007bbd10 to 007bbd27 has its CatchHandler @ 007bbe14 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*param_3,param_2,local_70);
  }
  if (local_50 == local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007bbd8c;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007bbd8c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007bbe64  FUN_007bbe64 =====

void FUN_007bbe64(long param_1)

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


// ===== 007bbeb4  FUN_007bbeb4 =====

void FUN_007bbeb4(long param_1)

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


// ===== 007bbf04  FUN_007bbf04 =====

void FUN_007bbf04(undefined8 *param_1)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x710);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00984b08;
  memset(__s,0,0x6f8);
                    /* try { // try from 007bbf48 to 007bbf5b has its CatchHandler @ 007bbfdc */
  FUN_00788b10(__s,PTR_PTR_0099e138 + 0x10);
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
  puVar1 = PTR_vtable_0099e130;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *(undefined1 *)((long)puVar2 + 0x6fc) = 0;
  puVar2[3] = puVar1 + 0x20;
  *(undefined1 *)(puVar2 + 0xdf) = 1;
  *(undefined1 *)(puVar2 + 0xe0) = 0;
  *(undefined1 *)((long)puVar2 + 0x704) = 0;
  *(undefined1 *)(puVar2 + 0xe1) = 0;
  *param_1 = __s;
  param_1[1] = puVar2;
  return;
}


// ===== 007bbff8  FUN_007bbff8 =====

void FUN_007bbff8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00984b08;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007bc008  FUN_007bc008 =====

void FUN_007bc008(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00984b08;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007bc038  FUN_007bc038 =====

void FUN_007bc038(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e138 + 8);
  return;
}


// ===== 007bc04c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007bc050  FUN_007bc050 =====

void FUN_007bc050(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00984b58;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007bc060  FUN_007bc060 =====

void FUN_007bc060(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00984b58;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007bc090  FUN_007bc090 =====

void FUN_007bc090(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e138 + 8);
  return;
}


// ===== 007bc0a4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007bc0a8  FUN_007bc0a8 =====

void FUN_007bc0a8(long param_1)

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


// ===== 007bc0f8  FUN_007bc0f8 =====

void FUN_007bc0f8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00984ba8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007bc108  FUN_007bc108 =====

void FUN_007bc108(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00984ba8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007bc138  FUN_007bc138 =====

void FUN_007bc138(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007bc140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 007bc144  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007bc148  FUN_007bc148 =====

EventEmitter * FUN_007bc148(EventEmitter *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
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
                    /* try { // try from 007bc190 to 007bc19f has its CatchHandler @ 007bc264 */
  facebook::react::EventEmitter::EventEmitter(param_1,&local_50,&local_60);
  *(undefined ***)param_1 = &PTR_FUN_0097ff10;
                    /* try { // try from 007bc1ac to 007bc1b3 has its CatchHandler @ 007bc254 */
  puVar3 = (undefined8 *)operator_new(0x58);
  *puVar3 = &PTR_FUN_0097ff30;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[4] = 0;
  puVar3[3] = 0;
  *(undefined8 **)(param_1 + 0x40) = puVar3 + 3;
  *(undefined8 **)(param_1 + 0x48) = puVar3;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[8] = 0;
  puVar3[7] = 0;
  *(undefined8 *)((long)puVar3 + 0x4c) = 0;
  *(undefined8 *)((long)puVar3 + 0x44) = 0;
  *(undefined ***)param_1 = &PTR_FUN_00984bf8;
  if (local_58 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = plStack_48;
  if ((plStack_48 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,plStack_48 + 1), lVar4 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007bc298  FUN_007bc298 =====

void FUN_007bc298(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_0097ff10;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_0097ff80;
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
    return;
  }
  return;
}


// ===== 007bc34c  FUN_007bc34c =====

void FUN_007bc34c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_0097ff10;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_0097ff80;
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


// ===== 007bc3fc  FUN_007bc3fc =====

ShadowNodeFamily *
FUN_007bc3fc(ShadowNodeFamily *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
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
                    /* try { // try from 007bc460 to 007bc477 has its CatchHandler @ 007bc4e0 */
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


// ===== 007bc518  facebook::react::APNGDecorationViewEventEmitter::onLoad =====

/* facebook::react::APNGDecorationViewEventEmitter::onLoad(facebook::react::APNGDecorationViewEventEmitter::OnLoad)
   const */

void __thiscall
facebook::react::APNGDecorationViewEventEmitter::onLoad
          (APNGDecorationViewEventEmitter *this,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  byte local_98 [16];
  void *local_88;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar2 = *(undefined1 *)param_2;
  local_98[0] = 8;
  local_98[1] = 0x6c;
  local_98[2] = 0x6f;
  local_98[3] = 0x61;
  local_98[4] = 100;
  local_98[5] = 0;
  local_80 = (undefined7)*(undefined8 *)((long)param_2 + 1);
  uVar1 = param_2[1];
  lVar5 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uStack_79 = (undefined1)uVar1;
  uStack_78 = (undefined7)((ulong)uVar1 >> 8);
                    /* try { // try from 007bc570 to 007bc577 has its CatchHandler @ 007bc64c */
  local_50 = (long *)operator_new(0x20);
  *local_50 = (long)&PTR_FUN_00984c70;
  *(undefined1 *)(local_50 + 1) = uVar2;
  *(ulong *)((long)local_50 + 9) = CONCAT17(uStack_79,local_80);
  local_50[2] = CONCAT71(uStack_78,uStack_79);
  local_50[3] = lVar5;
                    /* try { // try from 007bc59c to 007bc5b3 has its CatchHandler @ 007bc614 */
  ::facebook::react::EventEmitter::dispatchEvent(this,local_98,local_70,2);
  if (local_50 == local_70) {
    lVar5 = 4;
    plVar4 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007bc5e0;
    lVar5 = 5;
    plVar4 = local_50;
  }
  (**(code **)(*plVar4 + lVar5 * 8))();
LAB_007bc5e0:
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007bc688  facebook::react::AccessibilityFocusViewEventEmitter::onAccessibilityFocus =====

/* facebook::react::AccessibilityFocusViewEventEmitter::onAccessibilityFocus(facebook::react::AccessibilityFocusViewEventEmitter::OnAccessibilityFocus)
   const */

void facebook::react::AccessibilityFocusViewEventEmitter::onAccessibilityFocus(undefined8 param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined7 uStack_6f;
  char cStack_68;
  undefined2 uStack_67;
  undefined1 uStack_65;
  undefined4 uStack_64;
  undefined **local_60 [4];
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x24;
  uStack_67 = 0x7375;
  uStack_6f = (undefined7)s_accessibilityFocus_0036f37f._8_8_;
  cStack_68 = SUB81(s_accessibilityFocus_0036f37f._8_8_,7);
  local_77 = (char  [8])s_accessibilityFocus_0036f37f._0_8_;
  uStack_65 = 0;
  local_60[0] = &PTR_FUN_00984d00;
                    /* try { // try from 007bc6dc to 007bc6eb has its CatchHandler @ 007bc748 */
  local_40 = local_60;
  ::facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_007bc718;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_007bc718:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_64,CONCAT13(uStack_65,CONCAT21(uStack_67,cStack_68))));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007bc7a8  facebook::react::AccessibilityFocusViewEventEmitter::onAccessibilityBlur =====

/* facebook::react::AccessibilityFocusViewEventEmitter::onAccessibilityBlur(facebook::react::AccessibilityFocusViewEventEmitter::OnAccessibilityBlur)
   const */

void facebook::react::AccessibilityFocusViewEventEmitter::onAccessibilityBlur(undefined8 param_1)

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
  uStack_67 = 0x72;
  uStack_6f = (undefined7)s_accessibilityBlur_003692ae._8_8_;
  cStack_68 = SUB81(s_accessibilityBlur_003692ae._8_8_,7);
  local_77 = (char  [8])s_accessibilityBlur_003692ae._0_8_;
  local_60[0] = &PTR_FUN_00984d80;
                    /* try { // try from 007bc7f8 to 007bc807 has its CatchHandler @ 007bc864 */
  local_40 = local_60;
  ::facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_007bc834;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_007bc834:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_65,CONCAT21(uStack_67,cStack_68)));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007bc8c4  facebook::react::DCDChatInputEventEmitter::onChangeContentSize =====

/* facebook::react::DCDChatInputEventEmitter::onChangeContentSize(facebook::react::DCDChatInputEventEmitter::OnChangeContentSize)
   const */

void __thiscall
facebook::react::DCDChatInputEventEmitter::onChangeContentSize
          (DCDChatInputEventEmitter *this,undefined8 param_2)

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
  undefined8 uStack_58;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x22;
  uStack_67 = 0x65;
  uStack_6f = (undefined7)s_changeContentSize_0036ff21._8_8_;
  cStack_68 = SUB81(s_changeContentSize_0036ff21._8_8_,7);
  local_77 = (char  [8])s_changeContentSize_0036ff21._0_8_;
  local_60 = &PTR_FUN_00984e00;
                    /* try { // try from 007bc914 to 007bc923 has its CatchHandler @ 007bc980 */
  uStack_58 = param_2;
  local_40 = &local_60;
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_007bc950;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_007bc950:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_65,CONCAT21(uStack_67,cStack_68)));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007bc9e0  facebook::react::DCDChatInputEventEmitter::onEndBlur =====

/* facebook::react::DCDChatInputEventEmitter::onEndBlur(facebook::react::DCDChatInputEventEmitter::OnEndBlur)
   const */

void __thiscall
facebook::react::DCDChatInputEventEmitter::onEndBlur
          (DCDChatInputEventEmitter *this,undefined8 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  byte local_98 [16];
  void *local_88;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_98[0] = 0xe;
  local_98[1] = 0x65;
  local_98[2] = 0x6e;
  local_98[3] = 100;
  local_98[4] = 0x42;
  local_98[5] = 0x6c;
  local_98[6] = 0x75;
  local_98[7] = 0x72;
  lVar4 = param_2[2];
  uVar1 = *(undefined1 *)param_2;
  local_98[8] = 0;
  local_80 = (undefined7)*(undefined8 *)((long)param_2 + 1);
  uStack_79 = (undefined1)param_2[1];
  uStack_78 = (undefined7)((ulong)param_2[1] >> 8);
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
                    /* try { // try from 007bca44 to 007bca4b has its CatchHandler @ 007bcb20 */
  local_50 = (long *)operator_new(0x20);
  *local_50 = (long)&PTR_FUN_00984e80;
  *(undefined1 *)(local_50 + 1) = uVar1;
  *(ulong *)((long)local_50 + 9) = CONCAT17(uStack_79,local_80);
  local_50[2] = CONCAT71(uStack_78,uStack_79);
  local_50[3] = lVar4;
                    /* try { // try from 007bca70 to 007bca87 has its CatchHandler @ 007bcae8 */
  ::facebook::react::EventEmitter::dispatchEvent(this,local_98,local_70,2);
  if (local_50 == local_70) {
    lVar4 = 4;
    plVar3 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007bcab4;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007bcab4:
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007bcb5c  facebook::react::DCDChatInputEventEmitter::onBeginFocus =====

/* facebook::react::DCDChatInputEventEmitter::onBeginFocus(facebook::react::DCDChatInputEventEmitter::OnBeginFocus)
   const */

void facebook::react::DCDChatInputEventEmitter::onBeginFocus
               (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined2 local_6f;
  undefined1 local_6d;
  void *local_68;
  undefined **local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x14;
  local_6f = 0x7375;
  local_6d = 0;
  local_77 = (char  [8])s_beginFocus_0036adbc._0_8_;
  local_60 = &PTR_FUN_00984f00;
                    /* try { // try from 007bcbb4 to 007bcbc3 has its CatchHandler @ 007bcc20 */
  uStack_58 = param_2;
  local_50 = param_3;
  local_40 = &local_60;
  ::facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_007bcbf0;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_007bcbf0:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007bcc80  facebook::react::DCDChatInputEventEmitter::onSelectionOrTextChange =====

/* facebook::react::DCDChatInputEventEmitter::onSelectionOrTextChange(facebook::react::DCDChatInputEventEmitter::OnSelectionOrTextChange)
   const */

void __thiscall
facebook::react::DCDChatInputEventEmitter::onSelectionOrTextChange
          (DCDChatInputEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  byte local_88;
  char local_87 [8];
  char acStack_7f [5];
  undefined2 uStack_7a;
  char cStack_78;
  char acStack_77 [5];
  undefined1 uStack_72;
  undefined1 uStack_71;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar5 = *param_2;
  local_88 = 0x2a;
  acStack_7f = (char  [5])s_selectionOrTe_00369d36._8_5_;
  local_87 = (char  [8])s_selectionOrTe_00369d36._0_8_;
  lVar8 = param_2[2];
  lVar6 = param_2[1];
  uStack_7a = (undefined2)s_xtChange_00369d43._0_3_;
  cStack_78 = SUB31(s_xtChange_00369d43._0_3_,2);
  acStack_77 = (char  [5])s_xtChange_00369d43._3_5_;
  lVar3 = param_2[3];
  lVar9 = param_2[5];
  lVar7 = param_2[4];
  lVar4 = param_2[6];
  uStack_72 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  local_50 = (long *)0x0;
                    /* try { // try from 007bcd00 to 007bcd07 has its CatchHandler @ 007bcdf8 */
  local_50 = (long *)operator_new(0x40);
  *local_50 = (long)&PTR_FUN_00984f80;
  local_50[1] = lVar5;
  local_50[3] = lVar8;
  local_50[2] = lVar6;
  local_50[4] = lVar3;
  local_50[6] = lVar9;
  local_50[5] = lVar7;
  local_50[7] = lVar4;
                    /* try { // try from 007bcd48 to 007bcd5f has its CatchHandler @ 007bcdc0 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_88,local_70,2);
  if (local_50 == local_70) {
    lVar3 = 4;
    plVar2 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007bcd8c;
    lVar3 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007bcd8c:
  if ((local_88 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_71,CONCAT16(uStack_72,CONCAT51(acStack_77,cStack_78))));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007bce30  FUN_007bce30 =====

void FUN_007bce30(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 007bce74  facebook::react::DCDChatInputEventEmitter::onTextFlushed =====

/* facebook::react::DCDChatInputEventEmitter::onTextFlushed(facebook::react::DCDChatInputEventEmitter::OnTextFlushed)
   const */

void __thiscall
facebook::react::DCDChatInputEventEmitter::onTextFlushed
          (DCDChatInputEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte local_78;
  undefined7 local_77;
  char cStack_70;
  undefined3 uStack_6f;
  undefined1 local_6c;
  void *local_68;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar7 = param_2[1];
  lVar5 = *param_2;
  local_78 = 0x16;
  lVar3 = param_2[2];
  lVar8 = param_2[4];
  lVar6 = param_2[3];
  lVar4 = param_2[5];
  local_6c = 0;
  local_77 = (undefined7)s_textFlushed_00367994._0_8_;
  _cStack_70 = CONCAT31(0x646568,SUB81(s_textFlushed_00367994._0_8_,7));
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007bceec to 007bcef3 has its CatchHandler @ 007bcfe4 */
  local_40 = (long *)operator_new(0x38);
  *local_40 = (long)&PTR_FUN_00985000;
  local_40[2] = lVar7;
  local_40[1] = lVar5;
  local_40[3] = lVar3;
  local_40[5] = lVar8;
  local_40[4] = lVar6;
  local_40[6] = lVar4;
                    /* try { // try from 007bcf38 to 007bcf4f has its CatchHandler @ 007bcfac */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007bcf7c;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007bcf7c:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007bd01c  FUN_007bd01c =====

void FUN_007bd01c(byte *param_1)

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


// ===== 007bd060  facebook::react::DCDChatInputEventEmitter::onPasteImage =====

/* facebook::react::DCDChatInputEventEmitter::onPasteImage(facebook::react::DCDChatInputEventEmitter::OnPasteImage)
   const */

void __thiscall
facebook::react::DCDChatInputEventEmitter::onPasteImage
          (DCDChatInputEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte local_88;
  char local_87 [8];
  undefined2 local_7f;
  undefined1 local_7d;
  void *local_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar7 = param_2[1];
  lVar5 = *param_2;
  local_7f = 0x6567;
  lVar3 = param_2[2];
  local_88 = 0x14;
  lVar8 = param_2[4];
  lVar6 = param_2[3];
  lVar4 = param_2[5];
  local_87 = (char  [8])s_pasteImage_0036ff33._0_8_;
  local_7d = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_50 = (long *)0x0;
                    /* try { // try from 007bd0e4 to 007bd0eb has its CatchHandler @ 007bd1e8 */
  local_50 = (long *)operator_new(0x48);
  *local_50 = (long)&PTR_FUN_00985080;
  local_50[2] = lVar7;
  local_50[1] = lVar5;
  local_50[3] = lVar3;
  local_50[5] = lVar8;
  local_50[4] = lVar6;
  lVar5 = param_2[7];
  lVar3 = param_2[6];
  local_50[6] = lVar4;
  local_50[8] = lVar5;
  local_50[7] = lVar3;
                    /* try { // try from 007bd138 to 007bd14f has its CatchHandler @ 007bd1b0 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_88,local_70,2);
  if (local_50 == local_70) {
    lVar3 = 4;
    plVar2 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007bd17c;
    lVar3 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007bd17c:
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007bd220  FUN_007bd220 =====

void FUN_007bd220(byte *param_1)

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


// ===== 007bd264  facebook::react::DCDChatInputEventEmitter::onPasteCommand =====

/* facebook::react::DCDChatInputEventEmitter::onPasteCommand(facebook::react::DCDChatInputEventEmitter::OnPasteCommand)
   const */

void __thiscall
facebook::react::DCDChatInputEventEmitter::onPasteCommand
          (DCDChatInputEventEmitter *this,undefined8 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  byte local_98;
  char local_97 [8];
  undefined4 local_8f;
  undefined1 local_8b;
  void *local_88;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_98 = 0x18;
  uVar1 = *(undefined1 *)param_2;
  local_8f = 0x646e616d;
  local_97 = (char  [8])s_pasteCommand_0036979b._0_8_;
  lVar4 = param_2[2];
  local_8b = 0;
  local_80 = (undefined7)*(undefined8 *)((long)param_2 + 1);
  uStack_79 = (undefined1)param_2[1];
  uStack_78 = (undefined7)((ulong)param_2[1] >> 8);
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
                    /* try { // try from 007bd2cc to 007bd2d3 has its CatchHandler @ 007bd3a8 */
  local_50 = (long *)operator_new(0x20);
  *local_50 = (long)&PTR_FUN_00985100;
  *(undefined1 *)(local_50 + 1) = uVar1;
  *(ulong *)((long)local_50 + 9) = CONCAT17(uStack_79,local_80);
  local_50[2] = CONCAT71(uStack_78,uStack_79);
  local_50[3] = lVar4;
                    /* try { // try from 007bd2f8 to 007bd30f has its CatchHandler @ 007bd370 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_98,local_70,2);
  if (local_50 == local_70) {
    lVar4 = 4;
    plVar3 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007bd33c;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007bd33c:
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007bd3e4  facebook::react::DCDChatInputEventEmitter::onRequestSend =====

/* facebook::react::DCDChatInputEventEmitter::onRequestSend(facebook::react::DCDChatInputEventEmitter::OnRequestSend)
   const */

void facebook::react::DCDChatInputEventEmitter::onRequestSend(undefined8 param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  undefined7 local_77;
  char cStack_70;
  undefined3 uStack_6f;
  undefined1 local_6c;
  void *local_68;
  undefined **local_60 [4];
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x16;
  local_6c = 0;
  local_77 = (undefined7)s_requestSend_0036f87d._0_8_;
  _cStack_70 = CONCAT31(0x646e65,SUB81(s_requestSend_0036f87d._0_8_,7));
  local_60[0] = &PTR_FUN_00985180;
                    /* try { // try from 007bd43c to 007bd44b has its CatchHandler @ 007bd4a8 */
  local_40 = local_60;
  ::facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_007bd478;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_007bd478:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007bd508  facebook::react::DCDChatInputEventEmitter::onTapAction =====

/* facebook::react::DCDChatInputEventEmitter::onTapAction(facebook::react::DCDChatInputEventEmitter::OnTapAction)
   const */

void __thiscall
facebook::react::DCDChatInputEventEmitter::onTapAction(DCDChatInputEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  byte local_78;
  char local_77 [8];
  undefined2 local_6f;
  void *local_68;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_6f = 0x6e;
  lVar9 = param_2[1];
  lVar6 = *param_2;
  lVar3 = param_2[2];
  local_78 = 0x12;
  lVar10 = param_2[4];
  lVar7 = param_2[3];
  lVar4 = param_2[5];
  lVar11 = param_2[7];
  lVar8 = param_2[6];
  lVar5 = param_2[8];
  local_77 = (char  [8])s_tapAction_0036adc7._0_8_;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007bd590 to 007bd597 has its CatchHandler @ 007bd69c */
  local_40 = (long *)operator_new(0x50);
  *local_40 = (long)&PTR_FUN_00985200;
  local_40[2] = lVar9;
  local_40[1] = lVar6;
  local_40[3] = lVar3;
  local_40[5] = lVar10;
  local_40[4] = lVar7;
  local_40[6] = lVar4;
  local_40[8] = lVar11;
  local_40[7] = lVar8;
  local_40[9] = lVar5;
                    /* try { // try from 007bd5f0 to 007bd607 has its CatchHandler @ 007bd664 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007bd634;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007bd634:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007bd6d4  FUN_007bd6d4 =====

void FUN_007bd6d4(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x30] & 1) == 0) {
    bVar1 = param_1[0x18];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x40));
    bVar1 = param_1[0x18];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x28));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 007bd738  facebook::react::DCDChatEventEmitter::onChatScrollPosition =====

/* facebook::react::DCDChatEventEmitter::onChatScrollPosition(facebook::react::DCDChatEventEmitter::OnChatScrollPosition)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onChatScrollPosition(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte local_88;
  char local_87 [8];
  undefined7 uStack_7f;
  char cStack_78;
  undefined2 uStack_77;
  undefined1 uStack_75;
  undefined4 uStack_74;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_88 = 0x24;
  uStack_77 = 0x6e6f;
  uStack_7f = (undefined7)s_chatScrollPosition_003692c0._8_8_;
  cStack_78 = SUB81(s_chatScrollPosition_003692c0._8_8_,7);
  local_87 = (char  [8])s_chatScrollPosition_003692c0._0_8_;
  uStack_75 = 0;
                    /* try { // try from 007bd784 to 007bd78b has its CatchHandler @ 007bd85c */
  local_50 = (long *)operator_new(0x28);
  lVar4 = param_2[1];
  lVar3 = *param_2;
  uVar6 = *(undefined8 *)((long)param_2 + 0x14);
  uVar5 = *(undefined8 *)((long)param_2 + 0xc);
  *local_50 = (long)&PTR_FUN_00985280;
  local_50[2] = lVar4;
  local_50[1] = lVar3;
  *(undefined8 *)((long)local_50 + 0x1c) = uVar6;
  *(undefined8 *)((long)local_50 + 0x14) = uVar5;
                    /* try { // try from 007bd7ac to 007bd7c3 has its CatchHandler @ 007bd824 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_88,local_70,2);
  if (local_50 == local_70) {
    lVar3 = 4;
    plVar2 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007bd7f0;
    lVar3 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007bd7f0:
  if ((local_88 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_74,CONCAT13(uStack_75,CONCAT21(uStack_77,cStack_78))));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007bd88c  facebook::react::DCDChatEventEmitter::onTapImage =====

/* facebook::react::DCDChatEventEmitter::onTapImage(facebook::react::DCDChatEventEmitter::OnTapImage)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapImage(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  byte local_98 [16];
  void *local_88;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar14 = param_2[1];
  lVar9 = *param_2;
  lVar8 = param_2[3];
  lVar2 = param_2[0xe];
  lVar15 = param_2[5];
  lVar10 = param_2[4];
  local_98[1] = 0x74;
  local_98[2] = 0x61;
  local_98[3] = 0x70;
  local_98[4] = 0x49;
  local_98[5] = 0x6d;
  local_98[6] = 0x61;
  local_98[7] = 0x67;
  local_98[8] = 0x65;
  lVar4 = param_2[2];
  lVar5 = param_2[6];
  lVar16 = param_2[0xc];
  lVar11 = param_2[0xb];
  lVar6 = param_2[0xd];
  lVar17 = param_2[0x10];
  lVar12 = param_2[0xf];
  lVar7 = param_2[0x11];
  local_98[0] = 0x10;
  local_98[9] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  local_60 = (long *)0x0;
                    /* try { // try from 007bd95c to 007bd963 has its CatchHandler @ 007bdaa4 */
  local_60 = (long *)operator_new(0x98);
  *local_60 = (long)&PTR_FUN_00985300;
  lVar20 = param_2[8];
  lVar19 = param_2[7];
  local_60[2] = lVar14;
  local_60[1] = lVar9;
  local_60[3] = lVar4;
  local_60[6] = lVar15;
  local_60[5] = lVar10;
  uVar18 = *(undefined8 *)((long)param_2 + 0x4c);
  uVar13 = *(undefined8 *)((long)param_2 + 0x44);
  local_60[7] = lVar5;
  *(undefined8 *)((long)local_60 + 0x54) = uVar18;
  *(undefined8 *)((long)local_60 + 0x4c) = uVar13;
  local_60[0xe] = lVar6;
  local_60[0xd] = lVar16;
  local_60[0xc] = lVar11;
  *(int *)(local_60 + 4) = (int)lVar8;
  local_60[9] = lVar20;
  local_60[8] = lVar19;
  *(int *)(local_60 + 0xf) = (int)lVar2;
  local_60[0x12] = lVar7;
  local_60[0x11] = lVar17;
  local_60[0x10] = lVar12;
                    /* try { // try from 007bd9f0 to 007bda07 has its CatchHandler @ 007bda6c */
  ::facebook::react::EventEmitter::dispatchEvent(this,local_98,local_80,2);
  if (local_60 == local_80) {
    lVar8 = 4;
    plVar3 = local_80;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_007bda34;
    lVar8 = 5;
    plVar3 = local_60;
  }
  (**(code **)(*plVar3 + lVar8 * 8))();
LAB_007bda34:
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007bdadc  FUN_007bdadc =====

void FUN_007bdadc(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x78] & 1) == 0) {
    bVar1 = param_1[0x58];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x88));
    bVar1 = param_1[0x58];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x20];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x68));
    bVar1 = param_1[0x20];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x30));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 007bdb58  facebook::react::DCDChatEventEmitter::onTapChannel =====

/* facebook::react::DCDChatEventEmitter::onTapChannel(facebook::react::DCDChatEventEmitter::OnTapChannel)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapChannel(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  byte local_78;
  char local_77 [8];
  undefined2 local_6f;
  undefined1 local_6d;
  void *local_68;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_6f = 0x6c65;
  lVar11 = param_2[1];
  lVar7 = *param_2;
  lVar3 = param_2[2];
  local_78 = 0x14;
  lVar12 = param_2[4];
  lVar8 = param_2[3];
  lVar4 = param_2[5];
  lVar13 = param_2[7];
  lVar9 = param_2[6];
  lVar5 = param_2[8];
  lVar14 = param_2[10];
  lVar10 = param_2[9];
  lVar6 = param_2[0xb];
  local_77 = (char  [8])s_tapChannel_0036f392._0_8_;
  local_6d = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007bdbf8 to 007bdbff has its CatchHandler @ 007bdd1c */
  local_40 = (long *)operator_new(0x68);
  *local_40 = (long)&PTR_FUN_00985380;
  local_40[2] = lVar11;
  local_40[1] = lVar7;
  local_40[3] = lVar3;
  local_40[5] = lVar12;
  local_40[4] = lVar8;
  local_40[6] = lVar4;
  local_40[8] = lVar13;
  local_40[7] = lVar9;
  local_40[9] = lVar5;
  local_40[0xc] = lVar6;
  local_40[0xb] = lVar14;
  local_40[10] = lVar10;
                    /* try { // try from 007bdc70 to 007bdc87 has its CatchHandler @ 007bdce4 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007bdcb4;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007bdcb4:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007bdd54  FUN_007bdd54 =====

void FUN_007bdd54(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x48] & 1) == 0) {
    bVar1 = param_1[0x30];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x58));
    bVar1 = param_1[0x30];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x18];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x40));
    bVar1 = param_1[0x18];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x28));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 007bddd0  facebook::react::DCDChatEventEmitter::onLongPressChannel =====

/* facebook::react::DCDChatEventEmitter::onLongPressChannel(facebook::react::DCDChatEventEmitter::OnLongPressChannel)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onLongPressChannel(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  byte local_78;
  char local_77 [8];
  undefined7 uStack_6f;
  char cStack_68;
  undefined1 uStack_67;
  undefined6 uStack_66;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x20;
  lVar3 = param_2[2];
  uStack_6f = (undefined7)s_longPressChannel_003672d3._8_8_;
  cStack_68 = SUB81(s_longPressChannel_003672d3._8_8_,7);
  local_77 = (char  [8])s_longPressChannel_003672d3._0_8_;
  lVar11 = param_2[1];
  lVar7 = *param_2;
  lVar4 = param_2[5];
  lVar12 = param_2[4];
  lVar8 = param_2[3];
  lVar5 = param_2[8];
  lVar13 = param_2[7];
  lVar9 = param_2[6];
  lVar6 = param_2[0xb];
  lVar14 = param_2[10];
  lVar10 = param_2[9];
  uStack_67 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007bde68 to 007bde6f has its CatchHandler @ 007bdf8c */
  local_40 = (long *)operator_new(0x68);
  *local_40 = (long)&PTR_FUN_00985400;
  local_40[2] = lVar11;
  local_40[1] = lVar7;
  local_40[3] = lVar3;
  local_40[5] = lVar12;
  local_40[4] = lVar8;
  local_40[6] = lVar4;
  local_40[8] = lVar13;
  local_40[7] = lVar9;
  local_40[9] = lVar5;
  local_40[0xc] = lVar6;
  local_40[0xb] = lVar14;
  local_40[10] = lVar10;
                    /* try { // try from 007bdee0 to 007bdef7 has its CatchHandler @ 007bdf54 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007bdf24;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007bdf24:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_66,CONCAT11(uStack_67,cStack_68)));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007bdfc4  FUN_007bdfc4 =====

void FUN_007bdfc4(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x48] & 1) == 0) {
    bVar1 = param_1[0x30];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x58));
    bVar1 = param_1[0x30];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x18];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x40));
    bVar1 = param_1[0x18];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x28));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 007be040  facebook::react::DCDChatEventEmitter::onTapAttachmentLink =====

/* facebook::react::DCDChatEventEmitter::onTapAttachmentLink(facebook::react::DCDChatEventEmitter::OnTapAttachmentLink)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapAttachmentLink
          (DCDChatEventEmitter *this,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  byte local_98;
  char local_97 [8];
  undefined7 uStack_8f;
  char cStack_88;
  undefined2 uStack_87;
  undefined5 uStack_85;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar2 = *(undefined1 *)param_2;
  uStack_87 = 0x6b;
  local_98 = 0x22;
  local_80 = (undefined7)*(undefined8 *)((long)param_2 + 1);
  uVar1 = param_2[1];
  lVar5 = param_2[2];
  uStack_8f = (undefined7)s_tapAttachmentLink_00366e2b._8_8_;
  cStack_88 = SUB81(s_tapAttachmentLink_00366e2b._8_8_,7);
  local_97 = (char  [8])s_tapAttachmentLink_00366e2b._0_8_;
  param_2[1] = 0;
  param_2[2] = 0;
  uStack_79 = (undefined1)uVar1;
  uStack_78 = (undefined7)((ulong)uVar1 >> 8);
  *param_2 = 0;
                    /* try { // try from 007be0a0 to 007be0a7 has its CatchHandler @ 007be17c */
  local_50 = (long *)operator_new(0x20);
  *local_50 = (long)&PTR_FUN_00985480;
  *(undefined1 *)(local_50 + 1) = uVar2;
  *(ulong *)((long)local_50 + 9) = CONCAT17(uStack_79,local_80);
  local_50[2] = CONCAT71(uStack_78,uStack_79);
  local_50[3] = lVar5;
                    /* try { // try from 007be0cc to 007be0e3 has its CatchHandler @ 007be144 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_98,local_70,2);
  if (local_50 == local_70) {
    lVar5 = 4;
    plVar4 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007be110;
    lVar5 = 5;
    plVar4 = local_50;
  }
  (**(code **)(*plVar4 + lVar5 * 8))();
LAB_007be110:
  if ((local_98 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_85,CONCAT21(uStack_87,cStack_88)));
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007be1b8  facebook::react::DCDChatEventEmitter::onLongPressAttachmentLink =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::DCDChatEventEmitter::onLongPressAttachmentLink(facebook::react::DCDChatEventEmitter::OnLongPressAttachmentLink)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onLongPressAttachmentLink
          (DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong local_90;
  undefined8 uStack_88;
  char *local_80;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_80 = (char *)operator_new(0x20);
  uVar4 = s_longPressAttach_0036f39d._0_8_;
  uVar2 = CONCAT17(s_mentLink_0036f3ac[0],s_longPressAttach_0036f39d._8_7_);
  uVar3 = CONCAT71(s_mentLink_0036f3ac._1_7_,s_mentLink_0036f3ac[0]);
  local_80[0x17] = '\0';
  *(undefined8 *)(local_80 + 8) = uVar2;
  *(undefined8 *)local_80 = uVar4;
  uStack_88 = _UNK_00372d28;
  local_90 = _s___00372d20;
  *(undefined8 *)(local_80 + 0xf) = uVar3;
  lVar6 = param_2[2];
  lVar10 = param_2[1];
  lVar8 = *param_2;
  lVar7 = param_2[5];
  lVar11 = param_2[4];
  lVar9 = param_2[3];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_50 = (long *)0x0;
                    /* try { // try from 007be244 to 007be24b has its CatchHandler @ 007be340 */
  local_50 = (long *)operator_new(0x38);
  *local_50 = (long)&PTR_FUN_00985500;
  local_50[2] = lVar10;
  local_50[1] = lVar8;
  local_50[3] = lVar6;
  local_50[5] = lVar11;
  local_50[4] = lVar9;
  local_50[6] = lVar7;
                    /* try { // try from 007be290 to 007be2a7 has its CatchHandler @ 007be308 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_90,local_70,2);
  if (local_50 == local_70) {
    lVar6 = 4;
    plVar5 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007be2d4;
    lVar6 = 5;
    plVar5 = local_50;
  }
  (**(code **)(*plVar5 + lVar6 * 8))();
LAB_007be2d4:
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007be378  FUN_007be378 =====

void FUN_007be378(byte *param_1)

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


// ===== 007be3bc  facebook::react::DCDChatEventEmitter::onTapCall =====

/* facebook::react::DCDChatEventEmitter::onTapCall(facebook::react::DCDChatEventEmitter::OnTapCall)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapCall(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte local_78 [16];
  void *local_68;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78[0] = 0xe;
  lVar7 = param_2[1];
  lVar5 = *param_2;
  local_78[8] = 0;
  lVar8 = param_2[4];
  lVar6 = param_2[3];
  local_78[1] = 0x74;
  local_78[2] = 0x61;
  local_78[3] = 0x70;
  local_78[4] = 0x43;
  local_78[5] = 0x61;
  local_78[6] = 0x6c;
  local_78[7] = 0x6c;
  lVar3 = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  lVar4 = param_2[5];
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007be430 to 007be437 has its CatchHandler @ 007be528 */
  local_40 = (long *)operator_new(0x38);
  *local_40 = (long)&PTR_FUN_00985580;
  local_40[2] = lVar7;
  local_40[1] = lVar5;
  local_40[3] = lVar3;
  local_40[5] = lVar8;
  local_40[4] = lVar6;
  local_40[6] = lVar4;
                    /* try { // try from 007be47c to 007be493 has its CatchHandler @ 007be4f0 */
  ::facebook::react::EventEmitter::dispatchEvent(this,local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007be4c0;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007be4c0:
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007be560  FUN_007be560 =====

void FUN_007be560(byte *param_1)

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


// ===== 007be5a4  facebook::react::DCDChatEventEmitter::onTapMention =====

/* facebook::react::DCDChatEventEmitter::onTapMention(facebook::react::DCDChatEventEmitter::OnTapMention)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapMention(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  byte local_78;
  char local_77 [8];
  undefined2 local_6f;
  undefined1 local_6d;
  void *local_68;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x14;
  local_6f = 0x6e6f;
  lVar15 = param_2[1];
  lVar9 = *param_2;
  local_6d = 0;
  local_77 = (char  [8])s_tapMention_0036d168._0_8_;
  lVar3 = param_2[2];
  lVar16 = param_2[4];
  lVar10 = param_2[3];
  lVar4 = param_2[5];
  lVar17 = param_2[7];
  lVar11 = param_2[6];
  lVar5 = param_2[8];
  lVar18 = param_2[10];
  lVar12 = param_2[9];
  lVar6 = param_2[0xb];
  lVar19 = param_2[0xd];
  lVar13 = param_2[0xc];
  lVar7 = param_2[0xe];
  lVar20 = param_2[0x10];
  lVar14 = param_2[0xf];
  lVar8 = param_2[0x11];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007be674 to 007be67b has its CatchHandler @ 007be7c4 */
  local_40 = (long *)operator_new(0x98);
  *local_40 = (long)&PTR_FUN_00985600;
  local_40[2] = lVar15;
  local_40[1] = lVar9;
  local_40[3] = lVar3;
  local_40[5] = lVar16;
  local_40[4] = lVar10;
  local_40[6] = lVar4;
  local_40[8] = lVar17;
  local_40[7] = lVar11;
  local_40[9] = lVar5;
  local_40[0xb] = lVar18;
  local_40[10] = lVar12;
  local_40[0xc] = lVar6;
  local_40[0xe] = lVar19;
  local_40[0xd] = lVar13;
  local_40[0xf] = lVar7;
  local_40[0x12] = lVar8;
  local_40[0x11] = lVar20;
  local_40[0x10] = lVar14;
                    /* try { // try from 007be718 to 007be72f has its CatchHandler @ 007be78c */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007be75c;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007be75c:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007be7fc  facebook::react::DCDChatEventEmitter::onTapCommandMention =====

/* facebook::react::DCDChatEventEmitter::onTapCommandMention(facebook::react::DCDChatEventEmitter::OnTapCommandMention)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapCommandMention(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  byte local_78;
  char local_77 [8];
  undefined7 uStack_6f;
  char cStack_68;
  undefined2 uStack_67;
  undefined5 uStack_65;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x22;
  uStack_6f = (undefined7)s_tapCommandMention_0036f889._8_8_;
  cStack_68 = SUB81(s_tapCommandMention_0036f889._8_8_,7);
  local_77 = (char  [8])s_tapCommandMention_0036f889._0_8_;
  lVar11 = param_2[1];
  lVar7 = *param_2;
  uStack_67 = 0x6e;
  lVar3 = param_2[2];
  lVar12 = param_2[4];
  lVar8 = param_2[3];
  lVar4 = param_2[5];
  lVar13 = param_2[7];
  lVar9 = param_2[6];
  lVar5 = param_2[8];
  lVar14 = param_2[10];
  lVar10 = param_2[9];
  lVar6 = param_2[0xb];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007be898 to 007be89f has its CatchHandler @ 007be9bc */
  local_40 = (long *)operator_new(0x68);
  *local_40 = (long)&PTR_FUN_00985680;
  local_40[2] = lVar11;
  local_40[1] = lVar7;
  local_40[3] = lVar3;
  local_40[5] = lVar12;
  local_40[4] = lVar8;
  local_40[6] = lVar4;
  local_40[8] = lVar13;
  local_40[7] = lVar9;
  local_40[9] = lVar5;
  local_40[0xc] = lVar6;
  local_40[0xb] = lVar14;
  local_40[10] = lVar10;
                    /* try { // try from 007be910 to 007be927 has its CatchHandler @ 007be984 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007be954;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007be954:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_65,CONCAT21(uStack_67,cStack_68)));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007be9f4  FUN_007be9f4 =====

void FUN_007be9f4(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x48] & 1) == 0) {
    bVar1 = param_1[0x30];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x58));
    bVar1 = param_1[0x30];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x18];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x40));
    bVar1 = param_1[0x18];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x28));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 007bea70  facebook::react::DCDChatEventEmitter::onLongPressCommandMention =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::DCDChatEventEmitter::onLongPressCommandMention(facebook::react::DCDChatEventEmitter::OnLongPressCommandMention)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onLongPressCommandMention
          (DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong local_90;
  undefined8 uStack_88;
  char *local_80;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_80 = (char *)operator_new(0x20);
  uVar4 = s_longPressComman_003692d3._0_8_;
  uVar2 = CONCAT17(s_dMention_003692e2[0],s_longPressComman_003692d3._8_7_);
  uVar3 = CONCAT71(s_dMention_003692e2._1_7_,s_dMention_003692e2[0]);
  local_80[0x17] = '\0';
  *(undefined8 *)(local_80 + 8) = uVar2;
  *(undefined8 *)local_80 = uVar4;
  uStack_88 = _UNK_00372d28;
  local_90 = _s___00372d20;
  *(undefined8 *)(local_80 + 0xf) = uVar3;
  lVar6 = param_2[2];
  lVar14 = param_2[1];
  lVar10 = *param_2;
  lVar7 = param_2[5];
  lVar15 = param_2[4];
  lVar11 = param_2[3];
  lVar8 = param_2[8];
  lVar16 = param_2[7];
  lVar12 = param_2[6];
  lVar9 = param_2[0xb];
  lVar17 = param_2[10];
  lVar13 = param_2[9];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  local_50 = (long *)0x0;
                    /* try { // try from 007beb28 to 007beb2f has its CatchHandler @ 007bec50 */
  local_50 = (long *)operator_new(0x68);
  *local_50 = (long)&PTR_FUN_00985700;
  local_50[2] = lVar14;
  local_50[1] = lVar10;
  local_50[3] = lVar6;
  local_50[5] = lVar15;
  local_50[4] = lVar11;
  local_50[6] = lVar7;
  local_50[8] = lVar16;
  local_50[7] = lVar12;
  local_50[9] = lVar8;
  local_50[0xc] = lVar9;
  local_50[0xb] = lVar17;
  local_50[10] = lVar13;
                    /* try { // try from 007beba0 to 007bebb7 has its CatchHandler @ 007bec18 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_90,local_70,2);
  if (local_50 == local_70) {
    lVar6 = 4;
    plVar5 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007bebe4;
    lVar6 = 5;
    plVar5 = local_50;
  }
  (**(code **)(*plVar5 + lVar6 * 8))();
LAB_007bebe4:
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007bec88  FUN_007bec88 =====

void FUN_007bec88(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x48] & 1) == 0) {
    bVar1 = param_1[0x30];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x58));
    bVar1 = param_1[0x30];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x18];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x40));
    bVar1 = param_1[0x18];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x28));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 007bed04  facebook::react::DCDChatEventEmitter::onTapGameMention =====

/* facebook::react::DCDChatEventEmitter::onTapGameMention(facebook::react::DCDChatEventEmitter::OnTapGameMention)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapGameMention(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte local_78;
  char local_77 [6];
  char acStack_71 [2];
  char acStack_6f [6];
  undefined1 local_69;
  void *local_68;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar7 = param_2[1];
  lVar5 = *param_2;
  local_78 = 0x1c;
  local_77 = s_tapGam_0036cb70;
  lVar3 = param_2[2];
  lVar8 = param_2[4];
  lVar6 = param_2[3];
  lVar4 = param_2[5];
  acStack_71 = (char  [2])s_eMention_0036cb76._0_2_;
  acStack_6f = (char  [6])s_eMention_0036cb76._2_6_;
  local_69 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007bed78 to 007bed7f has its CatchHandler @ 007bee70 */
  local_40 = (long *)operator_new(0x38);
  *local_40 = (long)&PTR_FUN_00985780;
  local_40[2] = lVar7;
  local_40[1] = lVar5;
  local_40[3] = lVar3;
  local_40[5] = lVar8;
  local_40[4] = lVar6;
  local_40[6] = lVar4;
                    /* try { // try from 007bedc4 to 007beddb has its CatchHandler @ 007bee38 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007bee08;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007bee08:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007beea8  FUN_007beea8 =====

void FUN_007beea8(byte *param_1)

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


// ===== 007beeec  facebook::react::DCDChatEventEmitter::onTapLink =====

/* facebook::react::DCDChatEventEmitter::onTapLink(facebook::react::DCDChatEventEmitter::OnTapLink)
   const */

void facebook::react::DCDChatEventEmitter::onTapLink(undefined8 param_1)

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
  local_78[0] = 0xe;
  local_78[1] = 0x74;
  local_78[2] = 0x61;
  local_78[3] = 0x70;
  local_78[4] = 0x4c;
  local_78[5] = 0x69;
  local_78[6] = 0x6e;
  local_78[7] = 0x6b;
  local_78[8] = 0;
  local_60[0] = &PTR_FUN_00985800;
                    /* try { // try from 007bef40 to 007bef4f has its CatchHandler @ 007befac */
  local_40 = local_60;
  ::facebook::react::EventEmitter::dispatchEvent(param_1,local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_007bef7c;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_007bef7c:
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007bf00c  facebook::react::DCDChatEventEmitter::onLongPressLink =====

/* facebook::react::DCDChatEventEmitter::onLongPressLink(facebook::react::DCDChatEventEmitter::OnLongPressLink)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onLongPressLink(DCDChatEventEmitter *this,undefined8 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  byte local_98;
  char local_97 [5];
  char acStack_92 [3];
  char acStack_8f [5];
  undefined1 local_8a;
  void *local_88;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = *(undefined1 *)param_2;
  local_98 = 0x1a;
  local_97 = s_longP_00367f42;
  acStack_92 = (char  [3])s_ressLink_00367f47._0_3_;
  acStack_8f = (char  [5])s_ressLink_00367f47._3_5_;
  lVar4 = param_2[2];
  local_8a = 0;
  local_80 = (undefined7)*(undefined8 *)((long)param_2 + 1);
  uStack_79 = (undefined1)param_2[1];
  uStack_78 = (undefined7)((ulong)param_2[1] >> 8);
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
                    /* try { // try from 007bf070 to 007bf077 has its CatchHandler @ 007bf14c */
  local_50 = (long *)operator_new(0x20);
  *local_50 = (long)&PTR_FUN_00985880;
  *(undefined1 *)(local_50 + 1) = uVar1;
  *(ulong *)((long)local_50 + 9) = CONCAT17(uStack_79,local_80);
  local_50[2] = CONCAT71(uStack_78,uStack_79);
  local_50[3] = lVar4;
                    /* try { // try from 007bf09c to 007bf0b3 has its CatchHandler @ 007bf114 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_98,local_70,2);
  if (local_50 == local_70) {
    lVar4 = 4;
    plVar3 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007bf0e0;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007bf0e0:
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007bf188  facebook::react::DCDChatEventEmitter::onTapReaction =====

/* facebook::react::DCDChatEventEmitter::onTapReaction(facebook::react::DCDChatEventEmitter::OnTapReaction)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapReaction(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  byte local_118;
  undefined7 local_117;
  char cStack_110;
  undefined3 uStack_10f;
  undefined1 local_10c;
  void *local_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  long local_e8;
  long lStack_e0;
  long local_d8;
  undefined1 local_d0;
  undefined2 local_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  undefined1 local_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lStack_f8 = param_2[1];
  local_100 = *param_2;
  lVar5 = param_2[6];
  local_f0 = param_2[2];
  lVar2 = param_2[7];
  lStack_e0 = param_2[4];
  local_e8 = param_2[3];
  lVar3 = param_2[0xb];
  local_d8 = param_2[5];
  lStack_b8 = param_2[9];
  local_c0 = param_2[8];
  local_b0 = param_2[10];
  lStack_98 = param_2[0xd];
  local_a0 = param_2[0xc];
  local_90 = param_2[0xe];
  local_118 = 0x16;
  local_117 = (undefined7)s_tapReaction_0036623b._0_8_;
  _cStack_110 = CONCAT31(0x6e6f69,SUB81(s_tapReaction_0036623b._0_8_,7));
  local_10c = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  local_60 = (long *)0x0;
  local_d0 = (char)lVar5;
  local_c8 = (short)lVar2;
  local_a8 = (char)lVar3;
                    /* try { // try from 007bf250 to 007bf257 has its CatchHandler @ 007bf38c */
  local_60 = (long *)operator_new(0x80);
  *local_60 = (long)&PTR_FUN_00985900;
  local_60[2] = lStack_f8;
  local_60[1] = local_100;
  local_60[3] = local_f0;
  local_100 = 0;
  lStack_f8 = 0;
  local_f0 = 0;
  local_60[5] = lStack_e0;
  local_60[4] = local_e8;
  local_60[6] = local_d8;
  local_60[10] = lStack_b8;
  local_60[9] = local_c0;
  local_60[0xb] = local_b0;
  local_e8 = 0;
  lStack_e0 = 0;
  local_d8 = 0;
  *(char *)(local_60 + 7) = (char)lVar5;
  *(short *)(local_60 + 8) = (short)lVar2;
  local_c0 = 0;
  lStack_b8 = 0;
  local_b0 = 0;
  *(char *)(local_60 + 0xc) = (char)lVar3;
  local_60[0xf] = local_90;
  local_60[0xe] = lStack_98;
  local_60[0xd] = local_a0;
  local_a0 = 0;
  lStack_98 = 0;
  local_90 = 0;
                    /* try { // try from 007bf2d8 to 007bf2ef has its CatchHandler @ 007bf354 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_118,local_80,2);
  if (local_60 == local_80) {
    lVar5 = 4;
    plVar4 = local_80;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_007bf31c;
    lVar5 = 5;
    plVar4 = local_60;
  }
  (**(code **)(*plVar4 + lVar5 * 8))();
LAB_007bf31c:
  if ((local_118 & 1) != 0) {
    operator_delete(local_108);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007bf3c4  FUN_007bf3c4 =====

void FUN_007bf3c4(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x60] & 1) == 0) {
    bVar1 = param_1[0x40];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x70));
    bVar1 = param_1[0x40];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x18];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x50));
    bVar1 = param_1[0x18];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x28));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 007bf440  facebook::react::DCDChatEventEmitter::onTapMessage =====

/* facebook::react::DCDChatEventEmitter::onTapMessage(facebook::react::DCDChatEventEmitter::OnTapMessage)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapMessage(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte local_78;
  char local_77 [8];
  undefined2 local_6f;
  undefined1 local_6d;
  void *local_68;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_6f = 0x6567;
  lVar7 = param_2[1];
  lVar5 = *param_2;
  lVar3 = param_2[2];
  local_78 = 0x14;
  lVar8 = param_2[4];
  lVar6 = param_2[3];
  lVar4 = param_2[5];
  local_77 = (char  [8])s_tapMessage_0036b2e7._0_8_;
  local_6d = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007bf4b4 to 007bf4bb has its CatchHandler @ 007bf5ac */
  local_40 = (long *)operator_new(0x38);
  *local_40 = (long)&PTR_FUN_00985980;
  local_40[2] = lVar7;
  local_40[1] = lVar5;
  local_40[3] = lVar3;
  local_40[5] = lVar8;
  local_40[4] = lVar6;
  local_40[6] = lVar4;
                    /* try { // try from 007bf500 to 007bf517 has its CatchHandler @ 007bf574 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007bf544;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007bf544:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007bf5e4  FUN_007bf5e4 =====

void FUN_007bf5e4(byte *param_1)

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


// ===== 007bf628  facebook::react::DCDChatEventEmitter::onDoubleTapMessage =====

/* facebook::react::DCDChatEventEmitter::onDoubleTapMessage(facebook::react::DCDChatEventEmitter::OnDoubleTapMessage)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onDoubleTapMessage(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte local_78;
  char local_77 [8];
  undefined7 uStack_6f;
  char cStack_68;
  undefined1 uStack_67;
  undefined6 uStack_66;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x20;
  lVar3 = param_2[2];
  uStack_6f = (undefined7)s_doubleTapMessage_0036ec5b._8_8_;
  cStack_68 = SUB81(s_doubleTapMessage_0036ec5b._8_8_,7);
  local_77 = (char  [8])s_doubleTapMessage_0036ec5b._0_8_;
  lVar7 = param_2[1];
  lVar5 = *param_2;
  lVar4 = param_2[5];
  lVar8 = param_2[4];
  lVar6 = param_2[3];
  uStack_67 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007bf694 to 007bf69b has its CatchHandler @ 007bf78c */
  local_40 = (long *)operator_new(0x38);
  *local_40 = (long)&PTR_FUN_00985a00;
  local_40[2] = lVar7;
  local_40[1] = lVar5;
  local_40[3] = lVar3;
  local_40[5] = lVar8;
  local_40[4] = lVar6;
  local_40[6] = lVar4;
                    /* try { // try from 007bf6e0 to 007bf6f7 has its CatchHandler @ 007bf754 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007bf724;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007bf724:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_66,CONCAT11(uStack_67,cStack_68)));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007bf7c4  FUN_007bf7c4 =====

void FUN_007bf7c4(byte *param_1)

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


// ===== 007bf808  facebook::react::DCDChatEventEmitter::onLongPressReaction =====

/* facebook::react::DCDChatEventEmitter::onLongPressReaction(facebook::react::DCDChatEventEmitter::OnLongPressReaction)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onLongPressReaction(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  byte local_128;
  char local_127 [8];
  undefined7 uStack_11f;
  char cStack_118;
  undefined2 uStack_117;
  undefined5 uStack_115;
  long local_110;
  long lStack_108;
  long local_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  undefined1 local_e0;
  undefined2 local_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  undefined1 local_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uStack_11f = (undefined7)s_longPressReaction_003692eb._8_8_;
  cStack_118 = SUB81(s_longPressReaction_003692eb._8_8_,7);
  local_127 = (char  [8])s_longPressReaction_003692eb._0_8_;
  lStack_108 = param_2[1];
  local_110 = *param_2;
  lVar5 = param_2[6];
  uStack_117 = 0x6e;
  local_100 = param_2[2];
  lVar2 = param_2[7];
  lStack_f0 = param_2[4];
  local_f8 = param_2[3];
  lVar3 = param_2[0xb];
  local_e8 = param_2[5];
  lStack_c8 = param_2[9];
  local_d0 = param_2[8];
  local_c0 = param_2[10];
  lStack_a8 = param_2[0xd];
  local_b0 = param_2[0xc];
  local_a0 = param_2[0xe];
  lStack_90 = param_2[0x10];
  local_98 = param_2[0xf];
  local_88 = param_2[0x11];
  local_128 = 0x22;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  local_60 = (long *)0x0;
  local_e0 = (char)lVar5;
  local_d8 = (short)lVar2;
  local_b8 = (char)lVar3;
                    /* try { // try from 007bf8dc to 007bf8e3 has its CatchHandler @ 007bfa2c */
  local_60 = (long *)operator_new(0x98);
  *local_60 = (long)&PTR_FUN_00985a80;
  local_60[2] = lStack_108;
  local_60[1] = local_110;
  local_60[3] = local_100;
  local_110 = 0;
  lStack_108 = 0;
  local_100 = 0;
  local_60[5] = lStack_f0;
  local_60[4] = local_f8;
  local_60[6] = local_e8;
  local_60[10] = lStack_c8;
  local_60[9] = local_d0;
  local_60[0xb] = local_c0;
  local_60[0xe] = lStack_a8;
  local_60[0xd] = local_b0;
  local_60[0xf] = local_a0;
  local_f8 = 0;
  lStack_f0 = 0;
  local_e8 = 0;
  *(char *)(local_60 + 7) = (char)lVar5;
  *(short *)(local_60 + 8) = (short)lVar2;
  local_d0 = 0;
  lStack_c8 = 0;
  local_c0 = 0;
  *(char *)(local_60 + 0xc) = (char)lVar3;
  local_b0 = 0;
  lStack_a8 = 0;
  local_60[0x12] = local_88;
  local_60[0x11] = lStack_90;
  local_60[0x10] = local_98;
  local_a0 = 0;
  local_98 = 0;
  lStack_90 = 0;
  local_88 = 0;
                    /* try { // try from 007bf978 to 007bf98f has its CatchHandler @ 007bf9f4 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_128,local_80,2);
  if (local_60 == local_80) {
    lVar5 = 4;
    plVar4 = local_80;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_007bf9bc;
    lVar5 = 5;
    plVar4 = local_60;
  }
  (**(code **)(*plVar4 + lVar5 * 8))();
LAB_007bf9bc:
  if ((local_128 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_115,CONCAT21(uStack_117,cStack_118)));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007bfa64  FUN_007bfa64 =====

void FUN_007bfa64(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x78] & 1) == 0) {
    bVar1 = param_1[0x60];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x88));
    bVar1 = param_1[0x60];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x40];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x70));
    bVar1 = param_1[0x40];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x18];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x50));
    bVar1 = param_1[0x18];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x28));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 007bfaf8  facebook::react::DCDChatEventEmitter::onLongPressMessage =====

/* facebook::react::DCDChatEventEmitter::onLongPressMessage(facebook::react::DCDChatEventEmitter::OnLongPressMessage)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onLongPressMessage(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  byte local_f8;
  char local_f7 [8];
  undefined7 uStack_ef;
  char cStack_e8;
  undefined1 uStack_e7;
  undefined6 uStack_e6;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  undefined4 local_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long local_90;
  long lStack_88;
  long local_80;
  undefined4 local_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_ef = (undefined7)s_longPressMessage_003692fd._8_8_;
  cStack_e8 = SUB81(s_longPressMessage_003692fd._8_8_,7);
  local_f7 = (char  [8])s_longPressMessage_003692fd._0_8_;
  lStack_d8 = param_2[1];
  local_e0 = *param_2;
  local_d0 = param_2[2];
  lVar4 = param_2[6];
  lVar2 = param_2[0xd];
  local_f8 = 0x20;
  lStack_c0 = param_2[4];
  local_c8 = param_2[3];
  local_b8 = param_2[5];
  lStack_a0 = param_2[8];
  local_a8 = param_2[7];
  local_98 = param_2[9];
  lStack_88 = param_2[0xb];
  local_90 = param_2[10];
  local_80 = param_2[0xc];
  uStack_e7 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  local_50 = (long *)0x0;
  local_b0 = (int)lVar4;
  local_78 = (int)lVar2;
                    /* try { // try from 007bfba4 to 007bfbab has its CatchHandler @ 007bfcd4 */
  local_50 = (long *)operator_new(0x78);
  *local_50 = (long)&PTR_FUN_00985b00;
  local_50[2] = lStack_d8;
  local_50[1] = local_e0;
  local_50[3] = local_d0;
  local_e0 = 0;
  lStack_d8 = 0;
  local_d0 = 0;
  local_50[5] = lStack_c0;
  local_50[4] = local_c8;
  local_50[6] = local_b8;
  local_50[9] = lStack_a0;
  local_50[8] = local_a8;
  local_50[10] = local_98;
  local_c8 = 0;
  lStack_c0 = 0;
  local_b8 = 0;
  *(int *)(local_50 + 7) = (int)lVar4;
  local_a8 = 0;
  lStack_a0 = 0;
  local_50[0xd] = local_80;
  local_50[0xc] = lStack_88;
  local_50[0xb] = local_90;
  local_98 = 0;
  local_90 = 0;
  lStack_88 = 0;
  local_80 = 0;
  *(int *)(local_50 + 0xe) = (int)lVar2;
                    /* try { // try from 007bfc24 to 007bfc3b has its CatchHandler @ 007bfc9c */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_f8,local_70,2);
  if (local_50 == local_70) {
    lVar4 = 4;
    plVar3 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007bfc68;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007bfc68:
  if ((local_f8 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_e6,CONCAT11(uStack_e7,cStack_e8)));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007bfd0c  FUN_007bfd0c =====

void FUN_007bfd0c(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x50] & 1) == 0) {
    bVar1 = param_1[0x38];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x60));
    bVar1 = param_1[0x38];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x18];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x48));
    bVar1 = param_1[0x18];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x28));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 007bfd88  facebook::react::DCDChatEventEmitter::onInitiateReply =====

/* facebook::react::DCDChatEventEmitter::onInitiateReply(facebook::react::DCDChatEventEmitter::OnInitiateReply)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onInitiateReply(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  byte local_88;
  char local_87 [5];
  char acStack_82 [3];
  char acStack_7f [5];
  undefined1 local_7a;
  void *local_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar10 = param_2[1];
  lVar7 = *param_2;
  lVar6 = param_2[6];
  local_88 = 0x1a;
  local_87 = s_initi_0036b2f2;
  lVar3 = param_2[2];
  lVar11 = param_2[4];
  lVar8 = param_2[3];
  lVar4 = param_2[5];
  lVar12 = param_2[8];
  lVar9 = param_2[7];
  lVar5 = param_2[9];
  acStack_82 = (char  [3])s_ateReply_0036b2f7._0_3_;
  acStack_7f = (char  [5])s_ateReply_0036b2f7._3_5_;
  local_7a = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  local_50 = (long *)0x0;
                    /* try { // try from 007bfe20 to 007bfe27 has its CatchHandler @ 007bff38 */
  local_50 = (long *)operator_new(0x58);
  *local_50 = (long)&PTR_FUN_00985b80;
  local_50[2] = lVar10;
  local_50[1] = lVar7;
  local_50[3] = lVar3;
  local_50[5] = lVar11;
  local_50[4] = lVar8;
  local_50[6] = lVar4;
  *(char *)(local_50 + 7) = (char)lVar6;
  local_50[10] = lVar5;
  local_50[9] = lVar12;
  local_50[8] = lVar9;
                    /* try { // try from 007bfe88 to 007bfe9f has its CatchHandler @ 007bff00 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_88,local_70,2);
  if (local_50 == local_70) {
    lVar6 = 4;
    plVar2 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007bfecc;
    lVar6 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar6 * 8))();
LAB_007bfecc:
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007bff70  FUN_007bff70 =====

void FUN_007bff70(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x38] & 1) == 0) {
    bVar1 = param_1[0x18];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x48));
    bVar1 = param_1[0x18];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x28));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 007bffd4  facebook::react::DCDChatEventEmitter::onInitiateThread =====

/* facebook::react::DCDChatEventEmitter::onInitiateThread(facebook::react::DCDChatEventEmitter::OnInitiateThread)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onInitiateThread(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte local_78;
  char local_77 [6];
  char acStack_71 [2];
  char acStack_6f [6];
  undefined1 local_69;
  void *local_68;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar7 = param_2[1];
  lVar5 = *param_2;
  local_78 = 0x1c;
  local_77 = s_initia_0036930e;
  lVar3 = param_2[2];
  lVar8 = param_2[4];
  lVar6 = param_2[3];
  lVar4 = param_2[5];
  acStack_71 = (char  [2])s_teThread_00369314._0_2_;
  acStack_6f = (char  [6])s_teThread_00369314._2_6_;
  local_69 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007c0048 to 007c004f has its CatchHandler @ 007c0140 */
  local_40 = (long *)operator_new(0x38);
  *local_40 = (long)&PTR_FUN_00985c00;
  local_40[2] = lVar7;
  local_40[1] = lVar5;
  local_40[3] = lVar3;
  local_40[5] = lVar8;
  local_40[4] = lVar6;
  local_40[6] = lVar4;
                    /* try { // try from 007c0094 to 007c00ab has its CatchHandler @ 007c0108 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007c00d8;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007c00d8:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c0178  FUN_007c0178 =====

void FUN_007c0178(byte *param_1)

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


// ===== 007c01bc  facebook::react::DCDChatEventEmitter::onInitiateEdit =====

/* facebook::react::DCDChatEventEmitter::onInitiateEdit(facebook::react::DCDChatEventEmitter::OnInitiateEdit)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onInitiateEdit(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte local_78;
  char local_77 [8];
  undefined4 local_6f;
  undefined1 local_6b;
  void *local_68;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar7 = param_2[1];
  lVar5 = *param_2;
  local_78 = 0x18;
  local_6f = 0x74696445;
  lVar3 = param_2[2];
  lVar8 = param_2[4];
  lVar6 = param_2[3];
  lVar4 = param_2[5];
  local_6b = 0;
  local_77 = (char  [8])s_initiateEdit_0036a748._0_8_;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007c0234 to 007c023b has its CatchHandler @ 007c032c */
  local_40 = (long *)operator_new(0x38);
  *local_40 = (long)&PTR_FUN_00985c80;
  local_40[2] = lVar7;
  local_40[1] = lVar5;
  local_40[3] = lVar3;
  local_40[5] = lVar8;
  local_40[4] = lVar6;
  local_40[6] = lVar4;
                    /* try { // try from 007c0280 to 007c0297 has its CatchHandler @ 007c02f4 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007c02c4;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007c02c4:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c0364  FUN_007c0364 =====

void FUN_007c0364(byte *param_1)

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


// ===== 007c03a8  facebook::react::DCDChatEventEmitter::onTapSeparator =====

/* facebook::react::DCDChatEventEmitter::onTapSeparator(facebook::react::DCDChatEventEmitter::OnTapSeparator)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapSeparator(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte local_78;
  char local_77 [8];
  undefined4 local_6f;
  undefined1 local_6b;
  void *local_68;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar7 = param_2[1];
  lVar5 = *param_2;
  local_78 = 0x18;
  local_6f = 0x726f7461;
  lVar3 = param_2[2];
  lVar8 = param_2[4];
  lVar6 = param_2[3];
  lVar4 = param_2[5];
  local_6b = 0;
  local_77 = (char  [8])s_tapSeparator_0036a755._0_8_;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007c0420 to 007c0427 has its CatchHandler @ 007c0518 */
  local_40 = (long *)operator_new(0x38);
  *local_40 = (long)&PTR_FUN_00985d00;
  local_40[2] = lVar7;
  local_40[1] = lVar5;
  local_40[3] = lVar3;
  local_40[5] = lVar8;
  local_40[4] = lVar6;
  local_40[6] = lVar4;
                    /* try { // try from 007c046c to 007c0483 has its CatchHandler @ 007c04e0 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007c04b0;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007c04b0:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c0550  FUN_007c0550 =====

void FUN_007c0550(byte *param_1)

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


// ===== 007c0594  facebook::react::DCDChatEventEmitter::onTapInviteEmbed =====

/* facebook::react::DCDChatEventEmitter::onTapInviteEmbed(facebook::react::DCDChatEventEmitter::OnTapInviteEmbed)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapInviteEmbed
          (DCDChatEventEmitter *this,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  byte local_a8;
  char local_a7 [6];
  char acStack_a1 [2];
  char acStack_9f [6];
  undefined1 local_99;
  void *local_98;
  undefined7 local_90;
  undefined1 uStack_89;
  undefined7 uStack_88;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar2 = *(undefined1 *)param_2;
  local_a8 = 0x1c;
  local_a7 = s_tapInv_00366247;
  acStack_a1 = (char  [2])s_iteEmbed_0036624d._0_2_;
  acStack_9f = (char  [6])s_iteEmbed_0036624d._2_6_;
  lVar6 = param_2[2];
  local_99 = 0;
  local_90 = (undefined7)*(undefined8 *)((long)param_2 + 1);
  uStack_89 = (undefined1)param_2[1];
  uStack_88 = (undefined7)((ulong)param_2[1] >> 8);
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
                    /* try { // try from 007c0600 to 007c0607 has its CatchHandler @ 007c06f0 */
  local_60 = (long *)operator_new(0x28);
  *local_60 = (long)&PTR_FUN_00985d80;
  *(undefined1 *)(local_60 + 1) = uVar2;
  *(ulong *)((long)local_60 + 9) = CONCAT17(uStack_89,local_90);
  uVar1 = *(undefined4 *)(param_2 + 3);
  local_60[2] = CONCAT71(uStack_88,uStack_89);
  local_60[3] = lVar6;
  uVar3 = *(undefined2 *)((long)param_2 + 0x1c);
  *(undefined4 *)(local_60 + 4) = uVar1;
  *(undefined2 *)((long)local_60 + 0x24) = uVar3;
                    /* try { // try from 007c063c to 007c0653 has its CatchHandler @ 007c06b8 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_a8,local_80,2);
  if (local_60 == local_80) {
    lVar6 = 4;
    plVar5 = local_80;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_007c0680;
    lVar6 = 5;
    plVar5 = local_60;
  }
  (**(code **)(*plVar5 + lVar6 * 8))();
LAB_007c0680:
  if ((local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c072c  facebook::react::DCDChatEventEmitter::onTapInviteEmbedAccept =====

/* facebook::react::DCDChatEventEmitter::onTapInviteEmbedAccept(facebook::react::DCDChatEventEmitter::OnTapInviteEmbedAccept)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapInviteEmbedAccept
          (DCDChatEventEmitter *this,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  byte local_a8;
  char local_a7 [8];
  undefined7 uStack_9f;
  char cStack_98;
  undefined4 uStack_97;
  undefined1 uStack_93;
  undefined2 uStack_92;
  undefined7 local_90;
  undefined1 uStack_89;
  undefined7 uStack_88;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  local_a8 = 0x28;
  lVar6 = param_2[2];
  uStack_97 = 0x74706563;
  uVar2 = *(undefined1 *)param_2;
  uStack_9f = (undefined7)s_tapInviteEmbedAccept_0036d8bf._8_8_;
  cStack_98 = SUB81(s_tapInviteEmbedAccept_0036d8bf._8_8_,7);
  local_a7 = (char  [8])s_tapInviteEmbedAccept_0036d8bf._0_8_;
  uStack_93 = 0;
  local_90 = (undefined7)*(undefined8 *)((long)param_2 + 1);
  uStack_89 = (undefined1)param_2[1];
  uStack_88 = (undefined7)((ulong)param_2[1] >> 8);
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
                    /* try { // try from 007c079c to 007c07a3 has its CatchHandler @ 007c088c */
  local_60 = (long *)operator_new(0x28);
  *local_60 = (long)&PTR_FUN_00985e00;
  *(undefined1 *)(local_60 + 1) = uVar2;
  *(ulong *)((long)local_60 + 9) = CONCAT17(uStack_89,local_90);
  uVar1 = *(undefined4 *)(param_2 + 3);
  local_60[2] = CONCAT71(uStack_88,uStack_89);
  local_60[3] = lVar6;
  uVar3 = *(undefined2 *)((long)param_2 + 0x1c);
  *(undefined4 *)(local_60 + 4) = uVar1;
  *(undefined2 *)((long)local_60 + 0x24) = uVar3;
                    /* try { // try from 007c07d8 to 007c07ef has its CatchHandler @ 007c0854 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_a8,local_80,2);
  if (local_60 == local_80) {
    lVar6 = 4;
    plVar5 = local_80;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_007c081c;
    lVar6 = 5;
    plVar5 = local_60;
  }
  (**(code **)(*plVar5 + lVar6 * 8))();
LAB_007c081c:
  if ((local_a8 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_92,CONCAT15(uStack_93,CONCAT41(uStack_97,cStack_98))));
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c08c8  facebook::react::DCDChatEventEmitter::onTapJoinActivity =====

/* facebook::react::DCDChatEventEmitter::onTapJoinActivity(facebook::react::DCDChatEventEmitter::OnTapJoinActivity)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapJoinActivity(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte local_78;
  char local_77 [7];
  char cStack_70;
  char acStack_6f [7];
  undefined1 local_68;
  undefined7 uStack_67;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar7 = param_2[1];
  lVar5 = *param_2;
  local_78 = 0x1e;
  local_77 = s_tapJoin_0036b300;
  lVar3 = param_2[2];
  lVar8 = param_2[4];
  lVar6 = param_2[3];
  lVar4 = param_2[5];
  cStack_70 = s_Activity_0036b307[0];
  acStack_6f = (char  [7])s_Activity_0036b307._1_7_;
  local_68 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007c093c to 007c0943 has its CatchHandler @ 007c0a34 */
  local_40 = (long *)operator_new(0x38);
  *local_40 = (long)&PTR_FUN_00985e80;
  local_40[2] = lVar7;
  local_40[1] = lVar5;
  local_40[3] = lVar3;
  local_40[5] = lVar8;
  local_40[4] = lVar6;
  local_40[6] = lVar4;
                    /* try { // try from 007c0988 to 007c099f has its CatchHandler @ 007c09fc */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007c09cc;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007c09cc:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_67,local_68));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c0a6c  FUN_007c0a6c =====

void FUN_007c0a6c(byte *param_1)

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


// ===== 007c0ab0  facebook::react::DCDChatEventEmitter::onTapJoinRichPresence =====

/* facebook::react::DCDChatEventEmitter::onTapJoinRichPresence(facebook::react::DCDChatEventEmitter::OnTapJoinRichPresence)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapJoinRichPresence
          (DCDChatEventEmitter *this,undefined8 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  byte local_98;
  char local_97 [8];
  undefined7 uStack_8f;
  undefined4 uStack_88;
  uint uStack_84;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_98 = 0x26;
  lVar4 = param_2[2];
  uVar1 = *(undefined1 *)param_2;
  uStack_8f = (undefined7)s_tapJoinRichPresence_00365c41._8_8_;
  uStack_88 = CONCAT31(0x65636e,SUB81(s_tapJoinRichPresence_00365c41._8_8_,7));
  local_97 = (char  [8])s_tapJoinRichPresence_00365c41._0_8_;
  uStack_84 = uStack_84 & 0xffffff00;
  local_80 = (undefined7)*(undefined8 *)((long)param_2 + 1);
  uStack_79 = (undefined1)param_2[1];
  uStack_78 = (undefined7)((ulong)param_2[1] >> 8);
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
                    /* try { // try from 007c0b18 to 007c0b1f has its CatchHandler @ 007c0bf4 */
  local_50 = (long *)operator_new(0x20);
  *local_50 = (long)&PTR_FUN_00985f00;
  *(undefined1 *)(local_50 + 1) = uVar1;
  *(ulong *)((long)local_50 + 9) = CONCAT17(uStack_79,local_80);
  local_50[2] = CONCAT71(uStack_78,uStack_79);
  local_50[3] = lVar4;
                    /* try { // try from 007c0b44 to 007c0b5b has its CatchHandler @ 007c0bbc */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_98,local_70,2);
  if (local_50 == local_70) {
    lVar4 = 4;
    plVar3 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007c0b88;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007c0b88:
  if ((local_98 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_84,uStack_88));
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c0c30  facebook::react::DCDChatEventEmitter::onPressKey =====

/* facebook::react::DCDChatEventEmitter::onPressKey(facebook::react::DCDChatEventEmitter::OnPressKey)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onPressKey(DCDChatEventEmitter *this,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  byte local_98 [16];
  void *local_88;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar2 = *(undefined1 *)param_2;
  local_98[0] = 0x10;
  local_98[9] = 0;
  local_98[1] = 0x70;
  local_98[2] = 0x72;
  local_98[3] = 0x65;
  local_98[4] = 0x73;
  local_98[5] = 0x73;
  local_98[6] = 0x4b;
  local_98[7] = 0x65;
  local_98[8] = 0x79;
  *param_2 = 0;
  local_80 = (undefined7)*(undefined8 *)((long)param_2 + 1);
  uVar1 = param_2[1];
  lVar5 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  uStack_79 = (undefined1)uVar1;
  uStack_78 = (undefined7)((ulong)uVar1 >> 8);
                    /* try { // try from 007c0c90 to 007c0c97 has its CatchHandler @ 007c0d6c */
  local_50 = (long *)operator_new(0x20);
  *local_50 = (long)&PTR_FUN_00985f80;
  *(undefined1 *)(local_50 + 1) = uVar2;
  *(ulong *)((long)local_50 + 9) = CONCAT17(uStack_79,local_80);
  local_50[2] = CONCAT71(uStack_78,uStack_79);
  local_50[3] = lVar5;
                    /* try { // try from 007c0cbc to 007c0cd3 has its CatchHandler @ 007c0d34 */
  ::facebook::react::EventEmitter::dispatchEvent(this,local_98,local_70,2);
  if (local_50 == local_70) {
    lVar5 = 4;
    plVar4 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007c0d00;
    lVar5 = 5;
    plVar4 = local_50;
  }
  (**(code **)(*plVar4 + lVar5 * 8))();
LAB_007c0d00:
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c0da8  facebook::react::DCDChatEventEmitter::onTapGiftCodeEmbed =====

/* facebook::react::DCDChatEventEmitter::onTapGiftCodeEmbed(facebook::react::DCDChatEventEmitter::OnTapGiftCodeEmbed)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapGiftCodeEmbed(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte local_78;
  char local_77 [8];
  undefined7 uStack_6f;
  char cStack_68;
  undefined1 uStack_67;
  undefined6 uStack_66;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x20;
  lVar3 = param_2[2];
  uStack_6f = (undefined7)s_tapGiftCodeEmbed_0036c432._8_8_;
  cStack_68 = SUB81(s_tapGiftCodeEmbed_0036c432._8_8_,7);
  local_77 = (char  [8])s_tapGiftCodeEmbed_0036c432._0_8_;
  lVar7 = param_2[1];
  lVar5 = *param_2;
  lVar4 = param_2[5];
  lVar8 = param_2[4];
  lVar6 = param_2[3];
  uStack_67 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007c0e14 to 007c0e1b has its CatchHandler @ 007c0f0c */
  local_40 = (long *)operator_new(0x38);
  *local_40 = (long)&PTR_FUN_00986000;
  local_40[2] = lVar7;
  local_40[1] = lVar5;
  local_40[3] = lVar3;
  local_40[5] = lVar8;
  local_40[4] = lVar6;
  local_40[6] = lVar4;
                    /* try { // try from 007c0e60 to 007c0e77 has its CatchHandler @ 007c0ed4 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007c0ea4;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007c0ea4:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_66,CONCAT11(uStack_67,cStack_68)));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c0f44  FUN_007c0f44 =====

void FUN_007c0f44(byte *param_1)

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


// ===== 007c0f88  facebook::react::DCDChatEventEmitter::onTapGiftCodeAccept =====

/* facebook::react::DCDChatEventEmitter::onTapGiftCodeAccept(facebook::react::DCDChatEventEmitter::OnTapGiftCodeAccept)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapGiftCodeAccept(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte local_78;
  char local_77 [8];
  undefined7 uStack_6f;
  char cStack_68;
  undefined2 uStack_67;
  undefined5 uStack_65;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x22;
  uStack_6f = (undefined7)s_tapGiftCodeAccept_003672e4._8_8_;
  cStack_68 = SUB81(s_tapGiftCodeAccept_003672e4._8_8_,7);
  local_77 = (char  [8])s_tapGiftCodeAccept_003672e4._0_8_;
  lVar7 = param_2[1];
  lVar5 = *param_2;
  uStack_67 = 0x74;
  lVar3 = param_2[2];
  lVar8 = param_2[4];
  lVar6 = param_2[3];
  lVar4 = param_2[5];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007c0ff8 to 007c0fff has its CatchHandler @ 007c10f0 */
  local_40 = (long *)operator_new(0x38);
  *local_40 = (long)&PTR_FUN_00986080;
  local_40[2] = lVar7;
  local_40[1] = lVar5;
  local_40[3] = lVar3;
  local_40[5] = lVar8;
  local_40[4] = lVar6;
  local_40[6] = lVar4;
                    /* try { // try from 007c1044 to 007c105b has its CatchHandler @ 007c10b8 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007c1088;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007c1088:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_65,CONCAT21(uStack_67,cStack_68)));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c1128  FUN_007c1128 =====

void FUN_007c1128(byte *param_1)

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


// ===== 007c116c  facebook::react::DCDChatEventEmitter::onTapReferralRedeem =====

/* facebook::react::DCDChatEventEmitter::onTapReferralRedeem(facebook::react::DCDChatEventEmitter::OnTapReferralRedeem)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapReferralRedeem
          (DCDChatEventEmitter *this,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  byte local_98;
  char local_97 [8];
  undefined7 uStack_8f;
  char cStack_88;
  undefined2 uStack_87;
  undefined5 uStack_85;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar2 = *(undefined1 *)param_2;
  uStack_87 = 0x6d;
  local_98 = 0x22;
  local_80 = (undefined7)*(undefined8 *)((long)param_2 + 1);
  uVar1 = param_2[1];
  lVar5 = param_2[2];
  uStack_8f = (undefined7)s_tapReferralRedeem_0036df14._8_8_;
  cStack_88 = SUB81(s_tapReferralRedeem_0036df14._8_8_,7);
  local_97 = (char  [8])s_tapReferralRedeem_0036df14._0_8_;
  param_2[1] = 0;
  param_2[2] = 0;
  uStack_79 = (undefined1)uVar1;
  uStack_78 = (undefined7)((ulong)uVar1 >> 8);
  *param_2 = 0;
                    /* try { // try from 007c11cc to 007c11d3 has its CatchHandler @ 007c12a8 */
  local_50 = (long *)operator_new(0x20);
  *local_50 = (long)&PTR_FUN_00986100;
  *(undefined1 *)(local_50 + 1) = uVar2;
  *(ulong *)((long)local_50 + 9) = CONCAT17(uStack_79,local_80);
  local_50[2] = CONCAT71(uStack_78,uStack_79);
  local_50[3] = lVar5;
                    /* try { // try from 007c11f8 to 007c120f has its CatchHandler @ 007c1270 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_98,local_70,2);
  if (local_50 == local_70) {
    lVar5 = 4;
    plVar4 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007c123c;
    lVar5 = 5;
    plVar4 = local_50;
  }
  (**(code **)(*plVar4 + lVar5 * 8))();
LAB_007c123c:
  if ((local_98 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_85,CONCAT21(uStack_87,cStack_88)));
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c12e4  facebook::react::DCDChatEventEmitter::onGiftIntentCardViewed =====

/* facebook::react::DCDChatEventEmitter::onGiftIntentCardViewed(facebook::react::DCDChatEventEmitter::OnGiftIntentCardViewed)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onGiftIntentCardViewed
          (DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  byte local_c8;
  char local_c7 [8];
  undefined7 uStack_bf;
  char cStack_b8;
  undefined4 uStack_b7;
  undefined1 uStack_b3;
  undefined2 uStack_b2;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long local_98;
  long lStack_90;
  long local_88;
  undefined4 local_80;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = param_2[6];
  local_c8 = 0x28;
  uStack_b7 = 0x64657765;
  local_a0 = param_2[2];
  uStack_bf = (undefined7)s_giftIntentCardViewed_003669c2._8_8_;
  cStack_b8 = SUB81(s_giftIntentCardViewed_003669c2._8_8_,7);
  local_c7 = (char  [8])s_giftIntentCardViewed_003669c2._0_8_;
  lStack_a8 = param_2[1];
  local_b0 = *param_2;
  local_88 = param_2[5];
  lStack_90 = param_2[4];
  local_98 = param_2[3];
  uStack_b3 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_50 = (long *)0x0;
  local_80 = (int)lVar3;
                    /* try { // try from 007c1368 to 007c136f has its CatchHandler @ 007c1468 */
  local_50 = (long *)operator_new(0x40);
  *local_50 = (long)&PTR_FUN_00986180;
  local_50[2] = lStack_a8;
  local_50[1] = local_b0;
  local_50[3] = local_a0;
  local_b0 = 0;
  lStack_a8 = 0;
  local_a0 = 0;
  local_50[5] = lStack_90;
  local_50[4] = local_98;
  local_50[6] = local_88;
  local_98 = 0;
  lStack_90 = 0;
  local_88 = 0;
  *(int *)(local_50 + 7) = (int)lVar3;
                    /* try { // try from 007c13b8 to 007c13cf has its CatchHandler @ 007c1430 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_c8,local_70,2);
  if (local_50 == local_70) {
    lVar3 = 4;
    plVar2 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007c13fc;
    lVar3 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007c13fc:
  if ((local_c8 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_b2,CONCAT15(uStack_b3,CONCAT41(uStack_b7,cStack_b8))));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c14a0  FUN_007c14a0 =====

void FUN_007c14a0(byte *param_1)

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


// ===== 007c14e4  facebook::react::DCDChatEventEmitter::onTapGiftIntentPrimaryCta =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::DCDChatEventEmitter::onTapGiftIntentPrimaryCta(facebook::react::DCDChatEventEmitter::OnTapGiftIntentPrimaryCta)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapGiftIntentPrimaryCta
          (DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ulong local_d0;
  undefined8 uStack_c8;
  char *local_c0;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long local_98;
  long lStack_90;
  long local_88;
  undefined4 local_80;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_c0 = (char *)operator_new(0x20);
  uVar3 = s_tapGiftIntentPr_0036ec6c._0_8_;
  uVar2 = CONCAT71(s_imaryCta_0036ec7b._1_7_,s_imaryCta_0036ec7b[0]);
  lVar5 = param_2[6];
  *(ulong *)(local_c0 + 8) = CONCAT17(s_imaryCta_0036ec7b[0],s_tapGiftIntentPr_0036ec6c._8_7_);
  *(undefined8 *)local_c0 = uVar3;
  uStack_c8 = _UNK_00372d28;
  local_d0 = _s___00372d20;
  *(undefined8 *)(local_c0 + 0xf) = uVar2;
  local_a0 = param_2[2];
  lStack_a8 = param_2[1];
  local_b0 = *param_2;
  local_88 = param_2[5];
  lStack_90 = param_2[4];
  local_98 = param_2[3];
  local_c0[0x17] = '\0';
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_50 = (long *)0x0;
  local_80 = (int)lVar5;
                    /* try { // try from 007c1578 to 007c157f has its CatchHandler @ 007c1678 */
  local_50 = (long *)operator_new(0x40);
  *local_50 = (long)&PTR_FUN_00986200;
  local_50[2] = lStack_a8;
  local_50[1] = local_b0;
  local_50[3] = local_a0;
  local_b0 = 0;
  lStack_a8 = 0;
  local_a0 = 0;
  local_50[5] = lStack_90;
  local_50[4] = local_98;
  local_50[6] = local_88;
  local_98 = 0;
  lStack_90 = 0;
  local_88 = 0;
  *(int *)(local_50 + 7) = (int)lVar5;
                    /* try { // try from 007c15c8 to 007c15df has its CatchHandler @ 007c1640 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_d0,local_70,2);
  if (local_50 == local_70) {
    lVar5 = 4;
    plVar4 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007c160c;
    lVar5 = 5;
    plVar4 = local_50;
  }
  (**(code **)(*plVar4 + lVar5 * 8))();
LAB_007c160c:
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c16b0  FUN_007c16b0 =====

void FUN_007c16b0(byte *param_1)

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


// ===== 007c16f4  facebook::react::DCDChatEventEmitter::onTapGiftIntentSecondaryCta =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::DCDChatEventEmitter::onTapGiftIntentSecondaryCta(facebook::react::DCDChatEventEmitter::OnTapGiftIntentSecondaryCta)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapGiftIntentSecondaryCta
          (DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong local_d0;
  undefined8 uStack_c8;
  char *local_c0;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long local_98;
  long lStack_90;
  long local_88;
  undefined4 local_80;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_c0 = (char *)operator_new(0x20);
  uVar4 = s_tentSecondaryCta_0036a76b._8_8_;
  uVar3 = s_tapGiftIn_0036a762._0_8_;
  lVar6 = param_2[6];
  uVar2 = CONCAT17(s_tentSecondaryCta_0036a76b[7],s_tentSecondaryCta_0036a76b._0_7_);
  *(ulong *)(local_c0 + 8) = CONCAT71(s_tentSecondaryCta_0036a76b._0_7_,s_tapGiftIn_0036a762[8]);
  *(undefined8 *)local_c0 = uVar3;
  uStack_c8 = _UNK_00371d78;
  local_d0 = _s___00371d70;
  local_a0 = param_2[2];
  *(undefined8 *)(local_c0 + 0x11) = uVar4;
  *(undefined8 *)(local_c0 + 9) = uVar2;
  lStack_a8 = param_2[1];
  local_b0 = *param_2;
  local_88 = param_2[5];
  lStack_90 = param_2[4];
  local_98 = param_2[3];
  local_c0[0x19] = '\0';
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_50 = (long *)0x0;
  local_80 = (int)lVar6;
                    /* try { // try from 007c1788 to 007c178f has its CatchHandler @ 007c1888 */
  local_50 = (long *)operator_new(0x40);
  *local_50 = (long)&PTR_FUN_00986280;
  local_50[2] = lStack_a8;
  local_50[1] = local_b0;
  local_50[3] = local_a0;
  local_b0 = 0;
  lStack_a8 = 0;
  local_a0 = 0;
  local_50[5] = lStack_90;
  local_50[4] = local_98;
  local_50[6] = local_88;
  local_98 = 0;
  lStack_90 = 0;
  local_88 = 0;
  *(int *)(local_50 + 7) = (int)lVar6;
                    /* try { // try from 007c17d8 to 007c17ef has its CatchHandler @ 007c1850 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_d0,local_70,2);
  if (local_50 == local_70) {
    lVar6 = 4;
    plVar5 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007c181c;
    lVar6 = 5;
    plVar5 = local_50;
  }
  (**(code **)(*plVar5 + lVar6 * 8))();
LAB_007c181c:
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c18c0  FUN_007c18c0 =====

void FUN_007c18c0(byte *param_1)

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


// ===== 007c1904  facebook::react::DCDChatEventEmitter::onTapAvatar =====

/* facebook::react::DCDChatEventEmitter::onTapAvatar(facebook::react::DCDChatEventEmitter::OnTapAvatar)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapAvatar(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte local_78;
  char local_77 [8];
  undefined2 local_6f;
  void *local_68;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_6f = 0x72;
  lVar7 = param_2[1];
  lVar5 = *param_2;
  lVar3 = param_2[2];
  local_78 = 0x12;
  lVar8 = param_2[4];
  lVar6 = param_2[3];
  lVar4 = param_2[5];
  local_77 = (char  [8])s_tapAvatar_003705b0._0_8_;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007c1974 to 007c197b has its CatchHandler @ 007c1a6c */
  local_40 = (long *)operator_new(0x38);
  *local_40 = (long)&PTR_FUN_00986300;
  local_40[2] = lVar7;
  local_40[1] = lVar5;
  local_40[3] = lVar3;
  local_40[5] = lVar8;
  local_40[4] = lVar6;
  local_40[6] = lVar4;
                    /* try { // try from 007c19c0 to 007c19d7 has its CatchHandler @ 007c1a34 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007c1a04;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007c1a04:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c1aa4  FUN_007c1aa4 =====

void FUN_007c1aa4(byte *param_1)

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


// ===== 007c1ae8  facebook::react::DCDChatEventEmitter::onTapSticker =====

/* facebook::react::DCDChatEventEmitter::onTapSticker(facebook::react::DCDChatEventEmitter::OnTapSticker)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapSticker(DCDChatEventEmitter *this,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  byte local_98;
  char local_97 [8];
  undefined2 local_8f;
  undefined1 local_8d;
  void *local_88;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_98 = 0x14;
  local_8f = 0x7265;
  uVar2 = *(undefined1 *)param_2;
  local_8d = 0;
  local_97 = (char  [8])s_tapSticker_0036c443._0_8_;
  uVar1 = param_2[1];
  lVar5 = param_2[2];
  local_80 = (undefined7)*(undefined8 *)((long)param_2 + 1);
  param_2[1] = 0;
  param_2[2] = 0;
  uStack_79 = (undefined1)uVar1;
  uStack_78 = (undefined7)((ulong)uVar1 >> 8);
  *param_2 = 0;
                    /* try { // try from 007c1b4c to 007c1b53 has its CatchHandler @ 007c1c28 */
  local_50 = (long *)operator_new(0x20);
  *local_50 = (long)&PTR_FUN_00986380;
  *(undefined1 *)(local_50 + 1) = uVar2;
  *(ulong *)((long)local_50 + 9) = CONCAT17(uStack_79,local_80);
  local_50[2] = CONCAT71(uStack_78,uStack_79);
  local_50[3] = lVar5;
                    /* try { // try from 007c1b78 to 007c1b8f has its CatchHandler @ 007c1bf0 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_98,local_70,2);
  if (local_50 == local_70) {
    lVar5 = 4;
    plVar4 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007c1bbc;
    lVar5 = 5;
    plVar4 = local_50;
  }
  (**(code **)(*plVar4 + lVar5 * 8))();
LAB_007c1bbc:
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c1c64  facebook::react::DCDChatEventEmitter::onLongPressSticker =====

/* facebook::react::DCDChatEventEmitter::onLongPressSticker(facebook::react::DCDChatEventEmitter::OnLongPressSticker)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onLongPressSticker
          (DCDChatEventEmitter *this,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  byte local_98;
  char local_97 [8];
  undefined7 uStack_8f;
  char cStack_88;
  undefined1 uStack_87;
  undefined6 uStack_86;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar2 = *(undefined1 *)param_2;
  local_98 = 0x20;
  uStack_8f = (undefined7)s_longPressSticker_00369d4c._8_8_;
  cStack_88 = SUB81(s_longPressSticker_00369d4c._8_8_,7);
  local_97 = (char  [8])s_longPressSticker_00369d4c._0_8_;
  local_80 = (undefined7)*(undefined8 *)((long)param_2 + 1);
  uVar1 = param_2[1];
  lVar5 = param_2[2];
  uStack_87 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uStack_79 = (undefined1)uVar1;
  uStack_78 = (undefined7)((ulong)uVar1 >> 8);
  *param_2 = 0;
                    /* try { // try from 007c1cc0 to 007c1cc7 has its CatchHandler @ 007c1d9c */
  local_50 = (long *)operator_new(0x20);
  *local_50 = (long)&PTR_FUN_00986400;
  *(undefined1 *)(local_50 + 1) = uVar2;
  *(ulong *)((long)local_50 + 9) = CONCAT17(uStack_79,local_80);
  local_50[2] = CONCAT71(uStack_78,uStack_79);
  local_50[3] = lVar5;
                    /* try { // try from 007c1cec to 007c1d03 has its CatchHandler @ 007c1d64 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_98,local_70,2);
  if (local_50 == local_70) {
    lVar5 = 4;
    plVar4 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007c1d30;
    lVar5 = 5;
    plVar4 = local_50;
  }
  (**(code **)(*plVar4 + lVar5 * 8))();
LAB_007c1d30:
  if ((local_98 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_86,CONCAT11(uStack_87,cStack_88)));
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c1dd8  facebook::react::DCDChatEventEmitter::onLongPressAvatar =====

/* facebook::react::DCDChatEventEmitter::onLongPressAvatar(facebook::react::DCDChatEventEmitter::OnLongPressAvatar)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onLongPressAvatar(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte local_78;
  char local_77 [7];
  char cStack_70;
  char acStack_6f [7];
  undefined1 local_68;
  undefined7 uStack_67;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar7 = param_2[1];
  lVar5 = *param_2;
  local_78 = 0x1e;
  local_77 = s_longPre_0036df26;
  lVar3 = param_2[2];
  lVar8 = param_2[4];
  lVar6 = param_2[3];
  lVar4 = param_2[5];
  cStack_70 = s_ssAvatar_0036df2d[0];
  acStack_6f = (char  [7])s_ssAvatar_0036df2d._1_7_;
  local_68 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007c1e4c to 007c1e53 has its CatchHandler @ 007c1f44 */
  local_40 = (long *)operator_new(0x38);
  *local_40 = (long)&PTR_FUN_00986480;
  local_40[2] = lVar7;
  local_40[1] = lVar5;
  local_40[3] = lVar3;
  local_40[5] = lVar8;
  local_40[4] = lVar6;
  local_40[6] = lVar4;
                    /* try { // try from 007c1e98 to 007c1eaf has its CatchHandler @ 007c1f0c */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007c1edc;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007c1edc:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_67,local_68));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c1f7c  FUN_007c1f7c =====

void FUN_007c1f7c(byte *param_1)

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


// ===== 007c1fc0  facebook::react::DCDChatEventEmitter::onTapUsername =====

/* facebook::react::DCDChatEventEmitter::onTapUsername(facebook::react::DCDChatEventEmitter::OnTapUsername)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapUsername(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte local_78;
  undefined7 local_77;
  char cStack_70;
  undefined3 uStack_6f;
  undefined1 local_6c;
  void *local_68;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar7 = param_2[1];
  lVar5 = *param_2;
  local_78 = 0x16;
  lVar3 = param_2[2];
  lVar8 = param_2[4];
  lVar6 = param_2[3];
  lVar4 = param_2[5];
  local_6c = 0;
  local_77 = (undefined7)s_tapUsername_00370a97._0_8_;
  _cStack_70 = CONCAT31(0x656d61,SUB81(s_tapUsername_00370a97._0_8_,7));
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007c2038 to 007c203f has its CatchHandler @ 007c2130 */
  local_40 = (long *)operator_new(0x38);
  *local_40 = (long)&PTR_FUN_00986500;
  local_40[2] = lVar7;
  local_40[1] = lVar5;
  local_40[3] = lVar3;
  local_40[5] = lVar8;
  local_40[4] = lVar6;
  local_40[6] = lVar4;
                    /* try { // try from 007c2084 to 007c209b has its CatchHandler @ 007c20f8 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007c20c8;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007c20c8:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c2168  FUN_007c2168 =====

void FUN_007c2168(byte *param_1)

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


// ===== 007c21ac  facebook::react::DCDChatEventEmitter::onLongPressUsername =====

/* facebook::react::DCDChatEventEmitter::onLongPressUsername(facebook::react::DCDChatEventEmitter::OnLongPressUsername)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onLongPressUsername(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte local_78;
  char local_77 [8];
  undefined7 uStack_6f;
  char cStack_68;
  undefined2 uStack_67;
  undefined5 uStack_65;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x22;
  uStack_6f = (undefined7)s_longPressUsername_003705ba._8_8_;
  cStack_68 = SUB81(s_longPressUsername_003705ba._8_8_,7);
  local_77 = (char  [8])s_longPressUsername_003705ba._0_8_;
  lVar7 = param_2[1];
  lVar5 = *param_2;
  uStack_67 = 0x65;
  lVar3 = param_2[2];
  lVar8 = param_2[4];
  lVar6 = param_2[3];
  lVar4 = param_2[5];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007c221c to 007c2223 has its CatchHandler @ 007c2314 */
  local_40 = (long *)operator_new(0x38);
  *local_40 = (long)&PTR_FUN_00986580;
  local_40[2] = lVar7;
  local_40[1] = lVar5;
  local_40[3] = lVar3;
  local_40[5] = lVar8;
  local_40[4] = lVar6;
  local_40[6] = lVar4;
                    /* try { // try from 007c2268 to 007c227f has its CatchHandler @ 007c22dc */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007c22ac;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007c22ac:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_65,CONCAT21(uStack_67,cStack_68)));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c234c  FUN_007c234c =====

void FUN_007c234c(byte *param_1)

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


// ===== 007c2390  facebook::react::DCDChatEventEmitter::onTapMessageReply =====

/* facebook::react::DCDChatEventEmitter::onTapMessageReply(facebook::react::DCDChatEventEmitter::OnTapMessageReply)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapMessageReply(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte local_78;
  char local_77 [7];
  char cStack_70;
  char acStack_6f [7];
  undefined1 local_68;
  undefined7 uStack_67;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar7 = param_2[1];
  lVar5 = *param_2;
  local_78 = 0x1e;
  local_77 = s_tapMess_0036a1d8;
  lVar3 = param_2[2];
  lVar8 = param_2[4];
  lVar6 = param_2[3];
  lVar4 = param_2[5];
  cStack_70 = s_ageReply_0036a1df[0];
  acStack_6f = (char  [7])s_ageReply_0036a1df._1_7_;
  local_68 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007c2404 to 007c240b has its CatchHandler @ 007c24fc */
  local_40 = (long *)operator_new(0x38);
  *local_40 = (long)&PTR_FUN_00986600;
  local_40[2] = lVar7;
  local_40[1] = lVar5;
  local_40[3] = lVar3;
  local_40[5] = lVar8;
  local_40[4] = lVar6;
  local_40[6] = lVar4;
                    /* try { // try from 007c2450 to 007c2467 has its CatchHandler @ 007c24c4 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007c2494;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007c2494:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_67,local_68));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c2534  FUN_007c2534 =====

void FUN_007c2534(byte *param_1)

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


// ===== 007c2578  facebook::react::DCDChatEventEmitter::onTapSummary =====

/* facebook::react::DCDChatEventEmitter::onTapSummary(facebook::react::DCDChatEventEmitter::OnTapSummary)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapSummary(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  byte local_78;
  char local_77 [8];
  undefined2 local_6f;
  undefined1 local_6d;
  void *local_68;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_6f = 0x7972;
  lVar9 = param_2[1];
  lVar6 = *param_2;
  lVar3 = param_2[2];
  local_78 = 0x14;
  lVar10 = param_2[4];
  lVar7 = param_2[3];
  lVar4 = param_2[5];
  lVar11 = param_2[7];
  lVar8 = param_2[6];
  lVar5 = param_2[8];
  local_77 = (char  [8])s_tapSummary_0036b310._0_8_;
  local_6d = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007c2604 to 007c260b has its CatchHandler @ 007c2710 */
  local_40 = (long *)operator_new(0x50);
  *local_40 = (long)&PTR_FUN_00986680;
  local_40[2] = lVar9;
  local_40[1] = lVar6;
  local_40[3] = lVar3;
  local_40[5] = lVar10;
  local_40[4] = lVar7;
  local_40[6] = lVar4;
  local_40[8] = lVar11;
  local_40[7] = lVar8;
  local_40[9] = lVar5;
                    /* try { // try from 007c2664 to 007c267b has its CatchHandler @ 007c26d8 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007c26a8;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007c26a8:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c2748  FUN_007c2748 =====

void FUN_007c2748(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x30] & 1) == 0) {
    bVar1 = param_1[0x18];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x40));
    bVar1 = param_1[0x18];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x28));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 007c27ac  facebook::react::DCDChatEventEmitter::onTapSummaryJump =====

/* facebook::react::DCDChatEventEmitter::onTapSummaryJump(facebook::react::DCDChatEventEmitter::OnTapSummaryJump)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapSummaryJump(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  byte local_78;
  char local_77 [6];
  char acStack_71 [2];
  char acStack_6f [6];
  undefined1 local_69;
  void *local_68;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar9 = param_2[1];
  lVar6 = *param_2;
  local_78 = 0x1c;
  local_77 = s_tapSum_0036cb7f;
  lVar3 = param_2[2];
  lVar10 = param_2[4];
  lVar7 = param_2[3];
  lVar4 = param_2[5];
  lVar11 = param_2[7];
  lVar8 = param_2[6];
  lVar5 = param_2[8];
  acStack_71 = (char  [2])s_maryJump_0036cb85._0_2_;
  acStack_6f = (char  [6])s_maryJump_0036cb85._2_6_;
  local_69 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007c2838 to 007c283f has its CatchHandler @ 007c2944 */
  local_40 = (long *)operator_new(0x50);
  *local_40 = (long)&PTR_FUN_00986700;
  local_40[2] = lVar9;
  local_40[1] = lVar6;
  local_40[3] = lVar3;
  local_40[5] = lVar10;
  local_40[4] = lVar7;
  local_40[6] = lVar4;
  local_40[8] = lVar11;
  local_40[7] = lVar8;
  local_40[9] = lVar5;
                    /* try { // try from 007c2898 to 007c28af has its CatchHandler @ 007c290c */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007c28dc;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007c28dc:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c297c  FUN_007c297c =====

void FUN_007c297c(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x30] & 1) == 0) {
    bVar1 = param_1[0x18];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x40));
    bVar1 = param_1[0x18];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x28));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 007c29e0  facebook::react::DCDChatEventEmitter::onTapConversationHeader =====

/* facebook::react::DCDChatEventEmitter::onTapConversationHeader(facebook::react::DCDChatEventEmitter::OnTapConversationHeader)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapConversationHeader
          (DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  byte local_78;
  char local_77 [8];
  char acStack_6f [5];
  undefined2 uStack_6a;
  char cStack_68;
  char acStack_67 [5];
  undefined1 uStack_62;
  undefined1 uStack_61;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x2a;
  uStack_62 = 0;
  acStack_6f = (char  [5])s_tapConversati_003669d7._8_5_;
  local_77 = (char  [8])s_tapConversati_003669d7._0_8_;
  lVar9 = param_2[1];
  lVar6 = *param_2;
  uStack_6a = (undefined2)s_onHeader_003669e4._0_3_;
  cStack_68 = SUB31(s_onHeader_003669e4._0_3_,2);
  acStack_67 = (char  [5])s_onHeader_003669e4._3_5_;
  lVar3 = param_2[2];
  lVar10 = param_2[4];
  lVar7 = param_2[3];
  lVar4 = param_2[5];
  lVar11 = param_2[7];
  lVar8 = param_2[6];
  lVar5 = param_2[8];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007c2a6c to 007c2a73 has its CatchHandler @ 007c2b78 */
  local_40 = (long *)operator_new(0x50);
  *local_40 = (long)&PTR_FUN_00986780;
  local_40[2] = lVar9;
  local_40[1] = lVar6;
  local_40[3] = lVar3;
  local_40[5] = lVar10;
  local_40[4] = lVar7;
  local_40[6] = lVar4;
  local_40[8] = lVar11;
  local_40[7] = lVar8;
  local_40[9] = lVar5;
                    /* try { // try from 007c2acc to 007c2ae3 has its CatchHandler @ 007c2b40 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007c2b10;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007c2b10:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_61,CONCAT16(uStack_62,CONCAT51(acStack_67,cStack_68))));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c2bb0  FUN_007c2bb0 =====

void FUN_007c2bb0(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x30] & 1) == 0) {
    bVar1 = param_1[0x18];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x40));
    bVar1 = param_1[0x18];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x28));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 007c2c14  facebook::react::DCDChatEventEmitter::onTapEmoji =====

/* facebook::react::DCDChatEventEmitter::onTapEmoji(facebook::react::DCDChatEventEmitter::OnTapEmoji)
   const */

void facebook::react::DCDChatEventEmitter::onTapEmoji(undefined8 param_1)

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
  local_78[0] = 0x10;
  local_78[9] = 0;
  local_78[1] = 0x74;
  local_78[2] = 0x61;
  local_78[3] = 0x70;
  local_78[4] = 0x45;
  local_78[5] = 0x6d;
  local_78[6] = 0x6f;
  local_78[7] = 0x6a;
  local_78[8] = 0x69;
  local_60[0] = &PTR_FUN_00986800;
                    /* try { // try from 007c2c64 to 007c2c73 has its CatchHandler @ 007c2cd0 */
  local_40 = local_60;
  ::facebook::react::EventEmitter::dispatchEvent(param_1,local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_007c2ca0;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_007c2ca0:
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c2d30  facebook::react::DCDChatEventEmitter::onTapThreadEmbed =====

/* facebook::react::DCDChatEventEmitter::onTapThreadEmbed(facebook::react::DCDChatEventEmitter::OnTapThreadEmbed)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapThreadEmbed
          (DCDChatEventEmitter *this,undefined8 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  byte local_98;
  char local_97 [6];
  char acStack_91 [2];
  char acStack_8f [6];
  undefined1 local_89;
  void *local_88;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = *(undefined1 *)param_2;
  local_98 = 0x1c;
  local_97 = s_tapThr_00365c55;
  acStack_91 = (char  [2])s_eadEmbed_00365c5b._0_2_;
  acStack_8f = (char  [6])s_eadEmbed_00365c5b._2_6_;
  lVar4 = param_2[2];
  local_89 = 0;
  local_80 = (undefined7)*(undefined8 *)((long)param_2 + 1);
  uStack_79 = (undefined1)param_2[1];
  uStack_78 = (undefined7)((ulong)param_2[1] >> 8);
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
                    /* try { // try from 007c2d94 to 007c2d9b has its CatchHandler @ 007c2e70 */
  local_50 = (long *)operator_new(0x20);
  *local_50 = (long)&PTR_FUN_00986880;
  *(undefined1 *)(local_50 + 1) = uVar1;
  *(ulong *)((long)local_50 + 9) = CONCAT17(uStack_79,local_80);
  local_50[2] = CONCAT71(uStack_78,uStack_79);
  local_50[3] = lVar4;
                    /* try { // try from 007c2dc0 to 007c2dd7 has its CatchHandler @ 007c2e38 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_98,local_70,2);
  if (local_50 == local_70) {
    lVar4 = 4;
    plVar3 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007c2e04;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007c2e04:
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c2eac  facebook::react::DCDChatEventEmitter::onTapButtonActionComponent =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::DCDChatEventEmitter::onTapButtonActionComponent(facebook::react::DCDChatEventEmitter::OnTapButtonActionComponent)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapButtonActionComponent
          (DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong local_90;
  undefined8 uStack_88;
  char *local_80;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_80 = (char *)operator_new(0x20);
  uVar4 = s_omponent_0036cb9e._0_8_;
  uVar3 = s_tapButtonActionC_0036cb8e._8_8_;
  uVar2 = s_tapButtonActionC_0036cb8e._0_8_;
  local_80[0x18] = '\0';
  *(undefined8 *)(local_80 + 8) = uVar3;
  *(undefined8 *)local_80 = uVar2;
  uStack_88 = _UNK_00371468;
  local_90 = _DAT_00371460;
  *(undefined8 *)(local_80 + 0x10) = uVar4;
  lVar6 = param_2[2];
  lVar10 = param_2[1];
  lVar8 = *param_2;
  lVar7 = param_2[5];
  lVar11 = param_2[4];
  lVar9 = param_2[3];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_50 = (long *)0x0;
                    /* try { // try from 007c2f38 to 007c2f3f has its CatchHandler @ 007c3034 */
  local_50 = (long *)operator_new(0x38);
  *local_50 = (long)&PTR_FUN_00986900;
  local_50[2] = lVar10;
  local_50[1] = lVar8;
  local_50[3] = lVar6;
  local_50[5] = lVar11;
  local_50[4] = lVar9;
  local_50[6] = lVar7;
                    /* try { // try from 007c2f84 to 007c2f9b has its CatchHandler @ 007c2ffc */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_90,local_70,2);
  if (local_50 == local_70) {
    lVar6 = 4;
    plVar5 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007c2fc8;
    lVar6 = 5;
    plVar5 = local_50;
  }
  (**(code **)(*plVar5 + lVar6 * 8))();
LAB_007c2fc8:
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c306c  FUN_007c306c =====

void FUN_007c306c(byte *param_1)

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


// ===== 007c30b0  facebook::react::DCDChatEventEmitter::onTapSelectActionComponent =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::DCDChatEventEmitter::onTapSelectActionComponent(facebook::react::DCDChatEventEmitter::OnTapSelectActionComponent)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapSelectActionComponent
          (DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong local_90;
  undefined8 uStack_88;
  char *local_80;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_80 = (char *)operator_new(0x20);
  uVar4 = s_omponent_0036d8e4._0_8_;
  uVar3 = s_tapSelectActionC_0036d8d4._8_8_;
  uVar2 = s_tapSelectActionC_0036d8d4._0_8_;
  local_80[0x18] = '\0';
  *(undefined8 *)(local_80 + 8) = uVar3;
  *(undefined8 *)local_80 = uVar2;
  uStack_88 = _UNK_00371468;
  local_90 = _DAT_00371460;
  *(undefined8 *)(local_80 + 0x10) = uVar4;
  lVar6 = param_2[2];
  lVar10 = param_2[1];
  lVar8 = *param_2;
  lVar7 = param_2[5];
  lVar11 = param_2[4];
  lVar9 = param_2[3];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_50 = (long *)0x0;
                    /* try { // try from 007c313c to 007c3143 has its CatchHandler @ 007c3238 */
  local_50 = (long *)operator_new(0x38);
  *local_50 = (long)&PTR_FUN_00986980;
  local_50[2] = lVar10;
  local_50[1] = lVar8;
  local_50[3] = lVar6;
  local_50[5] = lVar11;
  local_50[4] = lVar9;
  local_50[6] = lVar7;
                    /* try { // try from 007c3188 to 007c319f has its CatchHandler @ 007c3200 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_90,local_70,2);
  if (local_50 == local_70) {
    lVar6 = 4;
    plVar5 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007c31cc;
    lVar6 = 5;
    plVar5 = local_50;
  }
  (**(code **)(*plVar5 + lVar6 * 8))();
LAB_007c31cc:
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c3270  FUN_007c3270 =====

void FUN_007c3270(byte *param_1)

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


// ===== 007c32b4  facebook::react::DCDChatEventEmitter::onTapWelcomeReply =====

/* facebook::react::DCDChatEventEmitter::onTapWelcomeReply(facebook::react::DCDChatEventEmitter::OnTapWelcomeReply)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapWelcomeReply(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte local_78;
  char local_77 [7];
  char cStack_70;
  char acStack_6f [7];
  undefined1 local_68;
  undefined7 uStack_67;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar7 = param_2[1];
  lVar5 = *param_2;
  local_78 = 0x1e;
  local_77 = s_tapWelc_00365c64;
  lVar3 = param_2[2];
  lVar8 = param_2[4];
  lVar6 = param_2[3];
  lVar4 = param_2[5];
  cStack_70 = s_omeReply_00365c6b[0];
  acStack_6f = (char  [7])s_omeReply_00365c6b._1_7_;
  local_68 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007c3328 to 007c332f has its CatchHandler @ 007c3420 */
  local_40 = (long *)operator_new(0x38);
  *local_40 = (long)&PTR_FUN_00986a00;
  local_40[2] = lVar7;
  local_40[1] = lVar5;
  local_40[3] = lVar3;
  local_40[5] = lVar8;
  local_40[4] = lVar6;
  local_40[6] = lVar4;
                    /* try { // try from 007c3374 to 007c338b has its CatchHandler @ 007c33e8 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007c33b8;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007c33b8:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_67,local_68));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c3458  FUN_007c3458 =====

void FUN_007c3458(byte *param_1)

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


// ===== 007c349c  facebook::react::DCDChatEventEmitter::onTapInviteToSpeak =====

/* facebook::react::DCDChatEventEmitter::onTapInviteToSpeak(facebook::react::DCDChatEventEmitter::OnTapInviteToSpeak)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapInviteToSpeak
          (DCDChatEventEmitter *this,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  byte local_98;
  char local_97 [8];
  undefined7 uStack_8f;
  char cStack_88;
  undefined1 uStack_87;
  undefined6 uStack_86;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar2 = *(undefined1 *)param_2;
  local_98 = 0x20;
  uStack_8f = (undefined7)s_tapInviteToSpeak_00367f50._8_8_;
  cStack_88 = SUB81(s_tapInviteToSpeak_00367f50._8_8_,7);
  local_97 = (char  [8])s_tapInviteToSpeak_00367f50._0_8_;
  local_80 = (undefined7)*(undefined8 *)((long)param_2 + 1);
  uVar1 = param_2[1];
  lVar5 = param_2[2];
  uStack_87 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uStack_79 = (undefined1)uVar1;
  uStack_78 = (undefined7)((ulong)uVar1 >> 8);
  *param_2 = 0;
                    /* try { // try from 007c34f8 to 007c34ff has its CatchHandler @ 007c35d4 */
  local_50 = (long *)operator_new(0x20);
  *local_50 = (long)&PTR_FUN_00986a80;
  *(undefined1 *)(local_50 + 1) = uVar2;
  *(ulong *)((long)local_50 + 9) = CONCAT17(uStack_79,local_80);
  local_50[2] = CONCAT71(uStack_78,uStack_79);
  local_50[3] = lVar5;
                    /* try { // try from 007c3524 to 007c353b has its CatchHandler @ 007c359c */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_98,local_70,2);
  if (local_50 == local_70) {
    lVar5 = 4;
    plVar4 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007c3568;
    lVar5 = 5;
    plVar4 = local_50;
  }
  (**(code **)(*plVar4 + lVar5 * 8))();
LAB_007c3568:
  if ((local_98 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_86,CONCAT11(uStack_87,cStack_88)));
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c3610  facebook::react::DCDChatEventEmitter::onTapTimestamp =====

/* facebook::react::DCDChatEventEmitter::onTapTimestamp(facebook::react::DCDChatEventEmitter::OnTapTimestamp)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapTimestamp(DCDChatEventEmitter *this,undefined8 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  byte local_98;
  char local_97 [8];
  undefined4 local_8f;
  undefined1 local_8b;
  void *local_88;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_98 = 0x18;
  uVar1 = *(undefined1 *)param_2;
  local_8f = 0x706d6174;
  local_97 = (char  [8])s_tapTimestamp_00364f53._0_8_;
  lVar4 = param_2[2];
  local_8b = 0;
  local_80 = (undefined7)*(undefined8 *)((long)param_2 + 1);
  uStack_79 = (undefined1)param_2[1];
  uStack_78 = (undefined7)((ulong)param_2[1] >> 8);
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
                    /* try { // try from 007c3678 to 007c367f has its CatchHandler @ 007c3754 */
  local_50 = (long *)operator_new(0x20);
  *local_50 = (long)&PTR_FUN_00986b00;
  *(undefined1 *)(local_50 + 1) = uVar1;
  *(ulong *)((long)local_50 + 9) = CONCAT17(uStack_79,local_80);
  local_50[2] = CONCAT71(uStack_78,uStack_79);
  local_50[3] = lVar4;
                    /* try { // try from 007c36a4 to 007c36bb has its CatchHandler @ 007c371c */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_98,local_70,2);
  if (local_50 == local_70) {
    lVar4 = 4;
    plVar3 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007c36e8;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007c36e8:
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c3790  facebook::react::DCDChatEventEmitter::onTapInlineCode =====

/* facebook::react::DCDChatEventEmitter::onTapInlineCode(facebook::react::DCDChatEventEmitter::OnTapInlineCode)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapInlineCode(DCDChatEventEmitter *this,undefined8 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  byte local_98;
  char local_97 [5];
  char acStack_92 [3];
  char acStack_8f [5];
  undefined1 local_8a;
  void *local_88;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = *(undefined1 *)param_2;
  local_98 = 0x1a;
  local_97 = s_tapIn_0036b872;
  acStack_92 = (char  [3])s_lineCode_0036b877._0_3_;
  acStack_8f = (char  [5])s_lineCode_0036b877._3_5_;
  lVar4 = param_2[2];
  local_8a = 0;
  local_80 = (undefined7)*(undefined8 *)((long)param_2 + 1);
  uStack_79 = (undefined1)param_2[1];
  uStack_78 = (undefined7)((ulong)param_2[1] >> 8);
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
                    /* try { // try from 007c37f4 to 007c37fb has its CatchHandler @ 007c38d0 */
  local_50 = (long *)operator_new(0x20);
  *local_50 = (long)&PTR_FUN_00986b80;
  *(undefined1 *)(local_50 + 1) = uVar1;
  *(ulong *)((long)local_50 + 9) = CONCAT17(uStack_79,local_80);
  local_50[2] = CONCAT71(uStack_78,uStack_79);
  local_50[3] = lVar4;
                    /* try { // try from 007c3820 to 007c3837 has its CatchHandler @ 007c3898 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_98,local_70,2);
  if (local_50 == local_70) {
    lVar4 = 4;
    plVar3 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007c3864;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007c3864:
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c390c  facebook::react::DCDChatEventEmitter::onTapRoleIcon =====

/* facebook::react::DCDChatEventEmitter::onTapRoleIcon(facebook::react::DCDChatEventEmitter::OnTapRoleIcon)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapRoleIcon(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  byte local_78;
  undefined7 local_77;
  char cStack_70;
  undefined3 uStack_6f;
  undefined1 local_6c;
  void *local_68;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar9 = param_2[1];
  lVar6 = *param_2;
  local_78 = 0x16;
  lVar3 = param_2[2];
  lVar10 = param_2[4];
  lVar7 = param_2[3];
  lVar4 = param_2[5];
  lVar11 = param_2[7];
  lVar8 = param_2[6];
  lVar5 = param_2[8];
  local_77 = (undefined7)s_tapRoleIcon_00367f61._0_8_;
  _cStack_70 = CONCAT31(0x6e6f63,SUB81(s_tapRoleIcon_00367f61._0_8_,7));
  local_6c = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007c399c to 007c39a3 has its CatchHandler @ 007c3aa8 */
  local_40 = (long *)operator_new(0x50);
  *local_40 = (long)&PTR_FUN_00986c00;
  local_40[2] = lVar9;
  local_40[1] = lVar6;
  local_40[3] = lVar3;
  local_40[5] = lVar10;
  local_40[4] = lVar7;
  local_40[6] = lVar4;
  local_40[8] = lVar11;
  local_40[7] = lVar8;
  local_40[9] = lVar5;
                    /* try { // try from 007c39fc to 007c3a13 has its CatchHandler @ 007c3a70 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007c3a40;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007c3a40:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c3ae0  FUN_007c3ae0 =====

void FUN_007c3ae0(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x30] & 1) == 0) {
    bVar1 = param_1[0x18];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x40));
    bVar1 = param_1[0x18];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x28));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 007c3b44  facebook::react::DCDChatEventEmitter::onTapVoiceChannelBadge =====

/* facebook::react::DCDChatEventEmitter::onTapVoiceChannelBadge(facebook::react::DCDChatEventEmitter::OnTapVoiceChannelBadge)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapVoiceChannelBadge
          (DCDChatEventEmitter *this,undefined8 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  byte local_98;
  char local_97 [8];
  undefined7 uStack_8f;
  char cStack_88;
  undefined4 uStack_87;
  undefined1 uStack_83;
  undefined2 uStack_82;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_98 = 0x28;
  lVar4 = param_2[2];
  uStack_87 = 0x65676461;
  uVar1 = *(undefined1 *)param_2;
  uStack_8f = (undefined7)s_tapVoiceChannelBadge_0036cba7._8_8_;
  cStack_88 = SUB81(s_tapVoiceChannelBadge_0036cba7._8_8_,7);
  local_97 = (char  [8])s_tapVoiceChannelBadge_0036cba7._0_8_;
  uStack_83 = 0;
  local_80 = (undefined7)*(undefined8 *)((long)param_2 + 1);
  uStack_79 = (undefined1)param_2[1];
  uStack_78 = (undefined7)((ulong)param_2[1] >> 8);
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
                    /* try { // try from 007c3bac to 007c3bb3 has its CatchHandler @ 007c3c88 */
  local_50 = (long *)operator_new(0x20);
  *local_50 = (long)&PTR_FUN_00986c80;
  *(undefined1 *)(local_50 + 1) = uVar1;
  *(ulong *)((long)local_50 + 9) = CONCAT17(uStack_79,local_80);
  local_50[2] = CONCAT71(uStack_78,uStack_79);
  local_50[3] = lVar4;
                    /* try { // try from 007c3bd8 to 007c3bef has its CatchHandler @ 007c3c50 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_98,local_70,2);
  if (local_50 == local_70) {
    lVar4 = 4;
    plVar3 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007c3c1c;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007c3c1c:
  if ((local_98 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_82,CONCAT15(uStack_83,CONCAT41(uStack_87,cStack_88))));
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c3cc4  facebook::react::DCDChatEventEmitter::onTapGameIcon =====

/* facebook::react::DCDChatEventEmitter::onTapGameIcon(facebook::react::DCDChatEventEmitter::OnTapGameIcon)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapGameIcon(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte local_78;
  undefined7 local_77;
  char cStack_70;
  undefined3 uStack_6f;
  undefined1 local_6c;
  void *local_68;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar7 = param_2[1];
  lVar5 = *param_2;
  local_78 = 0x16;
  lVar3 = param_2[2];
  lVar8 = param_2[4];
  lVar6 = param_2[3];
  lVar4 = param_2[5];
  local_6c = 0;
  local_77 = (undefined7)s_tapGameIcon_00365664._0_8_;
  _cStack_70 = CONCAT31(0x6e6f63,SUB81(s_tapGameIcon_00365664._0_8_,7));
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007c3d3c to 007c3d43 has its CatchHandler @ 007c3e34 */
  local_40 = (long *)operator_new(0x38);
  *local_40 = (long)&PTR_FUN_00986d00;
  local_40[2] = lVar7;
  local_40[1] = lVar5;
  local_40[3] = lVar3;
  local_40[5] = lVar8;
  local_40[4] = lVar6;
  local_40[6] = lVar4;
                    /* try { // try from 007c3d88 to 007c3d9f has its CatchHandler @ 007c3dfc */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007c3dcc;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007c3dcc:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c3e6c  FUN_007c3e6c =====

void FUN_007c3e6c(byte *param_1)

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


// ===== 007c3eb0  facebook::react::DCDChatEventEmitter::onTapSuppressNotificationsIcon =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::DCDChatEventEmitter::onTapSuppressNotificationsIcon(facebook::react::DCDChatEventEmitter::OnTapSuppressNotificationsIcon)
   const */

void facebook::react::DCDChatEventEmitter::onTapSuppressNotificationsIcon(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  long lVar6;
  ulong local_90;
  undefined8 uStack_88;
  char *local_80;
  undefined **local_70 [4];
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_80 = (char *)operator_new(0x20);
  uVar4 = s_otificationsIcon_00369d69._8_8_;
  uVar3 = s_tapSuppressN_00369d5d._0_8_;
  uVar2 = CONCAT44(s_otificationsIcon_00369d69._4_4_,s_otificationsIcon_00369d69._0_4_);
  *(ulong *)(local_80 + 8) =
       CONCAT44(s_otificationsIcon_00369d69._0_4_,s_tapSuppressN_00369d5d._8_4_);
  *(undefined8 *)local_80 = uVar3;
  uStack_88 = _UNK_003730c8;
  local_90 = _s___003730c0;
  *(undefined8 *)(local_80 + 0x14) = uVar4;
  *(undefined8 *)(local_80 + 0xc) = uVar2;
  local_80[0x1c] = '\0';
  local_70[0] = &PTR_FUN_00986d80;
                    /* try { // try from 007c3f1c to 007c3f2f has its CatchHandler @ 007c3f90 */
  local_50 = local_70;
  ::facebook::react::EventEmitter::dispatchEvent(param_1,&local_90,local_70,2);
  if (local_50 == local_70) {
    lVar6 = 4;
    pppuVar5 = local_70;
  }
  else {
    if (local_50 == (undefined ***)0x0) goto LAB_007c3f5c;
    lVar6 = 5;
    pppuVar5 = local_50;
  }
  (*(code *)(*pppuVar5)[lVar6])();
LAB_007c3f5c:
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c3ff0  facebook::react::DCDChatEventEmitter::onTapConnectionsRoleTag =====

/* facebook::react::DCDChatEventEmitter::onTapConnectionsRoleTag(facebook::react::DCDChatEventEmitter::OnTapConnectionsRoleTag)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapConnectionsRoleTag
          (DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  byte local_78;
  char local_77 [8];
  char acStack_6f [5];
  undefined2 uStack_6a;
  char cStack_68;
  char acStack_67 [5];
  undefined1 uStack_62;
  undefined1 uStack_61;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x2a;
  uStack_62 = 0;
  acStack_6f = (char  [5])s_tapConnection_00369d7a._8_5_;
  local_77 = (char  [8])s_tapConnection_00369d7a._0_8_;
  lVar11 = param_2[1];
  lVar7 = *param_2;
  uStack_6a = (undefined2)s_sRoleTag_00369d87._0_3_;
  cStack_68 = SUB31(s_sRoleTag_00369d87._0_3_,2);
  acStack_67 = (char  [5])s_sRoleTag_00369d87._3_5_;
  lVar3 = param_2[2];
  lVar12 = param_2[4];
  lVar8 = param_2[3];
  lVar4 = param_2[5];
  lVar13 = param_2[7];
  lVar9 = param_2[6];
  lVar5 = param_2[8];
  lVar14 = param_2[10];
  lVar10 = param_2[9];
  lVar6 = param_2[0xb];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007c4090 to 007c4097 has its CatchHandler @ 007c41b4 */
  local_40 = (long *)operator_new(0x68);
  *local_40 = (long)&PTR_FUN_00986e00;
  local_40[2] = lVar11;
  local_40[1] = lVar7;
  local_40[3] = lVar3;
  local_40[5] = lVar12;
  local_40[4] = lVar8;
  local_40[6] = lVar4;
  local_40[8] = lVar13;
  local_40[7] = lVar9;
  local_40[9] = lVar5;
  local_40[0xc] = lVar6;
  local_40[0xb] = lVar14;
  local_40[10] = lVar10;
                    /* try { // try from 007c4108 to 007c411f has its CatchHandler @ 007c417c */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007c414c;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007c414c:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_61,CONCAT16(uStack_62,CONCAT51(acStack_67,cStack_68))));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c41ec  FUN_007c41ec =====

void FUN_007c41ec(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x48] & 1) == 0) {
    bVar1 = param_1[0x30];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x58));
    bVar1 = param_1[0x30];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x18];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x40));
    bVar1 = param_1[0x18];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x28));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 007c4268  facebook::react::DCDChatEventEmitter::onTapTimeoutIcon =====

/* facebook::react::DCDChatEventEmitter::onTapTimeoutIcon(facebook::react::DCDChatEventEmitter::OnTapTimeoutIcon)
   const */

void facebook::react::DCDChatEventEmitter::onTapTimeoutIcon(undefined8 param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [6];
  char acStack_71 [2];
  char acStack_6f [6];
  undefined1 local_69;
  void *local_68;
  undefined **local_60 [4];
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x1c;
  local_77 = s_tapTim_0036add1;
  acStack_71 = (char  [2])s_eoutIcon_0036add7._0_2_;
  acStack_6f = (char  [6])s_eoutIcon_0036add7._2_6_;
  local_69 = 0;
  local_60[0] = &PTR_FUN_00986e80;
                    /* try { // try from 007c42bc to 007c42cb has its CatchHandler @ 007c4328 */
  local_40 = local_60;
  ::facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_007c42f8;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_007c42f8:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c4388  facebook::react::DCDChatEventEmitter::onTapAutoModerationActions =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::DCDChatEventEmitter::onTapAutoModerationActions(facebook::react::DCDChatEventEmitter::OnTapAutoModerationActions)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapAutoModerationActions
          (DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong local_90;
  undefined8 uStack_88;
  char *local_80;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_80 = (char *)operator_new(0x20);
  uVar4 = s_nActions_0036ff4e._0_8_;
  uVar3 = s_tapAutoModeratio_0036ff3e._8_8_;
  uVar2 = s_tapAutoModeratio_0036ff3e._0_8_;
  local_80[0x18] = '\0';
  *(undefined8 *)(local_80 + 8) = uVar3;
  *(undefined8 *)local_80 = uVar2;
  uStack_88 = _UNK_00371468;
  local_90 = _DAT_00371460;
  *(undefined8 *)(local_80 + 0x10) = uVar4;
  lVar6 = param_2[2];
  lVar12 = param_2[1];
  lVar9 = *param_2;
  lVar7 = param_2[5];
  lVar13 = param_2[4];
  lVar10 = param_2[3];
  lVar8 = param_2[8];
  lVar14 = param_2[7];
  lVar11 = param_2[6];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  local_50 = (long *)0x0;
                    /* try { // try from 007c442c to 007c4433 has its CatchHandler @ 007c453c */
  local_50 = (long *)operator_new(0x50);
  *local_50 = (long)&PTR_FUN_00986f00;
  local_50[2] = lVar12;
  local_50[1] = lVar9;
  local_50[3] = lVar6;
  local_50[5] = lVar13;
  local_50[4] = lVar10;
  local_50[6] = lVar7;
  local_50[8] = lVar14;
  local_50[7] = lVar11;
  local_50[9] = lVar8;
                    /* try { // try from 007c448c to 007c44a3 has its CatchHandler @ 007c4504 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_90,local_70,2);
  if (local_50 == local_70) {
    lVar6 = 4;
    plVar5 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007c44d0;
    lVar6 = 5;
    plVar5 = local_50;
  }
  (**(code **)(*plVar5 + lVar6 * 8))();
LAB_007c44d0:
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c4574  FUN_007c4574 =====

void FUN_007c4574(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x30] & 1) == 0) {
    bVar1 = param_1[0x18];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x40));
    bVar1 = param_1[0x18];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x28));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 007c45d8  facebook::react::DCDChatEventEmitter::onTapAutoModerationFeedback =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::DCDChatEventEmitter::onTapAutoModerationFeedback(facebook::react::DCDChatEventEmitter::OnTapAutoModerationFeedback)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapAutoModerationFeedback
          (DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong local_90;
  undefined8 uStack_88;
  char *local_80;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_80 = (char *)operator_new(0x20);
  uVar5 = s_derationFeedback_00366e46._8_8_;
  uVar4 = s_tapAutoMo_00366e3d._0_8_;
  uVar2 = CONCAT71(s_derationFeedback_00366e46._0_7_,s_tapAutoMo_00366e3d[8]);
  uVar3 = CONCAT17(s_derationFeedback_00366e46[7],s_derationFeedback_00366e46._0_7_);
  local_80[0x19] = '\0';
  *(undefined8 *)(local_80 + 8) = uVar2;
  *(undefined8 *)local_80 = uVar4;
  uStack_88 = _UNK_00371d78;
  local_90 = _s___00371d70;
  lVar7 = param_2[2];
  *(undefined8 *)(local_80 + 0x11) = uVar5;
  *(undefined8 *)(local_80 + 9) = uVar3;
  lVar13 = param_2[1];
  lVar10 = *param_2;
  lVar8 = param_2[5];
  lVar14 = param_2[4];
  lVar11 = param_2[3];
  lVar9 = param_2[8];
  lVar15 = param_2[7];
  lVar12 = param_2[6];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  local_50 = (long *)0x0;
                    /* try { // try from 007c467c to 007c4683 has its CatchHandler @ 007c478c */
  local_50 = (long *)operator_new(0x50);
  *local_50 = (long)&PTR_FUN_00986f80;
  local_50[2] = lVar13;
  local_50[1] = lVar10;
  local_50[3] = lVar7;
  local_50[5] = lVar14;
  local_50[4] = lVar11;
  local_50[6] = lVar8;
  local_50[8] = lVar15;
  local_50[7] = lVar12;
  local_50[9] = lVar9;
                    /* try { // try from 007c46dc to 007c46f3 has its CatchHandler @ 007c4754 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_90,local_70,2);
  if (local_50 == local_70) {
    lVar7 = 4;
    plVar6 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007c4720;
    lVar7 = 5;
    plVar6 = local_50;
  }
  (**(code **)(*plVar6 + lVar7 * 8))();
LAB_007c4720:
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c47c4  FUN_007c47c4 =====

void FUN_007c47c4(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x30] & 1) == 0) {
    bVar1 = param_1[0x18];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x40));
    bVar1 = param_1[0x18];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x28));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 007c4828  facebook::react::DCDChatEventEmitter::onTapSeeMore =====

/* facebook::react::DCDChatEventEmitter::onTapSeeMore(facebook::react::DCDChatEventEmitter::OnTapSeeMore)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapSeeMore(DCDChatEventEmitter *this,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  byte local_98;
  char local_97 [8];
  undefined2 local_8f;
  undefined1 local_8d;
  void *local_88;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_98 = 0x14;
  local_8f = 0x6572;
  uVar2 = *(undefined1 *)param_2;
  local_8d = 0;
  local_97 = (char  [8])s_tapSeeMore_00369d90._0_8_;
  uVar1 = param_2[1];
  lVar5 = param_2[2];
  local_80 = (undefined7)*(undefined8 *)((long)param_2 + 1);
  param_2[1] = 0;
  param_2[2] = 0;
  uStack_79 = (undefined1)uVar1;
  uStack_78 = (undefined7)((ulong)uVar1 >> 8);
  *param_2 = 0;
                    /* try { // try from 007c488c to 007c4893 has its CatchHandler @ 007c4968 */
  local_50 = (long *)operator_new(0x20);
  *local_50 = (long)&PTR_FUN_00987000;
  *(undefined1 *)(local_50 + 1) = uVar2;
  *(ulong *)((long)local_50 + 9) = CONCAT17(uStack_79,local_80);
  local_50[2] = CONCAT71(uStack_78,uStack_79);
  local_50[3] = lVar5;
                    /* try { // try from 007c48b8 to 007c48cf has its CatchHandler @ 007c4930 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_98,local_70,2);
  if (local_50 == local_70) {
    lVar5 = 4;
    plVar4 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007c48fc;
    lVar5 = 5;
    plVar4 = local_50;
  }
  (**(code **)(*plVar4 + lVar5 * 8))();
LAB_007c48fc:
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c49a4  facebook::react::DCDChatEventEmitter::onTapTag =====

/* facebook::react::DCDChatEventEmitter::onTapTag(facebook::react::DCDChatEventEmitter::OnTapTag)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapTag(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  byte local_78 [16];
  void *local_68;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78[0] = 0xc;
  lVar9 = param_2[1];
  lVar6 = *param_2;
  local_78[7] = 0;
  local_78[1] = 0x74;
  local_78[2] = 0x61;
  local_78[3] = 0x70;
  local_78[4] = 0x54;
  local_78[5] = 0x61;
  local_78[6] = 0x67;
  lVar3 = param_2[2];
  lVar10 = param_2[4];
  lVar7 = param_2[3];
  lVar4 = param_2[5];
  lVar11 = param_2[7];
  lVar8 = param_2[6];
  lVar5 = param_2[8];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007c4a2c to 007c4a33 has its CatchHandler @ 007c4b38 */
  local_40 = (long *)operator_new(0x50);
  *local_40 = (long)&PTR_FUN_00987080;
  local_40[2] = lVar9;
  local_40[1] = lVar6;
  local_40[3] = lVar3;
  local_40[5] = lVar10;
  local_40[4] = lVar7;
  local_40[6] = lVar4;
  local_40[8] = lVar11;
  local_40[7] = lVar8;
  local_40[9] = lVar5;
                    /* try { // try from 007c4a8c to 007c4aa3 has its CatchHandler @ 007c4b00 */
  ::facebook::react::EventEmitter::dispatchEvent(this,local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007c4ad0;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007c4ad0:
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c4b70  FUN_007c4b70 =====

void FUN_007c4b70(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x30] & 1) == 0) {
    bVar1 = param_1[0x18];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x40));
    bVar1 = param_1[0x18];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x28));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 007c4bd4  facebook::react::DCDChatEventEmitter::onTapCancelUploadItem =====

/* facebook::react::DCDChatEventEmitter::onTapCancelUploadItem(facebook::react::DCDChatEventEmitter::OnTapCancelUploadItem)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapCancelUploadItem(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte local_78;
  char local_77 [8];
  undefined7 uStack_6f;
  undefined4 uStack_68;
  uint uStack_64;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x26;
  uStack_64 = uStack_64 & 0xffffff00;
  lVar3 = param_2[2];
  uStack_6f = (undefined7)s_tapCancelUploadItem_0036b880._8_8_;
  uStack_68 = CONCAT31(0x6d6574,SUB81(s_tapCancelUploadItem_0036b880._8_8_,7));
  local_77 = (char  [8])s_tapCancelUploadItem_0036b880._0_8_;
  lVar7 = param_2[1];
  lVar5 = *param_2;
  lVar4 = param_2[5];
  lVar8 = param_2[4];
  lVar6 = param_2[3];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007c4c4c to 007c4c53 has its CatchHandler @ 007c4d44 */
  local_40 = (long *)operator_new(0x38);
  *local_40 = (long)&PTR_FUN_00987100;
  local_40[2] = lVar7;
  local_40[1] = lVar5;
  local_40[3] = lVar3;
  local_40[5] = lVar8;
  local_40[4] = lVar6;
  local_40[6] = lVar4;
                    /* try { // try from 007c4c98 to 007c4caf has its CatchHandler @ 007c4d0c */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007c4cdc;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007c4cdc:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_64,uStack_68));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c4d7c  FUN_007c4d7c =====

void FUN_007c4d7c(byte *param_1)

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


// ===== 007c4dc0  facebook::react::DCDChatEventEmitter::onTapFollowForumPost =====

/* facebook::react::DCDChatEventEmitter::onTapFollowForumPost(facebook::react::DCDChatEventEmitter::OnTapFollowForumPost)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapFollowForumPost(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte local_78;
  char local_77 [8];
  undefined7 uStack_6f;
  char cStack_68;
  undefined2 uStack_67;
  undefined1 uStack_65;
  undefined4 uStack_64;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x24;
  uStack_67 = 0x7473;
  lVar3 = param_2[2];
  uStack_6f = (undefined7)s_tapFollowForumPost_0036a1e8._8_8_;
  cStack_68 = SUB81(s_tapFollowForumPost_0036a1e8._8_8_,7);
  local_77 = (char  [8])s_tapFollowForumPost_0036a1e8._0_8_;
  lVar7 = param_2[1];
  lVar5 = *param_2;
  lVar4 = param_2[5];
  lVar8 = param_2[4];
  lVar6 = param_2[3];
  uStack_65 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007c4e34 to 007c4e3b has its CatchHandler @ 007c4f2c */
  local_40 = (long *)operator_new(0x38);
  *local_40 = (long)&PTR_FUN_00987180;
  local_40[2] = lVar7;
  local_40[1] = lVar5;
  local_40[3] = lVar3;
  local_40[5] = lVar8;
  local_40[4] = lVar6;
  local_40[6] = lVar4;
                    /* try { // try from 007c4e80 to 007c4e97 has its CatchHandler @ 007c4ef4 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007c4ec4;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007c4ec4:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_64,CONCAT13(uStack_65,CONCAT21(uStack_67,cStack_68))));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c4f64  FUN_007c4f64 =====

void FUN_007c4f64(byte *param_1)

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


// ===== 007c4fa8  facebook::react::DCDChatEventEmitter::onTapShareForumPost =====

/* facebook::react::DCDChatEventEmitter::onTapShareForumPost(facebook::react::DCDChatEventEmitter::OnTapShareForumPost)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapShareForumPost(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte local_78;
  char local_77 [8];
  undefined7 uStack_6f;
  char cStack_68;
  undefined2 uStack_67;
  undefined5 uStack_65;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x22;
  uStack_6f = (undefined7)s_tapShareForumPost_0036d173._8_8_;
  cStack_68 = SUB81(s_tapShareForumPost_0036d173._8_8_,7);
  local_77 = (char  [8])s_tapShareForumPost_0036d173._0_8_;
  lVar7 = param_2[1];
  lVar5 = *param_2;
  uStack_67 = 0x74;
  lVar3 = param_2[2];
  lVar8 = param_2[4];
  lVar6 = param_2[3];
  lVar4 = param_2[5];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007c5018 to 007c501f has its CatchHandler @ 007c5110 */
  local_40 = (long *)operator_new(0x38);
  *local_40 = (long)&PTR_FUN_00987200;
  local_40[2] = lVar7;
  local_40[1] = lVar5;
  local_40[3] = lVar3;
  local_40[5] = lVar8;
  local_40[4] = lVar6;
  local_40[6] = lVar4;
                    /* try { // try from 007c5064 to 007c507b has its CatchHandler @ 007c50d8 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007c50a8;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007c50a8:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_65,CONCAT21(uStack_67,cStack_68)));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c5148  FUN_007c5148 =====

void FUN_007c5148(byte *param_1)

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


// ===== 007c518c  facebook::react::DCDChatEventEmitter::onTapReactionOverflow =====

/* facebook::react::DCDChatEventEmitter::onTapReactionOverflow(facebook::react::DCDChatEventEmitter::OnTapReactionOverflow)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapReactionOverflow(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte local_78;
  char local_77 [8];
  undefined7 uStack_6f;
  undefined4 uStack_68;
  uint uStack_64;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x26;
  uStack_64 = uStack_64 & 0xffffff00;
  lVar3 = param_2[2];
  uStack_6f = (undefined7)s_tapReactionOverflow_0036bf8d._8_8_;
  uStack_68 = CONCAT31(0x776f6c,SUB81(s_tapReactionOverflow_0036bf8d._8_8_,7));
  local_77 = (char  [8])s_tapReactionOverflow_0036bf8d._0_8_;
  lVar7 = param_2[1];
  lVar5 = *param_2;
  lVar4 = param_2[5];
  lVar8 = param_2[4];
  lVar6 = param_2[3];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007c5204 to 007c520b has its CatchHandler @ 007c52fc */
  local_40 = (long *)operator_new(0x38);
  *local_40 = (long)&PTR_FUN_00987280;
  local_40[2] = lVar7;
  local_40[1] = lVar5;
  local_40[3] = lVar3;
  local_40[5] = lVar8;
  local_40[4] = lVar6;
  local_40[6] = lVar4;
                    /* try { // try from 007c5250 to 007c5267 has its CatchHandler @ 007c52c4 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007c5294;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007c5294:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_64,uStack_68));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c5334  FUN_007c5334 =====

void FUN_007c5334(byte *param_1)

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


// ===== 007c5378  facebook::react::DCDChatEventEmitter::onTapCopyText =====

/* facebook::react::DCDChatEventEmitter::onTapCopyText(facebook::react::DCDChatEventEmitter::OnTapCopyText)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapCopyText(DCDChatEventEmitter *this,undefined8 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  byte local_98;
  undefined7 local_97;
  char cStack_90;
  undefined3 uStack_8f;
  undefined1 local_8c;
  void *local_88;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_98 = 0x16;
  uVar1 = *(undefined1 *)param_2;
  local_97 = (undefined7)s_tapCopyText_0036c44e._0_8_;
  _cStack_90 = CONCAT31(0x747865,SUB81(s_tapCopyText_0036c44e._0_8_,7));
  lVar4 = param_2[2];
  local_8c = 0;
  local_80 = (undefined7)*(undefined8 *)((long)param_2 + 1);
  uStack_79 = (undefined1)param_2[1];
  uStack_78 = (undefined7)((ulong)param_2[1] >> 8);
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
                    /* try { // try from 007c53e0 to 007c53e7 has its CatchHandler @ 007c54bc */
  local_50 = (long *)operator_new(0x20);
  *local_50 = (long)&PTR_FUN_00987300;
  *(undefined1 *)(local_50 + 1) = uVar1;
  *(ulong *)((long)local_50 + 9) = CONCAT17(uStack_79,local_80);
  local_50[2] = CONCAT71(uStack_78,uStack_79);
  local_50[3] = lVar4;
                    /* try { // try from 007c540c to 007c5423 has its CatchHandler @ 007c5484 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_98,local_70,2);
  if (local_50 == local_70) {
    lVar4 = 4;
    plVar3 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007c5450;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007c5450:
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c54f8  facebook::react::DCDChatEventEmitter::onTapOpTag =====

/* facebook::react::DCDChatEventEmitter::onTapOpTag(facebook::react::DCDChatEventEmitter::OnTapOpTag)
   const */

void facebook::react::DCDChatEventEmitter::onTapOpTag(undefined8 param_1)

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
  local_78[0] = 0x10;
  local_78[9] = 0;
  local_78[1] = 0x74;
  local_78[2] = 0x61;
  local_78[3] = 0x70;
  local_78[4] = 0x4f;
  local_78[5] = 0x70;
  local_78[6] = 0x54;
  local_78[7] = 0x61;
  local_78[8] = 0x67;
  local_60[0] = &PTR_FUN_00987380;
                    /* try { // try from 007c5548 to 007c5557 has its CatchHandler @ 007c55b4 */
  local_40 = local_60;
  ::facebook::react::EventEmitter::dispatchEvent(param_1,local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_007c5584;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_007c5584:
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c5614  facebook::react::DCDChatEventEmitter::onMediaAttachmentPlaybackEnded =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::DCDChatEventEmitter::onMediaAttachmentPlaybackEnded(facebook::react::DCDChatEventEmitter::OnMediaAttachmentPlaybackEnded)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onMediaAttachmentPlaybackEnded
          (DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong local_a0;
  undefined8 uStack_98;
  char *local_90;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_90 = (char *)operator_new(0x20);
  uVar7 = s_entPlaybackEnded_0036cbc8._8_8_;
  uVar6 = s_mediaAttachm_0036cbbc._0_8_;
  uVar4 = CONCAT44(s_entPlaybackEnded_0036cbc8._4_4_,s_entPlaybackEnded_0036cbc8._0_4_);
  lVar10 = param_2[2];
  lVar1 = param_2[3];
  *(ulong *)(local_90 + 8) =
       CONCAT44(s_entPlaybackEnded_0036cbc8._0_4_,s_mediaAttachm_0036cbbc._8_4_);
  *(undefined8 *)local_90 = uVar6;
  uStack_98 = _UNK_003730c8;
  local_a0 = _s___003730c0;
  lVar11 = param_2[6];
  *(undefined8 *)(local_90 + 0x14) = uVar7;
  *(undefined8 *)(local_90 + 0xc) = uVar4;
  lVar15 = param_2[1];
  lVar12 = *param_2;
  lVar16 = param_2[5];
  lVar13 = param_2[4];
  lVar17 = param_2[9];
  lVar14 = param_2[8];
  lVar9 = param_2[10];
  local_90[0x1c] = '\0';
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  local_60 = (long *)0x0;
                    /* try { // try from 007c56d4 to 007c56db has its CatchHandler @ 007c57fc */
  local_60 = (long *)operator_new(0x60);
  *local_60 = (long)&PTR_FUN_00987400;
  lVar5 = param_2[7];
  local_60[3] = lVar10;
  local_60[4] = lVar1;
  local_60[2] = lVar15;
  local_60[1] = lVar12;
  local_60[7] = lVar11;
  uVar2 = *(undefined1 *)((long)param_2 + 0x3c);
  local_60[6] = lVar16;
  local_60[5] = lVar13;
  *(undefined1 *)((long)local_60 + 0x44) = uVar2;
  *(int *)(local_60 + 8) = (int)lVar5;
  local_60[0xb] = lVar9;
  local_60[10] = lVar17;
  local_60[9] = lVar14;
                    /* try { // try from 007c5748 to 007c575f has its CatchHandler @ 007c57c4 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_a0,local_80,2);
  if (local_60 == local_80) {
    lVar10 = 4;
    plVar8 = local_80;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_007c578c;
    lVar10 = 5;
    plVar8 = local_60;
  }
  (**(code **)(*plVar8 + lVar10 * 8))();
LAB_007c578c:
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c5834  FUN_007c5834 =====

void FUN_007c5834(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x40] & 1) == 0) {
    bVar1 = param_1[0x20];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x50));
    bVar1 = param_1[0x20];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x30));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 007c5898  facebook::react::DCDChatEventEmitter::onMediaAttachmentPlaybackStarted =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::DCDChatEventEmitter::onMediaAttachmentPlaybackStarted(facebook::react::DCDChatEventEmitter::OnMediaAttachmentPlaybackStarted)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onMediaAttachmentPlaybackStarted
          (DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong local_a0;
  undefined8 uStack_98;
  char *local_90;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_90 = (char *)operator_new(0x20);
  uVar6 = s_tPlaybackStarted_003705da._8_8_;
  uVar5 = s_mediaAttachmen_003705cc._0_8_;
  uVar3 = CONCAT62(s_tPlaybackStarted_003705da._2_6_,s_tPlaybackStarted_003705da._0_2_);
  lVar4 = param_2[7];
  lVar9 = param_2[2];
  lVar1 = param_2[3];
  *(ulong *)(local_90 + 8) =
       CONCAT26(s_tPlaybackStarted_003705da._0_2_,s_mediaAttachmen_003705cc._8_6_);
  *(undefined8 *)local_90 = uVar5;
  uStack_98 = _UNK_003717a8;
  local_a0 = _s___003717a0;
  lVar10 = param_2[6];
  *(undefined8 *)(local_90 + 0x16) = uVar6;
  *(undefined8 *)(local_90 + 0xe) = uVar3;
  lVar14 = param_2[1];
  lVar11 = *param_2;
  lVar8 = param_2[10];
  lVar15 = param_2[5];
  lVar12 = param_2[4];
  local_90[0x1e] = '\0';
  lVar16 = param_2[9];
  lVar13 = param_2[8];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  local_60 = (long *)0x0;
                    /* try { // try from 007c594c to 007c5953 has its CatchHandler @ 007c5a68 */
  local_60 = (long *)operator_new(0x60);
  *local_60 = (long)&PTR_FUN_00987480;
  local_60[2] = lVar14;
  local_60[1] = lVar11;
  local_60[3] = lVar9;
  local_60[4] = lVar1;
  local_60[6] = lVar15;
  local_60[5] = lVar12;
  local_60[7] = lVar10;
  *(char *)(local_60 + 8) = (char)lVar4;
  local_60[0xb] = lVar8;
  local_60[10] = lVar16;
  local_60[9] = lVar13;
                    /* try { // try from 007c59b4 to 007c59cb has its CatchHandler @ 007c5a30 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_a0,local_80,2);
  if (local_60 == local_80) {
    lVar9 = 4;
    plVar7 = local_80;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_007c59f8;
    lVar9 = 5;
    plVar7 = local_60;
  }
  (**(code **)(*plVar7 + lVar9 * 8))();
LAB_007c59f8:
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c5aa0  FUN_007c5aa0 =====

void FUN_007c5aa0(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x40] & 1) == 0) {
    bVar1 = param_1[0x20];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x50));
    bVar1 = param_1[0x20];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x30));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 007c5b04  facebook::react::DCDChatEventEmitter::onVoiceMessagePlaybackFailed =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::DCDChatEventEmitter::onVoiceMessagePlaybackFailed(facebook::react::DCDChatEventEmitter::OnVoiceMessagePlaybackFailed)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onVoiceMessagePlaybackFailed
          (DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong local_90;
  undefined8 uStack_88;
  char *local_80;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_80 = (char *)operator_new(0x20);
  uVar5 = s_gePlaybackFailed_0036df40._8_8_;
  uVar4 = s_voiceMessa_0036df36._0_8_;
  uVar2 = CONCAT62(s_gePlaybackFailed_0036df40._0_6_,s_voiceMessa_0036df36._8_2_);
  uVar3 = CONCAT26(s_gePlaybackFailed_0036df40._6_2_,s_gePlaybackFailed_0036df40._0_6_);
  local_80[0x1a] = '\0';
  *(undefined8 *)(local_80 + 8) = uVar2;
  *(undefined8 *)local_80 = uVar4;
  uStack_88 = _UNK_00372368;
  local_90 = _s___00372360;
  lVar7 = param_2[2];
  *(undefined8 *)(local_80 + 0x12) = uVar5;
  *(undefined8 *)(local_80 + 10) = uVar3;
  lVar11 = param_2[1];
  lVar9 = *param_2;
  lVar8 = param_2[5];
  lVar12 = param_2[4];
  lVar10 = param_2[3];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_50 = (long *)0x0;
                    /* try { // try from 007c5b90 to 007c5b97 has its CatchHandler @ 007c5c8c */
  local_50 = (long *)operator_new(0x38);
  *local_50 = (long)&PTR_FUN_00987500;
  local_50[2] = lVar11;
  local_50[1] = lVar9;
  local_50[3] = lVar7;
  local_50[5] = lVar12;
  local_50[4] = lVar10;
  local_50[6] = lVar8;
                    /* try { // try from 007c5bdc to 007c5bf3 has its CatchHandler @ 007c5c54 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_90,local_70,2);
  if (local_50 == local_70) {
    lVar7 = 4;
    plVar6 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007c5c20;
    lVar7 = 5;
    plVar6 = local_50;
  }
  (**(code **)(*plVar6 + lVar7 * 8))();
LAB_007c5c20:
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c5cc4  FUN_007c5cc4 =====

void FUN_007c5cc4(byte *param_1)

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


// ===== 007c5d08  facebook::react::DCDChatEventEmitter::onTapNavBar =====

/* facebook::react::DCDChatEventEmitter::onTapNavBar(facebook::react::DCDChatEventEmitter::OnTapNavBar)
   const */

void facebook::react::DCDChatEventEmitter::onTapNavBar(undefined8 param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined2 local_6f;
  void *local_68;
  undefined **local_60 [4];
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x12;
  local_6f = 0x72;
  local_77 = (char  [8])s_tapNavBar_0036f89b._0_8_;
  local_60[0] = &PTR_FUN_00987580;
                    /* try { // try from 007c5d58 to 007c5d67 has its CatchHandler @ 007c5dc4 */
  local_40 = local_60;
  ::facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_007c5d94;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_007c5d94:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c5e24  facebook::react::DCDChatEventEmitter::onTapShowAltText =====

/* facebook::react::DCDChatEventEmitter::onTapShowAltText(facebook::react::DCDChatEventEmitter::OnTapShowAltText)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapShowAltText
          (DCDChatEventEmitter *this,undefined8 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  byte local_98;
  char local_97 [6];
  char acStack_91 [2];
  char acStack_8f [6];
  undefined1 local_89;
  void *local_88;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = *(undefined1 *)param_2;
  local_98 = 0x1c;
  local_97 = s_tapSho_0036f8a5;
  acStack_91 = (char  [2])s_wAltText_0036f8ab._0_2_;
  acStack_8f = (char  [6])s_wAltText_0036f8ab._2_6_;
  lVar4 = param_2[2];
  local_89 = 0;
  local_80 = (undefined7)*(undefined8 *)((long)param_2 + 1);
  uStack_79 = (undefined1)param_2[1];
  uStack_78 = (undefined7)((ulong)param_2[1] >> 8);
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
                    /* try { // try from 007c5e88 to 007c5e8f has its CatchHandler @ 007c5f64 */
  local_50 = (long *)operator_new(0x20);
  *local_50 = (long)&PTR_FUN_00987600;
  *(undefined1 *)(local_50 + 1) = uVar1;
  *(ulong *)((long)local_50 + 9) = CONCAT17(uStack_79,local_80);
  local_50[2] = CONCAT71(uStack_78,uStack_79);
  local_50[3] = lVar4;
                    /* try { // try from 007c5eb4 to 007c5ecb has its CatchHandler @ 007c5f2c */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_98,local_70,2);
  if (local_50 == local_70) {
    lVar4 = 4;
    plVar3 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007c5ef8;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007c5ef8:
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c5fa0  facebook::react::DCDChatEventEmitter::onTapTableView =====

/* facebook::react::DCDChatEventEmitter::onTapTableView(facebook::react::DCDChatEventEmitter::OnTapTableView)
   const */

void facebook::react::DCDChatEventEmitter::onTapTableView(undefined8 param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined4 local_6f;
  undefined1 local_6b;
  void *local_68;
  undefined **local_60 [4];
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x18;
  local_6b = 0;
  local_6f = 0x77656956;
  local_77 = (char  [8])s_tapTableView_0036ff57._0_8_;
  local_60[0] = &PTR_FUN_00987680;
                    /* try { // try from 007c5ff8 to 007c6007 has its CatchHandler @ 007c6064 */
  local_40 = local_60;
  ::facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_007c6034;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_007c6034:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c60c4  facebook::react::DCDChatEventEmitter::onTapPostPreviewEmbed =====

/* facebook::react::DCDChatEventEmitter::onTapPostPreviewEmbed(facebook::react::DCDChatEventEmitter::OnTapPostPreviewEmbed)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapPostPreviewEmbed(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  byte local_78;
  char local_77 [8];
  undefined7 uStack_6f;
  undefined4 uStack_68;
  uint uStack_64;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x26;
  uStack_64 = uStack_64 & 0xffffff00;
  lVar3 = param_2[2];
  uStack_6f = (undefined7)s_tapPostPreviewEmbed_0036b31b._8_8_;
  uStack_68 = CONCAT31(0x646562,SUB81(s_tapPostPreviewEmbed_0036b31b._8_8_,7));
  local_77 = (char  [8])s_tapPostPreviewEmbed_0036b31b._0_8_;
  lVar11 = param_2[1];
  lVar7 = *param_2;
  lVar4 = param_2[5];
  lVar12 = param_2[4];
  lVar8 = param_2[3];
  lVar5 = param_2[8];
  lVar13 = param_2[7];
  lVar9 = param_2[6];
  lVar6 = param_2[0xb];
  lVar14 = param_2[10];
  lVar10 = param_2[9];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007c6168 to 007c616f has its CatchHandler @ 007c628c */
  local_40 = (long *)operator_new(0x68);
  *local_40 = (long)&PTR_FUN_00987700;
  local_40[2] = lVar11;
  local_40[1] = lVar7;
  local_40[3] = lVar3;
  local_40[5] = lVar12;
  local_40[4] = lVar8;
  local_40[6] = lVar4;
  local_40[8] = lVar13;
  local_40[7] = lVar9;
  local_40[9] = lVar5;
  local_40[0xc] = lVar6;
  local_40[0xb] = lVar14;
  local_40[10] = lVar10;
                    /* try { // try from 007c61e0 to 007c61f7 has its CatchHandler @ 007c6254 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007c6224;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007c6224:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_64,uStack_68));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c62c4  FUN_007c62c4 =====

void FUN_007c62c4(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x48] & 1) == 0) {
    bVar1 = param_1[0x30];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x58));
    bVar1 = param_1[0x30];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x18];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x40));
    bVar1 = param_1[0x18];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x28));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 007c6340  facebook::react::DCDChatEventEmitter::onTapDismissMediaPostSharePrompt =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::DCDChatEventEmitter::onTapDismissMediaPostSharePrompt(facebook::react::DCDChatEventEmitter::OnTapDismissMediaPostSharePrompt)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapDismissMediaPostSharePrompt
          (DCDChatEventEmitter *this,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong local_b0;
  undefined8 uStack_a8;
  char *local_a0;
  undefined7 local_90;
  undefined1 uStack_89;
  undefined7 uStack_88;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_a0 = (char *)operator_new(0x20);
  uVar5 = s_aPostSharePrompt_00366264._8_8_;
  uVar7 = s_tapDismissMedi_00366256._0_8_;
  uVar2 = *(undefined1 *)param_2;
  uVar4 = CONCAT62(s_aPostSharePrompt_00366264._2_6_,s_aPostSharePrompt_00366264._0_2_);
  uVar1 = param_2[1];
  lVar8 = param_2[2];
  *(ulong *)(local_a0 + 8) =
       CONCAT26(s_aPostSharePrompt_00366264._0_2_,s_tapDismissMedi_00366256._8_6_);
  *(undefined8 *)local_a0 = uVar7;
  uStack_a8 = _UNK_003717a8;
  local_b0 = _s___003717a0;
  uVar7 = *(undefined8 *)((long)param_2 + 1);
  *(undefined8 *)(local_a0 + 0x16) = uVar5;
  *(undefined8 *)(local_a0 + 0xe) = uVar4;
  local_a0[0x1e] = '\0';
  local_90 = (undefined7)uVar7;
  uStack_89 = (undefined1)uVar1;
  uStack_88 = (undefined7)((ulong)uVar1 >> 8);
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
                    /* try { // try from 007c63bc to 007c63c3 has its CatchHandler @ 007c649c */
  local_60 = (long *)operator_new(0x20);
  *local_60 = (long)&PTR_FUN_00987780;
  *(undefined1 *)(local_60 + 1) = uVar2;
  *(ulong *)((long)local_60 + 9) = CONCAT17(uStack_89,local_90);
  local_60[2] = CONCAT71(uStack_88,uStack_89);
  local_60[3] = lVar8;
                    /* try { // try from 007c63e8 to 007c63ff has its CatchHandler @ 007c6464 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_b0,local_80,2);
  if (local_60 == local_80) {
    lVar8 = 4;
    plVar6 = local_80;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_007c642c;
    lVar8 = 5;
    plVar6 = local_60;
  }
  (**(code **)(*plVar6 + lVar8 * 8))();
LAB_007c642c:
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c64d8  facebook::react::DCDChatEventEmitter::onTapChannelPromptButton =====

/* facebook::react::DCDChatEventEmitter::onTapChannelPromptButton(facebook::react::DCDChatEventEmitter::OnTapChannelPromptButton)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapChannelPromptButton
          (DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  byte local_78;
  char local_77 [8];
  char acStack_6f [6];
  char cStack_69;
  char cStack_68;
  char acStack_67 [6];
  undefined1 uStack_61;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x2c;
  uStack_61 = 0;
  acStack_6f = (char  [6])s_tapChannelProm_0036d8ed._8_6_;
  local_77 = (char  [8])s_tapChannelProm_0036d8ed._0_8_;
  lVar9 = param_2[1];
  lVar6 = *param_2;
  cStack_69 = (char)s_ptButton_0036d8fb._0_2_;
  cStack_68 = SUB21(s_ptButton_0036d8fb._0_2_,1);
  acStack_67 = (char  [6])s_ptButton_0036d8fb._2_6_;
  lVar3 = param_2[2];
  lVar10 = param_2[4];
  lVar7 = param_2[3];
  lVar4 = param_2[5];
  lVar11 = param_2[7];
  lVar8 = param_2[6];
  lVar5 = param_2[8];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007c6564 to 007c656b has its CatchHandler @ 007c6670 */
  local_40 = (long *)operator_new(0x50);
  *local_40 = (long)&PTR_FUN_00987800;
  local_40[2] = lVar9;
  local_40[1] = lVar6;
  local_40[3] = lVar3;
  local_40[5] = lVar10;
  local_40[4] = lVar7;
  local_40[6] = lVar4;
  local_40[8] = lVar11;
  local_40[7] = lVar8;
  local_40[9] = lVar5;
                    /* try { // try from 007c65c4 to 007c65db has its CatchHandler @ 007c6638 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007c6608;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007c6608:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_61,CONCAT61(acStack_67,cStack_68)));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c66a8  FUN_007c66a8 =====

void FUN_007c66a8(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x30] & 1) == 0) {
    bVar1 = param_1[0x18];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x40));
    bVar1 = param_1[0x18];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x28));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 007c670c  facebook::react::DCDChatEventEmitter::onTapObscuredMediaLearnMore =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::DCDChatEventEmitter::onTapObscuredMediaLearnMore(facebook::react::DCDChatEventEmitter::OnTapObscuredMediaLearnMore)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapObscuredMediaLearnMore
          (DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong local_90;
  undefined8 uStack_88;
  char *local_80;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_80 = (char *)operator_new(0x20);
  uVar5 = s_edMediaLearnMore_00364f69._8_8_;
  uVar4 = s_tapObscur_00364f60._0_8_;
  uVar2 = CONCAT71(s_edMediaLearnMore_00364f69._0_7_,s_tapObscur_00364f60[8]);
  uVar3 = CONCAT17(s_edMediaLearnMore_00364f69[7],s_edMediaLearnMore_00364f69._0_7_);
  local_80[0x19] = '\0';
  *(undefined8 *)(local_80 + 8) = uVar2;
  *(undefined8 *)local_80 = uVar4;
  uStack_88 = _UNK_00371d78;
  local_90 = _s___00371d70;
  lVar7 = param_2[2];
  *(undefined8 *)(local_80 + 0x11) = uVar5;
  *(undefined8 *)(local_80 + 9) = uVar3;
  lVar15 = param_2[1];
  lVar11 = *param_2;
  lVar8 = param_2[5];
  lVar16 = param_2[4];
  lVar12 = param_2[3];
  lVar9 = param_2[8];
  lVar17 = param_2[7];
  lVar13 = param_2[6];
  lVar10 = param_2[0xb];
  lVar18 = param_2[10];
  lVar14 = param_2[9];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  local_50 = (long *)0x0;
                    /* try { // try from 007c67c4 to 007c67cb has its CatchHandler @ 007c68ec */
  local_50 = (long *)operator_new(0x68);
  *local_50 = (long)&PTR_FUN_00987880;
  local_50[2] = lVar15;
  local_50[1] = lVar11;
  local_50[3] = lVar7;
  local_50[5] = lVar16;
  local_50[4] = lVar12;
  local_50[6] = lVar8;
  local_50[8] = lVar17;
  local_50[7] = lVar13;
  local_50[9] = lVar9;
  local_50[0xc] = lVar10;
  local_50[0xb] = lVar18;
  local_50[10] = lVar14;
                    /* try { // try from 007c683c to 007c6853 has its CatchHandler @ 007c68b4 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_90,local_70,2);
  if (local_50 == local_70) {
    lVar7 = 4;
    plVar6 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007c6880;
    lVar7 = 5;
    plVar6 = local_50;
  }
  (**(code **)(*plVar6 + lVar7 * 8))();
LAB_007c6880:
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c6924  FUN_007c6924 =====

void FUN_007c6924(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x48] & 1) == 0) {
    bVar1 = param_1[0x30];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x58));
    bVar1 = param_1[0x30];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x18];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x40));
    bVar1 = param_1[0x18];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x28));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 007c69a0  facebook::react::DCDChatEventEmitter::onTapObscuredMediaToggle =====

/* facebook::react::DCDChatEventEmitter::onTapObscuredMediaToggle(facebook::react::DCDChatEventEmitter::OnTapObscuredMediaToggle)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapObscuredMediaToggle
          (DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  byte local_88;
  char local_87 [8];
  char acStack_7f [6];
  char cStack_79;
  char cStack_78;
  char acStack_77 [6];
  undefined1 uStack_71;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar7 = param_2[6];
  local_88 = 0x2c;
  acStack_7f = (char  [6])s_tapObscuredMed_003672f6._8_6_;
  local_87 = (char  [8])s_tapObscuredMed_003672f6._0_8_;
  lVar12 = param_2[1];
  lVar8 = *param_2;
  cStack_79 = (char)s_iaToggle_00367304._0_2_;
  cStack_78 = SUB21(s_iaToggle_00367304._0_2_,1);
  acStack_77 = (char  [6])s_iaToggle_00367304._2_6_;
  lVar3 = param_2[2];
  lVar13 = param_2[4];
  lVar9 = param_2[3];
  lVar4 = param_2[5];
  lVar14 = param_2[8];
  lVar10 = param_2[7];
  lVar5 = param_2[9];
  lVar15 = param_2[0xb];
  lVar11 = param_2[10];
  lVar6 = param_2[0xc];
  uStack_71 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  local_50 = (long *)0x0;
                    /* try { // try from 007c6a4c to 007c6a53 has its CatchHandler @ 007c6b78 */
  local_50 = (long *)operator_new(0x70);
  *local_50 = (long)&PTR_FUN_00987900;
  local_50[2] = lVar12;
  local_50[1] = lVar8;
  local_50[3] = lVar3;
  local_50[5] = lVar13;
  local_50[4] = lVar9;
  local_50[6] = lVar4;
  local_50[9] = lVar14;
  local_50[8] = lVar10;
  local_50[10] = lVar5;
  *(char *)(local_50 + 7) = (char)lVar7;
  local_50[0xd] = lVar6;
  local_50[0xc] = lVar15;
  local_50[0xb] = lVar11;
                    /* try { // try from 007c6ac8 to 007c6adf has its CatchHandler @ 007c6b40 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_88,local_70,2);
  if (local_50 == local_70) {
    lVar7 = 4;
    plVar2 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007c6b0c;
    lVar7 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar7 * 8))();
LAB_007c6b0c:
  if ((local_88 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_71,CONCAT61(acStack_77,cStack_78)));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c6bb0  FUN_007c6bb0 =====

void FUN_007c6bb0(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x50] & 1) == 0) {
    bVar1 = param_1[0x38];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x60));
    bVar1 = param_1[0x38];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x18];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x48));
    bVar1 = param_1[0x18];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x28));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 007c6c2c  facebook::react::DCDChatEventEmitter::onTapSafetyPolicyNoticeEmbed =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::DCDChatEventEmitter::onTapSafetyPolicyNoticeEmbed(facebook::react::DCDChatEventEmitter::OnTapSafetyPolicyNoticeEmbed)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapSafetyPolicyNoticeEmbed
          (DCDChatEventEmitter *this,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong local_b0;
  undefined8 uStack_a8;
  char *local_a0;
  undefined7 local_90;
  undefined1 uStack_89;
  undefined7 uStack_88;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_a0 = (char *)operator_new(0x20);
  uVar5 = s_olicyNoticeEmbed_0036b339._8_8_;
  uVar7 = s_tapSafetyP_0036b32f._0_8_;
  uVar2 = *(undefined1 *)param_2;
  uVar4 = CONCAT26(s_olicyNoticeEmbed_0036b339._6_2_,s_olicyNoticeEmbed_0036b339._0_6_);
  uVar1 = param_2[1];
  lVar8 = param_2[2];
  *(ulong *)(local_a0 + 8) = CONCAT62(s_olicyNoticeEmbed_0036b339._0_6_,s_tapSafetyP_0036b32f._8_2_)
  ;
  *(undefined8 *)local_a0 = uVar7;
  uStack_a8 = _UNK_00372368;
  local_b0 = _s___00372360;
  uVar7 = *(undefined8 *)((long)param_2 + 1);
  *(undefined8 *)(local_a0 + 0x12) = uVar5;
  *(undefined8 *)(local_a0 + 10) = uVar4;
  local_a0[0x1a] = '\0';
  local_90 = (undefined7)uVar7;
  uStack_89 = (undefined1)uVar1;
  uStack_88 = (undefined7)((ulong)uVar1 >> 8);
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
                    /* try { // try from 007c6ca8 to 007c6caf has its CatchHandler @ 007c6d88 */
  local_60 = (long *)operator_new(0x20);
  *local_60 = (long)&PTR_FUN_00987980;
  *(undefined1 *)(local_60 + 1) = uVar2;
  *(ulong *)((long)local_60 + 9) = CONCAT17(uStack_89,local_90);
  local_60[2] = CONCAT71(uStack_88,uStack_89);
  local_60[3] = lVar8;
                    /* try { // try from 007c6cd4 to 007c6ceb has its CatchHandler @ 007c6d50 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_b0,local_80,2);
  if (local_60 == local_80) {
    lVar8 = 4;
    plVar6 = local_80;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_007c6d18;
    lVar8 = 5;
    plVar6 = local_60;
  }
  (**(code **)(*plVar6 + lVar8 * 8))();
LAB_007c6d18:
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c6dc4  facebook::react::DCDChatEventEmitter::onTapSafetySystemNotificationCta =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::DCDChatEventEmitter::onTapSafetySystemNotificationCta(facebook::react::DCDChatEventEmitter::OnTapSafetySystemNotificationCta)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapSafetySystemNotificationCta
          (DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong local_90;
  undefined8 uStack_88;
  char *local_80;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_80 = (char *)operator_new(0x20);
  uVar5 = s_mNotificationCta_0036b358._8_8_;
  uVar4 = s_tapSafetySyste_0036b34a._0_8_;
  uVar2 = CONCAT26(s_mNotificationCta_0036b358._0_2_,s_tapSafetySyste_0036b34a._8_6_);
  uVar3 = CONCAT62(s_mNotificationCta_0036b358._2_6_,s_mNotificationCta_0036b358._0_2_);
  local_80[0x1e] = '\0';
  *(undefined8 *)(local_80 + 8) = uVar2;
  *(undefined8 *)local_80 = uVar4;
  uStack_88 = _UNK_003717a8;
  local_90 = _s___003717a0;
  lVar7 = param_2[2];
  *(undefined8 *)(local_80 + 0x16) = uVar5;
  *(undefined8 *)(local_80 + 0xe) = uVar3;
  lVar11 = param_2[1];
  lVar9 = *param_2;
  lVar8 = param_2[5];
  lVar12 = param_2[4];
  lVar10 = param_2[3];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_50 = (long *)0x0;
                    /* try { // try from 007c6e50 to 007c6e57 has its CatchHandler @ 007c6f4c */
  local_50 = (long *)operator_new(0x38);
  *local_50 = (long)&PTR_FUN_00987a00;
  local_50[2] = lVar11;
  local_50[1] = lVar9;
  local_50[3] = lVar7;
  local_50[5] = lVar12;
  local_50[4] = lVar10;
  local_50[6] = lVar8;
                    /* try { // try from 007c6e9c to 007c6eb3 has its CatchHandler @ 007c6f14 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_90,local_70,2);
  if (local_50 == local_70) {
    lVar7 = 4;
    plVar6 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007c6ee0;
    lVar7 = 5;
    plVar6 = local_50;
  }
  (**(code **)(*plVar6 + lVar7 * 8))();
LAB_007c6ee0:
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c6f84  FUN_007c6f84 =====

void FUN_007c6f84(byte *param_1)

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


// ===== 007c6fc8  facebook::react::DCDChatEventEmitter::onTapPollAnswer =====

/* facebook::react::DCDChatEventEmitter::onTapPollAnswer(facebook::react::DCDChatEventEmitter::OnTapPollAnswer)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapPollAnswer(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  byte local_78;
  char local_77 [5];
  char acStack_72 [3];
  char acStack_6f [5];
  undefined1 local_6a;
  void *local_68;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar9 = param_2[1];
  lVar6 = *param_2;
  local_78 = 0x1a;
  local_77 = s_tapPo_0036bfa1;
  lVar3 = param_2[2];
  lVar10 = param_2[4];
  lVar7 = param_2[3];
  lVar4 = param_2[5];
  lVar11 = param_2[7];
  lVar8 = param_2[6];
  lVar5 = param_2[8];
  acStack_72 = (char  [3])s_llAnswer_0036bfa6._0_3_;
  acStack_6f = (char  [5])s_llAnswer_0036bfa6._3_5_;
  local_6a = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007c7054 to 007c705b has its CatchHandler @ 007c7160 */
  local_40 = (long *)operator_new(0x50);
  *local_40 = (long)&PTR_FUN_00987a80;
  local_40[2] = lVar9;
  local_40[1] = lVar6;
  local_40[3] = lVar3;
  local_40[5] = lVar10;
  local_40[4] = lVar7;
  local_40[6] = lVar4;
  local_40[8] = lVar11;
  local_40[7] = lVar8;
  local_40[9] = lVar5;
                    /* try { // try from 007c70b4 to 007c70cb has its CatchHandler @ 007c7128 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007c70f8;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007c70f8:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c7198  FUN_007c7198 =====

void FUN_007c7198(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x30] & 1) == 0) {
    bVar1 = param_1[0x18];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x40));
    bVar1 = param_1[0x18];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x28));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 007c71fc  facebook::react::DCDChatEventEmitter::onTapPollSubmitVote =====

/* facebook::react::DCDChatEventEmitter::onTapPollSubmitVote(facebook::react::DCDChatEventEmitter::OnTapPollSubmitVote)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapPollSubmitVote(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte local_78;
  char local_77 [8];
  undefined7 uStack_6f;
  char cStack_68;
  undefined2 uStack_67;
  undefined5 uStack_65;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x22;
  uStack_6f = (undefined7)s_tapPollSubmitVote_0036d185._8_8_;
  cStack_68 = SUB81(s_tapPollSubmitVote_0036d185._8_8_,7);
  local_77 = (char  [8])s_tapPollSubmitVote_0036d185._0_8_;
  lVar7 = param_2[1];
  lVar5 = *param_2;
  uStack_67 = 0x65;
  lVar3 = param_2[2];
  lVar8 = param_2[4];
  lVar6 = param_2[3];
  lVar4 = param_2[5];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007c726c to 007c7273 has its CatchHandler @ 007c7364 */
  local_40 = (long *)operator_new(0x38);
  *local_40 = (long)&PTR_FUN_00987b00;
  local_40[2] = lVar7;
  local_40[1] = lVar5;
  local_40[3] = lVar3;
  local_40[5] = lVar8;
  local_40[4] = lVar6;
  local_40[6] = lVar4;
                    /* try { // try from 007c72b8 to 007c72cf has its CatchHandler @ 007c732c */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007c72fc;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007c72fc:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_65,CONCAT21(uStack_67,cStack_68)));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c739c  FUN_007c739c =====

void FUN_007c739c(byte *param_1)

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


// ===== 007c73e0  facebook::react::DCDChatEventEmitter::onTapPollAction =====

/* facebook::react::DCDChatEventEmitter::onTapPollAction(facebook::react::DCDChatEventEmitter::OnTapPollAction)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapPollAction(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  byte local_78;
  char local_77 [5];
  char acStack_72 [3];
  char acStack_6f [5];
  undefined1 local_6a;
  void *local_68;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar9 = param_2[1];
  lVar6 = *param_2;
  local_78 = 0x1a;
  local_77 = s_tapPo_003669ed;
  lVar3 = param_2[2];
  lVar10 = param_2[4];
  lVar7 = param_2[3];
  lVar4 = param_2[5];
  lVar11 = param_2[7];
  lVar8 = param_2[6];
  lVar5 = param_2[8];
  acStack_72 = (char  [3])s_llAction_003669f2._0_3_;
  acStack_6f = (char  [5])s_llAction_003669f2._3_5_;
  local_6a = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007c746c to 007c7473 has its CatchHandler @ 007c7578 */
  local_40 = (long *)operator_new(0x50);
  *local_40 = (long)&PTR_FUN_00987b80;
  local_40[2] = lVar9;
  local_40[1] = lVar6;
  local_40[3] = lVar3;
  local_40[5] = lVar10;
  local_40[4] = lVar7;
  local_40[6] = lVar4;
  local_40[8] = lVar11;
  local_40[7] = lVar8;
  local_40[9] = lVar5;
                    /* try { // try from 007c74cc to 007c74e3 has its CatchHandler @ 007c7540 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007c7510;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007c7510:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c75b0  FUN_007c75b0 =====

void FUN_007c75b0(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x30] & 1) == 0) {
    bVar1 = param_1[0x18];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x40));
    bVar1 = param_1[0x18];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x28));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 007c7614  facebook::react::DCDChatEventEmitter::onLongPressPollImage =====

/* facebook::react::DCDChatEventEmitter::onLongPressPollImage(facebook::react::DCDChatEventEmitter::OnLongPressPollImage)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onLongPressPollImage(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  byte local_e8;
  char local_e7 [8];
  undefined7 uStack_df;
  char cStack_d8;
  undefined2 uStack_d7;
  undefined1 uStack_d5;
  undefined4 uStack_d4;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long local_88;
  long lStack_80;
  undefined4 local_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_e8 = 0x24;
  uStack_d7 = 0x6567;
  local_c0 = param_2[2];
  uStack_df = (undefined7)s_longPressPollImage_0036d197._8_8_;
  cStack_d8 = SUB81(s_longPressPollImage_0036d197._8_8_,7);
  local_e7 = (char  [8])s_longPressPollImage_0036d197._0_8_;
  lStack_c8 = param_2[1];
  local_d0 = *param_2;
  local_a8 = param_2[5];
  lStack_b0 = param_2[4];
  local_b8 = param_2[3];
  local_90 = param_2[8];
  lStack_98 = param_2[7];
  local_a0 = param_2[6];
  local_78 = (undefined4)param_2[0xb];
  lStack_80 = param_2[10];
  local_88 = param_2[9];
  uStack_d5 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  local_50 = (long *)0x0;
                    /* try { // try from 007c76b8 to 007c76bf has its CatchHandler @ 007c77d8 */
  local_50 = (long *)operator_new(0x68);
  *local_50 = (long)&PTR_FUN_00987c00;
  local_50[2] = lStack_c8;
  local_50[1] = local_d0;
  local_50[3] = local_c0;
  local_d0 = 0;
  lStack_c8 = 0;
  local_c0 = 0;
  local_50[5] = lStack_b0;
  local_50[4] = local_b8;
  local_50[6] = local_a8;
  local_50[8] = lStack_98;
  local_50[7] = local_a0;
  lVar4 = param_2[10];
  lVar3 = param_2[9];
  local_50[9] = local_90;
  local_b8 = 0;
  lStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  lStack_98 = 0;
  local_90 = 0;
  *(int *)(local_50 + 0xc) = (int)param_2[0xb];
  local_50[0xb] = lVar4;
  local_50[10] = lVar3;
                    /* try { // try from 007c7728 to 007c773f has its CatchHandler @ 007c77a0 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_e8,local_70,2);
  if (local_50 == local_70) {
    lVar3 = 4;
    plVar2 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007c776c;
    lVar3 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007c776c:
  if ((local_e8 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_d4,CONCAT13(uStack_d5,CONCAT21(uStack_d7,cStack_d8))));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c7810  FUN_007c7810 =====

void FUN_007c7810(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x30] & 1) == 0) {
    bVar1 = param_1[0x18];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x40));
    bVar1 = param_1[0x18];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x28));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 007c7874  facebook::react::DCDChatEventEmitter::onTapCtaButton =====

/* facebook::react::DCDChatEventEmitter::onTapCtaButton(facebook::react::DCDChatEventEmitter::OnTapCtaButton)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapCtaButton(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  byte local_78;
  char local_77 [8];
  undefined4 local_6f;
  undefined1 local_6b;
  void *local_68;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar9 = param_2[1];
  lVar6 = *param_2;
  local_78 = 0x18;
  local_6f = 0x6e6f7474;
  lVar3 = param_2[2];
  lVar10 = param_2[4];
  lVar7 = param_2[3];
  lVar4 = param_2[5];
  lVar11 = param_2[7];
  lVar8 = param_2[6];
  lVar5 = param_2[8];
  local_77 = (char  [8])s_tapCtaButton_0036df51._0_8_;
  local_6b = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007c7904 to 007c790b has its CatchHandler @ 007c7a10 */
  local_40 = (long *)operator_new(0x50);
  *local_40 = (long)&PTR_FUN_00987c80;
  local_40[2] = lVar9;
  local_40[1] = lVar6;
  local_40[3] = lVar3;
  local_40[5] = lVar10;
  local_40[4] = lVar7;
  local_40[6] = lVar4;
  local_40[8] = lVar11;
  local_40[7] = lVar8;
  local_40[9] = lVar5;
                    /* try { // try from 007c7964 to 007c797b has its CatchHandler @ 007c79d8 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007c79a8;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007c79a8:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c7a48  FUN_007c7a48 =====

void FUN_007c7a48(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x30] & 1) == 0) {
    bVar1 = param_1[0x18];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x40));
    bVar1 = param_1[0x18];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x28));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 007c7aac  facebook::react::DCDChatEventEmitter::onFirstLayout =====

/* facebook::react::DCDChatEventEmitter::onFirstLayout(facebook::react::DCDChatEventEmitter::OnFirstLayout)
   const */

void facebook::react::DCDChatEventEmitter::onFirstLayout
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  undefined7 local_77;
  char cStack_70;
  undefined3 uStack_6f;
  undefined1 local_6c;
  void *local_68;
  undefined **local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x16;
  local_6c = 0;
  local_77 = (undefined7)s_firstLayout_0036a77c._0_8_;
  _cStack_70 = CONCAT31(0x74756f,SUB81(s_firstLayout_0036a77c._0_8_,7));
  local_60 = &PTR_FUN_00987d00;
                    /* try { // try from 007c7b08 to 007c7b17 has its CatchHandler @ 007c7b74 */
  uStack_58 = param_2;
  local_50 = param_3;
  local_40 = &local_60;
  ::facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_007c7b44;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_007c7b44:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c7bd4  facebook::react::DCDChatEventEmitter::onMessageVisibilityChanged =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::DCDChatEventEmitter::onMessageVisibilityChanged(facebook::react::DCDChatEventEmitter::OnMessageVisibilityChanged)
   const */

void facebook::react::DCDChatEventEmitter::onMessageVisibilityChanged
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  long lVar6;
  ulong local_90;
  undefined8 uStack_88;
  char *local_80;
  undefined **local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_80 = (char *)operator_new(0x20);
  uVar4 = s_yChanged_00365c84._0_8_;
  uVar3 = s_messageVisibilit_00365c74._8_8_;
  uVar2 = s_messageVisibilit_00365c74._0_8_;
  local_80[0x18] = '\0';
  *(undefined8 *)(local_80 + 8) = uVar3;
  *(undefined8 *)local_80 = uVar2;
  uStack_88 = _UNK_00371468;
  local_90 = _DAT_00371460;
  *(undefined8 *)(local_80 + 0x10) = uVar4;
  local_70 = &PTR_FUN_00987d80;
                    /* try { // try from 007c7c4c to 007c7c5f has its CatchHandler @ 007c7cc0 */
  uStack_68 = param_2;
  local_60 = param_3;
  local_50 = &local_70;
  ::facebook::react::EventEmitter::dispatchEvent(param_1,&local_90,&local_70,2);
  if (local_50 == &local_70) {
    lVar6 = 4;
    pppuVar5 = &local_70;
  }
  else {
    if (local_50 == (undefined ***)0x0) goto LAB_007c7c8c;
    lVar6 = 5;
    pppuVar5 = local_50;
  }
  (*(code *)(*pppuVar5)[lVar6])();
LAB_007c7c8c:
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c7d20  facebook::react::DCDChatEventEmitter::onCompleteFirstLayout =====

/* facebook::react::DCDChatEventEmitter::onCompleteFirstLayout(facebook::react::DCDChatEventEmitter::OnCompleteFirstLayout)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onCompleteFirstLayout
          (undefined8 param_1,DCDChatEventEmitter *this)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined7 uStack_6f;
  undefined4 uStack_68;
  uint uStack_64;
  undefined **local_60;
  undefined8 local_58;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x26;
  uStack_64 = uStack_64 & 0xffffff00;
  uStack_6f = (undefined7)s_completeFirstLayout_0036ff64._8_8_;
  uStack_68 = CONCAT31(0x74756f,SUB81(s_completeFirstLayout_0036ff64._8_8_,7));
  local_77 = (char  [8])s_completeFirstLayout_0036ff64._0_8_;
  local_60 = &PTR_FUN_00987e00;
                    /* try { // try from 007c7d7c to 007c7d8b has its CatchHandler @ 007c7de8 */
  local_58 = param_1;
  local_40 = &local_60;
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_007c7db8;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_007c7db8:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_64,uStack_68));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c7e48  facebook::react::DCDChatEventEmitter::onMessageAccessibilityAction =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::DCDChatEventEmitter::onMessageAccessibilityAction(facebook::react::DCDChatEventEmitter::OnMessageAccessibilityAction)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onMessageAccessibilityAction
          (DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong local_90;
  undefined8 uStack_88;
  char *local_80;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_80 = (char *)operator_new(0x20);
  uVar5 = s_essibilityAction_0036df68._8_8_;
  uVar4 = s_messageAcc_0036df5e._0_8_;
  uVar2 = CONCAT62(s_essibilityAction_0036df68._0_6_,s_messageAcc_0036df5e._8_2_);
  uVar3 = CONCAT26(s_essibilityAction_0036df68._6_2_,s_essibilityAction_0036df68._0_6_);
  local_80[0x1a] = '\0';
  *(undefined8 *)(local_80 + 8) = uVar2;
  *(undefined8 *)local_80 = uVar4;
  uStack_88 = _UNK_00372368;
  local_90 = _s___00372360;
  lVar7 = param_2[2];
  *(undefined8 *)(local_80 + 0x12) = uVar5;
  *(undefined8 *)(local_80 + 10) = uVar3;
  lVar11 = param_2[1];
  lVar9 = *param_2;
  lVar8 = param_2[5];
  lVar12 = param_2[4];
  lVar10 = param_2[3];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_50 = (long *)0x0;
                    /* try { // try from 007c7ed4 to 007c7edb has its CatchHandler @ 007c7fd0 */
  local_50 = (long *)operator_new(0x38);
  *local_50 = (long)&PTR_FUN_00987e80;
  local_50[2] = lVar11;
  local_50[1] = lVar9;
  local_50[3] = lVar7;
  local_50[5] = lVar12;
  local_50[4] = lVar10;
  local_50[6] = lVar8;
                    /* try { // try from 007c7f20 to 007c7f37 has its CatchHandler @ 007c7f98 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_90,local_70,2);
  if (local_50 == local_70) {
    lVar7 = 4;
    plVar6 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007c7f64;
    lVar7 = 5;
    plVar6 = local_50;
  }
  (**(code **)(*plVar6 + lVar7 * 8))();
LAB_007c7f64:
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c8008  FUN_007c8008 =====

void FUN_007c8008(byte *param_1)

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


// ===== 007c804c  facebook::react::DCDChatEventEmitter::onMediaPlayFinishedAnalytics =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::DCDChatEventEmitter::onMediaPlayFinishedAnalytics(facebook::react::DCDChatEventEmitter::OnMediaPlayFinishedAnalytics)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onMediaPlayFinishedAnalytics
          (DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong local_a0;
  undefined8 uStack_98;
  char *local_90;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_90 = (char *)operator_new(0x20);
  uVar6 = s_inishedAnalytics_00366e61._8_8_;
  uVar5 = s_mediaPlayF_00366e57._0_8_;
  lVar11 = param_2[6];
  uVar2 = CONCAT26(s_inishedAnalytics_00366e61._6_2_,s_inishedAnalytics_00366e61._0_6_);
  lVar3 = param_2[10];
  *(ulong *)(local_90 + 8) = CONCAT62(s_inishedAnalytics_00366e61._0_6_,s_mediaPlayF_00366e57._8_2_)
  ;
  *(undefined8 *)local_90 = uVar5;
  uStack_98 = _UNK_00372368;
  local_a0 = _s___00372360;
  *(undefined8 *)(local_90 + 0x12) = uVar6;
  *(undefined8 *)(local_90 + 10) = uVar2;
  lVar16 = param_2[4];
  lVar12 = param_2[3];
  lVar8 = param_2[5];
  lVar17 = param_2[8];
  lVar13 = param_2[7];
  lVar9 = param_2[9];
  lVar18 = param_2[0xc];
  lVar14 = param_2[0xb];
  lVar10 = param_2[0xd];
  local_90[0x1a] = '\0';
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[7] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  local_60 = (long *)0x0;
                    /* try { // try from 007c8118 to 007c811f has its CatchHandler @ 007c8248 */
  local_60 = (long *)operator_new(0x78);
  lVar19 = param_2[1];
  lVar15 = *param_2;
  *local_60 = (long)&PTR_FUN_00987f00;
  lVar4 = param_2[2];
  local_60[2] = lVar19;
  local_60[1] = lVar15;
  *(int *)(local_60 + 3) = (int)lVar4;
  local_60[5] = lVar16;
  local_60[4] = lVar12;
  local_60[6] = lVar8;
  local_60[9] = lVar17;
  local_60[8] = lVar13;
  local_60[10] = lVar9;
  *(int *)(local_60 + 7) = (int)lVar11;
  *(int *)(local_60 + 0xb) = (int)lVar3;
  local_60[0xe] = lVar10;
  local_60[0xd] = lVar18;
  local_60[0xc] = lVar14;
                    /* try { // try from 007c8194 to 007c81ab has its CatchHandler @ 007c8210 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_a0,local_80,2);
  if (local_60 == local_80) {
    lVar11 = 4;
    plVar7 = local_80;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_007c81d8;
    lVar11 = 5;
    plVar7 = local_60;
  }
  (**(code **)(*plVar7 + lVar11 * 8))();
LAB_007c81d8:
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c8280  FUN_007c8280 =====

void FUN_007c8280(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x38);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x68));
    bVar1 = *(byte *)(param_1 + 0x38);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x18);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x48));
    bVar1 = *(byte *)(param_1 + 0x18);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x28));
  return;
}


// ===== 007c82e4  facebook::react::DCDChatEventEmitter::onTapForwardFooter =====

/* facebook::react::DCDChatEventEmitter::onTapForwardFooter(facebook::react::DCDChatEventEmitter::OnTapForwardFooter)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapForwardFooter(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  byte local_78;
  char local_77 [8];
  undefined7 uStack_6f;
  char cStack_68;
  undefined1 uStack_67;
  undefined6 uStack_66;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x20;
  lVar3 = param_2[2];
  uStack_6f = (undefined7)s_tapForwardFooter_0036a788._8_8_;
  cStack_68 = SUB81(s_tapForwardFooter_0036a788._8_8_,7);
  local_77 = (char  [8])s_tapForwardFooter_0036a788._0_8_;
  lVar9 = param_2[1];
  lVar6 = *param_2;
  lVar4 = param_2[5];
  lVar10 = param_2[4];
  lVar7 = param_2[3];
  lVar5 = param_2[8];
  lVar11 = param_2[7];
  lVar8 = param_2[6];
  uStack_67 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007c8368 to 007c836f has its CatchHandler @ 007c8474 */
  local_40 = (long *)operator_new(0x50);
  *local_40 = (long)&PTR_FUN_00987f80;
  local_40[2] = lVar9;
  local_40[1] = lVar6;
  local_40[3] = lVar3;
  local_40[5] = lVar10;
  local_40[4] = lVar7;
  local_40[6] = lVar4;
  local_40[8] = lVar11;
  local_40[7] = lVar8;
  local_40[9] = lVar5;
                    /* try { // try from 007c83c8 to 007c83df has its CatchHandler @ 007c843c */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007c840c;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007c840c:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_66,CONCAT11(uStack_67,cStack_68)));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c84ac  FUN_007c84ac =====

void FUN_007c84ac(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x30] & 1) == 0) {
    bVar1 = param_1[0x18];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x40));
    bVar1 = param_1[0x18];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x28));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 007c8510  facebook::react::DCDChatEventEmitter::onTapInlineForward =====

/* facebook::react::DCDChatEventEmitter::onTapInlineForward(facebook::react::DCDChatEventEmitter::OnTapInlineForward)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapInlineForward(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  byte local_88;
  char local_87 [8];
  undefined7 uStack_7f;
  char cStack_78;
  undefined1 uStack_77;
  undefined6 uStack_76;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_7f = (undefined7)s_tapInlineForward_0036931d._8_8_;
  cStack_78 = SUB81(s_tapInlineForward_0036931d._8_8_,7);
  local_87 = (char  [8])s_tapInlineForward_0036931d._0_8_;
  lVar10 = param_2[1];
  lVar5 = *param_2;
  lVar3 = param_2[2];
  local_88 = 0x20;
  lVar6 = param_2[10];
  lVar11 = param_2[4];
  lVar8 = param_2[3];
  lVar4 = param_2[5];
  lVar12 = param_2[9];
  lVar9 = param_2[8];
  uStack_77 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  local_50 = (long *)0x0;
                    /* try { // try from 007c85a8 to 007c85af has its CatchHandler @ 007c86c8 */
  local_50 = (long *)operator_new(0x60);
  *local_50 = (long)&PTR_FUN_00988000;
  lVar7 = param_2[6];
  local_50[2] = lVar10;
  local_50[1] = lVar5;
  lVar5 = param_2[7];
  local_50[3] = lVar3;
  local_50[5] = lVar11;
  local_50[4] = lVar8;
  local_50[6] = lVar4;
  local_50[7] = lVar7;
  *(char *)(local_50 + 8) = (char)lVar5;
  local_50[0xb] = lVar6;
  local_50[10] = lVar12;
  local_50[9] = lVar9;
                    /* try { // try from 007c8618 to 007c862f has its CatchHandler @ 007c8690 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_88,local_70,2);
  if (local_50 == local_70) {
    lVar5 = 4;
    plVar2 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007c865c;
    lVar5 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar5 * 8))();
LAB_007c865c:
  if ((local_88 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_76,CONCAT11(uStack_77,cStack_78)));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c8700  FUN_007c8700 =====

void FUN_007c8700(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x40] & 1) == 0) {
    bVar1 = param_1[0x18];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x50));
    bVar1 = param_1[0x18];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x28));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 007c8764  facebook::react::DCDChatEventEmitter::onTapClanTagChiplet =====

/* facebook::react::DCDChatEventEmitter::onTapClanTagChiplet(facebook::react::DCDChatEventEmitter::OnTapClanTagChiplet)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapClanTagChiplet
          (DCDChatEventEmitter *this,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  byte local_98;
  char local_97 [8];
  undefined7 uStack_8f;
  char cStack_88;
  undefined2 uStack_87;
  undefined5 uStack_85;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar2 = *(undefined1 *)param_2;
  uStack_87 = 0x74;
  local_98 = 0x22;
  local_80 = (undefined7)*(undefined8 *)((long)param_2 + 1);
  uVar1 = param_2[1];
  lVar5 = param_2[2];
  uStack_8f = (undefined7)s_tapClanTagChiplet_00368629._8_8_;
  cStack_88 = SUB81(s_tapClanTagChiplet_00368629._8_8_,7);
  local_97 = (char  [8])s_tapClanTagChiplet_00368629._0_8_;
  param_2[1] = 0;
  param_2[2] = 0;
  uStack_79 = (undefined1)uVar1;
  uStack_78 = (undefined7)((ulong)uVar1 >> 8);
  *param_2 = 0;
                    /* try { // try from 007c87c4 to 007c87cb has its CatchHandler @ 007c88a0 */
  local_50 = (long *)operator_new(0x20);
  *local_50 = (long)&PTR_FUN_00988080;
  *(undefined1 *)(local_50 + 1) = uVar2;
  *(ulong *)((long)local_50 + 9) = CONCAT17(uStack_79,local_80);
  local_50[2] = CONCAT71(uStack_78,uStack_79);
  local_50[3] = lVar5;
                    /* try { // try from 007c87f0 to 007c8807 has its CatchHandler @ 007c8868 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_98,local_70,2);
  if (local_50 == local_70) {
    lVar5 = 4;
    plVar4 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007c8834;
    lVar5 = 5;
    plVar4 = local_50;
  }
  (**(code **)(*plVar4 + lVar5 * 8))();
LAB_007c8834:
  if ((local_98 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_85,CONCAT21(uStack_87,cStack_88)));
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c88dc  facebook::react::DCDChatEventEmitter::onTapContentInventoryEntryEmbed =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::DCDChatEventEmitter::onTapContentInventoryEntryEmbed(facebook::react::DCDChatEventEmitter::OnTapContentInventoryEntryEmbed)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapContentInventoryEntryEmbed
          (DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong local_e0;
  undefined8 uStack_d8;
  char *local_d0;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long local_90;
  long lStack_88;
  long local_80;
  undefined4 local_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_d0 = (char *)operator_new(0x20);
  uVar4 = s_entoryEntryEmbed_0036f8c1._8_8_;
  uVar3 = s_tapContentInv_0036f8b4._0_8_;
  lVar6 = param_2[9];
  uVar2 = CONCAT53(s_entoryEntryEmbed_0036f8c1._3_5_,s_entoryEntryEmbed_0036f8c1._0_3_);
  *(ulong *)(local_d0 + 8) =
       CONCAT35(s_entoryEntryEmbed_0036f8c1._0_3_,s_tapContentInv_0036f8b4._8_5_);
  *(undefined8 *)local_d0 = uVar3;
  uStack_d8 = _UNK_00372438;
  local_e0 = _DAT_00372430;
  local_b0 = param_2[2];
  *(undefined8 *)(local_d0 + 0x15) = uVar4;
  *(undefined8 *)(local_d0 + 0xd) = uVar2;
  lStack_b8 = param_2[1];
  local_c0 = *param_2;
  local_98 = param_2[5];
  lStack_a0 = param_2[4];
  local_a8 = param_2[3];
  local_80 = param_2[8];
  lStack_88 = param_2[7];
  local_90 = param_2[6];
  local_d0[0x1d] = '\0';
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  local_50 = (long *)0x0;
  local_78 = (int)lVar6;
                    /* try { // try from 007c8988 to 007c898f has its CatchHandler @ 007c8a9c */
  local_50 = (long *)operator_new(0x58);
  *local_50 = (long)&PTR_FUN_00988100;
  local_50[2] = lStack_b8;
  local_50[1] = local_c0;
  local_50[3] = local_b0;
  local_c0 = 0;
  lStack_b8 = 0;
  local_b0 = 0;
  local_50[5] = lStack_a0;
  local_50[4] = local_a8;
  local_50[6] = local_98;
  local_a8 = 0;
  lStack_a0 = 0;
  local_50[8] = lStack_88;
  local_50[7] = local_90;
  local_50[9] = local_80;
  local_98 = 0;
  local_90 = 0;
  lStack_88 = 0;
  local_80 = 0;
  *(int *)(local_50 + 10) = (int)lVar6;
                    /* try { // try from 007c89ec to 007c8a03 has its CatchHandler @ 007c8a64 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_e0,local_70,2);
  if (local_50 == local_70) {
    lVar6 = 4;
    plVar5 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007c8a30;
    lVar6 = 5;
    plVar5 = local_50;
  }
  (**(code **)(*plVar5 + lVar6 * 8))();
LAB_007c8a30:
  if ((local_e0 & 1) != 0) {
    operator_delete(local_d0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c8ad4  FUN_007c8ad4 =====

void FUN_007c8ad4(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x30] & 1) == 0) {
    bVar1 = param_1[0x18];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x40));
    bVar1 = param_1[0x18];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x28));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 007c8b38  facebook::react::DCDChatEventEmitter::onTapCheckpointCard =====

/* facebook::react::DCDChatEventEmitter::onTapCheckpointCard(facebook::react::DCDChatEventEmitter::OnTapCheckpointCard)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapCheckpointCard(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte local_78;
  char local_77 [8];
  undefined7 uStack_6f;
  char cStack_68;
  undefined2 uStack_67;
  undefined5 uStack_65;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x22;
  uStack_6f = (undefined7)s_tapCheckpointCard_0036d1aa._8_8_;
  cStack_68 = SUB81(s_tapCheckpointCard_0036d1aa._8_8_,7);
  local_77 = (char  [8])s_tapCheckpointCard_0036d1aa._0_8_;
  lVar7 = param_2[1];
  lVar5 = *param_2;
  uStack_67 = 100;
  lVar3 = param_2[2];
  lVar8 = param_2[4];
  lVar6 = param_2[3];
  lVar4 = param_2[5];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007c8ba8 to 007c8baf has its CatchHandler @ 007c8ca0 */
  local_40 = (long *)operator_new(0x38);
  *local_40 = (long)&PTR_FUN_00988180;
  local_40[2] = lVar7;
  local_40[1] = lVar5;
  local_40[3] = lVar3;
  local_40[5] = lVar8;
  local_40[4] = lVar6;
  local_40[6] = lVar4;
                    /* try { // try from 007c8bf4 to 007c8c0b has its CatchHandler @ 007c8c68 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007c8c38;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007c8c38:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_65,CONCAT21(uStack_67,cStack_68)));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c8cd8  FUN_007c8cd8 =====

void FUN_007c8cd8(byte *param_1)

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


// ===== 007c8d1c  facebook::react::DCDChatEventEmitter::onTapSoundmoji =====

/* facebook::react::DCDChatEventEmitter::onTapSoundmoji(facebook::react::DCDChatEventEmitter::OnTapSoundmoji)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapSoundmoji(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  byte local_78;
  char local_77 [8];
  undefined4 local_6f;
  undefined1 local_6b;
  void *local_68;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar11 = param_2[1];
  lVar7 = *param_2;
  local_78 = 0x18;
  local_6f = 0x696a6f6d;
  lVar3 = param_2[2];
  lVar12 = param_2[4];
  lVar8 = param_2[3];
  lVar4 = param_2[5];
  lVar13 = param_2[7];
  lVar9 = param_2[6];
  lVar5 = param_2[8];
  lVar14 = param_2[10];
  lVar10 = param_2[9];
  lVar6 = param_2[0xb];
  local_77 = (char  [8])s_tapSoundmoji_0036c45a._0_8_;
  local_6b = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007c8dc0 to 007c8dc7 has its CatchHandler @ 007c8ee4 */
  local_40 = (long *)operator_new(0x68);
  *local_40 = (long)&PTR_FUN_00988200;
  local_40[2] = lVar11;
  local_40[1] = lVar7;
  local_40[3] = lVar3;
  local_40[5] = lVar12;
  local_40[4] = lVar8;
  local_40[6] = lVar4;
  local_40[8] = lVar13;
  local_40[7] = lVar9;
  local_40[9] = lVar5;
  local_40[0xc] = lVar6;
  local_40[0xb] = lVar14;
  local_40[10] = lVar10;
                    /* try { // try from 007c8e38 to 007c8e4f has its CatchHandler @ 007c8eac */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007c8e7c;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007c8e7c:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c8f1c  FUN_007c8f1c =====

void FUN_007c8f1c(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x48] & 1) == 0) {
    bVar1 = param_1[0x30];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x58));
    bVar1 = param_1[0x30];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x18];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x40));
    bVar1 = param_1[0x18];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x28));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 007c8f98  facebook::react::DCDChatEventEmitter::onTapAppMessageEmbed =====

/* facebook::react::DCDChatEventEmitter::onTapAppMessageEmbed(facebook::react::DCDChatEventEmitter::OnTapAppMessageEmbed)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapAppMessageEmbed(DCDChatEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  byte local_88;
  char local_87 [8];
  undefined7 uStack_7f;
  char cStack_78;
  undefined2 uStack_77;
  undefined1 uStack_75;
  undefined4 uStack_74;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_88 = 0x24;
  lVar8 = param_2[3];
  uStack_77 = 0x6465;
  uStack_7f = (undefined7)s_tapAppMessageEmbed_0036ade0._8_8_;
  cStack_78 = SUB81(s_tapAppMessageEmbed_0036ade0._8_8_,7);
  local_87 = (char  [8])s_tapAppMessageEmbed_0036ade0._0_8_;
  lVar14 = param_2[1];
  lVar9 = *param_2;
  lVar3 = param_2[2];
  uStack_75 = 0;
  lVar15 = param_2[5];
  lVar10 = param_2[4];
  lVar4 = param_2[6];
  lVar16 = param_2[8];
  lVar11 = param_2[7];
  lVar5 = param_2[9];
  lVar17 = param_2[0xb];
  lVar12 = param_2[10];
  lVar6 = param_2[0xc];
  lVar18 = param_2[0xe];
  lVar13 = param_2[0xd];
  lVar7 = param_2[0xf];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  local_50 = (long *)0x0;
                    /* try { // try from 007c9060 to 007c9067 has its CatchHandler @ 007c91a0 */
  local_50 = (long *)operator_new(0x88);
  *local_50 = (long)&PTR_FUN_00988280;
  local_50[2] = lVar14;
  local_50[1] = lVar9;
  local_50[3] = lVar3;
  local_50[6] = lVar15;
  local_50[5] = lVar10;
  local_50[7] = lVar4;
  local_50[9] = lVar16;
  local_50[8] = lVar11;
  local_50[10] = lVar5;
  local_50[0xc] = lVar17;
  local_50[0xb] = lVar12;
  local_50[0xd] = lVar6;
  *(int *)(local_50 + 4) = (int)lVar8;
  local_50[0x10] = lVar7;
  local_50[0xf] = lVar18;
  local_50[0xe] = lVar13;
                    /* try { // try from 007c90f0 to 007c9107 has its CatchHandler @ 007c9168 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_88,local_70,2);
  if (local_50 == local_70) {
    lVar8 = 4;
    plVar2 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007c9134;
    lVar8 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar8 * 8))();
LAB_007c9134:
  if ((local_88 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_74,CONCAT13(uStack_75,CONCAT21(uStack_77,cStack_78))));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c91d8  FUN_007c91d8 =====

void FUN_007c91d8(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x68] & 1) == 0) {
    bVar1 = param_1[0x50];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x78));
    bVar1 = param_1[0x50];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x38];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x60));
    bVar1 = param_1[0x38];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x20];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x48));
    bVar1 = param_1[0x20];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    operator_delete(*(void **)(param_1 + 0x30));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 007c926c  facebook::react::DCDChatEventEmitter::onTapPreviewSharedClientTheme =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::DCDChatEventEmitter::onTapPreviewSharedClientTheme(facebook::react::DCDChatEventEmitter::OnTapPreviewSharedClientTheme)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onTapPreviewSharedClientTheme
          (DCDChatEventEmitter *this,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong local_b0;
  undefined8 uStack_a8;
  char *local_a0;
  undefined7 local_90;
  undefined1 uStack_89;
  undefined7 uStack_88;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_a0 = (char *)operator_new(0x20);
  uVar5 = s_haredClientTheme_0036d90f._8_8_;
  uVar7 = s_tapPreviewS_0036d904._0_8_;
  uVar2 = *(undefined1 *)param_2;
  uVar4 = CONCAT35(s_haredClientTheme_0036d90f._5_3_,s_haredClientTheme_0036d90f._0_5_);
  uVar1 = param_2[1];
  lVar8 = param_2[2];
  *(ulong *)(local_a0 + 8) =
       CONCAT53(s_haredClientTheme_0036d90f._0_5_,s_tapPreviewS_0036d904._8_3_);
  *(undefined8 *)local_a0 = uVar7;
  uStack_a8 = _UNK_00371b28;
  local_b0 = _s___00371b20;
  uVar7 = *(undefined8 *)((long)param_2 + 1);
  *(undefined8 *)(local_a0 + 0x13) = uVar5;
  *(undefined8 *)(local_a0 + 0xb) = uVar4;
  local_a0[0x1b] = '\0';
  local_90 = (undefined7)uVar7;
  uStack_89 = (undefined1)uVar1;
  uStack_88 = (undefined7)((ulong)uVar1 >> 8);
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
                    /* try { // try from 007c92e8 to 007c92ef has its CatchHandler @ 007c93c8 */
  local_60 = (long *)operator_new(0x20);
  *local_60 = (long)&PTR_FUN_00988300;
  *(undefined1 *)(local_60 + 1) = uVar2;
  *(ulong *)((long)local_60 + 9) = CONCAT17(uStack_89,local_90);
  local_60[2] = CONCAT71(uStack_88,uStack_89);
  local_60[3] = lVar8;
                    /* try { // try from 007c9314 to 007c932b has its CatchHandler @ 007c9390 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_b0,local_80,2);
  if (local_60 == local_80) {
    lVar8 = 4;
    plVar6 = local_80;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_007c9358;
    lVar8 = 5;
    plVar6 = local_60;
  }
  (**(code **)(*plVar6 + lVar8 * 8))();
LAB_007c9358:
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c9404  facebook::react::DCDChatEventEmitter::onSharedClientThemeViewed =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::DCDChatEventEmitter::onSharedClientThemeViewed(facebook::react::DCDChatEventEmitter::OnSharedClientThemeViewed)
   const */

void __thiscall
facebook::react::DCDChatEventEmitter::onSharedClientThemeViewed
          (DCDChatEventEmitter *this,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong local_b0;
  undefined8 uStack_a8;
  char *local_a0;
  undefined7 local_90;
  undefined1 uStack_89;
  undefined7 uStack_88;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_a0 = (char *)operator_new(0x20);
  uVar1 = s_sharedClientThe_003697a8._0_8_;
  uVar5 = CONCAT71(s_meViewed_003697b7._1_7_,s_meViewed_003697b7[0]);
  uVar2 = *(undefined1 *)param_2;
  *(ulong *)(local_a0 + 8) = CONCAT17(s_meViewed_003697b7[0],s_sharedClientThe_003697a8._8_7_);
  *(undefined8 *)local_a0 = uVar1;
  uStack_a8 = _UNK_00372d28;
  local_b0 = _s___00372d20;
  uVar1 = param_2[1];
  lVar6 = param_2[2];
  *(undefined8 *)(local_a0 + 0xf) = uVar5;
  uVar5 = *(undefined8 *)((long)param_2 + 1);
  local_a0[0x17] = '\0';
  local_90 = (undefined7)uVar5;
  uStack_89 = (undefined1)uVar1;
  uStack_88 = (undefined7)((ulong)uVar1 >> 8);
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
                    /* try { // try from 007c9480 to 007c9487 has its CatchHandler @ 007c9560 */
  local_60 = (long *)operator_new(0x20);
  *local_60 = (long)&PTR_FUN_00988380;
  *(undefined1 *)(local_60 + 1) = uVar2;
  *(ulong *)((long)local_60 + 9) = CONCAT17(uStack_89,local_90);
  local_60[2] = CONCAT71(uStack_88,uStack_89);
  local_60[3] = lVar6;
                    /* try { // try from 007c94ac to 007c94c3 has its CatchHandler @ 007c9528 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_b0,local_80,2);
  if (local_60 == local_80) {
    lVar6 = 4;
    plVar4 = local_80;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_007c94f0;
    lVar6 = 5;
    plVar4 = local_60;
  }
  (**(code **)(*plVar4 + lVar6 * 8))();
LAB_007c94f0:
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c959c  facebook::react::EmojiPickerViewEventEmitter::onStickyHeaderRender =====

/* facebook::react::EmojiPickerViewEventEmitter::onStickyHeaderRender(facebook::react::EmojiPickerViewEventEmitter::OnStickyHeaderRender)
   const */

void __thiscall
facebook::react::EmojiPickerViewEventEmitter::onStickyHeaderRender
          (EmojiPickerViewEventEmitter *this,undefined4 param_2)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined7 uStack_6f;
  char cStack_68;
  undefined2 uStack_67;
  undefined1 uStack_65;
  undefined4 uStack_64;
  undefined **local_60;
  undefined4 local_58;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x24;
  uStack_67 = 0x7265;
  uStack_6f = (undefined7)s_stickyHeaderRender_0036bfaf._8_8_;
  cStack_68 = SUB81(s_stickyHeaderRender_0036bfaf._8_8_,7);
  local_77 = (char  [8])s_stickyHeaderRender_0036bfaf._0_8_;
  uStack_65 = 0;
  local_60 = &PTR_FUN_00988400;
                    /* try { // try from 007c95f4 to 007c9603 has its CatchHandler @ 007c9660 */
  local_58 = param_2;
  local_40 = &local_60;
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_007c9630;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_007c9630:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_64,CONCAT13(uStack_65,CONCAT21(uStack_67,cStack_68))));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c96c0  facebook::react::EmojiPickerViewEventEmitter::onPressEmoji =====

/* facebook::react::EmojiPickerViewEventEmitter::onPressEmoji(facebook::react::EmojiPickerViewEventEmitter::OnPressEmoji)
   const */

void __thiscall
facebook::react::EmojiPickerViewEventEmitter::onPressEmoji
          (EmojiPickerViewEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte local_78;
  char local_77 [8];
  undefined2 local_6f;
  undefined1 local_6d;
  void *local_68;
  long local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_6f = 0x696a;
  lVar7 = param_2[1];
  lVar5 = *param_2;
  lVar3 = param_2[2];
  local_78 = 0x14;
  lVar8 = param_2[4];
  lVar6 = param_2[3];
  lVar4 = param_2[5];
  local_77 = (char  [8])s_pressEmoji_003697c0._0_8_;
  local_6d = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_40 = (long *)0x0;
                    /* try { // try from 007c9734 to 007c973b has its CatchHandler @ 007c982c */
  local_40 = (long *)operator_new(0x38);
  *local_40 = (long)&PTR_FUN_00988480;
  local_40[2] = lVar7;
  local_40[1] = lVar5;
  local_40[3] = lVar3;
  local_40[5] = lVar8;
  local_40[4] = lVar6;
  local_40[6] = lVar4;
                    /* try { // try from 007c9780 to 007c9797 has its CatchHandler @ 007c97f4 */
  ::facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007c97c4;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_007c97c4:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007c9864  FUN_007c9864 =====

void FUN_007c9864(byte *param_1)

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


