// ===== 00ab6b44  FUN_00ab6b44 =====

void FUN_00ab6b44(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_00ab1ce0(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
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


// ===== 00ab6bd0  FUN_00ab6bd0 =====

void FUN_00ab6bd0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[5];
  *param_1 = &PTR_FUN_00b00778;
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_00ab1ce0(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
  {
    plVar4 = (long *)param_1[3];
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
    plVar4 = (long *)param_1[3];
  }
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_00ab1ce0(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
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


// ===== 00ab6cb4  FUN_00ab6cb4 =====

void FUN_00ab6cb4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[5];
  *param_1 = &PTR_FUN_00b00778;
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00ab1ce0(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = (long *)param_1[3];
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00ab1ce0(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
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


// ===== 00ab6d70  FUN_00ab6d70 =====

undefined8 * FUN_00ab6d70(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x18);
  *puVar2 = &PTR_FUN_00b00778;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  puVar2[3] = lVar4;
  if (lVar4 != 0) {
    FUN_00ab1cb0(1,lVar4 + 8);
  }
  lVar4 = *(long *)(param_1 + 0x28);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = lVar4;
  if (lVar4 != 0) {
    FUN_00ab1cb0(1,lVar4 + 8);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab6e10  FUN_00ab6e10 =====

void FUN_00ab6e10(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00b00778;
  param_2[2] = uVar5;
  param_2[1] = uVar4;
  lVar3 = *(long *)(param_1 + 0x18);
  param_2[3] = lVar3;
  if (lVar3 != 0) {
    FUN_00ab1cb0(1,lVar3 + 8);
  }
  lVar3 = *(long *)(param_1 + 0x28);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[5] = lVar3;
  if (lVar3 != 0) {
    FUN_00ab1cb0(1,lVar3 + 8);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab6ea4  FUN_00ab6ea4 =====

void FUN_00ab6ea4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x28);
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_00ab1ce0(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
  {
    plVar4 = *(long **)(param_1 + 0x18);
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
    plVar4 = *(long **)(param_1 + 0x18);
  }
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_00ab1ce0(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
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


// ===== 00ab6f7c  FUN_00ab6f7c =====

void FUN_00ab6f7c(void *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)((long)param_1 + 0x28);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00ab1ce0(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = *(long **)((long)param_1 + 0x18);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00ab1ce0(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
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


// ===== 00ab702c  FUN_00ab702c =====

void FUN_00ab702c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((**(byte **)(param_1 + 0x20) & 1) == 0) {
    invalidate_libdiscore_jsi(*(undefined8 *)(param_1 + 8));
    param_1 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      std::__ndk1::promise<void>::set_value();
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar2) {
    fwrite("[libdiscore] tearDownJSIFunctionsOnJsThread: block ran post-timeout, skipping\n",0x4e,1,
           *(FILE **)PTR_stderr_00b00aa8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00ab70c4  FUN_00ab70c4 =====

void FUN_00ab70c4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZN21libdiscorernjsimodule30tearDownJSIFunctionsOnJsThreadERN8facebook3jsi7RuntimeENSt6__ndk110shared_ptrINS0_5react11CallInvokerEEEE3$_0"
     ) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00ab7114  FUN_00ab7114 =====

pointer_____offset_0x10___ * FUN_00ab7114(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_00b007d8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab7154  FUN_00ab7154 =====

void FUN_00ab7154(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_00b00728;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab7198  FUN_00ab7198 =====

void FUN_00ab7198(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_00b00728;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab71f0  FUN_00ab71f0 =====

void FUN_00ab71f0(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    std::__ndk1::promise<void>::~promise((promise<void> *)(param_1 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab722c  FUN_00ab722c =====

void FUN_00ab722c(void *param_1)

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


// ===== 00ab7264  FUN_00ab7264 =====

void FUN_00ab7264(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_00b006d8;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab72a8  FUN_00ab72a8 =====

void FUN_00ab72a8(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_00b006d8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab7300  FUN_00ab7300 =====

void FUN_00ab7300(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab7338  FUN_00ab7338 =====

void FUN_00ab7338(void *param_1)

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


// ===== 00ab7370  libdiscorernjsimodule::getConfigTreatmentId =====

/* WARNING: Unknown calling convention: __rustcall */
/* libdiscorernjsimodule::getConfigTreatmentId */

void __rustcall libdiscorernjsimodule::getConfigTreatmentId(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    get_config_treatment_id();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab73a8  libdiscorernjsimodule::installSentryReporter =====

/* WARNING: Unknown calling convention: __rustcall */
/* libdiscorernjsimodule::installSentryReporter */

void __rustcall libdiscorernjsimodule::installSentryReporter(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    libdiscore_install_sentry_reporter();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab73e0  JNI_OnLoad =====

undefined4 JNI_OnLoad(undefined8 param_1)

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
  local_60[0] = &PTR_FUN_00b007f8;
  uVar2 = facebook::jni::facebook::jni::initialize(param_1,local_60);
  if ((undefined ***)local_40 == local_60) {
    lVar4 = 4;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_00ab744c;
    lVar4 = 5;
    pppuVar3 = (undefined ***)local_40;
  }
  (**(code **)((long)*pppuVar3 + lVar4 * 8))(pppuVar3);
LAB_00ab744c:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab7474  FUN_00ab7474 =====

void FUN_00ab7474(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab74ac  FUN_00ab74ac =====

void FUN_00ab74ac(void *param_1)

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


// ===== 00ab74e4  FUN_00ab74e4 =====

void FUN_00ab74e4(void)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    puVar2 = (undefined8 *)operator_new(0x10);
    *puVar2 = &PTR_FUN_00b007f8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab7530  FUN_00ab7530 =====

void FUN_00ab7530(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_00b007f8;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab7574  FUN_00ab7574 =====

void FUN_00ab7574(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab75ac  FUN_00ab75ac =====

void FUN_00ab75ac(void *param_1)

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


// ===== 00ab75e4  FUN_00ab75e4 =====

void FUN_00ab75e4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab761c  FUN_00ab761c =====

void FUN_00ab761c(long param_1,long param_2)

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


// ===== 00ab766c  FUN_00ab766c =====

pointer_____offset_0x10___ * FUN_00ab766c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return &PTR_vtable_00b00868;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab76ac  Java_com_discord_libdiscore_LibdiscoreModuleClass_00024LibdiscoreModule_jniInstallSentryReporter =====

void Java_com_discord_libdiscore_LibdiscoreModuleClass_00024LibdiscoreModule_jniInstallSentryReporter
               (void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    libdiscore_install_sentry_reporter(FUN_00ab76f4,FUN_00ab79ec);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab76f4  FUN_00ab76f4 =====

char * FUN_00ab76f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  int iVar7;
  undefined8 uVar8;
  char *pcVar9;
  long *plVar10;
  undefined8 uVar11;
  ThreadScope aTStack_a0 [24];
  byte local_88 [16];
  char *local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00ab7728 to 00ab772f has its CatchHandler @ 00ab7994 */
  facebook::jni::ThreadScope::ThreadScope(aTStack_a0);
                    /* try { // try from 00ab7730 to 00ab773b has its CatchHandler @ 00ab798c */
  facebook::jni::facebook::jni::make_jstring(&local_58,param_1);
  lVar5 = local_58;
                    /* try { // try from 00ab7740 to 00ab774b has its CatchHandler @ 00ab7984 */
  facebook::jni::facebook::jni::make_jstring(&local_60,param_2);
  lVar4 = local_60;
                    /* try { // try from 00ab7750 to 00ab775b has its CatchHandler @ 00ab797c */
  facebook::jni::facebook::jni::make_jstring(&local_68,param_3);
  lVar3 = local_68;
                    /* try { // try from 00ab7760 to 00ab776b has its CatchHandler @ 00ab7974 */
  facebook::jni::facebook::jni::make_jstring(&local_70,param_4);
  lVar2 = local_70;
  if (((*PTR_method_00b00ab8 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_method_00b00ab8), iVar7 != 0)) {
                    /* try { // try from 00ab78dc to 00ab78eb has its CatchHandler @ 00ab794c */
    FUN_00ab7ca4(local_88);
    uVar8 = FUN_00ab7e7c(local_88);
    *(undefined8 *)PTR_method_00b00ab0 = uVar8;
    __cxa_guard_release(PTR_method_00b00ab8);
  }
  if (((*PTR_cls_00b00ac8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_cls_00b00ac8), iVar7 != 0))
  {
                    /* try { // try from 00ab7918 to 00ab792b has its CatchHandler @ 00ab7940 */
    facebook::jni::facebook::jni::findClassStatic(PTR_cls_00b00ac0,PTR_kBaseName_00b00ad0);
    __cxa_guard_release(PTR_cls_00b00ac8);
  }
  uVar11 = *(undefined8 *)PTR_cls_00b00ac0;
                    /* try { // try from 00ab779c to 00ab77cb has its CatchHandler @ 00ab79ac */
  uVar8 = facebook::jni::Environment::facebook::jni::Environment::current();
  pcVar9 = (char *)_JNIEnv::CallStaticObjectMethod
                             (uVar8,uVar11,*(undefined8 *)PTR_method_00b00ab0,lVar5,lVar4,lVar3,
                              lVar2);
  facebook::jni::facebook::jni::throwPendingJniExceptionAsCppException();
  local_50 = pcVar9;
  if (local_70 != 0) {
                    /* try { // try from 00ab77d8 to 00ab77eb has its CatchHandler @ 00ab79a8 */
    plVar10 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
    (**(code **)(*plVar10 + 0xb8))(plVar10,local_70);
  }
  if (local_68 != 0) {
                    /* try { // try from 00ab77f4 to 00ab7807 has its CatchHandler @ 00ab79a4 */
    plVar10 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
    (**(code **)(*plVar10 + 0xb8))(plVar10,local_68);
  }
  if (local_60 != 0) {
                    /* try { // try from 00ab7810 to 00ab7823 has its CatchHandler @ 00ab79a0 */
    plVar10 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
    (**(code **)(*plVar10 + 0xb8))(plVar10,local_60);
  }
  if (local_58 != 0) {
                    /* try { // try from 00ab782c to 00ab783f has its CatchHandler @ 00ab799c */
    plVar10 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
    (**(code **)(*plVar10 + 0xb8))(plVar10,local_58);
  }
  if (pcVar9 != (char *)0x0) {
                    /* try { // try from 00ab7844 to 00ab7853 has its CatchHandler @ 00ab7964 */
    facebook::jni::JString::toStdString();
    pcVar9 = (char *)((ulong)local_88 | 1);
    if ((local_88[0] & 1) != 0) {
      pcVar9 = local_78;
    }
    pcVar9 = strdup(pcVar9);
    if ((local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
    pcVar6 = local_50;
    if (local_50 != (char *)0x0) {
                    /* try { // try from 00ab7884 to 00ab7897 has its CatchHandler @ 00ab7970 */
      plVar10 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
      (**(code **)(*plVar10 + 0xb8))(plVar10,pcVar6);
    }
  }
  facebook::jni::ThreadScope::~ThreadScope(aTStack_a0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return pcVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab79ec  FUN_00ab79ec =====

void FUN_00ab79ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  ThreadScope aTStack_80 [24];
  long local_68;
  long local_60;
  long local_58;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00ab7a1c to 00ab7a23 has its CatchHandler @ 00ab7bdc */
  facebook::jni::ThreadScope::ThreadScope(aTStack_80);
                    /* try { // try from 00ab7a24 to 00ab7a2f has its CatchHandler @ 00ab7bd4 */
  facebook::jni::facebook::jni::make_jstring(&local_58,param_1);
  lVar4 = local_58;
                    /* try { // try from 00ab7a34 to 00ab7a3f has its CatchHandler @ 00ab7bcc */
  facebook::jni::facebook::jni::make_jstring(&local_60,param_2);
  lVar3 = local_60;
                    /* try { // try from 00ab7a44 to 00ab7a4f has its CatchHandler @ 00ab7bc4 */
  facebook::jni::facebook::jni::make_jstring(&local_68,param_3);
  lVar2 = local_68;
  if (((*PTR_method_00b00ae8 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_method_00b00ae8), iVar5 != 0)) {
                    /* try { // try from 00ab7b40 to 00ab7b4f has its CatchHandler @ 00ab7bac */
    FUN_00ab7ca4(auStack_50);
    uVar6 = FUN_00ab7d64(auStack_50);
    *(undefined8 *)PTR_method_00b00ae0 = uVar6;
    __cxa_guard_release(PTR_method_00b00ae8);
  }
  if (((*PTR_cls_00b00ac8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_cls_00b00ac8), iVar5 != 0))
  {
                    /* try { // try from 00ab7b7c to 00ab7b8f has its CatchHandler @ 00ab7ba0 */
    facebook::jni::facebook::jni::findClassStatic(PTR_cls_00b00ac0,PTR_kBaseName_00b00ad0);
    __cxa_guard_release(PTR_cls_00b00ac8);
  }
  uVar8 = *(undefined8 *)PTR_cls_00b00ac0;
                    /* try { // try from 00ab7a80 to 00ab7aa7 has its CatchHandler @ 00ab7bf0 */
  uVar6 = facebook::jni::Environment::facebook::jni::Environment::current();
  _JNIEnv::CallStaticVoidMethod(uVar6,uVar8,*(undefined8 *)PTR_method_00b00ae0,lVar4,lVar3,lVar2);
  facebook::jni::facebook::jni::throwPendingJniExceptionAsCppException();
  if (local_68 != 0) {
                    /* try { // try from 00ab7ab0 to 00ab7ac3 has its CatchHandler @ 00ab7bec */
    plVar7 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb8))(plVar7,local_68);
  }
  if (local_60 != 0) {
                    /* try { // try from 00ab7acc to 00ab7adf has its CatchHandler @ 00ab7be8 */
    plVar7 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb8))(plVar7,local_60);
  }
  if (local_58 != 0) {
                    /* try { // try from 00ab7ae8 to 00ab7afb has its CatchHandler @ 00ab7be4 */
    plVar7 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb8))(plVar7,local_58);
  }
  facebook::jni::ThreadScope::~ThreadScope(aTStack_80);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab7c24  FUN_00ab7c24 =====

void FUN_00ab7c24(void)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  __cxa_begin_catch();
  plVar2 = (long *)std::terminate();
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  lVar5 = *plVar2;
  if (lVar5 != 0) {
    plVar3 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb8))(plVar3,lVar5);
  }
  *plVar2 = 0;
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab7c34  facebook::jni::base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

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
                    /* try { // try from 00ab7c60 to 00ab7c73 has its CatchHandler @ 00ab7ca0 */
    plVar2 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar4);
  }
  *(undefined8 *)this = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab7ca4  FUN_00ab7ca4 =====

void FUN_00ab7ca4(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_00b00ac8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00b00ac8), iVar2 != 0))
  {
                    /* try { // try from 00ab7d14 to 00ab7d27 has its CatchHandler @ 00ab7d38 */
    facebook::jni::facebook::jni::findClassStatic(PTR_cls_00b00ac0,PTR_kBaseName_00b00ad0);
    __cxa_guard_release(PTR_cls_00b00ac8);
  }
  *param_1 = *(undefined8 *)PTR_cls_00b00ac0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab7d64  FUN_00ab7d64 =====

long FUN_00ab7d64(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x388))
                    (plVar2,*param_1,"libdiscoreAddBreadcrumb",PTR_kDescriptor_00b00af0);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::facebook::jni::throwCppExceptionIf();
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3 == 0);
}


// ===== 00ab7de0  _JNIEnv::CallStaticVoidMethod =====

/* WARNING: Unknown calling convention: __rustcall */
/* _JNIEnv::CallStaticVoidMethod */

void __rustcall
_JNIEnv::CallStaticVoidMethod
          (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
          ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  (**(code **)(*param_1 + 0x470))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab7e7c  FUN_00ab7e7c =====

long FUN_00ab7e7c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x388))
                    (plVar2,*param_1,"libdiscoreEmitRustPanic",PTR_kDescriptor_00b00ad8);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::facebook::jni::throwCppExceptionIf();
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3 == 0);
}


// ===== 00ab7ef8  _JNIEnv::CallStaticObjectMethod =====

/* WARNING: Unknown calling convention: __rustcall */
/* _JNIEnv::CallStaticObjectMethod */

void __rustcall
_JNIEnv::CallStaticObjectMethod
          (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
          ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  (**(code **)(*param_1 + 0x398))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab7f94  Java_com_discord_libdiscore_LibdiscoreModuleClass_jniInitLibDiscore =====

void Java_com_discord_libdiscore_LibdiscoreModuleClass_jniInitLibDiscore
               (long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*param_1 + 0x548))(param_1,param_3,0);
  init_libdiscore();
  if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00ab800c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x550))(param_1,param_3,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab8014  Java_com_discord_libdiscore_LibdiscoreModuleClass_00024LibdiscoreModule_jniBridgeJSIFunctions =====

void Java_com_discord_libdiscore_LibdiscoreModuleClass_00024LibdiscoreModule_jniBridgeJSIFunctions
               (void)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  bad_alloc *this;
  long in_x3;
  long in_x4;
  undefined8 local_58;
  long *local_50;
  long local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (in_x3 != 0) {
    if (in_x4 != 0) {
      plVar4 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
      in_x4 = (**(code **)(*plVar4 + 200))(plVar4,in_x4);
      facebook::jni::facebook::jni::throwPendingJniExceptionAsCppException();
      if (in_x4 == 0) {
        this = (bad_alloc *)__cxa_allocate_exception(8);
        if (*(long *)(lVar1 + 0x28) == local_38) {
          std::bad_alloc::bad_alloc(this);
          uVar7 = __cxa_throw(this,PTR_typeinfo_00b00b70,PTR__bad_alloc_00b00b68);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ab818c with catch @ 00ab81ec
                        */
          facebook::jni::
          base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
          ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
                           *)&local_40);
          __cxa_guard_abort(PTR_hybridDataField_00b00b00);
          FUN_00ab863c(&local_48);
          if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
            FUN_00ab2530(uVar7);
          }
        }
        goto LAB_00ab8248;
      }
    }
    local_48 = in_x4;
    if (((*PTR_hybridDataField_00b00b00 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_hybridDataField_00b00b00), iVar3 != 0)) {
      facebook::jni::JObject::getClass();
                    /* try { // try from 00ab818c to 00ab818f has its CatchHandler @ 00ab81ec */
      uVar7 = FUN_00ab82bc(local_40);
      *(undefined8 *)PTR_hybridDataField_00b00af8 = uVar7;
      facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
      ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
                       *)&local_40);
      __cxa_guard_release(PTR_hybridDataField_00b00b00);
    }
                    /* try { // try from 00ab8078 to 00ab8087 has its CatchHandler @ 00ab8224 */
    lVar5 = facebook::jni::getHybridDataFromField(&local_48,PTR_hybridDataField_00b00af8);
    local_58 = *(undefined8 *)(lVar5 + 8);
    plVar4 = *(long **)(lVar5 + 0x10);
    if (plVar4 == (long *)0x0) {
      local_50 = (long *)0x0;
    }
    else {
      FUN_00ab1cb0(1,plVar4 + 1);
      local_50 = plVar4;
      FUN_00ab1cb0(1,plVar4 + 1);
    }
                    /* try { // try from 00ab80b8 to 00ab80c3 has its CatchHandler @ 00ab8208 */
    register_libdiscore_jsi(in_x3,&local_58);
    plVar2 = local_50;
    if ((local_50 != (long *)0x0) &&
       (lVar5 = FUN_00ab1ce0(0xffffffffffffffff,local_50 + 1), lVar5 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    lVar5 = local_48;
    if ((plVar4 != (long *)0x0) &&
       (lVar6 = FUN_00ab1ce0(0xffffffffffffffff,plVar4 + 1), lVar5 = local_48, lVar6 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__ndk1::__shared_weak_count::__release_weak();
      lVar5 = local_48;
    }
    local_48 = lVar5;
    if (lVar5 != 0) {
                    /* try { // try from 00ab8110 to 00ab8123 has its CatchHandler @ 00ab824c */
      plVar4 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
      (**(code **)(*plVar4 + 0xb8))(plVar4,lVar5);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_00ab8248:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab8250  facebook::jni::JObject::getClass =====

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
                    /* try { // try from 00ab8278 to 00ab828b has its CatchHandler @ 00ab82b8 */
  plVar2 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
  uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2,*in_x0);
  *in_x8 = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab82bc  FUN_00ab82bc =====

void FUN_00ab82bc(undefined8 param_1)

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
    if (((*PTR_cls_00b00b28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_cls_00b00b28), iVar2 != 0)) {
                    /* try { // try from 00ab8378 to 00ab838b has its CatchHandler @ 00ab83b0 */
      facebook::jni::facebook::jni::findClassStatic(PTR_cls_00b00b20,PTR_kBaseName_00b00b30);
      __cxa_guard_release(PTR_cls_00b00b28);
    }
    uVar6 = *(undefined8 *)PTR_cls_00b00b20;
    plVar5 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
    lVar4 = (**(code **)(*plVar5 + 0x2f0))(plVar5,uVar6,"mHybridData",PTR_kDescriptor_00b00b38);
    facebook::jni::facebook::jni::throwCppExceptionIf(lVar4 == 0);
    if (lVar4 == 0) {
      if (*(long *)(lVar1 + 0x28) == local_28) {
        uVar6 = facebook::jni::throwNPE(0);
                    /* catch() { ... } // from try @ 00ab8378 with catch @ 00ab83b0 */
        lVar4 = __cxa_guard_abort(PTR_cls_00b00b28);
        if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
          FUN_00ab2530(uVar6);
        }
      }
      goto LAB_00ab83d8;
    }
  }
  else {
    lVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
LAB_00ab83d8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


// ===== 00ab83dc  facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

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
                    /* try { // try from 00ab8408 to 00ab841b has its CatchHandler @ 00ab8448 */
    plVar2 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar4);
  }
  *(undefined8 *)this = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab844c  facebook::jni::getHybridDataFromField =====

/* WARNING: Unknown calling convention: __rustcall */
/* facebook::jni::getHybridDataFromField */

undefined8 __rustcall facebook::jni::getHybridDataFromField(detail *param_1,JObject *param_2)

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
    detail::getHolder<facebook::jni::JObject>(param_1,param_2);
                    /* try { // try from 00ab84f4 to 00ab84fb has its CatchHandler @ 00ab8558 */
    uVar4 = facebook::jni::detail::HybridDestructor::getNativePointer();
    if (local_40 != 0) {
                    /* try { // try from 00ab8508 to 00ab851b has its CatchHandler @ 00ab8568 */
      plVar2 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
      (**(code **)(*plVar2 + 0xb8))(plVar2,local_40);
    }
  }
  else {
    uVar4 = *(undefined8 *)param_1;
                    /* try { // try from 00ab8478 to 00ab848f has its CatchHandler @ 00ab85ac */
    plVar2 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
    auVar5 = (**(code **)(*plVar2 + 0x2f8))(plVar2,uVar4,lVar3);
    local_48 = auVar5._0_8_;
    if (local_48 == 0) {
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00ab8554 to 00ab8557 has its CatchHandler @ 00ab8584 */
        uVar4 = throwNPE();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ab84f4 with catch @ 00ab8558
                        */
        base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
        ::~base_owned_ref((base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
                           *)&local_40);
        if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00ab2530(uVar4);
        }
      }
      goto LAB_00ab85a8;
    }
                    /* try { // try from 00ab8498 to 00ab84a3 has its CatchHandler @ 00ab8584 */
    detail::getHolder<facebook::jni::detail::HybridData>((detail *)&local_48,auVar5._8_8_);
                    /* try { // try from 00ab84a4 to 00ab84ab has its CatchHandler @ 00ab856c */
    uVar4 = facebook::jni::detail::HybridDestructor::getNativePointer();
    if (local_40 != 0) {
                    /* try { // try from 00ab84b8 to 00ab84cb has its CatchHandler @ 00ab8580 */
      plVar2 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
      (**(code **)(*plVar2 + 0xb8))(plVar2,local_40);
    }
    lVar3 = local_48;
    if (local_48 != 0) {
                    /* try { // try from 00ab84d4 to 00ab84e7 has its CatchHandler @ 00ab857c */
      plVar2 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
      (**(code **)(*plVar2 + 0xb8))(plVar2,lVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
LAB_00ab85a8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab85b0  FUN_00ab85b0 =====

void FUN_00ab85b0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_00ab1ce0(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
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


// ===== 00ab863c  FUN_00ab863c =====

void FUN_00ab863c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (lVar4 != 0) {
                    /* try { // try from 00ab8668 to 00ab867b has its CatchHandler @ 00ab86a8 */
    plVar2 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar4);
  }
  *param_1 = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab86ac  facebook::jni::detail::getHolder<facebook::jni::JObject> =====

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
  JObject *extraout_x1;
  JObject *extraout_x1_00;
  undefined8 *in_x8;
  undefined8 uVar5;
  undefined8 uVar6;
  base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> abStack_40 [8];
  long local_38;
  
  puVar2 = PTR_holderField_00b00b40;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_holderField_00b00b48 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_holderField_00b00b48), param_1 = extraout_x1, iVar3 != 0)) {
    JObject::getClass();
                    /* try { // try from 00ab8758 to 00ab875f has its CatchHandler @ 00ab8780 */
    uVar5 = getDestructorField(abStack_40);
    *(undefined8 *)puVar2 = uVar5;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              (abStack_40);
    __cxa_guard_release(PTR_holderField_00b00b48);
    param_1 = extraout_x1_00;
  }
  uVar5 = *(undefined8 *)puVar2;
  uVar6 = *(undefined8 *)this;
                    /* try { // try from 00ab86f0 to 00ab8707 has its CatchHandler @ 00ab87b4 */
  plVar4 = (long *)facebook::jni::Environment::facebook::jni::Environment::current(this,param_1);
  uVar5 = (**(code **)(*plVar4 + 0x2f8))(plVar4,uVar6,uVar5);
  *in_x8 = uVar5;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab87b8  facebook::jni::base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

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
                    /* try { // try from 00ab87e4 to 00ab87f7 has its CatchHandler @ 00ab8824 */
    plVar2 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar4);
  }
  *(undefined8 *)this = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab8828  facebook::jni::throwNPE =====

/* WARNING: Unknown calling convention: __rustcall */
/* facebook::jni::throwNPE */

void __rustcall facebook::jni::throwNPE(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    facebook::jni::facebook::jni::throwNewJavaException
              ("java/lang/NullPointerException","java.lang.NullPointerException");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab8868  facebook::jni::base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

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
                    /* try { // try from 00ab8894 to 00ab88a7 has its CatchHandler @ 00ab88d4 */
    plVar2 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar4);
  }
  *(undefined8 *)this = 0;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab88d8  facebook::jni::detail::getHolder<facebook::jni::detail::HybridData> =====

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
  HybridData *extraout_x1;
  HybridData *extraout_x1_00;
  undefined8 *in_x8;
  undefined8 uVar5;
  undefined8 uVar6;
  base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> abStack_40 [8];
  long local_38;
  
  puVar2 = PTR_holderField_00b00b58;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_holderField_00b00b60 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_holderField_00b00b60), param_1 = extraout_x1, iVar3 != 0)) {
    JObject::getClass();
                    /* try { // try from 00ab8984 to 00ab898b has its CatchHandler @ 00ab89ac */
    uVar5 = getDestructorField(abStack_40);
    *(undefined8 *)puVar2 = uVar5;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              (abStack_40);
    __cxa_guard_release(PTR_holderField_00b00b60);
    param_1 = extraout_x1_00;
  }
  uVar5 = *(undefined8 *)puVar2;
  uVar6 = *(undefined8 *)this;
                    /* try { // try from 00ab891c to 00ab8933 has its CatchHandler @ 00ab89e0 */
  plVar4 = (long *)facebook::jni::Environment::facebook::jni::Environment::current(this,param_1);
  uVar5 = (**(code **)(*plVar4 + 0x2f8))(plVar4,uVar6,uVar5);
  *in_x8 = uVar5;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab89e4  facebook::jni::detail::getDestructorField =====

