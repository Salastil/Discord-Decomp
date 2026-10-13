// ===== 00377be0  <EXTERNAL>::pthread_rwlock_wrlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_wrlock_00397e68)((int)__rwlock);
  return iVar1;
}


// ===== 00377bf0  <EXTERNAL>::syscall =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_syscall_00397e70)();
  return lVar1;
}


// ===== 00377c00  <EXTERNAL>::pthread_rwlock_unlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_unlock_00397e78)((int)__rwlock);
  return iVar1;
}


// ===== 00377c10  <EXTERNAL>::memcpy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00397e80)();
  return pvVar1;
}


// ===== 00377c20  <EXTERNAL>::getauxval =====

void getauxval(void)

{
  (*(code *)PTR_getauxval_00397e88)();
  return;
}


// ===== 00377c30  <EXTERNAL>::abort =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00397e90)();
  return;
}


// ===== 00377c40  <EXTERNAL>::__system_property_get =====

void __system_property_get(void)

{
  (*(code *)PTR___system_property_get_00397e98)();
  return;
}


// ===== 00377c50  <EXTERNAL>::getpid =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_00397ea0)();
  return _Var1;
}


// ===== 00377c60  <EXTERNAL>::pthread_rwlock_rdlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_rdlock_00397ea8)((int)__rwlock);
  return iVar1;
}


// ===== 00377c70  <EXTERNAL>::memset =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00397eb0)(__s,__c);
  return pvVar1;
}


// ===== 00377c80  <EXTERNAL>::fflush =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00397eb8)((int)__stream);
  return iVar1;
}


// ===== 0039f000  <EXTERNAL>::__cxa_finalize =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f008  <EXTERNAL>::__cxa_atexit =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_atexit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f010  <EXTERNAL>::__register_atfork =====

/* WARNING: Control flow encountered bad instruction data */

