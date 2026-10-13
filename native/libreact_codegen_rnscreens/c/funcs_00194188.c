// ===== 00194188  FUN_00194188 =====

void FUN_00194188(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001eac60;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00194198  FUN_00194198 =====

void FUN_00194198(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001eac60;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001941c8  FUN_001941c8 =====

void FUN_001941c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001941d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 001941d4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 001941d8  FUN_001941d8 =====

void FUN_001941d8(long *param_1)

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


// ===== 00194298  FUN_00194298 =====

void FUN_00194298(long param_1)

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


// ===== 00194300  FUN_00194300 =====

bool FUN_00194300(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 00194318  FUN_00194318 =====

bool FUN_00194318(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 00194330  FUN_00194330 =====

void FUN_00194330(long param_1)

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


// ===== 00194380  FUN_00194380 =====

void FUN_00194380(void)

{
  undefined8 *__s;
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x968);
  __s = puVar3 + 3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_001ead78;
  memset(__s,0,0x950);
                    /* try { // try from 001943bc to 001943cf has its CatchHandler @ 00194520 */
  FUN_0017cb10(__s,PTR_PTR_001f0d00 + 0x10);
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
  puVar2 = PTR_vtable_001f0cf8;
  *(undefined8 *)((long)puVar3 + 0x784) = 0;
  *(undefined4 *)(puVar3 + 0xfd) = 2;
  uVar1 = DAT_001423a8;
  *(undefined2 *)((long)puVar3 + 0x6cc) = 0;
  puVar3[3] = puVar2 + 0x20;
  *(undefined2 *)(puVar3 + 0xf0) = 0x101;
  *(undefined1 *)(puVar3 + 0xe2) = 0;
  puVar3[0xe1] = 0;
  puVar3[0xe0] = 0;
  puVar3[0xdf] = 0;
  puVar3[0xe4] = 0;
  puVar3[0xe3] = 0;
  puVar3[0xe6] = 0;
  puVar3[0xe5] = 0;
  puVar3[0xe8] = 0;
  puVar3[0xe7] = 0;
  *(undefined4 *)(puVar3 + 0xe9) = 0;
  puVar3[0xeb] = 0;
  puVar3[0xea] = 0;
  puVar3[0xed] = 0;
  puVar3[0xec] = 0;
  puVar3[0xef] = 0;
  puVar3[0xee] = 0;
  *(undefined1 *)((long)puVar3 + 0x782) = 1;
  puVar3[0xf2] = 0;
  *(undefined4 *)(puVar3 + 0xf7) = 0;
  puVar3[0xf8] = 0;
  *(undefined4 *)(puVar3 + 0xfe) = 0;
  puVar3[0x105] = 0;
  puVar3[0x104] = 0;
  puVar3[0x103] = 0;
  *(undefined1 *)(puVar3 + 0x102) = 0;
  puVar3[0x101] = 0;
  puVar3[0x100] = 0;
  puVar3[0xff] = 0;
  puVar3[0x106] = uVar1;
  *(undefined4 *)(puVar3 + 0x107) = 0;
  puVar3[0x11c] = 0;
  puVar3[0x11b] = 0;
  puVar3[0x11a] = 0;
  puVar3[0x109] = 0;
  puVar3[0x108] = 0;
  puVar3[0x10b] = 0;
  puVar3[0x10a] = 0;
  puVar3[0x10d] = 0;
  puVar3[0x10c] = 0;
  *(undefined4 *)(puVar3 + 0x10e) = 0;
  *(undefined4 *)(puVar3 + 0x115) = 0;
  puVar3[0x114] = 0;
  puVar3[0x113] = 0;
  puVar3[0x112] = 0;
  puVar3[0x111] = 0;
  puVar3[0x110] = 0;
  puVar3[0x10f] = 0;
  puVar3[0x118] = 0;
  puVar3[0x117] = 0;
  puVar3[0x116] = 0;
  *(undefined1 *)(puVar3 + 0x119) = 0;
  puVar3[0x11d] = uVar1;
  *(undefined4 *)(puVar3 + 0x11e) = 0;
  *(undefined4 *)(puVar3 + 0x125) = 0;
  puVar3[0x124] = 0;
  puVar3[0x123] = 0;
  puVar3[0x122] = 0;
  puVar3[0x121] = 0;
  puVar3[0x120] = 0;
  puVar3[0x11f] = 0;
  puVar3[299] = 0;
  puVar3[0x12a] = 0;
  puVar3[0x129] = 0;
  puVar3[0x128] = 0;
  puVar3[0x127] = 0;
  puVar3[0x126] = 0;
  *(undefined1 *)(puVar3 + 300) = 1;
  puVar2 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSTabsScreenIOSComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21RNSTabsScreenIOSPropsENS0_28RNSTabsScreenIOSEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_001f0b80
  ;
  *(undefined4 *)((long)puVar3 + 0x964) = 0;
  *(undefined8 **)puVar2 = __s;
  *(undefined8 **)(puVar2 + 8) = puVar3;
  return;
}


// ===== 0019453c  FUN_0019453c =====

void FUN_0019453c(long param_1)

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


// ===== 0019458c  FUN_0019458c =====

void FUN_0019458c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001ead78;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0019459c  FUN_0019459c =====

void FUN_0019459c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001ead78;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001945cc  FUN_001945cc =====

void FUN_001945cc(long param_1)

{
  FUN_0019405c(param_1 + 0x18,PTR_PTR_001f0d00);
  return;
}


// ===== 001945dc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 001945e0  FUN_001945e0 =====

void FUN_001945e0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001eadc8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 001945f0  FUN_001945f0 =====

void FUN_001945f0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001eadc8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00194620  FUN_00194620 =====

void FUN_00194620(long param_1)

{
  FUN_0019405c(param_1 + 0x18,PTR_PTR_001f0d00);
  return;
}


// ===== 00194630  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 00194634  FUN_00194634 =====

void FUN_00194634(long param_1)

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


// ===== 00194684  FUN_00194684 =====

void FUN_00194684(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001eae18;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00194694  FUN_00194694 =====

void FUN_00194694(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001eae18;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001946c4  FUN_001946c4 =====

void FUN_001946c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001946cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 001946d0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 001946d4  FUN_001946d4 =====

void FUN_001946d4(undefined8 *param_1)

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
    return;
  }
  return;
}


// ===== 00194788  FUN_00194788 =====

void FUN_00194788(undefined8 *param_1)

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


// ===== 00194838  facebook::react::RNSModalScreenEventEmitter::onAppear =====

/* facebook::react::RNSModalScreenEventEmitter::onAppear(facebook::react::RNSModalScreenEventEmitter::OnAppear)
   const */

void facebook::react::RNSModalScreenEventEmitter::onAppear(undefined8 param_1)

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
  local_78[1] = 0x61;
  local_78[2] = 0x70;
  local_78[3] = 0x70;
  local_78[4] = 0x65;
  local_78[5] = 0x61;
  local_78[6] = 0x72;
  local_78[7] = 0;
  local_60[0] = &PTR_FUN_001eaea0;
                    /* try { // try from 00194888 to 00194897 has its CatchHandler @ 001948f4 */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_001948c4;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_001948c4:
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00194954  facebook::react::RNSModalScreenEventEmitter::onDisappear =====

/* facebook::react::RNSModalScreenEventEmitter::onDisappear(facebook::react::RNSModalScreenEventEmitter::OnDisappear)
   const */

void facebook::react::RNSModalScreenEventEmitter::onDisappear(undefined8 param_1)

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
  local_77 = (char  [8])s_disappear_0013fcb8._0_8_;
  local_60[0] = &PTR_FUN_001eaf30;
                    /* try { // try from 001949a4 to 001949b3 has its CatchHandler @ 00194a10 */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_001949e0;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_001949e0:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00194a70  facebook::react::RNSModalScreenEventEmitter::onDismissed =====

/* facebook::react::RNSModalScreenEventEmitter::onDismissed(facebook::react::RNSModalScreenEventEmitter::OnDismissed)
   const */

void __thiscall
facebook::react::RNSModalScreenEventEmitter::onDismissed
          (RNSModalScreenEventEmitter *this,undefined4 param_2)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined2 local_6f;
  void *local_68;
  undefined **local_60;
  undefined4 local_58;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x12;
  local_6f = 100;
  local_77 = (char  [8])s_dismissed_00140081._0_8_;
  local_60 = &PTR_FUN_001eafb0;
                    /* try { // try from 00194ac4 to 00194ad3 has its CatchHandler @ 00194b30 */
  local_58 = param_2;
  local_40 = &local_60;
  facebook::react::EventEmitter::dispatchEvent(this,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00194b00;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00194b00:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00194b90  facebook::react::RNSModalScreenEventEmitter::onNativeDismissCancelled =====

/* facebook::react::RNSModalScreenEventEmitter::onNativeDismissCancelled(facebook::react::RNSModalScreenEventEmitter::OnNativeDismissCancelled)
   const */

void __thiscall
facebook::react::RNSModalScreenEventEmitter::onNativeDismissCancelled
          (RNSModalScreenEventEmitter *this,undefined4 param_2)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  char acStack_6f [6];
  char cStack_69;
  char cStack_68;
  char acStack_67 [6];
  undefined1 uStack_61;
  undefined **local_60;
  undefined4 local_58;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x2c;
  uStack_61 = 0;
  acStack_6f = (char  [6])s_nativeDismissCancelled_0013e2e5._8_6_;
  local_77 = (char  [8])s_nativeDismissCancelled_0013e2e5._0_8_;
  cStack_69 = (char)s_nativeDismissCancelled_0013e2e5._14_2_;
  cStack_68 = SUB21(s_nativeDismissCancelled_0013e2e5._14_2_,1);
  acStack_67 = (char  [6])s_nativeDismissCancelled_0013e2e5._16_6_;
  local_60 = &PTR_FUN_001eb030;
                    /* try { // try from 00194be8 to 00194bf7 has its CatchHandler @ 00194c54 */
  local_58 = param_2;
  local_40 = &local_60;
  facebook::react::EventEmitter::dispatchEvent(this,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00194c24;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00194c24:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_61,CONCAT61(acStack_67,cStack_68)));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00194cb4  facebook::react::RNSModalScreenEventEmitter::onWillAppear =====

/* facebook::react::RNSModalScreenEventEmitter::onWillAppear(facebook::react::RNSModalScreenEventEmitter::OnWillAppear)
   const */

void facebook::react::RNSModalScreenEventEmitter::onWillAppear(undefined8 param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined2 local_6f;
  undefined1 local_6d;
  void *local_68;
  undefined **local_60 [4];
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x14;
  local_6f = 0x7261;
  local_6d = 0;
  local_77 = (char  [8])s_willAppear_0013fb6b._0_8_;
  local_60[0] = &PTR_FUN_001eb0b0;
                    /* try { // try from 00194d08 to 00194d17 has its CatchHandler @ 00194d74 */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00194d44;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00194d44:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00194dd4  facebook::react::RNSModalScreenEventEmitter::onWillDisappear =====

/* facebook::react::RNSModalScreenEventEmitter::onWillDisappear(facebook::react::RNSModalScreenEventEmitter::OnWillDisappear)
   const */

void facebook::react::RNSModalScreenEventEmitter::onWillDisappear(undefined8 param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [5];
  char acStack_72 [3];
  char acStack_6f [5];
  undefined1 local_6a;
  void *local_68;
  undefined **local_60 [4];
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x1a;
  local_77 = (char  [5])s_willDisappear_0013f5e0._0_5_;
  acStack_72 = (char  [3])s_willDisappear_0013f5e0._5_3_;
  acStack_6f = (char  [5])s_willDisappear_0013f5e0._8_5_;
  local_6a = 0;
  local_60[0] = &PTR_FUN_001eb130;
                    /* try { // try from 00194e28 to 00194e37 has its CatchHandler @ 00194e94 */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00194e64;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00194e64:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00194ef4  facebook::react::RNSModalScreenEventEmitter::onHeaderHeightChange =====

/* facebook::react::RNSModalScreenEventEmitter::onHeaderHeightChange(facebook::react::RNSModalScreenEventEmitter::OnHeaderHeightChange)
   const */

void __thiscall
facebook::react::RNSModalScreenEventEmitter::onHeaderHeightChange
          (undefined8 param_1,RNSModalScreenEventEmitter *this)

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
  undefined8 local_58;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x24;
  uStack_67 = 0x6567;
  uStack_6f = (undefined7)s_headerHeightChange_0013f0bf._8_8_;
  cStack_68 = SUB81(s_headerHeightChange_0013f0bf._8_8_,7);
  local_77 = (char  [8])s_headerHeightChange_0013f0bf._0_8_;
  uStack_65 = 0;
  local_60 = &PTR_FUN_001eb1b0;
                    /* try { // try from 00194f4c to 00194f5b has its CatchHandler @ 00194fb8 */
  local_58 = param_1;
  local_40 = &local_60;
  facebook::react::EventEmitter::dispatchEvent(this,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00194f88;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00194f88:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_64,CONCAT13(uStack_65,CONCAT21(uStack_67,cStack_68))));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00195018  facebook::react::RNSModalScreenEventEmitter::onTransitionProgress =====

/* facebook::react::RNSModalScreenEventEmitter::onTransitionProgress(facebook::react::RNSModalScreenEventEmitter::OnTransitionProgress)
   const */

void facebook::react::RNSModalScreenEventEmitter::onTransitionProgress
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 uStack_58;
  undefined8 local_50;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x24;
  uStack_67 = 0x7373;
  uStack_6f = (undefined7)s_transitionProgress_0014008b._8_8_;
  cStack_68 = SUB81(s_transitionProgress_0014008b._8_8_,7);
  local_77 = (char  [8])s_transitionProgress_0014008b._0_8_;
  uStack_65 = 0;
  local_60 = &PTR_FUN_001eb230;
                    /* try { // try from 00195070 to 0019507f has its CatchHandler @ 001950dc */
  uStack_58 = param_2;
  local_50 = param_3;
  local_40 = &local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_001950ac;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_001950ac:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_64,CONCAT13(uStack_65,CONCAT21(uStack_67,cStack_68))));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019513c  facebook::react::RNSModalScreenEventEmitter::onGestureCancel =====

/* facebook::react::RNSModalScreenEventEmitter::onGestureCancel(facebook::react::RNSModalScreenEventEmitter::OnGestureCancel)
   const */

void facebook::react::RNSModalScreenEventEmitter::onGestureCancel(undefined8 param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [5];
  char acStack_72 [3];
  char acStack_6f [5];
  undefined1 local_6a;
  void *local_68;
  undefined **local_60 [4];
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x1a;
  local_77 = (char  [5])s_gestureCancel_0013f5ee._0_5_;
  acStack_72 = (char  [3])s_gestureCancel_0013f5ee._5_3_;
  acStack_6f = (char  [5])s_gestureCancel_0013f5ee._8_5_;
  local_6a = 0;
  local_60[0] = &PTR_FUN_001eb2b0;
                    /* try { // try from 00195190 to 0019519f has its CatchHandler @ 001951fc */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_001951cc;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_001951cc:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019525c  facebook::react::RNSModalScreenEventEmitter::onHeaderBackButtonClicked =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::RNSModalScreenEventEmitter::onHeaderBackButtonClicked(facebook::react::RNSModalScreenEventEmitter::OnHeaderBackButtonClicked)
   const */

void facebook::react::RNSModalScreenEventEmitter::onHeaderBackButtonClicked(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  long lVar5;
  ulong local_90;
  undefined8 uStack_88;
  char *local_80;
  undefined **local_70 [4];
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_80 = (char *)operator_new(0x20);
  uVar3 = s_headerBackButtonClicked_0013e6ad._0_8_;
  uVar2 = CONCAT71(s_headerBackButtonClicked_0013e6ad._16_7_,s_headerBackButtonClicked_0013e6ad[0xf]
                  );
  *(ulong *)(local_80 + 8) =
       CONCAT17(s_headerBackButtonClicked_0013e6ad[0xf],s_headerBackButtonClicked_0013e6ad._8_7_);
  *(undefined8 *)local_80 = uVar3;
  uStack_88 = _UNK_001424c8;
  local_90 = _DAT_001424c0;
  *(undefined8 *)(local_80 + 0xf) = uVar2;
  local_80[0x17] = '\0';
  local_70[0] = &PTR_FUN_001eb330;
                    /* try { // try from 001952c8 to 001952db has its CatchHandler @ 0019533c */
  local_50 = local_70;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_90,local_70,2);
  if (local_50 == local_70) {
    lVar5 = 4;
    pppuVar4 = local_70;
  }
  else {
    if (local_50 == (undefined ***)0x0) goto LAB_00195308;
    lVar5 = 5;
    pppuVar4 = local_50;
  }
  (*(code *)(*pppuVar4)[lVar5])();
LAB_00195308:
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019539c  facebook::react::RNSModalScreenEventEmitter::onSheetDetentChanged =====

/* facebook::react::RNSModalScreenEventEmitter::onSheetDetentChanged(facebook::react::RNSModalScreenEventEmitter::OnSheetDetentChanged)
   const */

void __thiscall
facebook::react::RNSModalScreenEventEmitter::onSheetDetentChanged
          (RNSModalScreenEventEmitter *this,undefined8 param_2)

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
  undefined8 uStack_58;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x24;
  uStack_67 = 0x6465;
  uStack_6f = (undefined7)s_sheetDetentChanged_0014033e._8_8_;
  cStack_68 = SUB81(s_sheetDetentChanged_0014033e._8_8_,7);
  local_77 = (char  [8])s_sheetDetentChanged_0014033e._0_8_;
  uStack_65 = 0;
  local_60 = &PTR_FUN_001eb3b0;
                    /* try { // try from 001953f0 to 001953ff has its CatchHandler @ 0019545c */
  uStack_58 = param_2;
  local_40 = &local_60;
  facebook::react::EventEmitter::dispatchEvent(this,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_0019542c;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_0019542c:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_64,CONCAT13(uStack_65,CONCAT21(uStack_67,cStack_68))));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001954bc  facebook::react::RNSScreenEventEmitter::onAppear =====

/* facebook::react::RNSScreenEventEmitter::onAppear(facebook::react::RNSScreenEventEmitter::OnAppear)
   const */

void facebook::react::RNSScreenEventEmitter::onAppear(undefined8 param_1)

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
  local_78[1] = 0x61;
  local_78[2] = 0x70;
  local_78[3] = 0x70;
  local_78[4] = 0x65;
  local_78[5] = 0x61;
  local_78[6] = 0x72;
  local_78[7] = 0;
  local_60[0] = &PTR_FUN_001eb430;
                    /* try { // try from 0019550c to 0019551b has its CatchHandler @ 00195578 */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00195548;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00195548:
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001955d8  facebook::react::RNSScreenEventEmitter::onDisappear =====

/* facebook::react::RNSScreenEventEmitter::onDisappear(facebook::react::RNSScreenEventEmitter::OnDisappear)
   const */

void facebook::react::RNSScreenEventEmitter::onDisappear(undefined8 param_1)

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
  local_77 = (char  [8])s_disappear_0013fcb8._0_8_;
  local_60[0] = &PTR_FUN_001eb4b0;
                    /* try { // try from 00195628 to 00195637 has its CatchHandler @ 00195694 */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00195664;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00195664:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001956f4  facebook::react::RNSScreenEventEmitter::onDismissed =====

/* facebook::react::RNSScreenEventEmitter::onDismissed(facebook::react::RNSScreenEventEmitter::OnDismissed)
   const */

void __thiscall
facebook::react::RNSScreenEventEmitter::onDismissed(RNSScreenEventEmitter *this,undefined4 param_2)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined2 local_6f;
  void *local_68;
  undefined **local_60;
  undefined4 local_58;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x12;
  local_6f = 100;
  local_77 = (char  [8])s_dismissed_00140081._0_8_;
  local_60 = &PTR_FUN_001eb530;
                    /* try { // try from 00195748 to 00195757 has its CatchHandler @ 001957b4 */
  local_58 = param_2;
  local_40 = &local_60;
  facebook::react::EventEmitter::dispatchEvent(this,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00195784;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00195784:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00195814  facebook::react::RNSScreenEventEmitter::onNativeDismissCancelled =====

/* facebook::react::RNSScreenEventEmitter::onNativeDismissCancelled(facebook::react::RNSScreenEventEmitter::OnNativeDismissCancelled)
   const */

void __thiscall
facebook::react::RNSScreenEventEmitter::onNativeDismissCancelled
          (RNSScreenEventEmitter *this,undefined4 param_2)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  char acStack_6f [6];
  char cStack_69;
  char cStack_68;
  char acStack_67 [6];
  undefined1 uStack_61;
  undefined **local_60;
  undefined4 local_58;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x2c;
  uStack_61 = 0;
  acStack_6f = (char  [6])s_nativeDismissCancelled_0013e2e5._8_6_;
  local_77 = (char  [8])s_nativeDismissCancelled_0013e2e5._0_8_;
  cStack_69 = (char)s_nativeDismissCancelled_0013e2e5._14_2_;
  cStack_68 = SUB21(s_nativeDismissCancelled_0013e2e5._14_2_,1);
  acStack_67 = (char  [6])s_nativeDismissCancelled_0013e2e5._16_6_;
  local_60 = &PTR_FUN_001eb5b0;
                    /* try { // try from 0019586c to 0019587b has its CatchHandler @ 001958d8 */
  local_58 = param_2;
  local_40 = &local_60;
  facebook::react::EventEmitter::dispatchEvent(this,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_001958a8;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_001958a8:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_61,CONCAT61(acStack_67,cStack_68)));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00195938  facebook::react::RNSScreenEventEmitter::onWillAppear =====

/* facebook::react::RNSScreenEventEmitter::onWillAppear(facebook::react::RNSScreenEventEmitter::OnWillAppear)
   const */

void facebook::react::RNSScreenEventEmitter::onWillAppear(undefined8 param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined2 local_6f;
  undefined1 local_6d;
  void *local_68;
  undefined **local_60 [4];
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x14;
  local_6f = 0x7261;
  local_6d = 0;
  local_77 = (char  [8])s_willAppear_0013fb6b._0_8_;
  local_60[0] = &PTR_FUN_001eb630;
                    /* try { // try from 0019598c to 0019599b has its CatchHandler @ 001959f8 */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_001959c8;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_001959c8:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00195a58  facebook::react::RNSScreenEventEmitter::onWillDisappear =====

/* facebook::react::RNSScreenEventEmitter::onWillDisappear(facebook::react::RNSScreenEventEmitter::OnWillDisappear)
   const */

void facebook::react::RNSScreenEventEmitter::onWillDisappear(undefined8 param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [5];
  char acStack_72 [3];
  char acStack_6f [5];
  undefined1 local_6a;
  void *local_68;
  undefined **local_60 [4];
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x1a;
  local_77 = (char  [5])s_willDisappear_0013f5e0._0_5_;
  acStack_72 = (char  [3])s_willDisappear_0013f5e0._5_3_;
  acStack_6f = (char  [5])s_willDisappear_0013f5e0._8_5_;
  local_6a = 0;
  local_60[0] = &PTR_FUN_001eb6b0;
                    /* try { // try from 00195aac to 00195abb has its CatchHandler @ 00195b18 */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00195ae8;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00195ae8:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00195b78  facebook::react::RNSScreenEventEmitter::onHeaderHeightChange =====

/* facebook::react::RNSScreenEventEmitter::onHeaderHeightChange(facebook::react::RNSScreenEventEmitter::OnHeaderHeightChange)
   const */

void __thiscall
facebook::react::RNSScreenEventEmitter::onHeaderHeightChange
          (undefined8 param_1,RNSScreenEventEmitter *this)

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
  undefined8 local_58;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x24;
  uStack_67 = 0x6567;
  uStack_6f = (undefined7)s_headerHeightChange_0013f0bf._8_8_;
  cStack_68 = SUB81(s_headerHeightChange_0013f0bf._8_8_,7);
  local_77 = (char  [8])s_headerHeightChange_0013f0bf._0_8_;
  uStack_65 = 0;
  local_60 = &PTR_FUN_001eb730;
                    /* try { // try from 00195bd0 to 00195bdf has its CatchHandler @ 00195c3c */
  local_58 = param_1;
  local_40 = &local_60;
  facebook::react::EventEmitter::dispatchEvent(this,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00195c0c;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00195c0c:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_64,CONCAT13(uStack_65,CONCAT21(uStack_67,cStack_68))));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00195c9c  facebook::react::RNSScreenEventEmitter::onTransitionProgress =====

/* facebook::react::RNSScreenEventEmitter::onTransitionProgress(facebook::react::RNSScreenEventEmitter::OnTransitionProgress)
   const */

void facebook::react::RNSScreenEventEmitter::onTransitionProgress
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 uStack_58;
  undefined8 local_50;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x24;
  uStack_67 = 0x7373;
  uStack_6f = (undefined7)s_transitionProgress_0014008b._8_8_;
  cStack_68 = SUB81(s_transitionProgress_0014008b._8_8_,7);
  local_77 = (char  [8])s_transitionProgress_0014008b._0_8_;
  uStack_65 = 0;
  local_60 = &PTR_FUN_001eb7b0;
                    /* try { // try from 00195cf4 to 00195d03 has its CatchHandler @ 00195d60 */
  uStack_58 = param_2;
  local_50 = param_3;
  local_40 = &local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00195d30;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00195d30:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_64,CONCAT13(uStack_65,CONCAT21(uStack_67,cStack_68))));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00195dc0  facebook::react::RNSScreenEventEmitter::onGestureCancel =====

/* facebook::react::RNSScreenEventEmitter::onGestureCancel(facebook::react::RNSScreenEventEmitter::OnGestureCancel)
   const */

void facebook::react::RNSScreenEventEmitter::onGestureCancel(undefined8 param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [5];
  char acStack_72 [3];
  char acStack_6f [5];
  undefined1 local_6a;
  void *local_68;
  undefined **local_60 [4];
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x1a;
  local_77 = (char  [5])s_gestureCancel_0013f5ee._0_5_;
  acStack_72 = (char  [3])s_gestureCancel_0013f5ee._5_3_;
  acStack_6f = (char  [5])s_gestureCancel_0013f5ee._8_5_;
  local_6a = 0;
  local_60[0] = &PTR_FUN_001eb830;
                    /* try { // try from 00195e14 to 00195e23 has its CatchHandler @ 00195e80 */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00195e50;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00195e50:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00195ee0  facebook::react::RNSScreenEventEmitter::onHeaderBackButtonClicked =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::RNSScreenEventEmitter::onHeaderBackButtonClicked(facebook::react::RNSScreenEventEmitter::OnHeaderBackButtonClicked)
   const */

void facebook::react::RNSScreenEventEmitter::onHeaderBackButtonClicked(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  long lVar5;
  ulong local_90;
  undefined8 uStack_88;
  char *local_80;
  undefined **local_70 [4];
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_80 = (char *)operator_new(0x20);
  uVar3 = s_headerBackButtonClicked_0013e6ad._0_8_;
  uVar2 = CONCAT71(s_headerBackButtonClicked_0013e6ad._16_7_,s_headerBackButtonClicked_0013e6ad[0xf]
                  );
  *(ulong *)(local_80 + 8) =
       CONCAT17(s_headerBackButtonClicked_0013e6ad[0xf],s_headerBackButtonClicked_0013e6ad._8_7_);
  *(undefined8 *)local_80 = uVar3;
  uStack_88 = _UNK_001424c8;
  local_90 = _DAT_001424c0;
  *(undefined8 *)(local_80 + 0xf) = uVar2;
  local_80[0x17] = '\0';
  local_70[0] = &PTR_FUN_001eb8b0;
                    /* try { // try from 00195f4c to 00195f5f has its CatchHandler @ 00195fc0 */
  local_50 = local_70;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_90,local_70,2);
  if (local_50 == local_70) {
    lVar5 = 4;
    pppuVar4 = local_70;
  }
  else {
    if (local_50 == (undefined ***)0x0) goto LAB_00195f8c;
    lVar5 = 5;
    pppuVar4 = local_50;
  }
  (*(code *)(*pppuVar4)[lVar5])();
LAB_00195f8c:
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00196020  facebook::react::RNSScreenEventEmitter::onSheetDetentChanged =====

/* facebook::react::RNSScreenEventEmitter::onSheetDetentChanged(facebook::react::RNSScreenEventEmitter::OnSheetDetentChanged)
   const */

void __thiscall
facebook::react::RNSScreenEventEmitter::onSheetDetentChanged
          (RNSScreenEventEmitter *this,undefined8 param_2)

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
  undefined8 uStack_58;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x24;
  uStack_67 = 0x6465;
  uStack_6f = (undefined7)s_sheetDetentChanged_0014033e._8_8_;
  cStack_68 = SUB81(s_sheetDetentChanged_0014033e._8_8_,7);
  local_77 = (char  [8])s_sheetDetentChanged_0014033e._0_8_;
  uStack_65 = 0;
  local_60 = &PTR_FUN_001eb930;
                    /* try { // try from 00196074 to 00196083 has its CatchHandler @ 001960e0 */
  uStack_58 = param_2;
  local_40 = &local_60;
  facebook::react::EventEmitter::dispatchEvent(this,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_001960b0;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_001960b0:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_64,CONCAT13(uStack_65,CONCAT21(uStack_67,cStack_68))));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00196140  facebook::react::RNSScreenStackHeaderConfigEventEmitter::onAttached =====

/* facebook::react::RNSScreenStackHeaderConfigEventEmitter::onAttached(facebook::react::RNSScreenStackHeaderConfigEventEmitter::OnAttached)
   const */

void facebook::react::RNSScreenStackHeaderConfigEventEmitter::onAttached(undefined8 param_1)

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
  local_78[1] = 0x61;
  local_78[2] = 0x74;
  local_78[3] = 0x74;
  local_78[4] = 0x61;
  local_78[5] = 99;
  local_78[6] = 0x68;
  local_78[7] = 0x65;
  local_78[8] = 100;
  local_60[0] = &PTR_FUN_001eb9b0;
                    /* try { // try from 00196190 to 0019619f has its CatchHandler @ 001961fc */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_001961cc;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_001961cc:
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019625c  facebook::react::RNSScreenStackHeaderConfigEventEmitter::onDetached =====

/* facebook::react::RNSScreenStackHeaderConfigEventEmitter::onDetached(facebook::react::RNSScreenStackHeaderConfigEventEmitter::OnDetached)
   const */

void facebook::react::RNSScreenStackHeaderConfigEventEmitter::onDetached(undefined8 param_1)

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
  local_78[1] = 100;
  local_78[2] = 0x65;
  local_78[3] = 0x74;
  local_78[4] = 0x61;
  local_78[5] = 99;
  local_78[6] = 0x68;
  local_78[7] = 0x65;
  local_78[8] = 100;
  local_60[0] = &PTR_FUN_001eba30;
                    /* try { // try from 001962ac to 001962bb has its CatchHandler @ 00196318 */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_001962e8;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_001962e8:
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00196378  facebook::react::RNSScreenStackHeaderConfigEventEmitter::onPressHeaderBarButtonItem =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::RNSScreenStackHeaderConfigEventEmitter::onPressHeaderBarButtonItem(facebook::react::RNSScreenStackHeaderConfigEventEmitter::OnPressHeaderBarButtonItem)
   const */

void __thiscall
facebook::react::RNSScreenStackHeaderConfigEventEmitter::onPressHeaderBarButtonItem
          (RNSScreenStackHeaderConfigEventEmitter *this,undefined8 *param_2)

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
  uVar5 = s_pressHeaderBarButtonItem_001404c1._16_8_;
  uVar1 = s_pressHeaderBarButtonItem_001404c1._0_8_;
  uVar2 = *(undefined1 *)param_2;
  *(undefined8 *)(local_a0 + 8) = s_pressHeaderBarButtonItem_001404c1._8_8_;
  *(undefined8 *)local_a0 = uVar1;
  uStack_a8 = _UNK_001423e8;
  local_b0 = _DAT_001423e0;
  uVar1 = param_2[1];
  lVar6 = param_2[2];
  *(undefined8 *)(local_a0 + 0x10) = uVar5;
  uVar5 = *(undefined8 *)((long)param_2 + 1);
  local_a0[0x18] = '\0';
  local_90 = (undefined7)uVar5;
  uStack_89 = (undefined1)uVar1;
  uStack_88 = (undefined7)((ulong)uVar1 >> 8);
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
                    /* try { // try from 001963f4 to 001963fb has its CatchHandler @ 001964d4 */
  local_60 = (long *)operator_new(0x20);
  *local_60 = (long)&PTR_FUN_001ebab0;
  *(undefined1 *)(local_60 + 1) = uVar2;
  *(ulong *)((long)local_60 + 9) = CONCAT17(uStack_89,local_90);
  local_60[2] = CONCAT71(uStack_88,uStack_89);
  local_60[3] = lVar6;
                    /* try { // try from 00196420 to 00196437 has its CatchHandler @ 0019649c */
  facebook::react::EventEmitter::dispatchEvent(this,&local_b0,local_80,2);
  if (local_60 == local_80) {
    lVar6 = 4;
    plVar4 = local_80;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00196464;
    lVar6 = 5;
    plVar4 = local_60;
  }
  (**(code **)(*plVar4 + lVar6 * 8))();
LAB_00196464:
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00196510  facebook::react::RNSScreenStackHeaderConfigEventEmitter::onPressHeaderBarButtonMenuItem =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::RNSScreenStackHeaderConfigEventEmitter::onPressHeaderBarButtonMenuItem(facebook::react::RNSScreenStackHeaderConfigEventEmitter::OnPressHeaderBarButtonMenuItem)
   const */

void __thiscall
facebook::react::RNSScreenStackHeaderConfigEventEmitter::onPressHeaderBarButtonMenuItem
          (RNSScreenStackHeaderConfigEventEmitter *this,undefined8 *param_2)

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
  uVar5 = s_pressHeaderBarButtonMenuItem_0013f43b._20_8_;
  uVar7 = s_pressHeaderBarButtonMenuItem_0013f43b._0_8_;
  uVar2 = *(undefined1 *)param_2;
  uVar4 = CONCAT44(s_pressHeaderBarButtonMenuItem_0013f43b._16_4_,
                   s_pressHeaderBarButtonMenuItem_0013f43b._12_4_);
  uVar1 = param_2[1];
  lVar8 = param_2[2];
  *(ulong *)(local_a0 + 8) =
       CONCAT44(s_pressHeaderBarButtonMenuItem_0013f43b._12_4_,
                s_pressHeaderBarButtonMenuItem_0013f43b._8_4_);
  *(undefined8 *)local_a0 = uVar7;
  uStack_a8 = _UNK_001424e8;
  local_b0 = _DAT_001424e0;
  uVar7 = *(undefined8 *)((long)param_2 + 1);
  *(undefined8 *)(local_a0 + 0x14) = uVar5;
  *(undefined8 *)(local_a0 + 0xc) = uVar4;
  local_a0[0x1c] = '\0';
  local_90 = (undefined7)uVar7;
  uStack_89 = (undefined1)uVar1;
  uStack_88 = (undefined7)((ulong)uVar1 >> 8);
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
                    /* try { // try from 0019658c to 00196593 has its CatchHandler @ 0019666c */
  local_60 = (long *)operator_new(0x20);
  *local_60 = (long)&PTR_FUN_001ebb30;
  *(undefined1 *)(local_60 + 1) = uVar2;
  *(ulong *)((long)local_60 + 9) = CONCAT17(uStack_89,local_90);
  local_60[2] = CONCAT71(uStack_88,uStack_89);
  local_60[3] = lVar8;
                    /* try { // try from 001965b8 to 001965cf has its CatchHandler @ 00196634 */
  facebook::react::EventEmitter::dispatchEvent(this,&local_b0,local_80,2);
  if (local_60 == local_80) {
    lVar8 = 4;
    plVar6 = local_80;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_001965fc;
    lVar8 = 5;
    plVar6 = local_60;
  }
  (**(code **)(*plVar6 + lVar8 * 8))();
LAB_001965fc:
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001966a8  facebook::react::RNSScreenStackEventEmitter::onFinishTransitioning =====

/* facebook::react::RNSScreenStackEventEmitter::onFinishTransitioning(facebook::react::RNSScreenStackEventEmitter::OnFinishTransitioning)
   const */

void facebook::react::RNSScreenStackEventEmitter::onFinishTransitioning(undefined8 param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined7 uStack_6f;
  undefined4 uStack_68;
  uint uStack_64;
  undefined **local_60 [4];
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x26;
  uStack_64 = uStack_64 & 0xffffff00;
  uStack_6f = (undefined7)s_finishTransitioning_0013ed10._8_8_;
  uStack_68 = CONCAT31(0x676e69,SUB81(s_finishTransitioning_0013ed10._8_8_,7));
  local_77 = (char  [8])s_finishTransitioning_0013ed10._0_8_;
  local_60[0] = &PTR_FUN_001ebbb0;
                    /* try { // try from 00196700 to 0019670f has its CatchHandler @ 0019676c */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_0019673c;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_0019673c:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_64,uStack_68));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001967cc  facebook::react::RNSSearchBarEventEmitter::onSearchFocus =====

