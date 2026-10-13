// ===== 00abbc90  <EXTERNAL>::__errno =====

void __errno(void)

{
  (*(code *)PTR___errno_00b02b88)();
  return;
}


// ===== 00abbca0  <EXTERNAL>::fsync =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fsync(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fsync_00b02b90)(__fd);
  return iVar1;
}


// ===== 00abbcb0  <EXTERNAL>::dlopen =====

void dlopen(void)

{
  (*(code *)PTR_dlopen_00b02b98)();
  return;
}


// ===== 00abbcc0  <EXTERNAL>::dlerror =====

void dlerror(void)

{
  (*(code *)PTR_dlerror_00b02ba0)();
  return;
}


// ===== 00abbcd0  <EXTERNAL>::dlsym =====

void dlsym(void)

{
  (*(code *)PTR_dlsym_00b02ba8)();
  return;
}


// ===== 00abbce0  <EXTERNAL>::dlclose =====

void dlclose(void)

{
  (*(code *)PTR_dlclose_00b02bb0)();
  return;
}


// ===== 00abbcf0  <EXTERNAL>::time =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_00b02bb8)();
  return tVar1;
}


// ===== 00abbd00  <EXTERNAL>::nanosleep =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int nanosleep(timespec *__requested_time,timespec *__remaining)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_nanosleep_00b02bc0)((int)__requested_time);
  return iVar1;
}


// ===== 00abbd10  <EXTERNAL>::gettimeofday =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_00b02bc8)((int)__tv);
  return iVar1;
}


// ===== 00abbd20  sqlite3_file_control =====

void sqlite3_file_control(void)

{
  (*(code *)PTR_sqlite3_file_control_00b02bd0)();
  return;
}


// ===== 00abbd30  sqlite3_exec =====

void sqlite3_exec(void)

{
  (*(code *)PTR_sqlite3_exec_00b02bd8)();
  return;
}


// ===== 00abbd40  sqlite3_column_int =====

void sqlite3_column_int(void)

{
  (*(code *)PTR_sqlite3_column_int_00b02be0)();
  return;
}


// ===== 00abbd50  sqlite3_backup_step =====

void sqlite3_backup_step(void)

{
  (*(code *)PTR_sqlite3_backup_step_00b02be8)();
  return;
}


// ===== 00abbd60  sqlite3_backup_finish =====

void sqlite3_backup_finish(void)

{
  (*(code *)PTR_sqlite3_backup_finish_00b02bf0)();
  return;
}


// ===== 00abbd70  sqlite3_value_blob =====

void sqlite3_value_blob(void)

{
  (*(code *)PTR_sqlite3_value_blob_00b02bf8)();
  return;
}


// ===== 00abbd80  sqlite3_value_text =====

void sqlite3_value_text(void)

{
  (*(code *)PTR_sqlite3_value_text_00b02c00)();
  return;
}


// ===== 00abbd90  sqlite3_value_int =====

void sqlite3_value_int(void)

{
  (*(code *)PTR_sqlite3_value_int_00b02c08)();
  return;
}


// ===== 00abbda0  sqlite3_value_int64 =====

void sqlite3_value_int64(void)

{
  (*(code *)PTR_sqlite3_value_int64_00b02c10)();
  return;
}


// ===== 00abbdb0  sqlite3_value_dup =====

void sqlite3_value_dup(void)

{
  (*(code *)PTR_sqlite3_value_dup_00b02c18)();
  return;
}


// ===== 00abbdc0  sqlite3_result_blob =====

void sqlite3_result_blob(void)

{
  (*(code *)PTR_sqlite3_result_blob_00b02c20)();
  return;
}


// ===== 00abbdd0  sqlite3_result_blob64 =====

void sqlite3_result_blob64(void)

{
  (*(code *)PTR_sqlite3_result_blob64_00b02c28)();
  return;
}


// ===== 00abbde0  sqlite3_result_double =====

void sqlite3_result_double(void)

{
  (*(code *)PTR_sqlite3_result_double_00b02c30)();
  return;
}


// ===== 00abbdf0  sqlite3_result_int =====

void sqlite3_result_int(void)

{
  (*(code *)PTR_sqlite3_result_int_00b02c38)();
  return;
}


// ===== 00abbe00  sqlite3_result_int64 =====

void sqlite3_result_int64(void)

{
  (*(code *)PTR_sqlite3_result_int64_00b02c40)();
  return;
}


// ===== 00abbe10  sqlite3_result_text64 =====

void sqlite3_result_text64(void)

{
  (*(code *)PTR_sqlite3_result_text64_00b02c48)();
  return;
}


// ===== 00abbe20  sqlite3_result_value =====

void sqlite3_result_value(void)

{
  (*(code *)PTR_sqlite3_result_value_00b02c50)();
  return;
}


// ===== 00abbe30  sqlite3_result_error_toobig =====

void sqlite3_result_error_toobig(void)

{
  (*(code *)PTR_sqlite3_result_error_toobig_00b02c58)();
  return;
}


// ===== 00abbe40  sqlite3_result_zeroblob64 =====

void sqlite3_result_zeroblob64(void)

{
  (*(code *)PTR_sqlite3_result_zeroblob64_00b02c60)();
  return;
}


// ===== 00abbe50  sqlite3_result_error_nomem =====

void sqlite3_result_error_nomem(void)

{
  (*(code *)PTR_sqlite3_result_error_nomem_00b02c68)();
  return;
}


// ===== 00abbe60  sqlite3_column_value =====

void sqlite3_column_value(void)

{
  (*(code *)PTR_sqlite3_column_value_00b02c70)();
  return;
}


// ===== 00abbe70  sqlite3_bind_int =====

void sqlite3_bind_int(void)

{
  (*(code *)PTR_sqlite3_bind_int_00b02c78)();
  return;
}


// ===== 00abbe80  sqlite3_bind_value =====

void sqlite3_bind_value(void)

{
  (*(code *)PTR_sqlite3_bind_value_00b02c80)();
  return;
}


// ===== 00abbe90  <EXTERNAL>::strncmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00b02c88)((int)__s1);
  return iVar1;
}


// ===== 00abbea0  sqlite3_value_numeric_type =====

void sqlite3_value_numeric_type(void)

{
  (*(code *)PTR_sqlite3_value_numeric_type_00b02c90)();
  return;
}


// ===== 00abbeb0  sqlite3_blob_open =====

void sqlite3_blob_open(void)

{
  (*(code *)PTR_sqlite3_blob_open_00b02c98)();
  return;
}


// ===== 00abbec0  sqlite3_blob_close =====

void sqlite3_blob_close(void)

{
  (*(code *)PTR_sqlite3_blob_close_00b02ca0)();
  return;
}


// ===== 00abbed0  sqlite3_blob_reopen =====

void sqlite3_blob_reopen(void)

{
  (*(code *)PTR_sqlite3_blob_reopen_00b02ca8)();
  return;
}


// ===== 00abbee0  <EXTERNAL>::strcspn =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strcspn(char *__s,char *__reject)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strcspn_00b02cb0)();
  return sVar1;
}


// ===== 00abbef0  sqlite3_load_extension =====

void sqlite3_load_extension(void)

{
  (*(code *)PTR_sqlite3_load_extension_00b02cb8)();
  return;
}


// ===== 00abbf00  sqlite3_free_table =====

void sqlite3_free_table(void)

{
  (*(code *)PTR_sqlite3_free_table_00b02cc0)();
  return;
}


// ===== 00abbf10  sqlite3_create_module =====

void sqlite3_create_module(void)

{
  (*(code *)PTR_sqlite3_create_module_00b02cc8)();
  return;
}


// ===== 00abbf20  sqlite3_create_module_v2 =====

void sqlite3_create_module_v2(void)

{
  (*(code *)PTR_sqlite3_create_module_v2_00b02cd0)();
  return;
}


// ===== 00abbf30  sqlite3_declare_vtab =====

void sqlite3_declare_vtab(void)

{
  (*(code *)PTR_sqlite3_declare_vtab_00b02cd8)();
  return;
}


// ===== 00abbf40  sqlite3_vtab_on_conflict =====

void sqlite3_vtab_on_conflict(void)

{
  (*(code *)PTR_sqlite3_vtab_on_conflict_00b02ce0)();
  return;
}


// ===== 00abbf50  sqlite3_vtab_config =====

void sqlite3_vtab_config(void)

{
  (*(code *)PTR_sqlite3_vtab_config_00b02ce8)();
  return;
}


// ===== 00abbf60  sqlite3_complete =====

void sqlite3_complete(void)

{
  (*(code *)PTR_sqlite3_complete_00b02cf0)();
  return;
}


// ===== 00abbf70  sqlite3_db_release_memory =====

void sqlite3_db_release_memory(void)

{
  (*(code *)PTR_sqlite3_db_release_memory_00b02cf8)();
  return;
}


// ===== 00abbf80  sqlite3_db_config =====

void sqlite3_db_config(void)

{
  (*(code *)PTR_sqlite3_db_config_00b02d00)();
  return;
}


// ===== 00abbf90  sqlite3_overload_function =====

void sqlite3_overload_function(void)

{
  (*(code *)PTR_sqlite3_overload_function_00b02d08)();
  return;
}


// ===== 00abbfa0  sqlite3_wal_autocheckpoint =====

void sqlite3_wal_autocheckpoint(void)

{
  (*(code *)PTR_sqlite3_wal_autocheckpoint_00b02d10)();
  return;
}


// ===== 00abbfb0  sqlite3_wal_checkpoint_v2 =====

void sqlite3_wal_checkpoint_v2(void)

{
  (*(code *)PTR_sqlite3_wal_checkpoint_v2_00b02d18)();
  return;
}


// ===== 00abbfc0  sqlite3_limit =====

void sqlite3_limit(void)

{
  (*(code *)PTR_sqlite3_limit_00b02d20)();
  return;
}


// ===== 00abbfd0  sqlite3_create_collation_v2 =====

void sqlite3_create_collation_v2(void)

{
  (*(code *)PTR_sqlite3_create_collation_v2_00b02d28)();
  return;
}


// ===== 00abbfe0  sqlite3_table_column_metadata =====

void sqlite3_table_column_metadata(void)

{
  (*(code *)PTR_sqlite3_table_column_metadata_00b02d30)();
  return;
}


// ===== 00abbff0  <EXTERNAL>::strspn =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strspn(char *__s,char *__accept)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strspn_00b02d38)();
  return sVar1;
}


// ===== 00abc000  sqlite3_compileoption_used =====

void sqlite3_compileoption_used(void)

{
  (*(code *)PTR_sqlite3_compileoption_used_00b02d40)();
  return;
}


// ===== 00abc010  <EXTERNAL>::pthread_mutexattr_init =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutexattr_init(pthread_mutexattr_t *__attr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutexattr_init_00b02d48)((int)__attr);
  return iVar1;
}


// ===== 00abc020  <EXTERNAL>::pthread_mutexattr_settype =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutexattr_settype(pthread_mutexattr_t *__attr,int __kind)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutexattr_settype_00b02d50)((int)__attr,__kind);
  return iVar1;
}


// ===== 00abc030  <EXTERNAL>::pthread_mutex_init =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_00b02d58)((int)__mutex);
  return iVar1;
}


// ===== 00abc040  <EXTERNAL>::pthread_mutexattr_destroy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutexattr_destroy(pthread_mutexattr_t *__attr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutexattr_destroy_00b02d60)((int)__attr);
  return iVar1;
}


// ===== 00abc050  <EXTERNAL>::pthread_mutex_destroy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_00b02d68)((int)__mutex);
  return iVar1;
}


// ===== 00abc060  <EXTERNAL>::pthread_mutex_lock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_00b02d70)((int)__mutex);
  return iVar1;
}


// ===== 00abc070  <EXTERNAL>::pthread_mutex_trylock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_trylock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_trylock_00b02d78)((int)__mutex);
  return iVar1;
}


// ===== 00abc080  <EXTERNAL>::pthread_mutex_unlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_00b02d80)((int)__mutex);
  return iVar1;
}


// ===== 00abc090  <EXTERNAL>::open =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_00b02d88)((int)__file,__oflag);
  return iVar1;
}


// ===== 00abc0a0  <EXTERNAL>::sysconf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long sysconf(int __name)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_sysconf_00b02d90)(__name);
  return lVar1;
}


// ===== 00abc0b0  <EXTERNAL>::utimes =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int utimes(char *__file,timeval *__tvp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_utimes_00b02d98)((int)__file);
  return iVar1;
}


// ===== 00abc0c0  <EXTERNAL>::strrchr =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_00b02da0)(__s,__c);
  return pcVar1;
}


// ===== 00abc0d0  <EXTERNAL>::strchr =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_00b02da8)(__s,__c);
  return pcVar1;
}


// ===== 00abc0e0  <EXTERNAL>::localtime_r =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime_r(time_t *__timer,tm *__tp)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_localtime_r_00b02db0)();
  return ptVar1;
}


// ===== 00abc0f0  <EXTERNAL>::memchr =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memchr(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memchr_00b02db8)(__s,__c);
  return pvVar1;
}


// ===== 00abc100  <EXTERNAL>::qsort =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  (*(code *)PTR_qsort_00b02dc0)();
  return;
}


// ===== 00abc110  <EXTERNAL>::log =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double log(double __x)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_log_00b02dc8)();
  return dVar1;
}


