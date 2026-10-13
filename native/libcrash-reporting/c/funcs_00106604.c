// ===== 00106604  _FINI_1 =====

void _FINI_1(void)

{
  __cxa_finalize(&PTR_LOOP_00111250);
  return;
}


// ===== 00106614  FUN_00106614 =====

void FUN_00106614(void)

{
  return;
}


// ===== 0010661c  _FINI_0 =====

void _FINI_0(void)

{
  FUN_00106614();
  return;
}


// ===== 00106624  FUN_00106624 =====

void FUN_00106624(code *UNRECOVERED_JUMPTABLE)

{
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00106630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}


// ===== 00106638  FUN_00106638 =====

void FUN_00106638(undefined8 param_1)

{
  __cxa_atexit(FUN_00106624,param_1,&PTR_LOOP_00111250);
  return;
}


// ===== 00106654  FUN_00106654 =====

void FUN_00106654(void)

{
  __register_atfork();
  return;
}


// ===== 00106664  JNI_OnLoad =====

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
  local_60[0] = &PTR_FUN_00111268;
  uVar2 = facebook::jni::initialize(param_1,(function *)local_60);
  if ((undefined ***)local_40 == local_60) {
    lVar4 = 4;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_001066d0;
    lVar4 = 5;
    pppuVar3 = (undefined ***)local_40;
  }
  (**(code **)((long)*pppuVar3 + lVar4 * 8))(pppuVar3);
LAB_001066d0:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001066f8  FUN_001066f8 =====

void FUN_001066f8(void)

{
  return;
}


// ===== 001066fc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001116e8)();
  return;
}


// ===== 00106700  FUN_00106700 =====

void FUN_00106700(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_00111268;
  return;
}


// ===== 00106724  FUN_00106724 =====

void FUN_00106724(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00111268;
  return;
}


// ===== 00106734  FUN_00106734 =====

void FUN_00106734(void)

{
  return;
}


// ===== 00106738  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001116e8)();
  return;
}


// ===== 0010673c  discord::NativeCrashReporting::registerNatives =====

void discord::NativeCrashReporting::registerNatives(void)

{
  (*(code *)PTR_registerNatives_001116f8)();
  return;
}


// ===== 00106740  FUN_00106740 =====

long FUN_00106740(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) != "Z10JNI_OnLoadE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0010675c  FUN_0010675c =====

pointer_____offset_0x10___ * FUN_0010675c(void)

{
  return &PTR_vtable_00111338;
}


// ===== 00106768  FUN_00106768 =====

void FUN_00106768(void)

{
  bad_array_new_length *this;
  
  this = (bad_array_new_length *)__cxa_allocate_exception(8);
  std::bad_array_new_length::bad_array_new_length(this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_typeinfo_001115c0,PTR__bad_array_new_length_001115c8);
}


// ===== 0010679c  FUN_0010679c =====

void FUN_0010679c(void)

{
  __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 001067ac  discord::NativeCrashReporting::registerNatives =====

/* discord::NativeCrashReporting::registerNatives() */

void discord::NativeCrashReporting::registerNatives(void)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((*PTR_cls_001115d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_001115d0), iVar2 != 0))
  {
                    /* try { // try from 00106854 to 00106867 has its CatchHandler @ 00106878 */
    facebook::jni::findClassStatic(PTR_kBaseName_001115e0);
    __cxa_guard_release(PTR_cls_001115d0);
  }
  uVar4 = *(undefined8 *)PTR_cls_001115d8;
  puStack_38 = PTR_kDescriptor_001112e0;
  local_40 = PTR_s_initNative_001112d8;
  local_30 = PTR_call_001112e8;
  plVar3 = (long *)facebook::jni::Environment::current();
  iVar2 = (**(code **)(*plVar3 + 0x6b8))(plVar3,uVar4,&local_40,1);
  facebook::jni::throwCppExceptionIf(iVar2 != 0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001068a4  facebook::jni::detail::FunctionWrapperWithJniEntryPoint<void(*)(facebook::jni::alias_ref<discord::NativeCrashReporting>,unsigned_char),&discord::NativeCrashReporting::initNative,discord::NativeCrashReporting,void,unsigned_char>::call =====

/* facebook::jni::detail::FunctionWrapperWithJniEntryPoint<void
   (*)(facebook::jni::alias_ref<discord::NativeCrashReporting>, unsigned char),
   &discord::NativeCrashReporting::initNative, discord::NativeCrashReporting, void, unsigned
   char>::call(_JNIEnv*, _jobject*, unsigned char) */

void facebook::jni::detail::
     FunctionWrapperWithJniEntryPoint<void(*)(facebook::jni::alias_ref<discord::NativeCrashReporting>,unsigned_char),&discord::NativeCrashReporting::initNative,discord::NativeCrashReporting,void,unsigned_char>
     ::call(_JNIEnv *param_1,_jobject *param_2,uchar param_3)

{
  FunctionWrapper<void(*)(facebook::jni::alias_ref<discord::NativeCrashReporting>,unsigned_char),discord::NativeCrashReporting,void,unsigned_char>
  ::call(param_1,param_2,param_3,(_func_void_alias_ref_uchar *)PTR_initNative_001115e8);
  return;
}


// ===== 001068b0  discord::NativeCrashReporting::initNative =====

/* discord::NativeCrashReporting::initNative(facebook::jni::alias_ref<discord::NativeCrashReporting>,
   unsigned char) */

void discord::NativeCrashReporting::initNative(undefined8 param_1,char param_2)

{
  int iVar1;
  
  if (param_2 != '\x01') {
    facebook::gloginit::initialize("ReactNativeJNI");
  }
  if (((*PTR_sentry_sink_001115f0 & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(PTR_sentry_sink_001115f0), iVar1 != 0)) {
                    /* try { // try from 00106908 to 00106913 has its CatchHandler @ 00106940 */
    SentryBreadcrumbSink::SentryBreadcrumbSink((SentryBreadcrumbSink *)PTR_sentry_sink_001115f8);
    __cxa_atexit(PTR__SentryBreadcrumbSink_00111600,PTR_sentry_sink_001115f8,&PTR_LOOP_00111250);
    __cxa_guard_release(PTR_sentry_sink_001115f0);
  }
  google::AddLogSink((LogSink *)PTR_sentry_sink_001115f8);
  return;
}


// ===== 00106958  facebook::jni::detail::FunctionWrapper<void(*)(facebook::jni::alias_ref<discord::NativeCrashReporting>,unsigned_char),discord::NativeCrashReporting,void,unsigned_char>::call =====

/* facebook::jni::detail::FunctionWrapper<void
   (*)(facebook::jni::alias_ref<discord::NativeCrashReporting>, unsigned char),
   discord::NativeCrashReporting, void, unsigned char>::call(_JNIEnv*, _jobject*, unsigned char,
   void (*)(facebook::jni::alias_ref<discord::NativeCrashReporting>, unsigned char)) */

void facebook::jni::detail::
     FunctionWrapper<void(*)(facebook::jni::alias_ref<discord::NativeCrashReporting>,unsigned_char),discord::NativeCrashReporting,void,unsigned_char>
     ::call(_JNIEnv *param_1,_jobject *param_2,uchar param_3,_func_void_alias_ref_uchar *param_4)

{
  long lVar1;
  JniEnvCacher aJStack_58 [24];
  _jobject *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  facebook::jni::detail::JniEnvCacher::JniEnvCacher(aJStack_58,param_1);
                    /* try { // try from 00106994 to 0010699f has its CatchHandler @ 001069cc */
  local_40 = param_2;
  (*param_4)((char)&local_40,param_3);
  facebook::jni::detail::JniEnvCacher::~JniEnvCacher(aJStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00106a14  discord::SentryBreadcrumbSink::SentryBreadcrumbSink =====

/* discord::SentryBreadcrumbSink::SentryBreadcrumbSink() */

void __thiscall discord::SentryBreadcrumbSink::SentryBreadcrumbSink(SentryBreadcrumbSink *this)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  SentryBreadcrumbSink *pSVar6;
  long lVar7;
  SentryBreadcrumbSink *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined **)this = PTR_vtable_00111608 + 0x10;
  pSVar6 = this + 8;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)pSVar6 = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  this[0x58] = (SentryBreadcrumbSink)0x0;
                    /* try { // try from 00106a6c to 00106a73 has its CatchHandler @ 00106b30 */
  CrashReporting::getInstance((CrashReporting *)this);
  puVar3 = local_58;
  lVar7 = *(long *)pSVar6;
  local_58 = (undefined *)0x0;
  if (lVar7 == 0) {
    *(undefined **)pSVar6 = puVar3;
  }
  else {
                    /* try { // try from 00106a84 to 00106a97 has its CatchHandler @ 00106b78 */
    plVar5 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb0))(plVar5,lVar7);
    puVar4 = local_58;
    *(undefined **)pSVar6 = puVar3;
    if (local_58 != (undefined *)0x0) {
                    /* try { // try from 00106aa4 to 00106ab7 has its CatchHandler @ 00106b28 */
      plVar5 = (long *)facebook::jni::Environment::current();
      (**(code **)(*plVar5 + 0xb0))(plVar5,puVar4);
    }
  }
  local_58 = PTR_flushThreadFunc_00111610;
  uStack_50 = 0;
                    /* try { // try from 00106ad0 to 00106adf has its CatchHandler @ 00106b2c */
  local_68 = this;
  FUN_00106e64(&local_60,&local_58,&local_68);
  uVar2 = local_60;
  if (*(long *)(this + 0x50) == 0) {
    local_60 = 0;
    *(undefined8 *)(this + 0x50) = uVar2;
    std::__ndk1::thread::~thread((thread *)&local_60);
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 00106b7c  discord::SentryBreadcrumbSink::~SentryBreadcrumbSink =====

/* discord::SentryBreadcrumbSink::~SentryBreadcrumbSink() */

void __thiscall discord::SentryBreadcrumbSink::~SentryBreadcrumbSink(SentryBreadcrumbSink *this)

{
  void *pvVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;
  
  *(undefined **)this = PTR_vtable_00111608 + 0x10;
  this[0x58] = (SentryBreadcrumbSink)0x1;
  if (*(long *)(this + 0x50) != 0) {
                    /* try { // try from 00106bb8 to 00106bbf has its CatchHandler @ 00106c5c */
    std::__ndk1::thread::join();
  }
  std::__ndk1::thread::~thread((thread *)(this + 0x50));
  std::__ndk1::mutex::~mutex((mutex *)(this + 0x28));
  pvVar3 = *(void **)(this + 0x10);
  if (pvVar3 != (void *)0x0) {
    pvVar5 = *(void **)(this + 0x18);
    pvVar1 = pvVar3;
    if (pvVar5 != pvVar3) {
      do {
        if ((*(byte *)((long)pvVar5 + -0x28) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar5 + -0x18));
        }
        if ((*(byte *)((long)pvVar5 + -0x40) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar5 + -0x30));
        }
        pvVar5 = (void *)((long)pvVar5 + -0x40);
      } while (pvVar5 != pvVar3);
      pvVar1 = *(void **)(this + 0x10);
    }
    *(void **)(this + 0x18) = pvVar3;
    operator_delete(pvVar1);
  }
  lVar4 = *(long *)(this + 8);
  if (lVar4 != 0) {
                    /* try { // try from 00106c30 to 00106c43 has its CatchHandler @ 00106c60 */
    plVar2 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar2 + 0xb0))(plVar2,lVar4);
  }
  *(undefined8 *)(this + 8) = 0;
  google::LogSink::~LogSink((LogSink *)this);
  return;
}


// ===== 00106c64  discord::CrashReporting::getInstance =====

/* discord::CrashReporting::getInstance() */

void __thiscall discord::CrashReporting::getInstance(CrashReporting *this)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 *in_x8;
  undefined8 uVar4;
  _lambda___1_ _Stack_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_instance_00111618 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_instance_00111618), iVar2 != 0)) {
                    /* try { // try from 00106cf8 to 00106d07 has its CatchHandler @ 00106d34 */
    getInstance()::{lambda()#1}::operator()(&_Stack_39);
    __cxa_atexit(PTR__base_owned_ref_00111628,PTR_instance_00111620,&PTR_LOOP_00111250);
    __cxa_guard_release(PTR_instance_00111618);
  }
  uVar4 = *(undefined8 *)PTR_instance_00111620;
  plVar3 = (long *)facebook::jni::Environment::current();
  uVar4 = (**(code **)(*plVar3 + 0xa8))(plVar3,uVar4);
  facebook::jni::throwPendingJniExceptionAsCppException();
  *in_x8 = uVar4;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00106d60  facebook::jni::base_owned_ref<discord::CrashReporting,facebook::jni::GlobalReferenceAllocator>::~base_owned_ref =====

/* facebook::jni::base_owned_ref<discord::CrashReporting,
   facebook::jni::GlobalReferenceAllocator>::~base_owned_ref() */

void __thiscall
facebook::jni::base_owned_ref<discord::CrashReporting,facebook::jni::GlobalReferenceAllocator>::
~base_owned_ref(base_owned_ref<discord::CrashReporting,facebook::jni::GlobalReferenceAllocator>
                *this)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)this;
  if (lVar2 != 0) {
                    /* try { // try from 00106d78 to 00106d8b has its CatchHandler @ 00106d9c */
    plVar1 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar1 + 0xb0))(plVar1,lVar2);
  }
  *(undefined8 *)this = 0;
  return;
}


// ===== 00106da0  discord::SentryBreadcrumbSink::flushThreadFunc =====

/* discord::SentryBreadcrumbSink::flushThreadFunc() */

void __thiscall discord::SentryBreadcrumbSink::flushThreadFunc(SentryBreadcrumbSink *this)

{
  long lVar1;
  pthread_t __target_thread;
  ThreadScope aTStack_58 [24];
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __target_thread = pthread_self();
  pthread_setname_np(__target_thread,"BreadcrumbFlush");
  facebook::jni::ThreadScope::ThreadScope(aTStack_58);
  while (((byte)this[0x58] & 1) == 0) {
    local_40 = 100000000;
                    /* try { // try from 00106df0 to 00106dff has its CatchHandler @ 00106e3c */
    std::__ndk1::this_thread::sleep_for((duration *)&local_40);
    drainAndFlush(this);
  }
                    /* try { // try from 00106e04 to 00106e0b has its CatchHandler @ 00106e38 */
  drainAndFlush(this);
  facebook::jni::ThreadScope::~ThreadScope(aTStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00106e64  FUN_00106e64 =====

void FUN_00106e64(pthread_t *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  __thread_struct *this;
  undefined8 *__arg;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  __thread_struct *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (__thread_struct *)operator_new(8);
                    /* try { // try from 00106ea0 to 00106ea3 has its CatchHandler @ 00106f30 */
  std::__ndk1::__thread_struct::__thread_struct(this);
  local_50 = this;
                    /* try { // try from 00106ea8 to 00106eaf has its CatchHandler @ 00106f28 */
  __arg = (undefined8 *)operator_new(0x20);
  uVar5 = param_2[1];
  uVar4 = *param_2;
  uVar3 = *param_3;
  local_50 = (__thread_struct *)0x0;
  *__arg = this;
  __arg[2] = uVar5;
  __arg[1] = uVar4;
  __arg[3] = uVar3;
                    /* try { // try from 00106ecc to 00106f27 has its CatchHandler @ 00106f40 */
  iVar2 = pthread_create(param_1,(pthread_attr_t *)0x0,FUN_00108c28,__arg);
  if (iVar2 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_48) {
    uVar3 = std::__ndk1::__throw_system_error(iVar2,"thread constructor failed");
                    /* catch() { ... } // from try @ 00106ea8 with catch @ 00106f28 */
    FUN_00108d44(&local_50);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00108f50(uVar3);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00106f70  FUN_00106f70 =====

void FUN_00106f70(undefined8 *param_1)

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
      if ((*(byte *)((long)pvVar3 + -0x28) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar3 + -0x18));
      }
      if ((*(byte *)((long)pvVar3 + -0x40) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar3 + -0x30));
      }
      pvVar3 = (void *)((long)pvVar3 + -0x40);
    } while (pvVar3 != pvVar2);
    pvVar1 = (void *)*param_1;
  }
  param_1[1] = pvVar2;
  operator_delete(pvVar1);
  return;
}


// ===== 00106ff8  discord::SentryBreadcrumbSink::~SentryBreadcrumbSink =====

/* discord::SentryBreadcrumbSink::~SentryBreadcrumbSink() */

void __thiscall discord::SentryBreadcrumbSink::~SentryBreadcrumbSink(SentryBreadcrumbSink *this)

{
  ~SentryBreadcrumbSink(this);
  operator_delete(this);
  return;
}


// ===== 0010701c  discord::SentryBreadcrumbSink::send =====

/* discord::SentryBreadcrumbSink::send(int, char const*, char const*, int, tm const*, char const*,
   unsigned long) */

void discord::SentryBreadcrumbSink::send
               (int param_1,char *param_2,char *param_3,int param_4,tm *param_5,char *param_6,
               ulong param_7)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  long lVar2;
  __pid_t _Var3;
  int iVar4;
  ulong uVar5;
  BreadcrumbData *pBVar6;
  byte *pbVar7;
  size_t __n;
  undefined1 *puVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar9;
  undefined8 uVar10;
  char *in_x7;
  void *pvVar11;
  char *__dest;
  BreadcrumbData unaff_w25;
  ulong local_1e8;
  size_t sStack_1e0;
  char *local_1d8;
  BreadcrumbData local_1d0;
  undefined4 uStack_1cf;
  undefined2 uStack_1cb;
  undefined1 uStack_1c9;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  char *local_1c0;
  ulong local_1b8;
  size_t sStack_1b0;
  char *local_1a8;
  undefined1 local_1a0;
  undefined7 uStack_19f;
  undefined8 uStack_198;
  ulong local_190 [2];
  void *local_180;
  undefined7 local_178;
  undefined1 uStack_171;
  undefined7 uStack_170;
  undefined7 local_168;
  undefined1 uStack_161;
  undefined7 uStack_160;
  char acStack_158 [256];
  long local_58;
  
  uVar5 = (ulong)(uint)param_1;
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((int)param_2 == 0) {
LAB_001072c8:
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return;
    }
  }
  else {
    FUN_00108d80(acStack_158);
    local_1d0 = (BreadcrumbData)0xc;
    uStack_1cf = 0x474f4c47;
    uStack_1cb = 0x203a;
    uStack_1c9 = 0;
    if (in_x7 < (char *)0xfffffffffffffff0) {
      if (in_x7 < (char *)0x17) {
        pvVar11 = (void *)((ulong)local_190 | 1);
        local_190[0] = CONCAT71(local_190[0]._1_7_,(char)((int)in_x7 << 1));
        if (in_x7 != (char *)0x0) goto LAB_001070cc;
      }
      else {
        uVar1 = ((ulong)in_x7 | 0xf) + 1;
                    /* try { // try from 001070b4 to 001070bb has its CatchHandler @ 001073d4 */
        pvVar11 = operator_new(uVar1);
        local_190[0] = uVar1 | 1;
        local_180 = pvVar11;
LAB_001070cc:
        memcpy(pvVar11,(void *)param_7,(size_t)in_x7);
      }
      *(char *)((long)pvVar11 + (long)in_x7) = '\0';
      pvVar11 = (void *)((ulong)local_190 | 1);
      if ((local_190[0] & 1) != 0) {
        pvVar11 = local_180;
      }
                    /* try { // try from 00107100 to 00107107 has its CatchHandler @ 001073ac */
      pBVar6 = (BreadcrumbData *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append((char *)&local_1d0,(ulong)pvVar11);
      uVar10 = *(undefined8 *)(pBVar6 + 8);
      in_x7 = *(char **)(pBVar6 + 0x10);
      unaff_w25 = *pBVar6;
      *(undefined8 *)(pBVar6 + 8) = 0;
      *(undefined8 *)(pBVar6 + 0x10) = 0;
      *(undefined8 *)pBVar6 = 0;
      local_168 = (undefined7)*(undefined8 *)(pBVar6 + 1);
      uStack_161 = (undefined1)uVar10;
      uStack_160 = (undefined7)((ulong)uVar10 >> 8);
      if ((local_190[0] & 1) != 0) {
        operator_delete(local_180);
      }
      if (((byte)local_1d0 & 1) != 0) {
        operator_delete(local_1c0);
      }
      pbVar7 = (byte *)__emutls_get_address
                                 (
                                 PTR___emutls_v__ZGVZN7discord20SentryBreadcrumbSink4sendEiPKcS2_iPK2tmS2_mE12isMainThread_00111630
                                 );
      if ((*pbVar7 & 1) == 0) {
                    /* try { // try from 001072f4 to 001072ff has its CatchHandler @ 00107360 */
        _Var3 = getpid();
        iVar4 = gettid();
        uVar10 = __emutls_get_address
                           (
                           PTR___emutls_v__ZZN7discord20SentryBreadcrumbSink4sendEiPKcS2_iPK2tmS2_mE12isMainThread_00111638
                           );
        *(bool *)uVar10 = _Var3 == iVar4;
        puVar8 = (undefined1 *)
                 __emutls_get_address
                           (
                           PTR___emutls_v__ZGVZN7discord20SentryBreadcrumbSink4sendEiPKcS2_iPK2tmS2_mE12isMainThread_00111630
                           );
        *puVar8 = 1;
      }
      local_178 = local_168;
      uStack_171 = uStack_161;
      uStack_170 = uStack_160;
      __n = strlen(acStack_158);
      if (__n < 0xfffffffffffffff0) {
        if (__n < 0x17) {
          __dest = (char *)((ulong)&local_1e8 | 1);
          local_1e8 = CONCAT71(local_1e8._1_7_,(char)((int)__n << 1));
          if (__n != 0) goto LAB_001071c0;
        }
        else {
          uVar1 = (__n | 0xf) + 1;
                    /* try { // try from 001071a8 to 001071af has its CatchHandler @ 001073c4 */
          __dest = (char *)operator_new(uVar1);
          local_1e8 = uVar1 | 1;
          sStack_1e0 = __n;
          local_1d8 = __dest;
LAB_001071c0:
          memcpy(__dest,acStack_158,__n);
        }
        __dest[__n] = '\0';
        puVar8 = (undefined1 *)
                 __emutls_get_address
                           (
                           PTR___emutls_v__ZZN7discord20SentryBreadcrumbSink4sendEiPKcS2_iPK2tmS2_mE12isMainThread_00111638
                           );
        local_1a0 = *puVar8;
        uStack_1cf = (undefined4)local_178;
        uStack_1cb = (undefined2)((uint7)local_178 >> 0x20);
        uStack_1c9 = (undefined1)((uint7)local_178 >> 0x30);
        uStack_1c8 = uStack_171;
        uStack_1c7 = uStack_170;
        sStack_1b0 = sStack_1e0;
        local_1b8 = local_1e8;
        local_1a8 = local_1d8;
        local_1d0 = unaff_w25;
        local_1c0 = in_x7;
        uStack_198 = std::__ndk1::chrono::system_clock::now();
                    /* try { // try from 00107214 to 0010721b has its CatchHandler @ 0010739c */
        std::__ndk1::mutex::lock();
        this = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (uVar5 + 0x18);
        if (this < *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     **)(uVar5 + 0x20)) {
          if (((byte)unaff_w25 & 1) == 0) {
            *(char **)(this + 0x10) = local_1c0;
            *(ulong *)(this + 8) = CONCAT71(uStack_1c7,uStack_1c8);
            *(ulong *)this =
                 CONCAT17(uStack_1c9,CONCAT25(uStack_1cb,CONCAT41(uStack_1cf,local_1d0)));
          }
          else {
                    /* try { // try from 00107254 to 0010725f has its CatchHandler @ 00107380 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            __init_copy_ctor_external(this,in_x7,CONCAT71(uStack_1c7,uStack_1c8));
          }
          if ((local_1b8 & 1) == 0) {
            *(char **)(this + 0x28) = local_1a8;
            *(size_t *)(this + 0x20) = sStack_1b0;
            *(ulong *)(this + 0x18) = local_1b8;
          }
          else {
                    /* try { // try from 00107284 to 0010728b has its CatchHandler @ 00107364 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            __init_copy_ctor_external(this + 0x18,local_1a8,sStack_1b0);
          }
          pbVar9 = this + 0x40;
          *(undefined8 *)(this + 0x38) = uStack_198;
          *(ulong *)(this + 0x30) = CONCAT71(uStack_19f,local_1a0);
          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (uVar5 + 0x18) = pbVar9;
        }
        else {
                    /* try { // try from 00107240 to 0010724b has its CatchHandler @ 0010738c */
          pbVar9 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )std::__ndk1::
                    vector<discord::BreadcrumbData,std::__ndk1::allocator<discord::BreadcrumbData>>
                    ::__push_back_slow_path<discord::BreadcrumbData_const&>
                              ((vector<discord::BreadcrumbData,std::__ndk1::allocator<discord::BreadcrumbData>>
                                *)(uVar5 + 0x10),&local_1d0);
        }
        *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
         (uVar5 + 0x18) = pbVar9;
        std::__ndk1::mutex::unlock();
        if ((local_1b8 & 1) != 0) {
          operator_delete(local_1a8);
        }
        if (((byte)local_1d0 & 1) != 0) {
          operator_delete(local_1c0);
        }
        goto LAB_001072c8;
      }
    }
    else {
      if (*(long *)(lVar2 + 0x28) != local_58) goto LAB_00107400;
                    /* try { // try from 00107340 to 00107347 has its CatchHandler @ 001073d4 */
      FUN_001086bc(local_190);
    }
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 00107358 to 0010735f has its CatchHandler @ 001073c4 */
      uVar10 = FUN_001086bc(&local_1e8);
                    /* catch() { ... } // from try @ 001072f4 with catch @ 00107360 */
                    /* catch() { ... } // from try @ 001071a8 with catch @ 001073c4
                       catch() { ... } // from try @ 00107358 with catch @ 001073c4 */
      if (((byte)unaff_w25 & 1) != 0) {
        operator_delete(in_x7);
      }
      if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00108f50(uVar10);
      }
    }
  }