/* facebook::react::RNSSearchBarEventEmitter::onSearchFocus(facebook::react::RNSSearchBarEventEmitter::OnSearchFocus)
   const */

void facebook::react::RNSSearchBarEventEmitter::onSearchFocus(undefined8 param_1)

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
  local_77 = (undefined7)s_searchFocus_0013fdc8._0_8_;
  _cStack_70 = CONCAT31(0x737563,SUB81(s_searchFocus_0013fdc8._0_8_,7));
  local_60[0] = &PTR_FUN_001ebc30;
                    /* try { // try from 00196824 to 00196833 has its CatchHandler @ 00196890 */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00196860;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00196860:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001968f0  facebook::react::RNSSearchBarEventEmitter::onSearchBlur =====

/* facebook::react::RNSSearchBarEventEmitter::onSearchBlur(facebook::react::RNSSearchBarEventEmitter::OnSearchBlur)
   const */

void facebook::react::RNSSearchBarEventEmitter::onSearchBlur(undefined8 param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined2 local_6f;
  undefined1 local_6d;
  void *local_68;
  undefined **local_60 [4];
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x14;
  local_6f = 0x7275;
  local_6d = 0;
  local_77 = (char  [8])s_searchBlur_0014009e._0_8_;
  local_60[0] = &PTR_FUN_001ebcb0;
                    /* try { // try from 00196944 to 00196953 has its CatchHandler @ 001969b0 */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00196980;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00196980:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00196a10  facebook::react::RNSSearchBarEventEmitter::onSearchButtonPress =====

/* facebook::react::RNSSearchBarEventEmitter::onSearchButtonPress(facebook::react::RNSSearchBarEventEmitter::OnSearchButtonPress)
   const */

void __thiscall
facebook::react::RNSSearchBarEventEmitter::onSearchButtonPress
          (RNSSearchBarEventEmitter *this,undefined8 *param_2)

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
  uStack_87 = 0x73;
  local_98 = 0x22;
  local_80 = (undefined7)*(undefined8 *)((long)param_2 + 1);
  uVar1 = param_2[1];
  lVar5 = param_2[2];
  uStack_8f = (undefined7)s_searchButtonPress_0013fdd4._8_8_;
  cStack_88 = SUB81(s_searchButtonPress_0013fdd4._8_8_,7);
  local_97 = (char  [8])s_searchButtonPress_0013fdd4._0_8_;
  param_2[1] = 0;
  param_2[2] = 0;
  uStack_79 = (undefined1)uVar1;
  uStack_78 = (undefined7)((ulong)uVar1 >> 8);
  *param_2 = 0;
                    /* try { // try from 00196a70 to 00196a77 has its CatchHandler @ 00196b4c */
  local_50 = (long *)operator_new(0x20);
  *local_50 = (long)&PTR_FUN_001ebd30;
  *(undefined1 *)(local_50 + 1) = uVar2;
  *(ulong *)((long)local_50 + 9) = CONCAT17(uStack_79,local_80);
  local_50[2] = CONCAT71(uStack_78,uStack_79);
  local_50[3] = lVar5;
                    /* try { // try from 00196a9c to 00196ab3 has its CatchHandler @ 00196b14 */
  facebook::react::EventEmitter::dispatchEvent(this,&local_98,local_70,2);
  if (local_50 == local_70) {
    lVar5 = 4;
    plVar4 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00196ae0;
    lVar5 = 5;
    plVar4 = local_50;
  }
  (**(code **)(*plVar4 + lVar5 * 8))();
LAB_00196ae0:
  if ((local_98 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_85,CONCAT21(uStack_87,cStack_88)));
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00196b88  facebook::react::RNSSearchBarEventEmitter::onCancelButtonPress =====

/* facebook::react::RNSSearchBarEventEmitter::onCancelButtonPress(facebook::react::RNSSearchBarEventEmitter::OnCancelButtonPress)
   const */

void facebook::react::RNSSearchBarEventEmitter::onCancelButtonPress(undefined8 param_1)

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
  uStack_67 = 0x73;
  uStack_6f = (undefined7)s_cancelButtonPress_0013eacb._8_8_;
  cStack_68 = SUB81(s_cancelButtonPress_0013eacb._8_8_,7);
  local_77 = (char  [8])s_cancelButtonPress_0013eacb._0_8_;
  local_60[0] = &PTR_FUN_001ebdb0;
                    /* try { // try from 00196bd8 to 00196be7 has its CatchHandler @ 00196c44 */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00196c14;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00196c14:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_65,CONCAT21(uStack_67,cStack_68)));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00196ca4  facebook::react::RNSSearchBarEventEmitter::onChangeText =====