/* WARNING: Unknown calling convention: __rustcall */
/* facebook::jni::detail::getDestructorField */

long __rustcall facebook::jni::detail::getDestructorField(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
  lVar3 = (**(code **)(*plVar2 + 0x2f0))(plVar2,*param_1,"mDestructor",PTR_kDescriptor_00b00b50);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    facebook::jni::facebook::jni::throwCppExceptionIf();
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3 == 0);
}


// ===== 00ab8a60  facebook::jni::detail::HybridClassBase::isHybridClassBase =====

/* WARNING: Unknown calling convention: __rustcall */
/* facebook::jni::detail::HybridClassBase::isHybridClassBase */

void __rustcall facebook::jni::detail::HybridClassBase::isHybridClassBase(undefined8 *param_1)

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
  if (((*PTR_cls_00b00b10 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_cls_00b00b10), iVar3 != 0))
  {
                    /* try { // try from 00ab8af8 to 00ab8b0b has its CatchHandler @ 00ab8b1c */
    facebook::jni::facebook::jni::findClassStatic(PTR_cls_00b00b08,PTR_kBaseName_00b00b18);
    __cxa_guard_release(PTR_cls_00b00b10);
  }
  uVar6 = *param_1;
  uVar7 = *(undefined8 *)PTR_cls_00b00b08;
                    /* try { // try from 00ab8aa4 to 00ab8abb has its CatchHandler @ 00ab8b48 */
  plVar4 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
  cVar2 = (**(code **)(*plVar4 + 0x58))(plVar4,uVar6,uVar7);
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2 != '\0');
}