LAB_00107400:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00107404  discord::CrashReporting::getInstance()::{lambda()#1}::operator() =====

/* discord::CrashReporting::getInstance()::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall discord::CrashReporting::getInstance()::{lambda()#1}::operator()(_lambda___1_ *this)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  bad_alloc *this_00;
  long *in_x8;
  long lVar7;
  undefined8 uVar8;
  
  lVar1 = tpidr_el0;
  lVar7 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)facebook::jni::Environment::current();
  if (((*PTR_cls_00111640 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_00111640), iVar2 != 0))
  {
                    /* try { // try from 00107508 to 0010751b has its CatchHandler @ 00107564 */
    facebook::jni::findClassStatic(PTR_kBaseName_00111650);
    __cxa_guard_release(PTR_cls_00111640);
  }
  uVar8 = *(undefined8 *)PTR_cls_00111648;
  uVar4 = (**(code **)(*plVar3 + 0x480))
                    (plVar3,uVar8,"INSTANCE","Lcom/discord/crash_reporting/CrashReporting;");
  lVar5 = (**(code **)(*plVar3 + 0x488))(plVar3,uVar8,uVar4);
  if (lVar5 == 0) {
    *in_x8 = 0;
  }
  else {
                    /* try { // try from 00107490 to 001074af has its CatchHandler @ 0010757c */
    plVar3 = (long *)facebook::jni::Environment::current();
    lVar6 = (**(code **)(*plVar3 + 0xa8))(plVar3,lVar5);
    facebook::jni::throwPendingJniExceptionAsCppException();
    if (lVar6 == 0) {
      this_00 = (bad_alloc *)__cxa_allocate_exception(8);
      if (*(long *)(lVar1 + 0x28) == lVar7) {
        std::bad_alloc::bad_alloc(this_00);
                    /* try { // try from 0010754c to 00107563 has its CatchHandler @ 0010757c */
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this_00,PTR_typeinfo_00111658,PTR__bad_alloc_00111660);
      }
      goto LAB_001075a0;
    }
    *in_x8 = lVar6;
                    /* try { // try from 001074b8 to 001074cb has its CatchHandler @ 00107578 */
    plVar3 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar3 + 0xb8))(plVar3,lVar5);
  }
  if (*(long *)(lVar1 + 0x28) == lVar7) {
    return;
  }
LAB_001075a0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001075a4  facebook::jni::base_owned_ref<facebook::jni::detail::JTypeFor<discord::CrashReporting,facebook::jni::JObject,void>::_javaobject*,facebook::jni::GlobalReferenceAllocator>::~base_owned_ref =====

/* facebook::jni::base_owned_ref<facebook::jni::detail::JTypeFor<discord::CrashReporting,
   facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::GlobalReferenceAllocator>::~base_owned_ref() */

void __thiscall
facebook::jni::
base_owned_ref<facebook::jni::detail::JTypeFor<discord::CrashReporting,facebook::jni::JObject,void>::_javaobject*,facebook::jni::GlobalReferenceAllocator>
::~base_owned_ref(base_owned_ref<facebook::jni::detail::JTypeFor<discord::CrashReporting,facebook::jni::JObject,void>::_javaobject*,facebook::jni::GlobalReferenceAllocator>
                  *this)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)this;
  if (lVar2 != 0) {
                    /* try { // try from 001075bc to 001075cf has its CatchHandler @ 001075e0 */
    plVar1 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar1 + 0xb0))(plVar1,lVar2);
  }
  *(undefined8 *)this = 0;
  return;
}


// ===== 001075e4  facebook::jni::base_owned_ref<facebook::jni::detail::JTypeFor<discord::CrashReporting,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

/* facebook::jni::base_owned_ref<facebook::jni::detail::JTypeFor<discord::CrashReporting,
   facebook::jni::JObject, void>::_javaobject*,
   facebook::jni::LocalReferenceAllocator>::~base_owned_ref() */

void __thiscall
facebook::jni::
base_owned_ref<facebook::jni::detail::JTypeFor<discord::CrashReporting,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
::~base_owned_ref(base_owned_ref<facebook::jni::detail::JTypeFor<discord::CrashReporting,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
                  *this)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)this;
  if (lVar2 != 0) {
                    /* try { // try from 001075fc to 0010760f has its CatchHandler @ 00107620 */
    plVar1 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar1 + 0xb8))(plVar1,lVar2);
  }
  *(undefined8 *)this = 0;
  return;
}


// ===== 00107624  discord::SentryBreadcrumbSink::drainAndFlush =====

/* discord::SentryBreadcrumbSink::drainAndFlush() */

void __thiscall discord::SentryBreadcrumbSink::drainAndFlush(SentryBreadcrumbSink *this)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  void *local_50;
  void *pvStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  std::__ndk1::mutex::lock();
  pvStack_48 = *(void **)(this + 0x18);
  local_50 = *(void **)(this + 0x10);
  local_40 = *(undefined8 *)(this + 0x20);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
                    /* try { // try from 00107668 to 00107673 has its CatchHandler @ 001076f8 */
  CrashReporting::addBreadcrumbBatchBinary((CrashReporting *)(this + 8),(vector *)&local_50);
  pvVar3 = local_50;
  pvVar2 = pvStack_48;
  if (local_50 != (void *)0x0) {
    for (; pvVar2 != pvVar3; pvVar2 = (void *)((long)pvVar2 + -0x40)) {
      if ((*(byte *)((long)pvVar2 + -0x28) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar2 + -0x18));
      }
      if ((*(byte *)((long)pvVar2 + -0x40) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar2 + -0x30));
      }
    }
    pvStack_48 = pvVar3;
    operator_delete(local_50);
  }
  std::__ndk1::mutex::unlock();
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0010772c  discord::CrashReporting::addBreadcrumbBatchBinary =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* discord::CrashReporting::addBreadcrumbBatchBinary(std::__ndk1::vector<discord::BreadcrumbData,
   std::__ndk1::allocator<discord::BreadcrumbData> > const&) const */

void __thiscall
discord::CrashReporting::addBreadcrumbBatchBinary(CrashReporting *this,vector *param_1)

{
  byte *pbVar1;
  ulong *puVar2;
  ulong *puVar3;
  vector *pvVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  void *pvVar9;
  byte *pbVar10;
  BreadcrumbData *pBVar11;
  byte bVar12;
  undefined1 uVar13;
  uint uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  int iVar30;
  uint *puVar31;
  _jobject *p_Var32;
  undefined8 uVar33;
  long *plVar34;
  ulong uVar35;
  long lVar36;
  BreadcrumbData *pBVar37;
  _jmethodID *p_Var38;
  BreadcrumbData *pBVar39;
  BreadcrumbData *pBVar40;
  long lVar41;
  BreadcrumbData *pBVar42;
  long lVar43;
  vector *pvVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  BreadcrumbData *local_c0;
  BreadcrumbData *pBStack_b8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_b0;
  vector *local_a0;
  vector *local_98;
  vector *local_90;
  LogMessage aLStack_88 [16];
  long local_78;
  long local_70;
  
  lVar15 = tpidr_el0;
  local_70 = *(long *)(lVar15 + 0x28);
  std::__ndk1::chrono::steady_clock::now();
  pBVar37 = *(BreadcrumbData **)param_1;
  pBVar11 = *(BreadcrumbData **)(param_1 + 8);
  if (pBVar37 == pBVar11) goto LAB_00107e30;
  lVar41 = 0;
  local_a0 = (vector *)0x0;
  local_98 = (vector *)0x0;
  local_90 = (vector *)0x0;
  local_c0 = (BreadcrumbData *)0x0;
  pBStack_b8 = (BreadcrumbData *)0x0;
  local_b0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0;
  do {
    pBVar40 = pBVar37 + 0x18;
    uVar35 = (ulong)((byte)*pBVar37 >> 1);
    if (((byte)*pBVar37 & 1) != 0) {
      uVar35 = *(ulong *)(pBVar37 + 8);
    }
    uVar7 = (ulong)((byte)*pBVar40 >> 1);
    if (((byte)*pBVar40 & 1) != 0) {
      uVar7 = *(ulong *)(pBVar37 + 0x20);
    }
    lVar43 = uVar35 + uVar7 + 0xd;
    if (8000 < (ulong)(lVar43 + lVar41) && local_c0 != pBStack_b8) {
      if (local_98 < local_90) {
        *(long *)local_98 = 0;
        *(long *)(local_98 + 8) = 0;
        pBVar39 = (BreadcrumbData *)0x0;
        *(long *)(local_98 + 0x10) = 0;
        *(BreadcrumbData **)(local_98 + 8) = pBStack_b8;
        *(BreadcrumbData **)local_98 = local_c0;
        local_c0 = (BreadcrumbData *)0x0;
        *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
         (local_98 + 0x10) = local_b0;
        local_98 = local_98 + 0x18;
        local_b0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )0x0;
      }
      else {
                    /* try { // try from 00107844 to 001078cb has its CatchHandler @ 00107f58 */
        local_98 = std::__ndk1::
                   vector<std::__ndk1::vector<discord::BreadcrumbData,std::__ndk1::allocator<discord::BreadcrumbData>>,std::__ndk1::allocator<std::__ndk1::vector<discord::BreadcrumbData,std::__ndk1::allocator<discord::BreadcrumbData>>>>
                   ::
                   __push_back_slow_path<std::__ndk1::vector<discord::BreadcrumbData,std::__ndk1::allocator<discord::BreadcrumbData>>>
                             ((vector<std::__ndk1::vector<discord::BreadcrumbData,std::__ndk1::allocator<discord::BreadcrumbData>>,std::__ndk1::allocator<std::__ndk1::vector<discord::BreadcrumbData,std::__ndk1::allocator<discord::BreadcrumbData>>>>
                               *)&local_a0,(vector *)&local_c0);
        pBVar39 = local_c0;
        for (pBVar42 = pBStack_b8; pBVar42 != pBVar39; pBVar42 = pBVar42 + -0x40) {
          if (((byte)pBVar42[-0x28] & 1) != 0) {
            operator_delete(*(void **)(pBVar42 + -0x18));
          }
          if (((byte)pBVar42[-0x40] & 1) != 0) {
            operator_delete(*(void **)(pBVar42 + -0x30));
          }
        }
      }
      lVar41 = 0;
      pBStack_b8 = pBVar39;
    }
    pBVar42 = pBStack_b8;
    if (pBStack_b8 < local_b0) {
      if (((byte)*pBVar37 & 1) == 0) {
        uVar33 = *(undefined8 *)pBVar37;
        uVar16 = *(undefined8 *)(pBVar37 + 8);
        *(undefined8 *)(pBStack_b8 + 0x10) = *(undefined8 *)(pBVar37 + 0x10);
        *(undefined8 *)(pBStack_b8 + 8) = uVar16;
        *(undefined8 *)pBStack_b8 = uVar33;
      }
      else {
                    /* try { // try from 001078d8 to 001078df has its CatchHandler @ 00107f48 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )pBStack_b8,*(char **)(pBVar37 + 0x10),*(ulong *)(pBVar37 + 8));
      }
      if (((byte)*pBVar40 & 1) == 0) {
        uVar33 = *(undefined8 *)pBVar40;
        uVar16 = *(undefined8 *)(pBVar37 + 0x20);
        *(undefined8 *)(pBVar42 + 0x28) = *(undefined8 *)(pBVar37 + 0x28);
        *(undefined8 *)(pBVar42 + 0x20) = uVar16;
        *(undefined8 *)(pBVar42 + 0x18) = uVar33;
      }
      else {
                    /* try { // try from 001078ec to 001078f3 has its CatchHandler @ 00107f28 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )(pBVar42 + 0x18),*(char **)(pBVar37 + 0x28),*(ulong *)(pBVar37 + 0x20));
      }
      auVar50 = *(undefined1 (*) [16])(pBVar37 + 0x30);
      *(long *)(pBVar42 + 0x38) = auVar50._8_8_;
      *(long *)(pBVar42 + 0x30) = auVar50._0_8_;
      pBStack_b8 = pBVar42 + 0x40;
    }
    else {
      pBStack_b8 = std::__ndk1::
                   vector<discord::BreadcrumbData,std::__ndk1::allocator<discord::BreadcrumbData>>::
                   __push_back_slow_path<discord::BreadcrumbData_const&>
                             ((vector<discord::BreadcrumbData,std::__ndk1::allocator<discord::BreadcrumbData>>
                               *)&local_c0,pBVar37);
    }
    pBVar37 = pBVar37 + 0x40;
    lVar41 = lVar41 + lVar43;
  } while (pBVar37 != pBVar11);
  if (local_c0 != pBStack_b8) {
    if (local_98 < local_90) {
      *(long *)local_98 = 0;
      *(long *)(local_98 + 8) = 0;
      *(long *)(local_98 + 0x10) = 0;
      *(BreadcrumbData **)(local_98 + 8) = pBStack_b8;
      *(BreadcrumbData **)local_98 = local_c0;
      local_c0 = (BreadcrumbData *)0x0;
      pBStack_b8 = (BreadcrumbData *)0x0;
      *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
       (local_98 + 0x10) = local_b0;
      local_b0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 0x0;
      local_98 = local_98 + 0x18;
    }
    else {
                    /* try { // try from 00107938 to 00107943 has its CatchHandler @ 00107ee4 */
      local_98 = std::__ndk1::
                 vector<std::__ndk1::vector<discord::BreadcrumbData,std::__ndk1::allocator<discord::BreadcrumbData>>,std::__ndk1::allocator<std::__ndk1::vector<discord::BreadcrumbData,std::__ndk1::allocator<discord::BreadcrumbData>>>>
                 ::
                 __push_back_slow_path<std::__ndk1::vector<discord::BreadcrumbData,std::__ndk1::allocator<discord::BreadcrumbData>>>
                           ((vector<std::__ndk1::vector<discord::BreadcrumbData,std::__ndk1::allocator<discord::BreadcrumbData>>,std::__ndk1::allocator<std::__ndk1::vector<discord::BreadcrumbData,std::__ndk1::allocator<discord::BreadcrumbData>>>>
                             *)&local_a0,(vector *)&local_c0);
    }
  }
  if (((*PTR_method_00111668 & 1) == 0) &&
     (iVar30 = __cxa_guard_acquire(PTR_method_00111668), iVar30 != 0)) {
    facebook::jni::JObject::getClass();
                    /* try { // try from 00107e84 to 00107e93 has its CatchHandler @ 00107ec0 */
    uVar33 = facebook::jni::JClass::
             getMethod<void(facebook::jni::alias_ref<facebook::jni::JByteBuffer>)>
                       ((JClass *)aLStack_88,"addBreadcrumbBatchBinary");
    *(undefined8 *)PTR_method_00111670 = uVar33;
    facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *)
                    aLStack_88);
    __cxa_guard_release(PTR_method_00111668);
  }
  lVar41 = 4;
  iVar30 = 4;
  for (pvVar4 = local_a0; pvVar4 != local_98; pvVar4 = pvVar4 + 0x18) {
    pbVar10 = *(byte **)pvVar4;
    lVar43 = 0x14;
    while (pbVar10 != *(byte **)(pvVar4 + 8)) {
      bVar12 = *pbVar10;
      pbVar1 = pbVar10 + 0x18;
      puVar2 = (ulong *)(pbVar10 + 8);
      puVar3 = (ulong *)(pbVar10 + 0x20);
      pbVar10 = pbVar10 + 0x40;
      uVar35 = (ulong)(bVar12 >> 1);
      if ((bVar12 & 1) != 0) {
        uVar35 = *puVar2;
      }
      uVar7 = (ulong)(*pbVar1 >> 1);
      if ((*pbVar1 & 1) != 0) {
        uVar7 = *puVar3;
      }
      lVar43 = lVar43 + uVar35 + uVar7 + 0xd;
    }
    lVar41 = lVar43 + lVar41;
    iVar30 = (int)lVar41;
  }
                    /* try { // try from 00107968 to 0010796f has its CatchHandler @ 00107f10 */
  facebook::jni::JByteBuffer::allocateDirect(iVar30);
  if (local_78 == 0) {
                    /* try { // try from 00107d40 to 00107d57 has its CatchHandler @ 00107ee8 */
    google::LogMessage::LogMessage
              (aLStack_88,
               "/ci/build/discord/discord/discord_android_rn/android/libraries/telemetry/crash_reporting/src/main/cpp/crash-reporting.cpp"
               ,0x90,2);
                    /* try { // try from 00107d58 to 00107d6f has its CatchHandler @ 00107efc */
    uVar33 = google::LogMessage::stream();
    FUN_00108760(uVar33,"Failed to allocate ByteBuffer",0x1d);
LAB_00107da4:
    google::LogMessage::~LogMessage(aLStack_88);
  }
  else {
                    /* try { // try from 00107978 to 0010797f has its CatchHandler @ 00107ef4 */
    puVar31 = (uint *)facebook::jni::JBuffer::getDirectAddress();
    pvVar4 = local_98;
    if (puVar31 == (uint *)0x0) {
                    /* try { // try from 00107d74 to 00107d8b has its CatchHandler @ 00107edc */
      google::LogMessage::LogMessage
                (aLStack_88,
                 "/ci/build/discord/discord/discord_android_rn/android/libraries/telemetry/crash_reporting/src/main/cpp/crash-reporting.cpp"
                 ,0x95,2);
                    /* try { // try from 00107d8c to 00107da3 has its CatchHandler @ 00107ef0 */
      uVar33 = google::LogMessage::stream();
      FUN_00108760(uVar33,"Failed to get direct bytes",0x1a);
      goto LAB_00107da4;
    }
    uVar14 = (int)((ulong)((long)local_98 - (long)local_a0) >> 3) * -0x55555555;
    uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
    *puVar31 = uVar14 >> 0x10 | uVar14 << 0x10;
    uVar29 = _UNK_00104018;
    uVar28 = _DAT_00104010;
    uVar27 = _UNK_00104008;
    uVar26 = _DAT_00104000;
    uVar25 = _UNK_00103ff8;
    uVar24 = _DAT_00103ff0;
    uVar23 = _UNK_00103fe8;
    uVar22 = _DAT_00103fe0;
    uVar16 = _UNK_00103fd8;
    uVar33 = _DAT_00103fd0;
    if (local_a0 != local_98) {
      lVar41 = 4;
      pvVar44 = local_a0;
      do {
        lVar43 = *(long *)(*(long *)(pvVar44 + 8) + -8) / 1000;
        auVar53._8_8_ = lVar43;
        auVar53._0_8_ = lVar43;
        lVar36 = *(long *)(pvVar44 + 8) - *(long *)pvVar44;
        auVar47._8_8_ = uVar23;
        auVar47._0_8_ = uVar22;
        auVar47 = NEON_ushl(auVar53,auVar47,8);
        auVar45._8_8_ = uVar25;
        auVar45._0_8_ = uVar24;
        auVar45 = NEON_ushl(auVar53,auVar45,8);
        lVar5 = *(long *)(*(long *)pvVar44 + 0x38) / 1000;
        *(char *)((long)puVar31 + lVar41 + 0xb) = (char)lVar5;
        auVar49._8_8_ = lVar5;
        auVar49._0_8_ = lVar5;
        *(char *)((long)puVar31 + lVar41 + 8) = (char)((ulong)lVar5 >> 0x18);
        auVar51._8_8_ = uVar25;
        auVar51._0_8_ = uVar24;
        auVar53 = NEON_ushl(auVar49,auVar51,8);
        auVar52._8_8_ = uVar23;
        auVar52._0_8_ = uVar22;
        auVar52 = NEON_ushl(auVar49,auVar52,8);
        auVar19._8_8_ = uVar29;
        auVar19._0_8_ = uVar28;
        auVar50._8_8_ = lVar36;
        auVar50._0_8_ = lVar36;
        auVar51 = NEON_ushl(auVar50,auVar19,8);
        auVar18._8_8_ = uVar16;
        auVar18._0_8_ = uVar33;
        auVar48._8_8_ = lVar36;
        auVar48._0_8_ = lVar36;
        auVar50 = NEON_ushl(auVar48,auVar18,8);
        auVar17._8_8_ = uVar27;
        auVar17._0_8_ = uVar26;
        auVar50 = a64_TBL(ZEXT816(0),auVar50,auVar51,auVar52,auVar53,auVar17);
        *(long *)((long)puVar31 + lVar41) = auVar50._0_8_;
        *(char *)((long)puVar31 + lVar41 + 10) = (char)((ulong)lVar5 >> 8);
        *(char *)((long)puVar31 + lVar41 + 9) = (char)((ulong)lVar5 >> 0x10);
        *(char *)((long)puVar31 + lVar41 + 0x11) = (char)((ulong)lVar43 >> 0x10);
        *(char *)((long)puVar31 + lVar41 + 0x10) = (char)((ulong)lVar43 >> 0x18);
        *(char *)((long)puVar31 + lVar41 + 0x12) = (char)((ulong)lVar43 >> 8);
        *(uint *)((long)puVar31 + lVar41 + 0xc) =
             CONCAT13(auVar45[8],CONCAT12(auVar45[0],CONCAT11(auVar47[8],auVar47[0])));
        *(char *)((long)puVar31 + lVar41 + 0x13) = (char)lVar43;
        lVar41 = lVar41 + 0x14;
        if (0 < (int)((ulong)(*(long *)(pvVar44 + 8) - *(long *)pvVar44) >> 6)) {
          uVar35 = (ulong)(*(long *)(pvVar44 + 8) - *(long *)pvVar44) >> 6 & 0xffffffff;
          lVar43 = uVar35 << 6;
          uVar35 = uVar35 + 1;
          do {
            lVar5 = *(long *)pvVar44 + lVar43;
            lVar36 = *(long *)(lVar5 + -8);
            uVar7 = (ulong)(*(byte *)(lVar5 + -0x40) >> 1);
            if ((*(byte *)(lVar5 + -0x40) & 1) != 0) {
              uVar7 = *(ulong *)(lVar5 + -0x38);
            }
            *(char *)((long)puVar31 + lVar41 + 1) = (char)uVar7;
            *(char *)((long)puVar31 + lVar41) = (char)(uVar7 >> 8);
            lVar36 = lVar36 / 1000;
            pvVar9 = (void *)(lVar5 + -0x3f);
            if ((*(byte *)(lVar5 + -0x40) & 1) != 0) {
              pvVar9 = *(void **)(lVar5 + -0x30);
            }
            memcpy((void *)((long)puVar31 + lVar41 + 2),pvVar9,uVar7 & 0xffff);
            uVar8 = (ulong)(*(byte *)(lVar5 + -0x28) >> 1);
            if ((*(byte *)(lVar5 + -0x28) & 1) != 0) {
              uVar8 = *(ulong *)(lVar5 + -0x20);
            }
            lVar41 = (uVar7 & 0xffff) + lVar41 + 2;
            *(char *)((long)puVar31 + lVar41 + 1) = (char)uVar8;
            *(char *)((long)puVar31 + lVar41) = (char)(uVar8 >> 8);
            pvVar9 = (void *)(lVar5 + -0x27);
            if ((*(byte *)(lVar5 + -0x28) & 1) != 0) {
              pvVar9 = *(void **)(lVar5 + -0x18);
            }
            memcpy((void *)((long)puVar31 + lVar41 + 2),pvVar9,uVar8 & 0xffff);
            auVar46._8_8_ = lVar36;
            auVar46._0_8_ = lVar36;
            auVar20._8_8_ = uVar23;
            auVar20._0_8_ = uVar22;
            auVar21._8_8_ = uVar25;
            auVar21._0_8_ = uVar24;
            lVar6 = (uVar8 & 0xffff) + lVar41 + 2;
            auVar48 = NEON_ushl(auVar46,auVar20,8);
            auVar50 = NEON_ushl(auVar46,auVar21,8);
            uVar35 = uVar35 - 1;
            lVar43 = lVar43 + -0x40;
            uVar13 = *(undefined1 *)(lVar5 + -0x10);
            *(char *)((long)puVar31 + lVar6 + 5) = (char)((ulong)lVar36 >> 0x18);
            *(undefined1 *)((long)puVar31 + lVar6) = uVar13;
            *(char *)((long)puVar31 + lVar6 + 6) = (char)((ulong)lVar36 >> 0x10);
            lVar41 = lVar6 + 9;
            *(char *)((long)puVar31 + lVar6 + 7) = (char)((ulong)lVar36 >> 8);
            *(char *)((long)puVar31 + lVar6 + 8) = (char)lVar36;
            *(uint *)((long)puVar31 + lVar6 + 1) =
                 CONCAT13(auVar50[8],CONCAT12(auVar50[0],CONCAT11(auVar48[8],auVar48[0])));
          } while (1 < uVar35);
        }
        pvVar44 = pvVar44 + 0x18;
      } while (pvVar44 != pvVar4);
    }
    lVar41 = local_78;
    p_Var38 = *(_jmethodID **)this;
                    /* try { // try from 00107d0c to 00107d2b has its CatchHandler @ 00107f14 */
    p_Var32 = (_jobject *)facebook::jni::Environment::current();
    _JNIEnv::CallVoidMethod(p_Var32,p_Var38,*(undefined8 *)PTR_method_00111670,lVar41);
    facebook::jni::throwPendingJniExceptionAsCppException();
    std::__ndk1::chrono::steady_clock::now();
  }
  if (local_78 != 0) {
                    /* try { // try from 00107db4 to 00107dc7 has its CatchHandler @ 00107f24 */
    plVar34 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar34 + 0xb8))(plVar34,local_78);
  }
  pBVar11 = local_c0;
  pBVar37 = pBStack_b8;
  if (local_c0 != (BreadcrumbData *)0x0) {
    for (; pBVar37 != pBVar11; pBVar37 = pBVar37 + -0x40) {
      if (((byte)pBVar37[-0x28] & 1) != 0) {
        operator_delete(*(void **)(pBVar37 + -0x18));
      }
      if (((byte)pBVar37[-0x40] & 1) != 0) {
        operator_delete(*(void **)(pBVar37 + -0x30));
      }
    }
    pBStack_b8 = pBVar11;
    operator_delete(local_c0);
  }
  local_c0 = (BreadcrumbData *)&local_a0;
  FUN_00108b48(&local_c0);