// ===== 00abc120  <EXTERNAL>::getcwd =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getcwd(char *__buf,size_t __size)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getcwd_00b02dd0)();
  return pcVar1;
}


// ===== 00abc130  <EXTERNAL>::stat =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat_00b02dd8)((int)__file);
  return iVar1;
}


// ===== 00abc140  <EXTERNAL>::fstat =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat(int __fd,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fstat_00b02de0)(__fd);
  return iVar1;
}


// ===== 00abc150  <EXTERNAL>::fcntl =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fcntl_00b02de8)(__fd,__cmd);
  return iVar1;
}


// ===== 00abc160  <EXTERNAL>::read =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_00b02df0)(__fd);
  return sVar1;
}


// ===== 00abc170  <EXTERNAL>::write =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_00b02df8)(__fd);
  return sVar1;
}


// ===== 00abc180  <EXTERNAL>::fchmod =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fchmod(int __fd,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fchmod_00b02e00)(__fd,__mode);
  return iVar1;
}


// ===== 00abc190  <EXTERNAL>::unlink =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unlink_00b02e08)((int)__name);
  return iVar1;
}


// ===== 00abc1a0  <EXTERNAL>::mkdir =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_mkdir_00b02e10)((int)__path,__mode);
  return iVar1;
}


// ===== 00abc1b0  <EXTERNAL>::rmdir =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rmdir(char *__path)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rmdir_00b02e18)((int)__path);
  return iVar1;
}


// ===== 00abc1c0  <EXTERNAL>::fchown =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fchown(int __fd,__uid_t __owner,__gid_t __group)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fchown_00b02e20)(__fd,__owner,__group);
  return iVar1;
}


// ===== 00abc1d0  <EXTERNAL>::mmap =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_mmap_00b02e28)(__addr,__len,__prot,__flags,__fd);
  return pvVar1;
}


// ===== 00abc1e0  <EXTERNAL>::munmap =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_munmap_00b02e30)((int)__addr);
  return iVar1;
}


// ===== 00abc1f0  <EXTERNAL>::readlink =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_readlink_00b02e38)();
  return sVar1;
}


// ===== 00abc200  <EXTERNAL>::lstat =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int lstat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_lstat_00b02e40)((int)__file);
  return iVar1;
}


// ===== 00abc210  <parking_lot::raw_rwlock::[8]::parking_lot::raw_rwlock::RawRwLock>::lock_shared_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<parking_lot::raw_rwlock::[8]::parking_lot::raw_rwlock::RawRwLock>::lock_shared_slow(void)

{
  (*(code *)PTR_lock_shared_slow_00b02e48)();
  return;
}


// ===== 00abc220  <record_mapper::database::kkv::test_record::TestRecordMemoryStatisticsProperties_as_jsi::traits::NewWithRuntime>::with_runtime =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<record_mapper::database::kkv::test_record::TestRecordMemoryStatisticsProperties_as_jsi::traits::NewWithRuntime>
::with_runtime(void)

{
  (*(code *)PTR_with_runtime_00b02e50)();
  return;
}


// ===== 00abc230  <record_mapper::database::kkv::test_record::TestRecordMemoryStatistics_as_jsi::object::ToObject>::to_object =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<record_mapper::database::kkv::test_record::TestRecordMemoryStatistics_as_jsi::object::ToObject>::
to_object(void)

{
  (*(code *)PTR_to_object_00b02e58)();
  return;
}


// ===== 00abc240  <record_mapper::memory_size::MemoryStatistics_as_jsi::object::ToObject>::to_object =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<record_mapper::memory_size::MemoryStatistics_as_jsi::object::ToObject>::to_object(void)

{
  (*(code *)PTR_to_object_00b02e60)();
  return;
}


// ===== 00abc250  <record_mapper::database::partition::js::PartitionDerivedData_as_jsi::object::ToObject>::to_object =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<record_mapper::database::partition::js::PartitionDerivedData_as_jsi::object::ToObject>::to_object
          (void)

{
  (*(code *)PTR_to_object_00b02e68)();
  return;
}


// ===== 00abc260  <jsi::object::Object_as_jsi::value::ToValue>::to_value =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <jsi::object::Object_as_jsi::value::ToValue>::to_value(void)

{
  (*(code *)PTR_to_value_00b02e70)();
  return;
}


// ===== 00abc270  <core::num::nonzero::NonZero<u64>as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <core::num::nonzero::NonZero<u64>as_core::str::traits::FromStr>::from_str(void)

{
  (*(code *)PTR_from_str_00b02e78)();
  return;
}


// ===== 00abc280  <record_mapper::database::kkv::js::KkvDerivedData_as_jsi::object::ToObject>::to_object =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<record_mapper::database::kkv::js::KkvDerivedData_as_jsi::object::ToObject>::to_object(void)

{
  (*(code *)PTR_to_object_00b02e80)();
  return;
}


// ===== 00abc290  <jsi::symbol::jsi::symbol::Symbol>::for =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <jsi::symbol::jsi::symbol::Symbol>::for(void)

{
  (*(code *)PTR_for_00b02e88)();
  return;
}


// ===== 00abc2a0  <record_mapper::memory_size::ApproximateHeapSize_as_jsi::object::ToObject>::to_object =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<record_mapper::memory_size::ApproximateHeapSize_as_jsi::object::ToObject>::to_object(void)

{
  (*(code *)PTR_to_object_00b02e90)();
  return;
}


// ===== 00abc2b0  <record_mapper::memory_size::MemoryStatisticsProperties_as_jsi::traits::NewWithRuntime>::with_runtime =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<record_mapper::memory_size::MemoryStatisticsProperties_as_jsi::traits::NewWithRuntime>::
with_runtime(void)

{
  (*(code *)PTR_with_runtime_00b02e98)();
  return;
}


// ===== 00abc2c0  <jsi::string::String_as_jsi::value::ToValue>::to_value =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <jsi::string::String_as_jsi::value::ToValue>::to_value(void)

{
  (*(code *)PTR_to_value_00b02ea0)();
  return;
}


// ===== 00abc2d0  <record_mapper::database::MutationMetricsProperties_as_jsi::traits::NewWithRuntime>::with_runtime =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<record_mapper::database::MutationMetricsProperties_as_jsi::traits::NewWithRuntime>::with_runtime
          (void)

{
  (*(code *)PTR_with_runtime_00b02ea8)();
  return;
}


// ===== 00abc2e0  <record_mapper::database::MutationMetrics_as_jsi::object::ToObject>::to_object =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <record_mapper::database::MutationMetrics_as_jsi::object::ToObject>::to_object(void)

{
  (*(code *)PTR_to_object_00b02eb0)();
  return;
}


// ===== 00abc2f0  <alloc[c1f8e832b0d782c7]::rc::Rc<core[bcece726f298455b]::cell::RefCell<core[bcece726f298455b]::option::Option<(jsi[bcce2507d20934e2]::function::Function,jsi[bcce2507d20934e2]::function::Function)>>>>::drop_slow =====

void <alloc[c1f8e832b0d782c7]::rc::Rc<core[bcece726f298455b]::cell::RefCell<core[bcece726f298455b]::option::Option<(jsi[bcce2507d20934e2]::function::Function,jsi[bcce2507d20934e2]::function::Function)>>>>
     ::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b02eb8)();
  return;
}


// ===== 00abc300  cxxbridge1$shared_ptr$facebook$react$CallInvoker$drop =====

void cxxbridge1_shared_ptr_facebook_react_CallInvoker_drop(void)

{
  (*(code *)PTR_cxxbridge1_shared_ptr_facebook_react_CallInvoker_drop_00b02ec0)();
  return;
}


// ===== 00abc310  react_common$ffi$cxxbridge1$194$invoke_async =====

void react_common_ffi_cxxbridge1_194_invoke_async(void)

{
  (*(code *)PTR_react_common_ffi_cxxbridge1_194_invoke_async_00b02ec8)();
  return;
}


// ===== 00abc320  <jsi::error::jsi::error::Error>::new =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <jsi::error::jsi::error::Error>::new(void)

{
  (*(code *)PTR_new_00b02ed0)();
  return;
}


// ===== 00abc330  <jsi::error::Error_as_jsi::value::ToValue>::to_value =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <jsi::error::Error_as_jsi::value::ToValue>::to_value(void)

{
  (*(code *)PTR_to_value_00b02ed8)();
  return;
}


// ===== 00abc340  jsi_sys::ffi::base::ffi::Function_call1 =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall jsi_sys::ffi::base::ffi::Function_call1(void)

{
  (*(code *)PTR_Function_call1_00b02ee0)();
  return;
}


// ===== 00abc350  <jsi::famous_defs::jsi::famous_defs::FamousDefs>::Promise =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <jsi::famous_defs::jsi::famous_defs::FamousDefs>::Promise(void)

{
  (*(code *)PTR_Promise_00b02ee8)();
  return;
}


// ===== 00abc360  <jsi::function::Function_as_jsi::value::ToValue>::to_value =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <jsi::function::Function_as_jsi::value::ToValue>::to_value(void)

{
  (*(code *)PTR_to_value_00b02ef0)();
  return;
}


// ===== 00abc370  jsi_sys::ffi::base::ffi::Function_callAsConstructor1 =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall jsi_sys::ffi::base::ffi::Function_callAsConstructor1(void)

{
  (*(code *)PTR_Function_callAsConstructor1_00b02ef8)();
  return;
}


// ===== 00abc380  cxxbridge1$shared_ptr$facebook$react$CallInvoker$clone =====

void cxxbridge1_shared_ptr_facebook_react_CallInvoker_clone(void)

{
  (*(code *)PTR_cxxbridge1_shared_ptr_facebook_react_CallInvoker_clone_00b02f00)();
  return;
}


// ===== 00abc390  jsi_sys::ffi::base::ffi::Value_clone =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall jsi_sys::ffi::base::ffi::Value_clone(void)

{
  (*(code *)PTR_Value_clone_00b02f08)();
  return;
}


// ===== 00abc3a0  cxxbridge1$shared_ptr$facebook$react$CallInvoker$get =====

void cxxbridge1_shared_ptr_facebook_react_CallInvoker_get(void)

{
  (*(code *)PTR_cxxbridge1_shared_ptr_facebook_react_CallInvoker_get_00b02f10)();
  return;
}


// ===== 00abc3b0  cxxbridge1$shared_ptr$facebook$react$CallInvoker$raw =====

void cxxbridge1_shared_ptr_facebook_react_CallInvoker_raw(void)

{
  (*(code *)PTR_cxxbridge1_shared_ptr_facebook_react_CallInvoker_raw_00b02f18)();
  return;
}


// ===== 00abc3c0  cxxbridge1$shared_ptr$facebook$react$CallInvoker$null =====

void cxxbridge1_shared_ptr_facebook_react_CallInvoker_null(void)

{
  (*(code *)PTR_cxxbridge1_shared_ptr_facebook_react_CallInvoker_null_00b02f20)();
  return;
}


// ===== 00abc3d0  react_common$ffi$cxxbridge1$194$call_rust_task =====

void react_common_ffi_cxxbridge1_194_call_rust_task(void)

{
  (*(code *)PTR_react_common_ffi_cxxbridge1_194_call_rust_task_00b02f28)();
  return;
}


// ===== 00abc3e0  <cxx::unwind::Guard_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <cxx::unwind::Guard_as_core::ops::drop::Drop>::drop(void)

{
  (*(code *)PTR_drop_00b02f30)();
  return;
}


// ===== 00abc3f0  react_common$ffi$cxxbridge1$194$dyn_async_task_drop_in_place =====

void react_common_ffi_cxxbridge1_194_dyn_async_task_drop_in_place(void)

{
  (*(code *)PTR_react_common_ffi_cxxbridge1_194_dyn_async_task_drop_in_place_00b02f38)();
  return;
}


// ===== 00abc400  react_common::ffi::invoke_async =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall react_common::ffi::invoke_async(void)

{
  (*(code *)PTR_invoke_async_00b02f40)();
  return;
}


// ===== 00abc410  react_common::ffi::BoxDynAsyncTask::~BoxDynAsyncTask =====

void __thiscall react_common::ffi::BoxDynAsyncTask::~BoxDynAsyncTask(BoxDynAsyncTask *this)

{
  (*(code *)PTR__BoxDynAsyncTask_00b02f48)();
  return;
}


// ===== 00abc420  react_common::ffi::call_rust_task =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall react_common::ffi::call_rust_task(void)

{
  (*(code *)PTR_call_rust_task_00b02f50)();
  return;
}


// ===== 00abc430  react_common::ffi::dyn_async_task_drop_in_place =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall react_common::ffi::dyn_async_task_drop_in_place(void)

{
  (*(code *)PTR_dyn_async_task_drop_in_place_00b02f58)();
  return;
}


// ===== 00abc440  <EXTERNAL>::abort =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00b02f60)();
  return;
}


// ===== 00abc450  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(alloc[c1f8e832b0d782c7]::string::String,libdiscore_common[1cb84820f9455fa0]::core::experiment_cacher::CacheableExperimentConfig)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<alloc[c1f8e832b0d782c7]::string::String,libdiscore_common[1cb84820f9455fa0]::core::experiment_cacher::CacheableExperimentConfig,std[17aff9129faa4dc5]::hash::random::RandomState>::{closure#0}> =====