// ===== 00ab8b4c  Java_com_discord_libdiscore_LibdiscoreModuleClass_00024LibdiscoreModule_jniInvalidateJSIFunctions =====

void Java_com_discord_libdiscore_LibdiscoreModuleClass_00024LibdiscoreModule_jniInvalidateJSIFunctions
               (undefined8 param_1,undefined8 param_2,bad_alloc *param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_68;
  long *local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((param_3 != (bad_alloc *)0x0) && (param_4 != 0)) {
    plVar4 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
    lVar5 = (**(code **)(*plVar4 + 200))(plVar4,param_4);
    facebook::jni::facebook::jni::throwPendingJniExceptionAsCppException();
    if (lVar5 == 0) {
      param_3 = (bad_alloc *)__cxa_allocate_exception(8);
      if (*(long *)(lVar1 + 0x28) != local_48) goto LAB_00ab8d88;
      std::bad_alloc::bad_alloc(param_3);
      __cxa_throw(param_3,PTR_typeinfo_00b00b70,PTR__bad_alloc_00b00b68);
LAB_00ab8ce8:
      iVar3 = __cxa_guard_acquire(PTR_hybridDataField_00b00b00);
      if (iVar3 != 0) {
        facebook::jni::JObject::getClass();
                    /* try { // try from 00ab8d08 to 00ab8d0b has its CatchHandler @ 00ab8d30 */
        uVar7 = FUN_00ab82bc(local_50);
        *(undefined8 *)PTR_hybridDataField_00b00af8 = uVar7;
        facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
        ::~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
                           *)&local_50);
        __cxa_guard_release(PTR_hybridDataField_00b00b00);
      }
    }
    else {
      local_58 = lVar5;
      if ((*PTR_hybridDataField_00b00b00 & 1) == 0) goto LAB_00ab8ce8;
    }
                    /* try { // try from 00ab8bb4 to 00ab8bc3 has its CatchHandler @ 00ab8d64 */
    lVar5 = facebook::jni::getHybridDataFromField(&local_58,PTR_hybridDataField_00b00af8);
    local_68 = *(undefined8 *)(lVar5 + 8);
    plVar4 = *(long **)(lVar5 + 0x10);
    if (plVar4 == (long *)0x0) {
      local_60 = (long *)0x0;
    }
    else {
      FUN_00ab1cb0(1,plVar4 + 1);
      local_60 = plVar4;
      FUN_00ab1cb0(1,plVar4 + 1);
    }
                    /* try { // try from 00ab8bf8 to 00ab8c03 has its CatchHandler @ 00ab8d4c */
    libdiscorernjsimodule::tearDownJSIFunctionsOnJsThread(param_3,&local_68);
    plVar2 = local_60;
    if ((local_60 != (long *)0x0) &&
       (lVar5 = FUN_00ab1ce0(0xffffffffffffffff,local_60 + 1), lVar5 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    lVar5 = local_58;
    if ((plVar4 != (long *)0x0) &&
       (lVar6 = FUN_00ab1ce0(0xffffffffffffffff,plVar4 + 1), lVar5 = local_58, lVar6 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__ndk1::__shared_weak_count::__release_weak();
      lVar5 = local_58;
    }
    local_58 = lVar5;
    if (lVar5 != 0) {
                    /* try { // try from 00ab8c50 to 00ab8c63 has its CatchHandler @ 00ab8d8c */
      plVar4 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
      (**(code **)(*plVar4 + 0xb8))(plVar4,lVar5);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00ab8d88:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab8d90  Java_com_discord_libdiscore_LibdiscoreModuleClass_00024LibdiscoreModule_jniGetConfigTreatmentId =====

undefined4
Java_com_discord_libdiscore_LibdiscoreModuleClass_00024LibdiscoreModule_jniGetConfigTreatmentId
          (long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  uVar3 = (**(code **)(*param_1 + 0x548))(param_1,param_3,0);
  uVar2 = get_config_treatment_id();
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    (**(code **)(*param_1 + 0x550))(param_1,param_3,uVar3);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00ab8e1c  FUN_00ab8e1c =====

void FUN_00ab8e1c(void)

{
  FUN_006fc008();
  return;
}


// ===== 00ab8e24  FUN_00ab8e24 =====

void FUN_00ab8e24(void)

{
  FUN_0072400c();
  return;
}


// ===== 00ab8e30  FUN_00ab8e30 =====

void FUN_00ab8e30(void)

{
  (*(code *)PTR_00b01460)();
  return;
}


// ===== 00ab8e50  <EXTERNAL>::__cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00b01468)();
  return;
}


// ===== 00ab8e60  <EXTERNAL>::__cxa_atexit =====

void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_00b01470)();
  return;
}


// ===== 00ab8e70  <EXTERNAL>::__register_atfork =====

void __register_atfork(void)

{
  (*(code *)PTR___register_atfork_00b01478)();
  return;
}


// ===== 00ab8e80  libdiscorernjsimodule::tearDownJSIFunctionsOnJsThread =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall libdiscorernjsimodule::tearDownJSIFunctionsOnJsThread(void)

{
  (*(code *)PTR_tearDownJSIFunctionsOnJsThread_00b01480)();
  return;
}


// ===== 00ab8e90  init_libdiscore =====

void init_libdiscore(void)

{
  (*(code *)PTR_init_libdiscore_00b01488)();
  return;
}


// ===== 00ab8ea0  register_libdiscore_jsi =====

void register_libdiscore_jsi(void)

{
  (*(code *)PTR_register_libdiscore_jsi_00b01490)();
  return;
}


// ===== 00ab8eb0  <EXTERNAL>::std::__ndk1::promise<void>::get_future =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::promise<void>::get_future(void)

{
  (*(code *)PTR_get_future_00b01498)();
  return;
}


// ===== 00ab8ec0  <EXTERNAL>::std::__ndk1::future<void>::~future =====

void __thiscall std::__ndk1::future<void>::~future(future<void> *this)

{
  (*(code *)PTR__future_00b014a0)();
  return;
}


// ===== 00ab8ed0  get_config_treatment_id =====

void get_config_treatment_id(void)

{
  (*(code *)PTR_get_config_treatment_id_00b014a8)();
  return;
}


// ===== 00ab8ee0  libdiscore_install_sentry_reporter =====

void libdiscore_install_sentry_reporter(void)

{
  (*(code *)PTR_libdiscore_install_sentry_reporter_00b014b0)();
  return;
}


// ===== 00ab8ef0  <EXTERNAL>::operator.new =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00b014b8)();
  return pvVar1;
}


// ===== 00ab8f00  <EXTERNAL>::std::__ndk1::__shared_weak_count::~__shared_weak_count =====

void __thiscall std::__ndk1::__shared_weak_count::~__shared_weak_count(__shared_weak_count *this)

{
  (*(code *)PTR____shared_weak_count_00b014c0)();
  return;
}


// ===== 00ab8f10  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00b014c8)();
  return;
}


// ===== 00ab8f20  <EXTERNAL>::std::__ndk1::__shared_weak_count::__release_weak =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::__release_weak(void)

{
  (*(code *)PTR___release_weak_00b014d0)();
  return;
}


// ===== 00ab8f30  <EXTERNAL>::std::__ndk1::promise<void>::promise =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::promise<void>::promise(void)

{
  (*(code *)PTR_promise_00b014d8)();
  return;
}


// ===== 00ab8f40  <EXTERNAL>::std::__ndk1::promise<void>::~promise =====

void __thiscall std::__ndk1::promise<void>::~promise(promise<void> *this)

{
  (*(code *)PTR__promise_00b014e0)();
  return;
}


// ===== 00ab8f50  invalidate_libdiscore_jsi =====

void invalidate_libdiscore_jsi(void)

{
  (*(code *)PTR_invalidate_libdiscore_jsi_00b014e8)();
  return;
}


// ===== 00ab8f60  <EXTERNAL>::std::__ndk1::promise<void>::set_value =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::promise<void>::set_value(void)

{
  (*(code *)PTR_set_value_00b014f0)();
  return;
}


// ===== 00ab8f70  <EXTERNAL>::std::__ndk1::chrono::steady_clock::now =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::chrono::steady_clock::now(void)

{
  (*(code *)PTR_now_00b014f8)();
  return;
}


// ===== 00ab8f80  <EXTERNAL>::std::__ndk1::mutex::lock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::mutex::lock(void)

{
  (*(code *)PTR_lock_00b01500)();
  return;
}


// ===== 00ab8f90  <EXTERNAL>::std::__ndk1::chrono::system_clock::now =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::chrono::system_clock::now(void)

{
  (*(code *)PTR_now_00b01508)();
  return;
}


// ===== 00ab8fa0  <EXTERNAL>::std::__ndk1::condition_variable::__do_timed_wait =====

void std::__ndk1::condition_variable::__do_timed_wait(void)

{
  (*(code *)PTR___do_timed_wait_00b01510)();
  return;
}


// ===== 00ab8fb0  <EXTERNAL>::std::__ndk1::mutex::unlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::mutex::unlock(void)

{
  (*(code *)PTR_unlock_00b01518)();
  return;
}


// ===== 00ab8fc0  <EXTERNAL>::fwrite =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00b01520)();
  return sVar1;
}


// ===== 00ab8fd0  facebook::jni::base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>::
~base_owned_ref(base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator> *this)

{
  (*(code *)PTR__base_owned_ref_00b01528)();
  return;
}


// ===== 00ab8fe0  _JNIEnv::CallStaticObjectMethod =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall _JNIEnv::CallStaticObjectMethod(void)

{
  (*(code *)PTR_CallStaticObjectMethod_00b01530)();
  return;
}


// ===== 00ab8ff0  _JNIEnv::CallStaticVoidMethod =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall _JNIEnv::CallStaticVoidMethod(void)

{
  (*(code *)PTR_CallStaticVoidMethod_00b01538)();
  return;
}


// ===== 00ab9000  facebook::jni::JObject::getClass =====

void facebook::jni::JObject::getClass(void)

{
  (*(code *)PTR_getClass_00b01540)();
  return;
}


// ===== 00ab9010  facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
~base_owned_ref(base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *this)

{
  (*(code *)PTR__base_owned_ref_00b01548)();
  return;
}


// ===== 00ab9020  facebook::jni::getHybridDataFromField =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::jni::getHybridDataFromField(void)

{
  (*(code *)PTR_getHybridDataFromField_00b01550)();
  return;
}


// ===== 00ab9030  facebook::jni::detail::HybridClassBase::isHybridClassBase =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::jni::detail::HybridClassBase::isHybridClassBase(void)

{
  (*(code *)PTR_isHybridClassBase_00b01558)();
  return;
}


// ===== 00ab9040  facebook::jni::throwNPE =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::jni::throwNPE(void)

{
  (*(code *)PTR_throwNPE_00b01560)();
  return;
}


// ===== 00ab9050  facebook::jni::base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::
base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
::~base_owned_ref(base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
                  *this)

{
  (*(code *)PTR__base_owned_ref_00b01568)();
  return;
}


// ===== 00ab9060  facebook::jni::detail::getHolder<facebook::jni::JObject> =====

void __thiscall
facebook::jni::detail::getHolder<facebook::jni::JObject>(detail *this,JObject *param_1)

{
  (*(code *)PTR_getHolder<facebook_jni_JObject>_00b01570)();
  return;
}


// ===== 00ab9070  facebook::jni::base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::
base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
::~base_owned_ref(base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
                  *this)

{
  (*(code *)PTR__base_owned_ref_00b01578)();
  return;
}


// ===== 00ab9080  facebook::jni::detail::getDestructorField =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::jni::detail::getDestructorField(void)

{
  (*(code *)PTR_getDestructorField_00b01580)();
  return;
}


// ===== 00ab9090  facebook::jni::detail::getHolder<facebook::jni::detail::HybridData> =====

void __thiscall
facebook::jni::detail::getHolder<facebook::jni::detail::HybridData>
          (detail *this,HybridData *param_1)

{
  (*(code *)PTR_getHolder<facebook_jni_detail_HybridData>_00b01588)();
  return;
}