LAB_00107e30:
  if (*(long *)(lVar15 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00107f98  facebook::jni::JObject::getClass =====

/* facebook::jni::JObject::getClass() const */

void facebook::jni::JObject::getClass(void)

{
  undefined8 *in_x0;
  long *plVar1;
  undefined8 uVar2;
  undefined8 *in_x8;
  
                    /* try { // try from 00107fac to 00107fbf has its CatchHandler @ 00107fd0 */
  plVar1 = (long *)facebook::jni::Environment::current();
  uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1,*in_x0);
  *in_x8 = uVar2;
  return;
}


// ===== 00107fd4  facebook::jni::JClass::getMethod<void(facebook::jni::alias_ref<facebook::jni::JByteBuffer>)> =====

/* facebook::jni::JMethod<void (facebook::jni::alias_ref<facebook::jni::JByteBuffer>)>
   facebook::jni::JClass::getMethod<void
   (facebook::jni::alias_ref<facebook::jni::JByteBuffer>)>(char const*) const */

long __thiscall
facebook::jni::JClass::getMethod<void(facebook::jni::alias_ref<facebook::jni::JByteBuffer>)>
          (JClass *this,char *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)facebook::jni::Environment::current();
  lVar2 = (**(code **)(*plVar1 + 0x108))
                    (plVar1,*(undefined8 *)this,param_1,PTR_kDescriptor_00111678);
  facebook::jni::throwCppExceptionIf(lVar2 == 0);
  return lVar2;
}


// ===== 00108028  facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

/* facebook::jni::base_owned_ref<facebook::jni::JClass,
   facebook::jni::LocalReferenceAllocator>::~base_owned_ref() */

void __thiscall
facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
~base_owned_ref(base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *this)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)this;
  if (lVar2 != 0) {
                    /* try { // try from 00108040 to 00108053 has its CatchHandler @ 00108064 */
    plVar1 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar1 + 0xb8))(plVar1,lVar2);
  }
  *(undefined8 *)this = 0;
  return;
}


// ===== 00108068  facebook::jni::base_owned_ref<facebook::jni::JByteBuffer,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

/* facebook::jni::base_owned_ref<facebook::jni::JByteBuffer,
   facebook::jni::LocalReferenceAllocator>::~base_owned_ref() */

void __thiscall
facebook::jni::base_owned_ref<facebook::jni::JByteBuffer,facebook::jni::LocalReferenceAllocator>::
~base_owned_ref(base_owned_ref<facebook::jni::JByteBuffer,facebook::jni::LocalReferenceAllocator>
                *this)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)this;
  if (lVar2 != 0) {
                    /* try { // try from 00108080 to 00108093 has its CatchHandler @ 001080a4 */
    plVar1 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar1 + 0xb8))(plVar1,lVar2);
  }
  *(undefined8 *)this = 0;
  return;
}


// ===== 001080a8  std::__ndk1::vector<std::__ndk1::vector<discord::BreadcrumbData,std::__ndk1::allocator<discord::BreadcrumbData>>,std::__ndk1::allocator<std::__ndk1::vector<discord::BreadcrumbData,std::__ndk1::allocator<discord::BreadcrumbData>>>>::__push_back_slow_path<std::__ndk1::vector<discord::BreadcrumbData,std::__ndk1::allocator<discord::BreadcrumbData>>> =====

/* std::__ndk1::vector<discord::BreadcrumbData, std::__ndk1::allocator<discord::BreadcrumbData> >*
   std::__ndk1::vector<std::__ndk1::vector<discord::BreadcrumbData,
   std::__ndk1::allocator<discord::BreadcrumbData> >,
   std::__ndk1::allocator<std::__ndk1::vector<discord::BreadcrumbData,
   std::__ndk1::allocator<discord::BreadcrumbData> > >
   >::__push_back_slow_path<std::__ndk1::vector<discord::BreadcrumbData,
   std::__ndk1::allocator<discord::BreadcrumbData> > >(std::__ndk1::vector<discord::BreadcrumbData,
   std::__ndk1::allocator<discord::BreadcrumbData> >&&) */

vector * __thiscall
std::__ndk1::
vector<std::__ndk1::vector<discord::BreadcrumbData,std::__ndk1::allocator<discord::BreadcrumbData>>,std::__ndk1::allocator<std::__ndk1::vector<discord::BreadcrumbData,std::__ndk1::allocator<discord::BreadcrumbData>>>>
::
__push_back_slow_path<std::__ndk1::vector<discord::BreadcrumbData,std::__ndk1::allocator<discord::BreadcrumbData>>>
          (vector<std::__ndk1::vector<discord::BreadcrumbData,std::__ndk1::allocator<discord::BreadcrumbData>>,std::__ndk1::allocator<std::__ndk1::vector<discord::BreadcrumbData,std::__ndk1::allocator<discord::BreadcrumbData>>>>
           *this,vector *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long local_70;
  long local_68;
  long lStack_60;
  undefined8 local_58;
  vector<std::__ndk1::vector<discord::BreadcrumbData,std::__ndk1::allocator<discord::BreadcrumbData>>,std::__ndk1::allocator<std::__ndk1::vector<discord::BreadcrumbData,std::__ndk1::allocator<discord::BreadcrumbData>>>>
  *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar11 = *(long *)(this + 8) - *(long *)this;
  lVar5 = lVar11 >> 3;
  uVar1 = lVar5 * -0x5555555555555555 + 1;
  if (uVar1 < 0xaaaaaaaaaaaaaab) {
    local_50 = this + 0x10;
    lVar7 = *(long *)local_50 - *(long *)this >> 3;
    uVar8 = lVar7 * 0x5555555555555556;
    if (uVar8 < uVar1 || uVar8 - uVar1 == 0) {
      uVar8 = uVar1;
    }
    if (0x555555555555554 < (ulong)(lVar7 * -0x5555555555555555)) {
      uVar8 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar8 < 0xaaaaaaaaaaaaaab) {
      pvVar4 = operator_new(uVar8 * 0x18);
      uVar13 = *(undefined8 *)(param_1 + 0x10);
      uVar12 = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      uVar10 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = 0;
      lVar7 = *(long *)this;
      local_70 = *(long *)(this + 8);
      puVar2 = (undefined8 *)((long)pvVar4 + lVar11);
      *puVar2 = uVar10;
      puVar2[1] = 0;
      puVar2[2] = 0;
      *(undefined8 *)((long)pvVar4 + lVar5 * 8 + 0x10) = uVar13;
      *(undefined8 *)((long)pvVar4 + lVar5 * 8 + 8) = uVar12;
      puVar6 = puVar2;
      lStack_60 = local_70;
      if (local_70 != lVar7) {
        lVar5 = 0;
        do {
          lVar11 = local_70 + lVar5;
          lVar9 = lVar5 + -0x18;
          uVar10 = *(undefined8 *)(lVar11 + -0x18);
          *(undefined8 *)((long)puVar2 + lVar5 + -0x10) = *(undefined8 *)(lVar11 + -0x10);
          *(undefined8 *)((long)puVar2 + lVar5 + -0x18) = uVar10;
          *(undefined8 *)((long)puVar2 + lVar5 + -8) = *(undefined8 *)(lVar11 + -8);
          *(undefined8 *)(lVar11 + -0x18) = 0;
          *(undefined8 *)(lVar11 + -0x10) = 0;
          *(undefined8 *)(lVar11 + -8) = 0;
          lVar5 = lVar9;
        } while (local_70 + lVar9 != lVar7);
        local_70 = *(long *)this;
        puVar6 = (undefined8 *)((long)puVar2 + lVar9);
        lStack_60 = *(long *)(this + 8);
      }
      local_58 = *(undefined8 *)(this + 0x10);
      *(undefined8 **)this = puVar6;
      *(vector **)(this + 8) = (vector *)(puVar2 + 3);
      *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar8 * 0x18);
      local_68 = local_70;
      FUN_00108254(&local_70);
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return (vector *)(puVar2 + 3);
      }
      goto LAB_00108250;
    }
  }
  else {
    if (*(long *)(lVar3 + 0x28) != local_48) goto LAB_00108250;
    FUN_0010831c(this);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    FUN_00106768();
  }
LAB_00108250:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00108254  FUN_00108254 =====

void FUN_00108254(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  void *pvVar5;
  void *pvVar6;
  
  puVar1 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)param_1[2];
  while (puVar2 = puVar4, puVar2 != puVar1) {
    puVar4 = puVar2 + -3;
    pvVar5 = (void *)*puVar4;
    param_1[2] = puVar4;
    if (pvVar5 != (void *)0x0) {
      pvVar6 = (void *)puVar2[-2];
      pvVar3 = pvVar5;
      if (pvVar6 != pvVar5) {
        do {
          if ((*(byte *)((long)pvVar6 + -0x28) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar6 + -0x18));
          }
          if ((*(byte *)((long)pvVar6 + -0x40) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar6 + -0x30));
          }
          pvVar6 = (void *)((long)pvVar6 + -0x40);
        } while (pvVar6 != pvVar5);
        pvVar3 = (void *)*puVar4;
      }
      puVar2[-2] = pvVar5;
      operator_delete(pvVar3);
      puVar4 = (undefined8 *)param_1[2];
    }
  }
  if ((void *)*param_1 == (void *)0x0) {
    return;
  }
  operator_delete((void *)*param_1);
  return;
}


// ===== 0010831c  FUN_0010831c =====

void FUN_0010831c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00108330("vector");
}


// ===== 00108330  FUN_00108330 =====

void FUN_00108330(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
                    /* try { // try from 0010834c to 00108353 has its CatchHandler @ 0010836c */
  FUN_00108380(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_typeinfo_00111680,PTR__length_error_00111688);
}


// ===== 00108380  FUN_00108380 =====

void FUN_00108380(logic_error *param_1,char *param_2)

{
  std::logic_error::logic_error(param_1,param_2);
  *(undefined **)param_1 = PTR_vtable_00111690 + 0x10;
  return;
}


// ===== 001083b0  discord::BreadcrumbData::~BreadcrumbData =====

/* discord::BreadcrumbData::~BreadcrumbData() */

void __thiscall discord::BreadcrumbData::~BreadcrumbData(BreadcrumbData *this)

{
  if (((byte)this[0x18] & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  if (((byte)*this & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}


// ===== 001083f4  std::__ndk1::vector<discord::BreadcrumbData,std::__ndk1::allocator<discord::BreadcrumbData>>::__push_back_slow_path<discord::BreadcrumbData_const&> =====

/* discord::BreadcrumbData* std::__ndk1::vector<discord::BreadcrumbData,
   std::__ndk1::allocator<discord::BreadcrumbData> >::__push_back_slow_path<discord::BreadcrumbData
   const&>(discord::BreadcrumbData const&) */

BreadcrumbData * __thiscall
std::__ndk1::vector<discord::BreadcrumbData,std::__ndk1::allocator<discord::BreadcrumbData>>::
__push_back_slow_path<discord::BreadcrumbData_const&>
          (vector<discord::BreadcrumbData,std::__ndk1::allocator<discord::BreadcrumbData>> *this,
          BreadcrumbData *param_1)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar7;
  void *pvVar8;
  ulong uVar9;
  long lVar10;
  void *pvVar11;
  byte *unaff_x22;
  undefined8 uVar12;
  void *local_70;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_60;
  void *local_58;
  vector<discord::BreadcrumbData,std::__ndk1::allocator<discord::BreadcrumbData>> *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  lVar10 = *(long *)(this + 8) - *(long *)this >> 6;
  uVar1 = lVar10 + 1;
  if (uVar1 >> 0x3a == 0) {
    local_50 = this + 0x10;
    uVar6 = *(long *)local_50 - *(long *)this;
    uVar9 = (long)uVar6 >> 5;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7fffffffffffffbf < uVar6) {
      uVar9 = 0x3ffffffffffffff;
    }
    if (uVar9 == 0) {
      local_70 = (void *)0x0;
    }
    else {
      if (uVar9 >> 0x3a != 0) goto LAB_001085f8;
      local_70 = operator_new(uVar9 << 6);
    }
    pbVar2 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             ((long)local_70 + lVar10 * 0x40);
    local_58 = (void *)((long)local_70 + uVar9 * 0x40);
    local_68 = pbVar2;
    local_60 = pbVar2;
    if (((byte)*param_1 & 1) == 0) {
      uVar12 = *(undefined8 *)param_1;
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(pbVar2 + 8) = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)pbVar2 = uVar12;
      *(undefined8 *)(pbVar2 + 0x10) = uVar5;
    }
    else {
                    /* try { // try from 001084b0 to 001084b7 has its CatchHandler @ 00108624 */
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external(pbVar2,*(char **)(param_1 + 0x10),*(ulong *)(param_1 + 8));
    }
    if (((byte)param_1[0x18] & 1) == 0) {
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(pbVar2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(pbVar2 + 0x18) = uVar12;
      *(undefined8 *)(pbVar2 + 0x28) = uVar5;
    }
    else {
                    /* try { // try from 001084dc to 001084e3 has its CatchHandler @ 0010860c */
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external(pbVar2 + 0x18,*(char **)(param_1 + 0x28),*(ulong *)(param_1 + 0x20))
      ;
    }
    pvVar3 = *(void **)this;
    pvVar11 = *(void **)(this + 8);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(pbVar2 + 0x38) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(pbVar2 + 0x30) = uVar5;
    pbVar2 = local_60 + 0x40;
    pbVar7 = local_68;
    pvVar8 = pvVar11;
    if (pvVar11 != pvVar3) {
      do {
        uVar12 = *(undefined8 *)((long)pvVar11 + -0x38);
        uVar5 = *(undefined8 *)((long)pvVar11 + -0x40);
        *(undefined8 *)(pbVar7 + -0x30) = *(undefined8 *)((long)pvVar11 + -0x30);
        *(undefined8 *)(pbVar7 + -0x38) = uVar12;
        *(undefined8 *)(pbVar7 + -0x40) = uVar5;
        uVar12 = *(undefined8 *)((long)pvVar11 + -0x20);
        uVar5 = *(undefined8 *)((long)pvVar11 + -0x28);
        *(undefined8 *)((long)pvVar11 + -0x38) = 0;
        *(undefined8 *)((long)pvVar11 + -0x30) = 0;
        *(undefined8 *)((long)pvVar11 + -0x40) = 0;
        *(undefined8 *)(pbVar7 + -0x18) = *(undefined8 *)((long)pvVar11 + -0x18);
        pvVar8 = (void *)((long)pvVar11 + -0x40);
        *(undefined8 *)(pbVar7 + -0x20) = uVar12;
        *(undefined8 *)(pbVar7 + -0x28) = uVar5;
        uVar5 = *(undefined8 *)((long)pvVar11 + -0x10);
        *(undefined8 *)((long)pvVar11 + -0x20) = 0;
        *(undefined8 *)((long)pvVar11 + -0x18) = 0;
        *(undefined8 *)((long)pvVar11 + -0x28) = 0;
        *(undefined8 *)(pbVar7 + -8) = *(undefined8 *)((long)pvVar11 + -8);
        *(undefined8 *)(pbVar7 + -0x10) = uVar5;
        pbVar7 = pbVar7 + -0x40;
        pvVar11 = pvVar8;
      } while (pvVar8 != pvVar3);
      pvVar11 = *(void **)(this + 8);
      pvVar8 = *(void **)this;
    }
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)this =
         pbVar7;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)(this + 8) =
         pbVar2;
    *(void **)(this + 0x10) = local_58;
    pvVar3 = pvVar11;
    for (; pvVar11 != pvVar8; pvVar11 = (void *)((long)pvVar11 + -0x40)) {
      if ((*(byte *)((long)pvVar11 + -0x28) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar11 + -0x18));
      }
      if ((*(byte *)((long)pvVar11 + -0x40) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar11 + -0x30));
      }
      pvVar3 = pvVar8;
    }
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    if (*(long *)(lVar4 + 0x28) == local_48) {
      return (BreadcrumbData *)pbVar2;
    }
  }
  else {
    if (*(long *)(lVar4 + 0x28) != local_48) goto LAB_00108648;
    FUN_0010874c(this);
LAB_001085f8:
    if (*(long *)(lVar4 + 0x28) == local_48) {
      uVar5 = FUN_00106768();
                    /* catch() { ... } // from try @ 001084dc with catch @ 0010860c */
      if ((*unaff_x22 & 1) != 0) {
        operator_delete(*(void **)(unaff_x22 + 0x10));
      }
      FUN_001086d0(&local_70);
      if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00108f50(uVar5);
      }
    }
  }
LAB_00108648:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0010864c  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init_copy_ctor_external =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::__init_copy_ctor_external(char const*, unsigned long) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
__init_copy_ctor_external
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  
  if (param_2 < 0x17) {
    __dest = this + 1;
    *this = SUB41((int)param_2 << 1,0);
  }
  else {
    if (0xffffffffffffffef < param_2) {
      FUN_001086bc(this);
                    /* WARNING: Subroutine does not return */
      FUN_00108330("basic_string");
    }
    __dest = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             operator_new((param_2 | 0xf) + 1);
    *(ulong *)(this + 8) = param_2;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x10) = __dest;
    *(ulong *)this = (param_2 | 0xf) + 2;
  }
  memmove(__dest,param_1,param_2 + 1);
  return;
}


// ===== 001086bc  FUN_001086bc =====

void FUN_001086bc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00108330("basic_string");
}


// ===== 001086d0  FUN_001086d0 =====

void FUN_001086d0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = (byte *)(lVar2 + -0x40);
    if ((*(byte *)(lVar2 + -0x28) & 1) != 0) {
      operator_delete(*(void **)(lVar2 + -0x18));
    }
    if ((*(byte *)(lVar2 + -0x40) & 1) != 0) {
      operator_delete(*(void **)(lVar2 + -0x30));
    }
    lVar2 = param_1[2];
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 0010874c  FUN_0010874c =====

void FUN_0010874c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00108330("vector");
}


// ===== 00108760  FUN_00108760 =====

basic_ostream * FUN_00108760(basic_ostream *param_1,long param_2,long param_3)

{
  basic_ostream *pbVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  sentry local_70 [16];
  id aiStack_60 [8];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00108794 to 0010879f has its CatchHandler @ 001088ac */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry(local_70,param_1);
  if (local_70[0] != (sentry)0x0) {
    pbVar1 = param_1 + *(long *)(*(long *)param_1 + -0x18);
    uVar7 = *(undefined8 *)(pbVar1 + 0x28);
    uVar2 = *(uint *)(pbVar1 + 8);
    if (*(int *)(pbVar1 + 0x90) == -1) {
                    /* try { // try from 001087c8 to 001087d7 has its CatchHandler @ 0010889c */
      std::__ndk1::ios_base::getloc();
                    /* try { // try from 001087d8 to 001087f7 has its CatchHandler @ 0010888c */
      plVar5 = (long *)std::__ndk1::locale::use_facet(aiStack_60);
      uVar4 = (**(code **)(*plVar5 + 0x38))(plVar5,0x20);
      std::__ndk1::locale::~locale((locale *)aiStack_60);
      *(uint *)(pbVar1 + 0x90) = uVar4 & 0xff;
    }
    lVar6 = param_2 + param_3;
    if ((uVar2 & 0xb0) != 0x20) {
      lVar6 = param_2;
    }
                    /* try { // try from 00108824 to 0010882f has its CatchHandler @ 0010889c */
    lVar6 = FUN_001088f8(uVar7,param_2,lVar6,param_2 + param_3,pbVar1);
    if (lVar6 == 0) {
                    /* try { // try from 00108848 to 0010884f has its CatchHandler @ 00108888 */
      std::__ndk1::ios_base::clear((int)param_1 + (int)*(undefined8 *)(*(long *)param_1 + -0x18));
    }
  }
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry(local_70);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001088f8  FUN_001088f8 =====

long * FUN_001088f8(long *param_1,long param_2,long param_3,long param_4,long param_5,int param_6)

{
  ulong __n;
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  ulong local_80;
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_1 == (long *)0x0) goto LAB_00108a48;
  lVar4 = param_3 - param_2;
  __n = *(long *)(param_5 + 0x18) - (param_4 - param_2);
  if (__n == 0 || *(long *)(param_5 + 0x18) < param_4 - param_2) {
    __n = 0;
  }
  if ((lVar4 < 1) || (lVar2 = (**(code **)(*param_1 + 0x60))(param_1,param_2,lVar4), lVar2 == lVar4)
     ) {
    if (0 < (long)__n) {
      if (__n < 0x17) {
        pvVar5 = (void *)((ulong)&local_80 | 1);
        local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
      }
      else {
        pvVar5 = operator_new((__n | 0xf) + 1);
        local_80 = (__n | 0xf) + 2;
        local_78 = __n;
        local_70 = pvVar5;
      }
      memset(pvVar5,param_6,__n);
      *(undefined1 *)((long)pvVar5 + __n) = 0;
      pvVar5 = (void *)((ulong)&local_80 | 1);
      if ((local_80 & 1) != 0) {
        pvVar5 = local_70;
      }
                    /* try { // try from 001089e8 to 001089f3 has its CatchHandler @ 00108a7c */
      uVar3 = (**(code **)(*param_1 + 0x60))(param_1,pvVar5,__n);
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      if (uVar3 != __n) goto LAB_00108a44;
    }
    param_4 = param_4 - param_3;
    if ((param_4 < 1) ||
       (lVar4 = (**(code **)(*param_1 + 0x60))(param_1,param_3,param_4), lVar4 == param_4)) {
      *(undefined8 *)(param_5 + 0x18) = 0;
      goto LAB_00108a48;
    }
  }
LAB_00108a44:
  param_1 = (long *)0x0;
LAB_00108a48:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00108aac  _JNIEnv::CallVoidMethod =====

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


// ===== 00108b48  FUN_00108b48 =====

void FUN_00108b48(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  void *pvVar7;
  
  puVar3 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)*puVar3;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  puVar5 = (undefined8 *)puVar3[1];
  puVar2 = puVar4;
  if (puVar5 != puVar4) {
    do {
      puVar2 = puVar5 + -3;
      pvVar6 = (void *)*puVar2;
      if (pvVar6 != (void *)0x0) {
        pvVar7 = (void *)puVar5[-2];
        pvVar1 = pvVar6;
        if (pvVar7 != pvVar6) {
          do {
            if ((*(byte *)((long)pvVar7 + -0x28) & 1) != 0) {
              operator_delete(*(void **)((long)pvVar7 + -0x18));
            }
            if ((*(byte *)((long)pvVar7 + -0x40) & 1) != 0) {
              operator_delete(*(void **)((long)pvVar7 + -0x30));
            }
            pvVar7 = (void *)((long)pvVar7 + -0x40);
          } while (pvVar7 != pvVar6);
          pvVar1 = (void *)*puVar2;
        }
        puVar5[-2] = pvVar6;
        operator_delete(pvVar1);
      }
      puVar5 = puVar2;
    } while (puVar2 != puVar4);
    puVar2 = *(undefined8 **)*param_1;
  }
  puVar3[1] = puVar4;
  operator_delete(puVar2);
  return;
}


// ===== 00108c28  FUN_00108c28 =====

undefined8 FUN_00108c28(undefined8 *param_1)

{
  pthread_key_t __key;
  long lVar1;
  pthread_key_t *ppVar2;
  void *__pointer;
  long lVar3;
  code *pcVar4;
  __thread_struct *this;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00108c50 to 00108c7f has its CatchHandler @ 00108ccc */
  ppVar2 = (pthread_key_t *)std::__ndk1::__thread_local_data();
  __pointer = (void *)*param_1;
  __key = *ppVar2;
  *param_1 = 0;
  pthread_setspecific(__key,__pointer);
  pcVar4 = (code *)param_1[1];
  if ((param_1[2] & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1[3] + ((long)param_1[2] >> 1)));
  }
  (*pcVar4)();
  this = (__thread_struct *)*param_1;
  *param_1 = 0;
  if (this != (__thread_struct *)0x0) {
    std::__ndk1::__thread_struct::~__thread_struct(this);
    operator_delete(this);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00108cf4  FUN_00108cf4 =====

void FUN_00108cf4(undefined8 *param_1)

{
  undefined8 *puVar1;
  __thread_struct *this;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    this = (__thread_struct *)*puVar1;
    *puVar1 = 0;
    if (this != (__thread_struct *)0x0) {
      std::__ndk1::__thread_struct::~__thread_struct(this);
      operator_delete(this);
    }
    operator_delete(puVar1);
    return;
  }
  return;
}


// ===== 00108d44  FUN_00108d44 =====

void FUN_00108d44(undefined8 *param_1)