void <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(alloc[c1f8e832b0d782c7]::string::String,libdiscore_common[1cb84820f9455fa0]::core::experiment_cacher::CacheableExperimentConfig)>>
     ::reserve_rehash::
     <hashbrown[32fc5d502e7f9af5]::map::make_hasher<alloc[c1f8e832b0d782c7]::string::String,libdiscore_common[1cb84820f9455fa0]::core::experiment_cacher::CacheableExperimentConfig,std[17aff9129faa4dc5]::hash::random::RandomState>::_closure_0_>
               (void)

{
  (*(code *)
    PTR_<hashbrown[32fc5d502e7f9af5]_map_make_hasher<alloc[c1f8e832b0d782c7]_string_String,libdiscore_common[1cb84820f9455fa0]_core_experiment_cacher_CacheableExperimentConfig,std[17aff9129faa4dc5]_hash_random_RandomState>__closure_0_>_00b02f68
  )();
  return;
}


// ===== 00abc460  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(alloc[c1f8e832b0d782c7]::string::String,())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<alloc[c1f8e832b0d782c7]::string::String, =====

void <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(alloc[c1f8e832b0d782c7]::string::String,())>>::
     reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<alloc[c1f8e832b0d782c7]::string
     ::String_(void)

{
  (*(code *)PTR_String__00b02f70)();
  return;
}


// ===== 00abc470  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildRoleId,libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildRoleId,libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}> =====

void <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildRoleId,libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole)>>
     ::reserve_rehash::
     <hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildRoleId,libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
               (void)

{
  (*(code *)
    PTR_<hashbrown[32fc5d502e7f9af5]_map_make_hasher<libdiscore_common[1cb84820f9455fa0]_core_snowflake_GuildRoleId,libdiscore_common[1cb84820f9455fa0]_stores_guild_role_GuildRole,core[bcece726f298455b]_hash_BuildHasherDefault<fxhash[1f38be453d3dbf22]_FxHasher>>__closure_0_>_00b02f78
  )();
  return;
}


// ===== 00abc480  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::UserId,libdiscore_common[1cb84820f9455fa0]::stores::notes::UserNote)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::UserId,libdiscore_common[1cb84820f9455fa0]::stores::notes::UserNote,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}> =====

void <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::UserId,libdiscore_common[1cb84820f9455fa0]::stores::notes::UserNote)>>
     ::reserve_rehash::
     <hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::UserId,libdiscore_common[1cb84820f9455fa0]::stores::notes::UserNote,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
               (void)

{
  (*(code *)
    PTR_<hashbrown[32fc5d502e7f9af5]_map_make_hasher<libdiscore_common[1cb84820f9455fa0]_core_snowflake_UserId,libdiscore_common[1cb84820f9455fa0]_stores_notes_UserNote,core[bcece726f298455b]_hash_BuildHasherDefault<fxhash[1f38be453d3dbf22]_FxHasher>>__closure_0_>_00b02f80
  )();
  return;
}


// ===== 00abc490  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}> =====

void <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji)>>
     ::reserve_rehash::
     <hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
               (void)

{
  (*(code *)
    PTR_<hashbrown[32fc5d502e7f9af5]_map_make_hasher<libdiscore_common[1cb84820f9455fa0]_core_snowflake_EmojiId,libdiscore_common[1cb84820f9455fa0]_stores_guild_emoji_RawGuildEmoji,core[bcece726f298455b]_hash_BuildHasherDefault<fxhash[1f38be453d3dbf22]_FxHasher>>__closure_0_>_00b02f88
  )();
  return;
}


// ===== 00abc4a0  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji>)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}> =====

void <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji>)>>
     ::reserve_rehash::
     <hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
               (void)

{
  (*(code *)
    PTR_<hashbrown[32fc5d502e7f9af5]_map_make_hasher<libdiscore_common[1cb84820f9455fa0]_core_snowflake_GuildId,libdiscore_common[1cb84820f9455fa0]_stores_store_database_partition_Partition<libdiscore_common[1cb84820f9455fa0]_core_snowflake_EmojiId,libdiscore_common[1cb84820f9455fa0]_stores_guild_emoji_RawGuildEmoji>,core[bcece726f298455b]_hash_BuildHasherDefault<fxhash[1f38be453d3dbf22]_FxHasher>>__closure_0_>_00b02f90
  )();
  return;
}


// ===== 00abc4b0  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}> =====

void <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild)>>
     ::reserve_rehash::
     <hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
               (void)

{
  (*(code *)
    PTR_<hashbrown[32fc5d502e7f9af5]_map_make_hasher<libdiscore_common[1cb84820f9455fa0]_core_snowflake_GuildId,libdiscore_common[1cb84820f9455fa0]_stores_guilds_Guild,core[bcece726f298455b]_hash_BuildHasherDefault<fxhash[1f38be453d3dbf22]_FxHasher>>__closure_0_>_00b02f98
  )();
  return;
}


// ===== 00abc4c0  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId, =====

void <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::
     snowflake::GuildId,())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::
     make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId_(void)

{
  (*(code *)PTR_GuildId__00b02fa0)();
  return;
}


// ===== 00abc4d0  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::StickerId,libdiscore_common[1cb84820f9455fa0]::stores::guild_sticker::GuildSticker)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::StickerId,libdiscore_common[1cb84820f9455fa0]::stores::guild_sticker::GuildSticker,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}> =====

void <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::StickerId,libdiscore_common[1cb84820f9455fa0]::stores::guild_sticker::GuildSticker)>>
     ::reserve_rehash::
     <hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::StickerId,libdiscore_common[1cb84820f9455fa0]::stores::guild_sticker::GuildSticker,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
               (void)

{
  (*(code *)
    PTR_<hashbrown[32fc5d502e7f9af5]_map_make_hasher<libdiscore_common[1cb84820f9455fa0]_core_snowflake_StickerId,libdiscore_common[1cb84820f9455fa0]_stores_guild_sticker_GuildSticker,core[bcece726f298455b]_hash_BuildHasherDefault<fxhash[1f38be453d3dbf22]_FxHasher>>__closure_0_>_00b02fa8
  )();
  return;
}


// ===== 00abc4e0  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::stores::blocked_domains::DomainHash,())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::stores::blocked_domains::DomainHash, =====

void <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::stores::
     blocked_domains::DomainHash,())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::
     make_hasher<libdiscore_common[1cb84820f9455fa0]::stores::blocked_domains::DomainHash_(void)

{
  (*(code *)PTR_DomainHash__00b02fb0)();
  return;
}


// ===== 00abc4f0  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(u32,libdiscore_common[1cb84820f9455fa0]::core::http::ActiveRequest)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<u32,libdiscore_common[1cb84820f9455fa0]::core::http::ActiveRequest,std[17aff9129faa4dc5]::hash::random::RandomState>::{closure#0}> =====

void <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(u32,libdiscore_common[1cb84820f9455fa0]::core::http::ActiveRequest)>>
     ::reserve_rehash::
     <hashbrown[32fc5d502e7f9af5]::map::make_hasher<u32,libdiscore_common[1cb84820f9455fa0]::core::http::ActiveRequest,std[17aff9129faa4dc5]::hash::random::RandomState>::_closure_0_>
               (void)

{
  (*(code *)
    PTR_<hashbrown[32fc5d502e7f9af5]_map_make_hasher<u32,libdiscore_common[1cb84820f9455fa0]_core_http_ActiveRequest,std[17aff9129faa4dc5]_hash_random_RandomState>__closure_0_>_00b02fb8
  )();
  return;
}


// ===== 00abc500  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(u64,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild>)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<u64,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}> =====

void <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(u64,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild>)>>
     ::reserve_rehash::
     <hashbrown[32fc5d502e7f9af5]::map::make_hasher<u64,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
               (void)

{
  (*(code *)
    PTR_<hashbrown[32fc5d502e7f9af5]_map_make_hasher<u64,libdiscore_common[1cb84820f9455fa0]_stores_store_database_partition_Partition<libdiscore_common[1cb84820f9455fa0]_core_snowflake_GuildId,libdiscore_common[1cb84820f9455fa0]_stores_guilds_Guild>,core[bcece726f298455b]_hash_BuildHasherDefault<fxhash[1f38be453d3dbf22]_FxHasher>>__closure_0_>_00b02fc0
  )();
  return;
}


// ===== 00abc510  <alloc::sync::[n]::alloc::sync::Arc<futures_util::abortable::AbortInner>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<futures_util::abortable::AbortInner>>::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b02fc8)();
  return;
}


// ===== 00abc520  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji>)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}> =====

void <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji>)>>
     ::reserve_rehash::
     <hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
               (void)

{
  (*(code *)
    PTR_<hashbrown[32fc5d502e7f9af5]_map_make_hasher<libdiscore_common[1cb84820f9455fa0]_core_snowflake_GuildId,libdiscore_common[1cb84820f9455fa0]_stores_store_database_partition_Partition<libdiscore_common[1cb84820f9455fa0]_core_snowflake_EmojiId,libdiscore_common[1cb84820f9455fa0]_stores_guild_emoji_RawGuildEmoji>,core[bcece726f298455b]_hash_BuildHasherDefault<fxhash[1f38be453d3dbf22]_FxHasher>>__closure_0_>_00b02fd0
  )();
  return;
}


// ===== 00abc530  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji>)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}> =====

void <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji>)>>
     ::reserve_rehash::
     <hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
               (void)

{
  (*(code *)
    PTR_<hashbrown[32fc5d502e7f9af5]_map_make_hasher<libdiscore_common[1cb84820f9455fa0]_core_snowflake_GuildId,libdiscore_common[1cb84820f9455fa0]_stores_store_database_partition_Partition<libdiscore_common[1cb84820f9455fa0]_core_snowflake_EmojiId,libdiscore_common[1cb84820f9455fa0]_stores_guild_emoji_RawGuildEmoji>,core[bcece726f298455b]_hash_BuildHasherDefault<fxhash[1f38be453d3dbf22]_FxHasher>>__closure_0_>_00b02fd8
  )();
  return;
}


// ===== 00abc540  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(u64,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild>)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<u64,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}> =====

void <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(u64,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild>)>>
     ::reserve_rehash::
     <hashbrown[32fc5d502e7f9af5]::map::make_hasher<u64,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
               (void)

{
  (*(code *)
    PTR_<hashbrown[32fc5d502e7f9af5]_map_make_hasher<u64,libdiscore_common[1cb84820f9455fa0]_stores_store_database_partition_Partition<libdiscore_common[1cb84820f9455fa0]_core_snowflake_GuildId,libdiscore_common[1cb84820f9455fa0]_stores_guilds_Guild>,core[bcece726f298455b]_hash_BuildHasherDefault<fxhash[1f38be453d3dbf22]_FxHasher>>__closure_0_>_00b02fe0
  )();
  return;
}


// ===== 00abc550  <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<std::collections::hash::set::HashSet<alloc::string::String>>,{backref_37}::HttpError>>>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<std::collections::hash::set::HashSet<alloc::string::String>>,{backref_37}::HttpError>>>>
::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b02fe8)();
  return;
}


// ===== 00abc560  <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<alloc::string::String>,{backref_37}::HttpError>>>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<alloc::string::String>,{backref_37}::HttpError>>>>
::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b02ff0)();
  return;
}


// ===== 00abc570  <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<{backref_41}::stores::blocked_domains::DeltaResponse>,{backref_37}::HttpError>>>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<{backref_41}::stores::blocked_domains::DeltaResponse>,{backref_37}::HttpError>>>>
::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b02ff8)();
  return;
}


// ===== 00abc580  <reqwest::async_impl::decoder::Decoder_as_http_body::Body>::poll_frame =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <reqwest::async_impl::decoder::Decoder_as_http_body::Body>::poll_frame(void)

{
  (*(code *)PTR_poll_frame_00b03000)();
  return;
}


// ===== 00abc590  <core::num::error::ParseIntError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <core::num::error::ParseIntError_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_00b03008)();
  return;
}


// ===== 00abc5a0  <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::PendingKKVChange<libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole>>>::grow_one =====

void <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::PendingKKVChange<libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole>>>
     ::grow_one(void)

{
  (*(code *)PTR_grow_one_00b03010)();
  return;
}


// ===== 00abc5b0  <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::PendingKKVChange<libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji>>>::grow_one =====

void <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::PendingKKVChange<libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji>>>
     ::grow_one(void)

{
  (*(code *)PTR_grow_one_00b03018)();
  return;
}


// ===== 00abc5c0  <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::PendingKKVChange<libdiscore_common[1cb84820f9455fa0]::stores::guild_sticker::GuildSticker>>>::grow_one =====

void <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::PendingKKVChange<libdiscore_common[1cb84820f9455fa0]::stores::guild_sticker::GuildSticker>>>
     ::grow_one(void)

{
  (*(code *)PTR_grow_one_00b03020)();
  return;
}


// ===== 00abc5d0  <serde_json::value::ser::SerializeMap_as_serde::ser::SerializeStruct>::end =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <serde_json::value::ser::SerializeMap_as_serde::ser::SerializeStruct>::end(void)

{
  (*(code *)PTR_end_00b03028)();
  return;
}