// ===== 00ab90a0  <EXTERNAL>::facebook::jni::facebook::jni::initialize =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::jni::facebook::jni::initialize(void)

{
  (*(code *)PTR_initialize_00b01590)();
  return;
}


// ===== 00ab90b0  <EXTERNAL>::facebook::jni::ThreadScope::ThreadScope =====

void __thiscall facebook::jni::ThreadScope::ThreadScope(ThreadScope *this)

{
  (*(code *)PTR_ThreadScope_00b01598)();
  return;
}


// ===== 00ab90c0  <EXTERNAL>::facebook::jni::facebook::jni::make_jstring =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::jni::facebook::jni::make_jstring(void)

{
  (*(code *)PTR_make_jstring_00b015a0)();
  return;
}


// ===== 00ab90d0  <EXTERNAL>::strdup =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strdup_00b015a8)();
  return pcVar1;
}


// ===== 00ab90e0  <EXTERNAL>::facebook::jni::JString::toStdString =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::JString::toStdString(void)

{
  (*(code *)PTR_toStdString_00b015b0)();
  return;
}


// ===== 00ab90f0  <EXTERNAL>::facebook::jni::ThreadScope::~ThreadScope =====

void __thiscall facebook::jni::ThreadScope::~ThreadScope(ThreadScope *this)

{
  (*(code *)PTR__ThreadScope_00b015b8)();
  return;
}


// ===== 00ab9100  <EXTERNAL>::__cxa_begin_catch =====

void __cxa_begin_catch(void)

{
  (*(code *)PTR___cxa_begin_catch_00b015c0)();
  return;
}


// ===== 00ab9110  <EXTERNAL>::__cxa_end_catch =====

void __cxa_end_catch(void)

{
  (*(code *)PTR___cxa_end_catch_00b015c8)();
  return;
}


// ===== 00ab9120  <EXTERNAL>::__cxa_guard_acquire =====

void __cxa_guard_acquire(void)

{
  (*(code *)PTR___cxa_guard_acquire_00b015d0)();
  return;
}


// ===== 00ab9130  <EXTERNAL>::__cxa_guard_abort =====

void __cxa_guard_abort(void)

{
  (*(code *)PTR___cxa_guard_abort_00b015d8)();
  return;
}


// ===== 00ab9140  <EXTERNAL>::__cxa_guard_release =====

void __cxa_guard_release(void)

{
  (*(code *)PTR___cxa_guard_release_00b015e0)();
  return;
}


// ===== 00ab9150  <EXTERNAL>::facebook::jni::facebook::jni::findClassStatic =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::jni::facebook::jni::findClassStatic(void)

{
  (*(code *)PTR_findClassStatic_00b015e8)();
  return;
}


// ===== 00ab9160  <EXTERNAL>::std::terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
  (*(code *)PTR_terminate_00b015f0)();
  return;
}


// ===== 00ab9170  <EXTERNAL>::facebook::jni::Environment::facebook::jni::Environment::current =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::jni::Environment::facebook::jni::Environment::current(void)

{
  (*(code *)PTR_current_00b015f8)();
  return;
}


// ===== 00ab9180  <EXTERNAL>::facebook::jni::facebook::jni::throwCppExceptionIf =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::jni::facebook::jni::throwCppExceptionIf(void)

{
  (*(code *)PTR_throwCppExceptionIf_00b01600)();
  return;
}


// ===== 00ab9190  <EXTERNAL>::facebook::jni::facebook::jni::throwPendingJniExceptionAsCppException =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::jni::facebook::jni::throwPendingJniExceptionAsCppException(void)

{
  (*(code *)PTR_throwPendingJniExceptionAsCppException_00b01608)();
  return;
}


// ===== 00ab91a0  <EXTERNAL>::__cxa_allocate_exception =====

void __cxa_allocate_exception(void)

{
  (*(code *)PTR___cxa_allocate_exception_00b01610)();
  return;
}


// ===== 00ab91b0  <EXTERNAL>::__cxa_throw =====

void __cxa_throw(void)

{
  (*(code *)PTR___cxa_throw_00b01618)();
  return;
}


// ===== 00ab91c0  <EXTERNAL>::std::bad_alloc::bad_alloc =====

void __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
  (*(code *)PTR_bad_alloc_00b01620)();
  return;
}


// ===== 00ab91d0  <EXTERNAL>::facebook::jni::facebook::jni::throwNewJavaException =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::jni::facebook::jni::throwNewJavaException(void)

{
  (*(code *)PTR_throwNewJavaException_00b01628)();
  return;
}


// ===== 00ab91e0  <EXTERNAL>::facebook::jni::detail::HybridDestructor::getNativePointer =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::detail::HybridDestructor::getNativePointer(void)

{
  (*(code *)PTR_getNativePointer_00b01630)();
  return;
}


// ===== 00ab91f0  <EXTERNAL>::__android_log_write =====

void __android_log_write(void)

{
  (*(code *)PTR___android_log_write_00b01638)();
  return;
}


// ===== 00ab9200  <EXTERNAL>::__cxa_free_exception =====

void __cxa_free_exception(void)

{
  (*(code *)PTR___cxa_free_exception_00b01640)();
  return;
}


// ===== 00ab9210  <EXTERNAL>::std::exception::~exception =====

void __thiscall std::exception::~exception(exception *this)

{
  (*(code *)PTR__exception_00b01648)();
  return;
}


// ===== 00ab9220  <EXTERNAL>::std::logic_error::logic_error =====

void __thiscall std::logic_error::logic_error(logic_error *this,char *param_1)

{
  (*(code *)PTR_logic_error_00b01650)();
  return;
}


// ===== 00ab9230  <EXTERNAL>::std::bad_array_new_length::bad_array_new_length =====

void __thiscall std::bad_array_new_length::bad_array_new_length(bad_array_new_length *this)

{
  (*(code *)PTR_bad_array_new_length_00b01658)();
  return;
}


// ===== 00ab9240  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::reserve =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     reserve(ulong param_1)

{
  (*(code *)PTR_reserve_00b01660)();
  return;
}


// ===== 00ab9250  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     append(char *param_1,ulong param_2)

{
  (*(code *)PTR_append_00b01668)();
  return;
}


// ===== 00ab9260  <EXTERNAL>::facebook::jsi::Value::~Value =====

void __thiscall facebook::jsi::Value::~Value(Value *this)

{
  (*(code *)PTR__Value_00b01670)();
  return;
}


// ===== 00ab9270  <EXTERNAL>::facebook::jsi::NativeState::~NativeState =====

void __thiscall facebook::jsi::NativeState::~NativeState(NativeState *this)

{
  (*(code *)PTR__NativeState_00b01678)();
  return;
}


// ===== 00ab9280  <EXTERNAL>::facebook::jsi::Value::~Value =====

void __thiscall facebook::jsi::Value::~Value(Value *this)

{
  (*(code *)PTR__Value_00b01680)();
  return;
}


// ===== 00ab9290  <EXTERNAL>::facebook::jsi::Object::asFunction =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Object::asFunction(IRuntime *param_1)

{
  (*(code *)PTR_asFunction_00b01688)();
  return;
}


// ===== 00ab92a0  <EXTERNAL>::facebook::jsi::Buffer::~Buffer =====

void __thiscall facebook::jsi::Buffer::~Buffer(Buffer *this)

{
  (*(code *)PTR__Buffer_00b01690)();
  return;
}


// ===== 00ab92b0  <EXTERNAL>::facebook::jsi::Value::Value =====

void __thiscall facebook::jsi::Value::Value(Value *this,Value *param_1)

{
  (*(code *)PTR_Value_00b01698)();
  return;
}


// ===== 00ab92c0  <EXTERNAL>::facebook::jsi::Value::asNumber =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asNumber(void)

{
  (*(code *)PTR_asNumber_00b016a0)();
  return;
}


// ===== 00ab92d0  <EXTERNAL>::facebook::jsi::Value::Value =====

void __thiscall facebook::jsi::Value::Value(Value *this,IRuntime *param_1,Value *param_2)

{
  (*(code *)PTR_Value_00b016a8)();
  return;
}


// ===== 00ab92e0  <EXTERNAL>::facebook::jsi::Value::facebook::jsi::Value::strictEquals =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::jsi::Value::facebook::jsi::Value::strictEquals(void)

{
  (*(code *)PTR_strictEquals_00b016b0)();
  return;
}


// ===== 00ab92f0  <EXTERNAL>::facebook::jsi::JSError::JSError =====

void __thiscall facebook::jsi::JSError::JSError(void)

{
  (*(code *)PTR_JSError_00b016b8)();
  return;
}


// ===== 00ab9300  <EXTERNAL>::facebook::jsi::Value::toString =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::toString(IRuntime *param_1)

{
  (*(code *)PTR_toString_00b016c0)();
  return;
}


// ===== 00ab9310  <EXTERNAL>::std::__ndk1::__shared_weak_count::lock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::lock(void)

{
  (*(code *)PTR_lock_00b016c8)();
  return;
}


// ===== 00ab9320  <EXTERNAL>::__dynamic_cast =====

void __dynamic_cast(void)

{
  (*(code *)PTR___dynamic_cast_00b016d0)();
  return;
}


// ===== 00ab9330  <EXTERNAL>::std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
               (char *param_1,long param_2)

{
  (*(code *)PTR_write_00b016d8)();
  return;
}


// ===== 00ab9340  <EXTERNAL>::operator.delete[] =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete__(void *param_1)

{
  (*(code *)PTR_operator_delete___00b016e0)();
  return;
}


// ===== 00ab9350  <EXTERNAL>::operator.new[] =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new__(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new___00b016e8)();
  return pvVar1;
}


// ===== 00ab9360  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00b016f0)();
  return;
}


// ===== 00ab9370  <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(void)

{
  (*(code *)PTR_drop_00b016f8)();
  return;
}


// ===== 00ab9380  core::panicking::panic_in_cleanup =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall core::panicking::panic_in_cleanup(void)

{
  (*(code *)PTR_panic_in_cleanup_00b01700)();
  return;
}


// ===== 00ab9390  __rustc::__rust_no_alloc_shim_is_unstable_v2 =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall __rustc::__rust_no_alloc_shim_is_unstable_v2(void)

{
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00b01708)();
  return;
}


// ===== 00ab93a0  <EXTERNAL>::malloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00b01710)();
  return pvVar1;
}


// ===== 00ab93b0  alloc::alloc::handle_alloc_error =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall alloc::alloc::handle_alloc_error(void)

{
  (*(code *)PTR_handle_alloc_error_00b01718)();
  return;
}


// ===== 00ab93c0  <tokio::sync::mpsc::unbounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::add_permit =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<tokio::sync::mpsc::unbounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::add_permit(void)

{
  (*(code *)PTR_add_permit_00b01720)();
  return;
}


// ===== 00ab93d0  <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(void)

{
  (*(code *)PTR_wake_00b01728)();
  return;
}


// ===== 00ab93e0  std::panicking::panic_count::is_zero_slow_path =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall std::panicking::panic_count::is_zero_slow_path(void)

{
  (*(code *)PTR_is_zero_slow_path_00b01730)();
  return;
}


// ===== 00ab93f0  <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop(void)

{
  (*(code *)PTR___drop_00b01738)();
  return;
}


// ===== 00ab9400  core::panicking::panic_fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall core::panicking::panic_fmt(void)

{
  (*(code *)PTR_panic_fmt_00b01740)();
  return;
}


// ===== 00ab9410  <EXTERNAL>::posix_memalign =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int posix_memalign(void **__memptr,size_t __alignment,size_t __size)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_posix_memalign_00b01748)((int)__memptr);
  return iVar1;
}


// ===== 00ab9420  <EXTERNAL>::memcpy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00b01750)();
  return pvVar1;
}


// ===== 00ab9430  <serde_json::read::StrRead_as_serde_json::read::Read>::parse_str =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <serde_json::read::StrRead_as_serde_json::read::Read>::parse_str(void)

{
  (*(code *)PTR_parse_str_00b01758)();
  return;
}


// ===== 00ab9440  <serde_json::error::Error_as_serde::de::Error>::invalid_type =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <serde_json::error::Error_as_serde::de::Error>::invalid_type(void)

{
  (*(code *)PTR_invalid_type_00b01760)();
  return;
}


// ===== 00ab9450  <EXTERNAL>::pthread_getspecific =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * pthread_getspecific(pthread_key_t __key)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_pthread_getspecific_00b01768)(__key);
  return pvVar1;
}


// ===== 00ab9460  <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::lazy_init =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::lazy_init(void)

{
  (*(code *)PTR_lazy_init_00b01770)();
  return;
}


// ===== 00ab9470  std::thread::local::panic_access_error =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall std::thread::local::panic_access_error(void)

{
  (*(code *)PTR_panic_access_error_00b01778)();
  return;
}


// ===== 00ab9480  <serde_json::error::Error_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <serde_json::error::Error_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_00b01780)();
  return;
}


// ===== 00ab9490  alloc::fmt::format::format_inner =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall alloc::fmt::format::format_inner(void)

{
  (*(code *)PTR_format_inner_00b01788)();
  return;
}


// ===== 00ab94a0  <EXTERNAL>::realloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_00b01790)();
  return pvVar1;
}


// ===== 00ab94b0  std::sys::alloc::realloc_fallback =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall std::sys::alloc::realloc_fallback(void)

{
  (*(code *)PTR_realloc_fallback_00b01798)();
  return;
}


// ===== 00ab94c0  <EXTERNAL>::calloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00b017a0)();
  return pvVar1;
}


// ===== 00ab94d0  <EXTERNAL>::memset =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00b017a8)(__s,__c);
  return pvVar1;
}


// ===== 00ab94e0  <tokio::sync::task::atomic_waker::[0]::tokio::sync::task::atomic_waker::AtomicWaker>::wake =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<tokio::sync::task::atomic_waker::[0]::tokio::sync::task::atomic_waker::AtomicWaker>::wake(void)

{
  (*(code *)PTR_wake_00b017b0)();
  return;
}