/* facebook::react::RNSSearchBarEventEmitter::onChangeText(facebook::react::RNSSearchBarEventEmitter::OnChangeText)
   const */

void __thiscall
facebook::react::RNSSearchBarEventEmitter::onChangeText
          (RNSSearchBarEventEmitter *this,undefined8 *param_2)

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
  local_8f = 0x7478;
  uVar2 = *(undefined1 *)param_2;
  local_8d = 0;
  local_97 = (char  [8])s_changeText_0013e6c5._0_8_;
  uVar1 = param_2[1];
  lVar5 = param_2[2];
  local_80 = (undefined7)*(undefined8 *)((long)param_2 + 1);
  param_2[1] = 0;
  param_2[2] = 0;
  uStack_79 = (undefined1)uVar1;
  uStack_78 = (undefined7)((ulong)uVar1 >> 8);
  *param_2 = 0;
                    /* try { // try from 00196d08 to 00196d0f has its CatchHandler @ 00196de4 */
  local_50 = (long *)operator_new(0x20);
  *local_50 = (long)&PTR_FUN_001ebe30;
  *(undefined1 *)(local_50 + 1) = uVar2;
  *(ulong *)((long)local_50 + 9) = CONCAT17(uStack_79,local_80);
  local_50[2] = CONCAT71(uStack_78,uStack_79);
  local_50[3] = lVar5;
                    /* try { // try from 00196d34 to 00196d4b has its CatchHandler @ 00196dac */
  facebook::react::EventEmitter::dispatchEvent(this,&local_98,local_70,2);
  if (local_50 == local_70) {
    lVar5 = 4;
    plVar4 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00196d78;
    lVar5 = 5;
    plVar4 = local_50;
  }
  (**(code **)(*plVar4 + lVar5 * 8))();
LAB_00196d78:
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00196e20  facebook::react::RNSSearchBarEventEmitter::onClose =====

/* facebook::react::RNSSearchBarEventEmitter::onClose(facebook::react::RNSSearchBarEventEmitter::OnClose)
   const */

void facebook::react::RNSSearchBarEventEmitter::onClose(undefined8 param_1)

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
  local_78[0] = 10;
  local_78[1] = 99;
  local_78[2] = 0x6c;
  local_78[3] = 0x6f;
  local_78[4] = 0x73;
  local_78[5] = 0x65;
  local_78[6] = 0;
  local_60[0] = &PTR_FUN_001ebeb0;
                    /* try { // try from 00196e6c to 00196e7b has its CatchHandler @ 00196ed8 */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00196ea8;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00196ea8:
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00196f38  facebook::react::RNSSearchBarEventEmitter::onOpen =====

/* facebook::react::RNSSearchBarEventEmitter::onOpen(facebook::react::RNSSearchBarEventEmitter::OnOpen)
   const */

void facebook::react::RNSSearchBarEventEmitter::onOpen(undefined8 param_1)

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
  local_78[0] = 8;
  local_78[1] = 0x6f;
  local_78[2] = 0x70;
  local_78[3] = 0x65;
  local_78[4] = 0x6e;
  local_78[5] = 0;
  local_60[0] = &PTR_FUN_001ebf30;
                    /* try { // try from 00196f80 to 00196f8f has its CatchHandler @ 00196fec */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00196fbc;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00196fbc:
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019704c  facebook::react::RNSFormSheetHostEventEmitter::onWillAppear =====

/* facebook::react::RNSFormSheetHostEventEmitter::onWillAppear(facebook::react::RNSFormSheetHostEventEmitter::OnWillAppear)
   const */