// ===== 00abc5e0  <libdiscore_common::stores::blocked_domains::[0]::libdiscore_common::stores::blocked_domains::BlockedDomainsStore>::set_delta_url =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<libdiscore_common::stores::blocked_domains::[0]::libdiscore_common::stores::blocked_domains::BlockedDomainsStore>
::set_delta_url(void)

{
  (*(code *)PTR_set_delta_url_00b03030)();
  return;
}


// ===== 00abc5f0  <libdiscore_common::actions::guilds::[1]::libdiscore_common::actions::guilds::SerializedRole>::into_role =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<libdiscore_common::actions::guilds::[1]::libdiscore_common::actions::guilds::SerializedRole>::
into_role(void)

{
  (*(code *)PTR_into_role_00b03038)();
  return;
}


// ===== 00abc600  <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::write_contended =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::write_contended(void)

{
  (*(code *)PTR_write_contended_00b03040)();
  return;
}


// ===== 00abc610  <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::read_contended =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::read_contended(void)

{
  (*(code *)PTR_read_contended_00b03048)();
  return;
}


// ===== 00abc620  <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers(void)

{
  (*(code *)PTR_wake_writer_or_readers_00b03050)();
  return;
}


// ===== 00abc630  <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::KKVChangeOpcode<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildRoleId,libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole>>>::grow_one =====

void <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::KKVChangeOpcode<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildRoleId,libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole>>>
     ::grow_one(void)

{
  (*(code *)PTR_grow_one_00b03058)();
  return;
}


// ===== 00abc640  <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::KKVChangeOpcode<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji>>>::grow_one =====

void <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::KKVChangeOpcode<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji>>>
     ::grow_one(void)

{
  (*(code *)PTR_grow_one_00b03060)();
  return;
}


// ===== 00abc650  <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::KKVChangeOpcode<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::core::snowflake::StickerId,libdiscore_common[1cb84820f9455fa0]::stores::guild_sticker::GuildSticker>>>::grow_one =====

void <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::KKVChangeOpcode<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::core::snowflake::StickerId,libdiscore_common[1cb84820f9455fa0]::stores::guild_sticker::GuildSticker>>>
     ::grow_one(void)

{
  (*(code *)PTR_grow_one_00b03068)();
  return;
}


// ===== 00abc660  <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::KKVChangeOpcode<u64,libdiscore_common[1cb84820f9455fa0]::core::snowflake::UserId,libdiscore_common[1cb84820f9455fa0]::stores::notes::UserNote>>>::grow_one =====

void <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::KKVChangeOpcode<u64,libdiscore_common[1cb84820f9455fa0]::core::snowflake::UserId,libdiscore_common[1cb84820f9455fa0]::stores::notes::UserNote>>>
     ::grow_one(void)

{
  (*(code *)PTR_grow_one_00b03070)();
  return;
}


// ===== 00abc670  <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::KKVChangeOpcode<u64,libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild>>>::grow_one =====

void <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::KKVChangeOpcode<u64,libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild>>>
     ::grow_one(void)

{
  (*(code *)PTR_grow_one_00b03078)();
  return;
}


// ===== 00abc680  <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::queue::Inner<alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::handle::Handle>>>>::drop_slow =====

void <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::queue::Inner<alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::runtime::scheduler::multi_thread::handle::Handle>>>>
     ::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b03080)();
  return;
}


// ===== 00abc690  <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::park::Inner>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::park::Inner>>::
drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b03088)();
  return;
}


// ===== 00abc6a0  <alloc::sync::[n]::alloc::sync::Arc<()>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <alloc::sync::[n]::alloc::sync::Arc<()>>::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b03090)();
  return;
}


// ===== 00abc6b0  <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::park::Inner>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::park::Inner>>::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b03098)();
  return;
}


// ===== 00abc6c0  <tokio::sync::mpsc::bounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::close =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<tokio::sync::mpsc::bounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::close(void)

{
  (*(code *)PTR_close_00b030a0)();
  return;
}


// ===== 00abc6d0  <alloc::sync::[n]::alloc::sync::Arc<reqwest::async_impl::client::ClientRef>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<reqwest::async_impl::client::ClientRef>>::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b030a8)();
  return;
}


// ===== 00abc6e0  <tokio::sync::batch_semaphore::Acquire_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tokio::sync::batch_semaphore::Acquire_as_core::ops::drop::Drop>::drop(void)

{
  (*(code *)PTR_drop_00b030b0)();
  return;
}


// ===== 00abc6f0  <tokio::sync::notify::Notified_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tokio::sync::notify::Notified_as_core::ops::drop::Drop>::drop(void)

{
  (*(code *)PTR_drop_00b030b8)();
  return;
}


// ===== 00abc700  <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>::drop_slow =====

void <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
     ::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b030c0)();
  return;
}


// ===== 00abc710  <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>::drop_slow =====

void <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
     ::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b030c8)();
  return;
}


// ===== 00abc720  <tokio::runtime::runtime::Runtime_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tokio::runtime::runtime::Runtime_as_core::ops::drop::Drop>::drop(void)

{
  (*(code *)PTR_drop_00b030d0)();
  return;
}


// ===== 00abc730  <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::worker::Worker>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::worker::Worker>>::
drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b030d8)();
  return;
}


// ===== 00abc740  <tokio::runtime::context::current::SetCurrentGuard_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<tokio::runtime::context::current::SetCurrentGuard_as_core::ops::drop::Drop>::drop(void)

{
  (*(code *)PTR_drop_00b030e0)();
  return;
}


// ===== 00abc750  <tokio::runtime::context::runtime::EnterRuntimeGuard_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<tokio::runtime::context::runtime::EnterRuntimeGuard_as_core::ops::drop::Drop>::drop(void)

{
  (*(code *)PTR_drop_00b030e8)();
  return;
}


// ===== 00abc760  <tokio::runtime::blocking::pool::BlockingPool_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tokio::runtime::blocking::pool::BlockingPool_as_core::ops::drop::Drop>::drop(void)

{
  (*(code *)PTR_drop_00b030f0)();
  return;
}


// ===== 00abc770  <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::blocking::pool::Inner>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::blocking::pool::Inner>>::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b030f8)();
  return;
}


// ===== 00abc780  <tokio::runtime::scheduler::current_thread::CoreGuard_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<tokio::runtime::scheduler::current_thread::CoreGuard_as_core::ops::drop::Drop>::drop(void)

{
  (*(code *)PTR_drop_00b03100)();
  return;
}


// ===== 00abc790  std::sys::backtrace::__rust_begin_short_backtrace<std::thread::lifecycle::spawn_unchecked<libdiscore_common::core::async_runtime::TOKIO_RUNTIME_HANDLE::{closure#0}::{closure#0},()>::{closure#0}::{closure#0}::{closure#0},()> =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
std::sys::backtrace::
__rust_begin_short_backtrace<std::thread::lifecycle::spawn_unchecked<libdiscore_common::core::async_runtime::TOKIO_RUNTIME_HANDLE::_closure_0_::_closure_0_,()>::_closure_0_::_closure_0_::_closure_0_,()>
          (void)

{
  (*(code *)
    PTR___rust_begin_short_backtrace<std_thread_lifecycle_spawn_unchecked<libdiscore_common_core_async_runtime_TOKIO_RUNTIME_HANDLE__closure_0___closure_0_,()>__closure_0___closure_0___closure_0_,()>_00b03108
  )();
  return;
}


// ===== 00abc7a0  std::sys::backtrace::__rust_begin_short_backtrace<libdiscore_common::core::async_runtime::TOKIO_RUNTIME_HANDLE::{closure#0}::{closure#0},()> =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
std::sys::backtrace::
__rust_begin_short_backtrace<libdiscore_common::core::async_runtime::TOKIO_RUNTIME_HANDLE::_closure_0_::_closure_0_,()>
          (void)

{
  (*(code *)
    PTR___rust_begin_short_backtrace<libdiscore_common_core_async_runtime_TOKIO_RUNTIME_HANDLE__closure_0___closure_0_,()>_00b03110
  )();
  return;
}


// ===== 00abc7b0  <tokio::util::rand::rt::tokio::util::rand::rt::RngSeedGenerator>::next_seed =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tokio::util::rand::rt::tokio::util::rand::rt::RngSeedGenerator>::next_seed(void)

{
  (*(code *)PTR_next_seed_00b03118)();
  return;
}


// ===== 00abc7c0  <tokio::util::rand::tokio::util::rand::FastRand>::new =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tokio::util::rand::tokio::util::rand::FastRand>::new(void)

{
  (*(code *)PTR_new_00b03120)();
  return;
}


// ===== 00abc7d0  <tokio::runtime::context::current::tokio::runtime::context::Context>::set_current =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<tokio::runtime::context::current::tokio::runtime::context::Context>::set_current(void)

{
  (*(code *)PTR_set_current_00b03128)();
  return;
}


// ===== 00abc7e0  <tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::as_current_thread =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<tokio::runtime::scheduler::[1]::tokio::runtime::scheduler::Handle>::as_current_thread(void)

{
  (*(code *)PTR_as_current_thread_00b03130)();
  return;
}


// ===== 00abc7f0  <tokio::runtime::scheduler::current_thread::tokio::runtime::scheduler::current_thread::CurrentThread>::take_core =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<tokio::runtime::scheduler::current_thread::tokio::runtime::scheduler::current_thread::CurrentThread>
::take_core(void)

{
  (*(code *)PTR_take_core_00b03138)();
  return;
}


// ===== 00abc800  <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notified =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tokio::sync::notify::[4]::tokio::sync::notify::Notify>::notified(void)

{
  (*(code *)PTR_notified_00b03140)();
  return;
}


// ===== 00abc810  std::thread::current::current =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall std::thread::current::current(void)

{
  (*(code *)PTR_current_00b03148)();
  return;
}


// ===== 00abc820  <libdiscore_common::core::http::libdiscore_common::core::http::ProgressCallback>::call =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<libdiscore_common::core::http::libdiscore_common::core::http::ProgressCallback>::call(void)

{
  (*(code *)PTR_call_00b03150)();
  return;
}


// ===== 00abc830  <tokio::sync::batch_semaphore::tokio::sync::batch_semaphore::Semaphore>::new =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tokio::sync::batch_semaphore::tokio::sync::batch_semaphore::Semaphore>::new(void)

{
  (*(code *)PTR_new_00b03158)();
  return;
}


// ===== 00abc840  <futures_util::abortable::[0]::futures_util::abortable::AbortHandle>::new_pair =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <futures_util::abortable::[0]::futures_util::abortable::AbortHandle>::new_pair(void)

{
  (*(code *)PTR_new_pair_00b03160)();
  return;
}


// ===== 00abc850  <futures_util::abortable::[6]::futures_util::abortable::AbortHandle>::abort =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <futures_util::abortable::[6]::futures_util::abortable::AbortHandle>::abort(void)

{
  (*(code *)PTR_abort_00b03168)();
  return;
}


// ===== 00abc860  <reqwest::async_impl::client::reqwest::async_impl::client::ClientBuilder>::new =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <reqwest::async_impl::client::reqwest::async_impl::client::ClientBuilder>::new(void)

{
  (*(code *)PTR_new_00b03170)();
  return;
}


// ===== 00abc870  <reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::build =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::build(void)

{
  (*(code *)PTR_build_00b03178)();
  return;
}


// ===== 00abc880  <tokio::runtime::builder::tokio::runtime::builder::Builder>::new_current_thread =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<tokio::runtime::builder::tokio::runtime::builder::Builder>::new_current_thread(void)

{
  (*(code *)PTR_new_current_thread_00b03180)();
  return;
}


// ===== 00abc890  <tokio::runtime::builder::tokio::runtime::builder::Builder>::max_blocking_threads =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<tokio::runtime::builder::tokio::runtime::builder::Builder>::max_blocking_threads(void)

{
  (*(code *)PTR_max_blocking_threads_00b03188)();
  return;
}


// ===== 00abc8a0  <tokio::runtime::builder::tokio::runtime::builder::Builder>::build =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tokio::runtime::builder::tokio::runtime::builder::Builder>::build(void)

{
  (*(code *)PTR_build_00b03190)();
  return;
}


// ===== 00abc8b0  <std::thread::builder::std::thread::builder::Builder>::name =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <std::thread::builder::std::thread::builder::Builder>::name(void)

{
  (*(code *)PTR_name_00b03198)();
  return;
}


// ===== 00abc8c0  <alloc::sync::[n]::alloc::sync::Arc<std::thread::lifecycle::Packet<()>>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<std::thread::lifecycle::Packet<()>>>::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b031a0)();
  return;
}


// ===== 00abc8d0  <http::method::extension::http::method::extension::InlineExtension>::as_str =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <http::method::extension::http::method::extension::InlineExtension>::as_str(void)

{
  (*(code *)PTR_as_str_00b031a8)();
  return;
}


// ===== 00abc8e0  <reqwest::async_impl::request::reqwest::async_impl::request::RequestBuilder>::headers =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<reqwest::async_impl::request::reqwest::async_impl::request::RequestBuilder>::headers(void)

{
  (*(code *)PTR_headers_00b031b0)();
  return;
}


// ===== 00abc8f0  <reqwest::async_impl::request::reqwest::async_impl::request::RequestBuilder>::send =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<reqwest::async_impl::request::reqwest::async_impl::request::RequestBuilder>::send(void)

{
  (*(code *)PTR_send_00b031b8)();
  return;
}