// ===== 00ab94f0  <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tokio::task::coop::RestoreOnPending_as_core::ops::drop::Drop>::drop(void)

{
  (*(code *)PTR_drop_00b017b8)();
  return;
}


// ===== 00ab9500  tokio::task::coop::register_waker =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall tokio::task::coop::register_waker(void)

{
  (*(code *)PTR_register_waker_00b017c0)();
  return;
}


// ===== 00ab9510  <tokio::sync::task::atomic_waker::[0]::tokio::sync::task::atomic_waker::AtomicWaker>::register_by_ref =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<tokio::sync::task::atomic_waker::[0]::tokio::sync::task::atomic_waker::AtomicWaker>::
register_by_ref(void)

{
  (*(code *)PTR_register_by_ref_00b017c8)();
  return;
}


// ===== 00ab9520  <tokio::sync::mpsc::unbounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::is_idle =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<tokio::sync::mpsc::unbounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::is_idle(void)

{
  (*(code *)PTR_is_idle_00b017d0)();
  return;
}


// ===== 00ab9530  core::panicking::panic =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall core::panicking::panic(void)

{
  (*(code *)PTR_panic_00b017d8)();
  return;
}


// ===== 00ab9540  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish(void)

{
  (*(code *)PTR_debug_tuple_field1_finish_00b017e0)();
  return;
}


// ===== 00ab9550  <tokio::fs::file::File_as_tokio::io::async_read::AsyncRead>::poll_read =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tokio::fs::file::File_as_tokio::io::async_read::AsyncRead>::poll_read(void)

{
  (*(code *)PTR_poll_read_00b017e8)();
  return;
}


// ===== 00ab9560  tokio::io::util::vec_with_initialized::into_read_buf_parts =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall tokio::io::util::vec_with_initialized::into_read_buf_parts(void)

{
  (*(code *)PTR_into_read_buf_parts_00b017f0)();
  return;
}


// ===== 00ab9570  core::slice::index::slice_index_fail =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall core::slice::index::slice_index_fail(void)

{
  (*(code *)PTR_slice_index_fail_00b017f8)();
  return;
}


// ===== 00ab9580  <usize_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <usize_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_00b01800)();
  return;
}


// ===== 00ab9590  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field1_finish =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field1_finish(void)

{
  (*(code *)PTR_debug_struct_field1_finish_00b01808)();
  return;
}


// ===== 00ab95a0  <core::fmt::[a]::core::fmt::Formatter>::write_str =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <core::fmt::[a]::core::fmt::Formatter>::write_str(void)

{
  (*(code *)PTR_write_str_00b01810)();
  return;
}


// ===== 00ab95b0  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish(void)

{
  (*(code *)PTR_debug_struct_field2_finish_00b01818)();
  return;
}


// ===== 00ab95c0  core::fmt::pointer_fmt_inner =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall core::fmt::pointer_fmt_inner(void)

{
  (*(code *)PTR_pointer_fmt_inner_00b01820)();
  return;
}


// ===== 00ab95d0  <str_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <str_as_core::fmt::Debug>::fmt(void)

{
  (*(code *)PTR_fmt_00b01828)();
  return;
}


// ===== 00ab95e0  <u8_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <u8_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_00b01830)();
  return;
}


// ===== 00ab95f0  <u8_as_core::fmt::LowerHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <u8_as_core::fmt::LowerHex>::fmt(void)

{
  (*(code *)PTR_fmt_00b01838)();
  return;
}


// ===== 00ab9600  <u8_as_core::fmt::UpperHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <u8_as_core::fmt::UpperHex>::fmt(void)

{
  (*(code *)PTR_fmt_00b01840)();
  return;
}


// ===== 00ab9610  <usize_as_core::fmt::LowerHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <usize_as_core::fmt::LowerHex>::fmt(void)

{
  (*(code *)PTR_fmt_00b01848)();
  return;
}


// ===== 00ab9620  <usize_as_core::fmt::UpperHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <usize_as_core::fmt::UpperHex>::fmt(void)

{
  (*(code *)PTR_fmt_00b01850)();
  return;
}


// ===== 00ab9630  <u32_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <u32_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_00b01858)();
  return;
}


// ===== 00ab9640  <u32_as_core::fmt::LowerHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <u32_as_core::fmt::LowerHex>::fmt(void)

{
  (*(code *)PTR_fmt_00b01860)();
  return;
}


// ===== 00ab9650  <u32_as_core::fmt::UpperHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <u32_as_core::fmt::UpperHex>::fmt(void)

{
  (*(code *)PTR_fmt_00b01868)();
  return;
}


// ===== 00ab9660  <i64_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <i64_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_00b01870)();
  return;
}


// ===== 00ab9670  <isize_as_core::fmt::LowerHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <isize_as_core::fmt::LowerHex>::fmt(void)

{
  (*(code *)PTR_fmt_00b01878)();
  return;
}


// ===== 00ab9680  <isize_as_core::fmt::UpperHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <isize_as_core::fmt::UpperHex>::fmt(void)

{
  (*(code *)PTR_fmt_00b01880)();
  return;
}


// ===== 00ab9690  <usize_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <usize_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_00b01888)();
  return;
}


// ===== 00ab96a0  <usize_as_core::fmt::LowerHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <usize_as_core::fmt::LowerHex>::fmt(void)

{
  (*(code *)PTR_fmt_00b01890)();
  return;
}


// ===== 00ab96b0  <usize_as_core::fmt::UpperHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <usize_as_core::fmt::UpperHex>::fmt(void)

{
  (*(code *)PTR_fmt_00b01898)();
  return;
}


// ===== 00ab96c0  <core::fmt::Arguments_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <core::fmt::Arguments_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_00b018a0)();
  return;
}


// ===== 00ab96d0  <str_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <str_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_00b018a8)();
  return;
}


// ===== 00ab96e0  <libdiscore_common::stores::guild_role::GuildRoleStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>::handle_reset =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<libdiscore_common::stores::guild_role::GuildRoleStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>
::handle_reset(void)

{
  (*(code *)PTR_handle_reset_00b018b0)();
  return;
}


// ===== 00ab96f0  <libdiscore_common::stores::guild_role::GuildRoleStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>::commit_changes =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<libdiscore_common::stores::guild_role::GuildRoleStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>
::commit_changes(void)

{
  (*(code *)PTR_commit_changes_00b018b8)();
  return;
}


// ===== 00ab9700  <libdiscore_common::stores::guild_role::GuildRoleStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>::database_configurations =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<libdiscore_common::stores::guild_role::GuildRoleStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>
::database_configurations(void)

{
  (*(code *)PTR_database_configurations_00b018c0)();
  return;
}


// ===== 00ab9710  <libdiscore_common::stores::guild_role::GuildRoleStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>::handle_action =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<libdiscore_common::stores::guild_role::GuildRoleStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>
::handle_action(void)

{
  (*(code *)PTR_handle_action_00b018c8)();
  return;
}


// ===== 00ab9720  <libdiscore_common::stores::guild_sticker::GuildStickersStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>::handle_reset =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<libdiscore_common::stores::guild_sticker::GuildStickersStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>
::handle_reset(void)

{
  (*(code *)PTR_handle_reset_00b018d0)();
  return;
}


// ===== 00ab9730  <libdiscore_common::stores::guild_sticker::GuildStickersStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>::commit_changes =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<libdiscore_common::stores::guild_sticker::GuildStickersStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>
::commit_changes(void)

{
  (*(code *)PTR_commit_changes_00b018d8)();
  return;
}


// ===== 00ab9740  <libdiscore_common::stores::guild_sticker::GuildStickersStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>::database_configurations =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<libdiscore_common::stores::guild_sticker::GuildStickersStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>
::database_configurations(void)

{
  (*(code *)PTR_database_configurations_00b018e0)();
  return;
}


// ===== 00ab9750  <libdiscore_common::stores::guild_sticker::GuildStickersStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>::handle_action =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<libdiscore_common::stores::guild_sticker::GuildStickersStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>
::handle_action(void)

{
  (*(code *)PTR_handle_action_00b018e8)();
  return;
}


// ===== 00ab9760  <anyhow::error::[6]::anyhow::error::ErrorImpl>::error =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <anyhow::error::[6]::anyhow::error::ErrorImpl>::error(void)

{
  (*(code *)PTR_error_00b018f0)();
  return;
}


// ===== 00ab9770  <anyhow::error::[6]::anyhow::error::ErrorImpl>::provide =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <anyhow::error::[6]::anyhow::error::ErrorImpl>::provide(void)

{
  (*(code *)PTR_provide_00b018f8)();
  return;
}


// ===== 00ab9780  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field2_finish =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field2_finish(void)

{
  (*(code *)PTR_debug_tuple_field2_finish_00b01900)();
  return;
}


// ===== 00ab9790  <anyhow::fmt::anyhow::error::ErrorImpl>::debug =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <anyhow::fmt::anyhow::error::ErrorImpl>::debug(void)

{
  (*(code *)PTR_debug_00b01908)();
  return;
}


// ===== 00ab97a0  <<libdiscore_common::actions::Action_as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_21}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::actions::Action_as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_21}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b01910)();
  return;
}


// ===== 00ab97b0  <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notify_waiters(void)

{
  (*(code *)PTR_notify_waiters_00b01918)();
  return;
}


// ===== 00ab97c0  <EXTERNAL>::memcmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_00b01920)((int)__s1);
  return iVar1;
}


// ===== 00ab97d0  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field3_finish =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field3_finish(void)

{
  (*(code *)PTR_debug_struct_field3_finish_00b01928)();
  return;
}


// ===== 00ab97e0  jsi_sys::ffi::base::ffi::String_fromUtf8 =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall jsi_sys::ffi::base::ffi::String_fromUtf8(void)

{
  (*(code *)PTR_String_fromUtf8_00b01930)();
  return;
}


// ===== 00ab97f0  <jsi::string::String_as_jsi::value::IntoValue>::into_value =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <jsi::string::String_as_jsi::value::IntoValue>::into_value(void)

{
  (*(code *)PTR_into_value_00b01938)();
  return;
}


// ===== 00ab9800  <EXTERNAL>::clock_gettime =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_00b01940)(__clock_id);
  return iVar1;
}


// ===== 00ab9810  <jsi::value::[0]::jsi::value::Value>::null =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <jsi::value::[0]::jsi::value::Value>::null(void)

{
  (*(code *)PTR_null_00b01948)();
  return;
}


// ===== 00ab9820  <jsi::value::[0]::jsi::value::Value>::double =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <jsi::value::[0]::jsi::value::Value>::double(void)

{
  (*(code *)PTR_double_00b01950)();
  return;
}


// ===== 00ab9830  libdiscore_common::crash =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall libdiscore_common::crash(void)

{
  (*(code *)PTR_crash_00b01958)();
  return;
}


// ===== 00ab9840  <jsi::value::[0]::jsi::value::Value>::undefined =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <jsi::value::[0]::jsi::value::Value>::undefined(void)

{
  (*(code *)PTR_undefined_00b01960)();
  return;
}


// ===== 00ab9850  <f64_as_jsi::value::FromValueBasic>::from_value_ref =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <f64_as_jsi::value::FromValueBasic>::from_value_ref(void)

{
  (*(code *)PTR_from_value_ref_00b01968)();
  return;
}


// ===== 00ab9860  <libdiscore_common::core::http::[5]::libdiscore_common::core::http::PollingHttpClient>::cancel_request =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<libdiscore_common::core::http::[5]::libdiscore_common::core::http::PollingHttpClient>::
cancel_request(void)

{
  (*(code *)PTR_cancel_request_00b01970)();
  return;
}


// ===== 00ab9870  <jsi::value::[0]::jsi::value::Value>::bool =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <jsi::value::[0]::jsi::value::Value>::bool(void)

{
  (*(code *)PTR_bool_00b01978)();
  return;
}


// ===== 00ab9880  <jsi::value::[z]::jsi::value::ValueKind>::of =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <jsi::value::[z]::jsi::value::ValueKind>::of(void)

{
  (*(code *)PTR_of_00b01980)();
  return;
}


// ===== 00ab9890  <alloc::string::String_as_jsi::value::FromValueRef>::from_value_ref =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <alloc::string::String_as_jsi::value::FromValueRef>::from_value_ref(void)

{
  (*(code *)PTR_from_value_ref_00b01988)();
  return;
}


// ===== 00ab98a0  <libdiscore_common::stores::blocked_domains::[0]::libdiscore_common::stores::blocked_domains::BlockedDomainsStore>::is_blocked_domain =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<libdiscore_common::stores::blocked_domains::[0]::libdiscore_common::stores::blocked_domains::BlockedDomainsStore>
::is_blocked_domain(void)

{
  (*(code *)PTR_is_blocked_domain_00b01990)();
  return;
}


// ===== 00ab98b0  <std::sys::sync::once::futex::[0]::std::sys::sync::once::futex::Once>::wait =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <std::sys::sync::once::futex::[0]::std::sys::sync::once::futex::Once>::wait(void)

{
  (*(code *)PTR_wait_00b01998)();
  return;
}


// ===== 00ab98c0  <libdiscore_common::stores::libdiscore_common::stores::Stores>::start_fetching_blocked_domains =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<libdiscore_common::stores::libdiscore_common::stores::Stores>::start_fetching_blocked_domains(void)

{
  (*(code *)PTR_start_fetching_blocked_domains_00b019a0)();
  return;
}


// ===== 00ab98d0  core::result::unwrap_failed =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall core::result::unwrap_failed(void)

{
  (*(code *)PTR_unwrap_failed_00b019a8)();
  return;
}


// ===== 00ab98e0  <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended(void)

{
  (*(code *)PTR_lock_contended_00b019b0)();
  return;
}


// ===== 00ab98f0  <jsi::array::Array_as_jsi::value::IntoValue>::into_value =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <jsi::array::Array_as_jsi::value::IntoValue>::into_value(void)

{
  (*(code *)PTR_into_value_00b019b8)();
  return;
}