{
  __thread_struct *this;
  
  this = (__thread_struct *)*param_1;
  *param_1 = 0;
  if (this != (__thread_struct *)0x0) {
    std::__ndk1::__thread_struct::~__thread_struct(this);
    operator_delete(this);
    return;
  }
  return;
}


// ===== 00108d80  FUN_00108d80 =====

void FUN_00108d80(char *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
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
  local_90 = in_x4;
  uStack_88 = in_x5;
  local_80 = in_x6;
  uStack_78 = in_x7;
  local_70 = (undefined1 *)register0x00000008;
  iVar2 = vsnprintf(param_1,0x100,"%s:%d",&local_70);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


// ===== 00108e1c  FUN_00108e1c =====

undefined8 FUN_00108e1c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_80 [24];
  code *local_68;
  long local_38;
  
  FUN_001090c8(param_2,param_1);
  iVar2 = FUN_001091ec(param_2);
  while( true ) {
    if (iVar2 == 0) {
      return 5;
    }
    if (iVar2 < 0) break;
    FUN_00109170(param_2,0xfffffffe,&local_38);
    iVar2 = FUN_00109200(param_2,auStack_80);
    if (iVar2 != 0) {
      return 2;
    }
    if (local_68 != (code *)0x0) {
      uVar3 = 6;
      if (local_38 != param_3[3]) {
        uVar3 = 2;
      }
      iVar2 = (*local_68)(1,uVar3,*param_3,param_3,param_2);
      puVar1 = PTR___sF_001116a0;
      if (iVar2 != 8) {
        if (iVar2 != 7) {
          return 2;
        }
        FUN_00109240(param_2);
        return 2;
      }
      if (local_38 == param_3[3]) {
        fprintf((FILE *)(PTR___sF_001116a0 + 0x130),"libunwind: %s - %s\n","unwind_phase2",
                "during phase1 personality function said it would stop here, but now in phase2 it did not stop here"
               );
        fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    iVar2 = FUN_001091ec(param_2);
  }
  return 2;
}


// ===== 00108f50  FUN_00108f50 =====

void FUN_00108f50(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_4a0 [624];
  undefined1 auStack_230 [528];
  
  FUN_0010cb74(auStack_230);
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_00108e1c(auStack_230,auStack_4a0,param_1);
  }
  else {
    FUN_00108fd4(auStack_230,auStack_4a0,param_1,*(long *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = PTR___sF_001116a0;
  fprintf((FILE *)(PTR___sF_001116a0 + 0x130),"libunwind: %s - %s\n","_Unwind_Resume",
          "_Unwind_Resume() can\'t return");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00108fd4  FUN_00108fd4 =====

void FUN_00108fd4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,code *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined1 auStack_78 [24];
  code *local_60;
  
  FUN_001090c8(param_2,param_1);
  iVar1 = FUN_001091ec(param_2);
  while( true ) {
    if (iVar1 < 1) {
      (*param_4)(1,0x1a,*param_3,param_3,param_2,param_5);
      return;
    }
    iVar1 = FUN_00109200(param_2,auStack_78);
    if (iVar1 != 0) break;
    iVar1 = (*param_4)(1,10,*param_3,param_3,param_2,param_5);
    if (iVar1 != 0) {
      return;
    }
    if ((local_60 != (code *)0x0) &&
       (iVar1 = (*local_60)(1,10,*param_3,param_3,param_2), iVar1 != 8)) {
      if (iVar1 != 7) {
        return;
      }
      FUN_00109240(param_2);
    }
    iVar1 = FUN_001091ec(param_2);
  }
  return;
}


// ===== 001090c8  FUN_001090c8 =====

undefined8 FUN_001090c8(undefined8 *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = &PTR_FUN_00111358;
  param_1[1] = &DAT_00115ad8;
  memcpy(param_1 + 2,param_2,0x110);
  uVar3 = *(undefined8 *)((long)param_2 + 0x130);
  uVar2 = *(undefined8 *)((long)param_2 + 0x148);
  uVar1 = *(undefined8 *)((long)param_2 + 0x140);
  uVar7 = *(undefined8 *)((long)param_2 + 0x118);
  uVar6 = *(undefined8 *)((long)param_2 + 0x110);
  uVar5 = *(undefined8 *)((long)param_2 + 0x128);
  uVar4 = *(undefined8 *)((long)param_2 + 0x120);
  param_1[0x29] = *(undefined8 *)((long)param_2 + 0x138);
  param_1[0x28] = uVar3;
  param_1[0x2b] = uVar2;
  param_1[0x2a] = uVar1;
  param_1[0x25] = uVar7;
  param_1[0x24] = uVar6;
  param_1[0x27] = uVar5;
  param_1[0x26] = uVar4;
  uVar3 = *(undefined8 *)((long)param_2 + 0x170);
  uVar2 = *(undefined8 *)((long)param_2 + 0x188);
  uVar1 = *(undefined8 *)((long)param_2 + 0x180);
  uVar7 = *(undefined8 *)((long)param_2 + 0x158);
  uVar6 = *(undefined8 *)((long)param_2 + 0x150);
  uVar5 = *(undefined8 *)((long)param_2 + 0x168);
  uVar4 = *(undefined8 *)((long)param_2 + 0x160);
  param_1[0x31] = *(undefined8 *)((long)param_2 + 0x178);
  param_1[0x30] = uVar3;
  param_1[0x33] = uVar2;
  param_1[0x32] = uVar1;
  param_1[0x2d] = uVar7;
  param_1[0x2c] = uVar6;
  param_1[0x2f] = uVar5;
  param_1[0x2e] = uVar4;
  uVar3 = *(undefined8 *)((long)param_2 + 0x1b0);
  uVar2 = *(undefined8 *)((long)param_2 + 0x1c8);
  uVar1 = *(undefined8 *)((long)param_2 + 0x1c0);
  uVar7 = *(undefined8 *)((long)param_2 + 0x198);
  uVar6 = *(undefined8 *)((long)param_2 + 400);
  uVar5 = *(undefined8 *)((long)param_2 + 0x1a8);
  uVar4 = *(undefined8 *)((long)param_2 + 0x1a0);
  param_1[0x39] = *(undefined8 *)((long)param_2 + 0x1b8);
  param_1[0x38] = uVar3;
  param_1[0x3b] = uVar2;
  param_1[0x3a] = uVar1;
  param_1[0x35] = uVar7;
  param_1[0x34] = uVar6;
  param_1[0x37] = uVar5;
  param_1[0x36] = uVar4;
  uVar3 = *(undefined8 *)((long)param_2 + 0x1f0);
  uVar2 = *(undefined8 *)((long)param_2 + 0x208);
  uVar1 = *(undefined8 *)((long)param_2 + 0x200);
  uVar7 = *(undefined8 *)((long)param_2 + 0x1d8);
  uVar6 = *(undefined8 *)((long)param_2 + 0x1d0);
  uVar5 = *(undefined8 *)((long)param_2 + 0x1e8);
  uVar4 = *(undefined8 *)((long)param_2 + 0x1e0);
  param_1[0x41] = *(undefined8 *)((long)param_2 + 0x1f8);
  param_1[0x40] = uVar3;
  param_1[0x43] = uVar2;
  param_1[0x42] = uVar1;
  param_1[0x3d] = uVar7;
  param_1[0x3c] = uVar6;
  param_1[0x3f] = uVar5;
  param_1[0x3e] = uVar4;
  *(undefined8 *)((long)param_1 + 0x263) = 0;
  *(undefined8 *)((long)param_1 + 0x25b) = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  FUN_00109a90(param_1,0);
  return 0;
}


// ===== 00109170  FUN_00109170 =====

undefined8 FUN_00109170(long *param_1,undefined4 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x10))();
  if ((uVar1 & 1) != 0) {
    uVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_2);
    *param_3 = uVar2;
    return 0;
  }
  return 0xffffe672;
}


// ===== 001091ec  FUN_001091ec =====

void FUN_001091ec(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001091fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,1);
  return;
}


// ===== 00109200  FUN_00109200 =====

undefined4 FUN_00109200(long *param_1,long param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x48))();
  uVar1 = 0xffffe66b;
  if (*(long *)(param_2 + 8) != 0) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 00109240  FUN_00109240 =====

undefined8 FUN_00109240(long *param_1)

{
  (**(code **)(*param_1 + 0x50))();
  return 0xffffe674;
}


// ===== 00109268  FUN_00109268 =====

char * FUN_00109268(undefined8 param_1,uint *param_2,undefined8 *param_3,long *param_4,ulong param_5
                   )

{
  char cVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  uint *local_48;
  
  puVar10 = param_2 + 1;
  uVar9 = (ulong)*param_2;
  if (*param_2 == 0xffffffff) {
    uVar9 = *(ulong *)(param_2 + 1);
    puVar10 = param_2 + 3;
  }
  if (uVar9 == 0) {
    pcVar7 = "FDE has zero length";
  }
  else if (*puVar10 == 0) {
    pcVar7 = "FDE is really a CIE";
  }
  else {
    lVar8 = (long)puVar10 - (ulong)*puVar10;
    if ((param_5 & 1) == 0) {
      pcVar7 = (char *)FUN_001093f8(param_1,lVar8,param_4);
      if (pcVar7 != (char *)0x0) {
        return pcVar7;
      }
    }
    else if (*param_4 != lVar8) {
      return "CIE start does not match";
    }
    lVar8 = (long)puVar10 + uVar9;
    local_48 = puVar10 + 1;
    lVar3 = FUN_0010b250(param_1,&local_48,lVar8,(char)param_4[3],0);
    lVar4 = FUN_0010b250(param_1,&local_48,lVar8,*(byte *)(param_4 + 3) & 0xf,0);
    cVar1 = *(char *)((long)param_4 + 0x31);
    param_3[5] = 0;
    puVar10 = local_48;
    if (cVar1 != '\0') {
      lVar5 = FUN_0010b5dc(&local_48,lVar8);
      puVar2 = local_48;
      puVar10 = (uint *)((long)local_48 + lVar5);
      if ((*(byte *)((long)param_4 + 0x19) != 0xff) &&
         (lVar5 = FUN_0010b250(param_1,&local_48,lVar8,*(byte *)((long)param_4 + 0x19) & 0xf,0),
         lVar5 != 0)) {
        local_48 = puVar2;
        uVar6 = FUN_0010b250(param_1,&local_48,lVar8,*(undefined1 *)((long)param_4 + 0x19),0);
        param_3[5] = uVar6;
      }
    }
    pcVar7 = (char *)0x0;
    param_3[2] = puVar10;
    param_3[3] = lVar3;
    *param_3 = param_2;
    param_3[1] = lVar8 - (long)param_2;
    param_3[4] = lVar4 + lVar3;
  }
  return pcVar7;
}


// ===== 001093f8  FUN_001093f8 =====

char * FUN_001093f8(undefined8 param_1,uint *param_2,long *param_3)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  long lVar8;
  char *pcVar9;
  uint *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  byte *pbVar18;
  byte *local_48;
  
  *(undefined2 *)((long)param_3 + 0x33) = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  *(undefined2 *)(param_3 + 6) = 0;
  *param_3 = (long)param_2;
  *(undefined4 *)(param_3 + 3) = 0xff00;
  puVar10 = param_2 + 1;
  uVar13 = (ulong)*param_2;
  if (*param_2 == 0xffffffff) {
    uVar13 = *(ulong *)(param_2 + 1);
    puVar10 = param_2 + 3;
    pbVar1 = (byte *)(uVar13 + (long)puVar10);
  }
  else {
    pbVar1 = (byte *)((long)puVar10 + uVar13);
  }
  if (uVar13 == 0) {
    pcVar9 = (char *)0x0;
  }
  else if (*puVar10 == 0) {
    uVar4 = puVar10[1];
    if (((byte)uVar4 & 0xfd) == 1) {
      pbVar18 = (byte *)((long)puVar10 + 5);
      pbVar11 = pbVar18;
      do {
        local_48 = pbVar11 + 1;
        bVar2 = *pbVar11;
        pbVar11 = local_48;
      } while (bVar2 != 0);
      uVar7 = FUN_0010b5dc(&local_48,pbVar1);
      uVar13 = 0;
      uVar14 = 0;
      *(undefined4 *)(param_3 + 5) = uVar7;
      puVar5 = PTR___sF_001116a0;
      pbVar11 = local_48;
      pbVar15 = local_48;
      do {
        pbVar12 = pbVar11;
        if (pbVar15 == pbVar1) {
          fprintf((FILE *)(PTR___sF_001116a0 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                  "truncated sleb128 expression");
          fflush((FILE *)(puVar5 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
        pbVar16 = pbVar15 + 1;
        bVar2 = *pbVar15;
        pbVar11 = pbVar12 + 1;
        uVar3 = uVar13 & 0x3f;
        uVar13 = uVar13 + 7;
        uVar14 = ((ulong)bVar2 & 0x7f) << uVar3 | uVar14;
        pbVar15 = pbVar16;
      } while ((char)bVar2 < '\0');
      uVar17 = (uint)(-1L << (uVar13 & 0x3f));
      if (0x38 < (int)uVar13 - 7U || bVar2 < 0x40) {
        uVar17 = 0;
      }
      *(uint *)((long)param_3 + 0x2c) = (uint)uVar14 | uVar17;
      if ((byte)uVar4 == 1) {
        local_48 = pbVar12 + 2;
        *(byte *)((long)param_3 + 0x32) = *pbVar16;
        bVar2 = *pbVar18;
      }
      else {
        local_48 = pbVar11;
        uVar6 = FUN_0010b5dc(&local_48,pbVar1);
        *(undefined1 *)((long)param_3 + 0x32) = uVar6;
        bVar2 = *pbVar18;
      }
      if (bVar2 == 0x7a) {
        FUN_0010b5dc(&local_48,pbVar1);
LAB_00109578:
        bVar2 = *pbVar18;
        if (bVar2 < 0x50) {
          if (bVar2 < 0x47) {
            if (bVar2 != 0x42) {
              if (bVar2 != 0) goto LAB_00109618;
              goto LAB_0010965c;
            }
            *(undefined1 *)((long)param_3 + 0x33) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_00109578;
          }
          if (bVar2 == 0x47) {
            *(undefined1 *)((long)param_3 + 0x34) = 1;
            goto LAB_00109618;
          }
          if (bVar2 == 0x4c) {
            pbVar18 = pbVar18 + 1;
            *(byte *)((long)param_3 + 0x19) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_00109578;
          }
        }
        else if (bVar2 < 0x53) {
          if (bVar2 == 0x50) {
            bVar2 = *local_48;
            *(byte *)((long)param_3 + 0x1a) = bVar2;
            *(char *)((long)param_3 + 0x1b) = (char)(local_48 + 1) - (char)param_2;
            local_48 = local_48 + 1;
            lVar8 = FUN_0010b250(param_1,&local_48,pbVar1,bVar2,0);
            param_3[4] = lVar8;
            pbVar18 = pbVar18 + 1;
            goto LAB_00109578;
          }
          if (bVar2 == 0x52) {
            pbVar18 = pbVar18 + 1;
            *(byte *)(param_3 + 3) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_00109578;
          }
        }
        else {
          if (bVar2 == 0x53) {
            *(undefined1 *)(param_3 + 6) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_00109578;
          }
          if (bVar2 == 0x7a) {
            *(undefined1 *)((long)param_3 + 0x31) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_00109578;
          }
        }
LAB_00109618:
        pbVar18 = pbVar18 + 1;
        goto LAB_00109578;
      }
LAB_0010965c:
      pcVar9 = (char *)0x0;
      param_3[1] = (long)pbVar1 - *param_3;
      param_3[2] = (long)local_48;
    }
    else {
      pcVar9 = "CIE version is not 1 or 3";
    }
  }
  else {
    pcVar9 = "CIE ID is not zero";
  }
  return pcVar9;
}


// ===== 001096c0  FUN_001096c0 =====

void FUN_001096c0(void)

{
  return;
}


// ===== 001096c8  FUN_001096c8 =====

void FUN_001096c8(void)

{
  return;
}


// ===== 001096d0  FUN_001096d0 =====

bool FUN_001096d0(undefined8 param_1,uint param_2)

{
  if (0xfffffffd < param_2) {
    return true;
  }
  if (0x5f < param_2) {
    return false;
  }
  if (param_2 == 0x22) {
    return true;
  }
  return param_2 - 0x40 < 0xffffffe1;
}


// ===== 00109714  FUN_00109714 =====

undefined8 FUN_00109714(long param_1,uint param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_001116a0;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_0010977c:
      return *(undefined8 *)(param_1 + 0x108);
    }
    if (param_2 == 0xffffffff) goto LAB_00109770;
    if (param_2 == 0x1d) {
      return *(undefined8 *)(param_1 + 0xf8);
    }
  }
  else if ((int)param_2 < 0x20) {
    if (param_2 == 0x1e) {
      return *(undefined8 *)(param_1 + 0x100);
    }
    if (param_2 == 0x1f) goto LAB_0010977c;
  }
  else {
    if (param_2 == 0x22) {
      return *(undefined8 *)(param_1 + 0x118);
    }
    if (param_2 == 0x20) {
LAB_00109770:
      return *(undefined8 *)(param_1 + 0x110);
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_001116a0 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8);
}


// ===== 001097fc  FUN_001097fc =====

void FUN_001097fc(long param_1,uint param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_001116a0;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_00109864:
      *(undefined8 *)(param_1 + 0x108) = param_3;
      return;
    }
    if (param_2 == 0xffffffff) goto LAB_00109858;
    if (param_2 == 0x1d) {
      *(undefined8 *)(param_1 + 0xf8) = param_3;
      return;
    }
  }
  else if ((int)param_2 < 0x20) {
    if (param_2 == 0x1e) {
      *(undefined8 *)(param_1 + 0x100) = param_3;
      return;
    }
    if (param_2 == 0x1f) goto LAB_00109864;
  }
  else {
    if (param_2 == 0x22) {
      *(undefined8 *)(param_1 + 0x118) = param_3;
      return;
    }
    if (param_2 == 0x20) {
LAB_00109858:
      *(undefined8 *)(param_1 + 0x110) = param_3;
      return;
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_001116a0 + 0x130),"libunwind: %s - %s\n","setRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8) = param_3;
  return;
}


// ===== 001098e4  FUN_001098e4 =====

bool FUN_001098e4(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffffffe0) == 0x40;
}


// ===== 001098f8  FUN_001098f8 =====

undefined1  [16] FUN_001098f8(long param_1,int param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + (long)param_2 * 8 + -0xe0);
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 00109908  FUN_00109908 =====

void FUN_00109908(undefined8 param_1,long param_2,int param_3)

{
  *(undefined8 *)(param_2 + (long)param_3 * 8 + -0xe0) = param_1;
  return;
}


// ===== 00109918  FUN_00109918 =====

ulong FUN_00109918(long *param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_240 [528];
  
  if ((char)param_1[0x4d] != '\0') {
    return 0;
  }
  if (*(char *)((long)param_1 + 0x26a) == '\0') {
    lVar1 = param_1[1];
    uVar4 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
    uVar3 = FUN_00109e3c(lVar1,uVar4,param_1[0x4b],param_1 + 2,(long)param_1 + 0x269,param_2 & 1);
    iVar2 = (int)uVar3;
  }
  else {
    memset(auStack_240,0,0x210);
    uVar3 = FUN_00109d1c(param_1,auStack_240);
    iVar2 = (int)uVar3;
  }
  if (iVar2 == 1) {
    uVar3 = uVar3 & 0xffffffff;
    (**(code **)(*param_1 + 0x68))(param_1,1);
    if ((char)param_1[0x4d] != '\0') {
      return 0;
    }
  }
  return uVar3;
}


// ===== 00109a08  FUN_00109a08 =====

void FUN_00109a08(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)(param_1 + 0x268) != '\0') {
    param_2[8] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[7] = 0;
    param_2[6] = 0;
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x220);
  param_2[1] = *(undefined8 *)(param_1 + 0x228);
  *param_2 = uVar1;
  uVar6 = *(undefined8 *)(param_1 + 0x248);
  uVar5 = *(undefined8 *)(param_1 + 0x240);
  uVar2 = *(undefined8 *)(param_1 + 600);
  uVar1 = *(undefined8 *)(param_1 + 0x250);
  uVar4 = *(undefined8 *)(param_1 + 0x238);
  uVar3 = *(undefined8 *)(param_1 + 0x230);
  param_2[8] = *(undefined8 *)(param_1 + 0x260);
  param_2[5] = uVar6;
  param_2[4] = uVar5;
  param_2[7] = uVar2;
  param_2[6] = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return;
}


// ===== 00109a4c  FUN_00109a4c =====

void FUN_00109a4c(long param_1)

{
  FUN_0010cae4(param_1 + 0x10);
  return;
}


// ===== 00109a58  FUN_00109a58 =====

undefined1 FUN_00109a58(long param_1)

{
  return *(undefined1 *)(param_1 + 0x269);
}


// ===== 00109a64  FUN_00109a64 =====

undefined8 FUN_00109a64(long *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  return 0;
}


// ===== 00109a90  FUN_00109a90 =====

void FUN_00109a90(long *param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long local_6e0 [4];
  long local_6c0;
  int local_6a8;
  int iStack_6a4;
  undefined4 uStack_6a0;
  long local_690;
  long lStack_688;
  long local_680;
  undefined1 auStack_678 [16];
  long local_668;
  int *local_648;
  undefined1 *puStack_640;
  ulong local_638;
  
  *(undefined1 *)((long)param_1 + 0x26a) = 0;
  lVar3 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  if (lVar3 == 0) {
    *(undefined1 *)(param_1 + 0x4d) = 1;
    return;
  }
  local_648 = (int *)param_1[1];
  puStack_640 = auStack_678;
  uVar7 = lVar3 - (param_2 & 1);
  local_638 = uVar7;
  iVar1 = dl_iterate_phdr(FUN_0010c434,&local_648);
  if (((iVar1 == 0) || (local_668 == 0)) ||
     (uVar4 = FUN_0010c160(param_1,uVar7,auStack_678,0), (uVar4 & 1) == 0)) {
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00115adc);
    for (puVar6 = PTR_DAT_00115a18; puVar6 < PTR_DAT_00115a20; puVar6 = puVar6 + 0x20) {
      if ((*(ulong *)(puVar6 + 8) <= uVar7) && (uVar7 < *(ulong *)(puVar6 + 0x10))) {
        lVar3 = *(long *)(puVar6 + 0x18);
        pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00115adc);
        if ((lVar3 != 0) &&
           (lVar3 = FUN_00109268(param_1[1],lVar3,&local_6a8,local_6e0,0), lVar3 == 0)) {
          memset(&local_648,0,0x618);
          uVar7 = FUN_0010a2c4(param_1[1],&local_6a8,local_6e0,uVar7,4,&local_648);
          if ((uVar7 & 1) != 0) {
            param_1[0x49] = 0;
            param_1[0x46] = local_680;
            param_1[0x47] = local_6c0;
            param_1[0x48] = local_638 & 0xffffffff;
            *(undefined4 *)(param_1 + 0x4a) = 0x3000000;
            param_1[0x45] = lStack_688;
            param_1[0x44] = local_690;
            param_1[0x4c] = 0;
            param_1[0x4b] = CONCAT44(iStack_6a4,local_6a8);
            *(undefined4 *)((long)param_1 + 0x254) = uStack_6a0;
            return;
          }
        }
        goto LAB_00109c18;
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00115adc);
LAB_00109c18:
    lVar3 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
    local_648 = &local_6a8;
    puStack_640 = (undefined1 *)0x8;
    local_6e0[1] = 8;
    local_6e0[0] = lVar3;
    uVar2 = getpid();
    lVar5 = syscall(0x10e,(ulong)uVar2,&local_648,1,local_6e0,1,0);
    if (((lVar5 != 8) || (local_6a8 != -0x2d7fee98)) || (iStack_6a4 != -0x2bffffff)) {
      *(undefined1 *)(param_1 + 0x4d) = 1;
      return;
    }
    param_1[0x4c] = 0;
    param_1[0x45] = lVar3 + 4;
    param_1[0x44] = lVar3;
    *(undefined1 *)((long)param_1 + 0x26a) = 1;
    param_1[0x49] = 0;
    param_1[0x48] = 0;
    param_1[0x4b] = 0;
    param_1[0x4a] = 0;
    param_1[0x47] = 0;
    param_1[0x46] = 0;
  }
  return;
}


// ===== 00109d10  FUN_00109d10 =====

void FUN_00109d10(undefined8 param_1,undefined4 param_2)

{
  FUN_0010cab4(param_2);
  return;
}


// ===== 00109d1c  FUN_00109d1c =====

undefined8 FUN_00109d1c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar1 + 0x138);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar1 + 0x140);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar1 + 0x148);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar1 + 0x150);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar1 + 0x158);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar1 + 0x160);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar1 + 0x168);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar1 + 0x170);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(lVar1 + 0x178);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(lVar1 + 0x180);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar1 + 0x188);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar1 + 400);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar1 + 0x198);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(lVar1 + 0x1a8);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(lVar1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(lVar1 + 0x1b8);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(lVar1 + 0x1c0);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(lVar1 + 0x1c8);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(lVar1 + 0x1d0);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(lVar1 + 0x1d8);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(lVar1 + 0x1e0);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(lVar1 + 0x1e8);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(lVar1 + 0x1f0);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(lVar1 + 0x1f8);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(lVar1 + 0x200);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(lVar1 + 0x208);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(lVar1 + 0x210);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(lVar1 + 0x218);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(lVar1 + 0x220);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(lVar1 + 0x228);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(lVar1 + 0x230);
  uVar2 = *(undefined8 *)(lVar1 + 0x238);
  *(undefined1 *)(param_1 + 0x269) = 1;
  *(undefined8 *)(param_1 + 0x110) = uVar2;
  return 1;
}