// ===== 00abc900  <reqwest::async_impl::client::Pending_as_core::future::future::Future>::poll =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <reqwest::async_impl::client::Pending_as_core::future::future::Future>::poll(void)

{
  (*(code *)PTR_poll_00b031c0)();
  return;
}


// ===== 00abc910  <reqwest::async_impl::response::reqwest::async_impl::response::Response>::error_for_status =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<reqwest::async_impl::response::reqwest::async_impl::response::Response>::error_for_status(void)

{
  (*(code *)PTR_error_for_status_00b031c8)();
  return;
}


// ===== 00abc920  <u16_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <u16_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_00b031d0)();
  return;
}


// ===== 00abc930  <core::fmt::num::imp::[a]::u32>::_fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <core::fmt::num::imp::[a]::u32>::_fmt(void)

{
  (*(code *)PTR__fmt_00b031d8)();
  return;
}


// ===== 00abc940  <libdiscore_common::stores::blocked_domains::libdiscore_common::stores::blocked_domains::DomainHash>::from_hex_encoded =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<libdiscore_common::stores::blocked_domains::libdiscore_common::stores::blocked_domains::DomainHash>
::from_hex_encoded(void)

{
  (*(code *)PTR_from_hex_encoded_00b031e0)();
  return;
}


// ===== 00abc950  libdiscore_common::stores::blocked_domains::serialize_blocked_domains =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall libdiscore_common::stores::blocked_domains::serialize_blocked_domains(void)

{
  (*(code *)PTR_serialize_blocked_domains_00b031e8)();
  return;
}


// ===== 00abc960  <tokio::sync::batch_semaphore::Acquire_as_core::future::future::Future>::poll =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tokio::sync::batch_semaphore::Acquire_as_core::future::future::Future>::poll(void)

{
  (*(code *)PTR_poll_00b031f0)();
  return;
}


// ===== 00abc970  <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::PendingKKVChange<libdiscore_common[1cb84820f9455fa0]::stores::notes::UserNote>>>::grow_one =====

void <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::PendingKKVChange<libdiscore_common[1cb84820f9455fa0]::stores::notes::UserNote>>>
     ::grow_one(void)

{
  (*(code *)PTR_grow_one_00b031f8)();
  return;
}


// ===== 00abc980  <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::PendingKKVChange<libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild>>>::grow_one =====

void <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<libdiscore_common[1cb84820f9455fa0]::stores::store_database::opcodes::PendingKKVChange<libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild>>>
     ::grow_one(void)

{
  (*(code *)PTR_grow_one_00b03200)();
  return;
}


// ===== 00abc990  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<bytes::bytes::Bytes>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<bytes::bytes::Bytes>>::grow_one(void)

{
  (*(code *)PTR_grow_one_00b03208)();
  return;
}


// ===== 00abc9a0  <url::UrlQuery_as_form_urlencoded::Target>::as_mut_string =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <url::UrlQuery_as_form_urlencoded::Target>::as_mut_string(void)

{
  (*(code *)PTR_as_mut_string_00b03210)();
  return;
}


// ===== 00abc9b0  form_urlencoded::append_pair =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall form_urlencoded::append_pair(void)

{
  (*(code *)PTR_append_pair_00b03218)();
  return;
}


// ===== 00abc9c0  <alloc::borrow::Cow<str>as_core::convert::From<serde_urlencoded::ser::key::Key>>::from =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::borrow::Cow<str>as_core::convert::From<serde_urlencoded::ser::key::Key>>::from(void)

{
  (*(code *)PTR_from_00b03220)();
  return;
}


// ===== 00abc9d0  <chrono::naive::date::chrono::naive::date::NaiveDate>::from_num_days_from_ce_opt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<chrono::naive::date::chrono::naive::date::NaiveDate>::from_num_days_from_ce_opt(void)

{
  (*(code *)PTR_from_num_days_from_ce_opt_00b03228)();
  return;
}


// ===== 00abc9e0  <chrono::offset::utc::chrono::offset::utc::Utc>::now =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <chrono::offset::utc::chrono::offset::utc::Utc>::now(void)

{
  (*(code *)PTR_now_00b03230)();
  return;
}


// ===== 00abc9f0  <http::error::Error_as_core::error::Error>::source =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <http::error::Error_as_core::error::Error>::source(void)

{
  (*(code *)PTR_source_00b03238)();
  return;
}


// ===== 00abca00  <libdiscore_common::core::http::native::StreamingBody_as_futures_core::stream::Stream>::poll_next =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<libdiscore_common::core::http::native::StreamingBody_as_futures_core::stream::Stream>::poll_next
          (void)

{
  (*(code *)PTR_poll_next_00b03240)();
  return;
}


// ===== 00abca10  <tokio::fs::file::File_as_tokio::io::async_seek::AsyncSeek>::start_seek =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tokio::fs::file::File_as_tokio::io::async_seek::AsyncSeek>::start_seek(void)

{
  (*(code *)PTR_start_seek_00b03248)();
  return;
}


// ===== 00abca20  <tokio::runtime::park::[2]::tokio::runtime::park::CachedParkThread>::waker =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tokio::runtime::park::[2]::tokio::runtime::park::CachedParkThread>::waker(void)

{
  (*(code *)PTR_waker_00b03250)();
  return;
}


// ===== 00abca30  <tokio::runtime::park::[2]::tokio::runtime::park::CachedParkThread>::park =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tokio::runtime::park::[2]::tokio::runtime::park::CachedParkThread>::park(void)

{
  (*(code *)PTR_park_00b03258)();
  return;
}


// ===== 00abca40  <tokio::task::coop::with_budget::ResetGuard_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tokio::task::coop::with_budget::ResetGuard_as_core::ops::drop::Drop>::drop(void)

{
  (*(code *)PTR_drop_00b03260)();
  return;
}


// ===== 00abca50  <tokio::sync::notify::Notified_as_core::future::future::Future>::poll =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tokio::sync::notify::Notified_as_core::future::future::Future>::poll(void)

{
  (*(code *)PTR_poll_00b03268)();
  return;
}


// ===== 00abca60  <url::url::Url>::query_pairs_mut =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <url::url::Url>::query_pairs_mut(void)

{
  (*(code *)PTR_query_pairs_mut_00b03270)();
  return;
}


// ===== 00abca70  <url::UrlQuery_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <url::UrlQuery_as_core::ops::drop::Drop>::drop(void)

{
  (*(code *)PTR_drop_00b03278)();
  return;
}


// ===== 00abca80  <url::url::Url>::query =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <url::url::Url>::query(void)

{
  (*(code *)PTR_query_00b03280)();
  return;
}


// ===== 00abca90  <url::url::Url>::set_query =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <url::url::Url>::set_query(void)

{
  (*(code *)PTR_set_query_00b03288)();
  return;
}


// ===== 00abcaa0  <tokio::sync::mpsc::bounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::add_permit =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<tokio::sync::mpsc::bounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::add_permit(void)

{
  (*(code *)PTR_add_permit_00b03290)();
  return;
}


// ===== 00abcab0  <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<bytes::bytes::Bytes>>::grow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<bytes::bytes::Bytes>>::
grow(void)

{
  (*(code *)PTR_grow_00b03298)();
  return;
}


// ===== 00abcac0  <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::reserve_inner =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <bytes::bytes_mut::bytes::bytes_mut::BytesMut>::reserve_inner(void)

{
  (*(code *)PTR_reserve_inner_00b032a0)();
  return;
}


// ===== 00abcad0  <bytes::bytes::Bytes_as_bytes::buf::buf_impl::Buf>::copy_to_bytes =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <bytes::bytes::Bytes_as_bytes::buf::buf_impl::Buf>::copy_to_bytes(void)

{
  (*(code *)PTR_copy_to_bytes_00b032a8)();
  return;
}


// ===== 00abcae0  bytes::panic_advance =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall bytes::panic_advance(void)

{
  (*(code *)PTR_panic_advance_00b032b0)();
  return;
}


// ===== 00abcaf0  <bytes::bytes_mut::BytesMut_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <bytes::bytes_mut::BytesMut_as_core::ops::drop::Drop>::drop(void)

{
  (*(code *)PTR_drop_00b032b8)();
  return;
}


// ===== 00abcb00  core[bcece726f298455b]::panicking::assert_failed::<core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::task::core::Header>>,core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::task::core::Header>>> =====

void core[bcece726f298455b]::panicking::assert_failed::
     <core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::task::core::Header>>,core[bcece726f298455b]::option::Option<core[bcece726f298455b]::ptr::non_null::NonNull<tokio[8c8895dbfa691109]::runtime::task::core::Header>>>
               (void)

{
  (*(code *)
    PTR_<core[bcece726f298455b]_option_Option<core[bcece726f298455b]_ptr_non_null_NonNull<tokio[8c8895dbfa691109]_runtime_task_core_Header>>,core[bcece726f298455b]_option_Option<core[bcece726f298455b]_ptr_non_null_NonNull<tokio[8c8895dbfa691109]_runtime_task_core_Header>>>_00b032c0
  )();
  return;
}


// ===== 00abcb10  <tokio::sync::mpsc::bounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::is_idle =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<tokio::sync::mpsc::bounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::is_idle(void)

{
  (*(code *)PTR_is_idle_00b032c8)();
  return;
}


// ===== 00abcb20  <futures_core::task::__internal::atomic_waker::futures_core::task::__internal::atomic_waker::AtomicWaker>::register =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<futures_core::task::__internal::atomic_waker::futures_core::task::__internal::atomic_waker::AtomicWaker>
::register(void)

{
  (*(code *)PTR_register_00b032d0)();
  return;
}


// ===== 00abcb30  <libdiscore_common::stores::guild_role::libdiscore_common::stores::guild_role::GuildRole>::from_server =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<libdiscore_common::stores::guild_role::libdiscore_common::stores::guild_role::GuildRole>::
from_server(void)

{
  (*(code *)PTR_from_server_00b032d8)();
  return;
}


// ===== 00abcb40  <serde_json::read::SliceRead_as_serde_json::read::Read>::parse_str =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <serde_json::read::SliceRead_as_serde_json::read::Read>::parse_str(void)

{
  (*(code *)PTR_parse_str_00b032e0)();
  return;
}


// ===== 00abcb50  <url::url::ParseOptions>::parse =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <url::url::ParseOptions>::parse(void)

{
  (*(code *)PTR_parse_00b032e8)();
  return;
}


// ===== 00abcb60  <url::url::Url>::host_str =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <url::url::Url>::host_str(void)

{
  (*(code *)PTR_host_str_00b032f0)();
  return;
}


// ===== 00abcb70  sha2::sha256::compress256 =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall sha2::sha256::compress256(void)

{
  (*(code *)PTR_compress256_00b032f8)();
  return;
}


// ===== 00abcb80  <core::fmt::Formatter_as_core::fmt::Write>::write_char =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <core::fmt::Formatter_as_core::fmt::Write>::write_char(void)

{
  (*(code *)PTR_write_char_00b03300)();
  return;
}


// ===== 00abcb90  <anyhow::Error_as_core::ops::deref::DerefMut>::deref_mut =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <anyhow::Error_as_core::ops::deref::DerefMut>::deref_mut(void)

{
  (*(code *)PTR_deref_mut_00b03308)();
  return;
}


// ===== 00abcba0  <anyhow[66ce4f23143367e5]::context::Quoted<&mut_core[bcece726f298455b]::fmt::Formatter>as_core[bcece726f298455b]::fmt::Write>::write_str =====

void <anyhow[66ce4f23143367e5]::context::Quoted<&mut_core[bcece726f298455b]::fmt::Formatter>as_core[bcece726f298455b]::fmt::Write>
     ::write_str(void)

{
  (*(code *)PTR_write_str_00b03310)();
  return;
}


// ===== 00abcbb0  <tokio::runtime::runtime::tokio::runtime::runtime::Runtime>::enter =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tokio::runtime::runtime::tokio::runtime::runtime::Runtime>::enter(void)

{
  (*(code *)PTR_enter_00b03318)();
  return;
}


// ===== 00abcbc0  <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::poll =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::poll(void)

{
  (*(code *)PTR_poll_00b03320)();
  return;
}


// ===== 00abcbd0  <tokio::runtime::scheduler::[3]::tokio::runtime::scheduler::Context>::expect_current_thread =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<tokio::runtime::scheduler::[3]::tokio::runtime::scheduler::Context>::expect_current_thread(void)

{
  (*(code *)PTR_expect_current_thread_00b03328)();
  return;
}


// ===== 00abcbe0  <tokio::sync::mpsc::bounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::is_closed =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<tokio::sync::mpsc::bounded::Semaphore_as_tokio::sync::mpsc::chan::Semaphore>::is_closed(void)

{
  (*(code *)PTR_is_closed_00b03330)();
  return;
}


// ===== 00abcbf0  <serde_json::value::ser::SerializeMap_as_serde::ser::SerializeMap>::end =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <serde_json::value::ser::SerializeMap_as_serde::ser::SerializeMap>::end(void)

{
  (*(code *)PTR_end_00b03338)();
  return;
}


// ===== 00abcc00  <serde_json::value::ser::Serializer_as_serde::ser::Serializer>::serialize_seq =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <serde_json::value::ser::Serializer_as_serde::ser::Serializer>::serialize_seq(void)

{
  (*(code *)PTR_serialize_seq_00b03340)();
  return;
}