void facebook::react::RNSFormSheetHostEventEmitter::onWillAppear(undefined8 param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined2 local_6f;
  undefined1 local_6d;
  void *local_68;
  undefined **local_60 [4];
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x14;
  local_6f = 0x7261;
  local_6d = 0;
  local_77 = (char  [8])s_willAppear_0013fb6b._0_8_;
  local_60[0] = &PTR_FUN_001ebfb0;
                    /* try { // try from 001970a0 to 001970af has its CatchHandler @ 0019710c */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_001970dc;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_001970dc:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019716c  facebook::react::RNSFormSheetHostEventEmitter::onDidAppear =====

/* facebook::react::RNSFormSheetHostEventEmitter::onDidAppear(facebook::react::RNSFormSheetHostEventEmitter::OnDidAppear)
   const */

void facebook::react::RNSFormSheetHostEventEmitter::onDidAppear(undefined8 param_1)

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
  local_77 = (char  [8])s_didAppear_0013e522._0_8_;
  local_60[0] = &PTR_FUN_001ec030;
                    /* try { // try from 001971bc to 001971cb has its CatchHandler @ 00197228 */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_001971f8;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_001971f8:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00197288  facebook::react::RNSFormSheetHostEventEmitter::onWillDisappear =====

/* facebook::react::RNSFormSheetHostEventEmitter::onWillDisappear(facebook::react::RNSFormSheetHostEventEmitter::OnWillDisappear)
   const */

void facebook::react::RNSFormSheetHostEventEmitter::onWillDisappear(undefined8 param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [5];
  char acStack_72 [3];
  char acStack_6f [5];
  undefined1 local_6a;
  void *local_68;
  undefined **local_60 [4];
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x1a;
  local_77 = (char  [5])s_willDisappear_0013f5e0._0_5_;
  acStack_72 = (char  [3])s_willDisappear_0013f5e0._5_3_;
  acStack_6f = (char  [5])s_willDisappear_0013f5e0._8_5_;
  local_6a = 0;
  local_60[0] = &PTR_FUN_001ec0b0;
                    /* try { // try from 001972dc to 001972eb has its CatchHandler @ 00197348 */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00197318;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00197318:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001973a8  facebook::react::RNSFormSheetHostEventEmitter::onDidDisappear =====

/* facebook::react::RNSFormSheetHostEventEmitter::onDidDisappear(facebook::react::RNSFormSheetHostEventEmitter::OnDidDisappear)
   const */

void facebook::react::RNSFormSheetHostEventEmitter::onDidDisappear(undefined8 param_1)

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
  local_6f = 0x72616570;
  local_77 = (char  [8])s_didDisappear_0013eadd._0_8_;
  local_60[0] = &PTR_FUN_001ec130;
                    /* try { // try from 00197400 to 0019740f has its CatchHandler @ 0019746c */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_0019743c;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_0019743c:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001974cc  facebook::react::RNSFormSheetHostEventEmitter::onDismiss =====

/* facebook::react::RNSFormSheetHostEventEmitter::onDismiss(facebook::react::RNSFormSheetHostEventEmitter::OnDismiss)
   const */

void facebook::react::RNSFormSheetHostEventEmitter::onDismiss(undefined8 param_1)

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
  local_78[1] = 100;
  local_78[2] = 0x69;
  local_78[3] = 0x73;
  local_78[4] = 0x6d;
  local_78[5] = 0x69;
  local_78[6] = 0x73;
  local_78[7] = 0x73;
  local_78[8] = 0;
  local_60[0] = &PTR_FUN_001ec1b0;
                    /* try { // try from 00197520 to 0019752f has its CatchHandler @ 0019758c */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_0019755c;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_0019755c:
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001975ec  facebook::react::RNSFormSheetHostEventEmitter::onNativeDismiss =====

/* facebook::react::RNSFormSheetHostEventEmitter::onNativeDismiss(facebook::react::RNSFormSheetHostEventEmitter::OnNativeDismiss)
   const */

void facebook::react::RNSFormSheetHostEventEmitter::onNativeDismiss(undefined8 param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [5];
  char acStack_72 [3];
  char acStack_6f [5];
  undefined1 local_6a;
  void *local_68;
  undefined **local_60 [4];
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x1a;
  local_77 = (char  [5])s_nativeDismiss_0013f5fc._0_5_;
  acStack_72 = (char  [3])s_nativeDismiss_0013f5fc._5_3_;
  acStack_6f = (char  [5])s_nativeDismiss_0013f5fc._8_5_;
  local_6a = 0;
  local_60[0] = &PTR_FUN_001ec230;
                    /* try { // try from 00197640 to 0019764f has its CatchHandler @ 001976ac */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_0019767c;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_0019767c:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019770c  facebook::react::RNSFormSheetHostEventEmitter::onNativeDismissPrevented =====

/* facebook::react::RNSFormSheetHostEventEmitter::onNativeDismissPrevented(facebook::react::RNSFormSheetHostEventEmitter::OnNativeDismissPrevented)
   const */

void facebook::react::RNSFormSheetHostEventEmitter::onNativeDismissPrevented(undefined8 param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  char acStack_6f [6];
  char cStack_69;
  char cStack_68;
  char acStack_67 [6];
  undefined1 uStack_61;
  undefined **local_60 [4];
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x2c;
  uStack_61 = 0;
  acStack_6f = (char  [6])s_nativeDismissPrevented_001404da._8_6_;
  local_77 = (char  [8])s_nativeDismissPrevented_001404da._0_8_;
  cStack_69 = (char)s_nativeDismissPrevented_001404da._14_2_;
  cStack_68 = SUB21(s_nativeDismissPrevented_001404da._14_2_,1);
  acStack_67 = (char  [6])s_nativeDismissPrevented_001404da._16_6_;
  local_60[0] = &PTR_FUN_001ec2b0;
                    /* try { // try from 00197760 to 0019776f has its CatchHandler @ 001977cc */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_0019779c;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_0019779c:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_61,CONCAT61(acStack_67,cStack_68)));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019782c  facebook::react::RNSFormSheetHostEventEmitter::onDetentChanged =====

/* facebook::react::RNSFormSheetHostEventEmitter::onDetentChanged(facebook::react::RNSFormSheetHostEventEmitter::OnDetentChanged)
   const */

void __thiscall
facebook::react::RNSFormSheetHostEventEmitter::onDetentChanged
          (RNSFormSheetHostEventEmitter *this,undefined4 param_2)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [5];
  char acStack_72 [3];
  char acStack_6f [5];
  undefined1 local_6a;
  void *local_68;
  undefined **local_60;
  undefined4 local_58;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x1a;
  local_77 = (char  [5])s_detentChanged_0013f0d2._0_5_;
  acStack_72 = (char  [3])s_detentChanged_0013f0d2._5_3_;
  acStack_6f = (char  [5])s_detentChanged_0013f0d2._8_5_;
  local_6a = 0;
  local_60 = &PTR_FUN_001ec330;
                    /* try { // try from 00197884 to 00197893 has its CatchHandler @ 001978f0 */
  local_58 = param_2;
  local_40 = &local_60;
  facebook::react::EventEmitter::dispatchEvent(this,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_001978c0;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_001978c0:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00197950  facebook::react::RNSFormSheetHostEventEmitter::onSyncFlush =====

/* facebook::react::RNSFormSheetHostEventEmitter::onSyncFlush(facebook::react::RNSFormSheetHostEventEmitter::OnSyncFlush)
   const */

void facebook::react::RNSFormSheetHostEventEmitter::onSyncFlush(undefined8 param_1)

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
  local_6f = 0x68;
  local_77 = (char  [8])s_syncFlush_0013fb76._0_8_;
  local_60[0] = &PTR_FUN_001ec3b0;
                    /* try { // try from 001979a0 to 001979af has its CatchHandler @ 00197a0c */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_001979dc;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_001979dc:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00197a6c  facebook::react::RNSSplitHostEventEmitter::onCollapse =====

/* facebook::react::RNSSplitHostEventEmitter::onCollapse(facebook::react::RNSSplitHostEventEmitter::OnCollapse)
   const */

void facebook::react::RNSSplitHostEventEmitter::onCollapse(undefined8 param_1)

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
  local_78[1] = 99;
  local_78[2] = 0x6f;
  local_78[3] = 0x6c;
  local_78[4] = 0x6c;
  local_78[5] = 0x61;
  local_78[6] = 0x70;
  local_78[7] = 0x73;
  local_78[8] = 0x65;
  local_60[0] = &PTR_FUN_001ec430;
                    /* try { // try from 00197abc to 00197acb has its CatchHandler @ 00197b28 */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00197af8;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00197af8:
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00197b88  facebook::react::RNSSplitHostEventEmitter::onDisplayModeWillChange =====

/* facebook::react::RNSSplitHostEventEmitter::onDisplayModeWillChange(facebook::react::RNSSplitHostEventEmitter::OnDisplayModeWillChange)
   const */

void __thiscall
facebook::react::RNSSplitHostEventEmitter::onDisplayModeWillChange
          (RNSSplitHostEventEmitter *this,long *param_2)

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
  acStack_6f = (char  [5])s_displayModeWillChange_0013fb80._8_5_;
  local_77 = (char  [8])s_displayModeWillChange_0013fb80._0_8_;
  lVar7 = param_2[1];
  lVar5 = *param_2;
  uStack_6a = (undefined2)s_displayModeWillChange_0013fb80._13_3_;
  cStack_68 = SUB31(s_displayModeWillChange_0013fb80._13_3_,2);
  acStack_67 = (char  [5])s_displayModeWillChange_0013fb80._16_5_;
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
                    /* try { // try from 00197bfc to 00197c03 has its CatchHandler @ 00197cf4 */
  local_40 = (long *)operator_new(0x38);
  *local_40 = (long)&PTR_FUN_001ec4b0;
  local_40[2] = lVar7;
  local_40[1] = lVar5;
  local_40[3] = lVar3;
  local_40[5] = lVar8;
  local_40[4] = lVar6;
  local_40[6] = lVar4;
                    /* try { // try from 00197c48 to 00197c5f has its CatchHandler @ 00197cbc */
  facebook::react::EventEmitter::dispatchEvent(this,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    plVar2 = local_60;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_00197c8c;
    lVar3 = 5;
    plVar2 = local_40;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_00197c8c:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_61,CONCAT16(uStack_62,CONCAT51(acStack_67,cStack_68))));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00197d2c  FUN_00197d2c =====

void FUN_00197d2c(byte *param_1)

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


// ===== 00197d70  facebook::react::RNSSplitHostEventEmitter::onExpand =====

/* facebook::react::RNSSplitHostEventEmitter::onExpand(facebook::react::RNSSplitHostEventEmitter::OnExpand)
   const */

void facebook::react::RNSSplitHostEventEmitter::onExpand(undefined8 param_1)

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
  local_78[1] = 0x65;
  local_78[2] = 0x78;
  local_78[3] = 0x70;
  local_78[4] = 0x61;
  local_78[5] = 0x6e;
  local_78[6] = 100;
  local_78[7] = 0;
  local_60[0] = &PTR_FUN_001ec530;
                    /* try { // try from 00197dc0 to 00197dcf has its CatchHandler @ 00197e2c */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00197dfc;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00197dfc:
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00197e8c  facebook::react::RNSSplitHostEventEmitter::onInspectorHide =====

/* facebook::react::RNSSplitHostEventEmitter::onInspectorHide(facebook::react::RNSSplitHostEventEmitter::OnInspectorHide)
   const */

void facebook::react::RNSSplitHostEventEmitter::onInspectorHide(undefined8 param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [5];
  char acStack_72 [3];
  char acStack_6f [5];
  undefined1 local_6a;
  void *local_68;
  undefined **local_60 [4];
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x1a;
  local_77 = (char  [5])s_inspectorHide_0013fde6._0_5_;
  acStack_72 = (char  [3])s_inspectorHide_0013fde6._5_3_;
  acStack_6f = (char  [5])s_inspectorHide_0013fde6._8_5_;
  local_6a = 0;
  local_60[0] = &PTR_FUN_001ec5b0;
                    /* try { // try from 00197ee0 to 00197eef has its CatchHandler @ 00197f4c */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00197f1c;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00197f1c:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00197fac  facebook::react::RNSSplitScreenEventEmitter::onWillAppear =====

/* facebook::react::RNSSplitScreenEventEmitter::onWillAppear(facebook::react::RNSSplitScreenEventEmitter::OnWillAppear)
   const */

void facebook::react::RNSSplitScreenEventEmitter::onWillAppear(undefined8 param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined2 local_6f;
  undefined1 local_6d;
  void *local_68;
  undefined **local_60 [4];
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x14;
  local_6f = 0x7261;
  local_6d = 0;
  local_77 = (char  [8])s_willAppear_0013fb6b._0_8_;
  local_60[0] = &PTR_FUN_001ec630;
                    /* try { // try from 00198000 to 0019800f has its CatchHandler @ 0019806c */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_0019803c;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_0019803c:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001980cc  facebook::react::RNSSplitScreenEventEmitter::onDidAppear =====

/* facebook::react::RNSSplitScreenEventEmitter::onDidAppear(facebook::react::RNSSplitScreenEventEmitter::OnDidAppear)
   const */

void facebook::react::RNSSplitScreenEventEmitter::onDidAppear(undefined8 param_1)

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
  local_77 = (char  [8])s_didAppear_0013e522._0_8_;
  local_60[0] = &PTR_FUN_001ec6b0;
                    /* try { // try from 0019811c to 0019812b has its CatchHandler @ 00198188 */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00198158;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00198158:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001981e8  facebook::react::RNSSplitScreenEventEmitter::onWillDisappear =====

/* facebook::react::RNSSplitScreenEventEmitter::onWillDisappear(facebook::react::RNSSplitScreenEventEmitter::OnWillDisappear)
   const */

void facebook::react::RNSSplitScreenEventEmitter::onWillDisappear(undefined8 param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [5];
  char acStack_72 [3];
  char acStack_6f [5];
  undefined1 local_6a;
  void *local_68;
  undefined **local_60 [4];
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x1a;
  local_77 = (char  [5])s_willDisappear_0013f5e0._0_5_;
  acStack_72 = (char  [3])s_willDisappear_0013f5e0._5_3_;
  acStack_6f = (char  [5])s_willDisappear_0013f5e0._8_5_;
  local_6a = 0;
  local_60[0] = &PTR_FUN_001ec730;
                    /* try { // try from 0019823c to 0019824b has its CatchHandler @ 001982a8 */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00198278;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00198278:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00198308  facebook::react::RNSSplitScreenEventEmitter::onDidDisappear =====

/* facebook::react::RNSSplitScreenEventEmitter::onDidDisappear(facebook::react::RNSSplitScreenEventEmitter::OnDidDisappear)
   const */

void facebook::react::RNSSplitScreenEventEmitter::onDidDisappear(undefined8 param_1)

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
  local_6f = 0x72616570;
  local_77 = (char  [8])s_didDisappear_0013eadd._0_8_;
  local_60[0] = &PTR_FUN_001ec7b0;
                    /* try { // try from 00198360 to 0019836f has its CatchHandler @ 001983cc */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_0019839c;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_0019839c:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019842c  facebook::react::RNSStackHeaderConfigAndroidEventEmitter::onToolbarMenuItemPress =====

/* facebook::react::RNSStackHeaderConfigAndroidEventEmitter::onToolbarMenuItemPress(facebook::react::RNSStackHeaderConfigAndroidEventEmitter::OnToolbarMenuItemPress)
   const */

void __thiscall
facebook::react::RNSStackHeaderConfigAndroidEventEmitter::onToolbarMenuItemPress
          (RNSStackHeaderConfigAndroidEventEmitter *this,undefined8 *param_2)

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
  uStack_87 = 0x73736572;
  uVar1 = *(undefined1 *)param_2;
  uStack_8f = (undefined7)s_toolbarMenuItemPress_0013f842._8_8_;
  cStack_88 = SUB81(s_toolbarMenuItemPress_0013f842._8_8_,7);
  local_97 = (char  [8])s_toolbarMenuItemPress_0013f842._0_8_;
  uStack_83 = 0;
  local_80 = (undefined7)*(undefined8 *)((long)param_2 + 1);
  uStack_79 = (undefined1)param_2[1];
  uStack_78 = (undefined7)((ulong)param_2[1] >> 8);
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
                    /* try { // try from 00198494 to 0019849b has its CatchHandler @ 00198570 */
  local_50 = (long *)operator_new(0x20);
  *local_50 = (long)&PTR_FUN_001ec830;
  *(undefined1 *)(local_50 + 1) = uVar1;
  *(ulong *)((long)local_50 + 9) = CONCAT17(uStack_79,local_80);
  local_50[2] = CONCAT71(uStack_78,uStack_79);
  local_50[3] = lVar4;
                    /* try { // try from 001984c0 to 001984d7 has its CatchHandler @ 00198538 */
  facebook::react::EventEmitter::dispatchEvent(this,&local_98,local_70,2);
  if (local_50 == local_70) {
    lVar4 = 4;
    plVar3 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00198504;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_00198504:
  if ((local_98 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_82,CONCAT15(uStack_83,CONCAT41(uStack_87,cStack_88))));
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001985ac  facebook::react::RNSStackHeaderConfigAndroidEventEmitter::onToolbarMenuGroupSelectionChange =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::RNSStackHeaderConfigAndroidEventEmitter::onToolbarMenuGroupSelectionChange(facebook::react::RNSStackHeaderConfigAndroidEventEmitter::OnToolbarMenuGroupSelectionChange)
   const */

void __thiscall
facebook::react::RNSStackHeaderConfigAndroidEventEmitter::onToolbarMenuGroupSelectionChange
          (RNSStackHeaderConfigAndroidEventEmitter *this,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong local_a0;
  undefined8 uStack_98;
  char *local_90;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  local_90 = (char *)operator_new(0x20);
  uVar8 = s_toolbarMenuGroupSelectionChange_0013f1e1._23_8_;
  uVar7 = s_toolbarMenuGroupSelectionChange_0013f1e1._0_8_;
  uVar5 = CONCAT17(s_toolbarMenuGroupSelectionChange_0013f1e1[0xf],
                   s_toolbarMenuGroupSelectionChange_0013f1e1._8_7_);
  uVar6 = CONCAT71(s_toolbarMenuGroupSelectionChange_0013f1e1._16_7_,
                   s_toolbarMenuGroupSelectionChange_0013f1e1[0xf]);
  lVar10 = param_2[2];
  lVar2 = param_2[3];
  local_90[0x1f] = '\0';
  *(undefined8 *)(local_90 + 8) = uVar5;
  *(undefined8 *)local_90 = uVar7;
  uStack_98 = _UNK_00142488;
  local_a0 = _DAT_00142480;
  lVar1 = param_2[4];
  lVar3 = param_2[5];
  *(undefined8 *)(local_90 + 0x17) = uVar8;
  *(undefined8 *)(local_90 + 0xf) = uVar6;
  lVar12 = param_2[1];
  lVar11 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_60 = (long *)0x0;
                    /* try { // try from 00198634 to 0019863b has its CatchHandler @ 00198728 */
  local_60 = (long *)operator_new(0x38);
  *local_60 = (long)&PTR_FUN_001ec8b0;
  local_60[2] = lVar12;
  local_60[1] = lVar11;
  local_60[3] = lVar10;
  local_60[4] = lVar2;
  local_60[5] = lVar1;
  local_60[6] = lVar3;
                    /* try { // try from 00198674 to 0019868b has its CatchHandler @ 001986f0 */
  facebook::react::EventEmitter::dispatchEvent(this,&local_a0,local_80,2);
  if (local_60 == local_80) {
    lVar10 = 4;
    plVar9 = local_80;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_001986b8;
    lVar10 = 5;
    plVar9 = local_60;
  }
  (**(code **)(*plVar9 + lVar10 * 8))();
LAB_001986b8:
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00198760  FUN_00198760 =====

void FUN_00198760(byte *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = *(byte **)(param_1 + 0x18);
  if (pbVar2 != (byte *)0x0) {
    pbVar1 = *(byte **)(param_1 + 0x20);
    pbVar3 = pbVar2;
    if (pbVar1 != pbVar2) {
      do {
        pbVar3 = pbVar1 + -0x18;
        if ((*pbVar3 & 1) != 0) {
          operator_delete(*(void **)(pbVar1 + -8));
        }
        pbVar1 = pbVar3;
      } while (pbVar3 != pbVar2);
      pbVar3 = *(byte **)(param_1 + 0x18);
    }
    *(byte **)(param_1 + 0x20) = pbVar2;
    operator_delete(pbVar3);
  }
  if ((*param_1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 001987ec  facebook::react::RNSStackHeaderConfigIOSEventEmitter::onMenuItemPress =====

/* facebook::react::RNSStackHeaderConfigIOSEventEmitter::onMenuItemPress(facebook::react::RNSStackHeaderConfigIOSEventEmitter::OnMenuItemPress)
   const */

void __thiscall
facebook::react::RNSStackHeaderConfigIOSEventEmitter::onMenuItemPress
          (RNSStackHeaderConfigIOSEventEmitter *this,undefined8 *param_2)

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
  local_97 = (char  [5])s_menuItemPress_001405e6._0_5_;
  acStack_92 = (char  [3])s_menuItemPress_001405e6._5_3_;
  acStack_8f = (char  [5])s_menuItemPress_001405e6._8_5_;
  lVar4 = param_2[2];
  local_8a = 0;
  local_80 = (undefined7)*(undefined8 *)((long)param_2 + 1);
  uStack_79 = (undefined1)param_2[1];
  uStack_78 = (undefined7)((ulong)param_2[1] >> 8);
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
                    /* try { // try from 00198850 to 00198857 has its CatchHandler @ 0019892c */
  local_50 = (long *)operator_new(0x20);
  *local_50 = (long)&PTR_FUN_001ec930;
  *(undefined1 *)(local_50 + 1) = uVar1;
  *(ulong *)((long)local_50 + 9) = CONCAT17(uStack_79,local_80);
  local_50[2] = CONCAT71(uStack_78,uStack_79);
  local_50[3] = lVar4;
                    /* try { // try from 0019887c to 00198893 has its CatchHandler @ 001988f4 */
  facebook::react::EventEmitter::dispatchEvent(this,&local_98,local_70,2);
  if (local_50 == local_70) {
    lVar4 = 4;
    plVar3 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_001988c0;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_001988c0:
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00198968  facebook::react::RNSStackHeaderConfigIOSEventEmitter::onMenuSelectionChange =====

/* facebook::react::RNSStackHeaderConfigIOSEventEmitter::onMenuSelectionChange(facebook::react::RNSStackHeaderConfigIOSEventEmitter::OnMenuSelectionChange)
   const */

void __thiscall
facebook::react::RNSStackHeaderConfigIOSEventEmitter::onMenuSelectionChange
          (RNSStackHeaderConfigIOSEventEmitter *this,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte local_98;
  char local_97 [8];
  undefined7 uStack_8f;
  undefined4 uStack_88;
  uint uStack_84;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  lVar6 = param_2[4];
  lVar2 = param_2[5];
  lVar1 = param_2[2];
  lVar3 = param_2[3];
  uStack_8f = (undefined7)s_menuSelectionChange_0013f346._8_8_;
  uStack_88 = CONCAT31(0x65676e,SUB81(s_menuSelectionChange_0013f346._8_8_,7));
  local_97 = (char  [8])s_menuSelectionChange_0013f346._0_8_;
  lVar8 = param_2[1];
  lVar7 = *param_2;
  local_98 = 0x26;
  uStack_84 = uStack_84 & 0xffffff00;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_60 = (long *)0x0;
                    /* try { // try from 001989e0 to 001989e7 has its CatchHandler @ 00198ad4 */
  local_60 = (long *)operator_new(0x38);
  *local_60 = (long)&PTR_FUN_001ec9b0;
  local_60[2] = lVar8;
  local_60[1] = lVar7;
  local_60[3] = lVar1;
  local_60[4] = lVar3;
  local_60[5] = lVar6;
  local_60[6] = lVar2;
                    /* try { // try from 00198a20 to 00198a37 has its CatchHandler @ 00198a9c */
  facebook::react::EventEmitter::dispatchEvent(this,&local_98,local_80,2);
  if (local_60 == local_80) {
    lVar6 = 4;
    plVar5 = local_80;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00198a64;
    lVar6 = 5;
    plVar5 = local_60;
  }
  (**(code **)(*plVar5 + lVar6 * 8))();
LAB_00198a64:
  if ((local_98 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_84,uStack_88));
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00198b0c  FUN_00198b0c =====

void FUN_00198b0c(byte *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = *(byte **)(param_1 + 0x18);
  if (pbVar2 != (byte *)0x0) {
    pbVar1 = *(byte **)(param_1 + 0x20);
    pbVar3 = pbVar2;
    if (pbVar1 != pbVar2) {
      do {
        pbVar3 = pbVar1 + -0x18;
        if ((*pbVar3 & 1) != 0) {
          operator_delete(*(void **)(pbVar1 + -8));
        }
        pbVar1 = pbVar3;
      } while (pbVar3 != pbVar2);
      pbVar3 = *(byte **)(param_1 + 0x18);
    }
    *(byte **)(param_1 + 0x20) = pbVar2;
    operator_delete(pbVar3);
  }
  if ((*param_1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 00198b98  facebook::react::RNSStackHeaderItemIOSEventEmitter::onHeaderItemPress =====

/* facebook::react::RNSStackHeaderItemIOSEventEmitter::onHeaderItemPress(facebook::react::RNSStackHeaderItemIOSEventEmitter::OnHeaderItemPress)
   const */

void facebook::react::RNSStackHeaderItemIOSEventEmitter::onHeaderItemPress(undefined8 param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [7];
  char cStack_70;
  char acStack_6f [7];
  undefined1 local_68;
  undefined7 uStack_67;
  undefined **local_60 [4];
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x1e;
  local_77 = (char  [7])s_headerItemPress_0013ff75._0_7_;
  cStack_70 = s_headerItemPress_0013ff75[7];
  acStack_6f = (char  [7])s_headerItemPress_0013ff75._8_7_;
  local_68 = 0;
  local_60[0] = &PTR_FUN_001eca30;
                    /* try { // try from 00198bec to 00198bfb has its CatchHandler @ 00198c58 */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00198c28;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00198c28:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_67,local_68));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00198cb8  facebook::react::RNSStackScreenEventEmitter::onWillAppear =====

/* facebook::react::RNSStackScreenEventEmitter::onWillAppear(facebook::react::RNSStackScreenEventEmitter::OnWillAppear)
   const */

void facebook::react::RNSStackScreenEventEmitter::onWillAppear(undefined8 param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined2 local_6f;
  undefined1 local_6d;
  void *local_68;
  undefined **local_60 [4];
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x14;
  local_6f = 0x7261;
  local_6d = 0;
  local_77 = (char  [8])s_willAppear_0013fb6b._0_8_;
  local_60[0] = &PTR_FUN_001ecab0;
                    /* try { // try from 00198d0c to 00198d1b has its CatchHandler @ 00198d78 */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00198d48;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00198d48:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00198dd8  facebook::react::RNSStackScreenEventEmitter::onDidAppear =====

/* facebook::react::RNSStackScreenEventEmitter::onDidAppear(facebook::react::RNSStackScreenEventEmitter::OnDidAppear)
   const */

void facebook::react::RNSStackScreenEventEmitter::onDidAppear(undefined8 param_1)

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
  local_77 = (char  [8])s_didAppear_0013e522._0_8_;
  local_60[0] = &PTR_FUN_001ecb30;
                    /* try { // try from 00198e28 to 00198e37 has its CatchHandler @ 00198e94 */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00198e64;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00198e64:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00198ef4  facebook::react::RNSStackScreenEventEmitter::onWillDisappear =====

/* facebook::react::RNSStackScreenEventEmitter::onWillDisappear(facebook::react::RNSStackScreenEventEmitter::OnWillDisappear)
   const */

void facebook::react::RNSStackScreenEventEmitter::onWillDisappear(undefined8 param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [5];
  char acStack_72 [3];
  char acStack_6f [5];
  undefined1 local_6a;
  void *local_68;
  undefined **local_60 [4];
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x1a;
  local_77 = (char  [5])s_willDisappear_0013f5e0._0_5_;
  acStack_72 = (char  [3])s_willDisappear_0013f5e0._5_3_;
  acStack_6f = (char  [5])s_willDisappear_0013f5e0._8_5_;
  local_6a = 0;
  local_60[0] = &PTR_FUN_001ecbb0;
                    /* try { // try from 00198f48 to 00198f57 has its CatchHandler @ 00198fb4 */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00198f84;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_00198f84:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00199014  facebook::react::RNSStackScreenEventEmitter::onDidDisappear =====

/* facebook::react::RNSStackScreenEventEmitter::onDidDisappear(facebook::react::RNSStackScreenEventEmitter::OnDidDisappear)
   const */

void facebook::react::RNSStackScreenEventEmitter::onDidDisappear(undefined8 param_1)

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
  local_6f = 0x72616570;
  local_77 = (char  [8])s_didDisappear_0013eadd._0_8_;
  local_60[0] = &PTR_FUN_001ecc30;
                    /* try { // try from 0019906c to 0019907b has its CatchHandler @ 001990d8 */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_001990a8;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_001990a8:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00199138  facebook::react::RNSStackScreenEventEmitter::onDismiss =====

/* facebook::react::RNSStackScreenEventEmitter::onDismiss(facebook::react::RNSStackScreenEventEmitter::OnDismiss)
   const */

void __thiscall
facebook::react::RNSStackScreenEventEmitter::onDismiss
          (RNSStackScreenEventEmitter *this,undefined1 param_2)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78 [16];
  void *local_68;
  undefined **local_60;
  undefined1 local_58;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78[0] = 0xe;
  local_78[8] = 0;
  local_78[1] = 100;
  local_78[2] = 0x69;
  local_78[3] = 0x73;
  local_78[4] = 0x6d;
  local_78[5] = 0x69;
  local_78[6] = 0x73;
  local_78[7] = 0x73;
  local_60 = &PTR_FUN_001eccb0;
                    /* try { // try from 00199190 to 0019919f has its CatchHandler @ 001991fc */
  local_58 = param_2;
  local_40 = &local_60;
  facebook::react::EventEmitter::dispatchEvent(this,local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_001991cc;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_001991cc:
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019925c  facebook::react::RNSStackScreenEventEmitter::onNativeDismissPrevented =====

/* facebook::react::RNSStackScreenEventEmitter::onNativeDismissPrevented(facebook::react::RNSStackScreenEventEmitter::OnNativeDismissPrevented)
   const */

void facebook::react::RNSStackScreenEventEmitter::onNativeDismissPrevented(undefined8 param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  char acStack_6f [6];
  char cStack_69;
  char cStack_68;
  char acStack_67 [6];
  undefined1 uStack_61;
  undefined **local_60 [4];
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x2c;
  uStack_61 = 0;
  acStack_6f = (char  [6])s_nativeDismissPrevented_001404da._8_6_;
  local_77 = (char  [8])s_nativeDismissPrevented_001404da._0_8_;
  cStack_69 = (char)s_nativeDismissPrevented_001404da._14_2_;
  cStack_68 = SUB21(s_nativeDismissPrevented_001404da._14_2_,1);
  acStack_67 = (char  [6])s_nativeDismissPrevented_001404da._16_6_;
  local_60[0] = &PTR_FUN_001ecd30;
                    /* try { // try from 001992b0 to 001992bf has its CatchHandler @ 0019931c */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_001992ec;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_001992ec:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_61,CONCAT61(acStack_67,cStack_68)));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019937c  facebook::react::RNSTabsBottomAccessoryEventEmitter::onEnvironmentChange =====

/* facebook::react::RNSTabsBottomAccessoryEventEmitter::onEnvironmentChange(facebook::react::RNSTabsBottomAccessoryEventEmitter::OnEnvironmentChange)
   const */

void __thiscall
facebook::react::RNSTabsBottomAccessoryEventEmitter::onEnvironmentChange
          (RNSTabsBottomAccessoryEventEmitter *this,undefined4 param_2)

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
  undefined4 local_58;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x22;
  uStack_67 = 0x65;
  uStack_6f = (undefined7)s_environmentChange_001404f1._8_8_;
  cStack_68 = SUB81(s_environmentChange_001404f1._8_8_,7);
  local_77 = (char  [8])s_environmentChange_001404f1._0_8_;
  local_60 = &PTR_FUN_001ecdb0;
                    /* try { // try from 001993d0 to 001993df has its CatchHandler @ 0019943c */
  local_58 = param_2;
  local_40 = &local_60;
  facebook::react::EventEmitter::dispatchEvent(this,&local_78,&local_60,2);
  if (local_40 == &local_60) {
    lVar3 = 4;
    pppuVar2 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_0019940c;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_0019940c:
  if ((local_78 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_65,CONCAT21(uStack_67,cStack_68)));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019949c  facebook::react::RNSTabsHostAndroidEventEmitter::onTabSelected =====

/* facebook::react::RNSTabsHostAndroidEventEmitter::onTabSelected(facebook::react::RNSTabsHostAndroidEventEmitter::OnTabSelected)
   const */

void __thiscall
facebook::react::RNSTabsHostAndroidEventEmitter::onTabSelected
          (RNSTabsHostAndroidEventEmitter *this,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  byte local_a8;
  undefined7 local_a7;
  char cStack_a0;
  undefined3 uStack_9f;
  undefined1 local_9c;
  void *local_98;
  undefined7 local_90;
  undefined1 uStack_89;
  undefined7 uStack_88;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_a8 = 0x16;
  uVar2 = *(undefined1 *)param_2;
  local_a7 = (undefined7)s_tabSelected_0013f35a._0_8_;
  _cStack_a0 = CONCAT31(0x646574,SUB81(s_tabSelected_0013f35a._0_8_,7));
  lVar6 = param_2[2];
  local_9c = 0;
  local_90 = (undefined7)*(undefined8 *)((long)param_2 + 1);
  uStack_89 = (undefined1)param_2[1];
  uStack_88 = (undefined7)((ulong)param_2[1] >> 8);
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
                    /* try { // try from 0019950c to 00199513 has its CatchHandler @ 001995fc */
  local_60 = (long *)operator_new(0x30);
  *local_60 = (long)&PTR_FUN_001ece30;
  *(undefined1 *)(local_60 + 1) = uVar2;
  *(ulong *)((long)local_60 + 9) = CONCAT17(uStack_89,local_90);
  lVar5 = param_2[3];
  local_60[2] = CONCAT71(uStack_88,uStack_89);
  local_60[3] = lVar6;
  uVar1 = *(undefined4 *)(param_2 + 4);
  local_60[4] = lVar5;
  *(undefined4 *)(local_60 + 5) = uVar1;
                    /* try { // try from 00199548 to 0019955f has its CatchHandler @ 001995c4 */
  facebook::react::EventEmitter::dispatchEvent(this,&local_a8,local_80,2);
  if (local_60 == local_80) {
    lVar6 = 4;
    plVar4 = local_80;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_0019958c;
    lVar6 = 5;
    plVar4 = local_60;
  }
  (**(code **)(*plVar4 + lVar6 * 8))();
LAB_0019958c:
  if ((local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00199638  facebook::react::RNSTabsHostAndroidEventEmitter::onTabSelectionRejected =====

/* facebook::react::RNSTabsHostAndroidEventEmitter::onTabSelectionRejected(facebook::react::RNSTabsHostAndroidEventEmitter::OnTabSelectionRejected)
   const */

void facebook::react::RNSTabsHostAndroidEventEmitter::onTabSelectionRejected
               (undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  byte local_88;
  char local_87 [8];
  undefined7 uStack_7f;
  char cStack_78;
  undefined4 uStack_77;
  undefined1 uStack_73;
  undefined2 uStack_72;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = param_2[3];
  local_88 = 0x28;
  uStack_77 = 0x64657463;
  lVar5 = param_2[2];
  uStack_7f = (undefined7)s_tabSelectionRejected_0013eaea._8_8_;
  cStack_78 = SUB81(s_tabSelectionRejected_0013eaea._8_8_,7);
  local_87 = (char  [8])s_tabSelectionRejected_0013eaea._0_8_;
  lVar9 = param_2[1];
  lVar7 = *param_2;
  lVar6 = param_2[6];
  lVar1 = param_2[7];
  lVar10 = param_2[5];
  lVar8 = param_2[4];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  uStack_73 = 0;
  local_50 = (long *)0x0;
                    /* try { // try from 001996c0 to 001996c7 has its CatchHandler @ 001997c0 */
  local_50 = (long *)operator_new(0x48);
  *local_50 = (long)&PTR_FUN_001eceb0;
  local_50[2] = lVar9;
  local_50[1] = lVar7;
  local_50[3] = lVar5;
  *(int *)(local_50 + 4) = (int)lVar3;
  local_50[6] = lVar10;
  local_50[5] = lVar8;
  local_50[7] = lVar6;
  local_50[8] = lVar1;
                    /* try { // try from 00199710 to 00199727 has its CatchHandler @ 00199788 */
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_88,local_70,2);
  if (local_50 == local_70) {
    lVar6 = 4;
    plVar4 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00199754;
    lVar6 = 5;
    plVar4 = local_50;
  }
  (**(code **)(*plVar4 + lVar6 * 8))();
LAB_00199754:
  if ((local_88 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_72,CONCAT15(uStack_73,CONCAT41(uStack_77,cStack_78))));
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001997f8  FUN_001997f8 =====

void FUN_001997f8(byte *param_1)

{
  if ((param_1[0x20] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  if ((*param_1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 0019983c  facebook::react::RNSTabsHostAndroidEventEmitter::onTabSelectionPrevented =====

/* facebook::react::RNSTabsHostAndroidEventEmitter::onTabSelectionPrevented(facebook::react::RNSTabsHostAndroidEventEmitter::OnTabSelectionPrevented)
   const */

void __thiscall
facebook::react::RNSTabsHostAndroidEventEmitter::onTabSelectionPrevented
          (RNSTabsHostAndroidEventEmitter *this,long *param_2)

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
  lVar5 = param_2[3];
  local_88 = 0x2a;
  acStack_7f = (char  [5])s_tabSelectionPrevented_0013fcc2._8_5_;
  local_87 = (char  [8])s_tabSelectionPrevented_0013fcc2._0_8_;
  lVar8 = param_2[1];
  lVar6 = *param_2;
  uStack_7a = (undefined2)s_tabSelectionPrevented_0013fcc2._13_3_;
  cStack_78 = SUB31(s_tabSelectionPrevented_0013fcc2._13_3_,2);
  acStack_77 = (char  [5])s_tabSelectionPrevented_0013fcc2._16_5_;
  lVar3 = param_2[2];
  lVar9 = param_2[5];
  lVar7 = param_2[4];
  lVar4 = param_2[6];
  uStack_72 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  local_50 = (long *)0x0;
                    /* try { // try from 001998c0 to 001998c7 has its CatchHandler @ 001999c0 */
  local_50 = (long *)operator_new(0x40);
  *local_50 = (long)&PTR_FUN_001ecf30;
  local_50[2] = lVar8;
  local_50[1] = lVar6;
  local_50[3] = lVar3;
  *(int *)(local_50 + 4) = (int)lVar5;
  local_50[6] = lVar9;
  local_50[5] = lVar7;
  local_50[7] = lVar4;
                    /* try { // try from 00199910 to 00199927 has its CatchHandler @ 00199988 */
  facebook::react::EventEmitter::dispatchEvent(this,&local_88,local_70,2);
  if (local_50 == local_70) {
    lVar5 = 4;
    plVar2 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00199954;
    lVar5 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar5 * 8))();
LAB_00199954:
  if ((local_88 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_71,CONCAT16(uStack_72,CONCAT51(acStack_77,cStack_78))));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001999f8  FUN_001999f8 =====

void FUN_001999f8(byte *param_1)

{
  if ((param_1[0x20] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  if ((*param_1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 00199a3c  facebook::react::RNSTabsHostIOSEventEmitter::onTabSelected =====

/* facebook::react::RNSTabsHostIOSEventEmitter::onTabSelected(facebook::react::RNSTabsHostIOSEventEmitter::OnTabSelected)
   const */

void __thiscall
facebook::react::RNSTabsHostIOSEventEmitter::onTabSelected
          (RNSTabsHostIOSEventEmitter *this,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  byte local_a8;
  undefined7 local_a7;
  char cStack_a0;
  undefined3 uStack_9f;
  undefined1 local_9c;
  void *local_98;
  undefined7 local_90;
  undefined1 uStack_89;
  undefined7 uStack_88;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_a8 = 0x16;
  uVar2 = *(undefined1 *)param_2;
  local_a7 = (undefined7)s_tabSelected_0013f35a._0_8_;
  _cStack_a0 = CONCAT31(0x646574,SUB81(s_tabSelected_0013f35a._0_8_,7));
  lVar6 = param_2[2];
  local_9c = 0;
  local_90 = (undefined7)*(undefined8 *)((long)param_2 + 1);
  uStack_89 = (undefined1)param_2[1];
  uStack_88 = (undefined7)((ulong)param_2[1] >> 8);
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
                    /* try { // try from 00199aac to 00199ab3 has its CatchHandler @ 00199b9c */
  local_60 = (long *)operator_new(0x30);
  *local_60 = (long)&PTR_FUN_001ecfb0;
  *(undefined1 *)(local_60 + 1) = uVar2;
  *(ulong *)((long)local_60 + 9) = CONCAT17(uStack_89,local_90);
  lVar5 = param_2[3];
  local_60[2] = CONCAT71(uStack_88,uStack_89);
  local_60[3] = lVar6;
  uVar1 = *(undefined4 *)(param_2 + 4);
  local_60[4] = lVar5;
  *(undefined4 *)(local_60 + 5) = uVar1;
                    /* try { // try from 00199ae8 to 00199aff has its CatchHandler @ 00199b64 */
  facebook::react::EventEmitter::dispatchEvent(this,&local_a8,local_80,2);
  if (local_60 == local_80) {
    lVar6 = 4;
    plVar4 = local_80;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00199b2c;
    lVar6 = 5;
    plVar4 = local_60;
  }
  (**(code **)(*plVar4 + lVar6 * 8))();
LAB_00199b2c:
  if ((local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00199bd8  facebook::react::RNSTabsHostIOSEventEmitter::onTabSelectionRejected =====

/* facebook::react::RNSTabsHostIOSEventEmitter::onTabSelectionRejected(facebook::react::RNSTabsHostIOSEventEmitter::OnTabSelectionRejected)
   const */

void __thiscall
facebook::react::RNSTabsHostIOSEventEmitter::onTabSelectionRejected
          (RNSTabsHostIOSEventEmitter *this,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  byte local_88;
  char local_87 [8];
  undefined7 uStack_7f;
  char cStack_78;
  undefined4 uStack_77;
  undefined1 uStack_73;
  undefined2 uStack_72;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = param_2[3];
  local_88 = 0x28;
  uStack_77 = 0x64657463;
  lVar5 = param_2[2];
  uStack_7f = (undefined7)s_tabSelectionRejected_0013eaea._8_8_;
  cStack_78 = SUB81(s_tabSelectionRejected_0013eaea._8_8_,7);
  local_87 = (char  [8])s_tabSelectionRejected_0013eaea._0_8_;
  lVar9 = param_2[1];
  lVar7 = *param_2;
  lVar6 = param_2[6];
  lVar1 = param_2[7];
  lVar10 = param_2[5];
  lVar8 = param_2[4];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  uStack_73 = 0;
  local_50 = (long *)0x0;
                    /* try { // try from 00199c60 to 00199c67 has its CatchHandler @ 00199d60 */
  local_50 = (long *)operator_new(0x48);
  *local_50 = (long)&PTR_FUN_001ed030;
  local_50[2] = lVar9;
  local_50[1] = lVar7;
  local_50[3] = lVar5;
  *(int *)(local_50 + 4) = (int)lVar3;
  local_50[6] = lVar10;
  local_50[5] = lVar8;
  local_50[7] = lVar6;
  local_50[8] = lVar1;
                    /* try { // try from 00199cb0 to 00199cc7 has its CatchHandler @ 00199d28 */
  facebook::react::EventEmitter::dispatchEvent(this,&local_88,local_70,2);
  if (local_50 == local_70) {
    lVar6 = 4;
    plVar4 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00199cf4;
    lVar6 = 5;
    plVar4 = local_50;
  }
  (**(code **)(*plVar4 + lVar6 * 8))();
LAB_00199cf4:
  if ((local_88 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_72,CONCAT15(uStack_73,CONCAT41(uStack_77,cStack_78))));
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00199d98  FUN_00199d98 =====

void FUN_00199d98(byte *param_1)

{
  if ((param_1[0x20] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  if ((*param_1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 00199ddc  facebook::react::RNSTabsHostIOSEventEmitter::onTabSelectionPrevented =====

/* facebook::react::RNSTabsHostIOSEventEmitter::onTabSelectionPrevented(facebook::react::RNSTabsHostIOSEventEmitter::OnTabSelectionPrevented)
   const */

void __thiscall
facebook::react::RNSTabsHostIOSEventEmitter::onTabSelectionPrevented
          (RNSTabsHostIOSEventEmitter *this,long *param_2)

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
  lVar5 = param_2[3];
  local_88 = 0x2a;
  acStack_7f = (char  [5])s_tabSelectionPrevented_0013fcc2._8_5_;
  local_87 = (char  [8])s_tabSelectionPrevented_0013fcc2._0_8_;
  lVar8 = param_2[1];
  lVar6 = *param_2;
  uStack_7a = (undefined2)s_tabSelectionPrevented_0013fcc2._13_3_;
  cStack_78 = SUB31(s_tabSelectionPrevented_0013fcc2._13_3_,2);
  acStack_77 = (char  [5])s_tabSelectionPrevented_0013fcc2._16_5_;
  lVar3 = param_2[2];
  lVar9 = param_2[5];
  lVar7 = param_2[4];
  lVar4 = param_2[6];
  uStack_72 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  local_50 = (long *)0x0;
                    /* try { // try from 00199e60 to 00199e67 has its CatchHandler @ 00199f60 */
  local_50 = (long *)operator_new(0x40);
  *local_50 = (long)&PTR_FUN_001ed0b0;
  local_50[2] = lVar8;
  local_50[1] = lVar6;
  local_50[3] = lVar3;
  *(int *)(local_50 + 4) = (int)lVar5;
  local_50[6] = lVar9;
  local_50[5] = lVar7;
  local_50[7] = lVar4;
                    /* try { // try from 00199eb0 to 00199ec7 has its CatchHandler @ 00199f28 */
  facebook::react::EventEmitter::dispatchEvent(this,&local_88,local_70,2);
  if (local_50 == local_70) {
    lVar5 = 4;
    plVar2 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00199ef4;
    lVar5 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar5 * 8))();
LAB_00199ef4:
  if ((local_88 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_71,CONCAT16(uStack_72,CONCAT51(acStack_77,cStack_78))));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00199f98  FUN_00199f98 =====

void FUN_00199f98(byte *param_1)

{
  if ((param_1[0x20] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  if ((*param_1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}


// ===== 00199fdc  facebook::react::RNSTabsHostIOSEventEmitter::onMoreTabSelected =====

/* facebook::react::RNSTabsHostIOSEventEmitter::onMoreTabSelected(facebook::react::RNSTabsHostIOSEventEmitter::OnMoreTabSelected)
   const */

void __thiscall
facebook::react::RNSTabsHostIOSEventEmitter::onMoreTabSelected
          (RNSTabsHostIOSEventEmitter *this,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  byte local_a8;
  char local_a7 [7];
  char cStack_a0;
  char acStack_9f [7];
  undefined1 local_98;
  undefined7 uStack_97;
  undefined7 local_90;
  undefined1 uStack_89;
  undefined7 uStack_88;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar3 = *(undefined1 *)param_2;
  uVar2 = *(undefined4 *)(param_2 + 3);
  local_a8 = 0x1e;
  local_a7 = (char  [7])s_moreTabSelected_0013f6eb._0_7_;
  cStack_a0 = s_moreTabSelected_0013f6eb[7];
  acStack_9f = (char  [7])s_moreTabSelected_0013f6eb._8_7_;
  local_90 = (undefined7)*(undefined8 *)((long)param_2 + 1);
  uVar1 = param_2[1];
  lVar6 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uStack_89 = (undefined1)uVar1;
  uStack_88 = (undefined7)((ulong)uVar1 >> 8);
  local_98 = 0;
                    /* try { // try from 0019a048 to 0019a04f has its CatchHandler @ 0019a12c */
  local_60 = (long *)operator_new(0x28);
  *local_60 = (long)&PTR_FUN_001ed130;
  *(undefined1 *)(local_60 + 1) = uVar3;
  *(ulong *)((long)local_60 + 9) = CONCAT17(uStack_89,local_90);
  local_60[2] = CONCAT71(uStack_88,uStack_89);
  local_60[3] = lVar6;
  *(undefined4 *)(local_60 + 4) = uVar2;
                    /* try { // try from 0019a078 to 0019a08f has its CatchHandler @ 0019a0f4 */
  facebook::react::EventEmitter::dispatchEvent(this,&local_a8,local_80,2);
  if (local_60 == local_80) {
    lVar6 = 4;
    plVar5 = local_80;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_0019a0bc;
    lVar6 = 5;
    plVar5 = local_60;
  }
  (**(code **)(*plVar5 + lVar6 * 8))();
LAB_0019a0bc:
  if ((local_a8 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_97,local_98));
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019a168  facebook::react::RNSTabsScreenAndroidEventEmitter::onWillAppear =====

/* facebook::react::RNSTabsScreenAndroidEventEmitter::onWillAppear(facebook::react::RNSTabsScreenAndroidEventEmitter::OnWillAppear)
   const */

void facebook::react::RNSTabsScreenAndroidEventEmitter::onWillAppear(undefined8 param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined2 local_6f;
  undefined1 local_6d;
  void *local_68;
  undefined **local_60 [4];
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x14;
  local_6f = 0x7261;
  local_6d = 0;
  local_77 = (char  [8])s_willAppear_0013fb6b._0_8_;
  local_60[0] = &PTR_FUN_001ed1b0;
                    /* try { // try from 0019a1bc to 0019a1cb has its CatchHandler @ 0019a228 */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_0019a1f8;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_0019a1f8:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019a288  facebook::react::RNSTabsScreenAndroidEventEmitter::onDidAppear =====

/* facebook::react::RNSTabsScreenAndroidEventEmitter::onDidAppear(facebook::react::RNSTabsScreenAndroidEventEmitter::OnDidAppear)
   const */

void facebook::react::RNSTabsScreenAndroidEventEmitter::onDidAppear(undefined8 param_1)

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
  local_77 = (char  [8])s_didAppear_0013e522._0_8_;
  local_60[0] = &PTR_FUN_001ed230;
                    /* try { // try from 0019a2d8 to 0019a2e7 has its CatchHandler @ 0019a344 */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_0019a314;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_0019a314:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019a3a4  facebook::react::RNSTabsScreenAndroidEventEmitter::onWillDisappear =====

/* facebook::react::RNSTabsScreenAndroidEventEmitter::onWillDisappear(facebook::react::RNSTabsScreenAndroidEventEmitter::OnWillDisappear)
   const */

void facebook::react::RNSTabsScreenAndroidEventEmitter::onWillDisappear(undefined8 param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [5];
  char acStack_72 [3];
  char acStack_6f [5];
  undefined1 local_6a;
  void *local_68;
  undefined **local_60 [4];
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x1a;
  local_77 = (char  [5])s_willDisappear_0013f5e0._0_5_;
  acStack_72 = (char  [3])s_willDisappear_0013f5e0._5_3_;
  acStack_6f = (char  [5])s_willDisappear_0013f5e0._8_5_;
  local_6a = 0;
  local_60[0] = &PTR_FUN_001ed2b0;
                    /* try { // try from 0019a3f8 to 0019a407 has its CatchHandler @ 0019a464 */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_0019a434;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_0019a434:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019a4c4  facebook::react::RNSTabsScreenAndroidEventEmitter::onDidDisappear =====

/* facebook::react::RNSTabsScreenAndroidEventEmitter::onDidDisappear(facebook::react::RNSTabsScreenAndroidEventEmitter::OnDidDisappear)
   const */

void facebook::react::RNSTabsScreenAndroidEventEmitter::onDidDisappear(undefined8 param_1)

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
  local_6f = 0x72616570;
  local_77 = (char  [8])s_didDisappear_0013eadd._0_8_;
  local_60[0] = &PTR_FUN_001ed330;
                    /* try { // try from 0019a51c to 0019a52b has its CatchHandler @ 0019a588 */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_0019a558;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_0019a558:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019a5e8  facebook::react::RNSTabsScreenIOSEventEmitter::onWillAppear =====

/* facebook::react::RNSTabsScreenIOSEventEmitter::onWillAppear(facebook::react::RNSTabsScreenIOSEventEmitter::OnWillAppear)
   const */

void facebook::react::RNSTabsScreenIOSEventEmitter::onWillAppear(undefined8 param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [8];
  undefined2 local_6f;
  undefined1 local_6d;
  void *local_68;
  undefined **local_60 [4];
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x14;
  local_6f = 0x7261;
  local_6d = 0;
  local_77 = (char  [8])s_willAppear_0013fb6b._0_8_;
  local_60[0] = &PTR_FUN_001ed3b0;
                    /* try { // try from 0019a63c to 0019a64b has its CatchHandler @ 0019a6a8 */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_0019a678;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_0019a678:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019a708  facebook::react::RNSTabsScreenIOSEventEmitter::onDidAppear =====

/* facebook::react::RNSTabsScreenIOSEventEmitter::onDidAppear(facebook::react::RNSTabsScreenIOSEventEmitter::OnDidAppear)
   const */

void facebook::react::RNSTabsScreenIOSEventEmitter::onDidAppear(undefined8 param_1)

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
  local_77 = (char  [8])s_didAppear_0013e522._0_8_;
  local_60[0] = &PTR_FUN_001ed430;
                    /* try { // try from 0019a758 to 0019a767 has its CatchHandler @ 0019a7c4 */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_0019a794;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_0019a794:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019a824  facebook::react::RNSTabsScreenIOSEventEmitter::onWillDisappear =====

/* facebook::react::RNSTabsScreenIOSEventEmitter::onWillDisappear(facebook::react::RNSTabsScreenIOSEventEmitter::OnWillDisappear)
   const */

void facebook::react::RNSTabsScreenIOSEventEmitter::onWillDisappear(undefined8 param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  byte local_78;
  char local_77 [5];
  char acStack_72 [3];
  char acStack_6f [5];
  undefined1 local_6a;
  void *local_68;
  undefined **local_60 [4];
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x1a;
  local_77 = (char  [5])s_willDisappear_0013f5e0._0_5_;
  acStack_72 = (char  [3])s_willDisappear_0013f5e0._5_3_;
  acStack_6f = (char  [5])s_willDisappear_0013f5e0._8_5_;
  local_6a = 0;
  local_60[0] = &PTR_FUN_001ed4b0;
                    /* try { // try from 0019a878 to 0019a887 has its CatchHandler @ 0019a8e4 */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_0019a8b4;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_0019a8b4:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019a944  facebook::react::RNSTabsScreenIOSEventEmitter::onDidDisappear =====

/* facebook::react::RNSTabsScreenIOSEventEmitter::onDidDisappear(facebook::react::RNSTabsScreenIOSEventEmitter::OnDidDisappear)
   const */

void facebook::react::RNSTabsScreenIOSEventEmitter::onDidDisappear(undefined8 param_1)

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
  local_6f = 0x72616570;
  local_77 = (char  [8])s_didDisappear_0013eadd._0_8_;
  local_60[0] = &PTR_FUN_001ed530;
                    /* try { // try from 0019a99c to 0019a9ab has its CatchHandler @ 0019aa08 */
  local_40 = local_60;
  facebook::react::EventEmitter::dispatchEvent(param_1,&local_78,local_60,2);
  if (local_40 == local_60) {
    lVar3 = 4;
    pppuVar2 = local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_0019a9d8;
    lVar3 = 5;
    pppuVar2 = local_40;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_0019a9d8:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019aa68  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019aa6c  FUN_0019aa6c =====

void FUN_0019aa6c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_001eaea0;
  return;
}


// ===== 0019aa90  FUN_0019aa90 =====

void FUN_0019aa90(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_001eaea0;
  return;
}


// ===== 0019aaa0  FUN_0019aaa0 =====

void FUN_0019aaa0(void)

{
  return;
}


// ===== 0019aaa4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019aaa8  FUN_0019aaa8 =====

void FUN_0019aaa8(undefined4 *param_1,undefined8 param_2,long *param_3)

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


// ===== 0019ab10  FUN_0019ab10 =====

long FUN_0019ab10(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react26RNSModalScreenEventEmitter8onAppearENS1_8OnAppearEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0019ab2c  FUN_0019ab2c =====

pointer_____offset_0x10___ * FUN_0019ab2c(void)

{
  return &PTR_vtable_001eaf10;
}


// ===== 0019ab38  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019ab3c  FUN_0019ab3c =====

void FUN_0019ab3c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_001eaf30;
  return;
}


// ===== 0019ab60  FUN_0019ab60 =====

void FUN_0019ab60(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_001eaf30;
  return;
}


// ===== 0019ab70  FUN_0019ab70 =====

void FUN_0019ab70(void)

{
  return;
}


// ===== 0019ab74  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019ab78  FUN_0019ab78 =====

void FUN_0019ab78(undefined4 *param_1,undefined8 param_2,long *param_3)

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


// ===== 0019abe0  FUN_0019abe0 =====

long FUN_0019abe0(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react26RNSModalScreenEventEmitter11onDisappearENS1_11OnDisappearEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0019abfc  FUN_0019abfc =====

pointer_____offset_0x10___ * FUN_0019abfc(void)

{
  return &PTR_vtable_001eaf90;
}


// ===== 0019ac08  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019ac0c  FUN_0019ac0c =====

void FUN_0019ac0c(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar1 = *(undefined4 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_001eafb0;
  *(undefined4 *)(puVar2 + 1) = uVar1;
  return;
}


// ===== 0019ac44  FUN_0019ac44 =====

void FUN_0019ac44(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  *param_2 = &PTR_FUN_001eafb0;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return;
}


// ===== 0019ac5c  FUN_0019ac5c =====

void FUN_0019ac5c(void)

{
  return;
}


// ===== 0019ac60  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019ac64  FUN_0019ac64 =====

void FUN_0019ac64(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 0019aca4 to 0019acbb has its CatchHandler @ 0019acf0 */
  FUN_0019ad50(&local_40,param_3,"dismissCount",param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019ad28  FUN_0019ad28 =====

long FUN_0019ad28(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react26RNSModalScreenEventEmitter11onDismissedENS1_11OnDismissedEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0019ad44  FUN_0019ad44 =====

pointer_____offset_0x10___ * FUN_0019ad44(void)

{
  return &PTR_vtable_001eb010;
}


// ===== 0019ad50  FUN_0019ad50 =====

void FUN_0019ad50(undefined8 param_1,long *param_2,char *param_3,int *param_4)

{
  long lVar1;
  size_t sVar2;
  undefined8 *local_60;
  undefined4 local_58 [2];
  double local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  sVar2 = strlen(param_3);
  (**(code **)(*param_2 + 0x108))(&local_60,param_2,param_3,sVar2);
  local_58[0] = 3;
  local_50 = (double)*param_4;
                    /* try { // try from 0019adc4 to 0019add7 has its CatchHandler @ 0019ae1c */
  (**(code **)(*param_2 + 0x1b8))(param_2,param_1,&local_60,local_58);
  facebook::jsi::Value::~Value((Value *)local_58);
  if (local_60 != (undefined8 *)0x0) {
    (**(code **)*local_60)();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019ae58  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019ae5c  FUN_0019ae5c =====

void FUN_0019ae5c(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar1 = *(undefined4 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_001eb030;
  *(undefined4 *)(puVar2 + 1) = uVar1;
  return;
}


// ===== 0019ae94  FUN_0019ae94 =====

void FUN_0019ae94(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  *param_2 = &PTR_FUN_001eb030;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return;
}


// ===== 0019aeac  FUN_0019aeac =====

void FUN_0019aeac(void)

{
  return;
}


// ===== 0019aeb0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019aeb4  FUN_0019aeb4 =====

void FUN_0019aeb4(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 0019aef4 to 0019af0b has its CatchHandler @ 0019af40 */
  FUN_0019ad50(&local_40,param_3,"dismissCount",param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019af78  FUN_0019af78 =====

long FUN_0019af78(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react26RNSModalScreenEventEmitter24onNativeDismissCancelledENS1_24OnNativeDismissCancelledEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0019af94  FUN_0019af94 =====

pointer_____offset_0x10___ * FUN_0019af94(void)

{
  return &PTR_vtable_001eb090;
}


// ===== 0019afa0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019afa4  FUN_0019afa4 =====

void FUN_0019afa4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_001eb0b0;
  return;
}


// ===== 0019afc8  FUN_0019afc8 =====

void FUN_0019afc8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_001eb0b0;
  return;
}


// ===== 0019afd8  FUN_0019afd8 =====

void FUN_0019afd8(void)

{
  return;
}


// ===== 0019afdc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019afe0  FUN_0019afe0 =====

void FUN_0019afe0(undefined4 *param_1,undefined8 param_2,long *param_3)

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


// ===== 0019b048  FUN_0019b048 =====

long FUN_0019b048(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react26RNSModalScreenEventEmitter12onWillAppearENS1_12OnWillAppearEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0019b064  FUN_0019b064 =====

pointer_____offset_0x10___ * FUN_0019b064(void)

{
  return &PTR_vtable_001eb110;
}


// ===== 0019b070  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019b074  FUN_0019b074 =====

void FUN_0019b074(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_001eb130;
  return;
}


// ===== 0019b098  FUN_0019b098 =====

void FUN_0019b098(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_001eb130;
  return;
}


// ===== 0019b0a8  FUN_0019b0a8 =====

void FUN_0019b0a8(void)

{
  return;
}


// ===== 0019b0ac  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019b0b0  FUN_0019b0b0 =====

void FUN_0019b0b0(undefined4 *param_1,undefined8 param_2,long *param_3)

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


// ===== 0019b118  FUN_0019b118 =====

long FUN_0019b118(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react26RNSModalScreenEventEmitter15onWillDisappearENS1_15OnWillDisappearEE3$_0")
  {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0019b134  FUN_0019b134 =====

pointer_____offset_0x10___ * FUN_0019b134(void)

{
  return &PTR_vtable_001eb190;
}


// ===== 0019b140  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019b144  FUN_0019b144 =====

void FUN_0019b144(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_001eb1b0;
  puVar1[1] = uVar2;
  return;
}


// ===== 0019b178  FUN_0019b178 =====

void FUN_0019b178(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_001eb1b0;
  param_2[1] = uVar1;
  return;
}


// ===== 0019b18c  FUN_0019b18c =====

void FUN_0019b18c(void)

{
  return;
}


// ===== 0019b190  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019b194  FUN_0019b194 =====

void FUN_0019b194(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 0019b1d4 to 0019b1eb has its CatchHandler @ 0019b220 */
  FUN_0019b280(&local_40,param_3,"headerHeight",param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019b258  FUN_0019b258 =====

long FUN_0019b258(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react26RNSModalScreenEventEmitter20onHeaderHeightChangeENS1_20OnHeaderHeightChangeEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0019b274  FUN_0019b274 =====

pointer_____offset_0x10___ * FUN_0019b274(void)

{
  return &PTR_vtable_001eb210;
}


// ===== 0019b280  FUN_0019b280 =====

void FUN_0019b280(undefined8 param_1,long *param_2,char *param_3,undefined8 *param_4)

{
  long lVar1;
  size_t sVar2;
  undefined8 *local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  sVar2 = strlen(param_3);
  (**(code **)(*param_2 + 0x108))(&local_60,param_2,param_3,sVar2);
  local_50 = *param_4;
  local_58[0] = 3;
                    /* try { // try from 0019b2f0 to 0019b303 has its CatchHandler @ 0019b348 */
  (**(code **)(*param_2 + 0x1b8))(param_2,param_1,&local_60,local_58);
  facebook::jsi::Value::~Value((Value *)local_58);
  if (local_60 != (undefined8 *)0x0) {
    (**(code **)*local_60)();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019b384  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019b388  FUN_0019b388 =====

void FUN_0019b388(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_001eb230;
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  return;
}


// ===== 0019b3c0  FUN_0019b3c0 =====

void FUN_0019b3c0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_001eb230;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}


// ===== 0019b3d8  FUN_0019b3d8 =====

void FUN_0019b3d8(void)

{
  return;
}


// ===== 0019b3dc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019b3e0  FUN_0019b3e0 =====

void FUN_0019b3e0(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 0019b420 to 0019b467 has its CatchHandler @ 0019b49c */
  FUN_0019b280(&local_40,param_3,"progress",param_2 + 8);
  FUN_0019ad50(&local_40,param_3,"closing",param_2 + 0x10);
  FUN_0019ad50(&local_40,param_3,"goingForward",param_2 + 0x14);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019b4d4  FUN_0019b4d4 =====

long FUN_0019b4d4(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react26RNSModalScreenEventEmitter20onTransitionProgressENS1_20OnTransitionProgressEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0019b4f0  FUN_0019b4f0 =====

pointer_____offset_0x10___ * FUN_0019b4f0(void)

{
  return &PTR_vtable_001eb290;
}


// ===== 0019b4fc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019b500  FUN_0019b500 =====

void FUN_0019b500(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_001eb2b0;
  return;
}


// ===== 0019b524  FUN_0019b524 =====

void FUN_0019b524(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_001eb2b0;
  return;
}


// ===== 0019b534  FUN_0019b534 =====

void FUN_0019b534(void)

{
  return;
}


// ===== 0019b538  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019b53c  FUN_0019b53c =====

void FUN_0019b53c(undefined4 *param_1,undefined8 param_2,long *param_3)

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


// ===== 0019b5a4  FUN_0019b5a4 =====

long FUN_0019b5a4(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react26RNSModalScreenEventEmitter15onGestureCancelENS1_15OnGestureCancelEE3$_0")
  {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0019b5c0  FUN_0019b5c0 =====

pointer_____offset_0x10___ * FUN_0019b5c0(void)

{
  return &PTR_vtable_001eb310;
}


// ===== 0019b5cc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019b5d0  FUN_0019b5d0 =====

void FUN_0019b5d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_001eb330;
  return;
}


// ===== 0019b5f4  FUN_0019b5f4 =====

void FUN_0019b5f4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_001eb330;
  return;
}


// ===== 0019b604  FUN_0019b604 =====

void FUN_0019b604(void)

{
  return;
}


// ===== 0019b608  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019b60c  FUN_0019b60c =====

void FUN_0019b60c(undefined4 *param_1,undefined8 param_2,long *param_3)

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


// ===== 0019b674  FUN_0019b674 =====

long FUN_0019b674(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react26RNSModalScreenEventEmitter25onHeaderBackButtonClickedENS1_25OnHeaderBackButtonClickedEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0019b690  FUN_0019b690 =====

pointer_____offset_0x10___ * FUN_0019b690(void)

{
  return &PTR_vtable_001eb390;
}


// ===== 0019b69c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019b6a0  FUN_0019b6a0 =====

void FUN_0019b6a0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_001eb3b0;
  puVar1[1] = uVar2;
  return;
}


// ===== 0019b6d4  FUN_0019b6d4 =====

void FUN_0019b6d4(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_001eb3b0;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return;
}


// ===== 0019b6ec  FUN_0019b6ec =====

void FUN_0019b6ec(void)

{
  return;
}


// ===== 0019b6f0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019b6f4  FUN_0019b6f4 =====

void FUN_0019b6f4(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 0019b734 to 0019b763 has its CatchHandler @ 0019b798 */
  FUN_0019ad50(&local_40,param_3,"index",param_2 + 8);
  FUN_0019b7f8(&local_40,param_3,"isStable",param_2 + 0xc);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019b7d0  FUN_0019b7d0 =====

long FUN_0019b7d0(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react26RNSModalScreenEventEmitter20onSheetDetentChangedENS1_20OnSheetDetentChangedEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0019b7ec  FUN_0019b7ec =====

pointer_____offset_0x10___ * FUN_0019b7ec(void)

{
  return &PTR_vtable_001eb410;
}


// ===== 0019b7f8  FUN_0019b7f8 =====

void FUN_0019b7f8(undefined8 param_1,long *param_2,char *param_3,undefined1 *param_4)

{
  long lVar1;
  size_t sVar2;
  undefined8 *local_60;
  undefined4 local_58 [2];
  undefined1 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  sVar2 = strlen(param_3);
  (**(code **)(*param_2 + 0x108))(&local_60,param_2,param_3,sVar2);
  local_50 = *param_4;
  local_58[0] = 2;
                    /* try { // try from 0019b868 to 0019b87b has its CatchHandler @ 0019b8c0 */
  (**(code **)(*param_2 + 0x1b8))(param_2,param_1,&local_60,local_58);
  facebook::jsi::Value::~Value((Value *)local_58);
  if (local_60 != (undefined8 *)0x0) {
    (**(code **)*local_60)();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019b8fc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019b900  FUN_0019b900 =====

void FUN_0019b900(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_001eb430;
  return;
}


// ===== 0019b924  FUN_0019b924 =====

void FUN_0019b924(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_001eb430;
  return;
}


// ===== 0019b934  FUN_0019b934 =====

void FUN_0019b934(void)

{
  return;
}


// ===== 0019b938  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019b93c  FUN_0019b93c =====

void FUN_0019b93c(undefined4 *param_1,undefined8 param_2,long *param_3)

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


// ===== 0019b9a4  FUN_0019b9a4 =====

long FUN_0019b9a4(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react21RNSScreenEventEmitter8onAppearENS1_8OnAppearEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0019b9c0  FUN_0019b9c0 =====

pointer_____offset_0x10___ * FUN_0019b9c0(void)

{
  return &PTR_vtable_001eb490;
}


// ===== 0019b9cc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019b9d0  FUN_0019b9d0 =====

void FUN_0019b9d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_001eb4b0;
  return;
}


// ===== 0019b9f4  FUN_0019b9f4 =====

void FUN_0019b9f4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_001eb4b0;
  return;
}


// ===== 0019ba04  FUN_0019ba04 =====

void FUN_0019ba04(void)

{
  return;
}


// ===== 0019ba08  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019ba0c  FUN_0019ba0c =====

void FUN_0019ba0c(undefined4 *param_1,undefined8 param_2,long *param_3)

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


// ===== 0019ba74  FUN_0019ba74 =====

long FUN_0019ba74(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react21RNSScreenEventEmitter11onDisappearENS1_11OnDisappearEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0019ba90  FUN_0019ba90 =====

pointer_____offset_0x10___ * FUN_0019ba90(void)

{
  return &PTR_vtable_001eb510;
}


// ===== 0019ba9c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019baa0  FUN_0019baa0 =====

void FUN_0019baa0(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar1 = *(undefined4 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_001eb530;
  *(undefined4 *)(puVar2 + 1) = uVar1;
  return;
}


// ===== 0019bad8  FUN_0019bad8 =====

void FUN_0019bad8(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  *param_2 = &PTR_FUN_001eb530;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return;
}


// ===== 0019baf0  FUN_0019baf0 =====

void FUN_0019baf0(void)

{
  return;
}


// ===== 0019baf4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019baf8  FUN_0019baf8 =====

void FUN_0019baf8(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 0019bb38 to 0019bb4f has its CatchHandler @ 0019bb84 */
  FUN_0019ad50(&local_40,param_3,"dismissCount",param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019bbbc  FUN_0019bbbc =====

long FUN_0019bbbc(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react21RNSScreenEventEmitter11onDismissedENS1_11OnDismissedEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0019bbd8  FUN_0019bbd8 =====

pointer_____offset_0x10___ * FUN_0019bbd8(void)

{
  return &PTR_vtable_001eb590;
}


// ===== 0019bbe4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019bbe8  FUN_0019bbe8 =====

void FUN_0019bbe8(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar1 = *(undefined4 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_001eb5b0;
  *(undefined4 *)(puVar2 + 1) = uVar1;
  return;
}


// ===== 0019bc20  FUN_0019bc20 =====

void FUN_0019bc20(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  *param_2 = &PTR_FUN_001eb5b0;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return;
}


// ===== 0019bc38  FUN_0019bc38 =====

void FUN_0019bc38(void)

{
  return;
}


// ===== 0019bc3c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019bc40  FUN_0019bc40 =====

void FUN_0019bc40(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 0019bc80 to 0019bc97 has its CatchHandler @ 0019bccc */
  FUN_0019ad50(&local_40,param_3,"dismissCount",param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019bd04  FUN_0019bd04 =====

long FUN_0019bd04(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react21RNSScreenEventEmitter24onNativeDismissCancelledENS1_24OnNativeDismissCancelledEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0019bd20  FUN_0019bd20 =====

pointer_____offset_0x10___ * FUN_0019bd20(void)

{
  return &PTR_vtable_001eb610;
}


// ===== 0019bd2c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019bd30  FUN_0019bd30 =====

void FUN_0019bd30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_001eb630;
  return;
}


// ===== 0019bd54  FUN_0019bd54 =====

void FUN_0019bd54(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_001eb630;
  return;
}


// ===== 0019bd64  FUN_0019bd64 =====

void FUN_0019bd64(void)

{
  return;
}


// ===== 0019bd68  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019bd6c  FUN_0019bd6c =====

void FUN_0019bd6c(undefined4 *param_1,undefined8 param_2,long *param_3)

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


// ===== 0019bdd4  FUN_0019bdd4 =====

long FUN_0019bdd4(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react21RNSScreenEventEmitter12onWillAppearENS1_12OnWillAppearEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0019bdf0  FUN_0019bdf0 =====

pointer_____offset_0x10___ * FUN_0019bdf0(void)

{
  return &PTR_vtable_001eb690;
}


// ===== 0019bdfc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019be00  FUN_0019be00 =====

void FUN_0019be00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_001eb6b0;
  return;
}


// ===== 0019be24  FUN_0019be24 =====

void FUN_0019be24(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_001eb6b0;
  return;
}


// ===== 0019be34  FUN_0019be34 =====

void FUN_0019be34(void)

{
  return;
}


// ===== 0019be38  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019be3c  FUN_0019be3c =====

void FUN_0019be3c(undefined4 *param_1,undefined8 param_2,long *param_3)

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


// ===== 0019bea4  FUN_0019bea4 =====

long FUN_0019bea4(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react21RNSScreenEventEmitter15onWillDisappearENS1_15OnWillDisappearEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0019bec0  FUN_0019bec0 =====

pointer_____offset_0x10___ * FUN_0019bec0(void)

{
  return &PTR_vtable_001eb710;
}


// ===== 0019becc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019bed0  FUN_0019bed0 =====

void FUN_0019bed0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_001eb730;
  puVar1[1] = uVar2;
  return;
}


// ===== 0019bf04  FUN_0019bf04 =====

void FUN_0019bf04(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_001eb730;
  param_2[1] = uVar1;
  return;
}


// ===== 0019bf18  FUN_0019bf18 =====

void FUN_0019bf18(void)

{
  return;
}


// ===== 0019bf1c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019bf20  FUN_0019bf20 =====

void FUN_0019bf20(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 0019bf60 to 0019bf77 has its CatchHandler @ 0019bfac */
  FUN_0019b280(&local_40,param_3,"headerHeight",param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019bfe4  FUN_0019bfe4 =====

long FUN_0019bfe4(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react21RNSScreenEventEmitter20onHeaderHeightChangeENS1_20OnHeaderHeightChangeEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0019c000  FUN_0019c000 =====

pointer_____offset_0x10___ * FUN_0019c000(void)

{
  return &PTR_vtable_001eb790;
}


// ===== 0019c00c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019c010  FUN_0019c010 =====

void FUN_0019c010(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_001eb7b0;
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  return;
}


// ===== 0019c048  FUN_0019c048 =====

void FUN_0019c048(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_001eb7b0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}


// ===== 0019c060  FUN_0019c060 =====

void FUN_0019c060(void)

{
  return;
}


// ===== 0019c064  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019c068  FUN_0019c068 =====

void FUN_0019c068(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 0019c0a8 to 0019c0ef has its CatchHandler @ 0019c124 */
  FUN_0019b280(&local_40,param_3,"progress",param_2 + 8);
  FUN_0019ad50(&local_40,param_3,"closing",param_2 + 0x10);
  FUN_0019ad50(&local_40,param_3,"goingForward",param_2 + 0x14);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019c15c  FUN_0019c15c =====

long FUN_0019c15c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react21RNSScreenEventEmitter20onTransitionProgressENS1_20OnTransitionProgressEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0019c178  FUN_0019c178 =====

pointer_____offset_0x10___ * FUN_0019c178(void)

{
  return &PTR_vtable_001eb810;
}


// ===== 0019c184  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019c188  FUN_0019c188 =====

void FUN_0019c188(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_001eb830;
  return;
}


// ===== 0019c1ac  FUN_0019c1ac =====

void FUN_0019c1ac(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_001eb830;
  return;
}


// ===== 0019c1bc  FUN_0019c1bc =====

void FUN_0019c1bc(void)

{
  return;
}


// ===== 0019c1c0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019c1c4  FUN_0019c1c4 =====

void FUN_0019c1c4(undefined4 *param_1,undefined8 param_2,long *param_3)

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


// ===== 0019c22c  FUN_0019c22c =====

long FUN_0019c22c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react21RNSScreenEventEmitter15onGestureCancelENS1_15OnGestureCancelEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0019c248  FUN_0019c248 =====

pointer_____offset_0x10___ * FUN_0019c248(void)

{
  return &PTR_vtable_001eb890;
}


// ===== 0019c254  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019c258  FUN_0019c258 =====

void FUN_0019c258(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_001eb8b0;
  return;
}


// ===== 0019c27c  FUN_0019c27c =====

void FUN_0019c27c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_001eb8b0;
  return;
}


// ===== 0019c28c  FUN_0019c28c =====

void FUN_0019c28c(void)

{
  return;
}


// ===== 0019c290  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019c294  FUN_0019c294 =====

void FUN_0019c294(undefined4 *param_1,undefined8 param_2,long *param_3)

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


// ===== 0019c2fc  FUN_0019c2fc =====

long FUN_0019c2fc(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react21RNSScreenEventEmitter25onHeaderBackButtonClickedENS1_25OnHeaderBackButtonClickedEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0019c318  FUN_0019c318 =====

pointer_____offset_0x10___ * FUN_0019c318(void)

{
  return &PTR_vtable_001eb910;
}


// ===== 0019c324  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019c328  FUN_0019c328 =====

void FUN_0019c328(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_001eb930;
  puVar1[1] = uVar2;
  return;
}


// ===== 0019c35c  FUN_0019c35c =====

void FUN_0019c35c(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_001eb930;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return;
}


// ===== 0019c374  FUN_0019c374 =====

void FUN_0019c374(void)

{
  return;
}


// ===== 0019c378  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019c37c  FUN_0019c37c =====

void FUN_0019c37c(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 0019c3bc to 0019c3eb has its CatchHandler @ 0019c420 */
  FUN_0019ad50(&local_40,param_3,"index",param_2 + 8);
  FUN_0019b7f8(&local_40,param_3,"isStable",param_2 + 0xc);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019c458  FUN_0019c458 =====

long FUN_0019c458(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react21RNSScreenEventEmitter20onSheetDetentChangedENS1_20OnSheetDetentChangedEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0019c474  FUN_0019c474 =====

pointer_____offset_0x10___ * FUN_0019c474(void)

{
  return &PTR_vtable_001eb990;
}


// ===== 0019c480  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019c484  FUN_0019c484 =====

void FUN_0019c484(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_001eb9b0;
  return;
}


// ===== 0019c4a8  FUN_0019c4a8 =====

void FUN_0019c4a8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_001eb9b0;
  return;
}


// ===== 0019c4b8  FUN_0019c4b8 =====

void FUN_0019c4b8(void)

{
  return;
}


// ===== 0019c4bc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019c4c0  FUN_0019c4c0 =====

void FUN_0019c4c0(undefined4 *param_1,undefined8 param_2,long *param_3)

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


// ===== 0019c528  FUN_0019c528 =====

long FUN_0019c528(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react38RNSScreenStackHeaderConfigEventEmitter10onAttachedENS1_10OnAttachedEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0019c544  FUN_0019c544 =====

pointer_____offset_0x10___ * FUN_0019c544(void)

{
  return &PTR_vtable_001eba10;
}


// ===== 0019c550  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019c554  FUN_0019c554 =====

void FUN_0019c554(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_001eba30;
  return;
}


// ===== 0019c578  FUN_0019c578 =====

void FUN_0019c578(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_001eba30;
  return;
}


// ===== 0019c588  FUN_0019c588 =====

void FUN_0019c588(void)

{
  return;
}


// ===== 0019c58c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019c590  FUN_0019c590 =====

void FUN_0019c590(undefined4 *param_1,undefined8 param_2,long *param_3)

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


// ===== 0019c5f8  FUN_0019c5f8 =====

long FUN_0019c5f8(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react38RNSScreenStackHeaderConfigEventEmitter10onDetachedENS1_10OnDetachedEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0019c614  FUN_0019c614 =====

pointer_____offset_0x10___ * FUN_0019c614(void)

{
  return &PTR_vtable_001eba90;
}


// ===== 0019c620  FUN_0019c620 =====

void FUN_0019c620(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_001ebab0;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 0019c640  FUN_0019c640 =====

void FUN_0019c640(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_001ebab0;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0019c680  FUN_0019c680 =====

undefined8 * FUN_0019c680(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_001ebab0;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 0019c6cc to 0019c6cf has its CatchHandler @ 0019c6e0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  return puVar2;
}


// ===== 0019c6f4  FUN_0019c6f4 =====

void FUN_0019c6f4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_001ebab0;
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


// ===== 0019c730  FUN_0019c730 =====

void FUN_0019c730(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 0019c744  FUN_0019c744 =====

void FUN_0019c744(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 0019c778  FUN_0019c778 =====

void FUN_0019c778(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 0019c7b8 to 0019c7cf has its CatchHandler @ 0019c804 */
  FUN_0019c864(&local_40,param_3,"buttonId",param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019c83c  FUN_0019c83c =====

long FUN_0019c83c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react38RNSScreenStackHeaderConfigEventEmitter26onPressHeaderBarButtonItemENS1_26OnPressHeaderBarButtonItemEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0019c858  FUN_0019c858 =====

pointer_____offset_0x10___ * FUN_0019c858(void)

{
  return &PTR_vtable_001ebb10;
}


// ===== 0019c864  FUN_0019c864 =====

void FUN_0019c864(undefined8 param_1,long *param_2,char *param_3,byte *param_4)

{
  ulong uVar1;
  byte *pbVar2;
  long lVar3;
  size_t sVar4;
  undefined8 *local_60;
  undefined4 local_58 [2];
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  sVar4 = strlen(param_3);
  (**(code **)(*param_2 + 0x108))(&local_60,param_2,param_3,sVar4);
  uVar1 = *(ulong *)(param_4 + 8);
  pbVar2 = *(byte **)(param_4 + 0x10);
  if ((*param_4 & 1) == 0) {
    pbVar2 = param_4 + 1;
    uVar1 = (ulong)(*param_4 >> 1);
  }
                    /* try { // try from 0019c8e0 to 0019c8eb has its CatchHandler @ 0019c964 */
  (**(code **)(*param_2 + 0x110))(auStack_50,param_2,pbVar2,uVar1);
  local_58[0] = 6;
                    /* try { // try from 0019c8fc to 0019c90f has its CatchHandler @ 0019c954 */
  (**(code **)(*param_2 + 0x1b8))(param_2,param_1,&local_60,local_58);
  facebook::jsi::Value::~Value((Value *)local_58);
  if (local_60 != (undefined8 *)0x0) {
    (**(code **)*local_60)();
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019c998  FUN_0019c998 =====

void FUN_0019c998(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_001ebb30;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 0019c9b8  FUN_0019c9b8 =====

void FUN_0019c9b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_001ebb30;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0019c9f8  FUN_0019c9f8 =====

undefined8 * FUN_0019c9f8(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_001ebb30;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 0019ca44 to 0019ca47 has its CatchHandler @ 0019ca58 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  return puVar2;
}


// ===== 0019ca6c  FUN_0019ca6c =====

void FUN_0019ca6c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_001ebb30;
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


// ===== 0019caa8  FUN_0019caa8 =====

void FUN_0019caa8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 0019cabc  FUN_0019cabc =====

void FUN_0019cabc(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 0019caf0  FUN_0019caf0 =====

void FUN_0019caf0(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 0019cb30 to 0019cb47 has its CatchHandler @ 0019cb7c */
  FUN_0019c864(&local_40,param_3,"menuId",param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019cbb4  FUN_0019cbb4 =====

long FUN_0019cbb4(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react38RNSScreenStackHeaderConfigEventEmitter30onPressHeaderBarButtonMenuItemENS1_30OnPressHeaderBarButtonMenuItemEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0019cbd0  FUN_0019cbd0 =====

pointer_____offset_0x10___ * FUN_0019cbd0(void)

{
  return &PTR_vtable_001ebb90;
}


// ===== 0019cbdc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019cbe0  FUN_0019cbe0 =====

void FUN_0019cbe0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_001ebbb0;
  return;
}


// ===== 0019cc04  FUN_0019cc04 =====

void FUN_0019cc04(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_001ebbb0;
  return;
}


// ===== 0019cc14  FUN_0019cc14 =====

void FUN_0019cc14(void)

{
  return;
}


// ===== 0019cc18  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019cc1c  FUN_0019cc1c =====

void FUN_0019cc1c(undefined4 *param_1,undefined8 param_2,long *param_3)

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


// ===== 0019cc84  FUN_0019cc84 =====

long FUN_0019cc84(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react26RNSScreenStackEventEmitter21onFinishTransitioningENS1_21OnFinishTransitioningEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0019cca0  FUN_0019cca0 =====

pointer_____offset_0x10___ * FUN_0019cca0(void)

{
  return &PTR_vtable_001ebc10;
}


// ===== 0019ccac  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019ccb0  FUN_0019ccb0 =====

void FUN_0019ccb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_001ebc30;
  return;
}


// ===== 0019ccd4  FUN_0019ccd4 =====

void FUN_0019ccd4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_001ebc30;
  return;
}


// ===== 0019cce4  FUN_0019cce4 =====

void FUN_0019cce4(void)

{
  return;
}


// ===== 0019cce8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019ccec  FUN_0019ccec =====

void FUN_0019ccec(undefined4 *param_1,undefined8 param_2,long *param_3)

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


// ===== 0019cd54  FUN_0019cd54 =====

long FUN_0019cd54(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react24RNSSearchBarEventEmitter13onSearchFocusENS1_13OnSearchFocusEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0019cd70  FUN_0019cd70 =====

pointer_____offset_0x10___ * FUN_0019cd70(void)

{
  return &PTR_vtable_001ebc90;
}


// ===== 0019cd7c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019cd80  FUN_0019cd80 =====

void FUN_0019cd80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_001ebcb0;
  return;
}


// ===== 0019cda4  FUN_0019cda4 =====

void FUN_0019cda4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_001ebcb0;
  return;
}


// ===== 0019cdb4  FUN_0019cdb4 =====

void FUN_0019cdb4(void)

{
  return;
}


// ===== 0019cdb8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019cdbc  FUN_0019cdbc =====

void FUN_0019cdbc(undefined4 *param_1,undefined8 param_2,long *param_3)

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


// ===== 0019ce24  FUN_0019ce24 =====

long FUN_0019ce24(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react24RNSSearchBarEventEmitter12onSearchBlurENS1_12OnSearchBlurEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0019ce40  FUN_0019ce40 =====

pointer_____offset_0x10___ * FUN_0019ce40(void)

{
  return &PTR_vtable_001ebd10;
}


// ===== 0019ce4c  FUN_0019ce4c =====

void FUN_0019ce4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_001ebd30;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 0019ce6c  FUN_0019ce6c =====

void FUN_0019ce6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_001ebd30;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0019ceac  FUN_0019ceac =====

undefined8 * FUN_0019ceac(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_001ebd30;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 0019cef8 to 0019cefb has its CatchHandler @ 0019cf0c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  return puVar2;
}


// ===== 0019cf20  FUN_0019cf20 =====

void FUN_0019cf20(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_001ebd30;
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


// ===== 0019cf5c  FUN_0019cf5c =====

void FUN_0019cf5c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 0019cf70  FUN_0019cf70 =====

void FUN_0019cf70(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 0019cfa4  FUN_0019cfa4 =====

void FUN_0019cfa4(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 0019cfe4 to 0019cffb has its CatchHandler @ 0019d030 */
  FUN_0019c864(&local_40,param_3,&DAT_0013f201,param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019d068  FUN_0019d068 =====

long FUN_0019d068(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react24RNSSearchBarEventEmitter19onSearchButtonPressENS1_19OnSearchButtonPressEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0019d084  FUN_0019d084 =====

pointer_____offset_0x10___ * FUN_0019d084(void)

{
  return &PTR_vtable_001ebd90;
}


// ===== 0019d090  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019d094  FUN_0019d094 =====

void FUN_0019d094(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_001ebdb0;
  return;
}


// ===== 0019d0b8  FUN_0019d0b8 =====

void FUN_0019d0b8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_001ebdb0;
  return;
}


// ===== 0019d0c8  FUN_0019d0c8 =====

void FUN_0019d0c8(void)

{
  return;
}


// ===== 0019d0cc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019d0d0  FUN_0019d0d0 =====

void FUN_0019d0d0(undefined4 *param_1,undefined8 param_2,long *param_3)

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


// ===== 0019d138  FUN_0019d138 =====

long FUN_0019d138(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react24RNSSearchBarEventEmitter19onCancelButtonPressENS1_19OnCancelButtonPressEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0019d154  FUN_0019d154 =====

pointer_____offset_0x10___ * FUN_0019d154(void)

{
  return &PTR_vtable_001ebe10;
}


// ===== 0019d160  FUN_0019d160 =====

void FUN_0019d160(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_001ebe30;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 0019d180  FUN_0019d180 =====

void FUN_0019d180(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_001ebe30;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0019d1c0  FUN_0019d1c0 =====

undefined8 * FUN_0019d1c0(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  bVar1 = *(byte *)(param_1 + 8);
  *puVar2 = &PTR_FUN_001ebe30;
  if ((bVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar4;
    puVar2[3] = uVar3;
  }
  else {
                    /* try { // try from 0019d20c to 0019d20f has its CatchHandler @ 0019d220 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  return puVar2;
}


// ===== 0019d234  FUN_0019d234 =====

void FUN_0019d234(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_001ebe30;
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


// ===== 0019d270  FUN_0019d270 =====

void FUN_0019d270(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 0019d284  FUN_0019d284 =====

void FUN_0019d284(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}


// ===== 0019d2b8  FUN_0019d2b8 =====

void FUN_0019d2b8(undefined4 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_40,param_3);
                    /* try { // try from 0019d2f8 to 0019d30f has its CatchHandler @ 0019d344 */
  FUN_0019c864(&local_40,param_3,&DAT_0013f201,param_2 + 8);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019d37c  FUN_0019d37c =====

long FUN_0019d37c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react24RNSSearchBarEventEmitter12onChangeTextENS1_12OnChangeTextEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0019d398  FUN_0019d398 =====

pointer_____offset_0x10___ * FUN_0019d398(void)

{
  return &PTR_vtable_001ebe90;
}


// ===== 0019d3a4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019d3a8  FUN_0019d3a8 =====

void FUN_0019d3a8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_001ebeb0;
  return;
}


// ===== 0019d3cc  FUN_0019d3cc =====

void FUN_0019d3cc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_001ebeb0;
  return;
}


// ===== 0019d3dc  FUN_0019d3dc =====

void FUN_0019d3dc(void)

{
  return;
}


// ===== 0019d3e0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019d3e4  FUN_0019d3e4 =====

void FUN_0019d3e4(undefined4 *param_1,undefined8 param_2,long *param_3)

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


// ===== 0019d44c  FUN_0019d44c =====

long FUN_0019d44c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react24RNSSearchBarEventEmitter7onCloseENS1_7OnCloseEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0019d468  FUN_0019d468 =====

pointer_____offset_0x10___ * FUN_0019d468(void)

{
  return &PTR_vtable_001ebf10;
}


// ===== 0019d474  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019d478  FUN_0019d478 =====

void FUN_0019d478(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_001ebf30;
  return;
}


// ===== 0019d49c  FUN_0019d49c =====

void FUN_0019d49c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_001ebf30;
  return;
}


// ===== 0019d4ac  FUN_0019d4ac =====

void FUN_0019d4ac(void)

{
  return;
}


// ===== 0019d4b0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019d4b4  FUN_0019d4b4 =====

void FUN_0019d4b4(undefined4 *param_1,undefined8 param_2,long *param_3)

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


// ===== 0019d51c  FUN_0019d51c =====

long FUN_0019d51c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react24RNSSearchBarEventEmitter6onOpenENS1_6OnOpenEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0019d538  FUN_0019d538 =====

pointer_____offset_0x10___ * FUN_0019d538(void)

{
  return &PTR_vtable_001ebf90;
}


// ===== 0019d544  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019d548  FUN_0019d548 =====

void FUN_0019d548(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_001ebfb0;
  return;
}


// ===== 0019d56c  FUN_0019d56c =====

void FUN_0019d56c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_001ebfb0;
  return;
}


// ===== 0019d57c  FUN_0019d57c =====

void FUN_0019d57c(void)

{
  return;
}


// ===== 0019d580  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


// ===== 0019d584  FUN_0019d584 =====

void FUN_0019d584(undefined4 *param_1,undefined8 param_2,long *param_3)

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


// ===== 0019d5ec  FUN_0019d5ec =====

long FUN_0019d5ec(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react28RNSFormSheetHostEventEmitter12onWillAppearENS1_12OnWillAppearEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0019d608  FUN_0019d608 =====

pointer_____offset_0x10___ * FUN_0019d608(void)

{
  return &PTR_vtable_001ec010;
}


// ===== 0019d614  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001f0ff0)();
  return;
}