// ===== 00109e3c  FUN_00109e3c =====

undefined8
FUN_00109e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4,
            undefined1 *param_5,ulong param_6)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  int *piVar15;
  uint uVar16;
  ulong *puVar17;
  ulong uVar18;
  undefined1 auStack_b20 [288];
  ulong local_a00 [96];
  undefined1 auStack_700 [24];
  int local_6e8 [2];
  long local_6e0 [67];
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined1 auStack_e8 [48];
  undefined1 local_b8;
  byte local_b6;
  char local_b4;
  undefined1 auStack_b0 [48];
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar7 = FUN_00109268(param_1,param_3,auStack_b0,auStack_e8,0);
  if (lVar7 == 0) {
    memset(auStack_700,0,0x618);
    uVar8 = FUN_0010a2c4(param_1,auStack_b0,auStack_e8,param_2,4,auStack_700);
    if ((uVar8 & 1) != 0) {
      uVar8 = FUN_0010af0c(param_1,auStack_700,param_4);
      if (((param_6 & 1) != 0) && (local_b4 != '\0')) {
        for (uVar12 = *(ulong *)((long)param_4 + 0xf8) & 0xfffffffffffffff0; uVar12 < uVar8;
            uVar12 = uVar12 + 0x10) {
        }
      }
      memcpy(local_a00 + 0x1e,param_4,0x210);
      uVar12 = 0;
      uVar14 = 0;
      piVar15 = local_6e8;
      puVar17 = local_a00 + 0x1e;
      local_a00[0x3d] = uVar8;
      do {
        puVar3 = PTR___sF_001116a0;
        iVar2 = *piVar15;
        if (iVar2 == 0) {
          uVar18 = local_a00[0x3d];
          uVar5 = local_a00[0x3b];
          uVar6 = local_a00[0x3c];
          uVar10 = local_a00[0x3f];
          if (uVar12 == local_b6) {
            if (local_b6 < 0x1f) {
              puVar13 = (undefined8 *)((long)param_4 + 0xe8);
              if ((local_b6 != 0x1d) &&
                 (puVar13 = (undefined8 *)((long)param_4 + 0xf0), local_b6 != 0x1e))
              goto LAB_0010a11c;
            }
            else {
              puVar13 = (undefined8 *)((long)param_4 + 0x108);
              if ((local_b6 != 0x22) &&
                 ((puVar13 = (undefined8 *)((long)param_4 + 0x100), local_b6 != 0x20 &&
                  (puVar13 = (undefined8 *)((long)param_4 + 0xf8), local_b6 != 0x1f)))) {
LAB_0010a11c:
                if (0x1c < local_b6) {
                  fprintf((FILE *)(PTR___sF_001116a0 + 0x130),"libunwind: %s - %s\n","getRegister",
                          "unsupported arm64 register");
                  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                puVar13 = (undefined8 *)((long)param_4 + (ulong)local_b6 * 8);
              }
            }
            uVar14 = *puVar13;
          }
        }
        else {
          uVar16 = (uint)uVar12;
          if ((uVar16 & 0x60) == 0x40) {
            if (iVar2 < 5) {
              uVar18 = 0;
              if (iVar2 != 1) {
                if (iVar2 != 2) {
LAB_0010a228:
                  fprintf((FILE *)(PTR___sF_001116a0 + 0x130),"libunwind: %s - %s\n",
                          "getSavedFloatRegister","unsupported restore location for float register")
                  ;
                  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                uVar18 = *(ulong *)(*(long *)(piVar15 + 2) + uVar8);
              }
            }
            else if (iVar2 == 5) {
              uVar18 = *(ulong *)((long)param_4 +
                                 ((*(long *)(piVar15 + 2) << 0x20) + -0x4000000000 >> 0x1d) + 0x110)
              ;
            }
            else {
              if (iVar2 != 6) goto LAB_0010a228;
              puVar9 = (ulong *)FUN_0010b7a4(*(undefined8 *)(piVar15 + 2),param_1,param_4,uVar8);
              uVar18 = *puVar9;
            }
            local_a00[uVar12] = uVar18;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == local_b6) {
            uVar14 = FUN_0010b040(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == 0x22) {
            uVar10 = FUN_0010b040(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
          }
          else {
            if (0xffffffe0 < uVar16 - 0x40) {
              return 0xffffe672;
            }
            uVar11 = FUN_0010b040(param_1,param_4,uVar8,piVar15);
            puVar3 = PTR___sF_001116a0;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
            if ((int)uVar16 < 0x1f) {
              uVar5 = uVar11;
              if ((uVar16 != 0x1d) && (uVar5 = local_a00[0x3b], uVar6 = uVar11, uVar16 != 0x1e))
              goto LAB_0010a170;
            }
            else {
              uVar18 = uVar11;
              if ((uVar16 != 0x1f) &&
                 ((uVar18 = local_a00[0x3d], uVar10 = uVar11, uVar16 != 0x22 &&
                  (uVar10 = local_a00[0x3f], uVar16 != 0x20)))) {
LAB_0010a170:
                if (0x1c < uVar12) {
                  fprintf((FILE *)(PTR___sF_001116a0 + 0x130),"libunwind: %s - %s\n","setRegister",
                          "unsupported arm64 register");
                  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                *puVar17 = uVar11;
                uVar18 = local_a00[0x3d];
                uVar5 = local_a00[0x3b];
                uVar6 = local_a00[0x3c];
                uVar10 = local_a00[0x3f];
              }
            }
          }
        }
        local_a00[0x3f] = uVar10;
        local_a00[0x3c] = uVar6;
        local_a00[0x3b] = uVar5;
        local_a00[0x3d] = uVar18;
        uVar12 = uVar12 + 1;
        piVar15 = piVar15 + 4;
        puVar17 = puVar17 + 1;
        if (uVar12 == 0x60) {
          *param_5 = local_b8;
          memcpy(auStack_b20,param_4,0x210);
          uStack_78 = uStack_4c0;
          local_80 = local_4c8;
          uVar4 = local_80;
          local_80._0_4_ = (int)local_4c8;
          bVar1 = (int)local_80 != 0;
          if (bVar1) {
            local_80 = uVar4;
            FUN_0010b040(param_1,auStack_b20,uVar8,&local_80);
          }
          local_a00[0x3e] = uVar14;
          memcpy(param_4,local_a00 + 0x1e,0x210);
          return 1;
        }
      } while( true );
    }
  }
  return 0xffffe66e;
}


// ===== 0010a2c4  FUN_0010a2c4 =====

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_0010a2c4(undefined8 param_1,long *param_2,long *param_3,long param_4,int param_5,
            undefined4 *param_6)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  long lVar8;
  char *__ptr;
  size_t __size;
  FILE *__s;
  uint uVar9;
  byte *pbVar10;
  ulong uVar11;
  undefined4 *puVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  byte *pbVar21;
  undefined1 auStack_6e0 [4];
  int local_6dc;
  byte **local_6d8;
  undefined8 *puStack_6d0;
  undefined8 local_6c8;
  undefined8 *local_6c0;
  byte *apbStack_6a0 [193];
  ulong local_98 [7];
  
  puVar6 = (undefined8 *)auStack_6e0;
  lVar20 = 0;
  local_98[0] = param_3[2];
  local_98[1] = param_3[1] + *param_3;
  local_98[2] = 0xffffffffffffffff;
  local_98[3] = param_2[2];
  local_6c8 = param_1;
  local_6c0 = (undefined8 *)0x0;
  local_98[4] = param_2[1] + *param_2;
  local_98[5] = param_4 - param_2[3];
  local_6d8 = apbStack_6a0 + 0x44;
  puStack_6d0 = (undefined8 *)(param_6 + 0x8e);
  while( true ) {
    pbVar21 = *(byte **)((long)local_98 + lVar20);
    pbVar2 = *(byte **)((long)local_98 + lVar20 + 8);
    uVar16 = *(ulong *)((long)local_98 + lVar20 + 0x10);
    apbStack_6a0[0xc0] = pbVar21;
    if (pbVar21 < pbVar2 && uVar16 != 0) break;
LAB_0010a348:
    lVar20 = lVar20 + 0x18;
    if (lVar20 == 0x30) {
      return 1;
    }
  }
  uVar17 = 0;
LAB_0010a378:
  puVar18 = local_6c0;
  puVar5 = PTR___sF_001116a0;
  pbVar10 = pbVar21 + 1;
  bVar3 = *pbVar21;
  apbStack_6a0[0xc0] = pbVar10;
  switch((ulong)bVar3) {
  case 0:
    goto code_r0x0010ac4c;
  case 1:
    uVar17 = FUN_0010b250(local_6c8,apbStack_6a0 + 0xc0,pbVar2,(char)param_3[3],0);
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 2:
    uVar9 = (uint)pbVar21[1];
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 2;
    goto LAB_0010a800;
  case 3:
    uVar9 = (uint)*(ushort *)(pbVar21 + 1);
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 3;
    goto LAB_0010a800;
  case 4:
    uVar9 = *(uint *)(pbVar21 + 1);
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 5;
LAB_0010a800:
    uVar17 = uVar17 + iVar13 * uVar9;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 5:
    uVar19 = FUN_0010b5dc(apbStack_6a0 + 0xc0,pbVar2);
    lVar8 = FUN_0010b5dc(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended DWARF unwind, reg too big\n";
      __size = 0x46;
      __s = (FILE *)(PTR___sF_001116a0 + 0x130);
      goto LAB_0010adfc;
    }
    puVar12 = param_6 + uVar19 * 4;
    iVar13 = *(int *)((long)param_3 + 0x2c);
    if (*(char *)(puVar12 + 7) == '\0') {
      pbVar10 = *(byte **)(param_6 + uVar19 * 4 + 8);
      pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
      *(char *)(puVar12 + 7) = '\x01';
      apbStack_6a0[uVar19 * 2 + 1] = pbVar10;
      apbStack_6a0[uVar19 * 2] = pbVar21;
    }
    lVar8 = lVar8 * iVar13;
LAB_0010a79c:
    puVar12[6] = 2;
    *(long *)(puVar12 + 8) = lVar8;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 6:
    uVar19 = FUN_0010b5dc(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_restore_extended DWARF unwind, reg too big\n";
LAB_0010acec:
      __s = (FILE *)(PTR___sF_001116a0 + 0x130);
      __size = 0x47;
      goto LAB_0010adfc;
    }
    cVar4 = *(char *)(param_6 + uVar19 * 4 + 7);
joined_r0x0010ac2c:
    if (cVar4 != '\0') {
      pbVar21 = apbStack_6a0[uVar19 * 2];
      *(byte **)(param_6 + uVar19 * 4 + 8) = apbStack_6a0[uVar19 * 2 + 1];
      *(byte **)(param_6 + uVar19 * 4 + 6) = pbVar21;
    }
    goto code_r0x0010ac4c;
  case 7:
    uVar19 = FUN_0010b5dc(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_undefined DWARF unwind, reg too big\n";
LAB_0010adf0:
      __s = (FILE *)(PTR___sF_001116a0 + 0x130);
      __size = 0x40;
      goto LAB_0010adfc;
    }
    if (*(char *)(param_6 + uVar19 * 4 + 7) == '\0') {
      pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
      *(char *)(param_6 + uVar19 * 4 + 7) = '\x01';
      apbStack_6a0[uVar19 * 2 + 1] = *(byte **)(param_6 + uVar19 * 4 + 8);
      apbStack_6a0[uVar19 * 2] = pbVar21;
    }
    param_6[uVar19 * 4 + 6] = 1;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 8:
    uVar19 = FUN_0010b5dc(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_same_value DWARF unwind, reg too big\n";
LAB_0010add4:
      __s = (FILE *)(PTR___sF_001116a0 + 0x130);
      __size = 0x41;
      goto LAB_0010adfc;
    }
    if (*(char *)(param_6 + uVar19 * 4 + 7) == '\0') {
      pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
      *(char *)(param_6 + uVar19 * 4 + 7) = '\x01';
      apbStack_6a0[uVar19 * 2 + 1] = *(byte **)(param_6 + uVar19 * 4 + 8);
      apbStack_6a0[uVar19 * 2] = pbVar21;
    }
    param_6[uVar19 * 4 + 6] = 0;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 9:
    uVar19 = FUN_0010b5dc(apbStack_6a0 + 0xc0,pbVar2);
    uVar14 = FUN_0010b5dc(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg too big\n";
      __size = 0x3f;
      __s = (FILE *)(PTR___sF_001116a0 + 0x130);
      goto LAB_0010adfc;
    }
    if (0x5f < uVar14) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg2 too big\n";
      goto LAB_0010adf0;
    }
    if (*(char *)(param_6 + uVar19 * 4 + 7) == '\0') {
      pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
      *(char *)(param_6 + uVar19 * 4 + 7) = '\x01';
      apbStack_6a0[uVar19 * 2 + 1] = *(byte **)(param_6 + uVar19 * 4 + 8);
      apbStack_6a0[uVar19 * 2] = pbVar21;
    }
    *(ulong *)(param_6 + uVar19 * 4 + 8) = uVar14;
    param_6[uVar19 * 4 + 6] = 5;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 10:
    puVar18 = (undefined8 *)((long)puVar6 + 0xfffffffffffff9e0);
    *puVar18 = local_6c0;
    memcpy((undefined1 *)((long)puVar6 + 0xfffffffffffff9e8),param_6,0x618);
    local_6c0 = puVar18;
    puVar6 = puVar18;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xb:
    if (local_6c0 == (undefined8 *)0x0) {
      return 0;
    }
    memcpy(param_6,local_6c0 + 1,0x618);
    local_6c0 = (undefined8 *)*puVar18;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xc:
    uVar19 = FUN_0010b5dc(apbStack_6a0 + 0xc0,pbVar2);
    uVar7 = FUN_0010b5dc(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa DWARF unwind, reg too big\n";
      __size = 0x3e;
      __s = (FILE *)(PTR___sF_001116a0 + 0x130);
      goto LAB_0010adfc;
    }
    *param_6 = (int)uVar19;
    param_6[1] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xd:
    uVar19 = FUN_0010b5dc(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa_register DWARF unwind, reg too big\n";
      goto LAB_0010acec;
    }
    *param_6 = (int)uVar19;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xe:
    uVar7 = FUN_0010b5dc(apbStack_6a0 + 0xc0,pbVar2);
    param_6[1] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xf:
    *param_6 = 0;
    *(byte **)(param_6 + 2) = pbVar10;
    goto LAB_0010ab80;
  case 0x10:
    uVar19 = FUN_0010b5dc(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_expression DWARF unwind, reg too big\n";
      goto LAB_0010add4;
    }
    puVar12 = param_6 + uVar19 * 4;
    if (*(char *)(puVar12 + 7) == '\0') {
      pbVar10 = *(byte **)(param_6 + uVar19 * 4 + 8);
      pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
      *(char *)(puVar12 + 7) = '\x01';
      apbStack_6a0[uVar19 * 2 + 1] = pbVar10;
      apbStack_6a0[uVar19 * 2] = pbVar21;
    }
    uVar7 = 6;
LAB_0010ab78:
    puVar12[6] = uVar7;
    *(byte **)(puVar12 + 8) = apbStack_6a0[0xc0];
LAB_0010ab80:
    lVar8 = FUN_0010b5dc(apbStack_6a0 + 0xc0,pbVar2);
    apbStack_6a0[0xc0] = apbStack_6a0[0xc0] + lVar8;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x11:
    uVar19 = FUN_0010b5dc(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_001116a0;
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended_sf DWARF unwind, reg too big\n";
      __size = 0x49;
      __s = (FILE *)(PTR___sF_001116a0 + 0x130);
      goto LAB_0010adfc;
    }
    uVar14 = 0;
    uVar11 = 0;
    pbVar21 = apbStack_6a0[0xc0];
    pbVar10 = apbStack_6a0[0xc0];
    do {
      if (pbVar10 == pbVar2) {
        fprintf((FILE *)(PTR___sF_001116a0 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                "truncated sleb128 expression");
        fflush((FILE *)(puVar5 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      bVar3 = *pbVar10;
      pbVar21 = pbVar21 + 1;
      uVar15 = uVar14 & 0x3f;
      uVar14 = uVar14 + 7;
      uVar11 = ((ulong)bVar3 & 0x7f) << uVar15 | uVar11;
      pbVar10 = pbVar10 + 1;
    } while ((char)bVar3 < '\0');
    puVar12 = param_6 + uVar19 * 4;
    uVar15 = -1L << (uVar14 & 0x3f);
    iVar13 = *(int *)((long)param_3 + 0x2c);
    if (0x38 < (int)uVar14 - 7U || bVar3 < 0x40) {
      uVar15 = 0;
    }
    apbStack_6a0[0xc0] = pbVar21;
    if (*(char *)(puVar12 + 7) == '\0') {
      pbVar10 = *(byte **)(param_6 + uVar19 * 4 + 8);
      pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
      *(char *)(puVar12 + 7) = '\x01';
      apbStack_6a0[uVar19 * 2 + 1] = pbVar10;
      apbStack_6a0[uVar19 * 2] = pbVar21;
    }
    uVar11 = uVar11 | uVar15;
    uVar7 = 2;
LAB_0010ab0c:
    puVar12[6] = uVar7;
    *(ulong *)(puVar12 + 8) = uVar11 * (long)iVar13;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x12:
    uVar14 = FUN_0010b5dc(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_001116a0;
    uVar19 = 0;
    uVar11 = 0;
    pbVar21 = apbStack_6a0[0xc0];
    pbVar10 = apbStack_6a0[0xc0];
    do {
      if (pbVar10 == pbVar2) {
        fprintf((FILE *)(PTR___sF_001116a0 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                "truncated sleb128 expression");
        fflush((FILE *)(puVar5 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      bVar3 = *pbVar10;
      pbVar21 = pbVar21 + 1;
      uVar15 = uVar19 & 0x3f;
      uVar19 = uVar19 + 7;
      uVar11 = ((ulong)bVar3 & 0x7f) << uVar15 | uVar11;
      pbVar10 = pbVar10 + 1;
    } while ((char)bVar3 < '\0');
    apbStack_6a0[0xc0] = pbVar21;
    if (0x5f < uVar14) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa_sf DWARF unwind, reg too big\n";
      goto LAB_0010add4;
    }
    iVar13 = *(int *)((long)param_3 + 0x2c);
    uVar9 = (uint)(-1L << (uVar19 & 0x3f));
    if (0x38 < (int)uVar19 - 7U || bVar3 < 0x40) {
      uVar9 = 0;
    }
    *param_6 = (int)uVar14;
    param_6[1] = iVar13 * ((uint)uVar11 | uVar9);
    break;
  case 0x13:
    uVar19 = 0;
    uVar14 = 0;
    pbVar21 = pbVar10;
    do {
      if (pbVar21 == pbVar2) {
        fprintf((FILE *)(PTR___sF_001116a0 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                "truncated sleb128 expression");
        fflush((FILE *)(puVar5 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      bVar3 = *pbVar21;
      pbVar10 = pbVar10 + 1;
      uVar11 = uVar19 & 0x3f;
      uVar19 = uVar19 + 7;
      uVar14 = ((ulong)bVar3 & 0x7f) << uVar11 | uVar14;
      pbVar21 = pbVar21 + 1;
    } while ((char)bVar3 < '\0');
    apbStack_6a0[0xc0] = pbVar10;
    uVar9 = (uint)(-1L << (uVar19 & 0x3f));
    if (0x38 < (int)uVar19 - 7U || bVar3 < 0x40) {
      uVar9 = 0;
    }
    param_6[1] = *(int *)((long)param_3 + 0x2c) * ((uint)uVar14 | uVar9);
    pbVar21 = pbVar10;
    break;
  case 0x14:
    uVar19 = FUN_0010b5dc(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      fprintf((FILE *)(PTR___sF_001116a0 + 0x130),
              "libunwind: malformed DW_CFA_val_offset DWARF unwind, reg (%lu) out of range\n\n",
              uVar19);
      goto LAB_0010ae04;
    }
    lVar8 = FUN_0010b5dc(apbStack_6a0 + 0xc0,pbVar2);
    iVar13 = *(int *)((long)param_3 + 0x2c);
    if (*(char *)(param_6 + uVar19 * 4 + 7) == '\0') {
      pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
      *(char *)(param_6 + uVar19 * 4 + 7) = '\x01';
      apbStack_6a0[uVar19 * 2 + 1] = *(byte **)(param_6 + uVar19 * 4 + 8);
      apbStack_6a0[uVar19 * 2] = pbVar21;
    }
    param_6[uVar19 * 4 + 6] = 4;
    *(long *)(param_6 + uVar19 * 4 + 8) = lVar8 * iVar13;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x15:
    uVar19 = FUN_0010b5dc(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_001116a0;
    if (uVar19 < 0x60) {
      uVar14 = 0;
      uVar11 = 0;
      pbVar21 = apbStack_6a0[0xc0];
      pbVar10 = apbStack_6a0[0xc0];
      do {
        if (pbVar10 == pbVar2) {
          fprintf((FILE *)(PTR___sF_001116a0 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                  "truncated sleb128 expression");
          fflush((FILE *)(puVar5 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
        bVar3 = *pbVar10;
        pbVar21 = pbVar21 + 1;
        uVar15 = uVar14 & 0x3f;
        uVar14 = uVar14 + 7;
        uVar11 = ((ulong)bVar3 & 0x7f) << uVar15 | uVar11;
        pbVar10 = pbVar10 + 1;
      } while ((char)bVar3 < '\0');
      puVar12 = param_6 + uVar19 * 4;
      uVar15 = -1L << (uVar14 & 0x3f);
      iVar13 = *(int *)((long)param_3 + 0x2c);
      if (0x38 < (int)uVar14 - 7U || bVar3 < 0x40) {
        uVar15 = 0;
      }
      apbStack_6a0[0xc0] = pbVar21;
      if (*(char *)(puVar12 + 7) == '\0') {
        pbVar10 = *(byte **)(param_6 + uVar19 * 4 + 8);
        pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
        *(char *)(puVar12 + 7) = '\x01';
        apbStack_6a0[uVar19 * 2 + 1] = pbVar10;
        apbStack_6a0[uVar19 * 2] = pbVar21;
      }
      uVar11 = uVar11 | uVar15;
      uVar7 = 4;
      goto LAB_0010ab0c;
    }
    __ptr = "libunwind: malformed DW_CFA_val_offset_sf DWARF unwind, reg too big\n";
    __size = 0x44;
    __s = (FILE *)(PTR___sF_001116a0 + 0x130);
    goto LAB_0010adfc;
  case 0x16:
    uVar19 = FUN_0010b5dc(apbStack_6a0 + 0xc0,pbVar2);
    if (uVar19 < 0x60) {
      puVar12 = param_6 + uVar19 * 4;
      if (*(char *)(puVar12 + 7) == '\0') {
        pbVar10 = *(byte **)(param_6 + uVar19 * 4 + 8);
        pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
        *(char *)(puVar12 + 7) = '\x01';
        apbStack_6a0[uVar19 * 2 + 1] = pbVar10;
        apbStack_6a0[uVar19 * 2] = pbVar21;
      }
      uVar7 = 7;
      goto LAB_0010ab78;
    }
    __ptr = "libunwind: malformed DW_CFA_val_expression DWARF unwind, reg too big\n";
    __size = 0x45;
    __s = (FILE *)(PTR___sF_001116a0 + 0x130);
    goto LAB_0010adfc;
  default:
    bVar1 = bVar3 & 0xc0;
    uVar19 = (ulong)bVar3 & 0x3f;
    if (bVar1 == 0x40) {
      uVar17 = uVar17 + (uint)((int)param_3[5] * (int)uVar19);
      pbVar21 = pbVar10;
    }
    else {
      if (bVar1 == 0xc0) {
        cVar4 = *(char *)(param_6 + uVar19 * 4 + 7);
        goto joined_r0x0010ac2c;
      }
      if (bVar1 != 0x80) {
        return 0;
      }
      local_6dc = param_5;
      lVar8 = FUN_0010b5dc(apbStack_6a0 + 0xc0,pbVar2);
      iVar13 = *(int *)((long)param_3 + 0x2c);
      if (*(char *)(param_6 + uVar19 * 4 + 7) == '\0') {
        pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
        apbStack_6a0[uVar19 * 2 + 1] = *(byte **)(param_6 + uVar19 * 4 + 8);
        apbStack_6a0[uVar19 * 2] = pbVar21;
        *(char *)(param_6 + uVar19 * 4 + 7) = '\x01';
      }
      param_6[uVar19 * 4 + 6] = 2;
      *(long *)(param_6 + uVar19 * 4 + 8) = lVar8 * iVar13;
      param_5 = local_6dc;
      pbVar21 = apbStack_6a0[0xc0];
    }
    break;
  case 0x2d:
    if (param_5 != 4) goto code_r0x0010ac4c;
    if (*(char *)(param_6 + 0x8f) == '\0') {
      pbVar10 = (byte *)puStack_6d0[1];
      pbVar21 = (byte *)*puStack_6d0;
      *(undefined1 *)(param_6 + 0x8f) = 1;
      local_6d8[1] = pbVar10;
      *local_6d8 = pbVar21;
    }
    *(ulong *)(param_6 + 0x90) = *(ulong *)(param_6 + 0x90) ^ 1;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x2e:
    uVar7 = FUN_0010b5dc(apbStack_6a0 + 0xc0,pbVar2);
    param_6[4] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x2f:
    uVar19 = FUN_0010b5dc(apbStack_6a0 + 0xc0,pbVar2);
    if (uVar19 < 0x60) {
      lVar8 = FUN_0010b5dc(apbStack_6a0 + 0xc0,pbVar2);
      puVar12 = param_6 + uVar19 * 4;
      iVar13 = *(int *)((long)param_3 + 0x2c);
      if (*(char *)(puVar12 + 7) == '\0') {
        pbVar10 = *(byte **)(param_6 + uVar19 * 4 + 8);
        pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
        *(char *)(puVar12 + 7) = '\x01';
        apbStack_6a0[uVar19 * 2 + 1] = pbVar10;
        apbStack_6a0[uVar19 * 2] = pbVar21;
      }
      lVar8 = -(lVar8 * iVar13);
      goto LAB_0010a79c;
    }
    __ptr = "libunwind: malformed DW_CFA_GNU_negative_offset_extended DWARF unwind, reg too big\n";
    __size = 0x53;
    __s = (FILE *)(PTR___sF_001116a0 + 0x130);
LAB_0010adfc:
    fwrite(__ptr,__size,1,__s);
LAB_0010ae04:
    fflush((FILE *)(PTR___sF_001116a0 + 0x130));
    return 0;
  }
joined_r0x0010a734:
  if ((pbVar2 <= pbVar21) || (uVar16 <= uVar17)) goto LAB_0010a348;
  goto LAB_0010a378;
code_r0x0010ac4c:
  pbVar21 = apbStack_6a0[0xc0];
  goto joined_r0x0010a734;
}


// ===== 0010af0c  FUN_0010af0c =====

long FUN_0010af0c(undefined8 param_1,uint *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR___sF_001116a0;
  uVar1 = *param_2;
  if ((int)uVar1 < 0x1e) {
    if ((int)uVar1 < 0) {
      if (uVar1 == 0xfffffffe) {
LAB_0010af4c:
        return *(long *)(param_3 + 0xf8) + (long)(int)param_2[1];
      }
      if (uVar1 == 0xffffffff) goto LAB_0010af90;
    }
    else {
      if (uVar1 == 0) {
        lVar3 = FUN_0010b7a4(*(undefined8 *)(param_2 + 2),param_1,param_3,0);
        return lVar3;
      }
      if (uVar1 == 0x1d) {
        return *(long *)(param_3 + 0xe8) + (long)(int)param_2[1];
      }
    }
  }
  else if ((int)uVar1 < 0x20) {
    if (uVar1 == 0x1e) {
      return *(long *)(param_3 + 0xf0) + (long)(int)param_2[1];
    }
    if (uVar1 == 0x1f) goto LAB_0010af4c;
  }
  else {
    if (uVar1 == 0x22) {
      return *(long *)(param_3 + 0x108) + (long)(int)param_2[1];
    }
    if (uVar1 == 0x20) {
LAB_0010af90:
      return *(long *)(param_3 + 0x100) + (long)(int)param_2[1];
    }
  }
  if (0x1c < uVar1) {
    fprintf((FILE *)(PTR___sF_001116a0 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(long *)(param_3 + (ulong)uVar1 * 8) + (long)(int)param_2[1];
}


// ===== 0010b040  FUN_0010b040 =====

undefined8 FUN_0010b040(undefined8 param_1,long param_2,long param_3,int *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  puVar2 = PTR___sF_001116a0;
  iVar1 = *param_4;
  if (iVar1 < 5) {
    if (iVar1 == 1) {
      return 0;
    }
    if ((iVar1 == 2) || (iVar1 == 3)) {
      return *(undefined8 *)(*(long *)(param_4 + 2) + param_3);
    }
  }
  else {
    if (iVar1 == 5) {
      uVar5 = (uint)*(ulong *)(param_4 + 2);
      if ((int)uVar5 < 0x1e) {
        if (uVar5 == 0xfffffffe) {
LAB_0010b17c:
          return *(undefined8 *)(param_2 + 0xf8);
        }
        if (uVar5 == 0xffffffff) goto LAB_0010b164;
        if (uVar5 == 0x1d) {
          return *(undefined8 *)(param_2 + 0xe8);
        }
      }
      else if ((int)uVar5 < 0x20) {
        if (uVar5 == 0x1e) {
          return *(undefined8 *)(param_2 + 0xf0);
        }
        if (uVar5 == 0x1f) goto LAB_0010b17c;
      }
      else {
        if (uVar5 == 0x22) {
          return *(undefined8 *)(param_2 + 0x108);
        }
        if (uVar5 == 0x20) {
LAB_0010b164:
          return *(undefined8 *)(param_2 + 0x100);
        }
      }
      if (0x1c < uVar5) {
        fprintf((FILE *)(PTR___sF_001116a0 + 0x130),"libunwind: %s - %s\n","getRegister",
                "unsupported arm64 register");
        fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      return *(undefined8 *)(param_2 + (*(ulong *)(param_4 + 2) & 0xffffffff) * 8);
    }
    if (iVar1 == 6) {
      puVar4 = (undefined8 *)FUN_0010b7a4(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return *puVar4;
    }
    if (iVar1 == 7) {
      uVar3 = FUN_0010b7a4(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return uVar3;
    }
  }
  fprintf((FILE *)(PTR___sF_001116a0 + 0x130),"libunwind: %s - %s\n","getSavedRegister",
          "unsupported restore location for register");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0010b250  FUN_0010b250 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_0010b250(undefined8 param_1,long *param_2,ulong *param_3,uint param_4,long param_5)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  
  puVar3 = PTR___sF_001116a0;
  uVar1 = param_4 & 0xf;
  puVar10 = (ulong *)*param_2;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      if ((param_4 & 0xf) == 0) goto LAB_0010b39c;
      if (uVar1 != 1) {
LAB_0010b5a8:
        fprintf((FILE *)(PTR___sF_001116a0 + 0x130),"libunwind: %s - %s\n","getEncodedP",
                "unknown pointer encoding");
        fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar4 = (undefined8 *)FUN_0010b5dc(param_2,param_3);
      puVar3 = PTR___sF_001116a0;
    }
    else if (uVar1 == 2) {
      puVar4 = (undefined8 *)(ulong)(ushort)*puVar10;
      *param_2 = (long)puVar10 + 2;
      puVar3 = PTR___sF_001116a0;
    }
    else {
      if (uVar1 != 3) goto LAB_0010b5a8;
      puVar4 = (undefined8 *)(ulong)(uint)*puVar10;
      *param_2 = (long)((long)puVar10 + 4);
      puVar3 = PTR___sF_001116a0;
    }
  }
  else if (uVar1 < 10) {
    if (uVar1 == 4) {
LAB_0010b39c:
      puVar4 = (undefined8 *)*puVar10;
      *param_2 = (long)(puVar10 + 1);
      puVar3 = PTR___sF_001116a0;
    }
    else {
      if (uVar1 != 9) goto LAB_0010b5a8;
      uVar7 = 0;
      uVar5 = 0;
      puVar6 = puVar10;
      puVar9 = puVar10;
      do {
        if (puVar9 == param_3) {
          fprintf((FILE *)(PTR___sF_001116a0 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                  "truncated sleb128 expression");
          fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
        bVar2 = (byte)*puVar9;
        puVar6 = (ulong *)((long)puVar6 + 1);
        uVar8 = uVar7 & 0x3f;
        uVar7 = uVar7 + 7;
        uVar5 = ((ulong)bVar2 & 0x7f) << uVar8 | uVar5;
        puVar9 = (ulong *)((long)puVar9 + 1);
      } while ((char)bVar2 < '\0');
      *param_2 = (long)puVar6;
      uVar8 = -1L << (uVar7 & 0x3f);
      if (0x38 < (int)uVar7 - 7U || bVar2 < 0x40) {
        uVar8 = 0;
      }
      puVar4 = (undefined8 *)(uVar5 | uVar8);
      puVar3 = PTR___sF_001116a0;
    }
  }
  else if (uVar1 == 10) {
    puVar4 = (undefined8 *)(long)(short)*puVar10;
    *param_2 = (long)puVar10 + 2;
    puVar3 = PTR___sF_001116a0;
  }
  else {
    if (uVar1 != 0xb) {
      if (uVar1 != 0xc) goto LAB_0010b5a8;
      goto LAB_0010b39c;
    }
    puVar4 = (undefined8 *)(long)(int)(uint)*puVar10;
    *param_2 = (long)((long)puVar10 + 4);
    puVar3 = PTR___sF_001116a0;
  }
  uVar1 = (param_4 & 0xff) >> 4 & 7;
  PTR___sF_001116a0 = puVar3;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
      if (uVar1 != 1) goto LAB_0010b574;
      puVar4 = (undefined8 *)((long)puVar4 + (long)puVar10);
    }
LAB_0010b428:
    if ((param_4 >> 7 & 1) != 0) {
      return (undefined8 *)*puVar4;
    }
    return puVar4;
  }
  if (uVar1 < 4) {
    if (uVar1 == 3) {
      if (param_5 == 0) {
        fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP",
                "DW_EH_PE_datarel is invalid with a datarelBase of 0");
        fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar4 = (undefined8 *)((long)puVar4 + param_5);
      goto LAB_0010b428;
    }
    if (uVar1 == 2) {
      fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP",
              "DW_EH_PE_textrel pointer encoding not supported");
      fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    if (uVar1 == 4) {
      fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP",
              "DW_EH_PE_funcrel pointer encoding not supported");
      fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (uVar1 == 5) {
      fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP",
              "DW_EH_PE_aligned pointer encoding not supported");
      fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
LAB_0010b574:
  fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP","unknown pointer encoding");
  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0010b5dc  FUN_0010b5dc =====

ulong FUN_0010b5dc(long *param_1,byte *param_2)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  puVar2 = PTR___sF_001116a0;
  pbVar4 = (byte *)*param_1;
  if (pbVar4 != param_2) {
    pbVar5 = pbVar4 + 1;
    uVar3 = (ulong)*pbVar4 & 0x7f;
    if (-1 < (char)*pbVar4) {
LAB_0010b60c:
      *param_1 = (long)pbVar5;
      return uVar3;
    }
    if (pbVar5 != param_2) {
      uVar3 = uVar3 | (ulong)((int)(char)pbVar4[1] & 0x7f) << 7;
      pbVar5 = pbVar4 + 2;
      if (-1 < (char)pbVar4[1]) goto LAB_0010b60c;
      if (pbVar5 != param_2) {
        uVar3 = uVar3 | (ulong)((int)(char)pbVar4[2] & 0x7f) << 0xe;
        pbVar5 = pbVar4 + 3;
        if (-1 < (char)pbVar4[2]) goto LAB_0010b60c;
        if (pbVar5 != param_2) {
          uVar3 = uVar3 | (ulong)((int)(char)pbVar4[3] & 0x7f) << 0x15;
          pbVar5 = pbVar4 + 4;
          if (-1 < (char)pbVar4[3]) goto LAB_0010b60c;
          if (pbVar5 != param_2) {
            uVar3 = uVar3 | (ulong)((int)(char)pbVar4[4] & 0x7f) << 0x1c;
            pbVar5 = pbVar4 + 5;
            if (-1 < (char)pbVar4[4]) goto LAB_0010b60c;
            if (pbVar5 != param_2) {
              uVar3 = uVar3 | (ulong)((int)(char)pbVar4[5] & 0x7f) << 0x23;
              pbVar5 = pbVar4 + 6;
              if (-1 < (char)pbVar4[5]) goto LAB_0010b60c;
              if (pbVar5 != param_2) {
                uVar3 = uVar3 | (ulong)((int)(char)pbVar4[6] & 0x7f) << 0x2a;
                pbVar5 = pbVar4 + 7;
                if (-1 < (char)pbVar4[6]) goto LAB_0010b60c;
                if (pbVar5 != param_2) {
                  uVar3 = uVar3 | (ulong)((int)(char)pbVar4[7] & 0x7f) << 0x31;
                  pbVar5 = pbVar4 + 8;
                  if (-1 < (char)pbVar4[7]) goto LAB_0010b60c;
                  if (pbVar5 != param_2) {
                    uVar3 = uVar3 | (ulong)((int)(char)pbVar4[8] & 0x7f) << 0x38;
                    pbVar5 = pbVar4 + 9;
                    if (-1 < (char)pbVar4[8]) goto LAB_0010b60c;
                    if (pbVar5 != param_2) {
                      bVar1 = *pbVar5;
                      if ((bVar1 & 0x7e) == 0) {
                        if (-1 < (char)bVar1) {
                          *param_1 = (long)(pbVar4 + 10);
                          return uVar3 | (ulong)bVar1 << 0x3f;
                        }
                        if (pbVar4 + 10 == param_2) goto LAB_0010b73c;
                      }
                      fprintf((FILE *)(PTR___sF_001116a0 + 0x130),"libunwind: %s - %s\n",
                              "getULEB128","malformed uleb128 expression");
                      fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
                      abort();
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0010b73c:
  fprintf((FILE *)(PTR___sF_001116a0 + 0x130),"libunwind: %s - %s\n","getULEB128",
          "truncated uleb128 expression");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0010b7a4  FUN_0010b7a4 =====

ulong FUN_0010b7a4(byte *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  byte *pbVar6;
  byte bVar7;
  byte bVar8;
  undefined *puVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong *puVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  byte *pbVar18;
  ulong *puVar19;
  undefined1 auVar20 [16];
  ulong auStack_380 [99];
  byte *local_68;
  
  local_68 = param_1;
  lVar11 = FUN_0010b5dc(&local_68,param_1 + 0x14);
  auStack_380[0] = param_4;
  pbVar6 = local_68 + lVar11;
  if (local_68 < pbVar6) {
    puVar1 = (ulong *)(param_3 + 0xf0);
    puVar2 = (ulong *)(param_3 + 0xe8);
    puVar3 = (ulong *)(param_3 + 0x108);
    puVar4 = (ulong *)(param_3 + 0xf8);
    puVar19 = auStack_380;
    puVar5 = (ulong *)(param_3 + 0x100);
    pbVar18 = local_68;
    do {
      puVar9 = PTR___sF_001116a0;
      pbVar13 = pbVar18 + 1;
      local_68 = pbVar13;
      bVar8 = *pbVar18;
      uVar10 = (uint)bVar8;
      if (0x91 < uVar10 - 3) {
code_r0x0010c020:
        fprintf((FILE *)(PTR___sF_001116a0 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
                "DWARF opcode not implemented");
        fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar15 = (uint)bVar8;
      puVar14 = puVar4;
      switch(uVar10) {
      case 3:
      case 0xe:
      case 0xf:
        uVar16 = *(ulong *)(pbVar18 + 1);
        local_68 = pbVar18 + 9;
        goto LAB_0010bc8c;
      case 4:
      case 5:
      case 7:
        goto code_r0x0010c020;
      case 6:
        puVar14 = (ulong *)*puVar19;
LAB_0010bc1c:
        *puVar19 = *puVar14;
        goto LAB_0010b828;
      case 8:
        uVar16 = (ulong)pbVar18[1];
        goto LAB_0010bbf0;
      case 9:
        uVar16 = (ulong)(char)pbVar18[1];
LAB_0010bbf0:
        local_68 = pbVar18 + 2;
        goto LAB_0010bc8c;
      case 10:
        uVar16 = (ulong)*(ushort *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_0010bc8c;
      case 0xb:
        uVar16 = (ulong)*(short *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_0010bc8c;
      case 0xc:
        uVar16 = (ulong)*(uint *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_0010bc8c;
      case 0xd:
        uVar16 = (ulong)*(int *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_0010bc8c;
      case 0x10:
        uVar16 = FUN_0010b5dc(&local_68,pbVar6);
        puVar19 = puVar19 + 1;
        *puVar19 = uVar16;
        goto LAB_0010b828;
      case 0x11:
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = pbVar13;
        do {
          if (pbVar18 == pbVar6) {
            fprintf((FILE *)(PTR___sF_001116a0 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                    "truncated sleb128 expression");
            fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar8 = *pbVar18;
          pbVar13 = pbVar13 + 1;
          uVar17 = uVar16 & 0x3f;
          uVar16 = uVar16 + 7;
          uVar12 = ((ulong)bVar8 & 0x7f) << uVar17 | uVar12;
          pbVar18 = pbVar18 + 1;
        } while ((char)bVar8 < '\0');
        local_68 = pbVar13;
        uVar17 = -1L << (uVar16 & 0x3f);
        if (0x38 < (int)uVar16 - 7U || bVar8 < 0x40) {
          uVar17 = 0;
        }
        puVar19 = puVar19 + 1;
        *puVar19 = uVar12 | uVar17;
        goto LAB_0010b828;
      case 0x12:
        uVar16 = *puVar19;
        goto LAB_0010b824;
      case 0x13:
        puVar19 = puVar19 + -1;
        goto LAB_0010b828;
      case 0x14:
        uVar16 = puVar19[-1];
        goto LAB_0010b824;
      case 0x15:
        local_68 = pbVar18 + 2;
        uVar16 = puVar19[-(ulong)pbVar18[1]];
LAB_0010bc8c:
LAB_0010b824:
        puVar19[1] = uVar16;
        puVar19 = puVar19 + 1;
        goto LAB_0010b828;
      case 0x16:
        auVar20 = NEON_ext(*(undefined1 (*) [16])(puVar19 + -1),*(undefined1 (*) [16])(puVar19 + -1)
                           ,8,1);
        *puVar19 = auVar20._8_8_;
        puVar19[-1] = auVar20._0_8_;
        goto LAB_0010b828;
      case 0x17:
        uVar16 = *puVar19;
        *puVar19 = SUB168(*(undefined1 (*) [16])(puVar19 + -2),8);
        puVar19[-1] = SUB168(*(undefined1 (*) [16])(puVar19 + -2),0);
        puVar19[-2] = uVar16;
        goto LAB_0010b828;
      case 0x18:
        puVar14 = (ulong *)*puVar19;
        puVar19 = puVar19 + -1;
        *puVar19 = *puVar14;
        goto LAB_0010b828;
      case 0x19:
        uVar16 = *puVar19;
        if ((long)uVar16 < 0) goto LAB_0010bdc4;
        goto LAB_0010b828;
      case 0x1a:
        uVar16 = puVar19[-1] & *puVar19;
        break;
      case 0x1b:
        uVar16 = 0;
        if (*puVar19 != 0) {
          uVar16 = (long)puVar19[-1] / (long)*puVar19;
        }
        break;
      case 0x1c:
        uVar16 = puVar19[-1] - *puVar19;
        break;
      case 0x1d:
        uVar16 = *puVar19;
        lVar11 = 0;
        if (uVar16 != 0) {
          lVar11 = (long)puVar19[-1] / (long)uVar16;
        }
        uVar16 = puVar19[-1] - lVar11 * uVar16;
        break;
      case 0x1e:
        uVar16 = puVar19[-1] * *puVar19;
        break;
      case 0x1f:
        uVar16 = *puVar19;
LAB_0010bdc4:
        *puVar19 = -uVar16;
        goto LAB_0010b828;
      case 0x20:
        *puVar19 = ~*puVar19;
        goto LAB_0010b828;
      case 0x21:
        uVar16 = puVar19[-1] | *puVar19;
        break;
      case 0x22:
        uVar16 = puVar19[-1] + *puVar19;
        break;
      case 0x23:
        lVar11 = FUN_0010b5dc(&local_68,pbVar6);
        *puVar19 = *puVar19 + lVar11;
        goto LAB_0010b828;
      case 0x24:
        uVar16 = puVar19[-1] << (*puVar19 & 0x3f);
        break;
      case 0x25:
        uVar16 = puVar19[-1] >> (*puVar19 & 0x3f);
        break;
      case 0x26:
        uVar16 = (long)puVar19[-1] >> (*puVar19 & 0x3f);
        break;
      case 0x27:
        uVar16 = puVar19[-1] ^ *puVar19;
        break;
      case 0x28:
        puVar14 = puVar19 + -1;
        uVar16 = *puVar19;
        local_68 = pbVar18 + 3;
        puVar19 = puVar14;
        if (uVar16 != 0) {
          local_68 = pbVar18 + 3 + *(short *)(pbVar18 + 1);
        }
        goto LAB_0010b828;
      case 0x29:
        uVar16 = (ulong)(puVar19[-1] == *puVar19);
        break;
      case 0x2a:
        uVar16 = (ulong)(*puVar19 <= puVar19[-1]);
        break;
      case 0x2b:
        uVar16 = (ulong)(*puVar19 < puVar19[-1]);
        break;
      case 0x2c:
        uVar16 = (ulong)(puVar19[-1] <= *puVar19);
        break;
      case 0x2d:
        uVar16 = (ulong)(puVar19[-1] < *puVar19);
        break;
      case 0x2e:
        uVar16 = (ulong)(puVar19[-1] != *puVar19);
        break;
      case 0x2f:
        local_68 = pbVar18 + (long)*(short *)(pbVar18 + 1) + 3;
        goto LAB_0010b828;
      default:
        uVar16 = (ulong)(uVar15 - 0x30);
        goto LAB_0010b824;
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5b:
      case 0x5c:
      case 0x5d:
      case 0x5e:
      case 0x5f:
      case 0x60:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x6f:
        if (((uVar15 != 0x6f) && (puVar14 = puVar1, bVar8 != 0x6e)) &&
           (puVar14 = puVar2, bVar8 != 0x6d)) {
          puVar14 = (ulong *)(param_3 + (ulong)(uVar15 - 0x50) * 8);
        }
        goto LAB_0010b820;
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x74:
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7a:
      case 0x7b:
      case 0x7c:
      case 0x7d:
      case 0x7e:
      case 0x7f:
      case 0x80:
      case 0x81:
      case 0x82:
      case 0x83:
      case 0x84:
      case 0x85:
      case 0x86:
      case 0x87:
      case 0x88:
      case 0x89:
      case 0x8a:
      case 0x8b:
      case 0x8c:
      case 0x8d:
      case 0x8e:
      case 0x8f:
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = pbVar13;
        do {
          if (pbVar18 == pbVar6) {
            fprintf((FILE *)(PTR___sF_001116a0 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                    "truncated sleb128 expression");
            fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar7 = *pbVar18;
          pbVar13 = pbVar13 + 1;
          uVar17 = uVar16 & 0x3f;
          uVar16 = uVar16 + 7;
          uVar12 = ((ulong)bVar7 & 0x7f) << uVar17 | uVar12;
          pbVar18 = pbVar18 + 1;
        } while ((char)bVar7 < '\0');
        local_68 = pbVar13;
        uVar17 = -1L << (uVar16 & 0x3f);
        if (0x38 < (int)uVar16 - 7U || bVar7 < 0x40) {
          uVar17 = 0;
        }
        if (bVar8 < 0x8e) {
          if (((bVar8 != 0x6e) && (puVar14 = puVar5, bVar8 != 0x6f)) &&
             (puVar14 = puVar2, bVar8 != 0x8d)) goto LAB_0010b960;
        }
        else if (bVar8 < 0x90) {
          puVar14 = puVar1;
          if ((bVar8 != 0x8e) && (puVar14 = puVar4, uVar15 != 0x8f)) {
LAB_0010b960:
            if (0x1c < uVar10 - 0x70) {
              fprintf((FILE *)(PTR___sF_001116a0 + 0x130),"libunwind: %s - %s\n","getRegister",
                      "unsupported arm64 register");
              fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            puVar14 = (ulong *)(param_3 + (ulong)(uVar10 - 0x70) * 8);
          }
        }
        else {
          puVar14 = puVar5;
          if ((bVar8 != 0x90) && (puVar14 = puVar3, bVar8 != 0x92)) goto LAB_0010b960;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_0010b824;
      case 0x90:
        uVar10 = FUN_0010b5dc(&local_68,pbVar6);
        puVar9 = PTR___sF_001116a0;
        if ((int)uVar10 < 0x1e) {
          if (((uVar10 != 0xfffffffe) && (puVar14 = puVar5, uVar10 != 0xffffffff)) &&
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_0010bec4;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_0010bec4:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_001116a0 + 0x130),"libunwind: %s - %s\n","getRegister",
                      "unsupported arm64 register");
              fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            puVar14 = (ulong *)(param_3 + (ulong)uVar10 * 8);
          }
        }
        else {
          puVar14 = puVar5;
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_0010bec4;
        }
LAB_0010b820:
        uVar16 = *puVar14;
        goto LAB_0010b824;
      case 0x91:
        fprintf((FILE *)(PTR___sF_001116a0 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
                "DW_OP_fbreg not implemented");
        fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x92:
        uVar10 = FUN_0010b5dc(&local_68,pbVar6);
        puVar9 = PTR___sF_001116a0;
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = local_68;
        pbVar13 = local_68;
        do {
          if (pbVar13 == pbVar6) {
            fprintf((FILE *)(PTR___sF_001116a0 + 0x130),"libunwind: %s - %s\n","getSLEB128",
                    "truncated sleb128 expression");
            fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar8 = *pbVar13;
          pbVar18 = pbVar18 + 1;
          uVar17 = uVar16 & 0x3f;
          uVar16 = uVar16 + 7;
          uVar12 = ((ulong)bVar8 & 0x7f) << uVar17 | uVar12;
          pbVar13 = pbVar13 + 1;
        } while ((char)bVar8 < '\0');
        local_68 = pbVar18;
        uVar17 = -1L << (uVar16 & 0x3f);
        if (0x38 < (int)uVar16 - 7U || bVar8 < 0x40) {
          uVar17 = 0;
        }
        if ((int)uVar10 < 0x1e) {
          if (((uVar10 != 0xfffffffe) && (puVar14 = puVar5, uVar10 != 0xffffffff)) &&
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_0010beec;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_0010beec:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_001116a0 + 0x130),"libunwind: %s - %s\n","getRegister",
                      "unsupported arm64 register");
              fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            puVar14 = (ulong *)(param_3 + (ulong)uVar10 * 8);
          }
        }
        else {
          puVar14 = puVar5;
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_0010beec;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_0010b824;
      case 0x93:
        fprintf((FILE *)(PTR___sF_001116a0 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
                "DW_OP_piece not implemented");
        fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x94:
        local_68 = pbVar18 + 2;
        puVar14 = (ulong *)*puVar19;
        bVar8 = pbVar18[1];
        if (bVar8 < 4) {
          if (bVar8 == 1) {
            *puVar19 = (ulong)(byte)*puVar14;
          }
          else {
            if (bVar8 != 2) {
LAB_0010c0c4:
              fprintf((FILE *)(PTR___sF_001116a0 + 0x130),"libunwind: %s - %s\n",
                      "evaluateExpression","DW_OP_deref_size with bad size");
              fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *puVar19 = (ulong)(ushort)*puVar14;
          }
        }
        else {
          if (bVar8 != 4) {
            if (bVar8 != 8) goto LAB_0010c0c4;
            goto LAB_0010bc1c;
          }
          *puVar19 = (ulong)(uint)*puVar14;
        }
        goto LAB_0010b828;
      }
      puVar19[-1] = uVar16;
      puVar19 = puVar19 + -1;
LAB_0010b828:
      pbVar18 = local_68;
    } while (local_68 < pbVar6);
    param_4 = *puVar19;
  }
  return param_4;
}


// ===== 0010c160  FUN_0010c160 =====

undefined8 FUN_0010c160(long param_1,ulong param_2,long *param_3,uint param_4)

{
  bool bVar1;
  byte bVar2;
  undefined *__src;
  ulong uVar3;
  undefined *__dest;
  long *plVar4;
  size_t __n;
  long lVar5;
  undefined1 auStack_6e8 [32];
  undefined8 local_6c8;
  long local_6b0;
  undefined4 uStack_6a8;
  long local_698;
  long local_690;
  undefined8 uStack_688;
  undefined1 auStack_680 [16];
  uint local_670;
  
  if (((param_4 == 0) ||
      (uVar3 = FUN_0010c688(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],
                            param_3[2] + (ulong)param_4,&local_6b0,auStack_6e8), (uVar3 & 1) == 0))
     && ((param_3[4] == 0 ||
         (uVar3 = FUN_0010c850(*(undefined8 *)(param_1 + 8),param_2,param_3[4],(int)param_3[5],
                               &local_6b0,auStack_6e8), (uVar3 & 1) == 0)))) {
    lVar5 = *param_3;
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00115adc);
    if (PTR_DAT_00115a18 < PTR_DAT_00115a20) {
      plVar4 = (long *)PTR_DAT_00115a18;
      if (lVar5 == -1) {
        do {
          if (((ulong)plVar4[1] <= param_2) && (param_2 < (ulong)plVar4[2])) goto LAB_0010c268;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_00115a20);
      }
      else {
        do {
          if (((*plVar4 == lVar5) && ((ulong)plVar4[1] <= param_2)) && (param_2 < (ulong)plVar4[2]))
          goto LAB_0010c268;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_00115a20);
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00115adc);
    goto LAB_0010c2b0;
  }
LAB_0010c2d0:
  bVar2 = 1;
LAB_0010c2d4:
  lVar5 = *param_3;
  memset(auStack_680,0,0x618);
  uVar3 = FUN_0010a2c4(*(undefined8 *)(param_1 + 8),&local_6b0,auStack_6e8,param_2,4,auStack_680);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x230) = uStack_688;
  *(long *)(param_1 + 0x228) = local_690;
  *(undefined8 *)(param_1 + 0x238) = local_6c8;
  bVar1 = (bool)(bVar2 ^ 1);
  *(ulong *)(param_1 + 0x240) = (ulong)local_670;
  *(undefined4 *)(param_1 + 0x250) = 0x3000000;
  *(long *)(param_1 + 0x220) = local_698;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined4 *)(param_1 + 0x254) = uStack_6a8;
  if (param_4 != 0) {
    bVar1 = true;
  }
  *(long *)(param_1 + 600) = local_6b0;
  *(long *)(param_1 + 0x260) = lVar5;
  if (!bVar1) {
    if (param_3[4] == 0) {
      lVar5 = *param_3;
      pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_00115adc);
      __src = PTR_DAT_00115a18;
      if (DAT_00115a28 <= PTR_DAT_00115a20) {
        __n = (long)DAT_00115a28 - (long)PTR_DAT_00115a18;
        __dest = (undefined *)malloc(__n * 4);
        memcpy(__dest,__src,__n);
        if ((undefined8 *)__src != &DAT_00115b18) {
          free(__src);
        }
        DAT_00115a28 = __dest + ((long)__n >> 3) * 0x20;
        PTR_DAT_00115a20 = __dest + __n;
        PTR_DAT_00115a18 = __dest;
      }
      *(long *)PTR_DAT_00115a20 = lVar5;
      *(long *)((long)PTR_DAT_00115a20 + 8) = local_698;
      *(long *)((long)PTR_DAT_00115a20 + 0x18) = local_6b0;
      *(long *)((long)PTR_DAT_00115a20 + 0x10) = local_690;
      PTR_DAT_00115a20 = (undefined *)((long)PTR_DAT_00115a20 + 0x20);
      pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00115adc);
      return 1;
    }
    return 1;
  }
  return 1;
LAB_0010c268:
  lVar5 = plVar4[3];
  pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00115adc);
  if ((lVar5 != 0) &&
     (uVar3 = FUN_0010c688(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],lVar5,
                           &local_6b0,auStack_6e8), (uVar3 & 1) != 0)) {
    bVar2 = 0;
    goto LAB_0010c2d4;
  }
LAB_0010c2b0:
  uVar3 = FUN_0010c688(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],0,&local_6b0,
                       auStack_6e8);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  goto LAB_0010c2d0;
}


// ===== 0010c434  FUN_0010c434 =====

undefined8 FUN_0010c434(ulong *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 local_70 [4];
  
  uVar12 = (ulong)(ushort)param_1[3];
  if (uVar12 != 0) {
    uVar6 = param_3[2];
    uVar13 = *param_1;
    if (uVar13 <= uVar6) {
      uVar5 = uVar12;
      piVar10 = (int *)param_1[2];
      do {
        if (((*piVar10 == 1) && (uVar1 = *(long *)(piVar10 + 4) + uVar13, uVar1 <= uVar6)) &&
           (uVar11 = *(ulong *)(piVar10 + 10), uVar6 < uVar11 + uVar1)) {
          puVar7 = (ulong *)param_3[1];
          uVar6 = uVar12 + 0xffffffff;
          *puVar7 = uVar1;
          puVar7[1] = uVar11;
          do {
            if (*(int *)(param_1[2] + (uVar6 & 0xffffffff) * 0x38) == 0x6474e550) {
              lVar8 = param_1[2] + (uVar6 & 0xffffffff) * 0x38;
              uVar2 = *param_3;
              lVar3 = param_3[1];
              lVar9 = *(long *)(lVar8 + 0x28);
              lVar8 = *(long *)(lVar8 + 0x10) + uVar13;
              *(long *)(lVar3 + 0x20) = lVar8;
              *(long *)(lVar3 + 0x28) = lVar9;
              uVar5 = FUN_0010c568(uVar2,lVar8,lVar9 + lVar8,local_70);
              if ((uVar5 & 1) != 0) {
                lVar8 = param_3[1];
                *(undefined8 *)(lVar8 + 0x10) = local_70[0];
                *(undefined8 *)(lVar8 + 0x18) = 0xffffffffffffffff;
                return 1;
              }
            }
            uVar4 = (int)uVar12 - 1;
            uVar12 = (ulong)uVar4;
            uVar6 = uVar6 - 1;
          } while ((uVar4 & 0xffff) != 0);
          return 0;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 0xe;
      } while (uVar5 != 0);
    }
  }
  return 0;
}


// ===== 0010c568  FUN_0010c568 =====

undefined8 FUN_0010c568(undefined8 param_1,byte *param_2,byte *param_3,undefined8 *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  byte *local_28;
  
  puVar3 = PTR___sF_001116a0;
  if ((ulong)((long)param_3 - (long)param_2) < 4) {
    if (param_3 == param_2) {
      return 0;
    }
    fprintf((FILE *)(PTR___sF_001116a0 + 0x130),
            "libunwind: unsupported .eh_frame_hdr at %lx: need at least 4 bytes of data but only got %zd\n"
            ,param_2);
  }
  else {
    if (*param_2 == 1) {
      local_28 = param_2 + 4;
      bVar1 = param_2[2];
      bVar2 = param_2[1];
      *(byte *)(param_4 + 3) = param_2[3];
      uVar4 = FUN_0010b250(param_1,&local_28,param_3,bVar2,param_2);
      *param_4 = uVar4;
      if (bVar1 == 0xff) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_0010b250(param_1,&local_28,param_3,bVar1,param_2);
      }
      param_4[1] = uVar4;
      param_4[2] = local_28;
      return 1;
    }
    fprintf((FILE *)(PTR___sF_001116a0 + 0x130),
            "libunwind: unsupported .eh_frame_hdr version: %u at %lx\n",(ulong)(uint)*param_2,
            param_2);
  }
  fflush((FILE *)(puVar3 + 0x130));
  return 0;
}


// ===== 0010c688  FUN_0010c688 =====

undefined8
FUN_0010c688(undefined8 param_1,ulong param_2,uint *param_3,long param_4,uint *param_5,
            undefined8 *param_6,long param_7)

{
  uint *puVar1;
  char cVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint *puVar7;
  ulong uVar8;
  uint *puVar9;
  uint *local_68;
  
  puVar9 = (uint *)(param_4 + (long)param_3);
  puVar1 = param_3;
  if (param_5 != (uint *)0x0) {
    puVar1 = param_5;
  }
  if (param_4 == -1) {
    puVar9 = (uint *)0xffffffffffffffff;
  }
  while( true ) {
    puVar3 = puVar1;
    if (puVar9 <= puVar3) {
      return 0;
    }
    local_68 = puVar3 + 1;
    uVar8 = (ulong)*puVar3;
    if (*puVar3 == 0xffffffff) {
      uVar8 = *(ulong *)(puVar3 + 1);
      local_68 = puVar3 + 3;
    }
    if (uVar8 == 0) break;
    puVar1 = (uint *)((long)local_68 + uVar8);
    if ((((*local_68 != 0) &&
         (puVar7 = (uint *)((long)local_68 - (ulong)*local_68), param_3 <= puVar7)) &&
        (puVar7 < puVar9)) && (lVar4 = FUN_001093f8(param_1,puVar7,param_7), lVar4 == 0)) {
      local_68 = local_68 + 1;
      uVar8 = FUN_0010b250(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x18),0);
      lVar4 = FUN_0010b250(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x18) & 0xf,0);
      if ((uVar8 < param_2) && (param_2 <= lVar4 + uVar8)) {
        cVar2 = *(char *)(param_7 + 0x31);
        param_6[5] = 0;
        puVar9 = local_68;
        if (cVar2 != '\0') {
          lVar5 = FUN_0010b5dc(&local_68,puVar1);
          puVar7 = local_68;
          puVar9 = (uint *)((long)local_68 + lVar5);
          if ((*(byte *)(param_7 + 0x19) != 0xff) &&
             (lVar5 = FUN_0010b250(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x19) & 0xf,0),
             lVar5 != 0)) {
            local_68 = puVar7;
            uVar6 = FUN_0010b250(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x19),0);
            param_6[5] = uVar6;
          }
        }
        param_6[2] = puVar9;
        param_6[3] = uVar8;
        *param_6 = puVar3;
        param_6[1] = (long)puVar1 - (long)puVar3;
        param_6[4] = lVar4 + uVar8;
        return 1;
      }
    }
  }
  return 0;
}


// ===== 0010c850  FUN_0010c850 =====

undefined8
FUN_0010c850(undefined8 param_1,ulong param_2,long param_3,ulong param_4,long param_5,
            undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long local_88;
  undefined1 auStack_80 [8];
  ulong local_78;
  long local_70;
  undefined1 local_68;
  
  lVar4 = param_3 + (param_4 & 0xffffffff);
  uVar1 = FUN_0010c568(param_1,param_3,lVar4,auStack_80);
  if (((uVar1 & 1) != 0) && (local_78 != 0)) {
    lVar2 = FUN_0010c9b8(local_68);
    lVar7 = 0;
    do {
      if (local_78 < 2) {
        lVar8 = lVar7 * lVar2;
        break;
      }
      uVar6 = local_78 >> 1;
      lVar8 = (uVar6 + lVar7) * lVar2;
      local_88 = local_70 + lVar8;
      uVar1 = FUN_0010b250(param_1,&local_88,lVar4,local_68,param_3);
      uVar5 = local_78 - uVar6;
      local_78 = uVar6;
      if (uVar1 < param_2) {
        local_78 = uVar5;
        lVar7 = uVar6 + lVar7;
      }
    } while (uVar1 != param_2);
    local_88 = local_70 + lVar8;
    FUN_0010b250(param_1,&local_88,lVar4,local_68,param_3);
    uVar3 = FUN_0010b250(param_1,&local_88,lVar4,local_68,param_3);
    lVar4 = FUN_00109268(param_1,uVar3,param_5,param_6,0);
    if (((lVar4 == 0) && (*(ulong *)(param_5 + 0x18) <= param_2)) &&
       (param_2 < *(ulong *)(param_5 + 0x20))) {
      return 1;
    }
  }
  return 0;
}


// ===== 0010c9b8  FUN_0010c9b8 =====

undefined8 FUN_0010c9b8(uint param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_001116a0;
  param_1 = param_1 & 0xf;
  if (param_1 < 9) {
    if (param_1 < 3) {
      if (param_1 == 2) {
        return 4;
      }
      if (param_1 == 1) {
LAB_0010ca80:
        fprintf((FILE *)(PTR___sF_001116a0 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
                "Can\'t binary search on variable length encoded data.");
        fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    else {
      if (param_1 == 3) {
        return 8;
      }
      if (param_1 == 4) {
        return 0x10;
      }
    }
  }
  else if (param_1 < 0xb) {
    if (param_1 == 10) {
      return 4;
    }
    if (param_1 == 9) goto LAB_0010ca80;
  }
  else {
    if (param_1 == 0xc) {
      return 0x10;
    }
    if (param_1 == 0xb) {
      return 8;
    }
  }
  fprintf((FILE *)(PTR___sF_001116a0 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
          "Unknown DWARF encoding for search table.");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0010cab4  FUN_0010cab4 =====

char * FUN_0010cab4(int param_1)

{
  if (param_1 + 2U < 0x62) {
    return &DAT_00104e28 + *(int *)(&DAT_00104e28 + (ulong)(param_1 + 2U) * 4);
  }
  return "unknown register";
}


// ===== 0010cae4  FUN_0010cae4 =====

undefined1  [16] FUN_0010cae4(undefined1 (*param_1) [16])

{
  return *param_1;
}


// ===== 0010cb74  FUN_0010cb74 =====

undefined8
FUN_0010cb74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,long param_10,undefined8 param_11,undefined8 param_12,
            undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
            undefined8 param_17)

{
  undefined8 in_x9;
  undefined8 in_x10;
  undefined8 in_x11;
  undefined8 in_x12;
  undefined8 in_x13;
  undefined8 in_x14;
  undefined8 in_x15;
  undefined8 in_x16;
  undefined8 in_x17;
  undefined8 in_x18;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  undefined8 in_d16;
  undefined8 in_d17;
  undefined8 in_d18;
  undefined8 in_d19;
  undefined8 in_d20;
  undefined8 in_d21;
  undefined8 in_d22;
  undefined8 in_d23;
  undefined8 in_d24;
  undefined8 in_d25;
  undefined8 in_d26;
  undefined8 in_d27;
  undefined8 in_d28;
  undefined8 in_d29;
  undefined8 in_d30;
  undefined8 in_d31;
  
  *(long *)param_10 = param_10;
  *(undefined8 *)(param_10 + 8) = param_11;
  *(undefined8 *)(param_10 + 0x10) = param_12;
  *(undefined8 *)(param_10 + 0x18) = param_13;
  *(undefined8 *)(param_10 + 0x20) = param_14;
  *(undefined8 *)(param_10 + 0x28) = param_15;
  *(undefined8 *)(param_10 + 0x30) = param_16;
  *(undefined8 *)(param_10 + 0x38) = param_17;
  *(undefined8 *)(param_10 + 0x40) = param_1;
  *(undefined8 *)(param_10 + 0x48) = in_x9;
  *(undefined8 *)(param_10 + 0x50) = in_x10;
  *(undefined8 *)(param_10 + 0x58) = in_x11;
  *(undefined8 *)(param_10 + 0x60) = in_x12;
  *(undefined8 *)(param_10 + 0x68) = in_x13;
  *(undefined8 *)(param_10 + 0x70) = in_x14;
  *(undefined8 *)(param_10 + 0x78) = in_x15;
  *(undefined8 *)(param_10 + 0x80) = in_x16;
  *(undefined8 *)(param_10 + 0x88) = in_x17;
  *(undefined8 *)(param_10 + 0x90) = in_x18;
  *(undefined8 *)(param_10 + 0x98) = unaff_x19;
  *(undefined8 *)(param_10 + 0xa0) = unaff_x20;
  *(undefined8 *)(param_10 + 0xa8) = unaff_x21;
  *(undefined8 *)(param_10 + 0xb0) = unaff_x22;
  *(undefined8 *)(param_10 + 0xb8) = unaff_x23;
  *(undefined8 *)(param_10 + 0xc0) = unaff_x24;
  *(undefined8 *)(param_10 + 200) = unaff_x25;
  *(undefined8 *)(param_10 + 0xd0) = unaff_x26;
  *(undefined8 *)(param_10 + 0xd8) = unaff_x27;
  *(undefined8 *)(param_10 + 0xe0) = unaff_x28;
  *(undefined8 *)(param_10 + 0xe8) = unaff_x29;
  *(undefined8 *)(param_10 + 0xf0) = unaff_x30;
  *(BADSPACEBASE **)(param_10 + 0xf8) = register0x00000008;
  *(undefined8 *)(param_10 + 0x100) = unaff_x30;
  *(undefined8 *)(param_10 + 0x110) = param_2;
  *(undefined8 *)(param_10 + 0x118) = param_3;
  *(undefined8 *)(param_10 + 0x120) = param_4;
  *(undefined8 *)(param_10 + 0x128) = param_5;
  *(undefined8 *)(param_10 + 0x130) = param_6;
  *(undefined8 *)(param_10 + 0x138) = param_7;
  *(undefined8 *)(param_10 + 0x140) = param_8;
  *(undefined8 *)(param_10 + 0x148) = param_9;
  *(undefined8 *)(param_10 + 0x150) = unaff_d8;
  *(undefined8 *)(param_10 + 0x158) = unaff_d9;
  *(undefined8 *)(param_10 + 0x160) = unaff_d10;
  *(undefined8 *)(param_10 + 0x168) = unaff_d11;
  *(undefined8 *)(param_10 + 0x170) = unaff_d12;
  *(undefined8 *)(param_10 + 0x178) = unaff_d13;
  *(undefined8 *)(param_10 + 0x180) = unaff_d14;
  *(undefined8 *)(param_10 + 0x188) = unaff_d15;
  *(undefined8 *)(param_10 + 400) = in_d16;
  *(undefined8 *)(param_10 + 0x198) = in_d17;
  *(undefined8 *)(param_10 + 0x1a0) = in_d18;
  *(undefined8 *)(param_10 + 0x1a8) = in_d19;
  *(undefined8 *)(param_10 + 0x1b0) = in_d20;
  *(undefined8 *)(param_10 + 0x1b8) = in_d21;
  *(undefined8 *)(param_10 + 0x1c0) = in_d22;
  *(undefined8 *)(param_10 + 0x1c8) = in_d23;
  *(undefined8 *)(param_10 + 0x1d0) = in_d24;
  *(undefined8 *)(param_10 + 0x1d8) = in_d25;
  *(undefined8 *)(param_10 + 0x1e0) = in_d26;
  *(undefined8 *)(param_10 + 0x1e8) = in_d27;
  *(undefined8 *)(param_10 + 0x1f0) = in_d28;
  *(undefined8 *)(param_10 + 0x1f8) = in_d29;
  *(undefined8 *)(param_10 + 0x200) = in_d30;
  *(undefined8 *)(param_10 + 0x208) = in_d31;
  return 0;
}


// ===== 0010cc10  FUN_0010cc10 =====

void FUN_0010cc10(void)

{
  (*(code *)PTR_001116b8)();
  return;
}


// ===== 0010cc30  <EXTERNAL>::__cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_001116c0)();
  return;
}


// ===== 0010cc40  <EXTERNAL>::__cxa_atexit =====

void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_001116c8)();
  return;
}


// ===== 0010cc50  <EXTERNAL>::__register_atfork =====

void __register_atfork(void)

{
  (*(code *)PTR___register_atfork_001116d0)();
  return;
}


// ===== 0010cc60  <EXTERNAL>::facebook::jni::initialize =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::initialize(_JavaVM *param_1,function *param_2)

{
  (*(code *)PTR_initialize_001116d8)();
  return;
}


// ===== 0010cc70  <EXTERNAL>::__stack_chk_fail =====

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_001116e0)();
  return;
}


// ===== 0010cc80  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_001116e8)();
  return;
}


// ===== 0010cc90  <EXTERNAL>::operator.new =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_001116f0)();
  return pvVar1;
}


// ===== 0010cca0  discord::NativeCrashReporting::registerNatives =====

void discord::NativeCrashReporting::registerNatives(void)

{
  (*(code *)PTR_registerNatives_001116f8)();
  return;
}


// ===== 0010ccb0  <EXTERNAL>::__cxa_allocate_exception =====

void __cxa_allocate_exception(void)

{
  (*(code *)PTR___cxa_allocate_exception_00111700)();
  return;
}


// ===== 0010ccc0  <EXTERNAL>::std::bad_array_new_length::bad_array_new_length =====

void __thiscall std::bad_array_new_length::bad_array_new_length(bad_array_new_length *this)

{
  (*(code *)PTR_bad_array_new_length_00111708)();
  return;
}


// ===== 0010ccd0  <EXTERNAL>::__cxa_throw =====

void __cxa_throw(void)

{
  (*(code *)PTR___cxa_throw_00111710)();
  return;
}


// ===== 0010cce0  <EXTERNAL>::__cxa_begin_catch =====

void __cxa_begin_catch(void)

{
  (*(code *)PTR___cxa_begin_catch_00111718)();
  return;
}


// ===== 0010ccf0  <EXTERNAL>::std::terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
  (*(code *)PTR_terminate_00111720)();
  return;
}


// ===== 0010cd00  <EXTERNAL>::facebook::jni::Environment::current =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::Environment::current(void)

{
  (*(code *)PTR_current_00111728)();
  return;
}


// ===== 0010cd10  <EXTERNAL>::facebook::jni::throwCppExceptionIf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwCppExceptionIf(bool param_1)

{
  (*(code *)PTR_throwCppExceptionIf_00111730)(param_1);
  return;
}


// ===== 0010cd20  <EXTERNAL>::__cxa_guard_acquire =====

void __cxa_guard_acquire(void)

{
  (*(code *)PTR___cxa_guard_acquire_00111738)();
  return;
}


// ===== 0010cd30  <EXTERNAL>::facebook::jni::findClassStatic =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::findClassStatic(char *param_1)

{
  (*(code *)PTR_findClassStatic_00111740)();
  return;
}


// ===== 0010cd40  <EXTERNAL>::__cxa_guard_release =====

void __cxa_guard_release(void)

{
  (*(code *)PTR___cxa_guard_release_00111748)();
  return;
}


// ===== 0010cd50  <EXTERNAL>::__cxa_guard_abort =====

void __cxa_guard_abort(void)

{
  (*(code *)PTR___cxa_guard_abort_00111750)();
  return;
}


// ===== 0010cd60  facebook::jni::detail::FunctionWrapper<void(*)(facebook::jni::alias_ref<discord::NativeCrashReporting>,unsigned_char),discord::NativeCrashReporting,void,unsigned_char>::call =====

void facebook::jni::detail::
     FunctionWrapper<void(*)(facebook::jni::alias_ref<discord::NativeCrashReporting>,unsigned_char),discord::NativeCrashReporting,void,unsigned_char>
     ::call(_JNIEnv *param_1,_jobject *param_2,uchar param_3,_func_void_alias_ref_uchar *param_4)

{
  (*(code *)PTR_call_00111758)(param_1,param_2,param_3);
  return;
}


// ===== 0010cd70  <EXTERNAL>::facebook::gloginit::initialize =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::gloginit::initialize(char *param_1)

{
  (*(code *)PTR_initialize_00111760)();
  return;
}


// ===== 0010cd80  <EXTERNAL>::google::AddLogSink =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void google::AddLogSink(LogSink *param_1)

{
  (*(code *)PTR_AddLogSink_00111768)();
  return;
}


// ===== 0010cd90  discord::SentryBreadcrumbSink::SentryBreadcrumbSink =====

void __thiscall discord::SentryBreadcrumbSink::SentryBreadcrumbSink(SentryBreadcrumbSink *this)

{
  (*(code *)PTR_SentryBreadcrumbSink_00111770)();
  return;
}


// ===== 0010cda0  discord::SentryBreadcrumbSink::~SentryBreadcrumbSink =====

void __thiscall discord::SentryBreadcrumbSink::~SentryBreadcrumbSink(SentryBreadcrumbSink *this)

{
  (*(code *)PTR__SentryBreadcrumbSink_00111778)();
  return;
}


// ===== 0010cdb0  <EXTERNAL>::facebook::jni::detail::JniEnvCacher::JniEnvCacher =====

void __thiscall
facebook::jni::detail::JniEnvCacher::JniEnvCacher(JniEnvCacher *this,_JNIEnv *param_1)

{
  (*(code *)PTR_JniEnvCacher_00111780)();
  return;
}


// ===== 0010cdc0  <EXTERNAL>::facebook::jni::detail::JniEnvCacher::~JniEnvCacher =====

void __thiscall facebook::jni::detail::JniEnvCacher::~JniEnvCacher(JniEnvCacher *this)

{
  (*(code *)PTR__JniEnvCacher_00111788)();
  return;
}


// ===== 0010cdd0  <EXTERNAL>::facebook::jni::translatePendingCppExceptionToJavaException =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::translatePendingCppExceptionToJavaException(void)

{
  (*(code *)PTR_translatePendingCppExceptionToJavaException_00111790)();
  return;
}


// ===== 0010cde0  <EXTERNAL>::__cxa_end_catch =====

void __cxa_end_catch(void)

{
  (*(code *)PTR___cxa_end_catch_00111798)();
  return;
}


// ===== 0010cdf0  discord::CrashReporting::getInstance =====

void __thiscall discord::CrashReporting::getInstance(CrashReporting *this)

{
  (*(code *)PTR_getInstance_001117a0)();
  return;
}


// ===== 0010ce00  <EXTERNAL>::std::__ndk1::thread::~thread =====

void __thiscall std::__ndk1::thread::~thread(thread *this)

{
  (*(code *)PTR__thread_001117a8)();
  return;
}


// ===== 0010ce10  <EXTERNAL>::std::__ndk1::mutex::~mutex =====

void __thiscall std::__ndk1::mutex::~mutex(mutex *this)

{
  (*(code *)PTR__mutex_001117b0)();
  return;
}


// ===== 0010ce20  facebook::jni::base_owned_ref<discord::CrashReporting,facebook::jni::GlobalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::base_owned_ref<discord::CrashReporting,facebook::jni::GlobalReferenceAllocator>::
~base_owned_ref(base_owned_ref<discord::CrashReporting,facebook::jni::GlobalReferenceAllocator>
                *this)

{
  (*(code *)PTR__base_owned_ref_001117b8)();
  return;
}


// ===== 0010ce30  <EXTERNAL>::google::LogSink::~LogSink =====

void __thiscall google::LogSink::~LogSink(LogSink *this)

{
  (*(code *)PTR__LogSink_001117c0)();
  return;
}


// ===== 0010ce40  <EXTERNAL>::std::__ndk1::thread::join =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::thread::join(void)

{
  (*(code *)PTR_join_001117c8)();
  return;
}


// ===== 0010ce50  <EXTERNAL>::facebook::jni::throwPendingJniExceptionAsCppException =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwPendingJniExceptionAsCppException(void)

{
  (*(code *)PTR_throwPendingJniExceptionAsCppException_001117d0)();
  return;
}


// ===== 0010ce60  discord::CrashReporting::getInstance()::{lambda()#1}::operator() =====

void __thiscall discord::CrashReporting::getInstance()::{lambda()#1}::operator()(_lambda___1_ *this)

{
  (*(code *)PTR_operator___001117d8)();
  return;
}


// ===== 0010ce70  <EXTERNAL>::pthread_self =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

pthread_t pthread_self(void)

{
  pthread_t pVar1;
  
  pVar1 = (*(code *)PTR_pthread_self_001117e0)();
  return pVar1;
}


// ===== 0010ce80  <EXTERNAL>::pthread_setname_np =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_setname_np(pthread_t __target_thread,char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_setname_np_001117e8)((int)__target_thread);
  return iVar1;
}


// ===== 0010ce90  <EXTERNAL>::facebook::jni::ThreadScope::ThreadScope =====

void __thiscall facebook::jni::ThreadScope::ThreadScope(ThreadScope *this)

{
  (*(code *)PTR_ThreadScope_001117f0)();
  return;
}


// ===== 0010cea0  <EXTERNAL>::std::__ndk1::this_thread::sleep_for =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::this_thread::sleep_for(duration *param_1)

{
  (*(code *)PTR_sleep_for_001117f8)();
  return;
}


// ===== 0010ceb0  discord::SentryBreadcrumbSink::drainAndFlush =====

void __thiscall discord::SentryBreadcrumbSink::drainAndFlush(SentryBreadcrumbSink *this)

{
  (*(code *)PTR_drainAndFlush_00111800)();
  return;
}


// ===== 0010cec0  <EXTERNAL>::facebook::jni::ThreadScope::~ThreadScope =====

void __thiscall facebook::jni::ThreadScope::~ThreadScope(ThreadScope *this)

{
  (*(code *)PTR__ThreadScope_00111808)();
  return;
}


// ===== 0010ced0  <EXTERNAL>::std::__ndk1::__thread_struct::__thread_struct =====

void __thiscall std::__ndk1::__thread_struct::__thread_struct(__thread_struct *this)

{
  (*(code *)PTR___thread_struct_00111810)();
  return;
}


// ===== 0010cee0  <EXTERNAL>::pthread_create =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00111818)((int)__newthread);
  return iVar1;
}


// ===== 0010cef0  <EXTERNAL>::std::__ndk1::__throw_system_error =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__throw_system_error(int param_1,char *param_2)

{
  (*(code *)PTR___throw_system_error_00111820)(param_1);
  return;
}


// ===== 0010cf00  <EXTERNAL>::memcpy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00111828)();
  return pvVar1;
}


// ===== 0010cf10  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     append(char *param_1,ulong param_2)

{
  (*(code *)PTR_append_00111830)();
  return;
}


// ===== 0010cf20  <EXTERNAL>::__emutls_get_address =====

void __emutls_get_address(void)

{
  (*(code *)PTR___emutls_get_address_00111838)();
  return;
}


// ===== 0010cf30  <EXTERNAL>::strlen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00111840)();
  return sVar1;
}


// ===== 0010cf40  <EXTERNAL>::std::__ndk1::chrono::system_clock::now =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::chrono::system_clock::now(void)

{
  (*(code *)PTR_now_00111848)();
  return;
}


// ===== 0010cf50  <EXTERNAL>::std::__ndk1::mutex::lock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::mutex::lock(void)

{
  (*(code *)PTR_lock_00111850)();
  return;
}


// ===== 0010cf60  std::__ndk1::vector<discord::BreadcrumbData,std::__ndk1::allocator<discord::BreadcrumbData>>::__push_back_slow_path<discord::BreadcrumbData_const&> =====

BreadcrumbData * __thiscall
std::__ndk1::vector<discord::BreadcrumbData,std::__ndk1::allocator<discord::BreadcrumbData>>::
__push_back_slow_path<discord::BreadcrumbData_const&>
          (vector<discord::BreadcrumbData,std::__ndk1::allocator<discord::BreadcrumbData>> *this,
          BreadcrumbData *param_1)

{
  BreadcrumbData *pBVar1;
  
  pBVar1 = (BreadcrumbData *)
           (*(code *)PTR___push_back_slow_path<discord_BreadcrumbData_const&>_00111858)();
  return pBVar1;
}


// ===== 0010cf70  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init_copy_ctor_external =====

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
__init_copy_ctor_external
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2)

{
  (*(code *)PTR___init_copy_ctor_external_00111860)();
  return;
}


// ===== 0010cf80  <EXTERNAL>::std::__ndk1::mutex::unlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::mutex::unlock(void)

{
  (*(code *)PTR_unlock_00111868)();
  return;
}


// ===== 0010cf90  <EXTERNAL>::getpid =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_00111870)();
  return _Var1;
}


// ===== 0010cfa0  <EXTERNAL>::gettid =====

void gettid(void)

{
  (*(code *)PTR_gettid_00111878)();
  return;
}


// ===== 0010cfb0  discord::BreadcrumbData::~BreadcrumbData =====

void __thiscall discord::BreadcrumbData::~BreadcrumbData(BreadcrumbData *this)

{
  (*(code *)PTR__BreadcrumbData_00111880)();
  return;
}


// ===== 0010cfc0  <EXTERNAL>::std::bad_alloc::bad_alloc =====

void __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
  (*(code *)PTR_bad_alloc_00111888)();
  return;
}


// ===== 0010cfd0  facebook::jni::base_owned_ref<facebook::jni::detail::JTypeFor<discord::CrashReporting,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::
base_owned_ref<facebook::jni::detail::JTypeFor<discord::CrashReporting,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
::~base_owned_ref(base_owned_ref<facebook::jni::detail::JTypeFor<discord::CrashReporting,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
                  *this)

{
  (*(code *)PTR__base_owned_ref_00111890)();
  return;
}


// ===== 0010cfe0  discord::CrashReporting::addBreadcrumbBatchBinary =====

void __thiscall
discord::CrashReporting::addBreadcrumbBatchBinary(CrashReporting *this,vector *param_1)

{
  (*(code *)PTR_addBreadcrumbBatchBinary_00111898)();
  return;
}


// ===== 0010cff0  <EXTERNAL>::std::__ndk1::chrono::steady_clock::now =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::chrono::steady_clock::now(void)

{
  (*(code *)PTR_now_001118a0)();
  return;
}


// ===== 0010d000  std::__ndk1::vector<std::__ndk1::vector<discord::BreadcrumbData,std::__ndk1::allocator<discord::BreadcrumbData>>,std::__ndk1::allocator<std::__ndk1::vector<discord::BreadcrumbData,std::__ndk1::allocator<discord::BreadcrumbData>>>>::__push_back_slow_path<std::__ndk1::vector<discord::BreadcrumbData,std::__ndk1::allocator<discord::BreadcrumbData>>> =====

vector * __thiscall
std::__ndk1::
vector<std::__ndk1::vector<discord::BreadcrumbData,std::__ndk1::allocator<discord::BreadcrumbData>>,std::__ndk1::allocator<std::__ndk1::vector<discord::BreadcrumbData,std::__ndk1::allocator<discord::BreadcrumbData>>>>
::
__push_back_slow_path<std::__ndk1::vector<discord::BreadcrumbData,std::__ndk1::allocator<discord::BreadcrumbData>>>
          (vector<std::__ndk1::vector<discord::BreadcrumbData,std::__ndk1::allocator<discord::BreadcrumbData>>,std::__ndk1::allocator<std::__ndk1::vector<discord::BreadcrumbData,std::__ndk1::allocator<discord::BreadcrumbData>>>>
           *this,vector *param_1)

{
  vector *pvVar1;
  
  pvVar1 = (vector *)
           (*(code *)
             PTR___push_back_slow_path<std___ndk1_vector<discord_BreadcrumbData,std___ndk1_allocator<discord_BreadcrumbData>>>_001118a8
           )();
  return pvVar1;
}


// ===== 0010d010  <EXTERNAL>::facebook::jni::JByteBuffer::allocateDirect =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::JByteBuffer::allocateDirect(int param_1)

{
  (*(code *)PTR_allocateDirect_001118b0)(param_1);
  return;
}


// ===== 0010d020  <EXTERNAL>::facebook::jni::JBuffer::getDirectAddress =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::JBuffer::getDirectAddress(void)

{
  (*(code *)PTR_getDirectAddress_001118b8)();
  return;
}


// ===== 0010d030  _JNIEnv::CallVoidMethod =====

void _JNIEnv::CallVoidMethod(_jobject *param_1,_jmethodID *param_2,...)

{
  (*(code *)PTR_CallVoidMethod_001118c0)();
  return;
}


// ===== 0010d040  <EXTERNAL>::google::LogMessage::LogMessage =====

void __thiscall
google::LogMessage::LogMessage(LogMessage *this,char *param_1,int param_2,int param_3)

{
  (*(code *)PTR_LogMessage_001118c8)(this,param_1,param_2,param_3);
  return;
}


// ===== 0010d050  <EXTERNAL>::google::LogMessage::stream =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void google::LogMessage::stream(void)

{
  (*(code *)PTR_stream_001118d0)();
  return;
}


// ===== 0010d060  <EXTERNAL>::google::LogMessage::~LogMessage =====

void __thiscall google::LogMessage::~LogMessage(LogMessage *this)

{
  (*(code *)PTR__LogMessage_001118d8)();
  return;
}


// ===== 0010d070  facebook::jni::JObject::getClass =====

void facebook::jni::JObject::getClass(void)

{
  (*(code *)PTR_getClass_001118e0)();
  return;
}


// ===== 0010d080  facebook::jni::JClass::getMethod<void(facebook::jni::alias_ref<facebook::jni::JByteBuffer>)> =====

void __thiscall
facebook::jni::JClass::getMethod<void(facebook::jni::alias_ref<facebook::jni::JByteBuffer>)>
          (JClass *this,char *param_1)

{
  (*(code *)PTR_getMethod<void(facebook_jni_alias_ref<facebook_jni_JByteBuffer>)>_001118e8)();
  return;
}


// ===== 0010d090  facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
~base_owned_ref(base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *this)

{
  (*(code *)PTR__base_owned_ref_001118f0)();
  return;
}


// ===== 0010d0a0  facebook::jni::base_owned_ref<facebook::jni::JByteBuffer,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::base_owned_ref<facebook::jni::JByteBuffer,facebook::jni::LocalReferenceAllocator>::
~base_owned_ref(base_owned_ref<facebook::jni::JByteBuffer,facebook::jni::LocalReferenceAllocator>
                *this)

{
  (*(code *)PTR__base_owned_ref_001118f8)();
  return;
}


// ===== 0010d0b0  <EXTERNAL>::__cxa_free_exception =====

void __cxa_free_exception(void)

{
  (*(code *)PTR___cxa_free_exception_00111900)();
  return;
}


// ===== 0010d0c0  <EXTERNAL>::std::logic_error::logic_error =====

void __thiscall std::logic_error::logic_error(logic_error *this,char *param_1)

{
  (*(code *)PTR_logic_error_00111908)();
  return;
}


// ===== 0010d0d0  <EXTERNAL>::memmove =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00111910)();
  return pvVar1;
}


// ===== 0010d0e0  <EXTERNAL>::std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry =====

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry
          (sentry *this,basic_ostream *param_1)

{
  (*(code *)PTR_sentry_00111918)();
  return;
}


// ===== 0010d0f0  <EXTERNAL>::std::__ndk1::ios_base::getloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::getloc(void)

{
  (*(code *)PTR_getloc_00111920)();
  return;
}


// ===== 0010d100  <EXTERNAL>::std::__ndk1::locale::use_facet =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::locale::use_facet(id *param_1)

{
  (*(code *)PTR_use_facet_00111928)();
  return;
}


// ===== 0010d110  <EXTERNAL>::std::__ndk1::locale::~locale =====

void __thiscall std::__ndk1::locale::~locale(locale *this)

{
  (*(code *)PTR__locale_00111930)();
  return;
}


// ===== 0010d120  <EXTERNAL>::std::__ndk1::ios_base::clear =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::clear(uint param_1)

{
  (*(code *)PTR_clear_00111938)(param_1);
  return;
}


// ===== 0010d130  <EXTERNAL>::std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry =====

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry(sentry *this)

{
  (*(code *)PTR__sentry_00111940)();
  return;
}


// ===== 0010d140  <EXTERNAL>::std::__ndk1::ios_base::__set_badbit_and_consider_rethrow =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::__set_badbit_and_consider_rethrow(void)

{
  (*(code *)PTR___set_badbit_and_consider_rethrow_00111948)();
  return;
}


// ===== 0010d150  <EXTERNAL>::memset =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00111950)(__s,__c);
  return pvVar1;
}


// ===== 0010d160  <EXTERNAL>::std::__ndk1::__thread_local_data =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__thread_local_data(void)

{
  (*(code *)PTR___thread_local_data_00111958)();
  return;
}


// ===== 0010d170  <EXTERNAL>::pthread_setspecific =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_setspecific(pthread_key_t __key,void *__pointer)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_setspecific_00111960)(__key);
  return iVar1;
}


// ===== 0010d180  <EXTERNAL>::std::__ndk1::__thread_struct::~__thread_struct =====

void __thiscall std::__ndk1::__thread_struct::~__thread_struct(__thread_struct *this)

{
  (*(code *)PTR____thread_struct_00111968)();
  return;
}


// ===== 0010d190  <EXTERNAL>::vsnprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vsnprintf_00111970)((int)__s);
  return iVar1;
}


// ===== 0010d1a0  <EXTERNAL>::fprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00111978)((int)__stream);
  return iVar1;
}


// ===== 0010d1b0  <EXTERNAL>::fflush =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00111980)((int)__stream);
  return iVar1;
}


// ===== 0010d1c0  <EXTERNAL>::abort =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00111988)();
  return;
}


// ===== 0010d1d0  <EXTERNAL>::pthread_rwlock_wrlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_wrlock_00111990)((int)__rwlock);
  return iVar1;
}


// ===== 0010d1e0  <EXTERNAL>::pthread_rwlock_unlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_unlock_00111998)((int)__rwlock);
  return iVar1;
}


// ===== 0010d1f0  <EXTERNAL>::malloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_001119a0)();
  return pvVar1;
}


// ===== 0010d200  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_001119a8)();
  return;
}


// ===== 0010d210  <EXTERNAL>::dl_iterate_phdr =====

void dl_iterate_phdr(void)

{
  (*(code *)PTR_dl_iterate_phdr_001119b0)();
  return;
}


// ===== 0010d220  <EXTERNAL>::pthread_rwlock_rdlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_rdlock_001119b8)((int)__rwlock);
  return iVar1;
}


// ===== 0010d230  <EXTERNAL>::syscall =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_syscall_001119c0)();
  return lVar1;
}


// ===== 0010d240  <EXTERNAL>::fwrite =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_001119c8)();
  return sVar1;
}


// ===== 00117000  <EXTERNAL>::__cxa_finalize =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117008  <EXTERNAL>::__cxa_atexit =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_atexit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117010  <EXTERNAL>::__register_atfork =====

/* WARNING: Control flow encountered bad instruction data */

void __register_atfork(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117018  <EXTERNAL>::facebook::jni::initialize =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::initialize(_JavaVM *param_1,function *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117020  <EXTERNAL>::__stack_chk_fail =====

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117028  <EXTERNAL>::operator.delete =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117030  <EXTERNAL>::operator.new =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117038  <EXTERNAL>::__cxa_allocate_exception =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_allocate_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117040  <EXTERNAL>::std::bad_array_new_length::bad_array_new_length =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::bad_array_new_length::bad_array_new_length(bad_array_new_length *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117050  <EXTERNAL>::std::bad_array_new_length::~bad_array_new_length =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::bad_array_new_length::~bad_array_new_length(bad_array_new_length *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117058  <EXTERNAL>::__cxa_throw =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_throw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117060  <EXTERNAL>::__cxa_begin_catch =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_begin_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117068  <EXTERNAL>::std::terminate =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117070  <EXTERNAL>::facebook::jni::Environment::current =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::Environment::current(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117078  <EXTERNAL>::facebook::jni::throwCppExceptionIf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwCppExceptionIf(bool param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117080  <EXTERNAL>::__cxa_guard_acquire =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_acquire(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117088  <EXTERNAL>::facebook::jni::findClassStatic =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::findClassStatic(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117090  <EXTERNAL>::__cxa_guard_release =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_release(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117098  <EXTERNAL>::__cxa_guard_abort =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001170a0  <EXTERNAL>::facebook::gloginit::initialize =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::gloginit::initialize(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001170a8  <EXTERNAL>::google::AddLogSink =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void google::AddLogSink(LogSink *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001170b0  <EXTERNAL>::facebook::jni::detail::JniEnvCacher::JniEnvCacher =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
facebook::jni::detail::JniEnvCacher::JniEnvCacher(JniEnvCacher *this,_JNIEnv *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001170b8  <EXTERNAL>::facebook::jni::detail::JniEnvCacher::~JniEnvCacher =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jni::detail::JniEnvCacher::~JniEnvCacher(JniEnvCacher *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001170c0  <EXTERNAL>::facebook::jni::translatePendingCppExceptionToJavaException =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::translatePendingCppExceptionToJavaException(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001170c8  <EXTERNAL>::__cxa_end_catch =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_end_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001170d0  <EXTERNAL>::std::__ndk1::thread::~thread =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::thread::~thread(thread *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001170d8  <EXTERNAL>::std::__ndk1::mutex::~mutex =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::mutex::~mutex(mutex *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001170e0  <EXTERNAL>::google::LogSink::~LogSink =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall google::LogSink::~LogSink(LogSink *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001170e8  <EXTERNAL>::std::__ndk1::thread::join =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::thread::join(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001170f0  <EXTERNAL>::facebook::jni::throwPendingJniExceptionAsCppException =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwPendingJniExceptionAsCppException(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001170f8  <EXTERNAL>::pthread_self =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

pthread_t pthread_self(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117100  <EXTERNAL>::pthread_setname_np =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_setname_np(pthread_t __target_thread,char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117108  <EXTERNAL>::facebook::jni::ThreadScope::ThreadScope =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jni::ThreadScope::ThreadScope(ThreadScope *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117110  <EXTERNAL>::std::__ndk1::this_thread::sleep_for =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::this_thread::sleep_for(duration *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117118  <EXTERNAL>::facebook::jni::ThreadScope::~ThreadScope =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jni::ThreadScope::~ThreadScope(ThreadScope *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117120  <EXTERNAL>::std::__ndk1::__thread_struct::__thread_struct =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::__thread_struct::__thread_struct(__thread_struct *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117128  <EXTERNAL>::pthread_create =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117130  <EXTERNAL>::std::__ndk1::__throw_system_error =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__throw_system_error(int param_1,char *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117138  <EXTERNAL>::memcpy =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117140  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     append(char *param_1,ulong param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117148  <EXTERNAL>::__emutls_get_address =====

/* WARNING: Control flow encountered bad instruction data */

void __emutls_get_address(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117150  <EXTERNAL>::strlen =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117158  <EXTERNAL>::std::__ndk1::chrono::system_clock::now =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::chrono::system_clock::now(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117160  <EXTERNAL>::std::__ndk1::mutex::lock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::mutex::lock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117168  <EXTERNAL>::std::__ndk1::mutex::unlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::mutex::unlock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117170  <EXTERNAL>::getpid =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117178  <EXTERNAL>::gettid =====

/* WARNING: Control flow encountered bad instruction data */

void gettid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117180  <EXTERNAL>::std::bad_alloc::bad_alloc =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117190  <EXTERNAL>::std::bad_alloc::~bad_alloc =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117198  <EXTERNAL>::std::__ndk1::chrono::steady_clock::now =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::chrono::steady_clock::now(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001171a0  <EXTERNAL>::facebook::jni::JByteBuffer::allocateDirect =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::JByteBuffer::allocateDirect(int param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001171a8  <EXTERNAL>::facebook::jni::JBuffer::getDirectAddress =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::JBuffer::getDirectAddress(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001171b0  <EXTERNAL>::google::LogMessage::LogMessage =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
google::LogMessage::LogMessage(LogMessage *this,char *param_1,int param_2,int param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001171b8  <EXTERNAL>::google::LogMessage::stream =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void google::LogMessage::stream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001171c0  <EXTERNAL>::google::LogMessage::~LogMessage =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall google::LogMessage::~LogMessage(LogMessage *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001171d0  <EXTERNAL>::std::length_error::~length_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::length_error::~length_error(length_error *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001171d8  <EXTERNAL>::__cxa_free_exception =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_free_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001171e0  <EXTERNAL>::std::logic_error::logic_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::logic_error::logic_error(logic_error *this,char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001171f0  <EXTERNAL>::memmove =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001171f8  <EXTERNAL>::std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry
          (sentry *this,basic_ostream *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117200  <EXTERNAL>::std::__ndk1::ios_base::getloc =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::getloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117210  <EXTERNAL>::std::__ndk1::locale::use_facet =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::locale::use_facet(id *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117218  <EXTERNAL>::std::__ndk1::locale::~locale =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::locale::~locale(locale *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117220  <EXTERNAL>::std::__ndk1::ios_base::clear =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::clear(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117228  <EXTERNAL>::std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry(sentry *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117230  <EXTERNAL>::std::__ndk1::ios_base::__set_badbit_and_consider_rethrow =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::__set_badbit_and_consider_rethrow(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117238  <EXTERNAL>::memset =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117240  <EXTERNAL>::std::__ndk1::__thread_local_data =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__thread_local_data(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117248  <EXTERNAL>::pthread_setspecific =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_setspecific(pthread_key_t __key,void *__pointer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117250  <EXTERNAL>::std::__ndk1::__thread_struct::~__thread_struct =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::__thread_struct::~__thread_struct(__thread_struct *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117258  <EXTERNAL>::vsnprintf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117270  <EXTERNAL>::google::LogSink::WaitTillSent =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void google::LogSink::WaitTillSent(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117280  <EXTERNAL>::__gxx_personality_v0 =====

/* WARNING: Control flow encountered bad instruction data */

void __gxx_personality_v0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117290  <EXTERNAL>::fprintf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00117298  <EXTERNAL>::fflush =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001172a0  <EXTERNAL>::abort =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001172a8  <EXTERNAL>::pthread_rwlock_wrlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001172b0  <EXTERNAL>::pthread_rwlock_unlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001172b8  <EXTERNAL>::malloc =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001172c0  <EXTERNAL>::free =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001172c8  <EXTERNAL>::dl_iterate_phdr =====

/* WARNING: Control flow encountered bad instruction data */

void dl_iterate_phdr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001172d0  <EXTERNAL>::pthread_rwlock_rdlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001172d8  <EXTERNAL>::syscall =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 001172e0  <EXTERNAL>::fwrite =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