// ===== 00abcc10  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<serde_json::value::Value>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<serde_json::value::Value>>::grow_one(void)

{
  (*(code *)PTR_grow_one_00b03348)();
  return;
}


// ===== 00abcc20  <tokio::runtime::scheduler::current_thread::[2]::tokio::runtime::scheduler::current_thread::Handle>::waker_ref =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<tokio::runtime::scheduler::current_thread::[2]::tokio::runtime::scheduler::current_thread::Handle>
::waker_ref(void)

{
  (*(code *)PTR_waker_ref_00b03350)();
  return;
}


// ===== 00abcc30  <tokio::runtime::scheduler::current_thread::[0]::tokio::runtime::scheduler::current_thread::Core>::next_task =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<tokio::runtime::scheduler::current_thread::[0]::tokio::runtime::scheduler::current_thread::Core>::
next_task(void)

{
  (*(code *)PTR_next_task_00b03358)();
  return;
}


// ===== 00abcc40  <tokio::runtime::scheduler::current_thread::[1]::tokio::runtime::scheduler::current_thread::Context>::park_yield =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<tokio::runtime::scheduler::current_thread::[1]::tokio::runtime::scheduler::current_thread::Context>
::park_yield(void)

{
  (*(code *)PTR_park_yield_00b03360)();
  return;
}


// ===== 00abcc50  <tokio::runtime::scheduler::defer::tokio::runtime::scheduler::defer::Defer>::is_empty =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<tokio::runtime::scheduler::defer::tokio::runtime::scheduler::defer::Defer>::is_empty(void)

{
  (*(code *)PTR_is_empty_00b03368)();
  return;
}


// ===== 00abcc60  <tokio::runtime::scheduler::current_thread::[1]::tokio::runtime::scheduler::current_thread::Context>::park =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<tokio::runtime::scheduler::current_thread::[1]::tokio::runtime::scheduler::current_thread::Context>
::park(void)

{
  (*(code *)PTR_park_00b03370)();
  return;
}


// ===== 00abcc70  <&alloc::string::String_as_reqwest::into_url::IntoUrlSealed>::into_url =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <&alloc::string::String_as_reqwest::into_url::IntoUrlSealed>::into_url(void)

{
  (*(code *)PTR_into_url_00b03378)();
  return;
}


// ===== 00abcc80  <reqwest::async_impl::request::reqwest::async_impl::request::RequestBuilder>::new =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<reqwest::async_impl::request::reqwest::async_impl::request::RequestBuilder>::new(void)

{
  (*(code *)PTR_new_00b03380)();
  return;
}


// ===== 00abcc90  <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::drop_slow
          (void)

{
  (*(code *)PTR_drop_slow_00b03388)();
  return;
}


// ===== 00abcca0  <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b03390)();
  return;
}


// ===== 00abccb0  <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b03398)();
  return;
}


// ===== 00abccc0  <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b033a0)();
  return;
}


// ===== 00abccd0  <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b033a8)();
  return;
}


// ===== 00abcce0  <alloc::sync::[n]::alloc::sync::Arc<rustls::crypto::CryptoProvider>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<rustls::crypto::CryptoProvider>>::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b033b0)();
  return;
}


// ===== 00abccf0  <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b033b8)();
  return;
}


// ===== 00abcd00  <alloc::sync::[n]::alloc::sync::Arc<rustls::compress::CompressionCache>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<rustls::compress::CompressionCache>>::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b033c0)();
  return;
}


// ===== 00abcd10  <alloc::sync::[n]::alloc::sync::Arc<std::collections::hash::map::HashMap<alloc::string::String,reqwest::proxy::ProxyScheme>>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<std::collections::hash::map::HashMap<alloc::string::String,reqwest::proxy::ProxyScheme>>>
::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b033c8)();
  return;
}


// ===== 00abcd20  <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::drop_slow
          (void)

{
  (*(code *)PTR_drop_slow_00b033d0)();
  return;
}


// ===== 00abcd30  <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::drop_slow
          (void)

{
  (*(code *)PTR_drop_slow_00b033d8)();
  return;
}


// ===== 00abcd40  <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<http[b87e90c26fe47eb4]::header::map::ExtraValue<http[b87e90c26fe47eb4]::header::value::HeaderValue>>>::grow_one =====

void <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<http[b87e90c26fe47eb4]::header::map::ExtraValue<http[b87e90c26fe47eb4]::header::value::HeaderValue>>>
     ::grow_one(void)

{
  (*(code *)PTR_grow_one_00b033e0)();
  return;
}


// ===== 00abcd50  <serde_json::read::StrRead_as_serde_json::read::Read>::ignore_str =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <serde_json::read::StrRead_as_serde_json::read::Read>::ignore_str(void)

{
  (*(code *)PTR_ignore_str_00b033e8)();
  return;
}


// ===== 00abcd60  <serde_json::read::SliceRead_as_serde_json::read::Read>::ignore_str =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <serde_json::read::SliceRead_as_serde_json::read::Read>::ignore_str(void)

{
  (*(code *)PTR_ignore_str_00b033f0)();
  return;
}


// ===== 00abcd70  <std::time::std::time::Instant>::now =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <std::time::std::time::Instant>::now(void)

{
  (*(code *)PTR_now_00b033f8)();
  return;
}


// ===== 00abcd80  <std::time::std::time::Instant>::elapsed =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <std::time::std::time::Instant>::elapsed(void)

{
  (*(code *)PTR_elapsed_00b03400)();
  return;
}


// ===== 00abcd90  <serde_json::read::SliceRead_as_serde_json::read::Read>::peek_position =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <serde_json::read::SliceRead_as_serde_json::read::Read>::peek_position(void)

{
  (*(code *)PTR_peek_position_00b03408)();
  return;
}


// ===== 00abcda0  <serde_json::de::[3]::serde_json::de::Deserializer<serde_json::read::SliceRead>>::parse_decimal_overflow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<serde_json::de::[3]::serde_json::de::Deserializer<serde_json::read::SliceRead>>::
parse_decimal_overflow(void)

{
  (*(code *)PTR_parse_decimal_overflow_00b03410)();
  return;
}


// ===== 00abcdb0  <serde_json::de::[3]::serde_json::de::Deserializer<serde_json::read::SliceRead>>::parse_long_integer =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<serde_json::de::[3]::serde_json::de::Deserializer<serde_json::read::SliceRead>>::parse_long_integer
          (void)

{
  (*(code *)PTR_parse_long_integer_00b03418)();
  return;
}


// ===== 00abcdc0  <serde_json::de::[3]::serde_json::de::Deserializer<serde_json::read::SliceRead>>::parse_exponent_overflow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<serde_json::de::[3]::serde_json::de::Deserializer<serde_json::read::SliceRead>>::
parse_exponent_overflow(void)

{
  (*(code *)PTR_parse_exponent_overflow_00b03420)();
  return;
}


// ===== 00abcdd0  <serde_json::read::SliceRead_as_serde_json::read::Read>::position =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <serde_json::read::SliceRead_as_serde_json::read::Read>::position(void)

{
  (*(code *)PTR_position_00b03428)();
  return;
}


// ===== 00abcde0  core::panicking::assert_failed<u32,u32> =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall core::panicking::assert_failed<u32,u32>(void)

{
  (*(code *)PTR_assert_failed<u32,u32>_00b03430)();
  return;
}


// ===== 00abcdf0  <bytes::bytes_mut::BytesMut_as_bytes::buf::buf_mut::BufMut>::put_slice =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <bytes::bytes_mut::BytesMut_as_bytes::buf::buf_mut::BufMut>::put_slice(void)

{
  (*(code *)PTR_put_slice_00b03438)();
  return;
}


// ===== 00abce00  <alloc::io::error::core::io::error::Error>::new<hyper::proto::h1::decode::IncompleteBody> =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::io::error::core::io::error::Error>::new<hyper::proto::h1::decode::IncompleteBody>(void)

{
  (*(code *)PTR_new<hyper_proto_h1_decode_IncompleteBody>_00b03440)();
  return;
}


// ===== 00abce10  hyper::proto::h1::decode::decode_trailers =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall hyper::proto::h1::decode::decode_trailers(void)

{
  (*(code *)PTR_decode_trailers_00b03448)();
  return;
}


// ===== 00abce20  <rustls::client::client_conn::connection::[2]::rustls::client::client_conn::connection::ClientConnection>::new =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<rustls::client::client_conn::connection::[2]::rustls::client::client_conn::connection::ClientConnection>
::new(void)

{
  (*(code *)PTR_new_00b03450)();
  return;
}


// ===== 00abce30  <alloc::io::error::core::io::error::Error>::new<rustls::error::Error> =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <alloc::io::error::core::io::error::Error>::new<rustls::error::Error>(void)

{
  (*(code *)PTR_new<rustls_error_Error>_00b03458)();
  return;
}


// ===== 00abce40  <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(void)

{
  (*(code *)PTR_drop_00b03460)();
  return;
}


// ===== 00abce50  <alloc::sync::[n]::alloc::sync::Arc<hyper_util::client::legacy::connect::http::Config>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<hyper_util::client::legacy::connect::http::Config>>::drop_slow
          (void)

{
  (*(code *)PTR_drop_slow_00b03468)();
  return;
}


// ===== 00abce60  <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b03470)();
  return;
}


// ===== 00abce70  <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_hyper_rustls[8b73b3c5adfefd00]::connector::ResolveServerName+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>::drop_slow =====

void <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_hyper_rustls[8b73b3c5adfefd00]::connector::ResolveServerName+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
     ::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b03478)();
  return;
}


// ===== 00abce80  <alloc::sync::[n]::alloc::sync::Arc<alloc::vec::Vec<reqwest::proxy::Proxy>>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<alloc::vec::Vec<reqwest::proxy::Proxy>>>::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b03480)();
  return;
}


// ===== 00abce90  <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b03488)();
  return;
}


// ===== 00abcea0  <tokio::runtime::io::registration::Registration_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<tokio::runtime::io::registration::Registration_as_core::ops::drop::Drop>::drop(void)

{
  (*(code *)PTR_drop_00b03490)();
  return;
}


// ===== 00abceb0  <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::io::scheduled_io::ScheduledIo>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::io::scheduled_io::ScheduledIo>>::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b03498)();
  return;
}


// ===== 00abcec0  <tokio::time::instant::tokio::time::instant::Instant>::checked_add =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tokio::time::instant::tokio::time::instant::Instant>::checked_add(void)

{
  (*(code *)PTR_checked_add_00b034a0)();
  return;
}


// ===== 00abced0  <tokio::time::sleep::tokio::time::sleep::Sleep>::new_timeout =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tokio::time::sleep::tokio::time::sleep::Sleep>::new_timeout(void)

{
  (*(code *)PTR_new_timeout_00b034a8)();
  return;
}


// ===== 00abcee0  <tokio::time::sleep::tokio::time::sleep::Sleep>::far_future =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tokio::time::sleep::tokio::time::sleep::Sleep>::far_future(void)

{
  (*(code *)PTR_far_future_00b034b0)();
  return;
}


// ===== 00abcef0  <http::uri::scheme::Scheme_as_core::cmp::PartialEq>::eq =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <http::uri::scheme::Scheme_as_core::cmp::PartialEq>::eq(void)

{
  (*(code *)PTR_eq_00b034b8)();
  return;
}


// ===== 00abcf00  <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::set_nodelay =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::set_nodelay(void)

{
  (*(code *)PTR_set_nodelay_00b034c0)();
  return;
}


// ===== 00abcf10  <rustls::conn::connection::Reader_as_alloc::io::buf_read::BufRead>::consume =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <rustls::conn::connection::Reader_as_alloc::io::buf_read::BufRead>::consume(void)

{
  (*(code *)PTR_consume_00b034c8)();
  return;
}


// ===== 00abcf20  <hyper::proto::h1::decode::Decoder_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <hyper::proto::h1::decode::Decoder_as_core::fmt::Debug>::fmt(void)

{
  (*(code *)PTR_fmt_00b034d0)();
  return;
}


// ===== 00abcf30  <rustls::conn::connection::Writer_as_core::io::write::Write>::flush =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <rustls::conn::connection::Writer_as_core::io::write::Write>::flush(void)

{
  (*(code *)PTR_flush_00b034d8)();
  return;
}


// ===== 00abcf40  <rustls::conn::connection::Writer_as_core::io::write::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <rustls::conn::connection::Writer_as_core::io::write::Write>::write(void)

{
  (*(code *)PTR_write_00b034e0)();
  return;
}


// ===== 00abcf50  <rustls::common_state::rustls::common_state::CommonState>::send_close_notify =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <rustls::common_state::rustls::common_state::CommonState>::send_close_notify(void)

{
  (*(code *)PTR_send_close_notify_00b034e8)();
  return;
}


// ===== 00abcf60  <rustls::conn::connection::Writer_as_core::io::write::Write>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <rustls::conn::connection::Writer_as_core::io::write::Write>::write_vectored(void)

{
  (*(code *)PTR_write_vectored_00b034f0)();
  return;
}


// ===== 00abcf70  <socket2[797b7815e2a0656b]::sockaddr::SockAddr_as_core[bcece726f298455b]::convert::From<core[bcece726f298455b]::net::socket_addr::SocketAddr>>::from =====