// ===== 00ab9900  <f64_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <f64_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_00b019c0)();
  return;
}


// ===== 00ab9910  <log::__private_api::GlobalLogger_as_log::Log>::log =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <log::__private_api::GlobalLogger_as_log::Log>::log(void)

{
  (*(code *)PTR_log_00b019c8)();
  return;
}


// ===== 00ab9920  <jsi::function::Function_as_jsi::value::FromValueRef>::from_value_ref =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <jsi::function::Function_as_jsi::value::FromValueRef>::from_value_ref(void)

{
  (*(code *)PTR_from_value_ref_00b019d0)();
  return;
}


// ===== 00ab9930  <jsi::object::Object_as_jsi::value::FromValueRef>::from_value_ref =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <jsi::object::Object_as_jsi::value::FromValueRef>::from_value_ref(void)

{
  (*(code *)PTR_from_value_ref_00b019d8)();
  return;
}


// ===== 00ab9940  <&str_as_jsi::prop_name_id::IntoPropNameInput>::into_input =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <&str_as_jsi::prop_name_id::IntoPropNameInput>::into_input(void)

{
  (*(code *)PTR_into_input_00b019e0)();
  return;
}


// ===== 00ab9950  <jsi::string::String_as_jsi::object::GetTypedProperty>::get_typed =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <jsi::string::String_as_jsi::object::GetTypedProperty>::get_typed(void)

{
  (*(code *)PTR_get_typed_00b019e8)();
  return;
}


// ===== 00ab9960  <jsi::string::[0]::jsi::string::String>::to_string =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <jsi::string::[0]::jsi::string::String>::to_string(void)

{
  (*(code *)PTR_to_string_00b019f0)();
  return;
}


// ===== 00ab9970  <jsi_sys::ffi::base::ffi::JsiString_as_cxx::unique_ptr::UniquePtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiString_as_cxx::unique_ptr::UniquePtrTarget>::__drop(void)

{
  (*(code *)PTR___drop_00b019f8)();
  return;
}


// ===== 00ab9980  <jsi::value::[0]::jsi::value::Value>::parse_from_json_str =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <jsi::value::[0]::jsi::value::Value>::parse_from_json_str(void)

{
  (*(code *)PTR_parse_from_json_str_00b01a00)();
  return;
}


// ===== 00ab9990  <anyhow::Error_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <anyhow::Error_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_00b01a08)();
  return;
}


// ===== 00ab99a0  <anyhow::Error_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <anyhow::Error_as_core::ops::drop::Drop>::drop(void)

{
  (*(code *)PTR_drop_00b01a10)();
  return;
}


// ===== 00ab99b0  <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__drop(void)

{
  (*(code *)PTR___drop_00b01a18)();
  return;
}


// ===== 00ab99c0  alloc::raw_vec::handle_error =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall alloc::raw_vec::handle_error(void)

{
  (*(code *)PTR_handle_error_00b01a20)();
  return;
}


// ===== 00ab99d0  <jsi::handle::RuntimeHandle_as_react_common::runtime_executor::RuntimeHandleExt>::executor =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<jsi::handle::RuntimeHandle_as_react_common::runtime_executor::RuntimeHandleExt>::executor(void)

{
  (*(code *)PTR_executor_00b01a28)();
  return;
}


// ===== 00ab99e0  <std::sys::thread::unix::Thread_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <std::sys::thread::unix::Thread_as_core::ops::drop::Drop>::drop(void)

{
  (*(code *)PTR_drop_00b01a30)();
  return;
}


// ===== 00ab99f0  <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::thread::thread::Inner,std[17aff9129faa4dc5]::alloc::System>>::drop_slow =====

void <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::thread::thread::Inner,std[17aff9129faa4dc5]::alloc::System>>
     ::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b01a38)();
  return;
}


// ===== 00ab9a00  <std::time::[5]::std::time::SystemTime>::now =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <std::time::[5]::std::time::SystemTime>::now(void)

{
  (*(code *)PTR_now_00b01a40)();
  return;
}


// ===== 00ab9a10  <std::time::[5]::std::time::SystemTime>::duration_since =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <std::time::[5]::std::time::SystemTime>::duration_since(void)

{
  (*(code *)PTR_duration_since_00b01a48)();
  return;
}


// ===== 00ab9a20  <core::fmt::num::[0]::u128>::_fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <core::fmt::num::[0]::u128>::_fmt(void)

{
  (*(code *)PTR__fmt_00b01a50)();
  return;
}


// ===== 00ab9a30  <jsi::value::Value_as_jsi::value::FromValueRef>::from_value_ref =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <jsi::value::Value_as_jsi::value::FromValueRef>::from_value_ref(void)

{
  (*(code *)PTR_from_value_ref_00b01a58)();
  return;
}


// ===== 00ab9a40  <jsi::string::String_as_jsi::value::FromValueOwned>::from_value =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <jsi::string::String_as_jsi::value::FromValueOwned>::from_value(void)

{
  (*(code *)PTR_from_value_00b01a60)();
  return;
}


// ===== 00ab9a50  <jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__drop(void)

{
  (*(code *)PTR___drop_00b01a68)();
  return;
}


// ===== 00ab9a60  <bool_as_jsi::value::FromValueBasic>::from_value_ref =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <bool_as_jsi::value::FromValueBasic>::from_value_ref(void)

{
  (*(code *)PTR_from_value_ref_00b01a70)();
  return;
}


// ===== 00ab9a70  <jsi::object::[1]::jsi::object::Object>::new =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <jsi::object::[1]::jsi::object::Object>::new(void)

{
  (*(code *)PTR_new_00b01a78)();
  return;
}


// ===== 00ab9a80  <jsi::object::Object_as_jsi::value::IntoValue>::into_value =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <jsi::object::Object_as_jsi::value::IntoValue>::into_value(void)

{
  (*(code *)PTR_into_value_00b01a80)();
  return;
}


// ===== 00ab9a90  <core::fmt::[a]::core::fmt::Formatter>::debug_list =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <core::fmt::[a]::core::fmt::Formatter>::debug_list(void)

{
  (*(code *)PTR_debug_list_00b01a88)();
  return;
}


// ===== 00ab9aa0  <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry(void)

{
  (*(code *)PTR_entry_00b01a90)();
  return;
}


// ===== 00ab9ab0  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(void)

{
  (*(code *)PTR_finish_00b01a98)();
  return;
}


// ===== 00ab9ac0  <EXTERNAL>::strlen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00b01aa0)();
  return sVar1;
}


// ===== 00ab9ad0  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::to_str =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::to_str(void)

{
  (*(code *)PTR_to_str_00b01aa8)();
  return;
}


// ===== 00ab9ae0  <libdiscore_common::core::experiment_cacher::[0]::libdiscore_common::core::experiment_cacher::ExperimentCacher>::get_config =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<libdiscore_common::core::experiment_cacher::[0]::libdiscore_common::core::experiment_cacher::ExperimentCacher>
::get_config(void)

{
  (*(code *)PTR_get_config_00b01ab0)();
  return;
}


// ===== 00ab9af0  core::panicking::panic_cannot_unwind =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall core::panicking::panic_cannot_unwind(void)

{
  (*(code *)PTR_panic_cannot_unwind_00b01ab8)();
  return;
}


// ===== 00ab9b00  log::set_boxed_logger =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall log::set_boxed_logger(void)

{
  (*(code *)PTR_set_boxed_logger_00b01ac0)();
  return;
}


// ===== 00ab9b10  std::io::stdio::_eprint =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall std::io::stdio::_eprint(void)

{
  (*(code *)PTR__eprint_00b01ac8)();
  return;
}


// ===== 00ab9b20  <jsi::registry::jsi::registry::RuntimeStateRegistry>::unregister_runtime =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <jsi::registry::jsi::registry::RuntimeStateRegistry>::unregister_runtime(void)

{
  (*(code *)PTR_unregister_runtime_00b01ad0)();
  return;
}


// ===== 00ab9b30  jsi_sys::ffi::base::ffi::PropNameID_forUtf8 =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall jsi_sys::ffi::base::ffi::PropNameID_forUtf8(void)

{
  (*(code *)PTR_PropNameID_forUtf8_00b01ad8)();
  return;
}


// ===== 00ab9b40  <jsi::handle::jsi::handle::RuntimeHandle>::global =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <jsi::handle::jsi::handle::RuntimeHandle>::global(void)

{
  (*(code *)PTR_global_00b01ae0)();
  return;
}


// ===== 00ab9b50  <jsi::object::Object_as_jsi::object::GetTypedProperty>::get_typed =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <jsi::object::Object_as_jsi::object::GetTypedProperty>::get_typed(void)

{
  (*(code *)PTR_get_typed_00b01ae8)();
  return;
}


// ===== 00ab9b60  <jsi::registry::jsi::registry::RuntimeStateRegistry>::register_runtime =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <jsi::registry::jsi::registry::RuntimeStateRegistry>::register_runtime(void)

{
  (*(code *)PTR_register_runtime_00b01af0)();
  return;
}


// ===== 00ab9b70  <react_common::ffi::base::ffi::CallInvoker_as_cxx::shared_ptr::SharedPtrTarget>::__clone =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<react_common::ffi::base::ffi::CallInvoker_as_cxx::shared_ptr::SharedPtrTarget>::__clone(void)

{
  (*(code *)PTR___clone_00b01af8)();
  return;
}


// ===== 00ab9b80  <jsi::handle::RuntimeHandle_as_react_common::runtime_executor::RuntimeHandleExt>::register_call_invoker =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<jsi::handle::RuntimeHandle_as_react_common::runtime_executor::RuntimeHandleExt>::
register_call_invoker(void)

{
  (*(code *)PTR_register_call_invoker_00b01b00)();
  return;
}


// ===== 00ab9b90  <libdiscore_common::stores::dispatcher::[5]::libdiscore_common::stores::dispatcher::Dispatcher<libdiscore_common::actions::Action>>::with_defaults =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<libdiscore_common::stores::dispatcher::[5]::libdiscore_common::stores::dispatcher::Dispatcher<libdiscore_common::actions::Action>>
::with_defaults(void)

{
  (*(code *)PTR_with_defaults_00b01b08)();
  return;
}


// ===== 00ab9ba0  <libdiscore_common::core::http::[5]::libdiscore_common::core::http::PollingHttpClient>::new =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<libdiscore_common::core::http::[5]::libdiscore_common::core::http::PollingHttpClient>::new(void)

{
  (*(code *)PTR_new_00b01b10)();
  return;
}


// ===== 00ab9bb0  <libdiscore_common::core::http::HttpError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <libdiscore_common::core::http::HttpError_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_00b01b18)();
  return;
}


// ===== 00ab9bc0  <core::io::error::Error_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <core::io::error::Error_as_core::fmt::Debug>::fmt(void)

{
  (*(code *)PTR_fmt_00b01b20)();
  return;
}


// ===== 00ab9bd0  <serde_json::error::Error_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <serde_json::error::Error_as_core::fmt::Debug>::fmt(void)

{
  (*(code *)PTR_fmt_00b01b28)();
  return;
}


// ===== 00ab9be0  <serde_json::error::Error_as_core::error::Error>::source =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <serde_json::error::Error_as_core::error::Error>::source(void)

{
  (*(code *)PTR_source_00b01b30)();
  return;
}


// ===== 00ab9bf0  <core::io::error::Error_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <core::io::error::Error_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_00b01b38)();
  return;
}


// ===== 00ab9c00  <core::io::error::Error_as_core::error::Error>::source =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <core::io::error::Error_as_core::error::Error>::source(void)

{
  (*(code *)PTR_source_00b01b40)();
  return;
}


// ===== 00ab9c10  <reqwest::error::Error_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <reqwest::error::Error_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_00b01b48)();
  return;
}


// ===== 00ab9c20  <reqwest::error::Error_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <reqwest::error::Error_as_core::fmt::Debug>::fmt(void)

{
  (*(code *)PTR_fmt_00b01b50)();
  return;
}


// ===== 00ab9c30  <alloc::string::FromUtf8Error_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <alloc::string::FromUtf8Error_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_00b01b58)();
  return;
}


// ===== 00ab9c40  <jsi::array::[0]::jsi::array::Array>::with_length =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <jsi::array::[0]::jsi::array::Array>::with_length(void)

{
  (*(code *)PTR_with_length_00b01b60)();
  return;
}


// ===== 00ab9c50  <jsi_sys::ffi::base::ffi::JsiArray_as_cxx::unique_ptr::UniquePtrTarget>::__get =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <jsi_sys::ffi::base::ffi::JsiArray_as_cxx::unique_ptr::UniquePtrTarget>::__get(void)

{
  (*(code *)PTR___get_00b01b68)();
  return;
}


// ===== 00ab9c60  jsi_sys::ffi::base::ffi::Array_setValueAtIndex =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall jsi_sys::ffi::base::ffi::Array_setValueAtIndex(void)

{
  (*(code *)PTR_Array_setValueAtIndex_00b01b70)();
  return;
}


// ===== 00ab9c70  <jsi_sys::ffi::base::ffi::JsiArray_as_cxx::unique_ptr::UniquePtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiArray_as_cxx::unique_ptr::UniquePtrTarget>::__drop(void)

{
  (*(code *)PTR___drop_00b01b78)();
  return;
}


// ===== 00ab9c80  <std::path::[16]::std::path::Path>::_join =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <std::path::[16]::std::path::Path>::_join(void)

{
  (*(code *)PTR__join_00b01b80)();
  return;
}


// ===== 00ab9c90  <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b01b88)();
  return;
}


// ===== 00ab9ca0  <alloc::sync::[n]::alloc::sync::Arc<std::fs::DirEntry>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <alloc::sync::[n]::alloc::sync::Arc<std::fs::DirEntry>>::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b01b90)();
  return;
}


// ===== 00ab9cb0  <alloc::sync::[n]::alloc::sync::Arc<std::collections::hash::set::HashSet<smol_str::SmolStr>>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<std::collections::hash::set::HashSet<smol_str::SmolStr>>>::
drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b01b98)();
  return;
}