void __register_atfork(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f018  <EXTERNAL>::__cxa_guard_acquire =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_acquire(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f020  <EXTERNAL>::__cxa_guard_release =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_release(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f028  <EXTERNAL>::facebook::jni::initialize =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::initialize(_JavaVM *param_1,function *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f030  <EXTERNAL>::margelo::nitro::HybridObjectRegistry::registerHybridObjectConstructor =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::HybridObjectRegistry::registerHybridObjectConstructor
               (basic_string *param_1,function *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f038  <EXTERNAL>::__gxx_personality_v0 =====

/* WARNING: Control flow encountered bad instruction data */

void __gxx_personality_v0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f040  <EXTERNAL>::facebook::jni::findClassLocal =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::findClassLocal(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f048  <EXTERNAL>::__cxa_allocate_exception =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_allocate_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f050  <EXTERNAL>::__cxa_free_exception =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_free_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f058  <EXTERNAL>::std::length_error::~length_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::length_error::~length_error(length_error *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f060  <EXTERNAL>::__cxa_throw =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_throw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f068  <EXTERNAL>::std::logic_error::logic_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::logic_error::logic_error(logic_error *this,char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f070  <EXTERNAL>::std::bad_array_new_length::bad_array_new_length =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::bad_array_new_length::bad_array_new_length(bad_array_new_length *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f078  <EXTERNAL>::std::bad_array_new_length::~bad_array_new_length =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::bad_array_new_length::~bad_array_new_length(bad_array_new_length *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f080  <EXTERNAL>::operator.new =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f088  <EXTERNAL>::__cxa_begin_catch =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_begin_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f090  <EXTERNAL>::std::terminate =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f098  <EXTERNAL>::facebook::jni::Environment::current =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::Environment::current(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f0a0  <EXTERNAL>::facebook::jni::throwCppExceptionIf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwCppExceptionIf(bool param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f0a8  <EXTERNAL>::std::exception::~exception =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::exception::~exception(exception *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f0b0  <EXTERNAL>::std::exception::what =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::exception::what(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f0b8  <EXTERNAL>::operator.delete =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f0c0  <EXTERNAL>::__cxa_guard_abort =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_guard_abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f0c8  <EXTERNAL>::facebook::jni::JString::toStdString =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::JString::toStdString(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f0d0  <EXTERNAL>::facebook::jni::findClassStatic =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::findClassStatic(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f0d8  <EXTERNAL>::facebook::jni::detail::JniEnvCacher::JniEnvCacher =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
facebook::jni::detail::JniEnvCacher::JniEnvCacher(JniEnvCacher *this,_JNIEnv *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f0e0  <EXTERNAL>::facebook::jni::translatePendingCppExceptionToJavaException =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::translatePendingCppExceptionToJavaException(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f0e8  <EXTERNAL>::__cxa_end_catch =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_end_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f0f0  <EXTERNAL>::facebook::jni::detail::JniEnvCacher::~JniEnvCacher =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jni::detail::JniEnvCacher::~JniEnvCacher(JniEnvCacher *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f0f8  <EXTERNAL>::std::current_exception =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::current_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f100  <EXTERNAL>::std::exception_ptr::~exception_ptr =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::exception_ptr::~exception_ptr(exception_ptr *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f108  <EXTERNAL>::__cxa_rethrow =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_rethrow(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f110  <EXTERNAL>::facebook::jni::throwNewJavaException =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwNewJavaException(char *param_1,char *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f118  <EXTERNAL>::facebook::jni::detail::HybridDestructor::getNativePointer =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::detail::HybridDestructor::getNativePointer(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f120  <EXTERNAL>::facebook::jni::throwPendingJniExceptionAsCppException =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::throwPendingJniExceptionAsCppException(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f128  <EXTERNAL>::std::__ndk1::__next_prime =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__next_prime(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f130  <EXTERNAL>::std::bad_alloc::bad_alloc =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f138  <EXTERNAL>::std::bad_alloc::~bad_alloc =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f140  <EXTERNAL>::memcmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f148  <EXTERNAL>::facebook::react::CoreComponentsRegistry::sharedProviderRegistry =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::CoreComponentsRegistry::sharedProviderRegistry(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f150  <EXTERNAL>::facebook::react::ComponentDescriptorProviderRegistry::add =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ComponentDescriptorProviderRegistry::add(ComponentDescriptorProvider *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f158  <EXTERNAL>::std::__ndk1::__shared_weak_count::__release_weak =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::__release_weak(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f160  <EXTERNAL>::vsnprintf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f1a0  <EXTERNAL>::margelo::nitro::HybridObject::loadHybridMethods =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::HybridObject::loadHybridMethods(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f1a8  <EXTERNAL>::margelo::nitro::HybridObject::~HybridObject =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall margelo::nitro::HybridObject::~HybridObject(HybridObject *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f1b0  <EXTERNAL>::margelo::nitro::HybridObject::~HybridObject =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall margelo::nitro::HybridObject::~HybridObject(HybridObject *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f1b8  <EXTERNAL>::margelo::nitro::HybridObject::shared =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::HybridObject::shared(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f1c0  <EXTERNAL>::margelo::nitro::HybridObject::equals =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::HybridObject::equals(shared_ptr *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f1c8  <EXTERNAL>::margelo::nitro::HybridObject::toString =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::HybridObject::toString(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f1d0  <EXTERNAL>::margelo::nitro::HybridObject::~HybridObject =====

/* WARNING: Control flow encountered bad instruction data */

void margelo::nitro::HybridObject::~HybridObject(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f1d8  <EXTERNAL>::margelo::nitro::HybridObject::~HybridObject =====

/* WARNING: Control flow encountered bad instruction data */

void margelo::nitro::HybridObject::~HybridObject(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f1e0  <EXTERNAL>::__cxa_pure_virtual =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_pure_virtual(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f1e8  <EXTERNAL>::std::__ndk1::operator+ =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::operator+(char *param_1,basic_string *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f1f0  <EXTERNAL>::std::runtime_error::runtime_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::runtime_error::runtime_error(runtime_error *this,basic_string *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f1f8  <EXTERNAL>::std::runtime_error::~runtime_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f200  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     append(char *param_1,ulong param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f208  <EXTERNAL>::strlen =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f210  <EXTERNAL>::std::__ndk1::to_string =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::to_string(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f218  <EXTERNAL>::facebook::jsi::JSError::JSError =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::JSError::JSError(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f220  <EXTERNAL>::facebook::jsi::JSError::~JSError =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::JSError::~JSError(JSError *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f228  <EXTERNAL>::margelo::nitro::TypeInfo::getCurrentExceptionName =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::TypeInfo::getCurrentExceptionName(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f230  <EXTERNAL>::__dynamic_cast =====

/* WARNING: Control flow encountered bad instruction data */

void __dynamic_cast(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f238  <EXTERNAL>::margelo::nitro::HybridObject::getName =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::HybridObject::getName(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f240  <EXTERNAL>::margelo::nitro::TypeInfo::demangleName =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::TypeInfo::demangleName(basic_string *param_1,bool param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f248  <EXTERNAL>::facebook::jsi::Value::~Value =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::Value::~Value(Value *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f250  <EXTERNAL>::std::__ndk1::__shared_weak_count::~__shared_weak_count =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::__shared_weak_count::~__shared_weak_count(__shared_weak_count *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f288  <EXTERNAL>::facebook::jsi::Value::asNumber =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asNumber(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f290  <EXTERNAL>::margelo::nitro::HybridObject::toObject =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::HybridObject::toObject(Runtime *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f298  <EXTERNAL>::facebook::jsi::Value::asString =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asString(IRuntime *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f2a0  <EXTERNAL>::facebook::jsi::Value::asObject =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asObject(IRuntime *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f2a8  <EXTERNAL>::margelo::nitro::PropNameIDCache::get =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::PropNameIDCache::get(Runtime *param_1,basic_string *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f2b0  <EXTERNAL>::std::invalid_argument::~invalid_argument =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::invalid_argument::~invalid_argument(invalid_argument *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f2b8  <EXTERNAL>::std::logic_error::logic_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::logic_error::logic_error(logic_error *this,basic_string *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f2c0  <EXTERNAL>::facebook::jsi::Value::asString =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asString(IRuntime *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f2c8  <EXTERNAL>::facebook::jsi::Value::toString =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::toString(IRuntime *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f2d0  <EXTERNAL>::margelo::nitro::CommonGlobals::Promise::callConstructor =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::CommonGlobals::Promise::callConstructor(Runtime *param_1,function *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f2d8  <EXTERNAL>::margelo::nitro::CommonGlobals::Promise::resolved =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::CommonGlobals::Promise::resolved(Runtime *param_1,Value *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f2e0  <EXTERNAL>::margelo::nitro::CommonGlobals::Promise::rejected =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::CommonGlobals::Promise::rejected(Runtime *param_1,Value *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f2e8  <EXTERNAL>::facebook::jsi::Object::asFunction =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Object::asFunction(IRuntime *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f2f0  <EXTERNAL>::margelo::nitro::JSICache::getOrCreateCache =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::JSICache::getOrCreateCache(Runtime *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f2f8  <EXTERNAL>::margelo::nitro::Dispatcher::getRuntimeGlobalDispatcher =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::Dispatcher::getRuntimeGlobalDispatcher(Runtime *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f300  <EXTERNAL>::std::__ndk1::mutex::~mutex =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::mutex::~mutex(mutex *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f308  <EXTERNAL>::std::__ndk1::mutex::unlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::mutex::unlock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f310  <EXTERNAL>::std::__ndk1::__shared_weak_count::lock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::lock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f318  <EXTERNAL>::facebook::jsi::Value::Value =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::Value::Value(Value *this,Value *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f320  <EXTERNAL>::std::__ndk1::mutex::lock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::mutex::lock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f328  <EXTERNAL>::std::exception_ptr::exception_ptr =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::exception_ptr::exception_ptr(exception_ptr *this,exception_ptr *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f330  <EXTERNAL>::std::runtime_error::runtime_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::runtime_error::runtime_error(runtime_error *this,char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f338  <EXTERNAL>::std::rethrow_exception =====

/* WARNING: Control flow encountered bad instruction data */

void std::rethrow_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f340  <EXTERNAL>::facebook::jsi::Value::Value =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::Value::Value(Value *this,IRuntime *param_1,Value *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f348  <EXTERNAL>::facebook::jsi::JSError::JSError =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::JSError::JSError(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f350  <EXTERNAL>::facebook::jsi::Value::asBool =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asBool(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f370  <EXTERNAL>::facebook::jsi::NativeState::~NativeState =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jsi::NativeState::~NativeState(NativeState *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f378  <EXTERNAL>::std::__ndk1::__shared_weak_count::__get_deleter =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::__get_deleter(type_info *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f380  <EXTERNAL>::margelo::nitro::JSArrayBuffer::JSArrayBuffer =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall margelo::nitro::JSArrayBuffer::JSArrayBuffer(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f388  <EXTERNAL>::margelo::nitro::JSArrayBuffer::~JSArrayBuffer =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall margelo::nitro::JSArrayBuffer::~JSArrayBuffer(JSArrayBuffer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f398  <EXTERNAL>::margelo::nitro::HybridObject::~HybridObject =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall margelo::nitro::HybridObject::~HybridObject(HybridObject *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f3a0  <EXTERNAL>::facebook::jsi::Object::asArray =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Object::asArray(IRuntime *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f3a8  <EXTERNAL>::margelo::nitro::CommonGlobals::Promise::resolved =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::CommonGlobals::Promise::resolved(Runtime *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f3b0  <EXTERNAL>::margelo::nitro::Promise<void>::getError =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::Promise<void>::getError(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f3b8  <EXTERNAL>::margelo::nitro::Promise<void>::addOnResolvedListener =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::Promise<void>::addOnResolvedListener(function *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f3c0  <EXTERNAL>::margelo::nitro::Promise<void>::addOnRejectedListener =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::Promise<void>::addOnRejectedListener(function *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f3d0  <EXTERNAL>::std::__ndk1::to_string =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::to_string(int param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f3d8  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     insert(ulong param_1,char *param_2,ulong param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f3e0  <EXTERNAL>::std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f3e8  <EXTERNAL>::std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
          (basic_ios<char,std::__ndk1::char_traits<char>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f3f0  <EXTERNAL>::std::__ndk1::ios_base::init =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::init(void *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f3f8  <EXTERNAL>::std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f400  <EXTERNAL>::std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry
          (sentry *this,basic_ostream *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f408  <EXTERNAL>::std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry(sentry *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f410  <EXTERNAL>::std::__ndk1::ios_base::__set_badbit_and_consider_rethrow =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::__set_badbit_and_consider_rethrow(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f418  <EXTERNAL>::std::__ndk1::ios_base::getloc =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::getloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f420  <EXTERNAL>::std::__ndk1::locale::~locale =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::locale::~locale(locale *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f428  <EXTERNAL>::std::__ndk1::locale::use_facet =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::locale::use_facet(id *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f430  <EXTERNAL>::std::__ndk1::ios_base::clear =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::clear(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f438  <EXTERNAL>::std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
          (basic_streambuf<char,std::__ndk1::char_traits<char>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f440  <EXTERNAL>::__strlen_chk =====

/* WARNING: Control flow encountered bad instruction data */

void __strlen_chk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f488  <EXTERNAL>::facebook::react::HostPlatformViewProps::HostPlatformViewProps =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
facebook::react::HostPlatformViewProps::HostPlatformViewProps
          (HostPlatformViewProps *this,PropsParserContext *param_1,HostPlatformViewProps *param_2,
          RawProps *param_3,function *param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f490  <EXTERNAL>::facebook::react::RawProps::parse =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawProps::parse(RawPropsParser *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f498  <EXTERNAL>::facebook::react::HostPlatformViewProps::getDiffPropsImplementationTarget =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::HostPlatformViewProps::getDiffPropsImplementationTarget(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f4a0  <EXTERNAL>::facebook::react::HostPlatformViewProps::getDiffProps =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::HostPlatformViewProps::getDiffProps(Props *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f4a8  <EXTERNAL>::facebook::react::Props::getDiffPropsImplementationTarget =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::Props::getDiffPropsImplementationTarget(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f4b0  <EXTERNAL>::facebook::react::RawProps::at =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawProps::at(char *param_1,char *param_2,char *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f4b8  <EXTERNAL>::facebook::jsi::Value::strictEquals =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::strictEquals(IRuntime *param_1,Value *param_2,Value *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f4c0  <EXTERNAL>::folly::dynamic::destroy =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::dynamic::destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f4c8  <EXTERNAL>::facebook::react::ComponentDescriptor::ComponentDescriptor =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
facebook::react::ComponentDescriptor::ComponentDescriptor
          (ComponentDescriptor *this,ComponentDescriptorParameters *param_1,RawPropsParser *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f4d0  <EXTERNAL>::facebook::react::RawPropsParser::postPrepare =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawPropsParser::postPrepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f4d8  <EXTERNAL>::std::__ndk1::__shared_mutex_base::__shared_mutex_base =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::__shared_mutex_base::__shared_mutex_base(__shared_mutex_base *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f4e0  <EXTERNAL>::std::__ndk1::condition_variable::~condition_variable =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__ndk1::condition_variable::~condition_variable(condition_variable *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f4e8  <EXTERNAL>::facebook::react::RawProps::isEmpty =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawProps::isEmpty(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f4f0  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f4f8  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f500  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f508  <EXTERNAL>::strcmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f510  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f518  <EXTERNAL>::folly::dynamic::dynamic =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall folly::dynamic::dynamic(dynamic *this,dynamic *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f520  <EXTERNAL>::facebook::react::RawProps::operator.cast.to.dynamic =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::RawProps::operator_cast_to_dynamic(RawProps *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f528  <EXTERNAL>::facebook::react::HostPlatformViewProps::setProp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::HostPlatformViewProps::setProp
               (PropsParserContext *param_1,uint param_2,char *param_3,RawValue *param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f530  <EXTERNAL>::facebook::react::Props::initializeDynamicProps =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::Props::initializeDynamicProps
               (Props *param_1,RawProps *param_2,function *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f538  <EXTERNAL>::folly::TypeError::TypeError =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall folly::TypeError::TypeError(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f540  <EXTERNAL>::std::runtime_error::~runtime_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f548  <EXTERNAL>::std::runtime_error::runtime_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::runtime_error::runtime_error(runtime_error *this,runtime_error *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f550  <EXTERNAL>::std::runtime_error::what =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::runtime_error::what(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f558  <EXTERNAL>::facebook::react::State::State =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::State::State(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f560  <EXTERNAL>::folly::dynamic::dynamic =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall folly::dynamic::dynamic(dynamic *this,dynamic *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f568  <EXTERNAL>::facebook::react::ShadowNodeFamily::dispatchRawState =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::ShadowNodeFamily::dispatchRawState(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f570  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::completeClone =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::completeClone
               (ShadowNode *param_1,ShadowNodeFragment *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f578  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::appendChild =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::appendChild(shared_ptr *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f580  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::replaceChild =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::replaceChild
               (ShadowNode *param_1,shared_ptr *param_2,ulong param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f588  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::layoutTree =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::YogaLayoutableShadowNode::layoutTree(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f590  <EXTERNAL>::facebook::react::LayoutableShadowNode::measureContent =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::LayoutableShadowNode::measureContent
               (LayoutContext *param_1,LayoutConstraints *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f598  <EXTERNAL>::facebook::react::LayoutableShadowNode::measure =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::LayoutableShadowNode::measure
               (LayoutContext *param_1,LayoutConstraints *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f5a0  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::layout =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::YogaLayoutableShadowNode::layout(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f5a8  <EXTERNAL>::facebook::react::LayoutableShadowNode::getContentOriginOffset =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::LayoutableShadowNode::getContentOriginOffset(bool param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f5b0  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::dirtyLayout =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::dirtyLayout(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f5b8  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::getIsLayoutClean =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::getIsLayoutClean(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f5c0  <EXTERNAL>::facebook::react::LayoutableShadowNode::baseline =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::LayoutableShadowNode::baseline(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f5c8  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::shouldNewRevisionDirtyMeasurement =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::YogaLayoutableShadowNode::shouldNewRevisionDirtyMeasurement
               (ShadowNode *param_1,ShadowNodeFragment *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f5d0  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f5d8  <EXTERNAL>::facebook::react::LayoutableShadowNode::getLayoutMetrics =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::LayoutableShadowNode::getLayoutMetrics(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f5e0  <EXTERNAL>::facebook::react::BaseViewProps::resolveTransform =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::BaseViewProps::resolveTransform(LayoutMetrics *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f5e8  <EXTERNAL>::facebook::react::ShadowNode::transferRuntimeShadowNodeReference =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::transferRuntimeShadowNodeReference
               (shared_ptr *param_1,ShadowNodeFragment *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f5f0  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
          (YogaLayoutableShadowNode *this,ShadowNode *param_1,ShadowNodeFragment *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f5f8  <EXTERNAL>::facebook::react::State::State =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::State::State(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f600  <EXTERNAL>::facebook::react::ShadowNodeFamily::getMostRecentState =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNodeFamily::getMostRecentState(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f608  <EXTERNAL>::facebook::react::EventEmitter::setShadowNodeFamily =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::react::EventEmitter::setShadowNodeFamily(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f610  <EXTERNAL>::facebook::react::EventEmitter::EventEmitter =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::EventEmitter::EventEmitter(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f618  <EXTERNAL>::facebook::react::EventTarget::EventTarget =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::EventTarget::EventTarget(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f620  <EXTERNAL>::facebook::react::ShadowNodeFamily::ShadowNodeFamily =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::ShadowNodeFamily::ShadowNodeFamily(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f628  <EXTERNAL>::facebook::react::ShadowNodeFamily::~ShadowNodeFamily =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::react::ShadowNodeFamily::~ShadowNodeFamily(ShadowNodeFamily *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f688  <EXTERNAL>::margelo::nitro::JHybridObject::JavaPart::getJHybridObject =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::JHybridObject::JavaPart::getJHybridObject(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f690  <EXTERNAL>::margelo::nitro::JHybridObject::~JHybridObject =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall margelo::nitro::JHybridObject::~JHybridObject(JHybridObject *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f698  <EXTERNAL>::margelo::nitro::JHybridObject::~JHybridObject =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall margelo::nitro::JHybridObject::~JHybridObject(JHybridObject *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f6a0  <EXTERNAL>::margelo::nitro::JHybridObject::dispose =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::JHybridObject::dispose(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f6a8  <EXTERNAL>::margelo::nitro::JHybridObject::equals =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::JHybridObject::equals(shared_ptr *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f6b0  <EXTERNAL>::margelo::nitro::JHybridObject::getExternalMemorySize =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::JHybridObject::getExternalMemorySize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f6b8  <EXTERNAL>::margelo::nitro::JHybridObject::toString =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::JHybridObject::toString(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f6c0  <EXTERNAL>::margelo::nitro::JHybridObject::~JHybridObject =====

/* WARNING: Control flow encountered bad instruction data */

void margelo::nitro::JHybridObject::~JHybridObject(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f6c8  <EXTERNAL>::margelo::nitro::JHybridObject::~JHybridObject =====

/* WARNING: Control flow encountered bad instruction data */

void margelo::nitro::JHybridObject::~JHybridObject(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f6d0  <EXTERNAL>::margelo::nitro::JHybridObject::equals =====

/* WARNING: Control flow encountered bad instruction data */

void margelo::nitro::JHybridObject::equals(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f6d8  <EXTERNAL>::margelo::nitro::JHybridObject::toString =====

/* WARNING: Control flow encountered bad instruction data */

void margelo::nitro::JHybridObject::toString(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f6e0  <EXTERNAL>::margelo::nitro::JHybridObject::dispose =====

/* WARNING: Control flow encountered bad instruction data */

void margelo::nitro::JHybridObject::dispose(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f6e8  <EXTERNAL>::margelo::nitro::JHybridObject::getExternalMemorySize =====

/* WARNING: Control flow encountered bad instruction data */

void margelo::nitro::JHybridObject::getExternalMemorySize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f6f0  <EXTERNAL>::margelo::nitro::JHybridObject::~JHybridObject =====

/* WARNING: Control flow encountered bad instruction data */

void margelo::nitro::JHybridObject::~JHybridObject(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f6f8  <EXTERNAL>::margelo::nitro::JHybridObject::~JHybridObject =====

/* WARNING: Control flow encountered bad instruction data */

void margelo::nitro::JHybridObject::~JHybridObject(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f700  <EXTERNAL>::margelo::nitro::JHybridObject::~JHybridObject =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall margelo::nitro::JHybridObject::~JHybridObject(JHybridObject *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f708  <EXTERNAL>::facebook::jni::ThreadScope::WithClassLoader =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::ThreadScope::WithClassLoader(function *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f710  <EXTERNAL>::facebook::jni::detail::HybridData::create =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::detail::HybridData::create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f718  <EXTERNAL>::facebook::jni::detail::HybridDestructor::setNativePointer =====

/* WARNING: Control flow encountered bad instruction data */

void facebook::jni::detail::HybridDestructor::setNativePointer(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f720  <EXTERNAL>::margelo::nitro::JHybridObject::CxxPart::CxxPart =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall margelo::nitro::JHybridObject::CxxPart::CxxPart(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f728  <EXTERNAL>::margelo::nitro::HybridObject::HybridObject =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall margelo::nitro::HybridObject::HybridObject(HybridObject *this,char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f730  <EXTERNAL>::margelo::nitro::JHybridObject::JHybridObject =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall
margelo::nitro::JHybridObject::JHybridObject(JHybridObject *this,basic_strong_ref *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f758  <EXTERNAL>::facebook::jni::make_jstring =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jni::make_jstring(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f760  <EXTERNAL>::std::bad_optional_access::~bad_optional_access =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::bad_optional_access::~bad_optional_access(bad_optional_access *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f768  <EXTERNAL>::std::exception_ptr::operator= =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::exception_ptr::operator=(exception_ptr *this,exception_ptr *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f770  <EXTERNAL>::std::runtime_error::runtime_error =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::runtime_error::runtime_error(runtime_error *this,runtime_error *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f778  <EXTERNAL>::facebook::jni::JniException::JniException =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jni::JniException::JniException(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f780  <EXTERNAL>::facebook::jni::JniException::JniException =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jni::JniException::JniException(JniException *this,JniException *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f788  <EXTERNAL>::facebook::jni::JniException::~JniException =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall facebook::jni::JniException::~JniException(JniException *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f7a8  <EXTERNAL>::margelo::nitro::Promise<void>::create =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::Promise<void>::create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f7b0  <EXTERNAL>::margelo::nitro::Promise<void>::resolve =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::Promise<void>::resolve(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f7b8  <EXTERNAL>::margelo::nitro::Promise<void>::reject =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void margelo::nitro::Promise<void>::reject(exception_ptr *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f7c0  <EXTERNAL>::facebook::react::StateWrapperImpl::getState =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::StateWrapperImpl::getState(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f7c8  <EXTERNAL>::dl_iterate_phdr =====

/* WARNING: Control flow encountered bad instruction data */

void dl_iterate_phdr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f7d0  <EXTERNAL>::fwrite =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f7d8  <EXTERNAL>::memmove =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f7e0  <EXTERNAL>::free =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f7e8  <EXTERNAL>::malloc =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f7f0  <EXTERNAL>::strncmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f7f8  <EXTERNAL>::fprintf =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f800  <EXTERNAL>::__stack_chk_fail =====

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f808  <EXTERNAL>::pthread_rwlock_wrlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f818  <EXTERNAL>::syscall =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f820  <EXTERNAL>::pthread_rwlock_unlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f828  <EXTERNAL>::memcpy =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f830  <EXTERNAL>::getauxval =====

/* WARNING: Control flow encountered bad instruction data */

void getauxval(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f838  <EXTERNAL>::abort =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f840  <EXTERNAL>::__system_property_get =====

/* WARNING: Control flow encountered bad instruction data */

void __system_property_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f848  <EXTERNAL>::getpid =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f850  <EXTERNAL>::pthread_rwlock_rdlock =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f858  <EXTERNAL>::memset =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0039f860  <EXTERNAL>::fflush =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