void <socket2[797b7815e2a0656b]::sockaddr::SockAddr_as_core[bcece726f298455b]::convert::From<core[bcece726f298455b]::net::socket_addr::SocketAddr>>
     ::from(void)

{
  (*(code *)PTR_from_00b034f8)();
  return;
}


// ===== 00abcf80  <socket2::socket::socket2::socket::Socket>::connect =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <socket2::socket::socket2::socket::Socket>::connect(void)

{
  (*(code *)PTR_connect_00b03500)();
  return;
}


// ===== 00abcf90  <mio::net::tcp::stream::TcpStream_as_std::os::fd::raw::FromRawFd>::from_raw_fd =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <mio::net::tcp::stream::TcpStream_as_std::os::fd::raw::FromRawFd>::from_raw_fd(void)

{
  (*(code *)PTR_from_raw_fd_00b03508)();
  return;
}


// ===== 00abcfa0  <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::new =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::new(void)

{
  (*(code *)PTR_new_00b03510)();
  return;
}


// ===== 00abcfb0  <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::poll_write_ready =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
poll_write_ready(void)

{
  (*(code *)PTR_poll_write_ready_00b03518)();
  return;
}


// ===== 00abcfc0  <mio::net::tcp::stream::mio::net::tcp::stream::TcpStream>::take_error =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <mio::net::tcp::stream::mio::net::tcp::stream::TcpStream>::take_error(void)

{
  (*(code *)PTR_take_error_00b03520)();
  return;
}


// ===== 00abcfd0  <http::uri::Uri_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <http::uri::Uri_as_core::fmt::Debug>::fmt(void)

{
  (*(code *)PTR_fmt_00b03528)();
  return;
}


// ===== 00abcfe0  reqwest::connect::into_uri =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall reqwest::connect::into_uri(void)

{
  (*(code *)PTR_into_uri_00b03530)();
  return;
}


// ===== 00abcff0  http::uri::authority::host =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall http::uri::authority::host(void)

{
  (*(code *)PTR_host_00b03538)();
  return;
}


// ===== 00abd000  <rustls_pki_types::server_name::ServerName_as_core::convert::TryFrom<alloc::string::String>>::try_from =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<rustls_pki_types::server_name::ServerName_as_core::convert::TryFrom<alloc::string::String>>::
try_from(void)

{
  (*(code *)PTR_try_from_00b03540)();
  return;
}


// ===== 00abd010  <http::uri::http::uri::Uri>::port =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <http::uri::http::uri::Uri>::port(void)

{
  (*(code *)PTR_port_00b03548)();
  return;
}


// ===== 00abd020  reqwest::connect::tunnel_eof =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall reqwest::connect::tunnel_eof(void)

{
  (*(code *)PTR_tunnel_eof_00b03550)();
  return;
}


// ===== 00abd030  <alloc::sync::[n]::alloc::sync::Arc<futures_channel::mpsc::BoundedInner<core::result::Result<bytes::bytes::Bytes,hyper::error::Error>>>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<futures_channel::mpsc::BoundedInner<core::result::Result<bytes::bytes::Bytes,hyper::error::Error>>>>
::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b03558)();
  return;
}


// ===== 00abd040  <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<http::header::map::HeaderMap>>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<http::header::map::HeaderMap>>>
::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b03560)();
  return;
}


// ===== 00abd050  <hyper::common::watch::Sender_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <hyper::common::watch::Sender_as_core::ops::drop::Drop>::drop(void)

{
  (*(code *)PTR_drop_00b03568)();
  return;
}


// ===== 00abd060  <alloc::sync::[n]::alloc::sync::Arc<hyper::common::watch::Shared>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <alloc::sync::[n]::alloc::sync::Arc<hyper::common::watch::Shared>>::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b03570)();
  return;
}


// ===== 00abd070  <http::uri::http::uri::Uri>::from_shared =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <http::uri::http::uri::Uri>::from_shared(void)

{
  (*(code *)PTR_from_shared_00b03578)();
  return;
}


// ===== 00abd080  <reqwest::async_impl::body::Body_as_http_body::Body>::poll_frame =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <reqwest::async_impl::body::Body_as_http_body::Body>::poll_frame(void)

{
  (*(code *)PTR_poll_frame_00b03580)();
  return;
}


// ===== 00abd090  <bytes::bytes::bytes::bytes::Bytes>::split_off =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <bytes::bytes::bytes::bytes::Bytes>::split_off(void)

{
  (*(code *)PTR_split_off_00b03588)();
  return;
}


// ===== 00abd0a0  <http::status::StatusCode_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <http::status::StatusCode_as_core::fmt::Debug>::fmt(void)

{
  (*(code *)PTR_fmt_00b03590)();
  return;
}


// ===== 00abd0b0  <reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::resolve_to_addrs =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::resolve_to_addrs
          (void)

{
  (*(code *)PTR_resolve_to_addrs_00b03598)();
  return;
}


// ===== 00abd0c0  http::header::name::parse_hdr =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall http::header::name::parse_hdr(void)

{
  (*(code *)PTR_parse_hdr_00b035a0)();
  return;
}


// ===== 00abd0d0  <alloc::sync::[n]::alloc::sync::Arc<rustls::webpki::anchors::RootCertStore>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<rustls::webpki::anchors::RootCertStore>>::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b035a8)();
  return;
}


// ===== 00abd0e0  <alloc::sync::[n]::alloc::sync::Arc<std::collections::hash::map::HashMap<alloc::string::String,alloc::vec::Vec<core::net::socket_addr::SocketAddr>>>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<std::collections::hash::map::HashMap<alloc::string::String,alloc::vec::Vec<core::net::socket_addr::SocketAddr>>>>
::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b035b0)();
  return;
}


// ===== 00abd0f0  <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::drop_slow
          (void)

{
  (*(code *)PTR_drop_slow_00b035b8)();
  return;
}


// ===== 00abd100  <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::sync::poison::mutex::Mutex<hyper_util[52a210df7efc1bae]::client::legacy::pool::PoolInner<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>,(http[b87e90c26fe47eb4]::uri::scheme::Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority)>>>>::drop_slow =====

void <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::sync::poison::mutex::Mutex<hyper_util[52a210df7efc1bae]::client::legacy::pool::PoolInner<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>,(http[b87e90c26fe47eb4]::uri::scheme::Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority)>>>>
     ::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b035c0)();
  return;
}


// ===== 00abd110  <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::drop_slow
          (void)

{
  (*(code *)PTR_drop_slow_00b035c8)();
  return;
}


// ===== 00abd120  <http[b87e90c26fe47eb4]::header::name::HeaderName_as_core[bcece726f298455b]::convert::From<&http[b87e90c26fe47eb4]::header::name::HeaderName>>::from =====

void <http[b87e90c26fe47eb4]::header::name::HeaderName_as_core[bcece726f298455b]::convert::From<&http[b87e90c26fe47eb4]::header::name::HeaderName>>
     ::from(void)

{
  (*(code *)PTR_from_00b035d0)();
  return;
}


// ===== 00abd130  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<rustls_pki_types::PrivateKeyDer>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<rustls_pki_types::PrivateKeyDer>>::grow_one(void)

{
  (*(code *)PTR_grow_one_00b035d8)();
  return;
}


// ===== 00abd140  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<reqwest::proxy::Proxy>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<reqwest::proxy::Proxy>>::grow_one(void)

{
  (*(code *)PTR_grow_one_00b035e0)();
  return;
}


// ===== 00abd150  <rustls::crypto::rustls::crypto::CryptoProvider>::get_default =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <rustls::crypto::rustls::crypto::CryptoProvider>::get_default(void)

{
  (*(code *)PTR_get_default_00b035e8)();
  return;
}


// ===== 00abd160  rustls::crypto::ring::default_provider =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall rustls::crypto::ring::default_provider(void)

{
  (*(code *)PTR_default_provider_00b035f0)();
  return;
}


// ===== 00abd170  <rustls::client::client_conn::rustls::client::client_conn::ClientConfig>::builder_with_provider =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<rustls::client::client_conn::rustls::client::client_conn::ClientConfig>::builder_with_provider
          (void)

{
  (*(code *)PTR_builder_with_provider_00b035f8)();
  return;
}


// ===== 00abd180  <rustls::webpki::server_verifier::rustls::webpki::server_verifier::WebPkiServerVerifier>::builder_with_provider =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<rustls::webpki::server_verifier::rustls::webpki::server_verifier::WebPkiServerVerifier>::
builder_with_provider(void)

{
  (*(code *)PTR_builder_with_provider_00b03600)();
  return;
}


// ===== 00abd190  <rustls::webpki::server_verifier::rustls::webpki::server_verifier::ServerCertVerifierBuilder>::build =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<rustls::webpki::server_verifier::rustls::webpki::server_verifier::ServerCertVerifierBuilder>::build
          (void)

{
  (*(code *)PTR_build_00b03608)();
  return;
}


// ===== 00abd1a0  <rustls::client::builder::[0]::rustls::builder::ConfigBuilder<rustls::client::client_conn::ClientConfig,rustls::client::builder::WantsClientCert>>::with_no_client_auth =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<rustls::client::builder::[0]::rustls::builder::ConfigBuilder<rustls::client::client_conn::ClientConfig,rustls::client::builder::WantsClientCert>>
::with_no_client_auth(void)

{
  (*(code *)PTR_with_no_client_auth_00b03610)();
  return;
}


// ===== 00abd1b0  <alloc::vec::Vec<u8>as_core::convert::From<&str>>::from =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <alloc::vec::Vec<u8>as_core::convert::From<&str>>::from(void)

{
  (*(code *)PTR_from_00b03618)();
  return;
}


// ===== 00abd1c0  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<reqwest::tls::CertificateRevocationList>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<reqwest::tls::CertificateRevocationList>>::grow_one
          (void)

{
  (*(code *)PTR_grow_one_00b03620)();
  return;
}


// ===== 00abd1d0  <http::request::[2]::http::request::Parts>::new =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <http::request::[2]::http::request::Parts>::new(void)

{
  (*(code *)PTR_new_00b03628)();
  return;
}


// ===== 00abd1e0  <http::request::[4]::http::request::Builder>::version =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <http::request::[4]::http::request::Builder>::version(void)

{
  (*(code *)PTR_version_00b03630)();
  return;
}


// ===== 00abd1f0  <http::header::name::HeaderName_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <http::header::name::HeaderName_as_core::fmt::Debug>::fmt(void)

{
  (*(code *)PTR_fmt_00b03638)();
  return;
}


// ===== 00abd200  <u16_as_core::fmt::LowerHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <u16_as_core::fmt::LowerHex>::fmt(void)

{
  (*(code *)PTR_fmt_00b03640)();
  return;
}


// ===== 00abd210  <u16_as_core::fmt::UpperHex>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <u16_as_core::fmt::UpperHex>::fmt(void)

{
  (*(code *)PTR_fmt_00b03648)();
  return;
}


// ===== 00abd220  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_fields_finish =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <core::fmt::[a]::core::fmt::Formatter>::debug_struct_fields_finish(void)

{
  (*(code *)PTR_debug_struct_fields_finish_00b03650)();
  return;
}


// ===== 00abd230  <url::url::Url>::username =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <url::url::Url>::username(void)

{
  (*(code *)PTR_username_00b03658)();
  return;
}


// ===== 00abd240  <url::url::Url>::password =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <url::url::Url>::password(void)

{
  (*(code *)PTR_password_00b03660)();
  return;
}


// ===== 00abd250  <url::url::Url>::host =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <url::url::Url>::host(void)

{
  (*(code *)PTR_host_00b03668)();
  return;
}


// ===== 00abd260  <url::url::Url>::path =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <url::url::Url>::path(void)

{
  (*(code *)PTR_path_00b03670)();
  return;
}


// ===== 00abd270  <url::url::Url>::fragment =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <url::url::Url>::fragment(void)

{
  (*(code *)PTR_fragment_00b03678)();
  return;
}


// ===== 00abd280  <reqwest::async_impl::client::PendingRequest_as_core::future::future::Future>::poll =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<reqwest::async_impl::client::PendingRequest_as_core::future::future::Future>::poll(void)

{
  (*(code *)PTR_poll_00b03680)();
  return;
}


// ===== 00abd290  <hyper_util::client::legacy::client::ResponseFuture_as_core::future::future::Future>::poll =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<hyper_util::client::legacy::client::ResponseFuture_as_core::future::future::Future>::poll(void)

{
  (*(code *)PTR_poll_00b03688)();
  return;
}


// ===== 00abd2a0  <url::url::Url>::set_username =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <url::url::Url>::set_username(void)

{
  (*(code *)PTR_set_username_00b03690)();
  return;
}


// ===== 00abd2b0  <url::url::Url>::set_password =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <url::url::Url>::set_password(void)

{
  (*(code *)PTR_set_password_00b03698)();
  return;
}


// ===== 00abd2c0  <url::url::Url>::set_fragment =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <url::url::Url>::set_fragment(void)

{
  (*(code *)PTR_set_fragment_00b036a0)();
  return;
}


// ===== 00abd2d0  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<url::Url>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<url::Url>>::grow_one(void)

{
  (*(code *)PTR_grow_one_00b036a8)();
  return;
}


// ===== 00abd2e0  <core::net::ip_addr::IpAddr_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <core::net::ip_addr::IpAddr_as_core::fmt::Debug>::fmt(void)

{
  (*(code *)PTR_fmt_00b036b0)();
  return;
}