// ===== 00ab9cc0  <alloc::sync::[n]::alloc::sync::Arc<[smol_str::SmolStr]>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <alloc::sync::[n]::alloc::sync::Arc<[smol_str::SmolStr]>>::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b01ba0)();
  return;
}


// ===== 00ab9cd0  <EXTERNAL>::memmove =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00b01ba8)();
  return pvVar1;
}


// ===== 00ab9ce0  ryu::pretty::format64 =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall ryu::pretty::format64(void)

{
  (*(code *)PTR_format64_00b01bb0)();
  return;
}


// ===== 00ab9cf0  core::option::unwrap_failed =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall core::option::unwrap_failed(void)

{
  (*(code *)PTR_unwrap_failed_00b01bb8)();
  return;
}


// ===== 00ab9d00  core::str::converts::from_utf8 =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall core::str::converts::from_utf8(void)

{
  (*(code *)PTR_from_utf8_00b01bc0)();
  return;
}


// ===== 00ab9d10  <libdiscore_common::core::snowflake::SnowflakeInner_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<libdiscore_common::core::snowflake::SnowflakeInner_as_core::str::traits::FromStr>::from_str(void)

{
  (*(code *)PTR_from_str_00b01bc8)();
  return;
}


// ===== 00ab9d20  <serde_json::error::Error_as_serde::de::Error>::invalid_value =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <serde_json::error::Error_as_serde::de::Error>::invalid_value(void)

{
  (*(code *)PTR_invalid_value_00b01bd0)();
  return;
}


// ===== 00ab9d30  <serde_json::read::StrRead_as_serde_json::read::Read>::peek_position =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <serde_json::read::StrRead_as_serde_json::read::Read>::peek_position(void)

{
  (*(code *)PTR_peek_position_00b01bd8)();
  return;
}


// ===== 00ab9d40  <serde_json::error::[0]::serde_json::error::Error>::syntax =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <serde_json::error::[0]::serde_json::error::Error>::syntax(void)

{
  (*(code *)PTR_syntax_00b01be0)();
  return;
}


// ===== 00ab9d50  <serde_json::de::[3]::serde_json::de::Deserializer<serde_json::read::StrRead>>::parse_decimal_overflow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<serde_json::de::[3]::serde_json::de::Deserializer<serde_json::read::StrRead>>::
parse_decimal_overflow(void)

{
  (*(code *)PTR_parse_decimal_overflow_00b01be8)();
  return;
}


// ===== 00ab9d60  <serde_json::de::[3]::serde_json::de::Deserializer<serde_json::read::StrRead>>::parse_long_integer =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<serde_json::de::[3]::serde_json::de::Deserializer<serde_json::read::StrRead>>::parse_long_integer
          (void)

{
  (*(code *)PTR_parse_long_integer_00b01bf0)();
  return;
}


// ===== 00ab9d70  <serde_json::de::[3]::serde_json::de::Deserializer<serde_json::read::StrRead>>::parse_exponent_overflow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<serde_json::de::[3]::serde_json::de::Deserializer<serde_json::read::StrRead>>::
parse_exponent_overflow(void)

{
  (*(code *)PTR_parse_exponent_overflow_00b01bf8)();
  return;
}


// ===== 00ab9d80  <serde_json::de::[2]::serde_json::de::ParserNumber>::invalid_type =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <serde_json::de::[2]::serde_json::de::ParserNumber>::invalid_type(void)

{
  (*(code *)PTR_invalid_type_00b01c00)();
  return;
}


// ===== 00ab9d90  <serde_json::read::StrRead_as_serde_json::read::Read>::position =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <serde_json::read::StrRead_as_serde_json::read::Read>::position(void)

{
  (*(code *)PTR_position_00b01c08)();
  return;
}


// ===== 00ab9da0  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<addr2line::function::FunctionAddress>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<addr2line::function::FunctionAddress>>::grow_one(void)

{
  (*(code *)PTR_grow_one_00b01c10)();
  return;
}


// ===== 00ab9db0  core::str::slice_error_fail =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall core::str::slice_error_fail(void)

{
  (*(code *)PTR_slice_error_fail_00b01c18)();
  return;
}


// ===== 00ab9dc0  <libdiscore_common::core::snowflake::SnowflakeVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<libdiscore_common::core::snowflake::SnowflakeVisitor_as_serde::de::Visitor>::expecting(void)

{
  (*(code *)PTR_expecting_00b01c20)();
  return;
}


// ===== 00ab9dd0  <<libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__FieldVisitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

void <<libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__FieldVisitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(void)

{
  (*(code *)PTR_expecting_00b01c28)();
  return;
}


// ===== 00ab9de0  <<libdiscore_common[1cb84820f9455fa0]::actions::notes::UserNoteUpdate_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

void <<libdiscore_common[1cb84820f9455fa0]::actions::notes::UserNoteUpdate_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(void)

{
  (*(code *)PTR_expecting_00b01c30)();
  return;
}


// ===== 00ab9df0  <<libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__FieldVisitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

void <<libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__FieldVisitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(void)

{
  (*(code *)PTR_expecting_00b01c38)();
  return;
}


// ===== 00ab9e00  <<libdiscore_common[1cb84820f9455fa0]::actions::notes::UserNoteLoadStart_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

void <<libdiscore_common[1cb84820f9455fa0]::actions::notes::UserNoteLoadStart_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(void)

{
  (*(code *)PTR_expecting_00b01c40)();
  return;
}


// ===== 00ab9e10  <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(void)

{
  (*(code *)PTR_ref_dec_00b01c48)();
  return;
}


// ===== 00ab9e20  <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::dealloc =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::dealloc(void)

{
  (*(code *)PTR_dealloc_00b01c50)();
  return;
}


// ===== 00ab9e30  core::option::expect_failed =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall core::option::expect_failed(void)

{
  (*(code *)PTR_expect_failed_00b01c58)();
  return;
}


// ===== 00ab9e40  <smol_str::[B]::smol_str::Repr>::new =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <smol_str::[B]::smol_str::Repr>::new(void)

{
  (*(code *)PTR_new_00b01c60)();
  return;
}


// ===== 00ab9e50  <alloc::string::String_as_core::clone::Clone>::clone =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <alloc::string::String_as_core::clone::Clone>::clone(void)

{
  (*(code *)PTR_clone_00b01c68)();
  return;
}


// ===== 00ab9e60  <jsi::registry::jsi::registry::RuntimeState>::for_runtime =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <jsi::registry::jsi::registry::RuntimeState>::for_runtime(void)

{
  (*(code *)PTR_for_runtime_00b01c70)();
  return;
}


// ===== 00ab9e70  <parking_lot::raw_rwlock::[8]::parking_lot::raw_rwlock::RawRwLock>::unlock_shared_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<parking_lot::raw_rwlock::[8]::parking_lot::raw_rwlock::RawRwLock>::unlock_shared_slow(void)

{
  (*(code *)PTR_unlock_shared_slow_00b01c78)();
  return;
}


// ===== 00ab9e80  <std::fs::[j]::std::fs::OpenOptions>::_open =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <std::fs::[j]::std::fs::OpenOptions>::_open(void)

{
  (*(code *)PTR__open_00b01c80)();
  return;
}


// ===== 00ab9e90  std::sys::random::linux::hashmap_random_keys =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall std::sys::random::linux::hashmap_random_keys(void)

{
  (*(code *)PTR_hashmap_random_keys_00b01c88)();
  return;
}


// ===== 00ab9ea0  <EXTERNAL>::pthread_setspecific =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_setspecific(pthread_key_t __key,void *__pointer)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_setspecific_00b01c90)(__key);
  return iVar1;
}


// ===== 00ab9eb0  <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>::
drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b01c98)();
  return;
}


// ===== 00ab9ec0  <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::drop_slow
          (void)

{
  (*(code *)PTR_drop_slow_00b01ca0)();
  return;
}


// ===== 00ab9ed0  std::panicking::catch_unwind::cleanup =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall std::panicking::catch_unwind::cleanup(void)

{
  (*(code *)PTR_cleanup_00b01ca8)();
  return;
}


// ===== 00ab9ee0  std::panic::resume_unwind =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall std::panic::resume_unwind(void)

{
  (*(code *)PTR_resume_unwind_00b01cb0)();
  return;
}


// ===== 00ab9ef0  std::sys::fs::remove_file =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall std::sys::fs::remove_file(void)

{
  (*(code *)PTR_remove_file_00b01cb8)();
  return;
}


// ===== 00ab9f00  <std::fs::[D]::std::fs::DirBuilder>::_create =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <std::fs::[D]::std::fs::DirBuilder>::_create(void)

{
  (*(code *)PTR__create_00b01cc0)();
  return;
}


// ===== 00ab9f10  std::sys::fs::remove_dir_all =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall std::sys::fs::remove_dir_all(void)

{
  (*(code *)PTR_remove_dir_all_00b01cc8)();
  return;
}


// ===== 00ab9f20  std::sys::fs::metadata =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall std::sys::fs::metadata(void)

{
  (*(code *)PTR_metadata_00b01cd0)();
  return;
}


// ===== 00ab9f30  std::sys::fs::read_dir =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall std::sys::fs::read_dir(void)

{
  (*(code *)PTR_read_dir_00b01cd8)();
  return;
}


// ===== 00ab9f40  std::process::abort =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall std::process::abort(void)

{
  (*(code *)PTR_abort_00b01ce0)();
  return;
}


// ===== 00ab9f50  <libdiscore_common::stores::guilds::GuildStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>::handle_reset =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<libdiscore_common::stores::guilds::GuildStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>
::handle_reset(void)

{
  (*(code *)PTR_handle_reset_00b01ce8)();
  return;
}


// ===== 00ab9f60  <libdiscore_common::stores::guilds::GuildStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>::commit_changes =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<libdiscore_common::stores::guilds::GuildStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>
::commit_changes(void)

{
  (*(code *)PTR_commit_changes_00b01cf0)();
  return;
}


// ===== 00ab9f70  <libdiscore_common::stores::guilds::GuildStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>::database_configurations =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<libdiscore_common::stores::guilds::GuildStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>
::database_configurations(void)

{
  (*(code *)PTR_database_configurations_00b01cf8)();
  return;
}


// ===== 00ab9f80  <libdiscore_common::stores::guilds::GuildStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>::handle_action =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<libdiscore_common::stores::guilds::GuildStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>
::handle_action(void)

{
  (*(code *)PTR_handle_action_00b01d00)();
  return;
}


// ===== 00ab9f90  <<libdiscore_common::stores::guilds::Guild_as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<libdiscore_common::stores::guilds::Guild_as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>
::expecting(void)

{
  (*(code *)PTR_expecting_00b01d08)();
  return;
}


// ===== 00ab9fa0  <tokio::time::sleep::Sleep_as_core::future::future::Future>::poll =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tokio::time::sleep::Sleep_as_core::future::future::Future>::poll(void)

{
  (*(code *)PTR_poll_00b01d10)();
  return;
}


// ===== 00ab9fb0  <libdiscore_common::core::experiment_cacher::[0]::libdiscore_common::core::experiment_cacher::ExperimentCacher>::clear_cache =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<libdiscore_common::core::experiment_cacher::[0]::libdiscore_common::core::experiment_cacher::ExperimentCacher>
::clear_cache(void)

{
  (*(code *)PTR_clear_cache_00b01d18)();
  return;
}


// ===== 00ab9fc0  <jsi::string::String_as_jsi::value::FromValueRef>::from_value_ref =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <jsi::string::String_as_jsi::value::FromValueRef>::from_value_ref(void)

{
  (*(code *)PTR_from_value_ref_00b01d20)();
  return;
}


// ===== 00ab9fd0  <jsi::handle::jsi::handle::RuntimeHandle>::state =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <jsi::handle::jsi::handle::RuntimeHandle>::state(void)

{
  (*(code *)PTR_state_00b01d28)();
  return;
}


// ===== 00ab9fe0  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(core[bcece726f298455b]::any::TypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::any::Any+core[bcece726f298455b]::marker::Send>)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<core[bcece726f298455b]::any::TypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::any::Any+core[bcece726f298455b]::marker::Send>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}> =====

void <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(core[bcece726f298455b]::any::TypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::any::Any+core[bcece726f298455b]::marker::Send>)>>
     ::reserve_rehash::
     <hashbrown[32fc5d502e7f9af5]::map::make_hasher<core[bcece726f298455b]::any::TypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::any::Any_core[bcece726f298455b]::marker::Send>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
               (void)

{
  (*(code *)
    PTR_<hashbrown[32fc5d502e7f9af5]_map_make_hasher<core[bcece726f298455b]_any_TypeId,alloc[c1f8e832b0d782c7]_boxed_Box<dyn_core[bcece726f298455b]_any_Any_core[bcece726f298455b]_marker_Send>,core[bcece726f298455b]_hash_BuildHasherDefault<fxhash[1f38be453d3dbf22]_FxHasher>>__closure_0_>_00b01d30
  )();
  return;
}


// ===== 00ab9ff0  <libdiscore_common::core::experiment_cacher::[0]::libdiscore_common::core::experiment_cacher::ExperimentCacher>::flush_to_cache =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<libdiscore_common::core::experiment_cacher::[0]::libdiscore_common::core::experiment_cacher::ExperimentCacher>
::flush_to_cache(void)

{
  (*(code *)PTR_flush_to_cache_00b01d38)();
  return;
}


// ===== 00aba000  <std::sys::stdio::unix::Stderr_as_core::io::write::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <std::sys::stdio::unix::Stderr_as_core::io::write::Write>::write(void)

{
  (*(code *)PTR_write_00b01d40)();
  return;
}


// ===== 00aba010  core::io::error::os_functions::get_os_functions =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall core::io::error::os_functions::get_os_functions(void)

{
  (*(code *)PTR_get_os_functions_00b01d48)();
  return;
}


// ===== 00aba020  <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<()>>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<()>>>::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b01d50)();
  return;
}