// ===== 00abd2f0  <rustls::msgs::base::PayloadU8_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <rustls::msgs::base::PayloadU8_as_core::fmt::Debug>::fmt(void)

{
  (*(code *)PTR_fmt_00b036b8)();
  return;
}


// ===== 00abd300  <rustls::webpki::anchors::RootCertStore_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <rustls::webpki::anchors::RootCertStore_as_core::fmt::Debug>::fmt(void)

{
  (*(code *)PTR_fmt_00b036c0)();
  return;
}


// ===== 00abd310  <alloc::sync::[n]::alloc::sync::Arc<core::sync::atomic::Atomic<bool>>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<core::sync::atomic::Atomic<bool>>>::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b036c8)();
  return;
}


// ===== 00abd320  <alloc::sync::[n]::alloc::sync::Arc<want::Inner>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <alloc::sync::[n]::alloc::sync::Arc<want::Inner>>::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b036d0)();
  return;
}


// ===== 00abd330  <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<hyper[9f1bfd30b08ca095]::client::dispatch::Envelope<http[b87e90c26fe47eb4]::request::Request<reqwest[6fed810f3e38d558]::async_impl::body::Body>,http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>>,tokio[8c8895dbfa691109]::sync::mpsc::unbounded::Semaphore>>>::drop_slow =====

void <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<hyper[9f1bfd30b08ca095]::client::dispatch::Envelope<http[b87e90c26fe47eb4]::request::Request<reqwest[6fed810f3e38d558]::async_impl::body::Body>,http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>>,tokio[8c8895dbfa691109]::sync::mpsc::unbounded::Semaphore>>>
     ::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b036d8)();
  return;
}


// ===== 00abd340  <alloc::sync::[n]::alloc::sync::Arc<rustls::msgs::base::PayloadU16>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<rustls::msgs::base::PayloadU16>>::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b036e0)();
  return;
}


// ===== 00abd350  <hyper_util::client::legacy::connect::hyper_util::client::legacy::connect::PoisonPill>::poisoned =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<hyper_util::client::legacy::connect::hyper_util::client::legacy::connect::PoisonPill>::poisoned
          (void)

{
  (*(code *)PTR_poisoned_00b036e8)();
  return;
}


// ===== 00abd360  <std::time::std::time::Instant>::duration_since =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <std::time::std::time::Instant>::duration_since(void)

{
  (*(code *)PTR_duration_since_00b036f0)();
  return;
}


// ===== 00abd370  tracing::__macro_support::__is_enabled =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall tracing::__macro_support::__is_enabled(void)

{
  (*(code *)PTR___is_enabled_00b036f8)();
  return;
}


// ===== 00abd380  <tracing_core::event::tracing_core::event::Event>::dispatch =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tracing_core::event::tracing_core::event::Event>::dispatch(void)

{
  (*(code *)PTR_dispatch_00b03700)();
  return;
}


// ===== 00abd390  <tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::register =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::register(void)

{
  (*(code *)PTR_register_00b03708)();
  return;
}


// ===== 00abd3a0  <rustls::vecbuf::rustls::vecbuf::ChunkVecBuffer>::is_full =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <rustls::vecbuf::rustls::vecbuf::ChunkVecBuffer>::is_full(void)

{
  (*(code *)PTR_is_full_00b03710)();
  return;
}


// ===== 00abd3b0  <rustls::msgs::deframer::buffers::[3]::rustls::msgs::deframer::buffers::DeframerVecBuffer>::read =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<rustls::msgs::deframer::buffers::[3]::rustls::msgs::deframer::buffers::DeframerVecBuffer>::read
          (void)

{
  (*(code *)PTR_read_00b03718)();
  return;
}


// ===== 00abd3c0  <rustls::msgs::deframer::buffers::[2]::rustls::msgs::deframer::buffers::DeframerVecBuffer>::filled_mut =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<rustls::msgs::deframer::buffers::[2]::rustls::msgs::deframer::buffers::DeframerVecBuffer>::
filled_mut(void)

{
  (*(code *)PTR_filled_mut_00b03720)();
  return;
}


// ===== 00abd3d0  <rustls::msgs::deframer::handshake::rustls::msgs::deframer::handshake::HandshakeDeframer>::has_message_ready =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<rustls::msgs::deframer::handshake::rustls::msgs::deframer::handshake::HandshakeDeframer>::
has_message_ready(void)

{
  (*(code *)PTR_has_message_ready_00b03728)();
  return;
}


// ===== 00abd3e0  <rustls::msgs::deframer::handshake::HandshakeIter_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<rustls::msgs::deframer::handshake::HandshakeIter_as_core::iter::traits::iterator::Iterator>::next
          (void)

{
  (*(code *)PTR_next_00b03730)();
  return;
}


// ===== 00abd3f0  <rustls::msgs::deframer::handshake::HandshakeIter_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<rustls::msgs::deframer::handshake::HandshakeIter_as_core::ops::drop::Drop>::drop(void)

{
  (*(code *)PTR_drop_00b03738)();
  return;
}


// ===== 00abd400  <rustls::msgs::deframer::DeframerIter_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<rustls::msgs::deframer::DeframerIter_as_core::iter::traits::iterator::Iterator>::next(void)

{
  (*(code *)PTR_next_00b03740)();
  return;
}


// ===== 00abd410  <rustls::record_layer::rustls::record_layer::RecordLayer>::decrypt_incoming =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <rustls::record_layer::rustls::record_layer::RecordLayer>::decrypt_incoming(void)

{
  (*(code *)PTR_decrypt_incoming_00b03748)();
  return;
}


// ===== 00abd420  <rustls::msgs::deframer::handshake::rustls::msgs::deframer::handshake::HandshakeDeframer>::is_aligned =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<rustls::msgs::deframer::handshake::rustls::msgs::deframer::handshake::HandshakeDeframer>::
is_aligned(void)

{
  (*(code *)PTR_is_aligned_00b03750)();
  return;
}


// ===== 00abd430  <rustls::conn::[9]::rustls::conn::InboundUnborrowedMessage>::reborrow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <rustls::conn::[9]::rustls::conn::InboundUnborrowedMessage>::reborrow(void)

{
  (*(code *)PTR_reborrow_00b03758)();
  return;
}


// ===== 00abd440  <rustls::msgs::deframer::handshake::rustls::msgs::deframer::handshake::HandshakeDeframer>::input_message =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<rustls::msgs::deframer::handshake::rustls::msgs::deframer::handshake::HandshakeDeframer>::
input_message(void)

{
  (*(code *)PTR_input_message_00b03760)();
  return;
}


// ===== 00abd450  <rustls::msgs::deframer::handshake::rustls::msgs::deframer::handshake::HandshakeDeframer>::coalesce =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<rustls::msgs::deframer::handshake::rustls::msgs::deframer::handshake::HandshakeDeframer>::coalesce
          (void)

{
  (*(code *)PTR_coalesce_00b03768)();
  return;
}


// ===== 00abd460  <rustls::msgs::message::Message_as_core::convert::TryFrom<rustls::msgs::message::inbound::InboundPlainMessage>>::try_from =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<rustls::msgs::message::Message_as_core::convert::TryFrom<rustls::msgs::message::inbound::InboundPlainMessage>>
::try_from(void)

{
  (*(code *)PTR_try_from_00b03770)();
  return;
}


// ===== 00abd470  <rustls::common_state::rustls::common_state::CommonState>::send_msg =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <rustls::common_state::rustls::common_state::CommonState>::send_msg(void)

{
  (*(code *)PTR_send_msg_00b03778)();
  return;
}


// ===== 00abd480  <rustls::msgs::deframer::buffers::[2]::rustls::msgs::deframer::buffers::DeframerVecBuffer>::discard =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<rustls::msgs::deframer::buffers::[2]::rustls::msgs::deframer::buffers::DeframerVecBuffer>::discard
          (void)

{
  (*(code *)PTR_discard_00b03780)();
  return;
}


// ===== 00abd490  <rustls::common_state::rustls::common_state::CommonState>::process_alert =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <rustls::common_state::rustls::common_state::CommonState>::process_alert(void)

{
  (*(code *)PTR_process_alert_00b03788)();
  return;
}


// ===== 00abd4a0  <rustls::msgs::deframer::buffers::[2]::rustls::msgs::deframer::buffers::DeframerVecBuffer>::filled =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<rustls::msgs::deframer::buffers::[2]::rustls::msgs::deframer::buffers::DeframerVecBuffer>::filled
          (void)

{
  (*(code *)PTR_filled_00b03790)();
  return;
}


// ===== 00abd4b0  <rustls::common_state::rustls::common_state::CommonState>::current_io_state =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <rustls::common_state::rustls::common_state::CommonState>::current_io_state(void)

{
  (*(code *)PTR_current_io_state_00b03798)();
  return;
}


// ===== 00abd4c0  <rustls::msgs::message::outbound::rustls::msgs::message::outbound::OutboundChunks>::new =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<rustls::msgs::message::outbound::rustls::msgs::message::outbound::OutboundChunks>::new(void)

{
  (*(code *)PTR_new_00b037a0)();
  return;
}


// ===== 00abd4d0  <rustls::common_state::rustls::common_state::CommonState>::buffer_plaintext =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <rustls::common_state::rustls::common_state::CommonState>::buffer_plaintext(void)

{
  (*(code *)PTR_buffer_plaintext_00b037a8)();
  return;
}


// ===== 00abd4e0  <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<hyper_util::client::legacy::client::PoolClient<reqwest::async_impl::body::Body>>>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<hyper_util::client::legacy::client::PoolClient<reqwest::async_impl::body::Body>>>>
::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b037b0)();
  return;
}


// ===== 00abd4f0  <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::oneshot::Inner<core[bcece726f298455b]::result::Result<http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>,hyper[9f1bfd30b08ca095]::client::dispatch::TrySendError<http[b87e90c26fe47eb4]::request::Request<reqwest[6fed810f3e38d558]::async_impl::body::Body>>>>>>::drop_slow =====

void <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::oneshot::Inner<core[bcece726f298455b]::result::Result<http[b87e90c26fe47eb4]::response::Response<hyper[9f1bfd30b08ca095]::body::incoming::Incoming>,hyper[9f1bfd30b08ca095]::client::dispatch::TrySendError<http[b87e90c26fe47eb4]::request::Request<reqwest[6fed810f3e38d558]::async_impl::body::Body>>>>>>
     ::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b037b8)();
  return;
}


// ===== 00abd500  <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::sync::poison::mutex::Mutex<tokio[8c8895dbfa691109]::sync::oneshot::Receiver<core[bcece726f298455b]::result::Result<hyper[9f1bfd30b08ca095]::upgrade::Upgraded,hyper[9f1bfd30b08ca095]::error::Error>>>>>::drop_slow =====

void <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::sync::poison::mutex::Mutex<tokio[8c8895dbfa691109]::sync::oneshot::Receiver<core[bcece726f298455b]::result::Result<hyper[9f1bfd30b08ca095]::upgrade::Upgraded,hyper[9f1bfd30b08ca095]::error::Error>>>>>
     ::drop_slow(void)

{
  (*(code *)PTR_drop_slow_00b037c0)();
  return;
}


// ===== 00abd510  <hyper::error::hyper::error::Error>::new_canceled =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <hyper::error::hyper::error::Error>::new_canceled(void)

{
  (*(code *)PTR_new_canceled_00b037c8)();
  return;
}


// ===== 00abd520  <hyper_util::client::legacy::connect::[1]::hyper_util::client::legacy::connect::Extra>::set =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<hyper_util::client::legacy::connect::[1]::hyper_util::client::legacy::connect::Extra>::set(void)

{
  (*(code *)PTR_set_00b037d0)();
  return;
}


// ===== 00abd530  <hyper_util::client::legacy::connect::[0]::hyper_util::client::legacy::connect::Connected>::clone =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<hyper_util::client::legacy::connect::[0]::hyper_util::client::legacy::connect::Connected>::clone
          (void)

{
  (*(code *)PTR_clone_00b037d8)();
  return;
}


// ===== 00abd540  <hyper_util::client::legacy::client::[f]::hyper_util::client::legacy::client::Error>::with_connect_info =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<hyper_util::client::legacy::client::[f]::hyper_util::client::legacy::client::Error>::
with_connect_info(void)

{
  (*(code *)PTR_with_connect_info_00b037e0)();
  return;
}


// ===== 00abd550  <hyper_util::client::legacy::connect::capture::hyper_util::client::legacy::connect::capture::CaptureConnectionExtension>::set =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<hyper_util::client::legacy::connect::capture::hyper_util::client::legacy::connect::capture::CaptureConnectionExtension>
::set(void)

{
  (*(code *)PTR_set_00b037e8)();
  return;
}


// ===== 00abd560  hyper_util::client::legacy::client::authority_form =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall hyper_util::client::legacy::client::authority_form(void)

{
  (*(code *)PTR_authority_form_00b037f0)();
  return;
}


// ===== 00abd570  hyper_util::client::legacy::client::absolute_form =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall hyper_util::client::legacy::client::absolute_form(void)

{
  (*(code *)PTR_absolute_form_00b037f8)();
  return;
}


// ===== 00abd580  hyper_util::client::legacy::client::origin_form =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall hyper_util::client::legacy::client::origin_form(void)

{
  (*(code *)PTR_origin_form_00b03800)();
  return;
}