// ===== 00aba030  <alloc::sync::[n]::alloc::sync::Arc<libdiscore_common::stores::blocked_domains::BlockedDomainsStore>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<libdiscore_common::stores::blocked_domains::BlockedDomainsStore>>
::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b01d58)();
  return;
}


// ===== 00aba040  <EXTERNAL>::close =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00b01d60)(__fd);
  return iVar1;
}


// ===== 00aba050  <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<libdiscore_common[1cb84820f9455fa0]::core::http::BackendHttpRequest,tokio[8c8895dbfa691109]::sync::mpsc::bounded::Semaphore>>>::drop_slow =====

void <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<libdiscore_common[1cb84820f9455fa0]::core::http::BackendHttpRequest,tokio[8c8895dbfa691109]::sync::mpsc::bounded::Semaphore>>>
     ::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b01d68)();
  return;
}


// ===== 00aba060  <tokio::runtime::task::state::tokio::runtime::task::state::State>::drop_join_handle_fast =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<tokio::runtime::task::state::tokio::runtime::task::state::State>::drop_join_handle_fast(void)

{
  (*(code *)PTR_drop_join_handle_fast_00b01d70)();
  return;
}


// ===== 00aba070  <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::drop_join_handle_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::drop_join_handle_slow(void)

{
  (*(code *)PTR_drop_join_handle_slow_00b01d78)();
  return;
}


// ===== 00aba080  <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tokio::sync::oneshot::[9]::tokio::sync::oneshot::State>::set_complete(void)

{
  (*(code *)PTR_set_complete_00b01d80)();
  return;
}


// ===== 00aba090  <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>::drop_slow =====

void <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
     ::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b01d88)();
  return;
}


// ===== 00aba0a0  <alloc::sync::[n]::alloc::sync::Arc<std::fs::File>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <alloc::sync::[n]::alloc::sync::Arc<std::fs::File>>::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b01d90)();
  return;
}


// ===== 00aba0b0  <alloc::sync::[n]::alloc::sync::Arc<std::sys::fs::unix::InnerReadDir>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<std::sys::fs::unix::InnerReadDir>>::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b01d98)();
  return;
}


// ===== 00aba0c0  <tokio::runtime::time::entry::TimerEntry_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tokio::runtime::time::entry::TimerEntry_as_core::ops::drop::Drop>::drop(void)

{
  (*(code *)PTR_drop_00b01da0)();
  return;
}


// ===== 00aba0d0  core::panicking::panic_const::panic_const_async_fn_resumed =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall core::panicking::panic_const::panic_const_async_fn_resumed(void)

{
  (*(code *)PTR_panic_const_async_fn_resumed_00b01da8)();
  return;
}


// ===== 00aba0e0  libdiscore_common::core::cache::native::cache_dir_path =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall libdiscore_common::core::cache::native::cache_dir_path(void)

{
  (*(code *)PTR_cache_dir_path_00b01db0)();
  return;
}


// ===== 00aba0f0  <libdiscore_common::core::http::[2]::libdiscore_common::core::http::HttpClient>::new =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<libdiscore_common::core::http::[2]::libdiscore_common::core::http::HttpClient>::new(void)

{
  (*(code *)PTR_new_00b01db8)();
  return;
}


// ===== 00aba100  libdiscore_common::stores::blocked_domains::deserialize_blocked_domains =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall libdiscore_common::stores::blocked_domains::deserialize_blocked_domains(void)

{
  (*(code *)PTR_deserialize_blocked_domains_00b01dc0)();
  return;
}


// ===== 00aba110  <libdiscore_common::core::experiment_cacher::libdiscore_common::core::experiment_cacher::ExperimentsConfigSnapshot>::from_cached_bytes =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<libdiscore_common::core::experiment_cacher::libdiscore_common::core::experiment_cacher::ExperimentsConfigSnapshot>
::from_cached_bytes(void)

{
  (*(code *)PTR_from_cached_bytes_00b01dc8)();
  return;
}


// ===== 00aba120  core::panicking::panic_const::panic_const_async_fn_resumed_panic =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall core::panicking::panic_const::panic_const_async_fn_resumed_panic(void)

{
  (*(code *)PTR_panic_const_async_fn_resumed_panic_00b01dd0)();
  return;
}


// ===== 00aba130  tokio::time::sleep::sleep =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall tokio::time::sleep::sleep(void)

{
  (*(code *)PTR_sleep_00b01dd8)();
  return;
}


// ===== 00aba140  <libdiscore_common::core::bucket::libdiscore_common::core::bucket::Bucket>::all_bucket_names =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<libdiscore_common::core::bucket::libdiscore_common::core::bucket::Bucket>::all_bucket_names(void)

{
  (*(code *)PTR_all_bucket_names_00b01de0)();
  return;
}


// ===== 00aba150  <std::path::[16]::std::path::Path>::to_path_buf =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <std::path::[16]::std::path::Path>::to_path_buf(void)

{
  (*(code *)PTR_to_path_buf_00b01de8)();
  return;
}


// ===== 00aba160  <alloc::io::error::core::io::error::Error>::new<&str> =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <alloc::io::error::core::io::error::Error>::new<&str>(void)

{
  (*(code *)PTR_new<&str>_00b01df0)();
  return;
}


// ===== 00aba170  <tokio::fs::read_dir::tokio::fs::read_dir::ReadDir>::poll_next_entry =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tokio::fs::read_dir::tokio::fs::read_dir::ReadDir>::poll_next_entry(void)

{
  (*(code *)PTR_poll_next_entry_00b01df8)();
  return;
}


// ===== 00aba180  <tokio::fs::read_dir::tokio::fs::read_dir::DirEntry>::path =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tokio::fs::read_dir::tokio::fs::read_dir::DirEntry>::path(void)

{
  (*(code *)PTR_path_00b01e00)();
  return;
}


// ===== 00aba190  <std::path::[16]::std::path::Path>::is_dir =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <std::path::[16]::std::path::Path>::is_dir(void)

{
  (*(code *)PTR_is_dir_00b01e08)();
  return;
}


// ===== 00aba1a0  <std::path::[16]::std::path::Path>::file_name =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <std::path::[16]::std::path::Path>::file_name(void)

{
  (*(code *)PTR_file_name_00b01e10)();
  return;
}


// ===== 00aba1b0  <libdiscore_common::core::experiment_cacher::libdiscore_common::core::experiment_cacher::ExperimentsConfigSnapshot>::to_cached_vec =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<libdiscore_common::core::experiment_cacher::libdiscore_common::core::experiment_cacher::ExperimentsConfigSnapshot>
::to_cached_vec(void)

{
  (*(code *)PTR_to_cached_vec_00b01e18)();
  return;
}


// ===== 00aba1c0  <tokio::fs::file::File_as_tokio::io::async_write::AsyncWrite>::poll_write =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tokio::fs::file::File_as_tokio::io::async_write::AsyncWrite>::poll_write(void)

{
  (*(code *)PTR_poll_write_00b01e20)();
  return;
}


// ===== 00aba1d0  <tokio::fs::file::tokio::fs::file::File>::from_std =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tokio::fs::file::tokio::fs::file::File>::from_std(void)

{
  (*(code *)PTR_from_std_00b01e28)();
  return;
}


// ===== 00aba1e0  <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter(void)

{
  (*(code *)PTR_enter_00b01e30)();
  return;
}


// ===== 00aba1f0  <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(void)

{
  (*(code *)PTR_drop_00b01e38)();
  return;
}


// ===== 00aba200  tokio::task::coop::stop =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall tokio::task::coop::stop(void)

{
  (*(code *)PTR_stop_00b01e40)();
  return;
}


// ===== 00aba210  <bytes::bytes::bytes::bytes::Bytes>::copy_from_slice =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <bytes::bytes::bytes::bytes::Bytes>::copy_from_slice(void)

{
  (*(code *)PTR_copy_from_slice_00b01e48)();
  return;
}


// ===== 00aba220  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::actions::ActionTypes,())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::actions::ActionTypes, =====

void <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::actions::
     ActionTypes,())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::
     make_hasher<libdiscore_common[1cb84820f9455fa0]::actions::ActionTypes_(void)

{
  (*(code *)PTR_ActionTypes__00b01e50)();
  return;
}


// ===== 00aba230  <smol_str::SmolStr_as_core::cmp::PartialEq>::eq =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <smol_str::SmolStr_as_core::cmp::PartialEq>::eq(void)

{
  (*(code *)PTR_eq_00b01e58)();
  return;
}


// ===== 00aba240  <tokio::time::sleep::tokio::time::sleep::Sleep>::is_elapsed =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tokio::time::sleep::tokio::time::sleep::Sleep>::is_elapsed(void)

{
  (*(code *)PTR_is_elapsed_00b01e60)();
  return;
}


// ===== 00aba250  <tokio::time::instant::Instant_as_core::ops::arith::Sub>::sub =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tokio::time::instant::Instant_as_core::ops::arith::Sub>::sub(void)

{
  (*(code *)PTR_sub_00b01e68)();
  return;
}


// ===== 00aba260  <tokio::time::instant::Instant_as_core::ops::arith::Add<{backref_16}::time::Duration>>::add =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<tokio::time::instant::Instant_as_core::ops::arith::Add<{backref_16}::time::Duration>>::add(void)

{
  (*(code *)PTR_add_00b01e70)();
  return;
}


// ===== 00aba270  tokio::time::sleep::sleep_until =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall tokio::time::sleep::sleep_until(void)

{
  (*(code *)PTR_sleep_until_00b01e78)();
  return;
}


// ===== 00aba280  <tokio::time::instant::tokio::time::instant::Instant>::now =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tokio::time::instant::tokio::time::instant::Instant>::now(void)

{
  (*(code *)PTR_now_00b01e80)();
  return;
}


// ===== 00aba290  <tokio::time::sleep::tokio::time::sleep::Sleep>::reset =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tokio::time::sleep::tokio::time::sleep::Sleep>::reset(void)

{
  (*(code *)PTR_reset_00b01e88)();
  return;
}


// ===== 00aba2a0  core[bcece726f298455b]::panicking::assert_failed::<core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::task::core::Header>>,core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::task::core::Header>>> =====

void core[bcece726f298455b]::panicking::assert_failed::
     <core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::task::core::Header>>,core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::task::core::Header>>>
               (void)

{
  (*(code *)
    PTR_<core[bcece726f298455b]_option_Option<core[bcece726f298455b]_ptr_non_null_NonNull<tokio[8c8895dbfa691109]_runtime_task_core_Header>>,core[bcece726f298455b]_option_Option<core[bcece726f298455b]_ptr_non_null_NonNull<tokio[8c8895dbfa691109]_runtime_task_core_Header>>>_00b01e90
  )();
  return;
}


// ===== 00aba2b0  <alloc::sync::[n]::alloc::sync::Arc<std::thread::scoped::ScopeData>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<std::thread::scoped::ScopeData>>::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b01e98)();
  return;
}


// ===== 00aba2c0  <jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__drop(void)

{
  (*(code *)PTR___drop_00b01ea0)();
  return;
}


// ===== 00aba2d0  <alloc[c1f8e832b0d782c7]::sync::Arc<libdiscore_common[1cb84820f9455fa0]::core::maybe_mutex::MaybeRwLock<std[17aff9129faa4dc5]::collections::hash::map::HashMap<u32,libdiscore_common[1cb84820f9455fa0]::core::http::ActiveRequest>>>>::drop_slow =====

void <alloc[c1f8e832b0d782c7]::sync::Arc<libdiscore_common[1cb84820f9455fa0]::core::maybe_mutex::MaybeRwLock<std[17aff9129faa4dc5]::collections::hash::map::HashMap<u32,libdiscore_common[1cb84820f9455fa0]::core::http::ActiveRequest>>>>
     ::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b01ea8)();
  return;
}


// ===== 00aba2e0  alloc::sync::arcinner_layout_for_value_layout =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall alloc::sync::arcinner_layout_for_value_layout(void)

{
  (*(code *)PTR_arcinner_layout_for_value_layout_00b01eb0)();
  return;
}


// ===== 00aba2f0  std::panicking::begin_panic<&str> =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall std::panicking::begin_panic<&str>(void)

{
  (*(code *)PTR_begin_panic<&str>_00b01eb8)();
  return;
}


// ===== 00aba300  <jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__get =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__get(void)

{
  (*(code *)PTR___get_00b01ec0)();
  return;
}


// ===== 00aba310  <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get(void)

{
  (*(code *)PTR___get_00b01ec8)();
  return;
}


// ===== 00aba320  <jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__get =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__get(void)

{
  (*(code *)PTR___get_00b01ed0)();
  return;
}


// ===== 00aba330  <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get(void)

{
  (*(code *)PTR___get_00b01ed8)();
  return;
}


// ===== 00aba340  <alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>as_tokio::runtime::task::Schedule>::schedule =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>as_tokio::runtime::task::Schedule>
::schedule(void)

{
  (*(code *)PTR_schedule_00b01ee0)();
  return;
}


// ===== 00aba350  <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow(void)

{
  (*(code *)PTR_capacity_overflow_00b01ee8)();
  return;
}


// ===== 00aba360  <hashbrown::raw::hashbrown::raw::Fallibility>::alloc_err =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <hashbrown::raw::hashbrown::raw::Fallibility>::alloc_err(void)

{
  (*(code *)PTR_alloc_err_00b01ef0)();
  return;
}


// ===== 00aba370  <chrono::datetime::[9]::chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>>::parse_from_rfc3339 =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<chrono::datetime::[9]::chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>>::
parse_from_rfc3339(void)

{
  (*(code *)PTR_parse_from_rfc3339_00b01ef8)();
  return;
}


// ===== 00aba380  <libdiscore_common::stores::notes::NoteStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>::handle_reset =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<libdiscore_common::stores::notes::NoteStore_as_libdiscore_common::stores::dispatcher::Store<libdiscore_common::actions::Action>>
::handle_reset(void)

{
  (*(code *)PTR_handle_reset_00b01f00)();
  return;
}


